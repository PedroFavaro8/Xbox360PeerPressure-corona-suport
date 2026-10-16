// Decompiled from SettingsApp.xex.pe  base=82000000  (approximate C, for reading only)
/* ==== FUN_82020000 @ 82020000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82020000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022618 @ 82022618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820226c0 @ 820226c0 ==== */

int FUN_820226c0(byte *param_1,byte *param_2,int param_3)

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


/* ==== FUN_82022738 @ 82022738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022790 @ 82022790 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022790(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022800 @ 82022800 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022800(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022858 @ 82022858 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022858(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820228c8 @ 820228c8 ==== */

void FUN_820228c8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_82000760;
  return;
}


/* ==== FUN_820228d8 @ 820228d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820228d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022960 @ 82022960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022960(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820229b8 @ 820229b8 ==== */

void FUN_820229b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x820229d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c5e70)();
  return;
}


/* ==== FUN_82022a18 @ 82022a18 ==== */

int FUN_82022a18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x820bb47c(1,param_1,param_2,param_3,0);
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  return iVar1;
}


/* ==== FUN_82022a58 @ 82022a58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022a58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022aa8 @ 82022aa8 ==== */

undefined4 FUN_82022aa8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  
  if (((*param_1 == 0) || (iVar1 = FUN_8202f4e8(), iVar1 == 0)) || (uVar2 = 1, uStack_10 != 0x103))
  {
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_82022b20 @ 82022b20 ==== */

void FUN_82022b20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


/* ==== FUN_82022b28 @ 82022b28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022b28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022bf8 @ 82022bf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022bf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022c80 @ 82022c80 ==== */

undefined4 FUN_82022c80(undefined4 *param_1,undefined4 *param_2)

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


/* ==== FUN_82022cd8 @ 82022cd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022cd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022d30 @ 82022d30 ==== */

int FUN_82022d30(void)

{
  char cVar1;
  
  cVar1 = FUN_820347a8();
  return (int)cVar1;
}


/* ==== FUN_82022d60 @ 82022d60 ==== */

void FUN_82022d60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82022de0 @ 82022de0 ==== */

void FUN_82022de0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82022e70 @ 82022e70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022e70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022ea8 @ 82022ea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022ea8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022f60 @ 82022f60 ==== */

void FUN_82022f60(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) & param_2 & 0x17;
  *(uint *)(param_1 + 0xc) = param_2 & 0x17;
  if (uVar1 != 0) {
    if (param_3 == '\0') {
      if ((uVar1 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_820351c8();
      }
      if ((uVar1 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_820351c8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_820351c8();
    }
  }
  return;
}


/* ==== FUN_82023048 @ 82023048 ==== */

void FUN_82023048(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820230c0 @ 820230c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820230c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023120 @ 82023120 ==== */

void FUN_82023120(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820231e0 @ 820231e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820231e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820232d0 @ 820232d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820232d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820233d0 @ 820233d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820233d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023410 @ 82023410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82023410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023478 @ 82023478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82023478(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023c88 @ 82023c88 ==== */

void FUN_82023c88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82023d70 @ 82023d70 ==== */

void FUN_82023d70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82023e18 @ 82023e18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82023e18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023ed0 @ 82023ed0 ==== */

void FUN_82023ed0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82023f30 @ 82023f30 ==== */

uint FUN_82023f30(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  if (*(int *)param_1[9] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_1[0xd];
  }
  if (0 < iVar2) {
    *(int *)param_1[0xd] = *(int *)param_1[0xd] + -1;
    pbVar3 = *(byte **)param_1[9];
    *(byte **)param_1[9] = pbVar3 + 1;
    *pbVar3 = param_2;
    return (uint)param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x82023f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  return uVar1;
}


/* ==== FUN_82023fa0 @ 82023fa0 ==== */

void FUN_82023fa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82024060 @ 82024060 ==== */

void FUN_82024060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82024158 @ 82024158 ==== */

void FUN_82024158(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82024228 @ 82024228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024228(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820242c0 @ 820242c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820242c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024350 @ 82024350 ==== */

void FUN_82024350(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82024698 @ 82024698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024770 @ 82024770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024770(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024aa8 @ 82024aa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024aa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024b30 @ 82024b30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024b30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024be8 @ 82024be8 ==== */

void FUN_82024be8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82024c88 @ 82024c88 ==== */

bool FUN_82024c88(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_82023e18();
  return iVar2 == 0;
}


/* ==== FUN_82024ce0 @ 82024ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024d58 @ 82024d58 ==== */

void FUN_82024d58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82024e10 @ 82024e10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024e10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024e78 @ 82024e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024e78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024ec8 @ 82024ec8 ==== */

void FUN_82024ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82024fb8 @ 82024fb8 ==== */

void FUN_82024fb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820250a8 @ 820250a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820250a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025128 @ 82025128 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820251d8 @ 820251d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820251d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025280 @ 82025280 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025280(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820252d0 @ 820252d0 ==== */

void FUN_820252d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820253b8 @ 820253b8 ==== */

void FUN_820253b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82025478 @ 82025478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025478(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820254f8 @ 820254f8 ==== */

void FUN_820254f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820255d0 @ 820255d0 ==== */

void FUN_820255d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82025650 @ 82025650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025698 @ 82025698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025728 @ 82025728 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025780 @ 82025780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820257f0 @ 820257f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820257f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025868 @ 82025868 ==== */

void FUN_82025868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820258e0 @ 820258e0 ==== */

void FUN_820258e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82025938 @ 82025938 ==== */

void FUN_82025938(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82025ac8 @ 82025ac8 ==== */

void FUN_82025ac8(void)

{
  uint auStack_5e [23];
  
  FUN_820844d4();
                    /* WARNING: Subroutine does not return */
  FUN_82084370(auStack_5e,0,0xe);
}


/* ==== FUN_82025d90 @ 82025d90 ==== */

void FUN_82025d90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82025e10 @ 82025e10 ==== */

void FUN_82025e10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82026230 @ 82026230 ==== */

void FUN_82026230(void)

{
  uint auStack_cf [51];
  
  FUN_820844d4();
                    /* WARNING: Subroutine does not return */
  FUN_82084370(auStack_cf,0,0x13);
}


/* ==== FUN_82026570 @ 82026570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82026570(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820265c0 @ 820265c0 ==== */

void FUN_820265c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82026650 @ 82026650 ==== */

void FUN_82026650(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82026768 @ 82026768 ==== */

void FUN_82026768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820268a8 @ 820268a8 ==== */

void FUN_820268a8(void)

{
  uint auStack_14c [83];
  
  FUN_820844c8();
                    /* WARNING: Subroutine does not return */
  FUN_82084370(auStack_14c,0,0x38);
}


/* ==== FUN_82026de0 @ 82026de0 ==== */

void FUN_82026de0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82027058 @ 82027058 ==== */

void FUN_82027058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82027168 @ 82027168 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027168(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027840 @ 82027840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820278e0 @ 820278e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820278e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027948 @ 82027948 ==== */

void FUN_82027948(void)

{
                    /* WARNING: Could not recover jumptable at 0x82027960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c5e70)();
  return;
}


/* ==== FUN_82027968 @ 82027968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820279d0 @ 820279d0 ==== */

void FUN_820279d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82027b28 @ 82027b28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027b28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027b68 @ 82027b68 ==== */

void FUN_82027b68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82027c50 @ 82027c50 ==== */

void FUN_82027c50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82027d80 @ 82027d80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027d80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027dd0 @ 82027dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027e38 @ 82027e38 ==== */

int FUN_82027e38(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x3fffffff < param_1 || (iVar1 = FUN_82035810(), iVar1 == 0)))) {
    iVar1 = FUN_82022618();
  }
  return iVar1;
}


/* ==== FUN_82027ea0 @ 82027ea0 ==== */

int FUN_82027ea0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x4444444 < param_1 || (iVar1 = FUN_82035810(), iVar1 == 0)))) {
    iVar1 = FUN_82022618();
  }
  return iVar1;
}


/* ==== FUN_82027f08 @ 82027f08 ==== */

void FUN_82027f08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82027fc8 @ 82027fc8 ==== */

void FUN_82027fc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820280c8 @ 820280c8 ==== */

void FUN_820280c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82028140 @ 82028140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028198 @ 82028198 ==== */

void FUN_82028198(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82028290 @ 82028290 ==== */

void FUN_82028290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82028380 @ 82028380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820283e8 @ 820283e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820283e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028440 @ 82028440 ==== */

void FUN_82028440(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820284e0 @ 820284e0 ==== */

void FUN_820284e0(int param_1,char *param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xfc) = 1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82028510 @ 82028510 ==== */

void FUN_82028510(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820285b0 @ 820285b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820285b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028628 @ 82028628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028628(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028680 @ 82028680 ==== */

void FUN_82028680(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82028760 @ 82028760 ==== */

void FUN_82028760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820287d0 @ 820287d0 ==== */

void FUN_820287d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820288b0 @ 820288b0 ==== */

void FUN_820288b0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x3c;
  if (0x4444444U - param_2 < uVar1) {
    FUN_82035658();
                    /* WARNING: Subroutine does not return */
    FUN_82085f28();
  }
  if (uVar1 + param_2 <= (uint)((param_1[2] - *param_1) / 0x3c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82028928 @ 82028928 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028928(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028998 @ 82028998 ==== */

void FUN_82028998(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82028a00 @ 82028a00 ==== */

void FUN_82028a00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82028b28 @ 82028b28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028b28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028c00 @ 82028c00 ==== */

void FUN_82028c00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82028c68 @ 82028c68 ==== */

void FUN_82028c68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820290e0 @ 820290e0 ==== */

void FUN_820290e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820297b0 @ 820297b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820297b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029818 @ 82029818 ==== */

void FUN_82029818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82029990 @ 82029990 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029990(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029a70 @ 82029a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82029b48 @ 82029b48 ==== */

void FUN_82029b48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202a010 @ 8202a010 ==== */

void FUN_8202a010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8202a698 @ 8202a698 ==== */

int FUN_8202a698(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x9249249 < param_1 || (iVar1 = FUN_82035810(), iVar1 == 0)))) {
    iVar1 = FUN_82022618();
  }
  return iVar1;
}


/* ==== FUN_8202a700 @ 8202a700 ==== */

void FUN_8202a700(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202a7e8 @ 8202a7e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202a7e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202aa88 @ 8202aa88 ==== */

void FUN_8202aa88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8202aae0 @ 8202aae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202aae0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ab38 @ 8202ab38 ==== */

void FUN_8202ab38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202aba8 @ 8202aba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202aba8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ac00 @ 8202ac00 ==== */

void FUN_8202ac00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8202ace0 @ 8202ace0 ==== */

void FUN_8202ace0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x1c;
  if (0x9249249U - param_2 < uVar1) {
    FUN_82035658();
                    /* WARNING: Subroutine does not return */
    FUN_82085f28();
  }
  if (uVar1 + param_2 <= (uint)((param_1[2] - *param_1) / 0x1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8202ad58 @ 8202ad58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ad58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ae30 @ 8202ae30 ==== */

void FUN_8202ae30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202b1d8 @ 8202b1d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b1d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b278 @ 8202b278 ==== */

void FUN_8202b278(void)

{
                    /* WARNING: Could not recover jumptable at 0x8202b28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c5e70)();
  return;
}


/* ==== FUN_8202b290 @ 8202b290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b290(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b3a0 @ 8202b3a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b3a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b3e0 @ 8202b3e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b3e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b420 @ 8202b420 ==== */

void FUN_8202b420(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202b5c0 @ 8202b5c0 ==== */

void FUN_8202b5c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202b710 @ 8202b710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b778 @ 8202b778 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b778(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b810 @ 8202b810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b878 @ 8202b878 ==== */

void FUN_8202b878(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8202b9c0 @ 8202b9c0 ==== */

void FUN_8202b9c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8202bbd0 @ 8202bbd0 ==== */

void FUN_8202bbd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8202bde8 @ 8202bde8 ==== */

void FUN_8202bde8(void)

{
                    /* WARNING: Could not recover jumptable at 0x8202bdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c5e70)();
  return;
}


/* ==== FUN_8202bfa0 @ 8202bfa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202bfa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c040 @ 8202c040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c118 @ 8202c118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c200 @ 8202c200 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8202c508) */

void FUN_8202c200(void)

{
  int iVar1;
  int iVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  
  iVar1 = FUN_820844d0();
  iVar10 = 0;
  iVar2 = FUN_8202b3a0();
  cVar5 = FUN_82083228();
  if (cVar5 == '\0') {
    func_0x820bb5ac("Failed to read config file\n");
  }
  else {
    cVar5 = FUN_82083108();
    if (cVar5 == '\0') {
      func_0x820bb5ac("Failed to parse config file\n");
      FUN_8202ab38();
    }
  }
  piVar11 = (int *)(iVar1 + 0xc);
  iVar8 = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) / 0x1c + 1;
  *(int *)(iVar1 + 0x20) = iVar8;
  piVar3 = (int *)thunk_FUN_82035810();
  if (piVar3 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar3 + 1;
    *piVar3 = iVar8;
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      FUN_8202a7e8();
    }
  }
  *(int **)(iVar1 + 0x1c) = piVar7;
  if (piVar7 == (int *)0x0) {
    func_0x820bb5ac("StartupMenuPane::ParseOtherOSConfig: failed to allocate memory for os list %d\n"
                    ,*(undefined4 *)(iVar1 + 0x20));
  }
  else {
    FUN_8202a7e8();
    FUN_8202aa88();
    FUN_82023ed0();
    FUN_82023ed0();
    **(undefined4 **)(iVar1 + 0x1c) = 0xffffffff;
    FUN_820253b8();
    FUN_820253b8();
    *(undefined4 *)(iVar1 + 0x28) = 0;
    uVar9 = 0;
    if ((*(int *)(iVar1 + 0x10) - *piVar11) / 0x1c != 0) {
      iVar8 = 0;
      do {
        FUN_8202a7e8();
        FUN_8202aa88();
        FUN_82023ed0();
        FUN_82023ed0();
        *(uint *)(iVar10 + *(int *)(iVar1 + 0x1c) + 0x3c) = uVar9;
        if ((uint)((*(int *)(iVar1 + 0x10) - *piVar11) / 0x1c) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_820356f0();
        }
        pcVar6 = (char *)(iVar8 + *piVar11);
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar6 = *(char **)pcVar6;
        }
        do {
          cVar5 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar5 != '\0');
        FUN_820253b8();
        FUN_820253b8();
        if ((uint)((*(int *)(iVar1 + 0x10) - *piVar11) / 0x1c) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_820356f0();
        }
        piVar3 = (int *)(iVar8 + *piVar11);
        if (0xf < (uint)piVar3[5]) {
          piVar3 = (int *)*piVar3;
        }
        iVar4 = func_0x820bb60c(piVar3,0xffffffff,iVar2 + 0x130,0xffffffff,1);
        if (iVar4 == 0) {
          *(uint *)(iVar1 + 0x28) = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
        iVar10 = iVar10 + 0x3c;
        iVar8 = iVar8 + 0x1c;
      } while (uVar9 < (uint)((*(int *)(iVar1 + 0x10) - *piVar11) / 0x1c));
    }
    iVar10 = 1;
  }
  *(char *)(iVar1 + 0x24) = (char)iVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c538 @ 8202c538 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c538(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c5d8 @ 8202c5d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c5d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c7f8 @ 8202c7f8 ==== */

void FUN_8202c7f8(void)

{
  syscall(0);
  return;
}


/* ==== FUN_8202c808 @ 8202c808 ==== */

void FUN_8202c808(void)

{
  syscall(0);
  return;
}


/* ==== FUN_8202c818 @ 8202c818 ==== */

void FUN_8202c818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202c9d8 @ 8202c9d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c9d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202cbc0 @ 8202cbc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cbc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202cc10 @ 8202cc10 ==== */

undefined4 FUN_8202cc10(int *param_1)

{
  char cVar3;
  char *pcVar1;
  uint uVar2;
  
  cVar3 = (**(code **)(*param_1 + 4))();
  if (cVar3 == '\x01') {
    pcVar1 = (char *)FUN_82027dd0();
    uVar2 = FUN_8204bd28(pcVar1,0x2000,'\x01');
    if ((uVar2 & 0xff) == 1) {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8202cc70 @ 8202cc70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cc70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202cd68 @ 8202cd68 ==== */

void FUN_8202cd68(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar1) {
    FUN_82035658();
                    /* WARNING: Subroutine does not return */
    FUN_82085f28();
  }
  if (uVar1 + param_2 <= (uint)(param_1[2] - *param_1 >> 2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8202cde0 @ 8202cde0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cde0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ceb8 @ 8202ceb8 ==== */

void FUN_8202ceb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202d060 @ 8202d060 ==== */

void FUN_8202d060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8202d420 @ 8202d420 ==== */

void FUN_8202d420(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202d5c8 @ 8202d5c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202d5c8(void)

{
  int *piVar1;
  float *pfVar2;
  char cVar6;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar7;
  int in_r6;
  uint in_r7;
  uint *in_r8;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  int aiStack_90 [2];
  int iStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [32];
  
  uVar11 = FUN_820844d0();
  piVar1 = (int *)((ulonglong)uVar11 >> 0x20);
  uVar7 = (undefined4)uVar11;
  piVar10 = (int *)piVar1[1];
  aiStack_90[0] = FUN_82043d90(uVar7);
  FUN_82043d40();
  FUN_8202cde0(piVar1[2] + 0x14,aiStack_90);
  FUN_82041170();
  FUN_8204f358(uVar7);
  FUN_8203ca20();
  pfVar2 = (float *)FUN_82038d60(auStack_80);
  FUN_82038b60((double)(*pfVar2 - (float)piVar10[0x56]),(double)DAT_82001cac);
  piVar9 = (int *)iRam820c1704;
  if ((*in_r8 < in_r7) &&
     (iVar8 = *in_r8 * 0x3c + in_r6, piVar9 = (int *)(iVar8 + 4), 0xf < *(uint *)(iVar8 + 0x18))) {
    piVar9 = (int *)*piVar9;
  }
  iStack_88 = piVar10[0x56];
  uStack_84 = DAT_82001c98;
  FUN_8204cfb8(piVar9,&iStack_88);
  cVar6 = (**(code **)(*piVar1 + 4))(piVar1);
  iVar8 = aiStack_90[0];
  if (((cVar6 == '\x01') && (*(int *)(piVar1[2] + 4) == aiStack_90[0])) &&
     ((*(uint *)(DAT_820c5fbc + 0x1c4c) & 4) == 0)) {
    pcVar3 = (char *)FUN_82027dd0();
    uVar4 = FUN_8204bd28(pcVar3,0x1000,'\x01');
    if ((uVar4 & 0xff) == 1) {
      iVar5 = FUN_82035810();
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_8205e5f0(iVar5,piVar10,uVar7,in_r6,in_r7,*in_r8);
      }
      *(undefined1 *)(iVar5 + 0x50) = 0;
      (**(code **)(*piVar10 + 0x20))(piVar10,iVar5);
      *(int *)(piVar1[2] + 8) = iVar8;
      *(int *)(piVar1[2] + 0x24) = iVar5;
    }
  }
  FUN_82038340(auStack_80);
  FUN_82038320(aiStack_90);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202d858 @ 8202d858 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202d858(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202d8b8 @ 8202d8b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202d8b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202d948 @ 8202d948 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202d948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202d9d0 @ 8202d9d0 ==== */

void FUN_8202d9d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202db80 @ 8202db80 ==== */

void FUN_8202db80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8202dc60 @ 8202dc60 ==== */

void FUN_8202dc60(undefined4 *param_1,int *param_2,int param_3)

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


/* ==== FUN_8202dcb8 @ 8202dcb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202dcb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202dd78 @ 8202dd78 ==== */

void FUN_8202dd78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8202de30 @ 8202de30 ==== */

void FUN_8202de30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== entry @ 8202e0e0 ==== */

void entry(void)

{
  char *pcStack00000060;
  undefined4 uStack0000006c;
  
  uStack0000006c = FUN_8202c5d8();
  pcStack00000060 = "Auto Update";
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_8202e240 @ 8202e240 ==== */

void FUN_8202e240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202e528 @ 8202e528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202e528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202eab8 @ 8202eab8 ==== */

void FUN_8202eab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x8202eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c5e70)();
  return;
}


/* ==== FUN_8202ead0 @ 8202ead0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ead0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202eba0 @ 8202eba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202eba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ec10 @ 8202ec10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ec10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ed50 @ 8202ed50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ed50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202eeb0 @ 8202eeb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202eeb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ef28 @ 8202ef28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ef28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202efa0 @ 8202efa0 ==== */

void FUN_8202efa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x8202efb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c5e70)();
  return;
}


/* ==== FUN_8202efc0 @ 8202efc0 ==== */

void FUN_8202efc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8202f028 @ 8202f028 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f028(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f0d0 @ 8202f0d0 ==== */

void FUN_8202f0d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202f218 @ 8202f218 ==== */

void FUN_8202f218(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202f380 @ 8202f380 ==== */

void FUN_8202f380(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8202f4a0 @ 8202f4a0 ==== */

bool FUN_8202f4a0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_820c2118 + 4))();
  if (iVar1 < 0) {
    FUN_820308d8();
  }
  return iVar1 >= 0;
}


/* ==== FUN_8202f4e8 @ 8202f4e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f4e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f560 @ 8202f560 ==== */

undefined4 FUN_8202f560(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam820c7964;
  uRam820c7964 = param_1;
  return uVar1;
}


/* ==== FUN_8202f578 @ 8202f578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f578(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f628 @ 8202f628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f628(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f6b8 @ 8202f6b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f6b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f748 @ 8202f748 ==== */

void FUN_8202f748(void)

{
  FUN_8202f6b8();
  return;
}


/* ==== thunk_FUN_82030910 @ 8202f750 ==== */

undefined4 thunk_FUN_82030910(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_8202f758 @ 8202f758 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f810 @ 8202f810 ==== */

/* WARNING: Removing unreachable block (ram,0x82030958) */

undefined4
FUN_8202f810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  iVar1 = func_0x820bb86c(auStack_10,param_2,param_6,0x8202ec08,param_3,param_4,param_5 >> 2 & 1);
  if (iVar1 < 0) {
    FUN_820308d8();
    auStack_10[0] = 0;
  }
  return auStack_10[0];
}


/* ==== FUN_8202f820 @ 8202f820 ==== */

void FUN_8202f820(void)

{
  FUN_820309a8();
  return;
}


/* ==== FUN_8202f828 @ 8202f828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202f828(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f8c8 @ 8202f8c8 ==== */

undefined4 FUN_8202f8c8(void)

{
  return *(undefined4 *)(DAT_820004f0 + 0x10);
}


/* ==== FUN_8202f8d8 @ 8202f8d8 ==== */

void FUN_8202f8d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8202fa58 @ 8202fa58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202fa58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202fac0 @ 8202fac0 ==== */

void FUN_8202fac0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8202fcb8 @ 8202fcb8 ==== */

void FUN_8202fcb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8202fdc8 @ 8202fdc8 ==== */

bool FUN_8202fdc8(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  iVar1 = func_0x820bb74c(param_1,auStack_10);
  if (iVar1 < 0) {
    FUN_820308d8();
  }
  return iVar1 >= 0;
}


/* ==== FUN_8202fe08 @ 8202fe08 ==== */

void FUN_8202fe08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8202ff30 @ 8202ff30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ff30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ff88 @ 8202ff88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ff88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030018 @ 82030018 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030018(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 != (char *)0x0) {
    pcVar3 = "XLNI_DET_MEDIA";
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      pcVar3 = "XLNI_DASH_ARCADE";
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        cVar2 = *pcVar3;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        pcVar4 = "XLNI_DASH_NUIHUB";
        do {
          cVar1 = *param_1;
          cVar2 = *pcVar4;
          if (cVar1 == '\0') {
            halt_baddata();
          }
          param_1 = param_1 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 == cVar2);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820300e8 @ 820300e8 ==== */

char * FUN_820300e8(char *param_1)

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


/* ==== FUN_82030110 @ 82030110 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030110(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030198 @ 82030198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030208 @ 82030208 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030208(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_820bb78c @ 82030218 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820bb78c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030220 @ 82030220 ==== */

bool FUN_82030220(void)

{
  int iVar1;
  
  iVar1 = func_0x820bb57c();
  if (-1 >= iVar1) {
    thunk_FUN_820308d8();
  }
  return -1 < iVar1;
}


/* ==== FUN_82030258 @ 82030258 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030258(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820302c8 @ 820302c8 ==== */

undefined4 FUN_820302c8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = func_0x820bb7ac(param_1,9,0,local_10);
  if (iVar1 < 0) {
    thunk_FUN_820308d8();
    local_10[0] = 0;
  }
  return local_10[0];
}


/* ==== FUN_82030310 @ 82030310 ==== */

bool FUN_82030310(void)

{
  int iVar1;
  
  iVar1 = func_0x820bb7bc();
  if (-1 >= iVar1) {
    thunk_FUN_820308d8();
  }
  return -1 < iVar1;
}


/* ==== FUN_82030348 @ 82030348 ==== */

void FUN_82030348(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82030400 @ 82030400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030480 @ 82030480 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030480(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820308c0 @ 820308c0 ==== */

void FUN_820308c0(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_820308d8 @ 820308d8 ==== */

void FUN_820308d8(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x820bb7fc();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_82030910 @ 82030910 ==== */

undefined4 FUN_82030910(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== thunk_FUN_820308d8 @ 82030930 ==== */

void thunk_FUN_820308d8(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x820bb7fc();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_820309a8 @ 820309a8 ==== */

void FUN_820309a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82030a10 @ 82030a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030a10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_820308c0 @ 82030a68 ==== */

void thunk_FUN_820308c0(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_82030a70 @ 82030a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030ae0 @ 82030ae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030ae0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030b80 @ 82030b80 ==== */

void FUN_82030b80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82030d08 @ 82030d08 ==== */

int FUN_82030d08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int aiStack_10 [4];
  
  iVar1 = (**(code **)(DAT_820c2118 + 0x18))(param_1,0,0,0,aiStack_10,param_2,param_3,0);
  if (-1 < iVar1) {
    iVar1 = aiStack_10[0];
  }
  return iVar1;
}


/* ==== FUN_82030d68 @ 82030d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030d68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030e00 @ 82030e00 ==== */

uint FUN_82030e00(void)

{
  int iVar1;
  uint uVar2;
  undefined2 local_10 [2];
  uint local_c [3];
  
  local_10[0] = 0;
  iVar1 = func_0x820bb7cc(3,9,local_c,4,local_10);
  local_c[0] = 0xffffffffU - (iVar1 >> 0x1f) & local_c[0];
  if ((local_c[0] == 0) || (0x11 < local_c[0])) {
    uVar2 = func_0x820bb56c();
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


/* ==== FUN_82030e90 @ 82030e90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_82030e90(void)

{
  return _UNK_82000494;
}


/* ==== FUN_82030ea0 @ 82030ea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030ea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030f80 @ 82030f80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82030f80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82030ff8 @ 82030ff8 ==== */

void FUN_82030ff8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82031060 @ 82031060 ==== */

void FUN_82031060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820310d0 @ 820310d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820310d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820311a8 @ 820311a8 ==== */

void FUN_820311a8(void)

{
  int iVar1;
  
  iVar1 = FUN_820310d0();
  if (iVar1 == 0) {
    if (*DAT_82000504 != 0) {
      (**(code **)(*DAT_82000504 + 0x18))(2,0);
    }
    func_0x820bb5fc(1);
  }
  return;
}


/* ==== FUN_82031288 @ 82031288 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_82031288(undefined4 param_1,int param_2)

{
  if (param_2 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820312a8 @ 820312a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820312a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82031348 @ 82031348 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82031348(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82031520 @ 82031520 ==== */

void FUN_82031520(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82031640 @ 82031640 ==== */

void FUN_82031640(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820318d0 @ 820318d0 ==== */

void FUN_820318d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82031cd8 @ 82031cd8 ==== */

void FUN_82031cd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82031e10 @ 82031e10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82031e10(undefined4 param_1,undefined4 param_2,ushort *param_3,uint param_4,uint param_5)

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
  uint local_60;
  
  uVar13 = FUN_820844d0();
  iVar3 = (int)(uVar13 >> 0x20);
  if (*(uint *)(iVar3 + 0x1c) < param_5) {
    halt_baddata();
  }
  local_60 = (uint)*param_3;
  bVar1 = *(byte *)((int)param_3 + 5);
  puVar12 = param_3 + local_60 * 8;
  if ((bVar1 & 0x10) == 0) {
    bVar2 = *(byte *)((int)puVar12 + 5);
    if ((bVar2 & 1) != 0) {
      halt_baddata();
    }
    local_60 = *puVar12 + local_60;
    if (local_60 < param_5) {
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
      func_0x820bb8fc(puVar12 + 0xc,uVar10,0xfeeefeee);
    }
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar12;
  }
  else {
    iVar4 = FUN_82031640();
    if (iVar4 == 0) {
      halt_baddata();
    }
    uVar10 = ((param_5 - local_60) * 0x10 + 0xffff & 0xffff0000) >> 4;
    iVar4 = FUN_820318d0();
    bVar2 = *(byte *)(iVar4 + 5);
    local_60 = *param_3 + uVar10;
    if (local_60 < param_5) {
      FUN_82031cd8();
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + uVar10;
      halt_baddata();
    }
  }
  local_60 = local_60 - param_5;
  uVar10 = (uint)*param_3 * 0x10 - (uint)*(byte *)(param_3 + 3);
  if (local_60 < 3) {
    param_5 = local_60 + param_5;
    local_60 = 0;
  }
  if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (ushort)param_5;
  if (local_60 == 0) {
    *(byte *)((int)param_3 + 5) = *(byte *)((int)param_3 + 5) | bVar2 & 0x10;
    *(char *)(param_3 + 3) = (char)(param_5 << 4) - (char)param_4;
    *param_3 = uVar9;
    if ((bVar2 & 0x10) == 0) {
      param_3[(param_5 & 0xffff) * 8 + 1] = uVar9;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3) + 0x40) = param_3;
    }
    goto LAB_82032354;
  }
  puVar12 = param_3 + param_5 * 8;
  *param_3 = uVar9;
  *(char *)(param_3 + 3) = (char)param_5 * '\x10' - (char)param_4;
  puVar12[1] = uVar9;
  bVar1 = *(byte *)(param_3 + 2);
  *(byte *)(puVar12 + 2) = bVar1;
  uVar9 = (ushort)local_60;
  if ((bVar2 & 0x10) == 0) {
    puVar11 = puVar12 + local_60 * 8;
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
        func_0x820bb8fc(puVar11 + 0xc,uVar5,0xfeeefeee);
      }
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar11;
      local_60 = *puVar11 + local_60;
      *(byte *)((int)puVar12 + 5) = bVar1;
      if (0xf000 < local_60) {
        FUN_82031cd8();
        goto LAB_82032354;
      }
      *puVar12 = (ushort)local_60;
      if ((bVar1 & 0x10) == 0) {
        puVar12[local_60 * 8 + 1] = (ushort)local_60;
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar12;
      }
      *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
      uVar5 = local_60 & 0xffff;
      if (0x7f < uVar5) {
        for (piVar7 = *(int **)(iVar3 + 0x180);
            ((int *)(iVar3 + 0x180) != piVar7 && (*(ushort *)(piVar7 + -2) < uVar5));
            piVar7 = (int *)*piVar7) {
        }
        goto LAB_8203231c;
      }
      goto LAB_820322bc;
    }
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xef;
    *puVar12 = uVar9;
    puVar12[local_60 * 8 + 1] = uVar9;
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
    if ((local_60 & 0xffff) < 0x80) goto LAB_8203216c;
    for (piVar7 = *(int **)(iVar3 + 0x180);
        ((int *)(iVar3 + 0x180) != piVar7 && ((uint)*(ushort *)(piVar7 + -2) < (local_60 & 0xffff)))
        ; piVar7 = (int *)*piVar7) {
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + iVar3) + 0x40) = puVar12;
    *(byte *)((int)puVar12 + 5) = bVar2;
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xf8;
    *puVar12 = uVar9;
    if ((local_60 & 0xffff) < 0x80) {
LAB_8203216c:
      uVar5 = local_60 & 0xffff;
LAB_820322bc:
      piVar7 = (int *)((uVar5 + 0x30) * 8 + iVar3);
      if ((int *)*piVar7 == piVar7) {
        iVar4 = ((*puVar12 >> 5) + 0x58) * 4;
        *(uint *)(iVar4 + iVar3) = 1 << (*puVar12 & 0x1f) | *(uint *)(iVar4 + iVar3);
      }
    }
    else {
      for (piVar7 = *(int **)(iVar3 + 0x180);
          ((int *)(iVar3 + 0x180) != piVar7 &&
          ((uint)*(ushort *)(piVar7 + -2) < (local_60 & 0xffff))); piVar7 = (int *)*piVar7) {
      }
    }
  }
LAB_8203231c:
  puVar6 = (undefined4 *)piVar7[1];
  *(int **)(puVar12 + 4) = piVar7;
  *(undefined4 **)(puVar12 + 6) = puVar6;
  *puVar6 = puVar12 + 4;
  piVar7[1] = (int)(puVar12 + 4);
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + local_60;
LAB_82032354:
  if (((uVar13 & 8) != 0) && (uVar10 < param_4)) {
                    /* WARNING: Subroutine does not return */
    FUN_82084370((uint *)((int)param_3 + uVar10 + 0x10),0,param_4 - uVar10);
  }
  *(byte *)((int)param_3 + 5) =
       (byte)((uint)uVar13 >> 4) & 0xe0 | *(byte *)((int)param_3 + 5) & 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032390 @ 82032390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032438 @ 82032438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032438(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  
  uVar8 = FUN_820844d0();
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
    iVar3 = func_0x820bb8ac(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar2 + 0x2c8));
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
    FUN_82031520();
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_82031cd8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820325a0 @ 820325a0 ==== */

void FUN_820325a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820327e0 @ 820327e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820327e0(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar14 = FUN_820844c4();
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
    if ((uStack_80 != 0) && (puVar3 = (undefined4 *)FUN_82031348(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = func_0x820bb8ec(apuStack_7c,&uStack_80,0x4000,*(undefined4 *)(iVar2 + 0x590));
      *puVar3 = *(undefined4 *)(*(int *)(iVar11 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar11 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_82031520();
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
  FUN_82031cd8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032b48 @ 82032b48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032b48(void)

{
  FUN_820844c8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033118 @ 82033118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033118(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar18 = FUN_820844d0();
  iVar5 = (int)((ulonglong)uVar18 >> 0x20);
  local_dc = (uint *)0x0;
  local_d8 = 0;
  local_c4 = iVar5;
  if (((*(uint *)(iVar5 + 0x14) & 0x40000) != 0) &&
     (uVar4 = func_0x820bb8dc(), *(byte *)(iVar5 + 0x17b) != uVar4)) {
    func_0x820bb8cc(0xf4,iVar5,local_8,0x5ea,param_3);
  }
  uVar15 = *(uint *)(iVar5 + 0x18) | (uint)uVar18;
  uVar4 = param_3;
  if (param_3 == 0) {
    uVar4 = 1;
  }
  uVar4 = uVar4 + 0x1f;
  local_e8 = uVar4 & 0xfffffff0;
  uVar8 = uVar4 >> 4;
  bVar2 = (uVar15 & 1) == 0;
  if (bVar2) {
    func_0x820bb5ec(*(undefined4 *)(iVar5 + 0x580));
    local_d8 = 1;
  }
  if (0x7f < uVar8) {
    if (*(uint *)(iVar5 + 0x1c) < uVar8) {
      if ((*(uint *)(iVar5 + 0x14) & 2) != 0) {
        local_e8 = local_e8 + 0x20;
        local_ec = (uint *)0x0;
        iVar5 = func_0x820bb8ac(&local_ec,&local_e8,(~uVar15 & 8) << 0x14 | 0x60001000,4,
                                *(undefined4 *)(iVar5 + 0x590));
        if (-1 < iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_82084370(local_ec,0,0x30);
        }
      }
    }
    else {
LAB_820333d0:
      local_d0 = *(int **)(iVar5 + 0x184);
      piVar12 = (int *)(iVar5 + 0x180);
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
            goto LAB_820334a4;
          }
        }
      }
      local_e4 = (ushort *)FUN_820325a0();
      if (local_e4 != (ushort *)0x0) {
        piVar12 = *(int **)(local_e4 + 6);
        iVar7 = *(int *)(local_e4 + 4);
        if (((ushort *)*piVar12 == *(ushort **)(iVar7 + 4)) && ((ushort *)*piVar12 == local_e4 + 4))
        {
          *piVar12 = iVar7;
          *(int **)(iVar7 + 4) = piVar12;
        }
        goto LAB_820334a4;
      }
    }
    if ((uVar15 & 4) != 0) {
      local_b0 = 0xc0000017;
      local_a8 = 0;
      local_a0 = 1;
      local_ac = 0;
      local_9c = local_e8;
      func_0x820bb79c(&local_b0);
    }
    local_dc = (uint *)0x0;
    goto LAB_82033980;
  }
  piVar12 = (int *)((uVar8 + 0x30) * 8 + iVar5);
  if ((int *)*piVar12 == piVar12) {
    uVar4 = uVar4 >> 9;
    puVar6 = (uint *)((uVar4 + 0x58) * 4 + iVar5);
    local_e0 = puVar6 + 1;
    local_d4 = *puVar6 & ~((1 << (uVar8 & 0x1f)) - 1U);
    if (uVar4 == 0) {
      if (local_d4 == 0) {
        local_d4 = *local_e0;
        local_e0 = puVar6 + 2;
        goto LAB_820332f8;
      }
      iVar7 = iVar5 + 0x180;
    }
    else if (uVar4 == 1) {
LAB_820332f8:
      if (local_d4 == 0) {
        local_d4 = *local_e0;
        local_e0 = local_e0 + 1;
        goto LAB_82033318;
      }
      iVar7 = iVar5 + 0x280;
    }
    else {
      if (uVar4 < 3) {
LAB_82033318:
        if (local_d4 != 0) {
          iVar7 = iVar5 + 0x380;
          goto LAB_82033344;
        }
        local_d4 = *local_e0;
        local_e0 = local_e0 + 1;
      }
      else if (uVar4 != 3) goto LAB_820333d0;
      if (local_d4 == 0) goto LAB_820333d0;
      iVar7 = iVar5 + 0x480;
    }
LAB_82033344:
    puVar13 = *(undefined4 **)((0x1f - LZCOUNT(local_d4 & ~(local_d4 - 1))) * 8 + iVar7 + 4);
    local_e4 = (ushort *)(puVar13 + -2);
    piVar9 = (int *)puVar13[1];
    piVar12 = (int *)*puVar13;
    if (((undefined4 *)*piVar9 == (undefined4 *)piVar12[1]) && ((undefined4 *)*piVar9 == puVar13)) {
      *piVar9 = (int)piVar12;
      piVar12[1] = (int)piVar9;
      if (piVar12 == piVar9) {
        iVar7 = ((*local_e4 >> 5) + 0x58) * 4;
        *(uint *)(iVar7 + iVar5) = *(uint *)(iVar7 + iVar5) ^ 1 << (*local_e4 & 0x1f);
      }
    }
LAB_820334a4:
    puVar16 = local_e4;
    bVar11 = *(byte *)((int)local_e4 + 5);
    *(uint *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) - (uint)*local_e4;
    *(undefined1 *)((int)local_e4 + 5) = 1;
    uVar4 = *local_e4 - uVar8;
    *local_e4 = (ushort)uVar8;
    *(char *)(local_e4 + 3) = (char)local_e8 - (char)param_3;
    *(undefined1 *)((int)local_e4 + 7) = 0;
    local_c0 = local_e4;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        *local_e4 = *local_e4 + 1;
        *(char *)(local_e4 + 3) = *(char *)(local_e4 + 3) + '\x10';
      }
      else {
        puVar17 = local_e4 + uVar8 * 8;
        uVar3 = uVar4 & 0xffff;
        *(byte *)((int)puVar17 + 5) = bVar11;
        puVar17[1] = (ushort)uVar8;
        *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(local_e4 + 2);
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
                goto LAB_82033638;
              }
            }
            else {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              for (piVar12 = *(int **)(iVar5 + 0x180);
                  (local_c8 = piVar12, (int *)(iVar5 + 0x180) != piVar12 &&
                  (local_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                  piVar12 = (int *)*piVar12) {
              }
            }
            goto LAB_8203363c;
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
                  (local_b8 = piVar12, (int *)(iVar5 + 0x180) != piVar12 &&
                  (local_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar8));
                  piVar12 = (int *)*piVar12) {
              }
            }
            puVar13 = (undefined4 *)piVar12[1];
            *(int **)(puVar17 + 4) = piVar12;
            *(undefined4 **)(puVar17 + 6) = puVar13;
            *puVar13 = puVar17 + 4;
            piVar12[1] = (int)(puVar17 + 4);
            iVar7 = uVar4 + *(int *)(iVar5 + 0x30);
            goto LAB_820337fc;
          }
          FUN_82031cd8();
        }
        else {
          if (uVar3 < 0x80) {
            piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar5);
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            if ((int *)*piVar12 == piVar12) {
              iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar7 + iVar5);
LAB_82033638:
              *(uint *)(iVar7 + iVar5) = uVar8;
            }
          }
          else {
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            for (piVar12 = *(int **)(iVar5 + 0x180);
                (local_bc = piVar12, (int *)(iVar5 + 0x180) != piVar12 &&
                (local_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                piVar12 = (int *)*piVar12) {
            }
          }
LAB_8203363c:
          puVar13 = (undefined4 *)piVar12[1];
          *(int **)(puVar17 + 4) = piVar12;
          *(undefined4 **)(puVar17 + 6) = puVar13;
          *puVar13 = puVar17 + 4;
          piVar12[1] = (int)(puVar17 + 4);
          iVar7 = uVar4 + *(int *)(iVar5 + 0x30);
LAB_820337fc:
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
    *(char *)((int)puVar13 + -2) = (char)local_e8 - (char)param_3;
    *(undefined1 *)((int)puVar13 + -1) = 0;
    local_e4 = puVar16;
    local_c0 = puVar16;
  }
  puVar6 = (uint *)(puVar16 + 8);
  local_dc = puVar6;
  if (bVar2) {
    func_0x820bb5dc(*(undefined4 *)(iVar5 + 0x580));
    local_d8 = 0;
  }
  if ((uVar15 & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_82084370(puVar6,0,param_3);
  }
LAB_82033980:
  FUN_820339c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820339c0 @ 820339c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820339c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033a10 @ 82033a10 ==== */

void FUN_82033a10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82033cb4 @ 82033cb4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033cb4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033d08 @ 82033d08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033d08(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  ushort uVar15;
  int iVar12;
  undefined4 *puVar13;
  ushort *puVar14;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  undefined8 uVar19;
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
  
  uVar19 = FUN_820844c4();
  iVar4 = (int)((ulonglong)uVar19 >> 0x20);
  local_e0 = 0;
  iStack00000014 = iVar4;
  iStack00000024 = param_3;
  piStack0000002c = param_4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar3 = func_0x820bb8dc(), *(byte *)(iVar4 + 0x17b) != uVar3)) {
    func_0x820bb8cc(0xf4,iVar4,local_8,0xc7c,param_3);
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  uVar3 = *(uint *)(iVar4 + 0x18) | (uint)uVar19;
  if ((int *)0x7fffffff < param_4) {
    halt_baddata();
  }
  piVar10 = param_4;
  if (param_4 == (int *)0x0) {
    piVar10 = (int *)0x1;
  }
  uVar8 = *(uint *)(iVar4 + 0x54);
  uVar17 = *(int *)(iVar4 + 0x50) + (int)piVar10 & uVar8;
  if ((((uVar3 & 0x3c000100) != 0) || (*(int *)(iVar4 + 0x17c) != 0)) ||
     ((*(byte *)(param_3 + -0xb) & 2) != 0)) {
    uVar17 = uVar17 + 0x10;
  }
  if ((uVar3 & 1) == 0) {
    func_0x820bb5ec(*(undefined4 *)(iVar4 + 0x580));
    uVar3 = uVar3 ^ 1;
    local_e0 = 1;
  }
  puVar18 = (ushort *)(param_3 + -0x10);
  bVar1 = *(byte *)(param_3 + -0xb);
  local_c4 = puVar18;
  if ((bVar1 & 1) == 0) goto LAB_8203451c;
  uVar11 = (uint)*puVar18;
  if ((bVar1 & 8) == 0) {
    piVar10 = (int *)(uVar11 * 0x10 - (uint)*(byte *)(param_3 + -10));
  }
  else {
    uVar8 = *(uint *)(param_3 + -0x18) - uVar11;
    uVar17 = uVar17 + 0x1001f & 0xffff0000;
    piVar10 = (int *)(uVar8 - 0x30);
    uVar11 = *(uint *)(param_3 + -0x18) >> 4;
  }
  local_dc = uVar17 >> 4;
  iVar6 = param_3;
  uVar16 = uVar3;
  local_e4 = piVar10;
  if (uVar11 < local_dc) {
    if (((bVar1 & 8) == 0) &&
       (iVar5 = FUN_82031e10(iVar4,uVar3,puVar18,(uint)param_4,local_dc), iVar12 = iStack00000024,
       iVar5 != 0)) goto LAB_820344e8;
    if ((uVar3 & 0x10) == 0) {
      uVar16 = uVar3 & 0xc003ffff;
      if ((*(byte *)(param_3 + -0xb) & 2) == 0) {
        if (*(byte *)(param_3 + -9) != 0) {
          uVar16 = (uint)*(byte *)(param_3 + -9) << 0x12 | uVar16;
        }
      }
      else {
        uVar16 = (*(byte *)(param_3 + -0xb) & 0xe0) << 4 | 0x100 | uVar3 & 0xc003f1ff;
        if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
          puVar14 = puVar18 + (uint)*puVar18 * 8 + -8;
        }
        else {
          puVar14 = (ushort *)(param_3 + -0x28);
        }
        uVar15 = puVar14[1];
        if ((uVar15 != 0) && ((uVar15 & 0x8000) == 0)) {
          uVar16 = (uint)uVar15 << 0x12 | uVar16;
        }
      }
      iVar6 = FUN_82033118(iVar4,uVar16 & 0xfffffff7,(uint)param_4);
      iVar12 = iVar6;
      if (iVar6 != 0) {
        if ((*(byte *)(iVar6 + -0xb) & 2) != 0) {
          if ((*(byte *)(iVar6 + -0xb) & 8) == 0) {
            puVar14 = (ushort *)(iVar6 + -0x10) + (uint)*(ushort *)(iVar6 + -0x10) * 8 + -8;
          }
          else {
            puVar14 = (ushort *)(iVar6 + -0x28);
          }
          if ((*(byte *)(param_3 + -0xb) & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
            puVar18 = puVar18 + (uint)*puVar18 * 8 + -8;
          }
          else {
            puVar18 = (ushort *)(param_3 + -0x28);
          }
          *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar18 + 2);
        }
        piVar7 = param_4;
        if (piVar10 <= param_4) {
          piVar7 = piVar10;
        }
        FUN_820842b0(iVar6,param_3,(uint)piVar7);
        if ((piVar10 < param_4) && ((uVar16 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_82084370((uint *)(iVar6 + (int)piVar10),0,(int)param_4 - (int)piVar10);
        }
        FUN_82033a10();
      }
      goto LAB_820344e8;
    }
    iStack00000024 = 0;
  }
  else {
    if (local_dc + 1 == uVar11) {
      uVar17 = uVar17 + 0x10;
      local_dc = local_dc + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(param_3 + -10) = (char)uVar17 - (char)param_4;
    }
    else {
      *puVar18 = ((short)uVar17 - (short)param_4) - 0x30;
    }
    if ((piVar10 < param_4) && ((uVar3 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_82084370((uint *)((int)piVar10 + param_3),0,(int)param_4 - (int)piVar10);
    }
    iVar12 = iStack00000024;
    if (local_dc != uVar11) {
      bVar2 = *(byte *)(param_3 + -0xb);
      if ((bVar2 & 8) == 0) {
        puVar14 = puVar18 + local_dc * 8;
        *(byte *)((int)puVar14 + 5) = bVar2 & 0xfe;
        puVar14[1] = (ushort)local_dc;
        *(undefined1 *)(puVar14 + 2) = *(undefined1 *)(param_3 + -0xc);
        uVar3 = *puVar18 - local_dc;
        *puVar18 = (ushort)local_dc;
        *(byte *)(param_3 + -0xb) = *(byte *)(param_3 + -0xb) & 0xef;
        uVar15 = (ushort)uVar3;
        if ((bVar2 & 0x10) == 0) {
          puVar18 = puVar14 + uVar3 * 8;
          if ((*(byte *)((int)puVar18 + 5) & 1) != 0) {
            *puVar14 = uVar15;
            puVar18[1] = uVar15;
            *(byte *)((int)puVar14 + 5) = *(byte *)((int)puVar14 + 5) & 0xf8;
            if ((uVar3 & 0xffff) < 0x80) goto LAB_82034090;
            for (piVar10 = *(int **)(iVar4 + 0x180);
                (local_d0 = piVar10, (int *)(iVar4 + 0x180) != piVar10 &&
                (local_e4 = piVar10 + -2, (uint)*(ushort *)(piVar10 + -2) < (uVar3 & 0xffff)));
                piVar10 = (int *)*piVar10) {
            }
            goto LAB_820340c8;
          }
          *(byte *)((int)puVar14 + 5) = *(byte *)((int)puVar18 + 5);
          puVar13 = *(undefined4 **)(puVar18 + 6);
          puVar9 = *(undefined4 **)(puVar18 + 4);
          if (((ushort *)*puVar13 == (ushort *)puVar9[1]) && ((ushort *)*puVar13 == puVar18 + 4)) {
            *puVar13 = puVar9;
            puVar9[1] = puVar13;
            if ((puVar9 == puVar13) && (uVar15 = *puVar18, uVar15 < 0x80)) {
              iVar12 = ((uVar15 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar4) = *(uint *)(iVar12 + iVar4) ^ 1 << (uVar15 & 0x1f);
            }
          }
          if ((*(byte *)((int)puVar18 + 5) & 4) != 0) {
            local_cc = (uint)*puVar18 * 0x10 - 0x18;
            if (((*(byte *)((int)puVar18 + 5) & 2) != 0) && (4 < local_cc)) {
              local_cc = (uint)*puVar18 * 0x10 - 0x1c;
            }
            func_0x820bb8fc(puVar18 + 0xc,local_cc,0xfeeefeee);
          }
          *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puVar18;
          uVar3 = *puVar18 + uVar3;
          if (0xf000 < uVar3) {
            FUN_82031cd8();
            iVar12 = iStack00000024;
            goto LAB_820344e8;
          }
          uVar8 = uVar3 & 0xffff;
          *puVar14 = (ushort)uVar3;
          if ((*(byte *)((int)puVar14 + 5) & 0x10) == 0) {
            puVar14[uVar3 * 8 + 1] = (ushort)uVar3;
          }
          else {
            *(ushort **)(*(int *)((*(byte *)(puVar14 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar14;
          }
          *(byte *)((int)puVar14 + 5) = *(byte *)((int)puVar14 + 5) & 0xf8;
          if (uVar8 < 0x80) {
            piVar10 = (int *)((uVar8 + 0x30) * 8 + iVar4);
            if ((int *)*piVar10 == piVar10) {
              iVar12 = ((*puVar14 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar4) = *(uint *)(iVar12 + iVar4) | 1 << (*puVar14 & 0x1f);
            }
          }
          else {
            for (piVar10 = *(int **)(iVar4 + 0x180);
                (local_c8 = piVar10, (int *)(iVar4 + 0x180) != piVar10 &&
                (local_e4 = piVar10 + -2, *(ushort *)(piVar10 + -2) < uVar8));
                piVar10 = (int *)*piVar10) {
            }
          }
          puVar9 = (undefined4 *)piVar10[1];
          *(int **)(puVar14 + 4) = piVar10;
          *(undefined4 **)(puVar14 + 6) = puVar9;
          *puVar9 = puVar14 + 4;
          piVar10[1] = (int)(puVar14 + 4);
          iVar12 = uVar3 + *(int *)(iVar4 + 0x30);
        }
        else {
          *(ushort **)(*(int *)((*(byte *)(puVar14 + 2) + 0x18) * 4 + iVar4) + 0x40) = puVar14;
          *puVar14 = uVar15;
          *(byte *)((int)puVar14 + 5) = *(byte *)((int)puVar14 + 5) & 0xf8;
          if ((uVar3 & 0xffff) < 0x80) {
LAB_82034090:
            piVar10 = (int *)(((uVar3 & 0xffff) + 0x30) * 8 + iVar4);
            if ((int *)*piVar10 == piVar10) {
              iVar12 = ((*puVar14 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar4) = *(uint *)(iVar12 + iVar4) | 1 << (*puVar14 & 0x1f);
            }
          }
          else {
            for (piVar10 = *(int **)(iVar4 + 0x180);
                (local_d4 = piVar10, (int *)(iVar4 + 0x180) != piVar10 &&
                (local_e4 = piVar10 + -2, (uint)*(ushort *)(piVar10 + -2) < (uVar3 & 0xffff)));
                piVar10 = (int *)*piVar10) {
            }
          }
LAB_820340c8:
          puVar9 = (undefined4 *)piVar10[1];
          *(int **)(puVar14 + 4) = piVar10;
          *(undefined4 **)(puVar14 + 6) = puVar9;
          *puVar9 = puVar14 + 4;
          piVar10[1] = (int)(puVar14 + 4);
          iVar12 = uVar3 + *(int *)(iVar4 + 0x30);
        }
        *(int *)(iVar4 + 0x30) = iVar12;
        iVar12 = iStack00000024;
      }
      else {
        local_d8 = param_3 + -0x30 + uVar17;
        local_e8 = uVar11 * 0x10 - uVar17;
        iVar4 = func_0x820bb8ec(&local_d8,&local_e8,0x8000,*(undefined4 *)(iVar4 + 0x590),bVar1,
                                uVar8);
        iVar12 = iStack00000024;
        if (-1 < iVar4) {
          *(int *)(param_3 + -0x18) = *(int *)(param_3 + -0x18) - local_e8;
        }
      }
    }
LAB_820344e8:
    iStack00000024 = iVar12;
    uVar3 = uVar16;
    if (iVar6 != 0) goto LAB_8203451c;
  }
  if ((uVar3 & 4) != 0) {
    local_c0 = 0xc0000017;
    local_b8 = 0;
    local_b0 = 1;
    local_bc = 0;
    local_ac = uVar17;
    func_0x820bb79c(&local_c0);
  }
LAB_8203451c:
  FUN_82034570();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034570 @ 82034570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034570(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820345e8 @ 820345e8 ==== */

undefined4 FUN_820345e8(void)

{
  return DAT_820c7954;
}


/* ==== FUN_820346b8 @ 820346b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820346b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820346c8 @ 820346c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820346c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034788 @ 82034788 ==== */

void FUN_82034788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== thunk_EXT_FUN_820bb95c @ 82034798 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820bb95c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_820bb96c @ 820347a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820bb96c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820347a8 @ 820347a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820347a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820347f0 @ 820347f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820347f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820348f0 @ 820348f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820348f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034970 @ 82034970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820349c0 @ 820349c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820349c0(int *param_1)

{
  if (3 < *param_1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820349e8 @ 820349e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820349e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034a58 @ 82034a58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034a58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034ab0 @ 82034ab0 ==== */

void FUN_82034ab0(int *param_1)

{
  undefined4 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = (undefined4 *)FUN_82022858(), puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}


/* ==== FUN_82034af8 @ 82034af8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034af8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034b48 @ 82034b48 ==== */

undefined4 FUN_82034b48(void)

{
  return uRam820c5f00;
}


/* ==== FUN_82034b58 @ 82034b58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034b58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034bb8 @ 82034bb8 ==== */

void FUN_82034bb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82034d10 @ 82034d10 ==== */

int FUN_82034d10(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x14);
  if (pcVar1 == (char *)0x0) {
    return param_1;
  }
  if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && ((*pcVar1 != 'C' || (pcVar1[1] != '\0')))) {
    return 0;
  }
  return -0x7df3d610;
}


/* ==== FUN_82034d28 @ 82034d28 ==== */

void FUN_82034d28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82034db0 @ 82034db0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034db0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034e40 @ 82034e40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034e40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034eb8 @ 82034eb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034eb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034f78 @ 82034f78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034f78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034fd0 @ 82034fd0 ==== */

void FUN_82034fd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82035150 @ 82035150 ==== */

void FUN_82035150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820351c8 @ 820351c8 ==== */

undefined * FUN_820351c8(void)

{
  return &DAT_820c25d0;
}


/* ==== FUN_820351f0 @ 820351f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820351f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035258 @ 82035258 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035258(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820352b0 @ 820352b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820352b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820352f8 @ 820352f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820352f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820353c8 @ 820353c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820353c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035460 @ 82035460 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035460(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820354b8 @ 820354b8 ==== */

void FUN_820354b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82035548 @ 82035548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820355e8 @ 820355e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820355e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035658 @ 82035658 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035658(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820356b8 @ 820356b8 ==== */

void FUN_820356b8(void)

{
  FUN_82035658();
                    /* WARNING: Subroutine does not return */
  FUN_82085f28();
}


/* ==== FUN_820356f0 @ 820356f0 ==== */

void FUN_820356f0(void)

{
  FUN_82035658();
                    /* WARNING: Subroutine does not return */
  FUN_82085f28();
}


/* ==== FUN_82035778 @ 82035778 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035778(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035810 @ 82035810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820358c8 @ 820358c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820358c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035910 @ 82035910 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035910(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035950 @ 82035950 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035950(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82035810 @ 82035998 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82035810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_820bb5cc @ 820359a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820bb5cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_820bb5ec @ 820359a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820bb5ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820359b8 @ 820359b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820359b8(undefined4 param_1)

{
  int iVar1;
  
  if (iRam820c2648 == 0) {
    iVar1 = FUN_8208af68();
    if (iVar1 != 0) {
      FUN_8208af80();
    }
    if ((DAT_820c29d0 & 2) != 0) {
      FUN_82083c68();
    }
    FUN_82085348();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam820c2648 = iRam820c2648 + -1;
  *(undefined4 *)(iRam820c2648 * 4 + -0x7df3a070) = param_1;
  return;
}


/* ==== FUN_820359e8 @ 820359e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820359e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035a58 @ 82035a58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035a58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035c90 @ 82035c90 ==== */

undefined4 FUN_82035c90(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_2 < *param_1) || (param_2[1] < param_1[1])) || (param_1[2] < param_2[2])) ||
     (uVar1 = 1, param_1[3] < param_2[3])) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_82035ce0 @ 82035ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035d60 @ 82035d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035e40 @ 82035e40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035e40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035f20 @ 82035f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035f20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036000 @ 82036000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036168 @ 82036168 ==== */

void FUN_82036168(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82036340 @ 82036340 ==== */

void FUN_82036340(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82036528 @ 82036528 ==== */

void FUN_82036528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82036580 @ 82036580 ==== */

void FUN_82036580(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[9] = 0;
  return;
}


/* ==== FUN_820365b0 @ 820365b0 ==== */

void FUN_820365b0(void)

{
  FUN_82036528();
  return;
}


/* ==== FUN_820365e8 @ 820365e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820365e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036670 @ 82036670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820366d8 @ 820366d8 ==== */

void FUN_820366d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82036bf8 @ 82036bf8 ==== */

void FUN_82036bf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82036cc8 @ 82036cc8 ==== */

undefined4 FUN_82036cc8(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((param_1[3] <= param_2[1]) || (param_2[3] <= param_1[1])) || (param_1[2] <= *param_2)) ||
     (uVar1 = 1, param_2[2] <= *param_1)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_82036d18 @ 82036d18 ==== */

void FUN_82036d18(float *param_1,float *param_2)

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


/* ==== FUN_82036d70 @ 82036d70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036d70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036e30 @ 82036e30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036e30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036eb8 @ 82036eb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036eb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036f38 @ 82036f38 ==== */

double FUN_82036f38(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    return (double)DAT_82001c98;
  }
  fVar1 = *(float *)(DAT_820c5fbc + 0x1948) * *(float *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
  }
  return (double)(*(float *)(DAT_820c5fbc + 0x1568) * DAT_82001cc0 + fVar1);
}


/* ==== FUN_82036f90 @ 82036f90 ==== */

double FUN_82036f90(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x400) != 0) {
    fVar1 = *(float *)(DAT_820c5fbc + 0x1948) * *(float *)(param_1 + 0x23c);
    if (*(int *)(param_1 + 0x2d8) != 0) {
      fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
    }
    return (double)(*(float *)(DAT_820c5fbc + 0x1568) * DAT_82001cc0 + *(float *)(param_1 + 0x138) +
                   fVar1);
  }
  return (double)DAT_82001c98;
}


/* ==== FUN_82036ff8 @ 82036ff8 ==== */

void FUN_82036ff8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82037268 @ 82037268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820372f8 @ 820372f8 ==== */

void FUN_820372f8(char *param_1)

{
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  return;
}


/* ==== FUN_82037320 @ 82037320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037320(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820373a8 @ 820373a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820373a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037408 @ 82037408 ==== */

uint FUN_82037408(byte *param_1,uint param_2,uint param_3)

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
      uVar4 = *(uint *)(&DAT_820044b0 + (uVar4 & 0xff ^ uVar6) * 4) ^ uVar4 >> 8;
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
      uVar4 = *(uint *)(&DAT_820044b0 + (uVar4 & 0xff ^ uVar5) * 4) ^ uVar4 >> 8;
      uVar6 = uVar6 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar6 != 0);
  }
  return ~uVar4;
}


/* ==== FUN_820374e8 @ 820374e8 ==== */

void FUN_820374e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82037560 @ 82037560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820375e0 @ 820375e0 ==== */

uint FUN_820375e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = DAT_82001c98;
  if ((DAT_82001c98 <= fVar1) && (fVar2 = fVar1, DAT_82002058 < fVar1)) {
    fVar2 = DAT_82002058;
  }
  fVar1 = param_1[1];
  fVar5 = DAT_82001c98;
  if ((DAT_82001c98 <= fVar1) && (fVar5 = fVar1, DAT_82002058 < fVar1)) {
    fVar5 = DAT_82002058;
  }
  fVar1 = param_1[2];
  fVar4 = DAT_82001c98;
  if ((DAT_82001c98 <= fVar1) && (fVar4 = fVar1, DAT_82002058 < fVar1)) {
    fVar4 = DAT_82002058;
  }
  fVar1 = param_1[3];
  fVar3 = DAT_82001c98;
  if ((DAT_82001c98 <= fVar1) && (fVar3 = fVar1, DAT_82002058 < fVar1)) {
    fVar3 = DAT_82002058;
  }
  return (int)(fVar3 * DAT_82004a48 + DAT_82001c60) << 0x18 |
         (int)(fVar4 * DAT_82004a48 + DAT_82001c60) << 0x10 |
         (int)(fVar5 * DAT_82004a48 + DAT_82001c60) << 8 |
         (int)(fVar2 * DAT_82004a48 + DAT_82001c60);
}


/* ==== FUN_820376e0 @ 820376e0 ==== */

void FUN_820376e0(uint *param_1,uint param_2)

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


/* ==== FUN_82037738 @ 82037738 ==== */

int FUN_82037738(void)

{
  return DAT_820c5fbc + 0x1528;
}


/* ==== FUN_82037748 @ 82037748 ==== */

void FUN_82037748(double param_1,int param_2)

{
  int iVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  iVar1 = param_2 * 0x10 + DAT_820c5fbc + 0x1528;
  local_20 = *(float *)(iVar1 + 200);
  local_1c = *(undefined4 *)(iVar1 + 0xcc);
  local_18 = *(undefined4 *)(iVar1 + 0xd0);
  local_14 = (float)((double)(*(float *)(DAT_820c5fbc + 0x1528) * *(float *)(iVar1 + 0xd4)) *
                    param_1);
  FUN_820375e0(&local_20);
  return;
}


/* ==== FUN_820377c0 @ 820377c0 ==== */

void FUN_820377c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82037940 @ 82037940 ==== */

void FUN_82037940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82037b80 @ 82037b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037b80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = DAT_820c5fbc;
  bVar3 = param_1 != *(int *)(DAT_820c5fbc + 0x1be0);
  *(bool *)(DAT_820c5fbc + 0x1bec) = bVar3;
  if (bVar3) {
    *(undefined1 *)(iVar1 + 0x1bef) = 0;
    *(undefined1 *)(iVar1 + 0x1bf0) = 0;
    *(undefined4 *)(iVar1 + 0x1c18) = 0xffffffff;
    uVar2 = DAT_82001c98;
    *(undefined4 *)(iVar1 + 0x1be8) = DAT_82001c98;
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


/* ==== FUN_82037c38 @ 82037c38 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82037bcc) */
/* WARNING: Removing unreachable block (ram,0x82037bf0) */
/* WARNING: Removing unreachable block (ram,0x82037c00) */
/* WARNING: Removing unreachable block (ram,0x82037c0c) */
/* WARNING: Removing unreachable block (ram,0x82037c1c) */
/* WARNING: Removing unreachable block (ram,0x82037c20) */

void FUN_82037c38(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_820c5fbc;
  bVar2 = *(int *)(DAT_820c5fbc + 0x1be0) != 0;
  *(bool *)(DAT_820c5fbc + 0x1bec) = bVar2;
  if (bVar2) {
    *(undefined1 *)(iVar1 + 0x1bef) = 0;
    *(undefined1 *)(iVar1 + 0x1bf0) = 0;
    *(undefined4 *)(iVar1 + 0x1c18) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x1be8) = DAT_82001c98;
  }
  *(undefined4 *)(iVar1 + 0x1be0) = 0;
  *(undefined4 *)(iVar1 + 0x1c10) = 0;
  *(undefined1 *)(iVar1 + 0x1bed) = 0;
  *(undefined1 *)(iVar1 + 0x1bee) = 0;
  *(undefined1 *)(iVar1 + 0x1bf1) = 0;
  *(undefined1 *)(iVar1 + 0x1bf2) = 0;
  *(undefined4 *)(iVar1 + 0x1bf4) = 0;
  *(undefined4 *)(iVar1 + 0x1bf8) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037c48 @ 82037c48 ==== */

void FUN_82037c48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_820c5fbc;
  *(int *)(DAT_820c5fbc + 0x1bcc) = param_1;
  *(undefined1 *)(iVar2 + 0x1bd4) = 0;
  *(undefined1 *)(iVar2 + 0x1bd5) = 0;
  uVar1 = DAT_82001c98;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x1bd0) == param_1) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x1bdc) = DAT_82001c98;
  *(undefined4 *)(iVar2 + 0x1bd8) = uVar1;
  return;
}


/* ==== FUN_82037c88 @ 82037c88 ==== */

void FUN_82037c88(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  if (*(int *)(DAT_820c5fbc + 0x1be0) == param_1) {
    *(int *)(DAT_820c5fbc + 0x1be4) = param_1;
  }
  if (*(int *)(iVar1 + 0x1c1c) != param_1) {
    return;
  }
  *(undefined1 *)(iVar1 + 0x1c20) = 1;
  return;
}


/* ==== FUN_82037cb8 @ 82037cb8 ==== */

void FUN_82037cb8(void)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined1 *)(DAT_820c5fbc + 0x1bf1) = 1;
  *(undefined1 *)(iVar1 + 0x1bf0) = 1;
  *(uint *)(iVar1 + 0x1c50) = *(uint *)(iVar1 + 0x1c50) | 4;
  return;
}


/* ==== FUN_82037ce0 @ 82037ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037d60 @ 82037d60 ==== */

void FUN_82037d60(undefined4 param_1)

{
  if (DAT_820c5fbc != 0) {
    *(int *)(DAT_820c5fbc + 0x36c) = *(int *)(DAT_820c5fbc + 0x36c) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82037d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_820c26b0)(param_1,DAT_820c5fc0);
  return;
}


/* ==== FUN_82037d98 @ 82037d98 ==== */

void FUN_82037d98(int param_1)

{
  if ((param_1 != 0) && (DAT_820c5fbc != 0)) {
    *(int *)(DAT_820c5fbc + 0x36c) = *(int *)(DAT_820c5fbc + 0x36c) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x82037dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam820c26b4)(param_1,DAT_820c5fc0);
  return;
}


/* ==== FUN_82037dd8 @ 82037dd8 ==== */

undefined4 FUN_82037dd8(void)

{
  return DAT_820c5fbc;
}


/* ==== FUN_82037de8 @ 82037de8 ==== */

int FUN_82037de8(void)

{
  return DAT_820c5fbc + 8;
}


/* ==== FUN_82037df8 @ 82037df8 ==== */

undefined8 FUN_82037df8(void)

{
  return *(undefined8 *)(DAT_820c5fbc + 0x1b40);
}


/* ==== FUN_82037e08 @ 82037e08 ==== */

byte FUN_82037e08(void)

{
  byte bVar1;
  
  bVar1 = *(char *)(DAT_820c5fbc + 0xfc) != '\0';
  if (*(char *)(DAT_820c5fbc + 0xfd) != '\0') {
    bVar1 = bVar1 | 2;
  }
  if (*(char *)(DAT_820c5fbc + 0xfe) != '\0') {
    bVar1 = bVar1 | 4;
  }
  if (*(char *)(DAT_820c5fbc + 0xff) == '\0') {
    return bVar1;
  }
  return bVar1 | 8;
}


/* ==== FUN_82037e98 @ 82037e98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037e98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037fa0 @ 82037fa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037fa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038058 @ 82038058 ==== */

int FUN_82038058(double param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (double)DAT_82001c98) {
    return 1;
  }
  if (param_1 < param_2) {
    if ((double)DAT_82001c98 < param_4) {
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


/* ==== FUN_820380f0 @ 820380f0 ==== */

undefined4 FUN_820380f0(int param_1,char param_2)

{
  int iVar1;
  double dVar2;
  
  if (-1 < param_1) {
    iVar1 = (param_1 + 0x11d) * 4;
    dVar2 = (double)*(float *)(iVar1 + DAT_820c5fbc);
    if (dVar2 == (double)DAT_82001c98) {
      return 1;
    }
    if ((param_2 != '\0') && ((double)*(float *)(DAT_820c5fbc + 0x8c) < dVar2)) {
      dVar2 = (double)*(float *)(iVar1 + DAT_820c5fbc);
                    /* WARNING: Subroutine does not return */
      FUN_82038058((double)(float)(dVar2 - (double)*(float *)(DAT_820c5fbc + 0x18)),dVar2,
                   (double)*(float *)(DAT_820c5fbc + 0x8c),(double)*(float *)(DAT_820c5fbc + 0x90));
    }
  }
  return 0;
}


/* ==== FUN_82038180 @ 82038180 ==== */

undefined4 FUN_82038180(int param_1,char param_2)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)((param_1 + 0x104) * 4 + DAT_820c5fbc);
  if (dVar2 == (double)DAT_82001c98) {
    uVar1 = 1;
  }
  else {
    if ((param_2 != '\0') && ((double)*(float *)(DAT_820c5fbc + 0x8c) < dVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_82038058((double)(float)(dVar2 - (double)*(float *)(DAT_820c5fbc + 0x18)),dVar2,
                   (double)*(float *)(DAT_820c5fbc + 0x8c),
                   (double)(*(float *)(DAT_820c5fbc + 0x90) * DAT_82001c60));
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_82038208 @ 82038208 ==== */

bool FUN_82038208(double param_1,int param_2)

{
  if (*(char *)(DAT_820c5fbc + param_2 + 0xec) == '\0') {
    return false;
  }
  if (param_1 < (double)DAT_82001c98) {
    param_1 = (double)*(float *)(DAT_820c5fbc + 0x30);
  }
  return (float)(param_1 * param_1) <= *(float *)((param_2 + 0x118) * 4 + DAT_820c5fbc);
}


/* ==== FUN_82038268 @ 82038268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820382b8 @ 820382b8 ==== */

bool FUN_820382b8(void)

{
  if (*(int *)(DAT_820c5fbc + 0x1be0) != 0) {
    return *(int *)(DAT_820c5fbc + 0x1c48) == *(int *)(DAT_820c5fbc + 0x1be0);
  }
  return false;
}


/* ==== FUN_820382e8 @ 820382e8 ==== */

void FUN_820382e8(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_820c5fbc;
  piVar1 = (int *)(DAT_820c5fbc + 0x1c48);
  if (*(int *)(DAT_820c5fbc + 0x1bcc) == *piVar1) {
    *(undefined1 *)(DAT_820c5fbc + 0x1bd4) = 1;
  }
  if (*(int *)(iVar2 + 0x1be0) != *piVar1) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x1bed) = 1;
  return;
}


/* ==== FUN_82038320 @ 82038320 ==== */

void FUN_82038320(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_820c5fbc + 0x1c58);
  *param_1 = *(undefined4 *)(DAT_820c5fbc + 0x1c54);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_82038340 @ 82038340 ==== */

void FUN_82038340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_820c5fbc + 0x1c60);
  *param_1 = *(undefined4 *)(DAT_820c5fbc + 0x1c5c);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_82038360 @ 82038360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038468 @ 82038468 ==== */

void FUN_82038468(double param_1,double param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = DAT_82001c98;
  dVar5 = (double)*(float *)(param_4 + 0xc);
  dVar4 = (double)*(float *)(param_4 + 0x10);
  dVar3 = (double)(float)((double)*(float *)(param_4 + 0x14) + dVar5);
  dVar6 = (double)(float)((double)*(float *)(param_4 + 0x18) + dVar4);
  if (param_2 == (double)DAT_82001c98) {
    dVar3 = (double)(float)(dVar3 - (double)DAT_82002058);
    dVar6 = (double)(float)(dVar6 - (double)DAT_82002058);
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
          *param_3 = DAT_82001c98;
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
      goto LAB_820384c0;
    }
    *param_3 = (float)(dVar3 - param_2);
    param_3[1] = (float)(dVar4 + param_1);
  }
  fVar2 = (float)(dVar3 + param_2);
  fVar1 = (float)(dVar6 - param_1);
LAB_820384c0:
  param_3[2] = fVar2;
  param_3[3] = fVar1;
  return;
}


/* ==== FUN_82038548 @ 82038548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038618 @ 82038618 ==== */

void FUN_82038618(int param_1,uint param_2,int param_3)

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


/* ==== FUN_82038700 @ 82038700 ==== */

bool FUN_82038700(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(DAT_820c5fbc + 0x1d54);
  iVar6 = *(int *)(DAT_820c5fbc + 0x1ba8);
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


/* ==== FUN_82038788 @ 82038788 ==== */

double FUN_82038788(void)

{
  return (double)*(float *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x14);
}


/* ==== FUN_820387a0 @ 820387a0 ==== */

void FUN_820387a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x10);
  *param_1 = *(undefined4 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0xc);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_820387c0 @ 820387c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820387c0(int param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 != 0) && (((int)*(char *)(param_1 + 0xb0) & param_3) == 0)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820388f0 @ 820388f0 ==== */

void FUN_820388f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x18);
  *param_1 = *(undefined4 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x14);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_82038910 @ 82038910 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038910(int param_1,float *param_2,uint param_3)

{
  float fVar1;
  
  if ((param_3 != 0) &&
     (((int)(*(uint *)(param_1 + 0xb0) << 8 | *(uint *)(param_1 + 0xb0) >> 0x18) >> 0x18 & param_3)
      == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfff1ffff;
  fVar1 = DAT_82001c98;
  if (DAT_82001c98 < *param_2) {
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


/* ==== FUN_820389d0 @ 820389d0 ==== */

void FUN_820389d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(uint *)(DAT_820c5fbc + 0x1c84) = *(uint *)(DAT_820c5fbc + 0x1c84) | 1;
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


/* ==== FUN_82038a18 @ 82038a18 ==== */

void FUN_82038a18(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(uint *)(DAT_820c5fbc + 0x1c84) = *(uint *)(DAT_820c5fbc + 0x1c84) | 2;
  *(undefined4 *)(iVar1 + 0x1ca4) = *param_1;
  *(undefined4 *)(iVar1 + 0x1ca8) = param_1[1];
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(int *)(iVar1 + 0x1c8c) = param_2;
  return;
}


/* ==== FUN_82038a50 @ 82038a50 ==== */

undefined4 FUN_82038a50(void)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  return *(undefined4 *)(*(int *)(iVar1 + 0x1ba8) + 0x244);
}


/* ==== FUN_82038a70 @ 82038a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038ab8 @ 82038ab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038ab8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038b60 @ 82038b60 ==== */

void FUN_82038b60(double param_1,double param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1ba8);
  if (*(char *)(iVar2 + 0x8f) != '\0') {
    return;
  }
  dVar3 = (double)DAT_82001c98;
  if (param_1 == dVar3) {
    if (param_2 < dVar3) {
      param_2 = (double)*(float *)(DAT_820c5fbc + 0x1574);
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


/* ==== FUN_82038c10 @ 82038c10 ==== */

void FUN_82038c10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0xd4);
  *param_1 = *(undefined4 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0xd0);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_82038c30 @ 82038c30 ==== */

double FUN_82038c30(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_820c5fbc + 0x1ba8);
  return (double)((*(float *)(iVar1 + 0xd0) - *(float *)(iVar1 + 0xc)) + *(float *)(iVar1 + 0x58));
}


/* ==== FUN_82038c58 @ 82038c58 ==== */

double FUN_82038c58(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_820c5fbc + 0x1ba8);
  return (double)((*(float *)(iVar1 + 0xd4) - *(float *)(iVar1 + 0x10)) + *(float *)(iVar1 + 0x5c));
}


/* ==== FUN_82038c80 @ 82038c80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038c80(void)

{
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038d18 @ 82038d18 ==== */

double FUN_82038d18(void)

{
  return (double)*(float *)(DAT_820c5fbc + 0x1944);
}


/* ==== FUN_82038d28 @ 82038d28 ==== */

double FUN_82038d28(void)

{
  return (double)(*(float *)(DAT_820c5fbc + 0x1944) + *(float *)(DAT_820c5fbc + 0x1578));
}


/* ==== FUN_82038d40 @ 82038d40 ==== */

double FUN_82038d40(void)

{
  return (double)(*(float *)(DAT_820c5fbc + 0x1568) * DAT_82001cc0 +
                 *(float *)(DAT_820c5fbc + 0x1944));
}


/* ==== FUN_82038d60 @ 82038d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038dc0 @ 82038dc0 ==== */

double FUN_82038dc0(void)

{
  return (double)*(float *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x5c);
}


/* ==== FUN_82038dd8 @ 82038dd8 ==== */

void FUN_82038dd8(double param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_82001c98;
  iVar2 = *(int *)(DAT_820c5fbc + 0x1ba8);
  *(float *)(iVar2 + 0x6c) = (float)param_1;
  *(undefined4 *)(iVar2 + 0x74) = uVar1;
  *(undefined4 *)(iVar2 + 0x7c) = uVar1;
  return;
}


/* ==== FUN_82038e00 @ 82038e00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038e00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038e98 @ 82038e98 ==== */

int FUN_82038e98(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_820c5fbc + 0x1d2c) + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x24;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(DAT_820c5fbc + 0x1d34) + 4);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x8000000) != 0)) {
        return iVar1;
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x24;
    } while (-1 < iVar3);
  }
  return 0;
}


/* ==== FUN_82038ee8 @ 82038ee8 ==== */

int FUN_82038ee8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_820c5fbc + 0x1d2c) + -1;
  if (-1 < iVar3) {
    iVar4 = iVar3 * 0x24;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(DAT_820c5fbc + 0x1d34) + 4);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 8) & 0x8000000) != 0)) {
        if (*(char *)(iVar2 + 0x8a) == '\0') {
LAB_82038f3c:
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (*(char *)(iVar2 + 0x91) != '\0') goto LAB_82038f3c;
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


/* ==== FUN_82038f60 @ 82038f60 ==== */

void FUN_82038f60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined4 *)(DAT_820c5fbc + 0x1d58) = param_1;
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


/* ==== FUN_82038fc0 @ 82038fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038fc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_820c5fbc;
  iVar2 = *(int *)(param_2 + 0x124);
  if (*(int *)(DAT_820c5fbc + 0x1d54) != param_2) {
    *(undefined1 *)(DAT_820c5fbc + 0x1d95) = 0;
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


/* ==== FUN_820390a0 @ 820390a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820390a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_820c5fbc;
  iVar2 = *(int *)(DAT_820c5fbc + 0x1ba8);
  *param_1 = iVar2;
  param_1[1] = *(int *)(iVar1 + 0x1c48);
  param_1[2] = *(int *)(iVar2 + 300);
  param_1[7] = *(int *)(iVar1 + 0x1c4c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039138 @ 82039138 ==== */

void FUN_82039138(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82039288 @ 82039288 ==== */

double FUN_82039288(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == 0) {
    dVar2 = (double)*(float *)((param_1 + 0xc0) * 4 + DAT_820c5fbc);
  }
  else {
    dVar1 = (double)DAT_82001c98;
    dVar3 = (double)*(float *)((param_1 + 0x51d) * 4 + DAT_820c5fbc);
    dVar2 = dVar1;
    if (dVar1 <= dVar3) {
      if (param_2 == 1) {
        if (dVar3 == dVar1) {
          dVar2 = (double)DAT_82002058;
        }
      }
      else {
        if (param_2 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_82038058((double)(float)(dVar3 - (double)*(float *)(DAT_820c5fbc + 0x18)),dVar3,
                       (double)(*(float *)(DAT_820c5fbc + 0x8c) * DAT_82004a70),
                       (double)(*(float *)(DAT_820c5fbc + 0x90) * DAT_82004a74));
        }
        if (param_2 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_82038058((double)(float)(dVar3 - (double)*(float *)(DAT_820c5fbc + 0x18)),dVar3,
                       (double)(*(float *)(DAT_820c5fbc + 0x8c) * DAT_82004a20),
                       (double)(*(float *)(DAT_820c5fbc + 0x90) * DAT_82001cc0));
        }
        if (param_2 == 5) {
                    /* WARNING: Subroutine does not return */
          FUN_82038058((double)(float)(dVar3 - (double)*(float *)(DAT_820c5fbc + 0x18)),dVar3,
                       (double)(*(float *)(DAT_820c5fbc + 0x8c) * DAT_82004a70),
                       (double)(*(float *)(DAT_820c5fbc + 0x90) * DAT_82004a1c));
        }
      }
    }
    else if ((param_2 == 2) &&
            (dVar2 = (double)DAT_82002058, *(float *)((param_1 + 0x531) * 4 + DAT_820c5fbc) < 0.0))
    {
      dVar2 = dVar1;
    }
  }
  return dVar2;
}


/* ==== FUN_820393f0 @ 820393f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820393f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039688 @ 82039688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039688(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039730 @ 82039730 ==== */

void FUN_82039730(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined4 *)(DAT_820c5fbc + 0x2fbc) = param_1;
  *(undefined4 *)(iVar1 + 0x2fc0) = param_2;
  return;
}


/* ==== FUN_82039820 @ 82039820 ==== */

void FUN_82039820(void)

{
  return;
}


/* ==== FUN_82039828 @ 82039828 ==== */

void FUN_82039828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820398e8 @ 820398e8 ==== */

void FUN_820398e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820399a0 @ 820399a0 ==== */

void FUN_820399a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82039a60 @ 82039a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039a60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039ae0 @ 82039ae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039ae0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039b50 @ 82039b50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039b50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039bc8 @ 82039bc8 ==== */

void FUN_82039bc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82039c88 @ 82039c88 ==== */

void FUN_82039c88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82039d48 @ 82039d48 ==== */

void FUN_82039d48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82039e08 @ 82039e08 ==== */

void FUN_82039e08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82039ec8 @ 82039ec8 ==== */

void FUN_82039ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82039f88 @ 82039f88 ==== */

void FUN_82039f88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203a048 @ 8203a048 ==== */

void FUN_8203a048(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203a108 @ 8203a108 ==== */

void FUN_8203a108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203a1c8 @ 8203a1c8 ==== */

void FUN_8203a1c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203a288 @ 8203a288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203a288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203a358 @ 8203a358 ==== */

void FUN_8203a358(float *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(float *)(param_2 + 0x10) - param_3[1]) + param_4[1];
  if (fVar1 <= DAT_82001c98) {
    fVar1 = DAT_82001c98;
  }
  fVar3 = (*(float *)(param_2 + 0xc) - *param_3) + *param_4;
  fVar2 = DAT_82001c98;
  if (DAT_82001c98 < fVar3) {
    fVar2 = fVar3;
  }
  *param_1 = fVar2;
  param_1[1] = fVar1;
  return;
}


/* ==== FUN_8203a3b8 @ 8203a3b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203a3b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203a430 @ 8203a430 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203a430(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203a4c8 @ 8203a4c8 ==== */

void FUN_8203a4c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203a5c8 @ 8203a5c8 ==== */

void FUN_8203a5c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8203a6f0 @ 8203a6f0 ==== */

void FUN_8203a6f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8203a8b8 @ 8203a8b8 ==== */

int FUN_8203a8b8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_820376e0();
  piVar1 = (int *)((ulonglong)uVar3 >> 0x20);
  if ((piVar1 == (int *)(*param_1 * 8 + param_1[2])) || (*piVar1 != (int)uVar3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = piVar1[1];
  }
  return iVar2;
}


/* ==== FUN_8203a910 @ 8203a910 ==== */

void FUN_8203a910(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_820c5fbc;
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


/* ==== FUN_8203a988 @ 8203a988 ==== */

void FUN_8203a988(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_820c5fbc;
  if (0 < param_1) {
    do {
      iVar3 = *(int *)(iVar1 + 0x1cf0) * 0xc + *(int *)(iVar1 + 0x1cf8);
      iVar4 = *(int *)(iVar3 + -0xc) * 0xc;
      iVar2 = *(int *)(&UNK_820048b8 + iVar4) + iVar1;
      if (*(int *)(&UNK_820048b0 + iVar4) == 8) {
        if (*(int *)(&UNK_820048b4 + iVar4) == 1) {
          *(undefined4 *)(iVar2 + 0x1528) = *(undefined4 *)(iVar3 + -8);
        }
        else if (*(int *)(&UNK_820048b4 + iVar4) == 2) {
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


/* ==== FUN_8203aa18 @ 8203aa18 ==== */

void FUN_8203aa18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8203ac60 @ 8203ac60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ac60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ad20 @ 8203ad20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ad20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ad60 @ 8203ad60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ad60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203add0 @ 8203add0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203add0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ae30 @ 8203ae30 ==== */

undefined4 FUN_8203ae30(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_820c5fbc + 0x1ba8);
  if ((*(char *)(DAT_820c5fbc + 0x1d93) != '\0') && (*(char *)(DAT_820c5fbc + 0x1d92) == '\0')) {
    if (((*(uint *)(DAT_820c5fbc + 0x1c4c) & 4) != 0) && ((param_1 & 0x200) == 0)) {
      return 0;
    }
    if ((*(int *)(DAT_820c5fbc + 0x1d58) != *(int *)(DAT_820c5fbc + 0x1c48)) ||
       (bVar1 = true, *(int *)(DAT_820c5fbc + 0x1d58) == 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    return 0;
  }
  if ((*(uint *)(DAT_820c5fbc + 0x1c50) & 1) == 0) {
    return 0;
  }
  if (((*(int *)(DAT_820c5fbc + 0x1bac) != iVar2) &&
      ((*(uint *)(DAT_820c5fbc + 0x1c50) & 0x80) == 0)) && ((param_1 & 0x100) == 0)) {
    return 0;
  }
  if ((((param_1 & 0x80) == 0) && (iVar3 = *(int *)(DAT_820c5fbc + 0x1be0), iVar3 != 0)) &&
     ((iVar3 != *(int *)(DAT_820c5fbc + 0x1c48) &&
      ((*(char *)(DAT_820c5fbc + 0x1bed) == '\0' && (iVar3 != *(int *)(iVar2 + 0x50))))))) {
    return 0;
  }
  if ((((*(int *)(DAT_820c5fbc + 0x1d54) != 0) &&
       (iVar3 = *(int *)(*(int *)(DAT_820c5fbc + 0x1d54) + 0x2e0), iVar3 != 0)) &&
      (*(char *)(iVar3 + 0x8b) != '\0')) && (iVar3 != *(int *)(iVar2 + 0x2e0))) {
    if ((*(uint *)(iVar3 + 8) & 0x8000000) != 0) {
      bVar1 = false;
      goto LAB_8203af58;
    }
    if (((*(uint *)(iVar3 + 8) & 0x4000000) != 0) && (bVar1 = false, (param_1 & 0x20) == 0))
    goto LAB_8203af58;
  }
  bVar1 = true;
LAB_8203af58:
  if ((!bVar1) || (((*(uint *)(DAT_820c5fbc + 0x1c4c) & 4) != 0 && ((param_1 & 0x200) == 0)))) {
    return 0;
  }
  if ((*(int *)(DAT_820c5fbc + 0x1c48) == *(int *)(iVar2 + 0x50)) &&
     (*(char *)(iVar2 + 0x8c) != '\0')) {
    return 0;
  }
  return 1;
}


/* ==== FUN_8203afa0 @ 8203afa0 ==== */

double FUN_8203afa0(double param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)DAT_82001c98;
  if (param_1 < dVar2) {
    return dVar2;
  }
  iVar1 = *(int *)(DAT_820c5fbc + 0x1ba8);
  if (param_1 == dVar2) {
    param_1 = (double)*(float *)(iVar1 + 0x1d8);
  }
  else if (dVar2 < param_1) {
    param_1 = (double)(float)((double)(*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 0x58)) + param_1
                             );
  }
  dVar2 = (double)(float)(param_1 - (double)*param_2);
  if ((double)(float)(param_1 - (double)*param_2) < (double)DAT_82002058) {
    dVar2 = (double)DAT_82002058;
  }
  return dVar2;
}


/* ==== FUN_8203b010 @ 8203b010 ==== */

void FUN_8203b010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8203b080 @ 8203b080 ==== */

uint FUN_8203b080(void)

{
  return -(uint)(*(char *)(**(int **)(DAT_820c5fbc + 0x1d50) + 0x34) != '\0') &
         **(int **)(DAT_820c5fbc + 0x1d50) + 0x34U;
}


/* ==== FUN_8203b0a8 @ 8203b0a8 ==== */

void FUN_8203b0a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8203b1a8 @ 8203b1a8 ==== */

void FUN_8203b1a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8203b550 @ 8203b550 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8203b550(void)

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
  
  iVar9 = DAT_820c5fbc;
  uVar6 = DAT_82001cc0;
  fVar3 = DAT_82001c98;
  if (*(int *)(DAT_820c5fbc + 0x1bb8) != 0) {
    *(float *)(DAT_820c5fbc + 0x1bc4) =
         *(float *)(DAT_820c5fbc + 0x1bc4) - *(float *)(DAT_820c5fbc + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar2 = *(float *)(DAT_820c5fbc + 0xf4);
  if ((((((fVar2 != DAT_82001c98) || (*(float *)(DAT_820c5fbc + 0xf8) != DAT_82001c98)) &&
        ((*(int *)(DAT_820c5fbc + 0x1be0) == 0 || (*(char *)(DAT_820c5fbc + 0x1bf2) == '\0')))) &&
       ((*(int *)(DAT_820c5fbc + 0x1bd0) == 0 || (*(char *)(DAT_820c5fbc + 0x1bd6) == '\0')))) &&
      ((iVar7 = *(int *)(DAT_820c5fbc + 0x1bb8), iVar7 != 0 ||
       (iVar7 = *(int *)(DAT_820c5fbc + 0x1bac), iVar7 != 0)))) && (*(char *)(iVar7 + 0x8d) == '\0')
     ) {
    if (((fVar2 == DAT_82001c98) || (*(char *)(DAT_820c5fbc + 0xfc) == '\0')) ||
       (*(char *)(DAT_820c5fbc + 0xa0) == '\0')) {
      if (*(char *)(DAT_820c5fbc + 0xfc) == '\0') {
        if ((*(char *)(DAT_820c5fbc + 0xfd) == '\0') ||
           (bVar5 = true, *(char *)(DAT_820c5fbc + 0xb1) != '\0')) {
          bVar5 = false;
        }
        fVar4 = DAT_82001c98;
        if (!bVar5) {
          fVar2 = *(float *)(DAT_820c5fbc + 0xf8);
          fVar4 = fVar2;
        }
        if (fVar4 != DAT_82001c98) {
          if (*(int *)(DAT_820c5fbc + 0x1bb8) != iVar7) {
            uVar8 = *(undefined4 *)(DAT_820c5fbc + 0xe4);
            *(undefined4 *)(DAT_820c5fbc + 0x1bc4) = DAT_82001cc0;
            *(int *)(iVar9 + 0x1bb8) = iVar7;
            *(undefined4 *)(iVar9 + 0x1bbc) = uVar8;
            *(undefined4 *)(iVar9 + 0x1bc0) = *(undefined4 *)(iVar9 + 0xe8);
            iVar9 = DAT_820c5fbc;
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
      if (*(int *)(DAT_820c5fbc + 0x1bb8) != iVar7) {
        puVar1 = (undefined4 *)(DAT_820c5fbc + 0xe4);
        uVar8 = *(undefined4 *)(DAT_820c5fbc + 0xe8);
        *(int *)(DAT_820c5fbc + 0x1bb8) = iVar7;
        uVar6 = DAT_82001cc0;
        *(undefined4 *)(iVar9 + 0x1bbc) = *puVar1;
        *(undefined4 *)(iVar9 + 0x1bc4) = uVar6;
        *(undefined4 *)(iVar9 + 0x1bc0) = uVar8;
      }
      fVar3 = *(float *)(iVar7 + 0x23c);
      fVar2 = *(float *)(iVar9 + 0xf4) * _UNK_82001c3c + fVar3;
      fVar4 = DAT_82001c60;
      if ((DAT_82001c60 <= fVar2) && (fVar4 = _UNK_82004b6c, fVar2 <= _UNK_82004b6c)) {
        fVar4 = fVar2;
      }
      *(float *)(iVar7 + 0x23c) = fVar4;
      if (iVar7 == *(int *)(iVar7 + 0x2e0)) {
        fVar3 = DAT_82002058 - fVar4 / fVar3;
        _fStack_10 = CONCAT44((fVar3 * *(float *)(iVar7 + 0x14) *
                              (*(float *)(iVar9 + 0xe4) - *(float *)(iVar7 + 0xc))) /
                              *(float *)(iVar7 + 0x14) + *(float *)(iVar7 + 0xc),
                              (fVar3 * *(float *)(iVar7 + 0x18) *
                              (*(float *)(iVar9 + 0xe8) - *(float *)(iVar7 + 0x10))) /
                              *(float *)(iVar7 + 0x18) + *(float *)(iVar7 + 0x10));
        FUN_820387c0(iVar7,&fStack_10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}


/* ==== FUN_8203ba90 @ 8203ba90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ba90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203bb40 @ 8203bb40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203bb40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203bbe0 @ 8203bbe0 ==== */

void FUN_8203bbe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203be48 @ 8203be48 ==== */

void FUN_8203be48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8203c090 @ 8203c090 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c090(int param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = DAT_82001c98;
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
  if (*(float *)(param_1 + 0x34) == DAT_82001c98) {
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


/* ==== FUN_8203c218 @ 8203c218 ==== */

void FUN_8203c218(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8203c318 @ 8203c318 ==== */

void FUN_8203c318(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8203c638 @ 8203c638 ==== */

int FUN_8203c638(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((0 < *(int *)(DAT_820c5fbc + 0x1d2c)) &&
     (iVar3 = *(int *)(DAT_820c5fbc + 0x1d2c) + -1, -1 < iVar3)) {
    piVar2 = (int *)(*(int *)(DAT_820c5fbc + 0x1d34) + iVar3 * 0x24 + 4);
    do {
      iVar4 = *piVar2;
      if (((iVar4 != 0) && (*(char *)(iVar4 + 0x8b) != '\0')) &&
         ((*(uint *)(iVar4 + 8) & 0x8000000) != 0)) {
        iVar5 = param_1;
        if (*(int *)(param_1 + 0x2e0) == iVar4) {
LAB_8203c698:
          bVar1 = true;
        }
        else {
          do {
            if (iVar5 == iVar4) goto LAB_8203c698;
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
LAB_8203c6d0:
            bVar1 = true;
          }
          else {
            do {
              if (iVar6 == iVar5) goto LAB_8203c6d0;
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


/* ==== FUN_8203c720 @ 8203c720 ==== */

void FUN_8203c720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = DAT_820c5fbc;
  if (*(int *)(*(int *)(DAT_820c5fbc + 0x1b6c) * 4 + *(int *)(DAT_820c5fbc + 0x1b74) + -4) ==
      param_1) {
    return;
  }
  iVar3 = (int)*(short *)(param_1 + 0x9c);
  iVar2 = *(int *)(DAT_820c5fbc + 0x1b6c) + -1;
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


/* ==== FUN_8203c7a8 @ 8203c7a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c7a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c870 @ 8203c870 ==== */

int FUN_8203c870(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_820c5fbc + 0x1b68);
  piVar1 = piVar2 + *(int *)(DAT_820c5fbc + 0x1b60);
  for (; (piVar2 < piVar1 && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
  }
  return (int)piVar2 - *(int *)(DAT_820c5fbc + 0x1b68) >> 2;
}


/* ==== FUN_8203c8b8 @ 8203c8b8 ==== */

void FUN_8203c8b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_820c5fbc + 0x1b6c) + -1;
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
      iVar3 = *(int *)(iVar1 + *(int *)(DAT_820c5fbc + 0x1b74));
      if (((iVar3 != param_2) && (*(char *)(iVar3 + 0x8b) != '\0')) &&
         ((*(uint *)(iVar3 + 8) & 0x40200) != 0x40200)) break;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -4;
    } while (-1 < iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8203c980 @ 8203c980 ==== */

void FUN_8203c980(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_820c5fbc;
  fVar2 = DAT_82002058;
  *(int *)(DAT_820c5fbc + 0x1940) = param_1;
  fVar1 = *(float *)(iVar3 + 0x9c) * *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x10);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  iVar4 = *(int *)(iVar3 + 0x1ba8);
  *(float *)(iVar3 + 0x1948) = fVar1;
  fVar1 = DAT_82001c98;
  if (iVar4 != 0) {
    fVar1 = *(float *)(DAT_820c5fbc + 0x1948) * *(float *)(iVar4 + 0x23c);
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


/* ==== FUN_8203ca20 @ 8203ca20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ca20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203cab0 @ 8203cab0 ==== */

void FUN_8203cab0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_820c5fbc;
  uVar2 = *(uint *)(DAT_820c5fbc + 0x1c30);
  *(short *)(DAT_820c5fbc + 0x2f2c) = *(short *)(DAT_820c5fbc + 0x2f2c) + -1;
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


/* ==== FUN_8203cb08 @ 8203cb08 ==== */

void FUN_8203cb08(void)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1ba8);
  *(undefined4 *)(iVar1 + 0x184) =
       *(undefined4 *)(*(int *)(iVar1 + 0x194) * 4 + *(int *)(iVar1 + 0x19c) + -4);
  *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + -1;
  return;
}


/* ==== FUN_8203cb48 @ 8203cb48 ==== */

uint FUN_8203cb48(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (*(uint *)(param_1 + 8) >> 0x19 & 1) - (*(uint *)(param_2 + 8) >> 0x19 & 1);
  if (uVar2 != 0) {
    return (-uVar2 & ~uVar2) >> 0x1f;
  }
  iVar1 = *(int *)(DAT_820c5fbc + 0x1b60) + -1;
  if (-1 < iVar1) {
    iVar4 = iVar1 * 4;
    do {
      iVar3 = *(int *)(iVar4 + *(int *)(DAT_820c5fbc + 0x1b68));
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


/* ==== FUN_8203cbc0 @ 8203cbc0 ==== */

void FUN_8203cbc0(void)

{
  *(int *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0xc4) =
       *(int *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0xc4) + -1;
  return;
}


/* ==== FUN_8203cbe0 @ 8203cbe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203cbe0(float *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_820c5fbc + 0x1ba8);
  if (*(char *)(iVar1 + 0x8f) != '\0') {
    return;
  }
  *(float *)(iVar1 + 0xd8) = *(float *)(iVar1 + 0xd0) + *param_1;
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(iVar1 + 0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203cd40 @ 8203cd40 ==== */

void FUN_8203cd40(float *param_1)

{
  float local_10;
  float local_c;
  
  local_10 = param_1[2] - *param_1;
  local_c = param_1[3] - param_1[1];
  FUN_8203cbe0(&local_10);
  return;
}


/* ==== FUN_8203cd88 @ 8203cd88 ==== */

void FUN_8203cd88(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1ba8);
  fVar1 = (float)((double)(*(float *)(iVar2 + 0xc) - *(float *)(iVar2 + 0x58)) + param_1);
  *(float *)(iVar2 + 0xd0) = fVar1;
  if (fVar1 <= *(float *)(iVar2 + 0xe8)) {
    fVar1 = *(float *)(iVar2 + 0xe8);
  }
  *(float *)(iVar2 + 0xe8) = fVar1;
  return;
}


/* ==== FUN_8203cdd0 @ 8203cdd0 ==== */

void FUN_8203cdd0(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1ba8);
  fVar1 = (float)((double)(*(float *)(iVar2 + 0x10) - *(float *)(iVar2 + 0x5c)) + param_1);
  *(float *)(iVar2 + 0xd4) = fVar1;
  if (fVar1 <= *(float *)(iVar2 + 0xec)) {
    fVar1 = *(float *)(iVar2 + 0xec);
  }
  *(float *)(iVar2 + 0xec) = fVar1;
  return;
}


/* ==== FUN_8203ce18 @ 8203ce18 ==== */

void FUN_8203ce18(void)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1ba8);
  *(undefined4 *)(iVar1 + 0x180) =
       *(undefined4 *)(*(int *)(iVar1 + 0x188) * 4 + *(int *)(iVar1 + 400) + -4);
  *(int *)(iVar1 + 0x188) = *(int *)(iVar1 + 0x188) + -1;
  return;
}


/* ==== FUN_8203ce58 @ 8203ce58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ce58(void)

{
  float fVar1;
  
  if ((*(uint *)(DAT_820c5fbc + 0x1c34) & 1) == 0) {
    fVar1 = *(float *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x180);
  }
  else {
    fVar1 = *(float *)(DAT_820c5fbc + 0x1c38);
  }
  if (fVar1 < DAT_82001c98) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203cf00 @ 8203cf00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203cf00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203cff8 @ 8203cff8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203cff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d1e0 @ 8203d1e0 ==== */

void FUN_8203d1e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203d5d0 @ 8203d5d0 ==== */

uint FUN_8203d5d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0x80) == 0) {
    if ((param_2 & 0x100) == 0) {
      if ((*(int *)(DAT_820c5fbc + 0x1d2c) <= *(int *)(DAT_820c5fbc + 0x1d38)) ||
         (uVar3 = 1,
         *(int *)(*(int *)(DAT_820c5fbc + 0x1d34) + *(int *)(DAT_820c5fbc + 0x1d38) * 0x24) !=
         param_1)) {
        uVar3 = 0;
      }
      return uVar3;
    }
    iVar1 = 0;
    if (0 < *(int *)(DAT_820c5fbc + 0x1d2c)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + *(int *)(DAT_820c5fbc + 0x1d34)) == param_1) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < *(int *)(DAT_820c5fbc + 0x1d2c));
    }
    return 0;
  }
  if ((param_2 & 0x100) != 0) {
    return (-*(uint *)(DAT_820c5fbc + 0x1d2c) & ~*(uint *)(DAT_820c5fbc + 0x1d2c)) >> 0x1f;
  }
  return (uint)(*(uint *)(DAT_820c5fbc + 0x1d2c) <= *(uint *)(DAT_820c5fbc + 0x1d38)) -
         ((int)~(*(uint *)(DAT_820c5fbc + 0x1d2c) ^ *(uint *)(DAT_820c5fbc + 0x1d38)) >> 0x1f) & 1;
}


/* ==== FUN_8203d6a0 @ 8203d6a0 ==== */

void FUN_8203d6a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8203dad8 @ 8203dad8 ==== */

void FUN_8203dad8(int param_1,float *param_2,float *param_3)

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


/* ==== FUN_8203dba0 @ 8203dba0 ==== */

void FUN_8203dba0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8203df30 @ 8203df30 ==== */

void FUN_8203df30(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = DAT_820c5fbc;
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x10;
  }
  *(undefined4 *)(DAT_820c5fbc + 0x1dbc) = param_1;
  *(undefined4 *)(iVar2 + 0x1dc0) = param_1;
  *(undefined1 *)(iVar2 + 0x1dad) = 1;
  uVar3 = 0;
  *(undefined1 *)(iVar2 + 0x1dac) = 1;
  *(undefined4 *)(iVar2 + 0x1dc4) = param_2;
  *(uint *)(iVar2 + 0x1db0) = param_3;
  uVar1 = DAT_82004a18;
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
  if ((*(char *)(DAT_820c5fbc + 0x1dad) != '\0') || (*(char *)(DAT_820c5fbc + 0x1d95) != '\0')) {
    uVar3 = 1;
  }
  *(undefined1 *)(DAT_820c5fbc + 0x1d94) = uVar3;
  return;
}


/* ==== FUN_8203e000 @ 8203e000 ==== */

void FUN_8203e000(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = -0x7df40000;
  *(undefined1 *)(DAT_820c5fbc + 0x1dad) = 0;
  FUN_820390a0();
  iVar1 = *(int *)(iVar1 + 0x5fbc);
  if ((*(char *)(iVar1 + 0x1dad) != '\0') || (uVar2 = 0, *(char *)(iVar1 + 0x1d95) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(iVar1 + 0x1d94) = uVar2;
  return;
}


/* ==== FUN_8203e058 @ 8203e058 ==== */

void FUN_8203e058(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_820c5fbc;
  uVar2 = 0;
  *(undefined1 *)(DAT_820c5fbc + 0x1dad) = 0;
  *(undefined1 *)(iVar1 + 0x1dac) = 0;
  if ((*(char *)(DAT_820c5fbc + 0x1dad) != '\0') || (*(char *)(DAT_820c5fbc + 0x1d95) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(DAT_820c5fbc + 0x1d94) = uVar2;
  *(undefined4 *)(iVar1 + 0x1dbc) = param_1;
  *(undefined4 *)(iVar1 + 0x1dc4) = param_2;
  *(undefined1 *)(iVar1 + 0x1dae) = 1;
  *(uint *)(iVar1 + 0x1db0) = param_3 | 0x80;
  *(undefined4 *)(iVar1 + 0x1db4) = param_4;
  return;
}


/* ==== FUN_8203e0b0 @ 8203e0b0 ==== */

void FUN_8203e0b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_820c5fbc;
  if (param_1 == 0) {
    iVar3 = *(int *)(*(int *)(DAT_820c5fbc + 0x1d54) + 0x2f0);
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0x8b) == '\0')) {
      iVar3 = *(int *)(DAT_820c5fbc + 0x1d54);
    }
    *(int *)(DAT_820c5fbc + 0x1d54) = iVar3;
  }
  iVar1 = DAT_820c5fbc;
  iVar2 = *(int *)(iVar5 + 0x1d54);
  iVar3 = (param_1 + 0xbd) * 4;
  iVar4 = *(int *)(iVar3 + iVar2);
  if (iVar4 != 0) {
    *(int *)(DAT_820c5fbc + 0x1d58) = iVar4;
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
  FUN_82039138();
  return;
}


/* ==== FUN_8203e170 @ 8203e170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203e170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203e2c0 @ 8203e2c0 ==== */

void FUN_8203e2c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8203e5a8 @ 8203e5a8 ==== */

void FUN_8203e5a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8203e950 @ 8203e950 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203e950(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203eb60 @ 8203eb60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203eb60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ebf8 @ 8203ebf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ebf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ec98 @ 8203ec98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ec98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ed40 @ 8203ed40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ed40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ee00 @ 8203ee00 ==== */

undefined4 FUN_8203ee00(void)

{
  return **(undefined4 **)(DAT_820c5fbc + 0x1d50);
}


/* ==== FUN_8203ee38 @ 8203ee38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ee38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203eeb0 @ 8203eeb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203eeb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ef50 @ 8203ef50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ef50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203efc8 @ 8203efc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203efc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f060 @ 8203f060 ==== */

void FUN_8203f060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8203f128 @ 8203f128 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f1d0 @ 8203f1d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f1d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f248 @ 8203f248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f2c0 @ 8203f2c0 ==== */

void FUN_8203f2c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203f358 @ 8203f358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f3d0 @ 8203f3d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f3d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f478 @ 8203f478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f478(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f530 @ 8203f530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f5e0 @ 8203f5e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f5e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f680 @ 8203f680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f6f8 @ 8203f6f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f6f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f770 @ 8203f770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f770(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f818 @ 8203f818 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f818(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f8c0 @ 8203f8c0 ==== */

void FUN_8203f8c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8203f988 @ 8203f988 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f988(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f9d8 @ 8203f9d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f9d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203fac0 @ 8203fac0 ==== */

void FUN_8203fac0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_820376e0();
  piVar1 = (int *)((ulonglong)uVar2 >> 0x20);
  if ((piVar1 == (int *)(*param_1 * 8 + param_1[2])) || (*piVar1 != (int)uVar2)) {
    FUN_8203f060();
  }
  else {
    piVar1[1] = param_3;
  }
  return;
}


/* ==== FUN_8203fb30 @ 8203fb30 ==== */

void FUN_8203fb30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8203fbf0 @ 8203fbf0 ==== */

void FUN_8203fbf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8203fc90 @ 8203fc90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203fc90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203fd38 @ 8203fd38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203fd38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203fdd0 @ 8203fdd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203fdd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203fe58 @ 8203fe58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203fe58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ff00 @ 8203ff00 ==== */

void FUN_8203ff00(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_820c5fbc;
  *(int *)(DAT_820c5fbc + 0x1ba8) = param_1;
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
  fVar1 = *(float *)(DAT_820c5fbc + 0x1948) * *(float *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
  }
  *(float *)(iVar2 + 0x1958) = fVar1;
  *(float *)(iVar2 + 0x1944) = fVar1;
  return;
}


/* ==== FUN_8203ff78 @ 8203ff78 ==== */

void FUN_8203ff78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82040180 @ 82040180 ==== */

void FUN_82040180(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820404b0 @ 820404b0 ==== */

void FUN_820404b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82040540 @ 82040540 ==== */

void FUN_82040540(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82040608 @ 82040608 ==== */

void FUN_82040608(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82040668 @ 82040668 ==== */

int FUN_82040668(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_1;
  iVar4 = DAT_820c5fbc;
  iVar2 = FUN_8203c870(param_1,param_2,param_1);
  if (-1 < iVar2) {
    iVar5 = iVar2 << 2;
    do {
      iVar6 = *(int *)(iVar5 + *(int *)(iVar4 + 0x1b68));
      if ((*(uint *)(iVar6 + 8) & 0x1000000) == 0) {
        iVar7 = iVar6;
        if (*(int *)(iVar6 + 0x2e0) == iVar3) {
LAB_820406b8:
          bVar1 = true;
        }
        else {
          do {
            if (iVar7 == iVar3) goto LAB_820406b8;
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


/* ==== FUN_82040740 @ 82040740 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040740(void)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined4 *)(DAT_820c5fbc + 0x1bf4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1bf8) = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820407a0 @ 820407a0 ==== */

void FUN_820407a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82040890 @ 82040890 ==== */

void FUN_82040890(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82040ac8 @ 82040ac8 ==== */

void FUN_82040ac8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_820410d8 @ 820410d8 ==== */

void FUN_820410d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82041170 @ 82041170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820411f8 @ 820411f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820411f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041280 @ 82041280 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041280(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820412d8 @ 820412d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820412d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041410 @ 82041410 ==== */

void FUN_82041410(void)

{
  FUN_8203d1e0();
  return;
}


/* ==== FUN_82041440 @ 82041440 ==== */

void FUN_82041440(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820414f0 @ 820414f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820414f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820415d0 @ 820415d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820415d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = **(int **)(DAT_820c5fbc + 0x1d50);
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


/* ==== FUN_82041690 @ 82041690 ==== */

void FUN_82041690(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_820c5fbc + 0x1df4;
  iVar3 = *(int *)(DAT_820c5fbc + 0x1dec);
  if (iVar3 == 1) {
    iVar3 = DAT_820c5fbc;
    if (*(int *)(DAT_820c5fbc + 0x1e7c) == 0) {
      FUN_820390a0(DAT_820c5fbc + 0x1e78);
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
      if (*(int *)(DAT_820c5fbc + 0x1d58) != param_1) {
        FUN_820390a0(iVar1);
        return;
      }
      if (*(int *)(DAT_820c5fbc + 0x1df8) == 0) {
        return;
      }
      *(undefined1 *)(DAT_820c5fbc + 0x1dad) = 0;
      if ((*(char *)(DAT_820c5fbc + 0x1dad) != '\0') ||
         (uVar2 = 0, *(char *)(DAT_820c5fbc + 0x1d95) != '\0')) {
        uVar2 = 1;
      }
      *(undefined1 *)(DAT_820c5fbc + 0x1d94) = uVar2;
      return;
    }
    if (iVar3 != 0) {
      return;
    }
    if (*(int *)(DAT_820c5fbc + 0x1e7c) != 0) {
      return;
    }
    iVar1 = DAT_820c5fbc + 0x1e78;
  }
  FUN_8203e000(iVar1);
  return;
}


/* ==== FUN_82041788 @ 82041788 ==== */

void FUN_82041788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82041998 @ 82041998 ==== */

void FUN_82041998(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82041f30 @ 82041f30 ==== */

void FUN_82041f30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82042000 @ 82042000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042000(undefined4 param_1,undefined4 param_2,byte *param_3)

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
  
  uVar12 = FUN_820844bc();
  fVar2 = DAT_82002058;
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  pbVar11 = (byte *)uVar12;
  do {
    iVar3 = DAT_820c5fbc;
    pcVar10 = *(char **)(DAT_820c5fbc + 0x2fbc);
    pbVar8 = *(byte **)(DAT_820c5fbc + 0x2fc0);
    iVar9 = *(int *)(DAT_820c5fbc + 0x1ba8);
    *(undefined4 *)(DAT_820c5fbc + 0x2fc0) = 0;
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
      FUN_82041f30();
      *(undefined1 *)(iVar3 + 0x2fc8) = 1;
    }
    pcVar4 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      do {
        pcVar7 = pcVar4;
        pcVar4 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      FUN_82042000(iVar5,pcVar10,pcVar7);
    }
    iVar9 = *(int *)(iVar9 + 0x158);
    if (iVar9 < *(int *)(iVar3 + 0x2fcc)) {
      *(int *)(iVar3 + 0x2fcc) = iVar9;
    }
    while( true ) {
      pbVar6 = FUN_82084270(pbVar11,10,(int)param_3 - (int)pbVar11);
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = param_3;
      }
      if ((pbVar11 != pbVar6) || (param_3 != pbVar6)) {
        FUN_82041f30();
        *(undefined1 *)(iVar3 + 0x2fc8) = 0;
        if (*pbVar6 == 10) {
          FUN_82041f30();
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


/* ==== FUN_82042220 @ 82042220 ==== */

void FUN_82042220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820422f0 @ 820422f0 ==== */

void FUN_820422f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820423c8 @ 820423c8 ==== */

int * FUN_820423c8(int param_1)

{
  int *piVar1;
  
  if (*(int *)(DAT_820c5fbc + 0x2f84) != 0) {
    piVar1 = (int *)(*(int *)(DAT_820c5fbc + 0x2f84) + 4);
    do {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = (int *)(piVar1[-1] + (int)piVar1);
    } while (piVar1 != (int *)(*(int *)(DAT_820c5fbc + 0x2f84) + *(int *)(DAT_820c5fbc + 0x2f7c) + 4
                              ));
  }
  return (int *)0x0;
}


/* ==== FUN_82042430 @ 82042430 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042430(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042478 @ 82042478 ==== */

void FUN_82042478(void)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_820844c8();
  pcVar2 = (char *)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  FUN_8203ef50();
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_820426f0 @ 820426f0 ==== */

void FUN_820426f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82042838 @ 82042838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042958 @ 82042958 ==== */

void FUN_82042958(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82042a68 @ 82042a68 ==== */

void FUN_82042a68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82042bf8 @ 82042bf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042bf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042e50 @ 82042e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042e50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042ea0 @ 82042ea0 ==== */

void FUN_82042ea0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82042fe0 @ 82042fe0 ==== */

void FUN_82042fe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820430d0 @ 820430d0 ==== */

void FUN_820430d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82043188 @ 82043188 ==== */

void FUN_82043188(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82043230 @ 82043230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043230(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043308 @ 82043308 ==== */

void FUN_82043308(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82043380 @ 82043380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043428 @ 82043428 ==== */

void FUN_82043428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82043558 @ 82043558 ==== */

void FUN_82043558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820437e8 @ 820437e8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82043960) */
/* WARNING: Removing unreachable block (ram,0x82043984) */

void FUN_820437e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char cVar9;
  float *pfVar8;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
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
  
  FUN_820844c8();
  uVar13 = FUN_82084c5c();
  iVar6 = DAT_820c5fbc;
  fVar3 = DAT_82001c98;
  iVar7 = (int)((ulonglong)uVar13 >> 0x20);
  pfVar10 = (float *)uVar13;
  uVar11 = *(uint *)(iVar7 + 8);
  if (((uVar11 & 0x20) != 0) || (bVar5 = true, *(int *)(DAT_820c5fbc + 0x1550) == -1)) {
    bVar5 = false;
  }
  uVar12 = *(uint *)(DAT_820c5fbc + 0x1c30);
  *(uint *)(DAT_820c5fbc + 0x1c30) = uVar12 | 0x10;
  *(undefined4 *)(iVar7 + 0x124) = 1;
  fVar1 = *(float *)(iVar6 + 0x1564);
  fVar2 = *(float *)(iVar6 + 0x1944);
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
    FUN_82043188();
    cVar9 = FUN_8204cfc0();
    if (cVar9 != '\0') {
      *(undefined1 *)(iVar7 + 0x8e) = 1;
    }
  }
  *(undefined4 *)(iVar7 + 0x124) = 0;
  uVar11 = uVar11 & 0x100000;
  *(uint *)(iVar6 + 0x1c30) = uVar12;
  fVar4 = fVar3;
  if (uVar11 != 0) {
    fVar4 = fVar2 * DAT_82004a74;
  }
  pfVar8 = (float *)FUN_82037e98();
  fStack_d8 = *pfVar8 + fVar4;
  fStack_d4 = pfVar8[1];
  fStack_d0 = fVar1;
  if (*(float *)(iVar6 + 0x1564) < fVar1) {
    fStack_d0 = *(float *)(iVar6 + 0x157c) + fVar1;
    fVar1 = *(float *)(iVar6 + 0x157c) + fVar1;
  }
  pfVar8 = (float *)(iVar6 + 0x1548);
  fVar2 = *pfVar8;
  if ((fVar3 < fVar2) && (fVar2 < DAT_82002058)) {
    fVar2 = -(ABS(fVar2 - DAT_82001c60) * DAT_82001cc0 - DAT_82002058);
    if ((fVar3 <= fVar2) && (fVar3 = fVar2, DAT_82002058 < fVar2)) {
      fVar3 = DAT_82002058;
    }
    fVar2 = fVar1;
    if (fVar1 <= fStack_d0) {
      fVar2 = fStack_d0;
    }
    fVar4 = (((pfVar10[2] - *pfVar10) - fStack_d0) - fVar1) - fStack_d8;
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
  fStack_d0 = *pfVar10 + fStack_d0;
  fStack_c8 = pfVar10[2];
  fStack_cc = pfVar10[1];
  fStack_b8 = fStack_c8 - fVar1;
  fStack_c4 = pfVar10[3];
  fVar3 = *(float *)(iVar6 + 0x157c) + fStack_b8;
  if (fVar3 < fStack_c8) {
    fStack_c8 = fVar3;
  }
  fStack_c0 = fStack_d0;
  fStack_bc = fStack_cc;
  fStack_b4 = fStack_c4;
  if (uVar11 != 0) {
    fVar1 = ((fStack_b8 - fStack_d0) - fStack_d8) * *pfVar8 + fStack_d0 + fStack_d8;
    fVar3 = fStack_d0;
    if ((fStack_d0 <= fVar1) && (fVar3 = fVar1, fStack_b8 < fVar1)) {
      fVar3 = fStack_b8;
    }
    if (fStack_d0 < fVar3) {
      fStack_b0 = *(float *)(DAT_820c5fbc + 0x15f0);
      uStack_ac = *(undefined4 *)(DAT_820c5fbc + 0x15f4);
      uStack_a8 = *(undefined4 *)(DAT_820c5fbc + 0x15f8);
      fStack_a4 = *(float *)(DAT_820c5fbc + 0x1528) * *(float *)(DAT_820c5fbc + 0x15fc);
      FUN_820375e0(&fStack_b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  FUN_820430d0(&fStack_c0,&fStack_b8,param_3,0,&fStack_d8,pfVar8,&fStack_d0);
  func_0x82084cac();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043c08 @ 82043c08 ==== */

void FUN_82043c08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82043cf0 @ 82043cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043cf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043d40 @ 82043d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043d90 @ 82043d90 ==== */

void FUN_82043d90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82043da8 @ 82043da8 ==== */

void FUN_82043da8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82043ee8 @ 82043ee8 ==== */

void FUN_82043ee8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82043fe8 @ 82043fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043fe8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044078 @ 82044078 ==== */

void FUN_82044078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82044320 @ 82044320 ==== */

void FUN_82044320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82044620 @ 82044620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820446b0 @ 820446b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820446b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044938 @ 82044938 ==== */

void FUN_82044938(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82044c00 @ 82044c00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044c00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044d20 @ 82044d20 ==== */

void FUN_82044d20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82044f18 @ 82044f18 ==== */

void FUN_82044f18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82045828 @ 82045828 ==== */

void FUN_82045828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82045960 @ 82045960 ==== */

void FUN_82045960(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82045ab0 @ 82045ab0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82045ab0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045d58 @ 82045d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82045d58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045da0 @ 82045da0 ==== */

void FUN_82045da0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82045f88 @ 82045f88 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82046490) */
/* WARNING: Removing unreachable block (ram,0x820464a0) */
/* WARNING: Removing unreachable block (ram,0x820464a4) */

void FUN_82045f88(void)

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
  
  FUN_820844d4();
  iVar5 = DAT_820c5fbc;
  iVar11 = 0;
  bVar3 = false;
  puVar12 = (uint *)(DAT_820c5fbc + 8);
  iVar8 = DAT_820c5fbc;
  iVar6 = FUN_82038e98();
  bVar13 = iVar6 != 0;
  if (bVar13) {
    *(undefined4 *)(iVar8 + 0x1ea4) = 0;
    iVar8 = DAT_820c5fbc;
  }
  fVar1 = DAT_82001c98;
  dVar19 = (double)DAT_82001c98;
  if ((*(int *)(iVar5 + 0x1ea8) != 0) && (*(int *)(iVar5 + 0x1ea4) == 0)) {
    dVar14 = -(double)(*(float *)(iVar5 + 0x18) * DAT_82002bc8 - *(float *)(iVar5 + 0x1eb4));
    if (dVar14 < 0.0) {
      dVar14 = dVar19;
    }
    *(float *)(iVar5 + 0x1eb4) = (float)dVar14;
    iVar8 = DAT_820c5fbc;
    if (((double)*(float *)(iVar5 + 0x1ebc) <= dVar19) && (dVar14 <= dVar19)) {
      *(undefined4 *)(iVar5 + 0x1ea8) = 0;
      iVar8 = DAT_820c5fbc;
    }
  }
  if ((bVar13) || (*(int *)(iVar5 + 0x1ea4) != 0)) {
LAB_82046068:
    uVar9 = 0;
  }
  else {
    if (((double)*(float *)(iVar8 + 0x1480) < dVar19) ||
       (bVar2 = true, (double)*(float *)(iVar8 + 0x1480) != dVar19)) {
      bVar2 = false;
    }
    uVar9 = 1;
    if (!bVar2) goto LAB_82046068;
  }
  if (((!bVar13) && (*(int *)(iVar5 + 0x1ea4) == 0)) && (*(char *)(iVar5 + 0xfc) != '\0')) {
    if (*(int *)(iVar8 + 0x34) < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_820380f0(*(int *)(iVar8 + 0x34),'\x01');
    }
    bVar13 = true;
    if ((uVar7 & 0xff) != 0) goto LAB_820460b8;
  }
  bVar13 = false;
LAB_820460b8:
  if ((((uVar9 & 0xff) != 0) || (bVar13)) &&
     ((iVar8 = *(int *)(iVar5 + 0x1d54), iVar8 != 0 || (iVar8 = FUN_8203eb60(), iVar8 != 0)))) {
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
  dVar14 = (double)DAT_82002058;
  dVar17 = (double)DAT_82002bc4;
  dVar18 = (double)DAT_82004448;
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
    dVar16 = FUN_82039288(0xc,4);
    uVar9 = (uint)(dVar19 < dVar16);
    dVar16 = FUN_82039288(0xd,4);
    if ((uVar9 & 0xff) != (uint)(dVar19 < dVar16)) {
      FUN_8203ebf8();
      *(float *)(iVar5 + 0x1eb4) = (float)dVar14;
    }
    if ((double)*(float *)(DAT_820c5fbc + 0x30c) <= dVar19) {
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
    if (*(int *)(DAT_820c5fbc + 0x34) < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_820380f0(*(int *)(DAT_820c5fbc + 0x34),'\x01');
    }
    if ((uVar9 & 0xff) != 0) {
      FUN_8203ebf8();
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
      uVar9 = FUN_82038268();
      uVar9 = uVar9 & 0xff;
      uVar7 = FUN_82038268();
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
      FUN_820393f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(iVar5 + 0x1d88) == 3) {
      FUN_820393f0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (iVar11 != 0) {
    if ((*(int *)(iVar5 + 0x1d54) == 0) || (iVar11 != *(int *)(*(int *)(iVar5 + 0x1d54) + 0x2e0))) {
      FUN_82037b80(0,0);
      iVar8 = DAT_820c5fbc;
      *(undefined1 *)(DAT_820c5fbc + 0x1d92) = 0;
      *(undefined1 *)(iVar8 + 0x1d91) = 1;
      *(undefined1 *)(iVar8 + 0x1d93) = 1;
      iVar8 = *(int *)(iVar11 + 0x2f0);
      if ((iVar8 != 0) && (*(char *)(iVar8 + 0x8b) != '\0')) {
        iVar11 = iVar8;
      }
      FUN_82043ee8();
      FUN_82045828();
      if (*(int *)(iVar11 + 0x2f4) == 0) {
        FUN_82039138();
      }
      if (*(short *)(iVar11 + 0x12a) == 2) {
        *(undefined4 *)(iVar5 + 0x1d8c) = 1;
      }
    }
    *(undefined4 *)(iVar5 + 0x1ea4) = 0;
  }
  if ((bVar3) && (*(int *)(iVar5 + 0x1d54) != 0)) {
    FUN_82037b80(0,0);
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
      FUN_82045828();
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
      FUN_8203e0b0(uVar9);
      iVar5 = DAT_820c5fbc;
      *(undefined1 *)(DAT_820c5fbc + 0x1d92) = 0;
      *(undefined1 *)(iVar5 + 0x1d91) = 1;
      *(undefined1 *)(iVar5 + 0x1d93) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820466a8 @ 820466a8 ==== */

void FUN_820466a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82046e60 @ 82046e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82046e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046f00 @ 82046f00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82046f00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046fb0 @ 82046fb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82046fb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82047130 @ 82047130 ==== */

void FUN_82047130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82047300 @ 82047300 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82047300(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82047300 @ 820474e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82047300(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820474e8 @ 820474e8 ==== */

void FUN_820474e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82049178 @ 82049178 ==== */

void FUN_82049178(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820492e0 @ 820492e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820492e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82049330 @ 82049330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82049330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82049380 @ 82049380 ==== */

void FUN_82049380(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82049498 @ 82049498 ==== */

void FUN_82049498(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  
  FUN_820844d0();
  FUN_82084c68();
  iVar3 = DAT_820c5fbc;
  uVar4 = *(uint *)(DAT_820c5fbc + 8);
  *(undefined1 *)(DAT_820c5fbc + 0x353) = 0;
  if ((uVar4 & 2) != 0) {
    bVar1 = true;
    if ((*(uint *)(iVar3 + 0xc) & 1) != 0) goto LAB_820494ec;
  }
  bVar1 = false;
LAB_820494ec:
  if (((bVar1) && (*(int *)(iVar3 + 0x1d88) != 3)) &&
     ((((DAT_82001c98 < *(float *)(iVar3 + 0x300) ||
        (((DAT_82001c98 < *(float *)(iVar3 + 0x308) || (DAT_82001c98 < *(float *)(iVar3 + 0x304)))
         || (DAT_82001c98 < *(float *)(iVar3 + 0x30c))))) ||
       (((DAT_82001c98 < *(float *)(iVar3 + 0x310) || (DAT_82001c98 < *(float *)(iVar3 + 0x314))) ||
        (DAT_82001c98 < *(float *)(iVar3 + 0x318))))) || (DAT_82001c98 < *(float *)(iVar3 + 0x31c)))
     )) {
    *(undefined4 *)(iVar3 + 0x1d88) = 3;
  }
  uVar2 = DAT_82002058;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(iVar3 + 100) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(DAT_820c5fbc + *(int *)(iVar3 + 100) + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x300) = DAT_82002058;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(int *)(iVar3 + 0x68) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(DAT_820c5fbc + *(int *)(iVar3 + 0x68) + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x308) = uVar2;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(int *)(iVar3 + 0x6c) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(DAT_820c5fbc + *(int *)(iVar3 + 0x6c) + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x304) = uVar2;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(int *)(iVar3 + 0x38) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(DAT_820c5fbc + *(int *)(iVar3 + 0x38) + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x340) = uVar2;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(int *)(iVar3 + 0x3c) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(DAT_820c5fbc + *(int *)(iVar3 + 0x3c) + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x344) = uVar2;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(int *)(iVar3 + 0x40) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(*(int *)(iVar3 + 0x40) + DAT_820c5fbc + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x348) = uVar2;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(int *)(iVar3 + 0x44) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(*(int *)(iVar3 + 0x44) + DAT_820c5fbc + 0x100);
    }
    if (cVar5 != '\0') {
      *(undefined4 *)(iVar3 + 0x34c) = uVar2;
      *(undefined4 *)(iVar3 + 0x1d88) = 2;
    }
    if (*(char *)(iVar3 + 0xfc) != '\0') {
      *(undefined4 *)(iVar3 + 0x338) = uVar2;
    }
    if (*(char *)(iVar3 + 0xfd) != '\0') {
      *(undefined4 *)(iVar3 + 0x33c) = uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_82049d18 @ 82049d18 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82049d18(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_820844d4();
  iVar1 = DAT_820c5fbc;
  if (_UNK_8200449c <= *(float *)(DAT_820c5fbc + 0x1eb0)) {
    if (*(int *)(DAT_820c5fbc + 0x1eac) == 0) {
      uVar2 = FUN_82037408((byte *)"###NavWindowingList",0,0);
      uVar3 = FUN_8203a8b8(iVar1 + 0x1b90,uVar2);
      *(undefined4 *)(iVar1 + 0x1eac) = uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204a008 @ 8204a008 ==== */

void FUN_8204a008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8204a230 @ 8204a230 ==== */

void FUN_8204a230(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8204a290 @ 8204a290 ==== */

void FUN_8204a290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8204a320 @ 8204a320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204a320(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204a3c8 @ 8204a3c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204a3c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204a4e8 @ 8204a4e8 ==== */

void FUN_8204a4e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8204add8 @ 8204add8 ==== */

void FUN_8204add8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8204b0f8 @ 8204b0f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b0f8(void)

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
  
  FUN_820844d0();
  iVar2 = DAT_820c5fbc;
  if (*(int *)(DAT_820c5fbc + 0x1b4c) != *(int *)(DAT_820c5fbc + 0x1b48)) {
    FUN_8204add8();
  }
  iVar9 = *(int *)(iVar2 + 0x1b48);
  iVar7 = *(int *)(iVar2 + 0x1b50);
  *(undefined4 *)(iVar2 + 0x364) = 0;
  *(int *)(iVar2 + 0x1b50) = iVar9;
  bVar13 = iVar9 != iVar7;
  FUN_8203b010(iVar2,4);
  iVar7 = 0;
  if (*(int *)(iVar2 + 0x1d48) != 0) {
    iVar9 = 0;
    do {
      iVar11 = *(int *)(iVar9 + *(int *)(iVar2 + 0x1d50));
      FUN_8203f988();
      if (*(int *)(iVar11 + 0x2c) != 0) {
        piVar3 = (int *)FUN_8203b0a8();
        apiStack_60[0] = piVar3;
        FUN_82057410();
        if (*piVar3 != 0) {
          FUN_8203f5e0();
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 != *(int *)(iVar2 + 0x1d48));
  }
  if (bVar13) {
    FUN_82043558();
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
LAB_8204b254:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (*(char *)((int)piVar4 + 0x91) != '\0') goto LAB_8204b254;
      }
      if (bVar1) {
        if ((((piVar4[2] & 0x1000000U) == 0) && (piVar4 != piVar3)) && (piVar4 != piVar10)) {
          FUN_82040540(piVar4,(uint)piVar4[2] >> 0x19 & 1);
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
LAB_8204b2c8:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (*(char *)((int)piVar3 + 0x91) != '\0') goto LAB_8204b2c8;
      }
      if (bVar1) {
        FUN_82040540(piVar3,(uint)piVar3[2] >> 0x19 & 1);
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
          FUN_82040608();
          if ((*(char *)(iVar2 + 0xb0) != '\0') && (bVar13)) {
            FUN_8203b0a8();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(int *)(iVar11 + 0x30) != 0) {
            piVar10 = (int *)FUN_8203b0a8();
            apiStack_60[0] = piVar10;
            FUN_82057410();
            if (*piVar10 != 0) {
              FUN_8203f5e0();
            }
          }
          iVar8 = DAT_820c5fbc;
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
      FUN_8203b010(iVar2,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_8204b4b0 @ 8204b4b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b4b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b4f8 @ 8204b4f8 ==== */

void FUN_8204b4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8204b578 @ 8204b578 ==== */

bool FUN_8204b578(int param_1,ushort param_2,char param_3)

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


/* ==== FUN_8204b5d0 @ 8204b5d0 ==== */

void FUN_8204b5d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8204b718 @ 8204b718 ==== */

bool FUN_8204b718(double param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((double)*(float *)((param_3 + 0xd) * 4 + param_2) < param_1) &&
     (param_1 <= (double)*(float *)((param_3 + 0x15) * 4 + param_2))) {
    iVar1 = (param_3 + 0x1d) * 4;
    bVar2 = *(float *)(iVar1 + param_2) != DAT_82001c98;
    *(float *)(iVar1 + param_2) = DAT_82001c98;
    return bVar2;
  }
  return false;
}


/* ==== FUN_8204b778 @ 8204b778 ==== */

void FUN_8204b778(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8204b8d0 @ 8204b8d0 ==== */

void FUN_8204b8d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8204bd28 @ 8204bd28 ==== */

undefined4 FUN_8204bd28(char *param_1,ushort param_2,char param_3)

{
  bool bVar1;
  ushort extraout_r4;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 != '\x01' ||
         (bVar1 = FUN_8204b578((int)param_1,param_2,param_3), param_2 = extraout_r4, !bVar1))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0xf4;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8204bd88 @ 8204bd88 ==== */

void FUN_8204bd88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8204be18 @ 8204be18 ==== */

undefined4 FUN_8204be18(double param_1,char *param_2,int param_3)

{
  bool bVar1;
  int extraout_r4;
  int iVar2;
  double extraout_f1;
  
  iVar2 = 0;
  while ((*param_2 != '\x01' ||
         (bVar1 = FUN_8204b718(param_1,(int)param_2,param_3), param_3 = extraout_r4,
         param_1 = extraout_f1, !bVar1))) {
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 0xf4;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8204be78 @ 8204be78 ==== */

void FUN_8204be78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8204bf78 @ 8204bf78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204bf78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204bfd0 @ 8204bfd0 ==== */

void FUN_8204bfd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8204c220 @ 8204c220 ==== */

void FUN_8204c220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8204c308 @ 8204c308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c3c0 @ 8204c3c0 ==== */

void FUN_8204c3c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8204c778 @ 8204c778 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8204c778(undefined4 param_1,undefined4 param_2,byte *param_3,undefined1 *param_4,
                 uint param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar5;
  char cVar6;
  uint uVar4;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 uVar13;
  
  uVar16 = FUN_820844c8();
  iVar3 = DAT_820c5fbc;
  iVar7 = (int)uVar16;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar9 = *(int *)(iVar3 + 0x1ba8);
  if ((param_5 & 7) == 0) {
    param_5 = param_5 | 1;
  }
  if ((param_5 & 0x3f0) == 0) {
    param_5 = param_5 | 0x20;
  }
  iVar10 = *(int *)(iVar3 + 0x1bac);
  if ((((param_5 & 0x800) == 0) || (iVar10 == 0)) ||
     (bVar8 = true, *(int *)(iVar10 + 0x2e0) != iVar9)) {
    bVar8 = false;
  }
  if (bVar8) {
    *(int *)(iVar3 + 0x1bac) = iVar9;
  }
  bVar2 = false;
  bVar5 = FUN_8203ff78((int)((ulonglong)uVar16 >> 0x20),iVar7);
  if (((bVar5 != 0) && (*(char *)(iVar3 + 0x1ec4) != '\0')) && (*(int *)(iVar3 + 0x1edc) == iVar7))
  {
    bVar5 = -((*(uint *)(iVar3 + 0x1ec8) & 2) != 0) & bVar5;
  }
  if (((*(char *)(iVar3 + 0x1ec4) != '\0') && ((param_5 & 0x200) != 0)) &&
     (((*(uint *)(iVar3 + 0x1ec8) & 4) == 0 && (cVar6 = FUN_8203ae30(0x80), cVar6 != '\0')))) {
    bVar5 = 1;
    FUN_82037c48(iVar7);
    if ((*(float *)(iVar3 + 0x1bd8) - *(float *)(iVar3 + 0x18) <= _UNK_82004e90) &&
       (_UNK_82004e90 <= *(float *)(iVar3 + 0x1bd8))) {
      *(int *)(iVar3 + 0x1f34) = iVar7;
      bVar2 = true;
      FUN_82045828();
    }
  }
  if (bVar8) {
    *(int *)(iVar3 + 0x1bac) = iVar10;
  }
  if (((bVar5 != 0) && ((param_5 & 0x1000) != 0)) && (*(int *)(iVar3 + 0x1bd0) != iVar7)) {
    bVar5 = -(*(int *)(iVar3 + 0x1bd0) == 0) & bVar5;
  }
  dVar15 = (double)DAT_82001c98;
  if (bVar5 != 0) {
    if (((param_5 & 0x10000) == 0) ||
       (((*(char *)(iVar3 + 0xfc) == '\0' && (*(char *)(iVar3 + 0xfd) == '\0')) &&
        (*(char *)(iVar3 + 0xfe) == '\0')))) {
      iVar11 = -1;
      iVar10 = -1;
      if (((param_5 & 1) == 0) || (*(char *)(iVar3 + 0x3e0) == '\0')) {
        if (((param_5 & 2) == 0) || (*(char *)(iVar3 + 0x3e1) == '\0')) {
          if (((param_5 & 4) != 0) && (*(char *)(iVar3 + 0x3e2) != '\0')) {
            iVar11 = 2;
          }
        }
        else {
          iVar11 = 1;
        }
      }
      else {
        iVar11 = 0;
      }
      if (((param_5 & 1) == 0) || (*(char *)(iVar3 + 0x3fe) == '\0')) {
        if (((param_5 & 2) == 0) || (*(char *)(iVar3 + 0x3ff) == '\0')) {
          if (((param_5 & 4) != 0) && (*(char *)(iVar3 + 0x400) != '\0')) {
            iVar10 = 2;
          }
        }
        else {
          iVar10 = 1;
        }
      }
      else {
        iVar10 = 0;
      }
      if ((iVar11 != -1) && (*(int *)(iVar3 + 0x1be0) != iVar7)) {
        if ((param_5 & 0x60) != 0) {
          FUN_82037b80(iVar7,iVar9);
          *(int *)(iVar3 + 0x1c18) = iVar11;
          if ((param_5 & 0x40000) == 0) {
            FUN_82038fc0(iVar7,iVar9);
          }
          FUN_82045828();
        }
        if (((param_5 & 0x10) != 0) ||
           (((param_5 & 0x100) != 0 && (*(short *)((iVar11 + 0x1f5) * 2 + iVar3) == 2)))) {
          bVar2 = true;
          if ((param_5 & 0x20000) == 0) {
            FUN_82037b80(iVar7,iVar9);
          }
          else {
            FUN_82037c38();
          }
          if ((param_5 & 0x40000) == 0) {
            FUN_82038fc0(iVar7,iVar9);
          }
          *(int *)(iVar3 + 0x1c18) = iVar11;
          FUN_82045828();
        }
      }
      if (((param_5 & 0x80) != 0) && (iVar10 != -1)) {
        if (((param_5 & 0x400) == 0) ||
           (bVar8 = true, *(float *)((iVar10 + 0x109) * 4 + iVar3) < *(float *)(iVar3 + 0x8c))) {
          bVar8 = false;
        }
        if (!bVar8) {
          bVar2 = true;
        }
        if ((param_5 & 0x40000) == 0) {
          FUN_82038fc0(iVar7,iVar9);
        }
        FUN_82037c38();
      }
      if ((((*(int *)(iVar3 + 0x1be0) == iVar7) && ((param_5 & 0x400) != 0)) &&
          (dVar15 < (double)*(float *)((*(int *)(iVar3 + 0x1c18) + 0x104) * 4 + iVar3))) &&
         (uVar4 = FUN_82038180(*(int *)(iVar3 + 0x1c18),'\x01'), (uVar4 & 0xff) != 0)) {
        bVar2 = true;
      }
    }
    if (bVar2) {
      *(undefined1 *)(iVar3 + 0x1d92) = 1;
    }
  }
  if (((((*(int *)(iVar3 + 0x1d58) == iVar7) && (*(char *)(iVar3 + 0x1d92) == '\0')) &&
       (*(char *)(iVar3 + 0x1d93) != '\0')) &&
      (((iVar10 = *(int *)(iVar3 + 0x1be0), iVar10 == 0 || (iVar10 == iVar7)) ||
       (iVar10 == *(int *)(iVar9 + 0x50))))) && ((param_5 & 0x80000) == 0)) {
    bVar5 = 1;
  }
  if (*(int *)(iVar3 + 0x1d64) == iVar7) {
    iVar10 = *(int *)(iVar3 + 0x1d60);
    dVar14 = FUN_82039288(0,param_5 >> 9 & 2 | 1);
    if ((iVar7 == iVar10) || (dVar15 < dVar14)) {
      bVar2 = true;
      FUN_82037b80(iVar7,iVar9);
      *(undefined4 *)(iVar3 + 0x1c14) = 4;
      if ((param_5 & 0x40000) == 0) {
        FUN_82038fc0(iVar7,iVar9);
      }
    }
  }
  uVar13 = 0;
  uVar12 = 0;
  if (*(int *)(iVar3 + 0x1be0) == iVar7) {
    if (*(int *)(iVar3 + 0x1c14) == 1) {
      if (*(char *)(iVar3 + 0x1bec) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar7 = *(int *)(iVar3 + 0x1c18);
      if (*(char *)(iVar7 + iVar3 + 0xec) == '\0') {
        if ((bVar5 == 0) || (bVar8 = true, (param_5 & 0x20) == 0)) {
          bVar8 = false;
        }
        if (((bVar8) || ((param_5 >> 6 & 1) != 0)) && (*(char *)(iVar3 + 0x1ec4) == '\0')) {
          if ((((param_5 & 0x100) == 0) || (*(char *)(iVar7 + iVar3 + 0x3fe) == '\0')) ||
             (bVar8 = true, *(short *)((iVar7 + 0x1fa) * 2 + iVar3) != 2)) {
            bVar8 = false;
          }
          if (((param_5 & 0x400) == 0) ||
             (bVar1 = true, *(float *)((iVar7 + 0x109) * 4 + iVar3) < *(float *)(iVar3 + 0x8c))) {
            bVar1 = false;
          }
          if ((!bVar8) && (!bVar1)) {
            bVar2 = true;
          }
        }
        FUN_82037c38();
      }
      else {
        uVar13 = 1;
      }
      uVar12 = uVar13;
      if ((param_5 & 0x40000) == 0) {
        *(undefined1 *)(iVar3 + 0x1d92) = 1;
      }
    }
    else {
      uVar12 = uVar13;
      if ((*(int *)(iVar3 + 0x1c14) == 4) && (*(int *)(iVar3 + 0x1d64) != iVar7)) {
        FUN_82037c38();
      }
    }
    if (bVar2) {
      *(undefined1 *)(iVar3 + 0x1bef) = 1;
    }
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = bVar5;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204cfb8 @ 8204cfb8 ==== */

void FUN_8204cfb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8204cfc0 @ 8204cfc0 ==== */

void FUN_8204cfc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8204d198 @ 8204d198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d198(void)

{
  int iVar1;
  
  iVar1 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1ba8) + 0x8f) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


/* ==== FUN_8204d228 @ 8204d228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d228(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d2c8 @ 8204d2c8 ==== */

void FUN_8204d2c8(void)

{
  thunk_FUN_82047300();
  FUN_82045ab0();
  return;
}


/* ==== FUN_8204d2f0 @ 8204d2f0 ==== */

void FUN_8204d2f0(int param_1,char param_2)

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


/* ==== FUN_8204d390 @ 8204d390 ==== */

void FUN_8204d390(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8204d790 @ 8204d790 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d790(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d810 @ 8204d810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204d810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204d8a8 @ 8204d8a8 ==== */

void FUN_8204d8a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8204d958 @ 8204d958 ==== */

void FUN_8204d958(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8204dc30 @ 8204dc30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204dc30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204dcf8 @ 8204dcf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204dcf8(void)

{
  FUN_820844c0();
  FUN_82084c4c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e250 @ 8204e250 ==== */

void FUN_8204e250(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8204e5c8 @ 8204e5c8 ==== */

void FUN_8204e5c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8204ead8 @ 8204ead8 ==== */

void FUN_8204ead8(void)

{
  if (*(char *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8f) != '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8204eb10 @ 8204eb10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204eb10(void)

{
  int iVar1;
  
  FUN_820844b8();
  iVar1 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1ba8) + 0x8f) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82043188();
  FUN_82037e98();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f060 @ 8204f060 ==== */

void FUN_8204f060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8204f2e8 @ 8204f2e8 ==== */

void FUN_8204f2e8(double param_1,int param_2,undefined4 param_3,char param_4)

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
  puVar1 = (undefined4 *)FUN_8204d2f0(param_2,1);
  uVar3 = (undefined2)uVar2;
  *(undefined2 *)((int)puVar1 + 0x12) = uVar3;
  *(undefined2 *)(puVar1 + 5) = uVar3;
  *(undefined2 *)((int)puVar1 + 0x16) = uVar3;
  *(undefined2 *)(puVar1 + 6) = uVar3;
  *puVar1 = puVar1[1];
  puVar1[1] = uVar2;
  return;
}


/* ==== FUN_8204f358 @ 8204f358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f3a8 @ 8204f3a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f3a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f3f8 @ 8204f3f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f3f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f448 @ 8204f448 ==== */

void FUN_8204f448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8204f590 @ 8204f590 ==== */

void FUN_8204f590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8204f600 @ 8204f600 ==== */

void FUN_8204f600(void)

{
  FUN_82060130();
  FUN_8204a4e8();
  return;
}


/* ==== FUN_8204f658 @ 8204f658 ==== */

void FUN_8204f658(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8204f740 @ 8204f740 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f740(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f798 @ 8204f798 ==== */

void FUN_8204f798(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8204fac0 @ 8204fac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fac0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fb50 @ 8204fb50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fb50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fbf8 @ 8204fbf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fbf8(double param_1)

{
  if (param_1 < (double)DAT_82001c98) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fc60 @ 8204fc60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fc60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fd10 @ 8204fd10 ==== */

void FUN_8204fd10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8204ff78 @ 8204ff78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ff78(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar17 = FUN_820844d0();
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
    FUN_820862f0(iVar3,param_3,0x10,&LAB_8204d900);
  }
  if (0 < (int)param_3) {
    puVar14 = (ushort *)(iVar3 + 4);
    uVar16 = param_3;
    do {
      uVar15 = (uint)*puVar14;
      if (uVar15 == 0) {
LAB_82050104:
        puVar14[3] = 0;
        puVar14[2] = 0;
      }
      else {
        uVar1 = puVar14[1];
        if (uVar1 == 0) goto LAB_82050104;
        piVar7 = (int *)FUN_8204fd10();
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
    FUN_820862f0(iVar3,param_3,0x10,&LAB_8204d948);
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


/* ==== FUN_82050190 @ 82050190 ==== */

uint FUN_82050190(int *param_1,int param_2)

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


/* ==== FUN_820501e0 @ 820501e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820501e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050300 @ 82050300 ==== */

uint FUN_82050300(int *param_1)

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


/* ==== FUN_82050408 @ 82050408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050620 @ 82050620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820506b8 @ 820506b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820506b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820507e0 @ 820507e0 ==== */

undefined4 FUN_820507e0(char *param_1)

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


/* ==== FUN_820508d8 @ 820508d8 ==== */

int FUN_820508d8(int param_1,int param_2,char *param_3)

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


/* ==== FUN_820509a8 @ 820509a8 ==== */

int FUN_820509a8(char *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_820507e0();
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


/* ==== FUN_82050ac0 @ 82050ac0 ==== */

void FUN_82050ac0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82050bf0 @ 82050bf0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82050de0) */

void FUN_82050bf0(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar10 = FUN_820844d0();
  iVar1 = (int)((ulonglong)uVar10 >> 0x20);
  iVar9 = (int)uVar10;
  *(int *)(iVar1 + 4) = iVar9;
  *(int *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iVar2 = FUN_820508d8(iVar9,param_3,"cmap");
  iVar3 = FUN_820508d8(iVar9,param_3,"loca");
  *(int *)(iVar1 + 0x10) = iVar3;
  iVar4 = FUN_820508d8(iVar9,param_3,"head");
  *(int *)(iVar1 + 0x14) = iVar4;
  iVar5 = FUN_820508d8(iVar9,param_3,"glyf");
  *(int *)(iVar1 + 0x18) = iVar5;
  iVar6 = FUN_820508d8(iVar9,param_3,"hhea");
  *(int *)(iVar1 + 0x1c) = iVar6;
  iVar7 = FUN_820508d8(iVar9,param_3,"hmtx");
  *(int *)(iVar1 + 0x20) = iVar7;
  iVar8 = FUN_820508d8(iVar9,param_3,"kern");
  *(int *)(iVar1 + 0x24) = iVar8;
  iVar8 = FUN_820508d8(iVar9,param_3,"GPOS");
  *(int *)(iVar1 + 0x28) = iVar8;
  if ((((iVar2 != 0) && (iVar4 != 0)) && (iVar6 != 0)) && (iVar7 != 0)) {
    if (iVar5 == 0) {
      iVar2 = FUN_820508d8(iVar9,param_3,"CFF ");
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
        FUN_820501e0();
        FUN_820501e0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (iVar3 != 0) {
      iVar3 = FUN_820508d8(iVar9,param_3,"maxp");
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


/* ==== FUN_82051138 @ 82051138 ==== */

void FUN_82051138(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820514e8 @ 820514e8 ==== */

int FUN_820514e8(int param_1,int param_2)

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


/* ==== FUN_820515d8 @ 820515d8 ==== */

void FUN_820515d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82051690 @ 82051690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051690(undefined4 param_1,undefined4 param_2,int *param_3)

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
  
  FUN_820844b4();
  uVar22 = FUN_82084c4c();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar19 = *(int *)(iVar12 + 4);
  iVar16 = 0;
  iVar2 = FUN_820514e8(iVar12,(int)uVar22);
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
            iVar2 = FUN_82051690(iVar12,(uint)*pbVar10 * 0x100 + (uint)*pbVar7,local_180);
          }
          else {
            iVar2 = FUN_82052d50();
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
      iVar16 = FUN_82037d60(iVar12 * 0xe);
      if (iVar16 == 0) goto LAB_82051a8c;
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
              goto LAB_8205182c;
            }
          }
          else {
            bVar8 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            uVar11 = (ushort)bVar8;
            if ((bVar17 & 0x10) == 0) {
              uVar11 = -uVar11;
            }
LAB_8205182c:
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
              goto LAB_820518a4;
            }
          }
          else {
            pbVar10 = pbVar7 + 2;
            pbVar7 = pbVar7 + 1;
            uVar11 = (ushort)*pbVar10;
            if ((bVar17 & 0x20) == 0) {
              uVar11 = -uVar11;
            }
LAB_820518a4:
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
              iVar19 = FUN_820515d8();
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
LAB_82051a48:
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
              goto LAB_82051a48;
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
      FUN_820515d8();
    }
    *param_3 = iVar16;
  }
LAB_82051a8c:
  FUN_82084c98();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051ec8 @ 82051ec8 ==== */

void FUN_82051ec8(int param_1,int param_2,int param_3)

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


/* ==== FUN_82051f48 @ 82051f48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051f48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052018 @ 82052018 ==== */

void FUN_82052018(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double extraout_f1;
  
  if ((*(float *)(param_3 + 8) != *(float *)(param_3 + 0x10)) ||
     (*(float *)(param_3 + 0xc) != *(float *)(param_3 + 0x14))) {
    param_3 = FUN_82051f48();
    param_1 = extraout_f1;
  }
  fVar1 = (float)((double)*(float *)(param_3 + 0x10) + param_1);
  fVar2 = (float)(param_2 + (double)*(float *)(param_3 + 0x14));
  *(float *)(param_3 + 0x10) = fVar1;
  *(float *)(param_3 + 8) = fVar1;
  *(float *)(param_3 + 0x14) = fVar2;
  *(float *)(param_3 + 0xc) = fVar2;
  FUN_82051f48();
  return;
}


/* ==== FUN_820520d8 @ 820520d8 ==== */

void FUN_820520d8(double param_1,double param_2,int param_3)

{
  *(float *)(param_3 + 0x10) = (float)(param_1 + (double)*(float *)(param_3 + 0x10));
  *(float *)(param_3 + 0x14) = (float)(param_2 + (double)*(float *)(param_3 + 0x14));
  FUN_82051f48();
  return;
}


/* ==== FUN_82052140 @ 82052140 ==== */

void FUN_82052140(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  *(float *)(param_7 + 0x10) =
       (float)((double)(float)((double)(float)(param_1 + (double)*(float *)(param_7 + 0x10)) +
                              param_3) + param_5);
  *(float *)(param_7 + 0x14) =
       (float)((double)(float)((double)(float)(param_2 + (double)*(float *)(param_7 + 0x14)) +
                              param_4) + param_6);
  FUN_82051f48();
  return;
}


/* ==== FUN_820521d8 @ 820521d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820521d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820522c0 @ 820522c0 ==== */

void FUN_820522c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82052450 @ 82052450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052450(void)

{
  FUN_820844bc();
  FUN_82084c4c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052d50 @ 82052d50 ==== */

void FUN_82052d50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82052e30 @ 82052e30 ==== */

void FUN_82052e30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82052f20 @ 82052f20 ==== */

void FUN_82052f20(int param_1,int param_2,int *param_3,int *param_4)

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


/* ==== FUN_82053020 @ 82053020 ==== */

void FUN_82053020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82053168 @ 82053168 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053168(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
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


/* ==== FUN_82053278 @ 82053278 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053278(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053718 @ 82053718 ==== */

void FUN_82053718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82053a10 @ 82053a10 ==== */

void FUN_82053a10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82053c68 @ 82053c68 ==== */

void FUN_82053c68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82053ee0 @ 82053ee0 ==== */

void FUN_82053ee0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82054008 @ 82054008 ==== */

void FUN_82054008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820541f0 @ 820541f0 ==== */

void FUN_820541f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82054550 @ 82054550 ==== */

void FUN_82054550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82054618 @ 82054618 ==== */

void FUN_82054618(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_820548c0 @ 820548c0 ==== */

void FUN_820548c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82054b58 @ 82054b58 ==== */

void FUN_82054b58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82055960 @ 82055960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055960(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055a88 @ 82055a88 ==== */

void FUN_82055a88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82055be0 @ 82055be0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055be0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055c68 @ 82055c68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055c68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055cc0 @ 82055cc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055cc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055d78 @ 82055d78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055dd0 @ 82055dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055e58 @ 82055e58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055e58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055ee0 @ 82055ee0 ==== */

undefined * FUN_82055ee0(void)

{
  return &UNK_82008f9c;
}


/* ==== FUN_82055ef0 @ 82055ef0 ==== */

int FUN_82055ef0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 & 0xffff) < *(uint *)(param_1 + 0x14)) &&
     (uVar1 = (uint)*(ushort *)((param_2 & 0xffff) * 2 + *(int *)(param_1 + 0x1c)), uVar1 != 0xffff)
     ) {
    return uVar1 * 0x28 + *(int *)(param_1 + 0x28);
  }
  return *(int *)(param_1 + 0x2c);
}


/* ==== FUN_82055f30 @ 82055f30 ==== */

void FUN_82055f30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820560f8 @ 820560f8 ==== */

void FUN_820560f8(uint param_1,int param_2)

{
  int iVar1;
  
  if (puRam820c5fd0 < puRam820c5fcc + param_2) {
    puRam820c5fcc = puRam820c5fcc + param_2;
    return;
  }
  if (param_1 < uRam820c5fd4) {
    puRam820c5fcc = puRam820c5fd0 + 1;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    iVar1 = param_1 - (int)puRam820c5fcc;
    do {
      *puRam820c5fcc = puRam820c5fcc[iVar1];
      puRam820c5fcc = puRam820c5fcc + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* ==== FUN_82056158 @ 82056158 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056158(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820561d0 @ 820561d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820561d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056430 @ 82056430 ==== */

void FUN_82056430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82056538 @ 82056538 ==== */

void FUN_82056538(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82056698 @ 82056698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056710 @ 82056710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056760 @ 82056760 ==== */

void FUN_82056760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820567c0 @ 820567c0 ==== */

void FUN_820567c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82056820 @ 82056820 ==== */

void FUN_82056820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82056880 @ 82056880 ==== */

void FUN_82056880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820568e0 @ 820568e0 ==== */

void FUN_820568e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82056940 @ 82056940 ==== */

void FUN_82056940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820569a0 @ 820569a0 ==== */

void FUN_820569a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82056a00 @ 82056a00 ==== */

void FUN_82056a00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82056bf0 @ 82056bf0 ==== */

void FUN_82056bf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82056d00 @ 82056d00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056d00(undefined4 param_1,undefined4 param_2,float *param_3,int param_4)

{
  int iVar1;
  
  FUN_820844b4();
  iVar1 = FUN_82084c54();
  if (param_4 < 1) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    FUN_82084ca0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_82001c98 < *param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820571f8 @ 820571f8 ==== */

void FUN_820571f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82057300 @ 82057300 ==== */

void FUN_82057300(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82057410 @ 82057410 ==== */

void FUN_82057410(int *param_1)

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


/* ==== FUN_82057450 @ 82057450 ==== */

uint FUN_82057450(double param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  
  if ((int)(param_1 + (double)DAT_82008fb8) < 0x40) {
    uVar1 = (uint)*(byte *)(*(int *)(param_2 + 0x2c) + (int)(param_1 + (double)DAT_82008fb8) + 0x1b0
                           );
  }
  else {
    dVar2 = (double)*(float *)(*(int *)(param_2 + 0x2c) + 0x14);
    if (param_1 <= dVar2) {
      dVar2 = param_1;
    }
    dVar2 = (double)FUN_820887e0((double)(DAT_82002058 - (float)(dVar2 / param_1)),param_2);
    dVar2 = FUN_820887e8((double)(DAT_82008fb4 / (float)dVar2));
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


/* ==== FUN_82057518 @ 82057518 ==== */

void FUN_82057518(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820575b0 @ 820575b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820575b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057660 @ 82057660 ==== */

void FUN_82057660(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820577c8 @ 820577c8 ==== */

void FUN_820577c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82057968 @ 82057968 ==== */

void FUN_82057968(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82057bc8 @ 82057bc8 ==== */

void FUN_82057bc8(int param_1,ushort *param_2)

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


/* ==== FUN_82057c18 @ 82057c18 ==== */

void FUN_82057c18(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = DAT_82001c98;
  param_1[6] = 0;
  uVar2 = DAT_82002058;
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


/* ==== FUN_82057c98 @ 82057c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057c98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057d10 @ 82057d10 ==== */

void FUN_82057d10(int param_1,uint param_2,char param_3)

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


/* ==== FUN_82057d70 @ 82057d70 ==== */

void FUN_82057d70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82057fd8 @ 82057fd8 ==== */

void FUN_82057fd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82058070 @ 82058070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820580e8 @ 820580e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820580e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058160 @ 82058160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058160(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058218 @ 82058218 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058218(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058290 @ 82058290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058290(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058330 @ 82058330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820583a8 @ 820583a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820583a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058450 @ 82058450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058450(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820584f8 @ 820584f8 ==== */

void FUN_820584f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82058590 @ 82058590 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058590(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058608 @ 82058608 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058608(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058680 @ 82058680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820586f8 @ 820586f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820586f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058770 @ 82058770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058770(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820587e8 @ 820587e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820587e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820588e0 @ 820588e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820588e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058950 @ 82058950 ==== */

void FUN_82058950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820589e0 @ 820589e0 ==== */

void FUN_820589e0(int *param_1)

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
      FUN_820844ec();
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


/* ==== FUN_82058ac0 @ 82058ac0 ==== */

void FUN_82058ac0(int *param_1)

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
                    /* WARNING: Subroutine does not return */
    FUN_820844ec();
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


/* ==== FUN_82058b60 @ 82058b60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058b60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058c88 @ 82058c88 ==== */

void FUN_82058c88(int *param_1)

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
      FUN_820844ec();
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


/* ==== FUN_82058ce8 @ 82058ce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058ce8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058d38 @ 82058d38 ==== */

void FUN_82058d38(int *param_1)

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
                    /* WARNING: Subroutine does not return */
    FUN_820844ec();
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


/* ==== FUN_82058d68 @ 82058d68 ==== */

void FUN_82058d68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82058e40 @ 82058e40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058e40(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_820844b8();
  if (1 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059ac8 @ 82059ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059ac8(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_820844bc();
  if (2 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059e78 @ 82059e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059e78(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int in_r6;
  int in_r7;
  uint in_r8;
  double extraout_f1;
  
  iVar2 = FUN_820844d4();
  if ((double)DAT_82001c98 < extraout_f1) {
    if ((int)in_r8 < 1) {
      uVar3 = FUN_82057450(extraout_f1,iVar2);
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
    FUN_82058330();
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
    FUN_8203f128();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a0f8 @ 8205a0f8 ==== */

void FUN_8205a0f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205a1f0 @ 8205a1f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a1f0(double param_1)

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
  
  if (param_1 <= (double)DAT_82001c98) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = 0;
  iVar5 = (in_r7 * 0x30) / 0xc;
  iVar4 = (in_r6 * 0x30) / 0xc;
  iVar2 = FUN_820844d4();
  if ((double)DAT_82001c98 < extraout_f1) {
    if ((int)uVar6 < 1) {
      uVar3 = FUN_82057450(extraout_f1,iVar2);
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
    FUN_82058330();
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
    FUN_8203f128();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a228 @ 8205a228 ==== */

void FUN_8205a228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8205a508 @ 8205a508 ==== */

void FUN_8205a508(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205a7e0 @ 8205a7e0 ==== */

void FUN_8205a7e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8205a898 @ 8205a898 ==== */

void FUN_8205a898(int *param_1,int *param_2,int param_3)

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
                    /* WARNING: Subroutine does not return */
        FUN_82083d40();
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
      FUN_82058950();
      return;
    }
  }
  FUN_82058950();
  return;
}


/* ==== FUN_8205a9d8 @ 8205a9d8 ==== */

void FUN_8205a9d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205aac8 @ 8205aac8 ==== */

void FUN_8205aac8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205ab50 @ 8205ab50 ==== */

void FUN_8205ab50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8205ac08 @ 8205ac08 ==== */

void FUN_8205ac08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8205ad78 @ 8205ad78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ad78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205adf8 @ 8205adf8 ==== */

void FUN_8205adf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205ae70 @ 8205ae70 ==== */

void FUN_8205ae70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8205af98 @ 8205af98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205af98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b020 @ 8205b020 ==== */

void FUN_8205b020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205b0e0 @ 8205b0e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b0e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b150 @ 8205b150 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b150(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b380 @ 8205b380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b380(void)

{
  FUN_820844c0();
  FUN_82084c5c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b8c0 @ 8205b8c0 ==== */

void FUN_8205b8c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205bae8 @ 8205bae8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205bae8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205bb50 @ 8205bb50 ==== */

void FUN_8205bb50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205bc08 @ 8205bc08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205bc08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205bd18 @ 8205bd18 ==== */

void FUN_8205bd18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205bdb0 @ 8205bdb0 ==== */

void FUN_8205bdb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205be20 @ 8205be20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205be20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205bf08 @ 8205bf08 ==== */

void FUN_8205bf08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205c030 @ 8205c030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c030(void)

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
  
  uVar18 = FUN_820844d4();
  piVar3 = (int *)((ulonglong)uVar18 >> 0x20);
  piVar9 = (int *)uVar18;
  if (1 < piVar3[1]) {
    FUN_8205a898(piVar3,piVar9,0);
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
                FUN_82056698();
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
    FUN_82058070();
    FUN_8203ee38();
    iVar7 = 1;
    if (1 < piVar3[1]) {
      iVar14 = 0x18;
      do {
        if (*(int *)(iVar14 + piVar3[4]) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_82083d40();
        }
        if (*(int *)(iVar14 + piVar3[4] + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_82083d40();
        }
        iVar7 = iVar7 + 1;
        iVar14 = iVar14 + 0x18;
      } while (iVar7 < piVar3[1]);
    }
    piVar9[0xe] = (piVar9[3] - iVar10) * 2 + piVar9[5];
    if ((*piVar9 == 0) || (*(int *)(*piVar9 * 0x28 + piVar9[2] + -8) != 0)) {
      FUN_82058950();
    }
    iVar10 = *piVar9 * 0x28 + piVar9[2];
    pcVar16 = (char *)(iVar10 + -0x28);
    if (*(int *)(iVar10 + -0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_82083d40();
    }
    piVar9 = piVar9 + 0x18;
    do {
      cVar1 = *pcVar16;
      cVar2 = *(char *)piVar9;
      if (cVar1 != cVar2) break;
      pcVar16 = pcVar16 + 1;
      piVar9 = (int *)((int)piVar9 + 1);
    } while (pcVar16 != (char *)(iVar10 + -0x10));
    if (cVar1 != cVar2) {
      FUN_82058950();
    }
    piVar3[1] = 1;
  }
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


/* ==== FUN_8205c4b8 @ 8205c4b8 ==== */

void FUN_8205c4b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8205c958 @ 8205c958 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c958(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205cb20 @ 8205cb20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205cb20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205cb68 @ 8205cb68 ==== */

void FUN_8205cb68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205cc78 @ 8205cc78 ==== */

void FUN_8205cc78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205d110 @ 8205d110 ==== */

void FUN_8205d110(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205d168 @ 8205d168 ==== */

void FUN_8205d168(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205e128 @ 8205e128 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e198 @ 8205e198 ==== */

void FUN_8205e198(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8205e5f0 @ 8205e5f0 ==== */

void FUN_8205e5f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205e678 @ 8205e678 ==== */

void FUN_8205e678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205e918 @ 8205e918 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e918(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e958 @ 8205e958 ==== */

void FUN_8205e958(int param_1,undefined4 *param_2)

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


/* ==== FUN_8205ea08 @ 8205ea08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ea08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205ea98 @ 8205ea98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ea98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205eb00 @ 8205eb00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205eb00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205eb78 @ 8205eb78 ==== */

void FUN_8205eb78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205ebc8 @ 8205ebc8 ==== */

void FUN_8205ebc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205ec68 @ 8205ec68 ==== */

double FUN_8205ec68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x170);
  if (iVar1 == 0) {
    return (double)DAT_82001c98;
  }
  if (param_1 < 0) {
    param_1 = *(int *)(iVar1 + 0xc);
  }
  return (double)(*(float *)(*(int *)(iVar1 + 100) + param_1 * 0x1c) *
                  (*(float *)(iVar1 + 0x18) - *(float *)(iVar1 + 0x14)) + *(float *)(iVar1 + 0x14));
}


/* ==== FUN_8205ecb8 @ 8205ecb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ecb8(double param_1,int param_2)

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
  
  fVar4 = DAT_82001c98;
  while( true ) {
    iVar5 = DAT_820c5fbc;
    iVar8 = *(int *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x170);
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


/* ==== FUN_8205ede8 @ 8205ede8 ==== */

void FUN_8205ede8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205eeb8 @ 8205eeb8 ==== */

int * FUN_8205eeb8(int param_1)

{
  int *piVar1;
  
  if (*(int *)(DAT_820c5fbc + 0x2f90) != 0) {
    piVar1 = (int *)(*(int *)(DAT_820c5fbc + 0x2f90) + 4);
    do {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = (int *)(piVar1[-1] + (int)piVar1);
    } while (piVar1 != (int *)(*(int *)(DAT_820c5fbc + 0x2f90) + *(int *)(DAT_820c5fbc + 0x2f88) + 4
                              ));
  }
  return (int *)0x0;
}


/* ==== FUN_8205f0f0 @ 8205f0f0 ==== */

void FUN_8205f0f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8205f3f8 @ 8205f3f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f3f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f4a8 @ 8205f4a8 ==== */

void FUN_8205f4a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205f608 @ 8205f608 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f608(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_820844c4();
  FUN_82084c68();
  iVar3 = DAT_820c5fbc;
  *(undefined1 *)(*(int *)(DAT_820c5fbc + 0x1ba8) + 0x8c) = 1;
  iVar4 = *(int *)(iVar3 + 0x1ba8);
  iVar3 = *(int *)(iVar4 + 0x170);
  FUN_8203ce18();
  if (1 < *(int *)(iVar3 + 0x10)) {
    FUN_8203bb40();
    FUN_8205c030();
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
    FUN_8205ec68(1);
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


/* ==== FUN_8205f9b0 @ 8205f9b0 ==== */

void FUN_8205f9b0(undefined1 *param_1)

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


/* ==== FUN_8205f9d8 @ 8205f9d8 ==== */

void FUN_8205f9d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8205fb90 @ 8205fb90 ==== */

void FUN_8205fb90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8205fc10 @ 8205fc10 ==== */

undefined4 FUN_8205fc10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8205fb90();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


/* ==== FUN_8205fc40 @ 8205fc40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fc40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fc88 @ 8205fc88 ==== */

void FUN_8205fc88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8205fe40 @ 8205fe40 ==== */

void FUN_8205fe40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82060130 @ 82060130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060468 @ 82060468 ==== */

void FUN_82060468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820606c8 @ 820606c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820606c8(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar2 = FUN_820844c4();
  fVar1 = DAT_82001c98;
  if (*(float *)(iVar2 + 0x1c) <= DAT_82001c98) {
    halt_baddata();
  }
  if (*(float *)(iVar2 + 0x20) <= DAT_82001c98) {
    halt_baddata();
  }
  iVar3 = FUN_82037de8();
  puVar6 = *(undefined4 **)(iVar3 + 0xc0);
  if (puVar6[1] == 0) {
LAB_82060740:
    puVar6[3] = *(int *)(iVar2 + 0xc) + 5000;
    FUN_820278e0();
    iVar3 = FUN_820a27b0();
    puVar6[1] = iVar3;
    if ((int)-(uint)(iVar3 == 0) < 0) {
      halt_baddata();
    }
  }
  else if ((int)puVar6[3] < *(int *)(iVar2 + 0xc)) {
    if (puVar6[1] != 0) {
      FUN_820a3430();
      puVar6[1] = 0;
    }
    goto LAB_82060740;
  }
  if (puVar6[2] != 0) {
    if (*(int *)(iVar2 + 8) <= (int)puVar6[4]) goto LAB_820607e0;
    if (puVar6[2] != 0) {
      FUN_820a3430();
      puVar6[2] = 0;
    }
  }
  puVar6[4] = *(int *)(iVar2 + 8) + 10000;
  FUN_820278e0();
  iVar3 = FUN_820a2888();
  puVar6[2] = iVar3;
  if ((int)-(uint)(iVar3 == 0) < 0) {
    halt_baddata();
  }
LAB_820607e0:
  FUN_820278e0();
  iVar3 = FUN_820a3d80();
  if ((int)-(uint)(iVar3 == 0) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_820a3e68();
  iVar3 = FUN_820a3990();
  FUN_820a39e0();
  if (*(int *)(iVar2 + 4) < 1) {
    FUN_820a2878();
    FUN_820a2938();
    uVar5 = *puVar6;
    iVar2 = FUN_820278e0();
    FUN_820a1d48(*(int *)(iVar2 + 0x68),uVar5);
    FUN_820278e0();
    FUN_8209e730();
    FUN_820278e0();
    FUN_8209e8d8();
    FUN_82060468();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (undefined4 *)(iVar3 + -4);
  iVar3 = 0;
  iVar2 = **(int **)(iVar2 + 0x10);
  if (0 < *(int *)(iVar2 + 0x18)) {
    puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x20) + -8);
    do {
      iVar3 = iVar3 + 1;
      puVar6[1] = puVar4[2];
      puVar6[2] = puVar4[3];
      puVar6[3] = fVar1;
      puVar6[4] = (uint)*(byte *)((int)puVar4 + 0x19) |
                  (puVar4[6] & 0xff) << 0x10 | puVar4[6] & 0xff00ff00;
      puVar6[5] = puVar4[4];
      puVar4 = puVar4 + 5;
      puVar6 = puVar6 + 6;
      *puVar6 = *puVar4;
    } while (iVar3 < *(int *)(iVar2 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_82060b10 @ 82060b10 ==== */

void FUN_82060b10(undefined4 *param_1)

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


/* ==== FUN_82060b50 @ 82060b50 ==== */

void FUN_82060b50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82060c10 @ 82060c10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060c10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060c90 @ 82060c90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060d48 @ 82060d48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060d48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060ea0 @ 82060ea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060ea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060eb0 @ 82060eb0 ==== */

void FUN_82060eb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82060f70 @ 82060f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060f70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061000 @ 82061000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061040 @ 82061040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820610f0 @ 820610f0 ==== */

void FUN_820610f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82061198 @ 82061198 ==== */

void FUN_82061198(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_82009e94;
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  param_1[0x401] = 0;
  param_1[0x403] = 0;
  *(undefined1 *)(param_1 + 0x402) = 0;
  param_1[0x404] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  return;
}


/* ==== FUN_82061200 @ 82061200 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061200(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061250 @ 82061250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061250(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820612b8 @ 820612b8 ==== */

void FUN_820612b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  *param_1 = &PTR_LAB_82009ea8;
  param_1[0x401] = 0;
  param_1[0x403] = 0;
  *(undefined1 *)(param_1 + 0x402) = 0;
  param_1[0x404] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  param_1[0x40b] = 0xffffffff;
  param_1[0x40c] = param_2;
  param_1[0x40d] = param_3;
  param_1[0x40e] = param_4;
  param_1[0x40f] = 0;
  return;
}


/* ==== FUN_82061338 @ 82061338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061338(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820613c8 @ 820613c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820613c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_820844d4();
  puVar1 = (undefined4 *)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(puVar1 + 0x402) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_82083d40();
  }
  (**(code **)*puVar1)(puVar1,(int)uVar2,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820615d8 @ 820615d8 ==== */

int FUN_820615d8(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x7ffffff < param_1 || (iVar1 = FUN_82035810(), iVar1 == 0)))) {
    iVar1 = FUN_82022618();
  }
  return iVar1;
}


/* ==== FUN_82061640 @ 82061640 ==== */

int FUN_82061640(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_82035810(), iVar1 == 0)) {
    iVar1 = FUN_82022618();
  }
  return iVar1;
}


/* ==== FUN_820616a8 @ 820616a8 ==== */

void FUN_820616a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82061788 @ 82061788 ==== */

void FUN_82061788(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82061878 @ 82061878 ==== */

void FUN_82061878(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820619b8 @ 820619b8 ==== */

void FUN_820619b8(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 5;
  if (0x7ffffffU - param_2 < uVar1) {
    FUN_820356b8();
    return;
  }
  if (uVar1 + param_2 <= (uint)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  FUN_82061788();
  return;
}


/* ==== FUN_82061a30 @ 82061a30 ==== */

void FUN_82061a30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== FUN_82061a80 @ 82061a80 ==== */

void FUN_82061a80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82061cc8 @ 82061cc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061cc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== caseD_0 @ 82061d3c ==== */

/* WARNING: Control flow encountered bad instruction data */

void switchD_82064338::caseD_0(int param_1)

{
  int unaff_r31;
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_82083d40();
  }
  *(int *)(unaff_r31 + 4) = *(int *)(unaff_r31 + 4) + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061da0 @ 82061da0 ==== */

void FUN_82061da0(void)

{
  uint auStack_39f [231];
  
  FUN_820844c4();
                    /* WARNING: Subroutine does not return */
  FUN_82084370(auStack_39f,0,0x7f);
}


/* ==== caseD_1c @ 82062070 ==== */

void switchD_82064338::caseD_1c(undefined4 *param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


/* ==== FUN_82062090 @ 82062090 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062090(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062128 @ 82062128 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062248 @ 82062248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820622e0 @ 820622e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820622e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062390 @ 82062390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820625c8 @ 820625c8 ==== */

undefined4 FUN_820625c8(int param_1)

{
  if ((((*(char *)(param_1 + 0x30) == '\x01') || (*(char *)(param_1 + 0x30) == '\x03')) &&
      (*(int *)(param_1 + 0x20) != 0)) && (4 < *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_82062600 @ 82062600 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062698 @ 82062698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820627b8 @ 820627b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820627b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062828 @ 82062828 ==== */

void FUN_82062828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820629c8 @ 820629c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820629c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062ac0 @ 82062ac0 ==== */

int FUN_82062ac0(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x4b0) & 1) == 0) {
    *param_2 = 0;
    return 0;
  }
  if ((1 < *(byte *)(param_1 + 0x30)) && (*(byte *)(param_1 + 0x30) < 4)) {
    iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x24);
  }
  *param_2 = 0;
  return 0;
}


/* ==== thunk_FUN_82062698 @ 82062b28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82062698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062b30 @ 82062b30 ==== */

int FUN_82062b30(int param_1,int *param_2)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x4b0) & 1) == 0) || (*(char *)(param_1 + 0x33) != '\x17')) {
    *param_2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x30) != '\x01') && (*(char *)(param_1 + 0x30) != '\x03')) {
      *param_2 = 0;
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    *param_2 = iVar1;
    if (iVar1 != 0) {
      return *(int *)(param_1 + 4) + *(int *)(param_1 + 0x18);
    }
  }
  return 0;
}


/* ==== FUN_82062ba0 @ 82062ba0 ==== */

void FUN_82062ba0(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 5;
    if (*(char *)(param_1 + 0x30) != '\x01') {
      return;
    }
    *(undefined1 *)(param_1 + 0x30) = 3;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 5;
  *(undefined4 *)(param_1 + 0x18) = 5;
  return;
}


/* ==== FUN_82062c00 @ 82062c00 ==== */

int FUN_82062c00(int param_1,int *param_2)

{
  if ((1 < *(byte *)(param_1 + 0x30)) && (*(byte *)(param_1 + 0x30) < 4)) {
    if (*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x2c)) {
      *param_2 = *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0x24);
      return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x24);
    }
  }
  *param_2 = 0;
  return 0;
}


/* ==== FUN_82062c48 @ 82062c48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062c48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062ce8 @ 82062ce8 ==== */

int FUN_82062ce8(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0x32) == '\0') &&
     (((*(char *)(param_1 + 0x30) == '\x01' || (*(char *)(param_1 + 0x30) == '\x03')) &&
      (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c))))) {
    uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x20);
    if (uVar1 < *(uint *)(param_1 + 0x20)) {
      uVar2 = uVar1;
    }
    *param_2 = uVar2;
    return *(int *)(param_1 + 4) + *(int *)(param_1 + 0x18);
  }
  *param_2 = 0;
  return 0;
}


/* ==== FUN_82062d50 @ 82062d50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062d50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062e50 @ 82062e50 ==== */

uint FUN_82062e50(int param_1)

{
  uint uVar1;
  int iVar2;
  uint auStack_10 [4];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    iVar2 = FUN_82062c00(param_1,(int *)auStack_10);
    if (iVar2 != 0) {
      uVar1 = 2;
    }
    iVar2 = FUN_82062ce8(param_1,auStack_10);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 4;
    }
    iVar2 = FUN_82062ac0(param_1,(int *)auStack_10);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 8;
    }
    iVar2 = FUN_82062b30(param_1,(int *)auStack_10);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 0x10;
    }
  }
  return uVar1;
}


/* ==== FUN_82062ef0 @ 82062ef0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062ef0(int param_1)

{
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x4b0) & 1) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062f10 @ 82062f10 ==== */

void FUN_82062f10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82062f98 @ 82062f98 ==== */

undefined4 FUN_82062f98(int param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x70c) < 0x303) {
    return *(undefined4 *)(param_1 + 0xcb4);
  }
  if (param_2 == 5) {
    return *(undefined4 *)(param_1 + 0xcbc);
  }
  return *(undefined4 *)(param_1 + 0xcb8);
}


/* ==== FUN_82062fc8 @ 82062fc8 ==== */

void FUN_82062fc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int aiStack_20 [3];
  undefined4 uStack_14;
  
  aiStack_20[0] = param_1 + 0x6a9;
  aiStack_20[2] = param_1 + 0x6c9;
  aiStack_20[1] = 0x20;
  uStack_14 = 0x20;
  if (*(ushort *)(param_1 + 0x70c) < 0x303) {
    pcVar1 = *(code **)(param_1 + 0xcb4);
  }
  else if (param_2 == 5) {
    pcVar1 = *(code **)(param_1 + 0xcbc);
  }
  else {
    pcVar1 = *(code **)(param_1 + 0xcb8);
  }
  (*pcVar1)(param_1 + 0x710,0x30,param_3,param_4,"master secret",2,aiStack_20);
  return;
}


/* ==== FUN_82063048 @ 82063048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063048(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820630e0 @ 820630e0 ==== */

void FUN_820630e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820631c0 @ 820631c0 ==== */

void FUN_820631c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82063298 @ 82063298 ==== */

void FUN_82063298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82063320 @ 82063320 ==== */

void FUN_82063320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820633a8 @ 820633a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820633a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063430 @ 82063430 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063430(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820634b0 @ 820634b0 ==== */

void FUN_820634b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82063538 @ 82063538 ==== */

void FUN_82063538(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820635c0 @ 820635c0 ==== */

void FUN_820635c0(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 0) {
    FUN_82062128();
    return;
  }
  if (param_4 != 0) {
    if (param_3 < 0x59a) {
      *(undefined1 *)(param_1 + 0xc) = 0;
      *param_1 = 1;
      return;
    }
    FUN_82062128();
    return;
  }
  FUN_82062128();
  return;
}


/* ==== FUN_82063628 @ 82063628 ==== */

void FUN_82063628(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82063738 @ 82063738 ==== */

void FUN_82063738(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}


/* ==== FUN_82063750 @ 82063750 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063750(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063870 @ 82063870 ==== */

void FUN_82063870(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82063900 @ 82063900 ==== */

void FUN_82063900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82063988 @ 82063988 ==== */

void FUN_82063988(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820639e0 @ 820639e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820639e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063a20 @ 82063a20 ==== */

void FUN_82063a20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar4;
  
  uVar2 = 0xd50;
  iVar1 = 0xd51;
  for (; iVar1 = iVar1 + -1, iVar1 != 0 && ((uint)param_1 & 3) != 0;
      param_1 = (undefined4 *)((int)param_1 + 1)) {
    uVar2 = uVar2 - 1;
    *(undefined1 *)param_1 = 0;
  }
  for (uVar4 = uVar2 >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  uVar4 = uVar2 >> 2 & 3;
  puVar3 = param_1;
  if (uVar4 != 0) {
    *param_1 = 0;
    puVar3 = param_1 + 1;
    if (uVar4 != 1) {
      *puVar3 = 0;
      puVar3 = param_1 + 2;
      if (uVar4 != 2) {
        *puVar3 = 0;
        puVar3 = param_1 + 3;
      }
    }
  }
  uVar2 = uVar2 & 3;
  if (uVar2 == 0) {
    return;
  }
  *(undefined1 *)puVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x820843fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar3 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82084404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar3 + 2) = 0;
  return;
}


/* ==== FUN_82063a30 @ 82063a30 ==== */

void FUN_82063a30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82063b10 @ 82063b10 ==== */

void FUN_82063b10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82063fa8 @ 82063fa8 ==== */

void FUN_82063fa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82064100 @ 82064100 ==== */

void FUN_82064100(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82064198 @ 82064198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064220 @ 82064220 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064220(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064278 @ 82064278 ==== */

void FUN_82064278(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined **)(param_1 + 8) = &UNK_8200a450;
  pbVar3 = &UNK_8200a571;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar4 = uVar4 << 7 | bVar1 & 0x7f;
  } while (0x7f < bVar1);
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar4 * 4 + iVar2;
  *(uint *)(uVar4 * 4 + iVar2) = uVar4 << 0x10;
  *(byte **)(param_1 + 8) = pbVar3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


/* ==== FUN_820642d8 @ 820642d8 ==== */

void FUN_820642d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820648c8 @ 820648c8 ==== */

void FUN_820648c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82064918 @ 82064918 ==== */

void FUN_82064918(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x244) = param_2;
  *(undefined4 *)(param_1 + 0x248) = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82064928 @ 82064928 ==== */

undefined1 FUN_82064928(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x120) = 0;
  return uVar1;
}


/* ==== FUN_82064940 @ 82064940 ==== */

void FUN_82064940(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined **)(param_1 + 8) = &UNK_8200aaa0;
  pbVar3 = &UNK_8200ac20;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar4 = uVar4 << 7 | bVar1 & 0x7f;
  } while (0x7f < bVar1);
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar4 * 4 + iVar2;
  *(uint *)(uVar4 * 4 + iVar2) = uVar4 << 0x10;
  *(byte **)(param_1 + 8) = pbVar3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


/* ==== FUN_820649a0 @ 820649a0 ==== */

void FUN_820649a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82064e80 @ 82064e80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064e80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064ed0 @ 82064ed0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064ed0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064f30 @ 82064f30 ==== */

void FUN_82064f30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82065060 @ 82065060 ==== */

void FUN_82065060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820651d8 @ 820651d8 ==== */

void FUN_820651d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820652a0 @ 820652a0 ==== */

code * FUN_820652a0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &UNK_8200ad7c;
  }
  return FUN_82062c48;
}


/* ==== FUN_820652c0 @ 820652c0 ==== */

void FUN_820652c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82065758 @ 82065758 ==== */

void FUN_82065758(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82065890 @ 82065890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820658e0 @ 820658e0 ==== */

void FUN_820658e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82065978 @ 82065978 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065978(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065a00 @ 82065a00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065a00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065a58 @ 82065a58 ==== */

void FUN_82065a58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82065eb0 @ 82065eb0 ==== */

void FUN_82065eb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== caseD_a @ 82065f40 ==== */

void switchD_8206832c::caseD_a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820660d8 @ 820660d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820660d8(void)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  int local_c0 [48];
  
  uVar20 = FUN_820844bc();
  puVar11 = (uint *)uVar20;
  uVar18 = *puVar11;
  uVar17 = puVar11[1];
  uVar15 = puVar11[2];
  uVar16 = puVar11[3];
  FUN_82069500((int)local_c0,0x10,(int)((ulonglong)uVar20 >> 0x20));
  iVar14 = 0;
  iVar19 = 4;
  do {
    uVar18 = ((uVar16 ^ uVar15) & uVar17 ^ uVar16) + *(int *)((int)&DAT_8200b100 + iVar14) +
             *(int *)((int)local_c0 + iVar14) + uVar18;
    piVar13 = (int *)((int)&DAT_8200b104 + iVar14);
    iVar8 = iVar14 + 4;
    uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar17;
    iVar9 = iVar14 + 8;
    piVar6 = (int *)((int)&DAT_8200b108 + iVar14);
    piVar7 = (int *)((int)&DAT_8200b10c + iVar14);
    iVar10 = iVar14 + 0xc;
    iVar14 = iVar14 + 0x10;
    uVar16 = ((uVar15 ^ uVar17) & uVar18 ^ uVar15) + *piVar13 + *(int *)((int)local_c0 + iVar8) +
             uVar16;
    uVar16 = (uVar16 * 0x1000 | uVar16 >> 0x14) + uVar18;
    uVar15 = ((uVar17 ^ uVar18) & uVar16 ^ uVar17) + *piVar6 + *(int *)((int)local_c0 + iVar9) +
             uVar15;
    uVar15 = (uVar15 * 0x20000 | uVar15 >> 0xf) + uVar16;
    uVar17 = ((uVar16 ^ uVar18) & uVar15 ^ uVar18) + *piVar7 + *(int *)((int)local_c0 + iVar10) +
             uVar17;
    uVar17 = (uVar17 * 0x400000 | uVar17 >> 10) + uVar15;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  iVar19 = 4;
  iVar14 = 0x10;
  piVar13 = (int *)&UNK_8200b13c;
  do {
    piVar6 = piVar13 + 1;
    pbVar2 = &UNK_8200b1f2 + iVar14;
    pbVar3 = &UNK_8200b1f1 + iVar14;
    piVar7 = piVar13 + 2;
    pbVar4 = &UNK_8200b1f3 + iVar14;
    piVar1 = piVar13 + 3;
    piVar13 = piVar13 + 4;
    uVar18 = local_c0[(byte)(&UNK_8200b1f0)[iVar14]] + ((uVar15 ^ uVar17) & uVar16 ^ uVar15) +
             *piVar6 + uVar18;
    iVar14 = iVar14 + 4;
    uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar17;
    uVar16 = local_c0[*pbVar3] + ((uVar17 ^ uVar18) & uVar15 ^ uVar17) + *piVar7 + uVar16;
    uVar16 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar18;
    uVar15 = ((uVar16 ^ uVar18) & uVar17 ^ uVar18) + local_c0[*pbVar2] + *piVar1 + uVar15;
    uVar15 = (uVar15 * 0x4000 | uVar15 >> 0x12) + uVar16;
    uVar12 = uVar16 ^ uVar15;
    uVar17 = local_c0[*pbVar4] + (uVar12 & uVar18 ^ uVar16) + *piVar13 + uVar17;
    uVar17 = (uVar17 * 0x100000 | uVar17 >> 0xc) + uVar15;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  iVar14 = 0x20;
  piVar13 = (int *)&UNK_8200b17c;
  iVar19 = 4;
  do {
    pbVar2 = &UNK_8200b1f0 + iVar14;
    piVar6 = piVar13 + 1;
    pbVar3 = &UNK_8200b1f1 + iVar14;
    piVar7 = piVar13 + 2;
    pbVar4 = &UNK_8200b1f2 + iVar14;
    piVar1 = piVar13 + 3;
    pbVar5 = &UNK_8200b1f3 + iVar14;
    piVar13 = piVar13 + 4;
    iVar14 = iVar14 + 4;
    uVar18 = local_c0[*pbVar2] + (uVar12 ^ uVar17) + *piVar6 + uVar18;
    uVar18 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar17;
    uVar16 = local_c0[*pbVar3] + (uVar15 ^ uVar17 ^ uVar18) + *piVar7 + uVar16;
    uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar18;
    uVar15 = local_c0[*pbVar4] + (uVar16 ^ uVar17 ^ uVar18) + *piVar1 + uVar15;
    uVar15 = (uVar15 * 0x10000 | uVar15 >> 0x10) + uVar16;
    uVar12 = uVar16 ^ uVar15;
    uVar17 = local_c0[*pbVar5] + (uVar12 ^ uVar18) + *piVar13 + uVar17;
    uVar17 = (uVar17 * 0x800000 | uVar17 >> 9) + uVar15;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  iVar14 = 0x30;
  piVar13 = (int *)&UNK_8200b1bc;
  iVar19 = 4;
  do {
    pbVar2 = &UNK_8200b1f0 + iVar14;
    pbVar3 = &UNK_8200b1f1 + iVar14;
    piVar6 = piVar13 + 1;
    pbVar4 = &UNK_8200b1f3 + iVar14;
    piVar7 = piVar13 + 2;
    pbVar5 = &UNK_8200b1f2 + iVar14;
    piVar1 = piVar13 + 3;
    piVar13 = piVar13 + 4;
    iVar14 = iVar14 + 4;
    uVar18 = local_c0[*pbVar2] + ((uVar17 | ~uVar16) ^ uVar15) + *piVar6 + uVar18;
    uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar17;
    uVar16 = local_c0[*pbVar3] + ((uVar18 | ~uVar15) ^ uVar17) + *piVar7 + uVar16;
    uVar16 = (uVar16 * 0x400 | uVar16 >> 0x16) + uVar18;
    uVar15 = local_c0[*pbVar5] + ((uVar16 | ~uVar17) ^ uVar18) + *piVar1 + uVar15;
    uVar15 = (uVar15 * 0x8000 | uVar15 >> 0x11) + uVar16;
    uVar17 = local_c0[*pbVar4] + ((uVar15 | ~uVar18) ^ uVar16) + *piVar13 + uVar17;
    uVar17 = (uVar17 * 0x200000 | uVar17 >> 0xb) + uVar15;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  *puVar11 = *puVar11 + uVar18;
  puVar11[1] = puVar11[1] + uVar17;
  puVar11[2] = puVar11[2] + uVar15;
  puVar11[3] = uVar16 + puVar11[3];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820665a8 @ 820665a8 ==== */

void FUN_820665a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82066748 @ 82066748 ==== */

void FUN_82066748(int param_1)

{
  *(undefined **)(param_1 + 0xcf4) = &UNK_8200d020;
  *(undefined **)(param_1 + 0xcf8) = &DAT_8200d030;
  *(undefined1 **)(param_1 + 0xcdc) = &LAB_82067728;
  *(undefined1 **)(param_1 + 0xce0) = &LAB_820672b8;
  return;
}


/* ==== FUN_82066780 @ 82066780 ==== */

void FUN_82066780(int param_1)

{
  *(undefined **)(param_1 + 0xce4) = &UNK_8200d068;
  *(undefined **)(param_1 + 0xce8) = &UNK_8200d078;
  *(undefined **)(param_1 + 0xcd0) = &DAT_8200d054;
  *(undefined **)(param_1 + 0xcd4) = &DAT_8200d040;
  return;
}


/* ==== FUN_820667b8 @ 820667b8 ==== */

void FUN_820667b8(int param_1)

{
  *(undefined **)(param_1 + 0xcec) = &UNK_8200d09c;
  *(undefined **)(param_1 + 0xcf0) = &UNK_8200d0ac;
  *(undefined **)(param_1 + 0xcc8) = &DAT_8200d088;
  *(undefined1 **)(param_1 + 0xcd8) = &LAB_820689d8;
  return;
}


/* ==== FUN_820667f0 @ 820667f0 ==== */

void FUN_820667f0(int param_1)

{
  *(undefined **)(param_1 + 0xcfc) = &UNK_8200d0dc;
  *(undefined **)(param_1 + 0xd00) = &UNK_8200d0ec;
  *(undefined **)(param_1 + 0xccc) = &DAT_8200d0bc;
  return;
}


/* ==== FUN_82066818 @ 82066818 ==== */

void FUN_82066818(int param_1)

{
  *(undefined **)(param_1 + 0xce4) = &UNK_8200d068;
  *(undefined **)(param_1 + 0xce8) = &UNK_8200d078;
  *(undefined **)(param_1 + 0xcc0) = &UNK_8200d110;
  *(undefined **)(param_1 + 0xcc4) = &UNK_8200d0fc;
  return;
}


/* ==== FUN_820669b8 @ 820669b8 ==== */

void FUN_820669b8(int param_1)

{
  *(undefined **)(param_1 + 0xd04) = &UNK_8200d124;
  *(undefined4 *)(param_1 + 0xd0c) = 0x8206b610;
  return;
}


/* ==== FUN_820669d8 @ 820669d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820669d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066a08 @ 82066a08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066a08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066a38 @ 82066a38 ==== */

void FUN_82066a38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82066b50 @ 82066b50 ==== */

void FUN_82066b50(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined **)(param_1 + 8) = &DAT_8200b3e0;
  pbVar3 = &DAT_8200b8b6;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar4 = uVar4 << 7 | bVar1 & 0x7f;
  } while (0x7f < bVar1);
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar4 * 4 + iVar2;
  *(uint *)(uVar4 * 4 + iVar2) = uVar4 << 0x10;
  *(byte **)(param_1 + 8) = pbVar3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


/* ==== FUN_82066bb0 @ 82066bb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066bb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066cd8 @ 82066cd8 ==== */

void FUN_82066cd8(int param_1)

{
  char *extraout_r4;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0xbd4) != 0) {
    iVar4 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0xbd0) + iVar4 + 0xc) = 0;
      iVar2 = *(int *)(param_1 + 0xbd0) + iVar4;
      iVar4 = iVar4 + 0x10;
      **(undefined1 **)(iVar2 + 4) = 0;
    } while (uVar3 < *(uint *)(param_1 + 0xbd4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(int *)(param_1 + 0x18) = param_1 + 0x24;
  *(int *)(param_1 + 0x1c) = param_1 + 0xa4;
  FUN_82066b50(param_1 + 0x18);
  if ((extraout_r4 == (char *)0x0) || (*extraout_r4 == '\0')) {
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  else {
    *(char **)(param_1 + 0x128) = extraout_r4;
  }
  return;
}


/* ==== FUN_82067cc0 @ 82067cc0 ==== */

void FUN_82067cc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82067e10 @ 82067e10 ==== */

void FUN_82067e10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82068000 @ 82068000 ==== */

void FUN_82068000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820681b0 @ 820681b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820681b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820690d0 @ 820690d0 ==== */

void FUN_820690d0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + -4);
  puVar2 = (undefined4 *)(param_3 + -4);
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* ==== FUN_82069110 @ 82069110 ==== */

void FUN_82069110(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_3 == 0) {
    return;
  }
  puVar3 = (undefined1 *)(param_1 + -1);
  puVar1 = (undefined4 *)(param_2 + -4);
  do {
    puVar1 = puVar1 + 1;
    uVar2 = *puVar1;
    puVar3[1] = (char)((uint)uVar2 >> 0x18);
    puVar3[2] = (char)((uint)uVar2 >> 0x10);
    puVar3[3] = (char)((uint)uVar2 >> 8);
    puVar3 = puVar3 + 4;
    *puVar3 = (char)uVar2;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


/* ==== FUN_82069150 @ 82069150 ==== */

void FUN_82069150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82069220 @ 82069220 ==== */

void FUN_82069220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820692e0 @ 820692e0 ==== */

void FUN_820692e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82069368 @ 82069368 ==== */

void FUN_82069368(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x82069374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== FUN_82069378 @ 82069378 ==== */

void FUN_82069378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82069428 @ 82069428 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069428(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069498 @ 82069498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069498(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069500 @ 82069500 ==== */

void FUN_82069500(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  if (param_2 == 0) {
    return;
  }
  puVar4 = (undefined4 *)(param_1 + -4);
  puVar5 = (undefined1 *)(param_3 + -1);
  do {
    puVar1 = puVar5 + 3;
    puVar2 = puVar5 + 1;
    puVar3 = puVar5 + 2;
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 1;
    *puVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar1),*puVar3),*puVar2);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* ==== FUN_82069540 @ 82069540 ==== */

void FUN_82069540(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_3 == 0) {
    return;
  }
  puVar3 = (undefined1 *)(param_1 + -1);
  puVar1 = (undefined4 *)(param_2 + -4);
  do {
    puVar1 = puVar1 + 1;
    uVar2 = *puVar1;
    puVar3[1] = (char)uVar2;
    puVar3[2] = (char)((uint)uVar2 >> 8);
    puVar3[3] = (char)((uint)uVar2 >> 0x10);
    puVar3 = puVar3 + 4;
    *puVar3 = (char)((uint)uVar2 >> 0x18);
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


/* ==== FUN_82069580 @ 82069580 ==== */

void FUN_82069580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82069d28 @ 82069d28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069d28(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int in_r7;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uStack_e4;
  undefined4 local_e0 [19];
  undefined4 uStack_94;
  undefined4 local_90 [36];
  
  uVar7 = FUN_820844c4();
  puVar4 = &uStack_94;
  iVar6 = 8;
  puVar5 = (undefined1 *)((int)((ulonglong)uVar7 >> 0x20) + -1);
  do {
    puVar1 = puVar5 + 3;
    puVar2 = puVar5 + 1;
    puVar3 = puVar5 + 2;
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 1;
    *puVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar1),*puVar3),*puVar2);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar4 = &uStack_e4;
  puVar5 = (undefined1 *)((int)uVar7 + -1);
  iVar6 = 3;
  do {
    puVar1 = puVar5 + 3;
    puVar2 = puVar5 + 1;
    puVar3 = puVar5 + 2;
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 1;
    *puVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar1),*puVar3),*puVar2);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (in_r7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_82083d40();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a188 @ 8206a188 ==== */

void FUN_8206a188(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8206a280 @ 8206a280 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a280(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a428 @ 8206a428 ==== */

void FUN_8206a428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8206a510 @ 8206a510 ==== */

void FUN_8206a510(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8206a5f0 @ 8206a5f0 ==== */

void FUN_8206a5f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8206ab10 @ 8206ab10 ==== */

void FUN_8206ab10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8206ac30 @ 8206ac30 ==== */

void FUN_8206ac30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8206ae80 @ 8206ae80 ==== */

void FUN_8206ae80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8206afd8 @ 8206afd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206afd8(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  uint local_c0 [48];
  
  uVar19 = FUN_820844b4();
  puVar7 = (uint *)((ulonglong)uVar19 >> 0x20);
  puVar16 = (uint *)uVar19;
  uVar2 = *puVar16;
  uVar3 = puVar16[1];
  uVar4 = puVar16[2];
  uVar5 = puVar16[3];
  uVar10 = puVar7[3];
  uVar11 = puVar7[2];
  uVar12 = puVar7[1];
  uVar14 = *puVar7;
  if (param_4 != 0) {
    uVar17 = uVar5 ^ uVar3;
    do {
      if (param_4 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_82083d40();
      }
      param_4 = param_4 - 0x10;
      uVar9 = uVar4 ^ uVar2;
      uVar6 = param_3[3];
      uVar14 = *param_3 ^ uVar14;
      uVar12 = param_3[1] ^ uVar12;
      uVar11 = param_3[2] ^ uVar11;
      uVar15 = uVar11 ^ uVar14;
      uVar13 = uVar6 ^ uVar10 ^ uVar12;
      iVar18 = 0;
      do {
        FUN_8206ae80();
        iVar18 = iVar18 + 4;
      } while (iVar18 < 0x24);
      uVar8 = uVar3 ^ uVar5 ^ uVar15 ^ uVar13 ^ uVar15 ^ uVar17 ^ uVar13 ^ uVar4;
      uVar10 = uVar11 ^ uVar13 ^ uVar12 ^ uVar6 ^ uVar10;
      uVar12 = uVar14 ^ uVar11 ^ uVar9 ^ uVar17 ^ uVar9 ^ uVar15 ^ uVar17 ^ uVar12;
      iVar18 = 4;
      local_c0[3] = uVar10 >> 0x1f | uVar8 << 1;
      local_c0[4] = uVar8 >> 0x1f | uVar12 << 1;
      local_c0[6] = uVar3 >> 0x1f | uVar14 << 1;
      local_c0[2] = uVar5 >> 0x1f | uVar10 << 1;
      local_c0[5] = uVar12 >> 0x1f | uVar3 << 1;
      puVar16 = local_c0 + 2;
      local_c0[7] = uVar14 >> 0x1f | uVar2 << 1;
      do {
        uVar10 = puVar16[-2];
        puVar1 = puVar16 + 1;
        puVar16[2] = ((uVar10 >> 5 ^ uVar10) >> 1 ^ uVar10) >> 1 ^ puVar16[2] ^ uVar10;
        puVar16 = puVar16 + 1;
        *puVar16 = ((uVar10 << 1 ^ uVar10) << 5 ^ uVar10) << 0x19 ^ *puVar1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      param_3 = param_3 + 4;
      uVar10 = local_c0[4];
      uVar11 = local_c0[5];
      uVar12 = local_c0[6];
      uVar14 = local_c0[7];
    } while (param_4 != 0);
  }
  *(char *)((int)puVar7 + 3) = (char)uVar14;
  *(char *)puVar7 = (char)(uVar14 >> 0x18);
  *(char *)((int)puVar7 + 1) = (char)(uVar14 >> 0x10);
  *(char *)((int)puVar7 + 2) = (char)(uVar14 >> 8);
  *(char *)(puVar7 + 1) = (char)(uVar12 >> 0x18);
  *(char *)((int)puVar7 + 5) = (char)(uVar12 >> 0x10);
  *(char *)((int)puVar7 + 6) = (char)(uVar12 >> 8);
  *(char *)((int)puVar7 + 7) = (char)uVar12;
  *(char *)(puVar7 + 2) = (char)(uVar11 >> 0x18);
  *(char *)((int)puVar7 + 9) = (char)(uVar11 >> 0x10);
  *(char *)((int)puVar7 + 10) = (char)(uVar11 >> 8);
  *(char *)((int)puVar7 + 0xb) = (char)uVar11;
  *(char *)(puVar7 + 3) = (char)(uVar10 >> 0x18);
  *(char *)((int)puVar7 + 0xd) = (char)(uVar10 >> 0x10);
  *(char *)((int)puVar7 + 0xe) = (char)(uVar10 >> 8);
  *(char *)((int)puVar7 + 0xf) = (char)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206b530 @ 8206b530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206b530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206b570 @ 8206b570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206b570(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  byte local_280 [4];
  undefined1 local_27c;
  undefined1 local_27b;
  undefined1 local_27a;
  undefined1 local_279;
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276;
  undefined1 local_275;
  undefined1 local_274;
  undefined1 local_273;
  undefined1 local_272;
  undefined1 local_271;
  undefined1 local_270;
  undefined1 local_26f;
  undefined1 local_26e;
  undefined1 local_26d;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined1 local_269;
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  undefined1 local_264;
  undefined1 local_263;
  undefined1 local_262;
  undefined1 local_261;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  uint local_248;
  uint local_244;
  undefined1 auStack_240 [576];
  
  uVar10 = FUN_820844d0();
  iVar9 = (int)((ulonglong)uVar10 >> 0x20);
  puVar1 = (undefined1 *)uVar10;
  FUN_8206f6b0((int)auStack_240,*(int *)(iVar9 + 0xf4),iVar9 + 4);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar1[3],puVar1[2]),puVar1[1]),*puVar1);
  uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar1[7],puVar1[6]),puVar1[5]),puVar1[4]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar1[0xb],puVar1[10]),puVar1[9]),puVar1[8]);
  if (param_5 != 0) {
    pbVar5 = local_280 + -(int)param_4;
    do {
      uVar3 = (param_3 & 0xffff00ff) << 8 | param_3 >> 8 & 0xff00ff;
      uVar2 = param_3 + 1 >> 8 & 0xff00ff | (param_3 + 1 & 0xffff00ff) << 8;
      local_248 = uVar3 << 0x10 | uVar3 >> 0x10;
      local_244 = uVar2 << 0x10 | uVar2 >> 0x10;
      local_260 = uVar8;
      local_25c = uVar8;
      local_258 = uVar7;
      local_254 = uVar7;
      local_250 = uVar6;
      local_24c = uVar6;
      FUN_8206f170();
      FUN_8206f710();
      FUN_8206f170();
      local_280[0] = (byte)local_260;
      local_280[1] = (char)((uint)local_260 >> 8);
      local_280[2] = (char)((uint)local_260 >> 0x10);
      local_27b = (char)((uint)local_258 >> 8);
      local_280[3] = (char)((uint)local_260 >> 0x18);
      local_279 = (char)((uint)local_258 >> 0x18);
      local_278 = (char)local_250;
      local_27a = (char)((uint)local_258 >> 0x10);
      local_27c = (char)local_258;
      local_275 = (char)((uint)local_250 >> 0x18);
      local_274 = (char)local_248;
      local_273 = (char)(local_248 >> 8);
      local_270 = (char)local_25c;
      local_26f = (char)((uint)local_25c >> 8);
      local_277 = (char)((uint)local_250 >> 8);
      local_276 = (char)((uint)local_250 >> 0x10);
      local_272 = (char)(local_248 >> 0x10);
      local_271 = (char)(local_248 >> 0x18);
      local_26e = (char)((uint)local_25c >> 0x10);
      local_26d = (char)((uint)local_25c >> 0x18);
      local_26c = (char)local_254;
      local_26b = (char)((uint)local_254 >> 8);
      local_26a = (char)((uint)local_254 >> 0x10);
      local_269 = (char)((uint)local_254 >> 0x18);
      local_267 = (char)((uint)local_24c >> 8);
      local_268 = (char)local_24c;
      local_264 = (char)local_244;
      local_265 = (char)((uint)local_24c >> 0x18);
      local_266 = (char)((uint)local_24c >> 0x10);
      local_262 = (char)(local_244 >> 0x10);
      local_263 = (char)(local_244 >> 8);
      local_261 = (char)(local_244 >> 0x18);
      if (param_5 < 0x21) {
        if (param_5 == 0) {
          halt_baddata();
        }
        iVar9 = -(int)param_4;
        do {
          *param_4 = param_4[(int)(local_280 + iVar9)] ^ *param_4;
          param_4 = param_4 + 1;
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        halt_baddata();
      }
      iVar9 = 0x20;
      pbVar4 = param_4;
      do {
        *pbVar4 = pbVar4[(int)pbVar5] ^ *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      param_5 = param_5 - 0x20;
      param_4 = param_4 + 0x20;
      pbVar5 = pbVar5 + -0x20;
      param_3 = param_3 + 2;
    } while (param_5 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206b848 @ 8206b848 ==== */

void FUN_8206b848(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8206b920 @ 8206b920 ==== */

void FUN_8206b920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8206ba80 @ 8206ba80 ==== */

void FUN_8206ba80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8206bba0 @ 8206bba0 ==== */

void FUN_8206bba0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8206bd38 @ 8206bd38 ==== */

void FUN_8206bd38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8206c960 @ 8206c960 ==== */

void FUN_8206c960(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8206cfb8 @ 8206cfb8 ==== */

void FUN_8206cfb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8206d0d0 @ 8206d0d0 ==== */

void FUN_8206d0d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8206d2f8 @ 8206d2f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206d2f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206d338 @ 8206d338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206d338(void)

{
  int iVar1;
  undefined1 *puVar2;
  int in_r6;
  undefined8 uVar3;
  undefined1 auStack_260 [608];
  
  uVar3 = FUN_820844c0();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  puVar2 = (undefined1 *)uVar3;
  FUN_8206f6b0((int)auStack_260,*(int *)(iVar1 + 0xf4),iVar1 + 4);
  if (in_r6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_82083d40();
  }
  *puVar2 = *puVar2;
  puVar2[1] = puVar2[1];
  puVar2[2] = puVar2[2];
  puVar2[3] = puVar2[3];
  puVar2[5] = puVar2[5];
  puVar2[6] = puVar2[6];
  puVar2[7] = puVar2[7];
  puVar2[4] = puVar2[4];
  puVar2[9] = puVar2[9];
  puVar2[10] = puVar2[10];
  puVar2[0xb] = puVar2[0xb];
  puVar2[8] = puVar2[8];
  puVar2[0xc] = puVar2[0xc];
  puVar2[0xd] = puVar2[0xd];
  puVar2[0xe] = puVar2[0xe];
  puVar2[0xf] = puVar2[0xf];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206d7b0 @ 8206d7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206d7b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_260 [608];
  
  uVar8 = FUN_820844c0();
  iVar6 = (int)((ulonglong)uVar8 >> 0x20);
  puVar1 = (undefined1 *)uVar8;
  FUN_8206f6b0((int)auStack_260,*(int *)(iVar6 + 0xf4),iVar6 + 4);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[3],puVar1[2]),puVar1[1]),*puVar1);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar1[7],puVar1[6]),puVar1[5]),puVar1[4]);
  uVar3 = CONCAT31(CONCAT21(CONCAT11(puVar1[0xb],puVar1[10]),puVar1[9]),puVar1[8]);
  uVar2 = CONCAT31(CONCAT21(CONCAT11(puVar1[0xf],puVar1[0xe]),puVar1[0xd]),puVar1[0xc]);
  if (param_4 != 0) {
    puVar7 = (undefined1 *)(param_3 + -1);
    iVar6 = (param_4 - 1U >> 4) + 1;
    do {
      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar7[4],puVar7[3]),puVar7[2]),puVar7[1]) ^ uVar5;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar7[8],puVar7[7]),puVar7[6]),puVar7[5]) ^ uVar4;
      uVar3 = CONCAT31(CONCAT21(CONCAT11(puVar7[0xc],puVar7[0xb]),puVar7[10]),puVar7[9]) ^ uVar3;
      uVar2 = CONCAT31(CONCAT21(CONCAT11(puVar7[0x10],puVar7[0xf]),puVar7[0xe]),puVar7[0xd]) ^ uVar2
      ;
      FUN_8206f170();
      FUN_8206f710();
      FUN_8206f170();
      iVar6 = iVar6 + -1;
      puVar7[4] = (char)(uVar5 >> 0x18);
      puVar7[2] = (char)(uVar5 >> 8);
      puVar7[3] = (char)(uVar5 >> 0x10);
      puVar7[1] = (char)uVar5;
      puVar7[7] = (char)(uVar4 >> 0x10);
      puVar7[8] = (char)(uVar4 >> 0x18);
      puVar7[6] = (char)(uVar4 >> 8);
      puVar7[5] = (char)uVar4;
      puVar7[10] = (char)(uVar3 >> 8);
      puVar7[0xb] = (char)(uVar3 >> 0x10);
      puVar7[0xc] = (char)(uVar3 >> 0x18);
      puVar7[9] = (char)uVar3;
      puVar7[0xd] = (char)uVar2;
      puVar7[0xe] = (char)(uVar2 >> 8);
      puVar7[0xf] = (char)(uVar2 >> 0x10);
      puVar7 = puVar7 + 0x10;
      *puVar7 = (char)(uVar2 >> 0x18);
    } while (iVar6 != 0);
  }
  *puVar1 = (char)uVar5;
  puVar1[1] = (char)(uVar5 >> 8);
  puVar1[2] = (char)(uVar5 >> 0x10);
  puVar1[3] = (char)(uVar5 >> 0x18);
  puVar1[4] = (char)uVar4;
  puVar1[6] = (char)(uVar4 >> 0x10);
  puVar1[7] = (char)(uVar4 >> 0x18);
  puVar1[5] = (char)(uVar4 >> 8);
  puVar1[8] = (char)uVar3;
  puVar1[9] = (char)(uVar3 >> 8);
  puVar1[10] = (char)(uVar3 >> 0x10);
  puVar1[0xb] = (char)(uVar3 >> 0x18);
  puVar1[0xc] = (char)uVar2;
  puVar1[0xd] = (char)(uVar2 >> 8);
  puVar1[0xe] = (char)(uVar2 >> 0x10);
  puVar1[0xf] = (char)(uVar2 >> 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206da78 @ 8206da78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206da78(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,char *param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int aiStack_240 [72];
  byte abStack_120 [288];
  
  uVar7 = FUN_820844d4();
  if ((int)uVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = 0;
  cVar1 = *param_6;
  while (cVar1 != '\0') {
    iVar5 = iVar5 + 1;
    cVar1 = param_6[iVar5];
  }
  uVar6 = *(uint *)(param_3 + 4) >> 8 & 0x7f;
  FUN_82069220();
  FUN_820692e0();
  FUN_82069368(aiStack_240);
  for (iVar5 = param_7; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_82069368(aiStack_240);
  }
  do {
    pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
    FUN_82069378();
    FUN_820692e0();
    FUN_82069368(aiStack_240);
    FUN_82069368(aiStack_240);
    for (iVar5 = param_7; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_82069368(aiStack_240);
    }
    FUN_82069378();
    uVar2 = 0;
    if (uVar6 != 0) {
      pbVar3 = pbVar4;
      do {
        if ((uint)uVar7 <= uVar2) break;
        uVar2 = uVar2 + 1;
        *pbVar3 = pbVar3[(int)(abStack_120 + -(int)pbVar4)] ^ *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (uVar2 < uVar6);
    }
    iVar5 = (uint)uVar7 - uVar2;
    uVar7 = CONCAT44(pbVar4 + uVar2,iVar5);
    if (iVar5 == 0) {
      halt_baddata();
    }
    FUN_820692e0();
    FUN_82069368(aiStack_240);
  } while( true );
}


/* ==== FUN_8206de90 @ 8206de90 ==== */

undefined * FUN_8206de90(void)

{
  return &LAB_82070fc0;
}


/* ==== FUN_8206dea0 @ 8206dea0 ==== */

undefined4 FUN_8206dea0(void)

{
  return 0x82071038;
}


/* ==== FUN_8206deb0 @ 8206deb0 ==== */

void FUN_8206deb0(uint *param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_82084370(param_1,0,0x188);
}


/* ==== FUN_8206dec0 @ 8206dec0 ==== */

void FUN_8206dec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8206df70 @ 8206df70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206df70(void)

{
  FUN_820844d4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206e0a8 @ 8206e0a8 ==== */

void FUN_8206e0a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8206e178 @ 8206e178 ==== */

void FUN_8206e178(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*param_1 >> 4 ^ *param_2) & 0xf0f0f0f;
  uVar2 = uVar1 ^ *param_2;
  uVar3 = uVar1 << 4 ^ *param_1;
  uVar1 = uVar3 >> 0x10 ^ uVar2;
  uVar2 = uVar1 & 0xffff ^ uVar2;
  uVar3 = uVar1 << 0x10 ^ uVar3;
  uVar1 = (uVar2 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar1 << 2 ^ uVar2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar1 << 8 ^ uVar2;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 << 1 ^ uVar3;
  *param_2 = uVar1 ^ uVar2;
  return;
}


/* ==== FUN_8206e220 @ 8206e220 ==== */

void FUN_8206e220(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*param_1 >> 1 ^ *param_2) & 0x55555555;
  uVar2 = uVar1 ^ *param_2;
  uVar3 = uVar1 << 1 ^ *param_1;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar1 << 8 ^ uVar2;
  uVar1 = (uVar2 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar1 << 2 ^ uVar2;
  uVar1 = uVar3 >> 0x10 ^ uVar2;
  uVar2 = uVar1 & 0xffff ^ uVar2;
  uVar3 = uVar1 << 0x10 ^ uVar3;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 << 4 ^ uVar3;
  *param_2 = uVar1 ^ uVar2;
  return;
}


/* ==== FUN_8206e2c8 @ 8206e2c8 ==== */

void FUN_8206e2c8(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_c [3];
  
  local_c[0] = *param_2;
  local_10 = param_2[1];
  FUN_8206e178(local_c,&local_10);
  puVar4 = (uint *)(param_1 + -4);
  uVar3 = 0;
  iVar7 = 0x10;
  uVar5 = (local_c[0] >> 0xc & 0xf0 | local_10 & 0xff00) >> 4 |
          ((local_10 & 0xff) << 0x10 | local_c[0] & 0xff00) << 4;
  uVar6 = ((local_10 & 0xff0000 | local_c[0] >> 8 & 0xf000 | local_c[0] & 0xff000fff) >> 8 |
          local_10 & 0xff00000f) >> 4;
  do {
    if ((1 << (uVar3 & 0x3f) & 0x8103U) == 0) {
      uVar2 = uVar6 >> 0x1a;
      uVar1 = uVar5 >> 0x1a;
      uVar6 = uVar6 << 2;
      uVar5 = uVar5 << 2;
    }
    else {
      uVar2 = uVar6 >> 0x1b;
      uVar1 = uVar5 >> 0x1b;
      uVar6 = uVar6 << 1;
      uVar5 = uVar5 << 1;
    }
    uVar6 = uVar2 | uVar6 & 0xfffffff;
    uVar5 = uVar1 | uVar5 & 0xfffffff;
    puVar4[1] = uVar6;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


/* ==== FUN_8206e3f8 @ 8206e3f8 ==== */

void FUN_8206e3f8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + -4);
  puVar2 = (undefined4 *)(param_1 + 0x84);
  iVar4 = 8;
  do {
    uVar1 = puVar3[1];
    puVar3[1] = puVar2[-3];
    puVar2[-3] = uVar1;
    uVar1 = puVar3[2];
    puVar3 = puVar3 + 2;
    *puVar3 = puVar2[-2];
    puVar2 = puVar2 + -2;
    *puVar2 = uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


/* ==== FUN_8206e430 @ 8206e430 ==== */

void FUN_8206e430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8206e4e0 @ 8206e4e0 ==== */

void FUN_8206e4e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8206e578 @ 8206e578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206e578(void)

{
  FUN_820844c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206ea78 @ 8206ea78 ==== */

void FUN_8206ea78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8206eb98 @ 8206eb98 ==== */

void FUN_8206eb98(int *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  param_2 = param_2 << 4;
  if (param_2 != 0) {
    do {
      uVar1 = *param_3;
      *param_1 = (uVar1 & 0x11111111) * 0xf;
      param_1[1] = (uVar1 >> 1 & 0x11111111) * 0xf;
      param_1[2] = (uVar1 >> 2 & 0x11111111) * 0xf;
      param_1[3] = (uVar1 >> 3 & 0x11111111) * 0xf;
      uVar1 = param_3[1];
      param_3 = param_3 + 2;
      param_1[4] = (uVar1 & 0x11111111) * 0xf;
      param_1[5] = (uVar1 >> 1 & 0x11111111) * 0xf;
      param_1 = param_1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}


/* ==== FUN_8206ec48 @ 8206ec48 ==== */

void FUN_8206ec48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8206ef48 @ 8206ef48 ==== */

void FUN_8206ef48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8206f170 @ 8206f170 ==== */

void FUN_8206f170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8206f4c0 @ 8206f4c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206f4c0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uStack_254;
  uint auStack_250 [7];
  uint uStack_234;
  uint auStack_230 [140];
  
  uVar15 = FUN_820844d4();
  if (param_3 == 0x10) {
    iVar9 = 10;
  }
  else if (param_3 == 0x18) {
    iVar9 = 0xc;
  }
  else {
    if (param_3 != 0x20) {
      halt_baddata();
    }
    iVar9 = 0xe;
  }
  iVar9 = iVar9 + 1;
  param_3 = param_3 >> 2;
  uVar8 = 0;
  uVar14 = iVar9 * 4;
  if (param_3 != 0) {
    puVar5 = (undefined1 *)((int)uVar15 + -1);
    puVar4 = &uStack_234;
    uVar12 = param_3;
    do {
      puVar1 = puVar5 + 3;
      puVar2 = puVar5 + 1;
      puVar3 = puVar5 + 2;
      puVar5 = puVar5 + 4;
      uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar1),*puVar3),*puVar2);
      puVar4[1] = uVar8;
      puVar4 = puVar4 + 2;
      *puVar4 = uVar8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = 0;
  if (param_3 < uVar14) {
    pbVar11 = &UNK_8200d180;
    puVar7 = auStack_230 + param_3 * 2 + 1;
    puVar4 = auStack_230;
    iVar10 = uVar14 - param_3;
    do {
      if (uVar12 == 0) {
        puVar6 = &uStack_254;
        iVar13 = 8;
        do {
          puVar6 = puVar6 + 1;
          *puVar6 = uVar8 << 0x18 | uVar8 >> 8;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        FUN_8206f170();
        FUN_8206ef48();
        FUN_8206f170();
        uVar8 = *pbVar11 ^ auStack_250[0];
      }
      else if ((6 < param_3) && (uVar12 == 4)) {
        puVar6 = &uStack_254;
        iVar13 = 8;
        do {
          puVar6 = puVar6 + 1;
          *puVar6 = uVar8;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        FUN_8206f170();
        FUN_8206ef48();
        FUN_8206f170();
        uVar8 = auStack_250[0];
      }
      uVar12 = uVar12 + 1;
      uVar8 = *puVar4 ^ uVar8;
      puVar7[-1] = uVar8;
      *puVar7 = uVar8;
      if (uVar12 == param_3) {
        uVar12 = 0;
        pbVar11 = pbVar11 + 1;
      }
      iVar10 = iVar10 + -1;
      puVar4 = puVar4 + 2;
      puVar7 = puVar7 + 2;
    } while (iVar10 != 0);
  }
  if (iVar9 != 0) {
    iVar10 = (uVar14 - 1 >> 2) + 1;
    do {
      FUN_8206f170();
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (iVar9 != 0) {
      puVar4 = &uStack_234;
      puVar7 = (uint *)((int)((ulonglong)uVar15 >> 0x20) + -4);
      do {
        puVar6 = puVar4 + 1;
        puVar4 = puVar4 + 2;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar6 & 0x55555555 | *puVar4 & 0xaaaaaaaa;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206f6b0 @ 8206f6b0 ==== */

void FUN_8206f6b0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = (param_2 + 1) * 4;
  if (iVar4 == 0) {
    return;
  }
  puVar3 = (uint *)(param_1 + -4);
  puVar1 = (uint *)(param_3 + -4);
  do {
    puVar1 = puVar1 + 1;
    uVar2 = *puVar1;
    puVar3[1] = (uVar2 & 0x55555555) << 1 | uVar2 & 0x55555555;
    puVar3 = puVar3 + 2;
    *puVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | uVar2 & 0xaaaaaaaa;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


/* ==== FUN_8206f710 @ 8206f710 ==== */

void FUN_8206f710(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8206faa8 @ 8206faa8 ==== */

void FUN_8206faa8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ==== FUN_8206fab0 @ 8206fab0 ==== */

void FUN_8206fab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8206fcc8 @ 8206fcc8 ==== */

void FUN_8206fcc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8206fd88 @ 8206fd88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206fd88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206fdf8 @ 8206fdf8 ==== */

void FUN_8206fdf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82070000 @ 82070000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82070000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820700c0 @ 820700c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820700c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82070138 @ 82070138 ==== */

void FUN_82070138(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82070268 @ 82070268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82070268(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  puVar9 = (uint *)FUN_820844c0();
  uVar14 = puVar9[5];
  uVar13 = puVar9[7];
  uVar1 = uVar14 << 0x18 | uVar14 >> 8;
  uVar12 = puVar9[3];
  uVar2 = uVar13 << 0x18 | uVar13 >> 8;
  uVar11 = *puVar9;
  uVar3 = uVar12 << 0x18 | uVar12 >> 8;
  uVar10 = puVar9[6];
  uVar22 = puVar9[1];
  uVar4 = uVar11 << 0x18 | uVar11 >> 8;
  uVar20 = puVar9[2];
  uVar19 = puVar9[4];
  uVar5 = uVar10 << 0x18 | uVar10 >> 8;
  uVar6 = uVar22 << 0x18 | uVar22 >> 8;
  uVar7 = uVar20 << 0x18 | uVar20 >> 8;
  uVar18 = uVar2 ^ uVar5;
  uVar17 = uVar5 ^ uVar1 ^ uVar6 ^ uVar13 ^ uVar14 ^ uVar22;
  uVar23 = uVar2 ^ uVar1 ^ uVar3 ^ uVar4 ^ uVar13 ^ uVar10 ^ uVar14 ^ uVar12 ^ uVar22 ^ uVar11;
  uVar16 = uVar18 ^ uVar7 ^ uVar10 ^ uVar20 ^ uVar11;
  uVar15 = uVar1 ^ uVar4 ^ uVar10 ^ uVar14 ^ uVar11;
  uVar8 = uVar19 << 0x18 | uVar19 >> 8;
  puVar9[1] = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar2 ^ uVar5 ^ uVar1 ^ uVar6 ^ uVar4 ^ uVar14 ^
              uVar11;
  *puVar9 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar2 ^ uVar1 ^ uVar4 ^ uVar13 ^ uVar10 ^ uVar14;
  puVar9[2] = (uVar16 << 0x10 | uVar16 >> 0x10) ^ uVar2 ^ uVar5 ^ uVar7 ^ uVar6 ^ uVar10 ^ uVar22 ^
              uVar11;
  uVar17 = uVar5 ^ uVar1 ^ uVar8 ^ uVar6 ^ uVar13 ^ uVar14 ^ uVar19 ^ uVar20 ^ uVar22;
  uVar21 = uVar18 ^ uVar1 ^ uVar7 ^ uVar10 ^ uVar14 ^ uVar12 ^ uVar20;
  uVar16 = uVar18 ^ uVar3 ^ uVar13 ^ uVar10 ^ uVar19 ^ uVar12;
  uVar15 = uVar2 ^ uVar8 ^ uVar13 ^ uVar14 ^ uVar19;
  puVar9[3] = (uVar23 << 0x10 | uVar23 >> 0x10) ^ uVar1 ^ uVar3 ^ uVar7 ^ uVar4 ^ uVar10 ^ uVar14 ^
              uVar20 ^ uVar22 ^ uVar11;
  puVar9[4] = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar2 ^ uVar5 ^ uVar1 ^ uVar8 ^ uVar3 ^ uVar6 ^
              uVar14 ^ uVar12 ^ uVar20 ^ uVar22;
  puVar9[5] = (uVar21 << 0x10 | uVar21 >> 0x10) ^ uVar2 ^ uVar5 ^ uVar1 ^ uVar8 ^ uVar7 ^ uVar10 ^
              uVar19 ^ uVar12 ^ uVar20;
  puVar9[6] = (uVar16 << 0x10 | uVar16 >> 0x10) ^ uVar2 ^ uVar5 ^ uVar1 ^ uVar3 ^ uVar13 ^ uVar14 ^
              uVar19 ^ uVar12;
  puVar9[7] = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar2 ^ uVar5 ^ uVar8 ^ uVar10 ^ uVar14 ^ uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820704a0 @ 820704a0 ==== */

void FUN_820704a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82070630 @ 82070630 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82070630(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint *in_r6;
  uint in_r8;
  uint uVar4;
  undefined *puVar5;
  undefined1 auStack_2c0 [4];
  undefined4 uStack_2bc;
  undefined1 auStack_270 [624];
  
  puVar1 = (uint *)FUN_820844d4();
  uVar4 = *in_r6;
  if ((*puVar1 >> (uVar4 & 0x3f) & 1) != 0) {
    if (uVar4 == 0x17) {
      puVar5 = &UNK_8200da34;
    }
    else if (uVar4 == 0x18) {
      puVar5 = &UNK_8200dadc;
    }
    else {
      if (uVar4 != 0x19) {
        halt_baddata();
      }
      puVar5 = &UNK_8200dbc0;
    }
    if (((in_r8 & 1) == 0) && (in_r6[2] == *(uint *)(puVar5 + 0x10))) {
      FUN_82073f90(auStack_2c0,*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 8));
      uVar2 = FUN_82073f40(uStack_2bc);
      iVar3 = FUN_82073dd0();
      if ((iVar3 != 0) &&
         ((iVar3 = FUN_82073dd0(), iVar3 != 0 && (iVar3 = FUN_82073d90(auStack_270), iVar3 == 0))))
      {
        FUN_82073cd0(auStack_270,auStack_2c0,uVar2);
                    /* WARNING: Subroutine does not return */
        FUN_82083d40();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820708c8 @ 820708c8 ==== */

void FUN_820708c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82070a48 @ 82070a48 ==== */

void FUN_82070a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82070c70 @ 82070c70 ==== */

void FUN_82070c70(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar2 = param_2 - (int)param_3;
  iVar1 = param_1 - (int)param_3;
  iVar6 = 9;
  do {
    uVar4 = *(int *)(iVar2 + (int)param_3) + *param_3 + uVar3;
    uVar3 = uVar4 >> 0x1e;
    *(uint *)(iVar1 + (int)param_3) = uVar4 & 0x3fffffff;
    param_3 = param_3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar4 = uVar4 >> 0x10;
  iVar1 = 9;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar4 * -0x40;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar4 * -0x1000;
  puVar5 = (uint *)(param_1 + -4);
  *(uint *)(param_1 + 0x1c) = uVar4 * 0x4000 + *(int *)(param_1 + 0x1c);
  do {
    uVar3 = puVar5[1] + uVar4;
    uVar4 = (int)uVar3 >> 0x1e;
    puVar5 = puVar5 + 1;
    *puVar5 = uVar3 & 0x3fffffff;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* ==== FUN_82070d10 @ 82070d10 ==== */

void FUN_82070d10(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*param_2 - *param_3) - 2;
  iVar4 = 9;
  *param_1 = uVar3 & 0x3fffffff;
  uVar3 = (((int)uVar3 >> 0x1e) - param_3[1]) + param_2[1];
  param_1[1] = uVar3 & 0x3fffffff;
  uVar3 = (((int)uVar3 >> 0x1e) - param_3[2]) + param_2[2];
  param_1[2] = uVar3 & 0x3fffffff;
  uVar3 = (((int)uVar3 >> 0x1e) - param_3[3]) + param_2[3] + 0x80;
  param_1[3] = uVar3 & 0x3fffffff;
  uVar3 = (((int)uVar3 >> 0x1e) - param_3[4]) + param_2[4];
  param_1[4] = uVar3 & 0x3fffffff;
  uVar3 = (((int)uVar3 >> 0x1e) - param_3[5]) + param_2[5];
  param_1[5] = uVar3 & 0x3fffffff;
  uVar3 = (((int)uVar3 >> 0x1e) - param_3[6]) + param_2[6] + 0x2000;
  param_1[6] = uVar3 & 0x3fffffff;
  uVar3 = ((((int)uVar3 >> 0x1e) - param_3[7]) + param_2[7]) - 0x8000;
  param_1[7] = uVar3 & 0x3fffffff;
  uVar1 = (((int)uVar3 >> 0x1e) - param_3[8]) + param_2[8] + 0x20000;
  uVar3 = uVar1 >> 0x10;
  param_1[8] = uVar1 & 0xffff;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[3] = param_1[3] + uVar3 * -0x40;
  param_1[6] = param_1[6] + uVar3 * -0x1000;
  puVar2 = param_1 + -1;
  param_1[7] = uVar3 * 0x4000 + param_1[7];
  do {
    uVar1 = puVar2[1] + uVar3;
    uVar3 = (int)uVar1 >> 0x1e;
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1 & 0x3fffffff;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


/* ==== FUN_82070e80 @ 82070e80 ==== */

void FUN_82070e80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82071030 @ 82071030 ==== */

void FUN_82071030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820711e0 @ 820711e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820711e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82071268 @ 82071268 ==== */

void FUN_82071268(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820713a8 @ 820713a8 ==== */

void FUN_820713a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820714f8 @ 820714f8 ==== */

void FUN_820714f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820716a8 @ 820716a8 ==== */

void FUN_820716a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82071828 @ 82071828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82071828(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82071a40 @ 82071a40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82071a40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82071b10 @ 82071b10 ==== */

void FUN_82071b10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82071c70 @ 82071c70 ==== */

void FUN_82071c70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82071e58 @ 82071e58 ==== */

void FUN_82071e58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82071ec0 @ 82071ec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82071ec0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82071f08 @ 82071f08 ==== */

void FUN_82071f08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82072010 @ 82072010 ==== */

void FUN_82072010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820724b0 @ 820724b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820724b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82072570 @ 82072570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82072570(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82072630 @ 82072630 ==== */

void FUN_82072630(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  uVar2 = 0;
  param_2 = param_2 - (int)param_3;
  iVar1 = param_1 - (int)param_3;
  iVar5 = 9;
  do {
    uVar3 = *(int *)(param_2 + (int)param_3) + *param_3 + uVar2;
    uVar2 = uVar3 >> 0x1e;
    *(uint *)(iVar1 + (int)param_3) = uVar3 & 0x3fffffff;
    param_3 = param_3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = (uVar3 >> 0xf) * 0x13;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x7fff;
  iVar1 = 9;
  puVar4 = (uint *)(param_1 + -4);
  do {
    uVar3 = puVar4[1] + uVar2;
    uVar2 = uVar3 >> 0x1e;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar3 & 0x3fffffff;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* ==== FUN_820726a8 @ 820726a8 ==== */

void FUN_820726a8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  iVar2 = -0x26;
  param_2 = param_2 - (int)param_3;
  iVar1 = param_1 - (int)param_3;
  iVar6 = 9;
  do {
    uVar3 = (*(int *)(param_2 + (int)param_3) - *param_3) + iVar2;
    iVar2 = (int)uVar3 >> 0x1e;
    *(uint *)(iVar1 + (int)param_3) = uVar3 & 0x3fffffff;
    param_3 = param_3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x7fff;
  puVar5 = (uint *)(param_1 + -4);
  uVar3 = (uVar3 + 0x10000 >> 0xf) * 0x13;
  iVar1 = 9;
  do {
    uVar4 = puVar5[1] + uVar3;
    uVar3 = uVar4 >> 0x1e;
    puVar5 = puVar5 + 1;
    *puVar5 = uVar4 & 0x3fffffff;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* ==== FUN_82072768 @ 82072768 ==== */

void FUN_82072768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82072cf8 @ 82072cf8 ==== */

void FUN_82072cf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82072d48 @ 82072d48 ==== */

void FUN_82072d48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82072f60 @ 82072f60 ==== */

void FUN_82072f60(void)

{
  FUN_820844d4();
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_82073110 @ 82073110 ==== */

void FUN_82073110(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82073240 @ 82073240 ==== */

void FUN_82073240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820732f0 @ 820732f0 ==== */

undefined4 FUN_820732f0(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  if (param_1 == 0x17) {
    puVar1 = &UNK_8200da34;
  }
  else if (param_1 == 0x18) {
    puVar1 = &UNK_8200dadc;
  }
  else {
    puVar1 = (undefined *)(-(uint)(param_1 == 0x19) & 0x8200dbc0);
  }
  *param_2 = *(undefined4 *)(puVar1 + 0x10);
  return *(undefined4 *)(puVar1 + 0xc);
}


/* ==== FUN_82073390 @ 82073390 ==== */

undefined4 FUN_82073390(int param_1,undefined4 *param_2)

{
  uint *extraout_r4;
  
  FUN_820732f0(param_1,param_2);
  *extraout_r4 = *extraout_r4 >> 1;
  return 1;
}


/* ==== FUN_820733c8 @ 820733c8 ==== */

void FUN_820733c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82073440 @ 82073440 ==== */

void FUN_82073440(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820734a0 @ 820734a0 ==== */

void FUN_820734a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82073638 @ 82073638 ==== */

void FUN_82073638(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82073740 @ 82073740 ==== */

void FUN_82073740(char param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    return;
  }
  iVar1 = param_3 - (int)param_2;
  do {
    *param_2 = (*param_2 ^ param_2[iVar1]) & -param_1 ^ *param_2;
    param_2 = param_2 + 1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}


/* ==== FUN_82073780 @ 82073780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82073780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82073888 @ 82073888 ==== */

void FUN_82073888(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82073ad8 @ 82073ad8 ==== */

void FUN_82073ad8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar2 = *param_1 + 0x3f >> 5;
  if (uVar2 < 2) {
    return;
  }
  iVar3 = uVar2 - 1;
  param_2 = param_2 - (int)param_1;
  do {
    param_1 = param_1 + 1;
    uVar4 = *param_1;
    uVar2 = (uVar4 - *(int *)(param_2 + (int)param_1)) - uVar1;
    uVar1 = uVar2 >> 0x1f;
    *param_1 = (uVar2 & 0x7fffffff ^ uVar4) & -param_3 ^ uVar4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* ==== FUN_82073b40 @ 82073b40 ==== */

void FUN_82073b40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82073bc8 @ 82073bc8 ==== */

void FUN_82073bc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82073cd0 @ 82073cd0 ==== */

void FUN_82073cd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82073d90 @ 82073d90 ==== */

uint FUN_82073d90(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = *param_1 + 0x1fU >> 5;
  if (uVar3 != 0) {
    puVar2 = (uint *)(param_1 + uVar3 + 1);
    do {
      puVar2 = puVar2 + -1;
      uVar1 = *puVar2 | uVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return ~(-uVar1 | uVar1) >> 0x1f;
}


/* ==== FUN_82073dd0 @ 82073dd0 ==== */

void FUN_82073dd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82073f40 @ 82073f40 ==== */

uint FUN_82073f40(uint param_1)

{
  int iVar1;
  
  iVar1 = (2 - (2 - param_1) * param_1) * (2 - param_1);
  iVar1 = (2 - iVar1 * param_1) * iVar1;
  iVar1 = (2 - iVar1 * param_1) * iVar1;
  return -((2 - iVar1 * param_1) * iVar1) & -(param_1 & 1) & 0x7fffffff;
}


/* ==== FUN_82073f90 @ 82073f90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82073f90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074038 @ 82074038 ==== */

void FUN_82074038(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar3 = *param_1 + 0x3f >> 5;
  if (uVar3 < 2) {
    return;
  }
  iVar2 = uVar3 - 1;
  param_2 = param_2 - (int)param_1;
  do {
    param_1 = param_1 + 1;
    uVar4 = *param_1;
    uVar3 = *(int *)(param_2 + (int)param_1) + uVar4 + uVar1;
    uVar1 = uVar3 >> 0x1f;
    *param_1 = (uVar3 & 0x7fffffff ^ uVar4) & -param_3 ^ uVar4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* ==== FUN_820740a0 @ 820740a0 ==== */

void FUN_820740a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82074250 @ 82074250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074250(void)

{
  int *in_r6;
  uint in_r9;
  uint uVar1;
  int iVar2;
  
  FUN_820844b4();
  uVar1 = *in_r6 + 0x3fU >> 5;
  iVar2 = (uVar1 & 1) + uVar1;
  if (in_r9 < (uint)(iVar2 * 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = 5;
  do {
    if ((uint)(((1 << (uVar1 & 0x3f)) + 1) * iVar2) <= in_r9) break;
    uVar1 = uVar1 - 1;
  } while (1 < (int)uVar1);
  FUN_82074558();
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_82083d40();
  }
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_82074500 @ 82074500 ==== */

void FUN_82074500(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  uVar1 = *param_1 + 0x1f >> 5;
  if (uVar1 == 0) {
    return;
  }
  uVar3 = param_1[1] >> (param_2 & 0x3f);
  if (1 < uVar1) {
    iVar4 = uVar1 - 1;
    puVar5 = param_1;
    do {
      uVar2 = puVar5[2] << (0x1f - param_2 & 0x3f) | uVar3;
      uVar3 = puVar5[2] >> (param_2 & 0x3f);
      puVar5 = puVar5 + 1;
      *puVar5 = uVar2 & 0x7fffffff;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[uVar1] = uVar3;
  return;
}


/* ==== FUN_82074558 @ 82074558 ==== */

void FUN_82074558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820745a0 @ 820745a0 ==== */

int FUN_820745a0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    puVar4 = (uint *)(param_2 * 4 + param_1);
    uVar8 = param_2;
    do {
      puVar4 = puVar4 + -1;
      param_2 = param_2 - 1;
      uVar1 = (int)~(-uVar7 | uVar7) >> 0x1f;
      uVar7 = (*puVar4 ^ uVar7) & uVar1 ^ uVar7;
      uVar6 = (uVar6 ^ param_2) & uVar1 ^ uVar6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = (int)((0xffff - uVar7 ^ uVar7) & uVar7 ^ 0xffff - uVar7) >> 0x1f;
  uVar5 = (uVar7 >> 0x10 ^ uVar7) & uVar8 ^ uVar7;
  uVar1 = (int)((0xff - uVar5 ^ uVar5) & uVar5 ^ 0xff - uVar5) >> 0x1f;
  uVar5 = (uVar5 >> 8 ^ uVar5) & uVar1 ^ uVar5;
  uVar2 = (int)((0xf - uVar5 ^ uVar5) & uVar5 ^ 0xf - uVar5) >> 0x1f;
  uVar5 = (uVar5 >> 4 ^ uVar5) & uVar2 ^ uVar5;
  uVar3 = (int)((3 - uVar5 ^ uVar5) & uVar5 ^ 3 - uVar5) >> 0x1f;
  uVar5 = (uVar5 >> 2 ^ uVar5) & uVar3 ^ uVar5;
  return ((uVar6 * 0x10 - uVar3) * 2 - ((int)((1 - uVar5 ^ uVar5) & uVar5 ^ 1 - uVar5) >> 0x1f)) +
         uVar2 * -4 + uVar1 * -8 + (uVar8 * -0x10 - ((int)(-uVar7 | uVar7) >> 0x1f));
}


/* ==== FUN_820746e8 @ 820746e8 ==== */

void FUN_820746e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82074920 @ 82074920 ==== */

void FUN_82074920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820749f8 @ 820749f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820749f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074a80 @ 82074a80 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_82074a80(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 auStack_10 [16];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar1 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((cVar1 == '\x03') && (_UNK_8200dbf0 <= *param_1)) && (*param_1 <= _UNK_8200dbe8)) &&
     (dVar2 = (double)FUN_82088b90(param_1,auStack_10), dVar2 == DAT_82004c68)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_82074b58 @ 82074b58 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_82074b58(double *param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_20 [16];
  
  dVar2 = DAT_82004c68;
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar1 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((cVar1 == '\x03') && (DAT_82004c68 <= *param_1)) && (*param_1 <= _UNK_8200dbf8)) &&
     (dVar3 = (double)FUN_82088b90(param_1,auStack_20), dVar3 == dVar2)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_82074c28 @ 82074c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_82074c28(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x01') {
    uVar2 = 1;
  }
  else {
    if (cVar1 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cVar1 == '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_82074d00 @ 82074d00 ==== */

bool FUN_82074d00(int param_1)

{
  return *(char *)(param_1 + 8) == '\x06';
}


/* ==== FUN_82074d18 @ 82074d18 ==== */

bool FUN_82074d18(int param_1)

{
  return *(char *)(param_1 + 8) == '\a';
}


/* ==== FUN_82074d30 @ 82074d30 ==== */

void FUN_82074d30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}


/* ==== FUN_82074d38 @ 82074d38 ==== */

void FUN_82074d38(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}


/* ==== FUN_82074d40 @ 82074d40 ==== */

void FUN_82074d40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x81) != '\0') {
    return;
  }
  puVar1 = *(undefined4 **)(iVar2 + 8);
  if (*(char *)((int)puVar1 + 0x81) == '\0') {
    for (puVar3 = (undefined4 *)*puVar1; *(char *)((int)puVar3 + 0x81) == '\0';
        puVar3 = (undefined4 *)*puVar3) {
      puVar1 = puVar3;
    }
    *param_1 = (int)puVar1;
    return;
  }
  while ((iVar2 = *(int *)(iVar2 + 4), *(char *)(iVar2 + 0x81) == '\0' &&
         (*param_1 == *(int *)(iVar2 + 8)))) {
    *param_1 = iVar2;
  }
  *param_1 = iVar2;
  return;
}


/* ==== FUN_82074db8 @ 82074db8 ==== */

void FUN_82074db8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0x81) == '\0') {
    iVar1 = *piVar2;
    if (*(char *)(iVar1 + 0x81) == '\0') {
      for (iVar3 = *(int *)(iVar1 + 8); *(char *)(iVar3 + 0x81) == '\0'; iVar3 = *(int *)(iVar3 + 8)
          ) {
        iVar1 = iVar3;
      }
      *param_1 = iVar1;
      return;
    }
    while ((piVar2 = (int *)piVar2[1], *(char *)((int)piVar2 + 0x81) == '\0' &&
           (*param_1 == *piVar2))) {
      *param_1 = (int)piVar2;
    }
    if (*(char *)(*param_1 + 0x81) != '\0') {
      return;
    }
  }
  else {
    piVar2 = (int *)piVar2[2];
  }
  *param_1 = (int)piVar2;
  return;
}


/* ==== FUN_82074e48 @ 82074e48 ==== */

void FUN_82074e48(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_2 = *(int *)(iVar2 + 8);
  if (*(char *)(*(int *)(iVar2 + 8) + 0x81) == '\0') {
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


/* ==== FUN_82074eb0 @ 82074eb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074eb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074f48 @ 82074f48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074f48(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074f70 @ 82074f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82074f70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82074fc8 @ 82074fc8 ==== */

void FUN_82074fc8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x81) == '\0') {
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


/* ==== FUN_82075030 @ 82075030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820750c0 @ 820750c0 ==== */

void FUN_820750c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82075478 @ 82075478 ==== */

void FUN_82075478(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82075500 @ 82075500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075500(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075550 @ 82075550 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075550(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820755a0 @ 820755a0 ==== */

int FUN_820755a0(int *param_1)

{
  byte bVar1;
  int local_10 [4];
  
  bVar1 = *(byte *)(param_1 + 2);
  if (5 < bVar1) {
    if (bVar1 == 6) {
      if (*(int *)(*param_1 + 8) != 0) {
        local_10[0] = *(int *)(*param_1 + 4);
        FUN_82074db8(local_10);
        return *(int *)(local_10[0] + 0x14) + 1;
      }
    }
    else if (bVar1 < 8) {
      return *(int *)(*param_1 + 8);
    }
  }
  return 0;
}


/* ==== FUN_82075618 @ 82075618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075680 @ 82075680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075728 @ 82075728 ==== */

void FUN_82075728(void)

{
  FUN_82075680();
                    /* WARNING: Subroutine does not return */
  FUN_82085f28();
}


/* ==== FUN_82075768 @ 82075768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820757c0 @ 820757c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820757c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075800 @ 82075800 ==== */

byte FUN_82075800(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint local_60;
  uint local_5c [23];
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)0x0) {
    bVar6 = (uint)param_2[1] <= (uint)param_1[1];
  }
  else {
    local_5c[0] = param_1[1] & 0x3fffffff;
    local_60 = param_2[1] & 0x3fffffff;
    puVar3 = &local_60;
    if (local_5c[0] <= local_60) {
      puVar3 = local_5c;
    }
    pbVar2 = (byte *)*param_2;
    if (pbVar2 == (byte *)0x0) {
      FUN_82025780();
      FUN_82075680();
                    /* WARNING: Subroutine does not return */
      FUN_82085f28();
    }
    iVar1 = 0;
    if (*puVar3 != 0) {
      pbVar4 = pbVar5 + *puVar3;
      do {
        iVar1 = (uint)*pbVar5 - (uint)*pbVar2;
        if (iVar1 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar2 = pbVar2 + 1;
      } while (pbVar5 != pbVar4);
    }
    if (iVar1 < 0) {
      return 1;
    }
    if (0 < iVar1) {
      return 0;
    }
    bVar6 = local_60 <= local_5c[0];
  }
  return -!bVar6 & 1;
}


/* ==== FUN_820758f8 @ 820758f8 ==== */

bool FUN_820758f8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    iVar5 = param_2[1] - param_1[1];
  }
  else {
    uVar1 = param_1[1] & 0x3fffffff;
    if (uVar1 != (param_2[1] & 0x3fffffff)) {
      return false;
    }
    pbVar2 = (byte *)*param_2;
    if (pbVar2 == (byte *)0x0) {
      FUN_82025780();
      FUN_82075680();
                    /* WARNING: Subroutine does not return */
      FUN_82085f28();
    }
    iVar5 = 0;
    if (uVar1 != 0) {
      pbVar3 = pbVar4 + uVar1;
      do {
        iVar5 = (uint)*pbVar4 - (uint)*pbVar2;
        if (iVar5 != 0) break;
        pbVar4 = pbVar4 + 1;
        pbVar2 = pbVar2 + 1;
      } while (pbVar4 != pbVar3);
    }
  }
  return iVar5 == 0;
}


/* ==== FUN_82075a30 @ 82075a30 ==== */

void FUN_82075a30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82075b28 @ 82075b28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075b28(int *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 4) {
    if (((uint)param_1[2] >> 0x17 & 1) == 0) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 6) {
    return;
  }
  if (7 < bVar1) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075b70 @ 82075b70 ==== */

void FUN_82075b70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82075be0 @ 82075be0 ==== */

void FUN_82075be0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82075c28 @ 82075c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075c28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075c80 @ 82075c80 ==== */

void FUN_82075c80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82075cf0 @ 82075cf0 ==== */

void FUN_82075cf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82075d10 @ 82075d10 ==== */

void FUN_82075d10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82075d68 @ 82075d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075d68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075dc8 @ 82075dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075dc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075e08 @ 82075e08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075e08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075e88 @ 82075e88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075e88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075ef8 @ 82075ef8 ==== */

void FUN_82075ef8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82075f68 @ 82075f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82075f68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82075fb8 @ 82075fb8 ==== */

void FUN_82075fb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82076090 @ 82076090 ==== */

void FUN_82076090(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82076180 @ 82076180 ==== */

void FUN_82076180(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820761e0 @ 820761e0 ==== */

void FUN_820761e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82076238 @ 82076238 ==== */

void FUN_82076238(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82076290 @ 82076290 ==== */

void FUN_82076290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820762f0 @ 820762f0 ==== */

void FUN_820762f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820763c0 @ 820763c0 ==== */

void FUN_820763c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82076438 @ 82076438 ==== */

void FUN_82076438(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82076490 @ 82076490 ==== */

int FUN_82076490(int *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 2) == '\x04') {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if (((uint)param_1[2] >> 0x17 & 1) != 0) {
      iVar1 = iVar1 + 4;
    }
    return iVar1;
  }
  FUN_820265c0();
  FUN_82025938();
  FUN_82026650();
  FUN_82075680();
                    /* WARNING: Subroutine does not return */
  FUN_82085f28();
}


/* ==== FUN_82076528 @ 82076528 ==== */

void FUN_82076528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82076690 @ 82076690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82076690(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076890 @ 82076890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82076890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076a80 @ 82076a80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82076a80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076c30 @ 82076c30 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined1 FUN_82076c30(double *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (bVar1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 3) {
      uVar2 = 0;
    }
    else {
      if (bVar1 != 5) {
        FUN_820265c0();
        FUN_82025938();
        FUN_82026650();
        FUN_82075680();
                    /* WARNING: Subroutine does not return */
        FUN_82085f28();
      }
      uVar2 = *(undefined1 *)param_1;
    }
  }
  return uVar2;
}


/* ==== FUN_82076d08 @ 82076d08 ==== */

void FUN_82076d08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82076d78 @ 82076d78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82076d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076dd0 @ 82076dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82076dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82076e30 @ 82076e30 ==== */

void FUN_82076e30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82076f38 @ 82076f38 ==== */

void FUN_82076f38(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_82076e30();
  if (iVar2 == 0) {
    FUN_82076dd0();
  }
  return;
}


/* ==== FUN_82076f88 @ 82076f88 ==== */

bool FUN_82076f88(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_82076e30();
  return (bool)('\x01' - (iVar2 == 0));
}


/* ==== FUN_82076fd8 @ 82076fd8 ==== */

bool FUN_82076fd8(void)

{
  int iVar1;
  
  iVar1 = FUN_82076e30();
  return (bool)('\x01' - (iVar1 == 0));
}


/* ==== FUN_82077030 @ 82077030 ==== */

void FUN_82077030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82077200 @ 82077200 ==== */

void FUN_82077200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82077258 @ 82077258 ==== */

void FUN_82077258(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820772e8 @ 820772e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820772e8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *local_60 [24];
  
  uVar6 = FUN_820844d4();
  puVar1 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  puVar4 = *(undefined4 **)((int)uVar6 + 4);
  puVar3 = (undefined4 *)(param_3 + 0x10);
  bVar2 = 1;
  if (*(char *)((int)puVar4[1] + 0x81) == '\0') {
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      if ((param_4 & 0xff) == 0) {
        bVar2 = FUN_82075800(puVar3,puVar4 + 4);
      }
      else {
        bVar2 = FUN_82075800(puVar4 + 4,puVar3);
        bVar2 = bVar2 == 0;
      }
      if (bVar2 == 0) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar5 + 0x81) == '\0');
  }
  local_60[0] = puVar4;
  if (bVar2 != 0) {
    if (puVar4 == (undefined4 *)**(int **)((int)uVar6 + 4)) goto LAB_820773a4;
    FUN_82074db8((int *)local_60);
  }
  puVar4 = local_60[0];
  bVar2 = FUN_82075800(local_60[0] + 4,puVar3);
  if (bVar2 == 0) {
    FUN_82075e88();
    thunk_FUN_82084560();
    *puVar1 = puVar4;
    *(undefined1 *)(puVar1 + 1) = 0;
    halt_baddata();
  }
LAB_820773a4:
  puVar3 = (undefined4 *)FUN_82077030();
  *(undefined1 *)(puVar1 + 1) = 1;
  *puVar1 = *puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82077418 @ 82077418 ==== */

void FUN_82077418(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820774c0 @ 820774c0 ==== */

void FUN_820774c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82077670 @ 82077670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820776c0 @ 820776c0 ==== */

void FUN_820776c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82077718 @ 82077718 ==== */

void FUN_82077718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820777e0 @ 820777e0 ==== */

void FUN_820777e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82077840 @ 82077840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82077898 @ 82077898 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077898(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820778f8 @ 820778f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820778f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82077958 @ 82077958 ==== */

void FUN_82077958(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82077a98 @ 82077a98 ==== */

void FUN_82077a98(undefined4 param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_820265c0();
    FUN_82025938();
    FUN_82026650();
    FUN_82075680();
                    /* WARNING: Subroutine does not return */
    FUN_82085f28();
  }
  FUN_82077958();
  return;
}


/* ==== FUN_82077b08 @ 82077b08 ==== */

void FUN_82077b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82077c78 @ 82077c78 ==== */

void FUN_82077c78(undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82077ca0 @ 82077ca0 ==== */

void FUN_82077ca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82077cd0 @ 82077cd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077cd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82077d50 @ 82077d18 ==== */

void thunk_FUN_82077d50(int param_1)

{
  char cVar1;
  
  while( true ) {
    if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0x50)) {
      return;
    }
    cVar1 = **(char **)(param_1 + 0x54);
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) break;
    *(char **)(param_1 + 0x54) = *(char **)(param_1 + 0x54) + 1;
  }
  return;
}


/* ==== FUN_82077d50 @ 82077d50 ==== */

void FUN_82077d50(int param_1)

{
  char cVar1;
  
  while( true ) {
    if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0x50)) {
      return;
    }
    cVar1 = **(char **)(param_1 + 0x54);
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) break;
    *(char **)(param_1 + 0x54) = *(char **)(param_1 + 0x54) + 1;
  }
  return;
}


/* ==== FUN_82077d68 @ 82077d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077d68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82077dc8 @ 82077dc8 ==== */

undefined4 FUN_82077dc8(int param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x54);
  if (((param_2 != '\0') && (pcVar2 != *(char **)(param_1 + 0x50))) && (*pcVar2 == 'I')) {
    *(char **)(param_1 + 0x54) = pcVar2 + 1;
    return 0;
  }
  cVar1 = '0';
  do {
    if ('9' < cVar1) break;
    *(char **)(param_1 + 0x54) = pcVar2;
    if (pcVar2 < *(char **)(param_1 + 0x50)) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    }
    else {
      cVar1 = '\0';
    }
  } while ('/' < cVar1);
  if (cVar1 == '.') {
    do {
      *(char **)(param_1 + 0x54) = pcVar2;
      if (pcVar2 < *(char **)(param_1 + 0x50)) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      }
      else {
        cVar1 = '\0';
      }
    } while (('/' < cVar1) && (cVar1 < ':'));
  }
  if ((cVar1 == 'e') || (cVar1 == 'E')) {
    *(char **)(param_1 + 0x54) = pcVar2;
    if (pcVar2 < *(char **)(param_1 + 0x50)) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    }
    else {
      cVar1 = '\0';
    }
    if ((cVar1 != '+') && (cVar1 != '-')) goto LAB_82077ee8;
    do {
      *(char **)(param_1 + 0x54) = pcVar2;
      if (pcVar2 < *(char **)(param_1 + 0x50)) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      }
      else {
        cVar1 = '\0';
      }
LAB_82077ee8:
    } while (('/' < cVar1) && (cVar1 < ':'));
  }
  return 1;
}


/* ==== FUN_82077f00 @ 82077f00 ==== */

void FUN_82077f00(int param_1,char *param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = 0;
  pcVar4 = *(char **)(param_1 + 0x4c);
  do {
    *param_3 = iVar2;
    pcVar5 = pcVar4;
    do {
      if ((param_2 <= pcVar5) || (pcVar5 == *(char **)(param_1 + 0x50))) {
        *param_4 = param_2 + (1 - (int)pcVar4);
        *param_3 = *param_3 + 1;
        return;
      }
      cVar1 = *pcVar5;
      pcVar3 = pcVar5 + 1;
      if (cVar1 == '\r') {
        if (*pcVar3 == '\n') {
          pcVar3 = pcVar5 + 2;
        }
        break;
      }
      pcVar5 = pcVar3;
    } while (cVar1 != '\n');
    iVar2 = *param_3 + 1;
    pcVar4 = pcVar3;
  } while( true );
}


/* ==== FUN_82077f80 @ 82077f80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077f80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82077fc8 @ 82077fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82077fc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078200 @ 82078200 ==== */

bool FUN_82078200(int param_1,undefined1 *param_2)

{
  char cVar2;
  undefined1 uVar3;
  char *pcVar1;
  
  uVar3 = 0;
  do {
    *param_2 = uVar3;
    do {
      if (*(uint *)(param_1 + 0x50) <= *(int *)(param_1 + 0x54) + 1U) {
LAB_8207826c:
        pcVar1 = *(char **)(param_1 + 0x54);
        if (pcVar1 == *(char **)(param_1 + 0x50)) {
          cVar2 = '\0';
        }
        else {
          cVar2 = *pcVar1;
          *(char **)(param_1 + 0x54) = pcVar1 + 1;
        }
        return cVar2 == '/';
      }
      pcVar1 = *(char **)(param_1 + 0x54);
      if (pcVar1 == *(char **)(param_1 + 0x50)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = *pcVar1;
        *(char **)(param_1 + 0x54) = pcVar1 + 1;
      }
      if ((cVar2 == '*') && (**(char **)(param_1 + 0x54) == '/')) goto LAB_8207826c;
    } while (cVar2 != '\n');
    uVar3 = 1;
  } while( true );
}


/* ==== FUN_820782a8 @ 820782a8 ==== */

undefined4 FUN_820782a8(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar1 = *(char **)(param_1 + 0x50);
  if (*(char **)(param_1 + 0x54) != pcVar1) {
    do {
      pcVar2 = *(char **)(param_1 + 0x54);
      if (pcVar2 == pcVar1) {
        cVar3 = '\0';
      }
      else {
        cVar3 = *pcVar2;
        *(char **)(param_1 + 0x54) = pcVar2 + 1;
      }
      if (cVar3 == '\n') {
        return 1;
      }
      pcVar2 = *(char **)(param_1 + 0x54);
      if (cVar3 == '\r') {
        if (pcVar2 == pcVar1) {
          return 1;
        }
        if (*pcVar2 != '\n') {
          return 1;
        }
        *(char **)(param_1 + 0x54) = pcVar2 + 1;
        return 1;
      }
    } while (pcVar2 != *(char **)(param_1 + 0x50));
  }
  return 1;
}


/* ==== FUN_82078328 @ 82078328 ==== */

bool FUN_82078328(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = '\0';
  pcVar1 = *(char **)(param_1 + 0x50);
  if (*(char **)(param_1 + 0x54) != pcVar1) {
    do {
      pcVar3 = *(char **)(param_1 + 0x54);
      if (pcVar3 == pcVar1) {
        cVar2 = '\0';
      }
      else {
        cVar2 = *pcVar3;
        *(char **)(param_1 + 0x54) = pcVar3 + 1;
      }
      if (cVar2 == '\\') {
        if (*(char **)(param_1 + 0x54) != pcVar1) {
          *(char **)(param_1 + 0x54) = *(char **)(param_1 + 0x54) + 1;
        }
      }
      else if (cVar2 == '\"') break;
    } while (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x50));
  }
  return cVar2 == '\"';
}


/* ==== FUN_820783b0 @ 820783b0 ==== */

bool FUN_820783b0(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = '\0';
  pcVar1 = *(char **)(param_1 + 0x50);
  if (*(char **)(param_1 + 0x54) != pcVar1) {
    do {
      pcVar3 = *(char **)(param_1 + 0x54);
      if (pcVar3 == pcVar1) {
        cVar2 = '\0';
      }
      else {
        cVar2 = *pcVar3;
        *(char **)(param_1 + 0x54) = pcVar3 + 1;
      }
      if (cVar2 == '\\') {
        if (*(char **)(param_1 + 0x54) != pcVar1) {
          *(char **)(param_1 + 0x54) = *(char **)(param_1 + 0x54) + 1;
        }
      }
      else if (cVar2 == '\'') break;
    } while (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x50));
  }
  return cVar2 == '\'';
}


/* ==== FUN_82078438 @ 82078438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078438(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078490 @ 82078490 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078490(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078558 @ 82078558 ==== */

uint FUN_82078558(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  if (*(int *)param_1[8] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_1[0xc];
  }
  if (0 < iVar2) {
    *(int *)param_1[0xc] = *(int *)param_1[0xc] + -1;
    pbVar3 = *(byte **)param_1[8];
    *(byte **)param_1[8] = pbVar3 + 1;
    return (uint)*pbVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x820785b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  return uVar1;
}


/* ==== FUN_82078600 @ 82078600 ==== */

int FUN_82078600(undefined4 param_1,char param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  iVar1 = (int)param_3;
  if ((iVar1 <= iVar2) && (iVar2 <= iVar1 + 9)) {
    return iVar2 - iVar1;
  }
  iVar1 = (int)param_4;
  if (((iVar2 < iVar1) || (iVar1 + 5 < iVar2)) &&
     ((iVar1 = (int)param_5, iVar2 < iVar1 || (iVar1 + 5 < iVar2)))) {
    return -1;
  }
  return (iVar2 - iVar1) + 10;
}


/* ==== FUN_82078668 @ 82078668 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078668(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820786e8 @ 820786e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820786e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078748 @ 82078748 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820787e8 @ 820787e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820787e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078870 @ 82078870 ==== */

void FUN_82078870(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82078960 @ 82078960 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078960(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078a30 @ 82078a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078ab0 @ 82078ab0 ==== */

void FUN_82078ab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82078b40 @ 82078b40 ==== */

void FUN_82078b40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82078c00 @ 82078c00 ==== */

void FUN_82078c00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82078cc0 @ 82078cc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078cc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078d18 @ 82078d18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078d18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078d68 @ 82078d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078d68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078dd0 @ 82078dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078e20 @ 82078e20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82078e20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82078e70 @ 82078e70 ==== */

void FUN_82078e70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82079020 @ 82079020 ==== */

void FUN_82079020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820790b8 @ 820790b8 ==== */

void FUN_820790b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82079268 @ 82079268 ==== */

void FUN_82079268(undefined4 *param_1,int *param_2,int param_3)

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
  param_1[2] = iVar2 + param_3;
  return;
}


/* ==== FUN_820792c0 @ 820792c0 ==== */

void FUN_820792c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82079360 @ 82079360 ==== */

void FUN_82079360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82079568 @ 82079568 ==== */

void FUN_82079568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82079620 @ 82079620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82079620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820796c8 @ 820796c8 ==== */

void FUN_820796c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82079768 @ 82079768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82079768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820797d8 @ 820797d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820797d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82079840 @ 82079840 ==== */

void FUN_82079840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820799a0 @ 820799a0 ==== */

int FUN_820799a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 auStack_20 [32];
  
  uStack_30 = *param_1;
  iStack_28 = param_1[4] + param_1[3];
  uStack_2c = 0;
  puVar1 = (undefined4 *)FUN_8202dc60(auStack_20,&uStack_30,1);
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


/* ==== FUN_82079a30 @ 82079a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82079a30(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  char cVar5;
  char cVar6;
  byte *pbVar4;
  char *extraout_r4;
  char ****ppppcVar7;
  char ****ppppcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char ***local_c0 [5];
  uint local_ac;
  char ***local_a0 [4];
  int local_90;
  uint local_8c;
  
  FUN_820844bc();
  piVar3 = (int *)FUN_820796c8();
  (**(code **)(*piVar3 + 0xc))(local_a0,piVar3);
  if (local_90 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*piVar3 + 8))(piVar3);
  }
  cVar6 = FUN_820787e8();
  pcVar9 = extraout_r4;
  if (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    cVar6 = *(char *)(param_3 + 5);
    if (cVar6 != '+') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      cVar6 = *(char *)(param_3 + 5);
      if (cVar6 != '-') goto LAB_82079b04;
    }
    *extraout_r4 = cVar6;
    pcVar9 = extraout_r4 + 1;
    FUN_820786e8();
  }
LAB_82079b04:
  uVar12 = param_5 & 0xe00;
  iVar13 = 10;
  if (uVar12 == 0x400) {
    bVar11 = 8;
  }
  else if (uVar12 == 0x800) {
    bVar11 = 0x10;
  }
  else {
    bVar11 = -(uVar12 != 0) & 10;
  }
  bVar2 = false;
  bVar1 = false;
  cVar6 = FUN_820787e8();
  if (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if (*(char *)(param_3 + 5) != '0') goto LAB_82079c04;
    bVar2 = true;
    FUN_820786e8();
    cVar6 = FUN_820787e8();
    if (cVar6 != '\0') {
LAB_82079bf8:
      if (bVar11 == 0) {
        bVar11 = 8;
        goto LAB_82079c04;
      }
      goto LAB_82079c0c;
    }
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if (*(char *)(param_3 + 5) != 'x') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) != 'X') goto LAB_82079bf8;
    }
    if ((bVar11 != 0) && (bVar11 != 0x10)) goto LAB_82079bf8;
    bVar2 = false;
    FUN_820786e8();
  }
  else {
LAB_82079c04:
    if (bVar11 == 0) goto LAB_82079c24;
LAB_82079c0c:
    if ((bVar11 == 10) || (iVar13 = 8, bVar11 == 8)) goto LAB_82079c24;
  }
  iVar13 = 0x16;
LAB_82079c24:
  FUN_82023ed0();
  FUN_82078b40();
  iVar14 = 0;
  cVar6 = FUN_820787e8();
  uVar12 = local_ac;
  ppppcVar7 = (char ****)local_c0[0];
  if (cVar6 == '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      cVar6 = *(char *)(param_3 + 5);
      *pcVar9 = cVar6;
      pbVar4 = FUN_82084270((byte *)"0123456789abcdefABCDEF",(int)cVar6,iVar13);
      if (pbVar4 == (byte *)0x0) {
        ppppcVar8 = ppppcVar7;
        if (uVar12 < 0x10) {
          ppppcVar8 = local_c0;
        }
        if ((*(char *)((int)ppppcVar8 + iVar14) == '\0') || (cVar5 == '\0')) break;
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_82078748();
        }
        if (*(char *)(param_3 + 5) != cVar5) break;
        FUN_820254f8();
        iVar14 = iVar14 + 1;
        uVar12 = local_ac;
        ppppcVar7 = (char ****)local_c0[0];
      }
      else {
        if (((bVar1) || (*pcVar9 != '0')) && (pcVar9 < extraout_r4 + 0x1f)) {
          pcVar9 = pcVar9 + 1;
          bVar1 = true;
        }
        bVar2 = true;
        ppppcVar8 = ppppcVar7;
        if (uVar12 < 0x10) {
          ppppcVar8 = local_c0;
        }
        if (*(char *)((int)ppppcVar8 + iVar14) != '\x7f') {
          if (uVar12 < 0x10) {
            ppppcVar7 = local_c0;
          }
          *(char *)((int)ppppcVar7 + iVar14) = *(char *)((int)ppppcVar7 + iVar14) + '\x01';
          uVar12 = local_ac;
          ppppcVar7 = (char ****)local_c0[0];
        }
      }
      FUN_820786e8();
      cVar6 = FUN_820787e8();
    } while (cVar6 == '\0');
    if (iVar14 != 0) {
      ppppcVar8 = ppppcVar7;
      if (uVar12 < 0x10) {
        ppppcVar8 = local_c0;
      }
      if (*(char *)((int)ppppcVar8 + iVar14) < '\x01') {
        bVar2 = false;
      }
      else {
        iVar14 = iVar14 + 1;
      }
    }
  }
  if (local_8c < 0x10) {
    local_a0[0] = (char ***)local_a0;
  }
  do {
    while( true ) {
      if (((!bVar2) || (iVar14 == 0)) || (cVar5 = *(char *)local_a0[0], cVar5 == '\x7f')) {
        pcVar10 = extraout_r4;
        if ((bVar2) && (pcVar10 = pcVar9, !bVar1)) {
          *pcVar9 = '0';
          pcVar10 = pcVar9 + 1;
        }
        *pcVar10 = '\0';
        FUN_82023ed0();
        FUN_82023ed0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar14 = iVar14 + -1;
      if (iVar14 == 0) break;
      ppppcVar8 = ppppcVar7;
      if (uVar12 < 0x10) {
        ppppcVar8 = local_c0;
      }
      if (cVar5 == *(char *)((int)ppppcVar8 + iVar14)) break;
LAB_82079e38:
      bVar2 = false;
    }
    if (iVar14 == 0) {
      ppppcVar8 = ppppcVar7;
      if (uVar12 < 0x10) {
        ppppcVar8 = local_c0;
      }
      if (cVar5 < *(char *)ppppcVar8) goto LAB_82079e38;
    }
    if ('\0' < *(char *)((int)local_a0[0] + 1)) {
      local_a0[0] = (char ***)((int)local_a0[0] + 1);
    }
  } while( true );
}


/* ==== FUN_82079ec0 @ 82079ec0 ==== */

void FUN_82079ec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8207a770 @ 8207a770 ==== */

void FUN_8207a770(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207a810 @ 8207a810 ==== */

void FUN_8207a810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207a908 @ 8207a908 ==== */

void FUN_8207a908(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207aa00 @ 8207aa00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207aa00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207ac98 @ 8207ac98 ==== */

void FUN_8207ac98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207ad18 @ 8207ad18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ad18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207ad90 @ 8207ad90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ad90(void)

{
  int extraout_r4;
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  FUN_820844c8();
  FUN_82023ed0();
  piVar3 = *(int **)(extraout_r4 + 0x18);
  for (uVar4 = *(uint *)(extraout_r4 + 0x24);
      *(int *)(extraout_r4 + 0x28) + *(int *)(extraout_r4 + 0x24) != uVar4; uVar4 = uVar4 + 1) {
    iVar1 = 0;
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
    }
    uVar2 = uVar4;
    if (*(uint *)(iVar1 + 8) <= uVar4) {
      uVar2 = uVar4 - *(uint *)(iVar1 + 8);
    }
    iVar1 = *(int *)(uVar2 * 4 + *(int *)(iVar1 + 4));
    FUN_820797d8();
    FUN_8202b810();
    FUN_8202b710();
    FUN_82028198();
    FUN_82023ed0();
    FUN_82023ed0();
    FUN_82023ed0();
    FUN_8207a770();
    FUN_8202b710();
    FUN_82028198();
    FUN_82023ed0();
    FUN_82023ed0();
    if (*(int *)(iVar1 + 0x28) != 0) {
      FUN_820797d8();
      FUN_8202b810();
      FUN_8202b710();
      FUN_82028198();
      FUN_82023ed0();
      FUN_82023ed0();
      FUN_82023ed0();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207af90 @ 8207af90 ==== */

void FUN_8207af90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8207b030 @ 8207b030 ==== */

void FUN_8207b030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207b358 @ 8207b358 ==== */

void FUN_8207b358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8207b490 @ 8207b490 ==== */

void FUN_8207b490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8207b6d8 @ 8207b6d8 ==== */

void FUN_8207b6d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8207b7e0 @ 8207b7e0 ==== */

void FUN_8207b7e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8207b8e8 @ 8207b8e8 ==== */

void FUN_8207b8e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8207b9f0 @ 8207b9f0 ==== */

void FUN_8207b9f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207baf8 @ 8207baf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207baf8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  undefined1 *extraout_r4;
  char ******ppppppcVar7;
  char ******ppppppcVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *****local_d0 [5];
  uint local_bc;
  char *****local_b0 [4];
  int local_a0;
  uint local_9c;
  
  FUN_820844b8();
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    FUN_82079ec0();
    halt_baddata();
  }
  iVar14 = **(int **)(param_5 + 0x30);
  FUN_82022800();
  piVar3 = (int *)FUN_820796c8();
  if ((iVar14 != 0) && (puVar4 = (undefined4 *)FUN_82022858(), puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
  }
  (**(code **)(*piVar3 + 0xc))(local_b0,piVar3);
  bVar1 = false;
  cVar5 = FUN_820787e8();
  puVar10 = extraout_r4;
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if (*(char *)(param_3 + 5) == '+') {
      *extraout_r4 = 0x2b;
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_8207bc08;
      *extraout_r4 = 0x2d;
    }
    puVar10 = extraout_r4 + 1;
    FUN_820786e8();
  }
LAB_8207bc08:
  bVar2 = false;
  iVar14 = 0;
  iVar9 = 0;
  ppppppcVar7 = (char ******)local_b0[0];
  if (local_9c < 0x10) {
    ppppppcVar7 = local_b0;
  }
  if (*(char *)ppppppcVar7 == '\x7f') {
LAB_8207bfbc:
    while (cVar5 = FUN_820787e8(), cVar5 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar14 < 0x24) {
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_82078748();
        }
        if ((*(char *)(param_3 + 5) != '0') || (iVar14 != 0)) {
          if (*(char *)(param_3 + 4) == '\0') {
            FUN_82078748();
          }
          iVar14 = iVar14 + 1;
          *puVar10 = *(undefined1 *)(param_3 + 5);
          puVar10 = puVar10 + 1;
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
      bVar2 = true;
      FUN_820786e8();
    }
  }
  else {
    ppppppcVar7 = (char ******)local_b0[0];
    if (local_9c < 0x10) {
      ppppppcVar7 = local_b0;
    }
    if (*(char *)ppppppcVar7 < '\x01') goto LAB_8207bfbc;
    if (local_a0 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(*piVar3 + 8))(piVar3);
    }
    FUN_82023ed0();
    FUN_82078b40();
    iVar13 = 0;
    cVar6 = FUN_820787e8();
    uVar12 = local_bc;
    ppppppcVar7 = (char ******)local_d0[0];
    if (cVar6 == '\0') {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_82078748();
        }
        if (*(char *)(param_3 + 5) < '0') {
LAB_8207bda4:
          ppppppcVar8 = ppppppcVar7;
          if (uVar12 < 0x10) {
            ppppppcVar8 = local_d0;
          }
          if ((*(char *)((int)ppppppcVar8 + iVar13) == '\0') || (cVar5 == '\0')) break;
          if (*(char *)(param_3 + 4) == '\0') {
            FUN_82078748();
          }
          if (*(char *)(param_3 + 5) != cVar5) break;
          FUN_820254f8();
          iVar13 = iVar13 + 1;
          uVar12 = local_bc;
          ppppppcVar7 = (char ******)local_d0[0];
        }
        else {
          if (*(char *)(param_3 + 4) == '\0') {
            FUN_82078748();
          }
          if ('9' < *(char *)(param_3 + 5)) goto LAB_8207bda4;
          bVar2 = true;
          if (iVar14 < 0x24) {
            if (*(char *)(param_3 + 4) == '\0') {
              FUN_82078748();
            }
            if ((*(char *)(param_3 + 5) != '0') || (iVar14 != 0)) {
              if (*(char *)(param_3 + 4) == '\0') {
                FUN_82078748();
              }
              iVar14 = iVar14 + 1;
              *puVar10 = *(undefined1 *)(param_3 + 5);
              puVar10 = puVar10 + 1;
            }
          }
          else {
            iVar9 = iVar9 + 1;
          }
          ppppppcVar8 = ppppppcVar7;
          if (uVar12 < 0x10) {
            ppppppcVar8 = local_d0;
          }
          if (*(char *)((int)ppppppcVar8 + iVar13) != '\x7f') {
            if (uVar12 < 0x10) {
              ppppppcVar7 = local_d0;
            }
            *(char *)((int)ppppppcVar7 + iVar13) = *(char *)((int)ppppppcVar7 + iVar13) + '\x01';
            uVar12 = local_bc;
            ppppppcVar7 = (char ******)local_d0[0];
          }
        }
        FUN_820786e8();
        cVar6 = FUN_820787e8();
      } while (cVar6 == '\0');
      if (iVar13 != 0) {
        ppppppcVar8 = ppppppcVar7;
        if (uVar12 < 0x10) {
          ppppppcVar8 = local_d0;
        }
        if (*(char *)((int)ppppppcVar8 + iVar13) < '\x01') {
          bVar1 = true;
        }
        else {
          iVar13 = iVar13 + 1;
        }
      }
    }
    if (local_9c < 0x10) {
      local_b0[0] = (char *****)local_b0;
    }
    while (((!bVar1 && (iVar13 != 0)) && (cVar5 = *(char *)local_b0[0], cVar5 != '\x7f'))) {
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) {
LAB_8207beac:
        if (iVar13 == 0) {
          ppppppcVar8 = ppppppcVar7;
          if (uVar12 < 0x10) {
            ppppppcVar8 = local_d0;
          }
          if (cVar5 < *(char *)ppppppcVar8) goto LAB_8207bed4;
        }
        if ('\0' < *(char *)((int)local_b0[0] + 1)) {
          local_b0[0] = (char *****)((int)local_b0[0] + 1);
        }
      }
      else {
        ppppppcVar8 = ppppppcVar7;
        if (uVar12 < 0x10) {
          ppppppcVar8 = local_d0;
        }
        if (cVar5 == *(char *)((int)ppppppcVar8 + iVar13)) goto LAB_8207beac;
LAB_8207bed4:
        bVar1 = true;
      }
    }
    FUN_82023ed0();
  }
  if ((bVar2) && (iVar14 == 0)) {
    *puVar10 = 0x30;
    puVar10 = puVar10 + 1;
  }
  cVar5 = FUN_820787e8();
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    cVar5 = *(char *)(param_3 + 5);
    cVar6 = (**(code **)(*piVar3 + 4))(piVar3);
    if (cVar5 == cVar6) {
      puVar4 = (undefined4 *)FUN_82088ed8();
      *puVar10 = *(undefined1 *)*puVar4;
      puVar10 = puVar10 + 1;
      FUN_820786e8();
    }
  }
  if (iVar14 == 0) {
    while (cVar5 = FUN_820787e8(), cVar5 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) != '0') break;
      iVar9 = iVar9 + -1;
      bVar2 = true;
      FUN_820786e8();
    }
    if (iVar9 < 0) {
      *puVar10 = 0x30;
      puVar10 = puVar10 + 1;
    }
  }
  cVar5 = FUN_820787e8();
  while (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if (*(char *)(param_3 + 5) < '0') break;
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if ('9' < *(char *)(param_3 + 5)) break;
    if (iVar14 < 0x24) {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      iVar14 = iVar14 + 1;
      *puVar10 = *(undefined1 *)(param_3 + 5);
      puVar10 = puVar10 + 1;
    }
    bVar2 = true;
    FUN_820786e8();
    cVar5 = FUN_820787e8();
  }
  if ((bVar2) && (cVar5 = FUN_820787e8(), cVar5 == '\0')) {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if (*(char *)(param_3 + 5) != 'e') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) != 'E') goto LAB_8207c334;
    }
    *puVar10 = 0x65;
    puVar11 = puVar10 + 1;
    FUN_820786e8();
    bVar2 = false;
    iVar14 = 0;
    cVar5 = FUN_820787e8();
    if (cVar5 != '\0') goto LAB_8207c278;
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_82078748();
    }
    if (*(char *)(param_3 + 5) == '+') {
      *puVar11 = 0x2b;
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_8207c278;
      *puVar11 = 0x2d;
    }
    puVar10 = puVar10 + 2;
    while( true ) {
      FUN_820786e8();
      puVar11 = puVar10;
LAB_8207c278:
      puVar10 = puVar11;
      cVar5 = FUN_820787e8();
      if (cVar5 != '\0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) != '0') break;
      bVar2 = true;
    }
    if (bVar2) {
      *puVar10 = 0x30;
      puVar10 = puVar10 + 1;
    }
    while (cVar5 = FUN_820787e8(), cVar5 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_82078748();
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar14 < 8) {
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_82078748();
        }
        iVar14 = iVar14 + 1;
        *puVar10 = *(undefined1 *)(param_3 + 5);
        puVar10 = puVar10 + 1;
      }
      bVar2 = true;
      FUN_820786e8();
    }
  }
LAB_8207c334:
  if ((bVar1) || (!bVar2)) {
    puVar10 = extraout_r4;
  }
  *puVar10 = 0;
  FUN_82023ed0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c370 @ 8207c370 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c370(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c448 @ 8207c448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c448(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c520 @ 8207c520 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c520(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c5a0 @ 8207c5a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207c5a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207c6d8 @ 8207c6d8 ==== */

void FUN_8207c6d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8207c840 @ 8207c840 ==== */

void FUN_8207c840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207c920 @ 8207c920 ==== */

void FUN_8207c920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207ca00 @ 8207ca00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ca00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207ca88 @ 8207ca88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ca88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207cb10 @ 8207cb10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207cb10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207cf70 @ 8207cf70 ==== */

void FUN_8207cf70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207d0e8 @ 8207d0e8 ==== */

void FUN_8207d0e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207d210 @ 8207d210 ==== */

void FUN_8207d210(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207d3c8 @ 8207d3c8 ==== */

void FUN_8207d3c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207d450 @ 8207d450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d450(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d4b8 @ 8207d4b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d4b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207d610 @ 8207d610 ==== */

void FUN_8207d610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207d750 @ 8207d750 ==== */

void FUN_8207d750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207d8d8 @ 8207d8d8 ==== */

void FUN_8207d8d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207d970 @ 8207d970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207d970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207da30 @ 8207da30 ==== */

void FUN_8207da30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8207dc20 @ 8207dc20 ==== */

void FUN_8207dc20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207dc88 @ 8207dc88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dc88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207dd08 @ 8207dd08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207dd08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e140 @ 8207e140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207e140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e328 @ 8207e328 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207e328(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207e468 @ 8207e468 ==== */

void FUN_8207e468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207e610 @ 8207e610 ==== */

void FUN_8207e610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8207e908 @ 8207e908 ==== */

void FUN_8207e908(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8207eae8 @ 8207eae8 ==== */

void FUN_8207eae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207eb48 @ 8207eb48 ==== */

void FUN_8207eb48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8207ebc8 @ 8207ebc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ebc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207ecb0 @ 8207ecb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207ecb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207ed20 @ 8207ed20 ==== */

void FUN_8207ed20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8207eff8 @ 8207eff8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8207eff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8207f038 @ 8207f038 ==== */

uint FUN_8207f038(uint param_1,byte *param_2,uint param_3)

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
      uVar5 = *(uint *)(&UNK_8200f0d0 + ((bVar4 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      uVar5 = *(uint *)(&UNK_8200f0d0 + ((*pbVar1 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar5 = *(uint *)(&UNK_8200f0d0 + ((*pbVar2 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      param_1 = *(uint *)(&UNK_8200f0d0 + ((*pbVar3 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&UNK_8200f0d0 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return ~param_1;
}


/* ==== FUN_8207f118 @ 8207f118 ==== */

void FUN_8207f118(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820805c0 @ 820805c0 ==== */

void FUN_820805c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82080630 @ 82080630 ==== */

void FUN_82080630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82080698 @ 82080698 ==== */

void FUN_82080698(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820807b8 @ 820807b8 ==== */

void FUN_820807b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82080c98 @ 82080c98 ==== */

void FUN_82080c98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82080dc0 @ 82080dc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82080dc0(void)

{
  FUN_820844bc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82081830 @ 82081830 ==== */

void FUN_82081830(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82081970 @ 82081970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82081970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820819e8 @ 820819e8 ==== */

void FUN_820819e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82081ab8 @ 82081ab8 ==== */

void FUN_82081ab8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82081b38 @ 82081b38 ==== */

bool FUN_82081b38(int param_1,uint param_2)

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


/* ==== FUN_82081ba8 @ 82081ba8 ==== */

undefined4 FUN_82081ba8(int param_1,uint param_2)

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


/* ==== FUN_82081c80 @ 82081c80 ==== */

byte FUN_82081c80(int param_1,uint param_2)

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


/* ==== FUN_82082268 @ 82082268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82082268(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_820844d4();
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


/* ==== FUN_820823e8 @ 820823e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820823e8(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4,uint *param_5)

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
  
  uVar19 = FUN_820844d4();
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
      FUN_82082268(iVar3,pbVar5,param_5);
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
LAB_820825fc:
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
                        if (iVar14 != iVar8) goto LAB_82082708;
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
                        if (iVar14 != iVar8) goto LAB_82082708;
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
                  if (bVar2) goto LAB_820825fc;
                }
              }
            }
LAB_82082708:
            uVar16 = uVar16 + 1;
            piVar17 = piVar17 + 1;
          } while (uVar16 < *(uint *)(iVar3 + 0x10));
        }
        uVar15 = 0x1c;
        goto LAB_8208273c;
      }
    }
  }
  uVar15 = 0x18;
LAB_8208273c:
  *(undefined4 *)(iVar3 + 0x1c) = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082750 @ 82082750 ==== */

void FUN_82082750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820827a0 @ 820827a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820827a0(void)

{
  FUN_820844c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082bc8 @ 82082bc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82082bc8(void)

{
  FUN_820844c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082bd8 @ 82082bd8 ==== */

void FUN_82082bd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82082ce8 @ 82082ce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82082ce8(void)

{
  undefined4 *in_r6;
  undefined4 *in_r8;
  undefined8 uVar1;
  
  uVar1 = FUN_820844d4();
  if (in_r6 != (undefined4 *)0x0) {
    *in_r6 = 0;
  }
  if (((int)((ulonglong)uVar1 >> 0x20) != 0) && ((int)uVar1 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_r8 != (undefined4 *)0x0) {
    *in_r8 = 0x18;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82082eb8 @ 82082eb8 ==== */

undefined4 FUN_82082eb8(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_82082f00 @ 82082f00 ==== */

undefined4 FUN_82082f00(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
LAB_820830a8:
    if (cVar1 == '\r') goto LAB_820830b0;
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
          while (cVar1 = FUN_82082eb8(cVar1), cVar1 == '\x01') {
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
        goto LAB_820830e4;
      }
      goto LAB_820830a8;
    }
LAB_820830b0:
    if (pcVar4[1] != '\n') {
      return 0;
    }
  }
  while (cVar1 != '\n') {
    if ((cVar1 == '\0') || (cVar1 == '\n')) {
      pcVar4 = (char *)0x0;
      goto LAB_820830e4;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = pcVar4 + 1;
LAB_820830e4:
  *param_1 = (int)pcVar4;
  return 1;
}


/* ==== FUN_82083108 @ 82083108 ==== */

void FUN_82083108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82083228 @ 82083228 ==== */

void FUN_82083228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82083400 @ 82083400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083400(void)

{
  FUN_82085788();
  FUN_82085780();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083438 @ 82083438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083438(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  char cStack_70;
  
  uVar12 = FUN_820844c8();
  pbVar3 = (byte *)((ulonglong)uVar12 >> 0x20);
  puVar8 = (undefined4 *)uVar12;
  pbVar10 = pbVar3;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar4 = FUN_82085778();
    if (iVar4 < 2) {
      iVar4 = FUN_82085700();
      uVar5 = *(ushort *)(iVar4 + (uint)*pbVar10 * 2) & 8;
    }
    else {
      uVar5 = FUN_82089fe0(*pbVar10,8);
    }
    if (uVar5 == 0) break;
    pbVar10 = pbVar10 + 1;
  }
  if ((*pbVar10 == 0x2d) || (*pbVar10 == 0x2b)) {
    pbVar10 = pbVar10 + 1;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_82083674;
  if ((int)param_3 < 1) {
    if (*pbVar10 == 0x30) {
      if ((pbVar10[1] == 0x78) || (pbVar10[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_82083558;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar10 == 0x30)) &&
          ((pbVar10[1] == 0x78 || (pbVar10[1] == 0x58)))) {
LAB_82083558:
    pbVar10 = pbVar10 + 2;
  }
  bVar9 = *pbVar10;
  pbVar11 = pbVar10;
  while (bVar9 == 0x30) {
    pbVar11 = pbVar11 + 1;
    bVar9 = *pbVar11;
  }
  uVar5 = FUN_820847e0();
  pbVar6 = FUN_82084270((byte *)"0123456789abcdefghijklmnopqrstuvwxyz",uVar5,param_3);
  uVar5 = 0;
  uVar2 = 0;
  pbVar1 = pbVar11;
  while (pbVar6 != (byte *)0x0) {
    cStack_70 = (char)pbVar6 + ',';
    pbVar1 = pbVar1 + 1;
    uVar5 = FUN_820847e0((int)(char)*pbVar1);
    pbVar6 = FUN_82084270((byte *)"0123456789abcdefghijklmnopqrstuvwxyz",uVar5,param_3);
    uVar5 = uVar2;
    uVar2 = uVar2 * param_3 + (int)cStack_70;
  }
  if (pbVar10 != pbVar1) {
    if ((-1 < (int)(pbVar1 + (-(int)pbVar11 - (int)(char)(&UNK_8200fafc)[param_3]))) &&
       (((0 < (int)(pbVar1 + (-(int)pbVar11 - (int)(char)(&UNK_8200fafc)[param_3])) ||
         (uVar2 < uVar2 - (int)cStack_70)) ||
        (trapWord(6,param_3,0), (uVar2 - (int)cStack_70) / param_3 != uVar5)))) {
      puVar7 = (undefined4 *)FUN_82089ec8();
      *puVar7 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
    }
    if (puVar8 == (undefined4 *)0x0) {
      halt_baddata();
    }
    *puVar8 = pbVar1;
    halt_baddata();
  }
LAB_82083674:
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = pbVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083690 @ 82083690 ==== */

void FUN_82083690(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820837b8 @ 820837b8 ==== */

void FUN_820837b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820838e8 @ 820838e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820838e8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_820844c4();
  pbVar1 = (byte *)((ulonglong)uVar10 >> 0x20);
  puVar6 = (undefined4 *)uVar10;
  pbVar8 = pbVar1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar2 = FUN_82085778();
    if (iVar2 < 2) {
      iVar2 = FUN_82085700();
      uVar3 = *(ushort *)(iVar2 + (uint)*pbVar8 * 2) & 8;
    }
    else {
      uVar3 = FUN_82089fe0(*pbVar8,8);
    }
    if (uVar3 == 0) break;
    pbVar8 = pbVar8 + 1;
  }
  if ((*pbVar8 == 0x2d) || (*pbVar8 == 0x2b)) {
    pbVar8 = pbVar8 + 1;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) goto LAB_82083b28;
  if (param_3 < 1) {
    if (*pbVar8 == 0x30) {
      if ((pbVar8[1] == 0x78) || (pbVar8[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_82083a08;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar8 == 0x30)) && ((pbVar8[1] == 0x78 || (pbVar8[1] == 0x58))))
  {
LAB_82083a08:
    pbVar8 = pbVar8 + 2;
  }
  bVar7 = *pbVar8;
  pbVar9 = pbVar8;
  while (bVar7 == 0x30) {
    pbVar9 = pbVar9 + 1;
    bVar7 = *pbVar9;
  }
  uVar3 = FUN_820847e0();
  pbVar4 = FUN_82084270((byte *)"0123456789abcdefghijklmnopqrstuvwxyz",uVar3,param_3);
  if (pbVar4 != (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pbVar8 != pbVar9) {
    if (-1 < -(int)(char)(&UNK_8200fb4c)[param_3]) {
      if (-(int)(char)(&UNK_8200fb4c)[param_3] < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar5 = (undefined4 *)FUN_82089ec8();
      *puVar5 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
    }
    if (puVar6 == (undefined4 *)0x0) {
      halt_baddata();
    }
    *puVar6 = pbVar9;
    halt_baddata();
  }
LAB_82083b28:
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = pbVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083b40 @ 82083b40 ==== */

double FUN_82083b40(void)

{
  double dVar1;
  
  dVar1 = (double)FUN_82083b68();
  return (double)(float)dVar1;
}


/* ==== FUN_82083b68 @ 82083b68 ==== */

void FUN_82083b68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== thunk_FUN_82083b68 @ 82083c18 ==== */

void thunk_FUN_82083b68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82083c20 @ 82083c20 ==== */

void FUN_82083c20(undefined4 param_1)

{
  DAT_820c6070 = param_1;
  return;
}


/* ==== FUN_82083c30 @ 82083c30 ==== */

void FUN_82083c30(void)

{
  undefined4 in_r0;
  
  if (DAT_820c6070 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82083c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_820c6070)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_82083c68 @ 82083c68 ==== */

void FUN_82083c68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82083d08 @ 82083d08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083d08(void)

{
  FUN_82083c68();
  func_0x820bb9cc(0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82084560 @ 82083d30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82084560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82083d40 @ 82083d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82083d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820841c8 @ 820841c8 ==== */

void FUN_820841c8(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ==== FUN_82084270 @ 82084270 ==== */

byte * FUN_82084270(byte *param_1,uint param_2,int param_3)

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


/* ==== FUN_820842b0 @ 820842b0 ==== */

void FUN_820842b0(int param_1,int param_2,uint param_3)

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
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_82084370 @ 82084370 ==== */

void FUN_82084370(uint *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x820843fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x82084404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_820844b0 @ 820844b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844b4 @ 820844b4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844b4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844b8 @ 820844b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844bc @ 820844bc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844c0 @ 820844c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844c4 @ 820844c4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844c8 @ 820844c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844cc @ 820844cc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844d0 @ 820844d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844d4 @ 820844d4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844d8 @ 820844d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844dc @ 820844dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844e0 @ 820844e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844e4 @ 820844e4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844e8 @ 820844e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820844ec @ 820844ec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820844ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82084560 @ 82084560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82084560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82084560 @ 820845c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_82084560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82084628 @ 82084628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82084628(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_820844d4();
  FUN_820850d0();
  puVar6 = puRam820c7a8c;
  if (puRam820c7a90 <= puRam820c7a8c) {
    iVar4 = (int)puRam820c7a8c - (int)puRam820c7a90;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = FUN_8208af10();
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (undefined4 *)FUN_82089570(), puVar3 == (undefined4 *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (undefined4 *)FUN_82089570(), puVar3 == (undefined4 *)0x0))))
        goto LAB_82084524;
        puVar6 = puVar3 + (iVar4 >> 2);
        puRam820c7a90 = puVar3;
      }
      puRam820c7a8c = puVar6 + 1;
      *puVar6 = uVar1;
    }
  }
LAB_82084524:
  FUN_8208470c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208470c @ 8208470c ==== */

void FUN_8208470c(void)

{
  FUN_820850d8();
  return;
}


/* ==== FUN_82084730 @ 82084730 ==== */

int FUN_82084730(void)

{
  int iVar1;
  
  iVar1 = FUN_82084628();
  return -(uint)(iVar1 == 0);
}


/* ==== FUN_82084758 @ 82084758 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82084758(void)

{
  int iVar1;
  
  iVar1 = FUN_8208af68();
  if (iVar1 != 0) {
    FUN_8208af80();
  }
  if ((DAT_820c29d0 & 2) != 0) {
    FUN_82083c68();
  }
  FUN_82085348();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820847a8 @ 820847a8 ==== */

void FUN_820847a8(uint param_1,uint param_2)

{
  DAT_820c29d0 = DAT_820c29d0 & ~param_2 | param_1 & param_2;
  return;
}


/* ==== FUN_820847c8 @ 820847c8 ==== */

int FUN_820847c8(int param_1)

{
  if (param_1 < 0x61) {
    return param_1;
  }
  if (0x7a < param_1) {
    return param_1;
  }
  return param_1 + -0x20;
}


/* ==== FUN_820847e0 @ 820847e0 ==== */

int FUN_820847e0(int param_1)

{
  if (param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_820847f8 @ 820847f8 ==== */

void FUN_820847f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820848c0 @ 820848c0 ==== */

void FUN_820848c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820849c0 @ 820849c0 ==== */

int FUN_820849c0(byte *param_1,byte *param_2,int param_3)

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


/* ==== FUN_82084a10 @ 82084a10 ==== */

void FUN_82084a10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82084ad8 @ 82084ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82084ad8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82084b38 @ 82084b38 ==== */

void FUN_82084b38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82084c20 @ 82084c20 ==== */

void FUN_82084c20(void)

{
  FUN_82084b38();
  return;
}


/* ==== FUN_82084c44 @ 82084c44 ==== */

void FUN_82084c44(void)

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


/* ==== FUN_82084c4c @ 82084c4c ==== */

void FUN_82084c4c(void)

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


/* ==== FUN_82084c54 @ 82084c54 ==== */

void FUN_82084c54(void)

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


/* ==== FUN_82084c5c @ 82084c5c ==== */

void FUN_82084c5c(void)

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


/* ==== FUN_82084c68 @ 82084c68 ==== */

void FUN_82084c68(void)

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


/* ==== FUN_82084c90 @ 82084c90 ==== */

void FUN_82084c90(void)

{
  return;
}


/* ==== FUN_82084c98 @ 82084c98 ==== */

void FUN_82084c98(void)

{
  return;
}


/* ==== FUN_82084ca0 @ 82084ca0 ==== */

void FUN_82084ca0(void)

{
  return;
}


/* ==== FUN_82084cb4 @ 82084cb4 ==== */

void FUN_82084cb4(void)

{
  return;
}


/* ==== FUN_82084cd0 @ 82084cd0 ==== */

void FUN_82084cd0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_3 == 0) {
    return;
  }
  pcVar2 = param_1;
  do {
    pcVar4 = pcVar2;
    cVar1 = pcVar4[param_2 - (int)param_1];
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    param_3 = param_3 + -1;
    pcVar2 = pcVar4 + 1;
  } while (param_3 != 0);
  if (param_3 == 0) {
    return;
  }
  iVar3 = param_3 + -1;
  if (iVar3 != 0) {
    if (iVar3 != 0) {
      do {
        pcVar4 = pcVar4 + 1;
        *pcVar4 = '\0';
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    return;
  }
  return;
}


/* ==== FUN_82084d30 @ 82084d30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82084d30(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

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
  
  uVar13 = FUN_820844d4();
  pbVar3 = (byte *)((ulonglong)uVar13 >> 0x20);
  puVar4 = (undefined4 *)uVar13;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = pbVar3;
  }
  if ((pbVar3 == (byte *)0x0) || ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3))))))
  {
    puVar4 = (undefined4 *)FUN_82089ec8();
    *puVar4 = 0x16;
    FUN_82083c30();
    halt_baddata();
  }
  bVar1 = *pbVar3;
  uVar10 = 0;
  iVar7 = DAT_820c3280;
  pbVar2 = pbVar3;
  while( true ) {
    uVar12 = (uint)bVar1;
    pbVar11 = pbVar2 + 1;
    if (*(int *)(iVar7 + 0xac) < 2) {
      uVar6 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200)) & 8;
    }
    else {
      uVar6 = FUN_82089fa8((uint)bVar1,8);
      iVar7 = DAT_820c3280;
    }
    if (uVar6 == 0) break;
    bVar1 = *pbVar11;
    pbVar2 = pbVar11;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_82084e08:
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar2 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_82084e08;
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
      goto LAB_82084ea0;
    }
    if ((*pbVar11 != 0x78) && (*pbVar11 != 0x58)) {
      param_3 = 8;
      goto LAB_82084ea0;
    }
    param_3 = 0x10;
  }
  else if (param_3 != 0x10) goto LAB_82084ea0;
  if (((char)uVar12 == '0') && ((*pbVar11 == 0x78 || (*pbVar11 == 0x58)))) {
    uVar12 = (uint)pbVar11[1];
    pbVar11 = pbVar11 + 2;
  }
LAB_82084ea0:
  trapWord(6,param_3,0);
  do {
    uVar6 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200));
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 0x103) == 0) {
LAB_82084f34:
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
          puVar5 = (undefined4 *)FUN_82089ec8();
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
    if (param_3 <= uVar12) goto LAB_82084f34;
    uVar9 = param_4 | 8;
    if ((uVar10 < 0xffffffff / param_3) ||
       ((uVar10 == 0xffffffff / param_3 &&
        (trapWord(6,param_3,0), uVar12 <= -((0xffffffff / param_3) * param_3) - 1)))) {
      uVar10 = uVar10 * param_3 + uVar12;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar9 = param_4;
      if (puVar4 == (undefined4 *)0x0) goto LAB_82084f34;
    }
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    param_4 = uVar9;
  } while( true );
}


/* ==== FUN_82085008 @ 82085008 ==== */

void FUN_82085008(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FUN_82084d30(param_1,param_2,param_3,0);
  return;
}


/* ==== FUN_82085070 @ 82085070 ==== */

byte * FUN_82085070(byte *param_1,uint param_2)

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


/* ==== FUN_820850c8 @ 820850c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820850c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820850d0 @ 820850d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820850d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820850d8 @ 820850d8 ==== */

void FUN_820850d8(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_820850e0 @ 820850e0 ==== */

void FUN_820850e0(void)

{
  FUN_82086110(0);
  FUN_82083c20(0);
  FUN_8208d838(0);
  FUN_8208d820();
  return;
}


/* ==== FUN_82085120 @ 82085120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085180 @ 82085180 ==== */

void FUN_82085180(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82085304 @ 82085304 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085304(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085348 @ 82085348 ==== */

void FUN_82085348(void)

{
  FUN_82085180();
  return;
}


/* ==== FUN_82085358 @ 82085358 ==== */

void FUN_82085358(void)

{
  FUN_82085180();
  return;
}


/* ==== FUN_82085368 @ 82085368 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085368(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085398 @ 82085398 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085398(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820853e0 @ 820853e0 ==== */

void FUN_820853e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820854b8 @ 820854b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820854b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820854f8 @ 820854f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820854f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820855b8 @ 820855b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820855b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085628 @ 82085628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085628(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085700 @ 82085700 ==== */

undefined4 FUN_82085700(void)

{
  return uRam820c29e8;
}


/* ==== FUN_82085710 @ 82085710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085778 @ 82085778 ==== */

undefined4 FUN_82085778(void)

{
  return 1;
}


/* ==== FUN_82085780 @ 82085780 ==== */

undefined4 FUN_82085780(void)

{
  return 0;
}


/* ==== FUN_82085788 @ 82085788 ==== */

undefined * FUN_82085788(void)

{
  return &DAT_820c31b4;
}


/* ==== FUN_82085798 @ 82085798 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085798(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820857c8 @ 820857c8 ==== */

undefined4 FUN_820857c8(void)

{
  int iVar1;
  
  iVar1 = FUN_820854b8();
  return *(undefined4 *)(iVar1 + 0x90);
}


/* ==== FUN_820857f0 @ 820857f0 ==== */

int FUN_820857f0(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) == 0) {
    return param_1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return param_1;
  }
  return *(int *)(*(int *)(param_1 + 4) + 4);
}


/* ==== FUN_82085810 @ 82085810 ==== */

void FUN_82085810(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0xa40;
  if (param_1 == param_2) {
    return;
  }
  if (param_2 <= param_1) {
    iVar3 = 0xa41;
    uVar5 = param_2 + 0xa40;
    for (puVar4 = (undefined4 *)(param_1 + 0xa40); iVar3 = iVar3 + -1,
        iVar3 != 0 && ((uint)puVar4 & 3) != 0; puVar4 = (undefined4 *)((int)puVar4 + -1)) {
      uVar6 = uVar6 - 1;
      puVar2 = (undefined1 *)(uVar5 - 1);
      uVar5 = uVar5 - 1;
      *(undefined1 *)((int)puVar4 + -1) = *puVar2;
    }
    uVar7 = uVar6 >> 2;
    if (uVar7 != 0) {
      if ((uVar5 & 3) == 0) {
        do {
          puVar1 = (undefined4 *)(uVar5 - 4);
          uVar5 = uVar5 - 4;
          puVar4[-1] = *puVar1;
          puVar4 = puVar4 + -1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      else {
        do {
          puVar4 = puVar4 + -1;
          puVar1 = (undefined4 *)(uVar5 - 4);
          uVar5 = uVar5 - 4;
          *puVar4 = *puVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    uVar6 = uVar6 & 3;
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
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_82085818 @ 82085818 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085818(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820858a0 @ 820858a0 ==== */

void FUN_820858a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82085990 @ 82085990 ==== */

void FUN_82085990(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82085a10 @ 82085a10 ==== */

void FUN_82085a10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82085ad0 @ 82085ad0 ==== */

void FUN_82085ad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82085c28 @ 82085c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085c28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085ce0 @ 82085ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085d38 @ 82085d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085e70 @ 82085e70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085e70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82085f28 @ 82085f28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82085f28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086008 @ 82086008 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086060 @ 82086060 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086060(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086110 @ 82086110 ==== */

void FUN_82086110(undefined4 param_1)

{
  DAT_820c6094 = param_1;
  return;
}


/* ==== FUN_82086120 @ 82086120 ==== */

undefined4 FUN_82086120(void)

{
  int iVar1;
  
  if ((DAT_820c6094 != (code *)0x0) && (iVar1 = (*DAT_820c6094)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_82086168 @ 82086168 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_82086168(undefined8 param_1,undefined8 param_2)

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
  return uRam820c3468;
}


/* ==== FUN_820862f0 @ 820862f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820862f0(undefined4 param_1,undefined4 param_2,uint param_3,undefined *param_4)

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
  
  uVar13 = FUN_820844d0();
  puVar10 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
  uVar4 = (uint)uVar13;
  if ((((puVar10 == (undefined1 *)0x0) && (uVar4 != 0)) || (param_3 == 0)) ||
     ((code *)param_4 == (code *)0x0)) {
    puVar2 = (undefined4 *)FUN_82089ec8();
    *puVar2 = 0x16;
    FUN_82083c30();
  }
  else if (1 < uVar4) {
    iVar8 = 0;
    puVar9 = local_154;
    puVar2 = local_d4;
    puVar11 = puVar10 + (uVar4 - 1) * param_3;
LAB_82086368:
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
LAB_820864fc:
      if (puVar12 < puVar5) {
        do {
          puVar12 = puVar12 + param_3;
          if (puVar5 <= puVar12) goto LAB_82086530;
          iVar3 = (*(code *)param_4)(puVar12,puVar5);
        } while (iVar3 < 1);
        if (puVar5 <= puVar12) goto LAB_82086530;
      }
      else {
LAB_82086530:
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
        goto LAB_820864fc;
      }
      puVar6 = puVar6 + param_3;
      if (puVar5 < puVar6) {
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar5) goto LAB_820865f0;
          iVar3 = (*(code *)param_4)(puVar6,puVar5);
        } while (iVar3 == 0);
        if (puVar6 <= puVar5) goto LAB_820865f0;
      }
      else {
LAB_820865f0:
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar10) break;
          iVar3 = (*(code *)param_4)(puVar6,puVar5);
        } while (iVar3 == 0);
      }
      if ((int)puVar6 - (int)puVar10 < (int)puVar11 - (int)puVar12) goto LAB_82086650;
      if (puVar10 < puVar6) {
        puVar2[1] = puVar10;
        iVar8 = iVar8 + 1;
        puVar9[1] = puVar6;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar10 = puVar12;
      if (puVar11 <= puVar12) goto LAB_82086400;
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
    goto LAB_82086400;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_82086650:
  if (puVar12 < puVar11) {
    puVar2 = puVar2 + 1;
    *puVar2 = puVar12;
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 1;
    *puVar9 = puVar11;
  }
  puVar11 = puVar6;
  if (puVar6 <= puVar10) {
LAB_82086400:
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) {
      halt_baddata();
    }
    puVar10 = (undefined1 *)*puVar2;
    puVar11 = (undefined1 *)*puVar9;
    puVar9 = puVar9 + -1;
    puVar2 = puVar2 + -1;
  }
  goto LAB_82086368;
}


/* ==== FUN_820867a4 @ 820867a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820867a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820867e0 @ 820867e0 ==== */

void FUN_820867e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820867e8 @ 820867e8 ==== */

void FUN_820867e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82086890 @ 82086890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086954 @ 82086954 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086954(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086990 @ 82086990 ==== */

void FUN_82086990(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82086a60 @ 82086a60 ==== */

void FUN_82086a60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82086b14 @ 82086b14 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086b14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086b50 @ 82086b50 ==== */

void FUN_82086b50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82086d78 @ 82086d78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086e1c @ 82086e1c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086e1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82086e58 @ 82086e58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82086e58(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

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
  
  uVar11 = FUN_820844c8();
  puVar1 = (uint *)((ulonglong)uVar11 >> 0x20);
  uVar4 = (uint)uVar11;
  if (param_3 == 0) {
    halt_baddata();
  }
  if (param_4 == 0) {
    halt_baddata();
  }
  if (puVar1 == (uint *)0x0) {
LAB_82086e98:
    puVar2 = (undefined4 *)FUN_82089ec8();
    uVar3 = 0x16;
LAB_82086ea0:
    *puVar2 = uVar3;
    FUN_82083c30();
  }
  else {
    if ((param_5 == (int *)0x0) || (trapWord(6,param_3,0), 0xffffffff / param_3 < param_4)) {
      if (uVar4 != 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_82084370(puVar1,0,uVar4);
      }
      if ((param_5 == (int *)0x0) || (trapWord(6,param_3,0), 0xffffffff / param_3 < param_4))
      goto LAB_82086e98;
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
LAB_82086fa4:
          if (uVar5 < uVar6) {
            iVar8 = FUN_8208f7d8();
            if (iVar8 == -1) {
LAB_820870a8:
              trapWord(6,param_3,0);
              halt_baddata();
            }
            if (uVar7 == 0) goto LAB_82087074;
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
LAB_82087074:
              if (uVar4 != 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_82084370(puVar1,0,uVar4);
              }
              puVar2 = (undefined4 *)FUN_82089ec8();
              uVar3 = 0x22;
              goto LAB_82086ea0;
            }
            FUN_8208f390((int)param_5);
            iVar8 = FUN_8208ffa8();
            if (iVar8 == 0) {
              uVar4 = param_5[3] | 0x10;
LAB_820870b8:
              param_5[3] = uVar4;
              trapWord(6,param_3,0);
              halt_baddata();
            }
            if (iVar8 == -1) {
              uVar4 = param_5[3] | 0x20;
              goto LAB_820870b8;
            }
            uVar5 = uVar5 - iVar8;
            puVar9 = puVar9 + iVar8;
            iVar8 = uVar7 - iVar8;
          }
        }
        else {
          uVar10 = param_5[1];
          if (uVar10 == 0) goto LAB_82086fa4;
          if ((int)uVar10 < 0) {
            param_5[3] = param_5[3] | 0x20;
            goto LAB_820870a8;
          }
          if (uVar5 < uVar10) {
            uVar10 = uVar5;
          }
          if (uVar7 < uVar10) goto LAB_82087074;
          FUN_82090150();
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


/* ==== FUN_820871c4 @ 820871c4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820871c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087200 @ 82087200 ==== */

void FUN_82087200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82087218 @ 82087218 ==== */

void FUN_82087218(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82087488 @ 82087488 ==== */

void FUN_82087488(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8208753c @ 8208753c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208753c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087578 @ 82087578 ==== */

undefined * FUN_82087578(void)

{
  return &DAT_820c29f8;
}


/* ==== FUN_820876f0 @ 820876f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820876f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087760 @ 82087760 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087760(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820877b0 @ 820877b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820877b0(uint param_1)

{
  if ((0x820c29f7 < param_1) && (param_1 < 0x820c2c59)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_8208d488();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820877f0 @ 820877f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820877f0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087818 @ 82087818 ==== */

void FUN_82087818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820878b0 @ 820878b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820878b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087930 @ 82087930 ==== */

void FUN_82087930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82087a54 @ 82087a54 ==== */

void FUN_82087a54(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_82087aa4 @ 82087aa4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087aa4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087b10 @ 82087b10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087b10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087bcc @ 82087bcc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087bcc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087c08 @ 82087c08 ==== */

void FUN_82087c08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82087c10 @ 82087c10 ==== */

char * FUN_82087c10(char *param_1,char *param_2)

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


/* ==== FUN_82087c88 @ 82087c88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087c88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087d68 @ 82087d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82087d68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82087e48 @ 82087e48 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_82087e48(double param_1)

{
  double dVar1;
  ushort uStack00000010;
  
  if (param_1 == DAT_82004a50) {
    return DAT_82004c68;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uStack00000010 & 0x7ff0) == 0x7ff0) {
    if (_UNK_82005070 < param_1) {
      return param_1;
    }
  }
  else {
    if (DAT_82004c68 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    dVar1 = dRam820c3460;
    if (param_1 == DAT_82004c68) goto LAB_82087e94;
  }
  dVar1 = dRam820c3468;
LAB_82087e94:
  return -dVar1;
}


/* ==== FUN_82087fd8 @ 82087fd8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_82087fd8(double param_1)

{
  int iStack00000014;
  
  if (((((ulonglong)param_1 & 0x7ff0000000000000) != 0) ||
      ((((ulonglong)param_1 & 0xfffff00000000) == 0 &&
       (iStack00000014 = SUB84(param_1,0), iStack00000014 == 0)))) &&
     ((double)(longlong)param_1 == param_1)) {
    if ((double)(longlong)(param_1 * _UNK_82005050) == param_1 * _UNK_82005050) {
      return 2;
    }
    return 1;
  }
  return 0;
}


/* ==== FUN_82088048 @ 82088048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088048(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820881d0 @ 820881d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820881d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820886c0 @ 820886c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820886c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820886e8 @ 820886e8 ==== */

double FUN_820886e8(double param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(param_1);
  if (dVar3 <= (double)DAT_820c2dbc) {
    dVar2 = dVar3 * dVar3;
    iVar1 = param_3;
    if ((param_3 == 0) && (param_1 == (double)DAT_820c2db0)) {
      return param_1;
    }
  }
  else {
    dVar2 = ((double)DAT_820c2db4 - dVar3) * (double)DAT_820c2dbc;
    dVar3 = -(SQRT(dVar2) * (double)DAT_820c2db8);
    iVar1 = 1 - param_3;
  }
  iVar1 = iVar1 * 8;
  dVar3 = (((((DAT_820c2e00 * dVar2 + DAT_820c2df8) * dVar2 + DAT_820c2df0) * dVar2 + DAT_820c2de8)
            * dVar2 + DAT_820c2de0) * dVar2 * dVar3) /
          (((((DAT_820c2e28 + dVar2) * dVar2 + DAT_820c2e20) * dVar2 + DAT_820c2e18) * dVar2 +
           DAT_820c2e10) * dVar2 + DAT_820c2e08) + dVar3;
  if (param_3 == 0) {
    dVar2 = *(double *)(&DAT_820c2dc0 + iVar1) + dVar3;
    if (param_1 < 0.0) {
      dVar2 = -(*(double *)(&DAT_820c2dc0 + iVar1) + dVar3);
    }
    return dVar2;
  }
  dVar2 = *(double *)(&DAT_820c2dc0 + iVar1) - dVar3;
  if (param_1 < 0.0) {
    dVar2 = *(double *)(&DAT_820c2dd0 + iVar1) + dVar3;
  }
  return dVar2;
}


/* ==== FUN_820887e0 @ 820887e0 ==== */

void FUN_820887e0(double param_1,undefined4 param_2)

{
  FUN_820886e8(param_1,param_2,1);
  return;
}


/* ==== FUN_820887e8 @ 820887e8 ==== */

double FUN_820887e8(double param_1)

{
  double dVar1;
  
  dVar1 = (double)(longlong)param_1;
  if (dVar1 - param_1 < 0.0) {
    dVar1 = dVar1 + DAT_82004a50;
  }
  if (DAT_820105f0 - ABS(param_1) < 0.0) {
    dVar1 = param_1;
  }
  if (-ABS(param_1) < 0.0) {
    param_1 = dVar1;
  }
  return param_1;
}


/* ==== FUN_82088834 @ 82088834 ==== */

void FUN_82088834(void)

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


/* ==== FUN_82088858 @ 82088858 ==== */

void FUN_82088858(undefined4 param_1)

{
  FUN_82084d30(param_1,0,10,0);
  return;
}


/* ==== FUN_820888f8 @ 820888f8 ==== */

void FUN_820888f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82088910 @ 82088910 ==== */

void FUN_82088910(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82088a30 @ 82088a30 ==== */

void FUN_82088a30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82088b80 @ 82088b80 ==== */

void FUN_82088b80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82088b90 @ 82088b90 ==== */

void FUN_82088b90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82088d00 @ 82088d00 ==== */

void FUN_82088d00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82088ed8 @ 82088ed8 ==== */

undefined4 FUN_82088ed8(void)

{
  return DAT_820c2e98;
}


/* ==== FUN_82088ee8 @ 82088ee8 ==== */

undefined8 FUN_82088ee8(undefined8 param_1,undefined8 param_2)

{
  uint uStack00000010;
  uint uStack00000018;
  
  uStack00000018 = (uint)((ulonglong)param_2 >> 0x20);
  uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
  return CONCAT44(uStack00000010 & 0x7fffffff | uStack00000018 & 0x80000000,(int)param_1);
}


/* ==== FUN_82088f20 @ 82088f20 ==== */

int FUN_82088f20(undefined8 param_1)

{
  int iVar1;
  ushort uStack00000010;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  iVar1 = (uStack00000010 & 0x7ff0) - 0x7ff0;
  return iVar1 - (((uStack00000010 & 0x7ff0) - 0x7ff1) + (uint)(iVar1 == 0));
}


/* ==== FUN_82088f40 @ 82088f40 ==== */

undefined4 FUN_82088f40(ulonglong param_1)

{
  ushort uStack00000010;
  int iStack00000014;
  
  uStack00000010 = (ushort)(param_1 >> 0x30);
  if ((((uStack00000010 & 0x7ff8) != 0x7ff0) ||
      (((param_1 & 0x7ffff00000000) == 0 && (iStack00000014 = (int)param_1, iStack00000014 == 0))))
     && ((uStack00000010 & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}


/* ==== FUN_82088f88 @ 82088f88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82088f88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089568 @ 82089568 ==== */

void FUN_82089568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82089570 @ 82089570 ==== */

void FUN_82089570(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82089668 @ 82089668 ==== */

void FUN_82089668(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8208978c @ 8208978c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208978c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820897a4 @ 820897a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820897a4(void)

{
  uint unaff_r28;
  
  FUN_820877b0(unaff_r28);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820897c8 @ 820897c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820897c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089840 @ 82089840 ==== */

void FUN_82089840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82089930 @ 82089930 ==== */

void FUN_82089930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820899e4 @ 820899e4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820899e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089a20 @ 82089a20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089a20(void)

{
  FUN_820844d4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089d78 @ 82089d78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089e1c @ 82089e1c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089e1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089e58 @ 82089e58 ==== */

undefined4 FUN_82089e58(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = &DAT_820c2ea0;
  do {
    if (param_1 == *puVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x7df3d15c);
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


/* ==== FUN_82089ec8 @ 82089ec8 ==== */

undefined * FUN_82089ec8(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_820853e0();
  if (iVar1 == 0) {
    puVar2 = &DAT_820c3008;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 8);
  }
  return puVar2;
}


/* ==== FUN_82089f00 @ 82089f00 ==== */

undefined * FUN_82089f00(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_820853e0();
  if (iVar1 == 0) {
    puVar2 = &DAT_820c300c;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0xc);
  }
  return puVar2;
}


/* ==== FUN_82089f38 @ 82089f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82089f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82089fa8 @ 82089fa8 ==== */

ushort FUN_82089fa8(int param_1,ushort param_2)

{
  if ((-2 < param_1) && (param_1 < 0x100)) {
    return *(ushort *)(*(int *)(DAT_820c3280 + 200) + param_1 * 2) & param_2;
  }
  return 0;
}


/* ==== FUN_82089fe0 @ 82089fe0 ==== */

ushort FUN_82089fe0(int param_1,ushort param_2)

{
  return *(ushort *)(param_1 * 2 + iRam820c3270) & param_2;
}


/* ==== FUN_8208a160 @ 8208a160 ==== */

void FUN_8208a160(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208a168 @ 8208a168 ==== */

void FUN_8208a168(void)

{
  uRam820c7a80 = 0;
  return;
}


/* ==== FUN_8208a178 @ 8208a178 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208a178(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208a2e8 @ 8208a2e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208a2e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208a360 @ 8208a360 ==== */

void FUN_8208a360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8208a5b0 @ 8208a5b0 ==== */

void FUN_8208a5b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208a6a0 @ 8208a6a0 ==== */

void FUN_8208a6a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8208aab0 @ 8208aab0 ==== */

void FUN_8208aab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8208af10 @ 8208af10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208af10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208af68 @ 8208af68 ==== */

undefined4 FUN_8208af68(void)

{
  return DAT_820c60ac;
}


/* ==== FUN_8208af80 @ 8208af80 ==== */

void FUN_8208af80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8208b228 @ 8208b228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208b228(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208b268 @ 8208b268 ==== */

ushort FUN_8208b268(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam820c3270) & 4;
}


/* ==== FUN_8208b288 @ 8208b288 ==== */

ushort FUN_8208b288(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam820c3270) & 0x80;
}


/* ==== FUN_8208b2a8 @ 8208b2a8 ==== */

ushort FUN_8208b2a8(int param_1)

{
  return *(ushort *)(param_1 * 2 + iRam820c3270) & 8;
}


/* ==== FUN_8208b2c8 @ 8208b2c8 ==== */

undefined4 FUN_8208b2c8(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_82010e20;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(&UNK_82010e24 + uVar2 * 8);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x16);
  return 0;
}


/* ==== FUN_8208b310 @ 8208b310 ==== */

void FUN_8208b310(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_8208b2c8(param_1);
  if (iVar1 != 0) {
    FUN_82097f90();
  }
  return;
}


/* ==== FUN_8208b340 @ 8208b340 ==== */

void FUN_8208b340(void)

{
  int iVar1;
  
  iVar1 = FUN_8208b2c8(0xfc);
  if (iVar1 != 0) {
    FUN_82097f90();
  }
  iVar1 = FUN_8208b2c8(0xff);
  if (iVar1 != 0) {
    FUN_82097f90();
  }
  return;
}


/* ==== FUN_8208b388 @ 8208b388 ==== */

void FUN_8208b388(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208b560 @ 8208b560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208b560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208b5f8 @ 8208b5f8 ==== */

void FUN_8208b5f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8208c128 @ 8208c128 ==== */

void FUN_8208c128(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208c1c8 @ 8208c1c8 ==== */

void FUN_8208c1c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8208d418 @ 8208d418 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d418(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d488 @ 8208d488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d4a8 @ 8208d4a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d4a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d540 @ 8208d540 ==== */

void FUN_8208d540(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208d5c8 @ 8208d5c8 ==== */

void FUN_8208d5c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208d6d8 @ 8208d6d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d6d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d708 @ 8208d708 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d708(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d770 @ 8208d770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d770(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d7d0 @ 8208d7d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208d7d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208d820 @ 8208d820 ==== */

void FUN_8208d820(void)

{
  DAT_820c6240 = &LAB_8208b170;
  return;
}


/* ==== FUN_8208d838 @ 8208d838 ==== */

void FUN_8208d838(undefined4 param_1)

{
  DAT_820c6244 = param_1;
  return;
}


/* ==== FUN_8208d858 @ 8208d858 ==== */

void FUN_8208d858(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208d920 @ 8208d920 ==== */

void FUN_8208d920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8208d9d8 @ 8208d9d8 ==== */

int FUN_8208d9d8(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)(param_3 + 0xc) != 0) &&
      (piVar1 = *(int **)(*(int *)(param_2 + 8) + 4), piVar1 != (int *)0x0)) &&
     (iVar2 = *piVar1, iVar2 != -2)) {
    return iVar2;
  }
  iVar2 = FUN_8208d920();
  return iVar2;
}


/* ==== FUN_8208da18 @ 8208da18 ==== */

void FUN_8208da18(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (*(int *)(param_3 + 0xc) == 0) {
    return;
  }
  if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
    return;
  }
  **(undefined4 **)(param_1 + 4) = param_4;
  return;
}


/* ==== FUN_8208da38 @ 8208da38 ==== */

undefined4 FUN_8208da38(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = param_1[1];
  if (uVar3 == 0) {
    return 1;
  }
  pcVar5 = (char *)(uVar3 + 8);
  if (*(char *)(uVar3 + 8) == '\0') {
    return 1;
  }
  if (uVar3 != param_2[1]) {
    pcVar4 = (char *)(param_2[1] + 8);
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
     (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) {
    if ((*param_3 & 2) == 0) {
      return 1;
    }
    if ((*param_1 & 2) != 0) {
      return 1;
    }
  }
  return 0;
}


/* ==== FUN_8208dae8 @ 8208dae8 ==== */

undefined4 FUN_8208dae8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if ((iVar1 != -0x1fbcbcae) && (iVar1 != -0x1fbcb0b3)) {
    if (iVar1 != -0x1f928c9d) {
      return 0;
    }
    iVar1 = FUN_820854b8();
    *(undefined4 *)(iVar1 + 0x84) = 0;
    FUN_8208d770();
  }
  iVar1 = FUN_820854b8();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = FUN_820854b8();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return 0;
}


/* ==== FUN_8208db78 @ 8208db78 ==== */

void FUN_8208db78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8208dcf4 @ 8208dcf4 ==== */

void FUN_8208dcf4(void)

{
  int iVar1;
  
  iVar1 = FUN_820854b8();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = FUN_820854b8();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return;
}


/* ==== FUN_8208dd34 @ 8208dd34 ==== */

void FUN_8208dd34(undefined4 *param_1)

{
  FUN_8208dae8(param_1);
  return;
}


/* ==== FUN_8208dd58 @ 8208dd58 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8208dd58(int param_1,int param_2,undefined4 param_3)

{
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    return 1;
  }
  *(undefined4 *)(param_2 + 0xc) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208dda0 @ 8208dda0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208dda0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208de48 @ 8208de48 ==== */

void FUN_8208de48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8208df18 @ 8208df18 ==== */

void FUN_8208df18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208e1a8 @ 8208e1a8 ==== */

void FUN_8208e1a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8208e2d8 @ 8208e2d8 ==== */

void FUN_8208e2d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8208e420 @ 8208e420 ==== */

void FUN_8208e420(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8208e598 @ 8208e598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208e598(void)

{
  int iVar1;
  byte bVar3;
  int iVar2;
  uint *puVar4;
  int in_r6;
  int *piVar5;
  int in_r7;
  uint *puVar6;
  uint in_r8;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  uint local_80;
  uint local_7c;
  
  uVar13 = FUN_820844c0();
  piVar12 = (int *)((ulonglong)uVar13 >> 0x20);
  iVar1 = FUN_8208d9d8((int)uVar13,in_r6,in_r7);
  if ((iVar1 < -1) || (*(int *)(in_r7 + 4) <= iVar1)) {
    FUN_8208d7d0();
  }
  if (*piVar12 == -0x1f928c9d) {
    if ((piVar12[4] == 3) &&
       ((((iVar7 = piVar12[5], iVar7 == 0x19930520 || (iVar7 == 0x19930521)) ||
         (iVar7 == 0x19930522)) && (piVar12[7] == 0)))) {
      iVar7 = FUN_820854b8();
      if (*(int *)(iVar7 + 0x7c) == 0) {
        halt_baddata();
      }
      iVar7 = FUN_820854b8();
      piVar12 = *(int **)(iVar7 + 0x7c);
      FUN_820854b8();
      bVar3 = FUN_820950d0((int)piVar12);
      if (bVar3 == 0) {
        FUN_8208d7d0();
      }
      if (*piVar12 != -0x1f928c9d) goto LAB_8208e808;
      if ((piVar12[4] == 3) &&
         ((((iVar7 = piVar12[5], iVar7 == 0x19930520 || (iVar7 == 0x19930521)) ||
           (iVar7 == 0x19930522)) && (piVar12[7] == 0)))) {
        FUN_8208d7d0();
      }
    }
    if (((*piVar12 == -0x1f928c9d) && (piVar12[4] == 3)) &&
       ((iVar7 = piVar12[5], iVar7 == 0x19930520 || ((iVar7 == 0x19930521 || (iVar7 == 0x19930522)))
        ))) {
      if (*(int *)(in_r7 + 0xc) == 0) {
        halt_baddata();
      }
      iVar7 = FUN_82085ad0();
      if (local_7c <= local_80) {
        halt_baddata();
      }
      puVar9 = (undefined4 *)(iVar7 + 0x10);
      do {
        if (((int)puVar9[-4] <= iVar1) && (iVar1 <= (int)puVar9[-3])) {
          iVar7 = puVar9[-1];
          puVar6 = (uint *)*puVar9;
          if (0 < iVar7) {
            piVar8 = *(int **)(piVar12[7] + 0xc);
            iVar10 = *piVar8;
            do {
              if (0 < iVar10) {
                puVar4 = (uint *)piVar12[7];
                iVar11 = iVar10;
                piVar5 = piVar8;
                do {
                  piVar5 = piVar5 + 1;
                  iVar2 = FUN_8208da38(puVar6,(uint *)*piVar5,puVar4);
                  if (iVar2 != 0) {
                    FUN_8208e2d8();
                    goto LAB_8208e7e8;
                  }
                  iVar11 = iVar11 + -1;
                } while (0 < iVar11);
              }
              iVar7 = iVar7 + -1;
              puVar6 = puVar6 + 4;
            } while (0 < iVar7);
          }
        }
LAB_8208e7e8:
        local_80 = local_80 + 1;
        puVar9 = puVar9 + 5;
        if (local_7c <= local_80) {
          halt_baddata();
        }
      } while( true );
    }
  }
LAB_8208e808:
  if (*(int *)(in_r7 + 0xc) != 0) {
    if ((in_r8 & 0xff) != 0) {
      FUN_8208d770();
                    /* WARNING: Subroutine does not return */
      FUN_820844e4();
    }
    FUN_8208e420();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208ea70 @ 8208ea70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208ea70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208eb18 @ 8208eb18 ==== */

void FUN_8208eb18(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_8208eb40 @ 8208eb40 ==== */

undefined4 FUN_8208eb40(void)

{
  return 0x820c3458;
}


/* ==== FUN_8208eb50 @ 8208eb50 ==== */

undefined4 FUN_8208eb50(void)

{
  return 0x820c33a8;
}


/* ==== FUN_8208eb60 @ 8208eb60 ==== */

undefined8 FUN_8208eb60(undefined8 param_1,undefined4 param_2,short param_3)

{
  ushort uStack00000010;
  undefined8 uStack_10;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uStack_10 = CONCAT26((param_3 + 0x3fe) * 0x10 | uStack00000010 & 0x800f,(int6)param_1);
  return uStack_10;
}


/* ==== FUN_8208eb88 @ 8208eb88 ==== */

int FUN_8208eb88(undefined8 param_1)

{
  return (int)(short)(((ushort)((ulonglong)param_1 >> 0x34) & 0x7ff) - 0x3fe);
}


/* ==== FUN_8208eba0 @ 8208eba0 ==== */

undefined4 FUN_8208eba0(ulonglong param_1)

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


/* ==== FUN_8208ec28 @ 8208ec28 ==== */

double FUN_8208ec28(double param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ushort uStack00000010;
  undefined6 uStack00000012;
  double dStack_10;
  
  if (param_1 == DAT_82004c68) {
    iVar4 = 0;
    goto LAB_8208ed14;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar1 = uStack00000010;
  uVar3 = (uint)uStack00000010;
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    _uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
    uStack00000012._2_4_ = SUB84(param_1,0);
    if ((((ulonglong)param_1 & 0xfffff00000000) == 0) && (uStack00000012._2_4_ == 0))
    goto LAB_8208ecec;
    iVar4 = -0x3fd;
    bVar5 = param_1 < DAT_82004c68;
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
LAB_8208ecec:
    iVar4 = ((uVar3 & 0x7ff0) >> 4) - 0x3fe;
  }
  dStack_10 = (double)((ulonglong)param_1 & 0x800fffffffffffff | 0x3fe0000000000000);
  param_1 = dStack_10;
LAB_8208ed14:
  *param_3 = iVar4;
  return param_1;
}


/* ==== FUN_8208ed20 @ 8208ed20 ==== */

void FUN_8208ed20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8208ef68 @ 8208ef68 ==== */

void FUN_8208ef68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8208f0f4 @ 8208f0f4 ==== */

void FUN_8208f0f4(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_8208f120 @ 8208f120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208f148 @ 8208f148 ==== */

void FUN_8208f148(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8208f230 @ 8208f230 ==== */

void FUN_8208f230(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8208f358 @ 8208f358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208f390 @ 8208f390 ==== */

undefined4 FUN_8208f390(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_82089ec8();
    *puVar1 = 0x16;
    FUN_82083c30();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_8208f3d0 @ 8208f3d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f3d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208f438 @ 8208f438 ==== */

void FUN_8208f438(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8208f4f8 @ 8208f4f8 ==== */

void FUN_8208f4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8208f63c @ 8208f63c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8208f63c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208f7d8 @ 8208f7d8 ==== */

void FUN_8208f7d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8208f988 @ 8208f988 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8208ff24) */

void FUN_8208f988(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  char local_80;
  uint local_7c;
  
  lVar14 = FUN_820844c0();
  uVar11 = (uint)((ulonglong)lVar14 >> 0x20);
  pbVar4 = (byte *)lVar14;
  if (uVar11 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_82089f00();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_82089ec8();
    uVar5 = 9;
LAB_8208f9c4:
    *puVar1 = uVar5;
    halt_baddata();
  }
  if ((-1 < lVar14) && (uVar11 < DAT_820c7968)) {
    iVar3 = ((int)uVar11 >> 5) * 4;
    iVar8 = (uVar11 & 0x1f) * 0x48;
    bVar6 = *(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 4);
    if ((bVar6 & 1) != 0) {
      if (param_3 < 0x80000000) {
        iVar9 = 0;
        if (param_3 == 0) {
          halt_baddata();
        }
        if ((bVar6 & 2) != 0) {
          halt_baddata();
        }
        if (pbVar4 != (byte *)0x0) {
          cVar7 = *(char *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x28) >> 1;
          if (cVar7 != '\x01') {
            if (cVar7 == '\x02') {
              if ((~param_3 & 1) == 0) goto LAB_8208fa88;
              param_3 = param_3 & 0xfffffffe;
            }
            uVar11 = param_3;
            if ((((*(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 4) & 0x48) != 0) &&
                (bVar6 = *(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 5), bVar6 != 10)) &&
               (param_3 != 0)) {
              *pbVar4 = bVar6;
              iVar9 = 1;
              *(undefined1 *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 5) = 10;
              uVar11 = param_3 - 1;
              if (((cVar7 != '\0') &&
                  (bVar6 = *(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x29), bVar6 != 10))
                 && (uVar11 != 0)) {
                pbVar4[1] = bVar6;
                iVar9 = 2;
                *(undefined1 *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x29) = 10;
                uVar11 = param_3 - 2;
                if (((cVar7 == '\x01') &&
                    (bVar6 = *(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x2a), bVar6 != 10)
                    ) && (uVar11 != 0)) {
                  pbVar4[2] = bVar6;
                  iVar9 = 3;
                  *(undefined1 *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x2a) = 10;
                  uVar11 = param_3 - 3;
                }
              }
            }
            iVar2 = FUN_8202f8d8();
            if (((iVar2 == 0) || ((int)local_7c < 0)) || (uVar11 < local_7c)) {
              iVar3 = thunk_FUN_82030910();
              if (iVar3 == 5) {
                puVar1 = (undefined4 *)FUN_82089ec8();
                *puVar1 = 9;
                puVar1 = (undefined4 *)FUN_82089f00();
                uVar5 = 5;
LAB_8208fe54:
                *puVar1 = uVar5;
                halt_baddata();
              }
              if (iVar3 == 0x6d) {
                halt_baddata();
              }
            }
            else {
              iVar2 = iVar8 + *(int *)(&DAT_820c7980 + iVar3);
              if ((*(byte *)(iVar2 + 4) & 0x80) == 0) {
                halt_baddata();
              }
              if ((local_7c == 0) || (*pbVar4 != 10)) {
                bVar6 = *(byte *)(iVar2 + 4) & 0xfb;
              }
              else {
                bVar6 = *(byte *)(iVar2 + 4) | 4;
              }
              *(byte *)(iVar2 + 4) = bVar6;
              pbVar13 = pbVar4;
              pbVar12 = pbVar4;
              while (pbVar13 < pbVar4 + local_7c + iVar9) {
                bVar6 = *pbVar13;
                if (bVar6 == 0x1a) {
                  iVar9 = iVar8 + *(int *)(&DAT_820c7980 + iVar3);
                  if ((*(byte *)(iVar9 + 4) & 0x40) == 0) {
                    *(byte *)(iVar9 + 4) = *(byte *)(iVar9 + 4) | 2;
                  }
                  else {
                    *pbVar12 = 0x1a;
                    pbVar12 = pbVar12 + 1;
                  }
                  break;
                }
                if (bVar6 != 0xd) {
                  *pbVar12 = bVar6;
                  pbVar10 = pbVar13 + 1;
                  goto LAB_8208fda0;
                }
                if (pbVar13 < pbVar4 + local_7c + iVar9 + -1) {
                  pbVar10 = pbVar13 + 1;
                  if (pbVar13[1] == 10) {
                    *pbVar12 = 10;
                    pbVar10 = pbVar13 + 2;
                  }
                  else {
                    *pbVar12 = 0xd;
                  }
                  goto LAB_8208fda0;
                }
                pbVar10 = pbVar13 + 1;
                iVar2 = FUN_8202f8d8();
                if (((iVar2 == 0) && (iVar2 = thunk_FUN_82030910(), iVar2 != 0)) || (local_7c == 0))
                goto LAB_8208fd9c;
                if ((*(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 4) & 0x48) != 0) {
                  if (local_80 != '\n') {
                    *pbVar12 = 0xd;
                    *(char *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 5) = local_80;
                    goto LAB_8208fda0;
                  }
LAB_8208fd4c:
                  *pbVar12 = 10;
                  goto LAB_8208fda0;
                }
                if ((pbVar12 == pbVar4) && (local_80 == '\n')) goto LAB_8208fd4c;
                FUN_820944a0();
                pbVar13 = pbVar10;
                if (local_80 != '\n') {
LAB_8208fd9c:
                  *pbVar12 = 0xd;
LAB_8208fda0:
                  pbVar12 = pbVar12 + 1;
                  pbVar13 = pbVar10;
                }
              }
              if (cVar7 != '\x01') {
                halt_baddata();
              }
              if (pbVar12 == pbVar4) {
                halt_baddata();
              }
              pbVar13 = pbVar12 + -1;
              uVar11 = (uint)*pbVar13;
              if ((*pbVar13 & 0x80) != 0) {
                iVar9 = 1;
                cVar7 = (&DAT_820c34e0)[uVar11];
                while (((iVar2 = (int)cVar7, iVar2 == 0 && (iVar9 < 5)) && (pbVar4 <= pbVar13))) {
                  pbVar13 = pbVar13 + -1;
                  uVar11 = (uint)*pbVar13;
                  iVar9 = iVar9 + 1;
                  cVar7 = (&DAT_820c34e0)[uVar11];
                }
                if (iVar2 == 0) {
                  puVar1 = (undefined4 *)FUN_82089ec8();
                  uVar5 = 0x2a;
                  goto LAB_8208fe54;
                }
                if (iVar2 + 1 == iVar9) {
                  pbVar12 = pbVar13 + iVar9;
                }
                else {
                  if ((*(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 4) & 0x48) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  *(char *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 5) = (char)uVar11;
                  pbVar12 = pbVar13 + 1;
                  if (1 < iVar9) {
                    bVar6 = *pbVar12;
                    pbVar12 = pbVar13 + 2;
                    *(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x29) = bVar6;
                  }
                  if (iVar9 == 3) {
                    bVar6 = *pbVar12;
                    pbVar12 = pbVar12 + 1;
                    *(byte *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x2a) = bVar6;
                  }
                  pbVar12 = pbVar12 + -iVar9;
                }
              }
              iVar9 = FUN_82097cc0();
              if (iVar9 != 0) {
                *(uint *)(iVar8 + *(int *)(&DAT_820c7980 + iVar3) + 0x38) =
                     (uint)((int)pbVar12 - (int)pbVar4 != iVar9);
                halt_baddata();
              }
              thunk_FUN_82030910();
            }
            FUN_82089f38();
            halt_baddata();
          }
          if ((~param_3 & 1) != 0) {
            iVar3 = FUN_820847f8();
            if (iVar3 != 0) {
              FUN_820944a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            puVar1 = (undefined4 *)FUN_82089ec8();
            *puVar1 = 0xc;
            puVar1 = (undefined4 *)FUN_82089f00();
            uVar5 = 8;
            goto LAB_8208f9c4;
          }
        }
LAB_8208fa88:
        puVar1 = (undefined4 *)FUN_82089f00();
        *puVar1 = 0;
      }
      else {
        puVar1 = (undefined4 *)FUN_82089f00();
        *puVar1 = 0;
      }
      puVar1 = (undefined4 *)FUN_82089ec8();
      uVar5 = 0x16;
      goto LAB_8208fa00;
    }
  }
  puVar1 = (undefined4 *)FUN_82089f00();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_82089ec8();
  uVar5 = 9;
LAB_8208fa00:
  *puVar1 = uVar5;
  FUN_82083c30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8208ffa8 @ 8208ffa8 ==== */

void FUN_8208ffa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82090118 @ 82090118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82090118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82090150 @ 82090150 ==== */

void FUN_82090150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82090200 @ 82090200 ==== */

void FUN_82090200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_82090448 @ 82090448 ==== */

void FUN_82090448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_8209058c @ 8209058c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209058c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820905d0 @ 820905d0 ==== */

void FUN_820905d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82090690 @ 82090690 ==== */

void FUN_82090690(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_820906c0 @ 820906c0 ==== */

void FUN_820906c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820907f8 @ 820907f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820907f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82090830 @ 82090830 ==== */

void FUN_82090830(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820908e8 @ 820908e8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82090b18) */
/* WARNING: Removing unreachable block (ram,0x82090b28) */
/* WARNING: Removing unreachable block (ram,0x82090b30) */
/* WARNING: Removing unreachable block (ram,0x82090b04) */
/* WARNING: Removing unreachable block (ram,0x820911dc) */
/* WARNING: Removing unreachable block (ram,0x82090d20) */
/* WARNING: Removing unreachable block (ram,0x82090b10) */
/* WARNING: Removing unreachable block (ram,0x82090b3c) */
/* WARNING: Removing unreachable block (ram,0x820911c8) */
/* WARNING: Removing unreachable block (ram,0x82090b44) */
/* WARNING: Removing unreachable block (ram,0x82090da8) */
/* WARNING: Removing unreachable block (ram,0x82090d9c) */
/* WARNING: Removing unreachable block (ram,0x82090db0) */
/* WARNING: Removing unreachable block (ram,0x82090dc8) */
/* WARNING: Removing unreachable block (ram,0x82090dcc) */
/* WARNING: Removing unreachable block (ram,0x82090dd8) */
/* WARNING: Removing unreachable block (ram,0x82090ddc) */
/* WARNING: Removing unreachable block (ram,0x82090de4) */
/* WARNING: Removing unreachable block (ram,0x82090de8) */
/* WARNING: Removing unreachable block (ram,0x820911f4) */
/* WARNING: Removing unreachable block (ram,0x82090df0) */
/* WARNING: Removing unreachable block (ram,0x8209120c) */
/* WARNING: Removing unreachable block (ram,0x82090df8) */
/* WARNING: Removing unreachable block (ram,0x82090e10) */
/* WARNING: Removing unreachable block (ram,0x82090e14) */
/* WARNING: Removing unreachable block (ram,0x82090e24) */
/* WARNING: Removing unreachable block (ram,0x82090e40) */
/* WARNING: Removing unreachable block (ram,0x82090e54) */
/* WARNING: Removing unreachable block (ram,0x82090e64) */
/* WARNING: Removing unreachable block (ram,0x82090e78) */
/* WARNING: Removing unreachable block (ram,0x82090e94) */
/* WARNING: Removing unreachable block (ram,0x82090ed4) */
/* WARNING: Removing unreachable block (ram,0x82090edc) */
/* WARNING: Removing unreachable block (ram,0x82090ee8) */
/* WARNING: Removing unreachable block (ram,0x82090ef8) */
/* WARNING: Removing unreachable block (ram,0x82090f00) */
/* WARNING: Removing unreachable block (ram,0x82090f14) */
/* WARNING: Removing unreachable block (ram,0x82090f20) */
/* WARNING: Removing unreachable block (ram,0x82090f2c) */
/* WARNING: Removing unreachable block (ram,0x82090f34) */
/* WARNING: Removing unreachable block (ram,0x82090f3c) */
/* WARNING: Removing unreachable block (ram,0x82090f54) */
/* WARNING: Removing unreachable block (ram,0x82090f60) */
/* WARNING: Removing unreachable block (ram,0x82090f6c) */
/* WARNING: Removing unreachable block (ram,0x82090f78) */
/* WARNING: Removing unreachable block (ram,0x82090f84) */
/* WARNING: Removing unreachable block (ram,0x82090f94) */
/* WARNING: Removing unreachable block (ram,0x82090fb4) */
/* WARNING: Removing unreachable block (ram,0x82090fbc) */
/* WARNING: Removing unreachable block (ram,0x82090fc0) */
/* WARNING: Removing unreachable block (ram,0x82090fcc) */
/* WARNING: Removing unreachable block (ram,0x82090fd8) */
/* WARNING: Removing unreachable block (ram,0x82090fe4) */
/* WARNING: Removing unreachable block (ram,0x82090ff4) */
/* WARNING: Removing unreachable block (ram,0x82091004) */
/* WARNING: Removing unreachable block (ram,0x82091010) */
/* WARNING: Removing unreachable block (ram,0x82091054) */
/* WARNING: Removing unreachable block (ram,0x8209105c) */
/* WARNING: Removing unreachable block (ram,0x82091070) */
/* WARNING: Removing unreachable block (ram,0x82091078) */
/* WARNING: Removing unreachable block (ram,0x82091084) */
/* WARNING: Removing unreachable block (ram,0x82091088) */
/* WARNING: Removing unreachable block (ram,0x820910bc) */
/* WARNING: Removing unreachable block (ram,0x820910cc) */
/* WARNING: Removing unreachable block (ram,0x820910dc) */
/* WARNING: Removing unreachable block (ram,0x820910e8) */
/* WARNING: Removing unreachable block (ram,0x820910fc) */
/* WARNING: Removing unreachable block (ram,0x82091154) */
/* WARNING: Removing unreachable block (ram,0x82091108) */
/* WARNING: Removing unreachable block (ram,0x82091148) */
/* WARNING: Removing unreachable block (ram,0x82091118) */
/* WARNING: Removing unreachable block (ram,0x8209113c) */
/* WARNING: Removing unreachable block (ram,0x82091128) */
/* WARNING: Removing unreachable block (ram,0x8209115c) */
/* WARNING: Removing unreachable block (ram,0x82091168) */
/* WARNING: Removing unreachable block (ram,0x82091194) */
/* WARNING: Removing unreachable block (ram,0x820911a0) */
/* WARNING: Removing unreachable block (ram,0x8209101c) */
/* WARNING: Removing unreachable block (ram,0x82090ef0) */
/* WARNING: Removing unreachable block (ram,0x820911a4) */
/* WARNING: Removing unreachable block (ram,0x820911ac) */
/* WARNING: Removing unreachable block (ram,0x820911b4) */
/* WARNING: Removing unreachable block (ram,0x82091220) */

void FUN_820908e8(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r10;
  
  FUN_820844c4();
  if (in_r10 != 0) {
    for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x820909c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)UNK_82011760 * 4 + -0x7df71c3c))();
    return;
  }
  puVar2 = (undefined4 *)FUN_82089ec8();
  *puVar2 = 0x16;
  FUN_82083c30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82091248 @ 82091248 ==== */

void FUN_82091248(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82091e60 @ 82091e60 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_82091e60(double param_1)

{
  if ((param_1 != _UNK_820118b0) && (ABS(param_1) < _UNK_820118b8)) {
    if (param_1 < _UNK_820118b0) {
      param_1 = (param_1 - _UNK_820118b8) + _UNK_820118b8;
    }
    else {
      param_1 = (param_1 + _UNK_820118b8) - _UNK_820118b8;
    }
  }
  return param_1;
}


/* ==== FUN_82091ea8 @ 82091ea8 ==== */

void FUN_82091ea8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820922b0 @ 820922b0 ==== */

void FUN_820922b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82092508 @ 82092508 ==== */

void FUN_82092508(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_82089ec8();
    uVar2 = 0x21;
  }
  else {
    if (param_1 < 2) {
      return;
    }
    if (3 < param_1) {
      return;
    }
    puVar1 = (undefined4 *)FUN_82089ec8();
    uVar2 = 0x22;
  }
  *puVar1 = uVar2;
  return;
}


/* ==== FUN_82092550 @ 82092550 ==== */

int FUN_82092550(uint param_1)

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


/* ==== FUN_82092598 @ 82092598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820926a0 @ 820926a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820926a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82092728 @ 82092728 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82092728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820927a8 @ 820927a8 ==== */

void FUN_820927a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82092880 @ 82092880 ==== */

void FUN_82092880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82092970 @ 82092970 ==== */

uint FUN_82092970(void)

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


/* ==== FUN_820929a0 @ 820929a0 ==== */

uint FUN_820929a0(void)

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


/* ==== FUN_820929d4 @ 820929d4 ==== */

ulonglong FUN_820929d4(uint param_1)

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


/* ==== FUN_82092a20 @ 82092a20 ==== */

void FUN_82092a20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82092bc4 @ 82092bc4 ==== */

void FUN_82092bc4(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_82092be8 @ 82092be8 ==== */

void FUN_82092be8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82092e60 @ 82092e60 ==== */

void FUN_82092e60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82093148 @ 82093148 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82093148(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820931bc @ 820931bc ==== */

void FUN_820931bc(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_820931e8 @ 820931e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820931e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82093244 @ 82093244 ==== */

void FUN_82093244(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_82093268 @ 82093268 ==== */

void FUN_82093268(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820934e0 @ 820934e0 ==== */

undefined4 FUN_820934e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82089ec8();
    *puVar1 = 0x16;
    FUN_82083c30();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = uRam820c36ec;
  }
  return uVar2;
}


/* ==== FUN_82093530 @ 82093530 ==== */

undefined4 FUN_82093530(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82089ec8();
    *puVar1 = 0x16;
    FUN_82083c30();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_820c36f0;
  }
  return uVar2;
}


/* ==== FUN_82093580 @ 82093580 ==== */

undefined4 FUN_82093580(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82089ec8();
    *puVar1 = 0x16;
    FUN_82083c30();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_820c36e8;
  }
  return uVar2;
}


/* ==== FUN_820935d0 @ 820935d0 ==== */

undefined4 FUN_820935d0(void)

{
  return 0x820c36ec;
}


/* ==== FUN_820935e0 @ 820935e0 ==== */

undefined4 * FUN_820935e0(void)

{
  return &DAT_820c36f0;
}


/* ==== FUN_820935f0 @ 820935f0 ==== */

undefined4 * FUN_820935f0(void)

{
  return &DAT_820c36e8;
}


/* ==== FUN_82093600 @ 82093600 ==== */

undefined4 FUN_82093600(void)

{
  return 0x820c3778;
}


/* ==== FUN_82093610 @ 82093610 ==== */

void FUN_82093610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82093840 @ 82093840 ==== */

undefined4 FUN_82093840(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_820c7968)) {
    iVar2 = (param_1 & 0x1f) * 0x48;
    if (*(int *)(*(int *)(&DAT_820c7980 + ((int)param_1 >> 5) * 4) + iVar2) == -1) {
      *(undefined4 *)(*(int *)(&DAT_820c7980 + ((int)param_1 >> 5) * 4) + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_82089ec8();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_82089f00();
  *puVar1 = 0;
  return 0xffffffff;
}


/* ==== FUN_820938c8 @ 820938c8 ==== */

undefined4 FUN_820938c8(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((((int)param_1 < 0) || (DAT_820c7968 <= param_1)) ||
      (piVar4 = (int *)(*(int *)(&DAT_820c7980 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48)
      , (*(byte *)(piVar4 + 1) & 1) == 0)) || (*piVar4 == -1)) {
    puVar2 = (undefined4 *)FUN_82089ec8();
    *puVar2 = 9;
    piVar4 = (int *)FUN_82089f00();
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


/* ==== FUN_82093960 @ 82093960 ==== */

undefined4 FUN_82093960(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_82089f00();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_82089ec8();
    uVar2 = 0xffffffff;
    *puVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (DAT_820c7968 <= param_1)) ||
          (puVar1 = (undefined4 *)
                    (*(int *)(&DAT_820c7980 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48),
          (*(byte *)(puVar1 + 1) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_82089f00();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_82089ec8();
    *puVar1 = 9;
    FUN_82083c30();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* ==== FUN_82093a20 @ 82093a20 ==== */

void FUN_82093a20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82093ae8 @ 82093ae8 ==== */

undefined4 FUN_82093ae8(void)

{
  int unaff_r31;
  
  FUN_8208d488();
  return *(undefined4 *)(unaff_r31 + 0x94);
}


/* ==== FUN_82093b20 @ 82093b20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82093b20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82093b50 @ 82093b50 ==== */

void FUN_82093b50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_82093d68 @ 82093d68 ==== */

void FUN_82093d68(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_82093d8c @ 82093d8c ==== */

void FUN_82093d8c(void)

{
  FUN_8208d488();
  return;
}


/* ==== FUN_82093dd0 @ 82093dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82093dd0(void)

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
  
  uVar8 = FUN_820844c8();
  puVar6 = (uint *)uVar8;
  auStack_6c[0] = 0;
  bVar7 = 0;
  iVar1 = FUN_82096f30(auStack_6c);
  if (iVar1 != 0) {
    FUN_82083d08();
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
    if (2 < uVar3) goto LAB_82093e38;
    iVar1 = -0x40000000;
  }
  if ((((in_r7 != 0x10) && (in_r7 != 0x20)) && (in_r7 != 0x30)) &&
     ((in_r7 != 0x40 && (in_r7 != 0x80)))) {
LAB_82093e38:
    puVar2 = (undefined4 *)FUN_82089f00();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_82089ec8();
    *puVar2 = 0x16;
    FUN_82083c30();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in_r6 & 0x700;
  if (uVar3 < 0x401) {
    if ((((uVar3 != 0x400) && (uVar3 != 0)) && (uVar3 != 0x100)) &&
       ((uVar3 != 0x200 && (uVar3 != 0x300)))) goto LAB_82093e38;
  }
  else if (((uVar3 != 0x500) && (uVar3 != 0x600)) && (uVar3 != 0x700)) goto LAB_82093e38;
  uVar3 = FUN_82093b50();
  *puVar6 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar2 = (undefined4 *)FUN_82089f00();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_82089ec8();
    *puVar2 = 0x18;
    FUN_82089ec8();
    halt_baddata();
  }
  *(undefined4 *)((ulonglong)uVar8 >> 0x20) = 1;
  iVar4 = FUN_8202fac0();
  if (iVar4 == -1) {
    if ((iVar1 == -0x40000000) && ((in_r6 & 1) != 0)) {
      iVar1 = 0x40000000;
      iVar4 = FUN_8202fac0();
      if (iVar4 != -1) goto LAB_82094094;
    }
    iVar1 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
    thunk_FUN_82030910();
    FUN_82089f38();
    goto LAB_82094088;
  }
LAB_82094094:
  FUN_82093840(*puVar6,iVar4);
  *(byte *)(*(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48 + 4) =
       bVar7 | 1;
  iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  if ((((int)(char)(bVar7 | 1) & 0x80U) != 0) && ((in_r6 & 2) != 0)) {
    iVar4 = FUN_8208f438();
    if (iVar4 == -1) {
      piVar5 = (int *)FUN_82089f00();
      if (*piVar5 != 0x83) {
LAB_82094140:
        FUN_8208f148();
        goto LAB_82094088;
      }
    }
    else {
      acStack_70[0] = '\0';
      iVar4 = FUN_8208f988(*puVar6,acStack_70,1);
      if ((iVar4 == 0) && (acStack_70[0] == '\x1a')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = FUN_8208f438();
      if (iVar4 == -1) goto LAB_82094140;
    }
  }
  iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 0xfe;
  if ((in_r6 & 8) != 0) {
    iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x20;
  }
  if (iVar1 != -0x40000000) {
    halt_baddata();
  }
  if ((in_r6 & 1) == 0) {
    halt_baddata();
  }
  FUN_8202f4a0();
  iVar1 = FUN_8202fac0();
  if (iVar1 != -1) {
    *(int *)(*(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48) = iVar1;
    halt_baddata();
  }
  thunk_FUN_82030910();
  FUN_82089f38();
  iVar1 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
  FUN_820938c8(*puVar6);
LAB_82094088:
  FUN_82089ec8();
  halt_baddata();
}


/* ==== FUN_820943f4 @ 820943f4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820943f4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094480 @ 82094480 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094480(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820944a0 @ 820944a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820944a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094570 @ 82094570 ==== */

void FUN_82094570(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820946b8 @ 820946b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820946b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820946f0 @ 820946f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820946f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094798 @ 82094798 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094798(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094840 @ 82094840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820949a0 @ 820949a0 ==== */

void FUN_820949a0(ushort *param_1,uint *param_2)

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


/* ==== FUN_82094a80 @ 82094a80 ==== */

void FUN_82094a80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82094b28 @ 82094b28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094b28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094bb0 @ 82094bb0 ==== */

bool FUN_82094bb0(void)

{
  return (uRam820c3cf0 | 1) == uRam820c630c;
}


/* ==== FUN_82094bd8 @ 82094bd8 ==== */

undefined4 FUN_82094bd8(undefined4 *param_1,uint *param_2,uint param_3,ushort param_4)

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
      puVar1 = (undefined4 *)FUN_82089ec8();
      *puVar1 = 0x16;
      FUN_82083c30();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_82084370(param_2,0,param_3);
      }
      puVar1 = (undefined4 *)FUN_82089ec8();
      *puVar1 = 0x2a;
      puVar1 = (undefined4 *)FUN_82089ec8();
      return *puVar1;
    }
    if (param_2 != (uint *)0x0) {
      if (param_3 == 0) {
        puVar1 = (undefined4 *)FUN_82089ec8();
        *puVar1 = 0x22;
        FUN_82083c30();
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


/* ==== FUN_82094cd0 @ 82094cd0 ==== */

void FUN_82094cd0(undefined4 *param_1,uint *param_2,uint param_3,ushort param_4)

{
  FUN_82094bd8(param_1,param_2,param_3,param_4);
  return;
}


/* ==== FUN_82094cd8 @ 82094cd8 ==== */

ushort FUN_82094cd8(uint param_1)

{
  return *(ushort *)((param_1 & 0xff) * 2 + *(int *)(DAT_820c3280 + 200)) & 0x8000;
}


/* ==== FUN_82094cf8 @ 82094cf8 ==== */

void FUN_82094cf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82094d90 @ 82094d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82094f38 @ 82094f38 ==== */

undefined4 FUN_82094f38(ushort *param_1,byte *param_2,int param_3)

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


/* ==== FUN_82094fb0 @ 82094fb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82094fb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209500c @ 8209500c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209500c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820950d0 @ 820950d0 ==== */

byte FUN_820950d0(int param_1)

{
  return -(param_1 != 0) & 1;
}


/* ==== FUN_820950f0 @ 820950f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820950f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209519c @ 8209519c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209519c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820951e8 @ 820951e8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_820951e8(void)

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
  int local_80;
  
  uVar18 = FUN_820844c4();
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
    uVar13 = DAT_820c3a08 - 1;
    iVar5 = (int)DAT_820c3a08 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)DAT_820c3a08 < 0 && (DAT_820c3a08 & 0x1f) != 0);
    local_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (DAT_820c3a08 +
                    (iVar5 + (uint)((int)DAT_820c3a08 < 0 && (DAT_820c3a08 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_82095330;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_82095330:
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
    if (iVar16 < (int)(DAT_820c3a04 - DAT_820c3a08)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (DAT_820c3a04 < iVar16) {
        iVar15 = (int)DAT_820c3a0c >> 5;
        if (iVar16 < DAT_820c3a00) {
          iVar5 = iVar15 + (uint)((int)DAT_820c3a0c < 0 && (DAT_820c3a0c & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = DAT_820c3a14 + iVar16;
          uVar13 = DAT_820c3a0c +
                   (iVar15 + (uint)((int)DAT_820c3a0c < 0 && (DAT_820c3a0c & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)DAT_820c3a0c < 0 && (DAT_820c3a0c & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = DAT_820c3a0c +
                   (iVar15 + (uint)((int)DAT_820c3a0c < 0 && (DAT_820c3a0c & 0x1f) != 0)) * -0x20;
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
          iVar4 = DAT_820c3a14 + DAT_820c3a00;
        }
      }
      else {
        uVar14 = DAT_820c3a04 - iVar15;
        iVar4 = ((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0);
        uVar14 = uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) *
                          -0x20;
        auStack_9c[1] = auStack_9c[5];
        auStack_9c[2] = auStack_9c[6];
        uVar9 = 0;
        auStack_9c[3] = local_80;
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
        iVar4 = iVar5 + (uint)((int)DAT_820c3a08 < 0 && (DAT_820c3a08 & 0x1f) != 0);
        uVar9 = 0x1f - (DAT_820c3a08 +
                       (iVar5 + (uint)((int)DAT_820c3a08 < 0 && (DAT_820c3a08 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_8209559c;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_8209559c:
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
        uVar13 = DAT_820c3a0c + 1;
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
  uVar9 = 0x1f - DAT_820c3a0c;
  if (DAT_820c3a10 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (DAT_820c3a10 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82095900 @ 82095900 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_82095900(void)

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
  
  uVar18 = FUN_820844c4();
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
    uVar13 = uRam820c3a20 - 1;
    iVar5 = (int)uRam820c3a20 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam820c3a20 < 0 && (uRam820c3a20 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam820c3a20 +
                    (iVar5 + (uint)((int)uRam820c3a20 < 0 && (uRam820c3a20 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_82095a48;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_82095a48:
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
    if (iVar16 < (int)(iRam820c3a1c - uRam820c3a20)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam820c3a1c < iVar16) {
        iVar15 = (int)uRam820c3a24 >> 5;
        if (iVar16 < iRam820c3a18) {
          iVar5 = iVar15 + (uint)((int)uRam820c3a24 < 0 && (uRam820c3a24 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam820c3a2c + iVar16;
          uVar13 = uRam820c3a24 +
                   (iVar15 + (uint)((int)uRam820c3a24 < 0 && (uRam820c3a24 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam820c3a24 < 0 && (uRam820c3a24 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam820c3a24 +
                   (iVar15 + (uint)((int)uRam820c3a24 < 0 && (uRam820c3a24 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam820c3a2c + iRam820c3a18;
        }
      }
      else {
        uVar14 = iRam820c3a1c - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam820c3a20 < 0 && (uRam820c3a20 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam820c3a20 +
                       (iVar5 + (uint)((int)uRam820c3a20 < 0 && (uRam820c3a20 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_82095cb4;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_82095cb4:
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
        uVar13 = uRam820c3a24 + 1;
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
  uVar9 = 0x1f - uRam820c3a24;
  if (iRam820c3a28 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam820c3a28 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82096018 @ 82096018 ==== */

void FUN_82096018(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820962b0 @ 820962b0 ==== */

uint FUN_820962b0(uint param_1)

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


/* ==== FUN_82096330 @ 82096330 ==== */

void FUN_82096330(void)

{
  FUN_82092970(0,0xfff80700);
  FUN_820962b0();
  return;
}


/* ==== FUN_82096360 @ 82096360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82096360(void)

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
  short local_70 [2];
  undefined4 local_6c [27];
  
  uVar8 = FUN_820844c8();
  puVar6 = (uint *)uVar8;
  local_6c[0] = 0;
  bVar7 = 0;
  iVar1 = FUN_82096f30(local_6c);
  if (iVar1 != 0) {
    FUN_82083d08();
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
    if (2 < uVar3) goto LAB_820963c8;
    iVar1 = -0x40000000;
  }
  if ((((in_r7 != 0x10) && (in_r7 != 0x20)) && (in_r7 != 0x30)) &&
     ((in_r7 != 0x40 && (in_r7 != 0x80)))) {
LAB_820963c8:
    puVar2 = (undefined4 *)FUN_82089f00();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_82089ec8();
    *puVar2 = 0x16;
    FUN_82083c30();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in_r6 & 0x700;
  if (uVar3 < 0x401) {
    if ((((uVar3 != 0x400) && (uVar3 != 0)) && (uVar3 != 0x100)) &&
       ((uVar3 != 0x200 && (uVar3 != 0x300)))) goto LAB_820963c8;
  }
  else if (((uVar3 != 0x500) && (uVar3 != 0x600)) && (uVar3 != 0x700)) goto LAB_820963c8;
  uVar3 = FUN_82093b50();
  *puVar6 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar2 = (undefined4 *)FUN_82089f00();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_82089ec8();
    *puVar2 = 0x18;
    FUN_82089ec8();
    halt_baddata();
  }
  *(undefined4 *)((ulonglong)uVar8 >> 0x20) = 1;
  iVar4 = FUN_82097ba8();
  if (iVar4 == -1) {
    if ((iVar1 == -0x40000000) && ((in_r6 & 1) != 0)) {
      iVar1 = 0x40000000;
      iVar4 = FUN_82097ba8();
      if (iVar4 != -1) goto LAB_82096624;
    }
    iVar1 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
    thunk_FUN_82030910();
    FUN_82089f38();
    goto LAB_82096618;
  }
LAB_82096624:
  FUN_82093840(*puVar6,iVar4);
  *(byte *)(*(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48 + 4) =
       bVar7 | 1;
  iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  if ((((int)(char)(bVar7 | 1) & 0x80U) != 0) && ((in_r6 & 2) != 0)) {
    iVar4 = FUN_8208f438();
    if (iVar4 == -1) {
      piVar5 = (int *)FUN_82089f00();
      if (*piVar5 != 0x83) {
LAB_820966d0:
        FUN_8208f148();
        goto LAB_82096618;
      }
    }
    else {
      local_70[0] = 0;
      iVar4 = FUN_8208f988(*puVar6,local_70,1);
      if ((iVar4 == 0) && (local_70[0] == 0x1a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = FUN_8208f438();
      if (iVar4 == -1) goto LAB_820966d0;
    }
  }
  iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 0xfe;
  if ((in_r6 & 8) != 0) {
    iVar4 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x20;
  }
  if (iVar1 != -0x40000000) {
    halt_baddata();
  }
  if ((in_r6 & 1) == 0) {
    halt_baddata();
  }
  FUN_8202f4a0();
  iVar1 = FUN_82097ba8();
  if (iVar1 != -1) {
    *(int *)(*(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48) = iVar1;
    halt_baddata();
  }
  thunk_FUN_82030910();
  FUN_82089f38();
  iVar1 = *(int *)(&DAT_820c7980 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
  FUN_820938c8(*puVar6);
LAB_82096618:
  FUN_82089ec8();
  halt_baddata();
}


/* ==== FUN_82096984 @ 82096984 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82096984(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82096a10 @ 82096a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82096a10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82096a30 @ 82096a30 ==== */

void FUN_82096a30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82096d00 @ 82096d00 ==== */

void FUN_82096d00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82096d08 @ 82096d08 ==== */

void FUN_82096d08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_82096ea0 @ 82096ea0 ==== */

undefined4 FUN_82096ea0(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = ((int)param_1 >> 5) * 4;
  iVar3 = (param_1 & 0x1f) * 0x48;
  iVar4 = *(int *)(&DAT_820c7980 + iVar2) + iVar3;
  bVar1 = *(byte *)(iVar4 + 4);
  if (param_2 == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    iVar3 = *(int *)(&DAT_820c7980 + iVar2) + iVar3;
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


/* ==== FUN_82096f30 @ 82096f30 ==== */

undefined4 FUN_82096f30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_82089ec8();
    *puVar1 = 0x16;
    FUN_82083c30();
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0;
    *param_1 = DAT_820c6374;
  }
  return uVar2;
}


/* ==== FUN_82096f80 @ 82096f80 ==== */

void FUN_82096f80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_82097b90 @ 82097b90 ==== */

void FUN_82097b90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uRam820c3d04 = param_1;
  uRam820c3d0c = param_2;
  uRam820c3d08 = param_3;
  return;
}


/* ==== FUN_82097ba8 @ 82097ba8 ==== */

void FUN_82097ba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_82097c10 @ 82097c10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097c10(void)

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


/* ==== FUN_82097c30 @ 82097c30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097c30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097c68 @ 82097c68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097c68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097c78 @ 82097c78 ==== */

undefined4 FUN_82097c78(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  iVar1 = func_0x820bb63c(param_1,auStack_10);
  if (iVar1 < 0) {
    FUN_820308d8();
    auStack_10[0] = 0;
  }
  return auStack_10[0];
}


/* ==== thunk_EXT_FUN_820bba5c @ 82097cb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_820bba5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097cc0 @ 82097cc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097cc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097d98 @ 82097d98 ==== */

undefined4 FUN_82097d98(void)

{
  int unaff_r13;
  
  return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x14c);
}


/* ==== FUN_82097da8 @ 82097da8 ==== */

void FUN_82097da8(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 auStack_4c [19];
  
  uStack_5c = param_2 & 1;
  uStack_58 = 0;
  uStack_54 = 0x820957a8;
  uStack_60 = param_1;
  if (param_4 == (undefined4 *)0x0) {
    uStack_50 = 0;
  }
  else {
    if (0xf < param_3) {
      param_3 = 0xf;
    }
    uStack_50 = param_3;
    if (param_3 != 0) {
      FUN_820841c8(auStack_4c,param_4,param_3 << 2);
    }
  }
  func_0x820bb79c(&uStack_60);
  return;
}


/* ==== FUN_82097e28 @ 82097e28 ==== */

void FUN_82097e28(undefined4 param_1)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  func_0x820bb68c(&local_10,param_1);
  FUN_82098668();
  return;
}


/* ==== FUN_82097e68 @ 82097e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097ef0 @ 82097ef0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097ef0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82097f90 @ 82097f90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82097f90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098000 @ 82098000 ==== */

void FUN_82098000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82098170 @ 82098170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820982f8 @ 820982f8 ==== */

void FUN_820982f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820983b8 @ 820983b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820983b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098460 @ 82098460 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098460(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  
  uVar12 = FUN_820844c8();
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
      uVar2 = (int)*(char *)(bVar1 + 0x820c3d48) & 0xffff;
      iVar5 = iVar4;
      if (iVar8 <= (int)(pbVar7 + (uVar2 - (int)pbVar3))) break;
      if (uVar2 == 0) {
LAB_82098588:
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar11 = iVar11 + 1;
        iVar9 = (uint)bVar1 + iVar9;
      }
      else {
        if (uVar2 == 1) {
LAB_82098574:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82098588;
        }
        if (uVar2 < 3) {
LAB_82098560:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82098574;
        }
        if (uVar2 == 3) {
LAB_8209854c:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82098560;
        }
        if (uVar2 < 5) {
LAB_82098538:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_8209854c;
        }
        if (uVar2 == 5) {
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = (uint)bVar1 << 6;
          goto LAB_82098538;
        }
      }
      uVar10 = iVar9 - *(int *)(uVar2 * 4 + -0x7df3c2d0);
      uVar2 = uVar10;
      if ((uRam820c3d14 < uVar10) && (uVar2 = uRam820c3d10, uVar10 <= uRam820c3d18)) {
        uVar10 = uVar10 - iRam820c3d20;
        if (iVar4 + 1 <= param_4) {
          psVar6[1] = (short)(uVar10 >> (uRam820c3d1c & 0x3f)) + (short)uRam820c3d28;
          psVar6 = psVar6 + 1;
        }
        iVar5 = iVar4 + 2;
        if (iVar5 <= param_4) {
          psVar6 = psVar6 + 1;
          *psVar6 = ((ushort)uRam820c3d24 & (ushort)uVar10) + (short)uRam820c3d2c;
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
    thunk_FUN_820308c0(0x7a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098668 @ 82098668 ==== */

void FUN_82098668(void)

{
  FUN_82098c30();
  return;
}


/* ==== FUN_82098678 @ 82098678 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098678(void)

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
  
  psVar2 = (short *)FUN_820844c8();
  FUN_82097e68();
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
      cVar4 = func_0x820bba8c(&sStack_a0,auStack_b0);
      if (cVar4 != '\0') {
        func_0x820bba7c(auStack_b0,auStack_80);
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
            cVar4 = func_0x820bba8c(&sStack_a0,auStack_b0);
            if (cVar4 == '\0') break;
            func_0x820bba7c(auStack_b0,auStack_80);
            sVar5 = sVar5 + 1;
            sVar6 = sStack_7c;
          } while (sVar5 < sVar1);
        }
        sStack_9c = sVar6;
        cVar4 = func_0x820bba8c(&sStack_a0,auStack_b0);
        if (cVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  else {
    iVar3 = FUN_82097ef0();
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820988d8 @ 820988d8 ==== */

void FUN_820988d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82098af8 @ 82098af8 ==== */

void FUN_82098af8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_82098c30 @ 82098c30 ==== */

void FUN_82098c30(void)

{
  undefined4 in_r0;
  
  trapWord(0x1f,in_r0,0x14);
  return;
}


/* ==== FUN_82098c38 @ 82098c38 ==== */

void FUN_82098c38(int *param_1,int param_2,int param_3)

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


/* ==== FUN_82098c68 @ 82098c68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098c68(int param_1)

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


/* ==== FUN_82098d30 @ 82098d30 ==== */

void FUN_82098d30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82098e10 @ 82098e10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098e10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098e60 @ 82098e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098f60 @ 82098f60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098f60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82098fd8 @ 82098fd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82098fd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82099088 @ 82099088 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82099088(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820990b0 @ 820990b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820990b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82099138 @ 82099138 ==== */

void FUN_82099138(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82099248 @ 82099248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82099248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820992a0 @ 820992a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820992a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820992f0 @ 820992f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820992f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82099468 @ 82099468 ==== */

void FUN_82099468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_82099540 @ 82099540 ==== */

uint FUN_82099540(int param_1)

{
  return (param_1 + 1U) % 10;
}


/* ==== FUN_82099558 @ 82099558 ==== */

undefined4 FUN_82099558(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -0x7df40000;
  uVar1 = FUN_82099540(DAT_820c637c);
  *(uint *)(iVar2 + 0x637c) = uVar1;
  return DAT_820c6380;
}


/* ==== FUN_82099590 @ 82099590 ==== */

void FUN_82099590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_82099608 @ 82099608 ==== */

void FUN_82099608(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820998e8 @ 820998e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820998e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82099990 @ 82099990 ==== */

void FUN_82099990(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8209a010 @ 8209a010 ==== */

void FUN_8209a010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8209a1f0 @ 8209a1f0 ==== */

void FUN_8209a1f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8209a2a8 @ 8209a2a8 ==== */

void FUN_8209a2a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8209a4c8 @ 8209a4c8 ==== */

void FUN_8209a4c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8209a4d0 @ 8209a4d0 ==== */

void FUN_8209a4d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_820844c4();
  func_0x820bb8dc();
  if (((*(uint *)(iVar1 + 0x36a8) & 0x10) != 0) && (iVar2 = FUN_82099558(), iVar2 != 0)) {
    FUN_82099990();
  }
  *(int *)(iVar1 + 0x4248) = *(int *)(iVar1 + 0x4248) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_8209ac38 @ 8209ac38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ac38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ad50 @ 8209ad50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ad50(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_820844d0();
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(uint *)(iVar1 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_820a9f38();
  }
  iVar2 = FUN_820a8d70();
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


/* ==== FUN_8209b008 @ 8209b008 ==== */

void FUN_8209b008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8209b270 @ 8209b270 ==== */

void FUN_8209b270(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8209b810 @ 8209b810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209b810(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

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
  
  uVar7 = FUN_820844c4();
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


/* ==== FUN_8209be90 @ 8209be90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209be90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209bfc8 @ 8209bfc8 ==== */

void FUN_8209bfc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_8209c088 @ 8209c088 ==== */

void FUN_8209c088(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_8209c370 @ 8209c370 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c370(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2948) = *(uint *)(param_1 + 0x2948) & 0xfffffff8 | param_2 & 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209c3a0 @ 8209c3a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c3a0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2948) = (param_2 & 0xff) << 3 | *(uint *)(param_1 + 0x2948) & 0xfffff807;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209c3d0 @ 8209c3d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c3d0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x293c) = (param_2 & 1) << 3 | *(uint *)(param_1 + 0x293c) & 0xfffffff7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209c408 @ 8209c408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c408(int param_1,int param_2)

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


/* ==== FUN_8209c498 @ 8209c498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c498(int param_1,uint param_2)

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


/* ==== FUN_8209c528 @ 8209c528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c528(int param_1,uint param_2)

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


/* ==== FUN_8209c5b8 @ 8209c5b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c5b8(int param_1,uint param_2)

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


/* ==== FUN_8209c6b8 @ 8209c6b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c6b8(int param_1,uint param_2)

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


/* ==== FUN_8209c728 @ 8209c728 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c728(int param_1,uint param_2)

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


/* ==== FUN_8209c798 @ 8209c798 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209c798(int param_1,uint param_2)

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


/* ==== FUN_8209ca68 @ 8209ca68 ==== */

void FUN_8209ca68(int param_1,int param_2)

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


/* ==== FUN_8209ca98 @ 8209ca98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ca98(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3014) = param_2;
  *(uint *)(param_1 + 0x2934) =
       (-(uint)(*(int *)(param_1 + 0x3220) != 0) & param_2 & 1) << 1 |
       *(uint *)(param_1 + 0x2934) & 0xfffffffd;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209cad8 @ 8209cad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209cad8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2934) = (param_2 & 1) << 2 | *(uint *)(param_1 + 0x2934) & 0xfffffffb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209cb40 @ 8209cb40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209cb40(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3018) = param_2;
  *(uint *)(param_1 + 0x2934) =
       -(uint)(*(int *)(param_1 + 0x3220) != 0) & param_2 & 1 |
       *(uint *)(param_1 + 0x2934) & 0xfffffffe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d5a0 @ 8209d5a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d5a0(int param_1,int param_2)

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


/* ==== FUN_8209d5e0 @ 8209d5e0 ==== */

uint FUN_8209d5e0(int param_1)

{
  return *(uint *)(param_1 + 0x294c) & 1;
}


/* ==== FUN_8209d8f8 @ 8209d8f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209d8f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209d920 @ 8209d920 ==== */

uint FUN_8209d920(int param_1)

{
  return *(uint *)(param_1 + 0x29c0) & 1;
}


/* ==== FUN_8209dbe0 @ 8209dbe0 ==== */

void FUN_8209dbe0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 14000) = param_2;
  return;
}


/* ==== FUN_8209dc10 @ 8209dc10 ==== */

void FUN_8209dc10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8209ddb8 @ 8209ddb8 ==== */

void FUN_8209ddb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8209e638 @ 8209e638 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e638(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209e730 @ 8209e730 ==== */

void FUN_8209e730(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8209e850 @ 8209e850 ==== */

void FUN_8209e850(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_8209e8d8 @ 8209e8d8 ==== */

void FUN_8209e8d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8209e968 @ 8209e968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209e9b0 @ 8209e9b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e9b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209e9f0 @ 8209e9f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209e9f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209eac0 @ 8209eac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209eac0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209eb90 @ 8209eb90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209eb90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ebe0 @ 8209ebe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ebe0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ecd8 @ 8209ecd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ecd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209ef30 @ 8209ef30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209ef30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3000) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209efc0 @ 8209efc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209efc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209efe0 @ 8209efe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209efe0(int param_1,int param_2)

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


/* ==== FUN_8209f070 @ 8209f070 ==== */

void FUN_8209f070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_8209f400 @ 8209f400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209f400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209f6d8 @ 8209f6d8 ==== */

void FUN_8209f6d8(int param_1,int *param_2,int *param_3,int *param_4)

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


/* ==== FUN_8209f770 @ 8209f770 ==== */

void FUN_8209f770(int param_1,int *param_2,int *param_3,int *param_4)

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


/* ==== FUN_8209f810 @ 8209f810 ==== */

void FUN_8209f810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_8209f828 @ 8209f828 ==== */

uint FUN_8209f828(int param_1,int param_2,uint param_3,int param_4)

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


/* ==== FUN_8209f898 @ 8209f898 ==== */

void FUN_8209f898(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x2d) {
    if (param_1 == 0x2c) {
LAB_8209f8e8:
      uVar1 = 4;
      goto LAB_8209f8d8;
    }
    if (10 < param_1) {
      if (param_1 < 0xd) {
LAB_8209f8d4:
        uVar1 = 2;
LAB_8209f8d8:
        *param_2 = uVar1;
        *param_3 = 1;
        return;
      }
      if (0x11 < param_1) {
        if (param_1 < 0x15) goto LAB_8209f920;
        if (param_1 == 0x27) goto LAB_8209f8e8;
        if (param_1 == 0x28) goto LAB_8209f8d4;
      }
    }
  }
  else if ((param_1 == 0x31) ||
          ((0x32 < param_1 && ((param_1 < 0x36 || ((0x39 < param_1 && (param_1 < 0x3e)))))))) {
LAB_8209f920:
    uVar1 = 4;
    goto LAB_8209f924;
  }
  uVar1 = 1;
LAB_8209f924:
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}


/* ==== FUN_8209f930 @ 8209f930 ==== */

int FUN_8209f930(int param_1,int param_2,int param_3,int param_4)

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


/* ==== FUN_8209f9b8 @ 8209f9b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8209f9b8(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5
                 ,int param_6,int param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_60;
  int aiStack_5c [23];
  
  uVar5 = FUN_820844d4();
  puVar2 = (uint *)((ulonglong)uVar5 >> 0x20);
  uVar3 = 0x20;
  iVar4 = 4;
  if (param_6 != 2) {
    iVar4 = 1;
  }
  FUN_8209f898(param_5,aiStack_5c,&iStack_60);
  if ((param_7 == 0) && (uVar1 = (uint)(aiStack_5c[0] * iStack_60 * param_4) >> 3, uVar1 != 0)) {
    trapWord(6,uVar1,0);
    if (0x1f < 0x100 / uVar1) {
      uVar3 = 0x100 / uVar1;
    }
  }
  iStack_60 = iStack_60 * ((-(uint)(param_6 != 0) & 0x1f) + 1);
  *puVar2 = (*puVar2 + aiStack_5c[0] * uVar3) - 1 & ~(aiStack_5c[0] * uVar3 - 1);
  *(uint *)uVar5 = (*(uint *)uVar5 + iStack_60) - 1 & ~(iStack_60 - 1U);
  *param_3 = (*param_3 + iVar4) - 1 & ~(iVar4 - 1U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8209fad8 @ 8209fad8 ==== */

void FUN_8209fad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_8209fe58 @ 8209fe58 ==== */

void FUN_8209fe58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_8209ffb0 @ 8209ffb0 ==== */

void FUN_8209ffb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820a0498 @ 820a0498 ==== */

void FUN_820a0498(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820a0600 @ 820a0600 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a0600(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
  
  uVar9 = FUN_820844c4();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  iVar7 = in_stack_00000054 * 2 + 1;
  iVar3 = param_4;
  if (iVar1 == 3) {
LAB_820a06b0:
    uVar8 = 1;
LAB_820a06bc:
    if (iVar1 != 0x11) {
LAB_820a06c4:
      iVar3 = 1;
    }
  }
  else {
    if (iVar1 != 0x11) {
      if (iVar1 == 0x12) {
        uVar8 = 3;
      }
      else {
        if (iVar1 == 0x13) goto LAB_820a06b0;
        uVar8 = local_78;
        if (iVar1 != 0x14) goto LAB_820a06bc;
        uVar8 = 0;
        param_8 = 0;
      }
      goto LAB_820a06c4;
    }
    uVar8 = 2;
  }
  if (param_5 == 0) {
    param_5 = FUN_8209f930(iVar2,param_3,iVar3,in_stack_00000054);
  }
  if (param_8 == 2) {
    param_8 = -(uint)(1 < param_5) & 1;
  }
  FUN_8209fad8();
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
LAB_820a081c:
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
        if (uVar8 != 3) goto LAB_820a0820;
        uVar8 = (param_4 + -1) * 0x4000000 |
                (param_3 - iVar7) * 0x2000 & 0x3ffe000U | iVar2 - iVar7 & 0x1fffU;
        goto LAB_820a081c;
      }
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xfffff800 | iVar2 - iVar7 & 0x7ffU;
      uVar4 = (param_3 - iVar7) * 0x800 & 0x3ff800U | (param_4 - iVar7) * 0x400000;
      uVar8 = iVar2 - iVar7 & 0x7ff;
    }
    in_stack_0000006c[9] = uVar4 | uVar8;
  }
LAB_820a0820:
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


/* ==== FUN_820a08f8 @ 820a08f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a08f8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5,
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
  
  uVar15 = FUN_820844c8();
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
  iVar4 = FUN_8209f828(iVar3,iVar5,param_3,param_4);
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
      uVar13 = -(uint)(iRam820c6384 != 0);
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
  uVar1 = *(ushort *)(&UNK_820124a8 + uVar14 * 2) >> 8;
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


/* ==== FUN_820a0b68 @ 820a0b68 ==== */

int FUN_820a0b68(int param_1)

{
  return (*(uint *)(param_1 + 0x2c) >> 6 & 0xf) + 1;
}


/* ==== FUN_820a0b78 @ 820a0b78 ==== */

void FUN_820a0b78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a0b98 @ 820a0b98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a0b98(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_5c;
  
  uVar4 = FUN_820844d0();
  uVar3 = 0;
  uVar1 = FUN_820b94e8();
  if (uVar1 != 0) {
    FUN_820a0600(param_8,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,param_3,param_4,param_5,param_6,
                 2);
    uVar2 = FUN_820b94e8();
    if (uVar2 == 0) {
      uVar3 = 0x24800000;
      uVar2 = uVar1;
    }
    else {
      if ((local_5c == 0) || (uVar3 = FUN_820b94e8(), uVar3 != 0)) {
        *(uint *)(uVar1 + 0x20) = uVar2 & 0xfffff000 | *(uint *)(uVar1 + 0x20) & 0xfff;
        *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xfff | uVar3 & 0xfffff000;
        halt_baddata();
      }
      FUN_820b9620(uVar1,0x24800000);
      uVar3 = 0xb1800000;
    }
    FUN_820b9620(uVar2,uVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a0cb8 @ 820a0cb8 ==== */

void FUN_820a0cb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820a0df0 @ 820a0df0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a0df0(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar13 = FUN_820844c8();
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
          FUN_820b7520();
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


/* ==== FUN_820a0f80 @ 820a0f80 ==== */

void FUN_820a0f80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a14b8 @ 820a14b8 ==== */

void FUN_820a14b8(void)

{
  undefined4 *extraout_r4;
  
  FUN_820844bc();
  *extraout_r4 = 0xc0003b00;
  extraout_r4[1] = 0x300;
  extraout_r4[2] = 0xc0192b00;
  extraout_r4[3] = 0;
  extraout_r4[4] = 0x18;
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_820a1690 @ 820a1690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1690(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a17a8 @ 820a17a8 ==== */

int FUN_820a17a8(undefined4 param_1,uint param_2,undefined4 *param_3)

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


/* ==== FUN_820a1808 @ 820a1808 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x820b9634) */

void FUN_820a1808(int param_1)

{
  if (*(int *)(param_1 + 0x3768) != 0) {
    FUN_82030208();
    return;
  }
  return;
}


/* ==== FUN_820a1818 @ 820a1818 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1818(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

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


/* ==== FUN_820a18f0 @ 820a18f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a18f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1928 @ 820a1928 ==== */

void FUN_820a1928(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a1ae8 @ 820a1ae8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1ae8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1b30 @ 820a1b30 ==== */

void FUN_820a1b30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a1d00 @ 820a1d00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1d00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1d48 @ 820a1d48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1d48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2fd0) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1d60 @ 820a1d60 ==== */

void FUN_820a1d60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820a1e50 @ 820a1e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a1e50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a1ed0 @ 820a1ed0 ==== */

void FUN_820a1ed0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a1fb8 @ 820a1fb8 ==== */

void FUN_820a1fb8(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  *param_2 = (uint)((*(uint *)(param_1 + 0x2b28) & 0x7f000) == 0);
  *param_3 = *(uint *)(param_1 + 0x2b28) >> 0xc & 0x7f;
  *param_4 = *(uint *)(param_1 + 0x2b28) >> 4 & 0x7f;
  return;
}


/* ==== FUN_820a1fe8 @ 820a1fe8 ==== */

void FUN_820a1fe8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a2118 @ 820a2118 ==== */

void FUN_820a2118(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a2208 @ 820a2208 ==== */

void FUN_820a2208(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820a2300 @ 820a2300 ==== */

void FUN_820a2300(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820a23f0 @ 820a23f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a23f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2440 @ 820a2440 ==== */

uint FUN_820a2440(uint *param_1)

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


/* ==== FUN_820a24d0 @ 820a24d0 ==== */

void FUN_820a24d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a2620 @ 820a2620 ==== */

int FUN_820a2620(uint *param_1)

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


/* ==== FUN_820a2678 @ 820a2678 ==== */

void FUN_820a2678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a2738 @ 820a2738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a2738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a27b0 @ 820a27b0 ==== */

void FUN_820a27b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a2878 @ 820a2878 ==== */

void FUN_820a2878(void)

{
  FUN_820a24d0();
  return;
}


/* ==== FUN_820a2888 @ 820a2888 ==== */

void FUN_820a2888(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a2938 @ 820a2938 ==== */

void FUN_820a2938(void)

{
  FUN_820a24d0();
  return;
}


/* ==== FUN_820a2948 @ 820a2948 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a2948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a2aa0 @ 820a2aa0 ==== */

void FUN_820a2aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820a2e28 @ 820a2e28 ==== */

void FUN_820a2e28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820a2f20 @ 820a2f20 ==== */

void FUN_820a2f20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820a3188 @ 820a3188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3430 @ 820a3430 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3430(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a34b0 @ 820a34b0 ==== */

void FUN_820a34b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a3620 @ 820a3620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3620(void)

{
  FUN_820844c8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3990 @ 820a3990 ==== */

void FUN_820a3990(void)

{
  FUN_820a3620();
  return;
}


/* ==== FUN_820a39e0 @ 820a39e0 ==== */

void FUN_820a39e0(void)

{
  FUN_820a3620();
  return;
}


/* ==== FUN_820a3a28 @ 820a3a28 ==== */

void FUN_820a3a28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a3ac8 @ 820a3ac8 ==== */

void FUN_820a3ac8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820a3d80 @ 820a3d80 ==== */

void FUN_820a3d80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a3df8 @ 820a3df8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3df8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3e68 @ 820a3e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a3eb0 @ 820a3eb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a3eb0(void)

{
  FUN_820844d4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4160 @ 820a4160 ==== */

void FUN_820a4160(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3614);
  return;
}


/* ==== FUN_820a4170 @ 820a4170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4170(void)

{
  int iVar1;
  uint in_r6;
  
  iVar1 = FUN_820844d0();
  *(char *)(iVar1 + 0x3268) = (char)(in_r6 >> 2);
  if (((in_r6 >> 2 & 0xff) != (uint)*(byte *)(iVar1 + 0x2fe8)) && (*(int *)(iVar1 + 0x3310) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4630 @ 820a4630 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4630(void)

{
  FUN_820844bc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4aa8 @ 820a4aa8 ==== */

int FUN_820a4aa8(int param_1)

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


/* ==== FUN_820a4af0 @ 820a4af0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4af0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4b60 @ 820a4b60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a4b60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a4c48 @ 820a4c48 ==== */

void FUN_820a4c48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a4ce8 @ 820a4ce8 ==== */

void FUN_820a4ce8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_820a52f0 @ 820a52f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a52f0(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5308 @ 820a5308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5350 @ 820a5350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a5350(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a5398 @ 820a5398 ==== */

void FUN_820a5398(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_820a68e0 @ 820a68e0 ==== */

void FUN_820a68e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a6950 @ 820a6950 ==== */

undefined4 FUN_820a6950(int param_1)

{
  if (((((param_1 != 0x1e) && (param_1 != 0x1f)) && (param_1 != 0x20)) &&
      ((param_1 != 0x24 && (param_1 != 0x25)))) &&
     ((param_1 != 0x26 && ((param_1 != 0x39 && (param_1 != 0x3f)))))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_820a69a0 @ 820a69a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a69a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6a48 @ 820a6a48 ==== */

uint FUN_820a6a48(double param_1,undefined4 param_2,uint param_3)

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


/* ==== FUN_820a6ab0 @ 820a6ab0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a6ab0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a6bd0 @ 820a6bd0 ==== */

void FUN_820a6bd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820a7048 @ 820a7048 ==== */

void FUN_820a7048(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a7120 @ 820a7120 ==== */

void FUN_820a7120(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820a7380 @ 820a7380 ==== */

void FUN_820a7380(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820a84d8 @ 820a84d8 ==== */

void FUN_820a84d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8528 @ 820a8528 ==== */

void FUN_820a8528(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x42f0);
  *(int *)(param_1 + 0x34) = iVar1 + 0x12c0;
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x38) = iVar1 + 0x1220;
  *(byte *)(param_1 + 0x2b3d) = *(byte *)(param_1 + 0x2b3d) | 0x20;
  return;
}


/* ==== FUN_820a8550 @ 820a8550 ==== */

void FUN_820a8550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a85e8 @ 820a85e8 ==== */

void FUN_820a85e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8698 @ 820a8698 ==== */

void FUN_820a8698(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a87b0 @ 820a87b0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820a87b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b50) = param_2;
  sync(0);
  _DAT_7fc80714 = param_2;
  enforceInOrderExecutionIO();
  sync(0);
  return;
}


/* ==== FUN_820a87d0 @ 820a87d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a87d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8838 @ 820a8838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a8838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8890 @ 820a8890 ==== */

void FUN_820a8890(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8928 @ 820a8928 ==== */

void FUN_820a8928(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8b58 @ 820a8b58 ==== */

void FUN_820a8b58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8c28 @ 820a8c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a8c28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8c88 @ 820a8c88 ==== */

void FUN_820a8c88(int param_1)

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


/* ==== FUN_820a8cd0 @ 820a8cd0 ==== */

void FUN_820a8cd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8d70 @ 820a8d70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a8d70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a8e58 @ 820a8e58 ==== */

void FUN_820a8e58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a8fc8 @ 820a8fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820a8fc8(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar12 = FUN_820844c4();
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  puVar5 = (uint *)uVar12;
  uVar10 = *(uint *)(iVar3 + 0x3bc8);
  iVar9 = *(int *)(iVar3 + 0x3bc4);
  bVar2 = *(char *)puVar5 == -0x71;
  if ((*(byte *)(iVar3 + 0x2b3d) & 2) == 0) {
    local_80 = *(uint *)(iVar3 + 0x2b50);
    FUN_820a85e8();
    uVar8 = 0;
    uVar7 = local_80;
    if (param_3 != 0) {
      do {
        piVar4 = *(int **)(iVar3 + 0x55b4);
        uVar11 = (puVar5 + uVar8 * 2)[1];
        local_7c = puVar5[uVar8 * 2] & 0xffffff;
        if ((piVar4 != (int *)0x0) && (DAT_820c63c0 == 0)) {
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


/* ==== FUN_820a9298 @ 820a9298 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a9298(void)

{
  FUN_820844d4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a94a8 @ 820a94a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a94a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a95e8 @ 820a95e8 ==== */

void FUN_820a95e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820a9868 @ 820a9868 ==== */

void FUN_820a9868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a9978 @ 820a9978 ==== */

void FUN_820a9978(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820a99f8 @ 820a99f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a99f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
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
  
  uVar6 = FUN_820844d0();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  bVar1 = false;
  uStack_5c = param_3;
  if (*(int *)(iVar2 + 0x3520) == 0) {
    if (*(int *)(iVar2 + 0x2b90) != 0) {
      uVar3 = func_0x820bbaec(iVar2 + 0x2b94);
      if (*(int *)(iVar2 + 0x2b90) != 0) {
        uVar5 = 0x8f000000;
        if (param_7 == 0) {
          uVar5 = 0x81000000;
        }
        *(uint *)(iVar4 + 4) = uVar5 | param_4;
        *(undefined4 *)(iVar4 + 8) = param_3;
        *(undefined4 *)(iVar4 + 0xc) = 0xc0000000;
        FUN_820a8cd0(param_6,iVar4,iVar4 + 0x10);
        bVar1 = true;
        *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5;
      }
      func_0x820bbacc(iVar2 + 0x2b94,uVar3);
      if (bVar1) {
        if ((*(byte *)(iVar2 + 0x2b40) & 8) == 0) {
          halt_baddata();
        }
        func_0x820bbadc(iVar2 + 0x5f8c,1,0);
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
      FUN_820a8fc8(iVar2,&uStack_60,1);
    }
    else {
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5 + 1;
      FUN_820b90f0();
    }
  }
  else {
    uStack_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | param_4 & 0xffffff;
    FUN_820a9978();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a9bd8 @ 820a9bd8 ==== */

void FUN_820a9bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[5] = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820a9bf8 @ 820a9bf8 ==== */

void FUN_820a9bf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820a9d80 @ 820a9d80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a9d80(void)

{
  int iVar1;
  int iVar2;
  int in_r7;
  uint uVar3;
  
  iVar1 = FUN_820844c8();
  if (*(int *)(iVar1 + 0x3520) == 0) {
    if (*(int *)(iVar1 + 0x2b90) != 0) {
      FUN_820a8d70();
                    /* WARNING: Subroutine does not return */
      FUN_82083d40();
    }
    if (in_r7 != 0) {
      *(int *)(iVar1 + 0x35d4) = iVar1;
      *(undefined4 *)(iVar1 + 0x35c4) = 0;
      *(undefined4 *)(iVar1 + 0x35c8) = 0x80;
      *(undefined4 *)(iVar1 + 0x35cc) = 0;
      *(undefined4 *)(iVar1 + 0x35d0) = 0;
      *(undefined4 *)(iVar1 + 0x35c0) = 0;
      FUN_820a9868();
      FUN_820a9978();
      FUN_820a8c88(iVar1 + 0x35c0);
      *(int *)(iVar1 + 0x2b90) = *(int *)(iVar1 + 0x2b90) + 1;
      uVar3 = *(uint *)(iVar1 + 0x35c0);
      if (uVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) + -0x40000000;
      }
      func_0x820bbb6c(*(int *)(iVar1 + 0x2cc8) * 0x6c + iVar1 + 0x2d58,iVar2,0);
    }
  }
  else {
    FUN_820a9978();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820a9f38 @ 820a9f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820a9f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa040 @ 820aa040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa108 @ 820aa108 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa108(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa170 @ 820aa170 ==== */

void FUN_820aa170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820aa1e8 @ 820aa1e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa1e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa260 @ 820aa260 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa260(void)

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
  
  uVar14 = FUN_820844d4();
  iVar1 = (int)((ulonglong)uVar14 >> 0x20);
  iVar5 = (int)uVar14;
  if ((*(int *)(iVar1 + 0x2b1c) != 0) && (*(int *)(iVar1 + 0x30) != 0)) {
    FUN_820aa1e8();
    while (*(int *)(iVar1 + 0x2b74) != *(int *)(iVar1 + 0x2b70)) {
      FUN_8202f748();
    }
  }
  uVar6 = *(uint *)(iVar1 + 0x3bcc);
  if (uVar6 != 0) {
    FUN_820b7ba8(((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff) + 0xc0000000,
                 ((*(uint *)(iVar1 + 0x3bd0) >> 0x14) + 0x200 & 0x1000) +
                 (*(uint *)(iVar1 + 0x3bd0) & 0x1fffffff) + -0x40000000);
  }
  FUN_820b9620(*(int *)(iVar1 + 0x3b88),0xb1800000);
  FUN_820b9620(*(int *)(iVar1 + 0x3b8c),0xb1800000);
  *(undefined4 *)(iVar1 + 0x3b88) = 0;
  *(undefined4 *)(iVar1 + 0x3b8c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  func_0x820bbbac(0);
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
      iVar11 = FUN_820b94e8();
      *(int *)(iVar1 + 0x3b88) = iVar11;
    }
    if (iVar13 == 0) {
      iVar13 = FUN_820b94e8();
      *(int *)(iVar1 + 0x3b8c) = iVar13;
    }
    if ((iVar11 != 0) && (iVar13 != 0)) {
      uVar2 = func_0x820bb62c(iVar11);
      func_0x820bbb9c(uVar2,0x1c - LZCOUNT(uVar10));
      uVar3 = 0x1f - LZCOUNT(uVar10 >> 9);
      if (0x13 < uVar3) {
        uVar3 = 0x13;
      }
      uVar7 = *(int *)(iVar1 + 0x2b10) + 0x3c;
      func_0x820bbb8c(((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff),uVar3);
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
      func_0x820bbbac(*(int *)(iVar1 + 0x2b10) + 8);
      local_e8 = 0;
      iVar5 = 8;
      puVar4 = &local_e4;
      local_f0 = 0xc0114800;
      local_ec = 0x3ff;
      puVar9 = (undefined4 *)&UNK_8201293c;
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
      func_0x820bbb7c(&local_f0,0x13);
      FUN_820a8698();
      uVar6 = *(uint *)(iVar1 + 0x30);
      if (*(uint *)(iVar1 + 0x38) < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_820a9f38();
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
      FUN_820aa108();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa650 @ 820aa650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa6d8 @ 820aa6d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aa6d8(void)

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
  
  iVar3 = FUN_820844d4();
  uVar4 = (**(code **)(iVar3 + 4))(0x5d0);
  bVar2 = false;
  FUN_820aa650(iVar3,"   %25s: 0x%08x (","RBBM_STATUS",uVar4);
  iVar8 = 0xb;
  puVar10 = (undefined4 *)0x820c446c;
  do {
    if ((puVar10[-1] & uVar4) != 0) {
      if (bVar2) {
        FUN_820aa650(iVar3,&UNK_82004c44);
      }
      FUN_820aa650(iVar3,*puVar10);
      bVar2 = true;
    }
    iVar8 = iVar8 + -1;
    puVar10 = puVar10 + 2;
  } while (iVar8 != 0);
  if (!bVar2) {
    FUN_820aa650(iVar3,"CPU Synchronization");
  }
  FUN_820aa650(iVar3,&UNK_82012be4);
  (**(code **)(iVar3 + 8))(0xf11,0);
  FUN_8202f748();
  uVar5 = (**(code **)(iVar3 + 4))(0xf12);
  FUN_820aa650(iVar3,"   %25s: 0x%08x\n","RB_SIDEBAND_DATA[0]",uVar5);
  iVar8 = 0x1e;
  puVar10 = (undefined4 *)0x820c44bc;
  do {
    uVar5 = (**(code **)(iVar3 + 4))(puVar10[1]);
    puVar10 = puVar10 + 2;
    FUN_820aa650(iVar3,"   %25s: 0x%08x\n",*puVar10,uVar5);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar11 = (uint *)0x820c45c0;
  iVar8 = 5;
  do {
    FUN_820aa650(iVar3,&DAT_82000bc4);
    uVar4 = 0;
    if (*puVar11 != 0) {
      do {
        func_0x820bbbcc(acStack_120,"%s 0x%02x: ",puVar11[1],uVar4);
        uVar9 = uVar4 + 8;
        while( true ) {
          uVar6 = *puVar11;
          if (uVar9 < *puVar11) {
            uVar6 = uVar9;
          }
          if (uVar6 <= uVar4) break;
          (**(code **)(iVar3 + 8))(puVar11[-4],uVar4 << (puVar11[-1] & 0x3f) | puVar11[-2]);
          FUN_8202f748();
          uVar5 = (**(code **)(iVar3 + 4))(puVar11[-3]);
          pcVar7 = acStack_120;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          func_0x820bbbcc(pcVar7 + (int)(acStack_120 + (-1 - (int)acStack_120)),&UNK_82012bb4,uVar5)
          ;
          uVar4 = uVar4 + 1;
        }
        FUN_820aa650(iVar3,&UNK_820013a4,acStack_120);
        uVar4 = uVar9;
      } while (uVar9 < *puVar11);
    }
    iVar8 = iVar8 + -1;
    puVar11 = puVar11 + 6;
  } while (iVar8 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aa940 @ 820aa940 ==== */

void FUN_820aa940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820aaa00 @ 820aaa00 ==== */

void FUN_820aaa00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820aabe0 @ 820aabe0 ==== */

void FUN_820aabe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820ab4a0 @ 820ab4a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ab4a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ab560 @ 820ab560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ab560(int param_1)

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


/* ==== FUN_820ab638 @ 820ab638 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ab638(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ab6e0 @ 820ab6e0 ==== */

void FUN_820ab6e0(undefined4 param_1)

{
  func_0x820bbbdc(param_1,0);
  if (*DAT_820005bc != 0) {
    FUN_820ab560(*DAT_820005bc);
  }
  return;
}


/* ==== FUN_820ab720 @ 820ab720 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ab720(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_820844d4();
  puVar2 = (undefined4 *)0x820c3e58;
  uVar3 = 0;
  do {
    *(undefined4 *)(((uVar3 >> 2) + 0x10) * 4 + iVar1) = puVar2[1];
    *(undefined4 *)(((uVar3 >> 2) + 0x89) * 4 + iVar1) = *puVar2;
    (**(code **)(uVar3 + iVar1 + 0x40))(iVar1,puVar2[2]);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while (uVar3 < 0x194);
  uVar3 = 0;
  puVar2 = (undefined4 *)0x820c4320;
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


/* ==== FUN_820ab988 @ 820ab988 ==== */

void FUN_820ab988(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820aba38 @ 820aba38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aba38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aba90 @ 820aba90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aba90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abb08 @ 820abb08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abb08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abb70 @ 820abb70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abb70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abcf0 @ 820abcf0 ==== */

void FUN_820abcf0(undefined4 param_1)

{
  int iVar1;
  
  func_0x820bbbdc(param_1,0);
  iVar1 = func_0x820bb8dc();
  if ((iVar1 != 2) && (*DAT_820005bc != 0)) {
    FUN_820abb08();
  }
  func_0x820bbc3c();
  return;
}


/* ==== FUN_820abd40 @ 820abd40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abd40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abdd8 @ 820abdd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abdd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abe48 @ 820abe48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abe48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abe98 @ 820abe98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abe98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820abf18 @ 820abf18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820abf18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ac0f0 @ 820ac0f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ac0f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_690;
  undefined4 local_68c;
  float local_67c;
  
  uVar7 = FUN_820844d0();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  puVar3 = (undefined4 *)uVar7;
  uVar6 = puVar3[0x10];
  uVar5 = *puVar3;
  uVar4 = puVar3[1];
  if ((uVar6 == 0) || (uVar6 == 0x28280186)) {
    uVar6 = 0x28280000;
  }
  else {
    if (uVar6 != 0x18280186) {
      if (uVar6 == 0x282801b6) {
        uVar6 = 0x28280000;
      }
      else {
        if (uVar6 != 0x182801b6) goto LAB_820ac190;
        uVar6 = 0x18280000;
      }
      uVar6 = uVar6 | 0x136;
      goto LAB_820ac190;
    }
    uVar6 = 0x18280000;
  }
  uVar6 = uVar6 | 0x106;
LAB_820ac190:
  func_0x820bbc1c(&local_690);
  local_67c = local_67c + DAT_82001c60;
  *(undefined4 *)(iVar1 + 0x55c0) = local_690;
  *(undefined4 *)(iVar1 + 0x55c8) = local_690;
  *(int *)(iVar1 + 0x55cc) = (int)(longlong)local_67c;
  *(undefined4 *)(iVar1 + 0x55c4) = local_68c;
  if (puVar3[0xf] == 0) {
    iVar2 = FUN_820a0b98(uVar5,uVar4,1,1,0,uVar6,0,3);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar1 + 0x3b80) = iVar2;
  }
  if (puVar3[0xe] == 0) {
    iVar2 = FUN_820a0cb8();
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar1 + 0x3b84) = iVar2;
    FUN_8209f070();
  }
  if (puVar3[9] != 0) {
    iVar2 = FUN_820a0cb8();
    if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(iVar1 + 0x3b7c) = iVar2;
    FUN_8209f400();
  }
                    /* WARNING: Subroutine does not return */
  FUN_82083d40();
}


/* ==== FUN_820ac370 @ 820ac370 ==== */

void FUN_820ac370(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820ac5f0 @ 820ac5f0 ==== */

void FUN_820ac5f0(short *param_1,ushort *param_2,int param_3)

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


/* ==== FUN_820ac640 @ 820ac640 ==== */

double FUN_820ac640(double param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  
  if (param_3 == 0) {
    fVar1 = DAT_820143b0;
    if (DAT_820143b8 < param_1) {
      dVar2 = (double)FUN_820881d0();
      return (double)((float)dVar2 * DAT_820143a0 - DAT_820143cc);
    }
  }
  else {
    fVar1 = DAT_820143d0;
    if (DAT_820143d8 < param_1) {
      dVar2 = (double)FUN_820881d0();
      return (double)(float)dVar2;
    }
  }
  return (double)(float)(param_1 * (double)fVar1);
}


/* ==== FUN_820ac6f0 @ 820ac6f0 ==== */

double FUN_820ac6f0(double param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  
  if (param_3 == 0) {
    fVar1 = DAT_820143f0;
    if (DAT_820143f8 <= param_1) {
      dVar2 = (double)FUN_820881d0();
      return (double)((float)dVar2 * DAT_820143e0 - DAT_8201440c);
    }
  }
  else {
    fVar1 = DAT_82014410;
    if (DAT_82014418 <= param_1) {
      dVar2 = (double)FUN_820881d0();
      return (double)(float)dVar2;
    }
  }
  return (double)(float)(param_1 * (double)fVar1);
}


/* ==== FUN_820ac7a0 @ 820ac7a0 ==== */

void FUN_820ac7a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820ac928 @ 820ac928 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ac928(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ac9c0 @ 820ac9c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ac9c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aca48 @ 820aca48 ==== */

void FUN_820aca48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820acb38 @ 820acb38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820acb38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820acc68 @ 820acc68 ==== */

void FUN_820acc68(int param_1,int param_2)

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
  FUN_820ac928();
  return;
}


/* ==== FUN_820accb0 @ 820accb0 ==== */

void FUN_820accb0(int param_1,int param_2)

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
  FUN_820ac9c0();
  return;
}


/* ==== FUN_820acd18 @ 820acd18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820acd18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ace88 @ 820ace88 ==== */

void FUN_820ace88(int param_1,int param_2)

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


/* ==== FUN_820acef8 @ 820acef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820acef8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820acf50 @ 820acf50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820acf50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad040 @ 820ad040 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820ad040(undefined4 param_1,int *param_2)

{
  if ((*param_2 != 0) && (*param_2 != 1)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad170 @ 820ad170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ad170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad1e0 @ 820ad1e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_820ad1e0(int param_1,int param_2)

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


/* ==== FUN_820ad2e8 @ 820ad2e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ad2e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad380 @ 820ad380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ad380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad3d8 @ 820ad3d8 ==== */

void FUN_820ad3d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820ad458 @ 820ad458 ==== */

void FUN_820ad458(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820ad530 @ 820ad530 ==== */

void FUN_820ad530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820ad5f0 @ 820ad5f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ad5f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad658 @ 820ad658 ==== */

void FUN_820ad658(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820ad6b0 @ 820ad6b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ad6b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ad6f8 @ 820ad6f8 ==== */

void FUN_820ad6f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820ad8f0 @ 820ad8f0 ==== */

void FUN_820ad8f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820ada00 @ 820ada00 ==== */

void FUN_820ada00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820ade50 @ 820ade50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ade50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ae518 @ 820ae518 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ae518(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ae618 @ 820ae618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ae618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820ae6d0 @ 820ae6d0 ==== */

void FUN_820ae6d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820ae770 @ 820ae770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820ae770(void)

{
  FUN_820844c4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820aef28 @ 820aef28 ==== */

void FUN_820aef28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_820af3c0 @ 820af3c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820af3c0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint auStack_ccc [819];
  
  uVar3 = FUN_820844c8();
  iVar1 = (int)(uVar3 >> 0x20);
  *(int *)(iVar1 + 0x5ccc) = *(int *)(iVar1 + 0x5ccc) + 1;
  if ((uVar3 & 1) != 0) {
    FUN_820acef8();
                    /* WARNING: Subroutine does not return */
    FUN_820a9f38();
  }
  iVar2 = (((uint)(*param_3 + param_5) >> 0x14) + 0x200 & 0x1000) +
          (*param_3 + param_5 & 0x1fffffffU);
  if ((((*(int *)(iVar2 + -0x3ffffffc) == 0) && (*(uint *)(iVar2 + -0x3ffffff8) < 3)) &&
      (*(uint *)(iVar2 + -0x3ffffff0) <= *(uint *)(iVar1 + 0x564c))) &&
     (*(uint *)(iVar2 + -0x3fffffec) <= *(uint *)(iVar1 + 0x5650))) {
                    /* WARNING: Subroutine does not return */
    FUN_82084370(auStack_ccc,0,0x34);
  }
  FUN_820b7ba8(iVar2 + 0xc0000000,iVar2 + -0x3ffff9dc);
  *(int *)(iVar1 + 0x5ccc) = *(int *)(iVar1 + 0x5ccc) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820af710 @ 820af710 ==== */

void FUN_820af710(void)

{
  uint auStack_47c [247];
  
  FUN_820844b8();
                    /* WARNING: Subroutine does not return */
  FUN_82084370(auStack_47c,0,0x18);
}


/* ==== FUN_820afe28 @ 820afe28 ==== */

void FUN_820afe28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820aff58 @ 820aff58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820aff58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b00d0 @ 820b00d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b00d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b0160 @ 820b0160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b0160(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b0238 @ 820b0238 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b0238(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b04d8 @ 820b04d8 ==== */

void FUN_820b04d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b0600 @ 820b0600 ==== */

void FUN_820b0600(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


/* ==== FUN_820b0678 @ 820b0678 ==== */

void FUN_820b0678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b06d8 @ 820b06d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b06d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b0778 @ 820b0778 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820b0778(void)

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


/* ==== FUN_820b0860 @ 820b0860 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b0860(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b0a48 @ 820b0a48 ==== */

void FUN_820b0a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b0ea0 @ 820b0ea0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_820b0ea0(double param_1)

{
  float fVar1;
  
  if (ABS(param_1) < (double)_UNK_82015380) {
    fVar1 = (float)(param_1 * (double)_UNK_8201537c) * (float)(param_1 * (double)_UNK_8201537c);
    return (double)((((((fVar1 * _UNK_82015378 + _UNK_82015374) * fVar1 + _UNK_82015370) * fVar1 +
                      _UNK_8201536c) * fVar1 + _UNK_82015368) * fVar1 + _UNK_82015364) * fVar1 +
                   DAT_82002058);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1048 @ 820b1048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b1048(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1108 @ 820b1108 ==== */

double FUN_820b1108(double param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = DAT_82002058;
  if (param_1 != (double)DAT_82001c98) {
    dVar2 = (double)DAT_82008fb4;
    dVar3 = (double)FUN_820b0778((double)(float)(param_1 * dVar2));
    fVar1 = (float)(dVar3 / (double)(float)(param_1 * dVar2));
  }
  return (double)fVar1;
}


/* ==== FUN_820b1160 @ 820b1160 ==== */

double FUN_820b1160(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)DAT_82002058 <= ABS(param_1)) {
    dVar1 = (double)DAT_82001cc0;
    if (dVar1 <= ABS(param_1)) {
      dVar1 = (double)DAT_82001c98;
    }
    else {
      dVar2 = (double)FUN_820b0860();
      dVar3 = (double)FUN_820b0860();
      dVar1 = (double)(-(float)(ABS(param_1) * (double)DAT_82002bc4 -
                               (double)(float)(dVar2 * (double)DAT_82004d24 -
                                              (double)(float)(dVar3 * dVar1))) + DAT_82002bc8);
    }
  }
  else {
    dVar1 = (double)FUN_820b0860();
    dVar2 = (double)FUN_820b0860();
    dVar1 = (double)((float)(dVar1 * (double)DAT_82015384 -
                            (double)(float)(dVar2 * (double)DAT_82004d24)) + DAT_82001cbc);
  }
  return dVar1;
}


/* ==== FUN_820b1268 @ 820b1268 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_820b1268(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)DAT_82002058 <= ABS(param_1)) {
    if ((double)DAT_82001cc0 <= ABS(param_1)) {
      dVar1 = (double)DAT_82001c98;
    }
    else {
      dVar1 = (double)FUN_820b0860();
      dVar3 = (double)DAT_82002054;
      dVar2 = (double)FUN_820b0860();
      dVar1 = (double)(-(float)(ABS(param_1) * (double)DAT_82004bf4 -
                               (double)(float)(dVar1 * (double)_UNK_82015388 -
                                              (double)(float)(dVar2 * dVar3))) + DAT_82004d24);
    }
  }
  else {
    dVar1 = (double)FUN_820b0860();
    dVar2 = (double)FUN_820b0860();
    dVar1 = (double)((float)(dVar1 * (double)_UNK_82004a28 -
                            (double)(float)(dVar2 * (double)_UNK_82015388)) + _UNK_82004a30);
  }
  return dVar1;
}


/* ==== FUN_820b1370 @ 820b1370 ==== */

void FUN_820b1370(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820b17a8 @ 820b17a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b17a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b1a88 @ 820b1a88 ==== */

void FUN_820b1a88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820b2018 @ 820b2018 ==== */

void FUN_820b2018(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820b21c8 @ 820b21c8 ==== */

void FUN_820b21c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820b2248 @ 820b2248 ==== */

void FUN_820b2248(undefined4 param_1,undefined4 *param_2)

{
  undefined4 auStack_40 [16];
  
  FUN_820b0600(param_1,param_2,auStack_40);
  FUN_820b21c8();
  return;
}


/* ==== FUN_820b2278 @ 820b2278 ==== */

void FUN_820b2278(int param_1)

{
  if (*(code **)(param_1 + 0x365c) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x820b2288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x365c))();
  return;
}


/* ==== FUN_820b2290 @ 820b2290 ==== */

void FUN_820b2290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820b2378 @ 820b2378 ==== */

void FUN_820b2378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b2458 @ 820b2458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b2458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b24d0 @ 820b24d0 ==== */

void FUN_820b24d0(void)

{
  FUN_820a8698();
  return;
}


/* ==== FUN_820b2528 @ 820b2528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b2528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b2598 @ 820b2598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b2598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b2600 @ 820b2600 ==== */

void FUN_820b2600(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b2750 @ 820b2750 ==== */

void FUN_820b2750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820b28d8 @ 820b28d8 ==== */

void FUN_820b28d8(int param_1)

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


/* ==== FUN_820b2a20 @ 820b2a20 ==== */

undefined4 FUN_820b2a20(int param_1,int param_2)

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


/* ==== FUN_820b2a90 @ 820b2a90 ==== */

void FUN_820b2a90(void)

{
  FUN_820a8698();
  return;
}


/* ==== FUN_820b2af8 @ 820b2af8 ==== */

void FUN_820b2af8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b2be8 @ 820b2be8 ==== */

void FUN_820b2be8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b2c88 @ 820b2c88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b2c88(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

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
  
  uVar12 = FUN_820844c8();
  iVar2 = (int)((ulonglong)uVar12 >> 0x20);
  iVar3 = (int)uVar12;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(iVar2 + 0x19c) != 0) {
    FUN_820b2be8();
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
  FUN_820a8698();
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
LAB_820b2e08:
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
          FUN_820a8698();
          local_d0 = *(uint *)(iVar2 + 0x34) & 0xffffff | 0x81000000;
          local_cc = ((*(uint *)(iVar2 + 0x30) >> 0x14) + 0x200 & 0x1000) +
                     (*(uint *)(iVar2 + 0x30) & 0x1fffffff);
          FUN_820a8fc8(iVar3,&local_d0,1);
          *(undefined4 *)(iVar3 + 0x2cf0) = 0;
          *(int *)(iVar3 + 0x2d2c) = *(int *)(iVar3 + 0x2d2c) + 1;
        }
      }
      else if ((piVar10[4] & 0x40000000U) == 0) {
        if (((piVar10[4] & 0x80000000U) == 0) || (bVar11)) {
          FUN_820b2af8();
          iVar8 = iVar8 + 1;
          goto LAB_820b2e08;
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
        FUN_820b2458();
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar8;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_820b2f40 @ 820b2f40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b2f40(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar11 = FUN_820844d0();
  iVar5 = (int)((ulonglong)uVar11 >> 0x20);
  iVar7 = (int)uVar11;
  do {
    bVar2 = false;
    bVar4 = false;
    uVar10 = 0;
    puVar8 = (uint *)(iVar5 + 400);
    piVar9 = (int *)(iVar7 + 0x5fa8);
LAB_820b2f74:
    do {
      if (*(int *)(iVar5 + 0x1ac) == 0) {
        uVar6 = FUN_820b2a20(iVar7,uVar10);
        bVar1 = false;
        if ((uVar6 & 0xff) != 0) goto LAB_820b2f98;
      }
      else {
LAB_820b2f98:
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
          FUN_820b2c88(iVar5,iVar7,uVar10,local_60);
          bVar4 = (bool)(local_60[0] != 0 | bVar4);
          goto LAB_820b2f74;
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


/* ==== FUN_820b3048 @ 820b3048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b3048(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_820844c8();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = func_0x820bb8dc();
  piVar3 = DAT_820005bc;
  if (iVar2 == 2) {
    piVar3 = DAT_820005c0;
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


/* ==== FUN_820b3510 @ 820b3510 ==== */

undefined4 FUN_820b3510(int param_1)

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


/* ==== FUN_820b3538 @ 820b3538 ==== */

void FUN_820b3538(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820b37f0 @ 820b37f0 ==== */

void FUN_820b37f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b3870 @ 820b3870 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b3870(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b3978 @ 820b3978 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x820b3d0c) */
/* WARNING: Removing unreachable block (ram,0x820b3b6c) */
/* WARNING: Removing unreachable block (ram,0x820b3d04) */
/* WARNING: Removing unreachable block (ram,0x820b3e4c) */
/* WARNING: Removing unreachable block (ram,0x820b3b74) */

void FUN_820b3978(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_820844bc();
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


/* ==== FUN_820b4090 @ 820b4090 ==== */

void FUN_820b4090(int param_1,int param_2)

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


/* ==== FUN_820b4148 @ 820b4148 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b4148(void)

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
  uint local_840;
  uint local_83c;
  uint local_838;
  uint local_834;
  undefined4 local_830;
  uint local_82c;
  
  iVar3 = FUN_820844d4();
  bVar2 = *(byte *)(iVar3 + 0x5f3c);
  if ((bVar2 & 0x10) != 0) {
    if (*(int *)(iVar3 + 0x5e48) != 0) {
      if ((bVar2 & 0x80) == 0) {
        uVar6 = 0;
        if ((*(uint *)(iVar3 + 0x5f30) & 0xfc000) != 0) {
          do {
            FUN_82098000();
            FUN_820983b8();
            uVar6 = uVar6 + 1;
          } while (uVar6 < (*(uint *)(iVar3 + 0x5f30) >> 0xe & 0x3f));
        }
        func_0x820bbbfc(auStack_8b0);
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
        local_830 = func_0x820bba4c();
        bVar1 = (*(uint *)(iVar3 + 0x5f30) >> 0x1a & 1) != 0;
        local_82c = (uint)bVar1;
        if ((*(uint *)(iVar3 + 0x5f30) >> 0x1a & 2) != 0) {
          local_82c = bVar1 | 2;
        }
        if (local_8ab == '\x01') {
          local_82c = local_82c | 4;
          FUN_820ac9c0();
        }
        else {
          FUN_820ac928();
        }
                    /* WARNING: Subroutine does not return */
        FUN_82083d40();
      }
      if ((bVar2 & 0x40) != 0) {
        FUN_8202f820();
      }
      FUN_820a8c28();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = 0;
    piVar7 = (int *)(iVar3 + 0x5cf0);
    do {
      if (*piVar7 == -1) break;
      FUN_8202f4a0();
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < 0x29);
  }
  piVar7 = (int *)*DAT_820005b8;
  if (piVar7 == (int *)0x0) {
    if (*DAT_82000504 == 0) goto LAB_82084524;
    pcVar5 = *(code **)(*DAT_82000504 + 0x18);
  }
  else if ((piVar7 == (int *)0x0) || (pcVar5 = (code *)*piVar7, pcVar5 == (code *)0x0))
  goto LAB_82084524;
  (*pcVar5)(0x1b,"PIX!{CaptureEnded}");
LAB_82084524:
  FUN_820b3870();
  func_0x820bbd0c(&DAT_820c56c8);
  DAT_820c791e = 0;
  DAT_820c791c = 0;
  DAT_820c791d = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b4568 @ 820b4568 ==== */

void FUN_820b4568(void)

{
  FUN_820b4148();
  DAT_820c791f = 0;
  return;
}


/* ==== FUN_820b4598 @ 820b4598 ==== */

void FUN_820b4598(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820b4900 @ 820b4900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b4900(void)

{
  FUN_820844d0();
  FUN_820a1ed0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b51c8 @ 820b51c8 ==== */

void FUN_820b51c8(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_110 [272];
  
  if (DAT_820c791e != '\0') {
    if ((*(byte *)(param_1 + 0x5f3c) & 0x10) == 0) {
      iVar1 = FUN_820b4598();
      func_0x820bbbcc(auStack_110,"%s 0x%08X","PIX!{CaptureFileCreationEnded}",
                      -(uint)(iVar1 == 0) & 0x80004005);
      piVar2 = (int *)*DAT_820005b8;
      if (piVar2 == (int *)0x0) {
        if (*DAT_82000504 == 0) {
          return;
        }
        pcVar3 = *(code **)(*DAT_82000504 + 0x18);
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
    else if (DAT_820c791c == '\0') {
      if (DAT_820c791d != '\0') {
        FUN_820b4900();
      }
    }
    else {
      FUN_820b4148();
    }
  }
  return;
}


/* ==== FUN_820b52b8 @ 820b52b8 ==== */

void FUN_820b52b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b5370 @ 820b5370 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b5370(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b5568 @ 820b5568 ==== */

void FUN_820b5568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844cc();
}


/* ==== FUN_820b58f8 @ 820b58f8 ==== */

void FUN_820b58f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b59b8 @ 820b59b8 ==== */

void FUN_820b59b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820b5b38 @ 820b5b38 ==== */

void FUN_820b5b38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b5c90 @ 820b5c90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b5c90(void)

{
  FUN_820844d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b5de0 @ 820b5de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b5de0(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4,int param_5)

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
  
  uVar21 = FUN_820844c8();
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
LAB_820b5eb8:
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
          if (uVar16 <= uVar8) goto LAB_820b5eb8;
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
        uVar1 = uVar9 & *(ushort *)(&DAT_820172cc + (uVar2 & 7) * 2);
        uVar8 = uVar9 & *(ushort *)(&DAT_820172cc + ((uVar2 & 0xfffffff8) >> 2 & 0xe));
        uVar12 = uVar9 & *(ushort *)(&DAT_820172cc + ((uVar2 & 0x1c0) >> 5));
        uVar4 = uVar9 & *(ushort *)(&DAT_820172cc + ((uVar2 & 0xe00) >> 8));
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
                    iVar18 = (uint)(byte)(&DAT_820172e0)[*(ushort *)(puVar13 + 1) & 0x3f] -
                             (uint)(byte)(&DAT_820172e0)[*(ushort *)(puVar6 + 4) & 0x3f];
                  }
LAB_820b629c:
                  if (0 < iVar18) goto LAB_820b62a4;
                }
                else {
                  if (uVar2 != uVar4) {
                    if (uVar2 == uVar12) {
                      iVar18 = -1;
                    }
                    goto LAB_820b629c;
                  }
LAB_820b62a4:
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
                 (uVar9 = ((byte)(&DAT_820172e0)[*(ushort *)(puVar13 + 1) & 0x3f] - uVar1) + uVar9,
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
                    /* WARNING: Subroutine does not return */
        FUN_82083d40();
      }
      puVar3 = puVar3 + 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b6408 @ 820b6408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b6408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b64d8 @ 820b64d8 ==== */

void FUN_820b64d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820b6590 @ 820b6590 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b6590(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  iVar2 = FUN_820844d0();
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
        FUN_820b6408();
        uVar7 = uVar7 + 1;
      }
      if (((*puVar8 ^ *puVar6) & 0xf00) != 0) {
        FUN_820b64d8();
      }
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    }
    if (uVar7 < uVar5) {
      iVar2 = uVar5 - uVar7;
      do {
        FUN_820b6408();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *param_3 = (uVar4 & 0xf) << 0x14 | *param_3 & 0xff0fffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b66e0 @ 820b66e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b66e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int in_r10;
  
  FUN_820844c4();
  uVar1 = *(uint *)(*(int *)((in_r10 + 0x70) * 8 + param_3) + param_3 + 0x36c) >> 2;
  iVar2 = FUN_820aa170();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0xc0003b00;
    *(undefined4 *)(iVar2 + 8) = 0x100;
    *(uint *)(iVar2 + 0xc) = (uVar1 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(uint *)(iVar2 + 0x14) = uVar1 & 0x3fff;
    sync(0);
                    /* WARNING: Subroutine does not return */
    FUN_82083d40();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b6838 @ 820b6838 ==== */

void FUN_820b6838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820b68e8 @ 820b68e8 ==== */

void FUN_820b68e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820b6a28 @ 820b6a28 ==== */

void FUN_820b6a28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844b0();
}


/* ==== FUN_820b73a8 @ 820b73a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b73a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b7410 @ 820b7410 ==== */

uint FUN_820b7410(int param_1,uint param_2,uint *param_3,int param_4)

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


/* ==== FUN_820b74c0 @ 820b74c0 ==== */

void FUN_820b74c0(int param_1)

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


/* ==== FUN_820b7520 @ 820b7520 ==== */

void FUN_820b7520(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b75d0 @ 820b75d0 ==== */

void FUN_820b75d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b7680 @ 820b7680 ==== */

void FUN_820b7680(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b7700 @ 820b7700 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b7700(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b7778 @ 820b7778 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b7778(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b77d0 @ 820b77d0 ==== */

int FUN_820b77d0(int param_1,uint *param_2)

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


/* ==== FUN_820b78a8 @ 820b78a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b78a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b79e8 @ 820b79e8 ==== */

void FUN_820b79e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b7a38 @ 820b7a38 ==== */

void FUN_820b7a38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844dc();
}


/* ==== FUN_820b7ba8 @ 820b7ba8 ==== */

void FUN_820b7ba8(uint param_1,int param_2)

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


/* ==== FUN_820b7c50 @ 820b7c50 ==== */

void FUN_820b7c50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b7e48 @ 820b7e48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b7e48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b7f00 @ 820b7f00 ==== */

uint FUN_820b7f00(int param_1)

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


/* ==== FUN_820b7f68 @ 820b7f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b7f68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b7ff0 @ 820b7ff0 ==== */

void FUN_820b7ff0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820b8090 @ 820b8090 ==== */

void FUN_820b8090(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844d8();
}


/* ==== FUN_820b8198 @ 820b8198 ==== */

void FUN_820b8198(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b8308 @ 820b8308 ==== */

void FUN_820b8308(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e8();
}


/* ==== FUN_820b83a8 @ 820b83a8 ==== */

void FUN_820b83a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b8550 @ 820b8550 ==== */

void FUN_820b8550(undefined4 *param_1)

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


/* ==== FUN_820b8630 @ 820b8630 ==== */

void FUN_820b8630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b8770 @ 820b8770 ==== */

void FUN_820b8770(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


/* ==== FUN_820b8868 @ 820b8868 ==== */

void FUN_820b8868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844ec();
}


/* ==== FUN_820b8920 @ 820b8920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b8920(void)

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
  
  uVar9 = FUN_820844d4();
  puVar8 = (uint *)((ulonglong)uVar9 >> 0x20);
  iVar4 = (int)uVar9;
  iVar3 = func_0x820bb8dc();
  puVar6 = DAT_820005bc;
  if (iVar3 == 2) {
    puVar6 = DAT_820005c0;
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
          if ((uVar5 & 0x80000000) == 0) goto LAB_820b89f0;
          puVar8 = *(uint **)(iVar4 + 0x178);
        }
        else {
          if (pIVar2 == (IMAGE_DOS_HEADER *)0x80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_82083d40();
          }
          if (pIVar2 == (IMAGE_DOS_HEADER *)0x81000000) goto LAB_820b8c1c;
          if (pIVar2 != &IMAGE_DOS_HEADER_82000000) {
            if (pIVar2 != (IMAGE_DOS_HEADER *)0x83000000) goto LAB_820b8bf4;
            uVar5 = *(uint *)(iVar4 + 0x38);
            *(uint **)(iVar4 + 0x174) = puVar8;
            *(uint *)(iVar4 + 0x38) = uVar5 | 0x40000000;
            if ((*(int *)(iVar4 + 0x3c) != 0) && ((*(uint *)(iVar4 + 0x74) & 2) != 0)) {
              uVar5 = uVar5 | 0xc0000000;
              goto LAB_820b89ec;
            }
            goto LAB_820b89f0;
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
            goto LAB_820b8c78;
          }
        }
        else if (pIVar2 == (IMAGE_DOS_HEADER *)0x86000000) {
          *(uint **)(iVar4 + 0x17c) = puVar8;
          uVar5 = *(uint *)(iVar4 + 0x38) | 0x20000000;
LAB_820b89ec:
          *(uint *)(iVar4 + 0x38) = uVar5;
        }
        else {
          if (pIVar2 != (IMAGE_DOS_HEADER *)0x87000000) goto LAB_820b8bf4;
          uVar5 = *(int *)(iVar4 + 0x3c) + 1;
          *(uint *)(iVar4 + 0x3c) = uVar5;
          *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xdfffffff;
          if (uVar5 < *(uint *)(iVar4 + 0x78)) {
            puVar8 = *(uint **)(iVar4 + 0x17c);
            goto LAB_820b8c78;
          }
        }
LAB_820b89f0:
        puVar8 = puVar8 + 1;
        FUN_820b7f68();
      }
    }
    else if (pIVar2 < (IMAGE_DOS_HEADER *)0x8d000001) {
      if (pIVar2 == (IMAGE_DOS_HEADER *)0x8d000000) {
        halt_baddata();
      }
      if (pIVar2 == (IMAGE_DOS_HEADER *)0x89000000) {
        if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) != 0) {
          FUN_820b8868();
        }
        puVar8 = puVar8 + 3;
      }
      else if (pIVar2 == (IMAGE_DOS_HEADER *)0x8a000000) {
        puVar6 = (undefined4 *)puVar8[1];
        FUN_820b83a8();
        FUN_820b8550(puVar6);
        if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) == 0) {
          if (*(int *)(iVar4 + 0x3c) == 1) {
            FUN_820b8770();
          }
        }
        else {
          FUN_820b8630();
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
LAB_820b8bf4:
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
        FUN_820a8fc8(uVar7,&local_58,1);
      }
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 4;
      *(uint *)(iVar4 + 0x170) = *puVar1;
    }
    else if (pIVar2 == (IMAGE_DOS_HEADER *)0x8f000000) {
LAB_820b8c1c:
      local_5c = puVar8[1];
      local_60 = uVar5;
      FUN_820a8fc8(uVar7,&local_60,1);
      puVar8 = puVar8 + 2;
    }
    else {
      if (pIVar2 != (IMAGE_DOS_HEADER *)0x90000000) goto LAB_820b8bf4;
      puVar8 = (uint *)FUN_820b3048();
    }
LAB_820b8c78:
    uVar5 = *puVar8;
  } while( true );
}


/* ==== FUN_820b8c90 @ 820b8c90 ==== */

void FUN_820b8c90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b90f0 @ 820b90f0 ==== */

void FUN_820b90f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b91a8 @ 820b91a8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820b91a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 auStack_60 [24];
  
  iVar1 = FUN_820844d4();
  if ((*(uint *)(iVar1 + 0x5f48) & 0x100) == 0) {
    iVar2 = FUN_820b94e8();
    *(int *)(iVar1 + 0x2fc0) = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_820b94e8();
      *(int *)(iVar1 + 0x2b78) = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_820a95e8();
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
            func_0x820bbd3c(iVar2 + -0x24,0x820b5cd0,iVar2 + -0x44);
            *(char *)(iVar2 + -0x21) = (char)uVar6 + '\x01';
            iVar3 = FUN_8202f810(0,0x10000,&LAB_820b6950,iVar2 + -0x44,0,iVar2 + 0xc);
            *(int *)(iVar2 + 8) = iVar3;
            if (iVar3 == 0) {
              halt_baddata();
            }
            iVar3 = func_0x820bb6cc(iVar3,_UNK_8200050c,auStack_60);
            if (-1 < iVar3) {
              func_0x820bb6bc(auStack_60[0],0x11);
              func_0x820bb6ac(auStack_60[0]);
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


/* ==== FUN_820b9458 @ 820b9458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b9458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820b94c0 @ 820b94c0 ==== */

int FUN_820b94c0(short *param_1)

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


/* ==== FUN_820b94e8 @ 820b94e8 ==== */

void FUN_820b94e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e4();
}


/* ==== FUN_820b9620 @ 820b9620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820b9620(int param_1,uint param_2)

{
  if ((param_2 & 0x80000000) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
    return;
  }
  FUN_82030208();
  return;
}


/* ==== FUN_820b9640 @ 820b9640 ==== */

void FUN_820b9640(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_820844e0();
}


