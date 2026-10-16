// Force-disassemble all executable memory, seed functions from call targets
// (and the lowest address), then decompile every function to C.
// Output path from GHIDRA_OUT.
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.TreeSet;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;

public class DecompilePPC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = System.getenv("GHIDRA_OUT");
        Memory mem = currentProgram.getMemory();
        AddressSetView ex = mem.getExecuteSet();
        Listing lst = currentProgram.getListing();

        // Linear sweep: decode every aligned word so bad/data words don't stop us.
        Address cur = ex.getMinAddress();
        Address max = ex.getMaxAddress();
        while (cur != null && max != null && cur.compareTo(max) <= 0 && !monitor.isCancelled()) {
            disassemble(cur);
            cur = cur.add(4);
        }

        TreeSet<Address> seeds = new TreeSet<>();
        Address min = ex.getMinAddress();
        if (min != null) {
            seeds.add(min);
        }
        InstructionIterator it = lst.getInstructions(ex, true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (ins.getFlowType().isCall() || ins.getFlowType().isJump()) {
                for (Address f : ins.getFlows()) {
                    if (ex.contains(f)) {
                        seeds.add(f);
                    }
                }
            }
        }
        for (Address a : seeds) {
            if (lst.getFunctionContaining(a) == null) {
                try {
                    createFunction(a, null);
                } catch (Exception e) {
                    // ignore
                }
            }
        }

        DecompInterface ifc = new DecompInterface();
        ifc.toggleCCode(true);
        ifc.openProgram(currentProgram);

        int total = 0;
        int ok = 0;
        PrintWriter w = new PrintWriter(new FileWriter(out));
        w.println("// Decompiled from " + currentProgram.getName()
                + "  base=" + currentProgram.getImageBase()
                + "  (approximate C, for reading only)");
        FunctionIterator fns = currentProgram.getFunctionManager().getFunctions(true);
        while (fns.hasNext() && !monitor.isCancelled()) {
            Function f = fns.next();
            if (f.isExternal()) {
                continue;
            }
            total++;
            DecompileResults r = ifc.decompileFunction(f, 30, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                w.println("/* ==== " + f.getName() + " @ " + f.getEntryPoint() + " ==== */");
                w.println(r.getDecompiledFunction().getC());
                ok++;
            } else {
                w.println("/* ==== " + f.getName() + " @ " + f.getEntryPoint()
                        + " : decompile failed ==== */");
            }
        }
        w.close();
        ifc.dispose();
        println("seeds=" + seeds.size() + " decompiled " + ok + "/" + total + " -> " + out);
    }
}
