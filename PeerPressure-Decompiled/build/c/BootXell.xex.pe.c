// Decompiled from BootXell.xex.pe  base=98000000  (approximate C, for reading only)
/* ==== FUN_98005000 @ 98005000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005e00 @ 98005e00 ==== */

void FUN_98005e00(void)

{
  syscall(0);
  return;
}


/* ==== FUN_98005e10 @ 98005e10 ==== */

void FUN_98005e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x98005e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam91a19480)();
  return;
}


/* ==== FUN_98005e28 @ 98005e28 ==== */

void FUN_98005e28(void)

{
                    /* WARNING: Could not recover jumptable at 0x98005e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam91a19480)();
  return;
}


/* ==== FUN_98005e60 @ 98005e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005ee0 @ 98005ee0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005ee0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005f90 @ 98005f90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005f90(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_9800d24c();
  puVar9 = (uint *)((ulonglong)uVar10 >> 0x20);
  puVar8 = (uint *)((int)puVar9 + (int)uVar10);
  if (puVar9 != puVar8) {
    do {
      iVar6 = 3;
      puVar7 = (undefined4 *)&DAT_91a18040;
      do {
        pcVar3 = (char *)*puVar7;
        pcVar4 = pcVar3;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = ((int)pcVar4 - (int)pcVar3) - 1;
        if ((uVar5 <= (uint)((int)puVar8 - (int)puVar9)) &&
           (uVar2 = func_0x98017f78(puVar9,pcVar3,uVar5), uVar2 == uVar5)) {
          if (*(char *)((int)puVar9 + -1) == '/') {
            puVar9 = (uint *)((int)puVar9 + -1);
            uVar5 = (int)pcVar4 - (int)pcVar3;
          }
          FUN_9800d9e0(puVar9,0,uVar5);
          *(undefined1 *)puVar9 = 1;
        }
        iVar6 = iVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
      puVar9 = (uint *)((int)puVar9 + 1);
    } while (puVar9 != puVar8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006060 @ 98006060 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006060(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006138 @ 98006138 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006210 @ 98006210 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006210(void)

{
  int iVar1;
  char cVar4;
  uint *puVar2;
  int iVar3;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d250();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  cVar4 = FUN_98005f90();
  if ((((cVar4 != '\x01') && (0x4009 < (uint)uVar5)) && (*(short *)(iVar1 + 0x4000) == 0x1f8b)) &&
     ((*(char *)(iVar1 + 0x4002) == '\b' && (puVar2 = (uint *)FUN_9800dae0(), puVar2 != (uint *)0x0)
      ))) {
    FUN_9800d9e0(puVar2,0,0x100000);
    iVar3 = FUN_98006060();
    if ((iVar3 == 0) && (cVar4 = FUN_98005f90(), cVar4 != '\0')) {
      FUN_9800d9e0((uint *)(iVar1 + 0x400a),0,(uint)uVar5 - 0x401a);
      FUN_98006138();
    }
    FUN_9800da80();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006310 @ 98006310 ==== */

undefined4 FUN_98006310(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    if (puVar1 <= param_2) {
      puVar1 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      if (param_2 < (undefined4 *)(param_1[4] + (int)puVar1)) {
        return 1;
      }
    }
  }
  return 0;
}


/* ==== FUN_98006368 @ 98006368 ==== */

int FUN_98006368(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x3fffffff < param_1 || (iVar1 = FUN_98007f28(), iVar1 == 0)))) {
    iVar1 = FUN_98005e60();
  }
  return iVar1;
}


/* ==== FUN_980063d0 @ 980063d0 ==== */

int FUN_980063d0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_98007f28(), iVar1 == 0)) {
    iVar1 = FUN_98005e60();
  }
  return iVar1;
}


/* ==== FUN_98006438 @ 98006438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006438(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_9800d25c();
  iVar1 = (int)(uVar2 >> 0x20);
  if (((uVar2 & 0xff) != 0) && (0xf < *(uint *)(iVar1 + 0x14))) {
    if (param_3 != 0) {
      FUN_9800d3f0();
    }
    thunk_FUN_9800da80();
  }
  *(int *)(iVar1 + 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = 0xf;
  *(undefined1 *)(param_3 + iVar1) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006498 @ 98006498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006498(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006570 @ 98006570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006570(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800d258();
  piVar4 = (int *)((ulonglong)uVar7 >> 0x20);
  uVar6 = (uint)uVar7;
  uVar5 = uVar6 | 0xf;
  if (uVar5 != 0xffffffff) {
    uVar3 = piVar4[5];
    uVar1 = uVar3 >> 1;
    uVar6 = uVar5;
    if ((uVar5 / 3 < uVar1) && (uVar6 = uVar1 + uVar3, -uVar1 - 2 < uVar3)) {
      uVar6 = 0xfffffffe;
    }
  }
  piVar2 = (int *)FUN_980063d0(uVar6 + 1);
  if (param_3 != 0) {
    FUN_9800d3f0();
  }
  FUN_98006438(piVar4,1,0);
  *piVar4 = (int)piVar2;
  piVar4[5] = uVar6;
  piVar4[4] = param_3;
  if (0xf < uVar6) {
    piVar4 = piVar2;
  }
  *(undefined1 *)((int)piVar4 + param_3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006640 @ 98006640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006640(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006748 @ 98006748 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006800 @ 98006800 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006800(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006878 @ 98006878 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006878(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d254();
  puVar4 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(uint *)((int)uVar5 + 0x10);
  if (uVar2 < param_3) {
    uVar2 = 0x91a00000;
    FUN_98007d00();
  }
  if (uVar2 - param_3 < param_4) {
    param_4 = uVar2 - param_3;
  }
  iVar3 = puVar4[4];
  if (-iVar3 - 1U <= param_4) {
    iVar3 = -0x6e600000;
    FUN_98007cc8();
  }
  if (param_4 != 0) {
    cVar1 = FUN_98006748();
    if (cVar1 != '\0') {
      FUN_9800d3f0();
      puVar4[4] = iVar3 + param_4;
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)((int)puVar4 + iVar3 + param_4) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006970 @ 98006970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006970(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800d258();
  puVar5 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  uVar1 = FUN_98006310(puVar5,(undefined4 *)uVar6);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = puVar5[4];
    if (-iVar4 - 1U <= param_3) {
      iVar4 = -0x6e600000;
      FUN_98007cc8();
    }
    if (param_3 != 0) {
      cVar2 = FUN_98006748();
      if (cVar2 != '\0') {
        FUN_9800d3f0();
        puVar5[4] = iVar4 + param_3;
        if (0xf < (uint)puVar5[5]) {
          puVar5 = (undefined4 *)*puVar5;
        }
        *(undefined1 *)((int)puVar5 + iVar4 + param_3) = 0;
      }
    }
  }
  else {
    puVar3 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_98006878(puVar5,puVar5,(int)(undefined4 *)uVar6 - (int)puVar3,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006a60 @ 98006a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006a60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar4 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar4) {
    FUN_98007be0();
    FUN_9800df78();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar4 + param_2 <= (uint)(param_1[2] - *param_1 >> 2)) {
    return;
  }
  uVar6 = FUN_9800d258();
  piVar1 = (int *)((ulonglong)uVar6 >> 0x20);
  uVar4 = (uint)uVar6;
  if (0x3fffffff < uVar4) {
    FUN_98007cc8();
  }
  if ((uint)(piVar1[2] - *piVar1 >> 2) < uVar4) {
    iVar2 = FUN_98006368(uVar4);
    FUN_9800d920(iVar2,*piVar1,(piVar1[1] - *piVar1 >> 2) << 2);
    iVar3 = *piVar1;
    iVar5 = piVar1[1];
    if (iVar3 != 0) {
      thunk_FUN_9800da80();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 4 + iVar2;
    piVar1[1] = (iVar5 - iVar3 >> 2) * 4 + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006ad8 @ 98006ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006ad8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d258();
  puVar3 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  uVar2 = ((undefined4 *)uVar5)[4];
  if (uVar2 < param_3) {
    uVar2 = 0x91a00000;
    FUN_98007d00();
  }
  uVar4 = uVar2 - param_3;
  if (param_4 < uVar2 - param_3) {
    uVar4 = param_4;
  }
  if (puVar3 == (undefined4 *)uVar5) {
    FUN_98006498();
    FUN_98006498();
  }
  else {
    cVar1 = FUN_98006748();
    if (cVar1 != '\0') {
      FUN_9800d3f0();
      puVar3[4] = uVar4;
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined1 *)((int)puVar3 + uVar4) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006bc0 @ 98006bc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006bc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006c98 @ 98006c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006c98(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d25c();
  puVar4 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  uVar1 = FUN_98006310(puVar4,(undefined4 *)uVar5);
  if ((uVar1 & 0xff) == 0) {
    cVar2 = FUN_98006748();
    if (cVar2 != '\0') {
      FUN_9800d3f0();
      puVar4[4] = param_3;
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)((int)puVar4 + param_3) = 0;
    }
  }
  else {
    puVar3 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar3 = (undefined4 *)*puVar4;
    }
    FUN_98006ad8(puVar4,puVar4,(int)(undefined4 *)uVar5 - (int)puVar3,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006d58 @ 98006d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006d58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006dc8 @ 98006dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006dc8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_9800d25c();
  puVar1 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
  puVar2 = (undefined4 *)uVar3;
  if (puVar1 != puVar2) {
    FUN_98006438(puVar1,1,0);
    if ((uint)puVar2[5] < 0x10) {
      FUN_9800d920((int)puVar1,(int)puVar2,puVar2[4] + 1);
    }
    else {
      *puVar1 = *puVar2;
      *puVar2 = 0;
    }
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006e48 @ 98006e48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006e48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d25c();
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  pcVar3 = (char *)uVar5;
  FUN_98006438(uVar2,0,0);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_98006800();
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_98006970(uVar2,pcVar3,(uint)(pcVar4 + (-1 - (int)pcVar3)));
  FUN_98006878(uVar2,param_3,0,0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006ee8 @ 98006ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006f88 @ 98006f88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006f88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007250 @ 98007250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007250(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980072d8 @ 980072d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980072d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 local_70 [4];
  undefined4 ***local_60 [5];
  uint local_4c;
  
  iVar1 = FUN_9800d250();
  local_70[0] = 0;
  FUN_98006e48(local_60,0x91a0060c,iVar1 + 0x1c);
  if (local_4c < 0x10) {
    local_60[0] = local_60;
  }
  iVar2 = FUN_98007820(local_60[0],0x80000000,0,0,3,0x80);
  if (iVar2 != -1) {
    iVar3 = FUN_980077b8();
    iVar4 = FUN_980075a0();
    if (iVar4 != 0) {
      iVar2 = FUN_98007638(iVar2,iVar4,iVar3,local_70,(undefined4 *)0x0);
      if ((iVar2 != 0) &&
         (((iVar2 = func_0x98017f78(iVar3 + iVar4 + -0x10,0x91a005f8,0x10), iVar2 != 0x10 ||
           (*(char *)(iVar1 + 0x40) != '\0')) || (cVar5 = FUN_98006210(), cVar5 != '\0')))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_98007628();
    }
    FUN_98007558();
  }
  FUN_98006438(local_60,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007458 @ 98007458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007558 @ 98007558 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_98007558(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_91a182ec + 4))();
  if (iVar1 < 0) {
    FUN_98007a30();
  }
  return iVar1 >= 0;
}


/* ==== FUN_980075a0 @ 980075a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980075a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007628 @ 98007628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007628(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007638 @ 98007638 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98007638(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar5 = FUN_9800d258();
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 == (undefined4 *)0x0) {
    uVar3 = (**(code **)(_DAT_91a182ec + 0x10))(uVar1,0,0,0,&local_40,(int)uVar5,param_3,0);
    if (((uVar3 != 0x103) ||
        (uVar4 = func_0x98017fc8(uVar1,1,0,0), uVar3 = local_40, -1 < (int)uVar4)) &&
       (uVar4 = uVar3, -1 < (int)uVar3)) {
      *param_4 = local_3c;
      halt_baddata();
    }
    if (uVar4 == 0xc0000011) {
      *param_4 = 0;
      halt_baddata();
    }
    if ((uVar4 & 0xc0000000) == 0x80000000) {
      *param_4 = local_3c;
    }
  }
  else {
    local_34 = param_5[2];
    local_38 = param_5[3];
    *param_5 = 0x103;
    iVar2 = (**(code **)(_DAT_91a182ec + 0x10))
                      (uVar1,param_5[4],0,-(uint)((param_5[4] & 1) == 0) & (uint)param_5,param_5,
                       (int)uVar5,param_3,&local_38);
    if ((-1 < iVar2) && (iVar2 != 0x103)) {
      if (param_4 == (undefined4 *)0x0) {
        halt_baddata();
      }
      *param_4 = param_5[1];
      halt_baddata();
    }
    if ((iVar2 == -0x3fffffef) && (param_4 != (undefined4 *)0x0)) {
      *param_4 = 0;
    }
  }
  FUN_98007a30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980077b8 @ 980077b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980077b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007820 @ 98007820 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98007820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 local_60 [8];
  ushort local_58 [4];
  undefined1 auStack_50 [4];
  int local_4c;
  undefined4 local_48;
  ushort *local_44;
  undefined4 local_40;
  
  uVar5 = FUN_9800d250();
  iVar2 = (int)(uVar5 >> 0x20);
  uVar3 = (uint)uVar5;
  if (param_5 == 1) {
    uVar4 = 2;
  }
  else if (param_5 == 2) {
    uVar4 = 5;
  }
  else if (param_5 == 3) {
    uVar4 = 1;
  }
  else if (param_5 == 4) {
    uVar4 = 3;
  }
  else if ((param_5 != 5) || (uVar4 = 4, (uVar5 & 0x40000000) == 0)) {
    FUN_98007a30();
    halt_baddata();
  }
  func_0x98017f68(local_58,iVar2);
  if ((local_58[0] < 2) || (bVar1 = true, *(char *)((uint)local_58[0] + iVar2 + -1) != '\\')) {
    bVar1 = false;
  }
  local_48 = 0xfffffffd;
  local_44 = local_58;
  local_40 = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    uVar3 = uVar3 | 0x10000;
  }
  iVar2 = (**(code **)(_DAT_91a182ec + 0xc))
                    (local_60,uVar3 | 0x100080,&local_48,auStack_50,0,param_6 & 0x7fa7,param_3,uVar4
                    );
  if (iVar2 < 0) {
    FUN_98007a30();
    if (iVar2 == -0x3fffffcb) {
      uVar4 = 0x50;
    }
    else {
      if (iVar2 != -0x3fffff46) {
        halt_baddata();
      }
      uVar4 = 3;
      if (!bVar1) {
        uVar4 = 5;
      }
    }
    thunk_FUN_98007a18(uVar4);
  }
  else {
    if (((param_5 == 2) && (local_4c == 3)) || ((param_5 == 4 && (local_4c == 1)))) {
      uVar4 = 0xb7;
    }
    else {
      uVar4 = 0;
    }
    thunk_FUN_98007a18(uVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007a18 @ 98007a18 ==== */

void FUN_98007a18(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98007a30 @ 98007a30 ==== */

void FUN_98007a30(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x98017fd8();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_98007a68 @ 98007a68 ==== */

undefined4 FUN_98007a68(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== thunk_FUN_98007a18 @ 98007a88 ==== */

void thunk_FUN_98007a18(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98007a90 @ 98007a90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007a90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007b00 @ 98007b00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007b00(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d25c();
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  pcVar4 = (char *)uVar5;
  if (pcVar4 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_9800dae0();
    *(int *)(iVar2 + 4) = iVar3;
    if (iVar3 != 0) {
      FUN_9800dec0();
      *(undefined1 *)(iVar2 + 8) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007b88 @ 98007b88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007b88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007be0 @ 98007be0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007be0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007c40 @ 98007c40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007c40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007cc8 @ 98007cc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007cc8(void)

{
  FUN_98007be0();
  FUN_9800df78();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007d00 @ 98007d00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007d00(void)

{
  FUN_98007be0();
  FUN_9800df78();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007d80 @ 98007d80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007d80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007dd0 @ 98007dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007e78 @ 98007e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007e78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007ed0 @ 98007ed0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007ed0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007f28 @ 98007f28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007f28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007fe0 @ 98007fe0 ==== */

undefined4 FUN_98007fe0(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_98008028 @ 98008028 ==== */

undefined4 FUN_98008028(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = (char *)0x0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  pcVar4 = (char *)*param_1;
  cVar1 = *pcVar4;
  while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 == ';') {
LAB_980081d0:
    if (cVar1 == '\r') goto LAB_980081d8;
  }
  else {
    if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        if (cVar1 == '[') {
          pcVar4 = pcVar4 + 1;
          *param_2 = pcVar4;
          cVar1 = *pcVar4;
          while (cVar1 != ']') {
            if (cVar1 == '\0') {
              return 0;
            }
            if (cVar1 == '\n') {
              return 0;
            }
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          }
          pcVar3 = pcVar4 + 1;
          *pcVar4 = '\0';
        }
        else {
          *param_3 = pcVar4;
          cVar1 = *pcVar4;
          while (cVar1 = FUN_98007fe0(cVar1), cVar1 == '\x01') {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          }
          cVar1 = *pcVar4;
          pcVar5 = pcVar4;
          while (cVar1 != '=') {
            if (cVar1 == '\0') {
              return 0;
            }
            if (cVar1 == '\n') {
              return 0;
            }
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
          }
          *pcVar4 = (char)pcVar2;
          pcVar3 = pcVar5 + 1;
          cVar1 = pcVar5[1];
          while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
            pcVar3 = pcVar3 + 1;
            cVar1 = *pcVar3;
          }
          if (cVar1 == '\0') {
            return 0;
          }
          *param_4 = pcVar3;
        }
        cVar1 = *pcVar3;
        while (((pcVar4 = pcVar3, cVar1 != '\n' && (pcVar4 = pcVar2, cVar1 != '\0')) &&
               (cVar1 != '\n'))) {
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar3;
        }
        *param_1 = (int)pcVar4;
        if (pcVar4 == (char *)0x0) {
          return 1;
        }
        if (pcVar4[-1] == '\r') {
          pcVar4[-1] = (char)pcVar2;
        }
        else {
          *pcVar4 = (char)pcVar2;
        }
        pcVar4 = (char *)(*param_1 + 1);
        goto LAB_9800820c;
      }
      goto LAB_980081d0;
    }
LAB_980081d8:
    if (pcVar4[1] != '\n') {
      return 0;
    }
  }
  while (cVar1 != '\n') {
    if ((cVar1 == '\0') || (cVar1 == '\n')) {
      pcVar4 = (char *)0x0;
      goto LAB_9800820c;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = pcVar4 + 1;
LAB_9800820c:
  *param_1 = (int)pcVar4;
  return 1;
}


/* ==== FUN_98008230 @ 98008230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  char cStack_b0;
  uint auStack_af [31];
  undefined1 uStack_31;
  
  uVar5 = FUN_9800d258();
  pcVar2 = (code *)uVar5;
  cStack_b0 = '\0';
  FUN_9800d9e0(auStack_af,0,0x7f);
  pcStack_c0 = (char *)((ulonglong)uVar5 >> 0x20);
  do {
    cVar1 = FUN_98008028(&pcStack_c0,&iStack_b4,&iStack_bc,&iStack_b8);
    iVar3 = iStack_b4;
    if (cVar1 == '\0') {
      if (*pcStack_c0 != '\0') {
        halt_baddata();
      }
      break;
    }
    if (iStack_b4 == 0) {
      if ((iStack_bc != 0) && (iVar3 = iStack_bc, iVar4 = iStack_b8, iStack_b8 != 0))
      goto LAB_980082e8;
    }
    else {
      if (cStack_b0 != '\0') {
        (*pcVar2)(param_3,0,0,0);
      }
      FUN_9800e240(&cStack_b0,iVar3,0x80);
      uStack_31 = 0;
      iVar3 = 0;
      iVar4 = 0;
LAB_980082e8:
      (*pcVar2)(param_3,&cStack_b0,iVar3,iVar4);
    }
  } while (pcStack_c0 != (char *)0x0);
  if (cStack_b0 != '\0') {
    (*pcVar2)(param_3,0,0,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008350 @ 98008350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008350(undefined4 param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int aiStack_b0 [2];
  int aiStack_a8 [2];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  uint uStack_98;
  undefined2 *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_80;
  uint auStack_7c [10];
  int iStack_54;
  
  uVar6 = FUN_9800d24c();
  pcVar2 = (char *)((ulonglong)uVar6 >> 0x20);
  uStack_a0 = 0;
  aiStack_a8[0] = 0;
  uStack_9e = 0;
  uStack_9c = 0;
  uStack_9a = 0;
  aiStack_a8[1] = 0;
  aiStack_b0[0] = 0;
  bVar1 = false;
  uStack_80 = 0;
  FUN_9800d9e0(auStack_7c,0,0x34);
  iVar5 = 0;
  func_0x98017f68(&uStack_a0,pcVar2);
  uStack_98 = 0xfffffffd;
  if (pcVar2 != (char *)0x0) {
    uStack_98 = -(uint)(*pcVar2 != '\\') & 0xfffffffd;
  }
  uStack_90 = 0x40;
  puStack_94 = &uStack_a0;
  iVar3 = func_0x98018068(aiStack_b0,0x80100080,&uStack_98,aiStack_a8,0,0x80,1,1);
  if (iVar3 != 0) {
    halt_baddata();
  }
  iVar3 = func_0x98018018(aiStack_b0[0],aiStack_a8,&uStack_80,0x38,0x22);
  if (iVar3 == 0) {
    iVar5 = func_0x98018098(iStack_54 + 1);
    if (iVar5 == 0) {
      uVar4 = 0x91a00b10;
    }
    else {
      iVar3 = func_0x98018058(aiStack_b0[0],0,0,0,aiStack_a8,iVar5,iStack_54,0);
      if (iVar3 == 0x103) {
        iVar3 = func_0x98017fc8(aiStack_b0[0],1,0,0);
      }
      if ((iVar3 == 0) && (-1 < aiStack_a8[0])) {
        *(undefined1 *)(iStack_54 + iVar5) = 0;
        bVar1 = true;
        *(int *)uVar6 = iVar5;
        *param_3 = iStack_54 + 1;
        goto LAB_980084f4;
      }
      uVar4 = 0x91a00ab8;
      iStack_54 = aiStack_a8[0];
    }
  }
  else {
    uVar4 = 0x91a00b78;
    iStack_54 = iVar3;
  }
  func_0x98017f58(uVar4,iStack_54);
LAB_980084f4:
  if ((!bVar1) && (iVar5 != 0)) {
    func_0x98017f88(iVar5);
  }
  if (aiStack_b0[0] != 0) {
    func_0x98018088();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008528 @ 98008528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008528(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int extraout_r4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_9800d254();
  uVar4 = param_3 % 0x15b0;
  iVar1 = extraout_r4;
  if (extraout_r4 != 0) {
    while (param_3 != 0) {
      uVar2 = 0;
      if (7 < uVar4) {
        iVar3 = 7 - iVar1;
        do {
          uVar2 = uVar2 + 8;
          iVar1 = iVar1 + 8;
        } while ((uint)(iVar3 + iVar1) < uVar4);
      }
      if (uVar2 < uVar4) {
        iVar3 = uVar4 - uVar2;
        do {
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_3 = param_3 - uVar4;
      uVar4 = 0x15b0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008650 @ 98008650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980086b0 @ 980086b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980086b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9800d25c();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar3 = (int)uVar4;
  if ((iVar1 != 0) && ((iVar3 == 0xf || (iVar3 == -0xf)))) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    if (*(int *)(iVar1 + 0x20) == 0) {
      *(undefined1 **)(iVar1 + 0x20) = &SUB_91a07840;
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(undefined4 *)(iVar1 + 0x24) = 0x91a07848;
    }
    puVar2 = (undefined4 *)(**(code **)(iVar1 + 0x20))(*(undefined4 *)(iVar1 + 0x28),1,0xa0c4);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 **)(iVar1 + 0x1c) = puVar2;
      puVar2[0x82f] = iVar3;
      *puVar2 = 0;
      puVar2[0x82b] = 0;
      puVar2[0x82c] = 0;
      puVar2[0x82d] = 1;
      puVar2[0x82e] = 0;
      puVar2[0x2830] = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980087a0 @ 980087a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980087a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int aiStack_c30 [256];
  uint local_830 [256];
  int local_430 [268];
  
  uVar13 = FUN_9800d254();
  iVar1 = (int)((ulonglong)uVar13 >> 0x20);
  uVar10 = 2;
  FUN_9800d9e0(local_830,0,0x800);
  if (iVar1 != 0) {
    puVar4 = (ushort *)((int)uVar13 + -4);
    iVar11 = iVar1;
    do {
      puVar4 = puVar4 + 2;
      uVar2 = *puVar4 & 0xff;
      uVar7 = *puVar4 >> 6 & 0x3fffffc;
      local_830[uVar2] = local_830[uVar2] + 1;
      *(int *)((int)local_430 + uVar7) = *(int *)((int)local_430 + uVar7) + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  piVar8 = local_430;
  do {
    if (iVar1 != *piVar8) break;
    uVar10 = uVar10 - 1;
    piVar8 = piVar8 + -0x100;
  } while (1 < uVar10);
  uVar2 = 0;
  if (uVar10 != 0) {
    puVar5 = local_830;
    iVar3 = -0x400;
    iVar11 = (int)uVar13;
    do {
      iVar9 = param_3;
      iVar6 = 0;
      iVar12 = 0x100;
      do {
        uVar7 = *puVar5;
        *(int *)(iVar3 + (int)puVar5) = iVar6;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + uVar7;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (iVar1 != 0) {
        puVar4 = (ushort *)(iVar11 + -4);
        iVar6 = iVar1;
        do {
          *(undefined4 *)(aiStack_c30[puVar4[2] >> (uVar2 & 0x3f) & 0xff] * 4 + iVar9) =
               *(undefined4 *)(puVar4 + 2);
          puVar4 = puVar4 + 2;
          uVar7 = *puVar4 >> (uVar2 & 0x3f) & 0xff;
          aiStack_c30[uVar7] = aiStack_c30[uVar7] + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar10 = uVar10 - 1;
      iVar3 = iVar3 + -0x400;
      uVar2 = uVar2 + 8;
      param_3 = iVar11;
      iVar11 = iVar9;
    } while (uVar10 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980088f8 @ 980088f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980088f8(void)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_9800d258();
  puVar1 = (ushort *)((ulonglong)uVar11 >> 0x20);
  iVar7 = (int)uVar11;
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      *puVar1 = 1;
    }
    else {
      iVar4 = iVar7 + -1;
      iVar9 = 0;
      iVar2 = 2;
      iVar10 = 1;
      *puVar1 = puVar1[2] + *puVar1;
      if (1 < iVar4) {
        puVar6 = puVar1 + -2;
        puVar3 = puVar1 + 2;
        puVar8 = puVar1;
        do {
          puVar8 = puVar8 + 2;
          if ((iVar2 < iVar7) && (puVar3[2] <= puVar6[2])) {
            *puVar8 = puVar3[2];
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 2;
          }
          else {
            iVar9 = iVar9 + 1;
            *puVar8 = puVar6[2];
            puVar6[2] = (ushort)iVar10;
            puVar6 = puVar6 + 2;
          }
          if ((iVar2 < iVar7) && ((iVar10 <= iVar9 || (puVar3[2] <= puVar6[2])))) {
            puVar3 = puVar3 + 2;
            iVar2 = iVar2 + 1;
            *puVar8 = *puVar3 + *puVar8;
          }
          else {
            iVar9 = iVar9 + 1;
            *puVar8 = *puVar8 + puVar6[2];
            puVar6 = puVar6 + 2;
            *puVar6 = (ushort)iVar10;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar4);
      }
      iVar2 = iVar7 + -2;
      puVar1[iVar2 * 2] = 0;
      if (-1 < iVar7 + -3) {
        iVar9 = iVar7 + -2;
        puVar3 = puVar1 + (iVar7 + -2) * 2;
        do {
          puVar6 = puVar3 + -2;
          puVar3 = puVar3 + -2;
          *puVar3 = puVar1[(uint)*puVar6 * 2] + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar7 = 1;
      uVar5 = 0;
      do {
        iVar9 = 0;
        if (-1 < iVar2) {
          puVar3 = puVar1 + iVar2 * 2;
          do {
            if (*puVar3 != uVar5) break;
            iVar2 = iVar2 + -1;
            iVar9 = iVar9 + 1;
            puVar3 = puVar3 + -2;
          } while (-1 < iVar2);
        }
        if (iVar9 < iVar7) {
          iVar7 = iVar7 - iVar9;
          iVar10 = iVar4 + 1;
          iVar4 = iVar4 - iVar7;
          puVar3 = puVar1 + iVar10 * 2;
          do {
            puVar3 = puVar3 + -2;
            *puVar3 = (ushort)uVar5;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar7 = iVar9 << 1;
        uVar5 = uVar5 + 1;
      } while (0 < iVar7);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008ab8 @ 98008ab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008ab8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int aiStack_a74 [37];
  uint auStack_9e0 [35];
  undefined2 uStack_952;
  short local_950 [576];
  undefined1 auStack_4d0 [1232];
  undefined2 uVar5;
  
  uVar17 = FUN_9800d244();
  iVar1 = (int)((ulonglong)uVar17 >> 0x20);
  iVar2 = (int)uVar17;
  FUN_9800d9e0((uint *)(aiStack_a74 + 1),0,0x84);
  iVar7 = 0;
  if (param_5 == 0) {
    iVar9 = iVar2 * 0x240 + iVar1;
    iVar15 = 0;
    psVar13 = (short *)(iVar9 + 0x8192);
    if (0 < param_3) {
      puVar11 = &uStack_952;
      iVar16 = param_3;
      do {
        if (*psVar13 != 0) {
          puVar11[1] = *psVar13;
          iVar15 = iVar15 + 1;
          puVar11 = puVar11 + 2;
          *puVar11 = (short)iVar7;
        }
        iVar7 = iVar7 + 1;
        psVar13 = psVar13 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar7 = FUN_980087a0(iVar15,local_950,(int)auStack_4d0);
    iVar16 = FUN_980088f8();
    if (0 < iVar15) {
      puVar8 = (ushort *)(iVar16 + -4);
      iVar16 = iVar15;
      do {
        puVar8 = puVar8 + 2;
        aiStack_a74[*puVar8 + 1] = aiStack_a74[*puVar8 + 1] + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = 0;
    if (1 < iVar15) {
      iVar14 = param_4 + 1;
      if (iVar14 < 0x21) {
        iVar6 = 0x21 - iVar14;
        piVar3 = aiStack_a74 + iVar14;
        do {
          piVar3 = piVar3 + 1;
          aiStack_a74[param_4 + 1] = *piVar3 + aiStack_a74[param_4 + 1];
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (0 < (int)param_4) {
        piVar3 = aiStack_a74 + param_4 + 2;
        uVar10 = param_4;
        uVar4 = param_4;
        do {
          piVar3 = piVar3 + -1;
          uVar12 = param_4 - uVar10;
          uVar10 = uVar10 - 1;
          iVar16 = (*piVar3 << (uVar12 & 0x3f)) + iVar16;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar14 = 1 << (param_4 & 0x3f);
      if (iVar16 != iVar14) {
        iVar16 = iVar16 - iVar14;
        do {
          aiStack_a74[param_4 + 1] = aiStack_a74[param_4 + 1] + -1;
          if (0 < (int)(param_4 - 1)) {
            piVar3 = aiStack_a74 + param_4;
            iVar14 = param_4 - 1;
            do {
              if (*piVar3 != 0) {
                aiStack_a74[iVar14 + 1] = aiStack_a74[iVar14 + 1] + -1;
                aiStack_a74[iVar14 + 2] = aiStack_a74[iVar14 + 2] + 2;
                break;
              }
              iVar14 = iVar14 + -1;
              piVar3 = piVar3 + -1;
            } while (0 < iVar14);
          }
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
    }
    FUN_9800d9e0((uint *)(iVar2 * 0x120 + iVar1 + 0x8f12),0,0x120);
    FUN_9800d9e0((uint *)(iVar9 + 0x8852),0,0x240);
    iVar9 = 1;
    if (0 < (int)param_4) {
      piVar3 = aiStack_a74 + 2;
      do {
        iVar16 = *piVar3;
        if (0 < iVar16) {
          iVar14 = iVar15 * 4;
          iVar15 = iVar15 - iVar16;
          puVar8 = (ushort *)(iVar14 + iVar7 + 2);
          do {
            puVar8 = puVar8 + -2;
            *(char *)((uint)*puVar8 + iVar2 * 0x120 + iVar1 + 0x8f12) = (char)iVar9;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar9 <= (int)param_4);
    }
  }
  else if (0 < param_3) {
    iVar15 = param_3;
    do {
      uVar10 = (uint)*(byte *)(iVar2 * 0x120 + iVar1 + 0x8f12 + iVar7);
      iVar7 = iVar7 + 1;
      aiStack_a74[uVar10 + 1] = aiStack_a74[uVar10 + 1] + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  iVar15 = 0;
  iVar7 = 0;
  auStack_9e0[1] = 0;
  if (1 < (int)param_4) {
    iVar9 = param_4 - 1;
    do {
      iVar7 = (*(int *)((int)aiStack_a74 + iVar15 + 8) + iVar7) * 2;
      *(int *)((int)auStack_9e0 + iVar15 + 8) = iVar7;
      iVar15 = iVar15 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar7 = 0;
  if (0 < param_3) {
    do {
      uVar10 = (uint)*(byte *)(iVar2 * 0x120 + iVar1 + 0x8f12 + iVar7);
      uVar4 = 0;
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar12 = auStack_9e0[uVar10];
        auStack_9e0[uVar10] = uVar12 + 1;
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar4 = uVar4 << 1 | uVar12 & 1;
          uVar5 = (undefined2)uVar4;
          uVar12 = uVar12 >> 1;
        }
        *(undefined2 *)((iVar2 * 0x120 + iVar7 + 0x4429) * 2 + iVar1) = uVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008e18 @ 98008e18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008e18(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  byte abStack_2f1 [321];
  byte local_1b0 [432];
  
  iVar6 = FUN_9800d234();
  *(undefined2 *)(iVar6 + 0x8392) = 1;
  uVar15 = 0xff;
  FUN_98008ab8(iVar6,0,0x120,0xf,0);
  FUN_98008ab8(iVar6,1,0x20,0xf,0);
  iVar12 = 0x11e;
  do {
    if (*(char *)(iVar6 + 0x8f11 + iVar12) != '\0') break;
    iVar12 = iVar12 + -1;
  } while (0x101 < iVar12);
  iVar11 = 0x1e;
  do {
    if (*(char *)(iVar6 + 0x9031 + iVar11) != '\0') break;
    iVar11 = iVar11 + -1;
  } while (1 < iVar11);
  FUN_9800d3f0();
  FUN_9800d3f0();
  puVar14 = (uint *)(iVar6 + 0x8612);
  uVar19 = 0;
  uVar16 = 0;
  uVar18 = 0;
  FUN_9800d9e0(puVar14,0,0x26);
  uVar7 = 0;
  uVar8 = uVar19;
  if (iVar11 + iVar12 == 0) goto LAB_98009284;
  do {
    bVar2 = local_1b0[uVar7];
    uVar13 = (uint)bVar2;
    uVar19 = uVar8;
    if (uVar13 == 0) {
      if (uVar18 != 0) {
        if (uVar18 < 3) {
          iVar5 = (uVar15 + 0x4309) * 2;
          pbVar9 = abStack_2f1 + uVar8;
          *(short *)(iVar5 + iVar6) = *(short *)(iVar5 + iVar6) + (short)uVar18;
          for (uVar19 = uVar18; uVar19 != 0; uVar19 = uVar19 - 1) {
            pbVar9 = pbVar9 + 1;
            *pbVar9 = (byte)uVar15;
          }
          uVar19 = uVar18 + uVar8;
        }
        else {
          sVar3 = *(short *)(iVar6 + 0x8632);
          abStack_2f1[uVar8 + 1] = 0x10;
          uVar19 = uVar8 + 2;
          *(short *)(iVar6 + 0x8632) = sVar3 + 1;
          abStack_2f1[uVar8 + 2] = (char)uVar18 - 3;
        }
        uVar18 = 0;
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == 0x8a) {
        sVar3 = *(short *)(iVar6 + 0x8636);
        bVar17 = 0x7f;
        uVar16 = 0;
        abStack_2f1[uVar19 + 1] = 0x12;
        *(short *)(iVar6 + 0x8636) = sVar3 + 1;
        uVar15 = uVar19;
LAB_98009158:
        uVar19 = uVar15 + 2;
        abStack_2f1[uVar15 + 2] = bVar17;
      }
    }
    else {
      if (uVar16 != 0) {
        if (uVar16 < 3) {
          *(short *)puVar14 = *(short *)puVar14 + (short)uVar16;
          pbVar9 = abStack_2f1 + uVar8;
          for (uVar19 = uVar16; uVar19 != 0; uVar19 = uVar19 - 1) {
            pbVar9 = pbVar9 + 1;
            *pbVar9 = 0;
          }
          uVar19 = uVar16 + uVar8;
        }
        else {
          if (uVar16 < 0xb) {
            sVar3 = *(short *)(iVar6 + 0x8634);
            bVar17 = (char)uVar16 - 3;
            abStack_2f1[uVar8 + 1] = 0x11;
            *(short *)(iVar6 + 0x8634) = sVar3 + 1;
          }
          else {
            sVar3 = *(short *)(iVar6 + 0x8636);
            bVar17 = (char)uVar16 - 0xb;
            abStack_2f1[uVar8 + 1] = 0x12;
            *(short *)(iVar6 + 0x8636) = sVar3 + 1;
          }
          abStack_2f1[uVar8 + 2] = bVar17;
          uVar19 = uVar8 + 2;
        }
        uVar16 = 0;
      }
      if (uVar13 == uVar15) {
        uVar18 = uVar18 + 1;
        if (uVar18 == 6) {
          bVar17 = 3;
          uVar18 = 0;
          *(short *)(iVar6 + 0x8632) = *(short *)(iVar6 + 0x8632) + 1;
          abStack_2f1[uVar19 + 1] = 0x10;
          uVar15 = uVar19;
          goto LAB_98009158;
        }
      }
      else {
        uVar8 = uVar19;
        if (uVar18 != 0) {
          if (uVar18 < 3) {
            iVar5 = (uVar15 + 0x4309) * 2;
            pbVar9 = abStack_2f1 + uVar19;
            *(short *)(iVar5 + iVar6) = *(short *)(iVar5 + iVar6) + (short)uVar18;
            for (uVar8 = uVar18; uVar8 != 0; uVar8 = uVar8 - 1) {
              pbVar9 = pbVar9 + 1;
              *pbVar9 = (byte)uVar15;
            }
            uVar8 = uVar18 + uVar19;
          }
          else {
            sVar3 = *(short *)(iVar6 + 0x8632);
            abStack_2f1[uVar19 + 1] = 0x10;
            uVar8 = uVar19 + 2;
            *(short *)(iVar6 + 0x8632) = sVar3 + 1;
            abStack_2f1[uVar19 + 2] = (char)uVar18 - 3;
          }
          uVar18 = 0;
        }
        iVar5 = (uVar13 + 0x4309) * 2;
        abStack_2f1[uVar8 + 1] = bVar2;
        uVar19 = uVar8 + 1;
        *(short *)(iVar5 + iVar6) = *(short *)(iVar5 + iVar6) + 1;
      }
    }
    uVar7 = uVar7 + 1;
    uVar15 = uVar13;
    uVar8 = uVar19;
  } while (uVar7 < (uint)(iVar11 + iVar12));
  if (uVar18 == 0) {
    if (uVar16 == 0) goto LAB_98009284;
    if (uVar16 < 3) {
      *(short *)puVar14 = *(short *)puVar14 + (short)uVar16;
      pbVar9 = abStack_2f1 + uVar19;
      for (uVar15 = uVar16; uVar15 != 0; uVar15 = uVar15 - 1) {
        pbVar9 = pbVar9 + 1;
        *pbVar9 = 0;
      }
      uVar19 = uVar16 + uVar19;
      goto LAB_98009284;
    }
    if (uVar16 < 0xb) {
      sVar3 = *(short *)(iVar6 + 0x8634);
      abStack_2f1[uVar19 + 1] = 0x11;
      *(short *)(iVar6 + 0x8634) = sVar3 + 1;
      abStack_2f1[uVar19 + 2] = (char)uVar16 - 3;
    }
    else {
      sVar3 = *(short *)(iVar6 + 0x8636);
      abStack_2f1[uVar19 + 1] = 0x12;
      *(short *)(iVar6 + 0x8636) = sVar3 + 1;
      abStack_2f1[uVar19 + 2] = (char)uVar16 - 0xb;
    }
  }
  else {
    if (uVar18 < 3) {
      iVar5 = (uVar13 + 0x4309) * 2;
      pbVar9 = abStack_2f1 + uVar19;
      *(short *)(iVar5 + iVar6) = *(short *)(iVar5 + iVar6) + (short)uVar18;
      for (uVar15 = uVar18; uVar15 != 0; uVar15 = uVar15 - 1) {
        pbVar9 = pbVar9 + 1;
        *pbVar9 = bVar2;
      }
      uVar19 = uVar18 + uVar19;
      goto LAB_98009284;
    }
    sVar3 = *(short *)(iVar6 + 0x8632);
    abStack_2f1[uVar19 + 1] = 0x10;
    *(short *)(iVar6 + 0x8632) = sVar3 + 1;
    abStack_2f1[uVar19 + 2] = (char)uVar18 - 3;
  }
  uVar19 = uVar19 + 2;
LAB_98009284:
  FUN_98008ab8(iVar6,2,0x13,7,0);
  uVar15 = *(uint *)(iVar6 + 0x44);
  uVar8 = uVar15 + 2;
  *(uint *)(iVar6 + 0x44) = uVar8;
  *(uint *)(iVar6 + 0x48) = 2 << (uVar15 & 0x3f) | *(uint *)(iVar6 + 0x48);
  while (7 < uVar8) {
    if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
      **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
      *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
    }
    uVar8 = *(int *)(iVar6 + 0x44) - 8;
    *(uint *)(iVar6 + 0x44) = uVar8;
    *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
  }
  uVar15 = *(uint *)(iVar6 + 0x44);
  uVar8 = uVar15 + 5;
  *(uint *)(iVar6 + 0x44) = uVar8;
  *(uint *)(iVar6 + 0x48) = iVar12 + -0x101 << (uVar15 & 0x3f) | *(uint *)(iVar6 + 0x48);
  while (7 < uVar8) {
    if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
      **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
      *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
    }
    uVar8 = *(int *)(iVar6 + 0x44) - 8;
    *(uint *)(iVar6 + 0x44) = uVar8;
    *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
  }
  uVar15 = *(uint *)(iVar6 + 0x44);
  uVar8 = uVar15 + 5;
  *(uint *)(iVar6 + 0x44) = uVar8;
  *(uint *)(iVar6 + 0x48) = iVar11 + -1 << (uVar15 & 0x3f) | *(uint *)(iVar6 + 0x48);
  while (7 < uVar8) {
    if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
      **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
      *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
    }
    uVar8 = *(int *)(iVar6 + 0x44) - 8;
    *(uint *)(iVar6 + 0x44) = uVar8;
    *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
  }
  iVar12 = 0x12;
  do {
    if (*(char *)((uint)*(byte *)(iVar12 + -0x6e5fec30) + iVar6 + 0x9152) != '\0') break;
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  iVar11 = 4;
  if (3 < iVar12 + 1) {
    iVar11 = iVar12 + 1;
  }
  uVar15 = *(uint *)(iVar6 + 0x44);
  uVar8 = uVar15 + 4;
  *(uint *)(iVar6 + 0x44) = uVar8;
  *(uint *)(iVar6 + 0x48) = iVar11 + -4 << (uVar15 & 0x3f) | *(uint *)(iVar6 + 0x48);
  while (7 < uVar8) {
    if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
      **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
      *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
    }
    uVar8 = *(int *)(iVar6 + 0x44) - 8;
    *(uint *)(iVar6 + 0x44) = uVar8;
    *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
  }
  iVar12 = 0;
  if (0 < iVar11) {
    do {
      uVar15 = *(uint *)(iVar6 + 0x44);
      uVar8 = uVar15 + 3;
      bVar2 = *(byte *)((uint)*(byte *)(iVar12 + -0x6e5fec30) + iVar6 + 0x9152);
      *(uint *)(iVar6 + 0x44) = uVar8;
      *(uint *)(iVar6 + 0x48) = (uint)bVar2 << (uVar15 & 0x3f) | *(uint *)(iVar6 + 0x48);
      while (7 < uVar8) {
        if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
          **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
          *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
        }
        uVar8 = *(int *)(iVar6 + 0x44) - 8;
        *(uint *)(iVar6 + 0x44) = uVar8;
        *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar11);
  }
  if (uVar19 != 0) {
    uVar15 = 0;
    pbVar9 = abStack_2f1;
    do {
      uVar18 = (uint)pbVar9[1];
      uVar8 = uVar15 + 1;
      uVar7 = *(uint *)(iVar6 + 0x44);
      pbVar10 = pbVar9 + 1;
      uVar16 = uVar7 + *(byte *)(iVar6 + 0x9152 + uVar18);
      uVar4 = *(ushort *)((uVar18 + 0x4669) * 2 + iVar6);
      *(uint *)(iVar6 + 0x44) = uVar16;
      *(uint *)(iVar6 + 0x48) = (uint)uVar4 << (uVar7 & 0x3f) | *(uint *)(iVar6 + 0x48);
      while (7 < uVar16) {
        if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
          **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
          *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
        }
        uVar16 = *(int *)(iVar6 + 0x44) - 8;
        *(uint *)(iVar6 + 0x44) = uVar16;
        *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
      }
      if (0xf < uVar18) {
        pbVar10 = pbVar9 + 2;
        uVar8 = uVar15 + 2;
        cVar1 = *(char *)(uVar18 + 0x91a014dc);
        *(uint *)(iVar6 + 0x48) =
             (uint)*pbVar10 << (*(uint *)(iVar6 + 0x44) & 0x3f) | *(uint *)(iVar6 + 0x48);
        uVar15 = *(uint *)(iVar6 + 0x44) + (int)cVar1;
        *(uint *)(iVar6 + 0x44) = uVar15;
        while (7 < uVar15) {
          if (*(undefined1 **)(iVar6 + 0x30) < *(undefined1 **)(iVar6 + 0x34)) {
            **(undefined1 **)(iVar6 + 0x30) = (char)*(undefined4 *)(iVar6 + 0x48);
            *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
          }
          uVar15 = *(int *)(iVar6 + 0x44) - 8;
          *(uint *)(iVar6 + 0x44) = uVar15;
          *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) >> 8;
        }
      }
      uVar15 = uVar8;
      pbVar9 = pbVar10;
    } while (uVar8 < uVar19);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98009660 @ 98009660 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98009660(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980097b0 @ 980097b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980097b0(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = FUN_9800d25c();
  uVar6 = 1;
  pbVar8 = (byte *)(iVar5 + 0x9272);
  if (pbVar8 < *(byte **)(iVar5 + 0x28)) {
    do {
      if (uVar6 == 1) {
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar6 = bVar2 | 0x100;
      }
      uVar10 = *(uint *)(iVar5 + 0x44);
      if ((uVar6 & 1) == 0) {
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar4 = *(ushort *)((bVar2 + 0x4429) * 2 + iVar5);
        uVar7 = uVar10 + *(byte *)((uint)bVar2 + iVar5 + 0x8f12);
        *(uint *)(iVar5 + 0x44) = uVar7;
        *(uint *)(iVar5 + 0x48) = (uint)uVar4 << (uVar10 & 0x3f) | *(uint *)(iVar5 + 0x48);
        while (7 < uVar7) {
          if (*(undefined1 **)(iVar5 + 0x30) < *(undefined1 **)(iVar5 + 0x34)) {
            **(undefined1 **)(iVar5 + 0x30) = (char)*(undefined4 *)(iVar5 + 0x48);
            *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
          }
          uVar7 = *(int *)(iVar5 + 0x44) - 8;
          *(uint *)(iVar5 + 0x44) = uVar7;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) >> 8;
        }
      }
      else {
        uVar9 = (uint)*pbVar8;
        bVar2 = pbVar8[2];
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 3;
        uVar7 = (uint)CONCAT11(bVar2,*pbVar1);
        uVar11 = (uint)*(ushort *)(uVar9 * 2 + -0x6e5ff430);
        uVar4 = *(ushort *)((uVar11 + 0x4429) * 2 + iVar5);
        uVar11 = uVar10 + *(byte *)(uVar11 + iVar5 + 0x8f12);
        *(uint *)(iVar5 + 0x44) = uVar11;
        *(uint *)(iVar5 + 0x48) = (uint)uVar4 << (uVar10 & 0x3f) | *(uint *)(iVar5 + 0x48);
        while (7 < uVar11) {
          if (*(undefined1 **)(iVar5 + 0x30) < *(undefined1 **)(iVar5 + 0x34)) {
            **(undefined1 **)(iVar5 + 0x30) = (char)*(undefined4 *)(iVar5 + 0x48);
            *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
          }
          uVar11 = *(int *)(iVar5 + 0x44) - 8;
          *(uint *)(iVar5 + 0x44) = uVar11;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) >> 8;
        }
        uVar10 = *(uint *)(iVar5 + 0x44);
        uVar11 = uVar10 + *(byte *)(uVar9 + 0x91a00dd0);
        uVar12 = *(uint *)((uint)*(byte *)(uVar9 + 0x91a00dd0) * 4 + -0x6e5fec18);
        *(uint *)(iVar5 + 0x44) = uVar11;
        *(uint *)(iVar5 + 0x48) = (uVar12 & uVar9) << (uVar10 & 0x3f) | *(uint *)(iVar5 + 0x48);
        while (7 < uVar11) {
          if (*(undefined1 **)(iVar5 + 0x30) < *(undefined1 **)(iVar5 + 0x34)) {
            **(undefined1 **)(iVar5 + 0x30) = (char)*(undefined4 *)(iVar5 + 0x48);
            *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
          }
          uVar11 = *(int *)(iVar5 + 0x44) - 8;
          *(uint *)(iVar5 + 0x44) = uVar11;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) >> 8;
        }
        if (uVar7 < 0x200) {
          bVar3 = *(byte *)(uVar7 + 0x91a00ed0);
          bVar2 = *(byte *)(uVar7 + 0x91a010d0);
        }
        else {
          bVar3 = *(byte *)(bVar2 + 0x91a012d0);
          bVar2 = *(byte *)(bVar2 + 0x91a01350);
        }
        uVar10 = *(uint *)(iVar5 + 0x44);
        uVar4 = *(ushort *)((bVar3 + 0x4549) * 2 + iVar5);
        uVar9 = uVar10 + *(byte *)((uint)bVar3 + iVar5 + 0x9032);
        *(uint *)(iVar5 + 0x44) = uVar9;
        *(uint *)(iVar5 + 0x48) = (uint)uVar4 << (uVar10 & 0x3f) | *(uint *)(iVar5 + 0x48);
        while (7 < uVar9) {
          if (*(undefined1 **)(iVar5 + 0x30) < *(undefined1 **)(iVar5 + 0x34)) {
            **(undefined1 **)(iVar5 + 0x30) = (char)*(undefined4 *)(iVar5 + 0x48);
            *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
          }
          uVar9 = *(int *)(iVar5 + 0x44) - 8;
          *(uint *)(iVar5 + 0x44) = uVar9;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) >> 8;
        }
        uVar9 = *(uint *)(iVar5 + 0x44);
        uVar11 = uVar9 + bVar2;
        uVar10 = *(uint *)((uint)bVar2 * 4 + -0x6e5fec18);
        *(uint *)(iVar5 + 0x44) = uVar11;
        *(uint *)(iVar5 + 0x48) = (uVar10 & uVar7) << (uVar9 & 0x3f) | *(uint *)(iVar5 + 0x48);
        while (7 < uVar11) {
          if (*(undefined1 **)(iVar5 + 0x30) < *(undefined1 **)(iVar5 + 0x34)) {
            **(undefined1 **)(iVar5 + 0x30) = (char)*(undefined4 *)(iVar5 + 0x48);
            *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
          }
          uVar11 = *(int *)(iVar5 + 0x44) - 8;
          *(uint *)(iVar5 + 0x44) = uVar11;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) >> 8;
        }
      }
      uVar6 = uVar6 >> 1;
    } while (pbVar8 < *(byte **)(iVar5 + 0x28));
  }
  uVar6 = *(uint *)(iVar5 + 0x44);
  uVar10 = *(byte *)(iVar5 + 0x9012) + uVar6;
  *(uint *)(iVar5 + 0x44) = uVar10;
  *(uint *)(iVar5 + 0x48) =
       (uint)*(ushort *)(iVar5 + 0x8a52) << (uVar6 & 0x3f) | *(uint *)(iVar5 + 0x48);
  while( true ) {
    if (uVar10 < 8) break;
    if (*(undefined1 **)(iVar5 + 0x30) < *(undefined1 **)(iVar5 + 0x34)) {
      **(undefined1 **)(iVar5 + 0x30) = (char)*(undefined4 *)(iVar5 + 0x48);
      *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
    }
    uVar10 = *(int *)(iVar5 + 0x44) - 8;
    *(uint *)(iVar5 + 0x44) = uVar10;
    *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) >> 8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98009b70 @ 98009b70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98009b70(void)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_9800d244();
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  iVar5 = (int)uVar12;
  iVar4 = 0;
  if (((piVar3[2] & 0x80000U) == 0) ||
     (bVar2 = true, (uint)piVar3[9] < (uint)(piVar3[7] - piVar3[0x10]))) {
    bVar2 = false;
  }
  if ((*piVar3 == 0) && (0x14ccb < (uint)(*(int *)piVar3[0x1f] - piVar3[0x23]))) {
    iVar11 = piVar3[0x1d] + piVar3[0x23];
  }
  else {
    iVar11 = (int)piVar3 + 0x39272;
  }
  piVar3[0xc] = iVar11;
  piVar3[0x16] = 0;
  piVar3[0xd] = iVar11 + 0x14cbc;
  piVar3[0x17] = 0;
  *(byte *)piVar3[0xb] = *(byte *)piVar3[0xb] >> (piVar3[0xe] & 0x3fU);
  piVar3[10] = piVar3[10] - (uint)(piVar3[0xe] == 8);
  if (((piVar3[2] & 0x1000U) != 0) && (piVar3[0x19] == 0)) {
    iVar6 = 3;
    puVar7 = (uint *)&DAT_91a0142c;
    uVar8 = 0;
    do {
      if (*puVar7 == (piVar3[2] & 0xfffU)) break;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 < 0xb);
    if (uVar8 < 2) {
      iVar6 = 0;
    }
    else if (uVar8 < 6) {
      iVar6 = 1;
    }
    else if (uVar8 == 6) {
      iVar6 = 2;
    }
    uVar8 = piVar3[0x11];
    uVar9 = uVar8 + 8;
    piVar3[0x11] = uVar9;
    piVar3[0x12] = 0x78 << (uVar8 & 0x3f) | piVar3[0x12];
    while (7 < uVar9) {
      if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
        *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
        piVar3[0xc] = piVar3[0xc] + 1;
      }
      uVar9 = piVar3[0x11] - 8;
      piVar3[0x11] = uVar9;
      piVar3[0x12] = (uint)piVar3[0x12] >> 8;
    }
    uVar8 = piVar3[0x11];
    uVar9 = uVar8 + 8;
    piVar3[0x11] = uVar9;
    piVar3[0x12] = (((iVar6 << 6 | 0x7800U) / 0x1f) * 0x1f + 0x1f & 0xff) << (uVar8 & 0x3f) |
                   piVar3[0x12];
    while (7 < uVar9) {
      if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
        *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
        piVar3[0xc] = piVar3[0xc] + 1;
      }
      uVar9 = piVar3[0x11] - 8;
      piVar3[0x11] = uVar9;
      piVar3[0x12] = (uint)piVar3[0x12] >> 8;
    }
  }
  uVar8 = piVar3[0x11];
  uVar9 = uVar8 + 1;
  piVar3[0x11] = uVar9;
  piVar3[0x12] = (uint)(iVar5 == 4) << (uVar8 & 0x3f) | piVar3[0x12];
  while (7 < uVar9) {
    if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
      *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
      piVar3[0xc] = piVar3[0xc] + 1;
    }
    uVar9 = piVar3[0x11] - 8;
    piVar3[0x11] = uVar9;
    piVar3[0x12] = (uint)piVar3[0x12] >> 8;
  }
  iVar6 = piVar3[0xc];
  uVar8 = piVar3[0x12];
  uVar9 = piVar3[0x11];
  if (bVar2) {
LAB_98009e94:
    if ((uint)(piVar3[7] - piVar3[0x10]) <= (uint)piVar3[9]) {
      piVar3[0xc] = iVar6;
      uVar10 = uVar9 + 2;
      piVar3[0x11] = uVar10;
      piVar3[0x12] = 0 << (uVar9 & 0x3f) | uVar8;
      while (7 < uVar10) {
        if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
          *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
          piVar3[0xc] = piVar3[0xc] + 1;
        }
        uVar10 = piVar3[0x11] - 8;
        piVar3[0x11] = uVar10;
        piVar3[0x12] = (uint)piVar3[0x12] >> 8;
      }
      uVar8 = piVar3[0x11];
      if (uVar8 != 0) {
        piVar3[0x11] = 8;
        piVar3[0x12] = 0 << (uVar8 & 0x3f) | piVar3[0x12];
        do {
          if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
            *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
            piVar3[0xc] = piVar3[0xc] + 1;
          }
          iVar4 = piVar3[0x11];
          piVar3[0x11] = iVar4 - 8U;
          piVar3[0x12] = (uint)piVar3[0x12] >> 8;
        } while (7 < iVar4 - 8U);
      }
      iVar4 = 2;
      do {
        uVar8 = piVar3[0x11];
        uVar9 = uVar8 + 0x10;
        piVar3[0x11] = uVar9;
        piVar3[0x12] = (uint)*(ushort *)((int)piVar3 + 0x3e) << (uVar8 & 0x3f) | piVar3[0x12];
        while (7 < uVar9) {
          if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
            *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
            piVar3[0xc] = piVar3[0xc] + 1;
          }
          uVar9 = piVar3[0x11] - 8;
          piVar3[0x11] = uVar9;
          piVar3[0x12] = (uint)piVar3[0x12] >> 8;
        }
        uVar8 = piVar3[0xf];
        iVar4 = iVar4 + -1;
        piVar3[0xf] = uVar8 ^ 0xffff;
      } while (iVar4 != 0);
      uVar9 = 0;
      if ((uVar8 ^ 0xffff) != 0) {
        do {
          uVar8 = piVar3[0x11];
          uVar10 = uVar8 + 8;
          bVar1 = *(byte *)((int)piVar3 + (piVar3[0x10] + uVar9 & 0x7fff) + 0x90);
          piVar3[0x11] = uVar10;
          piVar3[0x12] = (uint)bVar1 << (uVar8 & 0x3f) | piVar3[0x12];
          while (7 < uVar10) {
            if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
              *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
              piVar3[0xc] = piVar3[0xc] + 1;
            }
            uVar10 = piVar3[0x11] - 8;
            piVar3[0x11] = uVar10;
            piVar3[0x12] = (uint)piVar3[0x12] >> 8;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)piVar3[0xf]);
      }
      goto LAB_9800a0c0;
    }
  }
  else {
    if (((piVar3[2] & 0x40000U) == 0) && (0x2f < (uint)piVar3[0xf])) {
      FUN_98008e18();
    }
    else {
      FUN_98009660();
    }
    iVar4 = FUN_980097b0();
    if ((piVar3[0xf] != 0) && ((uint)piVar3[0xf] <= (piVar3[0xc] - iVar6) + 1U)) goto LAB_98009e94;
  }
  if (iVar4 == 0) {
    piVar3[0xc] = iVar6;
    piVar3[0x12] = uVar8;
    piVar3[0x11] = uVar9;
    FUN_98009660();
    FUN_980097b0();
  }
LAB_9800a0c0:
  if (iVar5 != 0) {
    uVar8 = piVar3[0x11];
    if (iVar5 == 4) {
      if (uVar8 != 0) {
        piVar3[0x11] = 8;
        piVar3[0x12] = 0 << (uVar8 & 0x3f) | piVar3[0x12];
        do {
          if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
            *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
            piVar3[0xc] = piVar3[0xc] + 1;
          }
          iVar4 = piVar3[0x11];
          piVar3[0x11] = iVar4 - 8U;
          piVar3[0x12] = (uint)piVar3[0x12] >> 8;
        } while (7 < iVar4 - 8U);
      }
      if ((piVar3[2] & 0x1000U) != 0) {
        uVar8 = piVar3[6];
        iVar4 = 4;
        do {
          uVar9 = piVar3[0x11];
          uVar10 = uVar9 + 8;
          piVar3[0x11] = uVar10;
          piVar3[0x12] = (uVar8 >> 0x18) << (uVar9 & 0x3f) | piVar3[0x12];
          while (7 < uVar10) {
            if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
              *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
              piVar3[0xc] = piVar3[0xc] + 1;
            }
            uVar10 = piVar3[0x11] - 8;
            piVar3[0x11] = uVar10;
            piVar3[0x12] = (uint)piVar3[0x12] >> 8;
          }
          uVar8 = uVar8 << 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      uVar10 = uVar8 + 3;
      uVar9 = 0;
      piVar3[0x11] = uVar10;
      piVar3[0x12] = 0 << (uVar8 & 0x3f) | piVar3[0x12];
      while (7 < uVar10) {
        if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
          *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
          piVar3[0xc] = piVar3[0xc] + 1;
        }
        uVar10 = piVar3[0x11] - 8;
        piVar3[0x11] = uVar10;
        piVar3[0x12] = (uint)piVar3[0x12] >> 8;
      }
      uVar8 = piVar3[0x11];
      if (uVar8 != 0) {
        piVar3[0x11] = 8;
        piVar3[0x12] = 0 << (uVar8 & 0x3f) | piVar3[0x12];
        do {
          if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
            *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
            piVar3[0xc] = piVar3[0xc] + 1;
          }
          iVar4 = piVar3[0x11];
          piVar3[0x11] = iVar4 - 8U;
          piVar3[0x12] = (uint)piVar3[0x12] >> 8;
        } while (7 < iVar4 - 8U);
      }
      iVar4 = 2;
      do {
        uVar8 = piVar3[0x11];
        uVar10 = uVar8 + 0x10;
        piVar3[0x11] = uVar10;
        piVar3[0x12] = uVar9 << (uVar8 & 0x3f) | piVar3[0x12];
        while (7 < uVar10) {
          if ((undefined1 *)piVar3[0xc] < (undefined1 *)piVar3[0xd]) {
            *(undefined1 *)piVar3[0xc] = (char)piVar3[0x12];
            piVar3[0xc] = piVar3[0xc] + 1;
          }
          uVar10 = piVar3[0x11] - 8;
          piVar3[0x11] = uVar10;
          piVar3[0x12] = (uint)piVar3[0x12] >> 8;
        }
        uVar9 = uVar9 ^ 0xffff;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_9800d9e0((uint *)((int)piVar3 + 0x8192),0,0x240);
  FUN_9800d9e0((uint *)((int)piVar3 + 0x83d2),0,0x40);
  iVar4 = piVar3[0xf];
  piVar3[0xe] = 8;
  piVar3[0x19] = piVar3[0x19] + 1;
  piVar3[0xf] = 0;
  piVar3[10] = (int)piVar3 + 0x9273;
  piVar3[0xb] = (int)piVar3 + 0x9272;
  piVar3[0x10] = iVar4 + piVar3[0x10];
  uVar8 = piVar3[0xc] - iVar11;
  if (uVar8 != 0) {
    if (*piVar3 == 0) {
      if (iVar11 == (int)piVar3 + 0x39272) {
        uVar9 = *(int *)piVar3[0x1f] - piVar3[0x23];
        if (uVar8 < (uint)(*(int *)piVar3[0x1f] - piVar3[0x23])) {
          uVar9 = uVar8;
        }
        FUN_9800d3f0();
        piVar3[0x23] = piVar3[0x23] + uVar9;
        if (uVar8 - uVar9 != 0) {
          piVar3[0x16] = uVar9;
          piVar3[0x17] = uVar8 - uVar9;
        }
      }
      else {
        piVar3[0x23] = piVar3[0x23] + uVar8;
      }
    }
    else {
      *(int *)piVar3[0x1e] = piVar3[0x21] - piVar3[0x1c];
      iVar4 = (*(code *)*piVar3)((int)piVar3 + 0x39272,uVar8,piVar3[1]);
      if (iVar4 == 0) {
        piVar3[0x1b] = -1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a448 @ 9800a448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a448(void)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  char *pcVar28;
  uint uVar29;
  uint uVar30;
  uint local_a0;
  
  iVar7 = FUN_9800d220();
  iVar18 = *(int *)(iVar7 + 0x80);
  uVar23 = *(uint *)(iVar7 + 0x88);
  pbVar24 = *(byte **)(iVar7 + 0x84);
  local_a0 = uVar23;
  do {
    if ((uVar23 == 0) && ((iVar18 == 0 || (*(int *)(iVar7 + 0x20) == 0)))) {
LAB_9800add8:
      *(byte **)(iVar7 + 0x84) = pbVar24;
      *(uint *)(iVar7 + 0x88) = uVar23;
      halt_baddata();
    }
    iVar13 = *(int *)(iVar7 + 0x20);
    if ((uint)(*(int *)(iVar7 + 0x24) + iVar13) < 2) {
      while ((uVar23 != 0 && (*(uint *)(iVar7 + 0x20) < 0x102))) {
        uVar23 = uVar23 - 1;
        bVar1 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        uVar15 = *(uint *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x1c) & 0x7fff;
        *(byte *)(uVar15 + iVar7 + 0x90) = bVar1;
        if (uVar15 < 0x101) {
          *(byte *)(uVar15 + iVar7 + 0x8090) = bVar1;
        }
        iVar13 = *(int *)(iVar7 + 0x20) + 1;
        *(int *)(iVar7 + 0x20) = iVar13;
        local_a0 = uVar23;
        if (2 < (uint)(*(int *)(iVar7 + 0x24) + iVar13)) {
          iVar13 = iVar13 + *(int *)(iVar7 + 0x1c);
          uVar11 = iVar13 - 3;
          uVar15 = uVar11 & 0x7fff;
          iVar13 = (((((uint)*(byte *)((iVar13 - 2U & 0x7fff) + iVar7 + 0x90) ^
                      (uint)*(byte *)(uVar15 + iVar7 + 0x90) << 5) << 5 ^ (uint)bVar1) & 0x7fff) +
                   0x14939) * 2;
          *(undefined2 *)((uVar15 + 0xc939) * 2 + iVar7) = *(undefined2 *)(iVar13 + iVar7);
          *(short *)(iVar13 + iVar7) = (short)uVar11;
        }
      }
    }
    else {
      uVar15 = *(int *)(iVar7 + 0x1c) + iVar13;
      uVar19 = uVar15 - 2;
      uVar11 = (uint)*(byte *)((uVar19 & 0x7fff) + iVar7 + 0x90) << 5 ^
               (uint)*(byte *)((uVar15 - 1 & 0x7fff) + iVar7 + 0x90);
      uVar20 = 0x102U - iVar13;
      if (uVar23 < 0x102U - iVar13) {
        uVar20 = uVar23;
      }
      pbVar16 = pbVar24 + uVar20;
      if (pbVar24 == (byte *)0x0) {
        pbVar16 = (byte *)0x0;
      }
      uVar23 = uVar23 - uVar20;
      *(uint *)(iVar7 + 0x20) = iVar13 + uVar20;
      local_a0 = uVar23;
      if (pbVar24 != pbVar16) {
        iVar13 = (int)pbVar16 - (int)pbVar24;
        do {
          uVar15 = uVar15 & 0x7fff;
          bVar1 = *pbVar24;
          pbVar24 = pbVar24 + 1;
          *(byte *)(iVar7 + 0x90 + uVar15) = bVar1;
          if (uVar15 < 0x101) {
            *(byte *)(uVar15 + iVar7 + 0x8090) = bVar1;
          }
          uVar20 = uVar19 & 0x7fff;
          uVar11 = (uVar11 << 5 ^ (uint)bVar1) & 0x7fff;
          uVar5 = (undefined2)uVar19;
          uVar15 = uVar15 + 1;
          iVar27 = (uVar11 + 0x14939) * 2;
          uVar19 = uVar19 + 1;
          *(undefined2 *)((uVar20 + 0xc939) * 2 + iVar7) = *(undefined2 *)(iVar27 + iVar7);
          *(undefined2 *)(iVar27 + iVar7) = uVar5;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    uVar11 = *(uint *)(iVar7 + 0x20);
    uVar15 = 0x8000 - uVar11;
    if (*(uint *)(iVar7 + 0x24) <= 0x8000 - uVar11) {
      uVar15 = *(uint *)(iVar7 + 0x24);
    }
    *(uint *)(iVar7 + 0x24) = uVar15;
    if ((iVar18 == 0) && (uVar11 < 0x102)) goto LAB_9800add8;
    uVar26 = *(uint *)(iVar7 + 0x50);
    uVar19 = 0;
    uVar20 = uVar26;
    if (uVar26 == 0) {
      uVar20 = 2;
    }
    uVar25 = *(uint *)(iVar7 + 8);
    uVar29 = *(uint *)(iVar7 + 0x1c);
    uVar22 = uVar29 & 0x7fff;
    if ((uVar25 & 0x90000) == 0) {
      uVar6 = uVar29 & 0x7fff;
      iVar13 = uVar6 + uVar20 + iVar7;
      cVar8 = *(char *)(iVar13 + 0x90);
      pcVar28 = (char *)(iVar7 + 0x90 + uVar6);
      iVar27 = *(int *)((3 - ((uVar20 < 0x20) - 1)) * 4 + iVar7);
      cVar9 = *(char *)(iVar13 + 0x8f);
      uVar17 = uVar6;
      uVar21 = uVar20;
      uVar30 = uVar20;
      if (uVar20 < uVar11) {
LAB_9800a7bc:
        iVar27 = iVar27 + -1;
        uVar20 = uVar21;
        if (iVar27 != 0) {
          uVar4 = *(ushort *)((uVar17 + 0xc939) * 2 + iVar7);
          if ((uVar4 != 0) && (uVar10 = uVar29 - uVar4 & 0xffff, uVar10 <= uVar15)) {
            iVar13 = uVar30 + iVar7;
            uVar17 = uVar4 & 0x7fff;
            iVar14 = iVar13 + 0x90;
            if ((*(char *)(iVar14 + uVar17) == cVar8) &&
               (uVar23 = local_a0, *(char *)(iVar13 + uVar17 + 0x8f) == cVar9)) goto LAB_9800a8b8;
            uVar4 = *(ushort *)((uVar17 + 0xc939) * 2 + iVar7);
            if ((uVar4 != 0) && (uVar10 = uVar29 - uVar4 & 0xffff, uVar10 <= uVar15)) {
              uVar17 = uVar4 & 0x7fff;
              if ((*(char *)(iVar14 + uVar17) == cVar8) &&
                 (uVar23 = local_a0, *(char *)(iVar13 + uVar17 + 0x8f) == cVar9)) goto LAB_9800a8b8;
              uVar4 = *(ushort *)((uVar17 + 0xc939) * 2 + iVar7);
              if ((uVar4 != 0) && (uVar10 = uVar29 - uVar4 & 0xffff, uVar10 <= uVar15)) break;
            }
          }
        }
      }
      goto LAB_9800a744;
    }
    if ((uVar15 == 0) || ((uVar25 & 0x80000) != 0)) {
LAB_9800a744:
      if ((uVar20 != 3) || (uVar19 < 0x2000)) goto LAB_9800a758;
LAB_9800a934:
      uVar20 = 0;
      uVar19 = 0;
    }
    else {
      uVar20 = 0;
      if (uVar11 != 0) {
        do {
          if (*(char *)(uVar22 + iVar7 + 0x90 + uVar20) !=
              *(char *)((uVar22 - 1 & 0x7fff) + iVar7 + 0x90)) break;
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(uint *)(iVar7 + 0x20));
        if (2 < uVar20) {
          uVar19 = 1;
          goto LAB_9800a744;
        }
      }
      uVar20 = 0;
LAB_9800a758:
      if ((uVar22 == uVar19) || (((uVar25 & 0x20000) != 0 && (uVar20 < 6)))) goto LAB_9800a934;
    }
    if (uVar26 == 0) {
      if (uVar19 == 0) {
        if (0x80ff < uVar22) {
          uVar22 = 0x8100;
        }
        bVar1 = *(byte *)(uVar22 + iVar7 + 0x90);
        *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + 1;
        **(byte **)(iVar7 + 0x28) = bVar1;
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
        **(byte **)(iVar7 + 0x2c) = **(byte **)(iVar7 + 0x2c) >> 1;
        iVar13 = *(int *)(iVar7 + 0x38) + -1;
        *(int *)(iVar7 + 0x38) = iVar13;
        if (iVar13 == 0) {
          iVar13 = *(int *)(iVar7 + 0x28);
          *(undefined4 *)(iVar7 + 0x38) = 8;
          *(int *)(iVar7 + 0x28) = iVar13 + 1;
          *(int *)(iVar7 + 0x2c) = iVar13;
        }
        uVar15 = (uint)bVar1;
        uVar20 = 1;
      }
      else {
        if (((*(int *)(iVar7 + 0x14) == 0) && ((uVar25 & 0x10000) == 0)) && (uVar20 < 0x80)) {
          if (0x80ff < uVar22) {
            uVar22 = 0x8100;
          }
          goto LAB_9800ac48;
        }
        uVar19 = uVar19 - 1;
        *(uint *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + uVar20;
        **(char **)(iVar7 + 0x28) = (char)uVar20 + -3;
        *(char *)(*(int *)(iVar7 + 0x28) + 1) = (char)uVar19;
        *(char *)(*(int *)(iVar7 + 0x28) + 2) = (char)(uVar19 >> 8);
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 3;
        **(byte **)(iVar7 + 0x2c) = **(byte **)(iVar7 + 0x2c) >> 1 | 0x80;
        iVar13 = *(int *)(iVar7 + 0x38) + -1;
        *(int *)(iVar7 + 0x38) = iVar13;
        if (iVar13 == 0) {
          iVar13 = *(int *)(iVar7 + 0x28);
          *(undefined4 *)(iVar7 + 0x38) = 8;
          *(int *)(iVar7 + 0x28) = iVar13 + 1;
          *(int *)(iVar7 + 0x2c) = iVar13;
        }
        if (uVar19 < 0x200) {
          bVar1 = *(byte *)((uVar19 & 0x1ff) + 0x91a00ed0);
        }
        else {
          bVar1 = *(byte *)((uVar19 >> 8 & 0x7f) + 0x91a012d0);
        }
        iVar13 = (bVar1 + 0x41e9) * 2;
        *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
        uVar15 = (uint)*(ushort *)((uVar20 - 3) * 2 + -0x6e5ff430);
      }
      iVar13 = (uVar15 + 0x40c9) * 2;
      *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
    }
    else {
      if (uVar26 < uVar20) {
        uVar15 = *(uint *)(iVar7 + 0x54);
        *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + 1;
        **(undefined1 **)(iVar7 + 0x28) = (char)uVar15;
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
        **(byte **)(iVar7 + 0x2c) = **(byte **)(iVar7 + 0x2c) >> 1;
        iVar13 = *(int *)(iVar7 + 0x38) + -1;
        *(int *)(iVar7 + 0x38) = iVar13;
        if (iVar13 == 0) {
          iVar13 = *(int *)(iVar7 + 0x28);
          *(undefined4 *)(iVar7 + 0x38) = 8;
          *(int *)(iVar7 + 0x28) = iVar13 + 1;
          *(int *)(iVar7 + 0x2c) = iVar13;
        }
        iVar13 = ((uVar15 & 0xff) + 0x40c9) * 2;
        *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
        if (uVar20 < 0x80) {
LAB_9800ac48:
          bVar1 = *(byte *)(uVar22 + iVar7 + 0x90);
          *(uint *)(iVar7 + 0x4c) = uVar19;
          *(uint *)(iVar7 + 0x50) = uVar20;
          *(uint *)(iVar7 + 0x54) = (uint)bVar1;
          uVar20 = 1;
          goto LAB_9800ad30;
        }
        uVar19 = uVar19 - 1;
        *(uint *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + uVar20;
        **(char **)(iVar7 + 0x28) = (char)uVar20 + -3;
        *(char *)(*(int *)(iVar7 + 0x28) + 1) = (char)uVar19;
        *(char *)(*(int *)(iVar7 + 0x28) + 2) = (char)(uVar19 >> 8);
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 3;
        **(byte **)(iVar7 + 0x2c) = **(byte **)(iVar7 + 0x2c) >> 1 | 0x80;
        iVar13 = *(int *)(iVar7 + 0x38) + -1;
        *(int *)(iVar7 + 0x38) = iVar13;
        if (iVar13 == 0) {
          iVar13 = *(int *)(iVar7 + 0x28);
          *(undefined4 *)(iVar7 + 0x38) = 8;
          *(int *)(iVar7 + 0x28) = iVar13 + 1;
          *(int *)(iVar7 + 0x2c) = iVar13;
        }
        if (uVar19 < 0x200) {
          bVar1 = *(byte *)((uVar19 & 0x1ff) + 0x91a00ed0);
        }
        else {
          bVar1 = *(byte *)((uVar19 >> 8 & 0x7f) + 0x91a012d0);
        }
        iVar13 = (bVar1 + 0x41e9) * 2;
        *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
        iVar13 = (*(ushort *)((uVar20 - 3) * 2 + -0x6e5ff430) + 0x40c9) * 2;
        *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
      }
      else {
        *(uint *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + uVar26;
        uVar15 = *(int *)(iVar7 + 0x4c) - 1;
        **(char **)(iVar7 + 0x28) = (char)uVar26 + -3;
        *(char *)(*(int *)(iVar7 + 0x28) + 1) = (char)uVar15;
        *(char *)(*(int *)(iVar7 + 0x28) + 2) = (char)(uVar15 >> 8);
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 3;
        **(byte **)(iVar7 + 0x2c) = **(byte **)(iVar7 + 0x2c) >> 1 | 0x80;
        iVar13 = *(int *)(iVar7 + 0x38) + -1;
        *(int *)(iVar7 + 0x38) = iVar13;
        if (iVar13 == 0) {
          iVar13 = *(int *)(iVar7 + 0x28);
          *(undefined4 *)(iVar7 + 0x38) = 8;
          *(int *)(iVar7 + 0x28) = iVar13 + 1;
          *(int *)(iVar7 + 0x2c) = iVar13;
        }
        if (uVar15 < 0x200) {
          bVar1 = *(byte *)((uVar15 & 0x1ff) + 0x91a00ed0);
        }
        else {
          bVar1 = *(byte *)((uVar15 >> 8 & 0x7f) + 0x91a012d0);
        }
        iVar13 = (bVar1 + 0x41e9) * 2;
        *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
        iVar13 = (*(ushort *)((uVar26 - 3) * 2 + -0x6e5ff430) + 0x40c9) * 2;
        *(short *)(iVar13 + iVar7) = *(short *)(iVar13 + iVar7) + 1;
        uVar20 = *(int *)(iVar7 + 0x50) - 1;
      }
      *(undefined4 *)(iVar7 + 0x50) = 0;
    }
LAB_9800ad30:
    uVar15 = *(int *)(iVar7 + 0x24) + uVar20;
    *(uint *)(iVar7 + 0x1c) = uVar20 + *(int *)(iVar7 + 0x1c);
    *(uint *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) - uVar20;
    if (0x7fff < uVar15) {
      uVar15 = 0x8000;
    }
    *(uint *)(iVar7 + 0x24) = uVar15;
    if ((iVar7 + 0x1926aU < *(uint *)(iVar7 + 0x28)) ||
       ((0x7c00 < *(uint *)(iVar7 + 0x3c) &&
        ((*(uint *)(iVar7 + 0x3c) <= (*(uint *)(iVar7 + 0x28) - iVar7) * 0x73 - 0x41c936 >> 7 ||
         ((*(uint *)(iVar7 + 8) & 0x80000) != 0)))))) {
      *(byte **)(iVar7 + 0x84) = pbVar24;
      *(uint *)(iVar7 + 0x88) = uVar23;
      iVar13 = FUN_98009b70();
      if (iVar13 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  } while( true );
  uVar17 = uVar4 & 0x7fff;
  if ((*(char *)(iVar14 + uVar17) == cVar8) && (*(char *)(iVar13 + uVar17 + 0x8f) == cVar9)) {
LAB_9800a8b8:
    if (uVar10 == 0) goto LAB_9800a744;
    uVar20 = 0;
    if (uVar11 != 0) {
      pcVar12 = pcVar28;
      do {
        pcVar3 = pcVar12 + ((iVar7 + 0x90) - (int)pcVar28) + uVar17;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        if (cVar2 != *pcVar3) break;
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar11);
      uVar23 = local_a0;
      if (uVar30 < uVar20) {
        uVar19 = uVar10;
        if (uVar20 == uVar11) goto LAB_9800a744;
        cVar8 = *(char *)(uVar6 + iVar7 + uVar20 + 0x90);
        cVar9 = *(char *)(uVar6 + iVar7 + uVar20 + 0x8f);
        uVar21 = uVar20;
        uVar30 = uVar20;
      }
    }
  }
  goto LAB_9800a7bc;
}


/* ==== FUN_9800ade8 @ 9800ade8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ade8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800aec8 @ 9800aec8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800aec8(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int *param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d254();
  piVar1 = (int *)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  if (piVar1 == (int *)0x0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    piVar1[0x1c] = iVar2;
    piVar1[0x1e] = (int)param_3;
    piVar1[0x1d] = param_4;
    piVar1[0x1f] = (int)param_5;
    piVar1[0x21] = iVar2;
    if (param_3 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_3;
    }
    piVar1[0x20] = param_6;
    piVar1[0x23] = 0;
    piVar1[0x22] = iVar3;
    if ((param_4 != 0) || (bVar4 = false, param_5 != (int *)0x0)) {
      bVar4 = true;
    }
    if (((((*piVar1 != 0) == bVar4) || (piVar1[0x1b] != 0)) ||
        ((piVar1[0x1a] != 0 && (param_6 != 4)))) ||
       ((((param_3 != (int *)0x0 && (*param_3 != 0)) && (iVar2 == 0)) ||
        (((param_5 != (int *)0x0 && (*param_5 != 0)) && (param_4 == 0)))))) {
      if (param_3 != (int *)0x0) {
        *param_3 = 0;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = 0;
      }
      piVar1[0x1b] = -2;
    }
    else {
      piVar1[0x1a] = (uint)(param_6 == 4) | piVar1[0x1a];
      if ((piVar1[0x17] == 0) && (piVar1[0x18] == 0)) {
        iVar3 = FUN_9800a448();
        if (iVar3 == 0) {
          halt_baddata();
        }
        if (((piVar1[2] & 0x3000U) != 0) && (iVar2 != 0)) {
          iVar2 = FUN_98008528(piVar1[6],iVar2,piVar1[0x21] - iVar2);
          piVar1[6] = iVar2;
        }
        if ((((param_6 != 0) && (piVar1[8] == 0)) && (piVar1[0x22] == 0)) && (piVar1[0x17] == 0)) {
          iVar2 = FUN_98009b70();
          if (iVar2 < 0) {
            halt_baddata();
          }
          piVar1[0x18] = (uint)(param_6 == 4);
          if (param_6 == 3) {
            FUN_9800d9e0((uint *)((int)piVar1 + 0x29272),0,0x10000);
            FUN_9800d9e0((uint *)((int)piVar1 + 0x19272),0,0x10000);
            piVar1[9] = 0;
          }
        }
      }
      iVar2 = FUN_9800ade8();
      piVar1[0x1b] = iVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b0e8 @ 9800b0e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b0e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b260 @ 9800b260 ==== */

uint FUN_9800b260(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((int)param_1 < 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = param_1;
    if (10 < (int)param_1) {
      uVar1 = 10;
    }
  }
  uVar1 = *(uint *)(&DAT_91a0142c + uVar1 * 4) |
          -(uint)!CARRY4(3 - param_1,param_1 ^ 0x80000000) & 0x4000;
  if (0 < param_2) {
    uVar1 = uVar1 | 0x1000;
  }
  if (param_1 == 0) {
    return uVar1 | 0x80000;
  }
  if (param_3 == 1) {
    return uVar1 | 0x20000;
  }
  if (param_3 != 2) {
    if (param_3 == 4) {
      return uVar1 | 0x40000;
    }
    if (param_3 == 3) {
      return uVar1 | 0x10000;
    }
    return uVar1;
  }
  return uVar1 & 0xfffff000;
}


/* ==== FUN_9800b318 @ 9800b318 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9800c678) */
/* WARNING: Removing unreachable block (ram,0x9800c6a0) */
/* WARNING: Removing unreachable block (ram,0x9800c6a8) */
/* WARNING: Removing unreachable block (ram,0x9800c6b4) */
/* WARNING: Removing unreachable block (ram,0x9800c6b8) */
/* WARNING: Removing unreachable block (ram,0x9800c72c) */
/* WARNING: Removing unreachable block (ram,0x9800c734) */
/* WARNING: Removing unreachable block (ram,0x9800c73c) */
/* WARNING: Removing unreachable block (ram,0x9800c750) */
/* WARNING: Removing unreachable block (ram,0x9800c774) */
/* WARNING: Removing unreachable block (ram,0x9800c788) */
/* WARNING: Removing unreachable block (ram,0x9800c794) */
/* WARNING: Removing unreachable block (ram,0x9800c7a0) */

void FUN_9800b318(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
                 uint param_5,int *param_6,uint param_7)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_9800d220();
  if ((param_7 & 4) == 0) {
    uVar2 = ((*param_6 - param_4) + param_5) - 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (((uVar2 + 1 & uVar2) == 0) && (param_4 <= param_5)) {
    uVar2 = puVar1[1];
    if (*puVar1 < 0x36) {
                    /* WARNING: Could not emulate address calculation at 0x9800b46c */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(ushort *)(*puVar1 * 2 + -0x6e5feba8) + 0x91a0a688))
                (0xffffffff,0x91a00000,0x91a00000,0x91a014ec,0x91a00000,0x91a015b8,0x91a00000,
                 0x91a00000);
      return;
    }
    puVar1[1] = uVar2;
    puVar1[8] = puVar1[8];
    puVar1[9] = puVar1[9];
    puVar1[10] = puVar1[10];
    puVar1[0xf] = puVar1[0xf];
    puVar1[0xe] = puVar1[0xe] & ~(-1 << (uVar2 & 0x3f));
    *param_3 = 0;
    *param_6 = 0;
  }
  else {
    *param_6 = 0;
    *param_3 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b578 @ 9800b578 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9800c678) */
/* WARNING: Removing unreachable block (ram,0x9800c6a0) */
/* WARNING: Removing unreachable block (ram,0x9800c6a8) */
/* WARNING: Removing unreachable block (ram,0x9800c6b4) */
/* WARNING: Removing unreachable block (ram,0x9800c6b8) */
/* WARNING: Removing unreachable block (ram,0x9800c72c) */
/* WARNING: Removing unreachable block (ram,0x9800c734) */
/* WARNING: Removing unreachable block (ram,0x9800c73c) */
/* WARNING: Removing unreachable block (ram,0x9800c750) */
/* WARNING: Removing unreachable block (ram,0x9800c774) */
/* WARNING: Removing unreachable block (ram,0x9800c788) */
/* WARNING: Removing unreachable block (ram,0x9800c794) */
/* WARNING: Removing unreachable block (ram,0x9800c7a0) */

void FUN_9800b578(void)

{
  undefined4 in_r11;
  undefined4 unaff_r18;
  uint unaff_r23;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r27;
  undefined4 *unaff_r31;
  int in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  uint in_stack_000001dc;
  int *in_stack_000001e4;
  int in_stack_000001f4;
  int *in_stack_000001fc;
  
  *unaff_r31 = in_r11;
  for (; (in_stack_000001dc < unaff_r23 && (7 < unaff_r27)); unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 - 1;
  }
  unaff_r31[1] = unaff_r27;
  unaff_r31[8] = in_stack_00000058;
  unaff_r31[9] = unaff_r24;
  unaff_r31[10] = unaff_r18;
  unaff_r31[0xf] = in_stack_00000060;
  unaff_r31[0xe] = unaff_r25 & ~(-1 << (unaff_r27 & 0x3f));
  *in_stack_000001e4 = unaff_r23 - in_stack_000001dc;
  *in_stack_000001fc = in_stack_00000054 - in_stack_000001f4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== entry @ 9800c378 ==== */

/* WARNING: Control flow encountered bad instruction data */

void entry(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  uint in_r6;
  undefined1 *in_r7;
  uint in_r8;
  byte *pbVar11;
  uint in_r9;
  uint uVar12;
  undefined1 *puVar13;
  int in_r10;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint in_r11;
  undefined1 *puVar24;
  int unaff_r14;
  int unaff_r15;
  int unaff_r16;
  int unaff_r17;
  uint unaff_r18;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  byte *unaff_r23;
  uint unaff_r24;
  uint uVar25;
  uint unaff_r25;
  uint unaff_r27;
  uint uVar26;
  uint uVar27;
  undefined4 *unaff_r31;
  byte *in_stack_00000050;
  undefined1 *in_stack_00000054;
  uint in_stack_00000058;
  undefined1 *in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  int in_stack_0000006c;
  byte *in_stack_000001dc;
  int *in_stack_000001e4;
  int in_stack_000001ec;
  byte *in_stack_000001f4;
  uint *in_stack_000001fc;
  uint in_stack_00000204;
  
  do {
    puVar24 = (undefined1 *)((in_r6 & in_r11) + in_r10);
    puVar13 = in_r7;
    if (in_r7 <= puVar24) {
      puVar13 = puVar24;
    }
    uVar25 = unaff_r25;
    if (in_stack_0000005c < puVar13 + unaff_r24) {
      while (bVar7 = unaff_r24 != 0, unaff_r24 = unaff_r24 - 1, bVar7) {
        if (in_stack_0000005c <= in_r7) {
          uVar15 = 0x35;
          goto LAB_9800c440;
        }
        uVar23 = in_r8 - in_r9;
        in_r8 = in_r8 + 1;
        *in_r7 = *(undefined1 *)((uVar23 & in_stack_00000064) + in_stack_000001ec);
        in_r7 = in_r7 + 1;
        in_stack_00000054 = in_r7;
        in_stack_00000060 = in_r8;
      }
    }
    else {
      if (2 < unaff_r24) {
        iVar14 = (unaff_r24 - 3) / 3 + 1;
        do {
          unaff_r24 = unaff_r24 - 3;
          *in_r7 = *puVar24;
          in_r7[1] = puVar24[1];
          puVar13 = puVar24 + 2;
          puVar24 = puVar24 + 3;
          in_r7[2] = *puVar13;
          in_r7 = in_r7 + 3;
          iVar14 = iVar14 + -1;
          in_stack_00000054 = in_r7;
        } while (iVar14 != 0);
      }
      if (unaff_r24 != 0) {
        *in_r7 = *puVar24;
        if (1 < unaff_r24) {
          in_r7[1] = puVar24[1];
        }
        in_stack_00000054 = in_r7 + unaff_r24;
        in_r7 = in_stack_00000054;
      }
    }
LAB_9800b5d8:
    if (((int)in_stack_00000050 - (int)unaff_r23 < 4) || ((int)in_stack_0000005c - (int)in_r7 < 2))
    {
      if (unaff_r27 < 0xf) {
        if ((int)in_stack_00000050 - (int)unaff_r23 < 2) {
          do {
            uVar23 = (uint)*(short *)(((uVar25 & 0x3ff) + 0x20) * 2 + (int)unaff_r31);
            if ((int)uVar23 < 0) {
              if (10 < unaff_r27) {
                uVar12 = 10;
                do {
                  uVar23 = (uint)*(short *)(((uVar25 >> (uVar12 & 0x3f) & 1) + ~uVar23 + 0xc20) * 2
                                           + (int)unaff_r31);
                  if (-1 < (int)uVar23) goto LAB_9800b7ec;
                  uVar26 = uVar12 + 2;
                  uVar12 = uVar12 + 1;
                } while (uVar26 <= unaff_r27);
              }
            }
            else if (((int)uVar23 >> 9 != 0) && ((uint)((int)uVar23 >> 9) <= unaff_r27)) break;
            if (in_stack_00000050 <= unaff_r23) {
              uVar15 = 0x17;
              goto LAB_9800c5b0;
            }
            bVar8 = *unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            uVar23 = unaff_r27 & 0x3f;
            unaff_r27 = unaff_r27 + 8;
            uVar25 = (uint)bVar8 << uVar23 | uVar25;
          } while (unaff_r27 < 0xf);
        }
        else {
          pbVar1 = unaff_r23 + 1;
          uVar12 = unaff_r27 + 8;
          bVar8 = *unaff_r23;
          unaff_r23 = unaff_r23 + 2;
          uVar23 = unaff_r27 & 0x3f;
          unaff_r27 = unaff_r27 + 0x10;
          uVar25 = (uint)*pbVar1 << (uVar12 & 0x3f) | (uint)bVar8 << uVar23 | uVar25;
        }
      }
LAB_9800b7ec:
      unaff_r24 = (uint)*(short *)(((uVar25 & 0x3ff) + 0x20) * 2 + (int)unaff_r31);
      if ((int)unaff_r24 < 0) {
        uVar23 = 10;
        do {
          uVar12 = uVar23 & 0x3f;
          uVar23 = uVar23 + 1;
          unaff_r24 = (uint)*(short *)(((uVar25 >> uVar12 & 1) + ~unaff_r24 + 0xc20) * 2 +
                                      (int)unaff_r31);
        } while ((int)unaff_r24 < 0);
      }
      else {
        uVar23 = (int)unaff_r24 >> 9;
        unaff_r24 = unaff_r24 & 0x1ff;
      }
      unaff_r25 = uVar25 >> (uVar23 & 0x3f);
      unaff_r27 = unaff_r27 - uVar23;
      uVar25 = unaff_r25;
      if (0xff < unaff_r24) goto LAB_9800b884;
      if (in_r7 < in_stack_0000005c) break;
      uVar15 = 0x18;
LAB_9800c440:
      iVar14 = 2;
      goto LAB_9800b57c;
    }
    if (unaff_r27 < 0xf) {
      pbVar1 = unaff_r23 + 1;
      bVar8 = *unaff_r23;
      unaff_r23 = unaff_r23 + 2;
      uVar25 = (uint)CONCAT11(*pbVar1,bVar8) << (unaff_r27 & 0x3f) | uVar25;
      unaff_r27 = unaff_r27 + 0x10;
    }
    uVar23 = (uint)*(short *)(((uVar25 & 0x3ff) + 0x20) * 2 + (int)unaff_r31);
    if ((int)uVar23 < 0) {
      uVar12 = 10;
      do {
        uVar26 = uVar12 & 0x3f;
        uVar12 = uVar12 + 1;
        uVar23 = (uint)*(short *)(((uVar25 >> uVar26 & 1) + ~uVar23 + 0xc20) * 2 + (int)unaff_r31);
      } while ((int)uVar23 < 0);
    }
    else {
      uVar12 = (int)uVar23 >> 9;
    }
    uVar25 = uVar25 >> (uVar12 & 0x3f);
    unaff_r27 = unaff_r27 - uVar12;
    unaff_r24 = uVar23;
    if ((uVar23 & 0x100) == 0) {
      if (unaff_r27 < 0xf) {
        pbVar1 = unaff_r23 + 1;
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 2;
        uVar25 = (uint)CONCAT11(*pbVar1,bVar8) << (unaff_r27 & 0x3f) | uVar25;
        unaff_r27 = unaff_r27 + 0x10;
      }
      unaff_r24 = (uint)*(short *)(((uVar25 & 0x3ff) + 0x20) * 2 + (int)unaff_r31);
      if ((int)unaff_r24 < 0) {
        uVar12 = 10;
        do {
          uVar26 = uVar12 & 0x3f;
          uVar12 = uVar12 + 1;
          unaff_r24 = (uint)*(short *)(((uVar25 >> uVar26 & 1) + ~unaff_r24 + 0xc20) * 2 +
                                      (int)unaff_r31);
        } while ((int)unaff_r24 < 0);
      }
      else {
        uVar12 = (int)unaff_r24 >> 9;
      }
      *in_r7 = (char)uVar23;
      uVar25 = uVar25 >> (uVar12 & 0x3f);
      unaff_r27 = unaff_r27 - uVar12;
      if ((unaff_r24 & 0x100) == 0) {
        in_r7[1] = (char)unaff_r24;
        in_stack_00000054 = in_r7 + 2;
        in_r7 = in_stack_00000054;
        unaff_r24 = uVar23;
        goto LAB_9800b5d8;
      }
      in_r7 = in_r7 + 1;
      in_stack_00000054 = in_r7;
    }
LAB_9800b884:
    unaff_r24 = unaff_r24 & 0x1ff;
    if (unaff_r24 == 0x100) {
LAB_9800b890:
      do {
        if ((unaff_r31[5] & 1) != 0) {
          uVar23 = unaff_r27 & 7;
          if (unaff_r27 < uVar23) goto LAB_9800b8a8;
          goto LAB_9800b8d4;
        }
        for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
          if (in_stack_00000050 <= unaff_r23) {
            uVar15 = 3;
            goto LAB_9800c5b0;
          }
          bVar8 = *unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
        }
        uVar23 = uVar25 & 7;
        uVar25 = uVar25 >> 3;
        unaff_r31[5] = uVar23;
        unaff_r27 = unaff_r27 - 3;
        uVar23 = uVar23 >> 1;
        unaff_r31[6] = uVar23;
        if (uVar23 != 0) goto code_r0x9800b92c;
        for (; uVar23 = unaff_r27 & 7, unaff_r27 < uVar23; unaff_r27 = unaff_r27 + 8) {
          if (in_stack_00000050 <= unaff_r23) {
            uVar15 = 5;
            goto LAB_9800c5b0;
          }
          bVar8 = *unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
        }
        uVar25 = uVar25 >> uVar23;
        unaff_r27 = unaff_r27 - uVar23;
        for (unaff_r24 = 0; unaff_r24 < 4; unaff_r24 = unaff_r24 + 1) {
          if (unaff_r27 == 0) {
            if (in_stack_00000050 <= unaff_r23) {
              uVar15 = 7;
              goto LAB_9800c5b0;
            }
            bVar8 = *unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            *(byte *)((int)unaff_r31 + unaff_r24 + 0x1edf) = bVar8;
          }
          else {
            for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
              if (in_stack_00000050 <= unaff_r23) {
                uVar15 = 6;
                goto LAB_9800c5b0;
              }
              bVar8 = *unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
            }
            uVar10 = (undefined1)uVar25;
            uVar25 = uVar25 >> 8;
            unaff_r27 = unaff_r27 - 8;
            *(undefined1 *)((int)unaff_r31 + unaff_r24 + 0x1edf) = uVar10;
          }
        }
        unaff_r24 = (uint)CONCAT11(*(undefined1 *)(unaff_r31 + 0x7b8),
                                   *(undefined1 *)((int)unaff_r31 + 0x1edf));
        if (unaff_r24 !=
            (CONCAT11(*(undefined1 *)((int)unaff_r31 + 0x1ee2),
                      *(undefined1 *)((int)unaff_r31 + 0x1ee1)) ^ 0xffff)) {
          FUN_9800b578();
          return;
        }
        for (; unaff_r24 != 0; unaff_r24 = unaff_r24 - 1) {
          if (unaff_r27 == 0) goto LAB_9800babc;
          for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
            if (in_stack_00000050 <= unaff_r23) {
              uVar15 = 0x33;
              goto LAB_9800c5b0;
            }
            bVar8 = *unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
          }
          in_stack_00000058 = uVar25 & 0xff;
          unaff_r25 = uVar25 >> 8;
          unaff_r27 = unaff_r27 - 8;
          if (in_stack_0000005c <= in_stack_00000054) {
            uVar15 = 0x34;
            goto LAB_9800c440;
          }
          *in_stack_00000054 = (char)uVar25;
          uVar25 = unaff_r25;
          in_stack_00000054 = in_stack_00000054 + 1;
        }
      } while( true );
    }
    unaff_r18 = (uint)*(byte *)(unaff_r24 + in_stack_0000006c + -0x101);
    unaff_r24 = (uint)*(ushort *)((unaff_r24 - 0x101) * 2 + unaff_r14);
    if (unaff_r18 != 0) {
      while( true ) {
        if (unaff_r18 <= unaff_r27) {
          unaff_r27 = unaff_r27 - unaff_r18;
          uVar23 = (unaff_r22 << (unaff_r18 & 0x3f)) - 1U & uVar25;
          uVar25 = uVar25 >> (unaff_r18 & 0x3f);
          unaff_r24 = uVar23 + unaff_r24;
          goto LAB_9800c1ac;
        }
        if (in_stack_00000050 <= unaff_r23) break;
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        uVar23 = unaff_r27 & 0x3f;
        unaff_r27 = unaff_r27 + 8;
        uVar25 = (uint)bVar8 << uVar23 | uVar25;
      }
      uVar15 = 0x19;
      goto LAB_9800c5b0;
    }
LAB_9800c1ac:
    if (unaff_r27 < 0xf) {
      if ((int)in_stack_00000050 - (int)unaff_r23 < 2) {
        do {
          uVar23 = (uint)*(short *)(((uVar25 & 0x3ff) + 0x420) * 2 + (int)unaff_r31);
          if ((int)uVar23 < 0) {
            if (10 < unaff_r27) {
              uVar12 = 10;
              do {
                uVar23 = (uint)*(short *)(((uVar25 >> (uVar12 & 0x3f) & 1) + ~uVar23 + 0xe60) * 2 +
                                         (int)unaff_r31);
                if (-1 < (int)uVar23) goto LAB_9800c2ac;
                uVar26 = uVar12 + 2;
                uVar12 = uVar12 + 1;
              } while (uVar26 <= unaff_r27);
            }
          }
          else if (((int)uVar23 >> 9 != 0) && ((uint)((int)uVar23 >> 9) <= unaff_r27)) break;
          if (in_stack_00000050 <= unaff_r23) {
            uVar15 = 0x1a;
            goto LAB_9800c5b0;
          }
          bVar8 = *unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          uVar23 = unaff_r27 & 0x3f;
          unaff_r27 = unaff_r27 + 8;
          uVar25 = (uint)bVar8 << uVar23 | uVar25;
        } while (unaff_r27 < 0xf);
      }
      else {
        pbVar1 = unaff_r23 + 1;
        uVar12 = unaff_r27 + 8;
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 2;
        uVar23 = unaff_r27 & 0x3f;
        unaff_r27 = unaff_r27 + 0x10;
        uVar25 = (uint)*pbVar1 << (uVar12 & 0x3f) | (uint)bVar8 << uVar23 | uVar25;
      }
    }
LAB_9800c2ac:
    uVar23 = (uint)*(short *)(((uVar25 & 0x3ff) + 0x420) * 2 + (int)unaff_r31);
    if ((int)uVar23 < 0) {
      uVar12 = 10;
      do {
        uVar26 = uVar12 & 0x3f;
        uVar12 = uVar12 + 1;
        uVar23 = (uint)*(short *)(((uVar25 >> uVar26 & 1) + ~uVar23 + 0xe60) * 2 + (int)unaff_r31);
      } while ((int)uVar23 < 0);
    }
    else {
      uVar12 = (int)uVar23 >> 9;
      uVar23 = uVar23 & 0x1ff;
    }
    unaff_r18 = (uint)*(byte *)(uVar23 + unaff_r16);
    uVar25 = uVar25 >> (uVar12 & 0x3f);
    in_r9 = (uint)*(ushort *)(uVar23 * 2 + unaff_r17);
    unaff_r27 = unaff_r27 - uVar12;
    if (unaff_r18 != 0) {
      for (; unaff_r27 < unaff_r18; unaff_r27 = unaff_r27 + 8) {
        if (in_stack_00000050 <= unaff_r23) {
          uVar15 = 0x1b;
          in_stack_00000058 = in_r9;
          goto LAB_9800c5b0;
        }
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
      }
      unaff_r27 = unaff_r27 - unaff_r18;
      uVar23 = (unaff_r22 << (unaff_r18 & 0x3f)) - 1U & uVar25;
      uVar25 = uVar25 >> (unaff_r18 & 0x3f);
      in_r9 = uVar23 + in_r9;
    }
    in_r8 = (int)in_r7 - in_stack_000001ec;
    if ((((in_r9 == 0) || (in_r8 < in_r9)) || (in_r8 == 0)) && ((in_stack_00000204 & 4) != 0)) {
      FUN_9800b578();
      return;
    }
    in_r6 = in_r8 - in_r9;
    in_r10 = in_stack_000001ec;
    in_r11 = in_stack_00000064;
    unaff_r25 = uVar25;
    in_stack_00000058 = in_r9;
    in_stack_00000060 = in_r8;
  } while( true );
  *in_r7 = (char)unaff_r24;
  in_stack_00000054 = in_r7 + 1;
  in_r7 = in_stack_00000054;
  goto LAB_9800b5d8;
code_r0x9800b92c:
  if (uVar23 == 3) {
    FUN_9800b578();
    return;
  }
  if (uVar23 == 1) {
    unaff_r31[0xb] = 0x120;
    unaff_r31[0xc] = 0x20;
    FUN_9800d9e0(unaff_r31 + 0x7ab,5,0x20);
    puVar13 = (undefined1 *)((int)unaff_r31 + 0x1d8b);
    iVar14 = 0x90;
    do {
      puVar13 = puVar13 + 1;
      *puVar13 = 8;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar13 = (undefined1 *)((int)unaff_r31 + 0x1e1b);
    iVar14 = 0x70;
    do {
      puVar13 = puVar13 + 1;
      *puVar13 = 9;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar13 = (undefined1 *)((int)unaff_r31 + 0x1e8b);
    iVar14 = 0x18;
    do {
      puVar13 = puVar13 + 1;
      *puVar13 = 7;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar13 = (undefined1 *)((int)unaff_r31 + 0x1ea3);
    iVar14 = 8;
    do {
      puVar13 = puVar13 + 1;
      *puVar13 = 8;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  else {
    for (unaff_r24 = 0; unaff_r24 < 3; unaff_r24 = unaff_r24 + 1) {
      cVar9 = *(char *)(unaff_r24 + unaff_r20);
      while( true ) {
        if ((uint)(int)cVar9 <= unaff_r27) break;
        if (in_stack_00000050 <= unaff_r23) {
          uVar15 = 0xb;
          goto LAB_9800c5b0;
        }
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        cVar9 = *(char *)(unaff_r24 + unaff_r20);
        uVar23 = unaff_r27 & 0x3f;
        unaff_r27 = unaff_r27 + 8;
        uVar25 = (uint)bVar8 << uVar23 | uVar25;
      }
      uVar23 = (unaff_r22 << ((int)cVar9 & 0x3fU)) - 1U & uVar25;
      unaff_r31[unaff_r24 + 0xb] = uVar23;
      cVar9 = *(char *)(unaff_r24 + unaff_r20);
      uVar25 = uVar25 >> ((int)cVar9 & 0x3fU);
      unaff_r31[unaff_r24 + 0xb] = *(ushort *)(unaff_r24 * 2 + unaff_r21) + uVar23;
      unaff_r27 = unaff_r27 - (int)cVar9;
    }
    unaff_r31[0x7b3] = 0;
    unaff_r31[0x7b4] = 0;
    unaff_r31[0x7b5] = 0;
    unaff_r31[0x7b6] = 0;
    *(undefined2 *)(unaff_r31 + 0x7b7) = 0;
    *(undefined1 *)((int)unaff_r31 + 0x1ede) = 0;
    for (unaff_r24 = 0; unaff_r24 < (uint)unaff_r31[0xd]; unaff_r24 = unaff_r24 + 1) {
      for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
        if (in_stack_00000050 <= unaff_r23) {
          uVar15 = 0xe;
          goto LAB_9800c5b0;
        }
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
      }
      bVar8 = (byte)uVar25;
      uVar25 = uVar25 >> 3;
      unaff_r27 = unaff_r27 - 3;
      *(byte *)((int)unaff_r31 + *(byte *)(unaff_r24 + unaff_r15) + 0x1ecc) = bVar8 & 7;
    }
    unaff_r31[0xd] = 0x13;
  }
  in_r7 = in_stack_00000054;
  if (-1 < (int)unaff_r31[6]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_9800b5d8;
LAB_9800babc:
  if (unaff_r24 == 0) goto LAB_9800b890;
  if (in_stack_0000005c <= in_stack_00000054) {
    uVar15 = 9;
    unaff_r25 = uVar25;
    goto LAB_9800c440;
  }
  if (in_stack_00000050 <= unaff_r23) {
    uVar15 = 0x26;
    goto LAB_9800c5b0;
  }
  uVar26 = (int)in_stack_00000050 - (int)unaff_r23;
  uVar12 = (int)in_stack_0000005c - (int)in_stack_00000054;
  uVar23 = uVar12;
  if (uVar26 <= uVar12) {
    uVar23 = uVar26;
  }
  uVar27 = unaff_r24;
  if ((uVar23 < unaff_r24) && (uVar27 = uVar26, uVar12 < uVar26)) {
    uVar27 = uVar12;
  }
  FUN_9800d3f0();
  in_stack_00000054 = in_stack_00000054 + uVar27;
  unaff_r23 = unaff_r23 + uVar27;
  unaff_r24 = unaff_r24 - uVar27;
  goto LAB_9800babc;
  while( true ) {
    bVar8 = *unaff_r23;
    unaff_r23 = unaff_r23 + 1;
    uVar23 = unaff_r27 & 0x3f;
    unaff_r27 = unaff_r27 + 8;
    uVar25 = (uint)bVar8 << uVar23 | uVar25;
    uVar23 = unaff_r27 & 7;
    if (uVar23 <= unaff_r27) break;
LAB_9800b8a8:
    if (in_stack_00000050 <= unaff_r23) {
      uVar15 = 0x20;
      goto LAB_9800c5b0;
    }
  }
LAB_9800b8d4:
  for (unaff_r27 = unaff_r27 - uVar23; (in_stack_000001dc < unaff_r23 && (7 < unaff_r27));
      unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 + -1;
  }
  uVar25 = uVar25 >> uVar23 & ~(-1 << (unaff_r27 & 0x3f));
  if ((in_stack_00000204 & 1) != 0) {
    for (unaff_r24 = 0; unaff_r24 < 4; unaff_r24 = unaff_r24 + 1) {
      if (unaff_r27 == 0) {
        if (unaff_r23 < in_stack_00000050) {
          uVar23 = (uint)*unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          goto LAB_9800c54c;
        }
        uVar15 = 0x2a;
LAB_9800c5b0:
        *unaff_r31 = uVar15;
        iVar14 = (-(uint)((in_stack_00000204 & 2) != 0) & 5) - 4;
        if ((iVar14 == 1) || (iVar14 == -4)) goto LAB_9800c610;
        goto LAB_9800c608;
      }
      for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
        if (in_stack_00000050 <= unaff_r23) {
          uVar15 = 0x29;
          goto LAB_9800c5b0;
        }
        bVar8 = *unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        uVar25 = (uint)bVar8 << (unaff_r27 & 0x3f) | uVar25;
      }
      uVar23 = uVar25 & 0xff;
      uVar25 = uVar25 >> 8;
      unaff_r27 = unaff_r27 - 8;
LAB_9800c54c:
      unaff_r31[4] = unaff_r31[4] << 8 | uVar23;
    }
  }
  uVar15 = 0x22;
  iVar14 = 0;
  unaff_r25 = uVar25;
LAB_9800b57c:
  *unaff_r31 = uVar15;
  uVar25 = unaff_r25;
LAB_9800c608:
  for (; (in_stack_000001dc < unaff_r23 && (7 < unaff_r27)); unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 + -1;
  }
LAB_9800c610:
  uVar23 = (int)in_stack_00000054 - (int)in_stack_000001f4;
  unaff_r31[1] = unaff_r27;
  unaff_r31[8] = in_stack_00000058;
  unaff_r31[9] = unaff_r24;
  unaff_r31[10] = unaff_r18;
  unaff_r31[0xf] = in_stack_00000060;
  unaff_r31[0xe] = uVar25 & ~(-1 << (unaff_r27 & 0x3f));
  *in_stack_000001e4 = (int)unaff_r23 - (int)in_stack_000001dc;
  *in_stack_000001fc = uVar23;
  if (((in_stack_00000204 & 9) != 0) && (-1 < iVar14)) {
    uVar12 = unaff_r31[7] & 0xffff;
    uVar25 = (uint)unaff_r31[7] >> 0x10;
    pbVar1 = (byte *)(uVar23 % 0x15b0);
    while (uVar23 != 0) {
      pbVar11 = (byte *)0x0;
      if ((byte *)0x7 < pbVar1) {
        iVar14 = 7 - (int)in_stack_000001f4;
        do {
          pbVar11 = pbVar11 + 8;
          iVar16 = *in_stack_000001f4 + uVar12;
          pbVar2 = in_stack_000001f4 + 3;
          pbVar3 = in_stack_000001f4 + 4;
          iVar17 = (uint)in_stack_000001f4[1] + iVar16;
          pbVar4 = in_stack_000001f4 + 5;
          pbVar5 = in_stack_000001f4 + 6;
          pbVar6 = in_stack_000001f4 + 7;
          iVar18 = (uint)in_stack_000001f4[2] + iVar17;
          in_stack_000001f4 = in_stack_000001f4 + 8;
          iVar19 = (uint)*pbVar2 + iVar18;
          iVar20 = (uint)*pbVar3 + iVar19;
          iVar21 = (uint)*pbVar4 + iVar20;
          iVar22 = (uint)*pbVar5 + iVar21;
          uVar12 = (uint)*pbVar6 + iVar22;
          uVar25 = uVar25 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 + iVar22 + uVar12;
        } while (in_stack_000001f4 + iVar14 < pbVar1);
      }
      if (pbVar11 < pbVar1) {
        iVar14 = (int)pbVar1 - (int)pbVar11;
        do {
          bVar8 = *in_stack_000001f4;
          in_stack_000001f4 = in_stack_000001f4 + 1;
          uVar12 = bVar8 + uVar12;
          uVar25 = uVar25 + uVar12;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      uVar12 = uVar12 % 0xfff1;
      uVar25 = uVar25 % 0xfff1;
      uVar23 = uVar23 - (int)pbVar1;
      pbVar1 = (byte *)0x15b0;
    }
    unaff_r31[7] = uVar25 * 0x10000 + uVar12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c7c0 @ 9800c7c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c7c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9800d258();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  uVar1 = FUN_9800b260((int)uVar4,param_4,param_6);
  if ((((iVar3 != 0) && (param_3 == 8)) && (0 < param_5)) &&
     ((param_5 < 10 && ((param_4 == 0xf || (param_4 == -0xf)))))) {
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 1;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    if (*(int *)(iVar3 + 0x20) == 0) {
      *(undefined1 **)(iVar3 + 0x20) = &SUB_91a07840;
    }
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(undefined4 *)(iVar3 + 0x24) = 0x91a07848;
    }
    iVar2 = (**(code **)(iVar3 + 0x20))(*(undefined4 *)(iVar3 + 0x28),1,0x4df40);
    if (iVar2 != 0) {
      *(int *)(iVar3 + 0x1c) = iVar2;
      iVar3 = FUN_9800b0e8(iVar2,0,0,uVar1 | 0x2000);
      if (iVar3 != 0) {
        FUN_98008650();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c8e0 @ 9800c8e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c8e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_40;
  int aiStack_3c [15];
  
  uVar5 = FUN_9800d254();
  piVar1 = (int *)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (((((piVar1 != (int *)0x0) && (iVar2 = piVar1[7], iVar2 != 0)) && (-1 < iVar4)) &&
      ((iVar4 < 5 && (piVar1[3] != 0)))) && (aiStack_3c[0] = piVar1[4], aiStack_3c[0] != 0)) {
    if (iVar4 == 1) {
      iVar4 = 2;
    }
    if (*(int *)(iVar2 + 0x6c) != 1) {
      iStack_40 = piVar1[1];
      iVar2 = FUN_9800aec8(iVar2,*piVar1,&iStack_40,piVar1[3],aiStack_3c,iVar4);
      *piVar1 = *piVar1 + iStack_40;
      iVar3 = aiStack_3c[0] + piVar1[5];
      piVar1[1] = piVar1[1] - iStack_40;
      piVar1[2] = piVar1[2] + iStack_40;
      piVar1[0xc] = *(int *)(piVar1[7] + 0x18);
      piVar1[3] = piVar1[3] + aiStack_3c[0];
      piVar1[4] = piVar1[4] - aiStack_3c[0];
      while (((piVar1[5] = iVar3, -1 < iVar2 && (iVar2 != 1)) &&
             ((piVar1[4] != 0 && ((piVar1[1] != 0 || (iVar4 == 4))))))) {
        iStack_40 = piVar1[1];
        aiStack_3c[0] = piVar1[4];
        iVar2 = FUN_9800aec8(piVar1[7],*piVar1,&iStack_40,piVar1[3],aiStack_3c,iVar4);
        *piVar1 = *piVar1 + iStack_40;
        piVar1[1] = piVar1[1] - iStack_40;
        piVar1[2] = piVar1[2] + iStack_40;
        piVar1[0xc] = *(int *)(piVar1[7] + 0x18);
        piVar1[3] = piVar1[3] + aiStack_3c[0];
        piVar1[4] = piVar1[4] - aiStack_3c[0];
        iVar3 = aiStack_3c[0] + piVar1[5];
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800cae8 @ 9800cae8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800cae8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  int iStack_60;
  uint auStack_5c [23];
  
  uVar10 = FUN_9800d244();
  piVar1 = (int *)((ulonglong)uVar10 >> 0x20);
  iVar6 = (int)uVar10;
  uVar7 = 8;
  if ((piVar1 != (int *)0x0) && (iVar9 = piVar1[7], iVar9 != 0)) {
    if (iVar6 == 1) {
      iVar6 = 2;
    }
    if (((iVar6 == 0) || (iVar6 == 2)) || (iVar6 == 4)) {
      if (0 < *(int *)(iVar9 + 0x20bc)) {
        uVar7 = 9;
      }
      iVar2 = *(int *)(iVar9 + 0x20b4);
      iVar5 = piVar1[1];
      piVar8 = (int *)(iVar9 + 0xa0c0);
      *(undefined4 *)(iVar9 + 0x20b4) = 0;
      if ((-1 < *piVar8) && ((*(uint *)(iVar9 + 0x20b8) == 0 || (iVar6 == 4)))) {
        *(uint *)(iVar9 + 0x20b8) = (uint)(iVar6 == 4) | *(uint *)(iVar9 + 0x20b8);
        if (iVar6 == 4) {
          if (iVar2 != 0) {
            iStack_60 = piVar1[1];
            auStack_5c[0] = piVar1[4];
            iVar6 = FUN_9800b318(iVar9,*piVar1,&iStack_60,piVar1[3],piVar1[3],auStack_5c,uVar7 | 4);
            *piVar8 = iVar6;
            *piVar1 = *piVar1 + iStack_60;
            piVar1[1] = piVar1[1] - iStack_60;
            piVar1[2] = piVar1[2] + iStack_60;
            piVar1[0xc] = *(int *)(iVar9 + 0x1c);
            piVar1[3] = auStack_5c[0] + piVar1[3];
            piVar1[4] = piVar1[4] - auStack_5c[0];
            piVar1[5] = piVar1[5] + auStack_5c[0];
            if (iVar6 < 0) {
              halt_baddata();
            }
            if (iVar6 == 0) {
              halt_baddata();
            }
            *piVar8 = -1;
            halt_baddata();
          }
        }
        else {
          uVar7 = uVar7 | 2;
        }
        uVar4 = *(uint *)(iVar9 + 0x20b0);
        if (uVar4 == 0) {
          while( true ) {
            iStack_60 = piVar1[1];
            auStack_5c[0] = 0x8000 - *(int *)(iVar9 + 0x20ac);
            iVar2 = FUN_9800b318(iVar9,*piVar1,&iStack_60,iVar9 + 0x20c0,
                                 *(int *)(iVar9 + 0x20ac) + iVar9 + 0x20c0,auStack_5c,uVar7);
            *piVar8 = iVar2;
            piVar1[2] = piVar1[2] + iStack_60;
            piVar1[1] = piVar1[1] - iStack_60;
            *piVar1 = *piVar1 + iStack_60;
            piVar1[0xc] = *(int *)(iVar9 + 0x1c);
            *(uint *)(iVar9 + 0x20b0) = auStack_5c[0];
            uVar4 = piVar1[4];
            if (auStack_5c[0] < (uint)piVar1[4]) {
              uVar4 = auStack_5c[0];
            }
            FUN_9800d3f0();
            piVar1[3] = uVar4 + piVar1[3];
            piVar1[5] = piVar1[5] + uVar4;
            piVar1[4] = piVar1[4] - uVar4;
            iVar3 = *(int *)(iVar9 + 0x20b0) - uVar4;
            *(int *)(iVar9 + 0x20b0) = iVar3;
            *(uint *)(iVar9 + 0x20ac) = *(int *)(iVar9 + 0x20ac) + uVar4 & 0x7fff;
            if ((iVar2 < 0) || ((iVar2 == 1 && (iVar5 == 0)))) break;
            if (iVar6 == 4) {
              if (iVar2 == 0) {
                halt_baddata();
              }
              if (piVar1[4] == 0) {
                halt_baddata();
              }
            }
            else {
              if (iVar2 == 0) {
                halt_baddata();
              }
              if (piVar1[1] == 0) {
                halt_baddata();
              }
              if (piVar1[4] == 0) {
                halt_baddata();
              }
              if (iVar3 != 0) {
                halt_baddata();
              }
            }
          }
        }
        else {
          uVar7 = piVar1[4];
          if (uVar4 < (uint)piVar1[4]) {
            uVar7 = uVar4;
          }
          FUN_9800d3f0();
          piVar1[3] = uVar7 + piVar1[3];
          piVar1[5] = piVar1[5] + uVar7;
          piVar1[4] = piVar1[4] - uVar7;
          *(uint *)(iVar9 + 0x20b0) = *(int *)(iVar9 + 0x20b0) - uVar7;
          *(uint *)(iVar9 + 0x20ac) = *(int *)(iVar9 + 0x20ac) + uVar7 & 0x7fff;
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ce80 @ 9800ce80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ce80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800cfcc @ 9800cfcc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800cfcc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d148 @ 9800d148 ==== */

void FUN_9800d148(undefined4 *param_1)

{
  FUN_9800f058(*(int *)*param_1);
  return;
}


/* ==== FUN_9800d220 @ 9800d220 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d220(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d234 @ 9800d234 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d234(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d238 @ 9800d238 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d238(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d23c @ 9800d23c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d23c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d240 @ 9800d240 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d240(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d244 @ 9800d244 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d244(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d248 @ 9800d248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d24c @ 9800d24c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d24c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d250 @ 9800d250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d250(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d254 @ 9800d254 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d254(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d258 @ 9800d258 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d258(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d25c @ 9800d25c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d25c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d2d0 @ 9800d2d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800d2d0(undefined4 param_1)

{
  _DAT_91a194a4 = param_1;
  return;
}


/* ==== FUN_9800d2e0 @ 9800d2e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800d2e0(void)

{
  undefined4 in_r0;
  
  if (_DAT_91a194a4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x9800d308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_91a194a4)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_9800d318 @ 9800d318 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d318(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint local_aac [2];
  undefined4 local_aa4;
  uint auStack_a60 [662];
  undefined4 local_8;
  
  iVar1 = FUN_9800d25c();
  if (iVar1 != -1) {
    FUN_9800fe18();
  }
  FUN_9800d9e0(local_aac,0,0x4c);
  FUN_9800d9e0(auStack_a60,0,0xa40);
  local_aa4 = local_8;
  local_aac[0] = param_3;
  FUN_980144e8(0);
  iVar2 = FUN_98014500();
  if ((iVar2 == 0) && (iVar1 != -1)) {
    FUN_9800fe18();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d3b8 @ 9800d3b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d3b8(void)

{
  int extraout_r4;
  
  FUN_9800d318(2,0xc0000417,1);
  FUN_980180c8(0x1e,extraout_r4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_9800da80 @ 9800d3e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_9800da80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d3f0 @ 9800d3f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d3f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d920 @ 9800d920 ==== */

void FUN_9800d920(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return;
  }
  if (param_2 <= param_1) {
    iVar3 = param_3 + 1;
    uVar5 = param_2 + param_3;
    for (puVar4 = (undefined4 *)(param_1 + param_3); iVar3 = iVar3 + -1,
        iVar3 != 0 && ((uint)puVar4 & 3) != 0; puVar4 = (undefined4 *)((int)puVar4 + -1)) {
      param_3 = param_3 - 1;
      puVar2 = (undefined1 *)(uVar5 - 1);
      uVar5 = uVar5 - 1;
      *(undefined1 *)((int)puVar4 + -1) = *puVar2;
    }
    uVar6 = param_3 >> 2;
    if (uVar6 != 0) {
      if ((uVar5 & 3) == 0) {
        do {
          puVar1 = (undefined4 *)(uVar5 - 4);
          uVar5 = uVar5 - 4;
          puVar4[-1] = *puVar1;
          puVar4 = puVar4 + -1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      else {
        do {
          puVar4 = puVar4 + -1;
          puVar1 = (undefined4 *)(uVar5 - 4);
          uVar5 = uVar5 - 4;
          *puVar4 = *puVar1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar6 = param_3 & 3;
    if (uVar6 != 0) {
      do {
        puVar2 = (undefined1 *)(uVar5 - 1);
        uVar5 = uVar5 - 1;
        *(undefined1 *)((int)puVar4 + -1) = *puVar2;
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return;
    }
    return;
  }
  FUN_9800d3f0();
  return;
}


/* ==== FUN_9800d9e0 @ 9800d9e0 ==== */

void FUN_9800d9e0(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar3;
  uint uVar2;
  uint *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar5;
  
  iVar1 = param_3 + 1;
  while( true ) {
    iVar1 = iVar1 + -1;
    uVar3 = (undefined1)param_2;
    if (iVar1 == 0 || ((uint)param_1 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(undefined1 *)param_1 = uVar3;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar5 = (param_2 & 0xff) << 8;
  uVar2 = (uVar5 | param_2 & 0xffff00ff) << 0x10 | uVar5 | param_2 & 0xff;
  for (uVar5 = param_3 >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    param_1 = param_1 + 4;
  }
  uVar5 = param_3 >> 2 & 3;
  puVar4 = param_1;
  if (uVar5 != 0) {
    *param_1 = uVar2;
    puVar4 = param_1 + 1;
    if (uVar5 != 1) {
      *puVar4 = uVar2;
      puVar4 = param_1 + 2;
      if (uVar5 != 2) {
        *puVar4 = uVar2;
        puVar4 = param_1 + 3;
      }
    }
  }
  uVar5 = param_3 & 3;
  if (uVar5 == 0) {
    return;
  }
  *(undefined1 *)puVar4 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x9800da6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x9800da74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_9800da80 @ 9800da80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800da80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dae0 @ 9800dae0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800dae0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_r4;
  uint uVar5;
  
  uVar1 = FUN_9800d258();
  if (uVar1 < 0xfffff001) {
    do {
      iVar2 = func_0x980179a8();
      if (iVar2 == 0) {
        FUN_9800fff0();
        FUN_9800ffc0(0x1e);
        FUN_9800ebb0(0xff,extraout_r4);
      }
      uVar5 = uVar1;
      if (uVar1 == 0) {
        uVar5 = 1;
      }
      uVar3 = func_0x980179a8();
      iVar2 = FUN_980164d8(uVar3,0,uVar5);
      if (iVar2 != 0) {
        halt_baddata();
      }
      if (_DAT_91a194c8 == 0) {
        puVar4 = (undefined4 *)FUN_9800fe98();
        *puVar4 = 0xc;
        break;
      }
      iVar2 = FUN_9800e1f8();
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_9800fe98();
    *puVar4 = 0xc;
  }
  else {
    FUN_9800e1f8();
    puVar4 = (undefined4 *)FUN_9800fe98();
    *puVar4 = 0xc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dba8 @ 9800dba8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800dba8(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800d248();
  pbVar5 = (byte *)((ulonglong)uVar6 >> 0x20);
  if ((undefined4 *)uVar6 != (undefined4 *)0x0) {
    *(undefined4 *)uVar6 = pbVar5;
  }
  if ((pbVar5 != (byte *)0x0) && ((param_3 == 0 || ((1 < param_3 && (param_3 < 0x25)))))) {
    bVar1 = *pbVar5;
    iVar4 = _DAT_91a18778;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      if (*(int *)(iVar4 + 0xac) < 2) {
        uVar3 = *(ushort *)((uint)bVar1 * 2 + *(int *)(iVar4 + 200)) & 8;
      }
      else {
        uVar3 = FUN_98010038((uint)bVar1,8);
        iVar4 = _DAT_91a18778;
      }
      if (uVar3 == 0) break;
      bVar1 = *pbVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined4 *)FUN_9800fe98();
  *puVar2 = 0x16;
  FUN_9800d2e0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800de68 @ 9800de68 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800de68(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800d248();
  pbVar5 = (byte *)((ulonglong)uVar6 >> 0x20);
  if ((undefined4 *)uVar6 != (undefined4 *)0x0) {
    *(undefined4 *)uVar6 = pbVar5;
  }
  if ((pbVar5 != (byte *)0x0) && ((param_3 == 0 || ((1 < param_3 && (param_3 < 0x25)))))) {
    bVar1 = *pbVar5;
    iVar4 = _DAT_91a18778;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      if (*(int *)(iVar4 + 0xac) < 2) {
        uVar3 = *(ushort *)((uint)bVar1 * 2 + *(int *)(iVar4 + 200)) & 8;
      }
      else {
        uVar3 = FUN_98010038((uint)bVar1,8);
        iVar4 = _DAT_91a18778;
      }
      if (uVar3 == 0) break;
      bVar1 = *pbVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined4 *)FUN_9800fe98();
  *puVar2 = 0x16;
  FUN_9800d2e0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800de70 @ 9800de70 ==== */

int FUN_9800de70(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 1) {
    return 0;
  }
  iVar1 = (uint)*param_1 - (uint)*param_2;
  param_3 = param_3 + -1;
  if (param_3 == 0 || *param_1 == 0) {
    return iVar1;
  }
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = (uint)*param_1 - (uint)*param_2;
    param_3 = param_3 + -1;
  } while (param_3 != 0 && *param_1 != 0);
  return iVar1;
}


/* ==== FUN_9800dec0 @ 9800dec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dec0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800df78 @ 9800df78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800df78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e058 @ 9800e058 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9800e058(void)

{
  undefined4 uVar1;
  
  _DAT_91a198ec = (undefined4 *)FUN_980101a0();
  _DAT_91a198f0 = _DAT_91a198ec;
  if (_DAT_91a198ec == (undefined4 *)0x0) {
    uVar1 = 0x18;
  }
  else {
    uVar1 = 0;
    *_DAT_91a198ec = 0;
  }
  return uVar1;
}


/* ==== FUN_9800e0b8 @ 9800e0b8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800e0b8(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_9800d244();
  FUN_9800ebb8();
  puVar6 = _DAT_91a198ec;
  if (_DAT_91a198f0 <= _DAT_91a198ec) {
    iVar4 = (int)_DAT_91a198ec - (int)_DAT_91a198f0;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = FUN_98010148(_DAT_91a198f0);
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (undefined4 *)FUN_9800e2b8(), puVar3 == (undefined4 *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (undefined4 *)FUN_9800e2b8(), puVar3 == (undefined4 *)0x0))))
        goto LAB_9800d294;
        puVar6 = puVar3 + (iVar4 >> 2);
        _DAT_91a198f0 = puVar3;
      }
      _DAT_91a198ec = puVar6 + 1;
      *puVar6 = uVar1;
    }
  }
LAB_9800d294:
  FUN_9800e19c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e19c @ 9800e19c ==== */

void FUN_9800e19c(void)

{
  FUN_9800ebc0();
  return;
}


/* ==== FUN_9800e1c0 @ 9800e1c0 ==== */

int FUN_9800e1c0(void)

{
  int iVar1;
  
  iVar1 = FUN_9800e0b8();
  return -(uint)(iVar1 == 0);
}


/* ==== FUN_9800e1e8 @ 9800e1e8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800e1e8(undefined4 param_1)

{
  _DAT_91a194a8 = param_1;
  return;
}


/* ==== FUN_9800e1f8 @ 9800e1f8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9800e1f8(void)

{
  int iVar1;
  
  if ((_DAT_91a194a8 != (code *)0x0) && (iVar1 = (*_DAT_91a194a8)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_9800e240 @ 9800e240 ==== */

void FUN_9800e240(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 == 0) {
    return;
  }
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    cVar1 = pcVar3[param_2 - (int)param_1];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    param_3 = param_3 + -1;
    pcVar2 = pcVar3 + 1;
  } while (param_3 != 0);
  if (param_3 == 0) {
    return;
  }
  param_3 = param_3 + -1;
  if (param_3 != 0) {
    if (param_3 != 0) {
      do {
        pcVar3 = pcVar3 + 1;
        *pcVar3 = '\0';
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
  return;
}


/* ==== FUN_9800e2a0 @ 9800e2a0 ==== */

int FUN_9800e2a0(int param_1)

{
  if (param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_9800e2b8 @ 9800e2b8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800e2b8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800d254();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  uVar5 = (uint)uVar6;
  if (iVar1 == 0) {
    FUN_9800dae0();
  }
  else if (uVar5 == 0) {
    FUN_9800da80();
  }
  else {
    do {
      if (0xfffff000 < uVar5) {
        FUN_9800e1f8();
        puVar4 = (undefined4 *)FUN_9800fe98();
        *puVar4 = 0xc;
        halt_baddata();
      }
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      uVar2 = func_0x980179a8();
      iVar3 = FUN_980170c8(uVar2,0,iVar1,uVar5);
      if (iVar3 != 0) {
        halt_baddata();
      }
      if (_DAT_91a194c8 == 0) {
        puVar4 = (undefined4 *)FUN_9800fe98();
        uVar5 = thunk_FUN_98007a68();
        uVar2 = FUN_9800fe28(uVar5);
        *puVar4 = uVar2;
        halt_baddata();
      }
      iVar3 = FUN_9800e1f8();
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)FUN_9800fe98();
    uVar5 = thunk_FUN_98007a68();
    uVar2 = FUN_9800fe28(uVar5);
    *puVar4 = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e320 @ 9800e320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e320(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r27;
  int unaff_r28;
  uint unaff_r29;
  uint unaff_r31;
  
  while( true ) {
    iVar1 = FUN_980170c8(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(unaff_r27 + -0x6b38) == 0) {
      puVar2 = (undefined4 *)FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *puVar2 = uVar4;
      halt_baddata();
    }
    iVar1 = FUN_9800e1f8();
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *puVar2 = uVar4;
      halt_baddata();
    }
    if (unaff_r29 < unaff_r31) break;
    param_4 = unaff_r31;
    if (unaff_r31 == 0) {
      param_4 = 1;
    }
    param_1 = func_0x980179a8();
    param_2 = 0;
    param_3 = unaff_r28;
    unaff_r31 = param_4;
  }
  FUN_9800e1f8();
  puVar2 = (undefined4 *)FUN_9800fe98();
  *puVar2 = 0xc;
  halt_baddata();
}


/* ==== FUN_9800e3a8 @ 9800e3a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e3a8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_9800d25c();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 0x16;
    FUN_9800d2e0();
  }
  else {
    if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
      FUN_9800e550();
      FUN_98010ea0();
      FUN_98010e60(iVar1);
      iVar3 = FUN_98010d00();
      if ((-1 < iVar3) && (*(int *)(iVar1 + 0x1c) != 0)) {
        FUN_9800da80();
        *(undefined4 *)(iVar1 + 0x1c) = 0;
      }
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e3e0 @ 9800e3e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e3e0(void)

{
  int iVar1;
  uint in_r11;
  int unaff_r31;
  
  if ((in_r11 & 0x83) != 0) {
    FUN_9800e550();
    FUN_98010ea0();
    FUN_98010e60(unaff_r31);
    iVar1 = FUN_98010d00();
    if ((-1 < iVar1) && (*(int *)(unaff_r31 + 0x1c) != 0)) {
      FUN_9800da80();
      *(undefined4 *)(unaff_r31 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(unaff_r31 + 0xc) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e450 @ 9800e450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e450(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e514 @ 9800e514 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e514(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e550 @ 9800e550 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e550(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)FUN_9800d258();
  if ((piVar1[3] & 3U) == 2) {
    if ((piVar1[3] & 0x108U) != 0) {
      iVar5 = piVar1[2];
      iVar3 = *piVar1;
      if (0 < iVar3 - iVar5) {
        FUN_98010e60((int)piVar1);
        iVar2 = FUN_98011218();
        uVar4 = piVar1[3];
        if (iVar2 == iVar3 - iVar5) {
          if ((uVar4 & 0x80) == 0) goto LAB_9800e5c8;
          uVar4 = uVar4 & 0xfffffffd;
        }
        else {
          uVar4 = uVar4 | 0x20;
        }
        piVar1[3] = uVar4;
      }
    }
  }
LAB_9800e5c8:
  piVar1[1] = 0;
  *piVar1 = piVar1[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e5e8 @ 9800e5e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e5e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e668 @ 9800e668 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e668(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_9800d254();
  FUN_980104f8();
  piVar3 = (int *)0x91a198e4;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + iRam91a198e0);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_98010750(iVar5);
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + iRam91a198e0) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_9800e5e8();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_9800e5e8();
        }
      }
      FUN_9800e7dc();
    }
  }
  FUN_9800e78c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e78c @ 9800e78c ==== */

void FUN_9800e78c(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_9800e7dc @ 9800e7dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e7dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e840 @ 9800e840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e840(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_9800d254();
  FUN_980104f8();
  piVar3 = (int *)0x91a198e4;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + iRam91a198e0);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_98010750(iVar5);
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + iRam91a198e0) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_9800e5e8();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_9800e5e8();
        }
      }
      FUN_9800e7dc();
    }
  }
  FUN_9800e78c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e848 @ 9800e848 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e848(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e890 @ 9800e890 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800e890(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_9800d25c();
  uVar1 = thunk_FUN_98007a68();
  iVar2 = FUN_980180d8();
  if ((iVar2 == 0) && (iVar2 = FUN_980180e8(), iVar2 != 0)) {
    puVar3 = (undefined4 *)FUN_980101a0();
    if (puVar3 == (undefined4 *)0x0) {
      FUN_980180e8();
    }
    else {
      iVar2 = FUN_980180e8();
      if (iVar2 == 0) {
        FUN_9800da80();
      }
      else {
        puVar3[2] = 0;
        puVar3[0x17] = 0x91a01600;
        puVar3[5] = 1;
        uVar4 = func_0x98017a78();
        *puVar3 = uVar4;
        puVar3[1] = 0xffffffff;
      }
    }
  }
  thunk_FUN_98007a18(uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e968 @ 9800e968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e9a8 @ 9800e9a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e9a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ea68 @ 9800ea68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ea68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ead8 @ 9800ead8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ead8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ebb0 @ 9800ebb0 ==== */

void FUN_9800ebb0(undefined4 param_1,int param_2)

{
  FUN_980180c8(0,param_2);
  return;
}


/* ==== FUN_9800ebb8 @ 9800ebb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ebb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ebc0 @ 9800ebc0 ==== */

void FUN_9800ebc0(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_9800ebc8 @ 9800ebc8 ==== */

void FUN_9800ebc8(void)

{
  FUN_9800e1e8(0);
  FUN_9800d2d0(0);
  FUN_98011598(0);
  FUN_98011580();
  return;
}


/* ==== FUN_9800ec08 @ 9800ec08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ec08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ec68 @ 9800ec68 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800ec68(void)

{
  int extraout_r4;
  int extraout_r4_00;
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800d248();
  FUN_980104f8();
  if (iRam91a194c4 != 1) {
    iVar1 = -0x6e5e0000;
    if (iRam91a194c0 == 1) {
      FUN_980180c8(0,extraout_r4);
    }
    *(undefined4 *)(iVar1 + -0x6b40) = 1;
    uRam91a194bc = (undefined1)uVar7;
    if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
      piVar3 = _DAT_91a198ec;
      piVar4 = _DAT_91a198f0;
      piVar5 = _DAT_91a198f0;
      piVar6 = _DAT_91a198ec;
      if (_DAT_91a198f0 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar2 = (code *)*piVar6;
            *piVar6 = 0;
            (*pcVar2)();
            if ((piVar5 != _DAT_91a198f0) || (piVar3 != _DAT_91a198ec)) {
              piVar3 = _DAT_91a198ec;
              piVar4 = _DAT_91a198f0;
              piVar5 = _DAT_91a198f0;
              piVar6 = _DAT_91a198ec;
            }
          }
        }
      }
      FUN_9800ec08(0x91a1802c,0x91a18034);
    }
    FUN_9800ec08(0x91a18038,0x91a1803c);
  }
  FUN_9800edec();
  if ((int)uVar7 == 0) {
    FUN_980180c8(0,extraout_r4_00);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800edec @ 9800edec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800edec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ee30 @ 9800ee30 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800ee30(void)

{
  int extraout_r4;
  int extraout_r4_00;
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800d248();
  FUN_980104f8();
  if (iRam91a194c4 != 1) {
    iVar1 = -0x6e5e0000;
    if (iRam91a194c0 == 1) {
      FUN_980180c8(0,extraout_r4);
    }
    *(undefined4 *)(iVar1 + -0x6b40) = 1;
    uRam91a194bc = (undefined1)uVar7;
    if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
      piVar3 = _DAT_91a198ec;
      piVar4 = _DAT_91a198f0;
      piVar5 = _DAT_91a198f0;
      piVar6 = _DAT_91a198ec;
      if (_DAT_91a198f0 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar2 = (code *)*piVar6;
            *piVar6 = 0;
            (*pcVar2)();
            if ((piVar5 != _DAT_91a198f0) || (piVar3 != _DAT_91a198ec)) {
              piVar3 = _DAT_91a198ec;
              piVar4 = _DAT_91a198f0;
              piVar5 = _DAT_91a198f0;
              piVar6 = _DAT_91a198ec;
            }
          }
        }
      }
      FUN_9800ec08(0x91a1802c,0x91a18034);
    }
    FUN_9800ec08(0x91a18038,0x91a1803c);
  }
  FUN_9800edec();
  if ((int)uVar7 == 0) {
    FUN_980180c8(0,extraout_r4_00);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ee40 @ 9800ee40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ee40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ee70 @ 9800ee70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ee70(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_9800d258();
  iVar5 = (int)((ulonglong)uVar11 >> 0x20);
  iVar1 = FUN_9800e890();
  if (iVar1 == 0) {
    halt_baddata();
  }
  piVar4 = *(int **)(iVar1 + 0x5c);
  piVar6 = piVar4;
  do {
    if (*piVar6 == iVar5) break;
    piVar6 = piVar6 + 3;
  } while (piVar6 < piVar4 + 0x24);
  if ((piVar4 + 0x24 <= piVar6) || (*piVar6 != iVar5)) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 == (int *)0x0) {
    halt_baddata();
  }
  pcVar2 = (code *)piVar6[2];
  if (pcVar2 == (code *)0x0) {
    halt_baddata();
  }
  if (pcVar2 == (code *)0x5) {
    piVar6[2] = 0;
    halt_baddata();
  }
  if (pcVar2 == (code *)0x1) {
    halt_baddata();
  }
  uVar8 = *(undefined4 *)(iVar1 + 0x60);
  *(int *)(iVar1 + 0x60) = (int)uVar11;
  if (piVar6[1] != 8) {
    piVar6[2] = 0;
    (*pcVar2)();
    goto LAB_9800f044;
  }
  iVar5 = 0x24;
  iVar10 = 9;
  do {
    iVar3 = iVar5 + *(int *)(iVar1 + 0x5c);
    iVar5 = iVar5 + 0xc;
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar5 = *piVar6;
  uVar9 = *(undefined4 *)(iVar1 + 100);
  if (iVar5 == -0x3fffff72) {
    uVar7 = 0x83;
LAB_9800f01c:
    *(undefined4 *)(iVar1 + 100) = uVar7;
  }
  else {
    if (iVar5 == -0x3fffff70) {
      uVar7 = 0x81;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3fffff6f) {
      uVar7 = 0x84;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3fffff6d) {
      uVar7 = 0x85;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3fffff73) {
      uVar7 = 0x82;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3fffff71) {
      uVar7 = 0x86;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3fffff6e) {
      uVar7 = 0x8a;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3ffffd4b) {
      uVar7 = 0x8d;
      goto LAB_9800f01c;
    }
    if (iVar5 == -0x3ffffd4c) {
      uVar7 = 0x8e;
      goto LAB_9800f01c;
    }
  }
  (*pcVar2)(8,*(undefined4 *)(iVar1 + 100));
  *(undefined4 *)(iVar1 + 100) = uVar9;
LAB_9800f044:
  *(undefined4 *)(iVar1 + 0x60) = uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f058 @ 9800f058 ==== */

undefined4 FUN_9800f058(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_9800ee70();
    return uVar1;
  }
  return 0;
}


/* ==== FUN_9800f078 @ 9800f078 ==== */

undefined4 FUN_9800f078(void)

{
  return 1;
}


/* ==== FUN_9800f080 @ 9800f080 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f080(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f1f0 @ 9800f1f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f1f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f268 @ 9800f268 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800f268(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int *param_5,
                 char param_6)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_9800d24c();
  puVar5 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  if (puVar5 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 0x16;
    FUN_9800d2e0();
  }
  else {
    if ((uint)uVar9 == 0) {
      puVar2 = (undefined4 *)FUN_9800fe98();
      uVar8 = 0x16;
    }
    else {
      if (((-1 - ((int)param_3 >> 0x1f)) + (uint)(param_3 == 0) & param_3) + 9 < (uint)uVar9) {
        if ((param_6 != '\0') &&
           (pcVar4 = puVar5 + (*param_5 == 0x2d), pcVar6 = pcVar4, 0 < (int)param_3)) {
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_9800d920((int)(pcVar4 + 1),(int)pcVar4,(int)pcVar6 - (int)pcVar4);
        }
        puVar7 = puVar5;
        if (*param_5 == 0x2d) {
          puVar7 = puVar5 + 1;
          *puVar5 = 0x2d;
        }
        puVar5 = puVar7;
        if (0 < (int)param_3) {
          puVar5 = puVar7 + 1;
          *puVar7 = puVar7[1];
          *puVar5 = *(undefined1 *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
        }
        puVar5 = puVar5 + param_3 + (param_6 == '\0');
        iVar3 = FUN_9800dec0();
        if (iVar3 != 0) {
          FUN_9800d3b8();
          FUN_9800d258();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_4 != 0) {
          *puVar5 = 0x45;
        }
        if (*(char *)param_5[3] != '0') {
          iVar3 = param_5[1] + -1;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
            puVar5[1] = 0x2d;
          }
          if (99 < iVar3) {
            puVar5[2] = (char)(iVar3 / 100) + puVar5[2];
            iVar3 = iVar3 % 100;
          }
          if (9 < iVar3) {
            puVar5[3] = (char)(iVar3 / 10) + puVar5[3];
            iVar3 = iVar3 % 10;
          }
          puVar5[4] = puVar5[4] + (char)iVar3;
        }
        if ((_DAT_91a19724 & 1) == 0) {
          halt_baddata();
        }
        if (puVar5[2] != '0') {
          halt_baddata();
        }
        FUN_9800d920((int)(puVar5 + 2),(int)(puVar5 + 3),3);
        halt_baddata();
      }
      puVar2 = (undefined4 *)FUN_9800fe98();
      uVar8 = 0x22;
    }
    *puVar2 = uVar8;
    FUN_9800d2e0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f5a8 @ 9800f5a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f5a8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined1 *extraout_r4;
  undefined4 uVar2;
  
  FUN_9800d250();
  if (extraout_r4 == (undefined1 *)0x0) {
    puVar1 = (undefined4 *)FUN_9800fe98();
    *puVar1 = 0x16;
    FUN_9800d2e0();
  }
  else {
    if (param_3 == 0) {
      puVar1 = (undefined4 *)FUN_9800fe98();
      uVar2 = 0x16;
    }
    else {
      *extraout_r4 = 0;
      if ((0xffffffffU - ((int)param_4 >> 0x1f) & param_4) + 0xb < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar1 = (undefined4 *)FUN_9800fe98();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    FUN_9800d2e0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f9b8 @ 9800f9b8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800f9b8(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,char param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_9800d250();
  pcVar5 = (char *)((ulonglong)uVar10 >> 0x20);
  iVar3 = param_4[1];
  if ((pcVar5 == (char *)0x0) || ((int)uVar10 == 0)) {
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 0x16;
    FUN_9800d2e0();
  }
  else {
    if ((param_5 != '\0') && (iVar3 - 1U == param_3)) {
      iVar4 = *param_4;
      pcVar5[(uint)(iVar4 == 0x2d) + (iVar3 - 1U)] = '0';
      (pcVar5 + (uint)(iVar4 == 0x2d) + (iVar3 - 1U))[1] = '\0';
    }
    pcVar7 = pcVar5;
    if (*param_4 == 0x2d) {
      pcVar7 = pcVar5 + 1;
      *pcVar5 = '-';
    }
    pcVar5 = pcVar7;
    if (param_4[1] < 1) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar9 = pcVar7 + 1;
      FUN_9800d920((int)pcVar9,(int)pcVar7,(int)pcVar5 - (int)pcVar7);
      *pcVar7 = '0';
    }
    else {
      pcVar9 = pcVar7 + param_4[1];
    }
    pcVar5 = pcVar9;
    if (0 < (int)param_3) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      puVar8 = (uint *)(pcVar9 + 1);
      FUN_9800d920((int)puVar8,(int)pcVar9,(int)pcVar5 - (int)pcVar9);
      *pcVar9 = *(char *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
      iVar3 = param_4[1];
      if (iVar3 < 0) {
        if (param_5 == '\0') {
          if (-iVar3 <= (int)param_3) {
            param_3 = -iVar3;
          }
        }
        else {
          param_3 = -iVar3;
        }
        puVar6 = puVar8;
        if (param_3 != 0) {
          do {
            cVar1 = *(char *)puVar6;
            puVar6 = (uint *)((int)puVar6 + 1);
          } while (cVar1 != '\0');
          FUN_9800d920((int)puVar8 + param_3,(int)puVar8,(int)puVar6 - (int)puVar8);
        }
        FUN_9800d9e0(puVar8,0x30,param_3);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800fe18 @ 9800fe18 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800fe18(void)

{
  _DAT_91a198e8 = 0;
  return;
}


/* ==== FUN_9800fe28 @ 9800fe28 ==== */

undefined4 FUN_9800fe28(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (uint *)&DAT_91a183c0;
  do {
    if (param_1 == *puVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x6e5e7c3c);
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    return 0xd;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    return 8;
  }
  return 0x16;
}


/* ==== FUN_9800fe98 @ 9800fe98 ==== */

int FUN_9800fe98(void)

{
  int iVar1;
  
  iVar1 = FUN_9800e890();
  if (iVar1 == 0) {
    iVar1 = -0x6e5e7ad8;
  }
  else {
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}


/* ==== FUN_9800fed0 @ 9800fed0 ==== */

int FUN_9800fed0(void)

{
  int iVar1;
  
  iVar1 = FUN_9800e890();
  if (iVar1 == 0) {
    iVar1 = -0x6e5e7ad4;
  }
  else {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}


/* ==== FUN_9800ff08 @ 9800ff08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ff08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ff78 @ 9800ff78 ==== */

undefined4 FUN_9800ff78(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)&DAT_91a01ed0;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x6e5fe12c);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x16);
  return 0;
}


/* ==== FUN_9800ffc0 @ 9800ffc0 ==== */

void FUN_9800ffc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_9800ff78(param_1);
  if (iVar1 != 0) {
    func_0x98017af8();
  }
  return;
}


/* ==== FUN_9800fff0 @ 9800fff0 ==== */

void FUN_9800fff0(void)

{
  int iVar1;
  
  iVar1 = FUN_9800ff78(0xfc);
  if (iVar1 != 0) {
    func_0x98017af8();
  }
  iVar1 = FUN_9800ff78(0xff);
  if (iVar1 != 0) {
    func_0x98017af8();
  }
  return;
}


/* ==== FUN_98010038 @ 98010038 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_98010038(int param_1,ushort param_2)

{
  if ((-2 < param_1) && (param_1 < 0x100)) {
    return *(ushort *)(*(int *)(_DAT_91a18778 + 200) + param_1 * 2) & param_2;
  }
  return 0;
}


/* ==== FUN_98010078 @ 98010078 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010078(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010120 @ 98010120 ==== */

void FUN_98010120(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_98010148 @ 98010148 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010148(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980101a0 @ 980101a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980101a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010208 @ 98010208 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010208(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010278 @ 98010278 ==== */

void FUN_98010278(void)

{
  FUN_98018118();
  return;
}


/* ==== FUN_98010298 @ 98010298 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010298(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010330 @ 98010330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010330(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_9800d258();
  piVar4 = (int *)0x91a18780;
  iVar2 = -0x6e5e6b28;
  iVar3 = 0;
  do {
    if (piVar4[1] == 1) {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 0x1c;
      iVar1 = FUN_98010298();
      if (iVar1 == 0) {
        *(undefined4 *)(iVar3 * 8 + -0x6e5e7880) = 0;
        halt_baddata();
      }
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < -0x6e5e7760);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980103b8 @ 980103b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980103b8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r4;
  
  iVar1 = FUN_9800d258();
  iVar2 = func_0x980179a8();
  if (iVar2 == 0) {
    FUN_9800fff0();
    FUN_9800ffc0(0x1e);
    FUN_9800ebb0(0xff,extraout_r4);
  }
  iVar1 = iVar1 * 8;
  if (*(int *)(iVar1 + -0x6e5e7880) == 0) {
    iVar2 = FUN_9800dae0();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_9800fe98();
      *puVar3 = 0xc;
    }
    else {
      FUN_980104f8();
      if (*(int *)(iVar1 + -0x6e5e7880) == 0) {
        iVar4 = FUN_98010298();
        if (iVar4 == 0) {
          FUN_9800da80();
          puVar3 = (undefined4 *)FUN_9800fe98();
          *puVar3 = 0xc;
        }
        else {
          *(int *)(iVar1 + -0x6e5e7880) = iVar2;
        }
      }
      else {
        FUN_9800da80();
      }
      FUN_980104c8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980104c8 @ 980104c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980104c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980104f8 @ 980104f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980104f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010558 @ 98010558 ==== */

ushort FUN_98010558(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam91a18768) & 4;
}


/* ==== FUN_980106e0 @ 980106e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980106e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010750 @ 98010750 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010750(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980107a0 @ 980107a0 ==== */

void FUN_980107a0(uint param_1)

{
  ushort uVar1;
  uint unaff_r23;
  ushort *unaff_r30;
  int unaff_r31;
  byte in_cr0;
  
  if ((0x91a189b7 < param_1) && (param_1 < 0x91a18c19)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_98018118();
    return;
  }
  if (!(bool)(in_cr0 >> 1 & 1)) {
    FUN_98018138();
    return;
  }
  uVar1 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
  if ((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = (uint)uVar1 << 0x12 | unaff_r23;
  }
  FUN_980181c4();
  return;
}


/* ==== FUN_980107e0 @ 980107e0 ==== */

void FUN_980107e0(int param_1,int param_2)

{
  ushort uVar1;
  uint unaff_r23;
  ushort *unaff_r30;
  int unaff_r31;
  byte in_cr0;
  
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_98018118();
    return;
  }
  if (!(bool)(in_cr0 >> 1 & 1)) {
    FUN_98018138();
    return;
  }
  uVar1 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
  if ((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = (uint)uVar1 << 0x12 | unaff_r23;
  }
  FUN_980181c4();
  return;
}


/* ==== FUN_98010838 @ 98010838 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_98010838(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((((int)param_1 < 0) || (_DAT_91a197c4 <= param_1)) ||
      (piVar4 = (int *)(*(int *)(&DAT_91a197e0 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48)
      , (*(byte *)(piVar4 + 1) & 1) == 0)) || (*piVar4 == -1)) {
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
    piVar4 = (int *)FUN_9800fed0();
    iVar3 = 0;
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = -1;
    uVar1 = 0;
  }
  *piVar4 = iVar3;
  return uVar1;
}


/* ==== FUN_980108d0 @ 980108d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_980108d0(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_9800fed0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800fe98();
    uVar2 = 0xffffffff;
    *puVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (_DAT_91a197c4 <= param_1)) ||
          (puVar1 = (undefined4 *)
                    (*(int *)(&DAT_91a197e0 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48),
          (*(byte *)(puVar1 + 1) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_9800fed0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800fe98();
    *puVar1 = 9;
    FUN_9800d2e0();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* ==== FUN_98010990 @ 98010990 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010990(void)

{
  int iVar1;
  uint uStack00000014;
  
  uStack00000014 = FUN_9800d25c();
  iVar1 = *(int *)(&DAT_91a197e0 + ((int)uStack00000014 >> 5) * 4) + (uStack00000014 & 0x1f) * 0x48;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_980104f8();
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_98010298();
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_98010a58();
  }
  FUN_98018138();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010a58 @ 98010a58 ==== */

undefined4 FUN_98010a58(void)

{
  int unaff_r31;
  
  FUN_98010278();
  return *(undefined4 *)(unaff_r31 + 0x94);
}


/* ==== FUN_98010a90 @ 98010a90 ==== */

void FUN_98010a90(void)

{
  ushort uVar1;
  uint unaff_r23;
  ushort *unaff_r30;
  int unaff_r31;
  byte in_cr0;
  
  if (!(bool)(in_cr0 >> 1 & 1)) {
    FUN_98018138();
    return;
  }
  uVar1 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
  if ((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = (uint)uVar1 << 0x12 | unaff_r23;
  }
  FUN_980181c4();
  return;
}


/* ==== FUN_98010ab8 @ 98010ab8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_98010ab8(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar1 = FUN_980101a0();
  if (uVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    _DAT_91a197c4 = 0x20;
    _DAT_91a197e0 = uVar1;
    if (uVar1 < uVar1 + 0x900) {
      puVar5 = (undefined1 *)(uVar1 + 5);
      do {
        puVar5[-1] = 0;
        *puVar5 = 10;
        *(undefined4 *)(puVar5 + -5) = 0xffffffff;
        *(undefined4 *)(puVar5 + 3) = 0;
        puVar5[0x23] = 0;
        puVar5[0x24] = 10;
        puVar5[0x25] = 10;
        *(undefined4 *)(puVar5 + 0x3b) = 0;
        puVar5[0x37] = 0;
        puVar3 = puVar5 + 0x43;
        puVar5 = puVar5 + 0x48;
      } while (puVar3 < (undefined1 *)(_DAT_91a197e0 + 0x900));
    }
    iVar7 = 3;
    do {
      puVar6 = (undefined4 *)(iVar4 + _DAT_91a197e0);
      iVar4 = iVar4 + 0x48;
      *(undefined1 *)(puVar6 + 1) = 0xc1;
      *puVar6 = 0xfffffffe;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_98010c18 @ 98010c18 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98010c18(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = FUN_9800d25c();
  iVar2 = FUN_980108d0(uVar1);
  if (iVar2 != -1) {
    if (((uVar1 == 1) && ((*(byte *)(_DAT_91a197e0 + 0x94) & 1) != 0)) ||
       ((uVar1 == 2 && ((*(byte *)(_DAT_91a197e0 + 0x4c) & 1) != 0)))) {
      iVar2 = FUN_980108d0(2);
      iVar3 = FUN_980108d0(1);
      if (iVar3 == iVar2) goto LAB_98010ca4;
    }
    FUN_980108d0(uVar1);
    bVar4 = FUN_98007558();
    if (!bVar4) {
      iVar2 = thunk_FUN_98007a68();
      goto LAB_98010ca8;
    }
  }
LAB_98010ca4:
  iVar2 = 0;
LAB_98010ca8:
  FUN_98010838(uVar1);
  *(undefined1 *)(*(int *)(&DAT_91a197e0 + ((int)uVar1 >> 5) * 4) + (uVar1 & 0x1f) * 0x48 + 4) = 0;
  if (iVar2 != 0) {
    FUN_9800ff08();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010d00 @ 98010d00 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98010d00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uStack00000014;
  
  uStack00000014 = FUN_9800d254();
  if (uStack00000014 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_9800fed0();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < _DAT_91a197c4)) {
      iVar1 = ((int)uStack00000014 >> 5) * 4;
      iVar3 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar3 + 4) & 1) != 0) {
        FUN_98010990();
        if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar3 + 4) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_9800fe98();
          *puVar2 = 9;
        }
        else {
          FUN_98010c18();
        }
        FUN_98010e28();
        halt_baddata();
      }
    }
    puVar2 = (undefined4 *)FUN_9800fed0();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
    FUN_9800d2e0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010e28 @ 98010e28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010e28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010e60 @ 98010e60 ==== */

undefined4 FUN_98010e60(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_9800fe98();
    *puVar1 = 0x16;
    FUN_9800d2e0();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_98010ea0 @ 98010ea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010ea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010f08 @ 98010f08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010f08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010fd0 @ 98010fd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010fd0(void)

{
  FUN_9800d23c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011218 @ 98011218 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98011218(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uStack00000014;
  
  uStack00000014 = FUN_9800d24c();
  if (uStack00000014 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_9800fed0();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < _DAT_91a197c4)) {
      iVar1 = ((int)uStack00000014 >> 5) * 4;
      iVar3 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar3 + 4) & 1) != 0) {
        FUN_98010990();
        if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar3 + 4) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_9800fe98();
          *puVar2 = 9;
          puVar2 = (undefined4 *)FUN_9800fed0();
          *puVar2 = 0;
        }
        else {
          FUN_98010fd0();
        }
        FUN_9801135c();
        halt_baddata();
      }
    }
    puVar2 = (undefined4 *)FUN_9800fed0();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
    FUN_9800d2e0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801135c @ 9801135c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801135c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980113a0 @ 980113a0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_980113a0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = FUN_9800d254();
  if (uVar1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
    halt_baddata();
  }
  if (((int)uVar1 < 0) || (_DAT_91a197c4 <= uVar1)) {
LAB_980113f0:
    puVar2 = (undefined4 *)FUN_9800fe98();
    *puVar2 = 9;
    FUN_9800d2e0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = ((int)uVar1 >> 5) * 4;
  iVar5 = (uVar1 & 0x1f) * 0x48;
  if ((*(byte *)(iVar5 + *(int *)(&DAT_91a197e0 + iVar3) + 4) & 1) == 0) goto LAB_980113f0;
  FUN_98010990();
  if ((*(byte *)(iVar5 + *(int *)(&DAT_91a197e0 + iVar3) + 4) & 1) != 0) {
    FUN_980108d0(uVar1);
    iVar3 = func_0x98017e00();
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_98007a68();
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_980114a0;
    piVar4 = (int *)FUN_9800fed0();
    *piVar4 = iVar3;
  }
  puVar2 = (undefined4 *)FUN_9800fe98();
  *puVar2 = 9;
LAB_980114a0:
  FUN_980114d8();
  halt_baddata();
}


/* ==== FUN_980114d8 @ 980114d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980114d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011580 @ 98011580 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98011580(void)

{
  _DAT_91a1971c = 0x91a10728;
  return;
}


/* ==== FUN_98011598 @ 98011598 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98011598(undefined4 param_1)

{
  _DAT_91a19720 = param_1;
  return;
}


/* ==== FUN_980115b0 @ 980115b0 ==== */

byte * FUN_980115b0(byte *param_1,uint param_2)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = (uint)*param_1;
  bVar1 = uVar3 == param_2;
  if (param_2 == 0) {
    while (!bVar1) {
      param_1 = param_1 + 1;
      bVar1 = *param_1 == 0;
    }
  }
  else {
    pbVar2 = (byte *)0x0;
    pbVar4 = param_1;
    while( true ) {
      param_1 = pbVar2;
      if (bVar1) {
        do {
          param_1 = pbVar4;
          pbVar4 = param_1 + 1;
          uVar3 = (uint)*pbVar4;
        } while (param_2 == uVar3);
      }
      if (uVar3 == 0) break;
      pbVar4 = pbVar4 + 1;
      uVar3 = (uint)*pbVar4;
      bVar1 = param_2 == uVar3;
      pbVar2 = param_1;
    }
  }
  return param_1;
}


/* ==== FUN_98011608 @ 98011608 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011608(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980116b0 @ 980116b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980116b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011758 @ 98011758 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980118b8 @ 980118b8 ==== */

void FUN_980118b8(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar5 = 0x80000000;
  uVar2 = *param_2;
  uVar6 = *(ushort *)param_2 >> 4 & 0x7ff;
  uVar3 = param_2[1];
  uVar1 = *(ushort *)param_2 & 0x8000;
  if (uVar6 == 0) {
    if (((uVar2 & 0xfffff) == 0) && (uVar3 == 0)) {
      *param_1 = uVar1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    uVar6 = 0x3c01;
    uVar5 = 0;
  }
  else if (uVar6 == 0x7ff) {
    uVar6 = 0x7fff;
  }
  else {
    uVar6 = uVar6 + 0x3c00;
  }
  *(uint *)(param_1 + 3) = uVar3 << 0xb;
  *(uint *)(param_1 + 1) = uVar3 >> 0x15 | (uVar2 & 0xfffff) << 0xb | uVar5;
  while (uVar5 == 0) {
    uVar5 = *(uint *)(param_1 + 3);
    iVar4 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 3) = uVar5 << 1;
    *(uint *)(param_1 + 1) = uVar5 >> 0x1f | iVar4 << 1;
    uVar6 = uVar6 - 1;
    uVar5 = iVar4 << 1 & 0x80000000;
  }
  *param_1 = uVar1 | uVar6;
  return;
}


/* ==== FUN_98011998 @ 98011998 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011998(void)

{
  FUN_9800d25c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011a70 @ 98011a70 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98011a70(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800d258();
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  if ((uVar4 == 0) || (trapWord(6,uVar4,0), (uint)uVar5 <= 0xfffff000 / uVar4)) {
    uVar4 = uVar4 * (uint)uVar5;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    do {
      if (uVar4 < 0xfffff001) {
        uVar2 = func_0x980179a8(0);
        iVar3 = FUN_980164d8(uVar2,8,uVar4);
        if (iVar3 != 0) {
          halt_baddata();
        }
      }
      if (_DAT_91a194c8 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          halt_baddata();
        }
        *param_3 = 0xc;
        halt_baddata();
      }
      iVar3 = FUN_9800e1f8();
    } while (iVar3 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_9800fe98();
    *puVar1 = 0xc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011b40 @ 98011b40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011b40(void)

{
  int iVar1;
  int iVar2;
  
  FUN_9800d250();
  FUN_980104f8();
  for (iVar2 = 3; iVar2 < iRam91a198e4; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + iRam91a198e0);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
        FUN_9800e450();
      }
      if (0x13 < iVar2) {
        FUN_9800da80();
        *(undefined4 *)(iVar2 * 4 + iRam91a198e0) = 0;
      }
    }
  }
  FUN_98011c00();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011c00 @ 98011c00 ==== */

void FUN_98011c00(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_98011c28 @ 98011c28 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_98011c28(void)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  uint auStack_9c [7];
  int iStack_80;
  
  uVar18 = FUN_9800d234();
  puVar3 = (ushort *)((ulonglong)uVar18 >> 0x20);
  uVar2 = *puVar3;
  uVar9 = uVar2 & 0x7fff;
  iVar15 = uVar9 - 0x3fff;
  auStack_9c[1] = *(uint *)(puVar3 + 1);
  puVar6 = auStack_9c;
  auStack_9c[2] = *(uint *)(puVar3 + 3);
  iVar4 = 0;
  auStack_9c[3] = (uint)puVar3[5] << 0x10;
  if (iVar15 == -0x3fff) {
    iVar15 = 0;
    do {
      puVar6 = puVar6 + 1;
      if (*puVar6 != 0) {
        auStack_9c[1] = 0;
        auStack_9c[2] = 0;
        break;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 3);
  }
  else {
    uVar13 = uRam91a1900c - 1;
    iVar5 = (int)uRam91a1900c >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam91a1900c < 0 && (uRam91a1900c & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam91a1900c +
                    (iVar5 + (uint)((int)uRam91a1900c < 0 && (uRam91a1900c & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_98011d70;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_98011d70:
        iVar10 = iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
        iVar4 = 0;
        uVar7 = 1 << (0x1f - (uVar13 + (iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0)) *
                                       -0x20) & 0x3f);
        uVar8 = auStack_9c[iVar10 + 1] + uVar7;
        if ((uVar8 < auStack_9c[iVar10 + 1]) || (uVar8 < uVar7)) {
          iVar4 = 1;
        }
        iVar11 = iVar10 + -1;
        auStack_9c[iVar10 + 1] = uVar8;
        if (-1 < iVar11) {
          puVar6 = auStack_9c + iVar10 + 1;
          do {
            bVar1 = iVar4 == 0;
            iVar4 = 0;
            if (bVar1) break;
            iVar4 = 0;
            uVar7 = puVar6[-1] + 1;
            if ((uVar7 < puVar6[-1]) || (uVar7 == 0)) {
              iVar4 = 1;
            }
            iVar11 = iVar11 + -1;
            puVar6 = puVar6 + -1;
            *puVar6 = uVar7;
          } while (-1 < iVar11);
        }
      }
    }
    iVar10 = iVar16 + 1;
    auStack_9c[iVar16 + 1] = -1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1];
    if (iVar10 < 3) {
      puVar6 = auStack_9c + iVar10;
      for (iVar10 = 3 - iVar10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      }
    }
    iVar16 = iVar15;
    if (iVar4 != 0) {
      iVar16 = uVar9 - 0x3ffe;
    }
    if (iVar16 < (int)(iRam91a19008 - uRam91a1900c)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam91a19008 < iVar16) {
        iVar15 = (int)uRam91a19010 >> 5;
        if (iVar16 < iRam91a19004) {
          iVar5 = iVar15 + (uint)((int)uRam91a19010 < 0 && (uRam91a19010 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam91a19018 + iVar16;
          uVar13 = uRam91a19010 +
                   (iVar15 + (uint)((int)uRam91a19010 < 0 && (uRam91a19010 & 0x1f) != 0)) * -0x20;
          uVar9 = 0;
          puVar6 = auStack_9c;
          do {
            uVar14 = puVar6[1];
            puVar6 = puVar6 + 1;
            *puVar6 = uVar14 >> (uVar13 & 0x3f) | uVar9;
            uVar9 = (uVar14 & ~(-1 << (uVar13 & 0x3f))) << (0x20 - uVar13 & 0x3f);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar15 = 2;
          puVar12 = auStack_9c + 3;
          puVar6 = auStack_9c + (3 - iVar5);
          iVar17 = 3;
          do {
            if (iVar15 < iVar5) {
              *puVar12 = 0;
            }
            else {
              *puVar12 = *puVar6;
            }
            iVar15 = iVar15 + -1;
            puVar6 = puVar6 + -1;
            puVar12 = puVar12 + -1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        else {
          iVar4 = iVar15 + (uint)((int)uRam91a19010 < 0 && (uRam91a19010 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam91a19010 +
                   (iVar15 + (uint)((int)uRam91a19010 < 0 && (uRam91a19010 & 0x1f) != 0)) * -0x20;
          puVar6 = auStack_9c;
          uVar9 = 0;
          auStack_9c[1] = 0x80000000;
          do {
            uVar14 = puVar6[1];
            puVar6 = puVar6 + 1;
            *puVar6 = uVar14 >> (uVar13 & 0x3f) | uVar9;
            uVar9 = (uVar14 & ~(-1 << (uVar13 & 0x3f))) << (0x20 - uVar13 & 0x3f);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar15 = 2;
          puVar12 = auStack_9c + 3;
          puVar6 = auStack_9c + (3 - iVar4);
          iVar5 = 3;
          do {
            if (iVar15 < iVar4) {
              *puVar12 = 0;
            }
            else {
              *puVar12 = *puVar6;
            }
            iVar15 = iVar15 + -1;
            puVar6 = puVar6 + -1;
            puVar12 = puVar12 + -1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar4 = iRam91a19018 + iRam91a19004;
        }
      }
      else {
        uVar14 = iRam91a19008 - iVar15;
        iVar4 = ((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0);
        uVar14 = uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) *
                          -0x20;
        auStack_9c[1] = auStack_9c[5];
        auStack_9c[2] = auStack_9c[6];
        uVar9 = 0;
        auStack_9c[3] = iStack_80;
        puVar6 = auStack_9c;
        do {
          uVar7 = puVar6[1];
          puVar6 = puVar6 + 1;
          *puVar6 = uVar7 >> (uVar14 & 0x3f) | uVar9;
          uVar9 = (uVar7 & ~(-1 << (uVar14 & 0x3f))) << (0x20 - uVar14 & 0x3f);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar15 = 2;
        puVar12 = auStack_9c + 3;
        puVar6 = auStack_9c + (3 - iVar4);
        iVar16 = 3;
        do {
          if (iVar15 < iVar4) {
            *puVar12 = 0;
          }
          else {
            *puVar12 = *puVar6;
          }
          iVar15 = iVar15 + -1;
          puVar6 = puVar6 + -1;
          puVar12 = puVar12 + -1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        iVar4 = iVar5 + (uint)((int)uRam91a1900c < 0 && (uRam91a1900c & 0x1f) != 0);
        uVar9 = 0x1f - (uRam91a1900c +
                       (iVar5 + (uint)((int)uRam91a1900c < 0 && (uRam91a1900c & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_98011fdc;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_98011fdc:
            iVar15 = iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
            bVar1 = false;
            uVar13 = 1 << (0x1f - (uVar13 + (iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0
                                                            )) * -0x20) & 0x3f);
            uVar14 = auStack_9c[iVar15 + 1] + uVar13;
            if ((uVar14 < auStack_9c[iVar15 + 1]) || (uVar14 < uVar13)) {
              bVar1 = true;
            }
            auStack_9c[iVar15 + 1] = uVar14;
            iVar5 = iVar15 + -1;
            if (-1 < iVar5) {
              puVar6 = auStack_9c + iVar15 + 1;
              do {
                if (!bVar1) break;
                bVar1 = false;
                uVar13 = puVar6[-1] + 1;
                if ((uVar13 < puVar6[-1]) || (uVar13 == 0)) {
                  bVar1 = true;
                }
                iVar5 = iVar5 + -1;
                puVar6 = puVar6 + -1;
                *puVar6 = uVar13;
              } while (-1 < iVar5);
            }
          }
        }
        iVar15 = iVar4 + 1;
        auStack_9c[iVar4 + 1] = -1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1];
        if (iVar15 < 3) {
          puVar6 = auStack_9c + iVar15;
          for (iVar15 = 3 - iVar15; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar6 = puVar6 + 1;
            *puVar6 = 0;
          }
        }
        uVar13 = uRam91a19010 + 1;
        iVar4 = ((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
        iVar15 = 3;
        puVar6 = auStack_9c;
        uVar9 = 0;
        uVar13 = uVar13 + (((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0)) *
                          -0x20;
        do {
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 1;
          *puVar6 = uVar14 >> (uVar13 & 0x3f) | uVar9;
          uVar9 = (uVar14 & ~(-1 << (uVar13 & 0x3f))) << (0x20 - uVar13 & 0x3f);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        iVar15 = 2;
        puVar12 = auStack_9c + 3;
        puVar6 = auStack_9c + (3 - iVar4);
        iVar5 = 3;
        do {
          if (iVar15 < iVar4) {
            *puVar12 = 0;
          }
          else {
            *puVar12 = *puVar6;
          }
          iVar15 = iVar15 + -1;
          puVar6 = puVar6 + -1;
          puVar12 = puVar12 + -1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = 0;
      }
    }
  }
  uVar9 = 0x1f - uRam91a19010;
  if (iRam91a19014 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam91a19014 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012340 @ 98012340 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_98012340(void)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  uint auStack_9c [7];
  int iStack_80;
  
  uVar18 = FUN_9800d234();
  puVar3 = (ushort *)((ulonglong)uVar18 >> 0x20);
  uVar2 = *puVar3;
  uVar9 = uVar2 & 0x7fff;
  iVar15 = uVar9 - 0x3fff;
  auStack_9c[1] = *(uint *)(puVar3 + 1);
  puVar6 = auStack_9c;
  auStack_9c[2] = *(uint *)(puVar3 + 3);
  iVar4 = 0;
  auStack_9c[3] = (uint)puVar3[5] << 0x10;
  if (iVar15 == -0x3fff) {
    iVar15 = 0;
    do {
      puVar6 = puVar6 + 1;
      if (*puVar6 != 0) {
        auStack_9c[1] = 0;
        auStack_9c[2] = 0;
        break;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 3);
  }
  else {
    uVar13 = uRam91a19024 - 1;
    iVar5 = (int)uRam91a19024 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam91a19024 < 0 && (uRam91a19024 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam91a19024 +
                    (iVar5 + (uint)((int)uRam91a19024 < 0 && (uRam91a19024 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_98012488;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_98012488:
        iVar10 = iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
        iVar4 = 0;
        uVar7 = 1 << (0x1f - (uVar13 + (iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0)) *
                                       -0x20) & 0x3f);
        uVar8 = auStack_9c[iVar10 + 1] + uVar7;
        if ((uVar8 < auStack_9c[iVar10 + 1]) || (uVar8 < uVar7)) {
          iVar4 = 1;
        }
        iVar11 = iVar10 + -1;
        auStack_9c[iVar10 + 1] = uVar8;
        if (-1 < iVar11) {
          puVar6 = auStack_9c + iVar10 + 1;
          do {
            bVar1 = iVar4 == 0;
            iVar4 = 0;
            if (bVar1) break;
            iVar4 = 0;
            uVar7 = puVar6[-1] + 1;
            if ((uVar7 < puVar6[-1]) || (uVar7 == 0)) {
              iVar4 = 1;
            }
            iVar11 = iVar11 + -1;
            puVar6 = puVar6 + -1;
            *puVar6 = uVar7;
          } while (-1 < iVar11);
        }
      }
    }
    iVar10 = iVar16 + 1;
    auStack_9c[iVar16 + 1] = -1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1];
    if (iVar10 < 3) {
      puVar6 = auStack_9c + iVar10;
      for (iVar10 = 3 - iVar10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      }
    }
    iVar16 = iVar15;
    if (iVar4 != 0) {
      iVar16 = uVar9 - 0x3ffe;
    }
    if (iVar16 < (int)(iRam91a19020 - uRam91a19024)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam91a19020 < iVar16) {
        iVar15 = (int)uRam91a19028 >> 5;
        if (iVar16 < iRam91a1901c) {
          iVar5 = iVar15 + (uint)((int)uRam91a19028 < 0 && (uRam91a19028 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam91a19030 + iVar16;
          uVar13 = uRam91a19028 +
                   (iVar15 + (uint)((int)uRam91a19028 < 0 && (uRam91a19028 & 0x1f) != 0)) * -0x20;
          uVar9 = 0;
          puVar6 = auStack_9c;
          do {
            uVar14 = puVar6[1];
            puVar6 = puVar6 + 1;
            *puVar6 = uVar14 >> (uVar13 & 0x3f) | uVar9;
            uVar9 = (uVar14 & ~(-1 << (uVar13 & 0x3f))) << (0x20 - uVar13 & 0x3f);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar15 = 2;
          puVar12 = auStack_9c + 3;
          puVar6 = auStack_9c + (3 - iVar5);
          iVar17 = 3;
          do {
            if (iVar15 < iVar5) {
              *puVar12 = 0;
            }
            else {
              *puVar12 = *puVar6;
            }
            iVar15 = iVar15 + -1;
            puVar6 = puVar6 + -1;
            puVar12 = puVar12 + -1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        else {
          iVar4 = iVar15 + (uint)((int)uRam91a19028 < 0 && (uRam91a19028 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam91a19028 +
                   (iVar15 + (uint)((int)uRam91a19028 < 0 && (uRam91a19028 & 0x1f) != 0)) * -0x20;
          puVar6 = auStack_9c;
          uVar9 = 0;
          auStack_9c[1] = 0x80000000;
          do {
            uVar14 = puVar6[1];
            puVar6 = puVar6 + 1;
            *puVar6 = uVar14 >> (uVar13 & 0x3f) | uVar9;
            uVar9 = (uVar14 & ~(-1 << (uVar13 & 0x3f))) << (0x20 - uVar13 & 0x3f);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar15 = 2;
          puVar12 = auStack_9c + 3;
          puVar6 = auStack_9c + (3 - iVar4);
          iVar5 = 3;
          do {
            if (iVar15 < iVar4) {
              *puVar12 = 0;
            }
            else {
              *puVar12 = *puVar6;
            }
            iVar15 = iVar15 + -1;
            puVar6 = puVar6 + -1;
            puVar12 = puVar12 + -1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar4 = iRam91a19030 + iRam91a1901c;
        }
      }
      else {
        uVar14 = iRam91a19020 - iVar15;
        iVar4 = ((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0);
        uVar14 = uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) *
                          -0x20;
        auStack_9c[1] = auStack_9c[5];
        auStack_9c[2] = auStack_9c[6];
        uVar9 = 0;
        auStack_9c[3] = iStack_80;
        puVar6 = auStack_9c;
        do {
          uVar7 = puVar6[1];
          puVar6 = puVar6 + 1;
          *puVar6 = uVar7 >> (uVar14 & 0x3f) | uVar9;
          uVar9 = (uVar7 & ~(-1 << (uVar14 & 0x3f))) << (0x20 - uVar14 & 0x3f);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar15 = 2;
        puVar12 = auStack_9c + 3;
        puVar6 = auStack_9c + (3 - iVar4);
        iVar16 = 3;
        do {
          if (iVar15 < iVar4) {
            *puVar12 = 0;
          }
          else {
            *puVar12 = *puVar6;
          }
          iVar15 = iVar15 + -1;
          puVar6 = puVar6 + -1;
          puVar12 = puVar12 + -1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        iVar4 = iVar5 + (uint)((int)uRam91a19024 < 0 && (uRam91a19024 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam91a19024 +
                       (iVar5 + (uint)((int)uRam91a19024 < 0 && (uRam91a19024 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_980126f4;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_980126f4:
            iVar15 = iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
            bVar1 = false;
            uVar13 = 1 << (0x1f - (uVar13 + (iVar17 + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0
                                                            )) * -0x20) & 0x3f);
            uVar14 = auStack_9c[iVar15 + 1] + uVar13;
            if ((uVar14 < auStack_9c[iVar15 + 1]) || (uVar14 < uVar13)) {
              bVar1 = true;
            }
            auStack_9c[iVar15 + 1] = uVar14;
            iVar5 = iVar15 + -1;
            if (-1 < iVar5) {
              puVar6 = auStack_9c + iVar15 + 1;
              do {
                if (!bVar1) break;
                bVar1 = false;
                uVar13 = puVar6[-1] + 1;
                if ((uVar13 < puVar6[-1]) || (uVar13 == 0)) {
                  bVar1 = true;
                }
                iVar5 = iVar5 + -1;
                puVar6 = puVar6 + -1;
                *puVar6 = uVar13;
              } while (-1 < iVar5);
            }
          }
        }
        iVar15 = iVar4 + 1;
        auStack_9c[iVar4 + 1] = -1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1];
        if (iVar15 < 3) {
          puVar6 = auStack_9c + iVar15;
          for (iVar15 = 3 - iVar15; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar6 = puVar6 + 1;
            *puVar6 = 0;
          }
        }
        uVar13 = uRam91a19028 + 1;
        iVar4 = ((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
        iVar15 = 3;
        puVar6 = auStack_9c;
        uVar9 = 0;
        uVar13 = uVar13 + (((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0)) *
                          -0x20;
        do {
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 1;
          *puVar6 = uVar14 >> (uVar13 & 0x3f) | uVar9;
          uVar9 = (uVar14 & ~(-1 << (uVar13 & 0x3f))) << (0x20 - uVar13 & 0x3f);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        iVar15 = 2;
        puVar12 = auStack_9c + 3;
        puVar6 = auStack_9c + (3 - iVar4);
        iVar5 = 3;
        do {
          if (iVar15 < iVar4) {
            *puVar12 = 0;
          }
          else {
            *puVar12 = *puVar6;
          }
          iVar15 = iVar15 + -1;
          puVar6 = puVar6 + -1;
          puVar12 = puVar12 + -1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = 0;
      }
    }
  }
  uVar9 = 0x1f - uRam91a19028;
  if (iRam91a1902c == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam91a1902c != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012a58 @ 98012a58 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x98012c88) */
/* WARNING: Removing unreachable block (ram,0x98012c98) */
/* WARNING: Removing unreachable block (ram,0x98012ca0) */
/* WARNING: Removing unreachable block (ram,0x98012c74) */
/* WARNING: Removing unreachable block (ram,0x9801334c) */
/* WARNING: Removing unreachable block (ram,0x98012e90) */
/* WARNING: Removing unreachable block (ram,0x98012c80) */
/* WARNING: Removing unreachable block (ram,0x98012cac) */
/* WARNING: Removing unreachable block (ram,0x98013338) */
/* WARNING: Removing unreachable block (ram,0x98012cb4) */
/* WARNING: Removing unreachable block (ram,0x98012f18) */
/* WARNING: Removing unreachable block (ram,0x98012f0c) */
/* WARNING: Removing unreachable block (ram,0x98012f20) */
/* WARNING: Removing unreachable block (ram,0x98012f38) */
/* WARNING: Removing unreachable block (ram,0x98012f3c) */
/* WARNING: Removing unreachable block (ram,0x98012f48) */
/* WARNING: Removing unreachable block (ram,0x98012f4c) */
/* WARNING: Removing unreachable block (ram,0x98012f54) */
/* WARNING: Removing unreachable block (ram,0x98012f58) */
/* WARNING: Removing unreachable block (ram,0x98013364) */
/* WARNING: Removing unreachable block (ram,0x98012f60) */
/* WARNING: Removing unreachable block (ram,0x9801337c) */
/* WARNING: Removing unreachable block (ram,0x98012f68) */
/* WARNING: Removing unreachable block (ram,0x98012f80) */
/* WARNING: Removing unreachable block (ram,0x98012f84) */
/* WARNING: Removing unreachable block (ram,0x98012f94) */
/* WARNING: Removing unreachable block (ram,0x98012fb0) */
/* WARNING: Removing unreachable block (ram,0x98012fc4) */
/* WARNING: Removing unreachable block (ram,0x98012fd4) */
/* WARNING: Removing unreachable block (ram,0x98012fe8) */
/* WARNING: Removing unreachable block (ram,0x98013004) */
/* WARNING: Removing unreachable block (ram,0x98013044) */
/* WARNING: Removing unreachable block (ram,0x9801304c) */
/* WARNING: Removing unreachable block (ram,0x98013058) */
/* WARNING: Removing unreachable block (ram,0x98013068) */
/* WARNING: Removing unreachable block (ram,0x98013070) */
/* WARNING: Removing unreachable block (ram,0x98013084) */
/* WARNING: Removing unreachable block (ram,0x98013090) */
/* WARNING: Removing unreachable block (ram,0x9801309c) */
/* WARNING: Removing unreachable block (ram,0x980130a4) */
/* WARNING: Removing unreachable block (ram,0x980130ac) */
/* WARNING: Removing unreachable block (ram,0x980130c4) */
/* WARNING: Removing unreachable block (ram,0x980130d0) */
/* WARNING: Removing unreachable block (ram,0x980130dc) */
/* WARNING: Removing unreachable block (ram,0x980130e8) */
/* WARNING: Removing unreachable block (ram,0x980130f4) */
/* WARNING: Removing unreachable block (ram,0x98013104) */
/* WARNING: Removing unreachable block (ram,0x98013124) */
/* WARNING: Removing unreachable block (ram,0x9801312c) */
/* WARNING: Removing unreachable block (ram,0x98013130) */
/* WARNING: Removing unreachable block (ram,0x9801313c) */
/* WARNING: Removing unreachable block (ram,0x98013148) */
/* WARNING: Removing unreachable block (ram,0x98013154) */
/* WARNING: Removing unreachable block (ram,0x98013164) */
/* WARNING: Removing unreachable block (ram,0x98013174) */
/* WARNING: Removing unreachable block (ram,0x98013180) */
/* WARNING: Removing unreachable block (ram,0x980131c4) */
/* WARNING: Removing unreachable block (ram,0x980131cc) */
/* WARNING: Removing unreachable block (ram,0x980131e0) */
/* WARNING: Removing unreachable block (ram,0x980131e8) */
/* WARNING: Removing unreachable block (ram,0x980131f4) */
/* WARNING: Removing unreachable block (ram,0x980131f8) */
/* WARNING: Removing unreachable block (ram,0x9801322c) */
/* WARNING: Removing unreachable block (ram,0x9801323c) */
/* WARNING: Removing unreachable block (ram,0x9801324c) */
/* WARNING: Removing unreachable block (ram,0x98013258) */
/* WARNING: Removing unreachable block (ram,0x9801326c) */
/* WARNING: Removing unreachable block (ram,0x980132c4) */
/* WARNING: Removing unreachable block (ram,0x98013278) */
/* WARNING: Removing unreachable block (ram,0x980132b8) */
/* WARNING: Removing unreachable block (ram,0x98013288) */
/* WARNING: Removing unreachable block (ram,0x980132ac) */
/* WARNING: Removing unreachable block (ram,0x98013298) */
/* WARNING: Removing unreachable block (ram,0x980132cc) */
/* WARNING: Removing unreachable block (ram,0x980132d8) */
/* WARNING: Removing unreachable block (ram,0x98013304) */
/* WARNING: Removing unreachable block (ram,0x98013310) */
/* WARNING: Removing unreachable block (ram,0x9801318c) */
/* WARNING: Removing unreachable block (ram,0x98013060) */
/* WARNING: Removing unreachable block (ram,0x98013314) */
/* WARNING: Removing unreachable block (ram,0x9801331c) */
/* WARNING: Removing unreachable block (ram,0x98013324) */
/* WARNING: Removing unreachable block (ram,0x98013390) */

void FUN_98012a58(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r10;
  
  FUN_9800d234();
  if (in_r10 != 0) {
    for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x98012b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)bRam91a03378 * 4 + -0x6e5ee2cc))();
    return;
  }
  puVar2 = (undefined4 *)FUN_9800fe98();
  *puVar2 = 0x16;
  FUN_9800d2e0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980133b8 @ 980133b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980133b8(void)

{
  FUN_9800d220();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013fc0 @ 98013fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013fc0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  int local_40;
  uint local_3c;
  uint local_38;
  
  uVar10 = FUN_9800d254();
  param_3[2] = 0;
  sVar7 = 0x404e;
  param_3[1] = 0;
  *param_3 = 0;
  if ((int)uVar10 != 0) {
    do {
      pcVar9 = (char *)((ulonglong)uVar10 >> 0x20);
      FUN_9800d3f0();
      uVar4 = param_3[2];
      uVar5 = param_3[1];
      bVar1 = false;
      uVar2 = uVar5 << 1 | uVar4 >> 0x1f;
      uVar3 = *param_3 << 1 | uVar5 >> 0x1f;
      param_3[1] = uVar2;
      *param_3 = uVar3;
      uVar6 = uVar4 * 4;
      uVar3 = uVar3 << 1 | (uVar5 & 0x7fffffff) >> 0x1e;
      uVar5 = uVar2 << 1 | uVar4 >> 0x1e & 1;
      param_3[2] = uVar4 << 1;
      uVar2 = uVar6 + local_38;
      param_3[2] = uVar6;
      param_3[1] = uVar5;
      *param_3 = uVar3;
      if ((uVar2 < uVar6) || (uVar2 < local_38)) {
        bVar1 = true;
      }
      param_3[2] = uVar2;
      if (bVar1) {
        uVar6 = uVar5 + 1;
        bVar1 = false;
        if ((uVar6 < uVar5) || (uVar6 == 0)) {
          bVar1 = true;
        }
        param_3[1] = uVar6;
        if (bVar1) {
          *param_3 = uVar3 + 1;
        }
      }
      bVar1 = false;
      uVar6 = param_3[1] + local_3c;
      if ((uVar6 < param_3[1]) || (uVar6 < local_3c)) {
        bVar1 = true;
      }
      param_3[1] = uVar6;
      if (bVar1) {
        *param_3 = *param_3 + 1;
      }
      uVar3 = uVar2 * 2;
      param_3[2] = uVar3;
      uVar2 = param_3[1] << 1 | uVar2 >> 0x1f;
      uVar6 = (*param_3 + local_40) * 2 | uVar6 >> 0x1f;
      param_3[1] = uVar2;
      bVar1 = false;
      *param_3 = uVar6;
      local_38 = (uint)*pcVar9;
      uVar4 = uVar3 + local_38;
      if ((uVar4 < uVar3) || (uVar4 < local_38)) {
        bVar1 = true;
      }
      param_3[2] = uVar4;
      if (bVar1) {
        uVar3 = uVar2 + 1;
        bVar1 = false;
        if ((uVar3 < uVar2) || (uVar3 == 0)) {
          bVar1 = true;
        }
        param_3[1] = uVar3;
        if (bVar1) {
          *param_3 = uVar6 + 1;
        }
      }
      iVar8 = (int)uVar10 + -1;
      uVar10 = CONCAT44(pcVar9 + 1,iVar8);
    } while (iVar8 != 0);
    if (*param_3 != 0) goto LAB_9801423c;
  }
  do {
    uVar2 = param_3[2];
    param_3[2] = uVar2 << 0x10;
    uVar6 = param_3[1] >> 0x10;
    *param_3 = uVar6;
    sVar7 = sVar7 + -0x10;
    param_3[1] = param_3[1] << 0x10 | uVar2 >> 0x10;
  } while (uVar6 == 0);
LAB_9801423c:
  while ((*param_3 & 0x8000) == 0) {
    uVar6 = param_3[2];
    uVar2 = param_3[1];
    param_3[2] = uVar6 << 1;
    sVar7 = sVar7 + -1;
    param_3[1] = uVar2 << 1 | uVar6 >> 0x1f;
    *param_3 = *param_3 << 1 | uVar2 >> 0x1f;
  }
  *(short *)param_3 = sVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014258 @ 98014258 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014258(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014338 @ 98014338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014338(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980143b0 @ 980143b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980143b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014410 @ 98014410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980144e8 @ 980144e8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_980144e8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_91a197b8;
  _DAT_91a197b8 = param_1;
  return uVar1;
}


/* ==== FUN_98014500 @ 98014500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014500(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_98007a68 @ 98014590 ==== */

undefined4 thunk_FUN_98007a68(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_98014598 @ 98014598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014770 @ 98014770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014770(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800d258();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  piVar3 = (int *)*(int *)(iVar2 + 0x38);
  piVar1 = (int *)(iVar2 + 0x38);
  do {
    piVar6 = piVar3;
    if (piVar6 == (int *)0x0) {
LAB_98014814:
      piVar3 = (int *)FUN_98014598();
      if (piVar3 != (int *)0x0) {
        piVar3[2] = param_3;
        piVar3[1] = uVar5;
        *piVar3 = *piVar1;
        *piVar1 = (int)piVar3;
        *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
        if (*(uint *)(iVar2 + 0x1c) <= param_3) {
          *(uint *)(iVar2 + 0x1c) = param_3;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = piVar6[1];
    if (uVar5 < uVar4) {
      if (uVar5 + param_3 == uVar4) {
        piVar6[1] = uVar5;
        uVar5 = param_3 + piVar6[2];
        piVar6[2] = uVar5;
        if (uVar5 <= *(uint *)(iVar2 + 0x1c)) {
          halt_baddata();
        }
        *(uint *)(iVar2 + 0x1c) = uVar5;
        halt_baddata();
      }
      goto LAB_98014814;
    }
    if (piVar6[2] + uVar4 == uVar5) {
      param_3 = piVar6[2] + param_3;
      *piVar1 = *piVar6;
      *piVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x4c);
      *(int **)(*(int *)(iVar2 + 0x18) + 0x4c) = piVar6;
      piVar6[1] = 0;
      piVar6[2] = 0;
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -1;
      piVar6 = piVar1;
      uVar5 = uVar4;
      if (*(uint *)(iVar2 + 0x1c) < param_3) {
        *(uint *)(iVar2 + 0x1c) = param_3;
      }
    }
    piVar3 = (int *)*piVar6;
    piVar1 = piVar6;
  } while( true );
}


/* ==== FUN_98014890 @ 98014890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014890(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  code *pcVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ushort *local_50 [20];
  
  uVar13 = FUN_9800d24c();
  iVar2 = (int)((ulonglong)uVar13 >> 0x20);
  iVar3 = (int)uVar13;
  if (*(undefined4 **)(iVar3 + 0x38) == (undefined4 *)0x0) {
    halt_baddata();
  }
  puVar9 = (undefined4 *)(iVar3 + 0x38);
  puVar10 = (undefined4 *)0x0;
  puVar11 = *(undefined4 **)(iVar3 + 0x38);
  while (((uint)puVar11[2] < *param_3 || ((param_4 != 0 && (puVar11[1] != param_4))))) {
    puVar12 = (undefined4 *)*puVar11;
    puVar9 = puVar11;
    puVar10 = puVar11;
    puVar11 = puVar12;
    if (puVar12 == (undefined4 *)0x0) {
      halt_baddata();
    }
  }
  local_50[0] = (ushort *)puVar11[1];
  pcVar6 = *(code **)(iVar2 + 0x584);
  if (pcVar6 == (code *)0x0) {
    iVar2 = FUN_98018168();
  }
  else {
    iVar2 = (*pcVar6)(iVar2,local_50,param_3);
  }
  if (iVar2 < 0) {
    halt_baddata();
  }
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*(ushort *)param_3;
  if (*(int *)(iVar3 + 0x1c) == puVar11[2]) {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
  }
  puVar7 = *(ushort **)(iVar3 + 0x40);
  if (((*(byte *)((int)puVar7 + 5) & 0x10) == 0) ||
     (puVar7 + (uint)*puVar7 * 8 != (ushort *)puVar11[1])) {
    if (puVar10 == (undefined4 *)0x0) {
      puVar7 = *(ushort **)(iVar3 + 0x28);
    }
    else {
      puVar7 = (ushort *)(puVar10[2] + puVar10[1]);
    }
    if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
      puVar8 = puVar7;
      do {
        puVar7 = puVar8 + (uint)*puVar8 * 8;
        if ((*(ushort **)(iVar3 + 0x2c) <= puVar7) || (*puVar7 == 0)) {
          bVar1 = puVar7 != local_50[0];
          puVar7 = puVar8;
          if (bVar1) {
            halt_baddata();
          }
          break;
        }
        puVar8 = puVar7;
      } while ((*(byte *)((int)puVar7 + 5) & 0x10) == 0);
    }
  }
  *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) & 0xef;
  iVar2 = puVar11[2];
  puVar11[1] = puVar11[1] + *param_3;
  uVar4 = *param_3;
  puVar11[2] = iVar2 - uVar4;
  if (iVar2 - uVar4 == 0) {
    if (puVar11[1] == *(int *)(iVar3 + 0x2c)) {
      *(undefined1 *)((int)local_50[0] + 5) = 0x10;
      *(ushort **)(iVar3 + 0x40) = local_50[0];
    }
    else {
      *(undefined1 *)((int)local_50[0] + 5) = 0;
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x28);
    }
    *puVar9 = *puVar11;
    *puVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x4c);
    *(undefined4 **)(*(int *)(iVar3 + 0x18) + 0x4c) = puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + -1;
  }
  else {
    *(undefined1 *)((int)local_50[0] + 5) = 0x10;
    *(ushort **)(iVar3 + 0x40) = local_50[0];
  }
  *(undefined1 *)(local_50[0] + 2) = *(undefined1 *)(puVar7 + 2);
  uVar4 = *param_3;
  uVar5 = (ushort)(uVar4 >> 4);
  *local_50[0] = uVar5;
  local_50[0][1] = *puVar7;
  if ((*(byte *)((int)local_50[0] + 5) & 0x10) == 0) {
    local_50[0][(uVar4 >> 4 & 0xffff) * 8 + 1] = uVar5;
  }
  if (*(int *)(iVar3 + 0x1c) == 0) {
    for (puVar9 = *(undefined4 **)(iVar3 + 0x38); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)*puVar9) {
      if (*(uint *)(iVar3 + 0x1c) <= (uint)puVar9[2]) {
        *(undefined4 *)(iVar3 + 0x1c) = puVar9[2];
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014b20 @ 98014b20 ==== */

undefined4 FUN_98014b20(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = FUN_98018198();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_98014b78 @ 98014b78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014b78(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_9800d24c();
  iVar4 = (int)((ulonglong)uVar9 >> 0x20);
  puVar7 = (ushort *)uVar9;
  puVar8 = puVar7 + (uint)puVar7[1] * -8;
  if (((puVar8 != puVar7) && ((*(byte *)((int)puVar8 + 5) & 1) == 0)) &&
     ((uint)*puVar8 + *param_3 < 0xf001)) {
    if (param_4 != 0) {
      puVar6 = *(undefined4 **)(puVar7 + 6);
      puVar5 = *(undefined4 **)(puVar7 + 4);
      if (((ushort *)*puVar6 == (ushort *)puVar5[1]) && ((ushort *)*puVar6 == puVar7 + 4)) {
        *puVar6 = puVar5;
        puVar5[1] = puVar6;
        if ((puVar5 == puVar6) && (uVar2 = *puVar7, uVar2 < 0x80)) {
          iVar3 = ((uVar2 >> 5) + 0x58) * 4;
          *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      param_4 = 0;
      *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar7;
    }
    puVar6 = *(undefined4 **)(puVar8 + 6);
    puVar5 = *(undefined4 **)(puVar8 + 4);
    if (((ushort *)*puVar6 == (ushort *)puVar5[1]) && ((ushort *)*puVar6 == puVar8 + 4)) {
      *puVar6 = puVar5;
      puVar5[1] = puVar6;
      if ((puVar5 == puVar6) && (uVar2 = *puVar8, uVar2 < 0x80)) {
        iVar3 = ((uVar2 >> 5) + 0x58) * 4;
        *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
      }
    }
    if ((*(byte *)((int)puVar8 + 5) & 4) != 0) {
      thunk_FUN_980181c4();
    }
    bVar1 = *(byte *)((int)puVar7 + 5);
    *(byte *)((int)puVar8 + 5) = bVar1 & 0x10;
    if ((bVar1 & 0x10) != 0) {
      *(ushort **)(*(int *)((*(byte *)(puVar8 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar8;
    }
    *param_3 = (uint)*puVar8 + *param_3;
    *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar8;
    *puVar8 = (ushort)*param_3;
    puVar7 = puVar8;
    if ((*(byte *)((int)puVar8 + 5) & 0x10) == 0) {
      puVar8[*param_3 * 8 + 1] = (ushort)*param_3;
    }
  }
  if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
    puVar8 = puVar7 + *param_3 * 8;
    if (((*(byte *)((int)puVar8 + 5) & 1) == 0) && ((uint)*puVar8 + *param_3 < 0xf001)) {
      if (param_4 != 0) {
        puVar6 = *(undefined4 **)(puVar7 + 6);
        puVar5 = *(undefined4 **)(puVar7 + 4);
        if (((ushort *)*puVar6 == (ushort *)puVar5[1]) && ((ushort *)*puVar6 == puVar7 + 4)) {
          *puVar6 = puVar5;
          puVar5[1] = puVar6;
          if ((puVar5 == puVar6) && (uVar2 = *puVar7, uVar2 < 0x80)) {
            iVar3 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
          }
        }
        if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
          thunk_FUN_980181c4();
        }
        *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar7;
      }
      bVar1 = *(byte *)((int)puVar8 + 5);
      *(byte *)((int)puVar7 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(puVar7 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar7;
      }
      puVar6 = *(undefined4 **)(puVar8 + 6);
      puVar5 = *(undefined4 **)(puVar8 + 4);
      if (((ushort *)*puVar6 == (ushort *)puVar5[1]) && ((ushort *)*puVar6 == puVar8 + 4)) {
        *puVar6 = puVar5;
        puVar5[1] = puVar6;
        if ((puVar5 == puVar6) && (uVar2 = *puVar8, uVar2 < 0x80)) {
          iVar3 = ((uVar2 >> 5) + 0x58) * 4;
          *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
        }
      }
      if ((*(byte *)((int)puVar8 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      *param_3 = (uint)*puVar8 + *param_3;
      *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar8;
      *puVar7 = (ushort)*param_3;
      if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
        puVar7[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014f80 @ 98014f80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014f80(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_9800d258();
  iVar5 = (int)((ulonglong)uVar13 >> 0x20);
  puVar6 = (undefined2 *)uVar13;
  bVar1 = *(byte *)(puVar6 + 2);
  uVar7 = (uint)(ushort)puVar6[1];
  bVar2 = *(byte *)((int)puVar6 + 5);
  iVar12 = *(int *)((bVar1 + 0x18) * 4 + iVar5);
  *(uint *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + param_3;
  do {
    uVar8 = (undefined2)uVar7;
    if (param_3 == 0) {
      if ((bVar2 & 0x10) != 0) {
        halt_baddata();
      }
      puVar6[1] = uVar8;
      halt_baddata();
    }
    if (param_3 < 0xf001) {
      uVar7 = param_3 & 0xffff;
      *(byte *)((int)puVar6 + 5) = bVar2;
    }
    else {
      uVar7 = 0xfffff000;
      if (param_3 == 0xf001) {
        uVar7 = 0xffffeff0;
      }
      *(undefined1 *)((int)puVar6 + 5) = 0;
    }
    uVar4 = uVar7 & 0xffff;
    puVar6[1] = uVar8;
    *(byte *)(puVar6 + 2) = bVar1;
    *puVar6 = (short)uVar7;
    *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
    if (uVar4 < 0x80) {
      piVar10 = (int *)((uVar4 + 0x30) * 8 + iVar5);
      if ((int *)*piVar10 == piVar10) {
        iVar3 = ((uVar4 >> 5) + 0x58) * 4;
        *(uint *)(iVar3 + iVar5) = 1 << (uVar7 & 0x1f) | *(uint *)(iVar3 + iVar5);
      }
    }
    else {
      for (piVar10 = *(int **)(iVar5 + 0x180);
          ((int *)(iVar5 + 0x180) != piVar10 && (*(ushort *)(piVar10 + -2) < uVar4));
          piVar10 = (int *)*piVar10) {
      }
    }
    puVar11 = (undefined4 *)piVar10[1];
    puVar9 = puVar6 + 4;
    *(int **)(puVar6 + 4) = piVar10;
    param_3 = param_3 - uVar4;
    *(undefined4 **)(puVar6 + 6) = puVar11;
    puVar6 = puVar6 + uVar4 * 8;
    *puVar11 = puVar9;
    piVar10[1] = (int)puVar9;
  } while (puVar6 < *(undefined2 **)(iVar12 + 0x2c));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980150b8 @ 980150b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980150b8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_9800d258();
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x14) & 0x40000) != 0) &&
       (uVar2 = FUN_98018188(), *(byte *)(iVar1 + 0x17b) != uVar2)) {
      FUN_98018178();
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x58);
    while ((undefined4 *)(iVar1 + 0x58) != puVar5) {
      puVar5 = (undefined4 *)*puVar5;
      FUN_98018198();
    }
    if ((*(uint *)(iVar1 + 0x14) & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x580) = 0;
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x48) = 0;
    while (puVar5 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar5;
      FUN_98018198();
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x590);
    uVar2 = 0x40;
    do {
      uVar2 = uVar2 + 0xff & 0xff;
      iVar3 = *(int *)((uVar2 + 0x18) * 4 + iVar1);
      if (iVar3 != 0) {
        FUN_98014b20(iVar3,uVar4);
      }
    } while (uVar2 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015750 @ 98015750 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015750(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980157f8 @ 980157f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980157f8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined2 *param_5,uint param_6,uint param_7)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uStack0000003c;
  
  uVar8 = FUN_9800d240();
  puVar2 = (undefined2 *)((ulonglong)uVar8 >> 0x20);
  puVar4 = (undefined2 *)uVar8;
  uVar5 = param_7 - (int)param_5;
  uVar1 = (int)puVar4 + 0x57U & 0xfffffff0;
  iVar7 = ((int)uVar5 >> 0x10) + (uint)((int)uVar5 < 0 && (uVar5 & 0xffff) != 0);
  if (puVar2 == param_5) {
    uVar6 = *puVar2;
  }
  else {
    uVar6 = 0;
  }
  if (param_6 <= uVar1 + 0x10) {
    if (param_7 <= uVar1 + 0x10) {
      halt_baddata();
    }
    uStack0000003c = param_6;
    iVar3 = FUN_98018168();
    if (iVar3 < 0) {
      halt_baddata();
    }
    param_6 = (uVar1 - param_6) + 0x10 + uStack0000003c;
  }
  uVar5 = param_7 - param_6;
  puVar4[1] = uVar6;
  *puVar4 = (short)((int)(uVar1 - (int)puVar4) >> 4);
  *(char *)(puVar4 + 2) = (char)param_3;
  *(undefined4 *)(puVar4 + 10) = param_4;
  iVar3 = ((int)uVar5 >> 0x10) + (uint)((int)uVar5 < 0 && (uVar5 & 0xffff) != 0);
  *(undefined2 **)(puVar4 + 0xc) = puVar2;
  *(undefined2 **)(puVar4 + 0x10) = param_5;
  *(uint *)(puVar4 + 0x14) = uVar1;
  *(undefined1 *)((int)puVar4 + 5) = 1;
  *(undefined4 *)(puVar4 + 8) = 0xffeeffee;
  *(undefined2 **)(puVar4 + 0x16) = param_5 + iVar7 * 0x8000;
  *(int *)(puVar4 + 0x12) = iVar7;
  *(int *)(puVar4 + 0x18) = iVar3;
  uStack0000003c = param_6;
  if (iVar3 != 0) {
    FUN_98014770(puVar4,param_6,iVar3 * 0x10000);
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_98014f80(puVar2,uVar1,(int)(uStack0000003c - uVar1) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015960 @ 98015960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015960(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_40;
  uint local_38;
  uint local_34;
  
  uVar7 = FUN_9800d254();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar6 = (int)uVar7 + 0xffffU >> 0x10;
  uVar4 = 0x40;
  local_38 = uVar6 << 0x10;
  uVar5 = 0;
  do {
    iVar3 = *(int *)((uVar5 + 0x18) * 4 + iVar2);
    if (iVar3 == 0) {
      if (uVar4 == 0x40) {
        uVar4 = uVar5;
      }
    }
    else if (((uVar6 <= *(uint *)(iVar3 + 0x30)) && (local_38 <= *(uint *)(iVar3 + 0x1c))) &&
            (iVar3 = FUN_98014890(iVar2,iVar3,&local_38,0), iVar3 != 0)) {
      local_38 = local_38 >> 4;
      uVar1 = FUN_98014b78(iVar2,iVar3,(int *)&local_38,0);
      FUN_98014f80(iVar2,uVar1,local_38);
      halt_baddata();
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x40);
  if ((uVar4 != 0x40) && ((*(uint *)(iVar2 + 0x14) & 2) != 0)) {
    uVar6 = (int)uVar7 + 0x10000;
    local_40 = uVar6;
    if (uVar6 <= *(uint *)(iVar2 + 0x20)) {
      local_40 = *(uint *)(iVar2 + 0x20);
    }
    iVar3 = FUN_98018168();
    if (iVar3 < 0) {
      do {
        if (local_40 == uVar6) break;
        local_40 = local_40 >> 1;
        if (local_40 < uVar6) {
          local_40 = uVar6;
        }
        iVar3 = FUN_98018168();
      } while (iVar3 < 0);
      if (iVar3 < 0) {
        halt_baddata();
      }
    }
    *(uint *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + local_40;
    local_34 = uVar6;
    if (uVar6 <= *(uint *)(iVar2 + 0x24)) {
      local_34 = *(uint *)(iVar2 + 0x24);
    }
    iVar3 = FUN_98018168();
    if (-1 < iVar3) {
      iVar2 = FUN_980157f8(iVar2,0,uVar4,0,(undefined2 *)0x0,local_34,local_40);
      if (iVar2 == 0) {
        iVar3 = -0x3fffffe9;
      }
      if (-1 < iVar3) {
        halt_baddata();
      }
    }
    FUN_98018198();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015ba0 @ 98015ba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015ba0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ushort *puStack_7c;
  
  uVar15 = FUN_9800d234();
  iVar2 = (int)((ulonglong)uVar15 >> 0x20);
  puVar5 = (ushort *)uVar15;
  if (*(int *)(iVar2 + 0x584) == 0) {
    puStack_7c = (ushort *)((int)puVar5 + 0xffffU & 0xffff0000);
    puVar11 = (ushort *)0x0;
    uVar13 = (int)puStack_7c - (int)puVar5 >> 4 & 0xffff;
    iVar12 = *(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar2);
    if (uVar13 == 1) {
      puStack_7c = puStack_7c + 0x8000;
      uVar13 = 0x1001;
    }
    else if ((puVar5[1] != 0) && (puStack_7c == puVar5)) {
      puVar11 = puVar5 + (uint)puVar5[1] * -8;
    }
    puVar10 = (ushort *)0x0;
    puVar6 = puVar5 + param_3 * 8;
    puVar7 = (ushort *)((uint)puVar6 & 0xffff0000);
    uVar14 = (int)puVar6 - (int)puVar7 >> 4 & 0xffff;
    if (uVar14 == 1) {
      uVar14 = 0x1001;
      puVar7 = puVar7 + -0x8000;
    }
    else if ((uVar14 == 0) && ((*(byte *)((int)puVar5 + 5) & 0x10) == 0)) {
      puVar10 = puVar6;
    }
    puVar6 = puVar6 + uVar14 * -8;
    uVar8 = (int)puVar7 - (int)puStack_7c;
    if (puVar7 <= puStack_7c) {
      uVar8 = 0;
    }
    if ((uVar8 != 0) && (puVar3 = (undefined4 *)FUN_98014598(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = FUN_98018198();
      *puVar3 = *(undefined4 *)(*(int *)(iVar12 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar12 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_98014770(iVar12,puStack_7c,uVar8);
        *(uint *)(iVar12 + 0x30) = (uVar8 >> 0x10) + *(int *)(iVar12 + 0x30);
        if (uVar13 == 0) {
          if (puVar11 == (ushort *)0x0) {
            if ((puStack_7c <= *(ushort **)(iVar12 + 0x40)) &&
               (*(ushort **)(iVar12 + 0x40) < (ushort *)(uVar8 + (int)puStack_7c))) {
              *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar12 + 0x28);
            }
          }
          else {
            *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar11 + 5) | 0x10;
            *(ushort **)(iVar12 + 0x40) = puVar11;
          }
        }
        else {
          *puVar5 = (ushort)uVar13;
          *(undefined1 *)((int)puVar5 + 5) = 0x10;
          *(uint *)(iVar2 + 0x30) = uVar13 + *(int *)(iVar2 + 0x30);
          *(ushort **)(iVar12 + 0x40) = puVar5;
          *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
          if (uVar13 < 0x80) {
            piVar9 = (int *)((uVar13 + 0x30) * 8 + iVar2);
            if ((int *)*piVar9 == piVar9) {
              iVar4 = ((*puVar5 >> 5) + 0x58) * 4;
              *(uint *)(iVar4 + iVar2) = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar4 + iVar2);
            }
          }
          else {
            for (piVar9 = *(int **)(iVar2 + 0x180);
                ((int *)(iVar2 + 0x180) != piVar9 && (*(ushort *)(piVar9 + -2) < uVar13));
                piVar9 = (int *)*piVar9) {
            }
          }
          puVar3 = (undefined4 *)piVar9[1];
          *(int **)(puVar5 + 4) = piVar9;
          *(undefined4 **)(puVar5 + 6) = puVar3;
          *puVar3 = puVar5 + 4;
          piVar9[1] = (int)(puVar5 + 4);
        }
        if (uVar14 != 0) {
          puVar6[1] = 0;
          uVar1 = *(undefined1 *)(iVar12 + 4);
          *(undefined1 *)((int)puVar6 + 5) = 0;
          *(undefined1 *)(puVar6 + 2) = uVar1;
          *puVar6 = (ushort)uVar14;
          puVar6[uVar14 * 8 + 1] = (ushort)uVar14;
          *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
          if (uVar14 < 0x80) {
            piVar9 = (int *)((uVar14 + 0x30) * 8 + iVar2);
            if ((int *)*piVar9 == piVar9) {
              iVar12 = ((*puVar6 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar2) = 1 << (*puVar6 & 0x1f) | *(uint *)(iVar12 + iVar2);
            }
          }
          else {
            for (piVar9 = *(int **)(iVar2 + 0x180);
                ((int *)(iVar2 + 0x180) != piVar9 && (*(ushort *)(piVar9 + -2) < uVar14));
                piVar9 = (int *)*piVar9) {
            }
          }
          puVar3 = (undefined4 *)piVar9[1];
          *(int **)(puVar6 + 4) = piVar9;
          *(undefined4 **)(puVar6 + 6) = puVar3;
          *puVar3 = puVar6 + 4;
          piVar9[1] = (int)(puVar6 + 4);
          *(uint *)(iVar2 + 0x30) = uVar14 + *(int *)(iVar2 + 0x30);
          halt_baddata();
        }
        if (puVar10 == (ushort *)0x0) {
          halt_baddata();
        }
        puVar10[1] = 0;
        halt_baddata();
      }
    }
  }
  FUN_98014f80(iVar2,puVar5,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015bd0 @ 98015bd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015bd0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r10;
  ushort *puVar4;
  int in_r11;
  ushort *puVar5;
  int *piVar6;
  ushort *unaff_r19;
  ushort *puVar7;
  ushort *puVar8;
  uint unaff_r24;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int unaff_r29;
  ushort *unaff_r31;
  ushort *puStack00000050;
  ushort *puStack00000054;
  
  puStack00000054 = (ushort *)(in_r10 - 1U & 0xffff0000);
  uVar10 = (int)puStack00000054 - param_2 >> 4 & 0xffff;
  iVar9 = *(int *)((in_r11 + 0x18) * 4 + param_1);
  puVar8 = unaff_r19;
  if (uVar10 == 1) {
    puStack00000054 = puStack00000054 + 0x8000;
    uVar10 = 0x1001;
  }
  else if ((unaff_r31[1] != 0) && (puStack00000054 == unaff_r31)) {
    puVar8 = unaff_r31 + (uint)unaff_r31[1] * -8;
  }
  puVar4 = unaff_r31 + unaff_r24 * 8;
  puVar5 = (ushort *)((uint)puVar4 & 0xffff0000);
  uVar11 = (int)puVar4 - (int)puVar5 >> 4 & 0xffff;
  puVar7 = unaff_r19;
  if (uVar11 == 1) {
    uVar11 = 0x1001;
    puVar5 = puVar5 + -0x8000;
  }
  else if ((uVar11 == 0) && ((*(byte *)((int)unaff_r31 + 5) & 0x10) == 0)) {
    puVar7 = puVar4;
  }
  puVar4 = puVar4 + uVar11 * -8;
  puStack00000050 = (ushort *)((int)puVar5 - (int)puStack00000054);
  if (puVar5 <= puStack00000054) {
    puStack00000050 = unaff_r19;
  }
  if ((puStack00000050 != (ushort *)0x0) &&
     (puVar2 = (undefined4 *)FUN_98014598(), puVar2 != (undefined4 *)0x0)) {
    iVar3 = FUN_98018198();
    *puVar2 = *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x4c);
    *(undefined4 **)(*(int *)(iVar9 + 0x18) + 0x4c) = puVar2;
    puVar2[1] = unaff_r19;
    puVar2[2] = unaff_r19;
    if (-1 < iVar3) {
      FUN_98014770(iVar9,puStack00000054,(uint)puStack00000050);
      *(uint *)(iVar9 + 0x30) = ((uint)puStack00000050 >> 0x10) + *(int *)(iVar9 + 0x30);
      if (uVar10 == 0) {
        if (puVar8 == (ushort *)0x0) {
          if ((puStack00000054 <= *(ushort **)(iVar9 + 0x40)) &&
             (*(ushort **)(iVar9 + 0x40) < (ushort *)((int)puStack00000050 + (int)puStack00000054)))
          {
            *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(iVar9 + 0x28);
          }
        }
        else {
          *(byte *)((int)puVar8 + 5) = *(byte *)((int)puVar8 + 5) | 0x10;
          *(ushort **)(iVar9 + 0x40) = puVar8;
        }
      }
      else {
        *unaff_r31 = (ushort)uVar10;
        *(undefined1 *)((int)unaff_r31 + 5) = 0x10;
        *(uint *)(unaff_r29 + 0x30) = uVar10 + *(int *)(unaff_r29 + 0x30);
        *(ushort **)(iVar9 + 0x40) = unaff_r31;
        *(byte *)((int)unaff_r31 + 5) = *(byte *)((int)unaff_r31 + 5) & 0xf8;
        if (uVar10 < 0x80) {
          piVar6 = (int *)((uVar10 + 0x30) * 8 + unaff_r29);
          if ((int *)*piVar6 == piVar6) {
            iVar3 = ((*unaff_r31 >> 5) + 0x58) * 4;
            *(uint *)(iVar3 + unaff_r29) = 1 << (*unaff_r31 & 0x1f) | *(uint *)(iVar3 + unaff_r29);
          }
        }
        else {
          for (piVar6 = *(int **)(unaff_r29 + 0x180);
              ((int *)(unaff_r29 + 0x180) != piVar6 && (*(ushort *)(piVar6 + -2) < uVar10));
              piVar6 = (int *)*piVar6) {
          }
        }
        puVar2 = (undefined4 *)piVar6[1];
        *(int **)(unaff_r31 + 4) = piVar6;
        *(undefined4 **)(unaff_r31 + 6) = puVar2;
        *puVar2 = unaff_r31 + 4;
        piVar6[1] = (int)(unaff_r31 + 4);
      }
      if (uVar11 != 0) {
        puVar4[1] = (ushort)unaff_r19;
        uVar1 = *(undefined1 *)(iVar9 + 4);
        *(char *)((int)puVar4 + 5) = (char)unaff_r19;
        *(undefined1 *)(puVar4 + 2) = uVar1;
        *puVar4 = (ushort)uVar11;
        puVar4[uVar11 * 8 + 1] = (ushort)uVar11;
        *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0xf8;
        if (uVar11 < 0x80) {
          piVar6 = (int *)((uVar11 + 0x30) * 8 + unaff_r29);
          if ((int *)*piVar6 == piVar6) {
            iVar9 = ((*puVar4 >> 5) + 0x58) * 4;
            *(uint *)(iVar9 + unaff_r29) = 1 << (*puVar4 & 0x1f) | *(uint *)(iVar9 + unaff_r29);
          }
        }
        else {
          for (piVar6 = *(int **)(unaff_r29 + 0x180);
              ((int *)(unaff_r29 + 0x180) != piVar6 && (*(ushort *)(piVar6 + -2) < uVar11));
              piVar6 = (int *)*piVar6) {
          }
        }
        puVar2 = (undefined4 *)piVar6[1];
        *(int **)(puVar4 + 4) = piVar6;
        *(undefined4 **)(puVar4 + 6) = puVar2;
        *puVar2 = puVar4 + 4;
        piVar6[1] = (int)(puVar4 + 4);
        *(uint *)(unaff_r29 + 0x30) = uVar11 + *(int *)(unaff_r29 + 0x30);
        halt_baddata();
      }
      if (puVar7 == (ushort *)0x0) {
        halt_baddata();
      }
      puVar7[1] = (ushort)unaff_r19;
      halt_baddata();
    }
  }
  FUN_98014f80(unaff_r29,unaff_r31,unaff_r24);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015f08 @ 98015f08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015f08(void)

{
  FUN_9800d238();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980164d8 @ 980164d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980164d8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  byte bVar14;
  int *piVar15;
  undefined4 *puVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  ushort *puVar20;
  undefined8 uVar21;
  
  uVar21 = FUN_9800d240();
  iVar4 = (int)((ulonglong)uVar21 >> 0x20);
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar5 = FUN_98018188(), *(byte *)(iVar4 + 0x17b) != uVar5)) {
    FUN_98018178();
  }
  uVar19 = *(uint *)(iVar4 + 0x18) | (uint)uVar21;
  uVar5 = param_3;
  if (param_3 == 0) {
    uVar5 = 1;
  }
  uVar5 = uVar5 + 0x1f;
  uVar10 = uVar5 >> 4;
  bVar3 = (uVar19 & 1) == 0;
  if (bVar3) {
    FUN_98018138();
  }
  cVar2 = (char)(uVar5 & 0xfffffff0);
  if (0x7f < uVar10) {
    if (*(uint *)(iVar4 + 0x1c) < uVar10) {
      if ((*(uint *)(iVar4 + 0x14) & 2) != 0) {
        iVar18 = (uVar5 & 0xfffffff0) + 0x20;
        iVar9 = FUN_98018168();
        if (-1 < iVar9) {
          FUN_9800d9e0((uint *)0x0,0,0x30);
          iRam00000000 = iVar4 + 0x58;
          sRam00000020 = ((short)iVar18 - (short)param_3) + -0x30;
          uRam00000025 = 0xb;
          puRam00000004 = *(undefined4 **)(iVar4 + 0x5c);
          iRam00000018 = iVar18;
          iRam0000001c = iVar18;
          *puRam00000004 = 0;
          *(undefined4 *)(iVar4 + 0x5c) = 0;
          goto LAB_9800d290;
        }
      }
    }
    else {
LAB_98016790:
      piVar15 = (int *)(iVar4 + 0x180);
      if ((piVar15 != *(int **)(iVar4 + 0x184)) &&
         (uVar10 <= *(ushort *)(*(int **)(iVar4 + 0x184) + -2))) {
        for (piVar11 = (int *)*piVar15; piVar15 != piVar11; piVar11 = (int *)*piVar11) {
          puVar6 = (ushort *)(piVar11 + -2);
          if (uVar10 <= *puVar6) {
            piVar15 = (int *)piVar11[1];
            iVar9 = *piVar11;
            if (((int *)*piVar15 == *(int **)(iVar9 + 4)) && ((int *)*piVar15 == piVar11)) {
              *piVar15 = iVar9;
              *(int **)(iVar9 + 4) = piVar15;
            }
            goto LAB_98016864;
          }
        }
      }
      puVar6 = (ushort *)FUN_98015960();
      if (puVar6 != (ushort *)0x0) {
        piVar15 = *(int **)(puVar6 + 6);
        iVar9 = *(int *)(puVar6 + 4);
        if (((ushort *)*piVar15 == *(ushort **)(iVar9 + 4)) && ((ushort *)*piVar15 == puVar6 + 4)) {
          *piVar15 = iVar9;
          *(int **)(iVar9 + 4) = piVar15;
        }
        goto LAB_98016864;
      }
    }
    if ((uVar19 & 4) != 0) {
      FUN_980181d8();
    }
    goto LAB_9800d290;
  }
  piVar15 = (int *)((uVar10 + 0x30) * 8 + iVar4);
  if ((int *)*piVar15 == piVar15) {
    uVar5 = uVar5 >> 9;
    puVar7 = (uint *)((uVar5 + 0x58) * 4 + iVar4);
    puVar8 = puVar7 + 1;
    uVar12 = *puVar7 & ~((1 << (uVar10 & 0x1f)) - 1U);
    if (uVar5 == 0) {
      if (uVar12 == 0) {
        uVar12 = *puVar8;
        puVar8 = puVar7 + 2;
        goto LAB_980166b8;
      }
      iVar9 = iVar4 + 0x180;
    }
    else if (uVar5 == 1) {
LAB_980166b8:
      if (uVar12 == 0) {
        uVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        goto LAB_980166d8;
      }
      iVar9 = iVar4 + 0x280;
    }
    else {
      if (uVar5 < 3) {
LAB_980166d8:
        if (uVar12 != 0) {
          iVar9 = iVar4 + 0x380;
          goto LAB_98016704;
        }
        uVar12 = *puVar8;
      }
      else if (uVar5 != 3) goto LAB_98016790;
      if (uVar12 == 0) goto LAB_98016790;
      iVar9 = iVar4 + 0x480;
    }
LAB_98016704:
    puVar16 = *(undefined4 **)((0x1f - LZCOUNT(uVar12 & ~(uVar12 - 1))) * 8 + iVar9 + 4);
    puVar6 = (ushort *)(puVar16 + -2);
    piVar11 = (int *)puVar16[1];
    piVar15 = (int *)*puVar16;
    if (((undefined4 *)*piVar11 == (undefined4 *)piVar15[1]) && ((undefined4 *)*piVar11 == puVar16))
    {
      *piVar11 = (int)piVar15;
      piVar15[1] = (int)piVar11;
      if (piVar15 == piVar11) {
        iVar9 = ((*puVar6 >> 5) + 0x58) * 4;
        *(uint *)(iVar9 + iVar4) = *(uint *)(iVar9 + iVar4) ^ 1 << (*puVar6 & 0x1f);
      }
    }
LAB_98016864:
    bVar14 = *(byte *)((int)puVar6 + 5);
    *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar6;
    *(undefined1 *)((int)puVar6 + 5) = 1;
    uVar5 = *puVar6 - uVar10;
    *puVar6 = (ushort)uVar10;
    *(char *)(puVar6 + 3) = cVar2 - (char)param_3;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        *puVar6 = *puVar6 + 1;
        *(char *)(puVar6 + 3) = *(char *)(puVar6 + 3) + '\x10';
      }
      else {
        puVar20 = puVar6 + uVar10 * 8;
        uVar12 = uVar5 & 0xffff;
        *(byte *)((int)puVar20 + 5) = bVar14;
        puVar20[1] = (ushort)uVar10;
        *(undefined1 *)(puVar20 + 2) = *(undefined1 *)(puVar6 + 2);
        *puVar20 = (ushort)uVar5;
        if ((bVar14 & 0x10) == 0) {
          puVar17 = puVar20 + uVar5 * 8;
          if ((*(byte *)((int)puVar17 + 5) & 1) != 0) {
            puVar17[1] = (ushort)uVar5;
            if (uVar12 < 0x80) {
              *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar20 + 5) & 0x10;
              piVar15 = (int *)((uVar12 + 0x30) * 8 + iVar4);
              if ((int *)*piVar15 == piVar15) {
                iVar9 = ((*puVar20 >> 5) + 0x58) * 4;
                uVar10 = *(uint *)(iVar9 + iVar4) | 1 << (*puVar20 & 0x1f);
                goto LAB_980169f8;
              }
            }
            else {
              *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar20 + 5) & 0x10;
              for (piVar15 = *(int **)(iVar4 + 0x180);
                  ((int *)(iVar4 + 0x180) != piVar15 && (*(ushort *)(piVar15 + -2) < uVar12));
                  piVar15 = (int *)*piVar15) {
              }
            }
            goto LAB_980169fc;
          }
          *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar17 + 5);
          puVar16 = *(undefined4 **)(puVar17 + 4);
          puVar13 = *(undefined4 **)(puVar17 + 6);
          if (((ushort *)*puVar13 == (ushort *)puVar16[1]) && ((ushort *)*puVar13 == puVar17 + 4)) {
            *puVar13 = puVar16;
            puVar16[1] = puVar13;
            if ((puVar16 == puVar13) && (uVar1 = *puVar17, uVar1 < 0x80)) {
              iVar9 = ((uVar1 >> 5) + 0x58) * 4;
              *(uint *)(iVar9 + iVar4) = 1 << (uVar1 & 0x1f) ^ *(uint *)(iVar9 + iVar4);
            }
          }
          *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar17;
          uVar5 = *puVar17 + uVar5;
          if (uVar5 < 0xf001) {
            uVar10 = uVar5 & 0xffff;
            *puVar20 = (ushort)uVar5;
            if ((*(byte *)((int)puVar20 + 5) & 0x10) == 0) {
              puVar20[uVar5 * 8 + 1] = (ushort)uVar5;
            }
            if (uVar10 < 0x80) {
              *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar20 + 5) & 0x10;
              piVar15 = (int *)((uVar10 + 0x30) * 8 + iVar4);
              if ((int *)*piVar15 == piVar15) {
                iVar9 = ((*puVar20 >> 5) + 0x58) * 4;
                *(uint *)(iVar9 + iVar4) = *(uint *)(iVar9 + iVar4) | 1 << (*puVar20 & 0x1f);
              }
            }
            else {
              *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar20 + 5) & 0x10;
              for (piVar15 = *(int **)(iVar4 + 0x180);
                  ((int *)(iVar4 + 0x180) != piVar15 && (*(ushort *)(piVar15 + -2) < uVar10));
                  piVar15 = (int *)*piVar15) {
              }
            }
            puVar16 = (undefined4 *)piVar15[1];
            *(int **)(puVar20 + 4) = piVar15;
            *(undefined4 **)(puVar20 + 6) = puVar16;
            *puVar16 = puVar20 + 4;
            piVar15[1] = (int)(puVar20 + 4);
            iVar9 = uVar5 + *(int *)(iVar4 + 0x30);
            goto LAB_98016bbc;
          }
          FUN_98014f80(iVar4,puVar20,uVar5);
        }
        else {
          if (uVar12 < 0x80) {
            piVar15 = (int *)((uVar12 + 0x30) * 8 + iVar4);
            *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar20 + 5) & 0x10;
            if ((int *)*piVar15 == piVar15) {
              iVar9 = ((*puVar20 >> 5) + 0x58) * 4;
              uVar10 = 1 << (*puVar20 & 0x1f) | *(uint *)(iVar9 + iVar4);
LAB_980169f8:
              *(uint *)(iVar9 + iVar4) = uVar10;
            }
          }
          else {
            *(byte *)((int)puVar20 + 5) = *(byte *)((int)puVar20 + 5) & 0x10;
            for (piVar15 = *(int **)(iVar4 + 0x180);
                ((int *)(iVar4 + 0x180) != piVar15 && (*(ushort *)(piVar15 + -2) < uVar12));
                piVar15 = (int *)*piVar15) {
            }
          }
LAB_980169fc:
          puVar16 = (undefined4 *)piVar15[1];
          *(int **)(puVar20 + 4) = piVar15;
          *(undefined4 **)(puVar20 + 6) = puVar16;
          *puVar16 = puVar20 + 4;
          piVar15[1] = (int)(puVar20 + 4);
          iVar9 = uVar5 + *(int *)(iVar4 + 0x30);
LAB_98016bbc:
          *(int *)(iVar4 + 0x30) = iVar9;
        }
        bVar14 = 0;
        if ((*(byte *)((int)puVar20 + 5) & 0x10) != 0) {
          *(ushort **)(*(int *)((*(byte *)(puVar20 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar20;
        }
      }
    }
    if ((bVar14 & 0x10) != 0) {
      *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) | 0x10;
    }
  }
  else {
    puVar16 = (undefined4 *)piVar15[1];
    puVar6 = (ushort *)(puVar16 + -2);
    bVar14 = *(byte *)((int)puVar16 + -3);
    piVar11 = (int *)puVar16[1];
    piVar15 = (int *)*puVar16;
    if (((undefined4 *)*piVar11 == (undefined4 *)piVar15[1]) && ((undefined4 *)*piVar11 == puVar16))
    {
      *piVar11 = (int)piVar15;
      piVar15[1] = (int)piVar11;
      if (piVar15 == piVar11) {
        iVar9 = ((*puVar6 >> 5) + 0x58) * 4;
        *(uint *)(iVar9 + iVar4) = *(uint *)(iVar9 + iVar4) ^ 1 << (*puVar6 & 0x1f);
      }
    }
    *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - uVar10;
    *(byte *)((int)puVar16 + -3) = bVar14 & 0x10 | 1;
    *(char *)((int)puVar16 + -2) = cVar2 - (char)param_3;
    *(undefined1 *)((int)puVar16 + -1) = 0;
  }
  if (bVar3) {
    FUN_98018118();
  }
  if ((uVar19 & 8) != 0) {
    FUN_9800d9e0((uint *)(puVar6 + 8),0,param_3);
  }
LAB_9800d290:
  FUN_98016d80();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016d80 @ 98016d80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016d80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016dd0 @ 98016dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016dd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  uint auStack_50 [4];
  int iStack_40;
  int iStack_3c;
  
  uVar8 = FUN_9800d250();
  iVar7 = (int)((ulonglong)uVar8 >> 0x20);
  auStack_50[1] = 0;
  auStack_50[2] = 1;
  iStack_3c = iVar7;
  if (((*(uint *)(iVar7 + 0x14) & 0x40000) != 0) &&
     (uVar2 = FUN_98018188(), *(byte *)(iVar7 + 0x17b) != uVar2)) {
    FUN_98018178();
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  bVar1 = ((*(uint *)(iVar7 + 0x18) | (uint)uVar8) & 1) == 0;
  if (bVar1) {
    FUN_98018138();
    auStack_50[1] = 1;
  }
  if ((*(byte *)(param_3 + -0xb) & 8) != 0) {
    iStack_40 = param_3 + -0x30;
    iVar7 = *(int *)(param_3 + -0x30);
    piVar6 = *(int **)(param_3 + -0x2c);
    *piVar6 = iVar7;
    *(int **)(iVar7 + 4) = piVar6;
    if (bVar1) {
      FUN_98018118();
      auStack_50[1] = 0;
    }
    auStack_50[0] = 0;
    iVar7 = FUN_98018198();
    auStack_50[2] = 0xffffffffU - (iVar7 >> 0x1f) & 1;
    goto LAB_98017034;
  }
  auStack_50[0] = (uint)*(ushort *)(param_3 + -0x10);
  puVar3 = (ushort *)FUN_98014b78(iVar7,(ushort *)(param_3 + -0x10),(int *)auStack_50,0);
  if (auStack_50[0] < 0x80) {
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) & 0x10;
    piVar6 = (int *)(((auStack_50[0] & 0xffff) + 0x30) * 8 + iVar7);
    if ((int *)*piVar6 == piVar6) {
      iVar5 = ((*puVar3 >> 5) + 0x58) * 4;
      *(uint *)(iVar5 + iVar7) = 1 << (*puVar3 & 0x1f) | *(uint *)(iVar5 + iVar7);
    }
    puVar4 = (undefined4 *)piVar6[1];
    *(int **)(puVar3 + 4) = piVar6;
    *(undefined4 **)(puVar3 + 6) = puVar4;
    *puVar4 = puVar3 + 4;
    piVar6[1] = (int)(puVar3 + 4);
    iVar5 = *(int *)(iVar7 + 0x30);
  }
  else {
    if ((*(uint *)(iVar7 + 0x28) <= auStack_50[0]) &&
       (*(uint *)(iVar7 + 0x2c) <= *(int *)(iVar7 + 0x30) + auStack_50[0])) {
      FUN_98015ba0(iVar7);
      goto LAB_98017034;
    }
    if (0xf000 < auStack_50[0]) {
      FUN_98014f80(iVar7,puVar3,auStack_50[0]);
      goto LAB_98017034;
    }
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) & 0x10;
    for (auStack_50[3] = *(int *)(iVar7 + 0x180);
        (iVar7 + 0x180 != auStack_50[3] &&
        (iStack_40 = auStack_50[3] + -8,
        (uint)*(ushort *)(auStack_50[3] + -8) < (auStack_50[0] & 0xffff)));
        auStack_50[3] = *(uint *)auStack_50[3]) {
    }
    puVar4 = *(undefined4 **)(auStack_50[3] + 4);
    *(uint *)(puVar3 + 4) = auStack_50[3];
    *(undefined4 **)(puVar3 + 6) = puVar4;
    *puVar4 = puVar3 + 4;
    *(ushort **)(auStack_50[3] + 4) = puVar3 + 4;
    iVar5 = *(int *)(iVar7 + 0x30);
  }
  *(uint *)(iVar7 + 0x30) = iVar5 + auStack_50[0];
LAB_98017034:
  FUN_98017074();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016ed8 @ 98016ed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016ed8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint in_r9;
  int *piVar2;
  int in_r10;
  int in_r11;
  int unaff_r27;
  int unaff_r30;
  int unaff_r31;
  
  iVar1 = (in_r10 + 0x58) * 4;
  *(uint *)(iVar1 + unaff_r30) = unaff_r27 << (in_r9 & 0x1f) | *(uint *)(iVar1 + unaff_r30);
  piVar2 = *(int **)(in_r11 + 4);
  *(int *)(param_2 + 8) = in_r11;
  *(int **)(param_2 + 0xc) = piVar2;
  *piVar2 = param_2 + 8;
  *(int *)(in_r11 + 4) = param_2 + 8;
  *(int *)(unaff_r30 + 0x30) = *(int *)(unaff_r30 + 0x30) + *(int *)(unaff_r31 + 0x50);
  FUN_98017074();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017074 @ 98017074 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017074(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980170c8 @ 980170c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980170c8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar10;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined8 uVar15;
  int iStack00000014;
  int iStack00000024;
  uint uStack0000002c;
  
  uVar15 = FUN_9800d234();
  iVar4 = (int)((ulonglong)uVar15 >> 0x20);
  iStack00000014 = iVar4;
  iStack00000024 = param_3;
  uStack0000002c = param_4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar3 = FUN_98018188(), *(byte *)(iVar4 + 0x17b) != uVar3)) {
    FUN_98018178();
  }
  if ((param_3 == 0) || (uVar3 = *(uint *)(iVar4 + 0x18) | (uint)uVar15, 0x7fffffff < param_4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = param_4;
  if (param_4 == 0) {
    uVar6 = 1;
  }
  uVar6 = *(int *)(iVar4 + 0x50) + uVar6 & *(uint *)(iVar4 + 0x54);
  if ((((uVar3 & 0x3c000100) != 0) || (*(int *)(iVar4 + 0x17c) != 0)) ||
     ((*(byte *)(param_3 + -0xb) & 2) != 0)) {
    uVar6 = uVar6 + 0x10;
  }
  if ((uVar3 & 1) == 0) {
    FUN_98018138();
  }
  puVar14 = (ushort *)(param_3 + -0x10);
  bVar1 = *(byte *)(param_3 + -0xb);
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (uint)*puVar14;
  if ((bVar1 & 8) == 0) {
    uVar11 = uVar7 * 0x10 - (uint)*(byte *)(param_3 + -10);
  }
  else {
    uVar6 = uVar6 + 0x1001f & 0xffff0000;
    uVar11 = (*(uint *)(param_3 + -0x18) - uVar7) - 0x30;
    uVar7 = *(uint *)(param_3 + -0x18) >> 4;
  }
  uVar12 = uVar6 >> 4;
  if (uVar7 < uVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar12 + 1 == uVar7) {
    uVar6 = uVar6 + 0x10;
    uVar12 = uVar12 + 1;
  }
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_3 + -10) = (char)uVar6 - (char)param_4;
  }
  else {
    *puVar14 = ((short)uVar6 - (short)param_4) - 0x30;
  }
  if ((uVar11 < param_4) && ((uVar3 & 8) != 0)) {
    FUN_9800d9e0((uint *)(uVar11 + param_3),0,param_4 - uVar11);
  }
  if (uVar12 == uVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_3 + -0xb);
  if ((bVar1 & 8) != 0) {
    iVar4 = FUN_98018198();
    if (iVar4 < 0) {
      halt_baddata();
    }
    *(uint *)(param_3 + -0x18) = *(int *)(param_3 + -0x18) - (uVar7 * 0x10 - uVar6);
    halt_baddata();
  }
  puVar13 = puVar14 + uVar12 * 8;
  *(byte *)((int)puVar13 + 5) = bVar1 & 0xfe;
  puVar13[1] = (ushort)uVar12;
  *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(param_3 + -0xc);
  uVar3 = *puVar14 - uVar12;
  *puVar14 = (ushort)uVar12;
  *(byte *)(param_3 + -0xb) = *(byte *)(param_3 + -0xb) & 0xef;
  uVar10 = (ushort)uVar3;
  if ((bVar1 & 0x10) == 0) {
    puVar14 = puVar13 + uVar3 * 8;
    if ((*(byte *)((int)puVar14 + 5) & 1) == 0) {
      *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar14 + 5);
      puVar9 = *(undefined4 **)(puVar14 + 6);
      puVar5 = *(undefined4 **)(puVar14 + 4);
      if (((ushort *)*puVar9 == (ushort *)puVar5[1]) && ((ushort *)*puVar9 == puVar14 + 4)) {
        *puVar9 = puVar5;
        puVar5[1] = puVar9;
        if ((puVar5 == puVar9) && (uVar10 = *puVar14, uVar10 < 0x80)) {
          iVar2 = ((uVar10 >> 5) + 0x58) * 4;
          *(uint *)(iVar2 + iVar4) = *(uint *)(iVar2 + iVar4) ^ 1 << (uVar10 & 0x1f);
        }
      }
      if ((*(byte *)((int)puVar14 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar14;
      uVar3 = *puVar14 + uVar3;
      if (uVar3 < 0xf001) {
        *puVar13 = (ushort)uVar3;
        if ((*(byte *)((int)puVar13 + 5) & 0x10) == 0) {
          puVar13[uVar3 * 8 + 1] = (ushort)uVar3;
        }
        else {
          *(ushort **)(*(int *)((*(byte *)(puVar13 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar13;
        }
        *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) & 0xf8;
        if ((uVar3 & 0xffff) < 0x80) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar13 = uVar10;
    puVar14[1] = uVar10;
    *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) & 0xf8;
    if (0x7f < (uVar3 & 0xffff)) {
      for (piVar8 = *(int **)(iVar4 + 0x180);
          ((int *)(iVar4 + 0x180) != piVar8 && ((uint)*(ushort *)(piVar8 + -2) < (uVar3 & 0xffff)));
          piVar8 = (int *)*piVar8) {
      }
      goto LAB_98017488;
    }
  }
  else {
    *(ushort **)(*(int *)((*(byte *)(puVar13 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar13;
    *puVar13 = uVar10;
    *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) & 0xf8;
    if (0x7f < (uVar3 & 0xffff)) {
      for (piVar8 = *(int **)(iVar4 + 0x180);
          ((int *)(iVar4 + 0x180) != piVar8 && ((uint)*(ushort *)(piVar8 + -2) < (uVar3 & 0xffff)));
          piVar8 = (int *)*piVar8) {
      }
      goto LAB_98017488;
    }
  }
  piVar8 = (int *)(((uVar3 & 0xffff) + 0x30) * 8 + iVar4);
  if ((int *)*piVar8 == piVar8) {
    iVar2 = ((*puVar13 >> 5) + 0x58) * 4;
    *(uint *)(iVar2 + iVar4) = *(uint *)(iVar2 + iVar4) | 1 << (*puVar13 & 0x1f);
  }
LAB_98017488:
  puVar5 = (undefined4 *)piVar8[1];
  *(int **)(puVar13 + 4) = piVar8;
  *(undefined4 **)(puVar13 + 6) = puVar5;
  *puVar5 = puVar13 + 4;
  piVar8[1] = (int)(puVar13 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980180c8 @ 980180c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980180c8(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_r6;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 unaff_r19;
  int unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  uint uVar8;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  undefined4 unaff_r27;
  ushort *unaff_r30;
  int unaff_r31;
  
  iVar3 = FUN_98015bd0(param_1,param_2);
  iVar4 = unaff_r20;
  uVar8 = unaff_r23;
  if (iVar3 == 0) {
    if ((unaff_r23 & 0x10) == 0) {
      uVar8 = unaff_r23 & 0xc003ffff;
      *(uint *)(unaff_r31 + 0x15c) = uVar8;
      if ((*(byte *)((int)unaff_r30 + 5) & 2) != 0) {
        *(uint *)(unaff_r31 + 0x15c) = unaff_r23 & 0xc003f1ff;
        bVar1 = *(byte *)((int)unaff_r30 + 5);
        uVar8 = (bVar1 & 0xe0) << 4 | 0x100 | unaff_r23 & 0xc003f1ff;
        *(uint *)(unaff_r31 + 0x15c) = uVar8;
        if ((bVar1 & 8) == 0) {
          uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
          if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
            *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar8;
          }
          FUN_980181c4();
          return;
        }
        FUN_98018138();
        return;
      }
      if (*(byte *)((int)unaff_r30 + 7) != 0) {
        uVar8 = (uint)*(byte *)((int)unaff_r30 + 7) << 0x12 | uVar8;
        *(uint *)(unaff_r31 + 0x15c) = uVar8;
      }
      iVar4 = FUN_98016ed8(unaff_r27,uVar8 & 0xfffffff7);
      if (iVar4 != 0) {
        if ((*(byte *)(iVar4 + -0xb) & 2) != 0) {
          if ((*(byte *)(iVar4 + -0xb) & 8) == 0) {
            puVar6 = (ushort *)(iVar4 + -0x10) + (uint)*(ushort *)(iVar4 + -0x10) * 8 + -8;
          }
          else {
            puVar6 = (ushort *)(iVar4 + -0x28);
          }
          if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
            puVar7 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
          }
          else {
            puVar7 = unaff_r30 + -0xc;
          }
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar7 + 2);
        }
        uVar5 = unaff_r26;
        if (unaff_r25 <= unaff_r26) {
          uVar5 = unaff_r25;
        }
        FUN_9800e320(iVar4,unaff_r20,uVar5,in_r6);
        if ((unaff_r25 < unaff_r26) && ((uVar8 & 8) != 0)) {
          FUN_9800e3e0();
        }
        func_0x980177d0(unaff_r27,uVar8,unaff_r20);
      }
      *(int *)(unaff_r31 + 0x164) = iVar4;
      goto LAB_980182a8;
    }
    *(undefined4 *)(unaff_r31 + 0x164) = unaff_r19;
  }
  else {
LAB_980182a8:
    if (iVar4 != 0) goto LAB_980182f8;
  }
  if ((uVar8 & 4) != 0) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
LAB_980182f8:
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980180d8 @ 980180d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980180d8(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint in_r6;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  uint uVar7;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  undefined4 unaff_r27;
  ushort *unaff_r30;
  int unaff_r31;
  byte in_cr0;
  
  if ((bool)(in_cr0 >> 1 & 1)) {
    uVar7 = unaff_r23 & 0xc003ffff;
    *(uint *)(unaff_r31 + 0x15c) = uVar7;
    if ((*(byte *)((int)unaff_r30 + 5) & 2) != 0) {
      *(uint *)(unaff_r31 + 0x15c) = unaff_r23 & 0xc003f1ff;
      bVar1 = *(byte *)((int)unaff_r30 + 5);
      uVar7 = (bVar1 & 0xe0) << 4 | 0x100 | unaff_r23 & 0xc003f1ff;
      *(uint *)(unaff_r31 + 0x15c) = uVar7;
      if ((bVar1 & 8) == 0) {
        uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
        if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
          *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar7;
        }
        FUN_980181c4();
        return;
      }
      FUN_98018138();
      return;
    }
    if (*(byte *)((int)unaff_r30 + 7) != 0) {
      uVar7 = (uint)*(byte *)((int)unaff_r30 + 7) << 0x12 | uVar7;
      *(uint *)(unaff_r31 + 0x15c) = uVar7;
    }
    iVar3 = FUN_98016ed8(unaff_r27,uVar7 & 0xfffffff7);
    if (iVar3 != 0) {
      if ((*(byte *)(iVar3 + -0xb) & 2) != 0) {
        if ((*(byte *)(iVar3 + -0xb) & 8) == 0) {
          puVar5 = (ushort *)(iVar3 + -0x10) + (uint)*(ushort *)(iVar3 + -0x10) * 8 + -8;
        }
        else {
          puVar5 = (ushort *)(iVar3 + -0x28);
        }
        if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar6 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar6 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar6 + 2);
      }
      uVar4 = unaff_r26;
      if (unaff_r25 <= unaff_r26) {
        uVar4 = unaff_r25;
      }
      FUN_9800e320(iVar3,unaff_r20,uVar4,in_r6);
      if ((unaff_r25 < unaff_r26) && ((uVar7 & 8) != 0)) {
        FUN_9800e3e0();
      }
      func_0x980177d0(unaff_r27,uVar7,unaff_r20);
    }
    *(int *)(unaff_r31 + 0x164) = iVar3;
    if (iVar3 != 0) goto LAB_980182f8;
  }
  else {
    *(undefined4 *)(unaff_r31 + 0x164) = unaff_r19;
    uVar7 = unaff_r23;
  }
  if ((uVar7 & 4) != 0) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
LAB_980182f8:
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980180e8 @ 980180e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980180e8(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint in_r6;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  uint uVar6;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  undefined4 unaff_r27;
  ushort *unaff_r30;
  int unaff_r31;
  
  *(uint *)(unaff_r31 + 0x15c) = unaff_r23;
  if ((*(byte *)((int)unaff_r30 + 5) & 2) != 0) {
    *(uint *)(unaff_r31 + 0x15c) = unaff_r23 & 0xfffff1ff;
    bVar1 = *(byte *)((int)unaff_r30 + 5);
    uVar6 = (bVar1 & 0xe0) << 4 | 0x100 | unaff_r23 & 0xfffff1ff;
    *(uint *)(unaff_r31 + 0x15c) = uVar6;
    if ((bVar1 & 8) == 0) {
      uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
      if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
        *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar6;
      }
      FUN_980181c4();
      return;
    }
    FUN_98018138();
    return;
  }
  if (*(byte *)((int)unaff_r30 + 7) != 0) {
    unaff_r23 = (uint)*(byte *)((int)unaff_r30 + 7) << 0x12 | unaff_r23;
    *(uint *)(unaff_r31 + 0x15c) = unaff_r23;
  }
  iVar3 = FUN_98016ed8(unaff_r27,unaff_r23 & 0xfffffff7);
  if (iVar3 != 0) {
    if ((*(byte *)(iVar3 + -0xb) & 2) != 0) {
      if ((*(byte *)(iVar3 + -0xb) & 8) == 0) {
        puVar4 = (ushort *)(iVar3 + -0x10) + (uint)*(ushort *)(iVar3 + -0x10) * 8 + -8;
      }
      else {
        puVar4 = (ushort *)(iVar3 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar5 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar5 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar5 + 2);
    }
    uVar6 = unaff_r26;
    if (unaff_r25 <= unaff_r26) {
      uVar6 = unaff_r25;
    }
    FUN_9800e320(iVar3,unaff_r20,uVar6,in_r6);
    if ((unaff_r25 < unaff_r26) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(int *)(unaff_r31 + 0x164) = iVar3;
  if ((iVar3 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018118 @ 98018118 ==== */

void FUN_98018118(void)

{
  ushort uVar1;
  uint unaff_r23;
  ushort *unaff_r30;
  int unaff_r31;
  byte in_cr0;
  
  if (!(bool)(in_cr0 >> 1 & 1)) {
    FUN_98018138();
    return;
  }
  uVar1 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
  if ((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = (uint)uVar1 << 0x12 | unaff_r23;
  }
  FUN_980181c4();
  return;
}


/* ==== FUN_98018138 @ 98018138 ==== */

void FUN_98018138(void)

{
  ushort uVar1;
  int in_r11;
  uint unaff_r23;
  int unaff_r31;
  
  uVar1 = *(ushort *)(in_r11 + 2);
  if ((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = (uint)uVar1 << 0x12 | unaff_r23;
  }
  FUN_980181c4();
  return;
}


/* ==== FUN_98018148 @ 98018148 ==== */

void FUN_98018148(void)

{
  uint in_r11;
  uint unaff_r23;
  int unaff_r31;
  
  if ((in_r11 != 0) && ((in_r11 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = in_r11 << 0x12 | unaff_r23;
  }
  FUN_980181c4();
  return;
}


/* ==== FUN_98018168 @ 98018168 ==== */

void FUN_98018168(void)

{
  FUN_980181c4();
  return;
}


/* ==== FUN_98018178 @ 98018178 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018178(void)

{
  int iVar1;
  uint uVar2;
  uint in_r6;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *unaff_r30;
  int unaff_r31;
  
  *(byte *)((int)unaff_r30 + 5) = *(byte *)((int)unaff_r30 + 5) & 0xfd;
  uVar9 = *(uint *)(unaff_r31 + 0x16c);
  uVar5 = *(undefined4 *)(unaff_r31 + 0x164);
  uVar6 = *(uint *)(unaff_r31 + 0x15c);
  uVar10 = *(undefined4 *)(unaff_r31 + 0x154);
  uVar7 = *(undefined4 *)(unaff_r31 + 0x50);
  uVar8 = *(uint *)(unaff_r31 + 0x5c);
  iVar1 = FUN_98016ed8(uVar10,uVar6 & 0xfffffff7);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + -0xb) & 2) != 0) {
      if ((*(byte *)(iVar1 + -0xb) & 8) == 0) {
        puVar3 = (ushort *)(iVar1 + -0x10) + (uint)*(ushort *)(iVar1 + -0x10) * 8 + -8;
      }
      else {
        puVar3 = (ushort *)(iVar1 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar4 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar4 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
    }
    uVar2 = uVar9;
    if (uVar8 <= uVar9) {
      uVar2 = uVar8;
    }
    FUN_9800e320(iVar1,uVar5,uVar2,in_r6);
    if ((uVar8 < uVar9) && ((uVar6 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(uVar10,uVar6,uVar5);
  }
  *(int *)(unaff_r31 + 0x164) = iVar1;
  if ((iVar1 == 0) && ((uVar6 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = 0;
    *(undefined4 *)(unaff_r31 + 0x90) = 1;
    *(undefined4 *)(unaff_r31 + 0x84) = 0;
    *(undefined4 *)(unaff_r31 + 0x94) = uVar7;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018188 @ 98018188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018188(void)

{
  int iVar1;
  uint uVar2;
  uint in_r6;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 unaff_r19;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *unaff_r30;
  int unaff_r31;
  
  uVar9 = *(uint *)(unaff_r31 + 0x16c);
  uVar5 = *(undefined4 *)(unaff_r31 + 0x164);
  uVar6 = *(uint *)(unaff_r31 + 0x15c);
  uVar10 = *(undefined4 *)(unaff_r31 + 0x154);
  uVar7 = *(undefined4 *)(unaff_r31 + 0x50);
  uVar8 = *(uint *)(unaff_r31 + 0x5c);
  iVar1 = FUN_98016ed8(uVar10,uVar6 & 0xfffffff7);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + -0xb) & 2) != 0) {
      if ((*(byte *)(iVar1 + -0xb) & 8) == 0) {
        puVar3 = (ushort *)(iVar1 + -0x10) + (uint)*(ushort *)(iVar1 + -0x10) * 8 + -8;
      }
      else {
        puVar3 = (ushort *)(iVar1 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar4 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar4 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
    }
    uVar2 = uVar9;
    if (uVar8 <= uVar9) {
      uVar2 = uVar8;
    }
    FUN_9800e320(iVar1,uVar5,uVar2,in_r6);
    if ((uVar8 < uVar9) && ((uVar6 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(uVar10,uVar6,uVar5);
  }
  *(int *)(unaff_r31 + 0x164) = iVar1;
  if ((iVar1 == 0) && ((uVar6 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = 1;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = uVar7;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018198 @ 98018198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018198(void)

{
  int iVar1;
  uint uVar2;
  uint in_r6;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  undefined4 uVar5;
  uint uVar6;
  uint unaff_r26;
  undefined4 uVar7;
  ushort *unaff_r30;
  int unaff_r31;
  
  uVar7 = *(undefined4 *)(unaff_r31 + 0x154);
  uVar5 = *(undefined4 *)(unaff_r31 + 0x50);
  uVar6 = *(uint *)(unaff_r31 + 0x5c);
  iVar1 = FUN_98016ed8(uVar7,unaff_r23 & 0xfffffff7);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + -0xb) & 2) != 0) {
      if ((*(byte *)(iVar1 + -0xb) & 8) == 0) {
        puVar3 = (ushort *)(iVar1 + -0x10) + (uint)*(ushort *)(iVar1 + -0x10) * 8 + -8;
      }
      else {
        puVar3 = (ushort *)(iVar1 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar4 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar4 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
    }
    uVar2 = unaff_r26;
    if (uVar6 <= unaff_r26) {
      uVar2 = uVar6;
    }
    FUN_9800e320(iVar1,unaff_r20,uVar2,in_r6);
    if ((uVar6 < unaff_r26) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(uVar7,unaff_r23,unaff_r20);
  }
  *(int *)(unaff_r31 + 0x164) = iVar1;
  if ((iVar1 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = uVar5;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_980181c4 @ 980181a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_980181c4(void)

{
  int iVar1;
  uint uVar2;
  uint in_r6;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  undefined4 unaff_r27;
  ushort *unaff_r30;
  int unaff_r31;
  
  iVar1 = FUN_98016ed8(unaff_r27,unaff_r23 & 0xfffffff7);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + -0xb) & 2) != 0) {
      if ((*(byte *)(iVar1 + -0xb) & 8) == 0) {
        puVar3 = (ushort *)(iVar1 + -0x10) + (uint)*(ushort *)(iVar1 + -0x10) * 8 + -8;
      }
      else {
        puVar3 = (ushort *)(iVar1 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar4 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar4 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
    }
    uVar2 = unaff_r26;
    if (unaff_r25 <= unaff_r26) {
      uVar2 = unaff_r25;
    }
    FUN_9800e320(iVar1,unaff_r20,uVar2,in_r6);
    if ((unaff_r25 < unaff_r26) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(int *)(unaff_r31 + 0x164) = iVar1;
  if ((iVar1 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980181c4 @ 980181c4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980181c4(void)

{
  int iVar1;
  uint uVar2;
  uint in_r6;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  undefined4 unaff_r27;
  ushort *unaff_r30;
  int unaff_r31;
  
  iVar1 = FUN_98016ed8(unaff_r27,unaff_r23 & 0xfffffff7);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + -0xb) & 2) != 0) {
      if ((*(byte *)(iVar1 + -0xb) & 8) == 0) {
        puVar3 = (ushort *)(iVar1 + -0x10) + (uint)*(ushort *)(iVar1 + -0x10) * 8 + -8;
      }
      else {
        puVar3 = (ushort *)(iVar1 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar4 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar4 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
    }
    uVar2 = unaff_r26;
    if (unaff_r25 <= unaff_r26) {
      uVar2 = unaff_r25;
    }
    FUN_9800e320(iVar1,unaff_r20,uVar2,in_r6);
    if ((unaff_r25 < unaff_r26) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(int *)(unaff_r31 + 0x164) = iVar1;
  if ((iVar1 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980181d8 @ 980181d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980181d8(void)

{
  uint uVar1;
  uint in_r6;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r22;
  uint unaff_r23;
  undefined4 unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  undefined4 unaff_r27;
  int unaff_r29;
  ushort *unaff_r30;
  int unaff_r31;
  byte in_cr0;
  
  if (!(bool)(in_cr0 >> 1 & 1)) {
    if ((*(byte *)(unaff_r29 + -0xb) & 2) != 0) {
      if ((*(byte *)(unaff_r29 + -0xb) & 8) == 0) {
        puVar2 = (ushort *)(unaff_r29 + -0x10) + (uint)*(ushort *)(unaff_r29 + -0x10) * 8 + -8;
      }
      else {
        puVar2 = (ushort *)(unaff_r29 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
        puVar3 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
      }
      else {
        puVar3 = unaff_r30 + -0xc;
      }
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
    }
    uVar1 = unaff_r26;
    if (unaff_r25 <= unaff_r26) {
      uVar1 = unaff_r25;
    }
    FUN_9800e320(unaff_r29,unaff_r20,uVar1,in_r6);
    if ((unaff_r25 < unaff_r26) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0();
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(int *)(unaff_r31 + 0x164) = unaff_r29;
  if ((unaff_r29 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018330 @ 98018330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018bd8 @ 98018bd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018bd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


