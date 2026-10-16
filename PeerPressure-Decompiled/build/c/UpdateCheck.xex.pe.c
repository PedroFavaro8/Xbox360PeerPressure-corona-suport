// Decompiled from UpdateCheck.xex.pe  base=98000000  (approximate C, for reading only)
/* ==== FUN_9800a000 @ 9800a000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a800 @ 9800a800 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800a800(void)

{
                    /* WARNING: Could not recover jumptable at 0x9800a814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_91a43744)();
  return;
}


/* ==== FUN_9800a830 @ 9800a830 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a830(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a8a8 @ 9800a8a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a8a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a900 @ 9800a900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a970 @ 9800a970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800a9c8 @ 9800a9c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800a9c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800aa38 @ 9800aa38 ==== */

void FUN_9800aa38(undefined4 *param_1)

{
  *param_1 = 0x91a005b0;
  return;
}


/* ==== FUN_9800aa48 @ 9800aa48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800aa48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800aad0 @ 9800aad0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800aad0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ab80 @ 9800ab80 ==== */

int FUN_9800ab80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x980416bc(2,param_1,param_2,param_3,0);
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  return iVar1;
}


/* ==== FUN_9800abc0 @ 9800abc0 ==== */

int FUN_9800abc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x980416cc(2,param_1,param_2,param_3,0);
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  return iVar1;
}


/* ==== FUN_9800ac00 @ 9800ac00 ==== */

uint FUN_9800ac00(void)

{
  int iVar1;
  undefined4 local_10;
  uint local_c [3];
  
  local_10 = 0;
  local_c[0] = 0;
  iVar1 = func_0x980417cc(0x91a005b4,&local_10);
  if (iVar1 == 0) {
    iVar1 = func_0x980417bc(local_10,0x3a4,local_c);
    local_c[0] = -(uint)(iVar1 == 0) & local_c[0];
  }
  else {
    local_c[0] = 0;
  }
  return local_c[0];
}


/* ==== FUN_9800ac68 @ 9800ac68 ==== */

bool FUN_9800ac68(void)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  undefined1 local_1e0;
  undefined1 local_1df [15];
  undefined1 auStack_1d0 [48];
  undefined1 auStack_1a0 [416];
  
  FUN_9802f200((uint *)local_1df,0,0xc);
  local_1e0 = 0xd;
  local_1df[0] = 1;
  iVar1 = func_0x9804170c(2,&local_1e0);
  if (((iVar1 == 0) && (iVar1 = func_0x980416fc(2,0x202,auStack_1a0), iVar1 == 0)) &&
     (iVar1 = func_0x980416ec(2,0,0), iVar1 != 0)) {
    do {
      uVar2 = func_0x980416dc(2,auStack_1d0);
    } while (uVar2 == 0);
    cVar3 = '\x01' - ((uVar2 & 0x7c) == 0);
  }
  else {
    cVar3 = '\0';
  }
  return (bool)cVar3;
}


/* ==== FUN_9800ad10 @ 9800ad10 ==== */

undefined4 FUN_9800ad10(void)

{
  return 1;
}


/* ==== FUN_9800ad18 @ 9800ad18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ad18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ad90 @ 9800ad90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ad90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ae18 @ 9800ae18 ==== */

undefined4 FUN_9800ae18(undefined4 *param_1,undefined4 *param_2)

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


/* ==== FUN_9800ae70 @ 9800ae70 ==== */

int FUN_9800ae70(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_9800f4c8(), iVar1 == 0)) {
    iVar1 = FUN_9800a830();
  }
  return iVar1;
}


/* ==== FUN_9800af50 @ 9800af50 ==== */

void FUN_9800af50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800afd0 @ 9800afd0 ==== */

void FUN_9800afd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800b028 @ 9800b028 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b028(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b060 @ 9800b060 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b060(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b098 @ 9800b098 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b098(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b150 @ 9800b150 ==== */

void FUN_9800b150(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) & param_2 & 0x17;
  *(uint *)(param_1 + 0xc) = param_2 & 0x17;
  if (uVar1 != 0) {
    if (param_3 == '\0') {
      if ((uVar1 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800ee80();
      }
      if ((uVar1 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_9800ee80();
      }
                    /* WARNING: Subroutine does not return */
      FUN_9800ee80();
    }
  }
  return;
}


/* ==== FUN_9800b238 @ 9800b238 ==== */

void FUN_9800b238(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800b2b0 @ 9800b2b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b2b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b2f0 @ 9800b2f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800b2f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800b358 @ 9800b358 ==== */

undefined4 FUN_9800b358(void)

{
  return 0;
}


/* ==== FUN_9800b360 @ 9800b360 ==== */

void FUN_9800b360(void)

{
  return;
}


/* ==== FUN_9800bb78 @ 9800bb78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800bb78(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9802ea34();
  puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  uVar2 = puVar4[4];
  if (param_3 < uVar2) {
    puVar3 = puVar4;
    if (0xf < (uint)puVar4[5]) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)((int)puVar4 + param_3);
    while ((pcVar5 < (char *)(uVar2 + (int)puVar3) &&
           (pbVar1 = FUN_9802f100((byte *)uVar6,(int)*pcVar5,param_4), pbVar1 != (byte *)0x0))) {
      pcVar5 = pcVar5 + 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800bc20 @ 9800bc20 ==== */

void FUN_9800bc20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800bc80 @ 9800bc80 ==== */

uint FUN_9800bc80(int *param_1,byte param_2)

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
                    /* WARNING: Could not recover jumptable at 0x9800bcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  return uVar1;
}


/* ==== FUN_9800bcf0 @ 9800bcf0 ==== */

void FUN_9800bcf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800bdb0 @ 9800bdb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800bdb0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_9802ea34();
  *(uint *)(iVar1 + 0x40) = param_4;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  if ((param_3 != 0) && ((param_4 & 6) != 6)) {
    iVar2 = FUN_9800ae70(param_3);
    FUN_9802ebd0();
    *(int *)(iVar1 + 0x3c) = iVar2 + param_3;
    if ((*(uint *)(iVar1 + 0x40) & 4) == 0) {
      **(int **)(iVar1 + 0x10) = iVar2;
      **(int **)(iVar1 + 0x20) = iVar2;
      **(int **)(iVar1 + 0x30) = param_3;
    }
    if ((*(uint *)(iVar1 + 0x40) & 2) == 0) {
      iVar3 = iVar2 + param_3;
      if ((*(uint *)(iVar1 + 0x40) & 0x10) == 0) {
        iVar3 = iVar2;
      }
      **(int **)(iVar1 + 0x14) = iVar2;
      **(int **)(iVar1 + 0x24) = iVar3;
      **(int **)(iVar1 + 0x34) = (iVar2 - iVar3) + param_3;
      if (**(int **)(iVar1 + 0x20) == 0) {
        **(int **)(iVar1 + 0x10) = iVar2;
        **(undefined4 **)(iVar1 + 0x20) = 0;
        **(int **)(iVar1 + 0x30) = iVar2;
      }
    }
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800bea8 @ 9800bea8 ==== */

void FUN_9800bea8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800bf78 @ 9800bf78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800bf78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c010 @ 9800c010 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c0a0 @ 9800c0a0 ==== */

void FUN_9800c0a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800c158 @ 9800c158 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c158(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c230 @ 9800c230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c230(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c568 @ 9800c568 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c5f0 @ 9800c5f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c5f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c6a8 @ 9800c6a8 ==== */

void FUN_9800c6a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800c748 @ 9800c748 ==== */

void FUN_9800c748(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800c820 @ 9800c820 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c820(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c898 @ 9800c898 ==== */

void FUN_9800c898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800c950 @ 9800c950 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c950(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800c9b8 @ 9800c9b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800c9b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ca08 @ 9800ca08 ==== */

void FUN_9800ca08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800caf8 @ 9800caf8 ==== */

void FUN_9800caf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800cbe8 @ 9800cbe8 ==== */

void FUN_9800cbe8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800cd20 @ 9800cd20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800cd20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800cdc8 @ 9800cdc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800cdc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ce18 @ 9800ce18 ==== */

void FUN_9800ce18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800cf00 @ 9800cf00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800cf00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800cf80 @ 9800cf80 ==== */

void FUN_9800cf80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d040 @ 9800d040 ==== */

void FUN_9800d040(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d0c0 @ 9800d0c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d0c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d108 @ 9800d108 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d108(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d160 @ 9800d160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d160(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d1d8 @ 9800d1d8 ==== */

void FUN_9800d1d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d250 @ 9800d250 ==== */

void FUN_9800d250(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d2a8 @ 9800d2a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d2a8(void)

{
  char cVar1;
  char *extraout_r4;
  char *pcVar2;
  
  FUN_9802ea34();
  pcVar2 = extraout_r4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d438 @ 9800d438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d438(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d4a8 @ 9800d4a8 ==== */

void FUN_9800d4a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d528 @ 9800d528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d528(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int *local_70;
  undefined4 local_6c [3];
  undefined2 local_60;
  undefined2 local_5e;
  int local_5c;
  
  uVar12 = FUN_9802ea24();
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  pcVar9 = (char *)uVar12;
  uVar11 = 0;
  local_70 = (int *)0x0;
  local_60 = 0;
  iVar10 = 0;
  FUN_9802f200((uint *)&local_5e,0,0xe);
  iVar4 = FUN_9800e2e0();
  iVar5 = func_0x9804179c(2,2,1,6);
  *piVar3 = iVar5;
  if (iVar5 == -1) {
    uVar6 = thunk_EXT_FUN_980418ec();
    func_0x980417dc(0x91a0085c,uVar6);
  }
  else {
    local_6c[0] = 1;
    iVar5 = func_0x9804177c(2,iVar5,0xffff,0x5801,local_6c,4);
    if (iVar5 != 0) {
      func_0x980417dc(0x91a0081c);
      halt_baddata();
    }
    local_60 = 2;
    local_5e = param_3;
    local_5c = thunk_EXT_FUN_980418dc(pcVar9);
    if (local_5c == -1) {
      iVar10 = FUN_9800e1f8();
      iVar5 = func_0x9804176c(2,pcVar9,iVar10,&local_70);
      if (iVar5 == 0) {
        if (*local_70 == 0x2734) {
          FUN_9800e1f0();
        }
        if (*local_70 == 0) {
          bVar2 = false;
          if (local_70[1] != 0) {
            iVar5 = 8;
            do {
              local_5c = *(int *)(iVar5 + (int)local_70);
              iVar7 = func_0x9804175c(2,*piVar3,&local_60,0x10);
              if (iVar7 == 0) {
                bVar2 = true;
                break;
              }
              uVar11 = uVar11 + 1;
              iVar5 = iVar5 + 4;
            } while (uVar11 < (uint)local_70[1]);
          }
          if (bVar2) goto LAB_9800d770;
          uVar6 = 0x91a00798;
          pcVar8 = pcVar9;
          goto LAB_9800d73c;
        }
        iVar5 = 0;
      }
      func_0x980417dc(0x91a007d8,iVar5);
    }
    else {
      pcVar8 = (char *)func_0x9804175c(2,*piVar3,&local_60,0x10);
      if (pcVar8 == (char *)0x0) {
LAB_9800d770:
        iVar5 = FUN_9800e2e0();
        func_0x980417dc(0x91a00720,iVar5 - iVar4);
        FUN_98012468();
        FUN_98012170(piVar3 + 0x6d8,piVar3 + 0x88,0x91a0a380,*piVar3,0x91a0a3c0,*piVar3);
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_9800cf80();
        goto LAB_9800d5c4;
      }
      uVar6 = 0x91a00758;
LAB_9800d73c:
      func_0x980417dc(uVar6,pcVar8);
    }
  }
  if (*piVar3 != -1) {
    func_0x9804174c(2);
    *piVar3 = -1;
  }
LAB_9800d5c4:
  if (iVar10 != 0) {
    FUN_9800e298();
  }
  if (local_70 != (int *)0x0) {
    func_0x9804178c(2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d7f0 @ 9800d7f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800d7f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800d840 @ 9800d840 ==== */

void FUN_9800d840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d8d0 @ 9800d8d0 ==== */

void FUN_9800d8d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800d9e8 @ 9800d9e8 ==== */

void FUN_9800d9e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9800db28 @ 9800db28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800db28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar7;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  undefined8 uVar9;
  undefined1 local_1e0 [16];
  undefined4 ******local_1d0 [5];
  uint local_1bc;
  undefined4 ******local_1b0 [5];
  uint local_19c;
  undefined4 ******local_170 [5];
  uint local_15c;
  undefined4 local_150;
  uint auStack_14c [4];
  undefined4 local_13c;
  undefined2 local_138;
  int local_120;
  
  uVar9 = FUN_9802ea18();
  piVar1 = (int *)((ulonglong)uVar9 >> 0x20);
  local_150 = 0;
  FUN_9802f200(auStack_14c,0,0x38);
  FUN_9800bc20();
  FUN_9800bc20();
  FUN_9800bc20();
  local_13c = 1;
  local_150 = 0x3c;
  local_120 = 1;
  iVar2 = func_0x980417ac(2,(int)uVar9,0,0,&local_150);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_9800e3b0();
    func_0x980417dc(0x91a00980,uVar3);
  }
  else {
    FUN_9800d250();
    FUN_9800d4a8();
    FUN_9800bc20();
    FUN_9800d250();
    FUN_9800d4a8();
    FUN_9800bc20();
    if (local_120 == 0) {
      FUN_9800cf80();
    }
    if (*piVar1 == -1) {
LAB_9800dca8:
      if (local_1bc < 0x10) {
        local_1d0[0] = local_1d0;
      }
      iVar2 = FUN_9800d528(piVar1,local_1d0[0],local_138);
      if (iVar2 != 0) goto LAB_9800e01c;
    }
    else {
      FUN_9800d108();
      FUN_9800d108();
      cVar7 = FUN_9800caf8();
      if (cVar7 == '\0') {
        FUN_9800c950();
        goto LAB_9800dca8;
      }
    }
    iVar2 = 0;
    FUN_9800d9e8();
    FUN_9800d4a8();
    FUN_9800bc20();
    if (local_19c < 0x10) {
      local_1b0[0] = local_1b0;
    }
    func_0x980417dc(0x91a00970,local_1b0[0]);
    iVar4 = FUN_9800e2e0();
    FUN_980123c0();
    FUN_98012418();
    cVar7 = (**(code **)(*param_5 + 0x10))(param_5);
    if (cVar7 == '\0') {
      do {
        iVar5 = FUN_980122a8();
        if (iVar5 < 0) break;
        cVar7 = (**(code **)(*param_5 + 4))(param_5,piVar1 + 8);
        if (cVar7 == '\0') {
          iVar2 = 7;
          break;
        }
        cVar7 = (**(code **)(*param_5 + 0x10))(param_5);
      } while (cVar7 == '\0');
    }
    iVar5 = FUN_9800e2e0();
    func_0x980417dc(0x91a00934,iVar5 - iVar4);
    if (iVar2 == 0) {
      uVar6 = FUN_98011888((int)(piVar1 + 0x88));
      if (uVar6 == 1) {
        iVar2 = piVar1[0x88];
        if (iVar2 != 0x1f) goto LAB_9800de50;
        if (piVar1[0x90] == 5) goto LAB_9800de4c;
      }
      else {
LAB_9800de4c:
        iVar2 = 0;
LAB_9800de50:
        if ((iVar2 == 0) && ((**(code **)(*param_5 + 8))(param_5), param_5[0x404] == 0x12e)) {
          uVar6 = 0;
          iVar2 = (param_5[0x406] - param_5[0x405]) / 0x1c;
          if (iVar2 != 0) {
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_9800f3a8();
            }
            do {
              FUN_9800d438();
              FUN_9800d108();
              cVar7 = FUN_9800ca08();
              uVar8 = (param_5[0x406] - param_5[0x405]) / 0x1c;
              if (cVar7 == '\x01') {
                if (uVar6 < uVar8) {
                  FUN_9800bc20();
                  FUN_9800ce18();
                  local_1e0[0] = 0x20;
                  iVar2 = FUN_9800bb78(local_170,local_1e0,0,1);
                  if (iVar2 != -1) {
                    FUN_9800c158();
                  }
                  (**(code **)(*param_5 + 0xc))(param_5);
                  if (local_15c < 0x10) {
                    local_170[0] = local_170;
                  }
                  FUN_9800db28(piVar1,local_170[0],param_3,param_4,param_5,param_6);
                  FUN_9800bc20();
                  FUN_9800bc20();
                  FUN_9800bc20();
                  FUN_9800bc20();
                  halt_baddata();
                }
                    /* WARNING: Subroutine does not return */
                FUN_9800f3a8();
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
          goto LAB_9800e01c;
        }
      }
      if ((param_6 & 0xff) != 0) goto LAB_9800e024;
    }
  }
LAB_9800e01c:
  FUN_9800c950();
LAB_9800e024:
  FUN_9800bc20();
  FUN_9800bc20();
  FUN_9800bc20();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e060 @ 9800e060 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9800e194) */

void FUN_9800e060(void)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar4;
  char cVar5;
  int *piVar3;
  int iVar6;
  
  puVar1 = (undefined4 *)FUN_9802ea34();
  iVar6 = 0;
  *puVar1 = 0;
  iVar2 = FUN_9800a800();
  if ((iVar2 == 0) && (bVar4 = FUN_9800ac68(), bVar4)) {
    puVar1 = (undefined4 *)FUN_9800f4c8();
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_980103b0(puVar1);
    }
    if (iVar2 != 0) {
      cVar5 = FUN_980107d8();
      if (cVar5 != '\0') {
        puVar1 = (undefined4 *)FUN_9800f4c8();
        if (puVar1 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_9800f9f8(puVar1);
        }
        if (piVar3 != (int *)0x0) {
          iVar2 = FUN_9800f4c8();
          if (iVar2 != 0) {
            iVar6 = FUN_9800c898();
          }
          if (iVar6 != 0) {
            iVar2 = FUN_9800db28(iVar6,0x91a009c8,0x91a42070,2,piVar3,0);
            if ((iVar2 == 0) && (piVar3[0x404] == 200)) {
              FUN_9800cbe8();
            }
            FUN_9800d0c0();
            thunk_FUN_9802f2a0();
          }
          FUN_9800fa60();
          thunk_FUN_9802f2a0();
        }
      }
      FUN_980103c8();
      thunk_FUN_9802f2a0();
    }
  }
  func_0x9804173c(2);
  func_0x9804172c(2);
  func_0x9804171c(2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e1f0 @ 9800e1f0 ==== */

void FUN_9800e1f0(void)

{
  FUN_9800e2f8();
  return;
}


/* ==== FUN_9800e1f8 @ 9800e1f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e1f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e298 @ 9800e298 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_9800e298(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_91a42328 + 4))();
  if (iVar1 < 0) {
    FUN_9800e378();
  }
  return iVar1 >= 0;
}


/* ==== FUN_9800e2e0 @ 9800e2e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9800e2e0(void)

{
  return *(undefined4 *)(_DAT_91a00484 + 0x10);
}


/* ==== thunk_FUN_9800e3b0 @ 9800e2f0 ==== */

undefined4 thunk_FUN_9800e3b0(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_9800e2f8 @ 9800e2f8 ==== */

void FUN_9800e2f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800e360 @ 9800e360 ==== */

void FUN_9800e360(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_9800e378 @ 9800e378 ==== */

void FUN_9800e378(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x9804180c();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_9800e3b0 @ 9800e3b0 ==== */

undefined4 FUN_9800e3b0(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_9800e3d0 @ 9800e3d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e3d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e428 @ 9800e428 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_9800e428(undefined4 param_1,int param_2)

{
  if (param_2 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_980418dc @ 9800e448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_980418dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_980418ec @ 9800e450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_980418ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e458 @ 9800e458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e4a0 @ 9800e4a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e4a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e5a0 @ 9800e5a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e5a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e620 @ 9800e620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e670 @ 9800e670 ==== */

void FUN_9800e670(int *param_1)

{
  if (3 < *param_1) {
    return;
  }
  thunk_EXT_FUN_9804191c(*param_1 * 0x1c + -0x6e5bc8b0);
  return;
}


/* ==== FUN_9800e698 @ 9800e698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e708 @ 9800e708 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e708(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e760 @ 9800e760 ==== */

void FUN_9800e760(int *param_1)

{
  undefined4 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = (undefined4 *)FUN_9800a9c8(), puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}


/* ==== FUN_9800e7a8 @ 9800e7a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e7a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e7f8 @ 9800e7f8 ==== */

undefined4 FUN_9800e7f8(void)

{
  return uRam91a437c8;
}


/* ==== FUN_9800e808 @ 9800e808 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e808(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800e868 @ 9800e868 ==== */

void FUN_9800e868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800e9c0 @ 9800e9c0 ==== */

int FUN_9800e9c0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x14);
  if (pcVar1 == (char *)0x0) {
    return param_1;
  }
  if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && ((*pcVar1 != 'C' || (pcVar1[1] != '\0')))) {
    return 0;
  }
  return -0x6e5bda68;
}


/* ==== FUN_9800e9d8 @ 9800e9d8 ==== */

void FUN_9800e9d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800ea60 @ 9800ea60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ea60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800eaf0 @ 9800eaf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eaf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800eb68 @ 9800eb68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eb68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ec28 @ 9800ec28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ec28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ec80 @ 9800ec80 ==== */

void FUN_9800ec80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800edf0 @ 9800edf0 ==== */

void FUN_9800edf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800ee80 @ 9800ee80 ==== */

undefined4 FUN_9800ee80(void)

{
  return 0x91a42370;
}


/* ==== FUN_9800eea8 @ 9800eea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800eea8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ef10 @ 9800ef10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ef10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ef68 @ 9800ef68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ef68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800efb0 @ 9800efb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800efb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f080 @ 9800f080 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f080(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f118 @ 9800f118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f170 @ 9800f170 ==== */

void FUN_9800f170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800f200 @ 9800f200 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f200(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f2a0 @ 9800f2a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f2a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f310 @ 9800f310 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f310(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f370 @ 9800f370 ==== */

void FUN_9800f370(void)

{
  FUN_9800f310();
                    /* WARNING: Subroutine does not return */
  FUN_9802ff90();
}


/* ==== FUN_9800f3a8 @ 9800f3a8 ==== */

void FUN_9800f3a8(void)

{
  FUN_9800f310();
                    /* WARNING: Subroutine does not return */
  FUN_9802ff90();
}


/* ==== FUN_9800f430 @ 9800f430 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f430(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f4c8 @ 9800f4c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f4c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f580 @ 9800f580 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f580(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f5c8 @ 9800f5c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f5c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f608 @ 9800f608 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f608(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_980418fc @ 9800f650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_980418fc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_9804190c @ 9800f658 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_9804190c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_9804191c @ 9800f660 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_9804191c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f668 @ 9800f668 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9800f668(undefined4 param_1)

{
  int iVar1;
  
  if (iRam91a423e8 == 0) {
    iVar1 = FUN_98032288();
    if (iVar1 != 0) {
      FUN_980322a0();
    }
    if ((_DAT_91a42580 & 2) != 0) {
      FUN_9802eaf8();
    }
    FUN_98031288();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam91a423e8 = iRam91a423e8 + -1;
  *(undefined4 *)(iRam91a423e8 * 4 + -0x6e5bc7a8) = param_1;
  return;
}


/* ==== FUN_9800f698 @ 9800f698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f708 @ 9800f708 ==== */

void FUN_9800f708(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9800f7c8 @ 9800f7c8 ==== */

int FUN_9800f7c8(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x9249249 < param_1 || (iVar1 = FUN_9800f4c8(), iVar1 == 0)))) {
    iVar1 = FUN_9800a830();
  }
  return iVar1;
}


/* ==== FUN_9800f830 @ 9800f830 ==== */

void FUN_9800f830(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9800f8d8 @ 9800f8d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f8d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f930 @ 9800f930 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f930(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_9802ea34();
  *(int *)((ulonglong)uVar2 >> 0x20) = param_3;
  if (param_3 != param_4) {
    iVar1 = *(int *)((int)uVar2 + 4);
    for (; param_4 != iVar1; param_4 = param_4 + 0x1c) {
      FUN_9800d4a8();
      param_3 = param_3 + 0x1c;
    }
    FUN_9800f8d8();
    *(int *)((int)uVar2 + 4) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f9a0 @ 9800f9a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f9a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f9f8 @ 9800f9f8 ==== */

void FUN_9800f9f8(undefined4 *param_1)

{
  *param_1 = 0x91a00d74;
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


/* ==== FUN_9800fa60 @ 9800fa60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800fa60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800fb18 @ 9800fb18 ==== */

void FUN_9800fb18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9800fbf8 @ 9800fbf8 ==== */

void FUN_9800fbf8(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x1c;
  if (0x9249249U - param_2 < uVar1) {
    FUN_9800f310();
                    /* WARNING: Subroutine does not return */
    FUN_9802ff90();
  }
  if (uVar1 + param_2 <= (uint)((param_1[2] - *param_1) / 0x1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9800fc70 @ 9800fc70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800fc70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800fd48 @ 9800fd48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800fd48(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_9802ea24();
  piVar2 = (int *)((ulonglong)uVar12 >> 0x20);
  iVar7 = (int)uVar12;
  if (*(char *)(piVar2 + 0x402) == '\0') {
    uVar11 = 0x1000U - piVar2[0x401];
    if (param_3 <= 0x1000U - piVar2[0x401]) {
      uVar11 = param_3;
    }
    FUN_9802ebd0();
    iVar5 = piVar2[0x401];
    piVar9 = piVar2 + 1;
    iVar7 = uVar11 + iVar7;
    piVar2[0x401] = iVar5 + uVar11;
    param_3 = param_3 - uVar11;
    piVar8 = piVar9;
    if (piVar9 <= (int *)((int)piVar2 + iVar5 + uVar11 + 2)) {
      piVar10 = piVar9;
      do {
        pcVar4 = &DAT_91a008b8;
        piVar6 = piVar10;
        do {
          cVar3 = *(char *)piVar6;
          cVar1 = *pcVar4;
          if (cVar3 != cVar1) break;
          piVar6 = (int *)((int)piVar6 + 1);
          pcVar4 = pcVar4 + 1;
        } while (piVar6 != (int *)((int)piVar10 + 2));
        if (cVar3 == cVar1) {
          *(char *)piVar10 = '\0';
          if (piVar10 <= piVar8) {
            *(undefined1 *)(piVar2 + 0x402) = 1;
            (**(code **)*piVar2)
                      (piVar2,(char *)((int)piVar8 + 2),
                       (int)piVar2 + (piVar2[0x401] - ((int)piVar8 + 2)) + 4);
            if (param_3 == 0) {
              halt_baddata();
            }
            goto LAB_9800ff38;
          }
          FUN_9800d438();
          FUN_9800fc70();
          FUN_9800bc20();
          FUN_9800d438();
          FUN_9800d438();
          cVar3 = FUN_9800ca08();
          if (cVar3 == '\x01') {
            iVar5 = FUN_980301d0((char *)((int)piVar8 + 0xf));
            piVar2[0x40a] = iVar5;
          }
          piVar8 = (int *)((int)piVar10 + 2);
          piVar10 = (int *)((int)piVar10 + 1);
        }
        piVar10 = (int *)((int)piVar10 + 1);
      } while (piVar10 <= (int *)((int)piVar2 + piVar2[0x401] + 2));
    }
    uVar11 = (int)piVar2 + (piVar2[0x401] - (int)piVar8) + 4;
    if (uVar11 != 0) {
      FUN_9802f140((int)piVar9,(int)piVar8,uVar11);
      piVar2[0x401] = uVar11;
    }
    if (param_3 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2,iVar7,param_3);
    }
  }
  else {
LAB_9800ff38:
    (**(code **)*piVar2)(piVar2,iVar7,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ff58 @ 9800ff58 ==== */

int FUN_9800ff58(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x7ffffff < param_1 || (iVar1 = FUN_9800f4c8(), iVar1 == 0)))) {
    iVar1 = FUN_9800a830();
  }
  return iVar1;
}


/* ==== FUN_9800ffc0 @ 9800ffc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800ffc0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_9802ea34();
  puVar4 = (undefined1 *)((ulonglong)uVar12 >> 0x20);
  uVar7 = (int)uVar12 - (int)puVar4;
  uVar3 = uVar7;
  uVar6 = (int)param_3 - (int)puVar4;
  while (uVar2 = uVar3, uVar2 != 0) {
    trapWord(6,uVar2,0);
    trapWord(5,uVar2 & ~((uVar6 << 1 | uVar6 >> 0x1f) - 1),0xffff);
    uVar3 = uVar6 - ((int)uVar6 / (int)uVar2) * uVar2;
    uVar6 = uVar2;
  }
  if (((int)uVar6 < (int)param_3 - (int)puVar4) && (0 < (int)uVar6)) {
    puVar5 = puVar4 + uVar6;
    do {
      puVar10 = puVar5 + uVar7;
      if (puVar5 + uVar7 == param_3) {
        puVar10 = puVar4;
      }
      puVar8 = (undefined1 *)-(int)puVar10;
      puVar11 = puVar5;
      do {
        puVar9 = puVar10;
        uVar1 = *puVar11;
        *puVar11 = *puVar9;
        *puVar9 = uVar1;
        if ((int)uVar7 < (int)(param_3 + (int)puVar8)) {
          puVar10 = puVar9 + uVar7;
          puVar8 = puVar8 + -uVar7;
        }
        else {
          puVar8 = param_3 + (int)(puVar8 + (-uVar7 - (int)puVar4));
          puVar10 = puVar4 + (int)(puVar9 + (uVar7 - (int)param_3));
        }
        puVar11 = puVar9;
      } while (puVar10 != puVar5);
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + -1;
    } while (0 < (int)uVar6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980100a0 @ 980100a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980100a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010108 @ 98010108 ==== */

void FUN_98010108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_980101f8 @ 980101f8 ==== */

void FUN_980101f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98010338 @ 98010338 ==== */

void FUN_98010338(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 5;
  if (0x7ffffffU - param_2 < uVar1) {
    FUN_9800f310();
                    /* WARNING: Subroutine does not return */
    FUN_9802ff90();
  }
  if (uVar1 + param_2 <= (uint)(param_1[2] - *param_1 >> 5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_980103b0 @ 980103b0 ==== */

void FUN_980103b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== FUN_980103c8 @ 980103c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980103c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010480 @ 98010480 ==== */

void FUN_98010480(void)

{
  FUN_980101f8();
  return;
}


/* ==== FUN_980104b8 @ 980104b8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9801058c) */
/* WARNING: Removing unreachable block (ram,0x980106ec) */
/* WARNING: Removing unreachable block (ram,0x98010558) */

void FUN_980104b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r4;
  char local_490 [4];
  uint local_48c;
  uint local_488;
  uint local_484;
  uint local_480;
  int local_370;
  char local_26c;
  char local_258;
  
  FUN_9802ea34();
  bVar1 = false;
  FUN_9802f200(param_4,0,0x20);
  FUN_98012b98();
  FUN_98012be8((int)local_490,extraout_r4,param_3);
  if (local_370 != 0) {
LAB_98010540:
    func_0x980417dc(0x91a00e38,local_370);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (local_26c == '\0') {
    local_370 = 0x22;
    goto LAB_98010540;
  }
  uVar2 = FUN_9802fdc0();
  *param_4 = uVar2;
  if (uVar2 == 0) {
    halt_baddata();
  }
  FUN_9802ebd0();
  param_4[1] = 0;
  if (local_258 != '\0') {
    param_4[2] = param_4[2] | 1;
  }
  if (local_490[0] == '\x01') {
    *(undefined1 *)(param_4 + 3) = 1;
    param_4[7] = local_480;
    param_4[5] = local_488;
    uVar2 = FUN_9802fdc0();
    param_4[6] = uVar2;
    uVar3 = FUN_9802fdc0();
    param_4[4] = uVar3;
    if ((uVar2 == 0) || (uVar3 == 0)) goto LAB_9801068c;
    FUN_9802ebd0();
  }
  else {
    if (local_490[0] != '\x02') {
      func_0x980417dc(0x91a00de0);
      goto LAB_9801068c;
    }
    *(undefined1 *)(param_4 + 3) = 2;
    param_4[6] = local_484;
    param_4[4] = local_48c;
    uVar2 = FUN_9802fdc0();
    param_4[5] = uVar2;
    if (uVar2 == 0) goto LAB_9801068c;
  }
  FUN_9802ebd0();
  bVar1 = true;
LAB_9801068c:
  if (bVar1) {
    halt_baddata();
  }
  if (*param_4 != 0) {
    FUN_9802f2a0();
  }
  if (*(char *)(param_4 + 3) == '\x01') {
    if (param_4[6] != 0) {
      FUN_9802f2a0();
    }
    uVar2 = param_4[4];
  }
  else {
    if (*(char *)(param_4 + 3) != '\x02') {
      halt_baddata();
    }
    uVar2 = param_4[5];
  }
  if (uVar2 == 0) {
    halt_baddata();
  }
  FUN_9802f2a0();
  halt_baddata();
}


/* ==== FUN_98010700 @ 98010700 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010700(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980107d8 @ 980107d8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_980107d8(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  int local_3e0;
  int local_3dc;
  undefined4 local_3d8;
  uint auStack_3c0 [8];
  char local_3a0 [128];
  undefined1 auStack_320 [280];
  undefined4 local_208;
  int *local_204;
  undefined1 auStack_1ff [511];
  
  uVar11 = FUN_9802ea14();
  uVar7 = (undefined4)uVar11;
  iVar10 = 0;
  local_3a0[0] = '\0';
  FUN_9802f200((uint *)((int)local_3a0 + 1),0,0x7f);
  local_3e0 = 0;
  local_3dc = 0;
  local_3d8 = 0;
  iVar2 = FUN_9803d058();
  if (iVar2 == -1) {
    uVar3 = thunk_FUN_9800e3b0();
    func_0x980417dc(0x91a01050,uVar7,uVar3);
    if (local_3e0 != 0) {
      thunk_FUN_9802f2a0();
    }
  }
  else {
    iVar2 = FUN_9803d4f8();
    iVar4 = FUN_9802fdc0();
    if (iVar4 == 0) {
      func_0x980417dc(0x91a00ff0,iVar2);
    }
    else {
      iVar4 = FUN_9803d378();
      if (iVar4 == 0) {
        uVar3 = thunk_FUN_9800e3b0();
        func_0x980417dc(0x91a00fa8,uVar7,uVar3);
      }
      else {
        FUN_98013150();
        iVar4 = FUN_9800e2e0();
        if (0 < iVar2) {
          do {
            iVar5 = local_3e0;
            if (local_3e0 != local_3dc) {
              FUN_9802f140(local_3e0,local_3dc,0);
              local_3dc = iVar5;
            }
            iVar5 = FUN_980131a0();
            iVar2 = iVar2 - iVar5;
            cVar6 = FUN_98012bf8((int)auStack_320);
            if (cVar6 == '\x01') {
              FUN_980301e0(local_3a0,(int)auStack_1ff,0x80);
              local_204 = &local_3e0;
              local_208 = 0x91a0fc80;
            }
            else if (cVar6 == '\x02') {
              pcVar9 = local_3a0;
              pcVar8 = &DAT_91a00f24;
              do {
                cVar6 = *pcVar9;
                cVar1 = *pcVar8;
                if (cVar6 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar8 = pcVar8 + 1;
              } while (cVar6 == cVar1);
              if (cVar6 != cVar1) {
                pcVar9 = local_3a0;
                pcVar8 = &DAT_91a00f30;
                do {
                  cVar6 = *pcVar9;
                  cVar1 = *pcVar8;
                  if (cVar6 == '\0') break;
                  pcVar9 = pcVar9 + 1;
                  pcVar8 = pcVar8 + 1;
                } while (cVar6 == cVar1);
                if (cVar6 != cVar1) {
                  func_0x980417dc(0x91a00f48,local_3a0);
                  goto LAB_98010a50;
                }
              }
              cVar6 = FUN_980104b8((int)((ulonglong)uVar11 >> 0x20),local_3e0,local_3dc - local_3e0,
                                   auStack_3c0);
              if (cVar6 == '\x01') {
                FUN_98010700();
                iVar10 = iVar10 + 1;
              }
            }
            else if (cVar6 == '\x03') {
              func_0x980417dc(0x91a00ee0);
              goto LAB_98010a78;
            }
LAB_98010a50:
          } while (0 < iVar2);
        }
        iVar2 = FUN_9800e2e0();
        func_0x980417dc(0x91a00e88,iVar10,uVar7,iVar2 - iVar4);
      }
LAB_98010a78:
      FUN_9802f2a0();
    }
    FUN_9800e298();
    if (local_3e0 != 0) {
      thunk_FUN_9802f2a0();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010aa8 @ 98010aa8 ==== */

void FUN_98010aa8(undefined4 *param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


/* ==== FUN_98010ac8 @ 98010ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010ac8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010c80 @ 98010c80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010c80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010d18 @ 98010d18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010d18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010dc8 @ 98010dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010dc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011000 @ 98011000 ==== */

undefined4 FUN_98011000(int param_1)

{
  if ((((*(char *)(param_1 + 0x30) == '\x01') || (*(char *)(param_1 + 0x30) == '\x03')) &&
      (*(int *)(param_1 + 0x20) != 0)) && (4 < *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_98011038 @ 98011038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980110d0 @ 980110d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980110d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980111f0 @ 980111f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980111f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011260 @ 98011260 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011260(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9802ea34();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  do {
    bVar1 = *(byte *)(iVar2 + 0x30);
    if ((bVar1 == 1) || (bVar1 == 3)) {
      uVar6 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
      if (uVar6 == 0) goto LAB_980112a8;
      iVar5 = *(int *)(iVar2 + 4) + *(int *)(iVar2 + 0x18);
    }
    else {
      uVar6 = 0;
LAB_980112a8:
      iVar5 = 0;
    }
    *(int *)(iVar2 + 0xaf0) = iVar5;
    if (iVar5 != 0) {
      uVar6 = -(uint)(*(char *)(iVar2 + 0x33) != '\x17') & uVar6;
    }
    if ((bVar1 < 2) || (3 < bVar1)) {
      uVar4 = 0;
LAB_98011308:
      iVar5 = 0;
    }
    else {
      uVar4 = *(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24);
      if (uVar4 == 0) goto LAB_98011308;
      iVar5 = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x24);
    }
    *(int *)(iVar2 + 0xaf4) = iVar5;
    *(int *)(iVar2 + 0xaf8) = iVar5;
    if ((iVar5 != 0) && (*(int *)(iVar2 + 0x24) != *(int *)(iVar2 + 0x28))) {
      uVar4 = -(uint)(*(int *)(iVar2 + 0x2c) == *(int *)(iVar2 + 0x24)) & uVar4;
    }
    *(uint *)(iVar2 + 0xafc) = uVar6;
    *(uint *)(iVar2 + 0xb00) = uVar4;
    *(char *)(iVar2 + 0xb08) = (char)uVar3;
    (**(code **)(iVar2 + 0xb04))(iVar2 + 0x7e4);
    if (*(char *)(iVar2 + 0x30) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(iVar2 + 0xaf4) != *(int *)(iVar2 + 0xaf8)) {
      FUN_980110d0(iVar2,*(int *)(iVar2 + 0xaf4) - *(int *)(iVar2 + 0xaf8));
    }
    uVar4 = *(uint *)(iVar2 + 0xafc);
    if (uVar6 == uVar4) {
      halt_baddata();
    }
    iVar5 = (*(int *)(iVar2 + 0x18) - uVar4) + uVar6;
    *(int *)(iVar2 + 0x18) = iVar5;
    if (iVar5 == *(int *)(iVar2 + 0x1c)) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 5;
        if (*(char *)(iVar2 + 0x30) == '\x01') {
          *(undefined1 *)(iVar2 + 0x30) = 3;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x1c) = 5;
        *(undefined4 *)(iVar2 + 0x18) = 5;
      }
    }
    if (uVar4 != 0) {
      halt_baddata();
    }
    uVar3 = 0;
  } while( true );
}


/* ==== FUN_98011400 @ 98011400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980114f8 @ 980114f8 ==== */

int FUN_980114f8(int param_1,int *param_2)

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


/* ==== thunk_FUN_980110d0 @ 98011560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_980110d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011568 @ 98011568 ==== */

int FUN_98011568(int param_1,int *param_2)

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


/* ==== FUN_980115d8 @ 980115d8 ==== */

void FUN_980115d8(int param_1,int param_2)

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


/* ==== FUN_98011638 @ 98011638 ==== */

int FUN_98011638(int param_1,int *param_2)

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


/* ==== FUN_98011680 @ 98011680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011720 @ 98011720 ==== */

int FUN_98011720(int param_1,uint *param_2)

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


/* ==== FUN_98011788 @ 98011788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011888 @ 98011888 ==== */

uint FUN_98011888(int param_1)

{
  uint uVar1;
  int iVar2;
  uint auStack_10 [4];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    iVar2 = FUN_98011638(param_1,(int *)auStack_10);
    if (iVar2 != 0) {
      uVar1 = 2;
    }
    iVar2 = FUN_98011720(param_1,auStack_10);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 4;
    }
    iVar2 = FUN_980114f8(param_1,(int *)auStack_10);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 8;
    }
    iVar2 = FUN_98011568(param_1,(int *)auStack_10);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 0x10;
    }
  }
  return uVar1;
}


/* ==== FUN_98011928 @ 98011928 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011928(int param_1)

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


/* ==== FUN_98011948 @ 98011948 ==== */

void FUN_98011948(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980119d0 @ 980119d0 ==== */

undefined4 FUN_980119d0(int param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x70c) < 0x303) {
    return *(undefined4 *)(param_1 + 0xcb4);
  }
  if (param_2 == 5) {
    return *(undefined4 *)(param_1 + 0xcbc);
  }
  return *(undefined4 *)(param_1 + 0xcb8);
}


/* ==== FUN_98011a00 @ 98011a00 ==== */

void FUN_98011a00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  (*pcVar1)(param_1 + 0x710,0x30,param_3,param_4,0x91a010a4,2,aiStack_20);
  return;
}


/* ==== FUN_98011a80 @ 98011a80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011a80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011b18 @ 98011b18 ==== */

void FUN_98011b18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98011bf8 @ 98011bf8 ==== */

void FUN_98011bf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98011cd0 @ 98011cd0 ==== */

void FUN_98011cd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98011d58 @ 98011d58 ==== */

void FUN_98011d58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98011de0 @ 98011de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011e68 @ 98011e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011ee8 @ 98011ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011ee8(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_r6;
  int in_r7;
  undefined4 in_r8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [124];
  
  uVar4 = FUN_9802ea34();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  FUN_98011a80();
  puVar3 = auStack_80;
  if ((int)uVar4 == 0) {
    puVar2 = auStack_80;
  }
  else {
    puVar2 = puVar3 + in_r7;
    puVar3 = auStack_7c;
  }
  (**(code **)(*(int *)(iVar1 + 0xcfc) + 0xc))
            (iVar1 + 0x40,in_r6,puVar2,in_r7,puVar3 + in_r7 * 2,in_r8);
  *(undefined1 *)(iVar1 + 0x31) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011f70 @ 98011f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011f70(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_r6;
  int in_r7;
  undefined1 *puVar3;
  undefined4 in_r8;
  undefined8 uVar4;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [124];
  
  uVar4 = FUN_9802ea34();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  FUN_98011a80();
  if ((int)uVar4 == 0) {
    puVar2 = auStack_80 + in_r7;
    puVar3 = auStack_7c + in_r7 * 2;
  }
  else {
    puVar2 = auStack_80;
    puVar3 = auStack_80 + in_r7 * 2;
  }
  (**(code **)(*(int *)(iVar1 + 0xd00) + 0xc))(iVar1 + 0x278,in_r6,puVar2,in_r7,puVar3,in_r8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011ff8 @ 98011ff8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011ff8(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  if (((param_2 != 0) && (param_4 != 0)) && (param_3 < 0x59a)) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    *param_1 = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012060 @ 98012060 ==== */

void FUN_98012060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98012170 @ 98012170 ==== */

void FUN_98012170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}


/* ==== FUN_98012188 @ 98012188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980122a8 @ 980122a8 ==== */

void FUN_980122a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98012338 @ 98012338 ==== */

void FUN_98012338(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980123c0 @ 980123c0 ==== */

void FUN_980123c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98012418 @ 98012418 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012418(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012458 @ 98012458 ==== */

void FUN_98012458(undefined4 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x9802f28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar3 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x9802f294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar3 + 2) = 0;
  return;
}


/* ==== FUN_98012468 @ 98012468 ==== */

void FUN_98012468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98012548 @ 98012548 ==== */

void FUN_98012548(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0x91a011e8;
  pbVar3 = (byte *)0x91a01309;
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


/* ==== FUN_980125a8 @ 980125a8 ==== */

void FUN_980125a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98012b98 @ 98012b98 ==== */

void FUN_98012b98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98012be8 @ 98012be8 ==== */

void FUN_98012be8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x244) = param_2;
  *(undefined4 *)(param_1 + 0x248) = param_3;
  FUN_980125a8();
  return;
}


/* ==== FUN_98012bf8 @ 98012bf8 ==== */

undefined1 FUN_98012bf8(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x120) = 0;
  return uVar1;
}


/* ==== FUN_98012c10 @ 98012c10 ==== */

void FUN_98012c10(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0x91a01838;
  pbVar3 = (byte *)0x91a019b8;
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


/* ==== FUN_98012c70 @ 98012c70 ==== */

void FUN_98012c70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98013150 @ 98013150 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013150(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980131a0 @ 980131a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980131a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013200 @ 98013200 ==== */

void FUN_98013200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98013330 @ 98013330 ==== */

void FUN_98013330(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_980134a8 @ 980134a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980134a8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_9802ea34();
  puVar1 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
  *puVar1 = 0x91a01b04;
  uVar2 = *(uint *)((int)uVar3 + 4) >> 8 & 0x7f;
  FUN_9802f200(puVar1 + 1,0,uVar2);
  FUN_9802f200(puVar1 + 0x11,1,uVar2);
  puVar1[0x21] = (int)uVar3;
  FUN_98013330();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013570 @ 98013570 ==== */

undefined4 FUN_98013570(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x91a01b14;
  }
  return 0x91a12d18;
}


/* ==== FUN_98013590 @ 98013590 ==== */

void FUN_98013590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98013a28 @ 98013a28 ==== */

void FUN_98013a28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98013b60 @ 98013b60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013b60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013bb0 @ 98013bb0 ==== */

void FUN_98013bb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98013c48 @ 98013c48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013c48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013cd0 @ 98013cd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013cd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013d28 @ 98013d28 ==== */

void FUN_98013d28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_980141c0 @ 980141c0 ==== */

void FUN_980141c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98014318 @ 98014318 ==== */

void FUN_98014318(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_980143b0 @ 980143b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980143b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014438 @ 98014438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014438(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014490 @ 98014490 ==== */

void FUN_98014490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_980148e8 @ 980148e8 ==== */

void FUN_980148e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98014978 @ 98014978 ==== */

void FUN_98014978(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98014b10 @ 98014b10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014b10(void)

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
  
  uVar20 = FUN_9802ea0c();
  puVar11 = (uint *)uVar20;
  uVar18 = *puVar11;
  uVar17 = puVar11[1];
  uVar15 = puVar11[2];
  uVar16 = puVar11[3];
  FUN_98017f38((int)local_c0,0x10,(int)((ulonglong)uVar20 >> 0x20));
  iVar14 = 0;
  iVar19 = 4;
  do {
    uVar18 = ((uVar16 ^ uVar15) & uVar17 ^ uVar16) + *(int *)(iVar14 + -0x6e5fdff0) +
             *(int *)((int)local_c0 + iVar14) + uVar18;
    piVar13 = (int *)(iVar14 + -0x6e5fdfec);
    iVar8 = iVar14 + 4;
    uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar17;
    iVar9 = iVar14 + 8;
    piVar6 = (int *)(iVar14 + -0x6e5fdfe8);
    piVar7 = (int *)(iVar14 + -0x6e5fdfe4);
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
  piVar13 = (int *)0x91a0204c;
  do {
    piVar6 = piVar13 + 1;
    pbVar2 = (byte *)(iVar14 + -0x6e5fdefe);
    pbVar3 = (byte *)(iVar14 + -0x6e5fdeff);
    piVar7 = piVar13 + 2;
    pbVar4 = (byte *)(iVar14 + -0x6e5fdefd);
    piVar1 = piVar13 + 3;
    piVar13 = piVar13 + 4;
    uVar18 = local_c0[*(byte *)(iVar14 + -0x6e5fdf00)] + ((uVar15 ^ uVar17) & uVar16 ^ uVar15) +
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
  piVar13 = (int *)0x91a0208c;
  iVar19 = 4;
  do {
    pbVar2 = (byte *)(iVar14 + -0x6e5fdf00);
    piVar6 = piVar13 + 1;
    pbVar3 = (byte *)(iVar14 + -0x6e5fdeff);
    piVar7 = piVar13 + 2;
    pbVar4 = (byte *)(iVar14 + -0x6e5fdefe);
    piVar1 = piVar13 + 3;
    pbVar5 = (byte *)(iVar14 + -0x6e5fdefd);
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
  piVar13 = (int *)0x91a020cc;
  iVar19 = 4;
  do {
    pbVar2 = (byte *)(iVar14 + -0x6e5fdf00);
    pbVar3 = (byte *)(iVar14 + -0x6e5fdeff);
    piVar6 = piVar13 + 1;
    pbVar4 = (byte *)(iVar14 + -0x6e5fdefd);
    piVar7 = piVar13 + 2;
    pbVar5 = (byte *)(iVar14 + -0x6e5fdefe);
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


/* ==== FUN_98014fe0 @ 98014fe0 ==== */

void FUN_98014fe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98015180 @ 98015180 ==== */

void FUN_98015180(int param_1)

{
  *(undefined4 *)(param_1 + 0xcf4) = 0x91a03f30;
  *(undefined4 *)(param_1 + 0xcf8) = 0x91a03f40;
  *(undefined4 *)(param_1 + 0xcdc) = 0x91a17f60;
  *(undefined4 *)(param_1 + 0xce0) = 0x91a17af0;
  return;
}


/* ==== FUN_980151b8 @ 980151b8 ==== */

void FUN_980151b8(int param_1)

{
  *(undefined4 *)(param_1 + 0xce4) = 0x91a03f78;
  *(undefined4 *)(param_1 + 0xce8) = 0x91a03f88;
  *(undefined4 *)(param_1 + 0xcd0) = 0x91a03f64;
  *(undefined4 *)(param_1 + 0xcd4) = 0x91a03f50;
  return;
}


/* ==== FUN_980151f0 @ 980151f0 ==== */

void FUN_980151f0(int param_1)

{
  *(undefined4 *)(param_1 + 0xcec) = 0x91a03fac;
  *(undefined4 *)(param_1 + 0xcf0) = 0x91a03fbc;
  *(undefined4 *)(param_1 + 0xcc8) = 0x91a03f98;
  *(undefined4 *)(param_1 + 0xcd8) = 0x91a19210;
  return;
}


/* ==== FUN_98015228 @ 98015228 ==== */

void FUN_98015228(int param_1)

{
  *(undefined4 *)(param_1 + 0xcfc) = 0x91a03fec;
  *(undefined4 *)(param_1 + 0xd00) = 0x91a03ffc;
  *(undefined4 *)(param_1 + 0xccc) = 0x91a03fcc;
  return;
}


/* ==== FUN_98015250 @ 98015250 ==== */

void FUN_98015250(int param_1)

{
  *(undefined4 *)(param_1 + 0xce4) = 0x91a03f78;
  *(undefined4 *)(param_1 + 0xce8) = 0x91a03f88;
  *(undefined4 *)(param_1 + 0xcc0) = 0x91a04020;
  *(undefined4 *)(param_1 + 0xcc4) = 0x91a0400c;
  return;
}


/* ==== FUN_980153f0 @ 980153f0 ==== */

void FUN_980153f0(int param_1)

{
  *(undefined4 *)(param_1 + 0xd04) = 0x91a04034;
  *(undefined4 *)(param_1 + 0xd0c) = 0x91a1be48;
  return;
}


/* ==== FUN_98015410 @ 98015410 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015440 @ 98015440 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015440(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015470 @ 98015470 ==== */

void FUN_98015470(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98015588 @ 98015588 ==== */

void FUN_98015588(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0x91a022f0;
  pbVar3 = &DAT_91a027c6;
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


/* ==== FUN_980155e8 @ 980155e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980155e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015710 @ 98015710 ==== */

void FUN_98015710(int param_1)

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
  FUN_98015588(param_1 + 0x18);
  if ((extraout_r4 == (char *)0x0) || (*extraout_r4 == '\0')) {
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  else {
    *(char **)(param_1 + 0x128) = extraout_r4;
  }
  return;
}


/* ==== FUN_980166f8 @ 980166f8 ==== */

void FUN_980166f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98016848 @ 98016848 ==== */

void FUN_98016848(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98016a38 @ 98016a38 ==== */

void FUN_98016a38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98016be8 @ 98016be8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016be8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017b08 @ 98017b08 ==== */

void FUN_98017b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98017bd8 @ 98017bd8 ==== */

void FUN_98017bd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98017c98 @ 98017c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017c98(void)

{
  int *extraout_r4;
  
  FUN_9802ea34();
  (**(code **)(*extraout_r4 + 8))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017d20 @ 98017d20 ==== */

void FUN_98017d20(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x98017d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== FUN_98017d30 @ 98017d30 ==== */

void FUN_98017d30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98017de0 @ 98017de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017de0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017e50 @ 98017e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017e50(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017eb8 @ 98017eb8 ==== */

void FUN_98017eb8(int param_1,int param_2,int param_3)

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


/* ==== FUN_98017ef8 @ 98017ef8 ==== */

void FUN_98017ef8(int param_1,int param_2,int param_3)

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


/* ==== FUN_98017f38 @ 98017f38 ==== */

void FUN_98017f38(int param_1,int param_2,int param_3)

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


/* ==== FUN_98017f78 @ 98017f78 ==== */

void FUN_98017f78(int param_1,int param_2,int param_3)

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


/* ==== FUN_98017fb8 @ 98017fb8 ==== */

void FUN_98017fb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98018760 @ 98018760 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98018760(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4,uint param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  uint local_120 [4];
  uint local_110 [4];
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec [7];
  byte local_d0 [16];
  undefined1 local_c0 [32];
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c [8];
  undefined4 uStack_94;
  int local_90 [36];
  
  uVar19 = FUN_9802ea14();
  puVar5 = &uStack_94;
  iVar17 = 8;
  puVar8 = (undefined1 *)((int)((ulonglong)uVar19 >> 0x20) + -1);
  do {
    puVar1 = puVar8 + 3;
    puVar2 = puVar8 + 1;
    puVar3 = puVar8 + 2;
    puVar8 = puVar8 + 4;
    puVar5 = puVar5 + 1;
    *puVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar8,*puVar1),*puVar3),*puVar2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  puVar6 = local_ec + 2;
  puVar8 = (undefined1 *)((int)uVar19 + -1);
  iVar17 = 3;
  do {
    puVar1 = puVar8 + 3;
    puVar2 = puVar8 + 1;
    puVar3 = puVar8 + 2;
    puVar8 = puVar8 + 4;
    puVar6 = puVar6 + 1;
    *puVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar8,*puVar1),*puVar3),*puVar2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  for (; param_5 != 0; param_5 = param_5 - uVar11) {
    local_120[0] = _DAT_91a03f20;
    local_120[1] = _DAT_91a03f24;
    local_120[2] = _DAT_91a03f28;
    local_120[3] = _DAT_91a03f2c;
    FUN_9802ebd0();
    iVar17 = 10;
    local_f0 = param_3;
    local_ec[0] = local_ec[3];
    local_ec[2] = local_ec[5];
    local_ec[1] = local_ec[4];
    do {
      local_ec[2] = local_ec[2] ^ local_120[3] + local_110[3];
      local_ec[0] = local_ec[0] ^ local_120[1] + local_110[1];
      uVar11 = local_ec[2] << 0x10 | local_ec[2] >> 0x10;
      local_ec[1] = local_ec[1] ^ local_120[2] + local_110[2];
      uVar13 = local_ec[0] << 0x10 | local_ec[0] >> 0x10;
      local_f4 = local_f4 + uVar11;
      uVar12 = local_ec[1] << 0x10 | local_ec[1] >> 0x10;
      local_fc = local_fc + uVar13;
      uVar15 = local_f4 ^ local_110[3];
      local_f8 = local_f8 + uVar12;
      uVar4 = local_fc ^ local_110[1];
      uVar16 = local_f8 ^ local_110[2];
      uVar15 = uVar15 << 0xc | uVar15 >> 0x14;
      local_f0 = local_120[0] + local_110[0] ^ local_f0;
      uVar4 = uVar4 << 0xc | uVar4 >> 0x14;
      local_120[3] = local_120[3] + local_110[3] + uVar15;
      uVar16 = uVar16 << 0xc | uVar16 >> 0x14;
      local_120[1] = local_120[1] + local_110[1] + uVar4;
      uVar10 = local_f0 << 0x10 | local_f0 >> 0x10;
      local_120[2] = local_120[2] + local_110[2] + uVar16;
      uVar11 = uVar11 ^ local_120[3];
      local_100 = local_100 + uVar10;
      uVar13 = uVar13 ^ local_120[1];
      uVar11 = uVar11 << 8 | uVar11 >> 0x18;
      uVar12 = uVar12 ^ local_120[2];
      uVar14 = local_100 ^ local_110[0];
      uVar13 = uVar13 << 8 | uVar13 >> 0x18;
      local_f4 = local_f4 + uVar11;
      uVar12 = uVar12 << 8 | uVar12 >> 0x18;
      uVar14 = uVar14 << 0xc | uVar14 >> 0x14;
      local_fc = local_fc + uVar13;
      uVar15 = local_f4 ^ uVar15;
      local_f8 = local_f8 + uVar12;
      local_120[0] = local_120[0] + local_110[0] + uVar14;
      uVar4 = local_fc ^ uVar4;
      uVar16 = local_f8 ^ uVar16;
      uVar15 = uVar15 << 7 | uVar15 >> 0x19;
      uVar10 = local_120[0] ^ uVar10;
      uVar4 = uVar4 << 7 | uVar4 >> 0x19;
      local_120[2] = uVar15 + local_120[2];
      uVar16 = uVar16 << 7 | uVar16 >> 0x19;
      local_120[0] = uVar4 + local_120[0];
      uVar10 = uVar10 << 8 | uVar10 >> 0x18;
      local_120[1] = uVar16 + local_120[1];
      uVar13 = local_120[2] ^ uVar13;
      uVar11 = uVar11 ^ local_120[0];
      local_100 = local_100 + uVar10;
      uVar13 = uVar13 << 0x10 | uVar13 >> 0x10;
      uVar10 = local_120[1] ^ uVar10;
      uVar14 = local_100 ^ uVar14;
      local_100 = uVar13 + local_100;
      uVar11 = uVar11 << 0x10 | uVar11 >> 0x10;
      uVar10 = uVar10 << 0x10 | uVar10 >> 0x10;
      local_f8 = uVar11 + local_f8;
      local_f4 = local_f4 + uVar10;
      uVar15 = uVar15 ^ local_100;
      uVar4 = local_f8 ^ uVar4;
      uVar16 = local_f4 ^ uVar16;
      uVar15 = uVar15 << 0xc | uVar15 >> 0x14;
      uVar4 = uVar4 << 0xc | uVar4 >> 0x14;
      uVar16 = uVar16 << 0xc | uVar16 >> 0x14;
      local_120[2] = uVar15 + local_120[2];
      local_120[0] = uVar4 + local_120[0];
      uVar13 = local_120[2] ^ uVar13;
      local_120[1] = uVar16 + local_120[1];
      uVar14 = uVar14 << 7 | uVar14 >> 0x19;
      uVar11 = uVar11 ^ local_120[0];
      local_ec[0] = uVar13 << 8 | uVar13 >> 0x18;
      uVar10 = local_120[1] ^ uVar10;
      local_ec[2] = uVar11 << 8 | uVar11 >> 0x18;
      local_f0 = uVar10 << 8 | uVar10 >> 0x18;
      local_120[3] = local_120[3] + uVar14;
      local_100 = local_ec[0] + local_100;
      local_f8 = local_ec[2] + local_f8;
      local_f4 = local_f4 + local_f0;
      uVar12 = local_120[3] ^ uVar12;
      uVar11 = uVar12 << 0x10 | uVar12 >> 0x10;
      uVar4 = local_f8 ^ uVar4;
      local_fc = uVar11 + local_fc;
      uVar16 = local_f4 ^ uVar16;
      uVar14 = local_fc ^ uVar14;
      uVar15 = uVar15 ^ local_100;
      uVar13 = uVar14 << 0xc | uVar14 >> 0x14;
      local_110[1] = uVar4 << 7 | uVar4 >> 0x19;
      local_120[3] = local_120[3] + uVar13;
      local_110[2] = uVar16 << 7 | uVar16 >> 0x19;
      uVar11 = local_120[3] ^ uVar11;
      local_110[3] = uVar15 << 7 | uVar15 >> 0x19;
      local_ec[1] = uVar11 << 8 | uVar11 >> 0x18;
      local_fc = local_ec[1] + local_fc;
      uVar13 = local_fc ^ uVar13;
      local_110[0] = uVar13 << 7 | uVar13 >> 0x19;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    iVar18 = 4;
    iVar17 = 0;
    do {
      iVar7 = *(int *)(&DAT_91a03f20 + iVar17) + *(int *)((int)local_120 + iVar17);
      local_d0[iVar17] = (byte)iVar7;
      local_d0[iVar17 + 1] = (byte)((uint)iVar7 >> 8);
      local_d0[iVar17 + 2] = (byte)((uint)iVar7 >> 0x10);
      local_d0[iVar17 + 3] = (byte)((uint)iVar7 >> 0x18);
      iVar18 = iVar18 + -1;
      iVar17 = iVar17 + 4;
    } while (iVar18 != 0);
    iVar17 = 0;
    iVar18 = 8;
    do {
      iVar7 = *(int *)((int)local_110 + iVar17) + *(int *)((int)local_90 + iVar17);
      local_c0[iVar17] = (char)iVar7;
      local_c0[iVar17 + 1] = (char)((uint)iVar7 >> 8);
      local_c0[iVar17 + 2] = (char)((uint)iVar7 >> 0x10);
      local_c0[iVar17 + 3] = (char)((uint)iVar7 >> 0x18);
      iVar17 = iVar17 + 4;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    iVar17 = local_f0 + param_3;
    local_a0 = (char)iVar17;
    local_9f = (char)((uint)iVar17 >> 8);
    iVar18 = 0;
    local_9e = (char)((uint)iVar17 >> 0x10);
    iVar7 = 3;
    local_9d = (char)((uint)iVar17 >> 0x18);
    do {
      iVar17 = *(int *)((int)local_ec + iVar18) + *(int *)((int)local_ec + iVar18 + 0xc);
      local_9c[iVar18] = (char)iVar17;
      local_9c[iVar18 + 1] = (char)((uint)iVar17 >> 8);
      local_9c[iVar18 + 2] = (char)((uint)iVar17 >> 0x10);
      local_9c[iVar18 + 3] = (char)((uint)iVar17 >> 0x18);
      iVar18 = iVar18 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar11 = param_5;
    if (0x3f < param_5) {
      uVar11 = 0x40;
    }
    if (uVar11 != 0) {
      pbVar9 = param_4;
      uVar13 = uVar11;
      do {
        *pbVar9 = pbVar9[(int)(local_d0 + -(int)param_4)] ^ *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    param_4 = param_4 + uVar11;
    param_3 = param_3 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018bc0 @ 98018bc0 ==== */

void FUN_98018bc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98018cb8 @ 98018cb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018cb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018e60 @ 98018e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98018e60(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int *param_5)

{
  undefined1 extraout_r4;
  int iVar1;
  int iVar2;
  
  FUN_9802ea34();
  iVar2 = *param_5;
  FUN_98018bc0();
  iVar1 = iVar2 + 0x10;
  *(undefined1 *)(param_4 + -5) = extraout_r4;
  *(char *)(param_4 + -3) = (char)param_3;
  *(char *)(param_4 + -4) = (char)((ushort)param_3 >> 8);
  *(char *)(param_4 + -2) = (char)((uint)iVar1 >> 8);
  *(char *)(param_4 + -1) = (char)iVar1;
  *param_5 = iVar2 + 0x15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98018f48 @ 98018f48 ==== */

void FUN_98018f48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98019028 @ 98019028 ==== */

void FUN_98019028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98019548 @ 98019548 ==== */

void FUN_98019548(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98019668 @ 98019668 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019668(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 uint *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 auStack_190 [100];
  
  uVar4 = FUN_9802ea1c();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  if (*(int *)(iVar1 + 0x230) == 0) {
    if ((1 < *param_5) && ((int)uVar4 == 0x17)) {
      uVar2 = *(int *)(iVar1 + 0x21c) + iVar3 + 1U & ~(iVar3 - 1U);
      param_4[-4 - uVar2] = *param_4;
      auStack_190[0] = 1;
      FUN_98019668(iVar1,0x17,param_3,param_4 + (-4 - uVar2),auStack_190);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980198b8 @ 980198b8 ==== */

void FUN_980198b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98019a10 @ 98019a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019a10(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4)

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
  uint *local_130;
  uint local_c0 [8];
  uint local_a0 [40];
  
  uVar19 = FUN_9802ea04();
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
    local_130 = param_3;
    do {
      if (param_4 < 0x10) {
        FUN_9802ebd0();
        FUN_9802f200((uint *)((int)local_a0 + param_4),0,0x10 - param_4);
        puVar16 = local_a0;
        param_4 = 0;
      }
      else {
        param_4 = param_4 - 0x10;
        puVar16 = local_130;
        local_130 = local_130 + 4;
      }
      uVar9 = uVar4 ^ uVar2;
      uVar6 = puVar16[3];
      uVar14 = *puVar16 ^ uVar14;
      uVar12 = puVar16[1] ^ uVar12;
      uVar11 = puVar16[2] ^ uVar11;
      uVar15 = uVar11 ^ uVar14;
      uVar13 = uVar6 ^ uVar10 ^ uVar12;
      iVar18 = 0;
      do {
        FUN_980198b8();
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


/* ==== FUN_98019f68 @ 98019f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019f68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98019fa8 @ 98019fa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019fa8(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4,uint param_5)

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
  
  uVar10 = FUN_9802ea20();
  iVar9 = (int)((ulonglong)uVar10 >> 0x20);
  puVar1 = (undefined1 *)uVar10;
  FUN_9801e0e8((int)auStack_240,*(int *)(iVar9 + 0xf4),iVar9 + 4);
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
      FUN_9801dba8();
      FUN_9801e148();
      FUN_9801dba8();
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


/* ==== FUN_9801a280 @ 9801a280 ==== */

void FUN_9801a280(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9801a358 @ 9801a358 ==== */

void FUN_9801a358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9801a4b8 @ 9801a4b8 ==== */

void FUN_9801a4b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9801a5d8 @ 9801a5d8 ==== */

void FUN_9801a5d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9801a770 @ 9801a770 ==== */

void FUN_9801a770(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_9801b398 @ 9801b398 ==== */

void FUN_9801b398(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_9801b9f0 @ 9801b9f0 ==== */

void FUN_9801b9f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9801bb08 @ 9801bb08 ==== */

void FUN_9801bb08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801bd30 @ 9801bd30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801bd30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801bd70 @ 9801bd70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801bd70(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  uint local_29c;
  uint local_294;
  uint local_28c;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  undefined1 auStack_260 [608];
  
  uVar24 = FUN_9802ea10();
  iVar17 = (int)((ulonglong)uVar24 >> 0x20);
  puVar18 = (undefined1 *)uVar24;
  FUN_9801e0e8((int)auStack_260,*(int *)(iVar17 + 0xf4),iVar17 + 4);
  uVar22 = CONCAT31(CONCAT21(CONCAT11(puVar18[3],puVar18[2]),puVar18[1]),*puVar18);
  uVar21 = CONCAT31(CONCAT21(CONCAT11(puVar18[7],puVar18[6]),puVar18[5]),puVar18[4]);
  uVar20 = CONCAT31(CONCAT21(CONCAT11(puVar18[0xb],puVar18[10]),puVar18[9]),puVar18[8]);
  uVar19 = CONCAT31(CONCAT21(CONCAT11(puVar18[0xf],puVar18[0xe]),puVar18[0xd]),puVar18[0xc]);
  if (param_4 != 0) {
    puVar23 = (undefined1 *)(param_3 + -1);
    do {
      uVar1 = puVar23[4];
      uVar2 = puVar23[3];
      uVar3 = puVar23[8];
      uVar4 = puVar23[0xc];
      uVar5 = puVar23[0x10];
      uVar6 = puVar23[7];
      uVar7 = puVar23[0xb];
      uVar8 = puVar23[0xf];
      uVar9 = puVar23[2];
      uVar10 = puVar23[6];
      uVar11 = puVar23[10];
      uVar12 = puVar23[0xe];
      uVar13 = puVar23[1];
      uVar14 = puVar23[5];
      uVar15 = puVar23[9];
      uVar16 = puVar23[0xd];
      if (param_4 < 0x20) {
        local_29c = 0;
        local_294 = 0;
        local_28c = 0;
        local_284 = 0;
      }
      else {
        local_29c = CONCAT31(CONCAT21(CONCAT11(puVar23[0x14],puVar23[0x13]),puVar23[0x12]),
                             puVar23[0x11]);
        local_294 = CONCAT31(CONCAT21(CONCAT11(puVar23[0x18],puVar23[0x17]),puVar23[0x16]),
                             puVar23[0x15]);
        local_28c = CONCAT31(CONCAT21(CONCAT11(puVar23[0x1c],puVar23[0x1b]),puVar23[0x1a]),
                             puVar23[0x19]);
        local_284 = CONCAT31(CONCAT21(CONCAT11(puVar23[0x20],puVar23[0x1f]),puVar23[0x1e]),
                             puVar23[0x1d]);
      }
      FUN_9802ebd0();
      FUN_9801dba8();
      FUN_9801eed8();
      FUN_9801dba8();
      uVar22 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar9),uVar13) ^ uVar22;
      uVar21 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar6),uVar10),uVar14) ^ uVar21;
      puVar23[1] = (char)uVar22;
      puVar23[2] = (char)(uVar22 >> 8);
      puVar23[3] = (char)(uVar22 >> 0x10);
      puVar23[4] = (char)(uVar22 >> 0x18);
      puVar23[5] = (char)uVar21;
      uVar20 = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar7),uVar11),uVar15) ^ uVar20;
      puVar23[7] = (char)(uVar21 >> 0x10);
      puVar23[8] = (char)(uVar21 >> 0x18);
      uVar19 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar8),uVar12),uVar16) ^ uVar19;
      puVar23[6] = (char)(uVar21 >> 8);
      puVar23[9] = (char)uVar20;
      puVar23[10] = (char)(uVar20 >> 8);
      puVar23[0xb] = (char)(uVar20 >> 0x10);
      puVar23[0xc] = (char)(uVar20 >> 0x18);
      puVar23[0xd] = (char)uVar19;
      puVar23[0xe] = (char)(uVar19 >> 8);
      puVar23[0xf] = (char)(uVar19 >> 0x10);
      puVar23[0x10] = (char)(uVar19 >> 0x18);
      uVar19 = local_268;
      uVar20 = local_270;
      uVar21 = local_278;
      uVar22 = local_280;
      if (param_4 < 0x20) break;
      param_4 = param_4 - 0x20;
      local_29c = local_280 ^ local_29c;
      local_28c = local_270 ^ local_28c;
      puVar23[0x11] = (char)local_29c;
      puVar23[0x12] = (char)(local_29c >> 8);
      local_294 = local_278 ^ local_294;
      puVar23[0x13] = (char)(local_29c >> 0x10);
      puVar23[0x14] = (char)(local_29c >> 0x18);
      puVar23[0x15] = (char)local_294;
      puVar23[0x17] = (char)(local_294 >> 0x10);
      puVar23[0x16] = (char)(local_294 >> 8);
      puVar23[0x18] = (char)(local_294 >> 0x18);
      puVar23[0x1a] = (char)(local_28c >> 8);
      local_284 = local_268 ^ local_284;
      puVar23[0x1b] = (char)(local_28c >> 0x10);
      puVar23[0x1c] = (char)(local_28c >> 0x18);
      puVar23[0x19] = (char)local_28c;
      puVar23[0x1d] = (char)local_284;
      puVar23[0x1e] = (char)(local_284 >> 8);
      puVar23[0x1f] = (char)(local_284 >> 0x10);
      puVar23 = puVar23 + 0x20;
      *puVar23 = (char)(local_284 >> 0x18);
      uVar19 = local_264;
      uVar20 = local_26c;
      uVar21 = local_274;
      uVar22 = local_27c;
    } while (param_4 != 0);
  }
  *puVar18 = (char)uVar22;
  puVar18[1] = (char)(uVar22 >> 8);
  puVar18[2] = (char)(uVar22 >> 0x10);
  puVar18[3] = (char)(uVar22 >> 0x18);
  puVar18[5] = (char)(uVar21 >> 8);
  puVar18[6] = (char)(uVar21 >> 0x10);
  puVar18[7] = (char)(uVar21 >> 0x18);
  puVar18[4] = (char)uVar21;
  puVar18[9] = (char)(uVar20 >> 8);
  puVar18[10] = (char)(uVar20 >> 0x10);
  puVar18[0xb] = (char)(uVar20 >> 0x18);
  puVar18[8] = (char)uVar20;
  puVar18[0xc] = (char)uVar19;
  puVar18[0xd] = (char)(uVar19 >> 8);
  puVar18[0xe] = (char)(uVar19 >> 0x10);
  puVar18[0xf] = (char)(uVar19 >> 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801c1e8 @ 9801c1e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801c1e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  
  uVar8 = FUN_9802ea10();
  iVar6 = (int)((ulonglong)uVar8 >> 0x20);
  puVar1 = (undefined1 *)uVar8;
  FUN_9801e0e8((int)auStack_260,*(int *)(iVar6 + 0xf4),iVar6 + 4);
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
      FUN_9801dba8();
      FUN_9801e148();
      FUN_9801dba8();
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


/* ==== FUN_9801c4b0 @ 9801c4b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801c4b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
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
  
  uVar7 = FUN_9802ea24();
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
  FUN_98017bd8();
  FUN_98017c98();
  FUN_98017d20(aiStack_240);
  for (iVar5 = param_7; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_98017d20(aiStack_240);
  }
  do {
    pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
    FUN_98017d30();
    FUN_98017c98();
    FUN_98017d20(aiStack_240);
    FUN_98017d20(aiStack_240);
    for (iVar5 = param_7; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_98017d20(aiStack_240);
    }
    FUN_98017d30();
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
    FUN_98017c98();
    FUN_98017d20(aiStack_240);
  } while( true );
}


/* ==== FUN_9801c8c8 @ 9801c8c8 ==== */

undefined4 FUN_9801c8c8(void)

{
  return 0x91a217f8;
}


/* ==== FUN_9801c8d8 @ 9801c8d8 ==== */

undefined4 FUN_9801c8d8(void)

{
  return 0x91a21870;
}


/* ==== FUN_9801c8e8 @ 9801c8e8 ==== */

void FUN_9801c8e8(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar4;
  
  uVar2 = 0x188;
  iVar1 = 0x189;
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
                    /* WARNING: Could not recover jumptable at 0x9802f28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar3 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x9802f294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar3 + 2) = 0;
  return;
}


/* ==== FUN_9801c8f8 @ 9801c8f8 ==== */

void FUN_9801c8f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9801c9a8 @ 9801c9a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801c9a8(void)

{
  FUN_9802ea24();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801cae0 @ 9801cae0 ==== */

void FUN_9801cae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801cbb0 @ 9801cbb0 ==== */

void FUN_9801cbb0(uint *param_1,uint *param_2)

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


/* ==== FUN_9801cc58 @ 9801cc58 ==== */

void FUN_9801cc58(uint *param_1,uint *param_2)

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


/* ==== FUN_9801cd00 @ 9801cd00 ==== */

void FUN_9801cd00(int param_1,uint *param_2)

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
  FUN_9801cbb0(local_c,&local_10);
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


/* ==== FUN_9801ce30 @ 9801ce30 ==== */

void FUN_9801ce30(int param_1)

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


/* ==== FUN_9801ce68 @ 9801ce68 ==== */

void FUN_9801ce68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801cf18 @ 9801cf18 ==== */

void FUN_9801cf18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801cfb0 @ 9801cfb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801cfb0(void)

{
  FUN_9802ea10();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d4b0 @ 9801d4b0 ==== */

void FUN_9801d4b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9801d5d0 @ 9801d5d0 ==== */

void FUN_9801d5d0(int *param_1,int param_2,uint *param_3)

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


/* ==== FUN_9801d680 @ 9801d680 ==== */

void FUN_9801d680(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_9801d980 @ 9801d980 ==== */

void FUN_9801d980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_9801dba8 @ 9801dba8 ==== */

void FUN_9801dba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9801def8 @ 9801def8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801def8(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar15 = FUN_9802ea24();
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
    pbVar11 = (byte *)0x91a04090;
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
        FUN_9801dba8();
        FUN_9801d980();
        FUN_9801dba8();
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
        FUN_9801dba8();
        FUN_9801d980();
        FUN_9801dba8();
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
      FUN_9801dba8();
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


/* ==== FUN_9801e0e8 @ 9801e0e8 ==== */

void FUN_9801e0e8(int param_1,int param_2,int param_3)

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


/* ==== FUN_9801e148 @ 9801e148 ==== */

void FUN_9801e148(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_9801e4e0 @ 9801e4e0 ==== */

void FUN_9801e4e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ==== FUN_9801e4e8 @ 9801e4e8 ==== */

void FUN_9801e4e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9801e700 @ 9801e700 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801e700(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9802ea34();
  puVar1 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  iVar4 = puVar1[0x11];
  if (iVar4 != 0) {
    uVar3 = 0x10 - iVar4;
    if (param_3 < uVar3) {
      FUN_9802ebd0();
      puVar1[0x11] = iVar4 + param_3;
      halt_baddata();
    }
    FUN_9802ebd0();
    iVar2 = uVar3 + iVar2;
    param_3 = param_3 - uVar3;
    (**(code **)(*(int *)*puVar1 + 0x1c))((int *)*puVar1,puVar1 + 5,puVar1 + 0xd,0x10);
  }
  (**(code **)(*(int *)*puVar1 + 0x1c))((int *)*puVar1,puVar1 + 5,iVar2,param_3 - (param_3 & 0xf));
  FUN_9802ebd0();
  puVar1[0x11] = param_3 & 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801e7c0 @ 9801e7c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801e7c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801e830 @ 9801e830 ==== */

void FUN_9801e830(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9801ea38 @ 9801ea38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ea38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801eaf8 @ 9801eaf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801eaf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801eb70 @ 9801eb70 ==== */

void FUN_9801eb70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801eca0 @ 9801eca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801eca0(void)

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
  
  puVar9 = (uint *)FUN_9802ea10();
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


/* ==== FUN_9801eed8 @ 9801eed8 ==== */

void FUN_9801eed8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801f068 @ 9801f068 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801f068(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5
                 ,uint param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint uStack_310;
  uint auStack_30c [19];
  uint uStack_2c0;
  undefined4 uStack_2bc;
  int aiStack_270 [19];
  char acStack_221 [81];
  undefined1 auStack_1d0 [80];
  undefined1 auStack_180 [80];
  undefined1 auStack_130 [80];
  undefined1 uStack_e0;
  undefined1 auStack_df [223];
  
  uVar7 = FUN_9802ea24();
  puVar1 = (uint *)((ulonglong)uVar7 >> 0x20);
  uVar4 = *param_4;
  if ((*puVar1 >> (uVar4 & 0x3f) & 1) != 0) {
    if (uVar4 == 0x17) {
      puVar5 = (undefined4 *)0x91a04944;
    }
    else if (uVar4 == 0x18) {
      puVar5 = (undefined4 *)0x91a049ec;
    }
    else {
      if (uVar4 != 0x19) {
        halt_baddata();
      }
      puVar5 = (undefined4 *)0x91a04ad0;
    }
    if (((param_6 & 1) == 0) && (param_6 = param_6 >> 1, param_4[2] == puVar5[4])) {
      iVar6 = puVar5[2];
      FUN_980229c8(&uStack_2c0,puVar5[1],iVar6);
      uVar2 = FUN_98022978(uStack_2bc);
      iVar3 = FUN_98022808(auStack_180,param_5,param_6,(int *)&uStack_2c0);
      if ((iVar3 != 0) &&
         ((iVar3 = FUN_98022808(aiStack_270,param_6 + param_5,param_6,(int *)&uStack_2c0),
          iVar3 != 0 && (uVar4 = FUN_980227c8(aiStack_270), uVar4 == 0)))) {
        FUN_98022708(aiStack_270,&uStack_2c0,uVar2);
        FUN_9802ebd0();
        acStack_221[iVar6] = acStack_221[iVar6] + -2;
        FUN_98022600(aiStack_270,acStack_221 + 1,iVar6,(int *)&uStack_2c0,uVar2,&uStack_310,
                     (int)auStack_1d0);
        FUN_98022578(&uStack_310,(int)uVar7,param_3,uStack_2c0);
        uVar4 = FUN_98022510(&uStack_310,(int)&uStack_2c0,0);
        FUN_98022510(&uStack_310,(int)&uStack_2c0,uVar4 ^ 1);
        FUN_980222c0();
        FUN_980221b8();
        FUN_980222c0();
        FUN_980221b8();
        uVar4 = puVar5[4];
        FUN_9802ebd0();
        (*(code *)puVar1[6])(&uStack_e0,0,uVar4,acStack_221 + 1,iVar6,auStack_130,iVar6,*puVar5);
        uStack_310 = uStack_2c0;
        FUN_9802f200(auStack_30c,0,uStack_2c0 + 0x1f >> 3 & 0x1ffffffc);
        FUN_980229c8(&uStack_310,auStack_df,uVar4 >> 1);
        uStack_310 = uStack_2c0;
        uVar4 = FUN_98022510(&uStack_310,(int)&uStack_2c0,0);
        FUN_98022510(&uStack_310,(int)&uStack_2c0,uVar4 ^ 1);
        FUN_98022510(&uStack_310,(int)auStack_180,1);
        FUN_980227c8((int *)&uStack_310);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801f300 @ 9801f300 ==== */

void FUN_9801f300(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9801f480 @ 9801f480 ==== */

void FUN_9801f480(int param_1,int param_2,int *param_3)

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


/* ==== FUN_9801f520 @ 9801f520 ==== */

void FUN_9801f520(uint *param_1,int *param_2,int *param_3)

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


/* ==== FUN_9801f690 @ 9801f690 ==== */

void FUN_9801f690(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9801f840 @ 9801f840 ==== */

void FUN_9801f840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9801f9f0 @ 9801f9f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801f9f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801fa78 @ 9801fa78 ==== */

void FUN_9801fa78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801fbb8 @ 9801fbb8 ==== */

void FUN_9801fbb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9801fd08 @ 9801fd08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801fd08(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint auStack_180 [12];
  int aiStack_150 [12];
  int aiStack_120 [12];
  uint auStack_f0 [12];
  uint auStack_c0 [12];
  int aiStack_90 [36];
  
  puVar1 = (uint *)FUN_9802ea34();
  FUN_9801f840();
  FUN_9801f690();
  FUN_9801f690();
  FUN_9801f690();
  FUN_9801f840();
  FUN_9801f690();
  FUN_9801f690();
  FUN_9801f690();
  FUN_9801f520(auStack_f0,(int *)auStack_f0,aiStack_150);
  FUN_9801f520(auStack_180,(int *)auStack_180,aiStack_120);
  FUN_9801f9f0();
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_9801f840();
  FUN_9801f690();
  FUN_9801f690();
  FUN_9801f840();
  puVar2 = (uint *)FUN_9801f520(puVar1,(int *)puVar1,aiStack_90);
  puVar2 = (uint *)FUN_9801f520(puVar2,(int *)puVar1,(int *)auStack_c0);
  FUN_9801f520(puVar2,(int *)puVar1,(int *)auStack_c0);
  FUN_9801f520(auStack_c0,(int *)auStack_c0,(int *)puVar1);
  FUN_9801f690();
  FUN_9801f690();
  FUN_9801f520(puVar1 + 9,(int *)(puVar1 + 9),aiStack_150);
  FUN_9801f690();
  FUN_9801f690();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801feb8 @ 9801feb8 ==== */

void FUN_9801feb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98020038 @ 98020038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020250 @ 98020250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020250(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020320 @ 98020320 ==== */

void FUN_98020320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98020480 @ 98020480 ==== */

void FUN_98020480(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98020668 @ 98020668 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020668(void)

{
  uint extraout_r4;
  
  FUN_9802ea34();
  FUN_98020038();
  FUN_98020320();
  if (0x40 < extraout_r4) {
    FUN_9801fa78();
    FUN_98020250();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980206d0 @ 980206d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980206d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020718 @ 98020718 ==== */

void FUN_98020718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98020820 @ 98020820 ==== */

void FUN_98020820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98020cc0 @ 98020cc0 ==== */

void FUN_98020cc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98020ee8 @ 98020ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020fa8 @ 98020fa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020fa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021068 @ 98021068 ==== */

void FUN_98021068(int param_1,int param_2,int *param_3)

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


/* ==== FUN_980210e0 @ 980210e0 ==== */

void FUN_980210e0(int param_1,int param_2,int *param_3)

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


/* ==== FUN_980211a0 @ 980211a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980211a0(void)

{
  byte bVar1;
  int iVar2;
  uint in_r6;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uStack_1b4;
  uint local_1b0 [8];
  uint local_190;
  
  uVar9 = FUN_9802ea34();
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  if (((int)uVar9 == 0x20) && (in_r6 < 0x21)) {
    puVar4 = &uStack_1b4;
    iVar8 = 0x20;
    uVar5 = 0;
    pbVar3 = (byte *)(iVar2 + -1);
    *(byte *)(iVar2 + 0x1f) = *(byte *)(iVar2 + 0x1f) & 0x7f;
    uVar7 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
      if ((int)uVar7 < 0x16) {
        uVar5 = (uint)bVar1 << (uVar7 & 0x3f) | uVar5;
        uVar7 = uVar7 + 8;
      }
      else {
        uVar6 = (uint)bVar1 << (uVar7 & 0x3f) | uVar5;
        uVar5 = (uint)(bVar1 >> (0x1e - uVar7 & 0x3f));
        puVar4 = puVar4 + 1;
        *puVar4 = uVar6 & 0x3fffffff;
        uVar7 = uVar7 - 0x16;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_190 = uVar5;
    FUN_9802ebd0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021730 @ 98021730 ==== */

void FUN_98021730(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98021780 @ 98021780 ==== */

void FUN_98021780(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98021998 @ 98021998 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021998(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *extraout_r4;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint local_500 [19];
  uint local_4b4;
  uint local_468;
  byte abStack_410 [240];
  undefined1 auStack_320 [240];
  undefined1 auStack_230 [240];
  undefined1 auStack_140 [320];
  
  FUN_9802ea24();
  FUN_9802ebd0();
  FUN_98021780();
  FUN_9802ebd0();
  FUN_98021780();
  FUN_9802f200(local_500,0,0xe4);
  uVar5 = 1;
  local_500[0] = *(uint *)*param_4;
  pbVar3 = extraout_r4;
  local_4b4 = local_500[0];
  local_468 = local_500[0];
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    uVar4 = 6;
    do {
      FUN_98021780();
      FUN_98021780();
      FUN_9802ebd0();
      FUN_9802ebd0();
      uVar2 = *pbVar3 >> (uVar4 & 0x3f) & 3;
      FUN_98022178((byte)~(byte)(-(uVar2 ^ 2) >> 0x18) >> 7,abStack_410,(int)auStack_320,0xe4);
      FUN_98022178((byte)~(byte)(-(uVar2 ^ 3) >> 0x18) >> 7,abStack_410,(int)auStack_230,0xe4);
      FUN_98021780();
      bVar1 = (byte)(-uVar2 >> 0x1f);
      FUN_98022178(bVar1 & (byte)uVar5,(byte *)local_500,(int)abStack_410,0xe4);
      FUN_98022178(bVar1 & ~(byte)uVar5,(byte *)local_500,(int)auStack_140,0xe4);
      uVar4 = uVar4 - 2;
      uVar5 = uVar5 & ~(-uVar2 >> 0x1f);
    } while (-1 < (int)uVar4);
    pbVar3 = pbVar3 + 1;
  }
  FUN_9802ebd0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021b48 @ 98021b48 ==== */

void FUN_98021b48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98021c78 @ 98021c78 ==== */

void FUN_98021c78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98021d28 @ 98021d28 ==== */

undefined4 FUN_98021d28(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (param_1 == 0x17) {
    uVar1 = 0x91a04944;
  }
  else if (param_1 == 0x18) {
    uVar1 = 0x91a049ec;
  }
  else {
    uVar1 = -(uint)(param_1 == 0x19) & 0x91a04ad0;
  }
  *param_2 = *(undefined4 *)(uVar1 + 0x10);
  return *(undefined4 *)(uVar1 + 0xc);
}


/* ==== FUN_98021dc8 @ 98021dc8 ==== */

undefined4 FUN_98021dc8(int param_1,undefined4 *param_2)

{
  uint *extraout_r4;
  
  FUN_98021d28(param_1,param_2);
  *extraout_r4 = *extraout_r4 >> 1;
  return 1;
}


/* ==== FUN_98021e00 @ 98021e00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 auStack_120 [288];
  
  FUN_9802ea34();
  FUN_98021b48();
  FUN_98021998(auStack_120,param_3,param_4,(undefined4 *)((param_5 + -0x17) * 0x10 + -0x6e5fb808));
  FUN_98021c78();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021e78 @ 98021e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021e78(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 local_40 [16];
  
  uVar1 = FUN_9802ea34();
  FUN_98021d28(param_4,local_40);
  FUN_9802ebd0();
  FUN_98021e00((int)((ulonglong)uVar1 >> 0x20),local_40[0],(int)uVar1,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021ed8 @ 98021ed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021ed8(void)

{
  byte bVar2;
  uint uVar1;
  int extraout_r4;
  undefined4 in_r6;
  int in_r7;
  undefined4 in_r8;
  int in_r9;
  int in_r10;
  undefined4 *puVar3;
  undefined4 auStack_250 [4];
  undefined1 auStack_240 [240];
  byte abStack_150 [152];
  int aiStack_b8 [46];
  
  FUN_9802ea1c();
  puVar3 = (undefined4 *)((in_r10 + -0x17) * 0x10 + -0x6e5fb808);
  FUN_98021b48();
  if (extraout_r4 == 0) {
    FUN_98021d28(in_r10,auStack_250);
  }
  FUN_98021b48();
  FUN_98021998(abStack_150,in_r6,in_r7,puVar3);
  FUN_98021998(auStack_240,in_r8,in_r9,puVar3);
  bVar2 = FUN_98021780();
  FUN_98021780();
  uVar1 = FUN_980227c8(aiStack_b8);
  FUN_98022178((byte)uVar1 & ~bVar2,abStack_150,(int)auStack_240,0xe4);
  FUN_98021c78();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022070 @ 98022070 ==== */

void FUN_98022070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98022178 @ 98022178 ==== */

void FUN_98022178(char param_1,byte *param_2,int param_3,int param_4)

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


/* ==== FUN_980221b8 @ 980221b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980221b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980222c0 @ 980222c0 ==== */

void FUN_980222c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98022510 @ 98022510 ==== */

void FUN_98022510(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = 0;
  uVar2 = *param_1 + 0x3f >> 5;
  if (uVar2 < 2) {
    return;
  }
  iVar3 = uVar2 - 1;
  iVar5 = param_2 - (int)param_1;
  do {
    param_1 = param_1 + 1;
    uVar4 = *param_1;
    uVar2 = (uVar4 - *(int *)(iVar5 + (int)param_1)) - uVar1;
    uVar1 = uVar2 >> 0x1f;
    *param_1 = (uVar2 & 0x7fffffff ^ uVar4) & -param_3 ^ uVar4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* ==== FUN_98022578 @ 98022578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022578(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9802ea34();
  puVar1 = (uint *)((ulonglong)uVar4 >> 0x20);
  uVar3 = param_3 * 8;
  uVar2 = param_4 - (param_4 >> 5);
  if (uVar2 < uVar3) {
    param_3 = uVar2 + 7 >> 3;
    uVar3 = uVar3 - uVar2 & 7;
  }
  else {
    uVar3 = 0;
  }
  *puVar1 = param_4;
  FUN_9802f200(puVar1 + 1,0,param_4 + 0x1f >> 3 & 0x1ffffffc);
  FUN_980229c8(puVar1,(int)uVar4,param_3);
  FUN_98022f38(puVar1,uVar3);
  *puVar1 = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022600 @ 98022600 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022600(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9802ea1c();
  pbVar2 = (byte *)((ulonglong)uVar6 >> 0x20);
  iVar3 = *param_4;
  FUN_9802ebd0();
  FUN_98022f90();
  iVar4 = *param_4;
  *(int *)pbVar2 = iVar4;
  FUN_9802f200((uint *)(pbVar2 + 4),0,iVar4 + 0x1fU >> 3 & 0x1ffffffc);
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 1;
  uVar5 = 0;
  if (param_3 << 3 != 0) {
    do {
      bVar1 = *(byte *)(((int)uVar6 - (uVar5 >> 3)) + param_3 + -1);
      FUN_980222c0();
      FUN_98022178(bVar1 >> (uVar5 & 7) & 1,pbVar2,param_7,iVar3 + 0x3fU >> 3 & 0x1ffffffc);
      FUN_980222c0();
      FUN_9802ebd0();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_3 << 3));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022708 @ 98022708 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022708(void)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9802ea34();
  puVar1 = (uint *)((ulonglong)uVar4 >> 0x20);
  piVar3 = (int *)uVar4;
  if (*piVar3 + 0x1fU >> 5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = FUN_98022510(puVar1,(int)piVar3,0);
  FUN_98022510(puVar1,(int)piVar3,uVar2 ^ 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980227c8 @ 980227c8 ==== */

uint FUN_980227c8(int *param_1)

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


/* ==== FUN_98022808 @ 98022808 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022808(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  
  uVar15 = FUN_9802ea1c();
  piVar2 = (int *)((ulonglong)uVar15 >> 0x20);
  uVar1 = *param_4 + 0x1fU >> 5;
  uVar8 = uVar1 << 2;
  if (uVar8 < param_3) {
    uVar8 = param_3;
  }
  uVar3 = 0;
  iVar11 = 0;
  do {
    uVar13 = 1;
    uVar4 = 0;
    uVar12 = 0;
    if (uVar8 + 4 != 0) {
      pbVar9 = (byte *)((int)uVar15 + param_3);
      puVar5 = (uint *)(param_4 + 1);
      uVar10 = 0;
      iVar14 = uVar8 + 4;
      do {
        pbVar9 = pbVar9 + -1;
        if (uVar12 < param_3) {
          uVar7 = (uint)*pbVar9;
        }
        else {
          uVar7 = 0;
        }
        uVar6 = uVar10 + 8;
        uVar4 = uVar7 << (uVar10 & 0x3f) | uVar4;
        if (0x1e < (int)uVar6) {
          uVar6 = uVar10 - 0x17;
          uVar10 = uVar4 & 0x7fffffff;
          uVar4 = uVar7 >> (8 - uVar6 & 0x3f);
          if (uVar1 < uVar13) {
            if (iVar11 == 0) {
              uVar3 = (int)~-uVar10 >> 0x1f & (uVar3 ^ 1) ^ 1;
            }
          }
          else if (iVar11 == 0) {
            uVar7 = *puVar5;
            uVar10 = (int)((uVar10 - uVar7 ^ uVar7) & uVar7 ^ uVar10 - uVar7) >> 0x1f |
                     (uVar7 - uVar10 & uVar7 ^ uVar7 - uVar10) >> 0x1f;
            uVar3 = (int)~(-uVar10 | uVar10) >> 0x1f & (uVar10 ^ uVar3) ^ uVar10;
          }
          else {
            *(uint *)(((int)piVar2 - (int)param_4) + (int)puVar5) = uVar10 & uVar3;
          }
          uVar13 = uVar13 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar12 = uVar12 + 1;
        iVar14 = iVar14 + -1;
        uVar10 = uVar6;
      } while (iVar14 != 0);
    }
    iVar11 = iVar11 + 1;
    uVar3 = (uVar3 >> 1) << 1 | uVar3 >> 1;
  } while (iVar11 < 2);
  *piVar2 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022978 @ 98022978 ==== */

uint FUN_98022978(uint param_1)

{
  int iVar1;
  
  iVar1 = (2 - (2 - param_1) * param_1) * (2 - param_1);
  iVar1 = (2 - iVar1 * param_1) * iVar1;
  iVar1 = (2 - iVar1 * param_1) * iVar1;
  return -((2 - iVar1 * param_1) * iVar1) & -(param_1 & 1) & 0x7fffffff;
}


/* ==== FUN_980229c8 @ 980229c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980229c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022a70 @ 98022a70 ==== */

void FUN_98022a70(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  uVar4 = *param_1 + 0x3f >> 5;
  if (uVar4 < 2) {
    return;
  }
  iVar3 = uVar4 - 1;
  iVar2 = param_2 - (int)param_1;
  do {
    param_1 = param_1 + 1;
    uVar5 = *param_1;
    uVar4 = *(int *)(iVar2 + (int)param_1) + uVar5 + uVar1;
    uVar1 = uVar4 >> 0x1f;
    *param_1 = (uVar4 & 0x7fffffff ^ uVar5) & -param_3 ^ uVar5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* ==== FUN_98022ad8 @ 98022ad8 ==== */

void FUN_98022ad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98022c88 @ 98022c88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022c88(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4,undefined4 param_5
                 ,int param_6,uint param_7)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  uVar15 = FUN_9802ea04();
  puVar2 = (uint *)((ulonglong)uVar15 >> 0x20);
  uVar1 = *param_4 + 0x3f >> 5;
  uVar9 = (uVar1 & 1) + uVar1;
  puVar11 = (uint *)(uVar9 * 4 + param_6);
  if (uVar9 * 2 <= param_7) {
    uVar7 = 5;
    do {
      if (((1 << (uVar7 & 0x3f)) + 1) * uVar9 <= param_7) break;
      uVar7 = uVar7 - 1;
    } while (1 < (int)uVar7);
    FUN_98022f90();
    if (uVar7 == 1) {
      FUN_9802ebd0();
    }
    else {
      FUN_9802ebd0();
      uVar5 = 1 << (uVar7 & 0x3f);
      uVar12 = 2;
      if (2 < uVar5) {
        do {
          FUN_980222c0();
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
      }
    }
    uVar5 = *param_4;
    *puVar2 = uVar5;
    FUN_9802f200(puVar2 + 1,0,uVar5 + 0x1f >> 3 & 0x1ffffffc);
    pbVar8 = (byte *)((*param_4 + 0x1f >> 3 & 0x1ffffffc) + (int)puVar2);
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 1;
    FUN_98023120(puVar2,0,param_4);
    uVar5 = 0;
    uVar12 = 0;
    pbVar8 = (byte *)((int)uVar15 + -1);
    while ((0 < (int)uVar12 || (param_3 != 0))) {
      uVar14 = uVar7;
      if (((int)uVar12 < (int)uVar7) && (uVar14 = uVar12, param_3 != 0)) {
        pbVar8 = pbVar8 + 1;
        param_3 = param_3 + -1;
        uVar12 = uVar12 + 8;
        uVar5 = uVar5 << 8 | (uint)*pbVar8;
        uVar14 = uVar7;
      }
      uVar12 = uVar12 - uVar14;
      uVar13 = 1 << (uVar14 & 0x3f);
      uVar10 = uVar5 >> (uVar12 & 0x3f) & uVar13 - 1;
      if (0 < (int)uVar14) {
        do {
          FUN_980222c0();
          FUN_9802ebd0();
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (1 < (int)uVar7) {
        uVar14 = *param_4;
        *puVar11 = uVar14;
        FUN_9802f200(puVar11 + 1,0,uVar14 + 0x1f >> 3 & 0x1ffffffc);
        uVar14 = 1;
        puVar4 = puVar11;
        if (1 < uVar13) {
          do {
            puVar4 = puVar4 + uVar9;
            if (1 < uVar9) {
              iVar3 = uVar9 - 1;
              puVar6 = puVar11 + 1;
              do {
                *puVar6 = *(uint *)(((int)puVar4 - (int)puVar11) + (int)puVar6) &
                          (int)~(-(uVar10 ^ uVar14) | uVar10 ^ uVar14) >> 0x1f | *puVar6;
                puVar6 = puVar6 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar13);
        }
      }
      FUN_980222c0();
      FUN_98022178((byte)((byte)(-uVar10 >> 0x18) | (byte)(uVar10 >> 0x18)) >> 7,(byte *)puVar2,
                   param_6,uVar1 << 2);
    }
    FUN_98022708(puVar2,param_4,param_5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022f38 @ 98022f38 ==== */

void FUN_98022f38(uint *param_1,uint param_2)

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


/* ==== FUN_98022f90 @ 98022f90 ==== */

void FUN_98022f90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98022fd8 @ 98022fd8 ==== */

int FUN_98022fd8(int param_1,uint param_2)

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


/* ==== FUN_98023120 @ 98023120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023120(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_70;
  
  uVar4 = FUN_9802ea1c();
  puVar2 = (uint *)((ulonglong)uVar4 >> 0x20);
  uVar3 = *param_3;
  if (uVar3 != 0) {
    if (uVar3 < 0x20) {
      FUN_98023358();
      puVar2[1] = local_70;
    }
    else {
      uVar1 = uVar3 + 0x1f >> 5;
      if ((uVar3 & 0x1f) == 0) {
        FUN_9802f140((int)(puVar2 + 2),(int)(puVar2 + 1),(uVar1 - 1) * 4);
        puVar2[1] = (uint)uVar4;
      }
      else {
        FUN_9802f140((int)(puVar2 + 2),(int)(puVar2 + 1),(uVar1 - 1) * 4);
        puVar2[1] = (uint)uVar4;
      }
      FUN_98023358();
      if (uVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_98022a70(puVar2,(int)param_3,0);
      FUN_98022510(puVar2,(int)param_3,1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023358 @ 98023358 ==== */

void FUN_98023358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98023430 @ 98023430 ==== */

int FUN_98023430(byte *param_1,byte *param_2,int param_3)

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


/* ==== thunk_FUN_98023510 @ 980234d8 ==== */

void thunk_FUN_98023510(int param_1)

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


/* ==== FUN_98023510 @ 98023510 ==== */

void FUN_98023510(int param_1)

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


/* ==== FUN_98023528 @ 98023528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023588 @ 98023588 ==== */

undefined4 FUN_98023588(int param_1,char param_2)

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
    if ((cVar1 != '+') && (cVar1 != '-')) goto LAB_980236a8;
    do {
      *(char **)(param_1 + 0x54) = pcVar2;
      if (pcVar2 < *(char **)(param_1 + 0x50)) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      }
      else {
        cVar1 = '\0';
      }
LAB_980236a8:
    } while (('/' < cVar1) && (cVar1 < ':'));
  }
  return 1;
}


/* ==== FUN_980236c0 @ 980236c0 ==== */

void FUN_980236c0(int param_1,char *param_2,int *param_3,undefined4 *param_4)

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


/* ==== FUN_98023740 @ 98023740 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023740(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023788 @ 98023788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980239c0 @ 980239c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980239c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023a18 @ 98023a18 ==== */

int FUN_98023a18(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && ((0x3fffffff < param_1 || (iVar1 = FUN_9800f4c8(), iVar1 == 0)))) {
    iVar1 = FUN_9800a830();
  }
  return iVar1;
}


/* ==== FUN_98023a80 @ 98023a80 ==== */

bool FUN_98023a80(int param_1,undefined1 *param_2)

{
  char cVar2;
  undefined1 uVar3;
  char *pcVar1;
  
  uVar3 = 0;
  do {
    *param_2 = uVar3;
    do {
      if (*(uint *)(param_1 + 0x50) <= *(int *)(param_1 + 0x54) + 1U) {
LAB_98023aec:
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
      if ((cVar2 == '*') && (**(char **)(param_1 + 0x54) == '/')) goto LAB_98023aec;
    } while (cVar2 != '\n');
    uVar3 = 1;
  } while( true );
}


/* ==== FUN_98023b28 @ 98023b28 ==== */

undefined4 FUN_98023b28(int param_1)

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


/* ==== FUN_98023ba8 @ 98023ba8 ==== */

bool FUN_98023ba8(int param_1)

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


/* ==== FUN_98023c30 @ 98023c30 ==== */

bool FUN_98023c30(int param_1)

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


/* ==== FUN_98023cb8 @ 98023cb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023cb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023d10 @ 98023d10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023d10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023dd8 @ 98023dd8 ==== */

uint FUN_98023dd8(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x98023e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  return uVar1;
}


/* ==== FUN_98023e80 @ 98023e80 ==== */

int FUN_98023e80(undefined4 param_1,char param_2,char param_3,char param_4,char param_5)

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


/* ==== FUN_98023ee8 @ 98023ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023f68 @ 98023f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023f68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023fc8 @ 98023fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023fc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024068 @ 98024068 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024068(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980240f0 @ 980240f0 ==== */

void FUN_980240f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980241e0 @ 980241e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980241e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980242b0 @ 980242b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980242b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024330 @ 98024330 ==== */

void FUN_98024330(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980243c0 @ 980243c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980243c0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9802ea34();
  puVar4 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(uint *)((int)uVar5 + 0x10);
  if (uVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_9800f3a8();
  }
  uVar2 = uVar2 - param_3;
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  iVar3 = puVar4[4];
  if (-iVar3 - 1U <= param_4) {
    iVar3 = -0x6e600000;
    FUN_9800f370();
  }
  if (param_4 != 0) {
    cVar1 = FUN_9800c5f0();
    if (cVar1 != '\0') {
      FUN_9802ebd0();
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


/* ==== FUN_980244b8 @ 980244b8 ==== */

void FUN_980244b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98024578 @ 98024578 ==== */

void FUN_98024578(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98024628 @ 98024628 ==== */

void FUN_98024628(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98024728 @ 98024728 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024780 @ 98024780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980247d0 @ 980247d0 ==== */

void FUN_980247d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98024970 @ 98024970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980249d8 @ 980249d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980249d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024a28 @ 98024a28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024a28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024a78 @ 98024a78 ==== */

void FUN_98024a78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98024c28 @ 98024c28 ==== */

void FUN_98024c28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98024cc0 @ 98024cc0 ==== */

void FUN_98024cc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98024e70 @ 98024e70 ==== */

void FUN_98024e70(undefined4 *param_1,int *param_2,int param_3)

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


/* ==== FUN_98024ec8 @ 98024ec8 ==== */

void FUN_98024ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98025078 @ 98025078 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025078(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025108 @ 98025108 ==== */

void FUN_98025108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980251a8 @ 980251a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980251a8(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 ****ppppuVar7;
  undefined4 ****ppppuVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 ***local_80 [5];
  uint local_6c;
  
  iVar3 = FUN_9802ea1c();
  cVar4 = *param_4;
  pcVar1 = param_4;
  while (cVar4 != '\0') {
    if (cVar4 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar1 = pcVar1 + 1;
    cVar4 = *pcVar1;
  }
  FUN_9800bc20();
  FUN_980244b8();
  uVar10 = 1;
  uVar9 = local_6c;
  ppppuVar8 = (undefined4 ****)local_80[0];
  do {
    bVar2 = false;
    iVar12 = 0;
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        cVar4 = param_4[iVar12];
        if (cVar4 != '\0') {
          do {
            if (cVar4 == *param_4) break;
            iVar12 = iVar12 + 1;
            cVar4 = param_4[iVar12];
          } while (cVar4 != '\0');
        }
        ppppuVar7 = ppppuVar8;
        if (uVar9 < 0x10) {
          ppppuVar7 = local_80;
        }
        if (*(char *)((int)ppppuVar7 + uVar11) == '\0') {
          iVar12 = iVar12 + uVar10;
          if ((param_4[iVar12] == *param_4) || (param_4[iVar12] == '\0')) {
            uVar5 = uVar10;
            if (0x7e < uVar10) {
              uVar5 = 0x7f;
            }
            uVar6 = (undefined1)uVar5;
            if (uVar9 < 0x10) {
              ppppuVar8 = local_80;
            }
          }
          else {
            cVar4 = FUN_98024068();
            if (cVar4 == '\0') {
              if (*(char *)(iVar3 + 4) == '\0') {
                FUN_98023fc8();
              }
              if (param_4[iVar12] == *(char *)(iVar3 + 5)) {
                bVar2 = true;
                goto LAB_98025358;
              }
            }
            uVar5 = uVar10;
            if (0x7e < uVar10) {
              uVar5 = 0x7f;
            }
            if (uVar9 < 0x10) {
              ppppuVar8 = local_80;
            }
            uVar6 = (undefined1)uVar5;
          }
          *(undefined1 *)((int)ppppuVar8 + uVar11) = uVar6;
          uVar9 = local_6c;
          ppppuVar8 = (undefined4 ****)local_80[0];
        }
        else {
          ppppuVar7 = ppppuVar8;
          if (uVar9 < 0x10) {
            ppppuVar7 = local_80;
          }
          iVar12 = *(char *)((int)ppppuVar7 + uVar11) + iVar12;
        }
LAB_98025358:
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
    }
    if ((!bVar2) || (cVar4 = FUN_98024068(), cVar4 != '\0')) {
      FUN_9800bc20();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar10 = uVar10 + 1;
    FUN_98023f68();
  } while( true );
}


/* ==== FUN_980253b0 @ 980253b0 ==== */

void FUN_980253b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98025468 @ 98025468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025468(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_9802ea34();
  piVar6 = (int *)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  uVar2 = FUN_9800ae18(piVar6,param_3);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = piVar6[4];
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_9800f3a8();
    }
    if (-uVar2 - 1 <= param_4) {
      uVar2 = 0x91a00000;
      FUN_9800f370();
    }
    if (param_4 != 0) {
      cVar3 = FUN_9800c5f0();
      if (cVar3 != '\0') {
        piVar5 = piVar6;
        piVar1 = piVar6;
        if (0xf < (uint)piVar6[5]) {
          piVar5 = (int *)*piVar6;
          piVar1 = (int *)*piVar6;
        }
        FUN_9802f140((int)piVar5 + param_4 + uVar4,(int)piVar1 + uVar4,piVar6[4] - uVar4);
        FUN_9802ebd0();
        piVar6[4] = uVar2 + param_4;
        if (0xf < (uint)piVar6[5]) {
          piVar6 = (int *)*piVar6;
        }
        *(undefined1 *)((int)piVar6 + uVar2 + param_4) = 0;
      }
    }
  }
  else {
    FUN_980247d0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980255b8 @ 980255b8 ==== */

void FUN_980255b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98025698 @ 98025698 ==== */

void FUN_98025698(undefined4 *param_1,int *param_2,int param_3)

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


/* ==== FUN_980256f0 @ 980256f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980256f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025798 @ 98025798 ==== */

void FUN_98025798(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98025838 @ 98025838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980258a8 @ 980258a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980258a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025910 @ 98025910 ==== */

void FUN_98025910(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98025a70 @ 98025a70 ==== */

int FUN_98025a70(undefined4 *param_1)

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
  puVar1 = (undefined4 *)FUN_98025698(auStack_20,&uStack_30,1);
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


/* ==== FUN_98025b00 @ 98025b00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025b00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

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
  
  FUN_9802ea0c();
  piVar3 = (int *)FUN_98025798();
  (**(code **)(*piVar3 + 0xc))(local_a0,piVar3);
  if (local_90 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*piVar3 + 8))(piVar3);
  }
  cVar6 = FUN_98024068();
  pcVar9 = extraout_r4;
  if (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    cVar6 = *(char *)(param_3 + 5);
    if (cVar6 != '+') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      cVar6 = *(char *)(param_3 + 5);
      if (cVar6 != '-') goto LAB_98025bd4;
    }
    *extraout_r4 = cVar6;
    pcVar9 = extraout_r4 + 1;
    FUN_98023f68();
  }
LAB_98025bd4:
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
  cVar6 = FUN_98024068();
  if (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if (*(char *)(param_3 + 5) != '0') goto LAB_98025cd4;
    bVar2 = true;
    FUN_98023f68();
    cVar6 = FUN_98024068();
    if (cVar6 != '\0') {
LAB_98025cc8:
      if (bVar11 == 0) {
        bVar11 = 8;
        goto LAB_98025cd4;
      }
      goto LAB_98025cdc;
    }
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if (*(char *)(param_3 + 5) != 'x') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) != 'X') goto LAB_98025cc8;
    }
    if ((bVar11 != 0) && (bVar11 != 0x10)) goto LAB_98025cc8;
    bVar2 = false;
    FUN_98023f68();
  }
  else {
LAB_98025cd4:
    if (bVar11 == 0) goto LAB_98025cf4;
LAB_98025cdc:
    if ((bVar11 == 10) || (iVar13 = 8, bVar11 == 8)) goto LAB_98025cf4;
  }
  iVar13 = 0x16;
LAB_98025cf4:
  FUN_9800bc20();
  FUN_980244b8();
  iVar14 = 0;
  cVar6 = FUN_98024068();
  uVar12 = local_ac;
  ppppcVar7 = (char ****)local_c0[0];
  if (cVar6 == '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      cVar6 = *(char *)(param_3 + 5);
      *pcVar9 = cVar6;
      pbVar4 = FUN_9802f100((byte *)0x91a04c58,(int)cVar6,iVar13);
      if (pbVar4 == (byte *)0x0) {
        ppppcVar8 = ppppcVar7;
        if (uVar12 < 0x10) {
          ppppcVar8 = local_c0;
        }
        if ((*(char *)((int)ppppcVar8 + iVar14) == '\0') || (cVar5 == '\0')) break;
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_98023fc8();
        }
        if (*(char *)(param_3 + 5) != cVar5) break;
        FUN_9800c748();
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
      FUN_98023f68();
      cVar6 = FUN_98024068();
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
        FUN_9800bc20();
        FUN_9800bc20();
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
LAB_98025f08:
      bVar2 = false;
    }
    if (iVar14 == 0) {
      ppppcVar8 = ppppcVar7;
      if (uVar12 < 0x10) {
        ppppcVar8 = local_c0;
      }
      if (cVar5 < *(char *)ppppcVar8) goto LAB_98025f08;
    }
    if ('\0' < *(char *)((int)local_a0[0] + 1)) {
      local_a0[0] = (char ***)((int)local_a0[0] + 1);
    }
  } while( true );
}


/* ==== FUN_98025f90 @ 98025f90 ==== */

void FUN_98025f90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98026840 @ 98026840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980268a8 @ 980268a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980268a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026910 @ 98026910 ==== */

void FUN_98026910(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980269b0 @ 980269b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980269b0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_9802ea34();
  puVar1 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  while (*(int *)((int)uVar4 + 8) != *(int *)(param_3 + 8)) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
    param_4[2] = param_4[2] + -1;
    FUN_98025838();
  }
  piVar2 = (int *)*param_4;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((piVar2 != (int *)0x0) && (puVar3 = (undefined4 *)*piVar2, puVar3 != (undefined4 *)0x0)) {
    *puVar1 = *puVar3;
  }
  puVar1[2] = param_4[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026aa8 @ 98026aa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026aa8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9802ea34();
  puVar1 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  while (*(int *)(iVar2 + 8) != *(int *)(param_3 + 8)) {
    FUN_98025838();
    param_4[2] = param_4[2] + 1;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  piVar3 = (int *)*param_4;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((piVar3 != (int *)0x0) && (puVar4 = (undefined4 *)*piVar3, puVar4 != (undefined4 *)0x0)) {
    *puVar1 = *puVar4;
  }
  puVar1[2] = param_4[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026ba0 @ 98026ba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026ba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026e38 @ 98026e38 ==== */

void FUN_98026e38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98026eb8 @ 98026eb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026eb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026f30 @ 98026f30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026f30(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_9802ea18();
  uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
  iVar3 = (int)uVar8;
  FUN_9800bc20();
  piVar6 = *(int **)(iVar3 + 0x18);
  for (uVar7 = *(uint *)(iVar3 + 0x24); *(int *)(iVar3 + 0x28) + *(int *)(iVar3 + 0x24) != uVar7;
      uVar7 = uVar7 + 1) {
    iVar4 = 0;
    if (piVar6 != (int *)0x0) {
      iVar4 = *piVar6;
    }
    uVar5 = uVar7;
    if (*(uint *)(iVar4 + 8) <= uVar7) {
      uVar5 = uVar7 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *(int *)(uVar5 * 4 + *(int *)(iVar4 + 4));
    FUN_980258a8();
    FUN_98026840();
    uVar2 = FUN_980268a8();
    FUN_980243c0(uVar1,uVar2,0,0xffffffff);
    FUN_9800bc20();
    FUN_9800bc20();
    FUN_9800bc20();
    FUN_98026910();
    uVar2 = FUN_980268a8();
    FUN_980243c0(uVar1,uVar2,0,0xffffffff);
    FUN_9800bc20();
    FUN_9800bc20();
    if (*(int *)(iVar4 + 0x28) != 0) {
      FUN_980258a8();
      FUN_98026840();
      uVar2 = FUN_980268a8();
      FUN_980243c0(uVar1,uVar2,0,0xffffffff);
      FUN_9800bc20();
      FUN_9800bc20();
      FUN_9800bc20();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98027130 @ 98027130 ==== */

void FUN_98027130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980271d0 @ 980271d0 ==== */

void FUN_980271d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980274f8 @ 980274f8 ==== */

void FUN_980274f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98027630 @ 98027630 ==== */

void FUN_98027630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98027878 @ 98027878 ==== */

void FUN_98027878(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98027980 @ 98027980 ==== */

void FUN_98027980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98027a88 @ 98027a88 ==== */

void FUN_98027a88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98027b90 @ 98027b90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027b90(void)

{
  FUN_9802ea34();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98027c98 @ 98027c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027c98(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

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
  
  FUN_9802ea08();
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    FUN_98025f90();
    halt_baddata();
  }
  iVar14 = **(int **)(param_5 + 0x30);
  FUN_9800a970();
  piVar3 = (int *)FUN_98025798();
  if ((iVar14 != 0) && (puVar4 = (undefined4 *)FUN_9800a9c8(), puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
  }
  (**(code **)(*piVar3 + 0xc))(local_b0,piVar3);
  bVar1 = false;
  cVar5 = FUN_98024068();
  puVar10 = extraout_r4;
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if (*(char *)(param_3 + 5) == '+') {
      *extraout_r4 = 0x2b;
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_98027da8;
      *extraout_r4 = 0x2d;
    }
    puVar10 = extraout_r4 + 1;
    FUN_98023f68();
  }
LAB_98027da8:
  bVar2 = false;
  iVar14 = 0;
  iVar9 = 0;
  ppppppcVar7 = (char ******)local_b0[0];
  if (local_9c < 0x10) {
    ppppppcVar7 = local_b0;
  }
  if (*(char *)ppppppcVar7 == '\x7f') {
LAB_9802815c:
    while (cVar5 = FUN_98024068(), cVar5 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar14 < 0x24) {
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_98023fc8();
        }
        if ((*(char *)(param_3 + 5) != '0') || (iVar14 != 0)) {
          if (*(char *)(param_3 + 4) == '\0') {
            FUN_98023fc8();
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
      FUN_98023f68();
    }
  }
  else {
    ppppppcVar7 = (char ******)local_b0[0];
    if (local_9c < 0x10) {
      ppppppcVar7 = local_b0;
    }
    if (*(char *)ppppppcVar7 < '\x01') goto LAB_9802815c;
    if (local_a0 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(*piVar3 + 8))(piVar3);
    }
    FUN_9800bc20();
    FUN_980244b8();
    iVar13 = 0;
    cVar6 = FUN_98024068();
    uVar12 = local_bc;
    ppppppcVar7 = (char ******)local_d0[0];
    if (cVar6 == '\0') {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_98023fc8();
        }
        if (*(char *)(param_3 + 5) < '0') {
LAB_98027f44:
          ppppppcVar8 = ppppppcVar7;
          if (uVar12 < 0x10) {
            ppppppcVar8 = local_d0;
          }
          if ((*(char *)((int)ppppppcVar8 + iVar13) == '\0') || (cVar5 == '\0')) break;
          if (*(char *)(param_3 + 4) == '\0') {
            FUN_98023fc8();
          }
          if (*(char *)(param_3 + 5) != cVar5) break;
          FUN_9800c748();
          iVar13 = iVar13 + 1;
          uVar12 = local_bc;
          ppppppcVar7 = (char ******)local_d0[0];
        }
        else {
          if (*(char *)(param_3 + 4) == '\0') {
            FUN_98023fc8();
          }
          if ('9' < *(char *)(param_3 + 5)) goto LAB_98027f44;
          bVar2 = true;
          if (iVar14 < 0x24) {
            if (*(char *)(param_3 + 4) == '\0') {
              FUN_98023fc8();
            }
            if ((*(char *)(param_3 + 5) != '0') || (iVar14 != 0)) {
              if (*(char *)(param_3 + 4) == '\0') {
                FUN_98023fc8();
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
        FUN_98023f68();
        cVar6 = FUN_98024068();
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
LAB_9802804c:
        if (iVar13 == 0) {
          ppppppcVar8 = ppppppcVar7;
          if (uVar12 < 0x10) {
            ppppppcVar8 = local_d0;
          }
          if (cVar5 < *(char *)ppppppcVar8) goto LAB_98028074;
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
        if (cVar5 == *(char *)((int)ppppppcVar8 + iVar13)) goto LAB_9802804c;
LAB_98028074:
        bVar1 = true;
      }
    }
    FUN_9800bc20();
  }
  if ((bVar2) && (iVar14 == 0)) {
    *puVar10 = 0x30;
    puVar10 = puVar10 + 1;
  }
  cVar5 = FUN_98024068();
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    cVar5 = *(char *)(param_3 + 5);
    cVar6 = (**(code **)(*piVar3 + 4))(piVar3);
    if (cVar5 == cVar6) {
      puVar4 = (undefined4 *)FUN_98030418();
      *puVar10 = *(undefined1 *)*puVar4;
      puVar10 = puVar10 + 1;
      FUN_98023f68();
    }
  }
  if (iVar14 == 0) {
    while (cVar5 = FUN_98024068(), cVar5 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) != '0') break;
      iVar9 = iVar9 + -1;
      bVar2 = true;
      FUN_98023f68();
    }
    if (iVar9 < 0) {
      *puVar10 = 0x30;
      puVar10 = puVar10 + 1;
    }
  }
  cVar5 = FUN_98024068();
  while (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if (*(char *)(param_3 + 5) < '0') break;
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if ('9' < *(char *)(param_3 + 5)) break;
    if (iVar14 < 0x24) {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      iVar14 = iVar14 + 1;
      *puVar10 = *(undefined1 *)(param_3 + 5);
      puVar10 = puVar10 + 1;
    }
    bVar2 = true;
    FUN_98023f68();
    cVar5 = FUN_98024068();
  }
  if ((bVar2) && (cVar5 = FUN_98024068(), cVar5 == '\0')) {
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if (*(char *)(param_3 + 5) != 'e') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) != 'E') goto LAB_980284d4;
    }
    *puVar10 = 0x65;
    puVar11 = puVar10 + 1;
    FUN_98023f68();
    bVar2 = false;
    iVar14 = 0;
    cVar5 = FUN_98024068();
    if (cVar5 != '\0') goto LAB_98028418;
    if (*(char *)(param_3 + 4) == '\0') {
      FUN_98023fc8();
    }
    if (*(char *)(param_3 + 5) == '+') {
      *puVar11 = 0x2b;
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_98028418;
      *puVar11 = 0x2d;
    }
    puVar10 = puVar10 + 2;
    while( true ) {
      FUN_98023f68();
      puVar11 = puVar10;
LAB_98028418:
      puVar10 = puVar11;
      cVar5 = FUN_98024068();
      if (cVar5 != '\0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) != '0') break;
      bVar2 = true;
    }
    if (bVar2) {
      *puVar10 = 0x30;
      puVar10 = puVar10 + 1;
    }
    while (cVar5 = FUN_98024068(), cVar5 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        FUN_98023fc8();
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar14 < 8) {
        if (*(char *)(param_3 + 4) == '\0') {
          FUN_98023fc8();
        }
        iVar14 = iVar14 + 1;
        *puVar10 = *(undefined1 *)(param_3 + 5);
        puVar10 = puVar10 + 1;
      }
      bVar2 = true;
      FUN_98023f68();
    }
  }
LAB_980284d4:
  if ((bVar1) || (!bVar2)) {
    puVar10 = extraout_r4;
  }
  *puVar10 = 0;
  FUN_9800bc20();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028510 @ 98028510 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028510(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980285e8 @ 980285e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980285e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980286c0 @ 980286c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980286c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028740 @ 98028740 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028740(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028878 @ 98028878 ==== */

void FUN_98028878(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980289e0 @ 980289e0 ==== */

void FUN_980289e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98028ac0 @ 98028ac0 ==== */

void FUN_98028ac0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98028ba0 @ 98028ba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028ba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028c28 @ 98028c28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028c28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028cb0 @ 98028cb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028cb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029110 @ 98029110 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98029110(void)

{
  int *piVar1;
  int extraout_r4;
  int iVar2;
  int iVar3;
  
  FUN_9802ea34();
  iVar2 = *(int *)(extraout_r4 + 8);
  iVar3 = *(int *)(extraout_r4 + 4);
  FUN_9800bc20();
  if (iVar3 != iVar2) {
    FUN_9800cf80();
  }
  FUN_98027130();
  piVar1 = (int *)FUN_98025910();
  if ((*(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0xc) & 6) == 0) {
    FUN_9802c358();
    FUN_9802d488();
    FUN_9802be90();
  }
  else {
    iVar2 = *(int *)(extraout_r4 + 8);
    iVar3 = *(int *)(extraout_r4 + 4);
    FUN_9800bc20();
    if (iVar3 != iVar2) {
      FUN_9800cf80();
    }
    FUN_98026840();
    FUN_980268a8();
    FUN_98028878();
    FUN_9800bc20();
    FUN_9800bc20();
    FUN_9800bc20();
  }
  FUN_980249d8();
  FUN_9800bc20();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029288 @ 98029288 ==== */

void FUN_98029288(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980293b0 @ 980293b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980293b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 auStack_40 [64];
  
  uVar7 = FUN_9802ea34();
  piVar1 = (int *)uVar7;
  iStack_58 = *(int *)(param_3 + 8);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
  }
  iStack_68 = *(int *)(param_4 + 8);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar3 = (int *)*piVar1;
  }
  iVar4 = piVar1[3];
  iVar6 = iStack_68 - iStack_58;
  iStack_48 = piVar1[4] + iVar4;
  uVar5 = iStack_58 - iVar4;
  if (uVar5 < (uint)(iStack_48 - iStack_68)) {
    uStack_70 = 0;
    uStack_6c = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uStack_70 = *(undefined4 *)*piVar3;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    if ((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
      uStack_60 = *(undefined4 *)*piVar2;
    }
    iStack_50 = *piVar1;
    uStack_4c = 0;
    iStack_48 = iVar4;
    FUN_98028510(auStack_40,&iStack_50,&uStack_60,&uStack_70);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_98028ba0();
    }
  }
  else {
    uStack_60 = 0;
    uStack_5c = 0;
    if ((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
      uStack_60 = *(undefined4 *)*piVar2;
    }
    iStack_50 = *piVar1;
    uStack_4c = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uStack_70 = *(undefined4 *)*piVar3;
    }
    FUN_980285e8();
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_98028c28();
    }
  }
  iStack_48 = piVar1[3];
  iStack_50 = *piVar1;
  uStack_4c = 0;
  FUN_98024e70((int)((ulonglong)uVar7 >> 0x20),&iStack_50,uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029568 @ 98029568 ==== */

void FUN_98029568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980295f0 @ 980295f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980295f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029658 @ 98029658 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029658(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980297b0 @ 980297b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980297b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                 uint *param_5)

{
  char cVar1;
  char *pcVar2;
  uint uStack_80;
  
  FUN_9802ea34();
  cVar1 = FUN_98029288();
  if (((cVar1 != '\0') && (0xd7ff < *param_5)) && (*param_5 < 0xdc00)) {
    pcVar2 = (char *)*param_3;
    if (param_4 - (int)pcVar2 < 6) {
      FUN_9800d438();
      FUN_98028878();
    }
    else {
      cVar1 = *pcVar2;
      *param_3 = pcVar2 + 1;
      if ((cVar1 == '\\') && (cVar1 = pcVar2[1], *param_3 = pcVar2 + 2, cVar1 == 'u')) {
        cVar1 = FUN_98029288();
        if (cVar1 == '\0') {
          halt_baddata();
        }
        *param_5 = ((*param_5 & 0x3ff) + 0x40) * 0x400 + (uStack_80 & 0x3ff);
        halt_baddata();
      }
      FUN_9800d438();
      FUN_98028878();
    }
    FUN_9800bc20();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980298f0 @ 980298f0 ==== */

void FUN_980298f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98029a78 @ 98029a78 ==== */

void FUN_98029a78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98029b10 @ 98029b10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029b10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029bd0 @ 98029bd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar2;
  undefined4 uVar1;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcStack_a0;
  undefined4 auStack_9c [19];
  undefined1 auStack_50 [80];
  
  uVar7 = FUN_9802ea34();
  iVar3 = (int)uVar7;
  FUN_9800c820();
  pcVar4 = (char *)(*(int *)(iVar3 + 8) + -1);
  pcVar6 = (char *)(*(int *)(iVar3 + 4) + 1);
  do {
    while( true ) {
      if (pcVar6 == pcVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar5 = pcVar6 + 1;
      if (*pcVar6 == '\"') {
        halt_baddata();
      }
      if (*pcVar6 != '\\') goto LAB_98029d28;
      if (pcVar5 == pcVar4) {
        FUN_9800d438();
        FUN_98028878();
        goto LAB_98029d74;
      }
      cVar2 = *pcVar5;
      pcVar5 = pcVar6 + 2;
      pcStack_a0 = pcVar5;
      if ('f' < cVar2) break;
      if (((cVar2 != 'f') && (cVar2 != '\"')) &&
         ((cVar2 != '/' && ((cVar2 != '\\' && (cVar2 != 'b')))))) {
LAB_98029d88:
        FUN_9800d438();
        FUN_98028878();
LAB_98029d74:
        FUN_9800bc20();
        halt_baddata();
      }
LAB_98029d28:
      FUN_9800c748();
      pcVar6 = pcVar5;
    }
    if (((cVar2 == 'n') || (cVar2 == 'r')) || (cVar2 == 't')) goto LAB_98029d28;
    if (cVar2 != 'u') goto LAB_98029d88;
    cVar2 = FUN_980297b0((int)((ulonglong)uVar7 >> 0x20),iVar3,&pcStack_a0,pcVar4,auStack_9c);
    if (cVar2 == '\0') {
      halt_baddata();
    }
    uVar1 = FUN_98026ba0(auStack_50,auStack_9c[0]);
    FUN_980243c0(param_3,uVar1,0,0xffffffff);
    FUN_9800bc20();
    pcVar6 = pcStack_a0;
  } while( true );
}


/* ==== FUN_98029dc0 @ 98029dc0 ==== */

void FUN_98029dc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98029e28 @ 98029e28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029e28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029ea8 @ 98029ea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029ea8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802a2e0 @ 9802a2e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802a2e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802a4c8 @ 9802a4c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802a4c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802a608 @ 9802a608 ==== */

void FUN_9802a608(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802a7b0 @ 9802a7b0 ==== */

void FUN_9802a7b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802aaa8 @ 9802aaa8 ==== */

void FUN_9802aaa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9802ac88 @ 9802ac88 ==== */

void FUN_9802ac88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802ace8 @ 9802ace8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ace8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ad70 @ 9802ad70 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9802ad70(double *param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_20 [16];
  
  dVar2 = _DAT_91a04d08;
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar1 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((cVar1 == '\x03') && (_DAT_91a04d08 <= *param_1)) && (*param_1 <= dRam91a05038)) &&
     (dVar3 = (double)FUN_98030750(param_1,auStack_20), dVar3 == dVar2)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_9802ae40 @ 9802ae40 ==== */

bool FUN_9802ae40(int param_1)

{
  return *(char *)(param_1 + 8) == '\x06';
}


/* ==== FUN_9802ae58 @ 9802ae58 ==== */

bool FUN_9802ae58(int param_1)

{
  return *(char *)(param_1 + 8) == '\a';
}


/* ==== FUN_9802ae70 @ 9802ae70 ==== */

void FUN_9802ae70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}


/* ==== FUN_9802ae78 @ 9802ae78 ==== */

void FUN_9802ae78(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}


/* ==== FUN_9802ae80 @ 9802ae80 ==== */

void FUN_9802ae80(int *param_1)

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


/* ==== FUN_9802aef8 @ 9802aef8 ==== */

void FUN_9802aef8(int *param_1)

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


/* ==== FUN_9802af88 @ 9802af88 ==== */

void FUN_9802af88(int param_1,int *param_2)

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


/* ==== FUN_9802aff0 @ 9802aff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802aff0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b088 @ 9802b088 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b088(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b0b0 @ 9802b0b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b0b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b108 @ 9802b108 ==== */

void FUN_9802b108(int param_1,int param_2)

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


/* ==== FUN_9802b170 @ 9802b170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b200 @ 9802b200 ==== */

void FUN_9802b200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9802b5b8 @ 9802b5b8 ==== */

void FUN_9802b5b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802b640 @ 9802b640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b640(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b690 @ 9802b690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b690(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b6e0 @ 9802b6e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b6e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b730 @ 9802b730 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b798 @ 9802b798 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b798(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b7f0 @ 9802b7f0 ==== */

void FUN_9802b7f0(void)

{
  FUN_9802b798();
                    /* WARNING: Subroutine does not return */
  FUN_9802ff90();
}


/* ==== FUN_9802b830 @ 9802b830 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b830(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b888 @ 9802b888 ==== */

byte FUN_9802b888(undefined4 *param_1,undefined4 *param_2)

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
      FUN_9800d438();
      FUN_9802b798();
                    /* WARNING: Subroutine does not return */
      FUN_9802ff90();
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


/* ==== FUN_9802b980 @ 9802b980 ==== */

bool FUN_9802b980(undefined4 *param_1,undefined4 *param_2)

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
      FUN_9800d438();
      FUN_9802b798();
                    /* WARNING: Subroutine does not return */
      FUN_9802ff90();
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


/* ==== FUN_9802ba50 @ 9802ba50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ba50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802baf8 @ 9802baf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802baf8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9802ea34();
  piVar1 = (int *)((ulonglong)uVar5 >> 0x20);
  piVar3 = (int *)uVar5;
  if (((piVar3[1] & 0xc0000000U) == 0) || (*piVar3 == 0)) {
    iVar2 = *piVar3;
  }
  else {
    uVar4 = piVar3[1] & 0x3fffffff;
    if (0x7ffffffe < uVar4) {
      uVar4 = 0x7ffffffe;
    }
    iVar2 = FUN_9802fdc0();
    if (iVar2 == 0) {
      FUN_9800d438();
      FUN_9802b798();
                    /* WARNING: Subroutine does not return */
      FUN_9802ff90();
    }
    FUN_9802ebd0();
    *(undefined1 *)(iVar2 + uVar4) = 0;
  }
  *piVar1 = iVar2;
  if (*piVar3 == 0) {
    uVar4 = (uint)piVar3[1] >> 0x1e;
  }
  else {
    uVar4 = (uint)((piVar3[1] & 0xc0000000U) != 0);
  }
  piVar1[1] = uVar4 << 0x1e | piVar1[1] & 0x3fffffffU;
  piVar1[1] = piVar3[1] & 0x3fffffffU | uVar4 << 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bbf0 @ 9802bbf0 ==== */

void FUN_9802bbf0(int *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 4) {
    if (((uint)param_1[2] >> 0x17 & 1) == 0) {
      return;
    }
    FUN_9802f2a0();
    return;
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
  FUN_9802ba50();
  return;
}


/* ==== FUN_9802bc38 @ 9802bc38 ==== */

void FUN_9802bc38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802bca8 @ 9802bca8 ==== */

void FUN_9802bca8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802bcf0 @ 9802bcf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802bcf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bd48 @ 9802bd48 ==== */

void FUN_9802bd48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802bdb8 @ 9802bdb8 ==== */

void FUN_9802bdb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802bdd8 @ 9802bdd8 ==== */

void FUN_9802bdd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802be30 @ 9802be30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802be30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802be90 @ 9802be90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802be90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bed0 @ 9802bed0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802bed0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bf50 @ 9802bf50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802bf50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bfc0 @ 9802bfc0 ==== */

void FUN_9802bfc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802c030 @ 9802c030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802c030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802c080 @ 9802c080 ==== */

void FUN_9802c080(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c158 @ 9802c158 ==== */

void FUN_9802c158(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c248 @ 9802c248 ==== */

void FUN_9802c248(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c2a8 @ 9802c2a8 ==== */

void FUN_9802c2a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c300 @ 9802c300 ==== */

void FUN_9802c300(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c358 @ 9802c358 ==== */

void FUN_9802c358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802c3b8 @ 9802c3b8 ==== */

void FUN_9802c3b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c430 @ 9802c430 ==== */

void FUN_9802c430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802c488 @ 9802c488 ==== */

int FUN_9802c488(int *param_1)

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
  FUN_9800d840();
  FUN_9800d2a8();
  FUN_9800d8d0();
  FUN_9802b798();
                    /* WARNING: Subroutine does not return */
  FUN_9802ff90();
}


/* ==== FUN_9802c520 @ 9802c520 ==== */

void FUN_9802c520(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802c688 @ 9802c688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802c688(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802c878 @ 9802c878 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_9802c878(double *param_1)

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
        FUN_9800d840();
        FUN_9800d2a8();
        FUN_9800d8d0();
        FUN_9802b798();
                    /* WARNING: Subroutine does not return */
        FUN_9802ff90();
      }
      uVar2 = *(undefined1 *)param_1;
    }
  }
  return uVar2;
}


/* ==== FUN_9802c950 @ 9802c950 ==== */

void FUN_9802c950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802c9c0 @ 9802c9c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802c9c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ca18 @ 9802ca18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ca18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ca78 @ 9802ca78 ==== */

void FUN_9802ca78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802cb80 @ 9802cb80 ==== */

void FUN_9802cb80(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_9802ca78();
  if (iVar2 == 0) {
    FUN_9802ca18();
  }
  return;
}


/* ==== FUN_9802cbd0 @ 9802cbd0 ==== */

bool FUN_9802cbd0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_9802ca78();
  return (bool)('\x01' - (iVar2 == 0));
}


/* ==== FUN_9802cc20 @ 9802cc20 ==== */

bool FUN_9802cc20(void)

{
  int iVar1;
  
  iVar1 = FUN_9802ca78();
  return (bool)('\x01' - (iVar1 == 0));
}


/* ==== FUN_9802cc78 @ 9802cc78 ==== */

void FUN_9802cc78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9802ce48 @ 9802ce48 ==== */

void FUN_9802ce48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802cea0 @ 9802cea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802cea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9802ea34();
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  puVar4 = (undefined4 *)uVar5;
  if (*(char *)((int)puVar4 + 0x81) == '\0') {
    puVar1 = (undefined4 *)FUN_9802aff0();
    FUN_9802c9c0();
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar4 + 0x20);
    uVar2 = FUN_9802cea0(uVar3,*puVar4,puVar1);
    *puVar1 = uVar2;
    uVar3 = FUN_9802cea0(uVar3,puVar4[2],puVar1);
    puVar1[2] = uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802cf30 @ 9802cf30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802cf30(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *local_60 [24];
  
  uVar6 = FUN_9802ea24();
  puVar1 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  puVar4 = *(undefined4 **)((int)uVar6 + 4);
  puVar3 = (undefined4 *)(param_3 + 0x10);
  bVar2 = 1;
  if (*(char *)((int)puVar4[1] + 0x81) == '\0') {
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      if ((param_4 & 0xff) == 0) {
        bVar2 = FUN_9802b888(puVar3,puVar4 + 4);
      }
      else {
        bVar2 = FUN_9802b888(puVar4 + 4,puVar3);
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
    if (puVar4 == (undefined4 *)**(int **)((int)uVar6 + 4)) goto LAB_9802cfec;
    FUN_9802aef8((int *)local_60);
  }
  puVar4 = local_60[0];
  bVar2 = FUN_9802b888(local_60[0] + 4,puVar3);
  if (bVar2 == 0) {
    FUN_9802bf50();
    thunk_FUN_9802f2a0();
    *puVar1 = puVar4;
    *(undefined1 *)(puVar1 + 1) = 0;
    halt_baddata();
  }
LAB_9802cfec:
  puVar3 = (undefined4 *)FUN_9802cc78();
  *(undefined1 *)(puVar1 + 1) = 1;
  *puVar1 = *puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d060 @ 9802d060 ==== */

void FUN_9802d060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802d108 @ 9802d108 ==== */

void FUN_9802d108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9802d2b8 @ 9802d2b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d2b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d308 @ 9802d308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d308(void)

{
  FUN_9802ea34();
  FUN_9802aff0();
  FUN_9802c9c0();
  FUN_9802d108();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d360 @ 9802d360 ==== */

void FUN_9802d360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802d428 @ 9802d428 ==== */

void FUN_9802d428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802d488 @ 9802d488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d4e0 @ 9802d4e0 ==== */

void FUN_9802d4e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802d620 @ 9802d620 ==== */

void FUN_9802d620(undefined4 param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_9800d840();
    FUN_9800d2a8();
    FUN_9800d8d0();
    FUN_9802b798();
                    /* WARNING: Subroutine does not return */
    FUN_9802ff90();
  }
  FUN_9802d4e0();
  return;
}


/* ==== FUN_9802d690 @ 9802d690 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9802d7ec) */

void FUN_9802d690(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int local_210;
  uint local_20c;
  int aiStack_1b0 [108];
  
  uVar5 = FUN_9802ea34();
  piVar2 = (int *)((ulonglong)uVar5 >> 0x20);
  local_210 = (int)uVar5;
  cVar1 = *(char *)(piVar2 + 2);
  if ((cVar1 != '\0') && (cVar1 != '\a')) {
    FUN_9800d840();
    FUN_9800d2a8();
    FUN_9800d8d0();
    FUN_9802b798();
                    /* WARNING: Subroutine does not return */
    FUN_9802ff90();
  }
  if (cVar1 != '\0') {
    local_20c = param_3 - local_210 & 0x3fffffffU | 0x80000000;
    iVar3 = FUN_9802bdd8();
    if ((iVar3 == *(int *)(*piVar2 + 4)) ||
       (bVar4 = FUN_9802b980((undefined4 *)(iVar3 + 0x10),&local_210), !bVar4)) {
      FUN_9802ca18();
      FUN_9802baf8();
      FUN_9802d428();
      FUN_9802d308();
      FUN_9802bf50();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_9802c158();
  FUN_9802d488();
  FUN_9802bbf0(aiStack_1b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d800 @ 9802d800 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9802d7ec) */

void FUN_9802d800(undefined4 param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iStack_210;
  uint uStack_20c;
  int aiStack_1b0 [108];
  
  do {
    pcVar5 = param_2;
    param_2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  uVar6 = FUN_9802ea34();
  piVar2 = (int *)((ulonglong)uVar6 >> 0x20);
  iStack_210 = (int)uVar6;
  cVar1 = *(char *)(piVar2 + 2);
  if ((cVar1 != '\0') && (cVar1 != '\a')) {
    FUN_9800d840();
    FUN_9800d2a8();
    FUN_9800d8d0();
    FUN_9802b798();
                    /* WARNING: Subroutine does not return */
    FUN_9802ff90();
  }
  if (cVar1 != '\0') {
    uStack_20c = (int)pcVar5 - iStack_210 & 0x3fffffffU | 0x80000000;
    iVar3 = FUN_9802bdd8();
    if ((iVar3 == *(int *)(*piVar2 + 4)) ||
       (bVar4 = FUN_9802b980((undefined4 *)(iVar3 + 0x10),&iStack_210), !bVar4)) {
      FUN_9802ca18();
      FUN_9802baf8();
      FUN_9802d428();
      FUN_9802d308();
      FUN_9802bf50();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_9802c158();
  FUN_9802d488();
  FUN_9802bbf0(aiStack_1b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d828 @ 9802d828 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9802d7ec) */

void FUN_9802d828(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iStack_210;
  uint uStack_20c;
  int aiStack_1b0 [108];
  
  puVar5 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar5 = (undefined4 *)*param_2;
  }
  iVar4 = (int)puVar5 + param_2[4];
  uVar6 = FUN_9802ea34();
  piVar2 = (int *)((ulonglong)uVar6 >> 0x20);
  iStack_210 = (int)uVar6;
  cVar1 = *(char *)(piVar2 + 2);
  if ((cVar1 != '\0') && (cVar1 != '\a')) {
    FUN_9800d840();
    FUN_9800d2a8();
    FUN_9800d8d0();
    FUN_9802b798();
                    /* WARNING: Subroutine does not return */
    FUN_9802ff90();
  }
  if (cVar1 != '\0') {
    uStack_20c = iVar4 - iStack_210 & 0x3fffffffU | 0x80000000;
    iVar4 = FUN_9802bdd8();
    if ((iVar4 == *(int *)(*piVar2 + 4)) ||
       (bVar3 = FUN_9802b980((undefined4 *)(iVar4 + 0x10),&iStack_210), !bVar3)) {
      FUN_9802ca18();
      FUN_9802baf8();
      FUN_9802d428();
      FUN_9802d308();
      FUN_9802bf50();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_9802c158();
  FUN_9802d488();
  FUN_9802bbf0(aiStack_1b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d858 @ 9802d858 ==== */

void FUN_9802d858(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9802d940 @ 9802d940 ==== */

void FUN_9802d940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802d9c0 @ 9802d9c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d9c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802daa8 @ 9802daa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802daa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802db18 @ 9802db18 ==== */

void FUN_9802db18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9802ddf0 @ 9802ddf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ddf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802de30 @ 9802de30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802de30(void)

{
  FUN_9802f598();
  FUN_9800b358();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_9800f4c8 @ 9802de68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_9800f4c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802de70 @ 9802de70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802de70(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  ushort uVar8;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  char cStack_70;
  
  uVar13 = FUN_9802ea18();
  pbVar3 = (byte *)((ulonglong)uVar13 >> 0x20);
  puVar9 = (undefined4 *)uVar13;
  pbVar11 = pbVar3;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar4 = FUN_9800ad10();
    if (iVar4 < 2) {
      iVar4 = FUN_9802f520();
      uVar8 = *(ushort *)(iVar4 + (uint)*pbVar11 * 2) & 8;
    }
    else {
      uVar8 = FUN_98030b18((uint)*pbVar11,8);
    }
    if (uVar8 == 0) break;
    pbVar11 = pbVar11 + 1;
  }
  if ((*pbVar11 == 0x2d) || (*pbVar11 == 0x2b)) {
    pbVar11 = pbVar11 + 1;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_9802e0ac;
  if ((int)param_3 < 1) {
    if (*pbVar11 == 0x30) {
      if ((pbVar11[1] == 0x78) || (pbVar11[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_9802df90;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar11 == 0x30)) &&
          ((pbVar11[1] == 0x78 || (pbVar11[1] == 0x58)))) {
LAB_9802df90:
    pbVar11 = pbVar11 + 2;
  }
  bVar10 = *pbVar11;
  pbVar12 = pbVar11;
  while ((char)bVar10 == 0x30) {
    pbVar12 = pbVar12 + 1;
    bVar10 = *pbVar12;
  }
  uVar5 = FUN_9802f390((int)(char)bVar10);
  pbVar6 = FUN_9802f100((byte *)0x91a055e0,uVar5,param_3);
  uVar5 = 0;
  uVar2 = 0;
  pbVar1 = pbVar12;
  while (pbVar6 != (byte *)0x0) {
    cStack_70 = (char)pbVar6 + ' ';
    pbVar1 = pbVar1 + 1;
    uVar5 = FUN_9802f390((int)(char)*pbVar1);
    pbVar6 = FUN_9802f100((byte *)0x91a055e0,uVar5,param_3);
    uVar5 = uVar2;
    uVar2 = uVar2 * param_3 + (int)cStack_70;
  }
  if (pbVar11 != pbVar1) {
    if ((-1 < (int)(pbVar1 + (-(int)pbVar12 - (int)*(char *)(param_3 + 0x91a05608)))) &&
       (((0 < (int)(pbVar1 + (-(int)pbVar12 - (int)*(char *)(param_3 + 0x91a05608))) ||
         (uVar2 < uVar2 - (int)cStack_70)) ||
        (trapWord(6,param_3,0), (uVar2 - (int)cStack_70) / param_3 != uVar5)))) {
      puVar7 = (undefined4 *)FUN_98030a00();
      *puVar7 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
    }
    if (puVar9 == (undefined4 *)0x0) {
      halt_baddata();
    }
    *puVar9 = pbVar1;
    halt_baddata();
  }
LAB_9802e0ac:
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = pbVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e0c8 @ 9802e0c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802e0c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined4 auStack_40 [16];
  
  uVar7 = FUN_9802ea34();
  pbVar1 = (byte *)((ulonglong)uVar7 >> 0x20);
  puVar4 = (undefined4 *)uVar7;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = auStack_40;
  }
  iVar2 = FUN_9802f520();
  bVar5 = *pbVar1;
  pbVar6 = pbVar1;
  while ((*(ushort *)(iVar2 + (uint)bVar5 * 2) & 8) != 0) {
    iVar2 = FUN_9802f520();
    pbVar6 = pbVar6 + 1;
    bVar5 = *pbVar6;
  }
  bVar5 = *pbVar6;
  if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = 0x2b;
  }
  uVar3 = FUN_9802de70(pbVar6,puVar4,param_3,param_4);
  if (pbVar6 == (byte *)*puVar4) {
    *puVar4 = pbVar1;
  }
  if ((((pbVar1 == (byte *)*puVar4) && (uVar3 != 0)) || ((bVar5 == 0x2b && (0x7fffffff < uVar3))))
     || ((bVar5 == 0x2d && (0x80000000 < uVar3)))) {
    puVar4 = (undefined4 *)FUN_98030a00();
    *puVar4 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== entry @ 9802e158 ==== */

/* WARNING: Control flow encountered bad instruction data */

void entry(uint param_1)

{
  undefined4 *puVar1;
  int in_r11;
  undefined4 *unaff_r27;
  int unaff_r28;
  char unaff_r29;
  int *unaff_r30;
  int unaff_r31;
  
  if (unaff_r31 == in_r11) {
    *unaff_r30 = unaff_r28;
  }
  if ((((unaff_r28 == *unaff_r30) && (param_1 != 0)) ||
      ((unaff_r29 == '+' && (0x7fffffff < param_1)))) ||
     ((unaff_r29 == '-' && (0x80000000 < param_1)))) {
    puVar1 = (undefined4 *)FUN_98030a00();
    *puVar1 = 0x22;
    if (unaff_r27 != (undefined4 *)0x0) {
      *unaff_r27 = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e1f0 @ 9802e1f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802e1f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined4 local_40 [16];
  
  uVar6 = FUN_9802ea34();
  pbVar2 = (byte *)((ulonglong)uVar6 >> 0x20);
  puVar4 = (undefined4 *)uVar6;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = local_40;
  }
  iVar3 = FUN_9802f520();
  bVar1 = *pbVar2;
  pbVar5 = pbVar2;
  while ((*(ushort *)(iVar3 + (uint)bVar1 * 2) & 8) != 0) {
    iVar3 = FUN_9802f520();
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  if ((*pbVar5 == 0x2d) || (*pbVar5 == 0x2b)) {
    pbVar5 = pbVar5 + 1;
  }
  FUN_9802e320(pbVar5,puVar4,param_3,param_4);
  if (pbVar5 == (byte *)*puVar4) {
    *puVar4 = pbVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e320 @ 9802e320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802e320(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  ushort uVar6;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_9802ea14();
  pbVar1 = (byte *)((ulonglong)uVar11 >> 0x20);
  puVar7 = (undefined4 *)uVar11;
  pbVar9 = pbVar1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar2 = FUN_9800ad10();
    if (iVar2 < 2) {
      iVar2 = FUN_9802f520();
      uVar6 = *(ushort *)(iVar2 + (uint)*pbVar9 * 2) & 8;
    }
    else {
      uVar6 = FUN_98030b18((uint)*pbVar9,8);
    }
    if (uVar6 == 0) break;
    pbVar9 = pbVar9 + 1;
  }
  if ((*pbVar9 == 0x2d) || (*pbVar9 == 0x2b)) {
    pbVar9 = pbVar9 + 1;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) goto LAB_9802e560;
  if (param_3 < 1) {
    if (*pbVar9 == 0x30) {
      if ((pbVar9[1] == 0x78) || (pbVar9[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_9802e440;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar9 == 0x30)) && ((pbVar9[1] == 0x78 || (pbVar9[1] == 0x58))))
  {
LAB_9802e440:
    pbVar9 = pbVar9 + 2;
  }
  bVar8 = *pbVar9;
  pbVar10 = pbVar9;
  while ((char)bVar8 == 0x30) {
    pbVar10 = pbVar10 + 1;
    bVar8 = *pbVar10;
  }
  uVar3 = FUN_9802f390((int)(char)bVar8);
  pbVar4 = FUN_9802f100((byte *)0x91a05630,uVar3,param_3);
  if (pbVar4 != (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pbVar9 != pbVar10) {
    if (-1 < -(int)*(char *)(param_3 + -0x6e5fa9a8)) {
      if (-(int)*(char *)(param_3 + -0x6e5fa9a8) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar5 = (undefined4 *)FUN_98030a00();
      *puVar5 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
    }
    if (puVar7 == (undefined4 *)0x0) {
      halt_baddata();
    }
    *puVar7 = pbVar10;
    halt_baddata();
  }
LAB_9802e560:
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = pbVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e578 @ 9802e578 ==== */

double FUN_9802e578(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  double dVar1;
  
  dVar1 = (double)FUN_9802e5a0(param_1,param_2,param_3,param_4);
  return (double)(float)dVar1;
}


/* ==== FUN_9802e5a0 @ 9802e5a0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802e5a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_9802ea34();
  puVar2 = (undefined4 *)FUN_98030a00();
  uVar3 = *puVar2;
  puVar2 = (undefined4 *)FUN_98030a00();
  *puVar2 = 0;
  FUN_98030c98();
  puVar2 = (undefined4 *)FUN_98030a00();
  *param_4 = *puVar2;
  puVar2 = (undefined4 *)FUN_98030a00();
  bVar1 = param_3 < 0;
  *puVar2 = uVar3;
  iVar4 = param_3;
  if (0 < param_3) {
    iVar4 = 0;
    do {
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar1 = false;
  }
  if (bVar1) {
    iVar4 = -iVar4;
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_9802e5a0 @ 9802e650 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_9802e5a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_9802ea34();
  puVar2 = (undefined4 *)FUN_98030a00();
  uVar3 = *puVar2;
  puVar2 = (undefined4 *)FUN_98030a00();
  *puVar2 = 0;
  FUN_98030c98();
  puVar2 = (undefined4 *)FUN_98030a00();
  *param_4 = *puVar2;
  puVar2 = (undefined4 *)FUN_98030a00();
  bVar1 = param_3 < 0;
  *puVar2 = uVar3;
  iVar4 = param_3;
  if (0 < param_3) {
    iVar4 = 0;
    do {
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar1 = false;
  }
  if (bVar1) {
    iVar4 = -iVar4;
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e660 @ 9802e660 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802e660(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e7ac @ 9802e7ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802e7ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802e928 @ 9802e928 ==== */

void FUN_9802e928(undefined4 *param_1)

{
  FUN_980314c0(*(int *)*param_1);
  return;
}


/* ==== FUN_9802ea00 @ 9802ea00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea04 @ 9802ea04 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea04(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea08 @ 9802ea08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea0c @ 9802ea0c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea10 @ 9802ea10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea14 @ 9802ea14 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea18 @ 9802ea18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea1c @ 9802ea1c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea20 @ 9802ea20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea24 @ 9802ea24 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea28 @ 9802ea28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea2c @ 9802ea2c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea30 @ 9802ea30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea34 @ 9802ea34 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea38 @ 9802ea38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ea3c @ 9802ea3c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ea3c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802eab0 @ 9802eab0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802eab0(undefined4 param_1)

{
  _DAT_91a43920 = param_1;
  return;
}


/* ==== FUN_9802eac0 @ 9802eac0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802eac0(void)

{
  undefined4 in_r0;
  
  if (_DAT_91a43920 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x9802eae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_91a43920)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_9802eaf8 @ 9802eaf8 ==== */

void FUN_9802eaf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802eb98 @ 9802eb98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802eb98(void)

{
  FUN_9802eaf8();
  func_0x9804194c(0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_9802f2a0 @ 9802ebc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_9802f2a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ebd0 @ 9802ebd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ebd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f058 @ 9802f058 ==== */

void FUN_9802f058(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ==== FUN_9802f100 @ 9802f100 ==== */

byte * FUN_9802f100(byte *param_1,uint param_2,int param_3)

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


/* ==== FUN_9802f140 @ 9802f140 ==== */

void FUN_9802f140(int param_1,int param_2,uint param_3)

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
  FUN_9802ebd0();
  return;
}


/* ==== FUN_9802f200 @ 9802f200 ==== */

void FUN_9802f200(uint *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x9802f28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x9802f294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_9802f2a0 @ 9802f2a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f2a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_9802f2a0 @ 9802f300 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_9802f2a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f308 @ 9802f308 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802f308(void)

{
  int iVar1;
  
  iVar1 = FUN_98032288();
  if (iVar1 != 0) {
    FUN_980322a0();
  }
  if ((_DAT_91a42580 & 2) != 0) {
    FUN_9802eaf8();
  }
  FUN_98031288();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f358 @ 9802f358 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802f358(uint param_1,uint param_2)

{
  _DAT_91a42580 = _DAT_91a42580 & ~param_2 | param_1 & param_2;
  return;
}


/* ==== FUN_9802f378 @ 9802f378 ==== */

int FUN_9802f378(int param_1)

{
  if (param_1 < 0x61) {
    return param_1;
  }
  if (0x7a < param_1) {
    return param_1;
  }
  return param_1 + -0x20;
}


/* ==== FUN_9802f390 @ 9802f390 ==== */

int FUN_9802f390(int param_1)

{
  if (param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_9802f3a8 @ 9802f3a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f3a8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_50;
  char *local_4c;
  char *local_48;
  undefined4 local_44;
  
  uVar5 = FUN_9802ea34();
  pcVar3 = (char *)uVar5;
  local_50 = (char *)0x0;
  FUN_9802f200((uint *)&local_4c,0,0x1c);
  if ((pcVar3 == (char *)0x0) || (pcVar4 = pcVar3, param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_98030a00();
    *puVar2 = 0x16;
    FUN_9802eac0();
  }
  else {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_4c = (char *)0x7fffffff;
    local_44 = 0x49;
    if (pcVar4 + (-1 - (int)pcVar3) < (char *)0x80000000) {
      local_4c = pcVar4 + (-1 - (int)pcVar3);
    }
    local_50 = pcVar3;
    local_48 = pcVar3;
    (*(code *)((ulonglong)uVar5 >> 0x20))(&local_50,param_3,param_4,param_5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f470 @ 9802f470 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f470(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f4d0 @ 9802f4d0 ==== */

int FUN_9802f4d0(byte *param_1,byte *param_2,int param_3)

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


/* ==== FUN_9802f520 @ 9802f520 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9802f520(void)

{
  return _DAT_91a42590;
}


/* ==== FUN_9802f530 @ 9802f530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f598 @ 9802f598 ==== */

undefined4 FUN_9802f598(void)

{
  return 0x91a4291c;
}


/* ==== FUN_9802f5a8 @ 9802f5a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9802f5a8(void)

{
  undefined4 uVar1;
  
  _DAT_91a43ca4 = (undefined4 *)FUN_9802f530();
  _DAT_91a43ca8 = _DAT_91a43ca4;
  if (_DAT_91a43ca4 == (undefined4 *)0x0) {
    uVar1 = 0x18;
  }
  else {
    uVar1 = 0;
    *_DAT_91a43ca4 = 0;
  }
  return uVar1;
}


/* ==== FUN_9802f608 @ 9802f608 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802f608(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar2 = FUN_9802ea24();
  FUN_98031010();
  puVar1 = _DAT_91a43ca8;
  puVar7 = _DAT_91a43ca4;
  if (_DAT_91a43ca8 <= _DAT_91a43ca4) {
    iVar5 = (int)_DAT_91a43ca4 - (int)_DAT_91a43ca8;
    uVar6 = iVar5 + 4;
    if (3 < uVar6) {
      uVar3 = FUN_98033a90();
      if (uVar3 < uVar6) {
        uVar6 = uVar3;
        if (0x7ff < uVar3) {
          uVar6 = 0x800;
        }
        if (((uVar6 + uVar3 < uVar3) ||
            (puVar4 = (undefined4 *)FUN_980339a0(puVar1), puVar4 == (undefined4 *)0x0)) &&
           ((uVar3 + 0x10 < uVar3 ||
            (puVar4 = (undefined4 *)FUN_980339a0(puVar1), puVar4 == (undefined4 *)0x0))))
        goto LAB_9802ea74;
        puVar7 = puVar4 + (iVar5 >> 2);
        _DAT_91a43ca8 = puVar4;
      }
      _DAT_91a43ca4 = puVar7 + 1;
      *puVar7 = uVar2;
    }
  }
LAB_9802ea74:
  FUN_9802f6ec();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f6ec @ 9802f6ec ==== */

void FUN_9802f6ec(void)

{
  FUN_98031018();
  return;
}


/* ==== FUN_9802f710 @ 9802f710 ==== */

int FUN_9802f710(void)

{
  int iVar1;
  
  iVar1 = FUN_9802f608();
  return -(uint)(iVar1 == 0);
}


/* ==== FUN_9802f738 @ 9802f738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f768 @ 9802f768 ==== */

undefined4 FUN_9802f768(void)

{
  int iVar1;
  
  iVar1 = FUN_98030dc0();
  return *(undefined4 *)(iVar1 + 0x90);
}


/* ==== FUN_9802f790 @ 9802f790 ==== */

int FUN_9802f790(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) == 0) {
    return param_1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return param_1;
  }
  return *(int *)(*(int *)(param_1 + 4) + 4);
}


/* ==== FUN_9802f7b0 @ 9802f7b0 ==== */

void FUN_9802f7b0(int param_1,int param_2)

{
  FUN_9802f140(param_1,param_2,0xa40);
  return;
}


/* ==== FUN_9802f7b8 @ 9802f7b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f7b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f840 @ 9802f840 ==== */

void FUN_9802f840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802f930 @ 9802f930 ==== */

void FUN_9802f930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9802f9b0 @ 9802f9b0 ==== */

void FUN_9802f9b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9802fa70 @ 9802fa70 ==== */

void FUN_9802fa70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9802fbc8 @ 9802fbc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802fbc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802fc80 @ 9802fc80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802fc80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802fcd8 @ 9802fcd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802fcd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802fdc0 @ 9802fdc0 ==== */

void FUN_9802fdc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9802fe88 @ 9802fe88 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9802fe88(void)

{
  if (_DAT_91a43964 != (code *)0x0) {
    (*_DAT_91a43964)();
  }
  FUN_98034d48(0x19);
  FUN_9802f358(0,1);
  FUN_9802f308();
  return;
}


/* ==== FUN_9802fed8 @ 9802fed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802fed8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ff90 @ 9802ff90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ff90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030070 @ 98030070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980300c8 @ 980300c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980300c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030178 @ 98030178 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98030178(undefined4 param_1)

{
  _DAT_91a43924 = param_1;
  return;
}


/* ==== FUN_98030188 @ 98030188 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_98030188(void)

{
  int iVar1;
  
  if ((_DAT_91a43924 != (code *)0x0) && (iVar1 = (*_DAT_91a43924)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_980301d0 @ 980301d0 ==== */

void FUN_980301d0(undefined4 param_1)

{
  FUN_980354f0(param_1,0,10);
  return;
}


/* ==== FUN_980301e0 @ 980301e0 ==== */

void FUN_980301e0(char *param_1,int param_2,int param_3)

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


/* ==== FUN_98030240 @ 98030240 ==== */

void FUN_98030240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98030418 @ 98030418 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_98030418(void)

{
  return _DAT_91a425f8;
}


/* ==== FUN_980304b8 @ 980304b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980304b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uStack_50;
  uint auStack_4c [19];
  
  uVar2 = 0;
  uVar3 = FUN_9802ea34();
  uStack_50 = 0;
  FUN_9802f200(auStack_4c,0,0x1c);
  if ((int)uVar3 == 0) {
    puVar1 = (undefined4 *)FUN_98030a00();
    *puVar1 = 0x16;
    FUN_9802eac0();
  }
  else {
    auStack_4c[1] = 0;
    uStack_50 = 0;
    auStack_4c[2] = 0x42;
    auStack_4c[0] = 0x7fffffff;
    (*(code *)((ulonglong)uVar3 >> 0x20))(&uStack_50,(int)uVar3,uVar2,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980304d0 @ 980304d0 ==== */

void FUN_980304d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_980305f0 @ 980305f0 ==== */

void FUN_980305f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98030740 @ 98030740 ==== */

void FUN_98030740(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98030750 @ 98030750 ==== */

void FUN_98030750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980308f0 @ 980308f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_980308f0(undefined8 param_1,undefined8 param_2)

{
  uint uStack00000010;
  uint uStack00000018;
  
  uStack00000018 = (uint)((ulonglong)param_2 >> 0x20);
  uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
  return CONCAT44(uStack00000010 & 0x7fffffff | uStack00000018 & 0x80000000,(int)param_1);
}


/* ==== FUN_98030928 @ 98030928 ==== */

int FUN_98030928(undefined8 param_1)

{
  int iVar1;
  ushort uStack00000010;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  iVar1 = (uStack00000010 & 0x7ff0) - 0x7ff0;
  return iVar1 - (((uStack00000010 & 0x7ff0) - 0x7ff1) + (uint)(iVar1 == 0));
}


/* ==== FUN_98030948 @ 98030948 ==== */

undefined4 FUN_98030948(ulonglong param_1)

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


/* ==== FUN_98030990 @ 98030990 ==== */

undefined4 FUN_98030990(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (uint *)0x91a42600;
  do {
    if (param_1 == *puVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x6e5bd9fc);
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


/* ==== FUN_98030a00 @ 98030a00 ==== */

int FUN_98030a00(void)

{
  int iVar1;
  
  iVar1 = FUN_98030ce8();
  if (iVar1 == 0) {
    iVar1 = -0x6e5bd898;
  }
  else {
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}


/* ==== FUN_98030a38 @ 98030a38 ==== */

int FUN_98030a38(void)

{
  int iVar1;
  
  iVar1 = FUN_98030ce8();
  if (iVar1 == 0) {
    iVar1 = -0x6e5bd894;
  }
  else {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}


/* ==== FUN_98030a70 @ 98030a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030ae0 @ 98030ae0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_98030ae0(int param_1,ushort param_2)

{
  if ((-2 < param_1) && (param_1 < 0x100)) {
    return *(ushort *)(*(int *)(_DAT_91a429e8 + 200) + param_1 * 2) & param_2;
  }
  return 0;
}


/* ==== FUN_98030b18 @ 98030b18 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_98030b18(int param_1,ushort param_2)

{
  return *(ushort *)(param_1 * 2 + _DAT_91a429d8) & param_2;
}


/* ==== FUN_98030b38 @ 98030b38 ==== */

void FUN_98030b38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98030c98 @ 98030c98 ==== */

void FUN_98030c98(void)

{
  FUN_98030b38();
  return;
}


/* ==== FUN_98030ca0 @ 98030ca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030ca0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030ce8 @ 98030ce8 ==== */

void FUN_98030ce8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98030dc0 @ 98030dc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030dc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030e00 @ 98030e00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030e00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030ec0 @ 98030ec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030ec0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030f30 @ 98030f30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030f30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031008 @ 98031008 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031010 @ 98031010 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031018 @ 98031018 ==== */

void FUN_98031018(void)

{
  FUN_98034f38();
  return;
}


/* ==== FUN_98031020 @ 98031020 ==== */

void FUN_98031020(void)

{
  FUN_98030178(0);
  FUN_9802eab0(0);
  FUN_98034dc0(0);
  FUN_98034ce8();
  return;
}


/* ==== FUN_98031060 @ 98031060 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031060(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980310c0 @ 980310c0 ==== */

void FUN_980310c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98031244 @ 98031244 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031244(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031288 @ 98031288 ==== */

void FUN_98031288(void)

{
  FUN_980310c0();
  return;
}


/* ==== FUN_98031298 @ 98031298 ==== */

void FUN_98031298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_980312a8 @ 980312a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980312a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980312d8 @ 980312d8 ==== */

void FUN_980312d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980314c0 @ 980314c0 ==== */

undefined4 FUN_980314c0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_980312d8();
    return uVar1;
  }
  return 0;
}


/* ==== FUN_980314e0 @ 980314e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980314e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031650 @ 98031650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980316c8 @ 980316c8 ==== */

void FUN_980316c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98031918 @ 98031918 ==== */

void FUN_98031918(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98031a08 @ 98031a08 ==== */

void FUN_98031a08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98031e18 @ 98031e18 ==== */

void FUN_98031e18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98032278 @ 98032278 ==== */

void FUN_98032278(void)

{
  uRam91a43ca0 = 0;
  return;
}


/* ==== FUN_98032288 @ 98032288 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_98032288(void)

{
  return _DAT_91a43954;
}


/* ==== FUN_980322a0 @ 980322a0 ==== */

void FUN_980322a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98032548 @ 98032548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032588 @ 98032588 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_98032588(int param_1)

{
  return *(ushort *)(param_1 * 2 + _DAT_91a429d8) & 4;
}


/* ==== FUN_980325a8 @ 980325a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_980325a8(int param_1)

{
  return *(ushort *)(param_1 * 2 + _DAT_91a429d8) & 0x80;
}


/* ==== FUN_980325c8 @ 980325c8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_980325c8(int param_1)

{
  return *(ushort *)(param_1 * 2 + _DAT_91a429d8) & 8;
}


/* ==== FUN_980325e8 @ 980325e8 ==== */

void FUN_980325e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98032688 @ 98032688 ==== */

void FUN_98032688(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_980338d8 @ 980338d8 ==== */

void FUN_980338d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980339a0 @ 980339a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980339a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9802ea34();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  uVar5 = (uint)uVar6;
  if (iVar1 == 0) {
    FUN_9802fdc0();
  }
  else if (uVar5 == 0) {
    FUN_9802f2a0();
  }
  else {
    do {
      if (0xfffff000 < uVar5) {
        FUN_98030188(uVar5);
        puVar4 = (undefined4 *)FUN_98030a00();
        *puVar4 = 0xc;
        halt_baddata();
      }
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      uVar2 = FUN_98040cb0();
      iVar3 = FUN_980403d0(uVar2,0,iVar1,uVar5);
      if (iVar3 != 0) {
        halt_baddata();
      }
      if (iRam91a43960 == 0) {
        puVar4 = (undefined4 *)FUN_98030a00();
        thunk_FUN_9800e3b0();
        uVar2 = FUN_98030990();
        *puVar4 = uVar2;
        halt_baddata();
      }
      iVar3 = FUN_98030188(uVar5);
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)FUN_98030a00();
    thunk_FUN_9800e3b0();
    uVar2 = FUN_98030990();
    *puVar4 = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033a90 @ 98033a90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033a90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033ae8 @ 98033ae8 ==== */

void FUN_98033ae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98033ba0 @ 98033ba0 ==== */

int FUN_98033ba0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)(param_3 + 0xc) != 0) &&
      (piVar1 = *(int **)(*(int *)(param_2 + 8) + 4), piVar1 != (int *)0x0)) &&
     (iVar2 = *piVar1, iVar2 != -2)) {
    return iVar2;
  }
  iVar2 = FUN_98033ae8();
  return iVar2;
}


/* ==== FUN_98033be0 @ 98033be0 ==== */

void FUN_98033be0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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


/* ==== FUN_98033c00 @ 98033c00 ==== */

undefined4 FUN_98033c00(uint *param_1,uint *param_2,uint *param_3)

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


/* ==== FUN_98033cb0 @ 98033cb0 ==== */

undefined4 FUN_98033cb0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if ((iVar1 != -0x1fbcbcae) && (iVar1 != -0x1fbcb0b3)) {
    if (iVar1 != -0x1f928c9d) {
      return 0;
    }
    iVar1 = FUN_98030dc0();
    *(undefined4 *)(iVar1 + 0x84) = 0;
    FUN_98034c38();
  }
  iVar1 = FUN_98030dc0();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = FUN_98030dc0();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return 0;
}


/* ==== FUN_98033d40 @ 98033d40 ==== */

void FUN_98033d40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98033ebc @ 98033ebc ==== */

void FUN_98033ebc(void)

{
  int iVar1;
  
  iVar1 = FUN_98030dc0();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = FUN_98030dc0();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return;
}


/* ==== FUN_98033efc @ 98033efc ==== */

void FUN_98033efc(undefined4 *param_1)

{
  FUN_98033cb0(param_1);
  return;
}


/* ==== FUN_98033f20 @ 98033f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_98033f20(int param_1,int param_2,undefined4 param_3)

{
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    return 1;
  }
  *(undefined4 *)(param_2 + 0xc) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033f68 @ 98033f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033f68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034010 @ 98034010 ==== */

void FUN_98034010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_980340e0 @ 980340e0 ==== */

void FUN_980340e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98034370 @ 98034370 ==== */

void FUN_98034370(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980344a0 @ 980344a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980344a0(void)

{
  int iVar1;
  int iVar2;
  int extraout_r4;
  undefined4 in_r6;
  int in_r7;
  int in_r9;
  int in_r10;
  undefined4 local_ac0;
  int local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined1 auStack_aa0 [2720];
  
  FUN_9802ea1c();
  FUN_9802f790(extraout_r4,in_r7);
  iVar1 = FUN_9802f7b8();
  if (iVar1 == 0) {
    local_ab8 = 0;
    *(undefined4 **)(extraout_r4 + 4) = &local_ac0;
    local_ac0 = 0xfffffffe;
    local_ab4 = 0;
    local_abc = extraout_r4;
  }
  if (in_r9 != 0) {
    FUN_98034370();
  }
  iVar2 = FUN_98030dc0();
  *(undefined1 **)(iVar2 + 0x8c) = auStack_aa0;
  FUN_9802fbc8();
  FUN_98038900();
  FUN_98033d40();
  FUN_98033be0(extraout_r4,in_r6,in_r7,*(int *)(in_r10 + 4) + 1);
  FUN_98030dc0();
  iVar2 = FUN_980389ac();
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      *(undefined4 *)(extraout_r4 + 4) = 0;
    }
    FUN_9803881c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980345e8 @ 980345e8 ==== */

void FUN_980345e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98034760 @ 98034760 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034760(void)

{
  int iVar1;
  byte bVar4;
  int iVar2;
  int iVar3;
  int extraout_r4;
  uint *puVar5;
  int in_r6;
  int *piVar6;
  int in_r7;
  uint *puVar7;
  uint in_r8;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r13;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  uint local_80;
  uint local_7c;
  
  uVar14 = FUN_9802ea10();
  piVar13 = (int *)((ulonglong)uVar14 >> 0x20);
  iVar2 = in_r7;
  iVar12 = in_r7;
  uVar8 = in_r8;
  iVar1 = FUN_98033ba0((int)uVar14,in_r6,in_r7);
  if ((iVar1 < -1) || (*(int *)(in_r7 + 4) <= iVar1)) {
    FUN_98034c98();
  }
  if (*piVar13 == -0x1f928c9d) {
    uVar8 = 0x19930000;
    if ((piVar13[4] == 3) &&
       ((((iVar9 = piVar13[5], iVar9 == 0x19930520 || (iVar9 == 0x19930521)) ||
         (iVar9 == 0x19930522)) && (piVar13[7] == 0)))) {
      iVar9 = FUN_98030dc0();
      if (*(int *)(iVar9 + 0x7c) == 0) {
        halt_baddata();
      }
      iVar9 = FUN_98030dc0();
      piVar13 = *(int **)(iVar9 + 0x7c);
      FUN_98030dc0();
      bVar4 = FUN_980388e0((int)piVar13);
      if (bVar4 == 0) {
        FUN_98034c98();
      }
      if (*piVar13 != -0x1f928c9d) goto LAB_980349d0;
      if ((piVar13[4] == 3) &&
         ((((iVar9 = piVar13[5], iVar9 == 0x19930520 || (iVar9 == 0x19930521)) ||
           (iVar9 == 0x19930522)) && (piVar13[7] == 0)))) {
        FUN_98034c98();
      }
    }
    if (((*piVar13 == -0x1f928c9d) && (piVar13[4] == 3)) &&
       ((iVar9 = piVar13[5], iVar9 == 0x19930520 || ((iVar9 == 0x19930521 || (iVar9 == 0x19930522)))
        ))) {
      if (*(int *)(in_r7 + 0xc) == 0) {
        halt_baddata();
      }
      iVar2 = FUN_9802fa70();
      if (local_7c <= local_80) {
        halt_baddata();
      }
      puVar11 = (undefined4 *)(iVar2 + 0x10);
      do {
        if (((int)puVar11[-4] <= iVar1) && (iVar1 <= (int)puVar11[-3])) {
          iVar2 = puVar11[-1];
          puVar7 = (uint *)*puVar11;
          if (0 < iVar2) {
            piVar10 = *(int **)(piVar13[7] + 0xc);
            iVar12 = *piVar10;
            do {
              if (0 < iVar12) {
                puVar5 = (uint *)piVar13[7];
                iVar9 = iVar12;
                piVar6 = piVar10;
                do {
                  piVar6 = piVar6 + 1;
                  iVar3 = FUN_98033c00(puVar7,(uint *)*piVar6,puVar5);
                  if (iVar3 != 0) {
                    FUN_980344a0();
                    goto LAB_980349b0;
                  }
                  iVar9 = iVar9 + -1;
                } while (0 < iVar9);
              }
              iVar2 = iVar2 + -1;
              puVar7 = puVar7 + 4;
            } while (0 < iVar2);
          }
        }
LAB_980349b0:
        local_80 = local_80 + 1;
        puVar11 = puVar11 + 5;
        if (local_7c <= local_80) {
          halt_baddata();
        }
      } while( true );
    }
  }
LAB_980349d0:
  if (*(int *)(in_r7 + 0xc) != 0) {
    if ((in_r8 & 0xff) != 0) {
      FUN_98034c38();
      *(undefined4 *)(extraout_r4 + 0x113c) = unaff_r13;
      uRam00007bc8 = unaff_r13;
      uVar14 = FUN_9802ea34();
      piVar13 = (int *)((ulonglong)uVar14 >> 0x20);
      if ((piVar13[1] & 0x66U) == 0) {
        if (*(int *)(iVar12 + 0xc) != 0) {
          if ((((*piVar13 == -0x1f928c9d) && (2 < (uint)piVar13[4])) &&
              (0x19930522 < (uint)piVar13[5])) && (*(code **)(piVar13[7] + 8) != (code *)0x0)) {
            (**(code **)(piVar13[7] + 8))(piVar13,(int)uVar14,iVar2,in_r6,iVar12);
          }
          else {
            FUN_98034760();
          }
        }
      }
      else if ((*(int *)(iVar12 + 4) != 0) && (uVar8 == 0)) {
        if (((piVar13[1] & 0x20U) != 0) && (iVar1 = FUN_9802f768(), iVar1 != 0)) {
          iVar12 = FUN_98030dc0();
          if (*(int *)(iVar12 + 0x8c) == 0) {
            FUN_98034c98();
          }
          iVar12 = FUN_98030dc0();
          FUN_9802f7b0(*(int *)(iVar12 + 0x8c),iVar2);
          FUN_98030dc0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        FUN_9802f840();
        if (((*(int *)(iVar12 + 0xc) != 0) &&
            (iVar2 = *(int *)(*(int *)(in_r6 + 8) + 4), iVar2 != 0)) &&
           (puVar11 = *(undefined4 **)(iVar2 + 8), puVar11 != (undefined4 *)0x0)) {
          FUN_9802fcd8();
          iVar12 = FUN_9802fc80();
          if ((iVar12 != 0) && ((code *)puVar11[1] != (code *)0x0)) {
            (*(code *)puVar11[1])(*puVar11);
            *puVar11 = 0;
          }
          *(undefined4 *)(iVar2 + 8) = 0;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_980345e8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034c38 @ 98034c38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034c38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034c98 @ 98034c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034c98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034ce8 @ 98034ce8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98034ce8(void)

{
  _DAT_91a4395c = 0x91a34438;
  return;
}


/* ==== FUN_98034d00 @ 98034d00 ==== */

undefined4 FUN_98034d00(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)&DAT_91a06b90;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x6e5f946c);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x16);
  return 0;
}


/* ==== FUN_98034d48 @ 98034d48 ==== */

void FUN_98034d48(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_98034d00(param_1);
  if (iVar1 != 0) {
    FUN_98040dc8();
  }
  return;
}


/* ==== FUN_98034d78 @ 98034d78 ==== */

void FUN_98034d78(void)

{
  int iVar1;
  
  iVar1 = FUN_98034d00(0xfc);
  if (iVar1 != 0) {
    FUN_98040dc8();
  }
  iVar1 = FUN_98034d00(0xff);
  if (iVar1 != 0) {
    FUN_98040dc8();
  }
  return;
}


/* ==== FUN_98034dc0 @ 98034dc0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98034dc0(undefined4 param_1)

{
  _DAT_91a43964 = param_1;
  return;
}


/* ==== FUN_98034dd8 @ 98034dd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034e80 @ 98034e80 ==== */

void FUN_98034e80(void)

{
  FUN_98034f38();
  return;
}


/* ==== FUN_98034ea8 @ 98034ea8 ==== */

undefined4 FUN_98034ea8(void)

{
  return 0x91a42aa0;
}


/* ==== FUN_98034eb8 @ 98034eb8 ==== */

undefined4 FUN_98034eb8(void)

{
  return 0x91a429f0;
}


/* ==== FUN_98034ec8 @ 98034ec8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034ec8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034f38 @ 98034f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034f58 @ 98034f58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034f58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034ff0 @ 98034ff0 ==== */

void FUN_98034ff0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98035078 @ 98035078 ==== */

void FUN_98035078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98035188 @ 98035188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980351b8 @ 980351b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980351b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035218 @ 98035218 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98035218(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

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
  
  uVar13 = FUN_9802ea24();
  pbVar3 = (byte *)((ulonglong)uVar13 >> 0x20);
  puVar4 = (undefined4 *)uVar13;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = pbVar3;
  }
  if ((pbVar3 == (byte *)0x0) || ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3))))))
  {
    puVar4 = (undefined4 *)FUN_98030a00();
    *puVar4 = 0x16;
    FUN_9802eac0();
    halt_baddata();
  }
  bVar1 = *pbVar3;
  uVar10 = 0;
  iVar7 = _DAT_91a429e8;
  pbVar2 = pbVar3;
  while( true ) {
    uVar12 = (uint)bVar1;
    pbVar11 = pbVar2 + 1;
    if (*(int *)(iVar7 + 0xac) < 2) {
      uVar6 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200)) & 8;
    }
    else {
      uVar6 = FUN_98030ae0((uint)bVar1,8);
      iVar7 = _DAT_91a429e8;
    }
    if (uVar6 == 0) break;
    bVar1 = *pbVar11;
    pbVar2 = pbVar11;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_980352f0:
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar2 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_980352f0;
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
      goto LAB_98035388;
    }
    if ((*pbVar11 != 0x78) && (*pbVar11 != 0x58)) {
      param_3 = 8;
      goto LAB_98035388;
    }
    param_3 = 0x10;
  }
  else if (param_3 != 0x10) goto LAB_98035388;
  if (((char)uVar12 == '0') && ((*pbVar11 == 0x78 || (*pbVar11 == 0x58)))) {
    uVar12 = (uint)pbVar11[1];
    pbVar11 = pbVar11 + 2;
  }
LAB_98035388:
  trapWord(6,param_3,0);
  do {
    uVar6 = *(ushort *)(uVar12 * 2 + *(int *)(iVar7 + 200));
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 0x103) == 0) {
LAB_9803541c:
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
          puVar5 = (undefined4 *)FUN_98030a00();
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
    if (param_3 <= uVar12) goto LAB_9803541c;
    uVar9 = param_4 | 8;
    if ((uVar10 < 0xffffffff / param_3) ||
       ((uVar10 == 0xffffffff / param_3 &&
        (trapWord(6,param_3,0), uVar12 <= -((0xffffffff / param_3) * param_3) - 1)))) {
      uVar10 = uVar10 * param_3 + uVar12;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar9 = param_4;
      if (puVar4 == (undefined4 *)0x0) goto LAB_9803541c;
    }
    uVar12 = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    param_4 = uVar9;
  } while( true );
}


/* ==== FUN_980354f0 @ 980354f0 ==== */

void FUN_980354f0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FUN_98035218(param_1,param_2,param_3,0);
  return;
}


/* ==== FUN_980354f8 @ 980354f8 ==== */

undefined8 FUN_980354f8(undefined8 param_1,undefined4 param_2,short param_3)

{
  ushort uStack00000010;
  undefined8 uStack_10;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uStack_10 = CONCAT26((param_3 + 0x3fe) * 0x10 | uStack00000010 & 0x800f,(int6)param_1);
  return uStack_10;
}


/* ==== FUN_98035520 @ 98035520 ==== */

undefined4 FUN_98035520(ulonglong param_1)

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


/* ==== FUN_980355a8 @ 980355a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_980355a8(double param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ushort uStack00000010;
  undefined6 uStack00000012;
  double local_10;
  
  if (param_1 == _DAT_91a04d08) {
    iVar4 = 0;
  }
  else {
    uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
    if ((((ulonglong)param_1 & 0x7ff0000000000000) == 0) &&
       ((uStack00000012._2_4_ = SUB84(param_1,0), ((ulonglong)param_1 & 0xfffff00000000) != 0 ||
        (uStack00000012._2_4_ != 0)))) {
      iVar4 = -0x3fd;
      bVar5 = param_1 < _DAT_91a04d08;
      uVar1 = uStack00000010;
      _uStack00000010 = param_1;
      if (((ulonglong)param_1 & 0x10000000000000) == 0) {
        do {
          uVar3 = (int)((ulonglong)param_1 >> 0x20) << 1;
          if (((ulonglong)param_1 & 0x80000000) != 0) {
            uVar3 = uVar3 | 1;
          }
          uStack00000010 = (ushort)(uVar3 >> 0x10);
          uVar1 = uStack00000010;
          iVar2 = SUB84(param_1,0) << 1;
          param_1 = (double)CONCAT44(uVar3,iVar2);
          iVar4 = iVar4 + -1;
        } while ((uVar3 & 0x100000) == 0);
        _uStack00000010 = (double)CONCAT44(uVar3,iVar2);
      }
      _uStack00000010 = (double)(CONCAT26(uVar1,uStack00000012) & 0xffefffffffffffff);
      param_1 = _uStack00000010;
      if (bVar5) {
        _uStack00000010 =
             (double)(CONCAT26(uVar1,uStack00000012) & 0xffefffffffffffff | 0x8000000000000000);
        param_1 = _uStack00000010;
      }
    }
    else {
      iVar4 = ((uStack00000010 & 0x7ff0) >> 4) - 0x3fe;
    }
    local_10 = (double)((ulonglong)param_1 & 0x800fffffffffffff | 0x3fe0000000000000);
    param_1 = local_10;
  }
  *param_3 = iVar4;
  return param_1;
}


/* ==== FUN_980356a0 @ 980356a0 ==== */

void FUN_980356a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_98035aa8 @ 98035aa8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98035aa8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  undefined8 local_40;
  
  uVar8 = FUN_9802ea34();
  dVar3 = _DAT_91a04d08;
  pdVar4 = (double *)uVar8;
  if (((uVar8 & 0x800000000) == 0) || ((param_3 & 0x80) == 0)) {
    if (((uVar8 & 0x400000000) == 0) || ((param_3 & 0x10) == 0)) {
      if (((uVar8 & 0x100000000) == 0) || ((param_3 & 0x40) == 0)) {
        if (((uVar8 & 0x200000000) != 0) && ((param_3 & 0x20) != 0)) {
          bVar1 = (uVar8 & 0x1000000000) != 0;
          if (*pdVar4 == _DAT_91a04d08) {
            bVar1 = true;
          }
          else {
            dVar6 = FUN_980355a8(*pdVar4,(int)(uVar8 >> 0x20),(int *)&local_40);
            iVar5 = local_40._0_4_ + -0x600;
            if (iVar5 < -0x432) {
              bVar1 = true;
              dVar7 = dVar6 * dVar3;
              local_40 = dVar6;
            }
            else {
              local_40 = (double)((ulonglong)dVar6 & 0xfffffffffffff | 0x10000000000000);
              if (iVar5 < -0x3fd) {
                iVar5 = -0x3fd - iVar5;
                local_40._4_4_ = (uint)((ulonglong)dVar6 & 0xfffffffffffff);
                do {
                  if (((local_40._4_4_ & 1) != 0) && (!bVar1)) {
                    bVar1 = true;
                  }
                  local_40._4_4_ = local_40._4_4_ >> 1;
                  if ((local_40._0_4_ & 1) != 0) {
                    local_40._4_4_ = local_40._4_4_ | 0x80000000;
                  }
                  local_40._0_4_ = local_40._0_4_ >> 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              dVar7 = local_40;
              if (dVar6 < dVar3) {
                dVar7 = -local_40;
              }
            }
            *pdVar4 = dVar7;
          }
          if (bVar1) {
            FUN_980361c4(0x8000000);
          }
        }
      }
      else {
        FUN_980361c4(0x10000000);
        uVar2 = param_3 & 3;
        dVar3 = _DAT_91a42bc8;
        dVar6 = _DAT_91a42bc8;
        if (uVar2 == 0) {
          dVar7 = *pdVar4;
        }
        else if (uVar2 == 1) {
          dVar7 = *pdVar4;
          dVar3 = _DAT_91a42bd8;
          dVar6 = _DAT_91a42bd8;
        }
        else if (uVar2 < 3) {
          dVar7 = *pdVar4;
          dVar3 = _DAT_91a42bd8;
        }
        else {
          if (uVar2 != 3) goto LAB_98035ccc;
          dVar7 = *pdVar4;
          dVar6 = _DAT_91a42bd8;
        }
        if (dVar7 <= _DAT_91a04d08) {
          dVar6 = -dVar3;
        }
        *pdVar4 = dVar6;
      }
    }
    else {
      FUN_980361c4(0x4000000);
    }
  }
  else {
    FUN_980361c4(0x20000000);
  }
LAB_98035ccc:
  if (((uVar8 & 0x1000000000) != 0) && ((param_3 & 8) != 0)) {
    FUN_980361c4(0x2000000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035d00 @ 98035d00 ==== */

void FUN_98035d00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_98030a00();
    uVar2 = 0x21;
  }
  else {
    if (param_1 < 2) {
      return;
    }
    if (3 < param_1) {
      return;
    }
    puVar1 = (undefined4 *)FUN_98030a00();
    uVar2 = 0x22;
  }
  *puVar1 = uVar2;
  return;
}


/* ==== FUN_98035d48 @ 98035d48 ==== */

int FUN_98035d48(uint param_1)

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


/* ==== FUN_98035d90 @ 98035d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035e98 @ 98035e98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035e98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035f20 @ 98035f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035f20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035fa0 @ 98035fa0 ==== */

void FUN_98035fa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98036078 @ 98036078 ==== */

void FUN_98036078(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98036160 @ 98036160 ==== */

uint FUN_98036160(void)

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


/* ==== FUN_98036190 @ 98036190 ==== */

uint FUN_98036190(void)

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


/* ==== FUN_980361c4 @ 980361c4 ==== */

ulonglong FUN_980361c4(uint param_1)

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
  undefined8 local_8;
  
  local_8._4_4_ =
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
  local_8 = (ulonglong)CONCAT14(in_fp_drn,param_1 | local_8._4_4_);
  return local_8;
}


/* ==== FUN_98036208 @ 98036208 ==== */

void FUN_98036208(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_980363e0 @ 980363e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980363e0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_r4;
  undefined4 uVar3;
  int iVar4;
  
  FUN_9802ea34();
  puVar1 = (undefined4 *)FUN_98030a00();
  uVar3 = *puVar1;
  if (((*(uint *)(param_3 + 0xc) & 0x40) == 0) || (*(int *)(param_3 + 8) != 0)) {
    puVar1 = (undefined4 *)FUN_98030a00();
    *puVar1 = 0;
    iVar4 = extraout_r4;
    while (0 < iVar4) {
      iVar4 = iVar4 + -1;
      FUN_98036fe0();
      if (*param_4 == -1) {
        piVar2 = (int *)FUN_98030a00();
        if (*piVar2 != 0x2a) break;
        FUN_98036fe0();
      }
    }
    piVar2 = (int *)FUN_98030a00();
    if (*piVar2 == 0) {
      puVar1 = (undefined4 *)FUN_98030a00();
      *puVar1 = uVar3;
    }
  }
  else {
    *param_4 = *param_4 + extraout_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980364b0 @ 980364b0 ==== */

void FUN_980364b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_98036fe0 @ 98036fe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98036fe0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037bc0 @ 98037bc0 ==== */

double FUN_98037bc0(double param_1)

{
  if ((param_1 != dRam91a07270) && (ABS(param_1) < dRam91a07278)) {
    if (param_1 < dRam91a07270) {
      param_1 = (param_1 - dRam91a07278) + dRam91a07278;
    }
    else {
      param_1 = (param_1 + dRam91a07278) - dRam91a07278;
    }
  }
  return param_1;
}


/* ==== FUN_98037c10 @ 98037c10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037c10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_r4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  FUN_9802ea34();
  uVar1 = FUN_9803a440(auStack_40,auStack_50,extraout_r4,0,0,0,0,param_3);
  if ((uVar1 & 4) == 0) {
    FUN_98039610();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037ce0 @ 98037ce0 ==== */

byte * FUN_98037ce0(byte *param_1,uint param_2)

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


/* ==== FUN_98037d38 @ 98037d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037de0 @ 98037de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037e88 @ 98037e88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037e88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037fe8 @ 98037fe8 ==== */

void FUN_98037fe8(ushort *param_1,uint *param_2)

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


/* ==== FUN_980380c8 @ 980380c8 ==== */

void FUN_980380c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98038170 @ 98038170 ==== */

void FUN_98038170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98038208 @ 98038208 ==== */

void FUN_98038208(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_980383b8 @ 980383b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980383b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038560 @ 98038560 ==== */

bool FUN_98038560(void)

{
  return (uRam91a432f8 | 1) == uRam91a43afc;
}


/* ==== FUN_98038588 @ 98038588 ==== */

undefined4 FUN_98038588(ushort *param_1,byte *param_2,int param_3)

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


/* ==== FUN_980385d0 @ 980385d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_980385d0(uint param_1)

{
  return *(ushort *)((param_1 & 0xff) * 2 + *(int *)(_DAT_91a429e8 + 200)) & 0x8000;
}


/* ==== FUN_98038750 @ 98038750 ==== */

undefined4 FUN_98038750(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_98030a00();
    *puVar1 = 0x16;
    FUN_9802eac0();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_980387c0 @ 980387c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980387c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803881c @ 9803881c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803881c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980388e0 @ 980388e0 ==== */

byte FUN_980388e0(int param_1)

{
  return -(param_1 != 0) & 1;
}


/* ==== FUN_98038900 @ 98038900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980389ac @ 980389ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980389ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038a28 @ 98038a28 ==== */

uint FUN_98038a28(uint param_1)

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


/* ==== FUN_98038aa8 @ 98038aa8 ==== */

void FUN_98038aa8(void)

{
  FUN_98036160(0,0xfff80700);
  FUN_98038a28();
  return;
}


/* ==== FUN_98038ad8 @ 98038ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038ad8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038ba8 @ 98038ba8 ==== */

void FUN_98038ba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_98038cf0 @ 98038cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038cf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038d28 @ 98038d28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038d28(void)

{
  FUN_9802ea1c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038f70 @ 98038f70 ==== */

void FUN_98038f70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_980390b4 @ 980390b4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980390b4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980390f0 @ 980390f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980390f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039178 @ 98039178 ==== */

undefined4 FUN_98039178(void)

{
  return 0x91a42f48;
}


/* ==== FUN_980392f0 @ 980392f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980392f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039360 @ 98039360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98039360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980393b0 @ 980393b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980393b0(uint param_1)

{
  if ((0x91a42f47 < param_1) && (param_1 < 0x91a431a9)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980393f0 @ 980393f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980393f0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039500 @ 98039500 ==== */

void FUN_98039500(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_98039608 @ 98039608 ==== */

undefined4 FUN_98039608(undefined4 *param_1,uint *param_2,uint param_3,ushort param_4)

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
      puVar1 = (undefined4 *)FUN_98030a00();
      *puVar1 = 0x16;
      FUN_9802eac0();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
        FUN_9802f200(param_2,0,param_3);
      }
      puVar1 = (undefined4 *)FUN_98030a00();
      *puVar1 = 0x2a;
      puVar1 = (undefined4 *)FUN_98030a00();
      return *puVar1;
    }
    if (param_2 != (uint *)0x0) {
      if (param_3 == 0) {
        puVar1 = (undefined4 *)FUN_98030a00();
        *puVar1 = 0x22;
        FUN_9802eac0();
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


/* ==== FUN_98039610 @ 98039610 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98039610(void)

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
  
  uVar18 = FUN_9802ea14();
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
    uVar13 = _DAT_91a431d0 - 1;
    iVar5 = (int)_DAT_91a431d0 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)_DAT_91a431d0 < 0 && (_DAT_91a431d0 & 0x1f) != 0);
    local_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (_DAT_91a431d0 +
                    (iVar5 + (uint)((int)_DAT_91a431d0 < 0 && (_DAT_91a431d0 & 0x1f) != 0)) * -0x20)
    ;
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_98039758;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_98039758:
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
    if (iVar16 < (int)(_DAT_91a431cc - _DAT_91a431d0)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (_DAT_91a431cc < iVar16) {
        iVar15 = (int)_DAT_91a431d4 >> 5;
        if (iVar16 < _DAT_91a431c8) {
          iVar5 = iVar15 + (uint)((int)_DAT_91a431d4 < 0 && (_DAT_91a431d4 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = _DAT_91a431dc + iVar16;
          uVar13 = _DAT_91a431d4 +
                   (iVar15 + (uint)((int)_DAT_91a431d4 < 0 && (_DAT_91a431d4 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)_DAT_91a431d4 < 0 && (_DAT_91a431d4 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = _DAT_91a431d4 +
                   (iVar15 + (uint)((int)_DAT_91a431d4 < 0 && (_DAT_91a431d4 & 0x1f) != 0)) * -0x20;
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
          iVar4 = _DAT_91a431dc + _DAT_91a431c8;
        }
      }
      else {
        uVar14 = _DAT_91a431cc - iVar15;
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
        iVar4 = iVar5 + (uint)((int)_DAT_91a431d0 < 0 && (_DAT_91a431d0 & 0x1f) != 0);
        uVar9 = 0x1f - (_DAT_91a431d0 +
                       (iVar5 + (uint)((int)_DAT_91a431d0 < 0 && (_DAT_91a431d0 & 0x1f) != 0)) *
                       -0x20);
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_980399c4;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_980399c4:
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
        uVar13 = _DAT_91a431d4 + 1;
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
  uVar9 = 0x1f - _DAT_91a431d4;
  if (_DAT_91a431d8 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (_DAT_91a431d8 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039d28 @ 98039d28 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_98039d28(void)

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
  
  uVar18 = FUN_9802ea14();
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
    uVar13 = uRam91a431e8 - 1;
    iVar5 = (int)uRam91a431e8 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam91a431e8 < 0 && (uRam91a431e8 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam91a431e8 +
                    (iVar5 + (uint)((int)uRam91a431e8 < 0 && (uRam91a431e8 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_98039e70;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_98039e70:
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
    if (iVar16 < (int)(iRam91a431e4 - uRam91a431e8)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam91a431e4 < iVar16) {
        iVar15 = (int)uRam91a431ec >> 5;
        if (iVar16 < iRam91a431e0) {
          iVar5 = iVar15 + (uint)((int)uRam91a431ec < 0 && (uRam91a431ec & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam91a431f4 + iVar16;
          uVar13 = uRam91a431ec +
                   (iVar15 + (uint)((int)uRam91a431ec < 0 && (uRam91a431ec & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam91a431ec < 0 && (uRam91a431ec & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam91a431ec +
                   (iVar15 + (uint)((int)uRam91a431ec < 0 && (uRam91a431ec & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam91a431f4 + iRam91a431e0;
        }
      }
      else {
        uVar14 = iRam91a431e4 - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam91a431e8 < 0 && (uRam91a431e8 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam91a431e8 +
                       (iVar5 + (uint)((int)uRam91a431e8 < 0 && (uRam91a431e8 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_9803a0dc;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_9803a0dc:
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
        uVar13 = uRam91a431ec + 1;
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
  uVar9 = 0x1f - uRam91a431ec;
  if (iRam91a431f0 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam91a431f0 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803a440 @ 9803a440 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9803a670) */
/* WARNING: Removing unreachable block (ram,0x9803a680) */
/* WARNING: Removing unreachable block (ram,0x9803a688) */
/* WARNING: Removing unreachable block (ram,0x9803a65c) */
/* WARNING: Removing unreachable block (ram,0x9803ad34) */
/* WARNING: Removing unreachable block (ram,0x9803a878) */
/* WARNING: Removing unreachable block (ram,0x9803a668) */
/* WARNING: Removing unreachable block (ram,0x9803a694) */
/* WARNING: Removing unreachable block (ram,0x9803ad20) */
/* WARNING: Removing unreachable block (ram,0x9803a69c) */
/* WARNING: Removing unreachable block (ram,0x9803a900) */
/* WARNING: Removing unreachable block (ram,0x9803a8f4) */
/* WARNING: Removing unreachable block (ram,0x9803a908) */
/* WARNING: Removing unreachable block (ram,0x9803a920) */
/* WARNING: Removing unreachable block (ram,0x9803a924) */
/* WARNING: Removing unreachable block (ram,0x9803a930) */
/* WARNING: Removing unreachable block (ram,0x9803a934) */
/* WARNING: Removing unreachable block (ram,0x9803a93c) */
/* WARNING: Removing unreachable block (ram,0x9803a940) */
/* WARNING: Removing unreachable block (ram,0x9803ad4c) */
/* WARNING: Removing unreachable block (ram,0x9803a948) */
/* WARNING: Removing unreachable block (ram,0x9803ad64) */
/* WARNING: Removing unreachable block (ram,0x9803a950) */
/* WARNING: Removing unreachable block (ram,0x9803a968) */
/* WARNING: Removing unreachable block (ram,0x9803a96c) */
/* WARNING: Removing unreachable block (ram,0x9803a97c) */
/* WARNING: Removing unreachable block (ram,0x9803a998) */
/* WARNING: Removing unreachable block (ram,0x9803a9ac) */
/* WARNING: Removing unreachable block (ram,0x9803a9bc) */
/* WARNING: Removing unreachable block (ram,0x9803a9d0) */
/* WARNING: Removing unreachable block (ram,0x9803a9ec) */
/* WARNING: Removing unreachable block (ram,0x9803aa2c) */
/* WARNING: Removing unreachable block (ram,0x9803aa34) */
/* WARNING: Removing unreachable block (ram,0x9803aa40) */
/* WARNING: Removing unreachable block (ram,0x9803aa50) */
/* WARNING: Removing unreachable block (ram,0x9803aa58) */
/* WARNING: Removing unreachable block (ram,0x9803aa6c) */
/* WARNING: Removing unreachable block (ram,0x9803aa78) */
/* WARNING: Removing unreachable block (ram,0x9803aa84) */
/* WARNING: Removing unreachable block (ram,0x9803aa8c) */
/* WARNING: Removing unreachable block (ram,0x9803aa94) */
/* WARNING: Removing unreachable block (ram,0x9803aaac) */
/* WARNING: Removing unreachable block (ram,0x9803aab8) */
/* WARNING: Removing unreachable block (ram,0x9803aac4) */
/* WARNING: Removing unreachable block (ram,0x9803aad0) */
/* WARNING: Removing unreachable block (ram,0x9803aadc) */
/* WARNING: Removing unreachable block (ram,0x9803aaec) */
/* WARNING: Removing unreachable block (ram,0x9803ab0c) */
/* WARNING: Removing unreachable block (ram,0x9803ab14) */
/* WARNING: Removing unreachable block (ram,0x9803ab18) */
/* WARNING: Removing unreachable block (ram,0x9803ab24) */
/* WARNING: Removing unreachable block (ram,0x9803ab30) */
/* WARNING: Removing unreachable block (ram,0x9803ab3c) */
/* WARNING: Removing unreachable block (ram,0x9803ab4c) */
/* WARNING: Removing unreachable block (ram,0x9803ab5c) */
/* WARNING: Removing unreachable block (ram,0x9803ab68) */
/* WARNING: Removing unreachable block (ram,0x9803abac) */
/* WARNING: Removing unreachable block (ram,0x9803abb4) */
/* WARNING: Removing unreachable block (ram,0x9803abc8) */
/* WARNING: Removing unreachable block (ram,0x9803abd0) */
/* WARNING: Removing unreachable block (ram,0x9803abdc) */
/* WARNING: Removing unreachable block (ram,0x9803abe0) */
/* WARNING: Removing unreachable block (ram,0x9803ac14) */
/* WARNING: Removing unreachable block (ram,0x9803ac24) */
/* WARNING: Removing unreachable block (ram,0x9803ac34) */
/* WARNING: Removing unreachable block (ram,0x9803ac40) */
/* WARNING: Removing unreachable block (ram,0x9803ac54) */
/* WARNING: Removing unreachable block (ram,0x9803acac) */
/* WARNING: Removing unreachable block (ram,0x9803ac60) */
/* WARNING: Removing unreachable block (ram,0x9803aca0) */
/* WARNING: Removing unreachable block (ram,0x9803ac70) */
/* WARNING: Removing unreachable block (ram,0x9803ac94) */
/* WARNING: Removing unreachable block (ram,0x9803ac80) */
/* WARNING: Removing unreachable block (ram,0x9803acb4) */
/* WARNING: Removing unreachable block (ram,0x9803acc0) */
/* WARNING: Removing unreachable block (ram,0x9803acec) */
/* WARNING: Removing unreachable block (ram,0x9803acf8) */
/* WARNING: Removing unreachable block (ram,0x9803ab74) */
/* WARNING: Removing unreachable block (ram,0x9803aa48) */
/* WARNING: Removing unreachable block (ram,0x9803acfc) */
/* WARNING: Removing unreachable block (ram,0x9803ad04) */
/* WARNING: Removing unreachable block (ram,0x9803ad0c) */
/* WARNING: Removing unreachable block (ram,0x9803ad78) */

void FUN_9803a440(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r10;
  
  FUN_9802ea14();
  if (in_r10 != 0) {
    for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x9803a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)bRam91a079e8 * 4 + -0x6e5c62e4))();
    return;
  }
  puVar2 = (undefined4 *)FUN_98030a00();
  *puVar2 = 0x16;
  FUN_9802eac0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ada0 @ 9803ada0 ==== */

void FUN_9803ada0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea00();
}


/* ==== FUN_9803b9a8 @ 9803b9a8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9803bf44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9803b9a8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  lVar14 = FUN_9802ea10();
  uVar11 = (uint)((ulonglong)lVar14 >> 0x20);
  pbVar3 = (byte *)lVar14;
  if (uVar11 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_98030a38();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_98030a00();
    uVar4 = 9;
LAB_9803b9e4:
    *puVar1 = uVar4;
    halt_baddata();
  }
  if ((-1 < lVar14) && (uVar11 < _DAT_91a43b84)) {
    iVar2 = ((int)uVar11 >> 5) * 4;
    iVar8 = (uVar11 & 0x1f) * 0x48;
    iVar5 = iVar8 + *(int *)(iVar2 + -0x6e5bc460);
    bVar6 = *(byte *)(iVar5 + 4);
    if ((bVar6 & 1) != 0) {
      if (param_3 < 0x80000000) {
        iVar9 = 0;
        if (param_3 == 0) {
          halt_baddata();
        }
        if ((bVar6 & 2) != 0) {
          halt_baddata();
        }
        if (pbVar3 != (byte *)0x0) {
          cVar7 = *(char *)(iVar5 + 0x28) >> 1;
          if (cVar7 != '\x01') {
            if (cVar7 == '\x02') {
              if ((~param_3 & 1) == 0) goto LAB_9803baa8;
              param_3 = param_3 & 0xfffffffe;
            }
            iVar5 = iVar8 + *(int *)(iVar2 + -0x6e5bc460);
            uVar11 = param_3;
            if ((((*(byte *)(iVar5 + 4) & 0x48) != 0) && (bVar6 = *(byte *)(iVar5 + 5), bVar6 != 10)
                ) && (param_3 != 0)) {
              *pbVar3 = bVar6;
              iVar9 = 1;
              *(undefined1 *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 5) = 10;
              uVar11 = param_3 - 1;
              if (((cVar7 != '\0') &&
                  (bVar6 = *(byte *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x29), bVar6 != 10)) &&
                 (uVar11 != 0)) {
                pbVar3[1] = bVar6;
                iVar9 = 2;
                *(undefined1 *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x29) = 10;
                uVar11 = param_3 - 2;
                if (((cVar7 == '\x01') &&
                    (bVar6 = *(byte *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x2a), bVar6 != 10))
                   && (uVar11 != 0)) {
                  pbVar3[2] = bVar6;
                  iVar9 = 3;
                  *(undefined1 *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x2a) = 10;
                  uVar11 = param_3 - 3;
                }
              }
            }
            iVar5 = FUN_9803d378();
            if (((iVar5 == 0) || ((int)local_7c < 0)) || (uVar11 < local_7c)) {
              iVar2 = thunk_FUN_9800e3b0();
              if (iVar2 == 5) {
                puVar1 = (undefined4 *)FUN_98030a00();
                *puVar1 = 9;
                puVar1 = (undefined4 *)FUN_98030a38();
                uVar4 = 5;
LAB_9803be74:
                *puVar1 = uVar4;
                halt_baddata();
              }
              if (iVar2 == 0x6d) {
                halt_baddata();
              }
            }
            else {
              iVar5 = iVar8 + *(int *)(iVar2 + -0x6e5bc460);
              if ((*(byte *)(iVar5 + 4) & 0x80) == 0) {
                halt_baddata();
              }
              if ((local_7c == 0) || (*pbVar3 != 10)) {
                bVar6 = *(byte *)(iVar5 + 4) & 0xfb;
              }
              else {
                bVar6 = *(byte *)(iVar5 + 4) | 4;
              }
              *(byte *)(iVar5 + 4) = bVar6;
              pbVar13 = pbVar3;
              pbVar12 = pbVar3;
              while (pbVar13 < pbVar3 + local_7c + iVar9) {
                bVar6 = *pbVar13;
                if (bVar6 == 0x1a) {
                  iVar5 = iVar8 + *(int *)(iVar2 + -0x6e5bc460);
                  if ((*(byte *)(iVar5 + 4) & 0x40) == 0) {
                    *(byte *)(iVar5 + 4) = *(byte *)(iVar5 + 4) | 2;
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
                  goto LAB_9803bdc0;
                }
                if (pbVar13 < pbVar3 + local_7c + iVar9 + -1) {
                  pbVar10 = pbVar13 + 1;
                  if (pbVar13[1] == 10) {
                    *pbVar12 = 10;
                    pbVar10 = pbVar13 + 2;
                  }
                  else {
                    *pbVar12 = 0xd;
                  }
                  goto LAB_9803bdc0;
                }
                pbVar10 = pbVar13 + 1;
                iVar5 = FUN_9803d378();
                if (((iVar5 == 0) && (iVar5 = thunk_FUN_9800e3b0(), iVar5 != 0)) || (local_7c == 0))
                goto LAB_9803bdbc;
                if ((*(byte *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 4) & 0x48) != 0) {
                  if (local_80 != '\n') {
                    *pbVar12 = 0xd;
                    *(char *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 5) = local_80;
                    goto LAB_9803bdc0;
                  }
LAB_9803bd6c:
                  *pbVar12 = 10;
                  goto LAB_9803bdc0;
                }
                if ((pbVar12 == pbVar3) && (local_80 == '\n')) goto LAB_9803bd6c;
                FUN_98038ad8();
                pbVar13 = pbVar10;
                if (local_80 != '\n') {
LAB_9803bdbc:
                  *pbVar12 = 0xd;
LAB_9803bdc0:
                  pbVar12 = pbVar12 + 1;
                  pbVar13 = pbVar10;
                }
              }
              if (cVar7 != '\x01') {
                halt_baddata();
              }
              if (pbVar12 == pbVar3) {
                halt_baddata();
              }
              pbVar13 = pbVar12 + -1;
              uVar11 = (uint)*pbVar13;
              if ((*pbVar13 & 0x80) != 0) {
                iVar5 = 1;
                cVar7 = *(char *)(uVar11 + 0x91a431f8);
                while (((iVar9 = (int)cVar7, iVar9 == 0 && (iVar5 < 5)) && (pbVar3 <= pbVar13))) {
                  pbVar13 = pbVar13 + -1;
                  uVar11 = (uint)*pbVar13;
                  iVar5 = iVar5 + 1;
                  cVar7 = *(char *)(uVar11 + 0x91a431f8);
                }
                if (iVar9 == 0) {
                  puVar1 = (undefined4 *)FUN_98030a00();
                  uVar4 = 0x2a;
                  goto LAB_9803be74;
                }
                if (iVar9 + 1 == iVar5) {
                  pbVar12 = pbVar13 + iVar5;
                }
                else {
                  iVar9 = iVar8 + *(int *)(iVar2 + -0x6e5bc460);
                  if ((*(byte *)(iVar9 + 4) & 0x48) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  *(char *)(iVar9 + 5) = (char)uVar11;
                  pbVar12 = pbVar13 + 1;
                  if (1 < iVar5) {
                    bVar6 = *pbVar12;
                    pbVar12 = pbVar13 + 2;
                    *(byte *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x29) = bVar6;
                  }
                  if (iVar5 == 3) {
                    bVar6 = *pbVar12;
                    pbVar12 = pbVar12 + 1;
                    *(byte *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x2a) = bVar6;
                  }
                  pbVar12 = pbVar12 + -iVar5;
                }
              }
              iVar5 = FUN_98040fe8();
              if (iVar5 != 0) {
                *(uint *)(iVar8 + *(int *)(iVar2 + -0x6e5bc460) + 0x38) =
                     (uint)((int)pbVar12 - (int)pbVar3 != iVar5);
                halt_baddata();
              }
              thunk_FUN_9800e3b0();
            }
            FUN_98030a70();
            halt_baddata();
          }
          if ((~param_3 & 1) != 0) {
            iVar2 = FUN_9802fdc0();
            if (iVar2 != 0) {
              FUN_98038ad8();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            puVar1 = (undefined4 *)FUN_98030a00();
            *puVar1 = 0xc;
            puVar1 = (undefined4 *)FUN_98030a38();
            uVar4 = 8;
            goto LAB_9803b9e4;
          }
        }
LAB_9803baa8:
        puVar1 = (undefined4 *)FUN_98030a38();
        *puVar1 = 0;
      }
      else {
        puVar1 = (undefined4 *)FUN_98030a38();
        *puVar1 = 0;
      }
      puVar1 = (undefined4 *)FUN_98030a00();
      uVar4 = 0x16;
      goto LAB_9803ba20;
    }
  }
  puVar1 = (undefined4 *)FUN_98030a38();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_98030a00();
  uVar4 = 9;
LAB_9803ba20:
  *puVar1 = uVar4;
  FUN_9802eac0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803bfc8 @ 9803bfc8 ==== */

void FUN_9803bfc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea28();
}


/* ==== FUN_9803c138 @ 9803c138 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c170 @ 9803c170 ==== */

void FUN_9803c170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uRam91a43304 = param_1;
  uRam91a4330c = param_2;
  uRam91a43308 = param_3;
  return;
}


/* ==== FUN_9803c188 @ 9803c188 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9803c188(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((((int)param_1 < 0) || (_DAT_91a43b84 <= param_1)) ||
      (piVar4 = (int *)(*(int *)(((int)param_1 >> 5) * 4 + -0x6e5bc460) + (param_1 & 0x1f) * 0x48),
      (*(byte *)(piVar4 + 1) & 1) == 0)) || (*piVar4 == -1)) {
    puVar2 = (undefined4 *)FUN_98030a00();
    *puVar2 = 9;
    piVar4 = (int *)FUN_98030a38();
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


/* ==== FUN_9803c220 @ 9803c220 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_9803c220(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_98030a38();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_98030a00();
    uVar2 = 0xffffffff;
    *puVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (_DAT_91a43b84 <= param_1)) ||
          (puVar1 = (undefined4 *)
                    (*(int *)(((int)param_1 >> 5) * 4 + -0x6e5bc460) + (param_1 & 0x1f) * 0x48),
          (*(byte *)(puVar1 + 1) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_98030a38();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_98030a00();
    *puVar1 = 9;
    FUN_9802eac0();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* ==== FUN_9803c2e0 @ 9803c2e0 ==== */

void FUN_9803c2e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9803c3a8 @ 9803c3a8 ==== */

undefined4 FUN_9803c3a8(void)

{
  int unaff_r31;
  
  FUN_98034f38();
  return *(undefined4 *)(unaff_r31 + 0x94);
}


/* ==== FUN_9803c3e0 @ 9803c3e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c3e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c410 @ 9803c410 ==== */

void FUN_9803c410(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9803c4d0 @ 9803c4d0 ==== */

void FUN_9803c4d0(void)

{
  FUN_98034f38();
  return;
}


/* ==== FUN_9803c4f8 @ 9803c4f8 ==== */

void FUN_9803c4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9803c590 @ 9803c590 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c590(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c610 @ 9803c610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c610(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_9802ea34();
  FUN_980351b8();
  piVar3 = (int *)0x91a43b80;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + iRam91a43b7c);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_98039360(iVar5);
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + iRam91a43b7c) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_9803c590();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_9803c590();
        }
      }
      FUN_9803c784();
    }
  }
  FUN_9803c734();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c734 @ 9803c734 ==== */

void FUN_9803c734(void)

{
  FUN_98034f38();
  return;
}


/* ==== FUN_9803c784 @ 9803c784 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c784(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c7e8 @ 9803c7e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c7e8(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_9802ea34();
  FUN_980351b8();
  piVar3 = (int *)0x91a43b80;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + iRam91a43b7c);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_98039360(iVar5);
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + iRam91a43b7c) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_9803c590();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_9803c590();
        }
      }
      FUN_9803c784();
    }
  }
  FUN_9803c734();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c7f0 @ 9803c7f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c7f0(undefined4 param_1,undefined4 param_2,uint *param_3)

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
  
  uVar10 = FUN_9802ea34();
  param_3[2] = 0;
  sVar7 = 0x404e;
  param_3[1] = 0;
  *param_3 = 0;
  if ((int)uVar10 != 0) {
    do {
      pcVar9 = (char *)((ulonglong)uVar10 >> 0x20);
      FUN_9802ebd0();
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
    if (*param_3 != 0) goto LAB_9803ca6c;
  }
  do {
    uVar2 = param_3[2];
    param_3[2] = uVar2 << 0x10;
    uVar6 = param_3[1] >> 0x10;
    *param_3 = uVar6;
    sVar7 = sVar7 + -0x10;
    param_3[1] = param_3[1] << 0x10 | uVar2 >> 0x10;
  } while (uVar6 == 0);
LAB_9803ca6c:
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


/* ==== FUN_9803ca88 @ 9803ca88 ==== */

void FUN_9803ca88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9803cb30 @ 9803cb30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cb30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cbf4 @ 9803cbf4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cbf4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cc38 @ 9803cc38 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9803cc38(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = FUN_9802ea34();
  if (uVar1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_98030a00();
    *puVar2 = 9;
    halt_baddata();
  }
  if (((int)uVar1 < 0) || (_DAT_91a43b84 <= uVar1)) {
LAB_9803cc88:
    puVar2 = (undefined4 *)FUN_98030a00();
    *puVar2 = 9;
    FUN_9802eac0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = ((int)uVar1 >> 5) * 4;
  iVar5 = (uVar1 & 0x1f) * 0x48;
  if ((*(byte *)(iVar5 + *(int *)(iVar3 + -0x6e5bc460) + 4) & 1) == 0) goto LAB_9803cc88;
  FUN_9803c2e0(uVar1);
  if ((*(byte *)(iVar5 + *(int *)(iVar3 + -0x6e5bc460) + 4) & 1) != 0) {
    FUN_9803c220(uVar1);
    iVar3 = FUN_980410c0();
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_9800e3b0();
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_9803cd38;
    piVar4 = (int *)FUN_98030a38();
    *piVar4 = iVar3;
  }
  puVar2 = (undefined4 *)FUN_98030a00();
  *puVar2 = 9;
LAB_9803cd38:
  FUN_9803cd70();
  halt_baddata();
}


/* ==== FUN_9803cd70 @ 9803cd70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cd70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cda8 @ 9803cda8 ==== */

void FUN_9803cda8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9803ce90 @ 9803ce90 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9803ce90(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar2 = FUN_9802ea34();
  if (uVar2 == 0xfffffffe) {
    puVar3 = (undefined4 *)FUN_98030a38();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_98030a00();
    *puVar3 = 9;
  }
  else {
    if ((-1 < (int)uVar2) && (uVar2 < _DAT_91a43b84)) {
      iVar1 = ((int)uVar2 >> 5) * 4;
      iVar4 = (uVar2 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(iVar1 + -0x6e5bc460) + iVar4 + 4) & 1) != 0) {
        FUN_9803c2e0(uVar2);
        if ((*(byte *)(*(int *)(iVar1 + -0x6e5bc460) + iVar4 + 4) & 1) == 0) {
          puVar3 = (undefined4 *)FUN_98030a00();
          *puVar3 = 9;
        }
        else {
          FUN_9803cda8();
        }
        FUN_9803cfb8();
        halt_baddata();
      }
    }
    puVar3 = (undefined4 *)FUN_98030a38();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_98030a00();
    *puVar3 = 9;
    FUN_9802eac0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cfb8 @ 9803cfb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cfb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cff0 @ 9803cff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cff0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d058 @ 9803d058 ==== */

void FUN_9803d058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9803d250 @ 9803d250 ==== */

void FUN_9803d250(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_9803d378 @ 9803d378 ==== */

void FUN_9803d378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9803d4f8 @ 9803d4f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d4f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_980419dc @ 9803d560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_980419dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d568 @ 9803d568 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d648 @ 9803d648 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d648(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d6c0 @ 9803d6c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d6c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d720 @ 9803d720 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d720(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d7f8 @ 9803d7f8 ==== */

undefined4 FUN_9803d7f8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam91a43b74;
  uRam91a43b74 = param_1;
  return uVar1;
}


/* ==== FUN_9803d810 @ 9803d810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d8a0 @ 9803d8a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d8a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803da78 @ 9803da78 ==== */

void FUN_9803da78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9803db98 @ 9803db98 ==== */

void FUN_9803db98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9803de28 @ 9803de28 ==== */

undefined4 FUN_9803de28(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 auStack_c [3];
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    auStack_c[0] = *(undefined4 *)(param_1 + 0x20);
    uStack_10 = 0;
    uVar1 = func_0x98041a2c(auStack_c,&uStack_10,0x8000,param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_9803de80 @ 9803de80 ==== */

void FUN_9803de80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea2c();
}


/* ==== FUN_9803e288 @ 9803e288 ==== */

void FUN_9803e288(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9803e3c0 @ 9803e3c0 ==== */

void FUN_9803e3c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_9803e4d8 @ 9803e4d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803e4d8(undefined4 param_1,undefined4 param_2,ushort *param_3,uint param_4,uint param_5)

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
  uint uStack_60;
  
  uVar13 = FUN_9802ea20();
  iVar3 = (int)(uVar13 >> 0x20);
  if (*(uint *)(iVar3 + 0x1c) < param_5) {
    halt_baddata();
  }
  uStack_60 = (uint)*param_3;
  bVar1 = *(byte *)((int)param_3 + 5);
  puVar12 = param_3 + uStack_60 * 8;
  if ((bVar1 & 0x10) == 0) {
    bVar2 = *(byte *)((int)puVar12 + 5);
    if ((bVar2 & 1) != 0) {
      halt_baddata();
    }
    uStack_60 = *puVar12 + uStack_60;
    if (uStack_60 < param_5) {
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
      func_0x98041a3c(puVar12 + 0xc,uVar10,0xfeeefeee);
    }
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar12;
  }
  else {
    iVar4 = FUN_9803db98();
    if (iVar4 == 0) {
      halt_baddata();
    }
    uVar10 = ((param_5 - uStack_60) * 0x10 + 0xffff & 0xffff0000) >> 4;
    iVar4 = FUN_9803de80();
    bVar2 = *(byte *)(iVar4 + 5);
    uStack_60 = *param_3 + uVar10;
    if (uStack_60 < param_5) {
      FUN_9803e288();
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + uVar10;
      halt_baddata();
    }
  }
  uStack_60 = uStack_60 - param_5;
  uVar10 = (uint)*param_3 * 0x10 - (uint)*(byte *)(param_3 + 3);
  if (uStack_60 < 3) {
    param_5 = uStack_60 + param_5;
    uStack_60 = 0;
  }
  if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (ushort)param_5;
  if (uStack_60 == 0) {
    *(byte *)((int)param_3 + 5) = *(byte *)((int)param_3 + 5) | bVar2 & 0x10;
    *(char *)(param_3 + 3) = (char)(param_5 << 4) - (char)param_4;
    *param_3 = uVar9;
    if ((bVar2 & 0x10) == 0) {
      param_3[(param_5 & 0xffff) * 8 + 1] = uVar9;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3) + 0x40) = param_3;
    }
    goto LAB_9803ea1c;
  }
  puVar12 = param_3 + param_5 * 8;
  *param_3 = uVar9;
  *(char *)(param_3 + 3) = (char)param_5 * '\x10' - (char)param_4;
  puVar12[1] = uVar9;
  bVar1 = *(byte *)(param_3 + 2);
  *(byte *)(puVar12 + 2) = bVar1;
  uVar9 = (ushort)uStack_60;
  if ((bVar2 & 0x10) == 0) {
    puVar11 = puVar12 + uStack_60 * 8;
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
        func_0x98041a3c(puVar11 + 0xc,uVar5,0xfeeefeee);
      }
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar11;
      uStack_60 = *puVar11 + uStack_60;
      *(byte *)((int)puVar12 + 5) = bVar1;
      if (0xf000 < uStack_60) {
        FUN_9803e288();
        goto LAB_9803ea1c;
      }
      *puVar12 = (ushort)uStack_60;
      if ((bVar1 & 0x10) == 0) {
        puVar12[uStack_60 * 8 + 1] = (ushort)uStack_60;
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar12 + 2) + 0x18) * 4 + iVar3) + 0x40) = puVar12;
      }
      *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
      uVar5 = uStack_60 & 0xffff;
      if (0x7f < uVar5) {
        for (piVar7 = *(int **)(iVar3 + 0x180);
            ((int *)(iVar3 + 0x180) != piVar7 && (*(ushort *)(piVar7 + -2) < uVar5));
            piVar7 = (int *)*piVar7) {
        }
        goto LAB_9803e9e4;
      }
      goto LAB_9803e984;
    }
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xef;
    *puVar12 = uVar9;
    puVar12[uStack_60 * 8 + 1] = uVar9;
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
    if ((uStack_60 & 0xffff) < 0x80) goto LAB_9803e834;
    for (piVar7 = *(int **)(iVar3 + 0x180);
        ((int *)(iVar3 + 0x180) != piVar7 && ((uint)*(ushort *)(piVar7 + -2) < (uStack_60 & 0xffff))
        ); piVar7 = (int *)*piVar7) {
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + iVar3) + 0x40) = puVar12;
    *(byte *)((int)puVar12 + 5) = bVar2;
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xf8;
    *puVar12 = uVar9;
    if ((uStack_60 & 0xffff) < 0x80) {
LAB_9803e834:
      uVar5 = uStack_60 & 0xffff;
LAB_9803e984:
      piVar7 = (int *)((uVar5 + 0x30) * 8 + iVar3);
      if ((int *)*piVar7 == piVar7) {
        iVar4 = ((*puVar12 >> 5) + 0x58) * 4;
        *(uint *)(iVar4 + iVar3) = 1 << (*puVar12 & 0x1f) | *(uint *)(iVar4 + iVar3);
      }
    }
    else {
      for (piVar7 = *(int **)(iVar3 + 0x180);
          ((int *)(iVar3 + 0x180) != piVar7 &&
          ((uint)*(ushort *)(piVar7 + -2) < (uStack_60 & 0xffff))); piVar7 = (int *)*piVar7) {
      }
    }
  }
LAB_9803e9e4:
  puVar6 = (undefined4 *)piVar7[1];
  *(int **)(puVar12 + 4) = piVar7;
  *(undefined4 **)(puVar12 + 6) = puVar6;
  *puVar6 = puVar12 + 4;
  piVar7[1] = (int)(puVar12 + 4);
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + uStack_60;
LAB_9803ea1c:
  if (((uVar13 & 8) != 0) && (uVar10 < param_4)) {
    FUN_9802f200((uint *)((int)param_3 + uVar10 + 0x10),0,param_4 - uVar10);
  }
  *(byte *)((int)param_3 + 5) =
       (byte)((uint)uVar13 >> 4) & 0xe0 | *(byte *)((int)param_3 + 5) & 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ea58 @ 9803ea58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ea58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803eb00 @ 9803eb00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803eb00(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  
  uVar8 = FUN_9802ea20();
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
    iVar3 = func_0x980419fc(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar2 + 0x2c8));
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
    FUN_9803da78();
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_9803e288();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ec68 @ 9803ec68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ec68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34 [13];
  
  uVar7 = FUN_9802ea34();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar6 = (int)uVar7 + 0xffffU >> 0x10;
  uVar4 = 0x40;
  local_38 = uVar6 << 0x10;
  uVar5 = 0;
  do {
    local_3c = *(int *)((uVar5 + 0x18) * 4 + iVar1);
    if (local_3c == 0) {
      if (uVar4 == 0x40) {
        uVar4 = uVar5;
      }
    }
    else if (((uVar6 <= *(uint *)(local_3c + 0x30)) && (local_38 <= *(uint *)(local_3c + 0x1c))) &&
            (iVar2 = FUN_9803db98(), iVar2 != 0)) {
      local_38 = local_38 >> 4;
      FUN_9803de80();
      FUN_9803e288();
      halt_baddata();
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x40);
  if ((uVar4 != 0x40) && ((*(uint *)(iVar1 + 0x14) & 2) != 0)) {
    uVar6 = (int)uVar7 + 0x10000;
    local_3c = 0;
    local_40 = uVar6;
    if (uVar6 <= *(uint *)(iVar1 + 0x20)) {
      local_40 = *(uint *)(iVar1 + 0x20);
    }
    iVar2 = func_0x980419fc(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
    if (iVar2 < 0) {
      do {
        if (local_40 == uVar6) break;
        local_40 = local_40 >> 1;
        if (local_40 < uVar6) {
          local_40 = uVar6;
        }
        iVar2 = func_0x980419fc(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
      } while (iVar2 < 0);
      if (iVar2 < 0) {
        halt_baddata();
      }
    }
    *(uint *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + local_40;
    local_34[0] = uVar6;
    if (uVar6 <= *(uint *)(iVar1 + 0x24)) {
      local_34[0] = *(uint *)(iVar1 + 0x24);
    }
    iVar2 = func_0x980419fc(&local_3c,local_34,0x60001000,4,*(undefined4 *)(iVar1 + 0x590));
    if (-1 < iVar2) {
      iVar3 = FUN_9803eb00(iVar1,local_3c,uVar4,0,(undefined2 *)local_3c,local_34[0] + local_3c,
                           local_40 + local_3c);
      if (iVar3 == 0) {
        iVar2 = -0x3fffffe9;
      }
      if (-1 < iVar2) {
        halt_baddata();
      }
    }
    func_0x98041a2c(&local_3c,&local_40,0x8000,*(undefined4 *)(iVar1 + 0x590));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803eea8 @ 9803eea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803eea8(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar14 = FUN_9802ea14();
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
    if ((uStack_80 != 0) && (puVar3 = (undefined4 *)FUN_9803d8a0(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = func_0x98041a2c(apuStack_7c,&uStack_80,0x4000,*(undefined4 *)(iVar2 + 0x590));
      *puVar3 = *(undefined4 *)(*(int *)(iVar11 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar11 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_9803da78();
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
  FUN_9803e288();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803f210 @ 9803f210 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803f210(void)

{
  FUN_9802ea18();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803f7e0 @ 9803f7e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803f7e0(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar18 = FUN_9802ea20();
  iVar4 = (int)((ulonglong)uVar18 >> 0x20);
  puStack_dc = (uint *)0x0;
  uStack_d8 = 0;
  iStack_c4 = iVar4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar5 = func_0x98041a1c(), *(byte *)(iVar4 + 0x17b) != uVar5)) {
    func_0x98041a0c(0xf4,iVar4,uStack_8,0x5ea,param_3);
  }
  uVar15 = *(uint *)(iVar4 + 0x18) | (uint)uVar18;
  uVar5 = param_3;
  if (param_3 == 0) {
    uVar5 = 1;
  }
  uVar5 = uVar5 + 0x1f;
  uStack_e8 = uVar5 & 0xfffffff0;
  uVar8 = uVar5 >> 4;
  bVar2 = (uVar15 & 1) == 0;
  if (bVar2) {
    func_0x9804190c(*(undefined4 *)(iVar4 + 0x580));
    uStack_d8 = 1;
  }
  if (0x7f < uVar8) {
    if (*(uint *)(iVar4 + 0x1c) < uVar8) {
      if ((*(uint *)(iVar4 + 0x14) & 2) != 0) {
        uStack_e8 = uStack_e8 + 0x20;
        puStack_ec = (uint *)0x0;
        iVar7 = func_0x980419fc(&puStack_ec,&uStack_e8,(~uVar15 & 8) << 0x14 | 0x60001000,4,
                                *(undefined4 *)(iVar4 + 0x590));
        if (-1 < iVar7) {
          FUN_9802f200(puStack_ec,0,0x30);
          *(short *)(puStack_ec + 8) = ((short)uStack_e8 - (short)param_3) + -0x30;
          *(undefined1 *)((int)puStack_ec + 0x25) = 0xb;
          puStack_ec[6] = uStack_e8;
          puStack_ec[7] = uStack_e8;
          puVar13 = *(undefined4 **)(iVar4 + 0x5c);
          *puStack_ec = iVar4 + 0x58;
          puStack_ec[1] = (uint)puVar13;
          *puVar13 = puStack_ec;
          puStack_dc = puStack_ec + 0xc;
          *(uint **)(iVar4 + 0x5c) = puStack_ec;
          goto LAB_9802ea70;
        }
      }
    }
    else {
LAB_9803fa98:
      piStack_d0 = *(int **)(iVar4 + 0x184);
      piVar12 = (int *)(iVar4 + 0x180);
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
            goto LAB_9803fb6c;
          }
        }
      }
      puStack_e4 = (ushort *)FUN_9803ec68();
      if (puStack_e4 != (ushort *)0x0) {
        piVar12 = *(int **)(puStack_e4 + 6);
        iVar7 = *(int *)(puStack_e4 + 4);
        if (((ushort *)*piVar12 == *(ushort **)(iVar7 + 4)) &&
           ((ushort *)*piVar12 == puStack_e4 + 4)) {
          *piVar12 = iVar7;
          *(int **)(iVar7 + 4) = piVar12;
        }
        goto LAB_9803fb6c;
      }
    }
    if ((uVar15 & 4) != 0) {
      uStack_b0 = 0xc0000017;
      uStack_a8 = 0;
      uStack_a0 = 1;
      uStack_ac = 0;
      uStack_9c = uStack_e8;
      func_0x98041a5c(&uStack_b0);
    }
    puStack_dc = (uint *)0x0;
    goto LAB_9802ea70;
  }
  piVar12 = (int *)((uVar8 + 0x30) * 8 + iVar4);
  if ((int *)*piVar12 == piVar12) {
    uVar5 = uVar5 >> 9;
    puVar6 = (uint *)((uVar5 + 0x58) * 4 + iVar4);
    puStack_e0 = puVar6 + 1;
    uStack_d4 = *puVar6 & ~((1 << (uVar8 & 0x1f)) - 1U);
    if (uVar5 == 0) {
      if (uStack_d4 == 0) {
        uStack_d4 = *puStack_e0;
        puStack_e0 = puVar6 + 2;
        goto LAB_9803f9c0;
      }
      iVar7 = iVar4 + 0x180;
    }
    else if (uVar5 == 1) {
LAB_9803f9c0:
      if (uStack_d4 == 0) {
        uStack_d4 = *puStack_e0;
        puStack_e0 = puStack_e0 + 1;
        goto LAB_9803f9e0;
      }
      iVar7 = iVar4 + 0x280;
    }
    else {
      if (uVar5 < 3) {
LAB_9803f9e0:
        if (uStack_d4 != 0) {
          iVar7 = iVar4 + 0x380;
          goto LAB_9803fa0c;
        }
        uStack_d4 = *puStack_e0;
        puStack_e0 = puStack_e0 + 1;
      }
      else if (uVar5 != 3) goto LAB_9803fa98;
      if (uStack_d4 == 0) goto LAB_9803fa98;
      iVar7 = iVar4 + 0x480;
    }
LAB_9803fa0c:
    puVar13 = *(undefined4 **)((0x1f - LZCOUNT(uStack_d4 & ~(uStack_d4 - 1))) * 8 + iVar7 + 4);
    puStack_e4 = (ushort *)(puVar13 + -2);
    piVar9 = (int *)puVar13[1];
    piVar12 = (int *)*puVar13;
    if (((undefined4 *)*piVar9 == (undefined4 *)piVar12[1]) && ((undefined4 *)*piVar9 == puVar13)) {
      *piVar9 = (int)piVar12;
      piVar12[1] = (int)piVar9;
      if (piVar12 == piVar9) {
        iVar7 = ((*puStack_e4 >> 5) + 0x58) * 4;
        *(uint *)(iVar7 + iVar4) = *(uint *)(iVar7 + iVar4) ^ 1 << (*puStack_e4 & 0x1f);
      }
    }
LAB_9803fb6c:
    puVar16 = puStack_e4;
    bVar11 = *(byte *)((int)puStack_e4 + 5);
    *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) - (uint)*puStack_e4;
    *(undefined1 *)((int)puStack_e4 + 5) = 1;
    uVar5 = *puStack_e4 - uVar8;
    *puStack_e4 = (ushort)uVar8;
    *(char *)(puStack_e4 + 3) = (char)uStack_e8 - (char)param_3;
    *(undefined1 *)((int)puStack_e4 + 7) = 0;
    puStack_c0 = puStack_e4;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        *puStack_e4 = *puStack_e4 + 1;
        *(char *)(puStack_e4 + 3) = *(char *)(puStack_e4 + 3) + '\x10';
      }
      else {
        puVar17 = puStack_e4 + uVar8 * 8;
        uVar3 = uVar5 & 0xffff;
        *(byte *)((int)puVar17 + 5) = bVar11;
        puVar17[1] = (ushort)uVar8;
        *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(puStack_e4 + 2);
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
                goto LAB_9803fd00;
              }
            }
            else {
              *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
              for (piVar12 = *(int **)(iVar4 + 0x180);
                  (piStack_c8 = piVar12, (int *)(iVar4 + 0x180) != piVar12 &&
                  (piStack_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                  piVar12 = (int *)*piVar12) {
              }
            }
            goto LAB_9803fd04;
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
                  (piStack_b8 = piVar12, (int *)(iVar4 + 0x180) != piVar12 &&
                  (piStack_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar8));
                  piVar12 = (int *)*piVar12) {
              }
            }
            puVar13 = (undefined4 *)piVar12[1];
            *(int **)(puVar17 + 4) = piVar12;
            *(undefined4 **)(puVar17 + 6) = puVar13;
            *puVar13 = puVar17 + 4;
            piVar12[1] = (int)(puVar17 + 4);
            iVar7 = uVar5 + *(int *)(iVar4 + 0x30);
            goto LAB_9803fec4;
          }
          FUN_9803e288();
        }
        else {
          if (uVar3 < 0x80) {
            piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar4);
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            if ((int *)*piVar12 == piVar12) {
              iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar7 + iVar4);
LAB_9803fd00:
              *(uint *)(iVar7 + iVar4) = uVar8;
            }
          }
          else {
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            for (piVar12 = *(int **)(iVar4 + 0x180);
                (piStack_bc = piVar12, (int *)(iVar4 + 0x180) != piVar12 &&
                (piStack_cc = piVar12 + -2, *(ushort *)(piVar12 + -2) < uVar3));
                piVar12 = (int *)*piVar12) {
            }
          }
LAB_9803fd04:
          puVar13 = (undefined4 *)piVar12[1];
          *(int **)(puVar17 + 4) = piVar12;
          *(undefined4 **)(puVar17 + 6) = puVar13;
          *puVar13 = puVar17 + 4;
          piVar12[1] = (int)(puVar17 + 4);
          iVar7 = uVar5 + *(int *)(iVar4 + 0x30);
LAB_9803fec4:
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
    *(char *)((int)puVar13 + -2) = (char)uStack_e8 - (char)param_3;
    *(undefined1 *)((int)puVar13 + -1) = 0;
    puStack_e4 = puVar16;
    puStack_c0 = puVar16;
  }
  puVar6 = (uint *)(puVar16 + 8);
  puStack_dc = puVar6;
  if (bVar2) {
    func_0x9804191c(*(undefined4 *)(iVar4 + 0x580));
    uStack_d8 = 0;
  }
  if ((uVar15 & 8) != 0) {
    FUN_9802f200(puVar6,0,param_3);
  }
LAB_9802ea70:
  FUN_98040088();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040088 @ 98040088 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040088(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980400d8 @ 980400d8 ==== */

void FUN_980400d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea30();
}


/* ==== FUN_9804037c @ 9804037c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804037c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980403d0 @ 980403d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980403d0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

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
  uint uVar15;
  ushort *puVar16;
  undefined8 uVar17;
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
  
  uVar17 = FUN_9802ea14();
  iVar3 = (int)((ulonglong)uVar17 >> 0x20);
  uStack_e0 = 0;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar2 = func_0x98041a1c(), *(byte *)(iVar3 + 0x17b) != uVar2)) {
    func_0x98041a0c(0xf4,iVar3,uStack_8,0xc7c,param_3);
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  uVar2 = *(uint *)(iVar3 + 0x18) | (uint)uVar17;
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
    func_0x9804190c(*(undefined4 *)(iVar3 + 0x580));
    uVar2 = uVar2 ^ 1;
    uStack_e0 = 1;
  }
  puVar16 = (ushort *)(param_3 + -0x10);
  bVar1 = *(byte *)(param_3 + -0xb);
  puStack_c4 = puVar16;
  if ((bVar1 & 1) == 0) goto LAB_98040be4;
  uVar8 = (uint)*puVar16;
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
       (iVar9 = FUN_9803e4d8(iVar3,uVar2,puVar16,param_4,uStack_dc), iVar9 != 0)) goto LAB_98040bb0;
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
          puVar11 = puVar16 + (uint)*puVar16 * 8 + -8;
        }
        else {
          puVar11 = (ushort *)(param_3 + -0x28);
        }
        uVar12 = puVar11[1];
        if ((uVar12 != 0) && ((uVar12 & 0x8000) == 0)) {
          uVar13 = (uint)uVar12 << 0x12 | uVar13;
        }
      }
      iVar4 = FUN_9803f7e0(iVar3,uVar13 & 0xfffffff7,param_4);
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
            puVar16 = puVar16 + (uint)*puVar16 * 8 + -8;
          }
          else {
            puVar16 = (ushort *)(param_3 + -0x28);
          }
          *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar16 + 2);
        }
        piVar5 = param_4;
        if (piVar7 <= param_4) {
          piVar5 = piVar7;
        }
        FUN_9802f140(iVar4,param_3,(uint)piVar5);
        if ((piVar7 < param_4) && ((uVar13 & 8) != 0)) {
          FUN_9802f200((uint *)(iVar4 + (int)piVar7),0,(int)param_4 - (int)piVar7);
        }
        FUN_980400d8(iVar3,uVar13,param_3);
      }
      goto LAB_98040bb0;
    }
  }
  else {
    uVar15 = uStack_dc;
    if (uStack_dc + 1 == uVar8) {
      uVar14 = uVar14 + 0x10;
      uVar15 = uStack_dc + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(param_3 + -10) = (char)uVar14 - (char)param_4;
    }
    else {
      *puVar16 = ((short)uVar14 - (short)param_4) - 0x30;
    }
    uStack_dc = uVar15;
    if ((piVar7 < param_4) && ((uVar2 & 8) != 0)) {
      FUN_9802f200((uint *)((int)piVar7 + param_3),0,(int)param_4 - (int)piVar7);
    }
    if (uVar15 != uVar8) {
      bVar1 = *(byte *)(param_3 + -0xb);
      if ((bVar1 & 8) == 0) {
        puVar11 = puVar16 + uVar15 * 8;
        *(byte *)((int)puVar11 + 5) = bVar1 & 0xfe;
        puVar11[1] = (ushort)uVar15;
        *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(param_3 + -0xc);
        uVar2 = *puVar16 - uVar15;
        *puVar16 = (ushort)uVar15;
        *(byte *)(param_3 + -0xb) = *(byte *)(param_3 + -0xb) & 0xef;
        uVar12 = (ushort)uVar2;
        if ((bVar1 & 0x10) == 0) {
          puVar16 = puVar11 + uVar2 * 8;
          if ((*(byte *)((int)puVar16 + 5) & 1) != 0) {
            *puVar11 = uVar12;
            puVar16[1] = uVar12;
            *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar11 + 5) & 0xf8;
            if ((uVar2 & 0xffff) < 0x80) goto LAB_98040758;
            for (piVar7 = *(int **)(iVar3 + 0x180);
                (piStack_d0 = piVar7, (int *)(iVar3 + 0x180) != piVar7 &&
                (piStack_e4 = piVar7 + -2, (uint)*(ushort *)(piVar7 + -2) < (uVar2 & 0xffff)));
                piVar7 = (int *)*piVar7) {
            }
            goto LAB_98040790;
          }
          *(byte *)((int)puVar11 + 5) = *(byte *)((int)puVar16 + 5);
          puVar10 = *(undefined4 **)(puVar16 + 6);
          puVar6 = *(undefined4 **)(puVar16 + 4);
          if (((ushort *)*puVar10 == (ushort *)puVar6[1]) && ((ushort *)*puVar10 == puVar16 + 4)) {
            *puVar10 = puVar6;
            puVar6[1] = puVar10;
            if ((puVar6 == puVar10) && (uVar12 = *puVar16, uVar12 < 0x80)) {
              iVar9 = ((uVar12 >> 5) + 0x58) * 4;
              *(uint *)(iVar9 + iVar3) = *(uint *)(iVar9 + iVar3) ^ 1 << (uVar12 & 0x1f);
            }
          }
          if ((*(byte *)((int)puVar16 + 5) & 4) != 0) {
            uStack_cc = (uint)*puVar16 * 0x10 - 0x18;
            if (((*(byte *)((int)puVar16 + 5) & 2) != 0) && (4 < uStack_cc)) {
              uStack_cc = (uint)*puVar16 * 0x10 - 0x1c;
            }
            func_0x98041a3c(puVar16 + 0xc,uStack_cc,0xfeeefeee);
          }
          *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar16;
          uVar2 = *puVar16 + uVar2;
          if (0xf000 < uVar2) {
            FUN_9803e288();
            goto LAB_98040bb0;
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
LAB_98040758:
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
LAB_98040790:
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
        iVar3 = func_0x98041a2c(&iStack_d8,&iStack_e8,0x8000,*(undefined4 *)(iVar3 + 0x590));
        if (-1 < iVar3) {
          *(int *)(param_3 + -0x18) = *(int *)(param_3 + -0x18) - iStack_e8;
        }
      }
    }
LAB_98040bb0:
    uVar2 = uVar13;
    if (iVar4 != 0) goto LAB_98040be4;
  }
  if ((uVar2 & 4) != 0) {
    uStack_c0 = 0xc0000017;
    uStack_b8 = 0;
    uStack_b0 = 1;
    uStack_bc = 0;
    uStack_ac = uVar14;
    func_0x98041a5c(&uStack_c0);
  }
LAB_98040be4:
  FUN_98040c38();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040c38 @ 98040c38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040c38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040cb0 @ 98040cb0 ==== */

undefined4 FUN_98040cb0(void)

{
  return uRam91a43b68;
}


/* ==== FUN_98040cc0 @ 98040cc0 ==== */

void FUN_98040cc0(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 auStack_4c [76];
  
  uStack_5c = param_2 & 1;
  uStack_58 = 0;
  uStack_54 = 0x91a404c0;
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
      FUN_9802f058(auStack_4c,param_4,param_3 << 2);
    }
  }
  func_0x98041a5c(&uStack_60);
  return;
}


/* ==== thunk_FUN_9800e360 @ 98040d40 ==== */

void thunk_FUN_9800e360(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_98040d48 @ 98040d48 ==== */

undefined4 FUN_98040d48(void)

{
  int unaff_r13;
  
  return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x14c);
}


/* ==== FUN_98040d58 @ 98040d58 ==== */

void FUN_98040d58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea3c();
}


/* ==== FUN_98040dc8 @ 98040dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040dc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040e38 @ 98040e38 ==== */

void FUN_98040e38(undefined4 param_1)

{
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  func_0x9804181c(&uStack_10,param_1);
  FUN_98041210(&uStack_10);
  return;
}


/* ==== FUN_98040e78 @ 98040e78 ==== */

void FUN_98040e78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_9802ea38();
}


/* ==== FUN_98040fe8 @ 98040fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040fe8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980410c0 @ 980410c0 ==== */

bool FUN_980410c0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  iVar1 = func_0x98041aac(param_1,auStack_10);
  if (iVar1 < 0) {
    FUN_9800e378();
  }
  return iVar1 >= 0;
}


/* ==== FUN_98041100 @ 98041100 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041100(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041170 @ 98041170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041210 @ 98041210 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041210(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041220 @ 98041220 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041220(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  short *psVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_9802ea18();
  pbVar3 = (byte *)((ulonglong)uVar11 >> 0x20);
  iVar7 = (int)uVar11;
  pbVar6 = pbVar3;
  if (iVar7 == -1) {
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    iVar7 = (int)pbVar6 - (int)pbVar3;
  }
  if (0 < iVar7) {
    iVar10 = 0;
    psVar5 = (short *)(param_3 + -2);
    iVar4 = 0;
    pbVar6 = pbVar3;
    do {
      bVar1 = *pbVar6;
      iVar8 = 0;
      uVar2 = (int)*(char *)(bVar1 + 0x91a43638) & 0xffff;
      if (iVar7 <= (int)(pbVar6 + (uVar2 - (int)pbVar3))) {
        halt_baddata();
      }
      if (uVar2 == 0) {
LAB_98041348:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        iVar10 = iVar10 + 1;
        iVar8 = (uint)bVar1 + iVar8;
      }
      else {
        if (uVar2 == 1) {
LAB_98041334:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar10 = iVar10 + 1;
          iVar8 = ((uint)bVar1 + iVar8) * 0x40;
          goto LAB_98041348;
        }
        if (uVar2 < 3) {
LAB_98041320:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar10 = iVar10 + 1;
          iVar8 = ((uint)bVar1 + iVar8) * 0x40;
          goto LAB_98041334;
        }
        if (uVar2 == 3) {
LAB_9804130c:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar10 = iVar10 + 1;
          iVar8 = ((uint)bVar1 + iVar8) * 0x40;
          goto LAB_98041320;
        }
        if (uVar2 < 5) {
LAB_980412f8:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar10 = iVar10 + 1;
          iVar8 = ((uint)bVar1 + iVar8) * 0x40;
          goto LAB_9804130c;
        }
        if (uVar2 == 5) {
          pbVar6 = pbVar6 + 1;
          iVar10 = iVar10 + 1;
          iVar8 = (uint)bVar1 << 6;
          goto LAB_980412f8;
        }
      }
      uVar9 = iVar8 - *(int *)(uVar2 * 4 + -0x6e5bc9e0);
      uVar2 = uVar9;
      if ((uRam91a43604 < uVar9) && (uVar2 = uRam91a43600, uVar9 <= uRam91a43608)) {
        uVar9 = uVar9 - iRam91a43610;
        if (iVar4 + 1 <= param_4) {
          psVar5[1] = (short)(uVar9 >> (uRam91a4360c & 0x3f)) + (short)uRam91a43618;
          psVar5 = psVar5 + 1;
        }
        iVar8 = iVar4 + 2;
        if (iVar8 <= param_4) {
          psVar5 = psVar5 + 1;
          *psVar5 = ((ushort)uRam91a43614 & (ushort)uVar9) + (short)uRam91a4361c;
        }
      }
      else {
        iVar8 = iVar4 + 1;
        if (iVar8 <= param_4) {
          iVar8 = iVar4 + 1;
          psVar5[1] = (short)uVar2;
          psVar5 = psVar5 + 1;
        }
      }
      iVar4 = iVar8;
    } while (iVar10 < iVar7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


