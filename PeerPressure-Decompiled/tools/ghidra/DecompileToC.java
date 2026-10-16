// Decompile every function of the current program to (approximate) C.
// Output path comes from the GHIDRA_OUT environment variable.
import java.io.FileWriter;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class DecompileToC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = System.getenv("GHIDRA_OUT");
        if (out == null) {
            out = System.getProperty("java.io.tmpdir") + "/decomp.c";
        }
        DecompInterface ifc = new DecompInterface();
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        if (!ifc.openProgram(currentProgram)) {
            println("decompiler failed to open program");
            return;
        }
        int total = 0;
        int ok = 0;
        PrintWriter w = new PrintWriter(new FileWriter(out));
        w.println("// Decompiled from " + currentProgram.getName()
                + " (approximate C, for reading only)");
        FunctionIterator fns = currentProgram.getFunctionManager().getFunctions(true);
        while (fns.hasNext() && !monitor.isCancelled()) {
            Function f = fns.next();
            total++;
            DecompileResults r = ifc.decompileFunction(f, 60, monitor);
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
        println("decompiled " + ok + "/" + total + " functions -> " + out);
    }
}
