// Decompiled from BootEdit.xex.pe  base=82000000  (approximate C, for reading only)
/* ==== FUN_82010000 @ 82010000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82010000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82012400 @ 82012400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82012400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82012468 @ 82012468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82012468(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820124d0 @ 820124d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820124d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82012538 @ 82012538 ==== */

undefined4 FUN_82012538(void)

{
  return *puRam82070054;
}


/* ==== FUN_82012548 @ 82012548 ==== */

void FUN_82012548(void)

{
  if (DAT_82070058 == '\x01') {
    FUN_820124d0();
    FUN_82052ec0();
  }
  return;
}


/* ==== FUN_820125c8 @ 820125c8 ==== */

double FUN_820125c8(double param_1,double param_2,double param_3)

{
  float fVar1;
  
  if (param_3 < param_1) {
    return (double)DAT_820016c4;
  }
  if (param_2 <= param_3) {
    return (double)DAT_820016c0;
  }
  fVar1 = (float)(param_3 - param_1) / (float)(param_2 - param_1);
  return (double)(-(fVar1 * DAT_820016bc - DAT_820016b8) * fVar1 * fVar1);
}


/* ==== FUN_82012620 @ 82012620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82012620(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820128a8 @ 820128a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820128a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820128d8 @ 820128d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820128d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82012a60 @ 82012a60 ==== */

void FUN_82012a60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82012b08 @ 82012b08 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82012b08(void)

{
  undefined1 auStack_d8 [216];
  
  FUN_8205b89c();
  func_0x8205b928();
  (*(code *)0x9803d5f8)(_UNK_82001750);
  (*(code *)0x9803d5f8)(DAT_82001740);
  FUN_82012400();
  (*(code *)&SUB_9801e380)(0,0,auStack_d8,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82012de8 @ 82012de8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82012de8(void)

{
  undefined1 auStack_b8 [184];
  
  FUN_8205b89c();
  FUN_8205b93c();
  FUN_82012400();
  (*(code *)&SUB_9801e380)(0,0,auStack_b8,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82013000 @ 82013000 ==== */

bool FUN_82013000(int param_1,ushort param_2,char param_3)

{
  ushort uVar1;
  
  if (((param_2 & *(ushort *)(param_1 + 8)) == 0) && ((param_2 & *(ushort *)(param_1 + 0x18)) != 0))
  {
    if (param_3 == '\x01') {
      uVar1 = *(ushort *)(param_1 + 0x28);
      *(ushort *)(param_1 + 0x28) = uVar1 & ~param_2;
      return (param_2 & uVar1) != 0;
    }
    return true;
  }
  return false;
}


/* ==== FUN_82013058 @ 82013058 ==== */

void FUN_82013058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820132d0 @ 820132d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820132d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820133e0 @ 820133e0 ==== */

void FUN_820133e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x820133f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam82072c94)();
  return;
}


/* ==== FUN_82013468 @ 82013468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82013468(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820134d0 @ 820134d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820134d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820136e0 @ 820136e0 ==== */

void FUN_820136e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82013750 @ 82013750 ==== */

void FUN_82013750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82013810 @ 82013810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82013810(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_8205b8a4();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  uVar6 = (uint)uVar7;
  uVar5 = uVar6 | 0xf;
  if (uVar5 != 0xffffffff) {
    uVar3 = *(uint *)(iVar4 + 0x18);
    uVar1 = uVar3 >> 1;
    uVar6 = uVar5;
    if ((uVar5 / 3 < uVar1) && (uVar3 <= -uVar1 - 2)) {
      uVar6 = uVar1 + uVar3;
    }
  }
  iVar2 = FUN_8205a1e0(uVar6 + 1);
  if (param_3 != 0) {
    FUN_8205bb60();
  }
  FUN_820136e0();
  *(uint *)(iVar4 + 0x18) = uVar6;
  *(int *)(iVar4 + 0x14) = param_3;
  *(int *)(iVar4 + 4) = iVar2;
  iVar4 = iVar4 + 4;
  if (0xf < uVar6) {
    iVar4 = iVar2;
  }
  *(undefined1 *)(iVar4 + param_3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820138e0 @ 820138e0 ==== */

void FUN_820138e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82013998 @ 82013998 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82013998(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82013a20 @ 82013a20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82013a20(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  iVar3 = (int)uVar6;
  if (*(uint *)(iVar3 + 0x14) < param_3) {
    FUN_8205a3f8();
  }
  uVar4 = *(int *)(iVar3 + 0x14) - param_3;
  if (param_4 < uVar4) {
    uVar4 = param_4;
  }
  if (iVar1 == iVar3) {
    FUN_82013750();
    FUN_82013750();
  }
  else {
    cVar2 = FUN_820138e0();
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)(iVar1 + 4);
      FUN_8205bb60();
      *(uint *)(iVar1 + 0x14) = uVar4;
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined1 *)((int)puVar5 + uVar4) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82013b08 @ 82013b08 ==== */

void FUN_82013b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82013c10 @ 82013c10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82013c10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82013c78 @ 82013c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82013c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82013ce8 @ 82013ce8 ==== */

void FUN_82013ce8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82014050 @ 82014050 ==== */

undefined4 FUN_82014050(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    pcVar3 = (char *)(param_1 + 0x14);
    do {
      cVar1 = *param_2;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}


/* ==== FUN_820140a0 @ 820140a0 ==== */

undefined4 FUN_820140a0(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_2 < *param_1) || (param_2[1] < param_1[1])) || (param_1[2] < param_2[2])) ||
     (uVar1 = 1, param_1[3] < param_2[3])) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_820140f0 @ 820140f0 ==== */

undefined4 FUN_820140f0(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((param_1[3] <= param_2[1]) || (param_2[3] <= param_1[1])) || (param_1[2] <= *param_2)) ||
     (uVar1 = 1, param_2[2] <= *param_1)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_82014140 @ 82014140 ==== */

void FUN_82014140(float *param_1,float *param_2)

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


/* ==== FUN_82014198 @ 82014198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014218 @ 82014218 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014218(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820142d8 @ 820142d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820142d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014360 @ 82014360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820143e0 @ 820143e0 ==== */

double FUN_820143e0(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    return (double)DAT_820016c4;
  }
  fVar1 = *(float *)(DAT_82072c98 + 0x1978) * *(float *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
  }
  return (double)(*(float *)(DAT_82072c98 + 0x1598) * DAT_820016bc + fVar1);
}


/* ==== FUN_82014438 @ 82014438 ==== */

double FUN_82014438(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x400) != 0) {
    fVar1 = *(float *)(DAT_82072c98 + 0x1978) * *(float *)(param_1 + 0x23c);
    if (*(int *)(param_1 + 0x2d8) != 0) {
      fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
    }
    return (double)(*(float *)(DAT_82072c98 + 0x1598) * DAT_820016bc + *(float *)(param_1 + 0x138) +
                   fVar1);
  }
  return (double)DAT_820016c4;
}


/* ==== FUN_820144a0 @ 820144a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820144a0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_8205b89c();
  uVar1 = DAT_820016c4;
  puVar3 = (undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(iVar2 + 0xc) = DAT_820016c4;
  iVar4 = 0x35;
  *(undefined4 *)(iVar2 + 8) = uVar1;
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  *(undefined4 *)(iVar2 + 0x24) = uVar1;
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  *(undefined4 *)(iVar2 + 0x40) = uVar1;
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  *(undefined4 *)(iVar2 + 0x50) = uVar1;
  *(undefined4 *)(iVar2 + 0x4c) = uVar1;
  *(undefined4 *)(iVar2 + 0x58) = uVar1;
  *(undefined4 *)(iVar2 + 0x54) = uVar1;
  *(undefined4 *)(iVar2 + 0x60) = uVar1;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  *(undefined4 *)(iVar2 + 0x68) = uVar1;
  *(undefined4 *)(iVar2 + 100) = uVar1;
  *(undefined4 *)(iVar2 + 0x9c) = uVar1;
  *(undefined4 *)(iVar2 + 0x98) = uVar1;
  *(undefined4 *)(iVar2 + 0xa4) = uVar1;
  *(undefined4 *)(iVar2 + 0xa0) = uVar1;
  *(undefined4 *)(iVar2 + 0xac) = uVar1;
  *(undefined4 *)(iVar2 + 0xa8) = uVar1;
  *(undefined4 *)(iVar2 + 0xb4) = uVar1;
  *(undefined4 *)(iVar2 + 0xb0) = uVar1;
  do {
    puVar3[7] = uVar1;
    puVar3[6] = uVar1;
    puVar3[5] = uVar1;
    puVar3 = puVar3 + 4;
    *puVar3 = uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  *(undefined4 *)(iVar2 + 0x48) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014710 @ 82014710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820147a0 @ 820147a0 ==== */

void FUN_820147a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_2;
  fVar6 = *param_3 - fVar5;
  fVar4 = param_3[1] - param_2[1];
  fVar3 = fVar4 * (param_4[1] - param_2[1]) + fVar6 * (*param_4 - fVar5);
  if (DAT_820016c4 <= fVar3) {
    fVar2 = fVar4 * fVar4 + fVar6 * fVar6;
    if (fVar3 <= fVar2) {
      fVar1 = param_2[1];
      fVar2 = DAT_820016c0 / fVar2;
      *param_1 = fVar5 + fVar2 * fVar6 * fVar3;
      param_1[1] = fVar2 * fVar4 * fVar3 + fVar1;
      return;
    }
    fVar6 = *param_3;
    fVar5 = param_3[1];
  }
  else {
    fVar6 = *param_2;
    fVar5 = param_2[1];
  }
  *param_1 = fVar6;
  param_1[1] = fVar5;
  return;
}


/* ==== FUN_82014848 @ 82014848 ==== */

undefined4 FUN_82014848(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  bool bVar7;
  
  fVar1 = *param_2;
  fVar2 = param_4[1];
  fVar3 = *param_1;
  fVar4 = *param_4;
  fVar5 = *param_3;
  bVar7 = (param_2[1] - param_3[1]) * (fVar4 - fVar5) - (fVar1 - fVar5) * (fVar2 - param_3[1]) <
          DAT_820016c4;
  if (((fVar4 - fVar1) * (param_1[1] - param_2[1]) - (fVar3 - fVar1) * (fVar2 - param_2[1]) <
       DAT_820016c4 != bVar7) ||
     (uVar6 = 1,
     bVar7 != (param_3[1] - param_1[1]) * (fVar4 - fVar3) - (fVar2 - param_1[1]) * (fVar5 - fVar3) <
              DAT_820016c4)) {
    uVar6 = 0;
  }
  return uVar6;
}


/* ==== FUN_82014928 @ 82014928 ==== */

void FUN_82014928(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_820016c0;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_2[1];
  fVar4 = param_4[1];
  fVar5 = *param_4;
  fVar6 = *param_2;
  fVar7 = DAT_820016c0 /
          ((param_3[1] - fVar2) * (fVar6 - fVar1) - (fVar3 - fVar2) * (*param_3 - fVar1));
  *param_6 = ((fVar5 - fVar1) * (param_3[1] - fVar2) - (fVar4 - fVar2) * (*param_3 - fVar1)) * fVar7
  ;
  fVar7 = ((fVar4 - fVar2) * (fVar6 - fVar1) - (fVar5 - fVar1) * (fVar3 - fVar2)) * fVar7;
  *param_7 = fVar7;
  *param_5 = (fVar8 - *param_6) - fVar7;
  return;
}


/* ==== FUN_820149a8 @ 820149a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820149a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014a00 @ 82014a00 ==== */

void FUN_82014a00(uint param_1,uint param_2)

{
  short *psVar1;
  
  if (param_1 <= param_2) {
    return;
  }
  do {
    psVar1 = (short *)(param_1 - 2);
    param_1 = param_1 - 2;
    if (*psVar1 == 10) {
      return;
    }
  } while (param_2 < param_1);
  return;
}


/* ==== FUN_82014a28 @ 82014a28 ==== */

void FUN_82014a28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82014ad0 @ 82014ad0 ==== */

void FUN_82014ad0(char *param_1)

{
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  return;
}


/* ==== FUN_82014af8 @ 82014af8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014af8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014b80 @ 82014b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014b80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014be0 @ 82014be0 ==== */

uint FUN_82014be0(byte *param_1,uint param_2,uint param_3)

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
      uVar4 = *(uint *)(&DAT_82001a78 + (uVar4 & 0xff ^ uVar6) * 4) ^ uVar4 >> 8;
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
      uVar4 = *(uint *)(&DAT_82001a78 + (uVar4 & 0xff ^ uVar5) * 4) ^ uVar4 >> 8;
      uVar6 = uVar6 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar6 != 0);
  }
  return ~uVar4;
}


/* ==== FUN_82014cc0 @ 82014cc0 ==== */

void FUN_82014cc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82014d38 @ 82014d38 ==== */

undefined4 FUN_82014d38(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = (byte)param_3;
  if (param_3 < 0x80) {
    *param_1 = bVar1;
    return 1;
  }
  if (param_3 < 0x800) {
    if (1 < param_2) {
      param_1[1] = (bVar1 & 0x3f) + 0x80;
      *param_1 = (char)(param_3 >> 6) - 0x40;
      return 2;
    }
  }
  else if (param_3 < 0x10000) {
    if (2 < param_2) {
      param_1[1] = ((byte)(param_3 >> 6) & 0x3f) + 0x80;
      *param_1 = (char)(param_3 >> 0xc) - 0x20;
      param_1[2] = (bVar1 & 0x3f) + 0x80;
      return 3;
    }
  }
  else if ((param_3 < 0x110000) && (3 < param_2)) {
    param_1[1] = ((byte)(param_3 >> 0xc) & 0x3f) + 0x80;
    *param_1 = (char)(param_3 >> 0x12) - 0x10;
    param_1[2] = ((byte)(param_3 >> 6) & 0x3f) + 0x80;
    param_1[3] = (bVar1 & 0x3f) + 0x80;
    return 4;
  }
  return 0;
}


/* ==== FUN_82014e18 @ 82014e18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014e18(undefined4 param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  pbVar2 = (byte *)((ulonglong)uVar6 >> 0x20);
  pbVar5 = pbVar2;
  while ((pbVar5 < pbVar2 + (int)uVar6 + -1 && ((param_4 == (ushort *)0x0 || (param_3 < param_4)))))
  {
    uVar1 = *param_3;
    uVar4 = (uint)uVar1;
    if (uVar4 == 0) break;
    param_3 = param_3 + 1;
    if (uVar4 < 0x80) {
      *pbVar5 = (byte)uVar1;
      pbVar5 = pbVar5 + 1;
    }
    else {
      iVar3 = FUN_82014d38(pbVar5,(int)(pbVar2 + ((int)uVar6 - (int)pbVar5) + -1),uVar4);
      pbVar5 = pbVar5 + iVar3;
    }
  }
  *pbVar5 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014ea8 @ 82014ea8 ==== */

int FUN_82014ea8(ushort *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  while ((param_2 == (ushort *)0x0 || (param_1 < param_2))) {
    uVar2 = (uint)*param_1;
    if (uVar2 == 0) {
      return iVar1;
    }
    param_1 = param_1 + 1;
    if (uVar2 < 0x80) {
      iVar1 = iVar1 + 1;
    }
    else {
      if (uVar2 < 0x800) {
        iVar3 = 2;
      }
      else if (uVar2 < 0x10000) {
        iVar3 = 3;
      }
      else {
        iVar3 = 4 - (uint)(0x10ffff < uVar2);
      }
      iVar1 = iVar3 + iVar1;
    }
  }
  return iVar1;
}


/* ==== FUN_82014f28 @ 82014f28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82014f28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82014fa8 @ 82014fa8 ==== */

uint FUN_82014fa8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = DAT_820016c4;
  if ((DAT_820016c4 <= fVar1) && (fVar2 = fVar1, DAT_820016c0 < fVar1)) {
    fVar2 = DAT_820016c0;
  }
  fVar1 = param_1[1];
  fVar5 = DAT_820016c4;
  if ((DAT_820016c4 <= fVar1) && (fVar5 = fVar1, DAT_820016c0 < fVar1)) {
    fVar5 = DAT_820016c0;
  }
  fVar1 = param_1[2];
  fVar4 = DAT_820016c4;
  if ((DAT_820016c4 <= fVar1) && (fVar4 = fVar1, DAT_820016c0 < fVar1)) {
    fVar4 = DAT_820016c0;
  }
  fVar1 = param_1[3];
  fVar3 = DAT_820016c4;
  if ((DAT_820016c4 <= fVar1) && (fVar3 = fVar1, DAT_820016c0 < fVar1)) {
    fVar3 = DAT_820016c0;
  }
  return (int)(fVar3 * DAT_82001730 + DAT_82001760) << 0x18 |
         (int)(fVar4 * DAT_82001730 + DAT_82001760) << 0x10 |
         (int)(fVar5 * DAT_82001730 + DAT_82001760) << 8 |
         (int)(fVar2 * DAT_82001730 + DAT_82001760);
}


/* ==== FUN_820150a8 @ 820150a8 ==== */

void FUN_820150a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820151d8 @ 820151d8 ==== */

void FUN_820151d8(uint *param_1,uint param_2)

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


/* ==== FUN_82015230 @ 82015230 ==== */

int FUN_82015230(void)

{
  return DAT_82072c98 + 0x1558;
}


/* ==== FUN_82015240 @ 82015240 ==== */

void FUN_82015240(double param_1,int param_2)

{
  int iVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  iVar1 = param_2 * 0x10 + DAT_82072c98 + 0x1558;
  local_20 = *(float *)(iVar1 + 200);
  local_1c = *(undefined4 *)(iVar1 + 0xcc);
  local_18 = *(undefined4 *)(iVar1 + 0xd0);
  local_14 = (float)((double)(*(float *)(DAT_82072c98 + 0x1558) * *(float *)(iVar1 + 0xd4)) *
                    param_1);
  FUN_82014fa8(&local_20);
  return;
}


/* ==== FUN_820152b8 @ 820152b8 ==== */

void FUN_820152b8(float *param_1)

{
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_20 = *param_1;
  fStack_1c = param_1[1];
  fStack_18 = param_1[2];
  fStack_14 = *(float *)(DAT_82072c98 + 0x1558) * param_1[3];
  FUN_82014fa8(&fStack_20);
  return;
}


/* ==== FUN_82015320 @ 82015320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82015320(void)

{
  if (DAT_820016c0 <= *(float *)(DAT_82072c98 + 0x1558)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82015368 @ 82015368 ==== */

void FUN_82015368(char *param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    param_2 = (char *)0xffffffff;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return;
    }
    if (*param_1 == '\0') break;
    if ((*param_1 == '#') && (param_1[1] == '#')) {
      return;
    }
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== FUN_820153a8 @ 820153a8 ==== */

void FUN_820153a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82015528 @ 82015528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82015528(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82015690 @ 82015690 ==== */

void FUN_82015690(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820158d0 @ 820158d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820158d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = DAT_82072c98;
  bVar3 = param_1 != *(int *)(DAT_82072c98 + 0x1c10);
  *(bool *)(DAT_82072c98 + 0x1c1c) = bVar3;
  if (bVar3) {
    *(undefined1 *)(iVar1 + 0x1c1f) = 0;
    *(undefined1 *)(iVar1 + 0x1c20) = 0;
    *(undefined4 *)(iVar1 + 0x1c48) = 0xffffffff;
    uVar2 = DAT_820016c4;
    *(undefined4 *)(iVar1 + 0x1c18) = DAT_820016c4;
    if (param_1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c5c) = uVar2;
      *(int *)(iVar1 + 0x1c58) = param_1;
    }
  }
  *(int *)(iVar1 + 0x1c10) = param_1;
  *(undefined4 *)(iVar1 + 0x1c40) = param_2;
  *(undefined1 *)(iVar1 + 0x1c1d) = 0;
  *(undefined1 *)(iVar1 + 0x1c1e) = 0;
  *(undefined1 *)(iVar1 + 0x1c21) = 0;
  if (param_1 != 0) {
    *(int *)(iVar1 + 0x1c14) = param_1;
    if (((*(int *)(iVar1 + 0x1d90) == param_1) || (*(int *)(iVar1 + 0x1d9c) == param_1)) ||
       (uVar2 = 1, *(int *)(iVar1 + 0x1da4) == param_1)) {
      uVar2 = 4;
    }
    *(undefined4 *)(iVar1 + 0x1c44) = uVar2;
  }
  *(undefined1 *)(iVar1 + 0x1c22) = 0;
  *(undefined4 *)(iVar1 + 0x1c24) = 0;
  *(undefined4 *)(iVar1 + 0x1c28) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82015988 @ 82015988 ==== */

void FUN_82015988(void)

{
  FUN_820158d0(0,0);
  return;
}


/* ==== FUN_82015998 @ 82015998 ==== */

void FUN_82015998(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_82072c98;
  *(int *)(DAT_82072c98 + 0x1bfc) = param_1;
  *(undefined1 *)(iVar2 + 0x1c04) = 0;
  *(undefined1 *)(iVar2 + 0x1c05) = 0;
  uVar1 = DAT_820016c4;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x1c00) == param_1) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x1c0c) = DAT_820016c4;
  *(undefined4 *)(iVar2 + 0x1c08) = uVar1;
  return;
}


/* ==== FUN_820159d8 @ 820159d8 ==== */

void FUN_820159d8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  if (*(int *)(DAT_82072c98 + 0x1c10) == param_1) {
    *(int *)(DAT_82072c98 + 0x1c14) = param_1;
  }
  if (*(int *)(iVar1 + 0x1c4c) != param_1) {
    return;
  }
  *(undefined1 *)(iVar1 + 0x1c50) = 1;
  return;
}


/* ==== FUN_82015a08 @ 82015a08 ==== */

void FUN_82015a08(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(DAT_82072c98 + 0x1c21) = 1;
  *(undefined1 *)(iVar1 + 0x1c20) = 1;
  *(uint *)(iVar1 + 0x1c80) = *(uint *)(iVar1 + 0x1c80) | 4;
  return;
}


/* ==== FUN_82015a30 @ 82015a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82015a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82015ab0 @ 82015ab0 ==== */

void FUN_82015ab0(undefined4 param_1)

{
  if (DAT_82072c98 != 0) {
    *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82015ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_820707e0)(param_1,DAT_82072c9c);
  return;
}


/* ==== FUN_82015ae8 @ 82015ae8 ==== */

void FUN_82015ae8(int param_1)

{
  if ((param_1 != 0) && (DAT_82072c98 != 0)) {
    *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x82015b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_820707e4)(param_1,DAT_82072c9c);
  return;
}


/* ==== FUN_82015b28 @ 82015b28 ==== */

undefined1 * FUN_82015b28(void)

{
  undefined1 *puVar1;
  
  if (*(code **)(DAT_82072c98 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82015b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(DAT_82072c98 + 0xd0))(*(undefined4 *)(DAT_82072c98 + 0xd8));
    return puVar1;
  }
  return &DAT_82002015;
}


/* ==== FUN_82015b58 @ 82015b58 ==== */

void FUN_82015b58(undefined4 param_1)

{
  if (*(code **)(DAT_82072c98 + 0xd4) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82015b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_82072c98 + 0xd4))(*(undefined4 *)(DAT_82072c98 + 0xd8),param_1);
  return;
}


/* ==== FUN_82015b80 @ 82015b80 ==== */

undefined4 FUN_82015b80(void)

{
  return DAT_82072c98;
}


/* ==== FUN_82015b90 @ 82015b90 ==== */

int FUN_82015b90(void)

{
  return DAT_82072c98 + 8;
}


/* ==== FUN_82015ba0 @ 82015ba0 ==== */

byte FUN_82015ba0(void)

{
  byte bVar1;
  
  bVar1 = *(char *)(DAT_82072c98 + 0xfc) != '\0';
  if (*(char *)(DAT_82072c98 + 0xfd) != '\0') {
    bVar1 = bVar1 | 2;
  }
  if (*(char *)(DAT_82072c98 + 0xfe) != '\0') {
    bVar1 = bVar1 | 4;
  }
  if (*(char *)(DAT_82072c98 + 0xff) == '\0') {
    return bVar1;
  }
  return bVar1 | 8;
}


/* ==== FUN_82015c30 @ 82015c30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82015c30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82015d38 @ 82015d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82015d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82015df0 @ 82015df0 ==== */

int FUN_82015df0(double param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (double)DAT_820016c4) {
    return 1;
  }
  if (param_1 < param_2) {
    if ((double)DAT_820016c4 < param_4) {
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


/* ==== FUN_82015e88 @ 82015e88 ==== */

undefined4 FUN_82015e88(int param_1,char param_2)

{
  int iVar1;
  double dVar2;
  
  if (-1 < param_1) {
    iVar1 = (param_1 + 0x121) * 4;
    dVar2 = (double)*(float *)(iVar1 + DAT_82072c98);
    if (dVar2 == (double)DAT_820016c4) {
      return 1;
    }
    if ((param_2 != '\0') && ((double)*(float *)(DAT_82072c98 + 0x8c) < dVar2)) {
      dVar2 = (double)*(float *)(iVar1 + DAT_82072c98);
                    /* WARNING: Subroutine does not return */
      FUN_82015df0((double)(float)(dVar2 - (double)*(float *)(DAT_82072c98 + 0x18)),dVar2,
                   (double)*(float *)(DAT_82072c98 + 0x8c),(double)*(float *)(DAT_82072c98 + 0x90));
    }
  }
  return 0;
}


/* ==== FUN_82015f18 @ 82015f18 ==== */

undefined4 FUN_82015f18(int param_1,char param_2)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)((param_1 + 0x108) * 4 + DAT_82072c98);
  if (dVar2 == (double)DAT_820016c4) {
    uVar1 = 1;
  }
  else {
    if ((param_2 != '\0') && ((double)*(float *)(DAT_82072c98 + 0x8c) < dVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_82015df0((double)(float)(dVar2 - (double)*(float *)(DAT_82072c98 + 0x18)),dVar2,
                   (double)*(float *)(DAT_82072c98 + 0x8c),
                   (double)(*(float *)(DAT_82072c98 + 0x90) * DAT_82001760));
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_82015fa0 @ 82015fa0 ==== */

bool FUN_82015fa0(double param_1,int param_2)

{
  if (param_1 < (double)DAT_820016c4) {
    param_1 = (double)*(float *)(DAT_82072c98 + 0x30);
  }
  return (float)(param_1 * param_1) <= *(float *)((param_2 + 0x11c) * 4 + DAT_82072c98);
}


/* ==== FUN_82015fe8 @ 82015fe8 ==== */

bool FUN_82015fe8(double param_1,int param_2)

{
  if (*(char *)(DAT_82072c98 + param_2 + 0xec) == '\0') {
    return false;
  }
  if (param_1 < (double)DAT_820016c4) {
    param_1 = (double)*(float *)(DAT_82072c98 + 0x30);
  }
  return (float)(param_1 * param_1) <= *(float *)((param_2 + 0x11c) * 4 + DAT_82072c98);
}


/* ==== FUN_82016048 @ 82016048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016048(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016098 @ 82016098 ==== */

bool FUN_82016098(void)

{
  if (*(int *)(DAT_82072c98 + 0x1c10) != 0) {
    return *(int *)(DAT_82072c98 + 0x1c78) == *(int *)(DAT_82072c98 + 0x1c10);
  }
  return false;
}


/* ==== FUN_820160c8 @ 820160c8 ==== */

undefined4 FUN_820160c8(void)

{
  if ((*(int *)(DAT_82072c98 + 0x1d88) == *(int *)(DAT_82072c98 + 0x1c78)) &&
     (*(int *)(DAT_82072c98 + 0x1d88) != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_820160f8 @ 820160f8 ==== */

void FUN_820160f8(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_82072c98;
  piVar1 = (int *)(DAT_82072c98 + 0x1c78);
  if (*(int *)(DAT_82072c98 + 0x1bfc) == *piVar1) {
    *(undefined1 *)(DAT_82072c98 + 0x1c04) = 1;
  }
  if (*(int *)(iVar2 + 0x1c10) != *piVar1) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x1c1d) = 1;
  return;
}


/* ==== FUN_82016130 @ 82016130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016238 @ 82016238 ==== */

void FUN_82016238(double param_1,double param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = DAT_820016c4;
  dVar5 = (double)*(float *)(param_4 + 0xc);
  dVar4 = (double)*(float *)(param_4 + 0x10);
  dVar3 = (double)(float)((double)*(float *)(param_4 + 0x14) + dVar5);
  dVar6 = (double)(float)((double)*(float *)(param_4 + 0x18) + dVar4);
  if (param_2 == (double)DAT_820016c4) {
    dVar3 = (double)(float)(dVar3 - (double)DAT_820016c0);
    dVar6 = (double)(float)(dVar6 - (double)DAT_820016c0);
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
          *param_3 = DAT_820016c4;
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
      goto LAB_82016290;
    }
    *param_3 = (float)(dVar3 - param_2);
    param_3[1] = (float)(dVar4 + param_1);
  }
  fVar2 = (float)(dVar3 + param_2);
  fVar1 = (float)(dVar6 - param_1);
LAB_82016290:
  param_3[2] = fVar2;
  param_3[3] = fVar1;
  return;
}


/* ==== FUN_82016318 @ 82016318 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016318(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820163e8 @ 820163e8 ==== */

void FUN_820163e8(int param_1,uint param_2,int param_3)

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


/* ==== FUN_820164d0 @ 820164d0 ==== */

bool FUN_820164d0(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(DAT_82072c98 + 0x1d84);
  iVar6 = *(int *)(DAT_82072c98 + 0x1bd8);
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


/* ==== FUN_82016558 @ 82016558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016558(int param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 != 0) && (((int)*(char *)(param_1 + 0xb0) & param_3) == 0)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016688 @ 82016688 ==== */

void FUN_82016688(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x18);
  *param_1 = *(undefined4 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x14);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_820166a8 @ 820166a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820166a8(int param_1,float *param_2,uint param_3)

{
  float fVar1;
  
  if ((param_3 != 0) &&
     (((int)(*(uint *)(param_1 + 0xb0) << 8 | *(uint *)(param_1 + 0xb0) >> 0x18) >> 0x18 & param_3)
      == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfff1ffff;
  fVar1 = DAT_820016c4;
  if (DAT_820016c4 < *param_2) {
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


/* ==== FUN_82016768 @ 82016768 ==== */

void FUN_82016768(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(uint *)(DAT_82072c98 + 0x1cb4) = *(uint *)(DAT_82072c98 + 0x1cb4) | 1;
  *(undefined4 *)(iVar1 + 0x1cc4) = *param_1;
  *(undefined4 *)(iVar1 + 0x1cc8) = param_1[1];
  *(undefined4 *)(iVar1 + 0x1ccc) = *param_3;
  *(undefined4 *)(iVar1 + 0x1cd0) = param_3[1];
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(int *)(iVar1 + 0x1cb8) = param_2;
  return;
}


/* ==== FUN_820167b0 @ 820167b0 ==== */

void FUN_820167b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(uint *)(DAT_82072c98 + 0x1cb4) = *(uint *)(DAT_82072c98 + 0x1cb4) | 2;
  *(undefined4 *)(iVar1 + 0x1cd4) = *param_1;
  *(undefined4 *)(iVar1 + 0x1cd8) = param_1[1];
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(int *)(iVar1 + 0x1cbc) = param_2;
  return;
}


/* ==== FUN_820167e8 @ 820167e8 ==== */

undefined4 FUN_820167e8(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  return *(undefined4 *)(*(int *)(iVar1 + 0x1bd8) + 0x244);
}


/* ==== FUN_82016808 @ 82016808 ==== */

void FUN_82016808(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_82072c98 + 0x1980);
  *param_1 = *(undefined4 *)(DAT_82072c98 + 0x197c);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_82016828 @ 82016828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016828(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820168d0 @ 820168d0 ==== */

void FUN_820168d0(double param_1,double param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1bd8);
  if (*(char *)(iVar2 + 0x8f) != '\0') {
    return;
  }
  dVar3 = (double)DAT_820016c4;
  if (param_1 == dVar3) {
    if (param_2 < dVar3) {
      param_2 = (double)*(float *)(DAT_82072c98 + 0x15a4);
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


/* ==== FUN_82016980 @ 82016980 ==== */

void FUN_82016980(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0xd4);
  *param_1 = *(undefined4 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0xd0);
  param_1[1] = uVar1;
  return;
}


/* ==== FUN_820169a0 @ 820169a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820169a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1bd8);
  *(undefined4 *)(iVar1 + 0xd0) = *param_1;
  *(undefined4 *)(iVar1 + 0xd4) = param_1[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016a10 @ 82016a10 ==== */

double FUN_82016a10(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_82072c98 + 0x1bd8);
  return (double)((*(float *)(iVar1 + 0xd0) - *(float *)(iVar1 + 0xc)) + *(float *)(iVar1 + 0x58));
}


/* ==== FUN_82016a38 @ 82016a38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016a38(void)

{
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016ad0 @ 82016ad0 ==== */

void FUN_82016ad0(double param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_82072c98;
  puVar1 = (uint *)(DAT_82072c98 + 0x1c64);
  *(float *)(DAT_82072c98 + 0x1c68) = (float)param_1;
  *(uint *)(iVar2 + 0x1c64) = *puVar1 | 1;
  return;
}


/* ==== FUN_82016af0 @ 82016af0 ==== */

double FUN_82016af0(void)

{
  return (double)*(float *)(DAT_82072c98 + 0x1974);
}


/* ==== FUN_82016b00 @ 82016b00 ==== */

double FUN_82016b00(void)

{
  return (double)(*(float *)(DAT_82072c98 + 0x1974) + *(float *)(DAT_82072c98 + 0x15a8));
}


/* ==== FUN_82016b18 @ 82016b18 ==== */

double FUN_82016b18(void)

{
  return (double)(*(float *)(DAT_82072c98 + 0x1598) * DAT_820016bc +
                 *(float *)(DAT_82072c98 + 0x1974));
}


/* ==== FUN_82016b38 @ 82016b38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016b38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016b98 @ 82016b98 ==== */

double FUN_82016b98(void)

{
  return (double)*(float *)(*(int *)(DAT_82072c98 + 0x1bd8) + 100);
}


/* ==== FUN_82016bb0 @ 82016bb0 ==== */

void FUN_82016bb0(double param_1,int param_2)

{
  undefined4 uVar1;
  
  *(float *)(param_2 + 0x6c) = (float)param_1;
  uVar1 = DAT_820016c4;
  *(undefined4 *)(param_2 + 0x74) = DAT_820016c4;
  *(undefined4 *)(param_2 + 0x7c) = uVar1;
  return;
}


/* ==== FUN_82016bc8 @ 82016bc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016bc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016c60 @ 82016c60 ==== */

int FUN_82016c60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_82072c98 + 0x1d5c) + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x24;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(DAT_82072c98 + 0x1d64) + 4);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x8000000) != 0)) {
        return iVar1;
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x24;
    } while (-1 < iVar3);
  }
  return 0;
}


/* ==== FUN_82016cb0 @ 82016cb0 ==== */

int FUN_82016cb0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_82072c98 + 0x1d5c) + -1;
  if (-1 < iVar3) {
    iVar4 = iVar3 * 0x24;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(DAT_82072c98 + 0x1d64) + 4);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 8) & 0x8000000) != 0)) {
        if (*(char *)(iVar2 + 0x8a) == '\0') {
LAB_82016d04:
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (*(char *)(iVar2 + 0x91) != '\0') goto LAB_82016d04;
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


/* ==== FUN_82016d28 @ 82016d28 ==== */

void FUN_82016d28(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined4 *)(DAT_82072c98 + 0x1d88) = param_1;
  *(int *)(iVar1 + 0x1dbc) = param_2;
  *(undefined4 *)(iVar1 + 0x1d8c) = param_3;
  *(undefined4 *)((param_2 + 0xbd) * 4 + *(int *)(iVar1 + 0x1d84)) = param_1;
  iVar1 = param_2 * 0x10 + *(int *)(iVar1 + 0x1d84);
  *(undefined4 *)(iVar1 + 0x2fc) = *param_4;
  *(undefined4 *)(iVar1 + 0x300) = param_4[1];
  *(undefined4 *)(iVar1 + 0x304) = param_4[2];
  *(undefined4 *)(iVar1 + 0x308) = param_4[3];
  return;
}


/* ==== FUN_82016d88 @ 82016d88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016d88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_82072c98;
  iVar2 = *(int *)(param_2 + 0x124);
  if (*(int *)(DAT_82072c98 + 0x1d84) != param_2) {
    *(undefined1 *)(DAT_82072c98 + 0x1dc5) = 0;
  }
  *(int *)(iVar1 + 0x1d84) = param_2;
  *(int *)(iVar1 + 0x1d88) = param_1;
  *(int *)(iVar1 + 0x1dbc) = iVar2;
  *(undefined4 *)(iVar1 + 0x1d8c) = *(undefined4 *)(param_2 + 300);
  *(int *)((iVar2 + 0xbd) * 4 + param_2) = param_1;
  if (*(int *)(iVar1 + 0x1c78) == param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(iVar1 + 0x1c44) == 4) {
    *(undefined1 *)(iVar1 + 0x1dc3) = 1;
    return;
  }
  *(undefined1 *)(iVar1 + 0x1dc2) = 1;
  return;
}


/* ==== FUN_82016e68 @ 82016e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82016e68(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_82072c98;
  iVar2 = *(int *)(DAT_82072c98 + 0x1bd8);
  *param_1 = iVar2;
  param_1[1] = *(int *)(iVar1 + 0x1c78);
  param_1[2] = *(int *)(iVar2 + 300);
  param_1[7] = *(int *)(iVar1 + 0x1c7c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82016f00 @ 82016f00 ==== */

void FUN_82016f00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82017050 @ 82017050 ==== */

double FUN_82017050(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == 0) {
    dVar2 = (double)*(float *)((param_1 + 0xc0) * 4 + DAT_82072c98);
  }
  else {
    dVar1 = (double)DAT_820016c4;
    dVar3 = (double)*(float *)((param_1 + 0x521) * 4 + DAT_82072c98);
    dVar2 = dVar1;
    if (dVar1 <= dVar3) {
      if (param_2 == 1) {
        if (dVar3 == dVar1) {
          dVar2 = (double)DAT_820016c0;
        }
      }
      else {
        if (param_2 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_82015df0((double)(float)(dVar3 - (double)*(float *)(DAT_82072c98 + 0x18)),dVar3,
                       (double)(*(float *)(DAT_82072c98 + 0x8c) * DAT_820016fc),
                       (double)(*(float *)(DAT_82072c98 + 0x90) * DAT_82002030));
        }
        if (param_2 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_82015df0((double)(float)(dVar3 - (double)*(float *)(DAT_82072c98 + 0x18)),dVar3,
                       (double)(*(float *)(DAT_82072c98 + 0x8c) * DAT_82001fe8),
                       (double)(*(float *)(DAT_82072c98 + 0x90) * DAT_820016bc));
        }
        if (param_2 == 5) {
                    /* WARNING: Subroutine does not return */
          FUN_82015df0((double)(float)(dVar3 - (double)*(float *)(DAT_82072c98 + 0x18)),dVar3,
                       (double)(*(float *)(DAT_82072c98 + 0x8c) * DAT_820016fc),
                       (double)(*(float *)(DAT_82072c98 + 0x90) * DAT_82001fe4));
        }
      }
    }
    else if ((param_2 == 2) &&
            (dVar2 = (double)DAT_820016c0, *(float *)((param_1 + 0x539) * 4 + DAT_82072c98) < 0.0))
    {
      dVar2 = dVar1;
    }
  }
  return dVar2;
}


/* ==== FUN_820171b8 @ 820171b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820171b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820174a0 @ 820174a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820174a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017548 @ 82017548 ==== */

void FUN_82017548(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82017708 @ 82017708 ==== */

void FUN_82017708(void)

{
  *(undefined1 *)(DAT_82072c98 + 0x1ef6) = 0;
  return;
}


/* ==== FUN_82017720 @ 82017720 ==== */

void FUN_82017720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined4 *)(DAT_82072c98 + 0x2fec) = param_1;
  *(undefined4 *)(iVar1 + 0x2ff0) = param_2;
  return;
}


/* ==== FUN_82017810 @ 82017810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017890 @ 82017890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017890(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 << 1,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017950 @ 82017950 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017950(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017a08 @ 82017a08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017a08(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 * 0x14,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017ac8 @ 82017ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017ac8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017b38 @ 82017b38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017b38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017bb0 @ 82017bb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017bb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 << 3,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017c70 @ 82017c70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017c70(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 << 6,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017d30 @ 82017d30 ==== */

void FUN_82017d30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82017df0 @ 82017df0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017df0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 * 0x54,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017eb0 @ 82017eb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017eb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 * 0xc,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82017f70 @ 82017f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82017f70(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 * 0x30,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018030 @ 82018030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018030(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 << 2,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820180f0 @ 820180f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820180f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 * 0x24,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820181b0 @ 820181b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820181b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (*(int *)(iVar1 + 4) < iVar4) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    uVar2 = (*DAT_820707e0)(iVar4 * 0x28,DAT_82072c9c);
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_8205d810();
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (DAT_82072c98 != 0)) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
      }
      (*DAT_820707e4)(iVar3,DAT_82072c9c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    *(int *)(iVar1 + 4) = iVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018270 @ 82018270 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018270(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018340 @ 82018340 ==== */

void FUN_82018340(float *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(float *)(param_2 + 0x10) - param_3[1]) + param_4[1];
  if (fVar1 <= DAT_820016c4) {
    fVar1 = DAT_820016c4;
  }
  fVar3 = (*(float *)(param_2 + 0xc) - *param_3) + *param_4;
  fVar2 = DAT_820016c4;
  if (DAT_820016c4 < fVar3) {
    fVar2 = fVar3;
  }
  *param_1 = fVar2;
  param_1[1] = fVar1;
  return;
}


/* ==== FUN_820183a0 @ 820183a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820183a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018418 @ 82018418 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018418(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018510 @ 82018510 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018510(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820185a8 @ 820185a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820185a8(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_8205b8a4();
  pcVar2 = (char *)((ulonglong)uVar8 >> 0x20);
  puVar3 = (uint *)uVar8;
  pcVar5 = pcVar2;
  pcVar6 = param_3;
  if (puVar3 == (uint *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar5 - (int)pcVar2;
  }
  else {
    uVar4 = *puVar3;
  }
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = (int)pcVar6 - (int)param_3;
  if (uVar4 < uVar7) {
    if ((pcVar2 != (char *)0x0) && (DAT_82072c98 != 0)) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
    }
    (*DAT_820707e4)(pcVar2,DAT_82072c9c);
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    (*DAT_820707e0)(uVar7,DAT_82072c9c);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uVar7;
    }
  }
  FUN_8205d810();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820186a8 @ 820186a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820186a8(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_8205b89c();
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_8205c6b0();
  if (iVar1 != 0) {
    iVar1 = FUN_82014cc0();
    if (iVar1 != -1) {
      if (DAT_82072c98 != 0) {
        *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
      }
      iVar2 = (*DAT_820707e0)(iVar1 + param_4,DAT_82072c9c);
      if (iVar2 != 0) {
        iVar3 = FUN_8205d0d0();
        if (iVar3 != iVar1) {
          FUN_8205c760();
          if (DAT_82072c98 != 0) {
            *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + -1;
          }
          (*DAT_820707e4)(iVar2,DAT_82072c9c);
          halt_baddata();
        }
        if (0 < (int)param_4) {
          FUN_8205bac0((uint *)(iVar2 + iVar1),0,param_4);
        }
        FUN_8205c760();
        if (param_3 == (int *)0x0) {
          halt_baddata();
        }
        *param_3 = iVar1;
        halt_baddata();
      }
    }
    FUN_8205c760();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820187d0 @ 820187d0 ==== */

void FUN_820187d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82018998 @ 82018998 ==== */

void FUN_82018998(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82018a40 @ 82018a40 ==== */

void FUN_82018a40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82018aa8 @ 82018aa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018aa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018bb0 @ 82018bb0 ==== */

void FUN_82018bb0(double param_1,double param_2,double param_3)

{
  float fVar1;
  float *in_r6;
  float *in_r7;
  float *in_r8;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_2;
  fVar1 = DAT_820016c4;
  if (param_2 < param_3) {
    dVar5 = param_3;
    param_3 = param_2;
    fVar1 = DAT_82001768;
  }
  dVar4 = param_1;
  if (param_1 < dVar5) {
    fVar1 = DAT_82002108 - fVar1;
    dVar4 = dVar5;
    dVar5 = param_1;
  }
  dVar2 = param_3;
  if (dVar5 < param_3) {
    dVar2 = dVar5;
  }
  dVar3 = (double)DAT_82002104;
  *in_r6 = ABS((float)(dVar5 - param_3) /
               (float)((double)(float)(dVar4 - dVar2) * (double)DAT_82001ff8 + dVar3) + fVar1);
  *in_r7 = (float)((double)(float)(dVar4 - dVar2) / (double)(float)(dVar4 + dVar3));
  *in_r8 = (float)dVar4;
  return;
}


/* ==== FUN_82018c48 @ 82018c48 ==== */

int FUN_82018c48(uint *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_820151d8(param_1,param_2);
  piVar1 = (int *)((ulonglong)uVar3 >> 0x20);
  if ((piVar1 == (int *)(*param_1 * 8 + param_1[2])) || (*piVar1 != (int)uVar3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = piVar1[1];
  }
  return iVar2;
}


/* ==== FUN_82018ca0 @ 82018ca0 ==== */

void FUN_82018ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_82072c98;
  if (param_1 < 1) {
    return;
  }
  do {
    param_1 = param_1 + -1;
    iVar4 = *(int *)(iVar2 + 0x1d14) * 0x14 + *(int *)(iVar2 + 0x1d1c);
    iVar1 = (*(int *)(iVar4 + -0x14) + 0x162) * 0x10;
    iVar3 = iVar1 + iVar2;
    *(undefined4 *)(iVar1 + iVar2) = *(undefined4 *)(iVar4 + -0x10);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar4 + -0xc);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar4 + -8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar4 + -4);
    *(int *)(iVar2 + 0x1d14) = *(int *)(iVar2 + 0x1d14) + -1;
  } while (param_1 != 0);
  return;
}


/* ==== FUN_82018d18 @ 82018d18 ==== */

void FUN_82018d18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_82072c98;
  if (0 < param_1) {
    do {
      iVar3 = *(int *)(iVar1 + 0x1d20) * 0xc + *(int *)(iVar1 + 0x1d28);
      iVar4 = *(int *)(iVar3 + -0xc) * 0xc;
      iVar2 = *(int *)(&UNK_82001e80 + iVar4) + iVar1;
      if (*(int *)(&UNK_82001e78 + iVar4) == 8) {
        if (*(int *)(&UNK_82001e7c + iVar4) == 1) {
          *(undefined4 *)(iVar2 + 0x1558) = *(undefined4 *)(iVar3 + -8);
        }
        else if (*(int *)(&UNK_82001e7c + iVar4) == 2) {
          *(undefined4 *)(iVar2 + 0x1558) = *(undefined4 *)(iVar3 + -8);
          *(undefined4 *)(iVar2 + 0x155c) = *(undefined4 *)(iVar3 + -4);
        }
      }
      *(int *)(iVar1 + 0x1d20) = *(int *)(iVar1 + 0x1d20) + -1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return;
  }
  return;
}


/* ==== FUN_82018da8 @ 82018da8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018da8(void)

{
  FUN_8205b89c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82018ff0 @ 82018ff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82018ff0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820190b0 @ 820190b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820190b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82019178 @ 82019178 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82019178(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820191b8 @ 820191b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820191b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82019228 @ 82019228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82019228(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82019288 @ 82019288 ==== */

undefined4 FUN_82019288(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_82072c98 + 0x1bd8);
  if ((*(char *)(DAT_82072c98 + 0x1dc3) != '\0') && (*(char *)(DAT_82072c98 + 0x1dc2) == '\0')) {
    if (((*(uint *)(DAT_82072c98 + 0x1c7c) & 4) != 0) && ((param_1 & 0x200) == 0)) {
      return 0;
    }
    if ((*(int *)(DAT_82072c98 + 0x1d88) != *(int *)(DAT_82072c98 + 0x1c78)) ||
       (bVar1 = true, *(int *)(DAT_82072c98 + 0x1d88) == 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    return 0;
  }
  if ((*(uint *)(DAT_82072c98 + 0x1c80) & 1) == 0) {
    return 0;
  }
  if (((*(int *)(DAT_82072c98 + 0x1bdc) != iVar2) &&
      ((*(uint *)(DAT_82072c98 + 0x1c80) & 0x80) == 0)) && ((param_1 & 0x100) == 0)) {
    return 0;
  }
  if ((((param_1 & 0x80) == 0) && (iVar3 = *(int *)(DAT_82072c98 + 0x1c10), iVar3 != 0)) &&
     ((iVar3 != *(int *)(DAT_82072c98 + 0x1c78) &&
      ((*(char *)(DAT_82072c98 + 0x1c1d) == '\0' && (iVar3 != *(int *)(iVar2 + 0x50))))))) {
    return 0;
  }
  if ((((*(int *)(DAT_82072c98 + 0x1d84) != 0) &&
       (iVar3 = *(int *)(*(int *)(DAT_82072c98 + 0x1d84) + 0x2e0), iVar3 != 0)) &&
      (*(char *)(iVar3 + 0x8b) != '\0')) && (iVar3 != *(int *)(iVar2 + 0x2e0))) {
    if ((*(uint *)(iVar3 + 8) & 0x8000000) != 0) {
      bVar1 = false;
      goto LAB_820193b0;
    }
    if (((*(uint *)(iVar3 + 8) & 0x4000000) != 0) && (bVar1 = false, (param_1 & 0x20) == 0))
    goto LAB_820193b0;
  }
  bVar1 = true;
LAB_820193b0:
  if ((!bVar1) || (((*(uint *)(DAT_82072c98 + 0x1c7c) & 4) != 0 && ((param_1 & 0x200) == 0)))) {
    return 0;
  }
  if ((*(int *)(DAT_82072c98 + 0x1c78) == *(int *)(iVar2 + 0x50)) &&
     (*(char *)(iVar2 + 0x8c) != '\0')) {
    return 0;
  }
  return 1;
}


/* ==== FUN_820193f8 @ 820193f8 ==== */

double FUN_820193f8(double param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)DAT_820016c4;
  if (param_1 < dVar2) {
    return dVar2;
  }
  iVar1 = *(int *)(DAT_82072c98 + 0x1bd8);
  if (param_1 == dVar2) {
    param_1 = (double)*(float *)(iVar1 + 0x1d8);
  }
  else if (dVar2 < param_1) {
    param_1 = (double)(float)((double)(*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 0x58)) + param_1
                             );
  }
  dVar2 = (double)(float)(param_1 - (double)*param_2);
  if ((double)(float)(param_1 - (double)*param_2) < (double)DAT_820016c0) {
    dVar2 = (double)DAT_820016c0;
  }
  return dVar2;
}


/* ==== FUN_82019468 @ 82019468 ==== */

void FUN_82019468(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820194d8 @ 820194d8 ==== */

uint FUN_820194d8(void)

{
  return -(uint)(*(char *)(**(int **)(DAT_82072c98 + 0x1d80) + 0x34) != '\0') &
         **(int **)(DAT_82072c98 + 0x1d80) + 0x34U;
}


/* ==== FUN_82019500 @ 82019500 ==== */

void FUN_82019500(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82019600 @ 82019600 ==== */

void FUN_82019600(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_820199a8 @ 820199a8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820199a8(void)

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
  
  iVar9 = DAT_82072c98;
  fVar3 = DAT_820016c4;
  uVar6 = DAT_820016bc;
  if (*(int *)(DAT_82072c98 + 0x1be8) != 0) {
    *(float *)(DAT_82072c98 + 0x1bf4) =
         *(float *)(DAT_82072c98 + 0x1bf4) - *(float *)(DAT_82072c98 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar2 = *(float *)(DAT_82072c98 + 0xf4);
  if ((((((fVar2 != DAT_820016c4) || (*(float *)(DAT_82072c98 + 0xf8) != DAT_820016c4)) &&
        ((*(int *)(DAT_82072c98 + 0x1c10) == 0 || (*(char *)(DAT_82072c98 + 0x1c22) == '\0')))) &&
       ((*(int *)(DAT_82072c98 + 0x1c00) == 0 || (*(char *)(DAT_82072c98 + 0x1c06) == '\0')))) &&
      ((iVar7 = *(int *)(DAT_82072c98 + 0x1be8), iVar7 != 0 ||
       (iVar7 = *(int *)(DAT_82072c98 + 0x1bdc), iVar7 != 0)))) && (*(char *)(iVar7 + 0x8d) == '\0')
     ) {
    if (((fVar2 == DAT_820016c4) || (*(char *)(DAT_82072c98 + 0xfc) == '\0')) ||
       (*(char *)(DAT_82072c98 + 0xa0) == '\0')) {
      if (*(char *)(DAT_82072c98 + 0xfc) == '\0') {
        if ((*(char *)(DAT_82072c98 + 0xfd) == '\0') ||
           (bVar5 = true, *(char *)(DAT_82072c98 + 0xb1) != '\0')) {
          bVar5 = false;
        }
        fVar4 = DAT_820016c4;
        if (!bVar5) {
          fVar2 = *(float *)(DAT_82072c98 + 0xf8);
          fVar4 = fVar2;
        }
        if (fVar4 != DAT_820016c4) {
          if (*(int *)(DAT_82072c98 + 0x1be8) != iVar7) {
            uVar8 = *(undefined4 *)(DAT_82072c98 + 0xe4);
            *(undefined4 *)(DAT_82072c98 + 0x1bf4) = DAT_820016bc;
            *(int *)(iVar9 + 0x1be8) = iVar7;
            *(undefined4 *)(iVar9 + 0x1bec) = uVar8;
            *(undefined4 *)(iVar9 + 0x1bf0) = *(undefined4 *)(iVar9 + 0xe8);
            iVar9 = DAT_82072c98;
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
          if (*(int *)(iVar9 + 0x1be8) != iVar7) {
            *(undefined4 *)(iVar9 + 0x1bf4) = uVar6;
            *(int *)(iVar9 + 0x1be8) = iVar7;
            *(undefined4 *)(iVar9 + 0x1bec) = *(undefined4 *)(iVar9 + 0xe4);
            *(undefined4 *)(iVar9 + 0x1bf0) = *(undefined4 *)(iVar9 + 0xe8);
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
      if (*(int *)(DAT_82072c98 + 0x1be8) != iVar7) {
        puVar1 = (undefined4 *)(DAT_82072c98 + 0xe4);
        uVar8 = *(undefined4 *)(DAT_82072c98 + 0xe8);
        *(int *)(DAT_82072c98 + 0x1be8) = iVar7;
        uVar6 = DAT_820016bc;
        *(undefined4 *)(iVar9 + 0x1bec) = *puVar1;
        *(undefined4 *)(iVar9 + 0x1bf4) = uVar6;
        *(undefined4 *)(iVar9 + 0x1bf0) = uVar8;
      }
      fVar3 = *(float *)(iVar7 + 0x23c);
      fVar2 = *(float *)(iVar9 + 0xf4) * DAT_8200176c + fVar3;
      fVar4 = DAT_82001760;
      if ((DAT_82001760 <= fVar2) && (fVar4 = _UNK_82001710, fVar2 <= _UNK_82001710)) {
        fVar4 = fVar2;
      }
      *(float *)(iVar7 + 0x23c) = fVar4;
      if (iVar7 == *(int *)(iVar7 + 0x2e0)) {
        fVar3 = DAT_820016c0 - fVar4 / fVar3;
        _fStack_10 = CONCAT44((fVar3 * *(float *)(iVar7 + 0x14) *
                              (*(float *)(iVar9 + 0xe4) - *(float *)(iVar7 + 0xc))) /
                              *(float *)(iVar7 + 0x14) + *(float *)(iVar7 + 0xc),
                              (fVar3 * *(float *)(iVar7 + 0x18) *
                              (*(float *)(iVar9 + 0xe8) - *(float *)(iVar7 + 0x10))) /
                              *(float *)(iVar7 + 0x18) + *(float *)(iVar7 + 0x10));
        FUN_82016558(iVar7,&fStack_10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}


/* ==== FUN_82019ee8 @ 82019ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82019ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82019f98 @ 82019f98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82019f98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201a038 @ 8201a038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201a038(void)

{
  FUN_8205b8a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201a2a0 @ 8201a2a0 ==== */

void FUN_8201a2a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201a4e8 @ 8201a4e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201a4e8(int param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = DAT_820016c4;
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
  if (*(float *)(param_1 + 0x34) == DAT_820016c4) {
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


/* ==== FUN_8201a670 @ 8201a670 ==== */

void FUN_8201a670(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201a770 @ 8201a770 ==== */

void FUN_8201a770(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201aa90 @ 8201aa90 ==== */

int FUN_8201aa90(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((0 < *(int *)(DAT_82072c98 + 0x1d5c)) &&
     (iVar3 = *(int *)(DAT_82072c98 + 0x1d5c) + -1, -1 < iVar3)) {
    piVar2 = (int *)(*(int *)(DAT_82072c98 + 0x1d64) + iVar3 * 0x24 + 4);
    do {
      iVar4 = *piVar2;
      if (((iVar4 != 0) && (*(char *)(iVar4 + 0x8b) != '\0')) &&
         ((*(uint *)(iVar4 + 8) & 0x8000000) != 0)) {
        iVar5 = param_1;
        if (*(int *)(param_1 + 0x2e0) == iVar4) {
LAB_8201aaf0:
          bVar1 = true;
        }
        else {
          do {
            if (iVar5 == iVar4) goto LAB_8201aaf0;
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
LAB_8201ab28:
            bVar1 = true;
          }
          else {
            do {
              if (iVar6 == iVar5) goto LAB_8201ab28;
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


/* ==== FUN_8201ab78 @ 8201ab78 ==== */

void FUN_8201ab78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = DAT_82072c98;
  if (*(int *)(*(int *)(DAT_82072c98 + 0x1b9c) * 4 + *(int *)(DAT_82072c98 + 0x1ba4) + -4) ==
      param_1) {
    return;
  }
  iVar3 = (int)*(short *)(param_1 + 0x9c);
  iVar2 = *(int *)(DAT_82072c98 + 0x1b9c) + -1;
  if (iVar3 < iVar2) {
    iVar4 = iVar2 - iVar3;
    iVar3 = iVar3 << 2;
    do {
      puVar5 = (undefined4 *)(iVar3 + *(int *)(iVar1 + 0x1ba4));
      *puVar5 = puVar5[1];
      iVar6 = *(int *)(iVar3 + *(int *)(iVar1 + 0x1ba4));
      iVar3 = iVar3 + 4;
      *(short *)(iVar6 + 0x9c) = *(short *)(iVar6 + 0x9c) + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(*(int *)(iVar1 + 0x1ba4) + iVar2 * 4) = param_1;
  *(short *)(param_1 + 0x9c) = (short)iVar2;
  return;
}


/* ==== FUN_8201ac00 @ 8201ac00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201ac00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201acc8 @ 8201acc8 ==== */

int FUN_8201acc8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_82072c98 + 0x1b98);
  piVar1 = piVar2 + *(int *)(DAT_82072c98 + 0x1b90);
  for (; (piVar2 < piVar1 && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
  }
  return (int)piVar2 - *(int *)(DAT_82072c98 + 0x1b98) >> 2;
}


/* ==== FUN_8201ad10 @ 8201ad10 ==== */

void FUN_8201ad10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_82072c98 + 0x1b9c) + -1;
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
      iVar3 = *(int *)(iVar1 + *(int *)(DAT_82072c98 + 0x1ba4));
      if (((iVar3 != param_2) && (*(char *)(iVar3 + 0x8b) != '\0')) &&
         ((*(uint *)(iVar3 + 8) & 0x40200) != 0x40200)) break;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -4;
    } while (-1 < iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201add8 @ 8201add8 ==== */

void FUN_8201add8(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_82072c98;
  fVar2 = DAT_820016c0;
  *(int *)(DAT_82072c98 + 0x1970) = param_1;
  fVar1 = *(float *)(iVar3 + 0x9c) * *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x10);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  iVar4 = *(int *)(iVar3 + 0x1bd8);
  *(float *)(iVar3 + 0x1978) = fVar1;
  fVar1 = DAT_820016c4;
  if (iVar4 != 0) {
    fVar1 = *(float *)(DAT_82072c98 + 0x1978) * *(float *)(iVar4 + 0x23c);
    if (*(int *)(iVar4 + 0x2d8) != 0) {
      fVar1 = *(float *)(*(int *)(iVar4 + 0x2d8) + 0x23c) * fVar1;
    }
  }
  *(float *)(iVar3 + 0x1974) = fVar1;
  iVar4 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar3 + 0x197c) = *(undefined4 *)(iVar4 + 0x2c);
  uVar5 = *(undefined4 *)(iVar4 + 0x30);
  *(float *)(iVar3 + 0x1988) = fVar1;
  *(undefined4 *)(iVar3 + 0x1980) = uVar5;
  *(int *)(iVar3 + 0x1b6c) = iVar4 + 0x58;
  *(int *)(iVar3 + 0x1984) = param_1;
  return;
}


/* ==== FUN_8201ae78 @ 8201ae78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201ae78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201af08 @ 8201af08 ==== */

void FUN_8201af08(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(int *)(DAT_82072c98 + 0x1d44) = *(int *)(DAT_82072c98 + 0x1d44) + -1;
  *(undefined4 *)(iVar1 + 0x1c60) =
       *(undefined4 *)(*(int *)(iVar1 + 0x1d4c) + *(int *)(iVar1 + 0x1d44) * 4 + -4);
  return;
}


/* ==== FUN_8201af40 @ 8201af40 ==== */

void FUN_8201af40(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_82072c98;
  uVar2 = *(uint *)(DAT_82072c98 + 0x1c60);
  *(short *)(DAT_82072c98 + 0x2f5c) = *(short *)(DAT_82072c98 + 0x2f5c) + -1;
  *(int *)(iVar1 + 0x1d44) = *(int *)(iVar1 + 0x1d44) + -1;
  uVar3 = *(uint *)(*(int *)(iVar1 + 0x1d4c) + *(int *)(iVar1 + 0x1d44) * 4 + -4);
  *(uint *)(iVar1 + 0x1c60) = uVar3;
  if ((uVar2 >> 2 & 1) == 0) {
    return;
  }
  if ((uVar3 & 4) != 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x1558) = *(undefined4 *)(iVar1 + 0x2f58);
  return;
}


/* ==== FUN_8201af98 @ 8201af98 ==== */

void FUN_8201af98(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1bd8);
  *(undefined4 *)(iVar1 + 0x184) =
       *(undefined4 *)(*(int *)(iVar1 + 0x194) * 4 + *(int *)(iVar1 + 0x19c) + -4);
  *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + -1;
  return;
}


/* ==== FUN_8201afd8 @ 8201afd8 ==== */

uint FUN_8201afd8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (*(uint *)(param_1 + 8) >> 0x19 & 1) - (*(uint *)(param_2 + 8) >> 0x19 & 1);
  if (uVar2 != 0) {
    return (-uVar2 & ~uVar2) >> 0x1f;
  }
  iVar1 = *(int *)(DAT_82072c98 + 0x1b90) + -1;
  if (-1 < iVar1) {
    iVar4 = iVar1 * 4;
    do {
      iVar3 = *(int *)(iVar4 + *(int *)(DAT_82072c98 + 0x1b98));
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


/* ==== FUN_8201b050 @ 8201b050 ==== */

void FUN_8201b050(void)

{
  *(int *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0xc4) =
       *(int *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0xc4) + -1;
  return;
}


/* ==== FUN_8201b070 @ 8201b070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201b070(float *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_82072c98 + 0x1bd8);
  if (*(char *)(iVar1 + 0x8f) != '\0') {
    return;
  }
  *(float *)(iVar1 + 0xd8) = *(float *)(iVar1 + 0xd0) + *param_1;
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(iVar1 + 0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201b1d0 @ 8201b1d0 ==== */

void FUN_8201b1d0(float *param_1)

{
  float local_10;
  float local_c;
  
  local_10 = param_1[2] - *param_1;
  local_c = param_1[3] - param_1[1];
  FUN_8201b070(&local_10);
  return;
}


/* ==== FUN_8201b218 @ 8201b218 ==== */

void FUN_8201b218(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1bd8);
  fVar1 = (float)((double)(*(float *)(iVar2 + 0xc) - *(float *)(iVar2 + 0x58)) + param_1);
  *(float *)(iVar2 + 0xd0) = fVar1;
  if (fVar1 <= *(float *)(iVar2 + 0xe8)) {
    fVar1 = *(float *)(iVar2 + 0xe8);
  }
  *(float *)(iVar2 + 0xe8) = fVar1;
  return;
}


/* ==== FUN_8201b260 @ 8201b260 ==== */

void FUN_8201b260(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1bd8);
  fVar1 = (float)((double)(*(float *)(iVar2 + 0x10) - *(float *)(iVar2 + 0x5c)) + param_1);
  *(float *)(iVar2 + 0xd4) = fVar1;
  if (fVar1 <= *(float *)(iVar2 + 0xec)) {
    fVar1 = *(float *)(iVar2 + 0xec);
  }
  *(float *)(iVar2 + 0xec) = fVar1;
  return;
}


/* ==== FUN_8201b2a8 @ 8201b2a8 ==== */

void FUN_8201b2a8(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar1 = *(int *)(iVar1 + 0x1bd8);
  *(undefined4 *)(iVar1 + 0x180) =
       *(undefined4 *)(*(int *)(iVar1 + 0x188) * 4 + *(int *)(iVar1 + 400) + -4);
  *(int *)(iVar1 + 0x188) = *(int *)(iVar1 + 0x188) + -1;
  return;
}


/* ==== FUN_8201b2e8 @ 8201b2e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201b2e8(void)

{
  float fVar1;
  
  if ((*(uint *)(DAT_82072c98 + 0x1c64) & 1) == 0) {
    fVar1 = *(float *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x180);
  }
  else {
    fVar1 = *(float *)(DAT_82072c98 + 0x1c68);
  }
  if (fVar1 < DAT_820016c4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201b390 @ 8201b390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201b390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201b488 @ 8201b488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201b488(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201b670 @ 8201b670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201b670(undefined4 param_1,undefined4 param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  float local_50;
  float local_4c;
  
  uVar12 = FUN_8205b8a4();
  pfVar8 = (float *)((ulonglong)uVar12 >> 0x20);
  iVar9 = (int)uVar12;
  fVar2 = *(float *)(iVar9 + 0x1b8) + DAT_820016c0;
  fVar3 = *(float *)(iVar9 + 0x1bc) + DAT_820016c0;
  fVar4 = *(float *)(iVar9 + 0x1b0) - DAT_820016c0;
  fVar5 = *(float *)(iVar9 + 0x1b4) - DAT_820016c0;
  if (((param_4 & 0x15) == 0) && (*(char *)(iVar9 + 0x88) != '\0')) {
    param_4 = param_4 | 1;
  }
  if ((param_4 & 0x2a) == 0) {
    param_4 = (-(uint)(*(char *)(iVar9 + 0x90) != '\0') & 0x1e) + 2 | param_4;
  }
  fVar1 = *param_3;
  if ((fVar1 < fVar4) || (bVar6 = true, fVar2 < param_3[2])) {
    bVar6 = false;
  }
  if ((param_3[1] < fVar5) || (bVar7 = true, fVar3 < param_3[3])) {
    bVar7 = false;
  }
  bVar10 = fVar2 - fVar4 < *(float *)(DAT_82072c98 + 0x15a4) * DAT_820016bc + (param_3[2] - fVar1);
  bVar11 = *(float *)(DAT_82072c98 + 0x15a8) * DAT_820016bc + (param_3[3] - param_3[1]) <=
           fVar3 - fVar5;
  if (((param_4 & 1) == 0) || (bVar6)) {
    if ((((param_4 & 4) != 0) && (!bVar6)) || ((param_4 & 0x10) != 0)) {
      if (!bVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ((fVar1 < fVar4) || (bVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (fVar2 <= param_3[2]) {
      *(float *)(iVar9 + 0x70) = DAT_820016c0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (((param_4 & 2) == 0) || (bVar7)) {
    if ((((param_4 & 8) == 0) || (bVar7)) && ((param_4 & 0x20) == 0)) goto LAB_8201b970;
    if (bVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (((fVar5 <= param_3[1]) && (bVar11)) && (param_3[3] < fVar3)) goto LAB_8201b970;
  FUN_82016bc8();
LAB_8201b970:
  FUN_8201b488();
  fVar2 = *(float *)(iVar9 + 0x5c);
  *pfVar8 = local_50 - *(float *)(iVar9 + 0x58);
  pfVar8[1] = local_4c - fVar2;
  if (((param_4 & 0x40) == 0) && ((*(uint *)(iVar9 + 8) & 0x1000000) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201ba60 @ 8201ba60 ==== */

uint FUN_8201ba60(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0x80) == 0) {
    if ((param_2 & 0x100) == 0) {
      if ((*(int *)(DAT_82072c98 + 0x1d5c) <= *(int *)(DAT_82072c98 + 0x1d68)) ||
         (uVar3 = 1,
         *(int *)(*(int *)(DAT_82072c98 + 0x1d64) + *(int *)(DAT_82072c98 + 0x1d68) * 0x24) !=
         param_1)) {
        uVar3 = 0;
      }
      return uVar3;
    }
    iVar1 = 0;
    if (0 < *(int *)(DAT_82072c98 + 0x1d5c)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + *(int *)(DAT_82072c98 + 0x1d64)) == param_1) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < *(int *)(DAT_82072c98 + 0x1d5c));
    }
    return 0;
  }
  if ((param_2 & 0x100) != 0) {
    return (-*(uint *)(DAT_82072c98 + 0x1d5c) & ~*(uint *)(DAT_82072c98 + 0x1d5c)) >> 0x1f;
  }
  return (uint)(*(uint *)(DAT_82072c98 + 0x1d5c) <= *(uint *)(DAT_82072c98 + 0x1d68)) -
         ((int)~(*(uint *)(DAT_82072c98 + 0x1d5c) ^ *(uint *)(DAT_82072c98 + 0x1d68)) >> 0x1f) & 1;
}


/* ==== FUN_8201bb30 @ 8201bb30 ==== */

void FUN_8201bb30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_8201bf68 @ 8201bf68 ==== */

void FUN_8201bf68(int param_1,float *param_2,float *param_3)

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


/* ==== FUN_8201c030 @ 8201c030 ==== */

void FUN_8201c030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8201c3c0 @ 8201c3c0 ==== */

void FUN_8201c3c0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = DAT_82072c98;
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x10;
  }
  *(undefined4 *)(DAT_82072c98 + 0x1dec) = param_1;
  *(undefined4 *)(iVar2 + 0x1df0) = param_1;
  *(undefined1 *)(iVar2 + 0x1ddd) = 1;
  uVar3 = 0;
  *(undefined1 *)(iVar2 + 0x1ddc) = 1;
  *(undefined4 *)(iVar2 + 0x1df4) = param_2;
  *(uint *)(iVar2 + 0x1de0) = param_3;
  uVar1 = DAT_82001fe0;
  *(undefined4 *)(iVar2 + 0x1de4) = param_4;
  *(undefined1 *)(iVar2 + 0x1dde) = 0;
  *(undefined4 *)(iVar2 + 0x1e20) = 0;
  *(undefined4 *)(iVar2 + 0x1de8) = *(undefined4 *)(iVar2 + 0x38c);
  *(undefined4 *)(iVar2 + 0x1e4c) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e48) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e24) = 0;
  *(undefined4 *)(iVar2 + 0x1e44) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e2c) = 0;
  *(undefined4 *)(iVar2 + 0x1e28) = 0;
  *(undefined4 *)(iVar2 + 0x1e40) = 0;
  *(undefined4 *)(iVar2 + 0x1e78) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e74) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e50) = 0;
  *(undefined4 *)(iVar2 + 0x1e70) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e58) = 0;
  *(undefined4 *)(iVar2 + 0x1e54) = 0;
  *(undefined4 *)(iVar2 + 0x1e6c) = 0;
  *(undefined4 *)(iVar2 + 0x1ea4) = uVar1;
  *(undefined4 *)(iVar2 + 0x1ea0) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e7c) = 0;
  *(undefined4 *)(iVar2 + 0x1e9c) = uVar1;
  *(undefined4 *)(iVar2 + 0x1e84) = 0;
  *(undefined4 *)(iVar2 + 0x1e80) = 0;
  *(undefined4 *)(iVar2 + 0x1e98) = 0;
  if ((*(char *)(DAT_82072c98 + 0x1ddd) != '\0') || (*(char *)(DAT_82072c98 + 0x1dc5) != '\0')) {
    uVar3 = 1;
  }
  *(undefined1 *)(DAT_82072c98 + 0x1dc4) = uVar3;
  return;
}


/* ==== FUN_8201c490 @ 8201c490 ==== */

void FUN_8201c490(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = -0x7df90000;
  *(undefined1 *)(DAT_82072c98 + 0x1ddd) = 0;
  FUN_82016e68();
  iVar1 = *(int *)(iVar1 + 0x2c98);
  if ((*(char *)(iVar1 + 0x1ddd) != '\0') || (uVar2 = 0, *(char *)(iVar1 + 0x1dc5) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(iVar1 + 0x1dc4) = uVar2;
  return;
}


/* ==== FUN_8201c4e8 @ 8201c4e8 ==== */

void FUN_8201c4e8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_82072c98;
  uVar2 = 0;
  *(undefined1 *)(DAT_82072c98 + 0x1ddd) = 0;
  *(undefined1 *)(iVar1 + 0x1ddc) = 0;
  if ((*(char *)(DAT_82072c98 + 0x1ddd) != '\0') || (*(char *)(DAT_82072c98 + 0x1dc5) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(DAT_82072c98 + 0x1dc4) = uVar2;
  *(undefined4 *)(iVar1 + 0x1dec) = param_1;
  *(undefined4 *)(iVar1 + 0x1df4) = param_2;
  *(undefined1 *)(iVar1 + 0x1dde) = 1;
  *(uint *)(iVar1 + 0x1de0) = param_3 | 0x80;
  *(undefined4 *)(iVar1 + 0x1de4) = param_4;
  return;
}


/* ==== FUN_8201c540 @ 8201c540 ==== */

void FUN_8201c540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_82072c98;
  if (param_1 == 0) {
    iVar3 = *(int *)(*(int *)(DAT_82072c98 + 0x1d84) + 0x2f0);
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0x8b) == '\0')) {
      iVar3 = *(int *)(DAT_82072c98 + 0x1d84);
    }
    *(int *)(DAT_82072c98 + 0x1d84) = iVar3;
  }
  iVar1 = DAT_82072c98;
  iVar2 = *(int *)(iVar5 + 0x1d84);
  iVar3 = (param_1 + 0xbd) * 4;
  iVar4 = *(int *)(iVar3 + iVar2);
  if (iVar4 != 0) {
    *(int *)(DAT_82072c98 + 0x1d88) = iVar4;
    iVar2 = param_1 * 0x10 + iVar2;
    *(int *)(iVar1 + 0x1dbc) = param_1;
    *(undefined4 *)(iVar1 + 0x1d8c) = 0;
    *(int *)(*(int *)(iVar1 + 0x1d84) + iVar3) = iVar4;
    iVar5 = *(int *)(iVar1 + 0x1d84) + param_1 * 0x10;
    *(undefined4 *)(iVar5 + 0x2fc) = *(undefined4 *)(iVar2 + 0x2fc);
    *(undefined4 *)(iVar5 + 0x300) = *(undefined4 *)(iVar2 + 0x300);
    *(undefined4 *)(iVar5 + 0x304) = *(undefined4 *)(iVar2 + 0x304);
    *(undefined4 *)(iVar5 + 0x308) = *(undefined4 *)(iVar2 + 0x308);
    return;
  }
  *(int *)(iVar5 + 0x1dbc) = param_1;
  FUN_82016f00();
  return;
}


/* ==== FUN_8201c600 @ 8201c600 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201c600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201c750 @ 8201c750 ==== */

void FUN_8201c750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201ca38 @ 8201ca38 ==== */

void FUN_8201ca38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8201cde0 @ 8201cde0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201cde0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201cff0 @ 8201cff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201cff0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d088 @ 8201d088 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d088(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d128 @ 8201d128 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d1d0 @ 8201d1d0 ==== */

undefined4 FUN_8201d1d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(char *)(DAT_82072c98 + 0x1ef4) != '\0') {
    if (((((*(uint *)(DAT_82072c98 + 0x1c80) & 1) != 0) && (*(int *)(DAT_82072c98 + 0x1be0) != 0))
        && (*(int *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x2e0) ==
            *(int *)(*(int *)(DAT_82072c98 + 0x1be0) + 0x2e0))) &&
       (*(char *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8f) == '\0')) {
      iVar1 = DAT_82072c98 + 0x1ca4;
      if ((*(uint *)(DAT_82072c98 + 0x1c80) & 2) == 0) {
        iVar1 = DAT_82072c98 + 0x1c84;
      }
      uVar4 = CONCAT44(*(int *)(DAT_82072c98 + 0x1c78),iVar1);
      iVar1 = DAT_82072c98;
      if (*(int *)(DAT_82072c98 + 0x1c78) == 0) {
        uVar4 = FUN_820190b0();
      }
      iVar3 = (int)((ulonglong)uVar4 >> 0x20);
      puVar2 = (undefined4 *)uVar4;
      if (*(int *)(iVar1 + 0x1f0c) != iVar3) {
        *(undefined4 *)(iVar1 + 0x1f3c) = *puVar2;
        *(undefined4 *)(iVar1 + 8000) = puVar2[1];
        *(undefined4 *)(iVar1 + 0x1f44) = puVar2[2];
        *(undefined4 *)(iVar1 + 0x1f48) = puVar2[3];
        *(int *)(iVar1 + 0x1f4c) = iVar3;
        *(undefined1 *)(iVar1 + 0x1ef6) = 1;
        return 1;
      }
    }
  }
  return 0;
}


/* ==== FUN_8201d2a8 @ 8201d2a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d2a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d368 @ 8201d368 ==== */

undefined4 FUN_8201d368(void)

{
  return **(undefined4 **)(DAT_82072c98 + 0x1d80);
}


/* ==== FUN_8201d3a0 @ 8201d3a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d3a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d418 @ 8201d418 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d418(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d4b8 @ 8201d4b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d4b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d530 @ 8201d530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d5c8 @ 8201d5c8 ==== */

void FUN_8201d5c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201d690 @ 8201d690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d690(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d738 @ 8201d738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d7b0 @ 8201d7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d7b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d828 @ 8201d828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d828(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_8205b8a4();
  piVar1 = (int *)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if (piVar1[1] < iVar2) {
    FUN_82017c70();
  }
  if (*piVar1 < iVar2) {
    iVar3 = iVar2 - *piVar1;
    do {
      FUN_8205d810();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *piVar1 = iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d8c0 @ 8201d8c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d8c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d938 @ 8201d938 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d938(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201d9e0 @ 8201d9e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201d9e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201da98 @ 8201da98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201da98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201db48 @ 8201db48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201db48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201dbc0 @ 8201dbc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201dbc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201dc38 @ 8201dc38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201dc38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201dcd8 @ 8201dcd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201dcd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201dd80 @ 8201dd80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201dd80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201de28 @ 8201de28 ==== */

void FUN_8201de28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201def0 @ 8201def0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201def0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201df40 @ 8201df40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201df40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201e028 @ 8201e028 ==== */

void FUN_8201e028(uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_820151d8(param_1,param_2);
  piVar1 = (int *)((ulonglong)uVar2 >> 0x20);
  if ((piVar1 == (int *)(*param_1 * 8 + param_1[2])) || (*piVar1 != (int)uVar2)) {
    FUN_8201d5c8();
  }
  else {
    piVar1[1] = param_3;
  }
  return;
}


/* ==== FUN_8201e098 @ 8201e098 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201e098(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  piVar2 = (int *)((ulonglong)uVar6 >> 0x20);
  pcVar4 = (char *)uVar6;
  pcVar3 = pcVar4;
  if (param_3 == 0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar3 + (-1 - (int)pcVar4);
  }
  else {
    pcVar4 = (char *)(param_3 - (int)pcVar4);
  }
  iVar5 = *piVar2;
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  if (piVar2[1] <= (int)(pcVar4 + iVar5)) {
    FUN_82017950();
  }
  FUN_8201d4b8();
  FUN_8205d810();
  pcVar4[piVar2[2] + iVar5 + -1] = '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201e158 @ 8201e158 ==== */

void FUN_8201e158(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8201e1f8 @ 8201e1f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201e1f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201e2a0 @ 8201e2a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201e2a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201e338 @ 8201e338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201e338(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201e3c0 @ 8201e3c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201e3c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201e468 @ 8201e468 ==== */

void FUN_8201e468(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_82072c98;
  *(int *)(DAT_82072c98 + 0x1bd8) = param_1;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x174) == -1)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x1fb0) + *(int *)(param_1 + 0x174) * 0x1c8;
  }
  *(int *)(iVar2 + 0x1f94) = iVar3;
  if (param_1 == 0) {
    return;
  }
  fVar1 = *(float *)(DAT_82072c98 + 0x1978) * *(float *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2d8) + 0x23c) * fVar1;
  }
  *(float *)(iVar2 + 0x1988) = fVar1;
  *(float *)(iVar2 + 0x1974) = fVar1;
  return;
}


/* ==== FUN_8201e4e0 @ 8201e4e0 ==== */

void FUN_8201e4e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8201e6e8 @ 8201e6e8 ==== */

void FUN_8201e6e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8201ea18 @ 8201ea18 ==== */

void FUN_8201ea18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201eaa8 @ 8201eaa8 ==== */

void FUN_8201eaa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201eb70 @ 8201eb70 ==== */

void FUN_8201eb70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201ebd0 @ 8201ebd0 ==== */

int FUN_8201ebd0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_1;
  iVar4 = DAT_82072c98;
  iVar2 = FUN_8201acc8(param_1,param_2,param_1);
  if (-1 < iVar2) {
    iVar5 = iVar2 << 2;
    do {
      iVar6 = *(int *)(iVar5 + *(int *)(iVar4 + 0x1b98));
      if ((*(uint *)(iVar6 + 8) & 0x1000000) == 0) {
        iVar7 = iVar6;
        if (*(int *)(iVar6 + 0x2e0) == iVar3) {
LAB_8201ec20:
          bVar1 = true;
        }
        else {
          do {
            if (iVar7 == iVar3) goto LAB_8201ec20;
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


/* ==== FUN_8201eca8 @ 8201eca8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201eca8(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined4 *)(DAT_82072c98 + 0x1c24) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c28) = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201ed08 @ 8201ed08 ==== */

void FUN_8201ed08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201edf8 @ 8201edf8 ==== */

void FUN_8201edf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201f030 @ 8201f030 ==== */

void FUN_8201f030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_8201f640 @ 8201f640 ==== */

void FUN_8201f640(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201f6d8 @ 8201f6d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201f6d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201f760 @ 8201f760 ==== */

void FUN_8201f760(uint param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    uVar1 = *(uint *)(DAT_82072c98 + 0x1c60) & ~param_1;
  }
  else {
    uVar1 = *(uint *)(DAT_82072c98 + 0x1c60) | param_1;
  }
  *(uint *)(DAT_82072c98 + 0x1c60) = uVar1;
  FUN_8201dc38();
  return;
}


/* ==== FUN_8201f7b0 @ 8201f7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201f7b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201f838 @ 8201f838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201f838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201f890 @ 8201f890 ==== */

void FUN_8201f890(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201f8f0 @ 8201f8f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201f8f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201fa28 @ 8201fa28 ==== */

void FUN_8201fa28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8201fad8 @ 8201fad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201fad8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8201fbb8 @ 8201fbb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8201fbb8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = **(int **)(DAT_82072c98 + 0x1d80);
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


/* ==== FUN_8201fc78 @ 8201fc78 ==== */

void FUN_8201fc78(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_82072c98 + 0x1e24;
  iVar3 = *(int *)(DAT_82072c98 + 0x1e1c);
  if (iVar3 == 1) {
    iVar3 = DAT_82072c98;
    if (*(int *)(DAT_82072c98 + 0x1eac) == 0) {
      FUN_82016e68(DAT_82072c98 + 0x1ea8);
    }
    iVar4 = *(int *)(iVar3 + 0x1e20) + -1;
    *(int *)(iVar3 + 0x1e20) = iVar4;
    if (iVar4 != 0) {
      if (*(int *)(iVar3 + 0x1d88) != param_1) {
        return;
      }
      *(undefined4 *)(iVar3 + 0x1e20) = 1;
      return;
    }
  }
  else {
    if (iVar3 == -1) {
      if (*(int *)(DAT_82072c98 + 0x1d88) != param_1) {
        FUN_82016e68(iVar1);
        return;
      }
      if (*(int *)(DAT_82072c98 + 0x1e28) == 0) {
        return;
      }
      *(undefined1 *)(DAT_82072c98 + 0x1ddd) = 0;
      if ((*(char *)(DAT_82072c98 + 0x1ddd) != '\0') ||
         (uVar2 = 0, *(char *)(DAT_82072c98 + 0x1dc5) != '\0')) {
        uVar2 = 1;
      }
      *(undefined1 *)(DAT_82072c98 + 0x1dc4) = uVar2;
      return;
    }
    if (iVar3 != 0) {
      return;
    }
    if (*(int *)(DAT_82072c98 + 0x1eac) != 0) {
      return;
    }
    iVar1 = DAT_82072c98 + 0x1ea8;
  }
  FUN_8201c490(iVar1);
  return;
}


/* ==== FUN_8201fd70 @ 8201fd70 ==== */

void FUN_8201fd70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8201ff80 @ 8201ff80 ==== */

void FUN_8201ff80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82020518 @ 82020518 ==== */

void FUN_82020518(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82020610 @ 82020610 ==== */

void FUN_82020610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820206e0 @ 820206e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820206e0(undefined4 param_1,undefined4 param_2,byte *param_3)

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
  
  uVar12 = FUN_8205b87c();
  fVar2 = DAT_820016c0;
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  pbVar11 = (byte *)uVar12;
  do {
    iVar3 = DAT_82072c98;
    pcVar10 = *(char **)(DAT_82072c98 + 0x2fec);
    pbVar8 = *(byte **)(DAT_82072c98 + 0x2ff0);
    iVar9 = *(int *)(DAT_82072c98 + 0x1bd8);
    *(undefined4 *)(DAT_82072c98 + 0x2ff0) = 0;
    *(undefined4 *)(iVar3 + 0x2fec) = 0;
    if ((param_3 == (byte *)0x0) && (param_3 = pbVar11, pbVar11 != (byte *)0xffffffff)) {
      while (*param_3 != 0) {
        if (((*param_3 == 0x23) && (param_3[1] == 0x23)) ||
           (param_3 = param_3 + 1, param_3 == (byte *)0xffffffff)) break;
      }
    }
    if ((iVar5 == 0) ||
       (bVar1 = true,
       *(float *)(iVar5 + 4) <= *(float *)(iVar3 + 0x2ff4) + *(float *)(iVar3 + 0x1598) + fVar2)) {
      bVar1 = false;
    }
    if (iVar5 != 0) {
      *(undefined4 *)(iVar3 + 0x2ff4) = *(undefined4 *)(iVar5 + 4);
    }
    if (bVar1) {
      FUN_82020610();
      *(undefined1 *)(iVar3 + 0x2ff8) = 1;
    }
    pcVar4 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      do {
        pcVar7 = pcVar4;
        pcVar4 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      FUN_820206e0(iVar5,pcVar10,pcVar7);
    }
    iVar9 = *(int *)(iVar9 + 0x158);
    if (iVar9 < *(int *)(iVar3 + 0x2ffc)) {
      *(int *)(iVar3 + 0x2ffc) = iVar9;
    }
    while( true ) {
      pbVar6 = FUN_8205c350(pbVar11,10,(int)param_3 - (int)pbVar11);
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = param_3;
      }
      if ((pbVar11 != pbVar6) || (param_3 != pbVar6)) {
        FUN_82020610();
        *(undefined1 *)(iVar3 + 0x2ff8) = 0;
        if (*pbVar6 == 10) {
          FUN_82020610();
          *(undefined1 *)(iVar3 + 0x2ff8) = 1;
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


/* ==== FUN_82020900 @ 82020900 ==== */

void FUN_82020900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820209d0 @ 820209d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820209d0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint *puVar8;
  
  pbVar3 = (byte *)FUN_8205b8a4();
  iVar2 = DAT_82072c98;
  pbVar4 = (byte *)FUN_8205e138(pbVar3,&UNK_82002148);
  pbVar6 = pbVar3;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = pbVar4;
    pbVar6 = pbVar4;
  }
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  iVar7 = *(int *)(iVar2 + 0x2fac);
  FUN_8201d4b8();
  *(uint *)(iVar7 + *(int *)(iVar2 + 0x2fb4)) = (uint)(pbVar3 + (0x17 - (int)pbVar6)) & 0xfffffffc;
  iVar7 = iVar7 + *(int *)(iVar2 + 0x2fb4);
  puVar8 = (uint *)(iVar7 + 4);
  if (puVar8 != (uint *)0x0) {
    *(undefined2 *)(iVar7 + 10) = 0;
    *(undefined2 *)(iVar7 + 8) = 0;
    *(undefined2 *)(iVar7 + 0xe) = 0;
    *(undefined2 *)(iVar7 + 0xc) = 0;
    *puVar8 = 0;
    *(undefined4 *)(iVar7 + 8) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(undefined4 *)(iVar7 + 0x10) = 0;
  }
  uVar5 = FUN_82014be0(pbVar6,(uint)(pbVar3 + (-1 - (int)pbVar6)),0);
  *puVar8 = uVar5;
  FUN_8205d810();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82020aa8 @ 82020aa8 ==== */

int * FUN_82020aa8(int param_1)

{
  int *piVar1;
  
  if (*(int *)(DAT_82072c98 + 0x2fb4) != 0) {
    piVar1 = (int *)(*(int *)(DAT_82072c98 + 0x2fb4) + 4);
    do {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = (int *)(piVar1[-1] + (int)piVar1);
    } while (piVar1 != (int *)(*(int *)(DAT_82072c98 + 0x2fb4) + *(int *)(DAT_82072c98 + 0x2fac) + 4
                              ));
  }
  return (int *)0x0;
}


/* ==== FUN_82020b10 @ 82020b10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82020b10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82020b58 @ 82020b58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82020b58(void)

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
  
  uVar12 = FUN_8205b888();
  iVar2 = DAT_82072c98;
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
  FUN_8201d4b8();
  pcVar5 = *(char **)(iVar2 + 0x2f9c);
  pcVar8 = pcVar5 + (int)pcVar6;
  FUN_8205d810();
  pcVar5[(int)pcVar6] = '\0';
  iVar9 = 0;
  if (0 < *(int *)(iVar2 + 0x2fa0)) {
    iVar10 = 0;
    do {
      pcVar7 = *(code **)(iVar10 + *(int *)(iVar2 + 0x2fa8) + 0xc);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar9 < *(int *)(iVar2 + 0x2fa0));
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
        pbVar3 = FUN_8205c350((byte *)(pcVar5 + 1),0x5d,(int)pcVar11 - (int)(pcVar5 + 1));
        if ((pbVar3 != (byte *)0x0) &&
           (pbVar4 = FUN_8205c350(pbVar3 + 1,0x5b,(int)pcVar11 - (int)(pbVar3 + 1)),
           pbVar4 != (byte *)0x0)) {
          *pbVar3 = 0;
          iVar10 = FUN_8201d2a8();
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
  *(undefined1 *)(iVar2 + 0x2f8d) = 1;
  FUN_8205d810();
  iVar9 = 0;
  if (0 < *(int *)(iVar2 + 0x2fa0)) {
    iVar10 = 0;
    do {
      pcVar7 = *(code **)(iVar10 + *(int *)(iVar2 + 0x2fa8) + 0x18);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar9 < *(int *)(iVar2 + 0x2fa0));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82020dd0 @ 82020dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82020dd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)FUN_8205b8a4();
  iVar3 = DAT_82072c98;
  piVar4 = (int *)(DAT_82072c98 + 0x2f94);
  *(undefined4 *)(DAT_82072c98 + 0x2f90) = DAT_820016c4;
  FUN_8201d4b8();
  FUN_8201d530();
  iVar6 = 0;
  if (0 < *(int *)(iVar3 + 0x2fa0)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(iVar3 + 0x2fa8) + iVar5;
      (**(code **)(iVar2 + 0x1c))(iVar3,iVar2,piVar4);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar6 < *(int *)(iVar3 + 0x2fa0));
  }
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar4;
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    *piVar1 = iVar6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82020f18 @ 82020f18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82020f18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021038 @ 82021038 ==== */

void FUN_82021038(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82021148 @ 82021148 ==== */

void FUN_82021148(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820212d8 @ 820212d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820212d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021530 @ 82021530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021580 @ 82021580 ==== */

void FUN_82021580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820216c0 @ 820216c0 ==== */

void FUN_820216c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820217b0 @ 820217b0 ==== */

void FUN_820217b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82021868 @ 82021868 ==== */

void FUN_82021868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82021910 @ 82021910 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021910(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820219e8 @ 820219e8 ==== */

void FUN_820219e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82021a60 @ 82021a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82021a60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82021b08 @ 82021b08 ==== */

void FUN_82021b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82021c38 @ 82021c38 ==== */

void FUN_82021c38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82021ec8 @ 82021ec8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82022040) */
/* WARNING: Removing unreachable block (ram,0x82022064) */

void FUN_82021ec8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int in_r6;
  uint uVar5;
  
  FUN_8205b888();
  iVar3 = FUN_8205b950();
  iVar2 = DAT_82072c98;
  if (((*(uint *)(iVar3 + 8) & 0x20) != 0) || (bVar1 = true, *(int *)(DAT_82072c98 + 0x1580) == -1))
  {
    bVar1 = false;
  }
  uVar5 = *(uint *)(DAT_82072c98 + 0x1c60);
  *(uint *)(DAT_82072c98 + 0x1c60) = uVar5 | 0x10;
  *(undefined4 *)(iVar3 + 0x124) = 1;
  if (in_r6 == 0) {
    if ((bVar1) && (*(int *)(iVar2 + 0x1580) == 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1) {
      if (*(int *)(iVar2 + 0x1580) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_82021868();
      cVar4 = FUN_8203df28();
      if (cVar4 != '\0') {
        *(undefined1 *)(iVar3 + 0x8e) = 1;
      }
    }
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(uint *)(iVar2 + 0x1c60) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_82015c30();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820222e8 @ 820222e8 ==== */

void FUN_820222e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820223d0 @ 820223d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820223d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022420 @ 82022420 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022420(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_820222e8 @ 82022470 ==== */

void thunk_FUN_820222e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82022478 @ 82022478 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022478(void)

{
  uint uVar1;
  uint extraout_r4;
  
  FUN_8205b8a4();
  if (((extraout_r4 & 0x20) != 0) && (uVar1 = FUN_8201ba60(0,0x80), (uVar1 & 0xff) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820225b8 @ 820225b8 ==== */

void FUN_820225b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820226b8 @ 820226b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820226b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022748 @ 82022748 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820227d8 @ 820227d8 ==== */

void FUN_820227d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82022a80 @ 82022a80 ==== */

void FUN_82022a80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82022d80 @ 82022d80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022d80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022dd8 @ 82022dd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82022e68 @ 82022e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82022e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820230f0 @ 820230f0 ==== */

void FUN_820230f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_820233b8 @ 820233b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820233b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820234d8 @ 820234d8 ==== */

void FUN_820234d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820236d0 @ 820236d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820236d0(void)

{
  int iVar1;
  
  FUN_8205b870();
  iVar1 = FUN_8205b950();
  if (((((*(uint *)(iVar1 + 8) & 2) == 0) && ((*(uint *)(iVar1 + 8) & 0x40) == 0)) &&
      (*(char *)(iVar1 + 0xa4) < '\x01')) &&
     ((*(char *)(iVar1 + 0xa5) < '\x01' && (*(char *)(iVar1 + 0x8b) != '\0')))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8205b99c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82023fe0 @ 82023fe0 ==== */

void FUN_82023fe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82024118 @ 82024118 ==== */

void FUN_82024118(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82024268 @ 82024268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024510 @ 82024510 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024510(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024558 @ 82024558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024558(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  FUN_8205b8a4();
  FUN_8205b958();
  iVar2 = DAT_82072c98;
  if ((*(float *)(DAT_82072c98 + 0x1488) < DAT_820016c4) ||
     (bVar1 = true, *(float *)(DAT_82072c98 + 0x1488) != DAT_820016c4)) {
    bVar1 = false;
  }
  if (bVar1) {
    if (*(int *)(DAT_82072c98 + 0x1c10) == 0) {
      if (*(int *)(DAT_82072c98 + 0x1dbc) == 0) {
        iVar3 = *(int *)(DAT_82072c98 + 0x1d84);
        if ((((iVar3 != 0) && (iVar3 != *(int *)(iVar3 + 0x2e0))) &&
            ((*(uint *)(iVar3 + 8) & 0x4000000) == 0)) && (*(int *)(iVar3 + 0x2d8) != 0)) {
          FUN_82023fe0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)(DAT_82072c98 + 0x1d5c) < 1) {
          if (iVar3 != 0) {
            if (((*(uint *)(iVar3 + 8) & 0x4000000) != 0) ||
               ((*(uint *)(iVar3 + 8) & 0x1000000) == 0)) {
              *(undefined4 *)(iVar3 + 0x2f4) = 0;
            }
          }
          *(undefined4 *)(iVar2 + 0x1d8c) = 0;
          *(undefined4 *)(iVar2 + 0x1d88) = 0;
        }
        else if ((*(uint *)(*(int *)(*(int *)(DAT_82072c98 + 0x1d64) +
                                     *(int *)(DAT_82072c98 + 0x1d5c) * 0x24 + -0x20) + 8) &
                 0x8000000) == 0) {
          FUN_8201fa28();
        }
      }
      else {
        FUN_8201c540(0);
        iVar2 = DAT_82072c98;
        *(undefined1 *)(DAT_82072c98 + 0x1dc2) = 0;
        *(undefined1 *)(iVar2 + 0x1dc1) = 1;
        *(undefined1 *)(iVar2 + 0x1dc3) = 1;
      }
    }
    else if ((*(uint *)(DAT_82072c98 + 0x1c28) >> 1 & 1) == 0) {
      FUN_820158d0(0,0);
    }
  }
  FUN_8205b9a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024740 @ 82024740 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82024c48) */
/* WARNING: Removing unreachable block (ram,0x82024c58) */
/* WARNING: Removing unreachable block (ram,0x82024c5c) */

void FUN_82024740(void)

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
  
  FUN_8205b894();
  iVar5 = DAT_82072c98;
  iVar11 = 0;
  bVar3 = false;
  puVar12 = (uint *)(DAT_82072c98 + 8);
  iVar8 = DAT_82072c98;
  iVar6 = FUN_82016c60();
  bVar13 = iVar6 != 0;
  if (bVar13) {
    *(undefined4 *)(iVar8 + 0x1ed4) = 0;
    iVar8 = DAT_82072c98;
  }
  fVar1 = DAT_820016c4;
  dVar19 = (double)DAT_820016c4;
  if ((*(int *)(iVar5 + 0x1ed8) != 0) && (*(int *)(iVar5 + 0x1ed4) == 0)) {
    dVar14 = -(double)(*(float *)(iVar5 + 0x18) * DAT_820016e0 - *(float *)(iVar5 + 0x1ee4));
    if (dVar14 < 0.0) {
      dVar14 = dVar19;
    }
    *(float *)(iVar5 + 0x1ee4) = (float)dVar14;
    iVar8 = DAT_82072c98;
    if (((double)*(float *)(iVar5 + 0x1eec) <= dVar19) && (dVar14 <= dVar19)) {
      *(undefined4 *)(iVar5 + 0x1ed8) = 0;
      iVar8 = DAT_82072c98;
    }
  }
  if ((bVar13) || (*(int *)(iVar5 + 0x1ed4) != 0)) {
LAB_82024820:
    uVar9 = 0;
  }
  else {
    if (((double)*(float *)(iVar8 + 0x1490) < dVar19) ||
       (bVar2 = true, (double)*(float *)(iVar8 + 0x1490) != dVar19)) {
      bVar2 = false;
    }
    uVar9 = 1;
    if (!bVar2) goto LAB_82024820;
  }
  if (((!bVar13) && (*(int *)(iVar5 + 0x1ed4) == 0)) && (*(char *)(iVar5 + 0xfc) != '\0')) {
    if (*(int *)(iVar8 + 0x34) < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_82015e88(*(int *)(iVar8 + 0x34),'\x01');
    }
    bVar13 = true;
    if ((uVar7 & 0xff) != 0) goto LAB_82024870;
  }
  bVar13 = false;
LAB_82024870:
  if ((((uVar9 & 0xff) != 0) || (bVar13)) &&
     ((iVar8 = *(int *)(iVar5 + 0x1d84), iVar8 != 0 || (iVar8 = FUN_8201cff0(), iVar8 != 0)))) {
    uVar10 = *(undefined4 *)(iVar8 + 0x2e0);
    *(float *)(iVar5 + 0x1ee4) = fVar1;
    *(float *)(iVar5 + 0x1ee0) = fVar1;
    *(char *)(iVar5 + 0x1ee8) = '\x01' - ((uVar9 & 0xff) == 0);
    *(undefined4 *)(iVar5 + 0x1ed8) = uVar10;
    *(undefined4 *)(iVar5 + 0x1ed4) = uVar10;
    *(uint *)(iVar5 + 0x1db8) = !bVar13 + 2;
  }
  fVar1 = *(float *)(iVar5 + 0x1ee0) + *(float *)(iVar5 + 0x18);
  *(float *)(iVar5 + 0x1ee0) = fVar1;
  dVar14 = (double)DAT_820016c0;
  dVar17 = (double)DAT_8200222c;
  dVar18 = (double)DAT_82002134;
  if ((*(int *)(iVar5 + 0x1ed4) != 0) && (*(int *)(iVar5 + 0x1db8) == 3)) {
    dVar15 = (double)(float)((double)(float)((double)fVar1 - dVar18) * dVar17);
    dVar16 = dVar19;
    if ((dVar19 <= dVar15) && (dVar16 = dVar15, dVar14 < dVar15)) {
      dVar16 = dVar14;
    }
    if (dVar16 <= (double)*(float *)(iVar5 + 0x1ee4)) {
      dVar16 = (double)*(float *)(iVar5 + 0x1ee4);
    }
    *(float *)(iVar5 + 0x1ee4) = (float)dVar16;
    dVar16 = FUN_82017050(0x10,4);
    uVar9 = (uint)(dVar19 < dVar16);
    dVar16 = FUN_82017050(0x11,4);
    if ((uVar9 & 0xff) != (uint)(dVar19 < dVar16)) {
      FUN_8201d088();
      *(float *)(iVar5 + 0x1ee4) = (float)dVar14;
    }
    if ((double)*(float *)(DAT_82072c98 + 0x30c) <= dVar19) {
      bVar4 = (double)*(float *)(iVar5 + 0x1ee4) < dVar14 & *(byte *)(iVar5 + 0x1ee8);
      *(byte *)(iVar5 + 0x1ee8) = bVar4;
      if ((bVar4 == 0) || (*(int *)(iVar5 + 0x1d84) == 0)) {
        if (*(char *)(iVar5 + 0x1ee8) == '\0') {
          iVar11 = *(int *)(iVar5 + 0x1ed4);
        }
      }
      else {
        bVar3 = true;
      }
      *(undefined4 *)(iVar5 + 0x1ed4) = 0;
    }
  }
  if ((*(int *)(iVar5 + 0x1ed4) != 0) && (*(int *)(iVar5 + 0x1db8) == 2)) {
    dVar17 = (double)(float)((double)(float)((double)*(float *)(iVar5 + 0x1ee0) - dVar18) * dVar17);
    if ((dVar19 <= dVar17) && (dVar19 = dVar17, dVar14 < dVar17)) {
      dVar19 = dVar14;
    }
    if (dVar19 <= (double)*(float *)(iVar5 + 0x1ee4)) {
      dVar19 = (double)*(float *)(iVar5 + 0x1ee4);
    }
    *(float *)(iVar5 + 0x1ee4) = (float)dVar19;
    if (*(int *)(DAT_82072c98 + 0x34) < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_82015e88(*(int *)(DAT_82072c98 + 0x34),'\x01');
    }
    if ((uVar9 & 0xff) != 0) {
      FUN_8201d088();
    }
    if (*(char *)(iVar5 + 0xfc) == '\0') {
      iVar11 = *(int *)(iVar5 + 0x1ed4);
    }
  }
  if ((((*puVar12 & 1) != 0) && (*(int *)(iVar5 + 0x38c) == 4)) &&
     ((*(uint *)(iVar5 + 0x390) & 4) == 0)) {
    *(undefined1 *)(iVar5 + 0x1ee8) = 1;
    *(undefined4 *)(iVar5 + 0x1db8) = 2;
  }
  if ((*(char *)(iVar5 + 0x1ee8) != '\0') && (*(int *)(iVar5 + 0x1db8) == 2)) {
    if (((0 < *(int *)(iVar5 + 0x154c)) ||
        ((*(char *)(iVar5 + 0xfc) != '\0' || (*(char *)(iVar5 + 0xfd) != '\0')))) ||
       (*(char *)(iVar5 + 0xff) != '\0')) {
      *(undefined1 *)(iVar5 + 0x1ee8) = 0;
    }
    if (((((*(uint *)(iVar5 + 0x38c) & 4) == 0) && ((*(uint *)(iVar5 + 0x390) & 4) != 0)) &&
        (*(char *)(iVar5 + 0x1ee8) != '\0')) &&
       ((*(int *)(iVar5 + 0x1c10) == 0 || (*(char *)(iVar5 + 0x1c1d) != '\0')))) {
      uVar9 = FUN_82016048();
      uVar9 = uVar9 & 0xff;
      uVar7 = FUN_82016048();
      if ((uVar7 & 0xff) == uVar9) {
        bVar3 = true;
      }
    }
    if (*(char *)(iVar5 + 0xfe) == '\0') {
      *(undefined1 *)(iVar5 + 0x1ee8) = 0;
    }
  }
  if ((*(int *)(iVar5 + 0x1ed4) != 0) && ((*(uint *)(*(int *)(iVar5 + 0x1ed4) + 8) & 4) == 0)) {
    if ((*(int *)(iVar5 + 0x1db8) == 2) && (*(char *)(iVar5 + 0xfd) == '\0')) {
      FUN_820171b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(iVar5 + 0x1db8) == 3) {
      FUN_820171b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (iVar11 != 0) {
    if ((*(int *)(iVar5 + 0x1d84) == 0) || (iVar11 != *(int *)(*(int *)(iVar5 + 0x1d84) + 0x2e0))) {
      FUN_820158d0(0,0);
      iVar8 = DAT_82072c98;
      *(undefined1 *)(DAT_82072c98 + 0x1dc2) = 0;
      *(undefined1 *)(iVar8 + 0x1dc1) = 1;
      *(undefined1 *)(iVar8 + 0x1dc3) = 1;
      iVar8 = *(int *)(iVar11 + 0x2f0);
      if ((iVar8 != 0) && (*(char *)(iVar8 + 0x8b) != '\0')) {
        iVar11 = iVar8;
      }
      FUN_820225b8();
      FUN_82023fe0();
      if (*(int *)(iVar11 + 0x2f4) == 0) {
        FUN_82016f00();
      }
      if (*(short *)(iVar11 + 0x12a) == 2) {
        *(undefined4 *)(iVar5 + 0x1dbc) = 1;
      }
    }
    *(undefined4 *)(iVar5 + 0x1ed4) = 0;
  }
  if ((bVar3) && (*(int *)(iVar5 + 0x1d84) != 0)) {
    FUN_820158d0(0,0);
    iVar6 = *(int *)(iVar5 + 0x1d84);
    iVar11 = *(int *)(iVar6 + 0x2d8);
    iVar8 = iVar6;
    while ((((iVar11 != 0 && ((*(ushort *)(iVar8 + 0x128) & 2) == 0)) &&
            ((*(uint *)(iVar8 + 8) & 0x1000000) != 0)) && ((*(uint *)(iVar8 + 8) & 0x14000000) == 0)
           )) {
      iVar8 = *(int *)(iVar8 + 0x2d8);
      iVar11 = *(int *)(iVar8 + 0x2d8);
    }
    if (iVar8 != iVar6) {
      FUN_82023fe0();
      *(int *)(iVar8 + 0x2f0) = iVar6;
    }
    if ((*(ushort *)(*(int *)(iVar5 + 0x1d84) + 0x128) & 2) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(iVar5 + 0x1dbc) ^ 1;
    }
    if (uVar9 != *(uint *)(iVar5 + 0x1dbc)) {
      if (uVar9 == 1) {
        *(undefined4 *)(*(int *)(iVar5 + 0x1d84) + 0x2f8) = 0;
      }
      FUN_8201c540(uVar9);
      iVar5 = DAT_82072c98;
      *(undefined1 *)(DAT_82072c98 + 0x1dc2) = 0;
      *(undefined1 *)(iVar5 + 0x1dc1) = 1;
      *(undefined1 *)(iVar5 + 0x1dc3) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82024e60 @ 82024e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82024e60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  puVar3 = (undefined1 *)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  FUN_820212d8();
  FUN_820144a0();
  FUN_82033ad8();
  *(undefined4 *)(puVar3 + 0x1b94) = 0;
  *(undefined4 *)(puVar3 + 0x1b90) = 0;
  *(undefined4 *)(puVar3 + 0x1b98) = 0;
  *(undefined4 *)(puVar3 + 0x1ba0) = 0;
  *(undefined4 *)(puVar3 + 0x1b9c) = 0;
  uVar1 = DAT_820016c4;
  *(undefined4 *)(puVar3 + 0x1ba4) = 0;
  *(undefined4 *)(puVar3 + 0x1bac) = 0;
  *(undefined4 *)(puVar3 + 0x1ba8) = 0;
  *(undefined4 *)(puVar3 + 0x1bb0) = 0;
  *(undefined4 *)(puVar3 + 0x1bb8) = 0;
  *(undefined4 *)(puVar3 + 0x1bb4) = 0;
  *(undefined4 *)(puVar3 + 0x1bbc) = 0;
  *(undefined4 *)(puVar3 + 0x1bc4) = 0;
  *(undefined4 *)(puVar3 + 0x1bc0) = 0;
  *(undefined4 *)(puVar3 + 0x1bc8) = 0;
  *(undefined4 *)(puVar3 + 0x1bd4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1bd0) = uVar1;
  *(undefined4 *)(puVar3 + 0x1bf0) = uVar1;
  *(undefined4 *)(puVar3 + 0x1bec) = uVar1;
  *(undefined4 *)(puVar3 + 0x1c3c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1c38) = uVar1;
  *(undefined4 *)(puVar3 + 0x1c64) = 0;
  *(undefined4 *)(puVar3 + 0x1c68) = 0;
  *(undefined4 *)(puVar3 + 0x1c6c) = 0;
  *(undefined4 *)(puVar3 + 0x1c70) = 0;
  *(undefined4 *)(puVar3 + 0x1c74) = 0;
  FUN_82014360();
  FUN_820142d8();
  *(undefined4 *)(puVar3 + 0x1d18) = 0;
  *(undefined4 *)(puVar3 + 0x1d14) = 0;
  *(undefined4 *)(puVar3 + 0x1d1c) = 0;
  *(undefined4 *)(puVar3 + 0x1d24) = 0;
  *(undefined4 *)(puVar3 + 0x1d20) = 0;
  *(undefined4 *)(puVar3 + 0x1d28) = 0;
  *(undefined4 *)(puVar3 + 0x1d30) = 0;
  *(undefined4 *)(puVar3 + 0x1d2c) = 0;
  *(undefined4 *)(puVar3 + 0x1d34) = 0;
  *(undefined4 *)(puVar3 + 0x1d3c) = 0;
  *(undefined4 *)(puVar3 + 0x1d38) = 0;
  *(undefined4 *)(puVar3 + 0x1d40) = 0;
  *(undefined4 *)(puVar3 + 0x1d48) = 0;
  *(undefined4 *)(puVar3 + 0x1d44) = 0;
  *(undefined4 *)(puVar3 + 0x1d4c) = 0;
  *(undefined4 *)(puVar3 + 0x1d54) = 0;
  *(undefined4 *)(puVar3 + 0x1d50) = 0;
  *(undefined4 *)(puVar3 + 0x1d58) = 0;
  *(undefined4 *)(puVar3 + 0x1d60) = 0;
  *(undefined4 *)(puVar3 + 0x1d5c) = 0;
  *(undefined4 *)(puVar3 + 0x1d64) = 0;
  *(undefined4 *)(puVar3 + 0x1d6c) = 0;
  *(undefined4 *)(puVar3 + 0x1d68) = 0;
  *(undefined4 *)(puVar3 + 0x1d70) = 0;
  *(undefined4 *)(puVar3 + 0x1d7c) = 0;
  *(undefined4 *)(puVar3 + 0x1d78) = 0;
  *(undefined4 *)(puVar3 + 0x1d80) = 0;
  *(undefined4 *)(puVar3 + 0x1dcc) = uVar1;
  *(undefined4 *)(puVar3 + 0x1dd0) = uVar1;
  *(undefined4 *)(puVar3 + 0x1dd4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1dd8) = uVar1;
  *(undefined4 *)(puVar3 + 0x1df8) = uVar1;
  *(undefined4 *)(puVar3 + 0x1dfc) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e00) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e04) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e08) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e0c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e10) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e14) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e30) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e34) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e38) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e3c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e24) = 0;
  uVar2 = DAT_82001fe0;
  *(undefined4 *)(puVar3 + 0x1e2c) = 0;
  *(undefined4 *)(puVar3 + 0x1e4c) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e28) = 0;
  *(undefined4 *)(puVar3 + 0x1e48) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e40) = 0;
  *(undefined4 *)(puVar3 + 0x1e44) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e5c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e60) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e64) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e68) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e50) = 0;
  *(undefined4 *)(puVar3 + 0x1e78) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e58) = 0;
  *(undefined4 *)(puVar3 + 0x1e74) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e54) = 0;
  *(undefined4 *)(puVar3 + 0x1e70) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e6c) = 0;
  *(undefined4 *)(puVar3 + 0x1e88) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e8c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e90) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e94) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e7c) = 0;
  *(undefined4 *)(puVar3 + 0x1ea4) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e84) = 0;
  *(undefined4 *)(puVar3 + 0x1ea0) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e80) = 0;
  *(undefined4 *)(puVar3 + 0x1e9c) = uVar2;
  *(undefined4 *)(puVar3 + 0x1e98) = 0;
  *(undefined4 *)(puVar3 + 0x1eb4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1eb8) = uVar1;
  *(undefined4 *)(puVar3 + 0x1ebc) = uVar1;
  *(undefined4 *)(puVar3 + 0x1ec0) = uVar1;
  *(undefined4 *)(puVar3 + 0x1ea8) = 0;
  *(undefined4 *)(puVar3 + 0x1ed0) = uVar2;
  *(undefined4 *)(puVar3 + 0x1eb0) = 0;
  *(undefined4 *)(puVar3 + 0x1ecc) = uVar2;
  *(undefined4 *)(puVar3 + 0x1eac) = 0;
  *(undefined4 *)(puVar3 + 0x1ec8) = uVar2;
  *(undefined4 *)(puVar3 + 0x1ec4) = 0;
  *(undefined4 *)(puVar3 + 0x1f10) = 0;
  *(undefined4 *)(puVar3 + 0x1f0c) = 0;
  *(undefined4 *)(puVar3 + 0x1f04) = 0;
  *(undefined4 *)(puVar3 + 0x1f08) = 0;
  FUN_8205bac0((uint *)(puVar3 + 0x1f18),0,0x21);
  puVar3[0x1f3a] = 0;
  puVar3[0x1f39] = 0;
  *(undefined4 *)(puVar3 + 0x1f14) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x1f3c) = uVar1;
  *(undefined4 *)(puVar3 + 8000) = uVar1;
  *(undefined4 *)(puVar3 + 0x1f44) = uVar1;
  *(undefined4 *)(puVar3 + 0x1f48) = uVar1;
  *(undefined4 *)(puVar3 + 0x1f6c) = 0;
  *(undefined4 *)(puVar3 + 0x1f68) = 0;
  *(undefined4 *)(puVar3 + 0x1f70) = 0;
  *(undefined4 *)(puVar3 + 0x1f8c) = 0;
  *(undefined4 *)(puVar3 + 0x1f88) = 0;
  *(undefined4 *)(puVar3 + 0x1f90) = 0;
  *(undefined4 *)(puVar3 + 0x1fa0) = 0;
  *(undefined4 *)(puVar3 + 0x1f9c) = 0;
  *(undefined4 *)(puVar3 + 0x1fa4) = 0;
  *(undefined4 *)(puVar3 + 0x1fac) = 0;
  *(undefined4 *)(puVar3 + 0x1fa8) = 0;
  *(undefined4 *)(puVar3 + 0x1fb0) = 0;
  *(undefined4 *)(puVar3 + 0x1fb8) = 0;
  *(undefined4 *)(puVar3 + 0x1fb4) = 0;
  *(undefined4 *)(puVar3 + 0x1fbc) = 0;
  *(undefined4 *)(puVar3 + 0x1fc4) = 0;
  *(undefined4 *)(puVar3 + 0x1fc0) = 0;
  *(undefined4 *)(puVar3 + 0x1fcc) = 0;
  *(undefined4 *)(puVar3 + 0x1fc8) = 0;
  *(undefined4 *)(puVar3 + 0x1fd0) = 0;
  *(undefined4 *)(puVar3 + 0x1fd8) = 0;
  *(undefined4 *)(puVar3 + 0x1fd4) = 0;
  *(undefined4 *)(puVar3 + 0x1fdc) = 0;
  *(undefined4 *)(puVar3 + 0x1fe8) = 0;
  *(undefined4 *)(puVar3 + 0x1fe4) = 0;
  *(undefined4 *)(puVar3 + 0x1fec) = 0;
  *(undefined4 *)(puVar3 + 0x1ff4) = 0;
  *(undefined4 *)(puVar3 + 0x1ff0) = 0;
  *(undefined4 *)(puVar3 + 0x1ff8) = 0;
  *(undefined4 *)(puVar3 + 0x2000) = 0;
  *(undefined4 *)(puVar3 + 0x1ffc) = 0;
  *(undefined4 *)(puVar3 + 0x2008) = 0;
  *(undefined4 *)(puVar3 + 0x2004) = 0;
  *(undefined4 *)(puVar3 + 0x200c) = 0;
  *(undefined4 *)(puVar3 + 0x2014) = 0;
  *(undefined4 *)(puVar3 + 0x2010) = 0;
  *(undefined4 *)(puVar3 + 0x2018) = 0;
  *(undefined4 *)(puVar3 + 0x2020) = uVar1;
  *(undefined4 *)(puVar3 + 0x201c) = uVar1;
  *(undefined4 *)(puVar3 + 0x2034) = 0;
  *(undefined4 *)(puVar3 + 0x2030) = 0;
  *(undefined4 *)(puVar3 + 0x2038) = 0;
  *(undefined4 *)(puVar3 + 0x2040) = 0;
  *(undefined4 *)(puVar3 + 0x203c) = 0;
  *(undefined4 *)(puVar3 + 0x2044) = 0;
  *(undefined4 *)(puVar3 + 0x204c) = 0;
  *(undefined4 *)(puVar3 + 0x2048) = 0;
  *(undefined4 *)(puVar3 + 0x2050) = 0;
  FUN_8205bac0((uint *)(puVar3 + 0x2024),0,0xe74);
  FUN_820346b8((undefined4 *)(puVar3 + 0x2e98));
  *(undefined4 *)(puVar3 + 0x2f10) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f0c) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f08) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f04) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f14) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f18) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f1c) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f20) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f28) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f24) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f30) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f2c) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f38) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f34) = uVar1;
  FUN_8205bac0((uint *)(puVar3 + 0x2f14),0,0x30);
  *(undefined4 *)(puVar3 + 0x2f68) = 0;
  *(undefined4 *)(puVar3 + 0x2f64) = 0;
  *(undefined4 *)(puVar3 + 0x2f6c) = 0;
  *(undefined4 *)(puVar3 + 0x2f74) = 0;
  *(undefined4 *)(puVar3 + 0x2f70) = 0;
  *(undefined4 *)(puVar3 + 0x2f78) = 0;
  *(undefined4 *)(puVar3 + 0x2f80) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f7c) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f88) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f84) = uVar1;
  *(undefined4 *)(puVar3 + 0x2f98) = 0;
  *(undefined4 *)(puVar3 + 0x2f94) = 0;
  *(undefined4 *)(puVar3 + 0x2f9c) = 0;
  *(undefined4 *)(puVar3 + 0x2fa4) = 0;
  *(undefined4 *)(puVar3 + 0x2fa0) = 0;
  *(undefined4 *)(puVar3 + 0x2fa8) = 0;
  *(undefined4 *)(puVar3 + 0x2fb0) = 0;
  *(undefined4 *)(puVar3 + 0x2fac) = 0;
  *(undefined4 *)(puVar3 + 0x2fb4) = 0;
  *(undefined4 *)(puVar3 + 0x2fbc) = 0;
  *(undefined4 *)(puVar3 + 0x2fb8) = 0;
  *(undefined4 *)(puVar3 + 0x2fc0) = 0;
  *(undefined4 *)(puVar3 + 0x2fc8) = 0;
  *(undefined4 *)(puVar3 + 0x2fc4) = 0;
  *(undefined4 *)(puVar3 + 0x2fcc) = 0;
  *(undefined4 *)(puVar3 + 0x2fe4) = 0;
  *(undefined4 *)(puVar3 + 0x2fe0) = 0;
  *(undefined4 *)(puVar3 + 0x2fe8) = 0;
  puVar3[0x3010] = 0;
  puVar3[0x3011] = 0;
  puVar3[0x3012] = 0;
  puVar3[0x3013] = 0;
  puVar3[0x3014] = 1;
  puVar3[0x3015] = 1;
  *(undefined4 *)(puVar3 + 0x3018) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x301c) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x3030) = 0;
  *(undefined4 *)(puVar3 + 0x302c) = 0;
  *(undefined4 *)(puVar3 + 0x3034) = 0;
  FUN_8205bac0((uint *)(puVar3 + 0x3020),0,0x18);
  *(undefined4 *)(puVar3 + 0x1978) = uVar1;
  *(undefined4 *)(puVar3 + 0x1974) = uVar1;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 0x1970) = 0;
  puVar3[1] = iVar4 == 0;
  if (iVar4 == 0) {
    if (DAT_82072c98 != 0) {
      *(int *)(DAT_82072c98 + 0x37c) = *(int *)(DAT_82072c98 + 0x37c) + 1;
    }
    iVar4 = (*DAT_820707e0)(0x468,DAT_82072c9c);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_82034050();
    }
  }
  *(undefined4 *)(puVar3 + 0x1bf4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1c0c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1c08) = uVar1;
  *(int *)(puVar3 + 0x98) = iVar4;
  *(undefined4 *)(puVar3 + 0x1c18) = uVar1;
  *(undefined4 *)(puVar3 + 0x1b78) = 0;
  *(undefined4 *)(puVar3 + 0x1c5c) = uVar1;
  *(undefined4 *)(puVar3 + 0x1b80) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x1b7c) = 0xffffffff;
  puVar3[0x1b86] = 0;
  puVar3[0x1b85] = 0;
  uVar5 = DAT_82001738;
  puVar3[0x1b84] = 0;
  *(undefined8 *)(puVar3 + 0x1b70) = uVar5;
  puVar3[0x1b87] = 0;
  puVar3[0x1b88] = 0;
  *(undefined4 *)(puVar3 + 0x1b8c) = 0;
  *(undefined4 *)(puVar3 + 0x1bcc) = 0;
  *(undefined4 *)(puVar3 + 0x1bd8) = 0;
  *(undefined4 *)(puVar3 + 0x1bdc) = 0;
  *(undefined4 *)(puVar3 + 0x1be0) = 0;
  *(undefined4 *)(puVar3 + 0x1be4) = 0;
  *(undefined4 *)(puVar3 + 0x1be8) = 0;
  *(undefined4 *)(puVar3 + 0x1bf8) = 0;
  *(undefined4 *)(puVar3 + 0x1c00) = 0;
  *(undefined4 *)(puVar3 + 0x1bfc) = 0;
  puVar3[0x1c04] = 0;
  puVar3[0x1c06] = 0;
  puVar3[0x1c05] = 0;
  puVar3[0x1c07] = 0;
  *(undefined4 *)(puVar3 + 0x1c10) = 0;
  *(undefined4 *)(puVar3 + 0x1c14) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025618 @ 82025618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820256b8 @ 820256b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820256b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025768 @ 82025768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820258e8 @ 820258e8 ==== */

void FUN_820258e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82025ab8 @ 82025ab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025ab8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82025c98 @ 82025c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82025c98(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  undefined1 uVar20;
  int *piVar18;
  byte *pbVar19;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  byte *pbStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  float local_1a0;
  float local_19c;
  undefined4 *local_190;
  float *local_188;
  uint local_170;
  uint local_16c;
  uint local_150;
  undefined4 *local_120;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  
  FUN_8205b870();
  uVar24 = FUN_8205b954();
  iVar9 = DAT_82072c98;
  pbVar11 = (byte *)((ulonglong)uVar24 >> 0x20);
  local_188 = (float *)(DAT_82072c98 + 0x1558);
  pbStack00000014 = pbVar11;
  iStack0000001c = (int)uVar24;
  uStack00000024 = param_3;
  uVar12 = FUN_82014be0(pbVar11,0,0);
  puVar13 = (undefined4 *)FUN_82018c48((uint *)(iVar9 + 0x1bc0),uVar12);
  local_16c = (uint)(puVar13 == (undefined4 *)0x0);
  local_190 = puVar13;
  if (local_16c == 0) {
    FUN_8201ed08();
  }
  else {
    puVar13 = (undefined4 *)FUN_820234d8();
    local_190 = puVar13;
  }
  if ((param_3 & 0xc0200) == 0xc0200) {
    param_3 = param_3 | 6;
    uStack00000024 = param_3;
  }
  iVar16 = *(int *)(iVar9 + 0x1b78);
  uVar12 = (uint)(iVar16 != puVar13[0x86]);
  if ((*(int *)(iVar9 + 0x1bb4) != 0) || (uVar20 = 1, *(char *)(iVar9 + 0x1b85) == '\0')) {
    uVar20 = 0;
  }
  *(undefined1 *)((int)puVar13 + 0x92) = uVar20;
  uVar15 = (uint)(iVar16 - 1U <= (uint)puVar13[0x86]) -
           ((int)~(iVar16 - 1U ^ puVar13[0x86]) >> 0x1f) & 1;
  if ((param_3 & 0x4000000) != 0) {
    piVar18 = (int *)(*(int *)(iVar9 + 0x1d64) + *(int *)(iVar9 + 0x1d68) * 0x24);
    uVar15 = ((undefined4 *)piVar18[1] != puVar13 || *piVar18 != puVar13[0x28]) | uVar15;
  }
  *(char *)(puVar13 + 0x24) = (char)uVar15;
  if (uVar15 != 0) {
    *(byte *)(puVar13 + 0x2c) = *(byte *)(puVar13 + 0x2c) | 8;
    *(byte *)((int)puVar13 + 0xb1) = (byte)((uint)puVar13[0x2c] >> 0x10) | 8;
    *(byte *)((int)puVar13 + 0xb2) = (byte)((uint)puVar13[0x2c] >> 8) | 8;
  }
  if (uVar12 == 0) {
    param_3 = puVar13[2];
    uStack00000024 = param_3;
  }
  else {
    puVar13[2] = param_3;
    puVar13[0x86] = iVar16;
    puVar13[0x87] = (float)*(double *)(iVar9 + 0x1b70);
    *(undefined2 *)(puVar13 + 0x26) = 0;
    *(short *)((int)puVar13 + 0x9a) = (short)*(undefined4 *)(iVar9 + 0x1bcc);
    *(int *)(iVar9 + 0x1bcc) = *(int *)(iVar9 + 0x1bcc) + 1;
  }
  if (*(int *)(iVar9 + 0x1bb4) == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(uint *)(*(int *)(iVar9 + 0x1bb4) * 0x54 + *(int *)(iVar9 + 0x1bbc) + -0x54);
  }
  if (uVar12 == 0) {
    uVar21 = puVar13[0xb6];
  }
  else {
    uVar21 = -(uint)((param_3 & 0x5000000) != 0) & uVar22;
  }
  local_170 = uVar21;
  local_150 = uVar12;
  if (puVar13[0x31] == 0) {
    FUN_8201dc38();
  }
  *(undefined4 **)(iVar9 + 0x1bd8) = puVar13;
  FUN_82014360();
  FUN_8205bac0((uint *)&local_e0,0,0x12);
  local_120 = puVar13;
  FUN_8205d810();
  local_d0 = *(undefined2 *)(DAT_82072c98 + 0x2f5c);
  local_de = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d14);
  local_dc = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d20);
  local_da = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d2c);
  local_d8 = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d38);
  local_e0 = (undefined2)*(undefined4 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0xc4);
  local_d6 = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d50);
  local_d4 = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d44);
  local_d2 = (undefined2)*(undefined4 *)(DAT_82072c98 + 0x1d68);
  FUN_8201d938();
  bVar5 = false;
  *(undefined4 *)(iVar9 + 0x1bd8) = 0;
  if ((param_3 & 0x10000000) != 0) {
    *(int *)(iVar9 + 0x1d74) = *(int *)(iVar9 + 0x1d74) + 1;
  }
  if ((param_3 & 0x4000000) != 0) {
    puVar23 = (undefined4 *)(*(int *)(iVar9 + 0x1d64) + *(int *)(iVar9 + 0x1d68) * 0x24);
    puVar23[1] = puVar13;
    FUN_8201dcd8();
    puVar13[0x28] = *puVar23;
  }
  if (uVar12 != 0) {
    FUN_820163e8((int)puVar13,param_3,uVar21);
    puVar13[0xb7] = uVar22;
  }
  bVar6 = false;
  if ((*(uint *)(iVar9 + 0x1cb4) & 1) != 0) {
    if ((((int)*(char *)(puVar13 + 0x2c) & *(uint *)(iVar9 + 0x1cb8)) == 0) ||
       (*(float *)(iVar9 + 0x1ccc) * *(float *)(iVar9 + 0x1ccc) +
        *(float *)(iVar9 + 0x1cd0) * *(float *)(iVar9 + 0x1cd0) <= DAT_82002248)) {
      FUN_82016558((int)puVar13,iVar9 + 0x1cc4,*(uint *)(iVar9 + 0x1cb8));
    }
    else {
      puVar13[0x2d] = *(undefined4 *)(iVar9 + 0x1cc4);
      puVar13[0x2e] = *(undefined4 *)(iVar9 + 0x1cc8);
      puVar13[0x2f] = *(undefined4 *)(iVar9 + 0x1ccc);
      puVar13[0x30] = *(undefined4 *)(iVar9 + 0x1cd0);
      *(byte *)(puVar13 + 0x2c) = *(byte *)(puVar13 + 0x2c) & 0xf1;
    }
  }
  fVar7 = DAT_820016c4;
  if ((*(uint *)(iVar9 + 0x1cb4) & 2) != 0) {
    uVar22 = (int)(puVar13[0x2c] << 8 | (uint)puVar13[0x2c] >> 0x18) >> 0x18 &
             *(uint *)(iVar9 + 0x1cbc);
    if ((uVar22 == 0) || (bVar6 = true, *(float *)(iVar9 + 0x1cd4) <= DAT_820016c4)) {
      bVar6 = false;
    }
    if ((uVar22 == 0) || (bVar5 = true, *(float *)(iVar9 + 0x1cd8) <= DAT_820016c4)) {
      bVar5 = false;
    }
    FUN_820166a8((int)puVar13,(float *)(iVar9 + 0x1cd4),*(uint *)(iVar9 + 0x1cbc));
  }
  if ((*(uint *)(iVar9 + 0x1cb4) & 0x80) != 0) {
    if (fVar7 <= *(float *)(iVar9 + 0x1ce4)) {
      puVar13[0x1a] = *(float *)(iVar9 + 0x1ce4);
      puVar13[0x1c] = fVar7;
    }
    if (fVar7 <= *(float *)(iVar9 + 0x1ce8)) {
      puVar13[0x1b] = *(float *)(iVar9 + 0x1ce8);
      puVar13[0x1d] = fVar7;
    }
  }
  if ((*(uint *)(iVar9 + 0x1cb4) & 4) == 0) {
    if (uVar12 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar13[0xd] = *(undefined4 *)(iVar9 + 0x1cdc);
    puVar13[0xe] = *(undefined4 *)(iVar9 + 0x1ce0);
  }
  if ((*(uint *)(iVar9 + 0x1cb4) & 8) != 0) {
    if ((*(uint *)(iVar9 + 0x1cc0) == 0) ||
       (((int)(puVar13[0x2c] << 0x10 | (uint)puVar13[0x2c] >> 0x10) >> 0x18 &
        *(uint *)(iVar9 + 0x1cc0)) != 0)) {
      *(undefined1 *)((int)puVar13 + 0x8d) = *(undefined1 *)(iVar9 + 0x1cec);
      puVar13[0x2c] = puVar13[0x2c] & 0xfffff1ff;
    }
  }
  if ((*(uint *)(iVar9 + 0x1cb4) & 0x20) != 0) {
    FUN_82023fe0();
  }
  if (*(char *)(puVar13 + 0x24) != '\0') {
    *(byte *)(puVar13 + 0x2c) = *(byte *)(puVar13 + 0x2c) & 0xf7;
    *(byte *)((int)puVar13 + 0xb1) = (byte)((uint)puVar13[0x2c] >> 0x10) & 0xf7;
    *(byte *)((int)puVar13 + 0xb2) = (byte)((uint)puVar13[0x2c] >> 8) & 0xf7;
  }
  if (uVar12 == 0) {
    FUN_8201e468((int)puVar13);
    uVar22 = local_170;
    pfVar10 = local_188;
    uVar15 = uStack00000024;
    uVar12 = uStack00000024 & 0x1000000;
    if (uVar12 == 0) {
      uVar14 = FUN_82021868();
    }
    else {
      uVar14 = *(undefined4 *)(local_170 + 300);
    }
    puVar13[0x4b] = uVar14;
    FUN_82019ee8();
    *(undefined1 *)(puVar13 + 0x23) = 0;
    *(short *)((int)puVar13 + 0x96) = *(short *)((int)puVar13 + 0x96) + 1;
    *(undefined4 *)(iVar9 + 0x1cb4) = 0;
    if (local_150 != 0) {
      if (uVar12 != 0) {
        if ((((uVar15 & 0x40) == 0) && (*(char *)(puVar13 + 0x29) < '\x01')) &&
           (*(char *)((int)puVar13 + 0xa5) < '\x01')) {
          if ((((uVar15 & 0x800000) == 0) || (*(char *)(iVar9 + 0x1dc4) == '\0')) ||
             ((*(int *)(iVar9 + 0x1d84) == 0 ||
              (bVar5 = true, *(int *)(*(int *)(iVar9 + 0x1d84) + 0x2ec) != puVar13[0xbb])))) {
            bVar5 = false;
          }
          if (((*(char *)(iVar9 + 0x2fd4) == '\0') && (!bVar5)) &&
             (((float)puVar13[0x6a] <= (float)puVar13[0x68] ||
              ((float)puVar13[0x6b] <= (float)puVar13[0x69])))) {
            *(undefined1 *)(puVar13 + 0x2b) = 1;
          }
        }
        if (uVar22 != 0) {
          if ((*(char *)(uVar22 + 0x8d) != '\0') || ('\0' < *(char *)(uVar22 + 0xac))) {
            *(undefined1 *)(puVar13 + 0x2b) = 1;
          }
          if ((*(char *)(uVar22 + 0x8d) != '\0') || ('\0' < *(char *)(uVar22 + 0xad))) {
            *(undefined1 *)((int)puVar13 + 0xad) = 1;
          }
        }
      }
      if (*pfVar10 <= fVar7) {
        *(undefined1 *)(puVar13 + 0x2b) = 1;
      }
      if (('\0' < *(char *)(puVar13 + 0x2b)) ||
         (bVar5 = false, '\0' < *(char *)((int)puVar13 + 0xad))) {
        bVar5 = true;
      }
      if ((bVar5) || (uVar20 = 0, '\0' < *(char *)((int)puVar13 + 0xae))) {
        uVar20 = 1;
      }
      *(undefined1 *)((int)puVar13 + 0x91) = uVar20;
      if ('\0' < *(char *)((int)puVar13 + 0xaf)) {
        *(char *)((int)puVar13 + 0xaf) = *(char *)((int)puVar13 + 0xaf) + -1;
        puVar13[2] = puVar13[2] | 0xc0200;
      }
      uVar20 = 0;
      if (((((*(char *)((int)puVar13 + 0x8d) != '\0') || (*(char *)((int)puVar13 + 0x8a) == '\0'))
           || (bVar5)) &&
          ((*(char *)(puVar13 + 0x29) < '\x01' && (*(char *)((int)puVar13 + 0xa5) < '\x01')))) &&
         (*(char *)((int)puVar13 + 0xad) < '\x01')) {
        uVar20 = 1;
      }
      *(undefined1 *)((int)puVar13 + 0x8f) = uVar20;
    }
    FUN_8205b9a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar12 = param_3 & 0x1000000;
  *(undefined1 *)((int)puVar13 + 0x8a) = 1;
  uVar8 = DAT_82002090;
  uVar14 = DAT_82001fe0;
  *(char *)(puVar13 + 0x25) = '\x01' - ((int)uVar24 == 0);
  puVar13[0x7c] = uVar8;
  puVar13[0x7d] = uVar8;
  puVar13[0x7e] = uVar14;
  puVar13[0x7f] = uVar14;
  FUN_8201d738();
  FUN_82035210();
  puVar13[0x5d] = 0xffffffff;
  if (*(char *)(puVar13 + 0xc9) != '\0') {
    FUN_82019228();
  }
  bVar4 = false;
  if ((*(int *)(iVar9 + 0x1edc) != 0) && ((puVar13[2] & 0x80000) == 0)) {
    bVar4 = true;
  }
  if ((bVar4) && (local_16c == 0)) {
    pbVar17 = (byte *)*puVar13;
    pbVar19 = pbVar11;
    do {
      bVar1 = *pbVar19;
      bVar2 = *pbVar17;
      if (bVar1 == 0) break;
      pbVar19 = pbVar19 + 1;
      pbVar17 = pbVar17 + 1;
    } while (bVar1 == bVar2);
    if (bVar1 != bVar2) {
      local_1a0 = (float)puVar13[0x13];
      uVar14 = FUN_820185a8((byte *)*puVar13,&local_1a0,(char *)pbVar11);
      *puVar13 = uVar14;
      puVar13[0x13] = local_1a0;
    }
  }
  FUN_8201a4e8((int)puVar13,(float *)(puVar13 + 9),(float *)(puVar13 + 0xb));
  if ('\0' < *(char *)(puVar13 + 0x2b)) {
    *(char *)(puVar13 + 0x2b) = *(char *)(puVar13 + 0x2b) + -1;
  }
  if ('\0' < *(char *)((int)puVar13 + 0xad)) {
    *(char *)((int)puVar13 + 0xad) = *(char *)((int)puVar13 + 0xad) + -1;
  }
  if ('\0' < *(char *)((int)puVar13 + 0xae)) {
    *(char *)((int)puVar13 + 0xae) = *(char *)((int)puVar13 + 0xae) + -1;
  }
  if ((local_16c != 0) && ((!bVar6 || (!bVar5)))) {
    *(undefined1 *)((int)puVar13 + 0xad) = 1;
  }
  if (((uVar15 != 0) && ((param_3 & 0x6000000) != 0)) &&
     (*(undefined1 *)((int)puVar13 + 0xad) = 1, (param_3 & 0x40) != 0)) {
    if (!bVar6) {
      puVar13[7] = fVar7;
      puVar13[5] = fVar7;
    }
    if (!bVar5) {
      puVar13[8] = fVar7;
      puVar13[6] = fVar7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8201e468((int)puVar13);
  if (uVar12 == 0) {
    if (((param_3 & 0x6000000) == 0) || ((param_3 & 0x8000000) != 0)) {
      fVar3 = local_188[5];
    }
    else {
      fVar3 = local_188[0xe];
    }
  }
  else {
    fVar3 = local_188[0xc];
  }
  puVar13[0x12] = fVar3;
  puVar13[0xf] = local_188[2];
  puVar13[0x10] = local_188[3];
  if (((uVar12 != 0) && ((param_3 & 0x4010000) == 0)) && ((float)puVar13[0x12] == fVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  fVar3 = (float)puVar13[0xf];
  if ((float)puVar13[0xf] < local_188[0x13]) {
    fVar3 = local_188[0x13];
  }
  if (fVar3 < *(float *)(iVar9 + 0x1d0c)) {
    fVar3 = *(float *)(iVar9 + 0x1d0c);
  }
  puVar13[0x4d] = fVar3;
  puVar13[0x4e] = *(undefined4 *)(iVar9 + 0x1d10);
  if (((param_3 & 1) == 0) && ((param_3 & 0x20) == 0)) {
    local_1a0 = (float)puVar13[7] + (float)puVar13[3];
                    /* WARNING: Subroutine does not return */
    FUN_820143e0((int)puVar13);
  }
  *(undefined1 *)((int)puVar13 + 0x8d) = 0;
  *(undefined1 *)((int)puVar13 + 0x8e) = 0;
  FUN_8201edf8();
  if (((uStack00000024 & 0x40) == 0) || (*(char *)((int)puVar13 + 0x8d) != '\0')) {
    if (('\0' < *(char *)(puVar13 + 0x29)) || ('\0' < *(char *)((int)puVar13 + 0xa5))) {
      if ((!bVar6) && ('\0' < *(char *)(puVar13 + 0x29))) {
        fVar3 = local_1a0;
        if ((*(char *)((int)puVar13 + 0xa7) != '\0') &&
           (fVar3 = (float)puVar13[7], (float)puVar13[7] < local_1a0)) {
          fVar3 = local_1a0;
        }
        puVar13[7] = fVar3;
      }
      if ((!bVar5) && ('\0' < *(char *)((int)puVar13 + 0xa5))) {
        fVar3 = local_19c;
        if ((*(char *)((int)puVar13 + 0xa7) != '\0') &&
           (fVar3 = (float)puVar13[8], (float)puVar13[8] < local_19c)) {
          fVar3 = local_19c;
        }
        puVar13[8] = fVar3;
      }
      if (((*(char *)((int)puVar13 + 0x8d) == '\0') && ((puVar13[2] & 0x100) == 0)) &&
         (*(float *)(DAT_82072c98 + 0x2f90) <= fVar7)) {
        *(undefined4 *)(DAT_82072c98 + 0x2f90) = *(undefined4 *)(DAT_82072c98 + 0x1c);
      }
    }
  }
  else {
    if (!bVar6) {
      puVar13[7] = local_1a0;
    }
    if (!bVar5) {
      puVar13[8] = local_19c;
    }
  }
  puVar23 = (undefined4 *)FUN_8201a2a0();
  puVar13[7] = *puVar23;
  puVar13[8] = puVar23[1];
  if ((*(char *)((int)puVar13 + 0x8d) != '\0') && (uVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_820143e0((int)puVar13);
  }
  puVar13[5] = puVar13[7];
  puVar13[6] = puVar13[8];
  FUN_82014438((int)puVar13);
                    /* WARNING: Subroutine does not return */
  FUN_820143e0((int)puVar13);
}


/* ==== FUN_82027928 @ 82027928 ==== */

void FUN_82027928(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82027a90 @ 82027a90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027a90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027ae0 @ 82027ae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027ae0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027b30 @ 82027b30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027b30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027bd8 @ 82027bd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027bd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027c48 @ 82027c48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82027c48(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  iVar1 = DAT_82072c98;
  pcVar5 = (char *)uVar6;
  iVar2 = FUN_82021868();
  uVar3 = FUN_8201ba60(iVar2,0);
  if ((uVar3 & 0xff) == 0) {
    *(undefined4 *)(iVar1 + 0x1cb4) = 0;
  }
  else {
    if ((*(uint *)(iVar1 + 0x1cb4) & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar4 = FUN_82025c98((int)((ulonglong)uVar6 >> 0x20),pcVar5,param_3 | 0xc000020);
    if (((cVar4 == '\0') || ((pcVar5 != (char *)0x0 && (*pcVar5 == '\0')))) &&
       (FUN_820226b8(), cVar4 != '\0')) {
      FUN_8201fa28();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82027d60 @ 82027d60 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82027d60(void)

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
  
  FUN_8205b890();
  FUN_8205b958();
  iVar11 = DAT_82072c98;
  puVar19 = (uint *)(DAT_82072c98 + 8);
  puVar1 = (uint *)(DAT_82072c98 + 8);
  *(undefined1 *)(DAT_82072c98 + 0x363) = 0;
  fVar9 = DAT_820016c4;
  uVar5 = *puVar1 & 1;
  if (((*puVar1 & 2) == 0) || (bVar6 = true, (*(uint *)(iVar11 + 0xc) & 1) == 0)) {
    bVar6 = false;
  }
  if (((bVar6) && (*(int *)(iVar11 + 0x1db8) != 3)) &&
     (((DAT_820016c4 < *(float *)(iVar11 + 0x300) ||
       (((((DAT_820016c4 < *(float *)(iVar11 + 0x308) || (DAT_820016c4 < *(float *)(iVar11 + 0x304))
           ) || (DAT_820016c4 < *(float *)(iVar11 + 0x30c))) ||
         ((DAT_820016c4 < *(float *)(iVar11 + 0x310) || (DAT_820016c4 < *(float *)(iVar11 + 0x314)))
         )) || (DAT_820016c4 < *(float *)(iVar11 + 0x318))))) ||
      (DAT_820016c4 < *(float *)(iVar11 + 0x31c))))) {
    *(undefined4 *)(iVar11 + 0x1db8) = 3;
  }
  uVar15 = DAT_820016c0;
  if (uVar5 != 0) {
    if (*(int *)(iVar11 + 100) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_82072c98 + *(int *)(iVar11 + 100) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x300) = DAT_820016c0;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(int *)(iVar11 + 0x68) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_82072c98 + *(int *)(iVar11 + 0x68) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x308) = uVar15;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(int *)(iVar11 + 0x6c) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_82072c98 + *(int *)(iVar11 + 0x6c) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x304) = uVar15;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(int *)(iVar11 + 0x38) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_82072c98 + *(int *)(iVar11 + 0x38) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x350) = uVar15;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(int *)(iVar11 + 0x3c) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(DAT_82072c98 + *(int *)(iVar11 + 0x3c) + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x354) = uVar15;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(int *)(iVar11 + 0x40) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(*(int *)(iVar11 + 0x40) + DAT_82072c98 + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x358) = uVar15;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(int *)(iVar11 + 0x44) < 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)(*(int *)(iVar11 + 0x44) + DAT_82072c98 + 0x100);
    }
    if (cVar16 != '\0') {
      *(undefined4 *)(iVar11 + 0x35c) = uVar15;
      *(undefined4 *)(iVar11 + 0x1db8) = 2;
    }
    if (*(char *)(iVar11 + 0xfc) != '\0') {
      *(undefined4 *)(iVar11 + 0x348) = uVar15;
    }
    if (*(char *)(iVar11 + 0xfd) != '\0') {
      *(undefined4 *)(iVar11 + 0x34c) = uVar15;
    }
  }
  FUN_8205d810();
  fVar10 = DAT_82001768;
  pfVar13 = (float *)(iVar11 + 0x1480);
  iVar21 = 0x18;
  do {
    fVar2 = fVar10;
    if ((fVar9 < pfVar13[-0x460]) && (fVar2 = fVar9, fVar9 <= pfVar13[1])) {
      fVar2 = *(float *)(iVar11 + 0x18) + pfVar13[1];
    }
    pfVar13 = pfVar13 + 1;
    *pfVar13 = fVar2;
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  if (*(int *)(iVar11 + 0x1dc8) != 0) {
    FUN_820174a0();
  }
  *(undefined1 *)(iVar11 + 0x1dc5) = 0;
  *(undefined1 *)(iVar11 + 0x1dc6) = 0;
  *(undefined4 *)(iVar11 + 0x1dc8) = 0;
  *(undefined4 *)(iVar11 + 0x1da4) = 0;
  if (*(char *)(iVar11 + 0x1ddc) != '\0') {
    FUN_8201c750();
  }
  bVar4 = false;
  *(undefined4 *)(iVar11 + 0x1e20) = 0;
  *(undefined1 *)(iVar11 + 0x1ddd) = 0;
  *(undefined1 *)(iVar11 + 0x1ddc) = 0;
  if ((((*(char *)(iVar11 + 0x1dc1) != '\0') && (*(char *)(iVar11 + 0x1dc0) != '\0')) &&
      (*(char *)(iVar11 + 0x1dc2) == '\0')) &&
     ((*(char *)(iVar11 + 0x1dc3) != '\0' && (*(int *)(iVar11 + 0x1d84) != 0)))) {
    bVar4 = true;
  }
  iVar14 = *(int *)(iVar11 + 0x1d84);
  *(undefined1 *)(iVar11 + 0x1dc1) = 0;
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
  iVar21 = *(int *)(iVar11 + 0x1d84);
  if (((iVar21 != 0) && (*(int *)(iVar21 + 0x2f0) != 0)) && (*(int *)(iVar11 + 0x1dbc) == 0)) {
    *(undefined4 *)(iVar21 + 0x2f0) = 0;
  }
  FUN_82024740();
  if (((uVar5 == 0) && (!bVar6)) ||
     ((*(int *)(iVar11 + 0x1d84) == 0 ||
      (bVar20 = true, (*(uint *)(*(int *)(iVar11 + 0x1d84) + 8) & 0x40000) != 0)))) {
    bVar20 = false;
  }
  *(bool *)(iVar11 + 0x365) = bVar20;
  if ((((bVar20) && (*(int *)(iVar11 + 0x1d88) != 0)) && (*(char *)(iVar11 + 0x1dc2) == '\0')) ||
     (uVar18 = 0, *(int *)(iVar11 + 0x1ed4) != 0)) {
    uVar18 = 1;
  }
  *(undefined1 *)(iVar11 + 0x366) = uVar18;
  FUN_82024558();
  iVar21 = *(int *)(iVar11 + 0x1d88);
  *(undefined4 *)(iVar11 + 0x1d9c) = 0;
  *(undefined4 *)(iVar11 + 0x1d98) = 0;
  *(undefined4 *)(iVar11 + 0x1d94) = 0;
  *(undefined4 *)(iVar11 + 0x1d90) = 0;
  *(undefined4 *)(iVar11 + 0x1da0) = 0;
  if ((((iVar21 == 0) || (*(char *)(iVar11 + 0x1dc2) != '\0')) || (*(int *)(iVar11 + 0x1ed4) != 0))
     || ((*(int *)(iVar11 + 0x1d84) == 0 ||
         ((*(uint *)(*(int *)(iVar11 + 0x1d84) + 8) & 0x40000) != 0)))) goto LAB_820282f0;
  bVar20 = *(float *)(DAT_82072c98 + 0x300) <= fVar9;
  if (bVar20) {
LAB_8202823c:
    bVar7 = false;
  }
  else {
    if ((*(float *)(DAT_82072c98 + 0x1484) < fVar9) ||
       (bVar3 = true, *(float *)(DAT_82072c98 + 0x1484) != fVar9)) {
      bVar3 = false;
    }
    bVar7 = true;
    if (!bVar3) goto LAB_8202823c;
  }
  if (*(float *)(DAT_82072c98 + 0x308) <= fVar9) {
LAB_82028274:
    bVar8 = false;
  }
  else {
    if ((*(float *)(DAT_82072c98 + 0x148c) < fVar9) ||
       (bVar3 = true, *(float *)(DAT_82072c98 + 0x148c) != fVar9)) {
      bVar3 = false;
    }
    bVar8 = true;
    if (!bVar3) goto LAB_82028274;
  }
  iVar14 = *(int *)(iVar11 + 0x1c10);
  if (iVar14 == 0) {
    if (bVar7) {
      *(int *)(iVar11 + 0x1d90) = iVar21;
      *(undefined4 *)(iVar11 + 0x1da0) = 2;
    }
LAB_820282a8:
    if (bVar8) {
      *(int *)(iVar11 + 0x1d9c) = iVar21;
      *(undefined4 *)(iVar11 + 0x1da0) = 1;
    }
  }
  else if (iVar14 == iVar21) goto LAB_820282a8;
  if (((iVar14 == 0) || (iVar14 == iVar21)) && (!bVar20)) {
    *(int *)(iVar11 + 0x1d94) = iVar21;
  }
  if (((iVar14 == 0) || (iVar14 == iVar21)) && (bVar7)) {
    *(int *)(iVar11 + 0x1d98) = iVar21;
  }
LAB_820282f0:
  if ((*(int *)(iVar11 + 0x1d84) != 0) &&
     ((*(uint *)(*(int *)(iVar11 + 0x1d84) + 8) & 0x40000) != 0)) {
    *(undefined1 *)(iVar11 + 0x1dc2) = 1;
  }
  iVar21 = *(int *)(iVar11 + 0x1db0);
  if (iVar21 != 0) {
    if ((*(uint *)(iVar11 + 0x1db4) & 1) == 0) {
      *(int *)(iVar11 + 0x1d98) = iVar21;
      *(int *)(iVar11 + 0x1d94) = iVar21;
      *(int *)(iVar11 + 0x1d90) = iVar21;
    }
    else {
      *(int *)(iVar11 + 0x1d9c) = iVar21;
    }
    *(uint *)(iVar11 + 0x1da0) = *(uint *)(iVar11 + 0x1db4);
  }
  *(undefined4 *)(iVar11 + 0x1db0) = 0;
  FUN_8201ff80();
  if (*(int *)(iVar11 + 0x1dec) == -1) {
    FUN_8201c600();
  }
  if ((*(char *)(DAT_82072c98 + 0x1ddd) != '\0') ||
     (uVar18 = 0, *(char *)(DAT_82072c98 + 0x1dc5) != '\0')) {
    uVar18 = 1;
  }
  *(undefined1 *)(DAT_82072c98 + 0x1dc4) = uVar18;
  *(undefined1 *)(iVar11 + 0x1dc0) = 0;
  if (((*(int *)(iVar11 + 0x1d84) != 0) &&
      ((*(uint *)(*(int *)(iVar11 + 0x1d84) + 8) & 0x40000) == 0)) &&
     (*(int *)(iVar11 + 0x1ed4) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar5 == 0) && (!bVar6)) {
    *(undefined1 *)(iVar11 + 0x1dc2) = 1;
    bVar4 = false;
    *(undefined1 *)(iVar11 + 0x1dc3) = 0;
  }
  if (((bVar4) && ((*puVar19 & 4) != 0)) && ((*(uint *)(iVar11 + 0xc) & 4) != 0)) {
    puVar12 = (undefined4 *)FUN_8201fd70();
    uVar17 = *puVar12;
    *(undefined4 *)(iVar11 + 0x394) = uVar17;
    uVar15 = puVar12[1];
    *(undefined4 *)(iVar11 + 0xe4) = uVar17;
    *(undefined4 *)(iVar11 + 0x398) = uVar15;
    *(undefined1 *)(iVar11 + 0x363) = 1;
    *(undefined4 *)(iVar11 + 0xe8) = uVar15;
  }
  *(undefined4 *)(iVar11 + 0x1e18) = 0;
  FUN_8205b9a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820285e0 @ 820285e0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820285e0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_8205b894();
  iVar1 = DAT_82072c98;
  if (_UNK_82001a64 <= *(float *)(DAT_82072c98 + 0x1ee0)) {
    if (*(int *)(DAT_82072c98 + 0x1edc) == 0) {
      uVar2 = FUN_82014be0((byte *)"###NavWindowingList",0,0);
      iVar3 = FUN_82018c48((uint *)(iVar1 + 0x1bc0),uVar2);
      *(int *)(iVar1 + 0x1edc) = iVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820288d0 @ 820288d0 ==== */

void FUN_820288d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82028af8 @ 82028af8 ==== */

void FUN_82028af8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82028b58 @ 82028b58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028b58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028c00 @ 82028c00 ==== */

void FUN_82028c00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82028e28 @ 82028e28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82028e28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82028f48 @ 82028f48 ==== */

void FUN_82028f48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82029838 @ 82029838 ==== */

void FUN_82029838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82029b58 @ 82029b58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82029b58(void)

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
  int *local_60 [24];
  
  FUN_8205b890();
  iVar2 = DAT_82072c98;
  if (*(int *)(DAT_82072c98 + 0x1b7c) != *(int *)(DAT_82072c98 + 0x1b78)) {
    FUN_82029838();
  }
  iVar9 = *(int *)(iVar2 + 0x1b78);
  iVar7 = *(int *)(iVar2 + 0x1b80);
  *(undefined4 *)(iVar2 + 0x374) = 0;
  *(int *)(iVar2 + 0x1b80) = iVar9;
  bVar13 = iVar9 != iVar7;
  FUN_82019468();
  iVar7 = 0;
  if (*(int *)(iVar2 + 0x1d78) != 0) {
    iVar9 = 0;
    do {
      iVar11 = *(int *)(iVar9 + *(int *)(iVar2 + 0x1d80));
      FUN_8201def0();
      if (*(int *)(iVar11 + 0x2c) != 0) {
        piVar3 = (int *)FUN_82019500();
        local_60[0] = piVar3;
        FUN_82033cf0(piVar3);
        if (*piVar3 != 0) {
          FUN_8201dc38();
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 != *(int *)(iVar2 + 0x1d78));
  }
  if (bVar13) {
    FUN_82021c38();
  }
  iVar7 = *(int *)(iVar2 + 0x1ed4);
  if ((iVar7 == 0) || ((*(uint *)(iVar7 + 8) & 0x2000) != 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(iVar7 + 0x2e0);
  }
  local_60[0] = piVar3;
  if (iVar7 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(iVar2 + 0x1edc);
  }
  iVar7 = 0;
  local_60[1] = piVar10;
  if (*(int *)(iVar2 + 0x1b90) != 0) {
    iVar9 = 0;
    do {
      piVar4 = *(int **)(iVar9 + *(int *)(iVar2 + 0x1b98));
      if (*(char *)((int)piVar4 + 0x8a) == '\0') {
LAB_82029cb4:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (*(char *)((int)piVar4 + 0x91) != '\0') goto LAB_82029cb4;
      }
      if ((((bVar1) && ((piVar4[2] & 0x1000000U) == 0)) && (piVar4 != piVar3)) &&
         (piVar4 != piVar10)) {
        FUN_8201eaa8();
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 != *(int *)(iVar2 + 0x1b90));
  }
  ppiVar12 = local_60;
  iVar7 = 2;
  do {
    piVar3 = *ppiVar12;
    if (piVar3 != (int *)0x0) {
      if (*(char *)((int)piVar3 + 0x8a) == '\0') {
LAB_82029d28:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (*(char *)((int)piVar3 + 0x91) != '\0') goto LAB_82029d28;
      }
      if (bVar1) {
        FUN_8201eaa8();
      }
    }
    iVar7 = iVar7 + -1;
    ppiVar12 = ppiVar12 + 1;
    if (iVar7 == 0) {
      iVar7 = 0;
      *(undefined4 *)(iVar2 + 0x370) = 0;
      *(undefined4 *)(iVar2 + 0x36c) = 0;
      if (0 < *(int *)(iVar2 + 0x1d78)) {
        iVar9 = 0;
        do {
          iVar11 = *(int *)(iVar9 + *(int *)(iVar2 + 0x1d80));
          piVar3 = (int *)(iVar11 + 0x60);
          FUN_8201eb70();
          if ((*(char *)(iVar2 + 0xb0) != '\0') && (bVar13)) {
            FUN_82019500();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(int *)(iVar11 + 0x30) != 0) {
            piVar10 = (int *)FUN_82019500();
            local_60[0] = piVar10;
            FUN_82033cf0(piVar10);
            if (*piVar10 != 0) {
              FUN_8201dc38();
            }
          }
          iVar8 = DAT_82072c98;
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
          *(int *)(iVar2 + 0x36c) = *(int *)(iVar11 + 0x40) + *(int *)(iVar2 + 0x36c);
          *(int *)(iVar2 + 0x370) = *(int *)(iVar11 + 0x3c) + *(int *)(iVar2 + 0x370);
        } while (iVar7 < *(int *)(iVar2 + 0x1d78));
      }
      FUN_82019468();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_82029f10 @ 82029f10 ==== */

void FUN_82029f10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8202a068 @ 8202a068 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202a068(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202a238 @ 8202a238 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202a238(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_8205b870();
  FUN_8205b920();
  iVar2 = FUN_82015b80();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b96c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8201b2e8();
  *(undefined4 *)(iVar2 + 0x1c64) = 0;
  FUN_820223d0();
  FUN_8201f8f0();
  if ((param_3 & 8) == 0) {
    FUN_8204db68();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202b8f0 @ 8202b8f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202b8f0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  
  FUN_8205b870();
  uVar4 = FUN_8205b940();
  iVar1 = DAT_82072c98;
  pfVar3 = (float *)uVar4;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar2 = DAT_82072c98;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b98c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82016b18();
  FUN_8201b2e8();
  FUN_82015368((char *)((ulonglong)uVar4 >> 0x20),(char *)0x0);
  *(undefined4 *)(iVar2 + 0x1c64) = 0;
  FUN_8201f8f0();
  FUN_820223d0();
  if ((param_3 & 0x20) != 0) {
    param_3 = param_3 & 0xff9fffff | 0x100008;
  }
  if ((param_3 & 8) == 0) {
    FUN_82045378();
  }
  if ((param_3 & 0x700000) == 0) {
    param_3 = *(uint *)(iVar2 + 0x2ef4) & 0x700000 | param_3;
  }
  if ((param_3 & 0x18000000) == 0) {
    param_3 = *(uint *)(iVar2 + 0x2ef4) & 0x18000000 | param_3;
  }
  if (((param_3 & 0x10000000) == 0) || ((param_3 & 0x100000) == 0)) {
    if (((param_3 & 0x8000000) != 0) && ((param_3 & 0x200000) != 0)) {
      FUN_82018bb0((double)*pfVar3,(double)pfVar3[1],(double)pfVar3[2]);
      FUN_8203e9e8();
    }
  }
  else {
    FUN_820150a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c460 @ 8202c460 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c460(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c4d8 @ 8202c4d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c4d8(double param_1)

{
  if (param_1 < (double)DAT_820016c4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c540 @ 8202c540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c540(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202c5f0 @ 8202c5f0 ==== */

void FUN_8202c5f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_8202c858 @ 8202c858 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202c858(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar17 = FUN_8205b890();
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
    FUN_8205be38(iVar3,param_3,0x10,&LAB_8202a3e0);
  }
  if (0 < (int)param_3) {
    puVar14 = (ushort *)(iVar3 + 4);
    uVar16 = param_3;
    do {
      uVar15 = (uint)*puVar14;
      if (uVar15 == 0) {
LAB_8202c9e4:
        puVar14[3] = 0;
        puVar14[2] = 0;
      }
      else {
        uVar1 = puVar14[1];
        if (uVar1 == 0) goto LAB_8202c9e4;
        piVar7 = (int *)FUN_8202c5f0();
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
    FUN_8205be38(iVar3,param_3,0x10,&LAB_8202a428);
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


/* ==== FUN_8202ca70 @ 8202ca70 ==== */

uint FUN_8202ca70(int *param_1,int param_2)

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


/* ==== FUN_8202cac0 @ 8202cac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cac0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202cbe0 @ 8202cbe0 ==== */

uint FUN_8202cbe0(int *param_1)

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


/* ==== FUN_8202cce8 @ 8202cce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cce8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202cf00 @ 8202cf00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cf00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202cf98 @ 8202cf98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202cf98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202d0c0 @ 8202d0c0 ==== */

undefined4 FUN_8202d0c0(char *param_1)

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


/* ==== FUN_8202d1b8 @ 8202d1b8 ==== */

int FUN_8202d1b8(int param_1,int param_2,char *param_3)

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


/* ==== FUN_8202d288 @ 8202d288 ==== */

int FUN_8202d288(char *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_8202d0c0();
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


/* ==== FUN_8202d3a0 @ 8202d3a0 ==== */

void FUN_8202d3a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8202d4d0 @ 8202d4d0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8202d6c0) */

void FUN_8202d4d0(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar10 = FUN_8205b890();
  iVar1 = (int)((ulonglong)uVar10 >> 0x20);
  iVar9 = (int)uVar10;
  *(int *)(iVar1 + 4) = iVar9;
  *(int *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iVar2 = FUN_8202d1b8(iVar9,param_3,"cmap");
  iVar3 = FUN_8202d1b8(iVar9,param_3,"loca");
  *(int *)(iVar1 + 0x10) = iVar3;
  iVar4 = FUN_8202d1b8(iVar9,param_3,"head");
  *(int *)(iVar1 + 0x14) = iVar4;
  iVar5 = FUN_8202d1b8(iVar9,param_3,"glyf");
  *(int *)(iVar1 + 0x18) = iVar5;
  iVar6 = FUN_8202d1b8(iVar9,param_3,"hhea");
  *(int *)(iVar1 + 0x1c) = iVar6;
  iVar7 = FUN_8202d1b8(iVar9,param_3,"hmtx");
  *(int *)(iVar1 + 0x20) = iVar7;
  iVar8 = FUN_8202d1b8(iVar9,param_3,"kern");
  *(int *)(iVar1 + 0x24) = iVar8;
  iVar8 = FUN_8202d1b8(iVar9,param_3,"GPOS");
  *(int *)(iVar1 + 0x28) = iVar8;
  if ((((iVar2 != 0) && (iVar4 != 0)) && (iVar6 != 0)) && (iVar7 != 0)) {
    if (iVar5 == 0) {
      iVar2 = FUN_8202d1b8(iVar9,param_3,"CFF ");
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
        FUN_8202cac0();
        FUN_8202cac0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (iVar3 != 0) {
      iVar3 = FUN_8202d1b8(iVar9,param_3,"maxp");
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


/* ==== FUN_8202da18 @ 8202da18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202da18(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_8205b8a4();
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  uVar2 = (uint)uVar10;
  iVar7 = *(int *)(iVar4 + 4);
  iVar6 = *(int *)(iVar4 + 0x2c);
  iVar8 = iVar6 + iVar7;
  iVar4 = (uint)*(byte *)(iVar8 + 1) + (uint)*(byte *)(iVar6 + iVar7) * 0x100;
  if (((iVar4 != 0) && (iVar4 != 6)) && (iVar4 != 2)) {
    if (iVar4 == 4) {
      sVar3 = (ushort)*(byte *)(iVar8 + 0xb) + (ushort)*(byte *)(iVar8 + 10) * 0x100;
      uVar1 = (uint)*(byte *)(iVar8 + 9) + (uint)*(byte *)(iVar8 + 8) * 0x100 >> 1;
      if ((int)uVar2 < 0x10000) {
        iVar8 = ((uint)*(byte *)(iVar8 + 0xc) * 0x100 + (uint)*(byte *)(iVar8 + 0xd) & 0xfffffffe) +
                iVar6 + 0xe;
        iVar4 = iVar6 + 0xe;
        if ((int)((uint)*(byte *)(iVar8 + iVar7) * 0x100 + (uint)*(byte *)(iVar8 + iVar7 + 1)) <=
            (int)uVar2) {
          iVar4 = iVar8;
        }
        iVar4 = iVar4 + -2;
        for (; sVar3 != 0; sVar3 = sVar3 + -1) {
          uVar1 = uVar1 >> 1;
          iVar6 = uVar1 * 2 + iVar4;
          if ((int)((uint)*(byte *)(iVar6 + iVar7) * 0x100 + (uint)*(byte *)(iVar6 + iVar7 + 1)) <
              (int)uVar2) {
            iVar4 = iVar6;
          }
        }
      }
    }
    else if ((iVar4 == 0xc) || (iVar4 == 0xd)) {
      iVar5 = 0;
      iVar4 = (((uint)*(byte *)(iVar8 + 0xc) * 0x100 + (uint)*(byte *)(iVar8 + 0xd)) * 0x100 +
              (uint)*(byte *)(iVar8 + 0xe)) * 0x100 + (uint)*(byte *)(iVar8 + 0xf);
      if (0 < iVar4) {
        do {
          iVar8 = (iVar4 - iVar5 >> 1) + iVar5;
          iVar9 = iVar8 * 0xc + iVar6 + iVar7;
          if ((((uint)*(byte *)(iVar9 + 0x10) * 0x100 + (uint)*(byte *)(iVar9 + 0x11)) * 0x100 +
              (uint)*(byte *)(iVar9 + 0x12)) * 0x100 + (uint)*(byte *)(iVar9 + 0x13) <= uVar2) {
            if (uVar2 <= (((uint)*(byte *)(iVar9 + 0x14) * 0x100 + (uint)*(byte *)(iVar9 + 0x15)) *
                          0x100 + (uint)*(byte *)(iVar9 + 0x16)) * 0x100 +
                         (uint)*(byte *)(iVar9 + 0x17)) {
              halt_baddata();
            }
            iVar5 = iVar8 + 1;
            iVar8 = iVar4;
          }
          iVar4 = iVar8;
        } while (iVar5 < iVar8);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202ddc8 @ 8202ddc8 ==== */

int FUN_8202ddc8(int param_1,int param_2)

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


/* ==== FUN_8202deb8 @ 8202deb8 ==== */

void FUN_8202deb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8202df70 @ 8202df70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202df70(undefined4 param_1,undefined4 param_2,int *param_3)

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
  
  FUN_8205b874();
  uVar22 = FUN_8205b93c();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar19 = *(int *)(iVar12 + 4);
  iVar16 = 0;
  iVar2 = FUN_8202ddc8(iVar12,(int)uVar22);
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
            iVar2 = FUN_8202df70(iVar12,(uint)*pbVar10 * 0x100 + (uint)*pbVar7,local_180);
          }
          else {
            iVar2 = FUN_8202f630();
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
      iVar16 = FUN_82015ab0(iVar12 * 0xe);
      if (iVar16 == 0) goto LAB_8202e36c;
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
              goto LAB_8202e10c;
            }
          }
          else {
            bVar8 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            uVar11 = (ushort)bVar8;
            if ((bVar17 & 0x10) == 0) {
              uVar11 = -uVar11;
            }
LAB_8202e10c:
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
              goto LAB_8202e184;
            }
          }
          else {
            pbVar10 = pbVar7 + 2;
            pbVar7 = pbVar7 + 1;
            uVar11 = (ushort)*pbVar10;
            if ((bVar17 & 0x20) == 0) {
              uVar11 = -uVar11;
            }
LAB_8202e184:
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
              iVar19 = FUN_8202deb8();
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
LAB_8202e328:
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
              goto LAB_8202e328;
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
      FUN_8202deb8();
    }
    *param_3 = iVar16;
  }
LAB_8202e36c:
  FUN_8205b988();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202e7a8 @ 8202e7a8 ==== */

void FUN_8202e7a8(int param_1,int param_2,int param_3)

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


/* ==== FUN_8202e828 @ 8202e828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202e828(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202e8f8 @ 8202e8f8 ==== */

void FUN_8202e8f8(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double extraout_f1;
  
  if ((*(float *)(param_3 + 8) != *(float *)(param_3 + 0x10)) ||
     (*(float *)(param_3 + 0xc) != *(float *)(param_3 + 0x14))) {
    param_3 = FUN_8202e828();
    param_1 = extraout_f1;
  }
  fVar1 = (float)((double)*(float *)(param_3 + 0x10) + param_1);
  fVar2 = (float)(param_2 + (double)*(float *)(param_3 + 0x14));
  *(float *)(param_3 + 0x10) = fVar1;
  *(float *)(param_3 + 8) = fVar1;
  *(float *)(param_3 + 0x14) = fVar2;
  *(float *)(param_3 + 0xc) = fVar2;
  FUN_8202e828();
  return;
}


/* ==== FUN_8202e9b8 @ 8202e9b8 ==== */

void FUN_8202e9b8(double param_1,double param_2,int param_3)

{
  *(float *)(param_3 + 0x10) = (float)(param_1 + (double)*(float *)(param_3 + 0x10));
  *(float *)(param_3 + 0x14) = (float)(param_2 + (double)*(float *)(param_3 + 0x14));
  FUN_8202e828();
  return;
}


/* ==== FUN_8202ea20 @ 8202ea20 ==== */

void FUN_8202ea20(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  *(float *)(param_7 + 0x10) =
       (float)((double)(float)((double)(float)(param_1 + (double)*(float *)(param_7 + 0x10)) +
                              param_3) + param_5);
  *(float *)(param_7 + 0x14) =
       (float)((double)(float)((double)(float)(param_2 + (double)*(float *)(param_7 + 0x14)) +
                              param_4) + param_6);
  FUN_8202e828();
  return;
}


/* ==== FUN_8202eab8 @ 8202eab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202eab8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202eba0 @ 8202eba0 ==== */

void FUN_8202eba0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8202ed30 @ 8202ed30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202ed30(void)

{
  FUN_8205b87c();
  FUN_8205b93c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202f630 @ 8202f630 ==== */

void FUN_8202f630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8202f710 @ 8202f710 ==== */

void FUN_8202f710(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8202f800 @ 8202f800 ==== */

void FUN_8202f800(int param_1,int param_2,int *param_3,int *param_4)

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


/* ==== FUN_8202f900 @ 8202f900 ==== */

void FUN_8202f900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8202fa48 @ 8202fa48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202fa48(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
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


/* ==== FUN_8202fb58 @ 8202fb58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8202fb58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8202fff8 @ 8202fff8 ==== */

void FUN_8202fff8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_820302f0 @ 820302f0 ==== */

void FUN_820302f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82030548 @ 82030548 ==== */

void FUN_82030548(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_820307c0 @ 820307c0 ==== */

void FUN_820307c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820308e8 @ 820308e8 ==== */

void FUN_820308e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82030ad0 @ 82030ad0 ==== */

void FUN_82030ad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_82030e30 @ 82030e30 ==== */

void FUN_82030e30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82030ef8 @ 82030ef8 ==== */

void FUN_82030ef8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_820311a0 @ 820311a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820311a0(void)

{
  FUN_8205b89c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82031438 @ 82031438 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82031438(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  
  FUN_8205b870();
  iVar19 = FUN_8205b944();
  if (iVar19 == 0) {
    iVar19 = FUN_82015230();
  }
  uVar4 = _UNK_82006208;
  uVar8 = _UNK_82006204;
  uVar7 = _UNK_82006200;
  uVar6 = _UNK_820023ac;
  uVar3 = DAT_82001760;
  uVar2 = DAT_820016c4;
  uVar1 = DAT_820016c0;
  *(undefined4 *)(iVar19 + 0xd8) = DAT_82001760;
  *(undefined4 *)(iVar19 + 200) = uVar1;
  *(undefined4 *)(iVar19 + 0xd4) = uVar1;
  *(undefined4 *)(iVar19 + 0xcc) = uVar1;
  *(undefined4 *)(iVar19 + 0xd0) = uVar1;
  *(undefined4 *)(iVar19 + 0xdc) = uVar3;
  *(undefined4 *)(iVar19 + 0xe0) = uVar3;
  *(undefined4 *)(iVar19 + 0xe4) = uVar1;
  *(undefined4 *)(iVar19 + 0xe8) = uVar4;
  *(undefined4 *)(iVar19 + 0xec) = uVar4;
  *(undefined4 *)(iVar19 + 0xf0) = uVar4;
  *(undefined4 *)(iVar19 + 0xf4) = uVar8;
  *(undefined4 *)(iVar19 + 0xf8) = uVar2;
  uVar18 = _UNK_820061fc;
  uVar17 = _UNK_820061f8;
  uVar16 = _UNK_820061f4;
  uVar15 = _UNK_820061f0;
  uVar14 = _UNK_820061ec;
  uVar13 = _UNK_820061e8;
  uVar12 = _UNK_820061e4;
  uVar5 = _UNK_82002138;
  uVar4 = _UNK_8200212c;
  *(undefined4 *)(iVar19 + 0x104) = uVar2;
  *(undefined4 *)(iVar19 + 0x108) = uVar6;
  *(undefined4 *)(iVar19 + 0xfc) = uVar2;
  *(undefined4 *)(iVar19 + 0x100) = uVar2;
  uVar11 = _UNK_820061e0;
  *(undefined4 *)(iVar19 + 0x10c) = uVar6;
  *(undefined4 *)(iVar19 + 0x110) = uVar6;
  *(undefined4 *)(iVar19 + 0x114) = uVar8;
  *(undefined4 *)(iVar19 + 0x118) = uVar7;
  *(undefined4 *)(iVar19 + 0x11c) = uVar7;
  *(undefined4 *)(iVar19 + 0x120) = uVar3;
  *(undefined4 *)(iVar19 + 0x124) = uVar3;
  uVar10 = _UNK_820061dc;
  uVar9 = _UNK_820061d8;
  uVar3 = _UNK_82002528;
  *(undefined4 *)(iVar19 + 0x134) = uVar2;
  *(undefined4 *)(iVar19 + 0x138) = uVar18;
  *(undefined4 *)(iVar19 + 0x140) = uVar11;
  uVar8 = _UNK_820061d4;
  uVar7 = _UNK_820061d0;
  *(undefined4 *)(iVar19 + 0x13c) = uVar15;
  *(undefined4 *)(iVar19 + 0x128) = uVar2;
  *(undefined4 *)(iVar19 + 300) = uVar2;
  *(undefined4 *)(iVar19 + 0x130) = uVar2;
  *(undefined4 *)(iVar19 + 0x144) = uVar14;
  *(undefined4 *)(iVar19 + 0x148) = uVar16;
  uVar6 = _UNK_820061cc;
  *(undefined4 *)(iVar19 + 0x14c) = uVar13;
  *(undefined4 *)(iVar19 + 0x150) = uVar12;
  *(undefined4 *)(iVar19 + 0x154) = uVar5;
  *(undefined4 *)(iVar19 + 0x158) = uVar16;
  *(undefined4 *)(iVar19 + 0x15c) = uVar13;
  *(undefined4 *)(iVar19 + 0x160) = uVar12;
  *(undefined4 *)(iVar19 + 0x164) = uVar4;
  *(undefined4 *)(iVar19 + 0x178) = uVar18;
  *(undefined4 *)(iVar19 + 0x174) = uVar1;
  *(undefined4 *)(iVar19 + 0x168) = uVar17;
  *(undefined4 *)(iVar19 + 0x16c) = uVar17;
  *(undefined4 *)(iVar19 + 0x17c) = uVar15;
  *(undefined4 *)(iVar19 + 0x180) = uVar11;
  *(undefined4 *)(iVar19 + 0x184) = uVar1;
  *(undefined4 *)(iVar19 + 0x188) = uVar2;
  *(undefined4 *)(iVar19 + 0x170) = uVar17;
  *(undefined4 *)(iVar19 + 0x18c) = uVar2;
  *(undefined4 *)(iVar19 + 0x1ac) = uVar3;
  *(undefined4 *)(iVar19 + 400) = uVar2;
  *(undefined4 *)(iVar19 + 0x1bc) = uVar9;
  *(undefined4 *)(iVar19 + 0x1c0) = uVar9;
  *(undefined4 *)(iVar19 + 0x1c8) = uVar6;
  *(undefined4 *)(iVar19 + 0x1a8) = uVar3;
  *(undefined4 *)(iVar19 + 0x1d4) = uVar1;
  *(undefined4 *)(iVar19 + 0x1a0) = uVar7;
  *(undefined4 *)(iVar19 + 0x194) = uVar8;
  *(undefined4 *)(iVar19 + 0x198) = uVar7;
  *(undefined4 *)(iVar19 + 0x1cc) = uVar6;
  *(undefined4 *)(iVar19 + 0x1d0) = uVar6;
  *(undefined4 *)(iVar19 + 0x1e8) = uVar16;
  *(undefined4 *)(iVar19 + 0x1d8) = uVar8;
  *(undefined4 *)(iVar19 + 0x1dc) = uVar8;
  *(undefined4 *)(iVar19 + 0x1f0) = uVar12;
  *(undefined4 *)(iVar19 + 0x1ec) = uVar13;
  *(undefined4 *)(iVar19 + 0x1a4) = uVar1;
  *(undefined4 *)(iVar19 + 0x1b8) = uVar9;
  *(undefined4 *)(iVar19 + 0x1c4) = uVar1;
  *(undefined4 *)(iVar19 + 0x1e0) = uVar8;
  *(undefined4 *)(iVar19 + 0x1e4) = uVar1;
  *(undefined4 *)(iVar19 + 0x19c) = uVar7;
  *(undefined4 *)(iVar19 + 0x1b0) = uVar3;
  *(undefined4 *)(iVar19 + 0x1b4) = uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032240 @ 82032240 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032240(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032368 @ 82032368 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032368(void)

{
  FUN_8205b8a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820324c0 @ 820324c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820324c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032548 @ 82032548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820325a0 @ 820325a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820325a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032658 @ 82032658 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032658(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820326b0 @ 820326b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820326b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032738 @ 82032738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820327c0 @ 820327c0 ==== */

undefined * FUN_820327c0(void)

{
  return &UNK_82006210;
}


/* ==== FUN_820327d0 @ 820327d0 ==== */

int FUN_820327d0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 & 0xffff) < *(uint *)(param_1 + 0x14)) &&
     (uVar1 = (uint)*(ushort *)((param_2 & 0xffff) * 2 + *(int *)(param_1 + 0x1c)), uVar1 != 0xffff)
     ) {
    return uVar1 * 0x28 + *(int *)(param_1 + 0x28);
  }
  return *(int *)(param_1 + 0x2c);
}


/* ==== FUN_82032810 @ 82032810 ==== */

void FUN_82032810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_820329d8 @ 820329d8 ==== */

void FUN_820329d8(uint param_1,int param_2)

{
  int iVar1;
  
  if (puRam82072cb8 < puRam82072cb4 + param_2) {
    puRam82072cb4 = puRam82072cb4 + param_2;
    return;
  }
  if (param_1 < uRam82072cbc) {
    puRam82072cb4 = puRam82072cb8 + 1;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    iVar1 = param_1 - (int)puRam82072cb4;
    do {
      *puRam82072cb4 = puRam82072cb4[iVar1];
      puRam82072cb4 = puRam82072cb4 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* ==== FUN_82032a38 @ 82032a38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032a38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032ab0 @ 82032ab0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032ab0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032d10 @ 82032d10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032d10(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int extraout_r4;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_8205b8a4();
  uVar1 = param_3 % 0x15b0;
  iVar2 = extraout_r4;
  while (param_3 != 0) {
    uVar3 = 0;
    if (7 < uVar1) {
      iVar4 = 7 - iVar2;
      do {
        uVar3 = uVar3 + 8;
        iVar2 = iVar2 + 8;
      } while ((uint)(iVar4 + iVar2) < uVar1);
    }
    if (uVar3 < uVar1) {
      iVar4 = uVar1 - uVar3;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_3 = param_3 - uVar1;
    uVar1 = 0x15b0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032e18 @ 82032e18 ==== */

void FUN_82032e18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82032f78 @ 82032f78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82032f78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82032ff0 @ 82032ff0 ==== */

void FUN_82032ff0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033050 @ 82033050 ==== */

void FUN_82033050(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820330b0 @ 820330b0 ==== */

void FUN_820330b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033110 @ 82033110 ==== */

void FUN_82033110(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033170 @ 82033170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820331c0 @ 820331c0 ==== */

void FUN_820331c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033220 @ 82033220 ==== */

void FUN_82033220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033280 @ 82033280 ==== */

void FUN_82033280(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820332e0 @ 820332e0 ==== */

void FUN_820332e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820334d0 @ 820334d0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820334d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined8 extraout_f1;
  undefined4 in_stack_0000005c;
  int aiStack_80 [4];
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  FUN_8205b89c();
  iVar1 = FUN_8205b958();
  if (*(int *)(iVar1 + 0x3c) == 0) {
    uVar2 = FUN_8202df70(iVar1,in_stack_0000005c,aiStack_80);
  }
  else {
    uVar2 = FUN_8202f630();
  }
  FUN_820332e0(extraout_f1,param_2,param_3,param_4,iVar1,in_stack_0000005c);
  iStack_70 = param_7;
  iStack_6c = param_8;
  uStack_68 = param_9;
  uStack_64 = extraout_r4;
  if ((param_7 != 0) && (param_8 != 0)) {
    FUN_82030e30((double)_UNK_820024f0,extraout_f1,param_2,param_3,param_4,&iStack_70,extraout_r4_00
                 ,aiStack_80[0],uVar2);
  }
  FUN_82015ae8(aiStack_80[0]);
  FUN_8205b9a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820335e0 @ 820335e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820335e0(undefined4 param_1,undefined4 param_2,float *param_3,int param_4)

{
  int iVar1;
  
  FUN_8205b874();
  iVar1 = FUN_8205b944();
  if (param_4 < 1) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    FUN_8205b990();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_820016c4 < *param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82033ad8 @ 82033ad8 ==== */

void FUN_82033ad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033be0 @ 82033be0 ==== */

void FUN_82033be0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82033cf0 @ 82033cf0 ==== */

void FUN_82033cf0(int *param_1)

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


/* ==== FUN_82033d30 @ 82033d30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_82033d30(double param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  
  if ((int)(param_1 + (double)_UNK_82006228) < 0x40) {
    uVar1 = (uint)*(byte *)(*(int *)(param_2 + 0x2c) + (int)(param_1 + (double)_UNK_82006228) +
                           0x1b0);
  }
  else {
    dVar2 = (double)*(float *)(*(int *)(param_2 + 0x2c) + 0x14);
    if (param_1 <= dVar2) {
      dVar2 = param_1;
    }
    dVar2 = (double)FUN_8205e7b8((double)(DAT_820016c0 - (float)(dVar2 / param_1)));
    dVar2 = (double)FUN_8205e7c0((double)(_UNK_82006224 / (float)dVar2));
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


/* ==== FUN_82033df8 @ 82033df8 ==== */

void FUN_82033df8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82033e90 @ 82033e90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82033e90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034050 @ 82034050 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034050(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034100 @ 82034100 ==== */

void FUN_82034100(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82034268 @ 82034268 ==== */

void FUN_82034268(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82034408 @ 82034408 ==== */

void FUN_82034408(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82034668 @ 82034668 ==== */

void FUN_82034668(int param_1,ushort *param_2)

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


/* ==== FUN_820346b8 @ 820346b8 ==== */

void FUN_820346b8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar2 = DAT_820016c4;
  param_1[6] = 0;
  uVar1 = DAT_820016c0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[4] = uVar2;
  param_1[3] = uVar2;
  *(undefined2 *)((int)param_1 + 0x3a) = 0xffff;
  param_1[0x11] = uVar1;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  param_1[0x13] = uVar2;
  *(undefined2 *)((int)param_1 + 0x3e) = 0xffff;
  param_1[0x12] = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  return;
}


/* ==== FUN_82034738 @ 82034738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820347b0 @ 820347b0 ==== */

void FUN_820347b0(int param_1,uint param_2,char param_3)

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


/* ==== FUN_82034810 @ 82034810 ==== */

void FUN_82034810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82034a78 @ 82034a78 ==== */

void FUN_82034a78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82034b10 @ 82034b10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034b10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034b88 @ 82034b88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034b88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034c00 @ 82034c00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034c00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034cb8 @ 82034cb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034cb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034d30 @ 82034d30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034d30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034dd0 @ 82034dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034e78 @ 82034e78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034e78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82034f20 @ 82034f20 ==== */

void FUN_82034f20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82034fb8 @ 82034fb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82034fb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035030 @ 82035030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820350a8 @ 820350a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820350a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035120 @ 82035120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035198 @ 82035198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035210 @ 82035210 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035210(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035308 @ 82035308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035378 @ 82035378 ==== */

void FUN_82035378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82035408 @ 82035408 ==== */

void FUN_82035408(int *param_1)

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
      FUN_8205b8ac();
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


/* ==== FUN_820354e8 @ 820354e8 ==== */

void FUN_820354e8(int *param_1)

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
    FUN_82035378();
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


/* ==== FUN_82035588 @ 82035588 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035588(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820356b0 @ 820356b0 ==== */

void FUN_820356b0(int *param_1)

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
      FUN_8205b8ac();
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


/* ==== FUN_82035710 @ 82035710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82035760 @ 82035760 ==== */

void FUN_82035760(int *param_1)

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
    FUN_82035378();
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


/* ==== FUN_82035790 @ 82035790 ==== */

void FUN_82035790(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82035868 @ 82035868 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82035868(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_8205b878();
  if (1 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820364f0 @ 820364f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820364f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_8205b87c();
  if (2 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820368a0 @ 820368a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820368a0(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r6;
  int in_r7;
  uint in_r8;
  uint uVar4;
  double extraout_f1;
  
  uVar2 = FUN_8205b894();
  if ((double)DAT_820016c4 < extraout_f1) {
    if ((int)in_r8 < 1) {
      iVar3 = FUN_82033d30(extraout_f1,uVar2);
      in_r8 = 0x30 / iVar3;
      trapWord(6,iVar3,0);
    }
    if ((int)in_r8 < 1) {
      in_r8 = 1;
    }
    else if (0xc < (int)in_r8) {
      in_r8 = 0xc;
    }
    uVar4 = in_r7 - in_r6 >> 0x1f;
    bVar1 = false;
    uVar4 = (in_r7 - in_r6 ^ uVar4) - uVar4;
    if (1 < (int)in_r8) {
      trapWord(6,in_r8,0);
      trapWord(6,in_r8,0);
      trapWord(5,in_r8 & ~((uVar4 * 2 | uVar4 >> 0x1f) - 1),0xffff);
      trapWord(5,in_r8 & ~((uVar4 * 2 | uVar4 >> 0x1f) - 1),0xffff);
      if (0 < (int)(uVar4 - ((int)uVar4 / (int)in_r8) * in_r8)) {
        bVar1 = true;
      }
    }
    FUN_8202c460();
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
    FUN_8201d690();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036b20 @ 82036b20 ==== */

void FUN_82036b20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82036c18 @ 82036c18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82036c18(double param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r6;
  int iVar4;
  int in_r7;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double extraout_f1;
  
  if (param_1 <= (double)DAT_820016c4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = 0;
  iVar5 = (in_r7 * 0x30) / 0xc;
  iVar4 = (in_r6 * 0x30) / 0xc;
  uVar2 = FUN_8205b894();
  if ((double)DAT_820016c4 < extraout_f1) {
    if ((int)uVar6 < 1) {
      iVar3 = FUN_82033d30(extraout_f1,uVar2);
      uVar6 = 0x30 / iVar3;
      trapWord(6,iVar3,0);
    }
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    else if (0xc < (int)uVar6) {
      uVar6 = 0xc;
    }
    uVar7 = iVar5 - iVar4 >> 0x1f;
    bVar1 = false;
    uVar7 = (iVar5 - iVar4 ^ uVar7) - uVar7;
    if (1 < (int)uVar6) {
      trapWord(6,uVar6,0);
      trapWord(6,uVar6,0);
      trapWord(5,uVar6 & ~((uVar7 * 2 | uVar7 >> 0x1f) - 1),0xffff);
      trapWord(5,uVar6 & ~((uVar7 * 2 | uVar7 >> 0x1f) - 1),0xffff);
      if (0 < (int)(uVar7 - ((int)uVar7 / (int)uVar6) * uVar6)) {
        bVar1 = true;
      }
    }
    FUN_8202c460();
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
    FUN_8201d690();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82036c50 @ 82036c50 ==== */

void FUN_82036c50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82036f30 @ 82036f30 ==== */

void FUN_82036f30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82037208 @ 82037208 ==== */

void FUN_82037208(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_820373e0 @ 820373e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820373e0(void)

{
  int *piVar1;
  uint in_r9;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b89c();
  piVar1 = (int *)((ulonglong)uVar5 >> 0x20);
  if ((in_r9 & 0xff000000) != 0) {
    bVar4 = piVar1[0x1c] != (int)uVar5;
    if (bVar4) {
      FUN_82035710();
    }
    FUN_82035790();
    FUN_82032368();
    if (bVar4) {
      iVar2 = piVar1[0x12] + -1;
      piVar1[0x12] = iVar2;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 * 4 + piVar1[0x14] + -4);
      }
      piVar1[0x1c] = iVar3;
      FUN_820354e8(piVar1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037498 @ 82037498 ==== */

void FUN_82037498(int *param_1,int *param_2,int param_3)

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
        FUN_8205d810();
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
      FUN_82035378();
      return;
    }
  }
  FUN_82035378();
  return;
}


/* ==== FUN_820375d8 @ 820375d8 ==== */

void FUN_820375d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820376c8 @ 820376c8 ==== */

void FUN_820376c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82037750 @ 82037750 ==== */

void FUN_82037750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82037808 @ 82037808 ==== */

void FUN_82037808(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82037978 @ 82037978 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037978(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820379f8 @ 820379f8 ==== */

void FUN_820379f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82037a70 @ 82037a70 ==== */

void FUN_82037a70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82037b98 @ 82037b98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037b98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037c20 @ 82037c20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037c20(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_8205b8a4();
  uVar3 = 0;
  do {
    if ((1 << (uVar3 & 0x1f) & *(uint *)((uVar3 >> 3 & 0x1ffffffc) + *(int *)(iVar1 + 8))) != 0) {
      FUN_8201d418();
      if ((int)uVar3 < 0xffff) {
        uVar2 = uVar3;
        do {
          uVar2 = uVar2 + 1;
          if ((1 << (uVar2 & 0x1f) & *(uint *)((uVar2 >> 3 & 0x1ffffffc) + *(int *)(iVar1 + 8))) ==
              0) break;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0xffff);
      }
      FUN_8201d418();
    }
    uVar3 = uVar3 + 1;
    if (0xffff < (int)uVar3) {
      FUN_8201d418();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_82037ce0 @ 82037ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037d50 @ 82037d50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037d50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82037f80 @ 82037f80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82037f80(void)

{
  FUN_8205b880();
  FUN_8205b94c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820384c0 @ 820384c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820384c0(void)

{
  FUN_8205b8a4();
  FUN_8205b950();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820386e8 @ 820386e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820386e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038750 @ 82038750 ==== */

void FUN_82038750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82038808 @ 82038808 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038808(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038918 @ 82038918 ==== */

void FUN_82038918(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820389b0 @ 820389b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820389b0(void)

{
  int iVar1;
  uint in_r7;
  
  iVar1 = FUN_8205b8a4();
  if ((in_r7 & 0xff000000) != 0) {
    FUN_8201d690();
    FUN_8201d690();
    FUN_8201d690();
    FUN_82035868(iVar1,*(undefined4 *)(iVar1 + 0x5c),*(int *)(iVar1 + 0x54));
    *(undefined4 *)(iVar1 + 0x54) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038a30 @ 82038a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038a30(void)

{
  int iVar1;
  uint in_r7;
  
  iVar1 = FUN_8205b8a4();
  if ((in_r7 & 0xff000000) != 0) {
    FUN_8201d690();
    FUN_8201d690();
    FUN_8201d690();
    FUN_820364f0(iVar1,*(undefined4 *)(iVar1 + 0x5c),*(int *)(iVar1 + 0x54));
    *(undefined4 *)(iVar1 + 0x54) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038aa0 @ 82038aa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038aa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038bb8 @ 82038bb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038bb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82038ca0 @ 82038ca0 ==== */

void FUN_82038ca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82038dc8 @ 82038dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82038dc8(void)

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
  
  uVar18 = FUN_8205b894();
  piVar3 = (int *)((ulonglong)uVar18 >> 0x20);
  piVar9 = (int *)uVar18;
  if (1 < piVar3[1]) {
    FUN_82037498(piVar3,piVar9,0);
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
                FUN_82032f78();
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
    FUN_82034b10();
    FUN_8201d3a0();
    iVar7 = 1;
    iVar10 = (piVar9[3] - iVar10) * 2 + piVar9[5];
    if (1 < piVar3[1]) {
      iVar14 = 0x18;
      do {
        iVar15 = piVar3[4];
        if (*(int *)(iVar14 + iVar15) != 0) {
          FUN_8205d810();
        }
        iVar15 = *(int *)(iVar14 + iVar15 + 0xc);
        if (iVar15 != 0) {
          FUN_8205d810();
          iVar10 = iVar15 * 2 + iVar10;
        }
        iVar7 = iVar7 + 1;
        iVar14 = iVar14 + 0x18;
      } while (iVar7 < piVar3[1]);
    }
    piVar9[0xe] = iVar10;
    if ((*piVar9 == 0) || (*(int *)(*piVar9 * 0x28 + piVar9[2] + -8) != 0)) {
      FUN_82035378();
    }
    iVar10 = *piVar9 * 0x28 + piVar9[2];
    pcVar16 = (char *)(iVar10 + -0x28);
    if (*(int *)(iVar10 + -0xc) == 0) {
      FUN_8205d810();
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
        FUN_82035378();
      }
    }
    piVar3[1] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039130 @ 82039130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039250 @ 82039250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039250(void)

{
  undefined2 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  ushort auStack_50 [40];
  
  iVar3 = FUN_8205b89c();
  piVar13 = (int *)(iVar3 + 0x20);
  uVar15 = 0;
  iVar6 = 0;
  if (*(int *)(iVar3 + 0x20) != 0) {
    iVar10 = 0;
    do {
      uVar11 = *(uint *)(iVar10 + *(int *)(iVar3 + 0x28)) & 0x3fffffff;
      if (uVar15 < uVar11) {
        uVar15 = uVar11;
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar6 != *piVar13);
  }
  FUN_82017810();
  puVar14 = (uint *)(iVar3 + 0x14);
  FUN_82017810();
  *(undefined1 *)(iVar3 + 0x40) = 0;
  *(undefined2 *)(iVar3 + 0x54) = 0;
  FUN_82037ce0();
  iVar6 = 0;
  if (0 < *piVar13) {
    iVar10 = 0;
    do {
      uVar1 = (undefined2)iVar6;
      puVar8 = (uint *)(*(int *)(iVar3 + 0x28) + iVar10);
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 0x28;
      uVar5 = *puVar8;
      uVar11 = uVar5 & 0x3fffffff;
      *(uint *)(uVar5 * 4 + *(int *)(iVar3 + 8)) = puVar8[1];
      iVar9 = ((int)uVar11 >> 0xf) + iVar3;
      *(undefined2 *)(uVar11 * 2 + *(int *)(iVar3 + 0x1c)) = uVar1;
      *(byte *)(iVar9 + 0x54) = (byte)(1 << ((int)uVar11 >> 0xc & 7U)) | *(byte *)(iVar9 + 0x54);
    } while (iVar6 < *piVar13);
  }
  if ((*puVar14 < 0x21) ||
     (uVar11 = (uint)*(ushort *)(*(int *)(iVar3 + 0x1c) + 0x40), uVar11 == 0xffff)) {
    iVar6 = *(int *)(iVar3 + 0x2c);
  }
  else {
    iVar6 = uVar11 * 0x28 + *(int *)(iVar3 + 0x28);
  }
  if (iVar6 != 0) {
    if ((*(uint *)(*piVar13 * 0x28 + *(int *)(iVar3 + 0x28) + -0x28) & 0x3fffffff) != 9) {
      FUN_82034fb8(piVar13,*piVar13 + 1);
    }
    iVar6 = *piVar13 * 0x28 + *(int *)(iVar3 + 0x28);
    puVar8 = (uint *)(iVar6 + -0x28);
    FUN_8205d810();
    fVar2 = *(float *)(iVar6 + -0x24) * DAT_82002004;
    *(float *)(iVar6 + -0x24) = fVar2;
    *puVar8 = *puVar8 & 0xc0000000 | 9;
    *(float *)(*(int *)(iVar3 + 8) + 0x24) = fVar2;
    *(short *)((*puVar8 & 0x3fffffff) * 2 + *(int *)(iVar3 + 0x1c)) = (short)*piVar13 + -1;
  }
  uVar4 = FUN_820347b0(iVar3,0x20,0);
  FUN_820347b0(uVar4,9);
  auStack_50[0] = 0x2026;
  auStack_50[1] = 0x85;
  auStack_50[3] = 0xff0e;
  auStack_50[2] = 0x2e;
  if (*(short *)(iVar3 + 0x3c) == -1) {
    iVar6 = 0;
    puVar7 = auStack_50;
    do {
      if ((((uint)*puVar7 < *puVar14) &&
          (uVar11 = (uint)*(ushort *)((uint)*puVar7 * 2 + *(int *)(iVar3 + 0x1c)), uVar11 != 0xffff)
          ) && (uVar11 * 0x28 + *(int *)(iVar3 + 0x28) != 0)) {
        uVar12 = auStack_50[iVar6];
        goto LAB_820394fc;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < 2);
    uVar12 = 0xffff;
LAB_820394fc:
    *(ushort *)(iVar3 + 0x3c) = uVar12;
  }
  if (*(short *)(iVar3 + 0x3e) == -1) {
    iVar6 = 0;
    puVar7 = auStack_50 + 2;
    do {
      if ((((uint)*puVar7 < *puVar14) &&
          (uVar11 = (uint)*(ushort *)((uint)*puVar7 * 2 + *(int *)(iVar3 + 0x1c)), uVar11 != 0xffff)
          ) && (uVar11 * 0x28 + *(int *)(iVar3 + 0x28) != 0)) {
        uVar12 = auStack_50[iVar6 + 2];
        goto LAB_8203955c;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < 2);
    uVar12 = 0xffff;
LAB_8203955c:
    *(ushort *)(iVar3 + 0x3e) = uVar12;
  }
  uVar11 = *puVar14;
  auStack_50[2] = 0xfffd;
  auStack_50[3] = 0x3f;
  auStack_50[4] = 0x20;
  if ((*(ushort *)(iVar3 + 0x3a) < uVar11) &&
     (uVar5 = (uint)*(ushort *)((uint)*(ushort *)(iVar3 + 0x3a) * 2 + *(int *)(iVar3 + 0x1c)),
     uVar5 != 0xffff)) {
    iVar6 = uVar5 * 0x28 + *(int *)(iVar3 + 0x28);
  }
  else {
    iVar6 = 0;
  }
  *(int *)(iVar3 + 0x2c) = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0;
    puVar7 = auStack_50 + 2;
    do {
      if (((*puVar7 < uVar11) &&
          (uVar5 = (uint)*(ushort *)((uint)*puVar7 * 2 + *(int *)(iVar3 + 0x1c)), uVar5 != 0xffff))
         && (uVar5 * 0x28 + *(int *)(iVar3 + 0x28) != 0)) {
        uVar5 = (uint)auStack_50[iVar6 + 2];
        goto LAB_82039628;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < 3);
    uVar5 = 0xffff;
LAB_82039628:
    *(short *)(iVar3 + 0x3a) = (short)uVar5;
    if ((uVar5 < uVar11) &&
       (uVar11 = (uint)*(ushort *)(uVar5 * 2 + *(int *)(iVar3 + 0x1c)), uVar11 != 0xffff)) {
      iVar6 = uVar11 * 0x28 + *(int *)(iVar3 + 0x28);
    }
    else {
      iVar6 = 0;
    }
    *(int *)(iVar3 + 0x2c) = iVar6;
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar3 + 0x28) + *piVar13 * 0x28;
      *(int *)(iVar3 + 0x2c) = iVar6 + -0x28;
      *(short *)(iVar3 + 0x3a) = (short)*(undefined4 *)(iVar6 + -0x28);
    }
  }
  iVar6 = 0;
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4);
  fVar2 = DAT_820016c4;
  if (uVar15 != 0xffffffff) {
    iVar10 = 0;
    do {
      if (*(float *)(*(int *)(iVar3 + 8) + iVar10) < fVar2) {
        *(undefined4 *)(*(int *)(iVar3 + 8) + iVar10) = *(undefined4 *)(iVar3 + 0xc);
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < (int)(uVar15 + 1));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820396f0 @ 820396f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820396f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820398b8 @ 820398b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820398b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039900 @ 82039900 ==== */

void FUN_82039900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82039a10 @ 82039a10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82039a10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82039b10 @ 82039b10 ==== */

void FUN_82039b10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82039d58 @ 82039d58 ==== */

void FUN_82039d58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82039db0 @ 82039db0 ==== */

void FUN_82039db0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8203ad70 @ 8203ad70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ad70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ade0 @ 8203ade0 ==== */

void FUN_8203ade0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8203aeb8 @ 8203aeb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203aeb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203af08 @ 8203af08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203af08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203af58 @ 8203af58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203af58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203afa8 @ 8203afa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203afa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b010 @ 8203b010 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203b010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b060 @ 8203b060 ==== */

void FUN_8203b060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203b0c8 @ 8203b0c8 ==== */

void FUN_8203b0c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8203b278 @ 8203b278 ==== */

void FUN_8203b278(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203b548 @ 8203b548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203b548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203b9a0 @ 8203b9a0 ==== */

void FUN_8203b9a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203be20 @ 8203be20 ==== */

void FUN_8203be20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_8203c2c0 @ 8203c2c0 ==== */

void FUN_8203c2c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8203c560 @ 8203c560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c5a0 @ 8203c5a0 ==== */

void FUN_8203c5a0(int param_1,undefined4 *param_2)

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


/* ==== FUN_8203c650 @ 8203c650 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c6e0 @ 8203c6e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c6e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c748 @ 8203c748 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203c7c0 @ 8203c7c0 ==== */

void FUN_8203c7c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8203c810 @ 8203c810 ==== */

void FUN_8203c810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8203c8b0 @ 8203c8b0 ==== */

double FUN_8203c8b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x170);
  if (iVar1 == 0) {
    return (double)DAT_820016c4;
  }
  if (param_1 < 0) {
    param_1 = *(int *)(iVar1 + 0xc);
  }
  return (double)(*(float *)(*(int *)(iVar1 + 100) + param_1 * 0x1c) *
                  (*(float *)(iVar1 + 0x18) - *(float *)(iVar1 + 0x14)) + *(float *)(iVar1 + 0x14));
}


/* ==== FUN_8203c900 @ 8203c900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203c900(double param_1,int param_2)

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
  
  fVar4 = DAT_820016c4;
  while( true ) {
    iVar5 = DAT_82072c98;
    iVar8 = *(int *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x170);
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
    dVar9 = (double)*(float *)(iVar5 + 0x15c8);
    if ((double)*(float *)(iVar5 + 0x15c8) < (double)fVar1) {
      dVar9 = (double)fVar1;
    }
    param_1 = (double)(float)(dVar9 + param_1);
    param_2 = param_2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ca30 @ 8203ca30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ca30(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_8205b8a4();
  iVar2 = DAT_82072c98;
  iVar6 = (int)uVar7;
  iVar5 = *(int *)(DAT_82072c98 + 0x2fb8);
  FUN_8201d4b8();
  *(int *)(iVar5 + *(int *)(iVar2 + 0x2fc0)) = iVar6 * 0xc + 0x14;
  iVar5 = iVar5 + *(int *)(iVar2 + 0x2fc0);
  puVar3 = (undefined4 *)(iVar5 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  uVar1 = DAT_820016c4;
  puVar4 = (undefined4 *)(iVar5 + 0x14);
  if (0 < iVar6) {
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar1;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0xff;
        *(undefined1 *)((int)puVar4 + 10) = 0xff;
        *(undefined1 *)((int)puVar4 + 9) = 0xff;
        *(byte *)((int)puVar4 + 0xb) = *(byte *)((int)puVar4 + 0xb) & 0xf | 0x20;
      }
      puVar4 = puVar4 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *puVar3 = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 *)(iVar5 + 0x12) = 1;
  *(char *)(iVar5 + 0x10) = (char)uVar7;
  *(char *)(iVar5 + 0x11) = (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203cb00 @ 8203cb00 ==== */

int * FUN_8203cb00(int param_1)

{
  int *piVar1;
  
  if (*(int *)(DAT_82072c98 + 0x2fc0) != 0) {
    piVar1 = (int *)(*(int *)(DAT_82072c98 + 0x2fc0) + 4);
    do {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = (int *)(piVar1[-1] + (int)piVar1);
    } while (piVar1 != (int *)(*(int *)(DAT_82072c98 + 0x2fc0) + *(int *)(DAT_82072c98 + 0x2fb8) + 4
                              ));
  }
  return (int *)0x0;
}


/* ==== FUN_8203cd38 @ 8203cd38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203cd38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 uStack0000001c;
  
  uVar11 = FUN_8205b870();
  fVar3 = DAT_820016c4;
  iVar4 = (int)((ulonglong)uVar11 >> 0x20);
  uStack0000001c = (undefined4)uVar11;
  if (*(int *)(iVar4 + 0x2fc0) != 0) {
    piVar9 = (int *)(*(int *)(iVar4 + 0x2fc0) + 4);
    do {
      if (piVar9 == (int *)0x0) {
        halt_baddata();
      }
      if (*piVar9 != 0) {
        uVar5 = piVar9[1];
        uVar2 = uVar5 & 1;
        uVar7 = uVar5 >> 2 & 1;
        uVar6 = uVar5 >> 1 & 1;
        uVar5 = uVar5 >> 3 & 1;
        if ((((uVar2 != 0) || (uVar7 != 0)) || (uVar6 != 0)) || (uVar5 != 0)) {
          FUN_82017950();
          FUN_82021530();
          if ((float)piVar9[2] != fVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          piVar10 = piVar9 + 4;
          iVar8 = 0;
          if ('\0' < *(char *)(piVar9 + 3)) {
            do {
              if ((((piVar10[1] == 0) && (uVar2 == 0)) && ((uVar7 == 0 && (uVar6 == 0)))) &&
                 ((uVar5 == 0 || (*(char *)((int)piVar10 + 10) == -1)))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                FUN_82021530();
                if (piVar10[1] != 0) {
                  FUN_82021530();
                }
                if (uVar2 != 0) {
                  if ((*(byte *)((int)piVar10 + 0xb) & 0x10) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if ((*(byte *)((int)piVar10 + 0xb) & 0x10) == 0) {
                    FUN_82021530();
                  }
                }
                if (uVar7 != 0) {
                  FUN_82021530();
                }
                if (uVar6 != 0) {
                  FUN_82021530();
                }
                if ((uVar5 != 0) && (*(char *)((int)piVar10 + 10) != -1)) {
                  FUN_82021530();
                }
                FUN_8201e098(param_3,&DAT_82002200,0);
              }
              iVar8 = iVar8 + 1;
              piVar10 = piVar10 + 3;
            } while (iVar8 < *(char *)(piVar9 + 3));
          }
          FUN_8201e098(param_3,&DAT_82002200,0);
        }
      }
      piVar9 = (int *)(piVar9[-1] + (int)piVar9);
    } while (piVar9 != (int *)(*(int *)(iVar4 + 0x2fb8) + *(int *)(iVar4 + 0x2fc0) + 4));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d040 @ 8203d040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d0f0 @ 8203d0f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d0f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_8205b8a4();
  iVar2 = DAT_82072c98;
  iVar3 = 0;
  piVar5 = (int *)(DAT_82072c98 + 0x2fb8);
  if ((*(int *)(DAT_82072c98 + 0x2fc0) != 0) &&
     (piVar4 = (int *)(*(int *)(DAT_82072c98 + 0x2fc0) + 4), piVar4 != (int *)0x0)) {
    do {
      if (*piVar4 != 0) {
        iVar3 = *(char *)(piVar4 + 3) * 0xc + iVar3 + 0x10;
      }
      piVar4 = (int *)(piVar4[-1] + (int)piVar4);
    } while ((piVar4 != (int *)(*(int *)(DAT_82072c98 + 0x2fc0) + *piVar5 + 4)) &&
            (piVar4 != (int *)0x0));
  }
  if (iVar3 != *piVar5) {
    FUN_82017950();
    if (*(int *)(iVar2 + 0x2fc0) != 0) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x2fc0) + 4);
      do {
        if (piVar4 == (int *)0x0) break;
        if (*piVar4 != 0) {
          cVar1 = *(char *)(piVar4 + 3);
          FUN_8201d4b8();
          iRam00000000 = cVar1 * 0xc + 0x14;
          FUN_8205d810();
        }
        piVar4 = (int *)(piVar4[-1] + (int)piVar4);
      } while (piVar4 != (int *)(*(int *)(iVar2 + 0x2fc0) + *piVar5 + 4));
    }
    iVar3 = *(int *)(iVar2 + 0x2fc0);
    *(undefined4 *)(iVar2 + 0x2fc0) = 0;
    *piVar5 = 0;
    *(undefined4 *)(iVar2 + 0x2fbc) = 0;
    if (iVar3 != 0) {
      FUN_82015ae8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203d250 @ 8203d250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d250(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_8205b884();
  FUN_8205b958();
  iVar3 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar4 = *(int *)(iVar3 + 0x1bd8);
  iVar3 = *(int *)(iVar4 + 0x170);
  FUN_8201b2a8();
  if (1 < *(int *)(iVar3 + 0x10)) {
    FUN_82019f98();
    FUN_82038dc8();
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
    FUN_8203c8b0(1);
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


/* ==== FUN_8203d5f8 @ 8203d5f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203d5f8(undefined4 param_1,undefined4 param_2,byte *param_3,undefined1 *param_4,
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
  
  FUN_8205b888();
  iVar4 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar7 = *(int *)(iVar4 + 0x1bd8);
  if ((param_5 & 7) == 0) {
    param_5 = param_5 | 1;
  }
  if ((param_5 & 0x3f0) == 0) {
    param_5 = param_5 | 0x20;
  }
  iVar8 = *(int *)(iVar4 + 0x1bdc);
  if ((((param_5 & 0x800) == 0) || (iVar8 == 0)) || (bVar1 = true, *(int *)(iVar8 + 0x2e0) != iVar7)
     ) {
    bVar1 = false;
  }
  if (bVar1) {
    *(int *)(iVar4 + 0x1bdc) = iVar7;
  }
  bVar3 = false;
  bVar6 = FUN_8201e4e0();
  if (((bVar6 != 0) && (*(char *)(iVar4 + 0x1ef4) != '\0')) &&
     (*(int *)(iVar4 + 0x1f0c) == extraout_r4)) {
    bVar6 = -((*(uint *)(iVar4 + 0x1ef8) & 2) != 0) & bVar6;
  }
  if (((*(char *)(iVar4 + 0x1ef4) != '\0') && ((param_5 & 0x200) != 0)) &&
     (((*(uint *)(iVar4 + 0x1ef8) & 4) == 0 && (uVar5 = FUN_82019288(0x80), (uVar5 & 0xff) != 0))))
  {
    bVar6 = 1;
    FUN_82015998(extraout_r4);
    if ((*(float *)(iVar4 + 0x1c08) - *(float *)(iVar4 + 0x18) <= (float)s__333__820068f0._0_4_) &&
       ((float)s__333__820068f0._0_4_ <= *(float *)(iVar4 + 0x1c08))) {
      *(int *)(iVar4 + 0x1f64) = extraout_r4;
      bVar3 = true;
      FUN_82023fe0();
    }
  }
  if (bVar1) {
    *(int *)(iVar4 + 0x1bdc) = iVar8;
  }
  if (((bVar6 != 0) && ((param_5 & 0x1000) != 0)) && (*(int *)(iVar4 + 0x1c00) != extraout_r4)) {
    bVar6 = -(*(int *)(iVar4 + 0x1c00) == 0) & bVar6;
  }
  dVar13 = (double)DAT_820016c4;
  if (bVar6 != 0) {
    if (((param_5 & 0x10000) == 0) ||
       (((*(char *)(iVar4 + 0xfc) == '\0' && (*(char *)(iVar4 + 0xfd) == '\0')) &&
        (*(char *)(iVar4 + 0xfe) == '\0')))) {
      iVar9 = -1;
      iVar8 = -1;
      if (((param_5 & 1) == 0) || (*(char *)(iVar4 + 0x3f0) == '\0')) {
        if (((param_5 & 2) == 0) || (*(char *)(iVar4 + 0x3f1) == '\0')) {
          if (((param_5 & 4) != 0) && (*(char *)(iVar4 + 0x3f2) != '\0')) {
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
      if (((param_5 & 1) == 0) || (*(char *)(iVar4 + 0x40e) == '\0')) {
        if (((param_5 & 2) == 0) || (*(char *)(iVar4 + 0x40f) == '\0')) {
          if (((param_5 & 4) != 0) && (*(char *)(iVar4 + 0x410) != '\0')) {
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
      if ((iVar9 != -1) && (*(int *)(iVar4 + 0x1c10) != extraout_r4)) {
        if ((param_5 & 0x60) != 0) {
          FUN_820158d0(extraout_r4,iVar7);
          *(int *)(iVar4 + 0x1c48) = iVar9;
          if ((param_5 & 0x40000) == 0) {
            FUN_82016d88(extraout_r4,iVar7);
          }
          FUN_82023fe0();
        }
        if (((param_5 & 0x10) != 0) ||
           (((param_5 & 0x100) != 0 && (*(short *)((iVar9 + 0x1fd) * 2 + iVar4) == 2)))) {
          bVar3 = true;
          if ((param_5 & 0x20000) == 0) {
            FUN_820158d0(extraout_r4,iVar7);
          }
          else {
            FUN_82015988();
          }
          if ((param_5 & 0x40000) == 0) {
            FUN_82016d88(extraout_r4,iVar7);
          }
          *(int *)(iVar4 + 0x1c48) = iVar9;
          FUN_82023fe0();
        }
      }
      if (((param_5 & 0x80) != 0) && (iVar8 != -1)) {
        if (((param_5 & 0x400) == 0) ||
           (bVar1 = true, *(float *)((iVar8 + 0x10d) * 4 + iVar4) < *(float *)(iVar4 + 0x8c))) {
          bVar1 = false;
        }
        if (!bVar1) {
          bVar3 = true;
        }
        if ((param_5 & 0x40000) == 0) {
          FUN_82016d88(extraout_r4,iVar7);
        }
        FUN_82015988();
      }
      if ((((*(int *)(iVar4 + 0x1c10) == extraout_r4) && ((param_5 & 0x400) != 0)) &&
          (dVar13 < (double)*(float *)((*(int *)(iVar4 + 0x1c48) + 0x108) * 4 + iVar4))) &&
         (uVar5 = FUN_82015f18(*(int *)(iVar4 + 0x1c48),'\x01'), (uVar5 & 0xff) != 0)) {
        bVar3 = true;
      }
    }
    if (bVar3) {
      *(undefined1 *)(iVar4 + 0x1dc2) = 1;
    }
  }
  if (((((*(int *)(iVar4 + 0x1d88) == extraout_r4) && (*(char *)(iVar4 + 0x1dc2) == '\0')) &&
       (*(char *)(iVar4 + 0x1dc3) != '\0')) &&
      (((iVar8 = *(int *)(iVar4 + 0x1c10), iVar8 == 0 || (iVar8 == extraout_r4)) ||
       (iVar8 == *(int *)(iVar7 + 0x50))))) && ((param_5 & 0x80000) == 0)) {
    bVar6 = 1;
  }
  if (*(int *)(iVar4 + 0x1d94) == extraout_r4) {
    iVar8 = *(int *)(iVar4 + 0x1d90);
    dVar12 = FUN_82017050(0,param_5 >> 9 & 2 | 1);
    if ((extraout_r4 == iVar8) || (dVar13 < dVar12)) {
      bVar3 = true;
      FUN_820158d0(extraout_r4,iVar7);
      *(undefined4 *)(iVar4 + 0x1c44) = 4;
      if ((param_5 & 0x40000) == 0) {
        FUN_82016d88(extraout_r4,iVar7);
      }
    }
  }
  uVar11 = 0;
  uVar10 = 0;
  if (*(int *)(iVar4 + 0x1c10) == extraout_r4) {
    if (*(int *)(iVar4 + 0x1c44) == 1) {
      if (*(char *)(iVar4 + 0x1c1c) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar7 = *(int *)(iVar4 + 0x1c48);
      if (*(char *)(iVar7 + iVar4 + 0xec) == '\0') {
        if ((bVar6 == 0) || (bVar1 = true, (param_5 & 0x20) == 0)) {
          bVar1 = false;
        }
        if (((bVar1) || ((param_5 >> 6 & 1) != 0)) && (*(char *)(iVar4 + 0x1ef4) == '\0')) {
          if ((((param_5 & 0x100) == 0) || (*(char *)(iVar7 + iVar4 + 0x40e) == '\0')) ||
             (bVar1 = true, *(short *)((iVar7 + 0x202) * 2 + iVar4) != 2)) {
            bVar1 = false;
          }
          if (((param_5 & 0x400) == 0) ||
             (bVar2 = true, *(float *)((iVar7 + 0x10d) * 4 + iVar4) < *(float *)(iVar4 + 0x8c))) {
            bVar2 = false;
          }
          if ((!bVar1) && (!bVar2)) {
            bVar3 = true;
          }
        }
        FUN_82015988();
      }
      else {
        uVar11 = 1;
      }
      uVar10 = uVar11;
      if ((param_5 & 0x40000) == 0) {
        *(undefined1 *)(iVar4 + 0x1dc2) = 1;
      }
    }
    else {
      uVar10 = uVar11;
      if ((*(int *)(iVar4 + 0x1c44) == 4) && (*(int *)(iVar4 + 0x1d94) != extraout_r4)) {
        FUN_82015988();
      }
    }
    if (bVar3) {
      *(undefined1 *)(iVar4 + 0x1c1f) = 1;
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


/* ==== FUN_8203dbe0 @ 8203dbe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203dbe0(void)

{
  int iVar1;
  
  FUN_8205b89c();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82021868();
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_8203de38 @ 8203de38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203de38(void)

{
  int iVar1;
  
  FUN_8205b89c();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82021868();
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_8203de40 @ 8203de40 ==== */

void FUN_8203de40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203df28 @ 8203df28 ==== */

void FUN_8203df28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8203e100 @ 8203e100 ==== */

void FUN_8203e100(void)

{
  int iVar1;
  float local_10;
  float local_c;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) == '\0') {
    local_10 = DAT_820016c4;
    local_c = DAT_820016c4;
    FUN_8201b070(&local_10);
  }
  return;
}


/* ==== FUN_8203e160 @ 8203e160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203e160(void)

{
  int iVar1;
  
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


/* ==== FUN_8203e1f0 @ 8203e1f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203e1f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203e290 @ 8203e290 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8203e290(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 != 4) && (param_3 != 5)) {
    if ((param_3 == 6) || (param_3 == 7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 == 8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 == 9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) && (param_3 != 3)) {
      return 0;
    }
  }
  uVar1 = FUN_82014af8();
  return uVar1;
}


/* ==== FUN_8203e370 @ 8203e370 ==== */

/* WARNING: Control flow encountered bad instruction data */

double FUN_8203e370(int param_1)

{
  float fVar1;
  
  fVar1 = DAT_820068ac;
  if (-1 < param_1) {
    if (9 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    fVar1 = *(float *)(&DAT_82006a60 + param_1 * 4);
  }
  return (double)fVar1;
}


/* ==== FUN_8203e3e8 @ 8203e3e8 ==== */

/* WARNING: Removing unreachable block (ram,0x8203e3f8) */

char * FUN_8203e3e8(char *param_1)

{
  int iVar1;
  
  if (*param_1 != '%') {
    return param_1;
  }
  iVar1 = 0x25;
  while ((((iVar1 < 0x41 || (0x5a < iVar1)) || ((1 << (iVar1 - 0x41U & 0x3f) & 0x900U) != 0)) &&
         (((iVar1 < 0x61 || (0x7a < iVar1)) || ((1 << (iVar1 - 0x61U & 0x3f) & 0x2480a80U) != 0)))))
  {
    param_1 = param_1 + 1;
    iVar1 = (int)*param_1;
    if (iVar1 == 0) {
      return param_1;
    }
  }
  return param_1 + 1;
}


/* ==== FUN_8203e468 @ 8203e468 ==== */

undefined4 FUN_8203e468(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0x20) || (param_1 == 9)) || (bVar1 = false, param_1 == 0x3000)) {
    bVar1 = true;
  }
  if ((((bVar1) || (param_1 == 0x2c)) ||
      ((param_1 == 0x3b || ((param_1 == 0x28 || (param_1 == 0x29)))))) ||
     ((param_1 == 0x7b ||
      (((((param_1 == 0x7d || (param_1 == 0x5b)) || (param_1 == 0x5d)) ||
        ((param_1 == 0x7c || (param_1 == 10)))) || (uVar2 = 0, param_1 == 0xd)))))) {
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== FUN_8203e4f8 @ 8203e4f8 ==== */

void FUN_8203e4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203e598 @ 8203e598 ==== */

void FUN_8203e598(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2[1] != param_2[2]) {
    if (iVar1 < param_2[1]) {
      param_2[1] = iVar1;
    }
    if (iVar1 < param_2[2]) {
      param_2[2] = iVar1;
    }
    if (param_2[1] == param_2[2]) {
      *param_2 = param_2[1];
    }
  }
  if (*param_2 <= iVar1) {
    return;
  }
  *param_2 = iVar1;
  return;
}


/* ==== FUN_8203e5f0 @ 8203e5f0 ==== */

void FUN_8203e5f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8203e6a8 @ 8203e6a8 ==== */

void FUN_8203e6a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203e788 @ 8203e788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203e788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203e9e8 @ 8203e9e8 ==== */

void FUN_8203e9e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203ea98 @ 8203ea98 ==== */

void FUN_8203ea98(int param_1,char param_2)

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


/* ==== FUN_8203eb38 @ 8203eb38 ==== */

void FUN_8203eb38(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '-') {
    param_1 = param_1 + 1;
  }
  if (*param_1 == '+') {
    param_1 = param_1 + 1;
  }
  iVar3 = 0;
  cVar2 = *param_1;
  while ((iVar4 = (int)cVar2, 0x2f < iVar4 && (iVar4 < 0x3a))) {
    param_1 = param_1 + 1;
    iVar3 = iVar3 * 10 + iVar4 + -0x30;
    cVar2 = *param_1;
  }
  if (cVar1 == '-') {
    iVar3 = -iVar3;
  }
  *param_2 = iVar3;
  return;
}


/* ==== FUN_8203eba8 @ 8203eba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203eba8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203ee90 @ 8203ee90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203ee90(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  undefined8 uVar6;
  
  FUN_8205b89c();
  uVar6 = FUN_8205b950();
  iVar2 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar2 = *(int *)(iVar2 + 0x1bd8);
  if (*(char *)(iVar2 + 0x8f) != '\0') {
    FUN_8205b99c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)((ulonglong)uVar6 >> 0x20) == (int)uVar6) {
    uVar6 = 0x8200201582002015;
  }
  pcVar4 = (char *)((ulonglong)uVar6 >> 0x20);
  pcVar3 = (char *)uVar6;
  pcVar1 = pcVar4;
  if (pcVar3 == (char *)0x0) {
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  dVar5 = (double)*(float *)(iVar2 + 0x184);
  if ((2000 < (int)pcVar3 - (int)pcVar4) && (dVar5 < (double)DAT_820016c4)) {
    FUN_82016af0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (dVar5 >= (double)DAT_820016c4) {
    FUN_820193f8(dVar5,(float *)(iVar2 + 0xd0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_8203f290 @ 8203f290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f290(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f310 @ 8203f310 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f310(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f3a8 @ 8203f3a8 ==== */

void FUN_8203f3a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8203f680 @ 8203f680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203f748 @ 8203f748 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8203f748(void)

{
  FUN_8205b880();
  FUN_8205b93c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8203fca0 @ 8203fca0 ==== */

void FUN_8203fca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82040018 @ 82040018 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040018(void)

{
  int iVar1;
  
  FUN_8205b89c();
  FUN_8205b950();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b99c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82021868();
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_820403b0 @ 820403b0 ==== */

void FUN_820403b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82040638 @ 82040638 ==== */

void FUN_82040638(void)

{
  if (*(char *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8f) != '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82040670 @ 82040670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82040670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040778 @ 82040778 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82040a24) */
/* WARNING: Removing unreachable block (ram,0x82040940) */
/* WARNING: Removing unreachable block (ram,0x82040ad4) */

void FUN_82040778(undefined4 param_1,undefined4 param_2,int param_3,double *param_4)

{
  float fVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char cVar7;
  float fVar5;
  char *pcVar6;
  char cVar8;
  double dVar9;
  double dVar10;
  longlong lStack_68;
  char acStack_58 [16];
  
  pcVar3 = (char *)FUN_8205b89c();
  while( true ) {
    cVar8 = *pcVar3;
    if ((cVar8 == ' ') || (bVar2 = false, cVar8 == '\t')) {
      bVar2 = true;
    }
    if (!bVar2) break;
    pcVar3 = pcVar3 + 1;
  }
  if (((cVar8 == '+') || (cVar8 == '*')) || (cVar8 == '/')) {
    do {
      pcVar3 = pcVar3 + 1;
      cVar7 = *pcVar3;
      if ((cVar7 == ' ') || (bVar2 = false, cVar7 == '\t')) {
        bVar2 = true;
      }
    } while (bVar2);
  }
  else {
    cVar7 = cVar8;
    cVar8 = '\0';
  }
  if (cVar7 == '\0') {
    halt_baddata();
  }
  FUN_8205d810();
  dVar10 = DAT_82001738;
  fVar5 = DAT_820016c4;
  if (param_3 != 4) {
    if (param_3 == 8) {
      fVar1 = *(float *)param_4;
      if ((cVar8 != '\0') && (iVar4 = FUN_8205d7b0(), iVar4 < 1)) {
        halt_baddata();
      }
      iVar4 = FUN_8205d7b0();
      if (iVar4 < 1) {
        halt_baddata();
      }
      if (cVar8 == '+') {
        fVar5 = fVar5 + fVar1;
      }
      else if (cVar8 == '*') {
        fVar5 = fVar5 * fVar1;
      }
      else if (cVar8 == '/') goto LAB_82040bec;
      *(float *)param_4 = fVar5;
    }
    else if (param_3 == 9) {
      dVar9 = *param_4;
      if ((cVar8 != '\0') && (iVar4 = FUN_8205d7b0(), iVar4 < 1)) {
        halt_baddata();
      }
      iVar4 = FUN_8205d7b0();
      if (iVar4 < 1) {
        halt_baddata();
      }
      if (cVar8 == '+') {
        dVar10 = dVar10 + dVar9;
      }
      else if (cVar8 == '*') {
        dVar10 = dVar10 * dVar9;
      }
      else if (cVar8 == '/') goto LAB_82040bec;
      *param_4 = dVar10;
    }
    else if (((param_3 == 5) || (param_3 == 6)) || (param_3 == 7)) {
      iVar4 = FUN_8205d7b0();
      if (iVar4 < 1) {
        halt_baddata();
      }
    }
    else {
      iVar4 = FUN_8205d7b0();
      if (iVar4 < 1) {
        halt_baddata();
      }
      if (param_3 == 0) {
        if (lStack_68._0_4_ < -0x80) {
          lStack_68._0_4_ = -0x80;
        }
        else if (0x7f < lStack_68._0_4_) {
          lStack_68._0_4_ = 0x7f;
        }
      }
      else {
        if (param_3 != 1) {
          if (param_3 == 2) {
            if (lStack_68._0_4_ < -0x8000) {
              iVar4 = -0x8000;
            }
            else {
              iVar4 = lStack_68._0_4_;
              if (0x7fff < lStack_68._0_4_) {
                iVar4 = 0x7fff;
              }
            }
          }
          else {
            if (param_3 != 3) goto LAB_82040bec;
            if (lStack_68 < 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = 0xffff;
              if (lStack_68._0_4_ < 0x10000) {
                iVar4 = lStack_68._0_4_;
              }
            }
          }
          *(short *)param_4 = (short)iVar4;
          goto LAB_82040bec;
        }
        if (lStack_68 < 0) {
          lStack_68._0_4_ = 0;
        }
        else if (0xff < lStack_68._0_4_) {
          lStack_68._0_4_ = 0xff;
        }
      }
      *(char *)param_4 = (char)lStack_68._0_4_;
    }
    goto LAB_82040bec;
  }
  fVar5 = *(float *)param_4;
  if ((cVar8 != '\0') && (iVar4 = FUN_8205d7b0(), iVar4 < 1)) {
    halt_baddata();
  }
  if (cVar8 == '+') {
    iVar4 = FUN_8205d7b0();
    if (iVar4 == 0) goto LAB_82040bec;
  }
  else {
    if (cVar8 == '*') {
      iVar4 = FUN_8205d7b0();
      if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_82040bec;
    }
    if (cVar8 == '/') {
      FUN_8205d7b0();
      goto LAB_82040bec;
    }
    iVar4 = FUN_8205d7b0();
    if (iVar4 != 1) goto LAB_82040bec;
    fVar5 = 0.0;
  }
  *(float *)param_4 = fVar5;
LAB_82040bec:
  pcVar3 = acStack_58;
  if (*(int *)(&UNK_820068f8 + param_3 * 0x10) != 0) {
    pcVar6 = pcVar3 + *(int *)(&UNK_820068f8 + param_3 * 0x10);
    do {
      if (*pcVar3 != *(char *)param_4) {
        halt_baddata();
      }
      pcVar3 = pcVar3 + 1;
      param_4 = (double *)((int)param_4 + 1);
    } while (pcVar3 != pcVar6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040c40 @ 82040c40 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_82040c40(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint in_r10;
  uint in_r11;
  uint *unaff_r31;
  byte in_cr0;
  
  bVar1 = param_1 < 9;
  bVar4 = param_1 == 9;
  bVar2 = false;
  bVar3 = false;
  switch(param_1) {
  case 0:
    if (((in_r11 != 0x2b) && (in_r11 != 0x2a)) && (in_r11 != 0x2f)) {
      halt_baddata();
    }
    if ((((param_2 & 0x20000) != 0) && ((in_r11 < 0x30 || (0x39 < in_r11)))) && (in_r11 != in_r10))
    goto code_r0x8203e8a8;
    break;
  case 1:
code_r0x8203e8a8:
    if (((in_r11 != 0x2d) && (in_r11 != 0x2b)) && (in_r11 != 0x2a)) goto code_r0x8203e8c0;
    break;
  case 2:
code_r0x8203e8c0:
    if (in_r11 != 0x2f) {
      bVar4 = in_r11 == 0x65;
      goto code_r0x8203e8cc;
    }
    break;
  case 3:
code_r0x8203e8cc:
    if ((!bVar4) && (in_r11 != 0x45)) {
      halt_baddata();
    }
    break;
  case 4:
    goto code_r0x8203e8e0;
  case 5:
    goto code_r0x8203e8ec;
  case 6:
    goto code_r0x8203e8f8;
  case 7:
    goto code_r0x8203e90c;
  case 8:
    goto code_r0x8203e91c;
  case 9:
    goto code_r0x8203e934;
  default:
    return 0;
  }
  if ((param_2 & 2) != 0) {
code_r0x8203e8e0:
    if (0x2f < in_r11) {
      bVar2 = 0x39 < in_r11;
code_r0x8203e8ec:
      if (!bVar2) goto LAB_8203e910;
    }
    if (0x60 < in_r11) {
code_r0x8203e8f8:
      if (in_r11 < 0x67) goto LAB_8203e910;
    }
    if (in_r11 < 0x41) {
      halt_baddata();
    }
    bVar3 = 0x46 < in_r11;
code_r0x8203e90c:
    if (bVar3) {
      halt_baddata();
    }
  }
LAB_8203e910:
  if ((param_2 & 4) != 0) {
    bVar1 = in_r11 < 0x61;
code_r0x8203e91c:
    if ((!bVar1) && (in_r11 < 0x7b)) {
      in_r11 = in_r11 - 0x20;
      *unaff_r31 = in_r11;
    }
  }
  in_cr0 = ((param_2 & 8) == 0) << 1;
code_r0x8203e934:
  if (!(bool)(in_cr0 >> 1 & 1)) {
    if (((in_r11 == 0x20) || (in_r11 == 9)) || (bVar1 = false, in_r11 == 0x3000)) {
      bVar1 = true;
    }
    if (bVar1) {
      halt_baddata();
    }
  }
  if ((param_2 & 0x200) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040d58 @ 82040d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

float * FUN_82040d58(float *param_1,float *param_2,float *param_3,float *param_4,int param_5,
                    uint param_6,uint param_7,float param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  float in_r11;
  float *unaff_r28;
  float *unaff_r29;
  float *unaff_r30;
  int unaff_r31;
  double in_f0;
  double in_f12;
  double in_f13;
  double unaff_f31;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  char cVar4;
  
  switch(param_1) {
  case (float *)0x0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x2:
    fStack00000050 = (float)in_f0;
    fStack00000054 = (float)in_f13;
    fStack0000005c = *(float *)((int)in_r11 + 0x16c4);
    unaff_f31 = (double)fStack0000005c;
    unaff_r31 = *(int *)((int)param_8 + 0x2c98);
    fStack00000058 = (float)in_f12;
    uVar2 = FUN_82014fa8(param_1);
    if (*(uint *)(unaff_r31 + 0x2f00) != uVar2) {
      halt_baddata();
    }
    if ((double)*param_3 != unaff_f31) {
      in_f0 = (double)*param_2;
      unaff_r28 = param_4;
      unaff_r29 = param_3;
      unaff_r30 = param_2;
      goto code_r0x8203ea54;
    }
LAB_8203ea70:
    *param_2 = *(float *)(unaff_r31 + 0x2ef8);
    break;
  case (float *)0x3:
code_r0x8203ea54:
    param_2 = unaff_r30;
    param_3 = unaff_r29;
    param_4 = unaff_r28;
    if ((in_f0 == unaff_f31) && (*(float *)(unaff_r31 + 0x2ef8) == DAT_820016c0)) goto LAB_8203ea70;
    break;
  case (float *)0x4:
    goto LAB_8203ea8c;
  case (float *)0x5:
    do {
      in_r11 = (float)(param_7 + ((uint)in_r11 & 0xffff) & 0xffff);
      do {
        param_8 = (float)((uint)param_8 & 0xffff);
        param_7 = param_6 & 0xff | (uint)(param_8 != 0.0);
        iVar3 = param_5;
        if (param_4 != (float *)0x0) {
          if (param_5 == 1) {
code_r0x8203eaf8:
            *(short *)(param_1 + 3) = SUB42(in_r11,0);
          }
          if (param_5 == 2) {
            *(short *)((int)param_1 + 0xe) = SUB42(in_r11,0);
          }
          iVar3 = param_5;
          if (param_5 == 3) {
            *(short *)(param_1 + 4) = SUB42(in_r11,0);
          }
        }
        param_5 = iVar3 + 1;
        in_r11 = (float)(((uint)in_r11 & 0xffff) + (int)param_8 & 0xffff);
        if (3 < param_5) {
          param_1[1] = in_r11;
          return param_1;
        }
        param_6 = param_7 & 0xff;
        uVar1 = *(ushort *)((iVar3 + 10) * 2 + (int)param_1);
        param_8 = (float)(uint)uVar1;
      } while ((param_6 == 0) || (uVar1 == 0));
      param_7 = (uint)*(ushort *)(param_1 + 2);
    } while( true );
  case (float *)0x6:
    goto code_r0x8203eaf8;
  case (float *)0x7:
    return param_1;
  case (float *)0x8:
    param_8 = 0.0;
    cVar4 = SUB41(in_r11,0);
    while ((iVar3 = (int)cVar4, 0x2f < iVar3 && (iVar3 < 0x3a))) {
      param_1 = (float *)((int)param_1 + 1);
      param_8 = (float)((int)param_8 * 10 + iVar3 + -0x30);
      cVar4 = *(char *)param_1;
    }
    if (param_7 != 0) {
      param_8 = (float)-(int)param_8;
    }
  case (float *)0x9:
    *param_2 = param_8;
    return param_1;
  default:
    return (float *)0x0;
  }
  if ((double)*param_4 == unaff_f31) {
    *param_3 = *(float *)(unaff_r31 + 0x2efc);
  }
LAB_8203ea8c:
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82040fe0 @ 82040fe0 ==== */

void FUN_82040fe0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *extraout_r4;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = FUN_8203e3e8(param_1);
  pcVar3 = extraout_r4;
  if (param_1 < pcVar2) {
    iVar4 = (int)pcVar2 - (int)param_1;
    pcVar2 = param_1 + -1;
    do {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      if (((cVar1 != '\'') && (cVar1 != '$')) && (cVar1 != '_')) {
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *pcVar3 = '\0';
  return;
}


/* ==== FUN_82041050 @ 82041050 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041050(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820410f8 @ 820410f8 ==== */

int FUN_820410f8(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  int local_10 [4];
  
  cVar4 = *param_1;
  while ((cVar4 != '\0' &&
         ((pcVar1 = param_1, cVar4 != '%' || (pcVar1 = param_1 + 1, param_1[1] == '%'))))) {
    param_1 = pcVar1 + 1;
    cVar4 = *param_1;
  }
  iVar3 = param_2;
  if (*param_1 == '%') {
    pcVar1 = param_1 + 1;
    cVar4 = param_1[1];
    while (('/' < cVar4 && (cVar4 < ':'))) {
      pcVar1 = pcVar1 + 1;
      cVar4 = *pcVar1;
    }
    iVar2 = 0x7fffffff;
    local_10[0] = 0x7fffffff;
    iVar3 = iVar2;
    if ((cVar4 == '.') &&
       ((pcVar1 = (char *)FUN_8203eb38(pcVar1 + 1,local_10), local_10[0] < 0 ||
        (iVar3 = local_10[0], 99 < local_10[0])))) {
      iVar3 = param_2;
    }
    cVar4 = *pcVar1;
    if ((cVar4 == 'e') || (cVar4 == 'E')) {
      iVar3 = -1;
    }
    if ((cVar4 == 'g') || (cVar4 == 'G')) {
      if (iVar3 != iVar2) {
        return iVar3;
      }
      iVar3 = -1;
    }
    if (iVar3 == iVar2) {
      iVar3 = param_2;
    }
  }
  return iVar3;
}


/* ==== FUN_82041210 @ 82041210 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041210(float *param_1,ushort *param_2,ushort *param_3,undefined4 *param_4,int param_5,
                 char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = DAT_82072c98;
  fVar6 = DAT_820016c4;
  *param_1 = DAT_820016c4;
  param_1[1] = fVar6;
  piVar8 = *(int **)(iVar7 + 0x1970);
  fVar1 = *(float *)(iVar7 + 0x1974);
  fVar2 = (float)piVar8[4];
  fVar5 = fVar6;
  if (param_2 < param_3) {
    do {
      uVar4 = *param_2;
      param_2 = param_2 + 1;
      if (uVar4 == 10) {
        if (fVar5 <= *param_1) {
          fVar5 = *param_1;
        }
        *param_1 = fVar5;
        param_1[1] = fVar1 + param_1[1];
        fVar5 = fVar6;
        if (param_6 != '\0') break;
      }
      else if (uVar4 != 0xd) {
        if ((int)(uint)uVar4 < *piVar8) {
          fVar3 = *(float *)((uint)uVar4 * 4 + piVar8[2]);
        }
        else {
          fVar3 = (float)piVar8[3];
        }
        fVar5 = fVar3 * (fVar1 / fVar2) + fVar5;
      }
    } while (param_2 < param_3);
    if (*param_1 < fVar5) {
      *param_1 = fVar5;
    }
  }
  if (param_5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((fVar6 < fVar5) || (param_1[1] == fVar6)) {
    param_1[1] = fVar1 + param_1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_2;
    return;
  }
  return;
}


/* ==== FUN_82041320 @ 82041320 ==== */

double FUN_82041320(int param_1,int param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = (uint)*(ushort *)((param_2 + param_3) * 2 + *(int *)(param_1 + 0x14));
  if (uVar2 == 10) {
    return (double)DAT_82001768;
  }
  piVar3 = *(int **)(DAT_82072c98 + 0x1970);
  if ((int)uVar2 < *piVar3) {
    fVar1 = *(float *)(uVar2 * 4 + piVar3[2]);
  }
  else {
    fVar1 = (float)piVar3[3];
  }
  return (double)((*(float *)(DAT_82072c98 + 0x1974) / (float)piVar3[4]) * fVar1);
}


/* ==== FUN_82041388 @ 82041388 ==== */

void FUN_82041388(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82041410 @ 82041410 ==== */

int FUN_82041410(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  param_2 = param_2 + 1;
  bVar1 = iVar4 < param_2;
  if (param_2 < iVar4) {
    iVar6 = param_2 * 2;
    uVar3 = *(uint *)(param_1 + 0xe70) & 0x8000;
    do {
      if (uVar3 == 0) {
        if (param_2 < 1) break;
        puVar5 = (undefined2 *)(*(int *)(param_1 + 0x14) + iVar6);
        cVar2 = FUN_8203e468(puVar5[-1]);
        if (cVar2 != '\0') {
          cVar2 = FUN_8203e468(*puVar5);
          if (cVar2 == '\0') break;
        }
      }
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 2;
    } while (param_2 < iVar4);
    bVar1 = iVar4 < param_2;
  }
  if (bVar1) {
    param_2 = iVar4;
  }
  return param_2;
}


/* ==== FUN_820414a8 @ 820414a8 ==== */

void FUN_820414a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82041610 @ 82041610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041610(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  float extraout_r4;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar10 = FUN_8205b89c();
  fVar8 = DAT_820016c4;
  fVar4 = DAT_820016c0;
  pfVar1 = (float *)((ulonglong)uVar10 >> 0x20);
  iVar2 = (int)uVar10;
  fVar6 = *(float *)(iVar2 + 4);
  fVar5 = 0.0;
  fVar7 = 0.0;
  if (param_3 == fVar6) {
    if (param_4 == 0) {
      pfVar1[1] = DAT_820016c4;
      *pfVar1 = fVar8;
      pfVar1[2] = fVar4;
      if (0 < (int)fVar6) {
        do {
          fVar5 = fVar7;
          FUN_82041388(&fStack_60,iVar2,fVar5);
          fVar7 = (float)((int)fStack_4c + (int)fVar5);
        } while ((int)fVar7 < (int)fVar6);
      }
      pfVar1[3] = fVar7;
      pfVar1[5] = fVar5;
      pfVar1[4] = 0.0;
    }
    else {
      FUN_82041388(&fStack_60,iVar2,0);
      pfVar1[4] = fVar6;
      pfVar1[3] = 0.0;
      *pfVar1 = fStack_5c;
      pfVar1[1] = DAT_820016c4;
      pfVar1[2] = fStack_50 - fStack_54;
    }
  }
  else {
    pfVar1[1] = DAT_820016c4;
    FUN_82041388(&fStack_60,iVar2,0);
    fVar4 = fStack_4c;
    while ((int)fVar4 <= (int)param_3) {
      fVar8 = (float)((int)fStack_4c + (int)fVar7);
      pfVar1[1] = pfVar1[1] + fStack_58;
      FUN_82041388(&fStack_60,iVar2,fVar8);
      fVar5 = fVar7;
      fVar7 = fVar8;
      fVar4 = (float)((int)fStack_4c + (int)fVar8);
    }
    pfVar1[3] = fVar7;
    pfVar1[2] = fStack_50 - fStack_54;
    pfVar1[4] = fStack_4c;
    *pfVar1 = fStack_60;
    pfVar1[5] = fVar5;
    iVar3 = 0;
    fVar5 = fVar7;
    while ((int)fVar5 < (int)param_3) {
      dVar9 = (double)FUN_82041320(iVar2,fVar7);
      iVar3 = iVar3 + 1;
      *pfVar1 = (float)(dVar9 + (double)*pfVar1);
      fVar7 = extraout_r4;
      fVar5 = (float)((int)extraout_r4 + iVar3);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820417a0 @ 820417a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820417a0(void)

{
  int iVar1;
  
  FUN_8205b878();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82021868();
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_82041cf0 @ 82041cf0 ==== */

void FUN_82041cf0(double param_1,int param_2,undefined4 param_3,char param_4)

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
  puVar1 = (undefined4 *)FUN_8203ea98(param_2,1);
  uVar3 = (undefined2)uVar2;
  *(undefined2 *)((int)puVar1 + 0x12) = uVar3;
  *(undefined2 *)(puVar1 + 5) = uVar3;
  *(undefined2 *)((int)puVar1 + 0x16) = uVar3;
  *(undefined2 *)(puVar1 + 6) = uVar3;
  *puVar1 = puVar1[1];
  puVar1[1] = uVar2;
  return;
}


/* ==== FUN_82041d60 @ 82041d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041d60(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  ushort uVar1;
  ushort uStack_a;
  
  uStack_a = (ushort)(longlong)param_1;
  if (uStack_a <= *(ushort *)(param_5 + 0x12)) {
    uStack_a = *(ushort *)(param_5 + 0x12);
  }
  *(ushort *)(param_5 + 0x12) = uStack_a;
  uStack_a = (ushort)(longlong)param_2;
  if (uStack_a <= *(ushort *)(param_5 + 0x14)) {
    uStack_a = *(ushort *)(param_5 + 0x14);
  }
  *(ushort *)(param_5 + 0x14) = uStack_a;
  uStack_a = (ushort)(longlong)param_3;
  uVar1 = *(ushort *)(param_5 + 0x16);
  if (*(ushort *)(param_5 + 0x16) < uStack_a) {
    uVar1 = uStack_a;
  }
  *(ushort *)(param_5 + 0x16) = uVar1;
  uStack_a = (ushort)(longlong)param_4;
  uVar1 = *(ushort *)(param_5 + 0x18);
  if (*(ushort *)(param_5 + 0x18) < uStack_a) {
    uVar1 = uStack_a;
  }
  *(ushort *)(param_5 + 0x18) = uVar1;
  FUN_8203ea98(param_5,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82041e50 @ 82041e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82041e50(void)

{
  int iVar1;
  
  FUN_8205b888();
  FUN_8205b950();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b99c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042310 @ 82042310 ==== */

void FUN_82042310(void)

{
  FUN_82041e50();
  return;
}


/* ==== FUN_82042328 @ 82042328 ==== */

void FUN_82042328(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820423c0 @ 820423c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

int FUN_820423c0(double param_1,int param_2,undefined4 param_3,int param_4,int param_5,char param_6)

{
  bool bVar1;
  
  if (param_4 != param_5) {
    if ((param_2 == 8) || (bVar1 = false, param_2 == 9)) {
      bVar1 = true;
    }
    if (param_6 == '\0') {
      if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_4 = param_5;
      if (param_1 < (double)DAT_820016c0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (((double)DAT_820016c4 < param_1) && (param_4 = param_5, param_1 < (double)DAT_820016c0)
            ) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return param_4;
}


/* ==== FUN_820426e8 @ 820426e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820426e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820427c8 @ 820427c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820427c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042ab0 @ 82042ab0 ==== */

/* WARNING: Control flow encountered bad instruction data */

int FUN_82042ab0(double param_1,int param_2,undefined4 param_3,int param_4,int param_5,char param_6)

{
  bool bVar1;
  
  if (param_4 != param_5) {
    if ((param_2 == 8) || (bVar1 = false, param_2 == 9)) {
      bVar1 = true;
    }
    if (param_6 == '\0') {
      if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_4 = param_5;
      if (param_1 < (double)DAT_820016c0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (((double)DAT_820016c4 < param_1) && (param_4 = param_5, param_1 < (double)DAT_820016c0)
            ) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return param_4;
}


/* ==== FUN_82042dc8 @ 82042dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042dc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82042ea8 @ 82042ea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82042ea8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043198 @ 82043198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820434b0 @ 820434b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820434b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820435f8 @ 820435f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820435f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  FUN_8205b8a4();
  dVar2 = (double)FUN_8205b944();
  if (param_3 != param_4) {
    if ((param_5 & 0xff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    dVar3 = (double)FUN_8205f0a0();
    if (ABS(dVar3) < dVar2) {
      dVar4 = (double)FUN_8205f0a0();
      dVar3 = dVar2;
      if ((float)dVar4 < 0.0) {
        dVar3 = -dVar2;
      }
    }
    dVar4 = (double)FUN_8205f0a0();
    if (ABS(dVar4) < dVar2) {
      dVar5 = (double)FUN_8205f0a0();
      dVar4 = dVar2;
      if ((float)dVar5 < 0.0) {
        dVar4 = -dVar2;
      }
    }
    dVar5 = (double)FUN_8205f0a0();
    fVar1 = DAT_820016c4;
    if (((float)dVar5 != DAT_820016c4) || (dVar6 = (double)FUN_8205f0a0(), fVar1 <= (float)dVar6)) {
      dVar6 = (double)FUN_8205f0a0();
      if (((float)dVar6 == fVar1) && ((float)dVar5 < fVar1)) {
        dVar4 = -dVar2;
      }
    }
    else {
      dVar3 = -dVar2;
    }
    dVar2 = (double)FUN_8205f0a0();
    if ((dVar3 < dVar2) && (dVar2 < dVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  FUN_8205b990();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820438f0 @ 820438f0 ==== */

void FUN_820438f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82043c00 @ 82043c00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82043c00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82043e60 @ 82043e60 ==== */

double FUN_82043e60(double param_1,double param_2,double param_3,double param_4,double param_5,
                   int param_6)

{
  bool bVar1;
  char in_r7;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_2;
  if (param_2 != param_3) {
    if ((param_6 == 8) || (bVar1 = false, param_6 == 9)) {
      bVar1 = true;
    }
    if (in_r7 == '\0') {
      if (bVar1) {
        dVar2 = (double)(float)((double)(float)(param_3 - param_2) * param_1 + param_2);
      }
      else {
        dVar2 = param_3;
        if (param_1 < (double)DAT_820016c0) {
          dVar2 = DAT_82001740;
          if (param_3 < param_2) {
            dVar2 = DAT_82006ae8;
          }
          dVar2 = (double)(float)((double)((float)dVar2 +
                                          (float)((double)(float)(param_3 - param_2) * param_1)) +
                                 param_2);
        }
      }
    }
    else {
      dVar3 = (double)DAT_820016c4;
      if ((dVar3 < param_1) && (dVar2 = param_3, param_1 < (double)DAT_820016c0)) {
        dVar2 = param_2;
        if ((ABS(param_2) < param_4) && (dVar2 = param_4, param_2 < 0.0)) {
          dVar2 = -param_4;
        }
        dVar5 = param_3;
        if ((ABS(param_3) < param_4) && (dVar5 = param_4, param_3 < 0.0)) {
          dVar5 = -param_4;
        }
        dVar4 = dVar2;
        if (param_3 < param_2) {
          dVar4 = dVar5;
          dVar5 = dVar2;
        }
        if ((param_3 == dVar3) && (param_2 < dVar3)) {
          dVar5 = -param_4;
        }
        if (param_3 < param_2) {
          param_1 = (double)(float)((double)DAT_820016c0 - param_1);
        }
        if (dVar3 <= (double)(float)(param_2 * param_3)) {
          if ((dVar3 <= param_2) && (dVar3 <= param_3)) {
            dVar2 = (double)FUN_8205ebb0();
            return (double)(float)((double)(float)dVar2 * dVar4);
          }
          dVar2 = (double)FUN_8205ebb0();
          dVar2 = -(double)(float)((double)(float)dVar2 * dVar5);
        }
        else {
          dVar2 = param_3;
          if (param_2 < param_3) {
            dVar2 = param_2;
          }
          dVar2 = (double)(float)(-dVar2 / ABS((double)(float)(param_3 - param_2)));
          if (((double)(float)(dVar2 - param_5) <= param_1) &&
             (param_1 <= (double)(float)(dVar2 + param_5))) {
            return dVar3;
          }
          if (dVar2 <= param_1) {
            dVar2 = (double)FUN_8205ebb0();
            return (double)(float)((double)(float)dVar2 * param_4);
          }
          dVar2 = (double)FUN_8205ebb0();
          dVar2 = (double)(float)((double)(float)dVar2 * param_4);
        }
        dVar2 = -dVar2;
      }
    }
  }
  return dVar2;
}


/* ==== FUN_820440b0 @ 820440b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820440b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044208 @ 82044208 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044208(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820444a8 @ 820444a8 ==== */

double FUN_820444a8(double param_1,double param_2,double param_3,double param_4,double param_5,
                   int param_6)

{
  bool bVar1;
  char in_r7;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_2;
  if (param_2 != param_3) {
    if ((param_6 == 8) || (bVar1 = false, param_6 == 9)) {
      bVar1 = true;
    }
    if (in_r7 == '\0') {
      if (bVar1) {
        dVar2 = (param_3 - param_2) * param_1 + param_2;
      }
      else {
        dVar2 = param_3;
        if (param_1 < (double)DAT_820016c0) {
          dVar2 = DAT_82001740;
          if (param_3 < param_2) {
            dVar2 = DAT_82006ae8;
          }
          dVar2 = dVar2 + (param_3 - param_2) * param_1 + param_2;
        }
      }
    }
    else if (((double)DAT_820016c4 < param_1) && (dVar2 = param_3, param_1 < (double)DAT_820016c0))
    {
      dVar2 = param_2;
      if ((ABS(param_2) < param_4) && (dVar2 = param_4, param_2 < DAT_82001738)) {
        dVar2 = -param_4;
      }
      dVar3 = param_3;
      if ((ABS(param_3) < param_4) && (dVar3 = param_4, param_3 < DAT_82001738)) {
        dVar3 = -param_4;
      }
      dVar4 = dVar2;
      if (param_3 < param_2) {
        dVar4 = dVar3;
        dVar3 = dVar2;
      }
      if ((param_3 == DAT_82001738) && (param_2 < DAT_82001738)) {
        dVar3 = -param_4;
      }
      if (param_3 < param_2) {
        param_1 = (double)(float)((double)DAT_820016c0 - param_1);
      }
      if (DAT_82001738 <= param_2 * param_3) {
        if ((DAT_82001738 <= param_2) && (DAT_82001738 <= param_3)) {
          dVar2 = (double)FUN_8205ebb0();
          return dVar2 * dVar4;
        }
        dVar2 = (double)FUN_8205ebb0();
        dVar2 = -(dVar2 * dVar3);
      }
      else {
        dVar2 = param_3;
        if (param_2 < param_3) {
          dVar2 = param_2;
        }
        dVar2 = (double)(-(float)dVar2 / ABS((float)param_3 - (float)param_2));
        if (((double)(float)(dVar2 - param_5) <= param_1) &&
           (param_1 <= (double)(float)(dVar2 + param_5))) {
          return DAT_82001738;
        }
        if (dVar2 <= param_1) {
          dVar2 = (double)FUN_8205ebb0();
          return dVar2 * param_4;
        }
        dVar2 = (double)FUN_8205ebb0();
        dVar2 = dVar2 * param_4;
      }
      dVar2 = -dVar2;
    }
  }
  return dVar2;
}


/* ==== FUN_82044710 @ 82044710 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044710(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044860 @ 82044860 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044860(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820448b0 @ 820448b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820448b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044900 @ 82044900 ==== */

void FUN_82044900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82044a48 @ 82044a48 ==== */

void FUN_82044a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82044b88 @ 82044b88 ==== */

void FUN_82044b88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82044c08 @ 82044c08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044c08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044c80 @ 82044c80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044c80(void)

{
  short sVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_8205b89c();
  piVar3 = (int *)uVar11;
  iVar8 = (int)*(short *)((int)piVar3 + 0xe1e);
  if (iVar8 != 0) {
    iVar6 = (int)*(short *)(piVar3 + 0x388);
    iVar5 = piVar3[iVar8 * 4 + 4];
    iVar4 = piVar3[iVar8 * 4 + 5];
    iVar8 = piVar3[iVar8 * 4 + 6];
    piVar3[iVar6 * 4 + 7] = -1;
    piVar3[iVar6 * 4 + 5] = iVar8;
    piVar3[iVar6 * 4 + 6] = iVar4;
    piVar3[iVar6 * 4 + 4] = iVar5;
    if (iVar8 != 0) {
      if (piVar3[0x389] + iVar8 < 999) {
        if (piVar3[0x38a] < piVar3[0x389] + iVar8) {
          do {
            if (*(short *)(piVar3 + 0x388) == 99) {
              halt_baddata();
            }
            if (*(short *)(piVar3 + 0x388) < 99) {
              if (-1 < piVar3[0x193]) {
                iVar10 = piVar3[0x191];
                iVar6 = piVar3[0x38a] + iVar10;
                piVar3[0x38a] = iVar6;
                FUN_8205c390((int)piVar3 + (iVar6 + 0x318) * 2 + 0x20,
                             (int)piVar3 + ((iVar6 - iVar10) + 0x318) * 2 + 0x20,(999 - iVar6) * 2);
                iVar6 = (int)*(short *)(piVar3 + 0x388);
                if (iVar6 < 0x62) {
                  iVar7 = 0x62 - iVar6;
                  piVar9 = piVar3 + iVar6 * 4 + 0xb;
                  do {
                    if (-1 < *piVar9) {
                      *piVar9 = *piVar9 + iVar10;
                    }
                    piVar9 = piVar9 + 4;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
              }
              FUN_8205c390((int)(piVar3 + *(short *)(piVar3 + 0x388) * 4 + 8 + 4),
                           (int)(piVar3 + *(short *)(piVar3 + 0x388) * 4 + 8),
                           (0x62 - *(short *)(piVar3 + 0x388)) * 0x10);
              *(short *)(piVar3 + 0x388) = *(short *)(piVar3 + 0x388) + 1;
            }
          } while (piVar3[0x38a] < piVar3[0x389] + iVar8);
        }
        sVar1 = *(short *)(piVar3 + 0x388);
        iVar6 = 0;
        piVar3[sVar1 * 4 + 7] = piVar3[0x38a] - iVar8;
        piVar3[0x38a] = piVar3[0x38a] - iVar8;
        if (0 < iVar8) {
          iVar10 = iVar5 << 1;
          do {
            iVar7 = piVar3[sVar1 * 4 + 7] + iVar6;
            iVar6 = iVar6 + 1;
            puVar2 = (undefined2 *)(iVar10 + *(int *)((int)((ulonglong)uVar11 >> 0x20) + 0x14));
            iVar10 = iVar10 + 2;
            *(undefined2 *)((int)piVar3 + (iVar7 + 0x318) * 2 + 0x20) = *puVar2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        piVar3[iVar6 * 4 + 5] = 0;
      }
      FUN_8203e4f8();
    }
    if (iVar4 != 0) {
      FUN_82044a48();
      piVar3[0x389] = piVar3[0x389] - iVar4;
    }
    *piVar3 = iVar5 + iVar4;
    *(short *)(piVar3 + 0x388) = *(short *)(piVar3 + 0x388) + -1;
    *(short *)((int)piVar3 + 0xe1e) = *(short *)((int)piVar3 + 0xe1e) + -1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82044ed8 @ 82044ed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82044ed8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_8205b8a4();
  piVar1 = (int *)uVar8;
  iVar6 = (int)*(short *)(piVar1 + 0x388);
  if (iVar6 != 99) {
    iVar3 = piVar1[iVar6 * 4 + 8];
    piVar7 = piVar1 + *(short *)((int)piVar1 + 0xe1e) * 4 + 8;
    iVar2 = piVar1[iVar6 * 4 + 10];
    iVar6 = piVar1[iVar6 * 4 + 9];
    piVar7[3] = -1;
    piVar7[2] = iVar6;
    piVar7[1] = iVar2;
    *piVar7 = iVar3;
    if (iVar2 != 0) {
      if (piVar1[0x38a] < piVar1[0x389] + iVar2) {
        piVar7[1] = 0;
        piVar7[2] = 0;
      }
      else {
        piVar7[3] = piVar1[0x389];
        iVar5 = 0;
        piVar1[0x389] = piVar1[0x389] + iVar2;
        if (0 < piVar7[1]) {
          do {
            iVar2 = *piVar7 + iVar5;
            iVar4 = iVar5 + piVar7[3];
            iVar5 = iVar5 + 1;
            *(undefined2 *)((int)piVar1 + (iVar4 + 0x318) * 2 + 0x20) =
                 *(undefined2 *)(iVar2 * 2 + *(int *)((int)((ulonglong)uVar8 >> 0x20) + 0x14));
          } while (iVar5 < piVar7[1]);
        }
      }
      FUN_8203e4f8();
    }
    if (iVar6 != 0) {
      FUN_82044a48();
      piVar1[0x38a] = iVar6 + piVar1[0x38a];
    }
    *piVar1 = iVar3 + iVar6;
    *(short *)((int)piVar1 + 0xe1e) = *(short *)((int)piVar1 + 0xe1e) + 1;
    *(short *)(piVar1 + 0x388) = *(short *)(piVar1 + 0x388) + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045048 @ 82045048 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82045048(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_8205b89c();
  pcVar1 = (char *)((ulonglong)uVar3 >> 0x20);
  FUN_82027928(1,0);
  pcVar2 = (char *)0x0;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = (char *)FUN_82015368(pcVar1,(char *)0x0);
  }
  if ((pcVar1 < pcVar2) &&
     (FUN_8203ee90(), *(char *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8f) == '\0')) {
    FUN_820403b0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== caseD_0 @ 820451b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void switchD_820474b8::caseD_0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045378 @ 82045378 ==== */

void FUN_82045378(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== caseD_0 @ 820455ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void switchD_820474f0::caseD_0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820457c0 @ 820457c0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82045b18) */
/* WARNING: Removing unreachable block (ram,0x82045b88) */
/* WARNING: Removing unreachable block (ram,0x82045b90) */
/* WARNING: Removing unreachable block (ram,0x82045b98) */
/* WARNING: Removing unreachable block (ram,0x82045ba0) */
/* WARNING: Removing unreachable block (ram,0x82045ba8) */
/* WARNING: Removing unreachable block (ram,0x82045bb0) */
/* WARNING: Removing unreachable block (ram,0x82045bb4) */
/* WARNING: Removing unreachable block (ram,0x82045bbc) */
/* WARNING: Removing unreachable block (ram,0x82045bc4) */
/* WARNING: Removing unreachable block (ram,0x82045bcc) */
/* WARNING: Removing unreachable block (ram,0x82045bd4) */
/* WARNING: Removing unreachable block (ram,0x82045bd8) */
/* WARNING: Removing unreachable block (ram,0x82045bdc) */
/* WARNING: Removing unreachable block (ram,0x82045be0) */
/* WARNING: Removing unreachable block (ram,0x82045a4c) */
/* WARNING: Removing unreachable block (ram,0x82045a64) */
/* WARNING: Removing unreachable block (ram,0x82045a54) */
/* WARNING: Removing unreachable block (ram,0x82045a68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820457c0(void)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char cVar7;
  bool bVar8;
  int iVar6;
  int *extraout_r4;
  uint in_r6;
  uint in_r7;
  char *in_r8;
  uint in_r9;
  uint uVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  FUN_8205b884();
  iVar5 = FUN_8205b954();
  iVar4 = DAT_82072c98;
  fVar3 = DAT_820016c4;
  uVar9 = in_r9 >> 0x14 & 1;
  uVar2 = (uint)(in_r7 <= in_r6) - ((int)~(in_r7 ^ in_r6) >> 0x1f) & 1;
  if ((iVar5 == 8) || (bVar1 = false, iVar5 == 9)) {
    bVar1 = true;
  }
  dVar12 = (double)DAT_820016c4;
  if ((extraout_f1 == dVar12) && (uVar2 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((*(int *)(DAT_82072c98 + 0x1c44) == 1) && (cVar7 = FUN_82016048(), cVar7 != '\0')) &&
     (bVar8 = FUN_82015fa0((double)(*(float *)(iVar4 + 0x30) * DAT_82001760),0), bVar8)) {
    dVar13 = (double)*(float *)((uVar9 + 0xe0) * 4 + iVar4);
    if (*(char *)(iVar4 + 0xfe) != '\0') {
      dVar13 = (double)(float)(dVar13 * (double)_DAT_82002230);
    }
    dVar11 = extraout_f1;
    if (*(char *)(iVar4 + 0xfd) != '\0') {
      dVar11 = extraout_f1;
      dVar13 = (double)(float)(dVar13 * (double)DAT_820016e0);
    }
  }
  else {
    dVar11 = extraout_f1;
    dVar13 = dVar12;
    if (*(int *)(iVar4 + 0x1c44) == 4) {
      if (bVar1) {
        iVar5 = FUN_820410f8(in_r8,3);
      }
      else {
        iVar5 = 0;
      }
      iVar6 = FUN_820171b8();
      dVar13 = (double)*(float *)(uVar9 * 4 + iVar6);
      dVar10 = FUN_8203e370(iVar5);
      dVar11 = extraout_f1;
      if (extraout_f1 < dVar10) {
        dVar11 = dVar10;
      }
    }
  }
  dVar11 = (double)(float)(dVar13 * dVar11);
  if (uVar9 == 1) {
    dVar11 = -dVar11;
  }
  if ((in_r9 >> 5 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar2 == 0) ||
     (((*extraout_r4 < (int)in_r7 || (dVar11 <= dVar12)) &&
      (((int)in_r6 < *extraout_r4 || (dVar12 <= dVar11)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(iVar4 + 0x1c1c) != '\0') || (bVar1)) {
    *(float *)(iVar4 + 0x2f4c) = fVar3;
    *(undefined1 *)(iVar4 + 0x2f49) = 0;
  }
  else if (dVar11 != dVar12) {
    *(float *)(iVar4 + 0x2f4c) = (float)((double)*(float *)(iVar4 + 0x2f4c) + dVar11);
    *(undefined1 *)(iVar4 + 0x2f49) = 1;
  }
  if (*(char *)(iVar4 + 0x2f49) != '\0') {
    if ((in_r9 & 0x40) == 0) {
      FUN_820426e8();
    }
    *(undefined1 *)(iVar4 + 0x2f49) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8205b9a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82045bf8 @ 82045bf8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82045f48) */
/* WARNING: Removing unreachable block (ram,0x82045fb8) */
/* WARNING: Removing unreachable block (ram,0x82045fc0) */
/* WARNING: Removing unreachable block (ram,0x82045fc8) */
/* WARNING: Removing unreachable block (ram,0x82045fd0) */
/* WARNING: Removing unreachable block (ram,0x82045fd8) */
/* WARNING: Removing unreachable block (ram,0x82045fe0) */
/* WARNING: Removing unreachable block (ram,0x82045fe4) */
/* WARNING: Removing unreachable block (ram,0x82045fec) */
/* WARNING: Removing unreachable block (ram,0x82045ff4) */
/* WARNING: Removing unreachable block (ram,0x82045ffc) */
/* WARNING: Removing unreachable block (ram,0x82046004) */
/* WARNING: Removing unreachable block (ram,0x82046008) */
/* WARNING: Removing unreachable block (ram,0x8204600c) */
/* WARNING: Removing unreachable block (ram,0x82046010) */
/* WARNING: Removing unreachable block (ram,0x82045e7c) */
/* WARNING: Removing unreachable block (ram,0x82045e94) */
/* WARNING: Removing unreachable block (ram,0x82045e84) */
/* WARNING: Removing unreachable block (ram,0x82045e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82045bf8(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  bool bVar7;
  int iVar5;
  uint *extraout_r4;
  uint in_r6;
  uint in_r7;
  char *in_r8;
  uint in_r9;
  uint uVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  FUN_8205b884();
  iVar4 = FUN_8205b954();
  iVar3 = DAT_82072c98;
  fVar2 = DAT_820016c4;
  uVar8 = in_r9 >> 0x14 & 1;
  if ((iVar4 == 8) || (bVar1 = false, iVar4 == 9)) {
    bVar1 = true;
  }
  dVar11 = (double)DAT_820016c4;
  if ((extraout_f1 == dVar11) && (in_r6 < in_r7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((*(int *)(DAT_82072c98 + 0x1c44) == 1) && (cVar6 = FUN_82016048(), cVar6 != '\0')) &&
     (bVar7 = FUN_82015fa0((double)(*(float *)(iVar3 + 0x30) * DAT_82001760),0), bVar7)) {
    dVar12 = (double)*(float *)((uVar8 + 0xe0) * 4 + iVar3);
    if (*(char *)(iVar3 + 0xfe) != '\0') {
      dVar12 = (double)(float)(dVar12 * (double)_DAT_82002230);
    }
    dVar10 = extraout_f1;
    if (*(char *)(iVar3 + 0xfd) != '\0') {
      dVar10 = extraout_f1;
      dVar12 = (double)(float)(dVar12 * (double)DAT_820016e0);
    }
  }
  else {
    dVar10 = extraout_f1;
    dVar12 = dVar11;
    if (*(int *)(iVar3 + 0x1c44) == 4) {
      if (bVar1) {
        iVar4 = FUN_820410f8(in_r8,3);
      }
      else {
        iVar4 = 0;
      }
      iVar5 = FUN_820171b8();
      dVar12 = (double)*(float *)(uVar8 * 4 + iVar5);
      dVar9 = FUN_8203e370(iVar4);
      dVar10 = extraout_f1;
      if (extraout_f1 < dVar9) {
        dVar10 = dVar9;
      }
    }
  }
  dVar10 = (double)(float)(dVar12 * dVar10);
  if (uVar8 == 1) {
    dVar10 = -dVar10;
  }
  if ((in_r9 >> 5 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_r6 >= in_r7) ||
     (((*extraout_r4 < in_r7 || (dVar10 <= dVar11)) &&
      ((in_r6 < *extraout_r4 || (dVar11 <= dVar10)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(iVar3 + 0x1c1c) != '\0') || (bVar1)) {
    *(float *)(iVar3 + 0x2f4c) = fVar2;
    *(undefined1 *)(iVar3 + 0x2f49) = 0;
  }
  else if (dVar10 != dVar11) {
    *(float *)(iVar3 + 0x2f4c) = (float)((double)*(float *)(iVar3 + 0x2f4c) + dVar10);
    *(undefined1 *)(iVar3 + 0x2f49) = 1;
  }
  if (*(char *)(iVar3 + 0x2f49) != '\0') {
    if ((in_r9 & 0x40) == 0) {
      FUN_82042dc8();
    }
    *(undefined1 *)(iVar3 + 0x2f49) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8205b9a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046028 @ 82046028 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82046028(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  bool bVar7;
  int iVar5;
  int in_r6;
  int in_r7;
  char *in_r8;
  uint in_r9;
  uint uVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  FUN_8205b884();
  iVar4 = FUN_8205b954();
  iVar3 = DAT_82072c98;
  fVar2 = DAT_820016c4;
  uVar8 = in_r9 >> 0x14 & 1;
  if ((iVar4 == 8) || (bVar1 = false, iVar4 == 9)) {
    bVar1 = true;
  }
  dVar11 = (double)DAT_820016c4;
  if ((extraout_f1 == dVar11) && (in_r6 < in_r7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((*(int *)(DAT_82072c98 + 0x1c44) == 1) && (cVar6 = FUN_82016048(), cVar6 != '\0')) &&
     (bVar7 = FUN_82015fa0((double)(*(float *)(iVar3 + 0x30) * DAT_82001760),0), bVar7)) {
    dVar12 = (double)*(float *)((uVar8 + 0xe0) * 4 + iVar3);
    if (*(char *)(iVar3 + 0xfe) != '\0') {
      dVar12 = (double)(float)(dVar12 * (double)_DAT_82002230);
    }
    dVar10 = extraout_f1;
    if (*(char *)(iVar3 + 0xfd) != '\0') {
      dVar10 = extraout_f1;
      dVar12 = (double)(float)(dVar12 * (double)DAT_820016e0);
    }
  }
  else {
    dVar10 = extraout_f1;
    dVar12 = dVar11;
    if (*(int *)(iVar3 + 0x1c44) == 4) {
      if (bVar1) {
        iVar4 = FUN_820410f8(in_r8,3);
      }
      else {
        iVar4 = 0;
      }
      iVar5 = FUN_820171b8();
      dVar12 = (double)*(float *)(uVar8 * 4 + iVar5);
      dVar9 = FUN_8203e370(iVar4);
      dVar10 = extraout_f1;
      if (extraout_f1 < dVar9) {
        dVar10 = dVar9;
      }
    }
  }
  dVar10 = (double)(float)(dVar12 * dVar10);
  if (uVar8 == 1) {
    dVar10 = -dVar10;
  }
  if ((in_r9 >> 5 & 1) == 0) {
    if (in_r6 < in_r7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(iVar3 + 0x1c1c) == '\0') {
      if (dVar10 != dVar11) {
        *(float *)(iVar3 + 0x2f4c) = (float)((double)*(float *)(iVar3 + 0x2f4c) + dVar10);
        *(undefined1 *)(iVar3 + 0x2f49) = 1;
      }
    }
    else {
      *(float *)(iVar3 + 0x2f4c) = fVar2;
      *(undefined1 *)(iVar3 + 0x2f49) = 0;
    }
    if (*(char *)(iVar3 + 0x2f49) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_8205b9a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046458 @ 82046458 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82046458(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  bool bVar7;
  int iVar5;
  uint in_r6;
  uint in_r7;
  char *in_r8;
  uint in_r9;
  uint uVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  FUN_8205b884();
  iVar4 = FUN_8205b954();
  iVar3 = DAT_82072c98;
  fVar2 = DAT_820016c4;
  uVar8 = in_r9 >> 0x14 & 1;
  if ((iVar4 == 8) || (bVar1 = false, iVar4 == 9)) {
    bVar1 = true;
  }
  dVar12 = (double)DAT_820016c4;
  dVar11 = (double)DAT_82001fe0;
  dVar13 = extraout_f1;
  if ((extraout_f1 == dVar12) && (in_r6 < in_r7)) {
    dVar9 = (double)FUN_8205f0a0();
    if ((double)(float)dVar9 < dVar11) {
      dVar13 = (double)(float)((double)*(float *)(iVar3 + 0x2f50) * (double)(float)dVar9);
    }
  }
  if (((*(int *)(iVar3 + 0x1c44) == 1) && (cVar6 = FUN_82016048(), cVar6 != '\0')) &&
     (bVar7 = FUN_82015fa0((double)(*(float *)(iVar3 + 0x30) * DAT_82001760),0), bVar7)) {
    dVar9 = (double)*(float *)((uVar8 + 0xe0) * 4 + iVar3);
    if (*(char *)(iVar3 + 0xfe) != '\0') {
      dVar9 = (double)(float)(dVar9 * (double)_DAT_82002230);
    }
    if (*(char *)(iVar3 + 0xfd) != '\0') {
      dVar9 = (double)(float)(dVar9 * (double)DAT_820016e0);
    }
  }
  else {
    dVar9 = dVar12;
    if (*(int *)(iVar3 + 0x1c44) == 4) {
      if (bVar1) {
        iVar4 = FUN_820410f8(in_r8,3);
      }
      else {
        iVar4 = 0;
      }
      iVar5 = FUN_820171b8();
      dVar9 = (double)*(float *)(uVar8 * 4 + iVar5);
      dVar10 = FUN_8203e370(iVar4);
      if (dVar13 < dVar10) {
        dVar13 = dVar10;
      }
    }
  }
  dVar13 = (double)(float)(dVar9 * dVar13);
  if (uVar8 == 1) {
    dVar13 = -dVar13;
  }
  if ((in_r9 >> 5 & 1) != 0) {
    dVar9 = (double)FUN_8205f0a0();
    dVar9 = (double)(float)dVar9;
    if ((dVar9 < dVar11) && ((double)DAT_82006230 < dVar9)) {
      dVar13 = (double)(float)(dVar13 / dVar9);
    }
  }
  if (in_r6 >= in_r7) {
    if (*(char *)(iVar3 + 0x1c1c) == '\0') {
      if (dVar13 != dVar12) {
        *(float *)(iVar3 + 0x2f4c) = (float)((double)*(float *)(iVar3 + 0x2f4c) + dVar13);
        *(undefined1 *)(iVar3 + 0x2f49) = 1;
      }
    }
    else {
      *(float *)(iVar3 + 0x2f4c) = fVar2;
      *(undefined1 *)(iVar3 + 0x2f49) = 0;
    }
    if (*(char *)(iVar3 + 0x2f49) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_8205b9a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82046878 @ 82046878 ==== */

void FUN_82046878(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_82046c60 @ 82046c60 ==== */

void FUN_82046c60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_82047058 @ 82047058 ==== */

void FUN_82047058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82047460 @ 82047460 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_82047460(undefined8 param_1,double param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  float *pfVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 extraout_r4;
  int in_r9;
  uint uVar5;
  uint uVar6;
  char unaff_r19;
  uint *unaff_r20;
  float *unaff_r21;
  undefined1 uVar7;
  char *unaff_r22;
  uint unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  uint unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  float fVar8;
  bool bVar9;
  byte in_cr0;
  double in_f0;
  double dVar10;
  double in_f9;
  double in_f12;
  double in_f13;
  double unaff_f27;
  double unaff_f28;
  double unaff_f29;
  double unaff_f30;
  double unaff_f31;
  undefined8 uVar11;
  
  uVar11 = FUN_8205b894();
  uVar2 = (uint)((ulonglong)uVar11 >> 0x20);
  pfVar1 = (float *)uVar11;
  uVar5 = 0x600000;
  uVar7 = SUB41(unaff_r21,0);
  if ((int)param_5 < 0x600001) {
    if (param_5 == 0x600000) {
      FUN_8203e598(uVar2,(int *)pfVar1);
      if (pfVar1[1] == pfVar1[2]) {
        pfVar1[2] = *pfVar1;
        pfVar1[1] = *pfVar1;
      }
      else {
        *pfVar1 = pfVar1[2];
      }
      if (0 < (int)pfVar1[2]) {
        pfVar1[2] = (float)((int)pfVar1[2] + -1);
      }
      fVar8 = pfVar1[2];
      goto LAB_82048018;
    }
    uVar6 = param_5 - 0x200000;
    bVar9 = uVar6 < 0xf;
    switch(uVar6) {
    case 0:
      goto switchD_820474b8_caseD_0;
    case 1:
      goto switchD_820474b8_caseD_1;
    case 2:
    case 0xe:
      goto switchD_820474b8_caseD_2;
    case 3:
    case 0xf:
      goto switchD_820474b8_caseD_3;
    case 4:
                    /* WARNING: Subroutine does not return */
      FUN_8205b898();
    case 5:
      cVar4 = FUN_82040018();
      if (cVar4 != '\0') {
        unaff_r26 = ((int)pfVar1 << 0x15 | (uint)pfVar1 >> 0xb) & 0x700000 | unaff_r26 & 0xff8fffff;
      }
      cVar4 = FUN_82040018();
      if (cVar4 != '\0') {
        unaff_r26 = ((int)pfVar1 << 0x16 | (uint)pfVar1 >> 10) & 0x700000 | unaff_r26 & 0xff8fffff;
      }
      if ((unaff_r30 & 0xff) != 0) {
        if ((unaff_r28 != 0) &&
           (*(char *)(*(int *)(*(int *)(unaff_r29 + 0x2c98) + 0x1bd8) + 0x8f) == '\0')) {
          FUN_820403b0();
        }
        cVar4 = FUN_82040018();
        if (cVar4 != '\0') {
          unaff_r26 = ((uint)pfVar1 & 3) << 0x17 | unaff_r26 & 0xfe7fffff;
        }
        cVar4 = FUN_82040018();
        if (cVar4 != '\0') {
          unaff_r26 = ((int)pfVar1 << 0x18 | (uint)pfVar1 >> 8) & 0x1800000 | unaff_r26 & 0xfe7fffff
          ;
        }
      }
      if (((unaff_r28 != 0) || ((unaff_r30 & 0xff) != 0)) &&
         (*(char *)(*(int *)(*(int *)(unaff_r29 + 0x2c98) + 0x1bd8) + 0x8f) == '\0')) {
        FUN_820403b0();
      }
      goto switchD_820474f0_caseD_b;
    case 7:
      goto switchD_820474b8_caseD_7;
    case 8:
      goto switchD_820474b8_caseD_8;
    case 9:
      goto switchD_820474b8_caseD_9;
    case 10:
      goto switchD_820474b8_caseD_a;
    case 0xb:
      goto switchD_820474b8_caseD_b;
    case 0xc:
      if ((unaff_r25 & 0x18000000) != 0) {
        if ((unaff_r25 & 0x10000000) != 0) {
          if (unaff_r26 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_82045368;
      }
      if (unaff_r26 != 0) {
        halt_baddata();
      }
    case 6:
      goto switchD_820474b8_caseD_7;
    case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      goto switchD_820474b8_default;
    }
  }
  uVar6 = param_5 - 0x600001;
  switch(uVar6) {
  case 0:
    goto switchD_820474f0_caseD_0;
  case 1:
  case 0xd:
switchD_820474b8_caseD_2:
    break;
  case 2:
  case 0xe:
switchD_820474b8_caseD_3:
    in_f9 = (double)*(float *)(in_r9 + 0x16c0);
    in_f13 = (double)pfVar1[1];
    in_f12 = (double)pfVar1[2];
    unaff_f31 = (double)DAT_820016c4;
    if ((double)*pfVar1 < unaff_f31) goto switchD_820474b8_caseD_2;
    break;
  case 3:
    goto switchD_820474f0_caseD_3;
  case 4:
    FUN_8205ebb0();
    unaff_f30 = (double)FUN_8203eba8();
    FUN_820423c0((double)(float)((double)*(float *)(unaff_r30 + 0x2f4c) + unaff_f30),unaff_r25,
                 extraout_r4,unaff_r28,uVar2,(char)unaff_r24);
    goto LAB_82045af0;
  case 5:
    dVar10 = (double)(float)in_f0;
    if ((dVar10 < unaff_f27) && ((double)DAT_82006230 < dVar10)) {
      unaff_f28 = (double)(float)(unaff_f28 / dVar10);
    }
    goto LAB_820459b0;
  case 6:
    goto switchD_820474f0_caseD_6;
  case 7:
switchD_820474b8_caseD_8:
    pfVar1 = unaff_r21;
    if (!(bool)(in_cr0 >> 1 & 1)) {
      pfVar1 = (float *)FUN_820410f8(unaff_r22,3);
    }
    uVar6 = FUN_820171b8();
    uVar5 = unaff_r29 << 2;
  case 8:
switchD_820474b8_caseD_9:
    fVar8 = *(float *)(uVar5 + uVar6);
    dVar10 = FUN_8203e370((int)pfVar1);
    if (unaff_f30 < dVar10) {
      unaff_f30 = dVar10;
    }
    unaff_f28 = (double)(float)((double)fVar8 * unaff_f30);
    if (unaff_r29 == 1) {
      unaff_f28 = -unaff_f28;
    }
    unaff_r29 = 0;
    if ((unaff_r24 & 0xff) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_820459b0:
    uVar5 = (uint)*(byte *)(unaff_r30 + 0x1c1c);
    unaff_r26 = unaff_r26 & 0xff;
    if (unaff_r26 == 0) {
switchD_820474f0_caseD_3:
    }
    else {
switchD_820474f0_caseD_6:
      if ((((int)*unaff_r20 < (int)uVar2) || (unaff_f28 <= unaff_f29)) &&
         (((int)unaff_r28 < (int)*unaff_r20 || (unaff_f29 <= unaff_f28))))
      goto switchD_820474f0_caseD_3;
      unaff_r21 = (float *)0x1;
    }
    if (((uVar5 & 0xff) == 0) && (((uint)unaff_r21 & 0xff) == 0)) {
      if (unaff_f28 != unaff_f29) {
        *(float *)(unaff_r30 + 0x2f4c) = (float)((double)*(float *)(unaff_r30 + 0x2f4c) + unaff_f28)
        ;
        *(undefined1 *)(unaff_r30 + 0x2f49) = 1;
      }
    }
    else {
      *(float *)(unaff_r30 + 0x2f4c) = (float)unaff_f29;
      *(undefined1 *)(unaff_r30 + 0x2f49) = uVar7;
    }
    if (*(char *)(unaff_r30 + 0x2f49) != '\0') {
      if (unaff_r29 != 0) {
        if (unaff_r19 != '\0') {
          FUN_820410f8(unaff_r22,3);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_r29 = 0;
      unaff_f30 = unaff_f29;
LAB_82045af0:
      pfVar1 = (float *)FUN_820426e8();
      *(undefined1 *)(unaff_r30 + 0x2f49) = uVar7;
      if (unaff_r29 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
switchD_820474f0_caseD_9:
      dVar10 = (double)FUN_8203eba8();
      *(float *)(unaff_r30 + 0x2f4c) = *(float *)(unaff_r30 + 0x2f4c) - (float)(dVar10 - unaff_f30);
      uVar6 = *unaff_r20;
      uVar5 = -(uint)(pfVar1 != (float *)0x0) & (uint)pfVar1;
      if (uVar6 != uVar5) {
        if (unaff_r26 != 0) {
          if (((int)uVar5 < (int)unaff_r28) ||
             ((((int)uVar6 < (int)uVar5 && (unaff_f28 < unaff_f29)) && (unaff_r19 == '\0')))) {
            uVar5 = unaff_r28;
          }
          if (((int)uVar2 < (int)uVar5) ||
             ((((int)uVar5 < (int)uVar6 && (unaff_f29 < unaff_f28)) && (unaff_r19 == '\0')))) {
            uVar5 = uVar2;
          }
        }
        if (uVar6 != uVar5) {
          *unaff_r20 = uVar5;
        }
      }
    }
    FUN_8205b9a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
  case 10:
    goto switchD_820474f0_caseD_9;
  case 0xb:
switchD_820474f0_caseD_b:
    unaff_f31 = (double)DAT_820016c4;
    cVar4 = FUN_8203dbe0();
    if (cVar4 != '\0') {
      FUN_82024510();
    }
    cVar4 = FUN_82027bd8();
    if (cVar4 == '\0') {
      *(uint *)(unaff_r24 + 0x2ef4) = unaff_r26;
      FUN_820226b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0xc:
    if (unaff_f31 <= (double)*(float *)(unaff_r25 + 4)) {
switchD_820474f0_caseD_0:
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
switchD_820474b8_default:
    uVar5 = -((uint)(param_5 < 0x200000) - ((int)param_5 >> 0x1f)) & param_5;
    if ((int)uVar5 < 1) {
      halt_baddata();
    }
    if ((uVar5 == 10) && (*(char *)((int)pfVar1 + 0x17) != '\0')) {
      halt_baddata();
    }
    if (((*(char *)(pfVar1 + 3) == '\0') || (pfVar1[1] != pfVar1[2])) ||
       (fVar8 = *pfVar1, *(int *)(uVar2 + 4) <= (int)fVar8)) {
      FUN_82044c08();
      cVar4 = FUN_82044a48();
      if (cVar4 == '\0') {
        halt_baddata();
      }
      FUN_8203e6a8();
    }
    else {
      puVar3 = (undefined2 *)FUN_8203e6a8();
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = *(undefined2 *)((int)fVar8 * 2 + *(int *)(uVar2 + 0x14));
      }
      FUN_8203e4f8();
      cVar4 = FUN_82044a48();
      if (cVar4 == '\0') {
        halt_baddata();
      }
    }
    fVar8 = (float)((int)*pfVar1 + 1);
LAB_82048018:
    *(undefined1 *)((int)pfVar1 + 0x16) = 0;
    *pfVar1 = fVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unaff_f31 <= in_f13) && (in_f9 < in_f13)) {
switchD_820474b8_caseD_a:
  }
  bVar9 = in_f12 < unaff_f31;
switchD_820474b8_caseD_b:
  if (!bVar9) {
switchD_820474b8_caseD_0:
  }
  if ((unaff_r26 == 0) && (unaff_f31 <= (double)pfVar1[3])) {
switchD_820474b8_caseD_1:
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
switchD_820474b8_caseD_7:
  FUN_82044860();
LAB_82045368:
  thunk_FUN_820222e8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048030 @ 82048030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82048030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82048078 @ 82048078 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82048078(void)

{
  int iVar1;
  uint in_r8;
  undefined8 uVar2;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  
  FUN_8205b870();
  uVar2 = FUN_8205b930();
  iVar1 = DAT_82072c98;
  uStack00000014 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack0000001c = (undefined4)uVar2;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b97c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_r8 >> 0x1a & 1) != 0) {
    FUN_8201f8f0();
    uVar2 = CONCAT44(uStack00000014,uStack0000001c);
  }
  uStack00000014 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack0000001c = (undefined4)uVar2;
  FUN_82021868();
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_8204ac88 @ 8204ac88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ac88(void)

{
  FUN_8205b894();
  FUN_8205b954();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b140 @ 8204b140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b140(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b89c();
  iVar1 = DAT_82072c98;
  puVar2 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  bVar4 = (int)uVar5 != *(int *)(DAT_82072c98 + 0x2ef0);
  if (bVar4) {
    FUN_82015988();
  }
  iVar3 = *(int *)(iVar1 + 0x1bd8);
  *(undefined4 *)(iVar3 + 0xd0) = *puVar2;
  *(undefined4 *)(iVar3 + 0xd4) = puVar2[1];
  FUN_82048078();
  if (bVar4) {
    *(undefined4 *)(iVar1 + 0x2ef0) = *(undefined4 *)(iVar1 + 0x1c10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204b1f8 @ 8204b1f8 ==== */

void FUN_8204b1f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8204b380 @ 8204b380 ==== */

void FUN_8204b380(void)

{
  FUN_82048078();
  return;
}


/* ==== FUN_8204b3d0 @ 8204b3d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b3d0(void)

{
  int iVar1;
  undefined4 uStack00000014;
  
  uStack00000014 = FUN_8205b870();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82021868();
  FUN_8201b2e8();
                    /* WARNING: Subroutine does not return */
  FUN_82015c30();
}


/* ==== FUN_8204b928 @ 8204b928 ==== */

void FUN_8204b928(undefined8 param_1,double param_2,double param_3)

{
  float fStack0000002c;
  float fStack00000034;
  
  fStack0000002c = (float)param_2;
  fStack00000034 = (float)param_3;
  FUN_8204b3d0();
  return;
}


/* ==== FUN_8204b968 @ 8204b968 ==== */

void FUN_8204b968(void)

{
  FUN_8204b3d0();
  return;
}


/* ==== FUN_8204b9a8 @ 8204b9a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204b9a8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  float *pfVar4;
  undefined8 uVar5;
  char *pcStack00000014;
  
  FUN_8205b870();
  uVar5 = FUN_8205b940();
  iVar1 = DAT_82072c98;
  pcVar3 = (char *)((ulonglong)uVar5 >> 0x20);
  pfVar4 = (float *)uVar5;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  iVar2 = DAT_82072c98;
  pcStack00000014 = pcVar3;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b98c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_82016b18();
  FUN_8201b2e8();
  FUN_82015368(pcVar3,(char *)0x0);
  *(undefined4 *)(iVar2 + 0x1c64) = 0;
  FUN_8201f8f0();
  FUN_820223d0();
  if ((param_3 & 0x20) != 0) {
    param_3 = param_3 & 0xff9fffff | 0x100008;
  }
  if ((param_3 & 8) == 0) {
    FUN_82045378();
  }
  if ((param_3 & 0x700000) == 0) {
    param_3 = *(uint *)(iVar2 + 0x2ef4) & 0x700000 | param_3;
  }
  if ((param_3 & 0x18000000) == 0) {
    param_3 = *(uint *)(iVar2 + 0x2ef4) & 0x18000000 | param_3;
  }
  if (((param_3 & 0x10000000) == 0) || ((param_3 & 0x100000) == 0)) {
    if (((param_3 & 0x8000000) != 0) && ((param_3 & 0x200000) != 0)) {
      FUN_82018bb0((double)*pfVar4,(double)pfVar4[1],(double)pfVar4[2]);
      FUN_8203e9e8();
    }
  }
  else {
    FUN_820150a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204c538 @ 8204c538 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204c538(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  FUN_8205b870();
  FUN_8205b920();
  iVar1 = DAT_82072c98;
  *(undefined1 *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8c) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x1bd8) + 0x8f) != '\0') {
    FUN_8205b96c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8201b2e8();
  *(undefined4 *)(iVar1 + 0x1c64) = 0;
  FUN_820223d0();
  FUN_8201f8f0();
  if ((param_3 & 8) == 0) {
    FUN_8204db68();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204db68 @ 8204db68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204db68(void)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  uint extraout_r4;
  int iVar7;
  uint uVar8;
  undefined4 auStack_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  FUN_8205b890();
  uVar2 = extraout_r4 & 2;
  bVar1 = (extraout_r4 & 0x6000000) == 0;
  if ((uVar2 != 0) || (bVar3 = true, (extraout_r4 & 0x10000) != 0)) {
    bVar3 = false;
  }
  if (((bVar1) || (bVar3)) && (cVar6 = FUN_82027bd8(), iVar5 = DAT_82072c98, cVar6 != '\0')) {
    if (bVar1) {
      FUN_82016b18();
      FUN_8201f890();
      uVar4 = DAT_820016c4;
      iVar7 = 0;
      do {
        if ((0 < iVar7) && (*(char *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8f) == '\0')) {
          FUN_820403b0();
        }
        FUN_82022420();
        uVar8 = uVar2 | 0x1a8;
        if (iVar7 == 0) {
          uVar8 = uVar2 | 0x20001a8;
        }
        if (iVar7 == 1) {
          uVar8 = uVar8 | 0x4000000;
        }
        FUN_82016980(auStack_88);
        cVar6 = FUN_820417a0();
        if (cVar6 != '\0') {
          *(uint *)(iVar5 + 0x2ef4) = uVar8 & 0x6000000 | *(uint *)(iVar5 + 0x2ef4) & 0xf9ffffff;
        }
        FUN_820169a0(auStack_88);
        local_74 = uVar4;
        local_78 = uVar4;
        local_7c = uVar4;
        local_80 = uVar4;
        FUN_8205d810();
        FUN_8204c538("##previewing_picker",&local_80,uVar8);
        FUN_8201b050();
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
      FUN_8201b2a8();
    }
    if (bVar3) {
      if ((bVar1) && (*(char *)(*(int *)(DAT_82072c98 + 0x1bd8) + 0x8f) == '\0')) {
        FUN_820403b0();
      }
      FUN_82042328();
    }
    FUN_820226b8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204dd98 @ 8204dd98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204dd98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204dde8 @ 8204dde8 ==== */

void FUN_8204dde8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8204e680 @ 8204e680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e680(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e6d8 @ 8204e6d8 ==== */

void FUN_8204e6d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8204e7b0 @ 8204e7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204e7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_8205b8a4();
  FUN_8204e680();
  FUN_8204e6d8();
  *puVar1 = &PTR_LAB_82006cac;
  FUN_820136e0();
  FUN_82013a20(puVar1 + 0x13,param_3,0,0xffffffff);
  puVar1[0x11] = param_4;
  puVar1[0x12] = 0;
  FUN_820136e0();
  FUN_820136e0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204e850 @ 8204e850 ==== */

void FUN_8204e850(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8204e8d8 @ 8204e8d8 ==== */

void FUN_8204e8d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8204eb90 @ 8204eb90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204eb90(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 extraout_r4;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_8205b89c();
  FUN_82052dd8(puVar1);
  *puVar1 = &PTR_LAB_82006d4c;
  FUN_820136e0();
  FUN_820136e0();
  *(undefined1 *)(puVar1 + 6) = extraout_r4;
  *(undefined1 *)((int)puVar1 + 0x1a) = param_4;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = param_3;
  iVar2 = FUN_82012468();
  FUN_82013a20(puVar1 + 9,iVar2 + 0x30,0,0xffffffff);
  FUN_82013a20(puVar1 + 0x10,iVar2 + 0x4c,0,0xffffffff);
  *(undefined1 *)(puVar1 + 0x17) = 0;
  if (*(char *)(puVar1 + 6) == '\x01') {
    puVar1[5] = 0;
  }
  else {
    uVar3 = 1;
    if (*(char *)((int)puVar1 + 0x19) != '\x01') {
      uVar3 = 2;
    }
    puVar1[5] = uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204ef10 @ 8204ef10 ==== */

void FUN_8204ef10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_82007294;
  return;
}


/* ==== FUN_8204ef28 @ 8204ef28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ef28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204efd8 @ 8204efd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204efd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f040 @ 8204f040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f040(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_8205b884();
  *puVar1 = 0;
  puVar1[1] = 0xffffffff;
  puVar1[2] = DAT_82070cf0;
  puVar1[3] = DAT_82070cf4;
  puVar1[4] = DAT_82070cf8;
  puVar1[5] = DAT_82070cfc;
  puVar1[6] = DAT_82070d00;
  puVar1[7] = DAT_82070d04;
  puVar1[8] = DAT_82070d08;
  puVar1[9] = DAT_82070d0c;
  puVar1[10] = DAT_82070d10;
  puVar1[0xb] = DAT_82070d14;
  puVar1[0xc] = DAT_82070d18;
  puVar1[0xd] = DAT_82070d1c;
  puVar1[0xe] = DAT_82070d20;
  puVar1[0xf] = DAT_82070d24;
  puVar1[0x10] = DAT_82070d28;
  puVar1[0x11] = DAT_82070d2c;
  puVar1[0x12] = DAT_82070d30;
  puVar1[0x13] = DAT_82070d34;
  puVar1[0x14] = DAT_82070d38;
  puVar1[0x15] = DAT_82070d3c;
  puVar1[0x16] = DAT_82070d40;
  puVar1[0x17] = DAT_82070d44;
  puVar1[0x18] = DAT_82070d48;
  puVar1[0x19] = DAT_82070d4c;
  puVar1[0x1a] = DAT_82070d50;
  puVar1[0x1b] = DAT_82070d54;
  puVar1[0x1c] = DAT_82070d58;
  puVar1[0x1d] = DAT_82070d5c;
  puVar1[0x1e] = DAT_82070d60;
  puVar1[0x1f] = DAT_82070d64;
  puVar1[0x20] = DAT_82070d68;
  puVar1[0x21] = DAT_82070d6c;
  puVar1[0x22] = DAT_82070d70;
  puVar1[0x23] = DAT_82070d74;
  puVar1[0x24] = DAT_82070d78;
  puVar1[0x25] = DAT_82070d7c;
  puVar1[0x26] = DAT_82070d80;
  puVar1[0x27] = DAT_82070d84;
  puVar1[0x28] = DAT_82070d88;
  puVar1[0x29] = DAT_82070d8c;
  puVar1[0x2a] = DAT_82070d90;
  puVar1[0x2b] = DAT_82070d94;
  puVar1[0x2c] = DAT_82070d98;
  puVar1[0x2d] = DAT_82070d9c;
  puVar1[0x2e] = DAT_82070da0;
  puVar1[0x2f] = DAT_82070da4;
  puVar1[0x30] = DAT_82070da8;
  puVar1[0x31] = DAT_82070dac;
  puVar1[0x32] = DAT_82070db0;
  puVar1[0x33] = DAT_82070db4;
  puVar1[0x34] = DAT_82070db8;
  puVar1[0x35] = DAT_82070dbc;
  puVar1[0x36] = DAT_82070dc0;
  puVar1[0x37] = DAT_82070dc4;
  puVar1[0x38] = DAT_82070dc8;
  puVar1[0x39] = DAT_82070dcc;
  puVar1[0x3a] = DAT_82070dd0;
  puVar1[0x3b] = DAT_82070dd4;
  puVar1[0x3c] = DAT_82070dd8;
  puVar1[0x3d] = DAT_82070ddc;
  puVar1[0x3e] = DAT_82070de0;
  puVar1[0x3f] = DAT_82070de4;
  puVar1[0x40] = DAT_82070de8;
  puVar1[0x41] = DAT_82070dec;
  puVar1[0x42] = DAT_82070df0;
  puVar1[0x43] = DAT_82070df4;
  puVar1[0x44] = DAT_82070df8;
  puVar1[0x45] = DAT_82070dfc;
  puVar1[0x46] = DAT_82070e00;
  puVar1[0x47] = DAT_82070e04;
  puVar1[0x48] = DAT_82070e08;
  puVar1[0x49] = DAT_82070e0c;
  puVar1[0x4a] = DAT_82070e10;
  puVar1[0x4b] = DAT_82070e14;
  puVar1[0x4c] = DAT_82070e18;
  puVar1[0x4d] = DAT_82070e1c;
  puVar1[0x4e] = DAT_82070e20;
  puVar1[0x4f] = DAT_82070e24;
  puVar1[0x50] = DAT_82070e28;
  puVar1[0x51] = DAT_82070e2c;
  puVar1[0x52] = DAT_82070e30;
  puVar1[0x53] = DAT_82070e34;
  puVar1[0x54] = DAT_82070e38;
  puVar1[0x55] = DAT_82070e3c;
  puVar1[0x56] = DAT_82070e40;
  puVar1[0x57] = DAT_82070e44;
  puVar1[0x58] = DAT_82070e48;
  puVar1[0x59] = DAT_82070e4c;
  puVar1[0x5a] = DAT_82070e50;
  puVar1[0x5b] = DAT_82070e54;
  puVar1[0x5c] = DAT_82070e58;
  puVar1[0x5d] = DAT_82070e5c;
  puVar1[0x5e] = DAT_82070e60;
  puVar1[0x5f] = DAT_82070e64;
  puVar1[0x60] = DAT_82070e68;
  puVar1[0x61] = DAT_82070e6c;
  puVar1[0x62] = DAT_82070e70;
  puVar1[99] = DAT_82070e74;
  puVar1[100] = DAT_82070e78;
  puVar1[0x65] = DAT_82070e7c;
  puVar1[0x66] = DAT_82070e80;
  puVar1[0x67] = DAT_82070e84;
  puVar1[0x68] = DAT_82070e88;
  puVar1[0x69] = DAT_82070e8c;
  puVar1[0x6a] = DAT_82070e90;
  puVar1[0x6b] = DAT_82070e94;
  puVar1[0x6c] = DAT_82070e98;
  puVar1[0x6d] = DAT_82070e9c;
  puVar1[0x6e] = DAT_82070ea0;
  puVar1[0x6f] = DAT_82070ea4;
  puVar1[0x70] = DAT_82070ea8;
  puVar1[0x71] = DAT_82070eac;
  puVar1[0x72] = DAT_82070eb0;
  puVar1[0x73] = DAT_82070eb4;
  puVar1[0x74] = DAT_82070eb8;
  puVar1[0x75] = DAT_82070ebc;
  puVar1[0x76] = DAT_82070ec0;
  puVar1[0x77] = DAT_82070ec4;
  puVar1[0x78] = DAT_82070ec8;
  puVar1[0x79] = DAT_82070ecc;
  puVar1[0x7a] = DAT_82070ed0;
  puVar1[0x7b] = DAT_82070ed4;
  puVar1[0x7c] = DAT_82070ed8;
  puVar1[0x7d] = DAT_82070edc;
  puVar1[0x7e] = DAT_82070ee0;
  puVar1[0x7f] = DAT_82070ee4;
  puVar1[0x80] = DAT_82070ee8;
  puVar1[0x81] = DAT_82070eec;
  puVar1[0x82] = DAT_82070ef0;
  puVar1[0x83] = DAT_82070ef4;
  puVar1[0x84] = DAT_82070ef8;
  puVar1[0x85] = DAT_82070efc;
  puVar1[0x86] = DAT_82070f00;
  puVar1[0x87] = DAT_82070f04;
  puVar1[0x88] = DAT_82070f08;
  puVar1[0x89] = DAT_82070f0c;
  puVar1[0x8a] = DAT_82070f10;
  puVar1[0x8b] = DAT_82070f14;
  puVar1[0x8c] = DAT_82070f18;
  puVar1[0x8d] = DAT_82070f1c;
  puVar1[0x8e] = DAT_82070f20;
  puVar1[0x8f] = DAT_82070f24;
  puVar1[0x90] = DAT_82070f28;
  puVar1[0x91] = DAT_82070f2c;
  puVar1[0x92] = DAT_82070f30;
  puVar1[0x93] = DAT_82070f34;
  puVar1[0x94] = DAT_82070f38;
  puVar1[0x95] = DAT_82070f3c;
  puVar1[0x96] = DAT_82070f40;
  puVar1[0x97] = DAT_82070f44;
  puVar1[0x98] = DAT_82070f48;
  puVar1[0x99] = DAT_82070f4c;
  puVar1[0x9a] = DAT_82070f50;
  puVar1[0x9b] = DAT_82070f54;
  puVar1[0x9c] = DAT_82070f58;
  puVar1[0x9d] = DAT_82070f5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f678 @ 8204f678 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f678(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f780 @ 8204f780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f780(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  uVar1 = (uint)uVar6;
  if (*(uint *)(iVar4 + 0x14) < uVar1) {
    FUN_8205a3f8();
  }
  uVar3 = *(int *)(iVar4 + 0x14) - uVar1;
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  if (param_5 <= param_3) {
    param_3 = param_5;
  }
  if (*(uint *)(iVar4 + 0x18) < 0x10) {
    iVar4 = iVar4 + 4;
  }
  else {
    iVar4 = *(int *)(iVar4 + 4);
  }
  pcVar5 = (char *)(iVar4 + uVar1);
  if (param_3 != 0) {
    pcVar2 = pcVar5 + param_3;
    do {
      if (*pcVar5 != *param_4) {
        halt_baddata();
      }
      pcVar5 = pcVar5 + 1;
      param_4 = param_4 + 1;
    } while (pcVar5 != pcVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f858 @ 8204f858 ==== */

void FUN_8204f858(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 in_r0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[3];
  if (uVar1 < (uint)(param_2[2] + param_3)) {
    trapWord(0x1f,in_r0,0x16);
  }
  param_1[2] = param_2[2] + param_3;
  param_1[3] = uVar1;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}


/* ==== FUN_8204f8c0 @ 8204f8c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f8c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f938 @ 8204f938 ==== */

void FUN_8204f938(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 in_r0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) / 0x38;
  }
  iVar3 = *(int *)(param_2 + 4);
  *param_1 = 0;
  uVar2 = (param_3 - iVar3) / 0x38;
  if (uVar1 < uVar2) {
    trapWord(0x1f,in_r0,0x16);
  }
  param_1[1] = iVar3;
  param_1[3] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== FUN_8204f990 @ 8204f990 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f990(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204f9e8 @ 8204f9e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204f9e8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  if (*(uint *)((int)uVar6 + 0x14) < param_3) {
    FUN_8205a3f8();
  }
  param_3 = *(int *)((int)uVar6 + 0x14) - param_3;
  if (param_3 < param_4) {
    param_4 = param_3;
  }
  uVar3 = *(uint *)(iVar1 + 0x14);
  if ((-uVar3 - 1 <= param_4) || (uVar3 + param_4 < uVar3)) {
    FUN_8205a390();
  }
  if (param_4 != 0) {
    iVar4 = *(int *)(iVar1 + 0x14) + param_4;
    cVar2 = FUN_820138e0();
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)(iVar1 + 4);
      FUN_8205bb60();
      *(int *)(iVar1 + 0x14) = iVar4;
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined1 *)((int)puVar5 + iVar4) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fae8 @ 8204fae8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fae8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fb58 @ 8204fb58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fb58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fbb0 @ 8204fbb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fbb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fc18 @ 8204fc18 ==== */

void FUN_8204fc18(void)

{
  FUN_82013c78();
  FUN_82053f50();
  FUN_8204ef28();
  FUN_8204fae8();
  FUN_820136e0();
  return;
}


/* ==== FUN_8204fc78 @ 8204fc78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fc78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fce8 @ 8204fce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204fce8(void)

{
  FUN_8205b89c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204fdb0 @ 8204fdb0 ==== */

void FUN_8204fdb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8204fe50 @ 8204fe50 ==== */

void FUN_8204fe50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8204ff18 @ 8204ff18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8204ff18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8204ff70 @ 8204ff70 ==== */

void FUN_8204ff70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82050020 @ 82050020 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050020(void)

{
  FUN_8205b890();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050228 @ 82050228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050228(void)

{
  FUN_8205b878();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820505a8 @ 820505a8 ==== */

void FUN_820505a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82050678 @ 82050678 ==== */

void FUN_82050678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82050710 @ 82050710 ==== */

void FUN_82050710(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82050788 @ 82050788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050810 @ 82050810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050810(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar1 != (int)uVar2) {
    do {
      FUN_82013a20(iVar1,param_3,0,0xffffffff);
      FUN_82013a20(iVar1 + 0x1c,param_3 + 0x1c,0,0xffffffff);
      iVar1 = iVar1 + 0x38;
    } while (iVar1 != (int)uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050878 @ 82050878 ==== */

void FUN_82050878(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82050920 @ 82050920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050990 @ 82050990 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050990(void)

{
  FUN_8205b894();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050b20 @ 82050b20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050b20(void)

{
  FUN_8205b888();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050de0 @ 82050de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050de0(void)

{
  FUN_8205b89c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050ef8 @ 82050ef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050ef8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82050f50 @ 82050f50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82050f50(void)

{
  FUN_8205b894();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051140 @ 82051140 ==== */

void FUN_82051140(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82051228 @ 82051228 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051228(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820512b0 @ 820512b0 ==== */

void FUN_820512b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82051360 @ 82051360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051360(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820513b8 @ 820513b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820513b8(void)

{
  FUN_8205b8a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051428 @ 82051428 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051428(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051488 @ 82051488 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051488(void)

{
  FUN_8205b874();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051cc8 @ 82051cc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051cc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051d30 @ 82051d30 ==== */

void FUN_82051d30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_82051f38 @ 82051f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82051f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82051fa0 @ 82051fa0 ==== */

void FUN_82051fa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82052030 @ 82052030 ==== */

void FUN_82052030(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82052380 @ 82052380 ==== */

void FUN_82052380(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82052418 @ 82052418 ==== */

void FUN_82052418(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820524c8 @ 820524c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820524c8(int param_1)

{
  undefined4 in_r0;
  
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 4)) {
    trapWord(0x1f,in_r0,0x16);
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052528 @ 82052528 ==== */

void FUN_82052528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82052608 @ 82052608 ==== */

void FUN_82052608(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82052760 @ 82052760 ==== */

void FUN_82052760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82052970 @ 82052970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052a58 @ 82052a58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052a58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052d00 @ 82052d00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052d00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052d58 @ 82052d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052d58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052dd8 @ 82052dd8 ==== */

void FUN_82052dd8(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_820073c0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* ==== FUN_82052e00 @ 82052e00 ==== */

undefined4 FUN_82052e00(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (uVar1 = 0, param_1[3] != param_2[3])) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== FUN_82052e50 @ 82052e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052e50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82052ec0 @ 82052ec0 ==== */

void FUN_82052ec0(void)

{
  FUN_82029838();
  FUN_82029b58();
  FUN_820194d8();
  FUN_8203be20();
  return;
}


/* ==== FUN_82052ef0 @ 82052ef0 ==== */

void FUN_82052ef0(double param_1,int param_2)

{
  *(float *)(param_2 + 0x210) = (float)param_1;
  *(undefined1 *)(param_2 + 0x20c) = 1;
  *(undefined1 *)(param_2 + 4) = 0;
  return;
}


/* ==== FUN_82052f08 @ 82052f08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82052f08(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  pfVar3 = (float *)uVar4;
  cVar2 = FUN_82027bd8();
  if (cVar2 == '\x01') {
    cVar2 = FUN_82042310();
    if (cVar2 == '\x01') {
      DAT_82072d98 = 1;
      *(float *)(iVar1 + 0x218) = *pfVar3;
      *(float *)(iVar1 + 0x21c) = pfVar3[1];
      *(float *)(iVar1 + 0x220) = pfVar3[2];
      *(float *)(iVar1 + 0x224) = pfVar3[3];
    }
    cVar2 = FUN_82042310();
    if (cVar2 == '\x01') {
      *pfVar3 = *(float *)(iVar1 + 0x218);
      pfVar3[1] = *(float *)(iVar1 + 0x21c);
      pfVar3[2] = *(float *)(iVar1 + 0x220);
      pfVar3[3] = *(float *)(iVar1 + 0x224);
    }
    FUN_82052e00(pfVar3,param_4);
    cVar2 = FUN_82042310();
    if (cVar2 == '\x01') {
      *pfVar3 = *param_4;
      pfVar3[1] = param_4[1];
      pfVar3[2] = param_4[2];
      pfVar3[3] = param_4[3];
    }
    cVar2 = FUN_82042310();
    if (cVar2 == '\x01') {
      *pfVar3 = *param_3;
      pfVar3[1] = param_3[1];
      pfVar3[2] = param_3[2];
      pfVar3[3] = param_3[3];
    }
    FUN_820226b8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053098 @ 82053098 ==== */

void FUN_82053098(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82053180 @ 82053180 ==== */

void FUN_82053180(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_82053308 @ 82053308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053360 @ 82053360 ==== */

void FUN_82053360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82053638 @ 82053638 ==== */

void FUN_82053638(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820536e8 @ 820536e8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_820536e8(void)

{
  FUN_8205b884();
  FUN_8205b950();
  FUN_82012538();
  FUN_82012468();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== entry @ 82053a40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void entry(void)

{
  byte bVar1;
  byte in_r10;
  byte in_r11;
  int unaff_r31;
  
  *(byte *)(unaff_r31 + 0x204) = in_r10 | in_r11;
  bVar1 = FUN_82053180();
  *(byte *)(unaff_r31 + 0x204) = bVar1 | *(byte *)(unaff_r31 + 0x204);
  FUN_820222e8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053ed0 @ 82053ed0 ==== */

void FUN_82053ed0(void)

{
                    /* WARNING: Could not recover jumptable at 0x82053ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam82072c94)();
  return;
}


/* ==== FUN_82053ee8 @ 82053ee8 ==== */

void FUN_82053ee8(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_820078b4;
  FUN_8204fae8();
  return;
}


/* ==== FUN_82053ef8 @ 82053ef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053ef8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053f50 @ 82053f50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82053f50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82053fa8 @ 82053fa8 ==== */

void FUN_82053fa8(void)

{
  FUN_82013c78();
  FUN_82053f50();
  FUN_8204ef28();
  FUN_8204fae8();
  FUN_820136e0();
  return;
}


/* ==== FUN_82054008 @ 82054008 ==== */

void FUN_82054008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820541b8 @ 820541b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820541b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054270 @ 82054270 ==== */

void FUN_82054270(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82054328 @ 82054328 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054328(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054398 @ 82054398 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054398(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820543e8 @ 820543e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820543e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054460 @ 82054460 ==== */

void FUN_82054460(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82054868 @ 82054868 ==== */

void FUN_82054868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82054c30 @ 82054c30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82054c30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82054e60 @ 82054e60 ==== */

void FUN_82054e60(undefined1 *param_1)

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


/* ==== FUN_82054e88 @ 82054e88 ==== */

void FUN_82054e88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82055048 @ 82055048 ==== */

void FUN_82055048(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820550c8 @ 820550c8 ==== */

undefined4 FUN_820550c8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_82055048();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


/* ==== FUN_820550f8 @ 820550f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820550f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055140 @ 82055140 ==== */

void FUN_82055140(void)

{
  syscall(0);
  return;
}


/* ==== FUN_82055150 @ 82055150 ==== */

void FUN_82055150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820551b8 @ 820551b8 ==== */

bool FUN_820551b8(void)

{
  int iVar1;
  
  iVar1 = FUN_820558b0();
  if (iVar1 != -1) {
    FUN_82055588();
  }
  return iVar1 != -1;
}


/* ==== FUN_82055208 @ 82055208 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055208(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820552e0 @ 820552e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820552e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055328 @ 82055328 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_82055328(void)

{
  return *(undefined4 *)(_UNK_8200046c + 0x10);
}


/* ==== FUN_82055338 @ 82055338 ==== */

void FUN_82055338(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== thunk_FUN_8205f1e0 @ 820553f8 ==== */

int thunk_FUN_8205f1e0(short *param_1)

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


/* ==== FUN_82055400 @ 82055400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_8206c2c0 @ 82055498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_8206c2c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820554a0 @ 820554a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820554a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055578 @ 82055578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055578(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055588 @ 82055588 ==== */

bool FUN_82055588(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_8207154c + 4))();
  if (iVar1 < 0) {
    FUN_82056380();
  }
  return iVar1 >= 0;
}


/* ==== FUN_820555d0 @ 820555d0 ==== */

void FUN_820555d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820555d8 @ 820555d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820555d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_820563b8 @ 82055630 ==== */

undefined4 thunk_FUN_820563b8(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_82055638 @ 82055638 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055638(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820556c8 @ 820556c8 ==== */

/* WARNING: Removing unreachable block (ram,0x820566e8) */

undefined4
FUN_820556c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  iVar1 = func_0x8206c370(auStack_10,param_2,param_6,&LAB_82054810,param_3,param_4,param_5 >> 2 & 1)
  ;
  if (iVar1 < 0) {
    FUN_82056380();
    auStack_10[0] = 0;
  }
  return auStack_10[0];
}


/* ==== thunk_EXT_FUN_8206c430 @ 820556d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_8206c430(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820556e0 @ 820556e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820556e0(char *param_1)

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


/* ==== FUN_820557b0 @ 820557b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820557b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055838 @ 82055838 ==== */

bool FUN_82055838(void)

{
  int iVar1;
  
  iVar1 = func_0x8206c490();
  if (-1 >= iVar1) {
    thunk_FUN_82056380();
  }
  return -1 < iVar1;
}


/* ==== FUN_82055870 @ 82055870 ==== */

undefined4 FUN_82055870(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = func_0x8206c340(param_1,local_10);
  if (iVar1 < 0) {
    FUN_82056380();
    local_10[0] = 0;
  }
  return local_10[0];
}


/* ==== FUN_820558b0 @ 820558b0 ==== */

void FUN_820558b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82055aa8 @ 82055aa8 ==== */

void FUN_82055aa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82055b60 @ 82055b60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055b60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82055be0 @ 82055be0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82055be0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_82056368 @ 82056020 ==== */

void thunk_FUN_82056368(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_82056028 @ 82056028 ==== */

void FUN_82056028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82056160 @ 82056160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056160(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  
  uVar12 = FUN_8205b888();
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
      uVar2 = (int)*(char *)(bVar1 + 0x820719e0) & 0xffff;
      iVar5 = iVar4;
      if (iVar8 <= (int)(pbVar7 + (uVar2 - (int)pbVar3))) break;
      if (uVar2 == 0) {
LAB_82056288:
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar11 = iVar11 + 1;
        iVar9 = (uint)bVar1 + iVar9;
      }
      else {
        if (uVar2 == 1) {
LAB_82056274:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82056288;
        }
        if (uVar2 < 3) {
LAB_82056260:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82056274;
        }
        if (uVar2 == 3) {
LAB_8205624c:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_82056260;
        }
        if (uVar2 < 5) {
LAB_82056238:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = ((uint)bVar1 + iVar9) * 0x40;
          goto LAB_8205624c;
        }
        if (uVar2 == 5) {
          pbVar7 = pbVar7 + 1;
          iVar11 = iVar11 + 1;
          iVar9 = (uint)bVar1 << 6;
          goto LAB_82056238;
        }
      }
      uVar10 = iVar9 - *(int *)(uVar2 * 4 + -0x7df8e638);
      uVar2 = uVar10;
      if ((uRam820719ac < uVar10) && (uVar2 = uRam820719a8, uVar10 <= uRam820719b0)) {
        uVar10 = uVar10 - iRam820719b8;
        if (iVar4 + 1 <= param_4) {
          psVar6[1] = (short)(uVar10 >> (uRam820719b4 & 0x3f)) + (short)uRam820719c0;
          psVar6 = psVar6 + 1;
        }
        iVar5 = iVar4 + 2;
        if (iVar5 <= param_4) {
          psVar6 = psVar6 + 1;
          *psVar6 = ((ushort)uRam820719bc & (ushort)uVar10) + (short)uRam820719c4;
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
    thunk_FUN_82056368(0x7a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056368 @ 82056368 ==== */

void FUN_82056368(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_82056380 @ 82056380 ==== */

void FUN_82056380(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x8206c440();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_820563b8 @ 820563b8 ==== */

undefined4 FUN_820563b8(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_820563d8 @ 820563d8 ==== */

void FUN_820563d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82056440 @ 82056440 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056440(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820564e0 @ 820564e0 ==== */

void FUN_820564e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82056668 @ 82056668 ==== */

int FUN_82056668(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int aiStack_10 [4];
  
  iVar1 = (**(code **)(DAT_8207154c + 0x18))(param_1,0,0,0,aiStack_10,param_2,param_3,0);
  if (-1 < iVar1) {
    iVar1 = aiStack_10[0];
  }
  return iVar1;
}


/* ==== thunk_FUN_82056380 @ 82056738 ==== */

void thunk_FUN_82056380(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x8206c440();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_82056740 @ 82056740 ==== */

uint FUN_82056740(void)

{
  int iVar1;
  uint uVar2;
  undefined2 auStack_10 [2];
  uint auStack_c [3];
  
  auStack_10[0] = 0;
  iVar1 = func_0x8206c4c0(3,9,auStack_c,4,auStack_10);
  auStack_c[0] = 0xffffffffU - (iVar1 >> 0x1f) & auStack_c[0];
  if ((auStack_c[0] == 0) || (0x11 < auStack_c[0])) {
    uVar2 = func_0x8206c320();
    if ((uVar2 & 0xff00) == 0x100) {
      if (uVar2 == 0x101) {
        auStack_c[0] = 2;
      }
      else {
        auStack_c[0] = 7;
      }
    }
    else {
      auStack_c[0] = 1;
    }
  }
  return auStack_c[0];
}


/* ==== FUN_820567d0 @ 820567d0 ==== */

undefined4 FUN_820567d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam8207325c;
  uRam8207325c = param_1;
  return uVar1;
}


/* ==== FUN_820567e8 @ 820567e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820567e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056878 @ 82056878 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_82056878(void)

{
  return _UNK_820004cc;
}


/* ==== FUN_82056888 @ 82056888 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056888(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056968 @ 82056968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820569e0 @ 820569e0 ==== */

void FUN_820569e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82056a48 @ 82056a48 ==== */

void FUN_82056a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82056ab8 @ 82056ab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056ab8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056b90 @ 82056b90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_82056b90(void)

{
  int iVar1;
  
  iVar1 = FUN_82056ab8();
  if (iVar1 == 0) {
    if (*_UNK_820004c8 != 0) {
      (**(code **)(*_UNK_820004c8 + 0x18))(2,0);
    }
    func_0x8206c3e0(1);
  }
  return;
}


/* ==== FUN_82056be8 @ 82056be8 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_82056be8(undefined4 param_1,int param_2)

{
  if (param_2 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056c90 @ 82056c90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056d30 @ 82056d30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82056d30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82056f08 @ 82056f08 ==== */

void FUN_82056f08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82057028 @ 82057028 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057028(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

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
  
  uVar12 = FUN_8205b89c();
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
    iVar2 = func_0x8206c5c0(local_50,param_3,0x60001000,4,*(undefined4 *)(iVar2 + 0x590));
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


/* ==== FUN_820572b8 @ 820572b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820572b8(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

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
  
  uVar10 = FUN_8205b89c();
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
          func_0x8206c600(puVar8 + 0xc,uVar5,0xfeeefeee);
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
        func_0x8206c600(puVar9 + 0xc,uVar5,0xfeeefeee);
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
          func_0x8206c600(puVar8 + 0xc,uVar5,0xfeeefeee);
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
        func_0x8206c600(puVar9 + 0xc,uVar5,0xfeeefeee);
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


/* ==== FUN_820576c0 @ 820576c0 ==== */

void FUN_820576c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820577f8 @ 820577f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820577f8(undefined4 param_1,undefined4 param_2,ushort *param_3,uint param_4,uint param_5)

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
  
  uVar13 = FUN_8205b890();
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
      func_0x8206c600(puVar12 + 0xc,uVar10,0xfeeefeee);
    }
    *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar12;
    uVar10 = local_60[0];
  }
  else {
    local_60[0] = (param_5 - local_60[0]) * 0x10 + 0xffff & 0xffff0000;
    iVar4 = FUN_82057028(iVar3,*(undefined4 *)((*(byte *)(param_3 + 2) + 0x18) * 4 + iVar3),local_60
                         ,(int)puVar12);
    if (iVar4 == 0) {
      halt_baddata();
    }
    local_60[0] = local_60[0] >> 4;
    iVar4 = FUN_820572b8(iVar3,iVar4,(int *)local_60,0);
    bVar2 = *(byte *)(iVar4 + 5);
    uVar10 = *param_3 + local_60[0];
    if (*param_3 + local_60[0] < param_5) {
      FUN_820576c0();
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
    goto LAB_82057d3c;
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
        func_0x8206c600(puVar11 + 0xc,uVar5,0xfeeefeee);
      }
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar11;
      local_60[0] = *puVar11 + local_60[0];
      *(byte *)((int)puVar12 + 5) = bVar1;
      if (0xf000 < local_60[0]) {
        FUN_820576c0();
        goto LAB_82057d3c;
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
        goto LAB_82057d04;
      }
      goto LAB_82057ca4;
    }
    *(byte *)((int)puVar12 + 5) = bVar2 & 0xef;
    *puVar12 = uVar9;
    puVar12[local_60[0] * 8 + 1] = uVar9;
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
    if ((local_60[0] & 0xffff) < 0x80) goto LAB_82057b54;
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
LAB_82057b54:
      uVar5 = local_60[0] & 0xffff;
LAB_82057ca4:
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
LAB_82057d04:
  puVar6 = (undefined4 *)piVar7[1];
  *(int **)(puVar12 + 4) = piVar7;
  *(undefined4 **)(puVar12 + 6) = puVar6;
  *puVar6 = puVar12 + 4;
  piVar7[1] = (int)(puVar12 + 4);
  *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + local_60[0];
LAB_82057d3c:
  if (((uVar13 & 8) != 0) && (uVar10 < param_4)) {
    FUN_8205bac0((uint *)((int)param_3 + uVar10 + 0x10),0,param_4 - uVar10);
  }
  *(byte *)((int)param_3 + 5) =
       (byte)((uint)uVar13 >> 4) & 0xe0 | *(byte *)((int)param_3 + 5) & 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057d78 @ 82057d78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057e20 @ 82057e20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057e20(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  
  uVar8 = FUN_8205b890();
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
    iVar3 = func_0x8206c5c0(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar2 + 0x2c8));
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
    FUN_82056f08();
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_820576c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82057f88 @ 82057f88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82057f88(void)

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
  
  uVar7 = FUN_8205b8a4();
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
            (iVar2 = FUN_82057028(iVar1,local_3c,&local_38,0), iVar2 != 0)) {
      local_38 = local_38 >> 4;
      FUN_820572b8(iVar1,iVar2,(int *)&local_38,0);
      FUN_820576c0();
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
    iVar2 = func_0x8206c5c0(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
    if (iVar2 < 0) {
      do {
        if (local_40 == uVar6) break;
        local_40 = local_40 >> 1;
        if (local_40 < uVar6) {
          local_40 = uVar6;
        }
        iVar2 = func_0x8206c5c0(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
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
    iVar2 = func_0x8206c5c0(&local_3c,local_34,0x60001000,4,*(undefined4 *)(iVar1 + 0x590));
    if (-1 < iVar2) {
      iVar3 = FUN_82057e20(iVar1,local_3c,uVar4,0,(undefined2 *)local_3c,local_34[0] + local_3c,
                           local_40 + local_3c);
      if (iVar3 == 0) {
        iVar2 = -0x3fffffe9;
      }
      if (-1 < iVar2) {
        halt_baddata();
      }
    }
    func_0x8206c5f0(&local_3c,&local_40,0x8000,*(undefined4 *)(iVar1 + 0x590));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820581c8 @ 820581c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820581c8(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar14 = FUN_8205b884();
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
    if ((uStack_80 != 0) && (puVar3 = (undefined4 *)FUN_82056d30(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = func_0x8206c5f0(apuStack_7c,&uStack_80,0x4000,*(undefined4 *)(iVar2 + 0x590));
      *puVar3 = *(undefined4 *)(*(int *)(iVar11 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar11 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_82056f08();
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
  FUN_820576c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058530 @ 82058530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058530(void)

{
  FUN_8205b888();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82058b00 @ 82058b00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82058b00(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar18 = FUN_8205b890();
  iVar4 = (int)((ulonglong)uVar18 >> 0x20);
  local_dc = (uint *)0x0;
  local_d8 = 0;
  local_c4 = iVar4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar5 = func_0x8206c5e0(), *(byte *)(iVar4 + 0x17b) != uVar5)) {
    func_0x8206c5d0(0xf4,iVar4,local_8,0x5ea,param_3);
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
    func_0x8206c3d0(*(undefined4 *)(iVar4 + 0x580));
    local_d8 = 1;
  }
  if (0x7f < uVar8) {
    if (*(uint *)(iVar4 + 0x1c) < uVar8) {
      if ((*(uint *)(iVar4 + 0x14) & 2) != 0) {
        local_e8 = local_e8 + 0x20;
        local_ec = (uint *)0x0;
        iVar7 = func_0x8206c5c0(&local_ec,&local_e8,(~uVar15 & 8) << 0x14 | 0x60001000,4,
                                *(undefined4 *)(iVar4 + 0x590));
        if (-1 < iVar7) {
          FUN_8205bac0(local_ec,0,0x30);
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
          goto LAB_82059368;
        }
      }
    }
    else {
LAB_82058db8:
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
            goto LAB_82058e8c;
          }
        }
      }
      local_e4 = (ushort *)FUN_82057f88();
      if (local_e4 != (ushort *)0x0) {
        piVar12 = *(int **)(local_e4 + 6);
        iVar7 = *(int *)(local_e4 + 4);
        if (((ushort *)*piVar12 == *(ushort **)(iVar7 + 4)) && ((ushort *)*piVar12 == local_e4 + 4))
        {
          *piVar12 = iVar7;
          *(int **)(iVar7 + 4) = piVar12;
        }
        goto LAB_82058e8c;
      }
    }
    if ((uVar15 & 4) != 0) {
      local_b0 = 0xc0000017;
      local_a8 = 0;
      local_a0 = 1;
      local_ac = 0;
      local_9c = local_e8;
      func_0x8206c480(&local_b0);
    }
    local_dc = (uint *)0x0;
    goto LAB_82059368;
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
        goto LAB_82058ce0;
      }
      iVar7 = iVar4 + 0x180;
    }
    else if (uVar5 == 1) {
LAB_82058ce0:
      if (local_d4 == 0) {
        local_d4 = *local_e0;
        local_e0 = local_e0 + 1;
        goto LAB_82058d00;
      }
      iVar7 = iVar4 + 0x280;
    }
    else {
      if (uVar5 < 3) {
LAB_82058d00:
        if (local_d4 != 0) {
          iVar7 = iVar4 + 0x380;
          goto LAB_82058d2c;
        }
        local_d4 = *local_e0;
        local_e0 = local_e0 + 1;
      }
      else if (uVar5 != 3) goto LAB_82058db8;
      if (local_d4 == 0) goto LAB_82058db8;
      iVar7 = iVar4 + 0x480;
    }
LAB_82058d2c:
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
LAB_82058e8c:
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
                goto LAB_82059020;
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
            goto LAB_82059024;
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
            goto LAB_820591e4;
          }
          FUN_820576c0();
        }
        else {
          if (uVar3 < 0x80) {
            piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar4);
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            if ((int *)*piVar12 == piVar12) {
              iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar7 + iVar4);
LAB_82059020:
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
LAB_82059024:
          puVar13 = (undefined4 *)piVar12[1];
          *(int **)(puVar17 + 4) = piVar12;
          *(undefined4 **)(puVar17 + 6) = puVar13;
          *puVar13 = puVar17 + 4;
          piVar12[1] = (int)(puVar17 + 4);
          iVar7 = uVar5 + *(int *)(iVar4 + 0x30);
LAB_820591e4:
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
    func_0x8206c3c0(*(undefined4 *)(iVar4 + 0x580));
    local_d8 = 0;
  }
  if ((uVar15 & 8) != 0) {
    FUN_8205bac0(puVar6,0,param_3);
  }
LAB_82059368:
  FUN_820593a8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820593a8 @ 820593a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820593a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820593f8 @ 820593f8 ==== */

void FUN_820593f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8205969c @ 8205969c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205969c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820596f0 @ 820596f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820596f0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

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
  
  uVar18 = FUN_8205b884();
  iVar3 = (int)((ulonglong)uVar18 >> 0x20);
  local_e0 = 0;
  iStack00000014 = iVar3;
  iStack00000024 = param_3;
  piStack0000002c = param_4;
  if (((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) &&
     (uVar2 = func_0x8206c5e0(), *(byte *)(iVar3 + 0x17b) != uVar2)) {
    func_0x8206c5d0(0xf4,iVar3,local_8,0xc7c,param_3);
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
    func_0x8206c3d0(*(undefined4 *)(iVar3 + 0x580));
    uVar2 = uVar2 ^ 1;
    local_e0 = 1;
  }
  puVar17 = (ushort *)(param_3 + -0x10);
  bVar1 = *(byte *)(param_3 + -0xb);
  local_c4 = puVar17;
  if ((bVar1 & 1) == 0) goto LAB_82059f04;
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
       (iVar4 = FUN_820577f8(iVar3,uVar2,puVar17,(uint)param_4,local_dc), iVar10 = iStack00000024,
       iVar4 != 0)) goto LAB_82059ed0;
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
      iVar5 = FUN_82058b00(iVar3,uVar14 & 0xfffffff7,(uint)param_4);
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
        FUN_8205c390(iVar5,param_3,(uint)piVar6);
        if ((piVar8 < param_4) && ((uVar14 & 8) != 0)) {
          FUN_8205bac0((uint *)(iVar5 + (int)piVar8),0,(int)param_4 - (int)piVar8);
        }
        FUN_820593f8();
      }
      goto LAB_82059ed0;
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
      FUN_8205bac0((uint *)((int)piVar8 + param_3),0,(int)param_4 - (int)piVar8);
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
            if ((uVar2 & 0xffff) < 0x80) goto LAB_82059a78;
            for (piVar8 = *(int **)(iVar3 + 0x180);
                (local_d0 = piVar8, (int *)(iVar3 + 0x180) != piVar8 &&
                (local_e4 = piVar8 + -2, (uint)*(ushort *)(piVar8 + -2) < (uVar2 & 0xffff)));
                piVar8 = (int *)*piVar8) {
            }
            goto LAB_82059ab0;
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
            func_0x8206c600(puVar17 + 0xc,local_cc,0xfeeefeee);
          }
          *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - (uint)*puVar17;
          uVar2 = *puVar17 + uVar2;
          if (0xf000 < uVar2) {
            FUN_820576c0();
            iVar10 = iStack00000024;
            goto LAB_82059ed0;
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
LAB_82059a78:
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
LAB_82059ab0:
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
        iVar3 = func_0x8206c5f0(&local_d8,&local_e8,0x8000,*(undefined4 *)(iVar3 + 0x590));
        iVar10 = iStack00000024;
        if (-1 < iVar3) {
          *(int *)(param_3 + -0x18) = *(int *)(param_3 + -0x18) - local_e8;
        }
      }
    }
LAB_82059ed0:
    iStack00000024 = iVar10;
    uVar2 = uVar14;
    if (iVar5 != 0) goto LAB_82059f04;
  }
  if ((uVar2 & 4) != 0) {
    local_c0 = 0xc0000017;
    local_b8 = 0;
    local_b0 = 1;
    local_bc = 0;
    local_ac = uVar15;
    func_0x8206c480(&local_c0);
  }
LAB_82059f04:
  FUN_82059f58();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059f58 @ 82059f58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82059f58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82059fd0 @ 82059fd0 ==== */

undefined4 FUN_82059fd0(void)

{
  return DAT_82073254;
}


/* ==== FUN_82059fe0 @ 82059fe0 ==== */

void FUN_82059fe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205a050 @ 8205a050 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a050(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a0e8 @ 8205a0e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a0e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a140 @ 8205a140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a188 @ 8205a188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a1e0 @ 8205a1e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a1e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a2a0 @ 8205a2a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a2a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a300 @ 8205a300 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a300(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a390 @ 8205a390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a3f8 @ 8205a3f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a3f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a458 @ 8205a458 ==== */

void FUN_8205a458(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 4))();
  FUN_8205a300("exception: ",uVar1);
  return;
}


/* ==== FUN_8205a498 @ 8205a498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205a498(undefined4 param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  int local_b0 [2];
  int local_a8 [2];
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  uint local_98;
  undefined2 *local_94;
  undefined4 local_90;
  undefined4 local_80;
  uint auStack_7c [10];
  int local_54;
  
  uVar6 = FUN_8205b89c();
  pcVar2 = (char *)((ulonglong)uVar6 >> 0x20);
  local_a0 = 0;
  local_a8[0] = 0;
  local_9e = 0;
  local_9c = 0;
  local_9a = 0;
  local_a8[1] = 0;
  local_b0[0] = 0;
  bVar1 = false;
  local_80 = 0;
  FUN_8205bac0(auStack_7c,0,0x34);
  iVar5 = 0;
  func_0x8206c3a0(&local_a0,pcVar2);
  local_98 = 0xfffffffd;
  if (pcVar2 != (char *)0x0) {
    local_98 = -(uint)(*pcVar2 != '\\') & 0xfffffffd;
  }
  local_90 = 0x40;
  local_94 = &local_a0;
  iVar3 = func_0x8206c570(local_b0,0x80100080,&local_98,local_a8,0,0x80,1,1);
  if (iVar3 != 0) {
    halt_baddata();
  }
  iVar3 = func_0x8206c520(local_b0[0],local_a8,&local_80,0x38,0x22);
  if (iVar3 == 0) {
    iVar5 = func_0x8206c630(local_54 + 1);
    if (iVar5 == 0) {
      puVar4 = &DAT_820093d8;
    }
    else {
      iVar3 = func_0x8206c560(local_b0[0],0,0,0,local_a8,iVar5,local_54,0);
      if (iVar3 == 0x103) {
        iVar3 = func_0x8206c590(local_b0[0],1,0,0);
      }
      if ((iVar3 == 0) && (-1 < local_a8[0])) {
        *(undefined1 *)(local_54 + iVar5) = 0;
        bVar1 = true;
        *(int *)uVar6 = iVar5;
        *param_3 = local_54 + 1;
        goto LAB_8205a63c;
      }
      puVar4 = &DAT_82009380;
      local_54 = local_a8[0];
    }
  }
  else {
    puVar4 = &DAT_82009440;
    local_54 = iVar3;
  }
  func_0x8206c350(puVar4,local_54);
LAB_8205a63c:
  if ((!bVar1) && (iVar5 != 0)) {
    func_0x8206c620(iVar5);
  }
  if (local_b0[0] != 0) {
    func_0x8206c4a0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205a678 @ 8205a678 ==== */

void FUN_8205a678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205a7a0 @ 8205a7a0 ==== */

uint FUN_8205a7a0(char *param_1)

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
    uVar1 = *(uint *)(&UNK_82008f80 + (((int)cVar2 ^ uVar1) & 0xff) * 4) ^ uVar1 >> 8;
    cVar2 = *param_1;
  }
  return ~uVar1;
}


/* ==== FUN_8205a808 @ 8205a808 ==== */

int FUN_8205a808(char *param_1)

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


/* ==== FUN_8205ab58 @ 8205ab58 ==== */

undefined4 FUN_8205ab58(int *param_1,int param_2)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  sVar2 = *(short *)(param_2 + 0xe);
  pfVar5 = (float *)(*(int *)(param_2 + 0x10) + *param_1);
  if (((sVar2 == 0) || (sVar2 == 1)) || (sVar2 == 2)) {
    cVar4 = FUN_8205a678();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  else if (sVar2 == 3) {
    uVar3 = *(ushort *)(param_2 + 0xc);
    iVar6 = 0;
    uVar7 = 0xc;
    local_20[0] = 0;
    iVar8 = 4;
    do {
      fVar1 = *pfVar5;
      if ((1 << (uVar7 & 0x3f) & (uint)uVar3) != 0) {
        fVar1 = fVar1 * DAT_82001758;
      }
      pfVar5 = pfVar5 + 1;
      uVar7 = uVar7 - 4;
      local_18 = (longlong)(fVar1 * DAT_82001730);
      *(undefined1 *)((int)local_20 + iVar6) = (undefined1)local_18;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    cVar4 = FUN_8205a678();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_8205aca0 @ 8205aca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205aca0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_r7;
  int in_r8;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)FUN_8205b8a4();
  if (((in_r7 != 0) && (in_r8 != 0)) && (uVar5 = 0, piVar1[2] != 0)) {
    iVar4 = 0;
    do {
      iVar2 = func_0x8206c3f0(in_r7,0xffffffff,*(undefined4 *)(piVar1[1] + iVar4 + 8),0xffffffff,1);
      if (iVar2 == 0) {
        uVar3 = FUN_8205ab58(piVar1,uVar5 * 0x14 + piVar1[1]);
        if ((uVar3 & 0xff) == 0) {
          halt_baddata();
        }
        *(undefined1 *)(piVar1[6] + uVar5) = 1;
        halt_baddata();
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (uVar5 < (uint)piVar1[2]);
  }
  FUN_8205a678();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205ad68 @ 8205ad68 ==== */

bool FUN_8205ad68(void)

{
  char cVar1;
  
  cVar1 = FUN_8205b470();
  if (cVar1 == '\0') {
    func_0x8206c350(&DAT_820095e8);
  }
  return cVar1 != '\0';
}


/* ==== FUN_8205add8 @ 8205add8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205add8(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_8205b8a4();
  piVar2 = (int *)((ulonglong)uVar7 >> 0x20);
  bVar1 = false;
  uVar6 = 0;
  if (piVar2[2] != 0) {
    iVar5 = 0;
    do {
      if ((*(char *)(piVar2[6] + uVar6) == '\0') &&
         (iVar3 = func_0x8206c3f0((int)uVar7,0xffffffff,*(undefined4 *)(iVar5 + piVar2[1]),
                                  0xffffffff,1), iVar3 == 0)) {
        uVar4 = FUN_8205ab58(piVar2,iVar5 + piVar2[1]);
        if ((uVar4 & 0xff) == 0) {
          halt_baddata();
        }
        bVar1 = true;
        *(undefined1 *)(piVar2[6] + uVar6) = 1;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x14;
    } while (uVar6 < (uint)piVar2[2]);
  }
  if (bVar1) {
    FUN_8205a678();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205aea8 @ 8205aea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205aea8(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int local_40 [16];
  
  uVar2 = FUN_8205b8a4();
  local_40[0] = 0;
  local_40[1] = 0;
  cVar3 = FUN_8205a498(uVar2,local_40,local_40 + 1);
  iVar1 = local_40[0];
  if ((cVar3 != '\0') && (bVar4 = FUN_8205ad68(), !bVar4)) {
    func_0x8206c350(&DAT_82009638);
  }
  if (iVar1 != 0) {
    func_0x8206c620(iVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205af38 @ 8205af38 ==== */

void FUN_8205af38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_8205b220 @ 8205b220 ==== */

undefined4 FUN_8205b220(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_8205b268 @ 8205b268 ==== */

undefined4 FUN_8205b268(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
LAB_8205b410:
    if (cVar1 == '\r') goto LAB_8205b418;
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
          while (cVar1 = FUN_8205b220(cVar1), cVar1 == '\x01') {
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
        goto LAB_8205b44c;
      }
      goto LAB_8205b410;
    }
LAB_8205b418:
    if (pcVar4[1] != '\n') {
      return 0;
    }
  }
  while (cVar1 != '\n') {
    if ((cVar1 == '\0') || (cVar1 == '\n')) {
      pcVar4 = (char *)0x0;
      goto LAB_8205b44c;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = pcVar4 + 1;
LAB_8205b44c:
  *param_1 = (int)pcVar4;
  return 1;
}


/* ==== FUN_8205b470 @ 8205b470 ==== */

void FUN_8205b470(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8205b590 @ 8205b590 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b590(undefined4 param_1,undefined4 param_2,code *param_3,code *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  uint uVar5;
  code *pcVar7;
  undefined8 uVar8;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  undefined1 uStack_2f0;
  uint auStack_2ef [31];
  undefined1 uStack_271;
  undefined1 uStack_270;
  uint auStack_26f [155];
  
  uVar8 = FUN_8205b884();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  pcVar7 = (code *)uVar8;
  uStack_2f0 = 0;
  FUN_8205bac0(auStack_2ef,0,0x7f);
  uStack_270 = 0;
  FUN_8205bac0(auStack_26f,0,0x1ff);
  if ((iVar4 != 0) &&
     ((iStack_300 = iVar4, pcVar7 == (code *)0x0 ||
      (cVar6 = (*pcVar7)(param_5,&uStack_2f0), cVar6 != '\0')))) {
    do {
      cVar6 = FUN_8205b268(&iStack_300,&iStack_2f4,&iStack_2f8,&iStack_2fc);
      iVar3 = iStack_2f4;
      iVar2 = iStack_2f8;
      iVar1 = iStack_2fc;
      iVar4 = iStack_300;
      if (cVar6 == '\0') {
        halt_baddata();
      }
      if (iStack_2f4 == 0) {
        uVar5 = FUN_8205b9b8();
      }
      else {
        if ((param_3 != (code *)0x0) && (cVar6 = (*param_3)(param_5,&uStack_2f0), cVar6 == '\0')) {
          halt_baddata();
        }
        FUN_8205c2e8(&uStack_2f0,iVar3,0x80);
        uStack_271 = 0;
        uVar5 = FUN_8205b9b8();
      }
      if (((int)uVar5 < 0) || (0x1ff < uVar5)) {
        func_0x8206c350(&UNK_82009800);
        halt_baddata();
      }
      cVar6 = (*param_4)(param_5,&uStack_270,uVar5,&uStack_2f0,iVar2,iVar1);
      if (cVar6 == '\0') {
        halt_baddata();
      }
      if (((iVar3 != 0) && (pcVar7 != (code *)0x0)) &&
         (cVar6 = (*pcVar7)(param_5,iVar3), cVar6 == '\0')) {
        halt_baddata();
      }
    } while (iVar4 != 0);
    if (param_3 != (code *)0x0) {
      (*param_3)(param_5,&uStack_2f0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b870 @ 8205b870 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b870(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b874 @ 8205b874 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b874(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b878 @ 8205b878 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b878(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b87c @ 8205b87c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b87c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b880 @ 8205b880 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b880(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b884 @ 8205b884 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b884(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b888 @ 8205b888 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b888(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b88c @ 8205b88c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b88c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b890 @ 8205b890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b890(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b894 @ 8205b894 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b894(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b898 @ 8205b898 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b898(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b89c @ 8205b89c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b89c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b8a0 @ 8205b8a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b8a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b8a4 @ 8205b8a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b8a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b8a8 @ 8205b8a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b8a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b8ac @ 8205b8ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205b8ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205b920 @ 8205b920 ==== */

void FUN_8205b920(void)

{
  int in_r12;
  undefined8 unaff_f14;
  undefined8 unaff_f15;
  undefined8 unaff_f16;
  undefined8 unaff_f17;
  undefined8 unaff_f18;
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
  
  *(undefined8 *)(in_r12 + -0x90) = unaff_f14;
  *(undefined8 *)(in_r12 + -0x88) = unaff_f15;
  *(undefined8 *)(in_r12 + -0x80) = unaff_f16;
  *(undefined8 *)(in_r12 + -0x78) = unaff_f17;
  *(undefined8 *)(in_r12 + -0x70) = unaff_f18;
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


/* ==== FUN_8205b930 @ 8205b930 ==== */

void FUN_8205b930(void)

{
  int in_r12;
  undefined8 unaff_f18;
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
  
  *(undefined8 *)(in_r12 + -0x70) = unaff_f18;
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


/* ==== FUN_8205b93c @ 8205b93c ==== */

void FUN_8205b93c(void)

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


/* ==== FUN_8205b940 @ 8205b940 ==== */

void FUN_8205b940(void)

{
  int in_r12;
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


/* ==== FUN_8205b944 @ 8205b944 ==== */

void FUN_8205b944(void)

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


/* ==== FUN_8205b94c @ 8205b94c ==== */

void FUN_8205b94c(void)

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


/* ==== FUN_8205b950 @ 8205b950 ==== */

void FUN_8205b950(void)

{
  int in_r12;
  undefined8 unaff_f26;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
  *(undefined8 *)(in_r12 + -0x30) = unaff_f26;
  *(undefined8 *)(in_r12 + -0x28) = unaff_f27;
  *(undefined8 *)(in_r12 + -0x20) = unaff_f28;
  *(undefined8 *)(in_r12 + -0x18) = unaff_f29;
  *(undefined8 *)(in_r12 + -0x10) = unaff_f30;
  *(undefined8 *)(in_r12 + -8) = unaff_f31;
  return;
}


/* ==== FUN_8205b954 @ 8205b954 ==== */

void FUN_8205b954(void)

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


/* ==== FUN_8205b958 @ 8205b958 ==== */

void FUN_8205b958(void)

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


/* ==== FUN_8205b96c @ 8205b96c ==== */

void FUN_8205b96c(void)

{
  return;
}


/* ==== FUN_8205b97c @ 8205b97c ==== */

void FUN_8205b97c(void)

{
  return;
}


/* ==== FUN_8205b988 @ 8205b988 ==== */

void FUN_8205b988(void)

{
  return;
}


/* ==== FUN_8205b98c @ 8205b98c ==== */

void FUN_8205b98c(void)

{
  return;
}


/* ==== FUN_8205b990 @ 8205b990 ==== */

void FUN_8205b990(void)

{
  return;
}


/* ==== FUN_8205b99c @ 8205b99c ==== */

void FUN_8205b99c(void)

{
  return;
}


/* ==== FUN_8205b9a0 @ 8205b9a0 ==== */

void FUN_8205b9a0(void)

{
  return;
}


/* ==== FUN_8205b9a4 @ 8205b9a4 ==== */

void FUN_8205b9a4(void)

{
  return;
}


/* ==== FUN_8205b9b8 @ 8205b9b8 ==== */

void FUN_8205b9b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8205bac0 @ 8205bac0 ==== */

void FUN_8205bac0(uint *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x8205bb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x8205bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_8205bb60 @ 8205bb60 ==== */

void FUN_8205bb60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205bc10 @ 8205bc10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205bc10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_8205c288 @ 8205bca8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_8205c288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205bcb0 @ 8205bcb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_8205bcb0(undefined8 param_1,undefined8 param_2)

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
  return uRam82072120;
}


/* ==== FUN_8205be38 @ 8205be38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205be38(undefined4 param_1,undefined4 param_2,uint param_3,undefined *param_4)

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
  
  uVar13 = FUN_8205b890();
  puVar10 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
  uVar4 = (uint)uVar13;
  if ((((puVar10 == (undefined1 *)0x0) && (uVar4 != 0)) || (param_3 == 0)) ||
     ((code *)param_4 == (code *)0x0)) {
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 0x16;
    FUN_8205faa0();
  }
  else if (1 < uVar4) {
    iVar8 = 0;
    puVar9 = local_154;
    puVar2 = local_d4;
    puVar11 = puVar10 + (uVar4 - 1) * param_3;
LAB_8205beb0:
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
LAB_8205c044:
      if (puVar12 < puVar5) {
        do {
          puVar12 = puVar12 + param_3;
          if (puVar5 <= puVar12) goto LAB_8205c078;
          iVar3 = (*(code *)param_4)(puVar12,puVar5);
        } while (iVar3 < 1);
        if (puVar5 <= puVar12) goto LAB_8205c078;
      }
      else {
LAB_8205c078:
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
        goto LAB_8205c044;
      }
      puVar6 = puVar6 + param_3;
      if (puVar5 < puVar6) {
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar5) goto LAB_8205c138;
          iVar3 = (*(code *)param_4)(puVar6,puVar5);
        } while (iVar3 == 0);
        if (puVar6 <= puVar5) goto LAB_8205c138;
      }
      else {
LAB_8205c138:
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar10) break;
          iVar3 = (*(code *)param_4)(puVar6,puVar5);
        } while (iVar3 == 0);
      }
      if ((int)puVar6 - (int)puVar10 < (int)puVar11 - (int)puVar12) goto LAB_8205c198;
      if (puVar10 < puVar6) {
        puVar2[1] = puVar10;
        iVar8 = iVar8 + 1;
        puVar9[1] = puVar6;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar10 = puVar12;
      if (puVar11 <= puVar12) goto LAB_8205bf48;
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
    goto LAB_8205bf48;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_8205c198:
  if (puVar12 < puVar11) {
    puVar2 = puVar2 + 1;
    *puVar2 = puVar12;
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 1;
    *puVar9 = puVar11;
  }
  puVar11 = puVar6;
  if (puVar6 <= puVar10) {
LAB_8205bf48:
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) {
      halt_baddata();
    }
    puVar10 = (undefined1 *)*puVar2;
    puVar11 = (undefined1 *)*puVar9;
    puVar9 = puVar9 + -1;
    puVar2 = puVar2 + -1;
  }
  goto LAB_8205beb0;
}


/* ==== FUN_8205c1c0 @ 8205c1c0 ==== */

void FUN_8205c1c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8205c288 @ 8205c288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c2e8 @ 8205c2e8 ==== */

void FUN_8205c2e8(char *param_1,int param_2,int param_3)

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


/* ==== FUN_8205c350 @ 8205c350 ==== */

byte * FUN_8205c350(byte *param_1,uint param_2,int param_3)

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


/* ==== FUN_8205c390 @ 8205c390 ==== */

void FUN_8205c390(int param_1,int param_2,uint param_3)

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
  FUN_8205d810();
  return;
}


/* ==== FUN_8205c538 @ 8205c538 ==== */

void FUN_8205c538(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8205c550 @ 8205c550 ==== */

void FUN_8205c550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8205c674 @ 8205c674 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c674(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c6b0 @ 8205c6b0 ==== */

void FUN_8205c6b0(void)

{
  FUN_8205c550();
  return;
}


/* ==== FUN_8205c6b8 @ 8205c6b8 ==== */

void FUN_8205c6b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205c760 @ 8205c760 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c760(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c824 @ 8205c824 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c824(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205c860 @ 8205c860 ==== */

void FUN_8205c860(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205c930 @ 8205c930 ==== */

void FUN_8205c930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8205c9e4 @ 8205c9e4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205c9e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205ca20 @ 8205ca20 ==== */

void FUN_8205ca20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8205cc48 @ 8205cc48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205cc48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205ccec @ 8205ccec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ccec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205cd28 @ 8205cd28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205cd28(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_8205b888();
  puVar1 = (uint *)((ulonglong)uVar10 >> 0x20);
  uVar4 = (uint)uVar10;
  if (param_3 == 0) {
    halt_baddata();
  }
  if (param_4 == 0) {
    halt_baddata();
  }
  if (puVar1 == (uint *)0x0) {
LAB_8205cd68:
    puVar2 = (undefined4 *)FUN_820620c0();
    uVar3 = 0x16;
LAB_8205cd70:
    *puVar2 = uVar3;
    FUN_8205faa0();
  }
  else {
    if ((param_5 == (int *)0x0) || (trapWord(6,param_3,0), 0xffffffff / param_3 < param_4)) {
      if (uVar4 != 0xffffffff) {
        FUN_8205bac0(puVar1,0,uVar4);
      }
      if ((param_5 == (int *)0x0) || (trapWord(6,param_3,0), 0xffffffff / param_3 < param_4))
      goto LAB_8205cd68;
    }
    param_4 = param_3 * param_4;
    if ((param_5[3] & 0x10cU) == 0) {
      uVar5 = 0x1000;
    }
    else {
      uVar5 = param_5[6];
    }
    if (param_4 != 0) {
      do {
        puVar8 = (undefined1 *)((ulonglong)uVar10 >> 0x20);
        uVar6 = (uint)uVar10;
        if ((param_5[3] & 0x10cU) == 0) {
LAB_8205ce74:
          if (param_4 < uVar5) {
            iVar7 = FUN_82062ea8();
            if (iVar7 == -1) {
LAB_8205cf78:
              trapWord(6,param_3,0);
              halt_baddata();
            }
            if (uVar6 == 0) goto LAB_8205cf44;
            *puVar8 = (char)iVar7;
            param_4 = param_4 - 1;
            uVar5 = param_5[6];
            puVar8 = puVar8 + 1;
            iVar7 = uVar6 - 1;
          }
          else {
            if (uVar5 == 0) {
              uVar9 = 0x7fffffff;
              if (param_4 < 0x80000000) {
                uVar9 = param_4;
              }
            }
            else {
              trapWord(6,uVar5,0);
              if (param_4 < 0x80000000) {
                uVar9 = (param_4 / uVar5) * uVar5;
              }
              else {
                uVar9 = (0x7fffffff / uVar5) * uVar5;
              }
            }
            if (uVar6 < uVar9) {
LAB_8205cf44:
              if (uVar4 != 0xffffffff) {
                FUN_8205bac0(puVar1,0,uVar4);
              }
              puVar2 = (undefined4 *)FUN_820620c0();
              uVar3 = 0x22;
              goto LAB_8205cd70;
            }
            uVar3 = FUN_82062a60((int)param_5);
            iVar7 = FUN_82063678(uVar3,puVar8,uVar9);
            if (iVar7 == 0) {
              uVar4 = param_5[3] | 0x10;
LAB_8205cf88:
              param_5[3] = uVar4;
              trapWord(6,param_3,0);
              halt_baddata();
            }
            if (iVar7 == -1) {
              uVar4 = param_5[3] | 0x20;
              goto LAB_8205cf88;
            }
            param_4 = param_4 - iVar7;
            puVar8 = puVar8 + iVar7;
            iVar7 = uVar6 - iVar7;
          }
        }
        else {
          uVar9 = param_5[1];
          if (uVar9 == 0) goto LAB_8205ce74;
          if ((int)uVar9 < 0) {
            param_5[3] = param_5[3] | 0x20;
            goto LAB_8205cf78;
          }
          if (param_4 < uVar9) {
            uVar9 = param_4;
          }
          if (uVar6 < uVar9) goto LAB_8205cf44;
          FUN_8205bb60();
          param_4 = param_4 - uVar9;
          puVar8 = puVar8 + uVar9;
          *param_5 = *param_5 + uVar9;
          iVar7 = uVar6 - uVar9;
          param_5[1] = param_5[1] - uVar9;
        }
        uVar10 = CONCAT44(puVar8,iVar7);
      } while (param_4 != 0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205cfc0 @ 8205cfc0 ==== */

void FUN_8205cfc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_8205d094 @ 8205d094 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d094(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d0d0 @ 8205d0d0 ==== */

void FUN_8205d0d0(void)

{
  FUN_8205cfc0();
  return;
}


/* ==== FUN_8205d0e8 @ 8205d0e8 ==== */

void FUN_8205d0e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8205d358 @ 8205d358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d358(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_8205b8a4();
  if (((int)uVar2 != 0) && (param_3 != 0)) {
    if (param_4 == 0) {
      puVar1 = (undefined4 *)FUN_820620c0();
      *puVar1 = 0x16;
      FUN_8205faa0();
    }
    else {
      FUN_8205d5c0();
      FUN_8205d0e8((int)((ulonglong)uVar2 >> 0x20),(int)uVar2,param_3,param_4,param_5,param_6);
      FUN_8205d40c();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d40c @ 8205d40c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d40c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d448 @ 8205d448 ==== */

undefined * FUN_8205d448(void)

{
  return &DAT_82071b30;
}


/* ==== FUN_8205d5c0 @ 8205d5c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d5c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d630 @ 8205d630 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d630(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d680 @ 8205d680 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d680(undefined *param_1)

{
  if ((&DAT_82071b30 <= param_1) && (param_1 < (undefined *)0x82071d91)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d6c0 @ 8205d6c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d6c0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_82063db0();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d6e8 @ 8205d6e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d6e8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  
  uVar5 = FUN_8205b8a4();
  pcVar3 = (char *)uVar5;
  pcStack_50 = (char *)0x0;
  FUN_8205bac0((uint *)&pcStack_4c,0,0x1c);
  if ((pcVar3 == (char *)0x0) || (pcVar4 = pcVar3, param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 0x16;
    FUN_8205faa0();
  }
  else {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcStack_4c = (char *)0x7fffffff;
    uStack_44 = 0x49;
    if (pcVar4 + (-1 - (int)pcVar3) < (char *)0x80000000) {
      pcStack_4c = pcVar4 + (-1 - (int)pcVar3);
    }
    pcStack_50 = pcVar3;
    pcStack_48 = pcVar3;
    (*(code *)((ulonglong)uVar5 >> 0x20))(&pcStack_50,param_3,param_4,param_5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d7b0 @ 8205d7b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d7b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205d810 @ 8205d810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205d810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205dd40 @ 8205dd40 ==== */

void FUN_8205dd40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_8205ddd8 @ 8205ddd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ddd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205de58 @ 8205de58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205de58(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_8205b8a4();
  FUN_82064030();
  piVar3 = (int *)0x82073390;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + iRam8207338c);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_8205d630();
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + iRam8207338c) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_8205ddd8();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_8205ddd8();
        }
      }
      FUN_8205dfcc();
    }
  }
  FUN_8205df7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205df7c @ 8205df7c ==== */

void FUN_8205df7c(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_8205dfcc @ 8205dfcc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205dfcc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e038 @ 8205e038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e0f4 @ 8205e0f4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e0f4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e130 @ 8205e130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e130(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_8205b8a4();
  FUN_82064030();
  piVar3 = (int *)0x82073390;
  for (iVar5 = 0; iVar5 < *piVar3; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(iVar5 * 4 + iRam8207338c);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_8205d630();
      uVar4 = *(uint *)(*(int *)(iVar5 * 4 + iRam8207338c) + 0xc);
      piVar3 = (int *)(uVar4 & 0x83);
      if (piVar3 != (int *)0x0) {
        if (iVar1 == 1) {
          FUN_8205ddd8();
        }
        else if ((iVar1 == 0) && ((uVar4 & 2) != 0)) {
          FUN_8205ddd8();
        }
      }
      FUN_8205dfcc();
    }
  }
  FUN_8205df7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e138 @ 8205e138 ==== */

char * FUN_8205e138(char *param_1,char *param_2)

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


/* ==== FUN_8205e1b0 @ 8205e1b0 ==== */

double FUN_8205e1b0(double param_1,double param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 == (double)fRam82071e58) {
    dVar3 = dRam82071db8;
    if (param_1 == (double)fRam82071e58) {
      if (((ulonglong)param_2 & 0x8000000000000000) == 0) {
        return param_1;
      }
      if (((ulonglong)param_1 & 0x8000000000000000) == 0) {
        return dRam82071dc0;
      }
      return -dRam82071dc0;
    }
  }
  else {
    dVar4 = ABS(param_2);
    uVar1 = 0;
    dVar2 = ABS(param_1);
    dVar3 = dVar2;
    if (dVar4 < dVar2) {
      uVar1 = 2;
      dVar3 = dVar4;
      dVar4 = dVar2;
    }
    dVar3 = dVar3 / dVar4;
    if (dRam82071dc8 < dVar3) {
      uVar1 = uVar1 + 1;
      dVar3 = (dRam82071dd8 * dVar3 - (double)fRam82071e60) / (dRam82071dd8 + dVar3);
    }
    dVar4 = dVar3 * dVar3;
    dVar3 = ((((dRam82071e00 * dVar4 + dRam82071df8) * dVar4 + dRam82071df0) * dVar4 + dRam82071de8)
             * dVar4 * dVar3) /
            ((((dRam82071e20 + dVar4) * dVar4 + dRam82071e18) * dVar4 + dRam82071e10) * dVar4 +
            dRam82071e08) + dVar3;
    if (1 < uVar1) {
      dVar3 = -dVar3;
    }
    dVar3 = *(double *)(uVar1 * 8 + -0x7df8e1d0) + dVar3;
  }
  if (param_2 < 0.0) {
    dVar3 = dRam82071dc0 - dVar3;
  }
  if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
    return -dVar3;
  }
  return dVar3;
}


/* ==== FUN_8205e2e0 @ 8205e2e0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8205e2e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e3c0 @ 8205e3c0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8205e3c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e540 @ 8205e540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205e540(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_8205b894();
  FUN_8205f270();
  puVar6 = puRam82073380;
  if (puRam82073384 <= puRam82073380) {
    iVar4 = (int)puRam82073380 - (int)puRam82073384;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = FUN_820655e8();
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (undefined4 *)FUN_820654f8(), puVar3 == (undefined4 *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (undefined4 *)FUN_820654f8(), puVar3 == (undefined4 *)0x0))))
        goto LAB_8205b8e4;
        puVar6 = puVar3 + (iVar4 >> 2);
        puRam82073384 = puVar3;
      }
      puRam82073380 = puVar6 + 1;
      *puVar6 = uVar1;
    }
  }
LAB_8205b8e4:
  FUN_8205e624();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205e624 @ 8205e624 ==== */

void FUN_8205e624(void)

{
  FUN_8205f278();
  return;
}


/* ==== FUN_8205e648 @ 8205e648 ==== */

int FUN_8205e648(void)

{
  int iVar1;
  
  iVar1 = FUN_8205e540();
  return -(uint)(iVar1 == 0);
}


/* ==== FUN_8205e7b8 @ 8205e7b8 ==== */

/* WARNING: Removing unreachable block (ram,0x8205e70c) */
/* WARNING: Removing unreachable block (ram,0x8205e714) */
/* WARNING: Removing unreachable block (ram,0x8205e780) */
/* WARNING: Removing unreachable block (ram,0x8205e790) */
/* WARNING: Removing unreachable block (ram,0x8205e794) */

double FUN_8205e7b8(double param_1)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = ABS(param_1);
  dVar3 = (double)fRam82071eec;
  bVar2 = dVar4 <= dVar3;
  if (bVar2) {
    dVar3 = dVar4 * dVar4;
  }
  else {
    dVar3 = ((double)fRam82071ee4 - dVar4) * dVar3;
    dVar4 = -(SQRT(dVar3) * (double)fRam82071ee8);
  }
  iVar1 = (uint)bVar2 * 8;
  dVar4 = (((((dRam82071f30 * dVar3 + dRam82071f28) * dVar3 + dRam82071f20) * dVar3 + dRam82071f18)
            * dVar3 + dRam82071f10) * dVar3 * dVar4) /
          (((((dRam82071f58 + dVar3) * dVar3 + dRam82071f50) * dVar3 + dRam82071f48) * dVar3 +
           dRam82071f40) * dVar3 + dRam82071f38) + dVar4;
  dVar3 = *(double *)(iVar1 + -0x7df8e110) - dVar4;
  if (param_1 < 0.0) {
    dVar3 = *(double *)(iVar1 + -0x7df8e100) + dVar4;
  }
  return dVar3;
}


/* ==== FUN_8205e7c0 @ 8205e7c0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_8205e7c0(double param_1)

{
  double dVar1;
  
  dVar1 = (double)(longlong)param_1;
  if (dVar1 - param_1 < 0.0) {
    dVar1 = dVar1 + _UNK_82001748;
  }
  if (_UNK_82009880 - ABS(param_1) < 0.0) {
    dVar1 = param_1;
  }
  if (-ABS(param_1) < 0.0) {
    param_1 = dVar1;
  }
  return param_1;
}


/* ==== FUN_8205e804 @ 8205e804 ==== */

void FUN_8205e804(void)

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


/* ==== FUN_8205e828 @ 8205e828 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_8205e828(double param_1)

{
  double dVar1;
  ushort uStack00000010;
  
  if (param_1 == _UNK_82001748) {
    return DAT_82001738;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uStack00000010 & 0x7ff0) == 0x7ff0) {
    if (_UNK_82006c50 < param_1) {
      return param_1;
    }
  }
  else {
    if (DAT_82001738 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    dVar1 = dRam82072118;
    if (param_1 == DAT_82001738) goto LAB_8205e874;
  }
  dVar1 = dRam82072120;
LAB_8205e874:
  return -dVar1;
}


/* ==== FUN_8205e9b8 @ 8205e9b8 ==== */

undefined4 FUN_8205e9b8(double param_1)

{
  int iStack00000014;
  
  if (((((ulonglong)param_1 & 0x7ff0000000000000) != 0) ||
      ((((ulonglong)param_1 & 0xfffff00000000) == 0 &&
       (iStack00000014 = SUB84(param_1,0), iStack00000014 == 0)))) &&
     ((double)(longlong)param_1 == param_1)) {
    if ((double)(longlong)(param_1 * DAT_82001740) == param_1 * DAT_82001740) {
      return 2;
    }
    return 1;
  }
  return 0;
}


/* ==== FUN_8205ea28 @ 8205ea28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ea28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205ebb0 @ 8205ebb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ebb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f0a0 @ 8205f0a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f0a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f0c8 @ 8205f0c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f0c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f188 @ 8205f188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f190 @ 8205f190 ==== */

void FUN_8205f190(void)

{
  if (DAT_820731b8 != (code *)0x0) {
    (*DAT_820731b8)();
  }
  FUN_82062320(0x19);
  FUN_8205fbf0(0,1);
  FUN_8205fba0();
  return;
}


/* ==== FUN_8205f1e0 @ 8205f1e0 ==== */

int FUN_8205f1e0(short *param_1)

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


/* ==== FUN_8205f210 @ 8205f210 ==== */

byte * FUN_8205f210(byte *param_1,uint param_2)

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


/* ==== FUN_8205f268 @ 8205f268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f270 @ 8205f270 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f270(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f278 @ 8205f278 ==== */

void FUN_8205f278(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_8205f280 @ 8205f280 ==== */

void FUN_8205f280(void)

{
  FUN_8205f958(0);
  FUN_8205fa90(0);
  FUN_820660c8(0);
  FUN_82066190();
  return;
}


/* ==== FUN_8205f2c0 @ 8205f2c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f2c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f320 @ 8205f320 ==== */

void FUN_8205f320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8205f4a4 @ 8205f4a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f4a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f4e8 @ 8205f4e8 ==== */

void FUN_8205f4e8(void)

{
  FUN_8205f320();
  return;
}


/* ==== FUN_8205f4f8 @ 8205f4f8 ==== */

void FUN_8205f4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_8205f508 @ 8205f508 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f508(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f538 @ 8205f538 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f538(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f580 @ 8205f580 ==== */

void FUN_8205f580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205f658 @ 8205f658 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f658(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f698 @ 8205f698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f698(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f758 @ 8205f758 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f7c8 @ 8205f7c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f7c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f8a0 @ 8205f8a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f8a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205f958 @ 8205f958 ==== */

void FUN_8205f958(undefined4 param_1)

{
  DAT_82073024 = param_1;
  return;
}


/* ==== FUN_8205f968 @ 8205f968 ==== */

undefined4 FUN_8205f968(void)

{
  int iVar1;
  
  if ((DAT_82073024 != (code *)0x0) && (iVar1 = (*DAT_82073024)(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_8205f9b0 @ 8205f9b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205f9b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fa90 @ 8205fa90 ==== */

void FUN_8205fa90(undefined4 param_1)

{
  DAT_82073028 = param_1;
  return;
}


/* ==== FUN_8205faa0 @ 8205faa0 ==== */

void FUN_8205faa0(void)

{
  undefined4 in_r0;
  
  if (DAT_82073028 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x8205fac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_82073028)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_8205fad8 @ 8205fad8 ==== */

void FUN_8205fad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205fb78 @ 8205fb78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fb78(void)

{
  int iVar1;
  
  FUN_8205fad8();
  func_0x8206c650(0x1e);
  iVar1 = FUN_820662a0();
  if (iVar1 != 0) {
    FUN_820662b8();
  }
  if ((DAT_82071f78 & 2) != 0) {
    FUN_8205fad8();
  }
  FUN_8205f4e8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fba0 @ 8205fba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fba0(void)

{
  int iVar1;
  
  iVar1 = FUN_820662a0();
  if (iVar1 != 0) {
    FUN_820662b8();
  }
  if ((DAT_82071f78 & 2) != 0) {
    FUN_8205fad8();
  }
  FUN_8205f4e8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fbf0 @ 8205fbf0 ==== */

void FUN_8205fbf0(uint param_1,uint param_2)

{
  DAT_82071f78 = DAT_82071f78 & ~param_2 | param_1 & param_2;
  return;
}


/* ==== FUN_8205fc18 @ 8205fc18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fc18(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_8205b8a4();
  pcVar2 = (char *)((ulonglong)uVar10 >> 0x20);
  iVar6 = (int)uVar10;
  if ((pcVar2 != (char *)0x0) && (iVar6 != iVar6 + -1 + (uint)(iVar6 == 0))) {
    pcVar9 = pcVar2;
    if ((*(uint *)(iVar6 + 0xc) & 0x40) != 0) {
LAB_8205fd0c:
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_8205d5c0();
      uVar5 = FUN_820665a0();
      FUN_8205d0e8(pcVar2,1,pcVar9 + (-1 - (int)pcVar2),iVar6);
      FUN_82066690(uVar5,iVar6);
      FUN_8205fdb0();
      halt_baddata();
    }
    uVar4 = FUN_82062a60(iVar6);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar7 = &DAT_82072148;
    }
    else {
      puVar7 = (undefined *)
               (*(int *)(&DAT_82073280 + ((int)uVar4 >> 5) * 4) + (uVar4 & 0x1f) * 0x48);
    }
    puVar8 = &DAT_82072148;
    if ((puVar7[0x28] & 0xfe) == 0) {
      if ((uVar4 != 0xffffffff) && (uVar4 != 0xfffffffe)) {
        puVar8 = (undefined *)
                 (*(int *)(&DAT_82073280 + ((int)uVar4 >> 5) * 4) + (uVar4 & 0x1f) * 0x48);
      }
      if ((puVar8[0x28] & 1) == 0) goto LAB_8205fd0c;
    }
  }
  puVar3 = (undefined4 *)FUN_820620c0();
  *puVar3 = 0x16;
  FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fdb0 @ 8205fdb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fdb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fde8 @ 8205fde8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fde8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fe18 @ 8205fe18 ==== */

undefined4 FUN_8205fe18(void)

{
  int iVar1;
  
  iVar1 = FUN_8205f658();
  return *(undefined4 *)(iVar1 + 0x90);
}


/* ==== FUN_8205fe40 @ 8205fe40 ==== */

int FUN_8205fe40(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) == 0) {
    return param_1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return param_1;
  }
  return *(int *)(*(int *)(param_1 + 4) + 4);
}


/* ==== FUN_8205fe60 @ 8205fe60 ==== */

void FUN_8205fe60(int param_1,int param_2)

{
  FUN_8205c390(param_1,param_2,0xa40);
  return;
}


/* ==== FUN_8205fe68 @ 8205fe68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205fe68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8205fef0 @ 8205fef0 ==== */

void FUN_8205fef0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_8205ffe0 @ 8205ffe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8205ffe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,undefined4 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_8205b89c();
  iVar1 = FUN_8205f658();
  *(int *)(iVar1 + 0xb0) = (int)uVar2;
  FUN_82067628(*(undefined4 *)((ulonglong)uVar2 >> 0x20),param_3,param_4,param_5,param_6,0);
  iVar1 = FUN_8205f658();
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *param_7 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060060 @ 82060060 ==== */

void FUN_82060060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82060120 @ 82060120 ==== */

void FUN_82060120(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82060278 @ 82060278 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060278(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060330 @ 82060330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060388 @ 82060388 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060388(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060430 @ 82060430 ==== */

int FUN_82060430(int param_1)

{
  if (param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


/* ==== FUN_82060448 @ 82060448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060448(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820605b8 @ 820605b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820605b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060630 @ 82060630 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82060630(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int *param_5,
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
  
  uVar9 = FUN_8205b89c();
  puVar5 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  if (puVar5 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 0x16;
    FUN_8205faa0();
  }
  else {
    if ((uint)uVar9 == 0) {
      puVar2 = (undefined4 *)FUN_820620c0();
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
          FUN_8205c390((int)(pcVar4 + 1),(int)pcVar4,(int)pcVar6 - (int)pcVar4);
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
          *puVar5 = *(undefined1 *)**(undefined4 **)(DAT_820725f8 + 0xbc);
        }
        puVar5 = puVar5 + param_3 + (param_6 == '\0');
        iVar3 = FUN_8205f8a0();
        if (iVar3 != 0) {
          FUN_8205fb78();
                    /* WARNING: Subroutine does not return */
          FUN_8205b8a8();
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
        if ((DAT_820731e0 & 1) == 0) {
          halt_baddata();
        }
        if (puVar5[2] != '0') {
          halt_baddata();
        }
        FUN_8205c390((int)(puVar5 + 2),(int)(puVar5 + 3),3);
        halt_baddata();
      }
      puVar2 = (undefined4 *)FUN_820620c0();
      uVar8 = 0x22;
    }
    *puVar2 = uVar8;
    FUN_8205faa0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82060970 @ 82060970 ==== */

void FUN_82060970(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82060d80 @ 82060d80 ==== */

void FUN_82060d80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_820611e0 @ 820611e0 ==== */

void FUN_820611e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820613b8 @ 820613b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820613b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061450 @ 82061450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82061450(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_8205b8a4();
  iVar5 = (int)uVar6;
  puVar1 = (undefined4 *)FUN_820620c0();
  uVar3 = *puVar1;
  if (((*(uint *)(param_3 + 0xc) & 0x40) == 0) || (*(int *)(param_3 + 8) != 0)) {
    puVar1 = (undefined4 *)FUN_820620c0();
    *puVar1 = 0;
    if (0 < iVar5) {
      puVar4 = (undefined1 *)((int)((ulonglong)uVar6 >> 0x20) + -1);
      do {
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
        FUN_820613b8(*puVar4,param_3,param_4);
        if (*param_4 == -1) {
          piVar2 = (int *)FUN_820620c0();
          if (*piVar2 != 0x2a) break;
          FUN_820613b8(0x3f,param_3,param_4);
        }
      } while (0 < iVar5);
    }
    piVar2 = (int *)FUN_820620c0();
    if (*piVar2 == 0) {
      puVar1 = (undefined4 *)FUN_820620c0();
      *puVar1 = uVar3;
    }
  }
  else {
    *param_4 = *param_4 + iVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82061520 @ 82061520 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82061f20) */
/* WARNING: Removing unreachable block (ram,0x82061f28) */
/* WARNING: Removing unreachable block (ram,0x82061f30) */
/* WARNING: Removing unreachable block (ram,0x82061f50) */
/* WARNING: Removing unreachable block (ram,0x82061f78) */
/* WARNING: Removing unreachable block (ram,0x82061f5c) */
/* WARNING: Removing unreachable block (ram,0x82061f74) */
/* WARNING: Removing unreachable block (ram,0x82061e34) */
/* WARNING: Removing unreachable block (ram,0x82061e44) */
/* WARNING: Removing unreachable block (ram,0x82061e60) */
/* WARNING: Removing unreachable block (ram,0x82061e68) */
/* WARNING: Removing unreachable block (ram,0x82061e4c) */
/* WARNING: Removing unreachable block (ram,0x82061e3c) */
/* WARNING: Removing unreachable block (ram,0x82061e50) */
/* WARNING: Removing unreachable block (ram,0x82061fe4) */

void FUN_82061520(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int in_r6;
  undefined *puVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar15;
  uint uVar16;
  byte bVar18;
  byte *pbVar17;
  byte *pbVar19;
  undefined8 uVar20;
  int iStack_4e0;
  int iStack_4dc;
  undefined1 auStack_4d8 [4];
  int iStack_4d4;
  int iStack_4d0;
  int iStack_4cc;
  undefined4 uStack_4c8;
  uint uStack_4c4;
  undefined4 uStack_4c0;
  undefined1 auStack_2a0 [511];
  undefined1 uStack_a1;
  byte *pbVar14;
  
  uVar20 = FUN_8205b870();
  puVar4 = (undefined *)((ulonglong)uVar20 >> 0x20);
  pbVar19 = (byte *)uVar20;
  uStack_4c8 = 0;
  iStack_4d0 = 0;
  iStack_4d4 = 0;
  uVar16 = 0;
  iStack_4cc = 0;
  if (puVar4 == (undefined *)0x0) goto LAB_82061560;
  if ((*(uint *)(puVar4 + 0xc) & 0x40) == 0) {
    uVar6 = FUN_82062a60((int)puVar4);
    puVar9 = &DAT_82072148;
    puVar7 = puVar9;
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      puVar7 = (undefined *)
               (*(int *)(&DAT_82073280 + ((int)uVar6 >> 5) * 4) + (uVar6 & 0x1f) * 0x48);
    }
    if ((puVar7[0x28] & 0xfe) != 0) goto LAB_82061560;
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      puVar9 = (undefined *)
               (*(int *)(&DAT_82073280 + ((int)uVar6 >> 5) * 4) + (uVar6 & 0x1f) * 0x48);
    }
    if ((puVar9[0x28] & 1) != 0) goto LAB_82061560;
  }
  if (pbVar19 != (byte *)0x0) {
    puVar7 = FUN_8205d448();
    if ((puVar4 == puVar7 + 0x20) || (puVar7 = FUN_8205d448(), puVar4 == puVar7 + 0x40)) {
      iVar15 = FUN_8205c538(auStack_2a0,0x200,pbVar19,in_r6);
      if (iVar15 == -1) {
        uStack_a1 = 0;
      }
      func_0x8206b2c8(auStack_2a0);
      halt_baddata();
    }
    bVar18 = *pbVar19;
    iVar15 = 0;
    iStack_4e0 = 0;
    iVar10 = (int)(char)bVar18;
    iStack_4dc = 0;
    uStack_4c4 = 0;
    if (iVar10 == 0) {
      halt_baddata();
    }
    uVar6 = 0x82070000;
    pcVar11 = FUN_82010000;
    pbVar14 = pbVar19 + -1;
    do {
      iVar2 = iStack_4d4;
      pbVar13 = pbVar14 + 1;
      if (iVar15 < 0) {
        halt_baddata();
      }
      if ((iVar10 < 0x20) || (0x78 < iVar10)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (byte)(&UNK_82009ab0)[iVar10] & 0xf;
      }
      uStack_4c4 = (int)(char)(&UNK_82009ad0)[uVar12 * 8 + uStack_4c4] >> 4;
      if (uStack_4c4 < 8) {
        if (uStack_4c4 == 0) {
LAB_820618d4:
          uVar8 = FUN_82068080((uint)bVar18);
          if (uVar8 != 0) {
            FUN_820613b8(bVar18,puVar4,&iStack_4e0);
            pbVar13 = pbVar14 + 2;
            bVar18 = *pbVar13;
            if (bVar18 == 0) break;
          }
          puVar7 = (undefined *)FUN_820613b8(bVar18,puVar4,&iStack_4e0);
          iVar15 = iStack_4e0;
        }
        else if (uStack_4c4 == 1) {
          uVar16 = 0;
          iStack_4cc = 0;
          iStack_4d0 = 0;
          iStack_4d4 = 0;
        }
        else if (uStack_4c4 == 2) {
          if (((iVar10 != 0x20) && (iVar10 != 0x23)) && (iVar10 != 0x2b)) {
            if (iVar10 == 0x2d) {
              uVar16 = uVar16 | 4;
            }
            else if (iVar10 == 0x30) {
              uVar16 = uVar16 | 8;
            }
          }
        }
        else if (uStack_4c4 == 3) {
          if (iVar10 == 0x2a) {
            uVar12 = in_r6 + 7U & 0xfffffff8;
            in_r6 = uVar12 + 8;
            iStack_4d0 = *(int *)(uVar12 + 4);
            if (iStack_4d0 < 0) {
              uVar16 = uVar16 | 4;
              iStack_4d0 = -iStack_4d0;
            }
          }
          else {
            iStack_4d0 = iStack_4d0 * 10 + iVar10 + -0x30;
          }
        }
        else if (uStack_4c4 != 4) {
          if (uStack_4c4 == 5) {
            if (iVar10 == 0x2a) {
              in_r6 = (in_r6 + 7U & 0xfffffff8) + 8;
            }
          }
          else {
            if (uStack_4c4 != 6) {
              puVar9 = (undefined *)(iVar10 + -0x41);
              switch(puVar9) {
              case (undefined *)0x1:
              case (undefined *)0x3:
              case (undefined *)0x5:
              case (undefined *)0x7:
              case (undefined *)0x8:
              case (undefined *)0x9:
              case (undefined *)0xa:
              case (undefined *)0xb:
              case (undefined *)0xc:
              case (undefined *)0xd:
              case (undefined *)0xe:
              case (undefined *)0xf:
              case (undefined *)0x10:
              case (undefined *)0x11:
              case (undefined *)0x13:
              case (undefined *)0x14:
              case (undefined *)0x15:
              case (undefined *)0x16:
              case (undefined *)0x18:
              case (undefined *)0x1a:
              case (undefined *)0x1b:
              case (undefined *)0x1c:
              case (undefined *)0x1d:
              case (undefined *)0x1e:
              case (undefined *)0x1f:
              case (undefined *)0x21:
              case (undefined *)0x27:
              case (undefined *)0x29:
              case (undefined *)0x2a:
              case (undefined *)0x2b:
              case (undefined *)0x2c:
              case (undefined *)0x30:
              case (undefined *)0x31:
              case (undefined *)0x33:
              case (undefined *)0x35:
              case (undefined *)0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              case (undefined *)0x2:
                if (puVar9 != (undefined *)0x37) {
                  func_0x8206c680();
                  pbVar19[0x1f70] = 0xff;
                  pbVar19[0x1f71] = 0xff;
                  pbVar19[0x1f72] = 0xff;
                  pbVar19[0x1f73] = 0xff;
                }
              case (undefined *)0x22:
                FUN_82063d40();
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              case (undefined *)0x12:
                break;
              case (undefined *)0x19:
                puVar5 = (undefined4 *)FUN_82063be8(1);
                if (puVar5 == (undefined4 *)0x0) {
                  func_0x8206c670(uRam00001f70,0);
                }
                else {
                  iVar15 = func_0x8206c670(uRam00001f70,puVar5);
                  if (iVar15 == 0) {
                    FUN_8205c288();
                  }
                  else {
                    puVar5[2] = 0;
                    puVar5[0x17] = &UNK_8200a840;
                    puVar5[5] = 1;
                    uVar3 = func_0x8206b308();
                    *puVar5 = uVar3;
                    puVar5[1] = 0xffffffff;
                  }
                }
                break;
              case (undefined *)0x23:
              case (undefined *)0x28:
                puVar9 = (undefined *)(iVar10 + 0x3d67);
              case (undefined *)0x34:
                *(code **)(pbVar19 + 4) = pcVar11;
              case (undefined *)0x2f:
              case (undefined *)0x17:
                *(undefined **)(uVar6 + 8) = puVar9;
                FUN_82056a48();
                halt_baddata();
              case (undefined *)0x2d:
                if (*(int *)(pbVar19 + 0x40) != 0) {
                  FUN_8205c288();
                }
                if (*(int *)(pbVar19 + 0x44) != 0) {
                  FUN_8205c288();
                }
                if (*(int *)(pbVar19 + 0x48) != 0) {
                  FUN_8205c288();
                }
                puVar7 = *(undefined **)(pbVar19 + 0x5c);
                puVar9 = &UNK_8200a840;
              case (undefined *)0x0:
              case (undefined *)0x4:
              case (undefined *)0x6:
                if (puVar7 != puVar9) {
                  FUN_8205c288();
                }
              case (undefined *)0x20:
              case (undefined *)0x24:
              case (undefined *)0x25:
              case (undefined *)0x26:
                FUN_8205c288();
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              case (undefined *)0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              case (undefined *)0x32:
                goto LAB_8205b8fc;
              case (undefined *)0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              default:
                if (iStack_4cc == 0) {
                  pbVar17 = (byte *)((iStack_4d0 - iStack_4dc) - iStack_4d4);
                  uVar6 = uVar16;
                  pbVar14 = pbVar17;
                  if (uVar16 == 0) {
                    do {
                      pbVar19 = pbVar14;
                      if ((int)pbVar19 < 1) break;
                      pbVar19 = pbVar19 + -1;
                      FUN_820613b8(0x20,puVar4,&iStack_4e0);
                      pbVar14 = pbVar19;
                    } while (iStack_4e0 != -1);
                  }
                  FUN_82061450(auStack_4d8,iVar2,puVar4,&iStack_4e0);
                  if (((uVar16 & 8) != 0) && (pbVar14 = pbVar17, (uVar16 & 4) == 0)) {
                    do {
                      pbVar19 = pbVar14;
                      if ((int)pbVar19 < 1) break;
                      pbVar19 = pbVar19 + -1;
                      FUN_820613b8(0x30,puVar4,&iStack_4e0);
                      pbVar14 = pbVar19;
                    } while (iStack_4e0 != -1);
                  }
                  puVar7 = (undefined *)FUN_82061450(uStack_4c0,iStack_4dc,puVar4,&iStack_4e0);
                  iVar15 = iStack_4e0;
                  if ((-1 < iStack_4e0) && ((uVar16 & 4) != 0)) {
                    do {
                      pbVar19 = pbVar17;
                      iVar15 = iStack_4e0;
                      if ((int)pbVar19 < 1) break;
                      pbVar19 = pbVar19 + -1;
                      puVar7 = (undefined *)FUN_820613b8(0x20,puVar4,&iStack_4e0);
                      iVar15 = iStack_4e0;
                      pbVar17 = pbVar19;
                    } while (iStack_4e0 != -1);
                  }
                }
                goto LAB_82061ff0;
              }
              thunk_FUN_82056368(bVar18);
LAB_8205b8fc:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (iVar10 == 0x49) {
              bVar1 = pbVar14[2];
              if ((bVar1 == 0x36) && (uVar6 = (uint)pbVar14[3], uVar6 == 0x34)) {
                pbVar13 = pbVar14 + 3;
              }
              else if ((bVar1 == 0x33) && (uVar6 = (uint)pbVar14[3], uVar6 == 0x32)) {
                pbVar13 = pbVar14 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                uStack_4c4 = 0;
                goto LAB_820618d4;
              }
            }
            else if (((iVar10 != 0x68) && (iVar10 == 0x6c)) && (pbVar14[2] == 0x6c)) {
              pbVar13 = pbVar14 + 2;
            }
          }
        }
      }
LAB_82061ff0:
      bVar18 = pbVar13[1];
      iVar10 = (int)(char)bVar18;
      pbVar14 = pbVar13;
      if (iVar10 == 0) {
        halt_baddata();
      }
    } while( true );
  }
LAB_82061560:
  puVar5 = (undefined4 *)FUN_820620c0();
  *puVar5 = 0x16;
  FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062050 @ 82062050 ==== */

undefined4 FUN_82062050(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = &DAT_82071fa8;
  do {
    if (param_1 == *puVar1) {
      return *(undefined4 *)(uVar2 * 8 + -0x7df8e054);
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


/* ==== FUN_820620c0 @ 820620c0 ==== */

undefined * FUN_820620c0(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_8205f580();
  if (iVar1 == 0) {
    puVar2 = &DAT_82072110;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 8);
  }
  return puVar2;
}


/* ==== FUN_820620f8 @ 820620f8 ==== */

undefined * FUN_820620f8(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_8205f580();
  if (iVar1 == 0) {
    puVar2 = &DAT_82072114;
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0xc);
  }
  return puVar2;
}


/* ==== FUN_82062130 @ 82062130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820621a0 @ 820621a0 ==== */

undefined8 FUN_820621a0(undefined8 param_1,undefined4 param_2,short param_3)

{
  ushort uStack00000010;
  undefined8 uStack_10;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uStack_10 = CONCAT26((param_3 + 0x3fe) * 0x10 | uStack00000010 & 0x800f,(int6)param_1);
  return uStack_10;
}


/* ==== FUN_820621c8 @ 820621c8 ==== */

int FUN_820621c8(undefined8 param_1)

{
  return (int)(short)(((ushort)((ulonglong)param_1 >> 0x34) & 0x7ff) - 0x3fe);
}


/* ==== FUN_820621e0 @ 820621e0 ==== */

double FUN_820621e0(double param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ushort uStack00000010;
  undefined6 uStack00000012;
  double dStack_10;
  
  if (param_1 == DAT_82001738) {
    iVar4 = 0;
    goto LAB_820622cc;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar1 = uStack00000010;
  uVar3 = (uint)uStack00000010;
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    _uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
    uStack00000012._2_4_ = SUB84(param_1,0);
    if ((((ulonglong)param_1 & 0xfffff00000000) == 0) && (uStack00000012._2_4_ == 0))
    goto LAB_820622a4;
    iVar4 = -0x3fd;
    bVar5 = param_1 < DAT_82001738;
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
LAB_820622a4:
    iVar4 = ((uVar3 & 0x7ff0) >> 4) - 0x3fe;
  }
  dStack_10 = (double)((ulonglong)param_1 & 0x800fffffffffffff | 0x3fe0000000000000);
  param_1 = dStack_10;
LAB_820622cc:
  *param_3 = iVar4;
  return param_1;
}


/* ==== FUN_820622d8 @ 820622d8 ==== */

undefined4 FUN_820622d8(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_8200a3c0;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(&UNK_8200a3c4 + uVar2 * 8);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x16);
  return 0;
}


/* ==== FUN_82062320 @ 82062320 ==== */

void FUN_82062320(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_820622d8(param_1);
  if (iVar1 != 0) {
    func_0x8206b398();
  }
  return;
}


/* ==== FUN_82062350 @ 82062350 ==== */

void FUN_82062350(void)

{
  int iVar1;
  
  iVar1 = FUN_820622d8(0xfc);
  if (iVar1 != 0) {
    func_0x8206b398();
  }
  iVar1 = FUN_820622d8(0xff);
  if (iVar1 != 0) {
    func_0x8206b398();
  }
  return;
}


/* ==== FUN_82062398 @ 82062398 ==== */

ushort FUN_82062398(int param_1)

{
  return *(ushort *)(param_1 * 2 + DAT_820725e8) & 4;
}


/* ==== FUN_820623b8 @ 820623b8 ==== */

ushort FUN_820623b8(int param_1)

{
  return *(ushort *)(param_1 * 2 + DAT_820725e8) & 0x80;
}


/* ==== FUN_820623d8 @ 820623d8 ==== */

ushort FUN_820623d8(int param_1)

{
  return *(ushort *)(param_1 * 2 + DAT_820725e8) & 8;
}


/* ==== FUN_820623f8 @ 820623f8 ==== */

void FUN_820623f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82062640 @ 82062640 ==== */

void FUN_82062640(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_820627cc @ 820627cc ==== */

void FUN_820627cc(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_820627f0 @ 820627f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820627f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062818 @ 82062818 ==== */

void FUN_82062818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82062900 @ 82062900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062900(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar2 = FUN_8205b8a4();
  if (uVar2 == 0xfffffffe) {
    puVar3 = (undefined4 *)FUN_820620f8();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_820620c0();
    *puVar3 = 9;
  }
  else {
    if ((-1 < (int)uVar2) && (uVar2 < DAT_8207326c)) {
      iVar1 = ((int)uVar2 >> 5) * 4;
      iVar4 = (uVar2 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_82073280 + iVar1) + iVar4 + 4) & 1) != 0) {
        FUN_82068950();
        if ((*(byte *)(*(int *)(&DAT_82073280 + iVar1) + iVar4 + 4) & 1) == 0) {
          puVar3 = (undefined4 *)FUN_820620c0();
          *puVar3 = 9;
        }
        else {
          FUN_82062818();
        }
        FUN_82062a28();
        halt_baddata();
      }
    }
    puVar3 = (undefined4 *)FUN_820620f8();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_820620c0();
    *puVar3 = 9;
    FUN_8205faa0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062a28 @ 82062a28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062a28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062a60 @ 82062a60 ==== */

undefined4 FUN_82062a60(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_820620c0();
    *puVar1 = 0x16;
    FUN_8205faa0();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}


/* ==== FUN_82062aa0 @ 82062aa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062aa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062b08 @ 82062b08 ==== */

void FUN_82062b08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82062bc8 @ 82062bc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062bc8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uStack00000014;
  
  uStack00000014 = FUN_8205b89c();
  if (uStack00000014 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_820620f8();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < DAT_8207326c)) {
      iVar1 = ((int)uStack00000014 >> 5) * 4;
      iVar3 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_82073280 + iVar1) + iVar3 + 4) & 1) != 0) {
        FUN_82068950();
        if ((*(byte *)(*(int *)(&DAT_82073280 + iVar1) + iVar3 + 4) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_820620c0();
          *puVar2 = 9;
          puVar2 = (undefined4 *)FUN_820620f8();
          *puVar2 = 0;
        }
        else {
          FUN_82062b08();
        }
        FUN_82062d0c();
        halt_baddata();
      }
    }
    puVar2 = (undefined4 *)FUN_820620f8();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
    FUN_8205faa0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062d0c @ 82062d0c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82062d0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82062ea8 @ 82062ea8 ==== */

void FUN_82062ea8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82063058 @ 82063058 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x820635f4) */

void FUN_82063058(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  longlong lVar15;
  char acStack_80 [4];
  uint auStack_7c [31];
  
  lVar15 = FUN_8205b880();
  uVar6 = (uint)((ulonglong)lVar15 >> 0x20);
  pbVar4 = (byte *)lVar15;
  if (uVar6 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_820620f8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_820620c0();
    uVar7 = 9;
LAB_82063094:
    *puVar1 = uVar7;
    halt_baddata();
  }
  if ((-1 < lVar15) && (uVar6 < DAT_8207326c)) {
    iVar3 = ((int)uVar6 >> 5) * 4;
    iVar10 = (uVar6 & 0x1f) * 0x48;
    bVar8 = *(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 4);
    if ((bVar8 & 1) != 0) {
      if (param_3 < 0x80000000) {
        iVar11 = 0;
        if (param_3 == 0) {
          halt_baddata();
        }
        if ((bVar8 & 2) != 0) {
          halt_baddata();
        }
        if (pbVar4 != (byte *)0x0) {
          cVar9 = *(char *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x28) >> 1;
          if (cVar9 != '\x01') {
            uVar6 = param_3;
            if (cVar9 == '\x02') {
              if ((~param_3 & 1) == 0) goto LAB_82063158;
              uVar6 = param_3 & 0xfffffffe;
            }
            pbVar5 = pbVar4;
            uVar13 = uVar6;
            if ((((*(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 4) & 0x48) != 0) &&
                (bVar8 = *(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 5), bVar8 != 10)) &&
               (uVar6 != 0)) {
              *pbVar4 = bVar8;
              pbVar5 = pbVar4 + 1;
              iVar11 = 1;
              *(undefined1 *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 5) = 10;
              uVar13 = uVar6 - 1;
              if (((cVar9 != '\0') &&
                  (bVar8 = *(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x29), bVar8 != 10))
                 && (uVar13 != 0)) {
                *pbVar5 = bVar8;
                pbVar5 = pbVar4 + 2;
                iVar11 = 2;
                *(undefined1 *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x29) = 10;
                uVar13 = uVar6 - 2;
                if (((cVar9 == '\x01') &&
                    (bVar8 = *(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x2a), bVar8 != 10
                    )) && (uVar13 != 0)) {
                  *pbVar5 = bVar8;
                  pbVar5 = pbVar4 + 3;
                  iVar11 = 3;
                  *(undefined1 *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x2a) = 10;
                  uVar13 = uVar6 - 3;
                }
              }
            }
            iVar2 = func_0x8206b578(*(undefined4 *)(iVar10 + *(int *)(&DAT_82073280 + iVar3)),pbVar5
                                    ,uVar13,auStack_7c,0);
            if (((iVar2 == 0) || ((int)auStack_7c[0] < 0)) || (uVar13 < auStack_7c[0])) {
              iVar3 = thunk_FUN_820563b8();
              if (iVar3 == 5) {
                puVar1 = (undefined4 *)FUN_820620c0();
                *puVar1 = 9;
                puVar1 = (undefined4 *)FUN_820620f8();
                uVar7 = 5;
LAB_82063524:
                *puVar1 = uVar7;
                halt_baddata();
              }
              if (iVar3 == 0x6d) {
                halt_baddata();
              }
            }
            else {
              iVar11 = auStack_7c[0] + iVar11;
              iVar2 = iVar10 + *(int *)(&DAT_82073280 + iVar3);
              if ((*(byte *)(iVar2 + 4) & 0x80) == 0) {
                halt_baddata();
              }
              if ((auStack_7c[0] == 0) || (*pbVar4 != 10)) {
                bVar8 = *(byte *)(iVar2 + 4) & 0xfb;
              }
              else {
                bVar8 = *(byte *)(iVar2 + 4) | 4;
              }
              *(byte *)(iVar2 + 4) = bVar8;
              pbVar5 = pbVar4;
              pbVar14 = pbVar4;
              while (pbVar5 < pbVar4 + iVar11) {
                bVar8 = *pbVar5;
                if (bVar8 == 0x1a) {
                  iVar11 = iVar10 + *(int *)(&DAT_82073280 + iVar3);
                  if ((*(byte *)(iVar11 + 4) & 0x40) == 0) {
                    *(byte *)(iVar11 + 4) = *(byte *)(iVar11 + 4) | 2;
                  }
                  else {
                    *pbVar14 = 0x1a;
                    pbVar14 = pbVar14 + 1;
                  }
                  break;
                }
                if (bVar8 != 0xd) {
                  *pbVar14 = bVar8;
                  pbVar12 = pbVar5 + 1;
                  goto LAB_82063470;
                }
                if (pbVar5 < pbVar4 + iVar11 + -1) {
                  pbVar12 = pbVar5 + 1;
                  if (pbVar5[1] == 10) {
                    *pbVar14 = 10;
                    pbVar12 = pbVar5 + 2;
                  }
                  else {
                    *pbVar14 = 0xd;
                  }
                  goto LAB_82063470;
                }
                pbVar12 = pbVar5 + 1;
                iVar2 = func_0x8206b578(*(undefined4 *)(iVar10 + *(int *)(&DAT_82073280 + iVar3)),
                                        acStack_80,1,auStack_7c,0);
                if (((iVar2 == 0) && (iVar2 = thunk_FUN_820563b8(), iVar2 != 0)) ||
                   (auStack_7c[0] == 0)) goto LAB_8206346c;
                if ((*(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 4) & 0x48) != 0) {
                  if (acStack_80[0] != '\n') {
                    *pbVar14 = 0xd;
                    *(char *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 5) = acStack_80[0];
                    goto LAB_82063470;
                  }
LAB_8206341c:
                  *pbVar14 = 10;
                  goto LAB_82063470;
                }
                if ((pbVar14 == pbVar4) && (acStack_80[0] == '\n')) goto LAB_8206341c;
                FUN_82067c78();
                pbVar5 = pbVar12;
                if (acStack_80[0] != '\n') {
LAB_8206346c:
                  *pbVar14 = 0xd;
LAB_82063470:
                  pbVar14 = pbVar14 + 1;
                  pbVar5 = pbVar12;
                }
              }
              if (cVar9 != '\x01') {
                halt_baddata();
              }
              if (pbVar14 == pbVar4) {
                halt_baddata();
              }
              pbVar5 = pbVar14 + -1;
              uVar6 = (uint)*pbVar5;
              if ((*pbVar5 & 0x80) != 0) {
                iVar11 = 1;
                cVar9 = *(char *)(uVar6 + 0x82072190);
                while (((iVar2 = (int)cVar9, iVar2 == 0 && (iVar11 < 5)) && (pbVar4 <= pbVar5))) {
                  pbVar5 = pbVar5 + -1;
                  uVar6 = (uint)*pbVar5;
                  iVar11 = iVar11 + 1;
                  cVar9 = *(char *)(uVar6 + 0x82072190);
                }
                if (iVar2 == 0) {
                  puVar1 = (undefined4 *)FUN_820620c0();
                  uVar7 = 0x2a;
                  goto LAB_82063524;
                }
                if (iVar2 + 1 == iVar11) {
                  pbVar14 = pbVar5 + iVar11;
                }
                else {
                  if ((*(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 4) & 0x48) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  *(char *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 5) = (char)uVar6;
                  pbVar14 = pbVar5 + 1;
                  if (1 < iVar11) {
                    bVar8 = *pbVar14;
                    pbVar14 = pbVar5 + 2;
                    *(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x29) = bVar8;
                  }
                  if (iVar11 == 3) {
                    bVar8 = *pbVar14;
                    pbVar14 = pbVar14 + 1;
                    *(byte *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x2a) = bVar8;
                  }
                  pbVar14 = pbVar14 + -iVar11;
                }
              }
              iVar11 = FUN_820554a0(0xfde9,0,pbVar4,(int)pbVar14 - (int)pbVar4,pbVar4,param_3 >> 1);
              if (iVar11 != 0) {
                *(uint *)(iVar10 + *(int *)(&DAT_82073280 + iVar3) + 0x38) =
                     (uint)((int)pbVar14 - (int)pbVar4 != iVar11);
                halt_baddata();
              }
              thunk_FUN_820563b8();
            }
            FUN_82062130();
            halt_baddata();
          }
          if ((~param_3 & 1) != 0) {
            iVar3 = FUN_8205c1c0();
            if (iVar3 != 0) {
              FUN_82067c78();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            puVar1 = (undefined4 *)FUN_820620c0();
            *puVar1 = 0xc;
            puVar1 = (undefined4 *)FUN_820620f8();
            uVar7 = 8;
            goto LAB_82063094;
          }
        }
LAB_82063158:
        puVar1 = (undefined4 *)FUN_820620f8();
        *puVar1 = 0;
      }
      else {
        puVar1 = (undefined4 *)FUN_820620f8();
        *puVar1 = 0;
      }
      puVar1 = (undefined4 *)FUN_820620c0();
      uVar7 = 0x16;
      goto LAB_820630d0;
    }
  }
  puVar1 = (undefined4 *)FUN_820620f8();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_820620c0();
  uVar7 = 9;
LAB_820630d0:
  *puVar1 = uVar7;
  FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063678 @ 82063678 ==== */

void FUN_82063678(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_820637e8 @ 820637e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820637e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063820 @ 82063820 ==== */

void FUN_82063820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_82063a68 @ 82063a68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063a68(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uStack00000014;
  
  uStack00000014 = FUN_8205b89c();
  if (uStack00000014 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_820620f8();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && (uStack00000014 < DAT_8207326c)) {
      iVar1 = ((int)uStack00000014 >> 5) * 4;
      iVar3 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)(*(int *)(&DAT_82073280 + iVar1) + iVar3 + 4) & 1) != 0) {
        FUN_82068950();
        if ((*(byte *)(*(int *)(&DAT_82073280 + iVar1) + iVar3 + 4) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_820620c0();
          *puVar2 = 9;
          puVar2 = (undefined4 *)FUN_820620f8();
          *puVar2 = 0;
        }
        else {
          FUN_82063820();
        }
        FUN_82063bac();
        halt_baddata();
      }
    }
    puVar2 = (undefined4 *)FUN_820620f8();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
    FUN_8205faa0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063bac @ 82063bac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063bac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063be8 @ 82063be8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063be8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063c58 @ 82063c58 ==== */

void FUN_82063c58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82063d18 @ 82063d18 ==== */

void FUN_82063d18(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_82063d40 @ 82063d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063db0 @ 82063db0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063db0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063dd0 @ 82063dd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82063dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82063e68 @ 82063e68 ==== */

void FUN_82063e68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82063ef0 @ 82063ef0 ==== */

void FUN_82063ef0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82064000 @ 82064000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064030 @ 82064030 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82064030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82064090 @ 82064090 ==== */

void FUN_82064090(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82064130 @ 82064130 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82065340) */

uint FUN_82064130(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ushort uVar8;
  uint uVar7;
  byte *pbVar9;
  byte *extraout_r4;
  byte *extraout_r4_00;
  byte *extraout_r4_01;
  byte *extraout_r4_02;
  byte *in_r6;
  int in_r7;
  undefined1 uVar10;
  undefined *in_r8;
  undefined1 uVar11;
  uint in_r9;
  byte *pbVar12;
  int iVar13;
  char cVar16;
  int iVar14;
  undefined1 *puVar15;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  byte bVar23;
  undefined8 uVar24;
  byte *pbStack0000001c;
  byte *pbStack0000002c;
  undefined2 local_2a0;
  undefined2 uStack_29e;
  byte *pbStack_29c;
  uint local_260;
  byte *local_22c;
  
  uVar24 = FUN_8205b870();
  puVar5 = (undefined4 *)((ulonglong)uVar24 >> 0x20);
  pbVar9 = (byte *)uVar24;
  uVar19 = 0;
  pbStack0000001c = pbVar9;
  if ((pbVar9 == (byte *)0x0) || (puVar5 == (undefined4 *)0x0)) goto LAB_82064170;
  pbStack0000002c = in_r6;
  if ((puVar5[3] & 0x40) == 0) {
    uVar6 = FUN_82062a60((int)puVar5);
    in_r8 = &DAT_82072148;
    puVar21 = in_r8;
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      in_r7 = ((int)uVar6 >> 5) * 4;
      in_r9 = *(uint *)(&DAT_82073280 + in_r7);
      puVar21 = (undefined *)(in_r9 + (uVar6 & 0x1f) * 0x48);
    }
    if ((puVar21[0x28] & 0xfe) != 0) {
LAB_82064170:
      puVar5 = (undefined4 *)FUN_820620c0();
      *puVar5 = 0x16;
      FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar21 = in_r8;
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      in_r9 = uVar6 & 0x1f;
      in_r8 = (undefined *)(((int)uVar6 >> 5) * 4);
      puVar21 = (undefined *)(*(int *)(&DAT_82073280 + (int)in_r8) + in_r9 * 0x48);
    }
    if ((puVar21[0x28] & 1) != 0) goto LAB_82064170;
  }
  bVar23 = *pbVar9;
  local_260 = (uint)local_260._1_3_;
  pbVar9 = pbStack0000001c;
  while( true ) {
    if (bVar23 == 0) {
      halt_baddata();
    }
    uVar8 = FUN_820623d8((uint)bVar23);
    if (uVar8 == 0) break;
    do {
      iVar13 = puVar5[1];
      puVar5[1] = iVar13 + -1;
      if (iVar13 + -1 < 0) {
        uVar6 = FUN_82062ea8();
      }
      else {
        uVar6 = (uint)*(byte *)*puVar5;
        *puVar5 = (byte *)*puVar5 + 1;
      }
      if (uVar6 == 0xffffffff) goto LAB_820642c8;
      uVar8 = FUN_820623d8(uVar6 & 0xff);
    } while (uVar8 != 0);
    FUN_82068e60();
LAB_820642c8:
    do {
      pbVar9 = pbVar9 + 1;
      uVar8 = FUN_820623d8((uint)*pbVar9);
    } while (uVar8 != 0);
LAB_82065300:
    bVar23 = *pbVar9;
  }
  if (*pbVar9 != 0x25) {
LAB_82065238:
    iVar13 = puVar5[1];
    puVar5[1] = iVar13 + -1;
    if (iVar13 + -1 < 0) {
      uVar19 = FUN_82062ea8();
    }
    else {
      uVar19 = (uint)*(byte *)*puVar5;
      *puVar5 = (byte *)*puVar5 + 1;
    }
    pbVar12 = pbVar9 + 1;
    pbStack0000001c = pbVar12;
    if (*pbVar9 != uVar19) {
LAB_82065320:
      if (uVar19 == 0xffffffff) {
        halt_baddata();
      }
      FUN_82068e60();
      halt_baddata();
    }
    uVar8 = FUN_82068080(uVar19 & 0xff);
    if (uVar8 != 0) {
      iVar13 = puVar5[1];
      puVar5[1] = iVar13 + -1;
      if (iVar13 + -1 < 0) {
        uVar6 = FUN_82062ea8();
      }
      else {
        uVar6 = (uint)*(byte *)*puVar5;
        *puVar5 = (byte *)*puVar5 + 1;
      }
      bVar23 = *pbVar12;
      pbVar12 = pbVar9 + 2;
      pbStack0000001c = pbVar12;
      if (bVar23 != uVar6) {
        if (uVar6 != 0xffffffff) {
          FUN_82068e60();
        }
        goto LAB_82065320;
      }
    }
LAB_820652d8:
    pbVar9 = pbVar12;
    if (uVar19 == 0xffffffff) {
      if (*pbVar12 != 0x25) {
        halt_baddata();
      }
      pbVar9 = pbStack0000001c;
      if (pbStack0000001c[1] != 0x6e) {
        halt_baddata();
      }
    }
    goto LAB_82065300;
  }
  if (pbVar9[1] == 0x25) {
    if (pbVar9[1] == 0x25) {
      pbVar9 = pbVar9 + 1;
    }
    goto LAB_82065238;
  }
  iVar17 = 0;
  iVar13 = 0;
  cVar16 = '\0';
  puVar22 = (undefined4 *)0x0;
  piVar20 = (int *)0x0;
  pbStack0000001c = pbVar9;
  do {
    pbStack0000001c = pbStack0000001c + 1;
    uVar6 = (uint)*pbStack0000001c;
    uVar8 = FUN_82062398(uVar6);
    uVar7 = (uint)uVar8;
    pbVar9 = pbStack0000001c;
    if (uVar7 == 0) {
      if (uVar6 < 0x4f) {
        if (uVar6 != 0x4e) {
          if (uVar6 == 0x2a) {
            cVar16 = cVar16 + '\x01';
          }
          else if (uVar6 != 0x46) {
            if (uVar6 == 0x49) {
              bVar23 = pbStack0000001c[1];
              if ((bVar23 == 0x36) && (in_r9 = (uint)pbStack0000001c[2], in_r9 == 0x34)) {
                halt_baddata();
              }
              if (bVar23 == 0x33) {
                in_r9 = (uint)pbStack0000001c[2];
                pbVar9 = pbStack0000001c + 2;
                if (in_r9 == 0x32) goto LAB_82064494;
              }
              pbVar9 = pbStack0000001c;
              if ((((bVar23 != 100) && (bVar23 != 0x69)) && (bVar23 != 0x6f)) &&
                 ((bVar23 != 0x78 && (bVar23 != 0x58)))) goto LAB_82064430;
            }
            else if (uVar6 != 0x4c) goto LAB_82064430;
          }
        }
      }
      else if (uVar6 == 0x68) {
        piVar20 = (int *)(int)(char)((char)piVar20 + -1);
      }
      else {
        if (uVar6 == 0x6c) {
          if (pbStack0000001c[1] == 0x6c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (uVar6 != 0x77) {
LAB_82064430:
          puVar22 = (undefined4 *)(int)(char)((char)puVar22 + '\x01');
          pbVar9 = pbStack0000001c;
          goto LAB_82064494;
        }
        piVar20 = (int *)(int)(char)((char)piVar20 + '\x01');
      }
    }
    else {
      iVar17 = iVar17 + 1;
      iVar13 = iVar13 * 10 + uVar6 + -0x30;
    }
LAB_82064494:
    pbStack0000001c = pbVar9;
  } while ((char)puVar22 == '\0');
  if (cVar16 == '\0') {
    local_22c = pbStack0000002c;
    pbStack0000002c = (byte *)(((uint)(pbStack0000002c + 7) & 0xfffffff8) + 8);
  }
  bVar1 = (char)piVar20 == '\0';
  bVar23 = bVar1 << 1;
  puVar21 = (undefined *)0x0;
  if ((bVar1) &&
     ((*pbStack0000001c == 0x53 || (piVar20 = (int *)0xffffffff, *pbStack0000001c == 0x43)))) {
    piVar20 = (int *)0x1;
  }
  uVar18 = *pbStack0000001c | 0x20;
  pbVar9 = extraout_r4;
  if (uVar18 != 0x6e) {
    if ((uVar18 == 99) || (uVar18 == 0x7b)) {
      iVar14 = puVar5[1] + -1;
      bVar23 = (iVar14 == 0) << 1;
      puVar5[1] = iVar14;
      if (iVar14 < 0) {
        uVar7 = FUN_82062ea8();
        pbVar9 = extraout_r4_02;
        uVar19 = uVar7;
      }
      else {
        bVar2 = *(byte *)*puVar5;
        *puVar5 = (byte *)*puVar5 + 1;
        uVar19 = (uint)bVar2;
      }
    }
    else {
      do {
        iVar14 = puVar5[1] + -1;
        bVar23 = (iVar14 == 0) << 1;
        puVar5[1] = iVar14;
        if (iVar14 < 0) {
          uVar7 = FUN_82062ea8();
          pbVar9 = extraout_r4_00;
          uVar19 = uVar7;
        }
        else {
          bVar2 = *(byte *)*puVar5;
          *puVar5 = (byte *)*puVar5 + 1;
          uVar19 = (uint)bVar2;
        }
        uVar6 = uVar19;
        if (uVar19 == 0xffffffff) break;
        uVar8 = FUN_820623d8(uVar19 & 0xff);
        uVar7 = (uint)uVar8;
        bVar23 = (uVar7 == 0) << 1;
        pbVar9 = extraout_r4_01;
      } while (uVar7 != 0);
    }
    if (uVar19 == 0xffffffff) {
      halt_baddata();
    }
  }
  if ((iVar17 != 0) && (iVar13 == 0)) goto LAB_82065320;
  puVar15 = (undefined1 *)(uVar18 - 99);
  bVar1 = puVar15 == (undefined1 *)0x18;
  switch(puVar15) {
  case (undefined1 *)0x0:
    iVar13 = 0;
    goto LAB_820622cc;
  case (undefined1 *)0x1:
  case (undefined1 *)0xc:
  case (undefined1 *)0x12:
switchD_820645f0_caseD_1:
    do {
      piVar20 = (int *)((int)piVar20 + 1);
      *(int **)(uVar6 + 0x54) = piVar20;
      iVar13 = iRam0000338c;
      if (iRam00003390 <= (int)piVar20) {
LAB_82062788:
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[3] = puVar5[3] & 0x8000;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          puVar5[7] = 0;
          puVar5[4] = 0xffffffff;
        }
        FUN_820627cc();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar17 = (int)piVar20 * 4;
      if (*(int *)(iVar17 + iRam0000338c) == 0) {
        iVar14 = FUN_8205c1c0();
        *(int *)(iVar17 + iVar13) = iVar14;
        if (iVar14 != 0) {
          iVar13 = FUN_82063dd0();
          if (iVar13 == 0) {
            FUN_8205c288();
            *(undefined4 *)(iVar17 + iRam0000338c) = 0;
          }
          else {
            func_0x8206c3d0(*(int *)(iVar17 + iRam0000338c) + 0x20);
            puVar5 = *(undefined4 **)(iVar17 + iRam0000338c);
            *(undefined4 **)(uVar6 + 0x50) = puVar5;
            puVar5[3] = 0;
          }
        }
        goto LAB_82062788;
      }
      uVar19 = *(uint *)(*(int *)(iVar17 + iRam0000338c) + 0xc);
      if (((uVar19 & 0x83) != 0) || ((uVar19 & 0x8000) != 0)) goto switchD_820645f0_caseD_d;
      if (((2 < (int)piVar20) && ((int)piVar20 < 0x14)) && (iVar13 = FUN_82063ef0(), iVar13 == 0))
      goto LAB_82062788;
      FUN_8205d630();
      puVar22 = *(undefined4 **)(iVar17 + iRam0000338c);
      if ((puVar22[3] & 0x83) == 0) {
        *(undefined4 **)(uVar6 + 0x50) = puVar22;
        puVar5 = puVar22;
        goto LAB_82062788;
      }
      FUN_8205d6c0((int)piVar20,(int)puVar22);
    } while( true );
  case (undefined1 *)0x5:
  case (undefined1 *)0x7:
  case (undefined1 *)0x8:
  case (undefined1 *)0x9:
  case (undefined1 *)0xa:
  case (undefined1 *)0xe:
  case (undefined1 *)0xf:
  case (undefined1 *)0x11:
  case (undefined1 *)0x13:
  case (undefined1 *)0x14:
  case (undefined1 *)0x16:
  case (undefined1 *)0x17:
    for (; puVar15 + -5 < in_r6; puVar15 = puVar15 + 0x48) {
      uVar11 = (undefined1)in_r9;
      puVar15[-1] = uVar11;
      uVar10 = SUB41(in_r8,0);
      *puVar15 = uVar10;
      *(undefined4 *)(puVar15 + -5) = 0xffffffff;
      *(uint *)(puVar15 + 3) = in_r9;
      puVar15[0x23] = uVar11;
      puVar15[0x24] = uVar10;
      puVar15[0x25] = uVar10;
      *(uint *)(puVar15 + 0x3b) = in_r9;
      puVar15[0x37] = uVar11;
      pbStack0000001c = *(byte **)(in_r7 + 0x3280);
      in_r6 = pbStack0000001c + 0x900;
    }
    iVar13 = 3;
    while( true ) {
      pbStack0000001c = pbStack0000001c + in_r9;
      in_r9 = in_r9 + 0x48;
      pbStack0000001c[4] = 0xc1;
      pbStack0000001c[0] = 0xff;
      pbStack0000001c[1] = 0xff;
      pbStack0000001c[2] = 0xff;
      pbStack0000001c[3] = 0xfe;
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) break;
      pbStack0000001c = *(byte **)(in_r7 + 0x3280);
    }
    return 0;
  case (undefined1 *)0x6:
    do {
      if (bVar1) {
        puVar3 = puVar21;
        if (in_r7 == 0) {
          in_r7 = 1;
          uVar6 = uVar6 & 0xffffbfff;
          puVar3 = in_r8;
        }
      }
      else {
switchD_820645f0_caseD_15:
        if (puVar15 != (undefined1 *)0x74) goto LAB_82062454;
        puVar3 = puVar21;
        if ((in_r9 & 0xc000) == 0) {
          in_r9 = in_r9 | 0x4000;
          puVar3 = in_r8;
        }
      }
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              in_r8 = puVar3;
              pbVar9 = pbVar9 + 1;
              bVar23 = *pbVar9;
              if ((bVar23 == 0) || (in_r8 == (undefined *)0x0)) goto LAB_820625d0;
              puVar15 = (undefined1 *)(uint)bVar23;
              if ((undefined1 *)0x53 < puVar15) break;
              if (puVar15 == (undefined1 *)0x53) {
                puVar3 = puVar21;
                if (in_r6 == (byte *)0x0) {
                  in_r6 = (byte *)0x1;
                  puVar3 = in_r8;
                }
              }
              else {
                puVar3 = in_r8;
                if (puVar15 != (undefined1 *)0x20) {
                  if (puVar15 == (undefined1 *)0x2b) {
                    puVar3 = puVar21;
                    if ((in_r9 & 2) == 0) {
                      in_r9 = in_r9 & 0xfffffffe | 2;
                      uVar6 = uVar6 & 0xfffffffc | 0x80;
                      puVar3 = in_r8;
                    }
                  }
                  else {
                    puVar3 = puVar21;
                    if (puVar15 != (undefined1 *)0x2c) {
                      if (puVar15 == (undefined1 *)0x44) {
                        if ((in_r9 & 0x40) == 0) {
                          in_r9 = in_r9 | 0x40;
                          puVar3 = in_r8;
                        }
                      }
                      else {
                        puVar3 = in_r8;
                        if (puVar15 != (undefined1 *)0x4e) {
                          if (puVar15 != (undefined1 *)0x52) goto LAB_82062454;
                          puVar3 = puVar21;
                          if (in_r6 == (byte *)0x0) {
                            in_r6 = (byte *)0x1;
                            puVar3 = in_r8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (puVar15 != (undefined1 *)0x54) break;
            puVar3 = puVar21;
            if ((in_r9 & 0x1000) == 0) {
              in_r9 = in_r9 | 0x1000;
              puVar3 = in_r8;
            }
          }
          if (puVar15 != (undefined1 *)0x62) break;
          puVar3 = puVar21;
          if ((in_r9 & 0xc000) == 0) {
            in_r9 = in_r9 | 0x8000;
            puVar3 = in_r8;
          }
        }
        if (puVar15 != (undefined1 *)0x63) break;
        puVar3 = puVar21;
        if (in_r7 == 0) {
          in_r7 = 1;
          uVar6 = uVar6 | 0x4000;
          puVar3 = in_r8;
        }
      }
      bVar1 = puVar15 == (undefined1 *)0x6e;
    } while( true );
  case (undefined1 *)0xb:
    if ((bool)(bVar23 >> 1 & 1)) {
      puVar5 = (undefined4 *)FUN_820620f8();
      *puVar5 = 0;
      puVar5 = (undefined4 *)FUN_820620c0();
      *puVar5 = 9;
      FUN_8205faa0();
      halt_baddata();
    }
    FUN_82068950();
    if ((*(byte *)(*piVar20 + 4) & 1) == 0) {
      puVar5 = (undefined4 *)FUN_820620c0();
      *puVar5 = 9;
      *(undefined4 *)(uVar6 + 0x50) = 0xffffffff;
    }
    else {
      uVar4 = FUN_82062818();
      *(undefined4 *)(uVar6 + 0x50) = uVar4;
    }
  case (undefined1 *)0x2:
  case (undefined1 *)0x3:
  case (undefined1 *)0x4:
    FUN_82062a28();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 *)0xd:
    goto switchD_820645f0_caseD_d;
  case (undefined1 *)0x10:
    if ((bool)(bVar23 >> 1 & 1)) {
      in_r8 = (undefined *)CONCAT22(local_2a0,uStack_29e);
      bVar23 = (((uint)in_r8 & 0xfffff) == 0) << 1;
      pbStack0000001c = pbStack_29c;
      goto switchD_820645f0_caseD_18;
    }
    break;
  case (undefined1 *)0x15:
    goto switchD_820645f0_caseD_15;
  case (undefined1 *)0x18:
switchD_820645f0_caseD_18:
    if ((!(bool)(bVar23 >> 1 & 1)) || (pbStack0000001c != (byte *)0x0)) {
      iVar13 = -0x3fd;
      uVar19 = (uint)puVar15 & 0x10;
      while (uVar19 == 0) {
        puVar21 = (undefined *)((int)in_r8 << 1);
        in_r8 = puVar21;
        if (((uint)pbStack0000001c & 0x80000000) != 0) {
          in_r8 = (undefined *)((uint)puVar21 | 1);
        }
        pbStack0000001c = (byte *)((int)pbStack0000001c << 1);
        iVar13 = iVar13 + -1;
        uVar19 = (uint)puVar21 & 0x100000;
      }
      goto LAB_820622cc;
    }
    break;
  default:
    if (*pbStack0000001c != uVar19) goto LAB_82065320;
    if (cVar16 == '\0') {
      pbStack0000002c = local_22c;
    }
    pbVar12 = pbStack0000001c + 1;
    pbStack0000001c = pbVar12;
    goto LAB_820652d8;
  }
  iVar13 = (in_r9 >> 4 & 0xfff) - 0x3fe;
LAB_820622cc:
  *(int *)pbVar9 = iVar13;
  return uVar7;
switchD_820645f0_caseD_d:
  goto switchD_820645f0_caseD_1;
LAB_820625d0:
  while (bVar23 == 0x20) {
    pbVar9 = pbVar9 + 1;
    bVar23 = *pbVar9;
  }
  if (bVar23 == 0) {
    iVar13 = FUN_82068750();
    if (iVar13 == 0) {
      DAT_82073004 = DAT_82073004 + 1;
      puVar22[3] = uVar6;
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[2] = 0;
      puVar22[7] = 0;
      puVar22[4] = local_260;
    }
  }
  else {
LAB_82062454:
    puVar5 = (undefined4 *)FUN_820620c0();
    *puVar5 = 0x16;
    FUN_8205faa0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065388 @ 82065388 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065388(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = FUN_8205b8a4();
  if (uVar1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
    halt_baddata();
  }
  if (((int)uVar1 < 0) || (DAT_8207326c <= uVar1)) {
LAB_820653d8:
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
    FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = ((int)uVar1 >> 5) * 4;
  iVar5 = (uVar1 & 0x1f) * 0x48;
  if ((*(byte *)(iVar5 + *(int *)(&DAT_82073280 + iVar3) + 4) & 1) == 0) goto LAB_820653d8;
  FUN_82068950();
  if ((*(byte *)(iVar5 + *(int *)(&DAT_82073280 + iVar3) + 4) & 1) != 0) {
    FUN_82068890(uVar1);
    iVar3 = func_0x8206b820();
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_820563b8();
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_82065488;
    piVar4 = (int *)FUN_820620f8();
    *piVar4 = iVar3;
  }
  puVar2 = (undefined4 *)FUN_820620c0();
  *puVar2 = 9;
LAB_82065488:
  FUN_820654c0();
  halt_baddata();
}


/* ==== FUN_820654c0 @ 820654c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820654c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820654f8 @ 820654f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820654f8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_8205b8a4();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  piVar6 = (int *)uVar7;
  if (iVar1 == 0) {
    FUN_8205c1c0();
  }
  else if (piVar6 == (int *)0x0) {
    FUN_8205c288();
  }
  else {
    do {
      if ((int *)0xfffff000 < piVar6) {
        FUN_8205f968();
        puVar4 = (undefined4 *)FUN_820620c0();
        *puVar4 = 0xc;
        halt_baddata();
      }
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x1;
      }
      uVar2 = FUN_82059fd0();
      iVar3 = FUN_820596f0(uVar2,0,iVar1,piVar6);
      if (iVar3 != 0) {
        halt_baddata();
      }
      if (DAT_8207302c == 0) {
        puVar4 = (undefined4 *)FUN_820620c0();
        uVar5 = thunk_FUN_820563b8();
        uVar2 = FUN_82062050(uVar5);
        *puVar4 = uVar2;
        halt_baddata();
      }
      iVar3 = FUN_8205f968();
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)FUN_820620c0();
    uVar5 = thunk_FUN_820563b8();
    uVar2 = FUN_82062050(uVar5);
    *puVar4 = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820655e8 @ 820655e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820655e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065640 @ 82065640 ==== */

undefined8 FUN_82065640(undefined8 param_1,undefined8 param_2)

{
  uint uStack00000010;
  uint uStack00000018;
  
  uStack00000018 = (uint)((ulonglong)param_2 >> 0x20);
  uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
  return CONCAT44(uStack00000010 & 0x7fffffff | uStack00000018 & 0x80000000,(int)param_1);
}


/* ==== FUN_82065678 @ 82065678 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82065678(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_r4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [64];
  
  FUN_8205b8a4();
  uVar1 = FUN_82065768(auStack_40,auStack_50,extraout_r4,0,0,0,0,param_3);
  if ((uVar1 & 4) == 0) {
    FUN_82069128(auStack_40,auStack_48);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82065730 @ 82065730 ==== */

ushort FUN_82065730(int param_1,ushort param_2)

{
  if ((-2 < param_1) && (param_1 < 0x100)) {
    return *(ushort *)(*(int *)(DAT_820725f8 + 200) + param_1 * 2) & param_2;
  }
  return 0;
}


/* ==== FUN_82065768 @ 82065768 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x82065998) */
/* WARNING: Removing unreachable block (ram,0x820659a8) */
/* WARNING: Removing unreachable block (ram,0x820659b0) */
/* WARNING: Removing unreachable block (ram,0x82065984) */
/* WARNING: Removing unreachable block (ram,0x8206605c) */
/* WARNING: Removing unreachable block (ram,0x82065ba0) */
/* WARNING: Removing unreachable block (ram,0x82065990) */
/* WARNING: Removing unreachable block (ram,0x820659bc) */
/* WARNING: Removing unreachable block (ram,0x82066048) */
/* WARNING: Removing unreachable block (ram,0x820659c4) */
/* WARNING: Removing unreachable block (ram,0x82065c28) */
/* WARNING: Removing unreachable block (ram,0x82065c1c) */
/* WARNING: Removing unreachable block (ram,0x82065c30) */
/* WARNING: Removing unreachable block (ram,0x82065c48) */
/* WARNING: Removing unreachable block (ram,0x82065c4c) */
/* WARNING: Removing unreachable block (ram,0x82065c58) */
/* WARNING: Removing unreachable block (ram,0x82065c5c) */
/* WARNING: Removing unreachable block (ram,0x82065c64) */
/* WARNING: Removing unreachable block (ram,0x82065c68) */
/* WARNING: Removing unreachable block (ram,0x82066074) */
/* WARNING: Removing unreachable block (ram,0x82065c70) */
/* WARNING: Removing unreachable block (ram,0x8206608c) */
/* WARNING: Removing unreachable block (ram,0x82065c78) */
/* WARNING: Removing unreachable block (ram,0x82065c90) */
/* WARNING: Removing unreachable block (ram,0x82065c94) */
/* WARNING: Removing unreachable block (ram,0x82065ca4) */
/* WARNING: Removing unreachable block (ram,0x82065cc0) */
/* WARNING: Removing unreachable block (ram,0x82065cd4) */
/* WARNING: Removing unreachable block (ram,0x82065ce4) */
/* WARNING: Removing unreachable block (ram,0x82065cf8) */
/* WARNING: Removing unreachable block (ram,0x82065d14) */
/* WARNING: Removing unreachable block (ram,0x82065d54) */
/* WARNING: Removing unreachable block (ram,0x82065d5c) */
/* WARNING: Removing unreachable block (ram,0x82065d68) */
/* WARNING: Removing unreachable block (ram,0x82065d78) */
/* WARNING: Removing unreachable block (ram,0x82065d80) */
/* WARNING: Removing unreachable block (ram,0x82065d94) */
/* WARNING: Removing unreachable block (ram,0x82065da0) */
/* WARNING: Removing unreachable block (ram,0x82065dac) */
/* WARNING: Removing unreachable block (ram,0x82065db4) */
/* WARNING: Removing unreachable block (ram,0x82065dbc) */
/* WARNING: Removing unreachable block (ram,0x82065dd4) */
/* WARNING: Removing unreachable block (ram,0x82065de0) */
/* WARNING: Removing unreachable block (ram,0x82065dec) */
/* WARNING: Removing unreachable block (ram,0x82065df8) */
/* WARNING: Removing unreachable block (ram,0x82065e04) */
/* WARNING: Removing unreachable block (ram,0x82065e14) */
/* WARNING: Removing unreachable block (ram,0x82065e34) */
/* WARNING: Removing unreachable block (ram,0x82065e3c) */
/* WARNING: Removing unreachable block (ram,0x82065e40) */
/* WARNING: Removing unreachable block (ram,0x82065e4c) */
/* WARNING: Removing unreachable block (ram,0x82065e58) */
/* WARNING: Removing unreachable block (ram,0x82065e64) */
/* WARNING: Removing unreachable block (ram,0x82065e74) */
/* WARNING: Removing unreachable block (ram,0x82065e84) */
/* WARNING: Removing unreachable block (ram,0x82065e90) */
/* WARNING: Removing unreachable block (ram,0x82065ed4) */
/* WARNING: Removing unreachable block (ram,0x82065edc) */
/* WARNING: Removing unreachable block (ram,0x82065ef0) */
/* WARNING: Removing unreachable block (ram,0x82065ef8) */
/* WARNING: Removing unreachable block (ram,0x82065f04) */
/* WARNING: Removing unreachable block (ram,0x82065f08) */
/* WARNING: Removing unreachable block (ram,0x82065f3c) */
/* WARNING: Removing unreachable block (ram,0x82065f4c) */
/* WARNING: Removing unreachable block (ram,0x82065f5c) */
/* WARNING: Removing unreachable block (ram,0x82065f68) */
/* WARNING: Removing unreachable block (ram,0x82065f7c) */
/* WARNING: Removing unreachable block (ram,0x82065fd4) */
/* WARNING: Removing unreachable block (ram,0x82065f88) */
/* WARNING: Removing unreachable block (ram,0x82065fc8) */
/* WARNING: Removing unreachable block (ram,0x82065f98) */
/* WARNING: Removing unreachable block (ram,0x82065fbc) */
/* WARNING: Removing unreachable block (ram,0x82065fa8) */
/* WARNING: Removing unreachable block (ram,0x82065fdc) */
/* WARNING: Removing unreachable block (ram,0x82065fe8) */
/* WARNING: Removing unreachable block (ram,0x82066014) */
/* WARNING: Removing unreachable block (ram,0x82066020) */
/* WARNING: Removing unreachable block (ram,0x82065e9c) */
/* WARNING: Removing unreachable block (ram,0x82065d70) */
/* WARNING: Removing unreachable block (ram,0x82066024) */
/* WARNING: Removing unreachable block (ram,0x8206602c) */
/* WARNING: Removing unreachable block (ram,0x82066034) */
/* WARNING: Removing unreachable block (ram,0x820660a0) */

void FUN_82065768(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_r10;
  
  FUN_8205b884();
  if (in_r10 != 0) {
    for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r')); param_3 = param_3 + 1) {
    }
                    /* WARNING: Could not recover jumptable at 0x82065840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)UNK_8200a830 * 4 + -0x7df9cbbc))();
    return;
  }
  puVar2 = (undefined4 *)FUN_820620c0();
  *puVar2 = 0x16;
  FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820660c8 @ 820660c8 ==== */

void FUN_820660c8(undefined4 param_1)

{
  DAT_820731b8 = param_1;
  return;
}


/* ==== FUN_820660e0 @ 820660e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820660e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066140 @ 82066140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066190 @ 82066190 ==== */

void FUN_82066190(void)

{
  DAT_820731bc = &LAB_82063ce0;
  return;
}


/* ==== FUN_820661c0 @ 820661c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820661c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066268 @ 82066268 ==== */

void FUN_82066268(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_82066290 @ 82066290 ==== */

void FUN_82066290(void)

{
  uRam82073268 = 0;
  return;
}


/* ==== FUN_820662a0 @ 820662a0 ==== */

undefined4 FUN_820662a0(void)

{
  return DAT_820731d0;
}


/* ==== FUN_820662b8 @ 820662b8 ==== */

void FUN_820662b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a0();
}


/* ==== FUN_82066560 @ 82066560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066560(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820665a0 @ 820665a0 ==== */

void FUN_820665a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82066690 @ 82066690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066690(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820666f8 @ 820666f8 ==== */

void FUN_820666f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_820667b0 @ 820667b0 ==== */

int FUN_820667b0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)(param_3 + 0xc) != 0) &&
      (piVar1 = *(int **)(*(int *)(param_2 + 8) + 4), piVar1 != (int *)0x0)) &&
     (iVar2 = *piVar1, iVar2 != -2)) {
    return iVar2;
  }
  iVar2 = FUN_820666f8();
  return iVar2;
}


/* ==== FUN_820667f0 @ 820667f0 ==== */

void FUN_820667f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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


/* ==== FUN_82066810 @ 82066810 ==== */

undefined4 FUN_82066810(uint *param_1,uint *param_2,uint *param_3)

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


/* ==== FUN_820668c0 @ 820668c0 ==== */

undefined4 FUN_820668c0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if ((iVar1 != -0x1fbcbcae) && (iVar1 != -0x1fbcb0b3)) {
    if (iVar1 != -0x1f928c9d) {
      return 0;
    }
    iVar1 = FUN_8205f658();
    *(undefined4 *)(iVar1 + 0x84) = 0;
    FUN_820660e0();
  }
  iVar1 = FUN_8205f658();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = FUN_8205f658();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return 0;
}


/* ==== FUN_82066950 @ 82066950 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066950(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int iStack0000002c;
  
  uVar6 = FUN_8205b89c();
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  iVar2 = FUN_820667b0(uVar1,iVar4,param_3);
  iStack0000002c = param_4;
  if (param_4 != -1) {
    do {
      piVar5 = (int *)(iStack0000002c * 8 + *(int *)(param_3 + 8));
      if (piVar5[1] != 0) break;
      iStack0000002c = *piVar5;
    } while (iStack0000002c != -1);
  }
  if ((iVar2 != -1) || (iStack0000002c != -1)) {
    iVar3 = FUN_8205f658();
    *(int *)(iVar3 + 0x84) = *(int *)(iVar3 + 0x84) + 1;
    while (iVar2 != iStack0000002c) {
      if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
        FUN_82066140();
      }
      iVar3 = iVar2 * 8;
      piVar5 = (int *)(*(int *)(param_3 + 8) + iVar3);
      iVar2 = *piVar5;
      if (piVar5[1] != 0) {
        FUN_820667f0(uVar1,iVar4,param_3,iVar2,param_5,param_6);
        FUN_8206a1f0(*(undefined4 *)(*(int *)(param_3 + 8) + iVar3 + 4),uVar1,0x103,0);
      }
    }
    FUN_82066acc();
    if (iVar2 != iStack0000002c) {
      FUN_82066140();
    }
    FUN_820667f0(uVar1,iVar4,param_3,param_4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066acc @ 82066acc ==== */

void FUN_82066acc(void)

{
  int iVar1;
  
  iVar1 = FUN_8205f658();
  if (0 < *(int *)(iVar1 + 0x84)) {
    iVar1 = FUN_8205f658();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  }
  return;
}


/* ==== FUN_82066b0c @ 82066b0c ==== */

void FUN_82066b0c(undefined4 *param_1)

{
  FUN_820668c0(param_1);
  return;
}


/* ==== FUN_82066b78 @ 82066b78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82066b78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82066c20 @ 82066c20 ==== */

void FUN_82066c20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82066cf0 @ 82066cf0 ==== */

void FUN_82066cf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82066f80 @ 82066f80 ==== */

void FUN_82066f80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_820670b0 @ 820670b0 ==== */

void FUN_820670b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b88c();
}


/* ==== FUN_820671f8 @ 820671f8 ==== */

void FUN_820671f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82067370 @ 82067370 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067370(void)

{
  int iVar1;
  byte bVar4;
  int iVar2;
  int iVar3;
  uint *puVar5;
  int in_r6;
  int *piVar6;
  int in_r7;
  uint *puVar7;
  uint in_r8;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  uint local_80;
  uint local_7c;
  
  uVar14 = FUN_8205b880();
  piVar13 = (int *)((ulonglong)uVar14 >> 0x20);
  iVar2 = in_r7;
  iVar12 = in_r7;
  uVar8 = in_r8;
  iVar1 = FUN_820667b0((int)uVar14,in_r6,in_r7);
  if ((iVar1 < -1) || (*(int *)(in_r7 + 4) <= iVar1)) {
    FUN_82066140();
  }
  if (*piVar13 == -0x1f928c9d) {
    uVar8 = 0x19930000;
    if ((piVar13[4] == 3) &&
       ((((iVar9 = piVar13[5], iVar9 == 0x19930520 || (iVar9 == 0x19930521)) ||
         (iVar9 == 0x19930522)) && (piVar13[7] == 0)))) {
      iVar9 = FUN_8205f658();
      if (*(int *)(iVar9 + 0x7c) == 0) {
        halt_baddata();
      }
      iVar9 = FUN_8205f658();
      piVar13 = *(int **)(iVar9 + 0x7c);
      FUN_8205f658();
      bVar4 = FUN_8206a310((int)piVar13);
      if (bVar4 == 0) {
        FUN_82066140();
      }
      if (*piVar13 != -0x1f928c9d) goto LAB_820675e0;
      if ((piVar13[4] == 3) &&
         ((((iVar9 = piVar13[5], iVar9 == 0x19930520 || (iVar9 == 0x19930521)) ||
           (iVar9 == 0x19930522)) && (piVar13[7] == 0)))) {
        FUN_82066140();
      }
    }
    if (((*piVar13 == -0x1f928c9d) && (piVar13[4] == 3)) &&
       ((iVar9 = piVar13[5], iVar9 == 0x19930520 || ((iVar9 == 0x19930521 || (iVar9 == 0x19930522)))
        ))) {
      if (*(int *)(in_r7 + 0xc) == 0) {
        halt_baddata();
      }
      iVar2 = FUN_82060120();
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
                  iVar3 = FUN_82066810(puVar7,(uint *)*piVar6,puVar5);
                  if (iVar3 != 0) {
                    FUN_820670b0();
                    goto LAB_820675c0;
                  }
                  iVar9 = iVar9 + -1;
                } while (0 < iVar9);
              }
              iVar2 = iVar2 + -1;
              puVar7 = puVar7 + 4;
            } while (0 < iVar2);
          }
        }
LAB_820675c0:
        local_80 = local_80 + 1;
        puVar11 = puVar11 + 5;
        if (local_7c <= local_80) {
          halt_baddata();
        }
      } while( true );
    }
  }
LAB_820675e0:
  if (*(int *)(in_r7 + 0xc) != 0) {
    if ((in_r8 & 0xff) != 0) {
      FUN_820660e0();
      uVar14 = FUN_8205b8a4();
      piVar13 = (int *)((ulonglong)uVar14 >> 0x20);
      if ((piVar13[1] & 0x66U) == 0) {
        if (*(int *)(iVar12 + 0xc) != 0) {
          if ((((*piVar13 == -0x1f928c9d) && (2 < (uint)piVar13[4])) &&
              (0x19930522 < (uint)piVar13[5])) && (*(code **)(piVar13[7] + 8) != (code *)0x0)) {
            (**(code **)(piVar13[7] + 8))(piVar13,(int)uVar14,iVar2,in_r6,iVar12);
          }
          else {
            FUN_82067370();
          }
        }
      }
      else if ((*(int *)(iVar12 + 4) != 0) && (uVar8 == 0)) {
        if (((piVar13[1] & 0x20U) != 0) && (iVar1 = FUN_8205fe18(), iVar1 != 0)) {
          iVar12 = FUN_8205f658();
          if (*(int *)(iVar12 + 0x8c) == 0) {
            FUN_82066140();
          }
          iVar12 = FUN_8205f658();
          FUN_8205fe60(*(int *)(iVar12 + 0x8c),iVar2);
          FUN_8205f658();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        FUN_8205fef0();
        if (((*(int *)(iVar12 + 0xc) != 0) &&
            (iVar2 = *(int *)(*(int *)(in_r6 + 8) + 4), iVar2 != 0)) &&
           (puVar11 = *(undefined4 **)(iVar2 + 8), puVar11 != (undefined4 *)0x0)) {
          FUN_82060388();
          iVar12 = FUN_82060330();
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
    FUN_820671f8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067628 @ 82067628 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067628(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_8205b8a4();
  piVar1 = (int *)((ulonglong)uVar5 >> 0x20);
  if ((piVar1[1] & 0x66U) == 0) {
    if (*(int *)(param_5 + 0xc) != 0) {
      if ((((*piVar1 == -0x1f928c9d) && (2 < (uint)piVar1[4])) && (0x19930522 < (uint)piVar1[5])) &&
         (*(code **)(piVar1[7] + 8) != (code *)0x0)) {
        (**(code **)(piVar1[7] + 8))(piVar1,(int)uVar5,param_3,param_4,param_5);
      }
      else {
        FUN_82067370();
      }
    }
  }
  else if ((*(int *)(param_5 + 4) != 0) && (param_6 == 0)) {
    if (((piVar1[1] & 0x20U) != 0) && (iVar2 = FUN_8205fe18(), iVar2 != 0)) {
      iVar2 = FUN_8205f658();
      if (*(int *)(iVar2 + 0x8c) == 0) {
        FUN_82066140();
      }
      iVar2 = FUN_8205f658();
      FUN_8205fe60(*(int *)(iVar2 + 0x8c),param_3);
      FUN_8205f658();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_8205fef0();
    if (((*(int *)(param_5 + 0xc) != 0) && (iVar2 = *(int *)(*(int *)(param_4 + 8) + 4), iVar2 != 0)
        ) && (puVar4 = *(undefined4 **)(iVar2 + 8), puVar4 != (undefined4 *)0x0)) {
      FUN_82060388();
      iVar3 = FUN_82060330();
      if ((iVar3 != 0) && ((code *)puVar4[1] != (code *)0x0)) {
        (*(code *)puVar4[1])(*puVar4);
        *puVar4 = 0;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067840 @ 82067840 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820678e8 @ 820678e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820678e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067990 @ 82067990 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067990(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067af0 @ 82067af0 ==== */

void FUN_82067af0(ushort *param_1,uint *param_2)

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


/* ==== FUN_82067bd0 @ 82067bd0 ==== */

void FUN_82067bd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82067c78 @ 82067c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067d48 @ 82067d48 ==== */

void FUN_82067d48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82067e90 @ 82067e90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067e90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067ec8 @ 82067ec8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82067ec8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82067f50 @ 82067f50 ==== */

undefined4 FUN_82067f50(void)

{
  return 0;
}


/* ==== FUN_82067f58 @ 82067f58 ==== */

bool FUN_82067f58(void)

{
  return (uRam82072c60 | 1) == uRam820731e4;
}


/* ==== FUN_82068078 @ 82068078 ==== */

undefined4 FUN_82068078(undefined4 *param_1,uint *param_2,uint param_3,ushort param_4)

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
      puVar1 = (undefined4 *)FUN_820620c0();
      *puVar1 = 0x16;
      FUN_8205faa0();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
        FUN_8205bac0(param_2,0,param_3);
      }
      puVar1 = (undefined4 *)FUN_820620c0();
      *puVar1 = 0x2a;
      puVar1 = (undefined4 *)FUN_820620c0();
      return *puVar1;
    }
    if (param_2 != (uint *)0x0) {
      if (param_3 == 0) {
        puVar1 = (undefined4 *)FUN_820620c0();
        *puVar1 = 0x22;
        FUN_8205faa0();
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


/* ==== FUN_82068080 @ 82068080 ==== */

ushort FUN_82068080(uint param_1)

{
  return *(ushort *)((param_1 & 0xff) * 2 + *(int *)(DAT_820725f8 + 200)) & 0x8000;
}


/* ==== FUN_820680a0 @ 820680a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820680a0(void)

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
  
  uVar8 = FUN_8205b888();
  puVar6 = (uint *)uVar8;
  auStack_6c[0] = 0;
  bVar7 = 0;
  iVar1 = func_0x8206b258(auStack_6c);
  if (iVar1 != 0) {
    FUN_8205fb78();
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
    if (2 < uVar3) goto LAB_82068108;
    iVar1 = -0x40000000;
  }
  if ((((in_r7 != 0x10) && (in_r7 != 0x20)) && (in_r7 != 0x30)) &&
     ((in_r7 != 0x40 && (in_r7 != 0x80)))) {
LAB_82068108:
    puVar2 = (undefined4 *)FUN_820620f8();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 0x16;
    FUN_8205faa0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in_r6 & 0x700;
  if (uVar3 < 0x401) {
    if ((((uVar3 != 0x400) && (uVar3 != 0)) && (uVar3 != 0x100)) &&
       ((uVar3 != 0x200 && (uVar3 != 0x300)))) goto LAB_82068108;
  }
  else if (((uVar3 != 0x500) && (uVar3 != 0x600)) && (uVar3 != 0x700)) goto LAB_82068108;
  uVar3 = FUN_82068a80();
  *puVar6 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar2 = (undefined4 *)FUN_820620f8();
    *puVar2 = 0;
    *puVar6 = 0xffffffff;
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 0x18;
    FUN_820620c0();
    halt_baddata();
  }
  *(undefined4 *)((ulonglong)uVar8 >> 0x20) = 1;
  iVar4 = FUN_820558b0();
  if (iVar4 == -1) {
    if ((iVar1 == -0x40000000) && ((in_r6 & 1) != 0)) {
      iVar1 = 0x40000000;
      iVar4 = FUN_820558b0();
      if (iVar4 != -1) goto LAB_82068364;
    }
    iVar1 = *(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
    thunk_FUN_820563b8();
    FUN_82062130();
    goto LAB_82068358;
  }
LAB_82068364:
  FUN_82068770(*puVar6,iVar4);
  *(byte *)(*(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48 + 4) =
       bVar7 | 1;
  iVar4 = *(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  if ((((int)(char)(bVar7 | 1) & 0x80U) != 0) && ((in_r6 & 2) != 0)) {
    iVar4 = FUN_82062b08();
    if (iVar4 == -1) {
      piVar5 = (int *)FUN_820620f8();
      if (*piVar5 != 0x83) {
LAB_82068410:
        FUN_82062818();
        goto LAB_82068358;
      }
    }
    else {
      acStack_70[0] = '\0';
      iVar4 = FUN_82063058(*puVar6,acStack_70,1);
      if ((iVar4 == 0) && (acStack_70[0] == '\x1a')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = FUN_82062b08();
      if (iVar4 == -1) goto LAB_82068410;
    }
  }
  iVar4 = *(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 1;
  iVar4 = *(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 0xfe;
  if ((in_r6 & 8) != 0) {
    iVar4 = *(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x20;
  }
  if (iVar1 != -0x40000000) {
    halt_baddata();
  }
  if ((in_r6 & 1) == 0) {
    halt_baddata();
  }
  FUN_82055588();
  iVar1 = FUN_820558b0();
  if (iVar1 != -1) {
    *(int *)(*(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48) = iVar1;
    halt_baddata();
  }
  thunk_FUN_820563b8();
  FUN_82062130();
  iVar1 = *(int *)(&DAT_82073280 + ((int)*puVar6 >> 5) * 4) + (*puVar6 & 0x1f) * 0x48;
  *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfe;
  FUN_820687f8(*puVar6);
LAB_82068358:
  FUN_820620c0();
  halt_baddata();
}


/* ==== FUN_820685c8 @ 820685c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820685c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_820686c4 @ 820686c4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_820686c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82068750 @ 82068750 ==== */

void FUN_82068750(void)

{
  FUN_820685c8();
  return;
}


/* ==== FUN_82068770 @ 82068770 ==== */

undefined4 FUN_82068770(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_8207326c)) {
    iVar2 = (param_1 & 0x1f) * 0x48;
    if (*(int *)(*(int *)(&DAT_82073280 + ((int)param_1 >> 5) * 4) + iVar2) == -1) {
      *(undefined4 *)(*(int *)(&DAT_82073280 + ((int)param_1 >> 5) * 4) + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_820620c0();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_820620f8();
  *puVar1 = 0;
  return 0xffffffff;
}


/* ==== FUN_820687f8 @ 820687f8 ==== */

undefined4 FUN_820687f8(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((((int)param_1 < 0) || (DAT_8207326c <= param_1)) ||
      (piVar4 = (int *)(*(int *)(&DAT_82073280 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48)
      , (*(byte *)(piVar4 + 1) & 1) == 0)) || (*piVar4 == -1)) {
    puVar2 = (undefined4 *)FUN_820620c0();
    *puVar2 = 9;
    piVar4 = (int *)FUN_820620f8();
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


/* ==== FUN_82068890 @ 82068890 ==== */

undefined4 FUN_82068890(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_820620f8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_820620c0();
    uVar2 = 0xffffffff;
    *puVar1 = 9;
  }
  else if ((((int)param_1 < 0) || (DAT_8207326c <= param_1)) ||
          (puVar1 = (undefined4 *)
                    (*(int *)(&DAT_82073280 + ((int)param_1 >> 5) * 4) + (param_1 & 0x1f) * 0x48),
          (*(byte *)(puVar1 + 1) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_820620f8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_820620c0();
    *puVar1 = 9;
    FUN_8205faa0();
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* ==== FUN_82068950 @ 82068950 ==== */

void FUN_82068950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82068a18 @ 82068a18 ==== */

undefined4 FUN_82068a18(void)

{
  int unaff_r31;
  
  FUN_82063db0();
  return *(undefined4 *)(unaff_r31 + 0x94);
}


/* ==== FUN_82068a50 @ 82068a50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82068a50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82068a80 @ 82068a80 ==== */

void FUN_82068a80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b898();
}


/* ==== FUN_82068c98 @ 82068c98 ==== */

void FUN_82068c98(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_82068cbc @ 82068cbc ==== */

void FUN_82068cbc(void)

{
  FUN_82063db0();
  return;
}


/* ==== FUN_82068d00 @ 82068d00 ==== */

void FUN_82068d00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8a8();
}


/* ==== FUN_82068dc8 @ 82068dc8 ==== */

void FUN_82068dc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8205b8ac();
}


/* ==== FUN_82068e60 @ 82068e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82068e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069008 @ 82069008 ==== */

undefined4 FUN_82069008(ushort *param_1,byte *param_2,int param_3)

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


/* ==== FUN_82069128 @ 82069128 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_82069128(void)

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
  
  uVar18 = FUN_8205b884();
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
    uVar13 = uRam8207296c - 1;
    iVar5 = (int)uRam8207296c >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam8207296c < 0 && (uRam8207296c & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam8207296c +
                    (iVar5 + (uint)((int)uRam8207296c < 0 && (uRam8207296c & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_82069270;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_82069270:
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
    if (iVar16 < (int)(iRam82072968 - uRam8207296c)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam82072968 < iVar16) {
        iVar15 = (int)uRam82072970 >> 5;
        if (iVar16 < iRam82072964) {
          iVar5 = iVar15 + (uint)((int)uRam82072970 < 0 && (uRam82072970 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam82072978 + iVar16;
          uVar13 = uRam82072970 +
                   (iVar15 + (uint)((int)uRam82072970 < 0 && (uRam82072970 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam82072970 < 0 && (uRam82072970 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam82072970 +
                   (iVar15 + (uint)((int)uRam82072970 < 0 && (uRam82072970 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam82072978 + iRam82072964;
        }
      }
      else {
        uVar14 = iRam82072968 - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam8207296c < 0 && (uRam8207296c & 0x1f) != 0);
        uVar9 = 0x1f - (uRam8207296c +
                       (iVar5 + (uint)((int)uRam8207296c < 0 && (uRam8207296c & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_820694dc;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_820694dc:
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
        uVar13 = uRam82072970 + 1;
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
  uVar9 = 0x1f - uRam82072970;
  if (iRam82072974 == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam82072974 != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069840 @ 82069840 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_82069840(void)

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
  
  uVar18 = FUN_8205b884();
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
    uVar13 = uRam82072984 - 1;
    iVar5 = (int)uRam82072984 >> 5;
    auStack_9c[5] = *(uint *)(puVar3 + 1);
    auStack_9c[6] = *(uint *)(puVar3 + 3);
    iVar16 = iVar5 + (uint)((int)uRam82072984 < 0 && (uRam82072984 & 0x1f) != 0);
    iStack_80 = (uint)puVar3[5] << 0x10;
    uVar14 = 0x1f - (uRam82072984 +
                    (iVar5 + (uint)((int)uRam82072984 < 0 && (uRam82072984 & 0x1f) != 0)) * -0x20);
    iVar17 = (int)uVar13 >> 5;
    if ((1 << (uVar14 & 0x3f) & auStack_9c[iVar16 + 1]) != 0) {
      if ((auStack_9c[iVar16 + 1] & ~(-1 << (uVar14 & 0x3f))) == 0) {
        iVar10 = iVar16 + 1;
        if (iVar10 < 3) {
          puVar6 = auStack_9c + iVar16 + 2;
          do {
            if (*puVar6 != 0) goto LAB_82069988;
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < 3);
        }
      }
      else {
LAB_82069988:
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
    if (iVar16 < (int)(iRam82072980 - uRam82072984)) {
      iVar4 = 0;
      auStack_9c[1] = 0;
      auStack_9c[2] = 0;
    }
    else {
      iVar10 = 3;
      if (iRam82072980 < iVar16) {
        iVar15 = (int)uRam82072988 >> 5;
        if (iVar16 < iRam8207297c) {
          iVar5 = iVar15 + (uint)((int)uRam82072988 < 0 && (uRam82072988 & 0x1f) != 0);
          auStack_9c[1] = auStack_9c[1] & 0x7fffffff;
          iVar4 = iRam82072990 + iVar16;
          uVar13 = uRam82072988 +
                   (iVar15 + (uint)((int)uRam82072988 < 0 && (uRam82072988 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iVar15 + (uint)((int)uRam82072988 < 0 && (uRam82072988 & 0x1f) != 0);
          auStack_9c[2] = 0;
          auStack_9c[3] = 0;
          uVar13 = uRam82072988 +
                   (iVar15 + (uint)((int)uRam82072988 < 0 && (uRam82072988 & 0x1f) != 0)) * -0x20;
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
          iVar4 = iRam82072990 + iRam8207297c;
        }
      }
      else {
        uVar14 = iRam82072980 - iVar15;
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
        iVar4 = iVar5 + (uint)((int)uRam82072984 < 0 && (uRam82072984 & 0x1f) != 0);
        uVar9 = 0x1f - (uRam82072984 +
                       (iVar5 + (uint)((int)uRam82072984 < 0 && (uRam82072984 & 0x1f) != 0)) * -0x20
                       );
        if ((1 << (uVar9 & 0x3f) & auStack_9c[iVar4 + 1]) != 0) {
          if ((auStack_9c[iVar4 + 1] & ~(-1 << (uVar9 & 0x3f))) == 0) {
            iVar15 = iVar4 + 1;
            if (iVar15 < 3) {
              puVar6 = auStack_9c + iVar4 + 2;
              do {
                if (*puVar6 != 0) goto LAB_82069bf4;
                iVar15 = iVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar15 < 3);
            }
          }
          else {
LAB_82069bf4:
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
        uVar13 = uRam82072988 + 1;
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
  uVar9 = 0x1f - uRam82072988;
  if (iRam8207298c == 0x40) {
    ((uint *)uVar18)[1] = auStack_9c[2];
  }
  else if (iRam8207298c != 0x20) {
    halt_baddata();
  }
  *(uint *)uVar18 =
       iVar4 << (uVar9 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 | auStack_9c[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_82069f58 @ 82069f58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_82069f58(undefined4 param_1,undefined4 param_2,uint *param_3)

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
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  
  uVar10 = FUN_8205b8a4();
  param_3[2] = 0;
  sVar7 = 0x404e;
  param_3[1] = 0;
  *param_3 = 0;
  if ((int)uVar10 != 0) {
    do {
      pcVar9 = (char *)((ulonglong)uVar10 >> 0x20);
      FUN_8205d810();
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
      uVar2 = uVar6 + uStack_38;
      param_3[2] = uVar6;
      param_3[1] = uVar5;
      *param_3 = uVar3;
      if ((uVar2 < uVar6) || (uVar2 < uStack_38)) {
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
      uVar6 = param_3[1] + uStack_3c;
      if ((uVar6 < param_3[1]) || (uVar6 < uStack_3c)) {
        bVar1 = true;
      }
      param_3[1] = uVar6;
      if (bVar1) {
        *param_3 = *param_3 + 1;
      }
      uVar3 = uVar2 * 2;
      param_3[2] = uVar3;
      uVar2 = param_3[1] << 1 | uVar2 >> 0x1f;
      uVar6 = (*param_3 + iStack_40) * 2 | uVar6 >> 0x1f;
      param_3[1] = uVar2;
      bVar1 = false;
      *param_3 = uVar6;
      uStack_38 = (uint)*pcVar9;
      uVar4 = uVar3 + uStack_38;
      if ((uVar4 < uVar3) || (uVar4 < uStack_38)) {
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
    if (*param_3 != 0) goto LAB_8206a1d4;
  }
  do {
    uVar2 = param_3[2];
    param_3[2] = uVar2 << 0x10;
    uVar6 = param_3[1] >> 0x10;
    *param_3 = uVar6;
    sVar7 = sVar7 + -0x10;
    param_3[1] = param_3[1] << 0x10 | uVar2 >> 0x10;
  } while (uVar6 == 0);
LAB_8206a1d4:
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


/* ==== FUN_8206a1f0 @ 8206a1f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a1f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a24c @ 8206a24c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a24c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a310 @ 8206a310 ==== */

byte FUN_8206a310(int param_1)

{
  return -(param_1 != 0) & 1;
}


/* ==== FUN_8206a330 @ 8206a330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_8206a3dc @ 8206a3dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_8206a3dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


