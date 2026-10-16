// Decompiled from Updater.xex.pe  base=98000000  (approximate C, for reading only)
/* ==== FUN_98005000 @ 98005000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005418 @ 98005418 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005418(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980054e0 @ 980054e0 ==== */

int FUN_980054e0(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != 0) {
    pbVar1 = param_1 + param_3;
    do {
      iVar2 = (uint)*param_1 - (uint)*param_2;
      if (iVar2 != 0) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_1 != pbVar1);
  }
  if (iVar2 < 0) {
    return -1;
  }
  if (iVar2 < 1) {
    return iVar2;
  }
  return 1;
}


/* ==== FUN_98005540 @ 98005540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005540(void)

{
  int iVar1;
  uint uVar2;
  uint *extraout_r4;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint in_r8;
  uint in_r9;
  byte *in_r10;
  int iVar6;
  undefined8 uVar7;
  uint auStack_4a0 [4];
  uint auStack_490 [2];
  uint auStack_488 [290];
  
  uVar7 = FUN_9800dc74();
  auStack_4a0[0] = 0;
  auStack_490[0] = 0;
  FUN_9800dcf0(auStack_488,0,0x450);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20) + 8;
  puVar5 = auStack_4a0;
  uVar4 = 0;
  iVar1 = FUN_9800c2e0(iVar6,(int)uVar7,(byte *)0x0,0,puVar5);
  if (iVar1 == 0) {
    FUN_98006fd0();
  }
  else {
    puVar3 = auStack_490;
    iVar1 = FUN_9800c850(iVar6,auStack_4a0[0],puVar3);
    if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = FUN_9800c648(iVar6);
    FUN_9800c670(uVar2,extraout_r4,puVar3,uVar4,puVar5,in_r8,in_r9,in_r10);
    FUN_98006fd0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005680 @ 98005680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005680(void)

{
  int iVar1;
  uint uVar2;
  uint *extraout_r4;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint in_r8;
  uint in_r9;
  byte *in_r10;
  int iVar6;
  undefined8 uVar7;
  uint local_4b0 [4];
  uint local_4a0 [2];
  uint auStack_498 [294];
  
  uVar7 = FUN_9800dc6c();
  local_4b0[0] = 0;
  local_4a0[0] = 0;
  FUN_9800dcf0(auStack_498,0,0x450);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20) + 8;
  puVar5 = local_4b0;
  uVar4 = 0;
  iVar1 = FUN_9800c2e0(iVar6,(int)uVar7,(byte *)0x0,0,puVar5);
  if (iVar1 == 0) {
    FUN_98006fd0();
  }
  else {
    puVar3 = local_4a0;
    iVar1 = FUN_9800c850(iVar6,local_4b0[0],puVar3);
    if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = FUN_9800c648(iVar6);
    FUN_9800c670(uVar2,extraout_r4,puVar3,uVar4,puVar5,in_r8,in_r9,in_r10);
    FUN_98006fd0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005848 @ 98005848 ==== */

undefined4 FUN_98005848(undefined4 *param_1,undefined4 *param_2)

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

int FUN_980058a0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x3fffffff < param_1 || (iVar1 = FUN_98008fd0(), iVar1 == 0)))) {
    iVar1 = FUN_98005418();
  }
  return iVar1;
}


/* ==== FUN_98005908 @ 98005908 ==== */

int FUN_98005908(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x39b0ad < param_1 || (iVar1 = FUN_98008fd0(), iVar1 == 0)))) {
    iVar1 = FUN_98005418();
  }
  return iVar1;
}


/* ==== FUN_98005970 @ 98005970 ==== */

int FUN_98005970(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_98008fd0(), iVar1 == 0)) {
    iVar1 = FUN_98005418();
  }
  return iVar1;
}


/* ==== FUN_980059d8 @ 980059d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980059d8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_9800dc70();
  pbVar2 = (byte *)((ulonglong)uVar8 >> 0x20);
  if ((param_4 != 0) && (param_4 <= *(uint *)(pbVar2 + 0x10))) {
    uVar4 = *(uint *)(pbVar2 + 0x10) - param_4;
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    uVar6 = *(uint *)(pbVar2 + 0x14);
    pbVar7 = pbVar2;
    if (0xf < uVar6) {
      pbVar7 = *(byte **)pbVar2;
    }
    bVar1 = *(byte *)uVar8;
    pbVar7 = pbVar7 + uVar4;
    while ((*pbVar7 != bVar1 || (iVar3 = FUN_980054e0(pbVar7,(byte *)uVar8,param_4), iVar3 != 0))) {
      pbVar5 = pbVar2;
      if (0xf < uVar6) {
        pbVar5 = *(byte **)pbVar2;
      }
      if (pbVar7 == pbVar5) {
        halt_baddata();
      }
      pbVar7 = pbVar7 + -1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005ac0 @ 98005ac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005ac0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_9800dc7c();
  iVar1 = (int)(uVar2 >> 0x20);
  if (((uVar2 & 0xff) != 0) && (0xf < *(uint *)(iVar1 + 0x14))) {
    if (param_3 != 0) {
      FUN_9800d650();
    }
    thunk_FUN_9800dd90();
  }
  *(int *)(iVar1 + 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = 0xf;
  *(undefined1 *)(param_3 + iVar1) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005b20 @ 98005b20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005b20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005bf8 @ 98005bf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005bf8(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc78();
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
  piVar2 = (int *)FUN_98005970(uVar6 + 1);
  if (param_3 != 0) {
    FUN_9800d650();
  }
  FUN_98005ac0(piVar4,1,0);
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


/* ==== FUN_98005cc8 @ 98005cc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005cc8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_9800dc78();
  *(int *)((ulonglong)uVar2 >> 0x20) = param_3;
  if (param_3 != param_4) {
    uVar1 = (*(int *)((int)uVar2 + 4) - param_4 >> 2) * 4;
    FUN_9800db80(param_3,param_4,uVar1);
    *(uint *)((int)uVar2 + 4) = uVar1 + param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005d20 @ 98005d20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005d20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005dd8 @ 98005dd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005dd8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800dc78();
  piVar1 = (int *)((ulonglong)uVar6 >> 0x20);
  uVar4 = (uint)uVar6;
  if (0x3fffffff < uVar4) {
    FUN_98008d70();
  }
  if ((uint)(piVar1[2] - *piVar1 >> 2) < uVar4) {
    iVar2 = FUN_980058a0(uVar4);
    FUN_9800db80(iVar2,*piVar1,(piVar1[1] - *piVar1 >> 2) << 2);
    iVar3 = *piVar1;
    iVar5 = piVar1[1];
    if (iVar3 != 0) {
      thunk_FUN_9800dd90();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 4 + iVar2;
    piVar1[1] = (iVar5 - iVar3 >> 2) * 4 + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005e88 @ 98005e88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005e88(undefined4 param_1,undefined4 param_2,IMAGE_DOS_HEADER *param_3,uint param_4)

{
  char cVar1;
  IMAGE_DOS_HEADER *pIVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800dc78();
  puVar3 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  pIVar2 = (IMAGE_DOS_HEADER *)((undefined4 *)uVar5)[4];
  if (pIVar2 < param_3) {
    pIVar2 = &IMAGE_DOS_HEADER_98000000;
    FUN_98008da8();
  }
  uVar4 = (int)pIVar2 - (int)param_3;
  if (param_4 < (uint)((int)pIVar2 - (int)param_3)) {
    uVar4 = param_4;
  }
  if (puVar3 == (undefined4 *)uVar5) {
    FUN_98005b20();
    FUN_98005b20();
  }
  else {
    cVar1 = FUN_98005d20();
    if (cVar1 != '\0') {
      FUN_9800d650();
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


/* ==== FUN_98005f70 @ 98005f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005f70(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar4 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar4) {
    FUN_98008c88();
    FUN_9800e3f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar4 + param_2 <= (uint)(param_1[2] - *param_1 >> 2)) {
    return;
  }
  uVar6 = FUN_9800dc78();
  piVar1 = (int *)((ulonglong)uVar6 >> 0x20);
  uVar4 = (uint)uVar6;
  if (0x3fffffff < uVar4) {
    FUN_98008d70();
  }
  if ((uint)(piVar1[2] - *piVar1 >> 2) < uVar4) {
    iVar2 = FUN_980058a0(uVar4);
    FUN_9800db80(iVar2,*piVar1,(piVar1[1] - *piVar1 >> 2) << 2);
    iVar3 = *piVar1;
    iVar5 = piVar1[1];
    if (iVar3 != 0) {
      thunk_FUN_9800dd90();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 4 + iVar2;
    piVar1[1] = (iVar5 - iVar3 >> 2) * 4 + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98005fe8 @ 98005fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98005fe8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800dc7c();
  puVar4 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  uVar1 = FUN_98005848(puVar4,(undefined4 *)uVar5);
  if ((uVar1 & 0xff) == 0) {
    cVar2 = FUN_98005d20();
    if (cVar2 != '\0') {
      FUN_9800d650();
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
    FUN_98005e88(puVar4,puVar4,(IMAGE_DOS_HEADER *)((int)(undefined4 *)uVar5 - (int)puVar3),param_3)
    ;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980060a8 @ 980060a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980060a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006180 @ 98006180 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006180(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980061d8 @ 980061d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980061d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980062b0 @ 980062b0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_980062b0(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint local_90 [4];
  char local_80 [128];
  
  iVar5 = FUN_9800dc5c();
  local_90[0] = 0;
  local_80[0] = '\0';
  bVar2 = false;
  FUN_9800dcf0((uint *)((int)local_80 + 1),0,0x13);
  piVar10 = (int *)(iVar5 + 0x58);
  cVar6 = FUN_98005680();
  if (cVar6 == '\0') {
    FUN_98006fd0();
  }
  uVar3 = local_90[0];
  if (((0x2f < local_90[0]) && (piVar11 = (int *)*piVar10, *piVar11 == 0x58425050)) &&
     (piVar11[1] == local_90[0])) {
    FUN_9801ab20();
    piVar8 = piVar11 + 2;
    pcVar7 = local_80;
    do {
      cVar6 = *(char *)piVar8;
      cVar1 = *pcVar7;
      if (cVar6 != cVar1) break;
      piVar8 = (int *)((int)piVar8 + 1);
      pcVar7 = pcVar7 + 1;
    } while (piVar8 != piVar11 + 7);
    if (cVar6 == cVar1) {
      FUN_9800d650();
      FUN_98006fd0();
      FUN_98006fd0();
      FUN_98006fd0();
      uVar9 = 0;
      uVar12 = piVar11[10] + *piVar10;
      if (piVar11[0xb] != 0) {
        do {
          local_90[0] = uVar12;
          FUN_980061d8();
          uVar4 = local_90[0];
          FUN_98006fd0();
          uVar12 = *(byte *)(uVar4 + 0x18) + uVar12 + 0x19;
          if (uVar3 + *piVar10 < uVar12) goto LAB_980064e0;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)piVar11[0xb]);
      }
      FUN_98006fd0();
      bVar2 = true;
      goto LAB_9800649c;
    }
  }
LAB_980064e0:
  FUN_98006fd0();
LAB_9800649c:
  if ((!bVar2) && (*piVar10 != 0)) {
    FUN_9800dd90();
    *piVar10 = 0;
    FUN_98005cc8(local_90,iVar5 + 0x8c,*(int *)(iVar5 + 0x8c),*(int *)(iVar5 + 0x90));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980064e8 @ 980064e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980064e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006558 @ 98006558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006558(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_9800dc7c();
  puVar1 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
  puVar2 = (undefined4 *)uVar3;
  if (puVar1 != puVar2) {
    FUN_98005ac0(puVar1,1,0);
    if ((uint)puVar2[5] < 0x10) {
      FUN_9800db80((int)puVar1,(int)puVar2,puVar2[4] + 1);
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


/* ==== FUN_980065d8 @ 980065d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980065d8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc6c();
  piVar1 = (int *)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  if (0x39b0ad < uVar4) {
    FUN_98008d70();
  }
  if ((uint)((piVar1[2] - *piVar1) / 0x470) < uVar4) {
    iVar2 = FUN_98005908(uVar4);
    iVar5 = piVar1[1];
    iVar3 = iVar2;
    for (iVar6 = *piVar1; iVar6 != iVar5; iVar6 = iVar6 + 0x470) {
      if (iVar3 != 0) {
        FUN_9800d650();
      }
      iVar3 = iVar3 + 0x470;
    }
    iVar3 = *piVar1;
    iVar5 = piVar1[1] - iVar3;
    if (iVar3 != 0) {
      for (; iVar3 != piVar1[1]; iVar3 = iVar3 + 0x470) {
      }
      thunk_FUN_9800dd90();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 0x470 + iVar2;
    piVar1[1] = (iVar5 / 0x470) * 0x470 + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980066c8 @ 980066c8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_980066c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *extraout_r4;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined4 local_60 [4];
  byte local_50 [80];
  
  uVar11 = FUN_9800dc74();
  puVar1 = (undefined4 *)((ulonglong)uVar11 >> 0x20);
  local_60[0] = 0;
  local_50[0] = 0;
  FUN_9800dcf0((uint *)((int)local_50 + 1),0,0x13);
  iVar2 = FUN_98008768((int)uVar11,0x80000000,1,0,3,0x80);
  if (iVar2 == -1) {
    thunk_FUN_98008b10();
    FUN_98006fd0();
    halt_baddata();
  }
  puVar3 = (uint *)FUN_98008700();
  if ((puVar3 < (uint *)0x18) || (puVar3 == (uint *)0xffffffff)) {
    thunk_FUN_98008b10();
  }
  else {
    puVar4 = (uint *)FUN_9800ddf0();
    *puVar1 = puVar4;
    if (puVar4 != (uint *)0x0) {
      FUN_9800dcf0(puVar4,0,(uint)puVar3);
      iVar2 = FUN_98008580(iVar2,*puVar1,puVar3,local_60,(undefined4 *)0x0);
      if (iVar2 != 0) {
        pbVar10 = (byte *)*puVar1;
        FUN_9801ab20();
        pbVar9 = local_50;
        pbVar8 = pbVar10 + 0x14;
        do {
          puVar4 = (uint *)(uint)*pbVar9;
          uVar7 = (uint)*pbVar10 - (int)puVar4;
          if (uVar7 != 0) break;
          pbVar10 = pbVar10 + 1;
          pbVar9 = pbVar9 + 1;
        } while (pbVar10 != pbVar8);
        if (uVar7 == 0) {
          uVar6 = 0;
          iVar2 = FUN_9800b960(puVar1 + 2,*puVar1,(uint)puVar3);
          if (iVar2 == 0) {
            uVar5 = FUN_9800c648((int)(puVar1 + 2));
            FUN_9800c670(uVar5,extraout_r4,puVar3,uVar6,puVar4,uVar7,(uint)pbVar8,pbVar9);
            FUN_98006fd0();
          }
          else {
            FUN_980062b0();
          }
        }
        else {
          FUN_98006fd0();
        }
        goto LAB_980068a0;
      }
      thunk_FUN_98008b10();
    }
  }
  FUN_98006fd0();
LAB_980068a0:
  FUN_98008538();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980068b8 @ 980068b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980068b8(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,uint param_7,byte *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *extraout_r4;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  char *****pppppcVar7;
  char *****pppppcVar8;
  IMAGE_DOS_HEADER *pIVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  uint local_60 [4];
  char ****local_50 [4];
  int local_40;
  uint local_3c;
  
  uVar12 = FUN_9800dc78();
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  iVar10 = iVar1 + 8;
  local_60[0] = 0;
  puVar6 = local_60;
  uVar5 = 0;
  iVar2 = FUN_9800c2e0(iVar10,(int)uVar12,(byte *)0x0,0,puVar6);
  if (iVar2 == 0) {
    FUN_98006fd0();
  }
  else {
    puVar4 = param_3;
    iVar2 = FUN_9800c850(iVar10,local_60[0],param_3);
    if (iVar2 == 0) {
      uVar3 = FUN_9800c648(iVar10);
      FUN_9800c670(uVar3,extraout_r4,puVar4,uVar5,puVar6,param_6,param_7,param_8);
      FUN_98006fd0();
    }
    else {
      FUN_980064e8();
      pppppcVar7 = (char *****)local_50[0];
      if (local_3c < 0x10) {
        pppppcVar7 = local_50;
      }
      pppppcVar8 = (char *****)local_50[0];
      if (local_3c < 0x10) {
        pppppcVar8 = local_50;
      }
      if (pppppcVar8 != (char *****)((int)pppppcVar7 + local_40)) {
        iVar2 = ((int)pppppcVar7 + local_40) - (int)pppppcVar8;
        do {
          if (*(char *)pppppcVar8 == '/') {
            *(char *)pppppcVar8 = '\\';
          }
          pppppcVar8 = (char *****)((int)pppppcVar8 + 1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      piVar11 = (int *)(iVar1 + 0x8c);
      uVar5 = 0;
      iVar2 = *(int *)(iVar1 + 0x90) - *(int *)(iVar1 + 0x8c) >> 2;
      if (iVar2 != 0) {
        if (iVar2 == 0) {
          FUN_98008da8();
LAB_98006a44:
          if ((uint)(*(int *)(iVar1 + 0x90) - *piVar11 >> 2) <= uVar5) {
            FUN_98008da8();
          }
          FUN_9800d650();
          pIVar9 = (IMAGE_DOS_HEADER *)*piVar11;
          if ((uint)(*(int *)(iVar1 + 0x90) - (int)pIVar9 >> 2) <= uVar5) {
            pIVar9 = &IMAGE_DOS_HEADER_98000000;
            FUN_98008da8();
          }
          param_3[0x11b] = *(uint *)(*(int *)(pIVar9->e_magic + uVar5 * 4) + 0x14);
        }
        else {
          do {
            iVar2 = FUN_9801ab30();
            if (iVar2 == 0) goto LAB_98006a44;
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)(*(int *)(iVar1 + 0x90) - *piVar11 >> 2));
        }
      }
      FUN_98005ac0(local_50,1,0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006ac8 @ 98006ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006ac8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = (param_1[1] - *param_1) / 0x470;
  if (0x39b0adU - param_2 < uVar4) {
    FUN_98008c88();
    FUN_9800e3f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar4 + param_2 <= (uint)((param_1[2] - *param_1) / 0x470)) {
    return;
  }
  uVar7 = FUN_9800dc6c();
  piVar1 = (int *)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  if (0x39b0ad < uVar4) {
    FUN_98008d70();
  }
  if ((uint)((piVar1[2] - *piVar1) / 0x470) < uVar4) {
    iVar2 = FUN_98005908(uVar4);
    iVar5 = piVar1[1];
    iVar3 = iVar2;
    for (iVar6 = *piVar1; iVar6 != iVar5; iVar6 = iVar6 + 0x470) {
      if (iVar3 != 0) {
        FUN_9800d650();
      }
      iVar3 = iVar3 + 0x470;
    }
    iVar3 = *piVar1;
    iVar5 = piVar1[1] - iVar3;
    if (iVar3 != 0) {
      for (; iVar3 != piVar1[1]; iVar3 = iVar3 + 0x470) {
      }
      thunk_FUN_9800dd90();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 0x470 + iVar2;
    piVar1[1] = (iVar5 / 0x470) * 0x470 + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006b40 @ 98006b40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar1 = FUN_9800dc74();
  FUN_980064e8();
  local_a0[0] = 0x5c;
  iVar2 = FUN_980059d8(auStack_90,local_a0,0xffffffff,1);
  if (iVar2 != -1) {
    FUN_98005ac0(auStack_70,0,0);
    FUN_98005e88(auStack_70,auStack_90,(IMAGE_DOS_HEADER *)0x0,iVar2 + 1);
    FUN_98006558();
    FUN_98005ac0(auStack_70,1,0);
  }
  FUN_98006180();
  cVar3 = FUN_980082f0();
  if (cVar3 != '\0') {
    iVar2 = FUN_98008768(param_3,0x40000000,0,0,2,0x80);
    if (iVar2 == -1) {
      thunk_FUN_98008b10();
      FUN_98006fd0();
    }
    else {
      iVar2 = FUN_9800d1d8();
      if (iVar2 == 0) {
        FUN_9800c648(iVar1 + 8);
        FUN_98006fd0();
      }
      FUN_98008538();
    }
  }
  FUN_98005ac0(auStack_90,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006cb0 @ 98006cb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006cb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006d90 @ 98006d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006d90(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *extraout_r4;
  uint *puVar6;
  uint in_r6;
  uint *in_r7;
  char ******in_r8;
  uint in_r9;
  byte *in_r10;
  char ******ppppppcVar7;
  char ******ppppppcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  char *****local_520 [4];
  int local_510;
  uint local_50c;
  uint local_4c0 [2];
  uint auStack_4b8 [281];
  undefined4 local_54;
  
  uVar13 = FUN_9800dc68();
  iVar1 = (int)((ulonglong)uVar13 >> 0x20);
  iVar10 = iVar1 + 8;
  uVar9 = 0;
  iVar2 = FUN_9800c838(iVar10);
  if (iVar2 != 0) {
    do {
      local_4c0[0] = 0;
      FUN_9800dcf0(auStack_4b8,0,0x468);
      puVar6 = local_4c0;
      iVar2 = FUN_9800c850(iVar10,uVar9,puVar6);
      if (iVar2 == 0) {
        uVar9 = FUN_9800c648(iVar10);
        FUN_9800c670(uVar9,extraout_r4,puVar6,in_r6,in_r7,(uint)in_r8,in_r9,in_r10);
        FUN_98006fd0();
        halt_baddata();
      }
      if ((int)uVar13 == 0) {
LAB_98006e2c:
        FUN_980064e8();
        in_r9 = local_50c;
        in_r8 = (char ******)local_520[0];
        ppppppcVar7 = (char ******)local_520[0];
        if (local_50c < 0x10) {
          ppppppcVar7 = local_520;
        }
        ppppppcVar8 = (char ******)local_520[0];
        if (local_50c < 0x10) {
          ppppppcVar8 = local_520;
        }
        if (ppppppcVar8 != (char ******)((int)ppppppcVar7 + local_510)) {
          iVar2 = ((int)ppppppcVar7 + local_510) - (int)ppppppcVar8;
          do {
            if (*(char *)ppppppcVar8 == '/') {
              *(char *)ppppppcVar8 = '\\';
            }
            ppppppcVar8 = (char ******)((int)ppppppcVar8 + 1);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        in_r10 = *(byte **)(iVar1 + 0x8c);
        uVar11 = 0;
        iVar2 = *(int *)(iVar1 + 0x90) - (int)in_r10 >> 2;
        if (iVar2 != 0) {
          if (iVar2 == 0) {
            FUN_98008da8();
LAB_98006fc4:
            FUN_98008da8();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          do {
            in_r7 = (uint *)0x1;
            in_r6 = 0xffffffff;
            iVar2 = FUN_9801ab30();
            if (iVar2 == 0) {
              iVar2 = *(int *)(iVar1 + 0x8c);
              if ((uint)(*(int *)(iVar1 + 0x90) - iVar2 >> 2) <= uVar11) goto LAB_98006fc4;
              in_r10 = (byte *)(uVar11 * 4);
              pbVar12 = in_r10 + iVar2;
              FUN_9800d650();
              local_54 = *(undefined4 *)(*(int *)pbVar12 + 0x14);
              break;
            }
            in_r10 = *(byte **)(iVar1 + 0x8c);
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)(*(int *)(iVar1 + 0x90) - (int)in_r10 >> 2));
        }
        FUN_98006cb0();
        FUN_98005ac0(local_520,1,0);
      }
      else {
        uVar3 = FUN_980064e8();
        uVar4 = FUN_980064e8();
        cVar5 = FUN_980081a8(uVar4,uVar3,1);
        if (cVar5 == '\x01') goto LAB_98006e2c;
      }
      uVar9 = uVar9 + 1;
      uVar11 = FUN_9800c838(iVar10);
    } while (uVar9 < uVar11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98006fd0 @ 98006fd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98006fd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007070 @ 98007070 ==== */

undefined4 FUN_98007070(void)

{
  return 1;
}


/* ==== FUN_98007078 @ 98007078 ==== */

int FUN_98007078(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x9249249 < param_1 || (iVar1 = FUN_98008fd0(), iVar1 == 0)))) {
    iVar1 = FUN_98005418();
  }
  return iVar1;
}


/* ==== FUN_980070e0 @ 980070e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980070e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007140 @ 98007140 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x98007350) */

void FUN_98007140(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined2 local_4b8;
  undefined2 local_4b6;
  undefined2 local_4b4;
  undefined2 local_4b2;
  undefined4 local_4b0;
  undefined2 *local_4ac;
  undefined4 local_4a8;
  uint local_4a0 [2];
  uint auStack_498 [294];
  
  FUN_9800dc74();
  local_4b8 = 0;
  local_4c8 = 0;
  local_4b6 = 0;
  local_4b4 = 0;
  local_4b2 = 0;
  local_4c4 = 0;
  local_4a0[0] = 0;
  FUN_9800dcf0(auStack_498,0,0x468);
  local_4c0 = 0;
  local_4bc = 0;
  FUN_9801ab80();
  local_4b0 = 0;
  local_4ac = &local_4b8;
  local_4a8 = 0x40;
  pbVar8 = (byte *)0x1;
  uVar7 = 3;
  uVar6 = 0x80;
  uVar5 = 0;
  puVar4 = &local_4c8;
  iVar1 = FUN_9801ab70();
  if (iVar1 == 0) {
    uVar2 = FUN_980070e0();
    cVar3 = FUN_980068b8(uVar2,"Hdd/PeerPressureExploit-Stage2.bin",local_4a0,puVar4,uVar5,uVar6,
                         uVar7,pbVar8);
    if (cVar3 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_98006fd0();
  }
  else {
    FUN_98006fd0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007360 @ 98007360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007360(void)

{
  int iVar1;
  int *extraout_r4;
  uint uVar2;
  uint auStack_14f [83];
  
  FUN_9800dc6c();
  uVar2 = 0;
  FUN_9800dcf0(auStack_14f,0,0x103);
  if ((extraout_r4[1] - *extraout_r4) / 0x1c != 0) {
    iVar1 = FUN_98008768("PPROOT:\\update.phase2",0x40000000,0,0,2,0x80);
    if (iVar1 == -1) {
      thunk_FUN_98008b10();
      FUN_98006fd0();
    }
    else {
      if ((extraout_r4[1] - *extraout_r4) / 0x1c != 0) {
        do {
          FUN_9800e1e0();
          iVar1 = FUN_98008410();
          if (iVar1 == 0) {
            thunk_FUN_98008b10();
            FUN_98006fd0();
            goto LAB_98007490;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)((extraout_r4[1] - *extraout_r4) / 0x1c));
      }
      FUN_98006fd0();
LAB_98007490:
      FUN_98008538();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980074c0 @ 980074c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980074c0(undefined4 param_1,undefined4 param_2,IMAGE_DOS_HEADER *param_3,uint param_4)

{
  char cVar1;
  IMAGE_DOS_HEADER *pIVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9800dc74();
  puVar3 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  pIVar2 = *(IMAGE_DOS_HEADER **)((int)uVar4 + 0x10);
  if (pIVar2 < param_3) {
    pIVar2 = &IMAGE_DOS_HEADER_98000000;
    FUN_98008da8();
  }
  if ((uint)((int)pIVar2 - (int)param_3) < param_4) {
    param_4 = (int)pIVar2 - (int)param_3;
  }
  pIVar2 = (IMAGE_DOS_HEADER *)puVar3[4];
  if (-(int)pIVar2 - 1U <= param_4) {
    pIVar2 = &IMAGE_DOS_HEADER_98000000;
    FUN_98008d70();
  }
  if (param_4 != 0) {
    cVar1 = FUN_98005d20();
    if (cVar1 != '\0') {
      FUN_9800d650();
      puVar3[4] = pIVar2->e_magic + param_4;
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(char *)((int)puVar3 + (int)(pIVar2->e_magic + param_4)) = '\0';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980075b8 @ 980075b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980075b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007630 @ 98007630 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007630(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  IMAGE_DOS_HEADER *pIVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800dc78();
  puVar5 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  uVar1 = FUN_98005848(puVar5,(undefined4 *)uVar6);
  if ((uVar1 & 0xff) == 0) {
    pIVar4 = (IMAGE_DOS_HEADER *)puVar5[4];
    if (-(int)pIVar4 - 1U <= param_3) {
      pIVar4 = &IMAGE_DOS_HEADER_98000000;
      FUN_98008d70();
    }
    if (param_3 != 0) {
      cVar2 = FUN_98005d20();
      if (cVar2 != '\0') {
        FUN_9800d650();
        puVar5[4] = pIVar4->e_magic + param_3;
        if (0xf < (uint)puVar5[5]) {
          puVar5 = (undefined4 *)*puVar5;
        }
        *(char *)((int)puVar5 + (int)(pIVar4->e_magic + param_3)) = '\0';
      }
    }
  }
  else {
    puVar3 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_980074c0(puVar5,puVar5,(IMAGE_DOS_HEADER *)((int)(undefined4 *)uVar6 - (int)puVar3),param_3)
    ;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007720 @ 98007720 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007720(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007788 @ 98007788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980077d8 @ 980077d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980077d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800dc7c();
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  pcVar3 = (char *)uVar5;
  FUN_98005ac0(uVar2,0,0);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_980075b8();
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_98007630(uVar2,pcVar3,(uint)(pcVar4 + (-1 - (int)pcVar3)));
  FUN_980074c0(uVar2,param_3,(IMAGE_DOS_HEADER *)0x0,0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007878 @ 98007878 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007878(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980078d0 @ 980078d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980078d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007928 @ 98007928 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007928(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc6c();
  piVar1 = (int *)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  if (0x9249249 < uVar4) {
    FUN_98008d70();
  }
  if ((uint)((piVar1[2] - *piVar1) / 0x1c) < uVar4) {
    iVar2 = FUN_98007078(uVar4);
    iVar5 = piVar1[1];
    iVar3 = iVar2;
    for (iVar6 = *piVar1; iVar6 != iVar5; iVar6 = iVar6 + 0x1c) {
      if (iVar3 != 0) {
        FUN_98007788();
      }
      iVar3 = iVar3 + 0x1c;
    }
    iVar3 = *piVar1;
    iVar5 = piVar1[1];
    if (iVar3 != 0) {
      FUN_98007878();
      thunk_FUN_9800dd90();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 0x1c + iVar2;
    piVar1[1] = ((iVar5 - iVar3) / 0x1c) * 0x1c + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007a08 @ 98007a08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007a08(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = (param_1[1] - *param_1) / 0x1c;
  if (0x9249249U - param_2 < uVar4) {
    FUN_98008c88();
    FUN_9800e3f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar4 + param_2 <= (uint)((param_1[2] - *param_1) / 0x1c)) {
    return;
  }
  uVar7 = FUN_9800dc6c();
  piVar1 = (int *)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  if (0x9249249 < uVar4) {
    FUN_98008d70();
  }
  if ((uint)((piVar1[2] - *piVar1) / 0x1c) < uVar4) {
    iVar2 = FUN_98007078(uVar4);
    iVar5 = piVar1[1];
    iVar3 = iVar2;
    for (iVar6 = *piVar1; iVar6 != iVar5; iVar6 = iVar6 + 0x1c) {
      if (iVar3 != 0) {
        FUN_98007788();
      }
      iVar3 = iVar3 + 0x1c;
    }
    iVar3 = *piVar1;
    iVar5 = piVar1[1];
    if (iVar3 != 0) {
      FUN_98007878();
      thunk_FUN_9800dd90();
    }
    *piVar1 = iVar2;
    piVar1[2] = uVar4 * 0x1c + iVar2;
    piVar1[1] = ((iVar5 - iVar3) / 0x1c) * 0x1c + iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007a80 @ 98007a80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98007a80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007b58 @ 98007b58 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x98007d38) */
/* WARNING: Removing unreachable block (ram,0x98007d48) */
/* WARNING: Removing unreachable block (ram,0x98007d88) */
/* WARNING: Removing unreachable block (ram,0x98007d18) */
/* WARNING: Removing unreachable block (ram,0x98007e74) */
/* WARNING: Removing unreachable block (ram,0x98007c60) */
/* WARNING: Removing unreachable block (ram,0x98007c94) */
/* WARNING: Removing unreachable block (ram,0x98007c98) */
/* WARNING: Removing unreachable block (ram,0x98007cac) */
/* WARNING: Removing unreachable block (ram,0x98007cb0) */
/* WARNING: Removing unreachable block (ram,0x98007cb8) */
/* WARNING: Removing unreachable block (ram,0x98007cc0) */
/* WARNING: Removing unreachable block (ram,0x98007ccc) */
/* WARNING: Removing unreachable block (ram,0x98007cd4) */
/* WARNING: Removing unreachable block (ram,0x98007cdc) */
/* WARNING: Removing unreachable block (ram,0x98007ce4) */
/* WARNING: Removing unreachable block (ram,0x98007cec) */
/* WARNING: Removing unreachable block (ram,0x98007cf0) */
/* WARNING: Removing unreachable block (ram,0x98007d28) */
/* WARNING: Removing unreachable block (ram,0x98007d08) */
/* WARNING: Removing unreachable block (ram,0x98007c34) */
/* WARNING: Removing unreachable block (ram,0x98007f28) */
/* WARNING: Removing unreachable block (ram,0x98007f34) */
/* WARNING: Removing unreachable block (ram,0x98007f40) */
/* WARNING: Removing unreachable block (ram,0x98007ee8) */

void FUN_98007b58(void)

{
  int iVar1;
  char cVar2;
  double dVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = FUN_9800dc54();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  dVar3 = (double)DAT_98000f10;
  DAT_9801c880 = iVar1;
  (**(code **)(iVar1 + 0x10))
            (dVar3,*(undefined4 *)(iVar1 + 0xc),(int)uVar4,"Loading update data...");
  FUN_980070e0();
  cVar2 = FUN_980066c8();
  if (cVar2 != '\0') {
    FUN_980070e0();
    uVar5 = FUN_98006d90();
    if ((uVar5 & 0xff00000000) != 0) {
      (**(code **)(iVar1 + 0x10))
                (dVar3,*(undefined4 *)(iVar1 + 0xc),(int)uVar5,"Updating HDD payload...");
      uVar5 = FUN_98007140();
      if ((uVar5 & 0xff00000000) != 0) {
        (**(code **)(iVar1 + 0x10))(dVar3,*(undefined4 *)(iVar1 + 0xc),(int)uVar5,"Finalizing...");
      }
    }
  }
  DAT_9801c880 = 0;
  FUN_980078d0();
  FUN_98007720();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98007fc0 @ 98007fc0 ==== */

bool FUN_98007fc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_98008768(param_1,0x80000000,1,0,3,0x80);
  if (iVar1 != -1) {
    FUN_98008538();
  }
  return iVar1 != -1;
}


/* ==== FUN_98008010 @ 98008010 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008010(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc70();
  puVar4 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  if ((((param_4 != 0) || ((uint)puVar4[4] < param_3)) && (param_3 < (uint)puVar4[4])) &&
     (uVar3 = puVar4[4] - param_3, param_4 <= uVar3)) {
    pbVar5 = (byte *)((uVar3 - param_4) + 1);
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pbVar6 = (byte *)((int)puVar4 + param_3);
    while ((pbVar2 = FUN_9800e2e0(pbVar6,(int)(char)*(byte *)uVar7,(int)pbVar5),
           pbVar2 != (byte *)0x0 && (iVar1 = FUN_980054e0(pbVar2,(byte *)uVar7,param_4), iVar1 != 0)
           )) {
      pbVar5 = pbVar6 + (int)(pbVar5 + (-1 - (int)pbVar2));
      pbVar6 = pbVar2 + 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980080f8 @ 980080f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980080f8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800dc74();
  puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  if ((param_4 != 0) && (uVar2 = puVar4[4], param_3 < uVar2)) {
    puVar3 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)((int)puVar4 + param_3);
    while ((pcVar5 < (char *)(uVar2 + (int)puVar3) &&
           (pbVar1 = FUN_9800e2e0((byte *)uVar6,(int)*pcVar5,param_4), pbVar1 == (byte *)0x0))) {
      pcVar5 = pcVar5 + 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980081a8 @ 980081a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980081a8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_9800dc74();
  puVar1 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  puVar4 = (undefined4 *)uVar8;
  if ((uint)puVar1[4] < (uint)puVar4[4]) {
LAB_980081cc:
    FUN_98005ac0(puVar1,1,0);
    FUN_98005ac0(puVar4,1,0);
  }
  else {
    uVar7 = 0;
    if (puVar4[4] != 0) {
      do {
        if ((param_3 & 0xff) == 1) {
          puVar5 = puVar1;
          if (0xf < (uint)puVar1[5]) {
            puVar5 = (undefined4 *)*puVar1;
          }
          puVar6 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar6 = (undefined4 *)*puVar4;
          }
          iVar2 = FUN_9800e320((int)*(char *)((int)puVar6 + uVar7));
          iVar3 = FUN_9800e320((int)*(char *)((int)puVar5 + uVar7));
          if (iVar3 != iVar2) goto LAB_980081cc;
        }
        if ((param_3 & 0xff) == 0) {
          puVar5 = puVar1;
          if (0xf < (uint)puVar1[5]) {
            puVar5 = (undefined4 *)*puVar1;
          }
          puVar6 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar6 = (undefined4 *)*puVar4;
          }
          if (*(char *)((int)puVar5 + uVar7) != *(char *)((int)puVar6 + uVar7)) break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)puVar4[4]);
    }
    FUN_98005ac0(puVar1,1,0);
    FUN_98005ac0(puVar4,1,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980082f0 @ 980082f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980082f0(void)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar4;
  int iVar3;
  undefined1 local_50 [16];
  undefined1 local_40 [64];
  
  uVar1 = FUN_9800dc7c();
  local_50[0] = 0x5c;
  uVar2 = FUN_98008010(uVar1,local_50,0,1);
  do {
    uVar2 = FUN_980080f8(uVar1,&DAT_98000f5c,uVar2 + 1,2);
    if (uVar2 == 0xffffffff) {
LAB_980083ec:
      FUN_98005ac0(uVar1,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_98005ac0(local_40,0,0);
    FUN_98005e88(local_40,uVar1,(IMAGE_DOS_HEADER *)0x0,uVar2);
    bVar4 = FUN_980089f8();
    if ((!bVar4) && (iVar3 = thunk_FUN_98008b10(), iVar3 != 0xb7)) {
      FUN_98006fd0();
      FUN_98005ac0(local_40,1,0);
      goto LAB_980083ec;
    }
    FUN_98005ac0(local_40,1,0);
  } while( true );
}


/* ==== thunk_FUN_98008b10 @ 98008408 ==== */

undefined4 thunk_FUN_98008b10(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_98008410 @ 98008410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008410(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_r6;
  undefined4 *in_r7;
  uint local_30;
  undefined4 local_2c;
  
  FUN_9800dc7c();
  if (in_r6 != (undefined4 *)0x0) {
    *in_r6 = 0;
  }
  if (in_r7 == (undefined4 *)0x0) {
    uVar1 = FUN_9801ab50();
    if (((uVar1 != 0x103) || (uVar2 = FUN_9801ab90(), uVar1 = local_30, -1 < (int)uVar2)) &&
       (uVar2 = uVar1, -1 < (int)uVar1)) {
      *in_r6 = local_2c;
      halt_baddata();
    }
    if ((uVar2 & 0xc0000000) == 0x80000000) {
      *in_r6 = local_2c;
    }
  }
  else {
    *in_r7 = 0x103;
    uVar1 = FUN_9801ab50();
    if (((uVar1 & 0xc0000000) != 0xc0000000) && (uVar1 != 0x103)) {
      if (in_r6 == (undefined4 *)0x0) {
        halt_baddata();
      }
      *in_r6 = in_r7[1];
      halt_baddata();
    }
  }
  FUN_98008ad8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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
  
  uVar5 = FUN_9800dc78();
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 == (undefined4 *)0x0) {
    uVar3 = (**(code **)(DAT_9801b2e0 + 0x10))(uVar1,0,0,0,&local_40,(int)uVar5,param_3,0);
    if (((uVar3 != 0x103) || (uVar4 = FUN_9801ab90(), uVar3 = local_40, -1 < (int)uVar4)) &&
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
    iVar2 = (**(code **)(DAT_9801b2e0 + 0x10))
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
  FUN_98008ad8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008700 @ 98008700 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008700(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008768 @ 98008768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008768(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  uVar5 = FUN_9800dc70();
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
    FUN_98008ad8();
    halt_baddata();
  }
  FUN_9801ab80();
  if ((local_58[0] < 2) ||
     (bVar1 = true, *(char *)((uint)local_58[0] + (int)(uVar5 >> 0x20) + -1) != '\\')) {
    bVar1 = false;
  }
  local_48 = 0xfffffffd;
  local_44 = local_58;
  local_40 = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    uVar3 = uVar3 | 0x10000;
  }
  iVar2 = (**(code **)(DAT_9801b2e0 + 0xc))
                    (local_60,uVar3 | 0x100080,&local_48,auStack_50,0,param_6 & 0x7fa7,param_3,uVar4
                    );
  if (iVar2 < 0) {
    FUN_98008ad8();
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
    thunk_FUN_98008ac0(uVar4);
  }
  else {
    if (((param_5 == 2) && (local_4c == 3)) || ((param_5 == 4 && (local_4c == 1)))) {
      uVar4 = 0xb7;
    }
    else {
      uVar4 = 0;
    }
    thunk_FUN_98008ac0(uVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008960 @ 98008960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008960(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98008ad8 @ 98008ad8 ==== */

void FUN_98008ad8(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = FUN_9801abd0();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_98008b10 @ 98008b10 ==== */

undefined4 FUN_98008b10(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== thunk_FUN_98008ac0 @ 98008b30 ==== */

void thunk_FUN_98008ac0(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98008b38 @ 98008b38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008b38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008ba8 @ 98008ba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008ba8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800dc7c();
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  pcVar4 = (char *)uVar5;
  if (pcVar4 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_9800ddf0();
    *(int *)(iVar2 + 4) = iVar3;
    if (iVar3 != 0) {
      FUN_9800e338();
      *(undefined1 *)(iVar2 + 8) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008c30 @ 98008c30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008c30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008c88 @ 98008c88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008c88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008ce8 @ 98008ce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008ce8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008d70 @ 98008d70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008d70(void)

{
  FUN_98008c88();
  FUN_9800e3f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008da8 @ 98008da8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008da8(void)

{
  FUN_98008c88();
  FUN_9800e3f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008e28 @ 98008e28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008e28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008e78 @ 98008e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008e78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008f20 @ 98008f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008f20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008f78 @ 98008f78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008f78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98008fd0 @ 98008fd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98008fd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98009088 @ 98009088 ==== */

uint FUN_98009088(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  param_1 = ~param_1;
  if (3 < param_3) {
    uVar6 = param_3 >> 2;
    do {
      bVar4 = *param_2;
      pbVar1 = param_2 + 1;
      param_3 = param_3 - 4;
      pbVar2 = param_2 + 2;
      pbVar3 = param_2 + 3;
      param_2 = param_2 + 4;
      uVar5 = *(uint *)(&UNK_980018f8 + ((bVar4 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      uVar5 = *(uint *)(&UNK_980018f8 + ((*pbVar1 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar5 = *(uint *)(&UNK_980018f8 + ((*pbVar2 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      param_1 = *(uint *)(&UNK_980018f8 + ((*pbVar3 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&UNK_980018f8 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return ~param_1;
}


/* ==== FUN_98009168 @ 98009168 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x98009c44) */
/* WARNING: Removing unreachable block (ram,0x9800a2f8) */
/* WARNING: Removing unreachable block (ram,0x98009308) */
/* WARNING: Removing unreachable block (ram,0x98009318) */
/* WARNING: Removing unreachable block (ram,0x98009320) */

void FUN_98009168(undefined4 param_1,undefined4 param_2,IMAGE_DOS_HEADER *param_3,
                 IMAGE_DOS_HEADER *param_4,IMAGE_DOS_HEADER *param_5,IMAGE_DOS_HEADER *param_6,
                 uint param_7)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  word *pwVar7;
  char *pcVar8;
  word *pwVar9;
  word *pwVar10;
  uint *puVar11;
  int iVar12;
  IMAGE_DOS_HEADER *pIVar13;
  IMAGE_DOS_HEADER *pIVar14;
  IMAGE_DOS_HEADER *pIVar15;
  IMAGE_DOS_HEADER *pIVar16;
  IMAGE_DOS_HEADER *pIVar17;
  uint uVar18;
  IMAGE_DOS_HEADER *pIVar19;
  uint uVar20;
  IMAGE_DOS_HEADER *pIVar21;
  word *pwVar22;
  undefined1 *puVar23;
  IMAGE_DOS_HEADER *pIVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  IMAGE_DOS_HEADER *pIVar33;
  IMAGE_DOS_HEADER *pIVar34;
  IMAGE_DOS_HEADER *pIVar35;
  undefined *puVar36;
  IMAGE_DOS_HEADER *pIVar37;
  IMAGE_DOS_HEADER *pIVar38;
  word *pwVar39;
  short *psVar40;
  IMAGE_DOS_HEADER *pIVar41;
  IMAGE_DOS_HEADER *pIVar42;
  IMAGE_DOS_HEADER *pIVar43;
  IMAGE_DOS_HEADER *pIVar44;
  IMAGE_DOS_HEADER *pIVar45;
  IMAGE_DOS_HEADER *pIVar46;
  char *pcVar47;
  uint uVar48;
  IMAGE_DOS_HEADER *pIVar49;
  byte *pbVar50;
  undefined8 uVar51;
  IMAGE_DOS_HEADER *pIStack_16c;
  IMAGE_DOS_HEADER *pIStack_168;
  IMAGE_DOS_HEADER *pIStack_164;
  IMAGE_DOS_HEADER *pIStack_160;
  IMAGE_DOS_HEADER *pIStack_154;
  uint auStack_130 [76];
  
  uVar51 = FUN_9800dc40();
  puVar11 = (uint *)((ulonglong)uVar51 >> 0x20);
  pIVar13 = (IMAGE_DOS_HEADER *)uVar51;
  iVar12 = -1;
  pIVar33 = (IMAGE_DOS_HEADER *)((int)pIVar13->e_magic + *(int *)param_3);
  pIVar21 = (IMAGE_DOS_HEADER *)0x0;
  if (param_5 == (IMAGE_DOS_HEADER *)0x0) {
    pIStack_164 = (IMAGE_DOS_HEADER *)0x0;
  }
  else {
    pIStack_164 = (IMAGE_DOS_HEADER *)((int)param_5->e_magic + *(int *)param_6);
  }
  pIVar38 = (IMAGE_DOS_HEADER *)(param_7 & 4);
  pIVar15 = param_3;
  pIVar24 = param_4;
  pIVar16 = param_5;
  pIVar17 = param_6;
  if (pIVar38 == (IMAGE_DOS_HEADER *)0x0) {
    pIVar35 = (IMAGE_DOS_HEADER *)((int)param_5 + (*(int *)param_6 - (int)param_4) + -1);
  }
  else {
    pIVar35 = (IMAGE_DOS_HEADER *)0xffffffff;
  }
  do {
    pIVar34 = pIVar35;
    pcVar47 = pIVar34->e_magic + 1;
    bVar1 = ((uint)pcVar47 & (uint)pIVar34) == 0;
    if ((!bVar1) || (pIVar16 < pIVar24)) {
      *(IMAGE_DOS_HEADER **)pIVar17 = pIVar21;
      *(IMAGE_DOS_HEADER **)pIVar15 = pIVar21;
      halt_baddata();
    }
    pIStack_168 = (IMAGE_DOS_HEADER *)puVar11[8];
    pIStack_160 = (IMAGE_DOS_HEADER *)puVar11[0xf];
    uVar48 = *puVar11;
    pIVar46 = (IMAGE_DOS_HEADER *)puVar11[1];
    pIVar44 = (IMAGE_DOS_HEADER *)puVar11[0xe];
    pIVar43 = (IMAGE_DOS_HEADER *)puVar11[9];
    pIVar41 = (IMAGE_DOS_HEADER *)puVar11[10];
    bVar2 = uVar48 < 0x35;
    pIVar42 = pIVar13;
    pIStack_16c = param_5;
    if (0x35 < uVar48) goto LAB_9800a460;
    pIVar35 = &IMAGE_DOS_HEADER_98000000;
    pIVar21 = &IMAGE_DOS_HEADER_98000000;
    pIVar19 = &IMAGE_DOS_HEADER_98000000;
    pIVar16 = &IMAGE_DOS_HEADER_98000000;
    pIVar15 = &IMAGE_DOS_HEADER_98000000;
    pIVar14 = &IMAGE_DOS_HEADER_98000000;
    pIVar49 = &IMAGE_DOS_HEADER_98000000;
    pIVar17 = (IMAGE_DOS_HEADER *)&UNK_98001dc8;
    pIStack_154 = (IMAGE_DOS_HEADER *)&UNK_98001dc8;
code_r0x980092a4:
    pIVar24 = (IMAGE_DOS_HEADER *)&UNK_98001cfc;
    pIVar37 = pIVar35;
    pIVar45 = pIVar44;
    switch(&UNK_98008ed8 + *(ushort *)(&UNK_98001860 + uVar48 * 2)) {
    case (undefined *)0x98008ed8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined *)0x98008f08:
      return;
    case (undefined *)0x98008f2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined *)0x98008fc4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined *)0x98008fd4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined *)0x980092a4:
      goto code_r0x980092a4;
    case (undefined *)0x980092f8:
      puVar11[4] = 1;
      pIVar44 = pIVar46;
      goto LAB_98009754;
    case (undefined *)0x98009334:
      if (!bVar2) {
        uVar48 = 2;
        goto LAB_9800a400;
      }
      bVar3 = pIVar13->e_magic[0];
      uVar48 = puVar11[2];
      pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar13->e_magic + 1);
      puVar11[3] = (uint)bVar3;
      uVar20 = uVar48 * 0x100 + (uint)bVar3;
      if (((uVar20 != (uVar20 / 0x1f) * 0x1f) || ((bVar3 & 0x20) != 0)) ||
         (pIVar35 = (IMAGE_DOS_HEADER *)0x0, (uVar48 & 0xf) != 8)) {
        pIVar35 = (IMAGE_DOS_HEADER *)0x1;
      }
      if (pIVar38 == (IMAGE_DOS_HEADER *)0x0) {
        puVar36 = (undefined *)(1 << ((uVar48 >> 4) + 8 & 0x3f));
        if (((undefined *)0x8000 < puVar36) || (uVar48 = 0, pcVar47 < puVar36)) {
          uVar48 = 1;
        }
        pIVar35 = (IMAGE_DOS_HEADER *)(uVar48 | (uint)pIVar35);
      }
      pIVar43 = pIVar35;
      if (pIVar35 == (IMAGE_DOS_HEADER *)0x0) goto LAB_98009754;
      uVar48 = 0x24;
      goto LAB_980093c8;
    case (undefined *)0x98009420:
      goto code_r0x98009420;
    case (undefined *)0x98009468:
      goto code_r0x98009468;
    case (undefined *)0x9800948c:
      goto code_r0x9800948c;
    case (undefined *)0x98009518:
      goto LAB_98009518;
    case (undefined *)0x98009550:
      goto code_r0x98009550;
    case (undefined *)0x9800957c:
      goto code_r0x9800957c;
    case (undefined *)0x98009594:
      goto code_r0x98009594;
    case (undefined *)0x98009668:
      goto code_r0x98009668;
    case (undefined *)0x9800973c:
      goto code_r0x9800973c;
    case (undefined *)0x98009a18:
      goto LAB_98009a18;
    case (undefined *)0x98009b40:
      goto code_r0x98009b40;
    case (undefined *)0x98009c3c:
      pIVar14 = (IMAGE_DOS_HEADER *)0xffffffff;
      pIVar15 = pIVar38;
      do {
        pIVar35 = (IMAGE_DOS_HEADER *)(uint)(byte)pcVar47[(int)pIVar15->e_magic];
        if (pIVar35 != (IMAGE_DOS_HEADER *)0x0) {
          uVar20 = auStack_130[(int)pIVar35];
          auStack_130[(int)pIVar35] = uVar20 + 1;
          pIVar19 = pIVar38;
          for (pIVar21 = pIVar35; pIVar21 != (IMAGE_DOS_HEADER *)0x0;
              pIVar21 = (IMAGE_DOS_HEADER *)(pIVar21[-1].e_program + 0x3f)) {
            pIVar19 = (IMAGE_DOS_HEADER *)((int)pIVar19 << 1 | uVar20 & 1);
            uVar20 = uVar20 >> 1;
          }
          if (pIVar35 < (IMAGE_DOS_HEADER *)0xb) {
code_r0x98009ca8:
            if (pIVar19 < (IMAGE_DOS_HEADER *)0x400) {
              do {
                iVar12 = (int)pIVar19 * 2;
                pIVar19 = (IMAGE_DOS_HEADER *)(pIVar19->e_magic + (1 << ((uint)pIVar35 & 0x3f)));
                *(ushort *)(IMAGE_DOS_HEADER_98000000.e_magic + iVar12) =
                     (ushort)((int)pIVar35 << 9) | (ushort)pIVar15;
              } while (pIVar19 < (IMAGE_DOS_HEADER *)0x400);
            }
          }
          else {
            iVar12 = ((uint)pIVar19 & 0x3ff) * 2;
            pIVar21 = pIVar14;
            pIVar24 = (IMAGE_DOS_HEADER *)
                      (int)*(short *)(IMAGE_DOS_HEADER_98000000.e_magic + iVar12);
            if ((IMAGE_DOS_HEADER *)(int)*(short *)(IMAGE_DOS_HEADER_98000000.e_magic + iVar12) ==
                (IMAGE_DOS_HEADER *)0x0) {
              *(short *)(IMAGE_DOS_HEADER_98000000.e_magic + iVar12) = (short)pIVar14;
              pIVar21 = (IMAGE_DOS_HEADER *)(pIVar14[-1].e_program + 0x3e);
              pIVar24 = pIVar14;
            }
            pIVar14 = pIVar21;
            uVar20 = (uint)pIVar19 >> 9;
            if ((IMAGE_DOS_HEADER *)0xb < pIVar35) {
              pbVar50 = pIVar35[-1].e_program + 0x35;
              pIVar21 = pIVar14;
              do {
                uVar20 = uVar20 >> 1;
                psVar40 = (short *)(uVar48 + ((int)pIVar24 + (1 - (uVar20 & 1))) * -2);
                pIVar24 = (IMAGE_DOS_HEADER *)(int)*psVar40;
                pIVar14 = pIVar21;
                if (pIVar24 == (IMAGE_DOS_HEADER *)0x0) {
                  *psVar40 = (short)pIVar21;
                  pIVar14 = (IMAGE_DOS_HEADER *)(pIVar21[-1].e_program + 0x3e);
                  pIVar24 = pIVar21;
                }
                pbVar50 = pbVar50 + -1;
                pIVar21 = pIVar14;
              } while (pbVar50 != (byte *)0x0);
            }
            *(short *)((((uVar20 >> 1 & 1) - (int)pIVar24) + -1) * 2 + uVar48) = (short)pIVar15;
          }
        }
        pcVar8 = pIVar15->e_magic;
        pIVar15 = (IMAGE_DOS_HEADER *)(pcVar8 + 1);
      } while ((IMAGE_DOS_HEADER *)(pcVar8 + 1) < (IMAGE_DOS_HEADER *)puVar11[puVar11[6] + 0xb]);
      if (puVar11[6] == 2) goto LAB_98009d80;
      goto LAB_98009fac;
    case (undefined *)0x98009ca8:
      goto code_r0x98009ca8;
    case (undefined *)0x98009e60:
      goto code_r0x98009e60;
    case (undefined *)0x98009ec0:
      goto code_r0x98009ec0;
    case (undefined *)0x98009ee0:
      goto code_r0x98009ee0;
    case (undefined *)0x98009ef8:
      goto code_r0x98009ef8;
    case (undefined *)0x98009f08:
      goto code_r0x98009f08;
    case (undefined *)0x98009f18:
      goto code_r0x98009f18;
    case (undefined *)0x98009f38:
      goto code_r0x98009f38;
    case (undefined *)0x98009f88:
code_r0x98009f88:
      FUN_9800d650();
      FUN_9800d650();
LAB_98009fac:
      puVar11[6] = puVar11[6] - 1;
      pIVar45 = pIVar44;
      goto LAB_98009ac8;
    case (undefined *)0x98009fc4:
      goto code_r0x98009fc4;
    case (undefined *)0x9800a02c:
      goto code_r0x9800a02c;
    case (undefined *)0x9800a03c:
      pIVar16 = param_5;
      pIVar21 = pIVar13;
      goto LAB_9800a040;
    }
  } while( true );
code_r0x98009ee0:
  pIVar38 = pIVar43;
LAB_98009d80:
  do {
    pIVar43 = pIVar38;
    if ((IMAGE_DOS_HEADER *)(puVar11[0xc] + puVar11[0xb]) <= pIVar43) {
      if ((IMAGE_DOS_HEADER *)(puVar11[0xc] + puVar11[0xb]) == pIVar43) goto code_r0x98009f88;
      uVar48 = 0x15;
      pIVar35 = pIVar43;
      pIVar45 = pIVar44;
      goto LAB_980093c8;
    }
    if (pIVar46 < (IMAGE_DOS_HEADER *)0xf) {
      if ((int)pIVar33 - (int)pIVar42 < 2) {
        do {
          uVar48 = (uint)*(short *)((((uint)pIVar44 & 0x3ff) + 0x820) * 2 + (int)puVar11);
          if ((int)uVar48 < 0) {
            if ((IMAGE_DOS_HEADER *)0xa < pIVar46) {
              uVar20 = 10;
              do {
                uVar48 = (uint)*(short *)((((uint)pIVar44 >> (uVar20 & 0x3f) & 1) + ~uVar48 + 0xea0)
                                          * 2 + (int)puVar11);
                if (-1 < (int)uVar48) goto LAB_98009e68;
                pIVar21 = (IMAGE_DOS_HEADER *)(uVar20 + 2);
                uVar20 = uVar20 + 1;
              } while (pIVar21 <= pIVar46);
            }
          }
          else if (((IMAGE_DOS_HEADER *)((int)uVar48 >> 9) != (IMAGE_DOS_HEADER *)0x0) &&
                  ((IMAGE_DOS_HEADER *)((int)uVar48 >> 9) <= pIVar46)) break;
          if (pIVar33 <= pIVar42) {
            uVar48 = 0x10;
            goto LAB_9800a400;
          }
          pwVar39 = (word *)pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
          uVar48 = (uint)pIVar46 & 0x3f;
          pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr;
          pIVar44 = (IMAGE_DOS_HEADER *)((uint)*(byte *)pwVar39 << uVar48 | (uint)pIVar44);
        } while (pIVar46 < (word *)0xf);
      }
      else {
        pcVar47 = pIVar42->e_magic;
        pcVar8 = pIVar42->e_magic;
        pIVar42 = (IMAGE_DOS_HEADER *)&pIVar42->e_cblp;
        pIVar35 = (IMAGE_DOS_HEADER *)
                  ((uint)(byte)pcVar47[1] << ((uint)&pIVar46->e_cparhdr & 0x3f) |
                  (uint)(byte)*pcVar8 << ((uint)pIVar46 & 0x3f));
code_r0x98009e60:
        pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_sp;
        pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar35 | (uint)pIVar44);
      }
    }
LAB_98009e68:
    pIStack_168 = (IMAGE_DOS_HEADER *)
                  (int)*(short *)((((uint)pIVar44 & 0x3ff) + 0x820) * 2 + (int)puVar11);
    if ((int)pIStack_168 < 0) {
      pIVar21 = (IMAGE_DOS_HEADER *)0xa;
      do {
        uVar48 = (uint)pIVar21 & 0x3f;
        pIVar21 = (IMAGE_DOS_HEADER *)(pIVar21->e_magic + 1);
        pIStack_168 = (IMAGE_DOS_HEADER *)
                      (int)*(short *)((((uint)pIVar44 >> uVar48 & 1) + ~(uint)pIStack_168 + 0xea0) *
                                      2 + (int)puVar11);
        pIVar35 = pIStack_168;
      } while ((int)pIStack_168 < 0);
    }
    else {
      pIVar21 = (IMAGE_DOS_HEADER *)((int)pIStack_168 >> 9);
      pIStack_168 = (IMAGE_DOS_HEADER *)((uint)pIStack_168 & 0x1ff);
      pIVar35 = pIStack_168;
    }
code_r0x98009ec0:
    pIVar19 = pIVar35;
    pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> ((uint)pIVar21 & 0x3f));
    pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar21);
    if (pIVar19 < (IMAGE_DOS_HEADER *)0x10) break;
    if ((pIVar19 == (IMAGE_DOS_HEADER *)0x10) && (pIVar43 == (IMAGE_DOS_HEADER *)0x0)) {
      uVar48 = 0x11;
      pIVar35 = pIVar43;
      pIVar45 = pIVar44;
      goto LAB_980093c8;
    }
    pIVar35 = (IMAGE_DOS_HEADER *)(pIVar19[-0xcfffc7].e_program + 0x3c);
code_r0x98009ef8:
    pIVar41 = (IMAGE_DOS_HEADER *)(int)(char)pIVar35[-1].e_program[0x30];
    for (; pIVar46 < pIVar41; pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
      if (pIVar33 <= pIVar42) {
        uVar48 = 0x12;
        goto LAB_9800a400;
      }
      pwVar39 = (word *)pIVar42->e_magic;
      pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
      pIVar44 = (IMAGE_DOS_HEADER *)
                ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
    }
code_r0x98009f08:
    pIVar35 = (IMAGE_DOS_HEADER *)((1 << ((uint)pIVar41 & 0x3f)) + -1);
    pIVar17 = (IMAGE_DOS_HEADER *)(uint)*(byte *)&pIVar19[-0xcfffc6].e_sp;
code_r0x98009f18:
    pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar41);
    uVar48 = (uint)pIVar35 & (uint)pIVar44;
    pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> ((uint)pIVar41 & 0x3f));
    pIVar49 = (IMAGE_DOS_HEADER *)((int)(char)pIVar17 + uVar48);
    if (pIVar19 == (IMAGE_DOS_HEADER *)0x10) {
      pIVar35 = (IMAGE_DOS_HEADER *)(pIVar43->e_magic + (int)puVar11);
code_r0x98009f38:
      uVar48 = (uint)pIVar35[0x3d].e_program[0x22];
    }
    else {
      uVar48 = 0;
    }
    FUN_9800dcf0((uint *)(pIVar43->e_magic + (int)puVar11 + 0x1ee3),uVar48,(uint)pIVar49);
    pIVar38 = (IMAGE_DOS_HEADER *)(pIVar43->e_magic + (int)pIVar49->e_magic);
  } while( true );
  pcVar47 = pIVar43->e_magic;
  pIVar43 = (IMAGE_DOS_HEADER *)(pIVar43->e_magic + 1);
  (pcVar47 + (int)puVar11)[0x1ee3] = (char)pIVar19;
  goto code_r0x98009ee0;
LAB_98009754:
  if (pIVar46 < (IMAGE_DOS_HEADER *)0x3) {
    bVar2 = pIVar42 < pIVar33;
code_r0x9800973c:
    if (!bVar2) {
      uVar48 = 3;
      goto LAB_9800a400;
    }
    pwVar39 = (word *)pIVar42->e_magic;
    uVar48 = (uint)pIVar46 & 0x3f;
    pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr;
    pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
    pIVar44 = (IMAGE_DOS_HEADER *)((uint)*(byte *)pwVar39 << uVar48 | (uint)pIVar44);
    goto LAB_98009754;
  }
  uVar48 = (uint)pIVar44 & 7;
  pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> 3);
  puVar11[5] = uVar48;
  pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x3d);
  uVar48 = uVar48 >> 1;
  puVar11[6] = uVar48;
  if (uVar48 == 0) {
    for (; pIVar21 = (IMAGE_DOS_HEADER *)((uint)pIVar46 & 7), pIVar46 < pIVar21;
        pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
      if (pIVar33 <= pIVar42) {
        uVar48 = 5;
        goto LAB_9800a400;
      }
      pwVar39 = (word *)pIVar42->e_magic;
      pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
      pIVar44 = (IMAGE_DOS_HEADER *)
                ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
    }
    pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> (int)pIVar21);
    pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar21);
    for (pIVar43 = (IMAGE_DOS_HEADER *)0x0; pIVar43 < (IMAGE_DOS_HEADER *)0x4;
        pIVar43 = (IMAGE_DOS_HEADER *)(pIVar43->e_magic + 1)) {
      if (pIVar46 == (IMAGE_DOS_HEADER *)0x0) {
        if (pIVar33 <= pIVar42) {
          uVar48 = 7;
          goto LAB_9800a400;
        }
        pwVar39 = (word *)pIVar42->e_magic;
        pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
        (pIVar43->e_magic + (int)puVar11)[0x1edf] = *(char *)pwVar39;
      }
      else {
        for (; pIVar46 < (IMAGE_DOS_HEADER *)0x8; pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr)
        {
          if (pIVar33 <= pIVar42) {
            uVar48 = 6;
            goto LAB_9800a400;
          }
          pwVar39 = (word *)pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
          pIVar44 = (IMAGE_DOS_HEADER *)
                    ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
        }
        uVar5 = SUB41(pIVar44,0);
        pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> 8);
        pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x38);
        (pIVar43->e_magic + (int)puVar11)[0x1edf] = uVar5;
      }
    }
    pIVar35 = (IMAGE_DOS_HEADER *)
              (uint)CONCAT11(*(undefined1 *)(puVar11 + 0x7b8),*(undefined1 *)((int)puVar11 + 0x1edf)
                            );
    if (pIVar35 !=
        (IMAGE_DOS_HEADER *)
        (CONCAT11(*(undefined1 *)((int)puVar11 + 0x1ee2),*(undefined1 *)((int)puVar11 + 0x1ee1)) ^
        0xffff)) {
      uVar48 = 0x27;
      pIVar45 = pIVar44;
      goto LAB_980093c8;
    }
    for (; pIVar35 != (IMAGE_DOS_HEADER *)0x0;
        pIVar35 = (IMAGE_DOS_HEADER *)(pIVar35[-1].e_program + 0x3f)) {
      if (pIVar46 == (IMAGE_DOS_HEADER *)0x0) goto LAB_9800990c;
      for (; pIVar46 < (IMAGE_DOS_HEADER *)0x8; pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
        if (pIVar33 <= pIVar42) {
          uVar48 = 0x33;
          pIVar43 = pIVar35;
          goto LAB_9800a400;
        }
        pwVar39 = (word *)pIVar42->e_magic;
        pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
        pIVar44 = (IMAGE_DOS_HEADER *)
                  ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
      }
      pIStack_168 = (IMAGE_DOS_HEADER *)((uint)pIVar44 & 0xff);
      pIVar45 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> 8);
      pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x38);
      if (pIStack_164 <= pIStack_16c) {
        uVar48 = 0x34;
        goto LAB_9800a290;
      }
      pIStack_16c->e_magic[0] = (char)pIVar44;
      pIVar44 = pIVar45;
      pIStack_16c = (IMAGE_DOS_HEADER *)((int)pIStack_16c->e_magic + 1);
    }
LAB_980096e0:
    pIVar43 = pIVar35;
    if ((puVar11[5] & 1) != 0) goto code_r0x980096ec;
    goto LAB_98009754;
  }
  pIVar45 = pIVar44;
  if (uVar48 != 3) {
    if (uVar48 == 1) {
      puVar11[0xb] = 0x120;
      puVar11[0xc] = 0x20;
      FUN_9800dcf0(puVar11 + 0x7ab,5,0x20);
      puVar23 = (undefined1 *)((int)puVar11 + 0x1d8b);
      iVar12 = 0x90;
      do {
        puVar23 = puVar23 + 1;
        *puVar23 = 8;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      puVar23 = (undefined1 *)((int)puVar11 + 0x1e1b);
      iVar12 = 0x70;
      do {
        puVar23 = puVar23 + 1;
        *puVar23 = 9;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      puVar23 = (undefined1 *)((int)puVar11 + 0x1e8b);
      iVar12 = 0x18;
      do {
        puVar23 = puVar23 + 1;
        *puVar23 = 7;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      puVar23 = (undefined1 *)((int)puVar11 + 0x1ea3);
      iVar12 = 8;
      do {
        puVar23 = puVar23 + 1;
        *puVar23 = 8;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    else {
      pIVar17 = (IMAGE_DOS_HEADER *)0x0;
      for (pIVar43 = (IMAGE_DOS_HEADER *)0x0; pIVar43 < (IMAGE_DOS_HEADER *)0x3;
          pIVar43 = (IMAGE_DOS_HEADER *)(pIVar43->e_magic + 1)) {
        pIVar19 = (IMAGE_DOS_HEADER *)(int)pIVar43[-0xcfffc6].e_magic[0];
LAB_98009a18:
        for (; pIVar46 < pIVar19; pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
          if (pIVar33 <= pIVar42) {
            uVar48 = 0xb;
            goto LAB_9800a400;
          }
          pwVar39 = (word *)pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
          pIVar19 = (IMAGE_DOS_HEADER *)(int)pIVar43[-0xcfffc6].e_magic[0];
          pIVar44 = (IMAGE_DOS_HEADER *)
                    ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
        }
        pwVar39 = (word *)((int)&pIVar43->e_minalloc + 1);
        uVar48 = (1 << ((uint)pIVar19 & 0x3f)) - 1U & (uint)pIVar44;
        puVar11[(int)pwVar39] = uVar48;
        cVar4 = pIVar43[-0xcfffc6].e_magic[0];
        pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> ((int)cVar4 & 0x3fU));
        puVar11[(int)pwVar39] = *(ushort *)(&UNK_98001d04 + (int)pIVar43 * 2) + uVar48;
        pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)cVar4);
      }
      puVar11[0x7b3] = (uint)pIVar17;
      puVar11[0x7b4] = (uint)pIVar17;
      puVar11[0x7b5] = (uint)pIVar17;
      puVar11[0x7b6] = (uint)pIVar17;
      *(short *)(puVar11 + 0x7b7) = (short)pIVar17;
      *(char *)((int)puVar11 + 0x1ede) = (char)pIVar17;
      for (; pIVar17 < (IMAGE_DOS_HEADER *)puVar11[0xd];
          pIVar17 = (IMAGE_DOS_HEADER *)(pIVar17->e_magic + 1)) {
        for (; pIVar35 = pIVar33, pIVar43 = pIVar17, pIVar46 < (IMAGE_DOS_HEADER *)0x3;
            pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
code_r0x98009b40:
          pIVar17 = pIVar43;
          if (pIVar35 <= pIVar42) {
            uVar48 = 0xe;
            pIVar43 = pIVar17;
            goto LAB_9800a400;
          }
          pwVar39 = (word *)pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
          pIVar44 = (IMAGE_DOS_HEADER *)
                    ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
        }
        bVar3 = (byte)pIVar44;
        pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> 3);
        pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x3d);
        *(byte *)((int)puVar11 + *(byte *)&pIVar17[-0xcfffc6].e_maxalloc + 0x1ecc) = bVar3 & 7;
      }
      puVar11[0xd] = 0x13;
      pIVar43 = pIVar17;
      pIVar45 = pIVar44;
    }
LAB_98009ac8:
    pIVar16 = pIStack_16c;
    pIVar35 = pIVar43;
    if (-1 < (int)puVar11[6]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_98009428:
    if (((int)pIVar33 - (int)pIVar42 < 4) || ((int)pIStack_164 - (int)pIVar16 < 2)) {
      pIVar17 = pIVar33;
      if (pIVar46 < (IMAGE_DOS_HEADER *)0xf) {
        pIVar43 = pIVar35;
        if ((int)pIVar33 - (int)pIVar42 < 2) {
          do {
            pIVar35 = (IMAGE_DOS_HEADER *)((uint)pIVar45 & 0x3ff);
            pIVar17 = pIVar33;
code_r0x9800957c:
            uVar48 = (uint)*(short *)((int)(pIVar35->e_res_4_ + 2) * 2 + (int)puVar11);
            if ((int)uVar48 < 0) {
              pIVar44 = pIVar45;
              if ((IMAGE_DOS_HEADER *)0xa < pIVar46) {
                uVar20 = 10;
                do {
                  uVar48 = (uint)*(short *)((((uint)pIVar45 >> (uVar20 & 0x3f) & 1) + ~uVar48 +
                                            0xc20) * 2 + (int)puVar11);
                  if (-1 < (int)uVar48) goto LAB_9800963c;
                  pIVar21 = (IMAGE_DOS_HEADER *)(uVar20 + 2);
                  uVar20 = uVar20 + 1;
                } while (pIVar21 <= pIVar46);
              }
            }
            else {
              pIVar35 = (IMAGE_DOS_HEADER *)((int)uVar48 >> 9);
              bVar1 = pIVar35 == (IMAGE_DOS_HEADER *)0x0;
code_r0x98009594:
              pIVar44 = pIVar45;
              if ((!bVar1) && (pIVar35 <= pIVar46)) break;
            }
            if (pIVar33 <= pIVar42) {
              uVar48 = 0x17;
              goto LAB_9800a400;
            }
            pwVar39 = (word *)pIVar42->e_magic;
            pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
            uVar48 = (uint)pIVar46 & 0x3f;
            pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr;
            pIVar45 = (IMAGE_DOS_HEADER *)((uint)*(byte *)pwVar39 << uVar48 | (uint)pIVar44);
            pIVar17 = pIVar33;
          } while (pIVar46 < (word *)0xf);
        }
        else {
          pwVar39 = (word *)pIVar42->e_magic;
          pwVar22 = &pIVar46->e_cparhdr;
          pwVar7 = (word *)pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)&pIVar42->e_cblp;
          uVar48 = (uint)pIVar46 & 0x3f;
          pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_sp;
          pIVar45 = (IMAGE_DOS_HEADER *)
                    ((uint)(byte)*pwVar39 << ((uint)pwVar22 & 0x3f) |
                     (uint)*(byte *)pwVar7 << uVar48 | (uint)pIVar45);
        }
      }
LAB_9800963c:
      pIVar35 = (IMAGE_DOS_HEADER *)
                (int)*(short *)((((uint)pIVar45 & 0x3ff) + 0x20) * 2 + (int)puVar11);
      if ((int)pIVar35 < 0) {
        pIVar21 = (IMAGE_DOS_HEADER *)0xa;
        do {
          pIVar19 = (IMAGE_DOS_HEADER *)((uint)pIVar45 >> ((uint)pIVar21 & 0x3f));
code_r0x98009668:
          pIVar21 = (IMAGE_DOS_HEADER *)(pIVar21->e_magic + 1);
          pIVar35 = (IMAGE_DOS_HEADER *)
                    (int)*(short *)((((uint)pIVar19 & 1) + ~(uint)pIVar35 + 0xc20) * 2 +
                                   (int)puVar11);
        } while ((int)pIVar35 < 0);
      }
      else {
        pIVar21 = (IMAGE_DOS_HEADER *)((int)pIVar35 >> 9);
        pIVar35 = (IMAGE_DOS_HEADER *)((uint)pIVar35 & 0x1ff);
      }
      pIVar45 = (IMAGE_DOS_HEADER *)((uint)pIVar45 >> ((uint)pIVar21 & 0x3f));
      pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar21);
      pIVar44 = pIVar45;
      if ((IMAGE_DOS_HEADER *)0xff < pIVar35) goto LAB_980096d4;
      if (pIVar16 < pIStack_164) goto code_r0x980096b4;
      uVar48 = 0x18;
LAB_9800a290:
      iVar12 = 2;
      goto LAB_980093cc;
    }
    pIVar17 = pIVar33;
    if (pIVar46 < (IMAGE_DOS_HEADER *)0xf) {
      pwVar39 = (word *)pIVar42->e_magic;
      pwVar7 = (word *)pIVar42->e_magic;
      pIVar42 = (IMAGE_DOS_HEADER *)&pIVar42->e_cblp;
      pIVar35 = (IMAGE_DOS_HEADER *)
                ((uint)CONCAT11((char)*pwVar39,*(undefined1 *)pwVar7) << ((uint)pIVar46 & 0x3f));
code_r0x98009468:
      pIVar45 = (IMAGE_DOS_HEADER *)((uint)pIVar35 | (uint)pIVar45);
      pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_sp;
    }
    pIVar37 = (IMAGE_DOS_HEADER *)
              (int)*(short *)((((uint)pIVar45 & 0x3ff) + 0x20) * 2 + (int)puVar11);
    if ((int)pIVar37 < 0) {
      pIVar21 = (IMAGE_DOS_HEADER *)0xa;
      do {
        uVar48 = (uint)pIVar21 & 0x3f;
        pIVar21 = (IMAGE_DOS_HEADER *)(pIVar21->e_magic + 1);
        pIVar37 = (IMAGE_DOS_HEADER *)
                  (int)*(short *)((((uint)pIVar45 >> uVar48 & 1) + ~(uint)pIVar37 + 0xc20) * 2 +
                                 (int)puVar11);
      } while ((int)pIVar37 < 0);
    }
    else {
      pIVar21 = (IMAGE_DOS_HEADER *)((int)pIVar37 >> 9);
code_r0x9800948c:
    }
    pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar45 >> ((uint)pIVar21 & 0x3f));
    pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar21);
    pIVar35 = pIVar37;
    if (((uint)pIVar37 & 0x100) == 0) {
      if (pIVar46 < (IMAGE_DOS_HEADER *)0xf) {
        pwVar39 = (word *)pIVar42->e_magic;
        pwVar7 = (word *)pIVar42->e_magic;
        pIVar42 = (IMAGE_DOS_HEADER *)&pIVar42->e_cblp;
        pIVar44 = (IMAGE_DOS_HEADER *)
                  ((uint)CONCAT11((char)*pwVar39,*(undefined1 *)pwVar7) << ((uint)pIVar46 & 0x3f) |
                  (uint)pIVar44);
        pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_sp;
      }
      pIVar35 = (IMAGE_DOS_HEADER *)
                (int)*(short *)((((uint)pIVar44 & 0x3ff) + 0x20) * 2 + (int)puVar11);
      pIVar43 = pIVar37;
      if ((int)pIVar35 < 0) {
LAB_98009518:
        pIVar21 = (IMAGE_DOS_HEADER *)0xa;
        do {
          uVar48 = (uint)pIVar21 & 0x3f;
          pIVar21 = (IMAGE_DOS_HEADER *)(pIVar21->e_magic + 1);
          pIVar35 = (IMAGE_DOS_HEADER *)
                    (int)*(short *)((((uint)pIVar44 >> uVar48 & 1) + ~(uint)pIVar35 + 0xc20) * 2 +
                                   (int)puVar11);
        } while ((int)pIVar35 < 0);
      }
      else {
        pIVar21 = (IMAGE_DOS_HEADER *)((int)pIVar35 >> 9);
      }
      bVar1 = ((uint)pIVar35 & 0x100) == 0;
      pIVar16->e_magic[0] = (char)pIVar43;
      pIVar45 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> ((uint)pIVar21 & 0x3f));
code_r0x98009550:
      pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar21);
      if (bVar1) {
        *(char *)((int)pIVar16->e_magic + 1) = (char)pIVar35;
        pIVar16 = (IMAGE_DOS_HEADER *)&pIVar16->e_cblp;
        pIVar35 = pIVar43;
        pIStack_16c = pIVar16;
        goto LAB_98009428;
      }
      pIVar16 = (IMAGE_DOS_HEADER *)((int)pIVar16->e_magic + 1);
      pIVar44 = pIVar45;
      pIStack_16c = pIVar16;
    }
LAB_980096d4:
    pIVar35 = (IMAGE_DOS_HEADER *)((uint)pIVar35 & 0x1ff);
    if (pIVar35 != (IMAGE_DOS_HEADER *)0x100) {
      pIVar21 = (IMAGE_DOS_HEADER *)(pIVar35[-3].e_program + 0x3f);
      pIVar37 = pIStack_154;
      pIVar43 = pIVar35;
code_r0x98009fc4:
      pIVar41 = (IMAGE_DOS_HEADER *)(uint)(byte)(pIVar37->e_magic + (int)pIVar43->e_magic)[-0x101];
      pIVar43 = (IMAGE_DOS_HEADER *)(uint)*(ushort *)(&UNK_98001d24 + (int)pIVar21 * 2);
      if (pIVar41 != (IMAGE_DOS_HEADER *)0x0) {
        for (; pIVar21 = pIVar42, pIVar46 < pIVar41;
            pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
LAB_9800a040:
          if (pIVar33 <= pIVar21) {
            uVar48 = 0x19;
            pIVar42 = pIVar21;
            goto LAB_9800a400;
          }
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar21->e_magic + 1);
          pIVar44 = (IMAGE_DOS_HEADER *)
                    ((uint)(byte)pIVar21->e_magic[0] << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
          pIVar17 = pIVar33;
        }
        pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar41);
        uVar48 = (1 << ((uint)pIVar41 & 0x3f)) - 1U & (uint)pIVar44;
        pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> ((uint)pIVar41 & 0x3f));
        pIVar43 = (IMAGE_DOS_HEADER *)(pIVar43->e_magic + uVar48);
      }
      if (pIVar46 < (IMAGE_DOS_HEADER *)0xf) {
        if ((int)pIVar17 - (int)pIVar42 < 2) {
          do {
            uVar48 = (uint)*(short *)((((uint)pIVar44 & 0x3ff) + 0x420) * 2 + (int)puVar11);
            if ((int)uVar48 < 0) {
              if ((IMAGE_DOS_HEADER *)0xa < pIVar46) {
                uVar20 = 10;
                do {
                  uVar48 = (uint)*(short *)((((uint)pIVar44 >> (uVar20 & 0x3f) & 1) + ~uVar48 +
                                            0xe60) * 2 + (int)puVar11);
                  if (-1 < (int)uVar48) goto LAB_9800a0fc;
                  pIVar21 = (IMAGE_DOS_HEADER *)(uVar20 + 2);
                  uVar20 = uVar20 + 1;
                } while (pIVar21 <= pIVar46);
              }
            }
            else {
              pIVar35 = (IMAGE_DOS_HEADER *)((int)uVar48 >> 9);
              bVar1 = pIVar35 == (IMAGE_DOS_HEADER *)0x0;
code_r0x9800a02c:
              if ((!bVar1) && (pIVar35 <= pIVar46)) break;
            }
            if (pIVar33 <= pIVar42) {
              uVar48 = 0x1a;
              goto LAB_9800a400;
            }
            pwVar39 = (word *)pIVar42->e_magic;
            pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
            uVar48 = (uint)pIVar46 & 0x3f;
            pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr;
            pIVar44 = (IMAGE_DOS_HEADER *)((uint)*(byte *)pwVar39 << uVar48 | (uint)pIVar44);
          } while (pIVar46 < (word *)0xf);
        }
        else {
          pcVar47 = pIVar42->e_magic;
          pwVar39 = &pIVar46->e_cparhdr;
          pcVar8 = pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)&pIVar42->e_cblp;
          uVar48 = (uint)pIVar46 & 0x3f;
          pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_sp;
          pIVar44 = (IMAGE_DOS_HEADER *)
                    ((uint)(byte)pcVar47[1] << ((uint)pwVar39 & 0x3f) |
                     (uint)(byte)*pcVar8 << uVar48 | (uint)pIVar44);
        }
      }
LAB_9800a0fc:
      uVar48 = (uint)*(short *)((((uint)pIVar44 & 0x3ff) + 0x420) * 2 + (int)puVar11);
      if ((int)uVar48 < 0) {
        uVar20 = 10;
        do {
          uVar32 = uVar20 & 0x3f;
          uVar20 = uVar20 + 1;
          uVar48 = (uint)*(short *)((((uint)pIVar44 >> uVar32 & 1) + ~uVar48 + 0xe60) * 2 +
                                   (int)puVar11);
        } while ((int)uVar48 < 0);
      }
      else {
        uVar20 = (int)uVar48 >> 9;
        uVar48 = uVar48 & 0x1ff;
      }
      pIVar41 = (IMAGE_DOS_HEADER *)(uint)(byte)(&UNK_98001d64)[uVar48];
      pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> (uVar20 & 0x3f));
      pIStack_168 = (IMAGE_DOS_HEADER *)(uint)*(ushort *)(&UNK_98001d88 + uVar48 * 2);
      pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - uVar20);
      pIVar45 = pIVar44;
      if (pIVar41 != (IMAGE_DOS_HEADER *)0x0) {
        for (; pIVar46 < pIVar41; pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
          if (pIVar33 <= pIVar42) {
            uVar48 = 0x1b;
            goto LAB_9800a400;
          }
          pwVar39 = (word *)pIVar42->e_magic;
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
          pIVar44 = (IMAGE_DOS_HEADER *)
                    ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
        }
        pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar41);
        pIVar45 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> ((uint)pIVar41 & 0x3f));
        pIStack_168 = (IMAGE_DOS_HEADER *)
                      (pIStack_168->e_magic + ((1 << ((uint)pIVar41 & 0x3f)) - 1U & (uint)pIVar44));
      }
      pIStack_160 = (IMAGE_DOS_HEADER *)((int)pIVar16 - (int)param_4);
      pIVar35 = pIVar43;
      if ((((pIStack_168 == (IMAGE_DOS_HEADER *)0x0) || (pIStack_160 < pIStack_168)) ||
          (pIStack_160 == (IMAGE_DOS_HEADER *)0x0)) && ((param_7 & 4) != 0)) {
        uVar48 = 0x25;
        goto LAB_980093c8;
      }
      pIVar38 = (IMAGE_DOS_HEADER *)
                (param_4->e_magic + ((int)pIStack_160 - (int)pIStack_168 & (uint)pIVar34));
      pIVar21 = pIVar16;
      if (pIVar16 <= pIVar38) {
        pIVar21 = pIVar38;
      }
      if (pIStack_164 < (IMAGE_DOS_HEADER *)(pIVar43->e_magic + (int)pIVar21->e_magic)) {
        while (bVar1 = pIVar35 != (IMAGE_DOS_HEADER *)0x0,
              pIVar35 = (IMAGE_DOS_HEADER *)(pIVar35[-1].e_program + 0x3f), pIVar43 = pIVar35, bVar1
              ) {
          if (pIStack_164 <= pIVar16) {
            uVar48 = 0x35;
            goto LAB_9800a290;
          }
          uVar48 = (int)pIStack_160 - (int)pIStack_168;
          pIStack_160 = (IMAGE_DOS_HEADER *)(pIStack_160->e_magic + 1);
          pIVar16->e_magic[0] = param_4->e_magic[uVar48 & (uint)pIVar34];
          pIVar16 = (IMAGE_DOS_HEADER *)((int)pIVar16->e_magic + 1);
          pIStack_16c = pIVar16;
        }
code_r0x98009420:
        pIVar35 = pIVar43;
      }
      else {
        if ((IMAGE_DOS_HEADER *)0x2 < pIVar43) {
          iVar12 = (uint)(pIVar43[-1].e_program + 0x3d) / 3 + 1;
          do {
            pIVar43 = (IMAGE_DOS_HEADER *)(pIVar43[-1].e_program + 0x3d);
            pIVar16->e_magic[0] = pIVar38->e_magic[0];
            pIVar16->e_magic[1] = (char)*(word *)pIVar38->e_magic;
            pwVar39 = &pIVar38->e_cblp;
            pIVar38 = (IMAGE_DOS_HEADER *)((int)&pIVar38->e_cblp + 1);
            *(undefined1 *)&pIVar16->e_cblp = *(undefined1 *)pwVar39;
            pIVar16 = (IMAGE_DOS_HEADER *)((int)&pIVar16->e_cblp + 1);
            iVar12 = iVar12 + -1;
            pIStack_16c = pIVar16;
          } while (iVar12 != 0);
        }
        pIVar35 = pIVar43;
        if (pIVar43 != (IMAGE_DOS_HEADER *)0x0) {
          pIVar16->e_magic[0] = pIVar38->e_magic[0];
          if ((IMAGE_DOS_HEADER *)0x1 < pIVar43) {
            *(char *)((int)pIVar16->e_magic + 1) = (char)*(word *)pIVar38->e_magic;
          }
          pIVar16 = (IMAGE_DOS_HEADER *)((int)pIVar16->e_magic + (int)pIVar43->e_magic);
          pIStack_16c = pIVar16;
        }
      }
      goto LAB_98009428;
    }
    goto LAB_980096e0;
  }
  uVar48 = 10;
  pIVar35 = pIVar43;
LAB_980093c8:
  iVar12 = -1;
  goto LAB_980093cc;
LAB_9800990c:
  if (pIVar35 == (IMAGE_DOS_HEADER *)0x0) goto LAB_980096e0;
  if (pIStack_164 <= pIStack_16c) {
    uVar48 = 9;
    pIVar45 = pIVar44;
    goto LAB_9800a290;
  }
  if (pIVar33 <= pIVar42) {
    uVar48 = 0x26;
    pIVar43 = pIVar35;
    goto LAB_9800a400;
  }
  pIVar15 = (IMAGE_DOS_HEADER *)((int)pIVar33 - (int)pIVar42);
  pIVar38 = (IMAGE_DOS_HEADER *)((int)pIStack_164 - (int)pIStack_16c);
  pIVar21 = pIVar38;
  if (pIVar15 <= pIVar38) {
    pIVar21 = pIVar15;
  }
  pIVar24 = pIVar35;
  if ((pIVar21 < pIVar35) && (pIVar24 = pIVar15, pIVar38 < pIVar15)) {
    pIVar24 = pIVar38;
  }
  FUN_9800d650();
  pIStack_16c = (IMAGE_DOS_HEADER *)((int)pIStack_16c->e_magic + (int)pIVar24->e_magic);
  pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + (int)pIVar24->e_magic);
  pIVar35 = (IMAGE_DOS_HEADER *)((int)pIVar35 - (int)pIVar24);
  goto LAB_9800990c;
code_r0x980096b4:
  pIVar16->e_magic[0] = (char)pIVar35;
  pIVar16 = (IMAGE_DOS_HEADER *)((int)pIVar16->e_magic + 1);
  pIStack_16c = pIVar16;
  goto LAB_98009428;
code_r0x980096ec:
  pIVar21 = (IMAGE_DOS_HEADER *)((uint)pIVar46 & 7);
  if (pIVar46 < pIVar21) {
    do {
      if (pIVar33 <= pIVar42) {
        uVar48 = 0x20;
        goto LAB_9800a400;
      }
      pwVar39 = (word *)pIVar42->e_magic;
      pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
      uVar48 = (uint)pIVar46 & 0x3f;
      pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr;
      pIVar44 = (IMAGE_DOS_HEADER *)((uint)*(byte *)pwVar39 << uVar48 | (uint)pIVar44);
      pIVar21 = (IMAGE_DOS_HEADER *)((uint)pIVar46 & 7);
    } while (pIVar46 < pIVar21);
  }
  for (pIVar46 = (IMAGE_DOS_HEADER *)((int)pIVar46 - (int)pIVar21);
      (pIVar13 < pIVar42 && ((IMAGE_DOS_HEADER *)0x7 < pIVar46));
      pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x38)) {
    pIVar42 = (IMAGE_DOS_HEADER *)(pIVar42[-1].e_program + 0x3f);
  }
  pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> (int)pIVar21 & ~(-1 << ((uint)pIVar46 & 0x3f)));
  if ((param_7 & 1) != 0) {
    for (pIVar35 = (IMAGE_DOS_HEADER *)0x0; pIVar35 < (IMAGE_DOS_HEADER *)0x4;
        pIVar35 = (IMAGE_DOS_HEADER *)(pIVar35->e_magic + 1)) {
      pIVar43 = pIVar35;
      if (pIVar46 == (IMAGE_DOS_HEADER *)0x0) {
        if (pIVar42 < pIVar33) {
          uVar48 = (uint)(byte)pIVar42->e_magic[0];
          pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
          goto LAB_9800a39c;
        }
        uVar48 = 0x2a;
LAB_9800a400:
        *puVar11 = uVar48;
        iVar12 = (-(uint)((param_7 & 2) != 0) & 5) - 4;
        if ((iVar12 == 1) || (iVar12 == -4)) goto LAB_9800a460;
        goto LAB_9800a458;
      }
      for (; pIVar46 < (IMAGE_DOS_HEADER *)0x8; pIVar46 = (IMAGE_DOS_HEADER *)&pIVar46->e_cparhdr) {
        if (pIVar33 <= pIVar42) {
          uVar48 = 0x29;
          goto LAB_9800a400;
        }
        pwVar39 = (word *)pIVar42->e_magic;
        pIVar42 = (IMAGE_DOS_HEADER *)((int)pIVar42->e_magic + 1);
        pIVar44 = (IMAGE_DOS_HEADER *)
                  ((uint)*(byte *)pwVar39 << ((uint)pIVar46 & 0x3f) | (uint)pIVar44);
      }
      uVar48 = (uint)pIVar44 & 0xff;
      pIVar44 = (IMAGE_DOS_HEADER *)((uint)pIVar44 >> 8);
      pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x38);
LAB_9800a39c:
      puVar11[4] = puVar11[4] << 8 | uVar48;
    }
  }
  uVar48 = 0x22;
  iVar12 = 0;
  pIVar45 = pIVar44;
LAB_980093cc:
  *puVar11 = uVar48;
  pIVar44 = pIVar45;
  pIVar43 = pIVar35;
LAB_9800a458:
  for (; (pIVar13 < pIVar42 && ((IMAGE_DOS_HEADER *)0x7 < pIVar46));
      pIVar46 = (IMAGE_DOS_HEADER *)(pIVar46[-1].e_program + 0x38)) {
    pIVar42 = (IMAGE_DOS_HEADER *)(pIVar42[-1].e_program + 0x3f);
  }
LAB_9800a460:
  uVar48 = (int)pIStack_16c - (int)param_5;
  puVar11[1] = (uint)pIVar46;
  puVar11[8] = (uint)pIStack_168;
  puVar11[9] = (uint)pIVar43;
  puVar11[10] = (uint)pIVar41;
  puVar11[0xf] = (uint)pIStack_160;
  puVar11[0xe] = (uint)pIVar44 & ~(-1 << ((uint)pIVar46 & 0x3f));
  *(int *)param_3 = (int)pIVar42 - (int)pIVar13;
  *(uint *)param_6 = uVar48;
  if (((param_7 & 9) != 0) && (-1 < iVar12)) {
    uVar32 = puVar11[7] & 0xffff;
    uVar20 = puVar11[7] >> 0x10;
    uVar6 = uVar48 % 0x15b0;
    while (uVar48 != 0) {
      uVar18 = 0;
      if (7 < uVar6) {
        iVar12 = 7 - (int)param_5;
        do {
          uVar18 = uVar18 + 8;
          iVar25 = (byte)param_5->e_magic[0] + uVar32;
          pwVar22 = &param_5->e_cblp;
          pwVar39 = &param_5->e_cp;
          iVar26 = (uint)(byte)*(word *)param_5->e_magic + iVar25;
          pwVar9 = &param_5->e_cp;
          pwVar7 = &param_5->e_crlc;
          pwVar10 = &param_5->e_crlc;
          iVar27 = (uint)*(byte *)&param_5->e_cblp + iVar26;
          param_5 = (IMAGE_DOS_HEADER *)&param_5->e_cparhdr;
          iVar28 = (uint)(byte)*pwVar22 + iVar27;
          iVar29 = (uint)*(byte *)pwVar39 + iVar28;
          iVar30 = (uint)(byte)*pwVar9 + iVar29;
          iVar31 = (uint)*(byte *)pwVar7 + iVar30;
          uVar32 = (uint)(byte)*pwVar10 + iVar31;
          uVar20 = uVar20 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 + uVar32;
        } while ((uint)((int)param_5 + iVar12) < uVar6);
      }
      if (uVar18 < uVar6) {
        iVar12 = uVar6 - uVar18;
        do {
          pwVar39 = (word *)param_5->e_magic;
          param_5 = (IMAGE_DOS_HEADER *)((int)param_5->e_magic + 1);
          uVar32 = *(byte *)pwVar39 + uVar32;
          uVar20 = uVar20 + uVar32;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      uVar32 = uVar32 % 0xfff1;
      uVar20 = uVar20 % 0xfff1;
      uVar48 = uVar48 - uVar6;
      uVar6 = 0x15b0;
    }
    puVar11[7] = uVar20 * 0x10000 + uVar32;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a610 @ 9800a610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a610(void)

{
  int iVar1;
  
  iVar1 = FUN_9800dc7c();
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x48) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
      if (*(int *)(iVar1 + 0x28) == 0) {
        *(undefined1 **)(iVar1 + 0x28) = &LAB_98008d48;
      }
      if (*(int *)(iVar1 + 0x2c) == 0) {
        *(undefined1 **)(iVar1 + 0x2c) = &LAB_98008d50;
      }
      if (*(int *)(iVar1 + 0x30) == 0) {
        *(undefined1 **)(iVar1 + 0x30) = &LAB_98008d58;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0x18;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a730 @ 9800a730 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a730(void)

{
  int iVar1;
  
  iVar1 = FUN_9800dc6c();
  if (1 < *(uint *)(iVar1 + 0x10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ac10 @ 9800ac10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ac10(void)

{
  FUN_9800dc70();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ad38 @ 9800ad38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ad38(void)

{
  FUN_9800dc4c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b7a8 @ 9800b7a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b7a8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9800dc70();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x48);
    if ((((puVar3 == (undefined4 *)0x0) || (*(int *)(iVar1 + 0x28) == 0)) ||
        (*(code **)(iVar1 + 0x2c) == (code *)0x0)) || (*(int *)(iVar1 + 0x14) != 1)) {
      if ((int)uVar4 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 0x18;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x48) = 0;
      (**(code **)(iVar1 + 0x2c))(*(undefined4 *)(iVar1 + 0x34),*puVar3);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      (**(code **)(iVar1 + 0x2c))(*(undefined4 *)(iVar1 + 0x34),puVar3[4]);
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      (**(code **)(iVar1 + 0x2c))(*(undefined4 *)(iVar1 + 0x34),puVar3[8]);
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      if (puVar3[0xf] != 0) {
        if (((*(int *)(iVar1 + 0x18) == 4) && (iVar2 = FUN_9800eca8(), iVar2 == -1)) &&
           ((int)uVar4 != 0)) {
          *(undefined4 *)(iVar1 + 0x1c) = 0x15;
        }
        puVar3[0xf] = 0;
      }
      (**(code **)(iVar1 + 0x2c))(*(undefined4 *)(iVar1 + 0x34),puVar3);
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b8e8 @ 9800b8e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b8e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b960 @ 9800b960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b960(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9800dc78();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    if (iVar1 == 0) {
      halt_baddata();
    }
    uVar3 = 0x18;
  }
  else {
    if (0x15 < param_3) {
      iVar2 = FUN_9800a610();
      if (iVar2 == 0) {
        halt_baddata();
      }
      *(int *)(iVar1 + 0x44) = iVar1;
      *(undefined4 *)(iVar1 + 0x18) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar1 == 0) {
      halt_baddata();
    }
    uVar3 = 8;
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  return (*(byte *)(iVar2 + 8) & 0x41) != 0;
}


/* ==== FUN_9800baa0 @ 9800baa0 ==== */

undefined4 FUN_9800baa0(int param_1,uint param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((param_1 == 0) || (piVar2 = *(int **)(param_1 + 0x48), piVar2 == (int *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar2[4] + param_2 * 4) + *piVar2;
  }
  if (iVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    uVar4 = 0x18;
  }
  else {
    sVar1 = CONCAT11(*(undefined1 *)(iVar3 + 0xb),*(undefined1 *)(iVar3 + 10));
    if ((sVar1 == 0) || (sVar1 == 8)) {
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
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_1 == 0) || (piVar2 = *(int **)(param_1 + 0x48), piVar2 == (int *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar2[4] + param_2 * 4) + *piVar2;
  }
  if (iVar3 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x18;
    }
    return 0;
  }
  uVar1 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 0x1d),*(undefined1 *)(iVar3 + 0x1c));
  if ((uVar1 != 0) && (*(char *)(uVar1 + iVar3 + 0x2d) == '/')) {
    return 1;
  }
  return *(byte *)(iVar3 + 0x26) >> 4 & 1;
}


/* ==== FUN_9800c160 @ 9800c160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c160(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800dc64();
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  pcVar4 = (char *)uVar5;
  iVar3 = *(int *)(iVar2 + 0x10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== caseD_0 @ 9800c2a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void switchD_9800c69c::caseD_0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int unaff_r23;
  int unaff_r28;
  undefined4 unaff_r30;
  int unaff_r31;
  byte in_cr6;
  
  if ((bool)(in_cr6 >> 1 & 1)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = unaff_r30;
    }
  }
  else {
    if ((bool)(in_cr6 >> 3 & 1)) {
      param_1 = unaff_r31 + 1;
    }
    else {
      unaff_r28 = unaff_r31 + -1;
    }
    if (param_1 <= unaff_r28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_r23 + 0x1c) = 0x1c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c2e0 @ 9800c2e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c2e0(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  byte *pbVar18;
  undefined8 uVar19;
  
  uVar19 = FUN_9800dc64();
  iVar3 = (int)((ulonglong)uVar19 >> 0x20);
  pbVar5 = (byte *)uVar19;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (iVar3 == 0) {
    halt_baddata();
  }
  piVar6 = *(int **)(iVar3 + 0x48);
  if ((piVar6 != (int *)0x0) && (pbVar5 != (byte *)0x0)) {
    pbVar9 = pbVar5;
    if (((piVar6[0xc] & 0x800U) == 0) &&
       ((((*(int *)(iVar3 + 0x14) == 1 && ((param_4 & 0x300) == 0)) && (param_3 == (byte *)0x0)) &&
        (piVar6[9] != 0)))) {
      FUN_9800c160(iVar3,pbVar5,param_5);
      halt_baddata();
    }
    do {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    pbVar9 = pbVar9 + (-1 - (int)pbVar5);
    if (pbVar9 < (byte *)0x10000) {
      pbVar10 = param_3;
      if (param_3 == (byte *)0x0) {
        pbVar10 = (byte *)0x0;
      }
      else {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
        pbVar10 = pbVar10 + (-1 - (int)param_3);
      }
      if (pbVar10 < (byte *)0x10000) {
        uVar16 = 0;
        if (*(int *)(iVar3 + 0x10) != 0) {
          piVar17 = (int *)piVar6[4];
          do {
            iVar11 = *piVar17 + *piVar6;
            pbVar7 = (byte *)(iVar11 + 0x2e);
            pbVar18 = (byte *)(uint)CONCAT11(*(undefined1 *)(iVar11 + 0x1d),
                                             *(undefined1 *)(iVar11 + 0x1c));
            if (pbVar9 <= pbVar18) {
              if (pbVar10 == (byte *)0x0) {
LAB_9800c4f4:
                if (((param_4 & 0x200) != 0) && (pbVar18 != (byte *)0x0)) {
                  pbVar4 = pbVar18 + -1;
                  do {
                    bVar1 = pbVar7[(int)pbVar4];
                    if (((bVar1 == 0x2f) || (bVar1 == 0x5c)) || (bVar1 == 0x3a)) break;
                    pbVar4 = pbVar4 + -1;
                  } while (-1 < (int)pbVar4);
                  pbVar7 = pbVar7 + (int)(pbVar4 + 1);
                  pbVar18 = pbVar18 + -(int)(pbVar4 + 1);
                }
                if (pbVar18 == pbVar9) {
                  if ((param_4 & 0x100) == 0) {
                    pbVar4 = (byte *)0x0;
                    if (pbVar18 != (byte *)0x0) {
                      iVar11 = (int)pbVar5 - (int)pbVar7;
                      do {
                        iVar14 = (int)(char)pbVar7[iVar11];
                        if ((0x40 < iVar14) && (iVar14 < 0x5b)) {
                          iVar14 = iVar14 + 0x20;
                        }
                        iVar8 = (int)(char)*pbVar7;
                        if ((0x40 < iVar8) && (iVar8 < 0x5b)) {
                          iVar8 = iVar8 + 0x20;
                        }
                        if (iVar14 != iVar8) goto LAB_9800c600;
                        pbVar4 = pbVar4 + 1;
                        pbVar7 = pbVar7 + 1;
                      } while (pbVar4 < pbVar18);
                    }
                    bVar2 = true;
                  }
                  else {
                    iVar11 = 0;
                    if (pbVar18 != (byte *)0x0) {
                      pbVar4 = pbVar5;
                      do {
                        iVar11 = (uint)*pbVar4 - (uint)*pbVar7;
                        if (iVar11 != 0) break;
                        pbVar4 = pbVar4 + 1;
                        pbVar7 = pbVar7 + 1;
                      } while (pbVar4 != pbVar5 + (int)pbVar18);
                    }
                    bVar2 = iVar11 == 0;
                  }
                  if (bVar2) {
                    if (param_5 == (uint *)0x0) {
                      halt_baddata();
                    }
                    *param_5 = uVar16;
                    halt_baddata();
                  }
                }
              }
              else {
                pbVar4 = (byte *)(uint)CONCAT11(*(undefined1 *)(iVar11 + 0x21),
                                                *(undefined1 *)(iVar11 + 0x20));
                pbVar12 = pbVar7 + (int)(pbVar18 +
                                        CONCAT11(*(undefined1 *)(iVar11 + 0x1f),
                                                 *(undefined1 *)(iVar11 + 0x1e)));
                if (pbVar4 == pbVar10) {
                  if ((param_4 & 0x100) == 0) {
                    pbVar13 = (byte *)0x0;
                    if (pbVar4 != (byte *)0x0) {
                      iVar11 = (int)param_3 - (int)pbVar12;
                      do {
                        iVar14 = (int)(char)pbVar12[iVar11];
                        if ((0x40 < iVar14) && (iVar14 < 0x5b)) {
                          iVar14 = iVar14 + 0x20;
                        }
                        iVar8 = (int)(char)*pbVar12;
                        if ((0x40 < iVar8) && (iVar8 < 0x5b)) {
                          iVar8 = iVar8 + 0x20;
                        }
                        if (iVar14 != iVar8) goto LAB_9800c600;
                        pbVar13 = pbVar13 + 1;
                        pbVar12 = pbVar12 + 1;
                      } while (pbVar13 < pbVar4);
                    }
                    bVar2 = true;
                  }
                  else {
                    iVar11 = 0;
                    if (pbVar4 != (byte *)0x0) {
                      pbVar13 = param_3;
                      do {
                        iVar11 = (uint)*pbVar13 - (uint)*pbVar12;
                        if (iVar11 != 0) break;
                        pbVar13 = pbVar13 + 1;
                        pbVar12 = pbVar12 + 1;
                      } while (pbVar13 != param_3 + (int)pbVar4);
                    }
                    bVar2 = iVar11 == 0;
                  }
                  if (bVar2) goto LAB_9800c4f4;
                }
              }
            }
LAB_9800c600:
            uVar16 = uVar16 + 1;
            piVar17 = piVar17 + 1;
          } while (uVar16 < *(uint *)(iVar3 + 0x10));
        }
        uVar15 = 0x1c;
        goto LAB_9800c634;
      }
    }
  }
  uVar15 = 0x18;
LAB_9800c634:
  *(undefined4 *)(iVar3 + 0x1c) = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

char * FUN_9800c670(uint param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint param_6
                   ,uint param_7,byte *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint *in_r11;
  uint unaff_r23;
  byte *unaff_r24;
  uint unaff_r25;
  int unaff_r26;
  byte *unaff_r27;
  int *unaff_r28;
  byte *unaff_r29;
  uint unaff_r30;
  byte *pbVar13;
  uint unaff_r31;
  byte in_cr0;
  
  bVar4 = param_1 == 0x20;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  puVar10 = param_3;
  switch(param_1) {
  case 0:
    if (bVar4) {
      bVar4 = param_3 == (uint *)0x0;
      goto switchD_9800c69c_caseD_4;
    }
    if (param_1 < 0x20) {
      param_1 = unaff_r31 + 1;
      goto switchD_9800c69c_caseD_1;
    }
    unaff_r28 = (int *)(unaff_r31 - 1);
    break;
  case 1:
switchD_9800c69c_caseD_1:
    break;
  case 2:
    goto switchD_9800c69c_caseD_2;
  case 3:
    goto switchD_9800c69c_caseD_3;
  case 4:
switchD_9800c69c_caseD_4:
    if (!bVar4) {
      *param_3 = unaff_r30;
    }
LAB_9800dcb4:
    halt_baddata();
  case 5:
    goto LAB_9800dcb4;
  case 6:
    bVar4 = param_5 == (uint *)0x0;
    unaff_r23 = param_1;
  case 7:
    if (!bVar4) {
      *param_5 = 0;
    }
switchD_9800c69c_caseD_8:
    if (unaff_r23 == 0) {
      halt_baddata();
    }
    param_8 = *(byte **)(unaff_r23 + 0x48);
switchD_9800c69c_caseD_9:
    if (param_8 != (byte *)0x0) {
      bVar4 = param_2 == (uint *)0x0;
switchD_9800c69c_caseD_a:
      if (!bVar4) {
        in_cr0 = ((*(uint *)(param_8 + 0x30) & 0x800) == 0) << 1;
switchD_9800c69c_caseD_b:
        if ((bool)(in_cr0 >> 1 & 1)) {
          bVar4 = *(int *)(unaff_r23 + 0x14) == 1;
switchD_9800c69c_caseD_c:
          if ((bVar4) && ((param_4 & 0x300) == 0)) {
switchD_9800c69c_caseD_d:
            if (param_3 == (uint *)0x0) {
              in_r11 = *(uint **)(param_8 + 0x24);
switchD_9800c69c_caseD_e:
              puVar10 = param_5;
              if (in_r11 != (uint *)0x0) {
switchD_9800c69c_caseD_f:
                FUN_9800c160(unaff_r23,param_2,puVar10);
                halt_baddata();
              }
            }
          }
        }
switchD_9800c69c_caseD_10:
        in_r11 = param_2;
        do {
          param_7 = (uint)*(byte *)in_r11;
          in_r11 = (uint *)((int)in_r11 + 1);
switchD_9800c69c_caseD_11:
        } while (param_7 != 0);
        in_r11 = (uint *)((int)in_r11 - (int)param_2);
switchD_9800c69c_caseD_12:
        unaff_r24 = (byte *)((int)in_r11 + -1);
        bVar2 = (byte *)0xffff < unaff_r24;
switchD_9800c69c_caseD_13:
        if (!bVar2) {
          if (param_3 == (uint *)0x0) {
switchD_9800c69c_caseD_17:
            unaff_r27 = (byte *)0x0;
          }
          else {
switchD_9800c69c_caseD_14:
            in_r11 = param_3;
            do {
              param_7 = (uint)*(byte *)in_r11;
              in_r11 = (uint *)((int)in_r11 + 1);
switchD_9800c69c_caseD_15:
            } while (param_7 != 0);
            in_r11 = (uint *)((int)in_r11 - (int)param_3);
switchD_9800c69c_caseD_16:
            unaff_r27 = (byte *)((int)in_r11 + -1);
          }
          if (unaff_r27 < (byte *)0x10000) {
switchD_9800c69c_caseD_18:
            unaff_r25 = 0;
            bVar3 = *(int *)(unaff_r23 + 0x10) != 0;
switchD_9800c69c_caseD_19:
            if (bVar3) {
              unaff_r26 = *(int *)param_8;
              unaff_r28 = *(int **)(param_8 + 0x10);
switchD_9800c69c_caseD_1a:
              do {
                in_r11 = (uint *)(*unaff_r28 + unaff_r26);
                param_8 = (byte *)((int)in_r11 + 0x2e);
switchD_9800c69c_caseD_1b:
                param_6 = (uint)*(byte *)(in_r11 + 7);
                param_7 = (uint)*(byte *)((int)in_r11 + 0x1d) << 8;
switchD_9800c69c_caseD_1c:
                unaff_r29 = (byte *)(param_7 | param_6);
                if (unaff_r24 <= unaff_r29) {
switchD_9800c69c_caseD_1d:
                  if (unaff_r27 == (byte *)0x0) {
LAB_9800c4f4:
                    if (((param_4 & 0x200) != 0) && (unaff_r29 != (byte *)0x0)) {
                      pbVar6 = unaff_r29 + -1;
                      do {
                        bVar5 = pbVar6[(int)param_8];
                        if (((bVar5 == 0x2f) || (bVar5 == 0x5c)) || (bVar5 == 0x3a)) break;
                        pbVar6 = pbVar6 + -1;
                      } while (-1 < (int)pbVar6);
                      param_8 = pbVar6 + 1 + (int)param_8;
                      unaff_r29 = unaff_r29 + -(int)(pbVar6 + 1);
                    }
                    if (unaff_r29 == unaff_r24) {
                      if ((param_4 & 0x100) == 0) {
                        pbVar6 = (byte *)0x0;
                        if (unaff_r29 != (byte *)0x0) {
                          iVar7 = (int)param_2 - (int)param_8;
                          do {
                            iVar11 = (int)(char)param_8[iVar7];
                            if ((0x40 < iVar11) && (iVar11 < 0x5b)) {
                              iVar11 = iVar11 + 0x20;
                            }
                            iVar8 = (int)(char)*param_8;
                            if ((0x40 < iVar8) && (iVar8 < 0x5b)) {
                              iVar8 = iVar8 + 0x20;
                            }
                            if (iVar11 != iVar8) goto LAB_9800c600;
                            pbVar6 = pbVar6 + 1;
                            param_8 = param_8 + 1;
                          } while (pbVar6 < unaff_r29);
                        }
                        bVar1 = true;
                      }
                      else {
                        iVar7 = 0;
                        if (unaff_r29 != (byte *)0x0) {
                          puVar10 = param_2;
                          do {
                            iVar7 = (uint)*(byte *)puVar10 - (uint)*param_8;
                            if (iVar7 != 0) break;
                            puVar10 = (uint *)((int)puVar10 + 1);
                            param_8 = param_8 + 1;
                          } while (puVar10 != (uint *)((int)param_2 + (int)unaff_r29));
                        }
                        bVar1 = iVar7 == 0;
                      }
                      if (bVar1) {
                        if (param_5 == (uint *)0x0) {
                          halt_baddata();
                        }
                        *param_5 = unaff_r25;
                        halt_baddata();
                      }
                    }
                  }
                  else {
                    param_7 = (uint)*(byte *)((int)in_r11 + 0x1f);
switchD_9800c69c_caseD_1e:
                    param_6 = (uint)*(byte *)((int)in_r11 + 0x21);
                    param_1 = (uint)*(byte *)((int)in_r11 + 0x1e);
                    param_7 = param_7 << 8 | param_7 >> 0x18;
switchD_9800c69c_caseD_1f:
                    unaff_r31 = (uint)*(byte *)(in_r11 + 8);
                    param_6 = param_6 << 8 | param_6 >> 0x18;
                    in_r11 = (uint *)(param_7 | param_1);
switchD_9800c69c_caseD_20:
                    pbVar6 = (byte *)(param_6 | unaff_r31);
                    pbVar9 = (byte *)((int)in_r11 + (int)param_8) + (int)unaff_r29;
                    if (pbVar6 == unaff_r27) {
                      if ((param_4 & 0x100) == 0) {
                        pbVar13 = (byte *)0x0;
                        if (pbVar6 != (byte *)0x0) {
                          iVar7 = (int)param_3 - (int)pbVar9;
                          do {
                            iVar11 = (int)(char)pbVar9[iVar7];
                            if ((0x40 < iVar11) && (iVar11 < 0x5b)) {
                              iVar11 = iVar11 + 0x20;
                            }
                            iVar8 = (int)(char)*pbVar9;
                            if ((0x40 < iVar8) && (iVar8 < 0x5b)) {
                              iVar8 = iVar8 + 0x20;
                            }
                            if (iVar11 != iVar8) goto LAB_9800c600;
                            pbVar13 = pbVar13 + 1;
                            pbVar9 = pbVar9 + 1;
                          } while (pbVar13 < pbVar6);
                        }
                        bVar1 = true;
                      }
                      else {
                        iVar7 = 0;
                        if (pbVar6 != (byte *)0x0) {
                          puVar10 = param_3;
                          do {
                            iVar7 = (uint)*(byte *)puVar10 - (uint)*pbVar9;
                            if (iVar7 != 0) break;
                            puVar10 = (uint *)((int)puVar10 + 1);
                            pbVar9 = pbVar9 + 1;
                          } while (puVar10 != (uint *)((int)param_3 + (int)pbVar6));
                        }
                        bVar1 = iVar7 == 0;
                      }
                      if (bVar1) goto LAB_9800c4f4;
                    }
                  }
                }
LAB_9800c600:
                unaff_r25 = unaff_r25 + 1;
                unaff_r28 = unaff_r28 + 1;
              } while (unaff_r25 < *(uint *)(unaff_r23 + 0x10));
            }
            uVar12 = 0x1c;
            goto LAB_9800c634;
          }
        }
      }
    }
    uVar12 = 0x18;
LAB_9800c634:
    *(undefined4 *)(unaff_r23 + 0x1c) = uVar12;
    halt_baddata();
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
    return "unknown error";
  }
  bVar1 = (int)unaff_r28 < (int)param_1;
switchD_9800c69c_caseD_2:
  if (!bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_r11 = (uint *)0x1c;
switchD_9800c69c_caseD_3:
  *(uint **)(unaff_r23 + 0x1c) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c850(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x48) == 0)) || (*(uint *)(param_1 + 0x10) <= param_2))
  {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((*(int **)(param_1 + 0x48))[4] + param_2 * 4) + **(int **)(param_1 + 0x48);
  }
  puVar2 = (undefined4 *)0x0;
  uVar4 = FUN_9800dc6c();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  if ((iVar3 != 0) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = (int)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x18;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c8a0 @ 9800c8a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c8a0(void)

{
  FUN_9800dc50();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ccc8 @ 9800ccc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ccc8(void)

{
  FUN_9800dc50();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ccd8 @ 9800ccd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ccd8(void)

{
  FUN_9800dc40();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== entry @ 9800d130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void entry(void)

{
  undefined4 in_r11;
  undefined4 uVar1;
  int unaff_r14;
  int unaff_r15;
  int unaff_r16;
  int unaff_r19;
  int unaff_r20;
  int unaff_r22;
  undefined4 unaff_r23;
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
    (**(code **)(unaff_r28 + 0x2c))(*(undefined4 *)(unaff_r28 + 0x34),unaff_r15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d1d8 @ 9800d1d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d1d8(void)

{
  int iVar1;
  uint in_r7;
  undefined8 uVar2;
  uint local_30 [12];
  
  uVar2 = FUN_9800dc78();
  iVar1 = FUN_9800c2e0((int)((ulonglong)uVar2 >> 0x20),(int)uVar2,(byte *)0x0,in_r7,local_30);
  if (iVar1 != 0) {
    FUN_9800ccd8();
  }
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


/* ==== FUN_9800d384 @ 9800d384 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d384(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d500 @ 9800d500 ==== */

void FUN_9800d500(undefined4 *param_1)

{
  FUN_9800f8b0(*(int *)*param_1);
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
  undefined4 in_r0;
  
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

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d580(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint local_aac [2];
  undefined4 local_aa4;
  uint auStack_a60 [662];
  undefined4 local_8;
  
  iVar1 = FUN_9800dc7c();
  if (iVar1 != -1) {
    FUN_9800f8d0();
  }
  FUN_9800dcf0(local_aac,0,0x4c);
  FUN_9800dcf0(auStack_a60,0,0xa40);
  local_aa4 = local_8;
  local_aac[0] = param_3;
  FUN_98016ae8(0);
  iVar2 = FUN_98016b00();
  if ((iVar2 == 0) && (iVar1 != -1)) {
    FUN_9800f8d0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d620 @ 9800d620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d620(void)

{
  FUN_9800d580(2,0xc0000417,1);
  func_0x9801ac80(0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_9800dd90 @ 9800d648 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_9800dd90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d650 @ 9800d650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dad8 @ 9800dad8 ==== */

void FUN_9800dad8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = param_3 + 1;
  for (; iVar2 = iVar2 + -1, iVar2 != 0 && ((uint)param_1 & 3) != 0;
      param_1 = (undefined4 *)((int)param_1 + 1)) {
    param_3 = param_3 - 1;
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
  }
  uVar4 = param_3 >> 2;
  if (uVar4 != 0) {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar3;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      do {
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar3;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    do {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}


/* ==== FUN_9800db80 @ 9800db80 ==== */

void FUN_9800db80(int param_1,int param_2,uint param_3)

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
  FUN_9800d650();
  return;
}


/* ==== FUN_9800dc40 @ 9800dc40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc4c @ 9800dc4c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc4c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc50 @ 9800dc50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc54 @ 9800dc54 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc54(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc58 @ 9800dc58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc5c @ 9800dc5c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc60 @ 9800dc60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc64 @ 9800dc64 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc68 @ 9800dc68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc6c @ 9800dc6c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc6c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc70 @ 9800dc70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc74 @ 9800dc74 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc74(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc78 @ 9800dc78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dc7c @ 9800dc7c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dc7c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800dcf0 @ 9800dcf0 ==== */

void FUN_9800dcf0(uint *param_1,uint param_2,uint param_3)

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

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800dd90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ddf0 @ 9800ddf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ddf0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_9800dc78();
  if (uVar1 < 0xfffff001) {
    do {
      iVar2 = FUN_98019fa0();
      if (iVar2 == 0) {
        FUN_9800faa8();
        FUN_9800fa78(0x1e);
        FUN_9800f408();
      }
      uVar5 = uVar1;
      if (uVar1 == 0) {
        uVar5 = 1;
      }
      uVar3 = FUN_98019fa0();
      iVar2 = FUN_98018ad0(uVar3,0,uVar5);
      if (iVar2 != 0) {
        halt_baddata();
      }
      if (DAT_9801c970 == 0) {
        puVar4 = (undefined4 *)FUN_9800f950();
        *puVar4 = 0xc;
        break;
      }
      iVar2 = FUN_9800e4e0();
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_9800f950();
    *puVar4 = 0xc;
  }
  else {
    FUN_9800e4e0();
    puVar4 = (undefined4 *)FUN_9800f950();
    *puVar4 = 0xc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e040 @ 9800e040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e040(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puStack_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  
  uVar4 = 0;
  uVar5 = FUN_9800dc70();
  puVar1 = (undefined1 *)((ulonglong)uVar5 >> 0x20);
  uVar3 = (uint)uVar5;
  puStack_60 = (undefined1 *)0x0;
  FUN_9800dcf0(&uStack_5c,0,0x1c);
  if ((param_3 == 0) || ((uVar3 != 0 && (puVar1 == (undefined1 *)0x0)))) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 0x16;
    FUN_9800d548();
  }
  else {
    uStack_5c = 0x7fffffff;
    if (uVar3 < 0x80000000) {
      uStack_5c = uVar3;
    }
    uStack_54 = 0x42;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    FUN_98010bc8(&puStack_60,param_3,uVar4,param_4);
    if (puVar1 != (undefined1 *)0x0) {
      uStack_5c = uStack_5c - 1;
      if ((int)uStack_5c < 0) {
        FUN_98010888(0,&puStack_60);
      }
      else {
        *puStack_60 = 0;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e0b0 @ 9800e0b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e0b0(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_9800dc64();
  FUN_9800f410();
  puVar6 = puRam9801cd8c;
  if (puRam9801cd90 <= puRam9801cd8c) {
    iVar4 = (int)puRam9801cd8c - (int)puRam9801cd90;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = FUN_980116f8();
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (undefined4 *)FUN_9800eb10(), puVar3 == (undefined4 *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (undefined4 *)FUN_9800eb10(), puVar3 == (undefined4 *)0x0))))
        goto LAB_9800dcb4;
        puVar6 = puVar3 + (iVar4 >> 2);
        puRam9801cd90 = puVar3;
      }
      puRam9801cd8c = puVar6 + 1;
      *puVar6 = uVar1;
    }
  }
LAB_9800dcb4:
  FUN_9800e194();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e194 @ 9800e194 ==== */

void FUN_9800e194(void)

{
  FUN_9800f418();
  return;
}


/* ==== FUN_9800e1b8 @ 9800e1b8 ==== */

int FUN_9800e1b8(void)

{
  int iVar1;
  
  iVar1 = FUN_9800e0b0();
  return -(uint)(iVar1 == 0);
}


/* ==== FUN_9800e1e0 @ 9800e1e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e1e0(void)

{
  FUN_9800dc78();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e2e0 @ 9800e2e0 ==== */

byte * FUN_9800e2e0(byte *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = param_3 + -1;
    if (*param_1 == param_2) {
      return param_1;
    }
    if (param_3 != 1) {
      do {
        param_1 = param_1 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0 && *param_1 != param_2);
      if (*param_1 == param_2) {
        return param_1;
      }
    }
  }
  return (byte *)0x0;
}


/* ==== FUN_9800e320 @ 9800e320 ==== */

int FUN_9800e320(int param_1)

{
  if (param_1 < 0x61) {
    return param_1;
  }
  if (0x7a < param_1) {
    return param_1;
  }
  return param_1 + -0x20;
}


/* ==== FUN_9800e338 @ 9800e338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e338(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e3f0 @ 9800e3f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e3f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e4d0 @ 9800e4d0 ==== */

void FUN_9800e4d0(undefined4 param_1)

{
  DAT_9801c950 = param_1;
  return;
}


/* ==== FUN_9800e4e0 @ 9800e4e0 ==== */

undefined4 FUN_9800e4e0(void)

{
  int iVar1;
  
  if ((DAT_9801c950 != (code *)0x0) && (iVar1 = (*DAT_9801c950)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_9800e528 @ 9800e528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800eb08 @ 9800eb08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eb08(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_9800dc78();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 0x16;
    FUN_9800d548();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800eb10 @ 9800eb10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eb10(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc74();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  piVar6 = (int *)uVar7;
  if (iVar1 == 0) {
    FUN_9800ddf0();
  }
  else if (piVar6 == (int *)0x0) {
    FUN_9800dd90();
  }
  else {
    do {
      if ((int *)0xfffff000 < piVar6) {
        FUN_9800e4e0();
        puVar4 = (undefined4 *)FUN_9800f950();
        *puVar4 = 0xc;
        halt_baddata();
      }
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x1;
      }
      uVar2 = FUN_98019fa0();
      iVar3 = FUN_980196c0(uVar2,0,iVar1,piVar6);
      if (iVar3 != 0) {
        halt_baddata();
      }
      if (DAT_9801c970 == 0) {
        puVar4 = (undefined4 *)FUN_9800f950();
        uVar5 = thunk_FUN_98008b10();
        uVar2 = FUN_9800f8e0(uVar5);
        *puVar4 = uVar2;
        halt_baddata();
      }
      iVar3 = FUN_9800e4e0();
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)FUN_9800f950();
    uVar5 = thunk_FUN_98008b10();
    uVar2 = FUN_9800f8e0(uVar5);
    *puVar4 = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ec00 @ 9800ec00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ec00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_9800dc7c();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 0x16;
    FUN_9800d548();
  }
  else {
    if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
      FUN_9800eda8();
      FUN_98013130();
      FUN_980130f0(iVar1);
      iVar3 = FUN_98012f90();
      if ((-1 < iVar3) && (*(int *)(iVar1 + 0x1c) != 0)) {
        FUN_9800dd90();
        *(undefined4 *)(iVar1 + 0x1c) = 0;
      }
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800eca8 @ 9800eca8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eca8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ed6c @ 9800ed6c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ed6c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800eda8 @ 9800eda8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eda8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)FUN_9800dc78();
  if ((piVar1[3] & 3U) == 2) {
    if ((piVar1[3] & 0x108U) != 0) {
      iVar5 = piVar1[2];
      iVar3 = *piVar1;
      if (0 < iVar3 - iVar5) {
        FUN_980130f0((int)piVar1);
        iVar2 = FUN_98013630();
        uVar4 = piVar1[3];
        if (iVar2 == iVar3 - iVar5) {
          if ((uVar4 & 0x80) == 0) goto LAB_9800ee20;
          uVar4 = uVar4 & 0xfffffffd;
        }
        else {
          uVar4 = uVar4 | 0x20;
        }
        piVar1[3] = uVar4;
      }
    }
  }
LAB_9800ee20:
  piVar1[1] = 0;
  *piVar1 = piVar1[2];
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


/* ==== FUN_9800eec0 @ 9800eec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eec0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_9800dc74();
  FUN_98011ba0();
  piVar3 = &DAT_9801cd84;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + DAT_9801cd80);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_980129e0(iVar5);
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + DAT_9801cd80) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_9800ee40();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_9800ee40();
        }
      }
      FUN_9800f034();
    }
  }
  FUN_9800efe4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800efe4 @ 9800efe4 ==== */

void FUN_9800efe4(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_9800f034 @ 9800f034 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f034(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f098 @ 9800f098 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f098(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_9800dc74();
  FUN_98011ba0();
  piVar3 = &DAT_9801cd84;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + DAT_9801cd80);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_980129e0(iVar5);
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + DAT_9801cd80) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_9800ee40();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_9800ee40();
        }
      }
      FUN_9800f034();
    }
  }
  FUN_9800efe4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f0a0 @ 9800f0a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f0a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f0e8 @ 9800f0e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f0e8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_9800dc7c();
  uVar1 = thunk_FUN_98008b10();
  iVar2 = func_0x9801ac90(DAT_9801b390);
  if ((iVar2 == 0) && (iVar2 = func_0x9801aca0(DAT_9801b390,1), iVar2 != 0)) {
    puVar3 = (undefined4 *)FUN_98011750();
    if (puVar3 == (undefined4 *)0x0) {
      func_0x9801aca0(DAT_9801b390,0);
    }
    else {
      iVar2 = func_0x9801aca0(DAT_9801b390,puVar3);
      if (iVar2 == 0) {
        FUN_9800dd90();
      }
      else {
        puVar3[2] = 0;
        puVar3[0x17] = &DAT_98002108;
        puVar3[5] = 1;
        uVar4 = FUN_9801a198();
        *puVar3 = uVar4;
        puVar3[1] = 0xffffffff;
      }
    }
  }
  thunk_FUN_98008ac0(uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f1c0 @ 9800f1c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f1c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f200 @ 9800f200 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f200(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f2c0 @ 9800f2c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f2c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f330 @ 9800f330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f408 @ 9800f408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f410 @ 9800f410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f460(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f4c0 @ 9800f4c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f4c0(void)

{
  undefined *puVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc68();
  FUN_98011ba0();
  if (iRam9801c96c != 1) {
    puVar1 = &UNK_98020000;
    if (iRam9801c968 == 1) {
      func_0x9801ac80(0);
    }
    *(undefined4 *)(puVar1 + -0x3698) = 1;
    uRam9801c964 = (undefined1)uVar7;
    if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
      piVar3 = piRam9801cd8c;
      piVar4 = piRam9801cd90;
      piVar5 = piRam9801cd90;
      piVar6 = piRam9801cd8c;
      if (piRam9801cd90 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar2 = (code *)*piVar6;
            *piVar6 = 0;
            (*pcVar2)();
            if ((piVar5 != piRam9801cd90) || (piVar3 != piRam9801cd8c)) {
              piVar3 = piRam9801cd8c;
              piVar4 = piRam9801cd90;
              piVar5 = piRam9801cd90;
              piVar6 = piRam9801cd8c;
            }
          }
        }
      }
      FUN_9800f460(0x9801b028,0x9801b030);
    }
    FUN_9800f460(0x9801b034,0x9801b038);
  }
  FUN_9800f644();
  if ((int)uVar7 == 0) {
    func_0x9801ac80(0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f644 @ 9800f644 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f644(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f688 @ 9800f688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f688(void)

{
  undefined *puVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc68();
  FUN_98011ba0();
  if (iRam9801c96c != 1) {
    puVar1 = &UNK_98020000;
    if (iRam9801c968 == 1) {
      func_0x9801ac80(0);
    }
    *(undefined4 *)(puVar1 + -0x3698) = 1;
    uRam9801c964 = (undefined1)uVar7;
    if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
      piVar3 = piRam9801cd8c;
      piVar4 = piRam9801cd90;
      piVar5 = piRam9801cd90;
      piVar6 = piRam9801cd8c;
      if (piRam9801cd90 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar2 = (code *)*piVar6;
            *piVar6 = 0;
            (*pcVar2)();
            if ((piVar5 != piRam9801cd90) || (piVar3 != piRam9801cd8c)) {
              piVar3 = piRam9801cd8c;
              piVar4 = piRam9801cd90;
              piVar5 = piRam9801cd90;
              piVar6 = piRam9801cd8c;
            }
          }
        }
      }
      FUN_9800f460(0x9801b028,0x9801b030);
    }
    FUN_9800f460(0x9801b034,0x9801b038);
  }
  FUN_9800f644();
  if ((int)uVar7 == 0) {
    func_0x9801ac80(0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f698 @ 9800f698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f6c8 @ 9800f6c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f6c8(void)

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
  
  uVar11 = FUN_9800dc78();
  iVar5 = (int)((ulonglong)uVar11 >> 0x20);
  iVar1 = FUN_9800f0e8();
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
    goto LAB_9800f89c;
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
LAB_9800f874:
    *(undefined4 *)(iVar1 + 100) = uVar7;
  }
  else {
    if (iVar5 == -0x3fffff70) {
      uVar7 = 0x81;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3fffff6f) {
      uVar7 = 0x84;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3fffff6d) {
      uVar7 = 0x85;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3fffff73) {
      uVar7 = 0x82;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3fffff71) {
      uVar7 = 0x86;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3fffff6e) {
      uVar7 = 0x8a;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3ffffd4b) {
      uVar7 = 0x8d;
      goto LAB_9800f874;
    }
    if (iVar5 == -0x3ffffd4c) {
      uVar7 = 0x8e;
      goto LAB_9800f874;
    }
  }
  (*pcVar2)(8,*(undefined4 *)(iVar1 + 100));
  *(undefined4 *)(iVar1 + 100) = uVar9;
LAB_9800f89c:
  *(undefined4 *)(iVar1 + 0x60) = uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f8b0 @ 9800f8b0 ==== */

undefined4 FUN_9800f8b0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_9800f6c8();
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

undefined * FUN_9800f950(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_9800f0e8();
  if (iVar1 == 0) {
    puVar2 = &DAT_9801b500;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 8);
  }
  return puVar2;
}


/* ==== FUN_9800f988 @ 9800f988 ==== */

undefined * FUN_9800f988(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_9800f0e8();
  if (iVar1 == 0) {
    puVar2 = &DAT_9801b504;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0xc);
  }
  return puVar2;
}


/* ==== FUN_9800f9c0 @ 9800f9c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f9c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
    FUN_9801a218();
  }
  return;
}


/* ==== FUN_9800faa8 @ 9800faa8 ==== */

void FUN_9800faa8(void)

{
  int iVar1;
  
  iVar1 = FUN_9800fa30(0xfc);
  if (iVar1 != 0) {
    FUN_9801a218();
  }
  iVar1 = FUN_9800fa30(0xff);
  if (iVar1 != 0) {
    FUN_9801a218();
  }
  return;
}


/* ==== FUN_9800fc60 @ 9800fc60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800fc60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800fcd8 @ 9800fcd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800fcd8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int *param_5,
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
  
  uVar9 = FUN_9800dc6c();
  puVar5 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  if (puVar5 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 0x16;
    FUN_9800d548();
  }
  else {
    if ((uint)uVar9 == 0) {
      puVar2 = (undefined4 *)FUN_9800f950();
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
          FUN_9800db80((int)(pcVar4 + 1),(int)pcVar4,(int)pcVar6 - (int)pcVar4);
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
          *puVar5 = *(undefined1 *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
        }
        puVar5 = puVar5 + param_3 + (param_6 == '\0');
        iVar3 = FUN_9800e338();
        if (iVar3 != 0) {
          FUN_9800d620();
          FUN_9800dc78();
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
        if ((DAT_9801cbcc & 1) == 0) {
          halt_baddata();
        }
        if (puVar5[2] != '0') {
          halt_baddata();
        }
        FUN_9800db80((int)(puVar5 + 2),(int)(puVar5 + 3),3);
        halt_baddata();
      }
      puVar2 = (undefined4 *)FUN_9800f950();
      uVar8 = 0x22;
    }
    *puVar2 = uVar8;
    FUN_9800d548();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010018 @ 98010018 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010018(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined1 *extraout_r4;
  undefined4 uVar2;
  
  FUN_9800dc70();
  if (extraout_r4 == (undefined1 *)0x0) {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0x16;
    FUN_9800d548();
  }
  else {
    if (param_3 == 0) {
      puVar1 = (undefined4 *)FUN_9800f950();
      uVar2 = 0x16;
    }
    else {
      *extraout_r4 = 0;
      if ((0xffffffffU - ((int)param_4 >> 0x1f) & param_4) + 0xb < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar1 = (undefined4 *)FUN_9800f950();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    FUN_9800d548();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010428 @ 98010428 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010428(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,char param_5)

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
  
  uVar10 = FUN_9800dc70();
  pcVar5 = (char *)((ulonglong)uVar10 >> 0x20);
  iVar3 = param_4[1];
  if ((pcVar5 == (char *)0x0) || ((int)uVar10 == 0)) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 0x16;
    FUN_9800d548();
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
      FUN_9800db80((int)pcVar9,(int)pcVar7,(int)pcVar5 - (int)pcVar7);
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
      FUN_9800db80((int)puVar8,(int)pcVar9,(int)pcVar5 - (int)pcVar9);
      *pcVar9 = *(char *)**(undefined4 **)(DAT_9801bd88 + 0xbc);
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
          FUN_9800db80((int)puVar8 + param_3,(int)puVar8,(int)puVar6 - (int)puVar8);
        }
        FUN_9800dcf0(puVar8,0x30,param_3);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010888 @ 98010888 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010888(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined5 uVar9;
  
  uVar9 = FUN_9800dc78();
  piVar4 = (int *)uVar9;
  uVar1 = FUN_980130f0((int)piVar4);
  uVar6 = piVar4[3];
  if ((uVar6 & 0x82) == 0) {
    puVar2 = (undefined4 *)FUN_9800f950();
    uVar5 = 9;
LAB_980108c0:
    *puVar2 = uVar5;
  }
  else {
    if ((uVar6 & 0x40) != 0) {
      puVar2 = (undefined4 *)FUN_9800f950();
      uVar5 = 0x22;
      goto LAB_980108c0;
    }
    if ((uVar6 & 1) != 0) {
      piVar4[1] = 0;
      if ((uVar6 & 0x10) == 0) goto LAB_980108cc;
      piVar4[3] = uVar6 & 0xfffffffe;
      *piVar4 = piVar4[2];
    }
    uVar6 = piVar4[3];
    iVar8 = 0;
    piVar4[1] = 0;
    piVar4[3] = uVar6 & 0xffffffef | 2;
    if (((uVar6 & 0x10c) == 0) &&
       (((iVar3 = FUN_980127f8(), piVar4 != (int *)(iVar3 + 0x20) &&
         (iVar3 = FUN_980127f8(), piVar4 != (int *)(iVar3 + 0x40))) ||
        (iVar3 = FUN_98014100(uVar1), iVar3 == 0)))) {
      FUN_98013e68();
    }
    if ((piVar4[3] & 0x108U) == 0) {
      iVar3 = 1;
      iVar8 = FUN_98013630();
LAB_98010a44:
      if (iVar8 == iVar3) {
        halt_baddata();
      }
    }
    else {
      iVar3 = *piVar4 - piVar4[2];
      piVar4[1] = piVar4[6] + -1;
      *piVar4 = piVar4[2] + 1;
      if (0 < iVar3) {
        iVar8 = FUN_98013630();
LAB_98010a1c:
        *(char *)piVar4[2] = (char)((uint5)uVar9 >> 0x20);
        goto LAB_98010a44;
      }
      if ((uVar1 == 0xffffffff) || (uVar1 == 0xfffffffe)) {
        iVar7 = -0x67fe4608;
      }
      else {
        iVar7 = (&DAT_9801cc80)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x48;
      }
      if (((*(byte *)(iVar7 + 4) & 0x20) == 0) || (iVar7 = FUN_98013268(uVar1,0,2), iVar7 != -1))
      goto LAB_98010a1c;
    }
  }
  uVar6 = piVar4[3];
LAB_980108cc:
  piVar4[3] = uVar6 | 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010a60 @ 98010a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010a60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010af8 @ 98010af8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010af8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9800dc74();
  iVar5 = (int)uVar6;
  puVar1 = (undefined4 *)FUN_9800f950();
  uVar3 = *puVar1;
  if (((*(uint *)(param_3 + 0xc) & 0x40) == 0) || (*(int *)(param_3 + 8) != 0)) {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0;
    if (0 < iVar5) {
      puVar4 = (undefined1 *)((int)((ulonglong)uVar6 >> 0x20) + -1);
      do {
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
        FUN_98010a60(*puVar4,param_3,param_4);
        if (*param_4 == -1) {
          piVar2 = (int *)FUN_9800f950();
          if (*piVar2 != 0x2a) break;
          FUN_98010a60(0x3f,param_3,param_4);
        }
      } while (0 < iVar5);
    }
    piVar2 = (int *)FUN_9800f950();
    if (*piVar2 == 0) {
      puVar1 = (undefined4 *)FUN_9800f950();
      *puVar1 = uVar3;
    }
  }
  else {
    *param_4 = *param_4 + iVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010bc8 @ 98010bc8 ==== */

/* WARNING: Control flow encountered bad instruction data */
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

void FUN_98010bc8(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_r6;
  byte *pbVar7;
  undefined *puVar8;
  IMAGE_DOS_HEADER *pIVar9;
  undefined *puVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  undefined *puVar15;
  char cVar17;
  char *pcVar16;
  char *pcVar18;
  int iVar19;
  undefined8 uVar20;
  int iStack_4e0;
  byte *pbStack_4dc;
  undefined1 auStack_4d8 [4];
  int iStack_4d4;
  undefined *puStack_4d0;
  int iStack_4cc;
  undefined4 uStack_4c8;
  uint uStack_4c4;
  undefined4 uStack_4c0;
  undefined1 auStack_2a0 [511];
  undefined1 uStack_a1;
  char *pcVar14;
  
  uVar20 = FUN_9800dc40();
  puVar4 = (undefined4 *)((ulonglong)uVar20 >> 0x20);
  pcVar18 = (char *)uVar20;
  uStack_4c8 = 0;
  puStack_4d0 = (undefined *)0x0;
  bVar1 = puVar4 == (undefined4 *)0x0;
  iStack_4d4 = 0;
  puVar15 = (undefined *)0x0;
  iStack_4cc = 0;
code_r0x98010bfc:
  if (!bVar1) {
    if ((puVar4[3] & 0x40) != 0) goto LAB_98010cbc;
    puVar5 = (undefined4 *)FUN_980130f0((int)puVar4);
    pbVar11 = (byte *)&DAT_9801cc80;
    puVar8 = (undefined *)0x9801b9f8;
    puVar10 = puVar8;
    if (puVar5 == (undefined4 *)0xffffffff) goto LAB_98010c74;
    if (puVar5 == (undefined4 *)0xfffffffe) goto LAB_98010c74;
    puVar10 = (undefined *)(((uint)puVar5 & 0x1f) * 0x48);
    pIVar9 = (IMAGE_DOS_HEADER *)(&DAT_9801cc80)[(int)puVar5 >> 5];
code_r0x98010c68:
    puVar10 = puVar10 + (int)pIVar9->e_magic;
LAB_98010c74:
    if ((puVar10[0x28] & 0xfe) == 0) {
      if ((puVar5 != (undefined4 *)0xffffffff) && (puVar5 != (undefined4 *)0xfffffffe)) {
        puVar8 = (undefined *)
                 (*(int *)(pbVar11 + ((int)puVar5 >> 5) * 4) + ((uint)puVar5 & 0x1f) * 0x48);
      }
      if ((puVar8[0x28] & 1) == 0) {
LAB_98010cbc:
        if (pcVar18 != (char *)0x0) {
          iVar6 = FUN_980127f8();
          if ((puVar4 == (undefined4 *)(iVar6 + 0x20)) ||
             (puVar5 = (undefined4 *)FUN_980127f8(), puVar4 == puVar5 + 0x10)) {
            iVar6 = FUN_9800e040(auStack_2a0,0x200,pcVar18,in_r6);
            if (iVar6 == -1) {
              uStack_a1 = 0;
            }
            FUN_9801a158();
            halt_baddata();
          }
code_r0x98010ce4:
          cVar17 = *pcVar18;
          iVar6 = 0;
          pbVar7 = (byte *)0x0;
          iStack_4e0 = 0;
code_r0x98010cf4:
          uVar3 = uStack_4c0;
          puVar8 = (undefined *)(int)cVar17;
          pbStack_4dc = (byte *)0x0;
          uStack_4c4 = 0;
          if (puVar8 == (undefined *)0x0) {
            halt_baddata();
          }
          puVar10 = &UNK_98020000;
          pIVar9 = &IMAGE_DOS_HEADER_98000000;
          pcVar14 = pcVar18 + -1;
LAB_98010d34:
          iVar2 = iStack_4d4;
          pcVar13 = pcVar14 + 1;
          if (iVar6 < 0) {
            halt_baddata();
          }
          if (((int)puVar8 < 0x20) || (0x78 < (int)puVar8)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(byte *)((int)L"(null)" + (int)puVar8) & 0xf;
          }
          uStack_4c4 = (int)(char)(&UNK_98002aa8)[uVar12 * 8 + uStack_4c4] >> 4;
          if (uStack_4c4 < 8) {
            if (uStack_4c4 == 0) {
LAB_98010f7c:
              iVar6 = FUN_98014018(cVar17,&DAT_9801bd88);
              if (iVar6 != 0) {
                FUN_98010a60(cVar17,puVar4,&iStack_4e0);
                pcVar13 = pcVar14 + 2;
                cVar17 = *pcVar13;
                if (cVar17 == '\0') goto LAB_98010c08;
              }
              puVar5 = (undefined4 *)FUN_98010a60(cVar17,puVar4,&iStack_4e0);
              iVar6 = iStack_4e0;
              goto LAB_98011698;
            }
            if (uStack_4c4 == 1) {
              puVar15 = (undefined *)0x0;
              iStack_4cc = 0;
              puStack_4d0 = (undefined *)0x0;
              iStack_4d4 = 0;
            }
            else {
              iVar19 = uStack_4c4 - 2;
              if (iVar19 != 0) {
code_r0x98010d9c:
                if (iVar19 == 1) {
                  if (puVar8 == (undefined *)0x2a) {
                    uVar12 = in_r6 + 7U & 0xfffffff8;
                    in_r6 = uVar12 + 8;
                    puStack_4d0 = *(undefined **)(uVar12 + 4);
                    if ((int)puStack_4d0 < 0) {
                      puVar15 = (undefined *)((uint)puVar15 | 4);
                      puStack_4d0 = (undefined *)-(int)puStack_4d0;
                    }
                  }
                  else {
                    puStack_4d0 = puVar8 + (int)puStack_4d0 * 10 + -0x30;
                  }
                }
                else if (iVar19 != 2) {
                  if (iVar19 == 3) {
                    if (puVar8 == (undefined *)0x2a) {
                      in_r6 = (in_r6 + 7U & 0xfffffff8) + 8;
                    }
                  }
                  else {
                    if (iVar19 != 4) {
                      pbVar11 = puVar8 + -0x41;
                      bVar1 = pbVar11 == (byte *)0x37;
                      if (pbVar11 < (byte *)0x38) goto code_r0x98010fd4;
                      goto LAB_980114c8;
                    }
                    if (puVar8 == (undefined *)0x49) {
                      pbVar11 = (byte *)(int)pcVar14[2];
                      bVar1 = pbVar11 == (byte *)0x36;
                      goto code_r0x98010f08;
                    }
                    if (((puVar8 != (undefined *)0x68) && (puVar8 == (undefined *)0x6c)) &&
                       (pcVar14[2] == 'l')) {
                      pcVar13 = pcVar14 + 2;
                    }
                  }
                }
                goto LAB_98011698;
              }
              if (puVar8 != (undefined *)0x20) {
code_r0x98010dd8:
                if (puVar8 != (undefined *)0x23) {
                  bVar1 = puVar8 == (undefined *)0x2b;
code_r0x98010de4:
                  if (!bVar1) {
                    if (puVar8 == (undefined *)0x2d) {
                      puVar15 = (undefined *)((uint)puVar15 | 4);
                    }
                    else if (puVar8 == (undefined *)0x30) {
                      puVar15 = (undefined *)((uint)puVar15 | 8);
                    }
                  }
                }
              }
            }
          }
          goto LAB_98011698;
        }
      }
    }
  }
LAB_98010c08:
  puVar5 = (undefined4 *)FUN_9800f950();
code_r0x98010c0c:
  *puVar5 = 0x16;
  FUN_9800d548();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x98010fd4:
  iVar19 = *(ushort *)(&UNK_98002b08 + (int)pbVar11 * 2) + 0x98010bfc;
  switch(pbVar11) {
  case (byte *)0x0:
  case (byte *)0x4:
  case (byte *)0x6:
    goto code_r0x98010dd8;
  default:
    goto code_r0x980110c8;
  case (byte *)0x2:
    goto code_r0x98010bfc;
  case (byte *)0x12:
    goto code_r0x98010ce4;
  case (byte *)0x17:
    goto code_r0x98010f18;
  case (byte *)0x19:
    goto code_r0x98010c68;
  case (byte *)0x20:
  case (byte *)0x24:
  case (byte *)0x25:
  case (byte *)0x26:
    goto code_r0x98010de4;
  case (byte *)0x22:
    goto code_r0x98010c0c;
  case (byte *)0x23:
  case (byte *)0x28:
code_r0x98010f08:
    if (bVar1) goto code_r0x98010f0c;
    break;
  case (byte *)0x2d:
    goto code_r0x98010d9c;
  case (byte *)0x2e:
    goto code_r0x98010f50;
  case (byte *)0x32:
    goto code_r0x98010cf4;
  case (byte *)0x34:
code_r0x98010f0c:
    puVar10 = (undefined *)(uint)(byte)pcVar14[3];
    bVar1 = puVar10 == (undefined *)0x34;
  case (byte *)0x2f:
    if (bVar1) {
code_r0x98010f18:
      pcVar13 = pcVar14 + 3;
code_r0x98010f20:
      goto LAB_98011698;
    }
    break;
  case (byte *)0x37:
    goto code_r0x98010f20;
  }
  if ((pbVar11 == (byte *)0x33) &&
     (puVar10 = (undefined *)(uint)(byte)pcVar14[3], puVar10 == (undefined *)0x32)) {
    pcVar13 = pcVar14 + 3;
    goto LAB_98011698;
  }
  if (pbVar11 == (byte *)0x64) goto LAB_98011698;
  bVar1 = pbVar11 == (byte *)0x69;
code_r0x98010f50:
  if ((((bVar1) || (pbVar11 == (byte *)0x6f)) || (pbVar11 == (byte *)0x75)) ||
     ((pbVar11 == (byte *)0x78 || (pbVar11 == (byte *)0x58)))) goto LAB_98011698;
  uStack_4c4 = 0;
  goto LAB_98010f7c;
code_r0x980110c8:
  while (pbVar11 = pbVar11 + 1, pIVar9 != (IMAGE_DOS_HEADER *)0x0) {
    pIVar9 = (IMAGE_DOS_HEADER *)(uint)*pbVar11;
  }
  pbVar7 = pbVar11 + (-1 - (int)puVar10);
  pbStack_4dc = pbVar7;
LAB_980114c8:
  if (iStack_4cc == 0) {
    pcVar16 = puStack_4d0 + (-iStack_4d4 - (int)pbVar7);
    puVar10 = puVar15;
    pcVar14 = pcVar16;
    if (puVar15 == (undefined *)0x0) {
      do {
        pcVar18 = pcVar14;
        if ((int)pcVar18 < 1) break;
        pcVar18 = pcVar18 + -1;
        FUN_98010a60(0x20,puVar4,&iStack_4e0);
        pcVar14 = pcVar18;
      } while (iStack_4e0 != -1);
    }
    FUN_98010af8(auStack_4d8,iVar2,puVar4,&iStack_4e0);
    if ((((uint)puVar15 & 8) != 0) && (pcVar14 = pcVar16, ((uint)puVar15 & 4) == 0)) {
      do {
        pcVar18 = pcVar14;
        if ((int)pcVar18 < 1) break;
        pcVar18 = pcVar18 + -1;
        FUN_98010a60(0x30,puVar4,&iStack_4e0);
        pcVar14 = pcVar18;
      } while (iStack_4e0 != -1);
    }
    puVar5 = (undefined4 *)FUN_98010af8(uVar3,pbStack_4dc,puVar4,&iStack_4e0);
    iVar6 = iStack_4e0;
    if ((-1 < iStack_4e0) && (((uint)puVar15 & 4) != 0)) {
      do {
        pcVar18 = pcVar16;
        iVar6 = iStack_4e0;
        if ((int)pcVar18 < 1) break;
        pcVar18 = pcVar18 + -1;
        puVar5 = (undefined4 *)FUN_98010a60(0x20,puVar4,&iStack_4e0);
        iVar6 = iStack_4e0;
        pcVar16 = pcVar18;
      } while (iStack_4e0 != -1);
    }
  }
LAB_98011698:
  cVar17 = pcVar13[1];
  puVar8 = (undefined *)(int)cVar17;
  pbVar7 = pbStack_4dc;
  pcVar14 = pcVar13;
  if (puVar8 == (undefined *)0x0) {
    halt_baddata();
  }
  goto LAB_98010d34;
}


/* ==== FUN_980116f8 @ 980116f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980116f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011750 @ 98011750 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011750(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980117b8 @ 980117b8 ==== */

ushort FUN_980117b8(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam9801bd78) & 4;
}


/* ==== FUN_980117e0 @ 980117e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980117e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011888 @ 98011888 ==== */

void FUN_98011888(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_980118b0 @ 980118b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980118b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011920 @ 98011920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011940 @ 98011940 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011940(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980119d8 @ 980119d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980119d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_9800dc78();
  piVar4 = (int *)&DAT_9801b530;
  iVar2 = -0x67fe3680;
  iVar3 = 0;
  do {
    if (piVar4[1] == 1) {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 0x1c;
      iVar1 = FUN_98011940();
      if (iVar1 == 0) {
        *(undefined4 *)(&DAT_9801b530 + iVar3 * 8) = 0;
        halt_baddata();
      }
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < -0x67fe49b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011a60 @ 98011a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011a60(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = FUN_9800dc78();
  iVar2 = FUN_98019fa0();
  if (iVar2 == 0) {
    FUN_9800faa8();
    FUN_9800fa78(0x1e);
    FUN_9800f408();
  }
  iVar1 = iVar1 * 8;
  if (*(int *)(&DAT_9801b530 + iVar1) == 0) {
    iVar2 = FUN_9800ddf0();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_9800f950();
      *puVar3 = 0xc;
    }
    else {
      FUN_98011ba0();
      if (*(int *)(&DAT_9801b530 + iVar1) == 0) {
        iVar4 = FUN_98011940();
        if (iVar4 == 0) {
          FUN_9800dd90();
          puVar3 = (undefined4 *)FUN_9800f950();
          *puVar3 = 0xc;
        }
        else {
          *(int *)(&DAT_9801b530 + iVar1) = iVar2;
        }
      }
      else {
        FUN_9800dd90();
      }
      FUN_98011b70();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011b70 @ 98011b70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011b70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011ba0 @ 98011ba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011ba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011c08 @ 98011c08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011c08(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [10];
  
  FUN_9800dc7c();
  iStack_30 = 0;
  uStack_2c = 0;
  aiStack_28[0] = 0;
  FUN_98011ba0();
  FUN_980127e8();
  iVar2 = FUN_98012768(&iStack_30);
  if (iVar2 != 0) {
    FUN_9800d620();
  }
  iVar2 = FUN_980126c8(&uStack_2c);
  if (iVar2 != 0) {
    FUN_9800d620();
  }
  iVar2 = FUN_98012718(aiStack_28);
  if (iVar2 != 0) {
    FUN_9800d620();
  }
  FUN_98014100();
  uRam9801cbb4 = 0;
  DAT_9801b65c = 0xffffffff;
  DAT_9801b650 = 0xffffffff;
  if (iRam9801cbb8 != 0) {
    FUN_9800dd90();
    iRam9801cbb8 = 0;
  }
  iVar2 = FUN_9801a288(0x9801cb08);
  if (iVar2 != -1) {
    iStack_30 = iRam9801cb08 * 0x3c;
    uRam9801cbb4 = 1;
    if (sRam9801cb4e != 0) {
      iStack_30 = iRam9801cb5c * 0x3c + iStack_30;
    }
    if ((sRam9801cba2 == 0) || (iRam9801cbb0 == 0)) {
      uStack_2c = 0;
      aiStack_28[0] = 0;
    }
    else {
      aiStack_28[0] = (iRam9801cbb0 - iRam9801cb5c) * 0x3c;
      uStack_2c = 1;
    }
  }
  iVar2 = iStack_30;
  piVar3 = (int *)FUN_980127d8();
  uVar1 = uStack_2c;
  *piVar3 = iVar2;
  puVar4 = (undefined4 *)FUN_980127b8();
  iVar2 = aiStack_28[0];
  *puVar4 = uVar1;
  piVar3 = (int *)FUN_980127c8();
  *piVar3 = iVar2;
  FUN_98011dac();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011dac @ 98011dac ==== */

void FUN_98011dac(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_98011dd0 @ 98011dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011dd0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int local_40 [16];
  
  uVar6 = FUN_9800dc70();
  local_40[0] = 0;
  if ((int)uVar6 == 1) {
    uVar1 = (((int)param_3 >> 2) + (uint)((int)param_3 < 0 && (param_3 & 3) != 0)) * 4;
    if (((param_3 == uVar1) && (param_3 != ((int)param_3 / 100) * 100)) ||
       (param_3 + 0x76c == ((int)(param_3 + 0x76c) / 400) * 400)) {
      puVar3 = &DAT_9801b700 + param_4 * 4;
    }
    else {
      puVar3 = &DAT_9801b734 + param_4 * 4;
    }
    uVar4 = param_3 - 1;
    iVar2 = (int)(((int)(param_3 + 299) / 400 - (int)uVar4 / 100) +
                  ((int)uVar4 >> 2) + (uint)((int)uVar4 < 0 && (uVar4 & 3) != 0) + param_3 * 0x16d +
                  *(int *)(puVar3 + -4) + 1 + -0x63db) % 7;
    iVar5 = (param_5 * 7 - iVar2) + *(int *)(puVar3 + -4) + 1 + param_6;
    if (iVar2 <= param_6) {
      iVar5 = iVar5 + -7;
    }
    if (param_5 == 5) {
      if (((param_3 == uVar1) && (param_3 != ((int)param_3 / 100) * 100)) ||
         (param_3 + 0x76c == ((int)(param_3 + 0x76c) / 400) * 400)) {
        iVar2 = *(int *)(&DAT_9801b700 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_9801b734 + param_4 * 4);
      }
      if (iVar2 < iVar5) {
        iVar5 = iVar5 + -7;
      }
    }
  }
  else {
    if (((param_3 == (((int)param_3 >> 2) + (uint)((int)param_3 < 0 && (param_3 & 3) != 0)) * 4) &&
        (param_3 != ((int)param_3 / 100) * 100)) ||
       (param_3 + 0x76c == ((int)(param_3 + 0x76c) / 400) * 400)) {
      puVar3 = &DAT_9801b700;
    }
    else {
      puVar3 = &DAT_9801b734;
    }
    iVar5 = *(int *)(puVar3 + param_4 * 4 + -4) + param_7;
  }
  iVar2 = ((param_8 * 0x3c + in_stack_00000054) * 0x3c + in_stack_0000005c) * 1000 +
          in_stack_00000064;
  uVar1 = param_3;
  if ((int)((ulonglong)uVar6 >> 0x20) != 1) {
    DAT_9801b660 = iVar5;
    DAT_9801b664 = iVar2;
    iVar5 = FUN_98012718(local_40);
    if (iVar5 != 0) {
      FUN_9800d620();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    DAT_9801b664 = local_40[0] * 1000 + DAT_9801b664;
    uVar1 = DAT_9801b650;
    iVar5 = DAT_9801b654;
    iVar2 = DAT_9801b658;
    DAT_9801b65c = param_3;
    if (DAT_9801b664 < 0) {
      DAT_9801b664 = DAT_9801b664 + 86400000;
      DAT_9801b660 = DAT_9801b660 + -1;
    }
    else if (86399999 < DAT_9801b664) {
      DAT_9801b660 = DAT_9801b660 + 1;
      DAT_9801b664 = DAT_9801b664 + -86400000;
    }
  }
  DAT_9801b658 = iVar2;
  DAT_9801b654 = iVar5;
  DAT_9801b650 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012048 @ 98012048 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_98012048(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_40 [16];
  
  iVar1 = FUN_9800dc74();
  aiStack_40[0] = 0;
  iVar2 = FUN_980126c8(aiStack_40);
  if (iVar2 != 0) {
    FUN_9800d620();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((aiStack_40[0] != 0) &&
     ((uVar3 = *(uint *)(iVar1 + 0x14), uVar3 != DAT_9801b650 || (uVar3 != DAT_9801b65c)))) {
    if (iRam9801cbb4 == 0) {
      iVar2 = 3;
      iVar4 = 2;
      iVar6 = 0xb;
      iVar5 = 1;
      if ((int)uVar3 < 0x6b) {
        iVar2 = 4;
        iVar4 = 1;
        iVar6 = 10;
        iVar5 = 5;
      }
      FUN_98011dd0(1,1,uVar3,iVar2,iVar4,0,0,2);
      FUN_98011dd0(0,1,*(uint *)(iVar1 + 0x14),iVar6,iVar5,0,0,2);
    }
    else {
      if (sRam9801cba0 == 0) {
        FUN_98011dd0(1,1,uVar3,(uint)uRam9801cba2,(uint)uRam9801cba6,(uint)uRam9801cba4,0,
                     (uint)uRam9801cba8);
      }
      else {
        FUN_98011dd0(1,0,uVar3,(uint)uRam9801cba2,0,0,(uint)uRam9801cba6,(uint)uRam9801cba8);
      }
      if (sRam9801cb4c == 0) {
        FUN_98011dd0(0,1,*(uint *)(iVar1 + 0x14),(uint)uRam9801cb4e,(uint)uRam9801cb52,
                     (uint)uRam9801cb50,0,(uint)uRam9801cb54);
      }
      else {
        FUN_98011dd0(0,0,*(uint *)(iVar1 + 0x14),(uint)uRam9801cb4e,0,0,(uint)uRam9801cb52,
                     (uint)uRam9801cb54);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012330 @ 98012330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980123a4 @ 980123a4 ==== */

void FUN_980123a4(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_980123d0 @ 980123d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980123d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801242c @ 9801242c ==== */

void FUN_9801242c(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_98012450 @ 98012450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012450(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_9800dc78();
  puVar1 = (uint *)((ulonglong)uVar3 >> 0x20);
  if ((puVar1 != (uint *)0x0) && (FUN_9800dcf0(puVar1,0xff,0x24), (int)uVar3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined4 *)FUN_9800f950();
  *puVar2 = 0x16;
  FUN_9800d548();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980126c8 @ 980126c8 ==== */

undefined4 FUN_980126c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = uRam9801b66c;
  }
  return uVar2;
}


/* ==== FUN_98012718 @ 98012718 ==== */

undefined4 FUN_98012718(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0x16;
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

undefined4 FUN_98012768(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0x16;
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

undefined4 FUN_980127b8(void)

{
  return 0x9801b66c;
}


/* ==== FUN_980127c8 @ 980127c8 ==== */

undefined4 * FUN_980127c8(void)

{
  return &DAT_9801b670;
}


/* ==== FUN_980127d8 @ 980127d8 ==== */

undefined4 * FUN_980127d8(void)

{
  return &DAT_9801b668;
}


/* ==== FUN_980127e8 @ 980127e8 ==== */

undefined4 FUN_980127e8(void)

{
  return 0x9801b6f8;
}


/* ==== FUN_980127f8 @ 980127f8 ==== */

undefined4 FUN_980127f8(void)

{
  return 0x9801b768;
}


/* ==== FUN_98012970 @ 98012970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980129e0 @ 980129e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980129e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012a30 @ 98012a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012a30(uint param_1)

{
  if ((0x9801b767 < param_1) && (param_1 < 0x9801b9c9)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
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

undefined4 FUN_98012ac8(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((((int)param_1 < 0) || (DAT_9801cc6c <= param_1)) ||
      (piVar4 = (int *)((&DAT_9801cc80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48),
      (*(byte *)(piVar4 + 1) & 1) == 0)) || (*piVar4 == -1)) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 9;
    piVar4 = (int *)FUN_9800f988();
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


/* ==== FUN_98012b60 @ 98012b60 ==== */

undefined4 FUN_98012b60(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_9800f988();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800f950();
    uVar2 = 0xffffffff;
    *puVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (DAT_9801cc6c <= param_1)) ||
          (puVar1 = (undefined4 *)((&DAT_9801cc80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48),
          (*(byte *)(puVar1 + 1) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_9800f988();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 9;
    FUN_9800d548();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* ==== FUN_98012c20 @ 98012c20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012c20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uStack00000014;
  
  uVar1 = FUN_9800dc7c();
  puVar2 = &DAT_9801cc80;
  iVar3 = (&DAT_9801cc80)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x48;
  uStack00000014 = uVar1;
  if (*(int *)(iVar3 + 8) == 0) {
    FUN_98011ba0();
    puVar2 = *(undefined4 **)(iVar3 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_98011940();
      puVar2 = (undefined4 *)(*(int *)(iVar3 + 8) + 1);
      *(undefined4 **)(iVar3 + 8) = puVar2;
    }
    uVar1 = FUN_98012ce8();
  }
  func_0x9801acf0(puVar2[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x48 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

undefined4 FUN_98012d48(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar1 = FUN_98011750();
  if (uVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    DAT_9801cc6c = 0x20;
    DAT_9801cc80 = uVar1;
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
      } while (puVar3 < (undefined1 *)(DAT_9801cc80 + 0x900));
    }
    iVar7 = 3;
    do {
      puVar6 = (undefined4 *)(iVar4 + DAT_9801cc80);
      iVar4 = iVar4 + 0x48;
      *(undefined1 *)(puVar6 + 1) = 0xc1;
      *puVar6 = 0xfffffffe;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_98012ea8 @ 98012ea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012ea8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = FUN_9800dc7c();
  iVar2 = FUN_98012b60(uVar1);
  if (iVar2 != -1) {
    if (((uVar1 == 1) && ((*(byte *)(DAT_9801cc80 + 0x94) & 1) != 0)) ||
       ((uVar1 == 2 && ((*(byte *)(DAT_9801cc80 + 0x4c) & 1) != 0)))) {
      iVar2 = FUN_98012b60(2);
      iVar3 = FUN_98012b60(1);
      if (iVar3 == iVar2) goto LAB_98012f34;
    }
    FUN_98012b60(uVar1);
    bVar4 = FUN_98008538();
    if (!bVar4) {
      iVar2 = thunk_FUN_98008b10();
      goto LAB_98012f38;
    }
  }
LAB_98012f34:
  iVar2 = 0;
LAB_98012f38:
  FUN_98012ac8(uVar1);
  *(undefined1 *)((&DAT_9801cc80)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x48 + 4) = 0;
  if (iVar2 != 0) {
    FUN_9800f9c0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012f90 @ 98012f90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012f90(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uStack00000014;
  
  uStack00000014 = FUN_9800dc74();
  if (uStack00000014 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_9800f988();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < DAT_9801cc6c)) {
      iVar2 = (int)uStack00000014 >> 5;
      iVar3 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)((&DAT_9801cc80)[iVar2] + iVar3 + 4) & 1) != 0) {
        FUN_98012c20();
        if ((*(byte *)((&DAT_9801cc80)[iVar2] + iVar3 + 4) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_9800f950();
          *puVar1 = 9;
        }
        else {
          FUN_98012ea8();
        }
        FUN_980130b8();
        halt_baddata();
      }
    }
    puVar1 = (undefined4 *)FUN_9800f988();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 9;
    FUN_9800d548();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980130b8 @ 980130b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980130b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980130f0 @ 980130f0 ==== */

undefined4 FUN_980130f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0x16;
    FUN_9800d548();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_98013130 @ 98013130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013198 @ 98013198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013268 @ 98013268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013268(void)

{
  FUN_9800dc68();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980133b0 @ 980133b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980133b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980133e8 @ 980133e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980133e8(void)

{
  FUN_9800dc5c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013630 @ 98013630 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013630(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uStack00000014;
  
  uStack00000014 = FUN_9800dc6c();
  if (uStack00000014 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_9800f988();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < DAT_9801cc6c)) {
      iVar2 = (int)uStack00000014 >> 5;
      iVar3 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)((&DAT_9801cc80)[iVar2] + iVar3 + 4) & 1) != 0) {
        FUN_98012c20();
        if ((*(byte *)((&DAT_9801cc80)[iVar2] + iVar3 + 4) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_9800f950();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_9800f988();
          *puVar1 = 0;
        }
        else {
          FUN_980133e8();
        }
        FUN_98013774();
        halt_baddata();
      }
    }
    puVar1 = (undefined4 *)FUN_9800f988();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 9;
    FUN_9800d548();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013774 @ 98013774 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013774(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980137b8 @ 980137b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980137b8(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar5;
  int *piVar4;
  int iVar6;
  
  uVar1 = FUN_9800dc74();
  if (uVar1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 9;
    halt_baddata();
  }
  if (((int)uVar1 < 0) || (DAT_9801cc6c <= uVar1)) {
LAB_98013808:
    puVar2 = (undefined4 *)FUN_9800f950();
    *puVar2 = 9;
    FUN_9800d548();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = (uVar1 & 0x1f) * 0x48;
  if ((*(byte *)(iVar6 + (&DAT_9801cc80)[(int)uVar1 >> 5] + 4) & 1) == 0) goto LAB_98013808;
  FUN_98012c20();
  if ((*(byte *)(iVar6 + (&DAT_9801cc80)[(int)uVar1 >> 5] + 4) & 1) != 0) {
    uVar3 = FUN_98012b60(uVar1);
    bVar5 = FUN_9801a580(uVar3);
    if (bVar5) {
      iVar6 = 0;
    }
    else {
      iVar6 = thunk_FUN_98008b10();
    }
    if (iVar6 == 0) goto LAB_980138b8;
    piVar4 = (int *)FUN_9800f988();
    *piVar4 = iVar6;
  }
  puVar2 = (undefined4 *)FUN_9800f950();
  *puVar2 = 9;
LAB_980138b8:
  FUN_980138f0();
  halt_baddata();
}


/* ==== FUN_980138f0 @ 980138f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980138f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013998 @ 98013998 ==== */

void FUN_98013998(void)

{
  DAT_9801cbc4 = &LAB_98013540;
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


/* ==== FUN_98013a18 @ 98013a18 ==== */

int FUN_98013a18(int param_1)

{
  if (param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_98013a30 @ 98013a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013ad8 @ 98013ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013ad8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013b80 @ 98013b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013b80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013ce0 @ 98013ce0 ==== */

void FUN_98013ce0(ushort *param_1,uint *param_2)

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


/* ==== FUN_98013dc0 @ 98013dc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013dc0(void)

{
  FUN_9800dc7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013e68 @ 98013e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013ef0 @ 98013ef0 ==== */

bool FUN_98013ef0(void)

{
  return (uRam9801c034 | 1) == uRam9801cbd0;
}


/* ==== FUN_98014010 @ 98014010 ==== */

undefined4 FUN_98014010(undefined4 *param_1,uint *param_2,uint param_3,ushort param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 == (uint *)0x0) && (param_3 != 0)) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0xffffffff;
    }
    if (0x7fffffff < param_3) {
      puVar1 = (undefined4 *)FUN_9800f950();
      *puVar1 = 0x16;
      FUN_9800d548();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
        FUN_9800dcf0(param_2,0,param_3);
      }
      puVar1 = (undefined4 *)FUN_9800f950();
      *puVar1 = 0x2a;
      puVar1 = (undefined4 *)FUN_9800f950();
      return *puVar1;
    }
    if (param_2 != (uint *)0x0) {
      if (param_3 == 0) {
        puVar1 = (undefined4 *)FUN_9800f950();
        *puVar1 = 0x22;
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


/* ==== FUN_98014018 @ 98014018 ==== */

ushort FUN_98014018(uint param_1)

{
  return *(ushort *)((param_1 & 0xff) * 2 + *(int *)(DAT_9801bd88 + 200)) & 0x8000;
}


/* ==== FUN_98014038 @ 98014038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014038(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9800dc78();
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  if ((uVar4 == 0) || (trapWord(6,uVar4,0), (uint)uVar5 <= 0xfffff000 / uVar4)) {
    uVar4 = uVar4 * (uint)uVar5;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    do {
      if (uVar4 < 0xfffff001) {
        uVar2 = FUN_98019fa0();
        iVar3 = FUN_98018ad0(uVar2,8,uVar4);
        if (iVar3 != 0) {
          halt_baddata();
        }
      }
      if (DAT_9801c970 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          halt_baddata();
        }
        *param_3 = 0xc;
        halt_baddata();
      }
      iVar3 = FUN_9800e4e0();
    } while (iVar3 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_9800f950();
    *puVar1 = 0xc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014100 @ 98014100 ==== */

undefined4 FUN_98014100(void)

{
  return 0;
}


/* ==== FUN_98014110 @ 98014110 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014110(void)

{
  int iVar1;
  int iVar2;
  
  FUN_9800dc70();
  FUN_98011ba0();
  for (iVar2 = 3; iVar2 < DAT_9801cd84; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + DAT_9801cd80);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
        FUN_9800eca8();
      }
      if (0x13 < iVar2) {
        FUN_9800dd90();
        *(undefined4 *)(iVar2 * 4 + DAT_9801cd80) = 0;
      }
    }
  }
  FUN_980141d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980141d0 @ 980141d0 ==== */

void FUN_980141d0(void)

{
  FUN_98011920();
  return;
}


/* ==== FUN_98014228 @ 98014228 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_98014228(void)

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
  
  uVar18 = FUN_9800dc54();
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
    uVar13 = uRam9801c00c - 1;
    iVar5 = (int)uRam9801c00c >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam9801c00c < 0 && (uRam9801c00c & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam9801c00c +
                    (iVar5 + (uint)((int)uRam9801c00c < 0 && (uRam9801c00c & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_98014370;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_98014370:
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
    if (iVar16 < (int)(iRam9801c008 - uRam9801c00c)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam9801c008 < iVar16) {
        iVar15 = (int)uRam9801c010 >> 5;
        if (iVar16 < iRam9801c004) {
          iVar5 = iVar15 + (uint)((int)uRam9801c010 < 0 && (uRam9801c010 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam9801c018 + iVar16;
          uVar13 = uRam9801c010 +
                   (iVar15 + (uint)((int)uRam9801c010 < 0 && (uRam9801c010 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam9801c010 < 0 && (uRam9801c010 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam9801c010 +
                   (iVar15 + (uint)((int)uRam9801c010 < 0 && (uRam9801c010 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam9801c018 + iRam9801c004;
        }
      }
      else {
        uVar14 = iRam9801c008 - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam9801c00c < 0 && (uRam9801c00c & 0x1f) != 0);
        uVar9 = 0x1f - (uRam9801c00c +
                       (iVar5 + (uint)((int)uRam9801c00c < 0 && (uRam9801c00c & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_980145dc;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_980145dc:
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
        uVar13 = uRam9801c010 + 1;
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
  uVar9 = 0x1f - uRam9801c010;
  if (iRam9801c014 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam9801c014 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014940 @ 98014940 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_98014940(void)

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
  
  uVar18 = FUN_9800dc54();
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
    uVar13 = uRam9801c024 - 1;
    iVar5 = (int)uRam9801c024 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam9801c024 < 0 && (uRam9801c024 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam9801c024 +
                    (iVar5 + (uint)((int)uRam9801c024 < 0 && (uRam9801c024 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_98014a88;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_98014a88:
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
    if (iVar16 < (int)(iRam9801c020 - uRam9801c024)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam9801c020 < iVar16) {
        iVar15 = (int)uRam9801c028 >> 5;
        if (iVar16 < iRam9801c01c) {
          iVar5 = iVar15 + (uint)((int)uRam9801c028 < 0 && (uRam9801c028 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam9801c030 + iVar16;
          uVar13 = uRam9801c028 +
                   (iVar15 + (uint)((int)uRam9801c028 < 0 && (uRam9801c028 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam9801c028 < 0 && (uRam9801c028 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam9801c028 +
                   (iVar15 + (uint)((int)uRam9801c028 < 0 && (uRam9801c028 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam9801c030 + iRam9801c01c;
        }
      }
      else {
        uVar14 = iRam9801c020 - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam9801c024 < 0 && (uRam9801c024 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam9801c024 +
                       (iVar5 + (uint)((int)uRam9801c024 < 0 && (uRam9801c024 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_98014cf4;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_98014cf4:
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
        uVar13 = uRam9801c028 + 1;
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
  uVar9 = 0x1f - uRam9801c028;
  if (iRam9801c02c == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam9801c02c != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015058 @ 98015058 ==== */

/* WARNING: Control flow encountered bad instruction data */
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

void FUN_98015058(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r10;
  
  FUN_9800dc54();
  if (in_r10 != 0) {
    for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x98015130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)UNK_98003e80 * 4 + -0x67feb2cc))();
    return;
  }
  puVar2 = (undefined4 *)FUN_9800f950();
  *puVar2 = 0x16;
  FUN_9800d548();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980159b8 @ 980159b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980159b8(void)

{
  FUN_9800dc40();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980165c0 @ 980165c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980165c0(undefined4 param_1,undefined4 param_2,uint *param_3)

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
  
  uVar10 = FUN_9800dc74();
  param_3[2] = 0;
  sVar7 = 0x404e;
  param_3[1] = 0;
  *param_3 = 0;
  if ((int)uVar10 != 0) {
    do {
      pcVar9 = (char *)((ulonglong)uVar10 >> 0x20);
      FUN_9800d650();
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
    if (*param_3 != 0) goto LAB_9801683c;
  }
  do {
    uVar2 = param_3[2];
    param_3[2] = uVar2 << 0x10;
    uVar6 = param_3[1] >> 0x10;
    *param_3 = uVar6;
    sVar7 = sVar7 + -0x10;
    param_3[1] = param_3[1] << 0x10 | uVar2 >> 0x10;
  } while (uVar6 == 0);
LAB_9801683c:
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


/* ==== FUN_98016858 @ 98016858 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016858(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016938 @ 98016938 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016938(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980169b0 @ 980169b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980169b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016a10 @ 98016a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016a10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016b00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016b90 @ 98016b90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016b90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016d68 @ 98016d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016d68(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9800dc78();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  piVar3 = (int *)*(int *)(iVar2 + 0x38);
  piVar1 = (int *)(iVar2 + 0x38);
  do {
    piVar6 = piVar3;
    if (piVar6 == (int *)0x0) {
LAB_98016e0c:
      piVar3 = (int *)FUN_98016b90();
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
      goto LAB_98016e0c;
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


/* ==== FUN_98016e88 @ 98016e88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016e88(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  ushort *local_50 [20];
  
  uVar12 = FUN_9800dc6c();
  iVar2 = (int)((ulonglong)uVar12 >> 0x20);
  iVar3 = (int)uVar12;
  if (*(undefined4 **)(iVar3 + 0x38) == (undefined4 *)0x0) {
    halt_baddata();
  }
  puVar8 = (undefined4 *)(iVar3 + 0x38);
  puVar9 = (undefined4 *)0x0;
  puVar10 = *(undefined4 **)(iVar3 + 0x38);
  while (((uint)puVar10[2] < *param_3 || ((param_4 != 0 && (puVar10[1] != param_4))))) {
    puVar11 = (undefined4 *)*puVar10;
    puVar8 = puVar10;
    puVar9 = puVar10;
    puVar10 = puVar11;
    if (puVar11 == (undefined4 *)0x0) {
      halt_baddata();
    }
  }
  local_50[0] = (ushort *)puVar10[1];
  if (*(code **)(iVar2 + 0x584) == (code *)0x0) {
    iVar2 = func_0x9801ad20(local_50,param_3,0x60001000,4,*(undefined4 *)(iVar2 + 0x590));
  }
  else {
    iVar2 = (**(code **)(iVar2 + 0x584))(iVar2,local_50,param_3);
  }
  if (iVar2 < 0) {
    halt_baddata();
  }
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*(ushort *)param_3;
  if (*(int *)(iVar3 + 0x1c) == puVar10[2]) {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
  }
  puVar6 = *(ushort **)(iVar3 + 0x40);
  if (((*(byte *)((int)puVar6 + 5) & 0x10) == 0) ||
     (puVar6 + (uint)*puVar6 * 8 != (ushort *)puVar10[1])) {
    if (puVar9 == (undefined4 *)0x0) {
      puVar6 = *(ushort **)(iVar3 + 0x28);
    }
    else {
      puVar6 = (ushort *)(puVar9[2] + puVar9[1]);
    }
    if ((*(byte *)((int)puVar6 + 5) & 0x10) == 0) {
      puVar7 = puVar6;
      do {
        puVar6 = puVar7 + (uint)*puVar7 * 8;
        if ((*(ushort **)(iVar3 + 0x2c) <= puVar6) || (*puVar6 == 0)) {
          bVar1 = puVar6 != local_50[0];
          puVar6 = puVar7;
          if (bVar1) {
            halt_baddata();
          }
          break;
        }
        puVar7 = puVar6;
      } while ((*(byte *)((int)puVar6 + 5) & 0x10) == 0);
    }
  }
  *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xef;
  iVar2 = puVar10[2];
  puVar10[1] = puVar10[1] + *param_3;
  uVar4 = *param_3;
  puVar10[2] = iVar2 - uVar4;
  if (iVar2 - uVar4 == 0) {
    if (puVar10[1] == *(int *)(iVar3 + 0x2c)) {
      *(undefined1 *)((int)local_50[0] + 5) = 0x10;
      *(ushort **)(iVar3 + 0x40) = local_50[0];
    }
    else {
      *(undefined1 *)((int)local_50[0] + 5) = 0;
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x28);
    }
    *puVar8 = *puVar10;
    *puVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x4c);
    *(undefined4 **)(*(int *)(iVar3 + 0x18) + 0x4c) = puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + -1;
  }
  else {
    *(undefined1 *)((int)local_50[0] + 5) = 0x10;
    *(ushort **)(iVar3 + 0x40) = local_50[0];
  }
  *(undefined1 *)(local_50[0] + 2) = *(undefined1 *)(puVar6 + 2);
  uVar4 = *param_3;
  uVar5 = (ushort)(uVar4 >> 4);
  *local_50[0] = uVar5;
  local_50[0][1] = *puVar6;
  if ((*(byte *)((int)local_50[0] + 5) & 0x10) == 0) {
    local_50[0][(uVar4 >> 4 & 0xffff) * 8 + 1] = uVar5;
  }
  if (*(int *)(iVar3 + 0x1c) == 0) {
    for (puVar8 = *(undefined4 **)(iVar3 + 0x38); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      if (*(uint *)(iVar3 + 0x1c) <= (uint)puVar8[2]) {
        *(undefined4 *)(iVar3 + 0x1c) = puVar8[2];
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017118 @ 98017118 ==== */

undefined4 FUN_98017118(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
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

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017170(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_9800dc6c();
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  puVar8 = (ushort *)uVar10;
  puVar9 = puVar8 + (uint)puVar8[1] * -8;
  if (puVar9 != puVar8) {
    if (((*(byte *)((int)puVar9 + 5) & 1) == 0) && ((uint)*puVar9 + *param_3 < 0xf001)) {
      if (param_4 != 0) {
        puVar7 = *(undefined4 **)(puVar8 + 6);
        puVar6 = *(undefined4 **)(puVar8 + 4);
        if (((ushort *)*puVar7 == (ushort *)puVar6[1]) && ((ushort *)*puVar7 == puVar8 + 4)) {
          *puVar7 = puVar6;
          puVar6[1] = puVar7;
          if (puVar6 == puVar7) {
            uVar2 = *puVar8;
            if (uVar2 < 0x80) {
              iVar3 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
            }
          }
        }
        if ((*(byte *)((int)puVar8 + 5) & 4) != 0) {
          uVar5 = (uint)*puVar8 * 0x10 - 0x18;
          if (((*(byte *)((int)puVar8 + 5) & 2) != 0) && (4 < uVar5)) {
            uVar5 = (uint)*puVar8 * 0x10 - 0x1c;
          }
          func_0x9801ad50(puVar8 + 0xc,uVar5,0xfeeefeee);
        }
        param_4 = 0;
        *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar8;
      }
      puVar7 = *(undefined4 **)(puVar9 + 6);
      puVar6 = *(undefined4 **)(puVar9 + 4);
      if (((ushort *)*puVar7 == (ushort *)puVar6[1]) && ((ushort *)*puVar7 == puVar9 + 4)) {
        *puVar7 = puVar6;
        puVar6[1] = puVar7;
        if (puVar6 == puVar7) {
          uVar2 = *puVar9;
          if (uVar2 < 0x80) {
            iVar3 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
          }
        }
      }
      if ((*(byte *)((int)puVar9 + 5) & 4) != 0) {
        uVar5 = (uint)*puVar9 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar9 + 5) & 2) != 0) && (4 < uVar5)) {
          uVar5 = (uint)*puVar9 * 0x10 - 0x1c;
        }
        func_0x9801ad50(puVar9 + 0xc,uVar5,0xfeeefeee);
      }
      bVar1 = *(byte *)((int)puVar8 + 5);
      *(byte *)((int)puVar9 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(puVar9 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar9;
      }
      *param_3 = (uint)*puVar9 + *param_3;
      *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar9;
      *puVar9 = (ushort)*param_3;
      puVar8 = puVar9;
      if ((*(byte *)((int)puVar9 + 5) & 0x10) == 0) {
        puVar9[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
  if ((*(byte *)((int)puVar8 + 5) & 0x10) == 0) {
    puVar9 = puVar8 + *param_3 * 8;
    if (((*(byte *)((int)puVar9 + 5) & 1) == 0) && ((uint)*puVar9 + *param_3 < 0xf001)) {
      if (param_4 != 0) {
        puVar7 = *(undefined4 **)(puVar8 + 6);
        puVar6 = *(undefined4 **)(puVar8 + 4);
        if (((ushort *)*puVar7 == (ushort *)puVar6[1]) && ((ushort *)*puVar7 == puVar8 + 4)) {
          *puVar7 = puVar6;
          puVar6[1] = puVar7;
          if (puVar6 == puVar7) {
            uVar2 = *puVar8;
            if (uVar2 < 0x80) {
              iVar3 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
            }
          }
        }
        if ((*(byte *)((int)puVar8 + 5) & 4) != 0) {
          uVar5 = (uint)*puVar8 * 0x10 - 0x18;
          if (((*(byte *)((int)puVar8 + 5) & 2) != 0) && (4 < uVar5)) {
            uVar5 = (uint)*puVar8 * 0x10 - 0x1c;
          }
          func_0x9801ad50(puVar8 + 0xc,uVar5,0xfeeefeee);
        }
        *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar8;
      }
      bVar1 = *(byte *)((int)puVar9 + 5);
      *(byte *)((int)puVar8 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(puVar8 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar8;
      }
      puVar7 = *(undefined4 **)(puVar9 + 6);
      puVar6 = *(undefined4 **)(puVar9 + 4);
      if (((ushort *)*puVar7 == (ushort *)puVar6[1]) && ((ushort *)*puVar7 == puVar9 + 4)) {
        *puVar7 = puVar6;
        puVar6[1] = puVar7;
        if (puVar6 == puVar7) {
          uVar2 = *puVar9;
          if (uVar2 < 0x80) {
            iVar3 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar3 + iVar4) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar3 + iVar4);
          }
        }
      }
      if ((*(byte *)((int)puVar9 + 5) & 4) != 0) {
        uVar5 = (uint)*puVar9 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar9 + 5) & 2) != 0) && (4 < uVar5)) {
          uVar5 = (uint)*puVar9 * 0x10 - 0x1c;
        }
        func_0x9801ad50(puVar9 + 0xc,uVar5,0xfeeefeee);
      }
      *param_3 = (uint)*puVar9 + *param_3;
      *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar9;
      *puVar8 = (ushort)*param_3;
      if ((*(byte *)((int)puVar8 + 5) & 0x10) == 0) {
        puVar8[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017578 @ 98017578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017578(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar13 = FUN_9800dc78();
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


/* ==== FUN_980176b0 @ 980176b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980176b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_30;
  undefined4 auStack_2c [9];
  undefined4 uStack_8;
  
  iVar1 = FUN_9800dc78();
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x14) & 0x40000) != 0) &&
       (uVar2 = FUN_9801abc0(), *(byte *)(iVar1 + 0x17b) != uVar2)) {
      func_0x9801ad30(0xf4,iVar1,uStack_8,0x520,0);
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x58);
    while ((undefined4 *)(iVar1 + 0x58) != puVar5) {
      puVar6 = (undefined4 *)*puVar5;
      auStack_2c[0] = 0;
      puStack_30 = puVar5;
      func_0x9801ad40(&puStack_30,auStack_2c,0x8000,*(undefined4 *)(iVar1 + 0x590));
      puVar5 = puVar6;
    }
    if ((*(uint *)(iVar1 + 0x14) & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x580) = 0;
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x48) = 0;
    while (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar5;
      auStack_2c[0] = 0;
      puStack_30 = puVar5;
      func_0x9801ad40(&puStack_30,auStack_2c,0x8000,*(undefined4 *)(iVar1 + 0x590));
      puVar5 = puVar6;
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x590);
    uVar2 = 0x40;
    do {
      uVar2 = uVar2 + 0xff & 0xff;
      iVar3 = *(int *)((uVar2 + 0x18) * 4 + iVar1);
      if (iVar3 != 0) {
        FUN_98017118(iVar3,uVar4);
      }
    } while (uVar2 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980177c8 @ 980177c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980177c8(undefined4 param_1,undefined4 param_2,ushort *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort uVar9;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulonglong uVar13;
  uint local_60 [24];
  
  uVar13 = FUN_9800dc60();
  iVar3 = (int)(uVar13 >> 0x20);
  if (*(uint *)(iVar3 + 0x1c) < param_5) {
    halt_baddata();
  }
  local_60[0] = (uint)*param_3;
  bVar1 = *(byte *)((int)param_3 + 5);
  puVar12 = param_3 + local_60[0] * 8;
  if ((bVar1 & 0x10) == 0) {
    bVar2 = *(byte *)((int)puVar12 + 5);
    if ((bVar2 & 1) != 0) {
      halt_baddata();
    }
    local_60[0] = *puVar12 + local_60[0];
    if (local_60[0] < param_5) {
      halt_baddata();
    }
    puVar8 = *(undefined4 **)(puVar12 + 6);
    puVar6 = *(undefined4 **)(puVar12 + 4);
    if (((ushort *)*puVar8 == (ushort *)puVar6[1]) && ((ushort *)*puVar8 == puVar12 + 4)) {
      *puVar8 = puVar6;
      puVar6[1] = puVar8;
      if ((puVar6 == puVar8) && (uVar9 = *puVar12, uVar9 < 0x80)) {
        iVar4 = ((uVar9 >> 5) + 0x58) * 4;
        *(uint *)(iVar4 + iVar3) = 1 << (uVar9 & 0x1f) ^ *(uint *)(iVar4 + iVar3);
      }
    }
    if ((*(byte *)((int)puVar12 + 5) & 4) != 0) {
      uVar10 = (uint)*puVar12 * 0x10 - 0x18;
      if (((*(byte *)((int)puVar12 + 5) & 2) != 0) && (4 < uVar10)) {
        uVar10 = (uint)*puVar12 * 0x10 - 0x1c;
      }
      func_0x9801ad50(puVar12 + 0xc,uVar10,0xfeeefeee);
    }
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar12;
    uVar10 = local_60[0];
  }
  else {
    local_60[0] = (param_5 - local_60[0]) * 0x10 + 0xffff & 0xffff0000;
    iVar4 = FUN_98016e88(iVar3,*(undefined4 *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3),local_60
                         ,(int)puVar12);
    if (iVar4 == 0) {
      halt_baddata();
    }
    local_60[0] = local_60[0] >> 4;
    iVar4 = FUN_98017170(iVar3,iVar4,(int *)local_60,0);
    bVar2 = *(byte *)(iVar4 + 5);
    uVar10 = *param_3 + local_60[0];
    if (*param_3 + local_60[0] < param_5) {
      FUN_98017578(iVar3,iVar4,local_60[0]);
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + local_60[0];
      halt_baddata();
    }
  }
  local_60[0] = uVar10 - param_5;
  uVar10 = (uint)*param_3 * 0x10 - (uint)*(byte *)(param_3 + 3);
  if (local_60[0] < 3) {
    param_5 = local_60[0] + param_5;
    local_60[0] = 0;
  }
  if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (ushort)param_5;
  if (local_60[0] == 0) {
    *(byte *)((int)param_3 + 5) = *(byte *)((int)param_3 + 5) | bVar2 & 0x10;
    *(char *)(param_3 + 3) = (char)(param_5 << 4) - (char)param_4;
    *param_3 = uVar9;
    if ((bVar2 & 0x10) == 0) {
      param_3[(param_5 & 0xffff) * 8 + 1] = uVar9;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3) + 0x40) = param_3;
    }
    goto LAB_98017d0c;
  }
  puVar12 = param_3 + param_5 * 8;
  *param_3 = uVar9;
  *(char *)(param_3 + 3) = (char)param_5 * '\x10' - (char)param_4;
  puVar12[1] = uVar9;
  bVar1 = *(byte *)(param_3 + 2);
  *(byte *)(puVar12 + 2) = bVar1;
  uVar9 = (ushort)local_60[0];
  if ((bVar2 & 0x10) == 0) {
    puVar11 = puVar12 + local_60[0] * 8;
    bVar1 = *(byte *)((int)puVar11 + 5);
    if ((bVar1 & 1) == 0) {
      puVar8 = *(undefined4 **)(puVar11 + 6);
      puVar6 = *(undefined4 **)(puVar11 + 4);
      if (((ushort *)*puVar8 == (ushort *)puVar6[1]) && ((ushort *)*puVar8 == puVar11 + 4)) {
        *puVar8 = puVar6;
        puVar6[1] = puVar8;
        if ((puVar6 == puVar8) && (uVar9 = *puVar11, uVar9 < 0x80)) {
          iVar4 = ((uVar9 >> 5) + 0x58) * 4;
          *(uint *)(iVar4 + iVar3) = 1 << (uVar9 & 0x1f) ^ *(uint *)(iVar4 + iVar3);
        }
      }
      if ((*(byte *)((int)puVar11 + 5) & 4) != 0) {
        uVar5 = (uint)*puVar11 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar11 + 5) & 2) != 0) && (4 < uVar5)) {
          uVar5 = (uint)*puVar11 * 0x10 - 0x1c;
        }
        func_0x9801ad50(puVar11 + 0xc,uVar5,0xfeeefeee);
      }
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar11;
      local_60[0] = *puVar11 + local_60[0];
      *(byte *)((int)puVar12 + 5) = bVar1;
      if (0xf000 < local_60[0]) {
        FUN_98017578(iVar3,puVar12,local_60[0]);
        goto LAB_98017d0c;
      }
      *puVar12 = (ushort)local_60[0];
      if ((bVar1 & 0x10) == 0) {
        puVar12[local_60[0] * 8 + 1] = (ushort)local_60[0];
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar12;
      }
      *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
      uVar5 = local_60[0] & 0xffff;
      if (0x7f < uVar5) {
        for (piVar7 = *(int **)(iVar3 + 0x180);
            ((int *)(iVar3 + 0x180) != piVar7 && (*(ushort *)(piVar7 + -2) < uVar5));
            piVar7 = (int *)*piVar7) {
        }
        goto LAB_98017cd4;
      }
      goto LAB_98017c74;
    }
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xef;
    *puVar12 = uVar9;
    puVar12[local_60[0] * 8 + 1] = uVar9;
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
    if ((local_60[0] & 0xffff) < 0x80) goto LAB_98017b24;
    for (piVar7 = *(int **)(iVar3 + 0x180);
        ((int *)(iVar3 + 0x180) != piVar7 &&
        ((uint)*(ushort *)(piVar7 + -2) < (local_60[0] & 0xffff))); piVar7 = (int *)*piVar7) {
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + iVar3) + 0x40) = puVar12;
    *(byte *)((int)puVar12 + 5) = bVar2;
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xf8;
    *puVar12 = uVar9;
    if ((local_60[0] & 0xffff) < 0x80) {
LAB_98017b24:
      uVar5 = local_60[0] & 0xffff;
LAB_98017c74:
      piVar7 = (int *)((uVar5 + 0x30) * 8 + iVar3);
      if ((int *)*piVar7 == piVar7) {
        iVar4 = ((*puVar12 >> 5) + 0x58) * 4;
        *(uint *)(iVar4 + iVar3) = 1 << (*puVar12 & 0x1f) | *(uint *)(iVar4 + iVar3);
      }
    }
    else {
      for (piVar7 = *(int **)(iVar3 + 0x180);
          ((int *)(iVar3 + 0x180) != piVar7 &&
          ((uint)*(ushort *)(piVar7 + -2) < (local_60[0] & 0xffff))); piVar7 = (int *)*piVar7) {
      }
    }
  }
LAB_98017cd4:
  puVar6 = (undefined4 *)piVar7[1];
  *(int **)(puVar12 + 4) = piVar7;
  *(undefined4 **)(puVar12 + 6) = puVar6;
  *puVar6 = puVar12 + 4;
  piVar7[1] = (int)(puVar12 + 4);
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + local_60[0];
LAB_98017d0c:
  if (((uVar13 & 8) != 0) && (uVar10 < param_4)) {
    FUN_9800dcf0((uint *)((int)param_3 + uVar10 + 0x10),0,param_4 - uVar10);
  }
  *(byte *)((int)param_3 + 5) =
       (byte)((uint)uVar13 >> 4) & 0xe0 | *(byte *)((int)param_3 + 5) & 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017d48 @ 98017d48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017d48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017df0 @ 98017df0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017df0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  int local_60 [24];
  
  uVar8 = FUN_9800dc60();
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
    local_60[0] = (uVar1 - param_6) + 0x10;
    uStack0000003c = param_6;
    iVar3 = func_0x9801ad20(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar2 + 0x2c8));
    if (iVar3 < 0) {
      halt_baddata();
    }
    param_6 = local_60[0] + uStack0000003c;
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
    FUN_98016d68(puVar4,param_6,iVar3 * 0x10000);
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_98017578(puVar2,uVar1,(int)(uStack0000003c - uVar1) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017f58 @ 98017f58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017f58(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34 [13];
  
  uVar8 = FUN_9800dc74();
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  uVar7 = (int)uVar8 + 0xffffU >> 0x10;
  uVar5 = 0x40;
  local_38 = uVar7 << 0x10;
  uVar6 = 0;
  do {
    local_3c = *(int *)((uVar6 + 0x18) * 4 + iVar1);
    if (local_3c == 0) {
      if (uVar5 == 0x40) {
        uVar5 = uVar6;
      }
    }
    else if (((uVar7 <= *(uint *)(local_3c + 0x30)) && (local_38 <= *(uint *)(local_3c + 0x1c))) &&
            (iVar2 = FUN_98016e88(iVar1,local_3c,&local_38,0), iVar2 != 0)) {
      local_38 = local_38 >> 4;
      uVar3 = FUN_98017170(iVar1,iVar2,(int *)&local_38,0);
      FUN_98017578(iVar1,uVar3,local_38);
      halt_baddata();
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0x40);
  if ((uVar5 != 0x40) && ((*(uint *)(iVar1 + 0x14) & 2) != 0)) {
    uVar7 = (int)uVar8 + 0x10000;
    local_3c = 0;
    local_40 = uVar7;
    if (uVar7 <= *(uint *)(iVar1 + 0x20)) {
      local_40 = *(uint *)(iVar1 + 0x20);
    }
    iVar2 = func_0x9801ad20(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
    if (iVar2 < 0) {
      do {
        if (local_40 == uVar7) break;
        local_40 = local_40 >> 1;
        if (local_40 < uVar7) {
          local_40 = uVar7;
        }
        iVar2 = func_0x9801ad20(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
      } while (iVar2 < 0);
      if (iVar2 < 0) {
        halt_baddata();
      }
    }
    *(uint *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + local_40;
    local_34[0] = uVar7;
    if (uVar7 <= *(uint *)(iVar1 + 0x24)) {
      local_34[0] = *(uint *)(iVar1 + 0x24);
    }
    iVar2 = func_0x9801ad20(&local_3c,local_34,0x60001000,4,*(undefined4 *)(iVar1 + 0x590));
    if (-1 < iVar2) {
      iVar4 = FUN_98017df0(iVar1,local_3c,uVar5,0,(undefined2 *)local_3c,local_34[0] + local_3c,
                           local_40 + local_3c);
      if (iVar4 == 0) {
        iVar2 = -0x3fffffe9;
      }
      if (-1 < iVar2) {
        halt_baddata();
      }
    }
    func_0x9801ad40(&local_3c,&local_40,0x8000,*(undefined4 *)(iVar1 + 0x590));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018198 @ 98018198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018198(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  int *piVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint local_80;
  ushort *local_7c [31];
  
  uVar14 = FUN_9800dc54();
  iVar2 = (int)((ulonglong)uVar14 >> 0x20);
  puVar5 = (ushort *)uVar14;
  if (*(int *)(iVar2 + 0x584) == 0) {
    local_7c[0] = (ushort *)((int)puVar5 + 0xffffU & 0xffff0000);
    puVar10 = (ushort *)0x0;
    uVar12 = (int)local_7c[0] - (int)puVar5 >> 4 & 0xffff;
    iVar11 = *(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar2);
    if (uVar12 == 1) {
      local_7c[0] = local_7c[0] + 0x8000;
      uVar12 = 0x1001;
    }
    else if ((puVar5[1] != 0) && (local_7c[0] == puVar5)) {
      puVar10 = puVar5 + (uint)puVar5[1] * -8;
    }
    puVar9 = (ushort *)0x0;
    puVar6 = puVar5 + param_3 * 8;
    puVar7 = (ushort *)((uint)puVar6 & 0xffff0000);
    uVar13 = (int)puVar6 - (int)puVar7 >> 4 & 0xffff;
    if (uVar13 == 1) {
      uVar13 = 0x1001;
      puVar7 = puVar7 + -0x8000;
    }
    else if ((uVar13 == 0) && ((*(byte *)((int)puVar5 + 5) & 0x10) == 0)) {
      puVar9 = puVar6;
    }
    puVar6 = puVar6 + uVar13 * -8;
    local_80 = (int)puVar7 - (int)local_7c[0];
    if (puVar7 <= local_7c[0]) {
      local_80 = 0;
    }
    if ((local_80 != 0) && (puVar3 = (undefined4 *)FUN_98016b90(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = func_0x9801ad40(local_7c,&local_80,0x4000,*(undefined4 *)(iVar2 + 0x590));
      *puVar3 = *(undefined4 *)(*(int *)(iVar11 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar11 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_98016d68(iVar11,local_7c[0],local_80);
        *(uint *)(iVar11 + 0x30) = (local_80 >> 0x10) + *(int *)(iVar11 + 0x30);
        if (uVar12 == 0) {
          if (puVar10 == (ushort *)0x0) {
            if ((local_7c[0] <= *(ushort **)(iVar11 + 0x40)) &&
               (*(ushort **)(iVar11 + 0x40) < (ushort *)(local_80 + (int)local_7c[0]))) {
              *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar11 + 0x28);
            }
          }
          else {
            *(byte *)((int)puVar10 + 5) = *(byte *)((int)puVar10 + 5) | 0x10;
            *(ushort **)(iVar11 + 0x40) = puVar10;
          }
        }
        else {
          *puVar5 = (ushort)uVar12;
          *(undefined1 *)((int)puVar5 + 5) = 0x10;
          *(uint *)(iVar2 + 0x30) = uVar12 + *(int *)(iVar2 + 0x30);
          *(ushort **)(iVar11 + 0x40) = puVar5;
          *(byte *)((int)puVar5 + 5) = *(byte *)((int)puVar5 + 5) & 0xf8;
          if (uVar12 < 0x80) {
            piVar8 = (int *)((uVar12 + 0x30) * 8 + iVar2);
            if ((int *)*piVar8 == piVar8) {
              iVar4 = ((*puVar5 >> 5) + 0x58) * 4;
              *(uint *)(iVar4 + iVar2) = 1 << (*puVar5 & 0x1f) | *(uint *)(iVar4 + iVar2);
            }
          }
          else {
            for (piVar8 = *(int **)(iVar2 + 0x180);
                ((int *)(iVar2 + 0x180) != piVar8 && (*(ushort *)(piVar8 + -2) < uVar12));
                piVar8 = (int *)*piVar8) {
            }
          }
          puVar3 = (undefined4 *)piVar8[1];
          *(int **)(puVar5 + 4) = piVar8;
          *(undefined4 **)(puVar5 + 6) = puVar3;
          *puVar3 = puVar5 + 4;
          piVar8[1] = (int)(puVar5 + 4);
        }
        if (uVar13 != 0) {
          puVar6[1] = 0;
          uVar1 = *(undefined1 *)(iVar11 + 4);
          *(undefined1 *)((int)puVar6 + 5) = 0;
          *(undefined1 *)(puVar6 + 2) = uVar1;
          *puVar6 = (ushort)uVar13;
          puVar6[uVar13 * 8 + 1] = (ushort)uVar13;
          *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
          if (uVar13 < 0x80) {
            piVar8 = (int *)((uVar13 + 0x30) * 8 + iVar2);
            if ((int *)*piVar8 == piVar8) {
              iVar11 = ((*puVar6 >> 5) + 0x58) * 4;
              *(uint *)(iVar11 + iVar2) = 1 << (*puVar6 & 0x1f) | *(uint *)(iVar11 + iVar2);
            }
          }
          else {
            for (piVar8 = *(int **)(iVar2 + 0x180);
                ((int *)(iVar2 + 0x180) != piVar8 && (*(ushort *)(piVar8 + -2) < uVar13));
                piVar8 = (int *)*piVar8) {
            }
          }
          puVar3 = (undefined4 *)piVar8[1];
          *(int **)(puVar6 + 4) = piVar8;
          *(undefined4 **)(puVar6 + 6) = puVar3;
          *puVar3 = puVar6 + 4;
          piVar8[1] = (int)(puVar6 + 4);
          *(uint *)(iVar2 + 0x30) = uVar13 + *(int *)(iVar2 + 0x30);
          halt_baddata();
        }
        if (puVar9 == (ushort *)0x0) {
          halt_baddata();
        }
        puVar9[1] = 0;
        halt_baddata();
      }
    }
  }
  FUN_98017578(iVar2,puVar5,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018500 @ 98018500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018500(void)

{
  FUN_9800dc58();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018ad0 @ 98018ad0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018ad0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte bVar11;
  int *piVar12;
  undefined4 *puVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined8 uVar18;
  uint *local_ec;
  uint local_e8;
  ushort *local_e4;
  uint *local_e0;
  uint *local_dc;
  undefined4 local_d8;
  uint local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int local_c4;
  ushort *local_c0;
  int *local_bc;
  int *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_8;
  
  uVar18 = FUN_9800dc60();
  iVar4 = (int)((ulonglong)uVar18 >> 0x20);
  local_dc = (uint *)0x0;
  local_d8 = 0;
  local_c4 = iVar4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar5 = FUN_9801abc0(), *(byte *)(iVar4 + 0x17b) != uVar5)) {
    func_0x9801ad30(0xf4,iVar4,local_8,0x5ea,param_3);
  }
  uVar15 = *(uint *)(iVar4 + 0x18) | (uint)uVar18;
  uVar5 = param_3;
  if (param_3 == 0) {
    uVar5 = 1;
  }
  uVar5 = uVar5 + 0x1f;
  local_e8 = uVar5 & 0xfffffff0;
  uVar8 = uVar5 >> 4;
  bVar2 = (uVar15 & 1) == 0;
  if (bVar2) {
    func_0x9801acf0(*(undefined4 *)(iVar4 + 0x580));
    local_d8 = 1;
  }
  if (0x7f < uVar8) {
    if (*(uint *)(iVar4 + 0x1c) < uVar8) {
      if ((*(uint *)(iVar4 + 0x14) & 2) != 0) {
        local_e8 = local_e8 + 0x20;
        local_ec = (uint *)0x0;
        iVar7 = func_0x9801ad20(&local_ec,&local_e8,(~uVar15 & 8) << 0x14 | 0x60001000,4,
                                *(undefined4 *)(iVar4 + 0x590));
        if (-1 < iVar7) {
          FUN_9800dcf0(local_ec,0,0x30);
          *(short *)(local_ec + 8) = ((short)local_e8 - (short)param_3) + -0x30;
          *(undefined1 *)((int)local_ec + 0x25) = 0xb;
          local_ec[6] = local_e8;
          local_ec[7] = local_e8;
          puVar13 = *(undefined4 **)(iVar4 + 0x5c);
          *local_ec = iVar4 + 0x58;
          local_ec[1] = (uint)puVar13;
          *puVar13 = local_ec;
          local_dc = local_ec + 0xc;
          *(uint **)(iVar4 + 0x5c) = local_ec;
          goto LAB_9800dcb0;
        }
      }
    }
    else {
LAB_98018d88:
      local_d0 = *(int **)(iVar4 + 0x184);
      piVar12 = (int *)(iVar4 + 0x180);
      if ((piVar12 != local_d0) && (local_e4 = (ushort *)(local_d0 + -2), uVar8 <= *local_e4)) {
        for (local_d0 = (int *)*piVar12; piVar12 != local_d0; local_d0 = (int *)*local_d0) {
          local_e4 = (ushort *)(local_d0 + -2);
          if (uVar8 <= *local_e4) {
            piVar12 = (int *)local_d0[1];
            iVar7 = *local_d0;
            if (((int *)*piVar12 == *(int **)(iVar7 + 4)) && ((int *)*piVar12 == local_d0)) {
              *piVar12 = iVar7;
              *(int **)(iVar7 + 4) = piVar12;
            }
            goto LAB_98018e5c;
          }
        }
      }
      local_e4 = (ushort *)FUN_98017f58();
      if (local_e4 != (ushort *)0x0) {
        piVar12 = *(int **)(local_e4 + 6);
        iVar7 = *(int *)(local_e4 + 4);
        if (((ushort *)*piVar12 == *(ushort **)(iVar7 + 4)) && ((ushort *)*piVar12 == local_e4 + 4))
        {
          *piVar12 = iVar7;
          *(int **)(iVar7 + 4) = piVar12;
        }
        goto LAB_98018e5c;
      }
    }
    if ((uVar15 & 4) != 0) {
      local_b0 = 0xc0000017;
      local_a8 = 0;
      local_a0 = 1;
      local_ac = 0;
      local_9c = local_e8;
      func_0x9801ad80(&local_b0);
    }
    local_dc = (uint *)0x0;
    goto LAB_9800dcb0;
  }
  piVar12 = (int *)((uVar8 + 0x30) * 8 + iVar4);
  if ((int *)*piVar12 == piVar12) {
    uVar5 = uVar5 >> 9;
    puVar6 = (uint *)((uVar5 + 0x58) * 4 + iVar4);
    local_e0 = puVar6 + 1;
    local_d4 = *puVar6 & ~((1 << (uVar8 & 0x1f)) - 1U);
    if (uVar5 == 0) {
      if (local_d4 == 0) {
        local_d4 = *local_e0;
        local_e0 = puVar6 + 2;
        goto LAB_98018cb0;
      }
      iVar7 = iVar4 + 0x180;
    }
    else if (uVar5 == 1) {
LAB_98018cb0:
      if (local_d4 == 0) {
        local_d4 = *local_e0;
        local_e0 = local_e0 + 1;
        goto LAB_98018cd0;
      }
      iVar7 = iVar4 + 0x280;
    }
    else {
      if (uVar5 < 3) {
LAB_98018cd0:
        if (local_d4 != 0) {
          iVar7 = iVar4 + 0x380;
          goto LAB_98018cfc;
        }
        local_d4 = *local_e0;
        local_e0 = local_e0 + 1;
      }
      else if (uVar5 != 3) goto LAB_98018d88;
      if (local_d4 == 0) goto LAB_98018d88;
      iVar7 = iVar4 + 0x480;
    }
LAB_98018cfc:
    puVar13 = *(undefined4 **)((0x1f - LZCOUNT(local_d4 & ~(local_d4 - 1))) * 8 + iVar7 + 4);
    local_e4 = (ushort *)(puVar13 + -2);
    piVar9 = (int *)puVar13[1];
    piVar12 = (int *)*puVar13;
    if (((undefined4 *)*piVar9 == (undefined4 *)piVar12[1]) && ((undefined4 *)*piVar9 == puVar13)) {
      *piVar9 = (int)piVar12;
      piVar12[1] = (int)piVar9;
      if (piVar12 == piVar9) {
        iVar7 = ((*local_e4 >> 5) + 0x58) * 4;
        *(uint *)(iVar7 + iVar4) = *(uint *)(iVar7 + iVar4) ^ 1 << (*local_e4 & 0x1f);
      }
    }
LAB_98018e5c:
    puVar16 = local_e4;
    bVar11 = *(byte *)((int)local_e4 + 5);
    *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*local_e4;
    *(undefined1 *)((int)local_e4 + 5) = 1;
    uVar5 = *local_e4 - uVar8;
    *local_e4 = (ushort)uVar8;
    *(char *)(local_e4 + 3) = (char)local_e8 - (char)param_3;
    *(undefined1 *)((int)local_e4 + 7) = 0;
    local_c0 = local_e4;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        *local_e4 = *local_e4 + 1;
        *(char *)(local_e4 + 3) = *(char *)(local_e4 + 3) + '\x10';
      }
      else {
        puVar17 = local_e4 + uVar8 * 8;
        uVar3 = uVar5 & 0xffff;
        *(byte *)((int)puVar17 + 5) = bVar11;
        puVar17[1] = (ushort)uVar8;
        *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(local_e4 + 2);
        *puVar17 = (ushort)uVar5;
        if ((bVar11 & 0x10) == 0) {
          puVar14 = puVar17 + uVar5 * 8;
          if ((*(byte *)((int)puVar14 + 5) & 1) != 0) {
            puVar14[1] = (ushort)uVar5;
            if (uVar3 < 0x80) {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar4);
              if ((int *)*piVar12 == piVar12) {
                iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
                uVar8 = *(uint *)(iVar7 + iVar4) | 1 << (*puVar17 & 0x1f);
                goto LAB_98018ff0;
              }
            }
            else {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              for (piVar12 = *(int **)(iVar4 + 0x180);
                  (local_c8 = piVar12, (int *)(iVar4 + 0x180) != piVar12 &&
                  (local_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                  piVar12 = (int *)*piVar12) {
              }
            }
            goto LAB_98018ff4;
          }
          *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar14 + 5);
          puVar13 = *(undefined4 **)(puVar14 + 4);
          puVar10 = *(undefined4 **)(puVar14 + 6);
          if (((ushort *)*puVar10 == (ushort *)puVar13[1]) && ((ushort *)*puVar10 == puVar14 + 4)) {
            *puVar10 = puVar13;
            puVar13[1] = puVar10;
            if ((puVar13 == puVar10) && (uVar1 = *puVar14, uVar1 < 0x80)) {
              iVar7 = ((uVar1 >> 5) + 0x58) * 4;
              *(uint *)(iVar7 + iVar4) = 1 << (uVar1 & 0x1f) ^ *(uint *)(iVar7 + iVar4);
            }
          }
          *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar14;
          uVar5 = *puVar14 + uVar5;
          if (uVar5 < 0xf001) {
            uVar8 = uVar5 & 0xffff;
            *puVar17 = (ushort)uVar5;
            if ((*(byte *)((int)puVar17 + 5) & 0x10) == 0) {
              puVar17[uVar5 * 8 + 1] = (ushort)uVar5;
            }
            if (uVar8 < 0x80) {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              piVar12 = (int *)((uVar8 + 0x30) * 8 + iVar4);
              if ((int *)*piVar12 == piVar12) {
                iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
                *(uint *)(iVar7 + iVar4) = *(uint *)(iVar7 + iVar4) | 1 << (*puVar17 & 0x1f);
              }
            }
            else {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              for (piVar12 = *(int **)(iVar4 + 0x180);
                  (local_b8 = piVar12, (int *)(iVar4 + 0x180) != piVar12 &&
                  (local_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar8));
                  piVar12 = (int *)*piVar12) {
              }
            }
            puVar13 = (undefined4 *)piVar12[1];
            *(int **)(puVar17 + 4) = piVar12;
            *(undefined4 **)(puVar17 + 6) = puVar13;
            *puVar13 = puVar17 + 4;
            piVar12[1] = (int)(puVar17 + 4);
            iVar7 = uVar5 + *(int *)(iVar4 + 0x30);
            goto LAB_980191b4;
          }
          FUN_98017578(iVar4,puVar17,uVar5);
        }
        else {
          if (uVar3 < 0x80) {
            piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar4);
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            if ((int *)*piVar12 == piVar12) {
              iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar7 + iVar4);
LAB_98018ff0:
              *(uint *)(iVar7 + iVar4) = uVar8;
            }
          }
          else {
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            for (piVar12 = *(int **)(iVar4 + 0x180);
                (local_bc = piVar12, (int *)(iVar4 + 0x180) != piVar12 &&
                (local_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                piVar12 = (int *)*piVar12) {
            }
          }
LAB_98018ff4:
          puVar13 = (undefined4 *)piVar12[1];
          *(int **)(puVar17 + 4) = piVar12;
          *(undefined4 **)(puVar17 + 6) = puVar13;
          *puVar13 = puVar17 + 4;
          piVar12[1] = (int)(puVar17 + 4);
          iVar7 = uVar5 + *(int *)(iVar4 + 0x30);
LAB_980191b4:
          *(int *)(iVar4 + 0x30) = iVar7;
        }
        bVar11 = 0;
        if ((*(byte *)((int)puVar17 + 5) & 0x10) != 0) {
          *(ushort **)(*(int *)((*(byte *)(puVar17 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar17;
        }
      }
    }
    if ((bVar11 & 0x10) != 0) {
      *(byte *)((int)puVar16 + 5) = *(byte *)((int)puVar16 + 5) | 0x10;
    }
  }
  else {
    puVar13 = (undefined4 *)piVar12[1];
    puVar16 = (ushort *)(puVar13 + -2);
    bVar11 = *(byte *)((int)puVar13 + -3);
    piVar9 = (int *)puVar13[1];
    piVar12 = (int *)*puVar13;
    if (((undefined4 *)*piVar9 == (undefined4 *)piVar12[1]) && ((undefined4 *)*piVar9 == puVar13)) {
      *piVar9 = (int)piVar12;
      piVar12[1] = (int)piVar9;
      if (piVar12 == piVar9) {
        iVar7 = ((*puVar16 >> 5) + 0x58) * 4;
        *(uint *)(iVar7 + iVar4) = *(uint *)(iVar7 + iVar4) ^ 1 << (*puVar16 & 0x1f);
      }
    }
    *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - uVar8;
    *(byte *)((int)puVar13 + -3) = bVar11 & 0x10 | 1;
    *(char *)((int)puVar13 + -2) = (char)local_e8 - (char)param_3;
    *(undefined1 *)((int)puVar13 + -1) = 0;
    local_e4 = puVar16;
    local_c0 = puVar16;
  }
  puVar6 = (uint *)(puVar16 + 8);
  local_dc = puVar6;
  if (bVar2) {
    func_0x9801acd0(*(undefined4 *)(iVar4 + 0x580));
    local_d8 = 0;
  }
  if ((uVar15 & 8) != 0) {
    FUN_9800dcf0(puVar6,0,param_3);
  }
LAB_9800dcb0:
  FUN_98019378();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98019378 @ 98019378 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019378(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980193c8 @ 980193c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980193c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  uint local_50 [4];
  int local_40;
  int local_3c;
  undefined4 local_8;
  
  uVar8 = FUN_9800dc70();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  local_50[1] = 0;
  local_50[2] = 1;
  local_3c = iVar4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar2 = FUN_9801abc0(), *(byte *)(iVar4 + 0x17b) != uVar2)) {
    func_0x9801ad30(0xf4,iVar4,local_8,0x1160,param_3);
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  bVar1 = ((*(uint *)(iVar4 + 0x18) | (uint)uVar8) & 1) == 0;
  if (bVar1) {
    func_0x9801acf0(*(undefined4 *)(iVar4 + 0x580));
    local_50[1] = 1;
  }
  if ((*(byte *)(param_3 + -0xb) & 8) != 0) {
    local_40 = param_3 + -0x30;
    iVar6 = *(int *)(param_3 + -0x30);
    piVar7 = *(int **)(param_3 + -0x2c);
    *piVar7 = iVar6;
    *(int **)(iVar6 + 4) = piVar7;
    if (bVar1) {
      func_0x9801acd0(*(undefined4 *)(iVar4 + 0x580));
      local_50[1] = 0;
    }
    local_50[0] = 0;
    iVar4 = func_0x9801ad40(&local_40,local_50,0x8000,*(undefined4 *)(iVar4 + 0x590));
    local_50[2] = 0xffffffffU - (iVar4 >> 0x1f) & 1;
    goto LAB_9801962c;
  }
  local_50[0] = (uint)*(ushort *)(param_3 + -0x10);
  puVar3 = (ushort *)FUN_98017170(iVar4,(ushort *)(param_3 + -0x10),(int *)local_50,0);
  if (local_50[0] < 0x80) {
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) & 0x10;
    piVar7 = (int *)(((local_50[0] & 0xffff) + 0x30) * 8 + iVar4);
    if ((int *)*piVar7 == piVar7) {
      iVar6 = ((*puVar3 >> 5) + 0x58) * 4;
      *(uint *)(iVar6 + iVar4) = 1 << (*puVar3 & 0x1f) | *(uint *)(iVar6 + iVar4);
    }
    puVar5 = (undefined4 *)piVar7[1];
    *(int **)(puVar3 + 4) = piVar7;
    *(undefined4 **)(puVar3 + 6) = puVar5;
    *puVar5 = puVar3 + 4;
    piVar7[1] = (int)(puVar3 + 4);
    iVar6 = *(int *)(iVar4 + 0x30);
  }
  else {
    if ((*(uint *)(iVar4 + 0x28) <= local_50[0]) &&
       (*(uint *)(iVar4 + 0x2c) <= *(int *)(iVar4 + 0x30) + local_50[0])) {
      FUN_98018198(iVar4,puVar3,local_50[0]);
      goto LAB_9801962c;
    }
    if (0xf000 < local_50[0]) {
      FUN_98017578(iVar4,puVar3,local_50[0]);
      goto LAB_9801962c;
    }
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) & 0x10;
    for (local_50[3] = *(int *)(iVar4 + 0x180);
        (iVar4 + 0x180 != local_50[3] &&
        (local_40 = local_50[3] + -8, (uint)*(ushort *)(local_50[3] + -8) < (local_50[0] & 0xffff)))
        ; local_50[3] = *(uint *)local_50[3]) {
    }
    puVar5 = *(undefined4 **)(local_50[3] + 4);
    *(uint *)(puVar3 + 4) = local_50[3];
    *(undefined4 **)(puVar3 + 6) = puVar5;
    *puVar5 = puVar3 + 4;
    *(ushort **)(local_50[3] + 4) = puVar3 + 4;
    iVar6 = *(int *)(iVar4 + 0x30);
  }
  *(uint *)(iVar4 + 0x30) = iVar6 + local_50[0];
LAB_9801962c:
  FUN_9801966c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801966c @ 9801966c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801966c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980196c0 @ 980196c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980196c0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  ushort uVar13;
  int iVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined8 uVar18;
  int iStack00000014;
  int iStack00000024;
  int *piStack0000002c;
  int local_e8;
  int *local_e4;
  undefined4 local_e0;
  uint local_dc;
  int local_d8;
  int *local_d4;
  int *local_d0;
  uint local_cc;
  int *local_c8;
  ushort *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_8;
  
  uVar18 = FUN_9800dc54();
  iVar3 = (int)((ulonglong)uVar18 >> 0x20);
  local_e0 = 0;
  iStack00000014 = iVar3;
  iStack00000024 = param_3;
  piStack0000002c = param_4;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar2 = FUN_9801abc0(), *(byte *)(iVar3 + 0x17b) != uVar2)) {
    func_0x9801ad30(0xf4,iVar3,local_8,0xc7c,param_3);
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  uVar2 = *(uint *)(iVar3 + 0x18) | (uint)uVar18;
  if ((int *)0x7fffffff < param_4) {
    halt_baddata();
  }
  piVar8 = param_4;
  if (param_4 == (int *)0x0) {
    piVar8 = (int *)0x1;
  }
  uVar15 = *(int *)(iVar3 + 0x50) + (int)piVar8 & *(uint *)(iVar3 + 0x54);
  if ((((uVar2 & 0x3c000100) != 0) || (*(int *)(iVar3 + 0x17c) != 0)) ||
     ((*(byte *)(param_3 + -0xb) & 2) != 0)) {
    uVar15 = uVar15 + 0x10;
  }
  if ((uVar2 & 1) == 0) {
    func_0x9801acf0(*(undefined4 *)(iVar3 + 0x580));
    uVar2 = uVar2 ^ 1;
    local_e0 = 1;
  }
  puVar17 = (ushort *)(param_3 + -0x10);
  bVar1 = *(byte *)(param_3 + -0xb);
  local_c4 = puVar17;
  if ((bVar1 & 1) == 0) goto LAB_98019ed4;
  uVar9 = (uint)*puVar17;
  if ((bVar1 & 8) == 0) {
    piVar8 = (int *)(uVar9 * 0x10 - (uint)*(byte *)(param_3 + -10));
  }
  else {
    uVar15 = uVar15 + 0x1001f & 0xffff0000;
    piVar8 = (int *)((*(uint *)(param_3 + -0x18) - uVar9) + -0x30);
    uVar9 = *(uint *)(param_3 + -0x18) >> 4;
  }
  local_dc = uVar15 >> 4;
  iVar5 = param_3;
  uVar14 = uVar2;
  local_e4 = piVar8;
  if (uVar9 < local_dc) {
    if (((bVar1 & 8) == 0) &&
       (iVar4 = FUN_980177c8(iVar3,uVar2,puVar17,(uint)param_4,local_dc), iVar10 = iStack00000024,
       iVar4 != 0)) goto LAB_98019ea0;
    if ((uVar2 & 0x10) == 0) {
      uVar14 = uVar2 & 0xc003ffff;
      if ((*(byte *)(param_3 + -0xb) & 2) == 0) {
        if (*(byte *)(param_3 + -9) != 0) {
          uVar14 = (uint)*(byte *)(param_3 + -9) << 0x12 | uVar14;
        }
      }
      else {
        uVar14 = (*(byte *)(param_3 + -0xb) & 0xe0) << 4 | 0x100 | uVar2 & 0xc003f1ff;
        if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
          puVar12 = puVar17 + (uint)*puVar17 * 8 + -8;
        }
        else {
          puVar12 = (ushort *)(param_3 + -0x28);
        }
        uVar13 = puVar12[1];
        if ((uVar13 != 0) && ((uVar13 & 0x8000) == 0)) {
          uVar14 = (uint)uVar13 << 0x12 | uVar14;
        }
      }
      iVar5 = FUN_98018ad0(iVar3,uVar14 & 0xfffffff7,(uint)param_4);
      iVar10 = iVar5;
      if (iVar5 != 0) {
        if ((*(byte *)(iVar5 + -0xb) & 2) != 0) {
          if ((*(byte *)(iVar5 + -0xb) & 8) == 0) {
            puVar12 = (ushort *)(iVar5 + -0x10) + (uint)*(ushort *)(iVar5 + -0x10) * 8 + -8;
          }
          else {
            puVar12 = (ushort *)(iVar5 + -0x28);
          }
          if ((*(byte *)(param_3 + -0xb) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
            puVar17 = puVar17 + (uint)*puVar17 * 8 + -8;
          }
          else {
            puVar17 = (ushort *)(param_3 + -0x28);
          }
          *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar17 + 2);
        }
        piVar6 = param_4;
        if (piVar8 <= param_4) {
          piVar6 = piVar8;
        }
        FUN_9800db80(iVar5,param_3,(uint)piVar6);
        if ((piVar8 < param_4) && ((uVar14 & 8) != 0)) {
          FUN_9800dcf0((uint *)(iVar5 + (int)piVar8),0,(int)param_4 - (int)piVar8);
        }
        FUN_980193c8(iVar3,uVar14,param_3);
      }
      goto LAB_98019ea0;
    }
    iStack00000024 = 0;
  }
  else {
    uVar16 = local_dc;
    if (local_dc + 1 == uVar9) {
      uVar15 = uVar15 + 0x10;
      uVar16 = local_dc + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(param_3 + -10) = (char)uVar15 - (char)param_4;
    }
    else {
      *puVar17 = ((short)uVar15 - (short)param_4) - 0x30;
    }
    local_dc = uVar16;
    if ((piVar8 < param_4) && ((uVar2 & 8) != 0)) {
      FUN_9800dcf0((uint *)((int)piVar8 + param_3),0,(int)param_4 - (int)piVar8);
    }
    iVar10 = iStack00000024;
    if (uVar16 != uVar9) {
      bVar1 = *(byte *)(param_3 + -0xb);
      if ((bVar1 & 8) == 0) {
        puVar12 = puVar17 + uVar16 * 8;
        *(byte *)((int)puVar12 + 5) = bVar1 & 0xfe;
        puVar12[1] = (ushort)uVar16;
        *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(param_3 + -0xc);
        uVar2 = *puVar17 - uVar16;
        *puVar17 = (ushort)uVar16;
        *(byte *)(param_3 + -0xb) = *(byte *)(param_3 + -0xb) & 0xef;
        uVar13 = (ushort)uVar2;
        if ((bVar1 & 0x10) == 0) {
          puVar17 = puVar12 + uVar2 * 8;
          if ((*(byte *)((int)puVar17 + 5) & 1) != 0) {
            *puVar12 = uVar13;
            puVar17[1] = uVar13;
            *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
            if ((uVar2 & 0xffff) < 0x80) goto LAB_98019a48;
            for (piVar8 = *(int **)(iVar3 + 0x180);
                (local_d0 = piVar8, (int *)(iVar3 + 0x180) != piVar8 &&
                (local_e4 = piVar8 + -2, (uint)*(ushort *)(piVar8 + -2) < (uVar2 & 0xffff)));
                piVar8 = (int *)*piVar8) {
            }
            goto LAB_98019a80;
          }
          *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar17 + 5);
          puVar11 = *(undefined4 **)(puVar17 + 6);
          puVar7 = *(undefined4 **)(puVar17 + 4);
          if (((ushort *)*puVar11 == (ushort *)puVar7[1]) && ((ushort *)*puVar11 == puVar17 + 4)) {
            *puVar11 = puVar7;
            puVar7[1] = puVar11;
            if ((puVar7 == puVar11) && (uVar13 = *puVar17, uVar13 < 0x80)) {
              iVar10 = ((uVar13 >> 5) + 0x58) * 4;
              *(uint *)(iVar10 + iVar3) = *(uint *)(iVar10 + iVar3) ^ 1 << (uVar13 & 0x1f);
            }
          }
          if ((*(byte *)((int)puVar17 + 5) & 4) != 0) {
            local_cc = (uint)*puVar17 * 0x10 - 0x18;
            if (((*(byte *)((int)puVar17 + 5) & 2) != 0) && (4 < local_cc)) {
              local_cc = (uint)*puVar17 * 0x10 - 0x1c;
            }
            func_0x9801ad50(puVar17 + 0xc,local_cc,0xfeeefeee);
          }
          *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar17;
          uVar2 = *puVar17 + uVar2;
          if (0xf000 < uVar2) {
            FUN_98017578(iVar3,puVar12,uVar2);
            iVar10 = iStack00000024;
            goto LAB_98019ea0;
          }
          uVar9 = uVar2 & 0xffff;
          *puVar12 = (ushort)uVar2;
          if ((*(byte *)((int)puVar12 + 5) & 0x10) == 0) {
            puVar12[uVar2 * 8 + 1] = (ushort)uVar2;
          }
          else {
            *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar12;
          }
          *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
          if (uVar9 < 0x80) {
            piVar8 = (int *)((uVar9 + 0x30) * 8 + iVar3);
            if ((int *)*piVar8 == piVar8) {
              iVar10 = ((*puVar12 >> 5) + 0x58) * 4;
              *(uint *)(iVar10 + iVar3) = *(uint *)(iVar10 + iVar3) | 1 << (*puVar12 & 0x1f);
            }
          }
          else {
            for (piVar8 = *(int **)(iVar3 + 0x180);
                (local_c8 = piVar8, (int *)(iVar3 + 0x180) != piVar8 &&
                (local_e4 = piVar8 + -2, *(ushort *)(piVar8 + -2) < uVar9)); piVar8 = (int *)*piVar8
                ) {
            }
          }
          puVar7 = (undefined4 *)piVar8[1];
          *(int **)(puVar12 + 4) = piVar8;
          *(undefined4 **)(puVar12 + 6) = puVar7;
          *puVar7 = puVar12 + 4;
          piVar8[1] = (int)(puVar12 + 4);
          iVar10 = uVar2 + *(int *)(iVar3 + 0x30);
        }
        else {
          *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar12;
          *puVar12 = uVar13;
          *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
          if ((uVar2 & 0xffff) < 0x80) {
LAB_98019a48:
            piVar8 = (int *)(((uVar2 & 0xffff) + 0x30) * 8 + iVar3);
            if ((int *)*piVar8 == piVar8) {
              iVar10 = ((*puVar12 >> 5) + 0x58) * 4;
              *(uint *)(iVar10 + iVar3) = *(uint *)(iVar10 + iVar3) | 1 << (*puVar12 & 0x1f);
            }
          }
          else {
            for (piVar8 = *(int **)(iVar3 + 0x180);
                (local_d4 = piVar8, (int *)(iVar3 + 0x180) != piVar8 &&
                (local_e4 = piVar8 + -2, (uint)*(ushort *)(piVar8 + -2) < (uVar2 & 0xffff)));
                piVar8 = (int *)*piVar8) {
            }
          }
LAB_98019a80:
          puVar7 = (undefined4 *)piVar8[1];
          *(int **)(puVar12 + 4) = piVar8;
          *(undefined4 **)(puVar12 + 6) = puVar7;
          *puVar7 = puVar12 + 4;
          piVar8[1] = (int)(puVar12 + 4);
          iVar10 = uVar2 + *(int *)(iVar3 + 0x30);
        }
        *(int *)(iVar3 + 0x30) = iVar10;
        iVar10 = iStack00000024;
      }
      else {
        local_d8 = param_3 + -0x30 + uVar15;
        local_e8 = uVar9 * 0x10 - uVar15;
        iVar3 = func_0x9801ad40(&local_d8,&local_e8,0x8000,*(undefined4 *)(iVar3 + 0x590));
        iVar10 = iStack00000024;
        if (-1 < iVar3) {
          *(int *)(param_3 + -0x18) = *(int *)(param_3 + -0x18) - local_e8;
        }
      }
    }
LAB_98019ea0:
    iStack00000024 = iVar10;
    uVar2 = uVar14;
    if (iVar5 != 0) goto LAB_98019ed4;
  }
  if ((uVar2 & 4) != 0) {
    local_c0 = 0xc0000017;
    local_b8 = 0;
    local_b0 = 1;
    local_bc = 0;
    local_ac = uVar15;
    func_0x9801ad80(&local_c0);
  }
LAB_98019ed4:
  FUN_98019f28();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98019f28 @ 98019f28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019f28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98019fa0 @ 98019fa0 ==== */

undefined4 FUN_98019fa0(void)

{
  return DAT_9801cc58;
}


/* ==== FUN_98019fb0 @ 98019fb0 ==== */

void FUN_98019fb0(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 auStack_4c [76];
  
  uStack_5c = param_2 & 1;
  uStack_58 = 0;
  uStack_54 = 0x98019bb0;
  uStack_60 = param_1;
  if (param_4 == 0) {
    uStack_50 = 0;
  }
  else {
    if (0xf < param_3) {
      param_3 = 0xf;
    }
    uStack_50 = param_3;
    if (param_3 != 0) {
      FUN_9800dad8(auStack_4c,param_4,param_3 << 2);
    }
  }
  func_0x9801ad80(&uStack_60);
  return;
}


/* ==== FUN_9801a030 @ 9801a030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a0b8 @ 9801a0b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a0b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a158 @ 9801a158 ==== */

ulonglong FUN_9801a158(void)

{
  ulonglong uVar1;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  FUN_9801ab80();
  uVar1 = FUN_9801a660(&local_10);
  return uVar1;
}


/* ==== FUN_9801a198 @ 9801a198 ==== */

undefined4 FUN_9801a198(void)

{
  int unaff_r13;
  
  return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x14c);
}


/* ==== FUN_9801a1a8 @ 9801a1a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a1a8(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_9800dc7c();
  piVar1 = (int *)((ulonglong)uVar3 >> 0x20);
  func_0x9801acf0(0x9801c308);
  if ((int)uVar3 == 0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
  }
  else {
    *piVar1 = (int)&DAT_9801c324;
    piVar1[1] = (int)piRam9801c328;
    *piRam9801c328 = (int)piVar1;
    piRam9801c328 = piVar1;
  }
  func_0x9801acd0(0x9801c308);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a218 @ 9801a218 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a218(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a288 @ 9801a288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a410 @ 9801a410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a410(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_9800dc78();
  if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a580 @ 9801a580 ==== */

bool FUN_9801a580(undefined4 param_1)

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

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a5c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a660 @ 9801a660 ==== */

ulonglong FUN_9801a660(undefined2 *param_1)

{
  undefined4 in_r0;
  
  trapWord(0x1f,in_r0,0x14);
  return (ulonglong)CONCAT24(*param_1,*(undefined4 *)(param_1 + 2));
}


/* ==== FUN_9801a670 @ 9801a670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a670(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  uint in_r6;
  short sVar5;
  short sVar6;
  undefined1 auStack_b0 [16];
  short sStack_a0;
  short sStack_9e;
  short sStack_9c;
  short sStack_9a;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  undefined2 uStack_92;
  short sStack_90;
  ushort uStack_8e;
  undefined1 auStack_80 [4];
  short sStack_7c;
  short sStack_72;
  
  psVar2 = (short *)FUN_9800dc58();
  FUN_9801a030();
  if (*psVar2 == 0) {
    sVar1 = psVar2[3];
    if ((sVar1 < 6) && (sVar1 != 0)) {
      sStack_9e = psVar2[1];
      sVar6 = psVar2[2];
      if (((in_r6 & 0xff) == 0) && ((int)sStack_9e < (int)(uint)uStack_8e)) {
        sStack_90 = sStack_90 + 1;
      }
      sStack_9a = psVar2[4];
      sStack_98 = psVar2[5];
      sStack_96 = psVar2[6];
      sStack_94 = psVar2[7];
      sStack_9c = 1;
      uStack_92 = 0;
      sStack_a0 = sStack_90;
      cVar4 = func_0x9801adc0(&sStack_a0,auStack_b0);
      if (cVar4 != '\0') {
        func_0x9801ada0(auStack_b0,auStack_80);
        if (sVar6 < sStack_72) {
          sStack_9c = (sVar6 - sStack_72) + sStack_9c + 7;
        }
        else if (sStack_72 < sVar6) {
          sStack_9c = (sVar6 - sStack_72) + sStack_9c;
        }
        sVar5 = 1;
        sVar6 = sStack_9c;
        if (1 < sVar1) {
          do {
            sStack_9c = sStack_9c + 7;
            cVar4 = func_0x9801adc0(&sStack_a0,auStack_b0);
            if (cVar4 == '\0') break;
            func_0x9801ada0(auStack_b0,auStack_80);
            sVar5 = sVar5 + 1;
            sVar6 = sStack_7c;
          } while (sVar5 < sVar1);
        }
        sStack_9c = sVar6;
        cVar4 = func_0x9801adc0(&sStack_a0,auStack_b0);
        if (cVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  else {
    iVar3 = FUN_9801a0b8();
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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


