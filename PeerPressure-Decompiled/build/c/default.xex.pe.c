// Decompiled from default.xex.pe  base=82000000  (approximate C, for reading only)
/* ==== FUN_82020000 @ 82020000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82020000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021e00 @ 82021e00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021e00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021e58 @ 82021e58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021e58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021ea0 @ 82021ea0 ==== */

void FUN_82021ea0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82021f38 @ 82021f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021fa0 @ 82021fa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021fa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022018 @ 82022018 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022078 @ 82022078 ==== */

void FUN_82022078(void)

{
  return;
}


/* ==== FUN_820220e0 @ 820220e0 ==== */

int FUN_820220e0(byte *param_1,byte *param_2,int param_3)

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


/* ==== FUN_82022140 @ 82022140 ==== */

undefined4 FUN_82022140(undefined4 *param_1,undefined4 *param_2)

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


/* ==== FUN_82022198 @ 82022198 ==== */

int FUN_82022198(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x39b0ad < param_1 || (iVar1 = FUN_82041738(), iVar1 == 0)))) {
    iVar1 = FUN_82022018();
  }
  return iVar1;
}


/* ==== FUN_82022200 @ 82022200 ==== */

int FUN_82022200(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_82041738(), iVar1 == 0)) {
    iVar1 = FUN_82022018();
  }
  return iVar1;
}


/* ==== FUN_82022268 @ 82022268 ==== */

void FUN_82022268(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82022350 @ 82022350 ==== */

void FUN_82022350(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820223b0 @ 820223b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820223b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022488 @ 82022488 ==== */

void FUN_82022488(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82022558 @ 82022558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022558(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022610 @ 82022610 ==== */

void FUN_82022610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820226f8 @ 820226f8 ==== */

void FUN_820226f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820227b8 @ 820227b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820227b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022890 @ 82022890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820228e8 @ 820228e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820228e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022958 @ 82022958 ==== */

void FUN_82022958(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820229d8 @ 820229d8 ==== */

void FUN_820229d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82022ac8 @ 82022ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022ac8(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x470;
  if (0x39b0adU - param_2 < uVar1) {
    FUN_820413f0();
    FUN_8207dea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 + param_2 <= (uint)((param_1[2] - *param_1) / 0x470)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82022b40 @ 82022b40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022b40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022c20 @ 82022c20 ==== */

void FUN_82022c20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82022e68 @ 82022e68 ==== */

void FUN_82022e68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82023088 @ 82023088 ==== */

void FUN_82023088(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82023200 @ 82023200 ==== */

void FUN_82023200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820233f0 @ 820233f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820233f0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char cVar6;
  uint uVar4;
  int iVar5;
  uint in_r6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_100 [4];
  int iStack_fc;
  uint uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined2 *puStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c0 [192];
  
  uVar10 = FUN_8207c490();
  iVar5 = (int)((ulonglong)uVar10 >> 0x20);
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_de = 0;
  uStack_dc = 0;
  uStack_da = 0;
  uStack_ec = 0;
  iStack_fc = 0;
  uStack_f8 = 0;
  iVar8 = 0;
  iStack_f4 = 0;
  bVar1 = false;
  FUN_820228e8();
  auStack_100[0] = 0x5c;
  iVar3 = FUN_82022268(auStack_c0,auStack_100,0xffffffff,1);
  if (iVar3 != -1) {
    FUN_82022350();
    FUN_82022610();
    FUN_82022958();
    FUN_82022350();
  }
  FUN_82022890();
  cVar6 = FUN_8203b430();
  if (cVar6 == '\0') goto LAB_820234d0;
  in_r6 = in_r6 & 0xff;
  if (in_r6 == 1) {
    func_0x820b7578(&uStack_e0,"\\Device\\Flash");
    uStack_d8 = 0;
    puStack_d4 = &uStack_e0;
    uStack_d0 = 0x40;
    iVar3 = func_0x820b7568(&iStack_fc,0xc0100000,&uStack_d8,&uStack_f0,0,0x80,3,1);
    if (iVar3 == 0) {
      iVar3 = func_0x820b7558(iStack_fc,0,0,0,&uStack_f0,0x3c8044,0,0);
      if (iVar3 == 0) goto LAB_820235b8;
      FUN_82021fa0();
    }
    else {
      FUN_82021fa0();
    }
    FUN_82021e58();
    uVar4 = uStack_f8;
LAB_82023694:
    if (uVar4 != 0xffffffff) {
      FUN_8203ba38();
    }
  }
  else {
LAB_820235b8:
    uVar4 = FUN_8203ba80();
    if (uVar4 != 0xffffffff) {
      if (in_r6 == 1) {
        uStack_e8 = 0;
        cVar6 = FUN_82023200(iVar5,(int)uVar10,&iStack_f4,&uStack_f8);
        iVar8 = iStack_f4;
        uVar2 = uStack_f8;
        if (cVar6 != '\0') {
          for (; uVar2 != 0; uVar2 = uVar2 - uVar9) {
            uVar9 = 0x4000;
            if (uVar2 < 0x4001) {
              uVar9 = uVar2;
            }
            iVar5 = FUN_8203b910();
            if (iVar5 == 0) {
              thunk_FUN_8203cd58();
              FUN_82021fa0();
              FUN_82033418();
              goto LAB_82023684;
            }
          }
          goto LAB_82023680;
        }
      }
      else {
        iVar5 = iVar5 + 8;
        iVar3 = FUN_8207ab50(iVar5,(int)uVar10,&UNK_82021578,uVar4,0);
        if (iVar3 == 0) {
          FUN_82079fc0(iVar5);
          FUN_82021fa0();
          FUN_82033418();
          goto LAB_82023694;
        }
LAB_82023680:
        bVar1 = true;
      }
LAB_82023684:
      if (iVar8 != 0) {
        FUN_8207ce50();
      }
      goto LAB_82023694;
    }
    thunk_FUN_8203cd58();
    FUN_82021fa0();
    FUN_82033418();
  }
  if ((in_r6 == 1) && (iStack_fc != 0)) {
    if (bVar1) {
      uVar7 = 0x3c8048;
    }
    else {
      uVar7 = 0x3c804c;
    }
    iVar8 = func_0x820b7558(iStack_fc,0,0,0,&uStack_f0,uVar7,0,0);
    if (iVar8 != 0) {
      FUN_82021fa0();
      FUN_82021e58();
    }
    func_0x820b7548(iStack_fc);
  }
LAB_820234d0:
  FUN_82022350();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023798 @ 82023798 ==== */

void FUN_82023798(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820239a8 @ 820239a8 ==== */

void FUN_820239a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82023bb8 @ 82023bb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82023bb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023c20 @ 82023c20 ==== */

void FUN_82023c20(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x39) != '\0') {
    return;
  }
  puVar1 = *(undefined4 **)(iVar2 + 8);
  if (*(char *)((int)puVar1 + 0x39) == '\0') {
    for (puVar3 = (undefined4 *)*puVar1; *(char *)((int)puVar3 + 0x39) == '\0';
        puVar3 = (undefined4 *)*puVar3) {
      puVar1 = puVar3;
    }
    *param_1 = (int)puVar1;
    return;
  }
  while ((iVar2 = *(int *)(iVar2 + 4), *(char *)(iVar2 + 0x39) == '\0' &&
         (*param_1 == *(int *)(iVar2 + 8)))) {
    *param_1 = iVar2;
  }
  *param_1 = iVar2;
  return;
}


/* ==== FUN_82023c98 @ 82023c98 ==== */

int FUN_82023c98(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x3fffffff < param_1 || (iVar1 = FUN_82041738(), iVar1 == 0)))) {
    iVar1 = FUN_82022018();
  }
  return iVar1;
}


/* ==== FUN_82023d00 @ 82023d00 ==== */

int FUN_82023d00(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x5555555 < param_1 || (iVar1 = FUN_82041738(), iVar1 == 0)))) {
    iVar1 = FUN_82022018();
  }
  return iVar1;
}


/* ==== FUN_82023d68 @ 82023d68 ==== */

int FUN_82023d68(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x9249249 < param_1 || (iVar1 = FUN_82041738(), iVar1 == 0)))) {
    iVar1 = FUN_82022018();
  }
  return iVar1;
}


/* ==== FUN_82023dd0 @ 82023dd0 ==== */

void FUN_82023dd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0x39) == '\0') {
    iVar1 = *piVar2;
    if (*(char *)(iVar1 + 0x39) == '\0') {
      for (iVar3 = *(int *)(iVar1 + 8); *(char *)(iVar3 + 0x39) == '\0'; iVar3 = *(int *)(iVar3 + 8)
          ) {
        iVar1 = iVar3;
      }
      *param_1 = iVar1;
      return;
    }
    while ((piVar2 = (int *)piVar2[1], *(char *)((int)piVar2 + 0x39) == '\0' &&
           (*param_1 == *piVar2))) {
      *param_1 = (int)piVar2;
    }
    if (*(char *)(*param_1 + 0x39) != '\0') {
      return;
    }
  }
  else {
    piVar2 = (int *)piVar2[2];
  }
  *param_1 = (int)piVar2;
  return;
}


/* ==== FUN_82023e60 @ 82023e60 ==== */

void FUN_82023e60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82023ee8 @ 82023ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82023ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023fa0 @ 82023fa0 ==== */

void FUN_82023fa0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x39) == '\0') {
    *(int *)(*piVar2 + 4) = param_2;
  }
  piVar2[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar2;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
    if (param_2 == *piVar1) {
      *piVar1 = (int)piVar2;
    }
    else {
      piVar1[2] = (int)piVar2;
    }
  }
  *piVar2 = param_2;
  *(int **)(param_2 + 4) = piVar2;
  return;
}


/* ==== FUN_82024008 @ 82024008 ==== */

void FUN_82024008(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_2 = *(int *)(iVar2 + 8);
  if (*(char *)(*(int *)(iVar2 + 8) + 0x39) == '\0') {
    *(int **)(*(int *)(iVar2 + 8) + 4) = param_2;
  }
  *(int *)(iVar2 + 4) = param_2[1];
  if (param_2 == *(int **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
  }
  else {
    piVar1 = (int *)param_2[1];
    if (param_2 == (int *)piVar1[2]) {
      piVar1[2] = iVar2;
    }
    else {
      *piVar1 = iVar2;
    }
  }
  *(int **)(iVar2 + 8) = param_2;
  param_2[1] = iVar2;
  return;
}


/* ==== FUN_82024070 @ 82024070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820240e8 @ 820240e8 ==== */

void FUN_820240e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820241a0 @ 820241a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820241a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024230 @ 82024230 ==== */

void FUN_82024230(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82024298 @ 82024298 ==== */

void FUN_82024298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82024358 @ 82024358 ==== */

void FUN_82024358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82024490 @ 82024490 ==== */

void FUN_82024490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82024508 @ 82024508 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024508(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024580 @ 82024580 ==== */

void FUN_82024580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82024678 @ 82024678 ==== */

void FUN_82024678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82024768 @ 82024768 ==== */

void FUN_82024768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82024908 @ 82024908 ==== */

void FUN_82024908(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820249a8 @ 820249a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820249a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024a08 @ 82024a08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024a08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024a60 @ 82024a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024a60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024ab8 @ 82024ab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024ab8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_8207c494();
  puVar2 = (uint *)((ulonglong)uVar12 >> 0x20);
  puVar4 = (undefined4 *)uVar12;
  uVar5 = (int)param_3 - (int)puVar4 >> 2;
  FUN_82024908();
  puVar8 = puVar4 + ((int)param_3 - (int)puVar4 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) +
           1;
  puVar10 = puVar4 + ((int)param_3 - (int)puVar4 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  while (puVar7 = puVar10, puVar4 < puVar7) {
    cVar3 = (*(code *)param_4)(puVar7[-1],*puVar7);
    if ((cVar3 != '\0') ||
       (cVar3 = (*(code *)param_4)(*puVar7,puVar7[-1]), puVar10 = puVar7 + -1, cVar3 != '\0'))
    break;
  }
  while ((puVar10 = puVar8, puVar11 = puVar7, puVar8 < param_3 &&
         ((cVar3 = (*(code *)param_4)(*puVar8,*puVar7), cVar3 == '\0' &&
          (cVar3 = (*(code *)param_4)(*puVar7,*puVar8), cVar3 == '\0'))))) {
    puVar8 = puVar8 + 1;
  }
LAB_82024be0:
  do {
    puVar9 = puVar7;
    puVar1 = puVar11;
    if (puVar10 < param_3) {
      cVar3 = (*(code *)param_4)(*puVar11,*puVar10);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_4)(*puVar10,*puVar11);
        if (cVar3 != '\0') goto joined_r0x82024bec;
        uVar6 = *puVar8;
        *puVar8 = *puVar10;
        *puVar10 = uVar6;
        goto LAB_82024bd8;
      }
    }
    else {
joined_r0x82024bec:
      while (puVar7 = puVar9, puVar4 < puVar7) {
        puVar9 = puVar7 + -1;
        cVar3 = (*(code *)param_4)(puVar7[-1],*puVar1);
        if (cVar3 == '\0') {
          cVar3 = (*(code *)param_4)(*puVar1,*puVar9);
          if (cVar3 != '\0') break;
          puVar1 = puVar1 + -1;
          uVar6 = *puVar1;
          *puVar1 = *puVar9;
          *puVar9 = uVar6;
        }
      }
      if (puVar7 == puVar4) {
        if (puVar10 == param_3) {
          *puVar2 = (uint)puVar1;
          puVar2[1] = (uint)puVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (puVar8 != puVar10) {
          uVar6 = *puVar1;
          *puVar1 = *puVar8;
          *puVar8 = uVar6;
        }
        puVar11 = puVar1 + 1;
        uVar6 = *puVar1;
        *puVar1 = *puVar10;
        *puVar10 = uVar6;
LAB_82024bd8:
        puVar8 = puVar8 + 1;
      }
      else {
        puVar7 = puVar7 + -1;
        if (puVar10 == param_3) {
          puVar11 = puVar1 + -1;
          if (puVar7 != puVar11) {
            uVar6 = *puVar7;
            *puVar7 = *puVar11;
            *puVar11 = uVar6;
          }
          puVar8 = puVar8 + -1;
          uVar6 = *puVar11;
          *puVar11 = *puVar8;
          *puVar8 = uVar6;
          goto LAB_82024be0;
        }
        uVar6 = *puVar10;
        *puVar10 = *puVar7;
        *puVar7 = uVar6;
        puVar11 = puVar1;
      }
    }
    puVar10 = puVar10 + 1;
  } while( true );
}


/* ==== FUN_82024cf0 @ 82024cf0 ==== */

void FUN_82024cf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82024d60 @ 82024d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024e00 @ 82024e00 ==== */

void FUN_82024e00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82024e90 @ 82024e90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024e90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024f10 @ 82024f10 ==== */

void FUN_82024f10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  uVar4 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar4;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  param_2[5] = uVar1;
  return;
}


/* ==== FUN_82024fa8 @ 82024fa8 ==== */

void FUN_82024fa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82025008 @ 82025008 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025068 @ 82025068 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025068(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820250c0 @ 820250c0 ==== */

void FUN_820250c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820251d8 @ 820251d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820251d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025228 @ 82025228 ==== */

void FUN_82025228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820252c8 @ 820252c8 ==== */

void FUN_820252c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82025368 @ 82025368 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025368(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025400 @ 82025400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025468 @ 82025468 ==== */

void FUN_82025468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820254d8 @ 820254d8 ==== */

void FUN_820254d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82025568 @ 82025568 ==== */

void FUN_82025568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820255f0 @ 820255f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820255f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820256c0 @ 820256c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820256c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025718 @ 82025718 ==== */

void FUN_82025718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820258e8 @ 820258e8 ==== */

void FUN_820258e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82025948 @ 82025948 ==== */

void FUN_82025948(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820259e8 @ 820259e8 ==== */

void FUN_820259e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82025aa0 @ 82025aa0 ==== */

void FUN_82025aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82025d48 @ 82025d48 ==== */

void FUN_82025d48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82026100 @ 82026100 ==== */

void FUN_82026100(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82026158 @ 82026158 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026158(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820261b0 @ 820261b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820261b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint in_r6;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *local_60 [24];
  
  uVar7 = FUN_8207c494();
  piVar1 = (int *)((ulonglong)uVar7 >> 0x20);
  puVar4 = *(undefined4 **)((int)uVar7 + 4);
  uVar5 = 1;
  if (*(char *)((int)puVar4[1] + 0x39) == '\0') {
    puVar6 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar6;
      if ((in_r6 & 0xff) == 0) {
        uVar5 = FUN_82023ee8();
        uVar5 = uVar5 >> 0x1f;
      }
      else {
        uVar5 = FUN_82023ee8();
        uVar5 = uVar5 >> 0x1f ^ 1;
      }
      if (uVar5 == 0) {
        puVar6 = (undefined4 *)puVar4[2];
      }
      else {
        puVar6 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar6 + 0x39) == '\0');
  }
  local_60[0] = puVar4;
  if (uVar5 != 0) {
    if (puVar4 == (undefined4 *)**(int **)((int)uVar7 + 4)) goto LAB_820262a8;
    FUN_82023dd0((int *)local_60);
  }
  puVar4 = local_60[0];
  iVar3 = FUN_82023ee8();
  if (-1 < iVar3) {
    FUN_82024a60();
    thunk_FUN_8207ce50();
    *piVar1 = (int)puVar4;
    *(undefined1 *)(piVar1 + 1) = 0;
    halt_baddata();
  }
LAB_820262a8:
  piVar2 = (int *)FUN_82025718();
  *(undefined1 *)(piVar1 + 1) = 1;
  *piVar1 = *piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82026340 @ 82026340 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026340(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82026390 @ 82026390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026390(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 *puVar1;
  char cVar4;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_8207c494();
  puVar1 = (undefined4 *)((ulonglong)uVar11 >> 0x20);
  puVar5 = (undefined4 *)uVar11;
  uVar8 = ((int)param_3 - (int)puVar5) / 0x1c;
  FUN_82025948();
  puVar9 = puVar5 + (((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0)) * 7 + 7;
  puVar3 = puVar5 + (((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0)) * 7;
  while (puVar7 = puVar3, puVar5 < puVar7) {
    puVar3 = puVar7 + -7;
    cVar4 = (*(code *)param_4)(puVar3,puVar7);
    if ((cVar4 != '\0') || (cVar4 = (*(code *)param_4)(puVar7,puVar3), cVar4 != '\0')) break;
  }
  while ((puVar10 = puVar9, puVar3 = puVar7, puVar9 < param_3 &&
         ((cVar4 = (*(code *)param_4)(puVar9,puVar7), cVar4 == '\0' &&
          (cVar4 = (*(code *)param_4)(puVar7,puVar9), cVar4 == '\0'))))) {
    puVar9 = puVar9 + 7;
  }
  do {
    while (puVar6 = puVar7, param_3 <= puVar10) {
joined_r0x820264c0:
      for (; puVar5 < puVar6; puVar6 = puVar6 + -7) {
        puVar7 = puVar7 + -7;
        cVar4 = (*(code *)param_4)(puVar7,puVar3);
        if (cVar4 == '\0') {
          cVar4 = (*(code *)param_4)(puVar3,puVar7);
          if (cVar4 != '\0') break;
          puVar3 = puVar3 + -7;
          FUN_82024f10(puVar3,puVar7);
        }
      }
      if (puVar6 == puVar5) {
        if (puVar10 == param_3) {
          *puVar1 = puVar3;
          puVar1[1] = puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (puVar9 != puVar10) {
          FUN_82024f10(puVar3,puVar9);
        }
        puVar7 = puVar10;
        puVar9 = puVar9 + 7;
        puVar10 = puVar10 + 7;
        puVar2 = puVar3 + 7;
      }
      else {
        puVar6 = puVar6 + -7;
        puVar2 = puVar10;
        puVar7 = puVar6;
        if (puVar10 != param_3) goto LAB_820264ac;
        puVar3 = puVar3 + -7;
        if (puVar6 != puVar3) {
          FUN_82024f10(puVar6,puVar3);
        }
        puVar7 = puVar9 + -7;
        puVar9 = puVar7;
        puVar2 = puVar3;
      }
      FUN_82024f10(puVar3,puVar7);
      puVar7 = puVar6;
      puVar3 = puVar2;
    }
    cVar4 = (*(code *)param_4)(puVar3,puVar10);
    if (cVar4 == '\0') {
      cVar4 = (*(code *)param_4)(puVar10,puVar3);
      if (cVar4 != '\0') goto joined_r0x820264c0;
      puVar2 = puVar9;
      puVar6 = puVar10;
      puVar9 = puVar9 + 7;
LAB_820264ac:
      FUN_82024f10(puVar2,puVar6);
    }
    puVar10 = puVar10 + 7;
  } while( true );
}


/* ==== FUN_820265b0 @ 820265b0 ==== */

void FUN_820265b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82026630 @ 82026630 ==== */

void FUN_82026630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82026720 @ 82026720 ==== */

void FUN_82026720(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82026790 @ 82026790 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026790(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  
  piVar1 = (int *)FUN_8207c47c();
  FUN_82025228();
  FUN_820252c8();
  FUN_8203b430();
  iVar2 = FUN_8207ceb0();
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    FUN_82021fa0();
    FUN_82033418();
    if (*piVar1 != 0) {
      FUN_8207ce50();
      *piVar1 = 0;
    }
    FUN_82022350();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar3 = (uint *)FUN_8207ceb0();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(puVar3,0,0x44);
}


/* ==== FUN_82026c78 @ 82026c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82026cd0 @ 82026cd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026cd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82026d28 @ 82026d28 ==== */

void FUN_82026d28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82026f98 @ 82026f98 ==== */

void FUN_82026f98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82027060 @ 82027060 ==== */

void FUN_82027060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820270e8 @ 820270e8 ==== */

void FUN_820270e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82027140 @ 82027140 ==== */

void FUN_82027140(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82027208 @ 82027208 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027208(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x30;
  if (0x5555555U - param_2 < uVar1) {
    FUN_820413f0();
    FUN_8207dea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 + param_2 <= (uint)((param_1[2] - *param_1) / 0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82027280 @ 82027280 ==== */

void FUN_82027280(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82027360 @ 82027360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027420 @ 82027420 ==== */

void FUN_82027420(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820276c0 @ 820276c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820276c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820277c0 @ 820277c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820277c0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x1c;
  if (0x9249249U - param_2 < uVar1) {
    FUN_820413f0();
    FUN_8207dea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 + param_2 <= (uint)((param_1[2] - *param_1) / 0x1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82027838 @ 82027838 ==== */

void FUN_82027838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82027958 @ 82027958 ==== */

void FUN_82027958(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82027b80 @ 82027b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027b80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027c58 @ 82027c58 ==== */

void FUN_82027c58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82027d38 @ 82027d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027d90 @ 82027d90 ==== */

void FUN_82027d90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82027f20 @ 82027f20 ==== */

void FUN_82027f20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82027f98 @ 82027f98 ==== */

void FUN_82027f98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82028100 @ 82028100 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028100(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028178 @ 82028178 ==== */

void FUN_82028178(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82028200 @ 82028200 ==== */

void FUN_82028200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82028278 @ 82028278 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028278(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820282f0 @ 820282f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820282f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028390 @ 82028390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028410 @ 82028410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028488 @ 82028488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820284c8 @ 820284c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820284c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028518 @ 82028518 ==== */

void FUN_82028518(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82028598 @ 82028598 ==== */

void FUN_82028598(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82028620 @ 82028620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028680 @ 82028680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820286d0 @ 820286d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820286d0(void)

{
  int iVar1;
  char cVar3;
  bool bVar4;
  int *piVar2;
  undefined1 uVar5;
  uint auStack_6f [27];
  
  iVar1 = FUN_8207c494();
  *(undefined1 *)(iVar1 + 4) = 0;
  *(undefined1 *)(iVar1 + 0x542) = 0;
  *(undefined1 *)(iVar1 + 0x543) = 0;
  *(undefined1 *)(iVar1 + 0x544) = 0;
  *(undefined1 *)(iVar1 + 0x545) = 0;
  *(undefined1 *)(iVar1 + 0x546) = 0;
  *(undefined1 *)(iVar1 + 0x547) = 0;
  *(undefined1 *)(iVar1 + 0x548) = 0;
  FUN_82021fa0();
  FUN_82021e00();
  FUN_820228e8();
  FUN_82023bb8();
  FUN_82028518();
  cVar3 = FUN_8202dfb0();
  if (cVar3 == '\0') goto LAB_82028b68;
  FUN_82023bb8();
  FUN_820282f0();
  if (((*(char *)(iVar1 + 0xa8) == '\x01') || (*(char *)(iVar1 + 0xac) == '\x01')) ||
     (bVar4 = false, *(char *)(iVar1 + 0xb8) == '\x01')) {
    bVar4 = true;
  }
  *(bool *)(iVar1 + 0x540) = bVar4;
  if (bVar4) {
    *(bool *)(iVar1 + 0x543) = *(char *)(iVar1 + 0xa8) == '\0';
    *(bool *)(iVar1 + 0x544) = *(char *)(iVar1 + 0xac) == '\0';
    *(bool *)(iVar1 + 0x545) = *(char *)(iVar1 + 0xb8) == '\0';
    bVar4 = FUN_8203af50();
    if ((!bVar4) && (bVar4 = FUN_8203af50(), bVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_8207c6b0(auStack_6f,0,0x13);
    }
    *(undefined1 *)(iVar1 + 0x546) = 1;
  }
  if (*(char *)(iVar1 + 0x540) == '\x01') {
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    if (((*(char *)(iVar1 + 0x543) != '\0') || (*(char *)(iVar1 + 0x544) != '\0')) ||
       ((*(char *)(iVar1 + 0x545) != '\0' || (bVar4 = false, *(char *)(iVar1 + 0x546) != '\0')))) {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_82023bb8();
    }
    else {
      FUN_82023bb8();
    }
  }
  else {
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82023bb8();
  }
  FUN_820282f0();
  FUN_82023bb8();
  FUN_820282f0();
  cVar3 = FUN_8202bf60();
  if ((cVar3 == '\x01') &&
     ((*(char *)(iVar1 + 0x4c4) == '\x01' || (*(char *)(iVar1 + 0x4c6) == '\x01')))) {
    *(undefined1 *)(iVar1 + 0x541) = 1;
    *(bool *)(iVar1 + 0x547) = *(char *)(iVar1 + 0x4c4) == '\0';
    *(bool *)(iVar1 + 0x548) = *(char *)(iVar1 + 0x4c6) == '\0';
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    if ((*(char *)(iVar1 + 0x547) != '\0') || (bVar4 = false, *(char *)(iVar1 + 0x548) != '\0')) {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_82023bb8();
    }
    else {
      FUN_82023bb8();
    }
  }
  else {
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82021fa0();
    FUN_82021e00();
    FUN_82023bb8();
  }
  FUN_820282f0();
  if ((((*(char *)(iVar1 + 0x543) != '\0') || (*(char *)(iVar1 + 0x544) != '\0')) ||
      (*(char *)(iVar1 + 0x545) != '\0')) || (bVar4 = false, *(char *)(iVar1 + 0x546) != '\0')) {
    bVar4 = true;
  }
  if (bVar4) {
LAB_82028b5c:
    uVar5 = 1;
  }
  else {
    if ((*(char *)(iVar1 + 0x547) != '\0') || (bVar4 = false, *(char *)(iVar1 + 0x548) != '\0')) {
      bVar4 = true;
    }
    uVar5 = 0;
    if (bVar4) goto LAB_82028b5c;
  }
  *(undefined1 *)(iVar1 + 4) = 1;
  *(undefined1 *)(iVar1 + 0x542) = uVar5;
LAB_82028b68:
  FUN_82021fa0();
  FUN_82021e00();
  while (piVar2 = (int *)FUN_82021fa0(), piVar2[0x18] != piVar2[1] - *piVar2 >> 2) {
    FUN_8203b900();
  }
  FUN_820228e8();
  FUN_82023bb8();
  FUN_82028518();
  FUN_820228e8();
  FUN_82023bb8();
  FUN_82028598();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028bf8 @ 82028bf8 ==== */

void FUN_82028bf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82028fa8 @ 82028fa8 ==== */

void FUN_82028fa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82029090 @ 82029090 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029090(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029108 @ 82029108 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029108(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820292b8 @ 820292b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820292b8(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x551) = param_2;
  *(undefined1 *)(param_1 + 0x552) = param_3;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x553) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820292d8 @ 820292d8 ==== */

undefined4 FUN_820292d8(void)

{
  return 0xc0000001;
}


/* ==== FUN_820292e8 @ 820292e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_820292e8(undefined4 param_1)

{
  if (iRam820c0cf8 != -1) {
    thunk_EXT_FUN_820b77f8();
    return 0;
  }
  iRam820c0cf8 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029340 @ 82029340 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029340(void)

{
  uRam820c0cf8 = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029368 @ 82029368 ==== */

uint FUN_82029368(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  FUN_8203c160();
  return ((((uint)local_1e << 5 | (uint)local_1a) << 5 | (uint)local_18) << 6 | (uint)local_16) << 5
         | (local_20 - 0x3c) * 0x2000000 | (uint)(local_14 >> 1);
}


/* ==== FUN_820293d8 @ 820293d8 ==== */

bool FUN_820293d8(char param_1)

{
  return (bool)('\x01' - (param_1 == '\0'));
}


/* ==== FUN_820293e8 @ 820293e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820293e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820294c0 @ 820294c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820294c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029598 @ 82029598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029630 @ 82029630 ==== */

void FUN_82029630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820296f8 @ 820296f8 ==== */

void FUN_820296f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82029868 @ 82029868 ==== */

void FUN_82029868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82029978 @ 82029978 ==== */

void FUN_82029978(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82029ab8 @ 82029ab8 ==== */

void FUN_82029ab8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82029c78 @ 82029c78 ==== */

void FUN_82029c78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8202a588 @ 8202a588 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202a588(void)

{
  FUN_8207c494();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202a950 @ 8202a950 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8202add8) */

void FUN_8202a950(void)

{
  int iVar1;
  char cVar3;
  uint *puVar2;
  int aiStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_80;
  undefined2 *puStack_7c;
  undefined4 uStack_78;
  
  iVar1 = FUN_8207c488();
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_96 = 0;
  uStack_94 = 0;
  uStack_a8 = 0;
  uStack_92 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  aiStack_b0[0] = 0;
  FUN_82021fa0();
  FUN_82021e00();
  FUN_82021fa0();
  FUN_82021e00();
  *(undefined1 *)(iVar1 + 0x47c) = 0;
  *(undefined4 *)(iVar1 + 0x478) = 0;
  func_0x820b7578(&uStack_98,"\\Device\\Harddisk0\\PhysicalDisk");
  uStack_80 = 0;
  puStack_7c = &uStack_98;
  uStack_78 = 0x40;
  iVar1 = func_0x820b7568(aiStack_b0,0xc0100000,&uStack_80,&uStack_a0,0,0x80,3,1);
  if (iVar1 == 0) {
    cVar3 = FUN_820296f8();
    if (cVar3 != '\0') {
      puVar2 = (uint *)FUN_8203b768();
      if (puVar2 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_8207c6b0(puVar2,0,0x10000);
      }
      FUN_82021fa0();
      FUN_82033418();
    }
  }
  else {
    FUN_82021fa0();
    FUN_82021e58();
  }
  FUN_82023bb8();
  FUN_820282f0();
  if (aiStack_b0[0] != 0) {
    func_0x820b7548();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ae00 @ 8202ae00 ==== */

void FUN_8202ae00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8202aef0 @ 8202aef0 ==== */

void FUN_8202aef0(void)

{
  FUN_8203b280();
  FUN_8203b280();
  return;
}


/* ==== FUN_8202af38 @ 8202af38 ==== */

void FUN_8202af38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8202b210 @ 8202b210 ==== */

void FUN_8202b210(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8202b628 @ 8202b628 ==== */

void FUN_8202b628(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8202b918 @ 8202b918 ==== */

void FUN_8202b918(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8202bbd0 @ 8202bbd0 ==== */

void FUN_8202bbd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8202bd08 @ 8202bd08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202bd08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202be90 @ 8202be90 ==== */

void FUN_8202be90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8202bf60 @ 8202bf60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202bf60(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  int local_11c [3];
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined4 local_f0;
  undefined2 *local_ec;
  undefined4 local_e8;
  
  puVar1 = (undefined1 *)FUN_8207c484();
  local_100 = 0;
  local_110 = 0;
  local_fe = 0;
  local_fc = 0;
  local_fa = 0;
  local_10c = 0;
  local_11c[0] = 0;
  func_0x820b7578(&local_100,"\\Device\\Harddisk0\\PhysicalDisk");
  local_ec = &local_100;
  local_f0 = 0;
  local_e8 = 0x40;
  iVar2 = func_0x820b7568(local_11c,0xc0100000,&local_f0,&local_110,0,0x80,3,1);
  if (iVar2 == 0) {
    *puVar1 = 1;
    puVar3 = (uint *)FUN_8203b768();
    if (puVar3 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_8207c6b0(puVar3,0,0x7c000);
    }
    FUN_82021fa0();
    FUN_82033418();
  }
  else {
    FUN_82021fa0();
    FUN_82021e58();
  }
  if (local_11c[0] != 0) {
    func_0x820b7548();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c540 @ 8202c540 ==== */

void FUN_8202c540(void)

{
  syscall(0);
  return;
}


/* ==== FUN_8202c550 @ 8202c550 ==== */

void FUN_8202c550(void)

{
  syscall(0);
  return;
}


/* ==== FUN_8202c560 @ 8202c560 ==== */

void FUN_8202c560(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8202c6b8 @ 8202c6b8 ==== */

byte * FUN_8202c6b8(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (uint)param_1[2];
  }
  else if (param_2 == 1) {
    uVar1 = (uint)*param_1;
  }
  else {
    if (2 < param_2) {
      return param_1;
    }
    uVar1 = (uint)param_1[5];
  }
  return (byte *)((uint)CONCAT21(CONCAT11(param_1[6],param_1[4]),param_1[3]) << 8 | uVar1);
}


/* ==== FUN_8202c708 @ 8202c708 ==== */

void FUN_8202c708(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8202c7c0 @ 8202c7c0 ==== */

void FUN_8202c7c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x2a] = 0;
  param_1[0x2f] = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return;
}


/* ==== FUN_8202c7e8 @ 8202c7e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c7e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c860 @ 8202c860 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c860(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c948 @ 8202c948 ==== */

void FUN_8202c948(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8202ca90 @ 8202ca90 ==== */

void FUN_8202ca90(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  do {
    if ((uVar2 & 0x1f) == 0) {
      pbVar1 = param_1;
      if (uVar2 == 0x1000) {
        pbVar1 = param_2;
      }
      param_1 = pbVar1 + 4;
      uVar5 = ~((uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 |
               (uint)*pbVar1);
    }
    uVar4 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    uVar4 = uVar4 ^ uVar3;
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 ^ 0x6954559;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar4 >> 1;
  } while (uVar2 < 0x1066);
  uVar3 = ~uVar3;
  param_2[0xc] = (byte)(uVar3 << 6) | param_2[0xc] & 0x3f;
  param_2[0xd] = (byte)(uVar3 >> 2);
  param_2[0xe] = (byte)(uVar3 >> 10);
  param_2[0xf] = (byte)(uVar3 >> 0x12);
  return;
}


/* ==== FUN_8202cb18 @ 8202cb18 ==== */

void FUN_8202cb18(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_8202c7e8();
  return;
}


/* ==== FUN_8202cb30 @ 8202cb30 ==== */

void FUN_8202cb30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8202d440 @ 8202d440 ==== */

void FUN_8202d440(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8202d558 @ 8202d558 ==== */

void FUN_8202d558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8202d648 @ 8202d648 ==== */

void FUN_8202d648(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8202d7a8 @ 8202d7a8 ==== */

void FUN_8202d7a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8202dcf0 @ 8202dcf0 ==== */

void FUN_8202dcf0(void)

{
  FUN_8202d7a8();
  return;
}


/* ==== FUN_8202dd08 @ 8202dd08 ==== */

void FUN_8202dd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x8202dd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_820c938c)();
  return;
}


/* ==== FUN_8202dd28 @ 8202dd28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202dd28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202dde0 @ 8202dde0 ==== */

ushort FUN_8202dde0(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  iVar4 = 0xfc;
  do {
    pbVar1 = (byte *)(param_1 + 0x10 + iVar3);
    iVar3 = iVar3 + 1;
    uVar2 = *pbVar1 + uVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return ~uVar2;
}


/* ==== FUN_8202de10 @ 8202de10 ==== */

undefined4 FUN_8202de10(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = *param_1 >> 0x11 & 3;
  if (uVar2 == 0) {
    puVar1 = &DAT_820c28bc;
  }
  else if (uVar2 == 1) {
    puVar1 = &DAT_820c28cc;
  }
  else {
    if (uVar2 != 2) {
      return 0xffffffff;
    }
    puVar1 = &DAT_820c28dc;
  }
  uVar2 = *param_1 >> 4 & 3;
  if (3 < uVar2) {
    return 0xffffffff;
  }
  return *(undefined4 *)(puVar1 + uVar2 * 4);
}


/* ==== FUN_8202de70 @ 8202de70 ==== */

void FUN_8202de70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8202dfb0 @ 8202dfb0 ==== */

void FUN_8202dfb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8202e3f8 @ 8202e3f8 ==== */

void FUN_8202e3f8(void)

{
  uint auStack_fc [63];
  
  FUN_8207c478();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(auStack_fc,0,0x1c);
}


/* ==== FUN_8202e878 @ 8202e878 ==== */

void FUN_8202e878(void)

{
  uint auStack_ec [59];
  
  FUN_8207c478();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(auStack_ec,0,0x1c);
}


/* ==== FUN_8202ed60 @ 8202ed60 ==== */

void FUN_8202ed60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8202f548 @ 8202f548 ==== */

void FUN_8202f548(void)

{
  uint auStack_ff [63];
  
  FUN_8207c480();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(auStack_ff,0,0x13);
}


/* ==== FUN_8202fb48 @ 8202fb48 ==== */

void FUN_8202fb48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8202fc38 @ 8202fc38 ==== */

void FUN_8202fc38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8202ff30 @ 8202ff30 ==== */

void FUN_8202ff30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820302c8 @ 820302c8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x820304d4) */
/* WARNING: Removing unreachable block (ram,0x82030500) */
/* WARNING: Removing unreachable block (ram,0x82030514) */
/* WARNING: Removing unreachable block (ram,0x82030608) */
/* WARNING: Removing unreachable block (ram,0x8203062c) */
/* WARNING: Removing unreachable block (ram,0x82030614) */
/* WARNING: Removing unreachable block (ram,0x82030530) */
/* WARNING: Removing unreachable block (ram,0x820305c8) */

void FUN_820302c8(void)

{
  byte *pbVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar7;
  int iVar6;
  uint uVar8;
  int iVar9;
  byte local_260;
  byte bStack_25f;
  byte bStack_25e;
  byte bStack_25d;
  byte local_250 [256];
  uint local_150 [84];
  
  puVar3 = (uint *)FUN_8207c490();
  bVar2 = false;
  if (DAT_820c938c != 0) {
    FUN_8202dd08();
  }
  FUN_82023bb8();
  FUN_820282f0();
  puVar4 = (undefined4 *)FUN_82041738();
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_8202c7c0(puVar4);
  }
  cVar7 = FUN_8202cb30();
  if (cVar7 == '\0') {
    FUN_82021fa0();
    FUN_82033418();
  }
  else {
    cVar7 = FUN_8202fc38();
    if (cVar7 != '\0') {
      FUN_82023bb8();
      FUN_820282f0();
      FUN_82023bb8();
      FUN_820282f0();
      iVar6 = FUN_8202de10(puVar3);
      if (iVar6 == -1) {
        FUN_82021fa0();
        FUN_82021e58();
      }
      else {
        cVar7 = FUN_8202d648();
        if (cVar7 == '\0') {
          FUN_82021fa0();
        }
        else {
          uVar8 = 0;
          iVar6 = 0;
          iVar9 = 0xfc;
          do {
            pbVar1 = local_250 + iVar6;
            iVar6 = iVar6 + 1;
            uVar8 = *pbVar1 + uVar8;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          if (((uint)bStack_25d << 0x18 | (uint)bStack_25e << 0x10 | (uint)bStack_25f << 8 |
              (uint)local_260) == (~uVar8 & 0xffff)) {
            if (local_150[0] == 0x58425050) {
                    /* WARNING: Subroutine does not return */
              FUN_8207c6b0(local_150,0xff,0x10);
            }
            FUN_82023bb8();
            FUN_820282f0();
            FUN_82023bb8();
            FUN_820282f0();
            FUN_82021fa0();
            FUN_82021e00();
            FUN_82023bb8();
            FUN_820282f0();
            cVar7 = FUN_8202d558();
            if ((cVar7 != '\0') && (cVar7 = FUN_8202dcf0(), cVar7 != '\0')) {
              FUN_82023bb8();
              FUN_820282f0();
              bVar2 = true;
            }
            goto LAB_820305a8;
          }
          FUN_82021fa0();
        }
        FUN_82021e58();
      }
    }
  }
LAB_820305a8:
  if (!bVar2) {
    FUN_82023bb8();
    FUN_820282f0();
  }
  if (piVar5 != (int *)0x0) {
    FUN_8202cb18(piVar5);
    thunk_FUN_8207ce50();
  }
  if (DAT_820c938c != 0) {
    FUN_8202dd08();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030680 @ 82030680 ==== */

undefined * FUN_82030680(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  FUN_8203c5a8(&UNK_82005418);
  pcVar1 = (code *)FUN_8203c4b8();
  iVar2 = (*pcVar1)();
  piVar3 = (int *)&UNK_82005178;
  uVar4 = 0;
  do {
    if (*piVar3 == iVar2) {
      return &UNK_82005178 + uVar4 * 0x10;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 4;
  } while (uVar4 < 0x2a);
  return (undefined *)0x0;
}


/* ==== FUN_820306f8 @ 820306f8 ==== */

void FUN_820306f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82030778 @ 82030778 ==== */

void FUN_82030778(undefined4 *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != param_3) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
    if ((param_2 != param_3) && (pcVar2 = param_2 + 1, pcVar2 != param_3)) {
      iVar1 = (int)param_3 - (int)pcVar2;
      do {
        if (*pcVar2 != *param_4) {
          *param_2 = *pcVar2;
          param_2 = param_2 + 1;
        }
        pcVar2 = pcVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *param_1 = param_2;
  return;
}


/* ==== FUN_820307f8 @ 820307f8 ==== */

void FUN_820307f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82030948 @ 82030948 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820309b0 @ 820309b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820309b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030a30 @ 82030a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030b40 @ 82030b40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030b40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030ba8 @ 82030ba8 ==== */

void FUN_82030ba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82030cd0 @ 82030cd0 ==== */

void FUN_82030cd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82030de8 @ 82030de8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030de8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030e60 @ 82030e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030e60(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030e88 @ 82030e88 ==== */

void FUN_82030e88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82031088 @ 82031088 ==== */

void FUN_82031088(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820315d0 @ 820315d0 ==== */

void FUN_820315d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82031898 @ 82031898 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82031898(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x16) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820318c8 @ 820318c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820318c8(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x16) = param_4;
  *(undefined1 *)(param_1 + 0x17) = param_5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820318f8 @ 820318f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820318f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82031968 @ 82031968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82031968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032818 @ 82032818 ==== */

void FUN_82032818(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_82030de8();
  return;
}


/* ==== FUN_82032838 @ 82032838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032890 @ 82032890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820328f8 @ 820328f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820328f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032960 @ 82032960 ==== */

uint FUN_82032960(void)

{
  int iVar1;
  undefined4 local_10;
  uint local_c [3];
  
  local_10 = 0;
  local_c[0] = 0;
  iVar1 = func_0x820b7728("xboxkrnl.exe",&local_10);
  if (iVar1 == 0) {
    iVar1 = func_0x820b7718(local_10,0x3a4,local_c);
    local_c[0] = -(uint)(iVar1 == 0) & local_c[0];
  }
  else {
    local_c[0] = 0;
  }
  return local_c[0];
}


/* ==== FUN_820329c8 @ 820329c8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820329c8(void)

{
  if (*(short *)(_UNK_82000484 + 4) != 0x4497) {
    return;
  }
  uRam7fea101c = ((uRam7fea101c >> 0x10 & 0xfe) << 8 | 0x100) << 8 | 0xe6000000 |
                 (uRam7fea101c >> 8 & 0xff) << 8 | uRam7fea101c & 0xff;
  enforceInOrderExecutionIO();
  uRam801ae96c = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032a38 @ 82032a38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032a38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032a90 @ 82032a90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032a90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032ae0 @ 82032ae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032ae0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032be0 @ 82032be0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032be0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032d48 @ 82032d48 ==== */

void FUN_82032d48(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = 0xffffffff;
  param_1[10] = 0;
  return;
}


/* ==== FUN_82032d60 @ 82032d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032dd8 @ 82032dd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82032d60 @ 82032ea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82032d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032ea8 @ 82032ea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032ea8(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = (int *)FUN_8207c490();
  iVar6 = 5;
  piVar3 = (int *)(param_4 + -4);
  piVar1[1] = *param_3;
  piVar4 = piVar1 + 3;
  do {
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    *piVar4 = *piVar3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar5 = (uint)piVar1[1] >> 0x11 & 3;
  piVar1[2] = uVar5;
  if (uVar5 == 0) {
    piVar1[3] = 0;
  }
  else {
    if ((uVar5 != 1) && (uVar5 != 2)) {
      FUN_82021fa0();
LAB_82032f50:
      FUN_82021e00();
      halt_baddata();
    }
    uVar5 = (uint)piVar1[1] >> 4 & 3;
    if ((uVar5 == 0) || (uVar5 == 1)) {
      piVar1[3] = 1;
    }
    else {
      if ((uVar5 != 2) && (uVar5 != 3)) {
        FUN_82021fa0();
        goto LAB_82032f50;
      }
      piVar1[3] = 2;
    }
  }
  iVar6 = FUN_8203ba80();
  *piVar1 = iVar6;
  if (iVar6 == -1) {
    thunk_FUN_8203cd58();
    FUN_82021fa0();
    FUN_82021e58();
  }
  else {
    uVar5 = FUN_8203bdf8();
    if (uVar5 == piVar1[7] * (piVar1[5] + piVar1[4]) * piVar1[6]) {
      puVar2 = (uint *)FUN_8207ceb0();
      piVar1[9] = (int)puVar2;
      iVar6 = FUN_8207ceb0();
      piVar1[10] = iVar6;
      if ((puVar2 != (uint *)0x0) && (iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_8207c6b0(puVar2,0,uVar5);
      }
      FUN_82021fa0();
      FUN_82033418();
    }
    else {
      FUN_82021fa0();
      FUN_82021e58();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033228 @ 82033228 ==== */

void FUN_82033228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82033380 @ 82033380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033418 @ 82033418 ==== */

void FUN_82033418(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82033548 @ 82033548 ==== */

int FUN_82033548(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x7ffffff < param_1 || (iVar1 = FUN_82041738(), iVar1 == 0)))) {
    iVar1 = FUN_82022018();
  }
  return iVar1;
}


/* ==== FUN_820335b0 @ 820335b0 ==== */

void FUN_820335b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82033660 @ 82033660 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033660(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820336f0 @ 820336f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820336f0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar1) {
    FUN_820413f0();
    FUN_8207dea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 + param_2 <= (uint)(param_1[2] - *param_1 >> 2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82033768 @ 82033768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033840 @ 82033840 ==== */

void FUN_82033840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82033a88 @ 82033a88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033a88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033b00 @ 82033b00 ==== */

void FUN_82033b00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82033b58 @ 82033b58 ==== */

void FUN_82033b58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82033c18 @ 82033c18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033c18(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 5;
  if (0x7ffffffU - param_2 < uVar1) {
    FUN_820413f0();
    FUN_8207dea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 + param_2 <= (uint)(param_1[2] - *param_1 >> 5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82033c90 @ 82033c90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033d80 @ 82033d80 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82033e7c) */
/* WARNING: Removing unreachable block (ram,0x82033ed4) */
/* WARNING: Removing unreachable block (ram,0x82033ee8) */
/* WARNING: Removing unreachable block (ram,0x82033ef4) */
/* WARNING: Removing unreachable block (ram,0x82033fd0) */

void FUN_82033d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = FUN_8207c488();
  func_0x820b75b8(iVar2 + 0x44);
  pcVar6 = (char *)(iVar2 + 0x84);
  iVar3 = FUN_8207d2d8(pcVar6,0x400,param_3,param_4);
  pcVar1 = pcVar6;
  do {
    pcVar7 = pcVar1;
    iVar4 = FUN_820417f8(pcVar7,0x40);
    if (iVar4 == 0) goto LAB_82033f50;
    pcVar1 = (char *)(iVar4 + 1);
  } while (*(char *)(iVar4 + 1) != '@');
  if (4 < (iVar3 - iVar4) + iVar2 + 0x84) {
    puVar5 = (uint *)FUN_8207ceb0();
                    /* WARNING: Subroutine does not return */
    FUN_8207c6b0(puVar5,0,0x44);
  }
LAB_82033f50:
  if ((*pcVar6 != '\0') && (*pcVar7 == '\0')) {
    FUN_82033418();
    func_0x820b75a8(iVar2 + 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (uint *)FUN_8207ceb0();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(puVar5,0,0x44);
}


/* ==== FUN_82034018 @ 82034018 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034098 @ 82034098 ==== */

void FUN_82034098(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820349a8 @ 820349a8 ==== */

void FUN_820349a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82034ec8 @ 82034ec8 ==== */

void FUN_82034ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82035350 @ 82035350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035350(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035460 @ 82035460 ==== */

void FUN_82035460(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820354d8 @ 820354d8 ==== */

void FUN_820354d8(void)

{
  FUN_82023bb8();
  FUN_820284c8();
  return;
}


/* ==== FUN_82035550 @ 82035550 ==== */

void FUN_82035550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820357a8 @ 820357a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820357a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035888 @ 82035888 ==== */

void FUN_82035888(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82035bc0 @ 82035bc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035bc0(void)

{
  FUN_8203c470();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035c78 @ 82035c78 ==== */

void FUN_82035c78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82035e28 @ 82035e28 ==== */

void FUN_82035e28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82035f08 @ 82035f08 ==== */

void FUN_82035f08(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (((int *)*param_2 != (int *)0x0) && (piVar1 = *(int **)*param_2, piVar1 != (int *)0x0)) {
    piVar3 = (int *)*piVar1;
  }
  iVar2 = param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  param_1[2] = iVar2 - param_3;
  return;
}


/* ==== FUN_82035f60 @ 82035f60 ==== */

void FUN_82035f60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_82035e28();
  return;
}


/* ==== FUN_82035f90 @ 82035f90 ==== */

void FUN_82035f90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack0000001c;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    *(int *)(param_1 + 0x4c) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  uStack0000001c = param_2;
  FUN_82035e28();
  return;
}


/* ==== FUN_82035ff0 @ 82035ff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035ff0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036058 @ 82036058 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82036058(void)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 auStack_f0 [2];
  float afStack_e8 [2];
  int iStack_e0;
  int iStack_dc;
  
  uVar15 = FUN_8207c488();
  piVar2 = (int *)((ulonglong)uVar15 >> 0x20);
  uVar8 = (int)uVar15 + 1;
  uVar5 = piVar2[1] - *piVar2 >> 2;
  if (uVar5 <= uVar8) {
    uVar8 = uVar5;
  }
  FUN_8204c040();
  dVar14 = (double)DAT_82004c68;
  FUN_82054d28(dVar14,&iStack_e0,uVar8);
  bVar1 = true;
  cVar3 = FUN_82054e50();
  dVar13 = (double)DAT_82002f44;
  iVar10 = iStack_e0;
  do {
    if (cVar3 != '\x01') {
      uVar8 = piVar2[1] - *piVar2 >> 2;
      if (((uVar8 != 0) && (-1 < iStack_dc + -1)) && (iStack_dc - 1U <= uVar8)) {
        bVar1 = *(int *)(*(int *)(iStack_dc * 4 + *piVar2 + -4) + 0x34) == -1;
      }
      FUN_8204f720();
      if (!bVar1) {
        FUN_8204d448(dVar13,dVar14);
      }
      FUN_820524b0();
      FUN_8204d518(afStack_e8);
      FUN_8204d4f8(auStack_f0);
      if ((bVar1) || (**(int **)(iStack_dc * 4 + *piVar2 + -4) == 2)) {
        FUN_82035bc0();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iStack_e0 = iVar10;
    if (iVar10 < iStack_dc) {
      iVar11 = iVar10 << 2;
      do {
        if (*(int *)(*(int *)(*piVar2 + iVar11) + 0x34) == 0) {
          FUN_82061810();
        }
        piVar9 = *(int **)(*piVar2 + iVar11);
        iVar6 = *piVar9;
        if (iVar6 == 0) {
          iVar6 = piVar9[0xd];
          if ((iVar6 == -1) ||
             (iVar7 = *(int *)(*piVar2 + iVar11), *(uint *)(iVar7 + 0x18) <= *(uint *)(iVar7 + 0x34)
             )) {
            FUN_820636e8();
          }
          else if (0 < iVar6) {
            FUN_82022350();
            FUN_82022610();
            FUN_820636e8();
            FUN_82022350();
          }
          uVar8 = 0;
          iVar6 = *(int *)(*piVar2 + iVar11);
          iVar7 = *(int *)(iVar6 + 0x18);
          if (*(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x24) >> 5 != 0) {
            iVar12 = 0;
            do {
              if ((*(int *)(iVar6 + 0x34) != -1) && (*(int *)(iVar6 + 0x34) < iVar7)) break;
              FUN_8204d448(dVar13,dVar14);
              iVar6 = *(int *)(*piVar2 + iVar11);
              if ((*(int *)(iVar6 + 0x34) == -1) ||
                 (*(uint *)(*(int *)(iVar6 + 0x24) + iVar12 + 0x14) <= *(uint *)(iVar6 + 0x34))) {
                FUN_820636e8();
              }
              else {
                FUN_82022350();
                FUN_82022610();
                FUN_820636e8();
                FUN_82022350();
              }
              uVar8 = uVar8 + 1;
              iVar6 = *(int *)(*piVar2 + iVar11);
              iVar4 = *(int *)(iVar6 + 0x24) + iVar12;
              iVar12 = iVar12 + 0x20;
              iVar7 = *(int *)(iVar4 + 0x14) + iVar7;
            } while (uVar8 < (uint)(*(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x24) >> 5));
          }
        }
        else if (iVar6 == 1) {
          FUN_82063698();
          FUN_8204d448(dVar13,dVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar10 < iStack_dc);
    }
    cVar3 = FUN_82054e50();
    iVar10 = iStack_e0;
  } while( true );
}


/* ==== FUN_82036520 @ 82036520 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036520(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036ad8 @ 82036ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036ad8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036b38 @ 82036b38 ==== */

void FUN_82036b38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82036c98 @ 82036c98 ==== */

void FUN_82036c98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82036e80 @ 82036e80 ==== */

void FUN_82036e80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82037080 @ 82037080 ==== */

void FUN_82037080(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82037230 @ 82037230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037230(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037308 @ 82037308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037368 @ 82037368 ==== */

void FUN_82037368(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82037438 @ 82037438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037438(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820374b0 @ 820374b0 ==== */

void FUN_820374b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820375a8 @ 820375a8 ==== */

void FUN_820375a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820376a8 @ 820376a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820376a8(void)

{
  bool bVar1;
  int *piVar2;
  char cVar7;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_110;
  float afStack_c8 [2];
  undefined4 auStack_c0 [48];
  
  FUN_8207c494();
  piVar2 = (int *)FUN_8207d324();
  FUN_82060e98();
  local_110 = 0;
  puVar9 = (undefined4 *)0x0;
  FUN_8204d518(afStack_c8);
  FUN_8204d208(auStack_c0);
  cVar7 = FUN_8205f610();
  dVar13 = (double)DAT_820066d0;
  dVar16 = (double)DAT_82002f44;
  iVar4 = 0;
  if (cVar7 == '\x01') {
    dVar14 = (double)DAT_82006b98;
    FUN_82061780();
    FUN_8204d640(dVar16);
    FUN_82038c48();
    cVar7 = (**(code **)(*piVar2 + 8))(piVar2);
    if (cVar7 == '\x01') {
      local_110 = DAT_820c3f58;
    }
    FUN_820569c0();
    FUN_82038c48();
    cVar7 = (**(code **)(*piVar2 + 8))(piVar2);
    if (cVar7 == '\x01') {
      local_110 = DAT_820c3f5c;
    }
    FUN_82051990();
    FUN_82038c48();
    cVar7 = (**(code **)(*piVar2 + 8))(piVar2);
    if (cVar7 == '\x01') {
      local_110 = DAT_820c3f60;
    }
    piVar3 = (int *)FUN_82031968();
    bVar1 = (piVar3[1] - *piVar3 & 0xfffffffcU) != 0;
    if (bVar1) {
      FUN_82025008();
    }
    FUN_820569c0();
    FUN_82038c48();
    cVar7 = (**(code **)(*piVar2 + 8))(piVar2);
    if (cVar7 == '\x01') {
      local_110 = DAT_820c3f64;
    }
    FUN_82051990();
    FUN_82061810();
    if ((bVar1) && (*(char *)(piVar2 + 10) == '\x01')) {
      iVar4 = FUN_82031968();
      iVar11 = *(int *)(iVar4 + 0x10);
      iVar4 = FUN_82031968();
      if (iVar11 != *(int *)(iVar4 + 0x14)) {
        do {
          FUN_82031968();
          FUN_82027140();
          FUN_82022890();
          FUN_82037368();
          FUN_82061810();
          iVar11 = iVar11 + 0x1c;
          iVar4 = FUN_82031968();
        } while (iVar11 != *(int *)(iVar4 + 0x14));
      }
    }
    if ((*(char *)(piVar2[7] + 0x54) != '\x01') || (uVar8 = 1, *(char *)(piVar2 + 10) != '\x01')) {
      uVar8 = 0;
    }
    *(undefined1 *)(piVar2[7] + 0x78) = uVar8;
    iVar4 = FUN_82025008();
    if ((*(char *)(iVar4 + 0xd0) == '\0') || (iVar4 = FUN_82025008(), *(int *)(iVar4 + 0x540) != 1))
    {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = FUN_82025008();
    if ((*(char *)(iVar4 + 0xd0) == '\x01') &&
       (iVar4 = FUN_82025008(), *(int *)(iVar4 + 0x548) != 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar10 = 0;
    if (piVar2[8] != 0) {
      iVar4 = 0;
      do {
        iVar11 = FUN_82059420();
        FUN_82033768();
        if (*(int *)(piVar2[2] + 4) == iVar11) {
          FUN_8204c080();
          FUN_8204d4f8(auStack_c0);
          FUN_8204d710();
          FUN_8204d6f0();
          cVar7 = (**(code **)(*piVar2 + 4))(piVar2);
          if (cVar7 == '\x01') {
            FUN_8204bee8((float *)&DAT_820ca0d0);
            FUN_8204d380();
            FUN_8206fb10();
            FUN_8204bee8((float *)&DAT_820ca050);
            FUN_8204d380();
            FUN_8206fc20();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          FUN_8204d380();
          FUN_8206fc20();
          puVar9 = (undefined4 *)(piVar2[7] + iVar4);
          local_110 = puVar9[2];
        }
        FUN_820569c0();
        dVar12 = FUN_8204d558();
        FUN_82051c68((double)(float)(dVar12 + dVar14));
        FUN_82063698();
        FUN_82051990();
        cVar7 = (**(code **)(*piVar2 + 4))(piVar2);
        if ((cVar7 == '\x01') && (*(int *)(piVar2[2] + 4) == iVar11)) {
          pcVar5 = (char *)FUN_820328f8();
          uVar6 = FUN_8204b308(pcVar5,0x1000,'\x01');
          if (((uVar6 & 0xff) == 1) && (*(char *)(puVar9 + 3) == '\x01')) {
            if (puVar9[4] == 0) {
              FUN_82038f70();
            }
            else if ((puVar9[4] == 1) && ((code *)puVar9[7] != (code *)0x0)) {
              (*(code *)puVar9[7])(*puVar9,puVar9[8]);
            }
          }
        }
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x24;
      } while (uVar10 < (uint)piVar2[8]);
    }
    FUN_8204d690(dVar16);
    FUN_82061780();
    iVar4 = local_110;
  }
  cVar7 = (**(code **)(*piVar2 + 4))(piVar2);
  if (cVar7 == '\x01') {
    iVar11 = FUN_820328f8();
    dVar15 = (double)*(float *)(iVar11 + 100);
    iVar11 = FUN_820328f8();
    dVar12 = (double)*(float *)(iVar11 + 0x68);
    dVar14 = dVar16;
    if ((dVar16 <= dVar12) && (dVar14 = dVar12, dVar13 < dVar12)) {
      dVar14 = dVar13;
    }
    dVar12 = dVar16;
    if ((dVar16 <= dVar15) && (dVar12 = dVar15, dVar13 < dVar15)) {
      dVar12 = dVar13;
    }
    if ((double)(float)(dVar14 - dVar12) != dVar16) {
      dVar13 = FUN_8204d770();
      FUN_8204d788((double)(float)((double)(float)(dVar14 - dVar12) * (double)DAT_82006b84 + dVar13)
                  );
    }
  }
  FUN_8205c6e8();
  dVar13 = (double)DAT_82004c68;
  FUN_8204d448(dVar16,dVar13);
  FUN_82062e18();
  FUN_8204d448(dVar16,dVar13);
  FUN_82038820();
  cVar7 = FUN_8205f610();
  if (cVar7 == '\x01') {
    FUN_82056938();
    FUN_82063698();
    FUN_82051900();
    if (iVar4 != 0) {
      FUN_8204d710();
      FUN_82056a48();
      FUN_82063738();
      FUN_820519e8();
    }
  }
  FUN_8205c6e8();
  FUN_82060c58();
  cVar7 = (**(code **)(*piVar2 + 4))(piVar2);
  if (cVar7 == '\x01') {
    pcVar5 = (char *)FUN_820328f8();
    uVar10 = FUN_8204b308(pcVar5,0x2000,'\x01');
    if ((uVar10 & 0xff) == 1) {
      FUN_82038920();
    }
  }
  FUN_8207d370();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820381c0 @ 820381c0 ==== */

void FUN_820381c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82038378 @ 82038378 ==== */

void FUN_82038378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82038730 @ 82038730 ==== */

void FUN_82038730(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}


/* ==== FUN_82038748 @ 82038748 ==== */

void FUN_82038748(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = param_5;
  param_1[6] = param_6;
  return;
}


/* ==== FUN_82038770 @ 82038770 ==== */

void FUN_82038770(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 1;
  param_1[7] = param_5;
  param_1[8] = param_6;
  return;
}


/* ==== FUN_82038798 @ 82038798 ==== */

void FUN_82038798(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}


/* ==== FUN_820387b0 @ 820387b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820387b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038810 @ 82038810 ==== */

void FUN_82038810(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x10) = 1;
  return;
}


/* ==== FUN_82038820 @ 82038820 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038820(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038920 @ 82038920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038a20 @ 82038a20 ==== */

void FUN_82038a20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82038c48 @ 82038c48 ==== */

void FUN_82038c48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82038f70 @ 82038f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038f70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038fd8 @ 82038fd8 ==== */

void FUN_82038fd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820392f8 @ 820392f8 ==== */

void FUN_820392f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82039388 @ 82039388 ==== */

void FUN_82039388(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82039968 @ 82039968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039ad0 @ 82039ad0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039ad0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039b98 @ 82039b98 ==== */

void FUN_82039b98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8203a288 @ 8203a288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203a288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203a490 @ 8203a490 ==== */

void FUN_8203a490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203a6f0 @ 8203a6f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203a6f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203a7c0 @ 8203a7c0 ==== */

void FUN_8203a7c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8203ab80 @ 8203ab80 ==== */

void FUN_8203ab80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203ac78 @ 8203ac78 ==== */

void FUN_8203ac78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== entry @ 8203ad20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void entry(void)

{
  code *in_r11;
  
  (*in_r11)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ae20 @ 8203ae20 ==== */

void FUN_8203ae20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203af50 @ 8203af50 ==== */

bool FUN_8203af50(void)

{
  int iVar1;
  
  iVar1 = FUN_8203ba80();
  if (iVar1 != -1) {
    FUN_8203ba38();
  }
  return iVar1 != -1;
}


/* ==== FUN_8203afa0 @ 8203afa0 ==== */

void FUN_8203afa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8203b088 @ 8203b088 ==== */

void FUN_8203b088(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8203b138 @ 8203b138 ==== */

void FUN_8203b138(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8203b280 @ 8203b280 ==== */

void FUN_8203b280(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8203b2f0 @ 8203b2f0 ==== */

void FUN_8203b2f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8203b430 @ 8203b430 ==== */

void FUN_8203b430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203b558 @ 8203b558 ==== */

void FUN_8203b558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8203b768 @ 8203b768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203b768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b7f0 @ 8203b7f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203b7f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b860 @ 8203b860 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203b860(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b870 @ 8203b870 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203b870(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b900 @ 8203b900 ==== */

void FUN_8203b900(void)

{
  FUN_8203b870();
  return;
}


/* ==== thunk_FUN_8203cd58 @ 8203b908 ==== */

undefined4 thunk_FUN_8203cd58(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_8203b910 @ 8203b910 ==== */

void FUN_8203b910(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8203ba38 @ 8203ba38 ==== */

bool FUN_8203ba38(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_820c4c1c + 4))();
  if (iVar1 < 0) {
    FUN_8203cd20();
  }
  return iVar1 >= 0;
}


/* ==== FUN_8203ba80 @ 8203ba80 ==== */

void FUN_8203ba80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8203bc78 @ 8203bc78 ==== */

void FUN_8203bc78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203bdf8 @ 8203bdf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203bdf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203be60 @ 8203be60 ==== */

undefined4 FUN_8203be60(void)

{
  int unaff_r13;
  
  return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x14c);
}


/* ==== FUN_8203be70 @ 8203be70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203be70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203bee0 @ 8203bee0 ==== */

bool FUN_8203bee0(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  char *pcStack_24;
  undefined1 auStack_20 [8];
  uint uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  
  func_0x820b7578(auStack_28,param_1);
  iVar1 = func_0x820b77e8();
  if ((iVar1 == 2) && (pcStack_24 != (char *)0x0)) {
    uStack_18 = -(uint)(*pcStack_24 != '\\') & 0xfffffffd;
  }
  else {
    uStack_18 = 0xfffffffd;
  }
  puStack_14 = auStack_28;
  uStack_10 = 0x40;
  iVar1 = func_0x820b7568(auStack_30,0x100001,&uStack_18,auStack_20,0,0x80,3,2);
  if (iVar1 < 0) {
    FUN_8203cd20();
  }
  else {
    func_0x820b7548(auStack_30[0]);
  }
  return iVar1 >= 0;
}


/* ==== FUN_8203bfa8 @ 8203bfa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203bfa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c000 @ 8203c000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_820b77f8 @ 8203c090 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820b77f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c098 @ 8203c098 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c098(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c150 @ 8203c150 ==== */

/* WARNING: Removing unreachable block (ram,0x8203d0b8) */

undefined4
FUN_8203c150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  iVar1 = func_0x820b7928(auStack_10,param_2,param_6,&LAB_8203b9f0,param_3,param_4,param_5 >> 2 & 1)
  ;
  if (iVar1 < 0) {
    FUN_8203cd20();
    auStack_10[0] = 0;
  }
  return auStack_10[0];
}


/* ==== FUN_8203c160 @ 8203c160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c160(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c1f8 @ 8203c1f8 ==== */

void FUN_8203c1f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203c300 @ 8203c300 ==== */

void FUN_8203c300(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203c470 @ 8203c470 ==== */

undefined4 FUN_8203c470(void)

{
  return *(undefined4 *)(DAT_820004e4 + 0x10);
}


/* ==== FUN_8203c480 @ 8203c480 ==== */

bool FUN_8203c480(void)

{
  int iVar1;
  
  iVar1 = func_0x820b7738();
  if (-1 >= iVar1) {
    thunk_FUN_8203cd20();
  }
  return -1 < iVar1;
}


/* ==== FUN_8203c4b8 @ 8203c4b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c4b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c528 @ 8203c528 ==== */

undefined4 FUN_8203c528(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = func_0x820b7848(param_1,9,0,local_10);
  if (iVar1 < 0) {
    thunk_FUN_8203cd20();
    local_10[0] = 0;
  }
  return local_10[0];
}


/* ==== FUN_8203c570 @ 8203c570 ==== */

bool FUN_8203c570(void)

{
  int iVar1;
  
  iVar1 = func_0x820b7858();
  if (-1 >= iVar1) {
    thunk_FUN_8203cd20();
  }
  return -1 < iVar1;
}


/* ==== FUN_8203c5a8 @ 8203c5a8 ==== */

undefined4 FUN_8203c5a8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = func_0x820b7728(param_1,local_10);
  if (iVar1 < 0) {
    FUN_8203cd20();
    local_10[0] = 0;
  }
  return local_10[0];
}


/* ==== FUN_8203c5e8 @ 8203c5e8 ==== */

char * FUN_8203c5e8(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_1);
}


/* ==== FUN_8203c610 @ 8203c610 ==== */

bool FUN_8203c610(undefined4 param_1)

{
  int iVar1;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  func_0x820b7578(&uStack_10,param_1);
  iVar1 = FUN_8203d000(&uStack_10);
  if (iVar1 < 0) {
    thunk_FUN_8203cd20();
  }
  return iVar1 >= 0;
}


/* ==== FUN_8203c668 @ 8203c668 ==== */

bool FUN_8203c668(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  iVar1 = func_0x820b7868(param_1,auStack_10);
  if (iVar1 < 0) {
    FUN_8203cd20();
  }
  return iVar1 >= 0;
}


/* ==== FUN_8203c6a8 @ 8203c6a8 ==== */

void FUN_8203c6a8(void)

{
  FUN_8203d190();
  return;
}


/* ==== thunk_FUN_8207d788 @ 8203c780 ==== */

int thunk_FUN_8207d788(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


/* ==== FUN_8203c788 @ 8203c788 ==== */

void FUN_8203c788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8203c840 @ 8203c840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c8c0 @ 8203c8c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c8c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_8203cd08 @ 8203cd00 ==== */

void thunk_FUN_8203cd08(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_8203cd08 @ 8203cd08 ==== */

void FUN_8203cd08(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_8203cd20 @ 8203cd20 ==== */

void FUN_8203cd20(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x820b78b8();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_8203cd58 @ 8203cd58 ==== */

undefined4 FUN_8203cd58(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_8203cd78 @ 8203cd78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203cd78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ce18 @ 8203ce18 ==== */

void FUN_8203ce18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203cfa0 @ 8203cfa0 ==== */

int FUN_8203cfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int aiStack_10 [4];
  
  iVar1 = (**(code **)(DAT_820c4c1c + 0x18))(param_1,0,0,0,aiStack_10,param_2,param_3,0);
  if (-1 < iVar1) {
    iVar1 = aiStack_10[0];
  }
  return iVar1;
}


/* ==== FUN_8203d000 @ 8203d000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d098 @ 8203d098 ==== */

undefined4
FUN_8203d098(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10 [4];
  
  uVar2 = param_5 >> 2 & 1;
  if (param_6 != 0xffffffff) {
    uVar2 = (1 << (param_6 & 0x3f)) << 0x18 | uVar2;
  }
  iVar1 = func_0x820b7928(local_10,param_2,param_7,&LAB_8203b9f0,param_3,param_4,uVar2);
  if (iVar1 < 0) {
    FUN_8203cd20();
    local_10[0] = 0;
  }
  return local_10[0];
}


/* ==== FUN_8203d108 @ 8203d108 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d108(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_8203cd20 @ 8203d188 ==== */

void thunk_FUN_8203cd20(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x820b78b8();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_8203d190 @ 8203d190 ==== */

void FUN_8203d190(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203d1f8 @ 8203d1f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d1f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d290 @ 8203d290 ==== */

uint FUN_8203d290(void)

{
  int iVar1;
  uint uVar2;
  undefined2 local_10 [2];
  uint local_c [3];
  
  local_10[0] = 0;
  iVar1 = func_0x820b7888(3,9,local_c,4,local_10);
  local_c[0] = 0xffffffffU - (iVar1 >> 0x1f) & local_c[0];
  if ((local_c[0] == 0) || (0x11 < local_c[0])) {
    uVar2 = func_0x820b7508();
    if ((uVar2 & 0xff00) == 0x100) {
      if (uVar2 == 0x101) {
        local_c[0] = 2;
      }
      else {
        local_c[0] = 7;
      }
    }
    else {
      local_c[0] = 1;
    }
  }
  return local_c[0];
}


/* ==== FUN_8203d320 @ 8203d320 ==== */

undefined4 FUN_8203d320(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam820cc2e4;
  uRam820cc2e4 = param_1;
  return uVar1;
}


/* ==== FUN_8203d338 @ 8203d338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d338(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d3e8 @ 8203d3e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d3e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d478 @ 8203d478 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8203d478(void)

{
  return _UNK_8200053c;
}


/* ==== FUN_8203d488 @ 8203d488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d568 @ 8203d568 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d5e0 @ 8203d5e0 ==== */

void FUN_8203d5e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203d648 @ 8203d648 ==== */

void FUN_8203d648(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8203d6b8 @ 8203d6b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d6b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d790 @ 8203d790 ==== */

void FUN_8203d790(void)

{
  int iVar1;
  
  iVar1 = FUN_8203d6b8();
  if (iVar1 == 0) {
    if (*DAT_82000538 != 0) {
      (**(code **)(*DAT_82000538 + 0x18))(2,0);
    }
    func_0x820b7758(1);
  }
  return;
}


/* ==== FUN_8203d870 @ 8203d870 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d870(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d9f8 @ 8203d9f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8203d9f8(undefined4 param_1,int param_2)

{
  if (param_2 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203da18 @ 8203da18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203da18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203dab8 @ 8203dab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203dab8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203dc90 @ 8203dc90 ==== */

void FUN_8203dc90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203ddb0 @ 8203ddb0 ==== */

void FUN_8203ddb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8203e040 @ 8203e040 ==== */

void FUN_8203e040(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8203e448 @ 8203e448 ==== */

void FUN_8203e448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8203e580 @ 8203e580 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203e580(undefined4 param_1,undefined4 param_2,ushort *param_3,uint param_4,uint param_5)

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
  uint auStack_60 [24];
  
  uVar13 = FUN_8207c490();
  iVar3 = (int)(uVar13 >> 0x20);
  if (*(uint *)(iVar3 + 0x1c) < param_5) {
    halt_baddata();
  }
  auStack_60[0] = (uint)*param_3;
  bVar1 = *(byte *)((int)param_3 + 5);
  puVar12 = param_3 + auStack_60[0] * 8;
  if ((bVar1 & 0x10) == 0) {
    bVar2 = *(byte *)((int)puVar12 + 5);
    if ((bVar2 & 1) != 0) {
      halt_baddata();
    }
    auStack_60[0] = *puVar12 + auStack_60[0];
    if (auStack_60[0] < param_5) {
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
      func_0x820b79c8(puVar12 + 0xc,uVar10,0xfeeefeee);
    }
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar12;
    uVar10 = auStack_60[0];
  }
  else {
    auStack_60[0] = (param_5 - auStack_60[0]) * 0x10 + 0xffff & 0xffff0000;
    iVar4 = FUN_8203ddb0(iVar3,*(undefined4 *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3),
                         auStack_60,puVar12);
    if (iVar4 == 0) {
      halt_baddata();
    }
    auStack_60[0] = auStack_60[0] >> 4;
    iVar4 = FUN_8203e040(iVar3,iVar4,auStack_60,0);
    bVar2 = *(byte *)(iVar4 + 5);
    uVar10 = *param_3 + auStack_60[0];
    if (*param_3 + auStack_60[0] < param_5) {
      FUN_8203e448();
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + auStack_60[0];
      halt_baddata();
    }
  }
  auStack_60[0] = uVar10 - param_5;
  uVar10 = (uint)*param_3 * 0x10 - (uint)*(byte *)(param_3 + 3);
  if (auStack_60[0] < 3) {
    param_5 = auStack_60[0] + param_5;
    auStack_60[0] = 0;
  }
  if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (ushort)param_5;
  if (auStack_60[0] == 0) {
    *(byte *)((int)param_3 + 5) = *(byte *)((int)param_3 + 5) | bVar2 & 0x10;
    *(char *)(param_3 + 3) = (char)(param_5 << 4) - (char)param_4;
    *param_3 = uVar9;
    if ((bVar2 & 0x10) == 0) {
      param_3[(param_5 & 0xffff) * 8 + 1] = uVar9;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3) + 0x40) = param_3;
    }
    goto LAB_8203eac4;
  }
  puVar12 = param_3 + param_5 * 8;
  *param_3 = uVar9;
  *(char *)(param_3 + 3) = (char)param_5 * '\x10' - (char)param_4;
  puVar12[1] = uVar9;
  bVar1 = *(byte *)(param_3 + 2);
  *(byte *)(puVar12 + 2) = bVar1;
  uVar9 = (ushort)auStack_60[0];
  if ((bVar2 & 0x10) == 0) {
    puVar11 = puVar12 + auStack_60[0] * 8;
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
        func_0x820b79c8(puVar11 + 0xc,uVar5,0xfeeefeee);
      }
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar11;
      auStack_60[0] = *puVar11 + auStack_60[0];
      *(byte *)((int)puVar12 + 5) = bVar1;
      if (0xf000 < auStack_60[0]) {
        FUN_8203e448();
        goto LAB_8203eac4;
      }
      *puVar12 = (ushort)auStack_60[0];
      if ((bVar1 & 0x10) == 0) {
        puVar12[auStack_60[0] * 8 + 1] = (ushort)auStack_60[0];
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar12;
      }
      *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
      uVar5 = auStack_60[0] & 0xffff;
      if (0x7f < uVar5) {
        for (piVar7 = *(int **)(iVar3 + 0x180);
            ((int *)(iVar3 + 0x180) != piVar7 && (*(ushort *)(piVar7 + -2) < uVar5));
            piVar7 = (int *)*piVar7) {
        }
        goto LAB_8203ea8c;
      }
      goto LAB_8203ea2c;
    }
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xef;
    *puVar12 = uVar9;
    puVar12[auStack_60[0] * 8 + 1] = uVar9;
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
    if ((auStack_60[0] & 0xffff) < 0x80) goto LAB_8203e8dc;
    for (piVar7 = *(int **)(iVar3 + 0x180);
        ((int *)(iVar3 + 0x180) != piVar7 &&
        ((uint)*(ushort *)(piVar7 + -2) < (auStack_60[0] & 0xffff))); piVar7 = (int *)*piVar7) {
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + iVar3) + 0x40) = puVar12;
    *(byte *)((int)puVar12 + 5) = bVar2;
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xf8;
    *puVar12 = uVar9;
    if ((auStack_60[0] & 0xffff) < 0x80) {
LAB_8203e8dc:
      uVar5 = auStack_60[0] & 0xffff;
LAB_8203ea2c:
      piVar7 = (int *)((uVar5 + 0x30) * 8 + iVar3);
      if ((int *)*piVar7 == piVar7) {
        iVar4 = ((*puVar12 >> 5) + 0x58) * 4;
        *(uint *)(iVar4 + iVar3) = 1 << (*puVar12 & 0x1f) | *(uint *)(iVar4 + iVar3);
      }
    }
    else {
      for (piVar7 = *(int **)(iVar3 + 0x180);
          ((int *)(iVar3 + 0x180) != piVar7 &&
          ((uint)*(ushort *)(piVar7 + -2) < (auStack_60[0] & 0xffff))); piVar7 = (int *)*piVar7) {
      }
    }
  }
LAB_8203ea8c:
  puVar6 = (undefined4 *)piVar7[1];
  *(int **)(puVar12 + 4) = piVar7;
  *(undefined4 **)(puVar12 + 6) = puVar6;
  *puVar6 = puVar12 + 4;
  piVar7[1] = (int)(puVar12 + 4);
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + auStack_60[0];
LAB_8203eac4:
  if (((uVar13 & 8) != 0) && (uVar10 < param_4)) {
                    /* WARNING: Subroutine does not return */
    FUN_8207c6b0((uint *)((int)param_3 + uVar10 + 0x10),0,param_4 - uVar10);
  }
  *(byte *)((int)param_3 + 5) =
       (byte)((uint)uVar13 >> 4) & 0xe0 | *(byte *)((int)param_3 + 5) & 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203eb00 @ 8203eb00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203eb00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203eba8 @ 8203eba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203eba8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  
  uVar8 = FUN_8207c490();
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
    iVar3 = func_0x820b7988(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar2 + 0x2c8));
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
    FUN_8203dc90();
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_8203e448();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ed10 @ 8203ed10 ==== */

void FUN_8203ed10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8203ef50 @ 8203ef50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ef50(undefined4 param_1,undefined4 param_2,int param_3)

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
  uint uStack_80;
  ushort *apuStack_7c [31];
  
  uVar14 = FUN_8207c484();
  iVar2 = (int)((ulonglong)uVar14 >> 0x20);
  puVar5 = (ushort *)uVar14;
  if (*(int *)(iVar2 + 0x584) == 0) {
    apuStack_7c[0] = (ushort *)((int)puVar5 + 0xffffU & 0xffff0000);
    puVar10 = (ushort *)0x0;
    uVar12 = (int)apuStack_7c[0] - (int)puVar5 >> 4 & 0xffff;
    iVar11 = *(int *)((*(byte *)(puVar5 + 2) + 0x18) * 4 + iVar2);
    if (uVar12 == 1) {
      apuStack_7c[0] = apuStack_7c[0] + 0x8000;
      uVar12 = 0x1001;
    }
    else if ((puVar5[1] != 0) && (apuStack_7c[0] == puVar5)) {
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
    uStack_80 = (int)puVar7 - (int)apuStack_7c[0];
    if (puVar7 <= apuStack_7c[0]) {
      uStack_80 = 0;
    }
    if ((uStack_80 != 0) && (puVar3 = (undefined4 *)FUN_8203dab8(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = func_0x820b79b8(apuStack_7c,&uStack_80,0x4000,*(undefined4 *)(iVar2 + 0x590));
      *puVar3 = *(undefined4 *)(*(int *)(iVar11 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar11 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_8203dc90();
        *(uint *)(iVar11 + 0x30) = (uStack_80 >> 0x10) + *(int *)(iVar11 + 0x30);
        if (uVar12 == 0) {
          if (puVar10 == (ushort *)0x0) {
            if ((apuStack_7c[0] <= *(ushort **)(iVar11 + 0x40)) &&
               (*(ushort **)(iVar11 + 0x40) < (ushort *)(uStack_80 + (int)apuStack_7c[0]))) {
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
  FUN_8203e448();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f2b8 @ 8203f2b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f2b8(void)

{
  FUN_8207c488();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f888 @ 8203f888 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f888(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  uint *puStack_ec;
  uint uStack_e8;
  ushort *puStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int iStack_c4;
  ushort *puStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_8;
  
  uVar18 = FUN_8207c490();
  iVar5 = (int)((ulonglong)uVar18 >> 0x20);
  puStack_dc = (uint *)0x0;
  uStack_d8 = 0;
  iStack_c4 = iVar5;
  if (((*(uint *)(iVar5 + 0x14) & 0x40000) != 0) &&
     (uVar4 = func_0x820b77e8(), *(byte *)(iVar5 + 0x17b) != uVar4)) {
    func_0x820b79a8(0xf4,iVar5,uStack_8,0x5ea,param_3);
  }
  uVar15 = *(uint *)(iVar5 + 0x18) | (uint)uVar18;
  uVar4 = param_3;
  if (param_3 == 0) {
    uVar4 = 1;
  }
  uVar4 = uVar4 + 0x1f;
  uStack_e8 = uVar4 & 0xfffffff0;
  uVar8 = uVar4 >> 4;
  bVar2 = (uVar15 & 1) == 0;
  if (bVar2) {
    func_0x820b75b8(*(undefined4 *)(iVar5 + 0x580));
    uStack_d8 = 1;
  }
  if (0x7f < uVar8) {
    if (*(uint *)(iVar5 + 0x1c) < uVar8) {
      if ((*(uint *)(iVar5 + 0x14) & 2) != 0) {
        uStack_e8 = uStack_e8 + 0x20;
        puStack_ec = (uint *)0x0;
        iVar5 = func_0x820b7988(&puStack_ec,&uStack_e8,(~uVar15 & 8) << 0x14 | 0x60001000,4,
                                *(undefined4 *)(iVar5 + 0x590));
        if (-1 < iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_8207c6b0(puStack_ec,0,0x30);
        }
      }
    }
    else {
LAB_8203fb40:
      piStack_d0 = *(int **)(iVar5 + 0x184);
      piVar12 = (int *)(iVar5 + 0x180);
      if ((piVar12 != piStack_d0) &&
         (puStack_e4 = (ushort *)(piStack_d0 + -2), uVar8 <= *puStack_e4)) {
        for (piStack_d0 = (int *)*piVar12; piVar12 != piStack_d0; piStack_d0 = (int *)*piStack_d0) {
          puStack_e4 = (ushort *)(piStack_d0 + -2);
          if (uVar8 <= *puStack_e4) {
            piVar12 = (int *)piStack_d0[1];
            iVar7 = *piStack_d0;
            if (((int *)*piVar12 == *(int **)(iVar7 + 4)) && ((int *)*piVar12 == piStack_d0)) {
              *piVar12 = iVar7;
              *(int **)(iVar7 + 4) = piVar12;
            }
            goto LAB_8203fc14;
          }
        }
      }
      puStack_e4 = (ushort *)FUN_8203ed10();
      if (puStack_e4 != (ushort *)0x0) {
        piVar12 = *(int **)(puStack_e4 + 6);
        iVar7 = *(int *)(puStack_e4 + 4);
        if (((ushort *)*piVar12 == *(ushort **)(iVar7 + 4)) &&
           ((ushort *)*piVar12 == puStack_e4 + 4)) {
          *piVar12 = iVar7;
          *(int **)(iVar7 + 4) = piVar12;
        }
        goto LAB_8203fc14;
      }
    }
    if ((uVar15 & 4) != 0) {
      uStack_b0 = 0xc0000017;
      uStack_a8 = 0;
      uStack_a0 = 1;
      uStack_ac = 0;
      uStack_9c = uStack_e8;
      func_0x820b7838(&uStack_b0);
    }
    puStack_dc = (uint *)0x0;
    goto LAB_820400f0;
  }
  piVar12 = (int *)((uVar8 + 0x30) * 8 + iVar5);
  if ((int *)*piVar12 == piVar12) {
    uVar4 = uVar4 >> 9;
    puVar6 = (uint *)((uVar4 + 0x58) * 4 + iVar5);
    puStack_e0 = puVar6 + 1;
    uStack_d4 = *puVar6 & ~((1 << (uVar8 & 0x1f)) - 1U);
    if (uVar4 == 0) {
      if (uStack_d4 == 0) {
        uStack_d4 = *puStack_e0;
        puStack_e0 = puVar6 + 2;
        goto LAB_8203fa68;
      }
      iVar7 = iVar5 + 0x180;
    }
    else if (uVar4 == 1) {
LAB_8203fa68:
      if (uStack_d4 == 0) {
        uStack_d4 = *puStack_e0;
        puStack_e0 = puStack_e0 + 1;
        goto LAB_8203fa88;
      }
      iVar7 = iVar5 + 0x280;
    }
    else {
      if (uVar4 < 3) {
LAB_8203fa88:
        if (uStack_d4 != 0) {
          iVar7 = iVar5 + 0x380;
          goto LAB_8203fab4;
        }
        uStack_d4 = *puStack_e0;
        puStack_e0 = puStack_e0 + 1;
      }
      else if (uVar4 != 3) goto LAB_8203fb40;
      if (uStack_d4 == 0) goto LAB_8203fb40;
      iVar7 = iVar5 + 0x480;
    }
LAB_8203fab4:
    puVar13 = *(undefined4 **)((0x1f - LZCOUNT(uStack_d4 & ~(uStack_d4 - 1))) * 8 + iVar7 + 4);
    puStack_e4 = (ushort *)(puVar13 + -2);
    piVar9 = (int *)puVar13[1];
    piVar12 = (int *)*puVar13;
    if (((undefined4 *)*piVar9 == (undefined4 *)piVar12[1]) && ((undefined4 *)*piVar9 == puVar13)) {
      *piVar9 = (int)piVar12;
      piVar12[1] = (int)piVar9;
      if (piVar12 == piVar9) {
        iVar7 = ((*puStack_e4 >> 5) + 0x58) * 4;
        *(uint *)(iVar7 + iVar5) = *(uint *)(iVar7 + iVar5) ^ 1 << (*puStack_e4 & 0x1f);
      }
    }
LAB_8203fc14:
    puVar16 = puStack_e4;
    bVar11 = *(byte *)((int)puStack_e4 + 5);
    *(uint *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) - (uint)*puStack_e4;
    *(undefined1 *)((int)puStack_e4 + 5) = 1;
    uVar4 = *puStack_e4 - uVar8;
    *puStack_e4 = (ushort)uVar8;
    *(char *)(puStack_e4 + 3) = (char)uStack_e8 - (char)param_3;
    *(undefined1 *)((int)puStack_e4 + 7) = 0;
    puStack_c0 = puStack_e4;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        *puStack_e4 = *puStack_e4 + 1;
        *(char *)(puStack_e4 + 3) = *(char *)(puStack_e4 + 3) + '\x10';
      }
      else {
        puVar17 = puStack_e4 + uVar8 * 8;
        uVar3 = uVar4 & 0xffff;
        *(byte *)((int)puVar17 + 5) = bVar11;
        puVar17[1] = (ushort)uVar8;
        *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(puStack_e4 + 2);
        *puVar17 = (ushort)uVar4;
        if ((bVar11 & 0x10) == 0) {
          puVar14 = puVar17 + uVar4 * 8;
          if ((*(byte *)((int)puVar14 + 5) & 1) != 0) {
            puVar14[1] = (ushort)uVar4;
            if (uVar3 < 0x80) {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar5);
              if ((int *)*piVar12 == piVar12) {
                iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
                uVar8 = *(uint *)(iVar7 + iVar5) | 1 << (*puVar17 & 0x1f);
                goto LAB_8203fda8;
              }
            }
            else {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              for (piVar12 = *(int **)(iVar5 + 0x180);
                  (piStack_c8 = piVar12, (int *)(iVar5 + 0x180) != piVar12 &&
                  (piStack_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                  piVar12 = (int *)*piVar12) {
              }
            }
            goto LAB_8203fdac;
          }
          *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar14 + 5);
          puVar13 = *(undefined4 **)(puVar14 + 4);
          puVar10 = *(undefined4 **)(puVar14 + 6);
          if (((ushort *)*puVar10 == (ushort *)puVar13[1]) && ((ushort *)*puVar10 == puVar14 + 4)) {
            *puVar10 = puVar13;
            puVar13[1] = puVar10;
            if ((puVar13 == puVar10) && (uVar1 = *puVar14, uVar1 < 0x80)) {
              iVar7 = ((uVar1 >> 5) + 0x58) * 4;
              *(uint *)(iVar7 + iVar5) = 1 << (uVar1 & 0x1f) ^ *(uint *)(iVar7 + iVar5);
            }
          }
          *(uint *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) - (uint)*puVar14;
          uVar4 = *puVar14 + uVar4;
          if (uVar4 < 0xf001) {
            uVar8 = uVar4 & 0xffff;
            *puVar17 = (ushort)uVar4;
            if ((*(byte *)((int)puVar17 + 5) & 0x10) == 0) {
              puVar17[uVar4 * 8 + 1] = (ushort)uVar4;
            }
            if (uVar8 < 0x80) {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              piVar12 = (int *)((uVar8 + 0x30) * 8 + iVar5);
              if ((int *)*piVar12 == piVar12) {
                iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
                *(uint *)(iVar7 + iVar5) = *(uint *)(iVar7 + iVar5) | 1 << (*puVar17 & 0x1f);
              }
            }
            else {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              for (piVar12 = *(int **)(iVar5 + 0x180);
                  (piStack_b8 = piVar12, (int *)(iVar5 + 0x180) != piVar12 &&
                  (piStack_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar8));
                  piVar12 = (int *)*piVar12) {
              }
            }
            puVar13 = (undefined4 *)piVar12[1];
            *(int **)(puVar17 + 4) = piVar12;
            *(undefined4 **)(puVar17 + 6) = puVar13;
            *puVar13 = puVar17 + 4;
            piVar12[1] = (int)(puVar17 + 4);
            iVar7 = uVar4 + *(int *)(iVar5 + 0x30);
            goto LAB_8203ff6c;
          }
          FUN_8203e448();
        }
        else {
          if (uVar3 < 0x80) {
            piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar5);
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            if ((int *)*piVar12 == piVar12) {
              iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar7 + iVar5);
LAB_8203fda8:
              *(uint *)(iVar7 + iVar5) = uVar8;
            }
          }
          else {
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            for (piVar12 = *(int **)(iVar5 + 0x180);
                (piStack_bc = piVar12, (int *)(iVar5 + 0x180) != piVar12 &&
                (piStack_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                piVar12 = (int *)*piVar12) {
            }
          }
LAB_8203fdac:
          puVar13 = (undefined4 *)piVar12[1];
          *(int **)(puVar17 + 4) = piVar12;
          *(undefined4 **)(puVar17 + 6) = puVar13;
          *puVar13 = puVar17 + 4;
          piVar12[1] = (int)(puVar17 + 4);
          iVar7 = uVar4 + *(int *)(iVar5 + 0x30);
LAB_8203ff6c:
          *(int *)(iVar5 + 0x30) = iVar7;
        }
        bVar11 = 0;
        if ((*(byte *)((int)puVar17 + 5) & 0x10) != 0) {
          *(ushort **)(*(int *)((*(byte *)(puVar17 + 2) + 0x18) * 4 + iVar5) + 0x40) = puVar17;
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
        *(uint *)(iVar7 + iVar5) = *(uint *)(iVar7 + iVar5) ^ 1 << (*puVar16 & 0x1f);
      }
    }
    *(uint *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) - uVar8;
    *(byte *)((int)puVar13 + -3) = bVar11 & 0x10 | 1;
    *(char *)((int)puVar13 + -2) = (char)uStack_e8 - (char)param_3;
    *(undefined1 *)((int)puVar13 + -1) = 0;
    puStack_e4 = puVar16;
    puStack_c0 = puVar16;
  }
  puVar6 = (uint *)(puVar16 + 8);
  puStack_dc = puVar6;
  if (bVar2) {
    func_0x820b75a8(*(undefined4 *)(iVar5 + 0x580));
    uStack_d8 = 0;
  }
  if ((uVar15 & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8207c6b0(puVar6,0,param_3);
  }
LAB_820400f0:
  FUN_82040130();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040130 @ 82040130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040180 @ 82040180 ==== */

void FUN_82040180(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82040424 @ 82040424 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040424(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040478 @ 82040478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040478(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  ushort uVar12;
  int iVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined8 uVar16;
  int iStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  int iStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  uint uStack_cc;
  int *piStack_c8;
  ushort *puStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_8;
  
  uVar16 = FUN_8207c484();
  iVar3 = (int)((ulonglong)uVar16 >> 0x20);
  uStack_e0 = 0;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar2 = func_0x820b77e8(), *(byte *)(iVar3 + 0x17b) != uVar2)) {
    func_0x820b79a8(0xf4,iVar3,uStack_8,0xc7c,param_3);
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  uVar2 = *(uint *)(iVar3 + 0x18) | (uint)uVar16;
  if ((int *)0x7fffffff < param_4) {
    halt_baddata();
  }
  piVar7 = param_4;
  if (param_4 == (int *)0x0) {
    piVar7 = (int *)0x1;
  }
  uVar14 = *(int *)(iVar3 + 0x50) + (int)piVar7 & *(uint *)(iVar3 + 0x54);
  if ((((uVar2 & 0x3c000100) != 0) || (*(int *)(iVar3 + 0x17c) != 0)) ||
     ((*(byte *)(param_3 + -0xb) & 2) != 0)) {
    uVar14 = uVar14 + 0x10;
  }
  if ((uVar2 & 1) == 0) {
    func_0x820b75b8(*(undefined4 *)(iVar3 + 0x580));
    uVar2 = uVar2 ^ 1;
    uStack_e0 = 1;
  }
  puVar15 = (ushort *)(param_3 + -0x10);
  bVar1 = *(byte *)(param_3 + -0xb);
  puStack_c4 = puVar15;
  if ((bVar1 & 1) == 0) goto LAB_82040c8c;
  uVar8 = (uint)*puVar15;
  if ((bVar1 & 8) == 0) {
    piVar7 = (int *)(uVar8 * 0x10 - (uint)*(byte *)(param_3 + -10));
  }
  else {
    uVar14 = uVar14 + 0x1001f & 0xffff0000;
    piVar7 = (int *)((*(uint *)(param_3 + -0x18) - uVar8) + -0x30);
    uVar8 = *(uint *)(param_3 + -0x18) >> 4;
  }
  uStack_dc = uVar14 >> 4;
  iVar4 = param_3;
  uVar13 = uVar2;
  piStack_e4 = piVar7;
  if (uVar8 < uStack_dc) {
    if (((bVar1 & 8) == 0) &&
       (iVar9 = FUN_8203e580(iVar3,uVar2,puVar15,param_4,uStack_dc), iVar9 != 0)) goto LAB_82040c58;
    if ((uVar2 & 0x10) == 0) {
      uVar13 = uVar2 & 0xc003ffff;
      if ((*(byte *)(param_3 + -0xb) & 2) == 0) {
        if (*(byte *)(param_3 + -9) != 0) {
          uVar13 = (uint)*(byte *)(param_3 + -9) << 0x12 | uVar13;
        }
      }
      else {
        uVar13 = (*(byte *)(param_3 + -0xb) & 0xe0) << 4 | 0x100 | uVar2 & 0xc003f1ff;
        if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
          puVar11 = puVar15 + (uint)*puVar15 * 8 + -8;
        }
        else {
          puVar11 = (ushort *)(param_3 + -0x28);
        }
        uVar12 = puVar11[1];
        if ((uVar12 != 0) && ((uVar12 & 0x8000) == 0)) {
          uVar13 = (uint)uVar12 << 0x12 | uVar13;
        }
      }
      iVar4 = FUN_8203f888(iVar3,uVar13 & 0xfffffff7,param_4);
      if (iVar4 != 0) {
        if ((*(byte *)(iVar4 + -0xb) & 2) != 0) {
          if ((*(byte *)(iVar4 + -0xb) & 8) == 0) {
            puVar11 = (ushort *)(iVar4 + -0x10) + (uint)*(ushort *)(iVar4 + -0x10) * 8 + -8;
          }
          else {
            puVar11 = (ushort *)(iVar4 + -0x28);
          }
          if ((*(byte *)(param_3 + -0xb) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
            puVar15 = puVar15 + (uint)*puVar15 * 8 + -8;
          }
          else {
            puVar15 = (ushort *)(param_3 + -0x28);
          }
          *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar15 + 2);
        }
        piVar5 = param_4;
        if (piVar7 <= param_4) {
          piVar5 = piVar7;
        }
        FUN_8207cd90(iVar4,param_3,(uint)piVar5);
        if ((piVar7 < param_4) && ((uVar13 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_8207c6b0((uint *)(iVar4 + (int)piVar7),0,(int)param_4 - (int)piVar7);
        }
        FUN_82040180(iVar3,uVar13,param_3);
      }
      goto LAB_82040c58;
    }
  }
  else {
    if (uStack_dc + 1 == uVar8) {
      uVar14 = uVar14 + 0x10;
      uStack_dc = uStack_dc + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(param_3 + -10) = (char)uVar14 - (char)param_4;
    }
    else {
      *puVar15 = ((short)uVar14 - (short)param_4) - 0x30;
    }
    if ((piVar7 < param_4) && ((uVar2 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_8207c6b0((uint *)((int)piVar7 + param_3),0,(int)param_4 - (int)piVar7);
    }
    if (uStack_dc != uVar8) {
      bVar1 = *(byte *)(param_3 + -0xb);
      if ((bVar1 & 8) == 0) {
        puVar11 = puVar15 + uStack_dc * 8;
        *(byte *)((int)puVar11 + 5) = bVar1 & 0xfe;
        puVar11[1] = (ushort)uStack_dc;
        *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(param_3 + -0xc);
        uVar2 = *puVar15 - uStack_dc;
        *puVar15 = (ushort)uStack_dc;
        *(byte *)(param_3 + -0xb) = *(byte *)(param_3 + -0xb) & 0xef;
        uVar12 = (ushort)uVar2;
        if ((bVar1 & 0x10) == 0) {
          puVar15 = puVar11 + uVar2 * 8;
          if ((*(byte *)((int)puVar15 + 5) & 1) != 0) {
            *puVar11 = uVar12;
            puVar15[1] = uVar12;
            *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar11 + 5) & 0xf8;
            if ((uVar2 & 0xffff) < 0x80) goto LAB_82040800;
            for (piVar7 = *(int **)(iVar3 + 0x180);
                (piStack_d0 = piVar7, (int *)(iVar3 + 0x180) != piVar7 &&
                (piStack_e4 = piVar7 + -2, (uint)*(ushort *)(piVar7 + -2) < (uVar2 & 0xffff)));
                piVar7 = (int *)*piVar7) {
            }
            goto LAB_82040838;
          }
          *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar15 + 5);
          puVar10 = *(undefined4 **)(puVar15 + 6);
          puVar6 = *(undefined4 **)(puVar15 + 4);
          if (((ushort *)*puVar10 == (ushort *)puVar6[1]) && ((ushort *)*puVar10 == puVar15 + 4)) {
            *puVar10 = puVar6;
            puVar6[1] = puVar10;
            if ((puVar6 == puVar10) && (uVar12 = *puVar15, uVar12 < 0x80)) {
              iVar9 = ((uVar12 >> 5) + 0x58) * 4;
              *(uint *)(iVar9 + iVar3) = *(uint *)(iVar9 + iVar3) ^ 1 << (uVar12 & 0x1f);
            }
          }
          if ((*(byte *)((int)puVar15 + 5) & 4) != 0) {
            uStack_cc = (uint)*puVar15 * 0x10 - 0x18;
            if (((*(byte *)((int)puVar15 + 5) & 2) != 0) && (4 < uStack_cc)) {
              uStack_cc = (uint)*puVar15 * 0x10 - 0x1c;
            }
            func_0x820b79c8(puVar15 + 0xc,uStack_cc,0xfeeefeee);
          }
          *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar15;
          uVar2 = *puVar15 + uVar2;
          if (0xf000 < uVar2) {
            FUN_8203e448();
            goto LAB_82040c58;
          }
          uVar8 = uVar2 & 0xffff;
          *puVar11 = (ushort)uVar2;
          if ((*(byte *)((int)puVar11 + 5) & 0x10) == 0) {
            puVar11[uVar2 * 8 + 1] = (ushort)uVar2;
          }
          else {
            *(ushort **)(*(int *)((*(byte *)(puVar11 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar11;
          }
          *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar11 + 5) & 0xf8;
          if (uVar8 < 0x80) {
            piVar7 = (int *)((uVar8 + 0x30) * 8 + iVar3);
            if ((int *)*piVar7 == piVar7) {
              iVar9 = ((*puVar11 >> 5) + 0x58) * 4;
              *(uint *)(iVar9 + iVar3) = *(uint *)(iVar9 + iVar3) | 1 << (*puVar11 & 0x1f);
            }
          }
          else {
            for (piVar7 = *(int **)(iVar3 + 0x180);
                (piStack_c8 = piVar7, (int *)(iVar3 + 0x180) != piVar7 &&
                (piStack_e4 = piVar7 + -2, *(ushort *)(piVar7 + -2) < uVar8));
                piVar7 = (int *)*piVar7) {
            }
          }
          puVar6 = (undefined4 *)piVar7[1];
          *(int **)(puVar11 + 4) = piVar7;
          *(undefined4 **)(puVar11 + 6) = puVar6;
          *puVar6 = puVar11 + 4;
          piVar7[1] = (int)(puVar11 + 4);
          iVar9 = uVar2 + *(int *)(iVar3 + 0x30);
        }
        else {
          *(ushort **)(*(int *)((*(byte *)(puVar11 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar11;
          *puVar11 = uVar12;
          *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar11 + 5) & 0xf8;
          if ((uVar2 & 0xffff) < 0x80) {
LAB_82040800:
            piVar7 = (int *)(((uVar2 & 0xffff) + 0x30) * 8 + iVar3);
            if ((int *)*piVar7 == piVar7) {
              iVar9 = ((*puVar11 >> 5) + 0x58) * 4;
              *(uint *)(iVar9 + iVar3) = *(uint *)(iVar9 + iVar3) | 1 << (*puVar11 & 0x1f);
            }
          }
          else {
            for (piVar7 = *(int **)(iVar3 + 0x180);
                (piStack_d4 = piVar7, (int *)(iVar3 + 0x180) != piVar7 &&
                (piStack_e4 = piVar7 + -2, (uint)*(ushort *)(piVar7 + -2) < (uVar2 & 0xffff)));
                piVar7 = (int *)*piVar7) {
            }
          }
LAB_82040838:
          puVar6 = (undefined4 *)piVar7[1];
          *(int **)(puVar11 + 4) = piVar7;
          *(undefined4 **)(puVar11 + 6) = puVar6;
          *puVar6 = puVar11 + 4;
          piVar7[1] = (int)(puVar11 + 4);
          iVar9 = uVar2 + *(int *)(iVar3 + 0x30);
        }
        *(int *)(iVar3 + 0x30) = iVar9;
      }
      else {
        iStack_d8 = param_3 + -0x30 + uVar14;
        iStack_e8 = uVar8 * 0x10 - uVar14;
        iVar3 = func_0x820b79b8(&iStack_d8,&iStack_e8,0x8000,*(undefined4 *)(iVar3 + 0x590));
        if (-1 < iVar3) {
          *(int *)(param_3 + -0x18) = *(int *)(param_3 + -0x18) - iStack_e8;
        }
      }
    }
LAB_82040c58:
    uVar2 = uVar13;
    if (iVar4 != 0) goto LAB_82040c8c;
  }
  if ((uVar2 & 4) != 0) {
    uStack_c0 = 0xc0000017;
    uStack_b8 = 0;
    uStack_b0 = 1;
    uStack_bc = 0;
    uStack_ac = uVar14;
    func_0x820b7838(&uStack_c0);
  }
LAB_82040c8c:
  FUN_82040ce0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040ce0 @ 82040ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040d58 @ 82040d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040d58(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  uint in_r6;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
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
  
  uVar7 = FUN_8207c488();
  psVar2 = (short *)((ulonglong)uVar7 >> 0x20);
  FUN_82041288();
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
      cVar4 = func_0x820b79e8(&sStack_a0,auStack_b0);
      if (cVar4 != '\0') {
        func_0x820b7828(auStack_b0,auStack_80);
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
            cVar4 = func_0x820b79e8(&sStack_a0,auStack_b0);
            if (cVar4 == '\0') break;
            func_0x820b7828(auStack_b0,auStack_80);
            sVar5 = sVar5 + 1;
            sVar6 = sStack_7c;
          } while (sVar5 < sVar1);
        }
        sStack_9c = sVar6;
        cVar4 = func_0x820b79e8(&sStack_a0,auStack_b0);
        if (cVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  else {
    iVar3 = FUN_820411e8(psVar2,(int)uVar7);
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040fb8 @ 82040fb8 ==== */

void FUN_82040fb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820411d8 @ 820411d8 ==== */

undefined4 FUN_820411d8(void)

{
  return DAT_820cc2dc;
}


/* ==== FUN_820411e8 @ 820411e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820411e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041288 @ 82041288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041310 @ 82041310 ==== */

void FUN_82041310(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82041398 @ 82041398 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041398(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820413f0 @ 820413f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820413f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041450 @ 82041450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041450(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041510 @ 82041510 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041510(void)

{
  FUN_820413f0();
  FUN_8207dea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041590 @ 82041590 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041590(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820415e0 @ 820415e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820415e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041688 @ 82041688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041688(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820416e0 @ 820416e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820416e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041738 @ 82041738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82041738 @ 820417f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82041738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820417f8 @ 820417f8 ==== */

uint FUN_820417f8(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while( true ) {
    iVar1 = (int)cVar2;
    if ((iVar1 == 0) || (iVar1 == param_2)) break;
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  }
  return -(uint)(param_2 == iVar1) & (uint)param_1;
}


/* ==== FUN_82041828 @ 82041828 ==== */

undefined4 FUN_82041828(uint param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> 0x10;
  uVar2 = param_1 & 0xffff;
  if (uVar1 == 0) {
    if ((param_3 != 0) && ((uVar2 < 0xd800 || (0xdfff < uVar2)))) {
      *param_2 = (short)param_1;
      return 1;
    }
  }
  else if ((((1 < param_3) && (0xd7ff < uVar1)) && (uVar1 < 0xdc00)) &&
          ((0xdbff < uVar2 && (uVar2 < 0xe000)))) {
    *param_2 = (short)(param_1 >> 0x10);
    param_2[1] = (short)param_1;
    return 2;
  }
  return 0;
}


/* ==== FUN_820418a0 @ 820418a0 ==== */

void FUN_820418a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82041930 @ 82041930 ==== */

void FUN_82041930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82041998 @ 82041998 ==== */

void FUN_82041998(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82041ae8 @ 82041ae8 ==== */

void FUN_82041ae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82041cf8 @ 82041cf8 ==== */

void FUN_82041cf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82041e88 @ 82041e88 ==== */

void FUN_82041e88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82041f98 @ 82041f98 ==== */

void FUN_82041f98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82042070 @ 82042070 ==== */

void FUN_82042070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820420e8 @ 820420e8 ==== */

void FUN_820420e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820422e0 @ 820422e0 ==== */

void FUN_820422e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820425b0 @ 820425b0 ==== */

void FUN_820425b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82042720 @ 82042720 ==== */

void FUN_82042720(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82042860 @ 82042860 ==== */

void FUN_82042860(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820429e8 @ 820429e8 ==== */

void FUN_820429e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82042aa0 @ 82042aa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042aa0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_8207c494();
  pbVar4 = (byte *)uVar11;
  if (CONCAT11(pbVar4[0x1b],pbVar4[0x1a]) == 0) {
    uVar9 = 0;
    iVar7 = (*pbVar4 & 0x3f) - 1;
    uVar10 = iVar7 * 0xd;
    puVar8 = (ushort *)(iVar7 * 0x1a + (int)((ulonglong)uVar11 >> 0x20) + -2);
    uVar5 = 1;
    do {
      uVar6 = CONCAT11((pbVar4 + (byte)(&DAT_820096d0)[uVar9])[1],
                       pbVar4[(byte)(&DAT_820096d0)[uVar9]]);
      if (uVar5 == 0) {
        bVar1 = uVar6 != 0xffff;
        uVar6 = uVar5;
        if (bVar1) {
          halt_baddata();
        }
      }
      else {
        if (0xff < uVar10) {
          halt_baddata();
        }
        puVar8 = puVar8 + 1;
        uVar5 = *puVar8;
        uVar2 = FUN_820481c8((uint)uVar6);
        uVar3 = FUN_820481c8((uint)uVar5);
        uVar10 = uVar10 + 1;
        if (uVar2 != uVar3) {
          halt_baddata();
        }
      }
      uVar9 = uVar9 + 1;
      uVar5 = uVar6;
    } while (uVar9 < 0xd);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042b88 @ 82042b88 ==== */

undefined4 FUN_82042b88(int param_1,byte *param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  if (CONCAT11(param_2[0x1b],param_2[0x1a]) != 0) {
    return 0;
  }
  sVar4 = 1;
  uVar3 = 0;
  iVar5 = (*param_2 & 0xffffffbf) - 1;
  uVar6 = iVar5 * 0xd;
  psVar2 = (short *)(iVar5 * 0x1a + param_1 + -2);
  do {
    sVar1 = CONCAT11((param_2 + (byte)(&DAT_820096d0)[uVar3])[1],
                     param_2[(byte)(&DAT_820096d0)[uVar3]]);
    if (sVar4 == 0) {
      if (sVar1 != -1) {
        return 0;
      }
    }
    else {
      if (0xff < uVar6) {
        return 0;
      }
      psVar2 = psVar2 + 1;
      *psVar2 = sVar1;
      uVar6 = uVar6 + 1;
      sVar4 = sVar1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xd);
  if (((*param_2 & 0x40) != 0) && (sVar4 != 0)) {
    if (0xff < uVar6) {
      return 0;
    }
    *(undefined2 *)(uVar6 * 2 + param_1) = 0;
  }
  return 1;
}


/* ==== FUN_82042c40 @ 82042c40 ==== */

void FUN_82042c40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82042d70 @ 82042d70 ==== */

void FUN_82042d70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82042f20 @ 82042f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042f20(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_1[8] = *(int *)(param_2 + 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = *(int *)(*param_1 + 0x50);
  param_1[2] = (uint)*(byte *)(iVar1 + 0x37) << 0x18 | (uint)*(byte *)(iVar1 + 0x36) << 0x10 |
               (uint)*(byte *)(iVar1 + 0x35) << 8 | (uint)*(byte *)(iVar1 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042f90 @ 82042f90 ==== */

void FUN_82042f90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82043078 @ 82043078 ==== */

void FUN_82043078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82043188 @ 82043188 ==== */

void FUN_82043188(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82043358 @ 82043358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043358(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  ushort *puVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  
  puVar2 = (undefined4 *)FUN_8207c494();
  pcVar6 = (char *)*puVar2;
  iVar3 = FUN_82042720();
  if (iVar3 == 0) {
    if (*pcVar6 != '\x04') {
      puVar2[0x14] = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar8 = *(ushort **)(pcVar6 + 0xc);
    uVar10 = 0;
    uVar1 = *puVar8;
    while (uVar1 != 0) {
      uVar11 = FUN_820481c8((uint)uVar1);
      puVar8 = puVar8 + 1;
      uVar10 = (uVar11 & 0xff) + (uVar10 & 1) * 0x8000 + (uVar10 >> 1 & 0x7fff);
      uVar10 = (uVar10 * 0x8000 & 0x8000) + ((uVar11 & 0xffff) >> 8) + (uVar10 >> 1 & 0x7fff);
      uVar1 = *puVar8;
    }
    iVar3 = FUN_82043188(puVar2,0);
    if (iVar3 == 0) {
      do {
        iVar3 = *(int *)(pcVar6 + 0x50);
        if ((uint)CONCAT11(*(undefined1 *)(iVar3 + 0x25),*(undefined1 *)(iVar3 + 0x24)) ==
            (uVar10 & 0xffff)) {
          cVar9 = *(char *)(iVar3 + 0x23);
          uVar11 = 0x40;
          iVar3 = 0;
          if (cVar9 != '\0') {
            iVar7 = 0;
            do {
              if ((uVar11 & 0x1f) == 0) {
                uVar11 = uVar11 + 2;
              }
              uVar4 = FUN_820481c8((uint)CONCAT11(((undefined1 *)(*(int *)(pcVar6 + 0x50) + uVar11))
                                                  [1],*(undefined1 *)
                                                       (*(int *)(pcVar6 + 0x50) + uVar11)));
              uVar5 = FUN_820481c8((uint)*(ushort *)(iVar7 + *(int *)(pcVar6 + 0xc)));
              if (uVar4 != uVar5) break;
              cVar9 = cVar9 + -1;
              uVar11 = uVar11 + 2;
              iVar3 = iVar3 + 1;
              iVar7 = iVar7 + 2;
            } while (cVar9 != '\0');
          }
          if ((cVar9 == '\0') && (*(short *)(iVar3 * 2 + *(int *)(pcVar6 + 0xc)) == 0)) {
            halt_baddata();
          }
        }
        iVar3 = FUN_82043188(puVar2,0);
      } while (iVar3 == 0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043618 @ 82043618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043618(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_d0 [11];
  byte bStack_c5;
  
  puVar1 = (undefined4 *)FUN_8207c488();
  pcVar5 = (char *)*puVar1;
  if ((*(byte *)((int)puVar1 + 0x4f) & 0xa0) == 0) {
    iVar6 = 0;
    if (**(short **)(pcVar5 + 0xc) != 0) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 2;
        iVar6 = iVar6 + 1;
      } while (*(short *)(iVar2 + *(int *)(pcVar5 + 0xc)) != 0);
    }
    if (*pcVar5 == '\x04') {
      uVar3 = (iVar6 + 0xeU) / 0xf;
      iVar6 = FUN_820429e8(puVar1,uVar3 + 2);
      if (iVar6 == 0) {
        puVar1[0x14] = puVar1[0xc] + (uVar3 + 1) * -0x20;
        if ((*(byte *)((int)puVar1 + 7) & 4) != 0) {
          bVar4 = *(byte *)((int)puVar1 + 7) & 0xfb;
          *(byte *)((int)puVar1 + 7) = bVar4;
          if (bVar4 == 3) {
            for (iVar6 = puVar1[6]; iVar6 != 0; iVar6 = iVar6 + -1) {
              iVar2 = FUN_82041cf8();
              if (iVar2 != 0) goto LAB_8204371c;
            }
            *(undefined1 *)((int)puVar1 + 7) = 0;
          }
          iVar2 = 0;
LAB_8204371c:
          if (iVar2 != 0) {
            halt_baddata();
          }
          iVar6 = FUN_82042070(puVar1,puVar1[0xd],0xffffffff);
          if (iVar6 != 0) {
            halt_baddata();
          }
          if (puVar1[2] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        FUN_82043078();
      }
    }
    else {
      FUN_8207c860();
      if ((bStack_c5 & 1) != 0) {
        uVar3 = 1;
        *(byte *)((int)puVar1 + 0x4f) = 0x40;
        do {
          FUN_82042c40(puVar1 + 0x11,auStack_d0,*(int *)(pcVar5 + 0xc),uVar3 & 0xffff);
          iVar2 = FUN_82043358(puVar1);
          if (iVar2 != 0) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 100);
        if (uVar3 == 100) {
          halt_baddata();
        }
        if (iVar2 != 4) {
          halt_baddata();
        }
        *(byte *)((int)puVar1 + 0x4f) = bStack_c5;
      }
      if ((bStack_c5 & 2) == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = (iVar6 + 0xcU) / 0xd + 1;
      }
      iVar2 = FUN_820429e8(puVar1,iVar6);
      if (iVar2 == 0) {
        if (iVar6 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar6 = FUN_82042720();
        if (iVar6 == 0) {
          iVar6 = 0xb;
          do {
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043a30 @ 82043a30 ==== */

void FUN_82043a30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82043e10 @ 82043e10 ==== */

void FUN_82043e10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82044248 @ 82044248 ==== */

void FUN_82044248(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82044360 @ 82044360 ==== */

int FUN_82044360(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)*param_1;
  puVar3 = puVar4;
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      if (uVar1 < 0x20) break;
    } while (uVar1 != 0x3a);
    if (uVar1 != 0x3a) {
      return 0;
    }
    uVar2 = (uint)*puVar4;
    if ((((0x2f < uVar2) && (uVar2 < 0x3a)) && (puVar4 + 2 == puVar3)) && ((int)(uVar2 - 0x30) < 10)
       ) {
      *param_1 = puVar3;
      return uVar2 - 0x30;
    }
  }
  return -1;
}


/* ==== FUN_820443d8 @ 820443d8 ==== */

int FUN_820443d8(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  pcVar2 = "EFI PART";
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    bVar4 = *pcVar2;
    if (bVar1 != bVar4) break;
    pbVar5 = pbVar5 + 1;
    pcVar2 = pcVar2 + 1;
  } while (pbVar5 != param_1 + 0xc);
  if (((bVar1 == bVar4) &&
      (uVar3 = (uint)param_1[0xf] << 0x18 | (uint)param_1[0xe] << 0x10 | (uint)param_1[0xd] << 8 |
               (uint)param_1[0xc], 0x5b < uVar3)) && (uVar3 < 0x201)) {
    uVar6 = 0xffffffff;
    if (uVar3 != 0) {
      pbVar5 = param_1;
      do {
        bVar1 = 0;
        if ((byte *)0x3 < pbVar5 + (-0x10 - (int)param_1)) {
          bVar1 = *pbVar5;
        }
        bVar4 = 1;
        do {
          uVar7 = (bVar1 & bVar4) != 0 ^ uVar6;
          uVar6 = uVar6 >> 1;
          if ((uVar7 & 1) != 0) {
            uVar6 = uVar6 ^ 0xedb88320;
          }
          bVar4 = bVar4 << 1;
        } while (bVar4 != 0);
        pbVar5 = pbVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if ((~uVar6 == ((uint)param_1[0x13] << 0x18 | (uint)param_1[0x12] << 0x10 |
                    (uint)param_1[0x11] << 8 | (uint)param_1[0x10])) &&
       (((uint)param_1[0x57] << 0x18 | (uint)param_1[0x56] << 0x10 | (uint)param_1[0x55] << 8 |
        (uint)param_1[0x54]) == 0x80)) {
      return -((0x80 < ((uint)param_1[0x53] << 0x18 | (uint)param_1[0x52] << 0x10 |
                        (uint)param_1[0x51] << 8 | (uint)param_1[0x50])) - 1);
    }
  }
  return 0;
}


/* ==== FUN_820444d8 @ 820444d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820444d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044690 @ 82044690 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82044710) */

void FUN_82044690(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  bool bVar7;
  uint uVar6;
  undefined4 *extraout_r4;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint uStack_84;
  uint local_80 [32];
  
  uVar12 = FUN_8207c488();
  *(undefined4 *)uVar12 = 0;
  iVar5 = FUN_82044360((undefined4 *)((ulonglong)uVar12 >> 0x20));
  if (((-1 < iVar5) && (pcVar11 = *(char **)(&DAT_820ca930 + iVar5 * 4), pcVar11 != (char *)0x0)) &&
     ((*extraout_r4 = pcVar11, *pcVar11 == '\0' || (bVar7 = FUN_820293d8(pcVar11[1]), bVar7)))) {
    *pcVar11 = '\0';
    bVar7 = FUN_820293d8(pcVar11[1]);
    if (!bVar7) {
      uVar6 = FUN_820444d8();
      if (uVar6 == 2) {
        if (pcVar11[0x216] == -0x12) {
          iVar5 = FUN_82041930();
          if (iVar5 != 0) {
            halt_baddata();
          }
          iVar5 = FUN_820443d8((byte *)(pcVar11 + 0x54));
          if (iVar5 == 0) {
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar8 = &uStack_84;
        pbVar9 = (byte *)(pcVar11 + 0x21a);
        iVar5 = 4;
        do {
          pbVar1 = pbVar9 + 3;
          pbVar2 = pbVar9 + 2;
          pbVar3 = pbVar9 + 1;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 0x10;
          puVar8 = puVar8 + 1;
          *puVar8 = (uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)bVar4
          ;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar10 = 0;
        puVar8 = local_80;
        do {
          if (*puVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar6 = 3;
          uVar10 = uVar10 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar10 < 4);
      }
      if ((uVar6 != 4) && (uVar6 < 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044d50 @ 82044d50 ==== */

void FUN_82044d50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82044dc8 @ 82044dc8 ==== */

undefined4 FUN_82044dc8(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uStack0000001c;
  undefined4 local_10 [4];
  
  uStack0000001c = param_2;
  local_10[0] = param_2;
  iVar2 = FUN_82044360(local_10);
  if (iVar2 < 0) {
    uVar3 = 0xb;
  }
  else {
    iVar1 = iVar2 * 4;
    puVar4 = *(undefined1 **)(&DAT_820ca930 + iVar1);
    if (puVar4 != (undefined1 *)0x0) {
      *(undefined4 *)(&DAT_820ca930 + iVar1) = 0;
      *puVar4 = 0;
    }
    if (param_1 != (undefined1 *)0x0) {
      param_1[1] = (char)iVar2;
      *param_1 = 0;
      *(undefined1 **)(&DAT_820ca930 + iVar1) = param_1;
    }
    if ((param_3 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_82044690(&stack0x0000001c,&stack0x00000014,0);
    }
  }
  return uVar3;
}


/* ==== FUN_82044e60 @ 82044e60 ==== */

void FUN_82044e60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82045270 @ 82045270 ==== */

void FUN_82045270(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820454a0 @ 820454a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820454a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char *local_60;
  
  iVar1 = FUN_8207c490();
  *param_4 = 0;
  iVar2 = FUN_82044d50();
  if (((iVar2 == 0) && (*(char *)(iVar1 + 0x31) == '\0')) && ((*(byte *)(iVar1 + 0x30) & 2) != 0)) {
    if (*local_60 != '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(iVar1 + 0x30) = *(byte *)(iVar1 + 0x30) | 0x40;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045768 @ 82045768 ==== */

void FUN_82045768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820459e8 @ 820459e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820459e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045a38 @ 82045a38 ==== */

void FUN_82045a38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82045cb8 @ 82045cb8 ==== */

void FUN_82045cb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82045de0 @ 82045de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82045de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045e20 @ 82045e20 ==== */

void FUN_82045e20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82045f08 @ 82045f08 ==== */

void FUN_82045f08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82045fc8 @ 82045fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82045fc8(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 in_stack_00000014;
  char *apcStack_100 [4];
  char *apcStack_f0 [16];
  int iStack_b0;
  byte bStack_a1;
  char *apcStack_90 [36];
  
  in_stack_00000014 = FUN_8207c490();
  iVar2 = FUN_82044690(&stack0x00000014,apcStack_100,2);
  if (iVar2 != 0) {
    halt_baddata();
  }
  apcStack_f0[0] = apcStack_100[0];
  iVar2 = FUN_82048100();
  if (iVar2 == 0) {
    halt_baddata();
  }
  *(int *)(apcStack_100[0] + 0xc) = iVar2;
  *(int *)(apcStack_100[0] + 0x50) = iVar2 + 0x200;
  iVar3 = FUN_82044248();
  if (iVar3 == 0) {
    iVar3 = (-(uint)((bStack_a1 & 0xa0) != 0) & 0xfffffffe) + 8;
  }
  if (iVar3 == 4) {
    apcStack_90[0] = apcStack_100[0];
    uVar4 = FUN_820422e0();
    iVar3 = 0;
    if (uVar4 == 0) {
      iVar3 = 7;
    }
    if (uVar4 == 1) {
      iVar3 = 2;
    }
    if (uVar4 == 0xffffffff) {
      iVar3 = 1;
    }
    uVar5 = FUN_82029368();
    if ((iVar3 == 0) && (iVar3 = FUN_820425b0(apcStack_100[0],uVar4), iVar3 == 0)) {
      bVar1 = (byte)(uVar4 >> 0x10);
      uVar6 = (ushort)(uVar4 >> 0x10);
      if (*apcStack_100[0] != '\x04') {
        apcStack_100[0][0x54] = ' ';
        apcStack_100[0][0x55] = ' ';
        apcStack_100[0][0x56] = ' ';
        apcStack_100[0][0x57] = ' ';
        apcStack_100[0][0x58] = ' ';
        apcStack_100[0][0x59] = ' ';
        apcStack_100[0][0x5a] = ' ';
        apcStack_100[0][0x5b] = ' ';
        apcStack_100[0][0x5c] = ' ';
        apcStack_100[0][0x5d] = ' ';
        apcStack_100[0][0x5e] = ' ';
        apcStack_100[0][0x54] = '.';
        apcStack_100[0][0x5f] = '\x10';
        *(uint *)(apcStack_100[0] + 0x6a) =
             uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
        *(ushort *)(apcStack_100[0] + 0x6e) = (ushort)uVar4 >> 8 | (ushort)(byte)uVar4 << 8;
        if (*apcStack_100[0] == '\x03') {
          *(ushort *)(apcStack_100[0] + 0x68) = uVar6 >> 8 | (ushort)bVar1 << 8;
        }
        FUN_8207c860();
        apcStack_100[0][0x75] = '.';
        *(ushort *)(apcStack_100[0] + 0x8e) =
             (ushort)apcStack_f0[2] >> 8 | (ushort)(byte)apcStack_f0[2] << 8;
        if (*apcStack_100[0] == '\x03') {
          *(ushort *)(apcStack_100[0] + 0x88) =
               (ushort)((uint)apcStack_f0[2] >> 0x18) |
               (ushort)(byte)((uint)apcStack_f0[2] >> 0x10) << 8;
        }
        apcStack_100[0][4] = '\x01';
      }
      iVar3 = FUN_82043618(apcStack_f0);
      if (iVar3 == 0) {
        if (*apcStack_100[0] == '\x04') {
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 8) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0xc) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0x34) =
               uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
          uVar6 = *(ushort *)(apcStack_100[0] + 10);
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0x38) =
               (uVar6 & 0x7f) << 0x11 | (uVar6 & 0x7f80) << 1 | (uint)(uVar6 >> 0xf);
          uVar6 = *(ushort *)(apcStack_100[0] + 10);
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0x28) =
               (uVar6 & 0x7f) << 0x11 | (uVar6 & 0x7f80) << 1 | (uint)(uVar6 >> 0xf);
          *(undefined1 *)(*(int *)(apcStack_100[0] + 0x50) + 0x21) = 3;
          *(undefined1 *)(*(int *)(apcStack_100[0] + 0x50) + 4) = 0x10;
          iVar3 = FUN_82042f90(apcStack_f0);
        }
        else {
          *(uint *)(iStack_b0 + 0xe) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(uint *)(iStack_b0 + 0x16) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(ushort *)(iStack_b0 + 0x1a) = (ushort)uVar4 >> 8 | (ushort)(byte)uVar4 << 8;
          if (*apcStack_100[0] == '\x03') {
            *(ushort *)(iStack_b0 + 0x14) = uVar6 >> 8 | (ushort)bVar1 << 8;
          }
          *(undefined1 *)(iStack_b0 + 0xb) = 0x10;
          apcStack_100[0][4] = '\x01';
          iVar3 = 0;
        }
        if (iVar3 == 0) {
          FUN_82041998();
        }
        goto LAB_8204622c;
      }
    }
    FUN_820420e8(apcStack_90,uVar4,0);
  }
LAB_8204622c:
  thunk_EXT_FUN_820b7698(iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046240 @ 82046240 ==== */

void FUN_82046240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82046610 @ 82046610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82046610(void)

{
  int iVar1;
  
  FUN_8207c47c();
  iVar1 = FUN_82029598();
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046be8 @ 82046be8 ==== */

void FUN_82046be8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82047c18 @ 82047c18 ==== */

uint FUN_82047c18(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  uVar2 = 0xffffffff;
  if (param_2 != 0) {
    do {
      uVar2 = *(byte *)(uVar1 + param_1) ^ uVar2;
      iVar3 = 8;
      do {
        uVar2 = -(uint)((uVar2 & 1) != 0) & 0xedb88320 ^ uVar2 >> 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return ~uVar2;
}


/* ==== FUN_82047c78 @ 82047c78 ==== */

void FUN_82047c78(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + 0x1ca);
  iVar2 = 4;
  *(uint *)(param_1 + 0x1b8) =
       (uint)*(byte *)(param_1 + 0x1bb) << 0x18 | (uint)*(byte *)(param_1 + 0x1ba) << 0x10 |
       (uint)*(byte *)(param_1 + 0x1b9) << 8 | (uint)*(byte *)(param_1 + 0x1b8);
  *(ushort *)(param_1 + 0x1bc) =
       CONCAT11(*(undefined1 *)(param_1 + 0x1bd),*(undefined1 *)(param_1 + 0x1bc));
  *(ushort *)(param_1 + 0x1fe) =
       CONCAT11(*(undefined1 *)(param_1 + 0x1ff),*(undefined1 *)(param_1 + 0x1fe));
  do {
    puVar1[-1] = (uint)*(byte *)((int)puVar1 + -1) << 0x18 |
                 (uint)*(byte *)((int)puVar1 + -2) << 0x10 | (uint)*(byte *)((int)puVar1 + -3) << 8
                 | (uint)*(byte *)(puVar1 + -1);
    *puVar1 = (uint)(byte)*puVar1 << 0x18 | (uint)*(byte *)((int)puVar1 + 2) << 0x10 |
              (uint)*(byte *)((int)puVar1 + 1) << 8 | (uint)*(byte *)puVar1;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* ==== FUN_82047cc8 @ 82047cc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82047cc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82047d60 @ 82047d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82047d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82047da8 @ 82047da8 ==== */

void FUN_82047da8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82047e50 @ 82047e50 ==== */

undefined4 FUN_82047e50(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
LAB_82047e9c:
    uVar1 = 8;
  }
  else {
    if (param_1 != 1) {
      if (param_1 < 3) {
        return 4;
      }
      if (param_1 == 3) {
        return 0x10;
      }
      if (4 < param_1) {
        if (param_1 == 5) goto LAB_82047e9c;
        func_0x820b77f8();
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_82047eb0 @ 82047eb0 ==== */

void FUN_82047eb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82047f30 @ 82047f30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82047f30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82047fa8 @ 82047fa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82047fa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048100 @ 82048100 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82048100(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_820b7698 @ 82048110 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820b7698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048118 @ 82048118 ==== */

uint FUN_82048118(uint param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x80) {
    uVar1 = param_1 & 0xffff;
  }
  else if ((param_1 < 0x10000) && (param_2 == 0x1b5)) {
    uVar1 = 0;
    do {
      if (param_1 == *(ushort *)(&UNK_820098c8 + uVar1 * 2)) break;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 0x80);
    uVar1 = uVar1 - 0x80 & 0xff;
  }
  return uVar1;
}


/* ==== FUN_82048180 @ 82048180 ==== */

uint FUN_82048180(uint param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 < 0x80) {
    return param_1;
  }
  if (param_2 != 0x1b5) {
    return 0;
  }
  if (0xff < uVar1) {
    return 0;
  }
  return (uint)*(ushort *)(&UNK_820098c8 + (uVar1 - 0x80) * 2);
}


/* ==== FUN_820481c8 @ 820481c8 ==== */

uint FUN_820481c8(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  if (0xffff < param_1) {
    return param_1;
  }
  uVar6 = param_1 & 0xffff;
  puVar5 = &DAT_82009bc0;
  if (uVar6 < 0x1000) {
    puVar5 = &DAT_820099c8;
  }
  uVar1 = *puVar5;
  while( true ) {
    uVar2 = (uint)uVar1;
    if (uVar2 == 0) {
      return uVar6;
    }
    puVar3 = puVar5 + 1;
    if (uVar6 < uVar2) break;
    puVar5 = puVar5 + 2;
    uVar4 = *puVar3 & 0xff;
    uVar1 = *puVar3 >> 8;
    if (uVar6 < uVar4 + uVar2) {
      if (uVar1 < 9) {
        if (uVar1 == 1) {
          uVar6 = uVar6 - (uVar6 - uVar2 & 1);
        }
        else if (uVar1 == 2) {
          uVar6 = uVar6 + 0xfff0;
        }
        else if (uVar1 == 3) {
          uVar6 = uVar6 + 0xffe0;
        }
        else if (uVar1 == 4) {
          uVar6 = uVar6 + 0xffd0;
        }
        else if (uVar1 == 5) {
          uVar6 = uVar6 + 0xffe6;
        }
        else if (uVar1 == 6) {
          uVar6 = uVar6 + 8;
        }
        else if (uVar1 == 7) {
          uVar6 = uVar6 + 0xffb0;
        }
        else {
          if (uVar1 == 0) {
            return (uint)puVar5[uVar6 - uVar2];
          }
          uVar6 = uVar6 + 0xe3a0;
        }
        uVar6 = uVar6 & 0xffff;
      }
      return uVar6;
    }
    if (uVar1 == 0) {
      puVar5 = puVar5 + uVar4;
    }
    uVar1 = *puVar5;
  }
  return uVar6;
}


/* ==== FUN_820482f0 @ 820482f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820482f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_8207c494();
  iVar3 = (int)uVar7;
  iVar5 = *(int *)((int)((ulonglong)uVar7 >> 0x20) + 0x18);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x50) + 0x18);
  iVar6 = *(int *)(iVar4 + 8);
  func_0x820b7a58();
  func_0x820b7a48(iVar5 + 0x48);
  if (iVar6 == 0) {
    func_0x820b7a98(iVar5 + 0x10);
    *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
    func_0x820b7a18(iVar5 + 0x10);
  }
  else {
    func_0x820b75b8(iVar5 + 0x80);
    if ((*(uint *)(iVar6 + 8) & 1) == 1) {
      func_0x820b7a98(iVar5 + 0x10);
      if (((*(int *)(iVar6 + 0x14) == 1) && ((~(uint)*(byte *)(iVar4 + 2) >> 7 & 1) == 1)) &&
         ((*(uint *)(iVar6 + 8) & 4) == 4)) {
        func_0x820b75b8(iVar6 + 0x20);
        iVar1 = FUN_82045de0();
        if (iVar1 != 0) {
          uVar2 = FUN_82047da8();
          func_0x820b7588("ExFatFsdCleanup: f_closedir returned %d (0x%08x) for directory \'%.*S\'\n"
                          ,iVar1,uVar2,*(undefined4 *)(iVar6 + 0xa0),iVar6 + 0xa4);
          func_0x820b77f8();
        }
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xfffffffb;
        func_0x820b75a8(iVar6 + 0x20);
        if ((*(uint *)(iVar6 + 8) & 0x10) == 0x10) {
          func_0x820b77f8();
        }
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        func_0x820b7698();
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
      func_0x820b7a18(iVar5 + 0x10);
    }
    else {
      if ((*(int *)(iVar6 + 0x14) == 1) && ((~(uint)*(byte *)(iVar4 + 2) >> 7 & 1) == 1)) {
        func_0x820b75b8(iVar6 + 0x20);
        iVar1 = FUN_820459e8();
        if (iVar1 != 0) {
          uVar2 = FUN_82047da8();
          func_0x820b7588("ExFatFsdCleanup: f_close returned %d (0x%08x) for file \'%.*S\'\n",iVar1,
                          uVar2,*(undefined4 *)(iVar6 + 0xa0),iVar6 + 0xa4);
        }
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xfffffffb;
        func_0x820b75a8(iVar6 + 0x20);
        if ((*(uint *)(iVar6 + 8) & 0x10) == 0x10) {
          func_0x820b7a98(iVar5 + 0x10);
          func_0x820b77f8();
          func_0x820b7a18(iVar5 + 0x10);
        }
      }
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
    }
    func_0x820b7a88(iVar4,iVar6 + 0x18);
    func_0x820b75a8(iVar5 + 0x80);
  }
  func_0x820b7a18(iVar5 + 0x48);
  func_0x820b7a28();
  *(undefined4 *)(iVar3 + 0x10) = 0;
  func_0x820b7a78(iVar3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048530 @ 82048530 ==== */

void FUN_82048530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82048978 @ 82048978 ==== */

void FUN_82048978(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82048b40 @ 82048b40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82048b40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048b90 @ 82048b90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82048b90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048e68 @ 82048e68 ==== */

void FUN_82048e68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82049058 @ 82049058 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82049058(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_8207c494();
  iVar2 = (int)uVar7;
  pcVar6 = *(char **)(iVar2 + 0x50);
  iVar4 = *(int *)((int)((ulonglong)uVar7 >> 0x20) + 0x18);
  iVar5 = *(int *)(*(int *)(pcVar6 + 0x18) + 8);
  if ((pcVar6[2] & 1U) == 1) {
    func_0x820b77f8();
  }
  func_0x820b7a58();
  func_0x820b7a48(iVar4 + 0x48);
  if ((*(byte *)(*(int *)(pcVar6 + 0x18) + 2) & 0x80) == 0x80) {
    uVar3 = 0xc000026e;
  }
  else {
    cVar1 = *pcVar6;
    if (iVar5 == 0) {
      if (cVar1 == '\x02') {
        func_0x820b7a48();
      }
      else {
        func_0x820b7a98(iVar4 + 0x10);
      }
      if ((*(byte *)(*(int *)(pcVar6 + 0x18) + 2) & 0x10) != 0x10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (cVar1 == '\x03') {
        uVar3 = 0xc0000001;
        goto LAB_8204937c;
      }
      if (cVar1 == '\x02') {
        func_0x820b7a48();
      }
      else {
        func_0x820b7a98(iVar4 + 0x10);
      }
      if ((*(byte *)(*(int *)(pcVar6 + 0x18) + 2) & 0x10) != 0x10) {
        func_0x820b75b8(iVar5 + 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar3 = 0xc0000128;
    func_0x820b7a18(iVar4 + 0x10);
  }
LAB_8204937c:
  func_0x820b7a18(iVar4 + 0x48);
  func_0x820b7a28();
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  func_0x820b7a78(iVar2,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82049428 @ 82049428 ==== */

void FUN_82049428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820494f8 @ 820494f8 ==== */

void FUN_820494f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820495b0 @ 820495b0 ==== */

void FUN_820495b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820496e0 @ 820496e0 ==== */

void FUN_820496e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82049fc0 @ 82049fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82049fc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204a020 @ 8204a020 ==== */

void FUN_8204a020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8204a168 @ 8204a168 ==== */

void FUN_8204a168(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8204a2d8 @ 8204a2d8 ==== */

void FUN_8204a2d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8204a3b0 @ 8204a3b0 ==== */

void FUN_8204a3b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204a460 @ 8204a460 ==== */

void FUN_8204a460(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204a530 @ 8204a530 ==== */

void FUN_8204a530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8204a5e0 @ 8204a5e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204a5e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204a660 @ 8204a660 ==== */

void FUN_8204a660(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204a718 @ 8204a718 ==== */

void FUN_8204a718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204a858 @ 8204a858 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204a858(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204aa90 @ 8204aa90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204aa90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204aad8 @ 8204aad8 ==== */

void FUN_8204aad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8204ab58 @ 8204ab58 ==== */

bool FUN_8204ab58(int param_1,ushort param_2,char param_3)

{
  ushort uVar1;
  
  if (((param_2 & *(ushort *)(param_1 + 8)) == 0) && ((param_2 & *(ushort *)(param_1 + 0x18)) != 0))
  {
    if (param_3 == '\x01') {
      uVar1 = *(ushort *)(param_1 + 0x28);
      *(ushort *)(param_1 + 0x28) = uVar1 & ~param_2;
      return (bool)('\x01' - ((param_2 & uVar1) == 0));
    }
    return true;
  }
  return false;
}


/* ==== FUN_8204abb0 @ 8204abb0 ==== */

void FUN_8204abb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204acf8 @ 8204acf8 ==== */

bool FUN_8204acf8(double param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((double)*(float *)((param_3 + 0xd) * 4 + param_2) < param_1) &&
     (param_1 <= (double)*(float *)((param_3 + 0x15) * 4 + param_2))) {
    iVar1 = (param_3 + 0x1d) * 4;
    bVar2 = *(float *)(iVar1 + param_2) != DAT_82002f44;
    *(float *)(iVar1 + param_2) = DAT_82002f44;
    return bVar2;
  }
  return false;
}


/* ==== FUN_8204ad58 @ 8204ad58 ==== */

void FUN_8204ad58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204aeb0 @ 8204aeb0 ==== */

void FUN_8204aeb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_8204b308 @ 8204b308 ==== */

undefined4 FUN_8204b308(char *param_1,ushort param_2,char param_3)

{
  bool bVar1;
  ushort extraout_r4;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 != '\x01' ||
         (bVar1 = FUN_8204ab58((int)param_1,param_2,param_3), param_2 = extraout_r4, !bVar1))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0xf4;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8204b368 @ 8204b368 ==== */

void FUN_8204b368(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204b3f8 @ 8204b3f8 ==== */

undefined4 FUN_8204b3f8(double param_1,char *param_2,int param_3)

{
  bool bVar1;
  int extraout_r4;
  int iVar2;
  double extraout_f1;
  
  iVar2 = 0;
  while ((*param_2 != '\x01' ||
         (bVar1 = FUN_8204acf8(param_1,(int)param_2,param_3), param_3 = extraout_r4,
         param_1 = extraout_f1, !bVar1))) {
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 0xf4;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8204b458 @ 8204b458 ==== */

void FUN_8204b458(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204b4f8 @ 8204b4f8 ==== */

undefined4 FUN_8204b4f8(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_2 < *param_1) || (param_2[1] < param_1[1])) || (param_1[2] < param_2[2])) ||
     (uVar1 = 1, param_1[3] < param_2[3])) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_8204b548 @ 8204b548 ==== */

undefined4 FUN_8204b548(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((param_1[3] <= param_2[1]) || (param_2[3] <= param_1[1])) || (param_1[2] <= *param_2)) ||
     (uVar1 = 1, param_2[2] <= *param_1)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_8204b598 @ 8204b598 ==== */

void FUN_8204b598(float *param_1,float *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < param_2[2]) {
    param_1[2] = param_2[2];
  }
  if (param_2[3] <= param_1[3]) {
    return;
  }
  param_1[3] = param_2[3];
  return;
}


/* ==== FUN_8204b5f0 @ 8204b5f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b5f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b670 @ 8204b670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b730 @ 8204b730 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b7b8 @ 8204b7b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b7b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b838 @ 8204b838 ==== */

double FUN_8204b838(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    return (double)DAT_82002f44;
  }
  fVar1 = *(float *)(DAT_820ca988 + 0x1948) * *(float *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
  }
  return (double)(*(float *)(DAT_820ca988 + 0x1568) * DAT_820066d4 + fVar1);
}


/* ==== FUN_8204b890 @ 8204b890 ==== */

double FUN_8204b890(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x400) != 0) {
    fVar1 = *(float *)(DAT_820ca988 + 0x1948) * *(float *)(param_1 + 0x23c);
    if (*(int *)(param_1 + 0x2d8) != 0) {
      fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
    }
    return (double)(*(float *)(DAT_820ca988 + 0x1568) * DAT_820066d4 + *(float *)(param_1 + 0x138) +
                   fVar1);
  }
  return (double)DAT_82002f44;
}


/* ==== thunk_FUN_8207ce50 @ 8204b8f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_8207ce50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b900 @ 8204b900 ==== */

void FUN_8204b900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8204bb70 @ 8204bb70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204bb70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204bc00 @ 8204bc00 ==== */

void FUN_8204bc00(char *param_1)

{
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  return;
}


/* ==== FUN_8204bc28 @ 8204bc28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204bc28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204bcb0 @ 8204bcb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204bcb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204bd10 @ 8204bd10 ==== */

uint FUN_8204bd10(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = ~param_3;
  uVar4 = uVar2;
  if (param_2 == 0) {
    bVar1 = *param_1;
    while (uVar6 = (uint)bVar1, uVar6 != 0) {
      if (((uVar6 == 0x23) && (param_1[1] == 0x23)) && (param_1[2] == 0x23)) {
        uVar4 = uVar2;
      }
      param_1 = param_1 + 1;
      uVar4 = *(uint *)(&DAT_8200a018 + (uVar4 & 0xff ^ uVar6) * 4) ^ uVar4 >> 8;
      bVar1 = *param_1;
    }
  }
  else {
    pbVar3 = param_1 + -1;
    uVar6 = param_2;
    do {
      uVar5 = (uint)pbVar3[1];
      param_2 = param_2 - 1;
      if (((uVar5 == 0x23) && (1 < param_2)) && ((pbVar3[2] == 0x23 && (pbVar3[3] == 0x23)))) {
        uVar4 = uVar2;
      }
      uVar4 = *(uint *)(&DAT_8200a018 + (uVar4 & 0xff ^ uVar5) * 4) ^ uVar4 >> 8;
      uVar6 = uVar6 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar6 != 0);
  }
  return ~uVar4;
}


/* ==== FUN_8204bdf0 @ 8204bdf0 ==== */

void FUN_8204bdf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8204be68 @ 8204be68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204be68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204bee8 @ 8204bee8 ==== */

uint FUN_8204bee8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = DAT_82002f44;
  if ((DAT_82002f44 <= fVar1) && (fVar2 = fVar1, DAT_820066d0 < fVar1)) {
    fVar2 = DAT_820066d0;
  }
  fVar1 = param_1[1];
  fVar5 = DAT_82002f44;
  if ((DAT_82002f44 <= fVar1) && (fVar5 = fVar1, DAT_820066d0 < fVar1)) {
    fVar5 = DAT_820066d0;
  }
  fVar1 = param_1[2];
  fVar4 = DAT_82002f44;
  if ((DAT_82002f44 <= fVar1) && (fVar4 = fVar1, DAT_820066d0 < fVar1)) {
    fVar4 = DAT_820066d0;
  }
  fVar1 = param_1[3];
  fVar3 = DAT_82002f44;
  if ((DAT_82002f44 <= fVar1) && (fVar3 = fVar1, DAT_820066d0 < fVar1)) {
    fVar3 = DAT_820066d0;
  }
  return (int)(fVar3 * DAT_8200a5bc + DAT_820066fc) << 0x18 |
         (int)(fVar4 * DAT_8200a5bc + DAT_820066fc) << 0x10 |
         (int)(fVar5 * DAT_8200a5bc + DAT_820066fc) << 8 |
         (int)(fVar2 * DAT_8200a5bc + DAT_820066fc);
}


/* ==== FUN_8204bfe8 @ 8204bfe8 ==== */

void FUN_8204bfe8(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_1[2];
  uVar2 = (int)(*param_1 << 3 | *param_1 >> 0x1d) >> 3;
  if (uVar2 != 0) {
    do {
      uVar3 = uVar2 >> 1;
      if (puVar1[uVar2 & 0x3ffffffe] < param_2) {
        puVar1 = puVar1 + (uVar2 & 0x3ffffffe) + 2;
        uVar3 = (uVar2 - uVar3) - 1;
      }
      uVar2 = uVar3;
    } while (uVar3 != 0);
    return;
  }
  return;
}


/* ==== FUN_8204c040 @ 8204c040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c080 @ 8204c080 ==== */

int FUN_8204c080(void)

{
  return DAT_820ca988 + 0x1528;
}


/* ==== FUN_8204c090 @ 8204c090 ==== */

void FUN_8204c090(double param_1,int param_2)

{
  int iVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  iVar1 = param_2 * 0x10 + DAT_820ca988 + 0x1528;
  local_20 = *(float *)(iVar1 + 200);
  local_1c = *(undefined4 *)(iVar1 + 0xcc);
  local_18 = *(undefined4 *)(iVar1 + 0xd0);
  local_14 = (float)((double)(*(float *)(DAT_820ca988 + 0x1528) * *(float *)(iVar1 + 0xd4)) *
                    param_1);
  FUN_8204bee8(&local_20);
  return;
}


/* ==== FUN_8204c108 @ 8204c108 ==== */

void FUN_8204c108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204c288 @ 8204c288 ==== */

void FUN_8204c288(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204c4c8 @ 8204c4c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c4c8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = DAT_820ca988;
  bVar3 = param_1 != *(int *)(DAT_820ca988 + 0x1be0);
  *(bool *)(DAT_820ca988 + 0x1bec) = bVar3;
  if (bVar3) {
    *(undefined1 *)(iVar1 + 0x1bef) = 0;
    *(undefined1 *)(iVar1 + 0x1bf0) = 0;
    *(undefined4 *)(iVar1 + 0x1c18) = 0xffffffff;
    uVar2 = DAT_82002f44;
    *(undefined4 *)(iVar1 + 0x1be8) = DAT_82002f44;
    if (param_1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c2c) = uVar2;
      *(int *)(iVar1 + 0x1c28) = param_1;
    }
  }
  *(int *)(iVar1 + 0x1be0) = param_1;
  *(undefined4 *)(iVar1 + 0x1c10) = param_2;
  *(undefined1 *)(iVar1 + 0x1bed) = 0;
  *(undefined1 *)(iVar1 + 0x1bee) = 0;
  *(undefined1 *)(iVar1 + 0x1bf1) = 0;
  if (param_1 != 0) {
    *(int *)(iVar1 + 0x1be4) = param_1;
    if (((*(int *)(iVar1 + 0x1d60) == param_1) || (*(int *)(iVar1 + 0x1d6c) == param_1)) ||
       (uVar2 = 1, *(int *)(iVar1 + 0x1d74) == param_1)) {
      uVar2 = 4;
    }
    *(undefined4 *)(iVar1 + 0x1c14) = uVar2;
  }
  *(undefined1 *)(iVar1 + 0x1bf2) = 0;
  *(undefined4 *)(iVar1 + 0x1bf4) = 0;
  *(undefined4 *)(iVar1 + 0x1bf8) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c580 @ 8204c580 ==== */

void FUN_8204c580(void)

{
  FUN_8204c4c8(0,0);
  return;
}


/* ==== FUN_8204c590 @ 8204c590 ==== */

void FUN_8204c590(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_820ca988;
  *(int *)(DAT_820ca988 + 0x1bcc) = param_1;
  *(undefined1 *)(iVar2 + 0x1bd4) = 0;
  *(undefined1 *)(iVar2 + 0x1bd5) = 0;
  uVar1 = DAT_82002f44;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x1bd0) == param_1) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x1bdc) = DAT_82002f44;
  *(undefined4 *)(iVar2 + 0x1bd8) = uVar1;
  return;
}


/* ==== FUN_8204c5d0 @ 8204c5d0 ==== */

void FUN_8204c5d0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  if (*(int *)(DAT_820ca988 + 0x1be0) == param_1) {
    *(int *)(DAT_820ca988 + 0x1be4) = param_1;
  }
  if (*(int *)(iVar1 + 0x1c1c) != param_1) {
    return;
  }
  *(undefined1 *)(iVar1 + 0x1c20) = 1;
  return;
}


/* ==== FUN_8204c600 @ 8204c600 ==== */

void FUN_8204c600(void)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined1 *)(DAT_820ca988 + 0x1bf1) = 1;
  *(undefined1 *)(iVar1 + 0x1bf0) = 1;
  *(uint *)(iVar1 + 0x1c50) = *(uint *)(iVar1 + 0x1c50) | 4;
  return;
}


/* ==== FUN_8204c628 @ 8204c628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c628(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c6a8 @ 8204c6a8 ==== */

void FUN_8204c6a8(undefined4 param_1)

{
  if (DAT_820ca988 != 0) {
    *(int *)(DAT_820ca988 + 0x36c) = *(int *)(DAT_820ca988 + 0x36c) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x8204c6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_820c5188)(param_1,DAT_820ca98c);
  return;
}


/* ==== FUN_8204c6e0 @ 8204c6e0 ==== */

void FUN_8204c6e0(int param_1)

{
  if ((param_1 != 0) && (DAT_820ca988 != 0)) {
    *(int *)(DAT_820ca988 + 0x36c) = *(int *)(DAT_820ca988 + 0x36c) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x8204c718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_820c518c)(param_1,DAT_820ca98c);
  return;
}


/* ==== FUN_8204c720 @ 8204c720 ==== */

undefined4 FUN_8204c720(void)

{
  return DAT_820ca988;
}


/* ==== FUN_8204c730 @ 8204c730 ==== */

int FUN_8204c730(void)

{
  return DAT_820ca988 + 8;
}


/* ==== FUN_8204c740 @ 8204c740 ==== */

undefined8 FUN_8204c740(void)

{
  return *(undefined8 *)(DAT_820ca988 + 0x1b40);
}


/* ==== FUN_8204c750 @ 8204c750 ==== */

int FUN_8204c750(void)

{
  return DAT_820ca988 + 0x194c;
}


/* ==== FUN_8204c760 @ 8204c760 ==== */

byte FUN_8204c760(void)

{
  byte bVar1;
  
  bVar1 = *(char *)(DAT_820ca988 + 0xfc) != '\0';
  if (*(char *)(DAT_820ca988 + 0xfd) != '\0') {
    bVar1 = bVar1 | 2;
  }
  if (*(char *)(DAT_820ca988 + 0xfe) != '\0') {
    bVar1 = bVar1 | 4;
  }
  if (*(char *)(DAT_820ca988 + 0xff) == '\0') {
    return bVar1;
  }
  return bVar1 | 8;
}


/* ==== FUN_8204c7f0 @ 8204c7f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c7f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c8f8 @ 8204c8f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c8f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c9b0 @ 8204c9b0 ==== */

int FUN_8204c9b0(double param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (double)DAT_82002f44) {
    return 1;
  }
  if (param_1 < param_2) {
    if ((double)DAT_82002f44 < param_4) {
      if (param_3 <= param_1) {
        iVar1 = (int)((double)(float)(param_1 - param_3) / param_4);
      }
      else {
        iVar1 = -1;
      }
      if (param_3 <= param_2) {
        iVar2 = (int)((double)(float)(param_2 - param_3) / param_4);
      }
      else {
        iVar2 = -1;
      }
      return iVar2 - iVar1;
    }
    if ((param_1 < param_3) && (param_3 <= param_2)) {
      return 1;
    }
  }
  return 0;
}


/* ==== FUN_8204ca48 @ 8204ca48 ==== */

undefined4 FUN_8204ca48(int param_1,char param_2)

{
  int iVar1;
  double dVar2;
  
  if (-1 < param_1) {
    iVar1 = (param_1 + 0x11d) * 4;
    dVar2 = (double)*(float *)(iVar1 + DAT_820ca988);
    if (dVar2 == (double)DAT_82002f44) {
      return 1;
    }
    if ((param_2 != '\0') && ((double)*(float *)(DAT_820ca988 + 0x8c) < dVar2)) {
      dVar2 = (double)*(float *)(iVar1 + DAT_820ca988);
                    /* WARNING: Subroutine does not return */
      FUN_8204c9b0((double)(float)(dVar2 - (double)*(float *)(DAT_820ca988 + 0x18)),dVar2,
                   (double)*(float *)(DAT_820ca988 + 0x8c),(double)*(float *)(DAT_820ca988 + 0x90));
    }
  }
  return 0;
}


/* ==== FUN_8204cad8 @ 8204cad8 ==== */

undefined4 FUN_8204cad8(int param_1,char param_2)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)((param_1 + 0x104) * 4 + DAT_820ca988);
  if (dVar2 == (double)DAT_82002f44) {
    uVar1 = 1;
  }
  else {
    if ((param_2 != '\0') && ((double)*(float *)(DAT_820ca988 + 0x8c) < dVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_8204c9b0((double)(float)(dVar2 - (double)*(float *)(DAT_820ca988 + 0x18)),dVar2,
                   (double)*(float *)(DAT_820ca988 + 0x8c),
                   (double)(*(float *)(DAT_820ca988 + 0x90) * DAT_820066fc));
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_8204cb60 @ 8204cb60 ==== */

bool FUN_8204cb60(double param_1,int param_2)

{
  if (*(char *)(DAT_820ca988 + param_2 + 0xec) == '\0') {
    return false;
  }
  if (param_1 < (double)DAT_82002f44) {
    param_1 = (double)*(float *)(DAT_820ca988 + 0x30);
  }
  return (float)(param_1 * param_1) <= *(float *)((param_2 + 0x118) * 4 + DAT_820ca988);
}


/* ==== FUN_8204cbc0 @ 8204cbc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204cbc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204cc10 @ 8204cc10 ==== */

bool FUN_8204cc10(void)

{
  if (*(int *)(DAT_820ca988 + 0x1be0) != 0) {
    return *(int *)(DAT_820ca988 + 0x1c48) == *(int *)(DAT_820ca988 + 0x1be0);
  }
  return false;
}


/* ==== FUN_8204cc40 @ 8204cc40 ==== */

void FUN_8204cc40(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_820ca988;
  piVar1 = (int *)(DAT_820ca988 + 0x1c48);
  if (*(int *)(DAT_820ca988 + 0x1bcc) == *piVar1) {
    *(undefined1 *)(DAT_820ca988 + 0x1bd4) = 1;
  }
  if (*(int *)(iVar2 + 0x1be0) != *piVar1) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x1bed) = 1;
  return;
}


/* ==== FUN_8204cc78 @ 8204cc78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204cc78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204cd80 @ 8204cd80 ==== */

void FUN_8204cd80(double param_1,double param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = DAT_82002f44;
  dVar5 = (double)*(float *)(param_4 + 0xc);
  dVar4 = (double)*(float *)(param_4 + 0x10);
  dVar3 = (double)(float)((double)*(float *)(param_4 + 0x14) + dVar5);
  dVar6 = (double)(float)((double)*(float *)(param_4 + 0x18) + dVar4);
  if (param_2 == (double)DAT_82002f44) {
    dVar3 = (double)(float)(dVar3 - (double)DAT_820066d0);
    dVar6 = (double)(float)(dVar6 - (double)DAT_820066d0);
  }
  if (param_5 == 0) {
    *param_3 = (float)(dVar5 - param_2);
    param_3[1] = (float)(dVar4 + param_1);
    dVar3 = dVar5;
  }
  else {
    if (param_5 != 1) {
      if (param_5 == 2) {
        *param_3 = (float)(dVar5 + param_1);
        param_3[1] = (float)(dVar4 - param_2);
        fVar2 = (float)(dVar3 - param_1);
        fVar1 = (float)(dVar4 + param_2);
      }
      else {
        if (param_5 != 3) {
          *param_3 = DAT_82002f44;
          param_3[1] = fVar1;
          param_3[2] = fVar1;
          param_3[3] = fVar1;
          return;
        }
        *param_3 = (float)(dVar5 + param_1);
        param_3[1] = (float)(dVar6 - param_2);
        fVar2 = (float)(dVar3 - param_1);
        fVar1 = (float)(dVar6 + param_2);
      }
      goto LAB_8204cdd8;
    }
    *param_3 = (float)(dVar3 - param_2);
    param_3[1] = (float)(dVar4 + param_1);
  }
  fVar2 = (float)(dVar3 + param_2);
  fVar1 = (float)(dVar6 - param_1);
LAB_8204cdd8:
  param_3[2] = fVar2;
  param_3[3] = fVar1;
  return;
}


/* ==== FUN_8204ce60 @ 8204ce60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ce60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204cf30 @ 8204cf30 ==== */

void FUN_8204cf30(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x2d8) = param_3;
  *(int *)(param_1 + 0x2ec) = param_1;
  *(int *)(param_1 + 0x2e8) = param_1;
  *(int *)(param_1 + 0x2e4) = param_1;
  *(int *)(param_1 + 0x2e0) = param_1;
  if (param_3 != 0) {
    if (((param_2 & 0x1000000) != 0) && ((param_2 & 0x2000000) == 0)) {
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_3 + 0x2e0);
    }
    if ((param_2 & 0x4000000) != 0) {
      *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_3 + 0x2e4);
    }
    if (((param_2 & 0x8000000) == 0) && ((param_2 & 0x5000000) != 0)) {
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_3 + 0x2e8);
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  while ((uVar1 & 0x800000) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2ec) + 0x2d8);
    *(int *)(param_1 + 0x2ec) = iVar2;
    uVar1 = *(uint *)(iVar2 + 8);
  }
  return;
}


/* ==== FUN_8204d018 @ 8204d018 ==== */

bool FUN_8204d018(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(DAT_820ca988 + 0x1d54);
  iVar6 = *(int *)(DAT_820ca988 + 0x1ba8);
  if (iVar2 == 0) {
    return false;
  }
  if ((param_1 & 4) != 0) {
    return true;
  }
  uVar3 = ~param_1 >> 3 & 1;
  if (((param_1 & 2) != 0) && (iVar5 = iVar6, iVar6 != 0)) {
    do {
      iVar6 = *(int *)(iVar5 + 0x2e0);
      if (uVar3 != 0) {
        iVar6 = *(int *)(iVar6 + 0x2e4);
      }
      bVar1 = iVar5 != iVar6;
      iVar5 = iVar6;
    } while (bVar1);
  }
  if ((param_1 & 1) == 0) {
    return iVar6 == iVar2;
  }
  iVar5 = 0;
  iVar4 = iVar2;
  if (iVar2 != 0) {
    do {
      iVar5 = *(int *)(iVar4 + 0x2e0);
      if (uVar3 != 0) {
        iVar5 = *(int *)(iVar5 + 0x2e4);
      }
      bVar1 = iVar4 != iVar5;
      iVar4 = iVar5;
    } while (bVar1);
  }
  if (iVar5 != iVar6) {
    while( true ) {
      if (iVar2 == 0) {
        return false;
      }
      if (iVar2 == iVar6) break;
      if (iVar2 == iVar5) {
        return false;
      }
      iVar2 = *(int *)(iVar2 + 0x2d8);
    }
    return true;
  }
  return true;
}


/* ==== FUN_8204d0a0 @ 8204d0a0 ==== */

double FUN_8204d0a0(void)

{
  return (double)*(float *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x14);
}


/* ==== FUN_8204d0b8 @ 8204d0b8 ==== */

void FUN_8204d0b8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x10);
  *param_1 = *(undefined4 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0xc);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_8204d0d8 @ 8204d0d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d0d8(int param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 != 0) && (((int)*(char *)(param_1 + 0xb0) & param_3) == 0)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d208 @ 8204d208 ==== */

void FUN_8204d208(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x18);
  *param_1 = *(undefined4 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x14);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_8204d228 @ 8204d228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d228(int param_1,float *param_2,uint param_3)

{
  float fVar1;
  
  if ((param_3 != 0) &&
     (((int)(*(uint *)(param_1 + 0xb0) << 8 | *(uint *)(param_1 + 0xb0) >> 0x18) >> 0x18 & param_3)
      == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfff1ffff;
  fVar1 = DAT_82002f44;
  if (DAT_82002f44 < *param_2) {
    *(undefined1 *)(param_1 + 0xa4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xa4) = 2;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  if (fVar1 < param_2[1]) {
    *(undefined1 *)(param_1 + 0xa5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xa5) = 2;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  return;
}


/* ==== FUN_8204d2e8 @ 8204d2e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d2e8(float *param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_820ca988 + 0x1ba8);
  if ((param_2 != 0) &&
     (((int)(*(uint *)(iVar2 + 0xb0) << 8 | *(uint *)(iVar2 + 0xb0) >> 0x18) >> 0x18 & param_2) == 0
     )) {
    return;
  }
  *(uint *)(iVar2 + 0xb0) = *(uint *)(iVar2 + 0xb0) & 0xfff1ffff;
  fVar1 = DAT_82002f44;
  if (DAT_82002f44 < *param_1) {
    *(undefined1 *)(iVar2 + 0xa4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(iVar2 + 0xa4) = 2;
  *(undefined1 *)(iVar2 + 0xa7) = 0;
  if (fVar1 < param_1[1]) {
    *(undefined1 *)(iVar2 + 0xa5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(iVar2 + 0xa5) = 2;
  *(undefined1 *)(iVar2 + 0xa7) = 0;
  return;
}


/* ==== FUN_8204d300 @ 8204d300 ==== */

void FUN_8204d300(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(uint *)(DAT_820ca988 + 0x1c84) = *(uint *)(DAT_820ca988 + 0x1c84) | 1;
  *(undefined4 *)(iVar1 + 0x1c94) = *param_1;
  *(undefined4 *)(iVar1 + 0x1c98) = param_1[1];
  *(undefined4 *)(iVar1 + 0x1c9c) = *param_3;
  *(undefined4 *)(iVar1 + 0x1ca0) = param_3[1];
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(int *)(iVar1 + 0x1c88) = param_2;
  return;
}


/* ==== FUN_8204d348 @ 8204d348 ==== */

void FUN_8204d348(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(uint *)(DAT_820ca988 + 0x1c84) = *(uint *)(DAT_820ca988 + 0x1c84) | 2;
  *(undefined4 *)(iVar1 + 0x1ca4) = *param_1;
  *(undefined4 *)(iVar1 + 0x1ca8) = param_1[1];
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(int *)(iVar1 + 0x1c8c) = param_2;
  return;
}


/* ==== FUN_8204d380 @ 8204d380 ==== */

undefined4 FUN_8204d380(void)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  return *(undefined4 *)(*(int *)(iVar1 + 0x1ba8) + 0x244);
}


/* ==== FUN_8204d3a0 @ 8204d3a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d3a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d448 @ 8204d448 ==== */

void FUN_8204d448(double param_1,double param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1ba8);
  if (*(char *)(iVar2 + 0x8f) != '\0') {
    return;
  }
  dVar3 = (double)DAT_82002f44;
  if (param_1 == dVar3) {
    if (param_2 < dVar3) {
      param_2 = (double)*(float *)(DAT_820ca988 + 0x1574);
    }
    fVar1 = *(float *)(iVar2 + 0xd8);
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar2 + 0xdc);
  }
  else {
    if (param_2 < dVar3) {
      param_2 = dVar3;
    }
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar2 + 0xdc);
    fVar1 = (float)((double)((*(float *)(iVar2 + 0xc) - *(float *)(iVar2 + 0x58)) +
                             *(float *)(iVar2 + 0x118) + *(float *)(iVar2 + 0x114)) + param_1);
  }
  *(float *)(iVar2 + 0xd0) = (float)((double)fVar1 + param_2);
  *(undefined4 *)(iVar2 + 0x108) = *(undefined4 *)(iVar2 + 0x10c);
  *(undefined4 *)(iVar2 + 0xf8) = *(undefined4 *)(iVar2 + 0x100);
  *(undefined4 *)(iVar2 + 0xfc) = *(undefined4 *)(iVar2 + 0x104);
  return;
}


/* ==== FUN_8204d4f8 @ 8204d4f8 ==== */

void FUN_8204d4f8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0xd4);
  *param_1 = *(undefined4 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0xd0);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_8204d518 @ 8204d518 ==== */

void FUN_8204d518(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_820ca988 + 0x1ba8);
  fVar1 = *(float *)(iVar4 + 0xd4);
  fVar2 = *(float *)(iVar4 + 0x10);
  fVar3 = *(float *)(iVar4 + 0x5c);
  *param_1 = *(float *)(iVar4 + 0x58) + (*(float *)(iVar4 + 0xd0) - *(float *)(iVar4 + 0xc));
  param_1[1] = fVar3 + (fVar1 - fVar2);
  return;
}


/* ==== FUN_8204d558 @ 8204d558 ==== */

double FUN_8204d558(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_820ca988 + 0x1ba8);
  return (double)((*(float *)(iVar1 + 0xd0) - *(float *)(iVar1 + 0xc)) + *(float *)(iVar1 + 0x58));
}


/* ==== FUN_8204d580 @ 8204d580 ==== */

double FUN_8204d580(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_820ca988 + 0x1ba8);
  return (double)((*(float *)(iVar1 + 0xd4) - *(float *)(iVar1 + 0x10)) + *(float *)(iVar1 + 0x5c));
}


/* ==== FUN_8204d5a8 @ 8204d5a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d5a8(void)

{
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d640 @ 8204d640 ==== */

void FUN_8204d640(double param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = DAT_820ca988;
  dVar4 = (double)DAT_82002f44;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar3 = *(int *)(iVar2 + 0x1ba8);
  if (param_1 == dVar4) {
    param_1 = (double)*(float *)(iVar2 + 0x1594);
  }
  fVar1 = (float)((double)*(float *)(iVar3 + 0x110) + param_1);
  *(float *)(iVar3 + 0x110) = fVar1;
  *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0x114) + *(float *)(iVar3 + 0xc) + fVar1;
  return;
}


/* ==== FUN_8204d690 @ 8204d690 ==== */

void FUN_8204d690(double param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = DAT_820ca988;
  dVar4 = (double)DAT_82002f44;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar3 = *(int *)(iVar2 + 0x1ba8);
  if (param_1 == dVar4) {
    param_1 = (double)*(float *)(iVar2 + 0x1594);
  }
  fVar1 = (float)((double)*(float *)(iVar3 + 0x110) - param_1);
  *(float *)(iVar3 + 0x110) = fVar1;
  *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0x114) + *(float *)(iVar3 + 0xc) + fVar1;
  return;
}


/* ==== FUN_8204d6e0 @ 8204d6e0 ==== */

double FUN_8204d6e0(void)

{
  return (double)*(float *)(DAT_820ca988 + 0x1944);
}


/* ==== FUN_8204d6f0 @ 8204d6f0 ==== */

double FUN_8204d6f0(void)

{
  return (double)(*(float *)(DAT_820ca988 + 0x1568) * DAT_820066d4 +
                 *(float *)(DAT_820ca988 + 0x1944));
}


/* ==== FUN_8204d710 @ 8204d710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d770 @ 8204d770 ==== */

double FUN_8204d770(void)

{
  return (double)*(float *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x5c);
}


/* ==== FUN_8204d788 @ 8204d788 ==== */

void FUN_8204d788(double param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_82002f44;
  iVar2 = *(int *)(DAT_820ca988 + 0x1ba8);
  *(float *)(iVar2 + 0x6c) = (float)param_1;
  *(undefined4 *)(iVar2 + 0x74) = uVar1;
  *(undefined4 *)(iVar2 + 0x7c) = uVar1;
  return;
}


/* ==== FUN_8204d7b0 @ 8204d7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d7b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d848 @ 8204d848 ==== */

int FUN_8204d848(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_820ca988 + 0x1d2c) + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x24;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(DAT_820ca988 + 0x1d34) + 4);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x8000000) != 0)) {
        return iVar1;
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x24;
    } while (-1 < iVar3);
  }
  return 0;
}


/* ==== FUN_8204d898 @ 8204d898 ==== */

int FUN_8204d898(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_820ca988 + 0x1d2c) + -1;
  if (-1 < iVar3) {
    iVar4 = iVar3 * 0x24;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(DAT_820ca988 + 0x1d34) + 4);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 8) & 0x8000000) != 0)) {
        if (*(char *)(iVar2 + 0x8a) == '\0') {
LAB_8204d8ec:
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (*(char *)(iVar2 + 0x91) != '\0') goto LAB_8204d8ec;
        }
        if (bVar1) {
          return iVar2;
        }
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + -0x24;
    } while (-1 < iVar3);
  }
  return 0;
}


/* ==== FUN_8204d910 @ 8204d910 ==== */

void FUN_8204d910(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined4 *)(DAT_820ca988 + 0x1d58) = param_1;
  *(int *)(iVar1 + 0x1d8c) = param_2;
  *(undefined4 *)(iVar1 + 0x1d5c) = param_3;
  *(undefined4 *)((param_2 + 0xbd) * 4 + *(int *)(iVar1 + 0x1d54)) = param_1;
  iVar1 = param_2 * 0x10 + *(int *)(iVar1 + 0x1d54);
  *(undefined4 *)(iVar1 + 0x2fc) = *param_4;
  *(undefined4 *)(iVar1 + 0x300) = param_4[1];
  *(undefined4 *)(iVar1 + 0x304) = param_4[2];
  *(undefined4 *)(iVar1 + 0x308) = param_4[3];
  return;
}


/* ==== FUN_8204d970 @ 8204d970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d970(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_820ca988;
  iVar2 = *(int *)(param_2 + 0x124);
  if (*(int *)(DAT_820ca988 + 0x1d54) != param_2) {
    *(undefined1 *)(DAT_820ca988 + 0x1d95) = 0;
  }
  *(int *)(iVar1 + 0x1d54) = param_2;
  *(int *)(iVar1 + 0x1d58) = param_1;
  *(int *)(iVar1 + 0x1d8c) = iVar2;
  *(undefined4 *)(iVar1 + 0x1d5c) = *(undefined4 *)(param_2 + 300);
  *(int *)((iVar2 + 0xbd) * 4 + param_2) = param_1;
  if (*(int *)(iVar1 + 0x1c48) == param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(iVar1 + 0x1c14) == 4) {
    *(undefined1 *)(iVar1 + 0x1d93) = 1;
    return;
  }
  *(undefined1 *)(iVar1 + 0x1d92) = 1;
  return;
}


/* ==== FUN_8204da50 @ 8204da50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204da50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_820ca988;
  iVar2 = *(int *)(DAT_820ca988 + 0x1ba8);
  *param_1 = iVar2;
  param_1[1] = *(int *)(iVar1 + 0x1c48);
  param_1[2] = *(int *)(iVar2 + 300);
  param_1[7] = *(int *)(iVar1 + 0x1c4c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204dae8 @ 8204dae8 ==== */

void FUN_8204dae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8204dc38 @ 8204dc38 ==== */

double FUN_8204dc38(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == 0) {
    dVar2 = (double)*(float *)((param_1 + 0xc0) * 4 + DAT_820ca988);
  }
  else {
    dVar1 = (double)DAT_82002f44;
    dVar3 = (double)*(float *)((param_1 + 0x51d) * 4 + DAT_820ca988);
    dVar2 = dVar1;
    if (dVar1 <= dVar3) {
      if (param_2 == 1) {
        if (dVar3 == dVar1) {
          dVar2 = (double)DAT_820066d0;
        }
      }
      else {
        if (param_2 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_8204c9b0((double)(float)(dVar3 - (double)*(float *)(DAT_820ca988 + 0x18)),dVar3,
                       (double)(*(float *)(DAT_820ca988 + 0x8c) * DAT_8200a5d8),
                       (double)(*(float *)(DAT_820ca988 + 0x90) * DAT_8200a5dc));
        }
        if (param_2 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_8204c9b0((double)(float)(dVar3 - (double)*(float *)(DAT_820ca988 + 0x18)),dVar3,
                       (double)(*(float *)(DAT_820ca988 + 0x8c) * DAT_8200a590),
                       (double)(*(float *)(DAT_820ca988 + 0x90) * DAT_820066d4));
        }
        if (param_2 == 5) {
                    /* WARNING: Subroutine does not return */
          FUN_8204c9b0((double)(float)(dVar3 - (double)*(float *)(DAT_820ca988 + 0x18)),dVar3,
                       (double)(*(float *)(DAT_820ca988 + 0x8c) * DAT_8200a5d8),
                       (double)(*(float *)(DAT_820ca988 + 0x90) * DAT_8200a58c));
        }
      }
    }
    else if ((param_2 == 2) &&
            (dVar2 = (double)DAT_820066d0, *(float *)((param_1 + 0x531) * 4 + DAT_820ca988) < 0.0))
    {
      dVar2 = dVar1;
    }
  }
  return dVar2;
}


/* ==== FUN_8204dda0 @ 8204dda0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204dda0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e038 @ 8204e038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e1b8 @ 8204e1b8 ==== */

void FUN_8204e1b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204e278 @ 8204e278 ==== */

void FUN_8204e278(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204e330 @ 8204e330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e3b0 @ 8204e3b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e3b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e428 @ 8204e428 ==== */

void FUN_8204e428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204e4e8 @ 8204e4e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e4e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e558 @ 8204e558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e558(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e5d0 @ 8204e5d0 ==== */

void FUN_8204e5d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204e690 @ 8204e690 ==== */

void FUN_8204e690(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8204e768 @ 8204e768 ==== */

void FUN_8204e768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204e828 @ 8204e828 ==== */

void FUN_8204e828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8204e8e8 @ 8204e8e8 ==== */

void FUN_8204e8e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204e9a8 @ 8204e9a8 ==== */

void FUN_8204e9a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204ea68 @ 8204ea68 ==== */

void FUN_8204ea68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204eb28 @ 8204eb28 ==== */

void FUN_8204eb28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204ebe8 @ 8204ebe8 ==== */

void FUN_8204ebe8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204eca8 @ 8204eca8 ==== */

void FUN_8204eca8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204ed68 @ 8204ed68 ==== */

void FUN_8204ed68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204ee28 @ 8204ee28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ee28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204eef8 @ 8204eef8 ==== */

void FUN_8204eef8(float *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(float *)(param_2 + 0x10) - param_3[1]) + param_4[1];
  if (fVar1 <= DAT_82002f44) {
    fVar1 = DAT_82002f44;
  }
  fVar3 = (*(float *)(param_2 + 0xc) - *param_3) + *param_4;
  fVar2 = DAT_82002f44;
  if (DAT_82002f44 < fVar3) {
    fVar2 = fVar3;
  }
  *param_1 = fVar2;
  param_1[1] = fVar1;
  return;
}


/* ==== FUN_8204ef58 @ 8204ef58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ef58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204efd0 @ 8204efd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204efd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f068 @ 8204f068 ==== */

void FUN_8204f068(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8204f168 @ 8204f168 ==== */

void FUN_8204f168(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8204f290 @ 8204f290 ==== */

void FUN_8204f290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8204f458 @ 8204f458 ==== */

int FUN_8204f458(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_8204bfe8();
  piVar1 = (int *)((ulonglong)uVar3 >> 0x20);
  if ((piVar1 == (int *)(*param_1 * 8 + param_1[2])) || (*piVar1 != (int)uVar3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = piVar1[1];
  }
  return iVar2;
}


/* ==== FUN_8204f4b0 @ 8204f4b0 ==== */

void FUN_8204f4b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8204f608 @ 8204f608 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f608(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f720 @ 8204f720 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f720(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f7d0 @ 8204f7d0 ==== */

void FUN_8204f7d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_820ca988;
  if (param_1 < 1) {
    return;
  }
  do {
    param_1 = param_1 + -1;
    iVar4 = *(int *)(iVar2 + 0x1ce4) * 0x14 + *(int *)(iVar2 + 0x1cec);
    iVar1 = (*(int *)(iVar4 + -0x14) + 0x15f) * 0x10;
    iVar3 = iVar1 + iVar2;
    *(undefined4 *)(iVar1 + iVar2) = *(undefined4 *)(iVar4 + -0x10);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar4 + -0xc);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar4 + -8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar4 + -4);
    *(int *)(iVar2 + 0x1ce4) = *(int *)(iVar2 + 0x1ce4) + -1;
  } while (param_1 != 0);
  return;
}


/* ==== FUN_8204f848 @ 8204f848 ==== */

void FUN_8204f848(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_820ca988;
  if (0 < param_1) {
    do {
      iVar3 = *(int *)(iVar1 + 0x1cf0) * 0xc + *(int *)(iVar1 + 0x1cf8);
      iVar4 = *(int *)(iVar3 + -0xc) * 0xc;
      iVar2 = *(int *)(&UNK_8200a420 + iVar4) + iVar1;
      if (*(int *)(&UNK_8200a418 + iVar4) == 8) {
        if (*(int *)(&UNK_8200a41c + iVar4) == 1) {
          *(undefined4 *)(iVar2 + 0x1528) = *(undefined4 *)(iVar3 + -8);
        }
        else if (*(int *)(&UNK_8200a41c + iVar4) == 2) {
          *(undefined4 *)(iVar2 + 0x1528) = *(undefined4 *)(iVar3 + -8);
          *(undefined4 *)(iVar2 + 0x152c) = *(undefined4 *)(iVar3 + -4);
        }
      }
      *(int *)(iVar1 + 0x1cf0) = *(int *)(iVar1 + 0x1cf0) + -1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return;
  }
  return;
}


/* ==== FUN_8204f8d8 @ 8204f8d8 ==== */

void FUN_8204f8d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8204fb20 @ 8204fb20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fb20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fbe0 @ 8204fbe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fbe0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fc20 @ 8204fc20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fc20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fc90 @ 8204fc90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fc90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fcf0 @ 8204fcf0 ==== */

undefined4 FUN_8204fcf0(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_820ca988 + 0x1ba8);
  if ((*(char *)(DAT_820ca988 + 0x1d93) != '\0') && (*(char *)(DAT_820ca988 + 0x1d92) == '\0')) {
    if (((*(uint *)(DAT_820ca988 + 0x1c4c) & 4) != 0) && ((param_1 & 0x200) == 0)) {
      return 0;
    }
    if ((*(int *)(DAT_820ca988 + 0x1d58) != *(int *)(DAT_820ca988 + 0x1c48)) ||
       (bVar1 = true, *(int *)(DAT_820ca988 + 0x1d58) == 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    return 0;
  }
  if ((*(uint *)(DAT_820ca988 + 0x1c50) & 1) == 0) {
    return 0;
  }
  if (((*(int *)(DAT_820ca988 + 0x1bac) != iVar2) &&
      ((*(uint *)(DAT_820ca988 + 0x1c50) & 0x80) == 0)) && ((param_1 & 0x100) == 0)) {
    return 0;
  }
  if ((((param_1 & 0x80) == 0) && (iVar3 = *(int *)(DAT_820ca988 + 0x1be0), iVar3 != 0)) &&
     ((iVar3 != *(int *)(DAT_820ca988 + 0x1c48) &&
      ((*(char *)(DAT_820ca988 + 0x1bed) == '\0' && (iVar3 != *(int *)(iVar2 + 0x50))))))) {
    return 0;
  }
  if ((((*(int *)(DAT_820ca988 + 0x1d54) != 0) &&
       (iVar3 = *(int *)(*(int *)(DAT_820ca988 + 0x1d54) + 0x2e0), iVar3 != 0)) &&
      (*(char *)(iVar3 + 0x8b) != '\0')) && (iVar3 != *(int *)(iVar2 + 0x2e0))) {
    if ((*(uint *)(iVar3 + 8) & 0x8000000) != 0) {
      bVar1 = false;
      goto LAB_8204fe18;
    }
    if (((*(uint *)(iVar3 + 8) & 0x4000000) != 0) && (bVar1 = false, (param_1 & 0x20) == 0))
    goto LAB_8204fe18;
  }
  bVar1 = true;
LAB_8204fe18:
  if ((!bVar1) || (((*(uint *)(DAT_820ca988 + 0x1c4c) & 4) != 0 && ((param_1 & 0x200) == 0)))) {
    return 0;
  }
  if ((*(int *)(DAT_820ca988 + 0x1c48) == *(int *)(iVar2 + 0x50)) &&
     (*(char *)(iVar2 + 0x8c) != '\0')) {
    return 0;
  }
  return 1;
}


/* ==== FUN_8204fe60 @ 8204fe60 ==== */

double FUN_8204fe60(double param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)DAT_82002f44;
  if (param_1 < dVar2) {
    return dVar2;
  }
  iVar1 = *(int *)(DAT_820ca988 + 0x1ba8);
  if (param_1 == dVar2) {
    param_1 = (double)*(float *)(iVar1 + 0x1d8);
  }
  else if (dVar2 < param_1) {
    param_1 = (double)(float)((double)(*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 0x58)) + param_1
                             );
  }
  dVar2 = (double)(float)(param_1 - (double)*param_2);
  if ((double)(float)(param_1 - (double)*param_2) < (double)DAT_820066d0) {
    dVar2 = (double)DAT_820066d0;
  }
  return dVar2;
}


/* ==== FUN_8204fed0 @ 8204fed0 ==== */

void FUN_8204fed0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8204ff40 @ 8204ff40 ==== */

uint FUN_8204ff40(void)

{
  return -(uint)(*(char *)(**(int **)(DAT_820ca988 + 0x1d50) + 0x34) != '\0') &
         **(int **)(DAT_820ca988 + 0x1d50) + 0x34U;
}


/* ==== FUN_8204ff68 @ 8204ff68 ==== */

void FUN_8204ff68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82050068 @ 82050068 ==== */

void FUN_82050068(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82050088 @ 82050088 ==== */

void FUN_82050088(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82050430 @ 82050430 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82050430(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float fStack_10;
  float fStack_c;
  
  iVar9 = DAT_820ca988;
  uVar6 = DAT_820066d4;
  fVar3 = DAT_82002f44;
  if (*(int *)(DAT_820ca988 + 0x1bb8) != 0) {
    *(float *)(DAT_820ca988 + 0x1bc4) =
         *(float *)(DAT_820ca988 + 0x1bc4) - *(float *)(DAT_820ca988 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar2 = *(float *)(DAT_820ca988 + 0xf4);
  if ((((((fVar2 != DAT_82002f44) || (*(float *)(DAT_820ca988 + 0xf8) != DAT_82002f44)) &&
        ((*(int *)(DAT_820ca988 + 0x1be0) == 0 || (*(char *)(DAT_820ca988 + 0x1bf2) == '\0')))) &&
       ((*(int *)(DAT_820ca988 + 0x1bd0) == 0 || (*(char *)(DAT_820ca988 + 0x1bd6) == '\0')))) &&
      ((iVar7 = *(int *)(DAT_820ca988 + 0x1bb8), iVar7 != 0 ||
       (iVar7 = *(int *)(DAT_820ca988 + 0x1bac), iVar7 != 0)))) && (*(char *)(iVar7 + 0x8d) == '\0')
     ) {
    if (((fVar2 == DAT_82002f44) || (*(char *)(DAT_820ca988 + 0xfc) == '\0')) ||
       (*(char *)(DAT_820ca988 + 0xa0) == '\0')) {
      if (*(char *)(DAT_820ca988 + 0xfc) == '\0') {
        if ((*(char *)(DAT_820ca988 + 0xfd) == '\0') ||
           (bVar5 = true, *(char *)(DAT_820ca988 + 0xb1) != '\0')) {
          bVar5 = false;
        }
        fVar4 = DAT_82002f44;
        if (!bVar5) {
          fVar2 = *(float *)(DAT_820ca988 + 0xf8);
          fVar4 = fVar2;
        }
        if (fVar4 != DAT_82002f44) {
          if (*(int *)(DAT_820ca988 + 0x1bb8) != iVar7) {
            uVar8 = *(undefined4 *)(DAT_820ca988 + 0xe4);
            *(undefined4 *)(DAT_820ca988 + 0x1bc4) = DAT_820066d4;
            *(int *)(iVar9 + 0x1bb8) = iVar7;
            *(undefined4 *)(iVar9 + 0x1bbc) = uVar8;
            *(undefined4 *)(iVar9 + 0x1bc0) = *(undefined4 *)(iVar9 + 0xe8);
            iVar9 = DAT_820ca988;
          }
          for (; ((*(uint *)(iVar7 + 8) & 0x1000000) != 0 &&
                 ((*(float *)(iVar7 + 100) == fVar3 ||
                  (((*(uint *)(iVar7 + 8) & 0x10) != 0 && ((*(uint *)(iVar7 + 8) & 0x200) == 0))))))
              ; iVar7 = *(int *)(iVar7 + 0x2d8)) {
          }
          if (((*(uint *)(iVar7 + 8) & 0x10) == 0) && ((*(uint *)(iVar7 + 8) & 0x200) == 0)) {
            *(float *)(iVar7 + 0x74) = fVar3;
            *(float *)(iVar7 + 0x7c) = fVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        if (fVar2 != fVar3) {
          if (*(int *)(iVar9 + 0x1bb8) != iVar7) {
            *(undefined4 *)(iVar9 + 0x1bc4) = uVar6;
            *(int *)(iVar9 + 0x1bb8) = iVar7;
            *(undefined4 *)(iVar9 + 0x1bbc) = *(undefined4 *)(iVar9 + 0xe4);
            *(undefined4 *)(iVar9 + 0x1bc0) = *(undefined4 *)(iVar9 + 0xe8);
          }
          for (; ((*(uint *)(iVar7 + 8) & 0x1000000) != 0 &&
                 ((*(float *)(iVar7 + 0x60) == fVar3 ||
                  (((*(uint *)(iVar7 + 8) & 0x10) != 0 && ((*(uint *)(iVar7 + 8) & 0x200) == 0))))))
              ; iVar7 = *(int *)(iVar7 + 0x2d8)) {
          }
          if (((*(uint *)(iVar7 + 8) & 0x10) == 0) && ((*(uint *)(iVar7 + 8) & 0x200) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_820ca988 + 0x1bb8) != iVar7) {
        puVar1 = (undefined4 *)(DAT_820ca988 + 0xe4);
        uVar8 = *(undefined4 *)(DAT_820ca988 + 0xe8);
        *(int *)(DAT_820ca988 + 0x1bb8) = iVar7;
        uVar6 = DAT_820066d4;
        *(undefined4 *)(iVar9 + 0x1bbc) = *puVar1;
        *(undefined4 *)(iVar9 + 0x1bc4) = uVar6;
        *(undefined4 *)(iVar9 + 0x1bc0) = uVar8;
      }
      fVar3 = *(float *)(iVar7 + 0x23c);
      fVar2 = *(float *)(iVar9 + 0xf4) * _UNK_820066f4 + fVar3;
      fVar4 = DAT_820066fc;
      if ((DAT_820066fc <= fVar2) && (fVar4 = _UNK_8200a6d4, fVar2 <= _UNK_8200a6d4)) {
        fVar4 = fVar2;
      }
      *(float *)(iVar7 + 0x23c) = fVar4;
      if (iVar7 == *(int *)(iVar7 + 0x2e0)) {
        fVar3 = DAT_820066d0 - fVar4 / fVar3;
        _fStack_10 = CONCAT44((fVar3 * *(float *)(iVar7 + 0x14) *
                              (*(float *)(iVar9 + 0xe4) - *(float *)(iVar7 + 0xc))) /
                              *(float *)(iVar7 + 0x14) + *(float *)(iVar7 + 0xc),
                              (fVar3 * *(float *)(iVar7 + 0x18) *
                              (*(float *)(iVar9 + 0xe8) - *(float *)(iVar7 + 0x10))) /
                              *(float *)(iVar7 + 0x18) + *(float *)(iVar7 + 0x10));
        FUN_8204d0d8(iVar7,&fStack_10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}


/* ==== FUN_82050970 @ 82050970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050a20 @ 82050a20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050a20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050ac0 @ 82050ac0 ==== */

void FUN_82050ac0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82050d28 @ 82050d28 ==== */

void FUN_82050d28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82050f70 @ 82050f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050f70(int param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = DAT_82002f44;
  bVar1 = false;
  if ((((*(char *)(param_1 + 0x8d) != '\0') && (*(char *)(param_1 + 0xa4) < '\x01')) &&
      (*(char *)(param_1 + 0xa5) < '\x01')) ||
     (((*(char *)(param_1 + 0x91) != '\0' && (*(char *)(param_1 + 0xad) == '\0')) &&
      ('\0' < *(char *)(param_1 + 0xac))))) {
    bVar1 = true;
  }
  if (bVar1) {
    *param_2 = *(float *)(param_1 + 0x24);
    param_2[1] = *(float *)(param_1 + 0x28);
    *param_3 = *(float *)(param_1 + 0x2c);
    param_3[1] = *(float *)(param_1 + 0x30);
    return;
  }
  if (*(float *)(param_1 + 0x34) == DAT_82002f44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x38) == fVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2[1] = *(float *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x34) == fVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_3 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x38) == fVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_3[1] = *(float *)(param_1 + 0x38);
  return;
}


/* ==== FUN_820510f8 @ 820510f8 ==== */

void FUN_820510f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820511f8 @ 820511f8 ==== */

void FUN_820511f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82051518 @ 82051518 ==== */

int FUN_82051518(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((0 < *(int *)(DAT_820ca988 + 0x1d2c)) &&
     (iVar3 = *(int *)(DAT_820ca988 + 0x1d2c) + -1, -1 < iVar3)) {
    piVar2 = (int *)(*(int *)(DAT_820ca988 + 0x1d34) + iVar3 * 0x24 + 4);
    do {
      iVar4 = *piVar2;
      if (((iVar4 != 0) && (*(char *)(iVar4 + 0x8b) != '\0')) &&
         ((*(uint *)(iVar4 + 8) & 0x8000000) != 0)) {
        iVar5 = param_1;
        if (*(int *)(param_1 + 0x2e0) == iVar4) {
LAB_82051578:
          bVar1 = true;
        }
        else {
          do {
            if (iVar5 == iVar4) goto LAB_82051578;
            iVar5 = *(int *)(iVar5 + 0x2dc);
            bVar1 = false;
          } while (iVar5 != 0);
        }
        if (bVar1) {
          return 0;
        }
        for (iVar5 = *(int *)(iVar4 + 0x2dc); iVar5 = *(int *)(iVar5 + 0x2e0), iVar5 != 0;
            iVar5 = *(int *)(iVar5 + 0x2dc)) {
          iVar6 = param_1;
          if (*(int *)(param_1 + 0x2e0) == iVar5) {
LAB_820515b0:
            bVar1 = true;
          }
          else {
            do {
              if (iVar6 == iVar5) goto LAB_820515b0;
              iVar6 = *(int *)(iVar6 + 0x2dc);
              bVar1 = false;
            } while (iVar6 != 0);
          }
          if (bVar1) {
            return iVar4;
          }
        }
      }
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -9;
    } while (-1 < iVar3);
  }
  return 0;
}


/* ==== FUN_82051600 @ 82051600 ==== */

void FUN_82051600(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = DAT_820ca988;
  if (*(int *)(*(int *)(DAT_820ca988 + 0x1b6c) * 4 + *(int *)(DAT_820ca988 + 0x1b74) + -4) ==
      param_1) {
    return;
  }
  iVar3 = (int)*(short *)(param_1 + 0x9c);
  iVar2 = *(int *)(DAT_820ca988 + 0x1b6c) + -1;
  if (iVar3 < iVar2) {
    iVar4 = iVar2 - iVar3;
    iVar3 = iVar3 << 2;
    do {
      puVar5 = (undefined4 *)(iVar3 + *(int *)(iVar1 + 0x1b74));
      *puVar5 = puVar5[1];
      iVar6 = *(int *)(iVar3 + *(int *)(iVar1 + 0x1b74));
      iVar3 = iVar3 + 4;
      *(short *)(iVar6 + 0x9c) = *(short *)(iVar6 + 0x9c) + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(*(int *)(iVar1 + 0x1b74) + iVar2 * 4) = param_1;
  *(short *)(param_1 + 0x9c) = (short)iVar2;
  return;
}


/* ==== FUN_82051688 @ 82051688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051688(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051750 @ 82051750 ==== */

int FUN_82051750(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_820ca988 + 0x1b68);
  piVar1 = piVar2 + *(int *)(DAT_820ca988 + 0x1b60);
  for (; (piVar2 < piVar1 && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
  }
  return (int)piVar2 - *(int *)(DAT_820ca988 + 0x1b68) >> 2;
}


/* ==== FUN_82051798 @ 82051798 ==== */

void FUN_82051798(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_820ca988 + 0x1b6c) + -1;
  if (param_1 != 0) {
    iVar2 = -1;
    if ((*(uint *)(param_1 + 8) & 0x1000000) != 0) {
      iVar2 = 0;
      do {
        param_1 = *(int *)(param_1 + 0x2d8);
      } while ((*(uint *)(param_1 + 8) & 0x1000000) != 0);
    }
    iVar2 = *(short *)(param_1 + 0x9c) + iVar2;
  }
  if (-1 < iVar2) {
    iVar1 = iVar2 << 2;
    do {
      iVar3 = *(int *)(iVar1 + *(int *)(DAT_820ca988 + 0x1b74));
      if (((iVar3 != param_2) && (*(char *)(iVar3 + 0x8b) != '\0')) &&
         ((*(uint *)(iVar3 + 8) & 0x40200) != 0x40200)) break;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -4;
    } while (-1 < iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82051860 @ 82051860 ==== */

void FUN_82051860(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_820ca988;
  fVar2 = DAT_820066d0;
  *(int *)(DAT_820ca988 + 0x1940) = param_1;
  fVar1 = *(float *)(iVar3 + 0x9c) * *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x10);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  iVar4 = *(int *)(iVar3 + 0x1ba8);
  *(float *)(iVar3 + 0x1948) = fVar1;
  fVar1 = DAT_82002f44;
  if (iVar4 != 0) {
    fVar1 = *(float *)(DAT_820ca988 + 0x1948) * *(float *)(iVar4 + 0x23c);
    if (*(int *)(iVar4 + 0x2d8) != 0) {
      fVar1 = *(float *)(*(int *)(iVar4 + 0x2d8) + 0x23c) * fVar1;
    }
  }
  *(float *)(iVar3 + 0x1944) = fVar1;
  iVar4 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar3 + 0x194c) = *(undefined4 *)(iVar4 + 0x2c);
  uVar5 = *(undefined4 *)(iVar4 + 0x30);
  *(float *)(iVar3 + 0x1958) = fVar1;
  *(undefined4 *)(iVar3 + 0x1950) = uVar5;
  *(int *)(iVar3 + 0x1b3c) = iVar4 + 0x58;
  *(int *)(iVar3 + 0x1954) = param_1;
  return;
}


/* ==== FUN_82051900 @ 82051900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051990 @ 82051990 ==== */

void FUN_82051990(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_820ca988;
  uVar2 = *(uint *)(DAT_820ca988 + 0x1c30);
  *(short *)(DAT_820ca988 + 0x2f2c) = *(short *)(DAT_820ca988 + 0x2f2c) + -1;
  *(int *)(iVar1 + 0x1d14) = *(int *)(iVar1 + 0x1d14) + -1;
  uVar3 = *(uint *)(*(int *)(iVar1 + 0x1d1c) + *(int *)(iVar1 + 0x1d14) * 4 + -4);
  *(uint *)(iVar1 + 0x1c30) = uVar3;
  if ((uVar2 >> 2 & 1) == 0) {
    return;
  }
  if ((uVar3 & 4) != 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x1528) = *(undefined4 *)(iVar1 + 0x2f28);
  return;
}


/* ==== FUN_820519e8 @ 820519e8 ==== */

void FUN_820519e8(void)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1ba8);
  *(undefined4 *)(iVar1 + 0x184) =
       *(undefined4 *)(*(int *)(iVar1 + 0x194) * 4 + *(int *)(iVar1 + 0x19c) + -4);
  *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + -1;
  return;
}


/* ==== FUN_82051a28 @ 82051a28 ==== */

uint FUN_82051a28(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (*(uint *)(param_1 + 8) >> 0x19 & 1) - (*(uint *)(param_2 + 8) >> 0x19 & 1);
  if (uVar2 != 0) {
    return (-uVar2 & ~uVar2) >> 0x1f;
  }
  iVar1 = *(int *)(DAT_820ca988 + 0x1b60) + -1;
  if (-1 < iVar1) {
    iVar4 = iVar1 * 4;
    do {
      iVar3 = *(int *)(iVar4 + *(int *)(DAT_820ca988 + 0x1b68));
      if (iVar3 == param_1) {
        return 1;
      }
      if (iVar3 == param_2) {
        return 0;
      }
      iVar1 = iVar1 + -1;
      iVar4 = iVar4 + -4;
    } while (-1 < iVar1);
  }
  return 0;
}


/* ==== FUN_82051aa0 @ 82051aa0 ==== */

void FUN_82051aa0(void)

{
  *(int *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0xc4) =
       *(int *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0xc4) + -1;
  return;
}


/* ==== FUN_82051ac0 @ 82051ac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051ac0(float *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_820ca988 + 0x1ba8);
  if (*(char *)(iVar1 + 0x8f) != '\0') {
    return;
  }
  *(float *)(iVar1 + 0xd8) = *(float *)(iVar1 + 0xd0) + *param_1;
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(iVar1 + 0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051c20 @ 82051c20 ==== */

void FUN_82051c20(float *param_1)

{
  float local_10;
  float local_c;
  
  local_10 = param_1[2] - *param_1;
  local_c = param_1[3] - param_1[1];
  FUN_82051ac0(&local_10);
  return;
}


/* ==== FUN_82051c68 @ 82051c68 ==== */

void FUN_82051c68(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1ba8);
  fVar1 = (float)((double)(*(float *)(iVar2 + 0xc) - *(float *)(iVar2 + 0x58)) + param_1);
  *(float *)(iVar2 + 0xd0) = fVar1;
  if (fVar1 <= *(float *)(iVar2 + 0xe8)) {
    fVar1 = *(float *)(iVar2 + 0xe8);
  }
  *(float *)(iVar2 + 0xe8) = fVar1;
  return;
}


/* ==== FUN_82051cb0 @ 82051cb0 ==== */

void FUN_82051cb0(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1ba8);
  fVar1 = (float)((double)(*(float *)(iVar2 + 0x10) - *(float *)(iVar2 + 0x5c)) + param_1);
  *(float *)(iVar2 + 0xd4) = fVar1;
  if (fVar1 <= *(float *)(iVar2 + 0xec)) {
    fVar1 = *(float *)(iVar2 + 0xec);
  }
  *(float *)(iVar2 + 0xec) = fVar1;
  return;
}


/* ==== FUN_82051cf8 @ 82051cf8 ==== */

void FUN_82051cf8(void)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1ba8);
  *(undefined4 *)(iVar1 + 0x180) =
       *(undefined4 *)(*(int *)(iVar1 + 0x188) * 4 + *(int *)(iVar1 + 400) + -4);
  *(int *)(iVar1 + 0x188) = *(int *)(iVar1 + 0x188) + -1;
  return;
}


/* ==== FUN_82051d38 @ 82051d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051d38(void)

{
  float fVar1;
  
  if ((*(uint *)(DAT_820ca988 + 0x1c34) & 1) == 0) {
    fVar1 = *(float *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x180);
  }
  else {
    fVar1 = *(float *)(DAT_820ca988 + 0x1c38);
  }
  if (fVar1 < DAT_82002f44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051de0 @ 82051de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051ed8 @ 82051ed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051ed8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820520c0 @ 820520c0 ==== */

void FUN_820520c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820524b0 @ 820524b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820524b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052550 @ 82052550 ==== */

uint FUN_82052550(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0x80) == 0) {
    if ((param_2 & 0x100) == 0) {
      if ((*(int *)(DAT_820ca988 + 0x1d2c) <= *(int *)(DAT_820ca988 + 0x1d38)) ||
         (uVar3 = 1,
         *(int *)(*(int *)(DAT_820ca988 + 0x1d34) + *(int *)(DAT_820ca988 + 0x1d38) * 0x24) !=
         param_1)) {
        uVar3 = 0;
      }
      return uVar3;
    }
    iVar1 = 0;
    if (0 < *(int *)(DAT_820ca988 + 0x1d2c)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + *(int *)(DAT_820ca988 + 0x1d34)) == param_1) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < *(int *)(DAT_820ca988 + 0x1d2c));
    }
    return 0;
  }
  if ((param_2 & 0x100) != 0) {
    return (-*(uint *)(DAT_820ca988 + 0x1d2c) & ~*(uint *)(DAT_820ca988 + 0x1d2c)) >> 0x1f;
  }
  return (uint)(*(uint *)(DAT_820ca988 + 0x1d2c) <= *(uint *)(DAT_820ca988 + 0x1d38)) -
         ((int)~(*(uint *)(DAT_820ca988 + 0x1d2c) ^ *(uint *)(DAT_820ca988 + 0x1d38)) >> 0x1f) & 1;
}


/* ==== FUN_82052620 @ 82052620 ==== */

void FUN_82052620(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82052a58 @ 82052a58 ==== */

void FUN_82052a58(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    fVar1 = *param_2;
    fVar2 = *param_3;
    if ((*param_3 <= fVar1) && (fVar2 = fVar1, param_3[2] < fVar1)) {
      fVar2 = param_3[2];
    }
    *param_2 = fVar2;
    fVar1 = param_2[2];
    fVar2 = *param_3;
    if ((fVar2 <= fVar1) && (fVar2 = fVar1, param_3[2] < fVar1)) {
      fVar2 = param_3[2];
    }
    param_2[2] = fVar2;
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  if ((param_3[1] <= fVar1) && (fVar2 = fVar1, param_3[3] < fVar1)) {
    fVar2 = param_3[3];
  }
  param_2[1] = fVar2;
  fVar1 = param_2[3];
  fVar2 = param_3[1];
  if ((fVar2 <= fVar1) && (fVar2 = fVar1, param_3[3] < fVar1)) {
    fVar2 = param_3[3];
  }
  param_2[3] = fVar2;
  return;
}


/* ==== FUN_82052b20 @ 82052b20 ==== */

void FUN_82052b20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82052eb0 @ 82052eb0 ==== */

void FUN_82052eb0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = DAT_820ca988;
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x10;
  }
  *(undefined4 *)(DAT_820ca988 + 0x1dbc) = param_1;
  *(undefined4 *)(iVar2 + 0x1dc0) = param_1;
  *(undefined1 *)(iVar2 + 0x1dad) = 1;
  uVar3 = 0;
  *(undefined1 *)(iVar2 + 0x1dac) = 1;
  *(undefined4 *)(iVar2 + 0x1dc4) = param_2;
  *(uint *)(iVar2 + 0x1db0) = param_3;
  uVar1 = DAT_8200a588;
  *(undefined4 *)(iVar2 + 0x1db4) = param_4;
  *(undefined1 *)(iVar2 + 0x1dae) = 0;
  *(undefined4 *)(iVar2 + 0x1df0) = 0;
  *(undefined4 *)(iVar2 + 0x1db8) = *(undefined4 *)(iVar2 + 0x37c);
  *(undefined4 *)(iVar2 + 0x1e1c) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e18) = uVar1;
  *(undefined4 *)(iVar2 + 0x1df4) = 0;
  *(undefined4 *)(iVar2 + 0x1e14) = uVar1;
  *(undefined4 *)(iVar2 + 0x1dfc) = 0;
  *(undefined4 *)(iVar2 + 0x1df8) = 0;
  *(undefined4 *)(iVar2 + 0x1e10) = 0;
  *(undefined4 *)(iVar2 + 0x1e48) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e44) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e20) = 0;
  *(undefined4 *)(iVar2 + 0x1e40) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e28) = 0;
  *(undefined4 *)(iVar2 + 0x1e24) = 0;
  *(undefined4 *)(iVar2 + 0x1e3c) = 0;
  *(undefined4 *)(iVar2 + 0x1e74) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e70) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e4c) = 0;
  *(undefined4 *)(iVar2 + 0x1e6c) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e54) = 0;
  *(undefined4 *)(iVar2 + 0x1e50) = 0;
  *(undefined4 *)(iVar2 + 0x1e68) = 0;
  if ((*(char *)(DAT_820ca988 + 0x1dad) != '\0') || (*(char *)(DAT_820ca988 + 0x1d95) != '\0')) {
    uVar3 = 1;
  }
  *(undefined1 *)(DAT_820ca988 + 0x1d94) = uVar3;
  return;
}


/* ==== FUN_82052f80 @ 82052f80 ==== */

void FUN_82052f80(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = -0x7df30000;
  *(undefined1 *)(DAT_820ca988 + 0x1dad) = 0;
  FUN_8204da50();
  iVar1 = *(int *)(iVar1 + -0x5678);
  if ((*(char *)(iVar1 + 0x1dad) != '\0') || (uVar2 = 0, *(char *)(iVar1 + 0x1d95) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(iVar1 + 0x1d94) = uVar2;
  return;
}


/* ==== FUN_82052fd8 @ 82052fd8 ==== */

void FUN_82052fd8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_820ca988;
  uVar2 = 0;
  *(undefined1 *)(DAT_820ca988 + 0x1dad) = 0;
  *(undefined1 *)(iVar1 + 0x1dac) = 0;
  if ((*(char *)(DAT_820ca988 + 0x1dad) != '\0') || (*(char *)(DAT_820ca988 + 0x1d95) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(DAT_820ca988 + 0x1d94) = uVar2;
  *(undefined4 *)(iVar1 + 0x1dbc) = param_1;
  *(undefined4 *)(iVar1 + 0x1dc4) = param_2;
  *(undefined1 *)(iVar1 + 0x1dae) = 1;
  *(uint *)(iVar1 + 0x1db0) = param_3 | 0x80;
  *(undefined4 *)(iVar1 + 0x1db4) = param_4;
  return;
}


/* ==== FUN_82053030 @ 82053030 ==== */

void FUN_82053030(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_820ca988;
  if (param_1 == 0) {
    iVar3 = *(int *)(*(int *)(DAT_820ca988 + 0x1d54) + 0x2f0);
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0x8b) == '\0')) {
      iVar3 = *(int *)(DAT_820ca988 + 0x1d54);
    }
    *(int *)(DAT_820ca988 + 0x1d54) = iVar3;
  }
  iVar1 = DAT_820ca988;
  iVar2 = *(int *)(iVar5 + 0x1d54);
  iVar3 = (param_1 + 0xbd) * 4;
  iVar4 = *(int *)(iVar3 + iVar2);
  if (iVar4 != 0) {
    *(int *)(DAT_820ca988 + 0x1d58) = iVar4;
    iVar2 = param_1 * 0x10 + iVar2;
    *(int *)(iVar1 + 0x1d8c) = param_1;
    *(undefined4 *)(iVar1 + 0x1d5c) = 0;
    *(int *)(*(int *)(iVar1 + 0x1d54) + iVar3) = iVar4;
    iVar5 = *(int *)(iVar1 + 0x1d54) + param_1 * 0x10;
    *(undefined4 *)(iVar5 + 0x2fc) = *(undefined4 *)(iVar2 + 0x2fc);
    *(undefined4 *)(iVar5 + 0x300) = *(undefined4 *)(iVar2 + 0x300);
    *(undefined4 *)(iVar5 + 0x304) = *(undefined4 *)(iVar2 + 0x304);
    *(undefined4 *)(iVar5 + 0x308) = *(undefined4 *)(iVar2 + 0x308);
    return;
  }
  *(int *)(iVar5 + 0x1d8c) = param_1;
  FUN_8204dae8();
  return;
}


/* ==== FUN_820530f0 @ 820530f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820530f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053240 @ 82053240 ==== */

void FUN_82053240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82053528 @ 82053528 ==== */

void FUN_82053528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820538d0 @ 820538d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820538d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053ae0 @ 82053ae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053ae0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053b78 @ 82053b78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053b78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053c18 @ 82053c18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053c18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053cc0 @ 82053cc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053cc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053d80 @ 82053d80 ==== */

undefined4 FUN_82053d80(void)

{
  return **(undefined4 **)(DAT_820ca988 + 0x1d50);
}


/* ==== FUN_82053db8 @ 82053db8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053db8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053e30 @ 82053e30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053e30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053ed0 @ 82053ed0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053ed0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053f48 @ 82053f48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053f48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053fe0 @ 82053fe0 ==== */

void FUN_82053fe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820540a8 @ 820540a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820540a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054150 @ 82054150 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054150(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820541c8 @ 820541c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820541c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054240 @ 82054240 ==== */

void FUN_82054240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820542d8 @ 820542d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820542d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054350 @ 82054350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054350(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820543c8 @ 820543c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820543c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054470 @ 82054470 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054470(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054528 @ 82054528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820545d8 @ 820545d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820545d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054678 @ 82054678 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054678(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820546f0 @ 820546f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820546f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054768 @ 82054768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054810 @ 82054810 ==== */

void FUN_82054810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820548a8 @ 820548a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820548a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054950 @ 82054950 ==== */

void FUN_82054950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82054a18 @ 82054a18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054a18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054a68 @ 82054a68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054a68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054b50 @ 82054b50 ==== */

void FUN_82054b50(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_8204bfe8();
  piVar1 = (int *)((ulonglong)uVar2 >> 0x20);
  if ((piVar1 == (int *)(*param_1 * 8 + param_1[2])) || (*piVar1 != (int)uVar2)) {
    FUN_82053fe0();
  }
  else {
    piVar1[1] = param_3;
  }
  return;
}


/* ==== FUN_82054bc0 @ 82054bc0 ==== */

void FUN_82054bc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82054c80 @ 82054c80 ==== */

void FUN_82054c80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== thunk_FUN_8204f720 @ 82054d20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_8204f720(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054d28 @ 82054d28 ==== */

void FUN_82054d28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82054e50 @ 82054e50 ==== */

void FUN_82054e50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82055458 @ 82055458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055500 @ 82055500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055500(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055598 @ 82055598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055620 @ 82055620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820556c8 @ 820556c8 ==== */

void FUN_820556c8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_820ca988;
  *(int *)(DAT_820ca988 + 0x1ba8) = param_1;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x174) == -1)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x1f80) + *(int *)(param_1 + 0x174) * 0x1c8;
  }
  *(int *)(iVar2 + 0x1f64) = iVar3;
  if (param_1 == 0) {
    return;
  }
  fVar1 = *(float *)(DAT_820ca988 + 0x1948) * *(float *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
  }
  *(float *)(iVar2 + 0x1958) = fVar1;
  *(float *)(iVar2 + 0x1944) = fVar1;
  return;
}


/* ==== FUN_82055740 @ 82055740 ==== */

void FUN_82055740(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82055948 @ 82055948 ==== */

void FUN_82055948(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82055c78 @ 82055c78 ==== */

void FUN_82055c78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82055d08 @ 82055d08 ==== */

void FUN_82055d08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82055dd0 @ 82055dd0 ==== */

void FUN_82055dd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82055e30 @ 82055e30 ==== */

int FUN_82055e30(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_1;
  iVar4 = DAT_820ca988;
  iVar2 = FUN_82051750(param_1,param_2,param_1);
  if (-1 < iVar2) {
    iVar5 = iVar2 << 2;
    do {
      iVar6 = *(int *)(iVar5 + *(int *)(iVar4 + 0x1b68));
      if ((*(uint *)(iVar6 + 8) & 0x1000000) == 0) {
        iVar7 = iVar6;
        if (*(int *)(iVar6 + 0x2e0) == iVar3) {
LAB_82055e80:
          bVar1 = true;
        }
        else {
          do {
            if (iVar7 == iVar3) goto LAB_82055e80;
            iVar7 = *(int *)(iVar7 + 0x2dc);
            bVar1 = false;
          } while (iVar7 != 0);
        }
        if (!bVar1) {
          return param_1;
        }
        if ((*(char *)(iVar6 + 0x8a) == '\0') || (bVar1 = true, *(char *)(iVar6 + 0x91) != '\0')) {
          bVar1 = false;
        }
        if ((bVar1) && ((*(uint *)(iVar6 + 8) >> 0x19 & 1) <= (*(uint *)(iVar3 + 8) >> 0x19 & 1))) {
          param_1 = iVar6;
        }
      }
      iVar2 = iVar2 + -1;
      iVar5 = iVar5 + -4;
    } while (-1 < iVar2);
  }
  return param_1;
}


/* ==== FUN_82055f08 @ 82055f08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055f08(void)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined4 *)(DAT_820ca988 + 0x1bf4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1bf8) = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055f68 @ 82055f68 ==== */

void FUN_82055f68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82056058 @ 82056058 ==== */

void FUN_82056058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82056290 @ 82056290 ==== */

void FUN_82056290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820568a0 @ 820568a0 ==== */

void FUN_820568a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82056938 @ 82056938 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056938(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820569c0 @ 820569c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820569c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056a48 @ 82056a48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056a48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056aa0 @ 82056aa0 ==== */

void FUN_82056aa0(void)

{
  FUN_820520c0();
  return;
}


/* ==== FUN_82056ad0 @ 82056ad0 ==== */

void FUN_82056ad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82056b80 @ 82056b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056b80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056c60 @ 82056c60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056c60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = **(int **)(DAT_820ca988 + 0x1d50);
  fVar1 = *(float *)(iVar5 + 8);
  fVar2 = *(float *)(iVar5 + 0x10);
  fVar3 = *(float *)(iVar5 + 4);
  fVar4 = *(float *)(iVar5 + 0xc);
  param_1[1] = fVar1;
  *param_1 = fVar3;
  param_1[2] = fVar4 + fVar3;
  param_1[3] = fVar2 + fVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056d20 @ 82056d20 ==== */

void FUN_82056d20(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_820ca988 + 0x1df4;
  iVar3 = *(int *)(DAT_820ca988 + 0x1dec);
  if (iVar3 == 1) {
    iVar3 = DAT_820ca988;
    if (*(int *)(DAT_820ca988 + 0x1e7c) == 0) {
      FUN_8204da50(DAT_820ca988 + 0x1e78);
    }
    iVar4 = *(int *)(iVar3 + 0x1df0) + -1;
    *(int *)(iVar3 + 0x1df0) = iVar4;
    if (iVar4 != 0) {
      if (*(int *)(iVar3 + 0x1d58) != param_1) {
        return;
      }
      *(undefined4 *)(iVar3 + 0x1df0) = 1;
      return;
    }
  }
  else {
    if (iVar3 == -1) {
      if (*(int *)(DAT_820ca988 + 0x1d58) != param_1) {
        FUN_8204da50(iVar1);
        return;
      }
      if (*(int *)(DAT_820ca988 + 0x1df8) == 0) {
        return;
      }
      *(undefined1 *)(DAT_820ca988 + 0x1dad) = 0;
      if ((*(char *)(DAT_820ca988 + 0x1dad) != '\0') ||
         (uVar2 = 0, *(char *)(DAT_820ca988 + 0x1d95) != '\0')) {
        uVar2 = 1;
      }
      *(undefined1 *)(DAT_820ca988 + 0x1d94) = uVar2;
      return;
    }
    if (iVar3 != 0) {
      return;
    }
    if (*(int *)(DAT_820ca988 + 0x1e7c) != 0) {
      return;
    }
    iVar1 = DAT_820ca988 + 0x1e78;
  }
  FUN_82052f80(iVar1);
  return;
}


/* ==== FUN_82056e18 @ 82056e18 ==== */

void FUN_82056e18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82057028 @ 82057028 ==== */

void FUN_82057028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820575c0 @ 820575c0 ==== */

void FUN_820575c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82057690 @ 82057690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057690(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_8207c47c();
  fVar2 = DAT_820066d0;
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  pbVar11 = (byte *)uVar12;
  do {
    iVar3 = DAT_820ca988;
    pcVar10 = *(char **)(DAT_820ca988 + 0x2fbc);
    pbVar8 = *(byte **)(DAT_820ca988 + 0x2fc0);
    iVar9 = *(int *)(DAT_820ca988 + 0x1ba8);
    *(undefined4 *)(DAT_820ca988 + 0x2fc0) = 0;
    *(undefined4 *)(iVar3 + 0x2fbc) = 0;
    if ((param_3 == (byte *)0x0) && (param_3 = pbVar11, pbVar11 != (byte *)0xffffffff)) {
      while (*param_3 != 0) {
        if (((*param_3 == 0x23) && (param_3[1] == 0x23)) ||
           (param_3 = param_3 + 1, param_3 == (byte *)0xffffffff)) break;
      }
    }
    if ((iVar5 == 0) ||
       (bVar1 = true,
       *(float *)(iVar5 + 4) <= *(float *)(iVar3 + 0x2fc4) + *(float *)(iVar3 + 0x1568) + fVar2)) {
      bVar1 = false;
    }
    if (iVar5 != 0) {
      *(undefined4 *)(iVar3 + 0x2fc4) = *(undefined4 *)(iVar5 + 4);
    }
    if (bVar1) {
      FUN_820575c0();
      *(undefined1 *)(iVar3 + 0x2fc8) = 1;
    }
    pcVar4 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      do {
        pcVar7 = pcVar4;
        pcVar4 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      FUN_82057690(iVar5,pcVar10,pcVar7);
    }
    iVar9 = *(int *)(iVar9 + 0x158);
    if (iVar9 < *(int *)(iVar3 + 0x2fcc)) {
      *(int *)(iVar3 + 0x2fcc) = iVar9;
    }
    while( true ) {
      pbVar6 = FUN_8207d6d0(pbVar11,10,(int)param_3 - (int)pbVar11);
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = param_3;
      }
      if ((pbVar11 != pbVar6) || (param_3 != pbVar6)) {
        FUN_820575c0();
        *(undefined1 *)(iVar3 + 0x2fc8) = 0;
        if (*pbVar6 == 10) {
          FUN_820575c0();
          *(undefined1 *)(iVar3 + 0x2fc8) = 1;
        }
      }
      if (param_3 == pbVar6) break;
      pbVar11 = pbVar6 + 1;
    }
    pbVar6 = pbVar8;
    if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      param_3 = pbVar6;
      pbVar6 = param_3 + 1;
      pbVar11 = pbVar8;
    } while (*param_3 != 0);
  } while( true );
}


/* ==== FUN_820578b0 @ 820578b0 ==== */

void FUN_820578b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82057980 @ 82057980 ==== */

void FUN_82057980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82057a58 @ 82057a58 ==== */

int * FUN_82057a58(int param_1)

{
  int *piVar1;
  
  if (*(int *)(DAT_820ca988 + 0x2f84) != 0) {
    piVar1 = (int *)(*(int *)(DAT_820ca988 + 0x2f84) + 4);
    do {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = (int *)(piVar1[-1] + (int)piVar1);
    } while (piVar1 != (int *)(*(int *)(DAT_820ca988 + 0x2f84) + *(int *)(DAT_820ca988 + 0x2f7c) + 4
                              ));
  }
  return (int *)0x0;
}


/* ==== FUN_82057ac0 @ 82057ac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057ac0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057b08 @ 82057b08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057b08(void)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_8207c488();
  iVar2 = DAT_820ca988;
  pcVar8 = (char *)((ulonglong)uVar12 >> 0x20);
  pcVar6 = (char *)uVar12;
  pcVar5 = pcVar8;
  if (pcVar6 == (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar5 + (-1 - (int)pcVar8);
  }
  FUN_82053ed0();
  pcVar5 = *(char **)(iVar2 + 0x2f6c);
  pcVar8 = pcVar5 + (int)pcVar6;
  FUN_8207c860();
  pcVar5[(int)pcVar6] = '\0';
  iVar9 = 0;
  if (0 < *(int *)(iVar2 + 0x2f70)) {
    iVar10 = 0;
    do {
      pcVar7 = *(code **)(iVar10 + *(int *)(iVar2 + 0x2f78) + 0xc);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar9 < *(int *)(iVar2 + 0x2f70));
  }
  iVar9 = 0;
  iVar10 = 0;
  while (pcVar5 < pcVar8) {
    for (; (*pcVar5 == '\n' || (pcVar6 = pcVar5, *pcVar5 == '\r')); pcVar5 = pcVar5 + 1) {
    }
    for (; ((pcVar6 < pcVar8 && (*pcVar6 != '\n')) && (*pcVar6 != '\r')); pcVar6 = pcVar6 + 1) {
    }
    *pcVar6 = '\0';
    if (*pcVar5 != ';') {
      if (((*pcVar5 == '[') && (pcVar5 < pcVar6)) && (pcVar11 = pcVar6 + -1, pcVar6[-1] == ']')) {
        *pcVar11 = '\0';
        pbVar3 = FUN_8207d6d0((byte *)(pcVar5 + 1),0x5d,(int)pcVar11 - (int)(pcVar5 + 1));
        if ((pbVar3 != (byte *)0x0) &&
           (pbVar4 = FUN_8207d6d0(pbVar3 + 1,0x5b,(int)pcVar11 - (int)(pbVar3 + 1)),
           pbVar4 != (byte *)0x0)) {
          *pbVar3 = 0;
          iVar10 = FUN_82053cc0();
          if (iVar10 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (**(code **)(iVar10 + 0x10))(iVar2,iVar10,pbVar4 + 1);
          }
        }
      }
      else if ((iVar10 != 0) && (iVar9 != 0)) {
        (**(code **)(iVar10 + 0x14))(iVar2,iVar10,iVar9);
      }
    }
    pcVar5 = pcVar6 + 1;
  }
  *(undefined1 *)(iVar2 + 0x2f5d) = 1;
  FUN_8207c860();
  iVar9 = 0;
  if (0 < *(int *)(iVar2 + 0x2f70)) {
    iVar10 = 0;
    do {
      pcVar7 = *(code **)(iVar10 + *(int *)(iVar2 + 0x2f78) + 0x18);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar9 < *(int *)(iVar2 + 0x2f70));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057d80 @ 82057d80 ==== */

void FUN_82057d80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82057ec8 @ 82057ec8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057ec8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057fe8 @ 82057fe8 ==== */

void FUN_82057fe8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820580f8 @ 820580f8 ==== */

void FUN_820580f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82058288 @ 82058288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820584e0 @ 820584e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820584e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058530 @ 82058530 ==== */

void FUN_82058530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82058670 @ 82058670 ==== */

void FUN_82058670(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82058760 @ 82058760 ==== */

void FUN_82058760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82058818 @ 82058818 ==== */

void FUN_82058818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820588c0 @ 820588c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820588c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058998 @ 82058998 ==== */

void FUN_82058998(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82058a10 @ 82058a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058a10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058ab8 @ 82058ab8 ==== */

void FUN_82058ab8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82058be8 @ 82058be8 ==== */

void FUN_82058be8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82058e78 @ 82058e78 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82058ff0) */
/* WARNING: Removing unreachable block (ram,0x82059014) */

void FUN_82058e78(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar10;
  float *pfVar9;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  
  FUN_8207c488();
  uVar14 = FUN_8207d31c();
  iVar6 = DAT_820ca988;
  fVar3 = DAT_82002f44;
  iVar7 = (int)((ulonglong)uVar14 >> 0x20);
  pfVar11 = (float *)uVar14;
  uVar12 = *(uint *)(iVar7 + 8);
  if (((uVar12 & 0x20) != 0) || (bVar5 = true, *(int *)(DAT_820ca988 + 0x1550) == -1)) {
    bVar5 = false;
  }
  uVar13 = *(uint *)(DAT_820ca988 + 0x1c30);
  *(uint *)(DAT_820ca988 + 0x1c30) = uVar13 | 0x10;
  *(undefined4 *)(iVar7 + 0x124) = 1;
  fVar1 = *(float *)(iVar6 + 0x1564);
  fVar2 = *(float *)(iVar6 + 0x1944);
  fStack_dc = fVar3;
  fStack_e0 = fVar3;
  fStack_ec = fVar3;
  fStack_f0 = fVar3;
  if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bVar5) && (*(int *)(iVar6 + 0x1550) == 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar5) {
    if (*(int *)(iVar6 + 0x1550) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar8 = FUN_82058818();
    cVar10 = FUN_820615a8(uVar8,&fStack_f0);
    if (cVar10 != '\0') {
      *(undefined1 *)(iVar7 + 0x8e) = 1;
    }
  }
  *(undefined4 *)(iVar7 + 0x124) = 0;
  uVar12 = uVar12 & 0x100000;
  *(uint *)(iVar6 + 0x1c30) = uVar13;
  fVar4 = fVar3;
  if (uVar12 != 0) {
    fVar4 = fVar2 * DAT_8200a5dc;
  }
  pfVar9 = (float *)FUN_8204c7f0();
  fStack_d8 = *pfVar9 + fVar4;
  fStack_d4 = pfVar9[1];
  fStack_d0 = fVar1;
  if (*(float *)(iVar6 + 0x1564) < fVar1) {
    fStack_d0 = *(float *)(iVar6 + 0x157c) + fVar1;
    fVar1 = *(float *)(iVar6 + 0x157c) + fVar1;
  }
  pfVar9 = (float *)(iVar6 + 0x1548);
  fVar2 = *pfVar9;
  if ((fVar3 < fVar2) && (fVar2 < DAT_820066d0)) {
    fVar2 = -(ABS(fVar2 - DAT_820066fc) * DAT_820066d4 - DAT_820066d0);
    if ((fVar3 <= fVar2) && (fVar3 = fVar2, DAT_820066d0 < fVar2)) {
      fVar3 = DAT_820066d0;
    }
    fVar2 = fVar1;
    if (fVar1 <= fStack_d0) {
      fVar2 = fStack_d0;
    }
    fVar4 = (((pfVar11[2] - *pfVar11) - fStack_d0) - fVar1) - fStack_d8;
    if (fVar2 < fVar4) {
      fVar4 = fVar2;
    }
    fVar4 = fVar4 * fVar3;
    if (fStack_d0 < fVar4) {
      fStack_d0 = fVar4;
    }
    if (fVar1 < fVar4) {
      fVar1 = fVar4;
    }
  }
  fStack_d0 = *pfVar11 + fStack_d0;
  fStack_c8 = pfVar11[2];
  fStack_cc = pfVar11[1];
  fStack_b8 = fStack_c8 - fVar1;
  fStack_c4 = pfVar11[3];
  fVar3 = *(float *)(iVar6 + 0x157c) + fStack_b8;
  if (fVar3 < fStack_c8) {
    fStack_c8 = fVar3;
  }
  fStack_c0 = fStack_d0;
  fStack_bc = fStack_cc;
  fStack_b4 = fStack_c4;
  if (uVar12 != 0) {
    fVar3 = ((fStack_b8 - fStack_d0) - fStack_d8) * *pfVar9 + fStack_d0 + fStack_d8;
    fStack_e8 = fStack_d0;
    if ((fStack_d0 <= fVar3) && (fStack_e8 = fVar3, fStack_b8 < fVar3)) {
      fStack_e8 = fStack_b8;
    }
    fStack_e4 = (fStack_cc + fStack_c4) * DAT_820066fc;
    if (fStack_d0 < fStack_e8) {
      fStack_b0 = *(float *)(DAT_820ca988 + 0x15f0);
      uStack_ac = *(undefined4 *)(DAT_820ca988 + 0x15f4);
      uStack_a8 = *(undefined4 *)(DAT_820ca988 + 0x15f8);
      fStack_a4 = *(float *)(DAT_820ca988 + 0x1528) * *(float *)(DAT_820ca988 + 0x15fc);
      FUN_8204bee8(&fStack_b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  FUN_82058760(&fStack_c0,&fStack_b8,param_3,0,&fStack_d8,pfVar9,&fStack_d0);
  func_0x8207d36c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059298 @ 82059298 ==== */

void FUN_82059298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82059380 @ 82059380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820593d0 @ 820593d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820593d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059420 @ 82059420 ==== */

void FUN_82059420(void)

{
  FUN_82058818();
  return;
}


/* ==== FUN_82059438 @ 82059438 ==== */

void FUN_82059438(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82059578 @ 82059578 ==== */

void FUN_82059578(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82059678 @ 82059678 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059678(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059708 @ 82059708 ==== */

void FUN_82059708(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820599b0 @ 820599b0 ==== */

void FUN_820599b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82059cb0 @ 82059cb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059cb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059d40 @ 82059d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059fc8 @ 82059fc8 ==== */

void FUN_82059fc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8205a290 @ 8205a290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a290(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a3b0 @ 8205a3b0 ==== */

void FUN_8205a3b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8205a5a8 @ 8205a5a8 ==== */

void FUN_8205a5a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8205aeb8 @ 8205aeb8 ==== */

void FUN_8205aeb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8205aff0 @ 8205aff0 ==== */

void FUN_8205aff0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8205b140 @ 8205b140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b188 @ 8205b188 ==== */

void FUN_8205b188(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8205b370 @ 8205b370 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8205b878) */
/* WARNING: Removing unreachable block (ram,0x8205b888) */
/* WARNING: Removing unreachable block (ram,0x8205b88c) */

void FUN_8205b370(void)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  FUN_8207c494();
  iVar5 = DAT_820ca988;
  iVar11 = 0;
  bVar3 = false;
  puVar12 = (uint *)(DAT_820ca988 + 8);
  iVar8 = DAT_820ca988;
  iVar6 = FUN_8204d848();
  bVar13 = iVar6 != 0;
  if (bVar13) {
    *(undefined4 *)(iVar8 + 0x1ea4) = 0;
    iVar8 = DAT_820ca988;
  }
  fVar1 = DAT_82002f44;
  dVar19 = (double)DAT_82002f44;
  if ((*(int *)(iVar5 + 0x1ea8) != 0) && (*(int *)(iVar5 + 0x1ea4) == 0)) {
    dVar14 = -(double)(*(float *)(iVar5 + 0x18) * DAT_82006b98 - *(float *)(iVar5 + 0x1eb4));
    if (dVar14 < 0.0) {
      dVar14 = dVar19;
    }
    *(float *)(iVar5 + 0x1eb4) = (float)dVar14;
    iVar8 = DAT_820ca988;
    if (((double)*(float *)(iVar5 + 0x1ebc) <= dVar19) && (dVar14 <= dVar19)) {
      *(undefined4 *)(iVar5 + 0x1ea8) = 0;
      iVar8 = DAT_820ca988;
    }
  }
  if ((bVar13) || (*(int *)(iVar5 + 0x1ea4) != 0)) {
LAB_8205b450:
    uVar9 = 0;
  }
  else {
    if (((double)*(float *)(iVar8 + 0x1480) < dVar19) ||
       (bVar2 = true, (double)*(float *)(iVar8 + 0x1480) != dVar19)) {
      bVar2 = false;
    }
    uVar9 = 1;
    if (!bVar2) goto LAB_8205b450;
  }
  if (((!bVar13) && (*(int *)(iVar5 + 0x1ea4) == 0)) && (*(char *)(iVar5 + 0xfc) != '\0')) {
    if (*(int *)(iVar8 + 0x34) < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_8204ca48(*(int *)(iVar8 + 0x34),'\x01');
    }
    bVar13 = true;
    if ((uVar7 & 0xff) != 0) goto LAB_8205b4a0;
  }
  bVar13 = false;
LAB_8205b4a0:
  if ((((uVar9 & 0xff) != 0) || (bVar13)) &&
     ((iVar8 = *(int *)(iVar5 + 0x1d54), iVar8 != 0 || (iVar8 = FUN_82053ae0(), iVar8 != 0)))) {
    uVar10 = *(undefined4 *)(iVar8 + 0x2e0);
    *(float *)(iVar5 + 0x1eb4) = fVar1;
    *(float *)(iVar5 + 0x1eb0) = fVar1;
    *(char *)(iVar5 + 0x1eb8) = '\x01' - ((uVar9 & 0xff) == 0);
    *(undefined4 *)(iVar5 + 0x1ea8) = uVar10;
    *(undefined4 *)(iVar5 + 0x1ea4) = uVar10;
    *(uint *)(iVar5 + 0x1d88) = !bVar13 + 2;
  }
  fVar1 = *(float *)(iVar5 + 0x1eb0) + *(float *)(iVar5 + 0x18);
  *(float *)(iVar5 + 0x1eb0) = fVar1;
  dVar14 = (double)DAT_820066d0;
  dVar17 = (double)DAT_8200a7dc;
  dVar18 = (double)DAT_8200a6dc;
  if ((*(int *)(iVar5 + 0x1ea4) != 0) && (*(int *)(iVar5 + 0x1d88) == 3)) {
    dVar15 = (double)(float)((double)(float)((double)fVar1 - dVar18) * dVar17);
    dVar16 = dVar19;
    if ((dVar19 <= dVar15) && (dVar16 = dVar15, dVar14 < dVar15)) {
      dVar16 = dVar14;
    }
    if (dVar16 <= (double)*(float *)(iVar5 + 0x1eb4)) {
      dVar16 = (double)*(float *)(iVar5 + 0x1eb4);
    }
    *(float *)(iVar5 + 0x1eb4) = (float)dVar16;
    dVar16 = FUN_8204dc38(0xc,4);
    uVar9 = (uint)(dVar19 < dVar16);
    dVar16 = FUN_8204dc38(0xd,4);
    if ((uVar9 & 0xff) != (uint)(dVar19 < dVar16)) {
      FUN_82053b78();
      *(float *)(iVar5 + 0x1eb4) = (float)dVar14;
    }
    if ((double)*(float *)(DAT_820ca988 + 0x30c) <= dVar19) {
      bVar4 = (double)*(float *)(iVar5 + 0x1eb4) < dVar14 & *(byte *)(iVar5 + 0x1eb8);
      *(byte *)(iVar5 + 0x1eb8) = bVar4;
      if ((bVar4 == 0) || (*(int *)(iVar5 + 0x1d54) == 0)) {
        if (*(char *)(iVar5 + 0x1eb8) == '\0') {
          iVar11 = *(int *)(iVar5 + 0x1ea4);
        }
      }
      else {
        bVar3 = true;
      }
      *(undefined4 *)(iVar5 + 0x1ea4) = 0;
    }
  }
  if ((*(int *)(iVar5 + 0x1ea4) != 0) && (*(int *)(iVar5 + 0x1d88) == 2)) {
    dVar17 = (double)(float)((double)(float)((double)*(float *)(iVar5 + 0x1eb0) - dVar18) * dVar17);
    if ((dVar19 <= dVar17) && (dVar19 = dVar17, dVar14 < dVar17)) {
      dVar19 = dVar14;
    }
    if (dVar19 <= (double)*(float *)(iVar5 + 0x1eb4)) {
      dVar19 = (double)*(float *)(iVar5 + 0x1eb4);
    }
    *(float *)(iVar5 + 0x1eb4) = (float)dVar19;
    if (*(int *)(DAT_820ca988 + 0x34) < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_8204ca48(*(int *)(DAT_820ca988 + 0x34),'\x01');
    }
    if ((uVar9 & 0xff) != 0) {
      FUN_82053b78();
    }
    if (*(char *)(iVar5 + 0xfc) == '\0') {
      iVar11 = *(int *)(iVar5 + 0x1ea4);
    }
  }
  if ((((*puVar12 & 1) != 0) && (*(int *)(iVar5 + 0x37c) == 4)) &&
     ((*(uint *)(iVar5 + 0x380) & 4) == 0)) {
    *(undefined1 *)(iVar5 + 0x1eb8) = 1;
    *(undefined4 *)(iVar5 + 0x1d88) = 2;
  }
  if ((*(char *)(iVar5 + 0x1eb8) != '\0') && (*(int *)(iVar5 + 0x1d88) == 2)) {
    if (((0 < *(int *)(iVar5 + 0x151c)) ||
        ((*(char *)(iVar5 + 0xfc) != '\0' || (*(char *)(iVar5 + 0xfd) != '\0')))) ||
       (*(char *)(iVar5 + 0xff) != '\0')) {
      *(undefined1 *)(iVar5 + 0x1eb8) = 0;
    }
    if (((((*(uint *)(iVar5 + 0x37c) & 4) == 0) && ((*(uint *)(iVar5 + 0x380) & 4) != 0)) &&
        (*(char *)(iVar5 + 0x1eb8) != '\0')) &&
       ((*(int *)(iVar5 + 0x1be0) == 0 || (*(char *)(iVar5 + 0x1bed) != '\0')))) {
      uVar9 = FUN_8204cbc0();
      uVar9 = uVar9 & 0xff;
      uVar7 = FUN_8204cbc0();
      if ((uVar7 & 0xff) == uVar9) {
        bVar3 = true;
      }
    }
    if (*(char *)(iVar5 + 0xfe) == '\0') {
      *(undefined1 *)(iVar5 + 0x1eb8) = 0;
    }
  }
  if ((*(int *)(iVar5 + 0x1ea4) != 0) && ((*(uint *)(*(int *)(iVar5 + 0x1ea4) + 8) & 4) == 0)) {
    if ((*(int *)(iVar5 + 0x1d88) == 2) && (*(char *)(iVar5 + 0xfd) == '\0')) {
      FUN_8204dda0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(iVar5 + 0x1d88) == 3) {
      FUN_8204dda0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (iVar11 != 0) {
    if ((*(int *)(iVar5 + 0x1d54) == 0) || (iVar11 != *(int *)(*(int *)(iVar5 + 0x1d54) + 0x2e0))) {
      FUN_8204c4c8(0,0);
      iVar8 = DAT_820ca988;
      *(undefined1 *)(DAT_820ca988 + 0x1d92) = 0;
      *(undefined1 *)(iVar8 + 0x1d91) = 1;
      *(undefined1 *)(iVar8 + 0x1d93) = 1;
      iVar8 = *(int *)(iVar11 + 0x2f0);
      if ((iVar8 != 0) && (*(char *)(iVar8 + 0x8b) != '\0')) {
        iVar11 = iVar8;
      }
      FUN_82059578();
      FUN_8205aeb8();
      if (*(int *)(iVar11 + 0x2f4) == 0) {
        FUN_8204dae8();
      }
      if (*(short *)(iVar11 + 0x12a) == 2) {
        *(undefined4 *)(iVar5 + 0x1d8c) = 1;
      }
    }
    *(undefined4 *)(iVar5 + 0x1ea4) = 0;
  }
  if ((bVar3) && (*(int *)(iVar5 + 0x1d54) != 0)) {
    FUN_8204c4c8(0,0);
    iVar6 = *(int *)(iVar5 + 0x1d54);
    iVar11 = *(int *)(iVar6 + 0x2d8);
    iVar8 = iVar6;
    while ((((iVar11 != 0 && ((*(ushort *)(iVar8 + 0x128) & 2) == 0)) &&
            ((*(uint *)(iVar8 + 8) & 0x1000000) != 0)) && ((*(uint *)(iVar8 + 8) & 0x14000000) == 0)
           )) {
      iVar8 = *(int *)(iVar8 + 0x2d8);
      iVar11 = *(int *)(iVar8 + 0x2d8);
    }
    if (iVar8 != iVar6) {
      FUN_8205aeb8();
      *(int *)(iVar8 + 0x2f0) = iVar6;
    }
    if ((*(ushort *)(*(int *)(iVar5 + 0x1d54) + 0x128) & 2) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(iVar5 + 0x1d8c) ^ 1;
    }
    if (uVar9 != *(uint *)(iVar5 + 0x1d8c)) {
      if (uVar9 == 1) {
        *(undefined4 *)(*(int *)(iVar5 + 0x1d54) + 0x2f8) = 0;
      }
      FUN_82053030(uVar9);
      iVar5 = DAT_820ca988;
      *(undefined1 *)(DAT_820ca988 + 0x1d92) = 0;
      *(undefined1 *)(iVar5 + 0x1d91) = 1;
      *(undefined1 *)(iVar5 + 0x1d93) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205ba90 @ 8205ba90 ==== */

void FUN_8205ba90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8205c248 @ 8205c248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c2e8 @ 8205c2e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c2e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c398 @ 8205c398 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c398(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c518 @ 8205c518 ==== */

void FUN_8205c518(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8205c6e8 @ 8205c6e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c6e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c8c8 @ 8205c8c8 ==== */

void FUN_8205c8c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8205e558 @ 8205e558 ==== */

void FUN_8205e558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8205e6c0 @ 8205e6c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e6c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e710 @ 8205e710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e760 @ 8205e760 ==== */

void FUN_8205e760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8205e878 @ 8205e878 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8205e878(void)

{
  uint *puVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 *puVar12;
  char cVar16;
  float *pfVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 uVar18;
  undefined4 uVar17;
  uint *puVar19;
  bool bVar20;
  int iVar21;
  
  FUN_8207c490();
  FUN_8207d328();
  iVar11 = DAT_820ca988;
  puVar19 = (uint *)(DAT_820ca988 + 8);
  puVar1 = (uint *)(DAT_820ca988 + 8);
  *(undefined1 *)(DAT_820ca988 + 0x353) = 0;
  fVar9 = DAT_82002f44;
  uVar5 = *puVar1 & 1;
  if (((*puVar1 & 2) == 0) || (bVar6 = true, (*(uint *)(iVar11 + 0xc) & 1) == 0)) {
    bVar6 = false;
  }
  if (((bVar6) && (*(int *)(iVar11 + 0x1d88) != 3)) &&
     (((DAT_82002f44 < *(float *)(iVar11 + 0x300) ||
       (((((DAT_82002f44 < *(float *)(iVar11 + 0x308) || (DAT_82002f44 < *(float *)(iVar11 + 0x304))
           ) || (DAT_82002f44 < *(float *)(iVar11 + 0x30c))) ||
         ((DAT_82002f44 < *(float *)(iVar11 + 0x310) || (DAT_82002f44 < *(float *)(iVar11 + 0x314)))
         )) || (DAT_82002f44 < *(float *)(iVar11 + 0x318))))) ||
      (DAT_82002f44 < *(float *)(iVar11 + 0x31c))))) {
    *(undefined4 *)(iVar11 + 0x1d88) = 3;
  }
  uVar15 = DAT_820066d0;
  if (uVar5 != 0) {
    if (*(int *)(iVar11 + 100) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_820ca988 + *(int *)(iVar11 + 100) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x300) = DAT_820066d0;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(int *)(iVar11 + 0x68) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_820ca988 + *(int *)(iVar11 + 0x68) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x308) = uVar15;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(int *)(iVar11 + 0x6c) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_820ca988 + *(int *)(iVar11 + 0x6c) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x304) = uVar15;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(int *)(iVar11 + 0x38) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_820ca988 + *(int *)(iVar11 + 0x38) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x340) = uVar15;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(int *)(iVar11 + 0x3c) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_820ca988 + *(int *)(iVar11 + 0x3c) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x344) = uVar15;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(int *)(iVar11 + 0x40) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(*(int *)(iVar11 + 0x40) + DAT_820ca988 + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x348) = uVar15;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(int *)(iVar11 + 0x44) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(*(int *)(iVar11 + 0x44) + DAT_820ca988 + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x34c) = uVar15;
      *(undefined4 *)(iVar11 + 0x1d88) = 2;
    }
    if (*(char *)(iVar11 + 0xfc) != '\0') {
      *(undefined4 *)(iVar11 + 0x338) = uVar15;
    }
    if (*(char *)(iVar11 + 0xfd) != '\0') {
      *(undefined4 *)(iVar11 + 0x33c) = uVar15;
    }
  }
  FUN_8207c860();
  fVar10 = DAT_82004c68;
  pfVar13 = (float *)(iVar11 + 0x1470);
  iVar21 = 0x14;
  do {
    fVar2 = fVar10;
    if ((fVar9 < pfVar13[-0x45c]) && (fVar2 = fVar9, fVar9 <= pfVar13[1])) {
      fVar2 = *(float *)(iVar11 + 0x18) + pfVar13[1];
    }
    pfVar13 = pfVar13 + 1;
    *pfVar13 = fVar2;
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  if (*(int *)(iVar11 + 0x1d98) != 0) {
    FUN_8204e038();
  }
  *(undefined1 *)(iVar11 + 0x1d95) = 0;
  *(undefined1 *)(iVar11 + 0x1d96) = 0;
  *(undefined4 *)(iVar11 + 0x1d98) = 0;
  *(undefined4 *)(iVar11 + 0x1d74) = 0;
  if (*(char *)(iVar11 + 0x1dac) != '\0') {
    FUN_82053240();
  }
  bVar4 = false;
  *(undefined4 *)(iVar11 + 0x1df0) = 0;
  *(undefined1 *)(iVar11 + 0x1dad) = 0;
  *(undefined1 *)(iVar11 + 0x1dac) = 0;
  if ((((*(char *)(iVar11 + 0x1d91) != '\0') && (*(char *)(iVar11 + 0x1d90) != '\0')) &&
      (*(char *)(iVar11 + 0x1d92) == '\0')) &&
     ((*(char *)(iVar11 + 0x1d93) != '\0' && (*(int *)(iVar11 + 0x1d54) != 0)))) {
    bVar4 = true;
  }
  iVar14 = *(int *)(iVar11 + 0x1d54);
  *(undefined1 *)(iVar11 + 0x1d91) = 0;
  iVar21 = iVar14;
  if (iVar14 != 0) {
    do {
      if ((*(int *)(iVar21 + 0x2e0) == iVar21) || ((*(uint *)(iVar21 + 8) & 0x14000000) != 0))
      break;
      iVar21 = *(int *)(iVar21 + 0x2d8);
    } while (iVar21 != 0);
    if ((iVar21 != 0) && (iVar21 != iVar14)) {
      *(int *)(iVar21 + 0x2f0) = iVar14;
    }
  }
  iVar21 = *(int *)(iVar11 + 0x1d54);
  if (((iVar21 != 0) && (*(int *)(iVar21 + 0x2f0) != 0)) && (*(int *)(iVar11 + 0x1d8c) == 0)) {
    *(undefined4 *)(iVar21 + 0x2f0) = 0;
  }
  FUN_8205b370();
  if (((uVar5 == 0) && (!bVar6)) ||
     ((*(int *)(iVar11 + 0x1d54) == 0 ||
      (bVar20 = true, (*(uint *)(*(int *)(iVar11 + 0x1d54) + 8) & 0x40000) != 0)))) {
    bVar20 = false;
  }
  *(bool *)(iVar11 + 0x355) = bVar20;
  if ((((bVar20) && (*(int *)(iVar11 + 0x1d58) != 0)) && (*(char *)(iVar11 + 0x1d92) == '\0')) ||
     (uVar18 = 0, *(int *)(iVar11 + 0x1ea4) != 0)) {
    uVar18 = 1;
  }
  *(undefined1 *)(iVar11 + 0x356) = uVar18;
  FUN_8205b188();
  iVar21 = *(int *)(iVar11 + 0x1d58);
  *(undefined4 *)(iVar11 + 0x1d6c) = 0;
  *(undefined4 *)(iVar11 + 0x1d68) = 0;
  *(undefined4 *)(iVar11 + 0x1d64) = 0;
  *(undefined4 *)(iVar11 + 0x1d60) = 0;
  *(undefined4 *)(iVar11 + 0x1d70) = 0;
  if ((((iVar21 == 0) || (*(char *)(iVar11 + 0x1d92) != '\0')) || (*(int *)(iVar11 + 0x1ea4) != 0))
     || ((*(int *)(iVar11 + 0x1d54) == 0 ||
         ((*(uint *)(*(int *)(iVar11 + 0x1d54) + 8) & 0x40000) != 0)))) goto LAB_8205ee08;
  bVar20 = *(float *)(DAT_820ca988 + 0x300) <= fVar9;
  if (bVar20) {
LAB_8205ed54:
    bVar7 = false;
  }
  else {
    if ((*(float *)(DAT_820ca988 + 0x1474) < fVar9) ||
       (bVar3 = true, *(float *)(DAT_820ca988 + 0x1474) != fVar9)) {
      bVar3 = false;
    }
    bVar7 = true;
    if (!bVar3) goto LAB_8205ed54;
  }
  if (*(float *)(DAT_820ca988 + 0x308) <= fVar9) {
LAB_8205ed8c:
    bVar8 = false;
  }
  else {
    if ((*(float *)(DAT_820ca988 + 0x147c) < fVar9) ||
       (bVar3 = true, *(float *)(DAT_820ca988 + 0x147c) != fVar9)) {
      bVar3 = false;
    }
    bVar8 = true;
    if (!bVar3) goto LAB_8205ed8c;
  }
  iVar14 = *(int *)(iVar11 + 0x1be0);
  if (iVar14 == 0) {
    if (bVar7) {
      *(int *)(iVar11 + 0x1d60) = iVar21;
      *(undefined4 *)(iVar11 + 0x1d70) = 2;
    }
LAB_8205edc0:
    if (bVar8) {
      *(int *)(iVar11 + 0x1d6c) = iVar21;
      *(undefined4 *)(iVar11 + 0x1d70) = 1;
    }
  }
  else if (iVar14 == iVar21) goto LAB_8205edc0;
  if (((iVar14 == 0) || (iVar14 == iVar21)) && (!bVar20)) {
    *(int *)(iVar11 + 0x1d64) = iVar21;
  }
  if (((iVar14 == 0) || (iVar14 == iVar21)) && (bVar7)) {
    *(int *)(iVar11 + 0x1d68) = iVar21;
  }
LAB_8205ee08:
  if ((*(int *)(iVar11 + 0x1d54) != 0) &&
     ((*(uint *)(*(int *)(iVar11 + 0x1d54) + 8) & 0x40000) != 0)) {
    *(undefined1 *)(iVar11 + 0x1d92) = 1;
  }
  iVar21 = *(int *)(iVar11 + 0x1d80);
  if (iVar21 != 0) {
    if ((*(uint *)(iVar11 + 0x1d84) & 1) == 0) {
      *(int *)(iVar11 + 0x1d68) = iVar21;
      *(int *)(iVar11 + 0x1d64) = iVar21;
      *(int *)(iVar11 + 0x1d60) = iVar21;
    }
    else {
      *(int *)(iVar11 + 0x1d6c) = iVar21;
    }
    *(uint *)(iVar11 + 0x1d70) = *(uint *)(iVar11 + 0x1d84);
  }
  *(undefined4 *)(iVar11 + 0x1d80) = 0;
  FUN_82057028();
  if (*(int *)(iVar11 + 0x1dbc) == -1) {
    FUN_820530f0();
  }
  if ((*(char *)(DAT_820ca988 + 0x1dad) != '\0') ||
     (uVar18 = 0, *(char *)(DAT_820ca988 + 0x1d95) != '\0')) {
    uVar18 = 1;
  }
  *(undefined1 *)(DAT_820ca988 + 0x1d94) = uVar18;
  *(undefined1 *)(iVar11 + 0x1d90) = 0;
  if (((*(int *)(iVar11 + 0x1d54) != 0) &&
      ((*(uint *)(*(int *)(iVar11 + 0x1d54) + 8) & 0x40000) == 0)) &&
     (*(int *)(iVar11 + 0x1ea4) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar5 == 0) && (!bVar6)) {
    *(undefined1 *)(iVar11 + 0x1d92) = 1;
    bVar4 = false;
    *(undefined1 *)(iVar11 + 0x1d93) = 0;
  }
  if (((bVar4) && ((*puVar19 & 4) != 0)) && ((*(uint *)(iVar11 + 0xc) & 4) != 0)) {
    puVar12 = (undefined4 *)FUN_82056e18();
    uVar17 = *puVar12;
    *(undefined4 *)(iVar11 + 900) = uVar17;
    uVar15 = puVar12[1];
    *(undefined4 *)(iVar11 + 0xe4) = uVar17;
    *(undefined4 *)(iVar11 + 0x388) = uVar15;
    *(undefined1 *)(iVar11 + 0x353) = 1;
    *(undefined4 *)(iVar11 + 0xe8) = uVar15;
  }
  *(undefined4 *)(iVar11 + 0x1de8) = 0;
  FUN_8207d374();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f0f8 @ 8205f0f8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8205f0f8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_8207c494();
  iVar1 = DAT_820ca988;
  if (_UNK_8200a004 <= *(float *)(DAT_820ca988 + 0x1eb0)) {
    if (*(int *)(DAT_820ca988 + 0x1eac) == 0) {
      uVar2 = FUN_8204bd10((byte *)"###NavWindowingList",0,0);
      uVar3 = FUN_8204f458(iVar1 + 0x1b90,uVar2);
      *(undefined4 *)(iVar1 + 0x1eac) = uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f3e8 @ 8205f3e8 ==== */

void FUN_8205f3e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8205f610 @ 8205f610 ==== */

void FUN_8205f610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8205f670 @ 8205f670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f718 @ 8205f718 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f718(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f838 @ 8205f838 ==== */

void FUN_8205f838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82060128 @ 82060128 ==== */

void FUN_82060128(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82060448 @ 82060448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060448(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int **ppiVar12;
  bool bVar13;
  int *apiStack_60 [24];
  
  FUN_8207c490();
  iVar2 = DAT_820ca988;
  if (*(int *)(DAT_820ca988 + 0x1b4c) != *(int *)(DAT_820ca988 + 0x1b48)) {
    FUN_82060128();
  }
  iVar9 = *(int *)(iVar2 + 0x1b48);
  iVar7 = *(int *)(iVar2 + 0x1b50);
  *(undefined4 *)(iVar2 + 0x364) = 0;
  *(int *)(iVar2 + 0x1b50) = iVar9;
  bVar13 = iVar9 != iVar7;
  FUN_8204fed0();
  iVar7 = 0;
  if (*(int *)(iVar2 + 0x1d48) != 0) {
    iVar9 = 0;
    do {
      iVar11 = *(int *)(iVar9 + *(int *)(iVar2 + 0x1d50));
      FUN_82054a18();
      if (*(int *)(iVar11 + 0x2c) != 0) {
        piVar3 = (int *)FUN_8204ff68();
        apiStack_60[0] = piVar3;
        FUN_8206b2b0();
        if (*piVar3 != 0) {
          FUN_820545d8();
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 != *(int *)(iVar2 + 0x1d48));
  }
  if (bVar13) {
    FUN_82058be8();
  }
  iVar7 = *(int *)(iVar2 + 0x1ea4);
  if ((iVar7 == 0) || ((*(uint *)(iVar7 + 8) & 0x2000) != 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(iVar7 + 0x2e0);
  }
  apiStack_60[0] = piVar3;
  if (iVar7 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(iVar2 + 0x1eac);
  }
  iVar7 = 0;
  apiStack_60[1] = piVar10;
  if (*(int *)(iVar2 + 0x1b60) != 0) {
    iVar9 = 0;
    do {
      piVar4 = *(int **)(iVar9 + *(int *)(iVar2 + 0x1b68));
      if (*(char *)((int)piVar4 + 0x8a) == '\0') {
LAB_820605a4:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (*(char *)((int)piVar4 + 0x91) != '\0') goto LAB_820605a4;
      }
      if (bVar1) {
        if ((((piVar4[2] & 0x1000000U) == 0) && (piVar4 != piVar3)) && (piVar4 != piVar10)) {
          FUN_82055d08(piVar4,(uint)piVar4[2] >> 0x19 & 1);
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 != *(int *)(iVar2 + 0x1b60));
  }
  ppiVar12 = apiStack_60;
  iVar7 = 2;
  do {
    piVar3 = *ppiVar12;
    if (piVar3 != (int *)0x0) {
      if (*(char *)((int)piVar3 + 0x8a) == '\0') {
LAB_82060618:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (*(char *)((int)piVar3 + 0x91) != '\0') goto LAB_82060618;
      }
      if (bVar1) {
        FUN_82055d08(piVar3,(uint)piVar3[2] >> 0x19 & 1);
      }
    }
    iVar7 = iVar7 + -1;
    ppiVar12 = ppiVar12 + 1;
    if (iVar7 == 0) {
      iVar7 = 0;
      *(undefined4 *)(iVar2 + 0x360) = 0;
      *(undefined4 *)(iVar2 + 0x35c) = 0;
      if (0 < *(int *)(iVar2 + 0x1d48)) {
        iVar9 = 0;
        do {
          iVar11 = *(int *)(iVar9 + *(int *)(iVar2 + 0x1d50));
          piVar3 = (int *)(iVar11 + 0x60);
          FUN_82055dd0();
          if ((*(char *)(iVar2 + 0xb0) != '\0') && (bVar13)) {
            FUN_8204ff68();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(int *)(iVar11 + 0x30) != 0) {
            piVar10 = (int *)FUN_8204ff68();
            apiStack_60[0] = piVar10;
            FUN_8206b2b0();
            if (*piVar10 != 0) {
              FUN_820545d8();
            }
          }
          iVar8 = DAT_820ca988;
          *(undefined1 *)(iVar11 + 0x34) = 1;
          if (*piVar3 < 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(iVar11 + 0x68);
          }
          *(undefined4 *)(iVar11 + 0x44) = uVar5;
          iVar6 = 0;
          *(int *)(iVar11 + 0x38) = *piVar3;
          *(undefined4 *)(iVar11 + 0x40) = 0;
          *(undefined4 *)(iVar11 + 0x3c) = 0;
          *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar11 + 4);
          *(undefined4 *)(iVar11 + 0x4c) = *(undefined4 *)(iVar11 + 8);
          *(undefined4 *)(iVar11 + 0x50) = *(undefined4 *)(iVar11 + 0xc);
          *(undefined4 *)(iVar11 + 0x54) = *(undefined4 *)(iVar11 + 0x10);
          *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(iVar8 + 0xa8);
          *(undefined4 *)(iVar11 + 0x5c) = *(undefined4 *)(iVar8 + 0xac);
          if (0 < *piVar3) {
            iVar8 = 0;
            do {
              iVar6 = iVar6 + 1;
              *(int *)(iVar11 + 0x40) =
                   *(int *)(*(int *)(iVar8 + *(int *)(iVar11 + 0x68)) + 0x18) +
                   *(int *)(iVar11 + 0x40);
              piVar10 = (int *)(iVar8 + *(int *)(iVar11 + 0x68));
              iVar8 = iVar8 + 4;
              *(int *)(iVar11 + 0x3c) = *(int *)(*piVar10 + 0xc) + *(int *)(iVar11 + 0x3c);
            } while (iVar6 < *piVar3);
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 4;
          *(int *)(iVar2 + 0x35c) = *(int *)(iVar11 + 0x40) + *(int *)(iVar2 + 0x35c);
          *(int *)(iVar2 + 0x360) = *(int *)(iVar11 + 0x3c) + *(int *)(iVar2 + 0x360);
        } while (iVar7 < *(int *)(iVar2 + 0x1d48));
      }
      FUN_8204fed0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_82060800 @ 82060800 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060800(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060850 @ 82060850 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060850(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060930 @ 82060930 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060930(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060a10 @ 82060a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060a10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060af0 @ 82060af0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060af0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060c58 @ 82060c58 ==== */

void FUN_82060c58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82060e40 @ 82060e40 ==== */

void FUN_82060e40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82060e98 @ 82060e98 ==== */

void FUN_82060e98(void)

{
  FUN_82060e40();
  return;
}


/* ==== FUN_82060ed0 @ 82060ed0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060ed0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060f58 @ 82060f58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060f58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060fc0 @ 82060fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060fc0(undefined4 param_1,undefined4 param_2,byte *param_3,undefined1 *param_4,
                 uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte bVar6;
  uint uVar5;
  int extraout_r4;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  double dVar12;
  double dVar13;
  undefined1 uVar11;
  
  FUN_8207c488();
  iVar4 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar7 = *(int *)(iVar4 + 0x1ba8);
  if ((param_5 & 7) == 0) {
    param_5 = param_5 | 1;
  }
  if ((param_5 & 0x3f0) == 0) {
    param_5 = param_5 | 0x20;
  }
  iVar8 = *(int *)(iVar4 + 0x1bac);
  if ((((param_5 & 0x800) == 0) || (iVar8 == 0)) || (bVar1 = true, *(int *)(iVar8 + 0x2e0) != iVar7)
     ) {
    bVar1 = false;
  }
  if (bVar1) {
    *(int *)(iVar4 + 0x1bac) = iVar7;
  }
  bVar3 = false;
  bVar6 = FUN_82055740();
  if (((bVar6 != 0) && (*(char *)(iVar4 + 0x1ec4) != '\0')) &&
     (*(int *)(iVar4 + 0x1edc) == extraout_r4)) {
    bVar6 = -((*(uint *)(iVar4 + 0x1ec8) & 2) != 0) & bVar6;
  }
  if (((*(char *)(iVar4 + 0x1ec4) != '\0') && ((param_5 & 0x200) != 0)) &&
     (((*(uint *)(iVar4 + 0x1ec8) & 4) == 0 && (uVar5 = FUN_8204fcf0(0x80), (uVar5 & 0xff) != 0))))
  {
    bVar6 = 1;
    FUN_8204c590(extraout_r4);
    if ((*(float *)(iVar4 + 0x1bd8) - *(float *)(iVar4 + 0x18) <= (float)s__333__8200a910._0_4_) &&
       ((float)s__333__8200a910._0_4_ <= *(float *)(iVar4 + 0x1bd8))) {
      *(int *)(iVar4 + 0x1f34) = extraout_r4;
      bVar3 = true;
      FUN_8205aeb8();
    }
  }
  if (bVar1) {
    *(int *)(iVar4 + 0x1bac) = iVar8;
  }
  if (((bVar6 != 0) && ((param_5 & 0x1000) != 0)) && (*(int *)(iVar4 + 0x1bd0) != extraout_r4)) {
    bVar6 = -(*(int *)(iVar4 + 0x1bd0) == 0) & bVar6;
  }
  dVar13 = (double)DAT_82002f44;
  if (bVar6 != 0) {
    if (((param_5 & 0x10000) == 0) ||
       (((*(char *)(iVar4 + 0xfc) == '\0' && (*(char *)(iVar4 + 0xfd) == '\0')) &&
        (*(char *)(iVar4 + 0xfe) == '\0')))) {
      iVar9 = -1;
      iVar8 = -1;
      if (((param_5 & 1) == 0) || (*(char *)(iVar4 + 0x3e0) == '\0')) {
        if (((param_5 & 2) == 0) || (*(char *)(iVar4 + 0x3e1) == '\0')) {
          if (((param_5 & 4) != 0) && (*(char *)(iVar4 + 0x3e2) != '\0')) {
            iVar9 = 2;
          }
        }
        else {
          iVar9 = 1;
        }
      }
      else {
        iVar9 = 0;
      }
      if (((param_5 & 1) == 0) || (*(char *)(iVar4 + 0x3fe) == '\0')) {
        if (((param_5 & 2) == 0) || (*(char *)(iVar4 + 0x3ff) == '\0')) {
          if (((param_5 & 4) != 0) && (*(char *)(iVar4 + 0x400) != '\0')) {
            iVar8 = 2;
          }
        }
        else {
          iVar8 = 1;
        }
      }
      else {
        iVar8 = 0;
      }
      if ((iVar9 != -1) && (*(int *)(iVar4 + 0x1be0) != extraout_r4)) {
        if ((param_5 & 0x60) != 0) {
          FUN_8204c4c8(extraout_r4,iVar7);
          *(int *)(iVar4 + 0x1c18) = iVar9;
          if ((param_5 & 0x40000) == 0) {
            FUN_8204d970(extraout_r4,iVar7);
          }
          FUN_8205aeb8();
        }
        if (((param_5 & 0x10) != 0) ||
           (((param_5 & 0x100) != 0 && (*(short *)((iVar9 + 0x1f5) * 2 + iVar4) == 2)))) {
          bVar3 = true;
          if ((param_5 & 0x20000) == 0) {
            FUN_8204c4c8(extraout_r4,iVar7);
          }
          else {
            FUN_8204c580();
          }
          if ((param_5 & 0x40000) == 0) {
            FUN_8204d970(extraout_r4,iVar7);
          }
          *(int *)(iVar4 + 0x1c18) = iVar9;
          FUN_8205aeb8();
        }
      }
      if (((param_5 & 0x80) != 0) && (iVar8 != -1)) {
        if (((param_5 & 0x400) == 0) ||
           (bVar1 = true, *(float *)((iVar8 + 0x109) * 4 + iVar4) < *(float *)(iVar4 + 0x8c))) {
          bVar1 = false;
        }
        if (!bVar1) {
          bVar3 = true;
        }
        if ((param_5 & 0x40000) == 0) {
          FUN_8204d970(extraout_r4,iVar7);
        }
        FUN_8204c580();
      }
      if ((((*(int *)(iVar4 + 0x1be0) == extraout_r4) && ((param_5 & 0x400) != 0)) &&
          (dVar13 < (double)*(float *)((*(int *)(iVar4 + 0x1c18) + 0x104) * 4 + iVar4))) &&
         (uVar5 = FUN_8204cad8(*(int *)(iVar4 + 0x1c18),'\x01'), (uVar5 & 0xff) != 0)) {
        bVar3 = true;
      }
    }
    if (bVar3) {
      *(undefined1 *)(iVar4 + 0x1d92) = 1;
    }
  }
  if (((((*(int *)(iVar4 + 0x1d58) == extraout_r4) && (*(char *)(iVar4 + 0x1d92) == '\0')) &&
       (*(char *)(iVar4 + 0x1d93) != '\0')) &&
      (((iVar8 = *(int *)(iVar4 + 0x1be0), iVar8 == 0 || (iVar8 == extraout_r4)) ||
       (iVar8 == *(int *)(iVar7 + 0x50))))) && ((param_5 & 0x80000) == 0)) {
    bVar6 = 1;
  }
  if (*(int *)(iVar4 + 0x1d64) == extraout_r4) {
    iVar8 = *(int *)(iVar4 + 0x1d60);
    dVar12 = FUN_8204dc38(0,param_5 >> 9 & 2 | 1);
    if ((extraout_r4 == iVar8) || (dVar13 < dVar12)) {
      bVar3 = true;
      FUN_8204c4c8(extraout_r4,iVar7);
      *(undefined4 *)(iVar4 + 0x1c14) = 4;
      if ((param_5 & 0x40000) == 0) {
        FUN_8204d970(extraout_r4,iVar7);
      }
    }
  }
  uVar11 = 0;
  uVar10 = 0;
  if (*(int *)(iVar4 + 0x1be0) == extraout_r4) {
    if (*(int *)(iVar4 + 0x1c14) == 1) {
      if (*(char *)(iVar4 + 0x1bec) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar7 = *(int *)(iVar4 + 0x1c18);
      if (*(char *)(iVar7 + iVar4 + 0xec) == '\0') {
        if ((bVar6 == 0) || (bVar1 = true, (param_5 & 0x20) == 0)) {
          bVar1 = false;
        }
        if (((bVar1) || ((param_5 >> 6 & 1) != 0)) && (*(char *)(iVar4 + 0x1ec4) == '\0')) {
          if ((((param_5 & 0x100) == 0) || (*(char *)(iVar7 + iVar4 + 0x3fe) == '\0')) ||
             (bVar1 = true, *(short *)((iVar7 + 0x1fa) * 2 + iVar4) != 2)) {
            bVar1 = false;
          }
          if (((param_5 & 0x400) == 0) ||
             (bVar2 = true, *(float *)((iVar7 + 0x109) * 4 + iVar4) < *(float *)(iVar4 + 0x8c))) {
            bVar2 = false;
          }
          if ((!bVar1) && (!bVar2)) {
            bVar3 = true;
          }
        }
        FUN_8204c580();
      }
      else {
        uVar11 = 1;
      }
      uVar10 = uVar11;
      if ((param_5 & 0x40000) == 0) {
        *(undefined1 *)(iVar4 + 0x1d92) = 1;
      }
    }
    else {
      uVar10 = uVar11;
      if ((*(int *)(iVar4 + 0x1c14) == 4) && (*(int *)(iVar4 + 0x1d64) != extraout_r4)) {
        FUN_8204c580();
      }
    }
    if (bVar3) {
      *(undefined1 *)(iVar4 + 0x1bef) = 1;
    }
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = bVar6;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820615a8 @ 820615a8 ==== */

void FUN_820615a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82061780 @ 82061780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061780(void)

{
  int iVar1;
  
  iVar1 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1ba8) + 0x8f) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


/* ==== FUN_82061810 @ 82061810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820618b0 @ 820618b0 ==== */

void FUN_820618b0(int param_1,char param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  
  uVar4 = 0;
  bVar2 = false;
  iVar3 = 0;
  do {
    uVar1 = *(ushort *)((iVar3 + 9) * 2 + param_1);
    if ((bVar2) && (uVar1 != 0)) {
      uVar4 = *(ushort *)(param_1 + 8) + uVar4 & 0xffff;
    }
    bVar2 = (bool)(bVar2 | uVar1 != 0);
    if (param_2 != '\0') {
      uVar5 = (undefined2)uVar4;
      if (iVar3 == 1) {
        *(undefined2 *)(param_1 + 0xc) = uVar5;
      }
      if (iVar3 == 2) {
        *(undefined2 *)(param_1 + 0xe) = uVar5;
      }
      if (iVar3 == 3) {
        *(undefined2 *)(param_1 + 0x10) = uVar5;
      }
    }
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + uVar1 & 0xffff;
  } while (iVar3 < 4);
  *(uint *)(param_1 + 4) = uVar4;
  return;
}


/* ==== FUN_82061950 @ 82061950 ==== */

void FUN_82061950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82061d50 @ 82061d50 ==== */

void FUN_82061d50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82061d58 @ 82061d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061d58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061dd8 @ 82061dd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061e70 @ 82061e70 ==== */

void FUN_82061e70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82061f20 @ 82061f20 ==== */

void FUN_82061f20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820621f8 @ 820621f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820621f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820622c0 @ 820622c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820622c0(void)

{
  FUN_8207c480();
  FUN_8207d30c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062818 @ 82062818 ==== */

void FUN_82062818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82062b90 @ 82062b90 ==== */

void FUN_82062b90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82062e18 @ 82062e18 ==== */

void FUN_82062e18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820630a0 @ 820630a0 ==== */

void FUN_820630a0(void)

{
  if (*(char *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8f) != '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820630d8 @ 820630d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820630d8(void)

{
  int iVar1;
  
  FUN_8207c478();
  iVar1 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1ba8) + 0x8f) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82058818();
  FUN_8204c7f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063628 @ 82063628 ==== */

void FUN_82063628(double param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uStack_a;
  
  uVar2 = 0;
  if (param_4 != '\0') {
    *(undefined2 *)(param_2 + 0x12) = 0;
    *(undefined2 *)(param_2 + 0x14) = 0;
    *(undefined2 *)(param_2 + 0x16) = 0;
    *(undefined2 *)(param_2 + 0x18) = 0;
  }
  uStack_a = (undefined2)(longlong)param_1;
  *(undefined2 *)(param_2 + 8) = uStack_a;
  puVar1 = (undefined4 *)FUN_820618b0(param_2,1);
  uVar3 = (undefined2)uVar2;
  *(undefined2 *)((int)puVar1 + 0x12) = uVar3;
  *(undefined2 *)(puVar1 + 5) = uVar3;
  *(undefined2 *)((int)puVar1 + 0x16) = uVar3;
  *(undefined2 *)(puVar1 + 6) = uVar3;
  *puVar1 = puVar1[1];
  puVar1[1] = uVar2;
  return;
}


/* ==== FUN_82063698 @ 82063698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820636e8 @ 820636e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820636e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063738 @ 82063738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063788 @ 82063788 ==== */

void FUN_82063788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820638d0 @ 820638d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820638d0(double param_1)

{
  if (param_1 < (double)DAT_82002f44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063938 @ 82063938 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063938(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820639e8 @ 820639e8 ==== */

void FUN_820639e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82063c50 @ 82063c50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063c50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  ushort *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  
  uVar17 = FUN_8207c490();
  iVar2 = (int)((ulonglong)uVar17 >> 0x20);
  iVar3 = (int)uVar17;
  iVar10 = 0;
  if (0 < (int)param_3) {
    piVar7 = (int *)(iVar3 + -4);
    uVar16 = param_3;
    do {
      piVar7 = piVar7 + 4;
      *piVar7 = iVar10;
      iVar10 = iVar10 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (1 < param_3) {
    FUN_8207dfd8(iVar3,param_3,0x10,FUN_82061dd8);
  }
  if (0 < (int)param_3) {
    puVar14 = (ushort *)(iVar3 + 4);
    uVar16 = param_3;
    do {
      uVar15 = (uint)*puVar14;
      if (uVar15 == 0) {
LAB_82063ddc:
        puVar14[3] = 0;
        puVar14[2] = 0;
      }
      else {
        uVar1 = puVar14[1];
        if (uVar1 == 0) goto LAB_82063ddc;
        piVar7 = (int *)FUN_820639e8();
        puVar4 = (undefined4 *)piVar7[2];
        iVar5 = *piVar7;
        iVar10 = piVar7[1];
        if (((puVar4 == (undefined4 *)0x0) ||
            (iVar11 = iVar10 + (uint)uVar1, *(int *)(iVar2 + 4) < iVar11)) ||
           (puVar8 = *(ushort **)(iVar2 + 0x1c), puVar8 == (ushort *)0x0)) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar8[1] = (ushort)iVar11;
          *puVar8 = (ushort)iVar5;
          *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(puVar8 + 2);
          puVar12 = (ushort *)*puVar4;
          if ((int)(uint)*puVar12 < iVar5) {
            puVar6 = *(ushort **)(puVar12 + 2);
            *(ushort **)(puVar12 + 2) = puVar8;
            puVar12 = puVar6;
          }
          else {
            *puVar4 = puVar8;
          }
          if (*(int *)(puVar12 + 2) != 0) {
            do {
              puVar6 = *(ushort **)(puVar12 + 2);
              if ((int)(iVar5 + uVar15) < (int)(uint)*puVar6) break;
              *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(iVar2 + 0x1c);
              *(ushort **)(iVar2 + 0x1c) = puVar12;
              puVar12 = puVar6;
            } while (*(int *)(puVar6 + 2) != 0);
          }
          *(ushort **)(puVar8 + 2) = puVar12;
          if ((int)(uint)*puVar12 < (int)(iVar5 + uVar15)) {
            *puVar12 = (ushort)(iVar5 + uVar15);
          }
        }
        if (puVar4 == (undefined4 *)0x0) {
          puVar14[3] = 0xffff;
          puVar14[2] = 0xffff;
        }
        else {
          puVar14[2] = (ushort)iVar5;
          puVar14[3] = (ushort)iVar10;
        }
      }
      uVar16 = uVar16 - 1;
      puVar14 = puVar14 + 8;
    } while (uVar16 != 0);
  }
  if (1 < param_3) {
    FUN_8207dfd8(iVar3,param_3,0x10,&LAB_82061e20);
  }
  if (0 < (int)param_3) {
    psVar13 = (short *)(iVar3 + 10);
    do {
      if ((psVar13[-1] != -1) || (uVar9 = 0, *psVar13 != -1)) {
        uVar9 = 1;
      }
      *(undefined4 *)(psVar13 + 1) = uVar9;
      psVar13 = psVar13 + 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063e68 @ 82063e68 ==== */

uint FUN_82063e68(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (param_2 < 1) {
    return uVar1;
  }
  do {
    iVar2 = param_1[1];
    if (iVar2 < param_1[2]) {
      uVar3 = (uint)*(byte *)(*param_1 + iVar2);
      param_1[1] = iVar2 + 1;
    }
    else {
      uVar3 = 0;
    }
    uVar1 = uVar1 << 8 | uVar3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar1;
}


/* ==== FUN_82063eb8 @ 82063eb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063eb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063fd8 @ 82063fd8 ==== */

uint FUN_82063fd8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  if (iVar2 < iVar1) {
    uVar3 = (uint)*(byte *)(iVar2 + *param_1);
    param_1[1] = iVar2 + 1;
  }
  else {
    uVar3 = 0;
  }
  if ((0x1f < uVar3) && (uVar3 < 0xf7)) {
    return uVar3 - 0x8b;
  }
  if ((0xf6 < uVar3) && (uVar3 < 0xfb)) {
    iVar2 = param_1[1];
    if (iVar2 < iVar1) {
      uVar4 = (uint)*(byte *)(iVar2 + *param_1);
      param_1[1] = iVar2 + 1;
    }
    else {
      uVar4 = 0;
    }
    return (uVar3 * 0x100 + uVar4) - 0xf694;
  }
  if ((0xfa < uVar3) && (uVar3 < 0xff)) {
    iVar2 = param_1[1];
    if (iVar2 < iVar1) {
      uVar4 = (uint)*(byte *)(iVar2 + *param_1);
      param_1[1] = iVar2 + 1;
    }
    else {
      uVar4 = 0;
    }
    return (uVar3 * -0x100 + 0xfa94) - uVar4;
  }
  if (uVar3 == 0x1c) {
    iVar1 = 2;
  }
  else {
    if (uVar3 != 0x1d) {
      return 0;
    }
    iVar1 = 4;
  }
  uVar3 = 0;
  if (iVar1 == 0) {
    return uVar3;
  }
  do {
    iVar2 = param_1[1];
    if (iVar2 < param_1[2]) {
      uVar4 = (uint)*(byte *)(*param_1 + iVar2);
      param_1[1] = iVar2 + 1;
    }
    else {
      uVar4 = 0;
    }
    uVar3 = uVar3 << 8 | uVar4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return uVar3;
}


/* ==== FUN_820640e0 @ 820640e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820640e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820642f8 @ 820642f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820642f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064390 @ 82064390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820644b8 @ 820644b8 ==== */

undefined4 FUN_820644b8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (((((cVar1 != '1') || (param_1[1] != '\0')) || (param_1[2] != '\0')) || (param_1[3] != '\0'))
     && (((((cVar1 != 't' || (param_1[1] != 'y')) || ((param_1[2] != 'p' || (param_1[3] != '1'))))
          && (((cVar1 != 'O' || (param_1[1] != 'T')) || ((param_1[2] != 'T' || (param_1[3] != 'O')))
              ))) &&
         ((((cVar1 != '\0' || (param_1[1] != '\x01')) || (param_1[2] != '\0')) ||
          (param_1[3] != '\0')))))) {
    if (((cVar1 == 't') && (param_1[1] == 'r')) && ((param_1[2] == 'u' && (param_1[3] == 'e')))) {
      return 1;
    }
    return 0;
  }
  return 1;
}


/* ==== FUN_820645b0 @ 820645b0 ==== */

int FUN_820645b0(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2 + 0xc;
  iVar1 = 0;
  iVar3 = (uint)*(byte *)(param_1 + param_2 + 4) * 0x100 + (uint)*(byte *)(param_1 + param_2 + 5);
  if (iVar3 != 0) {
    do {
      iVar4 = iVar2 + param_1;
      if (((((uint)*(byte *)(iVar2 + param_1) == (int)*param_3) &&
           ((uint)*(byte *)(iVar2 + param_1 + 1) == (int)param_3[1])) &&
          ((uint)*(byte *)(iVar2 + param_1 + 2) == (int)param_3[2])) &&
         ((uint)*(byte *)(iVar2 + param_1 + 3) == (int)param_3[3])) {
        return (((uint)*(byte *)(iVar4 + 8) * 0x100 + (uint)*(byte *)(iVar4 + 9)) * 0x100 +
               (uint)*(byte *)(iVar4 + 10)) * 0x100 + (uint)*(byte *)(iVar4 + 0xb);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < iVar3);
  }
  return 0;
}


/* ==== FUN_82064680 @ 82064680 ==== */

int FUN_82064680(char *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_820644b8();
  iVar1 = (int)uVar4;
  if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
    if (((((*param_1 == 't') && (param_1[1] == 't')) && (param_1[2] == 'c')) &&
        ((param_1[3] == 'f' &&
         ((iVar2 = (((uint)(byte)param_1[5] + (uint)(byte)param_1[4] * 0x100) * 0x100 +
                   (uint)(byte)param_1[6]) * 0x100 + (uint)(byte)param_1[7], iVar2 == 0x10000 ||
          (iVar2 == 0x20000)))))) &&
       (iVar1 < (int)((((uint)(byte)param_1[8] * 0x100 + (uint)(byte)param_1[9]) * 0x100 +
                      (uint)(byte)param_1[10]) * 0x100 + (uint)(byte)param_1[0xb]))) {
      pbVar3 = (byte *)(param_1 + (iVar1 + 3) * 4);
      iVar1 = (((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 0x100 + (uint)pbVar3[2]) * 0x100 +
              (uint)pbVar3[3];
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* ==== FUN_82064798 @ 82064798 ==== */

void FUN_82064798(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820648c8 @ 820648c8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82064ab8) */

void FUN_820648c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_8207c490();
  iVar1 = (int)((ulonglong)uVar10 >> 0x20);
  iVar9 = (int)uVar10;
  *(int *)(iVar1 + 4) = iVar9;
  *(int *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iVar2 = FUN_820645b0(iVar9,param_3,"cmap");
  iVar3 = FUN_820645b0(iVar9,param_3,"loca");
  *(int *)(iVar1 + 0x10) = iVar3;
  iVar4 = FUN_820645b0(iVar9,param_3,"head");
  *(int *)(iVar1 + 0x14) = iVar4;
  iVar5 = FUN_820645b0(iVar9,param_3,"glyf");
  *(int *)(iVar1 + 0x18) = iVar5;
  iVar6 = FUN_820645b0(iVar9,param_3,"hhea");
  *(int *)(iVar1 + 0x1c) = iVar6;
  iVar7 = FUN_820645b0(iVar9,param_3,"hmtx");
  *(int *)(iVar1 + 0x20) = iVar7;
  iVar8 = FUN_820645b0(iVar9,param_3,"kern");
  *(int *)(iVar1 + 0x24) = iVar8;
  iVar8 = FUN_820645b0(iVar9,param_3,"GPOS");
  *(int *)(iVar1 + 0x28) = iVar8;
  if ((((iVar2 != 0) && (iVar4 != 0)) && (iVar6 != 0)) && (iVar7 != 0)) {
    if (iVar5 == 0) {
      iVar2 = FUN_820645b0(iVar9,param_3,"CFF ");
      if (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x38) = 0;
        *(undefined4 *)(iVar1 + 0x3c) = 0x20000000;
        *(undefined4 *)(iVar1 + 100) = 0;
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        *(undefined4 *)(iVar1 + 0x68) = 0;
        *(undefined4 *)(iVar1 + 0x70) = 0;
        *(undefined4 *)(iVar1 + 0x78) = 0;
        *(int *)(iVar1 + 0x34) = iVar2 + iVar9;
        *(undefined4 *)(iVar1 + 0x74) = 0;
        FUN_82063eb8();
        FUN_82063eb8();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (iVar3 != 0) {
      iVar3 = FUN_820645b0(iVar9,param_3,"maxp");
      if (iVar3 == 0) {
        iVar3 = 0xffff;
      }
      else {
        iVar3 = (uint)*(byte *)(iVar3 + iVar9 + 5) + (uint)*(byte *)(iVar3 + iVar9 + 4) * 0x100;
      }
      *(int *)(iVar1 + 0xc) = iVar3;
      iVar3 = (uint)*(byte *)(iVar2 + iVar9 + 2) * 0x100 + (uint)*(byte *)(iVar2 + iVar9 + 3);
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      if (iVar3 != 0) {
        iVar5 = iVar2 + 4;
        do {
          iVar6 = (uint)*(byte *)(iVar5 + iVar9) * 0x100 + (uint)*(byte *)(iVar5 + iVar9 + 1);
          if ((iVar6 == 0) ||
             ((iVar6 == 3 &&
              ((iVar6 = (uint)*(byte *)(iVar5 + iVar9 + 2) * 0x100 +
                        (uint)*(byte *)(iVar5 + iVar9 + 3), iVar6 == 1 || (iVar6 == 10)))))) {
            iVar6 = iVar5 + iVar9;
            *(uint *)(iVar1 + 0x2c) =
                 (((uint)*(byte *)(iVar6 + 4) * 0x100 + (uint)*(byte *)(iVar6 + 5)) * 0x100 +
                 (uint)*(byte *)(iVar6 + 6)) * 0x100 + (uint)*(byte *)(iVar6 + 7) + iVar2;
          }
          iVar5 = iVar5 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (*(int *)(iVar1 + 0x2c) != 0) {
        *(uint *)(iVar1 + 0x30) =
             (uint)*(byte *)(iVar4 + iVar9 + 0x32) * 0x100 + (uint)*(byte *)(iVar4 + iVar9 + 0x33);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064e10 @ 82064e10 ==== */

void FUN_82064e10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820651c0 @ 820651c0 ==== */

int FUN_820651c0(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  if ((param_2 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0x30) < 2)) {
    if (*(int *)(param_1 + 0x30) == 0) {
      pbVar2 = (byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 4) + param_2 * 2);
      iVar1 = ((uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) * 2;
      iVar3 = ((uint)pbVar2[2] * 0x100 + (uint)pbVar2[3]) * 2;
    }
    else {
      pbVar2 = (byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 4) + param_2 * 4);
      iVar1 = (((uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) * 0x100 + (uint)pbVar2[2]) * 0x100 +
              (uint)pbVar2[3];
      iVar3 = (((uint)pbVar2[4] * 0x100 + (uint)pbVar2[5]) * 0x100 + (uint)pbVar2[6]) * 0x100 +
              (uint)pbVar2[7];
    }
    iVar1 = iVar1 + *(int *)(param_1 + 0x18);
    if (iVar1 == iVar3 + *(int *)(param_1 + 0x18)) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}


/* ==== FUN_820652b0 @ 820652b0 ==== */

void FUN_820652b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82065368 @ 82065368 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065368(undefined4 param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  ushort uVar11;
  int iVar12;
  short *psVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  undefined8 uVar22;
  int local_180 [96];
  
  FUN_8207c474();
  uVar22 = FUN_8207d30c();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar19 = *(int *)(iVar12 + 4);
  iVar16 = 0;
  iVar2 = FUN_820651c0(iVar12,(int)uVar22);
  *param_3 = 0;
  if (-1 < iVar2) {
    iVar6 = iVar2 + iVar19;
    iVar9 = (int)(short)((ushort)*(byte *)(iVar6 + 1) + (ushort)*(byte *)(iVar2 + iVar19) * 0x100);
    if (iVar9 < 1) {
      if (iVar9 == -1) {
        iVar6 = iVar6 + 10;
        iVar16 = 0;
        do {
          local_180[0] = 0;
          bVar17 = *(byte *)(iVar6 + 1);
          pbVar10 = (byte *)(iVar6 + 2);
          pbVar7 = (byte *)(iVar6 + 3);
          iVar6 = iVar6 + 4;
          if ((bVar17 & 2) != 0) {
            if ((bVar17 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((bVar17 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((bVar17 & 0x40) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((bVar17 & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(int *)(iVar12 + 0x3c) == 0) {
            iVar2 = FUN_82065368(iVar12,(uint)*pbVar10 * 0x100 + (uint)*pbVar7,local_180);
          }
          else {
            iVar2 = FUN_82066a28();
          }
          if (0 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while ((bVar17 & 0x20) != 0);
      }
    }
    else {
      iVar12 = iVar9 * 2 + iVar6 + 10;
      pbVar7 = (byte *)((iVar9 + 5) * 2 + iVar2 + iVar19);
      bVar17 = 0;
      bVar1 = false;
      iVar15 = (uint)*(byte *)(iVar12 + -2) * 0x100 + (uint)*(byte *)(iVar12 + -1) + 1;
      iVar12 = iVar9 * 2 + iVar15;
      pbVar7 = (byte *)((uint)*pbVar7 * 0x100 + (uint)pbVar7[1] + (iVar9 + 6) * 2 + iVar2 + iVar19);
      iVar16 = FUN_8204c6a8(iVar12 * 0xe);
      if (iVar16 == 0) goto LAB_82065764;
      iVar2 = 0;
      bVar8 = 0;
      iVar12 = iVar12 - iVar15;
      if (iVar15 != 0) {
        pbVar10 = (byte *)(iVar12 * 0xe + iVar16 + -2);
        pbVar20 = pbVar7;
        iVar19 = iVar15;
        do {
          if (bVar8 == 0) {
            bVar17 = *pbVar20;
            pbVar7 = pbVar20 + 1;
            if ((bVar17 & 8) != 0) {
              bVar8 = pbVar20[1];
              pbVar7 = pbVar20 + 2;
            }
          }
          else {
            bVar8 = bVar8 - 1;
            pbVar7 = pbVar20;
          }
          pbVar10 = pbVar10 + 0xe;
          *pbVar10 = bVar17;
          iVar19 = iVar19 + -1;
          pbVar20 = pbVar7;
        } while (iVar19 != 0);
      }
      sVar5 = 0;
      if (iVar15 != 0) {
        psVar4 = (short *)(iVar12 * 0xe + iVar16 + -0xe);
        iVar19 = iVar15;
        do {
          bVar17 = *(byte *)(psVar4 + 0xd);
          if ((bVar17 & 2) == 0) {
            if ((bVar17 & 0x10) == 0) {
              bVar17 = *pbVar7;
              pbVar10 = pbVar7 + 1;
              pbVar7 = pbVar7 + 2;
              uVar11 = (ushort)bVar17 * 0x100 + (ushort)*pbVar10;
              goto LAB_82065504;
            }
          }
          else {
            bVar8 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            uVar11 = (ushort)bVar8;
            if ((bVar17 & 0x10) == 0) {
              uVar11 = -uVar11;
            }
LAB_82065504:
            sVar5 = uVar11 + sVar5;
          }
          psVar4 = psVar4 + 7;
          *psVar4 = sVar5;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      sVar5 = 0;
      if (iVar15 != 0) {
        pbVar7 = pbVar7 + -2;
        psVar4 = (short *)(iVar12 * 0xe + iVar16 + -0xc);
        iVar19 = iVar15;
        do {
          bVar17 = *(byte *)(psVar4 + 0xc);
          if ((bVar17 & 4) == 0) {
            if ((bVar17 & 0x20) == 0) {
              pbVar10 = pbVar7 + 3;
              pbVar7 = pbVar7 + 2;
              uVar11 = (ushort)*pbVar7 * 0x100 + (ushort)*pbVar10;
              goto LAB_8206557c;
            }
          }
          else {
            pbVar10 = pbVar7 + 2;
            pbVar7 = pbVar7 + 1;
            uVar11 = (ushort)*pbVar10;
            if ((bVar17 & 0x20) == 0) {
              uVar11 = -uVar11;
            }
LAB_8206557c:
            sVar5 = uVar11 + sVar5;
          }
          psVar4 = psVar4 + 7;
          *psVar4 = sVar5;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      iVar19 = 0;
      iVar9 = 0;
      if (iVar15 != 0) {
        pbVar7 = (byte *)(iVar6 + 8);
        psVar4 = (short *)(iVar12 * 0xe + iVar16 + 2);
        iVar12 = 0;
        iVar6 = 0;
        do {
          sVar3 = psVar4[-1];
          iVar21 = (int)sVar3;
          sVar5 = *psVar4;
          iVar18 = (int)sVar5;
          bVar17 = *(byte *)(psVar4 + 5);
          if (iVar2 == iVar9) {
            if (iVar9 != 0) {
              iVar19 = FUN_820652b0();
            }
            if ((~bVar17 & 1) != 0) {
              if ((*(byte *)(psVar4 + 0xc) & 1) == 0) {
                sVar3 = (short)(psVar4[6] + iVar21 >> 1);
                sVar5 = (short)(psVar4[7] + iVar18 >> 1);
              }
              else {
                sVar3 = psVar4[6];
                iVar9 = iVar9 + 1;
                psVar4 = psVar4 + 7;
                sVar5 = *psVar4;
              }
            }
            psVar13 = (short *)(iVar19 * 0xe + iVar16);
            *(undefined1 *)(psVar13 + 6) = 1;
            *psVar13 = sVar3;
            psVar13[1] = sVar5;
            psVar13[2] = 0;
            psVar13[3] = 0;
            pbVar10 = pbVar7 + 3;
            pbVar7 = pbVar7 + 2;
            iVar2 = (uint)*pbVar7 * 0x100 + (uint)*pbVar10 + 1;
LAB_82065720:
            iVar19 = iVar19 + 1;
            bVar1 = false;
            iVar18 = iVar12;
            iVar21 = iVar6;
          }
          else {
            if ((bVar17 & 1) != 0) {
              psVar13 = (short *)(iVar19 * 0xe + iVar16);
              *psVar13 = sVar3;
              psVar13[1] = sVar5;
              if (!bVar1) {
                psVar13[2] = 0;
                psVar13[3] = 0;
                *(undefined1 *)(psVar13 + 6) = 2;
              }
              else {
                *(undefined1 *)(psVar13 + 6) = 3;
                psVar13[2] = (short)iVar6;
                psVar13[3] = (short)iVar12;
              }
              goto LAB_82065720;
            }
            if (bVar1) {
              puVar14 = (undefined2 *)(iVar19 * 0xe + iVar16);
              iVar19 = iVar19 + 1;
              *(undefined1 *)(puVar14 + 6) = 3;
              *puVar14 = (short)(iVar6 + iVar21 >> 1);
              puVar14[1] = (short)(iVar12 + iVar18 >> 1);
              puVar14[2] = (short)iVar6;
              puVar14[3] = (short)iVar12;
            }
            bVar1 = true;
          }
          iVar9 = iVar9 + 1;
          psVar4 = psVar4 + 7;
          iVar12 = iVar18;
          iVar6 = iVar21;
        } while (iVar9 < iVar15);
      }
      FUN_820652b0();
    }
    *param_3 = iVar16;
  }
LAB_82065764:
  FUN_8207d358();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065ba0 @ 82065ba0 ==== */

void FUN_82065ba0(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x1c) < param_2) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  if ((*(int *)(param_1 + 0x24) < param_3) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x24) = param_3;
  }
  if ((param_2 < *(int *)(param_1 + 0x18)) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x18) = param_2;
  }
  if ((param_3 < *(int *)(param_1 + 0x20)) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


/* ==== FUN_82065c20 @ 82065c20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065c20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065cf0 @ 82065cf0 ==== */

void FUN_82065cf0(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double extraout_f1;
  
  if ((*(float *)(param_3 + 8) != *(float *)(param_3 + 0x10)) ||
     (*(float *)(param_3 + 0xc) != *(float *)(param_3 + 0x14))) {
    param_3 = FUN_82065c20();
    param_1 = extraout_f1;
  }
  fVar1 = (float)((double)*(float *)(param_3 + 0x10) + param_1);
  fVar2 = (float)(param_2 + (double)*(float *)(param_3 + 0x14));
  *(float *)(param_3 + 0x10) = fVar1;
  *(float *)(param_3 + 8) = fVar1;
  *(float *)(param_3 + 0x14) = fVar2;
  *(float *)(param_3 + 0xc) = fVar2;
  FUN_82065c20();
  return;
}


/* ==== FUN_82065db0 @ 82065db0 ==== */

void FUN_82065db0(double param_1,double param_2,int param_3)

{
  *(float *)(param_3 + 0x10) = (float)(param_1 + (double)*(float *)(param_3 + 0x10));
  *(float *)(param_3 + 0x14) = (float)(param_2 + (double)*(float *)(param_3 + 0x14));
  FUN_82065c20();
  return;
}


/* ==== FUN_82065e18 @ 82065e18 ==== */

void FUN_82065e18(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  *(float *)(param_7 + 0x10) =
       (float)((double)(float)((double)(float)(param_1 + (double)*(float *)(param_7 + 0x10)) +
                              param_3) + param_5);
  *(float *)(param_7 + 0x14) =
       (float)((double)(float)((double)(float)(param_2 + (double)*(float *)(param_7 + 0x14)) +
                              param_4) + param_6);
  FUN_82065c20();
  return;
}


/* ==== FUN_82065eb0 @ 82065eb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065eb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065f98 @ 82065f98 ==== */

void FUN_82065f98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82066128 @ 82066128 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066128(void)

{
  FUN_8207c47c();
  FUN_8207d30c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066a28 @ 82066a28 ==== */

void FUN_82066a28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82066b08 @ 82066b08 ==== */

void FUN_82066b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82066bf8 @ 82066bf8 ==== */

void FUN_82066bf8(int param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x1c) + iVar3;
  iVar4 = (uint)*(byte *)(iVar4 + 0x22) * 0x100 + (uint)*(byte *)(iVar4 + 0x23);
  if (param_2 < iVar4) {
    if (param_3 != (int *)0x0) {
      pbVar5 = (byte *)(*(int *)(param_1 + 0x20) + param_2 * 4 + iVar3);
      *param_3 = (int)(short)((ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1]);
    }
    if (param_4 == (int *)0x0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x20) + param_2 * 4 + *(int *)(param_1 + 4);
    bVar1 = *(byte *)(iVar3 + 2);
    bVar2 = *(byte *)(iVar3 + 3);
  }
  else {
    if (param_3 != (int *)0x0) {
      iVar3 = iVar4 * 4 + *(int *)(param_1 + 0x20) + iVar3;
      *param_3 = (int)(short)((ushort)*(byte *)(iVar3 + -4) * 0x100 + (ushort)*(byte *)(iVar3 + -3))
      ;
    }
    if (param_4 == (int *)0x0) {
      return;
    }
    pbVar5 = (byte *)((iVar4 + param_2) * 2 + *(int *)(param_1 + 0x20) + *(int *)(param_1 + 4));
    bVar1 = *pbVar5;
    bVar2 = pbVar5[1];
  }
  *param_4 = (int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2);
  return;
}


/* ==== FUN_82066cf8 @ 82066cf8 ==== */

void FUN_82066cf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82066e40 @ 82066e40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066e40(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  if (param_2 == param_4) {
    return;
  }
  if ((double)*(float *)(param_7 + 0x18) < param_2) {
    return;
  }
  if (param_4 < (double)*(float *)(param_7 + 0x14)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066f50 @ 82066f50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066f50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820673f0 @ 820673f0 ==== */

void FUN_820673f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820676e8 @ 820676e8 ==== */

void FUN_820676e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82067940 @ 82067940 ==== */

void FUN_82067940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82067bb8 @ 82067bb8 ==== */

void FUN_82067bb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82067ce0 @ 82067ce0 ==== */

void FUN_82067ce0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82067ec8 @ 82067ec8 ==== */

void FUN_82067ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82068228 @ 82068228 ==== */

void FUN_82068228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820682f0 @ 820682f0 ==== */

void FUN_820682f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82068598 @ 82068598 ==== */

void FUN_82068598(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82068830 @ 82068830 ==== */

void FUN_82068830(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82069638 @ 82069638 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069638(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069760 @ 82069760 ==== */

void FUN_82069760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820698b8 @ 820698b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820698b8(int param_1,int param_2,int param_3)

{
  char in_r10;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 * 0x14 + *(int *)(param_1 + 0x20);
  uVar1 = param_3 * 0x14 + *(int *)(param_1 + 0x20);
  if (in_r10 == '\0') {
    if (uVar2 < uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  if (uVar2 < uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


/* ==== FUN_82069a80 @ 82069a80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069a80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069b08 @ 82069b08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069b08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069b60 @ 82069b60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069b60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069c18 @ 82069c18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069c18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069c70 @ 82069c70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069c70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069cf8 @ 82069cf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069cf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069d80 @ 82069d80 ==== */

undefined * FUN_82069d80(void)

{
  return &UNK_8200e7bc;
}


/* ==== FUN_82069d90 @ 82069d90 ==== */

int FUN_82069d90(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 & 0xffff) < *(uint *)(param_1 + 0x14)) &&
     (uVar1 = (uint)*(ushort *)((param_2 & 0xffff) * 2 + *(int *)(param_1 + 0x1c)), uVar1 != 0xffff)
     ) {
    return uVar1 * 0x28 + *(int *)(param_1 + 0x28);
  }
  return *(int *)(param_1 + 0x2c);
}


/* ==== FUN_82069dd0 @ 82069dd0 ==== */

void FUN_82069dd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82069f98 @ 82069f98 ==== */

void FUN_82069f98(uint param_1,int param_2)

{
  int iVar1;
  
  if (puRam820ca99c < puRam820ca998 + param_2) {
    puRam820ca998 = puRam820ca998 + param_2;
    return;
  }
  if (param_1 < uRam820ca9a0) {
    puRam820ca998 = puRam820ca99c + 1;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    iVar1 = param_1 - (int)puRam820ca998;
    do {
      *puRam820ca998 = puRam820ca998[iVar1];
      puRam820ca998 = puRam820ca998 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* ==== FUN_82069ff8 @ 82069ff8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069ff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a070 @ 8206a070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a2d0 @ 8206a2d0 ==== */

void FUN_8206a2d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8206a3d8 @ 8206a3d8 ==== */

void FUN_8206a3d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8206a538 @ 8206a538 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a538(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a588 @ 8206a588 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a588(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a600 @ 8206a600 ==== */

void FUN_8206a600(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a660 @ 8206a660 ==== */

void FUN_8206a660(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a6c0 @ 8206a6c0 ==== */

void FUN_8206a6c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a720 @ 8206a720 ==== */

void FUN_8206a720(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a780 @ 8206a780 ==== */

void FUN_8206a780(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a7e0 @ 8206a7e0 ==== */

void FUN_8206a7e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a840 @ 8206a840 ==== */

void FUN_8206a840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206a8a0 @ 8206a8a0 ==== */

void FUN_8206a8a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206aa90 @ 8206aa90 ==== */

void FUN_8206aa90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8206aba0 @ 8206aba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206aba0(undefined4 param_1,undefined4 param_2,float *param_3,int param_4)

{
  int iVar1;
  
  FUN_8207c474();
  iVar1 = FUN_8207d314();
  if (param_4 < 1) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    FUN_8207d360();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_82002f44 < *param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206b098 @ 8206b098 ==== */

void FUN_8206b098(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206b1a0 @ 8206b1a0 ==== */

void FUN_8206b1a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206b2b0 @ 8206b2b0 ==== */

void FUN_8206b2b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  iVar2 = iVar1 * 0x28 + param_1[2];
  if (*(int *)(iVar2 + -0xc) != 0) {
    return;
  }
  if (*(int *)(iVar2 + -8) != 0) {
    return;
  }
  *param_1 = iVar1 + -1;
  return;
}


/* ==== FUN_8206b2f0 @ 8206b2f0 ==== */

uint FUN_8206b2f0(double param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  
  if ((int)(param_1 + (double)DAT_8200e7d8) < 0x40) {
    uVar1 = (uint)*(byte *)(*(int *)(param_2 + 0x2c) + (int)(param_1 + (double)DAT_8200e7d8) + 0x1b0
                           );
  }
  else {
    dVar2 = (double)*(float *)(*(int *)(param_2 + 0x2c) + 0x14);
    if (param_1 <= dVar2) {
      dVar2 = param_1;
    }
    dVar2 = (double)FUN_82080480((double)(DAT_820066d0 - (float)(dVar2 / param_1)),param_2);
    dVar2 = FUN_82080488((double)(DAT_8200e7d4 / (float)dVar2));
    uVar1 = (int)dVar2 + 1;
    uVar1 = (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 2;
    if ((int)uVar1 < 4) {
      uVar1 = 4;
    }
    else if (0x200 < (int)uVar1) {
      uVar1 = 0x200;
    }
  }
  return uVar1;
}


/* ==== FUN_8206b3b8 @ 8206b3b8 ==== */

void FUN_8206b3b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206b450 @ 8206b450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206b450(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206b500 @ 8206b500 ==== */

void FUN_8206b500(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206b668 @ 8206b668 ==== */

void FUN_8206b668(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206b808 @ 8206b808 ==== */

void FUN_8206b808(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206ba68 @ 8206ba68 ==== */

void FUN_8206ba68(int param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  while (uVar3 = (uint)uVar1, uVar3 != 0) {
    for (; (uVar3 <= param_2[1] && (uVar3 < 0x10000)); uVar3 = uVar3 + 1) {
      uVar2 = uVar3 >> 3 & 0x1ffc;
      *(uint *)(uVar2 + *(int *)(param_1 + 8)) =
           1 << (uVar3 & 0x1f) | *(uint *)(uVar2 + *(int *)(param_1 + 8));
    }
    param_2 = param_2 + 2;
    uVar1 = *param_2;
  }
  return;
}


/* ==== FUN_8206bab8 @ 8206bab8 ==== */

void FUN_8206bab8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = DAT_82002f44;
  param_1[6] = 0;
  uVar2 = DAT_820066d0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[4] = uVar1;
  param_1[3] = uVar1;
  *(undefined2 *)((int)param_1 + 0x3a) = 0xffff;
  param_1[0x11] = uVar2;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  param_1[0x13] = uVar1;
  *(undefined2 *)((int)param_1 + 0x3e) = 0xffff;
  param_1[0x12] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  return;
}


/* ==== FUN_8206bb38 @ 8206bb38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206bb38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206bbb0 @ 8206bbb0 ==== */

void FUN_8206bbb0(int param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (((param_2 & 0xffff) < *(uint *)(param_1 + 0x14)) &&
     (uVar2 = (uint)*(ushort *)((param_2 & 0xffff) * 2 + *(int *)(param_1 + 0x1c)), uVar2 != 0xffff)
     ) {
    puVar1 = (uint *)(uVar2 * 0x28 + *(int *)(param_1 + 0x28));
  }
  else {
    puVar1 = *(uint **)(param_1 + 0x2c);
  }
  if (puVar1 == (uint *)0x0) {
    return;
  }
  *puVar1 = (uint)(param_3 != '\0') * 0x40000000 | *puVar1 & 0xbfffffff;
  return;
}


/* ==== FUN_8206bc10 @ 8206bc10 ==== */

void FUN_8206bc10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8206be78 @ 8206be78 ==== */

void FUN_8206be78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206bf10 @ 8206bf10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206bf10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206bf88 @ 8206bf88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206bf88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c000 @ 8206c000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c078 @ 8206c078 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c078(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c130 @ 8206c130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c1a8 @ 8206c1a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c1a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c248 @ 8206c248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c2c0 @ 8206c2c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c2c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c368 @ 8206c368 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c368(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c410 @ 8206c410 ==== */

void FUN_8206c410(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206c4a8 @ 8206c4a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c4a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c520 @ 8206c520 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c520(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c598 @ 8206c598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c610 @ 8206c610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c610(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c688 @ 8206c688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c688(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c780 @ 8206c780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206c780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206c7f0 @ 8206c7f0 ==== */

void FUN_8206c7f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206c880 @ 8206c880 ==== */

void FUN_8206c880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206c8e8 @ 8206c8e8 ==== */

void FUN_8206c8e8(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = *param_1;
  iVar6 = iVar3 * 0x28 + param_1[2];
  if (*(int *)(iVar6 + -0xc) != 0) {
    piVar5 = param_1 + 0x18;
    piVar7 = (int *)(iVar6 + -0x28);
    do {
      cVar1 = *(char *)piVar7;
      cVar2 = *(char *)piVar5;
      if (cVar1 != cVar2) break;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    } while (piVar7 != (int *)(iVar6 + -0x18));
    if (cVar1 != cVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_8207c4ac();
    }
  }
  pcVar4 = (char *)(iVar6 + -0x50);
  if ((*(int *)(iVar6 + -0xc) == 0) && (1 < iVar3)) {
    piVar7 = param_1 + 0x18;
    do {
      cVar1 = *(char *)piVar7;
      cVar2 = *pcVar4;
      if (cVar1 != cVar2) break;
      piVar7 = (int *)((int)piVar7 + 1);
      pcVar4 = pcVar4 + 1;
    } while (piVar7 != param_1 + 0x1e);
    if ((cVar1 == cVar2) && (*(int *)(iVar6 + -0x30) == 0)) {
      *param_1 = iVar3 + -1;
      return;
    }
  }
  *(int *)(iVar6 + -0x28) = param_1[0x18];
  *(int *)(iVar6 + -0x24) = param_1[0x19];
  *(int *)(iVar6 + -0x20) = param_1[0x1a];
  *(int *)(iVar6 + -0x1c) = param_1[0x1b];
  return;
}


/* ==== FUN_8206c9c8 @ 8206c9c8 ==== */

void FUN_8206c9c8(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = *param_1;
  iVar5 = iVar3 * 0x28 + param_1[2];
  if ((*(int *)(iVar5 + -0xc) != 0) && (*(int *)(iVar5 + -0x18) != param_1[0x1c])) {
    FUN_8206c7f0();
    return;
  }
  pcVar4 = (char *)(iVar5 + -0x50);
  if ((*(int *)(iVar5 + -0xc) == 0) && (1 < iVar3)) {
    piVar6 = param_1 + 0x18;
    do {
      cVar1 = *(char *)piVar6;
      cVar2 = *pcVar4;
      if (cVar1 != cVar2) break;
      piVar6 = (int *)((int)piVar6 + 1);
      pcVar4 = pcVar4 + 1;
    } while (piVar6 != param_1 + 0x1e);
    if ((cVar1 == cVar2) && (*(int *)(iVar5 + -0x30) == 0)) {
      *param_1 = iVar3 + -1;
      return;
    }
  }
  *(int *)(iVar5 + -0x18) = param_1[0x1c];
  return;
}


/* ==== FUN_8206ca68 @ 8206ca68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206ca68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206cb90 @ 8206cb90 ==== */

void FUN_8206cb90(int *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = param_1[0xf] + -1;
  param_1[0xf] = iVar6;
  if (iVar6 == 0) {
    piVar7 = (int *)(param_1[0xb] + 0x18);
  }
  else {
    piVar7 = (int *)(iVar6 * 0x10 + param_1[0x11] + -0x10);
  }
  param_1[0x18] = *piVar7;
  param_1[0x19] = piVar7[1];
  param_1[0x1a] = piVar7[2];
  param_1[0x1b] = piVar7[3];
  iVar6 = *param_1;
  iVar5 = iVar6 * 0x28 + param_1[2];
  if (*(int *)(iVar5 + -0xc) != 0) {
    piVar4 = param_1 + 0x18;
    piVar7 = (int *)(iVar5 + -0x28);
    do {
      cVar1 = *(char *)piVar7;
      cVar2 = *(char *)piVar4;
      if (cVar1 != cVar2) break;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    } while (piVar7 != (int *)(iVar5 + -0x18));
    if (cVar1 != cVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_8207c4ac();
    }
  }
  pcVar3 = (char *)(iVar5 + -0x50);
  if ((*(int *)(iVar5 + -0xc) == 0) && (1 < iVar6)) {
    piVar7 = param_1 + 0x18;
    do {
      cVar1 = *(char *)piVar7;
      cVar2 = *pcVar3;
      if (cVar1 != cVar2) break;
      piVar7 = (int *)((int)piVar7 + 1);
      pcVar3 = pcVar3 + 1;
    } while (piVar7 != param_1 + 0x1e);
    if ((cVar1 == cVar2) && (*(int *)(iVar5 + -0x30) == 0)) {
      *param_1 = iVar6 + -1;
      return;
    }
  }
  *(int *)(iVar5 + -0x28) = param_1[0x18];
  *(int *)(iVar5 + -0x24) = param_1[0x19];
  *(int *)(iVar5 + -0x20) = param_1[0x1a];
  *(int *)(iVar5 + -0x1c) = param_1[0x1b];
  return;
}


/* ==== FUN_8206cbf0 @ 8206cbf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206cbf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206cc40 @ 8206cc40 ==== */

void FUN_8206cc40(int *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[0x12] + -1;
  param_1[0x12] = iVar5;
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 * 4 + param_1[0x14] + -4);
  }
  param_1[0x1c] = iVar6;
  iVar6 = *param_1;
  iVar5 = iVar6 * 0x28 + param_1[2];
  if ((*(int *)(iVar5 + -0xc) != 0) && (*(int *)(iVar5 + -0x18) != param_1[0x1c])) {
    FUN_8206c7f0();
    return;
  }
  pcVar3 = (char *)(iVar5 + -0x50);
  if ((*(int *)(iVar5 + -0xc) == 0) && (1 < iVar6)) {
    piVar4 = param_1 + 0x18;
    do {
      cVar1 = *(char *)piVar4;
      cVar2 = *pcVar3;
      if (cVar1 != cVar2) break;
      piVar4 = (int *)((int)piVar4 + 1);
      pcVar3 = pcVar3 + 1;
    } while (piVar4 != param_1 + 0x1e);
    if ((cVar1 == cVar2) && (*(int *)(iVar5 + -0x30) == 0)) {
      *param_1 = iVar6 + -1;
      return;
    }
  }
  *(int *)(iVar5 + -0x18) = param_1[0x1c];
  return;
}


/* ==== FUN_8206cc70 @ 8206cc70 ==== */

void FUN_8206cc70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206cd48 @ 8206cd48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206cd48(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_8207c478();
  if (1 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206d9d0 @ 8206d9d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206d9d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_8207c47c();
  if (2 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206dd80 @ 8206dd80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206dd80(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int in_r6;
  int in_r7;
  uint in_r8;
  double extraout_f1;
  
  iVar2 = FUN_8207c494();
  if ((double)DAT_82002f44 < extraout_f1) {
    if ((int)in_r8 < 1) {
      uVar3 = FUN_8206b2f0(extraout_f1,iVar2);
      in_r8 = 0x30 / (int)uVar3;
      trapWord(6,uVar3,0);
    }
    if ((int)in_r8 < 1) {
      in_r8 = 1;
    }
    else if (0xc < (int)in_r8) {
      in_r8 = 0xc;
    }
    uVar3 = in_r7 - in_r6 >> 0x1f;
    bVar1 = false;
    uVar3 = (in_r7 - in_r6 ^ uVar3) - uVar3;
    if (1 < (int)in_r8) {
      trapWord(6,in_r8,0);
      trapWord(6,in_r8,0);
      trapWord(5,in_r8 & ~((uVar3 * 2 | uVar3 >> 0x1f) - 1),0xffff);
      trapWord(5,in_r8 & ~((uVar3 * 2 | uVar3 >> 0x1f) - 1),0xffff);
      if (0 < (int)(uVar3 - ((int)uVar3 / (int)in_r8) * in_r8)) {
        bVar1 = true;
      }
    }
    FUN_8206c248();
    if (in_r7 < in_r6) {
      if (in_r7 <= in_r6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (in_r6 <= in_r7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_820540a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206e000 @ 8206e000 ==== */

void FUN_8206e000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206e0f8 @ 8206e0f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206e0f8(double param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int in_r6;
  int iVar4;
  int in_r7;
  int iVar5;
  uint uVar6;
  double extraout_f1;
  
  if (param_1 <= (double)DAT_82002f44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = 0;
  iVar5 = (in_r7 * 0x30) / 0xc;
  iVar4 = (in_r6 * 0x30) / 0xc;
  iVar2 = FUN_8207c494();
  if ((double)DAT_82002f44 < extraout_f1) {
    if ((int)uVar6 < 1) {
      uVar3 = FUN_8206b2f0(extraout_f1,iVar2);
      uVar6 = 0x30 / (int)uVar3;
      trapWord(6,uVar3,0);
    }
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    else if (0xc < (int)uVar6) {
      uVar6 = 0xc;
    }
    uVar3 = iVar5 - iVar4 >> 0x1f;
    bVar1 = false;
    uVar3 = (iVar5 - iVar4 ^ uVar3) - uVar3;
    if (1 < (int)uVar6) {
      trapWord(6,uVar6,0);
      trapWord(6,uVar6,0);
      trapWord(5,uVar6 & ~((uVar3 * 2 | uVar3 >> 0x1f) - 1),0xffff);
      trapWord(5,uVar6 & ~((uVar3 * 2 | uVar3 >> 0x1f) - 1),0xffff);
      if (0 < (int)(uVar3 - ((int)uVar3 / (int)uVar6) * uVar6)) {
        bVar1 = true;
      }
    }
    FUN_8206c248();
    if (iVar5 < iVar4) {
      if (iVar5 <= iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (iVar4 <= iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    FUN_820540a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206e130 @ 8206e130 ==== */

void FUN_8206e130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8206e410 @ 8206e410 ==== */

void FUN_8206e410(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206e6e8 @ 8206e6e8 ==== */

void FUN_8206e6e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8206e7a0 @ 8206e7a0 ==== */

void FUN_8206e7a0(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*param_1 == param_3) {
    return;
  }
  piVar5 = (int *)(*param_1 * 0x18 + param_1[4]);
  iVar4 = param_3 * 0x18;
  *piVar5 = *param_2;
  piVar5[1] = param_2[1];
  piVar5[2] = param_2[2];
  iVar6 = *param_1 * 0x18 + param_1[4];
  *(int *)(iVar6 + 0xc) = param_2[3];
  *(int *)(iVar6 + 0x10) = param_2[4];
  *(int *)(iVar6 + 0x14) = param_2[5];
  iVar6 = iVar4 + param_1[4];
  *param_1 = param_3;
  *param_2 = *(int *)(iVar4 + param_1[4]);
  param_2[1] = *(int *)(iVar6 + 4);
  param_2[2] = *(int *)(iVar6 + 8);
  iVar4 = iVar4 + param_1[4];
  param_2[3] = *(int *)(iVar4 + 0xc);
  param_2[4] = *(int *)(iVar4 + 0x10);
  iVar6 = *(int *)(iVar4 + 0x14);
  param_2[5] = iVar6;
  param_2[0xe] = param_2[3] * 2 + iVar6;
  if (*param_2 != 0) {
    iVar6 = *param_2 * 0x28 + param_2[2];
    pcVar3 = (char *)(iVar6 + -0x28);
    if (pcVar3 != (char *)0x0) {
      if (*(int *)(iVar6 + -0xc) == 0) {
        FUN_8207c860();
        return;
      }
      piVar5 = param_2 + 0x18;
      do {
        cVar1 = *pcVar3;
        cVar2 = *(char *)piVar5;
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (pcVar3 != (char *)(iVar6 + -0x10));
      if (cVar1 == cVar2) {
        return;
      }
      FUN_8206c7f0();
      return;
    }
  }
  FUN_8206c7f0();
  return;
}


/* ==== FUN_8206e8e0 @ 8206e8e0 ==== */

void FUN_8206e8e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206e9d0 @ 8206e9d0 ==== */

void FUN_8206e9d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206ea58 @ 8206ea58 ==== */

void FUN_8206ea58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8206eb10 @ 8206eb10 ==== */

void FUN_8206eb10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8206ec80 @ 8206ec80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206ec80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206ed00 @ 8206ed00 ==== */

void FUN_8206ed00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206ed78 @ 8206ed78 ==== */

void FUN_8206ed78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8206eea0 @ 8206eea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206eea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206ef28 @ 8206ef28 ==== */

void FUN_8206ef28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8206efe8 @ 8206efe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206efe8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206f058 @ 8206f058 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206f058(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206f288 @ 8206f288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206f288(void)

{
  FUN_8207c480();
  FUN_8207d31c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206f7c8 @ 8206f7c8 ==== */

void FUN_8206f7c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8206f9f0 @ 8206f9f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206f9f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206fa58 @ 8206fa58 ==== */

void FUN_8206fa58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206fb10 @ 8206fb10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206fb10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206fc20 @ 8206fc20 ==== */

void FUN_8206fc20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8206fcb8 @ 8206fcb8 ==== */

void FUN_8206fcb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8206fd28 @ 8206fd28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206fd28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206fe10 @ 8206fe10 ==== */

void FUN_8206fe10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8206ff38 @ 8206ff38 ==== */

void FUN_8206ff38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820700a8 @ 820700a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820700a8(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  undefined8 uVar18;
  
  uVar18 = FUN_8207c494();
  piVar3 = (int *)((ulonglong)uVar18 >> 0x20);
  piVar9 = (int *)uVar18;
  if (1 < piVar3[1]) {
    FUN_8206e7a0(piVar3,piVar9,0);
    iVar10 = *piVar9;
    if (((iVar10 != 0) && (iVar7 = iVar10 * 0x28 + piVar9[2], *(int *)(iVar7 + -0xc) == 0)) &&
       (*(int *)(iVar7 + -8) == 0)) {
      *piVar9 = iVar10 + -1;
    }
    iVar10 = 0;
    if ((piVar3[1] < 1) || (*piVar9 < 1)) {
      pcVar16 = (char *)0x0;
    }
    else {
      pcVar16 = (char *)(*piVar9 * 0x28 + piVar9[2] + -0x28);
    }
    if (pcVar16 == (char *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(pcVar16 + 0x1c) + *(int *)(pcVar16 + 0x18);
    }
    iVar14 = 1;
    if (1 < piVar3[1]) {
      iVar15 = 0x18;
      do {
        piVar17 = (int *)(iVar15 + piVar3[4]);
        iVar11 = *(int *)(iVar15 + piVar3[4]);
        if (0 < iVar11) {
          pcVar8 = (char *)piVar17[2];
          if (*(int *)(pcVar8 + iVar11 * 0x28 + -0xc) == 0) {
            *piVar17 = iVar11 + -1;
          }
          iVar11 = *piVar17;
          if (0 < iVar11) {
            if (pcVar16 != (char *)0x0) {
              pcVar5 = pcVar8;
              pcVar12 = pcVar16;
              do {
                cVar1 = *pcVar12;
                cVar2 = *pcVar5;
                if (cVar1 != cVar2) break;
                pcVar12 = pcVar12 + 1;
                pcVar5 = pcVar5 + 1;
              } while (pcVar12 != pcVar16 + 0x18);
              if (((cVar1 == cVar2) && (*(int *)(pcVar16 + 0x20) == 0)) &&
                 (*(int *)(pcVar8 + 0x20) == 0)) {
                *(int *)(pcVar16 + 0x1c) = *(int *)(pcVar16 + 0x1c) + *(int *)(pcVar8 + 0x1c);
                iVar7 = iVar7 + *(int *)(pcVar8 + 0x1c);
                FUN_8206a588();
              }
            }
            iVar11 = *piVar17;
            if (0 < iVar11) {
              pcVar16 = (char *)(iVar11 * 0x28 + piVar17[2] + -0x28);
            }
          }
        }
        iVar6 = 0;
        iVar10 = piVar17[3] + iVar10;
        if (0 < iVar11) {
          iVar11 = piVar17[2];
          iVar13 = 0;
          do {
            iVar6 = iVar6 + 1;
            *(int *)(iVar13 + iVar11 + 0x18) = iVar7;
            iVar11 = piVar17[2];
            iVar4 = iVar13 + iVar11;
            iVar13 = iVar13 + 0x28;
            iVar7 = *(int *)(iVar4 + 0x1c) + iVar7;
          } while (iVar6 < *piVar17);
        }
        iVar14 = iVar14 + 1;
        iVar15 = iVar15 + 0x18;
      } while (iVar14 < piVar3[1]);
    }
    FUN_8206bf10();
    FUN_82053db8();
    iVar7 = 1;
    iVar10 = (piVar9[3] - iVar10) * 2 + piVar9[5];
    if (1 < piVar3[1]) {
      iVar14 = 0x18;
      do {
        iVar15 = piVar3[4];
        if (*(int *)(iVar14 + iVar15) != 0) {
          FUN_8207c860();
        }
        iVar15 = *(int *)(iVar14 + iVar15 + 0xc);
        if (iVar15 != 0) {
          FUN_8207c860();
          iVar10 = iVar15 * 2 + iVar10;
        }
        iVar7 = iVar7 + 1;
        iVar14 = iVar14 + 0x18;
      } while (iVar7 < piVar3[1]);
    }
    piVar9[0xe] = iVar10;
    if ((*piVar9 == 0) || (*(int *)(*piVar9 * 0x28 + piVar9[2] + -8) != 0)) {
      FUN_8206c7f0();
    }
    iVar10 = *piVar9 * 0x28 + piVar9[2];
    pcVar16 = (char *)(iVar10 + -0x28);
    if (*(int *)(iVar10 + -0xc) == 0) {
      FUN_8207c860();
    }
    else {
      piVar9 = piVar9 + 0x18;
      do {
        cVar1 = *pcVar16;
        cVar2 = *(char *)piVar9;
        if (cVar1 != cVar2) break;
        pcVar16 = pcVar16 + 1;
        piVar9 = (int *)((int)piVar9 + 1);
      } while (pcVar16 != (char *)(iVar10 + -0x10));
      if (cVar1 != cVar2) {
        FUN_8206c7f0();
      }
    }
    piVar3[1] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82070410 @ 82070410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82070410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82070530 @ 82070530 ==== */

void FUN_82070530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820709d0 @ 820709d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820709d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82070b98 @ 82070b98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82070b98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82070be0 @ 82070be0 ==== */

void FUN_82070be0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82070cf0 @ 82070cf0 ==== */

void FUN_82070cf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82071188 @ 82071188 ==== */

void FUN_82071188(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820711e0 @ 820711e0 ==== */

void FUN_820711e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820721a0 @ 820721a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820721a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82072210 @ 82072210 ==== */

void FUN_82072210(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820722e8 @ 820722e8 ==== */

void FUN_820722e8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


/* ==== FUN_82072328 @ 82072328 ==== */

void FUN_82072328(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82072468 @ 82072468 ==== */

void FUN_82072468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82072650 @ 82072650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82072650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82072718 @ 82072718 ==== */

void FUN_82072718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820727d0 @ 820727d0 ==== */

void FUN_820727d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82072890 @ 82072890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82072890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82072910 @ 82072910 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82072910(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820729c8 @ 820729c8 ==== */

void FUN_820729c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82072ad0 @ 82072ad0 ==== */

void FUN_82072ad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82072e88 @ 82072e88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82072e88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82072fe0 @ 82072fe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82072fe0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820730e8 @ 820730e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820730e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82073140 @ 82073140 ==== */

void FUN_82073140(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82073390 @ 82073390 ==== */

void FUN_82073390(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82073478 @ 82073478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82073478(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82073648 @ 82073648 ==== */

void FUN_82073648(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82073a58 @ 82073a58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82073a58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82073ab0 @ 82073ab0 ==== */

void FUN_82073ab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82073dd8 @ 82073dd8 ==== */

int FUN_82073dd8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int local_30 [4];
  undefined4 auStack_20 [8];
  
  local_30[0] = *param_1;
  local_30[2] = param_1[4] + param_1[3];
  local_30[1] = 0;
  puVar1 = (undefined4 *)FUN_82035f08(auStack_20,local_30,1);
  iVar2 = 0;
  if ((int *)*puVar1 != (int *)0x0) {
    iVar2 = *(int *)*puVar1;
  }
  uVar3 = (uint)puVar1[2] >> 2;
  if (*(uint *)(iVar2 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar2 + 8);
  }
  return *(int *)(*(int *)(iVar2 + 4) + uVar3 * 4) + (puVar1[2] & 3) * 4;
}


/* ==== FUN_82073e68 @ 82073e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82073e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82073f10 @ 82073f10 ==== */

void FUN_82073f10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820741b0 @ 820741b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820741b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820741f0 @ 820741f0 ==== */

void FUN_820741f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x244);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x1f0) = *param_2;
  *(undefined4 *)(param_1 + 500) = param_2[1];
  *(undefined4 *)(param_1 + 0x1f8) = param_2[2];
  *(undefined4 *)(param_1 + 0x1fc) = param_2[3];
  *(undefined4 *)(iVar5 + 0x60) = uVar1;
  *(undefined4 *)(iVar5 + 100) = uVar2;
  *(undefined4 *)(iVar5 + 0x68) = uVar3;
  *(undefined4 *)(iVar5 + 0x6c) = uVar4;
  iVar5 = *(int *)(*(int *)(param_1 + 0x244) + 0x3c) * 0x10 +
          *(int *)(*(int *)(param_1 + 0x244) + 0x44);
  *(undefined4 *)(iVar5 + -0x10) = uVar1;
  *(undefined4 *)(iVar5 + -0xc) = uVar2;
  *(undefined4 *)(iVar5 + -8) = uVar3;
  *(undefined4 *)(iVar5 + -4) = uVar4;
  return;
}


/* ==== FUN_820742a0 @ 820742a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820742a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074330 @ 82074330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074398 @ 82074398 ==== */

void FUN_82074398(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = param_3 * 0x68 + *(int *)(param_2 + 0x10);
  fVar1 = *(float *)(iVar5 + 8);
  fVar2 = *(float *)(iVar5 + 0xc);
  if (*(char *)(iVar5 + 0x54) == -1) {
    fVar1 = fVar1 - *(float *)(param_2 + 0xac);
  }
  if (*(char *)(iVar5 + 0x55) == -1) {
    fVar2 = *(float *)(param_2 + 0xb0) + fVar2;
  }
  fVar3 = *(float *)(param_2 + 0x68);
  fVar4 = *(float *)(param_2 + 100);
  *param_1 = fVar1;
  param_1[1] = fVar4;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}


/* ==== FUN_820743f0 @ 820743f0 ==== */

void FUN_820743f0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  iVar2 = *(int *)(param_1 + 0x168);
  iVar3 = *(int *)(param_1 + 0x5c) * 0x68 + *(int *)(param_1 + 0x10);
  if ((*(ushort *)(param_1 + 0x78) & 1) == 0) {
    pfVar4 = (float *)(iVar3 + 0x44);
    if (*(char *)(param_1 + 0x1c4) == '\0') {
      pfVar4 = (float *)(iVar3 + 0x40);
    }
  }
  else {
    pfVar4 = (float *)(iVar3 + 0x48);
  }
  fVar1 = *(float *)(iVar2 + 0xe8);
  if (*(float *)(iVar2 + 0xe8) <= *pfVar4) {
    fVar1 = *pfVar4;
  }
  *pfVar4 = fVar1;
  fVar1 = *(float *)(iVar2 + 0xec) + *(float *)(param_1 + 0xa8);
  if (fVar1 <= *(float *)(param_1 + 0x68)) {
    fVar1 = *(float *)(param_1 + 0x68);
  }
  *(float *)(param_1 + 0x68) = fVar1;
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar2 + 0x180);
  fVar1 = *(float *)(iVar2 + 0x10c);
  if (*(float *)(iVar2 + 0x10c) <= *(float *)(param_1 + 0x70)) {
    fVar1 = *(float *)(param_1 + 0x70);
  }
  *(float *)(param_1 + 0x70) = fVar1;
  return;
}


/* ==== FUN_82074488 @ 82074488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074500 @ 82074500 ==== */

void FUN_82074500(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82074550 @ 82074550 ==== */

void FUN_82074550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820745f0 @ 820745f0 ==== */

double FUN_820745f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x170);
  if (iVar1 == 0) {
    return (double)DAT_82002f44;
  }
  if (param_1 < 0) {
    param_1 = *(int *)(iVar1 + 0xc);
  }
  return (double)(*(float *)(*(int *)(iVar1 + 100) + param_1 * 0x1c) *
                  (*(float *)(iVar1 + 0x18) - *(float *)(iVar1 + 0x14)) + *(float *)(iVar1 + 0x14));
}


/* ==== FUN_82074640 @ 82074640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074640(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  double dVar9;
  
  fVar4 = DAT_82002f44;
  while( true ) {
    iVar5 = DAT_820ca988;
    iVar8 = *(int *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x170);
    if (param_2 < 0) {
      param_2 = *(int *)(iVar8 + 0xc);
    }
    if (((*(uint *)(iVar8 + 4) & 4) != 0) || (bVar3 = true, *(int *)(iVar8 + 0x10) + -1 <= param_2))
    {
      bVar3 = false;
    }
    fVar1 = fVar4;
    if (bVar3) {
      iVar6 = param_2;
      if (param_2 < 0) {
        iVar6 = *(int *)(iVar8 + 0xc);
      }
      pfVar7 = (float *)(*(int *)(iVar8 + 100) + iVar6 * 0x1c);
      if (*(char *)(iVar8 + 9) == '\0') {
        fVar1 = pfVar7[7];
        fVar2 = *pfVar7;
      }
      else {
        fVar1 = pfVar7[8];
        fVar2 = pfVar7[1];
      }
      fVar1 = (*(float *)(iVar8 + 0x18) - *(float *)(iVar8 + 0x14)) * (fVar1 - fVar2);
    }
    if ((*(uint *)(iVar8 + 4) & 8) == 0) break;
    *(float *)(*(int *)(iVar8 + 100) + param_2 * 0x1c) =
         (float)(param_1 - (double)*(float *)(iVar8 + 0x14)) /
         (float)((double)*(float *)(iVar8 + 0x18) - (double)*(float *)(iVar8 + 0x14));
    if (!bVar3) {
      return;
    }
    dVar9 = (double)*(float *)(iVar5 + 0x1598);
    if ((double)*(float *)(iVar5 + 0x1598) < (double)fVar1) {
      dVar9 = (double)fVar1;
    }
    param_1 = (double)(float)(dVar9 + param_1);
    param_2 = param_2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074770 @ 82074770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074770(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  
  iVar7 = FUN_8207c490();
  iVar12 = *(int *)(DAT_820ca988 + 0x1ba8);
  iVar8 = DAT_820ca988;
  if (*(int *)(iVar7 + 0x5c) != -1) {
    FUN_820743f0();
  }
  if (*(char *)(iVar8 + 0x2fa4) != '\0') {
    FUN_82057690(0,&DAT_8200f1ec,0);
  }
  *(undefined4 *)(iVar12 + 0xd4) = *(undefined4 *)(iVar7 + 0x68);
  cVar1 = *(char *)(iVar7 + 0x1b1);
  fVar2 = *(float *)(iVar7 + 0x68);
  iVar8 = *(int *)(iVar7 + 0x58) + 1;
  fVar3 = *(float *)(iVar7 + 100);
  bVar6 = *(char *)(iVar7 + 0x1b2) == iVar8;
  if (*(int *)(iVar7 + 0x58) == 0) {
    *(float *)(iVar7 + 0xb8) = fVar2 - fVar3;
  }
  if ((fVar2 < *(float *)(iVar7 + 0x108)) || (bVar16 = true, *(float *)(iVar7 + 0x110) < fVar3)) {
    bVar16 = false;
  }
  if (bVar16) {
    iVar9 = *(int *)(iVar7 + 0x80);
    if ((iVar9 == 0x1000000) && (iVar9 = 0, (*(uint *)(iVar7 + 4) & 0x40) != 0)) {
      iVar9 = FUN_8204c090((double)DAT_820066d0,((*(uint *)(iVar7 + 0x7c) & 1) == 0 ^ 1) + 0x2d);
    }
    iVar11 = 0;
    if (*(int *)(iVar7 + 0x84) != 0x1000000) {
      iVar11 = *(int *)(iVar7 + 0x84);
    }
    iVar13 = 0;
    if (((0 < *(int *)(iVar7 + 0x58)) || (*(int *)(iVar7 + 0x168) == *(int *)(iVar7 + 0x164))) &&
       ((*(uint *)(iVar7 + 4) & 0x80) != 0)) {
      if ((*(uint *)(iVar7 + 0x78) & 1) == 0) {
        iVar13 = *(int *)(iVar7 + 0x8c);
      }
      else {
        iVar13 = *(int *)(iVar7 + 0x88);
      }
    }
    uVar14 = (uint)(int)*(char *)(iVar7 + 0x1b5) >> 0x1f ^ 1;
    if ((((iVar13 != 0 || iVar11 != 0) || iVar9 != 0) || (bVar6)) || (uVar14 != 0)) {
      if ((*(uint *)(iVar7 + 4) & 0x100000) == 0) {
        iVar10 = *(int *)(iVar12 + 0x244);
        fStack_80 = *(float *)(iVar7 + 0x124);
        uStack_7c = *(undefined4 *)(iVar7 + 0x128);
        fStack_78 = *(float *)(iVar7 + 300);
        uStack_74 = *(undefined4 *)(iVar7 + 0x130);
        *(float *)(iVar10 + 0x60) = fStack_80;
        *(undefined4 *)(iVar10 + 100) = uStack_7c;
        *(float *)(iVar10 + 0x68) = fStack_78;
        *(undefined4 *)(iVar10 + 0x6c) = uStack_74;
      }
      FUN_8206e7a0(*(int **)(iVar7 + 0x178),*(int **)(iVar12 + 0x244),0);
    }
    if ((iVar9 != 0) || (iVar11 != 0)) {
      uStack_90 = *(undefined4 *)(iVar7 + 0xf4);
      uStack_88 = *(undefined4 *)(iVar7 + 0xfc);
      fStack_8c = fVar3;
      fStack_84 = fVar2;
      FUN_8204b5f0(&uStack_90,iVar7 + 0x114);
      if ((iVar9 != 0) && (fStack_8c < fStack_84)) {
        FUN_8206fc20();
      }
      if ((iVar11 != 0) && (fStack_8c < fStack_84)) {
        FUN_8206fc20();
      }
    }
    if (uVar14 != 0) {
      uVar15 = *(uint *)(iVar7 + 0x20);
      uVar14 = *(char *)(iVar7 + 0x1b5) * 8 + uVar15;
      if (uVar15 <= uVar14) {
        do {
          iVar9 = *(char *)(uVar15 + 4) * 0x68 + *(int *)(iVar7 + 0x10);
          FUN_82074398(&fStack_80,iVar7);
          FUN_8204b5f0(&fStack_80,iVar7 + 0x114);
          fVar4 = *(float *)(iVar9 + 0x20);
          if (fStack_80 < fVar4) {
            fStack_80 = fVar4;
          }
          fVar4 = *(float *)(iVar9 + 0xc);
          if (fVar4 <= fStack_78) {
            fStack_78 = fVar4;
          }
          FUN_8206fc20();
          uVar15 = uVar15 + 8;
        } while (uVar15 <= uVar14);
      }
    }
    if (((iVar13 != 0) && (*(float *)(iVar7 + 0x118) <= fVar3)) &&
       (fVar3 < *(float *)(iVar7 + 0x120))) {
      FUN_8206fa58();
    }
    if (((bVar6) && (*(float *)(iVar7 + 0x118) <= fVar2)) && (fVar2 < *(float *)(iVar7 + 0x120))) {
      FUN_8206fa58();
    }
  }
  if ((cVar1 == iVar8) && (uVar14 = 0, 0 < *(int *)(iVar7 + 0x54))) {
    iVar8 = 0;
    do {
      iVar9 = *(int *)(iVar7 + 0x10) + iVar8;
      bVar16 = (uint)(int)*(char *)(iVar7 + 0x1b4) <= uVar14;
      uVar15 = uVar14 >> 0x18;
      uVar14 = uVar14 + 1;
      iVar8 = iVar8 + 0x68;
      *(byte *)(iVar9 + 0x62) =
           bVar16 - ((char)~(*(char *)(iVar7 + 0x1b4) >> 7 ^ (byte)uVar15) >> 7) & 1;
    } while ((int)uVar14 < *(int *)(iVar7 + 0x54));
  }
  if (bVar6) {
    fVar2 = *(float *)(iVar7 + 0x68);
    fVar3 = fVar2 + DAT_820066d0;
    *(undefined1 *)(iVar7 + 0x1c4) = 1;
    if (fVar3 < *(float *)(iVar12 + 0x1c4)) {
      fVar3 = *(float *)(iVar12 + 0x1c4);
    }
    if (*(float *)(iVar12 + 0x1cc) <= fVar3) {
      fVar3 = *(float *)(iVar12 + 0x1cc);
    }
    *(float *)(iVar7 + 0x118) = fVar3;
    *(float *)(iVar7 + 0x138) = fVar3;
    iVar8 = 0;
    fVar3 = *(float *)(iVar7 + 100);
    fVar4 = (*(float *)(iVar7 + 0xf8) + fVar2) - *(float *)(iVar7 + 0xd8);
    uVar5 = *(undefined4 *)(iVar12 + 0x1cc);
    *(undefined1 *)(iVar7 + 0x1b7) = *(undefined1 *)(iVar7 + 0x1b8);
    *(undefined4 *)(iVar7 + 0x140) = uVar5;
    *(undefined4 *)(iVar7 + 0x120) = uVar5;
    *(float *)(iVar12 + 0xd4) = fVar4;
    *(float *)(iVar7 + 0x68) = fVar4;
    *(float *)(iVar7 + 100) = fVar4 - (fVar2 - fVar3);
    if (0 < *(int *)(iVar7 + 0x54)) {
      iVar9 = 0;
      do {
        iVar8 = iVar8 + 1;
        iVar11 = *(int *)(iVar7 + 0x10) + iVar9;
        iVar9 = iVar9 + 0x68;
        *(undefined1 *)(iVar11 + 0x57) = *(undefined1 *)(iVar11 + 0x59);
        *(undefined4 *)(iVar11 + 0x24) = *(undefined4 *)(iVar7 + 0x138);
      } while (iVar8 < *(int *)(iVar7 + 0x54));
    }
    FUN_820741f0(iVar12,*(int *)(iVar7 + 0x10) + 0x20);
    FUN_8206e7a0(*(int **)(iVar7 + 0x178),*(int **)(iVar12 + 0x244),
                 (uint)*(byte *)(*(int *)(iVar7 + 0x10) + 0x57));
  }
  if ((*(ushort *)(iVar7 + 0x78) & 1) == 0) {
    *(int *)(iVar7 + 0x7c) = *(int *)(iVar7 + 0x7c) + 1;
  }
  *(undefined1 *)(iVar7 + 0x1ba) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074cd8 @ 82074cd8 ==== */

void FUN_82074cd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82074da8 @ 82074da8 ==== */

int * FUN_82074da8(int param_1)

{
  int *piVar1;
  
  if (*(int *)(DAT_820ca988 + 0x2f90) != 0) {
    piVar1 = (int *)(*(int *)(DAT_820ca988 + 0x2f90) + 4);
    do {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = (int *)(piVar1[-1] + (int)piVar1);
    } while (piVar1 != (int *)(*(int *)(DAT_820ca988 + 0x2f90) + *(int *)(DAT_820ca988 + 0x2f88) + 4
                              ));
  }
  return (int *)0x0;
}


/* ==== FUN_82074fe0 @ 82074fe0 ==== */

void FUN_82074fe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820752e8 @ 820752e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820752e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075398 @ 82075398 ==== */

void FUN_82075398(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820754f8 @ 820754f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820754f8(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_8207c484();
  FUN_8207d328();
  iVar3 = DAT_820ca988;
  *(undefined1 *)(*(int *)(DAT_820ca988 + 0x1ba8) + 0x8c) = 1;
  iVar4 = *(int *)(iVar3 + 0x1ba8);
  iVar3 = *(int *)(iVar4 + 0x170);
  FUN_82051cf8();
  if (1 < *(int *)(iVar3 + 0x10)) {
    FUN_82050a20();
    FUN_820700a8();
  }
  fVar1 = *(float *)(iVar4 + 0xd4);
  uVar2 = *(uint *)(iVar3 + 4);
  if (fVar1 <= *(float *)(iVar3 + 0x20)) {
    fVar1 = *(float *)(iVar3 + 0x20);
  }
  *(float *)(iVar3 + 0x20) = fVar1;
  *(float *)(iVar4 + 0xd4) = fVar1;
  if ((uVar2 & 0x10) == 0) {
    *(undefined4 *)(iVar4 + 0xe8) = *(undefined4 *)(iVar3 + 0x28);
  }
  if ((((uVar2 & 1) == 0) && (*(char *)(iVar4 + 0x8f) == '\0')) && (1 < *(int *)(iVar3 + 0x10))) {
    FUN_820745f0(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(iVar3 + 9) = 0;
  *(undefined4 *)(iVar4 + 0x1d8) = *(undefined4 *)(iVar4 + 0x1e8);
  *(undefined4 *)(iVar4 + 0x1dc) = *(undefined4 *)(iVar4 + 0x1ec);
  *(undefined4 *)(iVar4 + 0x1d4) = *(undefined4 *)(iVar4 + 0x1e4);
  *(undefined4 *)(iVar4 + 0x1d0) = *(undefined4 *)(iVar4 + 0x1e0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820758a0 @ 820758a0 ==== */

void FUN_820758a0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== FUN_820758c8 @ 820758c8 ==== */

void FUN_820758c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82075a80 @ 82075a80 ==== */

void FUN_82075a80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82075b00 @ 82075b00 ==== */

undefined4 FUN_82075b00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_82075a80();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


/* ==== FUN_82075b30 @ 82075b30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075b30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075b78 @ 82075b78 ==== */

void FUN_82075b78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82075d30 @ 82075d30 ==== */

void FUN_82075d30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82076020 @ 82076020 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82076020(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076358 @ 82076358 ==== */

void FUN_82076358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820765b8 @ 820765b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820765b8(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  iVar2 = FUN_8207c484();
  fVar1 = DAT_82002f44;
  if (*(float *)(iVar2 + 0x1c) <= DAT_82002f44) {
    halt_baddata();
  }
  if (*(float *)(iVar2 + 0x20) <= DAT_82002f44) {
    halt_baddata();
  }
  iVar3 = FUN_8204c730();
  puVar10 = *(undefined4 **)(iVar3 + 0xc0);
  if (puVar10[1] == 0) {
LAB_82076630:
    puVar10[3] = *(int *)(iVar2 + 0xc) + 5000;
    FUN_82032890();
    iVar3 = FUN_820a11a8();
    puVar10[1] = iVar3;
    if ((int)-(uint)(iVar3 == 0) < 0) {
      halt_baddata();
    }
  }
  else if ((int)puVar10[3] < *(int *)(iVar2 + 0xc)) {
    if (puVar10[1] != 0) {
      FUN_820a1e28();
      puVar10[1] = 0;
    }
    goto LAB_82076630;
  }
  if (puVar10[2] != 0) {
    if (*(int *)(iVar2 + 8) <= (int)puVar10[4]) goto LAB_820766d0;
    if (puVar10[2] != 0) {
      FUN_820a1e28();
      puVar10[2] = 0;
    }
  }
  puVar10[4] = *(int *)(iVar2 + 8) + 10000;
  FUN_82032890();
  iVar3 = FUN_820a1280();
  puVar10[2] = iVar3;
  if ((int)-(uint)(iVar3 == 0) < 0) {
    halt_baddata();
  }
LAB_820766d0:
  FUN_82032890();
  iVar3 = FUN_8209e4f0();
  if ((int)-(uint)(iVar3 == 0) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8209e5d8();
  iVar3 = FUN_820a2388();
  FUN_820a23d8();
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    iVar6 = 0;
    puVar7 = (undefined4 *)(iVar3 + -4);
    do {
      iVar3 = 0;
      iVar8 = *(int *)(iVar6 + *(int *)(iVar2 + 0x10));
      if (0 < *(int *)(iVar8 + 0x18)) {
        puVar4 = (undefined4 *)(*(int *)(iVar8 + 0x20) + -8);
        do {
          iVar3 = iVar3 + 1;
          puVar7[1] = puVar4[2];
          puVar7[2] = puVar4[3];
          puVar7[3] = fVar1;
          puVar7[4] = (uint)*(byte *)((int)puVar4 + 0x19) |
                      (puVar4[6] & 0xff) << 0x10 | puVar4[6] & 0xff00ff00;
          puVar7[5] = puVar4[4];
          puVar4 = puVar4 + 5;
          puVar7 = puVar7 + 6;
          *puVar7 = *puVar4;
        } while (iVar3 < *(int *)(iVar8 + 0x18));
      }
      FUN_8207c860();
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(iVar2 + 4));
  }
  FUN_820a1270();
  FUN_820a1330();
  uVar9 = *puVar10;
  iVar2 = FUN_82032890();
  FUN_82098530(*(int *)(iVar2 + 0x68),uVar9);
  FUN_82032890();
  FUN_8209d1e8();
  FUN_82032890();
  FUN_8209d390();
  FUN_82076358();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076a00 @ 82076a00 ==== */

uint FUN_82076a00(uint param_1,byte *param_2,uint param_3)

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
      uVar5 = *(uint *)(&UNK_8200fff8 + ((bVar4 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      uVar5 = *(uint *)(&UNK_8200fff8 + ((*pbVar1 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar5 = *(uint *)(&UNK_8200fff8 + ((*pbVar2 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      param_1 = *(uint *)(&UNK_8200fff8 + ((*pbVar3 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&UNK_8200fff8 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return ~param_1;
}


/* ==== FUN_82076ae0 @ 82076ae0 ==== */

void FUN_82076ae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82077f88 @ 82077f88 ==== */

void FUN_82077f88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820780a8 @ 820780a8 ==== */

void FUN_820780a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82078588 @ 82078588 ==== */

void FUN_82078588(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820786b0 @ 820786b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820786b0(void)

{
  FUN_8207c47c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82079120 @ 82079120 ==== */

void FUN_82079120(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82079260 @ 82079260 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82079260(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820792d8 @ 820792d8 ==== */

void FUN_820792d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820793a8 @ 820793a8 ==== */

bool FUN_820793a8(int param_1,uint param_2)

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


/* ==== FUN_82079418 @ 82079418 ==== */

undefined4 FUN_82079418(int param_1,uint param_2)

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


/* ==== FUN_820794f0 @ 820794f0 ==== */

byte FUN_820794f0(int param_1,uint param_2)

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


/* ==== FUN_82079ad8 @ 82079ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82079ad8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8207c494();
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


/* ==== FUN_82079c58 @ 82079c58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82079c58(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4,uint *param_5)

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
  
  uVar19 = FUN_8207c494();
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
      FUN_82079ad8(iVar3,pbVar5,param_5);
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
LAB_82079e6c:
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
                        if (iVar14 != iVar8) goto LAB_82079f78;
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
                        if (iVar14 != iVar8) goto LAB_82079f78;
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
                  if (bVar2) goto LAB_82079e6c;
                }
              }
            }
LAB_82079f78:
            uVar16 = uVar16 + 1;
            piVar17 = piVar17 + 1;
          } while (uVar16 < *(uint *)(iVar3 + 0x10));
        }
        uVar15 = 0x1c;
        goto LAB_82079fac;
      }
    }
  }
  uVar15 = 0x18;
LAB_82079fac:
  *(undefined4 *)(iVar3 + 0x1c) = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82079fc0 @ 82079fc0 ==== */

undefined4 FUN_82079fc0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x18;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar1;
}


/* ==== FUN_82079fe8 @ 82079fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

char * FUN_82079fe8(byte *param_1,int param_2,byte *param_3,byte *param_4,undefined4 *param_5,
                   byte *param_6,byte *param_7,byte *param_8)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *in_r11;
  int unaff_r25;
  int unaff_r26;
  byte *unaff_r27;
  int *unaff_r28;
  byte *pbVar9;
  byte *unaff_r29;
  byte *unaff_r30;
  byte *pbVar10;
  byte *unaff_r31;
  bool bVar11;
  char in_xer_ca;
  byte in_cr0;
  byte bVar12;
  
  bVar11 = param_1 < (byte *)0x20;
  bVar12 = (param_1 == (byte *)0x20) << 1;
  bVar1 = false;
  switch(param_1) {
  case (byte *)0x0:
    goto switchD_8207a014_caseD_0;
  case (byte *)0x1:
    goto switchD_8207a014_caseD_1;
  case (byte *)0x2:
    goto switchD_8207a014_caseD_2;
  case (byte *)0x3:
    goto switchD_8207a014_caseD_3;
  case (byte *)0x4:
    goto switchD_8207a014_caseD_4;
  case (byte *)0x5:
    goto switchD_8207a014_caseD_5;
  case (byte *)0x6:
    goto switchD_8207a014_caseD_6;
  case (byte *)0x7:
    goto switchD_8207a014_caseD_7;
  case (byte *)0x8:
    goto switchD_8207a014_caseD_8;
  case (byte *)0x9:
    goto switchD_8207a014_caseD_9;
  case (byte *)0xa:
    goto switchD_8207a014_caseD_a;
  case (byte *)0xb:
    goto switchD_8207a014_caseD_b;
  case (byte *)0xc:
    goto switchD_8207a014_caseD_c;
  case (byte *)0xd:
    goto switchD_8207a014_caseD_d;
  case (byte *)0xe:
    goto switchD_8207a014_caseD_e;
  case (byte *)0xf:
    goto switchD_8207a014_caseD_f;
  case (byte *)0x10:
    goto switchD_8207a014_caseD_10;
  case (byte *)0x11:
    goto switchD_8207a014_caseD_11;
  case (byte *)0x12:
    break;
  case (byte *)0x13:
    goto switchD_8207a014_caseD_13;
  case (byte *)0x14:
    goto switchD_8207a014_caseD_14;
  case (byte *)0x15:
    goto LAB_820780d0;
  case (byte *)0x16:
    goto switchD_8207a014_caseD_16;
  case (byte *)0x17:
    goto switchD_8207a014_caseD_17;
  case (byte *)0x18:
    goto switchD_8207a014_caseD_18;
  case (byte *)0x19:
    *param_5 = param_8;
    if (param_6 < unaff_r27) {
      in_r11 = param_6 + 1;
      goto switchD_8207a014_caseD_1a;
    }
    goto LAB_82078578;
  case (byte *)0x1a:
switchD_8207a014_caseD_1a:
    if (in_r11 < unaff_r27) {
      in_r11 = (byte *)((int)param_6 << 2);
      goto switchD_8207a014_caseD_1b;
    }
    goto LAB_82078454;
  case (byte *)0x1b:
switchD_8207a014_caseD_1b:
    param_7 = (byte *)unaff_r28[4];
    param_8 = (byte *)*unaff_r28;
    param_4 = (byte *)0x0;
  case (byte *)0x1c:
    in_r11 = in_r11 + (int)param_5;
    param_3 = (byte *)0x0;
    param_2 = *(int *)in_r11;
switchD_8207a014_caseD_1d:
    param_2 = param_2 << 2;
    param_1 = (byte *)(*(int *)(in_r11 + 4) << 2);
switchD_8207a014_caseD_1e:
    pbVar6 = param_7 + param_2;
    param_7 = *(byte **)(param_1 + (int)param_7);
    in_r11 = param_8 + *(int *)pbVar6;
switchD_8207a014_caseD_1f:
    param_8 = param_7 + (int)param_8;
    param_1 = param_8 + 0x2e;
    param_7 = (byte *)(uint)in_r11[0x1d];
switchD_8207a014_caseD_20:
    uVar4 = (int)param_7 << 8 | (uint)param_7 >> 0x18 | (uint)in_r11[0x1c];
    uVar2 = (uint)CONCAT11(param_8[0x1d],param_8[0x1c]);
    pbVar6 = in_r11 + 0x2e;
    uVar5 = uVar4;
    if (uVar2 <= uVar4) {
      uVar5 = uVar2;
    }
    pbVar10 = pbVar6 + uVar5;
    for (; pbVar6 < pbVar10; pbVar6 = pbVar6 + 1) {
      bVar12 = *pbVar6;
      if ((bVar12 < 0x41) || (bVar3 = bVar12 + 0x20, 0x5a < bVar12)) {
        bVar3 = bVar12;
      }
      bVar12 = *param_1;
      if ((0x40 < bVar12) && (bVar12 < 0x5b)) {
        bVar12 = bVar12 + 0x20;
      }
      param_4 = (byte *)(uint)bVar3;
      param_3 = (byte *)(uint)bVar12;
      if (param_4 != param_3) break;
      param_1 = param_1 + 1;
    }
    if (pbVar6 == pbVar10) {
      bVar11 = uVar2 <= uVar4;
    }
    else {
      bVar11 = ((uint)param_3 & 0xff) <= ((uint)param_4 & 0xff);
    }
    iVar7 = 1;
    if (bVar11) {
LAB_82078454:
      iVar7 = 0;
    }
    bVar3 = 0;
    bVar12 = 0;
    iVar8 = *(int *)(param_5[(int)unaff_r30] * 4 + unaff_r28[4]) + *unaff_r28;
    iVar7 = *(int *)(param_5[(int)(param_6 + iVar7)] * 4 + unaff_r28[4]) + *unaff_r28;
    pbVar10 = (byte *)(iVar7 + 0x2e);
    uVar2 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 0x1d),*(undefined1 *)(iVar8 + 0x1c));
    uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x1d),*(undefined1 *)(iVar7 + 0x1c));
    pbVar6 = (byte *)(iVar8 + 0x2e);
    uVar5 = uVar2;
    if (uVar4 <= uVar2) {
      uVar5 = uVar4;
    }
    pbVar9 = pbVar6 + uVar5;
    for (; pbVar6 < pbVar9; pbVar6 = pbVar6 + 1) {
      bVar12 = *pbVar6;
      if ((bVar12 < 0x41) || (bVar3 = bVar12 + 0x20, 0x5a < bVar12)) {
        bVar3 = bVar12;
      }
      bVar12 = *pbVar10;
      if ((0x40 < bVar12) && (bVar12 < 0x5b)) {
        bVar12 = bVar12 + 0x20;
      }
      if (bVar3 != bVar12) break;
      pbVar10 = pbVar10 + 1;
    }
    if (pbVar6 == pbVar9) {
      bVar11 = uVar4 <= uVar2;
    }
    else {
      bVar11 = bVar12 <= bVar3;
    }
    if (!bVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_82078578:
    if (unaff_r25 == 1) {
      halt_baddata();
    }
    goto switchD_8207a014_caseD_17;
  case (byte *)0x1d:
    goto switchD_8207a014_caseD_1d;
  case (byte *)0x1e:
    goto switchD_8207a014_caseD_1e;
  case (byte *)0x1f:
    goto switchD_8207a014_caseD_1f;
  case (byte *)0x20:
    goto switchD_8207a014_caseD_20;
  default:
    return "unknown error";
  }
  param_7 = *(byte **)(param_2 + (int)param_5);
  *(byte **)(param_2 + (int)param_5) = param_8;
  unaff_r30 = param_3;
switchD_8207a014_caseD_13:
  *(byte **)(param_1 + (int)param_5) = param_7;
  param_6 = in_r11 + 1;
  bVar11 = param_6 < unaff_r27;
switchD_8207a014_caseD_14:
  if (bVar11) {
    if (param_6 + 1 < unaff_r27) {
      bVar3 = 0;
      bVar12 = 0;
      iVar8 = *(int *)(param_5[(int)param_6] * 4 + unaff_r28[4]) + *unaff_r28;
      iVar7 = *(int *)((param_5 + (int)param_6)[1] * 4 + unaff_r28[4]) + *unaff_r28;
      pbVar6 = (byte *)(iVar7 + 0x2e);
      uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 0x1d),*(undefined1 *)(iVar8 + 0x1c));
      uVar2 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 0x1d),*(undefined1 *)(iVar7 + 0x1c));
      pbVar10 = (byte *)(iVar8 + 0x2e);
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = uVar2;
      }
      pbVar9 = pbVar10 + uVar5;
      for (; pbVar10 < pbVar9; pbVar10 = pbVar10 + 1) {
        bVar12 = *pbVar10;
        if ((bVar12 < 0x41) || (bVar3 = bVar12 + 0x20, 0x5a < bVar12)) {
          bVar3 = bVar12;
        }
        bVar12 = *pbVar6;
        if ((0x40 < bVar12) && (bVar12 < 0x5b)) {
          bVar12 = bVar12 + 0x20;
        }
        if (bVar3 != bVar12) break;
        pbVar6 = pbVar6 + 1;
      }
      if (pbVar10 == pbVar9) {
        bVar11 = uVar2 <= uVar4;
      }
      else {
        bVar11 = bVar12 <= bVar3;
      }
      iVar7 = 1;
      if (bVar11) goto LAB_820781e8;
    }
    else {
LAB_820781e8:
      iVar7 = 0;
    }
    pbVar6 = param_6 + iVar7;
    param_7 = (byte *)unaff_r28[4];
    param_8 = (byte *)*unaff_r28;
    param_6 = (byte *)0x0;
    param_4 = (byte *)0x0;
    in_r11 = (byte *)(param_5[(int)unaff_r30] << 2);
    unaff_r31 = (byte *)(param_5[(int)pbVar6] << 2);
switchD_8207a014_caseD_0:
    pbVar6 = in_r11 + (int)param_7;
    param_7 = *(byte **)(unaff_r31 + (int)param_7);
    in_r11 = param_8 + *(int *)pbVar6;
switchD_8207a014_caseD_1:
    param_8 = param_7 + (int)param_8;
    unaff_r30 = param_8 + 0x2e;
    param_7 = (byte *)(uint)in_r11[0x1d];
switchD_8207a014_caseD_2:
    unaff_r31 = (byte *)(uint)param_8[0x1d];
    unaff_r29 = (byte *)(uint)in_r11[0x1c];
    param_7 = (byte *)((int)param_7 << 8 | (uint)param_7 >> 0x18);
switchD_8207a014_caseD_3:
    param_8 = (byte *)(uint)param_8[0x1c];
    unaff_r31 = (byte *)((int)unaff_r31 << 8 | (uint)unaff_r31 >> 0x18);
    param_7 = (byte *)((uint)param_7 | (uint)unaff_r29);
switchD_8207a014_caseD_4:
    unaff_r31 = (byte *)((uint)unaff_r31 | (uint)param_8);
    in_r11 = in_r11 + 0x2e;
    bVar11 = param_7 < unaff_r31;
switchD_8207a014_caseD_5:
    param_8 = param_7;
    if (!bVar11) {
      param_8 = unaff_r31;
    }
switchD_8207a014_caseD_6:
    unaff_r29 = param_8 + (int)in_r11;
switchD_8207a014_caseD_d:
    for (; in_r11 < unaff_r29; in_r11 = in_r11 + 1) {
      param_8 = (byte *)(uint)*in_r11;
switchD_8207a014_caseD_7:
      param_8 = param_8;
      if (param_8 < (byte *)0x41) {
LAB_82078280:
        param_6 = param_8;
      }
      else {
        bVar1 = (byte *)0x5a < param_8;
switchD_8207a014_caseD_8:
        param_6 = param_8 + 0x20;
        if (bVar1) goto LAB_82078280;
      }
switchD_8207a014_caseD_9:
      param_8 = (byte *)(uint)*unaff_r30;
      if ((byte *)0x40 < param_8) {
switchD_8207a014_caseD_a:
        if (param_8 < (byte *)0x5b) {
          param_8 = param_8 + 0x20;
        }
      }
switchD_8207a014_caseD_b:
      param_6 = (byte *)((uint)param_6 & 0xff);
      param_4 = (byte *)((uint)param_8 & 0xff);
      bVar12 = (param_6 == param_4) << 1;
switchD_8207a014_caseD_c:
      if (!(bool)(bVar12 >> 1)) break;
      unaff_r30 = unaff_r30 + 1;
    }
    bVar12 = (in_r11 == unaff_r29) << 1;
switchD_8207a014_caseD_e:
    if ((bool)(bVar12 >> 1)) {
      in_xer_ca = unaff_r31 <= param_7;
    }
    else {
switchD_8207a014_caseD_f:
      in_xer_ca = ((uint)param_4 & 0xff) <= ((uint)param_6 & 0xff);
    }
switchD_8207a014_caseD_10:
    bVar12 = in_xer_ca << 1;
switchD_8207a014_caseD_11:
    if (!(bool)(bVar12 >> 1 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (unaff_r26 != 0) {
LAB_820780d0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_cr0 = (unaff_r25 == 1) << 1;
switchD_8207a014_caseD_16:
  if ((bool)(in_cr0 >> 1 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
switchD_8207a014_caseD_17:
switchD_8207a014_caseD_18:
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207a1b0 @ 8207a1b0 ==== */

undefined4 FUN_8207a1b0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}


/* ==== FUN_8207a1c8 @ 8207a1c8 ==== */

void FUN_8207a1c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8207a218 @ 8207a218 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207a218(void)

{
  FUN_8207c480();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207a640 @ 8207a640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207a640(void)

{
  FUN_8207c480();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207a650 @ 8207a650 ==== */

void FUN_8207a650(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8207ab50 @ 8207ab50 ==== */

void FUN_8207ab50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207aba8 @ 8207aba8 ==== */

void FUN_8207aba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207ac30 @ 8207ac30 ==== */

void FUN_8207ac30(void)

{
  uint auStack_17f [95];
  
  FUN_8207c480();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(auStack_17f,0,0x31);
}


/* ==== FUN_8207b038 @ 8207b038 ==== */

void FUN_8207b038(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8207b098 @ 8207b098 ==== */

void FUN_8207b098(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8207b278 @ 8207b278 ==== */

void FUN_8207b278(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8207b3a0 @ 8207b3a0 ==== */

uint FUN_8207b3a0(char *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = 0xffffffff;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    param_1 = param_1 + 1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    uVar1 = *(uint *)(&UNK_820107e8 + (((int)cVar2 ^ uVar1) & 0xff) * 4) ^ uVar1 >> 8;
    cVar2 = *param_1;
  }
  return ~uVar1;
}


/* ==== FUN_8207b408 @ 8207b408 ==== */

int FUN_8207b408(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 1;
  if (*param_1 == '-') {
    iVar3 = -1;
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  while ((iVar2 = (int)cVar1, iVar2 != 0 && (iVar2 - 0x30U < 10))) {
    param_1 = param_1 + 1;
    iVar4 = iVar4 * 10 + iVar2 + -0x30;
    cVar1 = *param_1;
  }
  return iVar3 * iVar4;
}


/* ==== FUN_8207b758 @ 8207b758 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8207b758(int *param_1,int param_2)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 auStack_20 [2];
  undefined8 uStack_18;
  
  sVar2 = *(short *)(param_2 + 0xe);
  pfVar5 = (float *)(*(int *)(param_2 + 0x10) + *param_1);
  if (((sVar2 == 0) || (sVar2 == 1)) || (sVar2 == 2)) {
    cVar4 = FUN_8207b278();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  else if (sVar2 == 3) {
    uVar3 = *(ushort *)(param_2 + 0xc);
    iVar6 = 0;
    uVar7 = 0xc;
    auStack_20[0] = 0;
    iVar8 = 4;
    do {
      fVar1 = *pfVar5;
      if ((1 << (uVar7 & 0x3f) & (uint)uVar3) != 0) {
        fVar1 = fVar1 * _UNK_8200a5b8;
      }
      pfVar5 = pfVar5 + 1;
      uVar7 = uVar7 - 4;
      uStack_18 = (longlong)(fVar1 * DAT_8200a5bc);
      *(undefined1 *)((int)auStack_20 + iVar6) = (undefined1)uStack_18;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    cVar4 = FUN_8207b278();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8207b8a0 @ 8207b8a0 ==== */

void FUN_8207b8a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207b968 @ 8207b968 ==== */

bool FUN_8207b968(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  cVar1 = FUN_8207c070(param_1,0x82079660,&uStack_30);
  if (cVar1 == '\0') {
    func_0x820b7588(&UNK_82010e50);
  }
  return cVar1 != '\0';
}


/* ==== FUN_8207b9d8 @ 8207b9d8 ==== */

void FUN_8207b9d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207baa8 @ 8207baa8 ==== */

void FUN_8207baa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207bb38 @ 8207bb38 ==== */

void FUN_8207bb38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_8207be20 @ 8207be20 ==== */

undefined4 FUN_8207be20(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_8207be68 @ 8207be68 ==== */

undefined4 FUN_8207be68(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
LAB_8207c010:
    if (cVar1 == '\r') goto LAB_8207c018;
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
          while (cVar1 = FUN_8207be20(cVar1), cVar1 == '\x01') {
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
        goto LAB_8207c04c;
      }
      goto LAB_8207c010;
    }
LAB_8207c018:
    if (pcVar4[1] != '\n') {
      return 0;
    }
  }
  while (cVar1 != '\n') {
    if ((cVar1 == '\0') || (cVar1 == '\n')) {
      pcVar4 = (char *)0x0;
      goto LAB_8207c04c;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = pcVar4 + 1;
LAB_8207c04c:
  *param_1 = (int)pcVar4;
  return 1;
}


/* ==== FUN_8207c070 @ 8207c070 ==== */

void FUN_8207c070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207c190 @ 8207c190 ==== */

void FUN_8207c190(void)

{
  uint auStack_2ef [187];
  
  FUN_8207c484();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(auStack_2ef,0,0x7f);
}


/* ==== FUN_8207c470 @ 8207c470 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c470(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c474 @ 8207c474 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c474(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c478 @ 8207c478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c478(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c47c @ 8207c47c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c47c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c480 @ 8207c480 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c480(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c484 @ 8207c484 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c484(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c488 @ 8207c488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c48c @ 8207c48c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c48c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c490 @ 8207c490 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c490(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c494 @ 8207c494 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c494(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c498 @ 8207c498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c498(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c49c @ 8207c49c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c49c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c4a0 @ 8207c4a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c4a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c4a4 @ 8207c4a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c4a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c4a8 @ 8207c4a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c4a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c4ac @ 8207c4ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c4ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c580 @ 8207c580 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c580(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_8207c494();
  FUN_8207d7b8();
  puVar6 = puRam820cc40c;
  if (puRam820cc410 <= puRam820cc40c) {
    iVar4 = (int)puRam820cc40c - (int)puRam820cc410;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = FUN_82081c20(puRam820cc410);
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (undefined4 *)FUN_82080ae0(), puVar3 == (undefined4 *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (undefined4 *)FUN_82080ae0(), puVar3 == (undefined4 *)0x0))))
        goto LAB_8207c4e4;
        puVar6 = puVar3 + (iVar4 >> 2);
        puRam820cc410 = puVar3;
      }
      puRam820cc40c = puVar6 + 1;
      *puVar6 = uVar1;
    }
  }
LAB_8207c4e4:
  FUN_8207c664();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c664 @ 8207c664 ==== */

void FUN_8207c664(void)

{
  FUN_8207d7c0();
  return;
}


/* ==== FUN_8207c688 @ 8207c688 ==== */

int FUN_8207c688(void)

{
  int iVar1;
  
  iVar1 = FUN_8207c580();
  return -(uint)(iVar1 == 0);
}


/* ==== FUN_8207c6b0 @ 8207c6b0 ==== */

void FUN_8207c6b0(uint *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x8207c73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x8207c744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_8207c750 @ 8207c750 ==== */

void FUN_8207c750(undefined4 param_1)

{
  DAT_820ca9ac = param_1;
  return;
}


/* ==== FUN_8207c760 @ 8207c760 ==== */

void FUN_8207c760(void)

{
  undefined4 in_r0;
  
  if (DAT_820ca9ac != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x8207c788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_820ca9ac)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_8207c798 @ 8207c798 ==== */

void FUN_8207c798(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8207c838 @ 8207c838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c838(void)

{
  FUN_8207c798();
  func_0x820b7b28(0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c860 @ 8207c860 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c860(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207cce8 @ 8207cce8 ==== */

void FUN_8207cce8(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ==== FUN_8207cd90 @ 8207cd90 ==== */

void FUN_8207cd90(int param_1,int param_2,uint param_3)

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
  FUN_8207c860();
  return;
}


/* ==== FUN_8207ce50 @ 8207ce50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ce50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207ceb0 @ 8207ceb0 ==== */

void FUN_8207ceb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207cf78 @ 8207cf78 ==== */

void FUN_8207cf78(char *param_1,int param_2,int param_3)

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


/* ==== FUN_8207cfe0 @ 8207cfe0 ==== */

void FUN_8207cfe0(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + -1);
  pbVar1 = (byte *)(param_2 + -1);
  do {
    do {
      pbVar1 = pbVar1 + 1;
      bVar3 = *pbVar1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar4;
      if (bVar3 == 0) {
        return;
      }
    } while (bVar2 == bVar3);
    if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
      bVar3 = bVar3 | 0x20;
    }
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 | 0x20;
    }
  } while (bVar2 == bVar3);
  return;
}


/* ==== FUN_8207d038 @ 8207d038 ==== */

void FUN_8207d038(int param_1,short *param_2)

{
  short sVar1;
  
  param_1 = param_1 - (int)param_2;
  do {
    sVar1 = *param_2;
    *(short *)(param_1 + (int)param_2) = sVar1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return;
}


/* ==== FUN_8207d058 @ 8207d058 ==== */

uint FUN_8207d058(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_8207dba0();
  uVar2 = *(int *)(iVar1 + 0x14) * 0x343fd + 0x269ec3;
  *(uint *)(iVar1 + 0x14) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


/* ==== FUN_8207d0a0 @ 8207d0a0 ==== */

int FUN_8207d0a0(byte *param_1,byte *param_2,int param_3)

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


/* ==== FUN_8207d0f0 @ 8207d0f0 ==== */

void FUN_8207d0f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207d1f0 @ 8207d1f0 ==== */

void FUN_8207d1f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8207d2d8 @ 8207d2d8 ==== */

void FUN_8207d2d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8207d304 @ 8207d304 ==== */

void FUN_8207d304(void)

{
  int in_r12;
  undefined8 unaff_f19;
  undefined8 unaff_f20;
  undefined8 unaff_f21;
  undefined8 unaff_f22;
  undefined8 unaff_f23;
  undefined8 unaff_f24;
  undefined8 unaff_f25;
  undefined8 unaff_f26;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x68) = unaff_f19;
  *(undefined8 *)(in_r12 + -0x60) = unaff_f20;
  *(undefined8 *)(in_r12 + -0x58) = unaff_f21;
  *(undefined8 *)(in_r12 + -0x50) = unaff_f22;
  *(undefined8 *)(in_r12 + -0x48) = unaff_f23;
  *(undefined8 *)(in_r12 + -0x40) = unaff_f24;
  *(undefined8 *)(in_r12 + -0x38) = unaff_f25;
  *(undefined8 *)(in_r12 + -0x30) = unaff_f26;
  *(undefined8 *)(in_r12 + -0x28) = unaff_f27;
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8207d30c @ 8207d30c ==== */

void FUN_8207d30c(void)

{
  int in_r12;
  undefined8 unaff_f21;
  undefined8 unaff_f22;
  undefined8 unaff_f23;
  undefined8 unaff_f24;
  undefined8 unaff_f25;
  undefined8 unaff_f26;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x58) = unaff_f21;
  *(undefined8 *)(in_r12 + -0x50) = unaff_f22;
  *(undefined8 *)(in_r12 + -0x48) = unaff_f23;
  *(undefined8 *)(in_r12 + -0x40) = unaff_f24;
  *(undefined8 *)(in_r12 + -0x38) = unaff_f25;
  *(undefined8 *)(in_r12 + -0x30) = unaff_f26;
  *(undefined8 *)(in_r12 + -0x28) = unaff_f27;
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8207d314 @ 8207d314 ==== */

void FUN_8207d314(void)

{
  int in_r12;
  undefined8 unaff_f23;
  undefined8 unaff_f24;
  undefined8 unaff_f25;
  undefined8 unaff_f26;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x48) = unaff_f23;
  *(undefined8 *)(in_r12 + -0x40) = unaff_f24;
  *(undefined8 *)(in_r12 + -0x38) = unaff_f25;
  *(undefined8 *)(in_r12 + -0x30) = unaff_f26;
  *(undefined8 *)(in_r12 + -0x28) = unaff_f27;
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8207d31c @ 8207d31c ==== */

void FUN_8207d31c(void)

{
  int in_r12;
  undefined8 unaff_f25;
  undefined8 unaff_f26;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x38) = unaff_f25;
  *(undefined8 *)(in_r12 + -0x30) = unaff_f26;
  *(undefined8 *)(in_r12 + -0x28) = unaff_f27;
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8207d324 @ 8207d324 ==== */

void FUN_8207d324(void)

{
  int in_r12;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x28) = unaff_f27;
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8207d328 @ 8207d328 ==== */

void FUN_8207d328(void)

{
  int in_r12;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8207d350 @ 8207d350 ==== */

void FUN_8207d350(void)

{
  return;
}


/* ==== FUN_8207d358 @ 8207d358 ==== */

void FUN_8207d358(void)

{
  return;
}


/* ==== FUN_8207d360 @ 8207d360 ==== */

void FUN_8207d360(void)

{
  return;
}


/* ==== FUN_8207d370 @ 8207d370 ==== */

void FUN_8207d370(void)

{
  return;
}


/* ==== FUN_8207d374 @ 8207d374 ==== */

void FUN_8207d374(void)

{
  return;
}


/* ==== FUN_8207d388 @ 8207d388 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d388(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d468 @ 8207d468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d468(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d548 @ 8207d548 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_8207d548(undefined8 param_1,undefined8 param_2)

{
  ushort uStack00000010;
  ushort uStack00000018;
  int iStack0000001c;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uStack00000010 & 0x7ff0) != 0x7ff0) {
    uStack00000018 = (ushort)((ulonglong)param_2 >> 0x30);
    if ((uStack00000018 & 0x7ff0) != 0x7ff0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _uStack00000018 = (int)((ulonglong)param_2 >> 0x20);
    iStack0000001c = (int)param_2;
    if ((_uStack00000018 == 0x7ff00000) && (iStack0000001c == 0)) {
      return param_1;
    }
    if ((_uStack00000018 == -0x100000) && (iStack0000001c == 0)) {
      return param_1;
    }
  }
  return uRam820c5970;
}


/* ==== FUN_8207d6d0 @ 8207d6d0 ==== */

byte * FUN_8207d6d0(byte *param_1,uint param_2,int param_3)

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


/* ==== FUN_8207d710 @ 8207d710 ==== */

int FUN_8207d710(int param_1)

{
  if (param_1 < 0x61) {
    return param_1;
  }
  if (0x7a < param_1) {
    return param_1;
  }
  return param_1 + -0x20;
}


/* ==== FUN_8207d730 @ 8207d730 ==== */

byte * FUN_8207d730(byte *param_1,uint param_2)

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


/* ==== FUN_8207d788 @ 8207d788 ==== */

int FUN_8207d788(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


/* ==== FUN_8207d7b0 @ 8207d7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d7b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d7b8 @ 8207d7b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d7b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d7c0 @ 8207d7c0 ==== */

void FUN_8207d7c0(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_8207d7c8 @ 8207d7c8 ==== */

void FUN_8207d7c8(void)

{
  FUN_8207df80(0);
  FUN_8207c750(0);
  FUN_820832f8(0);
  FUN_820832e0();
  return;
}


/* ==== FUN_8207d808 @ 8207d808 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d808(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d868 @ 8207d868 ==== */

void FUN_8207d868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8207d9ec @ 8207d9ec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d9ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207da30 @ 8207da30 ==== */

void FUN_8207da30(void)

{
  FUN_8207d868();
  return;
}


/* ==== FUN_8207da40 @ 8207da40 ==== */

void FUN_8207da40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8207da50 @ 8207da50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207da50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207da80 @ 8207da80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207da80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dac8 @ 8207dac8 ==== */

void FUN_8207dac8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8207dba0 @ 8207dba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dbe0 @ 8207dbe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dbe0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dca0 @ 8207dca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dca0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dd10 @ 8207dd10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dd10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dde8 @ 8207dde8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dde8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dea0 @ 8207dea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207df80 @ 8207df80 ==== */

void FUN_8207df80(undefined4 param_1)

{
  DAT_820ca9cc = param_1;
  return;
}


/* ==== FUN_8207df90 @ 8207df90 ==== */

undefined4 FUN_8207df90(void)

{
  int iVar1;
  
  if ((DAT_820ca9cc != (code *)0x0) && (iVar1 = (*DAT_820ca9cc)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_8207dfd8 @ 8207dfd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dfd8(undefined4 param_1,undefined4 param_2,uint param_3,undefined *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined4 local_154 [32];
  undefined4 local_d4 [53];
  
  uVar13 = FUN_8207c490();
  puVar10 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
  uVar4 = (uint)uVar13;
  if ((((puVar10 == (undefined1 *)0x0) && (uVar4 != 0)) || (param_3 == 0)) ||
     ((code *)param_4 == (code *)0x0)) {
    puVar2 = (undefined4 *)FUN_82081d60();
    *puVar2 = 0x16;
    FUN_8207c760();
  }
  else if (1 < uVar4) {
    iVar8 = 0;
    puVar9 = local_154;
    puVar2 = local_d4;
    puVar11 = puVar10 + (uVar4 - 1) * param_3;
LAB_8207e050:
    while( true ) {
      trapWord(6,param_3,0);
      uVar4 = (uint)((int)puVar11 - (int)puVar10) / param_3 + 1;
      if (uVar4 < 9) break;
      puVar5 = puVar10 + (uVar4 >> 1) * param_3;
      iVar3 = (*(code *)param_4)(puVar10,puVar5);
      if ((0 < iVar3) && (puVar10 != puVar5)) {
        puVar6 = puVar5;
        uVar4 = param_3;
        do {
          uVar1 = puVar6[(int)puVar10 - (int)puVar5];
          puVar6[(int)puVar10 - (int)puVar5] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = (*(code *)param_4)(puVar10,puVar11);
      if ((0 < iVar3) && (puVar10 != puVar11)) {
        puVar6 = puVar11;
        uVar4 = param_3;
        do {
          uVar1 = puVar6[(int)puVar10 - (int)puVar11];
          puVar6[(int)puVar10 - (int)puVar11] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = (*(code *)param_4)(puVar5,puVar11);
      puVar6 = puVar11;
      puVar12 = puVar10;
      if ((0 < iVar3) && (puVar5 != puVar11)) {
        puVar7 = puVar11;
        uVar4 = param_3;
        do {
          uVar1 = puVar7[(int)puVar5 - (int)puVar11];
          puVar7[(int)puVar5 - (int)puVar11] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
LAB_8207e1e4:
      if (puVar12 < puVar5) {
        do {
          puVar12 = puVar12 + param_3;
          if (puVar5 <= puVar12) goto LAB_8207e218;
          iVar3 = (*(code *)param_4)(puVar12,puVar5);
        } while (iVar3 < 1);
        if (puVar5 <= puVar12) goto LAB_8207e218;
      }
      else {
LAB_8207e218:
        do {
          puVar12 = puVar12 + param_3;
          if (puVar11 < puVar12) break;
          iVar3 = (*(code *)param_4)(puVar12,puVar5);
        } while (iVar3 < 1);
      }
      do {
        puVar6 = puVar6 + -param_3;
        if (puVar6 <= puVar5) break;
        iVar3 = (*(code *)param_4)(puVar6,puVar5);
      } while (0 < iVar3);
      if (puVar12 <= puVar6) {
        if (puVar12 != puVar6) {
          puVar7 = puVar6;
          uVar4 = param_3;
          do {
            uVar1 = puVar7[(int)puVar12 - (int)puVar6];
            puVar7[(int)puVar12 - (int)puVar6] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (puVar5 == puVar6) {
          puVar5 = puVar12;
        }
        goto LAB_8207e1e4;
      }
      puVar6 = puVar6 + param_3;
      if (puVar5 < puVar6) {
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar5) goto LAB_8207e2d8;
          iVar3 = (*(code *)param_4)(puVar6,puVar5);
        } while (iVar3 == 0);
        if (puVar6 <= puVar5) goto LAB_8207e2d8;
      }
      else {
LAB_8207e2d8:
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar10) break;
          iVar3 = (*(code *)param_4)(puVar6,puVar5);
        } while (iVar3 == 0);
      }
      if ((int)puVar6 - (int)puVar10 < (int)puVar11 - (int)puVar12) goto LAB_8207e338;
      if (puVar10 < puVar6) {
        puVar2[1] = puVar10;
        iVar8 = iVar8 + 1;
        puVar9[1] = puVar6;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar10 = puVar12;
      if (puVar11 <= puVar12) goto LAB_8207e0e8;
    }
    for (; puVar6 = puVar10, puVar5 = puVar10, puVar10 < puVar11; puVar11 = puVar11 + -param_3) {
      while (puVar5 = puVar5 + param_3, puVar5 <= puVar11) {
        iVar3 = (*(code *)param_4)(puVar5,puVar6);
        if (0 < iVar3) {
          puVar6 = puVar5;
        }
      }
      if (puVar6 != puVar11) {
        puVar5 = puVar11;
        uVar4 = param_3;
        do {
          uVar1 = puVar5[(int)puVar6 - (int)puVar11];
          puVar5[(int)puVar6 - (int)puVar11] = *puVar5;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    goto LAB_8207e0e8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_8207e338:
  if (puVar12 < puVar11) {
    puVar2 = puVar2 + 1;
    *puVar2 = puVar12;
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 1;
    *puVar9 = puVar11;
  }
  puVar11 = puVar6;
  if (puVar6 <= puVar10) {
LAB_8207e0e8:
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) {
      halt_baddata();
    }
    puVar10 = (undefined1 *)*puVar2;
    puVar11 = (undefined1 *)*puVar9;
    puVar9 = puVar9 + -1;
    puVar2 = puVar2 + -1;
  }
  goto LAB_8207e050;
}


/* ==== FUN_8207e48c @ 8207e48c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207e48c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e4c8 @ 8207e4c8 ==== */

void FUN_8207e4c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8207e4d0 @ 8207e4d0 ==== */

void FUN_8207e4d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8207e578 @ 8207e578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207e578(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e63c @ 8207e63c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207e63c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e678 @ 8207e678 ==== */

void FUN_8207e678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8207e748 @ 8207e748 ==== */

void FUN_8207e748(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207e7fc @ 8207e7fc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207e7fc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e838 @ 8207e838 ==== */

void FUN_8207e838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8207ea60 @ 8207ea60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ea60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207eb04 @ 8207eb04 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207eb04(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207eb40 @ 8207eb40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207eb40(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_8207c488();
  puVar1 = (uint *)((ulonglong)uVar11 >> 0x20);
  uVar4 = (uint)uVar11;
  if (param_3 == 0) {
    halt_baddata();
  }
  if (param_4 == 0) {
    halt_baddata();
  }
  if (puVar1 == (uint *)0x0) {
LAB_8207eb80:
    puVar2 = (undefined4 *)FUN_82081d60();
    uVar3 = 0x16;
LAB_8207eb88:
    *puVar2 = uVar3;
    FUN_8207c760();
  }
  else {
    if ((param_5 == (int *)0x0) || (trapWord(6,param_3,0), 0xffffffff / param_3 < param_4)) {
      if (uVar4 != 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_8207c6b0(puVar1,0,uVar4);
      }
      if ((param_5 == (int *)0x0) || (trapWord(6,param_3,0), 0xffffffff / param_3 < param_4))
      goto LAB_8207eb80;
    }
    uVar5 = param_3 * param_4;
    if ((param_5[3] & 0x10cU) == 0) {
      uVar6 = 0x1000;
    }
    else {
      uVar6 = param_5[6];
    }
    if (uVar5 != 0) {
      do {
        puVar9 = (undefined1 *)((ulonglong)uVar11 >> 0x20);
        uVar7 = (uint)uVar11;
        if ((param_5[3] & 0x10cU) == 0) {
LAB_8207ec8c:
          if (uVar5 < uVar6) {
            iVar8 = FUN_82083ea8();
            if (iVar8 == -1) {
LAB_8207ed90:
              trapWord(6,param_3,0);
              halt_baddata();
            }
            if (uVar7 == 0) goto LAB_8207ed5c;
            *puVar9 = (char)iVar8;
            uVar5 = uVar5 - 1;
            uVar6 = param_5[6];
            puVar9 = puVar9 + 1;
            iVar8 = uVar7 - 1;
          }
          else {
            if (uVar6 == 0) {
              uVar10 = 0x7fffffff;
              if (uVar5 < 0x80000000) {
                uVar10 = uVar5;
              }
            }
            else {
              trapWord(6,uVar6,0);
              if (uVar5 < 0x80000000) {
                uVar10 = (uVar5 / uVar6) * uVar6;
              }
              else {
                uVar10 = (0x7fffffff / uVar6) * uVar6;
              }
            }
            if (uVar7 < uVar10) {
LAB_8207ed5c:
              if (uVar4 != 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_8207c6b0(puVar1,0,uVar4);
              }
              puVar2 = (undefined4 *)FUN_82081d60();
              uVar3 = 0x22;
              goto LAB_8207eb88;
            }
            FUN_82083a60((int)param_5);
            iVar8 = FUN_82084678();
            if (iVar8 == 0) {
              uVar4 = param_5[3] | 0x10;
LAB_8207eda0:
              param_5[3] = uVar4;
              trapWord(6,param_3,0);
              halt_baddata();
            }
            if (iVar8 == -1) {
              uVar4 = param_5[3] | 0x20;
              goto LAB_8207eda0;
            }
            uVar5 = uVar5 - iVar8;
            puVar9 = puVar9 + iVar8;
            iVar8 = uVar7 - iVar8;
          }
        }
        else {
          uVar10 = param_5[1];
          if (uVar10 == 0) goto LAB_8207ec8c;
          if ((int)uVar10 < 0) {
            param_5[3] = param_5[3] | 0x20;
            goto LAB_8207ed90;
          }
          if (uVar5 < uVar10) {
            uVar10 = uVar5;
          }
          if (uVar7 < uVar10) goto LAB_8207ed5c;
          FUN_82084820();
          uVar5 = uVar5 - uVar10;
          puVar9 = puVar9 + uVar10;
          *param_5 = *param_5 + uVar10;
          iVar8 = uVar7 - uVar10;
          param_5[1] = param_5[1] - uVar10;
        }
        uVar11 = CONCAT44(puVar9,iVar8);
      } while (uVar5 != 0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207eeac @ 8207eeac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207eeac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207eee8 @ 8207eee8 ==== */

void FUN_8207eee8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8207ef00 @ 8207ef00 ==== */

void FUN_8207ef00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8207f170 @ 8207f170 ==== */

void FUN_8207f170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207f224 @ 8207f224 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f224(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f260 @ 8207f260 ==== */

undefined4 FUN_8207f260(void)

{
  return 0x820c5408;
}


/* ==== FUN_8207f3d8 @ 8207f3d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f3d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f448 @ 8207f448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f448(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f498 @ 8207f498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f498(uint param_1)

{
  if ((0x820c5407 < param_1) && (param_1 < 0x820c5669)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f4d8 @ 8207f4d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f4d8(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f500 @ 8207f500 ==== */

void FUN_8207f500(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207f5c8 @ 8207f5c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f5c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f628 @ 8207f628 ==== */

void FUN_8207f628(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8207f6c0 @ 8207f6c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f6c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f740 @ 8207f740 ==== */

void FUN_8207f740(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207f864 @ 8207f864 ==== */

void FUN_8207f864(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_8207f8b4 @ 8207f8b4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f8b4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f920 @ 8207f920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f9dc @ 8207f9dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207f9dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207fa18 @ 8207fa18 ==== */

void FUN_8207fa18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8207fa20 @ 8207fa20 ==== */

char * FUN_8207fa20(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    iVar3 = (int)param_1 - (int)param_2;
    pcVar2 = param_2;
    do {
      while (((cVar1 != '\0' && (*pcVar2 != '\0')) && (pcVar2[iVar3] == *pcVar2))) {
        cVar1 = (pcVar2 + 1)[iVar3];
        pcVar2 = pcVar2 + 1;
      }
      if (*pcVar2 == '\0') {
        return param_1;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      iVar3 = iVar3 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
  }
  return (char *)0x0;
}


/* ==== FUN_8207fa98 @ 8207fa98 ==== */

void FUN_8207fa98(void)

{
  if (DAT_820cab64 != (code *)0x0) {
    (*DAT_820cab64)();
  }
  FUN_82081e88(0x19);
  FUN_82086240(0,1);
  FUN_820861f0();
  return;
}


/* ==== FUN_8207fae8 @ 8207fae8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_8207fae8(double param_1)

{
  double dVar1;
  ushort uStack00000010;
  
  if (param_1 == DAT_82006978) {
    return _UNK_8200a7e8;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uStack00000010 & 0x7ff0) == 0x7ff0) {
    if (_UNK_8200aae0 < param_1) {
      return param_1;
    }
  }
  else {
    if (_UNK_8200a7e8 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    dVar1 = dRam820c5968;
    if (param_1 == _UNK_8200a7e8) goto LAB_8207fb34;
  }
  dVar1 = dRam820c5970;
LAB_8207fb34:
  return -dVar1;
}


/* ==== FUN_8207fc78 @ 8207fc78 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8207fc78(double param_1)

{
  int iStack00000014;
  
  if (((((ulonglong)param_1 & 0x7ff0000000000000) != 0) ||
      ((((ulonglong)param_1 & 0xfffff00000000) == 0 &&
       (iStack00000014 = SUB84(param_1,0), iStack00000014 == 0)))) &&
     ((double)(longlong)param_1 == param_1)) {
    if ((double)(longlong)(param_1 * _UNK_82006970) == param_1 * _UNK_82006970) {
      return 2;
    }
    return 1;
  }
  return 0;
}


/* ==== FUN_8207fce8 @ 8207fce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207fce8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207fe70 @ 8207fe70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207fe70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82080360 @ 82080360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82080360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82080388 @ 82080388 ==== */

double FUN_82080388(double param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(param_1);
  if (dVar3 <= (double)DAT_820c575c) {
    dVar2 = dVar3 * dVar3;
    iVar1 = param_3;
    if ((param_3 == 0) && (param_1 == (double)DAT_820c5750)) {
      return param_1;
    }
  }
  else {
    dVar2 = ((double)DAT_820c5754 - dVar3) * (double)DAT_820c575c;
    dVar3 = -(SQRT(dVar2) * (double)DAT_820c5758);
    iVar1 = 1 - param_3;
  }
  iVar1 = iVar1 * 8;
  dVar3 = (((((DAT_820c57a0 * dVar2 + DAT_820c5798) * dVar2 + DAT_820c5790) * dVar2 + DAT_820c5788)
            * dVar2 + DAT_820c5780) * dVar2 * dVar3) /
          (((((DAT_820c57c8 + dVar2) * dVar2 + DAT_820c57c0) * dVar2 + DAT_820c57b8) * dVar2 +
           DAT_820c57b0) * dVar2 + DAT_820c57a8) + dVar3;
  if (param_3 == 0) {
    dVar2 = *(double *)(&DAT_820c5760 + iVar1) + dVar3;
    if (param_1 < 0.0) {
      dVar2 = -(*(double *)(&DAT_820c5760 + iVar1) + dVar3);
    }
    return dVar2;
  }
  dVar2 = *(double *)(&DAT_820c5760 + iVar1) - dVar3;
  if (param_1 < 0.0) {
    dVar2 = *(double *)(&DAT_820c5770 + iVar1) + dVar3;
  }
  return dVar2;
}


/* ==== FUN_82080480 @ 82080480 ==== */

void FUN_82080480(double param_1,undefined4 param_2)

{
  FUN_82080388(param_1,param_2,1);
  return;
}


/* ==== FUN_82080488 @ 82080488 ==== */

double FUN_82080488(double param_1)

{
  double dVar1;
  
  dVar1 = (double)(longlong)param_1;
  if (dVar1 - param_1 < 0.0) {
    dVar1 = dVar1 + DAT_82006978;
  }
  if (DAT_82011300 - ABS(param_1) < 0.0) {
    dVar1 = param_1;
  }
  if (-ABS(param_1) < 0.0) {
    param_1 = dVar1;
  }
  return param_1;
}


/* ==== FUN_820804d4 @ 820804d4 ==== */

void FUN_820804d4(void)

{
  int iVar1;
  int in_r12;
  
  iVar1 = 0xfff - in_r12 >> 0xc;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  return;
}


/* ==== FUN_820804f8 @ 820804f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820804f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82080ad8 @ 82080ad8 ==== */

void FUN_82080ad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82080ae0 @ 82080ae0 ==== */

void FUN_82080ae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82080bd0 @ 82080bd0 ==== */

ushort FUN_82080bd0(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam820c5bc8) & 4;
}


/* ==== FUN_82080bf0 @ 82080bf0 ==== */

ushort FUN_82080bf0(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam820c5bc8) & 0x80;
}


/* ==== FUN_82080c10 @ 82080c10 ==== */

ushort FUN_82080c10(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam820c5bc8) & 8;
}


/* ==== FUN_82080e34 @ 82080e34 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82080e34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82080e70 @ 82080e70 ==== */

int FUN_82080e70(int param_1)

{
  if (param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_82080e88 @ 82080e88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82080e88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82080ff8 @ 82080ff8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82080ff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82081070 @ 82081070 ==== */

void FUN_82081070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820812c0 @ 820812c0 ==== */

void FUN_820812c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820813b0 @ 820813b0 ==== */

void FUN_820813b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820817c0 @ 820817c0 ==== */

void FUN_820817c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82081c20 @ 82081c20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82081c20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82081c78 @ 82081c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82081c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82081ce0 @ 82081ce0 ==== */

void FUN_82081ce0(void)

{
  uRam820cc400 = 0;
  return;
}


/* ==== FUN_82081cf0 @ 82081cf0 ==== */

undefined4 FUN_82081cf0(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (uint *)0x820c57f8;
  do {
    if (param_1 == *puVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x7df3a804);
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


/* ==== FUN_82081d60 @ 82081d60 ==== */

undefined * FUN_82081d60(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_8207dac8();
  if (iVar1 == 0) {
    puVar2 = &DAT_820c5960;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 8);
  }
  return puVar2;
}


/* ==== FUN_82081d98 @ 82081d98 ==== */

undefined * FUN_82081d98(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_8207dac8();
  if (iVar1 == 0) {
    puVar2 = &DAT_820c5964;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0xc);
  }
  return puVar2;
}


/* ==== FUN_82081dd0 @ 82081dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82081dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82081e40 @ 82081e40 ==== */

undefined4 FUN_82081e40(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_82011b30;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(&UNK_82011b34 + uVar2 * 8);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x16);
  return 0;
}


/* ==== FUN_82081e88 @ 82081e88 ==== */

void FUN_82081e88(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_82081e40(param_1);
  if (iVar1 != 0) {
    FUN_820921c8();
  }
  return;
}


/* ==== FUN_82081eb8 @ 82081eb8 ==== */

void FUN_82081eb8(void)

{
  int iVar1;
  
  iVar1 = FUN_82081e40(0xfc);
  if (iVar1 != 0) {
    FUN_820921c8();
  }
  iVar1 = FUN_82081e40(0xff);
  if (iVar1 != 0) {
    FUN_820921c8();
  }
  return;
}


/* ==== FUN_82081f00 @ 82081f00 ==== */

void FUN_82081f00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820820d8 @ 820820d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820820d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082170 @ 82082170 ==== */

void FUN_82082170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82082240 @ 82082240 ==== */

void FUN_82082240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82082d70 @ 82082d70 ==== */

undefined8 FUN_82082d70(undefined8 param_1,undefined4 param_2,short param_3)

{
  ushort uStack00000010;
  undefined8 uStack_10;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uStack_10 = CONCAT26((param_3 + 0x3fe) * 0x10 | uStack00000010 & 0x800f,(int6)param_1);
  return uStack_10;
}


/* ==== FUN_82082d98 @ 82082d98 ==== */

int FUN_82082d98(undefined8 param_1)

{
  return (int)(short)(((ushort)((ulonglong)param_1 >> 0x34) & 0x7ff) - 0x3fe);
}


/* ==== FUN_82082db0 @ 82082db0 ==== */

undefined4 FUN_82082db0(ulonglong param_1)

{
  ushort uStack00000010;
  int iStack00000014;
  
  _uStack00000010 = (int)(param_1 >> 0x20);
  iStack00000014 = (int)param_1;
  if (_uStack00000010 == 0x7ff00000) {
    if (iStack00000014 == 0) {
      return 1;
    }
  }
  else if ((_uStack00000010 == -0x100000) && (iStack00000014 == 0)) {
    return 2;
  }
  uStack00000010 = (ushort)(param_1 >> 0x30);
  if ((uStack00000010 & 0x7ff8) == 0x7ff8) {
    return 3;
  }
  if (((uStack00000010 & 0x7ff8) == 0x7ff0) &&
     (((param_1 & 0x7ffff00000000) != 0 || (iStack00000014 != 0)))) {
    return 4;
  }
  return 0;
}


/* ==== FUN_82082e38 @ 82082e38 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_82082e38(double param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ushort uStack00000010;
  undefined6 uStack00000012;
  double dStack_10;
  
  if (param_1 == _UNK_8200a7e8) {
    iVar4 = 0;
    goto LAB_82082f24;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar1 = uStack00000010;
  uVar3 = (uint)uStack00000010;
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    _uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
    uStack00000012._2_4_ = SUB84(param_1,0);
    if ((((ulonglong)param_1 & 0xfffff00000000) == 0) && (uStack00000012._2_4_ == 0))
    goto LAB_82082efc;
    iVar4 = -0x3fd;
    bVar5 = param_1 < _UNK_8200a7e8;
    uVar3 = _uStack00000010;
    dVar2 = param_1;
    if (((ulonglong)param_1 & 0x10000000000000) == 0) {
      do {
        uVar3 = uVar3 << 1;
        if ((uStack00000012._2_4_ & 0x80000000) != 0) {
          uVar3 = uVar3 | 1;
        }
        uStack00000010 = (ushort)(uVar3 >> 0x10);
        uVar1 = uStack00000010;
        uStack00000012._2_4_ = uStack00000012._2_4_ << 1;
        iVar4 = iVar4 + -1;
      } while ((uVar3 & 0x100000) == 0);
      _uStack00000010 = (double)CONCAT44(uVar3,uStack00000012._2_4_);
      dVar2 = _uStack00000010;
    }
    _uStack00000010 = dVar2;
    _uStack00000010 = (double)(CONCAT26(uVar1,uStack00000012) & 0xffefffffffffffff);
    param_1 = _uStack00000010;
    if (bVar5) {
      _uStack00000010 =
           (double)(CONCAT26(uVar1,uStack00000012) & 0xffefffffffffffff | 0x8000000000000000);
      param_1 = _uStack00000010;
    }
  }
  else {
LAB_82082efc:
    iVar4 = ((uVar3 & 0x7ff0) >> 4) - 0x3fe;
  }
  dStack_10 = (double)((ulonglong)param_1 & 0x800fffffffffffff | 0x3fe0000000000000);
  param_1 = dStack_10;
LAB_82082f24:
  *param_3 = iVar4;
  return param_1;
}


/* ==== FUN_82082f30 @ 82082f30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82082f30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082fa0 @ 82082fa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82082fa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082fc0 @ 82082fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82082fc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083058 @ 82083058 ==== */

void FUN_82083058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820830e0 @ 820830e0 ==== */

void FUN_820830e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820831f0 @ 820831f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820831f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083220 @ 82083220 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083220(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820832e0 @ 820832e0 ==== */

void FUN_820832e0(void)

{
  DAT_820cab60 = &LAB_82081488;
  return;
}


/* ==== FUN_820832f8 @ 820832f8 ==== */

void FUN_820832f8(undefined4 param_1)

{
  DAT_820cab64 = param_1;
  return;
}


/* ==== FUN_82083320 @ 82083320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083320(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820833c8 @ 820833c8 ==== */

void FUN_820833c8(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_820833f0 @ 820833f0 ==== */

void FUN_820833f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82083638 @ 82083638 ==== */

void FUN_82083638(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820837c4 @ 820837c4 ==== */

void FUN_820837c4(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_820837f0 @ 820837f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820837f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083818 @ 82083818 ==== */

void FUN_82083818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82083900 @ 82083900 ==== */

void FUN_82083900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82083a28 @ 82083a28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083a28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083a60 @ 82083a60 ==== */

undefined4 FUN_82083a60(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_82081d60();
    *puVar1 = 0x16;
    FUN_8207c760();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_82083aa0 @ 82083aa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083aa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083b08 @ 82083b08 ==== */

void FUN_82083b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82083bc8 @ 82083bc8 ==== */

void FUN_82083bc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82083d0c @ 82083d0c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083d0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083ea8 @ 82083ea8 ==== */

void FUN_82083ea8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82084058 @ 82084058 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x820845f4) */

void FUN_82084058(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  char cStack_80;
  uint uStack_7c;
  
  lVar15 = FUN_8207c480();
  uVar5 = (uint)((ulonglong)lVar15 >> 0x20);
  pbVar4 = (byte *)lVar15;
  if (uVar5 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_82081d98();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_82081d60();
    uVar6 = 9;
LAB_82084094:
    *puVar1 = uVar6;
    halt_baddata();
  }
  if ((-1 < lVar15) && (uVar5 < DAT_820cc2f0)) {
    iVar3 = ((int)uVar5 >> 5) * 4;
    iVar9 = (uVar5 & 0x1f) * 0x48;
    bVar7 = *(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 4);
    if ((bVar7 & 1) != 0) {
      if (param_3 < 0x80000000) {
        iVar10 = 0;
        if (param_3 == 0) {
          halt_baddata();
        }
        if ((bVar7 & 2) != 0) {
          halt_baddata();
        }
        if (pbVar4 != (byte *)0x0) {
          cVar8 = *(char *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x28) >> 1;
          if (cVar8 != '\x01') {
            uVar5 = param_3;
            if (cVar8 == '\x02') {
              if ((~param_3 & 1) == 0) goto LAB_82084158;
              uVar5 = param_3 & 0xfffffffe;
            }
            uVar12 = uVar5;
            if ((((*(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 4) & 0x48) != 0) &&
                (bVar7 = *(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 5), bVar7 != 10)) &&
               (uVar5 != 0)) {
              *pbVar4 = bVar7;
              iVar10 = 1;
              *(undefined1 *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 5) = 10;
              uVar12 = uVar5 - 1;
              if (((cVar8 != '\0') &&
                  (bVar7 = *(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x29), bVar7 != 10))
                 && (uVar12 != 0)) {
                pbVar4[1] = bVar7;
                iVar10 = 2;
                *(undefined1 *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x29) = 10;
                uVar12 = uVar5 - 2;
                if (((cVar8 == '\x01') &&
                    (bVar7 = *(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x2a), bVar7 != 10)
                    ) && (uVar12 != 0)) {
                  pbVar4[2] = bVar7;
                  iVar10 = 3;
                  *(undefined1 *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x2a) = 10;
                  uVar12 = uVar5 - 3;
                }
              }
            }
            iVar2 = FUN_8203bc78();
            if (((iVar2 == 0) || ((int)uStack_7c < 0)) || (uVar12 < uStack_7c)) {
              iVar3 = thunk_FUN_8203cd58();
              if (iVar3 == 5) {
                puVar1 = (undefined4 *)FUN_82081d60();
                *puVar1 = 9;
                puVar1 = (undefined4 *)FUN_82081d98();
                uVar6 = 5;
LAB_82084524:
                *puVar1 = uVar6;
                halt_baddata();
              }
              if (iVar3 == 0x6d) {
                halt_baddata();
              }
            }
            else {
              iVar2 = iVar9 + *(int *)(&DAT_820cc300 + iVar3);
              if ((*(byte *)(iVar2 + 4) & 0x80) == 0) {
                halt_baddata();
              }
              if ((uStack_7c == 0) || (*pbVar4 != 10)) {
                bVar7 = *(byte *)(iVar2 + 4) & 0xfb;
              }
              else {
                bVar7 = *(byte *)(iVar2 + 4) | 4;
              }
              *(byte *)(iVar2 + 4) = bVar7;
              pbVar14 = pbVar4;
              pbVar13 = pbVar4;
              while (pbVar14 < pbVar4 + uStack_7c + iVar10) {
                bVar7 = *pbVar14;
                if (bVar7 == 0x1a) {
                  iVar10 = iVar9 + *(int *)(&DAT_820cc300 + iVar3);
                  if ((*(byte *)(iVar10 + 4) & 0x40) == 0) {
                    *(byte *)(iVar10 + 4) = *(byte *)(iVar10 + 4) | 2;
                  }
                  else {
                    *pbVar13 = 0x1a;
                    pbVar13 = pbVar13 + 1;
                  }
                  break;
                }
                if (bVar7 != 0xd) {
                  *pbVar13 = bVar7;
                  pbVar11 = pbVar14 + 1;
                  goto LAB_82084470;
                }
                if (pbVar14 < pbVar4 + uStack_7c + iVar10 + -1) {
                  pbVar11 = pbVar14 + 1;
                  if (pbVar14[1] == 10) {
                    *pbVar13 = 10;
                    pbVar11 = pbVar14 + 2;
                  }
                  else {
                    *pbVar13 = 0xd;
                  }
                  goto LAB_82084470;
                }
                pbVar11 = pbVar14 + 1;
                iVar2 = FUN_8203bc78();
                if (((iVar2 == 0) && (iVar2 = thunk_FUN_8203cd58(), iVar2 != 0)) || (uStack_7c == 0)
                   ) goto LAB_8208446c;
                if ((*(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 4) & 0x48) != 0) {
                  if (cStack_80 != '\n') {
                    *pbVar13 = 0xd;
                    *(char *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 5) = cStack_80;
                    goto LAB_82084470;
                  }
LAB_8208441c:
                  *pbVar13 = 10;
                  goto LAB_82084470;
                }
                if ((pbVar13 == pbVar4) && (cStack_80 == '\n')) goto LAB_8208441c;
                FUN_82088488();
                pbVar14 = pbVar11;
                if (cStack_80 != '\n') {
LAB_8208446c:
                  *pbVar13 = 0xd;
LAB_82084470:
                  pbVar13 = pbVar13 + 1;
                  pbVar14 = pbVar11;
                }
              }
              if (cVar8 != '\x01') {
                halt_baddata();
              }
              if (pbVar13 == pbVar4) {
                halt_baddata();
              }
              pbVar14 = pbVar13 + -1;
              uVar5 = (uint)*pbVar14;
              if ((*pbVar14 & 0x80) != 0) {
                iVar10 = 1;
                cVar8 = *(char *)(uVar5 + 0x820c5d50);
                while (((iVar2 = (int)cVar8, iVar2 == 0 && (iVar10 < 5)) && (pbVar4 <= pbVar14))) {
                  pbVar14 = pbVar14 + -1;
                  uVar5 = (uint)*pbVar14;
                  iVar10 = iVar10 + 1;
                  cVar8 = *(char *)(uVar5 + 0x820c5d50);
                }
                if (iVar2 == 0) {
                  puVar1 = (undefined4 *)FUN_82081d60();
                  uVar6 = 0x2a;
                  goto LAB_82084524;
                }
                if (iVar2 + 1 == iVar10) {
                  pbVar13 = pbVar14 + iVar10;
                }
                else {
                  if ((*(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 4) & 0x48) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  *(char *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 5) = (char)uVar5;
                  pbVar13 = pbVar14 + 1;
                  if (1 < iVar10) {
                    bVar7 = *pbVar13;
                    pbVar13 = pbVar14 + 2;
                    *(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x29) = bVar7;
                  }
                  if (iVar10 == 3) {
                    bVar7 = *pbVar13;
                    pbVar13 = pbVar13 + 1;
                    *(byte *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x2a) = bVar7;
                  }
                  pbVar13 = pbVar13 + -iVar10;
                }
              }
              iVar10 = FUN_82092030(0xfde9,0,pbVar4,(int)pbVar13 - (int)pbVar4,pbVar4,param_3 >> 1);
              if (iVar10 != 0) {
                *(uint *)(iVar9 + *(int *)(&DAT_820cc300 + iVar3) + 0x38) =
                     (uint)((int)pbVar13 - (int)pbVar4 != iVar10);
                halt_baddata();
              }
              thunk_FUN_8203cd58();
            }
            FUN_82081dd0();
            halt_baddata();
          }
          if ((~param_3 & 1) != 0) {
            iVar3 = FUN_8207ceb0();
            if (iVar3 != 0) {
              FUN_82088488();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            puVar1 = (undefined4 *)FUN_82081d60();
            *puVar1 = 0xc;
            puVar1 = (undefined4 *)FUN_82081d98();
            uVar6 = 8;
            goto LAB_82084094;
          }
        }
LAB_82084158:
        puVar1 = (undefined4 *)FUN_82081d98();
        *puVar1 = 0;
      }
      else {
        puVar1 = (undefined4 *)FUN_82081d98();
        *puVar1 = 0;
      }
      puVar1 = (undefined4 *)FUN_82081d60();
      uVar6 = 0x16;
      goto LAB_820840d0;
    }
  }
  puVar1 = (undefined4 *)FUN_82081d98();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_82081d60();
  uVar6 = 9;
LAB_820840d0:
  *puVar1 = uVar6;
  FUN_8207c760();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82084678 @ 82084678 ==== */

void FUN_82084678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820847e8 @ 820847e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820847e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82084820 @ 82084820 ==== */

void FUN_82084820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820848d0 @ 820848d0 ==== */

void FUN_820848d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82084b18 @ 82084b18 ==== */

void FUN_82084b18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82084c5c @ 82084c5c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82084c5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82084ca0 @ 82084ca0 ==== */

void FUN_82084ca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82084d60 @ 82084d60 ==== */

void FUN_82084d60(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_82084d88 @ 82084d88 ==== */

void FUN_82084d88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82084e28 @ 82084e28 ==== */

void FUN_82084e28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82086080 @ 82086080 ==== */

void FUN_82086080(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820861b8 @ 820861b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820861b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820861f0 @ 820861f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820861f0(void)

{
  int iVar1;
  
  iVar1 = FUN_82089060();
  if (iVar1 != 0) {
    FUN_82089078();
  }
  if ((DAT_820c5e50 & 2) != 0) {
    FUN_8207c798();
  }
  FUN_8207da30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086240 @ 82086240 ==== */

void FUN_82086240(uint param_1,uint param_2)

{
  DAT_820c5e50 = DAT_820c5e50 & ~param_2 | param_1 & param_2;
  return;
}


/* ==== FUN_82086260 @ 82086260 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_82086260(undefined8 param_1,undefined8 param_2)

{
  uint uStack00000010;
  uint uStack00000018;
  
  uStack00000018 = (uint)((ulonglong)param_2 >> 0x20);
  uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
  return CONCAT44(uStack00000010 & 0x7fffffff | uStack00000018 & 0x80000000,(int)param_1);
}


/* ==== FUN_82086298 @ 82086298 ==== */

ushort FUN_82086298(int param_1,ushort param_2)

{
  if ((-2 < param_1) && (param_1 < 0x100)) {
    return *(ushort *)(*(int *)(DAT_820c5bd8 + 200) + param_1 * 2) & param_2;
  }
  return 0;
}


/* ==== FUN_820862d0 @ 820862d0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82086500) */
/* WARNING: Removing unreachable block (ram,0x82086510) */
/* WARNING: Removing unreachable block (ram,0x82086518) */
/* WARNING: Removing unreachable block (ram,0x820864ec) */
/* WARNING: Removing unreachable block (ram,0x82086bc4) */
/* WARNING: Removing unreachable block (ram,0x82086708) */
/* WARNING: Removing unreachable block (ram,0x820864f8) */
/* WARNING: Removing unreachable block (ram,0x82086524) */
/* WARNING: Removing unreachable block (ram,0x82086bb0) */
/* WARNING: Removing unreachable block (ram,0x8208652c) */
/* WARNING: Removing unreachable block (ram,0x82086790) */
/* WARNING: Removing unreachable block (ram,0x82086784) */
/* WARNING: Removing unreachable block (ram,0x82086798) */
/* WARNING: Removing unreachable block (ram,0x820867b0) */
/* WARNING: Removing unreachable block (ram,0x820867b4) */
/* WARNING: Removing unreachable block (ram,0x820867c0) */
/* WARNING: Removing unreachable block (ram,0x820867c4) */
/* WARNING: Removing unreachable block (ram,0x820867cc) */
/* WARNING: Removing unreachable block (ram,0x820867d0) */
/* WARNING: Removing unreachable block (ram,0x82086bdc) */
/* WARNING: Removing unreachable block (ram,0x820867d8) */
/* WARNING: Removing unreachable block (ram,0x82086bf4) */
/* WARNING: Removing unreachable block (ram,0x820867e0) */
/* WARNING: Removing unreachable block (ram,0x820867f8) */
/* WARNING: Removing unreachable block (ram,0x820867fc) */
/* WARNING: Removing unreachable block (ram,0x8208680c) */
/* WARNING: Removing unreachable block (ram,0x82086828) */
/* WARNING: Removing unreachable block (ram,0x8208683c) */
/* WARNING: Removing unreachable block (ram,0x8208684c) */
/* WARNING: Removing unreachable block (ram,0x82086860) */
/* WARNING: Removing unreachable block (ram,0x8208687c) */
/* WARNING: Removing unreachable block (ram,0x820868bc) */
/* WARNING: Removing unreachable block (ram,0x820868c4) */
/* WARNING: Removing unreachable block (ram,0x820868d0) */
/* WARNING: Removing unreachable block (ram,0x820868e0) */
/* WARNING: Removing unreachable block (ram,0x820868e8) */
/* WARNING: Removing unreachable block (ram,0x820868fc) */
/* WARNING: Removing unreachable block (ram,0x82086908) */
/* WARNING: Removing unreachable block (ram,0x82086914) */
/* WARNING: Removing unreachable block (ram,0x8208691c) */
/* WARNING: Removing unreachable block (ram,0x82086924) */
/* WARNING: Removing unreachable block (ram,0x8208693c) */
/* WARNING: Removing unreachable block (ram,0x82086948) */
/* WARNING: Removing unreachable block (ram,0x82086954) */
/* WARNING: Removing unreachable block (ram,0x82086960) */
/* WARNING: Removing unreachable block (ram,0x8208696c) */
/* WARNING: Removing unreachable block (ram,0x8208697c) */
/* WARNING: Removing unreachable block (ram,0x8208699c) */
/* WARNING: Removing unreachable block (ram,0x820869a4) */
/* WARNING: Removing unreachable block (ram,0x820869a8) */
/* WARNING: Removing unreachable block (ram,0x820869b4) */
/* WARNING: Removing unreachable block (ram,0x820869c0) */
/* WARNING: Removing unreachable block (ram,0x820869cc) */
/* WARNING: Removing unreachable block (ram,0x820869dc) */
/* WARNING: Removing unreachable block (ram,0x820869ec) */
/* WARNING: Removing unreachable block (ram,0x820869f8) */
/* WARNING: Removing unreachable block (ram,0x82086a3c) */
/* WARNING: Removing unreachable block (ram,0x82086a44) */
/* WARNING: Removing unreachable block (ram,0x82086a58) */
/* WARNING: Removing unreachable block (ram,0x82086a60) */
/* WARNING: Removing unreachable block (ram,0x82086a6c) */
/* WARNING: Removing unreachable block (ram,0x82086a70) */
/* WARNING: Removing unreachable block (ram,0x82086aa4) */
/* WARNING: Removing unreachable block (ram,0x82086ab4) */
/* WARNING: Removing unreachable block (ram,0x82086ac4) */
/* WARNING: Removing unreachable block (ram,0x82086ad0) */
/* WARNING: Removing unreachable block (ram,0x82086ae4) */
/* WARNING: Removing unreachable block (ram,0x82086b3c) */
/* WARNING: Removing unreachable block (ram,0x82086af0) */
/* WARNING: Removing unreachable block (ram,0x82086b30) */
/* WARNING: Removing unreachable block (ram,0x82086b00) */
/* WARNING: Removing unreachable block (ram,0x82086b24) */
/* WARNING: Removing unreachable block (ram,0x82086b10) */
/* WARNING: Removing unreachable block (ram,0x82086b44) */
/* WARNING: Removing unreachable block (ram,0x82086b50) */
/* WARNING: Removing unreachable block (ram,0x82086b7c) */
/* WARNING: Removing unreachable block (ram,0x82086b88) */
/* WARNING: Removing unreachable block (ram,0x82086a04) */
/* WARNING: Removing unreachable block (ram,0x820868d8) */
/* WARNING: Removing unreachable block (ram,0x82086b8c) */
/* WARNING: Removing unreachable block (ram,0x82086b94) */
/* WARNING: Removing unreachable block (ram,0x82086b9c) */
/* WARNING: Removing unreachable block (ram,0x82086c08) */

void FUN_820862d0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r10;
  
  FUN_8207c484();
  if (in_r10 != 0) {
    for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x820863a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)UNK_82012130 * 4 + -0x7df7ba54))();
    return;
  }
  puVar2 = (undefined4 *)FUN_82081d60();
  *puVar2 = 0x16;
  FUN_8207c760();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086c38 @ 82086c38 ==== */

void FUN_82086c38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82086ddc @ 82086ddc ==== */

void FUN_82086ddc(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_82086e00 @ 82086e00 ==== */

void FUN_82086e00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82087078 @ 82087078 ==== */

void FUN_82087078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82087360 @ 82087360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820873d4 @ 820873d4 ==== */

void FUN_820873d4(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_82087400 @ 82087400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208745c @ 8208745c ==== */

void FUN_8208745c(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_82087480 @ 82087480 ==== */

void FUN_82087480(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820876f8 @ 820876f8 ==== */

undefined4 FUN_820876f8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82081d60();
    *puVar1 = 0x16;
    FUN_8207c760();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = uRam820c5e74;
  }
  return uVar2;
}


/* ==== FUN_82087748 @ 82087748 ==== */

undefined4 FUN_82087748(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82081d60();
    *puVar1 = 0x16;
    FUN_8207c760();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_820c5e78;
  }
  return uVar2;
}


/* ==== FUN_82087798 @ 82087798 ==== */

undefined4 FUN_82087798(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82081d60();
    *puVar1 = 0x16;
    FUN_8207c760();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_820c5e70;
  }
  return uVar2;
}


/* ==== FUN_820877e8 @ 820877e8 ==== */

undefined4 FUN_820877e8(void)

{
  return 0x820c5e74;
}


/* ==== FUN_820877f8 @ 820877f8 ==== */

undefined4 * FUN_820877f8(void)

{
  return &DAT_820c5e78;
}


/* ==== FUN_82087808 @ 82087808 ==== */

undefined4 * FUN_82087808(void)

{
  return &DAT_820c5e70;
}


/* ==== FUN_82087818 @ 82087818 ==== */

undefined4 FUN_82087818(void)

{
  return 0x820c5f00;
}


/* ==== FUN_82087828 @ 82087828 ==== */

undefined4 FUN_82087828(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_820cc2f0)) {
    iVar2 = (param_1 & 0x1f) * 0x48;
    if (*(int *)(*(int *)(&DAT_820cc300 + ((int)param_1 >> 5) * 4) + iVar2) == -1) {
      *(undefined4 *)(*(int *)(&DAT_820cc300 + ((int)param_1 >> 5) * 4) + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_82081d60();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_82081d98();
  *puVar1 = 0;
  return 0xffffffff;
}


/* ==== FUN_820878b0 @ 820878b0 ==== */

undefined4 FUN_820878b0(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((((int)param_1 < 0) || (DAT_820cc2f0 <= param_1)) ||
      (piVar4 = (int *)(*(int *)(&DAT_820cc300 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48)
      , (*(byte *)(piVar4 + 1) & 1) == 0)) || (*piVar4 == -1)) {
    puVar2 = (undefined4 *)FUN_82081d60();
    *puVar2 = 9;
    piVar4 = (int *)FUN_82081d98();
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


/* ==== FUN_82087948 @ 82087948 ==== */

undefined4 FUN_82087948(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_82081d98();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_82081d60();
    uVar2 = 0xffffffff;
    *puVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (DAT_820cc2f0 <= param_1)) ||
          (puVar1 = (undefined4 *)
                    (*(int *)(&DAT_820cc300 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48),
          (*(byte *)(puVar1 + 1) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_82081d98();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_82081d60();
    *puVar1 = 9;
    FUN_8207c760();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* ==== FUN_82087a08 @ 82087a08 ==== */

void FUN_82087a08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82087ad0 @ 82087ad0 ==== */

undefined4 FUN_82087ad0(void)

{
  int unaff_r31;
  
  FUN_82082fa0();
  return *(undefined4 *)(unaff_r31 + 0x94);
}


/* ==== FUN_82087b08 @ 82087b08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087b08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087b38 @ 82087b38 ==== */

void FUN_82087b38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82087d50 @ 82087d50 ==== */

void FUN_82087d50(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_82087d74 @ 82087d74 ==== */

void FUN_82087d74(void)

{
  FUN_82082fa0();
  return;
}


/* ==== FUN_82087db8 @ 82087db8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087db8(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint in_r6;
  int in_r7;
  byte bVar7;
  undefined8 uVar8;
  char acStack_70 [4];
  undefined4 auStack_6c [27];
  
  uVar8 = FUN_8207c488();
  puVar6 = (uint *)uVar8;
  auStack_6c[0] = 0;
  bVar7 = 0;
  iVar1 = FUN_8208b238(auStack_6c);
  if (iVar1 != 0) {
    FUN_8207c838(0,0,0,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_r6 & 0x8000) == 0) {
    bVar7 = 0x80;
  }
  uVar3 = in_r6 & 3;
  if (uVar3 == 0) {
    iVar1 = -0x80000000;
  }
  else if (uVar3 == 1) {
    iVar1 = 0x40000000;
  }
  else {
    if (2 < uVar3) goto LAB_82087e20;
    iVar1 = -0x40000000;
  }
  if ((((in_r7 != 0x10) && (in_r7 != 0x20)) && (in_r7 != 0x30)) &&
     ((in_r7 != 0x40 && (in_r7 != 0x80)))) {
LAB_82087e20:
    puVar2 = (undefined4 *)FUN_82081d98();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_82081d60();
    *puVar2 = 0x16;
    FUN_8207c760();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in_r6 & 0x700;
  if (uVar3 < 0x401) {
    if ((((uVar3 != 0x400) && (uVar3 != 0)) && (uVar3 != 0x100)) &&
       ((uVar3 != 0x200 && (uVar3 != 0x300)))) goto LAB_82087e20;
  }
  else if (((uVar3 != 0x500) && (uVar3 != 0x600)) && (uVar3 != 0x700)) goto LAB_82087e20;
  uVar3 = FUN_82087b38();
  *puVar6 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar2 = (undefined4 *)FUN_82081d98();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_82081d60();
    *puVar2 = 0x18;
    FUN_82081d60();
    halt_baddata();
  }
  *(undefined4 *)((ulonglong)uVar8 >> 0x20) = 1;
  iVar4 = FUN_8203ba80();
  if (iVar4 == -1) {
    if ((iVar1 == -0x40000000) && ((in_r6 & 1) != 0)) {
      iVar1 = 0x40000000;
      iVar4 = FUN_8203ba80();
      if (iVar4 != -1) goto LAB_8208807c;
    }
    iVar1 = *(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
    thunk_FUN_8203cd58();
    FUN_82081dd0();
    goto LAB_82088070;
  }
LAB_8208807c:
  FUN_82087828(*puVar6,iVar4);
  *(byte *)(*(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48 + 4) =
       bVar7 | 1;
  iVar4 = *(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  if ((((int)(char)(bVar7 | 1) & 0x80U) != 0) && ((in_r6 & 2) != 0)) {
    iVar4 = FUN_82083b08();
    if (iVar4 == -1) {
      piVar5 = (int *)FUN_82081d98();
      if (*piVar5 != 0x83) {
LAB_82088128:
        FUN_82083818();
        goto LAB_82088070;
      }
    }
    else {
      acStack_70[0] = '\0';
      iVar4 = FUN_82084058(*puVar6,acStack_70,1);
      if ((iVar4 == 0) && (acStack_70[0] == '\x1a')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = FUN_82083b08();
      if (iVar4 == -1) goto LAB_82088128;
    }
  }
  iVar4 = *(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  iVar4 = *(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 0xfe;
  if ((in_r6 & 8) != 0) {
    iVar4 = *(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x20;
  }
  if (iVar1 != -0x40000000) {
    halt_baddata();
  }
  if ((in_r6 & 1) == 0) {
    halt_baddata();
  }
  FUN_8203ba38();
  iVar1 = FUN_8203ba80();
  if (iVar1 != -1) {
    *(int *)(*(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48) = iVar1;
    halt_baddata();
  }
  thunk_FUN_8203cd58();
  FUN_82081dd0();
  iVar1 = *(int *)(&DAT_820cc300 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
  FUN_820878b0(*puVar6);
LAB_82088070:
  FUN_82081d60();
  halt_baddata();
}


/* ==== FUN_820882e0 @ 820882e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820882e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820883dc @ 820883dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820883dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82088468 @ 82088468 ==== */

void FUN_82088468(void)

{
  FUN_820882e0();
  return;
}


/* ==== FUN_82088488 @ 82088488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82088558 @ 82088558 ==== */

void FUN_82088558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820886a0 @ 820886a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820886a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820886d8 @ 820886d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820886d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82088780 @ 82088780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82088828 @ 82088828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088828(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82088988 @ 82088988 ==== */

void FUN_82088988(ushort *param_1,uint *param_2)

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


/* ==== FUN_82088a68 @ 82088a68 ==== */

void FUN_82088a68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82088b10 @ 82088b10 ==== */

void FUN_82088b10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82088bd8 @ 82088bd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088bd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82088c60 @ 82088c60 ==== */

bool FUN_82088c60(void)

{
  return (uRam820c65bc | 1) == uRam820cac2c;
}


/* ==== FUN_82088d80 @ 82088d80 ==== */

undefined4 FUN_82088d80(undefined4 *param_1,uint *param_2,uint param_3,ushort param_4)

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
      puVar1 = (undefined4 *)FUN_82081d60();
      *puVar1 = 0x16;
      FUN_8207c760();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_8207c6b0(param_2,0,param_3);
      }
      puVar1 = (undefined4 *)FUN_82081d60();
      *puVar1 = 0x2a;
      puVar1 = (undefined4 *)FUN_82081d60();
      return *puVar1;
    }
    if (param_2 != (uint *)0x0) {
      if (param_3 == 0) {
        puVar1 = (undefined4 *)FUN_82081d60();
        *puVar1 = 0x22;
        FUN_8207c760();
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


/* ==== FUN_82088d88 @ 82088d88 ==== */

ushort FUN_82088d88(uint param_1)

{
  return *(ushort *)((param_1 & 0xff) * 2 + *(int *)(DAT_820c5bd8 + 200)) & 0x8000;
}


/* ==== FUN_82088dd8 @ 82088dd8 ==== */

void FUN_82088dd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82088e70 @ 82088e70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088e70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089018 @ 82089018 ==== */

undefined4 FUN_82089018(ushort *param_1,byte *param_2,int param_3)

{
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    if (*param_2 != 0) {
      if (param_1 != (ushort *)0x0) {
        *param_1 = (ushort)*param_2;
      }
      return 1;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}


/* ==== FUN_82089060 @ 82089060 ==== */

undefined4 FUN_82089060(void)

{
  return DAT_820cac9c;
}


/* ==== FUN_82089078 @ 82089078 ==== */

void FUN_82089078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82089320 @ 82089320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089320(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089360 @ 82089360 ==== */

void FUN_82089360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82089538 @ 82089538 ==== */

void FUN_82089538(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82089940 @ 82089940 ==== */

void FUN_82089940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82089b98 @ 82089b98 ==== */

void FUN_82089b98(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_82081d60();
    uVar2 = 0x21;
  }
  else {
    if (param_1 < 2) {
      return;
    }
    if (3 < param_1) {
      return;
    }
    puVar1 = (undefined4 *)FUN_82081d60();
    uVar2 = 0x22;
  }
  *puVar1 = uVar2;
  return;
}


/* ==== FUN_82089be0 @ 82089be0 ==== */

int FUN_82089be0(uint param_1)

{
  if ((param_1 & 0x20) != 0) {
    return 5;
  }
  if ((param_1 & 8) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  if ((param_1 & 1) != 0) {
    return 3;
  }
  return (param_1 & 2) << 1;
}


/* ==== FUN_82089c28 @ 82089c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089c28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089d30 @ 82089d30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089d30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089db0 @ 82089db0 ==== */

void FUN_82089db0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82089ea0 @ 82089ea0 ==== */

uint FUN_82089ea0(void)

{
  byte in_fp_fx;
  byte in_fp_fex;
  byte in_fp_vx;
  byte in_fp_ox;
  byte in_fp_ux;
  byte in_fp_zx;
  byte in_fp_xx;
  byte in_fp_vxsnan;
  byte in_fp_vxisi;
  byte in_fp_vxidi;
  byte in_fp_vxzdz;
  byte in_fp_vximz;
  byte in_fp_vxvc;
  byte in_fp_fr;
  byte in_fp_fi;
  byte in_fp_c;
  byte in_fp_cc0;
  byte in_fp_cc1;
  byte in_fp_cc2;
  byte in_fp_cc3;
  byte in_fp_reserve1;
  byte in_fp_vxsoft;
  byte in_fp_vxsqrt;
  byte in_fp_vxcvi;
  byte in_fp_ve;
  byte in_fp_oe;
  byte in_fp_ue;
  byte in_fp_ze;
  byte in_fp_xe;
  byte in_fp_ni;
  byte in_fp_rn0;
  byte in_fp_rn1;
  
  return (in_fp_rn1 & 1 | (uint)in_fp_fx << 0x1f | (in_fp_fex & 1) << 0x1e | (in_fp_vx & 1) << 0x1d
          | (in_fp_ox & 1) << 0x1c | (in_fp_ux & 1) << 0x1b | (in_fp_zx & 1) << 0x1a |
          (in_fp_xx & 1) << 0x19 | (in_fp_vxsnan & 1) << 0x18 | (in_fp_vxisi & 1) << 0x17 |
          (in_fp_vxidi & 1) << 0x16 | (in_fp_vxzdz & 1) << 0x15 | (in_fp_vximz & 1) << 0x14 |
          (in_fp_vxvc & 1) << 0x13 | (in_fp_fr & 1) << 0x12 | (in_fp_fi & 1) << 0x11 |
          (in_fp_c & 1) << 0x10 | (in_fp_cc0 & 1) << 0xf | (in_fp_cc1 & 1) << 0xe |
          (in_fp_cc2 & 1) << 0xd | (in_fp_cc3 & 1) << 0xc | (in_fp_reserve1 & 1) << 0xb |
          (in_fp_vxsoft & 1) << 10 | (in_fp_vxsqrt & 1) << 9 | (in_fp_vxcvi & 1) << 8 |
          (in_fp_ve & 1) << 7 | (in_fp_oe & 1) << 6 | (in_fp_ue & 1) << 5 | (in_fp_ze & 1) << 4 |
          (in_fp_xe & 1) << 3 | (in_fp_ni & 1) << 2 | (in_fp_rn0 & 1) << 1) ^ 0xf8;
}


/* ==== FUN_82089ed0 @ 82089ed0 ==== */

uint FUN_82089ed0(void)

{
  byte in_fp_fx;
  byte in_fp_fex;
  byte in_fp_vx;
  byte in_fp_ox;
  byte in_fp_ux;
  byte in_fp_zx;
  byte in_fp_xx;
  byte in_fp_vxsnan;
  byte in_fp_vxisi;
  byte in_fp_vxidi;
  byte in_fp_vxzdz;
  byte in_fp_vximz;
  byte in_fp_vxvc;
  byte in_fp_fr;
  byte in_fp_fi;
  byte in_fp_c;
  byte in_fp_cc0;
  byte in_fp_cc1;
  byte in_fp_cc2;
  byte in_fp_cc3;
  byte in_fp_reserve1;
  byte in_fp_vxsoft;
  byte in_fp_vxsqrt;
  byte in_fp_vxcvi;
  byte in_fp_ve;
  byte in_fp_oe;
  byte in_fp_ue;
  byte in_fp_ze;
  byte in_fp_xe;
  byte in_fp_ni;
  byte in_fp_rn0;
  byte in_fp_rn1;
  
  return in_fp_rn1 & 1 | (uint)in_fp_fx << 0x1f | (in_fp_fex & 1) << 0x1e | (in_fp_vx & 1) << 0x1d |
         (in_fp_ox & 1) << 0x1c | (in_fp_ux & 1) << 0x1b | (in_fp_zx & 1) << 0x1a |
         (in_fp_xx & 1) << 0x19 | (in_fp_vxsnan & 1) << 0x18 | (in_fp_vxisi & 1) << 0x17 |
         (in_fp_vxidi & 1) << 0x16 | (in_fp_vxzdz & 1) << 0x15 | (in_fp_vximz & 1) << 0x14 |
         (in_fp_vxvc & 1) << 0x13 | (in_fp_fr & 1) << 0x12 | (in_fp_fi & 1) << 0x11 |
         (in_fp_c & 1) << 0x10 | (in_fp_cc0 & 1) << 0xf | (in_fp_cc1 & 1) << 0xe |
         (in_fp_cc2 & 1) << 0xd | (in_fp_cc3 & 1) << 0xc | (in_fp_reserve1 & 1) << 0xb |
         (in_fp_vxsoft & 1) << 10 | (in_fp_vxsqrt & 1) << 9 | (in_fp_vxcvi & 1) << 8 |
         (in_fp_ve & 1) << 7 | (in_fp_oe & 1) << 6 | (in_fp_ue & 1) << 5 | (in_fp_ze & 1) << 4 |
         (in_fp_xe & 1) << 3 | (in_fp_ni & 1) << 2 | (in_fp_rn0 & 1) << 1;
}


/* ==== FUN_82089f04 @ 82089f04 ==== */

ulonglong FUN_82089f04(uint param_1)

{
  byte in_fp_fx;
  byte in_fp_fex;
  byte in_fp_vx;
  byte in_fp_ox;
  byte in_fp_ux;
  byte in_fp_zx;
  byte in_fp_xx;
  byte in_fp_vxsnan;
  byte in_fp_vxisi;
  byte in_fp_vxidi;
  byte in_fp_vxzdz;
  byte in_fp_vximz;
  byte in_fp_vxvc;
  byte in_fp_fr;
  byte in_fp_fi;
  byte in_fp_c;
  byte in_fp_cc0;
  byte in_fp_cc1;
  byte in_fp_cc2;
  byte in_fp_cc3;
  byte in_fp_reserve1;
  byte in_fp_vxsoft;
  byte in_fp_vxsqrt;
  byte in_fp_vxcvi;
  byte in_fp_ve;
  byte in_fp_oe;
  byte in_fp_ue;
  byte in_fp_ze;
  byte in_fp_xe;
  byte in_fp_ni;
  byte in_fp_rn0;
  byte in_fp_rn1;
  undefined1 in_fp_drn;
  undefined8 uStack_8;
  
  uStack_8._4_4_ =
       in_fp_rn1 & 1 | (uint)in_fp_fx << 0x1f | (in_fp_fex & 1) << 0x1e | (in_fp_vx & 1) << 0x1d |
       (in_fp_ox & 1) << 0x1c | (in_fp_ux & 1) << 0x1b | (in_fp_zx & 1) << 0x1a |
       (in_fp_xx & 1) << 0x19 | (in_fp_vxsnan & 1) << 0x18 | (in_fp_vxisi & 1) << 0x17 |
       (in_fp_vxidi & 1) << 0x16 | (in_fp_vxzdz & 1) << 0x15 | (in_fp_vximz & 1) << 0x14 |
       (in_fp_vxvc & 1) << 0x13 | (in_fp_fr & 1) << 0x12 | (in_fp_fi & 1) << 0x11 |
       (in_fp_c & 1) << 0x10 | (in_fp_cc0 & 1) << 0xf | (in_fp_cc1 & 1) << 0xe |
       (in_fp_cc2 & 1) << 0xd | (in_fp_cc3 & 1) << 0xc | (in_fp_reserve1 & 1) << 0xb |
       (in_fp_vxsoft & 1) << 10 | (in_fp_vxsqrt & 1) << 9 | (in_fp_vxcvi & 1) << 8 |
       (in_fp_ve & 1) << 7 | (in_fp_oe & 1) << 6 | (in_fp_ue & 1) << 5 | (in_fp_ze & 1) << 4 |
       (in_fp_xe & 1) << 3 | (in_fp_ni & 1) << 2 | (in_fp_rn0 & 1) << 1;
  uStack_8 = (ulonglong)CONCAT14(in_fp_drn,param_1 | uStack_8._4_4_);
  return uStack_8;
}


/* ==== FUN_82089f48 @ 82089f48 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_82089f48(void)

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
  
  uVar18 = FUN_8207c484();
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
    uVar13 = uRam820c62d8 - 1;
    iVar5 = (int)uRam820c62d8 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam820c62d8 < 0 && (uRam820c62d8 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam820c62d8 +
                    (iVar5 + (uint)((int)uRam820c62d8 < 0 && (uRam820c62d8 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_8208a090;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_8208a090:
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
    if (iVar16 < (int)(iRam820c62d4 - uRam820c62d8)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam820c62d4 < iVar16) {
        iVar15 = (int)uRam820c62dc >> 5;
        if (iVar16 < iRam820c62d0) {
          iVar5 = iVar15 + (uint)((int)uRam820c62dc < 0 && (uRam820c62dc & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam820c62e4 + iVar16;
          uVar13 = uRam820c62dc +
                   (iVar15 + (uint)((int)uRam820c62dc < 0 && (uRam820c62dc & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam820c62dc < 0 && (uRam820c62dc & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam820c62dc +
                   (iVar15 + (uint)((int)uRam820c62dc < 0 && (uRam820c62dc & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam820c62e4 + iRam820c62d0;
        }
      }
      else {
        uVar14 = iRam820c62d4 - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam820c62d8 < 0 && (uRam820c62d8 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam820c62d8 +
                       (iVar5 + (uint)((int)uRam820c62d8 < 0 && (uRam820c62d8 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_8208a2fc;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_8208a2fc:
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
        uVar13 = uRam820c62dc + 1;
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
  uVar9 = 0x1f - uRam820c62dc;
  if (iRam820c62e0 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam820c62e0 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208a660 @ 8208a660 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_8208a660(void)

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
  
  uVar18 = FUN_8207c484();
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
    uVar13 = uRam820c62f0 - 1;
    iVar5 = (int)uRam820c62f0 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam820c62f0 < 0 && (uRam820c62f0 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam820c62f0 +
                    (iVar5 + (uint)((int)uRam820c62f0 < 0 && (uRam820c62f0 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_8208a7a8;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_8208a7a8:
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
    if (iVar16 < (int)(iRam820c62ec - uRam820c62f0)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam820c62ec < iVar16) {
        iVar15 = (int)uRam820c62f4 >> 5;
        if (iVar16 < iRam820c62e8) {
          iVar5 = iVar15 + (uint)((int)uRam820c62f4 < 0 && (uRam820c62f4 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam820c62fc + iVar16;
          uVar13 = uRam820c62f4 +
                   (iVar15 + (uint)((int)uRam820c62f4 < 0 && (uRam820c62f4 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam820c62f4 < 0 && (uRam820c62f4 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam820c62f4 +
                   (iVar15 + (uint)((int)uRam820c62f4 < 0 && (uRam820c62f4 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam820c62fc + iRam820c62e8;
        }
      }
      else {
        uVar14 = iRam820c62ec - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam820c62f0 < 0 && (uRam820c62f0 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam820c62f0 +
                       (iVar5 + (uint)((int)uRam820c62f0 < 0 && (uRam820c62f0 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_8208aa14;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_8208aa14:
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
        uVar13 = uRam820c62f4 + 1;
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
  uVar9 = 0x1f - uRam820c62f4;
  if (iRam820c62f8 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam820c62f8 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208ad78 @ 8208ad78 ==== */

void FUN_8208ad78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8208b010 @ 8208b010 ==== */

void FUN_8208b010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8208b1a8 @ 8208b1a8 ==== */

undefined4 FUN_8208b1a8(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = ((int)param_1 >> 5) * 4;
  iVar3 = (param_1 & 0x1f) * 0x48;
  iVar4 = *(int *)(&DAT_820cc300 + iVar2) + iVar3;
  bVar1 = *(byte *)(iVar4 + 4);
  if (param_2 == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    iVar3 = *(int *)(&DAT_820cc300 + iVar2) + iVar3;
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) & 1;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  if ((bVar1 & 0x80) == 0) {
    return 0x8000;
  }
  return 0x4000;
}


/* ==== FUN_8208b238 @ 8208b238 ==== */

undefined4 FUN_8208b238(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82081d60();
    *puVar1 = 0x16;
    FUN_8207c760();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = uRam820cacac;
  }
  return uVar2;
}


/* ==== FUN_8208b288 @ 8208b288 ==== */

void FUN_8208b288(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_8208be90 @ 8208be90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208be90(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  ushort uVar6;
  undefined4 *puVar5;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  
  uVar7 = 10;
  uVar8 = 0;
  uVar15 = FUN_8207c494();
  pbVar3 = (byte *)((ulonglong)uVar15 >> 0x20);
  puVar4 = (undefined4 *)uVar15;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = pbVar3;
  }
  if ((pbVar3 == (byte *)0x0) || ((uVar7 != 0 && (((int)uVar7 < 2 || (0x24 < (int)uVar7)))))) {
    puVar4 = (undefined4 *)FUN_82081d60();
    *puVar4 = 0x16;
    FUN_8207c760();
    halt_baddata();
  }
  bVar1 = *pbVar3;
  uVar12 = 0;
  iVar9 = DAT_820c5bd8;
  pbVar2 = pbVar3;
  while( true ) {
    uVar14 = (uint)bVar1;
    pbVar13 = pbVar2 + 1;
    if (*(int *)(iVar9 + 0xac) < 2) {
      uVar6 = *(ushort *)(uVar14 * 2 + *(int *)(iVar9 + 200)) & 8;
    }
    else {
      uVar6 = FUN_82086298((uint)bVar1,8);
      iVar9 = DAT_820c5bd8;
    }
    if (uVar6 == 0) break;
    bVar1 = *pbVar13;
    pbVar2 = pbVar13;
  }
  if (bVar1 == 0x2d) {
    uVar8 = uVar8 | 2;
LAB_8208c028:
    uVar14 = (uint)*pbVar13;
    pbVar13 = pbVar2 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_8208c028;
  if ((((int)uVar7 < 0) || (uVar7 == 1)) || (0x24 < (int)uVar7)) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = pbVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar7 == 0) {
    if ((char)uVar14 != '0') {
      uVar7 = 10;
      goto LAB_8208c0c0;
    }
    if ((*pbVar13 != 0x78) && (*pbVar13 != 0x58)) {
      uVar7 = 8;
      goto LAB_8208c0c0;
    }
    uVar7 = 0x10;
  }
  else if (uVar7 != 0x10) goto LAB_8208c0c0;
  if (((char)uVar14 == '0') && ((*pbVar13 == 0x78 || (*pbVar13 == 0x58)))) {
    uVar14 = (uint)pbVar13[1];
    pbVar13 = pbVar13 + 2;
  }
LAB_8208c0c0:
  trapWord(6,uVar7,0);
  do {
    uVar6 = *(ushort *)(uVar14 * 2 + *(int *)(iVar9 + 200));
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 0x103) == 0) {
LAB_8208c154:
        pbVar13 = pbVar13 + -1;
        if ((uVar8 & 8) == 0) {
          if (puVar4 != (undefined4 *)0x0) {
            pbVar13 = pbVar3;
          }
        }
        else if (((uVar8 & 4) != 0) ||
                (((uVar8 & 1) == 0 &&
                 ((((uVar8 & 2) != 0 && (0x80000000 < uVar12)) ||
                  (((uVar8 & 2) == 0 && (0x7fffffff < uVar12)))))))) {
          puVar5 = (undefined4 *)FUN_82081d60();
          *puVar5 = 0x22;
        }
        if (puVar4 == (undefined4 *)0x0) {
          halt_baddata();
        }
        *puVar4 = pbVar13;
        halt_baddata();
      }
      iVar10 = (int)(char)uVar14;
      if ((0x60 < iVar10) && (iVar10 < 0x7b)) {
        iVar10 = iVar10 + -0x20;
      }
      uVar14 = iVar10 - 0x37;
    }
    else {
      uVar14 = (int)(char)uVar14 - 0x30;
    }
    if (uVar7 <= uVar14) goto LAB_8208c154;
    uVar11 = uVar8 | 8;
    if ((uVar12 < 0xffffffff / uVar7) ||
       ((uVar12 == 0xffffffff / uVar7 &&
        (trapWord(6,uVar7,0), uVar14 <= -((0xffffffff / uVar7) * uVar7) - 1)))) {
      uVar12 = uVar12 * uVar7 + uVar14;
    }
    else {
      uVar8 = uVar8 | 0xc;
      uVar11 = uVar8;
      if (puVar4 == (undefined4 *)0x0) goto LAB_8208c154;
    }
    uVar14 = (uint)*pbVar13;
    pbVar13 = pbVar13 + 1;
    uVar8 = uVar11;
  } while( true );
}


/* ==== FUN_8208bea0 @ 8208bea0 ==== */

uint FUN_8208bea0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 3;
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar2 = 0x300;
    }
    else if (uVar1 == 2) {
      uVar2 = 0x200;
    }
    else if (uVar1 == 3) {
      uVar2 = 0x100;
    }
  }
  if ((param_1 & 8) != 0) {
    uVar2 = uVar2 | 1;
  }
  if ((param_1 & 0x20) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((param_1 & 0x40) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((param_1 & 0x80) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2 | 0x80000;
}


/* ==== FUN_8208bf20 @ 8208bf20 ==== */

void FUN_8208bf20(void)

{
  FUN_82089ea0(0,0xfff80700);
  FUN_8208bea0();
  return;
}


/* ==== FUN_8208bf50 @ 8208bf50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208bf50(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  ushort uVar6;
  undefined4 *puVar5;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_8207c494();
  pbVar3 = (byte *)((ulonglong)uVar13 >> 0x20);
  puVar4 = (undefined4 *)uVar13;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = pbVar3;
  }
  if ((pbVar3 == (byte *)0x0) || ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3))))))
  {
    puVar4 = (undefined4 *)FUN_82081d60();
    *puVar4 = 0x16;
    FUN_8207c760();
    halt_baddata();
  }
  bVar1 = *pbVar3;
  uVar10 = 0;
  iVar7 = DAT_820c5bd8;
  pbVar2 = pbVar3;
  while( true ) {
    uVar12 = (uint)bVar1;
    pbVar11 = pbVar2 + 1;
    if (*(int *)(iVar7 + 0xac) < 2) {
      uVar6 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200)) & 8;
    }
    else {
      uVar6 = FUN_82086298((uint)bVar1,8);
      iVar7 = DAT_820c5bd8;
    }
    if (uVar6 == 0) break;
    bVar1 = *pbVar11;
    pbVar2 = pbVar11;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_8208c028:
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar2 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_8208c028;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = pbVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 == 0) {
    if ((char)uVar12 != '0') {
      param_3 = 10;
      goto LAB_8208c0c0;
    }
    if ((*pbVar11 != 0x78) && (*pbVar11 != 0x58)) {
      param_3 = 8;
      goto LAB_8208c0c0;
    }
    param_3 = 0x10;
  }
  else if (param_3 != 0x10) goto LAB_8208c0c0;
  if (((char)uVar12 == '0') && ((*pbVar11 == 0x78 || (*pbVar11 == 0x58)))) {
    uVar12 = (uint)pbVar11[1];
    pbVar11 = pbVar11 + 2;
  }
LAB_8208c0c0:
  trapWord(6,param_3,0);
  do {
    uVar6 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200));
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 0x103) == 0) {
LAB_8208c154:
        pbVar11 = pbVar11 + -1;
        if ((param_4 & 8) == 0) {
          if (puVar4 != (undefined4 *)0x0) {
            pbVar11 = pbVar3;
          }
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < uVar10)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < uVar10)))))))) {
          puVar5 = (undefined4 *)FUN_82081d60();
          *puVar5 = 0x22;
        }
        if (puVar4 == (undefined4 *)0x0) {
          halt_baddata();
        }
        *puVar4 = pbVar11;
        halt_baddata();
      }
      iVar8 = (int)(char)uVar12;
      if ((0x60 < iVar8) && (iVar8 < 0x7b)) {
        iVar8 = iVar8 + -0x20;
      }
      uVar12 = iVar8 - 0x37;
    }
    else {
      uVar12 = (int)(char)uVar12 - 0x30;
    }
    if (param_3 <= uVar12) goto LAB_8208c154;
    uVar9 = param_4 | 8;
    if ((uVar10 < 0xffffffff / param_3) ||
       ((uVar10 == 0xffffffff / param_3 &&
        (trapWord(6,param_3,0), uVar12 <= -((0xffffffff / param_3) * param_3) - 1)))) {
      uVar10 = uVar10 * param_3 + uVar12;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar9 = param_4;
      if (puVar4 == (undefined4 *)0x0) goto LAB_8208c154;
    }
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    param_4 = uVar9;
  } while( true );
}


/* ==== FUN_8208c230 @ 8208c230 ==== */

void FUN_8208c230(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208c2d0 @ 8208c2d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208c2d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208c378 @ 8208c378 ==== */

void FUN_8208c378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208c4a0 @ 8208c4a0 ==== */

void FUN_8208c4a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208c548 @ 8208c548 ==== */

void FUN_8208c548(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208c640 @ 8208c640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208c640(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208c6d0 @ 8208c6d0 ==== */

void FUN_8208c6d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8208c840 @ 8208c840 ==== */

void FUN_8208c840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208c900 @ 8208c900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208c900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208c978 @ 8208c978 ==== */

void FUN_8208c978(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208cab8 @ 8208cab8 ==== */

void FUN_8208cab8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8208cb50 @ 8208cb50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208cb50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208cbc8 @ 8208cbc8 ==== */

undefined4 FUN_8208cbc8(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (((((*(uint *)(param_1 + 0x24) & param_4) == 0) &&
       ((*(uint *)(param_1 + 0x24) & param_2 & 0xfff) == 0)) && (0xfff < param_3)) &&
     ((((param_3 + param_4 ^ param_4 + 0xfff) & 0xfffff000) != 0 &&
      (uVar1 = func_0x820b77b8(param_2), (uVar1 & 0x600) == 0)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_8208cc30 @ 8208cc30 ==== */

undefined4 FUN_8208cc30(ushort *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = (uint)*param_1;
  if ((uVar3 != 0) && (uVar3 < 0x29)) {
    pbVar4 = *(byte **)(param_1 + 2);
    pbVar2 = pbVar4 + uVar3;
    if ((*pbVar4 != 0x2e) || ((uVar3 != 1 && ((uVar3 != 2 || (pbVar4[1] != 0x2e)))))) {
      do {
        if (pbVar2 <= pbVar4) {
          return 1;
        }
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while ((1 << (bVar1 & 0x1f) & *(uint *)(&UNK_82013314 + (bVar1 >> 3 & 0x1ffffffc))) == 0);
    }
  }
  return 0;
}


/* ==== FUN_8208ccc0 @ 8208ccc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208ccc0(uint param_1)

{
  ushort uVar1;
  undefined1 auStack_30 [16];
  short local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  undefined2 local_14;
  
  uVar1 = (ushort)(param_1 >> 0x10);
  local_1e = uVar1 >> 5 & 0xf;
  local_1c = uVar1 & 0x1f;
  local_16 = (ushort)(param_1 << 1) & 0x3e;
  local_1a = (ushort)(param_1 >> 0xb) & 0x1f;
  local_18 = (ushort)(param_1 >> 5) & 0x3f;
  local_20 = (uVar1 >> 9) + 0x7bc;
  local_14 = 0;
  func_0x820b79e8(&local_20,auStack_30);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208cd38 @ 8208cd38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208cd38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208cde8 @ 8208cde8 ==== */

int FUN_8208cde8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xce);
  if (param_3 == 0) {
    iVar1 = param_2 / 0xaa << (uVar2 & 0x3f);
    if (param_2 / 0xaa == 0) {
      return iVar1;
    }
    iVar1 = (param_2 / 0x70e4 + 1 << (uVar2 & 0x3f)) + iVar1;
    if (param_2 / 0x70e4 == 0) {
      return iVar1;
    }
  }
  else {
    if (param_3 != 1) {
      return (0xaa << (uVar2 & 0x3f)) + (1 << (uVar2 & 0x3f));
    }
    iVar1 = (param_2 / 0x70e4) * 0xab + 1 << (uVar2 & 0x3f);
    if (param_2 < 0x4af768) {
      return iVar1;
    }
  }
  return (1 << (uVar2 & 0x3f)) + iVar1;
}


/* ==== FUN_8208ce78 @ 8208ce78 ==== */

void FUN_8208ce78(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  
  if (param_3 < param_3 + 0x1000) {
    pbVar4 = (byte *)(param_3 + 0x29);
    iVar2 = (((param_3 + 0x1000) - param_3) - 1 >> 6) + 1;
    do {
      if (((pbVar4[-1] & 0x80) == 0) &&
         (uVar1 = *(int *)(pbVar4 + 0xb) + 0xfffU >> 0xc,
         uVar1 < ((uint)pbVar4[2] * 0x100 + (uint)pbVar4[1]) * 0x100 + (uint)*pbVar4)) {
        *pbVar4 = (byte)uVar1;
        pbVar4[1] = (byte)(uVar1 >> 8);
        pbVar4[2] = (byte)(*(int *)(pbVar4 + 0xb) + 0xfffU >> 0x1c);
      }
      pbVar4 = pbVar4 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  while (puVar3 != (undefined4 *)(param_1 + 0x80)) {
    iVar2 = puVar3[-0x12];
    puVar3 = (undefined4 *)*puVar3;
    if (((((*(byte *)(iVar2 + 0x35) & 2) == 0) && (param_2 >> 6 <= (uint)*(ushort *)(iVar2 + 0x36)))
        && ((uint)*(ushort *)(iVar2 + 0x36) < (param_2 >> 6) + 0x40)) &&
       (uVar1 = *(int *)(iVar2 + 0x18) + 0xfffU & 0xfffff000, uVar1 < *(uint *)(iVar2 + 0x1c))) {
      *(uint *)(iVar2 + 0x1c) = uVar1;
    }
  }
  return;
}


/* ==== FUN_8208cf60 @ 8208cf60 ==== */

void FUN_8208cf60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208d008 @ 8208d008 ==== */

void FUN_8208d008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8208d148 @ 8208d148 ==== */

void FUN_8208d148(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208d2c8 @ 8208d2c8 ==== */

void FUN_8208d2c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208d360 @ 8208d360 ==== */

void FUN_8208d360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208d3f8 @ 8208d3f8 ==== */

void FUN_8208d3f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208d570 @ 8208d570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d570(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d5c8 @ 8208d5c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d5c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d670 @ 8208d670 ==== */

void FUN_8208d670(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8208d7a0 @ 8208d7a0 ==== */

void FUN_8208d7a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8208d888 @ 8208d888 ==== */

void FUN_8208d888(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8208d980 @ 8208d980 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d980(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_d0;
  int local_cc [51];
  
  uVar9 = FUN_8207c494();
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  bVar1 = *(byte *)((int)param_3 + 7);
  local_d0 = (int)uVar9 * 0x1000 + *(int *)(iVar2 + 0x34);
  uVar4 = *param_3;
  FUN_8208c378();
  if ((bVar1 & 3) == 0) {
    iVar8 = 1;
    uVar7 = (uint)*(byte *)((int)param_3 + 6);
    iVar3 = *(int *)(iVar2 + 0x30);
    if (uVar7 != *(byte *)(iVar2 + 0xc9)) {
      piVar5 = &local_d0;
      do {
        piVar6 = (int *)(uVar7 * 8 + iVar3);
        if ((((*(char *)(piVar6 + 1) == '\0') && ((*(byte *)((int)piVar6 + 7) & 0x40) != 0)) &&
            (*piVar6 == iVar8 + uVar4)) && ((*(byte *)((int)piVar6 + 7) & 3) == 0)) {
          FUN_8208c378();
          iVar8 = iVar8 + 1;
          piVar5 = piVar5 + 1;
          *piVar5 = uVar7 * 0x1000 + *(int *)(iVar2 + 0x34);
          if (iVar8 == 0x20) {
            halt_baddata();
          }
        }
        uVar7 = (uint)*(byte *)((int)piVar6 + 6);
      } while (uVar7 != *(byte *)(iVar2 + 0xc9));
    }
  }
  else {
    FUN_8208cde8(iVar2,uVar4,(bVar1 & 3) - 1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208dad8 @ 8208dad8 ==== */

void FUN_8208dad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208db58 @ 8208db58 ==== */

void FUN_8208db58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8208dc28 @ 8208dc28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208dc28(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_8207c490();
  uVar3 = (uint)uVar4;
  iVar1 = FUN_8208db58();
  if (iVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((param_3 != 0) && (param_3 < 4)) {
    uVar2 = *(uint *)(&DAT_82013304 + param_3 * 4);
    trapWord(6,uVar2,0);
    uVar3 = (uVar3 / uVar2) * uVar2;
  }
  if (param_3 != 0) {
    FUN_8208cde8((int)((ulonglong)uVar4 >> 0x20),uVar3,param_3 - 1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208ddf0 @ 8208ddf0 ==== */

void FUN_8208ddf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8208dee0 @ 8208dee0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208dee0(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_80;
  int local_7c;
  undefined1 auStack_70 [20];
  uint local_5c;
  
  uVar7 = FUN_8207c494();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  bVar1 = *(byte *)(iVar2 + 0xca);
  DAT_820cacec = DAT_820cacec + 1;
  iVar3 = FUN_8208c548();
  uVar6 = param_3;
  if (iVar3 == 0) {
    do {
      uVar4 = uVar6 + 1;
      if (uVar6 == bVar1) {
        puVar5 = (undefined1 *)(iVar2 + 0xb0);
        DAT_820cacf4 = DAT_820cacf4 + 1;
        goto LAB_8208df9c;
      }
      iVar3 = FUN_8208c548();
      uVar6 = uVar4;
    } while (iVar3 == 0);
    if (uVar4 != param_3) {
      do {
        trapWord(6,*(undefined4 *)(&DAT_82013304 + uVar4 * 4),0);
        FUN_8207c860();
        puVar5 = auStack_70;
        if ((*(byte *)(local_7c + 7) & 4) == 0) {
          local_5c = local_5c & 0x7fffffff;
        }
        uVar6 = uVar4 - 1;
        uVar4 = local_80 - *(int *)(iVar2 + 0x34);
        iVar3 = (((int)uVar4 >> 0xc) + (uint)((int)uVar4 < 0 && (uVar4 & 0xfff) != 0)) * 8 +
                *(int *)(iVar2 + 0x30);
        *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + -1;
LAB_8208df9c:
        iVar3 = FUN_8208dc28(iVar2,(int)uVar7,uVar6 + 1);
        if (iVar3 < 0) {
          halt_baddata();
        }
        if ((*(uint *)(puVar5 + 0x14) & 0x80000000) != 0) {
          *(byte *)(local_7c + 7) = *(byte *)(local_7c + 7) | 4;
        }
        uVar4 = uVar6;
      } while (uVar6 != param_3);
      *param_4 = local_80;
      halt_baddata();
    }
  }
  DAT_820cacf0 = DAT_820cacf0 + 1;
  *param_4 = local_80;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208e088 @ 8208e088 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208e088(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int local_60;
  int local_5c;
  
  uVar10 = FUN_8207c490();
  iVar2 = (int)((ulonglong)uVar10 >> 0x20);
  uVar8 = (uint)*(byte *)(iVar2 + 0xca);
  iVar9 = iVar2 + 0xb0;
  iVar7 = 0;
  do {
    if ((uVar8 == param_3) && (param_4 != 0)) {
      iVar3 = FUN_8208ddf0();
      if (iVar3 < 0) {
LAB_8208e2d8:
        if (iVar7 == 0) {
          halt_baddata();
        }
        uVar8 = iVar7 - *(int *)(iVar2 + 0x34);
        iVar7 = (((int)uVar8 >> 0xc) + (uint)((int)uVar8 < 0 && (uVar8 & 0xfff) != 0)) * 8 +
                *(int *)(iVar2 + 0x30);
        *(char *)(iVar7 + 4) = *(char *)(iVar7 + 4) + -1;
        halt_baddata();
      }
      *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) & 0x3fffffff | 0x80000000;
    }
    else {
      iVar3 = FUN_8208c548();
      if ((iVar3 == 0) && (iVar3 = FUN_8208dc28(iVar2,(uint)uVar10,uVar8 + 1), iVar3 < 0))
      goto LAB_8208e2d8;
    }
    if ((*(uint *)(iVar9 + 0x14) & 0x80000000) == 0) {
      uVar5 = ~*(uint *)(iVar9 + 0x14) >> 0x1e & 1;
      *(byte *)(local_60 + 7) = (byte)(uVar5 << 5) | *(byte *)(local_60 + 7) & 0xdf;
      iVar3 = 0xaa;
      *(uint *)(iVar9 + 0x14) = uVar5 << 0x1e | 0x80000000 | *(uint *)(iVar9 + 0x14) & 0x3fffffff;
      if (uVar8 == 0) {
        puVar6 = (uint *)(local_5c + 0x14);
        do {
          if (*puVar6 >> 0x1e == 1) {
            uVar5 = *puVar6 & 0x3fffffff;
LAB_8208e1cc:
            *puVar6 = uVar5;
          }
          else if (*puVar6 >> 0x1e == 3) {
            uVar5 = *puVar6 & 0x3fffffff | 0x80000000;
            goto LAB_8208e1cc;
          }
          puVar6 = puVar6 + 6;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else {
        puVar6 = (uint *)(local_5c + -4);
        do {
          uVar5 = puVar6[6];
          puVar6 = puVar6 + 6;
          *puVar6 = (uVar5 >> 0xf & 0xffff) + (uVar5 & 0x7fffffff) & 0x7fff | uVar5 & 0x40000000;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    bVar1 = *(byte *)(local_60 + 7);
    *(byte *)(local_60 + 7) = bVar1 | 0x44;
    bVar4 = (*(byte *)(iVar2 + 0xcc) & 1) << 3 | bVar1 & 0xf7 | 0x44;
    *(byte *)(local_60 + 7) = bVar4;
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(local_60 + 7) = bVar4 | 0x10;
      if (iVar7 != 0) {
        uVar5 = iVar7 - *(int *)(iVar2 + 0x34);
        iVar9 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                *(int *)(iVar2 + 0x30);
        *(char *)(iVar9 + 4) = *(char *)(iVar9 + 4) + '\x01';
        goto LAB_8208e268;
      }
    }
    else {
LAB_8208e268:
      if (iVar7 != 0) {
        uVar5 = iVar7 - *(int *)(iVar2 + 0x34);
        iVar7 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                *(int *)(iVar2 + 0x30);
        *(char *)(iVar7 + 4) = *(char *)(iVar7 + 4) + -1;
      }
    }
    if (uVar8 == param_3) {
      *param_5 = local_5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = uVar8 * 4;
    uVar8 = uVar8 - 1;
    trapWord(6,*(uint *)(&DAT_82013304 + iVar7),0);
    iVar9 = (((uint)uVar10 / *(uint *)(&DAT_82013304 + iVar7)) % 0xaa) * 0x18 + local_5c;
    iVar7 = local_5c;
  } while( true );
}


/* ==== FUN_8208e320 @ 8208e320 ==== */

void FUN_8208e320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208e420 @ 8208e420 ==== */

void FUN_8208e420(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8208e498 @ 8208e498 ==== */

void FUN_8208e498(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8208e528 @ 8208e528 ==== */

void FUN_8208e528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8208e5e0 @ 8208e5e0 ==== */

void FUN_8208e5e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208e658 @ 8208e658 ==== */

void FUN_8208e658(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8208e710 @ 8208e710 ==== */

void FUN_8208e710(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  bVar1 = false;
  puVar2 = param_1;
  while( true ) {
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      if ((uint)*(ushort *)((int)puVar3 + -0x12) == *(uint *)(param_2 + 0x40) >> 6) {
                    /* WARNING: Subroutine does not return */
        FUN_8207c49c();
      }
    }
    if (bVar1) break;
    if ((*(byte *)((int)param_1 + 0x35) & 4) == 0) {
      puVar2 = (undefined4 *)param_1[3];
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
    }
    else {
      puVar2 = param_1 + 0x10;
    }
    bVar1 = true;
  }
  return;
}


/* ==== FUN_8208e788 @ 8208e788 ==== */

void FUN_8208e788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208e818 @ 8208e818 ==== */

void FUN_8208e818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8208e900 @ 8208e900 ==== */

void FUN_8208e900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208e960 @ 8208e960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208e960(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,int *param_5,
                 uint *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_90 [36];
  
  uVar16 = FUN_8207c478();
  iVar2 = (int)((ulonglong)uVar16 >> 0x20);
  iVar4 = (int)uVar16;
  uVar9 = param_3 & 0xfffff000;
  uVar1 = param_3 & 0xfff;
  DAT_820cace4 = DAT_820cace4 + 1;
  if (uVar9 < *(uint *)(iVar4 + 0x14)) {
    if (param_6 != (uint *)0x0) {
      *param_6 = 0;
    }
    uVar12 = *(uint *)(iVar4 + 0x28);
    uVar14 = *(uint *)(iVar4 + 0x2c);
    uVar10 = *(uint *)(iVar4 + 0x30);
    if ((uVar9 < uVar12) || (uVar14 + uVar12 <= uVar9)) {
      if (uVar9 == 0) {
        uVar7 = *(uint *)(iVar4 + 0x20);
      }
      else if ((uVar9 + 0x1000 != *(int *)(iVar4 + 0x14)) ||
              (uVar7 = *(uint *)(iVar4 + 0x24), uVar7 == 0xffffffff)) {
        if (uVar12 < uVar9) {
          uVar7 = (uVar14 + uVar12) - 0x1000;
          uVar15 = ((uVar14 >> 0xc) + uVar10) - 1;
        }
        else {
          uVar10 = *(uint *)(iVar4 + 0x20);
          uVar7 = 0;
          uVar12 = 0;
          uVar14 = 0x1000;
          uVar15 = uVar10;
        }
        iVar5 = 0;
        local_90[0] = 0;
        iVar6 = 0;
        do {
          uVar13 = uVar7;
          DAT_820cace8 = DAT_820cace8 + 1;
          iVar11 = uVar15 - uVar15 % 0xaa;
          if (iVar5 == 0) {
LAB_8208eafc:
            iVar5 = FUN_8208c548();
            iVar6 = iVar11;
            if (iVar5 == 0) {
              if (param_6 != (uint *)0x0) {
                *param_6 = 1;
              }
              iVar3 = FUN_8208dee0(iVar2,iVar11,0,local_90);
              iVar5 = local_90[0];
              if (iVar3 < 0) {
                halt_baddata();
              }
            }
            else {
              iVar5 = local_90[0];
              if (param_6 != (uint *)0x0) {
                *param_6 = 0;
              }
            }
          }
          else if (iVar11 != iVar6) {
            uVar7 = iVar5 - *(int *)(iVar2 + 0x34);
            iVar5 = (((int)uVar7 >> 0xc) + (uint)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
                    *(int *)(iVar2 + 0x30);
            *(char *)(iVar5 + 4) = *(char *)(iVar5 + 4) + -1;
            goto LAB_8208eafc;
          }
          uVar8 = *(uint *)((uVar15 % 0xaa) * 0x18 + iVar5 + 0x14) & 0xffffff;
          if (*(uint *)(iVar2 + 0x9c) <= uVar8) goto LAB_8208ec2c;
          uVar7 = uVar13 + 0x1000;
          if (uVar8 == uVar15 + 1) {
            uVar14 = uVar14 + 0x1000;
          }
          else {
            uVar14 = 0x1000;
            uVar10 = uVar8;
            uVar12 = uVar7;
          }
          uVar15 = uVar8;
        } while (uVar7 != uVar9);
        *param_4 = uVar8;
        for (iVar6 = uVar13 + 0x2000; iVar6 != *(int *)(iVar4 + 0x14); iVar6 = iVar6 + 0x1000) {
          if (((0xa8 < uVar8 - iVar11) ||
              (uVar7 = *(uint *)((uVar8 - iVar11) * 0x18 + iVar5 + 0x14) & 0xffffff,
              *(uint *)(iVar2 + 0x9c) <= uVar7)) || (uVar7 != uVar8 + 1)) goto LAB_8208ec10;
          uVar14 = uVar14 + 0x1000;
          uVar8 = uVar7;
        }
        *(uint *)(iVar4 + 0x24) = uVar8;
LAB_8208ec10:
        *(uint *)(iVar4 + 0x28) = uVar12;
        *(uint *)(iVar4 + 0x2c) = uVar14;
        *(uint *)(iVar4 + 0x30) = uVar10;
        *param_5 = (iVar6 - uVar1) - uVar9;
LAB_8208ec2c:
        if (iVar5 == 0) {
          halt_baddata();
        }
        uVar9 = iVar5 - *(int *)(iVar2 + 0x34);
        iVar2 = (((int)uVar9 >> 0xc) + (uint)((int)uVar9 < 0 && (uVar9 & 0xfff) != 0)) * 8 +
                *(int *)(iVar2 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
        halt_baddata();
      }
      *param_4 = uVar7;
      *param_5 = 0x1000 - uVar1;
    }
    else {
      *param_4 = (uVar9 - uVar12 >> 0xc) + uVar10;
      *param_5 = (uVar14 - (uVar9 - uVar12)) - uVar1;
      if (param_6 != (uint *)0x0) {
        iVar2 = FUN_8208cb50();
        *param_6 = (uint)(iVar2 == 0);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208ec68 @ 8208ec68 ==== */

void FUN_8208ec68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_8208ee58 @ 8208ee58 ==== */

void FUN_8208ee58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208ef50 @ 8208ef50 ==== */

void FUN_8208ef50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8208f170 @ 8208f170 ==== */

void FUN_8208f170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8208f2b0 @ 8208f2b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f2b0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  int aiStack_60 [24];
  
  uVar12 = FUN_8207c490();
  iVar8 = (int)((ulonglong)uVar12 >> 0x20);
  uVar10 = (uint)uVar12;
  uVar11 = *(uint *)(&UNK_82013308 + param_3 * 4);
  uVar9 = *(uint *)(&DAT_82013304 + param_3 * 4);
  iVar2 = FUN_8208e088(iVar8,uVar10,param_3,param_4,aiStack_60);
  if (-1 < iVar2) {
    uVar4 = *(int *)(iVar8 + 0x9c) - uVar10;
    uVar6 = *(uint *)(aiStack_60[0] + 0xff0);
    if (uVar11 < uVar4) {
      uVar4 = uVar11;
    }
    uVar11 = uVar4 - uVar6;
    if (uVar11 != 0) {
      trapWord(6,uVar9,0);
      trapWord(6,uVar9,0);
      iVar7 = uVar6 - (uVar6 / uVar9) * uVar9;
      iVar2 = ((uVar6 / uVar9) % 0xaa) * 0x18 + aiStack_60[0];
      if (iVar7 != 0) {
        uVar6 = uVar9 - iVar7;
        if (uVar6 != 0) {
          if (uVar11 < uVar6) {
            uVar6 = uVar11;
          }
          uVar11 = uVar11 - uVar6;
          *(uint *)(iVar2 + 0x14) =
               *(uint *)(iVar2 + 0x14) & 0xffff8000 | *(uint *)(iVar2 + 0x14) + uVar6 & 0x7fff;
          iVar2 = iVar2 + 0x18;
        }
      }
      if (uVar11 != 0) {
        puVar5 = (uint *)(iVar2 + -4);
        do {
          uVar6 = uVar9;
          if (uVar11 < uVar9) {
            uVar6 = uVar11;
          }
          puVar1 = puVar5 + 6;
          uVar11 = uVar11 - uVar6;
          puVar5 = puVar5 + 6;
          *puVar5 = uVar6 & 0x7fff | *puVar1 & 0xffff8000;
        } while (uVar11 != 0);
      }
      *(uint *)(aiStack_60[0] + 0xff0) = uVar4;
      uVar6 = uVar4;
    }
    uVar6 = uVar6 + uVar10;
    uVar11 = *param_5;
    if (uVar10 < uVar6) {
      puVar5 = (uint *)(aiStack_60[0] + 0x14);
      do {
        uVar4 = *puVar5 & 0x7fff;
        if (uVar4 != 0) {
          if ((uVar4 == uVar9) || (uVar3 = 0, uVar6 - uVar10 == uVar4)) {
            uVar3 = 1;
          }
          if (param_3 == 1) {
            iVar2 = FUN_8208f170();
          }
          else {
            iVar2 = FUN_8208f2b0(iVar8,uVar10,param_3 - 1,uVar3,param_5);
          }
          if (iVar2 < 0) break;
          if (uVar11 < uVar4) {
            uVar4 = uVar11;
          }
          uVar11 = uVar11 - uVar4;
          *puVar5 = *puVar5 & 0xffff8000 | *puVar5 - uVar4 & 0x7fff;
          if (uVar11 == 0) break;
        }
        uVar10 = uVar9 + uVar10;
        puVar5 = puVar5 + 6;
      } while (uVar10 < uVar6);
    }
    *param_5 = uVar11;
    uVar10 = aiStack_60[0] - *(int *)(iVar8 + 0x34);
    iVar8 = (((int)uVar10 >> 0xc) + (uint)((int)uVar10 < 0 && (uVar10 & 0xfff) != 0)) * 8 +
            *(int *)(iVar8 + 0x30);
    *(char *)(iVar8 + 4) = *(char *)(iVar8 + 4) + -1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208f490 @ 8208f490 ==== */

void FUN_8208f490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_8208f6b0 @ 8208f6b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f6b0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,uint *param_5,
                 int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int aiStack_80 [32];
  
  uVar8 = FUN_8207c484();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  uVar7 = (uint)uVar8;
  if (uVar7 < *(uint *)(iVar4 + 0x9c)) {
    iVar1 = FUN_8208e088(iVar4,uVar7,0,0,aiStack_80);
    if (-1 < iVar1) {
      iVar1 = 0;
      uVar5 = uVar7 / 0xaa;
      iVar6 = 0;
      do {
        iVar2 = (uVar7 % 0xaa) * 0x18 + aiStack_80[0];
        uVar3 = *(uint *)(iVar2 + 0x14);
        uVar7 = uVar3 & 0xffffff;
        if (*param_6 == 0) {
          if (uVar3 >> 0x1e == 2) {
            iVar1 = iVar1 + 1;
            uVar3 = uVar3 & 0x3fffffff | 0x40000000;
          }
          else {
            if (uVar3 >> 0x1e != 3) goto LAB_8208f774;
            uVar3 = uVar3 & 0x3fffffff;
            iVar6 = iVar6 + 1;
          }
          *(uint *)(iVar2 + 0x14) = uVar3;
        }
        else {
          *param_6 = 0;
          uVar3 = *(uint *)(iVar2 + 0x14) >> 0x1e;
          if ((uVar3 != 2) && (uVar3 != 3)) {
LAB_8208f774:
            FUN_8208d570();
LAB_8208f788:
            uVar5 = aiStack_80[0] - *(int *)(iVar4 + 0x34);
            iVar4 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                    *(int *)(iVar4 + 0x30);
            *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + -1;
            *param_3 = iVar1;
            *param_4 = iVar6;
            *param_5 = uVar7;
            halt_baddata();
          }
        }
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0xffffff;
        if (param_6[1] != 0) {
          FUN_8207c860();
          uVar7 = 0xffffff;
        }
        if ((uVar7 == 0xffffff) || (uVar7 / 0xaa != uVar5)) goto LAB_8208f788;
      } while( true );
    }
  }
  else {
    FUN_8208d570();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208f838 @ 8208f838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f838(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int *param_5,
                 uint *param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int aiStack_84 [33];
  
  uVar13 = FUN_8207c47c();
  iVar8 = (int)((ulonglong)uVar13 >> 0x20);
  uVar7 = (uint)uVar13;
  uVar9 = *(uint *)(&UNK_82013308 + param_3 * 4);
  uVar11 = *(uint *)(&DAT_82013304 + param_3 * 4);
  if (uVar7 < *(uint *)(iVar8 + 0x9c)) {
    iVar2 = FUN_8208e088(iVar8,uVar7,param_3,0,aiStack_84);
    if (-1 < iVar2) {
      trapWord(6,uVar9,0);
      iVar10 = 0;
      iVar2 = 0;
      uVar6 = uVar7;
      while( true ) {
        trapWord(6,uVar11,0);
        iVar12 = ((uVar6 / uVar11) % 0xaa) * 0x18 + aiStack_84[0];
        if (param_3 == 1) {
          iVar3 = FUN_8208f6b0(iVar8,uVar6,&iStack_90,&iStack_8c,&uStack_88,param_7);
        }
        else {
          iVar3 = FUN_8208f838(iVar8,uVar6,param_3 - 1,&iStack_90,&iStack_8c,&uStack_88,param_7);
        }
        if (iVar3 < 0) break;
        uVar4 = *(uint *)(iVar12 + 0x14);
        trapWord(6,uVar11,0);
        uVar1 = (uVar4 & 0xffff8000) + iStack_90 * 0x8000 & 0x3fff8000;
        uVar5 = uVar4 & 0xc0007fff | uVar1;
        *(uint *)(iVar12 + 0x14) = uVar5;
        uVar5 = uVar5 + iStack_8c;
        *(uint *)(iVar12 + 0x14) = uVar4 & 0xc0000000 | uVar1 | uVar5 & 0x7fff;
        uVar6 = *(int *)(iVar8 + 0x9c) - (uVar6 / uVar11) * uVar11;
        if (uVar11 < uVar6) {
          uVar6 = uVar11;
        }
        if (((uVar6 == uVar1 >> 0xf) && (uVar6 == uVar11)) || (uVar6 == (uVar5 & 0x7fff))) {
          FUN_8208c4a0();
        }
        iVar10 = iStack_90 + iVar10;
        iVar2 = iStack_8c + iVar2;
        if ((uStack_88 == 0xffffff) ||
           (trapWord(6,uVar9,0), uVar6 = uStack_88, uStack_88 / uVar9 != uVar7 / uVar9)) break;
      }
      uVar7 = aiStack_84[0] - *(int *)(iVar8 + 0x34);
      iVar8 = (((int)uVar7 >> 0xc) + (uint)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
              *(int *)(iVar8 + 0x30);
      *(char *)(iVar8 + 4) = *(char *)(iVar8 + 4) + -1;
      *param_4 = iVar10;
      *param_5 = iVar2;
      *param_6 = uStack_88;
    }
  }
  else {
    FUN_8208d570();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208fa30 @ 8208fa30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208fa30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208fcf0 @ 8208fcf0 ==== */

void FUN_8208fcf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8208fd50 @ 8208fd50 ==== */

void FUN_8208fd50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8208ffb8 @ 8208ffb8 ==== */

void FUN_8208ffb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820900a0 @ 820900a0 ==== */

void FUN_820900a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82090378 @ 82090378 ==== */

void FUN_82090378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820905a8 @ 820905a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820905a8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint *param_5,
                 uint *param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_a0;
  uint local_9c [39];
  
  uVar12 = FUN_8207c484();
  iVar6 = (int)((ulonglong)uVar12 >> 0x20);
  iVar3 = (int)uVar12;
  uVar5 = param_3 & 0xfffff000;
  uVar10 = *(uint *)(iVar3 + 0x28);
  uVar9 = *(uint *)(iVar3 + 0x2c);
  iVar8 = *(int *)(iVar3 + 0x30);
  iVar2 = FUN_8208e960(iVar6,iVar3,uVar5,&local_a0,(int *)local_9c,(uint *)0x0);
  uVar1 = local_a0;
  if (iVar2 < 0) {
    halt_baddata();
  }
  iVar2 = FUN_8208e088(iVar6,local_a0,0,0,param_7);
  if (iVar2 < 0) {
    halt_baddata();
  }
  iVar11 = *param_7;
  iVar2 = (local_a0 % 0xaa) * 0x18 + iVar11;
  uVar4 = *(uint *)(iVar2 + 0x14) >> 0x1e;
  if (uVar5 == *(uint *)(iVar3 + 0x1c)) {
    if ((uVar4 == 2) || (uVar4 == 3)) {
      iVar3 = FUN_8208ddf0();
      if (-1 < iVar3) {
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0xc0000000;
        *param_5 = local_a0;
        halt_baddata();
      }
    }
    else {
      FUN_8208d570();
    }
  }
  else {
    if (uVar4 != 3) {
      uVar7 = iVar11 - *(int *)(iVar6 + 0x34);
      iVar2 = (((int)uVar7 >> 0xc) + (uint)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
              *(int *)(iVar6 + 0x30);
      *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      if (uVar4 != 2) {
        FUN_8208d570();
        halt_baddata();
      }
      local_a0 = 0xffffffff;
      if ((uVar5 != 0) &&
         (((uVar4 = uVar5 - 0x1000, uVar4 < uVar10 || (uVar9 + uVar10 <= uVar4)) &&
          (iVar2 = FUN_8208e960(iVar6,iVar3,uVar4,&local_a0,(int *)local_9c,(uint *)0x0), iVar2 < 0)
          ))) {
        halt_baddata();
      }
      iVar2 = FUN_8208f490();
      if (iVar2 < 0) {
        halt_baddata();
      }
      if (*(uint *)(iVar3 + 0x20) == uVar1) {
        *(uint *)(iVar3 + 0x20) = local_9c[0];
      }
      if (*(uint *)(iVar3 + 0x24) == uVar1) {
        *(uint *)(iVar3 + 0x24) = local_9c[0];
      }
      if ((uVar9 + uVar10 == uVar5) && ((uVar9 >> 0xc) + iVar8 == local_9c[0])) {
        iVar2 = uVar9 + 0x1000;
        *(uint *)(iVar3 + 0x28) = uVar10;
        *(int *)(iVar3 + 0x30) = iVar8;
      }
      else {
        iVar2 = 0x1000;
        *(uint *)(iVar3 + 0x28) = uVar5;
        *(uint *)(iVar3 + 0x30) = local_9c[0];
      }
      *(int *)(iVar3 + 0x2c) = iVar2;
      if ((*(byte *)(iVar3 + 0x35) & 4) == 0) {
        *(byte *)(iVar3 + 0x35) = *(byte *)(iVar3 + 0x35) | 0x10;
      }
      else {
        *(int *)(iVar6 + 0xa8) = *(int *)(iVar6 + 0xa8) + -1;
      }
      iVar2 = FUN_8208fa30();
      if (iVar2 < 0) {
        halt_baddata();
      }
      if (param_4 == 0) {
        iVar2 = FUN_8208e498();
      }
      else {
        iVar2 = FUN_8208ddf0();
      }
      if (-1 < iVar2) {
        if ((param_4 == 0) && ((*(byte *)(iVar3 + 0x35) & 4) != 0)) {
          FUN_8208ce78(iVar6,uVar5,*param_6);
        }
        iVar2 = FUN_8208e088(iVar6,local_9c[0],0,0,param_7);
        if (iVar2 < 0) {
          uVar5 = *param_6 - *(int *)(iVar6 + 0x34);
          iVar6 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                  *(int *)(iVar6 + 0x30);
          *(char *)(iVar6 + 4) = *(char *)(iVar6 + 4) + -1;
        }
      }
      *param_5 = local_9c[0];
      halt_baddata();
    }
    if (param_4 == 0) {
      iVar2 = FUN_8208e420();
    }
    else {
      iVar2 = FUN_8208ddf0();
    }
    if (-1 < iVar2) {
      *param_5 = local_a0;
      halt_baddata();
    }
  }
  uVar5 = iVar11 - *(int *)(iVar6 + 0x34);
  iVar6 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
          *(int *)(iVar6 + 0x30);
  *(char *)(iVar6 + 4) = *(char *)(iVar6 + 4) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82090950 @ 82090950 ==== */

void FUN_82090950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820909c0 @ 820909c0 ==== */

void FUN_820909c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82090a40 @ 82090a40 ==== */

void FUN_82090a40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82090ac0 @ 82090ac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82090ac0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82090b30 @ 82090b30 ==== */

void FUN_82090b30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82090bd0 @ 82090bd0 ==== */

void FUN_82090bd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82090cc8 @ 82090cc8 ==== */

void FUN_82090cc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82090da0 @ 82090da0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82090da0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_90;
  int local_8c;
  uint local_88 [2];
  undefined1 auStack_80 [128];
  
  uVar12 = FUN_8207c480();
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  iVar2 = (int)uVar12;
  iVar9 = *(int *)(iVar2 + 0x50);
  iVar4 = *(int *)(iVar9 + 0x18);
  uVar5 = *(uint *)(iVar9 + 4);
  iVar11 = *(int *)(iVar4 + 8);
  func_0x820b75b8();
  iVar8 = *(int *)(iVar1 + 0x88);
  if (iVar8 == 0) {
    if ((*(byte *)(iVar4 + 2) & 0x10) == 0) {
      if ((*(byte *)(iVar11 + 0x35) & 2) == 0) {
        if (*(char *)(iVar1 + 0xce) == '\0') {
          iVar8 = -0x3fffffde;
        }
        else if (uVar5 == 0) {
          iVar8 = 0;
          *(undefined4 *)(iVar2 + 0x14) = 0;
        }
        else {
          iVar8 = FUN_82090a40();
          if (-1 < iVar8) {
            if ((*(int *)(iVar9 + 0x10) == -1) && (*(int *)(iVar9 + 0xc) == -1)) {
              uVar3 = *(undefined4 *)(iVar11 + 0x18);
              *(undefined4 *)(iVar9 + 0xc) = 0;
              *(undefined4 *)(iVar9 + 0x10) = uVar3;
            }
            uVar7 = *(uint *)(iVar9 + 0x10);
            uVar6 = uVar7 + uVar5;
            if ((*(int *)(iVar9 + 0xc) == 0) && (uVar7 < (uVar6 + 0xfff & 0xfffff000))) {
              iVar8 = FUN_82090378();
              if ((-1 < iVar8) &&
                 ((uVar6 <= *(uint *)(iVar11 + 0x14) || (iVar8 = FUN_82090cc8(), -1 < iVar8)))) {
                while (*(uint *)(iVar11 + 0x1c) < (uVar7 & 0xfffff000)) {
                  iVar8 = FUN_820905a8(iVar1,iVar11,*(uint *)(iVar11 + 0x1c),1,local_88,&local_90,
                                       &local_8c);
                  if (iVar8 < 0) goto LAB_82091024;
                  FUN_8208cf60();
                  *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + 0x1000;
                }
                while( true ) {
                  uVar10 = 0x1000 - (uVar7 & 0xfff);
                  if (uVar5 < uVar10) {
                    uVar10 = uVar5;
                  }
                  iVar8 = FUN_820905a8(iVar1,iVar11,uVar7,(uint)(uVar10 == 0x1000),local_88,
                                       &local_90,&local_8c);
                  if (iVar8 < 0) break;
                  FUN_8207c860();
                  FUN_8208cf60();
                  if (*(uint *)(iVar11 + 0x1c) == (uVar7 & 0xfffff000)) {
                    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) + 0x1000;
                  }
                  uVar5 = uVar5 - uVar10;
                  uVar7 = uVar10 + uVar7;
                  if (uVar5 == 0) {
                    if (*(uint *)(iVar11 + 0x18) < uVar6) {
                      *(uint *)(iVar11 + 0x18) = uVar6;
                    }
                    func_0x820b7648(auStack_80);
                    return;
                  }
                }
              }
            }
            else {
              iVar8 = -0x3fffff81;
            }
          }
        }
      }
      else {
        iVar8 = -0x3ffffff0;
      }
    }
    else {
      iVar8 = -0x3ffffed8;
    }
  }
LAB_82091024:
  func_0x820b75a8(iVar1);
  *(int *)(iVar2 + 0x10) = iVar8;
  func_0x820b7a78(iVar2,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82091148 @ 82091148 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82091148(void)

{
  int iVar1;
  uint *in_r8;
  uint uVar2;
  
  iVar1 = FUN_8207c494();
  if (*(char *)(iVar1 + 0xce) != '\0') {
    uVar2 = in_r8[0x11];
    if (uVar2 == 0xffffffff) {
      uVar2 = *(uint *)(iVar1 + 0x54);
      iVar1 = FUN_82090cc8();
      if (-1 < iVar1) goto LAB_820911cc;
    }
    else if (uVar2 < 0x3fff81) {
LAB_820911cc:
      in_r8[0x10] = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_8207c6b0(in_r8,0,0x40);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820912b8 @ 820912b8 ==== */

void FUN_820912b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82091330 @ 82091330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82091330(void)

{
  int extraout_r4;
  
  FUN_8207c480();
  func_0x820b7aa8(*(undefined4 *)(*(int *)(extraout_r4 + 0x50) + 0x18));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820918e0 @ 820918e0 ==== */

void FUN_820918e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82091a00 @ 82091a00 ==== */

void FUN_82091a00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82091c90 @ 82091c90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82091c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82091d58 @ 82091d58 ==== */

void FUN_82091d58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82091de8 @ 82091de8 ==== */

void FUN_82091de8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82091fc8 @ 82091fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82091fc8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = TBLr;
  if (iVar1 == 0) {
    uVar2 = TBLr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82091fe8 @ 82091fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82091fe8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092020 @ 82092020 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092020(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092030 @ 82092030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092108 @ 82092108 ==== */

void FUN_82092108(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 auStack_4c [76];
  
  uStack_5c = param_2 & 1;
  uStack_58 = 0;
  uStack_54 = 0x82090308;
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
      FUN_8207cce8(auStack_4c,param_4,param_3 << 2);
    }
  }
  func_0x820b7838(&uStack_60);
  return;
}


/* ==== FUN_82092188 @ 82092188 ==== */

ulonglong FUN_82092188(undefined4 param_1)

{
  ulonglong uVar1;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  func_0x820b7578(&local_10,param_1);
  uVar1 = FUN_820924e8(&local_10);
  return uVar1;
}


/* ==== FUN_820921c8 @ 820921c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820921c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092238 @ 82092238 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092238(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820922e0 @ 820922e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820922e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_8207c488();
  pbVar3 = (byte *)((ulonglong)uVar12 >> 0x20);
  iVar8 = (int)uVar12;
  pbVar7 = pbVar3;
  if (iVar8 == -1) {
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    iVar8 = (int)pbVar7 - (int)pbVar3;
  }
  iVar5 = 0;
  if (0 < iVar8) {
    iVar11 = 0;
    psVar6 = (short *)(param_3 + -2);
    iVar4 = 0;
    pbVar7 = pbVar3;
    do {
      bVar1 = *pbVar7;
      iVar9 = 0;
      uVar2 = (int)*(char *)(bVar1 + 0x820c6660) & 0xffff;
      iVar5 = iVar4;
      if (iVar8 <= (int)(pbVar7 + (uVar2 - (int)pbVar3))) break;
      if (uVar2 == 0) {
LAB_82092408:
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar11 = iVar11 + 1;
        iVar9 = (uint)bVar1 + iVar9;
      }
      else {
        if (uVar2 == 1) {
LAB_820923f4:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82092408;
        }
        if (uVar2 < 3) {
LAB_820923e0:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_820923f4;
        }
        if (uVar2 == 3) {
LAB_820923cc:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_820923e0;
        }
        if (uVar2 < 5) {
LAB_820923b8:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_820923cc;
        }
        if (uVar2 == 5) {
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = (uint)bVar1 << 6;
          goto LAB_820923b8;
        }
      }
      uVar10 = iVar9 - *(int *)(uVar2 * 4 + -0x7df399b8);
      uVar2 = uVar10;
      if ((uRam820c662c < uVar10) && (uVar2 = uRam820c6628, uVar10 <= uRam820c6630)) {
        uVar10 = uVar10 - iRam820c6638;
        if (iVar4 + 1 <= param_4) {
          psVar6[1] = (short)(uVar10 >> (uRam820c6634 & 0x3f)) + (short)uRam820c6640;
          psVar6 = psVar6 + 1;
        }
        iVar5 = iVar4 + 2;
        if (iVar5 <= param_4) {
          psVar6 = psVar6 + 1;
          *psVar6 = ((ushort)uRam820c663c & (ushort)uVar10) + (short)uRam820c6644;
        }
      }
      else {
        iVar5 = iVar4 + 1;
        if (iVar5 <= param_4) {
          iVar5 = iVar4 + 1;
          psVar6[1] = (short)uVar2;
          psVar6 = psVar6 + 1;
        }
      }
      iVar4 = iVar5;
    } while (iVar11 < iVar8);
  }
  if ((param_4 != 0) && (param_4 < iVar5)) {
    thunk_FUN_8203cd08(0x7a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820924e8 @ 820924e8 ==== */

ulonglong FUN_820924e8(undefined2 *param_1)

{
  undefined4 in_r0;
  
  trapWord(0x1f,in_r0,0x14);
  return (ulonglong)CONCAT24(*param_1,*(undefined4 *)(param_1 + 2));
}


/* ==== FUN_82092508 @ 82092508 ==== */

void FUN_82092508(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_r13;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = *(int *)(*(int *)(unaff_r13 + 0x100) + 0x58);
  param_1[2] = **(int **)(param_2 + 0x2b10);
  param_1[3] = iVar1;
  param_1[4] = iVar1;
  iVar1 = TBLr;
  param_1[5] = iVar1;
  return;
}


/* ==== FUN_82092538 @ 82092538 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092538(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  uVar1 = TBLr;
  if (*(int *)(param_1 + 4) == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092600 @ 82092600 ==== */

void FUN_82092600(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820926e0 @ 820926e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820926e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092730 @ 82092730 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092830 @ 82092830 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092830(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820928a8 @ 820928a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820928a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092958 @ 82092958 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092958(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092980 @ 82092980 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092980(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092a08 @ 82092a08 ==== */

void FUN_82092a08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82092b18 @ 82092b18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092b18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092b70 @ 82092b70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092b70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092bc0 @ 82092bc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092bc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092d38 @ 82092d38 ==== */

void FUN_82092d38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82092e10 @ 82092e10 ==== */

uint FUN_82092e10(int param_1)

{
  return (param_1 + 1U) % 10;
}


/* ==== FUN_82092e28 @ 82092e28 ==== */

undefined4 FUN_82092e28(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -0x7df30000;
  uVar1 = FUN_82092e10(DAT_820cad00);
  *(uint *)(iVar2 + -0x5300) = uVar1;
  return DAT_820cad04;
}


/* ==== FUN_82092e60 @ 82092e60 ==== */

void FUN_82092e60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82092ed8 @ 82092ed8 ==== */

void FUN_82092ed8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820931b8 @ 820931b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820931b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82093260 @ 82093260 ==== */

void FUN_82093260(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820938e0 @ 820938e0 ==== */

void FUN_820938e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82093ac0 @ 82093ac0 ==== */

void FUN_82093ac0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82093b78 @ 82093b78 ==== */

void FUN_82093b78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82093d98 @ 82093d98 ==== */

void FUN_82093d98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82093da0 @ 82093da0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82093da0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  bool bVar17;
  int local_178;
  uint local_174;
  uint local_170;
  undefined4 local_16c [3];
  uint local_160;
  uint local_15c;
  uint local_154;
  uint uStack_110;
  undefined4 local_10c;
  int local_108;
  int local_f4;
  char local_f0 [16];
  int local_e0;
  int local_dc;
  char acStack_b8 [56];
  int local_80;
  
  iVar8 = FUN_8207c484();
  iVar9 = func_0x820b77e8();
  iVar3 = iVar9 + -3 + (uint)(iVar9 == 2);
  if (((*(uint *)(iVar8 + 0x36a8) & 0x10) != 0) && (iVar10 = FUN_82092e28(), iVar10 != 0)) {
    FUN_82093260();
  }
  *(int *)(iVar8 + 0x4248) = *(int *)(iVar8 + 0x4248) + 1;
  FUN_8207c860();
  if ((local_15c & 0x3f) == 0x32) {
    iVar10 = 3;
LAB_82093e30:
    local_15c = iVar10 << 1 | local_15c & 0xffffffc0;
  }
  else if ((local_15c & 0x3f) == 7) {
    iVar10 = 0x1b;
    goto LAB_82093e30;
  }
  uVar13 = *(uint *)(iVar8 + 0x36bc) >> 0x11;
  local_160 = *(uint *)(iVar8 + 0x36bc) >> 7 & 0x3fc | local_160 & 0xfffffc03;
  local_154 = local_154 & 0xffffe000 | uVar13 & 0x1ffe | uVar13 & 1;
  if ((*(byte *)(iVar8 + 0x2b40) & 0x40) != 0) {
    FUN_820928a8();
  }
  uVar6 = local_15c;
  FUN_8207c860();
  iVar10 = *(int *)(iVar8 + 0x36c0);
  uVar13 = uVar6 & 0x3f;
  uVar6 = uVar6 & 0xfffff000;
  bVar4 = false;
  local_178 = iVar10;
  local_174 = uVar6;
  local_170 = uVar13;
  if ((*(int *)(iVar8 + 0x5618) != 0) && (*(uint *)(iVar8 + 0x5614) - *(int *)(iVar8 + 0x5610) < 6))
  {
    *(undefined4 *)(((*(uint *)(iVar8 + 0x5614) & 7) + 0x10) * 4 + *(int *)(iVar8 + 0x2b10)) = 0;
    *(undefined4 *)(((*(int *)(iVar8 + 0x5614) + 1U & 7) + 0x10) * 4 + *(int *)(iVar8 + 0x2b10)) = 0
    ;
    FUN_820a9fc8();
    bVar4 = true;
  }
  if (param_3 == (char *)0x0) {
LAB_82093f94:
    bVar5 = false;
  }
  else {
    pcVar14 = (char *)(iVar8 + 0x36dc);
    pcVar15 = param_3;
    do {
      cVar1 = *pcVar15;
      cVar2 = *pcVar14;
      if (cVar1 != cVar2) break;
      pcVar15 = pcVar15 + 1;
      pcVar14 = pcVar14 + 1;
    } while (pcVar15 != param_3 + 0x1c);
    bVar5 = true;
    if (cVar1 == cVar2) goto LAB_82093f94;
  }
  if (iVar9 + -2 != iVar3) {
    if (DAT_820cacfc != 0) {
      if (*(uint *)(iVar8 + 0x38) < *(uint *)(iVar8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_820a3e30();
      }
      *(uint *)(iVar8 + 0x30) = *(uint *)(iVar8 + 0x30);
    }
    if (bVar5) {
      *(uint *)(iVar8 + 0x5f30) = *(uint *)(iVar8 + 0x5f30) | 0x40000000;
    }
    FUN_820af0c0(iVar8);
  }
  func_0x820b7c58(&uStack_110,local_16c);
  if (*(int *)(iVar8 + 0x55b4) == 0) {
    bVar17 = *(int *)(iVar8 + 0x6014) != 0;
    if (((local_e0 == 0x500) && (local_dc == 0x5be)) ||
       ((*(int *)(iVar8 + 0x3708) == 0x500 && (*(int *)(iVar8 + 0x370c) == 0x5be)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_108 == 0) {
      bVar7 = bVar17;
    }
    if (bVar17) {
      if (!bVar7) goto LAB_820940b8;
    }
    else if (bVar7) {
LAB_820940b8:
                    /* WARNING: Subroutine does not return */
      FUN_8207c6b0(&uStack_110,0,0x94);
    }
    iVar12 = FUN_820a4068();
    func_0x820b7c48(iVar12 + 4,&local_160,*(int *)(iVar8 + 0x2b10) + 8,&uStack_110,local_16c[0],
                    &local_174,&local_170,&local_178);
    *(int *)(iVar8 + 0x30) = iVar12 + 0x100;
  }
  else {
    *(undefined4 *)(*(int *)(iVar8 + 0x2b10) + 8) = local_16c[0];
    uVar11 = *(uint *)(iVar8 + 0x30);
    if (*(uint *)(iVar8 + 0x38) < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_820a3e30();
    }
    *(undefined4 *)(uVar11 + 4) = 0xc0001000;
    *(undefined4 *)(uVar11 + 8) = 0;
    *(undefined4 **)(iVar8 + 0x30) = (undefined4 *)(uVar11 + 8);
  }
  *(undefined4 *)(iVar8 + 0x5cd0) = local_10c;
  if (bVar4) {
    FUN_820a9fc8();
    *(int *)(iVar8 + 0x5614) = *(int *)(iVar8 + 0x5614) + 2;
  }
  if (local_108 != 0) {
    *(int *)(iVar8 + 0x5f44) = local_108;
  }
  uVar11 = *(uint *)(iVar8 + 0x42dc);
  *(undefined4 *)(iVar8 + 0x42dc) = 0;
  if ((uVar11 & 8) != 0) {
    FUN_820a5a68();
                    /* WARNING: Subroutine does not return */
    FUN_820a3e30();
  }
  if (bVar5) {
    FUN_8207c860();
    FUN_820ac140(iVar8,(undefined4 *)param_3);
  }
  if ((local_108 == 0) || (local_178 != iVar10)) {
    if ((*(byte *)(iVar8 + 0x2b3e) & 0x10) != 0) {
      local_178 = iVar10;
      local_174 = uVar6;
      local_170 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_8207c6b0((uint *)(iVar8 + 0x36f8),0,0x38);
    }
    if ((*(byte *)(iVar8 + 0x2b3f) & 0x40) != 0) {
      uVar11 = uVar11 | 3;
    }
    bVar16 = *(byte *)(iVar8 + 0x2b3f) & 0xbf;
    local_178 = iVar10;
    local_174 = uVar6;
    local_170 = uVar13;
    goto LAB_82094308;
  }
  pcVar15 = (char *)(iVar8 + 0x36f8);
  if (local_f4 == 0) {
LAB_8209426c:
    if (((*(byte *)(iVar8 + 0x2b3e) & 0x10) != 0) && (local_80 == 0)) goto LAB_82094288;
  }
  else {
    pcVar14 = local_f0;
    do {
      cVar1 = *pcVar14;
      cVar2 = *pcVar15;
      if (cVar1 != cVar2) break;
      pcVar14 = pcVar14 + 1;
      pcVar15 = pcVar15 + 1;
    } while (pcVar14 != acStack_b8);
    if (cVar1 == cVar2) goto LAB_8209426c;
    FUN_8207c860();
    *(byte *)(iVar8 + 0x2b3e) = *(byte *)(iVar8 + 0x2b3e) | 0x10;
LAB_82094288:
    uVar11 = uVar11 | 4;
  }
  if ((*(byte *)(iVar8 + 0x2b3f) & 0x40) == 0) {
    uVar11 = uVar11 | 3;
  }
  bVar16 = *(byte *)(iVar8 + 0x2b3f) | 0x40;
LAB_82094308:
  *(byte *)(iVar8 + 0x2b3f) = bVar16;
  if ((DAT_820cad40 != 0) || ((*(byte *)(iVar8 + 0x2b3d) & 2) != 0)) {
    uVar11 = 0;
  }
  if (uVar11 == 0) {
    FUN_82093ac0();
  }
  else {
    FUN_82093b78();
  }
  FUN_820a9d20();
  if (((uVar11 & 8) != 0) && (iVar9 + -2 != iVar3)) {
    uVar13 = *(uint *)(iVar8 + 0x30);
    if (*(uint *)(iVar8 + 0x38) < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_820a3e30();
    }
    *(undefined4 *)(uVar13 + 4) = 0xc0022100;
    *(undefined4 *)(uVar13 + 8) = 0x1e4e;
    *(undefined4 *)(uVar13 + 0xc) = 0xfffffffe;
    *(undefined4 *)(uVar13 + 0x10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(iVar8 + 0x6008) != 0) {
    FUN_820ac4f8();
  }
  *(undefined4 *)(iVar8 + 0x2b30) = *(undefined4 *)(iVar8 + 0x2b1c);
                    /* WARNING: Subroutine does not return */
  FUN_820a3e30();
}


/* ==== FUN_82094508 @ 82094508 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094508(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094620 @ 82094620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094620(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_8207c490();
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(uint *)(iVar1 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_820a3e30();
  }
  iVar2 = FUN_820a2c68();
  if (iVar2 == 0) {
    *(uint *)(iVar1 + 0x30) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(uint *)(iVar1 + 0x29c0) & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820948d8 @ 820948d8 ==== */

void FUN_820948d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82094b40 @ 82094b40 ==== */

void FUN_82094b40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820950e0 @ 820950e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820950e0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  ulonglong uVar7;
  
  uVar7 = FUN_8207c484();
  iVar1 = (int)(uVar7 >> 0x20);
  if (param_4 == 0) {
    altv207_13(in_vs32,in_vs43);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(int *)(iVar1 + 0x3220) != 0) || ((uVar7 & 0xffffff0f) != 0)) {
    iVar2 = (int)*(float *)(iVar1 + 0x32e0);
    iVar3 = (int)*(float *)(iVar1 + 0x32e4);
    iVar4 = *param_3;
    if (*param_3 <= iVar2) {
      iVar4 = iVar2;
    }
    iVar5 = param_3[1];
    if (param_3[1] <= iVar3) {
      iVar5 = iVar3;
    }
    iVar2 = (int)*(float *)(iVar1 + 0x32e8) + iVar2;
    iVar6 = param_3[2];
    if (iVar2 <= param_3[2]) {
      iVar6 = iVar2;
    }
    iVar3 = (int)*(float *)(iVar1 + 0x32ec) + iVar3;
    iVar2 = param_3[3];
    if (iVar3 <= param_3[3]) {
      iVar2 = iVar3;
    }
    if (*(int *)(iVar1 + 0x3000) != 0) {
      if (iVar4 <= *(int *)(iVar1 + 0x32fc)) {
        iVar4 = *(int *)(iVar1 + 0x32fc);
      }
      if (iVar5 <= *(int *)(iVar1 + 0x3300)) {
        iVar5 = *(int *)(iVar1 + 0x3300);
      }
      if (*(int *)(iVar1 + 0x3304) <= iVar6) {
        iVar6 = *(int *)(iVar1 + 0x3304);
      }
      if (*(int *)(iVar1 + 0x3308) <= iVar2) {
        iVar2 = *(int *)(iVar1 + 0x3308);
      }
    }
    if ((iVar4 < iVar6) && (iVar5 < iVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82095760 @ 82095760 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82095760(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82095898 @ 82095898 ==== */

void FUN_82095898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82095958 @ 82095958 ==== */

void FUN_82095958(int param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30) >> 9 & 3;
  iVar2 = (*(uint *)(param_1 + 0x28) >> 0x1e & 2) + 1;
  if (uVar1 == 0) {
    *param_2 = (*(uint *)(param_1 + 0x24) & 0xffffff) + iVar2;
    *param_3 = 1;
  }
  else {
    if (uVar1 == 2) {
      *param_2 = (*(uint *)(param_1 + 0x24) & 0x7ff) + iVar2;
      *param_3 = (*(uint *)(param_1 + 0x24) >> 0xb & 0x7ff) + iVar2;
      *param_4 = (*(uint *)(param_1 + 0x24) >> 0x16) + iVar2;
      return;
    }
    *param_2 = (*(uint *)(param_1 + 0x24) & 0x1fff) + iVar2;
    *param_3 = (*(uint *)(param_1 + 0x24) >> 0xd & 0x1fff) + iVar2;
  }
  *param_4 = 1;
  return;
}


/* ==== FUN_820959f0 @ 820959f0 ==== */

void FUN_820959f0(int param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14) >> 9 & 3;
  iVar2 = (*(uint *)(param_1 + 0xc) >> 0x1e & 2) + 1;
  if (uVar1 == 0) {
    *param_2 = (*(uint *)(param_1 + 8) & 0xffffff) + iVar2;
    *param_3 = 1;
    *param_4 = 1;
    return;
  }
  if (uVar1 == 2) {
    *param_2 = (*(uint *)(param_1 + 8) & 0x7ff) + iVar2;
    *param_3 = (*(uint *)(param_1 + 8) >> 0xb & 0x7ff) + iVar2;
    iVar2 = (*(uint *)(param_1 + 8) >> 0x16) + iVar2;
  }
  else {
    *param_2 = (*(uint *)(param_1 + 8) & 0x1fff) + iVar2;
    *param_3 = (*(uint *)(param_1 + 8) >> 0xd & 0x1fff) + iVar2;
    iVar2 = (*(uint *)(param_1 + 8) >> 0x1a) + 1;
  }
  *param_4 = iVar2;
  return;
}


/* ==== FUN_82095a90 @ 82095a90 ==== */

void FUN_82095a90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82095aa8 @ 82095aa8 ==== */

uint FUN_82095aa8(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  param_3 = param_3 & 0x3f;
  iVar1 = 4;
  if (0 < param_4) {
    param_2 = param_2 << 1;
  }
  if (param_4 == 2) {
    param_1 = param_1 << 1;
  }
  if (((param_3 == 0x15) || (param_3 == 0x20)) || (param_3 == 0x25)) {
    iVar1 = 8;
  }
  return ((param_2 + 0xfU & 0xfffffff0) * ((param_1 + 0x4fU) / 0x50) * 0x50 * iVar1) / 0x1400;
}


/* ==== FUN_82095b18 @ 82095b18 ==== */

void FUN_82095b18(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x2d) {
    if (param_1 == 0x2c) {
LAB_82095b68:
      uVar1 = 4;
      goto LAB_82095b58;
    }
    if (10 < param_1) {
      if (param_1 < 0xd) {
LAB_82095b54:
        uVar1 = 2;
LAB_82095b58:
        *param_2 = uVar1;
        *param_3 = 1;
        return;
      }
      if (0x11 < param_1) {
        if (param_1 < 0x15) goto LAB_82095ba0;
        if (param_1 == 0x27) goto LAB_82095b68;
        if (param_1 == 0x28) goto LAB_82095b54;
      }
    }
  }
  else if ((param_1 == 0x31) ||
          ((0x32 < param_1 && ((param_1 < 0x36 || ((0x39 < param_1 && (param_1 < 0x3e)))))))) {
LAB_82095ba0:
    uVar1 = 4;
    goto LAB_82095ba4;
  }
  uVar1 = 1;
LAB_82095ba4:
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}


/* ==== FUN_82095bb0 @ 82095bb0 ==== */

int FUN_82095bb0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_3 + param_4 * -2;
  uVar3 = uVar2;
  if ((int)uVar2 < 2) {
    uVar3 = 1;
  }
  uVar1 = param_2 + param_4 * -2;
  uVar4 = uVar1;
  if ((uVar1 <= uVar3) && (uVar4 = uVar2, (int)uVar2 < 2)) {
    uVar4 = 1;
  }
  uVar3 = param_1 + param_4 * -2;
  if (uVar3 <= uVar4) {
    uVar4 = uVar2;
    if ((int)uVar2 < 2) {
      uVar4 = 1;
    }
    uVar3 = uVar1;
    if ((uVar1 <= uVar4) && (uVar3 = uVar2, (int)uVar2 < 2)) {
      uVar3 = 1;
    }
  }
  return 0x20 - LZCOUNT(uVar3);
}


/* ==== FUN_82095c38 @ 82095c38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82095c38(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,uint param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int local_60;
  int local_5c [23];
  
  uVar5 = FUN_8207c494();
  puVar2 = (uint *)((ulonglong)uVar5 >> 0x20);
  uVar3 = 0x20;
  iVar4 = 4;
  if (param_6 != 2) {
    iVar4 = 1;
  }
  FUN_82095b18(param_5,local_5c,&local_60);
  if ((param_7 == 0) && (uVar1 = (uint)(local_5c[0] * local_60 * param_4) >> 3, uVar1 != 0)) {
    trapWord(6,uVar1,0);
    if (0x1f < 0x100 / uVar1) {
      uVar3 = 0x100 / uVar1;
    }
  }
  local_60 = local_60 * ((-(uint)(param_6 != 0) & 0x1f) + 1);
  *puVar2 = (*puVar2 + local_5c[0] * uVar3) - 1 & ~(local_5c[0] * uVar3 - 1);
  *(uint *)uVar5 = (*(uint *)uVar5 + local_60) - 1 & ~(local_60 - 1U);
  *param_3 = (*param_3 + iVar4) - 1 & ~(iVar4 - 1U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82095d58 @ 82095d58 ==== */

void FUN_82095d58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820960d8 @ 820960d8 ==== */

void FUN_820960d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82096230 @ 82096230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82096230(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
                 uint *param_6,uint *param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c [39];
  
  uVar15 = FUN_8207c474();
  puVar2 = (uint *)((ulonglong)uVar15 >> 0x20);
  uVar10 = (uint)uVar15;
  uVar1 = puVar2[8] & 0x3f;
  uVar11 = (uint)(byte)(&DAT_82013631)[uVar1 * 2];
  uVar3 = FUN_820a0e38(puVar2);
  if (uVar3 == 4) {
    FUN_82095958((int)puVar2,(int *)&local_a4,(int *)&local_a0,(int *)local_9c);
    uVar12 = (puVar2[7] >> 0x16 & 0x1ff) * uVar11 * 4;
    local_a8 = local_a4;
    local_b0 = local_a0;
    local_ac = local_9c[0];
    FUN_82095c38(&local_a8,&local_b0,&local_ac,uVar11,uVar1,puVar2[0xc] >> 9 & 3,puVar2[7] >> 0x1f);
    uVar8 = local_9c[0];
    uVar14 = local_a4;
    uVar5 = local_a0;
  }
  else {
    iVar7 = -((int)puVar2[10] >> 0x1f);
    iVar4 = ((int)puVar2[10] >> 0x1f) * -2;
    FUN_82095958((int)puVar2,(int *)&local_a4,(int *)&local_a0,(int *)local_9c);
    uVar8 = local_9c[0];
    uVar13 = puVar2[0xc];
    uVar12 = uVar13 >> 9 & 3;
    local_a8 = 1 << ((iVar7 - LZCOUNT((local_a4 - iVar4) - 1)) + 0x20U & 0x3f);
    local_b0 = 1 << ((iVar7 - LZCOUNT((local_a0 - iVar4) - 1)) + 0x20U & 0x3f);
    if (uVar12 == 2) {
      local_ac = 1 << ((iVar7 - LZCOUNT((local_9c[0] - iVar4) + -1)) + 0x20U & 0x3f);
    }
    else {
      local_ac = 1;
    }
    if (uVar10 == 0) {
      if (((0x10 < local_a8) && (0x10 < local_b0)) || ((uVar13 & 0x800) == 0)) {
        local_a8 = local_a4;
        local_b0 = local_a0;
        local_ac = local_9c[0];
      }
      uVar14 = puVar2[7];
      iVar4 = -((int)uVar14 >> 0x1f);
      FUN_82095c38(&local_a8,&local_b0,&local_ac,uVar11,uVar1,uVar12,iVar4);
      if (iVar4 == 0) {
        if ((puVar2[8] & 0x400) == 0) {
          if ((((uVar13 & 0x800) == 0) && (uVar12 == 1)) &&
             (((puVar2[0xb] & 0x3c0) == 0 && (iVar7 == 0)))) {
            FUN_82095b18(puVar2[8] & 0x3f,&local_a0,local_9c);
            local_b0 = (local_9c[0] + local_a0) - 1 & ~(local_9c[0] - 1);
          }
        }
      }
      uVar12 = (uVar14 >> 0x16 & 0x1ff) * uVar11 * 4;
      uVar14 = local_a4;
      uVar5 = local_a0;
    }
    else {
      uVar14 = local_a4 - iVar4 >> (uVar10 & 0x3f);
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      uVar5 = local_a0 - iVar4 >> (uVar10 & 0x3f);
      uVar14 = uVar14 + iVar4;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uVar5 = uVar5 + iVar4;
      if (uVar12 == 2) {
        uVar8 = local_9c[0] - iVar4 >> (uVar10 & 0x3f);
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar8 = uVar8 + iVar4;
      }
      else {
        uVar8 = 1;
      }
      if ((uVar13 & 0x800) != 0) {
        iVar9 = (iVar7 - LZCOUNT((local_a4 - iVar4) + -1)) + 0x20;
        iVar6 = (iVar7 - LZCOUNT((local_a0 - iVar4) + -1)) + 0x20;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
        uVar13 = iVar9 - 4;
        if (((-1 - ((int)uVar13 >> 0x1f)) + (uint)(uVar13 == 0) & uVar13) <= uVar10) {
          iVar9 = (iVar7 - LZCOUNT((local_a4 - iVar4) + -1)) + 0x20;
          iVar7 = (iVar7 - LZCOUNT((local_a0 - iVar4) + -1)) + 0x20;
          if (iVar7 <= iVar9) {
            iVar9 = iVar7;
          }
          uVar10 = iVar9 - 4;
          uVar10 = (-1 - ((int)uVar10 >> 0x1f)) + (uint)(uVar10 == 0) & uVar10;
        }
      }
      local_a8 = local_a8 >> (uVar10 & 0x3f);
      if (local_a8 < 2) {
        local_a8 = 1;
      }
      local_b0 = local_b0 >> (uVar10 & 0x3f);
      if (local_b0 < 2) {
        local_b0 = 1;
      }
      local_ac = local_ac >> (uVar10 & 0x3f);
      if (local_ac < 2) {
        local_ac = 1;
      }
      FUN_82095c38(&local_a8,&local_b0,&local_ac,uVar11,uVar1,uVar12,puVar2[7] >> 0x1f);
      uVar12 = local_a8 * uVar11 >> 3;
    }
  }
  *param_3 = uVar14;
  *param_4 = uVar5;
  *param_5 = uVar8;
  *param_6 = uVar12;
  *param_7 = uVar12 * local_b0;
  if (((((puVar2[7] & 0x80000000) != 0) || (1 < uVar10)) || ((uVar3 != 3 && (uVar3 != 0x14)))) &&
     ((puVar2[0xc] & 0x600) != 0x400)) {
    *param_7 = uVar12 * local_b0 + 0xfff & 0xfffff000;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82096600 @ 82096600 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82096600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82096700 @ 82096700 ==== */

void FUN_82096700(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_82096be8 @ 82096be8 ==== */

void FUN_82096be8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_82096d50 @ 82096d50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82096d50(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int in_stack_00000054;
  uint in_stack_0000005c;
  uint *in_stack_0000006c;
  undefined4 *in_stack_00000074;
  uint *in_stack_0000007c;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  
  uVar9 = FUN_8207c484();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  iVar7 = in_stack_00000054 * 2 + 1;
  iVar3 = param_4;
  if (iVar1 == 3) {
LAB_82096e00:
    uVar8 = 1;
LAB_82096e0c:
    if (iVar1 != 0x11) {
LAB_82096e14:
      iVar3 = 1;
    }
  }
  else {
    if (iVar1 != 0x11) {
      if (iVar1 == 0x12) {
        uVar8 = 3;
      }
      else {
        if (iVar1 == 0x13) goto LAB_82096e00;
        uVar8 = local_78;
        if (iVar1 != 0x14) goto LAB_82096e0c;
        uVar8 = 0;
        param_8 = 0;
      }
      goto LAB_82096e14;
    }
    uVar8 = 2;
  }
  if (param_5 == 0) {
    param_5 = FUN_82095bb0(iVar2,param_3,iVar3,in_stack_00000054);
  }
  if (param_8 == 2) {
    param_8 = -(uint)(1 < param_5) & 1;
  }
  FUN_82095d58();
  uVar5 = 0x100003;
  if ((param_6 & 4) != 0) {
    uVar5 = 0x300003;
  }
  if ((param_6 & 0x200) != 0) {
    uVar5 = uVar5 | 0x400000;
  }
  *in_stack_0000006c = uVar5;
  uVar6 = in_stack_0000006c[0xc];
  in_stack_0000006c[1] = 1;
  uVar5 = (uVar8 & 3) << 9;
  in_stack_0000006c[5] = 0xffff0000;
  in_stack_0000006c[6] = 0xffff0000;
  in_stack_0000006c[2] = 0;
  in_stack_0000006c[0xc] = uVar5 | uVar6 & 0xfffff9ff;
  if (uVar8 == 0) {
    uVar8 = in_stack_0000006c[9] & 0xff000000 | iVar2 - iVar7 & 0xffffffU;
LAB_82096f6c:
    in_stack_0000006c[9] = uVar8;
  }
  else {
    if (uVar8 == 1) {
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xffffe000 | iVar2 - iVar7 & 0x1fffU;
      uVar4 = (param_3 - iVar7) * 0x2000 & 0x3ffe000U | (param_4 + -1) * 0x4000000;
      uVar8 = in_stack_0000006c[9] & 0x1fff;
    }
    else {
      if (2 < uVar8) {
        if (uVar8 != 3) goto LAB_82096f70;
        uVar8 = (param_4 + -1) * 0x4000000 |
                (param_3 - iVar7) * 0x2000 & 0x3ffe000U | iVar2 - iVar7 & 0x1fffU;
        goto LAB_82096f6c;
      }
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xfffff800 | iVar2 - iVar7 & 0x7ffU;
      uVar4 = (param_3 - iVar7) * 0x800 & 0x3ff800U | (param_4 - iVar7) * 0x400000;
      uVar8 = iVar2 - iVar7 & 0x7ff;
    }
    in_stack_0000006c[9] = uVar4 | uVar8;
  }
LAB_82096f70:
  in_stack_0000006c[7] =
       (((((int)param_7 >> 0xf & 3U) << 2 | (int)param_7 >> 0xd & 3U) << 2 |
        (int)param_7 >> 0xb & 3U) << 2 | (int)param_7 >> 9 & 3U) << 2 |
       ((((int)param_7 >> 8) << 0xe | local_80 & 0x3fff) & 0x7fe0) << 0x11 |
       in_stack_0000006c[7] & 0x3ffc00 | 2;
  in_stack_0000006c[0xb] = (param_5 - 1) * 0x40 & 0x3c0 | in_stack_0000006c[0xb] & 0xfffffc3f;
  in_stack_0000006c[8] =
       (uint)(iVar1 == 0x13) << 10 |
       ((int)param_7 >> 6 & 3U) << 6 | in_stack_0000006c[8] & 0xfffffb00 | param_7 & 0x3f;
  in_stack_0000006c[0xc] = (param_8 & 1) << 0xb | uVar5 | uVar6 & 0xfffff1ff;
  in_stack_0000006c[10] =
       (in_stack_0000005c & 0x3f | in_stack_00000054 << 0x12) << 0xd |
       (int)param_7 >> 0x11 & 0x1fffU | in_stack_0000006c[10] & 0x7ff80000;
  *in_stack_00000074 = local_7c;
  *in_stack_0000007c = local_78;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097048 @ 82097048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097048(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5,
                 undefined4 *param_6,int *param_7,uint *param_8)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  uVar15 = FUN_8207c488();
  iVar3 = (int)((ulonglong)uVar15 >> 0x20);
  iVar5 = (int)uVar15;
  uVar14 = param_3 & 0x3f;
  if ((uVar14 == 0x16) || (bVar2 = false, uVar14 == 0x17)) {
    bVar2 = true;
  }
  if (uVar14 == 0x36) {
    uVar14 = 7;
  }
  param_6[1] = 1;
  *param_6 = 4;
  param_6[5] = 0xffff0000;
  uVar13 = 0xffffffff;
  iVar4 = FUN_82095aa8(iVar3,iVar5,param_3,param_4);
  if (bVar2) {
    iVar9 = iVar5;
    if (0 < (int)param_4) {
      iVar9 = iVar5 << 1;
    }
    iVar11 = iVar3;
    if (param_4 == 2) {
      iVar11 = iVar3 << 1;
    }
    uVar6 = (iVar11 + 0x1fU >> 5) * (iVar9 + 0xfU >> 4) & 0x7fffff;
  }
  else {
    uVar6 = 0;
  }
  if (param_5 == (uint *)0x0) {
    uVar8 = 0;
    uVar7 = 0;
    if (bVar2) {
      uVar13 = -(uint)(iRam820cad08 != 0);
    }
  }
  else {
    uVar8 = *param_5;
    uVar13 = param_5[1];
    uVar7 = param_5[2];
  }
  if ((param_4 == 0) || (param_4 == 1)) {
    uVar10 = ((iVar3 + 0x4fU) / 0x50) * 0x50;
    uVar12 = iVar3 + 0x1fU & 0xffffffe0;
  }
  else {
    uVar10 = ((iVar3 + 0x27U) / 0x28) * 0x28;
    uVar12 = iVar3 + 0xfU & 0xfffffff0;
  }
  param_6[10] = param_3;
  param_6[9] = (iVar5 + -1) * 8 & 0x3fff8U | (iVar3 + -1) * 0x40000 | param_6[9] & 7;
  param_6[6] = (uVar12 << 2 | param_4 & 3) << 0x10 | uVar10 & 0x3fff;
  uVar1 = *(ushort *)(&UNK_82013630 + uVar14 * 2) >> 8;
  uVar12 = uVar1 & 0xf;
  if (bVar2) {
    param_6[7] = (uVar1 & 1) << 0x10 | uVar8 & 0xfff;
    if (uVar13 == 0xffffffff) {
      param_6[8] = 0;
    }
    else {
      if ((param_5 == (uint *)0x0) || (param_5[3] == 0)) {
        uVar14 = (uVar14 - 0x16) - ((uVar14 - 0x17) + (uint)(uVar14 - 0x16 == 0));
      }
      else {
        uVar14 = param_5[3] - 1;
      }
      param_6[8] = (uVar14 & 1 | uVar13 << 0xd) << 4 | 1;
    }
  }
  else {
    if ((uVar1 & 0xf) == 0) {
      if (((((param_3 & 0x20000) == 0) && ((param_3 & 0x600) == 0x600)) &&
          ((param_3 & 0x1800) == 0x1800)) &&
         (((param_3 & 0x6000) == 0x6000 && ((param_3 & 0x18000) == 0)))) {
        uVar12 = 1;
      }
    }
    param_6[7] = ((uVar7 & 0x3f) << 4 | uVar12) << 0x10 | uVar8 & 0xfff;
  }
  param_6[0xb] = iVar4 * 0x1400;
  *param_7 = iVar4;
  *param_8 = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820972b8 @ 820972b8 ==== */

int FUN_820972b8(int param_1)

{
  return (*(uint *)(param_1 + 0x2c) >> 6 & 0xf) + 1;
}


/* ==== FUN_820972c8 @ 820972c8 ==== */

void FUN_820972c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820972e8 @ 820972e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820972e8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_5c;
  
  uVar4 = FUN_8207c490();
  uVar3 = 0;
  uVar1 = FUN_820b33b8();
  if (uVar1 != 0) {
    FUN_82096d50(param_8,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,param_3,param_4,param_5,param_6,
                 2);
    uVar2 = FUN_820b33b8();
    if (uVar2 == 0) {
      uVar3 = 0x24800000;
      uVar2 = uVar1;
    }
    else {
      if ((local_5c == 0) || (uVar3 = FUN_820b33b8(), uVar3 != 0)) {
        *(uint *)(uVar1 + 0x20) = uVar2 & 0xfffff000 | *(uint *)(uVar1 + 0x20) & 0xfff;
        *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xfff | uVar3 & 0xfffff000;
        halt_baddata();
      }
      FUN_820b34f0(uVar1,0x24800000);
      uVar3 = 0xb1800000;
    }
    FUN_820b34f0(uVar2,uVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097408 @ 82097408 ==== */

void FUN_82097408(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_82097540 @ 82097540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097540(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820975d8 @ 820975d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820975d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_8207c488();
  iVar2 = (int)((ulonglong)uVar13 >> 0x20);
  iVar3 = (int)uVar13;
  iVar1 = (iVar3 + 0xc9e) * 4;
  iVar7 = (iVar3 + 0x30) * 0x18;
  puVar12 = *(uint **)(iVar1 + iVar2);
  if (param_3 != 0) {
    uVar11 = *(uint *)(param_3 + 0x30);
    puVar12 = (uint *)(iVar7 + iVar2);
    uVar5 = *(uint *)(param_3 + 0x20);
    uVar10 = *(uint *)(param_3 + 0x2c);
    uVar9 = *(uint *)(param_3 + 0x1c);
    uVar8 = *(uint *)(param_3 + 0x28);
    uVar4 = puVar12[4];
    puVar12[2] = *(uint *)(param_3 + 0x24);
    uVar6 = (uint)*(byte *)(iVar2 + iVar3 + 0x3044);
    puVar12[4] = uVar4 & 0xfffffc03 | uVar10 & 0x3fc;
    *puVar12 = *puVar12 & 0x3ffc00 | uVar9 & 0xffc003ff;
    puVar12[1] = puVar12[1] & 0x800 |
                 ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) & 0xfffff7ff;
    puVar12[3] = puVar12[3] & 0x7ff80000 | uVar8 & 0x8007ffff;
    puVar12[5] = puVar12[5] & 0x1ff | ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffe00);
    if (uVar6 < (uVar10 >> 2 & 0xf)) {
      uVar6 = uVar10 >> 2 & 0xf;
    }
    puVar12[4] = (uVar6 & 0xf) << 2 | uVar4 & 0xfffffc03 | uVar10 & 0x3c0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(iVar7 + iVar2) = *(uint *)(iVar7 + iVar2) & 0xfffffffc;
  *(undefined4 *)(iVar1 + iVar2) = 0;
  if (puVar12 != (uint *)0x0) {
    if (*(uint *)(iVar2 + 0x2b1c) == 0) {
      if ((*(uint *)(iVar2 + 0x2b20) & *puVar12) != 0) {
        if (*(uint *)(iVar2 + 0x366c) <= *(uint *)(iVar2 + 0x3668)) {
                    /* WARNING: Subroutine does not return */
          FUN_820b1418();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      puVar12[2] = *(uint *)(iVar2 + 0x2b1c);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097768 @ 82097768 ==== */

void FUN_82097768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_82097ca0 @ 82097ca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097ca0(void)

{
  undefined4 *extraout_r4;
  
  FUN_8207c47c();
  *extraout_r4 = 0xc0003b00;
  extraout_r4[1] = 0x300;
  extraout_r4[2] = 0xc0192b00;
  extraout_r4[3] = 0;
  extraout_r4[4] = 0x18;
  FUN_8207c860();
  extraout_r4[0x1d] = 0xc00a2b00;
  extraout_r4[0x1e] = 1;
  extraout_r4[0x1f] = 9;
  FUN_8207c860();
  extraout_r4[0x29] = 0x12180;
  extraout_r4[0x2a] = 0x1000000e;
  extraout_r4[0x2b] = 0;
  extraout_r4[0x2c] = 0x22100;
  extraout_r4[0x2d] = 0xffff;
  extraout_r4[0x2e] = 0;
  extraout_r4[0x2f] = 0;
  extraout_r4[0x30] = 0x2293;
  extraout_r4[0x31] = 0;
  extraout_r4[0x32] = 0x22204;
  extraout_r4[0x33] = 0x10000;
  extraout_r4[0x34] = 0x10000;
  extraout_r4[0x35] = 0x300;
  extraout_r4[0x36] = 0x2312;
  extraout_r4[0x37] = 0xffff;
  extraout_r4[0x38] = 0x200d;
  extraout_r4[0x39] = 0;
  extraout_r4[0x3a] = 0x2200;
  extraout_r4[0x3b] = 0;
  extraout_r4[0x3c] = 0x2203;
  extraout_r4[0x3d] = 0;
  extraout_r4[0x3e] = 0x2208;
  extraout_r4[0x3f] = 4;
  extraout_r4[0x40] = 0x2104;
  extraout_r4[0x41] = 0;
  extraout_r4[0x42] = 0x2280;
  extraout_r4[0x43] = 0x80008;
  extraout_r4[0x44] = 0x2302;
  extraout_r4[0x45] = 4;
  extraout_r4[0x46] = 0x22080;
  extraout_r4[0x47] = 0;
  extraout_r4[0x48] = 0;
  extraout_r4[0x49] = 0x100010;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097e78 @ 82097e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097e78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097f90 @ 82097f90 ==== */

int FUN_82097f90(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  *param_3 = 0x5c8;
  param_3[1] = 0x20000;
  uVar1 = ((param_2 & 0x7f) << 8 | -param_2 & 0x7f) << 4;
  iVar4 = 8;
  param_3[2] = 0x78d00;
  puVar2 = param_3 + 2;
  do {
    puVar3 = puVar2;
    puVar3[1] = uVar1 | 1;
    iVar4 = iVar4 + -1;
    puVar2 = puVar3 + 1;
  } while (iVar4 != 0);
  puVar3[2] = 0xd00;
  puVar3[3] = uVar1;
  return (int)(puVar3 + 3) + (4 - (int)param_3) >> 2;
}


/* ==== FUN_82097ff0 @ 82097ff0 ==== */

/* WARNING: Removing unreachable block (ram,0x820b3504) */

void FUN_82097ff0(int param_1)

{
  if (*(int *)(param_1 + 0x3768) != 0) {
    FUN_8203b860();
    return;
  }
  return;
}


/* ==== FUN_82098000 @ 82098000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098000(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs43 [16];
  
  dataCacheBlockTouch(param_3);
  dataCacheBlockTouch(param_3 + 0x80);
  if (3 < param_4) {
    dataCacheBlockTouch(param_3 + 0x100);
    altv300_23(in_vs37,in_vs43);
    altv300_21(in_vs32,in_vs43);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 != 0) {
    altv300_21(in_vs32,in_vs43);
    altv300_23(in_vs37,in_vs43);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820980d8 @ 820980d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820980d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098110 @ 82098110 ==== */

void FUN_82098110(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820982d0 @ 820982d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820982d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098318 @ 82098318 ==== */

void FUN_82098318(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820984e8 @ 820984e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820984e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098530 @ 82098530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098530(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2fd0) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098548 @ 82098548 ==== */

void FUN_82098548(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82098638 @ 82098638 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098638(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820986b8 @ 820986b8 ==== */

void FUN_820986b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820987a0 @ 820987a0 ==== */

void FUN_820987a0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  *param_2 = (uint)((*(uint *)(param_1 + 0x2b28) & 0x7f000) == 0);
  *param_3 = *(uint *)(param_1 + 0x2b28) >> 0xc & 0x7f;
  *param_4 = *(uint *)(param_1 + 0x2b28) >> 4 & 0x7f;
  return;
}


/* ==== FUN_820987d0 @ 820987d0 ==== */

void FUN_820987d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82098900 @ 82098900 ==== */

void FUN_82098900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820989f0 @ 820989f0 ==== */

void FUN_820989f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_82098ae8 @ 82098ae8 ==== */

void FUN_82098ae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_82098bd8 @ 82098bd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098bd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098c28 @ 82098c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098c28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098c40 @ 82098c40 ==== */

int FUN_82098c40(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x2b3c) & 0x20) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3344);
  }
  if ((*(byte *)(param_1 + 0x2b3c) & 0x40) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1;
    if ((*(byte *)(param_1 + 0x2b3f) & 0x20) != 0) {
      iVar2 = 1;
    }
  }
  return iVar2 + iVar1;
}


/* ==== FUN_82098c88 @ 82098c88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098c88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098cf8 @ 82098cf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098cf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098de0 @ 82098de0 ==== */

void FUN_82098de0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_82098e80 @ 82098e80 ==== */

void FUN_82098e80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_82099488 @ 82099488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82099488(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820994a0 @ 820994a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820994a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820994e8 @ 820994e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820994e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82099530 @ 82099530 ==== */

void FUN_82099530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_8209aa78 @ 8209aa78 ==== */

void FUN_8209aa78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209aae8 @ 8209aae8 ==== */

undefined4 FUN_8209aae8(void)

{
  return 0;
}


/* ==== FUN_8209aaf0 @ 8209aaf0 ==== */

void FUN_8209aaf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_8209add8 @ 8209add8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209add8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2948) = *(uint *)(param_1 + 0x2948) & 0xfffffff8 | param_2 & 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ae08 @ 8209ae08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ae08(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2948) = (param_2 & 0xff) << 3 | *(uint *)(param_1 + 0x2948) & 0xfffff807;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ae38 @ 8209ae38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ae38(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x293c) = (param_2 & 1) << 3 | *(uint *)(param_1 + 0x293c) & 0xfffffff7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ae70 @ 8209ae70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ae70(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2ffc);
  *(uint *)(param_1 + 0x2ffc) = param_2 << 0x1f | uVar1 & 0x7fffffff;
  uVar2 = *(uint *)(param_1 + 0x2ff8);
  if ((uVar1 & 0x40000000) == 0) {
    uVar2 = (uVar2 & 0x1010 | (uVar2 & 0xefef) << 4) << 0xc | uVar2 & 0xffff;
  }
  if (param_2 == 0) {
    uVar2 = 0x10001;
  }
  *(uint *)(param_1 + 0x295c) = uVar2;
  *(uint *)(param_1 + 0x2938) = uVar2;
  *(uint *)(param_1 + 0x2958) = uVar2;
  *(uint *)(param_1 + 0x2960) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209af00 @ 8209af00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209af00(int param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x2ff8) = (param_2 & 7) << 5 | *(uint *)(param_1 + 0x2ff8) & 0xffffff1f;
  if ((*(uint *)(param_1 + 0x2ffc) & 0x80000000) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2ff8);
  if ((*(uint *)(param_1 + 0x2ffc) & 0x40000000) == 0) {
    uVar1 = (uVar1 & 0x1010 | (uVar1 & 0xefef) << 4) << 0xc | uVar1 & 0xffff;
  }
  *(uint *)(param_1 + 0x2938) = uVar1;
  *(uint *)(param_1 + 0x2958) = uVar1;
  *(uint *)(param_1 + 0x295c) = uVar1;
  *(uint *)(param_1 + 0x2960) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209af90 @ 8209af90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209af90(int param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x2ff8) = param_2 & 0x1f | *(uint *)(param_1 + 0x2ff8) & 0xffffffe0;
  if ((*(uint *)(param_1 + 0x2ffc) & 0x80000000) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2ff8);
  if ((*(uint *)(param_1 + 0x2ffc) & 0x40000000) == 0) {
    uVar1 = (uVar1 & 0x1010 | (uVar1 & 0xefef) << 4) << 0xc | uVar1 & 0xffff;
  }
  *(uint *)(param_1 + 0x2938) = uVar1;
  *(uint *)(param_1 + 0x2958) = uVar1;
  *(uint *)(param_1 + 0x295c) = uVar1;
  *(uint *)(param_1 + 0x2960) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b020 @ 8209b020 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b020(int param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x2ff8) = (param_2 & 0x1f) << 8 | *(uint *)(param_1 + 0x2ff8) & 0xffffe0ff;
  if ((*(uint *)(param_1 + 0x2ffc) & 0x80000000) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2ff8);
  if ((*(uint *)(param_1 + 0x2ffc) & 0x40000000) == 0) {
    uVar1 = (uVar1 & 0x1010 | (uVar1 & 0xefef) << 4) << 0xc | uVar1 & 0xffff;
  }
  *(uint *)(param_1 + 0x2938) = uVar1;
  *(uint *)(param_1 + 0x2958) = uVar1;
  *(uint *)(param_1 + 0x295c) = uVar1;
  *(uint *)(param_1 + 0x2960) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b120 @ 8209b120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b120(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0x1f) << 0x10 | *(uint *)(param_1 + 0x2ff8) & 0xffe0ffff;
  *(uint *)(param_1 + 0x2ff8) = uVar1;
  if ((*(uint *)(param_1 + 0x2ffc) & 0x80000000) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x2ffc) & 0x40000000) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2938) = uVar1;
  *(uint *)(param_1 + 0x2958) = uVar1;
  *(uint *)(param_1 + 0x295c) = uVar1;
  *(uint *)(param_1 + 0x2960) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b190 @ 8209b190 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b190(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0x1f) << 0x18 | *(uint *)(param_1 + 0x2ff8) & 0xe0ffffff;
  *(uint *)(param_1 + 0x2ff8) = uVar1;
  if ((*(uint *)(param_1 + 0x2ffc) & 0x80000000) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x2ffc) & 0x40000000) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2938) = uVar1;
  *(uint *)(param_1 + 0x2958) = uVar1;
  *(uint *)(param_1 + 0x295c) = uVar1;
  *(uint *)(param_1 + 0x2960) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b200 @ 8209b200 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b200(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2ffc);
  *(uint *)(param_1 + 0x2ffc) = (param_2 & 1) << 0x1e | uVar1 & 0xbfffffff;
  uVar2 = *(uint *)(param_1 + 0x2ff8);
  if (param_2 == 0) {
    uVar2 = (uVar2 & 0x1010 | (uVar2 & 0xefef) << 4) << 0xc | uVar2 & 0xffff;
  }
  if (-1 < (int)uVar1) {
    uVar2 = 0x10001;
  }
  *(uint *)(param_1 + 0x2938) = uVar2;
  *(uint *)(param_1 + 0x2958) = uVar2;
  *(uint *)(param_1 + 0x295c) = uVar2;
  *(uint *)(param_1 + 0x2960) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b4d0 @ 8209b4d0 ==== */

void FUN_8209b4d0(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x5f48) & 0xfffffffe;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x5f48) | 1;
  }
  *(uint *)(param_1 + 0x5f48) = uVar1;
  return;
}


/* ==== FUN_8209b500 @ 8209b500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b500(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3014) = param_2;
  *(uint *)(param_1 + 0x2934) =
       (-(uint)(*(int *)(param_1 + 0x3220) != 0) & param_2 & 1) << 1 |
       *(uint *)(param_1 + 0x2934) & 0xfffffffd;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b540 @ 8209b540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b540(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2934) = (param_2 & 1) << 2 | *(uint *)(param_1 + 0x2934) & 0xfffffffb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209b5a8 @ 8209b5a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b5a8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3018) = param_2;
  *(uint *)(param_1 + 0x2934) =
       -(uint)(*(int *)(param_1 + 0x3220) != 0) & param_2 & 1 |
       *(uint *)(param_1 + 0x2934) & 0xfffffffe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209baa0 @ 8209baa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209baa0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3004) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209c008 @ 8209c008 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c008(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x43f;
  if (param_2 == 0) {
    uVar1 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x294c) = uVar1;
  *(uint *)(param_1 + 0x2944) =
       (uint)(param_2 == 0) << 0x10 | *(uint *)(param_1 + 0x2944) & 0xfffeffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209c048 @ 8209c048 ==== */

uint FUN_8209c048(int param_1)

{
  return *(uint *)(param_1 + 0x294c) & 1;
}


/* ==== FUN_8209c360 @ 8209c360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209c388 @ 8209c388 ==== */

uint FUN_8209c388(int param_1)

{
  return *(uint *)(param_1 + 0x29c0) & 1;
}


/* ==== FUN_8209c648 @ 8209c648 ==== */

void FUN_8209c648(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 14000) = param_2;
  return;
}


/* ==== FUN_8209c678 @ 8209c678 ==== */

void FUN_8209c678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209c820 @ 8209c820 ==== */

void FUN_8209c820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209d0a0 @ 8209d0a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d0a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d198 @ 8209d198 ==== */

void FUN_8209d198(int param_1,undefined4 *param_2)

{
  *param_2 = (int)(longlong)*(float *)(param_1 + 0x32e0);
  param_2[1] = (int)(longlong)*(float *)(param_1 + 0x32e4);
  param_2[2] = (int)(longlong)*(float *)(param_1 + 0x32e8);
  param_2[3] = (int)(longlong)*(float *)(param_1 + 0x32ec);
  param_2[4] = *(undefined4 *)(param_1 + 0x32f0);
  param_2[5] = *(undefined4 *)(param_1 + 0x32f4);
  return;
}


/* ==== FUN_8209d1e8 @ 8209d1e8 ==== */

void FUN_8209d1e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8209d308 @ 8209d308 ==== */

void FUN_8209d308(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8209d390 @ 8209d390 ==== */

void FUN_8209d390(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209d420 @ 8209d420 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d420(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d468 @ 8209d468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d468(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d4a8 @ 8209d4a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d4a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d578 @ 8209d578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d578(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d648 @ 8209d648 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d648(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d698 @ 8209d698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d790 @ 8209d790 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d790(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d9e8 @ 8209d9e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d9e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3000) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d9f8 @ 8209d9f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d9f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209da78 @ 8209da78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209da78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209da98 @ 8209da98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209da98(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar2 = uVar1 >> 0x10 & 3;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 1) {
    uVar3 = 0x8001;
  }
  else {
    uVar3 = 0xc003;
  }
  *(undefined4 *)(param_1 + 0x29bc) = uVar3;
  *(uint *)(param_1 + 0x2880) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209db28 @ 8209db28 ==== */

void FUN_8209db28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209deb8 @ 8209deb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209deb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_8209db28 @ 8209e190 ==== */

void thunk_FUN_8209db28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209e198 @ 8209e198 ==== */

void FUN_8209e198(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209e238 @ 8209e238 ==== */

void FUN_8209e238(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_8209e4f0 @ 8209e4f0 ==== */

void FUN_8209e4f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209e568 @ 8209e568 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209e5d8 @ 8209e5d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e5d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209e620 @ 8209e620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e620(void)

{
  FUN_8207c494();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209e8d0 @ 8209e8d0 ==== */

void FUN_8209e8d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3614);
  return;
}


/* ==== FUN_8209e8e0 @ 8209e8e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e8e0(void)

{
  int iVar1;
  uint in_r6;
  
  iVar1 = FUN_8207c490();
  *(char *)(iVar1 + 0x3268) = (char)(in_r6 >> 2);
  if (((in_r6 >> 2 & 0xff) != (uint)*(byte *)(iVar1 + 0x2fe8)) && (*(int *)(iVar1 + 0x3310) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209eda0 @ 8209eda0 ==== */

void FUN_8209eda0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_8209ede8 @ 8209ede8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ede8(void)

{
  FUN_8207c47c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209f260 @ 8209f260 ==== */

undefined4 FUN_8209f260(int param_1)

{
  if (((((param_1 != 0x1e) && (param_1 != 0x1f)) && (param_1 != 0x20)) &&
      ((param_1 != 0x24 && (param_1 != 0x25)))) &&
     ((param_1 != 0x26 && ((param_1 != 0x39 && (param_1 != 0x3f)))))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_8209f2b0 @ 8209f2b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209f2b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209f358 @ 8209f358 ==== */

uint FUN_8209f358(double param_1,undefined4 param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  fVar1 = (float)param_1;
  if (((uint)fVar1 & 0x80000000) == 0) {
    if ((uint)fVar1 >> 0x17 < 0x71) {
      iVar2 = -((uint)fVar1 >> 0x17 & 0xff);
      uVar3 = ((1 << (iVar2 + 0x70U & 0x3f)) + ((uint)fVar1 & 0x7fffff) | 0x800000) >>
              (iVar2 + 0x71U & 0x3f);
    }
    else {
      uVar3 = ((uint)fVar1 & 0x7800000 | (int)fVar1 + 4U) >> 3;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 << 8 | param_3 & 0xff;
}


/* ==== FUN_8209f3c0 @ 8209f3c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209f3c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209f4e0 @ 8209f4e0 ==== */

void FUN_8209f4e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_8209f958 @ 8209f958 ==== */

void FUN_8209f958(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_8209fa30 @ 8209fa30 ==== */

void FUN_8209fa30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_8209fc90 @ 8209fc90 ==== */

void FUN_8209fc90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820a0de8 @ 820a0de8 ==== */

void FUN_820a0de8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a0e38 @ 820a0e38 ==== */

uint FUN_820a0e38(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0xf;
  if (uVar2 == 3) {
    uVar1 = param_1[0xc] >> 9 & 3;
    if (uVar1 == 3) {
      uVar2 = 0x12;
    }
    else if (uVar1 == 2) {
      uVar2 = 0x11;
    }
    else if (uVar1 == 0) {
      uVar2 = 0x14;
    }
    else if ((param_1[8] & 0x400) != 0) {
      uVar2 = 0x13;
    }
  }
  else if (((uVar2 == 4) && ((*param_1 & 0x40000000) != 0)) &&
          ((*(uint *)(param_1[6] + 0x30) & 0x600) == 0x400)) {
    uVar2 = 0x10;
  }
  return uVar2;
}


/* ==== FUN_820a0ec8 @ 820a0ec8 ==== */

void FUN_820a0ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820a1018 @ 820a1018 ==== */

int FUN_820a1018(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 0xf) == 1) {
    uVar1 = param_1[6] & 0xfffffffc;
  }
  else if ((*param_1 & 0xf) == 3) {
    uVar1 = param_1[8] & 0xfffff000;
    if (uVar1 == 0) {
      uVar1 = param_1[0xc] & 0xfffff000;
    }
  }
  else {
    uVar1 = param_1[6];
  }
  return ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
}


/* ==== FUN_820a1070 @ 820a1070 ==== */

void FUN_820a1070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a1130 @ 820a1130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a11a8 @ 820a11a8 ==== */

void FUN_820a11a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820a1270 @ 820a1270 ==== */

void FUN_820a1270(void)

{
  FUN_820a0ec8();
  return;
}


/* ==== FUN_820a1280 @ 820a1280 ==== */

void FUN_820a1280(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820a1330 @ 820a1330 ==== */

void FUN_820a1330(void)

{
  FUN_820a0ec8();
  return;
}


/* ==== FUN_820a1340 @ 820a1340 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1340(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1498 @ 820a1498 ==== */

void FUN_820a1498(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820a1820 @ 820a1820 ==== */

void FUN_820a1820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820a1918 @ 820a1918 ==== */

void FUN_820a1918(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820a1b80 @ 820a1b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1b80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1e28 @ 820a1e28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1e28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1ea8 @ 820a1ea8 ==== */

void FUN_820a1ea8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2018 @ 820a2018 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a2018(void)

{
  FUN_8207c488();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2388 @ 820a2388 ==== */

void FUN_820a2388(void)

{
  FUN_820a2018();
  return;
}


/* ==== FUN_820a23d8 @ 820a23d8 ==== */

void FUN_820a23d8(void)

{
  FUN_820a2018();
  return;
}


/* ==== FUN_820a2420 @ 820a2420 ==== */

void FUN_820a2420(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x42f0);
  *(int *)(param_1 + 0x34) = iVar1 + 0x12c0;
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x38) = iVar1 + 0x1220;
  *(byte *)(param_1 + 0x2b3d) = *(byte *)(param_1 + 0x2b3d) | 0x20;
  return;
}


/* ==== FUN_820a2448 @ 820a2448 ==== */

void FUN_820a2448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a24e0 @ 820a24e0 ==== */

void FUN_820a24e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2590 @ 820a2590 ==== */

void FUN_820a2590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820a26a8 @ 820a26a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820a26a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b50) = param_2;
  sync(0);
  _DAT_7fc80714 = param_2;
  enforceInOrderExecutionIO();
  sync(0);
  return;
}


/* ==== FUN_820a26c8 @ 820a26c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a26c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2730 @ 820a2730 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a2730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2788 @ 820a2788 ==== */

void FUN_820a2788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2820 @ 820a2820 ==== */

void FUN_820a2820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2a50 @ 820a2a50 ==== */

void FUN_820a2a50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2b20 @ 820a2b20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a2b20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2b80 @ 820a2b80 ==== */

void FUN_820a2b80(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    **(int **)(param_1 + 4) =
         ((*(uint *)(param_1 + 0xc) >> 0x14) + 0x200 & 0x1000) +
         (*(uint *)(param_1 + 0xc) & 0x1fffffff) + -0x40000000;
    **(undefined4 **)(param_1 + 0xc) = 0xc0000000;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== FUN_820a2bc8 @ 820a2bc8 ==== */

void FUN_820a2bc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2c68 @ 820a2c68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a2c68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2d50 @ 820a2d50 ==== */

void FUN_820a2d50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a2ec0 @ 820a2ec0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820a2ec0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_80;
  uint local_7c;
  uint local_78 [30];
  
  uVar12 = FUN_8207c484();
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  puVar5 = (uint *)uVar12;
  uVar10 = *(uint *)(iVar3 + 0x3bc8);
  iVar9 = *(int *)(iVar3 + 0x3bc4);
  bVar2 = *(char *)puVar5 == -0x71;
  if ((*(byte *)(iVar3 + 0x2b3d) & 2) == 0) {
    local_80 = *(uint *)(iVar3 + 0x2b50);
    FUN_820a24e0();
    uVar8 = 0;
    uVar7 = local_80;
    if (param_3 != 0) {
      do {
        piVar4 = *(int **)(iVar3 + 0x55b4);
        uVar11 = (puVar5 + uVar8 * 2)[1];
        local_7c = puVar5[uVar8 * 2] & 0xffffff;
        if ((piVar4 != (int *)0x0) && (DAT_820cad44 == 0)) {
          iVar1 = -0x40000000;
          if (0x1fffffff < uVar11) {
            iVar1 = -0x41000000;
          }
          (**(code **)(*piVar4 + 0x18))(piVar4,uVar11 + iVar1,local_7c,1,bVar2);
          uVar7 = local_80;
        }
        if (*(code **)(iVar3 + 0x5cd8) != (code *)0x0) {
          iVar1 = -0x40000000;
          if (0x1fffffff < uVar11) {
            iVar1 = -0x41000000;
          }
          local_78[0] = uVar11 + iVar1;
          (**(code **)(iVar3 + 0x5cd8))(1,local_78,&local_7c,-(uint)bVar2 & 0x40000000 | 1);
          uVar7 = local_80;
          if (uVar11 + iVar1 != local_78[0]) {
            uVar11 = ((local_78[0] >> 0x14) + 0x200 & 0x1000) + (local_78[0] & 0x1fffffff);
          }
        }
        if (local_7c != 0) {
          if (bVar2) {
            if (uVar8 == 0) {
              *(undefined4 *)(uVar7 * 4 + iVar9) = 0x80000000;
              uVar7 = local_80 + 1 & uVar10;
              local_80 = uVar7;
            }
            uVar6 = 0xc0013700;
          }
          else {
            uVar6 = 0xc0013f00;
          }
          *(undefined4 *)(uVar7 * 4 + iVar9) = uVar6;
          uVar7 = local_80 + 1 & uVar10;
          *(uint *)(uVar7 * 4 + iVar9) = uVar11;
          uVar7 = uVar7 + 1 & uVar10;
          *(uint *)(uVar7 * 4 + iVar9) = local_7c;
          uVar7 = uVar7 + 1 & uVar10;
          local_80 = uVar7;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_3);
    }
    *(uint *)(iVar3 + 0x2b50) = uVar7;
    sync(0);
    enforceInOrderExecutionIO();
    sync(0);
    _DAT_7fc80714 = uVar7;
    if (*(int **)(iVar3 + 0x55b4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x55b4) + 0x1c))();
    }
    if (*(code **)(iVar3 + 0x5cd8) != (code *)0x0) {
      (**(code **)(iVar3 + 0x5cd8))(2,0,&local_80,0);
    }
  }
  else if (*(int *)(iVar3 + 0x55b4) != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      iVar9 = -0x40000000;
      if (0x1fffffff < puVar5[1]) {
        iVar9 = -0x41000000;
      }
      (**(code **)(**(int **)(iVar3 + 0x55b4) + 0x18))
                (*(int **)(iVar3 + 0x55b4),puVar5[1] + iVar9,*puVar5 & 0xffffff,1,bVar2);
      (**(code **)(**(int **)(iVar3 + 0x55b4) + 0x1c))();
      puVar5 = puVar5 + 2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3190 @ 820a3190 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3190(void)

{
  FUN_8207c494();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a33a0 @ 820a33a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a33a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a34e0 @ 820a34e0 ==== */

void FUN_820a34e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820a3760 @ 820a3760 ==== */

void FUN_820a3760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a3870 @ 820a3870 ==== */

void FUN_820a3870(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820a38f0 @ 820a38f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a38f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uStack_60;
  undefined4 uStack_5c;
  
  uVar6 = FUN_8207c490();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  bVar1 = false;
  uStack_5c = param_3;
  if (*(int *)(iVar2 + 0x3520) == 0) {
    if (*(int *)(iVar2 + 0x2b90) != 0) {
      uVar3 = func_0x820b7688(iVar2 + 0x2b94);
      if (*(int *)(iVar2 + 0x2b90) != 0) {
        uVar5 = 0x8f000000;
        if (param_7 == 0) {
          uVar5 = 0x81000000;
        }
        *(uint *)(iVar4 + 4) = uVar5 | param_4;
        *(undefined4 *)(iVar4 + 8) = param_3;
        *(undefined4 *)(iVar4 + 0xc) = 0xc0000000;
        FUN_820a2bc8();
        bVar1 = true;
        *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5;
      }
      func_0x820b7668(iVar2 + 0x2b94,uVar3);
      if (bVar1) {
        if ((*(byte *)(iVar2 + 0x2b40) & 8) == 0) {
          halt_baddata();
        }
        func_0x820b7bb8(iVar2 + 0x5f8c,1,0);
        *(byte *)(iVar2 + 0x2b40) = *(byte *)(iVar2 + 0x2b40) & 0xf7;
        halt_baddata();
      }
    }
    if ((*(int *)(iVar2 + 0x55b4) != 0) || (bVar1 = false, *(int *)(iVar2 + 0x5cd8) != 0)) {
      bVar1 = true;
    }
    if ((((~*(uint *)(iVar2 + 0x5f48) >> 8 & 1) == 0) || (param_7 == 0)) || (!bVar1)) {
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5;
      uStack_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | param_4 & 0xffffff;
      FUN_820a2ec0(iVar2,&uStack_60,1);
    }
    else {
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5 + 1;
      FUN_820b2fe8();
    }
  }
  else {
    uStack_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | param_4 & 0xffffff;
    FUN_820a3870();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3ad0 @ 820a3ad0 ==== */

void FUN_820a3ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[5] = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a3af0 @ 820a3af0 ==== */

void FUN_820a3af0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820a3c78 @ 820a3c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3c78(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = FUN_8207c488();
  if (*(int *)(iVar2 + 0x3520) == 0) {
    if (*(int *)(iVar2 + 0x2b90) != 0) {
      iVar3 = FUN_820a2c68();
      FUN_8207c860();
      *(undefined4 *)(param_3 * param_4 * 4 + iVar3 + 4) = 0xc0000000;
      uVar4 = func_0x820b7688(iVar2 + 0x2b94);
      bVar1 = *(int *)(iVar2 + 0x2b90) != 0;
      if (bVar1) {
        FUN_820a2bc8();
      }
      func_0x820b7668(iVar2 + 0x2b94,uVar4);
      if (bVar1) {
        if (param_6 == 0) {
          halt_baddata();
        }
        if ((*(byte *)(iVar2 + 0x2b40) & 8) == 0) {
          halt_baddata();
        }
        func_0x820b7bb8(iVar2 + 0x5f8c,1,0);
        *(byte *)(iVar2 + 0x2b40) = *(byte *)(iVar2 + 0x2b40) & 0xf7;
        halt_baddata();
      }
    }
    if (param_5 != 0) {
      *(int *)(iVar2 + 0x35d4) = iVar2;
      *(undefined4 *)(iVar2 + 0x35c4) = 0;
      *(undefined4 *)(iVar2 + 0x35c8) = 0x80;
      *(undefined4 *)(iVar2 + 0x35cc) = 0;
      *(undefined4 *)(iVar2 + 0x35d0) = 0;
      *(undefined4 *)(iVar2 + 0x35c0) = 0;
      FUN_820a3760();
      FUN_820a3870();
      FUN_820a2b80(iVar2 + 0x35c0);
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + 1;
      uVar5 = *(uint *)(iVar2 + 0x35c0);
      if (uVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) + -0x40000000;
      }
      func_0x820b7c98(*(int *)(iVar2 + 0x2cc8) * 0x6c + iVar2 + 0x2d58,iVar3,0);
    }
  }
  else {
    FUN_820a3870();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3e30 @ 820a3e30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3e30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3f38 @ 820a3f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4000 @ 820a4000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4068 @ 820a4068 ==== */

void FUN_820a4068(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a40e0 @ 820a40e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a40e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4158 @ 820a4158 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4158(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [8];
  undefined2 local_c0;
  undefined2 local_be;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  uVar14 = FUN_8207c494();
  iVar1 = (int)((ulonglong)uVar14 >> 0x20);
  iVar5 = (int)uVar14;
  if ((*(int *)(iVar1 + 0x2b1c) != 0) && (*(int *)(iVar1 + 0x30) != 0)) {
    FUN_820a40e0();
    while (*(int *)(iVar1 + 0x2b74) != *(int *)(iVar1 + 0x2b70)) {
      FUN_8203b900();
    }
  }
  uVar6 = *(uint *)(iVar1 + 0x3bcc);
  if (uVar6 != 0) {
    FUN_820b1c98(((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff) + 0xc0000000,
                 ((*(uint *)(iVar1 + 0x3bd0) >> 0x14) + 0x200 & 0x1000) +
                 (*(uint *)(iVar1 + 0x3bd0) & 0x1fffffff) + -0x40000000);
  }
  FUN_820b34f0(*(int *)(iVar1 + 0x3b88),0xb1800000);
  FUN_820b34f0(*(int *)(iVar1 + 0x3b8c),0xb1800000);
  *(undefined4 *)(iVar1 + 0x3b88) = 0;
  *(undefined4 *)(iVar1 + 0x3b8c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  func_0x820b7cd8(0);
  if (iVar5 != 0) {
    uVar10 = *(uint *)(iVar5 + 4);
    iVar11 = *(int *)(iVar5 + 8);
    uVar12 = *(uint *)(iVar5 + 0xc);
    iVar13 = *(int *)(iVar5 + 0x10);
    uVar6 = *(uint *)(iVar5 + 0x14);
    if (uVar10 == 0) {
      uVar10 = 0x8000;
    }
    if (uVar12 == 0) {
      uVar12 = 0x200000;
    }
    if (uVar6 == 0) {
      uVar6 = 0x20;
    }
    trapWord(6,uVar6,0);
    if (iVar11 == 0) {
      iVar11 = FUN_820b33b8();
      *(int *)(iVar1 + 0x3b88) = iVar11;
    }
    if (iVar13 == 0) {
      iVar13 = FUN_820b33b8();
      *(int *)(iVar1 + 0x3b8c) = iVar13;
    }
    if ((iVar11 != 0) && (iVar13 != 0)) {
      uVar2 = func_0x820b7528(iVar11);
      func_0x820b7cc8(uVar2,0x1c - LZCOUNT(uVar10));
      uVar3 = 0x1f - LZCOUNT(uVar10 >> 9);
      if (0x13 < uVar3) {
        uVar3 = 0x13;
      }
      uVar7 = *(int *)(iVar1 + 0x2b10) + 0x3c;
      func_0x820b7cb8(((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff),uVar3);
      iVar8 = (uVar12 & 0xfffffffc) + iVar13;
      *(undefined4 *)(iVar8 + -4) = 0xbadf00d;
      iVar5 = (uVar12 / uVar6 & 0xfffffffc) + iVar13;
      *(int *)(iVar1 + 0x3bd0) = iVar8 + -4;
      *(uint *)(iVar1 + 0x3bec) = uVar12 >> 2;
      *(int *)(iVar1 + 0x3bc4) = iVar11;
      *(int *)(iVar1 + 0x3bcc) = iVar13;
      *(int *)(iVar1 + 0x3be0) = iVar13;
      *(int *)(iVar1 + 0x3be4) = iVar13;
      *(uint *)(iVar1 + 0x3bd4) = uVar12 / uVar6;
      *(uint *)(iVar1 + 0x3bc8) = (uVar10 >> 2) - 1;
      *(undefined4 *)(*(int *)(iVar1 + 0x2b10) + 0x3c) = 0;
      *(undefined4 *)(iVar1 + 0x2b50) = 0;
      *(int *)(iVar1 + 0x30) = iVar13 + -4;
      *(int *)(iVar1 + 0x34) = iVar5;
      *(int *)(iVar1 + 0x38) = iVar5 + -0xa0;
      *(undefined4 *)(iVar1 + 0x3bd8) = 0;
      if (*(int *)(iVar1 + 0x2b1c) == 0) {
        *(undefined4 *)(iVar1 + 0x2b1c) = 3;
      }
      **(int **)(iVar1 + 0x2b10) = *(int *)(iVar1 + 0x2b1c) + -2;
      *(uint *)(*(int *)(iVar1 + 0x2b10) + 4) =
           *(uint *)(iVar1 + 0x3bdc) & 3 | *(uint *)(iVar1 + 0x30);
      func_0x820b7cd8(*(int *)(iVar1 + 0x2b10) + 8);
      local_e8 = 0;
      iVar5 = 8;
      puVar4 = &local_e4;
      local_f0 = 0xc0114800;
      local_ec = 0x3ff;
      puVar9 = (undefined4 *)&UNK_82013c68;
      local_e4 = 0;
      do {
        puVar9 = puVar9 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_b8 = 0;
      local_b4 = 0;
      *(undefined2 *)(iVar1 + 0x2b2c) = 1;
      *(undefined2 *)(iVar1 + 0x2b2e) = 0x800;
      local_be = 0x800;
      local_c0 = 1;
      local_bc = 7;
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      func_0x820b7ca8(&local_f0,0x13);
      FUN_820a2590();
      uVar6 = *(uint *)(iVar1 + 0x30);
      if (*(uint *)(iVar1 + 0x38) < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_820a3e30();
      }
      *(undefined4 *)(uVar6 + 4) = 0xd02;
      *(undefined4 *)(uVar6 + 8) = 0x10800;
      *(undefined4 *)(uVar6 + 0xc) = 0x30a02;
      *(undefined4 *)(uVar6 + 0x10) = 0xc0100000;
      *(undefined4 *)(uVar6 + 0x14) = 0x7f00000;
      *(undefined4 *)(uVar6 + 0x18) = 0xc0000000;
      *(undefined4 *)(uVar6 + 0x1c) = 0x100000;
      *(undefined4 *)(uVar6 + 0x20) = 0x1dd;
      *(uint *)(uVar6 + 0x24) =
           ((*(uint *)(iVar1 + 0x2b14) >> 0x14) + 0x200 & 0x1000) +
           (*(uint *)(iVar1 + 0x2b14) & 0x1fffffff);
      *(undefined4 *)(uVar6 + 0x28) = 0x1dc;
      *(undefined4 *)(uVar6 + 0x2c) = 0x20037;
      *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar6 + 0x2c);
      FUN_820a4000();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4548 @ 820a4548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a45d0 @ 820a45d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a45d0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  char acStack_120 [288];
  
  iVar3 = FUN_8207c494();
  uVar4 = (**(code **)(iVar3 + 4))(0x5d0);
  bVar2 = false;
  FUN_820a4548(iVar3,"   %25s: 0x%08x (","RBBM_STATUS",uVar4);
  iVar8 = 0xb;
  puVar10 = (undefined4 *)0x820c6d7c;
  do {
    if ((puVar10[-1] & uVar4) != 0) {
      if (bVar2) {
        FUN_820a4548(iVar3,&UNK_8200a7c0);
      }
      FUN_820a4548(iVar3,*puVar10);
      bVar2 = true;
    }
    iVar8 = iVar8 + -1;
    puVar10 = puVar10 + 2;
  } while (iVar8 != 0);
  if (!bVar2) {
    FUN_820a4548(iVar3,"CPU Synchronization");
  }
  FUN_820a4548(iVar3,&UNK_82013f14);
  (**(code **)(iVar3 + 8))(0xf11,0);
  FUN_8203b900();
  uVar5 = (**(code **)(iVar3 + 4))(0xf12);
  FUN_820a4548(iVar3,"   %25s: 0x%08x\n","RB_SIDEBAND_DATA[0]",uVar5);
  iVar8 = 0x1e;
  puVar10 = (undefined4 *)0x820c6dcc;
  do {
    uVar5 = (**(code **)(iVar3 + 4))(puVar10[1]);
    puVar10 = puVar10 + 2;
    FUN_820a4548(iVar3,"   %25s: 0x%08x\n",*puVar10,uVar5);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar11 = (uint *)0x820c6ed0;
  iVar8 = 5;
  do {
    FUN_820a4548(iVar3,&UNK_8200a7b4);
    uVar4 = 0;
    if (*puVar11 != 0) {
      do {
        func_0x820b7cf8(acStack_120,"%s 0x%02x: ",puVar11[1],uVar4);
        uVar9 = uVar4 + 8;
        while( true ) {
          uVar6 = *puVar11;
          if (uVar9 < *puVar11) {
            uVar6 = uVar9;
          }
          if (uVar6 <= uVar4) break;
          (**(code **)(iVar3 + 8))(puVar11[-4],uVar4 << (puVar11[-1] & 0x3f) | puVar11[-2]);
          FUN_8203b900();
          uVar5 = (**(code **)(iVar3 + 4))(puVar11[-3]);
          pcVar7 = acStack_120;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          func_0x820b7cf8(pcVar7 + (int)(acStack_120 + (-1 - (int)acStack_120)),&UNK_82013ee4,uVar5)
          ;
          uVar4 = uVar4 + 1;
        }
        FUN_820a4548(iVar3,&UNK_82013ee0,acStack_120);
        uVar4 = uVar9;
      } while (uVar9 < *puVar11);
    }
    iVar8 = iVar8 + -1;
    puVar11 = puVar11 + 6;
  } while (iVar8 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4838 @ 820a4838 ==== */

void FUN_820a4838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820a48f8 @ 820a48f8 ==== */

void FUN_820a48f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820a4ad8 @ 820a4ad8 ==== */

void FUN_820a4ad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820a5398 @ 820a5398 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5398(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5458 @ 820a5458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5458(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x5f50) != 0) {
    *(undefined4 *)(param_1 + 0x5f4c) = 1;
    sync(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 0x5f68) != 0) {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0x3f;
    do {
      iVar1 = *(int *)(param_1 + 0x5f70) + iVar3;
      iVar3 = iVar3 + 0x14;
      *(uint *)(iVar2 + *(int *)(param_1 + 0x5f68)) =
           *(int *)(iVar1 + 4) * 0x30000 + 0x10000U | 0xc0001000;
      iVar2 = iVar2 + 0x80;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    sync(0);
    iVar2 = 0;
    iVar3 = 0x3f;
    do {
      iVar4 = iVar2 + *(int *)(param_1 + 0x5f68);
      iVar2 = iVar2 + 0x80;
      *(undefined4 *)(iVar4 + 0x6c) = 0xffffffff;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    sync(0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5530 @ 820a5530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a55d8 @ 820a55d8 ==== */

void FUN_820a55d8(undefined4 param_1)

{
  func_0x820b7d08(param_1,0);
  if (*DAT_82000600 != 0) {
    FUN_820a5458(*DAT_82000600);
  }
  return;
}


/* ==== FUN_820a5618 @ 820a5618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5618(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_8207c494();
  puVar2 = (undefined4 *)0x820c67c0;
  uVar3 = 0;
  do {
    *(undefined4 *)(((uVar3 >> 2) + 0x10) * 4 + iVar1) = puVar2[1];
    *(undefined4 *)(((uVar3 >> 2) + 0x89) * 4 + iVar1) = *puVar2;
    (**(code **)(uVar3 + iVar1 + 0x40))(iVar1,puVar2[2]);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while (uVar3 < 0x194);
  uVar3 = 0;
  puVar2 = (undefined4 *)0x820c6c88;
  do {
    *(undefined4 *)(((uVar3 >> 2) + 0x75) * 4 + iVar1) = puVar2[-1];
    *(undefined4 *)(((uVar3 >> 2) + 0xee) * 4 + iVar1) = puVar2[-2];
    (**(code **)(uVar3 + iVar1 + 0x1d4))(iVar1,0,*puVar2);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while (uVar3 < 0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5880 @ 820a5880 ==== */

void FUN_820a5880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a5930 @ 820a5930 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5930(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5988 @ 820a5988 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5988(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5a00 @ 820a5a00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5a00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5a68 @ 820a5a68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5a68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5be8 @ 820a5be8 ==== */

void FUN_820a5be8(undefined4 param_1)

{
  int iVar1;
  
  func_0x820b7d08(param_1,0);
  iVar1 = func_0x820b77e8();
  if ((iVar1 != 2) && (*DAT_82000600 != 0)) {
    FUN_820a5a00();
  }
  func_0x820b7d68();
  return;
}


/* ==== FUN_820a5c38 @ 820a5c38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5c38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5cd0 @ 820a5cd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5cd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5d40 @ 820a5d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5d90 @ 820a5d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5e10 @ 820a5e10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5e10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5fe8 @ 820a5fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5fe8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_690;
  undefined4 local_68c;
  float local_67c;
  undefined1 auStack_660 [1632];
  
  uVar9 = FUN_8207c490();
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  puVar4 = (undefined4 *)uVar9;
  uVar8 = puVar4[0x10];
  uVar7 = *puVar4;
  uVar6 = puVar4[1];
  if ((uVar8 == 0) || (uVar8 == 0x28280186)) {
    uVar8 = 0x28280000;
  }
  else {
    if (uVar8 != 0x18280186) {
      if (uVar8 == 0x282801b6) {
        uVar8 = 0x28280000;
      }
      else {
        if (uVar8 != 0x182801b6) goto LAB_820a6088;
        uVar8 = 0x18280000;
      }
      uVar8 = uVar8 | 0x136;
      goto LAB_820a6088;
    }
    uVar8 = 0x18280000;
  }
  uVar8 = uVar8 | 0x106;
LAB_820a6088:
  uVar1 = uVar8 & 0x3f;
  if (uVar1 == 0x32) {
    uVar5 = 6;
  }
  else {
    uVar5 = uVar1;
    if (uVar1 == 7) {
      uVar5 = 0x36;
    }
  }
  func_0x820b7d48(&local_690);
  local_67c = local_67c + DAT_820066fc;
  *(undefined4 *)(iVar3 + 0x55c0) = local_690;
  *(undefined4 *)(iVar3 + 0x55c8) = local_690;
  *(int *)(iVar3 + 0x55cc) = (int)(longlong)local_67c;
  *(undefined4 *)(iVar3 + 0x55c4) = local_68c;
  if (puVar4[0xf] == 0) {
    iVar2 = FUN_820972e8(uVar7,uVar6,1,1,0,uVar8,0,3);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar3 + 0x3b80) = iVar2;
  }
  if (puVar4[0xe] == 0) {
    iVar2 = FUN_82097408();
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar3 + 0x3b84) = iVar2;
    FUN_8209db28();
  }
  if (puVar4[9] != 0) {
    iVar2 = FUN_82097408();
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar3 + 0x3b7c) = iVar2;
    FUN_8209deb8();
  }
  FUN_8207c860();
  if ((uVar8 & 0x3ffc0000) != 0x24900000) {
    *(uint *)(iVar3 + 0x36bc) = uVar1 | 0x28280100;
  }
  FUN_820ac140(iVar3,puVar4 + 0x18);
  if ((uVar5 == 7) || (uVar5 == 0x36)) {
    FUN_820a6ba8((int)auStack_660,0);
    FUN_8209d578();
  }
  else {
    FUN_820a6b60((int)auStack_660,0);
    FUN_8209d4a8();
  }
  *(undefined4 *)(iVar3 + 0x42dc) = 0xffffffff;
  iVar3 = func_0x820b77e8();
  if (iVar3 != 2) {
    if ((puVar4[0xb] & 0x30) == 0) {
      FUN_820a5a00();
    }
    else {
      FUN_820a5988();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6268 @ 820a6268 ==== */

void FUN_820a6268(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a64e8 @ 820a64e8 ==== */

void FUN_820a64e8(short *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2[1] >> 6) + (uint)(*param_2 >> 6);
  if (0x3ff < uVar2) {
    uVar2 = 0x3ff;
  }
  iVar1 = (uint)(*param_2 >> 6) * 2;
  *param_1 = *(short *)(iVar1 + param_3) << 6;
  param_1[1] = (*(short *)(uVar2 * 2 + param_3) - *(short *)(iVar1 + param_3)) * 0x40;
  return;
}


/* ==== FUN_820a6538 @ 820a6538 ==== */

double FUN_820a6538(double param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  
  if (param_3 == 0) {
    fVar1 = DAT_820156d8;
    if (DAT_820156e0 < param_1) {
      dVar2 = (double)FUN_8207fe70();
      return (double)((float)dVar2 * DAT_820156cc - DAT_820156f4);
    }
  }
  else {
    fVar1 = DAT_820156f8;
    if (DAT_82015700 < param_1) {
      dVar2 = (double)FUN_8207fe70();
      return (double)(float)dVar2;
    }
  }
  return (double)(float)(param_1 * (double)fVar1);
}


/* ==== FUN_820a65e8 @ 820a65e8 ==== */

double FUN_820a65e8(double param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  
  if (param_3 == 0) {
    fVar1 = DAT_82015718;
    if (DAT_82015720 <= param_1) {
      dVar2 = (double)FUN_8207fe70();
      return (double)((float)dVar2 * DAT_82015708 - DAT_82015734);
    }
  }
  else {
    fVar1 = DAT_82015738;
    if (DAT_82015740 <= param_1) {
      dVar2 = (double)FUN_8207fe70();
      return (double)(float)dVar2;
    }
  }
  return (double)(float)(param_1 * (double)fVar1);
}


/* ==== FUN_820a6698 @ 820a6698 ==== */

void FUN_820a6698(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820a6820 @ 820a6820 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a6820(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a68b8 @ 820a68b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a68b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6940 @ 820a6940 ==== */

void FUN_820a6940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a6a30 @ 820a6a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a6a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6b60 @ 820a6b60 ==== */

void FUN_820a6b60(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  uVar3 = 0;
  puVar4 = (undefined2 *)(param_1 + 0x3fe);
  iVar5 = 0x100;
  do {
    uVar2 = uVar3 / 0xff;
    uVar3 = uVar3 + 0x3ff;
    uVar1 = (undefined2)(uVar2 << 6);
    puVar4[-0x1ff] = uVar1;
    puVar4[-0xff] = uVar1;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (param_2 == 0) {
    return;
  }
  FUN_820a6820();
  return;
}


/* ==== FUN_820a6ba8 @ 820a6ba8 ==== */

void FUN_820a6ba8(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = 0;
  psVar3 = (short *)(param_1 + 0x3fe);
  iVar4 = 0x80;
  do {
    sVar1 = (short)(uVar2 / 0x7f);
    uVar2 = uVar2 + 0xffff;
    psVar3[-0x1ff] = sVar1;
    psVar3[-0xff] = sVar1;
    psVar3[1] = sVar1;
    sVar1 = (short)(uVar2 / 0x7f) - sVar1;
    psVar3[-0x1fe] = sVar1;
    psVar3[-0xfe] = sVar1;
    psVar3 = psVar3 + 2;
    *psVar3 = sVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_2 == 0) {
    return;
  }
  FUN_820a68b8();
  return;
}


/* ==== FUN_820a6c10 @ 820a6c10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a6c10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6d80 @ 820a6d80 ==== */

void FUN_820a6d80(int param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = (short *)(param_2 + 0x3fe);
  psVar2 = (short *)(param_1 + 2);
  iVar4 = 0x80;
  do {
    psVar2[-1] = psVar3[-0x1ff];
    *psVar2 = *(short *)((param_2 - param_1) + (int)psVar2) + psVar3[-0x1ff];
    psVar2[0xff] = psVar3[-0xff];
    psVar2[0x100] = psVar3[-0xff] + psVar3[-0xfe];
    psVar2[0x1ff] = psVar3[1];
    psVar1 = psVar3 + 1;
    psVar3 = psVar3 + 2;
    psVar2[0x200] = *psVar1 + *psVar3;
    psVar2 = psVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


/* ==== FUN_820a6df0 @ 820a6df0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a6df0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6e48 @ 820a6e48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a6e48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6f38 @ 820a6f38 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820a6f38(undefined4 param_1,int *param_2)

{
  if ((*param_2 != 0) && (*param_2 != 1)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a7068 @ 820a7068 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a7068(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a70d8 @ 820a70d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_820a70d8(int param_1,int param_2)

{
  if (param_1 < 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0xffff;
  }
  if (param_2 <= param_1) {
    return 0xfffe;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a71e0 @ 820a71e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a71e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a7278 @ 820a7278 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a7278(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a72d0 @ 820a72d0 ==== */

void FUN_820a72d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820a7350 @ 820a7350 ==== */

void FUN_820a7350(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820a7428 @ 820a7428 ==== */

void FUN_820a7428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a74e8 @ 820a74e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a74e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a7550 @ 820a7550 ==== */

void FUN_820a7550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a75a8 @ 820a75a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a75a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a75f0 @ 820a75f0 ==== */

void FUN_820a75f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820a77e8 @ 820a77e8 ==== */

void FUN_820a77e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a78f8 @ 820a78f8 ==== */

void FUN_820a78f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820a7d48 @ 820a7d48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a7d48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8410 @ 820a8410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a8410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8510 @ 820a8510 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a8510(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a85c8 @ 820a85c8 ==== */

void FUN_820a85c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820a8668 @ 820a8668 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a8668(void)

{
  FUN_8207c484();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8e20 @ 820a8e20 ==== */

void FUN_820a8e20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820a92b8 @ 820a92b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a92b8(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint auStack_ccc [819];
  
  uVar3 = FUN_8207c488();
  iVar1 = (int)(uVar3 >> 0x20);
  *(int *)(iVar1 + 0x5ccc) = *(int *)(iVar1 + 0x5ccc) + 1;
  if ((uVar3 & 1) != 0) {
    FUN_820a6df0();
                    /* WARNING: Subroutine does not return */
    FUN_820a3e30();
  }
  iVar2 = (((uint)(*param_3 + param_5) >> 0x14) + 0x200 & 0x1000) +
          (*param_3 + param_5 & 0x1fffffffU);
  if ((((*(int *)(iVar2 + -0x3ffffffc) == 0) && (*(uint *)(iVar2 + -0x3ffffff8) < 3)) &&
      (*(uint *)(iVar2 + -0x3ffffff0) <= *(uint *)(iVar1 + 0x564c))) &&
     (*(uint *)(iVar2 + -0x3fffffec) <= *(uint *)(iVar1 + 0x5650))) {
                    /* WARNING: Subroutine does not return */
    FUN_8207c6b0(auStack_ccc,0,0x34);
  }
  FUN_820b1c98(iVar2 + 0xc0000000,iVar2 + -0x3ffff9dc);
  *(int *)(iVar1 + 0x5ccc) = *(int *)(iVar1 + 0x5ccc) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a9608 @ 820a9608 ==== */

void FUN_820a9608(void)

{
  uint auStack_47c [247];
  
  FUN_8207c478();
                    /* WARNING: Subroutine does not return */
  FUN_8207c6b0(auStack_47c,0,0x18);
}


/* ==== FUN_820a9d20 @ 820a9d20 ==== */

void FUN_820a9d20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820a9e50 @ 820a9e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a9e50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a9fc8 @ 820a9fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a9fc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa058 @ 820aa058 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa058(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa130 @ 820aa130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa3d0 @ 820aa3d0 ==== */

void FUN_820aa3d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820aa4f8 @ 820aa4f8 ==== */

void FUN_820aa4f8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  param_3[3] = param_2[3];
  param_3[4] = param_2[4];
  param_3[5] = param_2[5];
  if (param_2[6] == 0) {
    param_3[6] = 0;
    param_3[10] = 0;
  }
  else {
    param_3[6] = 3;
    param_3[10] = 3;
  }
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  return;
}


/* ==== FUN_820aa570 @ 820aa570 ==== */

void FUN_820aa570(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820aa5d0 @ 820aa5d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa5d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa670 @ 820aa670 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820aa670(void)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs43 [16];
  
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs41);
  altv207_13(in_vs32,in_vs39);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa758 @ 820aa758 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa940 @ 820aa940 ==== */

void FUN_820aa940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820aad98 @ 820aad98 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_820aad98(double param_1)

{
  float fVar1;
  
  if (ABS(param_1) < (double)_UNK_820166a0) {
    fVar1 = (float)(param_1 * (double)_UNK_8201669c) * (float)(param_1 * (double)_UNK_8201669c);
    return (double)((((((fVar1 * _UNK_82016698 + _UNK_82016694) * fVar1 + _UNK_82016690) * fVar1 +
                      _UNK_8201668c) * fVar1 + _UNK_82016688) * fVar1 + _UNK_82016684) * fVar1 +
                   DAT_820066d0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aaf40 @ 820aaf40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aaf40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ab000 @ 820ab000 ==== */

double FUN_820ab000(double param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = DAT_820066d0;
  if (param_1 != (double)DAT_82002f44) {
    dVar2 = (double)DAT_8200e7d4;
    dVar3 = (double)FUN_820aa670((double)(float)(param_1 * dVar2));
    fVar1 = (float)(dVar3 / (double)(float)(param_1 * dVar2));
  }
  return (double)fVar1;
}


/* ==== FUN_820ab058 @ 820ab058 ==== */

double FUN_820ab058(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)DAT_820066d0 <= ABS(param_1)) {
    dVar1 = (double)DAT_820066d4;
    if (dVar1 <= ABS(param_1)) {
      dVar1 = (double)DAT_82002f44;
    }
    else {
      dVar2 = (double)FUN_820aa758();
      dVar3 = (double)FUN_820aa758();
      dVar1 = (double)(-(float)(ABS(param_1) * (double)DAT_8200a7dc -
                               (double)(float)(dVar2 * (double)DAT_8200a8a4 -
                                              (double)(float)(dVar3 * dVar1))) + DAT_82006b98);
    }
  }
  else {
    dVar1 = (double)FUN_820aa758();
    dVar2 = (double)FUN_820aa758();
    dVar1 = (double)((float)(dVar1 * (double)DAT_820069ac -
                            (double)(float)(dVar2 * (double)DAT_8200a8a4)) + DAT_82006700);
  }
  return dVar1;
}


/* ==== FUN_820ab160 @ 820ab160 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_820ab160(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)DAT_820066d0 <= ABS(param_1)) {
    if ((double)DAT_820066d4 <= ABS(param_1)) {
      dVar1 = (double)DAT_82002f44;
    }
    else {
      dVar1 = (double)FUN_820aa758();
      dVar3 = (double)DAT_82006b84;
      dVar2 = (double)FUN_820aa758();
      dVar1 = (double)(-(float)(ABS(param_1) * (double)DAT_8200a76c -
                               (double)(float)(dVar1 * (double)_UNK_82006704 -
                                              (double)(float)(dVar2 * dVar3))) + DAT_8200a8a4);
    }
  }
  else {
    dVar1 = (double)FUN_820aa758();
    dVar2 = (double)FUN_820aa758();
    dVar1 = (double)((float)(dVar1 * (double)_UNK_8200a598 -
                            (double)(float)(dVar2 * (double)_UNK_82006704)) + _UNK_8200a5a0);
  }
  return dVar1;
}


/* ==== FUN_820ab268 @ 820ab268 ==== */

void FUN_820ab268(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820ab6a0 @ 820ab6a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ab6a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ab980 @ 820ab980 ==== */

void FUN_820ab980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820abf10 @ 820abf10 ==== */

void FUN_820abf10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820ac0c0 @ 820ac0c0 ==== */

void FUN_820ac0c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820ac140 @ 820ac140 ==== */

void FUN_820ac140(undefined4 param_1,undefined4 *param_2)

{
  undefined4 auStack_40 [16];
  
  FUN_820aa4f8(param_1,param_2,auStack_40);
  FUN_820ac0c0();
  return;
}


/* ==== FUN_820ac170 @ 820ac170 ==== */

void FUN_820ac170(int param_1)

{
  if (*(code **)(param_1 + 0x365c) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x820ac180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x365c))();
  return;
}


/* ==== FUN_820ac188 @ 820ac188 ==== */

void FUN_820ac188(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820ac270 @ 820ac270 ==== */

void FUN_820ac270(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820ac350 @ 820ac350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ac350(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ac3c8 @ 820ac3c8 ==== */

void FUN_820ac3c8(void)

{
  FUN_820a2590();
  return;
}


/* ==== FUN_820ac420 @ 820ac420 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ac420(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ac490 @ 820ac490 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ac490(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ac4f8 @ 820ac4f8 ==== */

void FUN_820ac4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820ac648 @ 820ac648 ==== */

void FUN_820ac648(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820ac7d0 @ 820ac7d0 ==== */

void FUN_820ac7d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x2d00) = uRam7fc8112c;
  iVar1 = TBLr;
  *(int *)(param_1 + 0x2cfc) = iVar1;
  *(int *)(param_1 + 0x2d08) =
       *(int *)(*(int *)(param_1 + 0x2b10) + 0x70) - *(int *)(param_1 + 0x2d04);
  *(int *)(param_1 + 0x2d0c) =
       *(int *)(param_1 + 0x2d00) - *(int *)(*(int *)(param_1 + 0x2b10) + 0x70);
  *(int *)(param_1 + 0x2d04) = *(int *)(param_1 + 0x2d00);
  *(int *)(param_1 + 0x2cf8) = *(int *)(param_1 + 0x4244);
  *(int *)(param_1 + 0x2d10) = (iVar1 - *(int *)(param_1 + 0x4244)) * 10;
  *(int *)(param_1 + 0x2d28) =
       *(int *)(*(int *)(param_1 + 0x2b10) + 0x74) - *(int *)(*(int *)(param_1 + 0x2b10) + 0x70);
  iVar1 = iRam7fc80e5c;
  if ((*(int *)(param_1 + 0x2d1c) != 0) && ((*(byte *)(param_1 + 0x2b3e) & 1) != 0)) {
    *(int *)(param_1 + 0x2d14) = iRam7fc80e5c - *(int *)(*(int *)(param_1 + 0x2b10) + 0x78);
    if (*(int *)(param_1 + 0x2d20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x2b10) + 0x78) - *(int *)(param_1 + 0x2d24);
    }
    *(int *)(param_1 + 0x2d18) = iVar2;
    *(int *)(param_1 + 0x2d24) = iVar1;
    *(undefined4 *)(param_1 + 0x2d20) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x2d18) = 0;
  *(undefined4 *)(param_1 + 0x2d14) = 0;
  *(undefined4 *)(param_1 + 0x2d20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x2b10) + 0x7c) =
       *(undefined4 *)(*(int *)(param_1 + 0x2b10) + 0x78);
  return;
}


/* ==== FUN_820ac918 @ 820ac918 ==== */

undefined4 FUN_820ac918(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x24 + param_1;
  uVar1 = *(uint *)(iVar2 + 0x5fa8);
  if (uVar1 != *(uint *)(iVar2 + 0x5fa0)) {
    do {
      if ((*(uint *)((*(uint *)(iVar2 + 0x5fac) & uVar1) * 0x1c + *(int *)(iVar2 + 0x5f9c) + 0x18) &
          0x40000000) == 0) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      *(uint *)(iVar2 + 0x5fa8) = uVar1;
      if (*(int *)(iVar2 + 0x5fa4) + 1U == uVar1) {
        *(uint *)(iVar2 + 0x5fa4) = uVar1;
      }
    } while (*(int *)(iVar2 + 0x5fa8) != *(int *)(iVar2 + 0x5fa0));
  }
  return 0;
}


/* ==== FUN_820ac988 @ 820ac988 ==== */

void FUN_820ac988(void)

{
  FUN_820a2590();
  return;
}


/* ==== FUN_820ac9f0 @ 820ac9f0 ==== */

void FUN_820ac9f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820acae0 @ 820acae0 ==== */

void FUN_820acae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820acb80 @ 820acb80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820acb80(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_d0;
  int local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  
  uVar12 = FUN_8207c488();
  iVar2 = (int)((ulonglong)uVar12 >> 0x20);
  iVar3 = (int)uVar12;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(iVar2 + 0x19c) != 0) {
    FUN_820acae0();
  }
  iVar4 = param_3 * 0x24 + iVar3;
  local_bc = 0x1004d;
  local_c0 = 0x1857e;
  iVar9 = (*(int *)(iVar4 + 0x5fa8) + 1U & *(uint *)(iVar4 + 0x5fac)) * 0x1c +
          *(int *)(iVar4 + 0x5f9c);
  iVar8 = 0;
  local_b8 = *(undefined4 *)(iVar9 + 0x14);
  local_b4 = 0x5c8;
  local_b0 = 0x20000;
  local_ac = 0xe00;
  local_a8 = 1;
  local_a4 = 0xe40;
  local_a0 = 1;
  FUN_820a2590();
  bVar11 = *(int *)(iVar2 + 0x18c) != param_3;
  if (bVar11) {
    *(undefined4 *)(iVar4 + 0x5fb8) = *(undefined4 *)(iVar9 + 0x14);
  }
  bVar1 = false;
  do {
    uVar5 = *(int *)(iVar4 + 0x5fa8) + 1;
    *(uint *)(iVar4 + 0x5fa8) = uVar5;
    piVar10 = (int *)((uVar5 & *(uint *)(iVar4 + 0x5fac)) * 0x1c + *(int *)(iVar4 + 0x5f9c));
    if ((piVar10[4] & 0x400000U) != 0) {
      *(undefined4 *)(iVar2 + 0x1ac) = 1;
    }
    if (!bVar1) {
      if (*piVar10 == 0) {
LAB_820acd00:
        if ((piVar10[6] & 0x80000000U) != 0) {
          local_8c = 0;
          local_90 = 0x57b;
          *(int *)(iVar4 + 0x5fb4) = piVar10[5];
          local_80 = piVar10[5];
          uVar7 = (param_3 + 0x19) * 4 + *(int *)(iVar3 + 0x2b10);
          uVar5 = *(int *)(iVar3 + 0x2b10) + 0x74;
          local_88 = 0xc0013d00;
          local_78 = 0x80000003;
          local_84 = ((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff) | 2;
          local_70 = 0xdeadbeef;
          local_74 = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) | 2;
          local_7c = 0xc0025800;
          FUN_820a2590();
          local_d0 = *(uint *)(iVar2 + 0x34) & 0xffffff | 0x81000000;
          local_cc = ((*(uint *)(iVar2 + 0x30) >> 0x14) + 0x200 & 0x1000) +
                     (*(uint *)(iVar2 + 0x30) & 0x1fffffff);
          FUN_820a2ec0(iVar3,&local_d0,1);
          *(undefined4 *)(iVar3 + 0x2cf0) = 0;
          *(int *)(iVar3 + 0x2d2c) = *(int *)(iVar3 + 0x2d2c) + 1;
        }
      }
      else if ((piVar10[4] & 0x40000000U) == 0) {
        if (((piVar10[4] & 0x80000000U) == 0) || (bVar11)) {
          FUN_820ac9f0();
          iVar8 = iVar8 + 1;
          goto LAB_820acd00;
        }
      }
      else {
        uVar6 = *(undefined4 *)(iVar4 + 0x5fa8);
        bVar1 = true;
        *(int *)(iVar2 + 0x1a0) = param_3;
        *(undefined4 *)(iVar2 + 0x19c) = 1;
        *(undefined4 *)(iVar2 + 0x1a4) = uVar6;
      }
    }
    if ((piVar10[6] & 0x20000000U) != 0) {
      if (!bVar1) {
        FUN_820ac350();
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar8;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_820ace38 @ 820ace38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ace38(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_60 [24];
  
  uVar11 = FUN_8207c490();
  iVar5 = (int)((ulonglong)uVar11 >> 0x20);
  iVar7 = (int)uVar11;
  do {
    bVar2 = false;
    bVar4 = false;
    uVar10 = 0;
    puVar8 = (uint *)(iVar5 + 400);
    piVar9 = (int *)(iVar7 + 0x5fa8);
LAB_820ace6c:
    do {
      if (*(int *)(iVar5 + 0x1ac) == 0) {
        uVar6 = FUN_820ac918(iVar7,uVar10);
        bVar1 = false;
        if ((uVar6 & 0xff) != 0) goto LAB_820ace90;
      }
      else {
LAB_820ace90:
        bVar1 = true;
      }
      if ((piVar9[-2] == *piVar9) ||
         (((uint)(piVar9[-2] - *piVar9) <= *(uint *)(param_3 + 4) >> 0x12 &&
          ((*(uint *)(param_3 + 4) >> 0xc & 0x3f) <= *puVar8)))) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
        if (!bVar1) {
          local_60[0] = 0;
          FUN_820acb80(iVar5,iVar7,uVar10,local_60);
          bVar4 = (bool)(local_60[0] != 0 | bVar4);
          goto LAB_820ace6c;
        }
      }
      uVar10 = uVar10 + 1;
      bVar2 = (bool)(bVar3 | bVar2);
      piVar9 = piVar9 + 9;
      puVar8 = puVar8 + 1;
    } while (uVar10 < 3);
    if ((!bVar2) || (!bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_820acf40 @ 820acf40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820acf40(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8207c488();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = func_0x820b77e8();
  piVar3 = DAT_82000600;
  if (iVar2 == 2) {
    piVar3 = DAT_82000604;
  }
  uVar4 = 0;
  if (*(uint *)(*piVar3 + 0x6008) != 0) {
    do {
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(*piVar3 + 0x6008));
  }
  *(undefined4 *)(iVar1 + 0x19c) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1a4) = 0xffffffff;
  uVar4 = *(uint *)((int)uVar5 + 4);
  *(undefined4 *)(iVar1 + 0x188) = 0;
  if ((uVar4 >> 0xb & 1) != 0) {
    *(undefined4 *)(iVar1 + 0x188) = 0x40;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad408 @ 820ad408 ==== */

undefined4 FUN_820ad408(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x5cec);
  iVar2 = 0x29;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}


/* ==== FUN_820ad430 @ 820ad430 ==== */

void FUN_820ad430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820ad6e8 @ 820ad6e8 ==== */

void FUN_820ad6e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820ad768 @ 820ad768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ad768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad870 @ 820ad870 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x820adc04) */
/* WARNING: Removing unreachable block (ram,0x820ada64) */
/* WARNING: Removing unreachable block (ram,0x820adbfc) */
/* WARNING: Removing unreachable block (ram,0x820add44) */
/* WARNING: Removing unreachable block (ram,0x820ada6c) */

void FUN_820ad870(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8207c47c();
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  *(uint *)(iVar3 + 0x5f38) = *(uint *)(iVar3 + 0x5f38) & 0x1fffffff;
  uVar4 = *(uint *)((int)uVar5 + 0x24);
  sVar2 = ((ushort)((uint)*(undefined4 *)((int)uVar5 + 0x28) >> 0x1e) & 2) + 1;
  sVar1 = ((ushort)uVar4 & 0x1fff) + sVar2;
  sVar2 = ((ushort)(uVar4 >> 0xd) & 0x1fff) + sVar2;
  *(short *)(iVar3 + 0x5e4c) = sVar1;
  *(short *)(iVar3 + 0x5e4e) = sVar2;
  *(ushort *)(iVar3 + 0x5e50) = sVar1 + 0x1fU & 0xffe0;
  *(ushort *)(iVar3 + 0x5e52) = sVar2 + 0x1fU & 0xffe0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820adf88 @ 820adf88 ==== */

void FUN_820adf88(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 + *(int *)(param_1 + 0x17c);
  uVar1 = *(uint *)(param_1 + 0x254) >> 0x14 & 0x3f;
  *(uint *)(param_1 + 0x17c) = uVar4;
  uVar3 = (*(ushort *)(param_1 + 0xe) + 0xac) * 0x200 + uVar4;
  if (uVar1 == (*(uint *)(param_1 + 0x254) >> 0xe & 0x3f) - 1) {
    uVar2 = *(uint *)(param_1 + 0x180);
  }
  else {
    uVar2 = 0xfff00000;
  }
  if (uVar4 <= uVar3) {
    if (uVar3 <= uVar2) {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
  }
  *(uint *)((uVar1 + 0x2e) * 4 + param_1) = uVar4;
  uVar3 = *(uint *)(param_1 + 0x254);
  uVar1 = uVar3 >> 0xe & 0x3f;
  uVar4 = (uVar3 >> 0x14 & 0x3f) + 1;
  trapWord(6,uVar1,0);
  uVar1 = (uVar4 - (uVar4 / uVar1) * uVar1) * 0x100000 & 0x3f00000;
  *(uint *)(param_1 + 0x254) = uVar1 | uVar3 & 0xfc0fffff;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x17c) = 0x800;
    *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) | 0x20;
    return;
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}


/* ==== FUN_820ae040 @ 820ae040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ae040(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined1 auStack_8b0 [5];
  char local_8ab;
  ushort local_868;
  ushort local_866;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  uint local_844;
  uint local_840;
  uint local_83c;
  uint local_838;
  uint local_834;
  undefined4 local_830;
  uint local_82c;
  
  iVar3 = FUN_8207c494();
  bVar2 = *(byte *)(iVar3 + 0x5f3c);
  if ((bVar2 & 0x10) != 0) {
    if (*(int *)(iVar3 + 0x5e48) != 0) {
      if ((bVar2 & 0x80) != 0) {
        if ((bVar2 & 0x40) != 0) {
          FUN_8203c6a8();
        }
        FUN_820a2b20();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = 0;
      if ((*(uint *)(iVar3 + 0x5f30) & 0xfc000) != 0) {
        do {
          FUN_8203c300();
          FUN_82092238();
          uVar6 = uVar6 + 1;
        } while (uVar6 < (*(uint *)(iVar3 + 0x5f30) >> 0xe & 0x3f));
      }
      func_0x820b7d28(auStack_8b0);
      iVar4 = *(int *)(iVar3 + 0x5f38) >> 0x1d;
      if (iVar4 == 0) {
        local_850 = 0x53a722b4;
      }
      else if (iVar4 == 1) {
        local_850 = 0x53a722b5;
      }
      else if (iVar4 == 2) {
        local_850 = 0x53a722b6;
      }
      local_84c = 0x10001;
      if ((iVar4 == 0) || (iVar4 == 1)) {
        local_840 = (uint)*(ushort *)(iVar3 + 0x5e4c);
        local_83c = (uint)*(ushort *)(iVar3 + 0x5e4e);
        local_838 = (uint)local_868;
        local_834 = (uint)local_866;
      }
      else if (iVar4 == 2) {
        local_840 = 400;
        local_83c = 0xe0;
        local_838 = 400;
        local_834 = 0xe0;
      }
      local_830 = func_0x820b7be8();
      bVar1 = (*(uint *)(iVar3 + 0x5f30) >> 0x1a & 1) != 0;
      local_82c = (uint)bVar1;
      if ((*(uint *)(iVar3 + 0x5f30) >> 0x1a & 2) != 0) {
        local_82c = bVar1 | 2;
      }
      if (local_8ab == '\x01') {
        local_82c = local_82c | 4;
        FUN_820a68b8();
      }
      else {
        FUN_820a6820();
      }
      uVar6 = *(uint *)(iVar3 + 0x5f30);
      FUN_8207c860();
      if ((*(byte *)(iVar3 + 0x5f3c) & 0x20) == 0) {
        local_848 = 0x800;
        local_844 = 0;
      }
      else {
        local_844 = uVar6 >> 0x14 & 0x3f;
        local_848 = *(undefined4 *)(iVar3 + 0x5e58);
      }
      *(undefined4 *)(iVar3 + 0x5e40) = 0;
      *(undefined4 *)(iVar3 + 0x5e44) = 0;
      FUN_8203b910();
      FUN_8203c6a8();
      FUN_8203ba38();
    }
    uVar6 = 0;
    piVar7 = (int *)(iVar3 + 0x5cf0);
    do {
      if (*piVar7 == -1) break;
      FUN_8203ba38();
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < 0x29);
  }
  piVar7 = (int *)*DAT_820005fc;
  if (piVar7 == (int *)0x0) {
    if (*DAT_82000538 == 0) goto LAB_8207c4e4;
    pcVar5 = *(code **)(*DAT_82000538 + 0x18);
  }
  else if ((piVar7 == (int *)0x0) || (pcVar5 = (code *)*piVar7, pcVar5 == (code *)0x0))
  goto LAB_8207c4e4;
  (*pcVar5)(0x1b,"PIX!{CaptureEnded}");
LAB_8207c4e4:
  FUN_820ad768();
  func_0x820b7628(&DAT_820c7fd8);
  DAT_820cc2a6 = 0;
  DAT_820cc2a4 = 0;
  DAT_820cc2a5 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ae460 @ 820ae460 ==== */

void FUN_820ae460(void)

{
  FUN_820ae040();
  DAT_820cc2a7 = 0;
  return;
}


/* ==== FUN_820ae490 @ 820ae490 ==== */

void FUN_820ae490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820ae7f8 @ 820ae7f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ae7f8(void)

{
  FUN_8207c490();
  FUN_820986b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820af0c0 @ 820af0c0 ==== */

void FUN_820af0c0(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_110 [272];
  
  if (DAT_820cc2a6 != '\0') {
    if ((*(byte *)(param_1 + 0x5f3c) & 0x10) == 0) {
      iVar1 = FUN_820ae490();
      func_0x820b7cf8(auStack_110,"%s 0x%08X","PIX!{CaptureFileCreationEnded}",
                      -(uint)(iVar1 == 0) & 0x80004005);
      piVar2 = (int *)*DAT_820005fc;
      if (piVar2 == (int *)0x0) {
        if (*DAT_82000538 == 0) {
          return;
        }
        pcVar3 = *(code **)(*DAT_82000538 + 0x18);
      }
      else {
        if (piVar2 == (int *)0x0) {
          return;
        }
        pcVar3 = (code *)*piVar2;
        if (pcVar3 == (code *)0x0) {
          return;
        }
      }
      (*pcVar3)(0x1b,auStack_110);
    }
    else if (DAT_820cc2a4 == '\0') {
      if (DAT_820cc2a5 != '\0') {
        FUN_820ae7f8();
      }
    }
    else {
      FUN_820ae040();
    }
  }
  return;
}


/* ==== FUN_820af1b0 @ 820af1b0 ==== */

void FUN_820af1b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820af268 @ 820af268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820af268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820af460 @ 820af460 ==== */

void FUN_820af460(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c48c();
}


/* ==== FUN_820af7f0 @ 820af7f0 ==== */

void FUN_820af7f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820af8b0 @ 820af8b0 ==== */

void FUN_820af8b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820afa30 @ 820afa30 ==== */

void FUN_820afa30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820afb88 @ 820afb88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820afb88(void)

{
  FUN_8207c490();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820afcd8 @ 820afcd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820afcd8(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  undefined8 uVar21;
  ushort local_200;
  undefined1 uStack_1f1;
  uint local_1f0 [124];
  
  uVar21 = FUN_8207c488();
  iVar19 = (int)((ulonglong)uVar21 >> 0x20);
  iVar11 = *(int *)((param_5 + 0x70) * 8 + iVar19) + iVar19;
  iVar18 = *(int *)(iVar11 + 900);
  if (iVar18 != 0) {
    uVar16 = *(uint *)(param_3 + 0x18);
    puVar20 = (uint *)((*(int *)(iVar11 + 0x380) + 9) * 4 + iVar11 + 0x368);
    if (iVar18 != 0) {
      iVar11 = (param_5 * 0x1a0 + iVar19 + 0x44) - (int)local_1f0;
      uVar9 = (uint)local_200;
      puVar3 = local_1f0;
      puVar17 = puVar20;
      iVar19 = iVar18;
      do {
        uVar8 = 0;
        uVar2 = *(uint *)((int)puVar3 + iVar11 + 4);
        uVar1 = *(uint *)((int)puVar3 + iVar11 + 8);
        if (uVar16 == 0) {
LAB_820afdb0:
          uVar12 = *(uint *)(iVar11 + (int)puVar3) & 0xc00fffff | 0x5f00000;
          uVar8 = uVar9 & 0xf | 0x9250;
          uVar2 = uVar2 & 0xbfc6cfff | 0x60000;
          uVar9 = uVar1 & 0x80000000 | (uint)*param_4;
        }
        else {
          puVar7 = (ushort *)(param_3 + 0x34);
          do {
            if (((uint)*(byte *)((int)puVar7 + 9) == (*puVar17 >> 0xc & 0xf)) &&
               ((uint)*(byte *)(puVar7 + 5) == (*puVar17 >> 0x10 & 0xf))) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 6;
          } while (uVar8 < uVar16);
          if (uVar16 <= uVar8) goto LAB_820afdb0;
          uVar4 = *(uint *)(puVar7 + 2);
          uVar12 = (uVar4 >> 10 & 0x38 | uVar4 >> 0x10 & 7) << 3 | uVar4 >> 0x13 & 7;
          uVar8 = (uVar12 << 1 | uVar4 & 0x1c00) << 3 | uVar9 & 0xf;
          if ((uVar4 & 0xc0) == 0x40) {
            if ((uVar4 & 0x1c00) << 3 < 0x6001) {
              uVar8 = (uVar4 & 0x1c00) << 3 ^ 0x2000 | uVar12 << 4 | uVar9 & 0xf;
            }
            if ((uVar8 & 0x1c00) < 0xc01) {
              uVar8 = uVar8 & 0x1c00 ^ 0x400 | uVar8 & 0xe3ff;
            }
            if ((uVar8 & 0x380) < 0x181) {
              uVar8 = uVar8 & 0x380 ^ 0x80 | uVar8 & 0xfc7f;
            }
            if ((uVar8 & 0x70) < 0x31) {
              uVar8 = uVar8 & 0x70 ^ 0x10 | uVar8 & 0xff8f;
            }
          }
          iVar14 = 0x5f - (uint)*puVar7;
          uVar12 = (iVar14 * -0x4ffd5000 & 0xf80000U | iVar14 * 0x1560056 & 0x3000000U) << 1 |
                   *(uint *)(iVar11 + (int)puVar3) & 0xc00fffff;
          uVar2 = ((uVar4 & 0x3f) << 0xc | uVar4 & 0x300) << 4 | uVar2 & 0xbfc0cfff;
          uVar9 = (puVar7[1] & 0x1fffffc) << 6 | (uint)param_4[*puVar7] | uVar1 & 0x80000000;
        }
        *puVar3 = uVar12;
        puVar3[2] = uVar9;
        iVar19 = iVar19 + -1;
        uVar9 = uVar8 | 0xe;
        puVar17 = puVar17 + 1;
        uVar1 = uVar9 & *(ushort *)(&DAT_820185ec + (uVar2 & 7) * 2);
        uVar8 = uVar9 & *(ushort *)(&DAT_820185ec + ((uVar2 & 0xfffffff8) >> 2 & 0xe));
        uVar12 = uVar9 & *(ushort *)(&DAT_820185ec + ((uVar2 & 0x1c0) >> 5));
        uVar4 = uVar9 & *(ushort *)(&DAT_820185ec + ((uVar2 & 0xe00) >> 8));
        puVar3[1] = ((((uVar1 >> 3 | uVar1) >> 3 | uVar1) >> 3 | uVar1) >> 3 | uVar1) >> 1 & 7 |
                    uVar2 & 0xfffff000 |
                    ((((uVar8 >> 3 | uVar8) >> 3 | uVar8) >> 3 | uVar8) >> 1 | uVar8 << 2) & 0x38 |
                    (((uVar12 >> 3 | uVar12) >> 3 | uVar12) >> 1 | (uVar12 << 3 | uVar12) << 2) &
                    0x1c0 | (((uVar4 << 3 | uVar4) << 3 | uVar4) << 2 | (uVar4 >> 3 | uVar4) >> 1) &
                            0xe00;
        puVar3 = puVar3 + 3;
      } while (iVar19 != 0);
    }
    puVar17 = puVar20 + iVar18;
    puVar3 = puVar20;
    if (puVar20 < puVar17) {
      while (puVar3 < puVar17) {
        do {
          if ((*puVar3 & 0x300000) != 0) break;
          puVar3 = puVar3 + 1;
        } while (puVar3 < puVar17);
        if ((puVar17 <= puVar3) || (puVar13 = puVar3 + 1, puVar17 <= puVar13)) break;
        do {
          if ((*puVar13 & 0x300000) != 0) break;
          puVar13 = puVar13 + 1;
        } while (puVar13 < puVar17);
        if (puVar17 <= puVar13) break;
        uVar1 = (int)puVar13 - (int)puVar3 >> 2;
        iVar19 = (int)puVar3 - (int)puVar20 >> 2;
        puVar5 = local_1f0 + iVar19 * 3;
        puVar3 = puVar13 + 1;
        uVar2 = 0xffffffff;
        uVar16 = uVar1 + 1;
        uVar9 = uVar1;
        if ((*puVar13 & 0x300000) == 0x300000) {
          uVar9 = uVar1 - 1;
          uVar2 = local_1f0[((int)puVar13 - (int)puVar20 >> 2) * 3] >> 0x12 & 0x7c |
                  local_1f0[((int)puVar13 - (int)puVar20 >> 2) * 3] >> 0x19 & 3;
          uVar16 = uVar1;
        }
        if (uVar9 != 0) {
          uVar8 = 1;
          puVar13 = puVar5;
          do {
            if (uVar8 < uVar16) {
              iVar11 = uVar16 - uVar8;
              puVar6 = puVar13;
              do {
                puVar10 = puVar6 + 3;
                uVar4 = *puVar13 >> 0x12 & 0x7c | *puVar13 >> 0x19 & 3;
                uVar12 = *puVar10 >> 0x12 & 0x7c | *puVar10 >> 0x19 & 3;
                iVar18 = uVar12 - uVar4;
                if (iVar18 == 0) {
                  iVar18 = ((int)(puVar13[2] << 1 | puVar13[2] >> 0x1f) >> 9) -
                           ((int)(puVar6[5] << 1 | puVar6[5] >> 0x1f) >> 9);
                  if (iVar18 == 0) {
                    iVar18 = (uint)(byte)(&DAT_82018600)[*(ushort *)(puVar13 + 1) & 0x3f] -
                             (uint)(byte)(&DAT_82018600)[*(ushort *)(puVar6 + 4) & 0x3f];
                  }
LAB_820b0194:
                  if (0 < iVar18) goto LAB_820b019c;
                }
                else {
                  if (uVar2 != uVar4) {
                    if (uVar2 == uVar12) {
                      iVar18 = -1;
                    }
                    goto LAB_820b0194;
                  }
LAB_820b019c:
                  uVar4 = *puVar13;
                  uVar12 = puVar13[1];
                  uVar15 = puVar13[2];
                  *puVar13 = *puVar10;
                  puVar13[1] = puVar6[4];
                  puVar13[2] = puVar6[5];
                  *puVar10 = uVar4;
                  puVar6[4] = uVar12;
                  puVar6[5] = uVar15;
                }
                iVar11 = iVar11 + -1;
                puVar6 = puVar10;
              } while (iVar11 != 0);
            }
            uVar9 = uVar9 - 1;
            puVar13 = puVar13 + 3;
            uVar8 = uVar8 + 1;
          } while (uVar9 != 0);
        }
        puVar13 = local_1f0 + iVar19 * 3 + 3;
        if (puVar13 < puVar5 + (uVar1 + 1) * 3) {
          iVar19 = (uint)((int)(puVar5 + (uVar1 + 1) * 3) + (-1 - (int)puVar13)) / 0xc + 1;
          do {
            uVar16 = *puVar5;
            puVar6 = puVar13;
            if ((uVar16 >> 7 & 0xc0000 | uVar16 & 0x1f00000) ==
                (*puVar13 >> 7 & 0xc0000 | *puVar13 & 0x1f00000)) {
              uVar1 = (int)(puVar5[2] << 1 | puVar5[2] >> 0x1f) >> 9;
              uVar9 = (int)(puVar13[2] << 1 | puVar13[2] >> 0x1f) >> 9;
              if ((uVar1 <= uVar9) &&
                 (uVar9 = ((byte)(&DAT_82018600)[*(ushort *)(puVar13 + 1) & 0x3f] - uVar1) + uVar9,
                 uVar9 < 9)) {
                uVar1 = uVar16 >> 0x1b & 7;
                uVar9 = uVar9 - 1;
                if (uVar9 < uVar1) {
                  uVar9 = uVar1;
                }
                *puVar5 = (uVar9 & 7) << 0x1b | uVar16 & 0xc7ffffff;
                puVar13[1] = puVar13[1] | 0x40000000;
                puVar6 = puVar5;
              }
            }
            puVar13 = puVar13 + 3;
            iVar19 = iVar19 + -1;
            puVar5 = puVar6;
          } while (iVar19 != 0);
        }
      }
    }
    puVar3 = local_1f0;
    for (; puVar20 < puVar17; puVar20 = puVar20 + 1) {
      if ((uint *)((*puVar20 & 0xfff) * 0xc + (int)uVar21) != puVar3) {
        FUN_8207c860();
      }
      puVar3 = puVar3 + 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b0300 @ 820b0300 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b0300(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b03d0 @ 820b03d0 ==== */

void FUN_820b03d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820b0488 @ 820b0488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b0488(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  iVar2 = FUN_8207c490();
  if ((((*(byte *)(iVar2 + 8) & 7) != 7) && ((*(uint *)(iVar2 + 0x14) & 0x40000) == 0)) &&
     ((param_4 == 0 || ((*(uint *)(param_4 + 0x14) & 0x20000) == 0)))) {
    uVar5 = *(uint *)(iVar2 + 0x14) >> 5 & 0x1f;
    uVar7 = 0;
    puVar8 = (uint *)((*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x18) + 9) * 4 + iVar2);
    if (param_4 == 0) {
      puVar6 = (uint *)0x0;
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      puVar6 = (uint *)(param_4 + 0x20);
      uVar4 = *(uint *)(param_4 + 0x14) & 0x1f;
      uVar3 = *(uint *)(param_4 + 0x14) >> 5 & 0x1f;
      if (uVar4 != 0) {
        uVar4 = uVar4 - 1;
      }
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *puVar6;
      for (; (uVar7 < uVar5 && ((byte)*puVar8 < (byte)uVar1)); puVar8 = puVar8 + 1) {
        FUN_820b0300();
        uVar7 = uVar7 + 1;
      }
      if (((*puVar8 ^ *puVar6) & 0xf00) != 0) {
        FUN_820b03d0();
      }
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    }
    if (uVar7 < uVar5) {
      iVar2 = uVar5 - uVar7;
      do {
        FUN_820b0300();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *param_3 = (uVar4 & 0xf) << 0x14 | *param_3 & 0xff0fffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b05d8 @ 820b05d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b05d8(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8207c484();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar1 = (param_8 + 0x70) * 8;
  uVar5 = *(uint *)(*(int *)(iVar1 + param_3) + param_3 + 0x36c);
  uVar4 = uVar5 >> 2;
  iVar3 = FUN_820a4068();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = 0xc0003b00;
    *(undefined4 *)(iVar3 + 8) = 0x100;
    *(uint *)(iVar3 + 0xc) = (uVar4 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(uint *)(iVar3 + 0x14) = uVar4 & 0x3fff;
    uVar4 = *(int *)(*(int *)(iVar1 + param_3) + param_3 + 0x368) + *(int *)(param_3 + 0x20);
    uVar4 = ((uVar4 >> 0x14) + 0x200 & 0x1000) + (uVar4 & 0x1fffffff) + 0xc0000000;
    sync(0);
    FUN_8207c860();
    FUN_820b1c98(uVar4,uVar4 + uVar5);
    if ((int)uVar6 != 0) {
      FUN_820b0488(param_6,iVar3 + 0x18,param_4,param_7);
    }
    *(byte *)(iVar2 + 0x2b3e) = ((int)uVar6 != 0) * -0x80 | *(byte *)(iVar2 + 0x2b3e) & 0x7f;
    FUN_820afcd8(param_3,iVar3 + 0x18,param_5,(byte *)(iVar2 + 0x3268),param_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b0730 @ 820b0730 ==== */

void FUN_820b0730(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820b07e0 @ 820b07e0 ==== */

void FUN_820b07e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820b0920 @ 820b0920 ==== */

void FUN_820b0920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c470();
}


/* ==== FUN_820b12a0 @ 820b12a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b12a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1308 @ 820b1308 ==== */

uint FUN_820b1308(int param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x3660);
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x3be4) = *(undefined4 *)(iVar2 + 0x98);
      *param_3 = *(uint *)(iVar2 + 0x9c);
      return *(uint *)(iVar2 + 0x98);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3bd8);
    if (iVar3 == 0) {
      iVar3 = (*(uint *)(iVar2 + 0x9c) & 0xfffffffc) + *(int *)(iVar2 + 0x98);
    }
    uVar1 = iVar3 + (*param_3 >> 2) * -4 & ~(param_4 - 1U);
    if (*(int *)(param_1 + 0x30) + 0xa4U <= uVar1) {
      iVar2 = (int)(iVar3 - uVar1) >> 2;
      *(uint *)(param_1 + 0x3bd8) = uVar1;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar2 * -4;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar2 * -4;
      return uVar1;
    }
  }
  return 0;
}


/* ==== FUN_820b13b8 @ 820b13b8 ==== */

void FUN_820b13b8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x98);
  uVar1 = (uVar2 + *(int *)(param_1 + 0x9c)) - 1;
  uVar2 = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) + 0xc0000000;
  if ((0x7f0fffff < uVar2) && (uVar2 < 0x87000000)) {
    return;
  }
  uVar2 = uVar2 & 0xffffff80;
  uVar1 = (int)((((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff) + 0xc000007f & 0xffffff80
                ) - uVar2) >> 7;
  uVar3 = uVar1 & 7;
  for (uVar1 = uVar1 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    dataCacheBlockFlush(uVar2);
    dataCacheBlockFlush(uVar2 + 0x80);
    dataCacheBlockFlush(uVar2 + 0x100);
    dataCacheBlockFlush(uVar2 + 0x180);
    dataCacheBlockFlush(uVar2 + 0x200);
    dataCacheBlockFlush(uVar2 + 0x280);
    dataCacheBlockFlush(uVar2 + 0x300);
    dataCacheBlockFlush(uVar2 + 0x380);
    uVar2 = uVar2 + 0x400;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    dataCacheBlockFlush(uVar2);
    uVar2 = uVar2 + 0x80;
  }
  sync(0);
  return;
}


/* ==== FUN_820b1418 @ 820b1418 ==== */

void FUN_820b1418(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820b14c8 @ 820b14c8 ==== */

void FUN_820b14c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820b1578 @ 820b1578 ==== */

void FUN_820b1578(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820b15f8 @ 820b15f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b15f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1670 @ 820b1670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b1670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b16c8 @ 820b16c8 ==== */

int FUN_820b16c8(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar2 = param_1 + 0x20;
  puVar1 = (uint *)(param_1 + 800);
  puVar7 = (uint *)((*param_2 >> 3 & 0x1ffffffc) + iVar2);
  if (puVar7 == puVar1) {
    return 0;
  }
  uVar5 = *puVar7;
  iVar3 = LZCOUNT(0xffffffffU >> (*param_2 & 0x1f) & ~uVar5);
  if (iVar3 == 0x20) {
    do {
      puVar7 = puVar7 + 1;
      uVar5 = *puVar7;
    } while (uVar5 == 0xffffffff);
    if (puVar7 == puVar1) {
      return 0;
    }
    iVar3 = LZCOUNT(~uVar5);
  }
  iVar6 = LZCOUNT(0xffffffffU >> iVar3 & uVar5);
  puVar4 = puVar7;
  if (iVar6 == 0x20) {
    puVar4 = puVar7 + 1;
    uVar5 = puVar7[1];
    while (uVar5 == 0) {
      puVar4 = puVar4 + 1;
      uVar5 = *puVar4;
    }
    if (puVar4 == puVar1) {
      iVar6 = 0;
    }
    else {
      iVar6 = LZCOUNT(uVar5);
    }
  }
  uVar5 = ((int)puVar7 - iVar2 >> 2) * 0x20 + iVar3;
  *param_2 = uVar5;
  return (((int)puVar4 - iVar2 >> 2) * 0x20 - uVar5) + iVar6;
}


/* ==== FUN_820b17a0 @ 820b17a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b17a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b18e0 @ 820b18e0 ==== */

void FUN_820b18e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820b1930 @ 820b1930 ==== */

void FUN_820b1930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c49c();
}


/* ==== FUN_820b1aa0 @ 820b1aa0 ==== */

void FUN_820b1aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820b1c98 @ 820b1c98 ==== */

void FUN_820b1c98(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((0x7f0fffff < param_1) && (param_1 < 0x87000000)) {
    return;
  }
  uVar1 = param_1 & 0xffffff80;
  uVar2 = (int)((param_2 + 0x7fU & 0xffffff80) - uVar1) >> 7;
  uVar3 = uVar2 & 7;
  for (uVar2 = uVar2 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    dataCacheBlockFlush(uVar1);
    dataCacheBlockFlush(uVar1 + 0x80);
    dataCacheBlockFlush(uVar1 + 0x100);
    dataCacheBlockFlush(uVar1 + 0x180);
    dataCacheBlockFlush(uVar1 + 0x200);
    dataCacheBlockFlush(uVar1 + 0x280);
    dataCacheBlockFlush(uVar1 + 0x300);
    dataCacheBlockFlush(uVar1 + 0x380);
    uVar1 = uVar1 + 0x400;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    dataCacheBlockFlush(uVar1);
    uVar1 = uVar1 + 0x80;
  }
  sync(0);
  return;
}


/* ==== FUN_820b1d40 @ 820b1d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b1d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1df8 @ 820b1df8 ==== */

uint FUN_820b1df8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((int)uVar1 < 0) {
    uVar2 = 0x2aaaaaaa;
  }
  else if ((uVar1 & 0x40000000) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x15555555;
  }
  if ((uVar1 & 0x20000000) != 0) {
    uVar2 = 3 << ((*(uint *)(param_1 + 0x3c) & 0x1f) << 1) & uVar2;
    if ((*(uint *)(param_1 + 0x3c) == 0) && (-1 < (int)uVar1)) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}


/* ==== FUN_820b1e60 @ 820b1e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b1e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1ee8 @ 820b1ee8 ==== */

void FUN_820b1ee8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820b1f88 @ 820b1f88 ==== */

void FUN_820b1f88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c498();
}


/* ==== FUN_820b2090 @ 820b2090 ==== */

void FUN_820b2090(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820b2200 @ 820b2200 ==== */

void FUN_820b2200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820b22a0 @ 820b22a0 ==== */

void FUN_820b22a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820b2448 @ 820b2448 ==== */

void FUN_820b2448(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  
  do {
    puVar3 = param_1 + 1;
    if (puVar3 < (uint *)*param_1) {
      iVar4 = ((uint)((int)*param_1 + (-1 - (int)puVar3)) >> 3) + 1;
      do {
        piVar2 = (int *)puVar3[1];
        uVar1 = *puVar3 >> 3 & 0x1ffffffc;
        if ((*puVar3 & 1) == 0) {
          bVar5 = ((((uint)*(byte *)(uVar1 + 0xc0000013) << 0x18 |
                     (uint)*(byte *)(uVar1 + 0xc0000012) << 0x10 |
                     (uint)*(byte *)(uVar1 + 0xc0000011) << 8 | (uint)*(byte *)(uVar1 + 0xc0000010))
                   - ((uint)*(byte *)(uVar1 + 0xc0000033) << 0x18 |
                      (uint)*(byte *)(uVar1 + 0xc0000032) << 0x10 |
                      (uint)*(byte *)(uVar1 + 0xc0000031) << 8 | (uint)*(byte *)(uVar1 + 0xc0000030)
                     )) - ((uint)*(byte *)(uVar1 + 0xc0000037) << 0x18 |
                           (uint)*(byte *)(uVar1 + 0xc0000036) << 0x10 |
                           (uint)*(byte *)(uVar1 + 0xc0000035) << 8 |
                          (uint)*(byte *)(uVar1 + 0xc0000034))) +
                  ((uint)*(byte *)(uVar1 + 0xc0000017) << 0x18 |
                   (uint)*(byte *)(uVar1 + 0xc0000016) << 0x10 |
                   (uint)*(byte *)(uVar1 + 0xc0000015) << 8 | (uint)*(byte *)(uVar1 + 0xc0000014))
                  != 0;
        }
        else {
          bVar5 = (uint)*(ushort *)(uVar1 + 0xc0000000) <= *(ushort *)(uVar1 + 0xc0000002) + 1;
        }
        *piVar2 = -(uint)bVar5;
        dataCacheBlockFlush((((uint)piVar2 >> 0x14) + 0x200 & 0x1000) + ((uint)piVar2 & 0x1fffffff)
                            + -0x40000000);
        dataCacheBlockFlush((ushort *)(uVar1 + 0xc0000000));
        dataCacheBlockFlush(uVar1 + 0xc0000018);
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1 = (undefined4 *)*puVar3;
  } while (param_1 != (undefined4 *)0xc0000000);
  return;
}


/* ==== FUN_820b2528 @ 820b2528 ==== */

void FUN_820b2528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820b2668 @ 820b2668 ==== */

void FUN_820b2668(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820b2760 @ 820b2760 ==== */

void FUN_820b2760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4ac();
}


/* ==== FUN_820b2818 @ 820b2818 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b2818(void)

{
  uint *puVar1;
  IMAGE_DOS_HEADER *pIVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  
  uVar9 = FUN_8207c494();
  puVar8 = (uint *)((ulonglong)uVar9 >> 0x20);
  iVar4 = (int)uVar9;
  iVar3 = func_0x820b77e8();
  puVar6 = DAT_82000600;
  if (iVar3 == 2) {
    puVar6 = DAT_82000604;
  }
  uVar5 = *puVar8;
  uVar7 = *puVar6;
  do {
    if ((uVar5 & 0x80000000) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pIVar2 = (IMAGE_DOS_HEADER *)(uVar5 & 0xff000000);
    if (pIVar2 < (IMAGE_DOS_HEADER *)0x88000001) {
      if (pIVar2 == (IMAGE_DOS_HEADER *)0x88000000) {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        if ((*(uint *)(iVar4 + 0x16c) & *puVar1) != 0) {
          *(uint **)(iVar4 + 0x50) = puVar8;
          puVar8 = (uint *)(iVar4 + 0x5c);
        }
      }
      else if (pIVar2 < (IMAGE_DOS_HEADER *)0x84000001) {
        if (pIVar2 == (IMAGE_DOS_HEADER *)0x84000000) {
          uVar5 = *(uint *)(iVar4 + 0x38);
          *(uint *)(iVar4 + 0x38) = uVar5 & 0xbfffffff;
          if ((uVar5 & 0x80000000) == 0) goto LAB_820b28e8;
          puVar8 = *(uint **)(iVar4 + 0x178);
        }
        else if (pIVar2 == (IMAGE_DOS_HEADER *)0x80000000) {
          FUN_8207c860();
          *(undefined4 *)(iVar4 + 0x3c) = 0;
          puVar8 = puVar8 + 0x3f;
          *(undefined4 *)(iVar4 + 0x16c) = 0x7fffffff;
          *(undefined4 *)(iVar4 + 0x170) = 0xffffffff;
        }
        else {
          if (pIVar2 == (IMAGE_DOS_HEADER *)0x81000000) goto LAB_820b2b14;
          if (pIVar2 != &IMAGE_DOS_HEADER_82000000) {
            if (pIVar2 != (IMAGE_DOS_HEADER *)0x83000000) goto LAB_820b2aec;
            uVar5 = *(uint *)(iVar4 + 0x38);
            *(uint **)(iVar4 + 0x174) = puVar8;
            *(uint *)(iVar4 + 0x38) = uVar5 | 0x40000000;
            if ((*(int *)(iVar4 + 0x3c) != 0) && ((*(uint *)(iVar4 + 0x74) & 2) != 0)) {
              uVar5 = uVar5 | 0xc0000000;
              goto LAB_820b28e4;
            }
            goto LAB_820b28e8;
          }
        }
      }
      else {
        if (pIVar2 == (IMAGE_DOS_HEADER *)0x85000000) {
          *(uint **)(iVar4 + 0x178) = puVar8;
          uVar5 = LZCOUNT(*(uint *)(iVar4 + 0x38) & 0x80000000) & 0x20;
          *(uint *)(iVar4 + 0x38) = uVar5 << 0x1a | *(uint *)(iVar4 + 0x38) & 0x7fffffff;
          if (uVar5 != 0) {
            puVar8 = *(uint **)(iVar4 + 0x174);
            goto LAB_820b2b70;
          }
        }
        else if (pIVar2 == (IMAGE_DOS_HEADER *)0x86000000) {
          *(uint **)(iVar4 + 0x17c) = puVar8;
          uVar5 = *(uint *)(iVar4 + 0x38) | 0x20000000;
LAB_820b28e4:
          *(uint *)(iVar4 + 0x38) = uVar5;
        }
        else {
          if (pIVar2 != (IMAGE_DOS_HEADER *)0x87000000) goto LAB_820b2aec;
          uVar5 = *(int *)(iVar4 + 0x3c) + 1;
          *(uint *)(iVar4 + 0x3c) = uVar5;
          *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xdfffffff;
          if (uVar5 < *(uint *)(iVar4 + 0x78)) {
            puVar8 = *(uint **)(iVar4 + 0x17c);
            goto LAB_820b2b70;
          }
        }
LAB_820b28e8:
        puVar8 = puVar8 + 1;
        FUN_820b1e60();
      }
    }
    else if (pIVar2 < (IMAGE_DOS_HEADER *)0x8d000001) {
      if (pIVar2 == (IMAGE_DOS_HEADER *)0x8d000000) {
        halt_baddata();
      }
      if (pIVar2 == (IMAGE_DOS_HEADER *)0x89000000) {
        if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) != 0) {
          FUN_820b2760();
        }
        puVar8 = puVar8 + 3;
      }
      else if (pIVar2 == (IMAGE_DOS_HEADER *)0x8a000000) {
        puVar6 = (undefined4 *)puVar8[1];
        FUN_820b22a0();
        FUN_820b2448(puVar6);
        if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) == 0) {
          if (*(int *)(iVar4 + 0x3c) == 1) {
            FUN_820b2668();
          }
        }
        else {
          FUN_820b2528();
        }
        puVar8 = puVar8 + 5;
      }
      else if (pIVar2 == (IMAGE_DOS_HEADER *)0x8b000000) {
        puVar8 = puVar8 + 1;
      }
      else {
        if (pIVar2 == (IMAGE_DOS_HEADER *)0x8c000000) {
          halt_baddata();
        }
LAB_820b2aec:
        if (uVar5 == 0xc0000000) {
          halt_baddata();
        }
        puVar8 = (uint *)(uVar5 + 4);
      }
    }
    else if (pIVar2 == (IMAGE_DOS_HEADER *)0x8e000000) {
      if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) != 0) {
        local_58 = puVar8[2];
        local_54 = puVar8[3];
        FUN_820a2ec0(uVar7,&local_58,1);
      }
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 4;
      *(uint *)(iVar4 + 0x170) = *puVar1;
    }
    else if (pIVar2 == (IMAGE_DOS_HEADER *)0x8f000000) {
LAB_820b2b14:
      local_5c = puVar8[1];
      local_60 = uVar5;
      FUN_820a2ec0(uVar7,&local_60,1);
      puVar8 = puVar8 + 2;
    }
    else {
      if (pIVar2 != (IMAGE_DOS_HEADER *)0x90000000) goto LAB_820b2aec;
      puVar8 = (uint *)FUN_820acf40();
    }
LAB_820b2b70:
    uVar5 = *puVar8;
  } while( true );
}


/* ==== FUN_820b2b88 @ 820b2b88 ==== */

void FUN_820b2b88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820b2fe8 @ 820b2fe8 ==== */

void FUN_820b2fe8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820b30a0 @ 820b30a0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820b30a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 auStack_60 [24];
  
  iVar1 = FUN_8207c494();
  if ((*(uint *)(iVar1 + 0x5f48) & 0x100) == 0) {
    iVar2 = FUN_820b33b8();
    *(int *)(iVar1 + 0x2fc0) = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_820b33b8();
      *(int *)(iVar1 + 0x2b78) = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_820a34e0();
        iVar3 = 0;
        *(int *)(iVar1 + 0x2b7c) = (iVar2 - *(int *)(iVar1 + 0x2b78)) + 4 >> 2;
        uVar4 = 0;
        iVar2 = 6;
        *(undefined4 *)(iVar1 + 0x2d04) = uRam7fc8112c;
        *(undefined4 *)(iVar1 + 0x2b94) = 0;
        do {
          if ((0x1000000 << (uVar4 & 0x3f) & *(uint *)(iVar1 + 0x5f48)) != 0) {
            iVar3 = iVar3 + 1;
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        *(undefined4 *)(iVar1 + 0x2ba4) = 0xc0000000;
        uVar4 = 0xffffffff;
        *(int *)(iVar1 + 0x2b70) = iVar3;
        *(undefined4 *)(iVar1 + 0x2b74) = 0;
        *(undefined4 *)(iVar1 + 0x2b4c) = *(undefined4 *)(iVar1 + 0x3bc4);
        *(undefined4 *)(iVar1 + 0x2b54) = *(undefined4 *)(iVar1 + 0x3bc8);
        if ((*(uint *)(iVar1 + 0x5f48) & 0x4000000) != 0) {
          uVar4 = 2;
          *(undefined4 *)(iVar1 + 0x2cc8) = 2;
        }
        uVar6 = 0;
        uVar5 = 0x7f000000;
        iVar2 = iVar1 + 0x2d7c;
        do {
          if ((0x1000000 << (uVar6 & 0x3f) & *(uint *)(iVar1 + 0x5f48)) != 0) {
            if ((int)uVar4 < 0) {
              *(uint *)(iVar1 + 0x2cc8) = uVar6;
              uVar4 = uVar6;
            }
            *(uint *)(iVar2 + -0x40) = uVar6;
            *(uint *)(iVar2 + -0x28) = uVar5;
            *(int *)(iVar2 + -0x44) = iVar1 + 0x2b48;
            *(uint *)(iVar2 + -0x2c) = uVar5 + 0x41000000 | 2;
            *(undefined1 *)(iVar2 + -8) = 0;
            *(undefined4 *)(iVar2 + -4) = 0;
            *(int *)iVar2 = iVar2;
            *(int *)(iVar2 + 4) = iVar2;
            func_0x820b7e28(iVar2 + -0x24,0x820b03c8,iVar2 + -0x44);
            *(char *)(iVar2 + -0x21) = (char)uVar6 + '\x01';
            iVar3 = FUN_8203c150(0,0x10000,&LAB_820b1048,iVar2 + -0x44,0,iVar2 + 0xc);
            *(int *)(iVar2 + 8) = iVar3;
            if (iVar3 == 0) {
              halt_baddata();
            }
            iVar3 = func_0x820b7948(iVar3,_UNK_82000530,auStack_60);
            if (-1 < iVar3) {
              func_0x820b7938(auStack_60[0],0x11);
              func_0x820b75f8(auStack_60[0]);
            }
          }
          uVar5 = uVar5 + 0x80;
          uVar6 = uVar6 + 1;
          iVar2 = iVar2 + 0x6c;
        } while (uVar5 < 0x7f000300);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b3350 @ 820b3350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b3350(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b33b8 @ 820b33b8 ==== */

void FUN_820b33b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820b34f0 @ 820b34f0 ==== */

void FUN_820b34f0(int param_1,uint param_2)

{
  if ((param_2 & 0x80000000) == 0) {
    thunk_FUN_820b4d90();
    return;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_8203b860();
  return;
}


/* ==== FUN_820b3510 @ 820b3510 ==== */

void FUN_820b3510(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a0();
}


/* ==== FUN_820b3808 @ 820b3808 ==== */

void FUN_820b3808(double param_1,uint param_2)

{
  float fStack0000001c;
  uint uStack_20;
  float fStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_2 | 0x2200000;
  fStack0000001c = (float)param_1;
  uStack_14 = 2;
  puStack_18 = &uStack_20;
  if (*DAT_82000538 != 0) {
    fStack_1c = fStack0000001c;
    (**(code **)(*DAT_82000538 + 0x18))(0x43,&puStack_18);
  }
  return;
}


/* ==== FUN_820b3870 @ 820b3870 ==== */

void FUN_820b3870(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a4();
}


/* ==== FUN_820b3990 @ 820b3990 ==== */

undefined4 FUN_820b3990(void)

{
  undefined4 uVar1;
  
  if (*DAT_82000538 != 0) {
                    /* WARNING: Could not recover jumptable at 0x820b39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_82000538 + 0x18))(0x44,0);
    return uVar1;
  }
  return 0;
}


/* ==== FUN_820b39c0 @ 820b39c0 ==== */

void FUN_820b39c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8207c4a8();
}


/* ==== FUN_820b3ad0 @ 820b3ad0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b3ad0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b3b70 @ 820b3b70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b3b70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_820b4d90 @ 820b3b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_820b4d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b4c30 @ 820b4c30 ==== */

void FUN_820b4c30(uint param_1,uint param_2,uint param_3)

{
  undefined4 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar1 = loadVectorForShiftLeft(in_r0,param_2);
  if (param_3 < 0x80) {
    return;
  }
  do {
    if (0xff < param_3) {
      if (0x400 < param_3) {
        dataCacheBlockTouch(param_2 + 0x400);
      }
      dataCacheBlockClearToZero(param_1 + 0x80);
    }
    auVar3 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
    auVar4 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
    auVar2 = vectorPermute(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar3,auVar1);
    auVar5 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
    auVar3 = vectorPermute(auVar3,auVar4,auVar1);
    auVar6 = *(undefined1 (*) [16])(param_2 + 0x40 & 0xfffffff0);
    auVar4 = vectorPermute(auVar4,auVar5,auVar1);
    auVar7 = *(undefined1 (*) [16])(param_2 + 0x50 & 0xfffffff0);
    auVar5 = vectorPermute(auVar5,auVar6,auVar1);
    auVar8 = *(undefined1 (*) [16])(param_2 + 0x60 & 0xfffffff0);
    auVar6 = vectorPermute(auVar6,auVar7,auVar1);
    auVar9 = *(undefined1 (*) [16])(param_2 + 0x70 & 0xfffffff0);
    auVar7 = vectorPermute(auVar7,auVar8,auVar1);
    auVar10 = *(undefined1 (*) [16])(param_2 + 0x7f & 0xfffffff0);
    auVar8 = vectorPermute(auVar8,auVar9,auVar1);
    *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar2;
    auVar2 = vectorPermute(auVar9,auVar10,auVar1);
    *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar3;
    *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar4;
    param_2 = param_2 + 0x80;
    *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar5;
    *(undefined1 (*) [16])(param_1 + 0x40 & 0xfffffff0) = auVar6;
    param_3 = param_3 - 0x80;
    *(undefined1 (*) [16])(param_1 + 0x50 & 0xfffffff0) = auVar7;
    *(undefined1 (*) [16])(param_1 + 0x60 & 0xfffffff0) = auVar8;
    *(undefined1 (*) [16])(param_1 + 0x70 & 0xfffffff0) = auVar2;
    param_1 = param_1 + 0x80;
  } while (0x7f < param_3);
  return;
}


/* ==== FUN_820b4cf0 @ 820b4cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b4cf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b4d48 @ 820b4d48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b4d48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b4d90 @ 820b4d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b4d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


