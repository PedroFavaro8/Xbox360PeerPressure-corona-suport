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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98005e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x98005e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_91a19480)();
  return;
}


/* ==== FUN_98005e28 @ 98005e28 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98005e28(void)

{
                    /* WARNING: Could not recover jumptable at 0x98005e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_91a19480)();
  return;
}


/* ==== FUN_98005e60 @ 98005e60 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98005e60(int *param_1)

{
  if (_DAT_91a19488 != (code *)0x0) {
    (*_DAT_91a19488)();
  }
  (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_9800d3b8();
}


/* ==== FUN_98005ee0 @ 98005ee0 ==== */

ulonglong FUN_98005ee0(ulonglong param_1,ulonglong param_2)

{
  *(undefined4 *)param_1 = 0x91a00518;
  if ((param_2 & 1) != 0) {
    thunk_FUN_9800da80(param_1);
  }
  return param_1;
}


/* ==== FUN_98005f60 @ 98005f60 ==== */

uint FUN_98005f60(void)

{
  longlong lVar1;
  undefined4 in_stack_00000050;
  uint in_stack_00000054;
  
  lVar1 = func_0x98017f38(in_stack_00000050,0x3a4,&stack0x00000054);
  return -(uint)(lVar1 == 0) & in_stack_00000054;
}


/* ==== FUN_98005f90 @ 98005f90 ==== */

undefined8 FUN_98005f90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar3 = FUN_9800d24c();
  uVar9 = uVar3 + param_2;
  uVar6 = 0;
  if ((uVar3 & 0xffffffff) != (uVar9 & 0xffffffff)) {
    do {
      lVar7 = 3;
      puVar8 = (undefined4 *)&DAT_91a18040;
      do {
        pcVar2 = (char *)*puVar8;
        pcVar5 = pcVar2;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar10 = ZEXT48(pcVar5 + (-1 - (int)pcVar2));
        if ((uVar10 <= (uVar9 - uVar3 & 0xffffffff)) &&
           (uVar4 = func_0x98017f78(uVar3,pcVar2,uVar10), (uVar4 & 0xffffffff) == uVar10)) {
          if (*(char *)((int)uVar3 + -1) == '/') {
            uVar10 = uVar10 + 1;
            uVar3 = uVar3 - 1;
          }
          FUN_9800d9e0((uint *)uVar3,0,uVar10);
          uVar6 = 1;
          *(undefined1 *)(uint *)uVar3 = 1;
        }
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) != (uVar9 & 0xffffffff));
  }
  return uVar6;
}


/* ==== FUN_98006060 @ 98006060 ==== */

/* WARNING: Removing unreachable block (ram,0x980060a8) */

longlong FUN_98006060(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_50;
  int iStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar1 = ZEXT48(&stack0x00000000);
  lVar2 = uVar1 - 0x58;
  lVar3 = 7;
  do {
    lVar2 = lVar2 + 8;
    *(undefined8 *)lVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_40 = *param_2;
  local_50 = param_3;
  iStack_4c = param_4;
  local_44 = param_1;
  lVar2 = FUN_980086b0(uVar1 - 0x50,-0xf);
  if ((int)lVar2 == 0) {
    lVar3 = FUN_9800cae8(uVar1 - 0x50,4);
    if ((int)lVar3 == 1) {
      *param_2 = local_3c;
      lVar2 = FUN_98008650((int)&local_50);
    }
    else {
      FUN_98008650((int)&local_50);
      if (((int)lVar3 != -5) || (lVar2 = -3, iStack_4c != 0)) {
        lVar2 = lVar3;
      }
    }
  }
  return lVar2;
}


/* ==== FUN_98006138 @ 98006138 ==== */

/* WARNING: Removing unreachable block (ram,0x9800617c) */

undefined8
FUN_98006138(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar1 = ZEXT48(&stack0x00000000);
  lVar4 = uVar1 - 0x58;
  lVar5 = 7;
  do {
    lVar4 = lVar4 + 8;
    *(undefined8 *)lVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_40 = *param_2;
  local_50 = param_3;
  uStack_4c = param_4;
  local_44 = param_1;
  uVar2 = FUN_9800c7c0(uVar1 - 0x50,10,8,-0xf,9,0);
  if ((int)uVar2 == 0) {
    uVar3 = FUN_9800c8e0(uVar1 - 0x50,4);
    if ((int)uVar3 == 1) {
      *param_2 = local_3c;
      uVar2 = FUN_98008650((int)&local_50);
    }
    else {
      FUN_98008650((int)&local_50);
      uVar2 = 0xfffffffffffffffb;
      if ((int)uVar3 != 0) {
        uVar2 = uVar3;
      }
    }
  }
  return uVar2;
}


/* ==== FUN_98006210 @ 98006210 ==== */

undefined8 FUN_98006210(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar7;
  longlong lVar6;
  uint uVar8;
  undefined8 uVar9;
  uint local_40 [16];
  
  uVar3 = FUN_9800d250();
  uVar9 = 0;
  uVar5 = param_2;
  uVar4 = FUN_98005f90(uVar3,param_2);
  if ((uVar4 & 0xff) == 1) {
    return 1;
  }
  if ((param_2 & 0xffffffff) < 0x400a) {
    return 0;
  }
  iVar1 = (int)uVar3;
  if (*(short *)(iVar1 + 0x4000) != 0x1f8b) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x4002) != '\b') {
    return 0;
  }
  uVar5 = FUN_9800dae0(0x100000,uVar5,param_3,param_4);
  if (uVar5 == 0) {
    return 0;
  }
  puVar7 = (uint *)uVar5;
  FUN_9800d9e0(puVar7,0,0x100000);
  local_40[0] = 0x100000;
  uVar8 = (uint)(param_2 - 0x401a);
  lVar6 = FUN_98006060(puVar7,local_40,iVar1 + 0x400a,uVar8);
  uVar2 = local_40[0];
  if ((int)lVar6 == 0) {
    uVar4 = FUN_98005f90(uVar5,(ulonglong)local_40[0]);
    if ((uVar4 & 0xff) != 0) {
      FUN_9800d9e0((uint *)(iVar1 + 0x400a),0,param_2 - 0x401a);
      local_40[0] = uVar8;
      uVar3 = FUN_98006138((uint *)(iVar1 + 0x400a),local_40,puVar7,uVar2);
      if ((int)uVar3 != 0) goto LAB_980062fc;
    }
    uVar9 = 1;
  }
LAB_980062fc:
  FUN_9800da80(uVar5);
  return uVar9;
}


/* ==== FUN_98006310 @ 98006310 ==== */

undefined8 FUN_98006310(undefined4 *param_1,undefined4 *param_2)

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

ulonglong FUN_98006368(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int local_10 [4];
  
  uVar1 = 0;
  if (((param_1 & 0xffffffff) != 0) &&
     ((0x3fffffff < (param_1 & 0xffffffff) ||
      (uVar1 = FUN_98007f28((param_1 & 0x3fffffff) << 2,param_2,param_3,param_4),
      (uVar1 & 0xffffffff) == 0)))) {
    local_10[1] = 0;
    local_10[0] = -0x6e5ffac8;
    uVar1 = FUN_98005e60(local_10);
  }
  return uVar1;
}


/* ==== FUN_980063d0 @ 980063d0 ==== */

ulonglong FUN_980063d0(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int local_10 [4];
  
  uVar1 = 0;
  if (((param_1 & 0xffffffff) != 0) &&
     ((0xffffffff < (param_1 & 0xffffffff) ||
      (uVar1 = FUN_98007f28(param_1,param_2,param_3,param_4), (uVar1 & 0xffffffff) == 0)))) {
    local_10[1] = 0;
    local_10[0] = -0x6e5ffac8;
    uVar1 = FUN_98005e60(local_10);
  }
  return uVar1;
}


/* ==== FUN_98006438 @ 98006438 ==== */

void FUN_98006438(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_9800d25c();
  puVar2 = (uint *)uVar3;
  if (((param_2 & 0xff) != 0) && (0xf < puVar2[5])) {
    uVar1 = *puVar2;
    if ((param_3 & 0xffffffff) != 0) {
      FUN_9800d3f0(uVar3,(ulonglong)uVar1,param_3);
    }
    thunk_FUN_9800da80((ulonglong)uVar1);
  }
  puVar2[4] = (uint)param_3;
  puVar2[5] = 0xf;
  *(undefined1 *)((uint)param_3 + (int)puVar2) = 0;
  return;
}


/* ==== FUN_98006498 @ 98006498 ==== */

ulonglong FUN_98006498(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar1 = (uint *)param_1;
  uVar4 = (ulonglong)puVar1[4];
  if (uVar4 < (param_2 & 0xffffffff)) {
    uVar4 = 0xffffffff91a00000;
    FUN_98007d00(0xffffffff91a00554,param_2,param_3,param_4);
  }
  uVar4 = uVar4 - param_2;
  if ((uVar4 & 0xffffffff) < (param_3 & 0xffffffff)) {
    param_3 = uVar4;
  }
  if ((param_3 & 0xffffffff) != 0) {
    uVar3 = param_1;
    uVar2 = param_1;
    if (0xf < puVar1[5]) {
      uVar3 = (ulonglong)*puVar1;
      uVar2 = (ulonglong)*puVar1;
    }
    FUN_9800d920(uVar3 + param_2,uVar2 + param_2 + param_3,uVar4 - param_3);
    uVar5 = puVar1[4] - (int)param_3;
    puVar1[4] = uVar5;
    uVar4 = param_1;
    if (0xf < puVar1[5]) {
      uVar4 = (ulonglong)*puVar1;
    }
    *(undefined1 *)((int)uVar4 + uVar5) = 0;
  }
  return param_1;
}


/* ==== FUN_98006570 @ 98006570 ==== */

void FUN_98006570(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = FUN_9800d258();
  puVar2 = (uint *)uVar3;
  if ((param_2 & 0xffffffff | 0xf) < 0xffffffff) {
    uVar1 = puVar2[5];
    uVar4 = (ulonglong)(uVar1 >> 1);
    uVar5 = param_2 & 0xffffffff;
    param_2 = param_2 | 0xf;
    if (((uVar5 | 0xf) / 3 < uVar4) &&
       (param_2 = uVar4 + uVar1, (-uVar4 - 2 & 0xffffffff) < (ulonglong)uVar1)) {
      param_2 = 0xfffffffffffffffe;
    }
  }
  uVar4 = FUN_980063d0(param_2 + 1,0,param_3,param_4);
  if ((param_3 & 0xffffffff) != 0) {
    uVar5 = uVar3;
    if (0xf < puVar2[5]) {
      uVar5 = (ulonglong)*puVar2;
    }
    FUN_9800d3f0(uVar4,uVar5,param_3);
  }
  FUN_98006438(uVar3,1,0);
  *puVar2 = (uint)uVar4;
  puVar2[5] = (uint)param_2;
  puVar2[4] = (uint)param_3;
  if (0xf < (param_2 & 0xffffffff)) {
    uVar3 = uVar4;
  }
  *(undefined1 *)((int)uVar3 + (uint)param_3) = 0;
  return;
}


/* ==== FUN_98006640 @ 98006640 ==== */

longlong FUN_98006640(longlong param_1)

{
  FUN_98006438(param_1,0,0);
  FUN_98006438(param_1 + 0x1c,0,0);
  *(undefined8 *)((int)param_1 + 0x38) = 0;
  *(undefined1 *)((int)param_1 + 0x40) = 0;
  return param_1;
}


/* ==== FUN_98006698 @ 98006698 ==== */

void FUN_98006698(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar4;
  ulonglong uVar3;
  uint uVar5;
  
  puVar4 = (uint *)FUN_9800d258();
  if (0x3fffffff < (param_2 & 0xffffffff)) {
    FUN_98007cc8(0xffffffff91a0056c,param_2,param_3,param_4);
  }
  if ((ulonglong)(uint)((int)(puVar4[2] - *puVar4) >> 2) < (param_2 & 0xffffffff)) {
    uVar3 = FUN_98006368(param_2,0,param_3,param_4);
    FUN_9800d920(uVar3,(ulonglong)*puVar4,
                 ((ulonglong)(uint)((int)(puVar4[1] - *puVar4) >> 2) & 0x3fffffff) << 2);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    if ((ulonglong)uVar1 != 0) {
      thunk_FUN_9800da80((ulonglong)uVar1);
    }
    uVar5 = (uint)uVar3;
    *puVar4 = uVar5;
    puVar4[2] = (int)((param_2 & 0xffffffff) << 2) + uVar5;
    puVar4[1] = ((int)(uVar2 - uVar1) >> 2) * 4 + uVar5;
  }
  return;
}


/* ==== FUN_98006748 @ 98006748 ==== */

byte FUN_98006748(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  
  if (0xfffffffe < (param_2 & 0xffffffff)) {
    param_1 = FUN_98007cc8(0xffffffff91a00580,param_2,param_3,param_4);
  }
  puVar1 = (uint *)param_1;
  if ((ulonglong)puVar1[5] < (param_2 & 0xffffffff)) {
    FUN_98006570(param_1,param_2,(ulonglong)puVar1[4],param_4);
  }
  else if (((param_3 & 0xff) == 0) || (0xf < (param_2 & 0xffffffff))) {
    if ((param_2 & 0xffffffff) == 0) {
      puVar1[4] = 0;
      if (0xf < puVar1[5]) {
        param_1 = (ulonglong)*puVar1;
      }
      *(undefined1 *)param_1 = 0;
    }
  }
  else {
    uVar2 = (ulonglong)puVar1[4];
    if ((param_2 & 0xffffffff) < (ulonglong)puVar1[4]) {
      uVar2 = param_2;
    }
    FUN_98006438(param_1,1,uVar2);
  }
  return -(param_2 != 0) & 1;
}


/* ==== FUN_98006800 @ 98006800 ==== */

void FUN_98006800(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  
  puVar2 = (uint *)param_1;
  uVar1 = puVar2[4];
  if ((((ulonglong)uVar1 <= (param_2 & 0xffffffff)) &&
      ((ulonglong)puVar2[5] != (param_2 & 0xffffffff))) &&
     (bVar3 = FUN_98006748(param_1,param_2,1,param_4), bVar3 != 0)) {
    puVar2[4] = uVar1;
    if (0xf < puVar2[5]) {
      param_1 = (ulonglong)*puVar2;
    }
    *(undefined1 *)((int)param_1 + uVar1) = 0;
  }
  return;
}


/* ==== FUN_98006878 @ 98006878 ==== */

ulonglong FUN_98006878(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar3 = FUN_9800d254();
  puVar1 = (uint *)param_2;
  uVar8 = (ulonglong)puVar1[4];
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  if (uVar8 < (param_3 & 0xffffffff)) {
    uVar8 = 0xffffffff91a00000;
    FUN_98007d00(0xffffffff91a00554,param_2,param_3,param_4);
  }
  if ((uVar8 - param_3 & 0xffffffff) < (param_4 & 0xffffffff)) {
    param_4 = uVar8 - param_3;
  }
  puVar2 = (uint *)uVar3;
  uVar8 = (ulonglong)puVar2[4];
  if ((-uVar8 - 1 & 0xffffffff) <= (param_4 & 0xffffffff)) {
    uVar8 = 0xffffffff91a00000;
    FUN_98007cc8(0xffffffff91a00580,uVar5,uVar6,uVar7);
  }
  if ((param_4 & 0xffffffff) != 0) {
    bVar4 = FUN_98006748(uVar3,uVar8 + param_4,0,uVar7);
    if (bVar4 != 0) {
      if (0xf < puVar1[5]) {
        param_2 = (ulonglong)*puVar1;
      }
      uVar5 = uVar3;
      if (0xf < puVar2[5]) {
        uVar5 = (ulonglong)*puVar2;
      }
      FUN_9800d3f0(puVar2[4] + uVar5,param_2 + param_3,param_4);
      uVar9 = (uint)(uVar8 + param_4);
      puVar2[4] = uVar9;
      uVar5 = uVar3;
      if (0xf < puVar2[5]) {
        uVar5 = (ulonglong)*puVar2;
      }
      *(undefined1 *)((int)uVar5 + uVar9) = 0;
    }
  }
  return uVar3;
}


/* ==== FUN_98006970 @ 98006970 ==== */

ulonglong FUN_98006970(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar3;
  
  uVar1 = FUN_9800d258();
  puVar3 = (uint *)uVar1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar2 = FUN_98006310(puVar3,(undefined4 *)param_2);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = (ulonglong)puVar3[4];
    if ((-uVar2 - 1 & 0xffffffff) <= (param_3 & 0xffffffff)) {
      uVar2 = 0xffffffff91a00000;
      FUN_98007cc8(0xffffffff91a00580,uVar5,uVar6,param_4);
    }
    if ((param_3 & 0xffffffff) != 0) {
      bVar4 = FUN_98006748(uVar1,uVar2 + param_3,0,param_4);
      if (bVar4 != 0) {
        uVar5 = uVar1;
        if (0xf < puVar3[5]) {
          uVar5 = (ulonglong)*puVar3;
        }
        FUN_9800d3f0(puVar3[4] + uVar5,param_2,param_3);
        uVar7 = (uint)(uVar2 + param_3);
        puVar3[4] = uVar7;
        uVar5 = uVar1;
        if (0xf < puVar3[5]) {
          uVar5 = (ulonglong)*puVar3;
        }
        *(undefined1 *)((int)uVar5 + uVar7) = 0;
      }
    }
  }
  else {
    uVar5 = uVar1;
    if (0xf < puVar3[5]) {
      uVar5 = (ulonglong)*puVar3;
    }
    uVar1 = FUN_98006878(uVar1,uVar1,param_2 - uVar5,param_3);
  }
  return uVar1;
}


/* ==== FUN_98006a60 @ 98006a60 ==== */

void FUN_98006a60(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  piVar2 = (int *)param_1;
  uVar1 = piVar2[1] - *piVar2 >> 2;
  if ((0x3fffffffU - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    FUN_98007cc8(0xffffffff91a0056c,param_2,param_3,param_4);
    return;
  }
  uVar4 = (int)uVar1 + param_2;
  uVar1 = piVar2[2] - *piVar2 >> 2;
  if ((uVar4 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar3 = 0;
  if ((ulonglong)uVar1 <= (0x3fffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar3 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    uVar3 = uVar4;
  }
  FUN_98006698(param_1,uVar3,param_3,param_4);
  return;
}


/* ==== FUN_98006ad8 @ 98006ad8 ==== */

ulonglong FUN_98006ad8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_9800d258();
  puVar1 = (uint *)param_2;
  uVar4 = (ulonglong)puVar1[4];
  if (uVar4 < (param_3 & 0xffffffff)) {
    uVar4 = 0xffffffff91a00000;
    FUN_98007d00(0xffffffff91a00554,param_2,param_3,param_4);
  }
  uVar5 = uVar4 - param_3;
  if ((param_4 & 0xffffffff) < (uVar4 - param_3 & 0xffffffff)) {
    uVar5 = param_4;
  }
  if ((uVar2 & 0xffffffff) == (param_2 & 0xffffffff)) {
    FUN_98006498(uVar2,uVar5 + param_3,0xffffffffffffffff,param_4);
    FUN_98006498(uVar2,0,param_3,param_4);
  }
  else {
    bVar3 = FUN_98006748(uVar2,uVar5,0,param_4);
    if (bVar3 != 0) {
      if (0xf < puVar1[5]) {
        param_2 = (ulonglong)*puVar1;
      }
      puVar1 = (uint *)uVar2;
      uVar4 = uVar2;
      if (0xf < puVar1[5]) {
        uVar4 = (ulonglong)*puVar1;
      }
      FUN_9800d3f0(uVar4,param_2 + param_3,uVar5);
      puVar1[4] = (uint)uVar5;
      uVar4 = uVar2;
      if (0xf < puVar1[5]) {
        uVar4 = (ulonglong)*puVar1;
      }
      *(undefined1 *)((int)uVar4 + (uint)uVar5) = 0;
    }
  }
  return uVar2;
}


/* ==== FUN_98006bc0 @ 98006bc0 ==== */

void FUN_98006bc0(undefined8 param_1,undefined4 *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar2 = (uint *)param_1;
  puVar5 = (undefined4 *)puVar2[1];
  if ((puVar5 <= param_2) || (bVar3 = true, param_2 < (undefined4 *)*puVar2)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar1 = *puVar2;
    if (puVar5 == (undefined4 *)puVar2[2]) {
      FUN_98006a60(param_1,1,param_3,param_4);
    }
    puVar5 = (undefined4 *)puVar2[1];
    if (puVar5 == (undefined4 *)0x0) goto LAB_98006c70;
    uVar4 = *(undefined4 *)(((int)((int)param_2 - uVar1) >> 2) * 4 + *puVar2);
  }
  else {
    if (puVar5 == (undefined4 *)puVar2[2]) {
      FUN_98006a60(param_1,1,param_3,param_4);
    }
    puVar5 = (undefined4 *)puVar2[1];
    if (puVar5 == (undefined4 *)0x0) goto LAB_98006c70;
    uVar4 = *param_2;
  }
  *puVar5 = uVar4;
LAB_98006c70:
  puVar2[1] = puVar2[1] + 4;
  return;
}


/* ==== FUN_98006c98 @ 98006c98 ==== */

ulonglong FUN_98006c98(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar4;
  uint *puVar3;
  
  uVar1 = FUN_9800d25c();
  puVar3 = (uint *)uVar1;
  uVar2 = FUN_98006310(puVar3,(undefined4 *)param_2);
  if ((uVar2 & 0xff) == 0) {
    bVar4 = FUN_98006748(uVar1,param_3,0,param_4);
    if (bVar4 != 0) {
      uVar2 = uVar1;
      if (0xf < puVar3[5]) {
        uVar2 = (ulonglong)*puVar3;
      }
      FUN_9800d3f0(uVar2,param_2,param_3);
      puVar3[4] = (uint)param_3;
      uVar2 = uVar1;
      if (0xf < puVar3[5]) {
        uVar2 = (ulonglong)*puVar3;
      }
      *(undefined1 *)((int)uVar2 + (uint)param_3) = 0;
    }
  }
  else {
    uVar2 = uVar1;
    if (0xf < puVar3[5]) {
      uVar2 = (ulonglong)*puVar3;
    }
    uVar1 = FUN_98006ad8(uVar1,uVar1,param_2 - uVar2,param_3);
  }
  return uVar1;
}


/* ==== FUN_98006d58 @ 98006d58 ==== */

undefined8 FUN_98006d58(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  char *pcVar2;
  ulonglong uVar1;
  
  FUN_98006438(param_1,0,0);
  uVar1 = param_2;
  do {
    pcVar2 = (char *)uVar1;
    uVar1 = uVar1 + 1;
  } while (*pcVar2 != '\0');
  FUN_98006c98(param_1,param_2,(uVar1 - param_2) - 1 & 0xffffffff,param_4);
  return param_1;
}


/* ==== FUN_98006dc8 @ 98006dc8 ==== */

ulonglong FUN_98006dc8(undefined8 param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_9800d25c();
  if ((uVar2 & 0xffffffff) != (param_2 & 0xffffffff)) {
    FUN_98006438(uVar2,1,0);
    puVar1 = (undefined4 *)param_2;
    puVar3 = (undefined4 *)uVar2;
    if ((uint)puVar1[5] < 0x10) {
      FUN_9800d920(uVar2,param_2,(ulonglong)(uint)puVar1[4] + 1);
    }
    else {
      *puVar3 = *puVar1;
      *puVar1 = 0;
    }
    puVar3[4] = puVar1[4];
    puVar3[5] = puVar1[5];
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return uVar2;
}


/* ==== FUN_98006e48 @ 98006e48 ==== */

ulonglong FUN_98006e48(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char *pcVar4;
  ulonglong uVar3;
  
  uVar1 = FUN_9800d25c();
  uVar2 = 0;
  FUN_98006438(uVar1,0,0);
  uVar3 = param_2;
  do {
    pcVar4 = (char *)uVar3;
    uVar3 = uVar3 + 1;
  } while (*pcVar4 != '\0');
  FUN_98006800(uVar1,((uVar3 - param_2) - 1 & 0xffffffff) +
                     (ulonglong)*(uint *)((int)param_3 + 0x10),uVar2,param_4);
  uVar3 = param_2;
  do {
    pcVar4 = (char *)uVar3;
    uVar3 = uVar3 + 1;
  } while (*pcVar4 != '\0');
  FUN_98006970(uVar1,param_2,(uVar3 - param_2) - 1 & 0xffffffff,param_4);
  FUN_98006878(uVar1,param_3,0,0xffffffffffffffff);
  return uVar1;
}


/* ==== FUN_98006ee8 @ 98006ee8 ==== */

ulonglong FUN_98006ee8(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (*(char *)param_2 == '\"') {
    param_2 = param_2 + 1;
  }
  FUN_98006d58(param_1,param_2,param_3,param_4);
  puVar2 = (uint *)param_1;
  uVar1 = puVar2[4];
  uVar3 = (ulonglong)uVar1;
  if (uVar3 != 0) {
    iVar4 = uVar1 - 1;
    if (uVar1 <= uVar1 - 1) {
      FUN_98007d00(0xffffffff91a00554,param_2,param_3,param_4);
    }
    uVar5 = param_1;
    if (0xf < puVar2[5]) {
      uVar5 = (ulonglong)*puVar2;
    }
    if (*(char *)((int)uVar5 + iVar4) == '\"') {
      FUN_98006498(param_1,uVar3 - 1,0xffffffffffffffff,param_4);
    }
  }
  return param_1;
}


/* ==== FUN_98006f88 @ 98006f88 ==== */

void FUN_98006f88(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar7;
  ulonglong uVar6;
  ulonglong uVar8;
  uint local_80;
  uint local_6c;
  uint uVar5;
  
  uVar8 = ZEXT48(&stack0x00000000);
  if ((param_2 & 0xffffffff) == 0) {
    if (((param_3 & 0xffffffff) == 0) && ((param_4 & 0xffffffff) == 0)) {
      if (param_1[1] == 0) {
        return;
      }
      FUN_98006bc0((ulonglong)*param_1,param_1 + 1,param_3,param_4);
      param_1[1] = 0;
      return;
    }
  }
  else if (((param_3 & 0xffffffff) == 0) && ((param_4 & 0xffffffff) == 0)) {
    pcVar7 = &DAT_91a005ec;
    uVar8 = param_2;
    do {
      cVar1 = *(char *)uVar8;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      uVar8 = uVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      return;
    }
    uVar8 = FUN_98007f28(0x48,param_2,param_3,param_4);
    if ((uVar8 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      lVar3 = FUN_98006640(uVar8);
      uVar5 = (uint)lVar3;
    }
    param_1[1] = uVar5;
    return;
  }
  pcVar7 = &DAT_91a005ec;
  do {
    cVar1 = *(char *)param_2;
    cVar2 = *pcVar7;
    if (cVar1 == '\0') break;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 != cVar2) {
    return;
  }
  pcVar7 = &DAT_91a005e4;
  uVar6 = param_3;
  do {
    cVar1 = *(char *)uVar6;
    cVar2 = *pcVar7;
    if (cVar1 == '\0') break;
    uVar6 = uVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar6 = FUN_98006ee8(uVar8 - 0x60,param_4,param_3,param_4);
    FUN_98006dc8((ulonglong)param_1[1],uVar6);
    lVar3 = uVar8 - 0x60;
  }
  else {
    pcVar7 = &DAT_91a005d8;
    uVar6 = param_3;
    do {
      cVar1 = *(char *)uVar6;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      uVar6 = uVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar6 = FUN_98006ee8(uVar8 - 0x40,param_4,param_3,param_4);
      FUN_98006dc8((ulonglong)param_1[1] + 0x1c,uVar6);
      lVar3 = uVar8 - 0x40;
    }
    else {
      pcVar7 = &DAT_91a005cc;
      uVar6 = param_3;
      do {
        cVar1 = *(char *)uVar6;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        uVar6 = uVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar4 = FUN_9800de68(param_4,0,0x10);
        *(undefined8 *)(param_1[1] + 0x38) = uVar4;
        return;
      }
      pcVar7 = &DAT_91a005b8;
      uVar6 = param_3;
      do {
        cVar1 = *(char *)uVar6;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        uVar6 = uVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        return;
      }
      FUN_98006ee8(uVar8 - 0x80,param_4,param_3,param_4);
      uVar6 = (ulonglong)local_80;
      if (local_6c < 0x10) {
        uVar6 = uVar8 - 0x80;
      }
      pcVar7 = &DAT_91a00590;
      do {
        cVar1 = *(char *)uVar6;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        uVar6 = uVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        *(undefined1 *)(param_1[1] + 0x40) = 1;
      }
      lVar3 = uVar8 - 0x80;
    }
  }
  FUN_98006438(lVar3,1,0);
  return;
}


/* ==== FUN_98007250 @ 98007250 ==== */

undefined8 FUN_98007250(ulonglong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint local_20 [4];
  
  local_20[0] = 0;
  uVar2 = 0;
  local_20[1] = 0;
  local_20[2] = param_2;
  FUN_98008350(param_1,local_20,(int *)(local_20 + 1));
  if (((param_1 & 0xff) != 0) &&
     (uVar1 = FUN_98008230((ulonglong)local_20[0],(undefined *)0x91a06188,
                           ZEXT48(&stack0x00000000) - 0x18), (uVar1 & 0xff) != 0)) {
    uVar2 = 1;
  }
  if (local_20[0] != 0) {
    func_0x98017f88();
  }
  return uVar2;
}


/* ==== FUN_980072d8 @ 980072d8 ==== */

undefined8 FUN_980072d8(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong in_r6;
  ulonglong uVar8;
  undefined8 uVar9;
  uint local_60;
  uint local_4c;
  
  uVar1 = ZEXT48(&stack0x00000000);
  lVar2 = FUN_9800d250();
  uVar9 = 0;
  FUN_98006e48(uVar1 - 0x60,0xffffffff91a0060c,lVar2 + 0x1c,in_r6);
  uVar3 = (ulonglong)local_60;
  if (local_4c < 0x10) {
    uVar3 = uVar1 - 0x60;
  }
  uVar3 = FUN_98007820(uVar3,0xffffffff80000000,0,0,3,0x80);
  if ((int)uVar3 != -1) {
    uVar4 = FUN_980077b8(uVar3,(undefined4 *)0x0);
    lVar5 = FUN_980075a0(uVar4 + 0x7f & 0xffffff80,-1,0x80,0x204);
    if (lVar5 != 0) {
      uVar8 = uVar1 - 0x70;
      uVar6 = FUN_98007638(uVar3,lVar5,uVar4,uVar8,0);
      if ((int)uVar6 != 0) {
        uVar3 = 0x10;
        iVar7 = func_0x98017f78(uVar4 + lVar5 + -0x10,0xffffffff91a005f8);
        if ((((iVar7 != 0x10) || (*(char *)((int)lVar2 + 0x40) != '\0')) ||
            (uVar3 = FUN_98006210(lVar5,uVar4,uVar3,uVar8), (uVar3 & 0xff) != 0)) &&
           ((uVar3 = *(ulonglong *)((int)lVar2 + 0x38), uVar3 == 0 ||
            ((uVar3 & 0x8000000000000000) != 0)))) {
          func_0x98017f98(lVar5);
          FUN_98005e00();
          uVar9 = 1;
        }
      }
      FUN_98007628();
    }
    FUN_98007558();
  }
  FUN_98006438(uVar1 - 0x60,1,0);
  return uVar9;
}


/* ==== FUN_98007458 @ 98007458 ==== */

void FUN_98007458(void)

{
  byte *pbVar1;
  char cVar6;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  byte local_60;
  uint auStack_5f [19];
  
  local_60 = 0;
  FUN_9800d9e0(auStack_5f,0,0x40);
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  cVar6 = FUN_98005e28();
  if ((cVar6 != '\0') && (iVar5 = FUN_98005e10(), iVar5 == 0)) {
    uVar2 = FUN_98007250(0xffffffff91a00620,&local_70);
    uVar3 = (ulonglong)local_70;
    if (((uVar2 & 0xff) == 0) || (uVar3 == local_6c)) goto LAB_98007534;
    do {
      pbVar1 = (byte *)*(int *)uVar3;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar1 = *(byte **)pbVar1;
      }
      lVar4 = FUN_9800de70(pbVar1,&local_60,0x40);
      if ((int)lVar4 == 0) {
        FUN_980072d8();
        break;
      }
      uVar3 = uVar3 + 4;
    } while ((uVar3 & 0xffffffff) != (ulonglong)local_6c);
  }
  uVar3 = (ulonglong)local_70;
LAB_98007534:
  if (uVar3 != 0) {
    thunk_FUN_9800da80(uVar3);
  }
  return;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_980075a0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  
  if (_DAT_91a19484 != 0) {
    param_4 = param_4 << 0x20 | param_4 & 0xdfffffff;
  }
  if ((int)param_2 == -1) {
    param_2 = 0;
    lVar1 = -1;
  }
  else {
    lVar1 = param_1 + param_2 + -1;
    param_3 = 0;
  }
  lVar1 = func_0x98017fa8(0,param_1,param_4,param_2,lVar1,param_3);
  if (lVar1 == 0) {
    thunk_FUN_98007a18(8);
  }
  return lVar1;
}


/* ==== FUN_98007628 @ 98007628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007628(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007638 @ 98007638 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_98007638(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
            ulonglong param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = FUN_9800d258();
  puVar6 = (undefined4 *)param_4;
  if ((param_4 & 0xffffffff) != 0) {
    *puVar6 = 0;
  }
  if ((param_5 & 0xffffffff) == 0) {
    uVar4 = (**(code **)(_DAT_91a182ec + 0x10))(uVar2,0,0,0,&local_40,param_2,param_3,0);
    if (((uVar4 != 0x103) ||
        (uVar5 = func_0x98017fc8(uVar2,1,0,0), uVar4 = local_40, -1 < (int)uVar5)) &&
       (uVar5 = uVar4, -1 < (int)uVar4)) {
      *puVar6 = local_3c;
      return 1;
    }
    if (uVar5 == 0xc0000011) {
      *puVar6 = 0;
      return 1;
    }
    if ((uVar5 & 0xc0000000) == 0x80000000) {
      *puVar6 = local_3c;
    }
  }
  else {
    puVar1 = (undefined4 *)param_5;
    local_34 = puVar1[2];
    local_38 = puVar1[3];
    *puVar1 = 0x103;
    iVar3 = (**(code **)(_DAT_91a182ec + 0x10))
                      (uVar2,puVar1[4],0,-(ulonglong)((puVar1[4] & 1) == 0) & param_5,param_5,
                       param_2,param_3,&local_38);
    if ((-1 < iVar3) && (iVar3 != 0x103)) {
      if ((param_4 & 0xffffffff) != 0) {
        *puVar6 = puVar1[1];
      }
      return 1;
    }
    if ((iVar3 == -0x3fffffef) && ((param_4 & 0xffffffff) != 0)) {
      *puVar6 = 0;
    }
  }
  FUN_98007a30();
  return 0;
}


/* ==== FUN_980077b8 @ 980077b8 ==== */

ulonglong FUN_980077b8(undefined8 param_1,undefined4 *param_2)

{
  bool bVar2;
  ulonglong uVar1;
  undefined4 local_20;
  uint local_1c;
  
  bVar2 = FUN_98007a90(param_1,(undefined8 *)&local_20);
  if (bVar2) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_20;
    }
    uVar1 = (ulonglong)local_1c;
    if (local_1c == 0xffffffff) {
      thunk_FUN_98007a18(0);
      uVar1 = (ulonglong)local_1c;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


/* ==== FUN_98007820 @ 98007820 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_98007820(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5,ulonglong param_6)

{
  bool bVar1;
  int iVar3;
  longlong lVar2;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_60 [2];
  ushort local_58 [4];
  undefined1 auStack_50 [4];
  int local_4c;
  undefined4 local_48;
  ushort *local_44;
  undefined4 local_40;
  
  iVar3 = FUN_9800d250();
  if ((param_5 & 0xffffffff) == 1) {
    uVar5 = 2;
  }
  else if ((param_5 & 0xffffffff) == 2) {
    uVar5 = 5;
  }
  else if ((param_5 & 0xffffffff) == 3) {
    uVar5 = 1;
  }
  else if ((param_5 & 0xffffffff) == 4) {
    uVar5 = 3;
  }
  else if (((param_5 & 0xffffffff) != 5) || (uVar5 = 4, (param_2 & 0x40000000) == 0)) {
    FUN_98007a30();
    return 0xffffffffffffffff;
  }
  func_0x98017f68(local_58,iVar3);
  if ((local_58[0] < 2) || (bVar1 = true, *(char *)((uint)local_58[0] + iVar3 + -1) != '\\')) {
    bVar1 = false;
  }
  local_48 = 0xfffffffd;
  local_44 = local_58;
  local_40 = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    param_2 = param_2 | 0x10000;
  }
  lVar2 = (**(code **)(_DAT_91a182ec + 0xc))
                    (local_60,param_2 | 0x100080,&local_48,auStack_50,0,param_6 & 0x7fa7,param_3,
                     uVar5);
  if (lVar2 < 0) {
    FUN_98007a30();
    if ((int)lVar2 == -0x3fffffcb) {
      uVar4 = 0x50;
    }
    else {
      if ((int)lVar2 != -0x3fffff46) {
        return 0xffffffffffffffff;
      }
      uVar4 = 3;
      if (!bVar1) {
        uVar4 = 5;
      }
    }
    thunk_FUN_98007a18(uVar4);
    return 0xffffffffffffffff;
  }
  if ((((param_5 & 0xffffffff) == 2) && (local_4c == 3)) ||
     (((param_5 & 0xffffffff) == 4 && (local_4c == 1)))) {
    uVar4 = 0xb7;
  }
  else {
    uVar4 = 0;
  }
  thunk_FUN_98007a18(uVar4);
  return (ulonglong)local_60[0];
}


/* ==== FUN_98007a18 @ 98007a18 ==== */

void FUN_98007a18(undefined4 param_1)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98007a30 @ 98007a30 ==== */

void FUN_98007a30(void)

{
  undefined4 uVar1;
  int in_r13;
  
  uVar1 = func_0x98017fd8();
  if (*(int *)(in_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_98007a68 @ 98007a68 ==== */

undefined4 FUN_98007a68(void)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== thunk_FUN_98007a18 @ 98007a88 ==== */

void thunk_FUN_98007a18(undefined4 param_1)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98007a90 @ 98007a90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_98007a90(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [40];
  undefined8 local_28;
  
  iVar1 = (**(code **)(_DAT_91a182ec + 0x20))(param_1,auStack_60,auStack_50,0x38,0x22);
  if (-1 < iVar1) {
    *param_2 = local_28;
  }
  else {
    FUN_98007a30();
  }
  return -1 < iVar1;
}


/* ==== FUN_98007b00 @ 98007b00 ==== */

ulonglong FUN_98007b00(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar5;
  ulonglong uVar4;
  
  uVar1 = FUN_9800d25c();
  uVar2 = uVar1;
  uVar4 = param_2;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      pcVar5 = (char *)uVar4;
      uVar4 = uVar4 + 1;
    } while (*pcVar5 != '\0');
    uVar4 = ((uVar4 - param_2) - 1 & 0xffffffff) + 1;
    uVar2 = FUN_9800dae0(uVar4,param_2,param_3,param_4);
    *(undefined1 **)((int)uVar1 + 4) = (undefined1 *)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      iVar3 = FUN_9800dec0((undefined1 *)uVar2,uVar4,(char *)param_2);
      uVar2 = (ulonglong)iVar3;
      *(undefined1 *)((int)uVar1 + 8) = 1;
    }
  }
  return uVar2;
}


/* ==== FUN_98007b88 @ 98007b88 ==== */

void FUN_98007b88(undefined4 *param_1)

{
  *param_1 = 0x91a00698;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_9800da80((ulonglong)(uint)param_1[1]);
  }
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


/* ==== FUN_98007be0 @ 98007be0 ==== */

undefined8 FUN_98007be0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = 0x91a00698;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_98007b00(param_1,param_2,param_3,param_4);
  *puVar1 = 0x91a00698;
  return param_1;
}


/* ==== FUN_98007c40 @ 98007c40 ==== */

ulonglong FUN_98007c40(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    iVar1 = (int)param_1;
    if (*(char *)(iVar1 + 8) != '\0') {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 4));
    }
    *(undefined1 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    iVar2 = (int)param_2;
    if (*(char *)(iVar2 + 8) == '\0') {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
    }
    else {
      FUN_98007b00(param_1,(ulonglong)*(uint *)(iVar2 + 4),param_3,param_4);
    }
  }
  return param_1;
}


/* ==== FUN_98007cc8 @ 98007cc8 ==== */

void FUN_98007cc8(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  FUN_98007be0(ZEXT48(&stack0x00000000) - 0x20,param_1,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_9800df78();
}


/* ==== FUN_98007d00 @ 98007d00 ==== */

void FUN_98007d00(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  FUN_98007be0(ZEXT48(&stack0x00000000) - 0x20,param_1,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_9800df78();
}


/* ==== FUN_98007d80 @ 98007d80 ==== */

ulonglong FUN_98007d80(ulonglong param_1,ulonglong param_2)

{
  FUN_98007b88((undefined4 *)param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_9800da80(param_1);
  }
  return param_1;
}


/* ==== FUN_98007dd0 @ 98007dd0 ==== */

ulonglong FUN_98007dd0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = 0x91a00698;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_98007c40(param_1,param_2,param_3,param_4);
  *puVar1 = 0x91a00698;
  return param_1;
}


/* ==== FUN_98007e78 @ 98007e78 ==== */

ulonglong FUN_98007e78(ulonglong param_1,ulonglong param_2)

{
  *(undefined4 *)param_1 = 0x91a006a0;
  FUN_98007b88((undefined4 *)param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_9800da80(param_1);
  }
  return param_1;
}


/* ==== FUN_98007ed0 @ 98007ed0 ==== */

ulonglong FUN_98007ed0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = 0x91a00698;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_98007c40(param_1,param_2,param_3,param_4);
  *puVar1 = 0x91a006a0;
  return param_1;
}


/* ==== FUN_98007f28 @ 98007f28 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98007f28(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  do {
    uVar2 = FUN_9800dae0(param_1,param_2,param_3,param_4);
    if ((uVar2 & 0xffffffff) != 0) {
      return;
    }
    uVar1 = FUN_9800e1f8();
  } while ((int)uVar1 != 0);
  if ((_DAT_91a19498 & 1) == 0) {
    _DAT_91a19490 = 0x91a006a8;
    _DAT_91a19498 = _DAT_91a19498 | 1;
    _DAT_91a1948c = 0x91a006a0;
    DAT_91a19494 = 0;
    FUN_9800e1c0(0xffffffff91a17120,param_2,param_3,param_4);
  }
  FUN_98007ed0(ZEXT48(&stack0x00000000) - 0x20,0xffffffff91a1948c,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_9800df78();
}


/* ==== FUN_98007fe0 @ 98007fe0 ==== */

undefined8 FUN_98007fe0(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_98008028 @ 98008028 ==== */

undefined8
FUN_98008028(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  char cVar9;
  
  piVar1 = (int *)param_1;
  uVar2 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *(undefined4 *)param_4 = 0;
  uVar5 = ZEXT48((char *)*piVar1);
  cVar9 = *(char *)*piVar1;
  while ((lVar6 = (longlong)cVar9, lVar6 != 0 && ((cVar9 == ' ' || (cVar9 == '\t'))))) {
    uVar5 = uVar5 + 1;
    cVar9 = *(char *)uVar5;
  }
  if (cVar9 == '\0') {
    return 0;
  }
  pcVar4 = (char *)uVar5;
  if (cVar9 == ';') {
LAB_980081d0:
    if (cVar9 == '\r') goto LAB_980081d8;
  }
  else {
    if (cVar9 != '\r') {
      if (cVar9 != '\n') {
        if (cVar9 == '[') {
          lVar6 = uVar5 + 1;
          *param_2 = (char *)lVar6;
          cVar9 = *(char *)lVar6;
          while (cVar9 != ']') {
            if (cVar9 == '\0') {
              return 0;
            }
            if (cVar9 == '\n') {
              return 0;
            }
            lVar6 = lVar6 + 1;
            cVar9 = *(char *)lVar6;
          }
          uVar3 = lVar6 + 1;
          *(undefined1 *)lVar6 = 0;
        }
        else {
          *param_3 = pcVar4;
          cVar9 = *pcVar4;
          while( true ) {
            uVar3 = FUN_98007fe0(cVar9);
            piVar1 = (int *)param_1;
            if ((uVar3 & 0xff) != 1) break;
            uVar5 = uVar5 + 1;
            cVar9 = *(char *)uVar5;
          }
          pcVar4 = (char *)uVar5;
          cVar9 = *pcVar4;
          while (cVar9 != '=') {
            if (cVar9 == '\0') {
              return 0;
            }
            if (cVar9 == '\n') {
              return 0;
            }
            uVar5 = uVar5 + 1;
            cVar9 = *(char *)uVar5;
          }
          *pcVar4 = (char)uVar2;
          uVar3 = uVar5 + 1;
          cVar9 = *(char *)((int)uVar5 + 1);
          while ((cVar9 != '\0' && ((cVar9 == ' ' || (cVar9 == '\t'))))) {
            uVar3 = uVar3 + 1;
            cVar9 = *(char *)uVar3;
          }
          if (cVar9 == '\0') {
            return 0;
          }
          *(undefined4 *)param_4 = (int)uVar3;
        }
        cVar9 = *(char *)uVar3;
        while (((uVar5 = uVar3, cVar9 != '\n' && (uVar5 = uVar2, cVar9 != '\0')) && (cVar9 != '\n'))
              ) {
          uVar3 = uVar3 + 1;
          cVar9 = *(char *)uVar3;
        }
        puVar7 = (undefined1 *)uVar5;
        *piVar1 = (int)puVar7;
        if ((uVar5 & 0xffffffff) == 0) {
          return 1;
        }
        if (puVar7[-1] == '\r') {
          puVar7[-1] = (char)uVar2;
        }
        else {
          *puVar7 = (char)uVar2;
        }
        iVar8 = *piVar1 + 1;
        goto LAB_9800820c;
      }
      goto LAB_980081d0;
    }
LAB_980081d8:
    if (pcVar4[1] != '\n') {
      return 0;
    }
  }
  while (iVar8 = (int)lVar6, iVar8 != 10) {
    if ((iVar8 == 0) || (iVar8 == 10)) {
      iVar8 = 0;
      goto LAB_9800820c;
    }
    uVar5 = uVar5 + 1;
    lVar6 = (longlong)*(char *)uVar5;
  }
  iVar8 = (int)uVar5 + 1;
LAB_9800820c:
  *piVar1 = iVar8;
  return 1;
}


/* ==== FUN_98008230 @ 98008230 ==== */

undefined8 FUN_98008230(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char *pcVar3;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  int local_bc;
  int local_b8;
  int local_b4;
  char local_b0;
  uint auStack_af [31];
  undefined1 local_31;
  
  uVar1 = ZEXT48(&stack0x00000000);
  pcVar3 = (char *)FUN_9800d258();
  local_b0 = '\0';
  FUN_9800d9e0(auStack_af,0,0x7f);
  do {
    uVar2 = FUN_98008028(uVar1 - 0xc0,&local_b4,&local_bc,uVar1 - 0xb8);
    iVar4 = local_b4;
    if ((uVar2 & 0xff) == 0) {
      if (*pcVar3 != '\0') {
        return 0;
      }
      break;
    }
    if (local_b4 == 0) {
      if ((local_bc != 0) && (iVar4 = local_bc, iVar5 = local_b8, local_b8 != 0)) goto LAB_980082e8;
    }
    else {
      if (local_b0 != '\0') {
        (*(code *)param_2)(param_3,0,0,0);
      }
      FUN_9800e240(&local_b0,iVar4,0x80);
      local_31 = 0;
      iVar4 = 0;
      iVar5 = 0;
LAB_980082e8:
      (*(code *)param_2)(param_3,uVar1 - 0xb0,iVar4,iVar5);
    }
  } while (pcVar3 != (char *)0x0);
  if (local_b0 != '\0') {
    (*(code *)param_2)(param_3,0,0,0);
  }
  return 1;
}


/* ==== FUN_98008350 @ 98008350 ==== */

/* WARNING: Removing unreachable block (ram,0x98008518) */

longlong FUN_98008350(undefined8 param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  char *pcVar5;
  int iVar6;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar7;
  ulonglong uVar8;
  int local_a8 [2];
  undefined2 local_a0 [2];
  undefined2 local_9c;
  undefined2 local_9a;
  uint local_98;
  undefined2 *local_94;
  undefined4 local_90;
  undefined4 local_80;
  uint auStack_7c [10];
  uint local_54;
  longlong lStack_40;
  
  uVar4 = ZEXT48(&stack0x00000000);
  pcVar5 = (char *)FUN_9800d24c();
  local_a0[0] = 0;
  local_a8[0] = 0;
  local_9c = 0;
  local_9a = 0;
  bVar1 = false;
  local_80 = 0;
  FUN_9800d9e0(auStack_7c,0,0x34);
  uVar8 = 0;
  func_0x98017f68(uVar4 - 0xa0,pcVar5);
  local_98 = 0xfffffffd;
  if (pcVar5 != (char *)0x0) {
    local_98 = -(uint)(*pcVar5 != '\\') & 0xfffffffd;
  }
  local_90 = 0x40;
  local_94 = local_a0;
  iVar6 = FUN_98018068(uVar4 - 0xb0,0xffffffff80100080,(int)&local_98);
  if (iVar6 != 0) {
    return lStack_40;
  }
  lVar2 = FUN_98018018(0,uVar4 - 0xa8,(int)&local_80);
  if (lVar2 == 0) {
    uVar8 = thunk_FUN_980182a8();
    if (uVar8 == 0) {
      uVar3 = 0xffffffff91a00b10;
    }
    else {
      uVar7 = (uint)uVar8;
      uVar4 = FUN_98018058(0,0,0,0,local_a8,uVar7,(ulonglong)local_54,0);
      iVar6 = (int)uVar4;
      if ((uVar4 & 0xffffffff) == 0x103) {
        iVar6 = func_0x98017fc8(0,1,0,0);
      }
      if ((iVar6 == 0) && (-1 < local_a8[0])) {
        *(undefined1 *)(local_54 + uVar7) = 0;
        bVar1 = true;
        *param_2 = uVar7;
        *param_3 = local_54 + 1;
        goto LAB_980084f4;
      }
      uVar3 = 0xffffffff91a00ab8;
    }
  }
  else {
    uVar3 = 0xffffffff91a00b78;
  }
  func_0x98017f58(uVar3);
LAB_980084f4:
  if ((!bVar1) && ((uVar8 & 0xffffffff) != 0)) {
    func_0x98017f88(uVar8);
  }
  return lStack_40;
}


/* ==== FUN_98008528 @ 98008528 ==== */

longlong FUN_98008528(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar2 = FUN_9800d254();
  uVar13 = uVar2 & 0xffff;
  uVar2 = (uVar2 & 0xffffffff) >> 0x10;
  if ((param_2 & 0xffffffff) == 0) {
    lVar3 = 1;
  }
  else {
    uVar1 = param_3 + ((param_3 & 0xffffffff) / 0x15b0) * -0x15b0;
    uVar5 = param_3 & 0xffffffff;
    while (uVar5 != 0) {
      uVar5 = 0;
      if (7 < (uVar1 & 0xffffffff)) {
        lVar3 = 7 - param_2;
        do {
          pbVar4 = (byte *)param_2;
          uVar5 = uVar5 + 8;
          lVar6 = *pbVar4 + uVar13;
          lVar7 = (ulonglong)pbVar4[1] + lVar6;
          lVar8 = (ulonglong)pbVar4[2] + lVar7;
          param_2 = param_2 + 8;
          lVar9 = (ulonglong)pbVar4[3] + lVar8;
          lVar10 = (ulonglong)pbVar4[4] + lVar9;
          lVar11 = (ulonglong)pbVar4[5] + lVar10;
          lVar12 = (ulonglong)pbVar4[6] + lVar11;
          uVar13 = (ulonglong)pbVar4[7] + lVar12;
          uVar2 = uVar2 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + uVar13;
        } while ((lVar3 + param_2 & 0xffffffff) < (uVar1 & 0xffffffff));
      }
      if ((uVar5 & 0xffffffff) < (uVar1 & 0xffffffff)) {
        lVar3 = uVar1 - uVar5;
        do {
          pbVar4 = (byte *)param_2;
          param_2 = param_2 + 1;
          uVar13 = *pbVar4 + uVar13;
          uVar2 = uVar2 + uVar13;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      uVar13 = uVar13 + (longlong)(int)((uVar13 & 0xffffffff) / 0xfff1) * -0xfff1;
      uVar2 = uVar2 + (longlong)(int)((uVar2 & 0xffffffff) / 0xfff1) * -0xfff1;
      param_3 = param_3 - uVar1;
      uVar1 = 0x15b0;
      uVar5 = param_3;
    }
    lVar3 = (uVar2 & 0xffff) * 0x10000 + uVar13;
  }
  return lVar3;
}


/* ==== FUN_98008650 @ 98008650 ==== */

undefined8 FUN_98008650(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffe;
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_980086b0 @ 980086b0 ==== */

undefined8 FUN_980086b0(undefined8 param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  
  iVar2 = FUN_9800d25c();
  if (iVar2 == 0) {
    uVar1 = 0xfffffffffffffffe;
  }
  else if ((param_2 == 0xf) || (param_2 == -0xf)) {
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    if (*(int *)(iVar2 + 0x20) == 0) {
      *(undefined1 **)(iVar2 + 0x20) = &SUB_91a07840;
    }
    if (*(int *)(iVar2 + 0x24) == 0) {
      *(undefined4 *)(iVar2 + 0x24) = 0x91a07848;
    }
    puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x20))(*(undefined4 *)(iVar2 + 0x28),1,0xa0c4);
    if (puVar3 == (undefined4 *)0x0) {
      uVar1 = 0xfffffffffffffffc;
    }
    else {
      *(undefined4 **)(iVar2 + 0x1c) = puVar3;
      puVar3[0x82f] = param_2;
      *puVar3 = 0;
      puVar3[0x82b] = 0;
      uVar1 = 0;
      puVar3[0x82c] = 0;
      puVar3[0x82d] = 1;
      puVar3[0x82e] = 0;
      puVar3[0x2830] = 1;
    }
  }
  else {
    uVar1 = 0xffffffffffffd8f0;
  }
  return uVar1;
}


/* ==== FUN_980087a0 @ 980087a0 ==== */

longlong FUN_980087a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int aiStack_c30 [256];
  uint local_830 [256];
  uint local_430 [268];
  
  uVar2 = FUN_9800d254();
  uVar8 = 2;
  FUN_9800d9e0(local_830,0,0x800);
  if ((uVar2 & 0xffffffff) != 0) {
    lVar5 = param_2 + -4;
    uVar9 = uVar2;
    do {
      lVar5 = lVar5 + 4;
      uVar1 = *(ushort *)lVar5 & 0xff;
      uVar3 = *(ushort *)lVar5 >> 6 & 0x3fffffc;
      local_830[uVar1] = local_830[uVar1] + 1;
      *(int *)((int)local_430 + uVar3) = *(int *)((int)local_430 + uVar3) + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  puVar7 = local_430;
  do {
    if ((uVar2 & 0xffffffff) != (ulonglong)*puVar7) break;
    uVar8 = uVar8 - 1;
    puVar7 = puVar7 + -0x100;
  } while (1 < (uVar8 & 0xffffffff));
  uVar3 = 0;
  if ((uVar8 & 0xffffffff) != 0) {
    puVar7 = local_830;
    iVar4 = -0x400;
    lVar5 = param_2;
    do {
      param_2 = param_3;
      iVar6 = 0;
      lVar10 = 0x100;
      do {
        uVar1 = *puVar7;
        *(int *)(iVar4 + (int)puVar7) = iVar6;
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + uVar1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if ((uVar2 & 0xffffffff) != 0) {
        lVar10 = lVar5 + -4;
        uVar9 = uVar2;
        do {
          *(undefined4 *)
           (aiStack_c30[*(ushort *)((int)lVar10 + 4) >> (uVar3 & 0x3f) & 0xff] * 4 + (int)param_2) =
               *(undefined4 *)((int)lVar10 + 4);
          lVar10 = lVar10 + 4;
          uVar1 = *(ushort *)lVar10 >> (uVar3 & 0x3f) & 0xff;
          aiStack_c30[uVar1] = aiStack_c30[uVar1] + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar8 = uVar8 - 1;
      iVar4 = iVar4 + -0x400;
      uVar3 = uVar3 + 8;
      param_3 = lVar5;
      lVar5 = param_2;
    } while (uVar8 != 0);
  }
  return param_2;
}


/* ==== FUN_980088f8 @ 980088f8 ==== */

void FUN_980088f8(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort *puVar15;
  ulonglong uVar14;
  int iVar16;
  int iVar17;
  
  lVar3 = FUN_9800d258();
  iVar5 = (int)param_2;
  if (iVar5 != 0) {
    psVar4 = (short *)lVar3;
    if (iVar5 == 1) {
      *psVar4 = 1;
    }
    else {
      lVar9 = param_2 + -1;
      iVar16 = 0;
      iVar6 = 2;
      iVar17 = 1;
      *psVar4 = psVar4[2] + *psVar4;
      if (1 < (int)lVar9) {
        lVar11 = lVar3 + -4;
        lVar7 = lVar3 + 4;
        lVar13 = lVar3;
        do {
          lVar13 = lVar13 + 4;
          puVar15 = (ushort *)lVar13;
          iVar2 = (int)lVar11;
          if ((iVar6 < iVar5) &&
             (uVar1 = *(ushort *)((int)lVar7 + 4), uVar1 <= *(ushort *)(iVar2 + 4))) {
            *puVar15 = uVar1;
            iVar6 = iVar6 + 1;
            lVar7 = lVar7 + 4;
          }
          else {
            iVar16 = iVar16 + 1;
            *puVar15 = *(ushort *)(iVar2 + 4);
            *(short *)(iVar2 + 4) = (short)iVar17;
            lVar11 = lVar11 + 4;
          }
          if ((iVar6 < iVar5) &&
             ((iVar17 <= iVar16 || (*(ushort *)((int)lVar7 + 4) <= *(ushort *)((int)lVar11 + 4)))))
          {
            lVar7 = lVar7 + 4;
            iVar6 = iVar6 + 1;
            *puVar15 = *(short *)lVar7 + *puVar15;
          }
          else {
            iVar16 = iVar16 + 1;
            *puVar15 = *puVar15 + *(short *)((int)lVar11 + 4);
            lVar11 = lVar11 + 4;
            *(undefined2 *)lVar11 = (short)iVar17;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)lVar9);
      }
      uVar8 = param_2 - 2;
      *(undefined2 *)((int)((uVar8 & 0xffffffff) << 2) + (int)psVar4) = 0;
      if (-1 < param_2 + -3) {
        lVar11 = param_2 + -2;
        lVar7 = (param_2 - 2U & 0x3fffffff) * 4 + lVar3;
        do {
          iVar5 = (int)lVar7;
          lVar7 = lVar7 + -4;
          *(short *)lVar7 = psVar4[(uint)*(ushort *)(iVar5 + -4) * 2] + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar7 = 1;
      uVar10 = 0;
      do {
        uVar14 = 0;
        if (-1 < (int)uVar8) {
          lVar11 = (uVar8 & 0x3fffffff) * 4 + lVar3;
          do {
            if (*(ushort *)lVar11 != uVar10) break;
            uVar8 = uVar8 - 1;
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + -4;
          } while (-1 < (longlong)uVar8);
        }
        if ((int)uVar14 < (int)lVar7) {
          lVar7 = lVar7 - uVar14;
          uVar12 = lVar9 + 1;
          lVar9 = lVar9 - lVar7;
          lVar11 = (uVar12 & 0x3fffffff) * 4 + lVar3;
          do {
            lVar11 = lVar11 + -4;
            *(undefined2 *)lVar11 = (short)uVar10;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        lVar7 = (uVar14 & 0x7fffffff) << 1;
        uVar10 = uVar10 + 1;
      } while ((uVar14 & 0x7fffffff) != 0);
    }
  }
  return;
}


/* ==== FUN_98008ab8 @ 98008ab8 ==== */

void FUN_98008ab8(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5
                 )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar8;
  ushort *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int aiStack_a70 [36];
  uint auStack_9e0 [632];
  undefined2 uVar7;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar4 = FUN_9800d244();
  iVar2 = (int)(uVar6 - 0xac0);
  *(BADSPACEBASE **)iVar2 = register0x0000000c;
  FUN_9800d9e0((uint *)(iVar2 + 0x50),0,0x84);
  iVar5 = 0;
  iVar16 = (int)param_3;
  uVar15 = (uint)param_4;
  iVar3 = (int)lVar4;
  if (param_5 == 0) {
    lVar4 = param_2 * 0x240 + lVar4;
    uVar12 = 0;
    lVar13 = lVar4 + 0x8192;
    if (0 < iVar16) {
      lVar11 = uVar6 - 0x952;
      do {
        if (*(short *)lVar13 != 0) {
          *(short *)((int)lVar11 + 2) = *(short *)lVar13;
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 4;
          *(undefined2 *)lVar11 = (short)iVar5;
        }
        iVar5 = iVar5 + 1;
        lVar13 = lVar13 + 2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    lVar13 = FUN_980087a0(uVar12,uVar6 - 0x950,uVar6 - 0x4d0);
    iVar5 = FUN_980088f8(lVar13,uVar12);
    if (0 < (int)uVar12) {
      puVar9 = (ushort *)(iVar5 + -4);
      uVar17 = uVar12;
      do {
        puVar9 = puVar9 + 2;
        aiStack_a70[*puVar9] = aiStack_a70[*puVar9] + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    uVar17 = 0;
    if (1 < (int)uVar12) {
      uVar14 = param_4 + 1;
      if ((int)uVar14 < 0x21) {
        lVar8 = 0x21 - uVar14;
        iVar5 = (int)((param_4 & 0xffffffff) << 2);
        lVar11 = (uVar14 & 0x3fffffff) * 4 + (uVar6 - 0xac0) + 0x4c;
        do {
          lVar11 = lVar11 + 4;
          *(int *)((int)aiStack_a70 + iVar5) = *(int *)lVar11 + *(int *)((int)aiStack_a70 + iVar5);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (0 < (int)uVar15) {
        lVar11 = (param_4 & 0x3fffffff) * 4 + (uVar6 - 0xa6c);
        uVar14 = param_4;
        uVar18 = param_4;
        do {
          lVar11 = lVar11 + -4;
          iVar5 = (int)uVar14;
          uVar14 = uVar14 - 1;
          uVar17 = (uint)(*(int *)lVar11 << (uVar15 - iVar5 & 0x3f)) + uVar17;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      uVar14 = (ulonglong)(uint)(1 << (uVar15 & 0x3f));
      if ((uVar17 & 0xffffffff) != uVar14) {
        lVar11 = uVar17 - uVar14;
        iVar5 = (int)((param_4 & 0xffffffff) << 2);
        uVar17 = param_4 - 1;
        do {
          *(int *)((int)aiStack_a70 + iVar5) = *(int *)((int)aiStack_a70 + iVar5) + -1;
          if (0 < (int)uVar17) {
            lVar8 = (uVar17 & 0x3fffffff) * 4 + (uVar6 - 0xa70);
            uVar14 = uVar17;
            do {
              if (*(int *)lVar8 != 0) {
                iVar10 = (int)((uVar14 & 0x3fffffff) << 2);
                *(int *)((int)aiStack_a70 + iVar10) = *(int *)((int)aiStack_a70 + iVar10) + -1;
                *(int *)((int)aiStack_a70 + iVar10 + 4) =
                     *(int *)((int)aiStack_a70 + iVar10 + 4) + 2;
                break;
              }
              uVar14 = uVar14 - 1;
              lVar8 = lVar8 + -4;
            } while (0 < (longlong)uVar14);
          }
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    iVar5 = (int)param_2 * 0x120;
    FUN_9800d9e0((uint *)(iVar5 + iVar3 + 0x8f12),0,0x120);
    FUN_9800d9e0((uint *)((int)lVar4 + 0x8852),0,0x240);
    iVar10 = 1;
    if (0 < (int)uVar15) {
      lVar4 = uVar6 - 0xa6c;
      do {
        uVar6 = (ulonglong)*(uint *)lVar4;
        if (0 < (int)*(uint *)lVar4) {
          uVar17 = uVar12 & 0x3fffffff;
          uVar12 = uVar12 - uVar6;
          lVar11 = uVar17 * 4 + lVar13 + 2;
          do {
            lVar11 = lVar11 + -4;
            *(char *)((uint)*(ushort *)lVar11 + iVar5 + iVar3 + 0x8f12) = (char)iVar10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        iVar10 = iVar10 + 1;
        lVar4 = lVar4 + 4;
      } while (iVar10 <= (int)uVar15);
    }
  }
  else if (0 < iVar16) {
    do {
      bVar1 = *(byte *)((int)param_2 * 0x120 + iVar3 + 0x8f12 + iVar5);
      iVar5 = iVar5 + 1;
      aiStack_a70[bVar1] = aiStack_a70[bVar1] + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar10 = 0;
  iVar5 = 0;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  if (1 < (int)uVar15) {
    lVar4 = param_4 - 1;
    do {
      iVar5 = (*(int *)(iVar10 + iVar2 + 0x54) + iVar5) * 2;
      *(int *)(iVar10 + iVar2 + 0xe8) = iVar5;
      iVar10 = iVar10 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  lVar4 = 0;
  if (0 < iVar16) {
    do {
      bVar1 = *(byte *)((int)(param_2 * 0x120) + iVar3 + 0x8f12 + (int)lVar4);
      uVar15 = (uint)bVar1;
      uVar6 = 0;
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar12 = (ulonglong)auStack_9e0[uVar15];
        auStack_9e0[uVar15] = auStack_9e0[uVar15] + 1;
        if (bVar1 != 0) {
          do {
            uVar6 = (uVar6 & 0x7fffffff) << 1 | uVar12 & 0xffffffff00000001;
            uVar7 = (undefined2)uVar6;
            uVar15 = uVar15 - 1;
            uVar12 = uVar12 >> 1;
          } while (uVar15 != 0);
        }
        *(undefined2 *)((int)((param_2 * 0x120 + lVar4 + 0x4429U & 0xffffffff) << 1) + iVar3) =
             uVar7;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar16);
  }
  return;
}


/* ==== FUN_98008e18 @ 98008e18 ==== */

void FUN_98008e18(void)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar8;
  ulonglong uVar7;
  int iVar10;
  ulonglong uVar9;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  char cVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 local_2f0 [752];
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar6 = FUN_9800d234();
  lVar12 = uVar9 - 0x340;
  iVar10 = (int)lVar12;
  *(BADSPACEBASE **)iVar10 = register0x0000000c;
  iVar4 = (int)lVar6;
  *(undefined2 *)(iVar4 + 0x8392) = 1;
  uVar13 = 0xff;
  FUN_98008ab8(lVar6,0,0x120,0xf,0);
  FUN_98008ab8(lVar6,1,0x20,0xf,0);
  uVar17 = 0x11e;
  do {
    if (*(char *)(iVar4 + 0x8f11 + (int)uVar17) != '\0') break;
    uVar17 = uVar17 - 1;
  } while (0x101 < (int)uVar17);
  uVar16 = 0x1e;
  do {
    if (*(char *)(iVar4 + 0x9031 + (int)uVar16) != '\0') break;
    uVar16 = uVar16 - 1;
  } while (1 < (int)uVar16);
  FUN_9800d3f0(uVar9 - 0x1b0,lVar6 + 0x8f12,uVar17);
  FUN_9800d3f0(uVar17 + (uVar9 - 0x1b0),lVar6 + 0x9032,uVar16);
  puVar8 = (uint *)(iVar4 + 0x8612);
  uVar22 = 0;
  uVar19 = 0;
  uVar21 = 0;
  FUN_9800d9e0(puVar8,0,0x26);
  uVar7 = 0;
  if ((uVar16 + uVar17 & 0xffffffff) == 0) goto LAB_98009284;
  do {
    bVar1 = *(byte *)((int)uVar7 + iVar10 + 400);
    uVar18 = (uint)bVar1;
    iVar14 = (int)uVar22;
    if (uVar18 == 0) {
      if ((uVar21 & 0xffffffff) != 0) {
        if ((uVar21 & 0xffffffff) < 3) {
          iVar14 = (uVar13 + 0x4309) * 2;
          lVar11 = uVar22 + lVar12 + 0x4f;
          *(short *)(iVar14 + iVar4) = *(short *)(iVar14 + iVar4) + (short)uVar21;
          uVar23 = uVar21;
          uVar5 = uVar21 & 0xffffffff;
          while (uVar5 != 0) {
            lVar11 = lVar11 + 1;
            *(undefined1 *)lVar11 = (char)uVar13;
            uVar23 = uVar23 - 1;
            uVar5 = uVar23;
          }
          uVar22 = uVar21 + uVar22;
        }
        else {
          sVar2 = *(short *)(iVar4 + 0x8632);
          *(undefined1 *)(iVar14 + iVar10 + 0x50) = 0x10;
          uVar22 = uVar22 + 2;
          *(short *)(iVar4 + 0x8632) = sVar2 + 1;
          *(char *)(iVar14 + iVar10 + 0x51) = (char)uVar21 + -3;
        }
        uVar21 = 0;
      }
      uVar19 = uVar19 + 1;
      if ((uVar19 & 0xffffffff) == 0x8a) {
        sVar2 = *(short *)(iVar4 + 0x8636);
        uVar15 = 0x7f;
        uVar19 = 0;
        *(undefined1 *)((int)uVar22 + iVar10 + 0x50) = 0x12;
        *(short *)(iVar4 + 0x8636) = sVar2 + 1;
LAB_98009158:
        iVar14 = (int)uVar22;
        uVar22 = uVar22 + 2;
        *(undefined1 *)(iVar14 + iVar10 + 0x51) = uVar15;
      }
    }
    else {
      if ((uVar19 & 0xffffffff) != 0) {
        if ((uVar19 & 0xffffffff) < 3) {
          *(short *)puVar8 = *(short *)puVar8 + (short)uVar19;
          lVar11 = uVar22 + lVar12 + 0x4f;
          uVar23 = uVar19;
          uVar5 = uVar19 & 0xffffffff;
          while (uVar5 != 0) {
            lVar11 = lVar11 + 1;
            *(undefined1 *)lVar11 = 0;
            uVar23 = uVar23 - 1;
            uVar5 = uVar23;
          }
          uVar22 = uVar19 + uVar22;
        }
        else {
          if ((uVar19 & 0xffffffff) < 0xb) {
            sVar2 = *(short *)(iVar4 + 0x8634);
            cVar20 = (char)uVar19 + -3;
            local_2f0[iVar14] = 0x11;
            *(short *)(iVar4 + 0x8634) = sVar2 + 1;
          }
          else {
            sVar2 = *(short *)(iVar4 + 0x8636);
            cVar20 = (char)uVar19 + -0xb;
            local_2f0[iVar14] = 0x12;
            *(short *)(iVar4 + 0x8636) = sVar2 + 1;
          }
          *(char *)(iVar14 + iVar10 + 0x51) = cVar20;
          uVar22 = uVar22 + 2;
        }
        uVar19 = 0;
      }
      iVar14 = (int)uVar22;
      if (uVar18 == uVar13) {
        uVar21 = uVar21 + 1;
        if ((uVar21 & 0xffffffff) == 6) {
          uVar15 = 3;
          uVar21 = 0;
          *(short *)(iVar4 + 0x8632) = *(short *)(iVar4 + 0x8632) + 1;
          *(undefined1 *)(iVar14 + iVar10 + 0x50) = 0x10;
          goto LAB_98009158;
        }
      }
      else {
        if ((uVar21 & 0xffffffff) != 0) {
          if ((uVar21 & 0xffffffff) < 3) {
            iVar14 = (uVar13 + 0x4309) * 2;
            lVar11 = uVar22 + lVar12 + 0x4f;
            *(short *)(iVar14 + iVar4) = *(short *)(iVar14 + iVar4) + (short)uVar21;
            uVar23 = uVar21;
            uVar5 = uVar21 & 0xffffffff;
            while (uVar5 != 0) {
              lVar11 = lVar11 + 1;
              *(undefined1 *)lVar11 = (char)uVar13;
              uVar23 = uVar23 - 1;
              uVar5 = uVar23;
            }
            uVar22 = uVar21 + uVar22;
          }
          else {
            sVar2 = *(short *)(iVar4 + 0x8632);
            *(undefined1 *)(iVar14 + iVar10 + 0x50) = 0x10;
            uVar22 = uVar22 + 2;
            *(short *)(iVar4 + 0x8632) = sVar2 + 1;
            *(char *)(iVar14 + iVar10 + 0x51) = (char)uVar21 + -3;
          }
          uVar21 = 0;
        }
        iVar14 = (bVar1 + 0x4309) * 2;
        *(byte *)((int)uVar22 + iVar10 + 0x50) = bVar1;
        uVar22 = uVar22 + 1;
        *(short *)(iVar14 + iVar4) = *(short *)(iVar14 + iVar4) + 1;
      }
    }
    uVar7 = uVar7 + 1;
    uVar13 = uVar18;
  } while ((uVar7 & 0xffffffff) < (uVar16 + uVar17 & 0xffffffff));
  iVar14 = (int)uVar22;
  if ((uVar21 & 0xffffffff) == 0) {
    if ((uVar19 & 0xffffffff) == 0) goto LAB_98009284;
    if ((uVar19 & 0xffffffff) < 3) {
      *(short *)puVar8 = *(short *)puVar8 + (short)uVar19;
      lVar12 = uVar22 + lVar12 + 0x4f;
      uVar7 = uVar19;
      uVar21 = uVar19 & 0xffffffff;
      while (uVar21 != 0) {
        lVar12 = lVar12 + 1;
        *(undefined1 *)lVar12 = 0;
        uVar7 = uVar7 - 1;
        uVar21 = uVar7;
      }
      uVar22 = uVar19 + uVar22;
      goto LAB_98009284;
    }
    if ((uVar19 & 0xffffffff) < 0xb) {
      sVar2 = *(short *)(iVar4 + 0x8634);
      local_2f0[iVar14] = 0x11;
      *(short *)(iVar4 + 0x8634) = sVar2 + 1;
      *(char *)(iVar14 + 1 + iVar10 + 0x50) = (char)uVar19 + -3;
    }
    else {
      sVar2 = *(short *)(iVar4 + 0x8636);
      local_2f0[iVar14] = 0x12;
      *(short *)(iVar4 + 0x8636) = sVar2 + 1;
      *(char *)(iVar14 + 1 + iVar10 + 0x50) = (char)uVar19 + -0xb;
    }
  }
  else {
    if ((uVar21 & 0xffffffff) < 3) {
      iVar10 = (bVar1 + 0x4309) * 2;
      lVar12 = uVar22 + lVar12 + 0x4f;
      *(short *)(iVar10 + iVar4) = *(short *)(iVar10 + iVar4) + (short)uVar21;
      uVar7 = uVar21;
      uVar19 = uVar21 & 0xffffffff;
      while (uVar19 != 0) {
        lVar12 = lVar12 + 1;
        *(byte *)lVar12 = bVar1;
        uVar7 = uVar7 - 1;
        uVar19 = uVar7;
      }
      uVar22 = uVar21 + uVar22;
      goto LAB_98009284;
    }
    sVar2 = *(short *)(iVar4 + 0x8632);
    *(undefined1 *)(iVar14 + iVar10 + 0x50) = 0x10;
    *(short *)(iVar4 + 0x8632) = sVar2 + 1;
    *(char *)(iVar14 + iVar10 + 0x51) = (char)uVar21 + -3;
  }
  uVar22 = uVar22 + 2;
LAB_98009284:
  FUN_98008ab8(lVar6,2,0x13,7,0);
  uVar13 = *(uint *)(iVar4 + 0x44);
  uVar18 = uVar13 + 2;
  *(uint *)(iVar4 + 0x44) = uVar18;
  *(uint *)(iVar4 + 0x48) = 2 << (uVar13 & 0x3f) | *(uint *)(iVar4 + 0x48);
  while (7 < uVar18) {
    if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
      **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
    }
    uVar18 = *(int *)(iVar4 + 0x44) - 8;
    *(uint *)(iVar4 + 0x44) = uVar18;
    *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
  }
  uVar13 = *(uint *)(iVar4 + 0x44);
  uVar18 = uVar13 + 5;
  *(uint *)(iVar4 + 0x44) = uVar18;
  *(uint *)(iVar4 + 0x48) = (int)uVar17 + -0x101 << (uVar13 & 0x3f) | *(uint *)(iVar4 + 0x48);
  while (7 < uVar18) {
    if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
      **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
    }
    uVar18 = *(int *)(iVar4 + 0x44) - 8;
    *(uint *)(iVar4 + 0x44) = uVar18;
    *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
  }
  uVar13 = *(uint *)(iVar4 + 0x44);
  uVar18 = uVar13 + 5;
  *(uint *)(iVar4 + 0x44) = uVar18;
  *(uint *)(iVar4 + 0x48) = (int)uVar16 + -1 << (uVar13 & 0x3f) | *(uint *)(iVar4 + 0x48);
  while (7 < uVar18) {
    if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
      **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
    }
    uVar18 = *(int *)(iVar4 + 0x44) - 8;
    *(uint *)(iVar4 + 0x44) = uVar18;
    *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
  }
  lVar12 = 0x12;
  do {
    if (*(char *)((uint)*(byte *)((int)lVar12 + -0x6e5fec30) + iVar4 + 0x9152) != '\0') break;
    lVar12 = lVar12 + -1;
  } while (-1 < lVar12);
  iVar14 = (int)lVar12 + 1;
  iVar10 = 4;
  if (3 < iVar14) {
    iVar10 = iVar14;
  }
  uVar13 = *(uint *)(iVar4 + 0x44);
  uVar18 = uVar13 + 4;
  *(uint *)(iVar4 + 0x44) = uVar18;
  *(uint *)(iVar4 + 0x48) = iVar10 + -4 << (uVar13 & 0x3f) | *(uint *)(iVar4 + 0x48);
  while (7 < uVar18) {
    if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
      **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
    }
    uVar18 = *(int *)(iVar4 + 0x44) - 8;
    *(uint *)(iVar4 + 0x44) = uVar18;
    *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
  }
  iVar14 = 0;
  if (0 < iVar10) {
    do {
      uVar13 = *(uint *)(iVar4 + 0x44);
      uVar18 = uVar13 + 3;
      bVar1 = *(byte *)((uint)*(byte *)(iVar14 + -0x6e5fec30) + iVar4 + 0x9152);
      *(uint *)(iVar4 + 0x44) = uVar18;
      *(uint *)(iVar4 + 0x48) = (uint)bVar1 << (uVar13 & 0x3f) | *(uint *)(iVar4 + 0x48);
      while (7 < uVar18) {
        if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
          **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
          *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
        }
        uVar18 = *(int *)(iVar4 + 0x44) - 8;
        *(uint *)(iVar4 + 0x44) = uVar18;
        *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar10);
  }
  if ((uVar22 & 0xffffffff) != 0) {
    uVar17 = 0;
    lVar12 = uVar9 - 0x2f1;
    do {
      bVar1 = *(byte *)((int)lVar12 + 1);
      uVar9 = uVar17 + 1;
      uVar13 = *(uint *)(iVar4 + 0x44);
      lVar6 = lVar12 + 1;
      uVar18 = uVar13 + *(byte *)(iVar4 + 0x9152 + (uint)bVar1);
      uVar3 = *(ushort *)((bVar1 + 0x4669) * 2 + iVar4);
      *(uint *)(iVar4 + 0x44) = uVar18;
      *(uint *)(iVar4 + 0x48) = (uint)uVar3 << (uVar13 & 0x3f) | *(uint *)(iVar4 + 0x48);
      while (7 < uVar18) {
        if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
          **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
          *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
        }
        uVar18 = *(int *)(iVar4 + 0x44) - 8;
        *(uint *)(iVar4 + 0x44) = uVar18;
        *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
      }
      if (0xf < bVar1) {
        lVar6 = lVar12 + 2;
        uVar9 = uVar17 + 2;
        cVar20 = *(char *)(bVar1 + 0x91a014dc);
        *(uint *)(iVar4 + 0x48) =
             (uint)*(byte *)lVar6 << (*(uint *)(iVar4 + 0x44) & 0x3f) | *(uint *)(iVar4 + 0x48);
        uVar13 = *(uint *)(iVar4 + 0x44) + (int)cVar20;
        *(uint *)(iVar4 + 0x44) = uVar13;
        while (7 < uVar13) {
          if (*(undefined1 **)(iVar4 + 0x30) < *(undefined1 **)(iVar4 + 0x34)) {
            **(undefined1 **)(iVar4 + 0x30) = (char)*(undefined4 *)(iVar4 + 0x48);
            *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
          }
          uVar13 = *(int *)(iVar4 + 0x44) - 8;
          *(uint *)(iVar4 + 0x44) = uVar13;
          *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) >> 8;
        }
      }
      uVar17 = uVar9;
      lVar12 = lVar6;
    } while ((uVar9 & 0xffffffff) < (uVar22 & 0xffffffff));
  }
  return;
}


/* ==== FUN_98009660 @ 98009660 ==== */

void FUN_98009660(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_1 + 0x8f11;
  lVar5 = 0x90;
  do {
    lVar3 = lVar3 + 1;
    *(undefined1 *)lVar3 = 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar3 = param_1 + 0x8fa1;
  lVar5 = 0x70;
  do {
    lVar3 = lVar3 + 1;
    *(undefined1 *)lVar3 = 9;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar3 = param_1 + 0x9011;
  lVar5 = 0x18;
  do {
    lVar3 = lVar3 + 1;
    *(undefined1 *)lVar3 = 7;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar3 = param_1 + 0x9029;
  lVar5 = 8;
  do {
    lVar3 = lVar3 + 1;
    *(undefined1 *)lVar3 = 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = (int)param_1;
  FUN_9800d9e0((uint *)(iVar2 + 0x9032),5,0x20);
  FUN_98008ab8(param_1,0,0x120,0xf,1);
  FUN_98008ab8(param_1,1,0x20,0xf,1);
  uVar1 = *(uint *)(iVar2 + 0x44);
  uVar4 = uVar1 + 2;
  *(uint *)(iVar2 + 0x44) = uVar4;
  *(uint *)(iVar2 + 0x48) = 1 << (uVar1 & 0x3f) | *(uint *)(iVar2 + 0x48);
  while (7 < uVar4) {
    if (*(undefined1 **)(iVar2 + 0x30) < *(undefined1 **)(iVar2 + 0x34)) {
      **(undefined1 **)(iVar2 + 0x30) = (char)*(undefined4 *)(iVar2 + 0x48);
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    }
    uVar4 = *(int *)(iVar2 + 0x44) - 8;
    *(uint *)(iVar2 + 0x44) = uVar4;
    *(uint *)(iVar2 + 0x48) = *(uint *)(iVar2 + 0x48) >> 8;
  }
  return;
}


/* ==== FUN_980097b0 @ 980097b0 ==== */

byte FUN_980097b0(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar8 = FUN_9800d25c();
  uVar9 = 1;
  pbVar10 = (byte *)(iVar8 + 0x9272);
  if (pbVar10 < *(byte **)(iVar8 + 0x28)) {
    do {
      if (uVar9 == 1) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        uVar9 = (ulonglong)bVar1 | 0x100;
      }
      uVar5 = *(uint *)(iVar8 + 0x44);
      if ((uVar9 & 1) == 0) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        uVar3 = *(ushort *)((bVar1 + 0x4429) * 2 + iVar8);
        uVar13 = uVar5 + *(byte *)((uint)bVar1 + iVar8 + 0x8f12);
        *(uint *)(iVar8 + 0x44) = uVar13;
        *(uint *)(iVar8 + 0x48) = (uint)uVar3 << (uVar5 & 0x3f) | *(uint *)(iVar8 + 0x48);
        while (7 < uVar13) {
          if (*(undefined1 **)(iVar8 + 0x30) < *(undefined1 **)(iVar8 + 0x34)) {
            **(undefined1 **)(iVar8 + 0x30) = (char)*(undefined4 *)(iVar8 + 0x48);
            *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
          }
          uVar13 = *(int *)(iVar8 + 0x44) - 8;
          *(uint *)(iVar8 + 0x44) = uVar13;
          *(uint *)(iVar8 + 0x48) = *(uint *)(iVar8 + 0x48) >> 8;
        }
      }
      else {
        bVar1 = *pbVar10;
        bVar2 = pbVar10[2];
        pbVar7 = pbVar10 + 1;
        pbVar10 = pbVar10 + 3;
        uVar13 = (uint)CONCAT11(bVar2,*pbVar7);
        uVar3 = *(ushort *)((uint)bVar1 * 2 + -0x6e5ff430);
        uVar4 = *(ushort *)((uVar3 + 0x4429) * 2 + iVar8);
        uVar11 = uVar5 + *(byte *)((uint)uVar3 + iVar8 + 0x8f12);
        *(uint *)(iVar8 + 0x44) = uVar11;
        *(uint *)(iVar8 + 0x48) = (uint)uVar4 << (uVar5 & 0x3f) | *(uint *)(iVar8 + 0x48);
        while (7 < uVar11) {
          if (*(undefined1 **)(iVar8 + 0x30) < *(undefined1 **)(iVar8 + 0x34)) {
            **(undefined1 **)(iVar8 + 0x30) = (char)*(undefined4 *)(iVar8 + 0x48);
            *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
          }
          uVar11 = *(int *)(iVar8 + 0x44) - 8;
          *(uint *)(iVar8 + 0x44) = uVar11;
          *(uint *)(iVar8 + 0x48) = *(uint *)(iVar8 + 0x48) >> 8;
        }
        uVar5 = *(uint *)(iVar8 + 0x44);
        uVar12 = uVar5 + *(byte *)(bVar1 + 0x91a00dd0);
        uVar11 = *(uint *)((uint)*(byte *)(bVar1 + 0x91a00dd0) * 4 + -0x6e5fec18);
        *(uint *)(iVar8 + 0x44) = uVar12;
        *(uint *)(iVar8 + 0x48) = (uVar11 & bVar1) << (uVar5 & 0x3f) | *(uint *)(iVar8 + 0x48);
        while (7 < uVar12) {
          if (*(undefined1 **)(iVar8 + 0x30) < *(undefined1 **)(iVar8 + 0x34)) {
            **(undefined1 **)(iVar8 + 0x30) = (char)*(undefined4 *)(iVar8 + 0x48);
            *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
          }
          uVar12 = *(int *)(iVar8 + 0x44) - 8;
          *(uint *)(iVar8 + 0x44) = uVar12;
          *(uint *)(iVar8 + 0x48) = *(uint *)(iVar8 + 0x48) >> 8;
        }
        if (uVar13 < 0x200) {
          bVar1 = *(byte *)(uVar13 + 0x91a00ed0);
          bVar2 = *(byte *)(uVar13 + 0x91a010d0);
        }
        else {
          bVar1 = *(byte *)(bVar2 + 0x91a012d0);
          bVar2 = *(byte *)(bVar2 + 0x91a01350);
        }
        uVar5 = *(uint *)(iVar8 + 0x44);
        uVar3 = *(ushort *)((bVar1 + 0x4549) * 2 + iVar8);
        uVar11 = uVar5 + *(byte *)((uint)bVar1 + iVar8 + 0x9032);
        *(uint *)(iVar8 + 0x44) = uVar11;
        *(uint *)(iVar8 + 0x48) = (uint)uVar3 << (uVar5 & 0x3f) | *(uint *)(iVar8 + 0x48);
        while (7 < uVar11) {
          if (*(undefined1 **)(iVar8 + 0x30) < *(undefined1 **)(iVar8 + 0x34)) {
            **(undefined1 **)(iVar8 + 0x30) = (char)*(undefined4 *)(iVar8 + 0x48);
            *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
          }
          uVar11 = *(int *)(iVar8 + 0x44) - 8;
          *(uint *)(iVar8 + 0x44) = uVar11;
          *(uint *)(iVar8 + 0x48) = *(uint *)(iVar8 + 0x48) >> 8;
        }
        uVar5 = *(uint *)(iVar8 + 0x44);
        uVar12 = uVar5 + bVar2;
        uVar11 = *(uint *)((uint)bVar2 * 4 + -0x6e5fec18);
        *(uint *)(iVar8 + 0x44) = uVar12;
        *(uint *)(iVar8 + 0x48) = (uVar11 & uVar13) << (uVar5 & 0x3f) | *(uint *)(iVar8 + 0x48);
        while (7 < uVar12) {
          if (*(undefined1 **)(iVar8 + 0x30) < *(undefined1 **)(iVar8 + 0x34)) {
            **(undefined1 **)(iVar8 + 0x30) = (char)*(undefined4 *)(iVar8 + 0x48);
            *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
          }
          uVar12 = *(int *)(iVar8 + 0x44) - 8;
          *(uint *)(iVar8 + 0x44) = uVar12;
          *(uint *)(iVar8 + 0x48) = *(uint *)(iVar8 + 0x48) >> 8;
        }
      }
      uVar9 = uVar9 >> 1;
    } while (pbVar10 < *(byte **)(iVar8 + 0x28));
  }
  uVar5 = *(uint *)(iVar8 + 0x44);
  uVar13 = *(byte *)(iVar8 + 0x9012) + uVar5;
  *(uint *)(iVar8 + 0x44) = uVar13;
  *(uint *)(iVar8 + 0x48) =
       (uint)*(ushort *)(iVar8 + 0x8a52) << (uVar5 & 0x3f) | *(uint *)(iVar8 + 0x48);
  while( true ) {
    puVar6 = *(undefined1 **)(iVar8 + 0x30);
    if (uVar13 < 8) break;
    if (puVar6 < *(undefined1 **)(iVar8 + 0x34)) {
      *puVar6 = (char)*(undefined4 *)(iVar8 + 0x48);
      *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
    }
    uVar13 = *(int *)(iVar8 + 0x44) - 8;
    *(uint *)(iVar8 + 0x44) = uVar13;
    *(uint *)(iVar8 + 0x48) = *(uint *)(iVar8 + 0x48) >> 8;
  }
  return -(puVar6 < *(undefined1 **)(iVar8 + 0x34)) & 1;
}


/* ==== FUN_98009b70 @ 98009b70 ==== */

ulonglong FUN_98009b70(undefined8 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar5;
  int iVar4;
  longlong lVar6;
  uint *puVar7;
  uint uVar9;
  ulonglong uVar8;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  lVar3 = FUN_9800d244();
  piVar1 = (int *)lVar3;
  bVar5 = 0;
  if (((piVar1[2] & 0x80000U) == 0) ||
     (bVar2 = true, (uint)piVar1[9] < (uint)(piVar1[7] - piVar1[0x10]))) {
    bVar2 = false;
  }
  if ((*piVar1 == 0) &&
     (0x14ccb < ((ulonglong)*(uint *)piVar1[0x1f] - (ulonglong)(uint)piVar1[0x23] & 0xffffffff))) {
    uVar12 = (ulonglong)(uint)piVar1[0x1d] + (ulonglong)(uint)piVar1[0x23];
  }
  else {
    uVar12 = lVar3 + 0x39272;
  }
  piVar1[0xc] = (int)uVar12;
  piVar1[0x16] = 0;
  piVar1[0xd] = (int)uVar12 + 0x14cbc;
  piVar1[0x17] = 0;
  *(byte *)piVar1[0xb] = *(byte *)piVar1[0xb] >> (piVar1[0xe] & 0x3fU);
  piVar1[10] = piVar1[10] - ((uint)LZCOUNT(piVar1[0xe] + -8) >> 5);
  if (((piVar1[2] & 0x1000U) != 0) && (piVar1[0x19] == 0)) {
    lVar6 = 3;
    puVar7 = (uint *)&DAT_91a0142c;
    uVar9 = 0;
    do {
      if (*puVar7 == (piVar1[2] & 0xfffU)) break;
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar9 < 0xb);
    if (uVar9 < 2) {
      lVar6 = 0;
    }
    else if (uVar9 < 6) {
      lVar6 = 1;
    }
    else if (uVar9 == 6) {
      lVar6 = 2;
    }
    uVar9 = piVar1[0x11];
    uVar10 = uVar9 + 8;
    piVar1[0x11] = uVar10;
    piVar1[0x12] = 0x78 << (uVar9 & 0x3f) | piVar1[0x12];
    while (7 < uVar10) {
      if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
        *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
        piVar1[0xc] = piVar1[0xc] + 1;
      }
      uVar10 = piVar1[0x11] - 8;
      piVar1[0x11] = uVar10;
      piVar1[0x12] = (uint)piVar1[0x12] >> 8;
    }
    uVar9 = piVar1[0x11];
    uVar10 = uVar9 + 8;
    piVar1[0x11] = uVar10;
    piVar1[0x12] = ((int)((lVar6 << 6 | 0x7800U) / 0x1f) * 0x1f + 0x1fU & 0xff) << (uVar9 & 0x3f) |
                   piVar1[0x12];
    while (7 < uVar10) {
      if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
        *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
        piVar1[0xc] = piVar1[0xc] + 1;
      }
      uVar10 = piVar1[0x11] - 8;
      piVar1[0x11] = uVar10;
      piVar1[0x12] = (uint)piVar1[0x12] >> 8;
    }
  }
  uVar9 = piVar1[0x11];
  uVar10 = uVar9 + 1;
  piVar1[0x11] = uVar10;
  piVar1[0x12] = ((uint)LZCOUNT(param_2 + -4) >> 5) << (uVar9 & 0x3f) | piVar1[0x12];
  while (7 < uVar10) {
    if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
      *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
      piVar1[0xc] = piVar1[0xc] + 1;
    }
    uVar10 = piVar1[0x11] - 8;
    piVar1[0x11] = uVar10;
    piVar1[0x12] = (uint)piVar1[0x12] >> 8;
  }
  iVar4 = piVar1[0xc];
  uVar9 = piVar1[0x12];
  uVar10 = piVar1[0x11];
  if (bVar2) {
LAB_98009e94:
    if ((uint)(piVar1[7] - piVar1[0x10]) <= (uint)piVar1[9]) {
      piVar1[0xc] = iVar4;
      uVar11 = uVar10 + 2;
      piVar1[0x11] = uVar11;
      piVar1[0x12] = 0 << (uVar10 & 0x3f) | uVar9;
      while (7 < uVar11) {
        if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
          *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
          piVar1[0xc] = piVar1[0xc] + 1;
        }
        uVar11 = piVar1[0x11] - 8;
        piVar1[0x11] = uVar11;
        piVar1[0x12] = (uint)piVar1[0x12] >> 8;
      }
      uVar9 = piVar1[0x11];
      if (uVar9 != 0) {
        piVar1[0x11] = 8;
        piVar1[0x12] = 0 << (uVar9 & 0x3f) | piVar1[0x12];
        do {
          if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
            *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
            piVar1[0xc] = piVar1[0xc] + 1;
          }
          iVar4 = piVar1[0x11];
          piVar1[0x11] = iVar4 - 8U;
          piVar1[0x12] = (uint)piVar1[0x12] >> 8;
        } while (7 < iVar4 - 8U);
      }
      lVar6 = 2;
      do {
        uVar9 = piVar1[0x11];
        uVar10 = uVar9 + 0x10;
        piVar1[0x11] = uVar10;
        piVar1[0x12] = (uint)*(ushort *)((int)piVar1 + 0x3e) << (uVar9 & 0x3f) | piVar1[0x12];
        while (7 < uVar10) {
          if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
            *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
            piVar1[0xc] = piVar1[0xc] + 1;
          }
          uVar10 = piVar1[0x11] - 8;
          piVar1[0x11] = uVar10;
          piVar1[0x12] = (uint)piVar1[0x12] >> 8;
        }
        uVar9 = piVar1[0xf];
        lVar6 = lVar6 + -1;
        piVar1[0xf] = uVar9 ^ 0xffff;
      } while (lVar6 != 0);
      uVar10 = 0;
      if ((uVar9 ^ 0xffff) != 0) {
        do {
          uVar9 = piVar1[0x11];
          uVar11 = uVar9 + 8;
          bVar5 = *(byte *)((int)piVar1 + (piVar1[0x10] + uVar10 & 0x7fff) + 0x90);
          piVar1[0x11] = uVar11;
          piVar1[0x12] = (uint)bVar5 << (uVar9 & 0x3f) | piVar1[0x12];
          while (7 < uVar11) {
            if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
              *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
              piVar1[0xc] = piVar1[0xc] + 1;
            }
            uVar11 = piVar1[0x11] - 8;
            piVar1[0x11] = uVar11;
            piVar1[0x12] = (uint)piVar1[0x12] >> 8;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < (uint)piVar1[0xf]);
      }
      goto LAB_9800a0c0;
    }
  }
  else {
    if (((piVar1[2] & 0x40000U) == 0) && (0x2f < (uint)piVar1[0xf])) {
      FUN_98008e18();
    }
    else {
      FUN_98009660(lVar3);
    }
    bVar5 = FUN_980097b0();
    if ((piVar1[0xf] != 0) && ((uint)piVar1[0xf] <= (piVar1[0xc] - iVar4) + 1U)) goto LAB_98009e94;
  }
  if (bVar5 == 0) {
    piVar1[0xc] = iVar4;
    piVar1[0x12] = uVar9;
    piVar1[0x11] = uVar10;
    FUN_98009660(lVar3);
    FUN_980097b0();
  }
LAB_9800a0c0:
  if (param_2 != 0) {
    uVar9 = piVar1[0x11];
    if (param_2 == 4) {
      if (uVar9 != 0) {
        piVar1[0x11] = 8;
        piVar1[0x12] = 0 << (uVar9 & 0x3f) | piVar1[0x12];
        do {
          if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
            *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
            piVar1[0xc] = piVar1[0xc] + 1;
          }
          iVar4 = piVar1[0x11];
          piVar1[0x11] = iVar4 - 8U;
          piVar1[0x12] = (uint)piVar1[0x12] >> 8;
        } while (7 < iVar4 - 8U);
      }
      if ((piVar1[2] & 0x1000U) != 0) {
        uVar8 = (ulonglong)(uint)piVar1[6];
        lVar6 = 4;
        do {
          uVar9 = piVar1[0x11];
          uVar10 = uVar9 + 8;
          piVar1[0x11] = uVar10;
          piVar1[0x12] = (uint)(byte)(uVar8 >> 0x18) << (uVar9 & 0x3f) | piVar1[0x12];
          while (7 < uVar10) {
            if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
              *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
              piVar1[0xc] = piVar1[0xc] + 1;
            }
            uVar10 = piVar1[0x11] - 8;
            piVar1[0x11] = uVar10;
            piVar1[0x12] = (uint)piVar1[0x12] >> 8;
          }
          uVar8 = (uVar8 & 0xffffff) << 8;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      uVar11 = uVar9 + 3;
      uVar10 = 0;
      piVar1[0x11] = uVar11;
      piVar1[0x12] = 0 << (uVar9 & 0x3f) | piVar1[0x12];
      while (7 < uVar11) {
        if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
          *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
          piVar1[0xc] = piVar1[0xc] + 1;
        }
        uVar11 = piVar1[0x11] - 8;
        piVar1[0x11] = uVar11;
        piVar1[0x12] = (uint)piVar1[0x12] >> 8;
      }
      uVar9 = piVar1[0x11];
      if (uVar9 != 0) {
        piVar1[0x11] = 8;
        piVar1[0x12] = 0 << (uVar9 & 0x3f) | piVar1[0x12];
        do {
          if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
            *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
            piVar1[0xc] = piVar1[0xc] + 1;
          }
          iVar4 = piVar1[0x11];
          piVar1[0x11] = iVar4 - 8U;
          piVar1[0x12] = (uint)piVar1[0x12] >> 8;
        } while (7 < iVar4 - 8U);
      }
      lVar6 = 2;
      do {
        uVar9 = piVar1[0x11];
        uVar11 = uVar9 + 0x10;
        piVar1[0x11] = uVar11;
        piVar1[0x12] = uVar10 << (uVar9 & 0x3f) | piVar1[0x12];
        while (7 < uVar11) {
          if ((undefined1 *)piVar1[0xc] < (undefined1 *)piVar1[0xd]) {
            *(undefined1 *)piVar1[0xc] = (char)piVar1[0x12];
            piVar1[0xc] = piVar1[0xc] + 1;
          }
          uVar11 = piVar1[0x11] - 8;
          piVar1[0x11] = uVar11;
          piVar1[0x12] = (uint)piVar1[0x12] >> 8;
        }
        uVar10 = uVar10 ^ 0xffff;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  FUN_9800d9e0((uint *)((int)piVar1 + 0x8192),0,0x240);
  FUN_9800d9e0((uint *)((int)piVar1 + 0x83d2),0,0x40);
  iVar4 = piVar1[0xf];
  piVar1[0xe] = 8;
  piVar1[0x19] = piVar1[0x19] + 1;
  piVar1[0xf] = 0;
  piVar1[10] = (int)piVar1 + 0x9273;
  piVar1[0xb] = (int)piVar1 + 0x9272;
  piVar1[0x10] = iVar4 + piVar1[0x10];
  uVar8 = (uint)piVar1[0xc] - uVar12;
  if (uVar8 != 0) {
    if (*piVar1 == 0) {
      if ((uVar12 & 0xffffffff) == (lVar3 + 0x39272U & 0xffffffff)) {
        uVar12 = (ulonglong)*(uint *)piVar1[0x1f] - (ulonglong)(uint)piVar1[0x23];
        if ((uVar8 & 0xffffffff) < (uVar12 & 0xffffffff)) {
          uVar12 = uVar8;
        }
        FUN_9800d3f0((ulonglong)(uint)piVar1[0x1d] + (ulonglong)(uint)piVar1[0x23],lVar3 + 0x39272U,
                     uVar12);
        piVar1[0x23] = piVar1[0x23] + (int)uVar12;
        if (uVar8 - uVar12 != 0) {
          piVar1[0x16] = (int)uVar12;
          piVar1[0x17] = (int)(uVar8 - uVar12);
        }
      }
      else {
        piVar1[0x23] = piVar1[0x23] + (int)uVar8;
      }
    }
    else {
      *(int *)piVar1[0x1e] = piVar1[0x21] - piVar1[0x1c];
      iVar4 = (*(code *)*piVar1)(lVar3 + 0x39272,uVar8,piVar1[1]);
      if (iVar4 == 0) {
        piVar1[0x1b] = -1;
        return 0xffffffffffffffff;
      }
    }
  }
  return (ulonglong)(uint)piVar1[0x17];
}


/* ==== FUN_9800a448 @ 9800a448 ==== */

void FUN_9800a448(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  int iVar10;
  longlong lVar11;
  char cVar12;
  char cVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar19;
  int iVar20;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar21;
  uint uVar24;
  uint uVar25;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  byte *pbVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint local_a0;
  
  lVar11 = FUN_9800d220();
  iVar5 = (int)lVar11;
  iVar2 = *(int *)(iVar5 + 0x80);
  local_a0 = *(uint *)(iVar5 + 0x88);
  pbVar29 = *(byte **)(iVar5 + 0x84);
  uVar28 = local_a0;
  while ((uVar28 != 0 || ((iVar2 != 0 && (*(int *)(iVar5 + 0x20) != 0))))) {
    iVar20 = *(int *)(iVar5 + 0x20);
    if ((uint)(*(int *)(iVar5 + 0x24) + iVar20) < 2) {
      while ((uVar28 != 0 && (*(uint *)(iVar5 + 0x20) < 0x102))) {
        local_a0 = uVar28 - 1;
        bVar1 = *pbVar29;
        pbVar29 = pbVar29 + 1;
        uVar28 = *(uint *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x1c) & 0x7fff;
        *(byte *)(uVar28 + iVar5 + 0x90) = bVar1;
        if (uVar28 < 0x101) {
          *(byte *)(uVar28 + iVar5 + 0x8090) = bVar1;
        }
        iVar20 = *(int *)(iVar5 + 0x20) + 1;
        *(int *)(iVar5 + 0x20) = iVar20;
        uVar28 = local_a0;
        if (2 < (uint)(*(int *)(iVar5 + 0x24) + iVar20)) {
          iVar20 = iVar20 + *(int *)(iVar5 + 0x1c);
          uVar25 = iVar20 - 3;
          uVar21 = uVar25 & 0x7fff;
          iVar20 = (((((uint)*(byte *)((iVar20 - 2U & 0x7fff) + iVar5 + 0x90) ^
                      (uint)*(byte *)(uVar21 + iVar5 + 0x90) << 5) << 5 ^ (uint)bVar1) & 0x7fff) +
                   0x14939) * 2;
          *(undefined2 *)((uVar21 + 0xc939) * 2 + iVar5) = *(undefined2 *)(iVar20 + iVar5);
          *(short *)(iVar20 + iVar5) = (short)uVar25;
        }
      }
    }
    else {
      uVar21 = *(int *)(iVar5 + 0x1c) + iVar20;
      uVar24 = uVar21 - 2;
      uVar15 = (ulonglong)*(byte *)((uVar24 & 0x7fff) + iVar5 + 0x90) << 5 ^
               (ulonglong)*(byte *)((uVar21 - 1 & 0x7fff) + iVar5 + 0x90);
      uVar25 = 0x102U - iVar20;
      if (uVar28 < 0x102U - iVar20) {
        uVar25 = uVar28;
      }
      pbVar19 = pbVar29 + uVar25;
      if (pbVar29 == (byte *)0x0) {
        pbVar19 = (byte *)0x0;
      }
      local_a0 = uVar28 - uVar25;
      *(uint *)(iVar5 + 0x20) = iVar20 + uVar25;
      uVar28 = local_a0;
      if (pbVar29 != pbVar19) {
        iVar20 = (int)pbVar19 - (int)pbVar29;
        do {
          uVar21 = uVar21 & 0x7fff;
          bVar1 = *pbVar29;
          pbVar29 = pbVar29 + 1;
          *(byte *)(iVar5 + 0x90 + uVar21) = bVar1;
          if (uVar21 < 0x101) {
            *(byte *)(uVar21 + iVar5 + 0x8090) = bVar1;
          }
          uVar25 = uVar24 & 0x7fff;
          uVar15 = (uVar15 << 5 ^ (ulonglong)bVar1) & 0x7fff;
          uVar9 = (undefined2)uVar24;
          uVar21 = uVar21 + 1;
          iVar26 = ((int)uVar15 + 0x14939) * 2;
          uVar24 = uVar24 + 1;
          *(undefined2 *)((uVar25 + 0xc939) * 2 + iVar5) = *(undefined2 *)(iVar26 + iVar5);
          *(undefined2 *)(iVar26 + iVar5) = uVar9;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
    }
    uVar15 = (ulonglong)*(uint *)(iVar5 + 0x20);
    uVar21 = (uint)(0x8000 - uVar15);
    if ((ulonglong)*(uint *)(iVar5 + 0x24) <= (0x8000 - uVar15 & 0xffffffff)) {
      uVar21 = *(uint *)(iVar5 + 0x24);
    }
    *(uint *)(iVar5 + 0x24) = uVar21;
    if ((iVar2 == 0) && (uVar15 < 0x102)) break;
    uVar25 = *(uint *)(iVar5 + 0x50);
    uVar32 = (ulonglong)uVar25;
    uVar30 = 1;
    uVar31 = 0;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 2;
    }
    uVar24 = *(uint *)(iVar5 + 8);
    uVar3 = *(uint *)(iVar5 + 0x1c);
    uVar34 = (ulonglong)uVar3;
    uVar8 = (ulonglong)uVar3 & 0x7fff;
    iVar20 = (int)uVar8;
    if ((uVar24 & 0x90000) == 0) {
      uVar17 = (ulonglong)uVar3 & 0x7fff;
      iVar4 = (int)uVar17;
      iVar26 = iVar4 + (int)uVar22 + iVar5;
      cVar12 = *(char *)(iVar26 + 0x90);
      lVar18 = lVar11 + 0x90 + uVar17;
      uVar33 = (ulonglong)*(uint *)((3 - ((uVar22 < 0x20) - 1)) * 4 + iVar5);
      cVar13 = *(char *)(iVar26 + 0x8f);
      uVar23 = uVar22;
      uVar35 = uVar22;
      if (uVar22 < uVar15) {
LAB_9800a7bc:
        uVar33 = uVar33 - 1;
        uVar22 = uVar23;
        if (((uVar33 != 0) &&
            (uVar17 = (ulonglong)*(ushort *)(((int)uVar17 + 0xc939) * 2 + iVar5), uVar17 != 0)) &&
           (uVar14 = uVar34 - uVar17 & 0xffff, uVar14 <= uVar21)) {
          iVar10 = (int)uVar35 + iVar5;
          uVar17 = uVar17 & 0x7fff;
          iVar26 = iVar10 + 0x90;
          iVar6 = (int)uVar17;
          if ((*(char *)(iVar26 + iVar6) == cVar12) &&
             (uVar28 = local_a0, *(char *)(iVar10 + iVar6 + 0x8f) == cVar13)) goto LAB_9800a8b8;
          uVar17 = (ulonglong)*(ushort *)((iVar6 + 0xc939) * 2 + iVar5);
          if ((uVar17 != 0) && (uVar14 = uVar34 - uVar17 & 0xffff, uVar14 <= uVar21)) {
            uVar17 = uVar17 & 0x7fff;
            iVar6 = (int)uVar17;
            if ((*(char *)(iVar26 + iVar6) == cVar12) &&
               (uVar28 = local_a0, *(char *)(iVar10 + iVar6 + 0x8f) == cVar13)) goto LAB_9800a8b8;
            uVar17 = (ulonglong)*(ushort *)((iVar6 + 0xc939) * 2 + iVar5);
            if ((uVar17 != 0) && (uVar14 = uVar34 - uVar17 & 0xffff, uVar14 <= uVar21))
            goto code_r0x9800a88c;
          }
        }
      }
      goto LAB_9800a744;
    }
    if ((uVar21 == 0) || ((uVar24 & 0x80000) != 0)) {
LAB_9800a744:
      if (((uVar22 & 0xffffffff) != 3) || (uVar31 < 0x2000)) goto LAB_9800a758;
LAB_9800a934:
      uVar22 = 0;
      uVar31 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar15 != 0) {
        do {
          if (*(char *)(iVar20 + iVar5 + 0x90 + (int)uVar22) !=
              *(char *)((iVar20 - 1U & 0x7fff) + iVar5 + 0x90)) break;
          uVar22 = uVar22 + 1;
        } while ((uVar22 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 0x20));
        if (2 < (uVar22 & 0xffffffff)) {
          uVar31 = 1;
          goto LAB_9800a744;
        }
      }
      uVar22 = 0;
LAB_9800a758:
      if ((uVar8 == uVar31) || (((uVar24 & 0x20000) != 0 && ((uVar22 & 0xffffffff) < 6))))
      goto LAB_9800a934;
    }
    iVar26 = (int)uVar22;
    if (uVar32 == 0) {
      if (uVar31 == 0) {
        if (0x80ff < uVar8) {
          iVar20 = 0x8100;
        }
        bVar1 = *(byte *)(iVar20 + iVar5 + 0x90);
        uVar21 = (uint)bVar1;
        *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + 1;
        **(byte **)(iVar5 + 0x28) = bVar1;
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
        **(byte **)(iVar5 + 0x2c) = **(byte **)(iVar5 + 0x2c) >> 1;
        lVar18 = (ulonglong)*(uint *)(iVar5 + 0x38) - 1;
        *(int *)(iVar5 + 0x38) = (int)lVar18;
        if (lVar18 == 0) {
          iVar20 = *(int *)(iVar5 + 0x28);
          *(undefined4 *)(iVar5 + 0x38) = 8;
          *(int *)(iVar5 + 0x28) = iVar20 + 1;
          *(int *)(iVar5 + 0x2c) = iVar20;
        }
      }
      else {
        if (((*(int *)(iVar5 + 0x14) == 0) && ((uVar24 & 0x10000) == 0)) &&
           ((uVar22 & 0xffffffff) < 0x80)) {
          if (0x80ff < uVar8) {
            iVar20 = 0x8100;
          }
          goto LAB_9800ac48;
        }
        uVar31 = uVar31 - 1;
        *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + iVar26;
        **(char **)(iVar5 + 0x28) = (char)uVar22 + -3;
        *(char *)(*(int *)(iVar5 + 0x28) + 1) = (char)uVar31;
        *(char *)(*(int *)(iVar5 + 0x28) + 2) = (char)(uVar31 >> 8);
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 3;
        **(byte **)(iVar5 + 0x2c) = **(byte **)(iVar5 + 0x2c) >> 1 | 0x80;
        lVar18 = (ulonglong)*(uint *)(iVar5 + 0x38) - 1;
        *(int *)(iVar5 + 0x38) = (int)lVar18;
        if (lVar18 == 0) {
          iVar20 = *(int *)(iVar5 + 0x28);
          *(undefined4 *)(iVar5 + 0x38) = 8;
          *(int *)(iVar5 + 0x28) = iVar20 + 1;
          *(int *)(iVar5 + 0x2c) = iVar20;
        }
        if ((uVar31 & 0xffffffff) < 0x200) {
          bVar1 = *(byte *)(((uint)uVar31 & 0x1ff) + 0x91a00ed0);
        }
        else {
          bVar1 = *(byte *)(((uint)(uVar31 >> 8) & 0x7f) + 0x91a012d0);
        }
        iVar20 = (bVar1 + 0x41e9) * 2;
        *(short *)(iVar20 + iVar5) = *(short *)(iVar20 + iVar5) + 1;
        uVar21 = (uint)*(ushort *)((int)((uVar22 - 3 & 0xffffffff) << 1) + -0x6e5ff430);
        uVar30 = uVar22;
      }
      iVar20 = (uVar21 + 0x40c9) * 2;
      *(short *)(iVar20 + iVar5) = *(short *)(iVar20 + iVar5) + 1;
    }
    else {
      if (uVar32 < (uVar22 & 0xffffffff)) {
        uVar21 = *(uint *)(iVar5 + 0x54);
        *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + 1;
        **(undefined1 **)(iVar5 + 0x28) = (char)uVar21;
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
        **(byte **)(iVar5 + 0x2c) = **(byte **)(iVar5 + 0x2c) >> 1;
        lVar18 = (ulonglong)*(uint *)(iVar5 + 0x38) - 1;
        *(int *)(iVar5 + 0x38) = (int)lVar18;
        if (lVar18 == 0) {
          iVar4 = *(int *)(iVar5 + 0x28);
          *(undefined4 *)(iVar5 + 0x38) = 8;
          *(int *)(iVar5 + 0x28) = iVar4 + 1;
          *(int *)(iVar5 + 0x2c) = iVar4;
        }
        iVar4 = ((uVar21 & 0xff) + 0x40c9) * 2;
        *(short *)(iVar4 + iVar5) = *(short *)(iVar4 + iVar5) + 1;
        if ((uVar22 & 0xffffffff) < 0x80) {
LAB_9800ac48:
          bVar1 = *(byte *)(iVar20 + iVar5 + 0x90);
          *(int *)(iVar5 + 0x4c) = (int)uVar31;
          *(int *)(iVar5 + 0x50) = iVar26;
          *(uint *)(iVar5 + 0x54) = (uint)bVar1;
          goto LAB_9800ad30;
        }
        uVar31 = uVar31 - 1;
        *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + iVar26;
        **(char **)(iVar5 + 0x28) = (char)uVar22 + -3;
        *(char *)(*(int *)(iVar5 + 0x28) + 1) = (char)uVar31;
        *(char *)(*(int *)(iVar5 + 0x28) + 2) = (char)(uVar31 >> 8);
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 3;
        **(byte **)(iVar5 + 0x2c) = **(byte **)(iVar5 + 0x2c) >> 1 | 0x80;
        lVar18 = (ulonglong)*(uint *)(iVar5 + 0x38) - 1;
        *(int *)(iVar5 + 0x38) = (int)lVar18;
        if (lVar18 == 0) {
          iVar20 = *(int *)(iVar5 + 0x28);
          *(undefined4 *)(iVar5 + 0x38) = 8;
          *(int *)(iVar5 + 0x28) = iVar20 + 1;
          *(int *)(iVar5 + 0x2c) = iVar20;
        }
        if ((uVar31 & 0xffffffff) < 0x200) {
          bVar1 = *(byte *)(((uint)uVar31 & 0x1ff) + 0x91a00ed0);
        }
        else {
          bVar1 = *(byte *)(((uint)(uVar31 >> 8) & 0x7f) + 0x91a012d0);
        }
        iVar20 = (bVar1 + 0x41e9) * 2;
        *(short *)(iVar20 + iVar5) = *(short *)(iVar20 + iVar5) + 1;
        iVar20 = (*(ushort *)((int)((uVar22 - 3 & 0xffffffff) << 1) + -0x6e5ff430) + 0x40c9) * 2;
        *(short *)(iVar20 + iVar5) = *(short *)(iVar20 + iVar5) + 1;
      }
      else {
        *(uint *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + uVar25;
        uVar21 = *(int *)(iVar5 + 0x4c) - 1;
        **(char **)(iVar5 + 0x28) = (char)uVar25 + -3;
        *(char *)(*(int *)(iVar5 + 0x28) + 1) = (char)uVar21;
        *(char *)(*(int *)(iVar5 + 0x28) + 2) = (char)(uVar21 >> 8);
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 3;
        **(byte **)(iVar5 + 0x2c) = **(byte **)(iVar5 + 0x2c) >> 1 | 0x80;
        lVar18 = (ulonglong)*(uint *)(iVar5 + 0x38) - 1;
        *(int *)(iVar5 + 0x38) = (int)lVar18;
        if (lVar18 == 0) {
          iVar20 = *(int *)(iVar5 + 0x28);
          *(undefined4 *)(iVar5 + 0x38) = 8;
          *(int *)(iVar5 + 0x28) = iVar20 + 1;
          *(int *)(iVar5 + 0x2c) = iVar20;
        }
        if (uVar21 < 0x200) {
          bVar1 = *(byte *)((uVar21 & 0x1ff) + 0x91a00ed0);
        }
        else {
          bVar1 = *(byte *)((uVar21 >> 8 & 0x7f) + 0x91a012d0);
        }
        iVar20 = (bVar1 + 0x41e9) * 2;
        *(short *)(iVar20 + iVar5) = *(short *)(iVar20 + iVar5) + 1;
        iVar20 = (*(ushort *)((int)((uVar32 - 3 & 0xffffffff) << 1) + -0x6e5ff430) + 0x40c9) * 2;
        *(short *)(iVar20 + iVar5) = *(short *)(iVar20 + iVar5) + 1;
        uVar22 = (ulonglong)*(uint *)(iVar5 + 0x50) - 1;
      }
      *(undefined4 *)(iVar5 + 0x50) = 0;
      uVar30 = uVar22;
    }
LAB_9800ad30:
    uVar15 = *(uint *)(iVar5 + 0x24) + uVar30;
    uVar27 = (undefined4)uVar15;
    *(int *)(iVar5 + 0x1c) = (int)uVar30 + *(int *)(iVar5 + 0x1c);
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) - (int)uVar30;
    if (0x7fff < (uVar15 & 0xffffffff)) {
      uVar27 = 0x8000;
    }
    *(undefined4 *)(iVar5 + 0x24) = uVar27;
    if (((lVar11 + 0x1926aU & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 0x28)) ||
       ((0x7c00 < *(uint *)(iVar5 + 0x3c) &&
        (((ulonglong)*(uint *)(iVar5 + 0x3c) <=
          (((ulonglong)*(uint *)(iVar5 + 0x28) - lVar11) * 0x73 - 0x41c936 & 0xffffffff) >> 7 ||
         ((*(uint *)(iVar5 + 8) & 0x80000) != 0)))))) {
      *(byte **)(iVar5 + 0x84) = pbVar29;
      *(uint *)(iVar5 + 0x88) = uVar28;
      uVar15 = FUN_98009b70(lVar11,0);
      if ((int)uVar15 != 0) {
LAB_9800add0:
        FUN_9800d270();
        return;
      }
    }
  }
  *(byte **)(iVar5 + 0x84) = pbVar29;
  *(uint *)(iVar5 + 0x88) = uVar28;
  goto LAB_9800add0;
code_r0x9800a88c:
  uVar17 = uVar17 & 0x7fff;
  if ((*(char *)(iVar26 + (int)uVar17) == cVar12) &&
     (*(char *)(iVar10 + (int)uVar17 + 0x8f) == cVar13)) {
LAB_9800a8b8:
    if (uVar14 == 0) goto LAB_9800a744;
    uVar22 = 0;
    if (uVar15 != 0) {
      lVar16 = lVar18;
      do {
        pcVar7 = (char *)lVar16;
        lVar16 = lVar16 + 1;
        if (*pcVar7 != pcVar7[((int)(lVar11 + 0x90) - (int)lVar18) + (int)uVar17]) break;
        uVar22 = uVar22 + 1;
      } while ((uVar22 & 0xffffffff) < uVar15);
      uVar28 = local_a0;
      if ((uVar35 & 0xffffffff) < (uVar22 & 0xffffffff)) {
        uVar31 = uVar14;
        if ((uVar22 & 0xffffffff) == uVar15) goto LAB_9800a744;
        iVar26 = iVar4 + iVar5;
        cVar12 = *(char *)(iVar26 + (int)uVar22 + 0x90);
        cVar13 = *(char *)(iVar26 + (int)uVar22 + 0x8f);
        uVar23 = uVar22;
        uVar35 = uVar22;
      }
    }
  }
  goto LAB_9800a7bc;
}


/* ==== FUN_9800ade8 @ 9800ade8 ==== */

undefined8 FUN_9800ade8(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar1 = (int)param_1;
  if (*(int **)(iVar1 + 0x78) != (int *)0x0) {
    **(int **)(iVar1 + 0x78) = *(int *)(iVar1 + 0x84) - *(int *)(iVar1 + 0x70);
  }
  if (*(uint **)(iVar1 + 0x7c) != (uint *)0x0) {
    uVar5 = (ulonglong)**(uint **)(iVar1 + 0x7c) - (ulonglong)*(uint *)(iVar1 + 0x8c);
    if ((ulonglong)*(uint *)(iVar1 + 0x5c) <= (uVar5 & 0xffffffff)) {
      uVar5 = (ulonglong)*(uint *)(iVar1 + 0x5c);
    }
    FUN_9800d3f0((ulonglong)*(uint *)(iVar1 + 0x74) + (ulonglong)*(uint *)(iVar1 + 0x8c),
                 (ulonglong)*(uint *)(iVar1 + 0x58) + param_1 + 0x39272,uVar5);
    iVar2 = (int)uVar5;
    iVar4 = iVar2 + *(int *)(iVar1 + 0x8c);
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + iVar2;
    *(int *)(iVar1 + 0x8c) = iVar4;
    *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) - iVar2;
    **(int **)(iVar1 + 0x7c) = iVar4;
  }
  if ((*(int *)(iVar1 + 0x60) == 0) || (uVar3 = 1, *(int *)(iVar1 + 0x5c) != 0)) {
    uVar3 = 0;
  }
  return uVar3;
}


/* ==== FUN_9800aec8 @ 9800aec8 ==== */

ulonglong FUN_9800aec8(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4,
                      int *param_5,int param_6)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar5;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  uVar4 = (ulonglong)(int)param_5;
  uVar2 = FUN_9800d254();
  piVar6 = (int *)param_3;
  piVar7 = (int *)uVar4;
  if ((uVar2 & 0xffffffff) == 0) {
    if ((param_3 & 0xffffffff) != 0) {
      *piVar6 = 0;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      *piVar7 = 0;
    }
  }
  else {
    piVar1 = (int *)uVar2;
    piVar1[0x1c] = (int)param_2;
    piVar1[0x1e] = (int)piVar6;
    piVar1[0x1d] = param_4;
    piVar1[0x1f] = (int)piVar7;
    piVar1[0x21] = (int)param_2;
    if ((param_3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    piVar1[0x20] = param_6;
    piVar1[0x23] = 0;
    piVar1[0x22] = iVar5;
    if ((param_4 != 0) || (bVar8 = false, (uVar4 & 0xffffffff) != 0)) {
      bVar8 = true;
    }
    if (((((*piVar1 != 0) != bVar8) && (piVar1[0x1b] == 0)) &&
        ((piVar1[0x1a] == 0 || (param_6 == 4)))) &&
       (((((param_3 & 0xffffffff) == 0 || (*piVar6 == 0)) || ((param_2 & 0xffffffff) != 0)) &&
        ((((uVar4 & 0xffffffff) == 0 || (*piVar7 == 0)) || (param_4 != 0)))))) {
      piVar1[0x1a] = (uint)(param_6 == 4) | piVar1[0x1a];
      if ((piVar1[0x17] == 0) && (piVar1[0x18] == 0)) {
        iVar5 = FUN_9800a448();
        if (iVar5 == 0) {
LAB_9800affc:
          return (ulonglong)(uint)piVar1[0x1b];
        }
        if (((piVar1[2] & 0x3000U) != 0) && ((param_2 & 0xffffffff) != 0)) {
          lVar3 = FUN_98008528((ulonglong)(uint)piVar1[6],param_2,(uint)piVar1[0x21] - param_2);
          piVar1[6] = (int)lVar3;
        }
        if ((((param_6 != 0) && (piVar1[8] == 0)) && (piVar1[0x22] == 0)) && (piVar1[0x17] == 0)) {
          uVar4 = FUN_98009b70(uVar2,param_6);
          if ((int)uVar4 < 0) goto LAB_9800affc;
          piVar1[0x18] = (uint)(param_6 == 4);
          if (param_6 == 3) {
            FUN_9800d9e0((uint *)((int)piVar1 + 0x29272),0,0x10000);
            FUN_9800d9e0((uint *)((int)piVar1 + 0x19272),0,0x10000);
            piVar1[9] = 0;
          }
        }
      }
      uVar2 = FUN_9800ade8(uVar2);
      piVar1[0x1b] = (int)uVar2;
      return uVar2;
    }
    if ((param_3 & 0xffffffff) != 0) {
      *piVar6 = 0;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      *piVar7 = 0;
    }
    piVar1[0x1b] = -2;
  }
  return 0xfffffffffffffffe;
}


/* ==== FUN_9800b0e8 @ 9800b0e8 ==== */

undefined8 FUN_9800b0e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = ((param_4 & 0xfff) + 2) / 3 + 1;
  param_1[5] = param_4 >> 0xe & 1;
  param_1[4] = (((int)param_4 >> 2 & 0x3ffU) + 2) / 3 + 1;
  if ((param_4 & 0x8000) == 0) {
    FUN_9800d9e0((uint *)((int)param_1 + 0x29272),0,0x10000);
  }
  param_1[0xb] = (undefined1 *)((int)param_1 + 0x9272);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x1a] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[10] = (int)param_1 + 0x9273;
  *(undefined1 *)((int)param_1 + 0x9272) = 0;
  param_1[0xc] = (int)param_1 + 0x39272;
  param_1[0xe] = 8;
  param_1[0xd] = (int)param_1 + 0x39272;
  param_1[0x1b] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[6] = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if ((param_4 & 0x8000) == 0) {
    FUN_9800d9e0(param_1 + 0x24,0,0x8101);
  }
  FUN_9800d9e0((uint *)((int)param_1 + 0x8192),0,0x240);
  FUN_9800d9e0((uint *)((int)param_1 + 0x83d2),0,0x40);
  return 0;
}


/* ==== FUN_9800b260 @ 9800b260 ==== */

uint FUN_9800b260(ulonglong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    uVar3 = 6;
  }
  else {
    uVar3 = param_1;
    if (10 < iVar1) {
      uVar3 = 10;
    }
  }
  uVar2 = *(uint *)(&DAT_91a0142c + (int)((uVar3 & 0xffffffff) << 2)) |
          -(uint)!CARRY8(3 - param_1,param_1 ^ 0x80000000) & 0x4000;
  if (0 < param_2) {
    uVar2 = uVar2 | 0x1000;
  }
  if (iVar1 == 0) {
    return uVar2 | 0x80000;
  }
  if (param_3 == 1) {
    return uVar2 | 0x20000;
  }
  if (param_3 != 2) {
    if (param_3 == 4) {
      return uVar2 | 0x40000;
    }
    if (param_3 == 3) {
      return uVar2 | 0x10000;
    }
    return uVar2;
  }
  return uVar2 & 0xfffff000;
}


/* ==== FUN_9800b318 @ 9800b318 ==== */

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

void FUN_9800b318(undefined8 param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4,
                 ulonglong param_5,uint *param_6,ulonglong param_7)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 uStack0000001c;
  undefined4 *puStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  uint *puStack0000003c;
  undefined4 uStack00000044;
  
  puStack00000024 = param_3;
  puStack0000003c = param_6;
  puVar2 = (uint *)FUN_9800d220();
  uStack0000002c = (undefined4)param_4;
  uStack00000034 = (undefined4)param_5;
  uStack00000044 = (undefined4)param_7;
  if ((param_7 & 4) == 0) {
    uVar3 = ((*puStack0000003c - param_4) + param_5) - 1;
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  uStack0000001c = param_2._4_4_;
  if (((uVar3 + 1 & uVar3) == 0) && ((param_4 & 0xffffffff) <= (param_5 & 0xffffffff))) {
    uVar1 = puVar2[1];
    if (*puVar2 < 0x36) {
                    /* WARNING: Could not emulate address calculation at 0x9800b46c */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(ushort *)(*puVar2 * 2 + -0x6e5feba8) + 0x91a0a688))
                (0xffffffffffffffff,0xffffffff91a00000,0xffffffff91a00000,0xffffffff91a014ec,
                 0xffffffff91a00000,0xffffffff91a015b8,0xffffffff91a00000,0xffffffff91a00000);
      return;
    }
    puVar2[1] = uVar1;
    puVar2[8] = puVar2[8];
    puVar2[9] = puVar2[9];
    puVar2[10] = puVar2[10];
    puVar2[0xf] = puVar2[0xf];
    puVar2[0xe] = puVar2[0xe] & ~(-1 << (uVar1 & 0x3f));
    *puStack00000024 = 0;
    *puStack0000003c = 0;
  }
  else {
    *puStack0000003c = 0;
    *puStack00000024 = 0;
  }
  FUN_9800d270();
  return;
}


/* ==== FUN_9800b4d0 @ 9800b4d0 ==== */

void FUN_9800b4d0(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  ulonglong uVar18;
  uint uVar21;
  longlong lVar19;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar20;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  longlong in_r11;
  undefined4 uVar32;
  int iVar33;
  ulonglong uVar29;
  longlong lVar30;
  short *psVar34;
  ulonglong uVar31;
  undefined1 *puVar35;
  int unaff_r14;
  int unaff_r15;
  int unaff_r16;
  int unaff_r17;
  uint unaff_r18;
  uint uVar36;
  int unaff_r19;
  int unaff_r20;
  int unaff_r21;
  uint unaff_r22;
  ulonglong uVar37;
  byte *pbVar38;
  undefined1 *puVar39;
  int iVar40;
  ulonglong unaff_r24;
  undefined4 uVar41;
  ulonglong unaff_r25;
  int unaff_r26;
  uint unaff_r27;
  uint unaff_r28;
  ulonglong uVar42;
  longlong unaff_r31;
  longlong lVar43;
  ulonglong uVar44;
  uint in_stack_00000050;
  undefined1 *in_stack_00000054;
  uint in_stack_00000058;
  undefined1 *in_stack_0000005c;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  uint in_stack_000001dc;
  int *in_stack_000001e4;
  uint in_stack_000001ec;
  byte *in_stack_000001f4;
  uint *in_stack_000001fc;
  uint in_stack_00000204;
  
  uVar36 = (uint)unaff_r25;
  uVar37 = in_r11 + 1;
  puVar5 = (undefined4 *)unaff_r31;
  puVar5[2] = (uint)*(byte *)in_r11;
  if ((uVar37 & 0xffffffff) < (ulonglong)in_stack_00000050) {
    bVar2 = *(byte *)uVar37;
    uVar21 = puVar5[2];
    uVar37 = in_r11 + 2;
    puVar5[3] = (uint)bVar2;
    uVar18 = ((ulonglong)uVar21 & 0xffffff) * 0x100 + (ulonglong)bVar2;
    if (((uVar18 != (uVar18 / 0x1f) * 0x1f) || ((bVar2 & 0x20) != 0)) ||
       (unaff_r24 = 0, (uVar21 & 0xf) != 8)) {
      unaff_r24 = (ulonglong)unaff_r22;
    }
    if (unaff_r26 == 0) {
      uVar21 = unaff_r22 << ((uVar21 >> 4) + 8 & 0x3f);
      if ((0x8000 < uVar21) || (uVar18 = 0, unaff_r28 < uVar21)) {
        uVar18 = (ulonglong)unaff_r22;
      }
      unaff_r24 = uVar18 | unaff_r24;
    }
    uVar41 = (undefined4)unaff_r24;
    if (unaff_r24 == 0) {
      do {
        for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
          if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
            uVar32 = 3;
            goto LAB_9800c5b0;
          }
          pbVar38 = (byte *)uVar37;
          uVar37 = uVar37 + 1;
          unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
        }
        uVar18 = unaff_r25 & 7;
        unaff_r25 = (unaff_r25 & 0xffffffff) >> 3;
        puVar5[5] = (int)uVar18;
        unaff_r27 = unaff_r27 - 3;
        uVar18 = uVar18 >> 1;
        puVar5[6] = (int)uVar18;
        if (uVar18 == 0) {
          for (; uVar36 = unaff_r27 & 7, unaff_r27 < uVar36; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
              uVar32 = 5;
              goto LAB_9800c5b0;
            }
            pbVar38 = (byte *)uVar37;
            uVar37 = uVar37 + 1;
            unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> uVar36);
          unaff_r27 = unaff_r27 - uVar36;
          for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < 4; unaff_r24 = unaff_r24 + 1) {
            if (unaff_r27 == 0) {
              if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                uVar32 = 7;
                goto LAB_9800c5b0;
              }
              puVar39 = (undefined1 *)uVar37;
              uVar37 = uVar37 + 1;
              *(undefined1 *)((int)puVar5 + (int)unaff_r24 + 0x1edf) = *puVar39;
            }
            else {
              for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                  uVar32 = 6;
                  goto LAB_9800c5b0;
                }
                pbVar38 = (byte *)uVar37;
                uVar37 = uVar37 + 1;
                unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
              }
              uVar6 = (undefined1)unaff_r25;
              unaff_r25 = unaff_r25 >> 8;
              unaff_r27 = unaff_r27 - 8;
              *(undefined1 *)((int)puVar5 + (int)unaff_r24 + 0x1edf) = uVar6;
            }
          }
          unaff_r24 = (ulonglong)
                      CONCAT11(*(undefined1 *)(puVar5 + 0x7b8),*(undefined1 *)((int)puVar5 + 0x1edf)
                              );
          if (unaff_r24 !=
              ((ulonglong)
               CONCAT11(*(undefined1 *)((int)puVar5 + 0x1ee2),*(undefined1 *)((int)puVar5 + 0x1ee1))
              ^ 0xffff)) {
            FUN_9800b578();
            return;
          }
          for (; uVar36 = (uint)unaff_r25, (unaff_r24 & 0xffffffff) != 0; unaff_r24 = unaff_r24 - 1)
          {
            if (unaff_r27 == 0) {
              uVar18 = ZEXT48(in_stack_00000054);
              goto LAB_9800babc;
            }
            for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                uVar32 = 0x33;
                goto LAB_9800c5b0;
              }
              pbVar38 = (byte *)uVar37;
              uVar37 = uVar37 + 1;
              unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
            }
            in_stack_00000058 = (uint)unaff_r25 & 0xff;
            uVar36 = (uint)(unaff_r25 >> 8);
            unaff_r27 = unaff_r27 - 8;
            if (in_stack_0000005c <= in_stack_00000054) {
              uVar32 = 0x34;
              goto LAB_9800c440;
            }
            *in_stack_00000054 = (char)unaff_r25;
            unaff_r25 = unaff_r25 >> 8;
            in_stack_00000054 = in_stack_00000054 + 1;
          }
        }
        else {
          if (uVar18 == 3) {
            FUN_9800b578();
            return;
          }
          if (uVar18 == 1) {
            puVar5[0xb] = 0x120;
            puVar5[0xc] = 0x20;
            FUN_9800d9e0(puVar5 + 0x7ab,5,0x20);
            lVar19 = unaff_r31 + 0x1d8b;
            lVar43 = 0x90;
            do {
              lVar19 = lVar19 + 1;
              *(undefined1 *)lVar19 = 8;
              lVar43 = lVar43 + -1;
            } while (lVar43 != 0);
            lVar19 = unaff_r31 + 0x1e1b;
            lVar43 = 0x70;
            do {
              lVar19 = lVar19 + 1;
              *(undefined1 *)lVar19 = 9;
              lVar43 = lVar43 + -1;
            } while (lVar43 != 0);
            lVar19 = unaff_r31 + 0x1e8b;
            lVar43 = 0x18;
            do {
              lVar19 = lVar19 + 1;
              *(undefined1 *)lVar19 = 7;
              lVar43 = lVar43 + -1;
            } while (lVar43 != 0);
            lVar19 = unaff_r31 + 0x1ea3;
            lVar43 = 8;
            do {
              lVar19 = lVar19 + 1;
              *(undefined1 *)lVar19 = 8;
              lVar43 = lVar43 + -1;
            } while (lVar43 != 0);
          }
          else {
            for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < 3; unaff_r24 = unaff_r24 + 1) {
              iVar15 = (int)unaff_r24;
              cVar1 = *(char *)(iVar15 + unaff_r20);
              for (; unaff_r27 < (uint)(int)cVar1; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                  uVar32 = 0xb;
                  goto LAB_9800c5b0;
                }
                pbVar38 = (byte *)uVar37;
                uVar37 = uVar37 + 1;
                cVar1 = *(char *)(iVar15 + unaff_r20);
                unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
              }
              iVar40 = (int)((unaff_r24 + 0xb & 0xffffffff) << 2);
              uVar36 = (unaff_r22 << ((int)cVar1 & 0x3fU)) - 1 & (uint)unaff_r25;
              *(uint *)(iVar40 + (int)puVar5) = uVar36;
              cVar1 = *(char *)(iVar15 + unaff_r20);
              unaff_r25 = (ulonglong)((uint)unaff_r25 >> ((int)cVar1 & 0x3fU));
              *(uint *)(iVar40 + (int)puVar5) =
                   *(ushort *)((int)((unaff_r24 & 0xffffffff) << 1) + unaff_r21) + uVar36;
              unaff_r27 = unaff_r27 - (int)cVar1;
            }
            puVar5[0x7b3] = 0;
            puVar5[0x7b4] = 0;
            puVar5[0x7b5] = 0;
            puVar5[0x7b6] = 0;
            *(undefined2 *)(puVar5 + 0x7b7) = 0;
            *(undefined1 *)((int)puVar5 + 0x1ede) = 0;
            for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < (ulonglong)(uint)puVar5[0xd];
                unaff_r24 = unaff_r24 + 1) {
              for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                  uVar32 = 0xe;
                  goto LAB_9800c5b0;
                }
                pbVar38 = (byte *)uVar37;
                uVar37 = uVar37 + 1;
                unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
              }
              bVar2 = (byte)unaff_r25;
              unaff_r25 = unaff_r25 >> 3;
              unaff_r27 = unaff_r27 - 3;
              *(byte *)((int)puVar5 + *(byte *)((int)unaff_r24 + unaff_r15) + 0x1ecc) = bVar2 & 7;
            }
            puVar5[0xd] = 0x13;
          }
          while (iVar15 = puVar5[6], -1 < iVar15) {
            iVar40 = *(int *)(&stack0x00000070 + iVar15 * 4);
            puVar13 = puVar5 + iVar15 * 0x200 + 0x10;
            iVar15 = *(int *)(&stack0x00000080 + iVar15 * 4);
            puVar22 = (undefined8 *)&stack0x000000d8;
            lVar19 = 8;
            do {
              puVar22 = puVar22 + 1;
              *puVar22 = 0;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            FUN_9800d9e0(puVar13,0,0x800);
            if (puVar5[6] == 0) {
              uVar18 = 0x480;
              puVar14 = puVar5 + 0x610;
            }
            else if (puVar5[6] == 1) {
              uVar18 = 0x80;
              puVar14 = puVar5 + 0x730;
            }
            else {
              uVar18 = 0x4c;
              puVar14 = puVar5 + 0x750;
            }
            FUN_9800d9e0(puVar14,0,uVar18);
            uVar36 = 0;
            iVar25 = puVar5[puVar5[6] + 0xb];
            if (iVar25 != 0) {
              uVar21 = puVar5[puVar5[6] + 0xb];
              do {
                pbVar38 = (byte *)(uVar36 + iVar15);
                uVar36 = uVar36 + 1;
                iVar23 = (uint)*pbVar38 * 4;
                *(int *)(&stack0x000000e0 + iVar23) = *(int *)(&stack0x000000e0 + iVar23) + 1;
              } while (uVar36 < uVar21);
            }
            in_stack_00000094 = 0;
            uVar36 = 0;
            in_stack_00000090 = 0;
            iVar23 = 0;
            iVar33 = 4;
            lVar19 = 0xf;
            do {
              uVar36 = *(int *)(&stack0x000000e0 + iVar33) + uVar36;
              iVar23 = (*(int *)(&stack0x000000e0 + iVar33) + iVar23) * 2;
              *(int *)((int)&stack0x00000094 + iVar33) = iVar23;
              iVar33 = iVar33 + 4;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            if ((iVar23 != 0x10000) && (1 < uVar36)) {
              FUN_9800b578();
              return;
            }
            lVar19 = -1;
            uVar36 = 0;
            if (iVar25 != 0) {
              do {
                bVar2 = *(byte *)(uVar36 + iVar15);
                uVar29 = (ulonglong)bVar2;
                uVar18 = 0;
                if (uVar29 != 0) {
                  uVar21 = (&stack0x00000090)[bVar2];
                  (&stack0x00000090)[bVar2] = uVar21 + 1;
                  uVar42 = (ulonglong)uVar21;
                  for (uVar44 = uVar29; uVar44 != 0; uVar44 = uVar44 - 1) {
                    uVar18 = (uVar18 & 0x7fffffff) << 1 | uVar42 & 0xffffffff00000001;
                    uVar42 = uVar42 >> 1;
                  }
                  if (uVar29 < 0xb) {
                    if (uVar18 < 0x400) {
                      do {
                        uVar29 = uVar18 & 0xffffffff;
                        uVar18 = (unaff_r22 << (bVar2 & 0x3f)) + uVar18;
                        *(ushort *)((int)(uVar29 << 1) + (int)puVar13) =
                             (ushort)bVar2 << 9 | (ushort)uVar36;
                      } while ((uVar18 & 0xffffffff) < 0x400);
                    }
                  }
                  else {
                    uVar21 = (uint)(uVar18 << 1) & 0x7fe;
                    sVar3 = *(short *)(uVar21 + (int)puVar13);
                    lVar43 = lVar19;
                    lVar20 = (longlong)sVar3;
                    if (sVar3 == 0) {
                      *(short *)(uVar21 + (int)puVar13) = (short)lVar19;
                      lVar43 = lVar19 + -2;
                      lVar20 = lVar19;
                    }
                    lVar19 = lVar43;
                    uVar18 = uVar18 >> 9;
                    if (0xb < uVar29) {
                      lVar30 = uVar29 - 0xb;
                      lVar43 = lVar19;
                      do {
                        uVar18 = uVar18 >> 1;
                        psVar34 = (short *)(iVar40 - (int)(((lVar20 - (uVar18 & 1)) + 1 & 0xffffffff
                                                           ) << 1));
                        sVar3 = *psVar34;
                        lVar19 = lVar43;
                        lVar20 = (longlong)sVar3;
                        if (sVar3 == 0) {
                          *psVar34 = (short)lVar43;
                          lVar19 = lVar43 + -2;
                          lVar20 = lVar43;
                        }
                        lVar30 = lVar30 + -1;
                        lVar43 = lVar19;
                      } while (lVar30 != 0);
                    }
                    *(ushort *)
                     ((int)((((uVar18 >> 1 & 1) - lVar20) - 1 & 0xffffffff) << 1) + iVar40) =
                         (ushort)uVar36;
                  }
                }
                uVar36 = uVar36 + 1;
              } while (uVar36 < (uint)puVar5[puVar5[6] + 0xb]);
            }
            if (puVar5[6] == 2) {
              unaff_r24 = 0;
              while( true ) {
                uVar36 = (uint)unaff_r25;
                uVar18 = (ulonglong)(uint)puVar5[0xc] + (ulonglong)(uint)puVar5[0xb] & 0xffffffff;
                if (uVar18 <= (unaff_r24 & 0xffffffff)) break;
                if (unaff_r27 < 0xf) {
                  pbVar38 = (byte *)uVar37;
                  if ((int)(in_stack_00000050 - (int)pbVar38) < 2) {
                    do {
                      uVar36 = (uint)unaff_r25;
                      sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x820) * 2 + (int)puVar5);
                      if (sVar3 < 0) {
                        if (10 < unaff_r27) {
                          uVar21 = 10;
                          do {
                            sVar3 = *(short *)(((uVar36 >> (uVar21 & 0x3f) & 1) + ~(int)sVar3 +
                                               0xea0) * 2 + (int)puVar5);
                            if (-1 < sVar3) goto LAB_9800c018;
                            uVar24 = uVar21 + 2;
                            uVar21 = uVar21 + 1;
                          } while (uVar24 <= unaff_r27);
                        }
                      }
                      else {
                        uVar21 = (int)sVar3 >> 9;
                        if ((uVar21 != 0) && (uVar21 <= unaff_r27)) break;
                      }
                      if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                        uVar32 = 0x10;
                        goto LAB_9800c5b0;
                      }
                      pbVar38 = (byte *)uVar37;
                      uVar37 = uVar37 + 1;
                      uVar36 = unaff_r27 & 0x3f;
                      unaff_r27 = unaff_r27 + 8;
                      unaff_r25 = (uint)*pbVar38 << uVar36 | unaff_r25;
                      uVar36 = (uint)unaff_r25;
                    } while (unaff_r27 < 0xf);
                  }
                  else {
                    uVar24 = unaff_r27 + 8;
                    uVar37 = uVar37 + 2;
                    uVar21 = unaff_r27 & 0x3f;
                    unaff_r27 = unaff_r27 + 0x10;
                    uVar36 = (uint)pbVar38[1] << (uVar24 & 0x3f) | (uint)*pbVar38 << uVar21 | uVar36
                    ;
                  }
                }
LAB_9800c018:
                sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x820) * 2 + (int)puVar5);
                in_stack_00000058 = (uint)sVar3;
                if (sVar3 < 0) {
                  uVar21 = 10;
                  do {
                    uVar24 = uVar21 & 0x3f;
                    uVar21 = uVar21 + 1;
                    sVar3 = *(short *)(((uVar36 >> uVar24 & 1) + ~in_stack_00000058 + 0xea0) * 2 +
                                      (int)puVar5);
                    in_stack_00000058 = (uint)sVar3;
                  } while (sVar3 < 0);
                }
                else {
                  uVar21 = (int)sVar3 >> 9;
                  in_stack_00000058 = in_stack_00000058 & 0x1ff;
                }
                unaff_r25 = (ulonglong)(uVar36 >> (uVar21 & 0x3f));
                unaff_r27 = unaff_r27 - uVar21;
                iVar15 = (int)unaff_r24;
                if (in_stack_00000058 < 0x10) {
                  unaff_r24 = unaff_r24 + 1;
                  *(char *)((int)puVar5 + iVar15 + 0x1ee3) = (char)in_stack_00000058;
                }
                else {
                  if ((in_stack_00000058 == 0x10) && ((unaff_r24 & 0xffffffff) == 0)) {
                    FUN_9800b578();
                    return;
                  }
                  cVar1 = *(char *)(in_stack_00000058 + in_stack_00000068 + -0x10);
                  uVar36 = (uint)cVar1;
                  unaff_r18 = (uint)cVar1;
                  for (; unaff_r27 < uVar36; unaff_r27 = unaff_r27 + 8) {
                    if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                      uVar32 = 0x12;
                      goto LAB_9800c5b0;
                    }
                    pbVar38 = (byte *)uVar37;
                    uVar37 = uVar37 + 1;
                    unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
                  }
                  unaff_r27 = unaff_r27 - uVar36;
                  uVar18 = (ulonglong)(unaff_r22 << ((int)cVar1 & 0x3fU)) - 1 & unaff_r25;
                  unaff_r25 = (ulonglong)((uint)unaff_r25 >> ((int)cVar1 & 0x3fU));
                  uVar18 = (longlong)*(char *)(in_stack_00000058 + unaff_r19 + -0x10) + uVar18;
                  if (in_stack_00000058 == 0x10) {
                    uVar21 = (uint)*(byte *)((int)puVar5 + iVar15 + 0x1ee2);
                  }
                  else {
                    uVar21 = 0;
                  }
                  FUN_9800d9e0((uint *)((int)puVar5 + iVar15 + 0x1ee3),uVar21,uVar18);
                  unaff_r24 = uVar18 + unaff_r24;
                  unaff_r18 = uVar36;
                }
              }
              if (uVar18 != (unaff_r24 & 0xffffffff)) {
                FUN_9800b578();
                return;
              }
              FUN_9800d3f0(unaff_r31 + 0x1d8c,unaff_r31 + 0x1ee3,(ulonglong)(uint)puVar5[0xb]);
              FUN_9800d3f0(unaff_r31 + 0x1eac,(ulonglong)(uint)puVar5[0xb] + unaff_r31 + 0x1ee3,
                           (ulonglong)(uint)puVar5[0xc]);
            }
            puVar5[6] = puVar5[6] + -1;
          }
          uVar18 = ZEXT48(in_stack_00000054);
LAB_9800b5d8:
          uVar36 = (uint)unaff_r25;
          pbVar38 = (byte *)uVar37;
          puVar39 = (undefined1 *)uVar18;
          if (((int)(in_stack_00000050 - (int)pbVar38) < 4) ||
             ((int)in_stack_0000005c - (int)puVar39 < 2)) {
            if (unaff_r27 < 0xf) {
              if ((int)(in_stack_00000050 - (int)pbVar38) < 2) {
                do {
                  uVar36 = (uint)unaff_r25;
                  sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x20) * 2 + (int)puVar5);
                  if (sVar3 < 0) {
                    if (10 < unaff_r27) {
                      uVar21 = 10;
                      do {
                        sVar3 = *(short *)(((uVar36 >> (uVar21 & 0x3f) & 1) + ~(int)sVar3 + 0xc20) *
                                           2 + (int)puVar5);
                        if (-1 < sVar3) goto LAB_9800b7ec;
                        uVar24 = uVar21 + 2;
                        uVar21 = uVar21 + 1;
                      } while (uVar24 <= unaff_r27);
                    }
                  }
                  else {
                    uVar21 = (int)sVar3 >> 9;
                    if ((uVar21 != 0) && (uVar21 <= unaff_r27)) break;
                  }
                  if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                    uVar32 = 0x17;
                    goto LAB_9800c5b0;
                  }
                  pbVar38 = (byte *)uVar37;
                  uVar37 = uVar37 + 1;
                  uVar36 = unaff_r27 & 0x3f;
                  unaff_r27 = unaff_r27 + 8;
                  unaff_r25 = (uint)*pbVar38 << uVar36 | unaff_r25;
                  uVar36 = (uint)unaff_r25;
                } while (unaff_r27 < 0xf);
              }
              else {
                uVar24 = unaff_r27 + 8;
                uVar37 = uVar37 + 2;
                uVar21 = unaff_r27 & 0x3f;
                unaff_r27 = unaff_r27 + 0x10;
                uVar36 = (uint)pbVar38[1] << (uVar24 & 0x3f) | (uint)*pbVar38 << uVar21 | uVar36;
              }
            }
LAB_9800b7ec:
            sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x20) * 2 + (int)puVar5);
            unaff_r24 = (ulonglong)sVar3;
            if (sVar3 < 0) {
              uVar21 = 10;
              do {
                uVar24 = uVar21 & 0x3f;
                uVar21 = uVar21 + 1;
                sVar3 = *(short *)((int)((((ulonglong)(uVar36 >> uVar24) & 1) + ~unaff_r24 + 0xc20 &
                                         0xffffffff) << 1) + (int)puVar5);
                unaff_r24 = (ulonglong)sVar3;
              } while (sVar3 < 0);
            }
            else {
              uVar21 = (int)sVar3 >> 9;
              unaff_r24 = unaff_r24 & 0x1ff;
            }
            uVar36 = uVar36 >> (uVar21 & 0x3f);
            unaff_r25 = (ulonglong)uVar36;
            unaff_r27 = unaff_r27 - uVar21;
            if (0xff < (unaff_r24 & 0xffffffff)) goto LAB_9800b884;
            if ((uVar18 & 0xffffffff) < ZEXT48(in_stack_0000005c)) {
              *puVar39 = (char)unaff_r24;
              uVar18 = uVar18 + 1;
              goto LAB_9800b870;
            }
            uVar32 = 0x18;
LAB_9800c440:
            uVar41 = (undefined4)unaff_r24;
            iVar15 = 2;
            goto LAB_9800b57c;
          }
          if (unaff_r27 < 0xf) {
            uVar37 = uVar37 + 2;
            uVar36 = (uint)CONCAT11(pbVar38[1],*pbVar38) << (unaff_r27 & 0x3f) | uVar36;
            unaff_r27 = unaff_r27 + 0x10;
          }
          sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x20) * 2 + (int)puVar5);
          unaff_r24 = (ulonglong)sVar3;
          if (sVar3 < 0) {
            uVar21 = 10;
            do {
              uVar24 = uVar21 & 0x3f;
              uVar21 = uVar21 + 1;
              sVar3 = *(short *)((int)((((ulonglong)(uVar36 >> uVar24) & 1) + ~unaff_r24 + 0xc20 &
                                       0xffffffff) << 1) + (int)puVar5);
              unaff_r24 = (ulonglong)sVar3;
            } while (sVar3 < 0);
          }
          else {
            uVar21 = (int)sVar3 >> 9;
          }
          uVar36 = uVar36 >> (uVar21 & 0x3f);
          unaff_r25 = (ulonglong)uVar36;
          unaff_r27 = unaff_r27 - uVar21;
          if ((unaff_r24 & 0x100) == 0) {
            if (unaff_r27 < 0xf) {
              puVar16 = (undefined1 *)uVar37;
              uVar37 = uVar37 + 2;
              uVar36 = (uint)CONCAT11(puVar16[1],*puVar16) << (unaff_r27 & 0x3f) | uVar36;
              unaff_r27 = unaff_r27 + 0x10;
            }
            sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x20) * 2 + (int)puVar5);
            uVar29 = (ulonglong)sVar3;
            if (sVar3 < 0) {
              uVar21 = 10;
              do {
                uVar24 = uVar21 & 0x3f;
                uVar21 = uVar21 + 1;
                sVar3 = *(short *)((int)((((ulonglong)(uVar36 >> uVar24) & 1) + ~uVar29 + 0xc20 &
                                         0xffffffff) << 1) + (int)puVar5);
                uVar29 = (ulonglong)sVar3;
              } while (sVar3 < 0);
            }
            else {
              uVar21 = (int)sVar3 >> 9;
            }
            *puVar39 = (char)unaff_r24;
            unaff_r25 = (ulonglong)(uVar36 >> (uVar21 & 0x3f));
            unaff_r27 = unaff_r27 - uVar21;
            if ((uVar29 & 0x100) != 0) {
              uVar18 = uVar18 + 1;
              in_stack_00000054 = (undefined1 *)uVar18;
              unaff_r24 = uVar29;
              goto LAB_9800b884;
            }
            puVar39[1] = (char)uVar29;
            uVar18 = uVar18 + 2;
LAB_9800b870:
            in_stack_00000054 = (undefined1 *)uVar18;
            goto LAB_9800b5d8;
          }
LAB_9800b884:
          unaff_r24 = unaff_r24 & 0x1ff;
          if (unaff_r24 != 0x100) {
            bVar2 = *(byte *)((int)unaff_r24 + in_stack_0000006c + -0x101);
            uVar36 = (uint)bVar2;
            unaff_r18 = (uint)bVar2;
            unaff_r24 = (ulonglong)
                        *(ushort *)((int)((unaff_r24 - 0x101 & 0xffffffff) << 1) + unaff_r14);
            if (uVar36 != 0) {
              for (; unaff_r27 < uVar36; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                  uVar32 = 0x19;
                  goto LAB_9800c5b0;
                }
                pbVar38 = (byte *)uVar37;
                uVar37 = uVar37 + 1;
                unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
              }
              unaff_r27 = unaff_r27 - uVar36;
              uVar29 = (ulonglong)(unaff_r22 << (bVar2 & 0x3f)) - 1 & unaff_r25;
              unaff_r25 = (ulonglong)((uint)unaff_r25 >> (bVar2 & 0x3f));
              unaff_r24 = uVar29 + unaff_r24;
            }
            uVar36 = (uint)unaff_r25;
            if (unaff_r27 < 0xf) {
              pbVar38 = (byte *)uVar37;
              if ((int)(in_stack_00000050 - (int)pbVar38) < 2) {
                do {
                  uVar36 = (uint)unaff_r25;
                  sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x420) * 2 + (int)puVar5);
                  if (sVar3 < 0) {
                    if (10 < unaff_r27) {
                      uVar21 = 10;
                      do {
                        sVar3 = *(short *)(((uVar36 >> (uVar21 & 0x3f) & 1) + ~(int)sVar3 + 0xe60) *
                                           2 + (int)puVar5);
                        if (-1 < sVar3) goto LAB_9800c2ac;
                        uVar24 = uVar21 + 2;
                        uVar21 = uVar21 + 1;
                      } while (uVar24 <= unaff_r27);
                    }
                  }
                  else {
                    uVar21 = (int)sVar3 >> 9;
                    if ((uVar21 != 0) && (uVar21 <= unaff_r27)) break;
                  }
                  if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                    uVar32 = 0x1a;
                    goto LAB_9800c5b0;
                  }
                  pbVar38 = (byte *)uVar37;
                  uVar37 = uVar37 + 1;
                  uVar36 = unaff_r27 & 0x3f;
                  unaff_r27 = unaff_r27 + 8;
                  unaff_r25 = (uint)*pbVar38 << uVar36 | unaff_r25;
                  uVar36 = (uint)unaff_r25;
                } while (unaff_r27 < 0xf);
              }
              else {
                uVar24 = unaff_r27 + 8;
                uVar37 = uVar37 + 2;
                uVar21 = unaff_r27 & 0x3f;
                unaff_r27 = unaff_r27 + 0x10;
                uVar36 = (uint)pbVar38[1] << (uVar24 & 0x3f) | (uint)*pbVar38 << uVar21 | uVar36;
              }
            }
LAB_9800c2ac:
            sVar3 = *(short *)(((uVar36 & 0x3ff) + 0x420) * 2 + (int)puVar5);
            uVar29 = (ulonglong)sVar3;
            if (sVar3 < 0) {
              uVar21 = 10;
              do {
                uVar24 = uVar21 & 0x3f;
                uVar21 = uVar21 + 1;
                sVar3 = *(short *)((int)((((ulonglong)(uVar36 >> uVar24) & 1) + ~uVar29 + 0xe60 &
                                         0xffffffff) << 1) + (int)puVar5);
                uVar29 = (ulonglong)sVar3;
              } while (sVar3 < 0);
            }
            else {
              uVar21 = (int)sVar3 >> 9;
              uVar29 = uVar29 & 0x1ff;
            }
            bVar2 = *(byte *)((int)uVar29 + unaff_r16);
            uVar24 = (uint)bVar2;
            unaff_r18 = (uint)bVar2;
            unaff_r25 = (ulonglong)(uVar36 >> (uVar21 & 0x3f));
            uVar4 = *(ushort *)((int)((uVar29 & 0xffffffff) << 1) + unaff_r17);
            uVar29 = (ulonglong)uVar4;
            unaff_r27 = unaff_r27 - uVar21;
            in_stack_00000058 = (uint)uVar4;
            if (uVar24 != 0) {
              for (; unaff_r27 < uVar24; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                  uVar32 = 0x1b;
                  goto LAB_9800c5b0;
                }
                pbVar38 = (byte *)uVar37;
                uVar37 = uVar37 + 1;
                unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
              }
              unaff_r27 = unaff_r27 - uVar24;
              uVar44 = (ulonglong)(unaff_r22 << (bVar2 & 0x3f)) - 1 & unaff_r25;
              unaff_r25 = (ulonglong)((uint)unaff_r25 >> (bVar2 & 0x3f));
              uVar29 = uVar44 + uVar29;
              in_stack_00000058 = (uint)uVar29;
            }
            uVar36 = (uint)unaff_r25;
            uVar44 = uVar18 - in_stack_000001ec;
            in_stack_00000060 = (undefined4)uVar44;
            if (((((uVar29 & 0xffffffff) == 0) || ((uVar44 & 0xffffffff) < (uVar29 & 0xffffffff)))
                || ((uVar44 & 0xffffffff) == 0)) && ((in_stack_00000204 & 4) != 0)) {
              FUN_9800b578();
              return;
            }
            uVar31 = (uVar44 - uVar29 & (ulonglong)in_stack_00000064) + (ulonglong)in_stack_000001ec
            ;
            puVar39 = (undefined1 *)uVar31;
            uVar42 = uVar18;
            if ((uVar18 & 0xffffffff) <= (uVar31 & 0xffffffff)) {
              uVar42 = uVar31;
            }
            unaff_r18 = uVar24;
            if (ZEXT48(in_stack_0000005c) < (uVar42 + unaff_r24 & 0xffffffff)) {
              while (uVar42 = unaff_r24 & 0xffffffff, unaff_r24 = unaff_r24 - 1, uVar42 != 0) {
                if (ZEXT48(in_stack_0000005c) <= (uVar18 & 0xffffffff)) {
                  uVar32 = 0x35;
                  unaff_r18 = (uint)bVar2;
                  goto LAB_9800c440;
                }
                iVar15 = (int)uVar44;
                uVar44 = uVar44 + 1;
                in_stack_00000060 = (undefined4)uVar44;
                *(undefined1 *)uVar18 =
                     *(undefined1 *)((iVar15 - (int)uVar29 & in_stack_00000064) + in_stack_000001ec)
                ;
                uVar18 = uVar18 + 1;
                in_stack_00000054 = (undefined1 *)uVar18;
              }
            }
            else {
              if (2 < (unaff_r24 & 0xffffffff)) {
                lVar19 = (unaff_r24 - 3 & 0xffffffff) / 3 + 1;
                do {
                  puVar35 = (undefined1 *)uVar31;
                  unaff_r24 = unaff_r24 - 3;
                  puVar16 = (undefined1 *)uVar18;
                  *puVar16 = *puVar35;
                  puVar16[1] = puVar35[1];
                  uVar31 = uVar31 + 3;
                  puVar39 = (undefined1 *)uVar31;
                  puVar16[2] = puVar35[2];
                  uVar18 = uVar18 + 3;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
                in_stack_00000054 = (undefined1 *)uVar18;
              }
              if ((unaff_r24 & 0xffffffff) != 0) {
                *(undefined1 *)uVar18 = *puVar39;
                if (1 < (unaff_r24 & 0xffffffff)) {
                  ((undefined1 *)uVar18)[1] = puVar39[1];
                }
                uVar18 = unaff_r24 + uVar18;
                goto LAB_9800b870;
              }
            }
            goto LAB_9800b5d8;
          }
        }
LAB_9800b890:
        uVar41 = (undefined4)unaff_r24;
        uVar36 = (uint)unaff_r25;
      } while ((puVar5[5] & 1) == 0);
      uVar21 = unaff_r27 & 7;
      if (unaff_r27 < uVar21) {
        do {
          if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
            uVar32 = 0x20;
            goto LAB_9800c5b0;
          }
          pbVar38 = (byte *)uVar37;
          uVar37 = uVar37 + 1;
          uVar36 = unaff_r27 & 0x3f;
          unaff_r27 = unaff_r27 + 8;
          unaff_r25 = (uint)*pbVar38 << uVar36 | unaff_r25;
          uVar36 = (uint)unaff_r25;
          uVar21 = unaff_r27 & 7;
        } while (unaff_r27 < uVar21);
      }
      for (unaff_r27 = unaff_r27 - uVar21;
          ((ulonglong)in_stack_000001dc < (uVar37 & 0xffffffff) && (7 < unaff_r27));
          unaff_r27 = unaff_r27 - 8) {
        uVar37 = uVar37 - 1;
      }
      unaff_r25 = (ulonglong)(uVar36 >> uVar21) & ~(ulonglong)(uint)(-1 << (unaff_r27 & 0x3f));
      uVar36 = (uint)unaff_r25;
      if ((in_stack_00000204 & 1) != 0) {
        unaff_r24 = 0;
        while( true ) {
          uVar36 = (uint)unaff_r25;
          uVar41 = (undefined4)unaff_r24;
          if (3 < (unaff_r24 & 0xffffffff)) break;
          if (unaff_r27 == 0) {
            if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
              uVar32 = 0x2a;
              goto LAB_9800c5b0;
            }
            uVar36 = (uint)*(byte *)uVar37;
            uVar37 = uVar37 + 1;
          }
          else {
            for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                uVar32 = 0x29;
                goto LAB_9800c5b0;
              }
              pbVar38 = (byte *)uVar37;
              uVar37 = uVar37 + 1;
              unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
            }
            uVar36 = (uint)unaff_r25 & 0xff;
            unaff_r25 = unaff_r25 >> 8;
            unaff_r27 = unaff_r27 - 8;
          }
          unaff_r24 = unaff_r24 + 1;
          puVar5[4] = puVar5[4] << 8 | uVar36;
        }
      }
      uVar32 = 0x22;
      iVar15 = 0;
    }
    else {
      uVar32 = 0x24;
      iVar15 = -1;
    }
LAB_9800b57c:
    *puVar5 = uVar32;
  }
  else {
    uVar32 = 2;
LAB_9800c5b0:
    iVar40 = (int)uVar37;
    uVar36 = (uint)unaff_r25;
    uVar41 = (undefined4)unaff_r24;
    *puVar5 = uVar32;
    iVar15 = (-(uint)((in_stack_00000204 & 2) != 0) & 5) - 4;
    if ((iVar15 == 1) || (iVar15 == -4)) goto LAB_9800c610;
  }
  for (; (iVar40 = (int)uVar37, (ulonglong)in_stack_000001dc < (uVar37 & 0xffffffff) &&
         (7 < unaff_r27)); unaff_r27 = unaff_r27 - 8) {
    uVar37 = uVar37 - 1;
  }
LAB_9800c610:
  uVar21 = (int)in_stack_00000054 - (int)in_stack_000001f4;
  puVar5[1] = unaff_r27;
  puVar5[8] = in_stack_00000058;
  puVar5[9] = uVar41;
  puVar5[10] = unaff_r18;
  puVar5[0xf] = in_stack_00000060;
  puVar5[0xe] = uVar36 & ~(-1 << (unaff_r27 & 0x3f));
  *in_stack_000001e4 = iVar40 - in_stack_000001dc;
  *in_stack_000001fc = uVar21;
  if (((in_stack_00000204 & 9) != 0) && (-1 < iVar15)) {
    uVar36 = puVar5[7] & 0xffff;
    uVar24 = (uint)puVar5[7] >> 0x10;
    pbVar38 = in_stack_000001f4;
    pbVar12 = (byte *)(uVar21 % 0x15b0);
    while (uVar21 != 0) {
      pbVar17 = (byte *)0x0;
      if ((byte *)0x7 < pbVar12) {
        iVar15 = 7 - (int)pbVar38;
        do {
          pbVar17 = pbVar17 + 8;
          iVar40 = *pbVar38 + uVar36;
          pbVar7 = pbVar38 + 3;
          pbVar8 = pbVar38 + 4;
          iVar25 = (uint)pbVar38[1] + iVar40;
          pbVar9 = pbVar38 + 5;
          pbVar10 = pbVar38 + 6;
          pbVar11 = pbVar38 + 7;
          iVar23 = (uint)pbVar38[2] + iVar25;
          pbVar38 = pbVar38 + 8;
          iVar33 = (uint)*pbVar7 + iVar23;
          iVar26 = (uint)*pbVar8 + iVar33;
          iVar27 = (uint)*pbVar9 + iVar26;
          iVar28 = (uint)*pbVar10 + iVar27;
          uVar36 = (uint)*pbVar11 + iVar28;
          uVar24 = uVar24 + iVar40 + iVar25 + iVar23 + iVar33 + iVar26 + iVar27 + iVar28 + uVar36;
        } while (pbVar38 + iVar15 < pbVar12);
      }
      if (pbVar17 < pbVar12) {
        iVar15 = (int)pbVar12 - (int)pbVar17;
        do {
          bVar2 = *pbVar38;
          pbVar38 = pbVar38 + 1;
          uVar36 = bVar2 + uVar36;
          uVar24 = uVar24 + uVar36;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      uVar36 = uVar36 % 0xfff1;
      uVar24 = uVar24 % 0xfff1;
      uVar21 = uVar21 - (int)pbVar12;
      pbVar12 = (byte *)0x15b0;
    }
    puVar5[7] = uVar24 * 0x10000 + uVar36;
  }
  FUN_9800d270();
  return;
LAB_9800babc:
  if ((unaff_r24 & 0xffffffff) == 0) goto LAB_9800b890;
  if (ZEXT48(in_stack_0000005c) <= (uVar18 & 0xffffffff)) {
    uVar32 = 9;
    goto LAB_9800c440;
  }
  if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
    uVar32 = 0x26;
    goto LAB_9800c5b0;
  }
  uVar42 = in_stack_00000050 - uVar37;
  uVar44 = ZEXT48(in_stack_0000005c) - uVar18;
  uVar29 = uVar44;
  if ((uVar42 & 0xffffffff) <= (uVar44 & 0xffffffff)) {
    uVar29 = uVar42;
  }
  uVar31 = unaff_r24;
  if (((uVar29 & 0xffffffff) < (unaff_r24 & 0xffffffff)) &&
     (uVar31 = uVar42, (uVar44 & 0xffffffff) < (uVar42 & 0xffffffff))) {
    uVar31 = uVar44;
  }
  FUN_9800d3f0(uVar18,uVar37,uVar31);
  uVar18 = uVar31 + uVar18;
  uVar37 = uVar31 + uVar37;
  in_stack_00000054 = (undefined1 *)uVar18;
  unaff_r24 = unaff_r24 - uVar31;
  goto LAB_9800babc;
}


/* ==== FUN_9800b578 @ 9800b578 ==== */

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
  FUN_9800d270();
  return;
}


/* ==== FUN_9800b590 @ 9800b590 ==== */

void FUN_9800b590(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  ulonglong in_r7;
  undefined1 *puVar15;
  ulonglong in_r8;
  byte *pbVar16;
  ulonglong in_r9;
  uint uVar19;
  longlong lVar17;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar18;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar30;
  ulonglong uVar28;
  longlong lVar29;
  short *psVar31;
  undefined1 *puVar32;
  undefined4 uVar33;
  int unaff_r14;
  int unaff_r15;
  int unaff_r16;
  int unaff_r17;
  uint unaff_r18;
  int unaff_r19;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  ulonglong unaff_r23;
  byte *pbVar34;
  undefined1 *puVar35;
  int iVar36;
  ulonglong unaff_r24;
  undefined4 uVar37;
  ulonglong unaff_r25;
  uint uVar38;
  uint unaff_r27;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong unaff_r31;
  undefined4 *puVar41;
  longlong lVar42;
  ulonglong uVar43;
  uint in_stack_00000050;
  undefined1 *in_stack_00000054;
  uint in_stack_00000058;
  undefined1 *in_stack_0000005c;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  uint in_stack_000001dc;
  int *in_stack_000001e4;
  uint in_stack_000001ec;
  byte *in_stack_000001f4;
  uint *in_stack_000001fc;
  uint in_stack_00000204;
  
  while( true ) {
    uVar38 = (uint)unaff_r25;
    puVar41 = (undefined4 *)unaff_r31;
    if (ZEXT48(in_stack_0000005c) <= (in_r7 & 0xffffffff)) break;
    iVar14 = (int)in_r8;
    in_r8 = in_r8 + 1;
    in_stack_00000060 = (undefined4)in_r8;
    *(undefined1 *)in_r7 =
         *(undefined1 *)((iVar14 - (int)in_r9 & in_stack_00000064) + in_stack_000001ec);
    in_r7 = in_r7 + 1;
    in_stack_00000054 = (undefined1 *)in_r7;
LAB_9800b5c4:
    uVar27 = unaff_r24 & 0xffffffff;
    unaff_r24 = unaff_r24 - 1;
    if (uVar27 == 0) {
LAB_9800b5d8:
      uVar38 = (uint)unaff_r25;
      pbVar34 = (byte *)unaff_r23;
      puVar35 = (undefined1 *)in_r7;
      if (((int)(in_stack_00000050 - (int)pbVar34) < 4) ||
         ((int)in_stack_0000005c - (int)puVar35 < 2)) {
        if (unaff_r27 < 0xf) {
          if ((int)(in_stack_00000050 - (int)pbVar34) < 2) {
            do {
              uVar38 = (uint)unaff_r25;
              sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x20) * 2 + (int)puVar41);
              if (sVar3 < 0) {
                if (10 < unaff_r27) {
                  uVar19 = 10;
                  do {
                    sVar3 = *(short *)(((uVar38 >> (uVar19 & 0x3f) & 1) + ~(int)sVar3 + 0xc20) * 2 +
                                      (int)puVar41);
                    if (-1 < sVar3) goto LAB_9800b7ec;
                    uVar22 = uVar19 + 2;
                    uVar19 = uVar19 + 1;
                  } while (uVar22 <= unaff_r27);
                }
              }
              else {
                uVar19 = (int)sVar3 >> 9;
                if ((uVar19 != 0) && (uVar19 <= unaff_r27)) break;
              }
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar33 = 0x17;
                goto LAB_9800c5b0;
              }
              pbVar34 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              uVar38 = unaff_r27 & 0x3f;
              unaff_r27 = unaff_r27 + 8;
              unaff_r25 = (uint)*pbVar34 << uVar38 | unaff_r25;
              uVar38 = (uint)unaff_r25;
            } while (unaff_r27 < 0xf);
          }
          else {
            uVar22 = unaff_r27 + 8;
            unaff_r23 = unaff_r23 + 2;
            uVar19 = unaff_r27 & 0x3f;
            unaff_r27 = unaff_r27 + 0x10;
            uVar38 = (uint)pbVar34[1] << (uVar22 & 0x3f) | (uint)*pbVar34 << uVar19 | uVar38;
          }
        }
LAB_9800b7ec:
        sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x20) * 2 + (int)puVar41);
        unaff_r24 = (ulonglong)sVar3;
        if (sVar3 < 0) {
          uVar19 = 10;
          do {
            uVar22 = uVar19 & 0x3f;
            uVar19 = uVar19 + 1;
            sVar3 = *(short *)((int)((((ulonglong)(uVar38 >> uVar22) & 1) + ~unaff_r24 + 0xc20 &
                                     0xffffffff) << 1) + (int)puVar41);
            unaff_r24 = (ulonglong)sVar3;
          } while (sVar3 < 0);
        }
        else {
          uVar19 = (int)sVar3 >> 9;
          unaff_r24 = unaff_r24 & 0x1ff;
        }
        uVar38 = uVar38 >> (uVar19 & 0x3f);
        unaff_r25 = (ulonglong)uVar38;
        unaff_r27 = unaff_r27 - uVar19;
        if (0xff < (unaff_r24 & 0xffffffff)) goto LAB_9800b884;
        if (ZEXT48(in_stack_0000005c) <= (in_r7 & 0xffffffff)) {
          uVar33 = 0x18;
          goto LAB_9800c440;
        }
        *puVar35 = (char)unaff_r24;
        in_r7 = in_r7 + 1;
      }
      else {
        if (unaff_r27 < 0xf) {
          unaff_r23 = unaff_r23 + 2;
          uVar38 = (uint)CONCAT11(pbVar34[1],*pbVar34) << (unaff_r27 & 0x3f) | uVar38;
          unaff_r27 = unaff_r27 + 0x10;
        }
        sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x20) * 2 + (int)puVar41);
        unaff_r24 = (ulonglong)sVar3;
        if (sVar3 < 0) {
          uVar19 = 10;
          do {
            uVar22 = uVar19 & 0x3f;
            uVar19 = uVar19 + 1;
            sVar3 = *(short *)((int)((((ulonglong)(uVar38 >> uVar22) & 1) + ~unaff_r24 + 0xc20 &
                                     0xffffffff) << 1) + (int)puVar41);
            unaff_r24 = (ulonglong)sVar3;
          } while (sVar3 < 0);
        }
        else {
          uVar19 = (int)sVar3 >> 9;
        }
        uVar38 = uVar38 >> (uVar19 & 0x3f);
        unaff_r25 = (ulonglong)uVar38;
        unaff_r27 = unaff_r27 - uVar19;
        if ((unaff_r24 & 0x100) == 0) {
          if (unaff_r27 < 0xf) {
            puVar15 = (undefined1 *)unaff_r23;
            unaff_r23 = unaff_r23 + 2;
            uVar38 = (uint)CONCAT11(puVar15[1],*puVar15) << (unaff_r27 & 0x3f) | uVar38;
            unaff_r27 = unaff_r27 + 0x10;
          }
          sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x20) * 2 + (int)puVar41);
          uVar27 = (ulonglong)sVar3;
          if (sVar3 < 0) {
            uVar19 = 10;
            do {
              uVar22 = uVar19 & 0x3f;
              uVar19 = uVar19 + 1;
              sVar3 = *(short *)((int)((((ulonglong)(uVar38 >> uVar22) & 1) + ~uVar27 + 0xc20 &
                                       0xffffffff) << 1) + (int)puVar41);
              uVar27 = (ulonglong)sVar3;
            } while (sVar3 < 0);
          }
          else {
            uVar19 = (int)sVar3 >> 9;
          }
          *puVar35 = (char)unaff_r24;
          unaff_r25 = (ulonglong)(uVar38 >> (uVar19 & 0x3f));
          unaff_r27 = unaff_r27 - uVar19;
          if ((uVar27 & 0x100) == 0) {
            puVar35[1] = (char)uVar27;
            in_r7 = in_r7 + 2;
            goto LAB_9800b870;
          }
          in_r7 = in_r7 + 1;
          in_stack_00000054 = (undefined1 *)in_r7;
          unaff_r24 = uVar27;
        }
LAB_9800b884:
        unaff_r24 = unaff_r24 & 0x1ff;
        if (unaff_r24 == 0x100) {
LAB_9800b890:
          do {
            uVar37 = (undefined4)unaff_r24;
            uVar38 = (uint)unaff_r25;
            if ((puVar41[5] & 1) != 0) {
              uVar19 = unaff_r27 & 7;
              if (unaff_r27 < uVar19) goto LAB_9800b8a8;
              goto LAB_9800b8d4;
            }
            for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar33 = 3;
                goto LAB_9800c5b0;
              }
              pbVar34 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
            }
            uVar27 = unaff_r25 & 7;
            unaff_r25 = unaff_r25 >> 3;
            puVar41[5] = (int)uVar27;
            unaff_r27 = unaff_r27 - 3;
            uVar27 = uVar27 >> 1;
            puVar41[6] = (int)uVar27;
            if (uVar27 != 0) goto code_r0x9800b92c;
            for (; uVar38 = unaff_r27 & 7, unaff_r27 < uVar38; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar33 = 5;
                goto LAB_9800c5b0;
              }
              pbVar34 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
            }
            unaff_r25 = (ulonglong)((uint)unaff_r25 >> uVar38);
            unaff_r27 = unaff_r27 - uVar38;
            for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < 4; unaff_r24 = unaff_r24 + 1) {
              if (unaff_r27 == 0) {
                if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                  uVar33 = 7;
                  goto LAB_9800c5b0;
                }
                puVar35 = (undefined1 *)unaff_r23;
                unaff_r23 = unaff_r23 + 1;
                *(undefined1 *)((int)puVar41 + (int)unaff_r24 + 0x1edf) = *puVar35;
              }
              else {
                for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
                  if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                    uVar33 = 6;
                    goto LAB_9800c5b0;
                  }
                  pbVar34 = (byte *)unaff_r23;
                  unaff_r23 = unaff_r23 + 1;
                  unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
                }
                uVar5 = (undefined1)unaff_r25;
                unaff_r25 = unaff_r25 >> 8;
                unaff_r27 = unaff_r27 - 8;
                *(undefined1 *)((int)puVar41 + (int)unaff_r24 + 0x1edf) = uVar5;
              }
            }
            unaff_r24 = (ulonglong)
                        CONCAT11(*(undefined1 *)(puVar41 + 0x7b8),
                                 *(undefined1 *)((int)puVar41 + 0x1edf));
            if (unaff_r24 !=
                ((ulonglong)
                 CONCAT11(*(undefined1 *)((int)puVar41 + 0x1ee2),
                          *(undefined1 *)((int)puVar41 + 0x1ee1)) ^ 0xffff)) {
              FUN_9800b578();
              return;
            }
            for (; uVar38 = (uint)unaff_r25, (unaff_r24 & 0xffffffff) != 0;
                unaff_r24 = unaff_r24 - 1) {
              if (unaff_r27 == 0) {
                uVar27 = ZEXT48(in_stack_00000054);
                goto LAB_9800babc;
              }
              for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                  uVar33 = 0x33;
                  goto LAB_9800c5b0;
                }
                pbVar34 = (byte *)unaff_r23;
                unaff_r23 = unaff_r23 + 1;
                unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
              }
              in_stack_00000058 = (uint)unaff_r25 & 0xff;
              uVar38 = (uint)(unaff_r25 >> 8);
              unaff_r27 = unaff_r27 - 8;
              if (in_stack_0000005c <= in_stack_00000054) {
                uVar33 = 0x34;
                goto LAB_9800c440;
              }
              *in_stack_00000054 = (char)unaff_r25;
              unaff_r25 = unaff_r25 >> 8;
              in_stack_00000054 = in_stack_00000054 + 1;
            }
          } while( true );
        }
        bVar2 = *(byte *)((int)unaff_r24 + in_stack_0000006c + -0x101);
        uVar38 = (uint)bVar2;
        unaff_r18 = (uint)bVar2;
        unaff_r24 = (ulonglong)*(ushort *)((int)((unaff_r24 - 0x101 & 0xffffffff) << 1) + unaff_r14)
        ;
        if (uVar38 != 0) {
          for (; unaff_r27 < uVar38; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar33 = 0x19;
              goto LAB_9800c5b0;
            }
            pbVar34 = (byte *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          unaff_r27 = unaff_r27 - uVar38;
          uVar27 = (ulonglong)(uint)(unaff_r22 << (bVar2 & 0x3f)) - 1 & unaff_r25;
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> (bVar2 & 0x3f));
          unaff_r24 = uVar27 + unaff_r24;
        }
        uVar38 = (uint)unaff_r25;
        if (unaff_r27 < 0xf) {
          pbVar34 = (byte *)unaff_r23;
          if ((int)(in_stack_00000050 - (int)pbVar34) < 2) {
            do {
              uVar38 = (uint)unaff_r25;
              sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x420) * 2 + (int)puVar41);
              if (sVar3 < 0) {
                if (10 < unaff_r27) {
                  uVar19 = 10;
                  do {
                    sVar3 = *(short *)(((uVar38 >> (uVar19 & 0x3f) & 1) + ~(int)sVar3 + 0xe60) * 2 +
                                      (int)puVar41);
                    if (-1 < sVar3) goto LAB_9800c2ac;
                    uVar22 = uVar19 + 2;
                    uVar19 = uVar19 + 1;
                  } while (uVar22 <= unaff_r27);
                }
              }
              else {
                uVar19 = (int)sVar3 >> 9;
                if ((uVar19 != 0) && (uVar19 <= unaff_r27)) break;
              }
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar33 = 0x1a;
                goto LAB_9800c5b0;
              }
              pbVar34 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              uVar38 = unaff_r27 & 0x3f;
              unaff_r27 = unaff_r27 + 8;
              unaff_r25 = (uint)*pbVar34 << uVar38 | unaff_r25;
              uVar38 = (uint)unaff_r25;
            } while (unaff_r27 < 0xf);
          }
          else {
            uVar22 = unaff_r27 + 8;
            unaff_r23 = unaff_r23 + 2;
            uVar19 = unaff_r27 & 0x3f;
            unaff_r27 = unaff_r27 + 0x10;
            uVar38 = (uint)pbVar34[1] << (uVar22 & 0x3f) | (uint)*pbVar34 << uVar19 | uVar38;
          }
        }
LAB_9800c2ac:
        sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x420) * 2 + (int)puVar41);
        uVar27 = (ulonglong)sVar3;
        if (sVar3 < 0) {
          uVar19 = 10;
          do {
            uVar22 = uVar19 & 0x3f;
            uVar19 = uVar19 + 1;
            sVar3 = *(short *)((int)((((ulonglong)(uVar38 >> uVar22) & 1) + ~uVar27 + 0xe60 &
                                     0xffffffff) << 1) + (int)puVar41);
            uVar27 = (ulonglong)sVar3;
          } while (sVar3 < 0);
        }
        else {
          uVar19 = (int)sVar3 >> 9;
          uVar27 = uVar27 & 0x1ff;
        }
        bVar2 = *(byte *)((int)uVar27 + unaff_r16);
        uVar22 = (uint)bVar2;
        unaff_r18 = (uint)bVar2;
        unaff_r25 = (ulonglong)(uVar38 >> (uVar19 & 0x3f));
        uVar4 = *(ushort *)((int)((uVar27 & 0xffffffff) << 1) + unaff_r17);
        in_r9 = (ulonglong)uVar4;
        unaff_r27 = unaff_r27 - uVar19;
        in_stack_00000058 = (uint)uVar4;
        if (uVar22 != 0) {
          for (; unaff_r27 < uVar22; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar33 = 0x1b;
              goto LAB_9800c5b0;
            }
            pbVar34 = (byte *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          unaff_r27 = unaff_r27 - uVar22;
          uVar27 = (ulonglong)(uint)(unaff_r22 << (bVar2 & 0x3f)) - 1 & unaff_r25;
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> (bVar2 & 0x3f));
          in_r9 = uVar27 + in_r9;
          in_stack_00000058 = (uint)in_r9;
        }
        in_r8 = in_r7 - in_stack_000001ec;
        in_stack_00000060 = (undefined4)in_r8;
        if (((((in_r9 & 0xffffffff) == 0) || ((in_r8 & 0xffffffff) < (in_r9 & 0xffffffff))) ||
            ((in_r8 & 0xffffffff) == 0)) && ((in_stack_00000204 & 4) != 0)) {
          FUN_9800b578();
          return;
        }
        uVar28 = (in_r8 - in_r9 & (ulonglong)in_stack_00000064) + (ulonglong)in_stack_000001ec;
        puVar35 = (undefined1 *)uVar28;
        uVar27 = in_r7;
        if ((in_r7 & 0xffffffff) <= (uVar28 & 0xffffffff)) {
          uVar27 = uVar28;
        }
        unaff_r18 = uVar22;
        if (ZEXT48(in_stack_0000005c) < (uVar27 + unaff_r24 & 0xffffffff)) goto LAB_9800b5c4;
        if (2 < (unaff_r24 & 0xffffffff)) {
          lVar17 = (unaff_r24 - 3 & 0xffffffff) / 3 + 1;
          do {
            puVar32 = (undefined1 *)uVar28;
            unaff_r24 = unaff_r24 - 3;
            puVar15 = (undefined1 *)in_r7;
            *puVar15 = *puVar32;
            puVar15[1] = puVar32[1];
            uVar28 = uVar28 + 3;
            puVar35 = (undefined1 *)uVar28;
            puVar15[2] = puVar32[2];
            in_r7 = in_r7 + 3;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          in_stack_00000054 = (undefined1 *)in_r7;
        }
        if ((unaff_r24 & 0xffffffff) == 0) goto LAB_9800b5d8;
        *(undefined1 *)in_r7 = *puVar35;
        if (1 < (unaff_r24 & 0xffffffff)) {
          ((undefined1 *)in_r7)[1] = puVar35[1];
        }
        in_r7 = unaff_r24 + in_r7;
      }
LAB_9800b870:
      in_stack_00000054 = (undefined1 *)in_r7;
      goto LAB_9800b5d8;
    }
  }
  uVar33 = 0x35;
LAB_9800c440:
  uVar37 = (undefined4)unaff_r24;
  iVar14 = 2;
  goto LAB_9800b57c;
code_r0x9800b92c:
  if (uVar27 == 3) {
    FUN_9800b578();
    return;
  }
  if (uVar27 == 1) {
    puVar41[0xb] = 0x120;
    puVar41[0xc] = 0x20;
    FUN_9800d9e0(puVar41 + 0x7ab,5,0x20);
    lVar17 = unaff_r31 + 0x1d8b;
    lVar42 = 0x90;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 8;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar17 = unaff_r31 + 0x1e1b;
    lVar42 = 0x70;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 9;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar17 = unaff_r31 + 0x1e8b;
    lVar42 = 0x18;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 7;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar17 = unaff_r31 + 0x1ea3;
    lVar42 = 8;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 8;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
  }
  else {
    for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < 3; unaff_r24 = unaff_r24 + 1) {
      iVar14 = (int)unaff_r24;
      cVar1 = *(char *)(iVar14 + unaff_r20);
      for (; unaff_r27 < (uint)(int)cVar1; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar33 = 0xb;
          goto LAB_9800c5b0;
        }
        pbVar34 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        cVar1 = *(char *)(iVar14 + unaff_r20);
        unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      iVar36 = (int)((unaff_r24 + 0xb & 0xffffffff) << 2);
      uVar38 = (unaff_r22 << ((int)cVar1 & 0x3fU)) - 1U & (uint)unaff_r25;
      *(uint *)(iVar36 + (int)puVar41) = uVar38;
      cVar1 = *(char *)(iVar14 + unaff_r20);
      unaff_r25 = (ulonglong)((uint)unaff_r25 >> ((int)cVar1 & 0x3fU));
      *(uint *)(iVar36 + (int)puVar41) =
           *(ushort *)((int)((unaff_r24 & 0xffffffff) << 1) + unaff_r21) + uVar38;
      unaff_r27 = unaff_r27 - (int)cVar1;
    }
    puVar41[0x7b3] = 0;
    puVar41[0x7b4] = 0;
    puVar41[0x7b5] = 0;
    puVar41[0x7b6] = 0;
    *(undefined2 *)(puVar41 + 0x7b7) = 0;
    *(undefined1 *)((int)puVar41 + 0x1ede) = 0;
    for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < (ulonglong)(uint)puVar41[0xd];
        unaff_r24 = unaff_r24 + 1) {
      for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar33 = 0xe;
          goto LAB_9800c5b0;
        }
        pbVar34 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      bVar2 = (byte)unaff_r25;
      unaff_r25 = unaff_r25 >> 3;
      unaff_r27 = unaff_r27 - 3;
      *(byte *)((int)puVar41 + *(byte *)((int)unaff_r24 + unaff_r15) + 0x1ecc) = bVar2 & 7;
    }
    puVar41[0xd] = 0x13;
  }
  while (iVar14 = puVar41[6], -1 < iVar14) {
    iVar36 = *(int *)(&stack0x00000070 + iVar14 * 4);
    puVar12 = puVar41 + iVar14 * 0x200 + 0x10;
    iVar14 = *(int *)(&stack0x00000080 + iVar14 * 4);
    puVar20 = (undefined8 *)&stack0x000000d8;
    lVar17 = 8;
    do {
      puVar20 = puVar20 + 1;
      *puVar20 = 0;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    FUN_9800d9e0(puVar12,0,0x800);
    if (puVar41[6] == 0) {
      uVar27 = 0x480;
      puVar13 = puVar41 + 0x610;
    }
    else if (puVar41[6] == 1) {
      uVar27 = 0x80;
      puVar13 = puVar41 + 0x730;
    }
    else {
      uVar27 = 0x4c;
      puVar13 = puVar41 + 0x750;
    }
    FUN_9800d9e0(puVar13,0,uVar27);
    uVar38 = 0;
    iVar23 = puVar41[puVar41[6] + 0xb];
    if (iVar23 != 0) {
      uVar19 = puVar41[puVar41[6] + 0xb];
      do {
        pbVar34 = (byte *)(uVar38 + iVar14);
        uVar38 = uVar38 + 1;
        iVar21 = (uint)*pbVar34 * 4;
        *(int *)(&stack0x000000e0 + iVar21) = *(int *)(&stack0x000000e0 + iVar21) + 1;
      } while (uVar38 < uVar19);
    }
    in_stack_00000094 = 0;
    uVar38 = 0;
    in_stack_00000090 = 0;
    iVar21 = 0;
    iVar30 = 4;
    lVar17 = 0xf;
    do {
      uVar38 = *(int *)(&stack0x000000e0 + iVar30) + uVar38;
      iVar21 = (*(int *)(&stack0x000000e0 + iVar30) + iVar21) * 2;
      *(int *)((int)&stack0x00000094 + iVar30) = iVar21;
      iVar30 = iVar30 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if ((iVar21 != 0x10000) && (1 < uVar38)) {
      FUN_9800b578();
      return;
    }
    lVar17 = -1;
    uVar38 = 0;
    if (iVar23 != 0) {
      do {
        bVar2 = *(byte *)(uVar38 + iVar14);
        uVar28 = (ulonglong)bVar2;
        uVar27 = 0;
        if (uVar28 != 0) {
          uVar19 = (&stack0x00000090)[bVar2];
          (&stack0x00000090)[bVar2] = uVar19 + 1;
          uVar39 = (ulonglong)uVar19;
          for (uVar43 = uVar28; uVar43 != 0; uVar43 = uVar43 - 1) {
            uVar27 = (uVar27 & 0x7fffffff) << 1 | uVar39 & 0xffffffff00000001;
            uVar39 = uVar39 >> 1;
          }
          if (uVar28 < 0xb) {
            if (uVar27 < 0x400) {
              do {
                uVar28 = uVar27 & 0xffffffff;
                uVar27 = (uint)(unaff_r22 << (bVar2 & 0x3f)) + uVar27;
                *(ushort *)((int)(uVar28 << 1) + (int)puVar12) = (ushort)bVar2 << 9 | (ushort)uVar38
                ;
              } while ((uVar27 & 0xffffffff) < 0x400);
            }
          }
          else {
            uVar19 = (uint)(uVar27 << 1) & 0x7fe;
            sVar3 = *(short *)(uVar19 + (int)puVar12);
            lVar42 = lVar17;
            lVar18 = (longlong)sVar3;
            if (sVar3 == 0) {
              *(short *)(uVar19 + (int)puVar12) = (short)lVar17;
              lVar42 = lVar17 + -2;
              lVar18 = lVar17;
            }
            lVar17 = lVar42;
            uVar27 = uVar27 >> 9;
            if (0xb < uVar28) {
              lVar29 = uVar28 - 0xb;
              lVar42 = lVar17;
              do {
                uVar27 = uVar27 >> 1;
                psVar31 = (short *)(iVar36 - (int)(((lVar18 - (uVar27 & 1)) + 1 & 0xffffffff) << 1))
                ;
                sVar3 = *psVar31;
                lVar17 = lVar42;
                lVar18 = (longlong)sVar3;
                if (sVar3 == 0) {
                  *psVar31 = (short)lVar42;
                  lVar17 = lVar42 + -2;
                  lVar18 = lVar42;
                }
                lVar29 = lVar29 + -1;
                lVar42 = lVar17;
              } while (lVar29 != 0);
            }
            *(ushort *)((int)((((uVar27 >> 1 & 1) - lVar18) - 1 & 0xffffffff) << 1) + iVar36) =
                 (ushort)uVar38;
          }
        }
        uVar38 = uVar38 + 1;
      } while (uVar38 < (uint)puVar41[puVar41[6] + 0xb]);
    }
    if (puVar41[6] == 2) {
      unaff_r24 = 0;
      while( true ) {
        uVar38 = (uint)unaff_r25;
        uVar27 = (ulonglong)(uint)puVar41[0xc] + (ulonglong)(uint)puVar41[0xb] & 0xffffffff;
        if (uVar27 <= (unaff_r24 & 0xffffffff)) break;
        if (unaff_r27 < 0xf) {
          pbVar34 = (byte *)unaff_r23;
          if ((int)(in_stack_00000050 - (int)pbVar34) < 2) {
            do {
              uVar38 = (uint)unaff_r25;
              sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x820) * 2 + (int)puVar41);
              if (sVar3 < 0) {
                if (10 < unaff_r27) {
                  uVar19 = 10;
                  do {
                    sVar3 = *(short *)(((uVar38 >> (uVar19 & 0x3f) & 1) + ~(int)sVar3 + 0xea0) * 2 +
                                      (int)puVar41);
                    if (-1 < sVar3) goto LAB_9800c018;
                    uVar22 = uVar19 + 2;
                    uVar19 = uVar19 + 1;
                  } while (uVar22 <= unaff_r27);
                }
              }
              else {
                uVar19 = (int)sVar3 >> 9;
                if ((uVar19 != 0) && (uVar19 <= unaff_r27)) break;
              }
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar33 = 0x10;
                goto LAB_9800c5b0;
              }
              pbVar34 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              uVar38 = unaff_r27 & 0x3f;
              unaff_r27 = unaff_r27 + 8;
              unaff_r25 = (uint)*pbVar34 << uVar38 | unaff_r25;
              uVar38 = (uint)unaff_r25;
            } while (unaff_r27 < 0xf);
          }
          else {
            uVar22 = unaff_r27 + 8;
            unaff_r23 = unaff_r23 + 2;
            uVar19 = unaff_r27 & 0x3f;
            unaff_r27 = unaff_r27 + 0x10;
            uVar38 = (uint)pbVar34[1] << (uVar22 & 0x3f) | (uint)*pbVar34 << uVar19 | uVar38;
          }
        }
LAB_9800c018:
        sVar3 = *(short *)(((uVar38 & 0x3ff) + 0x820) * 2 + (int)puVar41);
        in_stack_00000058 = (uint)sVar3;
        if (sVar3 < 0) {
          uVar19 = 10;
          do {
            uVar22 = uVar19 & 0x3f;
            uVar19 = uVar19 + 1;
            sVar3 = *(short *)(((uVar38 >> uVar22 & 1) + ~in_stack_00000058 + 0xea0) * 2 +
                              (int)puVar41);
            in_stack_00000058 = (uint)sVar3;
          } while (sVar3 < 0);
        }
        else {
          uVar19 = (int)sVar3 >> 9;
          in_stack_00000058 = in_stack_00000058 & 0x1ff;
        }
        unaff_r25 = (ulonglong)(uVar38 >> (uVar19 & 0x3f));
        unaff_r27 = unaff_r27 - uVar19;
        iVar14 = (int)unaff_r24;
        if (in_stack_00000058 < 0x10) {
          unaff_r24 = unaff_r24 + 1;
          *(char *)((int)puVar41 + iVar14 + 0x1ee3) = (char)in_stack_00000058;
        }
        else {
          if ((in_stack_00000058 == 0x10) && ((unaff_r24 & 0xffffffff) == 0)) {
            FUN_9800b578();
            return;
          }
          cVar1 = *(char *)(in_stack_00000058 + in_stack_00000068 + -0x10);
          uVar38 = (uint)cVar1;
          unaff_r18 = (uint)cVar1;
          for (; unaff_r27 < uVar38; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar33 = 0x12;
              goto LAB_9800c5b0;
            }
            pbVar34 = (byte *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          unaff_r27 = unaff_r27 - uVar38;
          uVar27 = (ulonglong)(uint)(unaff_r22 << ((int)cVar1 & 0x3fU)) - 1 & unaff_r25;
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> ((int)cVar1 & 0x3fU));
          uVar27 = (longlong)*(char *)(in_stack_00000058 + unaff_r19 + -0x10) + uVar27;
          if (in_stack_00000058 == 0x10) {
            uVar19 = (uint)*(byte *)((int)puVar41 + iVar14 + 0x1ee2);
          }
          else {
            uVar19 = 0;
          }
          FUN_9800d9e0((uint *)((int)puVar41 + iVar14 + 0x1ee3),uVar19,uVar27);
          unaff_r24 = uVar27 + unaff_r24;
          unaff_r18 = uVar38;
        }
      }
      if (uVar27 != (unaff_r24 & 0xffffffff)) {
        FUN_9800b578();
        return;
      }
      FUN_9800d3f0(unaff_r31 + 0x1d8c,unaff_r31 + 0x1ee3,(ulonglong)(uint)puVar41[0xb]);
      FUN_9800d3f0(unaff_r31 + 0x1eac,(ulonglong)(uint)puVar41[0xb] + unaff_r31 + 0x1ee3,
                   (ulonglong)(uint)puVar41[0xc]);
    }
    puVar41[6] = puVar41[6] + -1;
  }
  in_r7 = ZEXT48(in_stack_00000054);
  goto LAB_9800b5d8;
LAB_9800babc:
  if ((unaff_r24 & 0xffffffff) == 0) goto LAB_9800b890;
  if (ZEXT48(in_stack_0000005c) <= (uVar27 & 0xffffffff)) {
    uVar33 = 9;
    goto LAB_9800c440;
  }
  if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
    uVar33 = 0x26;
    goto LAB_9800c5b0;
  }
  uVar39 = in_stack_00000050 - unaff_r23;
  uVar43 = ZEXT48(in_stack_0000005c) - uVar27;
  uVar28 = uVar43;
  if ((uVar39 & 0xffffffff) <= (uVar43 & 0xffffffff)) {
    uVar28 = uVar39;
  }
  uVar40 = unaff_r24;
  if (((uVar28 & 0xffffffff) < (unaff_r24 & 0xffffffff)) &&
     (uVar40 = uVar39, (uVar43 & 0xffffffff) < (uVar39 & 0xffffffff))) {
    uVar40 = uVar43;
  }
  FUN_9800d3f0(uVar27,unaff_r23,uVar40);
  uVar27 = uVar40 + uVar27;
  unaff_r23 = uVar40 + unaff_r23;
  in_stack_00000054 = (undefined1 *)uVar27;
  unaff_r24 = unaff_r24 - uVar40;
  goto LAB_9800babc;
  while( true ) {
    pbVar34 = (byte *)unaff_r23;
    unaff_r23 = unaff_r23 + 1;
    uVar38 = unaff_r27 & 0x3f;
    unaff_r27 = unaff_r27 + 8;
    unaff_r25 = (uint)*pbVar34 << uVar38 | unaff_r25;
    uVar38 = (uint)unaff_r25;
    uVar19 = unaff_r27 & 7;
    if (uVar19 <= unaff_r27) break;
LAB_9800b8a8:
    if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
      uVar33 = 0x20;
      goto LAB_9800c5b0;
    }
  }
LAB_9800b8d4:
  for (unaff_r27 = unaff_r27 - uVar19;
      ((ulonglong)in_stack_000001dc < (unaff_r23 & 0xffffffff) && (7 < unaff_r27));
      unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 - 1;
  }
  unaff_r25 = (ulonglong)(uVar38 >> uVar19) & ~(ulonglong)(uint)(-1 << (unaff_r27 & 0x3f));
  uVar38 = (uint)unaff_r25;
  if ((in_stack_00000204 & 1) != 0) {
    unaff_r24 = 0;
    while( true ) {
      uVar38 = (uint)unaff_r25;
      uVar37 = (undefined4)unaff_r24;
      if (3 < (unaff_r24 & 0xffffffff)) break;
      if (unaff_r27 == 0) {
        if ((unaff_r23 & 0xffffffff) < (ulonglong)in_stack_00000050) {
          uVar38 = (uint)*(byte *)unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          goto LAB_9800c54c;
        }
        uVar33 = 0x2a;
LAB_9800c5b0:
        iVar36 = (int)unaff_r23;
        uVar38 = (uint)unaff_r25;
        uVar37 = (undefined4)unaff_r24;
        *puVar41 = uVar33;
        iVar14 = (-(uint)((in_stack_00000204 & 2) != 0) & 5) - 4;
        if ((iVar14 == 1) || (iVar14 == -4)) goto LAB_9800c610;
        goto LAB_9800c608;
      }
      for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar33 = 0x29;
          goto LAB_9800c5b0;
        }
        pbVar34 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        unaff_r25 = (uint)*pbVar34 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      uVar38 = (uint)unaff_r25 & 0xff;
      unaff_r25 = unaff_r25 >> 8;
      unaff_r27 = unaff_r27 - 8;
LAB_9800c54c:
      unaff_r24 = unaff_r24 + 1;
      puVar41[4] = puVar41[4] << 8 | uVar38;
    }
  }
  uVar33 = 0x22;
  iVar14 = 0;
LAB_9800b57c:
  *puVar41 = uVar33;
LAB_9800c608:
  for (; (iVar36 = (int)unaff_r23, (ulonglong)in_stack_000001dc < (unaff_r23 & 0xffffffff) &&
         (7 < unaff_r27)); unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 - 1;
  }
LAB_9800c610:
  uVar19 = (int)in_stack_00000054 - (int)in_stack_000001f4;
  puVar41[1] = unaff_r27;
  puVar41[8] = in_stack_00000058;
  puVar41[9] = uVar37;
  puVar41[10] = unaff_r18;
  puVar41[0xf] = in_stack_00000060;
  puVar41[0xe] = uVar38 & ~(-1 << (unaff_r27 & 0x3f));
  *in_stack_000001e4 = iVar36 - in_stack_000001dc;
  *in_stack_000001fc = uVar19;
  if (((in_stack_00000204 & 9) != 0) && (-1 < iVar14)) {
    uVar38 = puVar41[7] & 0xffff;
    uVar22 = (uint)puVar41[7] >> 0x10;
    pbVar34 = in_stack_000001f4;
    pbVar11 = (byte *)(uVar19 % 0x15b0);
    while (uVar19 != 0) {
      pbVar16 = (byte *)0x0;
      if ((byte *)0x7 < pbVar11) {
        iVar14 = 7 - (int)pbVar34;
        do {
          pbVar16 = pbVar16 + 8;
          iVar36 = *pbVar34 + uVar38;
          pbVar6 = pbVar34 + 3;
          pbVar7 = pbVar34 + 4;
          iVar23 = (uint)pbVar34[1] + iVar36;
          pbVar8 = pbVar34 + 5;
          pbVar9 = pbVar34 + 6;
          pbVar10 = pbVar34 + 7;
          iVar21 = (uint)pbVar34[2] + iVar23;
          pbVar34 = pbVar34 + 8;
          iVar30 = (uint)*pbVar6 + iVar21;
          iVar24 = (uint)*pbVar7 + iVar30;
          iVar25 = (uint)*pbVar8 + iVar24;
          iVar26 = (uint)*pbVar9 + iVar25;
          uVar38 = (uint)*pbVar10 + iVar26;
          uVar22 = uVar22 + iVar36 + iVar23 + iVar21 + iVar30 + iVar24 + iVar25 + iVar26 + uVar38;
        } while (pbVar34 + iVar14 < pbVar11);
      }
      if (pbVar16 < pbVar11) {
        iVar14 = (int)pbVar11 - (int)pbVar16;
        do {
          bVar2 = *pbVar34;
          pbVar34 = pbVar34 + 1;
          uVar38 = bVar2 + uVar38;
          uVar22 = uVar22 + uVar38;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      uVar38 = uVar38 % 0xfff1;
      uVar22 = uVar22 % 0xfff1;
      uVar19 = uVar19 - (int)pbVar11;
      pbVar11 = (byte *)0x15b0;
    }
    puVar41[7] = uVar22 * 0x10000 + uVar38;
  }
  FUN_9800d270();
  return;
}


/* ==== entry @ 9800c378 ==== */

void entry(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  ulonglong in_r6;
  ulonglong in_r7;
  undefined1 *puVar14;
  ulonglong in_r8;
  byte *pbVar15;
  ulonglong in_r9;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar16;
  uint uVar21;
  ulonglong in_r10;
  longlong lVar17;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar29;
  longlong lVar27;
  short *psVar30;
  ulonglong in_r11;
  ulonglong uVar28;
  undefined1 *puVar31;
  undefined4 uVar32;
  int unaff_r14;
  int unaff_r15;
  int unaff_r16;
  int unaff_r17;
  uint unaff_r18;
  int unaff_r19;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  byte *pbVar33;
  undefined1 *puVar34;
  ulonglong unaff_r23;
  int iVar35;
  ulonglong unaff_r24;
  undefined4 uVar36;
  uint uVar37;
  ulonglong unaff_r25;
  uint unaff_r27;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong unaff_r31;
  undefined4 *puVar40;
  longlong lVar41;
  ulonglong uVar42;
  uint in_stack_00000050;
  undefined1 *in_stack_00000054;
  uint in_stack_00000058;
  undefined1 *in_stack_0000005c;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  uint in_stack_000001dc;
  int *in_stack_000001e4;
  uint in_stack_000001ec;
  byte *in_stack_000001f4;
  uint *in_stack_000001fc;
  uint in_stack_00000204;
  
  do {
    uVar37 = (uint)unaff_r25;
    uVar28 = (in_r6 & in_r11) + in_r10;
    puVar34 = (undefined1 *)uVar28;
    uVar26 = in_r7;
    if ((in_r7 & 0xffffffff) <= (uVar28 & 0xffffffff)) {
      uVar26 = uVar28;
    }
    puVar40 = (undefined4 *)unaff_r31;
    if (ZEXT48(in_stack_0000005c) < (uVar26 + unaff_r24 & 0xffffffff)) {
      while (uVar26 = unaff_r24 & 0xffffffff, unaff_r24 = unaff_r24 - 1, uVar26 != 0) {
        if (ZEXT48(in_stack_0000005c) <= (in_r7 & 0xffffffff)) {
          uVar32 = 0x35;
          goto LAB_9800c440;
        }
        iVar13 = (int)in_r8;
        in_r8 = in_r8 + 1;
        in_stack_00000060 = (undefined4)in_r8;
        *(undefined1 *)in_r7 =
             *(undefined1 *)((iVar13 - (int)in_r9 & in_stack_00000064) + in_stack_000001ec);
        in_r7 = in_r7 + 1;
        in_stack_00000054 = (undefined1 *)in_r7;
      }
    }
    else {
      if (2 < (unaff_r24 & 0xffffffff)) {
        lVar17 = (unaff_r24 - 3 & 0xffffffff) / 3 + 1;
        do {
          puVar31 = (undefined1 *)uVar28;
          unaff_r24 = unaff_r24 - 3;
          puVar14 = (undefined1 *)in_r7;
          *puVar14 = *puVar31;
          puVar14[1] = puVar31[1];
          uVar28 = uVar28 + 3;
          puVar34 = (undefined1 *)uVar28;
          puVar14[2] = puVar31[2];
          in_r7 = in_r7 + 3;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        in_stack_00000054 = (undefined1 *)in_r7;
      }
      if ((unaff_r24 & 0xffffffff) != 0) {
        *(undefined1 *)in_r7 = *puVar34;
        if (1 < (unaff_r24 & 0xffffffff)) {
          ((undefined1 *)in_r7)[1] = puVar34[1];
        }
        in_r7 = unaff_r24 + in_r7;
        goto LAB_9800b870;
      }
    }
LAB_9800b5d8:
    uVar37 = (uint)unaff_r25;
    pbVar33 = (byte *)unaff_r23;
    puVar34 = (undefined1 *)in_r7;
    if (((int)(in_stack_00000050 - (int)pbVar33) < 4) || ((int)in_stack_0000005c - (int)puVar34 < 2)
       ) {
      if (unaff_r27 < 0xf) {
        if ((int)(in_stack_00000050 - (int)pbVar33) < 2) {
          do {
            uVar37 = (uint)unaff_r25;
            sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x20) * 2 + (int)puVar40);
            if (sVar3 < 0) {
              if (10 < unaff_r27) {
                uVar18 = 10;
                do {
                  sVar3 = *(short *)(((uVar37 >> (uVar18 & 0x3f) & 1) + ~(int)sVar3 + 0xc20) * 2 +
                                    (int)puVar40);
                  if (-1 < sVar3) goto LAB_9800b7ec;
                  uVar21 = uVar18 + 2;
                  uVar18 = uVar18 + 1;
                } while (uVar21 <= unaff_r27);
              }
            }
            else {
              uVar18 = (int)sVar3 >> 9;
              if ((uVar18 != 0) && (uVar18 <= unaff_r27)) break;
            }
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar32 = 0x17;
              goto LAB_9800c5b0;
            }
            pbVar33 = (byte *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            uVar37 = unaff_r27 & 0x3f;
            unaff_r27 = unaff_r27 + 8;
            unaff_r25 = (uint)*pbVar33 << uVar37 | unaff_r25;
            uVar37 = (uint)unaff_r25;
          } while (unaff_r27 < 0xf);
        }
        else {
          uVar21 = unaff_r27 + 8;
          unaff_r23 = unaff_r23 + 2;
          uVar18 = unaff_r27 & 0x3f;
          unaff_r27 = unaff_r27 + 0x10;
          uVar37 = (uint)pbVar33[1] << (uVar21 & 0x3f) | (uint)*pbVar33 << uVar18 | uVar37;
        }
      }
LAB_9800b7ec:
      sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x20) * 2 + (int)puVar40);
      unaff_r24 = (ulonglong)sVar3;
      if (sVar3 < 0) {
        uVar18 = 10;
        do {
          uVar21 = uVar18 & 0x3f;
          uVar18 = uVar18 + 1;
          sVar3 = *(short *)((int)((((ulonglong)(uVar37 >> uVar21) & 1) + ~unaff_r24 + 0xc20 &
                                   0xffffffff) << 1) + (int)puVar40);
          unaff_r24 = (ulonglong)sVar3;
        } while (sVar3 < 0);
      }
      else {
        uVar18 = (int)sVar3 >> 9;
        unaff_r24 = unaff_r24 & 0x1ff;
      }
      uVar37 = uVar37 >> (uVar18 & 0x3f);
      unaff_r25 = (ulonglong)uVar37;
      unaff_r27 = unaff_r27 - uVar18;
      if (0xff < (unaff_r24 & 0xffffffff)) goto LAB_9800b884;
      if ((in_r7 & 0xffffffff) < ZEXT48(in_stack_0000005c)) {
        *puVar34 = (char)unaff_r24;
        in_r7 = in_r7 + 1;
        goto LAB_9800b870;
      }
      uVar32 = 0x18;
LAB_9800c440:
      uVar36 = (undefined4)unaff_r24;
      iVar13 = 2;
      goto LAB_9800b57c;
    }
    if (unaff_r27 < 0xf) {
      unaff_r23 = unaff_r23 + 2;
      uVar37 = (uint)CONCAT11(pbVar33[1],*pbVar33) << (unaff_r27 & 0x3f) | uVar37;
      unaff_r27 = unaff_r27 + 0x10;
    }
    sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x20) * 2 + (int)puVar40);
    uVar26 = (ulonglong)sVar3;
    if (sVar3 < 0) {
      uVar18 = 10;
      do {
        uVar21 = uVar18 & 0x3f;
        uVar18 = uVar18 + 1;
        sVar3 = *(short *)((int)((((ulonglong)(uVar37 >> uVar21) & 1) + ~uVar26 + 0xc20 & 0xffffffff
                                 ) << 1) + (int)puVar40);
        uVar26 = (ulonglong)sVar3;
      } while (sVar3 < 0);
    }
    else {
      uVar18 = (int)sVar3 >> 9;
    }
    uVar37 = uVar37 >> (uVar18 & 0x3f);
    unaff_r25 = (ulonglong)uVar37;
    unaff_r27 = unaff_r27 - uVar18;
    unaff_r24 = uVar26;
    if ((uVar26 & 0x100) == 0) {
      if (unaff_r27 < 0xf) {
        puVar14 = (undefined1 *)unaff_r23;
        unaff_r23 = unaff_r23 + 2;
        uVar37 = (uint)CONCAT11(puVar14[1],*puVar14) << (unaff_r27 & 0x3f) | uVar37;
        unaff_r27 = unaff_r27 + 0x10;
      }
      sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x20) * 2 + (int)puVar40);
      unaff_r24 = (ulonglong)sVar3;
      if (sVar3 < 0) {
        uVar18 = 10;
        do {
          uVar21 = uVar18 & 0x3f;
          uVar18 = uVar18 + 1;
          sVar3 = *(short *)((int)((((ulonglong)(uVar37 >> uVar21) & 1) + ~unaff_r24 + 0xc20 &
                                   0xffffffff) << 1) + (int)puVar40);
          unaff_r24 = (ulonglong)sVar3;
        } while (sVar3 < 0);
      }
      else {
        uVar18 = (int)sVar3 >> 9;
      }
      *puVar34 = (char)uVar26;
      unaff_r25 = (ulonglong)(uVar37 >> (uVar18 & 0x3f));
      unaff_r27 = unaff_r27 - uVar18;
      if ((unaff_r24 & 0x100) != 0) {
        in_r7 = in_r7 + 1;
        in_stack_00000054 = (undefined1 *)in_r7;
        goto LAB_9800b884;
      }
      puVar34[1] = (char)unaff_r24;
      in_r7 = in_r7 + 2;
      unaff_r24 = uVar26;
LAB_9800b870:
      in_stack_00000054 = (undefined1 *)in_r7;
      goto LAB_9800b5d8;
    }
LAB_9800b884:
    unaff_r24 = unaff_r24 & 0x1ff;
    if (unaff_r24 == 0x100) {
LAB_9800b890:
      do {
        uVar36 = (undefined4)unaff_r24;
        uVar37 = (uint)unaff_r25;
        if ((puVar40[5] & 1) != 0) {
          uVar18 = unaff_r27 & 7;
          if (unaff_r27 < uVar18) goto LAB_9800b8a8;
          goto LAB_9800b8d4;
        }
        for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
          if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
            uVar32 = 3;
            goto LAB_9800c5b0;
          }
          pbVar33 = (byte *)unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
        }
        uVar26 = unaff_r25 & 7;
        unaff_r25 = unaff_r25 >> 3;
        puVar40[5] = (int)uVar26;
        unaff_r27 = unaff_r27 - 3;
        uVar26 = uVar26 >> 1;
        puVar40[6] = (int)uVar26;
        if (uVar26 != 0) goto code_r0x9800b92c;
        for (; uVar37 = unaff_r27 & 7, unaff_r27 < uVar37; unaff_r27 = unaff_r27 + 8) {
          if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
            uVar32 = 5;
            goto LAB_9800c5b0;
          }
          pbVar33 = (byte *)unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
        }
        unaff_r25 = (ulonglong)((uint)unaff_r25 >> uVar37);
        unaff_r27 = unaff_r27 - uVar37;
        for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < 4; unaff_r24 = unaff_r24 + 1) {
          if (unaff_r27 == 0) {
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar32 = 7;
              goto LAB_9800c5b0;
            }
            puVar34 = (undefined1 *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            *(undefined1 *)((int)puVar40 + (int)unaff_r24 + 0x1edf) = *puVar34;
          }
          else {
            for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar32 = 6;
                goto LAB_9800c5b0;
              }
              pbVar33 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
            }
            uVar5 = (undefined1)unaff_r25;
            unaff_r25 = unaff_r25 >> 8;
            unaff_r27 = unaff_r27 - 8;
            *(undefined1 *)((int)puVar40 + (int)unaff_r24 + 0x1edf) = uVar5;
          }
        }
        unaff_r24 = (ulonglong)
                    CONCAT11(*(undefined1 *)(puVar40 + 0x7b8),*(undefined1 *)((int)puVar40 + 0x1edf)
                            );
        if (unaff_r24 !=
            ((ulonglong)
             CONCAT11(*(undefined1 *)((int)puVar40 + 0x1ee2),*(undefined1 *)((int)puVar40 + 0x1ee1))
            ^ 0xffff)) {
          FUN_9800b578();
          return;
        }
        for (; uVar37 = (uint)unaff_r25, (unaff_r24 & 0xffffffff) != 0; unaff_r24 = unaff_r24 - 1) {
          if (unaff_r27 == 0) {
            uVar26 = ZEXT48(in_stack_00000054);
            goto LAB_9800babc;
          }
          for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar32 = 0x33;
              goto LAB_9800c5b0;
            }
            pbVar33 = (byte *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          in_stack_00000058 = (uint)unaff_r25 & 0xff;
          uVar37 = (uint)(unaff_r25 >> 8);
          unaff_r27 = unaff_r27 - 8;
          if (in_stack_0000005c <= in_stack_00000054) {
            uVar32 = 0x34;
            goto LAB_9800c440;
          }
          *in_stack_00000054 = (char)unaff_r25;
          unaff_r25 = unaff_r25 >> 8;
          in_stack_00000054 = in_stack_00000054 + 1;
        }
      } while( true );
    }
    bVar2 = *(byte *)((int)unaff_r24 + in_stack_0000006c + -0x101);
    uVar37 = (uint)bVar2;
    unaff_r18 = (uint)bVar2;
    unaff_r24 = (ulonglong)*(ushort *)((int)((unaff_r24 - 0x101 & 0xffffffff) << 1) + unaff_r14);
    if (uVar37 != 0) {
      while( true ) {
        if (uVar37 <= unaff_r27) {
          unaff_r27 = unaff_r27 - uVar37;
          uVar26 = (ulonglong)(uint)(unaff_r22 << (bVar2 & 0x3f)) - 1 & unaff_r25;
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> (bVar2 & 0x3f));
          unaff_r24 = uVar26 + unaff_r24;
          goto LAB_9800c1ac;
        }
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) break;
        pbVar33 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        uVar18 = unaff_r27 & 0x3f;
        unaff_r27 = unaff_r27 + 8;
        unaff_r25 = (uint)*pbVar33 << uVar18 | unaff_r25;
      }
      uVar32 = 0x19;
      goto LAB_9800c5b0;
    }
LAB_9800c1ac:
    uVar37 = (uint)unaff_r25;
    if (unaff_r27 < 0xf) {
      pbVar33 = (byte *)unaff_r23;
      if ((int)(in_stack_00000050 - (int)pbVar33) < 2) {
        do {
          uVar37 = (uint)unaff_r25;
          sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x420) * 2 + (int)puVar40);
          if (sVar3 < 0) {
            if (10 < unaff_r27) {
              uVar18 = 10;
              do {
                sVar3 = *(short *)(((uVar37 >> (uVar18 & 0x3f) & 1) + ~(int)sVar3 + 0xe60) * 2 +
                                  (int)puVar40);
                if (-1 < sVar3) goto LAB_9800c2ac;
                uVar21 = uVar18 + 2;
                uVar18 = uVar18 + 1;
              } while (uVar21 <= unaff_r27);
            }
          }
          else {
            uVar18 = (int)sVar3 >> 9;
            if ((uVar18 != 0) && (uVar18 <= unaff_r27)) break;
          }
          if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
            uVar32 = 0x1a;
            goto LAB_9800c5b0;
          }
          pbVar33 = (byte *)unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          uVar37 = unaff_r27 & 0x3f;
          unaff_r27 = unaff_r27 + 8;
          unaff_r25 = (uint)*pbVar33 << uVar37 | unaff_r25;
          uVar37 = (uint)unaff_r25;
        } while (unaff_r27 < 0xf);
      }
      else {
        uVar21 = unaff_r27 + 8;
        unaff_r23 = unaff_r23 + 2;
        uVar18 = unaff_r27 & 0x3f;
        unaff_r27 = unaff_r27 + 0x10;
        uVar37 = (uint)pbVar33[1] << (uVar21 & 0x3f) | (uint)*pbVar33 << uVar18 | uVar37;
      }
    }
LAB_9800c2ac:
    sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x420) * 2 + (int)puVar40);
    uVar26 = (ulonglong)sVar3;
    if (sVar3 < 0) {
      uVar18 = 10;
      do {
        uVar21 = uVar18 & 0x3f;
        uVar18 = uVar18 + 1;
        sVar3 = *(short *)((int)((((ulonglong)(uVar37 >> uVar21) & 1) + ~uVar26 + 0xe60 & 0xffffffff
                                 ) << 1) + (int)puVar40);
        uVar26 = (ulonglong)sVar3;
      } while (sVar3 < 0);
    }
    else {
      uVar18 = (int)sVar3 >> 9;
      uVar26 = uVar26 & 0x1ff;
    }
    bVar2 = *(byte *)((int)uVar26 + unaff_r16);
    uVar21 = (uint)bVar2;
    unaff_r18 = (uint)bVar2;
    unaff_r25 = (ulonglong)(uVar37 >> (uVar18 & 0x3f));
    uVar4 = *(ushort *)((int)((uVar26 & 0xffffffff) << 1) + unaff_r17);
    in_r9 = (ulonglong)uVar4;
    unaff_r27 = unaff_r27 - uVar18;
    in_stack_00000058 = (uint)uVar4;
    if (uVar21 != 0) {
      for (; unaff_r27 < uVar21; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar32 = 0x1b;
          goto LAB_9800c5b0;
        }
        pbVar33 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      unaff_r27 = unaff_r27 - uVar21;
      uVar26 = (ulonglong)(uint)(unaff_r22 << (bVar2 & 0x3f)) - 1 & unaff_r25;
      unaff_r25 = (ulonglong)((uint)unaff_r25 >> (bVar2 & 0x3f));
      in_r9 = uVar26 + in_r9;
      in_stack_00000058 = (uint)in_r9;
    }
    in_r10 = (ulonglong)in_stack_000001ec;
    in_r8 = in_r7 - in_r10;
    in_stack_00000060 = (undefined4)in_r8;
    if (((((in_r9 & 0xffffffff) == 0) || ((in_r8 & 0xffffffff) < (in_r9 & 0xffffffff))) ||
        ((in_r8 & 0xffffffff) == 0)) && ((in_stack_00000204 & 4) != 0)) {
      FUN_9800b578();
      return;
    }
    in_r11 = (ulonglong)in_stack_00000064;
    in_r6 = in_r8 - in_r9;
    unaff_r18 = uVar21;
  } while( true );
code_r0x9800b92c:
  if (uVar26 == 3) {
    FUN_9800b578();
    return;
  }
  if (uVar26 == 1) {
    puVar40[0xb] = 0x120;
    puVar40[0xc] = 0x20;
    FUN_9800d9e0(puVar40 + 0x7ab,5,0x20);
    lVar17 = unaff_r31 + 0x1d8b;
    lVar41 = 0x90;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 8;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    lVar17 = unaff_r31 + 0x1e1b;
    lVar41 = 0x70;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 9;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    lVar17 = unaff_r31 + 0x1e8b;
    lVar41 = 0x18;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 7;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    lVar17 = unaff_r31 + 0x1ea3;
    lVar41 = 8;
    do {
      lVar17 = lVar17 + 1;
      *(undefined1 *)lVar17 = 8;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
  }
  else {
    for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < 3; unaff_r24 = unaff_r24 + 1) {
      iVar13 = (int)unaff_r24;
      cVar1 = *(char *)(iVar13 + unaff_r20);
      for (; unaff_r27 < (uint)(int)cVar1; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar32 = 0xb;
          goto LAB_9800c5b0;
        }
        pbVar33 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        cVar1 = *(char *)(iVar13 + unaff_r20);
        unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      iVar35 = (int)((unaff_r24 + 0xb & 0xffffffff) << 2);
      uVar37 = (unaff_r22 << ((int)cVar1 & 0x3fU)) - 1U & (uint)unaff_r25;
      *(uint *)(iVar35 + (int)puVar40) = uVar37;
      cVar1 = *(char *)(iVar13 + unaff_r20);
      unaff_r25 = (ulonglong)((uint)unaff_r25 >> ((int)cVar1 & 0x3fU));
      *(uint *)(iVar35 + (int)puVar40) =
           *(ushort *)((int)((unaff_r24 & 0xffffffff) << 1) + unaff_r21) + uVar37;
      unaff_r27 = unaff_r27 - (int)cVar1;
    }
    puVar40[0x7b3] = 0;
    puVar40[0x7b4] = 0;
    puVar40[0x7b5] = 0;
    puVar40[0x7b6] = 0;
    *(undefined2 *)(puVar40 + 0x7b7) = 0;
    *(undefined1 *)((int)puVar40 + 0x1ede) = 0;
    for (unaff_r24 = 0; (unaff_r24 & 0xffffffff) < (ulonglong)(uint)puVar40[0xd];
        unaff_r24 = unaff_r24 + 1) {
      for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar32 = 0xe;
          goto LAB_9800c5b0;
        }
        pbVar33 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      bVar2 = (byte)unaff_r25;
      unaff_r25 = unaff_r25 >> 3;
      unaff_r27 = unaff_r27 - 3;
      *(byte *)((int)puVar40 + *(byte *)((int)unaff_r24 + unaff_r15) + 0x1ecc) = bVar2 & 7;
    }
    puVar40[0xd] = 0x13;
  }
  while (iVar13 = puVar40[6], -1 < iVar13) {
    iVar35 = *(int *)(&stack0x00000070 + iVar13 * 4);
    puVar11 = puVar40 + iVar13 * 0x200 + 0x10;
    iVar13 = *(int *)(&stack0x00000080 + iVar13 * 4);
    puVar19 = (undefined8 *)&stack0x000000d8;
    lVar17 = 8;
    do {
      puVar19 = puVar19 + 1;
      *puVar19 = 0;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    FUN_9800d9e0(puVar11,0,0x800);
    if (puVar40[6] == 0) {
      uVar26 = 0x480;
      puVar12 = puVar40 + 0x610;
    }
    else if (puVar40[6] == 1) {
      uVar26 = 0x80;
      puVar12 = puVar40 + 0x730;
    }
    else {
      uVar26 = 0x4c;
      puVar12 = puVar40 + 0x750;
    }
    FUN_9800d9e0(puVar12,0,uVar26);
    uVar37 = 0;
    iVar22 = puVar40[puVar40[6] + 0xb];
    if (iVar22 != 0) {
      uVar18 = puVar40[puVar40[6] + 0xb];
      do {
        pbVar33 = (byte *)(uVar37 + iVar13);
        uVar37 = uVar37 + 1;
        iVar20 = (uint)*pbVar33 * 4;
        *(int *)(&stack0x000000e0 + iVar20) = *(int *)(&stack0x000000e0 + iVar20) + 1;
      } while (uVar37 < uVar18);
    }
    in_stack_00000094 = 0;
    uVar37 = 0;
    in_stack_00000090 = 0;
    iVar20 = 0;
    iVar29 = 4;
    lVar17 = 0xf;
    do {
      uVar37 = *(int *)(&stack0x000000e0 + iVar29) + uVar37;
      iVar20 = (*(int *)(&stack0x000000e0 + iVar29) + iVar20) * 2;
      *(int *)((int)&stack0x00000094 + iVar29) = iVar20;
      iVar29 = iVar29 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if ((iVar20 != 0x10000) && (1 < uVar37)) {
      FUN_9800b578();
      return;
    }
    lVar17 = -1;
    uVar37 = 0;
    if (iVar22 != 0) {
      do {
        bVar2 = *(byte *)(uVar37 + iVar13);
        uVar28 = (ulonglong)bVar2;
        uVar26 = 0;
        if (uVar28 != 0) {
          uVar18 = (&stack0x00000090)[bVar2];
          (&stack0x00000090)[bVar2] = uVar18 + 1;
          uVar38 = (ulonglong)uVar18;
          for (uVar42 = uVar28; uVar42 != 0; uVar42 = uVar42 - 1) {
            uVar26 = (uVar26 & 0x7fffffff) << 1 | uVar38 & 0xffffffff00000001;
            uVar38 = uVar38 >> 1;
          }
          if (uVar28 < 0xb) {
            if (uVar26 < 0x400) {
              do {
                uVar28 = uVar26 & 0xffffffff;
                uVar26 = (uint)(unaff_r22 << (bVar2 & 0x3f)) + uVar26;
                *(ushort *)((int)(uVar28 << 1) + (int)puVar11) = (ushort)bVar2 << 9 | (ushort)uVar37
                ;
              } while ((uVar26 & 0xffffffff) < 0x400);
            }
          }
          else {
            uVar18 = (uint)(uVar26 << 1) & 0x7fe;
            sVar3 = *(short *)(uVar18 + (int)puVar11);
            lVar41 = lVar17;
            lVar16 = (longlong)sVar3;
            if (sVar3 == 0) {
              *(short *)(uVar18 + (int)puVar11) = (short)lVar17;
              lVar41 = lVar17 + -2;
              lVar16 = lVar17;
            }
            lVar17 = lVar41;
            uVar26 = uVar26 >> 9;
            if (0xb < uVar28) {
              lVar27 = uVar28 - 0xb;
              lVar41 = lVar17;
              do {
                uVar26 = uVar26 >> 1;
                psVar30 = (short *)(iVar35 - (int)(((lVar16 - (uVar26 & 1)) + 1 & 0xffffffff) << 1))
                ;
                sVar3 = *psVar30;
                lVar17 = lVar41;
                lVar16 = (longlong)sVar3;
                if (sVar3 == 0) {
                  *psVar30 = (short)lVar41;
                  lVar17 = lVar41 + -2;
                  lVar16 = lVar41;
                }
                lVar27 = lVar27 + -1;
                lVar41 = lVar17;
              } while (lVar27 != 0);
            }
            *(ushort *)((int)((((uVar26 >> 1 & 1) - lVar16) - 1 & 0xffffffff) << 1) + iVar35) =
                 (ushort)uVar37;
          }
        }
        uVar37 = uVar37 + 1;
      } while (uVar37 < (uint)puVar40[puVar40[6] + 0xb]);
    }
    if (puVar40[6] == 2) {
      unaff_r24 = 0;
      while( true ) {
        uVar37 = (uint)unaff_r25;
        uVar26 = (ulonglong)(uint)puVar40[0xc] + (ulonglong)(uint)puVar40[0xb] & 0xffffffff;
        if (uVar26 <= (unaff_r24 & 0xffffffff)) break;
        if (unaff_r27 < 0xf) {
          pbVar33 = (byte *)unaff_r23;
          if ((int)(in_stack_00000050 - (int)pbVar33) < 2) {
            do {
              uVar37 = (uint)unaff_r25;
              sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x820) * 2 + (int)puVar40);
              if (sVar3 < 0) {
                if (10 < unaff_r27) {
                  uVar18 = 10;
                  do {
                    sVar3 = *(short *)(((uVar37 >> (uVar18 & 0x3f) & 1) + ~(int)sVar3 + 0xea0) * 2 +
                                      (int)puVar40);
                    if (-1 < sVar3) goto LAB_9800c018;
                    uVar21 = uVar18 + 2;
                    uVar18 = uVar18 + 1;
                  } while (uVar21 <= unaff_r27);
                }
              }
              else {
                uVar18 = (int)sVar3 >> 9;
                if ((uVar18 != 0) && (uVar18 <= unaff_r27)) break;
              }
              if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
                uVar32 = 0x10;
                goto LAB_9800c5b0;
              }
              pbVar33 = (byte *)unaff_r23;
              unaff_r23 = unaff_r23 + 1;
              uVar37 = unaff_r27 & 0x3f;
              unaff_r27 = unaff_r27 + 8;
              unaff_r25 = (uint)*pbVar33 << uVar37 | unaff_r25;
              uVar37 = (uint)unaff_r25;
            } while (unaff_r27 < 0xf);
          }
          else {
            uVar21 = unaff_r27 + 8;
            unaff_r23 = unaff_r23 + 2;
            uVar18 = unaff_r27 & 0x3f;
            unaff_r27 = unaff_r27 + 0x10;
            uVar37 = (uint)pbVar33[1] << (uVar21 & 0x3f) | (uint)*pbVar33 << uVar18 | uVar37;
          }
        }
LAB_9800c018:
        sVar3 = *(short *)(((uVar37 & 0x3ff) + 0x820) * 2 + (int)puVar40);
        in_stack_00000058 = (uint)sVar3;
        if (sVar3 < 0) {
          uVar18 = 10;
          do {
            uVar21 = uVar18 & 0x3f;
            uVar18 = uVar18 + 1;
            sVar3 = *(short *)(((uVar37 >> uVar21 & 1) + ~in_stack_00000058 + 0xea0) * 2 +
                              (int)puVar40);
            in_stack_00000058 = (uint)sVar3;
          } while (sVar3 < 0);
        }
        else {
          uVar18 = (int)sVar3 >> 9;
          in_stack_00000058 = in_stack_00000058 & 0x1ff;
        }
        unaff_r25 = (ulonglong)(uVar37 >> (uVar18 & 0x3f));
        unaff_r27 = unaff_r27 - uVar18;
        iVar13 = (int)unaff_r24;
        if (in_stack_00000058 < 0x10) {
          unaff_r24 = unaff_r24 + 1;
          *(char *)((int)puVar40 + iVar13 + 0x1ee3) = (char)in_stack_00000058;
        }
        else {
          if ((in_stack_00000058 == 0x10) && ((unaff_r24 & 0xffffffff) == 0)) {
            FUN_9800b578();
            return;
          }
          cVar1 = *(char *)(in_stack_00000058 + in_stack_00000068 + -0x10);
          uVar37 = (uint)cVar1;
          unaff_r18 = (uint)cVar1;
          for (; unaff_r27 < uVar37; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
              uVar32 = 0x12;
              goto LAB_9800c5b0;
            }
            pbVar33 = (byte *)unaff_r23;
            unaff_r23 = unaff_r23 + 1;
            unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          unaff_r27 = unaff_r27 - uVar37;
          uVar26 = (ulonglong)(uint)(unaff_r22 << ((int)cVar1 & 0x3fU)) - 1 & unaff_r25;
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> ((int)cVar1 & 0x3fU));
          uVar26 = (longlong)*(char *)(in_stack_00000058 + unaff_r19 + -0x10) + uVar26;
          if (in_stack_00000058 == 0x10) {
            uVar18 = (uint)*(byte *)((int)puVar40 + iVar13 + 0x1ee2);
          }
          else {
            uVar18 = 0;
          }
          FUN_9800d9e0((uint *)((int)puVar40 + iVar13 + 0x1ee3),uVar18,uVar26);
          unaff_r24 = uVar26 + unaff_r24;
          unaff_r18 = uVar37;
        }
      }
      if (uVar26 != (unaff_r24 & 0xffffffff)) {
        FUN_9800b578();
        return;
      }
      FUN_9800d3f0(unaff_r31 + 0x1d8c,unaff_r31 + 0x1ee3,(ulonglong)(uint)puVar40[0xb]);
      FUN_9800d3f0(unaff_r31 + 0x1eac,(ulonglong)(uint)puVar40[0xb] + unaff_r31 + 0x1ee3,
                   (ulonglong)(uint)puVar40[0xc]);
    }
    puVar40[6] = puVar40[6] + -1;
  }
  in_r7 = ZEXT48(in_stack_00000054);
  goto LAB_9800b5d8;
LAB_9800babc:
  if ((unaff_r24 & 0xffffffff) == 0) goto LAB_9800b890;
  if (ZEXT48(in_stack_0000005c) <= (uVar26 & 0xffffffff)) {
    uVar32 = 9;
    goto LAB_9800c440;
  }
  if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
    uVar32 = 0x26;
    goto LAB_9800c5b0;
  }
  uVar38 = in_stack_00000050 - unaff_r23;
  uVar42 = ZEXT48(in_stack_0000005c) - uVar26;
  uVar28 = uVar42;
  if ((uVar38 & 0xffffffff) <= (uVar42 & 0xffffffff)) {
    uVar28 = uVar38;
  }
  uVar39 = unaff_r24;
  if (((uVar28 & 0xffffffff) < (unaff_r24 & 0xffffffff)) &&
     (uVar39 = uVar38, (uVar42 & 0xffffffff) < (uVar38 & 0xffffffff))) {
    uVar39 = uVar42;
  }
  FUN_9800d3f0(uVar26,unaff_r23,uVar39);
  uVar26 = uVar39 + uVar26;
  unaff_r23 = uVar39 + unaff_r23;
  in_stack_00000054 = (undefined1 *)uVar26;
  unaff_r24 = unaff_r24 - uVar39;
  goto LAB_9800babc;
  while( true ) {
    pbVar33 = (byte *)unaff_r23;
    unaff_r23 = unaff_r23 + 1;
    uVar37 = unaff_r27 & 0x3f;
    unaff_r27 = unaff_r27 + 8;
    unaff_r25 = (uint)*pbVar33 << uVar37 | unaff_r25;
    uVar37 = (uint)unaff_r25;
    uVar18 = unaff_r27 & 7;
    if (uVar18 <= unaff_r27) break;
LAB_9800b8a8:
    if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
      uVar32 = 0x20;
      goto LAB_9800c5b0;
    }
  }
LAB_9800b8d4:
  for (unaff_r27 = unaff_r27 - uVar18;
      ((ulonglong)in_stack_000001dc < (unaff_r23 & 0xffffffff) && (7 < unaff_r27));
      unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 - 1;
  }
  unaff_r25 = (ulonglong)(uVar37 >> uVar18) & ~(ulonglong)(uint)(-1 << (unaff_r27 & 0x3f));
  uVar37 = (uint)unaff_r25;
  if ((in_stack_00000204 & 1) != 0) {
    unaff_r24 = 0;
    while( true ) {
      uVar37 = (uint)unaff_r25;
      uVar36 = (undefined4)unaff_r24;
      if (3 < (unaff_r24 & 0xffffffff)) break;
      if (unaff_r27 == 0) {
        if ((unaff_r23 & 0xffffffff) < (ulonglong)in_stack_00000050) {
          uVar37 = (uint)*(byte *)unaff_r23;
          unaff_r23 = unaff_r23 + 1;
          goto LAB_9800c54c;
        }
        uVar32 = 0x2a;
LAB_9800c5b0:
        iVar35 = (int)unaff_r23;
        uVar37 = (uint)unaff_r25;
        uVar36 = (undefined4)unaff_r24;
        *puVar40 = uVar32;
        iVar13 = (-(uint)((in_stack_00000204 & 2) != 0) & 5) - 4;
        if ((iVar13 == 1) || (iVar13 == -4)) goto LAB_9800c610;
        goto LAB_9800c608;
      }
      for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
        if ((ulonglong)in_stack_00000050 <= (unaff_r23 & 0xffffffff)) {
          uVar32 = 0x29;
          goto LAB_9800c5b0;
        }
        pbVar33 = (byte *)unaff_r23;
        unaff_r23 = unaff_r23 + 1;
        unaff_r25 = (uint)*pbVar33 << (unaff_r27 & 0x3f) | unaff_r25;
      }
      uVar37 = (uint)unaff_r25 & 0xff;
      unaff_r25 = unaff_r25 >> 8;
      unaff_r27 = unaff_r27 - 8;
LAB_9800c54c:
      unaff_r24 = unaff_r24 + 1;
      puVar40[4] = puVar40[4] << 8 | uVar37;
    }
  }
  uVar32 = 0x22;
  iVar13 = 0;
LAB_9800b57c:
  *puVar40 = uVar32;
LAB_9800c608:
  for (; (iVar35 = (int)unaff_r23, (ulonglong)in_stack_000001dc < (unaff_r23 & 0xffffffff) &&
         (7 < unaff_r27)); unaff_r27 = unaff_r27 - 8) {
    unaff_r23 = unaff_r23 - 1;
  }
LAB_9800c610:
  uVar18 = (int)in_stack_00000054 - (int)in_stack_000001f4;
  puVar40[1] = unaff_r27;
  puVar40[8] = in_stack_00000058;
  puVar40[9] = uVar36;
  puVar40[10] = unaff_r18;
  puVar40[0xf] = in_stack_00000060;
  puVar40[0xe] = uVar37 & ~(-1 << (unaff_r27 & 0x3f));
  *in_stack_000001e4 = iVar35 - in_stack_000001dc;
  *in_stack_000001fc = uVar18;
  if (((in_stack_00000204 & 9) != 0) && (-1 < iVar13)) {
    uVar37 = puVar40[7] & 0xffff;
    uVar21 = (uint)puVar40[7] >> 0x10;
    pbVar33 = (byte *)(uVar18 % 0x15b0);
    while (uVar18 != 0) {
      pbVar15 = (byte *)0x0;
      if ((byte *)0x7 < pbVar33) {
        iVar13 = 7 - (int)in_stack_000001f4;
        do {
          pbVar15 = pbVar15 + 8;
          iVar35 = *in_stack_000001f4 + uVar37;
          pbVar6 = in_stack_000001f4 + 3;
          pbVar7 = in_stack_000001f4 + 4;
          iVar22 = (uint)in_stack_000001f4[1] + iVar35;
          pbVar8 = in_stack_000001f4 + 5;
          pbVar9 = in_stack_000001f4 + 6;
          pbVar10 = in_stack_000001f4 + 7;
          iVar20 = (uint)in_stack_000001f4[2] + iVar22;
          in_stack_000001f4 = in_stack_000001f4 + 8;
          iVar29 = (uint)*pbVar6 + iVar20;
          iVar23 = (uint)*pbVar7 + iVar29;
          iVar24 = (uint)*pbVar8 + iVar23;
          iVar25 = (uint)*pbVar9 + iVar24;
          uVar37 = (uint)*pbVar10 + iVar25;
          uVar21 = uVar21 + iVar35 + iVar22 + iVar20 + iVar29 + iVar23 + iVar24 + iVar25 + uVar37;
        } while (in_stack_000001f4 + iVar13 < pbVar33);
      }
      if (pbVar15 < pbVar33) {
        iVar13 = (int)pbVar33 - (int)pbVar15;
        do {
          bVar2 = *in_stack_000001f4;
          in_stack_000001f4 = in_stack_000001f4 + 1;
          uVar37 = bVar2 + uVar37;
          uVar21 = uVar21 + uVar37;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      uVar37 = uVar37 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      uVar18 = uVar18 - (int)pbVar33;
      pbVar33 = (byte *)0x15b0;
    }
    puVar40[7] = uVar21 * 0x10000 + uVar37;
  }
  FUN_9800d270();
  return;
}


/* ==== FUN_9800c7c0 @ 9800c7c0 ==== */

undefined8
FUN_9800c7c0(undefined8 param_1,ulonglong param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar1;
  
  iVar2 = FUN_9800d258();
  uVar3 = FUN_9800b260(param_2,param_4,param_6);
  if (iVar2 == 0) {
    return 0xfffffffffffffffe;
  }
  if ((((param_3 == 8) && (0 < param_5)) && (param_5 < 10)) &&
     ((param_4 == 0xf || (param_4 == -0xf)))) {
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    if (*(int *)(iVar2 + 0x20) == 0) {
      *(undefined1 **)(iVar2 + 0x20) = &SUB_91a07840;
    }
    if (*(int *)(iVar2 + 0x24) == 0) {
      *(undefined4 *)(iVar2 + 0x24) = 0x91a07848;
    }
    puVar4 = (undefined4 *)(**(code **)(iVar2 + 0x20))(*(undefined4 *)(iVar2 + 0x28),1,0x4df40);
    if (puVar4 == (undefined4 *)0x0) {
      return 0xfffffffffffffffc;
    }
    *(undefined4 **)(iVar2 + 0x1c) = puVar4;
    uVar1 = FUN_9800b0e8(puVar4,0,0,uVar3 | 0x2000);
    if ((int)uVar1 == 0) {
      return 0;
    }
    FUN_98008650(iVar2);
  }
  return 0xffffffffffffd8f0;
}


/* ==== FUN_9800c8e0 @ 9800c8e0 ==== */

undefined8 FUN_9800c8e0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar5;
  ulonglong uVar4;
  uint uVar6;
  uint local_3c [15];
  
  puVar5 = (uint *)FUN_9800d254();
  if (puVar5 != (uint *)0x0) {
    uVar6 = puVar5[7];
    if (((((ulonglong)uVar6 != 0) && (-1 < param_2)) && (param_2 < 5)) && (puVar5[3] != 0)) {
      local_3c[0] = puVar5[4];
      if (local_3c[0] != 0) {
        if (param_2 == 1) {
          param_2 = 2;
        }
        if (*(int *)(uVar6 + 0x6c) == 1) {
          if (param_2 == 4) {
            return 1;
          }
        }
        else {
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[5];
          uVar4 = FUN_9800aec8((ulonglong)uVar6,(ulonglong)*puVar5,ZEXT48(&stack0x00000000) - 0x40,
                               puVar5[3],(int *)local_3c,param_2);
          *puVar5 = *puVar5 + uVar1;
          uVar6 = local_3c[0] + puVar5[5];
          puVar5[1] = puVar5[1] - uVar1;
          puVar5[2] = puVar5[2] + uVar1;
          puVar5[0xc] = *(uint *)(puVar5[7] + 0x18);
          puVar5[3] = puVar5[3] + local_3c[0];
          puVar5[4] = puVar5[4] - local_3c[0];
          while( true ) {
            puVar5[5] = uVar6;
            if ((int)uVar4 < 0) {
              return 0xfffffffffffffffe;
            }
            if ((int)uVar4 == 1) {
              return 1;
            }
            if (puVar5[4] == 0) {
              return 0;
            }
            if ((puVar5[1] == 0) && (param_2 != 4)) break;
            uVar6 = puVar5[1];
            local_3c[0] = puVar5[4];
            uVar4 = FUN_9800aec8((ulonglong)puVar5[7],(ulonglong)*puVar5,
                                 ZEXT48(&stack0x00000000) - 0x40,puVar5[3],(int *)local_3c,param_2);
            *puVar5 = *puVar5 + uVar6;
            puVar5[1] = puVar5[1] - uVar6;
            puVar5[2] = puVar5[2] + uVar6;
            puVar5[0xc] = *(uint *)(puVar5[7] + 0x18);
            puVar5[3] = puVar5[3] + local_3c[0];
            puVar5[4] = puVar5[4] - local_3c[0];
            uVar6 = local_3c[0] + puVar5[5];
          }
          if (param_2 != 0) {
            return 0;
          }
          if (puVar5[2] != uVar2) {
            return 0;
          }
          if (puVar5[5] != uVar3) {
            return 0;
          }
        }
      }
      return 0xfffffffffffffffb;
    }
  }
  return 0xfffffffffffffffe;
}


/* ==== FUN_9800cae8 @ 9800cae8 ==== */

/* WARNING: Type propagation algorithm not settling */

longlong FUN_9800cae8(undefined8 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint local_60;
  uint local_5c [23];
  
  puVar4 = (uint *)FUN_9800d244();
  uVar8 = 8;
  if (puVar4 == (uint *)0x0) {
    return -2;
  }
  uVar2 = puVar4[7];
  uVar10 = (ulonglong)uVar2;
  if (uVar10 == 0) {
    return -2;
  }
  if (param_2 == 1) {
    param_2 = 2;
  }
  if (((param_2 != 0) && (param_2 != 2)) && (param_2 != 4)) {
    return -2;
  }
  if (0 < *(int *)(uVar2 + 0x20bc)) {
    uVar8 = 9;
  }
  iVar5 = *(int *)(uVar2 + 0x20b4);
  uVar3 = puVar4[1];
  piVar9 = (int *)(uVar2 + 0xa0c0);
  *(undefined4 *)(uVar2 + 0x20b4) = 0;
  if (-1 < *piVar9) {
    if ((*(uint *)(uVar2 + 0x20b8) != 0) && (param_2 != 4)) {
      return -2;
    }
    *(uint *)(uVar2 + 0x20b8) = (uint)LZCOUNT(param_2 + -4) >> 5 | *(uint *)(uVar2 + 0x20b8);
    if (param_2 == 4) {
      if (iVar5 != 0) {
        local_60 = puVar4[1];
        local_5c[0] = puVar4[4];
        iVar5 = FUN_9800b318(uVar10,(ulonglong)*puVar4,&local_60,(ulonglong)puVar4[3],
                             (ulonglong)puVar4[3],local_5c,uVar8 | 4);
        *piVar9 = iVar5;
        *puVar4 = *puVar4 + local_60;
        puVar4[1] = puVar4[1] - local_60;
        puVar4[2] = puVar4[2] + local_60;
        puVar4[0xc] = *(uint *)(uVar2 + 0x1c);
        puVar4[3] = local_5c[0] + puVar4[3];
        puVar4[4] = puVar4[4] - local_5c[0];
        puVar4[5] = puVar4[5] + local_5c[0];
        if (iVar5 < 0) {
          return -3;
        }
        if (iVar5 != 0) {
          *piVar9 = -1;
          return -5;
        }
        return 1;
      }
    }
    else {
      uVar8 = uVar8 | 2;
    }
    uVar6 = (ulonglong)*(uint *)(uVar2 + 0x20b0);
    if (uVar6 == 0) {
      while( true ) {
        while( true ) {
          local_60 = puVar4[1];
          local_5c[0] = 0x8000 - *(uint *)(uVar2 + 0x20ac);
          iVar5 = FUN_9800b318(uVar10,(ulonglong)*puVar4,&local_60,uVar10 + 0x20c0,
                               *(uint *)(uVar2 + 0x20ac) + uVar10 + 0x20c0,local_5c,uVar8);
          *piVar9 = iVar5;
          puVar4[2] = puVar4[2] + local_60;
          puVar4[1] = puVar4[1] - local_60;
          *puVar4 = *puVar4 + local_60;
          puVar4[0xc] = *(uint *)(uVar2 + 0x1c);
          *(uint *)(uVar2 + 0x20b0) = local_5c[0];
          uVar6 = (ulonglong)puVar4[4];
          if ((ulonglong)local_5c[0] < (ulonglong)puVar4[4]) {
            uVar6 = (ulonglong)local_5c[0];
          }
          FUN_9800d3f0((ulonglong)puVar4[3],*(uint *)(uVar2 + 0x20ac) + uVar10 + 0x20c0,uVar6);
          iVar7 = (int)uVar6;
          puVar4[3] = iVar7 + puVar4[3];
          puVar4[5] = puVar4[5] + iVar7;
          puVar4[4] = puVar4[4] - iVar7;
          uVar6 = *(uint *)(uVar2 + 0x20b0) - uVar6;
          *(int *)(uVar2 + 0x20b0) = (int)uVar6;
          *(uint *)(uVar2 + 0x20ac) = *(int *)(uVar2 + 0x20ac) + iVar7 & 0x7fff;
          if (iVar5 < 0) {
            return -3;
          }
          if ((iVar5 == 1) && (uVar3 == 0)) {
            return -5;
          }
          if (param_2 != 4) break;
          if (iVar5 == 0) {
            return ((-(ulonglong)(uVar6 != 0) & 0xfffffffe) << 0x20 |
                   -(ulonglong)(uVar6 != 0) & 0xfffffffa) + 1;
          }
          if (puVar4[4] == 0) {
            return -5;
          }
        }
        if (iVar5 == 0) break;
        if (puVar4[1] == 0) {
          return 0;
        }
        if (puVar4[4] == 0) {
          return 0;
        }
        if ((uVar6 & 0xffffffff) != 0) {
          return 0;
        }
      }
      bVar1 = (uVar6 & 0xffffffff) == 0;
    }
    else {
      uVar8 = (ulonglong)puVar4[4];
      if (uVar6 < puVar4[4]) {
        uVar8 = uVar6;
      }
      FUN_9800d3f0((ulonglong)puVar4[3],*(uint *)(uVar2 + 0x20ac) + uVar10 + 0x20c0,uVar8);
      iVar5 = (int)uVar8;
      puVar4[3] = iVar5 + puVar4[3];
      puVar4[5] = puVar4[5] + iVar5;
      puVar4[4] = puVar4[4] - iVar5;
      iVar7 = *(int *)(uVar2 + 0x20b0) - iVar5;
      *(int *)(uVar2 + 0x20b0) = iVar7;
      *(uint *)(uVar2 + 0x20ac) = *(int *)(uVar2 + 0x20ac) + iVar5 & 0x7fff;
      if (*piVar9 != 0) {
        return 0;
      }
      bVar1 = iVar7 == 0;
    }
    if (!bVar1) {
      return 0;
    }
    return 1;
  }
  return -3;
}


/* ==== FUN_9800ce80 @ 9800ce80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_9800ce80(undefined8 param_1,int param_2,int param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iStack00000024;
  
  iStack00000024 = param_3;
  if (param_2 == 1) {
    iVar2 = FUN_98014410();
    if (iVar2 != 0) {
      iVar2 = FUN_9800ead8();
      if (iVar2 != 0) {
        iVar2 = FUN_98014338();
        if ((iVar2 == 0) && (iVar2 = FUN_98014258(), iVar2 == 0)) {
          iRam91a1949c = iRam91a1949c + 1;
          goto LAB_9800cef8;
        }
        if (pcRam91a18c40 != (code *)0x0) {
          (*pcRam91a18c40)();
        }
        FUN_9800e848();
      }
      FUN_980143b0();
    }
LAB_9800ceb4:
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      if (iRam91a1949c < 1) goto LAB_9800ceb4;
      iRam91a1949c = iRam91a1949c + -1;
      if (_DAT_91a194c0 == 0) {
        FUN_9800ee30();
      }
      if (param_3 == 0) {
        if (pcRam91a18c40 != (code *)0x0) {
          (*pcRam91a18c40)();
        }
        FUN_9800e848();
        FUN_980143b0();
      }
      FUN_9800cfcc();
    }
LAB_9800cef8:
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== FUN_9800cfcc @ 9800cfcc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800cfcc(void)

{
  int unaff_r30;
  
  if ((unaff_r30 == 0) && (_DAT_91a18390 != -1)) {
    FUN_9800e848();
  }
  return;
}


/* ==== FUN_9800d020 @ 9800d020 ==== */

ulonglong FUN_9800d020(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = FUN_9800d254();
  if (((param_2 & 0xffffffff) == 0) && (iRam91a1949c == 0)) {
    uVar2 = 0;
  }
  else if ((((param_2 & 0xffffffff) == 1) || ((param_2 & 0xffffffff) == 2)) &&
          (lVar3 = FUN_9800ce80(uVar1,param_2,param_3,param_4,param_5,param_6), lVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_9800f078(uVar1,param_2,param_3);
    if (((param_2 & 0xffffffff) == 1) && ((int)uVar2 == 0)) {
      FUN_9800f078(uVar1,0,param_3);
      FUN_9800ce80(uVar1,0,param_3);
    }
    if (((param_2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 3)) {
      lVar3 = FUN_9800ce80(uVar1,param_2,param_3);
      uVar2 = -(ulonglong)(lVar3 != 0) & uVar2;
    }
  }
  return uVar2;
}


/* ==== FUN_9800d148 @ 9800d148 ==== */

void FUN_9800d148(undefined4 *param_1)

{
  FUN_9800f058(*(int *)*param_1,param_1);
  return;
}


/* ==== FUN_9800d180 @ 9800d180 ==== */

void FUN_9800d180(void)

{
  uRam91a18398 = 0x91a0efc0;
  uRam91a1839c = 0x91a0e460;
  uRam91a183a0 = 0x91a0e450;
  uRam91a183a4 = 0x91a0e458;
  uRam91a183a8 = 0x91a0e3d0;
  uRam91a183ac = 0x91a0efc0;
  uRam91a183b0 = 0x91a0ef70;
  uRam91a183b4 = 0x91a0e3f0;
  uRam91a183b8 = 0x91a0e320;
  uRam91a183bc = 0x91a0e280;
  return;
}


/* ==== FUN_9800d220 @ 9800d220 ==== */

void FUN_9800d220(void)

{
  return;
}


/* ==== FUN_9800d234 @ 9800d234 ==== */

void FUN_9800d234(void)

{
  return;
}


/* ==== FUN_9800d23c @ 9800d23c ==== */

void FUN_9800d23c(void)

{
  return;
}


/* ==== FUN_9800d240 @ 9800d240 ==== */

void FUN_9800d240(void)

{
  return;
}


/* ==== FUN_9800d244 @ 9800d244 ==== */

void FUN_9800d244(void)

{
  return;
}


/* ==== FUN_9800d248 @ 9800d248 ==== */

void FUN_9800d248(void)

{
  return;
}


/* ==== FUN_9800d24c @ 9800d24c ==== */

void FUN_9800d24c(void)

{
  return;
}


/* ==== FUN_9800d250 @ 9800d250 ==== */

void FUN_9800d250(void)

{
  return;
}


/* ==== FUN_9800d254 @ 9800d254 ==== */

void FUN_9800d254(void)

{
  return;
}


/* ==== FUN_9800d258 @ 9800d258 ==== */

void FUN_9800d258(void)

{
  return;
}


/* ==== FUN_9800d25c @ 9800d25c ==== */

void FUN_9800d25c(void)

{
  return;
}


/* ==== FUN_9800d270 @ 9800d270 ==== */

void FUN_9800d270(void)

{
  return;
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
  undefined8 in_r0;
  
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

void FUN_9800d318(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar2;
  ulonglong uVar1;
  uint local_aac [2];
  undefined4 local_aa4;
  uint auStack_a60 [662];
  undefined4 local_8;
  
  iVar2 = FUN_9800d25c();
  if (iVar2 != -1) {
    FUN_9800fe18();
  }
  FUN_9800d9e0(local_aac,0,0x4c);
  FUN_9800d9e0(auStack_a60,0,0xa40);
  local_aa4 = local_8;
  local_aac[0] = param_3;
  FUN_980144e8(0);
  uVar1 = FUN_98014500(ZEXT48(&stack0x00000000) - 0xac0);
  if (((uVar1 & 0xffffffff) == 0) && (iVar2 != -1)) {
    FUN_9800fe18();
  }
  return;
}


/* ==== FUN_9800d3b8 @ 9800d3b8 ==== */

void FUN_9800d3b8(void)

{
  ulonglong uVar1;
  uint uVar3;
  longlong lVar2;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong in_r6;
  
  uVar6 = 1;
  iVar5 = -0x3ffffbe9;
  FUN_9800d318(2,0xffffffffc0000417,1);
  uVar1 = FUN_980180c8(0x1e,iVar5,uVar6,in_r6);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar6 = func_0x980179a8();
    uVar3 = FUN_98016dd0(uVar6,0,uVar1);
    if (uVar3 == 0) {
      lVar2 = FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *(undefined4 *)lVar2 = uVar4;
    }
  }
  return;
}


/* ==== thunk_FUN_9800da80 @ 9800d3e0 ==== */

void thunk_FUN_9800da80(ulonglong param_1)

{
  undefined8 uVar1;
  uint uVar3;
  longlong lVar2;
  undefined4 uVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = func_0x980179a8();
    uVar3 = FUN_98016dd0(uVar1,0,param_1);
    if (uVar3 == 0) {
      lVar2 = FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *(undefined4 *)lVar2 = uVar4;
    }
  }
  return;
}


/* ==== FUN_9800d3f0 @ 9800d3f0 ==== */

ulonglong FUN_9800d3f0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar14;
  longlong lVar13;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  
  dataCacheBlockTouch(param_2);
  uVar15 = 8 - (param_1 & 7);
  uVar10 = param_1;
  if ((param_1 & 7) == 0) {
LAB_9800d454:
    bVar1 = 0x7f < (param_3 & 0xffffffff);
    if ((param_2 & 7) == 4) {
      uVar15 = param_2 - 4;
      if (bVar1) {
        lVar13 = uVar10 - 4;
        uVar11 = 0x80 - (uVar10 & 0x7f);
        if ((uVar10 & 0x7f) != 0) {
          uVar10 = (uVar11 & 0xffffffff) >> 2;
          param_3 = param_3 - uVar11;
          do {
            uVar15 = uVar15 + 4;
            lVar13 = lVar13 + 4;
            *(undefined4 *)lVar13 = *(undefined4 *)uVar15;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        uVar10 = (param_3 & 0xffffffff) >> 7;
        if (uVar10 != 0) {
          bVar1 = (param_3 & 0x7f) == 0;
          lVar21 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
          lVar12 = 4;
          do {
            dataCacheBlockTouch(lVar12 + uVar15);
            lVar12 = lVar12 + 0x80;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = uVar15 + param_3;
          lVar22 = lVar13 + param_3;
          do {
            while( true ) {
              iVar17 = 8;
              do {
                iVar17 = iVar17 + -1;
                iVar8 = (int)uVar15;
                uVar5 = *(undefined4 *)(iVar8 + 8);
                uVar6 = *(undefined4 *)(iVar8 + 0xc);
                iVar9 = (int)lVar13;
                *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
                uVar15 = uVar15 + 0x10;
                uVar7 = *(undefined4 *)uVar15;
                *(undefined4 *)(iVar9 + 8) = uVar5;
                *(undefined4 *)(iVar9 + 0xc) = uVar6;
                lVar13 = lVar13 + 0x10;
                *(undefined4 *)lVar13 = uVar7;
              } while (iVar17 != 0);
              if ((lVar21 - lVar12 & 0xffffffffU) <= (uVar15 & 0xffffffff)) break;
              dataCacheBlockTouch(lVar12 + uVar15);
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_9800d648;
            }
            if (!bVar1) {
              dataCacheBlockTouchForStore(lVar22 + -1);
              bVar1 = false;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        dataCacheBlockTouchForStore(uVar10);
        lVar13 = uVar10 - 4;
      }
LAB_9800d648:
      uVar10 = param_3 & 3;
      for (uVar11 = (param_3 & 0xffffffff) >> 2 & 0x1f; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar15 = uVar15 + 4;
        lVar13 = lVar13 + 4;
        *(undefined4 *)lVar13 = *(undefined4 *)uVar15;
      }
      if (uVar10 != 0) {
        lVar13 = lVar13 + 3;
        lVar12 = uVar15 + 3;
        do {
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 + 1;
          *(undefined1 *)lVar13 = *(undefined1 *)lVar12;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return param_1;
    }
    if ((param_2 & 7) != 0) {
      uVar15 = param_2 - 1;
      if (bVar1) {
        lVar13 = uVar10 - 1;
        lVar12 = 0x80 - (uVar10 & 0x7f);
        if ((uVar10 & 0x7f) != 0) {
          param_3 = param_3 - lVar12;
          do {
            uVar15 = uVar15 + 1;
            lVar13 = lVar13 + 1;
            *(undefined1 *)lVar13 = *(undefined1 *)uVar15;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        uVar10 = (param_3 & 0xffffffff) >> 7;
        if (uVar10 != 0) {
          bVar1 = (param_3 & 0x7f) == 0;
          lVar21 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
          lVar12 = 1;
          do {
            dataCacheBlockTouch(lVar12 + uVar15);
            lVar12 = lVar12 + 0x80;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = uVar15 + param_3;
          lVar22 = lVar13 + param_3;
          do {
            while( true ) {
              iVar17 = 0x20;
              do {
                iVar8 = (int)uVar15;
                iVar17 = iVar17 + -1;
                bVar4 = *(byte *)(iVar8 + 2);
                uVar15 = uVar15 + 4;
                *(undefined4 *)((int)lVar13 + 1) = *(undefined4 *)(iVar8 + 1);
                lVar13 = lVar13 + 4;
              } while (iVar17 != 0);
              if ((lVar21 - lVar12 & 0xffffffffU) <= (uVar15 & 0xffffffff)) break;
              dataCacheBlockTouch(bVar4 + uVar15);
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_9800d778;
            }
            if (!bVar1) {
              dataCacheBlockTouchForStore(lVar22 + -1);
              bVar1 = false;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        dataCacheBlockTouchForStore(uVar10);
        lVar13 = uVar10 - 1;
      }
LAB_9800d778:
      for (uVar10 = param_3 & 0x7f; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 1;
        *(undefined1 *)lVar13 = *(undefined1 *)uVar15;
      }
      return param_1;
    }
    if (bVar1) {
      uVar11 = uVar10 - 8;
      uVar15 = param_2 - 8;
      uVar18 = 0x80 - (uVar10 & 0x7f);
      if ((uVar10 & 0x7f) != 0) {
        uVar10 = (uVar18 & 0xffffffff) >> 3;
        param_3 = param_3 - uVar18;
        do {
          uVar15 = uVar15 + 8;
          uVar11 = uVar11 + 8;
          *(undefined8 *)uVar11 = *(undefined8 *)uVar15;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar10 = (param_3 & 0xffffffff) >> 7;
      if (uVar10 != 0) {
        bVar1 = (param_3 & 0x7f) == 0;
        lVar12 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
        lVar13 = 8;
        do {
          dataCacheBlockTouch(lVar13 + uVar15);
          lVar13 = lVar13 + 0x80;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        lVar12 = uVar15 + param_3;
        lVar21 = uVar11 + param_3;
        do {
          while( true ) {
            iVar17 = (int)uVar15;
            uVar19 = *(undefined8 *)(iVar17 + 0x10);
            uVar20 = *(undefined8 *)(iVar17 + 0x18);
            iVar8 = (int)uVar11;
            *(undefined8 *)(iVar8 + 8) = *(undefined8 *)(iVar17 + 8);
            uVar16 = *(undefined8 *)(iVar17 + 0x20);
            *(undefined8 *)(iVar8 + 0x10) = uVar19;
            uVar19 = *(undefined8 *)(iVar17 + 0x28);
            *(undefined8 *)(iVar8 + 0x18) = uVar20;
            uVar20 = *(undefined8 *)(iVar17 + 0x30);
            *(undefined8 *)(iVar8 + 0x20) = uVar16;
            uVar16 = *(undefined8 *)(iVar17 + 0x38);
            *(undefined8 *)(iVar8 + 0x28) = uVar19;
            uVar19 = *(undefined8 *)(iVar17 + 0x40);
            *(undefined8 *)(iVar8 + 0x30) = uVar20;
            uVar20 = *(undefined8 *)(iVar17 + 0x48);
            *(undefined8 *)(iVar8 + 0x38) = uVar16;
            uVar16 = *(undefined8 *)(iVar17 + 0x50);
            *(undefined8 *)(iVar8 + 0x40) = uVar19;
            uVar19 = *(undefined8 *)(iVar17 + 0x58);
            *(undefined8 *)(iVar8 + 0x48) = uVar20;
            uVar20 = *(undefined8 *)(iVar17 + 0x60);
            *(undefined8 *)(iVar8 + 0x50) = uVar16;
            uVar16 = *(undefined8 *)(iVar17 + 0x68);
            *(undefined8 *)(iVar8 + 0x58) = uVar19;
            uVar19 = *(undefined8 *)(iVar17 + 0x70);
            *(undefined8 *)(iVar8 + 0x60) = uVar20;
            uVar20 = *(undefined8 *)(iVar17 + 0x78);
            *(undefined8 *)(iVar8 + 0x68) = uVar16;
            uVar15 = uVar15 + 0x80;
            uVar16 = *(undefined8 *)uVar15;
            *(undefined8 *)(iVar8 + 0x70) = uVar19;
            *(undefined8 *)(iVar8 + 0x78) = uVar20;
            uVar11 = uVar11 + 0x80;
            *(undefined8 *)uVar11 = uVar16;
            if ((lVar12 - lVar13 & 0xffffffffU) <= (uVar15 & 0xffffffff)) break;
            dataCacheBlockTouch(lVar13 + uVar15);
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_9800d47c;
          }
          if (!bVar1) {
            dataCacheBlockTouchForStore(lVar21 + -1);
            bVar1 = false;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_9800d47c;
    }
  }
  else if ((uVar15 & 0xffffffff) < (param_3 & 0xffffffff)) {
    if ((uVar15 & 0xffffffff) == 4) {
      param_3 = param_3 - uVar15;
      puVar14 = (undefined4 *)param_2;
      param_2 = param_2 + 4;
      *(undefined4 *)param_1 = *puVar14;
      uVar10 = param_1 + 4;
    }
    else {
      param_3 = param_3 - uVar15;
      lVar12 = param_1 - 1;
      lVar13 = param_2 - 1;
      do {
        lVar22 = lVar13;
        lVar21 = lVar12;
        lVar13 = lVar22 + 1;
        lVar12 = lVar21 + 1;
        *(undefined1 *)lVar12 = *(undefined1 *)lVar13;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      uVar10 = lVar21 + 2;
      param_2 = lVar22 + 2;
    }
    goto LAB_9800d454;
  }
  dataCacheBlockTouchForStore(uVar10);
  uVar15 = param_2 - 8;
  uVar11 = uVar10 - 8;
LAB_9800d47c:
  uVar10 = param_3 & 7;
  for (uVar18 = (param_3 & 0xffffffff) >> 3 & 0xf; uVar18 != 0; uVar18 = uVar18 - 1) {
    uVar15 = uVar15 + 8;
    uVar11 = uVar11 + 8;
    *(undefined8 *)uVar11 = *(undefined8 *)uVar15;
  }
  if (uVar10 != 0) {
    if (uVar10 == 4) {
      iVar17 = (int)uVar15;
      uVar5 = *(undefined4 *)(iVar17 + 8);
      iVar8 = (int)uVar11;
      if ((uVar11 & 3) != 0) {
        uVar2 = *(undefined1 *)(iVar17 + 9);
        uVar3 = *(undefined1 *)(iVar17 + 10);
        *(undefined1 *)(iVar8 + 8) = *(undefined1 *)(iVar17 + 8);
        *(undefined1 *)(iVar8 + 9) = uVar2;
        *(undefined1 *)(iVar8 + 10) = uVar3;
        *(char *)(iVar8 + 0xb) = (char)uVar5;
        return param_1;
      }
      *(undefined4 *)(iVar8 + 8) = uVar5;
      return param_1;
    }
    lVar12 = uVar11 + 7;
    lVar13 = uVar15 + 7;
    do {
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 1;
      *(undefined1 *)lVar12 = *(undefined1 *)lVar13;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return param_1;
}


/* ==== FUN_9800d888 @ 9800d888 ==== */

void FUN_9800d888(undefined8 param_1,undefined4 *param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong in_CTR;
  ulonglong uVar3;
  
  do {
    param_3 = param_3 - 1;
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_4 = uVar1;
    param_4 = (undefined4 *)((int)param_4 + 1);
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && ((uint)param_4 & 3) != 0);
  uVar3 = (param_3 & 0xffffffff) >> 2;
  if (uVar3 != 0) {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_4 = uVar2;
        param_4 = param_4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    else {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_4 = uVar2;
        param_4 = param_4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    do {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_4 = uVar1;
      param_4 = (undefined4 *)((int)param_4 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}


/* ==== FUN_9800d920 @ 9800d920 ==== */

void FUN_9800d920(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((int)param_1 == (int)param_2) {
    return;
  }
  if ((int)param_2 <= (int)param_1) {
    lVar2 = param_3 + 1;
    uVar4 = param_2 + param_3;
    for (uVar3 = param_1 + param_3; lVar2 = lVar2 + -1, lVar2 != 0 && (uVar3 & 3) != 0;
        uVar3 = uVar3 - 1) {
      param_3 = param_3 - 1;
      iVar1 = (int)uVar4;
      uVar4 = uVar4 - 1;
      *(undefined1 *)((int)uVar3 + -1) = *(undefined1 *)(iVar1 + -1);
    }
    uVar5 = (param_3 & 0xffffffff) >> 2;
    if (uVar5 != 0) {
      if ((uVar4 & 3) == 0) {
        do {
          iVar1 = (int)uVar4;
          uVar4 = uVar4 - 4;
          *(undefined4 *)((int)uVar3 + -4) = *(undefined4 *)(iVar1 + -4);
          uVar3 = uVar3 - 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      else {
        do {
          iVar1 = (int)uVar4;
          uVar3 = uVar3 - 4;
          uVar4 = uVar4 - 4;
          *(undefined4 *)uVar3 = *(undefined4 *)(iVar1 + -4);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    uVar5 = param_3 & 3;
    if (uVar5 != 0) {
      do {
        iVar1 = (int)uVar4;
        uVar4 = uVar4 - 1;
        *(undefined1 *)((int)uVar3 + -1) = *(undefined1 *)(iVar1 + -1);
        uVar3 = uVar3 - 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
    return;
  }
  FUN_9800d3f0(param_1,param_2,param_3);
  return;
}


/* ==== FUN_9800d9e0 @ 9800d9e0 ==== */

void FUN_9800d9e0(uint *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 uVar3;
  uint uVar2;
  uint *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar5;
  
  lVar1 = param_3 + 1;
  while( true ) {
    lVar1 = lVar1 + -1;
    uVar3 = (undefined1)param_2;
    if (lVar1 == 0 || ((uint)param_1 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(undefined1 *)param_1 = uVar3;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar2 = (param_2 & 0xff) << 8;
  uVar2 = (uVar2 | param_2 & 0xffff00ff) << 0x10 | uVar2 | param_2 & 0xff;
  for (uVar5 = (param_3 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    param_1 = param_1 + 4;
  }
  uVar5 = (param_3 & 0xffffffff) >> 2 & 3;
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

void FUN_9800da80(ulonglong param_1)

{
  undefined8 uVar1;
  uint uVar3;
  longlong lVar2;
  undefined4 uVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = func_0x980179a8();
    uVar3 = FUN_98016dd0(uVar1,0,param_1);
    if (uVar3 == 0) {
      lVar2 = FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *(undefined4 *)lVar2 = uVar4;
    }
  }
  return;
}


/* ==== FUN_9800dae0 @ 9800dae0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_9800dae0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar4;
  undefined8 uVar2;
  uint *puVar5;
  longlong lVar3;
  int iVar6;
  
  uVar1 = FUN_9800d258();
  if ((uVar1 & 0xffffffff) < 0xfffff001) {
    do {
      iVar6 = (int)param_2;
      iVar4 = func_0x980179a8();
      if (iVar4 == 0) {
        FUN_9800fff0();
        FUN_9800ffc0(0x1e);
        FUN_9800ebb0(0xff,iVar6,param_3,param_4);
      }
      param_3 = uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        param_3 = 1;
      }
      uVar2 = func_0x980179a8();
      param_2 = 0;
      puVar5 = FUN_980164d8(uVar2,0,param_3);
      if ((longlong)(int)puVar5 != 0) {
        return (longlong)(int)puVar5;
      }
      if (_DAT_91a194c8 == 0) {
        lVar3 = FUN_9800fe98();
        *(undefined4 *)lVar3 = 0xc;
        break;
      }
      uVar2 = FUN_9800e1f8();
    } while ((int)uVar2 != 0);
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 0xc;
  }
  else {
    FUN_9800e1f8();
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 0xc;
  }
  return 0;
}


/* ==== FUN_9800dba8 @ 9800dba8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_9800dba8(undefined8 param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar4;
  longlong lVar3;
  ushort uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  char cVar13;
  
  pbVar4 = (byte *)FUN_9800d248();
  if ((param_2 & 0xffffffff) != 0) {
    *(undefined4 *)param_2 = pbVar4;
  }
  if ((pbVar4 == (byte *)0x0) || ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3))))))
  {
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 0x16;
    FUN_9800d2e0();
    return 0;
  }
  bVar1 = *pbVar4;
  uVar10 = 0;
  iVar7 = _DAT_91a18778;
  pbVar2 = pbVar4;
  while( true ) {
    pbVar11 = pbVar2 + 1;
    if (*(int *)(iVar7 + 0xac) < 2) {
      uVar12 = *(ushort *)((uint)bVar1 * 2 + *(int *)(iVar7 + 200)) & 8;
    }
    else {
      uVar5 = FUN_98010038((uint)bVar1,8);
      uVar12 = (uint)(short)uVar5;
      iVar7 = _DAT_91a18778;
    }
    if (uVar12 == 0) break;
    bVar1 = *pbVar11;
    pbVar2 = pbVar11;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_9800dc84:
    bVar1 = *pbVar11;
    pbVar11 = pbVar2 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_9800dc84;
  uVar12 = (uint)bVar1;
  if (param_3 == 0) {
    if (bVar1 != 0x30) {
      param_3 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar11 != 0x78) && (*pbVar11 != 0x58)) {
      param_3 = 8;
      goto LAB_9800dd00;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar1 == 0x30)) && ((*pbVar11 == 0x78 || (*pbVar11 == 0x58)))) {
    uVar12 = (uint)pbVar11[1];
    pbVar11 = pbVar11 + 2;
  }
LAB_9800dd00:
  uVar6 = (ulonglong)(int)param_3;
  trapDoubleWordImmediate(6,uVar6,0);
  do {
    uVar5 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200));
    cVar13 = (char)uVar12;
    if ((uVar5 & 4) == 0) {
      if ((uVar5 & 0x103) == 0) {
LAB_9800dd9c:
        pbVar11 = pbVar11 + -1;
        if ((param_4 & 8) == 0) {
          if ((param_2 & 0xffffffff) != 0) {
            pbVar11 = pbVar4;
          }
          uVar10 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x8000000000000000 < uVar10)) ||
                  (((int)(param_4 & 2) == 0 && (0x7fffffffffffffff < uVar10)))))))) {
          lVar3 = FUN_9800fe98();
          *(undefined4 *)lVar3 = 0x22;
          if ((param_4 & 1) == 0) {
            uVar10 = 0x8000000000000000;
            if ((param_4 & 2) == 0) {
              uVar10 = 0x7fffffffffffffff;
            }
          }
          else {
            uVar10 = 0xffffffffffffffff;
          }
        }
        if ((param_2 & 0xffffffff) != 0) {
          *(undefined4 *)param_2 = pbVar11;
        }
        if ((param_4 & 2) != 0) {
          uVar10 = -uVar10;
        }
        return uVar10;
      }
      iVar8 = (int)cVar13;
      if (('`' < cVar13) && (cVar13 < '{')) {
        iVar8 = iVar8 + -0x20;
      }
      uVar12 = iVar8 - 0x37;
    }
    else {
      uVar12 = (int)cVar13 - 0x30;
    }
    if (param_3 <= uVar12) goto LAB_9800dd9c;
    uVar9 = param_4 | 8;
    if ((uVar10 < 0xffffffffffffffff / uVar6) ||
       ((uVar10 == 0xffffffffffffffff / uVar6 &&
        (trapDoubleWordImmediate(6,uVar6,0),
        (ulonglong)uVar12 <= -((0xffffffffffffffff / uVar6) * uVar6) - 1)))) {
      uVar10 = uVar6 * uVar10 + (ulonglong)uVar12;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar9 = param_4;
      if ((param_2 & 0xffffffff) == 0) goto LAB_9800dd9c;
    }
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    param_4 = uVar9;
  } while( true );
}


/* ==== FUN_9800de68 @ 9800de68 ==== */

void FUN_9800de68(undefined8 param_1,ulonglong param_2,uint param_3)

{
  FUN_9800dba8(param_1,param_2,param_3,1);
  return;
}


/* ==== FUN_9800de70 @ 9800de70 ==== */

longlong FUN_9800de70(byte *param_1,byte *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < 1) {
    return 0;
  }
  lVar1 = (ulonglong)*param_1 - (ulonglong)*param_2;
  lVar2 = param_3 + -1;
  if (lVar2 == 0 || *param_1 == 0) {
    return lVar1;
  }
  do {
    if (lVar1 != 0) {
      return lVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    lVar1 = (ulonglong)*param_1 - (ulonglong)*param_2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0 && *param_1 != 0);
  return lVar1;
}


/* ==== FUN_9800dec0 @ 9800dec0 ==== */

undefined4 FUN_9800dec0(undefined1 *param_1,ulonglong param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((param_1 == (undefined1 *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 0x16;
    FUN_9800d2e0();
    uVar5 = 0x16;
  }
  else {
    if (param_3 == (char *)0x0) {
      *param_1 = 0;
      lVar3 = FUN_9800fe98();
      puVar4 = (undefined4 *)lVar3;
      uVar5 = 0x16;
    }
    else {
      iVar2 = (int)param_1 - (int)param_3;
      do {
        cVar1 = *param_3;
        param_3[iVar2] = cVar1;
        param_3 = param_3 + 1;
        if (cVar1 == '\0') break;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      if ((param_2 & 0xffffffff) != 0) {
        return 0;
      }
      *param_1 = 0;
      lVar3 = FUN_9800fe98();
      puVar4 = (undefined4 *)lVar3;
      uVar5 = 0x22;
    }
    *puVar4 = uVar5;
    FUN_9800d2e0();
  }
  return uVar5;
}


/* ==== FUN_9800df78 @ 9800df78 ==== */

void FUN_9800df78(void)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  
  FUN_9800d3f0(ZEXT48(&stack0x00000000) - 0x40,0xffffffff91a015dc,0x20);
  func_0x980179b8(local_40,local_3c,local_30,ZEXT48(&stack0x00000000) - 0x2c);
  return;
}


/* ==== FUN_9800e03c @ 9800e03c ==== */

undefined8 FUN_9800e03c(void)

{
  undefined8 unaff_r31;
  
  return unaff_r31;
}


/* ==== FUN_9800e058 @ 9800e058 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_9800e058(void)

{
  undefined8 uVar1;
  
  _DAT_91a198ec = FUN_980101a0(0x20,4);
  _DAT_91a198f0 = _DAT_91a198ec;
  if (_DAT_91a198ec == (uint *)0x0) {
    uVar1 = 0x18;
  }
  else {
    uVar1 = 0;
    *_DAT_91a198ec = 0;
  }
  return uVar1;
}


/* ==== FUN_9800e0b8 @ 9800e0b8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9800e0b8(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 local_60;
  
  uVar2 = FUN_9800d244();
  FUN_9800ebb8(uVar2,param_2,param_3,param_4);
  puVar7 = _DAT_91a198ec;
  uVar6 = (ulonglong)_DAT_91a198f0;
  if (uVar6 <= ZEXT48(_DAT_91a198ec)) {
    lVar4 = ZEXT48(_DAT_91a198ec) - uVar6;
    uVar5 = lVar4 + 4;
    if (3 < (uVar5 & 0xffffffff)) {
      uVar3 = FUN_98010148(_DAT_91a198f0);
      if ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar5 = uVar3;
        if (0x7ff < (uVar3 & 0xffffffff)) {
          uVar5 = 0x800;
        }
        if ((((uVar5 + uVar3 & 0xffffffff) < (uVar3 & 0xffffffff)) ||
            (uVar5 = FUN_9800e2b8(uVar6,uVar5 + uVar3,param_3,param_4), uVar1 = (uint)uVar5,
            (uVar5 & 0xffffffff) == 0)) &&
           (((uVar3 + 0x10 & 0xffffffff) < (uVar3 & 0xffffffff) ||
            (uVar6 = FUN_9800e2b8(uVar6,uVar3 + 0x10,param_3,param_4), uVar1 = (uint)uVar6,
            (uVar6 & 0xffffffff) == 0)))) goto LAB_9800e17c;
        _DAT_91a198f0 = uVar1;
        puVar7 = (undefined4 *)(((int)lVar4 >> 2) * 4 + _DAT_91a198f0);
      }
      _DAT_91a198ec = puVar7 + 1;
      local_60 = (undefined4)uVar2;
      *puVar7 = local_60;
      goto LAB_9800d294;
    }
  }
LAB_9800e17c:
  local_60 = 0;
LAB_9800d294:
  FUN_9800e19c();
  return local_60;
}


/* ==== FUN_9800e19c @ 9800e19c ==== */

void FUN_9800e19c(void)

{
  FUN_9800ebc0();
  return;
}


/* ==== FUN_9800e1c0 @ 9800e1c0 ==== */

longlong FUN_9800e1c0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  
  iVar1 = FUN_9800e0b8(param_1,param_2,param_3,param_4);
  return -(ulonglong)(iVar1 == 0);
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

undefined8 FUN_9800e1f8(void)

{
  int iVar1;
  
  if ((_DAT_91a194a8 != (code *)0x0) && (iVar1 = (*_DAT_91a194a8)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_9800e240 @ 9800e240 ==== */

void FUN_9800e240(char *param_1,int param_2,ulonglong param_3)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  pcVar2 = param_1;
  do {
    pcVar4 = pcVar2;
    cVar1 = pcVar4[param_2 - (int)param_1];
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    param_3 = param_3 - 1;
    pcVar2 = pcVar4 + 1;
  } while (param_3 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  uVar3 = param_3 - 1;
  if (uVar3 != 0) {
    if ((uVar3 & 0xffffffff) != 0) {
      do {
        pcVar4 = pcVar4 + 1;
        *pcVar4 = '\0';
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return;
    }
    return;
  }
  return;
}


/* ==== FUN_9800e2a0 @ 9800e2a0 ==== */

longlong FUN_9800e2a0(longlong param_1)

{
  if ((int)param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < (int)param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_9800e2b8 @ 9800e2b8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_9800e2b8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_9800d254();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = FUN_9800dae0(param_2,param_2,param_3,param_4);
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      FUN_9800da80(uVar1);
    }
    else {
      do {
        if (0xfffff000 < (param_2 & 0xffffffff)) {
          FUN_9800e1f8();
          lVar2 = FUN_9800fe98();
          *(undefined4 *)lVar2 = 0xc;
          goto LAB_9800e368;
        }
        if ((param_2 & 0xffffffff) == 0) {
          param_2 = 1;
        }
        uVar3 = func_0x980179a8();
        lVar2 = FUN_980170c8(uVar3,0,uVar1,param_2);
        if (lVar2 != 0) {
          return lVar2;
        }
        if (_DAT_91a194c8 == 0) {
          lVar2 = FUN_9800fe98();
          uVar4 = thunk_FUN_98007a68();
          uVar5 = FUN_9800fe28(uVar4);
          *(undefined4 *)lVar2 = uVar5;
          return 0;
        }
        uVar3 = FUN_9800e1f8();
      } while ((int)uVar3 != 0);
      lVar2 = FUN_9800fe98();
      uVar4 = thunk_FUN_98007a68();
      uVar5 = FUN_9800fe28(uVar4);
      *(undefined4 *)lVar2 = uVar5;
    }
LAB_9800e368:
    lVar2 = 0;
  }
  return lVar2;
}


/* ==== FUN_9800e320 @ 9800e320 ==== */

longlong FUN_9800e320(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r31;
  
  while( true ) {
    lVar1 = FUN_980170c8(param_1,param_2,param_3,param_4);
    if (lVar1 != 0) {
      return lVar1;
    }
    if (*(int *)(unaff_r27 + -0x6b38) == 0) {
      lVar1 = FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *(undefined4 *)lVar1 = uVar4;
      return 0;
    }
    uVar2 = FUN_9800e1f8();
    if ((int)uVar2 == 0) {
      lVar1 = FUN_9800fe98();
      uVar3 = thunk_FUN_98007a68();
      uVar4 = FUN_9800fe28(uVar3);
      *(undefined4 *)lVar1 = uVar4;
      return 0;
    }
    if ((unaff_r29 & 0xffffffff) < (unaff_r31 & 0xffffffff)) break;
    param_4 = unaff_r31;
    if ((unaff_r31 & 0xffffffff) == 0) {
      param_4 = 1;
    }
    param_1 = func_0x980179a8();
    param_2 = 0;
    param_3 = unaff_r28;
    unaff_r31 = param_4;
  }
  FUN_9800e1f8();
  lVar1 = FUN_9800fe98();
  *(undefined4 *)lVar1 = 0xc;
  return 0;
}


/* ==== FUN_9800e3a8 @ 9800e3a8 ==== */

undefined8 FUN_9800e3a8(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar3;
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)FUN_9800d25c();
  uVar4 = 0xffffffffffffffff;
  if (puVar3 == (undefined4 *)0x0) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if ((puVar3[3] & 0x83) != 0) {
      uVar4 = FUN_9800e550();
      FUN_98010ea0(puVar3);
      uVar2 = FUN_98010e60((int)puVar3);
      uVar2 = FUN_98010d00(uVar2,param_2,param_3,param_4);
      if ((int)uVar2 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      else if ((ulonglong)(uint)puVar3[7] != 0) {
        FUN_9800da80((ulonglong)(uint)puVar3[7]);
        puVar3[7] = 0;
      }
    }
    puVar3[3] = 0;
  }
  return uVar4;
}


/* ==== FUN_9800e3e0 @ 9800e3e0 ==== */

undefined8 FUN_9800e3e0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint in_r11;
  undefined8 unaff_r30;
  undefined4 *unaff_r31;
  
  if ((in_r11 & 0x83) != 0) {
    unaff_r30 = FUN_9800e550();
    FUN_98010ea0(unaff_r31);
    uVar1 = FUN_98010e60((int)unaff_r31);
    uVar1 = FUN_98010d00(uVar1,param_2,param_3,param_4);
    if ((int)uVar1 < 0) {
      unaff_r30 = 0xffffffffffffffff;
    }
    else if ((ulonglong)(uint)unaff_r31[7] != 0) {
      FUN_9800da80((ulonglong)(uint)unaff_r31[7]);
      unaff_r31[7] = 0;
    }
  }
  unaff_r31[3] = 0;
  return unaff_r30;
}


/* ==== FUN_9800e450 @ 9800e450 ==== */

ulonglong FUN_9800e450(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uStack00000014;
  undefined4 uStack_20;
  
  uStack00000014 = (uint)param_1;
  uStack_20 = 0xffffffff;
  if (param_1 == 0) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if ((*(uint *)(uStack00000014 + 0xc) & 0x40) == 0) {
      FUN_980106e0(uStack00000014,param_2,param_3,param_4);
      uVar3 = FUN_9800e3a8(param_1,param_2,param_3,param_4);
      uStack_20 = (uint)uVar3;
      FUN_9800e514();
    }
    else {
      *(undefined4 *)(uStack00000014 + 0xc) = 0;
    }
    uVar2 = (ulonglong)uStack_20;
  }
  return uVar2;
}


/* ==== FUN_9800e514 @ 9800e514 ==== */

void FUN_9800e514(void)

{
  undefined8 unaff_r30;
  
  FUN_980107a0(unaff_r30);
  return;
}


/* ==== FUN_9800e550 @ 9800e550 ==== */

undefined8 FUN_9800e550(void)

{
  uint *puVar2;
  ulonglong uVar1;
  ulonglong in_r6;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  puVar2 = (uint *)FUN_9800d258();
  uVar4 = 0;
  if ((puVar2[3] & 3) == 2) {
    if ((puVar2[3] & 0x108) != 0) {
      uVar3 = puVar2[2];
      uVar5 = (ulonglong)*puVar2 - (ulonglong)uVar3;
      if (0 < (longlong)uVar5) {
        uVar1 = FUN_98010e60((int)puVar2);
        uVar1 = FUN_98011218(uVar1,(ulonglong)uVar3,uVar5,in_r6);
        uVar3 = puVar2[3];
        if ((int)uVar1 == (int)uVar5) {
          if ((uVar3 & 0x80) == 0) goto LAB_9800e5c8;
          uVar3 = uVar3 & 0xfffffffd;
        }
        else {
          uVar4 = 0xffffffffffffffff;
          uVar3 = uVar3 | 0x20;
        }
        puVar2[3] = uVar3;
      }
    }
  }
LAB_9800e5c8:
  puVar2[1] = 0;
  *puVar2 = puVar2[2];
  return uVar4;
}


/* ==== FUN_9800e5e8 @ 9800e5e8 ==== */

longlong FUN_9800e5e8(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_9800e668();
  }
  else {
    uVar2 = FUN_9800e550();
    if ((int)uVar2 == 0) {
      if ((*(uint *)(param_1 + 0xc) & 0x4000) == 0) {
        lVar1 = 0;
      }
      else {
        FUN_98010e60(param_1);
        lVar1 = FUN_980113a0();
        lVar1 = -(ulonglong)(lVar1 != 0);
      }
    }
    else {
      lVar1 = -1;
    }
  }
  return lVar1;
}


/* ==== FUN_9800e668 @ 9800e668 ==== */

int FUN_9800e668(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = FUN_9800d254();
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_980104f8(1,param_2,param_3,param_4);
  uVar4 = 0xffffffff91a198e4;
  for (iVar5 = 0; iVar5 < *(int *)uVar4; iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(iVar5 * 4 + iRam91a198e0);
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_98010750(iVar5);
      uVar1 = *(uint *)(*(int *)(iVar5 * 4 + iRam91a198e0) + 0xc);
      uVar4 = (ulonglong)uVar1 & 0x83;
      if ((int)uVar4 != 0) {
        if (iVar2 == 1) {
          iVar3 = FUN_9800e5e8();
          if (iVar3 != -1) {
            uStack_3c = uStack_3c + 1;
          }
        }
        else if (((iVar2 == 0) && ((uVar1 & 2) != 0)) && (iVar3 = FUN_9800e5e8(), iVar3 == -1)) {
          uStack_38 = -1;
        }
      }
      FUN_9800e7dc();
    }
  }
  FUN_9800e78c();
  if (iVar2 != 1) {
    uStack_3c = uStack_38;
  }
  return uStack_3c;
}


/* ==== FUN_9800e78c @ 9800e78c ==== */

void FUN_9800e78c(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_9800e7dc @ 9800e7dc ==== */

void FUN_9800e7dc(void)

{
  int unaff_r28;
  int *unaff_r29;
  
  FUN_980107e0(unaff_r28,*(undefined4 *)(unaff_r28 * 4 + *unaff_r29));
  return;
}


/* ==== FUN_9800e840 @ 9800e840 ==== */

int FUN_9800e840(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = FUN_9800d254();
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_980104f8(1,param_2,param_3,param_4);
  uVar4 = 0xffffffff91a198e4;
  for (iVar5 = 0; iVar5 < *(int *)uVar4; iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(iVar5 * 4 + iRam91a198e0);
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_98010750(iVar5);
      uVar1 = *(uint *)(*(int *)(iVar5 * 4 + iRam91a198e0) + 0xc);
      uVar4 = (ulonglong)uVar1 & 0x83;
      if ((int)uVar4 != 0) {
        if (iVar2 == 1) {
          iVar3 = FUN_9800e5e8();
          if (iVar3 != -1) {
            uStack_3c = uStack_3c + 1;
          }
        }
        else if (((iVar2 == 0) && ((uVar1 & 2) != 0)) && (iVar3 = FUN_9800e5e8(), iVar3 == -1)) {
          uStack_38 = -1;
        }
      }
      FUN_9800e7dc();
    }
  }
  FUN_9800e78c();
  if (iVar2 != 1) {
    uStack_3c = uStack_38;
  }
  return uStack_3c;
}


/* ==== FUN_9800e848 @ 9800e848 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800e848(void)

{
  if (_DAT_91a18390 != -1) {
    FUN_980180f8();
    _DAT_91a18390 = -1;
  }
  FUN_98010208();
  return;
}


/* ==== FUN_9800e890 @ 9800e890 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_9800e890(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar4;
  uint uVar5;
  
  FUN_9800d25c();
  uVar3 = thunk_FUN_98007a68();
  uVar1 = FUN_980180d8();
  if (uVar1 == 0) {
    uVar2 = FUN_980180e8();
    uVar1 = 0;
    if ((int)uVar2 != 0) {
      puVar4 = FUN_980101a0(1,0xc4);
      uVar1 = (ulonglong)(int)puVar4;
      if (uVar1 == 0) {
        FUN_980180e8();
      }
      else {
        uVar2 = FUN_980180e8();
        if ((int)uVar2 == 0) {
          FUN_9800da80(uVar1);
          uVar1 = 0;
        }
        else {
          puVar4[2] = 0;
          puVar4[0x17] = 0x91a01600;
          puVar4[5] = 1;
          uVar5 = func_0x98017a78();
          *puVar4 = uVar5;
          puVar4[1] = 0xffffffff;
        }
      }
    }
  }
  else {
    uVar1 = -(ulonglong)(uVar1 != 1) & uVar1;
  }
  thunk_FUN_98007a18(uVar3);
  return uVar1;
}


/* ==== FUN_9800e968 @ 9800e968 ==== */

ulonglong FUN_9800e968(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  uVar1 = FUN_9800e890();
  if (uVar1 == 0) {
    FUN_9800ee40(0x10,param_2,param_3,param_4);
  }
  return uVar1;
}


/* ==== FUN_9800e9a8 @ 9800e9a8 ==== */

void FUN_9800e9a8(ulonglong param_1)

{
  int iVar1;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar1 = (int)param_1;
    if ((ulonglong)*(uint *)(iVar1 + 0x24) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x24));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x2c) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x2c));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x34) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x34));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x3c) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x3c));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x40) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x40));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x44) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x44));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x48) != 0) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x48));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x5c) != 0x91a01600) {
      FUN_9800da80((ulonglong)*(uint *)(iVar1 + 0x5c));
    }
    FUN_9800da80(param_1);
  }
  return;
}


/* ==== FUN_9800ea68 @ 9800ea68 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800ea68(ulonglong param_1)

{
  if (_DAT_91a18390 != -1) {
    if ((param_1 & 0xffffffff) == 0) {
      param_1 = FUN_980180d8();
    }
    FUN_980180e8();
    FUN_9800e9a8(param_1);
  }
  return;
}


/* ==== FUN_9800ead8 @ 9800ead8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_9800ead8(void)

{
  int iVar2;
  uint *puVar3;
  ulonglong uVar1;
  uint uVar4;
  
  FUN_9800ebc8();
  iVar2 = FUN_98010330();
  if ((((iVar2 != 0) && (_DAT_91a18390 = func_0x98018108(), _DAT_91a18390 != -1)) &&
      (puVar3 = FUN_980101a0(1,0xc4), puVar3 != (uint *)0x0)) &&
     (uVar1 = FUN_980180e8(), (int)uVar1 != 0)) {
    puVar3[2] = 0;
    puVar3[0x17] = 0x91a01600;
    puVar3[5] = 1;
    uVar4 = func_0x98017a78();
    *puVar3 = uVar4;
    puVar3[1] = 0xffffffff;
    uRam91a194b4 = 0x91a10710;
    func_0x98017a88(0xffffffff91a194ac,1);
    return 1;
  }
  FUN_9800e848();
  return 0;
}


/* ==== FUN_9800ebb0 @ 9800ebb0 ==== */

void FUN_9800ebb0(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_980180c8(0,param_2,param_3,param_4);
  return;
}


/* ==== FUN_9800ebb8 @ 9800ebb8 ==== */

void FUN_9800ebb8(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  FUN_980104f8(8,param_2,param_3,param_4);
  return;
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

void FUN_9800ec08(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/* ==== FUN_9800ec68 @ 9800ec68 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800ec68(undefined8 param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iStack0000001c;
  
  lVar3 = (longlong)param_2;
  iVar2 = FUN_9800d248();
  iStack0000001c = (int)lVar3;
  lVar4 = lVar3;
  FUN_980104f8(8,lVar3,param_3,param_4);
  iVar5 = (int)lVar4;
  if (_DAT_91a194c4 != 1) {
    iVar6 = -0x6e5e0000;
    if (_DAT_91a194c0 == 1) {
      iVar6 = -0x6e5e0000;
      FUN_980180c8(0,iVar5,param_3,param_4);
    }
    *(undefined4 *)(iVar6 + -0x6b40) = 1;
    DAT_91a194bc = (undefined1)lVar3;
    if (iVar2 == 0) {
      piVar8 = _DAT_91a198f0;
      piVar9 = _DAT_91a198f0;
      piVar7 = _DAT_91a198ec;
      piVar10 = _DAT_91a198ec;
      if (_DAT_91a198f0 != (int *)0x0) {
        while (piVar10 = piVar10 + -1, piVar8 <= piVar10) {
          if (*piVar10 != 0) {
            if (piVar10 < piVar8) break;
            pcVar1 = (code *)*piVar10;
            *piVar10 = 0;
            (*pcVar1)();
            if ((piVar9 != _DAT_91a198f0) || (piVar7 != _DAT_91a198ec)) {
              piVar8 = _DAT_91a198f0;
              piVar9 = _DAT_91a198f0;
              piVar7 = _DAT_91a198ec;
              piVar10 = _DAT_91a198ec;
            }
          }
        }
      }
      FUN_9800ec08((undefined4 *)0x91a1802c,(undefined4 *)0x91a18034);
    }
    iVar5 = -0x6e5e7fc4;
    FUN_9800ec08((undefined4 *)0x91a18038,(undefined4 *)0x91a1803c);
  }
  FUN_9800edec();
  if (iStack0000001c == 0) {
    FUN_980180c8(0,iVar5,param_3,param_4);
  }
  return;
}


/* ==== FUN_9800edec @ 9800edec ==== */

void FUN_9800edec(void)

{
  int unaff_r24;
  
  if (unaff_r24 != 0) {
    FUN_98010278();
  }
  return;
}


/* ==== FUN_9800ee30 @ 9800ee30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800ee30(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  uVar4 = 1;
  iVar2 = FUN_9800d248();
  uVar3 = uVar4;
  FUN_980104f8(8,uVar4,param_3,param_4);
  iVar5 = (int)uVar3;
  if (_DAT_91a194c4 != 1) {
    iVar6 = -0x6e5e0000;
    if (_DAT_91a194c0 == 1) {
      iVar6 = -0x6e5e0000;
      FUN_980180c8(0,iVar5,param_3,param_4);
    }
    *(undefined4 *)(iVar6 + -0x6b40) = 1;
    DAT_91a194bc = (undefined1)uVar4;
    if (iVar2 == 0) {
      piVar8 = _DAT_91a198f0;
      piVar9 = _DAT_91a198f0;
      piVar7 = _DAT_91a198ec;
      piVar10 = _DAT_91a198ec;
      if (_DAT_91a198f0 != (int *)0x0) {
        while (piVar10 = piVar10 + -1, piVar8 <= piVar10) {
          if (*piVar10 != 0) {
            if (piVar10 < piVar8) break;
            pcVar1 = (code *)*piVar10;
            *piVar10 = 0;
            (*pcVar1)();
            if ((piVar9 != _DAT_91a198f0) || (piVar7 != _DAT_91a198ec)) {
              piVar8 = _DAT_91a198f0;
              piVar9 = _DAT_91a198f0;
              piVar7 = _DAT_91a198ec;
              piVar10 = _DAT_91a198ec;
            }
          }
        }
      }
      FUN_9800ec08((undefined4 *)0x91a1802c,(undefined4 *)0x91a18034);
    }
    iVar5 = -0x6e5e7fc4;
    FUN_9800ec08((undefined4 *)0x91a18038,(undefined4 *)0x91a1803c);
  }
  FUN_9800edec();
  if ((int)uVar4 == 0) {
    FUN_980180c8(0,iVar5,param_3,param_4);
  }
  return;
}


/* ==== FUN_9800ee40 @ 9800ee40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ee40(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_9800fff0();
  FUN_9800ffc0(param_1);
  FUN_9800ec68(1,0,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ee70 @ 9800ee70 ==== */

undefined8 FUN_9800ee70(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  iVar7 = FUN_9800d258();
  uVar6 = FUN_9800e890();
  if (uVar6 == 0) {
    return 0;
  }
  iVar5 = (int)uVar6;
  piVar1 = *(int **)(iVar5 + 0x5c);
  piVar9 = piVar1;
  do {
    if (*piVar9 == iVar7) break;
    piVar9 = piVar9 + 3;
  } while (piVar9 < piVar1 + 0x24);
  if ((piVar1 + 0x24 <= piVar9) || (*piVar9 != iVar7)) {
    piVar9 = (int *)0x0;
  }
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  pcVar2 = (code *)piVar9[2];
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  if (pcVar2 == (code *)0x5) {
    piVar9[2] = 0;
    return 1;
  }
  if (pcVar2 == (code *)0x1) {
    return 0xffffffffffffffff;
  }
  uVar3 = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar5 + 0x60) = param_2;
  if (piVar9[1] != 8) {
    piVar9[2] = 0;
    (*pcVar2)();
    goto LAB_9800f044;
  }
  iVar7 = 0x24;
  lVar11 = 9;
  do {
    iVar8 = iVar7 + *(int *)(iVar5 + 0x5c);
    iVar7 = iVar7 + 0xc;
    *(undefined4 *)(iVar8 + 8) = 0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar7 = *piVar9;
  uVar4 = *(undefined4 *)(iVar5 + 100);
  if (iVar7 == -0x3fffff72) {
    uVar10 = 0x83;
LAB_9800f01c:
    *(undefined4 *)(iVar5 + 100) = uVar10;
  }
  else {
    if (iVar7 == -0x3fffff70) {
      uVar10 = 0x81;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3fffff6f) {
      uVar10 = 0x84;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3fffff6d) {
      uVar10 = 0x85;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3fffff73) {
      uVar10 = 0x82;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3fffff71) {
      uVar10 = 0x86;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3fffff6e) {
      uVar10 = 0x8a;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3ffffd4b) {
      uVar10 = 0x8d;
      goto LAB_9800f01c;
    }
    if (iVar7 == -0x3ffffd4c) {
      uVar10 = 0x8e;
      goto LAB_9800f01c;
    }
  }
  (*pcVar2)(8,*(undefined4 *)(iVar5 + 100));
  *(undefined4 *)(iVar5 + 100) = uVar4;
LAB_9800f044:
  *(undefined4 *)(iVar5 + 0x60) = uVar3;
  return 0xffffffffffffffff;
}


/* ==== FUN_9800f058 @ 9800f058 ==== */

undefined8 FUN_9800f058(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_9800ee70(0xffffffffe06d7363,param_2);
    return uVar1;
  }
  return 0;
}


/* ==== FUN_9800f078 @ 9800f078 ==== */

undefined8 FUN_9800f078(void)

{
  return 1;
}


/* ==== FUN_9800f080 @ 9800f080 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800f080(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  byte bVar4;
  
  lVar2 = FUN_9800e2a0((longlong)(char)*param_1);
  if ((int)lVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      uVar3 = FUN_98010558((uint)*param_1);
    } while (uVar3 != 0);
  }
  lVar2 = FUN_9800e2a0((longlong)(char)*param_1);
  if ((int)lVar2 == 0x78) {
    param_1 = param_1 + 2;
  }
  bVar4 = *param_1;
  *param_1 = *(byte *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
  do {
    bVar1 = param_1[1];
    param_1[1] = bVar4;
    param_1 = param_1 + 1;
    bVar4 = bVar1;
  } while (*param_1 != 0);
  return;
}


/* ==== FUN_9800f120 @ 9800f120 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800f120(char *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  
  lVar2 = (longlong)*param_1;
  if (lVar2 != 0) {
    do {
      if ((int)lVar2 == (int)*(char *)**(undefined4 **)(_DAT_91a18778 + 0xbc)) break;
      param_1 = param_1 + 1;
      lVar2 = (longlong)*param_1;
    } while (lVar2 != 0);
  }
  param_1 = param_1 + 1;
  if ((int)lVar2 != 0) {
    cVar1 = *param_1;
    while (((pcVar4 = param_1, cVar1 != '\0' && (cVar1 != 'e')) && (cVar1 != 'E'))) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + -1;
    } while (*pcVar4 == '0');
    if (*pcVar4 == *(char *)**(undefined4 **)(_DAT_91a18778 + 0xbc)) {
      pcVar4 = pcVar3 + -2;
    }
    param_1 = param_1 + -1;
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}


/* ==== FUN_9800f1f0 @ 9800f1f0 ==== */

void FUN_9800f1f0(int param_1,uint *param_2,longlong param_3)

{
  uint local_20 [2];
  undefined8 local_18;
  
  if (param_1 == 0) {
    FUN_980116b0(local_20,param_3);
    *param_2 = local_20[0];
  }
  else {
    FUN_98011608((uint *)&local_18,param_3);
    *(undefined8 *)param_2 = local_18;
  }
  return;
}


/* ==== FUN_9800f268 @ 9800f268 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_9800f268(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4,int *param_5,
            char param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar7;
  char *pcVar10;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar6;
  
  uVar1 = FUN_9800d24c();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = FUN_9800fe98();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d2e0();
    uVar3 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      lVar2 = FUN_9800fe98();
      puVar4 = (undefined4 *)lVar2;
      uVar3 = 0x16;
    }
    else {
      if ((((((param_3 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(param_3 == 0) & param_3) + 9 &
          0xffffffff) < (param_2 & 0xffffffff)) {
        if ((param_6 != '\0') &&
           (uVar7 = (*param_5 == 0x2d) + uVar1, uVar8 = uVar7, 0 < (int)param_3)) {
          do {
            pcVar10 = (char *)uVar8;
            uVar8 = uVar8 + 1;
          } while (*pcVar10 != '\0');
          FUN_9800d920(uVar7 + 1,uVar7,((uVar8 - uVar7) - 1 & 0xffffffff) + 1);
        }
        uVar8 = uVar1;
        if (*param_5 == 0x2d) {
          uVar8 = uVar1 + 1;
          *(undefined1 *)uVar1 = 0x2d;
        }
        if (0 < (int)param_3) {
          puVar6 = (undefined1 *)uVar8;
          uVar8 = uVar8 + 1;
          *puVar6 = puVar6[1];
          *(undefined1 *)uVar8 = *(undefined1 *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
        }
        lVar2 = (param_6 == '\0') + uVar8 + param_3;
        if ((int)param_2 == -1) {
          uVar1 = 0xffffffffffffffff;
        }
        else {
          uVar1 = (uVar1 - lVar2) + param_2;
        }
        puVar6 = (undefined1 *)lVar2;
        iVar5 = FUN_9800dec0(puVar6,uVar1,(char *)0x91a016a8);
        if (iVar5 == 0) {
          if (param_4 != 0) {
            *puVar6 = 0x45;
          }
          if (*(char *)param_5[3] != '0') {
            lVar9 = (ulonglong)(uint)param_5[1] - 1;
            if (lVar9 < 0) {
              lVar9 = -lVar9;
              puVar6[1] = 0x2d;
            }
            iVar5 = (int)lVar9;
            if (99 < iVar5) {
              puVar6[2] = (char)(iVar5 / 100) + puVar6[2];
              lVar9 = lVar9 + (longlong)(iVar5 / 100) * -100;
            }
            iVar5 = (int)lVar9;
            if (9 < iVar5) {
              puVar6[3] = (char)(iVar5 / 10) + puVar6[3];
              lVar9 = lVar9 + (longlong)(iVar5 / 10) * -10;
            }
            puVar6[4] = puVar6[4] + (char)lVar9;
          }
          if (((_DAT_91a19724 & 1) != 0) && (*(char *)(lVar2 + 2U) == '0')) {
            FUN_9800d920(lVar2 + 2U,lVar2 + 3,3);
          }
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_9800d3b8();
      }
      lVar2 = FUN_9800fe98();
      puVar4 = (undefined4 *)lVar2;
      uVar3 = 0x22;
    }
    *puVar4 = uVar3;
    FUN_9800d2e0();
  }
  return uVar3;
}


/* ==== FUN_9800f4b8 @ 9800f4b8 ==== */

int FUN_9800f4b8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int local_50 [4];
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800d258();
  FUN_98011998(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    iVar3 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = (param_3 - (local_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    iVar3 = FUN_98011758((ulonglong)(local_50[0] == 0x2d) +
                         ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,uVar4,param_4 + 1,
                         (int)local_50);
    if (iVar3 == 0) {
      iVar3 = FUN_9800f268(param_2,param_3,param_4,param_5,local_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return iVar3;
}


/* ==== FUN_9800f5a8 @ 9800f5a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_9800f5a8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                longlong param_5)

{
  undefined8 uVar1;
  int *piVar2;
  ulonglong *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short sVar10;
  ulonglong uVar11;
  char cVar13;
  char *pcVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar17;
  longlong lVar16;
  longlong lVar18;
  
  uVar1 = FUN_9800d250();
  lVar18 = 0x3ff;
  sVar10 = 0x30;
  uVar8 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    lVar18 = FUN_9800fe98();
    *(undefined4 *)lVar18 = 0x16;
    FUN_9800d2e0();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    lVar18 = FUN_9800fe98();
    piVar2 = (int *)lVar18;
    iVar4 = 0x16;
LAB_9800f604:
    *piVar2 = iVar4;
    FUN_9800d2e0();
    return iVar4;
  }
  puVar6 = (undefined1 *)param_2;
  *puVar6 = 0;
  if ((param_3 & 0xffffffff) <= (uVar8 + 0xb & 0xffffffff)) {
    lVar18 = FUN_9800fe98();
    piVar2 = (int *)lVar18;
    iVar4 = 0x22;
    goto LAB_9800f604;
  }
  puVar3 = (ulonglong *)uVar1;
  if ((*puVar3 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      uVar7 = 0xffffffffffffffff;
    }
    else {
      uVar7 = param_3 - 2;
    }
    iVar4 = FUN_9800f4b8(uVar1,param_2 + 2,uVar7,uVar8,0);
    if (iVar4 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar6 = 0x2d;
        param_2 = param_2 + 1;
      }
      puVar6 = (undefined1 *)param_2;
      *puVar6 = 0x30;
      puVar6[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pbVar5 = FUN_980115b0(puVar6 + 2,0x65);
      if (pbVar5 == (byte *)0x0) {
        return 0;
      }
      *pbVar5 = (-(param_5 != 0) & 0xe0U) + 0x70;
      pbVar5[3] = 0;
      return 0;
    }
    *puVar6 = 0;
    return iVar4;
  }
  if ((*puVar3 & 0x8000000000000000) != 0) {
    *puVar6 = 0x2d;
    param_2 = param_2 + 1;
  }
  puVar6 = (undefined1 *)param_2;
  *puVar6 = 0x30;
  puVar6[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
  uVar7 = -(ulonglong)(param_5 != 0) & 0xffffffe0;
  if ((*puVar3 & 0x7ff0000000000000) == 0) {
    puVar6[2] = 0x30;
    if ((*puVar3 & 0xfffffffffffff) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0x3fe;
    }
  }
  else {
    puVar6[2] = 0x31;
  }
  uVar14 = param_2 + 3;
  uVar9 = param_2 + 4;
  pcVar12 = (char *)uVar14;
  if ((int)uVar8 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
  }
  if ((*puVar3 & 0xfffffffffffff) != 0) {
    uVar11 = 0xf000000000000;
    do {
      if ((int)uVar8 < 1) break;
      uVar15 = ((*puVar3 & uVar11) >> ((longlong)sVar10 & 0x7fU) & 0xffff) + 0x30;
      if (0x39 < (uVar15 & 0xffff)) {
        uVar15 = (uVar7 + 0x27 & 0xffff) + (uVar15 & 0xffff) & 0xffff;
      }
      *(undefined1 *)uVar9 = (char)uVar15;
      uVar9 = uVar9 + 1;
      sVar10 = sVar10 + -4;
      uVar11 = uVar11 >> 4;
      uVar8 = uVar8 - 1;
    } while (-1 < sVar10);
    if ((-1 < sVar10) &&
       (uVar15 = uVar9, 8 < ((*puVar3 & uVar11) >> ((longlong)sVar10 & 0x7fU) & 0xffff))) {
      while( true ) {
        uVar11 = uVar15 - 1;
        pcVar17 = (char *)uVar11;
        cVar13 = *pcVar17;
        if ((cVar13 != 'f') && (cVar13 != 'F')) break;
        *pcVar17 = '0';
        uVar15 = uVar11;
      }
      if ((uVar11 & 0xffffffff) == (uVar14 & 0xffffffff)) {
        pcVar17 = (char *)((int)uVar15 + -2);
        cVar13 = *pcVar17;
LAB_9800f880:
        cVar13 = cVar13 + '\x01';
      }
      else {
        if (cVar13 != '9') goto LAB_9800f880;
        cVar13 = (char)uVar7 + 'a';
      }
      *pcVar17 = cVar13;
    }
  }
  if (0 < (int)uVar8) {
    lVar16 = uVar9 - 1;
    uVar7 = uVar8;
    uVar11 = uVar8 & 0xffffffff;
    while (uVar11 != 0) {
      lVar16 = lVar16 + 1;
      *(undefined1 *)lVar16 = 0x30;
      uVar7 = uVar7 - 1;
      uVar11 = uVar7;
    }
    uVar9 = uVar9 + uVar8;
  }
  if (*pcVar12 == '\0') {
    uVar9 = uVar14;
  }
  pcVar12 = (char *)uVar9 + 1;
  *(char *)uVar9 = (-(param_5 != 0) & 0xe0U) + 0x70;
  lVar18 = (*puVar3 >> 0x34 & 0x7ff) - lVar18;
  if (lVar18 < 0) {
    *pcVar12 = '-';
    lVar18 = -lVar18;
  }
  else {
    *pcVar12 = '+';
  }
  uVar7 = uVar9 + 2;
  *(char *)uVar7 = '0';
  uVar8 = uVar7;
  if (lVar18 < 1000) {
LAB_9800f940:
    if (lVar18 < 100) goto LAB_9800f96c;
  }
  else {
    lVar16 = lVar18 / 1000;
    lVar18 = lVar18 % 1000;
    *(char *)uVar7 = (char)lVar16 + '0';
    uVar8 = uVar9 + 3;
    if ((uVar8 & 0xffffffff) == (uVar7 & 0xffffffff)) goto LAB_9800f940;
  }
  lVar16 = lVar18 / 100;
  lVar18 = lVar18 % 100;
  *(char *)uVar8 = (char)lVar16 + '0';
  uVar8 = uVar8 + 1;
LAB_9800f96c:
  pcVar12 = (char *)uVar8;
  if (((uVar8 & 0xffffffff) != (uVar7 & 0xffffffff)) || (9 < lVar18)) {
    lVar16 = lVar18 / 10;
    lVar18 = lVar18 % 10;
    *pcVar12 = (char)lVar16 + '0';
    pcVar12 = pcVar12 + 1;
  }
  *pcVar12 = (char)lVar18 + '0';
  pcVar12[1] = '\0';
  return 0;
}


/* ==== FUN_9800f9b8 @ 9800f9b8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_9800f9b8(undefined8 param_1,ulonglong param_2,ulonglong param_3,int *param_4,char param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar6;
  int iVar9;
  ulonglong uVar10;
  
  uVar2 = FUN_9800d250();
  if (((uVar2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 0x16;
    FUN_9800d2e0();
    uVar4 = 0x16;
  }
  else {
    iVar9 = (int)param_3;
    puVar5 = (undefined1 *)uVar2;
    if ((param_5 != '\0') && (param_4[1] + -1 == iVar9)) {
      puVar7 = puVar5 + (uint)(*param_4 == 0x2d) + param_4[1] + -1;
      *puVar7 = 0x30;
      puVar7[1] = 0;
    }
    if (*param_4 == 0x2d) {
      uVar2 = uVar2 + 1;
      *puVar5 = 0x2d;
    }
    uVar6 = uVar2;
    if (param_4[1] < 1) {
      do {
        pcVar8 = (char *)uVar6;
        uVar6 = uVar6 + 1;
      } while (*pcVar8 != '\0');
      uVar10 = uVar2 + 1;
      FUN_9800d920(uVar10,uVar2,((uVar6 - uVar2) - 1 & 0xffffffff) + 1);
      *(undefined1 *)uVar2 = 0x30;
    }
    else {
      uVar10 = (uint)param_4[1] + uVar2;
    }
    uVar2 = uVar10;
    if (0 < iVar9) {
      do {
        pcVar8 = (char *)uVar2;
        uVar2 = uVar2 + 1;
      } while (*pcVar8 != '\0');
      uVar6 = uVar10 + 1;
      FUN_9800d920(uVar6,uVar10,((uVar2 - uVar10) - 1 & 0xffffffff) + 1);
      *(undefined1 *)uVar10 = *(undefined1 *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
      uVar1 = param_4[1];
      if ((int)uVar1 < 0) {
        if (param_5 == '\0') {
          uVar2 = -(ulonglong)uVar1;
          if ((int)uVar2 <= iVar9) {
            param_3 = uVar2;
          }
        }
        else {
          param_3 = -(ulonglong)uVar1;
        }
        uVar2 = uVar6;
        if ((int)param_3 != 0) {
          do {
            pcVar8 = (char *)uVar2;
            uVar2 = uVar2 + 1;
          } while (*pcVar8 != '\0');
          FUN_9800d920(uVar6 + param_3,uVar6,((uVar2 - uVar6) - 1 & 0xffffffff) + 1);
        }
        FUN_9800d9e0((uint *)uVar6,0x30,param_3);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* ==== FUN_9800fb70 @ 9800fb70 ==== */

longlong FUN_9800fb70(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int iStack_50;
  uint uStack_4c;
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800d25c();
  FUN_98011998(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    lVar1 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = param_3 - (iStack_50 == 0x2d);
    }
    iVar3 = FUN_98011758((iStack_50 == 0x2d) + param_2,uVar4,uStack_4c + param_4,(int)&iStack_50);
    lVar1 = (longlong)iVar3;
    if (iVar3 == 0) {
      lVar1 = FUN_9800f9b8(param_2,param_3,param_4,&iStack_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return lVar1;
}


/* ==== FUN_9800fc40 @ 9800fc40 ==== */

longlong FUN_9800fc40(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iStack_60;
  uint uStack_5c;
  undefined1 auStack_50 [80];
  
  puVar2 = (undefined8 *)FUN_9800d250();
  FUN_98011998(*puVar2,ZEXT48(&stack0x00000000) - 0x60,auStack_50,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    lVar1 = 0x16;
  }
  else {
    uVar5 = (ulonglong)uStack_5c;
    uVar4 = 0xffffffffffffffff;
    uVar6 = (iStack_60 == 0x2d) + param_2;
    if ((int)param_3 != -1) {
      uVar4 = param_3 - (iStack_60 == 0x2d);
    }
    iVar3 = FUN_98011758(uVar6,uVar4,param_4,(int)&iStack_60);
    lVar1 = (longlong)iVar3;
    if (iVar3 == 0) {
      uVar4 = (ulonglong)uStack_5c - 1;
      if (((int)uVar4 < -4) || ((int)param_4 <= (int)uVar4)) {
        iVar3 = FUN_9800f268(param_2,param_3,param_4,param_5,&iStack_60,'\x01');
        lVar1 = (longlong)iVar3;
      }
      else {
        if ((((~(uVar4 ^ uVar5 - 1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar4 <= uVar5 - 1) & 1) !=
            0) {
          do {
            pcVar7 = (char *)uVar6;
            uVar6 = uVar6 + 1;
          } while (*pcVar7 != '\0');
          pcVar7[-1] = '\0';
        }
        lVar1 = FUN_9800f9b8(param_2,param_3,param_4,&iStack_60,'\x01');
      }
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return lVar1;
}


/* ==== FUN_9800fda0 @ 9800fda0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_9800fda0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  undefined8 uVar1;
  undefined4 *puVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  longlong lVar2;
  int iVar7;
  undefined1 *puVar9;
  ulonglong uVar8;
  short sVar10;
  char cVar13;
  char *pcVar12;
  ulonglong uVar11;
  ulonglong uVar14;
  char *pcVar16;
  longlong lVar15;
  int in_r11;
  ulonglong uVar17;
  int iStack_60;
  uint uStack_5c;
  undefined1 auStack_50 [80];
  
  if ((in_r11 != 0x61) && (in_r11 != 0x41)) {
    puVar6 = (undefined8 *)FUN_9800d250();
    FUN_98011998(*puVar6,ZEXT48(&stack0x00000000) - 0x60,auStack_50,0x16);
    if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
      lVar2 = FUN_9800fe98();
      *(undefined4 *)lVar2 = 0x16;
      FUN_9800d2e0();
      return 0x16;
    }
    uVar11 = (ulonglong)uStack_5c;
    uVar8 = 0xffffffffffffffff;
    uVar17 = (iStack_60 == 0x2d) + param_2;
    if ((int)param_3 != -1) {
      uVar8 = param_3 - (iStack_60 == 0x2d);
    }
    iVar7 = FUN_98011758(uVar17,uVar8,param_4,(int)&iStack_60);
    if (iVar7 == 0) {
      uVar8 = (ulonglong)uStack_5c - 1;
      if ((-5 < (int)uVar8) && ((int)uVar8 < (int)param_4)) {
        if ((((~(uVar8 ^ uVar11 - 1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar8 <= uVar11 - 1) & 1)
            != 0) {
          do {
            pcVar12 = (char *)uVar17;
            uVar17 = uVar17 + 1;
          } while (*pcVar12 != '\0');
          pcVar12[-1] = '\0';
        }
        lVar2 = FUN_9800f9b8(param_2,param_3,param_4,&iStack_60,'\x01');
        return lVar2;
      }
      iVar7 = FUN_9800f268(param_2,param_3,param_4,(int)param_5,&iStack_60,'\x01');
      return (longlong)iVar7;
    }
    *(undefined1 *)param_2 = 0;
    return (longlong)iVar7;
  }
  uVar1 = FUN_9800d250();
  lVar2 = 0x3ff;
  sVar10 = 0x30;
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = FUN_9800fe98();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d2e0();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    lVar2 = FUN_9800fe98();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x16;
LAB_9800f604:
    *puVar3 = (int)lVar2;
    FUN_9800d2e0();
    return lVar2;
  }
  puVar9 = (undefined1 *)param_2;
  *puVar9 = 0;
  if ((param_3 & 0xffffffff) <= (param_4 + 0xb & 0xffffffff)) {
    lVar2 = FUN_9800fe98();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x22;
    goto LAB_9800f604;
  }
  puVar4 = (ulonglong *)uVar1;
  if ((*puVar4 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      param_3 = 0xffffffffffffffff;
    }
    else {
      param_3 = param_3 - 2;
    }
    iVar7 = FUN_9800f4b8(uVar1,param_2 + 2,param_3,param_4,0);
    if (iVar7 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar9 = 0x2d;
        param_2 = param_2 + 1;
      }
      puVar9 = (undefined1 *)param_2;
      *puVar9 = 0x30;
      puVar9[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pbVar5 = FUN_980115b0(puVar9 + 2,0x65);
      if (pbVar5 == (byte *)0x0) {
        return 0;
      }
      *pbVar5 = (-(param_5 != 0) & 0xe0U) + 0x70;
      pbVar5[3] = 0;
      return 0;
    }
    *puVar9 = 0;
    return (longlong)iVar7;
  }
  if ((*puVar4 & 0x8000000000000000) != 0) {
    *puVar9 = 0x2d;
    param_2 = param_2 + 1;
  }
  puVar9 = (undefined1 *)param_2;
  *puVar9 = 0x30;
  puVar9[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
  uVar8 = -(ulonglong)(param_5 != 0) & 0xffffffe0;
  if ((*puVar4 & 0x7ff0000000000000) == 0) {
    puVar9[2] = 0x30;
    if ((*puVar4 & 0xfffffffffffff) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0x3fe;
    }
  }
  else {
    puVar9[2] = 0x31;
  }
  uVar11 = param_2 + 3;
  param_2 = param_2 + 4;
  pcVar12 = (char *)uVar11;
  if ((int)param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
  }
  if ((*puVar4 & 0xfffffffffffff) != 0) {
    uVar17 = 0xf000000000000;
    do {
      if ((int)param_4 < 1) break;
      uVar14 = ((*puVar4 & uVar17) >> ((longlong)sVar10 & 0x7fU) & 0xffff) + 0x30;
      if (0x39 < (uVar14 & 0xffff)) {
        uVar14 = (uVar8 + 0x27 & 0xffff) + (uVar14 & 0xffff) & 0xffff;
      }
      *(undefined1 *)param_2 = (char)uVar14;
      param_2 = param_2 + 1;
      sVar10 = sVar10 + -4;
      uVar17 = uVar17 >> 4;
      param_4 = param_4 - 1;
    } while (-1 < sVar10);
    if ((-1 < sVar10) &&
       (uVar14 = param_2, 8 < ((*puVar4 & uVar17) >> ((longlong)sVar10 & 0x7fU) & 0xffff))) {
      while( true ) {
        uVar17 = uVar14 - 1;
        pcVar16 = (char *)uVar17;
        cVar13 = *pcVar16;
        if ((cVar13 != 'f') && (cVar13 != 'F')) break;
        *pcVar16 = '0';
        uVar14 = uVar17;
      }
      if ((uVar17 & 0xffffffff) == (uVar11 & 0xffffffff)) {
        pcVar16 = (char *)((int)uVar14 + -2);
        cVar13 = *pcVar16;
LAB_9800f880:
        cVar13 = cVar13 + '\x01';
      }
      else {
        if (cVar13 != '9') goto LAB_9800f880;
        cVar13 = (char)uVar8 + 'a';
      }
      *pcVar16 = cVar13;
    }
  }
  if (0 < (int)param_4) {
    lVar15 = param_2 - 1;
    uVar8 = param_4;
    uVar17 = param_4 & 0xffffffff;
    while (uVar17 != 0) {
      lVar15 = lVar15 + 1;
      *(undefined1 *)lVar15 = 0x30;
      uVar8 = uVar8 - 1;
      uVar17 = uVar8;
    }
    param_2 = param_2 + param_4;
  }
  if (*pcVar12 == '\0') {
    param_2 = uVar11;
  }
  pcVar12 = (char *)param_2 + 1;
  *(char *)param_2 = (-(param_5 != 0) & 0xe0U) + 0x70;
  lVar2 = (*puVar4 >> 0x34 & 0x7ff) - lVar2;
  if (lVar2 < 0) {
    *pcVar12 = '-';
    lVar2 = -lVar2;
  }
  else {
    *pcVar12 = '+';
  }
  uVar11 = param_2 + 2;
  *(char *)uVar11 = '0';
  uVar8 = uVar11;
  if (lVar2 < 1000) {
LAB_9800f940:
    if (lVar2 < 100) goto LAB_9800f96c;
  }
  else {
    lVar15 = lVar2 / 1000;
    lVar2 = lVar2 % 1000;
    *(char *)uVar11 = (char)lVar15 + '0';
    uVar8 = param_2 + 3;
    if ((uVar8 & 0xffffffff) == (uVar11 & 0xffffffff)) goto LAB_9800f940;
  }
  lVar15 = lVar2 / 100;
  lVar2 = lVar2 % 100;
  *(char *)uVar8 = (char)lVar15 + '0';
  uVar8 = uVar8 + 1;
LAB_9800f96c:
  pcVar12 = (char *)uVar8;
  if (((uVar8 & 0xffffffff) != (uVar11 & 0xffffffff)) || (9 < lVar2)) {
    lVar15 = lVar2 / 10;
    lVar2 = lVar2 % 10;
    *pcVar12 = (char)lVar15 + '0';
    pcVar12 = pcVar12 + 1;
  }
  *pcVar12 = (char)lVar2 + '0';
  pcVar12[1] = '\0';
  return 0;
}


/* ==== thunk_FUN_9800f4b8 @ 9800fdb8 ==== */

int thunk_FUN_9800f4b8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800d258();
  FUN_98011998(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    iVar3 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = (param_3 - (aiStack_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    iVar3 = FUN_98011758((ulonglong)(aiStack_50[0] == 0x2d) +
                         ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,uVar4,param_4 + 1,
                         (int)aiStack_50);
    if (iVar3 == 0) {
      iVar3 = FUN_9800f268(param_2,param_3,param_4,param_5,aiStack_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return iVar3;
}


/* ==== FUN_9800fdec @ 9800fdec ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_9800fdec(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  undefined8 uVar1;
  undefined4 *puVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  longlong lVar2;
  int iVar7;
  undefined1 *puVar9;
  ulonglong uVar8;
  short sVar10;
  char cVar13;
  char *pcVar12;
  ulonglong uVar11;
  ulonglong uVar14;
  char *pcVar16;
  longlong lVar15;
  int in_r11;
  ulonglong uVar17;
  int iStack_60;
  uint uStack_5c;
  undefined1 auStack_50 [80];
  
  if ((in_r11 != 0x61) && (in_r11 != 0x41)) {
    puVar6 = (undefined8 *)FUN_9800d250();
    FUN_98011998(*puVar6,ZEXT48(&stack0x00000000) - 0x60,auStack_50,0x16);
    if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
      lVar2 = FUN_9800fe98();
      *(undefined4 *)lVar2 = 0x16;
      FUN_9800d2e0();
      return 0x16;
    }
    uVar11 = (ulonglong)uStack_5c;
    uVar8 = 0xffffffffffffffff;
    uVar17 = (iStack_60 == 0x2d) + param_2;
    if ((int)param_3 != -1) {
      uVar8 = param_3 - (iStack_60 == 0x2d);
    }
    iVar7 = FUN_98011758(uVar17,uVar8,param_4,(int)&iStack_60);
    if (iVar7 == 0) {
      uVar8 = (ulonglong)uStack_5c - 1;
      if ((-5 < (int)uVar8) && ((int)uVar8 < (int)param_4)) {
        if ((((~(uVar8 ^ uVar11 - 1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar8 <= uVar11 - 1) & 1)
            != 0) {
          do {
            pcVar12 = (char *)uVar17;
            uVar17 = uVar17 + 1;
          } while (*pcVar12 != '\0');
          pcVar12[-1] = '\0';
        }
        lVar2 = FUN_9800f9b8(param_2,param_3,param_4,&iStack_60,'\x01');
        return lVar2;
      }
      iVar7 = FUN_9800f268(param_2,param_3,param_4,(int)param_5,&iStack_60,'\x01');
      return (longlong)iVar7;
    }
    *(undefined1 *)param_2 = 0;
    return (longlong)iVar7;
  }
  uVar1 = FUN_9800d250();
  lVar2 = 0x3ff;
  sVar10 = 0x30;
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = FUN_9800fe98();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d2e0();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    lVar2 = FUN_9800fe98();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x16;
LAB_9800f604:
    *puVar3 = (int)lVar2;
    FUN_9800d2e0();
    return lVar2;
  }
  puVar9 = (undefined1 *)param_2;
  *puVar9 = 0;
  if ((param_3 & 0xffffffff) <= (param_4 + 0xb & 0xffffffff)) {
    lVar2 = FUN_9800fe98();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x22;
    goto LAB_9800f604;
  }
  puVar4 = (ulonglong *)uVar1;
  if ((*puVar4 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      param_3 = 0xffffffffffffffff;
    }
    else {
      param_3 = param_3 - 2;
    }
    iVar7 = FUN_9800f4b8(uVar1,param_2 + 2,param_3,param_4,0);
    if (iVar7 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar9 = 0x2d;
        param_2 = param_2 + 1;
      }
      puVar9 = (undefined1 *)param_2;
      *puVar9 = 0x30;
      puVar9[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pbVar5 = FUN_980115b0(puVar9 + 2,0x65);
      if (pbVar5 == (byte *)0x0) {
        return 0;
      }
      *pbVar5 = (-(param_5 != 0) & 0xe0U) + 0x70;
      pbVar5[3] = 0;
      return 0;
    }
    *puVar9 = 0;
    return (longlong)iVar7;
  }
  if ((*puVar4 & 0x8000000000000000) != 0) {
    *puVar9 = 0x2d;
    param_2 = param_2 + 1;
  }
  puVar9 = (undefined1 *)param_2;
  *puVar9 = 0x30;
  puVar9[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
  uVar8 = -(ulonglong)(param_5 != 0) & 0xffffffe0;
  if ((*puVar4 & 0x7ff0000000000000) == 0) {
    puVar9[2] = 0x30;
    if ((*puVar4 & 0xfffffffffffff) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0x3fe;
    }
  }
  else {
    puVar9[2] = 0x31;
  }
  uVar11 = param_2 + 3;
  param_2 = param_2 + 4;
  pcVar12 = (char *)uVar11;
  if ((int)param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(_DAT_91a18778 + 0xbc);
  }
  if ((*puVar4 & 0xfffffffffffff) != 0) {
    uVar17 = 0xf000000000000;
    do {
      if ((int)param_4 < 1) break;
      uVar14 = ((*puVar4 & uVar17) >> ((longlong)sVar10 & 0x7fU) & 0xffff) + 0x30;
      if (0x39 < (uVar14 & 0xffff)) {
        uVar14 = (uVar8 + 0x27 & 0xffff) + (uVar14 & 0xffff) & 0xffff;
      }
      *(undefined1 *)param_2 = (char)uVar14;
      param_2 = param_2 + 1;
      sVar10 = sVar10 + -4;
      uVar17 = uVar17 >> 4;
      param_4 = param_4 - 1;
    } while (-1 < sVar10);
    if ((-1 < sVar10) &&
       (uVar14 = param_2, 8 < ((*puVar4 & uVar17) >> ((longlong)sVar10 & 0x7fU) & 0xffff))) {
      while( true ) {
        uVar17 = uVar14 - 1;
        pcVar16 = (char *)uVar17;
        cVar13 = *pcVar16;
        if ((cVar13 != 'f') && (cVar13 != 'F')) break;
        *pcVar16 = '0';
        uVar14 = uVar17;
      }
      if ((uVar17 & 0xffffffff) == (uVar11 & 0xffffffff)) {
        pcVar16 = (char *)((int)uVar14 + -2);
        cVar13 = *pcVar16;
LAB_9800f880:
        cVar13 = cVar13 + '\x01';
      }
      else {
        if (cVar13 != '9') goto LAB_9800f880;
        cVar13 = (char)uVar8 + 'a';
      }
      *pcVar16 = cVar13;
    }
  }
  if (0 < (int)param_4) {
    lVar15 = param_2 - 1;
    uVar8 = param_4;
    uVar17 = param_4 & 0xffffffff;
    while (uVar17 != 0) {
      lVar15 = lVar15 + 1;
      *(undefined1 *)lVar15 = 0x30;
      uVar8 = uVar8 - 1;
      uVar17 = uVar8;
    }
    param_2 = param_2 + param_4;
  }
  if (*pcVar12 == '\0') {
    param_2 = uVar11;
  }
  pcVar12 = (char *)param_2 + 1;
  *(char *)param_2 = (-(param_5 != 0) & 0xe0U) + 0x70;
  lVar2 = (*puVar4 >> 0x34 & 0x7ff) - lVar2;
  if (lVar2 < 0) {
    *pcVar12 = '-';
    lVar2 = -lVar2;
  }
  else {
    *pcVar12 = '+';
  }
  uVar11 = param_2 + 2;
  *(char *)uVar11 = '0';
  uVar8 = uVar11;
  if (lVar2 < 1000) {
LAB_9800f940:
    if (lVar2 < 100) goto LAB_9800f96c;
  }
  else {
    lVar15 = lVar2 / 1000;
    lVar2 = lVar2 % 1000;
    *(char *)uVar11 = (char)lVar15 + '0';
    uVar8 = param_2 + 3;
    if ((uVar8 & 0xffffffff) == (uVar11 & 0xffffffff)) goto LAB_9800f940;
  }
  lVar15 = lVar2 / 100;
  lVar2 = lVar2 % 100;
  *(char *)uVar8 = (char)lVar15 + '0';
  uVar8 = uVar8 + 1;
LAB_9800f96c:
  pcVar12 = (char *)uVar8;
  if (((uVar8 & 0xffffffff) != (uVar11 & 0xffffffff)) || (9 < lVar2)) {
    lVar15 = lVar2 / 10;
    lVar2 = lVar2 % 10;
    *pcVar12 = (char)lVar15 + '0';
    pcVar12 = pcVar12 + 1;
  }
  *pcVar12 = (char)lVar2 + '0';
  pcVar12[1] = '\0';
  return 0;
}


/* ==== FUN_9800fe0c @ 9800fe0c ==== */

int FUN_9800fe0c(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800d258();
  FUN_98011998(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    iVar3 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = (param_3 - (aiStack_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    iVar3 = FUN_98011758((ulonglong)(aiStack_50[0] == 0x2d) +
                         ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,uVar4,param_4 + 1,
                         (int)aiStack_50);
    if (iVar3 == 0) {
      iVar3 = FUN_9800f268(param_2,param_3,param_4,param_5,aiStack_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return iVar3;
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

longlong FUN_9800fe98(void)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_9800e890();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = -0x6e5e7ad8;
  }
  else {
    lVar2 = uVar1 + 8;
  }
  return lVar2;
}


/* ==== FUN_9800fed0 @ 9800fed0 ==== */

longlong FUN_9800fed0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_9800e890();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = -0x6e5e7ad4;
  }
  else {
    lVar2 = uVar1 + 0xc;
  }
  return lVar2;
}


/* ==== FUN_9800ff08 @ 9800ff08 ==== */

void FUN_9800ff08(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  uVar1 = FUN_9800e890();
  puVar3 = (undefined4 *)0x91a18528;
  puVar4 = (uint *)&DAT_91a1852c;
  if ((uVar1 & 0xffffffff) != 0) {
    puVar4 = (uint *)((int)uVar1 + 0xc);
  }
  *puVar4 = param_1;
  uVar1 = FUN_9800e890();
  if ((uVar1 & 0xffffffff) != 0) {
    puVar3 = (undefined4 *)((int)uVar1 + 8);
  }
  uVar2 = FUN_9800fe28(param_1);
  *puVar3 = uVar2;
  return;
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

void FUN_98010078(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_980104f8(0xe,param_2,param_3,param_4);
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = ZEXT48(piRam91a194d0);
    uVar1 = 0xffffffff91a194cc;
    do {
      uVar3 = uVar1;
      if (piRam91a194d0 == (int *)0x0) goto LAB_980100ec;
      uVar1 = uVar2;
    } while (*piRam91a194d0 != *(int *)(param_1 + 4));
    *(int *)((int)uVar3 + 4) = piRam91a194d0[1];
    FUN_9800da80(uVar2);
LAB_980100ec:
    FUN_9800da80((ulonglong)*(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_98010120();
  return;
}


/* ==== FUN_98010120 @ 98010120 ==== */

void FUN_98010120(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_98010148 @ 98010148 ==== */

longlong FUN_98010148(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    lVar1 = -1;
  }
  else {
    iVar2 = func_0x980179a8();
    lVar1 = FUN_98015750(iVar2,0,param_1);
  }
  return lVar1;
}


/* ==== FUN_980101a0 @ 980101a0 ==== */

/* WARNING: Removing unreachable block (ram,0x980101d4) */
/* WARNING: Removing unreachable block (ram,0x980101e0) */

uint * FUN_980101a0(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_98011a70(param_1,param_2,ZEXT48(&stack0x00000000) - 0x20);
  return puVar1;
}


/* ==== FUN_98010208 @ 98010208 ==== */

void FUN_98010208(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)&DAT_91a18780;
  do {
    if (((ulonglong)*puVar1 != 0) && (puVar1[1] != 1)) {
      FUN_9800da80((ulonglong)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < -0x6e5e7760);
  return;
}


/* ==== FUN_98010278 @ 98010278 ==== */

void FUN_98010278(void)

{
  FUN_98018118();
  return;
}


/* ==== FUN_98010298 @ 98010298 ==== */

void FUN_98010298(void)

{
  FUN_98018128();
  return;
}


/* ==== FUN_980102ec @ 980102ec ==== */

void FUN_980102ec(void)

{
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x50) = 0;
  return;
}


/* ==== FUN_98010330 @ 98010330 ==== */

undefined8 FUN_98010330(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_9800d258();
  piVar4 = (int *)&DAT_91a18780;
  iVar2 = -0x6e5e6b28;
  iVar3 = 0;
  do {
    if (piVar4[1] == 1) {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 0x1c;
      iVar1 = FUN_98010298();
      if (iVar1 == 0) {
        *(undefined4 *)(&DAT_91a18780 + iVar3 * 8) = 0;
        return 0;
      }
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < -0x6e5e7760);
  return 1;
}


/* ==== FUN_980103b8 @ 980103b8 ==== */

undefined4 FUN_980103b8(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar3;
  int iVar4;
  ulonglong uVar1;
  longlong lVar2;
  undefined4 local_30;
  
  iVar3 = FUN_9800d258();
  local_30 = 1;
  iVar4 = func_0x980179a8();
  if (iVar4 == 0) {
    FUN_9800fff0();
    FUN_9800ffc0(0x1e);
    FUN_9800ebb0(0xff,(int)param_2,param_3,param_4);
  }
  iVar3 = iVar3 * 8;
  if (*(int *)(&DAT_91a18780 + iVar3) == 0) {
    uVar1 = FUN_9800dae0(0x1c,param_2,param_3,param_4);
    if (uVar1 == 0) {
      lVar2 = FUN_9800fe98();
      local_30 = 0;
      *(undefined4 *)lVar2 = 0xc;
    }
    else {
      FUN_980104f8(10,param_2,param_3,param_4);
      if (*(int *)(&DAT_91a18780 + iVar3) == 0) {
        iVar4 = FUN_98010298();
        if (iVar4 == 0) {
          FUN_9800da80(uVar1);
          lVar2 = FUN_9800fe98();
          *(undefined4 *)lVar2 = 0xc;
          local_30 = 0;
        }
        else {
          *(int *)(&DAT_91a18780 + iVar3) = (int)uVar1;
        }
      }
      else {
        FUN_9800da80(uVar1);
      }
      FUN_980104c8();
    }
  }
  else {
    local_30 = 1;
  }
  return local_30;
}


/* ==== FUN_980104c8 @ 980104c8 ==== */

void FUN_980104c8(void)

{
  FUN_98018118();
  return;
}


/* ==== FUN_980104f8 @ 980104f8 ==== */

void FUN_980104f8(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  
  if ((*(int *)(&DAT_91a18780 + (int)((param_1 & 0xffffffff) << 3)) == 0) &&
     (iVar1 = FUN_980103b8(param_1,param_2,param_3,param_4), iVar1 == 0)) {
    FUN_9800ee40(0x11,param_2,param_3,param_4);
  }
  FUN_98018138();
  return;
}


/* ==== FUN_98010558 @ 98010558 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_98010558(int param_1)

{
  return *(ushort *)(param_1 * 2 + _DAT_91a18768) & 4;
}


/* ==== FUN_980105a4 @ 980105a4 ==== */

undefined8 FUN_980105a4(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_r31;
  longlong lVar5;
  
  if ((int)param_1 < 0x14) {
    param_1 = 0x14;
    *(undefined4 *)(unaff_r31 + -0x671c) = 0x14;
  }
  puRam91a198e0 = FUN_980101a0(param_1,4);
  if (puRam91a198e0 == (uint *)0x0) {
    *(undefined4 *)(unaff_r31 + -0x671c) = 0x14;
    puRam91a198e0 = FUN_980101a0(0x14,4);
    if (puRam91a198e0 == (uint *)0x0) {
      return 0x1a;
    }
  }
  iVar1 = -0x6e5e7648;
  iVar3 = 0;
  lVar5 = 0x14;
  do {
    *(int *)(iVar3 + (int)puRam91a198e0) = iVar1;
    iVar1 = iVar1 + 0x20;
    iVar3 = iVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)0x91a189c8;
  uVar4 = 0;
  lVar5 = 3;
  do {
    iVar1 = *(int *)(*(int *)(&DAT_91a197e0 + ((int)uVar4 >> 5) * 4) + (uVar4 & 0x1f) * 0x48);
    if (((iVar1 == -1) || (iVar1 == -2)) || (iVar1 == 0)) {
      *puVar2 = 0xfffffffe;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}


/* ==== FUN_980106c4 @ 980106c4 ==== */

void FUN_980106c4(void)

{
  FUN_9800da80((ulonglong)uRam91a198e0);
  return;
}


/* ==== FUN_980106e0 @ 980106e0 ==== */

void FUN_980106e0(uint param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_1 < 0x91a189b8) || (0x91a18c18 < param_1)) {
    FUN_98018138();
  }
  else {
    FUN_980104f8((longlong)((int)(param_1 + 0x6e5e7648) >> 5) + 0x10,param_2,param_3,param_4);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
  }
  return;
}


/* ==== FUN_98010750 @ 98010750 ==== */

void FUN_98010750(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  if ((int)param_1 < 0x14) {
    FUN_980104f8(param_1 + 0x10,param_2,param_3,param_4);
    *(uint *)((int)param_2 + 0xc) = *(uint *)((int)param_2 + 0xc) | 0x8000;
  }
  else {
    FUN_98018138();
  }
  return;
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

undefined8 FUN_98010838(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  if (((((int)param_1 < 0) || (_DAT_91a197c4 <= param_1)) ||
      (piVar3 = (int *)(*(int *)(&DAT_91a197e0 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48)
      , (*(byte *)(piVar3 + 1) & 1) == 0)) || (*piVar3 == -1)) {
    lVar2 = FUN_9800fe98();
    *(undefined4 *)lVar2 = 9;
    lVar2 = FUN_9800fed0();
    piVar3 = (int *)lVar2;
    iVar4 = 0;
    uVar1 = 0xffffffffffffffff;
  }
  else {
    iVar4 = -1;
    uVar1 = 0;
  }
  *piVar3 = iVar4;
  return uVar1;
}


/* ==== FUN_980108d0 @ 980108d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_980108d0(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  if (param_1 == 0xfffffffe) {
    lVar1 = FUN_9800fed0();
    *(undefined4 *)lVar1 = 0;
    lVar1 = FUN_9800fe98();
    uVar2 = 0xffffffffffffffff;
    *(undefined4 *)lVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (_DAT_91a197c4 <= param_1)) ||
          (puVar3 = (uint *)(*(int *)(&DAT_91a197e0 + ((int)param_1 >> 5) * 4) +
                            (param_1 & 0x1f) * 0x48), (puVar3[1] & 0x1000000) == 0)) {
    lVar1 = FUN_9800fed0();
    *(undefined4 *)lVar1 = 0;
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 9;
    FUN_9800d2e0();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (ulonglong)*puVar3;
  }
  return uVar2;
}


/* ==== FUN_98010990 @ 98010990 ==== */

undefined8 FUN_98010990(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  uint uStack00000014;
  
  uStack00000014 = FUN_9800d25c();
  iVar1 = *(int *)(&DAT_91a197e0 + ((int)uStack00000014 >> 5) * 4) + (uStack00000014 & 0x1f) * 0x48;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_980104f8(10,param_2,param_3,param_4);
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_98010298();
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_98010a58();
  }
  FUN_98018138();
  return 1;
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
  FUN_98018118();
  return;
}


/* ==== FUN_98010ab8 @ 98010ab8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_98010ab8(void)

{
  uint *puVar2;
  undefined8 uVar1;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  puVar2 = FUN_980101a0(0x20,0x48);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    iVar3 = 0;
    _DAT_91a197c4 = 0x20;
    _DAT_91a197e0 = puVar2;
    if (puVar2 < puVar2 + 0x240) {
      puVar4 = (undefined1 *)((int)puVar2 + 5);
      do {
        puVar4[-1] = 0;
        *puVar4 = 10;
        *(undefined4 *)(puVar4 + -5) = 0xffffffff;
        *(undefined4 *)(puVar4 + 3) = 0;
        puVar4[0x23] = 0;
        puVar4[0x24] = 10;
        puVar4[0x25] = 10;
        *(undefined4 *)(puVar4 + 0x3b) = 0;
        puVar4[0x37] = 0;
        puVar2 = (uint *)(puVar4 + 0x43);
        puVar4 = puVar4 + 0x48;
      } while (puVar2 < _DAT_91a197e0 + 0x240);
    }
    lVar6 = 3;
    do {
      puVar5 = (undefined4 *)(iVar3 + (int)_DAT_91a197e0);
      iVar3 = iVar3 + 0x48;
      *(undefined1 *)(puVar5 + 1) = 0xc1;
      *puVar5 = 0xfffffffe;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_98010bb0 @ 98010bb0 ==== */

void FUN_98010bb0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int unaff_r30;
  uint *unaff_r31;
  
  do {
    uVar1 = (ulonglong)*unaff_r31;
    if (uVar1 != 0) {
      if (uVar1 < (uVar1 + 0x900 & 0xffffffff)) {
        uVar2 = uVar1;
        do {
          uVar2 = uVar2 + 0x48;
        } while ((uVar2 & 0xffffffff) < ((ulonglong)*unaff_r31 + 0x900 & 0xffffffff));
      }
      FUN_9800da80(uVar1);
      *unaff_r31 = 0;
    }
    unaff_r31 = unaff_r31 + 1;
  } while ((int)unaff_r31 < unaff_r30 + 0x100);
  return;
}


/* ==== FUN_98010c18 @ 98010c18 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_98010c18(void)

{
  uint uVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar6;
  uint uVar5;
  undefined8 uVar3;
  
  uVar4 = FUN_9800d25c();
  uVar1 = FUN_980108d0(uVar4);
  if ((int)uVar1 != -1) {
    if (((uVar4 == 1) && ((*(byte *)(_DAT_91a197e0 + 0x94) & 1) != 0)) ||
       ((uVar4 == 2 && ((*(byte *)(_DAT_91a197e0 + 0x4c) & 1) != 0)))) {
      uVar1 = FUN_980108d0(2);
      uVar2 = FUN_980108d0(1);
      if ((int)uVar2 == (int)uVar1) goto LAB_98010ca4;
    }
    FUN_980108d0(uVar4);
    bVar6 = FUN_98007558();
    if (!bVar6) {
      uVar5 = thunk_FUN_98007a68();
      goto LAB_98010ca8;
    }
  }
LAB_98010ca4:
  uVar5 = 0;
LAB_98010ca8:
  FUN_98010838(uVar4);
  *(undefined1 *)(*(int *)(&DAT_91a197e0 + ((int)uVar4 >> 5) * 4) + (uVar4 & 0x1f) * 0x48 + 4) = 0;
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_9800ff08(uVar5);
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}


/* ==== FUN_98010d00 @ 98010d00 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_98010d00(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uStack00000014;
  uint local_40;
  
  uVar3 = FUN_9800d254();
  uStack00000014 = (uint)uVar3;
  if (uStack00000014 == 0xfffffffe) {
    lVar4 = FUN_9800fed0();
    *(undefined4 *)lVar4 = 0;
    lVar4 = FUN_9800fe98();
    *(undefined4 *)lVar4 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && ((uVar3 & 0xffffffff) < (ulonglong)_DAT_91a197c4)) {
      iVar1 = ((int)uStack00000014 >> 5) * 4;
      iVar2 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 4) & 1) != 0) {
        FUN_98010990(uVar3,param_2,param_3,param_4);
        if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 4) & 1) == 0) {
          lVar4 = FUN_9800fe98();
          *(undefined4 *)lVar4 = 9;
          local_40 = 0xffffffff;
        }
        else {
          uVar5 = FUN_98010c18();
          local_40 = (uint)uVar5;
        }
        FUN_98010e28();
        return (ulonglong)local_40;
      }
    }
    lVar4 = FUN_9800fed0();
    *(undefined4 *)lVar4 = 0;
    lVar4 = FUN_9800fe98();
    *(undefined4 *)lVar4 = 9;
    FUN_9800d2e0();
  }
  return 0xffffffffffffffff;
}


/* ==== FUN_98010e28 @ 98010e28 ==== */

void FUN_98010e28(void)

{
  FUN_98010a90();
  return;
}


/* ==== FUN_98010e60 @ 98010e60 ==== */

ulonglong FUN_98010e60(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_98010ea0 @ 98010ea0 ==== */

void FUN_98010ea0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_9800da80((ulonglong)(uint)param_1[2]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[3] = param_1[3] & 0xfffffbf7;
  }
  return;
}


/* ==== FUN_98010f08 @ 98010f08 ==== */

undefined8 FUN_98010f08(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_20;
  
  local_20 = param_2;
  uVar1 = FUN_980108d0(param_1);
  if ((int)uVar1 == -1) {
    lVar2 = FUN_9800fe98();
    local_20 = 0xffffffffffffffff;
    *(undefined4 *)lVar2 = 9;
  }
  else {
    iVar3 = func_0x98017b68(uVar1,local_20._4_4_,&local_20,param_3);
    local_20 = CONCAT44(local_20._0_4_,iVar3);
    if ((iVar3 == -1) && (uVar4 = thunk_FUN_98007a68(), uVar4 != 0)) {
      FUN_9800ff08(uVar4);
      local_20 = 0xffffffffffffffff;
    }
    else {
      iVar3 = *(int *)(&DAT_91a197e0 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48;
      *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xfd;
    }
  }
  return local_20;
}


/* ==== FUN_98010fd0 @ 98010fd0 ==== */

longlong FUN_98010fd0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  char cVar8;
  char *pcVar7;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_1470 [4];
  char local_1460 [5216];
  
  uVar3 = FUN_9800d23c();
  uVar10 = 0;
  lVar9 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  if ((param_2 & 0xffffffff) == 0) {
LAB_9801100c:
    lVar9 = FUN_9800fed0();
    *(undefined4 *)lVar9 = 0;
    lVar9 = FUN_9800fe98();
    *(undefined4 *)lVar9 = 0x16;
    FUN_9800d2e0();
    return -1;
  }
  iVar1 = ((int)uVar3 >> 5) * 4;
  iVar2 = (uVar3 & 0x1f) * 0x48;
  cVar8 = *(char *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 0x28) >> 1;
  if (((cVar8 == '\x02') || (cVar8 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_9801100c;
  if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 4) & 0x20) != 0) {
    FUN_98010f08(uVar3,0,2);
  }
  if ((*(byte *)((undefined4 *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2) + 1) & 0x80) == 0) {
    iVar4 = func_0x98017cd8(*(undefined4 *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2),param_2,param_3
                            ,local_1470,0);
    if (iVar4 == 0) {
LAB_9801117c:
      uVar3 = thunk_FUN_98007a68();
    }
    else {
      uVar10 = (ulonglong)local_1470[0];
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
    uVar11 = param_2;
    if ((param_3 & 0xffffffff) == 0) goto LAB_980111c4;
    do {
      pcVar7 = local_1460;
      uVar6 = 0;
      uVar5 = uVar11 - param_2;
      do {
        if ((param_3 & 0xffffffff) <= (uVar5 & 0xffffffff)) break;
        cVar8 = *(char *)uVar11;
        uVar11 = uVar11 + 1;
        uVar5 = uVar5 + 1;
        if (cVar8 == '\n') {
          lVar9 = lVar9 + 1;
          *pcVar7 = '\r';
          pcVar7 = pcVar7 + 1;
          uVar6 = uVar6 + 1;
        }
        uVar6 = uVar6 + 1;
        *pcVar7 = cVar8;
        pcVar7 = pcVar7 + 1;
      } while (uVar6 < 0x13ff);
      iVar4 = func_0x98017cd8(*(undefined4 *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2),local_1460,
                              (int)pcVar7 - (int)local_1460,local_1470,0);
      if (iVar4 == 0) goto LAB_9801117c;
      uVar10 = local_1470[0] + uVar10;
    } while (((int)pcVar7 - (int)local_1460 <= (int)local_1470[0]) &&
            ((uVar11 - param_2 & 0xffffffff) < (param_3 & 0xffffffff)));
  }
  if ((int)uVar10 != 0) {
    return uVar10 - lVar9;
  }
  if (uVar3 != 0) {
    if (uVar3 == 5) {
      lVar9 = FUN_9800fe98();
      *(undefined4 *)lVar9 = 9;
      lVar9 = FUN_9800fed0();
      *(undefined4 *)lVar9 = 5;
      return -1;
    }
    FUN_9800ff08(uVar3);
    return -1;
  }
LAB_980111c4:
  if (((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 4) & 0x40) != 0) &&
     (*(char *)param_2 == '\x1a')) {
    return 0;
  }
  lVar9 = FUN_9800fe98();
  *(undefined4 *)lVar9 = 0x1c;
  lVar9 = FUN_9800fed0();
  *(undefined4 *)lVar9 = 0;
  return -1;
}


/* ==== FUN_98011218 @ 98011218 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_98011218(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uStack00000014;
  uint local_50;
  
  uVar3 = FUN_9800d24c();
  uStack00000014 = (uint)uVar3;
  if (uStack00000014 == 0xfffffffe) {
    lVar4 = FUN_9800fed0();
    *(undefined4 *)lVar4 = 0;
    lVar4 = FUN_9800fe98();
    *(undefined4 *)lVar4 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && ((uVar3 & 0xffffffff) < (ulonglong)_DAT_91a197c4)) {
      iVar1 = ((int)uStack00000014 >> 5) * 4;
      iVar2 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 4) & 1) != 0) {
        FUN_98010990(uVar3,param_2,param_3,param_4);
        if ((*(byte *)(*(int *)(&DAT_91a197e0 + iVar1) + iVar2 + 4) & 1) == 0) {
          lVar4 = FUN_9800fe98();
          *(undefined4 *)lVar4 = 9;
          lVar4 = FUN_9800fed0();
          *(undefined4 *)lVar4 = 0;
          local_50 = 0xffffffff;
        }
        else {
          lVar4 = FUN_98010fd0(uVar3,param_2,param_3);
          local_50 = (uint)lVar4;
        }
        FUN_9801135c();
        return (ulonglong)local_50;
      }
    }
    lVar4 = FUN_9800fed0();
    *(undefined4 *)lVar4 = 0;
    lVar4 = FUN_9800fe98();
    *(undefined4 *)lVar4 = 9;
    FUN_9800d2e0();
  }
  return 0xffffffffffffffff;
}


/* ==== FUN_9801135c @ 9801135c ==== */

void FUN_9801135c(void)

{
  FUN_98010a90();
  return;
}


/* ==== FUN_980113a0 @ 980113a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_980113a0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar4;
  longlong lVar3;
  int iVar5;
  uint uStack_40;
  
  uVar2 = FUN_9800d254();
  uVar4 = (uint)uVar2;
  if (uVar4 == 0xfffffffe) {
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 9;
    return 0xffffffffffffffff;
  }
  if (((int)uVar4 < 0) || ((ulonglong)_DAT_91a197c4 <= (uVar2 & 0xffffffff))) {
LAB_980113f0:
    lVar3 = FUN_9800fe98();
    *(undefined4 *)lVar3 = 9;
    FUN_9800d2e0();
    return 0xffffffffffffffff;
  }
  iVar5 = ((int)uVar4 >> 5) * 4;
  iVar1 = (uVar4 & 0x1f) * 0x48;
  if ((*(byte *)(iVar1 + *(int *)(&DAT_91a197e0 + iVar5) + 4) & 1) == 0) goto LAB_980113f0;
  FUN_98010990(uVar2,param_2,param_3,param_4);
  if ((*(byte *)(iVar1 + *(int *)(&DAT_91a197e0 + iVar5) + 4) & 1) != 0) {
    FUN_980108d0(uVar4);
    iVar5 = func_0x98017e00();
    if (iVar5 == 0) {
      uStack_40 = thunk_FUN_98007a68();
    }
    else {
      uStack_40 = 0;
    }
    if (uStack_40 == 0) goto LAB_980114a0;
    lVar3 = FUN_9800fed0();
    *(uint *)lVar3 = uStack_40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 9;
  uStack_40 = 0xffffffff;
LAB_980114a0:
  FUN_980114d8();
  return (ulonglong)uStack_40;
}


/* ==== FUN_980114d8 @ 980114d8 ==== */

void FUN_980114d8(void)

{
  FUN_98010a90();
  return;
}


/* ==== FUN_98011568 @ 98011568 ==== */

undefined8 FUN_98011568(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_980180c8(-0x3ffffebc,param_2,param_3,param_4);
  return 1;
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
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*param_1;
  bVar1 = *param_1 == param_2;
  if (param_2 == 0) {
    while (!bVar1) {
      param_1 = param_1 + 1;
      bVar1 = *param_1 == 0;
    }
  }
  else {
    pbVar3 = param_1;
    param_1 = (byte *)0x0;
    while( true ) {
      if (bVar1) {
        do {
          param_1 = pbVar3;
          pbVar3 = param_1 + 1;
          uVar2 = (uint)*pbVar3;
        } while (param_2 == uVar2);
      }
      if (uVar2 == 0) break;
      pbVar3 = pbVar3 + 1;
      uVar2 = (uint)*pbVar3;
      bVar1 = param_2 == uVar2;
    }
  }
  return param_1;
}


/* ==== FUN_98011608 @ 98011608 ==== */

undefined8 FUN_98011608(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 auStack_30 [6];
  
  uVar1 = FUN_98012a58(ZEXT48(&stack0x00000000) - 0x28,auStack_30,param_2,0,0,0,0,0xffffffff91a18778
                      );
  uVar2 = FUN_98011c28(ZEXT48(&stack0x00000000) - 0x28,param_1);
  if ((uVar1 & 3) == 0) {
    if ((int)uVar2 == 1) {
      return 3;
    }
    if ((int)uVar2 != 2) {
      return 0;
    }
  }
  else if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      return 0;
    }
    return 3;
  }
  return 4;
}


/* ==== FUN_980116b0 @ 980116b0 ==== */

undefined8 FUN_980116b0(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 auStack_30 [6];
  
  uVar1 = FUN_98012a58(ZEXT48(&stack0x00000000) - 0x28,auStack_30,param_2,0,0,0,0,0xffffffff91a18778
                      );
  uVar2 = FUN_98012340(ZEXT48(&stack0x00000000) - 0x28,param_1);
  if ((uVar1 & 3) == 0) {
    if ((int)uVar2 == 1) {
      return 3;
    }
    if ((int)uVar2 != 2) {
      return 0;
    }
  }
  else if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      return 0;
    }
    return 3;
  }
  return 4;
}


/* ==== FUN_98011758 @ 98011758 ==== */

undefined4 FUN_98011758(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char cVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  pcVar6 = *(char **)(param_4 + 0xc);
  if ((param_1 & 0xffffffff) == 0) {
    lVar1 = FUN_9800fe98();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d2e0();
    uVar9 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      lVar1 = FUN_9800fe98();
      puVar2 = (undefined4 *)lVar1;
      uVar9 = 0x16;
    }
    else {
      pcVar3 = (char *)param_1;
      *pcVar3 = '\0';
      if ((((((param_3 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(param_3 == 0) & param_3) + 1 &
          0xffffffff) < (param_2 & 0xffffffff)) {
        uVar4 = param_1 + 1;
        *pcVar3 = '0';
        uVar5 = param_3;
        uVar8 = uVar4;
        if (0 < (int)param_3) {
          uVar5 = 0;
          do {
            cVar7 = *pcVar6;
            if (cVar7 == '\0') {
              cVar7 = '0';
            }
            else {
              pcVar6 = pcVar6 + 1;
            }
            *(char *)uVar8 = cVar7;
            uVar8 = uVar8 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        *(undefined1 *)uVar8 = 0;
        if ((-1 < (int)uVar5) && ('4' < *pcVar6)) {
          while( true ) {
            uVar8 = uVar8 - 1;
            pcVar6 = (char *)uVar8;
            if (*pcVar6 != '9') break;
            *pcVar6 = '0';
          }
          *pcVar6 = *pcVar6 + '\x01';
        }
        uVar8 = uVar4;
        if (*pcVar3 == '1') {
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        }
        else {
          do {
            pcVar6 = (char *)uVar8;
            uVar8 = uVar8 + 1;
          } while (*pcVar6 != '\0');
          FUN_9800d920(param_1,uVar4,((uVar8 - uVar4) - 1 & 0xffffffff) + 1);
        }
        return 0;
      }
      lVar1 = FUN_9800fe98();
      puVar2 = (undefined4 *)lVar1;
      uVar9 = 0x22;
    }
    *puVar2 = uVar9;
    FUN_9800d2e0();
  }
  return uVar9;
}


/* ==== FUN_980118b8 @ 980118b8 ==== */

void FUN_980118b8(ushort *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar4 = 0x80000000;
  uVar1 = *param_2;
  uVar5 = *(ushort *)param_2 >> 4 & 0x7ff;
  uVar2 = param_2[1];
  uVar3 = *(ushort *)param_2 & 0x8000;
  if (uVar5 == 0) {
    if (((uVar1 & 0xfffff) == 0) && (uVar2 == 0)) {
      *param_1 = uVar3;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    uVar5 = 0x3c01;
    uVar4 = 0;
  }
  else if (uVar5 == 0x7ff) {
    uVar5 = 0x7fff;
  }
  else {
    uVar5 = uVar5 + 0x3c00;
  }
  *(uint *)(param_1 + 3) = uVar2 << 0xb;
  *(uint *)(param_1 + 1) = uVar2 >> 0x15 | (uVar1 & 0xfffff) << 0xb | uVar4;
  for (; uVar4 == 0; uVar4 = uVar4 & 0x40000000) {
    uVar1 = *(uint *)(param_1 + 3);
    uVar4 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 3) = uVar1 << 1;
    *(uint *)(param_1 + 1) = uVar1 >> 0x1f | uVar4 << 1;
    uVar5 = uVar5 - 1;
  }
  *param_1 = uVar3 | uVar5;
  return;
}


/* ==== FUN_98011998 @ 98011998 ==== */

undefined8 FUN_98011998(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uStack00000010;
  undefined8 local_50;
  ushort local_48;
  short local_40;
  char local_3e;
  char acStack_3c [60];
  
  uStack00000010 = FUN_9800d25c();
  FUN_980118b8((ushort *)&local_50,(uint *)&stack0x00000010);
  iVar2 = FUN_980133b8(local_50,(ulonglong)local_48 << 0x30,0x11,0,ZEXT48(&stack0x00000000) - 0x40);
  piVar1 = (int *)param_2;
  piVar1[2] = iVar2;
  piVar1[1] = (int)local_40;
  *piVar1 = (int)local_3e;
  iVar2 = FUN_9800dec0(param_3,param_4,acStack_3c);
  if (iVar2 == 0) {
    piVar1[3] = (int)param_3;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_9800d3b8();
}


/* ==== FUN_98011a64 @ 98011a64 ==== */

undefined8 FUN_98011a64(void)

{
  return 0;
}


/* ==== FUN_98011a70 @ 98011a70 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_98011a70(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  uVar1 = FUN_9800d258();
  if (((uVar1 & 0xffffffff) == 0) ||
     (trapWord(6,uVar1,0), (param_2 & 0xffffffff) <= 0xfffff000 / (uVar1 & 0xffffffff))) {
    uVar1 = (longlong)(int)uVar1 * (longlong)(int)param_2;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    do {
      if ((uVar1 & 0xffffffff) < 0xfffff001) {
        uVar3 = func_0x980179a8();
        puVar4 = FUN_980164d8(uVar3,8,uVar1);
        if (puVar4 != (uint *)0x0) {
          return puVar4;
        }
      }
      if (_DAT_91a194c8 == 0) {
        if ((param_3 & 0xffffffff) != 0) {
          *(undefined4 *)param_3 = 0xc;
          return (uint *)0x0;
        }
        return (uint *)0x0;
      }
      uVar3 = FUN_9800e1f8();
    } while ((int)uVar3 != 0);
    if ((param_3 & 0xffffffff) != 0) {
      *(undefined4 *)param_3 = 0xc;
    }
  }
  else {
    lVar2 = FUN_9800fe98();
    *(undefined4 *)lVar2 = 0xc;
  }
  return (uint *)0x0;
}


/* ==== FUN_98011b40 @ 98011b40 ==== */

int FUN_98011b40(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  
  FUN_9800d250();
  iVar3 = 0;
  uStack_40 = 0;
  FUN_980104f8(1,param_2,param_3,param_4);
  for (iVar4 = 3; iVar4 < iRam91a198e4; iVar4 = iVar4 + 1) {
    iVar1 = iVar4 * 4;
    if (*(int *)(iVar1 + iRam91a198e0) != 0) {
      if (((*(uint *)(*(int *)(iVar1 + iRam91a198e0) + 0xc) & 0x83) != 0) &&
         (iVar2 = FUN_9800e450(), iVar2 != -1)) {
        iVar3 = iVar3 + 1;
        uStack_40 = iVar3;
      }
      if (0x13 < iVar4) {
        FUN_9800da80((ulonglong)*(uint *)(iVar1 + iRam91a198e0));
        *(undefined4 *)(iVar1 + iRam91a198e0) = 0;
      }
    }
  }
  FUN_98011c00();
  return uStack_40;
}


/* ==== FUN_98011c00 @ 98011c00 ==== */

void FUN_98011c00(void)

{
  FUN_98010278();
  return;
}


/* ==== FUN_98011c28 @ 98011c28 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_98011c28(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar9;
  undefined8 uVar8;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar15;
  longlong lVar14;
  int iVar17;
  ulonglong uVar16;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_98 [4];
  uint local_88;
  uint local_84;
  int local_80;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar9 = (ushort *)FUN_9800d234();
  uVar6 = _DAT_91a19010;
  uVar11 = _DAT_91a1900c;
  uVar2 = *puVar9;
  uVar22 = uVar2 & 0x7fff;
  local_98[0] = *(uint *)(puVar9 + 1);
  local_98[1] = *(uint *)(puVar9 + 3);
  iVar17 = uVar22 - 0x3fff;
  local_98[2] = (uint)puVar9[5] << 0x10;
  lVar13 = uVar7 - 0x98;
  iVar10 = 0;
  if (iVar17 == -0x3fff) {
    iVar17 = 0;
    do {
      if (*(int *)lVar13 != 0) {
        uVar8 = 2;
        local_98[0] = 0;
        local_98[1] = 0;
        goto LAB_980122f0;
      }
      iVar17 = iVar17 + 1;
      lVar13 = lVar13 + 4;
      iVar21 = 0;
    } while (iVar17 < 3);
  }
  else {
    local_88 = *(uint *)lVar13;
    uVar19 = _DAT_91a1900c - 1;
    uVar8 = 1;
    iVar3 = (int)_DAT_91a1900c >> 5;
    local_84 = local_98[1];
    uVar23 = (longlong)iVar3 + (ulonglong)((int)_DAT_91a1900c < 0 && (_DAT_91a1900c & 0x1f) != 0);
    local_80 = local_98[2];
    iVar5 = (int)((uVar23 & 0x3fffffff) << 2);
    uVar20 = 0x1f - (_DAT_91a1900c +
                    (iVar3 + (uint)((int)_DAT_91a1900c < 0 && (_DAT_91a1900c & 0x1f) != 0)) * -0x20)
    ;
    iVar4 = (int)uVar19 >> 5;
    if ((1 << (uVar20 & 0x3f) & *(uint *)((int)local_98 + iVar5)) != 0) {
      if ((*(uint *)((int)local_98 + (int)((uVar23 & 0xffffffff) << 2)) & ~(-1 << (uVar20 & 0x3f)))
          == 0) {
        uVar16 = uVar23 + 1;
        if ((int)uVar16 < 3) {
          lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x98);
          do {
            if (*(int *)lVar13 != 0) goto LAB_98011d70;
            uVar16 = uVar16 + 1;
            lVar13 = lVar13 + 4;
          } while ((int)uVar16 < 3);
        }
      }
      else {
LAB_98011d70:
        uVar16 = (longlong)iVar4 + (ulonglong)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0);
        iVar21 = (int)((uVar16 & 0xffffffff) << 2);
        iVar10 = 0;
        uVar18 = *(uint *)((int)local_98 + iVar21);
        uVar12 = 1 << (0x1f - (uVar19 + (iVar4 + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0)) *
                                        -0x20) & 0x3f);
        uVar15 = uVar18 + uVar12;
        if ((uVar15 < uVar18) || (uVar15 < uVar12)) {
          iVar10 = 1;
        }
        uVar16 = uVar16 - 1;
        *(uint *)((int)local_98 + iVar21) = uVar15;
        if (-1 < (longlong)uVar16) {
          lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x94);
          do {
            bVar1 = iVar10 == 0;
            iVar10 = 0;
            if (bVar1) break;
            uVar18 = *(uint *)((int)lVar13 + -4);
            iVar10 = 0;
            uVar12 = uVar18 + 1;
            if ((uVar12 < uVar18) || (uVar12 == 0)) {
              iVar10 = 1;
            }
            uVar16 = uVar16 - 1;
            lVar13 = lVar13 + -4;
            *(uint *)lVar13 = uVar12;
          } while (-1 < (longlong)uVar16);
        }
      }
    }
    uVar23 = uVar23 + 1;
    *(uint *)((int)local_98 + iVar5) = -1 << (uVar20 & 0x3f) & *(uint *)((int)local_98 + iVar5);
    if ((int)uVar23 < 3) {
      uVar16 = 3 - uVar23;
      lVar13 = (uVar23 & 0x3fffffff) * 4 + uVar7 + -0x9c;
      uVar23 = uVar16 & 0xffffffff;
      while (uVar23 != 0) {
        lVar13 = lVar13 + 4;
        *(undefined4 *)lVar13 = 0;
        uVar16 = uVar16 - 1;
        uVar23 = uVar16;
      }
    }
    iVar5 = _DAT_91a19004;
    iVar21 = iVar17;
    if (iVar10 != 0) {
      iVar21 = uVar22 - 0x3ffe;
    }
    if (iVar21 < (int)(_DAT_91a19008 - uVar11)) {
      iVar10 = 0;
      uVar8 = 2;
      local_98[0] = 0;
      local_98[1] = 0;
      goto LAB_980122f0;
    }
    lVar13 = 3;
    if (iVar21 <= _DAT_91a19008) {
      uVar18 = _DAT_91a19008 - iVar17;
      uVar20 = ((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
      uVar18 = uVar18 + (((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0)) *
                        -0x20;
      local_98[0] = local_88;
      uVar22 = 0;
      lVar14 = uVar7 - 0x9c;
      do {
        uVar12 = *(uint *)((int)lVar14 + 4);
        lVar14 = lVar14 + 4;
        *(uint *)lVar14 = uVar12 >> (uVar18 & 0x3f) | uVar22;
        uVar22 = (uVar12 & ~(-1 << (uVar18 & 0x3f))) << (0x20 - uVar18 & 0x3f);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar10 = 2;
      lVar14 = uVar7 - 0x90;
      lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar20 & 0x3fffffff) * -4;
      lVar24 = 3;
      do {
        if (iVar10 < (int)uVar20) {
          *(undefined4 *)lVar14 = 0;
        }
        else {
          *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
        }
        iVar10 = iVar10 + -1;
        lVar13 = lVar13 + -4;
        lVar14 = lVar14 + -4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      uVar23 = (longlong)iVar3 + (ulonglong)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0);
      iVar10 = (int)((uVar23 & 0x3fffffff) << 2);
      uVar22 = 0x1f - (uVar11 + (iVar3 + (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) * -0x20);
      if ((1 << (uVar22 & 0x3f) & *(uint *)((int)local_98 + iVar10)) != 0) {
        if ((*(uint *)((int)local_98 + (int)((uVar23 & 0xffffffff) << 2)) & ~(-1 << (uVar22 & 0x3f))
            ) == 0) {
          uVar16 = uVar23 + 1;
          if ((int)uVar16 < 3) {
            lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x98);
            do {
              if (*(int *)lVar13 != 0) goto LAB_98011fdc;
              uVar16 = uVar16 + 1;
              lVar13 = lVar13 + 4;
            } while ((int)uVar16 < 3);
          }
        }
        else {
LAB_98011fdc:
          uVar16 = (longlong)iVar4 + (ulonglong)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0);
          iVar17 = (int)((uVar16 & 0xffffffff) << 2);
          bVar1 = false;
          uVar11 = *(uint *)((int)local_98 + iVar17);
          uVar19 = 1 << (0x1f - (uVar19 + (iVar4 + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0))
                                          * -0x20) & 0x3f);
          uVar20 = uVar11 + uVar19;
          if ((uVar20 < uVar11) || (uVar20 < uVar19)) {
            bVar1 = true;
          }
          *(uint *)((int)local_98 + iVar17) = uVar20;
          uVar16 = uVar16 - 1;
          if (-1 < (longlong)uVar16) {
            lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x94);
            do {
              if (!bVar1) break;
              uVar11 = *(uint *)((int)lVar13 + -4);
              bVar1 = false;
              uVar19 = uVar11 + 1;
              if ((uVar19 < uVar11) || (uVar19 == 0)) {
                bVar1 = true;
              }
              uVar16 = uVar16 - 1;
              lVar13 = lVar13 + -4;
              *(uint *)lVar13 = uVar19;
            } while (-1 < (longlong)uVar16);
          }
        }
      }
      uVar23 = uVar23 + 1;
      *(uint *)((int)local_98 + iVar10) = -1 << (uVar22 & 0x3f) & *(uint *)((int)local_98 + iVar10);
      if ((int)uVar23 < 3) {
        uVar16 = 3 - uVar23;
        lVar13 = (uVar23 & 0x3fffffff) * 4 + uVar7 + -0x9c;
        uVar23 = uVar16 & 0xffffffff;
        while (uVar23 != 0) {
          lVar13 = lVar13 + 4;
          *(undefined4 *)lVar13 = 0;
          uVar16 = uVar16 - 1;
          uVar23 = uVar16;
        }
      }
      uVar19 = uVar6 + 1;
      uVar11 = ((int)uVar19 >> 5) + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0);
      lVar14 = 3;
      lVar13 = uVar7 - 0x9c;
      uVar22 = 0;
      uVar19 = uVar19 + (((int)uVar19 >> 5) + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0)) *
                        -0x20;
      do {
        uVar20 = *(uint *)((int)lVar13 + 4);
        lVar13 = lVar13 + 4;
        *(uint *)lVar13 = uVar20 >> (uVar19 & 0x3f) | uVar22;
        uVar22 = (uVar20 & ~(-1 << (uVar19 & 0x3f))) << (0x20 - uVar19 & 0x3f);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      iVar10 = 2;
      lVar14 = uVar7 - 0x90;
      lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar11 & 0x3fffffff) * -4;
      lVar24 = 3;
      do {
        if (iVar10 < (int)uVar11) {
          *(undefined4 *)lVar14 = 0;
        }
        else {
          *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
        }
        iVar10 = iVar10 + -1;
        lVar13 = lVar13 + -4;
        lVar14 = lVar14 + -4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      iVar10 = 0;
      uVar8 = 2;
      goto LAB_980122f0;
    }
    iVar10 = (int)uVar6 >> 5;
    if (_DAT_91a19004 <= iVar21) {
      uVar11 = iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
      local_98[1] = 0;
      uVar19 = uVar6 + (iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * -0x20;
      lVar14 = uVar7 - 0x9c;
      uVar22 = 0;
      local_98[0] = 0x80000000;
      do {
        uVar20 = *(uint *)((int)lVar14 + 4);
        lVar14 = lVar14 + 4;
        *(uint *)lVar14 = uVar20 >> (uVar19 & 0x3f) | uVar22;
        uVar22 = (uVar20 & ~(-1 << (uVar19 & 0x3f))) << (0x20 - uVar19 & 0x3f);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar10 = 2;
      lVar14 = uVar7 - 0x90;
      lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar11 & 0x3fffffff) * -4;
      lVar24 = 3;
      do {
        if (iVar10 < (int)uVar11) {
          *(undefined4 *)lVar14 = 0;
        }
        else {
          *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
        }
        iVar10 = iVar10 + -1;
        lVar13 = lVar13 + -4;
        lVar14 = lVar14 + -4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      iVar10 = _DAT_91a19018 + iVar5;
      goto LAB_980122f0;
    }
    uVar11 = iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
    local_98[0] = local_98[0] & 0x7fffffff;
    iVar21 = _DAT_91a19018 + iVar21;
    uVar19 = uVar6 + (iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * -0x20;
    uVar22 = 0;
    lVar14 = uVar7 - 0x9c;
    do {
      uVar20 = *(uint *)((int)lVar14 + 4);
      lVar14 = lVar14 + 4;
      *(uint *)lVar14 = uVar20 >> (uVar19 & 0x3f) | uVar22;
      uVar22 = (uVar20 & ~(-1 << (uVar19 & 0x3f))) << (0x20 - uVar19 & 0x3f);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    iVar10 = 2;
    lVar14 = uVar7 - 0x90;
    lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar11 & 0x3fffffff) * -4;
    lVar24 = 3;
    do {
      if (iVar10 < (int)uVar11) {
        *(undefined4 *)lVar14 = 0;
      }
      else {
        *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
      }
      iVar10 = iVar10 + -1;
      lVar13 = lVar13 + -4;
      lVar14 = lVar14 + -4;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  iVar10 = iVar21;
  uVar8 = 0;
LAB_980122f0:
  if (_DAT_91a19014 == 0x40) {
    param_2[1] = local_98[1];
  }
  else if (_DAT_91a19014 != 0x20) {
    return uVar8;
  }
  *param_2 = iVar10 << (0x1f - uVar6 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 |
             local_98[0];
  return uVar8;
}


/* ==== FUN_98012340 @ 98012340 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_98012340(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar9;
  undefined8 uVar8;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar15;
  longlong lVar14;
  int iVar17;
  ulonglong uVar16;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_98 [4];
  uint local_88;
  uint local_84;
  int local_80;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar9 = (ushort *)FUN_9800d234();
  uVar6 = _DAT_91a19028;
  uVar11 = _DAT_91a19024;
  uVar2 = *puVar9;
  uVar22 = uVar2 & 0x7fff;
  local_98[0] = *(uint *)(puVar9 + 1);
  local_98[1] = *(uint *)(puVar9 + 3);
  iVar17 = uVar22 - 0x3fff;
  local_98[2] = (uint)puVar9[5] << 0x10;
  lVar13 = uVar7 - 0x98;
  iVar10 = 0;
  if (iVar17 == -0x3fff) {
    iVar17 = 0;
    do {
      if (*(int *)lVar13 != 0) {
        uVar8 = 2;
        local_98[0] = 0;
        local_98[1] = 0;
        goto LAB_98012a08;
      }
      iVar17 = iVar17 + 1;
      lVar13 = lVar13 + 4;
      iVar21 = 0;
    } while (iVar17 < 3);
  }
  else {
    local_88 = *(uint *)lVar13;
    uVar19 = _DAT_91a19024 - 1;
    uVar8 = 1;
    iVar3 = (int)_DAT_91a19024 >> 5;
    local_84 = local_98[1];
    uVar23 = (longlong)iVar3 + (ulonglong)((int)_DAT_91a19024 < 0 && (_DAT_91a19024 & 0x1f) != 0);
    local_80 = local_98[2];
    iVar5 = (int)((uVar23 & 0x3fffffff) << 2);
    uVar20 = 0x1f - (_DAT_91a19024 +
                    (iVar3 + (uint)((int)_DAT_91a19024 < 0 && (_DAT_91a19024 & 0x1f) != 0)) * -0x20)
    ;
    iVar4 = (int)uVar19 >> 5;
    if ((1 << (uVar20 & 0x3f) & *(uint *)((int)local_98 + iVar5)) != 0) {
      if ((*(uint *)((int)local_98 + (int)((uVar23 & 0xffffffff) << 2)) & ~(-1 << (uVar20 & 0x3f)))
          == 0) {
        uVar16 = uVar23 + 1;
        if ((int)uVar16 < 3) {
          lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x98);
          do {
            if (*(int *)lVar13 != 0) goto LAB_98012488;
            uVar16 = uVar16 + 1;
            lVar13 = lVar13 + 4;
          } while ((int)uVar16 < 3);
        }
      }
      else {
LAB_98012488:
        uVar16 = (longlong)iVar4 + (ulonglong)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0);
        iVar21 = (int)((uVar16 & 0xffffffff) << 2);
        iVar10 = 0;
        uVar18 = *(uint *)((int)local_98 + iVar21);
        uVar12 = 1 << (0x1f - (uVar19 + (iVar4 + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0)) *
                                        -0x20) & 0x3f);
        uVar15 = uVar18 + uVar12;
        if ((uVar15 < uVar18) || (uVar15 < uVar12)) {
          iVar10 = 1;
        }
        uVar16 = uVar16 - 1;
        *(uint *)((int)local_98 + iVar21) = uVar15;
        if (-1 < (longlong)uVar16) {
          lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x94);
          do {
            bVar1 = iVar10 == 0;
            iVar10 = 0;
            if (bVar1) break;
            uVar18 = *(uint *)((int)lVar13 + -4);
            iVar10 = 0;
            uVar12 = uVar18 + 1;
            if ((uVar12 < uVar18) || (uVar12 == 0)) {
              iVar10 = 1;
            }
            uVar16 = uVar16 - 1;
            lVar13 = lVar13 + -4;
            *(uint *)lVar13 = uVar12;
          } while (-1 < (longlong)uVar16);
        }
      }
    }
    uVar23 = uVar23 + 1;
    *(uint *)((int)local_98 + iVar5) = -1 << (uVar20 & 0x3f) & *(uint *)((int)local_98 + iVar5);
    if ((int)uVar23 < 3) {
      uVar16 = 3 - uVar23;
      lVar13 = (uVar23 & 0x3fffffff) * 4 + uVar7 + -0x9c;
      uVar23 = uVar16 & 0xffffffff;
      while (uVar23 != 0) {
        lVar13 = lVar13 + 4;
        *(undefined4 *)lVar13 = 0;
        uVar16 = uVar16 - 1;
        uVar23 = uVar16;
      }
    }
    iVar5 = _DAT_91a1901c;
    iVar21 = iVar17;
    if (iVar10 != 0) {
      iVar21 = uVar22 - 0x3ffe;
    }
    if (iVar21 < (int)(_DAT_91a19020 - uVar11)) {
      iVar10 = 0;
      uVar8 = 2;
      local_98[0] = 0;
      local_98[1] = 0;
      goto LAB_98012a08;
    }
    lVar13 = 3;
    if (iVar21 <= _DAT_91a19020) {
      uVar18 = _DAT_91a19020 - iVar17;
      uVar20 = ((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
      uVar18 = uVar18 + (((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0)) *
                        -0x20;
      local_98[0] = local_88;
      uVar22 = 0;
      lVar14 = uVar7 - 0x9c;
      do {
        uVar12 = *(uint *)((int)lVar14 + 4);
        lVar14 = lVar14 + 4;
        *(uint *)lVar14 = uVar12 >> (uVar18 & 0x3f) | uVar22;
        uVar22 = (uVar12 & ~(-1 << (uVar18 & 0x3f))) << (0x20 - uVar18 & 0x3f);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar10 = 2;
      lVar14 = uVar7 - 0x90;
      lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar20 & 0x3fffffff) * -4;
      lVar24 = 3;
      do {
        if (iVar10 < (int)uVar20) {
          *(undefined4 *)lVar14 = 0;
        }
        else {
          *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
        }
        iVar10 = iVar10 + -1;
        lVar13 = lVar13 + -4;
        lVar14 = lVar14 + -4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      uVar23 = (longlong)iVar3 + (ulonglong)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0);
      iVar10 = (int)((uVar23 & 0x3fffffff) << 2);
      uVar22 = 0x1f - (uVar11 + (iVar3 + (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) * -0x20);
      if ((1 << (uVar22 & 0x3f) & *(uint *)((int)local_98 + iVar10)) != 0) {
        if ((*(uint *)((int)local_98 + (int)((uVar23 & 0xffffffff) << 2)) & ~(-1 << (uVar22 & 0x3f))
            ) == 0) {
          uVar16 = uVar23 + 1;
          if ((int)uVar16 < 3) {
            lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x98);
            do {
              if (*(int *)lVar13 != 0) goto LAB_980126f4;
              uVar16 = uVar16 + 1;
              lVar13 = lVar13 + 4;
            } while ((int)uVar16 < 3);
          }
        }
        else {
LAB_980126f4:
          uVar16 = (longlong)iVar4 + (ulonglong)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0);
          iVar17 = (int)((uVar16 & 0xffffffff) << 2);
          bVar1 = false;
          uVar11 = *(uint *)((int)local_98 + iVar17);
          uVar19 = 1 << (0x1f - (uVar19 + (iVar4 + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0))
                                          * -0x20) & 0x3f);
          uVar20 = uVar11 + uVar19;
          if ((uVar20 < uVar11) || (uVar20 < uVar19)) {
            bVar1 = true;
          }
          *(uint *)((int)local_98 + iVar17) = uVar20;
          uVar16 = uVar16 - 1;
          if (-1 < (longlong)uVar16) {
            lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x94);
            do {
              if (!bVar1) break;
              uVar11 = *(uint *)((int)lVar13 + -4);
              bVar1 = false;
              uVar19 = uVar11 + 1;
              if ((uVar19 < uVar11) || (uVar19 == 0)) {
                bVar1 = true;
              }
              uVar16 = uVar16 - 1;
              lVar13 = lVar13 + -4;
              *(uint *)lVar13 = uVar19;
            } while (-1 < (longlong)uVar16);
          }
        }
      }
      uVar23 = uVar23 + 1;
      *(uint *)((int)local_98 + iVar10) = -1 << (uVar22 & 0x3f) & *(uint *)((int)local_98 + iVar10);
      if ((int)uVar23 < 3) {
        uVar16 = 3 - uVar23;
        lVar13 = (uVar23 & 0x3fffffff) * 4 + uVar7 + -0x9c;
        uVar23 = uVar16 & 0xffffffff;
        while (uVar23 != 0) {
          lVar13 = lVar13 + 4;
          *(undefined4 *)lVar13 = 0;
          uVar16 = uVar16 - 1;
          uVar23 = uVar16;
        }
      }
      uVar19 = uVar6 + 1;
      uVar11 = ((int)uVar19 >> 5) + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0);
      lVar14 = 3;
      lVar13 = uVar7 - 0x9c;
      uVar22 = 0;
      uVar19 = uVar19 + (((int)uVar19 >> 5) + (uint)((int)uVar19 < 0 && (uVar19 & 0x1f) != 0)) *
                        -0x20;
      do {
        uVar20 = *(uint *)((int)lVar13 + 4);
        lVar13 = lVar13 + 4;
        *(uint *)lVar13 = uVar20 >> (uVar19 & 0x3f) | uVar22;
        uVar22 = (uVar20 & ~(-1 << (uVar19 & 0x3f))) << (0x20 - uVar19 & 0x3f);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      iVar10 = 2;
      lVar14 = uVar7 - 0x90;
      lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar11 & 0x3fffffff) * -4;
      lVar24 = 3;
      do {
        if (iVar10 < (int)uVar11) {
          *(undefined4 *)lVar14 = 0;
        }
        else {
          *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
        }
        iVar10 = iVar10 + -1;
        lVar13 = lVar13 + -4;
        lVar14 = lVar14 + -4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      iVar10 = 0;
      uVar8 = 2;
      goto LAB_98012a08;
    }
    iVar10 = (int)uVar6 >> 5;
    if (_DAT_91a1901c <= iVar21) {
      uVar11 = iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
      local_98[1] = 0;
      uVar19 = uVar6 + (iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * -0x20;
      lVar14 = uVar7 - 0x9c;
      uVar22 = 0;
      local_98[0] = 0x80000000;
      do {
        uVar20 = *(uint *)((int)lVar14 + 4);
        lVar14 = lVar14 + 4;
        *(uint *)lVar14 = uVar20 >> (uVar19 & 0x3f) | uVar22;
        uVar22 = (uVar20 & ~(-1 << (uVar19 & 0x3f))) << (0x20 - uVar19 & 0x3f);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar10 = 2;
      lVar14 = uVar7 - 0x90;
      lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar11 & 0x3fffffff) * -4;
      lVar24 = 3;
      do {
        if (iVar10 < (int)uVar11) {
          *(undefined4 *)lVar14 = 0;
        }
        else {
          *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
        }
        iVar10 = iVar10 + -1;
        lVar13 = lVar13 + -4;
        lVar14 = lVar14 + -4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      iVar10 = _DAT_91a19030 + iVar5;
      goto LAB_98012a08;
    }
    uVar11 = iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
    local_98[0] = local_98[0] & 0x7fffffff;
    iVar21 = _DAT_91a19030 + iVar21;
    uVar19 = uVar6 + (iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * -0x20;
    uVar22 = 0;
    lVar14 = uVar7 - 0x9c;
    do {
      uVar20 = *(uint *)((int)lVar14 + 4);
      lVar14 = lVar14 + 4;
      *(uint *)lVar14 = uVar20 >> (uVar19 & 0x3f) | uVar22;
      uVar22 = (uVar20 & ~(-1 << (uVar19 & 0x3f))) << (0x20 - uVar19 & 0x3f);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    iVar10 = 2;
    lVar14 = uVar7 - 0x90;
    lVar13 = (uVar7 - 0x90) + ((ulonglong)uVar11 & 0x3fffffff) * -4;
    lVar24 = 3;
    do {
      if (iVar10 < (int)uVar11) {
        *(undefined4 *)lVar14 = 0;
      }
      else {
        *(undefined4 *)lVar14 = *(undefined4 *)lVar13;
      }
      iVar10 = iVar10 + -1;
      lVar13 = lVar13 + -4;
      lVar14 = lVar14 + -4;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  iVar10 = iVar21;
  uVar8 = 0;
LAB_98012a08:
  if (_DAT_91a1902c == 0x40) {
    param_2[1] = local_98[1];
  }
  else if (_DAT_91a1902c != 0x20) {
    return uVar8;
  }
  *param_2 = iVar10 << (0x1f - uVar6 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 |
             local_98[0];
  return uVar8;
}


/* ==== FUN_98012a58 @ 98012a58 ==== */

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

undefined8
FUN_98012a58(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong param_4,
            longlong param_5,longlong param_6,undefined8 param_7,ulonglong param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_9800d234();
  if ((param_8 & 0xffffffff) != 0) {
    for (; (((cVar1 = *(char *)param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x98012b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)((uint)bRam91a03378 * 4 + -0x6e5ee2cc))();
    return uVar3;
  }
  lVar2 = FUN_9800fe98();
  *(undefined4 *)lVar2 = 0x16;
  FUN_9800d2e0();
  return 0;
}


/* ==== FUN_98012b48 @ 98012b48 ==== */

/* WARNING: Removing unreachable block (ram,0x98012e90) */
/* WARNING: Removing unreachable block (ram,0x98012c74) */
/* WARNING: Removing unreachable block (ram,0x9801334c) */
/* WARNING: Removing unreachable block (ram,0x98012c80) */
/* WARNING: Removing unreachable block (ram,0x98012c88) */
/* WARNING: Removing unreachable block (ram,0x98012c98) */
/* WARNING: Removing unreachable block (ram,0x98012ca0) */
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
/* WARNING: Removing unreachable block (ram,0x9800d284) */

undefined8 FUN_98012b48(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x98012b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)bRam91a0337b * 4 + -0x6e5ee2cc))();
  return uVar1;
}


/* ==== FUN_98012b54 @ 98012b54 ==== */

ulonglong FUN_98012b54(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,int param_5,
                      undefined8 param_6,undefined8 param_7,int *param_8)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  char in_r11;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort uVar29;
  ulonglong unaff_r19;
  ushort *unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar30;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar31;
  longlong lVar32;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar29 = (ushort)unaff_r19;
  uVar13 = ZEXT48(&stack0x00000000);
  if (in_r11 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
    uVar23 = 5;
  }
  else if (in_r11 == '+') {
    uVar23 = 2;
    unaff_r19 = unaff_r22;
  }
  else if (in_r11 == '-') {
    uVar23 = 2;
    unaff_r19 = unaff_r21;
  }
  else {
    if (in_r11 != '0') {
      param_5 = param_5 + -1;
      goto LAB_98012c74;
    }
    uVar23 = 1;
  }
  do {
    uVar29 = (ushort)unaff_r19;
    param_5 = param_5 + 1;
    if (uVar23 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x98012b14 */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)((uint)*(byte *)(uVar23 + 0x91a03378) * 4 + -0x6e5ee2cc))();
      return uVar13;
    }
  } while (uVar23 != 10);
LAB_98012c74:
  *param_2 = param_5;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar31 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar26 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar30 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar30 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar30 = lVar30 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar30;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar31 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar31 & 0x7fffffff) * -2;
                      lVar32 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar32 = lVar32 + -1;
                      } while (lVar32 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar31 = uVar31 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar31 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar31 >> 0x10);
                    uStack0000005a = (ushort)uVar31;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar31;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar31 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar31 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar31 = uVar31 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar31 >> 0x10);
                    uStack00000052 = (ushort)uVar31;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uStack00000050 = (ushort)unaff_r21;
                          uVar21 = uVar21 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar31 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar31 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar31;
  *unaff_r20 = (ushort)uVar18 | uVar29;
  return unaff_r22;
}


/* ==== FUN_98012bc8 @ 98012bc8 ==== */

ulonglong FUN_98012bc8(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,int param_5,
                      undefined8 param_6,undefined8 param_7,int *param_8)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  char in_r11;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar29;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar30;
  longlong lVar31;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  if (in_r11 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
    uVar23 = 4;
  }
  else if ((in_r11 == '+') || (in_r11 == '-')) {
    param_5 = param_5 + -1;
    uVar23 = 0xb;
  }
  else if (in_r11 == '0') {
    uVar23 = 1;
  }
  else {
    if ((in_r11 < 'D') || (('E' < in_r11 && ((in_r11 < 'd' || ('e' < in_r11)))))) {
      param_5 = param_5 + -1;
      goto LAB_98012c74;
    }
    uVar23 = 6;
  }
  do {
    param_5 = param_5 + 1;
    if (uVar23 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x98012b14 */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)((uint)*(byte *)(uVar23 + 0x91a03378) * 4 + -0x6e5ee2cc))();
      return uVar13;
    }
  } while (uVar23 != 10);
LAB_98012c74:
  *param_2 = param_5;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar30 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar26 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar29 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar29 = lVar29 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar29;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar30 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar30 & 0x7fffffff) * -2;
                      lVar31 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar31 = lVar31 + -1;
                      } while (lVar31 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar30 = uVar30 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar30 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar30 >> 0x10);
                    uStack0000005a = (ushort)uVar30;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar30;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar30 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar30 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar30 = uVar30 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar30 >> 0x10);
                    uStack00000052 = (ushort)uVar30;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar21 = uVar21 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar30 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar30 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar30;
  *unaff_r20 = (ushort)uVar18 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012c4c @ 98012c4c ==== */

ulonglong FUN_98012c4c(int param_1,int *param_2,int param_3,ulonglong param_4,int param_5,
                      undefined8 param_6,undefined8 param_7,int *param_8)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  char in_r11;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar29;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar30;
  longlong lVar31;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  if (in_r11 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
    uVar23 = 5;
  }
  else {
    if (in_r11 != '0') goto LAB_98012c74;
    uVar23 = 1;
  }
  do {
    param_3 = param_5 + 1;
    if (uVar23 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x98012b14 */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)((uint)*(byte *)(uVar23 + 0x91a03378) * 4 + -0x6e5ee2cc))();
      return uVar13;
    }
    param_5 = param_3;
  } while (uVar23 != 10);
LAB_98012c74:
  *param_2 = param_3;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar30 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar26 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar29 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar29 = lVar29 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar29;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar30 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar30 & 0x7fffffff) * -2;
                      lVar31 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar31 = lVar31 + -1;
                      } while (lVar31 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar30 = uVar30 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar30 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar30 >> 0x10);
                    uStack0000005a = (ushort)uVar30;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar30;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar30 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar30 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar30 = uVar30 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar30 >> 0x10);
                    uStack00000052 = (ushort)uVar30;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar21 = uVar21 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar30 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar30 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar30;
  *unaff_r20 = (ushort)uVar18 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012cc8 @ 98012cc8 ==== */

ulonglong FUN_98012cc8(char *param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                      char *param_5,undefined8 param_6,undefined8 param_7,int *param_8)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ushort uVar20;
  ulonglong uVar19;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  char in_r11;
  ulonglong uVar25;
  int iVar26;
  ushort uVar27;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar28;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar29;
  longlong lVar30;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  do {
    if ('9' < in_r11) break;
    if ((param_4 & 0xffffffff) < 0x19) {
      param_4 = param_4 + 1;
      *param_1 = in_r11 + -0x30;
      param_1 = param_1 + 1;
    }
    else {
      unaff_r31 = unaff_r31 + 1;
    }
    in_r11 = *param_5;
    param_5 = param_5 + 1;
  } while ('/' < in_r11);
  if (in_r11 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
    uVar22 = 4;
  }
  else if ((in_r11 == '+') || (in_r11 == '-')) {
    param_5 = param_5 + -1;
    uVar22 = 0xb;
  }
  else {
    if ((in_r11 < 'D') || (('E' < in_r11 && ((in_r11 < 'd' || ('e' < in_r11)))))) {
      param_5 = param_5 + -1;
      goto LAB_98012c74;
    }
    uVar22 = 6;
  }
  do {
    param_5 = param_5 + 1;
    if (uVar22 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x98012b14 */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)((uint)*(byte *)(uVar22 + 0x91a03378) * 4 + -0x6e5ee2cc))();
      return uVar13;
    }
  } while (uVar22 != 10);
LAB_98012c74:
  *param_2 = param_5;
  uVar27 = (ushort)unaff_r22;
  uVar15 = unaff_r22;
  uVar29 = unaff_r22;
  uVar17 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      param_1 = param_1 + -1;
      cVar1 = *param_1;
      while (cVar1 == '\0') {
        param_1 = param_1 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *param_1;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar25 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar25 = uVar25 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar25 = uVar25 - unaff_r24;
      }
      iVar26 = (int)uVar25;
      if (iVar26 < 0x1451) {
        if (iVar26 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar28 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar26 != 0) {
            if (iVar26 < 0) {
              uVar25 = -uVar25;
              lVar28 = -0x6e5e6ec8;
            }
            iVar26 = (int)uVar25;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar24 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar24;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar26 != 0) {
              uVar15 = uVar25 & 7;
              lVar28 = lVar28 + 0x54;
              iVar26 = (int)uVar25 >> 3;
              uVar25 = (ulonglong)iVar26;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar24 = iVar8;
              if (uVar15 != 0) {
                uVar15 = uVar15 * 0xc + lVar28;
                if (0x7fff < *(ushort *)((int)uVar15 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar15,0xc);
                  uVar15 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar16 = (uint *)uVar15;
                uVar2 = *(ushort *)puVar16;
                uVar5 = uStack00000060 ^ uVar2;
                uVar20 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar20 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar27;
                  _uStack00000064 = iVar10;
                  iVar24 = iVar10;
                  if (((uVar20 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar20 = uVar20 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar27, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar24 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar20 = uVar20 + 1, (*puVar16 & 0x7fffffff) == 0)) && (puVar16[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar27, _uStack00000064 = iVar10,
                         iVar24 = iVar10, puVar16[2] == 0)))) goto joined_r0x98012fac;
                  lVar21 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar29 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar18 = uVar13 + 0x6a + (uVar29 & 0x7fffffff) * -2;
                      lVar30 = lVar14;
                      uVar17 = uVar15;
                      do {
                        uVar17 = uVar17 + 2;
                        psVar6 = (short *)lVar21;
                        uVar22 = (uint)*(ushort *)uVar17 * (uint)*(ushort *)lVar18;
                        uVar23 = *(uint *)(psVar6 + 1) + uVar22;
                        if ((uVar23 < *(uint *)(psVar6 + 1)) ||
                           (uVar19 = unaff_r22, uVar23 < uVar22)) {
                          uVar19 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar23;
                        if ((int)uVar19 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar18 = lVar18 + -2;
                        lVar30 = lVar30 + -1;
                      } while (lVar30 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar21 = lVar21 + -2;
                    uVar29 = uVar29 + 1;
                  } while (0 < lVar14);
                  uVar20 = uVar20 + 0xc002;
                  uVar15 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar27;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar27;
                  uStack0000005a = uVar27;
                  while ((0 < (short)uVar20 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar29 = (uVar15 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar15 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar29 >> 0x10);
                    uStack0000005a = (ushort)uVar29;
                    uVar20 = uVar20 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar15 = uVar29;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar20 < 1) && (uVar20 = uVar20 - 1, (short)uVar20 < 0)) {
                    uVar29 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar19 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar17 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar17 = uVar17 + 1;
                      }
                      uVar20 = uVar20 + 1;
                      uVar3 = uVar15 >> 1;
                      uVar9 = uVar29 & 1;
                      uVar4 = uVar19 >> 1;
                      uVar15 = uVar3 | (uVar19 & 1) << 0x1f;
                      uVar29 = uVar29 >> 1;
                      uStack00000058 = (ushort)(uVar15 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar19 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar20 < 0);
                    uStack00000054 = (ushort)(uVar19 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar29 >> 0x10);
                    uStack00000052 = (ushort)uVar29;
                    if ((int)uVar17 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar15 = (ulonglong)((uint)uVar15 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar24 = CONCAT22(uStack00000056,uStack00000058), (uVar15 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar20 = uVar20 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar24 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar24 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar24 = iVar10;
                      }
                    }
                    else {
                      iVar24 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar20 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar20;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar24 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar15 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar29 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar17 = (ulonglong)uStack00000060;
          uVar27 = uStack0000006a;
        }
      }
      else {
        uVar29 = 0xffffffff80000000;
        uVar17 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar27;
  *(int *)(unaff_r20 + 3) = (int)uVar15;
  *(int *)(unaff_r20 + 1) = (int)uVar29;
  *unaff_r20 = (ushort)uVar17 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012d48 @ 98012d48 ==== */

ulonglong FUN_98012d48(char *param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                      char *param_5)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ushort uVar20;
  ulonglong uVar19;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  ushort uVar27;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar28;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar29;
  longlong lVar30;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  do {
    cVar1 = *param_5;
    unaff_r31 = unaff_r31 + -1;
    param_5 = param_5 + 1;
  } while (cVar1 == '0');
  while (('/' < cVar1 && (cVar1 < ':'))) {
    if ((param_4 & 0xffffffff) < 0x19) {
      param_4 = param_4 + 1;
      *param_1 = cVar1 + -0x30;
      unaff_r31 = unaff_r31 + -1;
      param_1 = param_1 + 1;
    }
    cVar1 = *param_5;
    param_5 = param_5 + 1;
  }
  if ((cVar1 == '+') || (cVar1 == '-')) {
    param_5 = param_5 + -1;
    uVar22 = 0xb;
  }
  else {
    if ((cVar1 < 'D') || (('E' < cVar1 && ((cVar1 < 'd' || ('e' < cVar1)))))) {
      param_5 = param_5 + -1;
      goto LAB_98012c74;
    }
    uVar22 = 6;
  }
  do {
    param_5 = param_5 + 1;
    if (uVar22 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x98012b14 */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)((uint)*(byte *)(uVar22 + 0x91a03378) * 4 + -0x6e5ee2cc))();
      return uVar13;
    }
  } while (uVar22 != 10);
LAB_98012c74:
  *param_2 = param_5;
  uVar27 = (ushort)unaff_r22;
  uVar15 = unaff_r22;
  uVar29 = unaff_r22;
  uVar17 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      param_1 = param_1 + -1;
      cVar1 = *param_1;
      while (cVar1 == '\0') {
        param_1 = param_1 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *param_1;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar25 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar25 = uVar25 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar25 = uVar25 - unaff_r24;
      }
      iVar26 = (int)uVar25;
      if (iVar26 < 0x1451) {
        if (iVar26 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar28 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar26 != 0) {
            if (iVar26 < 0) {
              uVar25 = -uVar25;
              lVar28 = -0x6e5e6ec8;
            }
            iVar26 = (int)uVar25;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar24 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar24;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar26 != 0) {
              uVar15 = uVar25 & 7;
              lVar28 = lVar28 + 0x54;
              iVar26 = (int)uVar25 >> 3;
              uVar25 = (ulonglong)iVar26;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar24 = iVar8;
              if (uVar15 != 0) {
                uVar15 = uVar15 * 0xc + lVar28;
                if (0x7fff < *(ushort *)((int)uVar15 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar15,0xc);
                  uVar15 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar16 = (uint *)uVar15;
                uVar2 = *(ushort *)puVar16;
                uVar5 = uStack00000060 ^ uVar2;
                uVar20 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar20 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar27;
                  _uStack00000064 = iVar10;
                  iVar24 = iVar10;
                  if (((uVar20 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar20 = uVar20 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar27, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar24 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar20 = uVar20 + 1, (*puVar16 & 0x7fffffff) == 0)) && (puVar16[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar27, _uStack00000064 = iVar10,
                         iVar24 = iVar10, puVar16[2] == 0)))) goto joined_r0x98012fac;
                  lVar21 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar29 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar18 = uVar13 + 0x6a + (uVar29 & 0x7fffffff) * -2;
                      lVar30 = lVar14;
                      uVar17 = uVar15;
                      do {
                        uVar17 = uVar17 + 2;
                        psVar6 = (short *)lVar21;
                        uVar22 = (uint)*(ushort *)uVar17 * (uint)*(ushort *)lVar18;
                        uVar23 = *(uint *)(psVar6 + 1) + uVar22;
                        if ((uVar23 < *(uint *)(psVar6 + 1)) ||
                           (uVar19 = unaff_r22, uVar23 < uVar22)) {
                          uVar19 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar23;
                        if ((int)uVar19 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar18 = lVar18 + -2;
                        lVar30 = lVar30 + -1;
                      } while (lVar30 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar21 = lVar21 + -2;
                    uVar29 = uVar29 + 1;
                  } while (0 < lVar14);
                  uVar20 = uVar20 + 0xc002;
                  uVar15 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar27;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar27;
                  uStack0000005a = uVar27;
                  while ((0 < (short)uVar20 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar29 = (uVar15 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar15 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar29 >> 0x10);
                    uStack0000005a = (ushort)uVar29;
                    uVar20 = uVar20 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar15 = uVar29;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar20 < 1) && (uVar20 = uVar20 - 1, (short)uVar20 < 0)) {
                    uVar29 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar19 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar17 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar17 = uVar17 + 1;
                      }
                      uVar20 = uVar20 + 1;
                      uVar3 = uVar15 >> 1;
                      uVar9 = uVar29 & 1;
                      uVar4 = uVar19 >> 1;
                      uVar15 = uVar3 | (uVar19 & 1) << 0x1f;
                      uVar29 = uVar29 >> 1;
                      uStack00000058 = (ushort)(uVar15 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar19 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar20 < 0);
                    uStack00000054 = (ushort)(uVar19 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar29 >> 0x10);
                    uStack00000052 = (ushort)uVar29;
                    if ((int)uVar17 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar15 = (ulonglong)((uint)uVar15 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar24 = CONCAT22(uStack00000056,uStack00000058), (uVar15 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar20 = uVar20 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar24 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar24 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar24 = iVar10;
                      }
                    }
                    else {
                      iVar24 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar20 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar20;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar24 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar15 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar29 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar17 = (ulonglong)uStack00000060;
          uVar27 = uStack0000006a;
        }
      }
      else {
        uVar29 = 0xffffffff80000000;
        uVar17 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar27;
  *(int *)(unaff_r20 + 3) = (int)uVar15;
  *(int *)(unaff_r20 + 1) = (int)uVar29;
  *unaff_r20 = (ushort)uVar17 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012ddc @ 98012ddc ==== */

/* WARNING: Removing unreachable block (ram,0x98012e90) */
/* WARNING: Removing unreachable block (ram,0x98012c74) */
/* WARNING: Removing unreachable block (ram,0x9801334c) */
/* WARNING: Removing unreachable block (ram,0x98012c80) */
/* WARNING: Removing unreachable block (ram,0x98012c88) */
/* WARNING: Removing unreachable block (ram,0x98012c98) */
/* WARNING: Removing unreachable block (ram,0x98012ca0) */
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
/* WARNING: Removing unreachable block (ram,0x9800d284) */

undefined8 FUN_98012ddc(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x98012b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)bRam91a03381 * 4 + -0x6e5ee2cc))();
  return uVar1;
}


/* ==== FUN_98012de4 @ 98012de4 ==== */

ulonglong FUN_98012de4(int param_1,int *param_2,int param_3,ulonglong param_4,int param_5)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int in_r11;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar29;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar30;
  longlong lVar31;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  if (in_r11 == 0x2b) {
    uVar23 = 7;
  }
  else if (in_r11 == 0x2d) {
    uVar23 = 7;
    unaff_r27 = -1;
  }
  else {
    if (in_r11 != 0x30) goto LAB_98012c74;
    uVar23 = 8;
  }
  do {
    param_3 = param_5 + 1;
    if (uVar23 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x98012b14 */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)((uint)*(byte *)(uVar23 + 0x91a03378) * 4 + -0x6e5ee2cc))();
      return uVar13;
    }
    param_5 = param_3;
  } while (uVar23 != 10);
LAB_98012c74:
  *param_2 = param_3;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar30 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar26 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar29 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar29 = lVar29 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar29;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar30 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar30 & 0x7fffffff) * -2;
                      lVar31 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar31 = lVar31 + -1;
                      } while (lVar31 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar30 = uVar30 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar30 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar30 >> 0x10);
                    uStack0000005a = (ushort)uVar30;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar30;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar30 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar30 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar30 = uVar30 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar30 >> 0x10);
                    uStack00000052 = (ushort)uVar30;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar21 = uVar21 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar30 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar30 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar30;
  *unaff_r20 = (ushort)uVar18 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012e18 @ 98012e18 ==== */

/* WARNING: Removing unreachable block (ram,0x98012e90) */
/* WARNING: Removing unreachable block (ram,0x98012e98) */

ulonglong FUN_98012e18(int param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                      char *param_5)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar29;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar30;
  longlong lVar31;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  do {
    pcVar15 = param_5;
    cVar1 = *pcVar15;
    param_5 = pcVar15 + 1;
  } while (cVar1 == '0');
  if (('0' < cVar1) && (cVar1 < ':')) {
                    /* WARNING: Could not recover jumptable at 0x98012b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)((uint)bRam91a03381 * 4 + -0x6e5ee2cc))();
    return uVar13;
  }
  *param_2 = pcVar15;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar30 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar26 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar29 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar29 = lVar29 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar29;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar30 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar30 & 0x7fffffff) * -2;
                      lVar31 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar31 = lVar31 + -1;
                      } while (lVar31 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar30 = uVar30 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar30 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar30 >> 0x10);
                    uStack0000005a = (ushort)uVar30;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar30;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar30 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar30 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar30 = uVar30 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar30 >> 0x10);
                    uStack00000052 = (ushort)uVar30;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar21 = uVar21 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar30 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar30 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar30;
  *unaff_r20 = (ushort)uVar18 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012e7c @ 98012e7c ==== */

/* WARNING: Removing unreachable block (ram,0x98012e90) */
/* WARNING: Removing unreachable block (ram,0x98012c74) */
/* WARNING: Removing unreachable block (ram,0x9801334c) */
/* WARNING: Removing unreachable block (ram,0x98012c80) */
/* WARNING: Removing unreachable block (ram,0x98012c88) */
/* WARNING: Removing unreachable block (ram,0x98012c98) */
/* WARNING: Removing unreachable block (ram,0x98012ca0) */
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
/* WARNING: Removing unreachable block (ram,0x9800d284) */

undefined8 FUN_98012e7c(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x98012b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)bRam91a0337f * 4 + -0x6e5ee2cc))();
  return uVar1;
}


/* ==== FUN_98012e88 @ 98012e88 ==== */

/* WARNING: Removing unreachable block (ram,0x98012afc) */
/* WARNING: Removing unreachable block (ram,0x98012b0c) */

ulonglong FUN_98012e88(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,int param_5)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar29;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar30;
  longlong lVar31;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  *param_2 = param_5 + -1;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar30 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar26 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar29 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar29 = lVar29 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar29;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar30 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar30 & 0x7fffffff) * -2;
                      lVar31 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar31 = lVar31 + -1;
                      } while (lVar31 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar30 = uVar30 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar30 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar30 >> 0x10);
                    uStack0000005a = (ushort)uVar30;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar30;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar30 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar30 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar30 = uVar30 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar30 >> 0x10);
                    uStack00000052 = (ushort)uVar30;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar21 = uVar21 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar30 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar30 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar30;
  *unaff_r20 = (ushort)uVar18 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_98012eac @ 98012eac ==== */

ulonglong FUN_98012eac(int param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                      char *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  char *pcVar15;
  longlong lVar14;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar21;
  ulonglong uVar20;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong in_r11;
  ulonglong uVar26;
  int iVar27;
  ushort uVar28;
  ushort unaff_r19;
  ushort *unaff_r20;
  ushort unaff_r21;
  ulonglong unaff_r22;
  longlong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar29;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  int unaff_r30;
  longlong unaff_r31;
  ulonglong uVar30;
  longlong lVar31;
  ushort uStack00000050;
  ushort uStack00000052;
  ushort uStack00000054;
  ushort uStack00000056;
  ushort uStack00000058;
  ushort uStack0000005a;
  ushort uStack00000060;
  ushort uStack00000062;
  undefined2 uStack00000064;
  undefined2 uStack00000066;
  undefined2 uStack00000068;
  ushort uStack0000006a;
  
  uVar13 = ZEXT48(&stack0x00000000);
  do {
    if (0x39 < (int)in_r11) break;
    param_8 = param_8 * 10 + in_r11 + -0x30;
    if (0x1450 < (int)param_8) {
      param_8 = 0x1451;
      break;
    }
    cVar1 = *param_5;
    param_5 = param_5 + 1;
    in_r11 = (longlong)cVar1;
  } while ('/' < cVar1);
  while ((0x2f < (int)in_r11 && ((int)in_r11 < 0x3a))) {
    cVar1 = *param_5;
    param_5 = param_5 + 1;
    in_r11 = (longlong)cVar1;
  }
  *param_2 = param_5 + -1;
  uVar28 = (ushort)unaff_r22;
  uVar16 = unaff_r22;
  uVar30 = unaff_r22;
  uVar18 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    if (0x18 < (param_4 & 0xffffffff)) {
      param_4 = 0x18;
      param_1 = param_1 + -1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      pcVar15 = (char *)(param_1 + -1);
      cVar1 = *pcVar15;
      while (cVar1 == '\0') {
        pcVar15 = pcVar15 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *pcVar15;
      }
      FUN_98013fc0(uVar13 + 0x80,param_4,uVar13 + 0x60);
      if (unaff_r27 < 0) {
        param_8 = -param_8;
      }
      uVar26 = unaff_r31 + param_8;
      if (unaff_r28 == 0) {
        uVar26 = uVar26 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar26 = uVar26 - unaff_r24;
      }
      iVar27 = (int)uVar26;
      if (iVar27 < 0x1451) {
        if (iVar27 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar29 = -0x6e5e7028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x6e5e6ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x98012fac:
            iVar8 = iVar25;
            iVar7 = _uStack00000064;
            uStack00000062 = uVar12;
            uStack00000060 = uVar11;
            if (iVar27 != 0) {
              uVar16 = uVar26 & 7;
              lVar29 = lVar29 + 0x54;
              iVar27 = (int)uVar26 >> 3;
              uVar26 = (ulonglong)iVar27;
              uVar11 = uStack00000060;
              uVar12 = uStack00000062;
              _uStack00000064 = iVar7;
              iVar25 = iVar8;
              if (uVar16 != 0) {
                uVar16 = uVar16 * 0xc + lVar29;
                if (0x7fff < *(ushort *)((int)uVar16 + 10)) {
                  FUN_9800d3f0(uVar13 + 0x70,uVar16,0xc);
                  uVar16 = uVar13 + 0x70;
                }
                uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                iVar10 = (int)unaff_r22;
                puVar17 = (uint *)uVar16;
                uVar2 = *(ushort *)puVar17;
                uVar5 = uStack00000060 ^ uVar2;
                uVar21 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                   (uVar21 < 0xbffe)) {
                  uVar11 = uStack00000058;
                  uVar12 = uVar28;
                  _uStack00000064 = iVar10;
                  iVar25 = iVar10;
                  if (((uVar21 < 0x3fc0) ||
                      ((((uStack00000060 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1,
                        (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                       ((iVar7 == 0 &&
                        (uVar11 = uVar28, uVar12 = uStack00000062, _uStack00000064 = iVar7,
                        iVar25 = iVar8, iVar8 == 0)))))) ||
                     (((((uVar2 & 0x7fff) == 0 &&
                        (uVar21 = uVar21 + 1, (*puVar17 & 0x7fffffff) == 0)) && (puVar17[1] == 0))
                      && (uVar11 = uStack00000058, uVar12 = uVar28, _uStack00000064 = iVar10,
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x98012fac;
                  lVar22 = uVar13 + 0x56;
                  lVar14 = 5;
                  uVar30 = unaff_r22;
                  do {
                    if (0 < (int)lVar14) {
                      lVar19 = uVar13 + 0x6a + (uVar30 & 0x7fffffff) * -2;
                      lVar31 = lVar14;
                      uVar18 = uVar16;
                      do {
                        uVar18 = uVar18 + 2;
                        psVar6 = (short *)lVar22;
                        uVar23 = (uint)*(ushort *)uVar18 * (uint)*(ushort *)lVar19;
                        uVar24 = *(uint *)(psVar6 + 1) + uVar23;
                        if ((uVar24 < *(uint *)(psVar6 + 1)) ||
                           (uVar20 = unaff_r22, uVar24 < uVar23)) {
                          uVar20 = 1;
                        }
                        *(uint *)(psVar6 + 1) = uVar24;
                        if ((int)uVar20 != 0) {
                          *psVar6 = *psVar6 + 1;
                        }
                        lVar19 = lVar19 + -2;
                        lVar31 = lVar31 + -1;
                      } while (lVar31 != 0);
                    }
                    lVar14 = lVar14 + -1;
                    lVar22 = lVar22 + -2;
                    uVar30 = uVar30 + 1;
                  } while (0 < lVar14);
                  uVar21 = uVar21 + 0xc002;
                  uVar16 = unaff_r22 & 0xffffffff;
                  uStack00000050 = uStack00000058;
                  uStack00000052 = uVar28;
                  uStack00000054 = uStack00000058;
                  uStack00000056 = uVar28;
                  uStack0000005a = uVar28;
                  while ((0 < (short)uVar21 && ((uStack00000050 & 0x8000) == 0))) {
                    iVar8 = CONCAT22(uStack00000050,uStack00000052) << 1;
                    iVar7 = CONCAT22(uStack00000054,uStack00000056) << 1;
                    uVar30 = (uVar16 & 0x7fffffff) << 1;
                    uStack00000056 = (ushort)iVar7 | (ushort)(uVar16 >> 0x10) >> 0xf;
                    uStack00000052 = (ushort)iVar8 | uStack00000054 >> 0xf;
                    uStack00000058 = (ushort)(uVar30 >> 0x10);
                    uStack0000005a = (ushort)uVar30;
                    uVar21 = uVar21 - 1;
                    uStack00000054 = (ushort)((uint)iVar7 >> 0x10);
                    uVar16 = uVar30;
                    uStack00000050 = (ushort)((uint)iVar8 >> 0x10);
                  }
                  if (((short)uVar21 < 1) && (uVar21 = uVar21 - 1, (short)uVar21 < 0)) {
                    uVar30 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                    uVar20 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                    uVar18 = unaff_r22;
                    do {
                      if ((uStack0000005a & 1) != 0) {
                        uVar18 = uVar18 + 1;
                      }
                      uVar21 = uVar21 + 1;
                      uVar3 = uVar16 >> 1;
                      uVar9 = uVar30 & 1;
                      uVar4 = uVar20 >> 1;
                      uVar16 = uVar3 | (uVar20 & 1) << 0x1f;
                      uVar30 = uVar30 >> 1;
                      uStack00000058 = (ushort)(uVar16 >> 0x10);
                      uStack0000005a = (ushort)uVar3;
                      uVar20 = uVar4 | uVar9 << 0x1f;
                    } while ((short)uVar21 < 0);
                    uStack00000054 = (ushort)(uVar20 >> 0x10);
                    uStack00000056 = (ushort)uVar4;
                    uStack00000050 = (ushort)(uVar30 >> 0x10);
                    uStack00000052 = (ushort)uVar30;
                    if ((int)uVar18 != 0) {
                      uStack0000005a = uStack0000005a | 1;
                      uVar16 = (ulonglong)((uint)uVar16 | 1);
                    }
                  }
                  if ((0x8000 < uStack0000005a) ||
                     (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                     iVar25 = CONCAT22(uStack00000056,uStack00000058), (uVar16 & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                      if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                        if (uStack00000050 == 0xffff) {
                          uVar21 = uVar21 + 1;
                          uStack00000050 = unaff_r21;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                        else {
                          uStack00000050 = uStack00000050 + 1;
                          _uStack00000064 = iVar10;
                          iVar25 = iVar10;
                        }
                      }
                      else {
                        _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                        iVar25 = iVar10;
                      }
                    }
                    else {
                      iVar25 = CONCAT22(uStack00000056,uStack00000058) + 1;
                      _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                    }
                  }
                  if (uVar21 < 0x7fff) {
                    uVar11 = uVar5 & 0x8000 | uVar21;
                    uVar12 = uStack00000050;
                    goto joined_r0x98012fac;
                  }
                }
                uStack00000060 = 0xffff;
                uStack00000062 = 0x8000;
                uVar11 = uStack00000060;
                uVar12 = uStack00000062;
                _uStack00000064 = iVar10;
                iVar25 = iVar10;
                if ((uVar5 & 0x8000) == 0) {
                  uStack00000060 = 0x7fff;
                  uStack00000062 = 0x8000;
                  uVar11 = uStack00000060;
                  uVar12 = uStack00000062;
                }
              }
              goto joined_r0x98012fac;
            }
          }
          uStack00000068 = (undefined2)((uint)iVar8 >> 0x10);
          uStack0000006a = (ushort)iVar8;
          uStack00000064 = (undefined2)((uint)iVar7 >> 0x10);
          uStack00000066 = (undefined2)iVar7;
          uVar16 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
          uVar30 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
          uVar18 = (ulonglong)uStack00000060;
          uVar28 = uStack0000006a;
        }
      }
      else {
        uVar30 = 0xffffffff80000000;
        uVar18 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar28;
  *(int *)(unaff_r20 + 3) = (int)uVar16;
  *(int *)(unaff_r20 + 1) = (int)uVar30;
  *unaff_r20 = (ushort)uVar18 | unaff_r19;
  return unaff_r22;
}


/* ==== FUN_980133b8 @ 980133b8 ==== */

/* WARNING: Removing unreachable block (ram,0x98013bd4) */
/* WARNING: Removing unreachable block (ram,0x98013aa8) */
/* WARNING: Removing unreachable block (ram,0x980138a0) */
/* WARNING: Removing unreachable block (ram,0x98013a90) */
/* WARNING: Removing unreachable block (ram,0x98013ab4) */
/* WARNING: Removing unreachable block (ram,0x98013c50) */
/* WARNING: Removing unreachable block (ram,0x98013c90) */
/* WARNING: Removing unreachable block (ram,0x98013c60) */
/* WARNING: Removing unreachable block (ram,0x98013c84) */
/* WARNING: Removing unreachable block (ram,0x98013c70) */
/* WARNING: Removing unreachable block (ram,0x980138e8) */
/* WARNING: Removing unreachable block (ram,0x98013c1c) */
/* WARNING: Removing unreachable block (ram,0x98013910) */
/* WARNING: Removing unreachable block (ram,0x98013968) */
/* WARNING: Removing unreachable block (ram,0x9801391c) */
/* WARNING: Removing unreachable block (ram,0x9801395c) */
/* WARNING: Removing unreachable block (ram,0x9801392c) */
/* WARNING: Removing unreachable block (ram,0x98013950) */
/* WARNING: Removing unreachable block (ram,0x9801393c) */
/* WARNING: Removing unreachable block (ram,0x98013c44) */

void FUN_980133b8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,longlong param_5)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  short sVar14;
  uint uVar15;
  uint uVar17;
  uint uVar18;
  ulonglong uVar16;
  undefined1 uVar21;
  short sVar20;
  ulonglong uVar19;
  char cVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ushort uStack00000010;
  uint uStack00000012;
  undefined2 uStack00000016;
  ushort uStack00000018;
  undefined6 uStack0000001a;
  uint uStack00000024;
  uint uStack0000002c;
  byte local_e8;
  undefined1 uStack_e7;
  ushort uStack_e6;
  uint local_a8;
  undefined2 uStack_a4;
  undefined2 local_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  
  iVar9 = CONCAT22(local_a2,uStack_a0);
  uVar7 = ZEXT48(&stack0x00000000);
  uVar8 = FUN_9800d220();
  uStack00000010 = (ushort)(uVar8 >> 0x30);
  uStack00000012 = (uint)(uVar8 >> 0x10);
  uStack00000016 = (undefined2)uVar8;
  uVar6 = uStack00000010 & 0xffff8000;
  uVar26 = uStack00000010 & 0x7fff;
  uVar21 = 0x2d;
  uStack00000018 = (ushort)((ulonglong)param_2 >> 0x30);
  uStack0000001a = (undefined6)param_2;
  if ((uVar8 & 0x8000000000000000) == 0) {
    uVar21 = 0x20;
  }
  psVar4 = (short *)param_5;
  *(undefined1 *)(psVar4 + 1) = uVar21;
  iVar3 = CONCAT22(uStack00000016,uStack00000018);
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  if ((((uVar8 & 0x7fff000000000000) == 0) && (uStack00000012 == 0)) && (iVar3 == 0)) {
    *psVar4 = 0;
    uVar21 = 0x2d;
    if (uVar6 != 0x8000) {
      uVar21 = 0x20;
    }
    *(undefined1 *)((int)psVar4 + 3) = 1;
    *(undefined1 *)((int)psVar4 + 5) = 0;
    *(undefined1 *)(psVar4 + 1) = uVar21;
    *(undefined1 *)(psVar4 + 2) = 0x30;
    goto LAB_98013f74;
  }
  if (uVar26 == 0x7fff) {
    *psVar4 = 1;
    if (((uStack00000012 == 0x80000000) && (iVar3 == 0)) || ((uVar8 & 0x400000000000) != 0)) {
      if (((uVar8 & 0x8000000000000000) == 0) || (uStack00000012 != 0xc0000000)) {
        if ((uStack00000012 != 0x80000000) || (iVar3 != 0)) goto LAB_9801358c;
        iVar9 = FUN_9800dec0((undefined1 *)(psVar4 + 2),0x16,(char *)0x91a0338c);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_9800d3b8();
        }
      }
      else {
        if (iVar3 != 0) {
LAB_9801358c:
          iVar9 = FUN_9800dec0((undefined1 *)(psVar4 + 2),0x16,(char *)0x91a03384);
          if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_9800d3b8();
          }
          goto LAB_980135a8;
        }
        iVar9 = FUN_9800dec0((undefined1 *)(psVar4 + 2),0x16,(char *)0x91a03394);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_9800d3b8();
        }
      }
      uVar21 = 5;
    }
    else {
      iVar9 = FUN_9800dec0((undefined1 *)(psVar4 + 2),0x16,(char *)0x91a0339c);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800d3b8();
      }
LAB_980135a8:
      uVar21 = 6;
    }
    *(undefined1 *)((int)psVar4 + 3) = uVar21;
    goto LAB_98013f74;
  }
  uStack_e6 = (ushort)(uVar8 >> 0x20);
  local_e8 = (byte)(uVar26 >> 8);
  uStack_e7 = (undefined1)uVar26;
  sVar14 = (short)(((uStack00000012 >> 0x17 & 0x1fe) + (uVar26 >> 8)) * 0x4d + uVar26 * 0x4d10 +
                   -0x134312f4 >> 0x10);
  uVar24 = -(longlong)sVar14;
  lVar23 = -0x6e5e7028;
  if (uVar24 == 0) {
LAB_980139e0:
    uVar25 = (ulonglong)uStack00000018 << 0x10;
    uVar8 = uVar8 & 0xffffffff;
  }
  else {
    bVar1 = (int)uVar24 == 0;
    if ((int)uVar24 < 0) {
      bVar1 = sVar14 == 0;
      lVar23 = -0x6e5e6ec8;
      uVar24 = (longlong)sVar14;
    }
    if (bVar1) goto LAB_980139e0;
    uVar25 = (ulonglong)uStack00000018 << 0x10;
    uVar8 = uVar8 & 0xffffffff;
    do {
      uVar10 = uVar24 & 7;
      lVar23 = lVar23 + 0x54;
      iVar3 = (int)uVar24 >> 3;
      uVar24 = (ulonglong)iVar3;
      if (uVar10 == 0) goto LAB_980139d0;
      uVar10 = uVar10 * 0xc + lVar23;
      if (0x7fff < *(ushort *)((int)uVar10 + 10)) {
        FUN_9800d3f0(uVar7 - 0xa8,uVar10,0xc);
        uVar10 = uVar7 - 0xa8;
        iVar9 = iVar9 + -1;
      }
      uVar15 = uVar26 & 0x7fff;
      puVar11 = (uint *)uVar10;
      uVar2 = *(ushort *)puVar11;
      uVar17 = uVar2 & 0x7fff;
      uVar18 = uVar15 + uVar17;
      uVar26 = (uVar26 ^ uVar2) & 0x8000;
      if (((uVar15 < 0x7fff) && (uVar17 < 0x7fff)) && (uVar18 < 0xbffe)) {
        if (uVar18 < 0x3fc0) {
LAB_98013718:
          local_e8 = 0;
          uStack_e7 = 0;
          uStack_e6 = 0;
          goto LAB_980139c0;
        }
        if (((uVar15 == 0) &&
            (uVar18 = uVar18 + 1 & 0xffff,
            (CONCAT22(CONCAT11(local_e8,uStack_e7),uStack_e6) & 0x7fffffff) == 0)) &&
           ((uVar8 == 0 && (uVar25 == 0)))) {
          local_e8 = 0;
          uStack_e7 = 0;
        }
        else {
          if (((((uVar2 & 0x7fff) == 0) &&
               (uVar18 = uVar18 + 1 & 0xffff, (*puVar11 & 0x7fffffff) == 0)) && (puVar11[1] == 0))
             && (puVar11[2] == 0)) goto LAB_98013718;
          uVar8 = 0;
          lVar27 = uVar7 - 0xd2;
          lVar28 = 5;
          do {
            if (0 < (int)lVar28) {
              lVar13 = (uVar7 - 0xde) + (uVar8 & 0x7fffffff) * -2;
              lVar12 = lVar28;
              uVar25 = uVar10;
              do {
                uVar25 = uVar25 + 2;
                bVar1 = false;
                psVar5 = (short *)lVar27;
                uVar15 = (uint)*(ushort *)uVar25 * (uint)*(ushort *)lVar13;
                uVar17 = *(uint *)(psVar5 + 1) + uVar15;
                if ((uVar17 < *(uint *)(psVar5 + 1)) || (uVar17 < uVar15)) {
                  bVar1 = true;
                }
                *(uint *)(psVar5 + 1) = uVar17;
                if (bVar1) {
                  *psVar5 = *psVar5 + 1;
                }
                lVar13 = lVar13 + -2;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            lVar28 = lVar28 + -1;
            lVar27 = lVar27 + -2;
            uVar8 = uVar8 + 1;
          } while (0 < lVar28);
          uVar18 = uVar18 + 0xc002;
          while( true ) {
            uVar15 = uVar18 & 0xffff;
            if ((short)uVar18 < 1) break;
            uVar18 = uVar15 + 0xffff;
          }
          if ((short)uVar18 < 1) {
            uVar15 = uVar15 + 0xffff;
            sVar20 = (short)uVar15;
            while (uVar15 = uVar15 & 0xffff, sVar20 < 0) {
              uVar15 = uVar15 + 1;
              sVar20 = (short)uVar15;
            }
          }
          if (0x7ffe < uVar15) goto LAB_980139b0;
          local_e8 = (byte)(uVar26 >> 8) | (byte)(uVar15 >> 8);
          uStack_e6 = 0;
          uVar8 = 0;
          uVar25 = 0;
          uStack_e7 = (undefined1)uVar15;
        }
      }
      else {
LAB_980139b0:
        local_e8 = 0xff;
        uStack_e7 = 0xff;
        uStack_e6 = 0x8000;
        if (uVar26 == 0) {
          local_e8 = 0x7f;
          uStack_e7 = 0xff;
          uStack_e6 = 0x8000;
        }
LAB_980139c0:
        uVar8 = 0;
        uVar25 = 0;
      }
LAB_980139d0:
      uVar26 = (uint)CONCAT11(local_e8,uStack_e7);
    } while (iVar3 != 0);
  }
  local_a2 = (undefined2)((uint)iVar9 >> 0x10);
  uStack_a0 = (undefined2)iVar9;
  if (0x3ffe < uVar26) {
    uVar17 = uVar26 & 0x7fff;
    sVar14 = sVar14 + 1;
    uVar15 = uVar17 + 0x3ffb;
    if ((uVar17 < 0x7fff) && (uVar15 < 0xbffe)) {
      if (0x3fbf < uVar15) {
        if ((((uVar17 == 0) &&
             (uVar15 = 0x3ffc, (CONCAT22(CONCAT11(local_e8,uStack_e7),uStack_e6) & 0x7fffffff) == 0)
             ) && (uVar8 == 0)) && (uVar25 == 0)) {
          local_e8 = 0;
          uStack_e7 = 0;
        }
        else {
          uVar8 = 0;
          lVar28 = uVar7 - 0xc2;
          lVar23 = 5;
          do {
            if (0 < (int)lVar23) {
              lVar12 = uVar7 - 0xb6;
              lVar13 = (uVar7 - 0xde) + (uVar8 & 0x7fffffff) * -2;
              lVar27 = lVar23;
              do {
                bVar1 = false;
                psVar5 = (short *)lVar28;
                uVar17 = (uint)*(ushort *)lVar13 * (uint)*(ushort *)lVar12;
                uVar18 = *(uint *)(psVar5 + 1) + uVar17;
                if ((uVar18 < *(uint *)(psVar5 + 1)) || (uVar18 < uVar17)) {
                  bVar1 = true;
                }
                *(uint *)(psVar5 + 1) = uVar18;
                if (bVar1) {
                  *psVar5 = *psVar5 + 1;
                }
                lVar13 = lVar13 + -2;
                lVar12 = lVar12 + 2;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
            lVar23 = lVar23 + -1;
            lVar28 = lVar28 + -2;
            uVar8 = uVar8 + 1;
          } while (0 < lVar23);
          uVar15 = uVar15 + 0xc002;
          while( true ) {
            uVar17 = uVar15 & 0xffff;
            if ((short)uVar15 < 1) break;
            uVar15 = uVar17 + 0xffff;
          }
          if ((short)uVar15 < 1) {
            uVar17 = uVar17 + 0xffff;
            sVar20 = (short)uVar17;
            while (uVar17 = uVar17 & 0xffff, sVar20 < 0) {
              uVar17 = uVar17 + 1;
              sVar20 = (short)uVar17;
            }
          }
          if (0x7ffe < uVar17) goto LAB_98013ce0;
          local_e8 = (byte)((uVar26 & 0x8000) >> 8) | (byte)(uVar17 >> 8);
          uStack_e7 = (undefined1)uVar17;
          uStack_e6 = 0;
          uVar25 = 0;
          uVar8 = 0;
        }
        goto LAB_98013cf8;
      }
      local_e8 = 0;
      uStack_e7 = 0;
      uStack_e6 = 0;
    }
    else {
LAB_98013ce0:
      local_e8 = 0xff;
      uStack_e7 = 0xff;
      uStack_e6 = 0x8000;
      if ((uVar26 & 0x8000) == 0) {
        local_e8 = 0x7f;
        uStack_e7 = 0xff;
        uStack_e6 = 0x8000;
      }
    }
    uVar8 = 0;
    uVar25 = 0;
  }
LAB_98013cf8:
  *psVar4 = sVar14;
  if ((uStack0000002c & 1) == 0) {
    uVar24 = (ulonglong)uStack00000024;
LAB_98013d54:
    if (0x15 < (int)uVar24) {
      uVar24 = 0x15;
    }
    lVar23 = (ulonglong)CONCAT11(local_e8,uStack_e7) - 0x3ffe;
    lVar28 = 8;
    uVar10 = (ulonglong)uStack_e6;
    do {
      uVar29 = uVar25 >> 0x1f;
      uVar16 = uVar8 >> 0x1f;
      uVar25 = (uVar25 & 0x7fffffff) << 1;
      uVar8 = (uVar8 & 0x7fffffff) << 1 | uVar29;
      uVar10 = (uVar10 & 0x7fffffff) << 1 | uVar16;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    if ((int)lVar23 < 0) {
      for (uVar29 = -lVar23 & 0xff; uVar29 != 0; uVar29 = uVar29 - 1) {
        uVar16 = uVar10 & 1;
        uVar19 = uVar8 & 1;
        uVar10 = uVar10 >> 1;
        uVar8 = uVar8 >> 1 | uVar16 << 0x1f;
        uVar25 = uVar25 >> 1 | uVar19 << 0x1f;
      }
    }
    uVar29 = param_5 + 4;
    lVar23 = uVar24 + 1;
    uVar24 = uVar29;
    if (0 < lVar23) {
      while( true ) {
        FUN_9800d3f0(uVar7 - 0xa8,uVar7 - 0xe8,0xc);
        uVar19 = (uVar25 & 0x3fffffff) * 4;
        uVar16 = CONCAT22(uStack_a0,uStack_9e) + uVar19;
        uVar25 = ((uVar8 & 0x3fffffff) << 1 | uVar25 >> 0x1f) << 1 | (uVar25 & 0x7fffffff) >> 0x1e;
        uVar8 = ((uVar10 & 0x3fffffff) << 1 | uVar8 >> 0x1f) << 1 | (uVar8 & 0x7fffffff) >> 0x1e;
        if (((uVar16 & 0xffffffff) < uVar19) ||
           (uVar10 = uVar25, (uVar16 & 0xffffffff) < (ulonglong)CONCAT22(uStack_a0,uStack_9e))) {
          uVar10 = uVar25 + 1;
          bVar1 = false;
          if (((uVar10 & 0xffffffff) < uVar25) || ((uVar10 & 0xffffffff) == 0)) {
            bVar1 = true;
          }
          if (bVar1) {
            uVar8 = uVar8 + 1;
          }
        }
        uVar19 = CONCAT22(uStack_a4,local_a2) + uVar10;
        if (((uVar19 & 0xffffffff) < (uVar10 & 0xffffffff)) ||
           ((uVar19 & 0xffffffff) < (ulonglong)CONCAT22(uStack_a4,local_a2))) {
          uVar8 = uVar8 + 1;
        }
        lVar28 = (local_a8 + uVar8 & 0xffffffff) << 1;
        uVar8 = (uVar19 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f;
        uVar25 = (uVar16 & 0x7fffffff) << 1;
        local_e8 = (byte)((ulonglong)lVar28 >> 0x18);
        lVar23 = lVar23 + -1;
        *(char *)uVar24 = local_e8 + '0';
        uVar24 = uVar24 + 1;
        if (lVar23 == 0) break;
        uVar10 = (ulonglong)(uint3)((uint3)lVar28 | (uint3)(uVar19 >> 8) >> 0x17);
      }
    }
    uVar8 = uVar24 - 2;
    if (*(char *)((int)uVar24 + -1) < '5') {
      for (; ((uVar29 & 0xffffffff) <= (uVar8 & 0xffffffff) && (*(char *)uVar8 == '0'));
          uVar8 = uVar8 - 1) {
      }
      if ((uVar8 & 0xffffffff) < (uVar29 & 0xffffffff)) {
        *psVar4 = 0;
        uVar21 = 0x2d;
        if (uVar6 != 0x8000) {
          uVar21 = 0x20;
        }
        *(undefined1 *)uVar29 = 0x30;
        goto LAB_98013d38;
      }
    }
    else {
      for (; ((uVar29 & 0xffffffff) <= (uVar8 & 0xffffffff) && (*(char *)uVar8 == '9'));
          uVar8 = uVar8 - 1) {
        *(char *)uVar8 = '0';
      }
      if ((uVar8 & 0xffffffff) < (uVar29 & 0xffffffff)) {
        uVar8 = uVar8 + 1;
        *psVar4 = *psVar4 + 1;
      }
      *(char *)uVar8 = *(char *)uVar8 + '\x01';
    }
    cVar22 = ((char)uVar8 - (char)param_5) + -3;
    *(char *)((int)psVar4 + 3) = cVar22;
    *(undefined1 *)((int)psVar4 + cVar22 + 4) = 0;
  }
  else {
    uVar24 = (longlong)sVar14 + (ulonglong)uStack00000024;
    if (0 < (longlong)uVar24) goto LAB_98013d54;
    *psVar4 = 0;
    uVar21 = 0x2d;
    if (uVar6 != 0x8000) {
      uVar21 = 0x20;
    }
    *(undefined1 *)(psVar4 + 2) = 0x30;
LAB_98013d38:
    *(undefined1 *)(psVar4 + 1) = uVar21;
    *(undefined1 *)((int)psVar4 + 5) = 0;
    *(undefined1 *)((int)psVar4 + 3) = 1;
  }
LAB_98013f74:
  FUN_9800d270();
  return;
}


/* ==== FUN_98013fc0 @ 98013fc0 ==== */

void FUN_98013fc0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  int local_40;
  uint local_3c;
  uint local_38;
  
  pcVar3 = (char *)FUN_9800d254();
  puVar1 = (uint *)param_3;
  puVar1[2] = 0;
  sVar8 = 0x404e;
  puVar1[1] = 0;
  *puVar1 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      FUN_9800d3f0(ZEXT48(&stack0x00000000) - 0x40,param_3,0xc);
      uVar5 = puVar1[2];
      uVar6 = puVar1[1];
      bVar2 = false;
      uVar4 = *puVar1 << 1 | uVar6 >> 0x1f;
      puVar1[1] = uVar6 << 1 | uVar5 >> 0x1f;
      *puVar1 = uVar4;
      uVar7 = uVar5 * 4;
      uVar4 = uVar4 << 1 | (uint)(((ulonglong)uVar6 & 0x7fffffff) >> 0x1e);
      uVar6 = (uVar6 << 1 & 0x7fffffff | uVar5 >> 0x1f) << 1 | uVar5 >> 0x1e & 1;
      puVar1[2] = uVar5 << 1;
      uVar5 = uVar7 + local_38;
      puVar1[2] = uVar7;
      puVar1[1] = uVar6;
      *puVar1 = uVar4;
      if ((uVar5 < uVar7) || (uVar5 < local_38)) {
        bVar2 = true;
      }
      puVar1[2] = uVar5;
      if (bVar2) {
        uVar7 = uVar6 + 1;
        bVar2 = false;
        if ((uVar7 < uVar6) || (uVar7 == 0)) {
          bVar2 = true;
        }
        puVar1[1] = uVar7;
        if (bVar2) {
          *puVar1 = uVar4 + 1;
        }
      }
      bVar2 = false;
      uVar6 = puVar1[1] + local_3c;
      if ((uVar6 < puVar1[1]) || (uVar6 < local_3c)) {
        bVar2 = true;
      }
      puVar1[1] = uVar6;
      if (bVar2) {
        *puVar1 = *puVar1 + 1;
      }
      uVar7 = uVar5 * 2;
      puVar1[2] = uVar7;
      uVar4 = puVar1[1] << 1 | uVar5 >> 0x1f;
      uVar5 = (*puVar1 + local_40) * 2 | uVar6 >> 0x1f;
      puVar1[1] = uVar4;
      bVar2 = false;
      *puVar1 = uVar5;
      uVar6 = uVar7 + (int)*pcVar3;
      local_38 = (uint)*pcVar3;
      if ((uVar6 < uVar7) || (uVar6 < local_38)) {
        bVar2 = true;
      }
      puVar1[2] = uVar6;
      if (bVar2) {
        uVar6 = uVar4 + 1;
        bVar2 = false;
        if ((uVar6 < uVar4) || (uVar6 == 0)) {
          bVar2 = true;
        }
        puVar1[1] = uVar6;
        if (bVar2) {
          *puVar1 = uVar5 + 1;
        }
      }
      param_2 = param_2 - 1;
      pcVar3 = pcVar3 + 1;
    } while (param_2 != 0);
    if (*puVar1 != 0) goto LAB_9801423c;
  }
  do {
    uVar5 = puVar1[2];
    puVar1[2] = uVar5 << 0x10;
    uVar6 = puVar1[1] >> 0x10;
    *puVar1 = uVar6;
    sVar8 = sVar8 + -0x10;
    puVar1[1] = puVar1[1] << 0x10 | uVar5 >> 0x10;
  } while (uVar6 == 0);
LAB_9801423c:
  while ((*puVar1 & 0x8000) == 0) {
    uVar5 = puVar1[2];
    uVar6 = puVar1[1];
    puVar1[2] = uVar5 << 1;
    sVar8 = sVar8 + -1;
    puVar1[1] = uVar6 << 1 | uVar5 >> 0x1f;
    *puVar1 = *puVar1 << 1 | uVar6 >> 0x1f;
  }
  *(short *)puVar1 = sVar8;
  return;
}


/* ==== FUN_98014258 @ 98014258 ==== */

undefined8 FUN_98014258(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (pcRam91a015d8 != (code *)0x0) {
    (*pcRam91a015d8)();
  }
  puVar3 = (undefined4 *)0x91a1801c;
  uVar2 = 0;
  do {
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      uVar2 = (*(code *)*puVar3)();
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < (undefined4 *)0x91a18028);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined4 *)0x91a18010;
    do {
      pcVar1 = (code *)*puVar3;
      if ((pcVar1 != (code *)0x0) && (pcVar1 != (code *)0xffffffff)) {
        (*pcVar1)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < (undefined4 *)0x91a18018);
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_98014338 @ 98014338 ==== */

void FUN_98014338(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_91a18000;
  iVar1 = 0;
  do {
    if (iVar1 != 0) {
      return;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined4 *)0x91a1800c);
  return;
}


/* ==== FUN_980143b0 @ 980143b0 ==== */

void FUN_980143b0(void)

{
  if (iRam91a197b0 != 0) {
    FUN_980150b8();
    iRam91a197b0 = 0;
  }
  if (iRam91a197ac != 0) {
    FUN_980150b8();
    iRam91a197ac = 0;
  }
  return;
}


/* ==== FUN_98014410 @ 98014410 ==== */

bool FUN_98014410(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uStack_58;
  undefined4 auStack_50 [14];
  
  iVar3 = 0x100000;
  if (((*piRam91a0048c == 0) ||
      (piVar1 = (int *)func_0x98018158(*(undefined4 *)(*piRam91a0048c + 0x58),0x20401),
      piVar1 == (int *)0x0)) || (iVar3 = *piVar1, iVar3 != 0)) {
    puVar2 = &uStack_58;
    lVar5 = 6;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    auStack_50[0] = 0x30;
    if (iRam91a197b0 == 0) {
      iRam91a197b0 = FUN_98015f08(2,0,iVar3,0x1000,0,auStack_50);
    }
    func_0x98017e40();
    bVar4 = iRam91a197b0 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_98014500(undefined8 param_1)

{
  int iVar1;
  
  if (*_DAT_91a00490 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*_DAT_91a00490 + 0x18))(10,0);
  }
  if (((iVar1 == 0) && (_DAT_91a197b8 != (code *)0x0)) &&
     (iVar1 = (*_DAT_91a197b8)(param_1), iVar1 == -1)) {
    return 0xffffffffffffffff;
  }
  return 0;
}


/* ==== thunk_FUN_98007a68 @ 98014590 ==== */

undefined4 thunk_FUN_98007a68(void)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_98014598 @ 98014598 ==== */

undefined4 * FUN_98014598(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar2 + 0x4c) == 0) {
    iVar2 = *(int *)(iVar2 + 0x48);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 8) == *(int *)(iVar2 + 4))) {
      iVar2 = FUN_98018168();
      if (-1 < iVar2) {
        iVar2 = FUN_98018168();
        if (-1 < iVar2) {
          uRam00000000 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48);
          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
          uRam00000004 = 0x100000;
          uRam00000008 = 0x10000;
          iVar2 = 0;
          puVar6 = (undefined4 *)0x10;
          goto LAB_98014704;
        }
        FUN_98018198();
      }
    }
    else {
      puVar6 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar2);
      iVar1 = FUN_98018168();
      if (-1 < iVar1) {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 0x10000;
LAB_98014704:
        puVar3 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar2);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
        if (puVar6 < puVar3) {
          lVar5 = (ulonglong)((uint)((int)puVar3 + (-1 - (int)puVar6)) >> 4) + 1;
          puVar3 = puVar4;
          do {
            puVar4 = puVar6;
            *puVar3 = puVar4;
            lVar5 = lVar5 + -1;
            puVar3 = puVar4;
            puVar6 = puVar4 + 4;
          } while (lVar5 != 0);
        }
        *puVar4 = 0;
        iVar2 = *(int *)(param_1 + 0x18);
        goto LAB_9801474c;
      }
    }
    puVar6 = (undefined4 *)0x0;
  }
  else {
LAB_9801474c:
    puVar6 = *(undefined4 **)(iVar2 + 0x4c);
    *(undefined4 *)(iVar2 + 0x4c) = *puVar6;
  }
  return puVar6;
}


/* ==== FUN_98014770 @ 98014770 ==== */

void FUN_98014770(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = FUN_9800d258();
  uVar6 = (undefined4)param_2;
  uVar4 = (uint)param_3;
  puVar3 = *(undefined4 **)(iVar2 + 0x38);
  puVar1 = (undefined4 *)(iVar2 + 0x38);
  do {
    puVar7 = puVar3;
    if (puVar7 == (undefined4 *)0x0) {
LAB_98014814:
      puVar3 = FUN_98014598(iVar2);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[2] = uVar4;
        puVar3[1] = uVar6;
        *puVar3 = *puVar1;
        *puVar1 = puVar3;
        *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
        if (*(uint *)(iVar2 + 0x1c) <= uVar4) {
          *(uint *)(iVar2 + 0x1c) = uVar4;
        }
      }
      return;
    }
    uVar6 = (undefined4)param_2;
    uVar4 = (uint)param_3;
    uVar5 = (ulonglong)(uint)puVar7[1];
    if ((param_2 & 0xffffffff) < uVar5) {
      if ((param_2 + param_3 & 0xffffffff) == uVar5) {
        uVar4 = puVar7[2];
        puVar7[1] = uVar6;
        uVar6 = (undefined4)(param_3 + uVar4);
        puVar7[2] = uVar6;
        if ((param_3 + uVar4 & 0xffffffff) <= (ulonglong)*(uint *)(iVar2 + 0x1c)) {
          return;
        }
        *(undefined4 *)(iVar2 + 0x1c) = uVar6;
        return;
      }
      goto LAB_98014814;
    }
    if (((uint)puVar7[2] + uVar5 & 0xffffffff) == (param_2 & 0xffffffff)) {
      param_3 = (uint)puVar7[2] + param_3;
      *puVar1 = *puVar7;
      *puVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar2 + 0x18) + 0x4c) = puVar7;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -1;
      param_2 = uVar5;
      puVar7 = puVar1;
      if ((ulonglong)*(uint *)(iVar2 + 0x1c) < (param_3 & 0xffffffff)) {
        *(int *)(iVar2 + 0x1c) = (int)param_3;
      }
    }
    uVar6 = (undefined4)param_2;
    uVar4 = (uint)param_3;
    puVar3 = (undefined4 *)*puVar7;
    puVar1 = puVar7;
  } while( true );
}


/* ==== FUN_98014890 @ 98014890 ==== */

ushort * FUN_98014890(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort *in_stack_ffffffb0;
  
  iVar8 = FUN_9800d24c();
  iVar6 = (int)param_2;
  if ((ulonglong)*(uint *)(iVar6 + 0x38) == 0) {
    return in_stack_ffffffb0;
  }
  puVar9 = (uint *)param_3;
  uVar13 = param_2 + 0x38U;
  uVar14 = 0;
  uVar15 = (ulonglong)*(uint *)(iVar6 + 0x38);
  while ((puVar7 = (uint *)uVar15, puVar7[2] < *puVar9 ||
         (((param_4 & 0xffffffff) != 0 && ((ulonglong)puVar7[1] != (param_4 & 0xffffffff)))))) {
    uVar13 = uVar15;
    uVar14 = uVar15;
    uVar15 = (ulonglong)*puVar7;
    if ((ulonglong)*puVar7 == 0) {
      return in_stack_ffffffb0;
    }
  }
  puVar2 = (ushort *)puVar7[1];
  if (*(code **)(iVar8 + 0x584) == (code *)0x0) {
    iVar8 = FUN_98018168();
  }
  else {
    iVar8 = (**(code **)(iVar8 + 0x584))(iVar8,&stack0xffffffb0,param_3);
  }
  if (iVar8 < 0) {
    return in_stack_ffffffb0;
  }
  *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) - (uint)*(ushort *)puVar9;
  if (*(uint *)(iVar6 + 0x1c) == puVar7[2]) {
    *(undefined4 *)(iVar6 + 0x1c) = 0;
  }
  puVar12 = *(ushort **)(iVar6 + 0x40);
  if (((*(byte *)((int)puVar12 + 5) & 0x10) == 0) ||
     (puVar12 + (uint)*puVar12 * 8 != (ushort *)puVar7[1])) {
    if (uVar14 == 0) {
      puVar12 = *(ushort **)(iVar6 + 0x28);
    }
    else {
      puVar12 = (ushort *)(*(int *)((int)uVar14 + 8) + *(int *)((int)uVar14 + 4));
    }
    if ((*(byte *)((int)puVar12 + 5) & 0x10) == 0) {
      puVar11 = puVar12;
      do {
        puVar12 = puVar11 + (uint)*puVar11 * 8;
        if ((*(ushort **)(iVar6 + 0x2c) <= puVar12) || (*puVar12 == 0)) {
          bVar1 = puVar12 != puVar2;
          puVar12 = puVar11;
          if (bVar1) {
            return in_stack_ffffffb0;
          }
          break;
        }
        puVar11 = puVar12;
      } while ((*(byte *)((int)puVar12 + 5) & 0x10) == 0);
    }
  }
  *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xef;
  uVar3 = puVar7[2];
  puVar7[1] = puVar7[1] + *puVar9;
  uVar4 = *puVar9;
  puVar7[2] = (uint)((ulonglong)uVar3 - (ulonglong)uVar4);
  if ((ulonglong)uVar3 - (ulonglong)uVar4 == 0) {
    if (puVar7[1] == *(uint *)(iVar6 + 0x2c)) {
      *(undefined1 *)((int)puVar2 + 5) = 0x10;
      *(ushort **)(iVar6 + 0x40) = puVar2;
    }
    else {
      *(undefined1 *)((int)puVar2 + 5) = 0;
      *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 0x28);
    }
    *(uint *)uVar13 = *puVar7;
    *puVar7 = *(uint *)(*(int *)(iVar6 + 0x18) + 0x4c);
    *(uint **)(*(int *)(iVar6 + 0x18) + 0x4c) = puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + -1;
  }
  else {
    *(undefined1 *)((int)puVar2 + 5) = 0x10;
    *(ushort **)(iVar6 + 0x40) = puVar2;
  }
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar12 + 2);
  uVar3 = *puVar9;
  uVar10 = (ushort)(uVar3 >> 4);
  *puVar2 = uVar10;
  puVar2[1] = *puVar12;
  if ((*(byte *)((int)puVar2 + 5) & 0x10) == 0) {
    puVar2[(uVar3 >> 4 & 0xffff) * 8 + 1] = uVar10;
  }
  if (*(int *)(iVar6 + 0x1c) == 0) {
    for (puVar5 = (undefined4 *)*(undefined4 *)(param_2 + 0x38U); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      if (*(uint *)(iVar6 + 0x1c) <= (uint)puVar5[2]) {
        *(undefined4 *)(iVar6 + 0x1c) = puVar5[2];
      }
    }
  }
  return in_stack_ffffffb0;
}


/* ==== FUN_98014b20 @ 98014b20 ==== */

ulonglong FUN_98014b20(int param_1)

{
  ulonglong uVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = FUN_98018198();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_98014b78 @ 98014b78 ==== */

ulonglong FUN_98014b78(undefined8 param_1,ulonglong param_2,uint *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_4;
  iVar8 = FUN_9800d24c();
  puVar6 = (ushort *)param_2;
  uVar10 = param_2 + (ulonglong)puVar6[1] * -0x10;
  if ((((uVar10 & 0xffffffff) != (param_2 & 0xffffffff)) &&
      (puVar7 = (ushort *)uVar10, (*(byte *)((int)puVar7 + 5) & 1) == 0)) &&
     ((uint)*puVar7 + *param_3 < 0xf001)) {
    if ((uVar9 & 0xffffffff) != 0) {
      puVar3 = *(uint **)(puVar6 + 6);
      puVar4 = *(uint **)(puVar6 + 4);
      if ((*puVar3 == puVar4[1]) && ((ulonglong)*puVar3 == (param_2 + 8 & 0xffffffff))) {
        *puVar3 = (uint)puVar4;
        puVar4[1] = (uint)puVar3;
        if ((puVar4 == puVar3) && (uVar2 = *puVar6, uVar2 < 0x80)) {
          iVar5 = ((uVar2 >> 5) + 0x58) * 4;
          *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
        }
      }
      if ((*(byte *)((int)puVar6 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      uVar9 = 0;
      *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar6;
    }
    puVar3 = *(uint **)(puVar7 + 6);
    puVar4 = *(uint **)(puVar7 + 4);
    if ((*puVar3 == puVar4[1]) && ((ulonglong)*puVar3 == (uVar10 + 8 & 0xffffffff))) {
      *puVar3 = (uint)puVar4;
      puVar4[1] = (uint)puVar3;
      if ((puVar4 == puVar3) && (uVar2 = *puVar7, uVar2 < 0x80)) {
        iVar5 = ((uVar2 >> 5) + 0x58) * 4;
        *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
      }
    }
    if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
      thunk_FUN_980181c4();
    }
    bVar1 = *(byte *)((int)puVar6 + 5);
    *(byte *)((int)puVar7 + 5) = bVar1 & 0x10;
    if ((bVar1 & 0x10) != 0) {
      *(ushort **)(*(int *)((*(byte *)(puVar7 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar7;
    }
    *param_3 = (uint)*puVar7 + *param_3;
    *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar7;
    *puVar7 = (ushort)*param_3;
    param_2 = uVar10;
    if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
      puVar7[*param_3 * 8 + 1] = (ushort)*param_3;
    }
  }
  puVar6 = (ushort *)param_2;
  if ((*(byte *)((int)puVar6 + 5) & 0x10) == 0) {
    lVar11 = ((ulonglong)*param_3 & 0xfffffff) * 0x10 + param_2;
    puVar7 = (ushort *)lVar11;
    if (((*(byte *)((int)puVar7 + 5) & 1) == 0) && ((uint)*puVar7 + *param_3 < 0xf001)) {
      if ((uVar9 & 0xffffffff) != 0) {
        puVar3 = *(uint **)(puVar6 + 6);
        puVar4 = *(uint **)(puVar6 + 4);
        if ((*puVar3 == puVar4[1]) && ((ulonglong)*puVar3 == (param_2 + 8 & 0xffffffff))) {
          *puVar3 = (uint)puVar4;
          puVar4[1] = (uint)puVar3;
          if ((puVar4 == puVar3) && (uVar2 = *puVar6, uVar2 < 0x80)) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
          }
        }
        if ((*(byte *)((int)puVar6 + 5) & 4) != 0) {
          thunk_FUN_980181c4();
        }
        *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar6;
      }
      bVar1 = *(byte *)((int)puVar7 + 5);
      *(byte *)((int)puVar6 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(puVar6 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar6;
      }
      puVar3 = *(uint **)(puVar7 + 6);
      puVar4 = *(uint **)(puVar7 + 4);
      if ((*puVar3 == puVar4[1]) && ((ulonglong)*puVar3 == (lVar11 + 8U & 0xffffffff))) {
        *puVar3 = (uint)puVar4;
        puVar4[1] = (uint)puVar3;
        if ((puVar4 == puVar3) && (uVar2 = *puVar7, uVar2 < 0x80)) {
          iVar5 = ((uVar2 >> 5) + 0x58) * 4;
          *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      *param_3 = (uint)*puVar7 + *param_3;
      *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar7;
      *puVar6 = (ushort)*param_3;
      if ((*(byte *)((int)puVar6 + 5) & 0x10) == 0) {
        puVar6[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
  return param_2;
}


/* ==== FUN_98014f80 @ 98014f80 ==== */

void FUN_98014f80(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  ulonglong uVar12;
  uint *puVar13;
  
  lVar9 = FUN_9800d258();
  iVar4 = (int)param_2;
  bVar1 = *(byte *)(iVar4 + 4);
  iVar5 = (int)lVar9;
  uVar10 = (ulonglong)*(ushort *)(iVar4 + 2);
  bVar2 = *(byte *)(iVar4 + 5);
  iVar4 = *(int *)((bVar1 + 0x18) * 4 + iVar5);
  *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + (int)param_3;
  do {
    uVar11 = (undefined2)uVar10;
    puVar6 = (undefined2 *)param_2;
    if ((param_3 & 0xffffffff) == 0) {
      if ((bVar2 & 0x10) != 0) {
        return;
      }
      puVar6[1] = uVar11;
      return;
    }
    if ((param_3 & 0xffffffff) < 0xf001) {
      uVar10 = param_3 & 0xffff;
      *(byte *)((int)puVar6 + 5) = bVar2;
    }
    else {
      uVar10 = 0xfffffffffffff000;
      if ((param_3 & 0xffffffff) == 0xf001) {
        uVar10 = 0xffffffffffffeff0;
      }
      *(undefined1 *)((int)puVar6 + 5) = 0;
    }
    uVar7 = uVar10 & 0xffff;
    puVar6[1] = uVar11;
    *(byte *)(puVar6 + 2) = bVar1;
    *puVar6 = (short)uVar10;
    *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
    if (uVar7 < 0x80) {
      uVar12 = (uVar7 + 0x30) * 8 + lVar9;
      puVar13 = (uint *)uVar12;
      if ((ulonglong)*puVar13 == (uVar12 & 0xffffffff)) {
        iVar8 = ((int)(uVar7 >> 5) + 0x58) * 4;
        *(uint *)(iVar8 + iVar5) = 1 << ((uint)uVar7 & 0x1f) | *(uint *)(iVar8 + iVar5);
      }
    }
    else {
      for (puVar13 = *(uint **)(iVar5 + 0x180);
          ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar13) && (*(ushort *)(puVar13 + -2) < uVar7));
          puVar13 = (uint *)*puVar13) {
      }
    }
    puVar3 = (uint *)puVar13[1];
    *(uint **)(puVar6 + 4) = puVar13;
    param_3 = param_3 - uVar7;
    *(uint **)(puVar6 + 6) = puVar3;
    param_2 = (uVar10 & 0xffff) * 0x10 + param_2;
    *puVar3 = (uint)(puVar6 + 4);
    puVar13[1] = (uint)(puVar6 + 4);
  } while ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar4 + 0x2c));
  return;
}


/* ==== FUN_980150b8 @ 980150b8 ==== */

undefined8 FUN_980150b8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar5;
  ulonglong uVar4;
  uint uVar6;
  
  iVar5 = FUN_9800d258();
  if (iVar5 != 0) {
    if (((*(uint *)(iVar5 + 0x14) & 0x40000) != 0) &&
       (uVar4 = FUN_98018188(), (uint)*(byte *)(iVar5 + 0x17b) != (uint)uVar4)) {
      FUN_98018178();
    }
    puVar1 = *(undefined4 **)(iVar5 + 0x58);
    while ((undefined4 *)(iVar5 + 0x58) != puVar1) {
      puVar1 = (undefined4 *)*puVar1;
      FUN_98018198();
    }
    if ((*(uint *)(iVar5 + 0x14) & 1) == 0) {
      *(undefined4 *)(iVar5 + 0x580) = 0;
    }
    puVar1 = *(undefined4 **)(iVar5 + 0x48);
    *(undefined4 *)(iVar5 + 0x48) = 0;
    while (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
      FUN_98018198();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x590);
    uVar6 = 0x40;
    do {
      uVar6 = uVar6 + 0xff & 0xff;
      iVar3 = *(int *)((uVar6 + 0x18) * 4 + iVar5);
      if (iVar3 != 0) {
        FUN_98014b20(iVar3,uVar2);
      }
    } while (uVar6 != 0);
  }
  return 0;
}


/* ==== FUN_980151fc @ 980151fc ==== */

undefined8 FUN_980151fc(void)

{
  return 0;
}


/* ==== FUN_98015204 @ 98015204 ==== */

undefined8 FUN_98015204(void)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar12;
  uint *puVar11;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong unaff_r27;
  ushort *puVar13;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar14;
  uint uStack00000050;
  
  puVar13 = (ushort *)unaff_r27;
  uVar12 = *puVar13;
  bVar1 = *(byte *)((int)puVar13 + 5);
  uVar14 = (ulonglong)uVar12 * 0x10 + unaff_r27;
  iVar6 = (int)unaff_r30;
  if ((bVar1 & 0x10) == 0) {
    puVar7 = (ushort *)uVar14;
    bVar2 = *(byte *)((int)puVar7 + 5);
    if ((bVar2 & 1) != 0) {
      return 0;
    }
    uStack00000050 = (uint)*puVar7 + (uint)uVar12;
    if ((ulonglong)uStack00000050 < (unaff_r29 & 0xffffffff)) {
      return 0;
    }
    puVar11 = *(uint **)(puVar7 + 6);
    puVar3 = *(uint **)(puVar7 + 4);
    if ((*puVar11 == puVar3[1]) && ((ulonglong)*puVar11 == (uVar14 + 8 & 0xffffffff))) {
      *puVar11 = (uint)puVar3;
      puVar3[1] = (uint)puVar11;
      if ((puVar3 == puVar11) && (uVar12 = *puVar7, uVar12 < 0x80)) {
        iVar5 = ((uVar12 >> 5) + 0x58) * 4;
        *(uint *)(iVar5 + iVar6) = 1 << (uVar12 & 0x1f) ^ *(uint *)(iVar5 + iVar6);
      }
    }
    if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
      thunk_FUN_980181c4();
    }
    uVar14 = (ulonglong)uStack00000050;
    *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) - (uint)*puVar7;
  }
  else {
    uStack00000050 = (int)((unaff_r29 - uVar12 & 0xffffffff) << 4) + 0xffffU & 0xffff0000;
    uVar9 = unaff_r30;
    FUN_98014890(unaff_r30,(ulonglong)*(uint *)((*(byte *)(puVar13 + 2) + 0x18) * 4 + iVar6),
                 ZEXT48(&stack0x00000000) + 0x50,uVar14);
    if (uVar9 == 0) {
      return 0;
    }
    uStack00000050 = uStack00000050 >> 4;
    uVar9 = FUN_98014b78(unaff_r30,uVar9,&stack0x00000050,0);
    bVar2 = *(byte *)((int)uVar9 + 5);
    uVar14 = (ulonglong)*puVar13 + (ulonglong)uStack00000050;
    if ((uVar14 & 0xffffffff) < (unaff_r29 & 0xffffffff)) {
      FUN_98014f80(unaff_r30,uVar9,(ulonglong)uStack00000050);
      *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + uStack00000050;
      return 0;
    }
  }
  uVar14 = uVar14 - unaff_r29;
  uStack00000050 = (uint)uVar14;
  uVar9 = (ulonglong)*puVar13 * 0x10 - (ulonglong)*(byte *)(puVar13 + 3);
  if ((uVar14 & 0xffffffff) < 3) {
    unaff_r29 = uVar14 + unaff_r29;
    uVar14 = 0;
    uStack00000050 = 0;
  }
  if ((bVar1 & 2) != 0) {
    uVar12 = *puVar13;
    iVar5 = (int)((unaff_r29 & 0xffffffff) << 4);
    *(undefined8 *)((int)puVar13 + iVar5 + -0x10) = *(undefined8 *)(puVar13 + (uint)uVar12 * 8 + -8)
    ;
    *(undefined8 *)((int)puVar13 + iVar5 + -8) = *(undefined8 *)(puVar13 + (uint)uVar12 * 8 + -4);
    uVar14 = (ulonglong)uStack00000050;
  }
  uVar12 = (ushort)unaff_r29;
  if ((uVar14 & 0xffffffff) == 0) {
    *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) | bVar2 & 0x10;
    *(char *)(puVar13 + 3) = (char)((unaff_r29 & 0xffffffff) << 4) - (char)unaff_r23;
    *puVar13 = uVar12;
    if ((bVar2 & 0x10) == 0) {
      *(ushort *)((int)puVar13 + (int)((unaff_r29 & 0xffff) << 4) + 2) = uVar12;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(puVar13 + 2) + 0x18) * 4 + iVar6) + 0x40) = puVar13;
    }
    goto LAB_98015714;
  }
  lVar10 = (unaff_r29 & 0xfffffff) * 0x10;
  uVar14 = lVar10 + unaff_r27;
  *puVar13 = uVar12;
  *(char *)(puVar13 + 3) = (char)lVar10 - (char)unaff_r23;
  puVar7 = (ushort *)uVar14;
  puVar7[1] = uVar12;
  bVar1 = *(byte *)(puVar13 + 2);
  *(byte *)(puVar7 + 2) = bVar1;
  uVar12 = (ushort)uStack00000050;
  if ((bVar2 & 0x10) == 0) {
    lVar10 = ((ulonglong)uStack00000050 & 0xfffffff) * 0x10 + uVar14;
    puVar8 = (ushort *)lVar10;
    bVar1 = *(byte *)((int)puVar8 + 5);
    if ((bVar1 & 1) == 0) {
      puVar11 = *(uint **)(puVar8 + 6);
      puVar3 = *(uint **)(puVar8 + 4);
      if ((*puVar11 == puVar3[1]) && ((ulonglong)*puVar11 == (lVar10 + 8U & 0xffffffff))) {
        *puVar11 = (uint)puVar3;
        puVar3[1] = (uint)puVar11;
        if ((puVar3 == puVar11) && (uVar12 = *puVar8, uVar12 < 0x80)) {
          iVar5 = ((uVar12 >> 5) + 0x58) * 4;
          *(uint *)(iVar5 + iVar6) = 1 << (uVar12 & 0x1f) ^ *(uint *)(iVar5 + iVar6);
        }
      }
      if ((*(byte *)((int)puVar8 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) - (uint)*puVar8;
      uStack00000050 = *puVar8 + uStack00000050;
      *(byte *)((int)puVar7 + 5) = bVar1;
      if (0xf000 < (ulonglong)uStack00000050) {
        FUN_98014f80(unaff_r30,uVar14,(ulonglong)uStack00000050);
        goto LAB_98015714;
      }
      *puVar7 = (ushort)uStack00000050;
      if ((bVar1 & 0x10) == 0) {
        puVar7[uStack00000050 * 8 + 1] = (ushort)uStack00000050;
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar7 + 2) + 0x18) * 4 + iVar6) + 0x40) = puVar7;
      }
      *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) & 0xf8;
      uVar14 = (ulonglong)uStack00000050 & 0xffff;
      if (uVar14 < 0x80) goto LAB_9801567c;
      for (puVar11 = *(uint **)(iVar6 + 0x180);
          ((unaff_r30 + 0x180 & 0xffffffff) != ZEXT48(puVar11) &&
          (*(ushort *)(puVar11 + -2) < uVar14)); puVar11 = (uint *)*puVar11) {
      }
    }
    else {
      *(byte *)((int)puVar7 + 5) = bVar2 & 0xef;
      *puVar7 = uVar12;
      puVar7[uStack00000050 * 8 + 1] = uVar12;
      *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) & 0xf8;
      uVar14 = (ulonglong)uStack00000050 & 0xffff;
      if (uVar14 < 0x80) goto LAB_9801567c;
      for (puVar11 = *(uint **)(iVar6 + 0x180);
          ((unaff_r30 + 0x180 & 0xffffffff) != ZEXT48(puVar11) &&
          (*(ushort *)(puVar11 + -2) < uVar14)); puVar11 = (uint *)*puVar11) {
      }
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + iVar6) + 0x40) = puVar7;
    *(byte *)((int)puVar7 + 5) = bVar2;
    *(byte *)((int)puVar7 + 5) = bVar2 & 0xf8;
    *puVar7 = uVar12;
    uVar14 = (ulonglong)uStack00000050 & 0xffff;
    if (uVar14 < 0x80) {
LAB_9801567c:
      uVar14 = (uVar14 + 0x30) * 8 + unaff_r30;
      puVar11 = (uint *)uVar14;
      if ((ulonglong)*puVar11 == (uVar14 & 0xffffffff)) {
        iVar5 = ((*puVar7 >> 5) + 0x58) * 4;
        *(uint *)(iVar5 + iVar6) = 1 << (*puVar7 & 0x1f) | *(uint *)(iVar5 + iVar6);
      }
    }
    else {
      for (puVar11 = *(uint **)(iVar6 + 0x180);
          ((unaff_r30 + 0x180 & 0xffffffff) != ZEXT48(puVar11) &&
          (*(ushort *)(puVar11 + -2) < uVar14)); puVar11 = (uint *)*puVar11) {
      }
    }
  }
  puVar4 = (undefined4 *)puVar11[1];
  *(uint **)(puVar7 + 4) = puVar11;
  *(undefined4 **)(puVar7 + 6) = puVar4;
  *puVar4 = puVar7 + 4;
  puVar11[1] = (uint)(puVar7 + 4);
  *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + uStack00000050;
LAB_98015714:
  if (((unaff_r22 & 8) != 0) && ((uVar9 & 0xffffffff) < (unaff_r23 & 0xffffffff))) {
    FUN_9800d9e0((uint *)((int)puVar13 + (int)uVar9 + 0x10),0,unaff_r23 - uVar9);
  }
  *(byte *)((int)puVar13 + 5) =
       (byte)((unaff_r22 & 0xffffffff) >> 4) & 0xe0 | *(byte *)((int)puVar13 + 5) & 0x1f;
  return 1;
}


/* ==== FUN_98015750 @ 98015750 ==== */

longlong FUN_98015750(int param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (((*(uint *)(param_1 + 0x14) & 0x40000) != 0) &&
     (uVar1 = FUN_98018188(), (uint)*(byte *)(param_1 + 0x17b) != (uint)uVar1)) {
    FUN_98018178();
  }
  if ((*(byte *)(param_3 + -0xb) & 1) == 0) {
    lVar2 = -1;
  }
  else if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
    lVar2 = (ulonglong)*(ushort *)(param_3 + -0x10) * 0x10 - (ulonglong)*(byte *)(param_3 + -10);
  }
  else {
    lVar2 = ((ulonglong)*(uint *)(param_3 + -0x18) - (ulonglong)*(ushort *)(param_3 + -0x10)) +
            -0x30;
  }
  return lVar2;
}


/* ==== FUN_980157f8 @ 980157f8 ==== */

undefined8
FUN_980157f8(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,ulonglong param_5,
            ulonglong param_6,ulonglong param_7)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar8;
  undefined8 uVar7;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined2 uVar12;
  int iVar13;
  uint uStack0000003c;
  
  uVar6 = FUN_9800d240();
  iVar4 = (int)param_5;
  uVar10 = (int)param_7 - iVar4;
  uStack0000003c = (uint)param_6;
  uVar5 = param_2 + 0x57U & 0xfffffff0;
  iVar13 = ((int)uVar10 >> 0x10) + (uint)((int)uVar10 < 0 && (uVar10 & 0xffff) != 0);
  puVar8 = (undefined2 *)uVar6;
  if ((uVar6 & 0xffffffff) == (param_5 & 0xffffffff)) {
    uVar12 = *puVar8;
  }
  else {
    uVar12 = 0;
  }
  puVar2 = (undefined2 *)param_2;
  iVar1 = (int)uVar5;
  if ((uVar5 + 0x10 & 0xffffffff) < (param_6 & 0xffffffff)) {
LAB_980158b0:
    uVar10 = (int)param_7 - (int)param_6;
    puVar2[1] = uVar12;
    *puVar2 = (short)(iVar1 - (int)puVar2 >> 4);
    *(char *)(puVar2 + 2) = (char)param_3;
    *(undefined4 *)(puVar2 + 10) = param_4;
    uVar11 = (longlong)((int)uVar10 >> 0x10) +
             (ulonglong)((int)uVar10 < 0 && (uVar10 & 0xffff) != 0);
    *(undefined2 **)(puVar2 + 0xc) = puVar8;
    *(int *)(puVar2 + 0x10) = iVar4;
    *(int *)(puVar2 + 0x14) = iVar1;
    *(undefined1 *)((int)puVar2 + 5) = 1;
    *(undefined4 *)(puVar2 + 8) = 0xffeeffee;
    *(int *)(puVar2 + 0x16) = iVar13 * 0x10000 + iVar4;
    *(int *)(puVar2 + 0x12) = iVar13;
    *(int *)(puVar2 + 0x18) = (int)uVar11;
    if (uVar11 != 0) {
      FUN_98014770(param_2,param_6,(uVar11 & 0xffff) << 0x10);
      param_6 = (ulonglong)uStack0000003c;
    }
    *(undefined2 **)(puVar8 + ((param_3 & 0xff) + 0x18) * 2) = puVar2;
    uVar12 = *puVar2;
    *(undefined1 *)(iVar1 + 5) = 0x10;
    *(int *)(puVar2 + 0x20) = iVar1;
    *(char *)(iVar1 + 4) = (char)param_3;
    *(undefined2 *)(iVar1 + 2) = uVar12;
    FUN_98014f80(uVar6,uVar5,(longlong)((int)param_6 - iVar1 >> 4));
    uVar7 = 1;
  }
  else {
    if ((uVar5 + 0x10 & 0xffffffff) < (param_7 & 0xffffffff)) {
      iVar3 = iVar1 - uStack0000003c;
      iVar9 = FUN_98018168();
      if (-1 < iVar9) {
        param_6 = (ulonglong)(iVar3 + 0x10) + (ulonglong)uStack0000003c;
        uStack0000003c = (uint)param_6;
        goto LAB_980158b0;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}


/* ==== FUN_98015960 @ 98015960 ==== */

ulonglong FUN_98015960(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar7;
  longlong lVar6;
  uint uVar8;
  uint uVar9;
  uint local_40;
  uint local_38;
  uint local_34;
  
  uVar3 = FUN_9800d254();
  uVar5 = (param_2 + 0xffffU & 0xffffffff) >> 0x10;
  uVar8 = 0x40;
  local_38 = (uint)(uVar5 << 0x10);
  uVar9 = 0;
  do {
    iVar2 = (int)uVar3;
    uVar1 = *(uint *)((uVar9 + 0x18) * 4 + iVar2);
    if ((ulonglong)uVar1 == 0) {
      if (uVar8 == 0x40) {
        uVar8 = uVar9;
      }
    }
    else if (((uVar5 <= *(uint *)(uVar1 + 0x30)) && (local_38 <= *(uint *)(uVar1 + 0x1c))) &&
            (uVar4 = uVar3, FUN_98014890(uVar3,(ulonglong)uVar1,ZEXT48(&stack0x00000000) - 0x38,0),
            uVar4 != 0)) {
      local_38 = local_38 >> 4;
      uVar5 = FUN_98014b78(uVar3,uVar4,&local_38,0);
      FUN_98014f80(uVar3,uVar5,(ulonglong)local_38);
      return uVar5;
    }
    uVar9 = uVar9 + 1 & 0xff;
  } while (uVar9 < 0x40);
  if ((uVar8 != 0x40) && ((*(uint *)(iVar2 + 0x14) & 2) != 0)) {
    uVar5 = param_2 + 0x10000;
    uVar9 = (uint)uVar5;
    local_40 = uVar9;
    if ((uVar5 & 0xffffffff) <= (ulonglong)*(uint *)(iVar2 + 0x20)) {
      local_40 = *(uint *)(iVar2 + 0x20);
    }
    iVar7 = FUN_98018168();
    if (iVar7 < 0) {
      do {
        if ((ulonglong)local_40 == (uVar5 & 0xffffffff)) break;
        local_40 = local_40 >> 1;
        if ((ulonglong)local_40 < (uVar5 & 0xffffffff)) {
          local_40 = uVar9;
        }
        iVar7 = FUN_98018168();
      } while (iVar7 < 0);
      if (iVar7 < 0) {
        return 0;
      }
    }
    *(uint *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + local_40;
    local_34 = uVar9;
    if ((uVar5 & 0xffffffff) <= (ulonglong)*(uint *)(iVar2 + 0x24)) {
      local_34 = *(uint *)(iVar2 + 0x24);
    }
    lVar6 = FUN_98018168();
    if (-1 < lVar6) {
      uVar5 = FUN_980157f8(uVar3,0,uVar8,0,0,(ulonglong)local_34,(ulonglong)local_40);
      if ((uVar5 & 0xffffffff) == 0) {
        lVar6 = -0x3fffffe9;
      }
      if (-1 < (int)lVar6) {
        return (ulonglong)uRam00000028;
      }
    }
    FUN_98018198();
  }
  return 0;
}


/* ==== FUN_98015ba0 @ 98015ba0 ==== */

void FUN_98015ba0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uStack_7c;
  
  lVar8 = FUN_9800d234();
  iVar3 = (int)lVar8;
  if (*(int *)(iVar3 + 0x584) == 0) {
    puVar4 = (ushort *)param_2;
    uVar10 = param_2 + 0xffff & 0xffff0000;
    uStack_7c = (uint)uVar10;
    uVar16 = 0;
    uVar17 = (ulonglong)(uint)((int)(uStack_7c - (int)puVar4) >> 4) & 0xffff;
    uVar2 = *(uint *)((*(byte *)(puVar4 + 2) + 0x18) * 4 + iVar3);
    if (uVar17 == 1) {
      uVar10 = uVar10 + 0x10000;
      uVar17 = 0x1001;
      uStack_7c = (uint)uVar10;
    }
    else if (((ulonglong)puVar4[1] != 0) && (uVar10 == (param_2 & 0xffffffff))) {
      uVar16 = param_2 + (ulonglong)puVar4[1] * -0x10;
    }
    uVar15 = 0;
    uVar11 = (param_3 & 0xfffffff) * 0x10 + param_2;
    uVar12 = uVar11 & 0xffff0000;
    uVar13 = (int)uVar11 - (int)uVar12 >> 4;
    uVar18 = (ulonglong)uVar13 & 0xffff;
    if (uVar18 == 1) {
      uVar18 = 0x1001;
      uVar12 = uVar12 - 0x10000;
    }
    else if (((uVar13 & 0xffff) == 0) && ((*(byte *)((int)puVar4 + 5) & 0x10) == 0)) {
      uVar15 = uVar11;
    }
    iVar7 = (int)(uVar18 << 4);
    puVar6 = (ushort *)((int)uVar11 - iVar7);
    uVar13 = (int)uVar12 - (int)uVar10;
    if ((uVar12 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
      uVar13 = 0;
    }
    if ((uVar13 != 0) && (puVar9 = FUN_98014598(uVar2), puVar9 != (undefined4 *)0x0)) {
      uVar10 = FUN_98018198();
      *puVar9 = *(undefined4 *)(*(int *)(uVar2 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(uVar2 + 0x18) + 0x4c) = puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      if (-1 < (int)uVar10) {
        FUN_98014770((ulonglong)uVar2,(ulonglong)uStack_7c,(ulonglong)uVar13);
        *(uint *)(uVar2 + 0x30) = (uVar13 >> 0x10) + *(int *)(uVar2 + 0x30);
        if (uVar17 == 0) {
          if ((uVar16 & 0xffffffff) == 0) {
            if ((uStack_7c <= *(uint *)(uVar2 + 0x40)) &&
               (*(uint *)(uVar2 + 0x40) < uVar13 + uStack_7c)) {
              *(undefined4 *)(uVar2 + 0x40) = *(undefined4 *)(uVar2 + 0x28);
            }
          }
          else {
            iVar5 = (int)uVar16;
            *(byte *)(iVar5 + 5) = *(byte *)(iVar5 + 5) | 0x10;
            *(int *)(uVar2 + 0x40) = iVar5;
          }
        }
        else {
          *puVar4 = (ushort)uVar17;
          *(undefined1 *)((int)puVar4 + 5) = 0x10;
          *(int *)(iVar3 + 0x30) = (int)uVar17 + *(int *)(iVar3 + 0x30);
          *(ushort **)(uVar2 + 0x40) = puVar4;
          *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0xf8;
          if (uVar17 < 0x80) {
            uVar10 = (uVar17 + 0x30) * 8 + lVar8;
            puVar14 = (uint *)uVar10;
            if ((ulonglong)*puVar14 == (uVar10 & 0xffffffff)) {
              iVar5 = ((*puVar4 >> 5) + 0x58) * 4;
              *(uint *)(iVar5 + iVar3) = 1 << (*puVar4 & 0x1f) | *(uint *)(iVar5 + iVar3);
            }
          }
          else {
            for (puVar14 = *(uint **)(iVar3 + 0x180);
                ((lVar8 + 0x180U & 0xffffffff) != ZEXT48(puVar14) &&
                (*(ushort *)(puVar14 + -2) < uVar17)); puVar14 = (uint *)*puVar14) {
            }
          }
          puVar9 = (undefined4 *)puVar14[1];
          *(uint **)(puVar4 + 4) = puVar14;
          *(undefined4 **)(puVar4 + 6) = puVar9;
          *puVar9 = puVar4 + 4;
          puVar14[1] = (uint)(puVar4 + 4);
        }
        if (uVar18 != 0) {
          puVar6[1] = 0;
          uVar1 = *(undefined1 *)(uVar2 + 4);
          *(undefined1 *)((int)puVar6 + 5) = 0;
          *(undefined1 *)(puVar6 + 2) = uVar1;
          *puVar6 = (ushort)uVar18;
          *(ushort *)((int)puVar6 + iVar7 + 2) = (ushort)uVar18;
          *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
          if (uVar18 < 0x80) {
            uVar10 = (uVar18 + 0x30) * 8 + lVar8;
            puVar14 = (uint *)uVar10;
            if ((ulonglong)*puVar14 == (uVar10 & 0xffffffff)) {
              iVar7 = ((*puVar6 >> 5) + 0x58) * 4;
              *(uint *)(iVar7 + iVar3) = 1 << (*puVar6 & 0x1f) | *(uint *)(iVar7 + iVar3);
            }
          }
          else {
            for (puVar14 = *(uint **)(iVar3 + 0x180);
                ((lVar8 + 0x180U & 0xffffffff) != ZEXT48(puVar14) &&
                (*(ushort *)(puVar14 + -2) < uVar18)); puVar14 = (uint *)*puVar14) {
            }
          }
          puVar9 = (undefined4 *)puVar14[1];
          *(uint **)(puVar6 + 4) = puVar14;
          *(undefined4 **)(puVar6 + 6) = puVar9;
          *puVar9 = puVar6 + 4;
          puVar14[1] = (uint)(puVar6 + 4);
          *(int *)(iVar3 + 0x30) = (int)uVar18 + *(int *)(iVar3 + 0x30);
          return;
        }
        if ((uVar15 & 0xffffffff) == 0) {
          return;
        }
        *(undefined2 *)((int)uVar15 + 2) = 0;
        return;
      }
    }
  }
  FUN_98014f80(lVar8,param_2,param_3);
  return;
}


/* ==== FUN_98015bd0 @ 98015bd0 ==== */

void FUN_98015bd0(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong in_r10;
  ulonglong uVar9;
  int in_r11;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong unaff_r19;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_r24;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong unaff_r29;
  ulonglong unaff_r31;
  ushort *puVar17;
  uint uStack00000050;
  uint uStack00000054;
  
  uVar8 = in_r10 - 1U & 0xffff0000;
  uStack00000054 = (uint)uVar8;
  uVar15 = (ulonglong)(uint)((int)(uStack00000054 - param_2) >> 4) & 0xffff;
  uVar2 = *(uint *)((in_r11 + 0x18) * 4 + param_1);
  puVar17 = (ushort *)unaff_r31;
  uVar14 = unaff_r19;
  if (uVar15 == 1) {
    uVar8 = uVar8 + 0x10000;
    uVar15 = 0x1001;
    uStack00000054 = (uint)uVar8;
  }
  else if (((ulonglong)puVar17[1] != 0) && (uVar8 == (unaff_r31 & 0xffffffff))) {
    uVar14 = unaff_r31 + (ulonglong)puVar17[1] * -0x10;
  }
  uVar9 = (unaff_r24 & 0xfffffff) * 0x10 + unaff_r31;
  uVar10 = uVar9 & 0xffff0000;
  uVar12 = (int)uVar9 - (int)uVar10 >> 4;
  uVar16 = (ulonglong)uVar12 & 0xffff;
  uVar13 = unaff_r19;
  if (uVar16 == 1) {
    uVar16 = 0x1001;
    uVar10 = uVar10 - 0x10000;
  }
  else if (((uVar12 & 0xffff) == 0) && ((*(byte *)((int)puVar17 + 5) & 0x10) == 0)) {
    uVar13 = uVar9;
  }
  iVar6 = (int)(uVar16 << 4);
  puVar5 = (ushort *)((int)uVar9 - iVar6);
  uVar12 = (uint)unaff_r19;
  uStack00000050 = (int)uVar10 - (int)uVar8;
  if ((uVar10 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
    uStack00000050 = uVar12;
  }
  if ((uStack00000050 != 0) && (puVar7 = FUN_98014598(uVar2), puVar7 != (undefined4 *)0x0)) {
    uVar8 = FUN_98018198();
    *puVar7 = *(undefined4 *)(*(int *)(uVar2 + 0x18) + 0x4c);
    *(undefined4 **)(*(int *)(uVar2 + 0x18) + 0x4c) = puVar7;
    puVar7[1] = uVar12;
    puVar7[2] = uVar12;
    if (-1 < (int)uVar8) {
      FUN_98014770((ulonglong)uVar2,(ulonglong)uStack00000054,(ulonglong)uStack00000050);
      *(uint *)(uVar2 + 0x30) = (uStack00000050 >> 0x10) + *(int *)(uVar2 + 0x30);
      iVar3 = (int)unaff_r29;
      if (uVar15 == 0) {
        if ((uVar14 & 0xffffffff) == 0) {
          if ((uStack00000054 <= *(uint *)(uVar2 + 0x40)) &&
             (*(uint *)(uVar2 + 0x40) < uStack00000050 + uStack00000054)) {
            *(undefined4 *)(uVar2 + 0x40) = *(undefined4 *)(uVar2 + 0x28);
          }
        }
        else {
          iVar4 = (int)uVar14;
          *(byte *)(iVar4 + 5) = *(byte *)(iVar4 + 5) | 0x10;
          *(int *)(uVar2 + 0x40) = iVar4;
        }
      }
      else {
        *puVar17 = (ushort)uVar15;
        *(undefined1 *)((int)puVar17 + 5) = 0x10;
        *(int *)(iVar3 + 0x30) = (int)uVar15 + *(int *)(iVar3 + 0x30);
        *(ushort **)(uVar2 + 0x40) = puVar17;
        *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0xf8;
        if (uVar15 < 0x80) {
          uVar8 = (uVar15 + 0x30) * 8 + unaff_r29;
          puVar11 = (uint *)uVar8;
          if ((ulonglong)*puVar11 == (uVar8 & 0xffffffff)) {
            iVar4 = ((*puVar17 >> 5) + 0x58) * 4;
            *(uint *)(iVar4 + iVar3) = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar4 + iVar3);
          }
        }
        else {
          for (puVar11 = *(uint **)(iVar3 + 0x180);
              ((unaff_r29 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
              (*(ushort *)(puVar11 + -2) < uVar15)); puVar11 = (uint *)*puVar11) {
          }
        }
        puVar7 = (undefined4 *)puVar11[1];
        *(uint **)(puVar17 + 4) = puVar11;
        *(undefined4 **)(puVar17 + 6) = puVar7;
        *puVar7 = puVar17 + 4;
        puVar11[1] = (uint)(puVar17 + 4);
      }
      if (uVar16 != 0) {
        puVar5[1] = (ushort)unaff_r19;
        uVar1 = *(undefined1 *)(uVar2 + 4);
        *(char *)((int)puVar5 + 5) = (char)unaff_r19;
        *(undefined1 *)(puVar5 + 2) = uVar1;
        *puVar5 = (ushort)uVar16;
        *(ushort *)((int)puVar5 + iVar6 + 2) = (ushort)uVar16;
        *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
        if (uVar16 < 0x80) {
          uVar8 = (uVar16 + 0x30) * 8 + unaff_r29;
          puVar11 = (uint *)uVar8;
          if ((ulonglong)*puVar11 == (uVar8 & 0xffffffff)) {
            iVar6 = ((*puVar5 >> 5) + 0x58) * 4;
            *(uint *)(iVar6 + iVar3) = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar6 + iVar3);
          }
        }
        else {
          for (puVar11 = *(uint **)(iVar3 + 0x180);
              ((unaff_r29 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
              (*(ushort *)(puVar11 + -2) < uVar16)); puVar11 = (uint *)*puVar11) {
          }
        }
        puVar7 = (undefined4 *)puVar11[1];
        *(uint **)(puVar5 + 4) = puVar11;
        *(undefined4 **)(puVar5 + 6) = puVar7;
        *puVar7 = puVar5 + 4;
        puVar11[1] = (uint)(puVar5 + 4);
        *(int *)(iVar3 + 0x30) = (int)uVar16 + *(int *)(iVar3 + 0x30);
        return;
      }
      if ((uVar13 & 0xffffffff) == 0) {
        return;
      }
      *(ushort *)((int)uVar13 + 2) = (ushort)unaff_r19;
      return;
    }
  }
  FUN_98014f80(unaff_r29,unaff_r31,unaff_r24);
  return;
}


/* ==== FUN_98015f08 @ 98015f08 ==== */

/* WARNING: Removing unreachable block (ram,0x98016208) */

uint * FUN_98015f08(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                   ulonglong param_5,ulonglong param_6)

{
  bool bVar1;
  uint uVar3;
  ulonglong uVar2;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar10;
  ulonglong uVar9;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uStack00000024;
  uint uStack0000002c;
  uint *puStack_d0;
  uint *puStack_cc;
  uint *puStack_c0;
  uint uStack_b4;
  int iStack_b0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  
  uVar6 = ZEXT48(&stack0x00000000);
  uVar3 = FUN_9800d234();
  puStack_d0 = (uint *)0x0;
  lVar13 = 6;
  puVar5 = (uint *)param_2;
  lVar8 = uVar6 - 0xa8;
  do {
    lVar8 = lVar8 + 8;
    *(undefined8 *)lVar8 = 0;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if ((param_6 & 0xffffffff) != 0) {
    if (*(int *)param_6 == 0x30) {
      FUN_9800d920(uVar6 - 0xa0,param_6,0x30);
      param_3 = param_3 & 0xffffffff;
    }
    param_4 = param_4 & 0xffffffff;
  }
  if ((uRam91a197b4 & 0x200000) != 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (uStack_9c == 0) {
    uStack_9c = uRam91a192f8;
  }
  if (uStack_98 == 0) {
    uStack_98 = uRam91a192fc;
  }
  if (uStack_94 == 0) {
    uStack_94 = uRam91a19304;
  }
  if (uStack_90 == 0) {
    uStack_90 = uRam91a19300;
  }
  if (uStack_8c == 0) {
    uStack_8c = 0x7ffcffff;
  }
  if ((uStack_88 == 0) || (0xf0000 < uStack_88)) {
    uStack_88 = 0xf0000;
  }
  if ((param_4 & 0xffffffff) == 0) {
    uStack0000002c = 0x10000;
    if ((param_3 & 0xffffffff) == 0) {
      uStack00000024 = 0x400000;
    }
    else {
LAB_980160a8:
      uStack00000024 = (int)param_3 + 0xffffU & 0xffff0000;
    }
  }
  else {
    uStack0000002c = (int)param_4 + 0xffffU & 0xffff0000;
    if ((param_3 & 0xffffffff) != 0) goto LAB_980160a8;
    uStack00000024 = uStack0000002c + 0xfffff & 0xfff00000;
  }
  lVar8 = 0x598;
  bVar1 = (param_5 & 0xffffffff) == 0;
  if ((uVar3 & 1) == 0) {
    if (bVar1) {
      lVar8 = 0x5b4;
      param_5 = 0xffffffffffffffff;
    }
    else {
      uVar3 = uVar3 | 0x80000000;
    }
  }
  else if (!bVar1) {
    return (uint *)0x0;
  }
  if ((uVar3 & 0x80000) != 0) {
    uVar2 = FUN_98018188();
    uVar12 = 3;
    if ((int)uVar2 == 1) goto LAB_98016128;
  }
  uVar12 = 0;
LAB_98016128:
  if ((param_2 & 0xffffffff) == 0) {
    if (uStack_7c != 0) {
      return (uint *)0x0;
    }
    iVar4 = FUN_98018168();
    if (iVar4 < 0) {
      return (uint *)0x0;
    }
    uVar11 = 0;
    if (uStack0000002c == 0) {
      uStack0000002c = 0x10000;
    }
    uVar6 = 0;
    puStack_cc = (uint *)0x0;
    uVar2 = uVar6;
  }
  else {
    if (uStack_7c == 0) {
      uVar2 = FUN_980181c4();
      if ((int)uVar2 < 0) {
        return (uint *)0x0;
      }
      uVar2 = ZEXT48(puStack_c0);
      if (uVar2 != (param_2 & 0xffffffff)) {
        return (uint *)0x0;
      }
      if (iStack_b0 == 0x10000) {
        return (uint *)0x0;
      }
      puStack_cc = puStack_c0;
      if (iStack_b0 == 0x1000) {
        FUN_9800d9e0(puStack_c0,0,0x10000);
        uVar2 = (ulonglong)uStack_b4 + ZEXT48(puStack_c0);
        uStack0000002c = uStack_b4;
        func_0x980181c8(uVar2,uVar6 - 0xc0,uVar12);
        uStack00000024 = uStack_b4;
      }
      else {
        uStack0000002c = 0x10000;
      }
    }
    else {
      uVar2 = (ulonglong)uStack_84;
      if (uVar2 == 0) {
        return (uint *)0x0;
      }
      if (uStack_80 == 0) {
        return (uint *)0x0;
      }
      if (uStack_80 < uVar2) {
        return (uint *)0x0;
      }
      if ((uVar3 & 2) != 0) {
        return (uint *)0x0;
      }
      uStack00000024 = uStack_80;
      uVar2 = uVar2 + param_2;
      FUN_9800d9e0(puVar5,0,0x10000);
      puStack_cc = puVar5;
    }
    uVar11 = 1;
    uVar6 = param_2;
    puStack_d0 = puVar5;
  }
  if (ZEXT48(puStack_cc) == (uVar2 & 0xffffffff)) {
    iVar4 = FUN_98018168();
    if (iVar4 < 0) {
      if ((param_2 & 0xffffffff) != 0) {
        return (uint *)0x0;
      }
      FUN_98018198();
      return (uint *)0x0;
    }
    uVar6 = ZEXT48(puStack_d0);
    uVar2 = uVar2 + uStack0000002c;
  }
  lVar13 = lVar8 + 0x80;
  lVar14 = 8;
  uVar7 = uVar6 + 0x4c;
  uVar6 = uVar6 + 0x59f & 0xfffffff8;
  do {
    puVar10 = (undefined4 *)uVar6;
    *(undefined4 *)uVar7 = puVar10;
    uVar9 = uVar6 + 0x10;
    lVar14 = lVar14 + -1;
    uVar7 = uVar6;
    uVar6 = uVar9;
  } while (lVar14 != 0);
  *puVar10 = 0;
  if ((uRam91a197b4 & 0x800) != 0) {
    lVar13 = lVar8 + 0x68c;
    puStack_d0[0x5f] = (uint)(puVar10 + 4);
    uVar9 = (ulonglong)puStack_d0[0x5f] + 0x60c;
  }
  *(short *)puStack_d0 = (short)(lVar13 + 0xfU >> 4);
  *(undefined1 *)((int)puStack_d0 + 5) = 1;
  puStack_d0[4] = 0xeeffeeff;
  puStack_d0[5] = uVar3;
  puStack_d0[6] = uVar3 & 0x6001007d;
  *(undefined2 *)(puStack_d0 + 0x5c) = 0xffff;
  *(short *)((int)puStack_d0 + 0x3a) = (short)uVar9 - (short)puStack_d0;
  puStack_d0[0xf] = 0;
  uVar6 = FUN_98018188();
  *(char *)((int)puStack_d0 + 0x17b) = (char)uVar6;
  lVar8 = 0x80;
  puStack_d0[0x164] = uVar12;
  puVar5 = puStack_d0 + 0x60;
  do {
    *puVar5 = (uint)puVar5;
    puVar5[1] = (uint)puVar5;
    puVar5 = puVar5 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puStack_d0[0x16] = (uint)(puStack_d0 + 0x16);
  puStack_d0[0x17] = (uint)(puStack_d0 + 0x16);
  if ((int)param_5 == -1) {
    func_0x980181b8(uVar9);
    param_5 = uVar9;
  }
  puStack_d0[0x160] = (uint)param_5;
  uVar6 = FUN_980157f8(ZEXT48(puStack_d0),(lVar13 + 0xfU & 0xfffffff0) + ZEXT48(puStack_d0),0,uVar11
                       ,ZEXT48(puStack_cc),uVar2,ZEXT48(puStack_cc) + (ulonglong)uStack00000024);
  if ((uVar6 & 0xffffffff) == 0) {
    return (uint *)0x0;
  }
  *(undefined2 *)(puStack_d0 + 0xe) = 0;
  puStack_d0[8] = uStack_9c;
  puStack_d0[9] = uStack_98;
  puStack_d0[10] = uStack_94 >> 4;
  puStack_d0[0xb] = uStack_90 >> 4;
  puStack_d0[0xd] = uStack_8c;
  puStack_d0[7] = uStack_88 + 0xf >> 4;
  puStack_d0[0x161] = uStack_7c;
  puStack_d0[0x14] = 0x1f;
  puStack_d0[0x15] = 0xfffffff0;
  return puStack_d0;
}


/* ==== FUN_980164d8 @ 980164d8 ==== */

uint * FUN_980164d8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar14;
  ulonglong uVar13;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint *local_dc;
  
  lVar9 = FUN_9800d240();
  iVar3 = (int)lVar9;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar10 = FUN_98018188(), (uint)*(byte *)(iVar3 + 0x17b) != (uint)uVar10)) {
    FUN_98018178();
  }
  uVar16 = (ulonglong)*(uint *)(iVar3 + 0x18);
  uVar10 = param_3;
  if ((param_3 & 0xffffffff) == 0) {
    uVar10 = 1;
  }
  uVar7 = uVar10 + 0x1f & 0xfffffff0;
  uVar10 = uVar7 >> 4;
  bVar8 = ((uVar16 | param_2 & 0xffffffff) & 1) == 0;
  if (bVar8) {
    FUN_98018138();
  }
  if (0x7f < uVar10) {
    if (*(uint *)(iVar3 + 0x1c) < uVar10) {
      if ((*(uint *)(iVar3 + 0x14) & 2) != 0) {
        iVar21 = (int)uVar7 + 0x20;
        iVar20 = FUN_98018168();
        if (-1 < iVar20) {
          FUN_9800d9e0((uint *)0x0,0,0x30);
          iRam00000000 = iVar3 + 0x58;
          sRam00000020 = ((short)iVar21 - (short)param_3) + -0x30;
          uRam00000025 = 0xb;
          puRam00000004 = *(undefined4 **)(iVar3 + 0x5c);
          iRam00000018 = iVar21;
          iRam0000001c = iVar21;
          *puRam00000004 = 0;
          local_dc = (uint *)0x30;
          *(undefined4 *)(iVar3 + 0x5c) = 0;
          goto LAB_9800d290;
        }
      }
    }
    else {
LAB_98016790:
      uVar13 = lVar9 + 0x180;
      if (((uVar13 & 0xffffffff) != (ulonglong)*(uint *)(iVar3 + 0x184)) &&
         (uVar10 <= *(ushort *)(*(uint *)(iVar3 + 0x184) - 8))) {
        for (puVar11 = (uint *)*(uint *)uVar13; uVar18 = ZEXT48(puVar11),
            (uVar13 & 0xffffffff) != uVar18; puVar11 = (uint *)*puVar11) {
          uVar17 = uVar18 - 8;
          if (uVar10 <= *(ushort *)uVar17) {
            puVar12 = (uint *)puVar11[1];
            uVar14 = *puVar11;
            if ((*puVar12 == *(uint *)(uVar14 + 4)) && (*puVar12 == uVar18)) {
              *puVar12 = uVar14;
              *(uint **)(uVar14 + 4) = puVar12;
            }
            goto LAB_98016864;
          }
        }
      }
      uVar17 = FUN_98015960(lVar9,uVar7);
      if ((uVar17 & 0xffffffff) != 0) {
        puVar11 = *(uint **)((int)uVar17 + 0xc);
        uVar14 = *(uint *)((int)uVar17 + 8);
        if ((*puVar11 == *(uint *)(uVar14 + 4)) &&
           ((ulonglong)*puVar11 == (uVar17 + 8 & 0xffffffff))) {
          *puVar11 = uVar14;
          *(uint **)(uVar14 + 4) = puVar11;
        }
        goto LAB_98016864;
      }
    }
    if (((uVar16 | param_2 & 0xffffffff) & 4) != 0) {
      FUN_980181d8();
    }
    local_dc = (uint *)0x0;
    goto LAB_9800d290;
  }
  uVar17 = (uVar10 + 0x30) * 8 + lVar9;
  puVar11 = (uint *)uVar17;
  if ((ulonglong)*puVar11 == (uVar17 & 0xffffffff)) {
    uVar17 = uVar7 >> 9;
    puVar11 = (uint *)(((int)uVar17 + 0x58) * 4 + iVar3);
    puVar12 = puVar11 + 1;
    uVar14 = *puVar11 & ~((1 << ((uint)uVar10 & 0x1f)) - 1U);
    if (uVar17 == 0) {
      if (uVar14 == 0) {
        uVar14 = *puVar12;
        puVar12 = puVar11 + 2;
        goto LAB_980166b8;
      }
      iVar20 = iVar3 + 0x180;
    }
    else if (uVar17 == 1) {
LAB_980166b8:
      if (uVar14 == 0) {
        uVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        goto LAB_980166d8;
      }
      iVar20 = iVar3 + 0x280;
    }
    else {
      if (uVar17 < 3) {
LAB_980166d8:
        if (uVar14 != 0) {
          iVar20 = iVar3 + 0x380;
          goto LAB_98016704;
        }
        uVar14 = *puVar12;
      }
      else if (uVar17 != 3) goto LAB_98016790;
      if (uVar14 == 0) goto LAB_98016790;
      iVar20 = iVar3 + 0x480;
    }
LAB_98016704:
    puVar2 = *(undefined4 **)
              ((int)((0x1fU - LZCOUNT(uVar14 & ~(uVar14 - 1)) & 0xffffffff) << 3) + iVar20 + 4);
    uVar17 = ZEXT48(puVar2) - 8;
    puVar11 = (uint *)puVar2[1];
    puVar12 = (uint *)*puVar2;
    if ((*puVar11 == puVar12[1]) && ((ulonglong)*puVar11 == ZEXT48(puVar2))) {
      *puVar11 = (uint)puVar12;
      puVar12[1] = (uint)puVar11;
      if (puVar12 == puVar11) {
        iVar20 = ((*(ushort *)uVar17 >> 5) + 0x58) * 4;
        *(uint *)(iVar20 + iVar3) = *(uint *)(iVar20 + iVar3) ^ 1 << (*(ushort *)uVar17 & 0x1f);
      }
    }
LAB_98016864:
    puVar4 = (ushort *)uVar17;
    bVar15 = *(byte *)((int)puVar4 + 5);
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar4;
    *(undefined1 *)((int)puVar4 + 5) = 1;
    uVar13 = *puVar4 - uVar10;
    *puVar4 = (ushort)uVar10;
    *(char *)(puVar4 + 3) = (char)uVar7 - (char)param_3;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    if (uVar13 != 0) {
      if ((uVar13 & 0xffffffff) == 1) {
        *puVar4 = *puVar4 + 1;
        *(char *)(puVar4 + 3) = *(char *)(puVar4 + 3) + '\x10';
      }
      else {
        uVar18 = uVar10 * 0x10 + uVar17;
        uVar7 = uVar13 & 0xffff;
        puVar5 = (ushort *)uVar18;
        *(byte *)((int)puVar5 + 5) = bVar15;
        puVar5[1] = (ushort)uVar10;
        *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar4 + 2);
        *puVar5 = (ushort)uVar13;
        if ((bVar15 & 0x10) == 0) {
          lVar19 = (uVar13 & 0xfffffff) * 0x10 + uVar18;
          puVar6 = (ushort *)lVar19;
          if ((*(byte *)((int)puVar6 + 5) & 1) != 0) {
            puVar6[1] = (ushort)uVar13;
            if (uVar7 < 0x80) {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              uVar10 = (uVar7 + 0x30) * 8 + lVar9;
              puVar11 = (uint *)uVar10;
              if ((ulonglong)*puVar11 == (uVar10 & 0xffffffff)) {
                iVar20 = ((*puVar5 >> 5) + 0x58) * 4;
                uVar14 = *(uint *)(iVar20 + iVar3) | 1 << (*puVar5 & 0x1f);
                goto LAB_980169f8;
              }
            }
            else {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              for (puVar11 = *(uint **)(iVar3 + 0x180);
                  ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                  (*(ushort *)(puVar11 + -2) < uVar7)); puVar11 = (uint *)*puVar11) {
              }
            }
            goto LAB_980169fc;
          }
          *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar6 + 5);
          puVar11 = *(uint **)(puVar6 + 4);
          puVar12 = *(uint **)(puVar6 + 6);
          if ((*puVar12 == puVar11[1]) && ((ulonglong)*puVar12 == (lVar19 + 8U & 0xffffffff))) {
            *puVar12 = (uint)puVar11;
            puVar11[1] = (uint)puVar12;
            if ((puVar11 == puVar12) && (uVar1 = *puVar6, uVar1 < 0x80)) {
              iVar20 = ((uVar1 >> 5) + 0x58) * 4;
              *(uint *)(iVar20 + iVar3) = 1 << (uVar1 & 0x1f) ^ *(uint *)(iVar20 + iVar3);
            }
          }
          *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar6;
          uVar13 = *puVar6 + uVar13;
          if ((uVar13 & 0xffffffff) < 0xf001) {
            uVar10 = uVar13 & 0xffff;
            *puVar5 = (ushort)uVar13;
            if ((*(byte *)((int)puVar5 + 5) & 0x10) == 0) {
              *(ushort *)((int)puVar5 + (int)((uVar13 & 0xffffffff) << 4) + 2) = (ushort)uVar13;
            }
            if (uVar10 < 0x80) {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              uVar10 = (uVar10 + 0x30) * 8 + lVar9;
              puVar11 = (uint *)uVar10;
              if ((ulonglong)*puVar11 == (uVar10 & 0xffffffff)) {
                iVar20 = ((*puVar5 >> 5) + 0x58) * 4;
                *(uint *)(iVar20 + iVar3) = *(uint *)(iVar20 + iVar3) | 1 << (*puVar5 & 0x1f);
              }
            }
            else {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              for (puVar11 = *(uint **)(iVar3 + 0x180);
                  ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                  (*(ushort *)(puVar11 + -2) < uVar10)); puVar11 = (uint *)*puVar11) {
              }
            }
            puVar2 = (undefined4 *)puVar11[1];
            *(uint **)(puVar5 + 4) = puVar11;
            *(undefined4 **)(puVar5 + 6) = puVar2;
            *puVar2 = puVar5 + 4;
            puVar11[1] = (uint)(puVar5 + 4);
            iVar20 = (int)uVar13 + *(int *)(iVar3 + 0x30);
            goto LAB_98016bbc;
          }
          FUN_98014f80(lVar9,uVar18,uVar13);
        }
        else {
          if (uVar7 < 0x80) {
            uVar10 = (uVar7 + 0x30) * 8 + lVar9;
            *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
            puVar11 = (uint *)uVar10;
            if ((ulonglong)*puVar11 == (uVar10 & 0xffffffff)) {
              iVar20 = ((*puVar5 >> 5) + 0x58) * 4;
              uVar14 = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar20 + iVar3);
LAB_980169f8:
              *(uint *)(iVar20 + iVar3) = uVar14;
            }
          }
          else {
            *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
            for (puVar11 = *(uint **)(iVar3 + 0x180);
                ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                (*(ushort *)(puVar11 + -2) < uVar7)); puVar11 = (uint *)*puVar11) {
            }
          }
LAB_980169fc:
          puVar2 = (undefined4 *)puVar11[1];
          *(uint **)(puVar5 + 4) = puVar11;
          *(undefined4 **)(puVar5 + 6) = puVar2;
          *puVar2 = puVar5 + 4;
          puVar11[1] = (uint)(puVar5 + 4);
          iVar20 = (int)uVar13 + *(int *)(iVar3 + 0x30);
LAB_98016bbc:
          *(int *)(iVar3 + 0x30) = iVar20;
        }
        bVar15 = 0;
        if ((*(byte *)((int)puVar5 + 5) & 0x10) != 0) {
          *(ushort **)(*(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar5;
        }
      }
    }
    if ((bVar15 & 0x10) != 0) {
      *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) | 0x10;
    }
  }
  else {
    puVar2 = (undefined4 *)puVar11[1];
    uVar17 = ZEXT48(puVar2) - 8;
    bVar15 = *(byte *)((int)puVar2 - 3);
    puVar11 = (uint *)puVar2[1];
    puVar12 = (uint *)*puVar2;
    if ((*puVar11 == puVar12[1]) && ((ulonglong)*puVar11 == ZEXT48(puVar2))) {
      *puVar11 = (uint)puVar12;
      puVar12[1] = (uint)puVar11;
      if (puVar12 == puVar11) {
        iVar20 = ((*(ushort *)uVar17 >> 5) + 0x58) * 4;
        *(uint *)(iVar20 + iVar3) = *(uint *)(iVar20 + iVar3) ^ 1 << (*(ushort *)uVar17 & 0x1f);
      }
    }
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)uVar10;
    *(byte *)((int)puVar2 - 3) = bVar15 & 0x10 | 1;
    *(char *)((int)puVar2 - 2) = (char)uVar7 - (char)param_3;
    *(undefined1 *)((int)puVar2 - 1) = 0;
  }
  local_dc = (uint *)((int)uVar17 + 0x10);
  if (bVar8) {
    FUN_98018118();
  }
  if (((uVar16 | param_2 & 0xffffffff) & 8) != 0) {
    FUN_9800d9e0(local_dc,0,param_3);
  }
LAB_9800d290:
  FUN_98016d80();
  return local_dc;
}


/* ==== FUN_98016d80 @ 98016d80 ==== */

void FUN_98016d80(void)

{
  int unaff_r22;
  
  if (unaff_r22 != 0) {
    FUN_98018118();
  }
  return;
}


/* ==== FUN_98016dd0 @ 98016dd0 ==== */

uint FUN_98016dd0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint local_50 [4];
  int iStack_40;
  int local_3c;
  
  lVar7 = FUN_9800d250();
  iVar3 = (int)lVar7;
  local_50[1] = 0;
  local_50[2] = 1;
  local_3c = iVar3;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar8 = FUN_98018188(), (uint)*(byte *)(iVar3 + 0x17b) != (uint)uVar8)) {
    FUN_98018178();
  }
  if ((param_3 & 0xffffffff) == 0) {
    return 1;
  }
  bVar6 = (((ulonglong)*(uint *)(iVar3 + 0x18) | param_2 & 0xffffffff) & 1) == 0;
  if (bVar6) {
    FUN_98018138();
    local_50[1] = 1;
  }
  iVar2 = (int)param_3;
  if ((*(byte *)(iVar2 + -0xb) & 8) != 0) {
    iStack_40 = iVar2 + -0x30;
    iVar3 = *(int *)(iVar2 + -0x30);
    piVar4 = *(int **)(iVar2 + -0x2c);
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    if (bVar6) {
      FUN_98018118();
      local_50[1] = 0;
    }
    local_50[0] = 0;
    uVar8 = FUN_98018198();
    local_50[2] = -((int)uVar8 >> 0x1f) - 1U & 1;
    goto LAB_98017034;
  }
  local_50[0] = (uint)*(ushort *)(param_3 - 0x10);
  uVar8 = FUN_98014b78(lVar7,param_3 - 0x10,local_50,0);
  uVar9 = (ulonglong)local_50[0];
  puVar5 = (ushort *)uVar8;
  if (uVar9 < 0x80) {
    *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
    uVar8 = (((ulonglong)local_50[0] & 0xffff) + 0x30) * 8 + lVar7;
    puVar10 = (uint *)uVar8;
    if ((ulonglong)*puVar10 == (uVar8 & 0xffffffff)) {
      iVar2 = ((*puVar5 >> 5) + 0x58) * 4;
      *(uint *)(iVar2 + iVar3) = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar2 + iVar3);
    }
    puVar1 = (undefined4 *)puVar10[1];
    *(uint **)(puVar5 + 4) = puVar10;
    *(undefined4 **)(puVar5 + 6) = puVar1;
    *puVar1 = puVar5 + 4;
    puVar10[1] = (uint)(puVar5 + 4);
    iVar2 = *(int *)(iVar3 + 0x30);
  }
  else {
    if ((*(uint *)(iVar3 + 0x28) <= uVar9) &&
       ((ulonglong)*(uint *)(iVar3 + 0x2c) <= (*(uint *)(iVar3 + 0x30) + uVar9 & 0xffffffff))) {
      FUN_98015ba0(lVar7,uVar8,uVar9);
      goto LAB_98017034;
    }
    if (0xf000 < uVar9) {
      FUN_98014f80(lVar7,uVar8,uVar9);
      goto LAB_98017034;
    }
    *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
    for (local_50[3] = *(uint *)(iVar3 + 0x180);
        ((lVar7 + 0x180U & 0xffffffff) != (ulonglong)local_50[3] &&
        (iStack_40 = local_50[3] + -8, (uint)*(ushort *)(local_50[3] + -8) < (local_50[0] & 0xffff))
        ); local_50[3] = *(uint *)local_50[3]) {
    }
    puVar1 = *(undefined4 **)(local_50[3] + 4);
    *(uint *)(puVar5 + 4) = local_50[3];
    *(undefined4 **)(puVar5 + 6) = puVar1;
    *puVar1 = puVar5 + 4;
    *(ushort **)(local_50[3] + 4) = puVar5 + 4;
    iVar2 = *(int *)(iVar3 + 0x30);
  }
  *(uint *)(iVar3 + 0x30) = iVar2 + local_50[0];
LAB_98017034:
  FUN_98017074();
  return local_50[2];
}


/* ==== FUN_98016ed8 @ 98016ed8 ==== */

undefined4 FUN_98016ed8(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint in_r9;
  int in_r10;
  int in_r11;
  int unaff_r27;
  int unaff_r30;
  int unaff_r31;
  
  iVar2 = (in_r10 + 0x58) * 4;
  *(uint *)(iVar2 + unaff_r30) = unaff_r27 << (in_r9 & 0x1f) | *(uint *)(iVar2 + unaff_r30);
  piVar1 = *(int **)(in_r11 + 4);
  *(int *)(param_2 + 8) = in_r11;
  *(int **)(param_2 + 0xc) = piVar1;
  *piVar1 = param_2 + 8;
  *(int *)(in_r11 + 4) = param_2 + 8;
  *(int *)(unaff_r30 + 0x30) = *(int *)(unaff_r30 + 0x30) + *(int *)(unaff_r31 + 0x50);
  FUN_98017074();
  return *(undefined4 *)(unaff_r31 + 0x58);
}


/* ==== FUN_98016f1c @ 98016f1c ==== */

undefined4 FUN_98016f1c(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong unaff_r30;
  int unaff_r31;
  
  uVar6 = (uint)param_3;
  iVar4 = (int)unaff_r30;
  if ((uVar6 < *(uint *)(iVar4 + 0x28)) ||
     (*(int *)(iVar4 + 0x30) + uVar6 < *(uint *)(iVar4 + 0x2c))) {
    if (uVar6 < 0xf001) {
      iVar5 = (int)param_2;
      *(byte *)(iVar5 + 5) = *(byte *)(iVar5 + 5) & 0x10;
      puVar2 = *(uint **)(iVar4 + 0x180);
      *(uint **)(unaff_r31 + 0x5c) = puVar2;
      while (((unaff_r30 + 0x180U & 0xffffffff) != ZEXT48(puVar2) &&
             (uVar1 = *(ushort *)(puVar2 + -2), *(uint **)(unaff_r31 + 0x60) = puVar2 + -2,
             (uint)uVar1 < (*(uint *)(unaff_r31 + 0x50) & 0xffff)))) {
        puVar2 = (uint *)*puVar2;
        *(uint **)(unaff_r31 + 0x5c) = puVar2;
      }
      piVar3 = (int *)puVar2[1];
      *(uint **)(iVar5 + 8) = puVar2;
      *(int **)(iVar5 + 0xc) = piVar3;
      *piVar3 = iVar5 + 8;
      puVar2[1] = iVar5 + 8;
      *(int *)(iVar4 + 0x30) = *(int *)(unaff_r31 + 0x50) + *(int *)(iVar4 + 0x30);
    }
    else {
      FUN_98014f80(unaff_r30,param_2,param_3);
    }
  }
  else {
    FUN_98015ba0(unaff_r30,param_2,param_3);
  }
  FUN_98017074();
  return *(undefined4 *)(unaff_r31 + 0x58);
}


/* ==== FUN_98016fd4 @ 98016fd4 ==== */

undefined4 FUN_98016fd4(void)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  int unaff_r26;
  uint unaff_r27;
  int unaff_r29;
  int unaff_r31;
  
  *(int *)(unaff_r31 + 0x60) = unaff_r29 + -0x20;
  iVar1 = *(int *)(unaff_r29 + -0x20);
  piVar2 = *(int **)(unaff_r29 + -0x1c);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  if (unaff_r26 != 0) {
    FUN_98018118();
    *(undefined4 *)(unaff_r31 + 0x54) = 0;
  }
  *(undefined4 *)(unaff_r31 + 0x50) = 0;
  uVar3 = FUN_98018198();
  *(uint *)(unaff_r31 + 0x58) = -((int)uVar3 >> 0x1f) - 1U & unaff_r27;
  FUN_98017074();
  return *(undefined4 *)(unaff_r31 + 0x58);
}


/* ==== FUN_98017074 @ 98017074 ==== */

void FUN_98017074(void)

{
  int unaff_r26;
  
  if (unaff_r26 != 0) {
    FUN_98018118();
  }
  return;
}


/* ==== FUN_980170c8 @ 980170c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980170c8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar9;
  ulonglong uVar8;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ushort *puVar17;
  int iStack00000014;
  int iStack00000024;
  undefined4 uStack0000002c;
  
  lVar7 = FUN_9800d234();
  iVar9 = (int)lVar7;
  iVar10 = (int)param_3;
  uStack0000002c = (undefined4)param_4;
  iStack00000014 = iVar9;
  iStack00000024 = iVar10;
  if (((*(uint *)(iVar9 + 0x14) & 0x40000) != 0) &&
     (uVar8 = FUN_98018188(), (uint)*(byte *)(iVar9 + 0x17b) != (uint)uVar8)) {
    FUN_98018178();
  }
  if ((param_3 & 0xffffffff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = (ulonglong)*(uint *)(iVar9 + 0x18);
  if (0x7fffffff < (param_4 & 0xffffffff)) {
    halt_baddata();
  }
  uVar11 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar11 = 1;
  }
  uVar12 = uVar8 | param_2 & 0xffffffff;
  uVar11 = *(uint *)(iVar9 + 0x50) + uVar11 & (ulonglong)*(uint *)(iVar9 + 0x54);
  if ((((uVar12 & 0x3fffff00) != 0 || (uVar12 & 0x3c000100) != 0) || (*(int *)(iVar9 + 0x17c) != 0))
     || ((*(byte *)(iVar10 + -0xb) & 2) != 0)) {
    uVar11 = uVar11 + 0x10;
  }
  if (((uVar8 | param_2 & 0xffffffff) & 1) == 0) {
    FUN_98018138();
  }
  puVar17 = (ushort *)(param_3 - 0x10);
  bVar1 = *(byte *)(iVar10 + -0xb);
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *puVar17;
  uVar12 = (ulonglong)uVar2;
  if ((bVar1 & 8) == 0) {
    uVar15 = uVar12 * 0x10 - (ulonglong)*(byte *)(iVar10 + -10);
  }
  else {
    uVar11 = uVar11 + 0x1001f & 0xffff0000;
    uVar15 = (*(uint *)(iVar10 + -0x18) - uVar12) - 0x30;
    uVar12 = (ulonglong)(*(uint *)(iVar10 + -0x18) >> 4);
  }
  iVar14 = (int)uVar11;
  uVar11 = (uVar11 & 0xffffffff) >> 4;
  if (uVar12 < uVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar11 + 1 == uVar12) {
    iVar14 = iVar14 + 0x10;
    uVar11 = uVar11 + 1;
  }
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 2) == 0) {
      *(char *)(iVar10 + -10) = (char)iVar14 - (char)param_4;
    }
    else {
      iVar6 = (int)(uVar11 << 4);
      *(undefined8 *)((int)puVar17 + iVar6 + -0x10) =
           *(undefined8 *)(puVar17 + (uint)uVar2 * 8 + -8);
      *(undefined8 *)((int)puVar17 + iVar6 + -8) = *(undefined8 *)(puVar17 + (uint)uVar2 * 8 + -4);
      *(char *)(iVar10 + -10) = (char)iVar14 - (char)param_4;
    }
  }
  else {
    *puVar17 = ((short)iVar14 - (short)param_4) - 0x30;
  }
  if (((uVar15 & 0xffffffff) < (param_4 & 0xffffffff)) && (((uVar8 | param_2) & 8) != 0)) {
    FUN_9800d9e0((uint *)((int)uVar15 + iVar10),0,param_4 - uVar15);
  }
  if (uVar11 == uVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(iVar10 + -0xb);
  if ((bVar1 & 8) != 0) {
    uVar8 = FUN_98018198();
    if ((int)uVar8 < 0) {
      halt_baddata();
    }
    *(int *)(iVar10 + -0x18) = *(int *)(iVar10 + -0x18) - ((int)(uVar12 << 4) - iVar14);
    halt_baddata();
  }
  lVar16 = (uVar11 & 0xfffffff) * 0x10 + (param_3 - 0x10);
  puVar5 = (ushort *)lVar16;
  *(byte *)((int)puVar5 + 5) = bVar1 & 0xfe;
  puVar5[1] = (ushort)uVar11;
  *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(iVar10 + -0xc);
  uVar8 = *puVar17 - uVar11;
  *puVar17 = (ushort)uVar11;
  *(byte *)(iVar10 + -0xb) = *(byte *)(iVar10 + -0xb) & 0xef;
  uVar2 = (ushort)uVar8;
  if ((bVar1 & 0x10) == 0) {
    lVar16 = (uVar8 & 0xfffffff) * 0x10 + lVar16;
    puVar17 = (ushort *)lVar16;
    if ((*(byte *)((int)puVar17 + 5) & 1) == 0) {
      *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar17 + 5);
      puVar13 = *(uint **)(puVar17 + 6);
      puVar4 = *(uint **)(puVar17 + 4);
      if ((*puVar13 == puVar4[1]) && ((ulonglong)*puVar13 == (lVar16 + 8U & 0xffffffff))) {
        *puVar13 = (uint)puVar4;
        puVar4[1] = (uint)puVar13;
        if ((puVar4 == puVar13) && (uVar2 = *puVar17, uVar2 < 0x80)) {
          iVar10 = ((uVar2 >> 5) + 0x58) * 4;
          *(uint *)(iVar10 + iVar9) = *(uint *)(iVar10 + iVar9) ^ 1 << (uVar2 & 0x1f);
        }
      }
      if ((*(byte *)((int)puVar17 + 5) & 4) != 0) {
        thunk_FUN_980181c4();
      }
      *(uint *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) - (uint)*puVar17;
      uVar8 = *puVar17 + uVar8;
      if (0xf000 < (uVar8 & 0xffffffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar5 = (ushort)uVar8;
      if ((*(byte *)((int)puVar5 + 5) & 0x10) == 0) {
        *(ushort *)((int)puVar5 + (int)((uVar8 & 0xffffffff) << 4) + 2) = (ushort)uVar8;
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar9) + 0x40) = puVar5;
      }
      *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
      if ((uVar8 & 0xffff) < 0x80) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar5 = uVar2;
    puVar17[1] = uVar2;
    *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
    if (0x7f < (uVar8 & 0xffff)) {
      for (puVar13 = *(uint **)(iVar9 + 0x180);
          ((lVar7 + 0x180U & 0xffffffff) != ZEXT48(puVar13) &&
          ((ulonglong)*(ushort *)(puVar13 + -2) < (uVar8 & 0xffff))); puVar13 = (uint *)*puVar13) {
      }
      goto FUN_98017488;
    }
  }
  else {
    *(ushort **)(*(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar9) + 0x40) = puVar5;
    *puVar5 = uVar2;
    *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
    if (0x7f < (uVar8 & 0xffff)) {
      for (puVar13 = *(uint **)(iVar9 + 0x180);
          ((lVar7 + 0x180U & 0xffffffff) != ZEXT48(puVar13) &&
          ((ulonglong)*(ushort *)(puVar13 + -2) < (uVar8 & 0xffff))); puVar13 = (uint *)*puVar13) {
      }
      goto FUN_98017488;
    }
  }
  uVar8 = ((uVar8 & 0xffff) + 0x30) * 8 + lVar7;
  puVar13 = (uint *)uVar8;
  if ((ulonglong)*puVar13 == (uVar8 & 0xffffffff)) {
    iVar10 = ((*puVar5 >> 5) + 0x58) * 4;
    *(uint *)(iVar10 + iVar9) = *(uint *)(iVar10 + iVar9) | 1 << (*puVar5 & 0x1f);
  }
FUN_98017488:
  puVar3 = (undefined4 *)puVar13[1];
  *(uint **)(puVar5 + 4) = puVar13;
  *(undefined4 **)(puVar5 + 6) = puVar3;
  *puVar3 = puVar5 + 4;
  puVar13[1] = (uint)(puVar5 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017488 @ 98017488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017488(void)

{
  int *piVar1;
  int in_r11;
  int unaff_r29;
  
  piVar1 = *(int **)(in_r11 + 4);
  *(int *)(unaff_r29 + 8) = in_r11;
  *(int **)(unaff_r29 + 0xc) = piVar1;
  *piVar1 = unaff_r29 + 8;
  *(int *)(in_r11 + 4) = unaff_r29 + 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980174ac @ 980174ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980174ac(void)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  uint in_r9;
  int unaff_r27;
  int unaff_r29;
  int unaff_r31;
  
  piVar3 = *(int **)(unaff_r27 + 0x180);
  *(int **)(unaff_r31 + 0x70) = piVar3;
  while (((int *)(unaff_r27 + 0x180) != piVar3 &&
         (uVar1 = *(ushort *)(piVar3 + -2), *(int **)(unaff_r31 + 0x5c) = piVar3 + -2, uVar1 < in_r9
         ))) {
    piVar3 = (int *)*piVar3;
    *(int **)(unaff_r31 + 0x70) = piVar3;
  }
  piVar2 = (int *)piVar3[1];
  *(int **)(unaff_r29 + 8) = piVar3;
  *(int **)(unaff_r29 + 0xc) = piVar2;
  *piVar2 = unaff_r29 + 8;
  piVar3[1] = unaff_r29 + 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017548 @ 98017548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017548(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_r27;
  int unaff_r28;
  undefined2 *unaff_r29;
  ushort *unaff_r30;
  int unaff_r31;
  
  bVar1 = *(byte *)((int)unaff_r30 + 5);
  if ((bVar1 & 4) != 0) {
    uVar2 = *unaff_r30;
    uVar3 = (uint)uVar2 * 0x10 - 0x18;
    *(uint *)(unaff_r31 + 0x74) = uVar3;
    if (((bVar1 & 2) != 0) && (4 < uVar3)) {
      *(uint *)(unaff_r31 + 0x74) = (uint)uVar2 * 0x10 + -0x1c;
    }
    thunk_FUN_980181c4();
  }
  *(uint *)(unaff_r27 + 0x30) = *(int *)(unaff_r27 + 0x30) - (uint)*unaff_r30;
  uVar3 = (uint)*unaff_r30 + unaff_r28;
  if (uVar3 < 0xf001) {
    *unaff_r29 = (short)uVar3;
    if ((*(byte *)((int)unaff_r29 + 5) & 0x10) == 0) {
      unaff_r29[uVar3 * 8 + 1] = (short)uVar3;
    }
    else {
      *(undefined2 **)(*(int *)((*(byte *)(unaff_r29 + 2) + 0x18) * 4 + unaff_r27) + 0x40) =
           unaff_r29;
    }
    *(byte *)((int)unaff_r29 + 5) = *(byte *)((int)unaff_r29 + 5) & 0xf8;
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


/* ==== FUN_98018018 @ 98018018 ==== */

void FUN_98018018(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint in_r9;
  int unaff_r22;
  int unaff_r27;
  
  iVar1 = ((in_r9 >> 5) + 0x58) * 4;
  *(uint *)(iVar1 + unaff_r27) = *(uint *)(iVar1 + unaff_r27) | unaff_r22 << (in_r9 & 0x1f);
  FUN_98018074(param_1,param_2,param_3);
  return;
}


/* ==== FUN_98018048 @ 98018048 ==== */

ulonglong FUN_98018048(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *in_r9;
  uint in_r10;
  byte *pbVar6;
  int iVar7;
  undefined4 *in_r11;
  undefined4 unaff_r19;
  int unaff_r20;
  int unaff_r21;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  uint uVar8;
  uint unaff_r25;
  byte *unaff_r26;
  uint unaff_r27;
  ulonglong unaff_r28;
  byte *pbVar9;
  byte *unaff_r29;
  uint uVar10;
  char cVar11;
  int unaff_r31;
  
  if ((in_r9 != in_r11) &&
     (uVar2 = *(ushort *)(in_r11 + -2), *(undefined4 **)(unaff_r31 + 0x5c) = in_r11 + -2,
     uVar2 < in_r10)) {
    *(undefined4 *)(unaff_r31 + 0x78) = *in_r11;
    uVar5 = FUN_98018048(param_1,param_2,param_3);
    return uVar5;
  }
  puVar3 = (undefined4 *)in_r11[1];
  pbVar6 = unaff_r29 + 8;
  *(undefined4 **)(unaff_r29 + 8) = in_r11;
  *(undefined4 **)(unaff_r29 + 0xc) = puVar3;
  *puVar3 = pbVar6;
  in_r11[1] = pbVar6;
  *(int *)(unaff_r21 + 0x30) = param_3 + *(int *)(unaff_r21 + 0x30);
  if ((unaff_r20 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *unaff_r29;
  uVar10 = (uint)bVar1;
  pbVar9 = unaff_r29 + 1;
  if (unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      unaff_r27 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      unaff_r27 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  if (((unaff_r27 == 0x10) && (bVar1 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    uVar10 = (uint)unaff_r29[2];
    pbVar9 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar5 = (ulonglong)(int)unaff_r27;
  trapDoubleWordImmediate(6,uVar5,0);
  do {
    uVar2 = *(ushort *)(uVar10 * 2 + *(int *)(pbVar6 + 200));
    cVar11 = (char)uVar10;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar7 = (int)cVar11;
      if (('`' < cVar11) && (cVar11 < '{')) {
        iVar7 = iVar7 + -0x20;
      }
      uVar10 = iVar7 - 0x37;
    }
    else {
      uVar10 = (int)cVar11 - 0x30;
    }
    if (unaff_r27 <= uVar10) break;
    uVar8 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar5) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar5 &&
        (trapDoubleWordImmediate(6,uVar5,0),
        (ulonglong)uVar10 <= -((0xffffffffffffffff / uVar5) * uVar5) - 1)))) {
      unaff_r28 = uVar5 * unaff_r28 + (ulonglong)uVar10;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar8 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar10 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    unaff_r25 = uVar8;
  } while( true );
  pbVar9 = pbVar9 + -1;
  if ((unaff_r25 & 8) == 0) {
    if (unaff_r24 != (undefined4 *)0x0) {
      pbVar9 = unaff_r26;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar4 = FUN_9800fe98();
  *(undefined4 *)lVar4 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = pbVar9;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_98018058 @ 98018058 ==== */

ulonglong FUN_98018058(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                      undefined4 param_5,uint param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *in_r11;
  undefined4 unaff_r19;
  int unaff_r20;
  int unaff_r21;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  uint uVar8;
  uint unaff_r25;
  byte *unaff_r26;
  uint unaff_r27;
  ulonglong unaff_r28;
  byte *pbVar9;
  byte *unaff_r29;
  uint uVar10;
  char cVar11;
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x5c) = param_5;
  if (param_6 < param_8) {
    *(undefined4 *)(unaff_r31 + 0x78) = *in_r11;
    uVar5 = FUN_98018048(param_1,param_2,param_3);
    return uVar5;
  }
  puVar3 = (undefined4 *)in_r11[1];
  pbVar6 = unaff_r29 + 8;
  *(undefined4 **)(unaff_r29 + 8) = in_r11;
  *(undefined4 **)(unaff_r29 + 0xc) = puVar3;
  *puVar3 = pbVar6;
  in_r11[1] = pbVar6;
  *(int *)(unaff_r21 + 0x30) = param_3 + *(int *)(unaff_r21 + 0x30);
  if ((unaff_r20 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *unaff_r29;
  uVar10 = (uint)bVar1;
  pbVar9 = unaff_r29 + 1;
  if (unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      unaff_r27 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      unaff_r27 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  if (((unaff_r27 == 0x10) && (bVar1 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    uVar10 = (uint)unaff_r29[2];
    pbVar9 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar5 = (ulonglong)(int)unaff_r27;
  trapDoubleWordImmediate(6,uVar5,0);
  do {
    uVar2 = *(ushort *)(uVar10 * 2 + *(int *)(pbVar6 + 200));
    cVar11 = (char)uVar10;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar7 = (int)cVar11;
      if (('`' < cVar11) && (cVar11 < '{')) {
        iVar7 = iVar7 + -0x20;
      }
      uVar10 = iVar7 - 0x37;
    }
    else {
      uVar10 = (int)cVar11 - 0x30;
    }
    if (unaff_r27 <= uVar10) break;
    uVar8 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar5) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar5 &&
        (trapDoubleWordImmediate(6,uVar5,0),
        (ulonglong)uVar10 <= -((0xffffffffffffffff / uVar5) * uVar5) - 1)))) {
      unaff_r28 = uVar5 * unaff_r28 + (ulonglong)uVar10;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar8 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar10 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    unaff_r25 = uVar8;
  } while( true );
  pbVar9 = pbVar9 + -1;
  if ((unaff_r25 & 8) == 0) {
    if (unaff_r24 != (undefined4 *)0x0) {
      pbVar9 = unaff_r26;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar4 = FUN_9800fe98();
  *(undefined4 *)lVar4 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = pbVar9;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_98018068 @ 98018068 ==== */

void FUN_98018068(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 in_r11;
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x78) = in_r11;
  FUN_98018048(param_1,param_2,param_3);
  return;
}


/* ==== FUN_98018074 @ 98018074 ==== */

ulonglong FUN_98018074(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  int in_r11;
  undefined4 unaff_r19;
  int unaff_r20;
  int unaff_r21;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  uint uVar8;
  uint unaff_r25;
  byte *unaff_r26;
  uint unaff_r27;
  ulonglong unaff_r28;
  byte *pbVar9;
  byte *unaff_r29;
  uint uVar10;
  char cVar11;
  int unaff_r31;
  
  puVar3 = *(undefined4 **)(in_r11 + 4);
  pbVar6 = unaff_r29 + 8;
  *(int *)(unaff_r29 + 8) = in_r11;
  *(undefined4 **)(unaff_r29 + 0xc) = puVar3;
  *puVar3 = pbVar6;
  *(byte **)(in_r11 + 4) = pbVar6;
  *(int *)(unaff_r21 + 0x30) = param_3 + *(int *)(unaff_r21 + 0x30);
  if ((unaff_r20 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *unaff_r29;
  uVar10 = (uint)bVar1;
  pbVar9 = unaff_r29 + 1;
  if (unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      unaff_r27 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      unaff_r27 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  if (((unaff_r27 == 0x10) && (bVar1 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    uVar10 = (uint)unaff_r29[2];
    pbVar9 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar5 = (ulonglong)(int)unaff_r27;
  trapDoubleWordImmediate(6,uVar5,0);
  do {
    uVar2 = *(ushort *)(uVar10 * 2 + *(int *)(pbVar6 + 200));
    cVar11 = (char)uVar10;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar7 = (int)cVar11;
      if (('`' < cVar11) && (cVar11 < '{')) {
        iVar7 = iVar7 + -0x20;
      }
      uVar10 = iVar7 - 0x37;
    }
    else {
      uVar10 = (int)cVar11 - 0x30;
    }
    if (unaff_r27 <= uVar10) break;
    uVar8 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar5) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar5 &&
        (trapDoubleWordImmediate(6,uVar5,0),
        (ulonglong)uVar10 <= -((0xffffffffffffffff / uVar5) * uVar5) - 1)))) {
      unaff_r28 = uVar5 * unaff_r28 + (ulonglong)uVar10;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar8 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar10 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    unaff_r25 = uVar8;
  } while( true );
  pbVar9 = pbVar9 + -1;
  if ((unaff_r25 & 8) == 0) {
    if (unaff_r24 != (undefined4 *)0x0) {
      pbVar9 = unaff_r26;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar4 = FUN_9800fe98();
  *(undefined4 *)lVar4 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = pbVar9;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_98018088 @ 98018088 ==== */

ulonglong FUN_98018088(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar5;
  int in_r11;
  undefined4 unaff_r19;
  int unaff_r20;
  int unaff_r21;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  uint uVar6;
  uint unaff_r25;
  byte *unaff_r26;
  uint unaff_r27;
  ulonglong unaff_r28;
  byte *pbVar7;
  byte *unaff_r29;
  uint uVar8;
  char cVar9;
  int unaff_r31;
  
  *(int *)(in_r11 + 4) = in_r10;
  *(int *)(unaff_r21 + 0x30) = param_3 + *(int *)(unaff_r21 + 0x30);
  if ((unaff_r20 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *unaff_r29;
  uVar8 = (uint)bVar1;
  pbVar7 = unaff_r29 + 1;
  if (unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      unaff_r27 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar7 != 0x78) && (*pbVar7 != 0x58)) {
      unaff_r27 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  if (((unaff_r27 == 0x10) && (bVar1 == 0x30)) && ((*pbVar7 == 0x78 || (*pbVar7 == 0x58)))) {
    uVar8 = (uint)unaff_r29[2];
    pbVar7 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar4 = (ulonglong)(int)unaff_r27;
  trapDoubleWordImmediate(6,uVar4,0);
  do {
    uVar2 = *(ushort *)(uVar8 * 2 + *(int *)(in_r10 + 200));
    cVar9 = (char)uVar8;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar5 = (int)cVar9;
      if (('`' < cVar9) && (cVar9 < '{')) {
        iVar5 = iVar5 + -0x20;
      }
      uVar8 = iVar5 - 0x37;
    }
    else {
      uVar8 = (int)cVar9 - 0x30;
    }
    if (unaff_r27 <= uVar8) break;
    uVar6 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar4) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar4 &&
        (trapDoubleWordImmediate(6,uVar4,0),
        (ulonglong)uVar8 <= -((0xffffffffffffffff / uVar4) * uVar4) - 1)))) {
      unaff_r28 = uVar4 * unaff_r28 + (ulonglong)uVar8;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar6 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    unaff_r25 = uVar6;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((unaff_r25 & 8) == 0) {
    if (unaff_r24 != (undefined4 *)0x0) {
      pbVar7 = unaff_r26;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = pbVar7;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== thunk_FUN_980182a8 @ 98018098 ==== */

ulonglong thunk_FUN_980182a8(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar5;
  undefined4 unaff_r19;
  int unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  uint uVar6;
  uint unaff_r25;
  byte *unaff_r26;
  uint unaff_r27;
  ulonglong unaff_r28;
  byte *pbVar7;
  byte *unaff_r29;
  uint uVar8;
  char cVar9;
  int unaff_r31;
  
  if ((unaff_r20 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *unaff_r29;
  uVar8 = (uint)bVar1;
  pbVar7 = unaff_r29 + 1;
  if (unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      unaff_r27 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar7 != 0x78) && (*pbVar7 != 0x58)) {
      unaff_r27 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  if (((unaff_r27 == 0x10) && (bVar1 == 0x30)) && ((*pbVar7 == 0x78 || (*pbVar7 == 0x58)))) {
    uVar8 = (uint)unaff_r29[2];
    pbVar7 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar4 = (ulonglong)(int)unaff_r27;
  trapDoubleWordImmediate(6,uVar4,0);
  do {
    uVar2 = *(ushort *)(uVar8 * 2 + *(int *)(in_r10 + 200));
    cVar9 = (char)uVar8;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar5 = (int)cVar9;
      if (('`' < cVar9) && (cVar9 < '{')) {
        iVar5 = iVar5 + -0x20;
      }
      uVar8 = iVar5 - 0x37;
    }
    else {
      uVar8 = (int)cVar9 - 0x30;
    }
    if (unaff_r27 <= uVar8) break;
    uVar6 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar4) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar4 &&
        (trapDoubleWordImmediate(6,uVar4,0),
        (ulonglong)uVar8 <= -((0xffffffffffffffff / uVar4) * uVar4) - 1)))) {
      unaff_r28 = uVar4 * unaff_r28 + (ulonglong)uVar8;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar6 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    unaff_r25 = uVar6;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((unaff_r25 & 8) == 0) {
    if (unaff_r24 != (undefined4 *)0x0) {
      pbVar7 = unaff_r26;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = pbVar7;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980180c8 @ 980180c8 ==== */

ulonglong FUN_980180c8(int param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ushort *in_r10;
  ushort *puVar6;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  ulonglong uVar7;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar8;
  undefined8 unaff_r27;
  ulonglong unaff_r28;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong unaff_r29;
  ushort *unaff_r30;
  uint uVar11;
  char cVar12;
  int unaff_r31;
  
  iVar3 = FUN_98015bd0(param_1,param_2);
  uVar7 = unaff_r20;
  uVar5 = unaff_r23;
  if (iVar3 == 0) {
    if ((unaff_r23 & 0x10) == 0) {
      uVar5 = unaff_r23 << 0x20 | unaff_r23 & 0xc003ffff;
      *(int *)(unaff_r31 + 0x15c) = (int)(unaff_r23 & 0xc003ffff);
      if ((*(byte *)((int)unaff_r30 + 5) & 2) != 0) {
        uVar11 = (uint)unaff_r23 & 0xc003f1ff;
        *(uint *)(unaff_r31 + 0x15c) = uVar11;
        bVar1 = *(byte *)((int)unaff_r30 + 5);
        uVar11 = (bVar1 & 0xe0) << 4 | 0x100 | uVar11;
        *(uint *)(unaff_r31 + 0x15c) = uVar11;
        if ((bVar1 & 8) != 0) {
          uVar5 = FUN_98018138();
          return uVar5;
        }
        uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
        if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
          *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar11;
        }
        uVar5 = FUN_980181c4();
        return uVar5;
      }
      if ((ulonglong)*(byte *)((int)unaff_r30 + 7) != 0) {
        uVar5 = (ulonglong)*(byte *)((int)unaff_r30 + 7) << 0x12 | uVar5;
        *(int *)(unaff_r31 + 0x15c) = (int)uVar5;
      }
      iVar3 = FUN_98016ed8(unaff_r27,(uint)uVar5 & 0xfffffff7);
      uVar7 = (ulonglong)iVar3;
      if (uVar7 != 0) {
        bVar1 = *(byte *)(iVar3 + -0xb);
        in_r10 = (ushort *)(uint)bVar1;
        if ((bVar1 & 2) != 0) {
          if ((bVar1 & 8) == 0) {
            in_r10 = (ushort *)(iVar3 + -0x10) + (uint)*(ushort *)(iVar3 + -0x10) * 8 + -8;
          }
          else {
            in_r10 = (ushort *)(iVar3 + -0x28);
          }
          if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
            *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
            *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
          }
          else {
            if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
              puVar6 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
            }
            else {
              puVar6 = unaff_r30 + -0xc;
            }
            *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar6 + 2);
          }
        }
        uVar4 = unaff_r26;
        if ((unaff_r25 & 0xffffffff) <= (unaff_r26 & 0xffffffff)) {
          uVar4 = unaff_r25;
        }
        FUN_9800e320(uVar7,unaff_r20,uVar4,param_4);
        if (((unaff_r25 & 0xffffffff) < (unaff_r26 & 0xffffffff)) && ((uVar5 & 8) != 0)) {
          FUN_9800e3e0(uVar7 + unaff_r25,0,unaff_r26 - unaff_r25,param_4);
        }
        func_0x980177d0(unaff_r27,uVar5,unaff_r20);
      }
      *(int *)(unaff_r31 + 0x164) = iVar3;
      unaff_r29 = uVar7;
      goto FUN_980182a8;
    }
    *(undefined4 *)(unaff_r31 + 0x164) = unaff_r19;
LAB_980182b0:
    if ((uVar5 & 4) != 0) {
      *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
      *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
      *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
      *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
      *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
      FUN_98018bd8();
    }
  }
  else {
FUN_980182a8:
    if ((uVar7 & 0xffffffff) == 0) goto LAB_980182b0;
  }
  FUN_98018330();
  bVar1 = *(byte *)unaff_r29;
  uVar11 = (uint)bVar1;
  lVar9 = unaff_r29 + 1;
  if ((int)unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      uVar8 = 10;
      goto LAB_9800dd00;
    }
    cVar12 = *(char *)lVar9;
    if ((cVar12 != 'x') && (cVar12 != 'X')) {
      uVar8 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  uVar8 = (uint)unaff_r27;
  if (((uVar8 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar12 = *(char *)lVar9, cVar12 == 'x' || (cVar12 == 'X')))) {
    uVar11 = (uint)((byte *)unaff_r29)[2];
    lVar9 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar5 = (ulonglong)(int)uVar8;
  trapDoubleWordImmediate(6,uVar5,0);
  do {
    uVar2 = *(ushort *)(uVar11 * 2 + *(int *)(in_r10 + 100));
    cVar12 = (char)uVar11;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar3 = (int)cVar12;
      if (('`' < cVar12) && (cVar12 < '{')) {
        iVar3 = iVar3 + -0x20;
      }
      uVar11 = iVar3 - 0x37;
    }
    else {
      uVar11 = (int)cVar12 - 0x30;
    }
    if (uVar8 <= uVar11) break;
    uVar7 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar5) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar5 &&
        (trapDoubleWordImmediate(6,uVar5,0),
        (ulonglong)uVar11 <= -((0xffffffffffffffff / uVar5) * uVar5) - 1)))) {
      unaff_r28 = uVar5 * unaff_r28 + (ulonglong)uVar11;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar7 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar11 = (uint)*(byte *)lVar9;
    lVar9 = lVar9 + 1;
    unaff_r25 = uVar7;
  } while( true );
  uVar10 = (undefined4)(lVar9 - 1U);
  if ((unaff_r25 & 8) == 0) {
    uVar5 = lVar9 - 1U;
    if (unaff_r24 != (undefined4 *)0x0) {
      uVar5 = unaff_r26;
    }
    uVar10 = (undefined4)uVar5;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar9 = FUN_9800fe98();
  *(undefined4 *)lVar9 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = uVar10;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980180d8 @ 980180d8 ==== */

ulonglong FUN_980180d8(void)

{
  byte bVar1;
  ushort uVar2;
  ulonglong in_r6;
  ulonglong uVar3;
  ushort *in_r10;
  int iVar4;
  ushort *puVar5;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  ulonglong uVar6;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar7;
  undefined8 unaff_r27;
  ulonglong unaff_r28;
  longlong lVar8;
  undefined4 uVar9;
  longlong unaff_r29;
  ushort *unaff_r30;
  uint uVar10;
  char cVar11;
  int unaff_r31;
  byte in_cr0;
  
  if ((bool)(in_cr0 >> 1 & 1)) {
    uVar3 = unaff_r23 << 0x20 | unaff_r23 & 0xc003ffff;
    *(int *)(unaff_r31 + 0x15c) = (int)(unaff_r23 & 0xc003ffff);
    if ((*(byte *)((int)unaff_r30 + 5) & 2) != 0) {
      uVar10 = (uint)unaff_r23 & 0xc003f1ff;
      *(uint *)(unaff_r31 + 0x15c) = uVar10;
      bVar1 = *(byte *)((int)unaff_r30 + 5);
      uVar10 = (bVar1 & 0xe0) << 4 | 0x100 | uVar10;
      *(uint *)(unaff_r31 + 0x15c) = uVar10;
      if ((bVar1 & 8) != 0) {
        uVar3 = FUN_98018138();
        return uVar3;
      }
      uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
      if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
        *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar10;
      }
      uVar3 = FUN_980181c4();
      return uVar3;
    }
    if ((ulonglong)*(byte *)((int)unaff_r30 + 7) != 0) {
      uVar3 = (ulonglong)*(byte *)((int)unaff_r30 + 7) << 0x12 | uVar3;
      *(int *)(unaff_r31 + 0x15c) = (int)uVar3;
    }
    iVar4 = FUN_98016ed8(unaff_r27,(uint)uVar3 & 0xfffffff7);
    unaff_r29 = (longlong)iVar4;
    if (unaff_r29 != 0) {
      bVar1 = *(byte *)(iVar4 + -0xb);
      in_r10 = (ushort *)(uint)bVar1;
      if ((bVar1 & 2) != 0) {
        if ((bVar1 & 8) == 0) {
          in_r10 = (ushort *)(iVar4 + -0x10) + (uint)*(ushort *)(iVar4 + -0x10) * 8 + -8;
        }
        else {
          in_r10 = (ushort *)(iVar4 + -0x28);
        }
        if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
          *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
          *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
        }
        else {
          if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
            puVar5 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
          }
          else {
            puVar5 = unaff_r30 + -0xc;
          }
          *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar5 + 2);
        }
      }
      uVar6 = unaff_r26;
      if ((unaff_r25 & 0xffffffff) <= (unaff_r26 & 0xffffffff)) {
        uVar6 = unaff_r25;
      }
      FUN_9800e320(unaff_r29,unaff_r20,uVar6,in_r6);
      if (((unaff_r25 & 0xffffffff) < (unaff_r26 & 0xffffffff)) && ((uVar3 & 8) != 0)) {
        FUN_9800e3e0(unaff_r29 + unaff_r25,0,unaff_r26 - unaff_r25,in_r6);
      }
      func_0x980177d0(unaff_r27,uVar3,unaff_r20);
    }
    *(int *)(unaff_r31 + 0x164) = iVar4;
    if (iVar4 == 0) goto LAB_980182b0;
  }
  else {
    *(undefined4 *)(unaff_r31 + 0x164) = unaff_r19;
    uVar3 = unaff_r23;
LAB_980182b0:
    if ((uVar3 & 4) != 0) {
      *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
      *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
      *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
      *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
      *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
      FUN_98018bd8();
    }
  }
  FUN_98018330();
  bVar1 = *(byte *)unaff_r29;
  uVar10 = (uint)bVar1;
  lVar8 = unaff_r29 + 1;
  if ((int)unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      uVar7 = 10;
      goto LAB_9800dd00;
    }
    cVar11 = *(char *)lVar8;
    if ((cVar11 != 'x') && (cVar11 != 'X')) {
      uVar7 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  uVar7 = (uint)unaff_r27;
  if (((uVar7 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar11 = *(char *)lVar8, cVar11 == 'x' || (cVar11 == 'X')))) {
    uVar10 = (uint)((byte *)unaff_r29)[2];
    lVar8 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar3 = (ulonglong)(int)uVar7;
  trapDoubleWordImmediate(6,uVar3,0);
  do {
    uVar2 = *(ushort *)(uVar10 * 2 + *(int *)(in_r10 + 100));
    cVar11 = (char)uVar10;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar4 = (int)cVar11;
      if (('`' < cVar11) && (cVar11 < '{')) {
        iVar4 = iVar4 + -0x20;
      }
      uVar10 = iVar4 - 0x37;
    }
    else {
      uVar10 = (int)cVar11 - 0x30;
    }
    if (uVar7 <= uVar10) break;
    uVar6 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar3) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar3 &&
        (trapDoubleWordImmediate(6,uVar3,0),
        (ulonglong)uVar10 <= -((0xffffffffffffffff / uVar3) * uVar3) - 1)))) {
      unaff_r28 = uVar3 * unaff_r28 + (ulonglong)uVar10;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar6 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar10 = (uint)*(byte *)lVar8;
    lVar8 = lVar8 + 1;
    unaff_r25 = uVar6;
  } while( true );
  uVar9 = (undefined4)(lVar8 - 1U);
  if ((unaff_r25 & 8) == 0) {
    uVar3 = lVar8 - 1U;
    if (unaff_r24 != (undefined4 *)0x0) {
      uVar3 = unaff_r26;
    }
    uVar9 = (undefined4)uVar3;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar8 = FUN_9800fe98();
  *(undefined4 *)lVar8 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = uVar9;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980180e8 @ 980180e8 ==== */

ulonglong FUN_980180e8(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong in_r6;
  ushort *in_r10;
  int iVar6;
  ushort *puVar7;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  uint uVar8;
  undefined4 *unaff_r24;
  ulonglong uVar9;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar10;
  undefined8 unaff_r27;
  ulonglong unaff_r28;
  longlong lVar11;
  undefined4 uVar12;
  ushort *unaff_r30;
  char cVar13;
  int unaff_r31;
  
  *(uint *)(unaff_r31 + 0x15c) = (uint)unaff_r23;
  if ((*(byte *)((int)unaff_r30 + 5) & 2) != 0) {
    uVar8 = (uint)unaff_r23 & 0xfffff1ff;
    *(uint *)(unaff_r31 + 0x15c) = uVar8;
    bVar1 = *(byte *)((int)unaff_r30 + 5);
    uVar8 = (bVar1 & 0xe0) << 4 | 0x100 | uVar8;
    *(uint *)(unaff_r31 + 0x15c) = uVar8;
    if ((bVar1 & 8) != 0) {
      uVar4 = FUN_98018138();
      return uVar4;
    }
    uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
    if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
      *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar8;
    }
    uVar4 = FUN_980181c4();
    return uVar4;
  }
  if ((ulonglong)*(byte *)((int)unaff_r30 + 7) != 0) {
    unaff_r23 = (ulonglong)*(byte *)((int)unaff_r30 + 7) << 0x12 | unaff_r23;
    *(int *)(unaff_r31 + 0x15c) = (int)unaff_r23;
  }
  pbVar5 = (byte *)FUN_98016ed8(unaff_r27,(uint)unaff_r23 & 0xfffffff7);
  lVar3 = (longlong)(int)pbVar5;
  if (lVar3 != 0) {
    bVar1 = pbVar5[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar5 + -0x10) + ((uint)*(ushort *)(pbVar5 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar5 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
        *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar7 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar7 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar7 + 2);
      }
    }
    uVar4 = unaff_r26;
    if ((unaff_r25 & 0xffffffff) <= (unaff_r26 & 0xffffffff)) {
      uVar4 = unaff_r25;
    }
    FUN_9800e320(lVar3,unaff_r20,uVar4,in_r6);
    if (((unaff_r25 & 0xffffffff) < (unaff_r26 & 0xffffffff)) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0(lVar3 + unaff_r25,0,unaff_r26 - unaff_r25,in_r6);
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar5;
  if ((pbVar5 == (byte *)0x0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar5;
  uVar8 = (uint)bVar1;
  lVar11 = lVar3 + 1;
  if ((int)unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      uVar10 = 10;
      goto LAB_9800dd00;
    }
    cVar13 = *(char *)lVar11;
    if ((cVar13 != 'x') && (cVar13 != 'X')) {
      uVar10 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  uVar10 = (uint)unaff_r27;
  if (((uVar10 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar13 = *(char *)lVar11, cVar13 == 'x' || (cVar13 == 'X')))) {
    uVar8 = (uint)pbVar5[2];
    lVar11 = lVar3 + 3;
  }
LAB_9800dd00:
  uVar4 = (ulonglong)(int)uVar10;
  trapDoubleWordImmediate(6,uVar4,0);
  do {
    uVar2 = *(ushort *)(uVar8 * 2 + *(int *)(in_r10 + 100));
    cVar13 = (char)uVar8;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar6 = (int)cVar13;
      if (('`' < cVar13) && (cVar13 < '{')) {
        iVar6 = iVar6 + -0x20;
      }
      uVar8 = iVar6 - 0x37;
    }
    else {
      uVar8 = (int)cVar13 - 0x30;
    }
    if (uVar10 <= uVar8) break;
    uVar9 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar4) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar4 &&
        (trapDoubleWordImmediate(6,uVar4,0),
        (ulonglong)uVar8 <= -((0xffffffffffffffff / uVar4) * uVar4) - 1)))) {
      unaff_r28 = uVar4 * unaff_r28 + (ulonglong)uVar8;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar9 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar8 = (uint)*(byte *)lVar11;
    lVar11 = lVar11 + 1;
    unaff_r25 = uVar9;
  } while( true );
  uVar12 = (undefined4)(lVar11 - 1U);
  if ((unaff_r25 & 8) == 0) {
    uVar4 = lVar11 - 1U;
    if (unaff_r24 != (undefined4 *)0x0) {
      uVar4 = unaff_r26;
    }
    uVar12 = (undefined4)uVar4;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = uVar12;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980180f8 @ 980180f8 ==== */

void FUN_980180f8(void)

{
  byte bVar1;
  ushort uVar2;
  uint unaff_r23;
  uint uVar3;
  ushort *unaff_r30;
  int unaff_r31;
  
  *(uint *)(unaff_r31 + 0x15c) = unaff_r23 & 0xfffff1ff;
  bVar1 = *(byte *)((int)unaff_r30 + 5);
  uVar3 = (bVar1 & 0xe0) << 4 | 0x100 | unaff_r23 & 0xfffff1ff;
  *(uint *)(unaff_r31 + 0x15c) = uVar3;
  if ((bVar1 & 8) != 0) {
    FUN_98018138();
    return;
  }
  uVar2 = unaff_r30[(uint)*unaff_r30 * 8 + -7];
  if ((uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
    *(uint *)(unaff_r31 + 0x15c) = (uint)uVar2 << 0x12 | uVar3;
  }
  FUN_980181c4();
  return;
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


/* ==== FUN_98018128 @ 98018128 ==== */

void FUN_98018128(void)

{
  ushort uVar1;
  uint unaff_r23;
  ushort *unaff_r30;
  int unaff_r31;
  
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

ulonglong FUN_98018178(void)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong in_r6;
  ushort *in_r10;
  int iVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong unaff_r28;
  longlong lVar14;
  ushort *unaff_r30;
  uint uVar15;
  char cVar16;
  int unaff_r31;
  
  *(byte *)((int)unaff_r30 + 5) = *(byte *)((int)unaff_r30 + 5) & 0xfd;
  pbVar3 = *(byte **)(unaff_r31 + 0x16c);
  uVar12 = ZEXT48(pbVar3);
  uVar15 = *(uint *)(unaff_r31 + 0x164);
  uVar4 = *(uint *)(unaff_r31 + 0x15c);
  uVar13 = *(uint *)(unaff_r31 + 0x154);
  puVar5 = *(undefined4 **)(unaff_r31 + 0x50);
  uVar11 = (ulonglong)*(uint *)(unaff_r31 + 0x5c);
  pbVar7 = (byte *)FUN_98016ed8((ulonglong)uVar13,uVar4 & 0xfffffff7);
  lVar6 = (longlong)(int)pbVar7;
  if (lVar6 != 0) {
    bVar1 = pbVar7[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar7 + -0x10) + ((uint)*(ushort *)(pbVar7 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar7 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        in_r10[0] = 0;
        in_r10[1] = 0;
        in_r10[2] = 0;
        in_r10[3] = 0;
        in_r10[4] = 0;
        in_r10[5] = 0;
        in_r10[6] = 0;
        in_r10[7] = 0;
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar9 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar9 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar9 + 2);
      }
    }
    uVar10 = uVar12;
    if (uVar11 <= uVar12) {
      uVar10 = uVar11;
    }
    FUN_9800e320(lVar6,(ulonglong)uVar15,uVar10,in_r6);
    if ((uVar11 < uVar12) && ((uVar4 & 8) != 0)) {
      FUN_9800e3e0(lVar6 + uVar11,0,uVar12 - uVar11,in_r6);
    }
    func_0x980177d0((ulonglong)uVar13,uVar4,(ulonglong)uVar15);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar7;
  if ((pbVar7 == (byte *)0x0) && ((uVar4 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = 0;
    *(undefined4 *)(unaff_r31 + 0x90) = 1;
    *(undefined4 *)(unaff_r31 + 0x84) = 0;
    *(undefined4 **)(unaff_r31 + 0x94) = puVar5;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar7;
  uVar15 = (uint)bVar1;
  lVar14 = lVar6 + 1;
  if (uVar13 == 0) {
    if (bVar1 != 0x30) {
      uVar13 = 10;
      goto LAB_9800dd00;
    }
    cVar16 = *(char *)lVar14;
    if ((cVar16 != 'x') && (cVar16 != 'X')) {
      uVar13 = 8;
      goto LAB_9800dd00;
    }
    uVar13 = 0x10;
  }
  if (((uVar13 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar16 = *(char *)lVar14, cVar16 == 'x' || (cVar16 == 'X')))) {
    uVar15 = (uint)pbVar7[2];
    lVar14 = lVar6 + 3;
  }
LAB_9800dd00:
  uVar12 = (ulonglong)(int)uVar13;
  trapDoubleWordImmediate(6,uVar12,0);
  do {
    uVar2 = *(ushort *)(uVar15 * 2 + *(int *)(in_r10 + 100));
    cVar16 = (char)uVar15;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar8 = (int)cVar16;
      if (('`' < cVar16) && (cVar16 < '{')) {
        iVar8 = iVar8 + -0x20;
      }
      uVar15 = iVar8 - 0x37;
    }
    else {
      uVar15 = (int)cVar16 - 0x30;
    }
    if (uVar13 <= uVar15) break;
    uVar10 = uVar11 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar12) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar12 &&
        (trapDoubleWordImmediate(6,uVar12,0),
        (ulonglong)uVar15 <= -((0xffffffffffffffff / uVar12) * uVar12) - 1)))) {
      unaff_r28 = uVar12 * unaff_r28 + (ulonglong)uVar15;
    }
    else {
      uVar11 = uVar11 | 0xc;
      uVar10 = uVar11;
      if (puVar5 == (undefined4 *)0x0) break;
    }
    uVar15 = (uint)*(byte *)lVar14;
    lVar14 = lVar14 + 1;
    uVar11 = uVar10;
  } while( true );
  pbVar7 = (byte *)lVar14 + -1;
  if ((uVar11 & 8) == 0) {
    if (puVar5 != (undefined4 *)0x0) {
      pbVar7 = pbVar3;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((uVar11 & 4) == 0) {
    if ((uVar11 & 1) != 0) goto LAB_9800de40;
    if ((((uVar11 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(uVar11 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar6 = FUN_9800fe98();
  *(undefined4 *)lVar6 = 0x22;
  if ((uVar11 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((uVar11 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = pbVar7;
  }
  if ((uVar11 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_98018188 @ 98018188 ==== */

ulonglong FUN_98018188(void)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong in_r6;
  ushort *in_r10;
  int iVar8;
  ushort *puVar9;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong unaff_r28;
  longlong lVar14;
  ushort *unaff_r30;
  uint uVar15;
  char cVar16;
  int unaff_r31;
  
  pbVar3 = *(byte **)(unaff_r31 + 0x16c);
  uVar12 = ZEXT48(pbVar3);
  uVar15 = *(uint *)(unaff_r31 + 0x164);
  uVar4 = *(uint *)(unaff_r31 + 0x15c);
  uVar13 = *(uint *)(unaff_r31 + 0x154);
  puVar5 = *(undefined4 **)(unaff_r31 + 0x50);
  uVar11 = (ulonglong)*(uint *)(unaff_r31 + 0x5c);
  pbVar7 = (byte *)FUN_98016ed8((ulonglong)uVar13,uVar4 & 0xfffffff7);
  lVar6 = (longlong)(int)pbVar7;
  if (lVar6 != 0) {
    bVar1 = pbVar7[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar7 + -0x10) + ((uint)*(ushort *)(pbVar7 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar7 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
        *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar9 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar9 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar9 + 2);
      }
    }
    uVar10 = uVar12;
    if (uVar11 <= uVar12) {
      uVar10 = uVar11;
    }
    FUN_9800e320(lVar6,(ulonglong)uVar15,uVar10,in_r6);
    if ((uVar11 < uVar12) && ((uVar4 & 8) != 0)) {
      FUN_9800e3e0(lVar6 + uVar11,0,uVar12 - uVar11,in_r6);
    }
    func_0x980177d0((ulonglong)uVar13,uVar4,(ulonglong)uVar15);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar7;
  if ((pbVar7 == (byte *)0x0) && ((uVar4 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = 1;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = puVar5;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar7;
  uVar15 = (uint)bVar1;
  lVar14 = lVar6 + 1;
  if (uVar13 == 0) {
    if (bVar1 != 0x30) {
      uVar13 = 10;
      goto LAB_9800dd00;
    }
    cVar16 = *(char *)lVar14;
    if ((cVar16 != 'x') && (cVar16 != 'X')) {
      uVar13 = 8;
      goto LAB_9800dd00;
    }
    uVar13 = 0x10;
  }
  if (((uVar13 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar16 = *(char *)lVar14, cVar16 == 'x' || (cVar16 == 'X')))) {
    uVar15 = (uint)pbVar7[2];
    lVar14 = lVar6 + 3;
  }
LAB_9800dd00:
  uVar12 = (ulonglong)(int)uVar13;
  trapDoubleWordImmediate(6,uVar12,0);
  do {
    uVar2 = *(ushort *)(uVar15 * 2 + *(int *)(in_r10 + 100));
    cVar16 = (char)uVar15;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar8 = (int)cVar16;
      if (('`' < cVar16) && (cVar16 < '{')) {
        iVar8 = iVar8 + -0x20;
      }
      uVar15 = iVar8 - 0x37;
    }
    else {
      uVar15 = (int)cVar16 - 0x30;
    }
    if (uVar13 <= uVar15) break;
    uVar10 = uVar11 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar12) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar12 &&
        (trapDoubleWordImmediate(6,uVar12,0),
        (ulonglong)uVar15 <= -((0xffffffffffffffff / uVar12) * uVar12) - 1)))) {
      unaff_r28 = uVar12 * unaff_r28 + (ulonglong)uVar15;
    }
    else {
      uVar11 = uVar11 | 0xc;
      uVar10 = uVar11;
      if (puVar5 == (undefined4 *)0x0) break;
    }
    uVar15 = (uint)*(byte *)lVar14;
    lVar14 = lVar14 + 1;
    uVar11 = uVar10;
  } while( true );
  pbVar7 = (byte *)lVar14 + -1;
  if ((uVar11 & 8) == 0) {
    if (puVar5 != (undefined4 *)0x0) {
      pbVar7 = pbVar3;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((uVar11 & 4) == 0) {
    if ((uVar11 & 1) != 0) goto LAB_9800de40;
    if ((((uVar11 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(uVar11 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar6 = FUN_9800fe98();
  *(undefined4 *)lVar6 = 0x22;
  if ((uVar11 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((uVar11 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = pbVar7;
  }
  if ((uVar11 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_98018198 @ 98018198 ==== */

ulonglong FUN_98018198(void)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong in_r6;
  ulonglong uVar6;
  ushort *in_r10;
  int iVar7;
  ushort *puVar8;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_r26;
  uint uVar11;
  ulonglong unaff_r28;
  longlong lVar12;
  undefined4 uVar13;
  ushort *unaff_r30;
  uint uVar14;
  char cVar15;
  int unaff_r31;
  
  uVar11 = *(uint *)(unaff_r31 + 0x154);
  puVar3 = *(undefined4 **)(unaff_r31 + 0x50);
  uVar10 = (ulonglong)*(uint *)(unaff_r31 + 0x5c);
  pbVar5 = (byte *)FUN_98016ed8((ulonglong)uVar11,(uint)unaff_r23 & 0xfffffff7);
  lVar4 = (longlong)(int)pbVar5;
  if (lVar4 != 0) {
    bVar1 = pbVar5[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar5 + -0x10) + ((uint)*(ushort *)(pbVar5 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar5 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
        *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar8 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar8 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar8 + 2);
      }
    }
    uVar6 = unaff_r26;
    if (uVar10 <= (unaff_r26 & 0xffffffff)) {
      uVar6 = uVar10;
    }
    FUN_9800e320(lVar4,unaff_r20,uVar6,in_r6);
    if ((uVar10 < (unaff_r26 & 0xffffffff)) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0(lVar4 + uVar10,0,unaff_r26 - uVar10,in_r6);
    }
    func_0x980177d0((ulonglong)uVar11,unaff_r23,unaff_r20);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar5;
  if ((pbVar5 == (byte *)0x0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = puVar3;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar5;
  uVar14 = (uint)bVar1;
  lVar12 = lVar4 + 1;
  if (uVar11 == 0) {
    if (bVar1 != 0x30) {
      uVar11 = 10;
      goto LAB_9800dd00;
    }
    cVar15 = *(char *)lVar12;
    if ((cVar15 != 'x') && (cVar15 != 'X')) {
      uVar11 = 8;
      goto LAB_9800dd00;
    }
    uVar11 = 0x10;
  }
  if (((uVar11 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar15 = *(char *)lVar12, cVar15 == 'x' || (cVar15 == 'X')))) {
    uVar14 = (uint)pbVar5[2];
    lVar12 = lVar4 + 3;
  }
LAB_9800dd00:
  uVar6 = (ulonglong)(int)uVar11;
  trapDoubleWordImmediate(6,uVar6,0);
  do {
    uVar2 = *(ushort *)(uVar14 * 2 + *(int *)(in_r10 + 100));
    cVar15 = (char)uVar14;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar7 = (int)cVar15;
      if (('`' < cVar15) && (cVar15 < '{')) {
        iVar7 = iVar7 + -0x20;
      }
      uVar14 = iVar7 - 0x37;
    }
    else {
      uVar14 = (int)cVar15 - 0x30;
    }
    if (uVar11 <= uVar14) break;
    uVar9 = uVar10 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar6) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar6 &&
        (trapDoubleWordImmediate(6,uVar6,0),
        (ulonglong)uVar14 <= -((0xffffffffffffffff / uVar6) * uVar6) - 1)))) {
      unaff_r28 = uVar6 * unaff_r28 + (ulonglong)uVar14;
    }
    else {
      uVar10 = uVar10 | 0xc;
      uVar9 = uVar10;
      if (puVar3 == (undefined4 *)0x0) break;
    }
    uVar14 = (uint)*(byte *)lVar12;
    lVar12 = lVar12 + 1;
    uVar10 = uVar9;
  } while( true );
  uVar13 = (undefined4)(lVar12 - 1U);
  if ((uVar10 & 8) == 0) {
    uVar6 = lVar12 - 1U;
    if (puVar3 != (undefined4 *)0x0) {
      uVar6 = unaff_r26;
    }
    uVar13 = (undefined4)uVar6;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 1) != 0) goto LAB_9800de40;
    if ((((uVar10 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(uVar10 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar4 = FUN_9800fe98();
  *(undefined4 *)lVar4 = 0x22;
  if ((uVar10 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((uVar10 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = uVar13;
  }
  if ((uVar10 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== thunk_FUN_980181c4 @ 980181a8 ==== */

ulonglong thunk_FUN_980181c4(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong in_r6;
  ulonglong uVar5;
  ushort *in_r10;
  int iVar6;
  ushort *puVar7;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  ulonglong uVar8;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar9;
  undefined8 unaff_r27;
  ulonglong unaff_r28;
  longlong lVar10;
  undefined4 uVar11;
  ushort *unaff_r30;
  uint uVar12;
  char cVar13;
  int unaff_r31;
  
  pbVar4 = (byte *)FUN_98016ed8(unaff_r27,(uint)unaff_r23 & 0xfffffff7);
  lVar3 = (longlong)(int)pbVar4;
  if (lVar3 != 0) {
    bVar1 = pbVar4[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar4 + -0x10) + ((uint)*(ushort *)(pbVar4 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar4 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
        *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar7 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar7 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar7 + 2);
      }
    }
    uVar5 = unaff_r26;
    if ((unaff_r25 & 0xffffffff) <= (unaff_r26 & 0xffffffff)) {
      uVar5 = unaff_r25;
    }
    FUN_9800e320(lVar3,unaff_r20,uVar5,in_r6);
    if (((unaff_r25 & 0xffffffff) < (unaff_r26 & 0xffffffff)) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0(lVar3 + unaff_r25,0,unaff_r26 - unaff_r25,in_r6);
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar4;
  if ((pbVar4 == (byte *)0x0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar4;
  uVar12 = (uint)bVar1;
  lVar10 = lVar3 + 1;
  if ((int)unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      uVar9 = 10;
      goto LAB_9800dd00;
    }
    cVar13 = *(char *)lVar10;
    if ((cVar13 != 'x') && (cVar13 != 'X')) {
      uVar9 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  uVar9 = (uint)unaff_r27;
  if (((uVar9 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar13 = *(char *)lVar10, cVar13 == 'x' || (cVar13 == 'X')))) {
    uVar12 = (uint)pbVar4[2];
    lVar10 = lVar3 + 3;
  }
LAB_9800dd00:
  uVar5 = (ulonglong)(int)uVar9;
  trapDoubleWordImmediate(6,uVar5,0);
  do {
    uVar2 = *(ushort *)(uVar12 * 2 + *(int *)(in_r10 + 100));
    cVar13 = (char)uVar12;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar6 = (int)cVar13;
      if (('`' < cVar13) && (cVar13 < '{')) {
        iVar6 = iVar6 + -0x20;
      }
      uVar12 = iVar6 - 0x37;
    }
    else {
      uVar12 = (int)cVar13 - 0x30;
    }
    if (uVar9 <= uVar12) break;
    uVar8 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar5) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar5 &&
        (trapDoubleWordImmediate(6,uVar5,0),
        (ulonglong)uVar12 <= -((0xffffffffffffffff / uVar5) * uVar5) - 1)))) {
      unaff_r28 = uVar5 * unaff_r28 + (ulonglong)uVar12;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar8 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar12 = (uint)*(byte *)lVar10;
    lVar10 = lVar10 + 1;
    unaff_r25 = uVar8;
  } while( true );
  uVar11 = (undefined4)(lVar10 - 1U);
  if ((unaff_r25 & 8) == 0) {
    uVar5 = lVar10 - 1U;
    if (unaff_r24 != (undefined4 *)0x0) {
      uVar5 = unaff_r26;
    }
    uVar11 = (undefined4)uVar5;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = uVar11;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980181c4 @ 980181c4 ==== */

ulonglong FUN_980181c4(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong in_r6;
  ulonglong uVar5;
  ushort *in_r10;
  int iVar6;
  ushort *puVar7;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  ulonglong uVar8;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar9;
  undefined8 unaff_r27;
  ulonglong unaff_r28;
  longlong lVar10;
  undefined4 uVar11;
  ushort *unaff_r30;
  uint uVar12;
  char cVar13;
  int unaff_r31;
  
  pbVar4 = (byte *)FUN_98016ed8(unaff_r27,(uint)unaff_r23 & 0xfffffff7);
  lVar3 = (longlong)(int)pbVar4;
  if (lVar3 != 0) {
    bVar1 = pbVar4[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar4 + -0x10) + ((uint)*(ushort *)(pbVar4 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar4 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
        *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar7 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar7 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar7 + 2);
      }
    }
    uVar5 = unaff_r26;
    if ((unaff_r25 & 0xffffffff) <= (unaff_r26 & 0xffffffff)) {
      uVar5 = unaff_r25;
    }
    FUN_9800e320(lVar3,unaff_r20,uVar5,in_r6);
    if (((unaff_r25 & 0xffffffff) < (unaff_r26 & 0xffffffff)) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0(lVar3 + unaff_r25,0,unaff_r26 - unaff_r25,in_r6);
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar4;
  if ((pbVar4 == (byte *)0x0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar4;
  uVar12 = (uint)bVar1;
  lVar10 = lVar3 + 1;
  if ((int)unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      uVar9 = 10;
      goto LAB_9800dd00;
    }
    cVar13 = *(char *)lVar10;
    if ((cVar13 != 'x') && (cVar13 != 'X')) {
      uVar9 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  uVar9 = (uint)unaff_r27;
  if (((uVar9 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar13 = *(char *)lVar10, cVar13 == 'x' || (cVar13 == 'X')))) {
    uVar12 = (uint)pbVar4[2];
    lVar10 = lVar3 + 3;
  }
LAB_9800dd00:
  uVar5 = (ulonglong)(int)uVar9;
  trapDoubleWordImmediate(6,uVar5,0);
  do {
    uVar2 = *(ushort *)(uVar12 * 2 + *(int *)(in_r10 + 100));
    cVar13 = (char)uVar12;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar6 = (int)cVar13;
      if (('`' < cVar13) && (cVar13 < '{')) {
        iVar6 = iVar6 + -0x20;
      }
      uVar12 = iVar6 - 0x37;
    }
    else {
      uVar12 = (int)cVar13 - 0x30;
    }
    if (uVar9 <= uVar12) break;
    uVar8 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar5) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar5 &&
        (trapDoubleWordImmediate(6,uVar5,0),
        (ulonglong)uVar12 <= -((0xffffffffffffffff / uVar5) * uVar5) - 1)))) {
      unaff_r28 = uVar5 * unaff_r28 + (ulonglong)uVar12;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar8 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar12 = (uint)*(byte *)lVar10;
    lVar10 = lVar10 + 1;
    unaff_r25 = uVar8;
  } while( true );
  uVar11 = (undefined4)(lVar10 - 1U);
  if ((unaff_r25 & 8) == 0) {
    uVar5 = lVar10 - 1U;
    if (unaff_r24 != (undefined4 *)0x0) {
      uVar5 = unaff_r26;
    }
    uVar11 = (undefined4)uVar5;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = uVar11;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980181d8 @ 980181d8 ==== */

ulonglong FUN_980181d8(void)

{
  byte bVar1;
  ushort uVar2;
  ulonglong in_r6;
  ulonglong uVar3;
  ushort *in_r10;
  int iVar4;
  ushort *puVar5;
  undefined4 unaff_00000098;
  undefined4 unaff_r19;
  ulonglong unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  ulonglong uVar6;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar7;
  undefined8 unaff_r27;
  ulonglong unaff_r28;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong unaff_r29;
  byte *pbVar10;
  ushort *unaff_r30;
  uint uVar11;
  char cVar12;
  int unaff_r31;
  byte in_cr0;
  
  pbVar10 = (byte *)unaff_r29;
  if (!(bool)(in_cr0 >> 1 & 1)) {
    bVar1 = pbVar10[-0xb];
    in_r10 = (ushort *)(uint)bVar1;
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 8) == 0) {
        in_r10 = (ushort *)
                 ((int)(pbVar10 + -0x10) + ((uint)*(ushort *)(pbVar10 + -0x10) * 8 + -8) * 2);
      }
      else {
        in_r10 = (ushort *)(pbVar10 + -0x28);
      }
      if ((*(byte *)((int)unaff_r30 + 5) & 2) == 0) {
        *(ulonglong *)in_r10 = CONCAT44(unaff_00000098,unaff_r19);
        *(ulonglong *)(in_r10 + 4) = CONCAT44(unaff_00000098,unaff_r19);
      }
      else {
        if ((*(byte *)((int)unaff_r30 + 5) & 8) == 0) {
          puVar5 = unaff_r30 + (uint)*unaff_r30 * 8 + -8;
        }
        else {
          puVar5 = unaff_r30 + -0xc;
        }
        *(undefined4 *)(in_r10 + 2) = *(undefined4 *)(puVar5 + 2);
      }
    }
    uVar3 = unaff_r26;
    if ((unaff_r25 & 0xffffffff) <= (unaff_r26 & 0xffffffff)) {
      uVar3 = unaff_r25;
    }
    FUN_9800e320(unaff_r29,unaff_r20,uVar3,in_r6);
    if (((unaff_r25 & 0xffffffff) < (unaff_r26 & 0xffffffff)) && ((unaff_r23 & 8) != 0)) {
      FUN_9800e3e0(unaff_r29 + unaff_r25,0,unaff_r26 - unaff_r25,in_r6);
    }
    func_0x980177d0(unaff_r27,unaff_r23,unaff_r20);
  }
  *(byte **)(unaff_r31 + 0x164) = pbVar10;
  if (((unaff_r29 & 0xffffffff) == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *pbVar10;
  uVar11 = (uint)bVar1;
  lVar8 = unaff_r29 + 1;
  if ((int)unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      uVar7 = 10;
      goto LAB_9800dd00;
    }
    cVar12 = *(char *)lVar8;
    if ((cVar12 != 'x') && (cVar12 != 'X')) {
      uVar7 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  uVar7 = (uint)unaff_r27;
  if (((uVar7 == 0x10) && (bVar1 == 0x30)) &&
     ((cVar12 = *(char *)lVar8, cVar12 == 'x' || (cVar12 == 'X')))) {
    uVar11 = (uint)pbVar10[2];
    lVar8 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar3 = (ulonglong)(int)uVar7;
  trapDoubleWordImmediate(6,uVar3,0);
  do {
    uVar2 = *(ushort *)(uVar11 * 2 + *(int *)(in_r10 + 100));
    cVar12 = (char)uVar11;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar4 = (int)cVar12;
      if (('`' < cVar12) && (cVar12 < '{')) {
        iVar4 = iVar4 + -0x20;
      }
      uVar11 = iVar4 - 0x37;
    }
    else {
      uVar11 = (int)cVar12 - 0x30;
    }
    if (uVar7 <= uVar11) break;
    uVar6 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar3) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar3 &&
        (trapDoubleWordImmediate(6,uVar3,0),
        (ulonglong)uVar11 <= -((0xffffffffffffffff / uVar3) * uVar3) - 1)))) {
      unaff_r28 = uVar3 * unaff_r28 + (ulonglong)uVar11;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar6 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar11 = (uint)*(byte *)lVar8;
    lVar8 = lVar8 + 1;
    unaff_r25 = uVar6;
  } while( true );
  uVar9 = (undefined4)(lVar8 - 1U);
  if ((unaff_r25 & 8) == 0) {
    uVar3 = lVar8 - 1U;
    if (unaff_r24 != (undefined4 *)0x0) {
      uVar3 = unaff_r26;
    }
    uVar9 = (undefined4)uVar3;
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((int)(unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar8 = FUN_9800fe98();
  *(undefined4 *)lVar8 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = uVar9;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_980182a8 @ 980182a8 ==== */

ulonglong FUN_980182a8(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar5;
  undefined4 unaff_r19;
  int unaff_r20;
  undefined4 unaff_r22;
  ulonglong unaff_r23;
  undefined4 *unaff_r24;
  uint uVar6;
  uint unaff_r25;
  byte *unaff_r26;
  uint unaff_r27;
  ulonglong unaff_r28;
  byte *pbVar7;
  byte *unaff_r29;
  uint uVar8;
  char cVar9;
  int unaff_r31;
  
  if ((unaff_r20 == 0) && ((unaff_r23 & 4) != 0)) {
    *(undefined4 *)(unaff_r31 + 0x80) = 0xc0000017;
    *(undefined4 *)(unaff_r31 + 0x88) = unaff_r19;
    *(undefined4 *)(unaff_r31 + 0x90) = unaff_r22;
    *(undefined4 *)(unaff_r31 + 0x84) = unaff_r19;
    *(undefined4 **)(unaff_r31 + 0x94) = unaff_r24;
    FUN_98018bd8();
  }
  FUN_98018330();
  bVar1 = *unaff_r29;
  uVar8 = (uint)bVar1;
  pbVar7 = unaff_r29 + 1;
  if (unaff_r27 == 0) {
    if (bVar1 != 0x30) {
      unaff_r27 = 10;
      goto LAB_9800dd00;
    }
    if ((*pbVar7 != 0x78) && (*pbVar7 != 0x58)) {
      unaff_r27 = 8;
      goto LAB_9800dd00;
    }
    unaff_r27 = 0x10;
  }
  if (((unaff_r27 == 0x10) && (bVar1 == 0x30)) && ((*pbVar7 == 0x78 || (*pbVar7 == 0x58)))) {
    uVar8 = (uint)unaff_r29[2];
    pbVar7 = unaff_r29 + 3;
  }
LAB_9800dd00:
  uVar4 = (ulonglong)(int)unaff_r27;
  trapDoubleWordImmediate(6,uVar4,0);
  do {
    uVar2 = *(ushort *)(uVar8 * 2 + *(int *)(in_r10 + 200));
    cVar9 = (char)uVar8;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar5 = (int)cVar9;
      if (('`' < cVar9) && (cVar9 < '{')) {
        iVar5 = iVar5 + -0x20;
      }
      uVar8 = iVar5 - 0x37;
    }
    else {
      uVar8 = (int)cVar9 - 0x30;
    }
    if (unaff_r27 <= uVar8) break;
    uVar6 = unaff_r25 | 8;
    if ((unaff_r28 < 0xffffffffffffffff / uVar4) ||
       ((unaff_r28 == 0xffffffffffffffff / uVar4 &&
        (trapDoubleWordImmediate(6,uVar4,0),
        (ulonglong)uVar8 <= -((0xffffffffffffffff / uVar4) * uVar4) - 1)))) {
      unaff_r28 = uVar4 * unaff_r28 + (ulonglong)uVar8;
    }
    else {
      unaff_r25 = unaff_r25 | 0xc;
      uVar6 = unaff_r25;
      if (unaff_r24 == (undefined4 *)0x0) break;
    }
    uVar8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    unaff_r25 = uVar6;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((unaff_r25 & 8) == 0) {
    if (unaff_r24 != (undefined4 *)0x0) {
      pbVar7 = unaff_r26;
    }
    unaff_r28 = 0;
    goto LAB_9800de40;
  }
  if ((unaff_r25 & 4) == 0) {
    if ((unaff_r25 & 1) != 0) goto LAB_9800de40;
    if ((((unaff_r25 & 2) == 0) || (unaff_r28 < 0x8000000000000001)) &&
       (((unaff_r25 & 2) != 0 || (unaff_r28 < 0x8000000000000000)))) goto LAB_9800de40;
  }
  lVar3 = FUN_9800fe98();
  *(undefined4 *)lVar3 = 0x22;
  if ((unaff_r25 & 1) == 0) {
    unaff_r28 = 0x8000000000000000;
    if ((unaff_r25 & 2) == 0) {
      unaff_r28 = 0x7fffffffffffffff;
    }
  }
  else {
    unaff_r28 = 0xffffffffffffffff;
  }
LAB_9800de40:
  if (unaff_r24 != (undefined4 *)0x0) {
    *unaff_r24 = pbVar7;
  }
  if ((unaff_r25 & 2) != 0) {
    unaff_r28 = -unaff_r28;
  }
  return unaff_r28;
}


/* ==== FUN_98018330 @ 98018330 ==== */

void FUN_98018330(void)

{
  int in_r12;
  
  if (*(int *)(in_r12 + -0xe0) != 0) {
    FUN_98018b18();
  }
  return;
}


/* ==== FUN_98018b18 @ 98018b18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018b18(void)

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


