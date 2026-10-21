// Decompiled from Updater.xex.pe  base=98000000  (approximate C, for reading only)
/* ==== FUN_98005000 @ 98005000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005418 @ 98005418 ==== */

void FUN_98005418(int *param_1)

{
  if (DAT_9801c930 != (code *)0x0) {
    (*DAT_9801c930)();
  }
  (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_9800d620();
}


/* ==== FUN_980054ac @ 980054ac ==== */

undefined8 FUN_980054ac(void)

{
  undefined8 unaff_r31;
  
  return unaff_r31;
}


/* ==== FUN_980054e0 @ 980054e0 ==== */

longlong FUN_980054e0(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_3 != 0) {
    pbVar1 = param_1 + param_3;
    do {
      lVar2 = (ulonglong)*param_1 - (ulonglong)*param_2;
      if (lVar2 != 0) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_1 != pbVar1);
  }
  if ((int)lVar2 < 0) {
    return -1;
  }
  if ((int)lVar2 < 1) {
    return lVar2;
  }
  return 1;
}


/* ==== FUN_98005540 @ 98005540 ==== */

undefined8
FUN_98005540(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
            ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar4;
  bool bVar5;
  ulonglong uVar3;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint auStack_488 [8];
  ulonglong local_468;
  
  lVar1 = FUN_9800dc74();
  FUN_9800dcf0(auStack_488,0,0x450);
  lVar1 = lVar1 + 8;
  uVar10 = ZEXT48(&stack0x00000000) - 0x4a0;
  uVar9 = 0;
  uVar7 = 0;
  uVar2 = FUN_9800c2e0(lVar1,param_2,0,0,(uint *)uVar10);
  if ((int)uVar2 == 0) {
    FUN_98006fd0(0xffffffff980005f8,param_2,uVar7,uVar9,uVar10,param_6,param_7,param_8);
  }
  else {
    uVar8 = ZEXT48(&stack0x00000000) - 0x490;
    pbVar6 = (byte *)0x0;
    iVar4 = (int)lVar1;
    uVar2 = FUN_9800c850(iVar4,0,uVar8);
    if ((int)uVar2 == 0) {
      iVar4 = FUN_9800c648(iVar4);
      uVar3 = (ulonglong)iVar4;
      uVar9 = FUN_9800c670(uVar3,pbVar6,uVar8,uVar9,uVar10,param_6,param_7,param_8);
      uVar8 = 0xffffffff980005b0;
    }
    else {
      if ((param_4 & 0xffffffff) < local_468) {
        FUN_98006fd0(0xffffffff98000558,param_2,local_468,param_4,uVar10,param_6,param_7,param_8);
        return 0;
      }
      uVar10 = 0;
      pbVar6 = (byte *)0x0;
      bVar5 = FUN_9800ccc8(lVar1,0,param_3,param_4,0);
      if (bVar5) {
        if ((param_5 & 0xffffffff) != 0) {
          *(undefined4 *)param_5 = (int)local_468;
        }
        return 1;
      }
      iVar4 = FUN_9800c648(iVar4);
      uVar3 = (ulonglong)iVar4;
      uVar9 = FUN_9800c670(uVar3,pbVar6,param_3,param_4,uVar10,param_6,param_7,param_8);
      uVar8 = 0xffffffff98000518;
    }
    FUN_98006fd0(uVar8,param_2,uVar3,uVar9,uVar10,param_6,param_7,param_8);
  }
  return 0;
}


/* ==== FUN_98005680 @ 98005680 ==== */

undefined8
FUN_98005680(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar4;
  bool bVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint auStack_498 [8];
  undefined8 local_478;
  uint *puVar6;
  
  lVar2 = FUN_9800dc6c();
  FUN_9800dcf0(auStack_498,0,0x450);
  lVar2 = lVar2 + 8;
  uVar12 = ZEXT48(&stack0x00000000) - 0x4b0;
  uVar11 = 0;
  uVar9 = 0;
  uVar3 = FUN_9800c2e0(lVar2,param_2,0,0,(uint *)uVar12);
  if ((int)uVar3 == 0) {
    FUN_98006fd0(0xffffffff980005f8,param_2,uVar9,uVar11,uVar12,param_6,param_7,param_8);
  }
  else {
    uVar10 = ZEXT48(&stack0x00000000) - 0x4a0;
    pbVar8 = (byte *)0x0;
    iVar5 = (int)lVar2;
    uVar3 = FUN_9800c850(iVar5,0,uVar10);
    uVar1 = local_478;
    if ((int)uVar3 == 0) {
      iVar5 = FUN_9800c648(iVar5);
      uVar11 = FUN_9800c670((longlong)iVar5,pbVar8,uVar10,uVar11,uVar12,param_6,param_7,param_8);
      FUN_98006fd0(0xffffffff980005b0,param_2,(longlong)iVar5,uVar11,uVar12,param_6,param_7,param_8)
      ;
    }
    else {
      uVar10 = local_478 & 0xffffffff;
      puVar6 = FUN_9800ddf0();
      uVar4 = (ulonglong)(int)puVar6;
      if (uVar4 == 0) {
        FUN_98006fd0(0xffffffff98000638,uVar1,param_2,uVar11,uVar12,param_6,param_7,param_8);
      }
      else {
        uVar12 = 0;
        pbVar8 = (byte *)0x0;
        uVar11 = uVar4;
        bVar7 = FUN_9800ccc8(lVar2,0,uVar4,uVar10,0);
        if (bVar7) {
          *param_3 = puVar6;
          *param_4 = local_478._4_4_;
          return 1;
        }
        iVar5 = FUN_9800c648(iVar5);
        uVar11 = FUN_9800c670((longlong)iVar5,pbVar8,uVar11,uVar10,uVar12,param_6,param_7,param_8);
        FUN_98006fd0(0xffffffff98000518,param_2,(longlong)iVar5,uVar11,uVar12,param_6,param_7,
                     param_8);
        FUN_9800dd90(uVar4);
      }
    }
  }
  return 0;
}


/* ==== FUN_9800582c @ 9800582c ==== */

undefined8 FUN_9800582c(void)

{
  undefined8 unaff_r31;
  
  return unaff_r31;
}


/* ==== FUN_98005848 @ 98005848 ==== */

undefined8 FUN_98005848(undefined4 *param_1,undefined4 *param_2)

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


/* ==== FUN_980058a0 @ 980058a0 ==== */

ulonglong FUN_980058a0(uint param_1)

{
  ulonglong uVar1;
  undefined **local_10;
  undefined4 local_c;
  
  uVar1 = 0;
  if ((param_1 != 0) &&
     ((0x3fffffff < param_1 || (uVar1 = FUN_98008fd0(), (uVar1 & 0xffffffff) == 0)))) {
    local_c = 0;
    local_10 = &PTR_DAT_9800050c;
    uVar1 = FUN_98005418((int *)&local_10);
  }
  return uVar1;
}


/* ==== FUN_98005908 @ 98005908 ==== */

ulonglong FUN_98005908(uint param_1)

{
  ulonglong uVar1;
  undefined **local_10;
  undefined4 local_c;
  
  uVar1 = 0;
  if ((param_1 != 0) &&
     ((0x39b0ad < param_1 || (uVar1 = FUN_98008fd0(), (uVar1 & 0xffffffff) == 0)))) {
    local_c = 0;
    local_10 = &PTR_DAT_9800050c;
    uVar1 = FUN_98005418((int *)&local_10);
  }
  return uVar1;
}


/* ==== FUN_98005970 @ 98005970 ==== */

ulonglong FUN_98005970(int param_1)

{
  ulonglong uVar1;
  undefined **local_10;
  undefined4 local_c;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = FUN_98008fd0(), (uVar1 & 0xffffffff) == 0)) {
    local_c = 0;
    local_10 = &PTR_DAT_9800050c;
    uVar1 = FUN_98005418((int *)&local_10);
  }
  return uVar1;
}


/* ==== FUN_980059d8 @ 980059d8 ==== */

ulonglong FUN_980059d8(undefined8 param_1,byte *param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_9800dc70();
  puVar3 = (uint *)uVar4;
  uVar6 = (ulonglong)puVar3[4];
  if ((param_4 & 0xffffffff) == 0) {
    if ((param_3 & 0xffffffff) < uVar6) {
      uVar6 = param_3;
    }
  }
  else {
    if ((param_4 & 0xffffffff) <= uVar6) {
      uVar7 = uVar6 - param_4;
      if ((param_3 & 0xffffffff) < (uVar6 - param_4 & 0xffffffff)) {
        uVar7 = param_3;
      }
      uVar2 = puVar3[5];
      uVar6 = uVar4;
      if (0xf < uVar2) {
        uVar6 = (ulonglong)*puVar3;
      }
      bVar1 = *param_2;
      uVar6 = uVar6 + uVar7;
      while( true ) {
        if ((*(byte *)uVar6 == bVar1) &&
           (lVar5 = FUN_980054e0((byte *)uVar6,param_2,(int)param_4), (int)lVar5 == 0)) {
          if (0xf < uVar2) {
            uVar4 = (ulonglong)*puVar3;
          }
          return uVar6 - uVar4;
        }
        uVar7 = uVar4;
        if (0xf < uVar2) {
          uVar7 = (ulonglong)*puVar3;
        }
        if ((uVar6 & 0xffffffff) == (uVar7 & 0xffffffff)) break;
        uVar6 = uVar6 - 1;
      }
    }
    uVar6 = 0xffffffffffffffff;
  }
  return uVar6;
}


/* ==== FUN_98005ac0 @ 98005ac0 ==== */

void FUN_98005ac0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_9800dc7c();
  puVar2 = (uint *)uVar3;
  if (((param_2 & 0xff) != 0) && (0xf < puVar2[5])) {
    uVar1 = *puVar2;
    if ((param_3 & 0xffffffff) != 0) {
      FUN_9800d650(uVar3,(ulonglong)uVar1,param_3);
    }
    thunk_FUN_9800dd90((ulonglong)uVar1);
  }
  puVar2[4] = (uint)param_3;
  puVar2[5] = 0xf;
  *(undefined1 *)((uint)param_3 + (int)puVar2) = 0;
  return;
}


/* ==== FUN_98005b20 @ 98005b20 ==== */

ulonglong FUN_98005b20(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar1 = (uint *)param_1;
  if ((ulonglong)puVar1[4] < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_98008da8(0xffffffff980006d8);
  }
  uVar3 = puVar1[4] - param_2;
  if ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff)) {
    param_3 = uVar3;
  }
  if ((param_3 & 0xffffffff) != 0) {
    uVar4 = param_1;
    uVar2 = param_1;
    if (0xf < puVar1[5]) {
      uVar4 = (ulonglong)*puVar1;
      uVar2 = (ulonglong)*puVar1;
    }
    FUN_9800db80(uVar4 + param_2,uVar2 + param_2 + param_3,uVar3 - param_3);
    uVar5 = puVar1[4] - (int)param_3;
    puVar1[4] = uVar5;
    uVar3 = param_1;
    if (0xf < puVar1[5]) {
      uVar3 = (ulonglong)*puVar1;
    }
    *(undefined1 *)((int)uVar3 + uVar5) = 0;
  }
  return param_1;
}


/* ==== FUN_98005bf8 @ 98005bf8 ==== */

void FUN_98005bf8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = FUN_9800dc78();
  uVar7 = (uint)param_2;
  puVar2 = (uint *)uVar4;
  if ((param_2 & 0xffffffff | 0xf) < 0xffffffff) {
    uVar1 = puVar2[5];
    uVar3 = uVar1 >> 1;
    uVar7 = uVar7 | 0xf;
    if (((param_2 & 0xffffffff | 0xf) / 3 < (ulonglong)uVar3) &&
       (uVar7 = uVar3 + uVar1, (-(ulonglong)uVar3 - 2 & 0xffffffff) < (ulonglong)uVar1)) {
      uVar7 = 0xfffffffe;
    }
  }
  uVar5 = FUN_98005970(uVar7 + 1);
  if ((param_3 & 0xffffffff) != 0) {
    uVar6 = uVar4;
    if (0xf < puVar2[5]) {
      uVar6 = (ulonglong)*puVar2;
    }
    FUN_9800d650(uVar5,uVar6,param_3);
  }
  FUN_98005ac0(uVar4,1,0);
  *puVar2 = (uint)uVar5;
  puVar2[5] = uVar7;
  puVar2[4] = (uint)param_3;
  if (0xf < uVar7) {
    uVar4 = uVar5;
  }
  *(undefined1 *)((int)uVar4 + (uint)param_3) = 0;
  return;
}


/* ==== FUN_98005cc8 @ 98005cc8 ==== */

int * FUN_98005cc8(undefined8 param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)FUN_9800dc78();
  *piVar1 = (int)param_3;
  if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
    uVar2 = ((ulonglong)(uint)(*(int *)(param_2 + 4) - (int)param_4 >> 2) & 0x3fffffff) << 2;
    FUN_9800db80(param_3,param_4,uVar2);
    *(int *)(param_2 + 4) = (int)uVar2 + (int)param_3;
  }
  return piVar1;
}


/* ==== FUN_98005d20 @ 98005d20 ==== */

byte FUN_98005d20(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  
  if (0xfffffffe < (param_2 & 0xffffffff)) {
    param_1 = FUN_98008d70(0xffffffff98000704);
  }
  puVar1 = (uint *)param_1;
  if ((ulonglong)puVar1[5] < (param_2 & 0xffffffff)) {
    FUN_98005bf8(param_1,param_2,(ulonglong)puVar1[4]);
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
    FUN_98005ac0(param_1,1,uVar2);
  }
  return -(param_2 != 0) & 1;
}


/* ==== FUN_98005dd8 @ 98005dd8 ==== */

void FUN_98005dd8(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar4;
  ulonglong uVar3;
  uint uVar5;
  
  puVar4 = (uint *)FUN_9800dc78();
  if (0x3fffffff < (param_2 & 0xffffffff)) {
    FUN_98008d70(0xffffffff980006f0);
  }
  if ((ulonglong)(uint)((int)(puVar4[2] - *puVar4) >> 2) < (param_2 & 0xffffffff)) {
    uVar3 = FUN_980058a0((uint)param_2);
    FUN_9800db80(uVar3,(ulonglong)*puVar4,
                 ((ulonglong)(uint)((int)(puVar4[1] - *puVar4) >> 2) & 0x3fffffff) << 2);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    if ((ulonglong)uVar1 != 0) {
      thunk_FUN_9800dd90((ulonglong)uVar1);
    }
    uVar5 = (uint)uVar3;
    *puVar4 = uVar5;
    puVar4[2] = (int)((param_2 & 0xffffffff) << 2) + uVar5;
    puVar4[1] = ((int)(uVar2 - uVar1) >> 2) * 4 + uVar5;
  }
  return;
}


/* ==== FUN_98005e88 @ 98005e88 ==== */

ulonglong FUN_98005e88(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  
  uVar2 = FUN_9800dc78();
  puVar1 = (uint *)param_2;
  if ((param_3 & 0xffffffff) <= (ulonglong)puVar1[4]) {
    uVar5 = puVar1[4] - param_3;
    if ((param_4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      uVar5 = param_4;
    }
    if ((uVar2 & 0xffffffff) == (param_2 & 0xffffffff)) {
      FUN_98005b20(uVar2,uVar5 + param_3,0xffffffffffffffff);
      FUN_98005b20(uVar2,0,param_3);
    }
    else {
      bVar4 = FUN_98005d20(uVar2,uVar5,0);
      if (bVar4 != 0) {
        if (0xf < puVar1[5]) {
          param_2 = (ulonglong)*puVar1;
        }
        puVar1 = (uint *)uVar2;
        uVar3 = uVar2;
        if (0xf < puVar1[5]) {
          uVar3 = (ulonglong)*puVar1;
        }
        FUN_9800d650(uVar3,param_2 + param_3,uVar5);
        puVar1[4] = (uint)uVar5;
        uVar3 = uVar2;
        if (0xf < puVar1[5]) {
          uVar3 = (ulonglong)*puVar1;
        }
        *(undefined1 *)((int)uVar3 + (uint)uVar5) = 0;
      }
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_98008da8(0xffffffff980006d8);
}


/* ==== FUN_98005f70 @ 98005f70 ==== */

void FUN_98005f70(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  piVar2 = (int *)param_1;
  uVar1 = piVar2[1] - *piVar2 >> 2;
  if ((0x3fffffffU - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    FUN_98008d70(0xffffffff980006f0);
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
  FUN_98005dd8(param_1,uVar3);
  return;
}


/* ==== FUN_98005fe8 @ 98005fe8 ==== */

ulonglong FUN_98005fe8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar4;
  uint *puVar3;
  
  uVar1 = FUN_9800dc7c();
  puVar3 = (uint *)uVar1;
  uVar2 = FUN_98005848(puVar3,(undefined4 *)param_2);
  if ((uVar2 & 0xff) == 0) {
    bVar4 = FUN_98005d20(uVar1,param_3,0);
    if (bVar4 != 0) {
      uVar2 = uVar1;
      if (0xf < puVar3[5]) {
        uVar2 = (ulonglong)*puVar3;
      }
      FUN_9800d650(uVar2,param_2,param_3);
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
    uVar1 = FUN_98005e88(uVar1,uVar1,param_2 - uVar2,param_3);
  }
  return uVar1;
}


/* ==== FUN_980060a8 @ 980060a8 ==== */

undefined4 * FUN_980060a8(undefined4 *param_1)

{
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = 0;
  FUN_9800dcf0(param_1 + 2,0,0x50);
  param_1[0x16] = 0;
  FUN_9800dcf0(param_1 + 0x17,0,0x30);
  return param_1;
}


/* ==== FUN_98006118 @ 98006118 ==== */

void FUN_98006118(uint *param_1)

{
  if ((ulonglong)param_1[0x16] != 0) {
    FUN_9800dd90((ulonglong)param_1[0x16]);
  }
  if ((ulonglong)*param_1 != 0) {
    FUN_9800dd90((ulonglong)*param_1);
  }
  if ((ulonglong)param_1[0x23] != 0) {
    thunk_FUN_9800dd90((ulonglong)param_1[0x23]);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}


/* ==== FUN_98006180 @ 98006180 ==== */

undefined8 FUN_98006180(undefined8 param_1,ulonglong param_2)

{
  FUN_98005ac0(param_1,0,0);
  FUN_98005e88(param_1,param_2,0,0xffffffffffffffff);
  return param_1;
}


/* ==== FUN_980061d8 @ 980061d8 ==== */

void FUN_980061d8(undefined8 param_1,undefined4 *param_2)

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
      FUN_98005f70(param_1,1);
    }
    puVar5 = (undefined4 *)puVar2[1];
    if (puVar5 == (undefined4 *)0x0) goto LAB_98006288;
    uVar4 = *(undefined4 *)(((int)((int)param_2 - uVar1) >> 2) * 4 + *puVar2);
  }
  else {
    if (puVar5 == (undefined4 *)puVar2[2]) {
      FUN_98005f70(param_1,1);
    }
    puVar5 = (undefined4 *)puVar2[1];
    if (puVar5 == (undefined4 *)0x0) goto LAB_98006288;
    uVar4 = *param_2;
  }
  *puVar5 = uVar4;
LAB_98006288:
  puVar2[1] = puVar2[1] + 4;
  return;
}


/* ==== FUN_980062b0 @ 980062b0 ==== */

longlong FUN_980062b0(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar9;
  undefined8 uVar8;
  ulonglong uVar10;
  ulonglong in_r7;
  ulonglong in_r8;
  ulonglong in_r9;
  ulonglong in_r10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *local_90 [4];
  undefined1 local_80;
  uint auStack_7f [31];
  
  uVar4 = ZEXT48(&stack0x00000000);
  lVar5 = FUN_9800dc5c();
  local_90[0] = (uint *)0x0;
  local_80 = 0;
  lVar12 = 0;
  FUN_9800dcf0(auStack_7f,0,0x13);
  uVar14 = lVar5 + 0x58;
  uVar10 = uVar4 - 0x90;
  uVar7 = 0xffffffff98000974;
  puVar9 = (uint *)uVar14;
  uVar6 = FUN_98005680(lVar5,0xffffffff98000974,puVar9,(undefined4 *)uVar10,in_r7,in_r8,in_r9,in_r10
                      );
  if ((uVar6 & 0xff) == 0) {
    FUN_98006fd0(0xffffffff98000928,uVar7,uVar14,uVar10,in_r7,in_r8,in_r9,in_r10);
  }
  uVar6 = ZEXT48(local_90[0]);
  iVar2 = (int)lVar5;
  if (uVar6 < 0x30) {
    uVar6 = 0xffffffff980008d0;
  }
  else {
    puVar1 = (uint *)*puVar9;
    uVar15 = ZEXT48(puVar1);
    in_r10 = (ulonglong)*puVar1;
    if (in_r10 == 0x58425050) {
      if (puVar1[1] == uVar6) {
        uVar10 = 0;
        uVar14 = 0;
        uVar7 = uVar6 - 0x1c;
        FUN_9801ab20();
        lVar11 = uVar15 + 8;
        in_r10 = uVar4 - 0x80;
        in_r8 = uVar15 + 0x1c;
        do {
          in_r7 = (ulonglong)*(byte *)in_r10;
          in_r9 = *(byte *)lVar11 - in_r7;
          if (in_r9 != 0) break;
          lVar11 = lVar11 + 1;
          in_r10 = in_r10 + 1;
        } while ((int)lVar11 != (int)in_r8);
        if ((int)in_r9 == 0) {
          uVar8 = 0x30;
          FUN_9800d650(lVar5 + 0x5c,uVar15,0x30);
          FUN_98006fd0(0xffffffff980007c4,uVar15,uVar8,uVar10,in_r7,in_r8,in_r9,in_r10);
          FUN_98006fd0(0xffffffff980007ac,(ulonglong)*(byte *)(iVar2 + 0x7c),
                       (ulonglong)*(byte *)(iVar2 + 0x7d),uVar10,in_r7,in_r8,in_r9,in_r10);
          uVar10 = (ulonglong)*(ushort *)(iVar2 + 0x82);
          uVar14 = (ulonglong)*(byte *)(iVar2 + 0x81);
          uVar7 = (ulonglong)*(byte *)(iVar2 + 0x80);
          FUN_98006fd0(0xffffffff9800078c,uVar7,uVar14,uVar10,in_r7,in_r8,in_r9,in_r10);
          in_r10 = (ulonglong)puVar1[10];
          uVar13 = 0;
          uVar15 = in_r10 + *puVar9;
          if (puVar1[0xb] != 0) {
            do {
              local_90[0] = (uint *)uVar15;
              FUN_980061d8(lVar5 + 0x8c,local_90);
              puVar3 = local_90[0];
              uVar10 = ZEXT48(local_90[0]) + 0x19;
              uVar14 = (ulonglong)local_90[0][5];
              uVar7 = (ulonglong)*local_90[0];
              FUN_98006fd0(0xffffffff98000770,uVar7,uVar14,uVar10,in_r7,in_r8,in_r9,in_r10);
              in_r10 = uVar6 + *puVar9;
              uVar15 = *(byte *)(puVar3 + 6) + uVar15 + 0x19;
              if ((in_r10 & 0xffffffff) < (uVar15 & 0xffffffff)) {
                uVar6 = 0xffffffff98000718;
                goto LAB_980064e0;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < puVar1[0xb]);
          }
          FUN_98006fd0(0xffffffff9800076c,uVar7,uVar14,uVar10,in_r7,in_r8,in_r9,in_r10);
          lVar12 = 1;
          goto LAB_9800649c;
        }
        uVar6 = 0xffffffff980007d8;
      }
      else {
        uVar6 = 0xffffffff98000820;
      }
    }
    else {
      uVar6 = 0xffffffff98000880;
    }
  }
LAB_980064e0:
  FUN_98006fd0(uVar6,uVar7,uVar14,uVar10,in_r7,in_r8,in_r9,in_r10);
LAB_9800649c:
  if ((lVar12 == 0) && ((ulonglong)*puVar9 != 0)) {
    FUN_9800dd90((ulonglong)*puVar9);
    *puVar9 = 0;
    FUN_98005cc8(uVar4 - 0x90,iVar2 + 0x8c,(ulonglong)*(uint *)(iVar2 + 0x8c),
                 (ulonglong)*(uint *)(iVar2 + 0x90));
  }
  return lVar12;
}


/* ==== FUN_980064e8 @ 980064e8 ==== */

undefined8 FUN_980064e8(undefined8 param_1,ulonglong param_2)

{
  char *pcVar2;
  ulonglong uVar1;
  
  FUN_98005ac0(param_1,0,0);
  uVar1 = param_2;
  do {
    pcVar2 = (char *)uVar1;
    uVar1 = uVar1 + 1;
  } while (*pcVar2 != '\0');
  FUN_98005fe8(param_1,param_2,(uVar1 - param_2) - 1 & 0xffffffff);
  return param_1;
}


/* ==== FUN_98006558 @ 98006558 ==== */

ulonglong FUN_98006558(undefined8 param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_9800dc7c();
  if ((uVar2 & 0xffffffff) != (param_2 & 0xffffffff)) {
    FUN_98005ac0(uVar2,1,0);
    puVar1 = (undefined4 *)param_2;
    puVar3 = (undefined4 *)uVar2;
    if ((uint)puVar1[5] < 0x10) {
      FUN_9800db80(uVar2,param_2,(ulonglong)(uint)puVar1[4] + 1);
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


/* ==== FUN_980065d8 @ 980065d8 ==== */

void FUN_980065d8(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar6;
  ulonglong uVar7;
  
  puVar5 = (uint *)FUN_9800dc6c();
  if (0x39b0ad < (param_2 & 0xffffffff)) {
    FUN_98008d70(0xffffffff980006f0);
  }
  if ((ulonglong)(uint)((int)(puVar5[2] - *puVar5) / 0x470) < (param_2 & 0xffffffff)) {
    uVar3 = FUN_98005908((uint)param_2);
    uVar1 = puVar5[1];
    uVar4 = uVar3;
    for (uVar7 = (ulonglong)*puVar5; (uVar7 & 0xffffffff) != (ulonglong)uVar1; uVar7 = uVar7 + 0x470
        ) {
      if ((uVar4 & 0xffffffff) != 0) {
        FUN_9800d650(uVar4,uVar7,0x470);
      }
      uVar4 = uVar4 + 0x470;
    }
    uVar1 = *puVar5;
    uVar4 = (ulonglong)uVar1;
    uVar2 = puVar5[1];
    if (uVar4 != 0) {
      if (uVar4 != uVar2) {
        uVar7 = uVar4;
        do {
          uVar7 = uVar7 + 0x470;
        } while ((uVar7 & 0xffffffff) != (ulonglong)uVar2);
      }
      thunk_FUN_9800dd90(uVar4);
    }
    uVar6 = (uint)uVar3;
    *puVar5 = uVar6;
    puVar5[2] = (uint)param_2 * 0x470 + uVar6;
    puVar5[1] = ((int)(uVar2 - uVar1) / 0x470) * 0x470 + uVar6;
  }
  return;
}


/* ==== FUN_980066c8 @ 980066c8 ==== */

undefined8 FUN_980066c8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar5;
  ulonglong uVar3;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar4;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 in_r10;
  undefined8 uVar18;
  uint auStack_4f [19];
  
  lVar1 = FUN_9800dc74();
  uVar18 = 0;
  FUN_9800dcf0(auStack_4f,0,0x13);
  uVar17 = 0;
  uVar15 = 0x80;
  uVar13 = 3;
  uVar11 = 0;
  uVar10 = 1;
  uVar2 = FUN_98008768(param_2,0xffffffff80000000,1,0,3,0x80);
  if ((int)uVar2 == -1) {
    iVar5 = thunk_FUN_98008b10();
    FUN_98006fd0(0xffffffff98000ad4,(longlong)iVar5,uVar10,uVar11,uVar13,uVar15,uVar17,in_r10);
    return 0;
  }
  uVar3 = FUN_98008700(uVar2,(undefined4 *)0x0);
  if (((uVar3 & 0xffffffff) < 0x18) || ((int)uVar3 == -1)) {
    iVar5 = thunk_FUN_98008b10();
    uVar3 = (ulonglong)iVar5;
    uVar2 = 0xffffffff98000988;
  }
  else {
    puVar6 = FUN_9800ddf0();
    puVar7 = (uint *)lVar1;
    *puVar7 = (uint)puVar6;
    if (puVar6 == (uint *)0x0) {
      uVar2 = 0xffffffff98000a90;
    }
    else {
      FUN_9800dcf0(puVar6,0,uVar3);
      uVar13 = 0;
      uVar11 = ZEXT48(&stack0x00000000) - 0x60;
      uVar10 = uVar3;
      uVar4 = FUN_98008580(uVar2,(ulonglong)*puVar7,uVar3,uVar11,0);
      if ((int)uVar4 != 0) {
        uVar11 = (ulonglong)*puVar7;
        uVar15 = 0;
        uVar13 = 0;
        lVar8 = uVar3 - 0x14;
        FUN_9801ab20();
        uVar2 = ZEXT48(&stack0x00000000) - 0x50;
        uVar10 = uVar11 + 0x14;
        do {
          uVar14 = (ulonglong)*(byte *)uVar2;
          uVar16 = *(byte *)uVar11 - uVar14;
          if (uVar16 != 0) break;
          uVar11 = uVar11 + 1;
          uVar2 = uVar2 + 1;
        } while ((int)uVar11 != (int)uVar10);
        if ((int)uVar16 == 0) {
          uVar11 = (ulonglong)*puVar7;
          uVar12 = 0;
          uVar13 = FUN_9800b960(lVar1 + 8,uVar11,uVar3,0);
          pbVar9 = (byte *)uVar11;
          if ((int)uVar13 == 0) {
            iVar5 = FUN_9800c648((int)(lVar1 + 8));
            uVar11 = FUN_9800c670((longlong)iVar5,pbVar9,uVar3,uVar12,uVar14,uVar16,uVar10,uVar2);
            FUN_98006fd0(0xffffffff980009c4,(longlong)iVar5,uVar11,uVar12,uVar14,uVar16,uVar10,uVar2
                        );
          }
          else {
            uVar10 = FUN_980062b0();
            if ((uVar10 & 0xff) != 0) {
              uVar18 = 1;
            }
          }
        }
        else {
          FUN_98006fd0(0xffffffff98000a00,lVar8,uVar13,uVar15,uVar14,uVar16,uVar10,uVar2);
        }
        goto LAB_980068a0;
      }
      iVar5 = thunk_FUN_98008b10();
      uVar3 = (ulonglong)iVar5;
      uVar2 = 0xffffffff98000a54;
    }
  }
  FUN_98006fd0(uVar2,uVar3,uVar10,uVar11,uVar13,uVar15,uVar17,in_r10);
LAB_980068a0:
  FUN_98008538();
  return uVar18;
}


/* ==== FUN_980068b8 @ 980068b8 ==== */

undefined8
FUN_980068b8(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
            undefined8 param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar4;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  uint local_50;
  uint local_40;
  uint local_3c;
  
  uVar4 = ZEXT48(&stack0x00000000);
  lVar2 = FUN_9800dc78();
  uVar10 = uVar4 - 0x60;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = FUN_9800c2e0(lVar2 + 8,param_2,0,0,(uint *)uVar10);
  if ((int)uVar3 == 0) {
    FUN_98006fd0(0xffffffff980005f8,param_2,uVar7,uVar9,uVar10,param_6,param_7,param_8);
  }
  else {
    pbVar6 = (byte *)0x0;
    iVar5 = (int)(lVar2 + 8);
    uVar8 = param_3;
    uVar3 = FUN_9800c850(iVar5,0,param_3);
    if ((int)uVar3 != 0) {
      FUN_980064e8(uVar4 - 0x50,param_3 + 0x50);
      uVar10 = (ulonglong)local_50;
      uVar9 = uVar10;
      if (local_3c < 0x10) {
        uVar9 = uVar4 - 0x50;
      }
      if (local_3c < 0x10) {
        uVar10 = uVar4 - 0x50;
      }
      if ((uVar10 & 0xffffffff) != (uVar9 + local_40 & 0xffffffff)) {
        lVar11 = (uVar9 + local_40) - uVar10;
        do {
          if (*(char *)uVar10 == '/') {
            *(char *)uVar10 = '\\';
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar1 = (int)lVar2;
      piVar13 = (int *)(iVar1 + 0x8c);
      uVar12 = 0;
      iVar5 = *(int *)(iVar1 + 0x90) - *(int *)(iVar1 + 0x8c) >> 2;
      if (iVar5 != 0) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_98008da8(0xffffffff980006bc);
        }
        do {
          iVar5 = FUN_9801ab30();
          if (iVar5 == 0) {
            if ((uint)(*(int *)(iVar1 + 0x90) - *piVar13 >> 2) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_98008da8(0xffffffff980006bc);
            }
            FUN_9800d650(param_3 + 0x458,(ulonglong)*(uint *)(*piVar13 + uVar12 * 4),0x14);
            if ((uint)(*(int *)(iVar1 + 0x90) - *piVar13 >> 2) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_98008da8(0xffffffff980006bc);
            }
            *(undefined4 *)((int)param_3 + 0x46c) =
                 *(undefined4 *)(*(int *)(*piVar13 + uVar12 * 4) + 0x14);
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(*(int *)(iVar1 + 0x90) - *piVar13 >> 2));
      }
      FUN_98005ac0(uVar4 - 0x50,1,0);
      return 1;
    }
    iVar5 = FUN_9800c648(iVar5);
    uVar4 = FUN_9800c670((longlong)iVar5,pbVar6,uVar8,uVar9,uVar10,param_6,param_7,param_8);
    FUN_98006fd0(0xffffffff98000b18,(longlong)iVar5,uVar4,uVar9,uVar10,param_6,param_7,param_8);
  }
  return 0;
}


/* ==== FUN_98006ac8 @ 98006ac8 ==== */

void FUN_98006ac8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  piVar2 = (int *)param_1;
  uVar1 = (piVar2[1] - *piVar2) / 0x470;
  if ((0x39b0adU - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    FUN_98008d70(0xffffffff980006f0);
    return;
  }
  uVar4 = (int)uVar1 + param_2;
  uVar1 = (piVar2[2] - *piVar2) / 0x470;
  if ((uVar4 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar3 = 0;
  if ((ulonglong)uVar1 <= (0x39b0ad - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar3 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    uVar3 = uVar4;
  }
  FUN_980065d8(param_1,uVar3);
  return;
}


/* ==== FUN_98006b40 @ 98006b40 ==== */

bool FUN_98006b40(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_r10;
  bool bVar9;
  byte local_a0 [160];
  
  uVar1 = ZEXT48(&stack0x00000000);
  lVar2 = FUN_9800dc74();
  bVar9 = false;
  FUN_980064e8(uVar1 - 0x90,param_3);
  local_a0[0] = 0x5c;
  uVar3 = FUN_980059d8(uVar1 - 0x90,local_a0,0xffffffffffffffff,1);
  if ((int)uVar3 != -1) {
    FUN_98005ac0(uVar1 - 0x70,0,0);
    FUN_98005e88(uVar1 - 0x70,uVar1 - 0x90,0,uVar3 + 1);
    FUN_98006558(uVar1 - 0x90,uVar1 - 0x70);
    FUN_98005ac0(uVar1 - 0x70,1,0);
  }
  FUN_98006180(uVar1 - 0x50,uVar1 - 0x90);
  uVar3 = FUN_980082f0();
  if ((uVar3 & 0xff) == 0) {
    bVar9 = false;
  }
  else {
    uVar8 = 0;
    uVar7 = 0x80;
    uVar6 = 2;
    uVar5 = 0;
    uVar3 = FUN_98008768(param_3,0x40000000,0,0,2,0x80);
    if ((int)uVar3 == -1) {
      iVar4 = thunk_FUN_98008b10();
      FUN_98006fd0(0xffffffff98000b98,param_3,(longlong)iVar4,uVar5,uVar6,uVar7,uVar8,in_r10);
    }
    else {
      uVar5 = 0;
      iVar4 = FUN_9800d1d8(lVar2 + 8,param_2,0xffffffff980053d8,uVar3,0);
      bVar9 = iVar4 != 0;
      if (!bVar9) {
        iVar4 = FUN_9800c648((int)(lVar2 + 8));
        FUN_98006fd0(0xffffffff98000b5c,param_2,(longlong)iVar4,uVar3,uVar5,uVar7,uVar8,in_r10);
      }
      FUN_98008538();
    }
  }
  FUN_98005ac0(uVar1 - 0x90,1,0);
  return bVar9;
}


/* ==== FUN_98006cb0 @ 98006cb0 ==== */

void FUN_98006cb0(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  puVar3 = (uint *)param_1;
  uVar1 = puVar3[1];
  if (((ulonglong)uVar1 <= (param_2 & 0xffffffff)) ||
     (bVar4 = true, (param_2 & 0xffffffff) < (ulonglong)*puVar3)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar2 = *puVar3;
    if (uVar1 == puVar3[2]) {
      FUN_98006ac8(param_1,1);
    }
    uVar1 = puVar3[1];
    param_2 = (longlong)((int)((int)param_2 - uVar2) / 0x470) * 0x470 + (ulonglong)*puVar3;
  }
  else {
    if (uVar1 == puVar3[2]) {
      FUN_98006ac8(param_1,1);
    }
    uVar1 = puVar3[1];
  }
  if ((ulonglong)uVar1 != 0) {
    FUN_9800d650((ulonglong)uVar1,param_2,0x470);
  }
  puVar3[1] = puVar3[1] + 0x470;
  return;
}


/* ==== FUN_98006d90 @ 98006d90 ==== */

undefined8
FUN_98006d90(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
            ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar7;
  ulonglong uVar3;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_520;
  uint local_510;
  uint local_50c;
  uint auStack_4b8 [281];
  undefined4 local_54;
  
  uVar3 = ZEXT48(&stack0x00000000);
  iVar4 = FUN_9800dc68();
  iVar5 = iVar4 + 8;
  uVar11 = 0;
  iVar6 = FUN_9800c838(iVar5);
  if (iVar6 != 0) {
    do {
      FUN_9800dcf0(auStack_4b8,0,0x468);
      uVar9 = uVar3 - 0x4c0;
      uVar2 = uVar11;
      uVar1 = FUN_9800c850(iVar5,uVar11,uVar9);
      pbVar8 = (byte *)uVar2;
      if ((int)uVar1 == 0) {
        iVar4 = FUN_9800c648(iVar5);
        uVar3 = FUN_9800c670((longlong)iVar4,pbVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
        FUN_98006fd0(0xffffffff98000be0,(longlong)iVar4,uVar3,param_4,param_5,param_6,param_7,
                     param_8);
        return 0;
      }
      if ((param_2 & 0xffffffff) == 0) {
LAB_98006e2c:
        FUN_980064e8(uVar3 - 0x520,uVar3 - 0x470);
        param_7 = (ulonglong)local_50c;
        param_6 = (ulonglong)local_520;
        uVar2 = param_6;
        if (param_7 < 0x10) {
          uVar2 = uVar3 - 0x520;
        }
        uVar9 = param_6;
        if (param_7 < 0x10) {
          uVar9 = uVar3 - 0x520;
        }
        if ((uVar9 & 0xffffffff) != (uVar2 + local_510 & 0xffffffff)) {
          lVar10 = (uVar2 + local_510) - uVar9;
          do {
            if (*(char *)uVar9 == '/') {
              *(char *)uVar9 = '\\';
            }
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        param_8 = (ulonglong)*(uint *)(iVar4 + 0x8c);
        uVar2 = 0;
        iVar6 = (int)(*(int *)(iVar4 + 0x90) - *(uint *)(iVar4 + 0x8c)) >> 2;
        if (iVar6 != 0) {
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_98008da8(0xffffffff980006bc);
          }
          do {
            param_5 = 1;
            param_4 = 0xffffffffffffffff;
            iVar6 = FUN_9801ab30();
            if (iVar6 == 0) {
              uVar7 = *(uint *)(iVar4 + 0x8c);
              if ((ulonglong)(uint)((int)(*(int *)(iVar4 + 0x90) - uVar7) >> 2) <=
                  (uVar2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
                FUN_98008da8(0xffffffff980006bc);
              }
              param_8 = (uVar2 & 0x3fffffff) << 2;
              iVar6 = (int)param_8;
              FUN_9800d650(uVar3 - 0x68,(ulonglong)*(uint *)(iVar6 + uVar7),0x14);
              local_54 = *(undefined4 *)(*(int *)(iVar6 + uVar7) + 0x14);
              break;
            }
            uVar7 = *(uint *)(iVar4 + 0x8c);
            param_8 = (ulonglong)uVar7;
            uVar2 = uVar2 + 1;
          } while ((uVar2 & 0xffffffff) <
                   (ulonglong)(uint)((int)(*(int *)(iVar4 + 0x90) - uVar7) >> 2));
        }
        FUN_98006cb0(param_3,uVar3 - 0x4c0);
        FUN_98005ac0(uVar3 - 0x520,1,0);
      }
      else {
        uVar2 = FUN_980064e8(uVar3 - 0x500,param_2);
        uVar1 = FUN_980064e8(uVar3 - 0x4e0,uVar3 - 0x470);
        uVar2 = FUN_980081a8(uVar1,uVar2,1);
        if ((uVar2 & 0xff) == 1) goto LAB_98006e2c;
      }
      uVar11 = uVar11 + 1;
      uVar7 = FUN_9800c838(iVar5);
    } while ((uVar11 & 0xffffffff) < (ulonglong)uVar7);
  }
  return 1;
}


/* ==== FUN_98006fd0 @ 98006fd0 ==== */

undefined8
FUN_98006fd0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uStack00000014;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uStack00000014 = (undefined4)param_1;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  uVar1 = FUN_9800e040(0xffffffff9801c480,0x400,param_1,ZEXT48(&stack0x00000018));
  if (DAT_9801c880 != 0) {
    (**(code **)(DAT_9801c880 + 0x14))(*(undefined4 *)(DAT_9801c880 + 0xc),0xffffffff9801c480);
  }
  return uVar1;
}


/* ==== FUN_98007070 @ 98007070 ==== */

undefined8 FUN_98007070(void)

{
  return 1;
}


/* ==== FUN_98007078 @ 98007078 ==== */

ulonglong FUN_98007078(uint param_1)

{
  ulonglong uVar1;
  undefined **local_10;
  undefined4 local_c;
  
  uVar1 = 0;
  if ((param_1 != 0) &&
     ((0x9249249 < param_1 || (uVar1 = FUN_98008fd0(), (uVar1 & 0xffffffff) == 0)))) {
    local_c = 0;
    local_10 = &PTR_DAT_9800050c;
    uVar1 = FUN_98005418((int *)&local_10);
  }
  return uVar1;
}


/* ==== FUN_980070e0 @ 980070e0 ==== */

undefined8 FUN_980070e0(void)

{
  if ((DAT_9801c928 & 1) == 0) {
    DAT_9801c928 = DAT_9801c928 | 1;
    FUN_980060a8((undefined4 *)&DAT_9801c888);
    FUN_9800e1b8();
  }
  return 0xffffffff9801c888;
}


/* ==== FUN_98007140 @ 98007140 ==== */

/* WARNING: Removing unreachable block (ram,0x98007350) */

undefined8 FUN_98007140(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined2 local_4b8 [2];
  undefined2 local_4b4;
  undefined2 local_4b2;
  undefined4 local_4b0;
  undefined2 *local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a0;
  uint auStack_498 [8];
  ulonglong local_478;
  
  uVar5 = ZEXT48(&stack0x00000000);
  FUN_9800dc74();
  local_4b8[0] = 0;
  local_4b4 = 0;
  uVar16 = 0;
  local_4b2 = 0;
  local_4a0 = 0;
  FUN_9800dcf0(auStack_498,0,0x468);
  FUN_9801ab80();
  local_4b0 = 0;
  local_4ac = local_4b8;
  local_4a8 = 0x40;
  uVar15 = 1;
  uVar13 = 3;
  uVar12 = 0x80;
  uVar11 = 0;
  lVar10 = uVar5 - 0x4c8;
  lVar8 = uVar5 - 0x4b0;
  lVar2 = FUN_9801ab70();
  if (lVar2 == 0) {
    uVar3 = FUN_980070e0();
    uVar9 = uVar5 - 0x4a0;
    uVar17 = 0xffffffff98000d64;
    uVar4 = FUN_980068b8(uVar3,0xffffffff98000d64,uVar9,lVar10,uVar11,uVar12,uVar13,uVar15);
    if ((uVar4 & 0xff) == 0) {
      uVar5 = 0xffffffff98000d20;
    }
    else {
      uVar4 = local_478 & 0xffffffff;
      if (uVar4 == 0) {
        uVar5 = 0xffffffff98000ce0;
      }
      else if (uVar4 < 0x7c001) {
        lVar10 = 4;
        uVar14 = uVar4 + 0x1ff & 0xfffffe00;
        uVar9 = 0x80;
        uVar17 = 0xffffffffffffffff;
        uVar6 = FUN_98008960();
        if (uVar6 != 0) {
          uVar11 = FUN_980070e0();
          uVar12 = FUN_98005540(uVar11,0xffffffff98000d64,uVar6,uVar4,uVar5 - 0x4cc,uVar12,uVar13,
                                uVar15);
          if (((uVar12 & 0xff) != 0) && (uVar4 == 0)) {
            uVar7 = FUN_9801ab60();
            puVar1 = (undefined4 *)uVar6;
            puVar1[3] = uVar7;
            *puVar1 = 0x58425050;
            uVar11 = FUN_980070e0();
            uVar7 = *(undefined4 *)((int)uVar11 + 0x80);
            puVar1[2] = (int)local_478;
            lVar10 = uVar5 - 0x4c0;
            puVar1[1] = uVar7;
            lVar8 = uVar5 - 0x4c8;
            uVar3 = 0;
            uVar11 = 0;
            lVar2 = FUN_9801ab50();
            if (lVar2 == 0) {
              uVar16 = 1;
            }
            else {
              FUN_98006fd0(0xffffffff98000c24,lVar2,uVar11,uVar3,lVar8,uVar6,uVar14,lVar10);
            }
          }
          FUN_980089e8();
          return uVar16;
        }
        uVar5 = 0xffffffff98000c68;
      }
      else {
        uVar5 = 0xffffffff98000cac;
      }
    }
    FUN_98006fd0(uVar5,uVar17,uVar9,lVar10,uVar11,uVar12,uVar13,uVar15);
  }
  else {
    FUN_98006fd0(0xffffffff98000d88,lVar2,lVar8,lVar10,uVar11,uVar12,uVar13,uVar15);
  }
  return 0;
}


/* ==== FUN_98007360 @ 98007360 ==== */

undefined8 FUN_98007360(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint auStack_14f [83];
  
  FUN_9800dc6c();
  uVar13 = 0;
  uVar12 = 0;
  FUN_9800dcf0(auStack_14f,0,0x103);
  uVar10 = (ulonglong)param_2[1];
  if ((int)(param_2[1] - *param_2) / 0x1c == 0) {
    uVar12 = 1;
  }
  else {
    uVar9 = 0;
    uVar8 = 0x80;
    uVar7 = 2;
    lVar6 = 0;
    uVar5 = 0;
    uVar2 = FUN_98008768(0xffffffff98000e78,0x40000000,0,0,2,0x80);
    if ((int)uVar2 == -1) {
      iVar4 = thunk_FUN_98008b10();
      FUN_98006fd0(0xffffffff98000e38,(longlong)iVar4,uVar5,lVar6,uVar7,uVar8,uVar9,uVar10);
    }
    else {
      uVar10 = (ulonglong)*param_2;
      lVar11 = param_2[1] - uVar10;
      uVar1 = 0;
      if ((int)lVar11 / 0x1c != 0) {
        iVar4 = 0;
        do {
          uVar10 = (ulonglong)*(uint *)(iVar4 + (int)uVar10 + 0x14);
          uVar5 = FUN_9800e1e0(ZEXT48(&stack0x00000000) - 0x150,0x104,0xffffffff98000e34);
          uVar7 = 0;
          lVar6 = ZEXT48(&stack0x00000000) - 0x160;
          uVar3 = FUN_98008410();
          if ((int)uVar3 == 0) {
            iVar4 = thunk_FUN_98008b10();
            FUN_98006fd0(0xffffffff98000dd8,(longlong)iVar4,uVar5,lVar6,uVar7,uVar8,uVar9,uVar10);
            goto LAB_98007490;
          }
          uVar10 = (ulonglong)*param_2;
          uVar13 = uVar13 + 1;
          iVar4 = iVar4 + 0x1c;
          lVar11 = param_2[1] - uVar10;
          uVar1 = (int)lVar11 / 0x1c;
        } while (uVar13 < uVar1);
      }
      FUN_98006fd0(0xffffffff98000e10,(longlong)(int)uVar1,uVar5,lVar6,uVar7,uVar8,uVar9,lVar11);
      uVar12 = 1;
LAB_98007490:
      FUN_98008538();
    }
  }
  return uVar12;
}


/* ==== FUN_980074c0 @ 980074c0 ==== */

ulonglong FUN_980074c0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = FUN_9800dc74();
  puVar1 = (uint *)param_2;
  if ((param_3 & 0xffffffff) <= (ulonglong)puVar1[4]) {
    uVar6 = puVar1[4] - param_3;
    if ((uVar6 & 0xffffffff) < (param_4 & 0xffffffff)) {
      param_4 = uVar6;
    }
    puVar2 = (uint *)uVar3;
    uVar6 = (ulonglong)puVar2[4];
    if ((-uVar6 - 1 & 0xffffffff) <= (param_4 & 0xffffffff)) {
      uVar6 = 0xffffffff98000000;
      FUN_98008d70(0xffffffff98000704);
    }
    if ((param_4 & 0xffffffff) != 0) {
      bVar4 = FUN_98005d20(uVar3,uVar6 + param_4,0);
      if (bVar4 != 0) {
        if (0xf < puVar1[5]) {
          param_2 = (ulonglong)*puVar1;
        }
        uVar5 = uVar3;
        if (0xf < puVar2[5]) {
          uVar5 = (ulonglong)*puVar2;
        }
        FUN_9800d650(puVar2[4] + uVar5,param_2 + param_3,param_4);
        uVar7 = (uint)(uVar6 + param_4);
        puVar2[4] = uVar7;
        uVar6 = uVar3;
        if (0xf < puVar2[5]) {
          uVar6 = (ulonglong)*puVar2;
        }
        *(undefined1 *)((int)uVar6 + uVar7) = 0;
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_98008da8(0xffffffff980006d8);
}


/* ==== FUN_980075b8 @ 980075b8 ==== */

void FUN_980075b8(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  
  puVar2 = (uint *)param_1;
  uVar1 = puVar2[4];
  if ((((ulonglong)uVar1 <= (param_2 & 0xffffffff)) &&
      ((ulonglong)puVar2[5] != (param_2 & 0xffffffff))) &&
     (bVar3 = FUN_98005d20(param_1,param_2,1), bVar3 != 0)) {
    puVar2[4] = uVar1;
    if (0xf < puVar2[5]) {
      param_1 = (ulonglong)*puVar2;
    }
    *(undefined1 *)((int)param_1 + uVar1) = 0;
  }
  return;
}


/* ==== FUN_98007630 @ 98007630 ==== */

ulonglong FUN_98007630(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar3;
  
  uVar1 = FUN_9800dc78();
  puVar3 = (uint *)uVar1;
  uVar2 = FUN_98005848(puVar3,(undefined4 *)param_2);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = (ulonglong)puVar3[4];
    if ((-uVar2 - 1 & 0xffffffff) <= (param_3 & 0xffffffff)) {
      uVar2 = 0xffffffff98000000;
      FUN_98008d70(0xffffffff98000704);
    }
    if ((param_3 & 0xffffffff) != 0) {
      bVar4 = FUN_98005d20(uVar1,uVar2 + param_3,0);
      if (bVar4 != 0) {
        uVar5 = uVar1;
        if (0xf < puVar3[5]) {
          uVar5 = (ulonglong)*puVar3;
        }
        FUN_9800d650(puVar3[4] + uVar5,param_2,param_3);
        uVar6 = (uint)(uVar2 + param_3);
        puVar3[4] = uVar6;
        uVar2 = uVar1;
        if (0xf < puVar3[5]) {
          uVar2 = (ulonglong)*puVar3;
        }
        *(undefined1 *)((int)uVar2 + uVar6) = 0;
      }
    }
  }
  else {
    uVar2 = uVar1;
    if (0xf < puVar3[5]) {
      uVar2 = (ulonglong)*puVar3;
    }
    uVar1 = FUN_980074c0(uVar1,uVar1,param_2 - uVar2,param_3);
  }
  return uVar1;
}


/* ==== FUN_98007720 @ 98007720 ==== */

void FUN_98007720(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)*param_1;
  if (uVar1 != 0) {
    if (uVar1 != param_1[1]) {
      uVar2 = uVar1;
      do {
        uVar2 = uVar2 + 0x470;
      } while ((uVar2 & 0xffffffff) != (ulonglong)param_1[1]);
    }
    thunk_FUN_9800dd90(uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== FUN_98007788 @ 98007788 ==== */

undefined8 FUN_98007788(undefined8 param_1,ulonglong param_2)

{
  FUN_98005ac0(param_1,0,0);
  FUN_98006558(param_1,param_2);
  return param_1;
}


/* ==== FUN_980077d8 @ 980077d8 ==== */

ulonglong FUN_980077d8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char *pcVar3;
  ulonglong uVar2;
  
  uVar1 = FUN_9800dc7c();
  FUN_98005ac0(uVar1,0,0);
  uVar2 = param_2;
  do {
    pcVar3 = (char *)uVar2;
    uVar2 = uVar2 + 1;
  } while (*pcVar3 != '\0');
  FUN_980075b8(uVar1,((uVar2 - param_2) - 1 & 0xffffffff) +
                     (ulonglong)*(uint *)((int)param_3 + 0x10));
  uVar2 = param_2;
  do {
    pcVar3 = (char *)uVar2;
    uVar2 = uVar2 + 1;
  } while (*pcVar3 != '\0');
  FUN_98007630(uVar1,param_2,(uVar2 - param_2) - 1 & 0xffffffff);
  FUN_980074c0(uVar1,param_3,0,0xffffffffffffffff);
  return uVar1;
}


/* ==== FUN_98007878 @ 98007878 ==== */

void FUN_98007878(ulonglong param_1,ulonglong param_2)

{
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    do {
      FUN_98005ac0(param_1,1,0);
      param_1 = param_1 + 0x1c;
    } while ((param_1 & 0xffffffff) != (param_2 & 0xffffffff));
  }
  return;
}


/* ==== FUN_980078d0 @ 980078d0 ==== */

void FUN_980078d0(uint *param_1)

{
  if ((ulonglong)*param_1 != 0) {
    FUN_98007878((ulonglong)*param_1,(ulonglong)param_1[1]);
    thunk_FUN_9800dd90((ulonglong)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== FUN_98007928 @ 98007928 ==== */

void FUN_98007928(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar4 = (uint *)FUN_9800dc6c();
  if (0x9249249 < (param_2 & 0xffffffff)) {
    FUN_98008d70(0xffffffff980006f0);
  }
  if ((ulonglong)(uint)((int)(puVar4[2] - *puVar4) / 0x1c) < (param_2 & 0xffffffff)) {
    uVar3 = FUN_98007078((uint)param_2);
    uVar1 = puVar4[1];
    uVar5 = uVar3;
    for (uVar7 = (ulonglong)*puVar4; (uVar7 & 0xffffffff) != (ulonglong)uVar1; uVar7 = uVar7 + 0x1c)
    {
      if ((uVar5 & 0xffffffff) != 0) {
        FUN_98007788(uVar5,uVar7);
      }
      uVar5 = uVar5 + 0x1c;
    }
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    if ((ulonglong)uVar1 != 0) {
      FUN_98007878((ulonglong)uVar1,(ulonglong)uVar2);
      thunk_FUN_9800dd90((ulonglong)*puVar4);
    }
    uVar6 = (uint)uVar3;
    *puVar4 = uVar6;
    puVar4[2] = (uint)param_2 * 0x1c + uVar6;
    puVar4[1] = ((int)(uVar2 - uVar1) / 0x1c) * 0x1c + uVar6;
  }
  return;
}


/* ==== FUN_98007a08 @ 98007a08 ==== */

void FUN_98007a08(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  piVar2 = (int *)param_1;
  uVar1 = (piVar2[1] - *piVar2) / 0x1c;
  if ((0x9249249U - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    FUN_98008d70(0xffffffff980006f0);
    return;
  }
  uVar4 = (int)uVar1 + param_2;
  uVar1 = (piVar2[2] - *piVar2) / 0x1c;
  if ((uVar4 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar3 = 0;
  if ((ulonglong)uVar1 <= (0x9249249 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar3 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    uVar3 = uVar4;
  }
  FUN_98007928(param_1,uVar3);
  return;
}


/* ==== FUN_98007a80 @ 98007a80 ==== */

void FUN_98007a80(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  ulonglong uVar5;
  
  puVar3 = (uint *)param_1;
  uVar1 = puVar3[1];
  if (((ulonglong)uVar1 <= (param_2 & 0xffffffff)) ||
     (bVar4 = true, (param_2 & 0xffffffff) < (ulonglong)*puVar3)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar2 = *puVar3;
    if (uVar1 == puVar3[2]) {
      FUN_98007a08(param_1,1);
    }
    uVar5 = (ulonglong)puVar3[1];
    if (uVar5 == 0) goto LAB_98007b34;
    param_2 = (longlong)((int)((int)param_2 - uVar2) / 0x1c) * 0x1c + (ulonglong)*puVar3;
  }
  else {
    if (uVar1 == puVar3[2]) {
      FUN_98007a08(param_1,1);
    }
    uVar5 = (ulonglong)puVar3[1];
    if (uVar5 == 0) goto LAB_98007b34;
  }
  FUN_98007788(uVar5,param_2);
LAB_98007b34:
  puVar3[1] = puVar3[1] + 0x1c;
  return;
}


/* ==== FUN_98007b58 @ 98007b58 ==== */

undefined8
FUN_98007b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
            ulonglong param_5,ulonglong param_6,ulonglong param_7)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar7;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar8;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  undefined4 uStack_170;
  uint local_130;
  int local_12c;
  undefined4 local_128;
  uint local_120;
  uint local_110;
  uint local_10c;
  uint local_100;
  int local_fc;
  undefined4 local_f8;
  uint local_f0;
  uint local_dc;
  longlong local_d0;
  ulonglong local_c8;
  
  uVar6 = ZEXT48(&stack0x00000000);
  uVar2 = FUN_9800dc54();
  local_130 = 0;
  uVar10 = 0xffffffff98000000;
  iVar7 = (int)uVar2;
  local_12c = 0;
  uVar12 = 0;
  local_128 = 0;
  dVar15 = (double)DAT_98000f10;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  DAT_9801c880 = iVar7;
  (**(code **)(iVar7 + 0x10))(dVar15,*(undefined4 *)(iVar7 + 0xc));
  uVar3 = FUN_980070e0();
  uVar4 = FUN_980066c8(uVar3,param_2);
  if ((uVar4 & 0xff) != 0) {
    uVar3 = FUN_980070e0();
    uVar4 = FUN_98006d90(uVar3,0xffffffff98000ee8,uVar6 - 0x130,param_4,param_5,param_6,param_7,
                         uVar10);
    if ((uVar4 & 0xff) != 0) {
      (**(code **)(iVar7 + 0x10))(dVar15,*(undefined4 *)(iVar7 + 0xc));
      uVar4 = FUN_98007140();
      if ((uVar4 & 0xff) != 0) {
        uVar14 = 0;
        uVar1 = (int)(local_12c - local_130) / 0x470;
        if (uVar1 != 0) {
          uVar3 = 0xffffffff98000000;
          lVar13 = 0;
          if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_98008da8(0xffffffff980006bc);
          }
          do {
            lVar9 = (longlong)(int)uVar1;
            FUN_980064e8(uVar6 - 0xf0,lVar13 + (ulonglong)local_130 + 0x5d);
            FUN_980077d8(uVar6 - 0x120,0xffffffff98000ea0,uVar6 - 0xf0);
            uVar10 = (ulonglong)local_120;
            uVar4 = uVar10;
            if (local_10c < 0x10) {
              uVar4 = uVar6 - 0x120;
            }
            if (local_10c < 0x10) {
              uVar10 = uVar6 - 0x120;
            }
            if ((uVar10 & 0xffffffff) != (uVar4 + local_110 & 0xffffffff)) {
              lVar11 = (uVar4 + local_110) - uVar10;
              do {
                if (*(char *)uVar10 == '/') {
                  *(char *)uVar10 = '\\';
                }
                uVar10 = uVar10 + 1;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            uVar4 = (ulonglong)local_120;
            if (local_10c < 0x10) {
              uVar4 = uVar6 - 0x120;
            }
            bVar8 = FUN_98007fc0(uVar4);
            if (bVar8) {
              if ((uint)((int)(local_12c - local_130) / 0x470) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_98008da8(0xffffffff980006bc);
              }
              if ((*(uint *)((int)lVar13 + local_130 + 0x46c) & 1) == 0) goto LAB_98007d28;
            }
            else {
LAB_98007d28:
              if ((uint)((int)(local_12c - local_130) / 0x470) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_98008da8(0xffffffff980006bc);
              }
              if ((*(uint *)((int)lVar13 + local_130 + 0x46c) & 2) != 0) {
                uVar4 = FUN_98006180(uVar6 - 0xc0,uVar6 - 0x120);
                FUN_98007a80(uVar6 - 0x100,uVar4);
                FUN_98005ac0(uVar6 - 0xc0,1,0);
                FUN_98007630(uVar6 - 0x120,0xffffffff98000eac,1);
              }
              lVar11 = (longlong)(int)uVar14;
              uVar4 = (ulonglong)local_f0;
              local_c8 = (ulonglong)(uint)((int)(local_12c - local_130) / 0x470);
              if (local_dc < 0x10) {
                uVar4 = uVar6 - 0xf0;
              }
              uVar5 = 0xffffffff98000eb0;
              local_d0 = lVar11;
              (**(code **)(iVar7 + 0x10))
                        (*(undefined4 *)(iVar7 + 0xc),
                         CONCAT44((float)((double)lVar11 / (double)local_c8),uStack_170));
              uVar1 = (int)(local_12c - local_130) / 0x470;
              if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_98008da8(0xffffffff980006bc);
              }
              FUN_98006fd0(0xffffffff98000ec0,lVar13 + (ulonglong)local_130 + 0x50,uVar5,uVar4,lVar9
                           ,uVar3,lVar11,(longlong)(int)uVar1);
              FUN_98006180(uVar6 - 0xa0,uVar6 - 0x120);
              uVar4 = FUN_980082f0();
              if ((uVar4 & 0xff) == 0) {
                FUN_98005ac0(uVar6 - 0x120,1,0);
                FUN_98005ac0(uVar6 - 0xf0,1,0);
                FUN_980078d0(&local_100);
                FUN_98007720(&local_130);
                return 0;
              }
              uVar4 = (ulonglong)local_120;
              if (local_10c < 0x10) {
                uVar4 = uVar6 - 0x120;
              }
              uVar10 = (ulonglong)local_130;
              if ((uint)((int)(local_12c - local_130) / 0x470) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_98008da8(0xffffffff980006bc);
              }
              uVar5 = FUN_980070e0();
              bVar8 = FUN_98006b40(uVar5,lVar13 + uVar10 + 0x50,uVar4);
              if (!bVar8) {
                FUN_98005ac0(uVar6 - 0x120,1,0);
                FUN_98005ac0(uVar6 - 0xf0,1,0);
                goto LAB_98007f00;
              }
            }
            FUN_98005ac0(uVar6 - 0x120,1,0);
            FUN_98005ac0(uVar6 - 0xf0,1,0);
            uVar14 = uVar14 + 1;
            lVar13 = lVar13 + 0x470;
            uVar1 = (int)(local_12c - local_130) / 0x470;
          } while (uVar14 < uVar1);
        }
        (**(code **)(iVar7 + 0x10))(dVar15,*(undefined4 *)(iVar7 + 0xc));
        if (((int)(local_fc - local_100) / 0x1c == 0) ||
           (uVar6 = FUN_98007360(uVar2,&local_100), (uVar6 & 0xff) != 0)) {
          uVar12 = 1;
        }
      }
    }
  }
LAB_98007f00:
  DAT_9801c880 = 0;
  FUN_980078d0(&local_100);
  FUN_98007720(&local_130);
  return uVar12;
}


/* ==== FUN_98007fc0 @ 98007fc0 ==== */

bool FUN_98007fc0(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_98008768(param_1,0xffffffff80000000,1,0,3,0x80);
  bVar1 = (int)uVar2 != -1;
  if (bVar1) {
    FUN_98008538();
  }
  return bVar1;
}


/* ==== FUN_98008010 @ 98008010 ==== */

ulonglong FUN_98008010(undefined8 param_1,byte *param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar5;
  
  uVar2 = FUN_9800dc70();
  puVar1 = (uint *)uVar2;
  if (((param_4 & 0xffffffff) != 0) || ((ulonglong)puVar1[4] < (param_3 & 0xffffffff))) {
    if (((param_3 & 0xffffffff) < (ulonglong)puVar1[4]) &&
       (uVar6 = puVar1[4] - param_3, (param_4 & 0xffffffff) <= (uVar6 & 0xffffffff))) {
      lVar7 = (uVar6 - param_4) + 1;
      uVar6 = uVar2;
      if (0xf < puVar1[5]) {
        uVar6 = (ulonglong)*puVar1;
      }
      lVar8 = uVar6 + param_3;
      while( true ) {
        pbVar5 = FUN_9800e2e0((byte *)lVar8,(int)(char)*param_2,lVar7);
        lVar4 = (longlong)(int)pbVar5;
        if (lVar4 == 0) break;
        lVar3 = FUN_980054e0(pbVar5,param_2,(int)param_4);
        if ((int)lVar3 == 0) {
          if (0xf < puVar1[5]) {
            uVar2 = (ulonglong)*puVar1;
          }
          return lVar4 - uVar2;
        }
        lVar3 = lVar8 - lVar4;
        lVar8 = lVar4 + 1;
        lVar7 = lVar3 + lVar7 + -1;
      }
    }
    param_3 = 0xffffffffffffffff;
  }
  return param_3;
}


/* ==== FUN_980080f8 @ 980080f8 ==== */

longlong FUN_980080f8(undefined8 param_1,byte *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_9800dc74();
  if ((param_4 & 0xffffffff) != 0) {
    puVar2 = (uint *)uVar3;
    uVar1 = puVar2[4];
    if ((param_3 & 0xffffffff) < (ulonglong)uVar1) {
      uVar5 = uVar3;
      if (0xf < puVar2[5]) {
        uVar5 = (ulonglong)*puVar2;
      }
      uVar6 = uVar3;
      if (0xf < puVar2[5]) {
        uVar6 = (ulonglong)*puVar2;
      }
      for (uVar6 = uVar6 + param_3; (uVar6 & 0xffffffff) < (uVar1 + uVar5 & 0xffffffff);
          uVar6 = uVar6 + 1) {
        pbVar4 = FUN_9800e2e0(param_2,(int)*(char *)uVar6,param_4);
        if (pbVar4 != (byte *)0x0) {
          if (0xf < puVar2[5]) {
            uVar3 = (ulonglong)*puVar2;
          }
          return uVar6 - uVar3;
        }
      }
    }
  }
  return -1;
}


/* ==== FUN_980081a8 @ 980081a8 ==== */

undefined8 FUN_980081a8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar3 = FUN_9800dc74();
  puVar1 = (uint *)uVar3;
  puVar2 = (uint *)param_2;
  if (puVar1[4] < puVar2[4]) {
LAB_980081cc:
    FUN_98005ac0(uVar3,1,0);
    FUN_98005ac0(param_2,1,0);
    uVar4 = 0;
  }
  else {
    uVar9 = 0;
    if (puVar2[4] != 0) {
      do {
        if ((param_3 & 0xff) == 1) {
          uVar7 = uVar3;
          if (0xf < puVar1[5]) {
            uVar7 = (ulonglong)*puVar1;
          }
          uVar8 = param_2;
          if (0xf < puVar2[5]) {
            uVar8 = (ulonglong)*puVar2;
          }
          lVar5 = FUN_9800e320((longlong)*(char *)((int)uVar8 + uVar9));
          lVar6 = FUN_9800e320((longlong)*(char *)((int)uVar7 + uVar9));
          if ((int)lVar6 != (int)lVar5) goto LAB_980081cc;
        }
        if ((param_3 & 0xff) == 0) {
          uVar7 = uVar3;
          if (0xf < puVar1[5]) {
            uVar7 = (ulonglong)*puVar1;
          }
          uVar8 = param_2;
          if (0xf < puVar2[5]) {
            uVar8 = (ulonglong)*puVar2;
          }
          if (*(char *)((int)uVar7 + uVar9) != *(char *)((int)uVar8 + uVar9)) {
            uVar4 = 0;
            goto LAB_980082c8;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < puVar2[4]);
    }
    uVar4 = 1;
LAB_980082c8:
    FUN_98005ac0(uVar3,1,0);
    FUN_98005ac0(param_2,1,0);
  }
  return uVar4;
}


/* ==== FUN_980082f0 @ 980082f0 ==== */

undefined8 FUN_980082f0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar5;
  int iVar4;
  ulonglong uVar6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uVar7;
  byte local_50 [16];
  uint local_40;
  uint local_2c;
  
  uVar1 = ZEXT48(&stack0x00000000);
  uVar2 = FUN_9800dc7c();
  local_50[0] = 0x5c;
  uVar3 = FUN_98008010(uVar2,local_50,0,1);
  do {
    uVar3 = FUN_980080f8(uVar2,&DAT_98000f5c,uVar3 + 1,2);
    if ((int)uVar3 == -1) {
      uVar7 = 1;
LAB_980083ec:
      FUN_98005ac0(uVar2,1,0);
      return uVar7;
    }
    FUN_98005ac0(uVar1 - 0x40,0,0);
    uVar6 = uVar3;
    FUN_98005e88(uVar1 - 0x40,uVar2,0,uVar3);
    bVar5 = FUN_980089f8();
    if (!bVar5) {
      iVar4 = thunk_FUN_98008b10();
      if (iVar4 != 0xb7) {
        uVar3 = (ulonglong)local_40;
        if (local_2c < 0x10) {
          uVar3 = uVar1 - 0x40;
        }
        FUN_98006fd0(0xffffffff98000f18,uVar3,(longlong)iVar4,uVar6,in_r7,in_r8,in_r9,in_r10);
        FUN_98005ac0(uVar1 - 0x40,1,0);
        uVar7 = 0;
        goto LAB_980083ec;
      }
    }
    FUN_98005ac0(uVar1 - 0x40,1,0);
  } while( true );
}


/* ==== thunk_FUN_98008b10 @ 98008408 ==== */

undefined4 thunk_FUN_98008b10(void)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_98008410 @ 98008410 ==== */

undefined8 FUN_98008410(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_r6;
  undefined4 *puVar3;
  ulonglong in_r7;
  uint local_30;
  undefined4 local_2c;
  
  FUN_9800dc7c();
  puVar3 = (undefined4 *)in_r6;
  if ((in_r6 & 0xffffffff) != 0) {
    *puVar3 = 0;
  }
  if ((in_r7 & 0xffffffff) == 0) {
    uVar1 = FUN_9801ab50();
    if (((uVar1 != 0x103) || (uVar2 = FUN_9801ab90(), uVar1 = local_30, -1 < (int)uVar2)) &&
       (uVar2 = uVar1, -1 < (int)uVar1)) {
      *puVar3 = local_2c;
      return 1;
    }
    if ((uVar2 & 0xc0000000) == 0x80000000) {
      *puVar3 = local_2c;
    }
  }
  else {
    *(undefined4 *)in_r7 = 0x103;
    uVar1 = FUN_9801ab50();
    if (((uVar1 & 0xc0000000) != 0xc0000000) && (uVar1 != 0x103)) {
      if ((in_r6 & 0xffffffff) != 0) {
        *puVar3 = ((undefined4 *)in_r7)[1];
      }
      return 1;
    }
  }
  FUN_98008ad8();
  return 0;
}


/* ==== FUN_98008538 @ 98008538 ==== */

bool FUN_98008538(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_9801b2e0 + 4))();
  if (iVar1 < 0) {
    FUN_98008ad8();
  }
  return iVar1 >= 0;
}


/* ==== FUN_98008580 @ 98008580 ==== */

undefined8
FUN_98008580(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
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
  
  uVar2 = FUN_9800dc78();
  puVar6 = (undefined4 *)param_4;
  if ((param_4 & 0xffffffff) != 0) {
    *puVar6 = 0;
  }
  if ((param_5 & 0xffffffff) == 0) {
    uVar4 = (**(code **)(DAT_9801b2e0 + 0x10))(uVar2,0,0,0,&local_40,param_2,param_3,0);
    if (((uVar4 != 0x103) || (uVar5 = FUN_9801ab90(), uVar4 = local_40, -1 < (int)uVar5)) &&
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
    iVar3 = (**(code **)(DAT_9801b2e0 + 0x10))
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
  FUN_98008ad8();
  return 0;
}


/* ==== FUN_98008700 @ 98008700 ==== */

ulonglong FUN_98008700(undefined8 param_1,undefined4 *param_2)

{
  bool bVar2;
  ulonglong uVar1;
  undefined4 local_20;
  uint local_1c;
  
  bVar2 = FUN_98008b38(param_1,(undefined8 *)&local_20);
  if (bVar2) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_20;
    }
    uVar1 = (ulonglong)local_1c;
    if (local_1c == 0xffffffff) {
      thunk_FUN_98008ac0(0);
      uVar1 = (ulonglong)local_1c;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


/* ==== FUN_98008768 @ 98008768 ==== */

ulonglong FUN_98008768(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  
  iVar3 = FUN_9800dc70();
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
    FUN_98008ad8();
    return 0xffffffffffffffff;
  }
  FUN_9801ab80();
  if ((local_58[0] < 2) || (bVar1 = true, *(char *)((uint)local_58[0] + iVar3 + -1) != '\\')) {
    bVar1 = false;
  }
  local_48 = 0xfffffffd;
  local_44 = local_58;
  local_40 = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    param_2 = param_2 | 0x10000;
  }
  lVar2 = (**(code **)(DAT_9801b2e0 + 0xc))
                    (local_60,param_2 | 0x100080,&local_48,auStack_50,0,param_6 & 0x7fa7,param_3,
                     uVar5);
  if (lVar2 < 0) {
    FUN_98008ad8();
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
    thunk_FUN_98008ac0(uVar4);
    return 0xffffffffffffffff;
  }
  if ((((param_5 & 0xffffffff) == 2) && (local_4c == 3)) ||
     (((param_5 & 0xffffffff) == 4 && (local_4c == 1)))) {
    uVar4 = 0xb7;
  }
  else {
    uVar4 = 0;
  }
  thunk_FUN_98008ac0(uVar4);
  return (ulonglong)local_60[0];
}


/* ==== FUN_98008960 @ 98008960 ==== */

longlong FUN_98008960(void)

{
  longlong lVar1;
  
  lVar1 = FUN_9801aba0();
  if (lVar1 == 0) {
    thunk_FUN_98008ac0(8);
  }
  return lVar1;
}


/* ==== FUN_980089e8 @ 980089e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980089e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980089f8 @ 980089f8 ==== */

bool FUN_980089f8(void)

{
  int iVar1;
  undefined1 auStack_28 [4];
  char *local_24;
  uint local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  FUN_9801ab80();
  iVar1 = FUN_9801abc0();
  if ((iVar1 == 2) && (local_24 != (char *)0x0)) {
    local_18 = -(uint)(*local_24 != '\\') & 0xfffffffd;
  }
  else {
    local_18 = 0xfffffffd;
  }
  local_14 = auStack_28;
  local_10 = 0x40;
  iVar1 = FUN_9801ab70();
  if (iVar1 < 0) {
    FUN_98008ad8();
  }
  else {
    FUN_9801ab40();
  }
  return iVar1 >= 0;
}


/* ==== FUN_98008ac0 @ 98008ac0 ==== */

void FUN_98008ac0(undefined4 param_1)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98008ad8 @ 98008ad8 ==== */

void FUN_98008ad8(void)

{
  undefined4 uVar1;
  int in_r13;
  
  uVar1 = FUN_9801abd0();
  if (*(int *)(in_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_98008b10 @ 98008b10 ==== */

undefined4 FUN_98008b10(void)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== thunk_FUN_98008ac0 @ 98008b30 ==== */

void thunk_FUN_98008ac0(undefined4 param_1)

{
  int in_r13;
  
  if (*(int *)(in_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98008b38 @ 98008b38 ==== */

bool FUN_98008b38(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [40];
  undefined8 local_28;
  
  iVar1 = (**(code **)(DAT_9801b2e0 + 0x20))(param_1,auStack_60,auStack_50,0x38,0x22);
  if (-1 < iVar1) {
    *param_2 = local_28;
  }
  else {
    FUN_98008ad8();
  }
  return -1 < iVar1;
}


/* ==== FUN_98008ba8 @ 98008ba8 ==== */

int FUN_98008ba8(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar5;
  ulonglong uVar4;
  
  iVar1 = FUN_9800dc7c();
  uVar4 = param_2;
  iVar3 = iVar1;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      pcVar5 = (char *)uVar4;
      uVar4 = uVar4 + 1;
    } while (*pcVar5 != '\0');
    puVar2 = FUN_9800ddf0();
    *(uint **)(iVar1 + 4) = puVar2;
    iVar3 = 0;
    if (puVar2 != (uint *)0x0) {
      iVar3 = FUN_9800e338((undefined1 *)puVar2,((uVar4 - param_2) - 1 & 0xffffffff) + 1,
                           (char *)param_2);
      *(undefined1 *)(iVar1 + 8) = 1;
    }
  }
  return iVar3;
}


/* ==== FUN_98008c30 @ 98008c30 ==== */

void FUN_98008c30(undefined4 *param_1)

{
  *param_1 = &DAT_98000fa4;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_9800dd90((ulonglong)(uint)param_1[1]);
  }
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


/* ==== FUN_98008c88 @ 98008c88 ==== */

undefined8 FUN_98008c88(undefined8 param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = &DAT_98000fa4;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_98008ba8(param_1,param_2);
  *puVar1 = &DAT_98000fa4;
  return param_1;
}


/* ==== FUN_98008ce8 @ 98008ce8 ==== */

ulonglong FUN_98008ce8(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    iVar1 = (int)param_1;
    if (*(char *)(iVar1 + 8) != '\0') {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 4));
    }
    *(undefined1 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    iVar2 = (int)param_2;
    if (*(char *)(iVar2 + 8) == '\0') {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
    }
    else {
      FUN_98008ba8(param_1,(ulonglong)*(uint *)(iVar2 + 4));
    }
  }
  return param_1;
}


/* ==== FUN_98008d48 @ 98008d48 ==== */

int FUN_98008d48(void)

{
  int unaff_r30;
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 4) = *(undefined4 *)(unaff_r30 + 4);
  return unaff_r31;
}


/* ==== FUN_98008d70 @ 98008d70 ==== */

void FUN_98008d70(ulonglong param_1)

{
  undefined *local_20 [8];
  
  FUN_98008c88(ZEXT48(&stack0x00000000) - 0x20,param_1);
  local_20[0] = &DAT_98000fa4;
                    /* WARNING: Subroutine does not return */
  FUN_9800e3f0(local_20,(uint *)&DAT_980042dc);
}


/* ==== FUN_98008da8 @ 98008da8 ==== */

void FUN_98008da8(ulonglong param_1)

{
  undefined *local_20 [8];
  
  FUN_98008c88(ZEXT48(&stack0x00000000) - 0x20,param_1);
  local_20[0] = &DAT_98000fa4;
                    /* WARNING: Subroutine does not return */
  FUN_9800e3f0(local_20,(uint *)&DAT_98004318);
}


/* ==== FUN_98008e28 @ 98008e28 ==== */

ulonglong FUN_98008e28(ulonglong param_1,ulonglong param_2)

{
  FUN_98008c30((undefined4 *)param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_9800dd90(param_1);
  }
  return param_1;
}


/* ==== FUN_98008e78 @ 98008e78 ==== */

ulonglong FUN_98008e78(ulonglong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = &DAT_98000fa4;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_98008ce8(param_1,param_2);
  *puVar1 = &DAT_98000fa4;
  return param_1;
}


/* ==== FUN_98008f20 @ 98008f20 ==== */

ulonglong FUN_98008f20(ulonglong param_1,ulonglong param_2)

{
  *(undefined4 *)param_1 = &DAT_98000fc0;
  FUN_98008c30((undefined4 *)param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_9800dd90(param_1);
  }
  return param_1;
}


/* ==== FUN_98008f78 @ 98008f78 ==== */

ulonglong FUN_98008f78(ulonglong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  *puVar1 = &DAT_98000fa4;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_98008ce8(param_1,param_2);
  *puVar1 = &DAT_98000fc0;
  return param_1;
}


/* ==== FUN_98008fd0 @ 98008fd0 ==== */

void FUN_98008fd0(void)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined1 auStack_20 [16];
  
  do {
    puVar2 = FUN_9800ddf0();
    if (puVar2 != (uint *)0x0) {
      return;
    }
    uVar1 = FUN_9800e4e0();
  } while ((int)uVar1 != 0);
  if ((DAT_9801c940 & 1) == 0) {
    DAT_9801c938 = "bad allocation";
    DAT_9801c940 = DAT_9801c940 | 1;
    DAT_9801c934 = &DAT_98000fc0;
    DAT_9801c93c = 0;
    FUN_9800e1b8();
  }
  FUN_98008f78(ZEXT48(&stack0x00000000) - 0x20,0xffffffff9801c934);
                    /* WARNING: Subroutine does not return */
  FUN_9800e3f0(auStack_20,(uint *)&DAT_98004354);
}


/* ==== FUN_98009088 @ 98009088 ==== */

ulonglong FUN_98009088(ulonglong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  uVar4 = ~param_1;
  if (3 < (param_3 & 0xffffffff)) {
    uVar6 = (param_3 & 0xffffffff) >> 2;
    do {
      bVar1 = *param_2;
      pbVar5 = param_2 + 1;
      param_3 = param_3 - 4;
      pbVar2 = param_2 + 2;
      pbVar3 = param_2 + 3;
      param_2 = param_2 + 4;
      uVar4 = (ulonglong)
              *(uint *)(&DAT_980018f8 + ((uint)(((bVar1 ^ uVar4) & 0xffffffff) << 2) & 0x3fc)) ^
              (uVar4 & 0xffffffff) >> 8;
      uVar4 = (ulonglong)*(uint *)(&DAT_980018f8 + ((uint)((*pbVar5 ^ uVar4) << 2) & 0x3fc)) ^
              uVar4 >> 8;
      uVar4 = (ulonglong)*(uint *)(&DAT_980018f8 + ((uint)((*pbVar2 ^ uVar4) << 2) & 0x3fc)) ^
              uVar4 >> 8;
      uVar4 = (ulonglong)*(uint *)(&DAT_980018f8 + ((uint)((*pbVar3 ^ uVar4) << 2) & 0x3fc)) ^
              uVar4 >> 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    pbVar5 = param_2 + -1;
    do {
      pbVar5 = pbVar5 + 1;
      uVar4 = (ulonglong)
              *(uint *)(&DAT_980018f8 + ((uint)(((*pbVar5 ^ uVar4) & 0xffffffff) << 2) & 0x3fc)) ^
              (uVar4 & 0xffffffff) >> 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return ~uVar4;
}


/* ==== FUN_98009168 @ 98009168 : decompile failed ==== */
/* ==== FUN_98009320 @ 98009320 ==== */

void FUN_98009320(void)

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
  int iVar32;
  ulonglong uVar29;
  longlong lVar30;
  short *psVar33;
  ulonglong uVar31;
  undefined1 *puVar34;
  undefined4 uVar35;
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
    if (unaff_r24 == 0) {
      do {
        for (; unaff_r27 < 3; unaff_r27 = unaff_r27 + 8) {
          if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
            uVar35 = 3;
            goto LAB_9800a400;
          }
          pbVar38 = (byte *)uVar37;
          uVar37 = uVar37 + 1;
          unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
        }
        uVar18 = unaff_r25 & 7;
        unaff_r25 = (unaff_r25 & 0xffffffff) >> 3;
        uVar36 = (uint)unaff_r25;
        puVar5[5] = (int)uVar18;
        unaff_r27 = unaff_r27 - 3;
        uVar18 = uVar18 >> 1;
        puVar5[6] = (int)uVar18;
        if (uVar18 == 0) {
          for (; uVar36 = unaff_r27 & 7, unaff_r27 < uVar36; unaff_r27 = unaff_r27 + 8) {
            if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
              uVar35 = 5;
              goto LAB_9800a400;
            }
            pbVar38 = (byte *)uVar37;
            uVar37 = uVar37 + 1;
            unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
          }
          unaff_r25 = (ulonglong)((uint)unaff_r25 >> uVar36);
          unaff_r27 = unaff_r27 - uVar36;
          for (unaff_r24 = 0; uVar36 = (uint)unaff_r25, (unaff_r24 & 0xffffffff) < 4;
              unaff_r24 = unaff_r24 + 1) {
            if (unaff_r27 == 0) {
              if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                uVar35 = 7;
                goto LAB_9800a400;
              }
              puVar39 = (undefined1 *)uVar37;
              uVar37 = uVar37 + 1;
              *(undefined1 *)((int)puVar5 + (int)unaff_r24 + 0x1edf) = *puVar39;
            }
            else {
              for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
                if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                  uVar35 = 6;
                  goto LAB_9800a400;
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
            uVar35 = 0x27;
            goto LAB_980093c8;
          }
          for (; uVar36 = (uint)unaff_r25, (unaff_r24 & 0xffffffff) != 0; unaff_r24 = unaff_r24 - 1)
          {
            if (unaff_r27 == 0) {
              uVar18 = ZEXT48(in_stack_00000054);
              goto LAB_9800990c;
            }
            for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                uVar35 = 0x33;
                goto LAB_9800a400;
              }
              pbVar38 = (byte *)uVar37;
              uVar37 = uVar37 + 1;
              unaff_r25 = (uint)*pbVar38 << (unaff_r27 & 0x3f) | unaff_r25;
            }
            in_stack_00000058 = (uint)unaff_r25 & 0xff;
            uVar36 = (uint)(unaff_r25 >> 8);
            unaff_r27 = unaff_r27 - 8;
            if (in_stack_0000005c <= in_stack_00000054) {
              uVar35 = 0x34;
              goto LAB_9800a290;
            }
            *in_stack_00000054 = (char)unaff_r25;
            unaff_r25 = unaff_r25 >> 8;
            in_stack_00000054 = in_stack_00000054 + 1;
          }
        }
        else {
          if (uVar18 == 3) {
            uVar35 = 10;
            goto LAB_980093c8;
          }
          if (uVar18 == 1) {
            puVar5[0xb] = 0x120;
            puVar5[0xc] = 0x20;
            FUN_9800dcf0(puVar5 + 0x7ab,5,0x20);
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
                  uVar35 = 0xb;
                  goto LAB_9800a400;
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
                  uVar35 = 0xe;
                  goto LAB_9800a400;
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
          while( true ) {
            uVar36 = (uint)unaff_r25;
            iVar15 = puVar5[6];
            if (iVar15 < 0) break;
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
            FUN_9800dcf0(puVar13,0,0x800);
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
            FUN_9800dcf0(puVar14,0,uVar18);
            uVar21 = 0;
            iVar25 = puVar5[puVar5[6] + 0xb];
            if (iVar25 != 0) {
              uVar24 = puVar5[puVar5[6] + 0xb];
              do {
                pbVar38 = (byte *)(uVar21 + iVar15);
                uVar21 = uVar21 + 1;
                iVar23 = (uint)*pbVar38 * 4;
                *(int *)(&stack0x000000e0 + iVar23) = *(int *)(&stack0x000000e0 + iVar23) + 1;
              } while (uVar21 < uVar24);
            }
            in_stack_00000094 = 0;
            uVar21 = 0;
            in_stack_00000090 = 0;
            iVar23 = 0;
            iVar32 = 4;
            lVar19 = 0xf;
            do {
              uVar21 = *(int *)(&stack0x000000e0 + iVar32) + uVar21;
              iVar23 = (*(int *)(&stack0x000000e0 + iVar32) + iVar23) * 2;
              *(int *)((int)&stack0x00000094 + iVar32) = iVar23;
              iVar32 = iVar32 + 4;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            if ((iVar23 != 0x10000) && (1 < uVar21)) {
              uVar35 = 0x23;
              goto LAB_980093c8;
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
                        psVar33 = (short *)(iVar40 - (int)(((lVar20 - (uVar18 & 1)) + 1 & 0xffffffff
                                                           ) << 1));
                        sVar3 = *psVar33;
                        lVar19 = lVar43;
                        lVar20 = (longlong)sVar3;
                        if (sVar3 == 0) {
                          *psVar33 = (short)lVar43;
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
                            if (-1 < sVar3) goto LAB_98009e68;
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
                        uVar35 = 0x10;
                        goto LAB_9800a400;
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
LAB_98009e68:
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
                uVar36 = uVar36 >> (uVar21 & 0x3f);
                unaff_r25 = (ulonglong)uVar36;
                unaff_r27 = unaff_r27 - uVar21;
                iVar15 = (int)unaff_r24;
                if (in_stack_00000058 < 0x10) {
                  unaff_r24 = unaff_r24 + 1;
                  *(char *)((int)puVar5 + iVar15 + 0x1ee3) = (char)in_stack_00000058;
                }
                else {
                  if ((in_stack_00000058 == 0x10) && ((unaff_r24 & 0xffffffff) == 0)) {
                    uVar35 = 0x11;
                    goto LAB_980093c8;
                  }
                  cVar1 = *(char *)(in_stack_00000058 + in_stack_00000068 + -0x10);
                  uVar36 = (uint)cVar1;
                  unaff_r18 = (uint)cVar1;
                  for (; unaff_r27 < uVar36; unaff_r27 = unaff_r27 + 8) {
                    if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                      uVar35 = 0x12;
                      goto LAB_9800a400;
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
                  FUN_9800dcf0((uint *)((int)puVar5 + iVar15 + 0x1ee3),uVar21,uVar18);
                  unaff_r24 = uVar18 + unaff_r24;
                  unaff_r18 = uVar36;
                }
              }
              if (uVar18 != (unaff_r24 & 0xffffffff)) {
                uVar35 = 0x15;
                goto LAB_980093c8;
              }
              FUN_9800d650(unaff_r31 + 0x1d8c,unaff_r31 + 0x1ee3,(ulonglong)(uint)puVar5[0xb]);
              FUN_9800d650(unaff_r31 + 0x1eac,(ulonglong)(uint)puVar5[0xb] + unaff_r31 + 0x1ee3,
                           (ulonglong)(uint)puVar5[0xc]);
            }
            puVar5[6] = puVar5[6] + -1;
          }
          uVar18 = ZEXT48(in_stack_00000054);
LAB_98009428:
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
                        if (-1 < sVar3) goto LAB_9800963c;
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
                    uVar35 = 0x17;
                    goto LAB_9800a400;
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
LAB_9800963c:
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
            if (0xff < (unaff_r24 & 0xffffffff)) goto LAB_980096d4;
            if ((uVar18 & 0xffffffff) < ZEXT48(in_stack_0000005c)) {
              *puVar39 = (char)unaff_r24;
              uVar18 = uVar18 + 1;
              goto LAB_980096c0;
            }
            uVar35 = 0x18;
LAB_9800a290:
            uVar41 = (undefined4)unaff_r24;
            iVar15 = 2;
            goto LAB_980093cc;
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
              goto LAB_980096d4;
            }
            puVar39[1] = (char)uVar29;
            uVar18 = uVar18 + 2;
LAB_980096c0:
            in_stack_00000054 = (undefined1 *)uVar18;
            goto LAB_98009428;
          }
LAB_980096d4:
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
                  uVar35 = 0x19;
                  goto LAB_9800a400;
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
                        if (-1 < sVar3) goto LAB_9800a0fc;
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
                    uVar35 = 0x1a;
                    goto LAB_9800a400;
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
LAB_9800a0fc:
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
                  uVar35 = 0x1b;
                  goto LAB_9800a400;
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
              uVar35 = 0x25;
              unaff_r18 = (uint)bVar2;
              goto LAB_980093c8;
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
                  uVar35 = 0x35;
                  unaff_r18 = (uint)bVar2;
                  goto LAB_9800a290;
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
                  puVar34 = (undefined1 *)uVar31;
                  unaff_r24 = unaff_r24 - 3;
                  puVar16 = (undefined1 *)uVar18;
                  *puVar16 = *puVar34;
                  puVar16[1] = puVar34[1];
                  uVar31 = uVar31 + 3;
                  puVar39 = (undefined1 *)uVar31;
                  puVar16[2] = puVar34[2];
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
                goto LAB_980096c0;
              }
            }
            goto LAB_98009428;
          }
        }
LAB_980096e0:
        uVar41 = (undefined4)unaff_r24;
        uVar36 = (uint)unaff_r25;
      } while ((puVar5[5] & 1) == 0);
      uVar21 = unaff_r27 & 7;
      if (unaff_r27 < uVar21) {
        do {
          if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
            uVar35 = 0x20;
            goto LAB_9800a400;
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
              uVar35 = 0x2a;
              goto LAB_9800a400;
            }
            uVar36 = (uint)*(byte *)uVar37;
            uVar37 = uVar37 + 1;
          }
          else {
            for (; unaff_r27 < 8; unaff_r27 = unaff_r27 + 8) {
              if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
                uVar35 = 0x29;
                goto LAB_9800a400;
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
      uVar35 = 0x22;
      iVar15 = 0;
    }
    else {
      uVar35 = 0x24;
LAB_980093c8:
      uVar41 = (undefined4)unaff_r24;
      iVar15 = -1;
    }
LAB_980093cc:
    *puVar5 = uVar35;
  }
  else {
    uVar35 = 2;
LAB_9800a400:
    iVar40 = (int)uVar37;
    uVar36 = (uint)unaff_r25;
    uVar41 = (undefined4)unaff_r24;
    *puVar5 = uVar35;
    iVar15 = (-(uint)((in_stack_00000204 & 2) != 0) & 5) - 4;
    if ((iVar15 == 1) || (iVar15 == -4)) goto LAB_9800a460;
  }
  for (; (iVar40 = (int)uVar37, (ulonglong)in_stack_000001dc < (uVar37 & 0xffffffff) &&
         (7 < unaff_r27)); unaff_r27 = unaff_r27 - 8) {
    uVar37 = uVar37 - 1;
  }
LAB_9800a460:
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
          iVar32 = (uint)*pbVar7 + iVar23;
          iVar26 = (uint)*pbVar8 + iVar32;
          iVar27 = (uint)*pbVar9 + iVar26;
          iVar28 = (uint)*pbVar10 + iVar27;
          uVar36 = (uint)*pbVar11 + iVar28;
          uVar24 = uVar24 + iVar40 + iVar25 + iVar23 + iVar32 + iVar26 + iVar27 + iVar28 + uVar36;
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
  FUN_9800dc90();
  return;
LAB_9800990c:
  if ((unaff_r24 & 0xffffffff) == 0) goto LAB_980096e0;
  if (ZEXT48(in_stack_0000005c) <= (uVar18 & 0xffffffff)) {
    uVar35 = 9;
    goto LAB_9800a290;
  }
  if ((ulonglong)in_stack_00000050 <= (uVar37 & 0xffffffff)) {
    uVar35 = 0x26;
    goto LAB_9800a400;
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
  FUN_9800d650(uVar18,uVar37,uVar31);
  uVar18 = uVar31 + uVar18;
  uVar37 = uVar31 + uVar37;
  in_stack_00000054 = (undefined1 *)uVar18;
  unaff_r24 = unaff_r24 - uVar31;
  goto LAB_9800990c;
}


/* ==== FUN_9800a5f8 @ 9800a5f8 ==== */

void FUN_9800a5f8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined4 param_8)

{
  *param_6 = param_8;
  *param_3 = param_8;
  FUN_9800dc90();
  return;
}


/* ==== FUN_9800a610 @ 9800a610 ==== */

undefined8 FUN_9800a610(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined8 *)FUN_9800dc7c();
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(int *)(puVar1 + 9) == 0) && (*(int *)((int)puVar1 + 0x14) == 0)) {
      if (*(int *)(puVar1 + 5) == 0) {
        *(code **)(puVar1 + 5) = FUN_98008d48;
      }
      if (*(int *)((int)puVar1 + 0x2c) == 0) {
        *(undefined4 *)((int)puVar1 + 0x2c) = 0x98008d50;
      }
      if (*(int *)(puVar1 + 6) == 0) {
        *(undefined4 *)(puVar1 + 6) = 0x98008d58;
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((int)puVar1 + 0x1c) = 0;
      puVar2 = (uint *)(**(code **)(puVar1 + 5))(*(undefined4 *)((int)puVar1 + 0x34),1,0x58);
      *(uint **)(puVar1 + 9) = puVar2;
      if (puVar2 != (uint *)0x0) {
        FUN_9800dcf0(puVar2,0,0x58);
        *(undefined4 *)(*(int *)(puVar1 + 9) + 0xc) = 1;
        *(undefined4 *)(*(int *)(puVar1 + 9) + 0x1c) = 4;
        *(undefined4 *)(*(int *)(puVar1 + 9) + 0x2c) = 4;
        *(undefined4 *)(*(int *)(puVar1 + 9) + 0x30) = param_2;
        *(undefined4 *)(*(int *)(puVar1 + 9) + 0x34) = 0;
        *(undefined4 *)(*(int *)(puVar1 + 9) + 0x38) = 0;
        *(undefined4 *)((int)puVar1 + 0x14) = 1;
        return 1;
      }
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0x18;
    }
    *(undefined4 *)((int)puVar1 + 0x1c) = uVar3;
  }
  return 0;
}


/* ==== FUN_9800a730 @ 9800a730 ==== */

void FUN_9800a730(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar14;
  int iVar12;
  uint uVar13;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  int *piVar19;
  longlong lVar15;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte *pbVar23;
  bool bVar24;
  
  iVar4 = FUN_9800dc6c();
  uVar13 = *(uint *)(iVar4 + 0x10);
  uVar20 = (ulonglong)uVar13;
  piVar1 = *(int **)(iVar4 + 0x48);
  if (uVar20 < 2) {
    return;
  }
  puVar2 = (undefined4 *)piVar1[8];
  uVar21 = (uVar20 - 2 & 0xffffffff) >> 1;
  do {
    lVar22 = (uVar21 & 0xffffffff) << 1;
    uVar9 = uVar21 & 0xffffffff;
    while (uVar8 = lVar22 + 1, uVar8 < uVar13) {
      if (lVar22 + 2U < (ulonglong)uVar13) {
        bVar7 = 0;
        piVar19 = (int *)((int)((uVar8 & 0xffffffff) << 2) + (int)puVar2);
        bVar14 = 0;
        iVar16 = *(int *)(*piVar19 * 4 + piVar1[4]) + *piVar1;
        iVar4 = *(int *)(piVar19[1] * 4 + piVar1[4]) + *piVar1;
        pbVar5 = (byte *)(iVar4 + 0x2e);
        uVar10 = (uint)CONCAT11(*(undefined1 *)(iVar16 + 0x1d),*(undefined1 *)(iVar16 + 0x1c));
        uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 0x1d),*(undefined1 *)(iVar4 + 0x1c));
        pbVar17 = (byte *)(iVar16 + 0x2e);
        uVar11 = uVar10;
        if (uVar6 <= uVar10) {
          uVar11 = uVar6;
        }
        pbVar23 = pbVar17 + uVar11;
        for (; pbVar17 < pbVar23; pbVar17 = pbVar17 + 1) {
          bVar14 = *pbVar17;
          if ((bVar14 < 0x41) || (bVar7 = bVar14 + 0x20, 0x5a < bVar14)) {
            bVar7 = bVar14;
          }
          bVar14 = *pbVar5;
          if ((0x40 < bVar14) && (bVar14 < 0x5b)) {
            bVar14 = bVar14 + 0x20;
          }
          if (bVar7 != bVar14) break;
          pbVar5 = pbVar5 + 1;
        }
        if (pbVar17 == pbVar23) {
          bVar24 = uVar6 <= uVar10;
        }
        else {
          bVar24 = bVar14 <= bVar7;
        }
        lVar22 = 1;
        if (bVar24) goto LAB_9800a870;
      }
      else {
LAB_9800a870:
        lVar22 = 0;
      }
      uVar8 = lVar22 + uVar8;
      bVar7 = 0;
      bVar14 = 0;
      iVar4 = (int)((uVar9 & 0x3fffffff) << 2);
      iVar16 = (int)((uVar8 & 0x3fffffff) << 2);
      iVar18 = *(int *)(*(int *)(iVar4 + (int)puVar2) * 4 + piVar1[4]) + *piVar1;
      iVar12 = *(int *)(*(int *)(iVar16 + (int)puVar2) * 4 + piVar1[4]) + *piVar1;
      pbVar17 = (byte *)(iVar12 + 0x2e);
      uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar18 + 0x1d),*(undefined1 *)(iVar18 + 0x1c));
      uVar10 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1d),*(undefined1 *)(iVar12 + 0x1c));
      pbVar5 = (byte *)(iVar18 + 0x2e);
      uVar11 = uVar6;
      if (uVar10 <= uVar6) {
        uVar11 = uVar10;
      }
      pbVar23 = pbVar5 + uVar11;
      for (; pbVar5 < pbVar23; pbVar5 = pbVar5 + 1) {
        bVar14 = *pbVar5;
        if ((bVar14 < 0x41) || (bVar7 = bVar14 + 0x20, 0x5a < bVar14)) {
          bVar7 = bVar14;
        }
        bVar14 = *pbVar17;
        if ((0x40 < bVar14) && (bVar14 < 0x5b)) {
          bVar14 = bVar14 + 0x20;
        }
        if (bVar7 != bVar14) break;
        pbVar17 = pbVar17 + 1;
      }
      if (pbVar5 == pbVar23) {
        bVar24 = uVar10 <= uVar6;
      }
      else {
        bVar24 = bVar14 <= bVar7;
      }
      if (bVar24) break;
      uVar3 = *(undefined4 *)(iVar4 + (int)puVar2);
      *(undefined4 *)(iVar4 + (int)puVar2) = *(undefined4 *)(iVar16 + (int)puVar2);
      *(undefined4 *)(iVar16 + (int)puVar2) = uVar3;
      uVar9 = uVar8;
      lVar22 = uVar8 * 2;
    }
    if ((uVar21 & 0xffffffff) == 0) {
      uVar20 = uVar20 - 1;
      if (uVar20 == 0) {
        return;
      }
      lVar22 = (uVar20 & 0x3fffffff) * 4 + ZEXT48(puVar2);
      do {
        uVar3 = *(undefined4 *)lVar22;
        *(undefined4 *)lVar22 = *puVar2;
        *puVar2 = uVar3;
        uVar9 = 1;
        uVar21 = 0;
        while (uVar9 < (uVar20 & 0xffffffff)) {
          if (uVar9 + 1 < (uVar20 & 0xffffffff)) {
            bVar7 = 0;
            piVar19 = (int *)((int)((uVar9 & 0xffffffff) << 2) + (int)puVar2);
            bVar14 = 0;
            iVar16 = *(int *)(*piVar19 * 4 + piVar1[4]) + *piVar1;
            iVar4 = *(int *)(piVar19[1] * 4 + piVar1[4]) + *piVar1;
            pbVar5 = (byte *)(iVar4 + 0x2e);
            uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar16 + 0x1d),*(undefined1 *)(iVar16 + 0x1c));
            uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 0x1d),*(undefined1 *)(iVar4 + 0x1c));
            pbVar17 = (byte *)(iVar16 + 0x2e);
            uVar13 = uVar6;
            if (uVar11 <= uVar6) {
              uVar13 = uVar11;
            }
            pbVar23 = pbVar17 + uVar13;
            for (; pbVar17 < pbVar23; pbVar17 = pbVar17 + 1) {
              bVar14 = *pbVar17;
              if ((bVar14 < 0x41) || (bVar7 = bVar14 + 0x20, 0x5a < bVar14)) {
                bVar7 = bVar14;
              }
              bVar14 = *pbVar5;
              if ((0x40 < bVar14) && (bVar14 < 0x5b)) {
                bVar14 = bVar14 + 0x20;
              }
              if (bVar7 != bVar14) break;
              pbVar5 = pbVar5 + 1;
            }
            if (pbVar17 == pbVar23) {
              bVar24 = uVar11 <= uVar6;
            }
            else {
              bVar24 = bVar14 <= bVar7;
            }
            lVar15 = 1;
            if (bVar24) goto LAB_9800aadc;
          }
          else {
LAB_9800aadc:
            lVar15 = 0;
          }
          uVar8 = lVar15 + uVar9;
          bVar7 = 0;
          bVar14 = 0;
          iVar4 = (int)((uVar21 & 0x3fffffff) << 2);
          iVar16 = (int)((uVar8 & 0x3fffffff) << 2);
          iVar18 = *(int *)(*(int *)(iVar4 + (int)puVar2) * 4 + piVar1[4]) + *piVar1;
          iVar12 = *(int *)(*(int *)(iVar16 + (int)puVar2) * 4 + piVar1[4]) + *piVar1;
          pbVar17 = (byte *)(iVar12 + 0x2e);
          uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar18 + 0x1d),*(undefined1 *)(iVar18 + 0x1c));
          uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1d),*(undefined1 *)(iVar12 + 0x1c));
          pbVar5 = (byte *)(iVar18 + 0x2e);
          uVar13 = uVar11;
          if (uVar6 <= uVar11) {
            uVar13 = uVar6;
          }
          pbVar23 = pbVar5 + uVar13;
          for (; pbVar5 < pbVar23; pbVar5 = pbVar5 + 1) {
            bVar14 = *pbVar5;
            if ((bVar14 < 0x41) || (bVar7 = bVar14 + 0x20, 0x5a < bVar14)) {
              bVar7 = bVar14;
            }
            bVar14 = *pbVar17;
            if ((0x40 < bVar14) && (bVar14 < 0x5b)) {
              bVar14 = bVar14 + 0x20;
            }
            if (bVar7 != bVar14) break;
            pbVar17 = pbVar17 + 1;
          }
          if (pbVar5 == pbVar23) {
            bVar24 = uVar6 <= uVar11;
          }
          else {
            bVar24 = bVar14 <= bVar7;
          }
          if (bVar24) break;
          uVar3 = *(undefined4 *)(iVar4 + (int)puVar2);
          *(undefined4 *)(iVar4 + (int)puVar2) = *(undefined4 *)(iVar16 + (int)puVar2);
          *(undefined4 *)(iVar16 + (int)puVar2) = uVar3;
          uVar21 = uVar8;
          uVar9 = uVar8 * 2 + 1;
        }
        uVar20 = uVar20 - 1;
        lVar22 = lVar22 + -4;
        if (uVar20 == 0) {
          return;
        }
      } while( true );
    }
    uVar21 = uVar21 - 1;
  } while( true );
}


/* ==== FUN_9800ac10 @ 9800ac10 ==== */

undefined8 FUN_9800ac10(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar4;
  ulonglong uVar3;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar4 = (ulonglong *)FUN_9800dc70();
  uVar6 = *puVar4;
  uVar2 = param_3 & 0xffffffff;
  if (uVar2 <= uVar6) {
    lVar8 = uVar6 - 0x1000;
    while( true ) {
      if (lVar8 < 1) {
        lVar8 = 0;
      }
      uVar6 = uVar6 - lVar8;
      if (0x1000 < uVar6) {
        uVar6 = 0x1000;
      }
      uVar6 = uVar6 & 0xffffffff;
      uVar3 = (**(code **)(puVar4 + 7))
                        (*(undefined4 *)((int)puVar4 + 0x44),lVar8,ZEXT48(&stack0x00000000) - 0x1040
                         ,uVar6);
      if ((uVar3 & 0xffffffff) != uVar6) break;
      lVar7 = uVar6 - 4;
      if (-1 < lVar7) {
        lVar5 = lVar7 + (ZEXT48(&stack0x00000000) - 0x103e);
        do {
          puVar1 = (undefined1 *)lVar5;
          if (((ulonglong)CONCAT31(CONCAT21(CONCAT11(puVar1[1],*puVar1),puVar1[-1]),puVar1[-2]) ==
               (param_2 & 0xffffffff)) && (uVar2 <= (*puVar4 - (longlong)(int)lVar7) - lVar8))
          break;
          lVar7 = lVar7 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar7);
        if (-1 < (int)lVar7) {
          *param_4 = (int)lVar7 + lVar8;
          return 1;
        }
      }
      if (lVar8 == 0) {
        return 0;
      }
      uVar6 = *puVar4;
      if (uVar2 + 0xffff <= uVar6 - lVar8) {
        return 0;
      }
      lVar8 = lVar8 + -0xffd;
    }
  }
  return 0;
}


/* ==== FUN_9800ad38 @ 9800ad38 ==== */

undefined8 FUN_9800ad38(undefined8 param_1,uint param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint3 uVar4;
  uint3 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar17;
  uint uVar18;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 local_10e0;
  undefined1 local_10df;
  undefined1 local_10de;
  undefined1 local_10dd;
  byte local_10dc;
  undefined1 local_10db;
  undefined1 local_10da;
  undefined1 local_10d9;
  undefined1 local_10d8;
  undefined1 local_10d7;
  undefined1 local_10d6;
  undefined1 local_10d5;
  undefined1 local_10d0;
  undefined1 local_10cf;
  undefined1 local_10ce;
  undefined1 local_10cd;
  undefined1 local_10cc;
  undefined1 local_10cb;
  undefined1 local_10ca;
  undefined1 local_10c9;
  byte local_10c8;
  undefined1 local_10c7;
  undefined1 local_10c6;
  undefined1 local_10c5;
  undefined1 local_10c4;
  undefined1 local_10c3;
  undefined1 local_10c2;
  undefined1 local_10c1;
  byte local_10c0;
  undefined1 local_10bf;
  undefined1 local_10be;
  undefined1 local_10bd;
  undefined1 local_10bc;
  undefined1 local_10bb;
  undefined1 local_10ba;
  undefined1 local_10b9;
  byte local_10b8;
  undefined1 local_10b7;
  undefined1 local_10b6;
  undefined1 local_10b5;
  undefined1 local_10b4;
  undefined1 local_10b3;
  undefined1 local_10b2;
  undefined1 local_10b1;
  byte local_10b0;
  undefined1 local_10af;
  undefined1 local_10ae;
  undefined1 local_10ad;
  undefined1 local_10ac;
  undefined1 local_10ab;
  undefined1 local_10aa;
  undefined1 local_10a9;
  undefined1 local_10a0;
  undefined1 local_109f;
  undefined1 local_109e;
  undefined1 local_109d;
  byte local_1098;
  undefined1 local_1097;
  undefined1 local_1096;
  undefined1 local_1095;
  undefined1 local_1094;
  undefined1 local_1093;
  undefined1 local_1092;
  undefined1 local_1091;
  undefined1 local_1090;
  undefined1 local_108f;
  undefined1 local_108e;
  undefined1 local_108d;
  ulonglong local_1088;
  undefined1 local_1080;
  undefined1 local_107f;
  undefined1 local_107e;
  undefined1 local_107d;
  undefined1 local_107c;
  undefined1 local_107b;
  undefined1 local_107a;
  undefined1 local_1079;
  undefined1 local_1078;
  undefined1 local_1077;
  undefined1 local_1076;
  undefined1 local_1075;
  undefined1 local_1074;
  undefined1 local_1073;
  undefined1 local_1072;
  undefined1 local_1071;
  undefined1 local_1070;
  undefined1 local_106f;
  undefined1 local_106e;
  undefined1 local_106d;
  
  uVar6 = FUN_9800dc4c();
  puVar7 = (ulonglong *)uVar6;
  uVar20 = ~param_2 >> 0xb & 1;
  local_1088 = 0;
  if (*puVar7 < 0x16) goto LAB_9800ad68;
  uVar6 = FUN_9800ac10(uVar6,0x6054b50,0x16,(longlong *)&local_1088);
  uVar14 = local_1088;
  if ((int)uVar6 == 0) {
    uVar17 = 7;
    goto LAB_9800ad6c;
  }
  iVar8 = (**(code **)(puVar7 + 7))(*(undefined4 *)((int)puVar7 + 0x44),local_1088,&local_1080,0x16)
  ;
  if (iVar8 == 0x16) {
    if (CONCAT31(CONCAT21(CONCAT11(local_107d,local_107e),local_107f),local_1080) == 0x6054b50) {
      if (((0x4b < (longlong)uVar14) &&
          (iVar8 = (**(code **)(puVar7 + 7))
                             (*(undefined4 *)((int)puVar7 + 0x44),uVar14 - 0x14,&local_10a0,0x14),
          iVar8 == 0x14)) &&
         (CONCAT31(CONCAT21(CONCAT11(local_109d,local_109e),local_109f),local_10a0) == 0x7064b50)) {
        *(undefined4 *)(*(int *)(puVar7 + 9) + 0x34) = 1;
      }
      if ((*(int *)(*(int *)(puVar7 + 9) + 0x34) == 0) ||
         ((0x4b < (longlong)uVar14 &&
          (((iVar8 = (**(code **)(puVar7 + 7))
                               (*(undefined4 *)((int)puVar7 + 0x44),uVar14 - 0x4c,&local_10e0,0x38),
            iVar8 == 0x38 &&
            (CONCAT31(CONCAT21(CONCAT11(local_10dd,local_10de),local_10df),local_10e0) == 0x6064b50)
            ) || ((uVar11 = (ulonglong)
                            CONCAT31(CONCAT21(CONCAT11(local_1091,local_1092),local_1093),local_1094
                                    ) << 0x20 |
                            (ulonglong)CONCAT21(CONCAT11(local_1095,local_1096),local_1097) << 8 |
                            (ulonglong)local_1098, uVar11 <= *puVar7 - 0x38 &&
                  ((iVar8 = (**(code **)(puVar7 + 7))
                                      (*(undefined4 *)((int)puVar7 + 0x44),uVar11,&local_10e0,0x38),
                   iVar8 == 0x38 &&
                   (CONCAT31(CONCAT21(CONCAT11(local_10dd,local_10de),local_10df),local_10e0) ==
                    0x6064b50)))))))))) {
        iVar8 = *(int *)(puVar7 + 9);
        uVar11 = (ulonglong)
                 CONCAT31(CONCAT21(CONCAT11(local_106d,local_106e),local_106f),local_1070);
        uVar18 = (uint)CONCAT11(local_1077,local_1078);
        uVar13 = (uint)CONCAT11(local_107b,local_107c);
        uVar12 = (uint)CONCAT11(local_1079,local_107a);
        *(uint *)(puVar7 + 2) = (uint)CONCAT11(local_1075,local_1076);
        uVar19 = CONCAT31(CONCAT21(CONCAT11(local_1071,local_1072),local_1073),local_1074);
        if (*(int *)(iVar8 + 0x34) == 0) {
LAB_9800b240:
          uVar24 = (ulonglong)uVar19;
          if ((*(uint *)(puVar7 + 2) == uVar18) &&
             ((uVar12 == 0 && uVar13 == 0 || ((uVar13 == 1 && (uVar12 == 1)))))) {
            if ((uVar24 < (ulonglong)*(uint *)(puVar7 + 2) * 0x2e) ||
               ((*puVar7 < uVar24 + uVar11 || (uVar14 < uVar24 + uVar11)))) {
LAB_9800b168:
              uVar17 = 9;
              goto LAB_9800ad6c;
            }
            uVar14 = (uVar14 - uVar24) - uVar11;
            if (*(int *)(iVar8 + 0x34) != 0) {
              if (uVar14 < 0x4c) goto LAB_9800b168;
              uVar14 = uVar14 - 0x4c;
            }
            iVar9 = *(int *)(puVar7 + 3);
            if ((((iVar9 == 4) || (iVar9 == 5)) || (iVar9 == 1)) &&
               (*(longlong *)(iVar8 + 0x40) == 0)) {
              *(ulonglong *)(iVar8 + 0x40) = uVar14;
              *puVar7 = *puVar7 - uVar14;
            }
            puVar7[1] = uVar11;
            if (*(int *)(puVar7 + 2) == 0) goto LAB_9800b764;
            piVar1 = *(int **)(puVar7 + 9);
            if ((uint)piVar1[2] < uVar24) {
              iVar8 = (**(code **)(puVar7 + 6))
                                (*(undefined4 *)((int)puVar7 + 0x34),*piVar1,piVar1[3],uVar24);
              if (iVar8 != 0) {
                *piVar1 = iVar8;
                piVar1[2] = uVar19;
                goto LAB_9800b334;
              }
LAB_9800b7a0:
              uVar17 = 0x10;
              goto LAB_9800ad6c;
            }
LAB_9800b334:
            piVar1[1] = uVar19;
            iVar8 = *(int *)(puVar7 + 9);
            uVar18 = *(uint *)(puVar7 + 2);
            if (*(uint *)(iVar8 + 0x18) < uVar18) {
              iVar9 = (**(code **)(puVar7 + 6))
                                (*(undefined4 *)((int)puVar7 + 0x34),*(int *)(iVar8 + 0x10),
                                 *(undefined4 *)(iVar8 + 0x1c),uVar18);
              if (iVar9 == 0) goto LAB_9800b7a0;
              *(int *)(iVar8 + 0x10) = iVar9;
              *(uint *)(iVar8 + 0x18) = uVar18;
            }
            *(uint *)(iVar8 + 0x14) = uVar18;
            if (uVar20 != 0) {
              iVar8 = *(int *)(puVar7 + 9);
              uVar18 = *(uint *)(puVar7 + 2);
              if (*(uint *)(iVar8 + 0x28) < uVar18) {
                iVar9 = (**(code **)(puVar7 + 6))
                                  (*(undefined4 *)((int)puVar7 + 0x34),*(int *)(iVar8 + 0x20),
                                   *(undefined4 *)(iVar8 + 0x2c),uVar18);
                if (iVar9 == 0) goto LAB_9800b7a0;
                *(int *)(iVar8 + 0x20) = iVar9;
                *(uint *)(iVar8 + 0x28) = uVar18;
              }
              *(uint *)(iVar8 + 0x24) = uVar18;
            }
            uVar14 = (**(code **)(puVar7 + 7))
                               (*(undefined4 *)((int)puVar7 + 0x44),uVar11,
                                **(undefined4 **)(puVar7 + 9),uVar24);
            if ((uVar14 & 0xffffffff) == uVar24) {
              uVar18 = 0;
              uVar14 = (ulonglong)**(uint **)(puVar7 + 9);
              if (*(int *)(puVar7 + 2) != 0) {
                iVar8 = 0;
                do {
                  if (((uVar24 & 0xffffffff) < 0x2e) ||
                     (puVar2 = (undefined1 *)uVar14,
                     CONCAT31(CONCAT21(CONCAT11(puVar2[3],puVar2[2]),puVar2[1]),*puVar2) !=
                     0x2014b50)) goto LAB_9800b168;
                  *(int *)((*(int **)(puVar7 + 9))[4] + iVar8) =
                       (int)puVar2 - **(int **)(puVar7 + 9);
                  if (uVar20 != 0) {
                    *(uint *)(*(int *)(*(int *)(puVar7 + 9) + 0x20) + iVar8) = uVar18;
                  }
                  uVar22 = (ulonglong)
                           CONCAT31(CONCAT21(CONCAT11(puVar2[0x17],puVar2[0x16]),puVar2[0x15]),
                                    puVar2[0x14]);
                  uVar23 = (ulonglong)CONCAT11(puVar2[0x1d],puVar2[0x1c]);
                  uVar21 = (ulonglong)
                           CONCAT31(CONCAT21(CONCAT11(puVar2[0x1b],puVar2[0x1a]),puVar2[0x19]),
                                    puVar2[0x18]);
                  uVar15 = (ulonglong)
                           CONCAT31(CONCAT21(CONCAT11(puVar2[0x2d],puVar2[0x2c]),puVar2[0x2b]),
                                    puVar2[0x2a]);
                  uVar25 = (ulonglong)CONCAT11(puVar2[0x1f],puVar2[0x1e]);
                  if ((*(int *)(*(int *)(puVar7 + 9) + 0x38) == 0) && (uVar25 != 0)) {
                    uVar16 = uVar22;
                    if (uVar22 <= uVar21) {
                      uVar16 = uVar21;
                    }
                    if ((uVar15 < uVar16) && (uVar15 = uVar22, uVar22 <= uVar21)) {
                      uVar15 = uVar21;
                    }
                    if (uVar15 == 0xffffffff) {
                      if ((uVar24 & 0xffffffff) < uVar25 + uVar23 + 0x2e) {
                        puVar10 = FUN_9800ddf0();
                        uVar16 = (ulonglong)(int)puVar10;
                        if (uVar16 == 0) goto LAB_9800b7a0;
                        uVar23 = (**(code **)(puVar7 + 7))
                                           (*(undefined4 *)((int)puVar7 + 0x44),
                                            uVar23 + uVar11 + 0x2e,uVar16,uVar25);
                        uVar15 = uVar16;
                        if ((uVar23 & 0xffffffff) != uVar25) {
                          FUN_9800dd90(uVar16);
                          goto LAB_9800adcc;
                        }
                      }
                      else {
                        uVar16 = uVar23 + uVar14 + 0x2e;
                        uVar15 = 0;
                      }
                      do {
                        if ((uVar25 & 0xffffffff) < 4) {
LAB_9800b78c:
                          FUN_9800dd90(uVar15);
                          goto LAB_9800b168;
                        }
                        puVar3 = (undefined1 *)uVar16;
                        uVar23 = (ulonglong)CONCAT11(puVar3[3],puVar3[2]);
                        if ((uVar25 & 0xffffffff) < uVar23 + 4) goto LAB_9800b78c;
                        if (CONCAT11(puVar3[1],*puVar3) == 1) {
                          *(undefined4 *)(*(int *)(puVar7 + 9) + 0x34) = 1;
                          *(undefined4 *)(*(int *)(puVar7 + 9) + 0x38) = 1;
                          break;
                        }
                        uVar25 = (uVar25 - uVar23) - 4;
                        uVar16 = uVar23 + uVar16 + 4;
                      } while (uVar25 != 0);
                      FUN_9800dd90(uVar15);
                    }
                  }
                  if (((uVar22 != 0xffffffff) && (uVar21 != 0xffffffff)) &&
                     (((CONCAT21(CONCAT11(puVar2[0xd],puVar2[0xc]),puVar2[0xb]) == 0 &&
                        puVar2[10] == '\0' && (uVar21 != uVar22)) ||
                      ((uVar21 != 0 && (uVar22 == 0)))))) goto LAB_9800b168;
                  uVar19 = (uint)CONCAT11(puVar2[0x23],puVar2[0x22]);
                  if ((uVar19 == 0xffff) || ((uVar19 != uVar13 && (uVar19 != 1))))
                  goto LAB_9800b178;
                  if ((uVar22 != 0xffffffff) &&
                     (*puVar7 < CONCAT31(CONCAT21(CONCAT11(puVar2[0x2d],puVar2[0x2c]),puVar2[0x2b]),
                                         puVar2[0x2a]) + uVar22 + 0x1e)) goto LAB_9800b168;
                  if ((puVar2[9] & 0x20) != 0) {
                    uVar17 = 5;
                    goto LAB_9800ad6c;
                  }
                  uVar15 = (ulonglong)CONCAT11(puVar2[0x21],puVar2[0x20]) +
                           (ulonglong)CONCAT11(puVar2[0x1d],puVar2[0x1c]) +
                           (ulonglong)CONCAT11(puVar2[0x1f],puVar2[0x1e]) + 0x2e;
                  if ((uVar24 & 0xffffffff) < uVar15) goto LAB_9800b168;
                  uVar18 = uVar18 + 1;
                  uVar24 = uVar24 - uVar15;
                  uVar14 = uVar15 + uVar14;
                  iVar8 = iVar8 + 4;
                } while (uVar18 < *(uint *)(puVar7 + 2));
              }
LAB_9800b764:
              if (uVar20 != 0) {
                FUN_9800a730();
              }
              return 1;
            }
            goto LAB_9800adcc;
          }
        }
        else {
          uVar4 = CONCAT21(CONCAT11(local_10c5,local_10c6),local_10c7);
          uVar5 = CONCAT21(CONCAT11(local_10b5,local_10b6),local_10b7);
          uVar11 = (ulonglong)
                   CONCAT31(CONCAT21(CONCAT11(local_10b9,local_10ba),local_10bb),local_10bc) << 0x20
                   | (ulonglong)CONCAT21(CONCAT11(local_10bd,local_10be),local_10bf) << 8 |
                   (ulonglong)local_10c0;
          if (((ulonglong)CONCAT31(CONCAT21(CONCAT11(local_10d5,local_10d6),local_10d7),local_10d8)
               << 0x20 | (ulonglong)CONCAT21(CONCAT11(local_10d9,local_10da),local_10db) << 8 |
              (ulonglong)local_10dc) < 0x2c) goto LAB_9800b168;
          if (CONCAT31(CONCAT21(CONCAT11(local_108d,local_108e),local_108f),local_1090) == 1) {
            if ((0xffffffff < uVar11) ||
               (*(int *)(puVar7 + 2) = (int)uVar11,
               0xffffffff <
               ((ulonglong)CONCAT31(CONCAT21(CONCAT11(local_10c1,local_10c2),local_10c3),local_10c4)
                << 0x20 | (ulonglong)uVar4 << 8 | (ulonglong)local_10c8))) {
              uVar17 = 2;
              goto LAB_9800ad6c;
            }
            uVar18 = CONCAT31(uVar4,local_10c8);
            if (0xffffffff <
                ((ulonglong)
                 CONCAT31(CONCAT21(CONCAT11(local_10b1,local_10b2),local_10b3),local_10b4) << 0x20 |
                 (ulonglong)uVar5 << 8 | (ulonglong)local_10b8)) {
              uVar17 = 0xf;
              goto LAB_9800ad6c;
            }
            uVar19 = CONCAT31(uVar5,local_10b8);
            uVar13 = CONCAT31(CONCAT21(CONCAT11(local_10cd,local_10ce),local_10cf),local_10d0);
            uVar12 = CONCAT31(CONCAT21(CONCAT11(local_10c9,local_10ca),local_10cb),local_10cc);
            uVar11 = (ulonglong)
                     CONCAT31(CONCAT21(CONCAT11(local_10a9,local_10aa),local_10ab),local_10ac) <<
                     0x20 | (ulonglong)CONCAT21(CONCAT11(local_10ad,local_10ae),local_10af) << 8 |
                     (ulonglong)local_10b0;
            goto LAB_9800b240;
          }
        }
LAB_9800b178:
        uVar17 = 10;
        goto LAB_9800ad6c;
      }
    }
LAB_9800ad68:
    uVar17 = 8;
  }
  else {
LAB_9800adcc:
    uVar17 = 0x14;
  }
LAB_9800ad6c:
  *(undefined4 *)((int)puVar7 + 0x1c) = uVar17;
  return 0;
}


/* ==== FUN_9800b7a8 @ 9800b7a8 ==== */

undefined8 FUN_9800b7a8(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar3;
  ulonglong uVar2;
  undefined8 uVar4;
  
  iVar3 = FUN_9800dc70();
  uVar4 = 1;
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(iVar3 + 0x48);
    if ((((puVar1 != (undefined4 *)0x0) && (*(int *)(iVar3 + 0x28) != 0)) &&
        (*(code **)(iVar3 + 0x2c) != (code *)0x0)) && (*(int *)(iVar3 + 0x14) == 1)) {
      *(undefined4 *)(iVar3 + 0x48) = 0;
      (**(code **)(iVar3 + 0x2c))(*(undefined4 *)(iVar3 + 0x34),*puVar1);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      (**(code **)(iVar3 + 0x2c))(*(undefined4 *)(iVar3 + 0x34),puVar1[4]);
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      (**(code **)(iVar3 + 0x2c))(*(undefined4 *)(iVar3 + 0x34),puVar1[8]);
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      if ((undefined *)puVar1[0xf] != (undefined *)0x0) {
        if ((*(int *)(iVar3 + 0x18) == 4) &&
           (uVar2 = FUN_9800eca8((undefined *)puVar1[0xf]), (int)uVar2 == -1)) {
          if (param_2 != 0) {
            *(undefined4 *)(iVar3 + 0x1c) = 0x15;
          }
          uVar4 = 0;
        }
        puVar1[0xf] = 0;
      }
      (**(code **)(iVar3 + 0x2c))(*(undefined4 *)(iVar3 + 0x34),puVar1);
      *(undefined4 *)(iVar3 + 0x14) = 0;
      return uVar4;
    }
    if (param_2 != 0) {
      *(undefined4 *)(iVar3 + 0x1c) = 0x18;
    }
  }
  return 0;
}


/* ==== FUN_9800b8e8 @ 9800b8e8 ==== */

ulonglong FUN_9800b8e8(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  if (param_2 < *param_1) {
    uVar1 = *param_1 - param_2;
    if ((param_4 & 0xffffffff) <= uVar1) {
      uVar1 = param_4 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  FUN_9800d650(param_3,(ulonglong)*(uint *)(*(int *)(param_1 + 9) + 0x48) + (param_2 & 0xffffffff),
               uVar1);
  return uVar1;
}


/* ==== FUN_9800b960 @ 9800b960 ==== */

undefined8 FUN_9800b960(undefined8 param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_9800dc78();
  puVar1 = (ulonglong *)uVar2;
  if ((param_2 & 0xffffffff) == 0) {
    if ((uVar2 & 0xffffffff) == 0) {
      return 0;
    }
    uVar4 = 0x18;
  }
  else {
    if (0x15 < (param_3 & 0xffffffff)) {
      uVar3 = FUN_9800a610(uVar2,param_4);
      if ((int)uVar3 == 0) {
        return 0;
      }
      *(ulonglong **)((int)puVar1 + 0x44) = puVar1;
      *(undefined4 *)(puVar1 + 3) = 2;
      *puVar1 = param_3 & 0xffffffff;
      *(undefined4 *)(puVar1 + 7) = 0x9800b4e8;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(int *)(*(int *)(puVar1 + 9) + 0x48) = (int)param_2;
      *(int *)(*(int *)(puVar1 + 9) + 0x4c) = (int)param_3;
      uVar3 = FUN_9800ad38(uVar2,param_4);
      if ((int)uVar3 == 0) {
        FUN_9800b7a8(uVar2,0);
        return 0;
      }
      return 1;
    }
    if ((uVar2 & 0xffffffff) == 0) {
      return 0;
    }
    uVar4 = 8;
  }
  *(undefined4 *)((int)puVar1 + 0x1c) = uVar4;
  return 0;
}


/* ==== FUN_9800ba30 @ 9800ba30 ==== */

bool FUN_9800ba30(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 == 0) || (piVar1 = *(int **)(param_1 + 0x48), piVar1 == (int *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[4] + param_2 * 4) + *piVar1;
  }
  if (iVar2 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    return false;
  }
  return (bool)('\x01' - ((*(byte *)(iVar2 + 8) & 0x41) == 0));
}


/* ==== FUN_9800baa0 @ 9800baa0 ==== */

undefined8 FUN_9800baa0(int param_1,uint param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((param_1 == 0) || (piVar1 = *(int **)(param_1 + 0x48), piVar1 == (int *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar1[4] + param_2 * 4) + *piVar1;
  }
  if (iVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    uVar4 = 0x18;
  }
  else {
    sVar2 = CONCAT11(*(undefined1 *)(iVar3 + 0xb),*(undefined1 *)(iVar3 + 10));
    if ((sVar2 == 0) || (sVar2 == 8)) {
      if ((*(byte *)(iVar3 + 8) & 0x41) == 0) {
        if ((*(byte *)(iVar3 + 8) & 0x20) == 0) {
          return 1;
        }
        if (param_1 == 0) {
          return 0;
        }
        uVar4 = 6;
      }
      else {
        if (param_1 == 0) {
          return 0;
        }
        uVar4 = 5;
      }
    }
    else {
      if (param_1 == 0) {
        return 0;
      }
      uVar4 = 4;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  return 0;
}


/* ==== FUN_9800bb78 @ 9800bb78 ==== */

byte FUN_9800bb78(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_1 == 0) || (piVar1 = *(int **)(param_1 + 0x48), piVar1 == (int *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar1[4] + param_2 * 4) + *piVar1;
  }
  if (iVar3 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    return 0;
  }
  uVar2 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 0x1d),*(undefined1 *)(iVar3 + 0x1c));
  if ((uVar2 != 0) && (*(char *)(uVar2 + iVar3 + 0x2d) == '/')) {
    return 1;
  }
  return *(byte *)(iVar3 + 0x26) >> 4 & 1;
}


/* ==== FUN_9800c160 @ 9800c160 ==== */

undefined8 FUN_9800c160(undefined8 param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar17;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  uVar9 = (ulonglong)(int)param_3;
  iVar8 = FUN_9800dc64();
  puVar3 = *(uint **)(iVar8 + 0x48);
  uVar11 = *(uint *)(iVar8 + 0x10);
  uVar4 = puVar3[8];
  lVar13 = param_2;
  do {
    pcVar17 = (char *)lVar13;
    lVar13 = lVar13 + 1;
  } while (*pcVar17 != '\0');
  uVar14 = (lVar13 - param_2) - 1;
  uVar6 = uVar14 & 0xffffffff;
  if ((uVar9 & 0xffffffff) != 0) {
    *(int *)uVar9 = 0;
  }
  if (uVar11 != 0) {
    lVar13 = 0;
    lVar19 = (ulonglong)uVar11 - 1;
    if (-1 < lVar19) {
      do {
        uVar21 = (lVar19 - lVar13 >> 1) + lVar13;
        uVar11 = 0;
        iVar5 = *(int *)((int)((uVar21 & 0xffffffff) << 2) + uVar4);
        lVar15 = (ulonglong)*(uint *)(iVar5 * 4 + puVar3[4]) + (ulonglong)*puVar3;
        iVar18 = (int)lVar15;
        uVar16 = lVar15 + 0x2e;
        uVar7 = CONCAT11(*(undefined1 *)(iVar18 + 0x1d),*(undefined1 *)(iVar18 + 0x1c));
        uVar20 = (ulonglong)uVar7;
        if (uVar6 <= uVar7) {
          uVar20 = uVar6;
        }
        uVar20 = uVar20 + uVar16;
        lVar15 = param_2;
        uVar12 = 0;
        for (; (uVar16 & 0xffffffff) < (uVar20 & 0xffffffff); uVar16 = uVar16 + 1) {
          bVar1 = *(byte *)uVar16;
          if ((bVar1 < 0x41) || (bVar10 = bVar1 + 0x20, 0x5a < bVar1)) {
            bVar10 = bVar1;
          }
          cVar2 = *(char *)lVar15;
          if ((cVar2 < 'A') || (uVar11 = (int)cVar2 + 0x20, 'Z' < cVar2)) {
            uVar11 = (int)cVar2;
          }
          uVar12 = (uint)bVar10;
          uVar11 = uVar11 & 0xff;
          if (bVar10 != uVar11) break;
          lVar15 = lVar15 + 1;
          uVar12 = (uint)bVar10;
        }
        if ((uVar16 & 0xffffffff) == (uVar20 & 0xffffffff)) {
          iVar18 = (uint)uVar7 - (int)uVar14;
        }
        else {
          iVar18 = uVar12 - uVar11;
        }
        if (iVar18 == 0) {
          if ((uVar9 & 0xffffffff) != 0) {
            *(int *)uVar9 = iVar5;
          }
          return 1;
        }
        if (iVar18 < 0) {
          lVar13 = uVar21 + 1;
        }
        else {
          lVar19 = uVar21 - 1;
        }
      } while (lVar13 <= lVar19);
    }
  }
  *(undefined4 *)(iVar8 + 0x1c) = 0x1c;
  return 0;
}


/* ==== FUN_9800c2e0 @ 9800c2e0 ==== */

undefined8
FUN_9800c2e0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,uint *param_5)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar16;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  uVar9 = (ulonglong)(int)param_5;
  uVar6 = FUN_9800dc64();
  puVar10 = (uint *)uVar9;
  if ((uVar9 & 0xffffffff) != 0) {
    *puVar10 = 0;
  }
  if ((uVar6 & 0xffffffff) == 0) {
    return 0;
  }
  iVar3 = (int)uVar6;
  puVar2 = *(uint **)(iVar3 + 0x48);
  if ((puVar2 != (uint *)0x0) && ((param_2 & 0xffffffff) != 0)) {
    uVar14 = param_2;
    if (((puVar2[0xc] & 0x800) == 0) &&
       ((((*(int *)(iVar3 + 0x14) == 1 && ((param_4 & 0x300) == 0)) && ((param_3 & 0xffffffff) == 0)
         ) && (puVar2[9] != 0)))) {
      uVar7 = FUN_9800c160(uVar6,param_2,(int *)puVar10);
      return uVar7;
    }
    do {
      pcVar16 = (char *)uVar14;
      uVar14 = uVar14 + 1;
    } while (*pcVar16 != '\0');
    uVar6 = (uVar14 - param_2) - 1 & 0xffffffff;
    if (uVar6 < 0x10000) {
      uVar14 = param_3;
      if ((param_3 & 0xffffffff) == 0) {
        uVar14 = 0;
      }
      else {
        do {
          pcVar16 = (char *)uVar14;
          uVar14 = uVar14 + 1;
        } while (*pcVar16 != '\0');
        uVar14 = (uVar14 - param_3) - 1 & 0xffffffff;
      }
      if (uVar14 < 0x10000) {
        uVar20 = 0;
        if (*(int *)(iVar3 + 0x10) != 0) {
          puVar21 = (uint *)puVar2[4];
          do {
            lVar12 = (ulonglong)*puVar21 + (ulonglong)*puVar2 + 0x2e;
            iVar4 = (int)((ulonglong)*puVar21 + (ulonglong)*puVar2);
            uVar22 = (ulonglong)
                     CONCAT11(*(undefined1 *)(iVar4 + 0x1d),*(undefined1 *)(iVar4 + 0x1c));
            if (uVar6 <= uVar22) {
              if (uVar14 == 0) {
LAB_9800c4f4:
                if (((param_4 & 0x200) != 0) && (uVar22 != 0)) {
                  lVar15 = uVar22 - 1;
                  do {
                    cVar1 = *(char *)((int)lVar15 + (int)lVar12);
                    if (((cVar1 == '/') || (cVar1 == '\\')) || (cVar1 == ':')) break;
                    lVar15 = lVar15 + -1;
                  } while (-1 < lVar15);
                  lVar12 = lVar15 + 1 + lVar12;
                  uVar22 = uVar22 - (lVar15 + 1);
                }
                if ((uVar22 & 0xffffffff) == uVar6) {
                  if ((param_4 & 0x100) == 0) {
                    uVar8 = 0;
                    if ((uVar22 & 0xffffffff) != 0) {
                      iVar4 = (int)lVar12;
                      do {
                        cVar1 = ((char *)lVar12)[(int)param_2 - iVar4];
                        iVar17 = (int)cVar1;
                        if (('@' < cVar1) && (cVar1 < '[')) {
                          iVar17 = cVar1 + 0x20;
                        }
                        cVar1 = *(char *)lVar12;
                        iVar13 = (int)cVar1;
                        if (('@' < cVar1) && (cVar1 < '[')) {
                          iVar13 = cVar1 + 0x20;
                        }
                        if (iVar17 != iVar13) goto LAB_9800c600;
                        uVar8 = uVar8 + 1;
                        lVar12 = lVar12 + 1;
                      } while ((uVar8 & 0xffffffff) < (uVar22 & 0xffffffff));
                    }
                    uVar18 = 1;
                  }
                  else {
                    lVar15 = 0;
                    if ((uVar22 & 0xffffffff) != 0) {
                      uVar8 = param_2;
                      do {
                        lVar15 = (ulonglong)*(byte *)uVar8 - (ulonglong)*(byte *)lVar12;
                        if (lVar15 != 0) break;
                        uVar8 = uVar8 + 1;
                        lVar12 = lVar12 + 1;
                      } while ((int)uVar8 != (int)param_2 + (int)uVar22);
                    }
                    uVar18 = (uint)LZCOUNT((int)lVar15) >> 5;
                  }
                  if (uVar18 != 0) {
                    if ((uVar9 & 0xffffffff) != 0) {
                      *puVar10 = uVar20;
                    }
                    return 1;
                  }
                }
              }
              else {
                uVar5 = CONCAT11(*(undefined1 *)(iVar4 + 0x21),*(undefined1 *)(iVar4 + 0x20));
                uVar8 = (ulonglong)uVar5;
                lVar15 = (ulonglong)
                         CONCAT11(*(undefined1 *)(iVar4 + 0x1f),*(undefined1 *)(iVar4 + 0x1e)) +
                         lVar12 + uVar22;
                if (uVar8 == uVar14) {
                  if ((param_4 & 0x100) == 0) {
                    uVar23 = 0;
                    if (uVar8 != 0) {
                      iVar4 = (int)lVar15;
                      do {
                        cVar1 = ((char *)lVar15)[(int)param_3 - iVar4];
                        iVar17 = (int)cVar1;
                        if (('@' < cVar1) && (cVar1 < '[')) {
                          iVar17 = cVar1 + 0x20;
                        }
                        cVar1 = *(char *)lVar15;
                        iVar13 = (int)cVar1;
                        if (('@' < cVar1) && (cVar1 < '[')) {
                          iVar13 = cVar1 + 0x20;
                        }
                        if (iVar17 != iVar13) goto LAB_9800c600;
                        uVar23 = uVar23 + 1;
                        lVar15 = lVar15 + 1;
                      } while ((uVar23 & 0xffffffff) < uVar8);
                    }
                    uVar18 = 1;
                  }
                  else {
                    lVar11 = 0;
                    if (uVar8 != 0) {
                      uVar8 = param_3;
                      do {
                        lVar11 = (ulonglong)*(byte *)uVar8 - (ulonglong)*(byte *)lVar15;
                        if (lVar11 != 0) break;
                        uVar8 = uVar8 + 1;
                        lVar15 = lVar15 + 1;
                      } while ((int)uVar8 != (int)param_3 + (uint)uVar5);
                    }
                    uVar18 = (uint)LZCOUNT((int)lVar11) >> 5;
                  }
                  if (uVar18 != 0) goto LAB_9800c4f4;
                }
              }
            }
LAB_9800c600:
            uVar20 = uVar20 + 1;
            puVar21 = puVar21 + 1;
          } while (uVar20 < *(uint *)(iVar3 + 0x10));
        }
        uVar19 = 0x1c;
        goto LAB_9800c634;
      }
    }
  }
  uVar19 = 0x18;
LAB_9800c634:
  *(undefined4 *)(iVar3 + 0x1c) = uVar19;
  return 0;
}


/* ==== FUN_9800c648 @ 9800c648 ==== */

undefined4 FUN_9800c648(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x18;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar1;
}


/* ==== FUN_9800c670 @ 9800c670 ==== */

ulonglong FUN_9800c670(ulonglong param_1,byte *param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  byte bVar15;
  int *piVar14;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar22;
  longlong lVar20;
  ulonglong uVar21;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  ulonglong in_r11;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  
  iVar22 = (int)in_r11;
  puVar18 = (uint *)param_8;
  piVar14 = (int *)param_5;
  piVar12 = (int *)param_3;
  uVar9 = (ulonglong)(int)param_2;
  bVar2 = (param_1 & 0xffffffff) < 0x20;
  bVar5 = (param_1 & 0xffffffff) == 0x20;
  bVar1 = false;
  bVar3 = false;
  bVar4 = false;
  piVar11 = piVar12;
  switch((int)param_1) {
  case 0:
    while (!bVar5) {
      if (bVar2) {
        param_1 = unaff_r31 + 1;
switchD_9800c69c_caseD_1:
      }
      else {
        unaff_r28 = unaff_r31 - 1;
      }
      bVar1 = (longlong)unaff_r28 < (longlong)param_1;
switchD_9800c69c_caseD_2:
      if (bVar1) {
        iVar22 = 0x1c;
        param_1 = 0;
        goto switchD_9800c69c_caseD_3;
      }
      unaff_r31 = ((longlong)(unaff_r28 - param_1) >> 1) + param_1;
      uVar24 = 0;
      unaff_r30 = *(int *)((int)((unaff_r31 & 0xffffffff) << 2) + (int)unaff_r24);
      lVar20 = *(uint *)(unaff_r30 * 4 + (int)unaff_r26) + unaff_r25;
      iVar22 = (int)lVar20;
      uVar21 = lVar20 + 0x2e;
      uVar8 = CONCAT11(*(undefined1 *)(iVar22 + 0x1d),*(undefined1 *)(iVar22 + 0x1c));
      uVar10 = (ulonglong)uVar8;
      if ((unaff_r27 & 0xffffffff) <= (ulonglong)uVar8) {
        uVar10 = unaff_r27;
      }
      uVar10 = uVar10 + uVar21;
      uVar13 = uVar9;
      uVar17 = 0;
      for (; (uVar21 & 0xffffffff) < (uVar10 & 0xffffffff); uVar21 = uVar21 + 1) {
        bVar6 = *(byte *)uVar21;
        if ((bVar6 < 0x41) || (bVar15 = bVar6 + 0x20, 0x5a < bVar6)) {
          bVar15 = bVar6;
        }
        cVar7 = *(char *)uVar13;
        if ((cVar7 < 'A') || (uVar24 = (int)cVar7 + 0x20, 'Z' < cVar7)) {
          uVar24 = (int)cVar7;
        }
        uVar17 = (uint)bVar15;
        uVar24 = uVar24 & 0xff;
        if (bVar15 != uVar24) break;
        uVar13 = uVar13 + 1;
        uVar17 = (uint)bVar15;
      }
      if ((uVar21 & 0xffffffff) == (uVar10 & 0xffffffff)) {
        iVar22 = (uint)uVar8 - (int)unaff_r27;
      }
      else {
        iVar22 = uVar17 - uVar24;
      }
      bVar2 = iVar22 < 0;
      bVar5 = iVar22 == 0;
    }
    bVar5 = (param_3 & 0xffffffff) == 0;
  case 4:
    if (!bVar5) {
      *piVar12 = unaff_r30;
    }
    param_1 = 1;
switchD_9800c69c_caseD_5:
    return param_1;
  case 1:
    goto switchD_9800c69c_caseD_1;
  case 2:
    goto switchD_9800c69c_caseD_2;
  case 3:
switchD_9800c69c_caseD_3:
    *(int *)((int)unaff_r23 + 0x1c) = iVar22;
    return param_1;
  case 5:
    goto switchD_9800c69c_caseD_5;
  case 6:
    break;
  case 7:
    goto switchD_9800c69c_caseD_7;
  case 8:
    goto switchD_9800c69c_caseD_8;
  case 9:
    goto switchD_9800c69c_caseD_9;
  case 10:
    goto switchD_9800c69c_caseD_a;
  case 0xb:
    goto switchD_9800c69c_caseD_b;
  case 0xc:
    goto switchD_9800c69c_caseD_c;
  case 0xd:
    goto switchD_9800c69c_caseD_d;
  case 0xe:
    goto switchD_9800c69c_caseD_e;
  case 0xf:
    goto switchD_9800c69c_caseD_f;
  case 0x10:
    goto switchD_9800c69c_caseD_10;
  case 0x11:
    goto switchD_9800c69c_caseD_11;
  case 0x12:
    goto switchD_9800c69c_caseD_12;
  case 0x13:
    goto switchD_9800c69c_caseD_13;
  case 0x14:
    goto switchD_9800c69c_caseD_14;
  case 0x15:
    goto switchD_9800c69c_caseD_15;
  case 0x16:
    goto switchD_9800c69c_caseD_16;
  case 0x17:
    goto switchD_9800c69c_caseD_17;
  case 0x18:
    goto switchD_9800c69c_caseD_18;
  case 0x19:
    goto switchD_9800c69c_caseD_19;
  case 0x1a:
    goto switchD_9800c69c_caseD_1a;
  case 0x1b:
    goto switchD_9800c69c_caseD_1b;
  case 0x1c:
    goto switchD_9800c69c_caseD_1c;
  case 0x1d:
    goto switchD_9800c69c_caseD_1d;
  case 0x1e:
    goto switchD_9800c69c_caseD_1e;
  case 0x1f:
    goto switchD_9800c69c_caseD_1f;
  case 0x20:
    goto switchD_9800c69c_caseD_20;
  default:
    return 0xffffffff98001de8;
  }
  bVar5 = (param_5 & 0xffffffff) == 0;
  unaff_r23 = param_1;
switchD_9800c69c_caseD_7:
  if (!bVar5) {
    *piVar14 = 0;
  }
switchD_9800c69c_caseD_8:
  if ((unaff_r23 & 0xffffffff) == 0) {
    return 0;
  }
  param_8 = (ulonglong)*(uint *)((int)unaff_r23 + 0x48);
switchD_9800c69c_caseD_9:
  if ((param_8 & 0xffffffff) != 0) {
    bVar5 = param_2 == (byte *)0x0;
switchD_9800c69c_caseD_a:
    if (!bVar5) {
      in_cr0 = ((*(uint *)((int)param_8 + 0x30) & 0x800) == 0) << 1;
switchD_9800c69c_caseD_b:
      if ((bool)(in_cr0 >> 1 & 1)) {
        bVar5 = *(int *)((int)unaff_r23 + 0x14) == 1;
switchD_9800c69c_caseD_c:
        if ((bVar5) && ((param_4 & 0x300) == 0)) {
switchD_9800c69c_caseD_d:
          if ((param_3 & 0xffffffff) == 0) {
            in_r11 = (ulonglong)*(uint *)((int)param_8 + 0x24);
switchD_9800c69c_caseD_e:
            piVar11 = piVar14;
            if ((in_r11 & 0xffffffff) != 0) {
switchD_9800c69c_caseD_f:
              uVar9 = FUN_9800c160(unaff_r23,uVar9,piVar11);
              return uVar9;
            }
          }
        }
      }
switchD_9800c69c_caseD_10:
      in_r11 = uVar9;
      do {
        param_7 = (ulonglong)*(byte *)in_r11;
        in_r11 = in_r11 + 1;
switchD_9800c69c_caseD_11:
      } while ((param_7 & 0xffffffff) != 0);
      in_r11 = in_r11 - uVar9;
switchD_9800c69c_caseD_12:
      unaff_r24 = in_r11 - 1 & 0xffffffff;
      bVar3 = 0xffff < unaff_r24;
switchD_9800c69c_caseD_13:
      puVar18 = (uint *)param_8;
      if (!bVar3) {
        if ((param_3 & 0xffffffff) == 0) {
switchD_9800c69c_caseD_17:
          unaff_r27 = 0;
        }
        else {
switchD_9800c69c_caseD_14:
          in_r11 = param_3;
          do {
            param_7 = (ulonglong)*(byte *)in_r11;
            in_r11 = in_r11 + 1;
switchD_9800c69c_caseD_15:
            puVar18 = (uint *)param_8;
          } while ((param_7 & 0xffffffff) != 0);
          in_r11 = in_r11 - param_3;
switchD_9800c69c_caseD_16:
          unaff_r27 = in_r11 - 1 & 0xffffffff;
        }
        if (unaff_r27 < 0x10000) {
switchD_9800c69c_caseD_18:
          unaff_r25 = 0;
          bVar4 = *(int *)((int)unaff_r23 + 0x10) != 0;
switchD_9800c69c_caseD_19:
          iVar22 = (int)unaff_r23;
          if (bVar4) {
            unaff_r26 = (ulonglong)*puVar18;
            unaff_r28 = (ulonglong)puVar18[4];
switchD_9800c69c_caseD_1a:
            do {
              lVar20 = *(uint *)unaff_r28 + unaff_r26;
              iVar22 = (int)lVar20;
              param_8 = lVar20 + 0x2e;
switchD_9800c69c_caseD_1b:
              param_6 = (ulonglong)*(byte *)(iVar22 + 0x1c);
              param_7 = (ulonglong)*(byte *)(iVar22 + 0x1d) << 8;
switchD_9800c69c_caseD_1c:
              unaff_r29 = param_7 | param_6;
              if ((unaff_r24 & 0xffffffff) <= (unaff_r29 & 0xffffffff)) {
switchD_9800c69c_caseD_1d:
                if ((unaff_r27 & 0xffffffff) == 0) {
LAB_9800c4f4:
                  if (((param_4 & 0x200) != 0) && ((unaff_r29 & 0xffffffff) != 0)) {
                    lVar20 = unaff_r29 - 1;
                    do {
                      cVar7 = *(char *)((int)lVar20 + (int)param_8);
                      if (((cVar7 == '/') || (cVar7 == '\\')) || (cVar7 == ':')) break;
                      lVar20 = lVar20 + -1;
                    } while (-1 < lVar20);
                    param_8 = lVar20 + 1 + param_8;
                    unaff_r29 = unaff_r29 - (lVar20 + 1);
                  }
                  if ((unaff_r29 & 0xffffffff) == (unaff_r24 & 0xffffffff)) {
                    if ((param_4 & 0x100) == 0) {
                      uVar10 = 0;
                      if ((unaff_r29 & 0xffffffff) != 0) {
                        iVar22 = (int)param_8;
                        do {
                          cVar7 = ((char *)param_8)[(int)param_2 - iVar22];
                          iVar23 = (int)cVar7;
                          if (('@' < cVar7) && (cVar7 < '[')) {
                            iVar23 = cVar7 + 0x20;
                          }
                          cVar7 = *(char *)param_8;
                          iVar19 = (int)cVar7;
                          if (('@' < cVar7) && (cVar7 < '[')) {
                            iVar19 = cVar7 + 0x20;
                          }
                          if (iVar23 != iVar19) goto LAB_9800c600;
                          uVar10 = uVar10 + 1;
                          param_8 = param_8 + 1;
                        } while ((uVar10 & 0xffffffff) < (unaff_r29 & 0xffffffff));
                      }
                      uVar24 = 1;
                    }
                    else {
                      lVar20 = 0;
                      if ((unaff_r29 & 0xffffffff) != 0) {
                        uVar10 = uVar9;
                        do {
                          lVar20 = (ulonglong)*(byte *)uVar10 - (ulonglong)*(byte *)param_8;
                          if (lVar20 != 0) break;
                          uVar10 = uVar10 + 1;
                          param_8 = param_8 + 1;
                        } while ((byte *)uVar10 != param_2 + (int)unaff_r29);
                      }
                      uVar24 = (uint)LZCOUNT((int)lVar20) >> 5;
                    }
                    if (uVar24 != 0) {
                      if ((param_5 & 0xffffffff) != 0) {
                        *piVar14 = (int)unaff_r25;
                      }
                      return 1;
                    }
                  }
                }
                else {
                  param_7 = (ulonglong)*(byte *)(iVar22 + 0x1f);
switchD_9800c69c_caseD_1e:
                  param_6 = (ulonglong)*(byte *)(iVar22 + 0x21);
                  param_1 = (ulonglong)*(byte *)(iVar22 + 0x1e);
                  param_7 = (param_7 & 0xffffff) << 8 | (param_7 & 0xffffffff) >> 0x18;
switchD_9800c69c_caseD_1f:
                  unaff_r31 = (ulonglong)*(byte *)(iVar22 + 0x20);
                  param_6 = (param_6 & 0xffffff) << 8 | (param_6 & 0xffffffff) >> 0x18;
                  in_r11 = param_7 | param_1;
switchD_9800c69c_caseD_20:
                  uVar10 = param_6 | unaff_r31;
                  lVar20 = in_r11 + param_8 + unaff_r29;
                  if ((uVar10 & 0xffffffff) == (unaff_r27 & 0xffffffff)) {
                    if ((param_4 & 0x100) == 0) {
                      uVar21 = 0;
                      if ((uVar10 & 0xffffffff) != 0) {
                        iVar22 = (int)lVar20;
                        do {
                          cVar7 = ((char *)lVar20)[(int)piVar12 - iVar22];
                          iVar23 = (int)cVar7;
                          if (('@' < cVar7) && (cVar7 < '[')) {
                            iVar23 = cVar7 + 0x20;
                          }
                          cVar7 = *(char *)lVar20;
                          iVar19 = (int)cVar7;
                          if (('@' < cVar7) && (cVar7 < '[')) {
                            iVar19 = cVar7 + 0x20;
                          }
                          if (iVar23 != iVar19) goto LAB_9800c600;
                          uVar21 = uVar21 + 1;
                          lVar20 = lVar20 + 1;
                        } while ((uVar21 & 0xffffffff) < (uVar10 & 0xffffffff));
                      }
                      uVar24 = 1;
                    }
                    else {
                      lVar16 = 0;
                      if ((uVar10 & 0xffffffff) != 0) {
                        uVar21 = param_3;
                        do {
                          lVar16 = (ulonglong)*(byte *)uVar21 - (ulonglong)*(byte *)lVar20;
                          if (lVar16 != 0) break;
                          uVar21 = uVar21 + 1;
                          lVar20 = lVar20 + 1;
                        } while ((int)uVar21 != (int)piVar12 + (int)uVar10);
                      }
                      uVar24 = (uint)LZCOUNT((int)lVar16) >> 5;
                    }
                    if (uVar24 != 0) goto LAB_9800c4f4;
                  }
                }
              }
LAB_9800c600:
              iVar22 = (int)unaff_r23;
              unaff_r25 = unaff_r25 + 1;
              unaff_r28 = unaff_r28 + 4;
            } while ((unaff_r25 & 0xffffffff) < (ulonglong)*(uint *)(iVar22 + 0x10));
          }
          uVar25 = 0x1c;
          goto LAB_9800c634;
        }
      }
    }
  }
  iVar22 = (int)unaff_r23;
  uVar25 = 0x18;
LAB_9800c634:
  *(undefined4 *)(iVar22 + 0x1c) = uVar25;
  return 0;
}


/* ==== FUN_9800c838 @ 9800c838 ==== */

undefined4 FUN_9800c838(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}


/* ==== FUN_9800c850 @ 9800c850 ==== */

undefined8 FUN_9800c850(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar11;
  undefined8 uVar10;
  byte bVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar22;
  byte *pbVar23;
  ulonglong uVar21;
  ulonglong uVar24;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x48) == 0)) ||
     ((ulonglong)*(uint *)(param_1 + 0x10) <= (param_2 & 0xffffffff))) {
    uVar21 = 0;
  }
  else {
    uVar21 = (ulonglong)
             *(uint *)((*(uint **)(param_1 + 0x48))[4] + (int)((param_2 & 0xffffffff) << 2)) +
             (ulonglong)**(uint **)(param_1 + 0x48);
  }
  uVar16 = 0;
  iVar11 = FUN_9800dc6c();
  uVar14 = (uint)param_2;
  if ((uVar16 & 0xffffffff) != 0) {
    *(undefined4 *)uVar16 = 0;
  }
  if (((uVar21 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    if (iVar11 != 0) {
      uVar22 = 0x18;
LAB_9800c150:
      *(undefined4 *)(iVar11 + 0x1c) = uVar22;
    }
    uVar10 = 0;
  }
  else {
    puVar15 = (uint *)param_3;
    *puVar15 = uVar14;
    *(ulonglong *)(puVar15 + 2) =
         (ulonglong)
         *(uint *)(*(int *)(*(int *)(iVar11 + 0x48) + 0x10) + (int)((param_2 & 0xffffffff) << 2));
    iVar1 = (int)uVar21;
    *(ushort *)(puVar15 + 4) = CONCAT11(*(undefined1 *)(iVar1 + 5),*(undefined1 *)(iVar1 + 4));
    *(ushort *)((int)puVar15 + 0x12) =
         CONCAT11(*(undefined1 *)(iVar1 + 7),*(undefined1 *)(iVar1 + 6));
    *(ushort *)(puVar15 + 5) = CONCAT11(*(undefined1 *)(iVar1 + 9),*(undefined1 *)(iVar1 + 8));
    *(ushort *)((int)puVar15 + 0x16) =
         CONCAT11(*(undefined1 *)(iVar1 + 0xb),*(undefined1 *)(iVar1 + 10));
    uVar10 = FUN_9800eb08(ZEXT48(&stack0x00000000) - 0x70);
    *(undefined8 *)(puVar15 + 0x114) = uVar10;
    puVar15[6] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x13),
                                            *(undefined1 *)(iVar1 + 0x12)),
                                   *(undefined1 *)(iVar1 + 0x11)),*(undefined1 *)(iVar1 + 0x10));
    *(ulonglong *)(puVar15 + 8) =
         (ulonglong)
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x17),*(undefined1 *)(iVar1 + 0x16)),
                           *(undefined1 *)(iVar1 + 0x15)),*(undefined1 *)(iVar1 + 0x14));
    *(ulonglong *)(puVar15 + 10) =
         (ulonglong)
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1b),*(undefined1 *)(iVar1 + 0x1a)),
                           *(undefined1 *)(iVar1 + 0x19)),*(undefined1 *)(iVar1 + 0x18));
    *(ushort *)(puVar15 + 0xc) =
         CONCAT11(*(undefined1 *)(iVar1 + 0x25),*(undefined1 *)(iVar1 + 0x24));
    puVar15[0xd] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x29),
                                              *(undefined1 *)(iVar1 + 0x28)),
                                     *(undefined1 *)(iVar1 + 0x27)),*(undefined1 *)(iVar1 + 0x26));
    *(ulonglong *)(puVar15 + 0xe) =
         (ulonglong)
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x2d),*(undefined1 *)(iVar1 + 0x2c)),
                           *(undefined1 *)(iVar1 + 0x2b)),*(undefined1 *)(iVar1 + 0x2a));
    uVar24 = (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + 0x1d),*(undefined1 *)(iVar1 + 0x1c));
    if (0x1fe < uVar24) {
      uVar24 = 0x1ff;
    }
    FUN_9800d650(param_3 + 0x50,uVar21 + 0x2e,uVar24);
    *(undefined1 *)((int)puVar15 + (int)uVar24 + 0x50) = 0;
    uVar24 = (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + 0x21),*(undefined1 *)(iVar1 + 0x20));
    if (0x1fe < uVar24) {
      uVar24 = 0x1ff;
    }
    puVar15[0x10] = (uint)uVar24;
    FUN_9800d650(param_3 + 0x250,
                 (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + 0x1f),*(undefined1 *)(iVar1 + 0x1e)) +
                 (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + 0x1d),*(undefined1 *)(iVar1 + 0x1c)) +
                 uVar21 + 0x2e,uVar24);
    *(undefined1 *)((int)puVar15 + (uint)uVar24 + 0x250) = 0;
    bVar12 = FUN_9800bb78(iVar11,uVar14);
    puVar15[0x11] = (int)(char)bVar12;
    bVar13 = FUN_9800ba30(iVar11,uVar14);
    puVar15[0x12] = (int)bVar13;
    uVar10 = FUN_9800baa0(iVar11,uVar14);
    uVar19 = *(ulonglong *)(puVar15 + 8);
    uVar18 = *(ulonglong *)(puVar15 + 10);
    puVar15[0x13] = (uint)uVar10;
    uVar24 = uVar19;
    if (uVar19 <= uVar18) {
      uVar24 = uVar18;
    }
    uVar17 = *(ulonglong *)(puVar15 + 0xe);
    if ((uVar17 < uVar24) && (uVar17 = uVar19, uVar19 <= uVar18)) {
      uVar17 = uVar18;
    }
    if ((uVar17 == 0xffffffff) &&
       (uVar24 = (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + 0x1f),*(undefined1 *)(iVar1 + 0x1e)),
       uVar24 != 0)) {
      lVar20 = CONCAT11(*(undefined1 *)(iVar1 + 0x1d),*(undefined1 *)(iVar1 + 0x1c)) + uVar21 + 0x2e
      ;
      do {
        if ((uVar24 & 0xffffffff) < 4) {
LAB_9800bfc0:
          uVar22 = 9;
          goto LAB_9800c150;
        }
        puVar2 = (undefined1 *)lVar20;
        uVar21 = (ulonglong)CONCAT11(puVar2[3],puVar2[2]);
        if ((uVar24 & 0xffffffff) < uVar21 + 4) goto LAB_9800bfc0;
        if (CONCAT11(puVar2[1],*puVar2) == 1) {
          pbVar23 = puVar2 + 4;
          if ((uVar16 & 0xffffffff) != 0) {
            *(undefined4 *)uVar16 = 1;
          }
          if (*(longlong *)(puVar15 + 10) == 0xffffffff) {
            if (uVar21 < 8) goto LAB_9800bfc0;
            uVar21 = uVar21 - 8;
            bVar12 = *pbVar23;
            pbVar23 = puVar2 + 0xc;
            *(ulonglong *)(puVar15 + 10) =
                 (ulonglong)CONCAT31(CONCAT21(CONCAT11(puVar2[0xb],puVar2[10]),puVar2[9]),puVar2[8])
                 << 0x20 | (ulonglong)CONCAT21(CONCAT11(puVar2[7],puVar2[6]),puVar2[5]) << 8 |
                 (ulonglong)bVar12;
          }
          if (*(longlong *)(puVar15 + 8) == 0xffffffff) {
            if ((uVar21 & 0xffffffff) < 8) goto LAB_9800bfc0;
            pbVar3 = pbVar23 + 7;
            uVar21 = uVar21 - 8;
            pbVar4 = pbVar23 + 6;
            pbVar5 = pbVar23 + 3;
            pbVar6 = pbVar23 + 5;
            pbVar7 = pbVar23 + 2;
            pbVar8 = pbVar23 + 4;
            pbVar9 = pbVar23 + 1;
            bVar12 = *pbVar23;
            pbVar23 = pbVar23 + 8;
            *(ulonglong *)(puVar15 + 8) =
                 (ulonglong)CONCAT31(CONCAT21(CONCAT11(*pbVar3,*pbVar4),*pbVar6),*pbVar8) << 0x20 |
                 (ulonglong)CONCAT21(CONCAT11(*pbVar5,*pbVar7),*pbVar9) << 8 | (ulonglong)bVar12;
          }
          if (*(longlong *)(puVar15 + 0xe) == 0xffffffff) {
            if ((uVar21 & 0xffffffff) < 8) goto LAB_9800bfc0;
            *(ulonglong *)(puVar15 + 0xe) =
                 (ulonglong)
                 CONCAT31(CONCAT21(CONCAT11(pbVar23[7],pbVar23[6]),pbVar23[5]),pbVar23[4]) << 0x20 |
                 (ulonglong)CONCAT21(CONCAT11(pbVar23[3],pbVar23[2]),pbVar23[1]) << 8 |
                 (ulonglong)*pbVar23;
          }
          break;
        }
        uVar24 = (uVar24 - uVar21) - 4;
        lVar20 = uVar21 + lVar20 + 4;
      } while (uVar24 != 0);
    }
    uVar10 = 1;
  }
  return uVar10;
}


/* ==== FUN_9800c8a0 @ 9800c8a0 ==== */

bool FUN_9800c8a0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                 ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  ulonglong *puVar3;
  undefined8 uVar1;
  int iVar4;
  ulonglong uVar2;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_25b0;
  undefined1 local_25af;
  undefined1 local_25ae;
  undefined1 local_25ad;
  undefined1 local_2596;
  undefined1 local_2595;
  undefined1 local_2594;
  undefined1 local_2593;
  ushort local_257c;
  short local_257a;
  uint local_2578;
  ulonglong local_2570;
  ulonglong local_2568;
  longlong local_2558;
  int local_254c;
  
  uVar2 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)FUN_9800dc50();
  uVar7 = 0;
  uVar8 = 0;
  if (puVar3 == (ulonglong *)0x0) {
    return false;
  }
  if ((((*(int *)(puVar3 + 9) == 0) ||
       (((param_4 & 0xffffffff) != 0 && ((param_3 & 0xffffffff) == 0)))) ||
      (((param_7 & 0xffffffff) != 0 && ((param_6 & 0xffffffff) == 0)))) ||
     (*(int *)(puVar3 + 7) == 0)) {
    uVar6 = 0x18;
  }
  else {
    if ((param_8 & 0xffffffff) == 0) {
      uVar1 = FUN_9800c850((int)puVar3,param_2,uVar2 - 0x2590);
      if ((int)uVar1 == 0) {
        return false;
      }
    }
    else {
      FUN_9800d650(uVar2 - 0x2590,param_8,0x458);
    }
    if ((local_254c != 0) || (local_2570 == 0)) {
      return true;
    }
    if ((local_257c & 0x61) == 0) {
      uVar10 = param_5 & 0x400;
      if (((uVar10 == 0) && (local_257a != 0)) && (local_257a != 8)) {
        uVar6 = 4;
      }
      else {
        uVar11 = local_2570;
        if (uVar10 == 0) {
          uVar11 = local_2568;
        }
        if ((param_4 & 0xffffffff) < uVar11) {
          uVar6 = 0x1a;
        }
        else {
          iVar4 = (**(code **)(puVar3 + 7))
                            (*(undefined4 *)((int)puVar3 + 0x44),local_2558,uVar2 - 0x25b0,0x1e);
          if (iVar4 == 0x1e) {
            if ((CONCAT31(CONCAT21(CONCAT11(local_25ad,local_25ae),local_25af),local_25b0) !=
                 0x4034b50) ||
               (uVar9 = (ulonglong)CONCAT11(local_2595,local_2596) +
                        (ulonglong)CONCAT11(local_2593,local_2594) + local_2558 + 0x1e,
               *puVar3 < uVar9 + local_2570)) {
              uVar6 = 9;
              goto LAB_9800ccb8;
            }
            if ((uVar10 == 0) && (local_257a != 0)) {
              if ((ulonglong)*(uint *)(*(int *)(puVar3 + 9) + 0x48) == 0) {
                if ((param_6 & 0xffffffff) == 0) {
                  uVar10 = 0x10000;
                  if (local_2570 < 0x10000) {
                    uVar10 = local_2570;
                  }
                  if (0x7fffffff < uVar10) {
                    uVar6 = 0x1b;
                    goto LAB_9800ccb8;
                  }
                  uVar11 = (**(code **)(puVar3 + 5))
                                     (*(undefined4 *)((int)puVar3 + 0x34),1,uVar10 & 0xffffffff);
                  if (uVar11 == 0) {
                    uVar6 = 0x10;
                    goto LAB_9800ccb8;
                  }
                }
                else {
                  if ((param_7 & 0xffffffff) == 0) {
                    return false;
                  }
                  uVar10 = param_7 & 0xffffffff;
                  uVar11 = param_6;
                }
                uVar13 = 0;
                uVar12 = local_2570;
              }
              else {
                uVar11 = (uVar9 & 0xffffffff) + (ulonglong)*(uint *)(*(int *)(puVar3 + 9) + 0x48);
                uVar10 = local_2570;
                uVar12 = 0;
                uVar13 = local_2570;
              }
              do {
                if ((uVar13 == 0) && (*(int *)(*(int *)(puVar3 + 9) + 0x48) == 0)) {
                  uVar13 = uVar10;
                  if (uVar12 <= uVar10) {
                    uVar13 = uVar12;
                  }
                  uVar8 = (**(code **)(puVar3 + 7))
                                    (*(undefined4 *)((int)puVar3 + 0x44),uVar9,uVar11,
                                     uVar13 & 0xffffffff);
                  if ((uVar8 & 0xffffffff) != uVar13) {
                    iVar4 = -1;
                    *(undefined4 *)((int)puVar3 + 0x1c) = 0xb;
                    break;
                  }
                  uVar9 = uVar13 + uVar9;
                  uVar12 = uVar12 - uVar13;
                  uVar8 = 0;
                }
                uVar5 = 2;
                if (uVar12 == 0) {
                  uVar5 = 0;
                }
                iVar4 = FUN_98009168(uVar2 - 0x2130,(uVar8 & 0xffffffff) + uVar11,uVar2 - 0x25c0,
                                     param_3,(uVar7 & 0xffffffff) + param_3,uVar2 - 0x25bc,uVar5 | 4
                                    );
                uVar5 = uVar13 & 0xffffffff;
                uVar13 = uVar13 - uVar5;
                uVar8 = uVar5 + uVar8;
                uVar7 = (uint)((int)local_2568 - (int)uVar7) + uVar7;
              } while (iVar4 == 1);
              if (iVar4 == 0) {
                if (uVar7 == local_2568) {
                  uVar2 = FUN_98009088(0,(byte *)param_3,local_2568 & 0xffffffff);
                  if ((uVar2 & 0xffffffff) == (ulonglong)local_2578) goto LAB_9800cc20;
                  uVar6 = 0xe;
                }
                else {
                  uVar6 = 0xd;
                }
                *(undefined4 *)((int)puVar3 + 0x1c) = uVar6;
                iVar4 = -1;
              }
LAB_9800cc20:
              if ((*(int *)(*(int *)(puVar3 + 9) + 0x48) == 0) && ((param_6 & 0xffffffff) == 0)) {
                (**(code **)((int)puVar3 + 0x2c))(*(undefined4 *)((int)puVar3 + 0x34),uVar11);
              }
              return iVar4 == 0;
            }
            uVar2 = (**(code **)(puVar3 + 7))
                              (*(undefined4 *)((int)puVar3 + 0x44),uVar9,param_3,uVar11 & 0xffffffff
                              );
            if ((uVar2 & 0xffffffff) == uVar11) {
              if (uVar10 != 0) {
                return true;
              }
              uVar2 = FUN_98009088(0,(byte *)param_3,local_2568 & 0xffffffff);
              if ((uVar2 & 0xffffffff) == (ulonglong)local_2578) {
                return true;
              }
              uVar6 = 0xe;
              goto LAB_9800ccb8;
            }
          }
          uVar6 = 0x14;
        }
      }
    }
    else {
      uVar6 = 5;
    }
  }
LAB_9800ccb8:
  *(undefined4 *)((int)puVar3 + 0x1c) = uVar6;
  return false;
}


/* ==== FUN_9800ccc8 @ 9800ccc8 ==== */

bool FUN_9800ccc8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                 ulonglong param_5)

{
  bool bVar1;
  
  bVar1 = FUN_9800c8a0(param_1,param_2,param_3,param_4,param_5,0,0,0);
  return bVar1;
}


/* ==== FUN_9800ccd8 @ 9800ccd8 ==== */

void FUN_9800ccd8(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                 ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong *puVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  ulonglong uVar3;
  code *pcVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 local_25d0;
  undefined1 local_25cf;
  undefined1 local_25ce;
  undefined1 local_25cd;
  undefined1 local_25b6;
  undefined1 local_25b5;
  undefined1 local_25b4;
  undefined1 local_25b3;
  ushort local_259c;
  short local_259a;
  uint uStack_2598;
  ulonglong local_2590;
  ulonglong local_2588;
  longlong local_2578;
  int local_256c;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)FUN_9800dc40();
  iVar6 = 0;
  uVar11 = 0;
  uVar16 = 0;
  uVar13 = 0;
  uVar10 = 0;
  if (puVar4 == (ulonglong *)0x0) goto LAB_9800d1cc;
  if (((*(int *)(puVar4 + 9) == 0) || ((param_3 & 0xffffffff) == 0)) || (*(int *)(puVar4 + 7) == 0))
  {
    uVar9 = 0x18;
    goto LAB_9800d1c4;
  }
  uVar2 = FUN_9800c850((int)puVar4,param_2,uVar3 - 0x25b0);
  if ((((int)uVar2 == 0) || (local_256c != 0)) || (local_2590 == 0)) goto LAB_9800d1cc;
  if ((local_259c & 0x61) == 0) {
    uVar1 = param_5 & 0x400;
    if (((uVar1 == 0) && (local_259a != 0)) && (local_259a != 8)) {
      uVar9 = 4;
    }
    else {
      iVar5 = (**(code **)(puVar4 + 7))
                        (*(undefined4 *)((int)puVar4 + 0x44),local_2578,uVar3 - 0x25d0,0x1e);
      if (iVar5 == 0x1e) {
        if ((CONCAT31(CONCAT21(CONCAT11(local_25cd,local_25ce),local_25cf),local_25d0) == 0x4034b50)
           && (uVar15 = (ulonglong)CONCAT11(local_25b5,local_25b6) +
                        (ulonglong)CONCAT11(local_25b3,local_25b4) + local_2578 + 0x1e,
              uVar15 + local_2590 <= *puVar4)) {
          if ((ulonglong)*(uint *)(*(int *)(puVar4 + 9) + 0x48) == 0) {
            uVar12 = 0x10000;
            if (local_2590 < 0x10000) {
              uVar12 = local_2590;
            }
            lVar14 = (**(code **)(puVar4 + 5))
                               (*(undefined4 *)((int)puVar4 + 0x34),1,uVar12 & 0xffffffff);
            if (lVar14 == 0) {
              uVar9 = 0x10;
              goto LAB_9800d1c4;
            }
            uVar18 = 0;
            uVar17 = local_2590;
          }
          else {
            lVar14 = (uVar15 & 0xffffffff) + (ulonglong)*(uint *)(*(int *)(puVar4 + 9) + 0x48);
            uVar12 = local_2590;
            uVar17 = 0;
            uVar18 = local_2590;
          }
          pcVar7 = (code *)param_3;
          if ((uVar1 == 0) && (local_259a != 0)) {
            uVar10 = (**(code **)(puVar4 + 5))(*(undefined4 *)((int)puVar4 + 0x34),1,0x8000);
            if (uVar10 == 0) {
              uVar9 = 0x10;
              goto LAB_9800d164;
            }
            do {
              if ((uVar18 == 0) && (*(int *)(*(int *)(puVar4 + 9) + 0x48) == 0)) {
                uVar18 = uVar12;
                if (uVar17 <= uVar12) {
                  uVar18 = uVar17;
                }
                uVar16 = (**(code **)(puVar4 + 7))
                                   (*(undefined4 *)((int)puVar4 + 0x44),uVar15,lVar14,
                                    uVar18 & 0xffffffff);
                if ((uVar16 & 0xffffffff) != uVar18) goto LAB_9800d000;
                uVar15 = uVar18 + uVar15;
                uVar17 = uVar17 - uVar18;
                uVar16 = 0;
              }
              uVar2 = 2;
              if (uVar17 == 0) {
                uVar2 = 0;
              }
              iVar6 = FUN_98009168(uVar3 - 0x2150,(uVar16 & 0xffffffff) + lVar14,uVar3 - 0x25e0,
                                   uVar10,uVar10,uVar3 - 0x25dc,uVar2);
              uVar8 = uVar18 & 0xffffffff;
              uVar18 = uVar18 - uVar8;
              uVar16 = uVar8 + uVar16;
              iVar5 = (*pcVar7)(param_4,uVar13,uVar10,0x8000);
              if (iVar5 != 0x8000) {
                uVar9 = 0x1f;
                goto LAB_9800d164;
              }
              uVar11 = FUN_98009088(uVar11,(byte *)uVar10,0x8000);
              uVar13 = uVar13 + 0x8000;
              if (local_2588 < uVar13) goto LAB_9800d160;
            } while ((iVar6 == 1) || (iVar6 == 2));
LAB_9800d134:
            if (iVar6 == 0) goto LAB_9800d13c;
          }
          else {
            if (*(int *)(*(int *)(puVar4 + 9) + 0x48) != 0) {
              if (0xffffffff < local_2590) {
                uVar9 = 0x1b;
                goto LAB_9800d1c4;
              }
              uVar3 = (*pcVar7)(param_4,0,lVar14,local_2590 & 0xffffffff);
              uVar13 = local_2590;
              if ((uVar3 & 0xffffffff) == local_2590) {
                if (uVar1 == 0) {
                  uVar11 = FUN_98009088(0,(byte *)lVar14,local_2590 & 0xffffffff);
                }
              }
              else {
                iVar6 = -1;
                *(undefined4 *)((int)puVar4 + 0x1c) = 0x1f;
              }
              goto LAB_9800d134;
            }
            for (; uVar17 != 0; uVar17 = uVar17 - uVar3) {
              uVar3 = uVar12;
              if (uVar17 <= uVar12) {
                uVar3 = uVar17;
              }
              uVar16 = uVar3 & 0xffffffff;
              uVar18 = (**(code **)(puVar4 + 7))
                                 (*(undefined4 *)((int)puVar4 + 0x44),uVar15,lVar14,uVar16);
              if ((uVar18 & 0xffffffff) != uVar3) goto LAB_9800d000;
              if (uVar1 == 0) {
                uVar11 = FUN_98009088(uVar11,(byte *)lVar14,uVar16);
              }
              uVar16 = (*pcVar7)(param_4,uVar13,lVar14,uVar16);
              if ((uVar16 & 0xffffffff) != uVar3) {
                iVar6 = -1;
                *(undefined4 *)((int)puVar4 + 0x1c) = 0x1f;
                goto LAB_9800d134;
              }
              uVar15 = uVar3 + uVar15;
              uVar13 = uVar3 + uVar13;
            }
LAB_9800d13c:
            if (uVar1 == 0) {
              if (uVar13 == local_2588) {
                if ((uVar11 & 0xffffffff) == (ulonglong)uStack_2598) goto LAB_9800d16c;
LAB_9800d160:
                uVar9 = 0xb;
              }
              else {
                uVar9 = 0xd;
              }
LAB_9800d164:
              *(undefined4 *)((int)puVar4 + 0x1c) = uVar9;
            }
          }
LAB_9800d16c:
          if (*(int *)(*(int *)(puVar4 + 9) + 0x48) == 0) {
            (**(code **)((int)puVar4 + 0x2c))(*(undefined4 *)((int)puVar4 + 0x34),lVar14);
          }
          if ((uVar10 & 0xffffffff) != 0) {
            (**(code **)((int)puVar4 + 0x2c))(*(undefined4 *)((int)puVar4 + 0x34),uVar10);
          }
          goto LAB_9800d1cc;
        }
        uVar9 = 9;
      }
      else {
        uVar9 = 0x14;
      }
    }
  }
  else {
    uVar9 = 5;
  }
LAB_9800d1c4:
  *(undefined4 *)((int)puVar4 + 0x1c) = uVar9;
LAB_9800d1cc:
  FUN_9800dc90();
  return;
LAB_9800d000:
  uVar9 = 0x14;
  goto LAB_9800d164;
}


/* ==== entry @ 9800d130 ==== */

void entry(void)

{
  undefined4 in_r11;
  undefined4 uVar1;
  int unaff_r14;
  undefined4 unaff_00000078;
  int unaff_r15;
  int unaff_r16;
  longlong unaff_r19;
  int unaff_r20;
  longlong unaff_r22;
  undefined8 unaff_r23;
  int unaff_r28;
  int in_stack_00000098;
  
  *(undefined4 *)(unaff_r28 + 0x1c) = in_r11;
  if ((unaff_r20 == 0) && (unaff_r14 == 0)) {
    if (unaff_r22 == unaff_r19) {
      if (unaff_r16 == in_stack_00000098) goto LAB_9800d16c;
      uVar1 = 0xb;
    }
    else {
      uVar1 = 0xd;
    }
    *(undefined4 *)(unaff_r28 + 0x1c) = uVar1;
  }
LAB_9800d16c:
  if (*(int *)(*(int *)(unaff_r28 + 0x48) + 0x48) == 0) {
    (**(code **)(unaff_r28 + 0x2c))(*(undefined4 *)(unaff_r28 + 0x34),unaff_r23);
  }
  if (unaff_r15 != 0) {
    (**(code **)(unaff_r28 + 0x2c))
              (*(undefined4 *)(unaff_r28 + 0x34),CONCAT44(unaff_00000078,unaff_r15));
  }
  FUN_9800dc90();
  return;
}


/* ==== FUN_9800d1d8 @ 9800d1d8 ==== */

void FUN_9800d1d8(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint local_30 [12];
  
  uVar1 = FUN_9800dc78();
  uVar2 = FUN_9800c2e0(uVar1,param_2,0,param_5,local_30);
  if ((int)uVar2 != 0) {
    FUN_9800ccd8(uVar1,(ulonglong)local_30[0],param_3,param_4,param_5);
  }
  return;
}


/* ==== FUN_9800d238 @ 9800d238 ==== */

undefined8 FUN_9800d238(undefined8 param_1,int param_2,int param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iStack00000024;
  
  iStack00000024 = param_3;
  if (param_2 == 1) {
    iVar2 = FUN_98016a10();
    if (iVar2 != 0) {
      iVar2 = FUN_9800f330();
      if (iVar2 != 0) {
        iVar2 = FUN_98016938();
        if ((iVar2 == 0) && (iVar2 = FUN_98016858(), iVar2 == 0)) {
          iRam9801c944 = iRam9801c944 + 1;
          goto LAB_9800d2b0;
        }
        if (pcRam9801b9f0 != (code *)0x0) {
          (*pcRam9801b9f0)();
        }
        FUN_9800f0a0();
      }
      FUN_980169b0();
    }
LAB_9800d26c:
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      if (iRam9801c944 < 1) goto LAB_9800d26c;
      iRam9801c944 = iRam9801c944 + -1;
      if (DAT_9801c968 == 0) {
        FUN_9800f688();
      }
      if (param_3 == 0) {
        if (pcRam9801b9f0 != (code *)0x0) {
          (*pcRam9801b9f0)();
        }
        FUN_9800f0a0();
        FUN_980169b0();
      }
      FUN_9800d384();
    }
LAB_9800d2b0:
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== FUN_9800d384 @ 9800d384 ==== */

void FUN_9800d384(void)

{
  int unaff_r30;
  
  if ((unaff_r30 == 0) && (DAT_9801b390 != -1)) {
    FUN_9800f0a0();
  }
  return;
}


/* ==== FUN_9800d3d8 @ 9800d3d8 ==== */

ulonglong FUN_9800d3d8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = FUN_9800dc74();
  if (((param_2 & 0xffffffff) == 0) && (iRam9801c944 == 0)) {
    uVar2 = 0;
  }
  else if ((((param_2 & 0xffffffff) == 1) || ((param_2 & 0xffffffff) == 2)) &&
          (lVar3 = FUN_9800d238(uVar1,param_2,param_3,param_4,param_5,param_6), lVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_98007070(uVar1,param_2,param_3);
    if (((param_2 & 0xffffffff) == 1) && ((int)uVar2 == 0)) {
      FUN_98007070(uVar1,0,param_3);
      FUN_9800d238(uVar1,0,param_3);
    }
    if (((param_2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 3)) {
      lVar3 = FUN_9800d238(uVar1,param_2,param_3);
      uVar2 = -(ulonglong)(lVar3 != 0) & uVar2;
    }
  }
  return uVar2;
}


/* ==== FUN_9800d500 @ 9800d500 ==== */

void FUN_9800d500(undefined4 *param_1)

{
  FUN_9800f8b0(*(int *)*param_1,param_1);
  return;
}


/* ==== FUN_9800d538 @ 9800d538 ==== */

void FUN_9800d538(undefined4 param_1)

{
  DAT_9801c948 = param_1;
  return;
}


/* ==== FUN_9800d548 @ 9800d548 ==== */

void FUN_9800d548(void)

{
  undefined8 in_r0;
  
  if (DAT_9801c948 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x9800d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_9801c948)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_9800d580 @ 9800d580 ==== */

void FUN_9800d580(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar2;
  ulonglong uVar1;
  uint local_aac [2];
  undefined4 local_aa4;
  uint auStack_a60 [662];
  undefined4 local_8;
  
  iVar2 = FUN_9800dc7c();
  if (iVar2 != -1) {
    FUN_9800f8d0();
  }
  FUN_9800dcf0(local_aac,0,0x4c);
  FUN_9800dcf0(auStack_a60,0,0xa40);
  local_aa4 = local_8;
  local_aac[0] = param_3;
  FUN_98016ae8(0);
  uVar1 = FUN_98016b00(ZEXT48(&stack0x00000000) - 0xac0);
  if (((uVar1 & 0xffffffff) == 0) && (iVar2 != -1)) {
    FUN_9800f8d0();
  }
  return;
}


/* ==== FUN_9800d620 @ 9800d620 ==== */

void FUN_9800d620(void)

{
  ulonglong uVar1;
  int iVar3;
  uint uVar4;
  longlong lVar2;
  undefined4 uVar5;
  
  FUN_9800d580(2,0xffffffffc0000417,1);
  uVar1 = func_0x9801ac80(0x1e);
  if ((uVar1 & 0xffffffff) != 0) {
    iVar3 = FUN_98019fa0();
    uVar4 = FUN_980193c8((longlong)iVar3,0,uVar1);
    if (uVar4 == 0) {
      lVar2 = FUN_9800f950();
      uVar4 = thunk_FUN_98008b10();
      uVar5 = FUN_9800f8e0(uVar4);
      *(undefined4 *)lVar2 = uVar5;
    }
  }
  return;
}


/* ==== thunk_FUN_9800dd90 @ 9800d648 ==== */

void thunk_FUN_9800dd90(ulonglong param_1)

{
  int iVar2;
  uint uVar3;
  longlong lVar1;
  undefined4 uVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar2 = FUN_98019fa0();
    uVar3 = FUN_980193c8((longlong)iVar2,0,param_1);
    if (uVar3 == 0) {
      lVar1 = FUN_9800f950();
      uVar3 = thunk_FUN_98008b10();
      uVar4 = FUN_9800f8e0(uVar3);
      *(undefined4 *)lVar1 = uVar4;
    }
  }
  return;
}


/* ==== FUN_9800d650 @ 9800d650 ==== */

ulonglong FUN_9800d650(ulonglong param_1,ulonglong param_2,ulonglong param_3)

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
LAB_9800d6b4:
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
              if (uVar10 == 0) goto LAB_9800d8a8;
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
LAB_9800d8a8:
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
              if (uVar10 == 0) goto LAB_9800d9d8;
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
LAB_9800d9d8:
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
            if (uVar10 == 0) goto LAB_9800d6dc;
          }
          if (!bVar1) {
            dataCacheBlockTouchForStore(lVar21 + -1);
            bVar1 = false;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_9800d6dc;
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
    goto LAB_9800d6b4;
  }
  dataCacheBlockTouchForStore(uVar10);
  uVar15 = param_2 - 8;
  uVar11 = uVar10 - 8;
LAB_9800d6dc:
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


/* ==== FUN_9800dad8 @ 9800dad8 ==== */

void FUN_9800dad8(undefined4 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = param_3 + 1;
  for (; lVar3 = lVar3 + -1, lVar3 != 0 && ((uint)param_1 & 3) != 0;
      param_1 = (undefined4 *)((int)param_1 + 1)) {
    param_3 = param_3 - 1;
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
  }
  uVar4 = (param_3 & 0xffffffff) >> 2;
  if (uVar4 != 0) {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  uVar4 = param_3 & 3;
  if (uVar4 != 0) {
    do {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    return;
  }
  return;
}


/* ==== FUN_9800db80 @ 9800db80 ==== */

void FUN_9800db80(ulonglong param_1,ulonglong param_2,ulonglong param_3)

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
  FUN_9800d650(param_1,param_2,param_3);
  return;
}


/* ==== FUN_9800dc40 @ 9800dc40 ==== */

void FUN_9800dc40(void)

{
  return;
}


/* ==== FUN_9800dc4c @ 9800dc4c ==== */

void FUN_9800dc4c(void)

{
  return;
}


/* ==== FUN_9800dc50 @ 9800dc50 ==== */

void FUN_9800dc50(void)

{
  return;
}


/* ==== FUN_9800dc54 @ 9800dc54 ==== */

void FUN_9800dc54(void)

{
  return;
}


/* ==== FUN_9800dc58 @ 9800dc58 ==== */

void FUN_9800dc58(void)

{
  return;
}


/* ==== FUN_9800dc5c @ 9800dc5c ==== */

void FUN_9800dc5c(void)

{
  return;
}


/* ==== FUN_9800dc60 @ 9800dc60 ==== */

void FUN_9800dc60(void)

{
  return;
}


/* ==== FUN_9800dc64 @ 9800dc64 ==== */

void FUN_9800dc64(void)

{
  return;
}


/* ==== FUN_9800dc68 @ 9800dc68 ==== */

void FUN_9800dc68(void)

{
  return;
}


/* ==== FUN_9800dc6c @ 9800dc6c ==== */

void FUN_9800dc6c(void)

{
  return;
}


/* ==== FUN_9800dc70 @ 9800dc70 ==== */

void FUN_9800dc70(void)

{
  return;
}


/* ==== FUN_9800dc74 @ 9800dc74 ==== */

void FUN_9800dc74(void)

{
  return;
}


/* ==== FUN_9800dc78 @ 9800dc78 ==== */

void FUN_9800dc78(void)

{
  return;
}


/* ==== FUN_9800dc7c @ 9800dc7c ==== */

void FUN_9800dc7c(void)

{
  return;
}


/* ==== FUN_9800dc90 @ 9800dc90 ==== */

void FUN_9800dc90(void)

{
  return;
}


/* ==== FUN_9800dcf0 @ 9800dcf0 ==== */

void FUN_9800dcf0(uint *param_1,uint param_2,ulonglong param_3)

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
                    /* WARNING: Could not recover jumptable at 0x9800dd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x9800dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_9800dd90 @ 9800dd90 ==== */

void FUN_9800dd90(ulonglong param_1)

{
  int iVar2;
  uint uVar3;
  longlong lVar1;
  undefined4 uVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar2 = FUN_98019fa0();
    uVar3 = FUN_980193c8((longlong)iVar2,0,param_1);
    if (uVar3 == 0) {
      lVar1 = FUN_9800f950();
      uVar3 = thunk_FUN_98008b10();
      uVar4 = FUN_9800f8e0(uVar3);
      *(undefined4 *)lVar1 = uVar4;
    }
  }
  return;
}


/* ==== FUN_9800ddf0 @ 9800ddf0 ==== */

uint * FUN_9800ddf0(void)

{
  ulonglong uVar1;
  int iVar4;
  uint *puVar5;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar6;
  
  uVar1 = FUN_9800dc78();
  if ((uVar1 & 0xffffffff) < 0xfffff001) {
    do {
      iVar4 = FUN_98019fa0();
      if (iVar4 == 0) {
        FUN_9800faa8();
        FUN_9800fa78(0x1e);
        FUN_9800f408();
      }
      uVar6 = uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        uVar6 = 1;
      }
      iVar4 = FUN_98019fa0();
      puVar5 = FUN_98018ad0((longlong)iVar4,0,uVar6);
      if (puVar5 != (uint *)0x0) {
        return puVar5;
      }
      if (DAT_9801c970 == 0) {
        lVar3 = FUN_9800f950();
        *(undefined4 *)lVar3 = 0xc;
        break;
      }
      uVar2 = FUN_9800e4e0();
    } while ((int)uVar2 != 0);
    lVar3 = FUN_9800f950();
    *(undefined4 *)lVar3 = 0xc;
  }
  else {
    FUN_9800e4e0();
    lVar3 = FUN_9800f950();
    *(undefined4 *)lVar3 = 0xc;
  }
  return (uint *)0x0;
}


/* ==== FUN_9800deb8 @ 9800deb8 ==== */

void FUN_9800deb8(void)

{
  uRam9801b508 = 0x98010430;
  pcRam9801b50c = FUN_9800f8d0;
  uRam9801b510 = 0x9800f8c0;
  uRam9801b514 = 0x9800f8c8;
  uRam9801b518 = 0x9800f840;
  uRam9801b51c = 0x98010430;
  uRam9801b520 = 0x980103e0;
  uRam9801b524 = 0x9800f860;
  uRam9801b528 = 0x9800f790;
  uRam9801b52c = 0x9800f6f0;
  return;
}


/* ==== FUN_9800df58 @ 9800df58 ==== */

undefined8
FUN_9800df58(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
            longlong param_5)

{
  undefined1 *puVar3;
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar4;
  uint local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  
  puVar3 = (undefined1 *)FUN_9800dc70();
  FUN_9800dcf0(&local_5c,0,0x1c);
  if (((param_3 & 0xffffffff) == 0) ||
     (((param_2 & 0xffffffff) != 0 && (puVar3 == (undefined1 *)0x0)))) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    local_5c = 0x7fffffff;
    if ((param_2 & 0xffffffff) < 0x80000000) {
      local_5c = (uint)param_2;
    }
    local_54 = 0x42;
    local_58 = puVar3;
    uVar2 = FUN_98010bc8(ZEXT48(&stack0x00000000) - 0x60,param_3,param_4,param_5);
    if (puVar3 != (undefined1 *)0x0) {
      uVar4 = (ulonglong)local_5c;
      local_5c = (uint)(uVar4 - 1);
      if ((longlong)(uVar4 - 1) < 0) {
        FUN_98010888(0,ZEXT48(&stack0x00000000) - 0x60);
      }
      else {
        *puVar3 = 0;
      }
    }
  }
  return uVar2;
}


/* ==== FUN_9800e040 @ 9800e040 ==== */

void FUN_9800e040(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  FUN_9800df58(param_1,param_2,param_3,0,param_4);
  return;
}


/* ==== FUN_9800e088 @ 9800e088 ==== */

undefined8 FUN_9800e088(void)

{
  undefined4 *in_r11;
  
  *in_r11 = 0;
  return 0;
}


/* ==== FUN_9800e0b0 @ 9800e0b0 ==== */

uint FUN_9800e0b0(void)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint local_60;
  
  local_60 = FUN_9800dc64();
  FUN_9800f410();
  puVar6 = DAT_9801cd8c;
  uVar5 = ZEXT48(DAT_9801cd90);
  if (uVar5 <= ZEXT48(DAT_9801cd8c)) {
    lVar3 = ZEXT48(DAT_9801cd8c) - uVar5;
    uVar4 = lVar3 + 4;
    if (3 < (uVar4 & 0xffffffff)) {
      uVar1 = FUN_980116f8((int)DAT_9801cd90);
      if ((uVar1 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        uVar4 = uVar1;
        if (0x7ff < (uVar1 & 0xffffffff)) {
          uVar4 = 0x800;
        }
        if ((((uVar4 + uVar1 & 0xffffffff) < (uVar1 & 0xffffffff)) ||
            (puVar2 = FUN_9800eb10(uVar5,uVar4 + uVar1), puVar2 == (uint *)0x0)) &&
           (((uVar1 + 0x10 & 0xffffffff) < (uVar1 & 0xffffffff) ||
            (puVar2 = FUN_9800eb10(uVar5,uVar1 + 0x10), puVar2 == (uint *)0x0)))) goto LAB_9800e174;
        puVar6 = puVar2 + ((int)lVar3 >> 2);
        DAT_9801cd90 = puVar2;
      }
      DAT_9801cd8c = puVar6 + 1;
      *puVar6 = local_60;
      goto LAB_9800dcb4;
    }
  }
LAB_9800e174:
  local_60 = 0;
LAB_9800dcb4:
  FUN_9800e194();
  return local_60;
}


/* ==== FUN_9800e194 @ 9800e194 ==== */

void FUN_9800e194(void)

{
  FUN_9800f418();
  return;
}


/* ==== FUN_9800e1b8 @ 9800e1b8 ==== */

longlong FUN_9800e1b8(void)

{
  uint uVar1;
  
  uVar1 = FUN_9800e0b0();
  return -(ulonglong)(uVar1 == 0);
}


/* ==== FUN_9800e1e0 @ 9800e1e0 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_9800e1e0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 *puVar3;
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar4;
  undefined4 uStack00000024;
  uint local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  
  puVar3 = (undefined1 *)FUN_9800dc78();
  uStack00000024 = (undefined4)param_3;
  FUN_9800dcf0(&local_4c,0,0x1c);
  if (((param_3 & 0xffffffff) == 0) ||
     (((param_2 & 0xffffffff) != 0 && (puVar3 == (undefined1 *)0x0)))) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    local_4c = 0x7fffffff;
    if ((param_2 & 0xffffffff) < 0x80000000) {
      local_4c = (uint)param_2;
    }
    local_44 = 0x42;
    local_48 = puVar3;
    uVar2 = FUN_98010bc8(ZEXT48(&stack0x00000000) - 0x50,param_3,0,ZEXT48(&stack0x00000028));
    if (puVar3 != (undefined1 *)0x0) {
      uVar4 = (ulonglong)local_4c;
      local_4c = (uint)(uVar4 - 1);
      if ((longlong)(uVar4 - 1) < 0) {
        FUN_98010888(0,ZEXT48(&stack0x00000000) - 0x50);
      }
      else {
        *puVar3 = 0;
      }
    }
  }
  return uVar2;
}


/* ==== FUN_9800e2e0 @ 9800e2e0 ==== */

byte * FUN_9800e2e0(byte *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((int)param_3 != 0) {
    lVar1 = param_3 + -1;
    if (*param_1 == param_2) {
      return param_1;
    }
    if ((int)param_3 != 1) {
      do {
        param_1 = param_1 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0 && *param_1 != param_2);
      if (*param_1 == param_2) {
        return param_1;
      }
    }
  }
  return (byte *)0x0;
}


/* ==== FUN_9800e320 @ 9800e320 ==== */

longlong FUN_9800e320(longlong param_1)

{
  if ((int)param_1 < 0x61) {
    return param_1;
  }
  if (0x7a < (int)param_1) {
    return param_1;
  }
  return param_1 + -0x20;
}


/* ==== FUN_9800e338 @ 9800e338 ==== */

undefined4 FUN_9800e338(undefined1 *param_1,ulonglong param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((param_1 == (undefined1 *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    lVar3 = FUN_9800f950();
    *(undefined4 *)lVar3 = 0x16;
    FUN_9800d548();
    uVar5 = 0x16;
  }
  else {
    if (param_3 == (char *)0x0) {
      *param_1 = 0;
      lVar3 = FUN_9800f950();
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
      lVar3 = FUN_9800f950();
      puVar4 = (undefined4 *)lVar3;
      uVar5 = 0x22;
    }
    *puVar4 = uVar5;
    FUN_9800d548();
  }
  return uVar5;
}


/* ==== FUN_9800e3f0 @ 9800e3f0 ==== */

void FUN_9800e3f0(undefined4 param_1,uint *param_2)

{
  undefined4 local_40;
  uint local_3c;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint *local_24;
  
  FUN_9800d650(ZEXT48(&stack0x00000000) - 0x40,0xffffffff980020e4,0x20);
  if ((param_2 != (uint *)0x0) && ((*param_2 & 8) != 0)) {
    local_2c = 0x1994000;
  }
  local_28 = param_1;
  local_24 = param_2;
  FUN_98019fb0(local_40,local_3c,local_30,&local_2c);
  return;
}


/* ==== FUN_9800e4b4 @ 9800e4b4 ==== */

undefined8 FUN_9800e4b4(void)

{
  undefined8 unaff_r31;
  
  return unaff_r31;
}


/* ==== FUN_9800e4d0 @ 9800e4d0 ==== */

void FUN_9800e4d0(undefined4 param_1)

{
  DAT_9801c950 = param_1;
  return;
}


/* ==== FUN_9800e4e0 @ 9800e4e0 ==== */

undefined8 FUN_9800e4e0(void)

{
  int iVar1;
  
  if ((DAT_9801c950 != (code *)0x0) && (iVar1 = (*DAT_9801c950)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_9800e528 @ 9800e528 ==== */

undefined8 FUN_9800e528(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar4;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_28 [2];
  longlong local_20;
  
  local_2c = 0;
  local_28[0] = 0;
  local_30 = 0;
  if ((param_1 & 0xffffffff) != 0) {
    puVar4 = (uint *)param_1;
    FUN_9800dcf0(puVar4,0xff,0x24);
    if ((param_2 & 0xffffffff) != 0) {
      lVar1 = *(longlong *)param_2;
      if ((lVar1 < 0) || (0x793406fff < lVar1)) {
        lVar1 = FUN_9800f950();
        *(undefined4 *)lVar1 = 0x16;
        return 0x16;
      }
      FUN_98012330();
      uVar2 = FUN_980126c8(&local_2c);
      if ((int)uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800d620();
      }
      uVar2 = FUN_98012718(local_28);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_98012768(&local_30);
        if ((int)uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_9800d620();
        }
        local_20 = *(longlong *)param_2;
        if (local_20 < 0x3f481) {
          uVar2 = FUN_98012450(param_1,param_2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if ((local_2c == 0) || (uVar3 = FUN_980123d0(), (int)uVar3 == 0)) {
            lVar1 = (longlong)(int)*puVar4 - (longlong)local_30;
          }
          else {
            puVar4[8] = 1;
            lVar1 = (longlong)(int)*puVar4 - (longlong)(local_30 + local_28[0]);
          }
          uVar5 = (int)lVar1 + (int)(lVar1 / 0x3c) * -0x3c;
          *puVar4 = uVar5;
          if ((int)uVar5 < 0) {
            lVar1 = lVar1 + -0x3c;
            *puVar4 = uVar5 + 0x3c;
          }
          lVar1 = lVar1 / 0x3c + (longlong)(int)puVar4[1];
          uVar5 = (int)lVar1 + (int)(lVar1 / 0x3c) * -0x3c;
          puVar4[1] = uVar5;
          if ((int)uVar5 < 0) {
            lVar1 = lVar1 + -0x3c;
            puVar4[1] = uVar5 + 0x3c;
          }
          lVar1 = lVar1 / 0x3c + (longlong)(int)puVar4[2];
          uVar5 = (int)lVar1 + (int)(lVar1 / 0x18) * -0x18;
          puVar4[2] = uVar5;
          if ((int)uVar5 < 0) {
            lVar1 = lVar1 + -0x18;
            puVar4[2] = uVar5 + 0x18;
          }
          lVar1 = lVar1 / 0x18;
          iVar7 = (int)lVar1;
          if (lVar1 < 1) {
            if (lVar1 < 0) {
              uVar5 = puVar4[3];
              uVar6 = (uint)((ulonglong)uVar5 + (longlong)iVar7);
              puVar4[3] = uVar6;
              puVar4[6] = (int)(iVar7 + puVar4[6] + 7) % 7;
              if ((longlong)((ulonglong)uVar5 + (longlong)iVar7) < 1) {
                puVar4[3] = uVar6 + 0x1f;
                puVar4[4] = 0xb;
                uVar5 = puVar4[7] + iVar7 + 0x16d;
                puVar4[5] = puVar4[5] - 1;
              }
              else {
                uVar5 = puVar4[7] + iVar7;
              }
              puVar4[7] = uVar5;
            }
          }
          else {
            puVar4[3] = puVar4[3] + iVar7;
            puVar4[7] = puVar4[7] + iVar7;
            puVar4[6] = (int)(iVar7 + puVar4[6]) % 7;
          }
        }
        else {
          local_20 = local_20 - local_30;
          uVar2 = FUN_98012450(param_1,ZEXT48(&stack0x00000000) - 0x20);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if ((local_2c != 0) && (uVar3 = FUN_980123d0(), (int)uVar3 != 0)) {
            local_20 = local_20 - local_28[0];
            uVar2 = FUN_98012450(param_1,ZEXT48(&stack0x00000000) - 0x20);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            puVar4[8] = 1;
          }
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_9800d620();
    }
  }
  lVar1 = FUN_9800f950();
  *(undefined4 *)lVar1 = 0x16;
  FUN_9800d548();
  return 0x16;
}


/* ==== FUN_9800e880 @ 9800e880 ==== */

ulonglong FUN_9800e880(undefined8 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar8;
  longlong lVar7;
  int local_60;
  int local_5c;
  ulonglong local_58;
  int local_30;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar4 = FUN_9800dc78();
  local_5c = 0;
  local_60 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    lVar5 = FUN_9800f950();
    *(undefined4 *)lVar5 = 0x16;
    FUN_9800d548();
    return 0xffffffffffffffff;
  }
  piVar2 = (int *)uVar4;
  local_58 = (ulonglong)piVar2[5];
  if ((0x44 < (longlong)local_58) && ((longlong)local_58 < 0x44e)) {
    uVar1 = piVar2[4];
    if (((int)uVar1 < 0) || (0xb < (int)uVar1)) {
      lVar5 = (ulonglong)uVar1 + (longlong)((int)uVar1 / 0xc) * -0xc;
      local_58 = (longlong)((int)uVar1 / 0xc) + local_58;
      iVar8 = (int)lVar5;
      piVar2[4] = iVar8;
      if (lVar5 < 0) {
        local_58 = local_58 - 1;
        piVar2[4] = iVar8 + 0xc;
      }
      if (((longlong)local_58 < 0x45) || (0x44d < (longlong)local_58)) goto LAB_9800eaec;
    }
    lVar5 = (longlong)*(int *)(&DAT_9801b734 + piVar2[4] * 4);
    if ((((local_58 ==
           (((longlong)local_58 >> 2) + (ulonglong)((longlong)local_58 < 0 && (local_58 & 3) != 0))
           * 4) && ((longlong)local_58 % 100 != 0)) || ((longlong)(local_58 + 0x76c) % 400 == 0)) &&
       (1 < piVar2[4])) {
      lVar5 = lVar5 + 1;
    }
    lVar7 = local_58 - 1;
    local_58 = (longlong)*piVar2 +
               ((longlong)piVar2[1] +
               ((longlong)piVar2[2] +
               ((((longlong)(local_58 + 299) / 400 + (longlong)piVar2[3]) - lVar7 / 100) +
                ((longlong)(((ulonglong)(lVar7 >> 1) >> 0x3e) + lVar7) >> 2) + local_58 * 0x16d +
                lVar5 + -0x63df) * 0x18) * 0x3c) * 0x3c;
    if (param_2 == 0) {
      uVar6 = FUN_98012450(uVar3 - 0x50,uVar3 - 0x58);
      iVar8 = (int)uVar6;
    }
    else {
      FUN_98012330();
      uVar6 = FUN_98012718(&local_5c);
      if ((int)uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800d620();
      }
      uVar6 = FUN_98012768(&local_60);
      if ((int)uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800d620();
      }
      local_58 = (longlong)local_60 + local_58;
      uVar6 = FUN_9800e528(uVar3 - 0x50,uVar3 - 0x58);
      if ((int)uVar6 != 0) goto LAB_9800eaec;
      if ((piVar2[8] < 1) && ((-1 < piVar2[8] || (local_30 < 1)))) goto LAB_9800ead4;
      local_58 = (longlong)local_5c + local_58;
      uVar6 = FUN_9800e528(uVar3 - 0x50,uVar3 - 0x58);
      iVar8 = (int)uVar6;
    }
    if (iVar8 == 0) {
LAB_9800ead4:
      FUN_9800d650(uVar4,uVar3 - 0x50,0x24);
      return local_58;
    }
  }
LAB_9800eaec:
  lVar5 = FUN_9800f950();
  *(undefined4 *)lVar5 = 0x16;
  return 0xffffffffffffffff;
}


/* ==== FUN_9800eb08 @ 9800eb08 ==== */

void FUN_9800eb08(undefined8 param_1)

{
  FUN_9800e880(param_1,1);
  return;
}


/* ==== FUN_9800eb10 @ 9800eb10 ==== */

uint * FUN_9800eb10(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint *puVar4;
  int iVar5;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_9800dc74();
  if ((uVar1 & 0xffffffff) == 0) {
    puVar4 = FUN_9800ddf0();
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      FUN_9800dd90(uVar1);
    }
    else {
      do {
        if (0xfffff000 < (param_2 & 0xffffffff)) {
          FUN_9800e4e0();
          lVar3 = FUN_9800f950();
          *(undefined4 *)lVar3 = 0xc;
          goto LAB_9800ebc0;
        }
        if ((param_2 & 0xffffffff) == 0) {
          param_2 = 1;
        }
        iVar5 = FUN_98019fa0();
        puVar4 = FUN_980196c0((longlong)iVar5,0,uVar1,param_2);
        if (puVar4 != (uint *)0x0) {
          return puVar4;
        }
        if (DAT_9801c970 == 0) {
          lVar3 = FUN_9800f950();
          uVar6 = thunk_FUN_98008b10();
          uVar7 = FUN_9800f8e0(uVar6);
          *(undefined4 *)lVar3 = uVar7;
          return (uint *)0x0;
        }
        uVar2 = FUN_9800e4e0();
      } while ((int)uVar2 != 0);
      lVar3 = FUN_9800f950();
      uVar6 = thunk_FUN_98008b10();
      uVar7 = FUN_9800f8e0(uVar6);
      *(undefined4 *)lVar3 = uVar7;
    }
LAB_9800ebc0:
    puVar4 = (uint *)0x0;
  }
  return puVar4;
}


/* ==== FUN_9800ec00 @ 9800ec00 ==== */

undefined8 FUN_9800ec00(void)

{
  undefined4 *puVar3;
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)FUN_9800dc7c();
  uVar4 = 0xffffffffffffffff;
  if (puVar3 == (undefined4 *)0x0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if ((puVar3[3] & 0x83) != 0) {
      uVar4 = FUN_9800eda8();
      FUN_98013130(puVar3);
      FUN_980130f0((int)puVar3);
      uVar2 = FUN_98012f90();
      if ((int)uVar2 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      else if ((ulonglong)(uint)puVar3[7] != 0) {
        FUN_9800dd90((ulonglong)(uint)puVar3[7]);
        puVar3[7] = 0;
      }
    }
    puVar3[3] = 0;
  }
  return uVar4;
}


/* ==== FUN_9800eca8 @ 9800eca8 ==== */

ulonglong FUN_9800eca8(undefined *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined *puStack00000014;
  uint local_20;
  
  local_20 = 0xffffffff;
  puStack00000014 = param_1;
  if (param_1 == (undefined *)0x0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if ((*(uint *)(param_1 + 0xc) & 0x40) == 0) {
      FUN_98012970(param_1);
      uVar3 = FUN_9800ec00();
      local_20 = (uint)uVar3;
      FUN_9800ed6c();
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    uVar2 = (ulonglong)local_20;
  }
  return uVar2;
}


/* ==== FUN_9800ed6c @ 9800ed6c ==== */

void FUN_9800ed6c(void)

{
  uint unaff_r30;
  
  FUN_98012a30(unaff_r30);
  return;
}


/* ==== FUN_9800eda8 @ 9800eda8 ==== */

undefined8 FUN_9800eda8(void)

{
  uint *puVar2;
  ulonglong uVar1;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  puVar2 = (uint *)FUN_9800dc78();
  uVar4 = 0;
  if ((puVar2[3] & 3) == 2) {
    if ((puVar2[3] & 0x108) != 0) {
      uVar3 = puVar2[2];
      uVar5 = (ulonglong)*puVar2 - (ulonglong)uVar3;
      if (0 < (longlong)uVar5) {
        uVar1 = FUN_980130f0((int)puVar2);
        uVar1 = FUN_98013630(uVar1,(ulonglong)uVar3,uVar5);
        uVar3 = puVar2[3];
        if ((int)uVar1 == (int)uVar5) {
          if ((uVar3 & 0x80) == 0) goto LAB_9800ee20;
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
LAB_9800ee20:
  puVar2[1] = 0;
  *puVar2 = puVar2[2];
  return uVar4;
}


/* ==== FUN_9800ee40 @ 9800ee40 ==== */

longlong FUN_9800ee40(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_9800eec0();
  }
  else {
    uVar2 = FUN_9800eda8();
    if ((int)uVar2 == 0) {
      if ((*(uint *)(param_1 + 0xc) & 0x4000) == 0) {
        lVar1 = 0;
      }
      else {
        FUN_980130f0(param_1);
        lVar1 = FUN_980137b8();
        lVar1 = -(ulonglong)(lVar1 != 0);
      }
    }
    else {
      lVar1 = -1;
    }
  }
  return lVar1;
}


/* ==== FUN_9800eec0 @ 9800eec0 ==== */

int FUN_9800eec0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = FUN_9800dc74();
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_98011ba0(1);
  uVar4 = 0xffffffff9801cd84;
  for (iVar5 = 0; iVar5 < *(int *)uVar4; iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(iVar5 * 4 + iRam9801cd80);
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_980129e0(iVar5);
      uVar1 = *(uint *)(*(int *)(iVar5 * 4 + iRam9801cd80) + 0xc);
      uVar4 = (ulonglong)uVar1 & 0x83;
      if ((int)uVar4 != 0) {
        if (iVar2 == 1) {
          iVar3 = FUN_9800ee40();
          if (iVar3 != -1) {
            uStack_3c = uStack_3c + 1;
          }
        }
        else if (((iVar2 == 0) && ((uVar1 & 2) != 0)) && (iVar3 = FUN_9800ee40(), iVar3 == -1)) {
          uStack_38 = -1;
        }
      }
      FUN_9800f034();
    }
  }
  FUN_9800efe4();
  if (iVar2 != 1) {
    uStack_3c = uStack_38;
  }
  return uStack_3c;
}


/* ==== FUN_9800efe4 @ 9800efe4 ==== */

void FUN_9800efe4(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_9800f034 @ 9800f034 ==== */

void FUN_9800f034(void)

{
  int unaff_r28;
  int *unaff_r29;
  
  FUN_98012a70(unaff_r28,*(undefined4 *)(unaff_r28 * 4 + *unaff_r29));
  return;
}


/* ==== FUN_9800f098 @ 9800f098 ==== */

int FUN_9800f098(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = FUN_9800dc74();
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_98011ba0(1);
  uVar4 = 0xffffffff9801cd84;
  for (iVar5 = 0; iVar5 < *(int *)uVar4; iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(iVar5 * 4 + iRam9801cd80);
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_980129e0(iVar5);
      uVar1 = *(uint *)(*(int *)(iVar5 * 4 + iRam9801cd80) + 0xc);
      uVar4 = (ulonglong)uVar1 & 0x83;
      if ((int)uVar4 != 0) {
        if (iVar2 == 1) {
          iVar3 = FUN_9800ee40();
          if (iVar3 != -1) {
            uStack_3c = uStack_3c + 1;
          }
        }
        else if (((iVar2 == 0) && ((uVar1 & 2) != 0)) && (iVar3 = FUN_9800ee40(), iVar3 == -1)) {
          uStack_38 = -1;
        }
      }
      FUN_9800f034();
    }
  }
  FUN_9800efe4();
  if (iVar2 != 1) {
    uStack_3c = uStack_38;
  }
  return uStack_3c;
}


/* ==== FUN_9800f0a0 @ 9800f0a0 ==== */

void FUN_9800f0a0(void)

{
  if (DAT_9801b390 != -1) {
    func_0x9801acb0();
    DAT_9801b390 = -1;
  }
  FUN_980118b0();
  return;
}


/* ==== FUN_9800f0e8 @ 9800f0e8 ==== */

ulonglong FUN_9800f0e8(void)

{
  undefined4 uVar2;
  ulonglong uVar1;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  FUN_9800dc7c();
  uVar2 = thunk_FUN_98008b10();
  uVar1 = func_0x9801ac90(DAT_9801b390);
  if (uVar1 == 0) {
    iVar3 = func_0x9801aca0(DAT_9801b390,1);
    uVar1 = 0;
    if (iVar3 != 0) {
      puVar4 = FUN_98011750(1,0xc4);
      uVar1 = (ulonglong)(int)puVar4;
      if (uVar1 == 0) {
        func_0x9801aca0(DAT_9801b390,0);
      }
      else {
        iVar3 = func_0x9801aca0(DAT_9801b390,uVar1);
        if (iVar3 == 0) {
          FUN_9800dd90(uVar1);
          uVar1 = 0;
        }
        else {
          puVar4[2] = 0;
          puVar4[0x17] = (uint)&DAT_98002108;
          puVar4[5] = 1;
          uVar5 = FUN_9801a198();
          *puVar4 = uVar5;
          puVar4[1] = 0xffffffff;
        }
      }
    }
  }
  else {
    uVar1 = -(ulonglong)(uVar1 != 1) & uVar1;
  }
  thunk_FUN_98008ac0(uVar2);
  return uVar1;
}


/* ==== FUN_9800f1c0 @ 9800f1c0 ==== */

ulonglong FUN_9800f1c0(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_9800f0e8();
  if (uVar1 == 0) {
    FUN_9800f698(0x10);
  }
  return uVar1;
}


/* ==== FUN_9800f200 @ 9800f200 ==== */

void FUN_9800f200(ulonglong param_1)

{
  int iVar1;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar1 = (int)param_1;
    if ((ulonglong)*(uint *)(iVar1 + 0x24) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x24));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x2c) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x2c));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x34) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x34));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x3c) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x3c));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x40) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x40));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x44) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x44));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x48) != 0) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x48));
    }
    if ((ulonglong)*(uint *)(iVar1 + 0x5c) != ZEXT48(&DAT_98002108)) {
      FUN_9800dd90((ulonglong)*(uint *)(iVar1 + 0x5c));
    }
    FUN_9800dd90(param_1);
  }
  return;
}


/* ==== FUN_9800f2c0 @ 9800f2c0 ==== */

void FUN_9800f2c0(ulonglong param_1)

{
  if (DAT_9801b390 != -1) {
    if ((param_1 & 0xffffffff) == 0) {
      param_1 = func_0x9801ac90(DAT_9801b390);
    }
    func_0x9801aca0(DAT_9801b390,0);
    FUN_9800f200(param_1);
  }
  return;
}


/* ==== FUN_9800f330 @ 9800f330 ==== */

undefined8 FUN_9800f330(void)

{
  int iVar2;
  undefined8 uVar1;
  uint *puVar3;
  uint uVar4;
  
  FUN_9800f420();
  iVar2 = FUN_980119d8();
  if (iVar2 != 0) {
    uVar1 = func_0x9801acc0();
    DAT_9801b390 = (int)uVar1;
    if (((DAT_9801b390 != -1) && (puVar3 = FUN_98011750(1,0xc4), puVar3 != (uint *)0x0)) &&
       (iVar2 = func_0x9801aca0(uVar1,puVar3), iVar2 != 0)) {
      puVar3[2] = 0;
      puVar3[0x17] = (uint)&DAT_98002108;
      puVar3[5] = 1;
      uVar4 = FUN_9801a198();
      *puVar3 = uVar4;
      puVar3[1] = 0xffffffff;
      uRam9801c95c = 0x98013528;
      FUN_9801a1a8(0xffffffff9801c954,1);
      return 1;
    }
  }
  FUN_9800f0a0();
  return 0;
}


/* ==== FUN_9800f408 @ 9800f408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f410 @ 9800f410 ==== */

void FUN_9800f410(void)

{
  FUN_98011ba0(8);
  return;
}


/* ==== FUN_9800f418 @ 9800f418 ==== */

void FUN_9800f418(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_9800f420 @ 9800f420 ==== */

void FUN_9800f420(void)

{
  FUN_9800e4d0(0);
  FUN_9800d538(0);
  FUN_980139b0(0);
  FUN_98013998();
  return;
}


/* ==== FUN_9800f460 @ 9800f460 ==== */

void FUN_9800f460(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/* ==== FUN_9800f4c0 @ 9800f4c0 ==== */

void FUN_9800f4c0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iStack0000001c;
  
  iVar2 = FUN_9800dc68();
  iStack0000001c = param_2;
  FUN_98011ba0(8);
  if (DAT_9801c96c != 1) {
    puVar3 = &DAT_98020000;
    if (DAT_9801c968 == 1) {
      puVar3 = &DAT_98020000;
      func_0x9801ac80(0);
    }
    *(undefined4 *)(puVar3 + -0x3698) = 1;
    DAT_9801c964 = (undefined1)param_2;
    if (iVar2 == 0) {
      piVar5 = DAT_9801cd90;
      piVar6 = DAT_9801cd90;
      piVar4 = DAT_9801cd8c;
      piVar7 = DAT_9801cd8c;
      if (DAT_9801cd90 != (int *)0x0) {
        while (piVar7 = piVar7 + -1, piVar5 <= piVar7) {
          if (*piVar7 != 0) {
            if (piVar7 < piVar5) break;
            pcVar1 = (code *)*piVar7;
            *piVar7 = 0;
            (*pcVar1)();
            if ((piVar6 != DAT_9801cd90) || (piVar4 != DAT_9801cd8c)) {
              piVar5 = DAT_9801cd90;
              piVar6 = DAT_9801cd90;
              piVar4 = DAT_9801cd8c;
              piVar7 = DAT_9801cd8c;
            }
          }
        }
      }
      FUN_9800f460((undefined4 *)&DAT_9801b028,(undefined4 *)&DAT_9801b030);
    }
    FUN_9800f460((undefined4 *)&DAT_9801b034,(undefined4 *)&DAT_9801b038);
  }
  FUN_9800f644();
  if (iStack0000001c == 0) {
    func_0x9801ac80(0);
  }
  return;
}


/* ==== FUN_9800f644 @ 9800f644 ==== */

void FUN_9800f644(void)

{
  int unaff_r24;
  
  if (unaff_r24 != 0) {
    FUN_98011920();
  }
  return;
}


/* ==== FUN_9800f688 @ 9800f688 ==== */

void FUN_9800f688(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar3 = 1;
  iVar2 = FUN_9800dc68();
  FUN_98011ba0(8);
  if (DAT_9801c96c != 1) {
    puVar4 = &DAT_98020000;
    if (DAT_9801c968 == 1) {
      puVar4 = &DAT_98020000;
      func_0x9801ac80(0);
    }
    *(undefined4 *)(puVar4 + -0x3698) = 1;
    DAT_9801c964 = (undefined1)iVar3;
    if (iVar2 == 0) {
      piVar6 = DAT_9801cd90;
      piVar7 = DAT_9801cd90;
      piVar5 = DAT_9801cd8c;
      piVar8 = DAT_9801cd8c;
      if (DAT_9801cd90 != (int *)0x0) {
        while (piVar8 = piVar8 + -1, piVar6 <= piVar8) {
          if (*piVar8 != 0) {
            if (piVar8 < piVar6) break;
            pcVar1 = (code *)*piVar8;
            *piVar8 = 0;
            (*pcVar1)();
            if ((piVar7 != DAT_9801cd90) || (piVar5 != DAT_9801cd8c)) {
              piVar6 = DAT_9801cd90;
              piVar7 = DAT_9801cd90;
              piVar5 = DAT_9801cd8c;
              piVar8 = DAT_9801cd8c;
            }
          }
        }
      }
      FUN_9800f460((undefined4 *)&DAT_9801b028,(undefined4 *)&DAT_9801b030);
    }
    FUN_9800f460((undefined4 *)&DAT_9801b034,(undefined4 *)&DAT_9801b038);
  }
  FUN_9800f644();
  if (iVar3 == 0) {
    func_0x9801ac80(0);
  }
  return;
}


/* ==== FUN_9800f698 @ 9800f698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f698(int param_1)

{
  FUN_9800faa8();
  FUN_9800fa78(param_1);
  FUN_9800f4c0(1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f6c8 @ 9800f6c8 ==== */

undefined8 FUN_9800f6c8(undefined8 param_1,undefined4 param_2)

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
  
  iVar7 = FUN_9800dc78();
  uVar6 = FUN_9800f0e8();
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
    goto LAB_9800f89c;
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
LAB_9800f874:
    *(undefined4 *)(iVar5 + 100) = uVar10;
  }
  else {
    if (iVar7 == -0x3fffff70) {
      uVar10 = 0x81;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3fffff6f) {
      uVar10 = 0x84;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3fffff6d) {
      uVar10 = 0x85;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3fffff73) {
      uVar10 = 0x82;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3fffff71) {
      uVar10 = 0x86;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3fffff6e) {
      uVar10 = 0x8a;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3ffffd4b) {
      uVar10 = 0x8d;
      goto LAB_9800f874;
    }
    if (iVar7 == -0x3ffffd4c) {
      uVar10 = 0x8e;
      goto LAB_9800f874;
    }
  }
  (*pcVar2)(8,*(undefined4 *)(iVar5 + 100));
  *(undefined4 *)(iVar5 + 100) = uVar4;
LAB_9800f89c:
  *(undefined4 *)(iVar5 + 0x60) = uVar3;
  return 0xffffffffffffffff;
}


/* ==== FUN_9800f8b0 @ 9800f8b0 ==== */

undefined8 FUN_9800f8b0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_9800f6c8(0xffffffffe06d7363,param_2);
    return uVar1;
  }
  return 0;
}


/* ==== FUN_9800f8d0 @ 9800f8d0 ==== */

void FUN_9800f8d0(void)

{
  DAT_9801cd88 = 0;
  return;
}


/* ==== FUN_9800f8e0 @ 9800f8e0 ==== */

undefined4 FUN_9800f8e0(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = &DAT_9801b398;
  do {
    if (param_1 == *puVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x67fe4c64);
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


/* ==== FUN_9800f950 @ 9800f950 ==== */

longlong FUN_9800f950(void)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_9800f0e8();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = -0x67fe4b00;
  }
  else {
    lVar2 = uVar1 + 8;
  }
  return lVar2;
}


/* ==== FUN_9800f988 @ 9800f988 ==== */

longlong FUN_9800f988(void)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_9800f0e8();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = -0x67fe4afc;
  }
  else {
    lVar2 = uVar1 + 0xc;
  }
  return lVar2;
}


/* ==== FUN_9800f9c0 @ 9800f9c0 ==== */

void FUN_9800f9c0(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  uVar1 = FUN_9800f0e8();
  puVar3 = (undefined4 *)&DAT_9801b500;
  puVar4 = &DAT_9801b504;
  if ((uVar1 & 0xffffffff) != 0) {
    puVar4 = (uint *)((int)uVar1 + 0xc);
  }
  *puVar4 = param_1;
  uVar1 = FUN_9800f0e8();
  if ((uVar1 & 0xffffffff) != 0) {
    puVar3 = (undefined4 *)((int)uVar1 + 8);
  }
  uVar2 = FUN_9800f8e0(param_1);
  *puVar3 = uVar2;
  return;
}


/* ==== FUN_9800fa30 @ 9800fa30 ==== */

undefined4 FUN_9800fa30(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_980029c8;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(&UNK_980029cc + uVar2 * 8);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x16);
  return 0;
}


/* ==== FUN_9800fa78 @ 9800fa78 ==== */

void FUN_9800fa78(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_9800fa30(param_1);
  if (iVar1 != 0) {
    FUN_9801a218((longlong)iVar1);
  }
  return;
}


/* ==== FUN_9800faa8 @ 9800faa8 ==== */

void FUN_9800faa8(void)

{
  int iVar1;
  
  iVar1 = FUN_9800fa30(0xfc);
  if (iVar1 != 0) {
    FUN_9801a218((longlong)iVar1);
  }
  iVar1 = FUN_9800fa30(0xff);
  if (iVar1 != 0) {
    FUN_9801a218((longlong)iVar1);
  }
  return;
}


/* ==== FUN_9800faf0 @ 9800faf0 ==== */

void FUN_9800faf0(char *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = FUN_98013a18(*param_1);
  if (iVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      iVar2 = FUN_980117b8(*param_1);
    } while (iVar2 != 0);
  }
  iVar2 = FUN_98013a18(*param_1);
  if (iVar2 == 0x78) {
    param_1 = param_1 + 2;
  }
  cVar3 = *param_1;
  *param_1 = *(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
  do {
    cVar1 = param_1[1];
    param_1[1] = cVar3;
    param_1 = param_1 + 1;
    cVar3 = cVar1;
  } while (*param_1 != '\0');
  return;
}


/* ==== FUN_9800fb90 @ 9800fb90 ==== */

void FUN_9800fb90(char *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  
  lVar2 = (longlong)*param_1;
  if (lVar2 != 0) {
    do {
      if ((int)lVar2 == (int)*(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc)) break;
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
    if (*pcVar4 == *(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc)) {
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


/* ==== FUN_9800fc60 @ 9800fc60 ==== */

void FUN_9800fc60(int param_1,uint *param_2,ulonglong param_3)

{
  uint local_20 [2];
  undefined8 local_18;
  
  if (param_1 == 0) {
    FUN_98013ad8(local_20,param_3);
    *param_2 = local_20[0];
  }
  else {
    FUN_98013a30((uint *)&local_18,param_3);
    *(undefined8 *)param_2 = local_18;
  }
  return;
}


/* ==== FUN_9800fcd8 @ 9800fcd8 ==== */

undefined4
FUN_9800fcd8(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4,int *param_5,
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
  
  uVar1 = FUN_9800dc6c();
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d548();
    uVar3 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      lVar2 = FUN_9800f950();
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
          FUN_9800db80(uVar7 + 1,uVar7,((uVar8 - uVar7) - 1 & 0xffffffff) + 1);
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
          *(undefined1 *)uVar8 = *(undefined1 *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
        }
        lVar2 = (param_6 == '\0') + uVar8 + param_3;
        if ((int)param_2 == -1) {
          uVar1 = 0xffffffffffffffff;
        }
        else {
          uVar1 = (uVar1 - lVar2) + param_2;
        }
        puVar6 = (undefined1 *)lVar2;
        iVar5 = FUN_9800e338(puVar6,uVar1,"e+000");
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
          if (((DAT_9801cbcc & 1) != 0) && (*(char *)(lVar2 + 2U) == '0')) {
            FUN_9800db80(lVar2 + 2U,lVar2 + 3,3);
          }
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_9800d620();
      }
      lVar2 = FUN_9800f950();
      puVar4 = (undefined4 *)lVar2;
      uVar3 = 0x22;
    }
    *puVar4 = uVar3;
    FUN_9800d548();
  }
  return uVar3;
}


/* ==== FUN_9800ff28 @ 9800ff28 ==== */

int FUN_9800ff28(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int local_50 [4];
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800dc78();
  FUN_98013dc0(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    iVar3 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = (param_3 - (local_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    iVar3 = FUN_98013b80((ulonglong)(local_50[0] == 0x2d) +
                         ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,uVar4,param_4 + 1,
                         (int)local_50);
    if (iVar3 == 0) {
      iVar3 = FUN_9800fcd8(param_2,param_3,param_4,param_5,local_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return iVar3;
}


/* ==== FUN_98010018 @ 98010018 ==== */

int FUN_98010018(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
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
  
  uVar1 = FUN_9800dc70();
  lVar18 = 0x3ff;
  sVar10 = 0x30;
  uVar8 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    lVar18 = FUN_9800f950();
    *(undefined4 *)lVar18 = 0x16;
    FUN_9800d548();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    lVar18 = FUN_9800f950();
    piVar2 = (int *)lVar18;
    iVar4 = 0x16;
LAB_98010074:
    *piVar2 = iVar4;
    FUN_9800d548();
    return iVar4;
  }
  puVar6 = (undefined1 *)param_2;
  *puVar6 = 0;
  if ((param_3 & 0xffffffff) <= (uVar8 + 0xb & 0xffffffff)) {
    lVar18 = FUN_9800f950();
    piVar2 = (int *)lVar18;
    iVar4 = 0x22;
    goto LAB_98010074;
  }
  puVar3 = (ulonglong *)uVar1;
  if ((*puVar3 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      uVar7 = 0xffffffffffffffff;
    }
    else {
      uVar7 = param_3 - 2;
    }
    iVar4 = FUN_9800ff28(uVar1,param_2 + 2,uVar7,uVar8,0);
    if (iVar4 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar6 = 0x2d;
        param_2 = param_2 + 1;
      }
      puVar6 = (undefined1 *)param_2;
      *puVar6 = 0x30;
      puVar6[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pbVar5 = FUN_980139c0(puVar6 + 2,0x65);
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
    *pcVar12 = *(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
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
LAB_980102f0:
        cVar13 = cVar13 + '\x01';
      }
      else {
        if (cVar13 != '9') goto LAB_980102f0;
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
LAB_980103b0:
    if (lVar18 < 100) goto LAB_980103dc;
  }
  else {
    lVar16 = lVar18 / 1000;
    lVar18 = lVar18 % 1000;
    *(char *)uVar7 = (char)lVar16 + '0';
    uVar8 = uVar9 + 3;
    if ((uVar8 & 0xffffffff) == (uVar7 & 0xffffffff)) goto LAB_980103b0;
  }
  lVar16 = lVar18 / 100;
  lVar18 = lVar18 % 100;
  *(char *)uVar8 = (char)lVar16 + '0';
  uVar8 = uVar8 + 1;
LAB_980103dc:
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


/* ==== FUN_98010428 @ 98010428 ==== */

undefined8
FUN_98010428(undefined8 param_1,ulonglong param_2,ulonglong param_3,int *param_4,char param_5)

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
  
  uVar2 = FUN_9800dc70();
  if (((uVar2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    lVar3 = FUN_9800f950();
    *(undefined4 *)lVar3 = 0x16;
    FUN_9800d548();
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
      FUN_9800db80(uVar10,uVar2,((uVar6 - uVar2) - 1 & 0xffffffff) + 1);
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
      FUN_9800db80(uVar6,uVar10,((uVar2 - uVar10) - 1 & 0xffffffff) + 1);
      *(undefined1 *)uVar10 = *(undefined1 *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
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
          FUN_9800db80(uVar6 + param_3,uVar6,((uVar2 - uVar6) - 1 & 0xffffffff) + 1);
        }
        FUN_9800dcf0((uint *)uVar6,0x30,param_3);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* ==== FUN_980105e0 @ 980105e0 ==== */

longlong FUN_980105e0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int iStack_50;
  uint uStack_4c;
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800dc7c();
  FUN_98013dc0(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    lVar1 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = param_3 - (iStack_50 == 0x2d);
    }
    iVar3 = FUN_98013b80((iStack_50 == 0x2d) + param_2,uVar4,uStack_4c + param_4,(int)&iStack_50);
    lVar1 = (longlong)iVar3;
    if (iVar3 == 0) {
      lVar1 = FUN_98010428(param_2,param_3,param_4,&iStack_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return lVar1;
}


/* ==== FUN_980106b0 @ 980106b0 ==== */

longlong FUN_980106b0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
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
  
  puVar2 = (undefined8 *)FUN_9800dc70();
  FUN_98013dc0(*puVar2,ZEXT48(&stack0x00000000) - 0x60,auStack_50,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    lVar1 = 0x16;
  }
  else {
    uVar5 = (ulonglong)uStack_5c;
    uVar4 = 0xffffffffffffffff;
    uVar6 = (iStack_60 == 0x2d) + param_2;
    if ((int)param_3 != -1) {
      uVar4 = param_3 - (iStack_60 == 0x2d);
    }
    iVar3 = FUN_98013b80(uVar6,uVar4,param_4,(int)&iStack_60);
    lVar1 = (longlong)iVar3;
    if (iVar3 == 0) {
      uVar4 = (ulonglong)uStack_5c - 1;
      if (((int)uVar4 < -4) || ((int)param_4 <= (int)uVar4)) {
        iVar3 = FUN_9800fcd8(param_2,param_3,param_4,param_5,&iStack_60,'\x01');
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
        lVar1 = FUN_98010428(param_2,param_3,param_4,&iStack_60,'\x01');
      }
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return lVar1;
}


/* ==== FUN_98010810 @ 98010810 ==== */

longlong FUN_98010810(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
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
    puVar6 = (undefined8 *)FUN_9800dc70();
    FUN_98013dc0(*puVar6,ZEXT48(&stack0x00000000) - 0x60,auStack_50,0x16);
    if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
      lVar2 = FUN_9800f950();
      *(undefined4 *)lVar2 = 0x16;
      FUN_9800d548();
      return 0x16;
    }
    uVar11 = (ulonglong)uStack_5c;
    uVar8 = 0xffffffffffffffff;
    uVar17 = (iStack_60 == 0x2d) + param_2;
    if ((int)param_3 != -1) {
      uVar8 = param_3 - (iStack_60 == 0x2d);
    }
    iVar7 = FUN_98013b80(uVar17,uVar8,param_4,(int)&iStack_60);
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
        lVar2 = FUN_98010428(param_2,param_3,param_4,&iStack_60,'\x01');
        return lVar2;
      }
      iVar7 = FUN_9800fcd8(param_2,param_3,param_4,(int)param_5,&iStack_60,'\x01');
      return (longlong)iVar7;
    }
    *(undefined1 *)param_2 = 0;
    return (longlong)iVar7;
  }
  uVar1 = FUN_9800dc70();
  lVar2 = 0x3ff;
  sVar10 = 0x30;
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d548();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    lVar2 = FUN_9800f950();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x16;
LAB_98010074:
    *puVar3 = (int)lVar2;
    FUN_9800d548();
    return lVar2;
  }
  puVar9 = (undefined1 *)param_2;
  *puVar9 = 0;
  if ((param_3 & 0xffffffff) <= (param_4 + 0xb & 0xffffffff)) {
    lVar2 = FUN_9800f950();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x22;
    goto LAB_98010074;
  }
  puVar4 = (ulonglong *)uVar1;
  if ((*puVar4 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      param_3 = 0xffffffffffffffff;
    }
    else {
      param_3 = param_3 - 2;
    }
    iVar7 = FUN_9800ff28(uVar1,param_2 + 2,param_3,param_4,0);
    if (iVar7 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar9 = 0x2d;
        param_2 = param_2 + 1;
      }
      puVar9 = (undefined1 *)param_2;
      *puVar9 = 0x30;
      puVar9[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pbVar5 = FUN_980139c0(puVar9 + 2,0x65);
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
    *pcVar12 = *(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
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
LAB_980102f0:
        cVar13 = cVar13 + '\x01';
      }
      else {
        if (cVar13 != '9') goto LAB_980102f0;
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
LAB_980103b0:
    if (lVar2 < 100) goto LAB_980103dc;
  }
  else {
    lVar15 = lVar2 / 1000;
    lVar2 = lVar2 % 1000;
    *(char *)uVar11 = (char)lVar15 + '0';
    uVar8 = param_2 + 3;
    if ((uVar8 & 0xffffffff) == (uVar11 & 0xffffffff)) goto LAB_980103b0;
  }
  lVar15 = lVar2 / 100;
  lVar2 = lVar2 % 100;
  *(char *)uVar8 = (char)lVar15 + '0';
  uVar8 = uVar8 + 1;
LAB_980103dc:
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


/* ==== thunk_FUN_9800ff28 @ 98010828 ==== */

int thunk_FUN_9800ff28(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800dc78();
  FUN_98013dc0(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    iVar3 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = (param_3 - (aiStack_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    iVar3 = FUN_98013b80((ulonglong)(aiStack_50[0] == 0x2d) +
                         ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,uVar4,param_4 + 1,
                         (int)aiStack_50);
    if (iVar3 == 0) {
      iVar3 = FUN_9800fcd8(param_2,param_3,param_4,param_5,aiStack_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return iVar3;
}


/* ==== FUN_9801085c @ 9801085c ==== */

longlong FUN_9801085c(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
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
    puVar6 = (undefined8 *)FUN_9800dc70();
    FUN_98013dc0(*puVar6,ZEXT48(&stack0x00000000) - 0x60,auStack_50,0x16);
    if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
      lVar2 = FUN_9800f950();
      *(undefined4 *)lVar2 = 0x16;
      FUN_9800d548();
      return 0x16;
    }
    uVar11 = (ulonglong)uStack_5c;
    uVar8 = 0xffffffffffffffff;
    uVar17 = (iStack_60 == 0x2d) + param_2;
    if ((int)param_3 != -1) {
      uVar8 = param_3 - (iStack_60 == 0x2d);
    }
    iVar7 = FUN_98013b80(uVar17,uVar8,param_4,(int)&iStack_60);
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
        lVar2 = FUN_98010428(param_2,param_3,param_4,&iStack_60,'\x01');
        return lVar2;
      }
      iVar7 = FUN_9800fcd8(param_2,param_3,param_4,(int)param_5,&iStack_60,'\x01');
      return (longlong)iVar7;
    }
    *(undefined1 *)param_2 = 0;
    return (longlong)iVar7;
  }
  uVar1 = FUN_9800dc70();
  lVar2 = 0x3ff;
  sVar10 = 0x30;
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d548();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    lVar2 = FUN_9800f950();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x16;
LAB_98010074:
    *puVar3 = (int)lVar2;
    FUN_9800d548();
    return lVar2;
  }
  puVar9 = (undefined1 *)param_2;
  *puVar9 = 0;
  if ((param_3 & 0xffffffff) <= (param_4 + 0xb & 0xffffffff)) {
    lVar2 = FUN_9800f950();
    puVar3 = (undefined4 *)lVar2;
    lVar2 = 0x22;
    goto LAB_98010074;
  }
  puVar4 = (ulonglong *)uVar1;
  if ((*puVar4 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      param_3 = 0xffffffffffffffff;
    }
    else {
      param_3 = param_3 - 2;
    }
    iVar7 = FUN_9800ff28(uVar1,param_2 + 2,param_3,param_4,0);
    if (iVar7 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar9 = 0x2d;
        param_2 = param_2 + 1;
      }
      puVar9 = (undefined1 *)param_2;
      *puVar9 = 0x30;
      puVar9[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pbVar5 = FUN_980139c0(puVar9 + 2,0x65);
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
    *pcVar12 = *(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
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
LAB_980102f0:
        cVar13 = cVar13 + '\x01';
      }
      else {
        if (cVar13 != '9') goto LAB_980102f0;
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
LAB_980103b0:
    if (lVar2 < 100) goto LAB_980103dc;
  }
  else {
    lVar15 = lVar2 / 1000;
    lVar2 = lVar2 % 1000;
    *(char *)uVar11 = (char)lVar15 + '0';
    uVar8 = param_2 + 3;
    if ((uVar8 & 0xffffffff) == (uVar11 & 0xffffffff)) goto LAB_980103b0;
  }
  lVar15 = lVar2 / 100;
  lVar2 = lVar2 % 100;
  *(char *)uVar8 = (char)lVar15 + '0';
  uVar8 = uVar8 + 1;
LAB_980103dc:
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


/* ==== FUN_9801087c @ 9801087c ==== */

int FUN_9801087c(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                int param_5)

{
  undefined8 *puVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  puVar2 = (undefined8 *)FUN_9800dc78();
  FUN_98013dc0(*puVar2,ZEXT48(&stack0x00000000) - 0x50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    iVar3 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = (param_3 - (aiStack_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    iVar3 = FUN_98013b80((ulonglong)(aiStack_50[0] == 0x2d) +
                         ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,uVar4,param_4 + 1,
                         (int)aiStack_50);
    if (iVar3 == 0) {
      iVar3 = FUN_9800fcd8(param_2,param_3,param_4,param_5,aiStack_50,'\0');
    }
    else {
      *(undefined1 *)param_2 = 0;
    }
  }
  return iVar3;
}


/* ==== FUN_98010888 @ 98010888 ==== */

ulonglong FUN_98010888(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uStack00000014;
  uint *puVar4;
  undefined4 *puVar5;
  
  uStack00000014 = FUN_9800dc78();
  puVar4 = (uint *)param_2;
  uVar1 = FUN_980130f0((int)puVar4);
  uVar9 = puVar4[3];
  if ((uVar9 & 0x82) == 0) {
    lVar2 = FUN_9800f950();
    puVar5 = (undefined4 *)lVar2;
    uVar6 = 9;
LAB_980108c0:
    *puVar5 = uVar6;
  }
  else {
    if ((uVar9 & 0x40) != 0) {
      lVar2 = FUN_9800f950();
      puVar5 = (undefined4 *)lVar2;
      uVar6 = 0x22;
      goto LAB_980108c0;
    }
    if ((uVar9 & 1) != 0) {
      puVar4[1] = 0;
      if ((uVar9 & 0x10) == 0) goto LAB_980108cc;
      puVar4[3] = uVar9 & 0xfffffffe;
      *puVar4 = puVar4[2];
    }
    uVar9 = puVar4[3];
    iVar8 = 0;
    puVar4[1] = 0;
    puVar4[3] = uVar9 & 0xffffffef | 2;
    if (((uVar9 & 0x10c) == 0) &&
       (((lVar2 = FUN_980127f8(), (param_2 & 0xffffffff) != (lVar2 + 0x20U & 0xffffffff) &&
         (lVar2 = FUN_980127f8(), (param_2 & 0xffffffff) != (lVar2 + 0x40U & 0xffffffff))) ||
        (uVar3 = FUN_98014100(), (int)uVar3 == 0)))) {
      FUN_98013e68(puVar4);
    }
    if ((puVar4[3] & 0x108) == 0) {
      uVar10 = 1;
      uVar1 = FUN_98013630(uVar1,ZEXT48(&stack0x00000000) + 0x14,1);
      iVar8 = (int)uVar1;
LAB_98010a44:
      if (iVar8 == (int)uVar10) {
        return (ulonglong)uStack00000014 & 0xff;
      }
    }
    else {
      uVar9 = puVar4[2];
      uVar10 = (ulonglong)*puVar4 - (ulonglong)uVar9;
      puVar4[1] = puVar4[6] - 1;
      *puVar4 = uVar9 + 1;
      if (0 < (longlong)uVar10) {
        uVar1 = FUN_98013630(uVar1,(ulonglong)uVar9,uVar10);
        iVar8 = (int)uVar1;
LAB_98010a1c:
        *(char *)puVar4[2] = (char)uStack00000014;
        goto LAB_98010a44;
      }
      uVar9 = (uint)uVar1;
      if ((uVar9 == 0xffffffff) || (uVar9 == 0xfffffffe)) {
        puVar7 = &DAT_9801b9f8;
      }
      else {
        puVar7 = (undefined *)((&DAT_9801cc80)[(int)uVar9 >> 5] + (uVar9 & 0x1f) * 0x48);
      }
      if (((puVar7[4] & 0x20) == 0) ||
         (uVar1 = FUN_98013268(uVar1,0,2), uVar1 != 0xffffffffffffffff)) goto LAB_98010a1c;
    }
  }
  uVar9 = puVar4[3];
LAB_980108cc:
  puVar4[3] = uVar9 | 0x20;
  return 0xffffffffffffffff;
}


/* ==== FUN_98010a60 @ 98010a60 ==== */

void FUN_98010a60(byte param_1,ulonglong param_2,int *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar4;
  uint uVar3;
  
  piVar1 = (int *)param_2;
  if (((piVar1[3] & 0x40U) == 0) || (piVar1[2] != 0)) {
    uVar3 = piVar1[1];
    piVar1[1] = (int)((ulonglong)uVar3 - 1);
    if ((longlong)((ulonglong)uVar3 - 1) < 0) {
      uVar2 = FUN_98010888((longlong)(char)param_1,param_2);
      uVar3 = (uint)uVar2;
    }
    else {
      uVar3 = (uint)param_1;
      *(byte *)*piVar1 = param_1;
      *piVar1 = *piVar1 + 1;
    }
    if (uVar3 == 0xffffffff) {
      iVar4 = -1;
      goto LAB_98010adc;
    }
  }
  iVar4 = *param_3 + 1;
LAB_98010adc:
  *param_3 = iVar4;
  return;
}


/* ==== FUN_98010af8 @ 98010af8 ==== */

void FUN_98010af8(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar3;
  longlong lVar2;
  byte *pbVar4;
  
  iVar3 = FUN_9800dc74();
  lVar2 = FUN_9800f950();
  uVar1 = *(undefined4 *)lVar2;
  if (((*(uint *)((int)param_3 + 0xc) & 0x40) == 0) || (*(int *)((int)param_3 + 8) != 0)) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0;
    if (0 < (int)param_2) {
      pbVar4 = (byte *)(iVar3 + -1);
      do {
        pbVar4 = pbVar4 + 1;
        param_2 = param_2 + -1;
        FUN_98010a60(*pbVar4,param_3,param_4);
        if (*param_4 == -1) {
          lVar2 = FUN_9800f950();
          if (*(int *)lVar2 != 0x2a) break;
          FUN_98010a60(0x3f,param_3,param_4);
        }
      } while (0 < (int)param_2);
    }
    lVar2 = FUN_9800f950();
    if (*(int *)lVar2 == 0) {
      lVar2 = FUN_9800f950();
      *(undefined4 *)lVar2 = uVar1;
    }
  }
  else {
    *param_4 = *param_4 + (int)param_2;
  }
  return;
}


/* ==== FUN_98010bc8 @ 98010bc8 ==== */

/* WARNING: Removing unreachable block (ram,0x980115c8) */
/* WARNING: Removing unreachable block (ram,0x980115d0) */
/* WARNING: Removing unreachable block (ram,0x980115d8) */
/* WARNING: Removing unreachable block (ram,0x980115f8) */
/* WARNING: Removing unreachable block (ram,0x98011620) */
/* WARNING: Removing unreachable block (ram,0x98011604) */
/* WARNING: Removing unreachable block (ram,0x9801161c) */
/* WARNING: Removing unreachable block (ram,0x980114dc) */
/* WARNING: Removing unreachable block (ram,0x980114ec) */
/* WARNING: Removing unreachable block (ram,0x98011508) */
/* WARNING: Removing unreachable block (ram,0x98011510) */
/* WARNING: Removing unreachable block (ram,0x980114f4) */
/* WARNING: Removing unreachable block (ram,0x980114e4) */
/* WARNING: Removing unreachable block (ram,0x980114f8) */
/* WARNING: Removing unreachable block (ram,0x9801168c) */

void FUN_98010bc8(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar8;
  int iVar7;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  byte bVar25;
  ulonglong uVar26;
  int local_4e0;
  uint local_4dc;
  uint local_4d4;
  uint local_4d0;
  int local_4cc;
  undefined4 local_4c8;
  uint local_4c4;
  uint local_4c0;
  undefined1 local_a1;
  undefined4 *puVar6;
  longlong lVar21;
  
  uVar3 = FUN_9800dc40();
  local_4c8 = 0;
  local_4d0 = 0;
  bVar1 = (uVar3 & 0xffffffff) == 0;
  local_4d4 = 0;
  uVar22 = 0;
  local_4cc = 0;
switchD_98010ff8_caseD_2:
  if (!bVar1) {
    if ((*(uint *)((int)uVar3 + 0xc) & 0x40) != 0) goto LAB_98010cbc;
    uVar5 = FUN_980130f0((int)uVar3);
    uVar24 = (uint)uVar5;
    uVar15 = 0xffffffff9801cc80;
    puVar6 = &DAT_9801cc80;
    lVar4 = -0x67fe4608;
    puVar16 = &DAT_9801b9f8;
    puVar14 = &DAT_9801b9f8;
    if (uVar24 == 0xffffffff) goto LAB_98010c74;
    if (uVar24 == 0xfffffffe) goto LAB_98010c74;
    uVar13 = (uVar5 & 0x1f) * 0x48;
    uVar12 = (ulonglong)(uint)(&DAT_9801cc80)[(int)uVar24 >> 5];
switchD_98010ff8_caseD_19:
    uVar24 = (uint)uVar5;
    puVar16 = (undefined *)lVar4;
    puVar6 = (undefined4 *)uVar15;
    puVar14 = (undefined *)((int)uVar12 + (int)uVar13);
LAB_98010c74:
    if ((puVar14[0x28] & 0xfe) == 0) {
      if ((uVar24 != 0xffffffff) && (uVar24 != 0xfffffffe)) {
        puVar16 = (undefined *)(puVar6[(int)uVar24 >> 5] + (uVar24 & 0x1f) * 0x48);
      }
      if ((puVar16[0x28] & 1) == 0) {
LAB_98010cbc:
        if ((param_2 & 0xffffffff) != 0) {
          lVar4 = FUN_980127f8();
          if (((uVar3 & 0xffffffff) == (lVar4 + 0x20U & 0xffffffff)) ||
             (uVar5 = FUN_980127f8(), (uVar3 & 0xffffffff) == (uVar5 + 0x40 & 0xffffffff))) {
            iVar7 = FUN_9800e040(ZEXT48(&stack0x00000000) - 0x2a0,0x200,param_2,param_4);
            if (iVar7 == -1) {
              local_a1 = 0;
            }
            FUN_9801a158();
          }
          else {
switchD_98010ff8_caseD_12:
            uVar24 = (uint)*(byte *)param_2;
            iVar7 = 0;
            uVar9 = 0;
            local_4e0 = 0;
switchD_98010ff8_caseD_32:
            lVar4 = (longlong)(char)uVar24;
            local_4dc = 0;
            if (lVar4 != 0) {
              uVar13 = 0xffffffff98020000;
              uVar23 = (ulonglong)local_4c0;
              uVar12 = 0xffffffff98000000;
              lVar21 = param_2 - 1;
              uVar10 = 0;
LAB_98010d34:
              bVar25 = (byte)uVar24;
              puVar6 = (undefined4 *)uVar5;
              lVar20 = lVar21 + 1;
              if (iVar7 < 0) goto LAB_980116f0;
              iVar11 = (int)lVar4;
              if ((iVar11 < 0x20) || (0x78 < iVar11)) {
                uVar17 = 0;
              }
              else {
                uVar17 = *(byte *)((int)L"(null)" + iVar11) & 0xf;
              }
              local_4c4 = (int)(char)(&DAT_98002aa8)[uVar17 * 8 + uVar10] >> 4;
              if (7 < local_4c4) goto LAB_98011698;
              if (local_4c4 == 0) {
LAB_98010f7c:
                uVar8 = FUN_98014018(uVar24);
                if (uVar8 != 0) {
                  FUN_98010a60(bVar25,uVar3,&local_4e0);
                  lVar20 = lVar21 + 2;
                  bVar25 = *(byte *)lVar20;
                  if (bVar25 == 0) goto LAB_98010c08;
                }
                uVar5 = FUN_98010a60(bVar25,uVar3,&local_4e0);
                iVar7 = local_4e0;
              }
              else if (local_4c4 == 1) {
                uVar22 = 0;
                local_4cc = 0;
                local_4d0 = 0;
                local_4d4 = 0;
              }
              else {
                iVar19 = local_4c4 - 2;
                if (iVar19 != 0) {
switchD_98010ff8_caseD_2d:
                  if (iVar19 == 1) {
                    if (iVar11 == 0x2a) {
                      uVar15 = param_4 + 7U & 0xfffffff8;
                      param_4 = uVar15 + 8;
                      local_4d0 = *(uint *)((int)uVar15 + 4);
                      if ((int)local_4d0 < 0) {
                        uVar22 = uVar22 | 4;
                        local_4d0 = -local_4d0;
                      }
                    }
                    else {
                      local_4d0 = (local_4d0 * 10 + iVar11) - 0x30;
                    }
                  }
                  else if (iVar19 != 2) {
                    if (iVar19 == 3) {
                      if (iVar11 == 0x2a) {
                        param_4 = (param_4 + 7U & 0xfffffff8) + 8;
                      }
                    }
                    else {
                      iVar2 = (int)lVar21;
                      if (iVar19 != 4) {
                        uVar15 = lVar4 - 0x41;
                        iVar18 = (int)uVar15;
                        bVar1 = (uVar15 & 0xffffffff) == 0x37;
                        if ((uVar15 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                        goto LAB_980114c8;
                      }
                      if (iVar11 == 0x49) {
                        iVar18 = (int)*(char *)(iVar2 + 2);
                        bVar1 = *(char *)(iVar2 + 2) == '6';
                        goto switchD_98010ff8_caseD_23;
                      }
                      if (((iVar11 != 0x68) && (iVar11 == 0x6c)) && (*(char *)(iVar2 + 2) == 'l')) {
                        lVar20 = lVar21 + 2;
                      }
                    }
                  }
                  goto LAB_98011698;
                }
                if (iVar11 != 0x20) {
switchD_98010ff8_caseD_0:
                  if (iVar11 != 0x23) {
                    bVar1 = iVar11 == 0x2b;
switchD_98010ff8_caseD_20:
                    if (!bVar1) {
                      if (iVar11 == 0x2d) {
                        uVar22 = uVar22 | 4;
                      }
                      else if (iVar11 == 0x30) {
                        uVar22 = uVar22 | 8;
                      }
                    }
                  }
                }
              }
              goto LAB_98011698;
            }
          }
          goto LAB_980116f0;
        }
      }
    }
  }
LAB_98010c08:
  lVar4 = FUN_9800f950();
  puVar6 = (undefined4 *)lVar4;
switchD_98010ff8_caseD_22:
  *puVar6 = 0x16;
  FUN_9800d548();
LAB_980116f0:
  FUN_9800dc90();
  return;
code_r0x98010fd4:
  iVar19 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar15 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(iVar18) {
  case 0:
  case 4:
  case 6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case 2:
    goto switchD_98010ff8_caseD_2;
  case 0x12:
    goto switchD_98010ff8_caseD_12;
  case 0x17:
    goto switchD_98010ff8_caseD_17;
  case 0x19:
    goto switchD_98010ff8_caseD_19;
  case 0x20:
  case 0x24:
  case 0x25:
  case 0x26:
    goto switchD_98010ff8_caseD_20;
  case 0x22:
    goto switchD_98010ff8_caseD_22;
  case 0x23:
  case 0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case 0x2d:
    goto switchD_98010ff8_caseD_2d;
  case 0x2e:
    goto switchD_98010ff8_caseD_2e;
  case 0x32:
    goto switchD_98010ff8_caseD_32;
  case 0x34:
switchD_98010ff8_caseD_34:
    uVar13 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = uVar13 == 0x34;
  case 0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      lVar20 = lVar21 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case 0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((iVar18 == 0x33) && (uVar13 = (ulonglong)*(byte *)(iVar2 + 3), uVar13 == 0x32)) {
    lVar20 = lVar21 + 3;
    goto LAB_98011698;
  }
  if (iVar18 == 100) goto LAB_98011698;
  bVar1 = iVar18 == 0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (iVar18 == 0x6f)) || (iVar18 == 0x75)) || ((iVar18 == 0x78 || (iVar18 == 0x58))))
  goto LAB_98011698;
  local_4c4 = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_1:
  while (uVar15 = uVar15 + 1, (uVar12 & 0xffffffff) != 0) {
    uVar12 = (ulonglong)*(byte *)uVar15;
  }
  uVar15 = (uVar15 - uVar13) - 1;
  uVar9 = uVar15 & 0xffffffff;
  local_4dc = (uint)uVar15;
LAB_980114c8:
  if (local_4cc == 0) {
    uVar26 = (ulonglong)local_4d4;
    uVar15 = (local_4d0 - uVar9) - uVar26;
    iVar11 = (int)uVar15;
    uVar13 = uVar22;
    uVar5 = uVar15;
    iVar7 = iVar11;
    if (uVar22 == 0) {
      while (param_2 = uVar5, 0 < iVar7) {
        param_2 = param_2 - 1;
        FUN_98010a60(0x20,uVar3,&local_4e0);
        if (local_4e0 == -1) break;
        uVar5 = param_2;
        iVar7 = (int)param_2;
      }
    }
    FUN_98010af8(ZEXT48(&stack0x00000000) - 0x4d8,uVar26,uVar3,&local_4e0);
    if (((uVar22 & 8) != 0) && (uVar5 = uVar15, iVar7 = iVar11, (uVar22 & 4) == 0)) {
      while (param_2 = uVar5, 0 < iVar7) {
        param_2 = param_2 - 1;
        FUN_98010a60(0x30,uVar3,&local_4e0);
        if (local_4e0 == -1) break;
        uVar5 = param_2;
        iVar7 = (int)param_2;
      }
    }
    uVar5 = FUN_98010af8(uVar23,(ulonglong)local_4dc,uVar3,&local_4e0);
    iVar7 = local_4e0;
    if ((-1 < local_4e0) && ((uVar22 & 4) != 0)) {
      while (param_2 = uVar15, iVar7 = local_4e0, 0 < iVar11) {
        param_2 = param_2 - 1;
        uVar5 = FUN_98010a60(0x20,uVar3,&local_4e0);
        iVar7 = local_4e0;
        if (local_4e0 == -1) break;
        uVar15 = param_2;
        iVar11 = (int)param_2;
      }
    }
  }
LAB_98011698:
  bVar25 = *(byte *)((int)lVar20 + 1);
  uVar24 = (uint)bVar25;
  lVar4 = (longlong)(char)bVar25;
  if (lVar4 == 0) goto LAB_980116f0;
  uVar9 = (ulonglong)local_4dc;
  lVar21 = lVar20;
  uVar10 = local_4c4;
  goto LAB_98010d34;
}


/* ==== FUN_9801100c @ 9801100c ==== */

void FUN_9801100c(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ushort uVar6;
  int iVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong in_r9;
  int iVar9;
  undefined *puVar10;
  ulonglong in_r10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong unaff_r14;
  int unaff_r16;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar15;
  longlong unaff_r19;
  int unaff_r24;
  longlong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong uVar17;
  byte bVar20;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r31;
  int in_stack_00000050;
  uint in_stack_00000054;
  undefined1 uStack00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  undefined1 uStack00000090;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar7 = unaff_r26 + 7U & 0xfffffff8;
  lVar16 = uVar7 + 8;
  iVar5 = (int)uVar7;
  if ((unaff_r27 & 0x810) == 0) {
    in_r10 = 1;
    in_stack_00000054 = 1;
    uStack00000090 = (undefined1)*(undefined4 *)(iVar5 + 4);
  }
  else {
    iVar5 = FUN_98014010(&stack0x00000054,(uint *)&stack0x00000090,0x200,*(ushort *)(iVar5 + 6));
    param_1 = (longlong)iVar5;
    if (iVar5 != 0) {
      in_stack_00000064 = 1;
    }
  }
  uVar7 = (ulonglong)in_stack_00000054;
  uVar17 = uVar3 + 0x90;
LAB_980114c8:
  if (in_stack_00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar21 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar21 = 1;
    in_stack_0000005c = 1;
  }
  in_r10 = unaff_r27 & 0xc;
  uVar18 = (ZEXT48(in_stack_00000060) - uVar7) - uVar21;
  iVar9 = (int)uVar18;
  uVar7 = uVar18;
  iVar5 = iVar9;
  if (in_r10 == 0) {
    while (unaff_r31 = uVar7, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar7 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  FUN_98010af8(uVar3 + 0x58,uVar21,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar7 = uVar18, iVar5 = iVar9, (unaff_r27 & 4) == 0)) {
    while (unaff_r31 = uVar7, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar7 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  if ((unaff_r16 == 0) || ((int)in_stack_00000054 < 1)) {
    param_1 = FUN_98010af8(uVar17,(ulonglong)in_stack_00000054,CONCAT44(unaff_00000090,unaff_r18),
                           &stack0x00000050);
  }
  else {
    lVar22 = uVar17 - 2;
    unaff_r31 = (ulonglong)in_stack_00000054;
    do {
      lVar22 = lVar22 + 2;
      unaff_r31 = unaff_r31 - 1;
      iVar5 = FUN_98014010(&stack0x00000070,(uint *)&stack0x00000074,6,*(ushort *)lVar22);
      param_1 = (longlong)iVar5;
      if ((iVar5 != 0) || (in_stack_00000070 == 0)) {
        in_stack_00000050 = -1;
        break;
      }
      param_1 = FUN_98010af8(uVar3 + 0x74,(ulonglong)in_stack_00000070,
                             CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
    } while ((int)unaff_r31 != 0);
  }
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (unaff_r31 = uVar18, in_stack_00000050 = unaff_r24, 0 < iVar9) {
      unaff_r31 = unaff_r31 - 1;
      param_1 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar18 = unaff_r31;
      iVar9 = (int)unaff_r31;
    }
  }
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    param_1 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar20 = *(byte *)((int)unaff_r19 + 1);
  uVar19 = (uint)bVar20;
  lVar22 = (longlong)(char)bVar20;
  if (lVar22 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar7 = (ulonglong)in_stack_00000054;
  lVar15 = unaff_r19;
  uVar8 = in_stack_0000006c;
LAB_98010d34:
  puVar12 = (undefined *)lVar22;
  iVar9 = (int)in_r10;
  iVar5 = (int)in_r9;
  bVar20 = (byte)uVar19;
  puVar4 = (undefined4 *)param_1;
  unaff_r19 = lVar15 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar12 < 0x20) || (0x78 < (int)puVar12)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (byte)(puVar12 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar13 * 8 + uVar8] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        unaff_r16 = 0;
        uVar6 = FUN_98014018(uVar19);
        if (uVar6 != 0) {
          FUN_98010a60(bVar20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar15 + 2;
          bVar20 = *(byte *)unaff_r19;
          if (bVar20 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        param_1 = FUN_98010a60(bVar20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        in_stack_00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        unaff_r16 = 0;
        in_stack_0000005c = 0;
      }
      else {
        iVar14 = in_stack_0000006c - 2;
        if (iVar14 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar14 == 1) {
            if (puVar12 == (undefined *)0x2a) {
              uVar7 = lVar16 + 7U & 0xfffffff8;
              lVar16 = uVar7 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar7 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar12 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar14 != 2) {
            if (iVar14 == 3) {
              if (puVar12 == (undefined *)0x2a) {
                lVar16 = (lVar16 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar15;
              if (iVar14 != 4) {
                uVar21 = lVar22 - 0x41;
                puVar11 = (undefined4 *)uVar21;
                bVar1 = (uVar21 & 0xffffffff) == 0x37;
                if ((uVar21 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar12 == (undefined *)0x49) {
                puVar11 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar12 != (undefined *)0x68) && (puVar12 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar15 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar12 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar12 != (undefined *)0x23) {
            bVar1 = puVar12 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar12 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar12 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar14 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar21 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar11) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    in_r10 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = in_r10 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar15 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar11 == (undefined4 *)0x33) && (in_r10 = (ulonglong)*(byte *)(iVar2 + 3), in_r10 == 0x32))
  {
    unaff_r19 = lVar15 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar11 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar11 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar11 == (undefined4 *)0x6f)) || (puVar11 == (undefined4 *)0x75)) ||
     ((puVar11 == (undefined4 *)0x78 || (puVar11 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  unaff_r16 = 0;
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar7 = FUN_980130f0(unaff_r18);
    puVar4 = (undefined4 *)uVar7;
    puVar11 = &DAT_9801cc80;
    puVar12 = &DAT_9801b9f8;
    puVar10 = &DAT_9801b9f8;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      iVar9 = ((uint)puVar4 & 0x1f) * 0x48;
      iVar5 = (&DAT_9801cc80)[(int)puVar4 >> 5];
      puVar11 = &DAT_9801cc80;
      puVar12 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar10 = (undefined *)(iVar5 + iVar9);
    }
    if ((puVar10[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      puVar12 = (undefined *)(puVar11[(int)puVar4 >> 5] + ((uint)puVar4 & 0x1f) * 0x48);
    }
    if ((puVar12[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((unaff_r31 & 0xffffffff) != 0) {
    lVar22 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar22 + 0x20U & 0xffffffff)) ||
       (param_1 = FUN_980127f8(), (ulonglong)unaff_r18 == (param_1 + 0x40U & 0xffffffff))) {
      FUN_9800e040(uVar3 + 0x290,0x200,unaff_r31,lVar16);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar19 = (uint)*(byte *)unaff_r31;
    unaff_r24 = 0;
    uVar7 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar22 = (longlong)(char)uVar19;
    in_stack_00000054 = 0;
    uVar8 = 0;
    unaff_r14 = 0;
    if (lVar22 == 0) goto LAB_980116f0;
    in_r10 = 0xffffffff98020000;
    uVar17 = (ulonglong)in_stack_00000070;
    in_r9 = 0xffffffff98000000;
    lVar15 = unaff_r31 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar16 = FUN_9800f950();
  puVar4 = (undefined4 *)lVar16;
switchD_98010ff8_caseD_22:
  *puVar4 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
switchD_98010ff8_caseD_1:
  while (uVar21 = uVar21 + 1, (in_r9 & 0xffffffff) != 0) {
    in_r9 = (ulonglong)*(byte *)uVar21;
  }
  uVar21 = (uVar21 - in_r10) - 1;
  uVar7 = uVar21 & 0xffffffff;
  in_stack_00000054 = (uint)uVar21;
  goto LAB_980114c8;
}


/* ==== FUN_980110ac @ 980110ac ==== */

/* WARNING: Removing unreachable block (ram,0x980115c8) */
/* WARNING: Removing unreachable block (ram,0x980115d0) */
/* WARNING: Removing unreachable block (ram,0x980115d8) */
/* WARNING: Removing unreachable block (ram,0x980115f8) */
/* WARNING: Removing unreachable block (ram,0x98011620) */
/* WARNING: Removing unreachable block (ram,0x98011604) */
/* WARNING: Removing unreachable block (ram,0x9801161c) */

void FUN_980110ac(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong in_r9;
  int iVar9;
  undefined *puVar10;
  ulonglong in_r10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint uVar13;
  short *in_r11;
  int iVar14;
  ulonglong unaff_r14;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar15;
  longlong unaff_r19;
  int unaff_r24;
  longlong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  byte bVar18;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar19;
  ulonglong unaff_r31;
  int in_stack_00000050;
  uint uStack00000054;
  undefined1 uStack00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  
  uVar5 = (ulonglong)*in_r11;
LAB_980114c4:
  uStack00000054 = (uint)uVar5;
LAB_980114c8:
  if (in_stack_00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar19 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar19 = 1;
    in_stack_0000005c = 1;
  }
  in_r10 = unaff_r27 & 0xc;
  uVar16 = (ZEXT48(in_stack_00000060) - uVar5) - uVar19;
  iVar9 = (int)uVar16;
  uVar5 = uVar16;
  iVar8 = iVar9;
  if (in_r10 == 0) {
    while (unaff_r31 = uVar5, 0 < iVar8) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar5 = unaff_r31;
      iVar8 = (int)unaff_r31;
    }
  }
  FUN_98010af8(ZEXT48(&stack0x00000000) + 0x58,uVar19,CONCAT44(unaff_00000090,unaff_r18),
               &stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar5 = uVar16, iVar8 = iVar9, (unaff_r27 & 4) == 0)) {
    while (unaff_r31 = uVar5, 0 < iVar8) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar5 = unaff_r31;
      iVar8 = (int)unaff_r31;
    }
  }
  param_1 = FUN_98010af8(unaff_r28,(ulonglong)uStack00000054,CONCAT44(unaff_00000090,unaff_r18),
                         &stack0x00000050);
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (unaff_r31 = uVar16, in_stack_00000050 = unaff_r24, 0 < iVar9) {
      unaff_r31 = unaff_r31 - 1;
      param_1 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar16 = unaff_r31;
      iVar9 = (int)unaff_r31;
    }
  }
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    param_1 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar18 = *(byte *)((int)unaff_r19 + 1);
  uVar17 = (uint)bVar18;
  lVar7 = (longlong)(char)bVar18;
  if (lVar7 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar5 = (ulonglong)uStack00000054;
  lVar15 = unaff_r19;
  uVar6 = in_stack_0000006c;
LAB_98010d34:
  puVar12 = (undefined *)lVar7;
  iVar9 = (int)in_r10;
  iVar8 = (int)in_r9;
  bVar18 = (byte)uVar17;
  puVar3 = (undefined4 *)param_1;
  unaff_r19 = lVar15 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar12 < 0x20) || (0x78 < (int)puVar12)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (byte)(puVar12 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar13 * 8 + uVar6] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        uVar4 = FUN_98014018(uVar17);
        if (uVar4 != 0) {
          FUN_98010a60(bVar18,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar15 + 2;
          bVar18 = *(byte *)unaff_r19;
          if (bVar18 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        param_1 = FUN_98010a60(bVar18,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        in_stack_00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        in_stack_0000005c = 0;
      }
      else {
        iVar14 = in_stack_0000006c - 2;
        if (iVar14 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar14 == 1) {
            if (puVar12 == (undefined *)0x2a) {
              uVar5 = unaff_r26 + 7U & 0xfffffff8;
              unaff_r26 = uVar5 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar5 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar12 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar14 != 2) {
            if (iVar14 == 3) {
              if (puVar12 == (undefined *)0x2a) {
                unaff_r26 = (unaff_r26 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar15;
              if (iVar14 != 4) {
                uVar19 = lVar7 - 0x41;
                puVar11 = (undefined4 *)uVar19;
                bVar1 = (uVar19 & 0xffffffff) == 0x37;
                if ((uVar19 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar12 == (undefined *)0x49) {
                puVar11 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar12 != (undefined *)0x68) && (puVar12 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar15 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar12 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar12 != (undefined *)0x23) {
            bVar1 = puVar12 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar12 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar12 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar14 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar19 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar11) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    in_r10 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = in_r10 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar15 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar11 == (undefined4 *)0x33) && (in_r10 = (ulonglong)*(byte *)(iVar2 + 3), in_r10 == 0x32))
  {
    unaff_r19 = lVar15 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar11 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar11 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar11 == (undefined4 *)0x6f)) || (puVar11 == (undefined4 *)0x75)) ||
     ((puVar11 == (undefined4 *)0x78 || (puVar11 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar5 = FUN_980130f0(unaff_r18);
    puVar3 = (undefined4 *)uVar5;
    puVar11 = &DAT_9801cc80;
    puVar12 = &DAT_9801b9f8;
    puVar10 = &DAT_9801b9f8;
    if ((puVar3 != (undefined4 *)0xffffffff) && (puVar3 != (undefined4 *)0xfffffffe)) {
      iVar9 = ((uint)puVar3 & 0x1f) * 0x48;
      iVar8 = (&DAT_9801cc80)[(int)puVar3 >> 5];
      puVar11 = &DAT_9801cc80;
      puVar12 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar10 = (undefined *)(iVar8 + iVar9);
    }
    if ((puVar10[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar3 != (undefined4 *)0xffffffff) && (puVar3 != (undefined4 *)0xfffffffe)) {
      puVar12 = (undefined *)(puVar11[(int)puVar3 >> 5] + ((uint)puVar3 & 0x1f) * 0x48);
    }
    if ((puVar12[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((unaff_r31 & 0xffffffff) != 0) {
    lVar7 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar7 + 0x20U & 0xffffffff)) ||
       (param_1 = FUN_980127f8(), (ulonglong)unaff_r18 == (param_1 + 0x40U & 0xffffffff))) {
      FUN_9800e040(ZEXT48(&stack0x00000000) + 0x290,0x200,unaff_r31,unaff_r26);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar17 = (uint)*(byte *)unaff_r31;
    unaff_r24 = 0;
    uVar5 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar7 = (longlong)(char)uVar17;
    uStack00000054 = 0;
    uVar6 = 0;
    unaff_r14 = 0;
    if (lVar7 == 0) goto LAB_980116f0;
    in_r10 = 0xffffffff98020000;
    unaff_r28 = (ulonglong)in_stack_00000070;
    in_r9 = 0xffffffff98000000;
    lVar15 = unaff_r31 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar7 = FUN_9800f950();
  puVar3 = (undefined4 *)lVar7;
switchD_98010ff8_caseD_22:
  *puVar3 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
switchD_98010ff8_caseD_1:
  while (uVar19 = uVar19 + 1, (in_r9 & 0xffffffff) != 0) {
    in_r9 = (ulonglong)*(byte *)uVar19;
  }
  uVar5 = (uVar19 - in_r10) - 1 & 0xffffffff;
  goto LAB_980114c4;
}


/* ==== FUN_980110b8 @ 980110b8 ==== */

void FUN_980110b8(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ushort uVar6;
  int iVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined *puVar11;
  undefined4 *puVar13;
  undefined *puVar14;
  uint uVar15;
  ulonglong uVar12;
  int iVar16;
  ulonglong unaff_r14;
  int unaff_r16;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar17;
  longlong unaff_r19;
  int unaff_r20;
  int unaff_r24;
  longlong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar22;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar23;
  ulonglong unaff_r31;
  int in_stack_00000050;
  uint uStack00000054;
  undefined1 uStack00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar19 = (ulonglong)*(uint *)(unaff_r20 + 0x2aa0);
  uVar12 = uVar19;
  uVar18 = uVar19;
  do {
    uVar9 = (ulonglong)*(byte *)uVar12;
switchD_98010ff8_caseD_1:
    uVar12 = uVar12 + 1;
  } while ((uVar9 & 0xffffffff) != 0);
  uVar12 = (uVar12 - uVar19) - 1;
  uVar7 = uVar12 & 0xffffffff;
  uStack00000054 = (uint)uVar12;
LAB_980114c8:
  if (in_stack_00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar12 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar12 = 1;
    in_stack_0000005c = 1;
  }
  uVar19 = unaff_r27 & 0xc;
  uVar20 = (ZEXT48(in_stack_00000060) - uVar7) - uVar12;
  iVar10 = (int)uVar20;
  uVar7 = uVar20;
  iVar5 = iVar10;
  if (uVar19 == 0) {
    while (unaff_r31 = uVar7, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar7 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  FUN_98010af8(uVar3 + 0x58,uVar12,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar12 = uVar20, iVar5 = iVar10, (unaff_r27 & 4) == 0)) {
    while (unaff_r31 = uVar12, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar12 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  if ((unaff_r16 == 0) || ((int)uStack00000054 < 1)) {
    param_1 = FUN_98010af8(uVar18,(ulonglong)uStack00000054,CONCAT44(unaff_00000090,unaff_r18),
                           &stack0x00000050);
  }
  else {
    lVar23 = uVar18 - 2;
    unaff_r31 = (ulonglong)uStack00000054;
    do {
      lVar23 = lVar23 + 2;
      unaff_r31 = unaff_r31 - 1;
      iVar5 = FUN_98014010(&stack0x00000070,(uint *)&stack0x00000074,6,*(ushort *)lVar23);
      param_1 = (longlong)iVar5;
      if ((iVar5 != 0) || (in_stack_00000070 == 0)) {
        in_stack_00000050 = -1;
        break;
      }
      param_1 = FUN_98010af8(uVar3 + 0x74,(ulonglong)in_stack_00000070,
                             CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
    } while ((int)unaff_r31 != 0);
  }
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (unaff_r31 = uVar20, in_stack_00000050 = unaff_r24, 0 < iVar10) {
      unaff_r31 = unaff_r31 - 1;
      param_1 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar20 = unaff_r31;
      iVar10 = (int)unaff_r31;
    }
  }
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    param_1 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar22 = *(byte *)((int)unaff_r19 + 1);
  uVar21 = (uint)bVar22;
  lVar23 = (longlong)(char)bVar22;
  if (lVar23 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar7 = (ulonglong)uStack00000054;
  lVar17 = unaff_r19;
  uVar8 = in_stack_0000006c;
LAB_98010d34:
  puVar14 = (undefined *)lVar23;
  iVar10 = (int)uVar19;
  iVar5 = (int)uVar9;
  bVar22 = (byte)uVar21;
  puVar4 = (undefined4 *)param_1;
  unaff_r19 = lVar17 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar14 < 0x20) || (0x78 < (int)puVar14)) {
      uVar15 = 0;
    }
    else {
      uVar15 = (byte)(puVar14 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar15 * 8 + uVar8] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        unaff_r16 = 0;
        uVar6 = FUN_98014018(uVar21);
        if (uVar6 != 0) {
          FUN_98010a60(bVar22,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar17 + 2;
          bVar22 = *(byte *)unaff_r19;
          if (bVar22 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        param_1 = FUN_98010a60(bVar22,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        in_stack_00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        unaff_r16 = 0;
        in_stack_0000005c = 0;
      }
      else {
        iVar16 = in_stack_0000006c - 2;
        if (iVar16 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar16 == 1) {
            if (puVar14 == (undefined *)0x2a) {
              uVar12 = unaff_r26 + 7U & 0xfffffff8;
              unaff_r26 = uVar12 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar12 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar14 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar16 != 2) {
            if (iVar16 == 3) {
              if (puVar14 == (undefined *)0x2a) {
                unaff_r26 = (unaff_r26 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar17;
              if (iVar16 != 4) {
                uVar12 = lVar23 - 0x41;
                puVar13 = (undefined4 *)uVar12;
                bVar1 = (uVar12 & 0xffffffff) == 0x37;
                if ((uVar12 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar14 == (undefined *)0x49) {
                puVar13 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar14 != (undefined *)0x68) && (puVar14 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar17 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar14 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar14 != (undefined *)0x23) {
            bVar1 = puVar14 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar14 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar14 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar16 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar12 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar13) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    uVar19 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = uVar19 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar17 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar13 == (undefined4 *)0x33) && (uVar19 = (ulonglong)*(byte *)(iVar2 + 3), uVar19 == 0x32))
  {
    unaff_r19 = lVar17 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar13 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar13 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar13 == (undefined4 *)0x6f)) || (puVar13 == (undefined4 *)0x75)) ||
     ((puVar13 == (undefined4 *)0x78 || (puVar13 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  unaff_r16 = 0;
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar19 = FUN_980130f0(unaff_r18);
    puVar4 = (undefined4 *)uVar19;
    puVar13 = &DAT_9801cc80;
    puVar14 = &DAT_9801b9f8;
    puVar11 = &DAT_9801b9f8;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      iVar10 = ((uint)puVar4 & 0x1f) * 0x48;
      iVar5 = (&DAT_9801cc80)[(int)puVar4 >> 5];
      puVar13 = &DAT_9801cc80;
      puVar14 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar11 = (undefined *)(iVar5 + iVar10);
    }
    if ((puVar11[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      puVar14 = (undefined *)(puVar13[(int)puVar4 >> 5] + ((uint)puVar4 & 0x1f) * 0x48);
    }
    if ((puVar14[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((unaff_r31 & 0xffffffff) != 0) {
    lVar23 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar23 + 0x20U & 0xffffffff)) ||
       (param_1 = FUN_980127f8(), (ulonglong)unaff_r18 == (param_1 + 0x40U & 0xffffffff))) {
      FUN_9800e040(uVar3 + 0x290,0x200,unaff_r31,unaff_r26);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar21 = (uint)*(byte *)unaff_r31;
    unaff_r24 = 0;
    uVar7 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar23 = (longlong)(char)uVar21;
    uStack00000054 = 0;
    uVar8 = 0;
    unaff_r14 = 0;
    if (lVar23 == 0) goto LAB_980116f0;
    uVar19 = 0xffffffff98020000;
    uVar18 = (ulonglong)in_stack_00000070;
    uVar9 = 0xffffffff98000000;
    lVar17 = unaff_r31 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar23 = FUN_9800f950();
  puVar4 = (undefined4 *)lVar23;
switchD_98010ff8_caseD_22:
  *puVar4 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
}


/* ==== FUN_980110f4 @ 980110f4 ==== */

void FUN_980110f4(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ushort uVar6;
  int iVar5;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong unaff_r14;
  int unaff_r15;
  int unaff_r16;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar15;
  longlong unaff_r19;
  int unaff_r20;
  int unaff_r24;
  ulonglong unaff_r25;
  longlong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar21;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r31;
  int in_stack_00000050;
  uint uStack00000054;
  undefined1 uStack00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  
  uVar3 = ZEXT48(&stack0x00000000);
  if ((int)unaff_r25 == -1) {
    unaff_r25 = 0x7fffffff;
  }
  uVar8 = unaff_r27 & 0x810;
  uVar17 = unaff_r26 + 7U & 0xfffffff8;
  lVar16 = uVar17 + 8;
  uVar17 = (ulonglong)*(uint *)((int)uVar17 + 4);
  uVar18 = uVar17;
  if ((int)uVar8 == 0) {
    if (uVar17 == 0) {
      uVar17 = (ulonglong)*(uint *)(unaff_r20 + 0x2aa0);
      uVar18 = uVar17;
    }
    while ((int)unaff_r25 != 0) {
      uVar8 = (ulonglong)*(byte *)uVar17;
      unaff_r25 = unaff_r25 - 1;
      if (uVar8 == 0) break;
      uVar17 = uVar17 + 1;
    }
    uVar17 = uVar17 - uVar18;
  }
  else {
    if (uVar17 == 0) {
      uVar18 = (ulonglong)*(uint *)(unaff_r15 + 0x2aa4);
    }
    unaff_r16 = 1;
    uVar17 = uVar18;
    while ((int)unaff_r25 != 0) {
      uVar8 = (ulonglong)*(ushort *)uVar17;
      unaff_r25 = unaff_r25 - 1;
      if (uVar8 == 0) break;
      uVar17 = uVar17 + 2;
    }
    uVar17 = (ulonglong)((int)(ushort *)uVar17 - (int)uVar18 >> 1);
  }
LAB_980114c4:
  uStack00000054 = (uint)uVar17;
LAB_980114c8:
  if (in_stack_00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar22 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar22 = 1;
    in_stack_0000005c = 1;
  }
  unaff_r25 = unaff_r27 & 0xc;
  uVar19 = (ZEXT48(in_stack_00000060) - uVar17) - uVar22;
  iVar9 = (int)uVar19;
  uVar17 = uVar19;
  iVar5 = iVar9;
  if (unaff_r25 == 0) {
    while (unaff_r31 = uVar17, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar17 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  FUN_98010af8(uVar3 + 0x58,uVar22,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar17 = uVar19, iVar5 = iVar9, (unaff_r27 & 4) == 0)) {
    while (unaff_r31 = uVar17, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar17 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  if ((unaff_r16 == 0) || ((int)uStack00000054 < 1)) {
    param_1 = FUN_98010af8(uVar18,(ulonglong)uStack00000054,CONCAT44(unaff_00000090,unaff_r18),
                           &stack0x00000050);
  }
  else {
    lVar23 = uVar18 - 2;
    unaff_r31 = (ulonglong)uStack00000054;
    do {
      lVar23 = lVar23 + 2;
      unaff_r31 = unaff_r31 - 1;
      iVar5 = FUN_98014010(&stack0x00000070,(uint *)&stack0x00000074,6,*(ushort *)lVar23);
      param_1 = (longlong)iVar5;
      if ((iVar5 != 0) || (in_stack_00000070 == 0)) {
        in_stack_00000050 = -1;
        break;
      }
      param_1 = FUN_98010af8(uVar3 + 0x74,(ulonglong)in_stack_00000070,
                             CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
    } while ((int)unaff_r31 != 0);
  }
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (unaff_r31 = uVar19, in_stack_00000050 = unaff_r24, 0 < iVar9) {
      unaff_r31 = unaff_r31 - 1;
      param_1 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar19 = unaff_r31;
      iVar9 = (int)unaff_r31;
    }
  }
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    param_1 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar21 = *(byte *)((int)unaff_r19 + 1);
  uVar20 = (uint)bVar21;
  lVar23 = (longlong)(char)bVar21;
  if (lVar23 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar17 = (ulonglong)uStack00000054;
  lVar15 = unaff_r19;
  uVar7 = in_stack_0000006c;
LAB_98010d34:
  puVar12 = (undefined *)lVar23;
  iVar9 = (int)unaff_r25;
  iVar5 = (int)uVar8;
  bVar21 = (byte)uVar20;
  puVar4 = (undefined4 *)param_1;
  unaff_r19 = lVar15 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar12 < 0x20) || (0x78 < (int)puVar12)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (byte)(puVar12 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar13 * 8 + uVar7] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        unaff_r16 = 0;
        uVar6 = FUN_98014018(uVar20);
        if (uVar6 != 0) {
          FUN_98010a60(bVar21,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar15 + 2;
          bVar21 = *(byte *)unaff_r19;
          if (bVar21 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        param_1 = FUN_98010a60(bVar21,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        in_stack_00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        unaff_r16 = 0;
        in_stack_0000005c = 0;
      }
      else {
        iVar14 = in_stack_0000006c - 2;
        if (iVar14 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar14 == 1) {
            if (puVar12 == (undefined *)0x2a) {
              uVar17 = lVar16 + 7U & 0xfffffff8;
              lVar16 = uVar17 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar17 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar12 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar14 != 2) {
            if (iVar14 == 3) {
              if (puVar12 == (undefined *)0x2a) {
                lVar16 = (lVar16 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar15;
              if (iVar14 != 4) {
                uVar22 = lVar23 - 0x41;
                puVar11 = (undefined4 *)uVar22;
                bVar1 = (uVar22 & 0xffffffff) == 0x37;
                if ((uVar22 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar12 == (undefined *)0x49) {
                puVar11 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar12 != (undefined *)0x68) && (puVar12 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar15 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar12 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar12 != (undefined *)0x23) {
            bVar1 = puVar12 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar12 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar12 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar14 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar22 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar11) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    unaff_r25 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = unaff_r25 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar15 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar11 == (undefined4 *)0x33) &&
     (unaff_r25 = (ulonglong)*(byte *)(iVar2 + 3), unaff_r25 == 0x32)) {
    unaff_r19 = lVar15 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar11 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar11 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar11 == (undefined4 *)0x6f)) || (puVar11 == (undefined4 *)0x75)) ||
     ((puVar11 == (undefined4 *)0x78 || (puVar11 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  unaff_r16 = 0;
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar17 = FUN_980130f0(unaff_r18);
    puVar4 = (undefined4 *)uVar17;
    puVar11 = &DAT_9801cc80;
    puVar12 = &DAT_9801b9f8;
    puVar10 = &DAT_9801b9f8;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      iVar9 = ((uint)puVar4 & 0x1f) * 0x48;
      iVar5 = (&DAT_9801cc80)[(int)puVar4 >> 5];
      puVar11 = &DAT_9801cc80;
      puVar12 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar10 = (undefined *)(iVar5 + iVar9);
    }
    if ((puVar10[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      puVar12 = (undefined *)(puVar11[(int)puVar4 >> 5] + ((uint)puVar4 & 0x1f) * 0x48);
    }
    if ((puVar12[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((unaff_r31 & 0xffffffff) != 0) {
    lVar23 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar23 + 0x20U & 0xffffffff)) ||
       (param_1 = FUN_980127f8(), (ulonglong)unaff_r18 == (param_1 + 0x40U & 0xffffffff))) {
      FUN_9800e040(uVar3 + 0x290,0x200,unaff_r31,lVar16);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar20 = (uint)*(byte *)unaff_r31;
    unaff_r24 = 0;
    uVar17 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar23 = (longlong)(char)uVar20;
    uStack00000054 = 0;
    uVar7 = 0;
    unaff_r14 = 0;
    if (lVar23 == 0) goto LAB_980116f0;
    unaff_r25 = 0xffffffff98020000;
    uVar18 = (ulonglong)in_stack_00000070;
    uVar8 = 0xffffffff98000000;
    lVar15 = unaff_r31 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar16 = FUN_9800f950();
  puVar4 = (undefined4 *)lVar16;
switchD_98010ff8_caseD_22:
  *puVar4 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
switchD_98010ff8_caseD_1:
  while (uVar22 = uVar22 + 1, (uVar8 & 0xffffffff) != 0) {
    uVar8 = (ulonglong)*(byte *)uVar22;
  }
  uVar17 = (uVar22 - unaff_r25) - 1 & 0xffffffff;
  goto LAB_980114c4;
}


/* ==== FUN_980111c8 @ 980111c8 ==== */

void FUN_980111c8(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ushort uVar6;
  int iVar5;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong in_r9;
  int iVar10;
  undefined *puVar11;
  ulonglong in_r10;
  undefined4 *puVar13;
  undefined *puVar14;
  uint uVar15;
  ulonglong uVar12;
  int iVar16;
  ulonglong unaff_r14;
  int unaff_r16;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar17;
  longlong unaff_r19;
  int unaff_r24;
  longlong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  byte bVar20;
  ulonglong uVar18;
  uint uVar19;
  ulonglong unaff_r31;
  int in_stack_00000050;
  uint in_stack_00000054;
  undefined1 uStack00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int iStack00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  
  uVar3 = ZEXT48(&stack0x00000000);
  *(int *)unaff_r31 = unaff_r24;
  iStack00000064 = 1;
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    param_1 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar20 = *(byte *)((int)unaff_r19 + 1);
  uVar19 = (uint)bVar20;
  lVar9 = (longlong)(char)bVar20;
  if (lVar9 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar7 = (ulonglong)in_stack_00000054;
  lVar17 = unaff_r19;
  uVar8 = in_stack_0000006c;
LAB_98010d34:
  puVar14 = (undefined *)lVar9;
  iVar10 = (int)in_r10;
  iVar5 = (int)in_r9;
  bVar20 = (byte)uVar19;
  puVar4 = (undefined4 *)param_1;
  unaff_r19 = lVar17 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar14 < 0x20) || (0x78 < (int)puVar14)) {
      uVar15 = 0;
    }
    else {
      uVar15 = (byte)(puVar14 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar15 * 8 + uVar8] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        unaff_r16 = 0;
        uVar6 = FUN_98014018(uVar19);
        if (uVar6 != 0) {
          FUN_98010a60(bVar20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar17 + 2;
          bVar20 = *(byte *)unaff_r19;
          if (bVar20 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        param_1 = FUN_98010a60(bVar20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        iStack00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        unaff_r16 = 0;
        in_stack_0000005c = 0;
      }
      else {
        iVar16 = in_stack_0000006c - 2;
        if (iVar16 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar16 == 1) {
            if (puVar14 == (undefined *)0x2a) {
              uVar7 = unaff_r26 + 7U & 0xfffffff8;
              unaff_r26 = uVar7 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar7 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar14 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar16 != 2) {
            if (iVar16 == 3) {
              if (puVar14 == (undefined *)0x2a) {
                unaff_r26 = (unaff_r26 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar17;
              if (iVar16 != 4) {
                uVar12 = lVar9 - 0x41;
                puVar13 = (undefined4 *)uVar12;
                bVar1 = (uVar12 & 0xffffffff) == 0x37;
                if ((uVar12 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar14 == (undefined *)0x49) {
                puVar13 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar14 != (undefined *)0x68) && (puVar14 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar17 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar14 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar14 != (undefined *)0x23) {
            bVar1 = puVar14 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar14 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar14 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar16 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar12 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar13) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    in_r10 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = in_r10 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar17 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar13 == (undefined4 *)0x33) && (in_r10 = (ulonglong)*(byte *)(iVar2 + 3), in_r10 == 0x32))
  {
    unaff_r19 = lVar17 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar13 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar13 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar13 == (undefined4 *)0x6f)) || (puVar13 == (undefined4 *)0x75)) ||
     ((puVar13 == (undefined4 *)0x78 || (puVar13 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  unaff_r16 = 0;
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar7 = FUN_980130f0(unaff_r18);
    puVar4 = (undefined4 *)uVar7;
    puVar13 = &DAT_9801cc80;
    puVar14 = &DAT_9801b9f8;
    puVar11 = &DAT_9801b9f8;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      iVar10 = ((uint)puVar4 & 0x1f) * 0x48;
      iVar5 = (&DAT_9801cc80)[(int)puVar4 >> 5];
      puVar13 = &DAT_9801cc80;
      puVar14 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar11 = (undefined *)(iVar5 + iVar10);
    }
    if ((puVar11[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      puVar14 = (undefined *)(puVar13[(int)puVar4 >> 5] + ((uint)puVar4 & 0x1f) * 0x48);
    }
    if ((puVar14[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((unaff_r31 & 0xffffffff) != 0) {
    lVar9 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar9 + 0x20U & 0xffffffff)) ||
       (param_1 = FUN_980127f8(), (ulonglong)unaff_r18 == (param_1 + 0x40U & 0xffffffff))) {
      FUN_9800e040(uVar3 + 0x290,0x200,unaff_r31,unaff_r26);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar19 = (uint)*(byte *)unaff_r31;
    unaff_r24 = 0;
    uVar7 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar9 = (longlong)(char)uVar19;
    in_stack_00000054 = 0;
    uVar8 = 0;
    unaff_r14 = 0;
    if (lVar9 == 0) goto LAB_980116f0;
    in_r10 = 0xffffffff98020000;
    unaff_r28 = (ulonglong)in_stack_00000070;
    in_r9 = 0xffffffff98000000;
    lVar17 = unaff_r31 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar9 = FUN_9800f950();
  puVar4 = (undefined4 *)lVar9;
switchD_98010ff8_caseD_22:
  *puVar4 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
switchD_98010ff8_caseD_1:
  while (uVar12 = uVar12 + 1, (in_r9 & 0xffffffff) != 0) {
    in_r9 = (ulonglong)*(byte *)uVar12;
  }
  uVar12 = (uVar12 - in_r10) - 1;
  uVar7 = uVar12 & 0xffffffff;
  in_stack_00000054 = (uint)uVar12;
LAB_980114c8:
  if (iStack00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar12 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar12 = 1;
    in_stack_0000005c = 1;
  }
  in_r10 = unaff_r27 & 0xc;
  uVar18 = (ZEXT48(in_stack_00000060) - uVar7) - uVar12;
  iVar10 = (int)uVar18;
  uVar7 = uVar18;
  iVar5 = iVar10;
  if (in_r10 == 0) {
    while (unaff_r31 = uVar7, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar7 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  FUN_98010af8(uVar3 + 0x58,uVar12,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar7 = uVar18, iVar5 = iVar10, (unaff_r27 & 4) == 0)) {
    while (unaff_r31 = uVar7, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar7 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  if ((unaff_r16 == 0) || ((int)in_stack_00000054 < 1)) {
    param_1 = FUN_98010af8(unaff_r28,(ulonglong)in_stack_00000054,CONCAT44(unaff_00000090,unaff_r18)
                           ,&stack0x00000050);
  }
  else {
    lVar9 = unaff_r28 - 2;
    unaff_r31 = (ulonglong)in_stack_00000054;
    do {
      lVar9 = lVar9 + 2;
      unaff_r31 = unaff_r31 - 1;
      iVar5 = FUN_98014010(&stack0x00000070,(uint *)&stack0x00000074,6,*(ushort *)lVar9);
      param_1 = (longlong)iVar5;
      if ((iVar5 != 0) || (in_stack_00000070 == 0)) {
        in_stack_00000050 = -1;
        break;
      }
      param_1 = FUN_98010af8(uVar3 + 0x74,(ulonglong)in_stack_00000070,
                             CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
    } while ((int)unaff_r31 != 0);
  }
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (unaff_r31 = uVar18, in_stack_00000050 = unaff_r24, 0 < iVar10) {
      unaff_r31 = unaff_r31 - 1;
      param_1 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar18 = unaff_r31;
      iVar10 = (int)unaff_r31;
    }
  }
  goto LAB_98011684;
}


/* ==== FUN_98011200 @ 98011200 ==== */

void FUN_98011200(void)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar5;
  ushort uVar8;
  uint *puVar6;
  longlong lVar4;
  int iVar7;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 *puVar15;
  undefined *puVar16;
  uint uVar17;
  char *pcVar18;
  longlong lVar14;
  int iVar19;
  ulonglong unaff_r14;
  int unaff_r16;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar20;
  longlong unaff_r19;
  undefined8 unaff_r21;
  int unaff_r22;
  ulonglong unaff_r23;
  int unaff_r24;
  longlong unaff_r25;
  longlong unaff_r26;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong uVar22;
  ulonglong unaff_r28;
  ulonglong uVar23;
  byte bVar26;
  char unaff_r29;
  ulonglong uVar24;
  uint uVar25;
  longlong unaff_r30;
  ulonglong uVar27;
  ulonglong uVar28;
  byte in_cr6;
  int in_stack_00000050;
  uint in_stack_00000054;
  undefined1 uStack00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  undefined8 in_stack_00000080;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar23 = unaff_r28;
  lVar4 = unaff_r30;
  if ((bool)(in_cr6 >> 1 & 1)) {
    if (unaff_r29 == 'g') {
      unaff_r25 = 1;
    }
  }
  else {
    if (0x200 < (int)unaff_r25) {
      unaff_r25 = 0x200;
    }
    if (0xa3 < (int)unaff_r25) {
      lVar4 = unaff_r25 + 0x15d;
      puVar6 = FUN_9800ddf0();
      unaff_r14 = (ulonglong)(int)puVar6;
      uVar23 = unaff_r14;
      if (unaff_r14 == 0) {
        unaff_r25 = 0xa3;
        uVar23 = unaff_r28;
        lVar4 = unaff_r30;
      }
    }
  }
  uVar28 = (ulonglong)unaff_r29;
  uVar11 = unaff_r26 + 7U & 0xfffffff8;
  in_stack_00000080 = *(undefined8 *)uVar11;
  lVar21 = uVar11 + 8;
  uVar11 = unaff_r23;
  lVar4 = (**(code **)(unaff_r22 + 0x18))(uVar3 + 0x80,uVar23,lVar4,uVar28,unaff_r25,unaff_r21);
  if (((unaff_r27 & 0x80) != 0) && ((int)unaff_r25 == 0)) {
    lVar4 = (**(code **)(unaff_r22 + 0x24))(uVar23,unaff_r23);
  }
  if ((unaff_r29 == 'g') && ((int)(unaff_r27 & 0x80) == 0)) {
    lVar4 = (**(code **)(unaff_r22 + 0x20))(uVar23,unaff_r23);
  }
  uVar22 = uVar23;
  if (*(char *)uVar23 == '-') {
    unaff_r27 = unaff_r27 | 0x100;
    uVar23 = uVar23 + 1;
    uVar22 = uVar23;
  }
  do {
    pcVar18 = (char *)uVar23;
    uVar23 = uVar23 + 1;
  } while (*pcVar18 != '\0');
  lVar14 = uVar23 - uVar22;
  uVar23 = 0;
LAB_980110d8:
  uVar9 = lVar14 - 1U & 0xffffffff;
  in_stack_00000054 = (uint)(lVar14 - 1U);
LAB_980114c8:
  if (in_stack_00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar27 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar27 = 1;
    in_stack_0000005c = 1;
  }
  uVar23 = unaff_r27 & 0xc;
  uVar24 = (ZEXT48(in_stack_00000060) - uVar9) - uVar27;
  iVar12 = (int)uVar24;
  uVar9 = uVar24;
  iVar7 = iVar12;
  if (uVar23 == 0) {
    while (uVar28 = uVar9, 0 < iVar7) {
      uVar28 = uVar28 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar9 = uVar28;
      iVar7 = (int)uVar28;
    }
  }
  FUN_98010af8(uVar3 + 0x58,uVar27,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar9 = uVar24, iVar7 = iVar12, (unaff_r27 & 4) == 0)) {
    while (uVar28 = uVar9, 0 < iVar7) {
      uVar28 = uVar28 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar9 = uVar28;
      iVar7 = (int)uVar28;
    }
  }
  if ((unaff_r16 == 0) || ((int)in_stack_00000054 < 1)) {
    lVar4 = FUN_98010af8(uVar22,(ulonglong)in_stack_00000054,CONCAT44(unaff_00000090,unaff_r18),
                         &stack0x00000050);
  }
  else {
    lVar14 = uVar22 - 2;
    uVar28 = (ulonglong)in_stack_00000054;
    do {
      lVar14 = lVar14 + 2;
      uVar28 = uVar28 - 1;
      iVar7 = FUN_98014010(&stack0x00000070,(uint *)&stack0x00000074,6,*(ushort *)lVar14);
      lVar4 = (longlong)iVar7;
      if ((iVar7 != 0) || (in_stack_00000070 == 0)) {
        in_stack_00000050 = -1;
        break;
      }
      lVar4 = FUN_98010af8(uVar3 + 0x74,(ulonglong)in_stack_00000070,
                           CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
    } while ((int)uVar28 != 0);
  }
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (uVar28 = uVar24, in_stack_00000050 = unaff_r24, 0 < iVar12) {
      uVar28 = uVar28 - 1;
      lVar4 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar24 = uVar28;
      iVar12 = (int)uVar28;
    }
  }
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    lVar4 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar26 = *(byte *)((int)unaff_r19 + 1);
  uVar25 = (uint)bVar26;
  lVar14 = (longlong)(char)bVar26;
  if (lVar14 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar9 = (ulonglong)in_stack_00000054;
  lVar20 = unaff_r19;
  uVar10 = in_stack_0000006c;
LAB_98010d34:
  puVar16 = (undefined *)lVar14;
  iVar12 = (int)uVar23;
  iVar7 = (int)uVar11;
  bVar26 = (byte)uVar25;
  puVar5 = (undefined4 *)lVar4;
  unaff_r19 = lVar20 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar16 < 0x20) || (0x78 < (int)puVar16)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (byte)(puVar16 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar17 * 8 + uVar10] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        unaff_r16 = 0;
        uVar8 = FUN_98014018(uVar25);
        if (uVar8 != 0) {
          FUN_98010a60(bVar26,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar20 + 2;
          bVar26 = *(byte *)unaff_r19;
          if (bVar26 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        lVar4 = FUN_98010a60(bVar26,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        in_stack_00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        unaff_r16 = 0;
        in_stack_0000005c = 0;
      }
      else {
        iVar19 = in_stack_0000006c - 2;
        if (iVar19 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar19 == 1) {
            if (puVar16 == (undefined *)0x2a) {
              uVar9 = lVar21 + 7U & 0xfffffff8;
              lVar21 = uVar9 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar9 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar16 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar19 != 2) {
            if (iVar19 == 3) {
              if (puVar16 == (undefined *)0x2a) {
                lVar21 = (lVar21 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar20;
              if (iVar19 != 4) {
                uVar27 = lVar14 - 0x41;
                puVar15 = (undefined4 *)uVar27;
                bVar1 = (uVar27 & 0xffffffff) == 0x37;
                if ((uVar27 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar16 == (undefined *)0x49) {
                puVar15 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar16 != (undefined *)0x68) && (puVar16 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar20 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar16 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar16 != (undefined *)0x23) {
            bVar1 = puVar16 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar16 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar16 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar19 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar27 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar15) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    uVar23 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = uVar23 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar20 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar15 == (undefined4 *)0x33) && (uVar23 = (ulonglong)*(byte *)(iVar2 + 3), uVar23 == 0x32))
  {
    unaff_r19 = lVar20 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar15 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar15 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar15 == (undefined4 *)0x6f)) || (puVar15 == (undefined4 *)0x75)) ||
     ((puVar15 == (undefined4 *)0x78 || (puVar15 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  unaff_r16 = 0;
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar23 = FUN_980130f0(unaff_r18);
    puVar5 = (undefined4 *)uVar23;
    puVar15 = &DAT_9801cc80;
    puVar16 = &DAT_9801b9f8;
    puVar13 = &DAT_9801b9f8;
    if ((puVar5 != (undefined4 *)0xffffffff) && (puVar5 != (undefined4 *)0xfffffffe)) {
      iVar12 = ((uint)puVar5 & 0x1f) * 0x48;
      iVar7 = (&DAT_9801cc80)[(int)puVar5 >> 5];
      puVar15 = &DAT_9801cc80;
      puVar16 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar13 = (undefined *)(iVar7 + iVar12);
    }
    if ((puVar13[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar5 != (undefined4 *)0xffffffff) && (puVar5 != (undefined4 *)0xfffffffe)) {
      puVar16 = (undefined *)(puVar15[(int)puVar5 >> 5] + ((uint)puVar5 & 0x1f) * 0x48);
    }
    if ((puVar16[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((uVar28 & 0xffffffff) != 0) {
    lVar4 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar4 + 0x20U & 0xffffffff)) ||
       (lVar4 = FUN_980127f8(), (ulonglong)unaff_r18 == (lVar4 + 0x40U & 0xffffffff))) {
      FUN_9800e040(uVar3 + 0x290,0x200,uVar28,lVar21);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar25 = (uint)*(byte *)uVar28;
    unaff_r24 = 0;
    uVar9 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar14 = (longlong)(char)uVar25;
    in_stack_00000054 = 0;
    uVar10 = 0;
    unaff_r14 = 0;
    if (lVar14 == 0) goto LAB_980116f0;
    uVar23 = 0xffffffff98020000;
    uVar22 = (ulonglong)in_stack_00000070;
    uVar11 = 0xffffffff98000000;
    lVar20 = uVar28 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar4 = FUN_9800f950();
  puVar5 = (undefined4 *)lVar4;
switchD_98010ff8_caseD_22:
  *puVar5 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
switchD_98010ff8_caseD_1:
  while (uVar27 = uVar27 + 1, (uVar11 & 0xffffffff) != 0) {
    uVar11 = (ulonglong)*(byte *)uVar27;
  }
  lVar14 = uVar27 - uVar23;
  goto LAB_980110d8;
}


/* ==== FUN_98011324 @ 98011324 ==== */

void FUN_98011324(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ushort uVar6;
  int iVar5;
  uint uVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  int iVar11;
  undefined *puVar12;
  longlong lVar10;
  char cVar13;
  undefined4 *puVar15;
  undefined *puVar16;
  uint uVar17;
  char in_r11;
  ulonglong uVar14;
  int iVar18;
  ulonglong unaff_r14;
  int unaff_r16;
  undefined1 *unaff_r17;
  undefined4 unaff_00000090;
  uint unaff_r18;
  longlong lVar19;
  longlong unaff_r19;
  int unaff_r24;
  int unaff_r25;
  longlong unaff_r26;
  longlong lVar20;
  ulonglong unaff_r27;
  ulonglong uVar21;
  byte bVar24;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar25;
  ulonglong unaff_r31;
  int in_stack_00000050;
  uint uStack00000054;
  undefined1 uStack00000058;
  char cStack00000059;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  
  uVar3 = ZEXT48(&stack0x00000000);
  if ((unaff_r27 & 0x80) != 0) {
    cStack00000059 = in_r11 + 'Q';
    uStack00000058 = 0x30;
    in_stack_0000005c = 2;
  }
  if (((unaff_r27 & 0x8000) == 0) && ((unaff_r27 & 0x1000) == 0)) {
    if ((unaff_r27 & 0x20) == 0) {
      uVar14 = unaff_r26 + 7U & 0xfffffff8;
      lVar20 = uVar14 + 8;
      iVar5 = (int)uVar14;
      if ((unaff_r27 & 0x40) == 0) {
        uVar14 = (ulonglong)*(uint *)(iVar5 + 4);
      }
      else {
        uVar14 = (ulonglong)*(int *)(iVar5 + 4);
      }
    }
    else {
      uVar14 = unaff_r26 + 7U & 0xfffffff8;
      lVar20 = uVar14 + 8;
      uVar23 = *(uint *)((int)uVar14 + 4);
      if ((unaff_r27 & 0x40) == 0) {
        uVar14 = (ulonglong)uVar23 & 0xffff;
      }
      else {
        uVar14 = (ulonglong)(short)uVar23;
      }
    }
  }
  else {
    uVar14 = unaff_r26 + 7U & 0xfffffff8;
    lVar20 = uVar14 + 8;
    uVar14 = *(ulonglong *)uVar14;
  }
  if (((unaff_r27 & 0x40) != 0) && ((longlong)uVar14 < 0)) {
    uVar14 = -uVar14;
    unaff_r27 = unaff_r27 | 0x100;
  }
  if (((unaff_r27 & 0x8000) == 0) && ((unaff_r27 & 0x1000) == 0)) {
    uVar14 = uVar14 & 0xffffffff;
  }
  if (unaff_r25 < 0) {
    unaff_r25 = 1;
  }
  else {
    unaff_r27 = unaff_r27 & 0xfffffff7;
    if (0x200 < unaff_r25) {
      unaff_r25 = 0x200;
    }
  }
  if (uVar14 == 0) {
    in_stack_0000005c = 0;
  }
  uVar9 = uVar3 + 0x28f;
  while( true ) {
    bVar1 = unaff_r25 < 1;
    unaff_r25 = unaff_r25 + -1;
    if ((bVar1) && (uVar14 == 0)) break;
    trapDoubleWordImmediate(6,0x10,0);
    uVar7 = uVar14 % 0x10;
    uVar14 = uVar14 / 0x10;
    trapDoubleWordImmediate(6,0x10,0);
    lVar10 = uVar7 + 0x30;
    cVar13 = (char)lVar10;
    if (0x39 < (uint)lVar10) {
      cVar13 = cVar13 + in_r11;
    }
    *(char *)uVar9 = cVar13;
    uVar9 = uVar9 - 1;
  }
  uVar7 = unaff_r27 & 0x200;
  uVar14 = (uVar3 + 0x28f) - uVar9;
  uVar21 = uVar9 + 1;
  uStack00000054 = (uint)uVar14;
  if (uVar7 == 0) goto LAB_980114c8;
  if ((uStack00000054 != 0) && (*(char *)uVar21 == '0')) goto LAB_980114c8;
  uVar14 = uVar14 + 1;
  *(char *)uVar9 = '0';
  uVar21 = uVar9;
LAB_980114c4:
  uStack00000054 = (uint)uVar14;
LAB_980114c8:
  if (in_stack_00000064 != 0) goto LAB_98011684;
  if ((unaff_r27 & 0x40) == 0) {
LAB_98011518:
    uVar25 = (ulonglong)in_stack_0000005c;
  }
  else {
    if ((unaff_r27 & 0x100) == 0) {
      if ((unaff_r27 & 1) == 0) {
        if ((unaff_r27 & 2) == 0) goto LAB_98011518;
        uStack00000058 = 0x20;
      }
      else {
        uStack00000058 = 0x2b;
      }
    }
    else {
      uStack00000058 = 0x2d;
    }
    uVar25 = 1;
    in_stack_0000005c = 1;
  }
  uVar7 = unaff_r27 & 0xc;
  uVar22 = (ZEXT48(in_stack_00000060) - uVar14) - uVar25;
  iVar11 = (int)uVar22;
  uVar14 = uVar22;
  iVar5 = iVar11;
  if (uVar7 == 0) {
    while (unaff_r31 = uVar14, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar14 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  FUN_98010af8(uVar3 + 0x58,uVar25,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
  if (((unaff_r27 & 8) != 0) && (uVar14 = uVar22, iVar5 = iVar11, (unaff_r27 & 4) == 0)) {
    while (unaff_r31 = uVar14, 0 < iVar5) {
      unaff_r31 = unaff_r31 - 1;
      FUN_98010a60(0x30,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      if (in_stack_00000050 == -1) break;
      uVar14 = unaff_r31;
      iVar5 = (int)unaff_r31;
    }
  }
  if ((unaff_r16 == 0) || ((int)uStack00000054 < 1)) {
    param_1 = FUN_98010af8(uVar21,(ulonglong)uStack00000054,CONCAT44(unaff_00000090,unaff_r18),
                           &stack0x00000050);
  }
  else {
    lVar10 = uVar21 - 2;
    unaff_r31 = (ulonglong)uStack00000054;
    do {
      lVar10 = lVar10 + 2;
      unaff_r31 = unaff_r31 - 1;
      iVar5 = FUN_98014010(&stack0x00000070,(uint *)&stack0x00000074,6,*(ushort *)lVar10);
      param_1 = (longlong)iVar5;
      if ((iVar5 != 0) || (in_stack_00000070 == 0)) {
        in_stack_00000050 = -1;
        break;
      }
      param_1 = FUN_98010af8(uVar3 + 0x74,(ulonglong)in_stack_00000070,
                             CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
    } while ((int)unaff_r31 != 0);
  }
  unaff_r24 = in_stack_00000050;
  if ((-1 < in_stack_00000050) && ((unaff_r27 & 4) != 0)) {
    while (unaff_r31 = uVar22, in_stack_00000050 = unaff_r24, 0 < iVar11) {
      unaff_r31 = unaff_r31 - 1;
      param_1 = FUN_98010a60(0x20,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
      unaff_r24 = in_stack_00000050;
      if (in_stack_00000050 == -1) break;
      uVar22 = unaff_r31;
      iVar11 = (int)unaff_r31;
    }
  }
LAB_98011684:
  if ((unaff_r14 & 0xffffffff) != 0) {
    param_1 = FUN_9800dd90(unaff_r14);
    unaff_r14 = 0;
  }
LAB_98011698:
  bVar24 = *(byte *)((int)unaff_r19 + 1);
  uVar23 = (uint)bVar24;
  lVar10 = (longlong)(char)bVar24;
  if (lVar10 == 0) {
LAB_980116f0:
    FUN_9800dc90();
    return;
  }
  uVar14 = (ulonglong)uStack00000054;
  lVar19 = unaff_r19;
  uVar8 = in_stack_0000006c;
LAB_98010d34:
  puVar16 = (undefined *)lVar10;
  iVar11 = (int)uVar7;
  iVar5 = (int)uVar9;
  bVar24 = (byte)uVar23;
  puVar4 = (undefined4 *)param_1;
  unaff_r19 = lVar19 + 1;
  if (-1 < unaff_r24) {
    if (((int)puVar16 < 0x20) || (0x78 < (int)puVar16)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (byte)(puVar16 + (int)unaff_r17)[-0x20] & 0xf;
    }
    in_stack_0000006c = (int)(char)unaff_r17[uVar17 * 8 + uVar8] >> 4;
    if (in_stack_0000006c < 8) {
      if (in_stack_0000006c == 0) {
LAB_98010f7c:
        unaff_r16 = 0;
        uVar6 = FUN_98014018(uVar23);
        if (uVar6 != 0) {
          FUN_98010a60(bVar24,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
          unaff_r19 = lVar19 + 2;
          bVar24 = *(byte *)unaff_r19;
          if (bVar24 != 0) goto LAB_98010fb0;
          goto LAB_98010c08;
        }
LAB_98010fb0:
        param_1 = FUN_98010a60(bVar24,CONCAT44(unaff_00000090,unaff_r18),&stack0x00000050);
        unaff_r24 = in_stack_00000050;
      }
      else if (in_stack_0000006c == 1) {
        unaff_r27 = 0;
        in_stack_00000064 = 0;
        in_stack_00000060 = (undefined *)0x0;
        unaff_r16 = 0;
        in_stack_0000005c = 0;
      }
      else {
        iVar18 = in_stack_0000006c - 2;
        if (iVar18 != 0) {
switchD_98010ff8_caseD_2d:
          if (iVar18 == 1) {
            if (puVar16 == (undefined *)0x2a) {
              uVar14 = lVar20 + 7U & 0xfffffff8;
              lVar20 = uVar14 + 8;
              in_stack_00000060 = *(undefined **)((int)uVar14 + 4);
              if ((int)in_stack_00000060 < 0) {
                unaff_r27 = unaff_r27 | 4;
                in_stack_00000060 = (undefined *)-(int)in_stack_00000060;
              }
            }
            else {
              in_stack_00000060 = puVar16 + (int)in_stack_00000060 * 10 + -0x30;
            }
          }
          else if (iVar18 != 2) {
            if (iVar18 == 3) {
              if (puVar16 == (undefined *)0x2a) {
                lVar20 = (lVar20 + 7U & 0xfffffff8) + 8;
              }
            }
            else {
              iVar2 = (int)lVar19;
              if (iVar18 != 4) {
                uVar25 = lVar10 - 0x41;
                puVar15 = (undefined4 *)uVar25;
                bVar1 = (uVar25 & 0xffffffff) == 0x37;
                if ((uVar25 & 0xffffffff) < 0x38) goto code_r0x98010fd4;
                goto LAB_980114c8;
              }
              if (puVar16 == (undefined *)0x49) {
                puVar15 = (undefined4 *)(int)*(char *)(iVar2 + 2);
                bVar1 = *(char *)(iVar2 + 2) == '6';
                goto switchD_98010ff8_caseD_23;
              }
              if (((puVar16 != (undefined *)0x68) && (puVar16 == (undefined *)0x6c)) &&
                 (*(char *)(iVar2 + 2) == 'l')) {
                unaff_r19 = lVar19 + 2;
              }
            }
          }
          goto LAB_98011698;
        }
        if (puVar16 == (undefined *)0x20) {
          unaff_r27 = unaff_r27 | 2;
        }
        else {
switchD_98010ff8_caseD_0:
          if (puVar16 != (undefined *)0x23) {
            bVar1 = puVar16 == (undefined *)0x2b;
switchD_98010ff8_caseD_20:
            if (bVar1) {
              unaff_r27 = unaff_r27 | 1;
            }
            else if (puVar16 == (undefined *)0x2d) {
              unaff_r27 = unaff_r27 | 4;
            }
            else if (puVar16 == (undefined *)0x30) {
              unaff_r27 = unaff_r27 | 8;
            }
          }
        }
      }
    }
    goto LAB_98011698;
  }
  goto LAB_980116f0;
code_r0x98010fd4:
  iVar18 = *(ushort *)
            ((int)&switchD_98010ff8::switchdataD_98002b08 + (int)((uVar25 & 0xffffffff) << 1)) +
           0x98010bfc;
  switch(puVar15) {
  case (undefined4 *)0x0:
  case (undefined4 *)0x4:
  case (undefined4 *)0x6:
    goto switchD_98010ff8_caseD_0;
  default:
    goto switchD_98010ff8_caseD_1;
  case (undefined4 *)0x2:
    goto switchD_98010ff8_caseD_2;
  case (undefined4 *)0x12:
    goto switchD_98010ff8_caseD_12;
  case (undefined4 *)0x17:
    goto switchD_98010ff8_caseD_17;
  case (undefined4 *)0x19:
    goto switchD_98010ff8_caseD_19;
  case (undefined4 *)0x20:
  case (undefined4 *)0x24:
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    goto switchD_98010ff8_caseD_20;
  case (undefined4 *)0x22:
    goto switchD_98010ff8_caseD_22;
  case (undefined4 *)0x23:
  case (undefined4 *)0x28:
switchD_98010ff8_caseD_23:
    if (bVar1) goto switchD_98010ff8_caseD_34;
    break;
  case (undefined4 *)0x2d:
    goto switchD_98010ff8_caseD_2d;
  case (undefined4 *)0x2e:
    goto switchD_98010ff8_caseD_2e;
  case (undefined4 *)0x32:
    goto switchD_98010ff8_caseD_32;
  case (undefined4 *)0x34:
switchD_98010ff8_caseD_34:
    uVar7 = (ulonglong)*(byte *)(iVar2 + 3);
    bVar1 = uVar7 == 0x34;
  case (undefined4 *)0x2f:
    if (bVar1) {
switchD_98010ff8_caseD_17:
      unaff_r19 = lVar19 + 3;
switchD_98010ff8_caseD_37:
      goto LAB_98011698;
    }
    break;
  case (undefined4 *)0x37:
    goto switchD_98010ff8_caseD_37;
  }
  if ((puVar15 == (undefined4 *)0x33) && (uVar7 = (ulonglong)*(byte *)(iVar2 + 3), uVar7 == 0x32)) {
    unaff_r19 = lVar19 + 3;
    unaff_r27 = unaff_r27 & 0xffff7fff;
    goto LAB_98011698;
  }
  if (puVar15 == (undefined4 *)0x64) goto LAB_98011698;
  bVar1 = puVar15 == (undefined4 *)0x69;
switchD_98010ff8_caseD_2e:
  if ((((bVar1) || (puVar15 == (undefined4 *)0x6f)) || (puVar15 == (undefined4 *)0x75)) ||
     ((puVar15 == (undefined4 *)0x78 || (puVar15 == (undefined4 *)0x58)))) goto LAB_98011698;
  in_stack_0000006c = 0;
  goto LAB_98010f7c;
switchD_98010ff8_caseD_2:
  unaff_r16 = 0;
  if (bVar1) goto LAB_98010c08;
  if ((*(uint *)(unaff_r18 + 0xc) & 0x40) == 0) {
    uVar14 = FUN_980130f0(unaff_r18);
    puVar4 = (undefined4 *)uVar14;
    puVar15 = &DAT_9801cc80;
    puVar16 = &DAT_9801b9f8;
    puVar12 = &DAT_9801b9f8;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      iVar11 = ((uint)puVar4 & 0x1f) * 0x48;
      iVar5 = (&DAT_9801cc80)[(int)puVar4 >> 5];
      puVar15 = &DAT_9801cc80;
      puVar16 = &DAT_9801b9f8;
switchD_98010ff8_caseD_19:
      puVar12 = (undefined *)(iVar5 + iVar11);
    }
    if ((puVar12[0x28] & 0xfe) != 0) goto LAB_98010c08;
    if ((puVar4 != (undefined4 *)0xffffffff) && (puVar4 != (undefined4 *)0xfffffffe)) {
      puVar16 = (undefined *)(puVar15[(int)puVar4 >> 5] + ((uint)puVar4 & 0x1f) * 0x48);
    }
    if ((puVar16[0x28] & 1) != 0) goto LAB_98010c08;
  }
  if ((unaff_r31 & 0xffffffff) != 0) {
    lVar10 = FUN_980127f8();
    if (((ulonglong)unaff_r18 == (lVar10 + 0x20U & 0xffffffff)) ||
       (param_1 = FUN_980127f8(), (ulonglong)unaff_r18 == (param_1 + 0x40U & 0xffffffff))) {
      FUN_9800e040(uVar3 + 0x290,0x200,unaff_r31,lVar20);
      FUN_9801a158();
      goto LAB_980116f0;
    }
switchD_98010ff8_caseD_12:
    uVar23 = (uint)*(byte *)unaff_r31;
    unaff_r24 = 0;
    uVar14 = 0;
    in_stack_00000050 = 0;
switchD_98010ff8_caseD_32:
    lVar10 = (longlong)(char)uVar23;
    uStack00000054 = 0;
    uVar8 = 0;
    unaff_r14 = 0;
    if (lVar10 == 0) goto LAB_980116f0;
    uVar7 = 0xffffffff98020000;
    uVar21 = (ulonglong)in_stack_00000070;
    uVar9 = 0xffffffff98000000;
    lVar19 = unaff_r31 - 1;
    unaff_r17 = &DAT_98002aa8;
    goto LAB_98010d34;
  }
LAB_98010c08:
  lVar20 = FUN_9800f950();
  puVar4 = (undefined4 *)lVar20;
switchD_98010ff8_caseD_22:
  *puVar4 = 0x16;
  FUN_9800d548();
  goto LAB_980116f0;
switchD_98010ff8_caseD_1:
  while (uVar25 = uVar25 + 1, (uVar9 & 0xffffffff) != 0) {
    uVar9 = (ulonglong)*(byte *)uVar25;
  }
  uVar14 = (uVar25 - uVar7) - 1 & 0xffffffff;
  goto LAB_980114c4;
}


/* ==== FUN_980116f8 @ 980116f8 ==== */

longlong FUN_980116f8(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    lVar1 = -1;
  }
  else {
    iVar2 = FUN_98019fa0();
    lVar1 = FUN_98017d48(iVar2,0,param_1);
  }
  return lVar1;
}


/* ==== FUN_98011750 @ 98011750 ==== */

/* WARNING: Removing unreachable block (ram,0x98011784) */
/* WARNING: Removing unreachable block (ram,0x98011790) */

uint * FUN_98011750(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_98014038(param_1,param_2,ZEXT48(&stack0x00000000) - 0x20);
  return puVar1;
}


/* ==== FUN_980117b8 @ 980117b8 ==== */

ushort FUN_980117b8(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam9801bd78) & 4;
}


/* ==== FUN_980117e0 @ 980117e0 ==== */

void FUN_980117e0(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_98011ba0(0xe);
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = ZEXT48(piRam9801c978);
    uVar1 = 0xffffffff9801c974;
    do {
      uVar3 = uVar1;
      if (piRam9801c978 == (int *)0x0) goto LAB_98011854;
      uVar1 = uVar2;
    } while (*piRam9801c978 != *(int *)(param_1 + 4));
    *(int *)((int)uVar3 + 4) = piRam9801c978[1];
    FUN_9800dd90(uVar2);
LAB_98011854:
    FUN_9800dd90((ulonglong)*(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_98011888();
  return;
}


/* ==== FUN_98011888 @ 98011888 ==== */

void FUN_98011888(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_980118b0 @ 980118b0 ==== */

void FUN_980118b0(void)

{
  uint *puVar1;
  
  puVar1 = &DAT_9801b530;
  do {
    if (((ulonglong)*puVar1 != 0) && (puVar1[1] != 1)) {
      FUN_9800dd90((ulonglong)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < -0x67fe49b0);
  return;
}


/* ==== FUN_98011920 @ 98011920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011940 @ 98011940 ==== */

void FUN_98011940(void)

{
  func_0x9801ace0();
  return;
}


/* ==== FUN_98011994 @ 98011994 ==== */

void FUN_98011994(void)

{
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x50) = 0;
  return;
}


/* ==== FUN_980119d8 @ 980119d8 ==== */

undefined8 FUN_980119d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_9800dc78();
  piVar4 = &DAT_9801b530;
  iVar2 = -0x67fe3680;
  iVar3 = 0;
  do {
    if (piVar4[1] == 1) {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 0x1c;
      iVar1 = FUN_98011940();
      if (iVar1 == 0) {
        (&DAT_9801b530)[iVar3 * 2] = 0;
        return 0;
      }
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < -0x67fe49b0);
  return 1;
}


/* ==== FUN_98011a60 @ 98011a60 ==== */

undefined4 FUN_98011a60(void)

{
  int iVar3;
  int iVar4;
  ulonglong uVar1;
  longlong lVar2;
  undefined4 local_30;
  uint *puVar5;
  
  iVar3 = FUN_9800dc78();
  local_30 = 1;
  iVar4 = FUN_98019fa0();
  if (iVar4 == 0) {
    FUN_9800faa8();
    FUN_9800fa78(0x1e);
    FUN_9800f408();
  }
  if ((&DAT_9801b530)[iVar3 * 2] == 0) {
    puVar5 = FUN_9800ddf0();
    uVar1 = (ulonglong)(int)puVar5;
    if (uVar1 == 0) {
      lVar2 = FUN_9800f950();
      local_30 = 0;
      *(undefined4 *)lVar2 = 0xc;
    }
    else {
      FUN_98011ba0(10);
      if ((&DAT_9801b530)[iVar3 * 2] == 0) {
        iVar4 = FUN_98011940();
        if (iVar4 == 0) {
          FUN_9800dd90(uVar1);
          lVar2 = FUN_9800f950();
          *(undefined4 *)lVar2 = 0xc;
          local_30 = 0;
        }
        else {
          (&DAT_9801b530)[iVar3 * 2] = puVar5;
        }
      }
      else {
        FUN_9800dd90(uVar1);
      }
      FUN_98011b70();
    }
  }
  else {
    local_30 = 1;
  }
  return local_30;
}


/* ==== FUN_98011b70 @ 98011b70 ==== */

void FUN_98011b70(void)

{
  int unaff_r30;
  
  func_0x9801acd0(*(undefined4 *)(unaff_r30 + 0x50));
  return;
}


/* ==== FUN_98011ba0 @ 98011ba0 ==== */

void FUN_98011ba0(int param_1)

{
  int iVar1;
  
  if (((&DAT_9801b530)[param_1 * 2] == 0) && (iVar1 = FUN_98011a60(), iVar1 == 0)) {
    FUN_9800f698(0x11);
  }
  func_0x9801acf0((&DAT_9801b530)[param_1 * 2]);
  return;
}


/* ==== FUN_98011c08 @ 98011c08 ==== */

void FUN_98011c08(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_30;
  undefined4 local_2c;
  int local_28 [10];
  
  FUN_9800dc7c();
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  FUN_98011ba0(7);
  FUN_980127e8();
  uVar3 = FUN_98012768(&local_30);
  if ((int)uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_9800d620();
  }
  uVar3 = FUN_980126c8(&local_2c);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_98012718(local_28);
    if ((int)uVar3 == 0) {
      FUN_98014100();
      DAT_9801cbb4 = 0;
      DAT_9801b65c = 0xffffffff;
      DAT_9801b650 = 0xffffffff;
      if ((ulonglong)DAT_9801cbb8 != 0) {
        FUN_9800dd90((ulonglong)DAT_9801cbb8);
        DAT_9801cbb8 = 0;
      }
      uVar3 = FUN_9801a288(-0x67fe34f8);
      if ((int)uVar3 != -1) {
        local_30 = DAT_9801cb08 * 0x3c;
        DAT_9801cbb4 = 1;
        if (DAT_9801cb4e != 0) {
          local_30 = DAT_9801cb5c * 0x3c + local_30;
        }
        if ((DAT_9801cba2 == 0) || (DAT_9801cbb0 == 0)) {
          local_2c = 0;
          local_28[0] = 0;
        }
        else {
          local_28[0] = (DAT_9801cbb0 - DAT_9801cb5c) * 0x3c;
          local_2c = 1;
        }
      }
      iVar1 = local_30;
      uVar3 = FUN_980127d8();
      uVar2 = local_2c;
      *(int *)uVar3 = iVar1;
      uVar3 = FUN_980127b8();
      iVar1 = local_28[0];
      *(undefined4 *)uVar3 = uVar2;
      uVar3 = FUN_980127c8();
      *(int *)uVar3 = iVar1;
      FUN_98011dac();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_9800d620();
  }
                    /* WARNING: Subroutine does not return */
  FUN_9800d620();
}


/* ==== FUN_98011dac @ 98011dac ==== */

void FUN_98011dac(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_98011dd0 @ 98011dd0 ==== */

/* WARNING: Removing unreachable block (ram,0x98011fe8) */

void FUN_98011dd0(undefined8 param_1,int param_2,ulonglong param_3,ulonglong param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int local_40 [16];
  
  iVar2 = FUN_9800dc70();
  local_40[0] = 0;
  iVar9 = (int)param_3;
  if (param_2 == 1) {
    lVar8 = param_3 + ((longlong)(iVar9 >> 2) + (ulonglong)(iVar9 < 0 && (param_3 & 3) != 0) &
                      0x3fffffff) * -4;
    iVar4 = (int)param_4;
    if (((lVar8 == 0) && (param_3 != (longlong)(iVar9 / 100) * 100)) ||
       (param_3 + 0x76c == (longlong)((int)(param_3 + 0x76c) / 400) * 400)) {
      puVar5 = &DAT_9801b700 + iVar4;
    }
    else {
      puVar5 = (undefined4 *)(&DAT_9801b734 + iVar4 * 4);
    }
    uVar6 = iVar9 - 1;
    iVar3 = (int)(((iVar9 + 299) / 400 - (int)uVar6 / 100) +
                  ((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0) + iVar9 * 0x16d +
                  puVar5[-1] + 1 + -0x63db) % 7;
    iVar7 = (param_5 * 7 - iVar3) + puVar5[-1] + 1 + param_6;
    if (iVar3 <= param_6) {
      iVar7 = iVar7 + -7;
    }
    if (param_5 == 5) {
      if ((((int)lVar8 == 0) && (param_3 != (longlong)(iVar9 / 100) * 100)) ||
         (param_3 + 0x76c == (longlong)((int)(param_3 + 0x76c) / 400) * 400)) {
        iVar4 = (&DAT_9801b700)[iVar4];
      }
      else {
        iVar4 = *(int *)(&DAT_9801b734 + iVar4 * 4);
      }
      if (iVar4 < iVar7) {
        iVar7 = iVar7 + -7;
      }
    }
  }
  else {
    if (((param_3 ==
          ((longlong)(iVar9 >> 2) + (ulonglong)(iVar9 < 0 && (param_3 & 3) != 0) & 0x3fffffff) << 2)
        && (param_3 != (longlong)(iVar9 / 100) * 100)) ||
       (param_3 + 0x76c == (longlong)((int)(param_3 + 0x76c) / 400) * 400)) {
      puVar5 = &DAT_9801b700;
    }
    else {
      puVar5 = (undefined4 *)&DAT_9801b734;
    }
    iVar7 = *(int *)((int)puVar5 + (int)((param_4 & 0xffffffff) << 2) + -4) + param_7;
  }
  iVar3 = ((param_8 * 0x3c + in_stack_00000054) * 0x3c + in_stack_0000005c) * 1000 +
          in_stack_00000064;
  iVar4 = iVar9;
  if (iVar2 != 1) {
    DAT_9801b660 = iVar7;
    DAT_9801b664 = iVar3;
    uVar1 = FUN_98012718(local_40);
    if ((int)uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_9800d620();
    }
    DAT_9801b664 = local_40[0] * 1000 + DAT_9801b664;
    iVar4 = DAT_9801b650;
    iVar7 = DAT_9801b654;
    iVar3 = DAT_9801b658;
    DAT_9801b65c = iVar9;
    if (86399999 < DAT_9801b664) {
      DAT_9801b660 = DAT_9801b660 + 1;
      DAT_9801b664 = DAT_9801b664 + -86400000;
    }
  }
  DAT_9801b658 = iVar3;
  DAT_9801b654 = iVar7;
  DAT_9801b650 = iVar4;
  return;
}


/* ==== FUN_98012048 @ 98012048 ==== */

ulonglong FUN_98012048(void)

{
  uint uVar1;
  uint *puVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int local_40 [16];
  
  puVar3 = (uint *)FUN_9800dc74();
  local_40[0] = 0;
  uVar2 = FUN_980126c8(local_40);
  if ((int)uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_9800d620();
  }
  if (local_40[0] != 0) {
    uVar1 = puVar3[5];
    uVar4 = (ulonglong)uVar1;
    if ((uVar1 != DAT_9801b650) || (uVar1 != DAT_9801b65c)) {
      if (DAT_9801cbb4 == 0) {
        uVar5 = 3;
        iVar6 = 2;
        uVar8 = 0xb;
        iVar7 = 1;
        if ((int)uVar1 < 0x6b) {
          uVar5 = 4;
          iVar6 = 1;
          uVar8 = 10;
          iVar7 = 5;
        }
        FUN_98011dd0(1,1,uVar4,uVar5,iVar6,0,0,2);
        FUN_98011dd0(0,1,(ulonglong)puVar3[5],uVar8,iVar7,0,0,2);
      }
      else {
        if (DAT_9801cba0 == 0) {
          FUN_98011dd0(1,1,uVar4,(ulonglong)DAT_9801cba2,(uint)DAT_9801cba6,(uint)DAT_9801cba4,0,
                       (uint)DAT_9801cba8);
        }
        else {
          FUN_98011dd0(1,0,uVar4,(ulonglong)DAT_9801cba2,0,0,(uint)DAT_9801cba6,(uint)DAT_9801cba8);
        }
        if (DAT_9801cb4c == 0) {
          FUN_98011dd0(0,1,(ulonglong)puVar3[5],(ulonglong)DAT_9801cb4e,(uint)DAT_9801cb52,
                       (uint)DAT_9801cb50,0,(uint)DAT_9801cb54);
        }
        else {
          FUN_98011dd0(0,0,(ulonglong)puVar3[5],(ulonglong)DAT_9801cb4e,0,0,(uint)DAT_9801cb52,
                       (uint)DAT_9801cb54);
        }
      }
    }
    uVar1 = puVar3[7];
    if ((int)DAT_9801b654 < DAT_9801b660) {
      if (((int)DAT_9801b654 <= (int)uVar1) && ((int)uVar1 <= DAT_9801b660)) {
        if (((int)DAT_9801b654 < (int)uVar1) && ((int)uVar1 < DAT_9801b660)) {
          return 1;
        }
LAB_980122b0:
        uVar4 = (((ulonglong)puVar3[2] * 0x3c + (ulonglong)puVar3[1]) * 0x3c + (ulonglong)*puVar3) *
                1000;
        if (uVar1 != DAT_9801b654) {
          return ((~(DAT_9801b664 ^ uVar4) & 0xffffffff) >> 0x1f) +
                 (ulonglong)(DAT_9801b664 <= uVar4) & 1;
        }
        return (ulonglong)(DAT_9801b658 >> 0x1f) + (longlong)((int)uVar4 >> 0x1f) +
               (ulonglong)(DAT_9801b658 <= uVar4);
      }
    }
    else {
      if ((int)uVar1 < DAT_9801b660) {
        return 1;
      }
      if ((int)DAT_9801b654 < (int)uVar1) {
        return 1;
      }
      if (((int)uVar1 <= DAT_9801b660) || ((int)DAT_9801b654 <= (int)uVar1)) goto LAB_980122b0;
    }
  }
  return 0;
}


/* ==== FUN_98012330 @ 98012330 ==== */

void FUN_98012330(void)

{
  if (DAT_9801cbbc == 0) {
    FUN_98011ba0(6);
    if (DAT_9801cbbc == 0) {
      FUN_98011c08();
      DAT_9801cbbc = DAT_9801cbbc + 1;
    }
    FUN_980123a4();
  }
  return;
}


/* ==== FUN_980123a4 @ 980123a4 ==== */

void FUN_980123a4(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_980123d0 @ 980123d0 ==== */

ulonglong FUN_980123d0(void)

{
  ulonglong uVar1;
  
  FUN_98011ba0(6);
  uVar1 = FUN_98012048();
  FUN_9801242c();
  return uVar1 & 0xffffffff;
}


/* ==== FUN_9801242c @ 9801242c ==== */

void FUN_9801242c(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_98012450 @ 98012450 ==== */

undefined8 FUN_98012450(undefined8 param_1,ulonglong param_2)

{
  bool bVar1;
  uint *puVar3;
  longlong lVar2;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  
  puVar3 = (uint *)FUN_9800dc78();
  bVar1 = false;
  if ((puVar3 == (uint *)0x0) || (FUN_9800dcf0(puVar3,0xff,0x24), (param_2 & 0xffffffff) == 0)) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0x16;
    FUN_9800d548();
    return 0x16;
  }
  lVar2 = *(longlong *)param_2;
  if ((lVar2 < -0xa8c0) || (0x7934126cf < lVar2)) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0x16;
    return 0x16;
  }
  iVar13 = (int)(lVar2 / 0x1e13380);
  lVar11 = (longlong)iVar13;
  uVar12 = lVar11 + 0x46;
  uVar7 = lVar11 + 0x45;
  iVar8 = (int)uVar7;
  lVar2 = lVar2 + ((longlong)
                   (int)(((iVar13 + 0x171) / 400 - iVar8 / 100) +
                         (iVar8 >> 2) + (uint)(iVar8 < 0 && (uVar7 & 3) != 0) + -0x11) +
                  (longlong)iVar13 * 0x16d) * -0x15180;
  if (lVar2 < 0) {
    uVar12 = uVar7;
    if (((uVar7 != ((longlong)(iVar8 >> 2) + (ulonglong)(iVar8 < 0 && (uVar7 & 3) != 0) & 0x3fffffff
                   ) << 2) || (uVar7 == (longlong)(iVar8 / 100) * 100)) &&
       (lVar4 = lVar2 + 0x1e13380, lVar11 + 0x7b1 != (longlong)((int)(lVar11 + 0x7b1) / 400) * 400))
    goto LAB_980125d4;
    lVar2 = lVar2 + 0x1e28500;
  }
  else {
    iVar8 = (int)uVar12;
    if (((uVar12 != ((longlong)(iVar8 >> 2) + (ulonglong)(iVar8 < 0 && (uVar12 & 3) != 0) &
                    0x3fffffff) << 2) || (uVar12 == (longlong)(iVar8 / 100) * 100)) &&
       (lVar4 = lVar2, lVar11 + 0x7b2 != (longlong)((int)(lVar11 + 0x7b2) / 400) * 400))
    goto LAB_980125d4;
  }
  bVar1 = true;
  lVar4 = lVar2;
LAB_980125d4:
  puVar3[5] = (uint)uVar12;
  uVar5 = (uint)(lVar4 / 0x15180);
  puVar3[7] = uVar5;
  lVar4 = lVar4 + (longlong)(int)uVar5 * -0x15180;
  if (bVar1) {
    puVar6 = &DAT_9801b700;
  }
  else {
    puVar6 = (undefined4 *)&DAT_9801b734;
  }
  piVar9 = puVar6 + 1;
  iVar13 = 1;
  iVar8 = puVar6[1];
  while (iVar8 < (int)puVar3[7]) {
    piVar9 = piVar9 + 1;
    iVar13 = iVar13 + 1;
    iVar8 = *piVar9;
  }
  puVar3[4] = iVar13 - 1U;
  uVar10 = (uint)(lVar4 / 0xe10);
  lVar4 = lVar4 + (longlong)(int)uVar10 * -0xe10;
  uVar5 = (uint)(lVar4 / 0x3c);
  puVar3[3] = puVar3[7] - puVar6[iVar13 - 1U];
  lVar2 = *(longlong *)param_2;
  puVar3[2] = uVar10;
  puVar3[1] = uVar5;
  *puVar3 = (int)lVar4 + uVar5 * -0x3c;
  puVar3[8] = 0;
  puVar3[6] = ((int)(lVar2 / 0x15180) + 4) % 7;
  return 0;
}


/* ==== FUN_980126c8 @ 980126c8 ==== */

undefined8 FUN_980126c8(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_9801b66c;
  }
  return uVar2;
}


/* ==== FUN_98012718 @ 98012718 ==== */

undefined8 FUN_98012718(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_9801b670;
  }
  return uVar2;
}


/* ==== FUN_98012768 @ 98012768 ==== */

undefined8 FUN_98012768(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_9801b668;
  }
  return uVar2;
}


/* ==== FUN_980127b8 @ 980127b8 ==== */

undefined8 FUN_980127b8(void)

{
  return 0xffffffff9801b66c;
}


/* ==== FUN_980127c8 @ 980127c8 ==== */

undefined8 FUN_980127c8(void)

{
  return 0xffffffff9801b670;
}


/* ==== FUN_980127d8 @ 980127d8 ==== */

undefined8 FUN_980127d8(void)

{
  return 0xffffffff9801b668;
}


/* ==== FUN_980127e8 @ 980127e8 ==== */

undefined8 FUN_980127e8(void)

{
  return 0xffffffff9801b6f8;
}


/* ==== FUN_980127f8 @ 980127f8 ==== */

undefined8 FUN_980127f8(void)

{
  return 0xffffffff9801b768;
}


/* ==== FUN_98012834 @ 98012834 ==== */

undefined8 FUN_98012834(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_r31;
  longlong lVar5;
  
  if ((int)param_1 < 0x14) {
    param_1 = 0x14;
    *(undefined4 *)(unaff_r31 + -0x327c) = 0x14;
  }
  puRam9801cd80 = FUN_98011750(param_1,4);
  if (puRam9801cd80 == (uint *)0x0) {
    *(undefined4 *)(unaff_r31 + -0x327c) = 0x14;
    puRam9801cd80 = FUN_98011750(0x14,4);
    if (puRam9801cd80 == (uint *)0x0) {
      return 0x1a;
    }
  }
  puVar1 = &DAT_9801b768;
  iVar3 = 0;
  lVar5 = 0x14;
  do {
    *(undefined **)(iVar3 + (int)puRam9801cd80) = puVar1;
    puVar1 = puVar1 + 0x20;
    iVar3 = iVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = &DAT_9801b778;
  uVar4 = 0;
  lVar5 = 3;
  do {
    iVar3 = *(int *)((&DAT_9801cc80)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48);
    if (((iVar3 == -1) || (iVar3 == -2)) || (iVar3 == 0)) {
      *puVar2 = 0xfffffffe;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}


/* ==== FUN_98012954 @ 98012954 ==== */

void FUN_98012954(void)

{
  FUN_9800dd90((ulonglong)uRam9801cd80);
  return;
}


/* ==== FUN_98012970 @ 98012970 ==== */

void FUN_98012970(undefined *param_1)

{
  if ((param_1 < &DAT_9801b768) || (&DAT_9801b9c8 < param_1)) {
    func_0x9801acf0((longlong)(int)param_1 + 0x20);
  }
  else {
    FUN_98011ba0(((int)(param_1 + 0x67fe4898) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
  }
  return;
}


/* ==== FUN_980129e0 @ 980129e0 ==== */

void FUN_980129e0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_98011ba0(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
  }
  else {
    func_0x9801acf0(param_2 + 0x20);
  }
  return;
}


/* ==== FUN_98012a30 @ 98012a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012a30(uint param_1)

{
  if ((0x9801b767 < param_1) && (param_1 < 0x9801b9c9)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_98011920();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012a70 @ 98012a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012a70(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012ac8 @ 98012ac8 ==== */

undefined8 FUN_98012ac8(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  if (((((int)param_1 < 0) || (DAT_9801cc6c <= param_1)) ||
      (piVar3 = (int *)((&DAT_9801cc80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48),
      (*(byte *)(piVar3 + 1) & 1) == 0)) || (*piVar3 == -1)) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 9;
    lVar2 = FUN_9800f988();
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


/* ==== FUN_98012b60 @ 98012b60 ==== */

ulonglong FUN_98012b60(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  if (param_1 == 0xfffffffe) {
    lVar1 = FUN_9800f988();
    *(undefined4 *)lVar1 = 0;
    lVar1 = FUN_9800f950();
    uVar2 = 0xffffffffffffffff;
    *(undefined4 *)lVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (DAT_9801cc6c <= param_1)) ||
          (puVar3 = (uint *)((&DAT_9801cc80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48),
          (puVar3[1] & 0x1000000) == 0)) {
    lVar1 = FUN_9800f988();
    *(undefined4 *)lVar1 = 0;
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 9;
    FUN_9800d548();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (ulonglong)*puVar3;
  }
  return uVar2;
}


/* ==== FUN_98012c20 @ 98012c20 ==== */

undefined8 FUN_98012c20(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack00000014;
  
  uVar1 = FUN_9800dc7c();
  uStack00000014 = (uint)uVar1;
  puVar3 = &DAT_9801cc80;
  iVar2 = (&DAT_9801cc80)[(int)uStack00000014 >> 5] + (uStack00000014 & 0x1f) * 0x48;
  if (*(int *)(iVar2 + 8) == 0) {
    FUN_98011ba0(10);
    puVar3 = *(undefined4 **)(iVar2 + 8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_98011940();
      puVar3 = (undefined4 *)(*(int *)(iVar2 + 8) + 1);
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    iVar2 = FUN_98012ce8();
    uVar1 = (ulonglong)iVar2;
  }
  func_0x9801acf0((ulonglong)(uint)puVar3[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x48 + 0xc);
  return 1;
}


/* ==== FUN_98012ce8 @ 98012ce8 ==== */

undefined4 FUN_98012ce8(void)

{
  int unaff_r31;
  
  FUN_98011920();
  return *(undefined4 *)(unaff_r31 + 0x94);
}


/* ==== FUN_98012d20 @ 98012d20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012d20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012d48 @ 98012d48 ==== */

undefined8 FUN_98012d48(void)

{
  uint *puVar2;
  undefined8 uVar1;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  puVar2 = FUN_98011750(0x20,0x48);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    iVar3 = 0;
    DAT_9801cc6c = 0x20;
    DAT_9801cc80 = puVar2;
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
      } while (puVar2 < DAT_9801cc80 + 0x240);
    }
    lVar6 = 3;
    do {
      puVar5 = (undefined4 *)(iVar3 + (int)DAT_9801cc80);
      iVar3 = iVar3 + 0x48;
      *(undefined1 *)(puVar5 + 1) = 0xc1;
      *puVar5 = 0xfffffffe;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_98012e40 @ 98012e40 ==== */

void FUN_98012e40(void)

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
      FUN_9800dd90(uVar1);
      *unaff_r31 = 0;
    }
    unaff_r31 = unaff_r31 + 1;
  } while ((int)unaff_r31 < unaff_r30 + 0x100);
  return;
}


/* ==== FUN_98012ea8 @ 98012ea8 ==== */

undefined8 FUN_98012ea8(void)

{
  uint uVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar6;
  uint uVar5;
  undefined8 uVar3;
  
  uVar4 = FUN_9800dc7c();
  uVar1 = FUN_98012b60(uVar4);
  if ((int)uVar1 != -1) {
    if (((uVar4 == 1) && ((*(byte *)(DAT_9801cc80 + 0x94) & 1) != 0)) ||
       ((uVar4 == 2 && ((*(byte *)(DAT_9801cc80 + 0x4c) & 1) != 0)))) {
      uVar1 = FUN_98012b60(2);
      uVar2 = FUN_98012b60(1);
      if ((int)uVar2 == (int)uVar1) goto LAB_98012f34;
    }
    FUN_98012b60(uVar4);
    bVar6 = FUN_98008538();
    if (!bVar6) {
      uVar5 = thunk_FUN_98008b10();
      goto LAB_98012f38;
    }
  }
LAB_98012f34:
  uVar5 = 0;
LAB_98012f38:
  FUN_98012ac8(uVar4);
  *(undefined1 *)((&DAT_9801cc80)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48 + 4) = 0;
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_9800f9c0(uVar5);
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}


/* ==== FUN_98012f90 @ 98012f90 ==== */

ulonglong FUN_98012f90(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uStack00000014;
  uint local_40;
  
  uStack00000014 = FUN_9800dc74();
  if (uStack00000014 == 0xfffffffe) {
    lVar3 = FUN_9800f988();
    *(undefined4 *)lVar3 = 0;
    lVar3 = FUN_9800f950();
    *(undefined4 *)lVar3 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < DAT_9801cc6c)) {
      iVar1 = (int)uStack00000014 >> 5;
      iVar2 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 1) != 0) {
        FUN_98012c20();
        if ((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 1) == 0) {
          lVar3 = FUN_9800f950();
          *(undefined4 *)lVar3 = 9;
          local_40 = 0xffffffff;
        }
        else {
          uVar4 = FUN_98012ea8();
          local_40 = (uint)uVar4;
        }
        FUN_980130b8();
        return (ulonglong)local_40;
      }
    }
    lVar3 = FUN_9800f988();
    *(undefined4 *)lVar3 = 0;
    lVar3 = FUN_9800f950();
    *(undefined4 *)lVar3 = 9;
    FUN_9800d548();
  }
  return 0xffffffffffffffff;
}


/* ==== FUN_980130b8 @ 980130b8 ==== */

void FUN_980130b8(void)

{
  FUN_98012d20();
  return;
}


/* ==== FUN_980130f0 @ 980130f0 ==== */

ulonglong FUN_980130f0(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_98013130 @ 98013130 ==== */

void FUN_98013130(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_9800dd90((ulonglong)(uint)param_1[2]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[3] = param_1[3] & 0xfffffbf7;
  }
  return;
}


/* ==== FUN_98013198 @ 98013198 ==== */

ulonglong FUN_98013198(uint param_1,int param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_20;
  
  uVar1 = FUN_98012b60(param_1);
  if ((int)uVar1 == -1) {
    lVar2 = FUN_9800f950();
    local_20 = 0xffffffffffffffff;
    *(undefined4 *)lVar2 = 9;
  }
  else {
    uVar1 = FUN_9801a410(uVar1,param_2,ZEXT48(&stack0x00000000) - 0x20,param_3);
    local_20 = CONCAT44(param_2 >> 0x1f,(int)uVar1);
    if (((int)uVar1 == -1) && (uVar3 = thunk_FUN_98008b10(), uVar3 != 0)) {
      FUN_9800f9c0(uVar3);
      local_20 = 0xffffffffffffffff;
    }
    else {
      iVar4 = (&DAT_9801cc80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0xfd;
    }
  }
  return local_20;
}


/* ==== FUN_98013268 @ 98013268 ==== */

ulonglong FUN_98013268(undefined8 param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  uint uStack00000014;
  ulonglong local_50;
  
  uVar3 = FUN_9800dc68();
  uStack00000014 = uVar3;
  if (uVar3 == 0xfffffffe) {
    lVar2 = FUN_9800f988();
    *(undefined4 *)lVar2 = 0;
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 9;
  }
  else {
    if ((-1 < (int)uVar3) && (uVar3 < DAT_9801cc6c)) {
      iVar1 = (uVar3 & 0x1f) * 0x48;
      if ((*(byte *)((&DAT_9801cc80)[(int)uVar3 >> 5] + iVar1 + 4) & 1) != 0) {
        FUN_98012c20();
        if ((*(byte *)((&DAT_9801cc80)[(int)uVar3 >> 5] + iVar1 + 4) & 1) == 0) {
          lVar2 = FUN_9800f950();
          *(undefined4 *)lVar2 = 9;
          lVar2 = FUN_9800f988();
          *(undefined4 *)lVar2 = 0;
          local_50 = 0xffffffffffffffff;
        }
        else {
          local_50 = FUN_98013198(uVar3,param_2,param_3);
        }
        FUN_980133b0();
        return local_50;
      }
    }
    lVar2 = FUN_9800f988();
    *(undefined4 *)lVar2 = 0;
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 9;
    FUN_9800d548();
  }
  return 0xffffffffffffffff;
}


/* ==== FUN_980133b0 @ 980133b0 ==== */

void FUN_980133b0(void)

{
  FUN_98012d20();
  return;
}


/* ==== FUN_980133e8 @ 980133e8 ==== */

longlong FUN_980133e8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  uint uVar6;
  char cVar8;
  char *pcVar7;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_1470;
  char local_1460 [5216];
  
  uVar4 = FUN_9800dc5c();
  uVar10 = 0;
  lVar9 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  if ((param_2 & 0xffffffff) == 0) {
LAB_98013424:
    lVar9 = FUN_9800f988();
    *(undefined4 *)lVar9 = 0;
    lVar9 = FUN_9800f950();
    *(undefined4 *)lVar9 = 0x16;
    FUN_9800d548();
    return -1;
  }
  iVar1 = (int)uVar4 >> 5;
  iVar2 = (uVar4 & 0x1f) * 0x48;
  cVar8 = *(char *)((&DAT_9801cc80)[iVar1] + iVar2 + 0x28) >> 1;
  if (((cVar8 == '\x02') || (cVar8 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_98013424;
  if ((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 0x20) != 0) {
    FUN_98013198(uVar4,0,2);
  }
  if ((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 0x80) == 0) {
    uVar3 = FUN_98008410();
    if ((int)uVar3 == 0) {
LAB_98013594:
      uVar4 = thunk_FUN_98008b10();
    }
    else {
      uVar10 = (ulonglong)local_1470;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    uVar11 = param_2;
    if ((param_3 & 0xffffffff) == 0) goto LAB_980135dc;
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
      uVar3 = FUN_98008410();
      if ((int)uVar3 == 0) goto LAB_98013594;
      uVar10 = local_1470 + uVar10;
    } while (((int)pcVar7 - (int)local_1460 <= (int)local_1470) &&
            ((uVar11 - param_2 & 0xffffffff) < (param_3 & 0xffffffff)));
  }
  if ((int)uVar10 != 0) {
    return uVar10 - lVar9;
  }
  if (uVar4 != 0) {
    if (uVar4 == 5) {
      lVar9 = FUN_9800f950();
      *(undefined4 *)lVar9 = 9;
      lVar9 = FUN_9800f988();
      *(undefined4 *)lVar9 = 5;
      return -1;
    }
    FUN_9800f9c0(uVar4);
    return -1;
  }
LAB_980135dc:
  if (((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 0x40) != 0) && (*(char *)param_2 == '\x1a'))
  {
    return 0;
  }
  lVar9 = FUN_9800f950();
  *(undefined4 *)lVar9 = 0x1c;
  lVar9 = FUN_9800f988();
  *(undefined4 *)lVar9 = 0;
  return -1;
}


/* ==== FUN_98013630 @ 98013630 ==== */

ulonglong FUN_98013630(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uStack00000014;
  uint local_50;
  
  uVar3 = FUN_9800dc6c();
  uStack00000014 = (uint)uVar3;
  if (uStack00000014 == 0xfffffffe) {
    lVar4 = FUN_9800f988();
    *(undefined4 *)lVar4 = 0;
    lVar4 = FUN_9800f950();
    *(undefined4 *)lVar4 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && ((uVar3 & 0xffffffff) < (ulonglong)DAT_9801cc6c)) {
      iVar1 = (int)uStack00000014 >> 5;
      iVar2 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 1) != 0) {
        FUN_98012c20();
        if ((*(byte *)((&DAT_9801cc80)[iVar1] + iVar2 + 4) & 1) == 0) {
          lVar4 = FUN_9800f950();
          *(undefined4 *)lVar4 = 9;
          lVar4 = FUN_9800f988();
          *(undefined4 *)lVar4 = 0;
          local_50 = 0xffffffff;
        }
        else {
          lVar4 = FUN_980133e8(uVar3,param_2,param_3);
          local_50 = (uint)lVar4;
        }
        FUN_98013774();
        return (ulonglong)local_50;
      }
    }
    lVar4 = FUN_9800f988();
    *(undefined4 *)lVar4 = 0;
    lVar4 = FUN_9800f950();
    *(undefined4 *)lVar4 = 9;
    FUN_9800d548();
  }
  return 0xffffffffffffffff;
}


/* ==== FUN_98013774 @ 98013774 ==== */

void FUN_98013774(void)

{
  FUN_98012d20();
  return;
}


/* ==== FUN_980137b8 @ 980137b8 ==== */

ulonglong FUN_980137b8(void)

{
  int iVar1;
  uint uVar4;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar5;
  uint uStack_40;
  
  uVar4 = FUN_9800dc74();
  if (uVar4 == 0xfffffffe) {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 9;
    return 0xffffffffffffffff;
  }
  if (((int)uVar4 < 0) || (DAT_9801cc6c <= uVar4)) {
LAB_98013808:
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 9;
    FUN_9800d548();
    return 0xffffffffffffffff;
  }
  iVar1 = (uVar4 & 0x1f) * 0x48;
  if ((*(byte *)(iVar1 + (&DAT_9801cc80)[(int)uVar4 >> 5] + 4) & 1) == 0) goto LAB_98013808;
  FUN_98012c20();
  if ((*(byte *)(iVar1 + (&DAT_9801cc80)[(int)uVar4 >> 5] + 4) & 1) != 0) {
    uVar3 = FUN_98012b60(uVar4);
    bVar5 = FUN_9801a580(uVar3);
    if (bVar5) {
      uStack_40 = 0;
    }
    else {
      uStack_40 = thunk_FUN_98008b10();
    }
    if (uStack_40 == 0) goto LAB_980138b8;
    lVar2 = FUN_9800f988();
    *(uint *)lVar2 = uStack_40;
  }
  lVar2 = FUN_9800f950();
  *(undefined4 *)lVar2 = 9;
  uStack_40 = 0xffffffff;
LAB_980138b8:
  FUN_980138f0();
  return (ulonglong)uStack_40;
}


/* ==== FUN_980138f0 @ 980138f0 ==== */

void FUN_980138f0(void)

{
  FUN_98012d20();
  return;
}


/* ==== FUN_98013980 @ 98013980 ==== */

undefined8 FUN_98013980(void)

{
  func_0x9801ac80(0xffffffffc0000144);
  return 1;
}


/* ==== FUN_98013998 @ 98013998 ==== */

void FUN_98013998(void)

{
  DAT_9801cbc4 = 0x98013540;
  return;
}


/* ==== FUN_980139b0 @ 980139b0 ==== */

void FUN_980139b0(undefined4 param_1)

{
  DAT_9801cbc8 = param_1;
  return;
}


/* ==== FUN_980139c0 @ 980139c0 ==== */

byte * FUN_980139c0(byte *param_1,uint param_2)

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


/* ==== FUN_98013a18 @ 98013a18 ==== */

longlong FUN_98013a18(longlong param_1)

{
  if ((int)param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < (int)param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_98013a30 @ 98013a30 ==== */

undefined8 FUN_98013a30(uint *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint auStack_30 [6];
  
  uVar1 = FUN_98015058(ZEXT48(&stack0x00000000) - 0x28,auStack_30,param_2,0,0,0,0,0xffffffff9801bd88
                      );
  uVar2 = FUN_98014228(ZEXT48(&stack0x00000000) - 0x28,param_1);
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


/* ==== FUN_98013ad8 @ 98013ad8 ==== */

undefined8 FUN_98013ad8(uint *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint auStack_30 [6];
  
  uVar1 = FUN_98015058(ZEXT48(&stack0x00000000) - 0x28,auStack_30,param_2,0,0,0,0,0xffffffff9801bd88
                      );
  uVar2 = FUN_98014940(ZEXT48(&stack0x00000000) - 0x28,param_1);
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


/* ==== FUN_98013b80 @ 98013b80 ==== */

undefined4 FUN_98013b80(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

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
    lVar1 = FUN_9800f950();
    *(undefined4 *)lVar1 = 0x16;
    FUN_9800d548();
    uVar9 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      lVar1 = FUN_9800f950();
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
          FUN_9800db80(param_1,uVar4,((uVar8 - uVar4) - 1 & 0xffffffff) + 1);
        }
        return 0;
      }
      lVar1 = FUN_9800f950();
      puVar2 = (undefined4 *)lVar1;
      uVar9 = 0x22;
    }
    *puVar2 = uVar9;
    FUN_9800d548();
  }
  return uVar9;
}


/* ==== FUN_98013ce0 @ 98013ce0 ==== */

void FUN_98013ce0(ushort *param_1,uint *param_2)

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


/* ==== FUN_98013dc0 @ 98013dc0 ==== */

undefined8 FUN_98013dc0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uStack00000010;
  undefined8 local_50;
  ushort local_48;
  short local_40;
  char local_3e;
  char acStack_3c [60];
  
  uStack00000010 = FUN_9800dc7c();
  FUN_98013ce0((ushort *)&local_50,(uint *)&stack0x00000010);
  iVar2 = FUN_980159b8(local_50,(ulonglong)local_48 << 0x30,0x11,0,ZEXT48(&stack0x00000000) - 0x40);
  piVar1 = (int *)param_2;
  piVar1[2] = iVar2;
  piVar1[1] = (int)local_40;
  *piVar1 = (int)local_3e;
  iVar2 = FUN_9800e338(param_3,param_4,acStack_3c);
  if (iVar2 == 0) {
    piVar1[3] = (int)param_3;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_9800d620();
}


/* ==== FUN_98013e68 @ 98013e68 ==== */

void FUN_98013e68(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  DAT_9801cbc0 = DAT_9801cbc0 + 1;
  puVar1 = FUN_9800ddf0();
  param_1[2] = puVar1;
  if (puVar1 == (uint *)0x0) {
    uVar2 = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    uVar2 = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[3] = uVar2;
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


/* ==== FUN_98013ef0 @ 98013ef0 ==== */

bool FUN_98013ef0(void)

{
  return (uRam9801c034 | 1) == uRam9801cbd0;
}


/* ==== FUN_98013f18 @ 98013f18 ==== */

undefined4 FUN_98013f18(undefined4 *param_1,uint *param_2,ulonglong param_3,ushort param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((param_2 == (uint *)0x0) && ((param_3 & 0xffffffff) != 0)) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0xffffffff;
    }
    if (0x7fffffff < (param_3 & 0xffffffff)) {
      lVar1 = FUN_9800f950();
      *(undefined4 *)lVar1 = 0x16;
      FUN_9800d548();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (uint *)0x0) && ((param_3 & 0xffffffff) != 0)) {
        FUN_9800dcf0(param_2,0,param_3);
      }
      lVar1 = FUN_9800f950();
      *(undefined4 *)lVar1 = 0x2a;
      lVar1 = FUN_9800f950();
      return *(undefined4 *)lVar1;
    }
    if (param_2 != (uint *)0x0) {
      if ((param_3 & 0xffffffff) == 0) {
        lVar1 = FUN_9800f950();
        *(undefined4 *)lVar1 = 0x22;
        FUN_9800d548();
        return 0x22;
      }
      *(char *)param_2 = (char)param_4;
    }
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return 0;
}


/* ==== FUN_98014010 @ 98014010 ==== */

undefined4 FUN_98014010(undefined4 *param_1,uint *param_2,ulonglong param_3,ushort param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_98013f18(param_1,param_2,param_3,param_4);
  return uVar1;
}


/* ==== FUN_98014018 @ 98014018 ==== */

ushort FUN_98014018(uint param_1)

{
  return *(ushort *)((param_1 & 0xff) * 2 + *(int *)(DAT_9801bd88 + 200)) & 0x8000;
}


/* ==== FUN_98014038 @ 98014038 ==== */

uint * FUN_98014038(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar4;
  uint *puVar5;
  undefined8 uVar3;
  
  uVar1 = FUN_9800dc78();
  if (((uVar1 & 0xffffffff) == 0) ||
     (trapWord(6,uVar1,0), (param_2 & 0xffffffff) <= 0xfffff000 / (uVar1 & 0xffffffff))) {
    uVar1 = (longlong)(int)uVar1 * (longlong)(int)param_2;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    do {
      if ((uVar1 & 0xffffffff) < 0xfffff001) {
        iVar4 = FUN_98019fa0();
        puVar5 = FUN_98018ad0((longlong)iVar4,8,uVar1);
        if (puVar5 != (uint *)0x0) {
          return puVar5;
        }
      }
      if (DAT_9801c970 == 0) {
        if ((param_3 & 0xffffffff) != 0) {
          *(undefined4 *)param_3 = 0xc;
          return (uint *)0x0;
        }
        return (uint *)0x0;
      }
      uVar3 = FUN_9800e4e0();
    } while ((int)uVar3 != 0);
    if ((param_3 & 0xffffffff) != 0) {
      *(undefined4 *)param_3 = 0xc;
    }
  }
  else {
    lVar2 = FUN_9800f950();
    *(undefined4 *)lVar2 = 0xc;
  }
  return (uint *)0x0;
}


/* ==== FUN_98014100 @ 98014100 ==== */

undefined8 FUN_98014100(void)

{
  return 0;
}


/* ==== FUN_98014110 @ 98014110 ==== */

int FUN_98014110(void)

{
  undefined *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iStack_40;
  
  FUN_9800dc70();
  iVar4 = 0;
  iStack_40 = 0;
  FUN_98011ba0(1);
  for (iVar5 = 3; iVar5 < iRam9801cd84; iVar5 = iVar5 + 1) {
    iVar2 = iVar5 * 4;
    puVar1 = *(undefined **)(iVar2 + iRam9801cd80);
    if (puVar1 != (undefined *)0x0) {
      if (((*(uint *)(puVar1 + 0xc) & 0x83) != 0) &&
         (uVar3 = FUN_9800eca8(puVar1), (int)uVar3 != -1)) {
        iVar4 = iVar4 + 1;
        iStack_40 = iVar4;
      }
      if (0x13 < iVar5) {
        FUN_9800dd90((ulonglong)*(uint *)(iVar2 + iRam9801cd80));
        *(undefined4 *)(iVar2 + iRam9801cd80) = 0;
      }
    }
  }
  FUN_980141d0();
  return iStack_40;
}


/* ==== FUN_980141d0 @ 980141d0 ==== */

void FUN_980141d0(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_9801421c @ 9801421c ==== */

undefined8 FUN_9801421c(void)

{
  return 0;
}


/* ==== FUN_98014228 @ 98014228 ==== */

undefined8 FUN_98014228(undefined8 param_1,uint *param_2)

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
  puVar9 = (ushort *)FUN_9800dc54();
  uVar6 = DAT_9801c010;
  uVar11 = DAT_9801c00c;
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
        goto LAB_980148f0;
      }
      iVar17 = iVar17 + 1;
      lVar13 = lVar13 + 4;
      iVar21 = 0;
    } while (iVar17 < 3);
  }
  else {
    local_88 = *(uint *)lVar13;
    uVar19 = DAT_9801c00c - 1;
    uVar8 = 1;
    iVar3 = (int)DAT_9801c00c >> 5;
    local_84 = local_98[1];
    uVar23 = (longlong)iVar3 + (ulonglong)((int)DAT_9801c00c < 0 && (DAT_9801c00c & 0x1f) != 0);
    local_80 = local_98[2];
    iVar5 = (int)((uVar23 & 0x3fffffff) << 2);
    uVar20 = 0x1f - (DAT_9801c00c +
                    (iVar3 + (uint)((int)DAT_9801c00c < 0 && (DAT_9801c00c & 0x1f) != 0)) * -0x20);
    iVar4 = (int)uVar19 >> 5;
    if ((1 << (uVar20 & 0x3f) & *(uint *)((int)local_98 + iVar5)) != 0) {
      if ((*(uint *)((int)local_98 + (int)((uVar23 & 0xffffffff) << 2)) & ~(-1 << (uVar20 & 0x3f)))
          == 0) {
        uVar16 = uVar23 + 1;
        if ((int)uVar16 < 3) {
          lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x98);
          do {
            if (*(int *)lVar13 != 0) goto LAB_98014370;
            uVar16 = uVar16 + 1;
            lVar13 = lVar13 + 4;
          } while ((int)uVar16 < 3);
        }
      }
      else {
LAB_98014370:
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
    iVar5 = DAT_9801c004;
    iVar21 = iVar17;
    if (iVar10 != 0) {
      iVar21 = uVar22 - 0x3ffe;
    }
    if (iVar21 < (int)(DAT_9801c008 - uVar11)) {
      iVar10 = 0;
      uVar8 = 2;
      local_98[0] = 0;
      local_98[1] = 0;
      goto LAB_980148f0;
    }
    lVar13 = 3;
    if (iVar21 <= DAT_9801c008) {
      uVar18 = DAT_9801c008 - iVar17;
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
              if (*(int *)lVar13 != 0) goto LAB_980145dc;
              uVar16 = uVar16 + 1;
              lVar13 = lVar13 + 4;
            } while ((int)uVar16 < 3);
          }
        }
        else {
LAB_980145dc:
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
      goto LAB_980148f0;
    }
    iVar10 = (int)uVar6 >> 5;
    if (DAT_9801c004 <= iVar21) {
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
      iVar10 = DAT_9801c018 + iVar5;
      goto LAB_980148f0;
    }
    uVar11 = iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
    local_98[0] = local_98[0] & 0x7fffffff;
    iVar21 = DAT_9801c018 + iVar21;
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
LAB_980148f0:
  if (DAT_9801c014 == 0x40) {
    param_2[1] = local_98[1];
  }
  else if (DAT_9801c014 != 0x20) {
    return uVar8;
  }
  *param_2 = iVar10 << (0x1f - uVar6 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 |
             local_98[0];
  return uVar8;
}


/* ==== FUN_98014940 @ 98014940 ==== */

undefined8 FUN_98014940(undefined8 param_1,uint *param_2)

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
  puVar9 = (ushort *)FUN_9800dc54();
  uVar6 = DAT_9801c028;
  uVar11 = DAT_9801c024;
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
        goto LAB_98015008;
      }
      iVar17 = iVar17 + 1;
      lVar13 = lVar13 + 4;
      iVar21 = 0;
    } while (iVar17 < 3);
  }
  else {
    local_88 = *(uint *)lVar13;
    uVar19 = DAT_9801c024 - 1;
    uVar8 = 1;
    iVar3 = (int)DAT_9801c024 >> 5;
    local_84 = local_98[1];
    uVar23 = (longlong)iVar3 + (ulonglong)((int)DAT_9801c024 < 0 && (DAT_9801c024 & 0x1f) != 0);
    local_80 = local_98[2];
    iVar5 = (int)((uVar23 & 0x3fffffff) << 2);
    uVar20 = 0x1f - (DAT_9801c024 +
                    (iVar3 + (uint)((int)DAT_9801c024 < 0 && (DAT_9801c024 & 0x1f) != 0)) * -0x20);
    iVar4 = (int)uVar19 >> 5;
    if ((1 << (uVar20 & 0x3f) & *(uint *)((int)local_98 + iVar5)) != 0) {
      if ((*(uint *)((int)local_98 + (int)((uVar23 & 0xffffffff) << 2)) & ~(-1 << (uVar20 & 0x3f)))
          == 0) {
        uVar16 = uVar23 + 1;
        if ((int)uVar16 < 3) {
          lVar13 = (uVar16 & 0x3fffffff) * 4 + (uVar7 - 0x98);
          do {
            if (*(int *)lVar13 != 0) goto LAB_98014a88;
            uVar16 = uVar16 + 1;
            lVar13 = lVar13 + 4;
          } while ((int)uVar16 < 3);
        }
      }
      else {
LAB_98014a88:
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
    iVar5 = DAT_9801c01c;
    iVar21 = iVar17;
    if (iVar10 != 0) {
      iVar21 = uVar22 - 0x3ffe;
    }
    if (iVar21 < (int)(DAT_9801c020 - uVar11)) {
      iVar10 = 0;
      uVar8 = 2;
      local_98[0] = 0;
      local_98[1] = 0;
      goto LAB_98015008;
    }
    lVar13 = 3;
    if (iVar21 <= DAT_9801c020) {
      uVar18 = DAT_9801c020 - iVar17;
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
              if (*(int *)lVar13 != 0) goto LAB_98014cf4;
              uVar16 = uVar16 + 1;
              lVar13 = lVar13 + 4;
            } while ((int)uVar16 < 3);
          }
        }
        else {
LAB_98014cf4:
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
      goto LAB_98015008;
    }
    iVar10 = (int)uVar6 >> 5;
    if (DAT_9801c01c <= iVar21) {
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
      iVar10 = DAT_9801c030 + iVar5;
      goto LAB_98015008;
    }
    uVar11 = iVar10 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
    local_98[0] = local_98[0] & 0x7fffffff;
    iVar21 = DAT_9801c030 + iVar21;
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
LAB_98015008:
  if (DAT_9801c02c == 0x40) {
    param_2[1] = local_98[1];
  }
  else if (DAT_9801c02c != 0x20) {
    return uVar8;
  }
  *param_2 = iVar10 << (0x1f - uVar6 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 |
             local_98[0];
  return uVar8;
}


/* ==== FUN_98015058 @ 98015058 ==== */

/* WARNING: Removing unreachable block (ram,0x98015288) */
/* WARNING: Removing unreachable block (ram,0x98015298) */
/* WARNING: Removing unreachable block (ram,0x980152a0) */
/* WARNING: Removing unreachable block (ram,0x98015274) */
/* WARNING: Removing unreachable block (ram,0x9801594c) */
/* WARNING: Removing unreachable block (ram,0x98015490) */
/* WARNING: Removing unreachable block (ram,0x98015280) */
/* WARNING: Removing unreachable block (ram,0x980152ac) */
/* WARNING: Removing unreachable block (ram,0x98015938) */
/* WARNING: Removing unreachable block (ram,0x980152b4) */
/* WARNING: Removing unreachable block (ram,0x98015518) */
/* WARNING: Removing unreachable block (ram,0x9801550c) */
/* WARNING: Removing unreachable block (ram,0x98015520) */
/* WARNING: Removing unreachable block (ram,0x98015538) */
/* WARNING: Removing unreachable block (ram,0x9801553c) */
/* WARNING: Removing unreachable block (ram,0x98015548) */
/* WARNING: Removing unreachable block (ram,0x9801554c) */
/* WARNING: Removing unreachable block (ram,0x98015554) */
/* WARNING: Removing unreachable block (ram,0x98015558) */
/* WARNING: Removing unreachable block (ram,0x98015964) */
/* WARNING: Removing unreachable block (ram,0x98015560) */
/* WARNING: Removing unreachable block (ram,0x9801597c) */
/* WARNING: Removing unreachable block (ram,0x98015568) */
/* WARNING: Removing unreachable block (ram,0x98015580) */
/* WARNING: Removing unreachable block (ram,0x98015584) */
/* WARNING: Removing unreachable block (ram,0x98015594) */
/* WARNING: Removing unreachable block (ram,0x980155b0) */
/* WARNING: Removing unreachable block (ram,0x980155c4) */
/* WARNING: Removing unreachable block (ram,0x980155d4) */
/* WARNING: Removing unreachable block (ram,0x980155e8) */
/* WARNING: Removing unreachable block (ram,0x98015604) */
/* WARNING: Removing unreachable block (ram,0x98015644) */
/* WARNING: Removing unreachable block (ram,0x9801564c) */
/* WARNING: Removing unreachable block (ram,0x98015658) */
/* WARNING: Removing unreachable block (ram,0x98015668) */
/* WARNING: Removing unreachable block (ram,0x98015670) */
/* WARNING: Removing unreachable block (ram,0x98015684) */
/* WARNING: Removing unreachable block (ram,0x98015690) */
/* WARNING: Removing unreachable block (ram,0x9801569c) */
/* WARNING: Removing unreachable block (ram,0x980156a4) */
/* WARNING: Removing unreachable block (ram,0x980156ac) */
/* WARNING: Removing unreachable block (ram,0x980156c4) */
/* WARNING: Removing unreachable block (ram,0x980156d0) */
/* WARNING: Removing unreachable block (ram,0x980156dc) */
/* WARNING: Removing unreachable block (ram,0x980156e8) */
/* WARNING: Removing unreachable block (ram,0x980156f4) */
/* WARNING: Removing unreachable block (ram,0x98015704) */
/* WARNING: Removing unreachable block (ram,0x98015724) */
/* WARNING: Removing unreachable block (ram,0x9801572c) */
/* WARNING: Removing unreachable block (ram,0x98015730) */
/* WARNING: Removing unreachable block (ram,0x9801573c) */
/* WARNING: Removing unreachable block (ram,0x98015748) */
/* WARNING: Removing unreachable block (ram,0x98015754) */
/* WARNING: Removing unreachable block (ram,0x98015764) */
/* WARNING: Removing unreachable block (ram,0x98015774) */
/* WARNING: Removing unreachable block (ram,0x98015780) */
/* WARNING: Removing unreachable block (ram,0x980157c4) */
/* WARNING: Removing unreachable block (ram,0x980157cc) */
/* WARNING: Removing unreachable block (ram,0x980157e0) */
/* WARNING: Removing unreachable block (ram,0x980157e8) */
/* WARNING: Removing unreachable block (ram,0x980157f4) */
/* WARNING: Removing unreachable block (ram,0x980157f8) */
/* WARNING: Removing unreachable block (ram,0x9801582c) */
/* WARNING: Removing unreachable block (ram,0x9801583c) */
/* WARNING: Removing unreachable block (ram,0x9801584c) */
/* WARNING: Removing unreachable block (ram,0x98015858) */
/* WARNING: Removing unreachable block (ram,0x9801586c) */
/* WARNING: Removing unreachable block (ram,0x980158c4) */
/* WARNING: Removing unreachable block (ram,0x98015878) */
/* WARNING: Removing unreachable block (ram,0x980158b8) */
/* WARNING: Removing unreachable block (ram,0x98015888) */
/* WARNING: Removing unreachable block (ram,0x980158ac) */
/* WARNING: Removing unreachable block (ram,0x98015898) */
/* WARNING: Removing unreachable block (ram,0x980158cc) */
/* WARNING: Removing unreachable block (ram,0x980158d8) */
/* WARNING: Removing unreachable block (ram,0x98015904) */
/* WARNING: Removing unreachable block (ram,0x98015910) */
/* WARNING: Removing unreachable block (ram,0x9801578c) */
/* WARNING: Removing unreachable block (ram,0x98015660) */
/* WARNING: Removing unreachable block (ram,0x98015914) */
/* WARNING: Removing unreachable block (ram,0x9801591c) */
/* WARNING: Removing unreachable block (ram,0x98015924) */
/* WARNING: Removing unreachable block (ram,0x98015990) */

undefined8
FUN_98015058(undefined8 param_1,uint *param_2,ulonglong param_3,ulonglong param_4,longlong param_5,
            longlong param_6,longlong param_7,ulonglong param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_9800dc54();
  if ((param_8 & 0xffffffff) != 0) {
    for (; (((cVar1 = *(char *)param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x98015130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)((uint)DAT_98003e80 * 4 + -0x67feb2cc))();
    return uVar3;
  }
  lVar2 = FUN_9800f950();
  *(undefined4 *)lVar2 = 0x16;
  FUN_9800d548();
  return 0;
}


/* ==== FUN_98015148 @ 98015148 ==== */

/* WARNING: Removing unreachable block (ram,0x98015490) */
/* WARNING: Removing unreachable block (ram,0x98015274) */
/* WARNING: Removing unreachable block (ram,0x9801594c) */
/* WARNING: Removing unreachable block (ram,0x98015280) */
/* WARNING: Removing unreachable block (ram,0x98015288) */
/* WARNING: Removing unreachable block (ram,0x98015298) */
/* WARNING: Removing unreachable block (ram,0x980152a0) */
/* WARNING: Removing unreachable block (ram,0x980152ac) */
/* WARNING: Removing unreachable block (ram,0x98015938) */
/* WARNING: Removing unreachable block (ram,0x980152b4) */
/* WARNING: Removing unreachable block (ram,0x98015518) */
/* WARNING: Removing unreachable block (ram,0x9801550c) */
/* WARNING: Removing unreachable block (ram,0x98015520) */
/* WARNING: Removing unreachable block (ram,0x98015538) */
/* WARNING: Removing unreachable block (ram,0x9801553c) */
/* WARNING: Removing unreachable block (ram,0x98015548) */
/* WARNING: Removing unreachable block (ram,0x9801554c) */
/* WARNING: Removing unreachable block (ram,0x98015554) */
/* WARNING: Removing unreachable block (ram,0x98015558) */
/* WARNING: Removing unreachable block (ram,0x98015964) */
/* WARNING: Removing unreachable block (ram,0x98015560) */
/* WARNING: Removing unreachable block (ram,0x9801597c) */
/* WARNING: Removing unreachable block (ram,0x98015568) */
/* WARNING: Removing unreachable block (ram,0x98015580) */
/* WARNING: Removing unreachable block (ram,0x98015584) */
/* WARNING: Removing unreachable block (ram,0x98015594) */
/* WARNING: Removing unreachable block (ram,0x980155b0) */
/* WARNING: Removing unreachable block (ram,0x980155c4) */
/* WARNING: Removing unreachable block (ram,0x980155d4) */
/* WARNING: Removing unreachable block (ram,0x980155e8) */
/* WARNING: Removing unreachable block (ram,0x98015604) */
/* WARNING: Removing unreachable block (ram,0x98015644) */
/* WARNING: Removing unreachable block (ram,0x9801564c) */
/* WARNING: Removing unreachable block (ram,0x98015658) */
/* WARNING: Removing unreachable block (ram,0x98015668) */
/* WARNING: Removing unreachable block (ram,0x98015670) */
/* WARNING: Removing unreachable block (ram,0x98015684) */
/* WARNING: Removing unreachable block (ram,0x98015690) */
/* WARNING: Removing unreachable block (ram,0x9801569c) */
/* WARNING: Removing unreachable block (ram,0x980156a4) */
/* WARNING: Removing unreachable block (ram,0x980156ac) */
/* WARNING: Removing unreachable block (ram,0x980156c4) */
/* WARNING: Removing unreachable block (ram,0x980156d0) */
/* WARNING: Removing unreachable block (ram,0x980156dc) */
/* WARNING: Removing unreachable block (ram,0x980156e8) */
/* WARNING: Removing unreachable block (ram,0x980156f4) */
/* WARNING: Removing unreachable block (ram,0x98015704) */
/* WARNING: Removing unreachable block (ram,0x98015724) */
/* WARNING: Removing unreachable block (ram,0x9801572c) */
/* WARNING: Removing unreachable block (ram,0x98015730) */
/* WARNING: Removing unreachable block (ram,0x9801573c) */
/* WARNING: Removing unreachable block (ram,0x98015748) */
/* WARNING: Removing unreachable block (ram,0x98015754) */
/* WARNING: Removing unreachable block (ram,0x98015764) */
/* WARNING: Removing unreachable block (ram,0x98015774) */
/* WARNING: Removing unreachable block (ram,0x98015780) */
/* WARNING: Removing unreachable block (ram,0x980157c4) */
/* WARNING: Removing unreachable block (ram,0x980157cc) */
/* WARNING: Removing unreachable block (ram,0x980157e0) */
/* WARNING: Removing unreachable block (ram,0x980157e8) */
/* WARNING: Removing unreachable block (ram,0x980157f4) */
/* WARNING: Removing unreachable block (ram,0x980157f8) */
/* WARNING: Removing unreachable block (ram,0x9801582c) */
/* WARNING: Removing unreachable block (ram,0x9801583c) */
/* WARNING: Removing unreachable block (ram,0x9801584c) */
/* WARNING: Removing unreachable block (ram,0x98015858) */
/* WARNING: Removing unreachable block (ram,0x9801586c) */
/* WARNING: Removing unreachable block (ram,0x980158c4) */
/* WARNING: Removing unreachable block (ram,0x98015878) */
/* WARNING: Removing unreachable block (ram,0x980158b8) */
/* WARNING: Removing unreachable block (ram,0x98015888) */
/* WARNING: Removing unreachable block (ram,0x980158ac) */
/* WARNING: Removing unreachable block (ram,0x98015898) */
/* WARNING: Removing unreachable block (ram,0x980158cc) */
/* WARNING: Removing unreachable block (ram,0x980158d8) */
/* WARNING: Removing unreachable block (ram,0x98015904) */
/* WARNING: Removing unreachable block (ram,0x98015910) */
/* WARNING: Removing unreachable block (ram,0x9801578c) */
/* WARNING: Removing unreachable block (ram,0x98015660) */
/* WARNING: Removing unreachable block (ram,0x98015914) */
/* WARNING: Removing unreachable block (ram,0x9801591c) */
/* WARNING: Removing unreachable block (ram,0x98015924) */
/* WARNING: Removing unreachable block (ram,0x9800dca4) */

undefined8 FUN_98015148(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x98015130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)UNK_98003e83 * 4 + -0x67feb2cc))();
  return uVar1;
}


/* ==== FUN_98015154 @ 98015154 ==== */

ulonglong FUN_98015154(ulonglong param_1,int *param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  short *psVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar16;
  int iVar17;
  ushort uVar18;
  ulonglong uVar15;
  uint uVar21;
  ulonglong uVar19;
  longlong lVar20;
  int iVar22;
  int iVar25;
  uint uVar26;
  int iVar27;
  char in_r11;
  ulonglong uVar23;
  ulonglong uVar24;
  ushort uVar28;
  int iVar29;
  ulonglong unaff_r19;
  ushort *unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  undefined4 uVar30;
  ulonglong unaff_r23;
  longlong unaff_r24;
  longlong unaff_r25;
  longlong lVar31;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  longlong unaff_r29;
  uint unaff_r30;
  ulonglong unaff_r31;
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
  uint uStack_98;
  int iStack_94;
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar25 = (int)unaff_r22;
  if (in_r11 == *(char *)**(undefined4 **)(*(int *)param_8 + 0xbc)) {
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
      iVar17 = (int)param_5 + -1;
LAB_98015274:
      *param_2 = iVar17;
      uVar28 = (ushort)unaff_r22;
      uVar23 = unaff_r22;
      uVar19 = unaff_r22;
      uVar13 = unaff_r22;
      if (unaff_r30 == 0) {
        unaff_r22 = 4;
      }
      else {
        if (0x18 < (param_4 & 0xffffffff)) {
          param_4 = 0x18;
          param_1 = param_1 - 1;
          unaff_r31 = unaff_r31 + 1;
        }
        if ((param_4 & 0xffffffff) != 0) {
          lVar31 = param_1 - 1;
          cVar1 = *(char *)lVar31;
          while (cVar1 == '\0') {
            lVar31 = lVar31 + -1;
            param_4 = param_4 - 1;
            unaff_r31 = unaff_r31 + 1;
            cVar1 = *(char *)lVar31;
          }
          FUN_980165c0(uVar10 + 0x80,param_4,uVar10 + 0x60);
          if (unaff_r27 < 0) {
            unaff_r29 = -unaff_r29;
          }
          uVar24 = unaff_r31 + unaff_r29;
          if (unaff_r28 == 0) {
            uVar24 = uVar24 + unaff_r25;
          }
          if (unaff_r26 == 0) {
            uVar24 = uVar24 - unaff_r24;
          }
          iVar17 = (int)uVar24;
          if (iVar17 < 0x1451) {
            if (iVar17 < -0x1450) {
              unaff_r22 = 1;
            }
            else {
              lVar31 = -0x67fe4028;
              iVar27 = _uStack00000064;
              iVar29 = _uStack00000068;
              if (iVar17 != 0) {
                if (iVar17 < 0) {
                  uVar24 = -uVar24;
                  lVar31 = -0x67fe3ec8;
                }
                iVar17 = (int)uVar24;
                uVar8 = uStack00000060;
                uVar9 = uStack00000062;
                iVar22 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x980155ac:
                iVar29 = iVar22;
                iVar27 = _uStack00000064;
                uStack00000062 = uVar9;
                uStack00000060 = uVar8;
                if (iVar17 != 0) {
                  uVar23 = uVar24 & 7;
                  lVar31 = lVar31 + 0x54;
                  iVar17 = (int)uVar24 >> 3;
                  uVar24 = (ulonglong)iVar17;
                  uVar8 = uStack00000060;
                  uVar9 = uStack00000062;
                  _uStack00000064 = iVar27;
                  iVar22 = iVar29;
                  if (uVar23 != 0) {
                    uVar23 = uVar23 * 0xc + lVar31;
                    if (0x7fff < *(ushort *)((int)uVar23 + 10)) {
                      FUN_9800d650(uVar10 + 0x70,uVar23,0xc);
                      uVar23 = uVar10 + 0x70;
                    }
                    uStack00000058 = (ushort)(unaff_r22 >> 0x10);
                    puVar12 = (uint *)uVar23;
                    uVar2 = *(ushort *)puVar12;
                    uVar5 = uStack00000060 ^ uVar2;
                    uVar18 = (uStack00000060 & 0x7fff) + (uVar2 & 0x7fff);
                    if ((((uStack00000060 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) &&
                       (uVar18 < 0xbffe)) {
                      uVar8 = uStack00000058;
                      uVar9 = uVar28;
                      _uStack00000064 = iVar25;
                      iVar22 = iVar25;
                      if (((uVar18 < 0x3fc0) ||
                          ((((uStack00000060 & 0x7fff) == 0 &&
                            (uVar18 = uVar18 + 1,
                            (CONCAT22(uStack00000060,uStack00000062) & 0x7fffffff) == 0)) &&
                           ((iVar27 == 0 &&
                            (uVar8 = uVar28, uVar9 = uStack00000062, _uStack00000064 = iVar27,
                            iVar22 = iVar29, iVar29 == 0)))))) ||
                         (((((uVar2 & 0x7fff) == 0 &&
                            (uVar18 = uVar18 + 1, (*puVar12 & 0x7fffffff) == 0)) &&
                           (puVar12[1] == 0)) &&
                          (uVar8 = uStack00000058, uVar9 = uVar28, _uStack00000064 = iVar25,
                          iVar22 = iVar25, puVar12[2] == 0)))) goto joined_r0x980155ac;
                      lVar20 = uVar10 + 0x56;
                      lVar11 = 5;
                      uVar19 = unaff_r22;
                      do {
                        if (0 < (int)lVar11) {
                          lVar14 = uVar10 + 0x6a + (uVar19 & 0x7fffffff) * -2;
                          lVar32 = lVar11;
                          uVar13 = uVar23;
                          do {
                            uVar13 = uVar13 + 2;
                            psVar6 = (short *)lVar20;
                            uVar26 = (uint)*(ushort *)uVar13 * (uint)*(ushort *)lVar14;
                            uVar21 = *(uint *)(psVar6 + 1) + uVar26;
                            if ((uVar21 < *(uint *)(psVar6 + 1)) ||
                               (uVar15 = unaff_r22, uVar21 < uVar26)) {
                              uVar15 = 1;
                            }
                            *(uint *)(psVar6 + 1) = uVar21;
                            if ((int)uVar15 != 0) {
                              *psVar6 = *psVar6 + 1;
                            }
                            lVar14 = lVar14 + -2;
                            lVar32 = lVar32 + -1;
                          } while (lVar32 != 0);
                        }
                        lVar11 = lVar11 + -1;
                        lVar20 = lVar20 + -2;
                        uVar19 = uVar19 + 1;
                      } while (0 < lVar11);
                      uVar18 = uVar18 + 0xc002;
                      uVar23 = unaff_r22 & 0xffffffff;
                      uStack00000050 = uStack00000058;
                      uStack00000052 = uVar28;
                      uStack00000054 = uStack00000058;
                      uStack00000056 = uVar28;
                      uStack0000005a = uVar28;
                      while ((0 < (short)uVar18 && ((uStack00000050 & 0x8000) == 0))) {
                        iVar29 = CONCAT22(uStack00000050,uStack00000052) << 1;
                        iVar27 = CONCAT22(uStack00000054,uStack00000056) << 1;
                        uVar19 = (uVar23 & 0x7fffffff) << 1;
                        uStack00000056 = (ushort)iVar27 | (ushort)(uVar23 >> 0x10) >> 0xf;
                        uStack00000052 = (ushort)iVar29 | uStack00000054 >> 0xf;
                        uStack00000058 = (ushort)(uVar19 >> 0x10);
                        uStack0000005a = (ushort)uVar19;
                        uVar18 = uVar18 - 1;
                        uStack00000054 = (ushort)((uint)iVar27 >> 0x10);
                        uVar23 = uVar19;
                        uStack00000050 = (ushort)((uint)iVar29 >> 0x10);
                      }
                      if (((short)uVar18 < 1) && (uVar18 = uVar18 - 1, (short)uVar18 < 0)) {
                        uVar19 = (ulonglong)CONCAT22(uStack00000050,uStack00000052);
                        uVar15 = (ulonglong)CONCAT22(uStack00000054,uStack00000056);
                        uVar13 = unaff_r22;
                        do {
                          if ((uStack0000005a & 1) != 0) {
                            uVar13 = uVar13 + 1;
                          }
                          uVar18 = uVar18 + 1;
                          uVar3 = uVar23 >> 1;
                          uVar7 = uVar19 & 1;
                          uVar4 = uVar15 >> 1;
                          uVar23 = uVar3 | (uVar15 & 1) << 0x1f;
                          uVar19 = uVar19 >> 1;
                          uStack00000058 = (ushort)(uVar23 >> 0x10);
                          uStack0000005a = (ushort)uVar3;
                          uVar15 = uVar4 | uVar7 << 0x1f;
                        } while ((short)uVar18 < 0);
                        uStack00000054 = (ushort)(uVar15 >> 0x10);
                        uStack00000056 = (ushort)uVar4;
                        uStack00000050 = (ushort)(uVar19 >> 0x10);
                        uStack00000052 = (ushort)uVar19;
                        if ((int)uVar13 != 0) {
                          uStack0000005a = uStack0000005a | 1;
                          uVar23 = (ulonglong)((uint)uVar23 | 1);
                        }
                      }
                      if ((0x8000 < uStack0000005a) ||
                         (_uStack00000064 = CONCAT22(uStack00000052,uStack00000054),
                         iVar22 = CONCAT22(uStack00000056,uStack00000058),
                         (uVar23 & 0x1ffff) == 0x18000)) {
                        if (CONCAT22(uStack00000056,uStack00000058) == -1) {
                          if (CONCAT22(uStack00000052,uStack00000054) == -1) {
                            if (uStack00000050 == 0xffff) {
                              uStack00000050 = (ushort)unaff_r21;
                              uVar18 = uVar18 + 1;
                              _uStack00000064 = iVar25;
                              iVar22 = iVar25;
                            }
                            else {
                              uStack00000050 = uStack00000050 + 1;
                              _uStack00000064 = iVar25;
                              iVar22 = iVar25;
                            }
                          }
                          else {
                            _uStack00000064 = CONCAT22(uStack00000052,uStack00000054) + 1;
                            iVar22 = iVar25;
                          }
                        }
                        else {
                          iVar22 = CONCAT22(uStack00000056,uStack00000058) + 1;
                          _uStack00000064 = CONCAT22(uStack00000052,uStack00000054);
                        }
                      }
                      if (uVar18 < 0x7fff) {
                        uVar8 = uVar5 & 0x8000 | uVar18;
                        uVar9 = uStack00000050;
                        goto joined_r0x980155ac;
                      }
                    }
                    uStack00000060 = 0xffff;
                    uStack00000062 = 0x8000;
                    uVar8 = uStack00000060;
                    uVar9 = uStack00000062;
                    _uStack00000064 = iVar25;
                    iVar22 = iVar25;
                    if ((uVar5 & 0x8000) == 0) {
                      uStack00000060 = 0x7fff;
                      uStack00000062 = 0x8000;
                      uVar8 = uStack00000060;
                      uVar9 = uStack00000062;
                    }
                  }
                  goto joined_r0x980155ac;
                }
              }
              uStack00000068 = (undefined2)((uint)iVar29 >> 0x10);
              uStack0000006a = (ushort)iVar29;
              uStack00000064 = (undefined2)((uint)iVar27 >> 0x10);
              uStack00000066 = (undefined2)iVar27;
              uVar23 = (ulonglong)CONCAT22(uStack00000066,uStack00000068);
              uVar19 = (ulonglong)CONCAT22(uStack00000062,uStack00000064);
              uVar13 = (ulonglong)uStack00000060;
              uVar28 = uStack0000006a;
            }
          }
          else {
            uVar19 = 0xffffffff80000000;
            uVar13 = 0x7fff;
            unaff_r22 = 2;
          }
        }
      }
      unaff_r20[5] = uVar28;
      *(int *)(unaff_r20 + 3) = (int)uVar23;
      *(int *)(unaff_r20 + 1) = (int)uVar19;
      *unaff_r20 = (ushort)uVar13 | (ushort)unaff_r19;
      return unaff_r22;
    }
    uVar23 = 1;
  }
LAB_980150fc:
  pbVar16 = (byte *)param_5;
  uVar19 = (ulonglong)*pbVar16;
  param_5 = param_5 + 1;
  iVar17 = (int)param_5;
  iVar27 = (int)uVar23;
  if (0xb < uVar23) goto LAB_98015490;
  iVar29 = (uint)(byte)(&DAT_98003e80)[iVar27] * 4 + -0x67feb2cc;
  uVar30 = (undefined4)unaff_r23;
  uVar13 = param_1;
  switch(iVar27) {
  case 1:
    goto code_r0x98014db0;
  case 2:
    goto code_r0x98014e38;
  case 3:
    uVar26 = (int)unaff_r21 - iVar27;
    lVar31 = param_7 - 4;
    uStack_98 = uStack_98 | 0x80000000;
    do {
      uVar21 = *(uint *)((int)lVar31 + 4);
      lVar31 = lVar31 + 4;
      *(uint *)lVar31 = uVar21 >> (uVar26 & 0x3f) | (uint)unaff_r23;
      unaff_r23 = (ulonglong)((uVar21 & ~(iVar17 << (uVar26 & 0x3f))) << (0x20 - uVar26 & 0x3f));
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
    param_7 = 2;
    uVar23 = uVar10 - 0x90;
    uVar19 = (uVar10 - 0x90) + (param_4 & 0x3fffffff) * -4;
    iVar29 = 3;
    do {
      if ((int)param_7 < (int)(uint)param_4) {
LAB_98014f34:
        *(undefined4 *)uVar23 = uVar30;
      }
      else {
        *(undefined4 *)uVar23 = *(undefined4 *)uVar19;
      }
      param_7 = param_7 - 1;
      uVar19 = uVar19 - 4;
      uVar23 = uVar23 - 4;
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
    param_3 = *(uint *)(unaff_r20 + 10) + param_3;
    goto LAB_98015008;
  case 4:
    goto LAB_98014f34;
  case 5:
    goto code_r0x98014fa4;
  case 6:
    goto code_r0x98014fc4;
  case 7:
    goto LAB_98015044;
  }
  if (uVar23 < 0xb) {
    param_3 = param_1;
  }
  *(int **)(iVar17 + (uint)*pbVar16) = (int *)param_8;
  param_7 = param_7 - 1;
  if ((longlong)param_7 < 0) goto LAB_98014d8c;
  lVar31 = (param_7 & 0x3fffffff) * 4 + (uVar10 - 0x94);
  goto LAB_98014d58;
LAB_98015490:
  if (iVar27 == 10) goto LAB_98015274;
  goto LAB_980150fc;
code_r0x98014fa4:
  while( true ) {
    param_8 = param_8 + 4;
    *(uint *)param_8 = (uint)uVar19 >> iVar27 | (uint)param_7;
    param_7 = (ulonglong)(uint)((int)unaff_r31 << ((uint)param_4 & 0x3f));
    iVar29 = iVar29 + -1;
    if (iVar29 == 0) break;
    uVar19 = (ulonglong)((uint *)param_8)[1];
    unaff_r31 = uVar19 & param_5;
  }
  param_8 = 3;
code_r0x98014fc4:
  iVar25 = 2;
  lVar11 = uVar10 - 0x90;
  lVar31 = (uVar10 - 0x90) + (param_1 & 0x3fffffff) * -4;
  do {
    if (iVar25 < (int)param_1) {
      *(undefined4 *)lVar11 = uVar30;
    }
    else {
      *(undefined4 *)lVar11 = *(undefined4 *)lVar31;
    }
    iVar25 = iVar25 + -1;
    lVar31 = lVar31 + -4;
    lVar11 = lVar11 + -4;
    param_8 = param_8 - 1;
    uVar13 = unaff_r23;
  } while (param_8 != 0);
  goto LAB_98015008;
  while( true ) {
    uVar26 = *(uint *)((int)lVar31 + -4);
    uVar21 = uVar26 + 1;
    if ((uVar21 < uVar26) || (param_3 = unaff_r23, uVar21 == 0)) {
      param_3 = param_1;
    }
    param_7 = param_7 - 1;
    lVar31 = lVar31 + -4;
    *(uint *)lVar31 = uVar21;
    if ((longlong)param_7 < 0) break;
LAB_98014d58:
    if ((int)param_3 == 0) break;
  }
LAB_98014d8c:
  uVar23 = unaff_r31 + 1;
  *(uint *)(unaff_r28 + (int)unaff_r29) =
       iVar25 << (unaff_r30 & 0x3f) & *(uint *)(unaff_r28 + (int)unaff_r29);
  if ((int)uVar23 < 3) {
    param_7 = (uVar23 & 0x3fffffff) << 2;
    param_8 = uVar10 - 0x98;
code_r0x98014db0:
    uVar23 = 3 - uVar23;
    lVar31 = param_7 + param_8 + -4;
    uVar19 = uVar23 & 0xffffffff;
    while (uVar19 != 0) {
      lVar31 = lVar31 + 4;
      *(undefined4 *)lVar31 = uVar30;
      uVar23 = uVar23 - 1;
      uVar19 = uVar23;
    }
  }
  uVar23 = unaff_r21 + 1;
  iVar25 = (int)uVar23;
  param_4 = (longlong)(iVar25 >> 5) + (ulonglong)(iVar25 < 0 && (uVar23 & 0x1f) != 0);
  lVar11 = 3;
  lVar31 = uVar10 - 0x9c;
  uVar26 = iVar25 + ((iVar25 >> 5) + (uint)(iVar25 < 0 && (uVar23 & 0x1f) != 0)) * -0x20;
  uVar23 = unaff_r23;
  do {
    uVar21 = *(uint *)((int)lVar31 + 4);
    lVar31 = lVar31 + 4;
    *(uint *)lVar31 = uVar21 >> (uVar26 & 0x3f) | (uint)uVar23;
    uVar23 = (ulonglong)((uVar21 & ~(unaff_r27 << (uVar26 & 0x3f))) << (0x20 - uVar26 & 0x3f));
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  param_8 = 3;
code_r0x98014e38:
  iVar25 = 2;
  lVar11 = uVar10 - 0x90;
  lVar31 = (uVar10 - 0x90) + (param_4 & 0x3fffffff) * -4;
  do {
    if (iVar25 < (int)param_4) {
      *(undefined4 *)lVar11 = uVar30;
    }
    else {
      *(undefined4 *)lVar11 = *(undefined4 *)lVar31;
    }
    iVar25 = iVar25 + -1;
    lVar31 = lVar31 + -4;
    lVar11 = lVar11 + -4;
    param_8 = param_8 - 1;
  } while (param_8 != 0);
  uVar13 = 2;
  param_3 = unaff_r23;
LAB_98015008:
  uVar23 = (ulonglong)*(uint *)(unaff_r20 + 8);
  param_8 = (ulonglong)(uint)((int)param_3 << (0x1fU - (int)unaff_r21 & 0x3f)) |
            -(ulonglong)(unaff_r19 != 0) & 0xffffffff80000000 | (ulonglong)uStack_98;
  iVar25 = (int)param_8;
  if (*(uint *)(unaff_r20 + 8) == 0x40) {
    param_2[1] = iStack_94;
  }
  else {
LAB_98015044:
    iVar25 = (int)param_8;
    if ((int)uVar23 != 0x20) {
      return uVar13;
    }
  }
  *param_2 = iVar25;
  return uVar13;
}


/* ==== FUN_980151c8 @ 980151c8 ==== */

ulonglong FUN_980151c8(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  longlong lVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar14;
  int iVar15;
  ushort uVar16;
  ulonglong uVar13;
  uint uVar19;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar22;
  char in_r11;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar23;
  ushort uVar24;
  int iVar25;
  longlong unaff_r19;
  ushort *unaff_r20;
  longlong unaff_r21;
  ulonglong unaff_r22;
  undefined4 uVar26;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar27;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  ulonglong unaff_r29;
  uint unaff_r30;
  ulonglong unaff_r31;
  longlong lVar28;
  
  piVar9 = (int *)param_2;
  uVar6 = ZEXT48(&stack0x00000000);
  if (in_r11 == *(char *)**(undefined4 **)(*(int *)param_8 + 0xbc)) {
    uVar20 = 4;
  }
  else if ((in_r11 == '+') || (in_r11 == '-')) {
    param_5 = param_5 - 1;
    uVar20 = 0xb;
  }
  else if (in_r11 == '0') {
    uVar20 = 1;
  }
  else {
    if ((in_r11 < 'D') || (('E' < in_r11 && ((in_r11 < 'd' || ('e' < in_r11)))))) {
      iVar15 = (int)param_5 + -1;
      goto LAB_98015274;
    }
    uVar20 = 6;
  }
  do {
    while( true ) {
      piVar9 = (int *)param_2;
      iVar23 = (int)param_3;
      pbVar14 = (byte *)param_5;
      uVar17 = (ulonglong)*pbVar14;
      param_5 = param_5 + 1;
      iVar15 = (int)param_5;
      uVar22 = (uint)uVar20;
      if (0xb < (uVar20 & 0xffffffff)) break;
      iVar25 = (uint)(byte)(&DAT_98003e80)[uVar22] * 4 + -0x67feb2cc;
      uVar26 = (undefined4)unaff_r23;
      iVar7 = (int)uVar6;
      uVar11 = uVar6;
      uVar21 = param_1;
      uVar13 = param_4;
      switch(uVar22) {
      case 0:
        if ((uVar20 & 0xffffffff) < 0xb) {
          param_3 = param_1;
        }
        *(int *)(iVar15 + (uint)*pbVar14) = (int)param_8;
        param_7 = param_7 - 1;
        if ((longlong)param_7 < 0) goto LAB_98014d8c;
        lVar27 = (param_7 & 0x3fffffff) * 4 + (uVar6 - 0x94);
        goto LAB_98014d58;
      case 1:
        goto code_r0x98014db0;
      case 2:
        goto code_r0x98014e38;
      case 3:
        uVar22 = (int)unaff_r21 - uVar22;
        lVar27 = param_7 - 4;
        *(uint *)(iVar7 + -0x98) = *(uint *)(iVar7 + -0x98) | 0x80000000;
        do {
          uVar19 = *(uint *)((int)lVar27 + 4);
          *(uint *)(iVar7 + -0xa0) = uVar19 & ~(iVar15 << (uVar22 & 0x3f));
          lVar27 = lVar27 + 4;
          *(uint *)lVar27 = uVar19 >> (uVar22 & 0x3f) | (uint)unaff_r23;
          unaff_r23 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar22 & 0x3f));
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        param_7 = 2;
        uVar20 = uVar6 - 0x90;
        uVar17 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
        iVar25 = 3;
        do {
          if ((int)param_7 < (int)(uint)param_4) {
LAB_98014f34:
            *(undefined4 *)uVar20 = uVar26;
          }
          else {
            *(undefined4 *)uVar20 = *(undefined4 *)uVar17;
          }
          param_7 = param_7 - 1;
          uVar17 = uVar17 - 4;
          uVar20 = uVar20 - 4;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        param_3 = *(uint *)(unaff_r20 + 10) + param_3;
        goto LAB_98015008;
      case 4:
        goto LAB_98014f34;
      case 5:
        goto code_r0x98014fa4;
      case 6:
        goto code_r0x98014fc4;
      case 7:
        goto LAB_98015044;
      case 8:
        goto code_r0x9801500c;
      case 9:
        goto code_r0x9801509c;
      case 0xb:
        unaff_r20 = (ushort *)FUN_9800dc54();
        uVar11 = uVar6 - 0x110;
        *(int *)(int)uVar11 = iVar7;
        unaff_r22 = 0;
        param_1 = uVar6 - 0x90;
        unaff_r19 = 0;
        uVar13 = 0;
        unaff_r30 = 0;
        unaff_r26 = 0;
        unaff_r28 = 0;
        unaff_r23 = param_4;
        unaff_r24 = uVar17;
        unaff_r25 = param_5;
      case 10:
        unaff_r27 = 1;
        unaff_r29 = unaff_r22;
        unaff_r31 = unaff_r22;
code_r0x9801509c:
        uVar20 = unaff_r22;
        param_5 = param_3;
        if ((param_8 & 0xffffffff) == 0) {
          lVar27 = FUN_9800f950();
          *(undefined4 *)lVar27 = 0x16;
          FUN_9800d548();
          return 0;
        }
        for (; (((cVar1 = *(char *)param_5, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
               (cVar1 == '\r')); param_5 = param_5 + 1) {
        }
        unaff_r21 = 0x8000;
        uVar6 = uVar11;
        param_4 = uVar13;
        unaff_r22 = uVar20;
      }
    }
  } while (uVar22 != 10);
LAB_98015274:
  *piVar9 = iVar15;
  uVar24 = (ushort)unaff_r22;
  uVar20 = unaff_r22;
  uVar17 = unaff_r22;
  uVar11 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    iVar15 = (int)uVar6;
    if (0x18 < (param_4 & 0xffffffff)) {
      if ('\x04' < *(char *)(iVar15 + 0x97)) {
        *(char *)(iVar15 + 0x97) = *(char *)(iVar15 + 0x97) + '\x01';
      }
      param_4 = 0x18;
      param_1 = param_1 - 1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      lVar27 = param_1 - 1;
      cVar1 = *(char *)lVar27;
      while (cVar1 == '\0') {
        lVar27 = lVar27 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *(char *)lVar27;
      }
      FUN_980165c0(uVar6 + 0x80,param_4,uVar6 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar21 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar21 = uVar21 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar21 = uVar21 - unaff_r24;
      }
      iVar23 = (int)uVar21;
      if (iVar23 < 0x1451) {
        if (iVar23 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar27 = -0x67fe4028;
          if (iVar23 != 0) {
            if (iVar23 < 0) {
              uVar21 = -uVar21;
              lVar27 = -0x67fe3ec8;
            }
            iVar23 = (int)uVar21;
            *(ushort *)(iVar15 + 0x6a) = -(ushort)(unaff_r23 != 0) & *(ushort *)(iVar15 + 0x6a);
joined_r0x980155ac:
            do {
              if (iVar23 == 0) break;
              uVar20 = uVar21 & 7;
              lVar27 = lVar27 + 0x54;
              iVar23 = (int)uVar21 >> 3;
              uVar21 = (ulonglong)iVar23;
              if (uVar20 != 0) {
                uVar20 = uVar20 * 0xc + lVar27;
                if (0x7fff < *(ushort *)((int)uVar20 + 10)) {
                  FUN_9800d650(uVar6 + 0x70,uVar20,0xc);
                  uVar20 = uVar6 + 0x70;
                  *(int *)(iVar15 + 0x76) = *(int *)(iVar15 + 0x76) + -1;
                }
                uVar2 = *(ushort *)(iVar15 + 0x60);
                uVar26 = (undefined4)unaff_r22;
                *(undefined4 *)(iVar15 + 0x58) = uVar26;
                *(undefined4 *)(iVar15 + 0x54) = uVar26;
                *(undefined4 *)(iVar15 + 0x50) = uVar26;
                puVar10 = (uint *)uVar20;
                uVar3 = *(ushort *)puVar10;
                uVar16 = (uVar2 & 0x7fff) + (uVar3 & 0x7fff);
                if ((((uVar2 & 0x7fff) < 0x7fff) && ((uVar3 & 0x7fff) < 0x7fff)) &&
                   (uVar16 < 0xbffe)) {
                  if (0x3fbf < uVar16) {
                    if ((((uVar2 & 0x7fff) == 0) &&
                        (uVar16 = uVar16 + 1, (*(uint *)(iVar15 + 0x60) & 0x7fffffff) == 0)) &&
                       ((*(int *)(iVar15 + 100) == 0 && (*(int *)(iVar15 + 0x68) == 0)))) {
                      *(ushort *)(iVar15 + 0x60) = uVar24;
                      goto joined_r0x980155ac;
                    }
                    if ((((uVar3 & 0x7fff) != 0) ||
                        (uVar16 = uVar16 + 1, (*puVar10 & 0x7fffffff) != 0)) ||
                       ((puVar10[1] != 0 || (puVar10[2] != 0)))) {
                      lVar18 = uVar6 + 0x56;
                      lVar8 = 5;
                      uVar17 = unaff_r22;
                      do {
                        if (0 < (int)lVar8) {
                          lVar12 = uVar6 + 0x6a + (uVar17 & 0x7fffffff) * -2;
                          lVar28 = lVar8;
                          uVar11 = uVar20;
                          do {
                            uVar11 = uVar11 + 2;
                            psVar4 = (short *)lVar18;
                            uVar22 = (uint)*(ushort *)uVar11 * (uint)*(ushort *)lVar12;
                            uVar19 = *(uint *)(psVar4 + 1) + uVar22;
                            if ((uVar19 < *(uint *)(psVar4 + 1)) ||
                               (uVar13 = unaff_r22, uVar19 < uVar22)) {
                              uVar13 = 1;
                            }
                            *(uint *)(psVar4 + 1) = uVar19;
                            if ((int)uVar13 != 0) {
                              *psVar4 = *psVar4 + 1;
                            }
                            lVar12 = lVar12 + -2;
                            lVar28 = lVar28 + -1;
                          } while (lVar28 != 0);
                        }
                        lVar8 = lVar8 + -1;
                        lVar18 = lVar18 + -2;
                        uVar17 = uVar17 + 1;
                      } while (0 < lVar8);
                      uVar20 = (ulonglong)*(uint *)(iVar15 + 0x58);
                      uVar16 = uVar16 + 0xc002;
                      while ((0 < (short)uVar16 && ((*(uint *)(iVar15 + 0x50) & 0x80000000) == 0)))
                      {
                        uVar22 = *(uint *)(iVar15 + 0x54);
                        uVar19 = (uint)uVar20;
                        uVar20 = (uVar20 & 0x7fffffff) << 1;
                        *(int *)(iVar15 + 0x58) = (int)uVar20;
                        uVar16 = uVar16 - 1;
                        *(uint *)(iVar15 + 0x54) = uVar22 << 1 | uVar19 >> 0x1f;
                        *(uint *)(iVar15 + 0x50) = *(uint *)(iVar15 + 0x50) << 1 | uVar22 >> 0x1f;
                      }
                      if (((short)uVar16 < 1) && (uVar16 = uVar16 - 1, (short)uVar16 < 0)) {
                        uVar17 = (ulonglong)*(uint *)(iVar15 + 0x50);
                        uVar13 = (ulonglong)*(uint *)(iVar15 + 0x54);
                        uVar11 = unaff_r22;
                        do {
                          if ((*(ushort *)(iVar15 + 0x5a) & 1) != 0) {
                            uVar11 = uVar11 + 1;
                          }
                          uVar16 = uVar16 + 1;
                          uVar5 = uVar17 & 1;
                          uVar20 = uVar20 >> 1 | (uVar13 & 1) << 0x1f;
                          uVar17 = uVar17 >> 1;
                          *(int *)(iVar15 + 0x58) = (int)uVar20;
                          uVar13 = uVar13 >> 1 | uVar5 << 0x1f;
                        } while ((short)uVar16 < 0);
                        *(int *)(iVar15 + 0x54) = (int)uVar13;
                        *(int *)(iVar15 + 0x50) = (int)uVar17;
                        if ((int)uVar11 != 0) {
                          *(ushort *)(iVar15 + 0x5a) = *(ushort *)(iVar15 + 0x5a) | 1;
                          uVar20 = (ulonglong)*(uint *)(iVar15 + 0x58);
                        }
                      }
                      if ((0x8000 < *(ushort *)(iVar15 + 0x5a)) || ((uVar20 & 0x1ffff) == 0x18000))
                      {
                        if (*(int *)(iVar15 + 0x56) == -1) {
                          *(undefined4 *)(iVar15 + 0x56) = uVar26;
                          if (*(int *)(iVar15 + 0x52) == -1) {
                            *(undefined4 *)(iVar15 + 0x52) = uVar26;
                            if (*(short *)(iVar15 + 0x50) == -1) {
                              *(short *)(iVar15 + 0x50) = (short)unaff_r21;
                              uVar16 = uVar16 + 1;
                            }
                            else {
                              *(short *)(iVar15 + 0x50) = *(short *)(iVar15 + 0x50) + 1;
                            }
                          }
                          else {
                            *(int *)(iVar15 + 0x52) = *(int *)(iVar15 + 0x52) + 1;
                          }
                        }
                        else {
                          *(int *)(iVar15 + 0x56) = *(int *)(iVar15 + 0x56) + 1;
                        }
                      }
                      if (0x7ffe < uVar16) goto LAB_98015904;
                      *(undefined2 *)(iVar15 + 0x6a) = *(undefined2 *)(iVar15 + 0x58);
                      *(undefined4 *)(iVar15 + 0x66) = *(undefined4 *)(iVar15 + 0x54);
                      *(undefined4 *)(iVar15 + 0x62) = *(undefined4 *)(iVar15 + 0x50);
                      *(ushort *)(iVar15 + 0x60) = (uVar2 ^ uVar3) & 0x8000 | uVar16;
                      goto joined_r0x980155ac;
                    }
                  }
                  *(undefined4 *)(iVar15 + 0x60) = uVar26;
                }
                else {
LAB_98015904:
                  *(undefined4 *)(iVar15 + 0x60) = 0xffff8000;
                  if (((uVar2 ^ uVar3) & 0x8000) == 0) {
                    *(undefined4 *)(iVar15 + 0x60) = 0x7fff8000;
                  }
                }
                *(undefined4 *)(iVar15 + 0x68) = uVar26;
                *(undefined4 *)(iVar15 + 100) = uVar26;
              }
            } while( true );
          }
          uVar24 = *(ushort *)(iVar15 + 0x6a);
          uVar20 = (ulonglong)*(uint *)(iVar15 + 0x66);
          uVar17 = (ulonglong)*(uint *)(iVar15 + 0x62);
          uVar11 = (ulonglong)*(ushort *)(iVar15 + 0x60);
        }
      }
      else {
        uVar17 = 0xffffffff80000000;
        uVar11 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar24;
  *(int *)(unaff_r20 + 3) = (int)uVar20;
  *(int *)(unaff_r20 + 1) = (int)uVar17;
  *unaff_r20 = (ushort)uVar11 | (ushort)unaff_r19;
  return unaff_r22;
code_r0x98014fa4:
  while( true ) {
    *(int *)(iVar7 + -0xa0) = (int)unaff_r31;
    param_8 = param_8 + 4;
    *(uint *)param_8 = (uint)uVar17 >> (uVar22 & 0x3f) | (uint)param_7;
    param_7 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << ((uint)param_4 & 0x3f));
    iVar25 = iVar25 + -1;
    if (iVar25 == 0) break;
    uVar17 = (ulonglong)((uint *)param_8)[1];
    unaff_r31 = uVar17 & param_5;
  }
  param_8 = 3;
code_r0x98014fc4:
  iVar15 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_1 & 0x3fffffff) * -4;
  do {
    if (iVar15 < (int)param_1) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar15 = iVar15 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
    uVar21 = unaff_r23;
  } while (param_8 != 0);
  goto LAB_98015008;
  while( true ) {
    uVar22 = *(uint *)((int)lVar27 + -4);
    uVar19 = uVar22 + 1;
    if ((uVar19 < uVar22) || (param_3 = unaff_r23, uVar19 == 0)) {
      param_3 = param_1;
    }
    param_7 = param_7 - 1;
    lVar27 = lVar27 + -4;
    *(uint *)lVar27 = uVar19;
    if ((longlong)param_7 < 0) break;
LAB_98014d58:
    if ((int)param_3 == 0) break;
  }
LAB_98014d8c:
  uVar20 = unaff_r31 + 1;
  *(uint *)(unaff_r28 + (int)unaff_r29) =
       (int)unaff_r22 << (unaff_r30 & 0x3f) & *(uint *)(unaff_r28 + (int)unaff_r29);
  if ((int)uVar20 < 3) {
    param_7 = (uVar20 & 0x3fffffff) << 2;
    param_8 = uVar6 - 0x98;
code_r0x98014db0:
    uVar20 = 3 - uVar20;
    lVar27 = param_7 + param_8 + -4;
    uVar17 = uVar20 & 0xffffffff;
    while (uVar17 != 0) {
      lVar27 = lVar27 + 4;
      *(undefined4 *)lVar27 = uVar26;
      uVar20 = uVar20 - 1;
      uVar17 = uVar20;
    }
  }
  uVar20 = unaff_r21 + 1;
  iVar15 = (int)uVar20;
  param_4 = (longlong)(iVar15 >> 5) + (ulonglong)(iVar15 < 0 && (uVar20 & 0x1f) != 0);
  lVar8 = 3;
  lVar27 = uVar6 - 0x9c;
  uVar22 = iVar15 + ((iVar15 >> 5) + (uint)(iVar15 < 0 && (uVar20 & 0x1f) != 0)) * -0x20;
  uVar20 = unaff_r23;
  do {
    uVar19 = *(uint *)((int)lVar27 + 4);
    *(uint *)(iVar7 + -0xa0) = uVar19 & ~(unaff_r27 << (uVar22 & 0x3f));
    lVar27 = lVar27 + 4;
    *(uint *)lVar27 = uVar19 >> (uVar22 & 0x3f) | (uint)uVar20;
    uVar20 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar22 & 0x3f));
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_8 = 3;
code_r0x98014e38:
  iVar15 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
  do {
    if (iVar15 < (int)param_4) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar15 = iVar15 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
  } while (param_8 != 0);
  uVar21 = 2;
  param_3 = unaff_r23;
LAB_98015008:
  iVar23 = (int)param_3;
  param_8 = 0x1f - unaff_r21;
code_r0x9801500c:
  uVar20 = (ulonglong)*(uint *)(unaff_r20 + 8);
  param_8 = (ulonglong)(uint)(iVar23 << ((uint)param_8 & 0x3f)) |
            -(ulonglong)(unaff_r19 != 0) & 0xffffffff80000000 | (ulonglong)*(uint *)(iVar7 + -0x98);
  iVar15 = (int)param_8;
  if (*(uint *)(unaff_r20 + 8) == 0x40) {
    piVar9[1] = *(int *)(iVar7 + -0x94);
  }
  else {
LAB_98015044:
    iVar15 = (int)param_8;
    if ((int)uVar20 != 0x20) {
      return uVar21;
    }
  }
  *piVar9 = iVar15;
  return uVar21;
}


/* ==== FUN_9801524c @ 9801524c ==== */

ulonglong FUN_9801524c(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  longlong lVar8;
  int *piVar10;
  ulonglong uVar9;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar15;
  ushort uVar16;
  ulonglong uVar14;
  uint uVar18;
  longlong lVar17;
  int iVar20;
  uint uVar21;
  char in_r11;
  ulonglong uVar19;
  int iVar22;
  ushort uVar23;
  int iVar24;
  longlong unaff_r19;
  ushort *unaff_r20;
  longlong unaff_r21;
  ulonglong unaff_r22;
  undefined4 uVar25;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar26;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  ulonglong unaff_r29;
  uint unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar27;
  longlong lVar28;
  
  piVar10 = (int *)param_2;
  iVar20 = (int)param_3;
  uVar6 = ZEXT48(&stack0x00000000);
  if (in_r11 == *(char *)**(undefined4 **)(*(int *)param_8 + 0xbc)) {
    uVar9 = 5;
  }
  else {
    if (in_r11 != '0') goto LAB_98015274;
    uVar9 = 1;
  }
  do {
    while( true ) {
      piVar10 = (int *)param_2;
      iVar22 = (int)param_3;
      pbVar15 = (byte *)param_5;
      uVar27 = (ulonglong)*pbVar15;
      param_5 = param_5 + 1;
      iVar20 = (int)param_5;
      uVar21 = (uint)uVar9;
      if (0xb < (uVar9 & 0xffffffff)) break;
      iVar24 = (uint)(byte)(&DAT_98003e80)[uVar21] * 4 + -0x67feb2cc;
      uVar25 = (undefined4)unaff_r23;
      iVar7 = (int)uVar6;
      uVar12 = uVar6;
      uVar19 = param_1;
      uVar14 = param_4;
      switch(uVar21) {
      case 0:
        if ((uVar9 & 0xffffffff) < 0xb) {
          param_3 = param_1;
        }
        *(int *)(iVar20 + (uint)*pbVar15) = (int)param_8;
        param_7 = param_7 - 1;
        if ((longlong)param_7 < 0) goto LAB_98014d8c;
        lVar26 = (param_7 & 0x3fffffff) * 4 + (uVar6 - 0x94);
        goto LAB_98014d58;
      case 1:
        goto code_r0x98014db0;
      case 2:
        goto code_r0x98014e38;
      case 3:
        uVar21 = (int)unaff_r21 - uVar21;
        lVar26 = param_7 - 4;
        *(uint *)(iVar7 + -0x98) = *(uint *)(iVar7 + -0x98) | 0x80000000;
        do {
          uVar18 = *(uint *)((int)lVar26 + 4);
          *(uint *)(iVar7 + -0xa0) = uVar18 & ~(iVar20 << (uVar21 & 0x3f));
          lVar26 = lVar26 + 4;
          *(uint *)lVar26 = uVar18 >> (uVar21 & 0x3f) | (uint)unaff_r23;
          unaff_r23 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar21 & 0x3f));
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        param_7 = 2;
        uVar9 = uVar6 - 0x90;
        uVar27 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
        iVar24 = 3;
        do {
          if ((int)param_7 < (int)(uint)param_4) {
LAB_98014f34:
            *(undefined4 *)uVar9 = uVar25;
          }
          else {
            *(undefined4 *)uVar9 = *(undefined4 *)uVar27;
          }
          param_7 = param_7 - 1;
          uVar27 = uVar27 - 4;
          uVar9 = uVar9 - 4;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        param_3 = *(uint *)(unaff_r20 + 10) + param_3;
        goto LAB_98015008;
      case 4:
        goto LAB_98014f34;
      case 5:
        goto code_r0x98014fa4;
      case 6:
        goto code_r0x98014fc4;
      case 7:
        goto LAB_98015044;
      case 8:
        goto code_r0x9801500c;
      case 9:
        goto code_r0x9801509c;
      case 0xb:
        unaff_r20 = (ushort *)FUN_9800dc54();
        uVar12 = uVar6 - 0x110;
        *(int *)(int)uVar12 = iVar7;
        unaff_r22 = 0;
        param_1 = uVar6 - 0x90;
        unaff_r19 = 0;
        uVar14 = 0;
        unaff_r30 = 0;
        unaff_r26 = 0;
        unaff_r28 = 0;
        unaff_r23 = param_4;
        unaff_r24 = uVar27;
        unaff_r25 = param_5;
      case 10:
        unaff_r27 = 1;
        unaff_r29 = unaff_r22;
        unaff_r31 = unaff_r22;
code_r0x9801509c:
        uVar9 = unaff_r22;
        param_5 = param_3;
        if ((param_8 & 0xffffffff) == 0) {
          lVar26 = FUN_9800f950();
          *(undefined4 *)lVar26 = 0x16;
          FUN_9800d548();
          return 0;
        }
        for (; (((cVar1 = *(char *)param_5, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
               (cVar1 == '\r')); param_5 = param_5 + 1) {
        }
        unaff_r21 = 0x8000;
        uVar6 = uVar12;
        param_4 = uVar14;
        unaff_r22 = uVar9;
      }
    }
  } while (uVar21 != 10);
LAB_98015274:
  *piVar10 = iVar20;
  uVar23 = (ushort)unaff_r22;
  uVar9 = unaff_r22;
  uVar27 = unaff_r22;
  uVar12 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    iVar20 = (int)uVar6;
    if (0x18 < (param_4 & 0xffffffff)) {
      if ('\x04' < *(char *)(iVar20 + 0x97)) {
        *(char *)(iVar20 + 0x97) = *(char *)(iVar20 + 0x97) + '\x01';
      }
      param_4 = 0x18;
      param_1 = param_1 - 1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      lVar26 = param_1 - 1;
      cVar1 = *(char *)lVar26;
      while (cVar1 == '\0') {
        lVar26 = lVar26 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *(char *)lVar26;
      }
      FUN_980165c0(uVar6 + 0x80,param_4,uVar6 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar19 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar19 = uVar19 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar19 = uVar19 - unaff_r24;
      }
      iVar22 = (int)uVar19;
      if (iVar22 < 0x1451) {
        if (iVar22 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar26 = -0x67fe4028;
          if (iVar22 != 0) {
            if (iVar22 < 0) {
              uVar19 = -uVar19;
              lVar26 = -0x67fe3ec8;
            }
            iVar22 = (int)uVar19;
            *(ushort *)(iVar20 + 0x6a) = -(ushort)(unaff_r23 != 0) & *(ushort *)(iVar20 + 0x6a);
joined_r0x980155ac:
            do {
              if (iVar22 == 0) break;
              uVar9 = uVar19 & 7;
              lVar26 = lVar26 + 0x54;
              iVar22 = (int)uVar19 >> 3;
              uVar19 = (ulonglong)iVar22;
              if (uVar9 != 0) {
                uVar9 = uVar9 * 0xc + lVar26;
                if (0x7fff < *(ushort *)((int)uVar9 + 10)) {
                  FUN_9800d650(uVar6 + 0x70,uVar9,0xc);
                  uVar9 = uVar6 + 0x70;
                  *(int *)(iVar20 + 0x76) = *(int *)(iVar20 + 0x76) + -1;
                }
                uVar2 = *(ushort *)(iVar20 + 0x60);
                uVar25 = (undefined4)unaff_r22;
                *(undefined4 *)(iVar20 + 0x58) = uVar25;
                *(undefined4 *)(iVar20 + 0x54) = uVar25;
                *(undefined4 *)(iVar20 + 0x50) = uVar25;
                puVar11 = (uint *)uVar9;
                uVar3 = *(ushort *)puVar11;
                uVar16 = (uVar2 & 0x7fff) + (uVar3 & 0x7fff);
                if ((((uVar2 & 0x7fff) < 0x7fff) && ((uVar3 & 0x7fff) < 0x7fff)) &&
                   (uVar16 < 0xbffe)) {
                  if (0x3fbf < uVar16) {
                    if (((((uVar2 & 0x7fff) == 0) &&
                         (uVar16 = uVar16 + 1, (*(uint *)(iVar20 + 0x60) & 0x7fffffff) == 0)) &&
                        (*(int *)(iVar20 + 100) == 0)) && (*(int *)(iVar20 + 0x68) == 0)) {
                      *(ushort *)(iVar20 + 0x60) = uVar23;
                      goto joined_r0x980155ac;
                    }
                    if ((((uVar3 & 0x7fff) != 0) ||
                        (uVar16 = uVar16 + 1, (*puVar11 & 0x7fffffff) != 0)) ||
                       ((puVar11[1] != 0 || (puVar11[2] != 0)))) {
                      lVar17 = uVar6 + 0x56;
                      lVar8 = 5;
                      uVar27 = unaff_r22;
                      do {
                        if (0 < (int)lVar8) {
                          lVar13 = uVar6 + 0x6a + (uVar27 & 0x7fffffff) * -2;
                          lVar28 = lVar8;
                          uVar12 = uVar9;
                          do {
                            uVar12 = uVar12 + 2;
                            psVar4 = (short *)lVar17;
                            uVar21 = (uint)*(ushort *)uVar12 * (uint)*(ushort *)lVar13;
                            uVar18 = *(uint *)(psVar4 + 1) + uVar21;
                            if ((uVar18 < *(uint *)(psVar4 + 1)) ||
                               (uVar14 = unaff_r22, uVar18 < uVar21)) {
                              uVar14 = 1;
                            }
                            *(uint *)(psVar4 + 1) = uVar18;
                            if ((int)uVar14 != 0) {
                              *psVar4 = *psVar4 + 1;
                            }
                            lVar13 = lVar13 + -2;
                            lVar28 = lVar28 + -1;
                          } while (lVar28 != 0);
                        }
                        lVar8 = lVar8 + -1;
                        lVar17 = lVar17 + -2;
                        uVar27 = uVar27 + 1;
                      } while (0 < lVar8);
                      uVar9 = (ulonglong)*(uint *)(iVar20 + 0x58);
                      uVar16 = uVar16 + 0xc002;
                      while ((0 < (short)uVar16 && ((*(uint *)(iVar20 + 0x50) & 0x80000000) == 0)))
                      {
                        uVar21 = *(uint *)(iVar20 + 0x54);
                        uVar18 = (uint)uVar9;
                        uVar9 = (uVar9 & 0x7fffffff) << 1;
                        *(int *)(iVar20 + 0x58) = (int)uVar9;
                        uVar16 = uVar16 - 1;
                        *(uint *)(iVar20 + 0x54) = uVar21 << 1 | uVar18 >> 0x1f;
                        *(uint *)(iVar20 + 0x50) = *(uint *)(iVar20 + 0x50) << 1 | uVar21 >> 0x1f;
                      }
                      if (((short)uVar16 < 1) && (uVar16 = uVar16 - 1, (short)uVar16 < 0)) {
                        uVar27 = (ulonglong)*(uint *)(iVar20 + 0x50);
                        uVar14 = (ulonglong)*(uint *)(iVar20 + 0x54);
                        uVar12 = unaff_r22;
                        do {
                          if ((*(ushort *)(iVar20 + 0x5a) & 1) != 0) {
                            uVar12 = uVar12 + 1;
                          }
                          uVar16 = uVar16 + 1;
                          uVar5 = uVar27 & 1;
                          uVar9 = uVar9 >> 1 | (uVar14 & 1) << 0x1f;
                          uVar27 = uVar27 >> 1;
                          *(int *)(iVar20 + 0x58) = (int)uVar9;
                          uVar14 = uVar14 >> 1 | uVar5 << 0x1f;
                        } while ((short)uVar16 < 0);
                        *(int *)(iVar20 + 0x54) = (int)uVar14;
                        *(int *)(iVar20 + 0x50) = (int)uVar27;
                        if ((int)uVar12 != 0) {
                          *(ushort *)(iVar20 + 0x5a) = *(ushort *)(iVar20 + 0x5a) | 1;
                          uVar9 = (ulonglong)*(uint *)(iVar20 + 0x58);
                        }
                      }
                      if ((0x8000 < *(ushort *)(iVar20 + 0x5a)) || ((uVar9 & 0x1ffff) == 0x18000)) {
                        if (*(int *)(iVar20 + 0x56) == -1) {
                          *(undefined4 *)(iVar20 + 0x56) = uVar25;
                          if (*(int *)(iVar20 + 0x52) == -1) {
                            *(undefined4 *)(iVar20 + 0x52) = uVar25;
                            if (*(short *)(iVar20 + 0x50) == -1) {
                              *(short *)(iVar20 + 0x50) = (short)unaff_r21;
                              uVar16 = uVar16 + 1;
                            }
                            else {
                              *(short *)(iVar20 + 0x50) = *(short *)(iVar20 + 0x50) + 1;
                            }
                          }
                          else {
                            *(int *)(iVar20 + 0x52) = *(int *)(iVar20 + 0x52) + 1;
                          }
                        }
                        else {
                          *(int *)(iVar20 + 0x56) = *(int *)(iVar20 + 0x56) + 1;
                        }
                      }
                      if (0x7ffe < uVar16) goto LAB_98015904;
                      *(undefined2 *)(iVar20 + 0x6a) = *(undefined2 *)(iVar20 + 0x58);
                      *(undefined4 *)(iVar20 + 0x66) = *(undefined4 *)(iVar20 + 0x54);
                      *(undefined4 *)(iVar20 + 0x62) = *(undefined4 *)(iVar20 + 0x50);
                      *(ushort *)(iVar20 + 0x60) = (uVar2 ^ uVar3) & 0x8000 | uVar16;
                      goto joined_r0x980155ac;
                    }
                  }
                  *(undefined4 *)(iVar20 + 0x60) = uVar25;
                }
                else {
LAB_98015904:
                  *(undefined4 *)(iVar20 + 0x60) = 0xffff8000;
                  if (((uVar2 ^ uVar3) & 0x8000) == 0) {
                    *(undefined4 *)(iVar20 + 0x60) = 0x7fff8000;
                  }
                }
                *(undefined4 *)(iVar20 + 0x68) = uVar25;
                *(undefined4 *)(iVar20 + 100) = uVar25;
              }
            } while( true );
          }
          uVar23 = *(ushort *)(iVar20 + 0x6a);
          uVar9 = (ulonglong)*(uint *)(iVar20 + 0x66);
          uVar27 = (ulonglong)*(uint *)(iVar20 + 0x62);
          uVar12 = (ulonglong)*(ushort *)(iVar20 + 0x60);
        }
      }
      else {
        uVar27 = 0xffffffff80000000;
        uVar12 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar23;
  *(int *)(unaff_r20 + 3) = (int)uVar9;
  *(int *)(unaff_r20 + 1) = (int)uVar27;
  *unaff_r20 = (ushort)uVar12 | (ushort)unaff_r19;
  return unaff_r22;
code_r0x98014fa4:
  while( true ) {
    *(int *)(iVar7 + -0xa0) = (int)unaff_r31;
    param_8 = param_8 + 4;
    *(uint *)param_8 = (uint)uVar27 >> (uVar21 & 0x3f) | (uint)param_7;
    param_7 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << ((uint)param_4 & 0x3f));
    iVar24 = iVar24 + -1;
    if (iVar24 == 0) break;
    uVar27 = (ulonglong)((uint *)param_8)[1];
    unaff_r31 = uVar27 & param_5;
  }
  param_8 = 3;
code_r0x98014fc4:
  iVar20 = 2;
  lVar8 = uVar6 - 0x90;
  lVar26 = (uVar6 - 0x90) + (param_1 & 0x3fffffff) * -4;
  do {
    if (iVar20 < (int)param_1) {
      *(undefined4 *)lVar8 = uVar25;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar26;
    }
    iVar20 = iVar20 + -1;
    lVar26 = lVar26 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
    uVar19 = unaff_r23;
  } while (param_8 != 0);
  goto LAB_98015008;
  while( true ) {
    uVar21 = *(uint *)((int)lVar26 + -4);
    uVar18 = uVar21 + 1;
    if ((uVar18 < uVar21) || (param_3 = unaff_r23, uVar18 == 0)) {
      param_3 = param_1;
    }
    param_7 = param_7 - 1;
    lVar26 = lVar26 + -4;
    *(uint *)lVar26 = uVar18;
    if ((longlong)param_7 < 0) break;
LAB_98014d58:
    if ((int)param_3 == 0) break;
  }
LAB_98014d8c:
  uVar9 = unaff_r31 + 1;
  *(uint *)(unaff_r28 + (int)unaff_r29) =
       (int)unaff_r22 << (unaff_r30 & 0x3f) & *(uint *)(unaff_r28 + (int)unaff_r29);
  if ((int)uVar9 < 3) {
    param_7 = (uVar9 & 0x3fffffff) << 2;
    param_8 = uVar6 - 0x98;
code_r0x98014db0:
    uVar9 = 3 - uVar9;
    lVar26 = param_7 + param_8 + -4;
    uVar27 = uVar9 & 0xffffffff;
    while (uVar27 != 0) {
      lVar26 = lVar26 + 4;
      *(undefined4 *)lVar26 = uVar25;
      uVar9 = uVar9 - 1;
      uVar27 = uVar9;
    }
  }
  uVar9 = unaff_r21 + 1;
  iVar20 = (int)uVar9;
  param_4 = (longlong)(iVar20 >> 5) + (ulonglong)(iVar20 < 0 && (uVar9 & 0x1f) != 0);
  lVar8 = 3;
  lVar26 = uVar6 - 0x9c;
  uVar21 = iVar20 + ((iVar20 >> 5) + (uint)(iVar20 < 0 && (uVar9 & 0x1f) != 0)) * -0x20;
  uVar9 = unaff_r23;
  do {
    uVar18 = *(uint *)((int)lVar26 + 4);
    *(uint *)(iVar7 + -0xa0) = uVar18 & ~(unaff_r27 << (uVar21 & 0x3f));
    lVar26 = lVar26 + 4;
    *(uint *)lVar26 = uVar18 >> (uVar21 & 0x3f) | (uint)uVar9;
    uVar9 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar21 & 0x3f));
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_8 = 3;
code_r0x98014e38:
  iVar20 = 2;
  lVar8 = uVar6 - 0x90;
  lVar26 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
  do {
    if (iVar20 < (int)param_4) {
      *(undefined4 *)lVar8 = uVar25;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar26;
    }
    iVar20 = iVar20 + -1;
    lVar26 = lVar26 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
  } while (param_8 != 0);
  uVar19 = 2;
  param_3 = unaff_r23;
LAB_98015008:
  iVar22 = (int)param_3;
  param_8 = 0x1f - unaff_r21;
code_r0x9801500c:
  uVar9 = (ulonglong)*(uint *)(unaff_r20 + 8);
  param_8 = (ulonglong)(uint)(iVar22 << ((uint)param_8 & 0x3f)) |
            -(ulonglong)(unaff_r19 != 0) & 0xffffffff80000000 | (ulonglong)*(uint *)(iVar7 + -0x98);
  iVar20 = (int)param_8;
  if (*(uint *)(unaff_r20 + 8) == 0x40) {
    piVar10[1] = *(int *)(iVar7 + -0x94);
  }
  else {
LAB_98015044:
    iVar20 = (int)param_8;
    if ((int)uVar9 != 0x20) {
      return uVar19;
    }
  }
  *piVar10 = iVar20;
  return uVar19;
}


/* ==== FUN_980152c8 @ 980152c8 ==== */

ulonglong FUN_980152c8(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  longlong lVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar14;
  int iVar15;
  ushort uVar16;
  ulonglong uVar13;
  uint uVar19;
  ulonglong uVar17;
  longlong lVar18;
  int iVar22;
  uint uVar23;
  ulonglong uVar20;
  char in_r11;
  ulonglong uVar21;
  ushort uVar24;
  int iVar25;
  longlong unaff_r19;
  ushort *unaff_r20;
  longlong unaff_r21;
  ulonglong unaff_r22;
  undefined4 uVar26;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar27;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  ulonglong unaff_r29;
  uint unaff_r30;
  ulonglong unaff_r31;
  longlong lVar28;
  
  piVar9 = (int *)param_2;
  uVar6 = ZEXT48(&stack0x00000000);
  do {
    if ('9' < in_r11) break;
    if ((param_4 & 0xffffffff) < 0x19) {
      param_4 = param_4 + 1;
      *(char *)param_1 = in_r11 + -0x30;
      param_1 = param_1 + 1;
    }
    else {
      unaff_r31 = unaff_r31 + 1;
    }
    in_r11 = *(char *)param_5;
    param_5 = param_5 + 1;
  } while ('/' < in_r11);
  if (in_r11 == *(char *)**(undefined4 **)(*(int *)param_8 + 0xbc)) {
    uVar20 = 4;
  }
  else if ((in_r11 == '+') || (in_r11 == '-')) {
    param_5 = param_5 - 1;
    uVar20 = 0xb;
  }
  else {
    if ((in_r11 < 'D') || (('E' < in_r11 && ((in_r11 < 'd' || ('e' < in_r11)))))) {
      iVar15 = (int)param_5 + -1;
      goto LAB_98015274;
    }
    uVar20 = 6;
  }
  do {
    while( true ) {
      piVar9 = (int *)param_2;
      iVar22 = (int)param_3;
      pbVar14 = (byte *)param_5;
      uVar17 = (ulonglong)*pbVar14;
      param_5 = param_5 + 1;
      iVar15 = (int)param_5;
      uVar23 = (uint)uVar20;
      if (0xb < (uVar20 & 0xffffffff)) break;
      iVar25 = (uint)(byte)(&DAT_98003e80)[uVar23] * 4 + -0x67feb2cc;
      uVar26 = (undefined4)unaff_r23;
      iVar7 = (int)uVar6;
      uVar11 = uVar6;
      uVar21 = param_1;
      uVar13 = param_4;
      switch(uVar23) {
      case 0:
        if ((uVar20 & 0xffffffff) < 0xb) {
          param_3 = param_1;
        }
        *(int *)(iVar15 + (uint)*pbVar14) = (int)param_8;
        param_7 = param_7 - 1;
        if ((longlong)param_7 < 0) goto LAB_98014d8c;
        lVar27 = (param_7 & 0x3fffffff) * 4 + (uVar6 - 0x94);
        goto LAB_98014d58;
      case 1:
        goto code_r0x98014db0;
      case 2:
        goto code_r0x98014e38;
      case 3:
        uVar23 = (int)unaff_r21 - uVar23;
        lVar27 = param_7 - 4;
        *(uint *)(iVar7 + -0x98) = *(uint *)(iVar7 + -0x98) | 0x80000000;
        do {
          uVar19 = *(uint *)((int)lVar27 + 4);
          *(uint *)(iVar7 + -0xa0) = uVar19 & ~(iVar15 << (uVar23 & 0x3f));
          lVar27 = lVar27 + 4;
          *(uint *)lVar27 = uVar19 >> (uVar23 & 0x3f) | (uint)unaff_r23;
          unaff_r23 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar23 & 0x3f));
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        param_7 = 2;
        uVar20 = uVar6 - 0x90;
        uVar17 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
        iVar25 = 3;
        do {
          if ((int)param_7 < (int)(uint)param_4) {
LAB_98014f34:
            *(undefined4 *)uVar20 = uVar26;
          }
          else {
            *(undefined4 *)uVar20 = *(undefined4 *)uVar17;
          }
          param_7 = param_7 - 1;
          uVar17 = uVar17 - 4;
          uVar20 = uVar20 - 4;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        param_3 = *(uint *)(unaff_r20 + 10) + param_3;
        goto LAB_98015008;
      case 4:
        goto LAB_98014f34;
      case 5:
        goto code_r0x98014fa4;
      case 6:
        goto code_r0x98014fc4;
      case 7:
        goto LAB_98015044;
      case 8:
        goto code_r0x9801500c;
      case 9:
        goto code_r0x9801509c;
      case 0xb:
        unaff_r20 = (ushort *)FUN_9800dc54();
        uVar11 = uVar6 - 0x110;
        *(int *)(int)uVar11 = iVar7;
        unaff_r22 = 0;
        param_1 = uVar6 - 0x90;
        unaff_r19 = 0;
        uVar13 = 0;
        unaff_r30 = 0;
        unaff_r26 = 0;
        unaff_r28 = 0;
        unaff_r23 = param_4;
        unaff_r24 = uVar17;
        unaff_r25 = param_5;
      case 10:
        unaff_r27 = 1;
        unaff_r29 = unaff_r22;
        unaff_r31 = unaff_r22;
code_r0x9801509c:
        uVar20 = unaff_r22;
        param_5 = param_3;
        if ((param_8 & 0xffffffff) == 0) {
          lVar27 = FUN_9800f950();
          *(undefined4 *)lVar27 = 0x16;
          FUN_9800d548();
          return 0;
        }
        for (; (((cVar1 = *(char *)param_5, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
               (cVar1 == '\r')); param_5 = param_5 + 1) {
        }
        unaff_r21 = 0x8000;
        uVar6 = uVar11;
        param_4 = uVar13;
        unaff_r22 = uVar20;
      }
    }
  } while (uVar23 != 10);
LAB_98015274:
  *piVar9 = iVar15;
  uVar24 = (ushort)unaff_r22;
  uVar20 = unaff_r22;
  uVar17 = unaff_r22;
  uVar11 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    iVar22 = (int)uVar6;
    if (0x18 < (param_4 & 0xffffffff)) {
      if ('\x04' < *(char *)(iVar22 + 0x97)) {
        *(char *)(iVar22 + 0x97) = *(char *)(iVar22 + 0x97) + '\x01';
      }
      param_4 = 0x18;
      param_1 = param_1 - 1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      lVar27 = param_1 - 1;
      cVar1 = *(char *)lVar27;
      while (cVar1 == '\0') {
        lVar27 = lVar27 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *(char *)lVar27;
      }
      FUN_980165c0(uVar6 + 0x80,param_4,uVar6 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar21 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar21 = uVar21 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar21 = uVar21 - unaff_r24;
      }
      iVar15 = (int)uVar21;
      if (iVar15 < 0x1451) {
        if (iVar15 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar27 = -0x67fe4028;
          if (iVar15 != 0) {
            if (iVar15 < 0) {
              uVar21 = -uVar21;
              lVar27 = -0x67fe3ec8;
            }
            iVar15 = (int)uVar21;
            *(ushort *)(iVar22 + 0x6a) = -(ushort)(unaff_r23 != 0) & *(ushort *)(iVar22 + 0x6a);
joined_r0x980155ac:
            do {
              if (iVar15 == 0) break;
              uVar20 = uVar21 & 7;
              lVar27 = lVar27 + 0x54;
              iVar15 = (int)uVar21 >> 3;
              uVar21 = (ulonglong)iVar15;
              if (uVar20 != 0) {
                uVar20 = uVar20 * 0xc + lVar27;
                if (0x7fff < *(ushort *)((int)uVar20 + 10)) {
                  FUN_9800d650(uVar6 + 0x70,uVar20,0xc);
                  uVar20 = uVar6 + 0x70;
                  *(int *)(iVar22 + 0x76) = *(int *)(iVar22 + 0x76) + -1;
                }
                uVar2 = *(ushort *)(iVar22 + 0x60);
                uVar26 = (undefined4)unaff_r22;
                *(undefined4 *)(iVar22 + 0x58) = uVar26;
                *(undefined4 *)(iVar22 + 0x54) = uVar26;
                *(undefined4 *)(iVar22 + 0x50) = uVar26;
                puVar10 = (uint *)uVar20;
                uVar3 = *(ushort *)puVar10;
                uVar16 = (uVar2 & 0x7fff) + (uVar3 & 0x7fff);
                if ((((uVar2 & 0x7fff) < 0x7fff) && ((uVar3 & 0x7fff) < 0x7fff)) &&
                   (uVar16 < 0xbffe)) {
                  if (0x3fbf < uVar16) {
                    if (((((uVar2 & 0x7fff) == 0) &&
                         (uVar16 = uVar16 + 1, (*(uint *)(iVar22 + 0x60) & 0x7fffffff) == 0)) &&
                        (*(int *)(iVar22 + 100) == 0)) && (*(int *)(iVar22 + 0x68) == 0)) {
                      *(ushort *)(iVar22 + 0x60) = uVar24;
                      goto joined_r0x980155ac;
                    }
                    if ((((uVar3 & 0x7fff) != 0) ||
                        (uVar16 = uVar16 + 1, (*puVar10 & 0x7fffffff) != 0)) ||
                       ((puVar10[1] != 0 || (puVar10[2] != 0)))) {
                      lVar18 = uVar6 + 0x56;
                      lVar8 = 5;
                      uVar17 = unaff_r22;
                      do {
                        if (0 < (int)lVar8) {
                          lVar12 = uVar6 + 0x6a + (uVar17 & 0x7fffffff) * -2;
                          lVar28 = lVar8;
                          uVar11 = uVar20;
                          do {
                            uVar11 = uVar11 + 2;
                            psVar4 = (short *)lVar18;
                            uVar23 = (uint)*(ushort *)uVar11 * (uint)*(ushort *)lVar12;
                            uVar19 = *(uint *)(psVar4 + 1) + uVar23;
                            if ((uVar19 < *(uint *)(psVar4 + 1)) ||
                               (uVar13 = unaff_r22, uVar19 < uVar23)) {
                              uVar13 = 1;
                            }
                            *(uint *)(psVar4 + 1) = uVar19;
                            if ((int)uVar13 != 0) {
                              *psVar4 = *psVar4 + 1;
                            }
                            lVar12 = lVar12 + -2;
                            lVar28 = lVar28 + -1;
                          } while (lVar28 != 0);
                        }
                        lVar8 = lVar8 + -1;
                        lVar18 = lVar18 + -2;
                        uVar17 = uVar17 + 1;
                      } while (0 < lVar8);
                      uVar20 = (ulonglong)*(uint *)(iVar22 + 0x58);
                      uVar16 = uVar16 + 0xc002;
                      while ((0 < (short)uVar16 && ((*(uint *)(iVar22 + 0x50) & 0x80000000) == 0)))
                      {
                        uVar23 = *(uint *)(iVar22 + 0x54);
                        uVar19 = (uint)uVar20;
                        uVar20 = (uVar20 & 0x7fffffff) << 1;
                        *(int *)(iVar22 + 0x58) = (int)uVar20;
                        uVar16 = uVar16 - 1;
                        *(uint *)(iVar22 + 0x54) = uVar23 << 1 | uVar19 >> 0x1f;
                        *(uint *)(iVar22 + 0x50) = *(uint *)(iVar22 + 0x50) << 1 | uVar23 >> 0x1f;
                      }
                      if (((short)uVar16 < 1) && (uVar16 = uVar16 - 1, (short)uVar16 < 0)) {
                        uVar17 = (ulonglong)*(uint *)(iVar22 + 0x50);
                        uVar13 = (ulonglong)*(uint *)(iVar22 + 0x54);
                        uVar11 = unaff_r22;
                        do {
                          if ((*(ushort *)(iVar22 + 0x5a) & 1) != 0) {
                            uVar11 = uVar11 + 1;
                          }
                          uVar16 = uVar16 + 1;
                          uVar5 = uVar17 & 1;
                          uVar20 = uVar20 >> 1 | (uVar13 & 1) << 0x1f;
                          uVar17 = uVar17 >> 1;
                          *(int *)(iVar22 + 0x58) = (int)uVar20;
                          uVar13 = uVar13 >> 1 | uVar5 << 0x1f;
                        } while ((short)uVar16 < 0);
                        *(int *)(iVar22 + 0x54) = (int)uVar13;
                        *(int *)(iVar22 + 0x50) = (int)uVar17;
                        if ((int)uVar11 != 0) {
                          *(ushort *)(iVar22 + 0x5a) = *(ushort *)(iVar22 + 0x5a) | 1;
                          uVar20 = (ulonglong)*(uint *)(iVar22 + 0x58);
                        }
                      }
                      if ((0x8000 < *(ushort *)(iVar22 + 0x5a)) || ((uVar20 & 0x1ffff) == 0x18000))
                      {
                        if (*(int *)(iVar22 + 0x56) == -1) {
                          *(undefined4 *)(iVar22 + 0x56) = uVar26;
                          if (*(int *)(iVar22 + 0x52) == -1) {
                            *(undefined4 *)(iVar22 + 0x52) = uVar26;
                            if (*(short *)(iVar22 + 0x50) == -1) {
                              *(short *)(iVar22 + 0x50) = (short)unaff_r21;
                              uVar16 = uVar16 + 1;
                            }
                            else {
                              *(short *)(iVar22 + 0x50) = *(short *)(iVar22 + 0x50) + 1;
                            }
                          }
                          else {
                            *(int *)(iVar22 + 0x52) = *(int *)(iVar22 + 0x52) + 1;
                          }
                        }
                        else {
                          *(int *)(iVar22 + 0x56) = *(int *)(iVar22 + 0x56) + 1;
                        }
                      }
                      if (0x7ffe < uVar16) goto LAB_98015904;
                      *(undefined2 *)(iVar22 + 0x6a) = *(undefined2 *)(iVar22 + 0x58);
                      *(undefined4 *)(iVar22 + 0x66) = *(undefined4 *)(iVar22 + 0x54);
                      *(undefined4 *)(iVar22 + 0x62) = *(undefined4 *)(iVar22 + 0x50);
                      *(ushort *)(iVar22 + 0x60) = (uVar2 ^ uVar3) & 0x8000 | uVar16;
                      goto joined_r0x980155ac;
                    }
                  }
                  *(undefined4 *)(iVar22 + 0x60) = uVar26;
                }
                else {
LAB_98015904:
                  *(undefined4 *)(iVar22 + 0x60) = 0xffff8000;
                  if (((uVar2 ^ uVar3) & 0x8000) == 0) {
                    *(undefined4 *)(iVar22 + 0x60) = 0x7fff8000;
                  }
                }
                *(undefined4 *)(iVar22 + 0x68) = uVar26;
                *(undefined4 *)(iVar22 + 100) = uVar26;
              }
            } while( true );
          }
          uVar24 = *(ushort *)(iVar22 + 0x6a);
          uVar20 = (ulonglong)*(uint *)(iVar22 + 0x66);
          uVar17 = (ulonglong)*(uint *)(iVar22 + 0x62);
          uVar11 = (ulonglong)*(ushort *)(iVar22 + 0x60);
        }
      }
      else {
        uVar17 = 0xffffffff80000000;
        uVar11 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar24;
  *(int *)(unaff_r20 + 3) = (int)uVar20;
  *(int *)(unaff_r20 + 1) = (int)uVar17;
  *unaff_r20 = (ushort)uVar11 | (ushort)unaff_r19;
  return unaff_r22;
code_r0x98014fa4:
  while( true ) {
    *(int *)(iVar7 + -0xa0) = (int)unaff_r31;
    param_8 = param_8 + 4;
    *(uint *)param_8 = (uint)uVar17 >> (uVar23 & 0x3f) | (uint)param_7;
    param_7 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << ((uint)param_4 & 0x3f));
    iVar25 = iVar25 + -1;
    if (iVar25 == 0) break;
    uVar17 = (ulonglong)((uint *)param_8)[1];
    unaff_r31 = uVar17 & param_5;
  }
  param_8 = 3;
code_r0x98014fc4:
  iVar22 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_1 & 0x3fffffff) * -4;
  do {
    if (iVar22 < (int)param_1) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar22 = iVar22 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
    uVar21 = unaff_r23;
  } while (param_8 != 0);
  goto LAB_98015008;
  while( true ) {
    uVar23 = *(uint *)((int)lVar27 + -4);
    uVar19 = uVar23 + 1;
    if ((uVar19 < uVar23) || (param_3 = unaff_r23, uVar19 == 0)) {
      param_3 = param_1;
    }
    param_7 = param_7 - 1;
    lVar27 = lVar27 + -4;
    *(uint *)lVar27 = uVar19;
    if ((longlong)param_7 < 0) break;
LAB_98014d58:
    if ((int)param_3 == 0) break;
  }
LAB_98014d8c:
  uVar20 = unaff_r31 + 1;
  *(uint *)(unaff_r28 + (int)unaff_r29) =
       (int)unaff_r22 << (unaff_r30 & 0x3f) & *(uint *)(unaff_r28 + (int)unaff_r29);
  if ((int)uVar20 < 3) {
    param_7 = (uVar20 & 0x3fffffff) << 2;
    param_8 = uVar6 - 0x98;
code_r0x98014db0:
    uVar20 = 3 - uVar20;
    lVar27 = param_7 + param_8 + -4;
    uVar17 = uVar20 & 0xffffffff;
    while (uVar17 != 0) {
      lVar27 = lVar27 + 4;
      *(undefined4 *)lVar27 = uVar26;
      uVar20 = uVar20 - 1;
      uVar17 = uVar20;
    }
  }
  uVar20 = unaff_r21 + 1;
  iVar22 = (int)uVar20;
  param_4 = (longlong)(iVar22 >> 5) + (ulonglong)(iVar22 < 0 && (uVar20 & 0x1f) != 0);
  lVar8 = 3;
  lVar27 = uVar6 - 0x9c;
  uVar23 = iVar22 + ((iVar22 >> 5) + (uint)(iVar22 < 0 && (uVar20 & 0x1f) != 0)) * -0x20;
  uVar20 = unaff_r23;
  do {
    uVar19 = *(uint *)((int)lVar27 + 4);
    *(uint *)(iVar7 + -0xa0) = uVar19 & ~(unaff_r27 << (uVar23 & 0x3f));
    lVar27 = lVar27 + 4;
    *(uint *)lVar27 = uVar19 >> (uVar23 & 0x3f) | (uint)uVar20;
    uVar20 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar23 & 0x3f));
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_8 = 3;
code_r0x98014e38:
  iVar22 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
  do {
    if (iVar22 < (int)param_4) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar22 = iVar22 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
  } while (param_8 != 0);
  uVar21 = 2;
  param_3 = unaff_r23;
LAB_98015008:
  iVar22 = (int)param_3;
  param_8 = 0x1f - unaff_r21;
code_r0x9801500c:
  uVar20 = (ulonglong)*(uint *)(unaff_r20 + 8);
  param_8 = (ulonglong)(uint)(iVar22 << ((uint)param_8 & 0x3f)) |
            -(ulonglong)(unaff_r19 != 0) & 0xffffffff80000000 | (ulonglong)*(uint *)(iVar7 + -0x98);
  iVar22 = (int)param_8;
  if (*(uint *)(unaff_r20 + 8) == 0x40) {
    piVar9[1] = *(int *)(iVar7 + -0x94);
  }
  else {
LAB_98015044:
    iVar22 = (int)param_8;
    if ((int)uVar20 != 0x20) {
      return uVar21;
    }
  }
  *piVar9 = iVar22;
  return uVar21;
}


/* ==== FUN_98015348 @ 98015348 ==== */

ulonglong FUN_98015348(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar14;
  char *pcVar15;
  ushort uVar16;
  ulonglong uVar13;
  uint uVar19;
  ulonglong uVar17;
  longlong lVar18;
  int iVar22;
  uint uVar23;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar24;
  ushort uVar25;
  longlong unaff_r19;
  ushort *unaff_r20;
  longlong unaff_r21;
  ulonglong unaff_r22;
  undefined4 uVar26;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar27;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  ulonglong unaff_r29;
  uint unaff_r30;
  ulonglong unaff_r31;
  longlong lVar28;
  
  puVar9 = (undefined4 *)param_2;
  uVar6 = ZEXT48(&stack0x00000000);
  do {
    cVar1 = *(char *)param_5;
    unaff_r31 = unaff_r31 - 1;
    param_5 = param_5 + 1;
  } while (cVar1 == '0');
  while ((pcVar15 = (char *)param_5, '/' < cVar1 && (cVar1 < ':'))) {
    if ((param_4 & 0xffffffff) < 0x19) {
      param_4 = param_4 + 1;
      *(char *)param_1 = cVar1 + -0x30;
      unaff_r31 = unaff_r31 - 1;
      param_1 = param_1 + 1;
    }
    param_5 = param_5 + 1;
    cVar1 = *pcVar15;
  }
  if ((cVar1 == '+') || (cVar1 == '-')) {
    param_5 = param_5 - 1;
    uVar20 = 0xb;
  }
  else {
    if ((cVar1 < 'D') || (('E' < cVar1 && ((cVar1 < 'd' || ('e' < cVar1)))))) {
      pcVar15 = pcVar15 + -1;
      goto LAB_98015274;
    }
    uVar20 = 6;
  }
  do {
    while( true ) {
      puVar9 = (undefined4 *)param_2;
      iVar22 = (int)param_3;
      pbVar14 = (byte *)param_5;
      uVar17 = (ulonglong)*pbVar14;
      param_5 = param_5 + 1;
      pcVar15 = (char *)param_5;
      uVar23 = (uint)uVar20;
      if (0xb < (uVar20 & 0xffffffff)) break;
      iVar24 = (uint)(byte)(&DAT_98003e80)[uVar23] * 4 + -0x67feb2cc;
      uVar26 = (undefined4)unaff_r23;
      iVar7 = (int)uVar6;
      uVar11 = uVar6;
      uVar21 = param_1;
      uVar13 = param_4;
      switch(uVar23) {
      case 0:
        if ((uVar20 & 0xffffffff) < 0xb) {
          param_3 = param_1;
        }
        *(int *)(pcVar15 + *pbVar14) = (int)param_8;
        param_7 = param_7 - 1;
        if ((longlong)param_7 < 0) goto LAB_98014d8c;
        lVar27 = (param_7 & 0x3fffffff) * 4 + (uVar6 - 0x94);
        goto LAB_98014d58;
      case 1:
        goto code_r0x98014db0;
      case 2:
        goto code_r0x98014e38;
      case 3:
        uVar23 = (int)unaff_r21 - uVar23;
        lVar27 = param_7 - 4;
        *(uint *)(iVar7 + -0x98) = *(uint *)(iVar7 + -0x98) | 0x80000000;
        do {
          uVar19 = *(uint *)((int)lVar27 + 4);
          *(uint *)(iVar7 + -0xa0) = uVar19 & ~((int)pcVar15 << (uVar23 & 0x3f));
          lVar27 = lVar27 + 4;
          *(uint *)lVar27 = uVar19 >> (uVar23 & 0x3f) | (uint)unaff_r23;
          unaff_r23 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar23 & 0x3f));
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        param_7 = 2;
        uVar20 = uVar6 - 0x90;
        uVar17 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
        iVar24 = 3;
        do {
          if ((int)param_7 < (int)(uint)param_4) {
LAB_98014f34:
            *(undefined4 *)uVar20 = uVar26;
          }
          else {
            *(undefined4 *)uVar20 = *(undefined4 *)uVar17;
          }
          param_7 = param_7 - 1;
          uVar17 = uVar17 - 4;
          uVar20 = uVar20 - 4;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        param_3 = *(uint *)(unaff_r20 + 10) + param_3;
        goto LAB_98015008;
      case 4:
        goto LAB_98014f34;
      case 5:
        goto code_r0x98014fa4;
      case 6:
        goto code_r0x98014fc4;
      case 7:
        goto LAB_98015044;
      case 8:
        goto code_r0x9801500c;
      case 9:
        goto code_r0x9801509c;
      case 0xb:
        unaff_r20 = (ushort *)FUN_9800dc54();
        uVar11 = uVar6 - 0x110;
        *(int *)(int)uVar11 = iVar7;
        unaff_r22 = 0;
        param_1 = uVar6 - 0x90;
        unaff_r19 = 0;
        uVar13 = 0;
        unaff_r30 = 0;
        unaff_r26 = 0;
        unaff_r28 = 0;
        unaff_r23 = param_4;
        unaff_r24 = uVar17;
        unaff_r25 = param_5;
      case 10:
        unaff_r27 = 1;
        unaff_r29 = unaff_r22;
        unaff_r31 = unaff_r22;
code_r0x9801509c:
        uVar20 = unaff_r22;
        param_5 = param_3;
        if ((param_8 & 0xffffffff) == 0) {
          lVar27 = FUN_9800f950();
          *(undefined4 *)lVar27 = 0x16;
          FUN_9800d548();
          return 0;
        }
        for (; (((cVar1 = *(char *)param_5, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
               (cVar1 == '\r')); param_5 = param_5 + 1) {
        }
        unaff_r21 = 0x8000;
        uVar6 = uVar11;
        param_4 = uVar13;
        unaff_r22 = uVar20;
      }
    }
  } while (uVar23 != 10);
LAB_98015274:
  *puVar9 = pcVar15;
  uVar25 = (ushort)unaff_r22;
  uVar20 = unaff_r22;
  uVar17 = unaff_r22;
  uVar11 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    iVar22 = (int)uVar6;
    if (0x18 < (param_4 & 0xffffffff)) {
      if ('\x04' < *(char *)(iVar22 + 0x97)) {
        *(char *)(iVar22 + 0x97) = *(char *)(iVar22 + 0x97) + '\x01';
      }
      param_4 = 0x18;
      param_1 = param_1 - 1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      lVar27 = param_1 - 1;
      cVar1 = *(char *)lVar27;
      while (cVar1 == '\0') {
        lVar27 = lVar27 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *(char *)lVar27;
      }
      FUN_980165c0(uVar6 + 0x80,param_4,uVar6 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar21 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar21 = uVar21 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar21 = uVar21 - unaff_r24;
      }
      iVar24 = (int)uVar21;
      if (iVar24 < 0x1451) {
        if (iVar24 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar27 = -0x67fe4028;
          if (iVar24 != 0) {
            if (iVar24 < 0) {
              uVar21 = -uVar21;
              lVar27 = -0x67fe3ec8;
            }
            iVar24 = (int)uVar21;
            *(ushort *)(iVar22 + 0x6a) = -(ushort)(unaff_r23 != 0) & *(ushort *)(iVar22 + 0x6a);
joined_r0x980155ac:
            do {
              if (iVar24 == 0) break;
              uVar20 = uVar21 & 7;
              lVar27 = lVar27 + 0x54;
              iVar24 = (int)uVar21 >> 3;
              uVar21 = (ulonglong)iVar24;
              if (uVar20 != 0) {
                uVar20 = uVar20 * 0xc + lVar27;
                if (0x7fff < *(ushort *)((int)uVar20 + 10)) {
                  FUN_9800d650(uVar6 + 0x70,uVar20,0xc);
                  uVar20 = uVar6 + 0x70;
                  *(int *)(iVar22 + 0x76) = *(int *)(iVar22 + 0x76) + -1;
                }
                uVar2 = *(ushort *)(iVar22 + 0x60);
                uVar26 = (undefined4)unaff_r22;
                *(undefined4 *)(iVar22 + 0x58) = uVar26;
                *(undefined4 *)(iVar22 + 0x54) = uVar26;
                *(undefined4 *)(iVar22 + 0x50) = uVar26;
                puVar10 = (uint *)uVar20;
                uVar3 = *(ushort *)puVar10;
                uVar16 = (uVar2 & 0x7fff) + (uVar3 & 0x7fff);
                if ((((uVar2 & 0x7fff) < 0x7fff) && ((uVar3 & 0x7fff) < 0x7fff)) &&
                   (uVar16 < 0xbffe)) {
                  if (0x3fbf < uVar16) {
                    if (((((uVar2 & 0x7fff) == 0) &&
                         (uVar16 = uVar16 + 1, (*(uint *)(iVar22 + 0x60) & 0x7fffffff) == 0)) &&
                        (*(int *)(iVar22 + 100) == 0)) && (*(int *)(iVar22 + 0x68) == 0)) {
                      *(ushort *)(iVar22 + 0x60) = uVar25;
                      goto joined_r0x980155ac;
                    }
                    if ((((uVar3 & 0x7fff) != 0) ||
                        (uVar16 = uVar16 + 1, (*puVar10 & 0x7fffffff) != 0)) ||
                       ((puVar10[1] != 0 || (puVar10[2] != 0)))) {
                      lVar18 = uVar6 + 0x56;
                      lVar8 = 5;
                      uVar17 = unaff_r22;
                      do {
                        if (0 < (int)lVar8) {
                          lVar12 = uVar6 + 0x6a + (uVar17 & 0x7fffffff) * -2;
                          lVar28 = lVar8;
                          uVar11 = uVar20;
                          do {
                            uVar11 = uVar11 + 2;
                            psVar4 = (short *)lVar18;
                            uVar23 = (uint)*(ushort *)uVar11 * (uint)*(ushort *)lVar12;
                            uVar19 = *(uint *)(psVar4 + 1) + uVar23;
                            if ((uVar19 < *(uint *)(psVar4 + 1)) ||
                               (uVar13 = unaff_r22, uVar19 < uVar23)) {
                              uVar13 = 1;
                            }
                            *(uint *)(psVar4 + 1) = uVar19;
                            if ((int)uVar13 != 0) {
                              *psVar4 = *psVar4 + 1;
                            }
                            lVar12 = lVar12 + -2;
                            lVar28 = lVar28 + -1;
                          } while (lVar28 != 0);
                        }
                        lVar8 = lVar8 + -1;
                        lVar18 = lVar18 + -2;
                        uVar17 = uVar17 + 1;
                      } while (0 < lVar8);
                      uVar20 = (ulonglong)*(uint *)(iVar22 + 0x58);
                      uVar16 = uVar16 + 0xc002;
                      while ((0 < (short)uVar16 && ((*(uint *)(iVar22 + 0x50) & 0x80000000) == 0)))
                      {
                        uVar23 = *(uint *)(iVar22 + 0x54);
                        uVar19 = (uint)uVar20;
                        uVar20 = (uVar20 & 0x7fffffff) << 1;
                        *(int *)(iVar22 + 0x58) = (int)uVar20;
                        uVar16 = uVar16 - 1;
                        *(uint *)(iVar22 + 0x54) = uVar23 << 1 | uVar19 >> 0x1f;
                        *(uint *)(iVar22 + 0x50) = *(uint *)(iVar22 + 0x50) << 1 | uVar23 >> 0x1f;
                      }
                      if (((short)uVar16 < 1) && (uVar16 = uVar16 - 1, (short)uVar16 < 0)) {
                        uVar17 = (ulonglong)*(uint *)(iVar22 + 0x50);
                        uVar13 = (ulonglong)*(uint *)(iVar22 + 0x54);
                        uVar11 = unaff_r22;
                        do {
                          if ((*(ushort *)(iVar22 + 0x5a) & 1) != 0) {
                            uVar11 = uVar11 + 1;
                          }
                          uVar16 = uVar16 + 1;
                          uVar5 = uVar17 & 1;
                          uVar20 = uVar20 >> 1 | (uVar13 & 1) << 0x1f;
                          uVar17 = uVar17 >> 1;
                          *(int *)(iVar22 + 0x58) = (int)uVar20;
                          uVar13 = uVar13 >> 1 | uVar5 << 0x1f;
                        } while ((short)uVar16 < 0);
                        *(int *)(iVar22 + 0x54) = (int)uVar13;
                        *(int *)(iVar22 + 0x50) = (int)uVar17;
                        if ((int)uVar11 != 0) {
                          *(ushort *)(iVar22 + 0x5a) = *(ushort *)(iVar22 + 0x5a) | 1;
                          uVar20 = (ulonglong)*(uint *)(iVar22 + 0x58);
                        }
                      }
                      if ((0x8000 < *(ushort *)(iVar22 + 0x5a)) || ((uVar20 & 0x1ffff) == 0x18000))
                      {
                        if (*(int *)(iVar22 + 0x56) == -1) {
                          *(undefined4 *)(iVar22 + 0x56) = uVar26;
                          if (*(int *)(iVar22 + 0x52) == -1) {
                            *(undefined4 *)(iVar22 + 0x52) = uVar26;
                            if (*(short *)(iVar22 + 0x50) == -1) {
                              *(short *)(iVar22 + 0x50) = (short)unaff_r21;
                              uVar16 = uVar16 + 1;
                            }
                            else {
                              *(short *)(iVar22 + 0x50) = *(short *)(iVar22 + 0x50) + 1;
                            }
                          }
                          else {
                            *(int *)(iVar22 + 0x52) = *(int *)(iVar22 + 0x52) + 1;
                          }
                        }
                        else {
                          *(int *)(iVar22 + 0x56) = *(int *)(iVar22 + 0x56) + 1;
                        }
                      }
                      if (0x7ffe < uVar16) goto LAB_98015904;
                      *(undefined2 *)(iVar22 + 0x6a) = *(undefined2 *)(iVar22 + 0x58);
                      *(undefined4 *)(iVar22 + 0x66) = *(undefined4 *)(iVar22 + 0x54);
                      *(undefined4 *)(iVar22 + 0x62) = *(undefined4 *)(iVar22 + 0x50);
                      *(ushort *)(iVar22 + 0x60) = (uVar2 ^ uVar3) & 0x8000 | uVar16;
                      goto joined_r0x980155ac;
                    }
                  }
                  *(undefined4 *)(iVar22 + 0x60) = uVar26;
                }
                else {
LAB_98015904:
                  *(undefined4 *)(iVar22 + 0x60) = 0xffff8000;
                  if (((uVar2 ^ uVar3) & 0x8000) == 0) {
                    *(undefined4 *)(iVar22 + 0x60) = 0x7fff8000;
                  }
                }
                *(undefined4 *)(iVar22 + 0x68) = uVar26;
                *(undefined4 *)(iVar22 + 100) = uVar26;
              }
            } while( true );
          }
          uVar25 = *(ushort *)(iVar22 + 0x6a);
          uVar20 = (ulonglong)*(uint *)(iVar22 + 0x66);
          uVar17 = (ulonglong)*(uint *)(iVar22 + 0x62);
          uVar11 = (ulonglong)*(ushort *)(iVar22 + 0x60);
        }
      }
      else {
        uVar17 = 0xffffffff80000000;
        uVar11 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar25;
  *(int *)(unaff_r20 + 3) = (int)uVar20;
  *(int *)(unaff_r20 + 1) = (int)uVar17;
  *unaff_r20 = (ushort)uVar11 | (ushort)unaff_r19;
  return unaff_r22;
code_r0x98014fa4:
  while( true ) {
    *(int *)(iVar7 + -0xa0) = (int)unaff_r31;
    param_8 = param_8 + 4;
    *(uint *)param_8 = (uint)uVar17 >> (uVar23 & 0x3f) | (uint)param_7;
    param_7 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << ((uint)param_4 & 0x3f));
    iVar24 = iVar24 + -1;
    if (iVar24 == 0) break;
    uVar17 = (ulonglong)((uint *)param_8)[1];
    unaff_r31 = uVar17 & param_5;
  }
  param_8 = 3;
code_r0x98014fc4:
  iVar22 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_1 & 0x3fffffff) * -4;
  do {
    if (iVar22 < (int)param_1) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar22 = iVar22 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
    uVar21 = unaff_r23;
  } while (param_8 != 0);
  goto LAB_98015008;
  while( true ) {
    uVar23 = *(uint *)((int)lVar27 + -4);
    uVar19 = uVar23 + 1;
    if ((uVar19 < uVar23) || (param_3 = unaff_r23, uVar19 == 0)) {
      param_3 = param_1;
    }
    param_7 = param_7 - 1;
    lVar27 = lVar27 + -4;
    *(uint *)lVar27 = uVar19;
    if ((longlong)param_7 < 0) break;
LAB_98014d58:
    if ((int)param_3 == 0) break;
  }
LAB_98014d8c:
  uVar20 = unaff_r31 + 1;
  *(uint *)(unaff_r28 + (int)unaff_r29) =
       (int)unaff_r22 << (unaff_r30 & 0x3f) & *(uint *)(unaff_r28 + (int)unaff_r29);
  if ((int)uVar20 < 3) {
    param_7 = (uVar20 & 0x3fffffff) << 2;
    param_8 = uVar6 - 0x98;
code_r0x98014db0:
    uVar20 = 3 - uVar20;
    lVar27 = param_7 + param_8 + -4;
    uVar17 = uVar20 & 0xffffffff;
    while (uVar17 != 0) {
      lVar27 = lVar27 + 4;
      *(undefined4 *)lVar27 = uVar26;
      uVar20 = uVar20 - 1;
      uVar17 = uVar20;
    }
  }
  uVar20 = unaff_r21 + 1;
  iVar22 = (int)uVar20;
  param_4 = (longlong)(iVar22 >> 5) + (ulonglong)(iVar22 < 0 && (uVar20 & 0x1f) != 0);
  lVar8 = 3;
  lVar27 = uVar6 - 0x9c;
  uVar23 = iVar22 + ((iVar22 >> 5) + (uint)(iVar22 < 0 && (uVar20 & 0x1f) != 0)) * -0x20;
  uVar20 = unaff_r23;
  do {
    uVar19 = *(uint *)((int)lVar27 + 4);
    *(uint *)(iVar7 + -0xa0) = uVar19 & ~(unaff_r27 << (uVar23 & 0x3f));
    lVar27 = lVar27 + 4;
    *(uint *)lVar27 = uVar19 >> (uVar23 & 0x3f) | (uint)uVar20;
    uVar20 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar23 & 0x3f));
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_8 = 3;
code_r0x98014e38:
  iVar22 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
  do {
    if (iVar22 < (int)param_4) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar22 = iVar22 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
  } while (param_8 != 0);
  uVar21 = 2;
  param_3 = unaff_r23;
LAB_98015008:
  iVar22 = (int)param_3;
  param_8 = 0x1f - unaff_r21;
code_r0x9801500c:
  uVar20 = (ulonglong)*(uint *)(unaff_r20 + 8);
  param_8 = (ulonglong)(uint)(iVar22 << ((uint)param_8 & 0x3f)) |
            -(ulonglong)(unaff_r19 != 0) & 0xffffffff80000000 | (ulonglong)*(uint *)(iVar7 + -0x98);
  uVar26 = (undefined4)param_8;
  if (*(uint *)(unaff_r20 + 8) == 0x40) {
    puVar9[1] = *(undefined4 *)(iVar7 + -0x94);
  }
  else {
LAB_98015044:
    uVar26 = (undefined4)param_8;
    if ((int)uVar20 != 0x20) {
      return uVar21;
    }
  }
  *puVar9 = uVar26;
  return uVar21;
}


/* ==== FUN_980153dc @ 980153dc ==== */

/* WARNING: Removing unreachable block (ram,0x98015490) */
/* WARNING: Removing unreachable block (ram,0x98015274) */
/* WARNING: Removing unreachable block (ram,0x9801594c) */
/* WARNING: Removing unreachable block (ram,0x98015280) */
/* WARNING: Removing unreachable block (ram,0x98015288) */
/* WARNING: Removing unreachable block (ram,0x98015298) */
/* WARNING: Removing unreachable block (ram,0x980152a0) */
/* WARNING: Removing unreachable block (ram,0x980152ac) */
/* WARNING: Removing unreachable block (ram,0x98015938) */
/* WARNING: Removing unreachable block (ram,0x980152b4) */
/* WARNING: Removing unreachable block (ram,0x98015518) */
/* WARNING: Removing unreachable block (ram,0x9801550c) */
/* WARNING: Removing unreachable block (ram,0x98015520) */
/* WARNING: Removing unreachable block (ram,0x98015538) */
/* WARNING: Removing unreachable block (ram,0x9801553c) */
/* WARNING: Removing unreachable block (ram,0x98015548) */
/* WARNING: Removing unreachable block (ram,0x9801554c) */
/* WARNING: Removing unreachable block (ram,0x98015554) */
/* WARNING: Removing unreachable block (ram,0x98015558) */
/* WARNING: Removing unreachable block (ram,0x98015964) */
/* WARNING: Removing unreachable block (ram,0x98015560) */
/* WARNING: Removing unreachable block (ram,0x9801597c) */
/* WARNING: Removing unreachable block (ram,0x98015568) */
/* WARNING: Removing unreachable block (ram,0x98015580) */
/* WARNING: Removing unreachable block (ram,0x98015584) */
/* WARNING: Removing unreachable block (ram,0x98015594) */
/* WARNING: Removing unreachable block (ram,0x980155b0) */
/* WARNING: Removing unreachable block (ram,0x980155c4) */
/* WARNING: Removing unreachable block (ram,0x980155d4) */
/* WARNING: Removing unreachable block (ram,0x980155e8) */
/* WARNING: Removing unreachable block (ram,0x98015604) */
/* WARNING: Removing unreachable block (ram,0x98015644) */
/* WARNING: Removing unreachable block (ram,0x9801564c) */
/* WARNING: Removing unreachable block (ram,0x98015658) */
/* WARNING: Removing unreachable block (ram,0x98015668) */
/* WARNING: Removing unreachable block (ram,0x98015670) */
/* WARNING: Removing unreachable block (ram,0x98015684) */
/* WARNING: Removing unreachable block (ram,0x98015690) */
/* WARNING: Removing unreachable block (ram,0x9801569c) */
/* WARNING: Removing unreachable block (ram,0x980156a4) */
/* WARNING: Removing unreachable block (ram,0x980156ac) */
/* WARNING: Removing unreachable block (ram,0x980156c4) */
/* WARNING: Removing unreachable block (ram,0x980156d0) */
/* WARNING: Removing unreachable block (ram,0x980156dc) */
/* WARNING: Removing unreachable block (ram,0x980156e8) */
/* WARNING: Removing unreachable block (ram,0x980156f4) */
/* WARNING: Removing unreachable block (ram,0x98015704) */
/* WARNING: Removing unreachable block (ram,0x98015724) */
/* WARNING: Removing unreachable block (ram,0x9801572c) */
/* WARNING: Removing unreachable block (ram,0x98015730) */
/* WARNING: Removing unreachable block (ram,0x9801573c) */
/* WARNING: Removing unreachable block (ram,0x98015748) */
/* WARNING: Removing unreachable block (ram,0x98015754) */
/* WARNING: Removing unreachable block (ram,0x98015764) */
/* WARNING: Removing unreachable block (ram,0x98015774) */
/* WARNING: Removing unreachable block (ram,0x98015780) */
/* WARNING: Removing unreachable block (ram,0x980157c4) */
/* WARNING: Removing unreachable block (ram,0x980157cc) */
/* WARNING: Removing unreachable block (ram,0x980157e0) */
/* WARNING: Removing unreachable block (ram,0x980157e8) */
/* WARNING: Removing unreachable block (ram,0x980157f4) */
/* WARNING: Removing unreachable block (ram,0x980157f8) */
/* WARNING: Removing unreachable block (ram,0x9801582c) */
/* WARNING: Removing unreachable block (ram,0x9801583c) */
/* WARNING: Removing unreachable block (ram,0x9801584c) */
/* WARNING: Removing unreachable block (ram,0x98015858) */
/* WARNING: Removing unreachable block (ram,0x9801586c) */
/* WARNING: Removing unreachable block (ram,0x980158c4) */
/* WARNING: Removing unreachable block (ram,0x98015878) */
/* WARNING: Removing unreachable block (ram,0x980158b8) */
/* WARNING: Removing unreachable block (ram,0x98015888) */
/* WARNING: Removing unreachable block (ram,0x980158ac) */
/* WARNING: Removing unreachable block (ram,0x98015898) */
/* WARNING: Removing unreachable block (ram,0x980158cc) */
/* WARNING: Removing unreachable block (ram,0x980158d8) */
/* WARNING: Removing unreachable block (ram,0x98015904) */
/* WARNING: Removing unreachable block (ram,0x98015910) */
/* WARNING: Removing unreachable block (ram,0x9801578c) */
/* WARNING: Removing unreachable block (ram,0x98015660) */
/* WARNING: Removing unreachable block (ram,0x98015914) */
/* WARNING: Removing unreachable block (ram,0x9801591c) */
/* WARNING: Removing unreachable block (ram,0x98015924) */
/* WARNING: Removing unreachable block (ram,0x9800dca4) */

undefined8 FUN_980153dc(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x98015130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)UNK_98003e89 * 4 + -0x67feb2cc))();
  return uVar1;
}


/* ==== FUN_980153e4 @ 980153e4 ==== */

ulonglong FUN_980153e4(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  longlong lVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar14;
  ushort uVar15;
  ulonglong uVar13;
  uint uVar18;
  ulonglong uVar16;
  longlong lVar17;
  int iVar21;
  uint uVar22;
  int in_r11;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar23;
  ushort uVar24;
  int iVar25;
  longlong unaff_r19;
  ushort *unaff_r20;
  longlong unaff_r21;
  ulonglong unaff_r22;
  undefined4 uVar26;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar27;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  ulonglong unaff_r29;
  uint unaff_r30;
  ulonglong unaff_r31;
  longlong lVar28;
  
  piVar9 = (int *)param_2;
  iVar21 = (int)param_3;
  uVar6 = ZEXT48(&stack0x00000000);
  if (in_r11 == 0x2b) {
    uVar19 = 7;
  }
  else if (in_r11 == 0x2d) {
    uVar19 = 7;
    unaff_r27 = -1;
  }
  else {
    if (in_r11 != 0x30) goto LAB_98015274;
    uVar19 = 8;
  }
  do {
    while( true ) {
      piVar9 = (int *)param_2;
      iVar23 = (int)param_3;
      pbVar14 = (byte *)param_5;
      uVar16 = (ulonglong)*pbVar14;
      param_5 = param_5 + 1;
      iVar21 = (int)param_5;
      uVar22 = (uint)uVar19;
      if (0xb < (uVar19 & 0xffffffff)) break;
      iVar25 = (uint)(byte)(&DAT_98003e80)[uVar22] * 4 + -0x67feb2cc;
      uVar26 = (undefined4)unaff_r23;
      iVar7 = (int)uVar6;
      uVar11 = uVar6;
      uVar20 = param_1;
      uVar13 = param_4;
      switch(uVar22) {
      case 0:
        if ((uVar19 & 0xffffffff) < 0xb) {
          param_3 = param_1;
        }
        *(int *)(iVar21 + (uint)*pbVar14) = (int)param_8;
        param_7 = param_7 - 1;
        if ((longlong)param_7 < 0) goto LAB_98014d8c;
        lVar27 = (param_7 & 0x3fffffff) * 4 + (uVar6 - 0x94);
        goto LAB_98014d58;
      case 1:
        goto code_r0x98014db0;
      case 2:
        goto code_r0x98014e38;
      case 3:
        uVar22 = (int)unaff_r21 - uVar22;
        lVar27 = param_7 - 4;
        *(uint *)(iVar7 + -0x98) = *(uint *)(iVar7 + -0x98) | 0x80000000;
        do {
          uVar18 = *(uint *)((int)lVar27 + 4);
          *(uint *)(iVar7 + -0xa0) = uVar18 & ~(iVar21 << (uVar22 & 0x3f));
          lVar27 = lVar27 + 4;
          *(uint *)lVar27 = uVar18 >> (uVar22 & 0x3f) | (uint)unaff_r23;
          unaff_r23 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar22 & 0x3f));
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        param_7 = 2;
        uVar19 = uVar6 - 0x90;
        uVar16 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
        iVar25 = 3;
        do {
          if ((int)param_7 < (int)(uint)param_4) {
LAB_98014f34:
            *(undefined4 *)uVar19 = uVar26;
          }
          else {
            *(undefined4 *)uVar19 = *(undefined4 *)uVar16;
          }
          param_7 = param_7 - 1;
          uVar16 = uVar16 - 4;
          uVar19 = uVar19 - 4;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        param_3 = *(uint *)(unaff_r20 + 10) + param_3;
        goto LAB_98015008;
      case 4:
        goto LAB_98014f34;
      case 5:
        goto code_r0x98014fa4;
      case 6:
        goto code_r0x98014fc4;
      case 7:
        goto LAB_98015044;
      case 8:
        goto code_r0x9801500c;
      case 9:
        goto code_r0x9801509c;
      case 0xb:
        unaff_r20 = (ushort *)FUN_9800dc54();
        uVar11 = uVar6 - 0x110;
        *(int *)(int)uVar11 = iVar7;
        unaff_r22 = 0;
        param_1 = uVar6 - 0x90;
        unaff_r19 = 0;
        uVar13 = 0;
        unaff_r30 = 0;
        unaff_r26 = 0;
        unaff_r28 = 0;
        unaff_r23 = param_4;
        unaff_r24 = uVar16;
        unaff_r25 = param_5;
      case 10:
        unaff_r27 = 1;
        unaff_r29 = unaff_r22;
        unaff_r31 = unaff_r22;
code_r0x9801509c:
        uVar19 = unaff_r22;
        param_5 = param_3;
        if ((param_8 & 0xffffffff) == 0) {
          lVar27 = FUN_9800f950();
          *(undefined4 *)lVar27 = 0x16;
          FUN_9800d548();
          return 0;
        }
        for (; (((cVar1 = *(char *)param_5, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
               (cVar1 == '\r')); param_5 = param_5 + 1) {
        }
        unaff_r21 = 0x8000;
        uVar6 = uVar11;
        param_4 = uVar13;
        unaff_r22 = uVar19;
      }
    }
  } while (uVar22 != 10);
LAB_98015274:
  *piVar9 = iVar21;
  uVar24 = (ushort)unaff_r22;
  uVar19 = unaff_r22;
  uVar16 = unaff_r22;
  uVar11 = unaff_r22;
  if (unaff_r30 == 0) {
    unaff_r22 = 4;
  }
  else {
    iVar21 = (int)uVar6;
    if (0x18 < (param_4 & 0xffffffff)) {
      if ('\x04' < *(char *)(iVar21 + 0x97)) {
        *(char *)(iVar21 + 0x97) = *(char *)(iVar21 + 0x97) + '\x01';
      }
      param_4 = 0x18;
      param_1 = param_1 - 1;
      unaff_r31 = unaff_r31 + 1;
    }
    if ((param_4 & 0xffffffff) != 0) {
      lVar27 = param_1 - 1;
      cVar1 = *(char *)lVar27;
      while (cVar1 == '\0') {
        lVar27 = lVar27 + -1;
        param_4 = param_4 - 1;
        unaff_r31 = unaff_r31 + 1;
        cVar1 = *(char *)lVar27;
      }
      FUN_980165c0(uVar6 + 0x80,param_4,uVar6 + 0x60);
      if (unaff_r27 < 0) {
        unaff_r29 = -unaff_r29;
      }
      uVar20 = unaff_r31 + unaff_r29;
      if (unaff_r28 == 0) {
        uVar20 = uVar20 + unaff_r25;
      }
      if (unaff_r26 == 0) {
        uVar20 = uVar20 - unaff_r24;
      }
      iVar23 = (int)uVar20;
      if (iVar23 < 0x1451) {
        if (iVar23 < -0x1450) {
          unaff_r22 = 1;
        }
        else {
          lVar27 = -0x67fe4028;
          if (iVar23 != 0) {
            if (iVar23 < 0) {
              uVar20 = -uVar20;
              lVar27 = -0x67fe3ec8;
            }
            iVar23 = (int)uVar20;
            *(ushort *)(iVar21 + 0x6a) = -(ushort)(unaff_r23 != 0) & *(ushort *)(iVar21 + 0x6a);
joined_r0x980155ac:
            do {
              if (iVar23 == 0) break;
              uVar19 = uVar20 & 7;
              lVar27 = lVar27 + 0x54;
              iVar23 = (int)uVar20 >> 3;
              uVar20 = (ulonglong)iVar23;
              if (uVar19 != 0) {
                uVar19 = uVar19 * 0xc + lVar27;
                if (0x7fff < *(ushort *)((int)uVar19 + 10)) {
                  FUN_9800d650(uVar6 + 0x70,uVar19,0xc);
                  uVar19 = uVar6 + 0x70;
                  *(int *)(iVar21 + 0x76) = *(int *)(iVar21 + 0x76) + -1;
                }
                uVar2 = *(ushort *)(iVar21 + 0x60);
                uVar26 = (undefined4)unaff_r22;
                *(undefined4 *)(iVar21 + 0x58) = uVar26;
                *(undefined4 *)(iVar21 + 0x54) = uVar26;
                *(undefined4 *)(iVar21 + 0x50) = uVar26;
                puVar10 = (uint *)uVar19;
                uVar3 = *(ushort *)puVar10;
                uVar15 = (uVar2 & 0x7fff) + (uVar3 & 0x7fff);
                if ((((uVar2 & 0x7fff) < 0x7fff) && ((uVar3 & 0x7fff) < 0x7fff)) &&
                   (uVar15 < 0xbffe)) {
                  if (0x3fbf < uVar15) {
                    if (((((uVar2 & 0x7fff) == 0) &&
                         (uVar15 = uVar15 + 1, (*(uint *)(iVar21 + 0x60) & 0x7fffffff) == 0)) &&
                        (*(int *)(iVar21 + 100) == 0)) && (*(int *)(iVar21 + 0x68) == 0)) {
                      *(ushort *)(iVar21 + 0x60) = uVar24;
                      goto joined_r0x980155ac;
                    }
                    if ((((uVar3 & 0x7fff) != 0) ||
                        (uVar15 = uVar15 + 1, (*puVar10 & 0x7fffffff) != 0)) ||
                       ((puVar10[1] != 0 || (puVar10[2] != 0)))) {
                      lVar17 = uVar6 + 0x56;
                      lVar8 = 5;
                      uVar16 = unaff_r22;
                      do {
                        if (0 < (int)lVar8) {
                          lVar12 = uVar6 + 0x6a + (uVar16 & 0x7fffffff) * -2;
                          lVar28 = lVar8;
                          uVar11 = uVar19;
                          do {
                            uVar11 = uVar11 + 2;
                            psVar4 = (short *)lVar17;
                            uVar22 = (uint)*(ushort *)uVar11 * (uint)*(ushort *)lVar12;
                            uVar18 = *(uint *)(psVar4 + 1) + uVar22;
                            if ((uVar18 < *(uint *)(psVar4 + 1)) ||
                               (uVar13 = unaff_r22, uVar18 < uVar22)) {
                              uVar13 = 1;
                            }
                            *(uint *)(psVar4 + 1) = uVar18;
                            if ((int)uVar13 != 0) {
                              *psVar4 = *psVar4 + 1;
                            }
                            lVar12 = lVar12 + -2;
                            lVar28 = lVar28 + -1;
                          } while (lVar28 != 0);
                        }
                        lVar8 = lVar8 + -1;
                        lVar17 = lVar17 + -2;
                        uVar16 = uVar16 + 1;
                      } while (0 < lVar8);
                      uVar19 = (ulonglong)*(uint *)(iVar21 + 0x58);
                      uVar15 = uVar15 + 0xc002;
                      while ((0 < (short)uVar15 && ((*(uint *)(iVar21 + 0x50) & 0x80000000) == 0)))
                      {
                        uVar22 = *(uint *)(iVar21 + 0x54);
                        uVar18 = (uint)uVar19;
                        uVar19 = (uVar19 & 0x7fffffff) << 1;
                        *(int *)(iVar21 + 0x58) = (int)uVar19;
                        uVar15 = uVar15 - 1;
                        *(uint *)(iVar21 + 0x54) = uVar22 << 1 | uVar18 >> 0x1f;
                        *(uint *)(iVar21 + 0x50) = *(uint *)(iVar21 + 0x50) << 1 | uVar22 >> 0x1f;
                      }
                      if (((short)uVar15 < 1) && (uVar15 = uVar15 - 1, (short)uVar15 < 0)) {
                        uVar16 = (ulonglong)*(uint *)(iVar21 + 0x50);
                        uVar13 = (ulonglong)*(uint *)(iVar21 + 0x54);
                        uVar11 = unaff_r22;
                        do {
                          if ((*(ushort *)(iVar21 + 0x5a) & 1) != 0) {
                            uVar11 = uVar11 + 1;
                          }
                          uVar15 = uVar15 + 1;
                          uVar5 = uVar16 & 1;
                          uVar19 = uVar19 >> 1 | (uVar13 & 1) << 0x1f;
                          uVar16 = uVar16 >> 1;
                          *(int *)(iVar21 + 0x58) = (int)uVar19;
                          uVar13 = uVar13 >> 1 | uVar5 << 0x1f;
                        } while ((short)uVar15 < 0);
                        *(int *)(iVar21 + 0x54) = (int)uVar13;
                        *(int *)(iVar21 + 0x50) = (int)uVar16;
                        if ((int)uVar11 != 0) {
                          *(ushort *)(iVar21 + 0x5a) = *(ushort *)(iVar21 + 0x5a) | 1;
                          uVar19 = (ulonglong)*(uint *)(iVar21 + 0x58);
                        }
                      }
                      if ((0x8000 < *(ushort *)(iVar21 + 0x5a)) || ((uVar19 & 0x1ffff) == 0x18000))
                      {
                        if (*(int *)(iVar21 + 0x56) == -1) {
                          *(undefined4 *)(iVar21 + 0x56) = uVar26;
                          if (*(int *)(iVar21 + 0x52) == -1) {
                            *(undefined4 *)(iVar21 + 0x52) = uVar26;
                            if (*(short *)(iVar21 + 0x50) == -1) {
                              *(short *)(iVar21 + 0x50) = (short)unaff_r21;
                              uVar15 = uVar15 + 1;
                            }
                            else {
                              *(short *)(iVar21 + 0x50) = *(short *)(iVar21 + 0x50) + 1;
                            }
                          }
                          else {
                            *(int *)(iVar21 + 0x52) = *(int *)(iVar21 + 0x52) + 1;
                          }
                        }
                        else {
                          *(int *)(iVar21 + 0x56) = *(int *)(iVar21 + 0x56) + 1;
                        }
                      }
                      if (0x7ffe < uVar15) goto LAB_98015904;
                      *(undefined2 *)(iVar21 + 0x6a) = *(undefined2 *)(iVar21 + 0x58);
                      *(undefined4 *)(iVar21 + 0x66) = *(undefined4 *)(iVar21 + 0x54);
                      *(undefined4 *)(iVar21 + 0x62) = *(undefined4 *)(iVar21 + 0x50);
                      *(ushort *)(iVar21 + 0x60) = (uVar2 ^ uVar3) & 0x8000 | uVar15;
                      goto joined_r0x980155ac;
                    }
                  }
                  *(undefined4 *)(iVar21 + 0x60) = uVar26;
                }
                else {
LAB_98015904:
                  *(undefined4 *)(iVar21 + 0x60) = 0xffff8000;
                  if (((uVar2 ^ uVar3) & 0x8000) == 0) {
                    *(undefined4 *)(iVar21 + 0x60) = 0x7fff8000;
                  }
                }
                *(undefined4 *)(iVar21 + 0x68) = uVar26;
                *(undefined4 *)(iVar21 + 100) = uVar26;
              }
            } while( true );
          }
          uVar24 = *(ushort *)(iVar21 + 0x6a);
          uVar19 = (ulonglong)*(uint *)(iVar21 + 0x66);
          uVar16 = (ulonglong)*(uint *)(iVar21 + 0x62);
          uVar11 = (ulonglong)*(ushort *)(iVar21 + 0x60);
        }
      }
      else {
        uVar16 = 0xffffffff80000000;
        uVar11 = 0x7fff;
        unaff_r22 = 2;
      }
    }
  }
  unaff_r20[5] = uVar24;
  *(int *)(unaff_r20 + 3) = (int)uVar19;
  *(int *)(unaff_r20 + 1) = (int)uVar16;
  *unaff_r20 = (ushort)uVar11 | (ushort)unaff_r19;
  return unaff_r22;
code_r0x98014fa4:
  while( true ) {
    *(int *)(iVar7 + -0xa0) = (int)unaff_r31;
    param_8 = param_8 + 4;
    *(uint *)param_8 = (uint)uVar16 >> (uVar22 & 0x3f) | (uint)param_7;
    param_7 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << ((uint)param_4 & 0x3f));
    iVar25 = iVar25 + -1;
    if (iVar25 == 0) break;
    uVar16 = (ulonglong)((uint *)param_8)[1];
    unaff_r31 = uVar16 & param_5;
  }
  param_8 = 3;
code_r0x98014fc4:
  iVar21 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_1 & 0x3fffffff) * -4;
  do {
    if (iVar21 < (int)param_1) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar21 = iVar21 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
    uVar20 = unaff_r23;
  } while (param_8 != 0);
  goto LAB_98015008;
  while( true ) {
    uVar22 = *(uint *)((int)lVar27 + -4);
    uVar18 = uVar22 + 1;
    if ((uVar18 < uVar22) || (param_3 = unaff_r23, uVar18 == 0)) {
      param_3 = param_1;
    }
    param_7 = param_7 - 1;
    lVar27 = lVar27 + -4;
    *(uint *)lVar27 = uVar18;
    if ((longlong)param_7 < 0) break;
LAB_98014d58:
    if ((int)param_3 == 0) break;
  }
LAB_98014d8c:
  uVar19 = unaff_r31 + 1;
  *(uint *)(unaff_r28 + (int)unaff_r29) =
       (int)unaff_r22 << (unaff_r30 & 0x3f) & *(uint *)(unaff_r28 + (int)unaff_r29);
  if ((int)uVar19 < 3) {
    param_7 = (uVar19 & 0x3fffffff) << 2;
    param_8 = uVar6 - 0x98;
code_r0x98014db0:
    uVar19 = 3 - uVar19;
    lVar27 = param_7 + param_8 + -4;
    uVar16 = uVar19 & 0xffffffff;
    while (uVar16 != 0) {
      lVar27 = lVar27 + 4;
      *(undefined4 *)lVar27 = uVar26;
      uVar19 = uVar19 - 1;
      uVar16 = uVar19;
    }
  }
  uVar19 = unaff_r21 + 1;
  iVar21 = (int)uVar19;
  param_4 = (longlong)(iVar21 >> 5) + (ulonglong)(iVar21 < 0 && (uVar19 & 0x1f) != 0);
  lVar8 = 3;
  lVar27 = uVar6 - 0x9c;
  uVar22 = iVar21 + ((iVar21 >> 5) + (uint)(iVar21 < 0 && (uVar19 & 0x1f) != 0)) * -0x20;
  uVar19 = unaff_r23;
  do {
    uVar18 = *(uint *)((int)lVar27 + 4);
    *(uint *)(iVar7 + -0xa0) = uVar18 & ~(unaff_r27 << (uVar22 & 0x3f));
    lVar27 = lVar27 + 4;
    *(uint *)lVar27 = uVar18 >> (uVar22 & 0x3f) | (uint)uVar19;
    uVar19 = (ulonglong)(uint)(*(int *)(iVar7 + -0xa0) << (0x20 - uVar22 & 0x3f));
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_8 = 3;
code_r0x98014e38:
  iVar21 = 2;
  lVar8 = uVar6 - 0x90;
  lVar27 = (uVar6 - 0x90) + (param_4 & 0x3fffffff) * -4;
  do {
    if (iVar21 < (int)param_4) {
      *(undefined4 *)lVar8 = uVar26;
    }
    else {
      *(undefined4 *)lVar8 = *(undefined4 *)lVar27;
    }
    iVar21 = iVar21 + -1;
    lVar27 = lVar27 + -4;
    lVar8 = lVar8 + -4;
    param_8 = param_8 - 1;
  } while (param_8 != 0);
  uVar20 = 2;
  param_3 = unaff_r23;
LAB_98015008:
  iVar23 = (int)param_3;
  param_8 = 0x1f - unaff_r21;
code_r0x9801500c:
  uVar19 = (ulonglong)*(uint *)(unaff_r20 + 8);
  param_8 = (ulonglong)(uint)(iVar23 << ((uint)param_8 & 0x3f)) |
            -(ulonglong)(unaff_r19 != 0) & 0xffffffff80000000 | (ulonglong)*(uint *)(iVar7 + -0x98);
  iVar21 = (int)param_8;
  if (*(uint *)(unaff_r20 + 8) == 0x40) {
    piVar9[1] = *(int *)(iVar7 + -0x94);
  }
  else {
LAB_98015044:
    iVar21 = (int)param_8;
    if ((int)uVar19 != 0x20) {
      return uVar20;
    }
  }
  *piVar9 = iVar21;
  return uVar20;
}


/* ==== FUN_98015418 @ 98015418 ==== */

/* WARNING: Removing unreachable block (ram,0x98015490) */
/* WARNING: Removing unreachable block (ram,0x98015498) */

ulonglong FUN_98015418(int param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
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
                    /* WARNING: Could not recover jumptable at 0x98015130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)((uint)UNK_98003e89 * 4 + -0x67feb2cc))();
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
      FUN_980165c0(uVar13 + 0x80,param_4,uVar13 + 0x60);
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
          lVar29 = -0x67fe4028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x67fe3ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x980155ac:
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
                  FUN_9800d650(uVar13 + 0x70,uVar16,0xc);
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
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x980155ac;
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
                    goto joined_r0x980155ac;
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
              goto joined_r0x980155ac;
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


/* ==== FUN_9801547c @ 9801547c ==== */

/* WARNING: Removing unreachable block (ram,0x98015490) */
/* WARNING: Removing unreachable block (ram,0x98015274) */
/* WARNING: Removing unreachable block (ram,0x9801594c) */
/* WARNING: Removing unreachable block (ram,0x98015280) */
/* WARNING: Removing unreachable block (ram,0x98015288) */
/* WARNING: Removing unreachable block (ram,0x98015298) */
/* WARNING: Removing unreachable block (ram,0x980152a0) */
/* WARNING: Removing unreachable block (ram,0x980152ac) */
/* WARNING: Removing unreachable block (ram,0x98015938) */
/* WARNING: Removing unreachable block (ram,0x980152b4) */
/* WARNING: Removing unreachable block (ram,0x98015518) */
/* WARNING: Removing unreachable block (ram,0x9801550c) */
/* WARNING: Removing unreachable block (ram,0x98015520) */
/* WARNING: Removing unreachable block (ram,0x98015538) */
/* WARNING: Removing unreachable block (ram,0x9801553c) */
/* WARNING: Removing unreachable block (ram,0x98015548) */
/* WARNING: Removing unreachable block (ram,0x9801554c) */
/* WARNING: Removing unreachable block (ram,0x98015554) */
/* WARNING: Removing unreachable block (ram,0x98015558) */
/* WARNING: Removing unreachable block (ram,0x98015964) */
/* WARNING: Removing unreachable block (ram,0x98015560) */
/* WARNING: Removing unreachable block (ram,0x9801597c) */
/* WARNING: Removing unreachable block (ram,0x98015568) */
/* WARNING: Removing unreachable block (ram,0x98015580) */
/* WARNING: Removing unreachable block (ram,0x98015584) */
/* WARNING: Removing unreachable block (ram,0x98015594) */
/* WARNING: Removing unreachable block (ram,0x980155b0) */
/* WARNING: Removing unreachable block (ram,0x980155c4) */
/* WARNING: Removing unreachable block (ram,0x980155d4) */
/* WARNING: Removing unreachable block (ram,0x980155e8) */
/* WARNING: Removing unreachable block (ram,0x98015604) */
/* WARNING: Removing unreachable block (ram,0x98015644) */
/* WARNING: Removing unreachable block (ram,0x9801564c) */
/* WARNING: Removing unreachable block (ram,0x98015658) */
/* WARNING: Removing unreachable block (ram,0x98015668) */
/* WARNING: Removing unreachable block (ram,0x98015670) */
/* WARNING: Removing unreachable block (ram,0x98015684) */
/* WARNING: Removing unreachable block (ram,0x98015690) */
/* WARNING: Removing unreachable block (ram,0x9801569c) */
/* WARNING: Removing unreachable block (ram,0x980156a4) */
/* WARNING: Removing unreachable block (ram,0x980156ac) */
/* WARNING: Removing unreachable block (ram,0x980156c4) */
/* WARNING: Removing unreachable block (ram,0x980156d0) */
/* WARNING: Removing unreachable block (ram,0x980156dc) */
/* WARNING: Removing unreachable block (ram,0x980156e8) */
/* WARNING: Removing unreachable block (ram,0x980156f4) */
/* WARNING: Removing unreachable block (ram,0x98015704) */
/* WARNING: Removing unreachable block (ram,0x98015724) */
/* WARNING: Removing unreachable block (ram,0x9801572c) */
/* WARNING: Removing unreachable block (ram,0x98015730) */
/* WARNING: Removing unreachable block (ram,0x9801573c) */
/* WARNING: Removing unreachable block (ram,0x98015748) */
/* WARNING: Removing unreachable block (ram,0x98015754) */
/* WARNING: Removing unreachable block (ram,0x98015764) */
/* WARNING: Removing unreachable block (ram,0x98015774) */
/* WARNING: Removing unreachable block (ram,0x98015780) */
/* WARNING: Removing unreachable block (ram,0x980157c4) */
/* WARNING: Removing unreachable block (ram,0x980157cc) */
/* WARNING: Removing unreachable block (ram,0x980157e0) */
/* WARNING: Removing unreachable block (ram,0x980157e8) */
/* WARNING: Removing unreachable block (ram,0x980157f4) */
/* WARNING: Removing unreachable block (ram,0x980157f8) */
/* WARNING: Removing unreachable block (ram,0x9801582c) */
/* WARNING: Removing unreachable block (ram,0x9801583c) */
/* WARNING: Removing unreachable block (ram,0x9801584c) */
/* WARNING: Removing unreachable block (ram,0x98015858) */
/* WARNING: Removing unreachable block (ram,0x9801586c) */
/* WARNING: Removing unreachable block (ram,0x980158c4) */
/* WARNING: Removing unreachable block (ram,0x98015878) */
/* WARNING: Removing unreachable block (ram,0x980158b8) */
/* WARNING: Removing unreachable block (ram,0x98015888) */
/* WARNING: Removing unreachable block (ram,0x980158ac) */
/* WARNING: Removing unreachable block (ram,0x98015898) */
/* WARNING: Removing unreachable block (ram,0x980158cc) */
/* WARNING: Removing unreachable block (ram,0x980158d8) */
/* WARNING: Removing unreachable block (ram,0x98015904) */
/* WARNING: Removing unreachable block (ram,0x98015910) */
/* WARNING: Removing unreachable block (ram,0x9801578c) */
/* WARNING: Removing unreachable block (ram,0x98015660) */
/* WARNING: Removing unreachable block (ram,0x98015914) */
/* WARNING: Removing unreachable block (ram,0x9801591c) */
/* WARNING: Removing unreachable block (ram,0x98015924) */
/* WARNING: Removing unreachable block (ram,0x9800dca4) */

undefined8 FUN_9801547c(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x98015130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)UNK_98003e87 * 4 + -0x67feb2cc))();
  return uVar1;
}


/* ==== FUN_98015488 @ 98015488 ==== */

/* WARNING: Removing unreachable block (ram,0x980150fc) */
/* WARNING: Removing unreachable block (ram,0x9801510c) */

ulonglong FUN_98015488(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,int param_5)

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
      FUN_980165c0(uVar13 + 0x80,param_4,uVar13 + 0x60);
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
          lVar29 = -0x67fe4028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x67fe3ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x980155ac:
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
                  FUN_9800d650(uVar13 + 0x70,uVar16,0xc);
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
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x980155ac;
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
                    goto joined_r0x980155ac;
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
              goto joined_r0x980155ac;
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


/* ==== FUN_980154ac @ 980154ac ==== */

ulonglong FUN_980154ac(int param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
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
      FUN_980165c0(uVar13 + 0x80,param_4,uVar13 + 0x60);
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
          lVar29 = -0x67fe4028;
          iVar7 = _uStack00000064;
          iVar8 = _uStack00000068;
          if (iVar27 != 0) {
            if (iVar27 < 0) {
              uVar26 = -uVar26;
              lVar29 = -0x67fe3ec8;
            }
            iVar27 = (int)uVar26;
            uVar11 = uStack00000060;
            uVar12 = uStack00000062;
            iVar25 = CONCAT22(uStack00000068,-(ushort)(unaff_r23 != 0) & uStack0000006a);
joined_r0x980155ac:
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
                  FUN_9800d650(uVar13 + 0x70,uVar16,0xc);
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
                         iVar25 = iVar10, puVar17[2] == 0)))) goto joined_r0x980155ac;
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
                    goto joined_r0x980155ac;
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
              goto joined_r0x980155ac;
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


/* ==== FUN_980159b8 @ 980159b8 ==== */

/* WARNING: Removing unreachable block (ram,0x980161d4) */
/* WARNING: Removing unreachable block (ram,0x980160a8) */
/* WARNING: Removing unreachable block (ram,0x98015ea0) */
/* WARNING: Removing unreachable block (ram,0x98016090) */
/* WARNING: Removing unreachable block (ram,0x980160b4) */
/* WARNING: Removing unreachable block (ram,0x98016250) */
/* WARNING: Removing unreachable block (ram,0x98016290) */
/* WARNING: Removing unreachable block (ram,0x98016260) */
/* WARNING: Removing unreachable block (ram,0x98016284) */
/* WARNING: Removing unreachable block (ram,0x98016270) */
/* WARNING: Removing unreachable block (ram,0x98015ee8) */
/* WARNING: Removing unreachable block (ram,0x9801621c) */
/* WARNING: Removing unreachable block (ram,0x98015f10) */
/* WARNING: Removing unreachable block (ram,0x98015f68) */
/* WARNING: Removing unreachable block (ram,0x98015f1c) */
/* WARNING: Removing unreachable block (ram,0x98015f5c) */
/* WARNING: Removing unreachable block (ram,0x98015f2c) */
/* WARNING: Removing unreachable block (ram,0x98015f50) */
/* WARNING: Removing unreachable block (ram,0x98015f3c) */
/* WARNING: Removing unreachable block (ram,0x98016244) */

void FUN_980159b8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,longlong param_5)

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
  uVar8 = FUN_9800dc40();
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
    goto LAB_98016574;
  }
  if (uVar26 == 0x7fff) {
    *psVar4 = 1;
    if (((uStack00000012 == 0x80000000) && (iVar3 == 0)) || ((uVar8 & 0x400000000000) != 0)) {
      if (((uVar8 & 0x8000000000000000) == 0) || (uStack00000012 != 0xc0000000)) {
        if ((uStack00000012 != 0x80000000) || (iVar3 != 0)) goto LAB_98015b8c;
        iVar9 = FUN_9800e338((undefined1 *)(psVar4 + 2),0x16,"1#INF");
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_9800d620();
        }
      }
      else {
        if (iVar3 != 0) {
LAB_98015b8c:
          iVar9 = FUN_9800e338((undefined1 *)(psVar4 + 2),0x16,"1#QNAN");
          if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_9800d620();
          }
          goto LAB_98015ba8;
        }
        iVar9 = FUN_9800e338((undefined1 *)(psVar4 + 2),0x16,"1#IND");
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_9800d620();
        }
      }
      uVar21 = 5;
    }
    else {
      iVar9 = FUN_9800e338((undefined1 *)(psVar4 + 2),0x16,"1#SNAN");
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800d620();
      }
LAB_98015ba8:
      uVar21 = 6;
    }
    *(undefined1 *)((int)psVar4 + 3) = uVar21;
    goto LAB_98016574;
  }
  uStack_e6 = (ushort)(uVar8 >> 0x20);
  local_e8 = (byte)(uVar26 >> 8);
  uStack_e7 = (undefined1)uVar26;
  sVar14 = (short)(((uStack00000012 >> 0x17 & 0x1fe) + (uVar26 >> 8)) * 0x4d + uVar26 * 0x4d10 +
                   -0x134312f4 >> 0x10);
  uVar24 = -(longlong)sVar14;
  lVar23 = -0x67fe4028;
  if (uVar24 == 0) {
LAB_98015fe0:
    uVar25 = (ulonglong)uStack00000018 << 0x10;
    uVar8 = uVar8 & 0xffffffff;
  }
  else {
    bVar1 = (int)uVar24 == 0;
    if ((int)uVar24 < 0) {
      bVar1 = sVar14 == 0;
      lVar23 = -0x67fe3ec8;
      uVar24 = (longlong)sVar14;
    }
    if (bVar1) goto LAB_98015fe0;
    uVar25 = (ulonglong)uStack00000018 << 0x10;
    uVar8 = uVar8 & 0xffffffff;
    do {
      uVar10 = uVar24 & 7;
      lVar23 = lVar23 + 0x54;
      iVar3 = (int)uVar24 >> 3;
      uVar24 = (ulonglong)iVar3;
      if (uVar10 == 0) goto LAB_98015fd0;
      uVar10 = uVar10 * 0xc + lVar23;
      if (0x7fff < *(ushort *)((int)uVar10 + 10)) {
        FUN_9800d650(uVar7 - 0xa8,uVar10,0xc);
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
LAB_98015d18:
          local_e8 = 0;
          uStack_e7 = 0;
          uStack_e6 = 0;
          goto LAB_98015fc0;
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
             && (puVar11[2] == 0)) goto LAB_98015d18;
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
          if (0x7ffe < uVar15) goto LAB_98015fb0;
          local_e8 = (byte)(uVar26 >> 8) | (byte)(uVar15 >> 8);
          uStack_e6 = 0;
          uVar8 = 0;
          uVar25 = 0;
          uStack_e7 = (undefined1)uVar15;
        }
      }
      else {
LAB_98015fb0:
        local_e8 = 0xff;
        uStack_e7 = 0xff;
        uStack_e6 = 0x8000;
        if (uVar26 == 0) {
          local_e8 = 0x7f;
          uStack_e7 = 0xff;
          uStack_e6 = 0x8000;
        }
LAB_98015fc0:
        uVar8 = 0;
        uVar25 = 0;
      }
LAB_98015fd0:
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
          if (0x7ffe < uVar17) goto LAB_980162e0;
          local_e8 = (byte)((uVar26 & 0x8000) >> 8) | (byte)(uVar17 >> 8);
          uStack_e7 = (undefined1)uVar17;
          uStack_e6 = 0;
          uVar25 = 0;
          uVar8 = 0;
        }
        goto LAB_980162f8;
      }
      local_e8 = 0;
      uStack_e7 = 0;
      uStack_e6 = 0;
    }
    else {
LAB_980162e0:
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
LAB_980162f8:
  *psVar4 = sVar14;
  if ((uStack0000002c & 1) == 0) {
    uVar24 = (ulonglong)uStack00000024;
LAB_98016354:
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
        FUN_9800d650(uVar7 - 0xa8,uVar7 - 0xe8,0xc);
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
        goto LAB_98016338;
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
    if (0 < (longlong)uVar24) goto LAB_98016354;
    *psVar4 = 0;
    uVar21 = 0x2d;
    if (uVar6 != 0x8000) {
      uVar21 = 0x20;
    }
    *(undefined1 *)(psVar4 + 2) = 0x30;
LAB_98016338:
    *(undefined1 *)(psVar4 + 1) = uVar21;
    *(undefined1 *)((int)psVar4 + 5) = 0;
    *(undefined1 *)((int)psVar4 + 3) = 1;
  }
LAB_98016574:
  FUN_9800dc90();
  return;
}


/* ==== FUN_980165c0 @ 980165c0 ==== */

void FUN_980165c0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

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
  
  pcVar3 = (char *)FUN_9800dc74();
  puVar1 = (uint *)param_3;
  puVar1[2] = 0;
  sVar8 = 0x404e;
  puVar1[1] = 0;
  *puVar1 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      FUN_9800d650(ZEXT48(&stack0x00000000) - 0x40,param_3,0xc);
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
    if (*puVar1 != 0) goto LAB_9801683c;
  }
  do {
    uVar5 = puVar1[2];
    puVar1[2] = uVar5 << 0x10;
    uVar6 = puVar1[1] >> 0x10;
    *puVar1 = uVar6;
    sVar8 = sVar8 + -0x10;
    puVar1[1] = puVar1[1] << 0x10 | uVar5 >> 0x10;
  } while (uVar6 == 0);
LAB_9801683c:
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


/* ==== FUN_98016858 @ 98016858 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_98016858(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (_UNK_980020e0 != (code *)0x0) {
    (*_UNK_980020e0)();
  }
  puVar3 = (undefined4 *)0x9801b018;
  uVar2 = 0;
  do {
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      uVar2 = (*(code *)*puVar3)();
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < (undefined4 *)0x9801b024);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined4 *)0x9801b010;
    do {
      pcVar1 = (code *)*puVar3;
      if ((pcVar1 != (code *)0x0) && (pcVar1 != (code *)0xffffffff)) {
        (*pcVar1)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < (undefined4 *)0x9801b014);
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_98016938 @ 98016938 ==== */

void FUN_98016938(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_9801b000;
  iVar1 = 0;
  do {
    if (iVar1 != 0) {
      return;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined4 *)0x9801b00c);
  return;
}


/* ==== FUN_980169b0 @ 980169b0 ==== */

void FUN_980169b0(void)

{
  if (DAT_9801cc58 != 0) {
    FUN_980176b0();
    DAT_9801cc58 = 0;
  }
  if (iRam9801cc54 != 0) {
    FUN_980176b0();
    iRam9801cc54 = 0;
  }
  return;
}


/* ==== FUN_98016a10 @ 98016a10 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_98016a10(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uStack_58;
  undefined4 auStack_50 [14];
  
  iVar3 = 0x100000;
  if (((*_UNK_98000480 == 0) ||
      (piVar1 = (int *)func_0x9801ad10(*(undefined4 *)(*_UNK_98000480 + 0x58),0x20401),
      piVar1 == (int *)0x0)) || (iVar3 = *piVar1, iVar3 != 0)) {
    puVar2 = &uStack_58;
    lVar5 = 6;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    auStack_50[0] = 0x30;
    if (DAT_9801cc58 == 0) {
      DAT_9801cc58 = FUN_98018500(2,0,iVar3,0x1000,0,auStack_50);
    }
    FUN_9801a5c0();
    bVar4 = DAT_9801cc58 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


/* ==== FUN_98016ae8 @ 98016ae8 ==== */

undefined4 FUN_98016ae8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_9801cc60;
  DAT_9801cc60 = param_1;
  return uVar1;
}


/* ==== FUN_98016b00 @ 98016b00 ==== */

undefined8 FUN_98016b00(undefined8 param_1)

{
  int iVar1;
  
  if (*DAT_98000484 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*DAT_98000484 + 0x18))(10,0);
  }
  if (((iVar1 == 0) && (DAT_9801cc60 != (code *)0x0)) &&
     (iVar1 = (*DAT_9801cc60)(param_1), iVar1 == -1)) {
    return 0xffffffffffffffff;
  }
  return 0;
}


/* ==== FUN_98016b90 @ 98016b90 ==== */

undefined4 * FUN_98016b90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 *local_24 [3];
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    local_30 = *(undefined4 **)(iVar1 + 0x48);
    if (local_30 == (undefined4 *)0x0) {
LAB_98016c38:
      local_30 = (undefined4 *)0x0;
      local_28 = 0x100000;
      iVar1 = func_0x9801ad20(&local_30,&local_28,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
      if (-1 < iVar1) {
        local_2c = 0x10000;
        iVar1 = func_0x9801ad20(&local_30,&local_2c,0x60001000,4,
                                *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x590));
        if (-1 < iVar1) {
          *local_30 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48);
          *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x48) = local_30;
          local_30[1] = local_28;
          local_30[2] = local_2c;
          local_24[0] = local_30 + 4;
          goto LAB_98016cfc;
        }
        func_0x9801ad40(&local_30,&local_28,0x8000,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x590)
                       );
      }
    }
    else {
      if (local_30[2] == local_30[1]) goto LAB_98016c38;
      local_2c = 0x10000;
      local_24[0] = (undefined4 *)(local_30[2] + (int)local_30);
      iVar1 = func_0x9801ad20(local_24,&local_2c,0x60001000,4,*(undefined4 *)(iVar1 + 0x590));
      if (-1 < iVar1) {
        local_30[2] = local_30[2] + local_2c;
LAB_98016cfc:
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
        if (local_24[0] < (undefined4 *)(local_30[2] + (int)local_30)) {
          lVar4 = (ulonglong)((uint)(local_30[2] + (int)local_30 + (-1 - (int)local_24[0])) >> 4) +
                  1;
          puVar3 = puVar2;
          do {
            puVar2 = local_24[0];
            *puVar3 = puVar2;
            lVar4 = lVar4 + -1;
            puVar3 = puVar2;
            local_24[0] = puVar2 + 4;
          } while (lVar4 != 0);
        }
        *puVar2 = 0;
        iVar1 = *(int *)(param_1 + 0x18);
        goto LAB_98016d44;
      }
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_98016d44:
    puVar2 = *(undefined4 **)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x4c) = *puVar2;
  }
  return puVar2;
}


/* ==== FUN_98016d68 @ 98016d68 ==== */

void FUN_98016d68(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = FUN_9800dc78();
  uVar6 = (undefined4)param_2;
  uVar4 = (uint)param_3;
  puVar3 = *(undefined4 **)(iVar2 + 0x38);
  puVar1 = (undefined4 *)(iVar2 + 0x38);
  do {
    puVar7 = puVar3;
    if (puVar7 == (undefined4 *)0x0) {
LAB_98016e0c:
      puVar3 = FUN_98016b90(iVar2);
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
      goto LAB_98016e0c;
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


/* ==== FUN_98016e88 @ 98016e88 ==== */

ushort * FUN_98016e88(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

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
  
  iVar8 = FUN_9800dc6c();
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
    iVar8 = func_0x9801ad20(&stack0xffffffb0,param_3,0x60001000,4,*(undefined4 *)(iVar8 + 0x590));
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


/* ==== FUN_98017118 @ 98017118 ==== */

undefined8 FUN_98017118(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_10;
  undefined4 auStack_c [3];
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    auStack_c[0] = *(undefined4 *)(param_1 + 0x20);
    uStack_10 = 0;
    uVar1 = func_0x9801ad40(auStack_c,&uStack_10,0x8000,param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_98017170 @ 98017170 ==== */

ulonglong FUN_98017170(undefined8 param_1,ulonglong param_2,uint *param_3,int param_4)

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
  ulonglong uVar11;
  longlong lVar12;
  
  uVar9 = (ulonglong)param_4;
  iVar8 = FUN_9800dc6c();
  puVar6 = (ushort *)param_2;
  uVar11 = param_2 + (ulonglong)puVar6[1] * -0x10;
  if ((uVar11 & 0xffffffff) != (param_2 & 0xffffffff)) {
    puVar7 = (ushort *)uVar11;
    if (((*(byte *)((int)puVar7 + 5) & 1) == 0) && ((uint)*puVar7 + *param_3 < 0xf001)) {
      if ((uVar9 & 0xffffffff) != 0) {
        puVar3 = *(uint **)(puVar6 + 6);
        puVar4 = *(uint **)(puVar6 + 4);
        if (((ulonglong)*puVar3 == (ulonglong)puVar4[1]) &&
           ((ulonglong)*puVar3 == (param_2 + 8 & 0xffffffff))) {
          *puVar3 = (uint)puVar4;
          puVar4[1] = (uint)puVar3;
          if (puVar4 == puVar3) {
            uVar2 = *puVar6;
            if (uVar2 < 0x80) {
              iVar5 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
            }
          }
        }
        if ((*(byte *)((int)puVar6 + 5) & 4) != 0) {
          uVar9 = (ulonglong)*puVar6 * 0x10 - 0x18;
          if (((*(byte *)((int)puVar6 + 5) & 2) != 0) && (4 < (uVar9 & 0xffffffff))) {
            uVar9 = (ulonglong)*puVar6 * 0x10 - 0x1c;
          }
          func_0x9801ad50(param_2 + 0x18,uVar9,0xfffffffffeeefeee);
        }
        uVar9 = 0;
        *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar6;
      }
      puVar3 = *(uint **)(puVar7 + 6);
      puVar4 = *(uint **)(puVar7 + 4);
      if (((ulonglong)*puVar3 == (ulonglong)puVar4[1]) &&
         ((ulonglong)*puVar3 == (uVar11 + 8 & 0xffffffff))) {
        *puVar3 = (uint)puVar4;
        puVar4[1] = (uint)puVar3;
        if (puVar4 == puVar3) {
          uVar2 = *puVar7;
          if (uVar2 < 0x80) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
          }
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        uVar10 = (ulonglong)*puVar7 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar10 & 0xffffffff))) {
          uVar10 = (ulonglong)*puVar7 * 0x10 - 0x1c;
        }
        func_0x9801ad50(uVar11 + 0x18,uVar10,0xfffffffffeeefeee);
      }
      bVar1 = *(byte *)((int)puVar6 + 5);
      *(byte *)((int)puVar7 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(puVar7 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar7;
      }
      *param_3 = (uint)*puVar7 + *param_3;
      *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar7;
      *puVar7 = (ushort)*param_3;
      param_2 = uVar11;
      if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
        puVar7[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
  puVar6 = (ushort *)param_2;
  if ((*(byte *)((int)puVar6 + 5) & 0x10) == 0) {
    lVar12 = ((ulonglong)*param_3 & 0xfffffff) * 0x10 + param_2;
    puVar7 = (ushort *)lVar12;
    if (((*(byte *)((int)puVar7 + 5) & 1) == 0) && ((uint)*puVar7 + *param_3 < 0xf001)) {
      if ((uVar9 & 0xffffffff) != 0) {
        puVar3 = *(uint **)(puVar6 + 6);
        puVar4 = *(uint **)(puVar6 + 4);
        if (((ulonglong)*puVar3 == (ulonglong)puVar4[1]) &&
           ((ulonglong)*puVar3 == (param_2 + 8 & 0xffffffff))) {
          *puVar3 = (uint)puVar4;
          puVar4[1] = (uint)puVar3;
          if (puVar4 == puVar3) {
            uVar2 = *puVar6;
            if (uVar2 < 0x80) {
              iVar5 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
            }
          }
        }
        if ((*(byte *)((int)puVar6 + 5) & 4) != 0) {
          uVar9 = (ulonglong)*puVar6 * 0x10 - 0x18;
          if (((*(byte *)((int)puVar6 + 5) & 2) != 0) && (4 < (uVar9 & 0xffffffff))) {
            uVar9 = (ulonglong)*puVar6 * 0x10 - 0x1c;
          }
          func_0x9801ad50(param_2 + 0x18,uVar9,0xfffffffffeeefeee);
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
      if (((ulonglong)*puVar3 == (ulonglong)puVar4[1]) &&
         ((ulonglong)*puVar3 == (lVar12 + 8U & 0xffffffff))) {
        *puVar3 = (uint)puVar4;
        puVar4[1] = (uint)puVar3;
        if (puVar4 == puVar3) {
          uVar2 = *puVar7;
          if (uVar2 < 0x80) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar5 + iVar8) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + iVar8);
          }
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        uVar9 = (ulonglong)*puVar7 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar9 & 0xffffffff))) {
          uVar9 = (ulonglong)*puVar7 * 0x10 - 0x1c;
        }
        func_0x9801ad50(lVar12 + 0x18,uVar9,0xfffffffffeeefeee);
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


/* ==== FUN_98017578 @ 98017578 ==== */

void FUN_98017578(undefined8 param_1,ulonglong param_2,ulonglong param_3)

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
  
  lVar9 = FUN_9800dc78();
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


/* ==== FUN_980176b0 @ 980176b0 ==== */

undefined8 FUN_980176b0(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puStack_30;
  undefined4 auStack_2c [9];
  undefined4 uStack_8;
  
  iVar5 = FUN_9800dc78();
  if (iVar5 != 0) {
    if ((*(uint *)(iVar5 + 0x14) & 0x40000) != 0) {
      uVar6 = FUN_9801abc0();
      if (*(byte *)(iVar5 + 0x17b) != uVar6) {
        func_0x9801ad30(0xf4,iVar5,uStack_8,0x520,0);
      }
    }
    puVar1 = *(uint **)(iVar5 + 0x58);
    while ((uint *)(iVar5 + 0x58) != puVar1) {
      puVar2 = (uint *)*puVar1;
      auStack_2c[0] = 0;
      puStack_30 = puVar1;
      func_0x9801ad40(&puStack_30,auStack_2c,0x8000,*(undefined4 *)(iVar5 + 0x590));
      puVar1 = puVar2;
    }
    if ((*(uint *)(iVar5 + 0x14) & 1) == 0) {
      *(undefined4 *)(iVar5 + 0x580) = 0;
    }
    puVar1 = *(uint **)(iVar5 + 0x48);
    *(undefined4 *)(iVar5 + 0x48) = 0;
    while (puVar1 != (uint *)0x0) {
      puVar2 = (uint *)*puVar1;
      auStack_2c[0] = 0;
      puStack_30 = puVar1;
      func_0x9801ad40(&puStack_30,auStack_2c,0x8000,*(undefined4 *)(iVar5 + 0x590));
      puVar1 = puVar2;
    }
    uVar3 = *(undefined4 *)(iVar5 + 0x590);
    uVar6 = 0x40;
    do {
      uVar6 = uVar6 + 0xff & 0xff;
      iVar4 = *(int *)((uVar6 + 0x18) * 4 + iVar5);
      if (iVar4 != 0) {
        FUN_98017118(iVar4,uVar3);
      }
    } while (uVar6 != 0);
  }
  return 0;
}


/* ==== FUN_980177c8 @ 980177c8 ==== */

undefined8
FUN_980177c8(undefined8 param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
            ulonglong param_5)

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
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  longlong lVar13;
  ushort uVar15;
  uint *puVar14;
  ulonglong uVar16;
  uint local_60 [24];
  
  uVar9 = FUN_9800dc60();
  iVar6 = (int)uVar9;
  if ((ulonglong)*(uint *)(iVar6 + 0x1c) < (param_5 & 0xffffffff)) {
    return 0;
  }
  puVar12 = (ushort *)param_3;
  uVar15 = *puVar12;
  bVar1 = *(byte *)((int)puVar12 + 5);
  uVar16 = (ulonglong)uVar15 * 0x10 + param_3;
  if ((bVar1 & 0x10) == 0) {
    puVar7 = (ushort *)uVar16;
    bVar2 = *(byte *)((int)puVar7 + 5);
    if ((bVar2 & 1) != 0) {
      return 0;
    }
    local_60[0] = (uint)*puVar7 + (uint)uVar15;
    if ((ulonglong)local_60[0] < (param_5 & 0xffffffff)) {
      return 0;
    }
    puVar14 = *(uint **)(puVar7 + 6);
    puVar3 = *(uint **)(puVar7 + 4);
    if (((ulonglong)*puVar14 == (ulonglong)puVar3[1]) &&
       ((ulonglong)*puVar14 == (uVar16 + 8 & 0xffffffff))) {
      *puVar14 = (uint)puVar3;
      puVar3[1] = (uint)puVar14;
      if ((puVar3 == puVar14) && (uVar15 = *puVar7, uVar15 < 0x80)) {
        iVar5 = ((uVar15 >> 5) + 0x58) * 4;
        *(uint *)(iVar5 + iVar6) = 1 << (uVar15 & 0x1f) ^ *(uint *)(iVar5 + iVar6);
      }
    }
    if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
      uVar10 = (ulonglong)*puVar7 * 0x10 - 0x18;
      if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar10 & 0xffffffff))) {
        uVar10 = (ulonglong)*puVar7 * 0x10 - 0x1c;
      }
      func_0x9801ad50(uVar16 + 0x18,uVar10,0xfffffffffeeefeee);
    }
    uVar16 = (ulonglong)local_60[0];
    *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) - (uint)*puVar7;
  }
  else {
    local_60[0] = (int)((param_5 - uVar15 & 0xffffffff) << 4) + 0xffffU & 0xffff0000;
    uVar10 = uVar9;
    FUN_98016e88(uVar9,(ulonglong)*(uint *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar6),
                 ZEXT48(&stack0x00000000) - 0x60,uVar16);
    if (uVar10 == 0) {
      return 0;
    }
    local_60[0] = local_60[0] >> 4;
    uVar10 = FUN_98017170(uVar9,uVar10,local_60,0);
    bVar2 = *(byte *)((int)uVar10 + 5);
    uVar16 = (ulonglong)*puVar12 + (ulonglong)local_60[0];
    if ((uVar16 & 0xffffffff) < (param_5 & 0xffffffff)) {
      FUN_98017578(uVar9,uVar10,(ulonglong)local_60[0]);
      *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + local_60[0];
      return 0;
    }
  }
  uVar16 = uVar16 - param_5;
  local_60[0] = (uint)uVar16;
  uVar10 = (ulonglong)*puVar12 * 0x10 - (ulonglong)*(byte *)(puVar12 + 3);
  if ((uVar16 & 0xffffffff) < 3) {
    param_5 = uVar16 + param_5;
    uVar16 = 0;
    local_60[0] = 0;
  }
  if ((bVar1 & 2) != 0) {
    uVar15 = *puVar12;
    iVar5 = (int)((param_5 & 0xffffffff) << 4);
    *(undefined8 *)((int)puVar12 + iVar5 + -0x10) = *(undefined8 *)(puVar12 + (uint)uVar15 * 8 + -8)
    ;
    *(undefined8 *)((int)puVar12 + iVar5 + -8) = *(undefined8 *)(puVar12 + (uint)uVar15 * 8 + -4);
    uVar16 = (ulonglong)local_60[0];
  }
  uVar15 = (ushort)param_5;
  if ((uVar16 & 0xffffffff) == 0) {
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) | bVar2 & 0x10;
    *(char *)(puVar12 + 3) = (char)((param_5 & 0xffffffff) << 4) - (char)param_4;
    *puVar12 = uVar15;
    if ((bVar2 & 0x10) == 0) {
      *(ushort *)((int)puVar12 + (int)((param_5 & 0xffff) << 4) + 2) = uVar15;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar6) + 0x40) = puVar12;
    }
    goto LAB_98017d0c;
  }
  lVar13 = (param_5 & 0xfffffff) * 0x10;
  uVar16 = lVar13 + param_3;
  *puVar12 = uVar15;
  *(char *)(puVar12 + 3) = (char)lVar13 - (char)param_4;
  puVar7 = (ushort *)uVar16;
  puVar7[1] = uVar15;
  bVar1 = *(byte *)(puVar12 + 2);
  *(byte *)(puVar7 + 2) = bVar1;
  uVar15 = (ushort)local_60[0];
  if ((bVar2 & 0x10) == 0) {
    lVar13 = ((ulonglong)local_60[0] & 0xfffffff) * 0x10 + uVar16;
    puVar8 = (ushort *)lVar13;
    bVar1 = *(byte *)((int)puVar8 + 5);
    if ((bVar1 & 1) == 0) {
      puVar14 = *(uint **)(puVar8 + 6);
      puVar3 = *(uint **)(puVar8 + 4);
      if (((ulonglong)*puVar14 == (ulonglong)puVar3[1]) &&
         ((ulonglong)*puVar14 == (lVar13 + 8U & 0xffffffff))) {
        *puVar14 = (uint)puVar3;
        puVar3[1] = (uint)puVar14;
        if ((puVar3 == puVar14) && (uVar15 = *puVar8, uVar15 < 0x80)) {
          iVar5 = ((uVar15 >> 5) + 0x58) * 4;
          *(uint *)(iVar5 + iVar6) = 1 << (uVar15 & 0x1f) ^ *(uint *)(iVar5 + iVar6);
        }
      }
      if ((*(byte *)((int)puVar8 + 5) & 4) != 0) {
        uVar11 = (ulonglong)*puVar8 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar8 + 5) & 2) != 0) && (4 < (uVar11 & 0xffffffff))) {
          uVar11 = (ulonglong)*puVar8 * 0x10 - 0x1c;
        }
        func_0x9801ad50(lVar13 + 0x18,uVar11,0xfffffffffeeefeee);
      }
      *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) - (uint)*puVar8;
      local_60[0] = *puVar8 + local_60[0];
      *(byte *)((int)puVar7 + 5) = bVar1;
      if (0xf000 < (ulonglong)local_60[0]) {
        FUN_98017578(uVar9,uVar16,(ulonglong)local_60[0]);
        goto LAB_98017d0c;
      }
      *puVar7 = (ushort)local_60[0];
      if ((bVar1 & 0x10) == 0) {
        puVar7[local_60[0] * 8 + 1] = (ushort)local_60[0];
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar7 + 2) + 0x18) * 4 + iVar6) + 0x40) = puVar7;
      }
      *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) & 0xf8;
      uVar16 = (ulonglong)local_60[0] & 0xffff;
      if (uVar16 < 0x80) goto LAB_98017c74;
      for (puVar14 = *(uint **)(iVar6 + 0x180);
          ((uVar9 + 0x180 & 0xffffffff) != ZEXT48(puVar14) && (*(ushort *)(puVar14 + -2) < uVar16));
          puVar14 = (uint *)*puVar14) {
      }
    }
    else {
      *(byte *)((int)puVar7 + 5) = bVar2 & 0xef;
      *puVar7 = uVar15;
      puVar7[local_60[0] * 8 + 1] = uVar15;
      *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) & 0xf8;
      uVar16 = (ulonglong)local_60[0] & 0xffff;
      if (uVar16 < 0x80) goto LAB_98017c74;
      for (puVar14 = *(uint **)(iVar6 + 0x180);
          ((uVar9 + 0x180 & 0xffffffff) != ZEXT48(puVar14) && (*(ushort *)(puVar14 + -2) < uVar16));
          puVar14 = (uint *)*puVar14) {
      }
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + iVar6) + 0x40) = puVar7;
    *(byte *)((int)puVar7 + 5) = bVar2;
    *(byte *)((int)puVar7 + 5) = bVar2 & 0xf8;
    *puVar7 = uVar15;
    uVar16 = (ulonglong)local_60[0] & 0xffff;
    if (uVar16 < 0x80) {
LAB_98017c74:
      uVar9 = (uVar16 + 0x30) * 8 + uVar9;
      puVar14 = (uint *)uVar9;
      if ((ulonglong)*puVar14 == (uVar9 & 0xffffffff)) {
        iVar5 = ((*puVar7 >> 5) + 0x58) * 4;
        *(uint *)(iVar5 + iVar6) = 1 << (*puVar7 & 0x1f) | *(uint *)(iVar5 + iVar6);
      }
    }
    else {
      for (puVar14 = *(uint **)(iVar6 + 0x180);
          ((uVar9 + 0x180 & 0xffffffff) != ZEXT48(puVar14) && (*(ushort *)(puVar14 + -2) < uVar16));
          puVar14 = (uint *)*puVar14) {
      }
    }
  }
  puVar4 = (undefined4 *)puVar14[1];
  *(uint **)(puVar7 + 4) = puVar14;
  *(undefined4 **)(puVar7 + 6) = puVar4;
  *puVar4 = puVar7 + 4;
  puVar14[1] = (uint)(puVar7 + 4);
  *(uint *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + local_60[0];
LAB_98017d0c:
  if (((param_2 & 8) != 0) && ((uVar10 & 0xffffffff) < (param_4 & 0xffffffff))) {
    FUN_9800dcf0((uint *)((int)puVar12 + (int)uVar10 + 0x10),0,param_4 - uVar10);
  }
  *(byte *)((int)puVar12 + 5) =
       (byte)((param_2 & 0xffffffff) >> 4) & 0xe0 | *(byte *)((int)puVar12 + 5) & 0x1f;
  return 1;
}


/* ==== FUN_98017d48 @ 98017d48 ==== */

longlong FUN_98017d48(int param_1,undefined8 param_2,int param_3)

{
  uint uVar2;
  longlong lVar1;
  undefined4 in_LR;
  
  if (((*(uint *)(param_1 + 0x14) & 0x40000) != 0) &&
     (uVar2 = FUN_9801abc0(), *(byte *)(param_1 + 0x17b) != uVar2)) {
    func_0x9801ad30(0xf4,param_1,in_LR,0x1454,param_3);
  }
  if ((*(byte *)(param_3 + -0xb) & 1) == 0) {
    lVar1 = -1;
  }
  else if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
    lVar1 = (ulonglong)*(ushort *)(param_3 + -0x10) * 0x10 - (ulonglong)*(byte *)(param_3 + -10);
  }
  else {
    lVar1 = ((ulonglong)*(uint *)(param_3 + -0x18) - (ulonglong)*(ushort *)(param_3 + -0x10)) +
            -0x30;
  }
  return lVar1;
}


/* ==== FUN_98017df0 @ 98017df0 ==== */

undefined8
FUN_98017df0(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,ulonglong param_5,
            ulonglong param_6,ulonglong param_7)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 *puVar7;
  undefined8 uVar6;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  int iVar12;
  uint uStack0000003c;
  uint local_60 [24];
  
  uVar5 = FUN_9800dc60();
  iVar3 = (int)param_5;
  uVar9 = (int)param_7 - iVar3;
  uStack0000003c = (uint)param_6;
  uVar4 = param_2 + 0x57U & 0xfffffff0;
  iVar12 = ((int)uVar9 >> 0x10) + (uint)((int)uVar9 < 0 && (uVar9 & 0xffff) != 0);
  puVar7 = (undefined2 *)uVar5;
  if ((uVar5 & 0xffffffff) == (param_5 & 0xffffffff)) {
    uVar11 = *puVar7;
  }
  else {
    uVar11 = 0;
  }
  puVar2 = (undefined2 *)param_2;
  iVar1 = (int)uVar4;
  if ((uVar4 + 0x10 & 0xffffffff) < (param_6 & 0xffffffff)) {
LAB_98017ea8:
    uVar9 = (int)param_7 - (int)param_6;
    puVar2[1] = uVar11;
    *puVar2 = (short)(iVar1 - (int)puVar2 >> 4);
    *(char *)(puVar2 + 2) = (char)param_3;
    *(undefined4 *)(puVar2 + 10) = param_4;
    uVar10 = (longlong)((int)uVar9 >> 0x10) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 0xffff) != 0);
    *(undefined2 **)(puVar2 + 0xc) = puVar7;
    *(int *)(puVar2 + 0x10) = iVar3;
    *(int *)(puVar2 + 0x14) = iVar1;
    *(undefined1 *)((int)puVar2 + 5) = 1;
    *(undefined4 *)(puVar2 + 8) = 0xffeeffee;
    *(int *)(puVar2 + 0x16) = iVar12 * 0x10000 + iVar3;
    *(int *)(puVar2 + 0x12) = iVar12;
    *(int *)(puVar2 + 0x18) = (int)uVar10;
    if (uVar10 != 0) {
      FUN_98016d68(param_2,param_6,(uVar10 & 0xffff) << 0x10);
      param_6 = (ulonglong)uStack0000003c;
    }
    *(undefined2 **)(puVar7 + ((param_3 & 0xff) + 0x18) * 2) = puVar2;
    uVar11 = *puVar2;
    *(undefined1 *)(iVar1 + 5) = 0x10;
    *(int *)(puVar2 + 0x20) = iVar1;
    *(char *)(iVar1 + 4) = (char)param_3;
    *(undefined2 *)(iVar1 + 2) = uVar11;
    FUN_98017578(uVar5,uVar4,(longlong)((int)param_6 - iVar1 >> 4));
    uVar6 = 1;
  }
  else {
    if ((uVar4 + 0x10 & 0xffffffff) < (param_7 & 0xffffffff)) {
      local_60[0] = (iVar1 - uStack0000003c) + 0x10;
      iVar8 = func_0x9801ad20(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar7 + 0x2c8)
                             );
      if (-1 < iVar8) {
        param_6 = (ulonglong)local_60[0] + (ulonglong)uStack0000003c;
        uStack0000003c = (uint)param_6;
        goto LAB_98017ea8;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


/* ==== FUN_98017f58 @ 98017f58 ==== */

ulonglong FUN_98017f58(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar8;
  longlong lVar7;
  uint uVar9;
  uint uVar10;
  uint local_40;
  uint local_38;
  uint local_34;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar4 = FUN_9800dc74();
  uVar6 = (param_2 + 0xffffU & 0xffffffff) >> 0x10;
  uVar9 = 0x40;
  local_38 = (uint)(uVar6 << 0x10);
  uVar10 = 0;
  do {
    iVar2 = (int)uVar4;
    uVar1 = *(uint *)((uVar10 + 0x18) * 4 + iVar2);
    if ((ulonglong)uVar1 == 0) {
      if (uVar9 == 0x40) {
        uVar9 = uVar10;
      }
    }
    else if (((uVar6 <= *(uint *)(uVar1 + 0x30)) && (local_38 <= *(uint *)(uVar1 + 0x1c))) &&
            (uVar5 = uVar4, FUN_98016e88(uVar4,(ulonglong)uVar1,uVar3 - 0x38,0), uVar5 != 0)) {
      local_38 = local_38 >> 4;
      uVar6 = FUN_98017170(uVar4,uVar5,&local_38,0);
      FUN_98017578(uVar4,uVar6,(ulonglong)local_38);
      return uVar6;
    }
    uVar10 = uVar10 + 1 & 0xff;
  } while (uVar10 < 0x40);
  if ((uVar9 != 0x40) && ((*(uint *)(iVar2 + 0x14) & 2) != 0)) {
    uVar6 = param_2 + 0x10000;
    uVar10 = (uint)uVar6;
    local_40 = uVar10;
    if ((uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(iVar2 + 0x20)) {
      local_40 = *(uint *)(iVar2 + 0x20);
    }
    iVar8 = func_0x9801ad20(uVar3 - 0x3c,uVar3 - 0x40,0x60002000,4,*(undefined4 *)(iVar2 + 0x590));
    if (iVar8 < 0) {
      do {
        if ((ulonglong)local_40 == (uVar6 & 0xffffffff)) break;
        local_40 = local_40 >> 1;
        if ((ulonglong)local_40 < (uVar6 & 0xffffffff)) {
          local_40 = uVar10;
        }
        iVar8 = func_0x9801ad20(uVar3 - 0x3c,uVar3 - 0x40,0x60002000,4,
                                *(undefined4 *)(iVar2 + 0x590));
      } while (iVar8 < 0);
      if (iVar8 < 0) {
        return 0;
      }
    }
    *(uint *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + local_40;
    local_34 = uVar10;
    if ((uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(iVar2 + 0x24)) {
      local_34 = *(uint *)(iVar2 + 0x24);
    }
    lVar7 = func_0x9801ad20(uVar3 - 0x3c,uVar3 - 0x34,0x60001000,4,*(undefined4 *)(iVar2 + 0x590));
    if (-1 < lVar7) {
      uVar6 = FUN_98017df0(uVar4,0,uVar9,0,0,(ulonglong)local_34,(ulonglong)local_40);
      if ((uVar6 & 0xffffffff) == 0) {
        lVar7 = -0x3fffffe9;
      }
      if (-1 < (int)lVar7) {
        return (ulonglong)uRam00000028;
      }
    }
    func_0x9801ad40(uVar3 - 0x3c,uVar3 - 0x40,0x8000,*(undefined4 *)(iVar2 + 0x590));
  }
  return 0;
}


/* ==== FUN_98018198 @ 98018198 ==== */

void FUN_98018198(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_80;
  uint local_7c [31];
  
  lVar8 = FUN_9800dc54();
  iVar4 = (int)lVar8;
  if (*(int *)(iVar4 + 0x584) == 0) {
    puVar5 = (ushort *)param_2;
    uVar11 = param_2 + 0xffff & 0xffff0000;
    local_7c[0] = (uint)uVar11;
    uVar16 = 0;
    uVar17 = (ulonglong)(uint)((int)(local_7c[0] - (int)puVar5) >> 4) & 0xffff;
    uVar2 = *(uint *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar4);
    if (uVar17 == 1) {
      uVar11 = uVar11 + 0x10000;
      uVar17 = 0x1001;
      local_7c[0] = (uint)uVar11;
    }
    else if (((ulonglong)puVar5[1] != 0) && (uVar11 == (param_2 & 0xffffffff))) {
      uVar16 = param_2 + (ulonglong)puVar5[1] * -0x10;
    }
    uVar15 = 0;
    uVar12 = (param_3 & 0xfffffff) * 0x10 + param_2;
    uVar13 = uVar12 & 0xffff0000;
    uVar3 = (int)uVar12 - (int)uVar13 >> 4;
    uVar18 = (ulonglong)uVar3 & 0xffff;
    if (uVar18 == 1) {
      uVar18 = 0x1001;
      uVar13 = uVar13 - 0x10000;
    }
    else if (((uVar3 & 0xffff) == 0) && ((*(byte *)((int)puVar5 + 5) & 0x10) == 0)) {
      uVar15 = uVar12;
    }
    iVar7 = (int)(uVar18 << 4);
    puVar6 = (ushort *)((int)uVar12 - iVar7);
    local_80 = (int)uVar13 - (int)uVar11;
    if ((uVar13 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
      local_80 = 0;
    }
    if ((local_80 != 0) && (puVar9 = FUN_98016b90(uVar2), puVar9 != (undefined4 *)0x0)) {
      iVar10 = func_0x9801ad40(local_7c,&local_80,0x4000,*(undefined4 *)(iVar4 + 0x590));
      *puVar9 = *(undefined4 *)(*(int *)(uVar2 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(uVar2 + 0x18) + 0x4c) = puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      if (-1 < iVar10) {
        FUN_98016d68((ulonglong)uVar2,(ulonglong)local_7c[0],(ulonglong)local_80);
        *(uint *)(uVar2 + 0x30) = (local_80 >> 0x10) + *(int *)(uVar2 + 0x30);
        if (uVar17 == 0) {
          if ((uVar16 & 0xffffffff) == 0) {
            if ((local_7c[0] <= *(uint *)(uVar2 + 0x40)) &&
               (*(uint *)(uVar2 + 0x40) < local_80 + local_7c[0])) {
              *(undefined4 *)(uVar2 + 0x40) = *(undefined4 *)(uVar2 + 0x28);
            }
          }
          else {
            iVar10 = (int)uVar16;
            *(byte *)(iVar10 + 5) = *(byte *)(iVar10 + 5) | 0x10;
            *(int *)(uVar2 + 0x40) = iVar10;
          }
        }
        else {
          *puVar5 = (ushort)uVar17;
          *(undefined1 *)((int)puVar5 + 5) = 0x10;
          *(int *)(iVar4 + 0x30) = (int)uVar17 + *(int *)(iVar4 + 0x30);
          *(ushort **)(uVar2 + 0x40) = puVar5;
          *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
          if (uVar17 < 0x80) {
            uVar11 = (uVar17 + 0x30) * 8 + lVar8;
            puVar14 = (uint *)uVar11;
            if ((ulonglong)*puVar14 == (uVar11 & 0xffffffff)) {
              iVar10 = ((*puVar5 >> 5) + 0x58) * 4;
              *(uint *)(iVar10 + iVar4) = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar10 + iVar4);
            }
          }
          else {
            for (puVar14 = *(uint **)(iVar4 + 0x180);
                ((lVar8 + 0x180U & 0xffffffff) != ZEXT48(puVar14) &&
                (*(ushort *)(puVar14 + -2) < uVar17)); puVar14 = (uint *)*puVar14) {
            }
          }
          puVar9 = (undefined4 *)puVar14[1];
          *(uint **)(puVar5 + 4) = puVar14;
          *(undefined4 **)(puVar5 + 6) = puVar9;
          *puVar9 = puVar5 + 4;
          puVar14[1] = (uint)(puVar5 + 4);
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
            uVar11 = (uVar18 + 0x30) * 8 + lVar8;
            puVar14 = (uint *)uVar11;
            if ((ulonglong)*puVar14 == (uVar11 & 0xffffffff)) {
              iVar7 = ((*puVar6 >> 5) + 0x58) * 4;
              *(uint *)(iVar7 + iVar4) = 1 << (*puVar6 & 0x1f) | *(uint *)(iVar7 + iVar4);
            }
          }
          else {
            for (puVar14 = *(uint **)(iVar4 + 0x180);
                ((lVar8 + 0x180U & 0xffffffff) != ZEXT48(puVar14) &&
                (*(ushort *)(puVar14 + -2) < uVar18)); puVar14 = (uint *)*puVar14) {
            }
          }
          puVar9 = (undefined4 *)puVar14[1];
          *(uint **)(puVar6 + 4) = puVar14;
          *(undefined4 **)(puVar6 + 6) = puVar9;
          *puVar9 = puVar6 + 4;
          puVar14[1] = (uint)(puVar6 + 4);
          *(int *)(iVar4 + 0x30) = (int)uVar18 + *(int *)(iVar4 + 0x30);
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
  FUN_98017578(lVar8,param_2,param_3);
  return;
}


/* ==== FUN_98018500 @ 98018500 ==== */

/* WARNING: Removing unreachable block (ram,0x98018800) */

uint * FUN_98018500(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                   ulonglong param_5,ulonglong param_6)

{
  bool bVar1;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  ulonglong uVar2;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
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
  
  uVar2 = ZEXT48(&stack0x00000000);
  uVar3 = FUN_9800dc58();
  puStack_d0 = (uint *)0x0;
  lVar14 = 6;
  puVar6 = (uint *)param_2;
  lVar9 = uVar2 - 0xa8;
  do {
    lVar9 = lVar9 + 8;
    *(undefined8 *)lVar9 = 0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if ((param_6 & 0xffffffff) != 0) {
    if (*(int *)param_6 == 0x30) {
      FUN_9800db80(uVar2 - 0xa0,param_6,0x30);
      param_3 = param_3 & 0xffffffff;
    }
    param_4 = param_4 & 0xffffffff;
  }
  if ((uRam9801cc5c & 0x200000) != 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (uStack_9c == 0) {
    uStack_9c = uRam9801c2f8;
  }
  if (uStack_98 == 0) {
    uStack_98 = uRam9801c2fc;
  }
  if (uStack_94 == 0) {
    uStack_94 = uRam9801c304;
  }
  if (uStack_90 == 0) {
    uStack_90 = uRam9801c300;
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
LAB_980186a0:
      uStack00000024 = (int)param_3 + 0xffffU & 0xffff0000;
    }
  }
  else {
    uStack0000002c = (int)param_4 + 0xffffU & 0xffff0000;
    if ((param_3 & 0xffffffff) != 0) goto LAB_980186a0;
    uStack00000024 = uStack0000002c + 0xfffff & 0xfff00000;
  }
  lVar9 = 0x598;
  bVar1 = (param_5 & 0xffffffff) == 0;
  if ((uVar3 & 1) == 0) {
    if (bVar1) {
      lVar9 = 0x5b4;
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
    iVar4 = FUN_9801abc0();
    uVar13 = 3;
    if (iVar4 == 1) goto LAB_98018720;
  }
  uVar13 = 0;
LAB_98018720:
  if ((param_2 & 0xffffffff) == 0) {
    if (uStack_7c != 0) {
      return (uint *)0x0;
    }
    iVar4 = func_0x9801ad20(uVar2 - 0xd0,uVar2 + 0x24,0x60002000,4,uVar13);
    if (iVar4 < 0) {
      return (uint *)0x0;
    }
    uVar12 = 0;
    if (uStack0000002c == 0) {
      uStack0000002c = 0x10000;
    }
    uVar8 = 0;
    puStack_cc = (uint *)0x0;
    uVar7 = uVar8;
  }
  else {
    if (uStack_7c == 0) {
      iVar4 = func_0x9801ad70(param_2,uVar2 - 0xc0,uVar13);
      if (iVar4 < 0) {
        return (uint *)0x0;
      }
      uVar7 = ZEXT48(puStack_c0);
      if (uVar7 != (param_2 & 0xffffffff)) {
        return (uint *)0x0;
      }
      if (iStack_b0 == 0x10000) {
        return (uint *)0x0;
      }
      puStack_cc = puStack_c0;
      if (iStack_b0 == 0x1000) {
        FUN_9800dcf0(puStack_c0,0,0x10000);
        uVar7 = (ulonglong)uStack_b4 + ZEXT48(puStack_c0);
        uStack0000002c = uStack_b4;
        func_0x9801ad70(uVar7,uVar2 - 0xc0,uVar13);
        uStack00000024 = uStack_b4;
      }
      else {
        uStack0000002c = 0x10000;
      }
    }
    else {
      uVar7 = (ulonglong)uStack_84;
      if (uVar7 == 0) {
        return (uint *)0x0;
      }
      if (uStack_80 == 0) {
        return (uint *)0x0;
      }
      if (uStack_80 < uVar7) {
        return (uint *)0x0;
      }
      if ((uVar3 & 2) != 0) {
        return (uint *)0x0;
      }
      uStack00000024 = uStack_80;
      uVar7 = uVar7 + param_2;
      FUN_9800dcf0(puVar6,0,0x10000);
      puStack_cc = puVar6;
    }
    uVar12 = 1;
    uVar8 = param_2;
    puStack_d0 = puVar6;
  }
  if (ZEXT48(puStack_cc) == (uVar7 & 0xffffffff)) {
    iVar4 = func_0x9801ad20(uVar2 - 0xcc,uVar2 + 0x2c,0x60001000,4,uVar13);
    if (iVar4 < 0) {
      if ((param_2 & 0xffffffff) != 0) {
        return (uint *)0x0;
      }
      func_0x9801ad40(uVar2 - 0xd0,uVar2 + 0x24,0x8000,uVar13);
      return (uint *)0x0;
    }
    uVar8 = ZEXT48(puStack_d0);
    uVar7 = uVar7 + uStack0000002c;
  }
  lVar14 = lVar9 + 0x80;
  lVar15 = 8;
  uVar2 = uVar8 + 0x4c;
  uVar8 = uVar8 + 0x59f & 0xfffffff8;
  do {
    puVar11 = (undefined4 *)uVar8;
    *(undefined4 *)uVar2 = puVar11;
    uVar10 = uVar8 + 0x10;
    lVar15 = lVar15 + -1;
    uVar2 = uVar8;
    uVar8 = uVar10;
  } while (lVar15 != 0);
  *puVar11 = 0;
  if ((uRam9801cc5c & 0x800) != 0) {
    lVar14 = lVar9 + 0x68c;
    puStack_d0[0x5f] = (uint)(puVar11 + 4);
    uVar10 = (ulonglong)puStack_d0[0x5f] + 0x60c;
  }
  *(short *)puStack_d0 = (short)(lVar14 + 0xfU >> 4);
  *(undefined1 *)((int)puStack_d0 + 5) = 1;
  puStack_d0[4] = 0xeeffeeff;
  puStack_d0[5] = uVar3;
  puStack_d0[6] = uVar3 & 0x6001007d;
  *(undefined2 *)(puStack_d0 + 0x5c) = 0xffff;
  *(short *)((int)puStack_d0 + 0x3a) = (short)uVar10 - (short)puStack_d0;
  puStack_d0[0xf] = 0;
  uVar5 = FUN_9801abc0();
  *(undefined1 *)((int)puStack_d0 + 0x17b) = uVar5;
  lVar9 = 0x80;
  puStack_d0[0x164] = uVar13;
  puVar6 = puStack_d0 + 0x60;
  do {
    *puVar6 = (uint)puVar6;
    puVar6[1] = (uint)puVar6;
    puVar6 = puVar6 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  puStack_d0[0x16] = (uint)(puStack_d0 + 0x16);
  puStack_d0[0x17] = (uint)(puStack_d0 + 0x16);
  if ((int)param_5 == -1) {
    func_0x9801ad60(uVar10);
    param_5 = uVar10;
  }
  puStack_d0[0x160] = (uint)param_5;
  uVar2 = FUN_98017df0(ZEXT48(puStack_d0),(lVar14 + 0xfU & 0xfffffff0) + ZEXT48(puStack_d0),0,uVar12
                       ,ZEXT48(puStack_cc),uVar7,ZEXT48(puStack_cc) + (ulonglong)uStack00000024);
  if ((uVar2 & 0xffffffff) == 0) {
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


/* ==== FUN_98018ad0 @ 98018ad0 ==== */

uint * FUN_98018ad0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

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
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  undefined1 local_ec [4];
  undefined1 local_e8 [12];
  uint *local_dc;
  undefined1 local_b0 [168];
  undefined4 local_8;
  
  lVar9 = FUN_9800dc60();
  iVar3 = (int)lVar9;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar10 = FUN_9801abc0(), *(byte *)(iVar3 + 0x17b) != uVar10)) {
    func_0x9801ad30(0xf4,lVar9,local_8,0x5ea,param_3);
  }
  uVar15 = (ulonglong)*(uint *)(iVar3 + 0x18);
  uVar16 = param_3;
  if ((param_3 & 0xffffffff) == 0) {
    uVar16 = 1;
  }
  uVar7 = uVar16 + 0x1f & 0xfffffff0;
  uVar16 = uVar7 >> 4;
  bVar8 = ((uVar15 | param_2 & 0xffffffff) & 1) == 0;
  if (bVar8) {
    func_0x9801acf0(*(undefined4 *)(iVar3 + 0x580));
  }
  if (0x7f < uVar16) {
    if (*(uint *)(iVar3 + 0x1c) < uVar16) {
      if ((*(uint *)(iVar3 + 0x14) & 2) != 0) {
        iVar21 = (int)uVar7 + 0x20;
        iVar20 = func_0x9801ad20(local_ec,local_e8,(~(uVar15 | param_2) & 8) << 0x14 | 0x60001000,4,
                                 *(undefined4 *)(iVar3 + 0x590));
        if (-1 < iVar20) {
          FUN_9800dcf0((uint *)0x0,0,0x30);
          iRam00000000 = iVar3 + 0x58;
          sRam00000020 = ((short)iVar21 - (short)param_3) + -0x30;
          uRam00000025 = 0xb;
          puRam00000004 = *(undefined4 **)(iVar3 + 0x5c);
          iRam00000018 = iVar21;
          iRam0000001c = iVar21;
          *puRam00000004 = 0;
          local_dc = (uint *)0x30;
          *(undefined4 *)(iVar3 + 0x5c) = 0;
          goto LAB_9800dcb0;
        }
      }
    }
    else {
LAB_98018d88:
      uVar13 = lVar9 + 0x180;
      if (((uVar13 & 0xffffffff) != (ulonglong)*(uint *)(iVar3 + 0x184)) &&
         (uVar16 <= *(ushort *)(*(uint *)(iVar3 + 0x184) - 8))) {
        for (puVar11 = (uint *)*(uint *)uVar13; uVar18 = ZEXT48(puVar11),
            (uVar13 & 0xffffffff) != uVar18; puVar11 = (uint *)*puVar11) {
          uVar17 = uVar18 - 8;
          if (uVar16 <= *(ushort *)uVar17) {
            puVar12 = (uint *)puVar11[1];
            uVar10 = *puVar11;
            if ((*puVar12 == *(uint *)(uVar10 + 4)) && (*puVar12 == uVar18)) {
              *puVar12 = uVar10;
              *(uint **)(uVar10 + 4) = puVar12;
            }
            goto LAB_98018e5c;
          }
        }
      }
      uVar17 = FUN_98017f58(lVar9,uVar7);
      if ((uVar17 & 0xffffffff) != 0) {
        puVar11 = *(uint **)((int)uVar17 + 0xc);
        uVar10 = *(uint *)((int)uVar17 + 8);
        if ((*puVar11 == *(uint *)(uVar10 + 4)) &&
           ((ulonglong)*puVar11 == (uVar17 + 8 & 0xffffffff))) {
          *puVar11 = uVar10;
          *(uint **)(uVar10 + 4) = puVar11;
        }
        goto LAB_98018e5c;
      }
    }
    if (((uVar15 | param_2 & 0xffffffff) & 4) != 0) {
      func_0x9801ad80(local_b0);
    }
    local_dc = (uint *)0x0;
    goto LAB_9800dcb0;
  }
  uVar17 = (uVar16 + 0x30) * 8 + lVar9;
  puVar11 = (uint *)uVar17;
  if ((ulonglong)*puVar11 == (uVar17 & 0xffffffff)) {
    uVar17 = uVar7 >> 9;
    puVar11 = (uint *)(((int)uVar17 + 0x58) * 4 + iVar3);
    puVar12 = puVar11 + 1;
    uVar10 = *puVar11 & ~((1 << ((uint)uVar16 & 0x1f)) - 1U);
    if (uVar17 == 0) {
      if (uVar10 == 0) {
        uVar10 = *puVar12;
        puVar12 = puVar11 + 2;
        goto LAB_98018cb0;
      }
      iVar20 = iVar3 + 0x180;
    }
    else if (uVar17 == 1) {
LAB_98018cb0:
      if (uVar10 == 0) {
        uVar10 = *puVar12;
        puVar12 = puVar12 + 1;
        goto LAB_98018cd0;
      }
      iVar20 = iVar3 + 0x280;
    }
    else {
      if (uVar17 < 3) {
LAB_98018cd0:
        if (uVar10 != 0) {
          iVar20 = iVar3 + 0x380;
          goto LAB_98018cfc;
        }
        uVar10 = *puVar12;
      }
      else if (uVar17 != 3) goto LAB_98018d88;
      if (uVar10 == 0) goto LAB_98018d88;
      iVar20 = iVar3 + 0x480;
    }
LAB_98018cfc:
    puVar2 = *(undefined4 **)
              ((int)((0x1fU - LZCOUNT(uVar10 & ~(uVar10 - 1)) & 0xffffffff) << 3) + iVar20 + 4);
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
LAB_98018e5c:
    puVar4 = (ushort *)uVar17;
    bVar14 = *(byte *)((int)puVar4 + 5);
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar4;
    *(undefined1 *)((int)puVar4 + 5) = 1;
    uVar13 = *puVar4 - uVar16;
    *puVar4 = (ushort)uVar16;
    *(char *)(puVar4 + 3) = (char)uVar7 - (char)param_3;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    if (uVar13 != 0) {
      if ((uVar13 & 0xffffffff) == 1) {
        *puVar4 = *puVar4 + 1;
        *(char *)(puVar4 + 3) = *(char *)(puVar4 + 3) + '\x10';
      }
      else {
        uVar18 = uVar16 * 0x10 + uVar17;
        uVar7 = uVar13 & 0xffff;
        puVar5 = (ushort *)uVar18;
        *(byte *)((int)puVar5 + 5) = bVar14;
        puVar5[1] = (ushort)uVar16;
        *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar4 + 2);
        *puVar5 = (ushort)uVar13;
        if ((bVar14 & 0x10) == 0) {
          lVar19 = (uVar13 & 0xfffffff) * 0x10 + uVar18;
          puVar6 = (ushort *)lVar19;
          if ((*(byte *)((int)puVar6 + 5) & 1) != 0) {
            puVar6[1] = (ushort)uVar13;
            if (uVar7 < 0x80) {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              uVar16 = (uVar7 + 0x30) * 8 + lVar9;
              puVar11 = (uint *)uVar16;
              if ((ulonglong)*puVar11 == (uVar16 & 0xffffffff)) {
                iVar20 = ((*puVar5 >> 5) + 0x58) * 4;
                uVar10 = *(uint *)(iVar20 + iVar3) | 1 << (*puVar5 & 0x1f);
                goto LAB_98018ff0;
              }
            }
            else {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              for (puVar11 = *(uint **)(iVar3 + 0x180);
                  ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                  (*(ushort *)(puVar11 + -2) < uVar7)); puVar11 = (uint *)*puVar11) {
              }
            }
            goto LAB_98018ff4;
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
            uVar16 = uVar13 & 0xffff;
            *puVar5 = (ushort)uVar13;
            if ((*(byte *)((int)puVar5 + 5) & 0x10) == 0) {
              *(ushort *)((int)puVar5 + (int)((uVar13 & 0xffffffff) << 4) + 2) = (ushort)uVar13;
            }
            if (uVar16 < 0x80) {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              uVar16 = (uVar16 + 0x30) * 8 + lVar9;
              puVar11 = (uint *)uVar16;
              if ((ulonglong)*puVar11 == (uVar16 & 0xffffffff)) {
                iVar20 = ((*puVar5 >> 5) + 0x58) * 4;
                *(uint *)(iVar20 + iVar3) = *(uint *)(iVar20 + iVar3) | 1 << (*puVar5 & 0x1f);
              }
            }
            else {
              *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
              for (puVar11 = *(uint **)(iVar3 + 0x180);
                  ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                  (*(ushort *)(puVar11 + -2) < uVar16)); puVar11 = (uint *)*puVar11) {
              }
            }
            puVar2 = (undefined4 *)puVar11[1];
            *(uint **)(puVar5 + 4) = puVar11;
            *(undefined4 **)(puVar5 + 6) = puVar2;
            *puVar2 = puVar5 + 4;
            puVar11[1] = (uint)(puVar5 + 4);
            iVar20 = (int)uVar13 + *(int *)(iVar3 + 0x30);
            goto LAB_980191b4;
          }
          FUN_98017578(lVar9,uVar18,uVar13);
        }
        else {
          if (uVar7 < 0x80) {
            uVar16 = (uVar7 + 0x30) * 8 + lVar9;
            *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
            puVar11 = (uint *)uVar16;
            if ((ulonglong)*puVar11 == (uVar16 & 0xffffffff)) {
              iVar20 = ((*puVar5 >> 5) + 0x58) * 4;
              uVar10 = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar20 + iVar3);
LAB_98018ff0:
              *(uint *)(iVar20 + iVar3) = uVar10;
            }
          }
          else {
            *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
            for (puVar11 = *(uint **)(iVar3 + 0x180);
                ((lVar9 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                (*(ushort *)(puVar11 + -2) < uVar7)); puVar11 = (uint *)*puVar11) {
            }
          }
LAB_98018ff4:
          puVar2 = (undefined4 *)puVar11[1];
          *(uint **)(puVar5 + 4) = puVar11;
          *(undefined4 **)(puVar5 + 6) = puVar2;
          *puVar2 = puVar5 + 4;
          puVar11[1] = (uint)(puVar5 + 4);
          iVar20 = (int)uVar13 + *(int *)(iVar3 + 0x30);
LAB_980191b4:
          *(int *)(iVar3 + 0x30) = iVar20;
        }
        bVar14 = 0;
        if ((*(byte *)((int)puVar5 + 5) & 0x10) != 0) {
          *(ushort **)(*(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar5;
        }
      }
    }
    if ((bVar14 & 0x10) != 0) {
      *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) | 0x10;
    }
  }
  else {
    puVar2 = (undefined4 *)puVar11[1];
    uVar17 = ZEXT48(puVar2) - 8;
    bVar14 = *(byte *)((int)puVar2 - 3);
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
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)uVar16;
    *(byte *)((int)puVar2 - 3) = bVar14 & 0x10 | 1;
    *(char *)((int)puVar2 - 2) = (char)uVar7 - (char)param_3;
    *(undefined1 *)((int)puVar2 - 1) = 0;
  }
  local_dc = (uint *)((int)uVar17 + 0x10);
  if (bVar8) {
    func_0x9801acd0(*(undefined4 *)(iVar3 + 0x580));
  }
  if (((uVar15 | param_2 & 0xffffffff) & 8) != 0) {
    FUN_9800dcf0(local_dc,0,param_3);
  }
LAB_9800dcb0:
  FUN_98019378();
  return local_dc;
}


/* ==== FUN_98019378 @ 98019378 ==== */

void FUN_98019378(void)

{
  int unaff_r22;
  int unaff_r28;
  
  if (unaff_r22 != 0) {
    func_0x9801acd0(*(undefined4 *)(unaff_r28 + 0x580));
  }
  return;
}


/* ==== FUN_980193c8 @ 980193c8 ==== */

uint FUN_980193c8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar9;
  ulonglong uVar8;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_50 [4];
  int local_40;
  int local_3c;
  undefined4 local_8;
  
  lVar7 = FUN_9800dc70();
  iVar10 = (int)lVar7;
  local_50[1] = 0;
  local_50[2] = 1;
  local_3c = iVar10;
  if (((*(uint *)(iVar10 + 0x14) & 0x40000) != 0) &&
     (uVar9 = FUN_9801abc0(), *(byte *)(iVar10 + 0x17b) != uVar9)) {
    func_0x9801ad30(0xf4,lVar7,local_8,0x1160,param_3);
  }
  if ((param_3 & 0xffffffff) == 0) {
    return 1;
  }
  bVar6 = (((ulonglong)*(uint *)(iVar10 + 0x18) | param_2 & 0xffffffff) & 1) == 0;
  if (bVar6) {
    func_0x9801acf0(*(undefined4 *)(iVar10 + 0x580));
    local_50[1] = 1;
  }
  iVar2 = (int)param_3;
  if ((*(byte *)(iVar2 + -0xb) & 8) != 0) {
    local_40 = iVar2 + -0x30;
    iVar3 = *(int *)(iVar2 + -0x30);
    piVar4 = *(int **)(iVar2 + -0x2c);
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    if (bVar6) {
      func_0x9801acd0(*(undefined4 *)(iVar10 + 0x580));
      local_50[1] = 0;
    }
    local_50[0] = 0;
    iVar10 = func_0x9801ad40(&local_40,local_50,0x8000,*(undefined4 *)(iVar10 + 0x590));
    local_50[2] = -(iVar10 >> 0x1f) - 1U & 1;
    goto LAB_9801962c;
  }
  local_50[0] = (uint)*(ushort *)(param_3 - 0x10);
  uVar8 = FUN_98017170(lVar7,param_3 - 0x10,local_50,0);
  uVar11 = (ulonglong)local_50[0];
  puVar5 = (ushort *)uVar8;
  if (uVar11 < 0x80) {
    *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
    uVar8 = (((ulonglong)local_50[0] & 0xffff) + 0x30) * 8 + lVar7;
    puVar12 = (uint *)uVar8;
    if ((ulonglong)*puVar12 == (uVar8 & 0xffffffff)) {
      iVar2 = ((*puVar5 >> 5) + 0x58) * 4;
      *(uint *)(iVar2 + iVar10) = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar2 + iVar10);
    }
    puVar1 = (undefined4 *)puVar12[1];
    *(uint **)(puVar5 + 4) = puVar12;
    *(undefined4 **)(puVar5 + 6) = puVar1;
    *puVar1 = puVar5 + 4;
    puVar12[1] = (uint)(puVar5 + 4);
    iVar2 = *(int *)(iVar10 + 0x30);
  }
  else {
    if ((*(uint *)(iVar10 + 0x28) <= uVar11) &&
       ((ulonglong)*(uint *)(iVar10 + 0x2c) <= (*(uint *)(iVar10 + 0x30) + uVar11 & 0xffffffff))) {
      FUN_98018198(lVar7,uVar8,uVar11);
      goto LAB_9801962c;
    }
    if (0xf000 < uVar11) {
      FUN_98017578(lVar7,uVar8,uVar11);
      goto LAB_9801962c;
    }
    *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0x10;
    for (local_50[3] = *(uint *)(iVar10 + 0x180);
        ((lVar7 + 0x180U & 0xffffffff) != (ulonglong)local_50[3] &&
        (local_40 = local_50[3] + -8, (uint)*(ushort *)(local_50[3] + -8) < (local_50[0] & 0xffff)))
        ; local_50[3] = *(uint *)local_50[3]) {
    }
    puVar1 = *(undefined4 **)(local_50[3] + 4);
    *(uint *)(puVar5 + 4) = local_50[3];
    *(undefined4 **)(puVar5 + 6) = puVar1;
    *puVar1 = puVar5 + 4;
    *(ushort **)(local_50[3] + 4) = puVar5 + 4;
    iVar2 = *(int *)(iVar10 + 0x30);
  }
  *(uint *)(iVar10 + 0x30) = iVar2 + local_50[0];
LAB_9801962c:
  FUN_9801966c();
  return local_50[2];
}


/* ==== FUN_9801966c @ 9801966c ==== */

void FUN_9801966c(void)

{
  int unaff_r26;
  int unaff_r30;
  
  if (unaff_r26 != 0) {
    func_0x9801acd0(*(undefined4 *)(unaff_r30 + 0x580));
  }
  return;
}


/* ==== FUN_980196c0 @ 980196c0 ==== */

uint * FUN_980196c0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar8;
  int iVar9;
  ulonglong uVar7;
  uint *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort *puVar20;
  int iStack00000014;
  uint *puStack00000024;
  undefined4 uStack0000002c;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [184];
  undefined4 local_8;
  uint *puVar10;
  
  lVar6 = FUN_9800dc54();
  iVar9 = (int)lVar6;
  puVar11 = (uint *)param_3;
  uStack0000002c = (undefined4)param_4;
  iStack00000014 = iVar9;
  puStack00000024 = puVar11;
  if (((*(uint *)(iVar9 + 0x14) & 0x40000) != 0) &&
     (uVar8 = FUN_9801abc0(), *(byte *)(iVar9 + 0x17b) != uVar8)) {
    func_0x9801ad30(0xf4,lVar6,local_8,0xc7c,param_3);
  }
  if ((param_3 & 0xffffffff) == 0) {
    return (uint *)0x0;
  }
  uVar12 = (ulonglong)*(uint *)(iVar9 + 0x18);
  uVar15 = uVar12 | param_2;
  if (0x7fffffff < (param_4 & 0xffffffff)) {
    return (uint *)0x0;
  }
  uVar14 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar14 = 1;
  }
  uVar18 = uVar12 | param_2 & 0xffffffff;
  uVar14 = *(uint *)(iVar9 + 0x50) + uVar14 & (ulonglong)*(uint *)(iVar9 + 0x54);
  if ((((uVar18 & 0x3fffff00) != 0 || (uVar18 & 0x3c000100) != 0) || (*(int *)(iVar9 + 0x17c) != 0))
     || ((*(byte *)((int)puVar11 + -0xb) & 2) != 0)) {
    uVar14 = uVar14 + 0x10;
  }
  if (((uVar12 | param_2 & 0xffffffff) & 1) == 0) {
    func_0x9801acf0(*(undefined4 *)(iVar9 + 0x580));
    uVar15 = uVar15 ^ 1;
  }
  lVar19 = param_3 - 0x10;
  puVar20 = (ushort *)lVar19;
  bVar1 = *(byte *)((int)puVar11 + -0xb);
  if ((bVar1 & 1) == 0) goto LAB_98019ed4;
  uVar2 = *puVar20;
  uVar12 = (ulonglong)uVar2;
  if ((bVar1 & 8) == 0) {
    uVar18 = uVar12 * 0x10 - (ulonglong)*(byte *)((int)puVar11 + -10);
  }
  else {
    uVar14 = uVar14 + 0x1001f & 0xffff0000;
    uVar18 = (puVar11[-6] - uVar12) - 0x30;
    uVar12 = (ulonglong)(puVar11[-6] >> 4);
  }
  iVar17 = (int)uVar14;
  uVar14 = (uVar14 & 0xffffffff) >> 4;
  uVar7 = param_3;
  uVar16 = uVar15;
  if (uVar12 < uVar14) {
    if (((bVar1 & 8) == 0) &&
       (uVar12 = FUN_980177c8(lVar6,uVar15,lVar19,param_4,uVar14), puVar10 = puStack00000024,
       (uVar12 & 0xffffffff) != 0)) goto LAB_98019ea0;
    if ((uVar15 & 0x10) == 0) {
      uVar16 = uVar15 << 0x20 | uVar15 & 0xc003ffff;
      if ((*(byte *)((int)puVar11 + -0xb) & 2) == 0) {
        if ((ulonglong)*(byte *)((int)puVar11 + -9) != 0) {
          uVar16 = (ulonglong)*(byte *)((int)puVar11 + -9) << 0x12 | uVar16;
        }
      }
      else {
        uVar16 = ((ulonglong)*(byte *)((int)puVar11 + -0xb) & 0xe0) << 4 | 0x100 |
                 (uVar15 & 0xc003ffff) << 0x20 | uVar15 & 0xc003f1ff;
        if ((*(byte *)((int)puVar11 + -0xb) & 8) == 0) {
          puVar10 = (uint *)(puVar20 + (uint)*puVar20 * 8 + -8);
        }
        else {
          puVar10 = puVar11 + -10;
        }
        uVar2 = (ushort)*puVar10;
        if (((ulonglong)uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
          uVar16 = ((ulonglong)uVar2 & 0x3fff) << 0x12 | uVar16;
        }
      }
      puVar10 = FUN_98018ad0(lVar6,uVar16 << 0x20 | uVar16 & 0xfffffff7,param_4);
      uVar7 = (ulonglong)(int)puVar10;
      if (uVar7 != 0) {
        if ((*(byte *)((int)puVar10 + -0xb) & 2) != 0) {
          if ((*(byte *)((int)puVar10 + -0xb) & 8) == 0) {
            puVar13 = puVar10 + -4 + (uint)*(ushort *)(puVar10 + -4) * 4 + -4;
          }
          else {
            puVar13 = puVar10 + -10;
          }
          if ((*(byte *)((int)puVar11 + -0xb) & 2) == 0) {
            puVar13[0] = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
          }
          else {
            if ((*(byte *)((int)puVar11 + -0xb) & 8) == 0) {
              puVar11 = (uint *)(puVar20 + (uint)*puVar20 * 8 + -8);
            }
            else {
              puVar11 = puVar11 + -10;
            }
            puVar13[1] = puVar11[1];
          }
        }
        uVar15 = param_4;
        if ((uVar18 & 0xffffffff) <= (param_4 & 0xffffffff)) {
          uVar15 = uVar18;
        }
        FUN_9800db80(uVar7,param_3,uVar15);
        if (((uVar18 & 0xffffffff) < (param_4 & 0xffffffff)) && ((uVar16 & 8) != 0)) {
          FUN_9800dcf0((uint *)((int)puVar10 + (int)uVar18),0,param_4 - uVar18);
        }
        FUN_980193c8(lVar6,uVar16,param_3);
      }
      goto LAB_98019ea0;
    }
    puStack00000024 = (uint *)0x0;
  }
  else {
    if (uVar14 + 1 == uVar12) {
      iVar17 = iVar17 + 0x10;
      uVar14 = uVar14 + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) == 0) {
        *(char *)((int)puVar11 + -10) = (char)iVar17 - (char)param_4;
      }
      else {
        iVar5 = (int)(uVar14 << 4);
        *(undefined8 *)((int)puVar20 + iVar5 + -0x10) =
             *(undefined8 *)(puVar20 + (uint)uVar2 * 8 + -8);
        *(undefined8 *)((int)puVar20 + iVar5 + -8) = *(undefined8 *)(puVar20 + (uint)uVar2 * 8 + -4)
        ;
        *(char *)((int)puVar11 + -10) = (char)iVar17 - (char)param_4;
      }
    }
    else {
      *puVar20 = ((short)iVar17 - (short)param_4) - 0x30;
    }
    if (((uVar18 & 0xffffffff) < (param_4 & 0xffffffff)) && ((uVar15 & 8) != 0)) {
      FUN_9800dcf0((uint *)((int)uVar18 + (int)puVar11),0,param_4 - uVar18);
    }
    puVar10 = puStack00000024;
    if (uVar14 != uVar12) {
      bVar1 = *(byte *)((int)puVar11 + -0xb);
      if ((bVar1 & 8) == 0) {
        uVar12 = (uVar14 & 0xfffffff) * 0x10 + lVar19;
        puVar4 = (ushort *)uVar12;
        *(byte *)((int)puVar4 + 5) = bVar1 & 0xfe;
        puVar4[1] = (ushort)uVar14;
        *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar11 + -3);
        uVar15 = *puVar20 - uVar14;
        *puVar20 = (ushort)uVar14;
        *(byte *)((int)puVar11 + -0xb) = *(byte *)((int)puVar11 + -0xb) & 0xef;
        uVar2 = (ushort)uVar15;
        if ((bVar1 & 0x10) == 0) {
          lVar19 = (uVar15 & 0xfffffff) * 0x10 + uVar12;
          puVar20 = (ushort *)lVar19;
          if ((*(byte *)((int)puVar20 + 5) & 1) != 0) {
            *puVar4 = uVar2;
            puVar20[1] = uVar2;
            *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0xf8;
            if ((uVar15 & 0xffff) < 0x80) goto LAB_98019a48;
            for (puVar11 = *(uint **)(iVar9 + 0x180);
                ((lVar6 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                ((ulonglong)*(ushort *)(puVar11 + -2) < (uVar15 & 0xffff)));
                puVar11 = (uint *)*puVar11) {
            }
            goto LAB_98019a80;
          }
          *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar20 + 5);
          puVar11 = *(uint **)(puVar20 + 6);
          puVar10 = *(uint **)(puVar20 + 4);
          if (((ulonglong)*puVar11 == (ulonglong)puVar10[1]) &&
             ((ulonglong)*puVar11 == (lVar19 + 8U & 0xffffffff))) {
            *puVar11 = (uint)puVar10;
            puVar10[1] = (uint)puVar11;
            if ((puVar10 == puVar11) && (uVar2 = *puVar20, uVar2 < 0x80)) {
              iVar17 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar17 + iVar9) = *(uint *)(iVar17 + iVar9) ^ 1 << (uVar2 & 0x1f);
            }
          }
          if ((*(byte *)((int)puVar20 + 5) & 4) != 0) {
            uVar14 = (ulonglong)*puVar20 * 0x10 - 0x18;
            if (((*(byte *)((int)puVar20 + 5) & 2) != 0) && (4 < (uVar14 & 0xffffffff))) {
              uVar14 = (ulonglong)*puVar20 * 0x10 - 0x1c;
            }
            func_0x9801ad50(lVar19 + 0x18,uVar14,0xfffffffffeeefeee);
          }
          *(uint *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) - (uint)*puVar20;
          uVar15 = *puVar20 + uVar15;
          if (0xf000 < (uVar15 & 0xffffffff)) {
            FUN_98017578(lVar6,uVar12,uVar15);
            puVar10 = puStack00000024;
            goto LAB_98019ea0;
          }
          uVar12 = uVar15 & 0xffff;
          *puVar4 = (ushort)uVar15;
          if ((*(byte *)((int)puVar4 + 5) & 0x10) == 0) {
            *(ushort *)((int)puVar4 + (int)((uVar15 & 0xffffffff) << 4) + 2) = (ushort)uVar15;
          }
          else {
            *(ushort **)(*(int *)((*(byte *)(puVar4 + 2) + 0x18) * 4 + iVar9) + 0x40) = puVar4;
          }
          *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0xf8;
          if (uVar12 < 0x80) {
            uVar12 = (uVar12 + 0x30) * 8 + lVar6;
            puVar11 = (uint *)uVar12;
            if ((ulonglong)*puVar11 == (uVar12 & 0xffffffff)) {
              iVar17 = ((*puVar4 >> 5) + 0x58) * 4;
              *(uint *)(iVar17 + iVar9) = *(uint *)(iVar17 + iVar9) | 1 << (*puVar4 & 0x1f);
            }
          }
          else {
            for (puVar11 = *(uint **)(iVar9 + 0x180);
                ((lVar6 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                (*(ushort *)(puVar11 + -2) < uVar12)); puVar11 = (uint *)*puVar11) {
            }
          }
          puVar3 = (undefined4 *)puVar11[1];
          *(uint **)(puVar4 + 4) = puVar11;
          *(undefined4 **)(puVar4 + 6) = puVar3;
          *puVar3 = puVar4 + 4;
          puVar11[1] = (uint)(puVar4 + 4);
          iVar17 = (int)uVar15 + *(int *)(iVar9 + 0x30);
        }
        else {
          *(ushort **)(*(int *)((*(byte *)(puVar4 + 2) + 0x18) * 4 + iVar9) + 0x40) = puVar4;
          *puVar4 = uVar2;
          *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0xf8;
          if ((uVar15 & 0xffff) < 0x80) {
LAB_98019a48:
            uVar12 = ((uVar15 & 0xffff) + 0x30) * 8 + lVar6;
            puVar11 = (uint *)uVar12;
            if ((ulonglong)*puVar11 == (uVar12 & 0xffffffff)) {
              iVar17 = ((*puVar4 >> 5) + 0x58) * 4;
              *(uint *)(iVar17 + iVar9) = *(uint *)(iVar17 + iVar9) | 1 << (*puVar4 & 0x1f);
            }
          }
          else {
            for (puVar11 = *(uint **)(iVar9 + 0x180);
                ((lVar6 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                ((ulonglong)*(ushort *)(puVar11 + -2) < (uVar15 & 0xffff)));
                puVar11 = (uint *)*puVar11) {
            }
          }
LAB_98019a80:
          puVar3 = (undefined4 *)puVar11[1];
          *(uint **)(puVar4 + 4) = puVar11;
          *(undefined4 **)(puVar4 + 6) = puVar3;
          *puVar3 = puVar4 + 4;
          puVar11[1] = (uint)(puVar4 + 4);
          iVar17 = (int)uVar15 + *(int *)(iVar9 + 0x30);
        }
        *(int *)(iVar9 + 0x30) = iVar17;
        puVar10 = puStack00000024;
      }
      else {
        iVar9 = func_0x9801ad40(local_d8,local_e8,0x8000,*(undefined4 *)(iVar9 + 0x590));
        puVar10 = puStack00000024;
        if (-1 < iVar9) {
          puVar11[-6] = puVar11[-6] - ((int)(uVar12 << 4) - iVar17);
        }
      }
    }
LAB_98019ea0:
    puStack00000024 = puVar10;
    uVar15 = uVar16;
    if ((uVar7 & 0xffffffff) != 0) goto LAB_98019ed4;
  }
  if ((uVar15 & 4) != 0) {
    func_0x9801ad80(local_c0);
  }
LAB_98019ed4:
  FUN_98019f28();
  return puStack00000024;
}


/* ==== FUN_98019f28 @ 98019f28 ==== */

void FUN_98019f28(void)

{
  int in_r12;
  int unaff_r21;
  
  if (*(int *)(in_r12 + -0xe0) != 0) {
    func_0x9801acd0(*(undefined4 *)(unaff_r21 + 0x580));
  }
  return;
}


/* ==== FUN_98019fa0 @ 98019fa0 ==== */

undefined4 FUN_98019fa0(void)

{
  return DAT_9801cc58;
}


/* ==== FUN_98019fb0 @ 98019fb0 ==== */

void FUN_98019fb0(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 auStack_4c [19];
  
  local_5c = param_2 & 1;
  local_58 = 0;
  local_54 = 0x98019bb0;
  local_60 = param_1;
  if (param_4 == (undefined4 *)0x0) {
    local_50 = 0;
  }
  else {
    if (0xf < param_3) {
      param_3 = 0xf;
    }
    local_50 = param_3;
    if (param_3 != 0) {
      FUN_9800dad8(auStack_4c,param_4,((ulonglong)param_3 & 0x3fffffff) << 2);
    }
  }
  func_0x9801ad80(&local_60);
  return;
}


/* ==== FUN_9801a030 @ 9801a030 ==== */

undefined8 FUN_9801a030(undefined4 *param_1,undefined2 *param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  local_2c = param_1[1];
  local_30 = *param_1;
  func_0x9801ada0(&local_30,&local_20);
  *param_2 = local_20;
  param_2[1] = local_1e;
  param_2[3] = local_1c;
  param_2[2] = local_12;
  param_2[4] = local_1a;
  param_2[5] = local_18;
  param_2[6] = local_16;
  param_2[7] = local_14;
  return 1;
}


/* ==== FUN_9801a0b8 @ 9801a0b8 ==== */

bool FUN_9801a0b8(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  local_20 = *param_1;
  local_1e = param_1[1];
  local_1c = param_1[3];
  local_1a = param_1[4];
  local_18 = param_1[5];
  local_16 = param_1[6];
  local_14 = param_1[7];
  cVar1 = func_0x9801adc0(&local_20,&local_30);
  if (cVar1 != '\0') {
    param_2[1] = local_2c;
    *param_2 = local_30;
  }
  else {
    FUN_98008ad8();
  }
  return cVar1 != '\0';
}


/* ==== FUN_9801a158 @ 9801a158 ==== */

void FUN_9801a158(void)

{
  FUN_9801ab80();
  FUN_9801a660();
  return;
}


/* ==== FUN_9801a198 @ 9801a198 ==== */

undefined4 FUN_9801a198(void)

{
  int in_r13;
  
  return *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x14c);
}


/* ==== FUN_9801a1a8 @ 9801a1a8 ==== */

void FUN_9801a1a8(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_9800dc7c();
  func_0x9801acf0(0xffffffff9801c308);
  if (param_2 == 0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  else {
    *piVar2 = (int)&DAT_9801c324;
    piVar2[1] = (int)piRam9801c328;
    *piRam9801c328 = (int)piVar2;
    piRam9801c328 = piVar2;
  }
  func_0x9801acd0(0xffffffff9801c308);
  return;
}


/* ==== FUN_9801a218 @ 9801a218 ==== */

void FUN_9801a218(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_20 [4];
  undefined *local_1c;
  undefined1 auStack_18 [8];
  
  func_0x9801adf0(auStack_18,param_1);
  lVar1 = func_0x9801ade0(auStack_20,auStack_18,1);
  if (lVar1 < 0) {
    local_1c = &DAT_98001cf8;
  }
  FUN_9801a158();
  if (-1 < (int)lVar1) {
    func_0x9801add0(auStack_20);
  }
  return;
}


/* ==== FUN_9801a288 @ 9801a288 ==== */

undefined8 FUN_9801a288(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  int local_40 [2];
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  uVar5 = 0;
  iVar4 = func_0x9801a8d0(param_1,local_40);
  if (iVar4 == 0) {
    piVar2 = (int *)param_1;
    if (local_40[0] == 0) {
      piVar2[0x15] = 0;
      FUN_9800dcf0((uint *)(piVar2 + 0x11),0,0x10);
      piVar2[0x2a] = 0;
      FUN_9800dcf0((uint *)(piVar2 + 0x26),0,0x10);
      FUN_9800dcf0((uint *)(piVar2 + 0x16),0,0x40);
    }
    func_0x9801ad90(&local_38);
    if ((((*(short *)((int)piVar2 + 0x46) != 0) && (*(short *)((int)piVar2 + 0x9a) != 0)) &&
        (uVar3 = FUN_9801a670(param_1 + 0x44,local_28,&local_38,1), (uVar3 & 0xff) != 0)) &&
       (uVar3 = FUN_9801a670(param_1 + 0x98,&local_30,&local_38,1), (uVar3 & 0xff) != 0)) {
      lVar1 = (longlong)(*piVar2 * 0x3c) * 10000000;
      local_28[0] = (longlong)(piVar2[0x2a] * 0x3c) * 10000000 + lVar1 + local_28[0];
      local_30 = (longlong)(piVar2[0x15] * 0x3c) * 10000000 + lVar1 + local_30;
      if (local_30 < local_28[0]) {
        if ((local_38 < local_30) || (local_28[0] <= local_38)) {
          return 1;
        }
      }
      else if ((local_28[0] <= local_38) && (local_38 < local_30)) {
        return 1;
      }
      uVar5 = 2;
    }
  }
  else {
    thunk_FUN_98008ac0(iVar4);
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}


/* ==== FUN_9801a410 @ 9801a410 ==== */

ulonglong FUN_9801a410(undefined8 param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [40];
  ulonglong local_38;
  
  uVar1 = FUN_9800dc78();
  puVar4 = (undefined4 *)param_3;
  if ((param_3 & 0xffffffff) == 0) {
    uVar5 = (ulonglong)param_2;
  }
  else {
    local_70 = CONCAT44(*puVar4,param_2);
    uVar5 = local_70;
  }
  if ((param_4 & 0xffffffff) != 0) {
    if (((param_4 & 0xffffffff) == 1) || (2 < (param_4 & 0xffffffff))) {
      iVar2 = (**(code **)(DAT_9801b2e0 + 0x20))(uVar1,auStack_68,&local_70,8,0xe);
      local_38 = local_70;
    }
    else {
      iVar2 = (**(code **)(DAT_9801b2e0 + 0x20))(uVar1,auStack_68,auStack_60,0x38,0x22);
    }
    if (iVar2 < 0) {
      FUN_98008ad8();
      return 0xffffffffffffffff;
    }
    uVar5 = local_38 + uVar5;
  }
  local_70 = uVar5;
  if ((longlong)uVar5 < 0) {
    uVar3 = 0x83;
  }
  else {
    if (((param_3 & 0xffffffff) != 0) || ((uVar5 & 0x7fffffff00000000) == 0)) {
      iVar2 = (**(code **)(DAT_9801b2e0 + 0x24))(uVar1,auStack_68,&local_70,8,0xe);
      if (-1 < iVar2) {
        if ((param_3 & 0xffffffff) != 0) {
          *puVar4 = local_70._0_4_;
        }
        if (local_70._4_4_ == -1) {
          thunk_FUN_98008ac0(0);
        }
        return local_70 & 0xffffffff;
      }
      FUN_98008ad8();
      if ((param_3 & 0xffffffff) == 0) {
        return 0xffffffffffffffff;
      }
      *puVar4 = 0xffffffff;
      return 0xffffffffffffffff;
    }
    uVar3 = 0x57;
  }
  FUN_98008ac0(uVar3);
  return 0xffffffffffffffff;
}


/* ==== FUN_9801a580 @ 9801a580 ==== */

bool FUN_9801a580(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  iVar1 = func_0x9801ae00(param_1,auStack_10);
  if (iVar1 < 0) {
    FUN_98008ad8();
  }
  return iVar1 >= 0;
}


/* ==== FUN_9801a5c0 @ 9801a5c0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_9801a5c0(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uStack_48;
  undefined4 auStack_40 [12];
  
  if ((*_UNK_980004c4 & 0x10) == 0) {
    uVar1 = (ulonglong)uRam9801cc54;
  }
  else {
    puVar2 = &uStack_48;
    lVar3 = 6;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar1 = (ulonglong)uRam9801cc54;
    auStack_40[0] = 0x30;
    if (uVar1 == 0) {
      uVar1 = FUN_98018500(0xc1002,0,0x100000,0x1000,0,auStack_40);
      uRam9801cc54 = (uint)uVar1;
    }
  }
  return uVar1 != 0;
}


/* ==== FUN_9801a660 @ 9801a660 ==== */

void FUN_9801a660(void)

{
  FUN_9801aaf0();
  return;
}


/* ==== FUN_9801a670 @ 9801a670 ==== */

undefined8 FUN_9801a670(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  longlong alStack_b0 [2];
  short sStack_a0;
  short sStack_9e;
  short sStack_9c;
  short sStack_9a;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  undefined2 uStack_92;
  short local_90;
  ushort local_8e;
  ushort uStack_8a;
  undefined1 auStack_80 [4];
  short sStack_7c;
  short sStack_72;
  
  psVar4 = (short *)FUN_9800dc58();
  FUN_9801a030((undefined4 *)param_3,&local_90);
  if (*psVar4 == 0) {
    sVar1 = psVar4[3];
    if ((sVar1 < 6) && (sVar1 != 0)) {
      sVar2 = psVar4[1];
      sVar3 = psVar4[2];
      bVar5 = false;
      sVar8 = local_90;
      if ((param_4 & 0xff) == 0) {
        if ((int)sVar2 < (int)(uint)local_8e) {
          sVar8 = local_90 + 1;
        }
        else if ((int)sVar2 <= (int)(uint)local_8e) {
          bVar5 = true;
        }
      }
      sStack_9a = psVar4[4];
      sStack_98 = psVar4[5];
      sStack_96 = psVar4[6];
      sStack_94 = psVar4[7];
      sStack_9c = 1;
      uStack_92 = 0;
      sStack_a0 = sVar8;
      sStack_9e = sVar2;
      cVar6 = func_0x9801adc0(&sStack_a0,alStack_b0);
      while (cVar6 != '\0') {
        func_0x9801ada0(alStack_b0,auStack_80);
        if (sVar3 < sStack_72) {
          sStack_9c = (sVar3 - sStack_72) + sStack_9c + 7;
        }
        else if (sStack_72 < sVar3) {
          sStack_9c = (sVar3 - sStack_72) + sStack_9c;
        }
        sVar7 = 1;
        sVar9 = sStack_9c;
        if (1 < sVar1) {
          do {
            sStack_9c = sStack_9c + 7;
            cVar6 = func_0x9801adc0(&sStack_a0,alStack_b0);
            if (cVar6 == '\0') break;
            func_0x9801ada0(alStack_b0,auStack_80);
            sVar7 = sVar7 + 1;
            sVar9 = sStack_7c;
          } while (sVar7 < sVar1);
        }
        sStack_9c = sVar9;
        cVar6 = func_0x9801adc0(&sStack_a0,alStack_b0);
        if (cVar6 == '\0') {
          return 0;
        }
        if ((!bVar5) ||
           (((int)(uint)uStack_8a <= (int)sStack_9c &&
            (((int)sStack_9c != (uint)uStack_8a || (*param_3 <= alStack_b0[0])))))) {
          *param_2 = alStack_b0[0];
          return 1;
        }
        sStack_98 = psVar4[5];
        sStack_96 = psVar4[6];
        sVar8 = sVar8 + 1;
        sStack_94 = psVar4[7];
        sStack_9a = psVar4[4];
        bVar5 = false;
        sStack_9c = 1;
        uStack_92 = 0;
        sStack_a0 = sVar8;
        sStack_9e = sVar2;
        cVar6 = func_0x9801adc0(&sStack_a0,alStack_b0);
      }
    }
  }
  else {
    bVar5 = FUN_9801a0b8(psVar4,(undefined4 *)param_2);
    if ((bVar5) && (*param_3 <= *param_2)) {
      return 1;
    }
  }
  return 0;
}


/* ==== FUN_9801aae4 @ 9801aae4 ==== */

undefined8 FUN_9801aae4(void)

{
  return 0;
}


/* ==== FUN_9801aaf0 @ 9801aaf0 ==== */

void FUN_9801aaf0(void)

{
  undefined8 in_r0;
  
  trapWord(0x1f,in_r0,0x14);
  return;
}


/* ==== FUN_9801ab20 @ 9801ab20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab30 @ 9801ab30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab40 @ 9801ab40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab50 @ 9801ab50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab60 @ 9801ab60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab70 @ 9801ab70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab80 @ 9801ab80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ab90 @ 9801ab90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ab90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801aba0 @ 9801aba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801aba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801abb0 @ 9801abb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801abb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801abc0 @ 9801abc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801abc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801abd0 @ 9801abd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801abd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


