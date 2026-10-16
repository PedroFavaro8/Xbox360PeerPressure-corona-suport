// Decompiled from bootanim.xex.pe  base=98000000  (approximate C, for reading only)
/* ==== FUN_9800e000 @ 9800e000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800e000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800ee00 @ 9800ee00 ==== */

void FUN_9800ee00(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[4];
  param_2[2] = param_1[8];
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[1];
  param_2[5] = param_1[5];
  param_2[6] = param_1[9];
  param_2[7] = param_1[0xd];
  param_2[8] = param_1[2];
  param_2[9] = param_1[6];
  param_2[10] = param_1[10];
  param_2[0xb] = param_1[0xe];
  param_2[0xc] = param_1[3];
  param_2[0xd] = param_1[7];
  param_2[0xe] = param_1[0xb];
  param_2[0xf] = param_1[0xf];
  return;
}


/* ==== FUN_9800ee88 @ 9800ee88 ==== */

void FUN_9800ee88(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[3] * param_2[0xc] +
             param_1[1] * param_2[4] + *param_1 * *param_2 + param_2[8] * param_1[2];
  param_3[1] = param_2[0xd] * param_1[3] +
               param_1[1] * param_2[5] + param_2[9] * param_1[2] + *param_1 * param_2[1];
  param_3[2] = param_2[0xe] * param_1[3] +
               param_1[1] * param_2[6] + *param_1 * param_2[2] + param_2[10] * param_1[2];
  param_3[3] = param_2[0xb] * param_1[2] +
               param_2[3] * *param_1 + param_1[1] * param_2[7] + param_1[3] * param_2[0xf];
  param_3[4] = param_1[4] * *param_2 +
               param_1[7] * param_2[0xc] + param_1[5] * param_2[4] + param_2[8] * param_1[6];
  param_3[5] = param_2[0xd] * param_1[7] +
               param_2[9] * param_1[6] + param_1[4] * param_2[1] + param_2[5] * param_1[5];
  param_3[6] = param_1[4] * param_2[2] +
               param_2[0xe] * param_1[7] + param_1[5] * param_2[6] + param_2[10] * param_1[6];
  param_3[7] = param_1[5] * param_2[7] +
               param_1[6] * param_2[0xb] + param_1[4] * param_2[3] + param_1[7] * param_2[0xf];
  param_3[8] = param_1[8] * *param_2 +
               param_1[0xb] * param_2[0xc] + param_1[9] * param_2[4] + param_2[8] * param_1[10];
  param_3[9] = param_2[9] * param_1[10] +
               param_2[0xd] * param_1[0xb] + param_1[8] * param_2[1] + param_2[5] * param_1[9];
  param_3[10] = param_1[8] * param_2[2] +
                param_2[10] * param_1[10] + param_1[9] * param_2[6] + param_2[0xe] * param_1[0xb];
  param_3[0xb] = param_1[9] * param_2[7] +
                 param_1[10] * param_2[0xb] + param_1[8] * param_2[3] + param_1[0xb] * param_2[0xf];
  param_3[0xc] = param_1[0xc] * *param_2 +
                 param_1[0xf] * param_2[0xc] + param_1[0xd] * param_2[4] + param_2[8] * param_1[0xe]
  ;
  param_3[0xd] = param_2[9] * param_1[0xe] +
                 param_2[0xd] * param_1[0xf] + param_1[0xc] * param_2[1] + param_2[5] * param_1[0xd]
  ;
  param_3[0xe] = param_1[0xc] * param_2[2] +
                 param_2[10] * param_1[0xe] +
                 param_1[0xd] * param_2[6] + param_2[0xe] * param_1[0xf];
  param_3[0xf] = param_1[0xd] * param_2[7] +
                 param_1[0xe] * param_2[0xb] +
                 param_1[0xc] * param_2[3] + param_1[0xf] * param_2[0xf];
  return;
}


/* ==== FUN_9800f1d0 @ 9800f1d0 ==== */

uint FUN_9800f1d0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_3 & 0x3f;
  iVar2 = 4;
  if (0 < param_4) {
    param_2 = param_2 << 1;
  }
  if (param_4 == 2) {
    param_1 = param_1 << 1;
  }
  if (((uVar1 == 0x15) || (uVar1 == 0x20)) || (uVar1 == 0x25)) {
    iVar2 = 8;
  }
  return ((param_2 + 0xfU & 0xfffffff0) * ((param_1 + 0x4fU) / 0x50) * 0x50 * iVar2) / 0x1400;
}


/* ==== FUN_9800f248 @ 9800f248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f350 @ 9800f350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f350(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f3f0 @ 9800f3f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f3f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f4f0 @ 9800f4f0 ==== */

void FUN_9800f4f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9800f738 @ 9800f738 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f810 @ 9800f810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800f9f0 @ 9800f9f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800f9f0(void)

{
  int iVar1;
  
  iVar1 = FUN_98044798();
  if (DAT_980021dc < *(float *)(iVar1 + 0xc)) {
    FUN_98025090();
    FUN_980250d8();
    thunk_FUN_98025748();
    FUN_98025ad8();
    FUN_9802bae8();
    FUN_980232b8(DAT_98077954,7);
    FUN_98023288(DAT_98077954,0);
    FUN_98022b20(DAT_98077954,0);
    FUN_98028750();
    FUN_98028548();
    FUN_98028968(DAT_98077954,*(undefined4 *)(iVar1 + 0x1e8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9800fe40 @ 9800fe40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9800fe40(void)

{
  undefined4 *puVar1;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 auStack_80 [12];
  int local_74;
  
  puVar1 = (undefined4 *)FUN_98044798();
  puVar1[0x2b] = 1;
  func_0x98058ac4(auStack_80);
  FUN_980441a0(puVar1 + 0xb,0,0x7c);
  puVar1[0xe] = 1;
  puVar1[0x14] = 1;
  puVar1[0xb] = 0x500;
  puVar1[0xc] = 0x2d0;
  puVar1[0xd] = 0x28280186;
  puVar1[0x15] = 0x2d200196;
  puVar1[0x11] = 1;
  puVar1[0x18] = 1;
  if (local_74 == 0) {
    puVar1[0x16] = 1;
    puVar1[0x24] = 0;
    puVar1[0x23] = 0xa0;
    puVar1[0x25] = 0x460;
    puVar1[0x26] = 0x2d0;
  }
  *(undefined1 *)(puVar1 + 0x2d) = 1;
  puVar1[0x19] = 1;
  puVar1[0x1a] = 1;
  *puVar1 = 0x500;
  puVar1[1] = 0x2d0;
  puVar1[0x14] = 0;
  puVar1[0xf] = 2;
  FUN_98022760();
  if (*(char *)(puVar1 + 0x2d) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98022b20(puVar1[0x2c],2);
  if (*(char *)(puVar1 + 0x2d) != '\0') {
    altv207_13(in_vs32,in_vs39);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_9802bae8();
  FUN_9802a758();
  DAT_98077954 = puVar1[0x2c];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980103a8 @ 980103a8 ==== */

void FUN_980103a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 uVar6;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_108;
  float local_104;
  undefined4 local_100;
  float afStack_f0 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  
  uVar6 = FUN_9804479c();
  puVar3 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  puVar3[0x2a] = param_5;
  *puVar3 = (int)uVar6;
  puVar3[1] = param_3;
  *(undefined1 *)((int)puVar3 + 0x1a) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  *(undefined1 *)((int)puVar3 + 0x19) = 0;
  *(undefined1 *)((int)puVar3 + 0x1b) = 0;
  *(undefined1 *)((int)puVar3 + 0x1d) = 0;
  *(undefined1 *)((int)puVar3 + 0x1e) = 0;
  *(undefined1 *)((int)puVar3 + 0x1f) = 0;
  FUN_98046800();
  FUN_9800fe40();
  FUN_98017948();
  uVar4 = FUN_98021e18();
  puVar3[0x37] = uVar4;
  FUN_9801bba8();
  FUN_98020ed8();
  FUN_980212e0();
  FUN_9801be00();
  FUN_9801bba8();
  FUN_98020ed8();
  FUN_980212e0();
  FUN_980217c8(DAT_98077954,puVar3[0x37],0x100,0x100,puVar3 + 0x3e);
  puVar3[0x3f] = 0;
  uVar4 = FUN_98021e18();
  puVar3[0x38] = uVar4;
  FUN_980207f0();
  DAT_98077958 = FUN_98021e18();
  puVar3[0x35] = DAT_98077958;
  uVar4 = FUN_98021e18();
  puVar3[0x4a] = uVar4;
  uVar4 = FUN_98021e18();
  puVar3[0x4b] = uVar4;
  uVar4 = DAT_980021a8;
  fVar1 = DAT_980005ec;
  local_100 = DAT_9800221c;
  local_108 = DAT_980005ec;
  local_104 = DAT_980005ec;
  local_114 = DAT_980021a8;
  local_118 = DAT_980005ec;
  local_110 = DAT_980005ec;
  local_128 = DAT_980005ec;
  local_124 = DAT_980021b8;
  local_120 = DAT_98002218;
  FUN_98013890(puVar3[0x4a],&local_128,&local_108,&local_118);
  FUN_98013890(puVar3[0x4b],&local_128,&local_108,&local_118);
  FUN_98013400();
  fVar2 = DAT_98002204;
  FUN_98013400();
  local_b0 = fVar2;
  local_ac = fVar1;
  local_a8 = fVar1;
  local_a4 = fVar1;
  local_a0 = fVar1;
  local_98 = fVar1;
  local_94 = fVar1;
  local_90 = fVar1;
  local_8c = fVar1;
  local_9c = DAT_980021f4;
  local_88 = uVar4;
  local_84 = fVar1;
  local_80 = fVar2;
  local_7c = fVar2;
  local_78 = fVar1;
  local_74 = uVar4;
  pfVar5 = (float *)FUN_98013460();
                    /* WARNING: Subroutine does not return */
  FUN_9800ee88(pfVar5,&local_b0,afStack_f0);
}


/* ==== FUN_98010930 @ 98010930 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010930(void)

{
  int iVar1;
  undefined1 in_vs32 [16];
  undefined1 in_vs61 [16];
  
  iVar1 = FUN_980447a8();
  FUN_980112a8();
  FUN_98012460();
  if (*(char *)(iVar1 + 0xb4) != '\0') {
    altv207_13(in_vs32,in_vs61);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98012b88();
  FUN_9801fd68();
  if (*(char *)(iVar1 + 0xb4) != '\0') {
    altv207_13(in_vs32,in_vs61);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_9800f9f0();
  if (*(char *)(iVar1 + 0xb4) == '\0') {
    FUN_9802a758();
  }
  else {
    FUN_98029fe8(DAT_98077954);
    FUN_98029ff0(DAT_98077954,*(undefined4 *)((*(int *)(iVar1 + 0xb8) + 0x2f) * 4 + iVar1),
                 (char *)0x0);
    *(uint *)(iVar1 + 0xb8) = *(int *)(iVar1 + 0xb8) - 1U & 1;
  }
  FUN_98024ee0(DAT_98077954,0,0,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010ab0 @ 98010ab0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010ab0(void)

{
  FUN_980447a8();
  func_0x98058ae4(FUN_98059084);
  FUN_980223e0();
  FUN_98046800();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010bb0 @ 98010bb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010bb0(void)

{
  char cVar1;
  
  FUN_980447a4();
  cVar1 = FUN_98010ab0();
  if (cVar1 != '\0') {
    func_0x98058aa4(&LAB_980590bc,0,0);
    func_0x98058ae4(FUN_98059084);
    FUN_980223e0();
    FUN_98046800();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98010d08 @ 98010d08 ==== */

void FUN_98010d08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98010df8 @ 98010df8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98010df8(void)

{
  int iVar1;
  
  FUN_980447a0();
  iVar1 = FUN_98044af0();
  FUN_98028548();
  FUN_98028750();
  FUN_98028968(DAT_98077954,*(undefined4 *)(iRam98059080 + 0x1e8));
  FUN_98027938(DAT_98077954,0,iVar1);
  FUN_980243c0();
  FUN_98024568();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98011130 @ 98011130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98011130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980112a8 @ 980112a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980112a8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_98044798();
  FUN_98044af0();
  if ((float)puRam98059080[3] <= DAT_980021dc) {
    FUN_98044b3c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98025090();
  FUN_980250d8();
  thunk_FUN_98025748();
  FUN_9802bae8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  iVar2 = 0x34;
  do {
    FUN_9801cea0();
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x98);
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  FUN_9802bae8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  iVar2 = 0x34;
  do {
    FUN_9801cea0();
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x98);
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9801a2a8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  FUN_9802bae8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  iVar2 = 0x34;
  do {
    FUN_9801cea0();
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x98);
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  uVar1 = *puRam98059080;
  FUN_98010df8();
  FUN_9802ef90();
  FUN_9802bae8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_980232b8(DAT_98077954,7);
  FUN_98028750();
  FUN_98028548();
  FUN_98028968(DAT_98077954,puRam98059080[0x79]);
  FUN_98013460();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980123b8 @ 980123b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980123b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012460 @ 98012460 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98012460(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float afStack_110 [16];
  float afStack_d0 [32];
  
  FUN_9804479c();
  FUN_98025090();
  thunk_FUN_98025748();
  uVar1 = DAT_980021a8;
  if (*(float *)(iRam98059080 + 0xc) < _UNK_98002334) {
    DAT_98077958 = *(undefined4 *)(iRam98059080 + 300);
    FUN_9802bae8();
    FUN_980237e8(DAT_98077954,0);
    FUN_9801a2a8();
    FUN_980237e8(DAT_98077954,0xf);
    iVar2 = 0x34;
    iVar3 = iRam98059080;
    do {
      if (*(char *)(*(int *)(*(int *)(iVar3 + 0xe0) + iVar2) + 0xc) != '\0') {
        FUN_9801cea0();
        iVar3 = iRam98059080;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x98);
    FUN_9802ef90();
    FUN_98010df8();
    FUN_9802ef90();
    FUN_98010df8();
    FUN_9802ef90();
  }
  DAT_98077958 = *(undefined4 *)(iRam98059080 + 0x128);
  FUN_9802bae8();
  iVar3 = 0x34;
  do {
    FUN_9801cea0();
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x98);
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  fStack_118 = DAT_980005ec;
  if (*(float *)(*(int *)(*(int *)(iRam98059080 + 0xe0) + 0x14) + 0x58) <= DAT_980005ec) {
    FUN_9802ef90();
    FUN_98010df8();
    FUN_9802ef90();
    FUN_98010df8();
    FUN_9802ef90();
    thunk_FUN_98025748();
    FUN_980301b8();
    DAT_98077958 = *(undefined4 *)(iRam98059080 + 0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98044240();
  if ((uRam98077968 & 1) == 0) {
    uRam98077968 = uRam98077968 | 1;
    uRam98077964 = _UNK_98002330;
  }
  fStack_11c = fStack_118;
  fStack_120 = fStack_118;
  fStack_124 = fStack_118;
  fStack_12c = fStack_118;
  fStack_150 = fRam9805927c;
  uStack_13c = uRam98059278;
  uStack_128 = uRam98059274;
  fStack_130 = fStack_118;
  fStack_134 = fStack_118;
  fStack_138 = fStack_118;
  fStack_140 = fStack_118;
  fStack_144 = fStack_118;
  fStack_148 = fStack_118;
  fStack_14c = fStack_118;
  uStack_114 = uVar1;
  FUN_980123b8();
                    /* WARNING: Subroutine does not return */
  FUN_9800ee88(&fStack_150,afStack_d0,afStack_110);
}


/* ==== FUN_98012a70 @ 98012a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012b48 @ 98012b48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012b48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012b88 @ 98012b88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012b88(void)

{
  float *pfVar1;
  int iVar2;
  float local_120 [72];
  
  FUN_980447a8();
  FUN_98044af8();
  FUN_980232b8(DAT_98077954,7);
  iVar2 = 4;
  pfVar1 = local_120;
  local_120[0] = DAT_98002588;
  local_120[1] = (float)DAT_980005ec;
  local_120[2] = (float)DAT_98002584;
  local_120[3] = (float)DAT_980005ec;
  do {
    if (*pfVar1 <= *(float *)(iRam98059080 + 0xc)) break;
    iVar2 = iVar2 + -1;
    pfVar1 = pfVar1 + -2;
  } while (-1 < iVar2);
  FUN_98028750();
  FUN_98028548();
  FUN_98028968(DAT_98077954,*(undefined4 *)(iRam98059080 + 0x1e4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98012ff8 @ 98012ff8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98012ff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013130 @ 98013130 ==== */

void FUN_98013130(void)

{
  return;
}


/* ==== FUN_98013138 @ 98013138 ==== */

void FUN_98013138(undefined4 param_1,undefined4 param_2)

{
  float afStack_50 [8];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  FUN_98016b58(0x9805dbe0,param_2,afStack_50);
  fStack_30 = -fStack_30;
  fStack_2c = -fStack_2c;
  fStack_28 = -fStack_28;
  FUN_98013a18(DAT_98077958,afStack_50);
  return;
}


/* ==== FUN_980131a0 @ 980131a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980131a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980132c8 @ 980132c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980132c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013390 @ 98013390 ==== */

void FUN_98013390(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_980005ec;
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar4 < DAT_980025c0) {
    *param_1 = DAT_980005ec;
    param_1[1] = fVar5;
    param_1[2] = fVar5;
    return;
  }
  fVar4 = DAT_980021a8 / fVar4;
  *param_1 = fVar2 * fVar4;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar3 * fVar4;
  return;
}


/* ==== FUN_98013400 @ 98013400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013460 @ 98013460 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013460(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980134b0 @ 980134b0 ==== */

void FUN_980134b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = DAT_980021a8;
  fVar6 = DAT_980005ec;
  fVar1 = param_2[1] - param_1[1];
  fVar2 = param_2[2] - param_1[2];
  fVar3 = *param_2 - *param_1;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = DAT_980005ec;
  fVar8 = DAT_980005ec;
  fVar11 = DAT_980005ec;
  if (DAT_980025c0 <= fVar4) {
    fVar4 = DAT_980021a8 / fVar4;
    fVar5 = fVar4 * fVar2;
    fVar8 = fVar4 * fVar1;
    fVar11 = fVar4 * fVar3;
  }
  fVar12 = *param_3 * fVar5 - param_3[2] * fVar11;
  fVar9 = param_3[1] * fVar11 - *param_3 * fVar8;
  fVar10 = param_3[2] * fVar8 - param_3[1] * fVar5;
  fVar1 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12);
  fVar2 = DAT_980005ec;
  fVar3 = DAT_980005ec;
  fVar4 = DAT_980005ec;
  if (DAT_980025c0 <= fVar1) {
    fVar1 = DAT_980021a8 / fVar1;
    fVar2 = fVar1 * fVar9;
    fVar3 = fVar1 * fVar12;
    fVar4 = fVar1 * fVar10;
  }
  param_4[0xe] = DAT_980005ec;
  param_4[0xd] = fVar6;
  param_4[0xc] = fVar6;
  param_4[3] = fVar6;
  param_4[7] = fVar6;
  param_4[0xb] = fVar6;
  *param_4 = fVar4;
  param_4[4] = fVar3;
  param_4[6] = fVar8;
  param_4[10] = fVar5;
  fVar12 = fVar2 * fVar11 - fVar4 * fVar5;
  param_4[0xf] = fVar7;
  fVar6 = fVar3 * fVar5 - fVar2 * fVar8;
  param_4[5] = fVar12;
  fVar9 = fVar4 * fVar8 - fVar3 * fVar11;
  param_4[9] = fVar9;
  param_4[2] = fVar11;
  param_4[8] = fVar2;
  param_4[1] = fVar6;
  fVar7 = -param_1[1];
  fVar1 = -param_1[2];
  fVar10 = -*param_1;
  param_4[0xc] = fVar10 * fVar4 + fVar1 * fVar2 + fVar7 * fVar3;
  param_4[0xd] = fVar10 * fVar6 + fVar1 * fVar9 + fVar7 * fVar12;
  param_4[0xe] = fVar10 * fVar11 + fVar1 * fVar5 + fVar7 * fVar8;
  return;
}


/* ==== FUN_98013640 @ 98013640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013640(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013710 @ 98013710 ==== */

void FUN_98013710(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *param_2 = *param_1;
  param_2[1] = param_1[4];
  param_2[2] = param_1[8];
  fVar3 = DAT_980005ec;
  param_2[3] = DAT_980005ec;
  param_2[4] = param_1[1];
  fVar1 = param_1[5];
  param_2[5] = fVar1;
  fVar2 = param_1[9];
  param_2[6] = fVar2;
  param_2[7] = fVar3;
  param_2[8] = param_1[2];
  param_2[9] = param_1[6];
  param_2[10] = param_1[10];
  param_2[0xb] = fVar3;
  fVar3 = -param_1[0xd];
  fVar4 = -param_1[0xc];
  fVar5 = -param_1[0xe];
  param_2[0xf] = DAT_980021a8;
  param_2[0xd] = fVar4 * param_2[1] + param_2[9] * fVar5 + fVar1 * fVar3;
  param_2[0xc] = fVar3 * param_2[4] + param_2[8] * fVar5 + *param_2 * fVar4;
  param_2[0xe] = param_2[2] * fVar4 + param_2[10] * fVar5 + fVar2 * fVar3;
  return;
}


/* ==== FUN_980137e8 @ 980137e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980137e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013890 @ 98013890 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013890(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  pfVar2 = (float *)uVar3;
  FUN_980134b0(pfVar2,param_3,param_4,(float *)(iVar1 + 0xfc));
  *(float *)(iVar1 + 0x58) = *pfVar2;
  *(float *)(iVar1 + 0x5c) = pfVar2[1];
  *(float *)(iVar1 + 0x60) = pfVar2[2];
  *(float *)(iVar1 + 100) = *param_3;
  *(float *)(iVar1 + 0x68) = param_3[1];
  *(float *)(iVar1 + 0x6c) = param_3[2];
  *(float *)(iVar1 + 0x70) = *param_4;
  *(float *)(iVar1 + 0x74) = param_4[1];
  *(float *)(iVar1 + 0x78) = param_4[2];
  FUN_98013710((float *)(iVar1 + 0xfc),(float *)(iVar1 + 0xbc));
  *(undefined1 *)(iVar1 + 0x40) = 0;
  *(undefined1 *)(iVar1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013930 @ 98013930 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013930(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980139a0 @ 980139a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980139a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013a18 @ 98013a18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013a18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013a70 @ 98013a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013b00 @ 98013b00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013b00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013b90 @ 98013b90 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98013b90(void)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_980447a4();
  pcVar1 = (char *)((ulonglong)uVar9 >> 0x20);
  pcVar3 = (char *)uVar9;
  *pcVar1 = *pcVar3;
  pcVar1[1] = pcVar3[2];
  pcVar1[2] = pcVar3[3];
  *(undefined2 *)(pcVar1 + 4) = *(undefined2 *)(pcVar3 + 4);
  *(undefined2 *)(pcVar1 + 6) = *(undefined2 *)(pcVar3 + 6);
  *(undefined2 *)(pcVar1 + 8) = *(undefined2 *)(pcVar3 + 8);
  *(undefined4 *)(pcVar1 + 0xc) = *(undefined4 *)(pcVar3 + 0xc);
  *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(pcVar3 + 0x10);
  uVar2 = FUN_98021e18();
  *(undefined4 *)(pcVar1 + 0x14) = uVar2;
  if (iRam98077988 == 100) {
    iRam98077988 = 100 - *pcVar1;
  }
  iVar4 = 0;
  iVar5 = iRam98077988;
  if ('\0' < *pcVar1) {
    iVar7 = 0;
    iVar6 = iRam98077988 << 1;
    pbVar8 = (byte *)(iRam98077988 + -0x67fa0ee0);
    do {
      *(uint *)(*(int *)(pcVar1 + 0x14) + iVar7) = (*pbVar8 & 1) << 1 | 1;
      if ((*pbVar8 & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(*(int *)(pcVar1 + 0x14) + iVar7 + 0xc) = *(undefined2 *)(iVar6 + -0x67fa0e78);
      if ((*pbVar8 & 4) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(*(int *)(pcVar1 + 0x14) + iVar7 + 0xe) = *(undefined2 *)(iVar6 + -0x67fa0db0);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 2;
      pbVar8 = pbVar8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar4 < *pcVar1);
  }
  iRam98077988 = iVar5;
  *(undefined4 *)(pcVar1 + 0x18) = *(undefined4 *)(pcVar3 + 0x14);
  *(undefined4 *)(pcVar1 + 0x1c) = *(undefined4 *)(pcVar3 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013d88 @ 98013d88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013d88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98013e20 @ 98013e20 ==== */

uint FUN_98013e20(double param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  double dVar8;
  
  iVar2 = *(int *)(param_2 + 0x14);
  iVar5 = (int)param_2[1];
  if ((double)*(float *)(iVar5 * 4 + iVar2) <= param_1) {
    return iVar5 - 1;
  }
  if (param_1 <= (double)*(float *)(*param_2 * 4 + iVar2)) {
    return (int)*param_2;
  }
  uVar4 = iVar5 + 1;
  uVar7 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  uVar3 = 0;
  while( true ) {
    uVar1 = uVar7;
    pfVar6 = (float *)(uVar1 * 4 + iVar2);
    dVar8 = (double)*pfVar6;
    if ((dVar8 <= param_1) && (param_1 < (double)pfVar6[1])) break;
    if (dVar8 <= param_1) {
      uVar7 = uVar4 + uVar1;
      uVar7 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
      uVar3 = uVar1;
    }
    else {
      uVar7 = uVar1 + uVar3;
      uVar7 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
      uVar4 = uVar1;
    }
  }
  return uVar1;
}


/* ==== FUN_98013ec0 @ 98013ec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98013ec0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  double extraout_f1;
  
  pcVar7 = (char *)FUN_98044798();
  if (param_4 <= *pcVar7) {
    pfVar15 = *(float **)(pcVar7 + 0x20);
    iVar8 = 1;
    pfVar16 = pfVar15 + param_4 + 1;
    *param_5 = DAT_980021a8;
    fVar6 = DAT_980005ec;
    if (0 < param_4) {
      param_3 = param_3 << 2;
      iVar14 = param_3;
      pfVar11 = pfVar15;
      do {
        pfVar17 = pfVar11 + 1;
        iVar14 = iVar14 + -4;
        param_3 = param_3 + 4;
        iVar9 = 0;
        *pfVar17 = (float)(extraout_f1 - (double)*(float *)(*(int *)(pcVar7 + 0x14) + iVar14 + 4));
        *(float *)((int)pfVar17 + ((int)pfVar16 - (int)pfVar15)) =
             (float)((double)*(float *)(param_3 + *(int *)(pcVar7 + 0x14)) - extraout_f1);
        fVar4 = fVar6;
        if (3 < iVar8) {
          pfVar10 = (float *)(param_5 + -1);
          pfVar13 = pfVar16 + 2;
          pfVar11 = pfVar11 + 2;
          do {
            iVar9 = iVar9 + 4;
            fVar3 = *(float *)(((int)param_5 - (int)pfVar16) + (int)pfVar13);
            fVar2 = pfVar10[4];
            fVar5 = pfVar10[1] / (pfVar13[-1] + pfVar11[-1]);
            pfVar10[1] = pfVar13[-1] * fVar5 + fVar4;
            fVar4 = pfVar10[2] / (*pfVar13 + pfVar11[-2]);
            pfVar10[2] = *pfVar13 * fVar4 + pfVar11[-1] * fVar5;
            fVar3 = fVar3 / (pfVar13[1] + pfVar11[-3]);
            *(float *)(((int)param_5 - (int)pfVar16) + (int)pfVar13) =
                 pfVar13[1] * fVar3 + pfVar11[-2] * fVar4;
            pfVar1 = pfVar13 + 2;
            pfVar13 = pfVar13 + 4;
            fVar2 = fVar2 / (*pfVar1 + pfVar11[-4]);
            pfVar10 = pfVar10 + 4;
            *pfVar10 = *pfVar1 * fVar2 + pfVar11[-3] * fVar3;
            pfVar11 = pfVar11 + -4;
            fVar4 = *pfVar11 * fVar2;
          } while (iVar9 < iVar8 + -3);
        }
        if (iVar9 < iVar8) {
          iVar12 = iVar8 - iVar9;
          pfVar10 = (float *)(param_5 + iVar9 + -1);
          pfVar11 = pfVar16 + iVar9;
          pfVar13 = pfVar15 + iVar12 + 1;
          do {
            pfVar11 = pfVar11 + 1;
            fVar2 = pfVar10[1] / (*pfVar11 + pfVar13[-1]);
            pfVar10 = pfVar10 + 1;
            *pfVar10 = *pfVar11 * fVar2 + fVar4;
            pfVar13 = pfVar13 + -1;
            fVar4 = *pfVar13 * fVar2;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        iVar8 = iVar8 + 1;
        *(float *)((int)pfVar17 + ((int)param_5 - (int)pfVar15)) = fVar4;
        pfVar11 = pfVar17;
      } while (iVar8 <= param_4);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014080 @ 98014080 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014080(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  char *pcVar9;
  int extraout_r4;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int in_r6;
  int iVar13;
  float *pfVar14;
  int in_r7;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  double extraout_f1;
  int local_ac;
  int local_a8;
  
  pcVar9 = (char *)FUN_98044770();
  uVar8 = DAT_980021a8;
  iVar19 = (int)*pcVar9;
  if (extraout_r4 <= iVar19) {
    pfVar22 = *(float **)(pcVar9 + 0x20);
    iVar18 = iVar19 + 1;
    iVar27 = 1;
    **(undefined4 **)(pcVar9 + 0x24) = DAT_980021a8;
    fVar7 = DAT_980005ec;
    iVar31 = (int)*pcVar9;
    pfVar17 = pfVar22 + iVar19 + 1;
    if (0 < iVar31) {
      iVar19 = iVar18 * 4;
      in_r6 = in_r6 << 2;
      iVar24 = iVar19 + 4;
      iVar25 = iVar24;
      iVar28 = iVar18;
      iVar23 = in_r6;
      pfVar14 = pfVar22;
      do {
        pfVar26 = pfVar14 + 1;
        iVar23 = iVar23 + -4;
        in_r6 = in_r6 + 4;
        iVar31 = 0;
        *pfVar26 = (float)(extraout_f1 - (double)*(float *)(*(int *)(pcVar9 + 0x14) + iVar23 + 4));
        *(float *)(((int)pfVar17 - (int)pfVar22) + (int)pfVar26) =
             (float)((double)*(float *)(*(int *)(pcVar9 + 0x14) + in_r6) - extraout_f1);
        fVar1 = fVar7;
        if (3 < iVar27) {
          iVar32 = (iVar18 * 2 + iVar27) * 4;
          iVar20 = iVar18 * 0x10;
          iVar11 = iVar27 << 2;
          iVar30 = (iVar18 * 3 + iVar27) * 4;
          pfVar14 = pfVar14 + 2;
          pfVar12 = pfVar17;
          iVar33 = iVar25;
          do {
            iVar13 = (iVar28 + iVar31) * 4;
            iVar16 = (iVar28 + iVar31 + 2) * 4;
            iVar34 = (iVar28 + 3 + iVar31) * 4;
            *(float *)(*(int *)(pcVar9 + 0x24) + iVar13) = pfVar14[-1] + pfVar12[1];
            iVar31 = iVar31 + 4;
            iVar29 = *(int *)(pcVar9 + 0x24);
            fVar2 = *(float *)(iVar29 + iVar11 + -4) / *(float *)(iVar29 + iVar13);
            *(float *)(iVar29 + iVar11) = pfVar12[1] * fVar2 + fVar1;
            fVar1 = pfVar14[-1];
            *(float *)(*(int *)(pcVar9 + 0x24) + iVar13 + 4) = pfVar14[-2] + pfVar12[2];
            iVar29 = *(int *)(pcVar9 + 0x24);
            iVar11 = iVar11 + iVar20;
            fVar5 = *(float *)(iVar33 + iVar29 + -4) / *(float *)(iVar29 + iVar13 + 4);
            *(float *)(iVar33 + iVar29) = pfVar12[2] * fVar5 + fVar1 * fVar2;
            fVar1 = pfVar14[-2];
            *(float *)(*(int *)(pcVar9 + 0x24) + iVar16) = pfVar14[-3] + pfVar12[3];
            iVar13 = *(int *)(pcVar9 + 0x24);
            fVar6 = *(float *)(iVar32 + iVar13 + -4) / *(float *)(iVar13 + iVar16);
            *(float *)(iVar32 + iVar13) = pfVar12[3] * fVar6 + fVar1 * fVar5;
            fVar2 = pfVar14[-3];
            *(float *)(*(int *)(pcVar9 + 0x24) + iVar34) = pfVar14[-4] + pfVar12[4];
            iVar13 = *(int *)(pcVar9 + 0x24);
            pfVar12 = pfVar12 + 4;
            iVar33 = iVar33 + iVar20;
            fVar1 = *(float *)(iVar30 + iVar13 + -4) / *(float *)(iVar13 + iVar34);
            *(float *)(iVar30 + iVar13) = *pfVar12 * fVar1 + fVar2 * fVar6;
            pfVar14 = pfVar14 + -4;
            iVar32 = iVar32 + iVar20;
            iVar30 = iVar30 + iVar20;
            fVar1 = *pfVar14 * fVar1;
          } while (iVar31 < iVar27 + -3);
        }
        if (iVar31 < iVar27) {
          iVar20 = iVar27 - iVar31;
          iVar32 = (iVar31 * iVar18 + iVar27) * 4;
          pfVar14 = pfVar17 + iVar31;
          pfVar12 = pfVar22 + iVar20 + 1;
          do {
            iVar11 = iVar28 + iVar31;
            iVar31 = iVar31 + 1;
            iVar11 = iVar11 * 4;
            *(float *)(*(int *)(pcVar9 + 0x24) + iVar11) = pfVar12[-1] + pfVar14[1];
            iVar30 = *(int *)(pcVar9 + 0x24);
            pfVar14 = pfVar14 + 1;
            fVar2 = *(float *)(iVar30 + iVar32 + -4) / *(float *)(iVar30 + iVar11);
            *(float *)(iVar30 + iVar32) = *pfVar14 * fVar2 + fVar1;
            pfVar12 = pfVar12 + -1;
            iVar32 = iVar19 + iVar32;
            fVar1 = *pfVar12 * fVar2;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        iVar27 = iVar27 + 1;
        *(float *)(*(int *)(pcVar9 + 0x24) + iVar24) = fVar1;
        iVar31 = (int)*pcVar9;
        iVar25 = iVar25 + 4;
        iVar28 = iVar28 + iVar18;
        iVar24 = iVar19 + 4 + iVar24;
        pfVar14 = pfVar26;
      } while (iVar27 <= iVar31);
    }
    if (-1 < iVar31) {
      uVar15 = iVar31 + 1;
      if (3 < (int)uVar15) {
        uVar35 = uVar15 >> 2;
        iVar25 = iVar31 * iVar18;
        iVar27 = (iVar31 + -2) * iVar18;
        iVar28 = (iVar31 + -3) * iVar18;
        iVar19 = iVar18 * -4;
        iVar23 = (iVar31 + -1) * iVar18;
        puVar21 = (undefined4 *)((iVar31 + 1) * 4 + in_r7);
        iVar31 = iVar31 - (uVar15 & 0xfffffffc);
        do {
          iVar24 = *pcVar9 + iVar25;
          iVar25 = iVar19 + iVar25;
          puVar21[-1] = *(undefined4 *)(iVar24 * 4 + *(int *)(pcVar9 + 0x24));
          iVar24 = *pcVar9 + iVar23;
          iVar23 = iVar19 + iVar23;
          puVar21[-2] = *(undefined4 *)(iVar24 * 4 + *(int *)(pcVar9 + 0x24));
          iVar24 = *pcVar9 + iVar27;
          iVar27 = iVar19 + iVar27;
          puVar21[-3] = *(undefined4 *)(iVar24 * 4 + *(int *)(pcVar9 + 0x24));
          iVar24 = *pcVar9 + iVar28;
          iVar28 = iVar19 + iVar28;
          puVar21 = puVar21 + -4;
          *puVar21 = *(undefined4 *)(iVar24 * 4 + *(int *)(pcVar9 + 0x24));
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      if (-1 < iVar31) {
        iVar19 = iVar31 + 1;
        iVar27 = iVar31 * iVar18;
        puVar21 = (undefined4 *)((iVar31 + 1) * 4 + in_r7);
        do {
          iVar31 = *pcVar9 + iVar27;
          iVar27 = iVar27 - iVar18;
          puVar21 = puVar21 + -1;
          *puVar21 = *(undefined4 *)(iVar31 * 4 + *(int *)(pcVar9 + 0x24));
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
    }
    fVar1 = DAT_980021d8;
    iVar27 = 0;
    iVar19 = (int)*pcVar9;
    if (-1 < iVar19) {
      in_r7 = iVar18 * 4 + in_r7;
      local_a8 = 0;
      iVar31 = -iVar18;
      local_ac = 1;
      do {
        iVar19 = 1;
        **(undefined4 **)(pcVar9 + 0x28) = uVar8;
        if (0 < extraout_r4) {
          pfVar22 = (float *)(in_r7 + iVar18 * -4);
          iVar25 = local_ac;
          iVar28 = iVar31;
          iVar24 = 1;
          iVar32 = 0;
          iVar23 = iVar27;
          do {
            iVar20 = iVar24;
            iVar11 = iVar23 + -1;
            iVar24 = *pcVar9 - iVar19;
            fVar2 = fVar7;
            if (iVar19 <= iVar27) {
              iVar30 = iVar20 * iVar18 * 4;
              *(float *)(*(int *)(pcVar9 + 0x28) + iVar30) =
                   *(float *)(iVar32 * iVar18 * 4 + *(int *)(pcVar9 + 0x28)) /
                   *(float *)(((iVar24 + 1) * iVar18 + iVar11) * 4 + *(int *)(pcVar9 + 0x24));
              fVar2 = *(float *)((iVar28 + iVar24) * 4 + *(int *)(pcVar9 + 0x24)) *
                      *(float *)(*(int *)(pcVar9 + 0x28) + iVar30);
            }
            iVar30 = 1;
            if (iVar11 < -1) {
              iVar30 = iVar25;
            }
            if (iVar24 < iVar27 + -1) {
              iVar33 = *pcVar9 - iVar27;
            }
            else {
              iVar33 = iVar19 + -1;
            }
            if (iVar30 <= iVar33) {
              fVar5 = fVar7;
              fVar6 = fVar7;
              if (1 < (iVar33 - iVar30) + 1) {
                iVar34 = *(int *)(pcVar9 + 0x24);
                iVar16 = *(int *)(pcVar9 + 0x28);
                iVar13 = ((iVar11 + iVar30) * iVar18 + iVar24) * 4;
                do {
                  iVar29 = (iVar32 * iVar18 + iVar30) * 4;
                  iVar3 = ((iVar24 + 1) * iVar18 + iVar11 + iVar30) * 4;
                  iVar10 = iVar23 + iVar30;
                  iVar4 = (iVar30 + iVar20 * iVar18) * 4;
                  iVar30 = iVar30 + 2;
                  *(float *)(iVar4 + iVar16) =
                       (*(float *)(iVar16 + iVar29) - *(float *)(iVar16 + iVar29 + -4)) /
                       *(float *)(iVar3 + iVar34);
                  iVar16 = *(int *)(pcVar9 + 0x28);
                  fVar6 = *(float *)(iVar13 + *(int *)(pcVar9 + 0x24)) * *(float *)(iVar4 + iVar16)
                          + fVar6;
                  iVar13 = iVar18 * 8 + iVar13;
                  *(float *)(iVar4 + iVar16 + 4) =
                       (((float *)(iVar16 + iVar29))[1] - *(float *)(iVar16 + iVar29)) /
                       *(float *)(iVar3 + *(int *)(pcVar9 + 0x24) + 4);
                  iVar34 = *(int *)(pcVar9 + 0x24);
                  iVar16 = *(int *)(pcVar9 + 0x28);
                  fVar5 = *(float *)((iVar10 * iVar18 + iVar24) * 4 + iVar34) *
                          *(float *)(iVar4 + iVar16 + 4) + fVar5;
                } while (iVar30 <= iVar33 + -1);
              }
              if (iVar30 <= iVar33) {
                pfVar17 = (float *)((iVar32 * iVar18 + iVar30) * 4 + *(int *)(pcVar9 + 0x28));
                iVar23 = (iVar20 * iVar18 + iVar30) * 4;
                *(float *)(*(int *)(pcVar9 + 0x28) + iVar23) =
                     (*pfVar17 - pfVar17[-1]) /
                     *(float *)(((iVar24 + 1) * iVar18 + iVar11 + iVar30) * 4 +
                               *(int *)(pcVar9 + 0x24));
                fVar2 = *(float *)(((iVar11 + iVar30) * iVar18 + iVar24) * 4 +
                                  *(int *)(pcVar9 + 0x24)) *
                        *(float *)(*(int *)(pcVar9 + 0x28) + iVar23) + fVar2;
              }
              fVar2 = fVar5 + fVar6 + fVar2;
            }
            if (iVar27 <= iVar24) {
              iVar23 = (iVar20 * iVar18 + iVar19) * 4;
              *(float *)(iVar23 + *(int *)(pcVar9 + 0x28)) =
                   (fVar1 / *(float *)(((iVar24 + 1) * iVar18 + iVar27) * 4 +
                                      *(int *)(pcVar9 + 0x24))) *
                   *(float *)((iVar32 * iVar18 + iVar19) * 4 + *(int *)(pcVar9 + 0x28) + -4);
              fVar2 = *(float *)((local_a8 + iVar24) * 4 + *(int *)(pcVar9 + 0x24)) *
                      *(float *)(*(int *)(pcVar9 + 0x28) + iVar23) + fVar2;
            }
            iVar19 = iVar19 + 1;
            pfVar22 = pfVar22 + iVar18;
            *pfVar22 = fVar2;
            iVar28 = iVar28 - iVar18;
            iVar25 = iVar25 + 1;
            iVar24 = iVar32;
            iVar32 = iVar20;
            iVar23 = iVar11;
          } while (iVar19 <= extraout_r4);
        }
        iVar27 = iVar27 + 1;
        in_r7 = in_r7 + 4;
        iVar19 = (int)*pcVar9;
        local_ac = local_ac + -1;
        local_a8 = local_a8 + iVar18;
        iVar31 = iVar31 + iVar18;
      } while (iVar27 <= iVar19);
    }
    iVar18 = 1;
    if (0 < extraout_r4) {
      do {
        if (-1 < iVar19) {
          if (3 < iVar19 + 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (-1 < iVar19) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        iVar19 = (int)*pcVar9;
        iVar18 = iVar18 + 1;
      } while (iVar18 <= extraout_r4);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014900 @ 98014900 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014900(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  double extraout_f1;
  
  pcVar4 = (char *)FUN_980447a8();
  iVar10 = (int)*pcVar4;
  if (iVar10 < param_3) {
    param_3 = iVar10;
  }
  FUN_980441a0(param_4,0,(iVar10 + 1) * 0xc);
  uVar5 = FUN_98013e20(extraout_f1,pcVar4);
  FUN_98014080();
  if (-1 < param_3) {
    pfVar11 = (float *)(param_4 + param_3 * 3 + 2);
    do {
      pfVar7 = pfVar11 + -2;
      iVar9 = (int)*pcVar4;
      iVar10 = (iVar9 + 1) * param_3 * 4 + *(int *)(pcVar4 + 0x2c);
      if (-1 < iVar9) {
        if (3 < iVar9 + 1) {
          uVar12 = iVar9 + 1U >> 2;
          pfVar8 = (float *)((iVar9 + 1) * 4 + iVar10);
          do {
            fVar1 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34)) *
                    pfVar8[-1] + *pfVar7;
            *pfVar7 = fVar1;
            fVar2 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + 4) *
                    pfVar8[-1] + pfVar11[-1];
            pfVar11[-1] = fVar2;
            fVar3 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + 8) *
                    pfVar8[-1] + *pfVar11;
            *pfVar11 = fVar3;
            fVar1 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + -0xc) *
                    pfVar8[-2] + fVar1;
            *pfVar7 = fVar1;
            fVar2 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + -8) *
                    pfVar8[-2] + fVar2;
            pfVar11[-1] = fVar2;
            fVar3 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + -4) *
                    pfVar8[-2] + fVar3;
            *pfVar11 = fVar3;
            fVar1 = *(float *)(((iVar9 - *pcVar4) + uVar5 + -2) * 0xc + *(int *)(pcVar4 + 0x34)) *
                    pfVar8[-3] + fVar1;
            *pfVar7 = fVar1;
            fVar2 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + -0x14)
                    * pfVar8[-3] + fVar2;
            pfVar11[-1] = fVar2;
            fVar3 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + -0x10)
                    * pfVar8[-3] + fVar3;
            *pfVar11 = fVar3;
            *pfVar7 = *(float *)(((iVar9 - *pcVar4) + uVar5 + -3) * 0xc + *(int *)(pcVar4 + 0x34)) *
                      pfVar8[-4] + fVar1;
            pfVar11[-1] = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) +
                                    -0x20) * pfVar8[-4] + fVar2;
            iVar6 = iVar9 - *pcVar4;
            pfVar8 = pfVar8 + -4;
            iVar9 = iVar9 + -4;
            *pfVar11 = *(float *)((iVar6 + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + -0x1c) * *pfVar8
                       + fVar3;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (-1 < iVar9) {
          iVar6 = iVar9 + 1;
          pfVar8 = (float *)((iVar9 + 1) * 4 + iVar10);
          do {
            *pfVar7 = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34)) *
                      pfVar8[-1] + *pfVar7;
            pfVar11[-1] = *(float *)(((iVar9 - *pcVar4) + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + 4
                                    ) * pfVar8[-1] + pfVar11[-1];
            pfVar8 = pfVar8 + -1;
            iVar10 = iVar9 - *pcVar4;
            iVar9 = iVar9 + -1;
            *pfVar11 = *(float *)((iVar10 + uVar5) * 0xc + *(int *)(pcVar4 + 0x34) + 8) * *pfVar8 +
                       *pfVar11;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      param_3 = param_3 + -1;
      pfVar11 = pfVar11 + -3;
    } while (-1 < param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014d60 @ 98014d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98014d60(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float *param_4,
                 float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_980447a4();
  iVar10 = (int)((ulonglong)uVar11 >> 0x20);
  FUN_98014900(iVar10,(int)uVar11,2,*(uint **)(iVar10 + 0x30));
  *param_3 = **(undefined4 **)(iVar10 + 0x30);
  param_3[1] = *(undefined4 *)(*(int *)(iVar10 + 0x30) + 4);
  param_3[2] = *(undefined4 *)(*(int *)(iVar10 + 0x30) + 8);
  fVar1 = *(float *)(*(int *)(iVar10 + 0x30) + 0xc);
  *param_4 = fVar1;
  fVar2 = *(float *)(*(int *)(iVar10 + 0x30) + 0x10);
  param_4[1] = fVar2;
  fVar9 = DAT_980025c0;
  fVar4 = DAT_980021a8;
  fVar6 = DAT_980005ec;
  fVar3 = *(float *)(*(int *)(iVar10 + 0x30) + 0x14);
  fVar5 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  param_4[2] = fVar3;
  if (fVar9 <= fVar5) {
    fVar5 = fVar4 / fVar5;
    *param_4 = fVar1 * fVar5;
    param_4[1] = fVar2 * fVar5;
    param_4[2] = fVar5 * param_4[2];
  }
  else {
    *param_4 = fVar6;
    param_4[1] = fVar6;
    param_4[2] = fVar6;
  }
  if (*(char *)(iVar10 + 3) == '\0') {
    iVar10 = *(int *)(iVar10 + 0x30);
    fVar1 = *(float *)(iVar10 + 0x1c);
    fVar2 = *(float *)(iVar10 + 0x20);
    fVar3 = *(float *)(iVar10 + 0x18);
    fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar5 = fVar6;
    fVar7 = fVar6;
    if (fVar9 <= fVar8) {
      fVar4 = fVar4 / fVar8;
      fVar6 = fVar4 * fVar2;
      fVar5 = fVar4 * fVar1;
      fVar7 = fVar4 * fVar3;
    }
    *param_5 = param_4[1] * fVar6 - fVar5 * param_4[2];
    param_5[1] = fVar7 * param_4[2] - *param_4 * fVar6;
    param_5[2] = *param_4 * fVar5 - param_4[1] * fVar7;
    FUN_98013390(param_5);
  }
  else {
    *param_5 = *(float *)(iVar10 + 4);
    param_5[1] = *(float *)(iVar10 + 8);
    param_5[2] = *(float *)(iVar10 + 0xc);
  }
  *param_6 = param_5[1] * param_4[2] - param_4[1] * param_5[2];
  param_6[1] = param_5[2] * *param_4 - *param_5 * param_4[2];
  param_6[2] = param_4[1] * *param_5 - *param_4 * param_5[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98014f50 @ 98014f50 ==== */

void FUN_98014f50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_980021a8;
  fVar3 = DAT_980005ec;
  *param_2 = DAT_980021a8 - *param_2;
  if (*param_1 < fVar3) {
    *param_1 = fVar3;
  }
  if (*param_2 < fVar3) {
    *param_2 = fVar3;
  }
  fVar1 = *param_1;
  if ((fVar5 < fVar1) || (fVar5 < *param_2)) {
    fVar2 = *param_2;
    fVar4 = fVar1 - DAT_98002234;
    if (fVar3 < (fVar4 + fVar2) * fVar1 + (fVar2 - DAT_98002234) * fVar2 + fVar5 + DAT_9807798c) {
      if (DAT_980025cc <= fVar1 + DAT_9807798c) {
        *param_1 = DAT_980025cc - DAT_9807798c;
        *param_2 = DAT_980025c8 - DAT_9807798c;
      }
      else {
        fVar1 = SQRT(fVar4 * fVar4 - (fVar1 - fVar5) * (fVar1 - fVar5) * DAT_9800220c);
        fVar3 = (fVar1 - fVar4) * DAT_98002204;
        if (fVar3 < fVar2 + DAT_9807798c) {
          fVar3 = fVar3 - DAT_9807798c;
          *param_2 = fVar3;
          *param_2 = fVar5 - fVar3;
          return;
        }
        fVar3 = DAT_9807798c + (-fVar4 - fVar1) * DAT_98002204;
        if (fVar2 < fVar3) {
          *param_2 = fVar3;
          *param_2 = fVar5 - fVar3;
          return;
        }
      }
    }
  }
  *param_2 = fVar5 - *param_2;
  return;
}


/* ==== FUN_98015090 @ 98015090 ==== */

double FUN_98015090(double param_1,int param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  
  iVar5 = param_3 - 1;
  dVar8 = (double)*(float *)(param_3 * 4 + param_2);
  if (iVar5 < 0) {
    return dVar8;
  }
  if (3 < (int)param_3) {
    uVar7 = param_3 >> 2;
    pfVar4 = (float *)((param_3 + 3) * 4 + param_2);
    iVar5 = iVar5 + uVar7 * -4;
    do {
      pfVar1 = pfVar4 + -7;
      pfVar2 = pfVar4 + -6;
      pfVar3 = pfVar4 + -5;
      pfVar4 = pfVar4 + -4;
      dVar8 = (double)(float)((double)(float)((double)(float)((double)(float)(dVar8 * param_1 +
                                                                             (double)*pfVar4) *
                                                              param_1 + (double)*pfVar3) * param_1 +
                                             (double)*pfVar2) * param_1 + (double)*pfVar1);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar5 < 0) {
    return dVar8;
  }
  iVar6 = iVar5 + 1;
  pfVar4 = (float *)((iVar5 + 1) * 4 + param_2);
  do {
    pfVar4 = pfVar4 + -1;
    dVar8 = (double)(float)(dVar8 * param_1 + (double)*pfVar4);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return dVar8;
}


/* ==== FUN_98015128 @ 98015128 ==== */

void FUN_98015128(undefined8 param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *in_r8;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar5 = (double)func_0x98044ae0();
  fVar3 = DAT_980025d0;
  dVar14 = (double)DAT_98002204;
  dVar21 = (double)DAT_980021a8;
  dVar13 = (double)DAT_980005ec;
  dVar6 = (double)DAT_98002234;
  dVar12 = (double)DAT_9807798c;
  do {
    dVar4 = dVar5;
    dVar15 = (double)(float)(param_2 - dVar5);
    dVar17 = dVar5;
    dVar18 = param_3;
    dVar19 = (double)(float)(param_2 - dVar5);
    do {
      dVar5 = param_2;
      dVar11 = param_3;
      param_3 = param_4;
      if (ABS(dVar18) < ABS(param_4)) {
        dVar5 = dVar17;
        dVar11 = param_4;
        param_3 = dVar18;
        dVar4 = param_2;
        dVar17 = param_2;
        dVar18 = param_4;
      }
      dVar9 = (double)(float)((double)(float)(dVar17 - dVar5) * dVar14);
      dVar8 = (double)(float)((double)(float)(ABS(dVar5) * dVar12) * dVar6 +
                             (double)(float)(param_5 * dVar14));
      if ((ABS(dVar9) <= dVar8) || (param_3 == dVar13)) {
        func_0x98044b2c(dVar5);
        return;
      }
      dVar16 = dVar9;
      dVar20 = dVar9;
      if ((dVar8 <= ABS(dVar15)) && (ABS(param_3) < ABS(dVar11))) {
        dVar10 = (double)(float)(param_3 / dVar11);
        if (dVar4 == dVar17) {
          fVar1 = (float)(dVar21 - dVar10);
          dVar10 = (double)(float)(dVar10 * dVar9) * dVar6;
        }
        else {
          dVar7 = (double)(float)((double)(float)(dVar21 / dVar18) * dVar11);
          dVar11 = (double)(float)((double)(float)(dVar21 / dVar18) * param_3);
          fVar2 = (float)(dVar11 - dVar21);
          fVar1 = (float)(dVar7 - dVar21) * (float)(dVar10 - dVar21) * fVar2;
          dVar10 = (double)(float)((double)(float)((double)(float)((double)(float)(dVar7 - dVar11) *
                                                                  dVar7) * dVar9) * dVar6 -
                                  (double)((float)(dVar5 - dVar4) * fVar2)) * dVar10;
        }
        dVar11 = (double)(float)dVar10;
        dVar4 = (double)fVar1;
        if (dVar11 <= dVar13) {
          dVar11 = -dVar11;
        }
        else {
          dVar4 = -dVar4;
        }
        if (((float)(dVar11 * dVar6) < (float)(dVar4 * dVar9) * fVar3 - ABS((float)(dVar4 * dVar8)))
           && (dVar11 < ABS((double)(float)((double)(float)(dVar4 * dVar15) * dVar14)))) {
          dVar16 = dVar19;
          dVar20 = (double)(float)(dVar11 / dVar4);
        }
      }
      if (ABS(dVar20) <= dVar8) {
        if (dVar9 <= dVar13) {
          param_2 = (double)(float)(dVar5 - dVar8);
        }
        else {
          param_2 = (double)(float)(dVar8 + dVar5);
        }
      }
      else {
        param_2 = (double)(float)(dVar20 + dVar5);
      }
      param_4 = (double)FUN_98015090(param_2,*in_r8,in_r8[1]);
      dVar4 = dVar5;
      dVar15 = dVar16;
      dVar19 = dVar20;
    } while ((double)(float)((double)(float)(dVar18 / ABS(dVar18)) * param_4) <= dVar13);
  } while( true );
}


/* ==== FUN_98015320 @ 98015320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015320(void)

{
  int extraout_r4;
  int iVar1;
  
  FUN_98044794();
  FUN_98044ae8();
  iVar1 = 0;
  if (1 < extraout_r4 + 1) {
    do {
      iVar1 = iVar1 + 2;
    } while (iVar1 < extraout_r4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015908 @ 98015908 ==== */

void FUN_98015908(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float local_30;
  float local_2c [3];
  
  fVar3 = DAT_980021a8;
  fVar2 = DAT_980005ec;
  dVar8 = (double)DAT_980021a8;
  if (DAT_98077990 == '\0') {
    dVar5 = dVar8;
    do {
      dVar5 = (double)(float)(dVar5 * (double)DAT_98002204);
    } while (dVar8 < (double)(float)(dVar5 + dVar8));
    DAT_98077990 = '\x01';
    DAT_9807798c = (float)(dVar5 * (double)DAT_98002234);
  }
  fVar1 = *param_2;
  dVar11 = (double)(param_2[3] - fVar1);
  dVar5 = (double)DAT_980005ec;
  if (dVar11 != dVar5) {
    local_30 = (param_2[1] - fVar1) * (float)(dVar8 / dVar11);
    dVar6 = (double)local_30;
    local_2c[0] = (param_2[2] - fVar1) * (float)(dVar8 / dVar11);
    dVar9 = (double)local_2c[0];
    if ((dVar6 != (double)DAT_980025c8) || (uVar4 = 1, dVar9 != (double)DAT_980025d4)) {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar4;
    dVar7 = dVar6;
    if (dVar6 < dVar5) {
      local_30 = fVar2;
      dVar7 = dVar5;
    }
    dVar10 = dVar9;
    if (dVar8 < dVar9) {
      local_2c[0] = fVar3;
      dVar10 = dVar8;
    }
    if ((dVar8 < dVar7) || (dVar10 < (double)DAT_980021d8)) {
      dVar6 = (double)FUN_98014f50(&local_30,local_2c);
      dVar7 = (double)local_30;
      dVar10 = (double)local_2c[0];
    }
    if ((dVar7 != dVar6) &&
       (param_2[1] = (float)(dVar7 * dVar11 + (double)*param_2), dVar6 != dVar5)) {
      param_3[1] = (float)((double)(float)((double)(float)((double)param_3[1] - (double)*param_3) /
                                          dVar6) * dVar7 + (double)*param_3);
    }
    if ((dVar10 != dVar9) &&
       (param_2[2] = (float)(dVar10 * dVar11 + (double)*param_2), dVar9 != dVar8)) {
      param_3[2] = param_3[3] -
                   ((param_3[3] - param_3[2]) * (float)(dVar8 - dVar10)) / (float)(dVar8 - dVar9);
    }
    *(float *)(param_1 + 0x10) = *param_2;
    *(float *)(param_1 + 0x14) = param_2[3];
    dVar5 = (double)(float)((double)(float)(dVar10 - dVar7) - dVar7);
    dVar6 = (double)DAT_980025d0;
    *(float *)(param_1 + 0x18) = fVar2;
    *(float *)(param_1 + 0x1c) = (float)(dVar7 * dVar6);
    *(float *)(param_1 + 0x20) = (float)(dVar5 * dVar6);
    *(float *)(param_1 + 0x24) =
         (float)((double)(float)((double)(float)(dVar8 - dVar10) - (double)(float)(dVar10 - dVar7))
                - dVar5);
    fVar2 = param_3[3];
    fVar3 = param_3[2];
    dVar11 = (double)(fVar3 - param_3[1]);
    dVar5 = (double)(param_3[1] - *param_3);
    *(float *)(param_1 + 0x28) = *param_3;
    dVar8 = (double)(float)(dVar11 - dVar5);
    *(float *)(param_1 + 0x2c) = (float)(dVar5 * dVar6);
    *(float *)(param_1 + 0x30) = (float)(dVar8 * dVar6);
    *(float *)(param_1 + 0x34) = (float)((double)(float)((double)(fVar2 - fVar3) - dVar11) - dVar8);
  }
  return;
}


/* ==== FUN_98015b50 @ 98015b50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015b50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98015c48 @ 98015c48 ==== */

void FUN_98015c48(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(param_1 + 0x10) = *param_2;
  fVar2 = param_2[1] - *param_2;
  fVar1 = param_2[3] - *param_2;
  fVar3 = param_3[3] - *param_3;
  fVar4 = DAT_980005ec;
  if (fVar2 != DAT_980005ec) {
    fVar4 = (param_3[1] - *param_3) / fVar2;
  }
  fVar2 = param_2[3] - param_2[2];
  fVar5 = DAT_980005ec;
  if (fVar2 != DAT_980005ec) {
    fVar5 = (param_3[3] - param_3[2]) / fVar2;
  }
  fVar2 = fVar4 * fVar1;
  *(float *)(param_1 + 0x20) = fVar4;
  fVar4 = DAT_980021a8 / (fVar1 * fVar1);
  *(float *)(param_1 + 0x1c) = (((fVar3 * DAT_980025d0 - fVar2) - fVar2) - fVar5 * fVar1) * fVar4;
  *(float *)(param_1 + 0x18) = ((((fVar5 * fVar1 + fVar2) - fVar3) - fVar3) / fVar1) * fVar4;
  *(float *)(param_1 + 0x24) = *param_3;
  return;
}


/* ==== FUN_98015d08 @ 98015d08 ==== */

undefined4 FUN_98015d08(double param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (param_4 != (int *)0x0) {
    iVar2 = 0;
    *param_4 = 0;
    if (0 < *(char *)(param_2 + 0x39)) {
      iVar1 = *(char *)(param_2 + 0x39) + -1;
      do {
        iVar3 = iVar1 + iVar2 >> 1;
        dVar4 = (double)*(float *)(iVar3 * 0x18 + *(int *)(param_2 + 0x3c));
        if (dVar4 <= param_1) {
          if (param_1 <= dVar4) {
            *param_4 = iVar3;
            return 1;
          }
          iVar2 = iVar3 + 1;
        }
        else {
          iVar1 = iVar3 + -1;
        }
      } while (iVar2 <= iVar1);
      *param_4 = iVar2;
    }
  }
  return 0;
}


/* ==== FUN_98015d88 @ 98015d88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98015d88(void)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *pfVar4;
  float *extraout_r4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  bool bVar8;
  double extraout_f1;
  int local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  puVar2 = (undefined4 *)FUN_980447a0();
  iVar7 = (int)*(char *)((int)puVar2 + 0x39);
  bVar8 = false;
  if (iVar7 == 0) {
    halt_baddata();
  }
  pfVar4 = (float *)puVar2[0xf];
  if ((double)*pfVar4 <= extraout_f1) {
    if ((double)pfVar4[iVar7 * 6 + -6] < extraout_f1) {
      halt_baddata();
    }
    pfVar6 = (float *)*puVar2;
    if (pfVar6 != (float *)0x0) {
      iVar5 = puVar2[1];
      if ((iVar7 + -1 <= iVar5) || (extraout_f1 <= (double)*pfVar6)) {
        if ((0 < iVar5) && (extraout_f1 < (double)*pfVar6)) {
          bVar8 = (double)pfVar4[iVar5 * 6 + -6] < extraout_f1;
          if (bVar8) {
            local_70[0] = iVar5;
          }
          if (extraout_f1 == (double)pfVar4[iVar5 * 6 + -6]) {
            *puVar2 = pfVar4 + iVar5 * 6 + -6;
            puVar2[1] = iVar5 + -1;
            halt_baddata();
          }
        }
      }
      else {
        if (extraout_f1 == (double)pfVar4[(iVar5 + 1) * 6]) {
          *puVar2 = pfVar4 + (iVar5 + 1) * 6;
          puVar2[1] = iVar5 + 1;
          halt_baddata();
        }
        if (extraout_f1 < (double)pfVar4[(iVar5 + 1) * 6]) {
          local_70[0] = iVar5 + 1;
          bVar8 = true;
        }
      }
    }
    if (!bVar8) {
      uVar3 = FUN_98015d08(extraout_f1,(int)puVar2,pfVar4,local_70);
      if (((uVar3 & 0xff) != 0) || (local_70[0] == 0)) {
        puVar2[1] = local_70[0];
        *puVar2 = extraout_r4 + local_70[0] * 6;
        halt_baddata();
      }
      pfVar4 = extraout_r4;
      if (local_70[0] == iVar7) {
        *puVar2 = extraout_r4;
        puVar2[1] = 0;
        halt_baddata();
      }
    }
    iVar7 = local_70[0] + -1;
    if (puVar2[2] != iVar7) {
      puVar2[2] = iVar7;
      puVar2[1] = iVar7;
      fVar1 = DAT_980005ec;
      pfVar6 = pfVar4 + iVar7 * 6;
      *puVar2 = pfVar6;
      if ((pfVar6[4] == fVar1) && (pfVar6[5] == fVar1)) {
        *(undefined1 *)(puVar2 + 3) = 1;
      }
      else if ((pfVar6[4] == DAT_980025d8) && (pfVar6[5] == DAT_980025d8)) {
        *(undefined1 *)((int)puVar2 + 0xd) = 1;
      }
      else {
        *(undefined1 *)(puVar2 + 3) = 0;
        *(undefined1 *)((int)puVar2 + 0xd) = 0;
        local_50 = *pfVar6;
        local_44 = pfVar4[local_70[0] * 6];
        local_60 = pfVar6[1];
        local_4c = pfVar6[4] * DAT_980025c8 + local_50;
        local_54 = pfVar4[local_70[0] * 6 + 1];
        local_5c = pfVar6[5] * DAT_980025c8 + local_60;
        local_58 = -(pfVar4[local_70[0] * 6 + 3] * DAT_980025c8 - local_54);
        local_48 = -(pfVar4[local_70[0] * 6 + 2] * DAT_980025c8 - local_44);
        if (*(char *)(puVar2 + 0xe) == '\0') {
          FUN_98015c48((int)puVar2,&local_50,&local_60);
        }
        else {
          FUN_98015908((int)puVar2,&local_50,&local_60);
        }
      }
    }
    if (((*(char *)(puVar2 + 3) == '\0') && (*(char *)((int)puVar2 + 0xd) == '\0')) &&
       (*(char *)(puVar2 + 0xe) != '\0')) {
      FUN_98015b50();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  halt_baddata();
}


/* ==== FUN_98016118 @ 98016118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016180 @ 98016180 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016180(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016188 @ 98016188 ==== */

void FUN_98016188(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}


/* ==== FUN_980161a0 @ 980161a0 ==== */

void FUN_980161a0(double param_1,char *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  
  iVar6 = 0;
  iVar3 = (int)*param_2;
  if (3 < iVar3) {
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = 0;
    do {
      if (param_1 < (double)*(float *)(iVar5 + iVar4)) goto LAB_98016258;
      if (param_1 < (double)*(float *)(iVar5 + iVar4 + 0x28)) {
        iVar6 = iVar6 + 1;
        goto LAB_98016258;
      }
      if (param_1 < (double)*(float *)(iVar5 + 0x78 + iVar4 + -0x28)) {
        iVar6 = iVar6 + 2;
        goto LAB_98016258;
      }
      if (param_1 < (double)*(float *)(iVar5 + 0x78 + iVar4)) {
        iVar6 = iVar6 + 3;
        goto LAB_98016258;
      }
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0xa0;
    } while (iVar6 < iVar3 + -3);
  }
  if (iVar6 < iVar3) {
    iVar4 = iVar6 * 0x28;
    do {
      if (param_1 < (double)*(float *)(iVar4 + *(int *)(param_2 + 4))) break;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < iVar3);
  }
LAB_98016258:
  iVar6 = iVar6 + -1;
  if (iVar6 < 0) {
    *param_4 = *(float *)(*(int *)(param_2 + 4) + 0x1c);
    param_4[1] = *(float *)(*(int *)(param_2 + 4) + 0x20);
    param_4[2] = *(float *)(*(int *)(param_2 + 4) + 0x24);
    return;
  }
  if (iVar6 != iVar3 + -1) {
    iVar6 = iVar6 * 0x28;
    pfVar7 = (float *)(iVar6 + *(int *)(param_2 + 4));
    fVar2 = (float)(param_1 - (double)*pfVar7) / (float)((double)pfVar7[10] - (double)*pfVar7);
    *param_4 = (pfVar7[0x11] - pfVar7[7]) * fVar2 + pfVar7[7];
    fVar1 = *(float *)(iVar6 + *(int *)(param_2 + 4) + 0x20);
    param_4[1] = (*(float *)(iVar6 + *(int *)(param_2 + 4) + 0x48) - fVar1) * fVar2 + fVar1;
    fVar1 = *(float *)(iVar6 + *(int *)(param_2 + 4) + 0x24);
    param_4[2] = (*(float *)(iVar6 + *(int *)(param_2 + 4) + 0x4c) - fVar1) * fVar2 + fVar1;
    return;
  }
  iVar6 = iVar6 * 0x28;
  *param_4 = *(float *)(iVar6 + *(int *)(param_2 + 4) + 0x1c);
  param_4[1] = *(float *)(iVar6 + *(int *)(param_2 + 4) + 0x20);
  param_4[2] = *(float *)(iVar6 + *(int *)(param_2 + 4) + 0x24);
  return;
}


/* ==== FUN_98016348 @ 98016348 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016348(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980163f0 @ 980163f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980163f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016470 @ 98016470 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016470(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_980447a8();
  iVar1 = (int)(uVar5 >> 0x20);
  if ((uVar5 & 2) == 0) {
    FUN_98013d88();
    if ((uVar5 & 1) != 0) {
      FUN_98021e50();
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + -4);
    iVar3 = iVar2 + -1;
    if (-1 < iVar3) {
      piVar4 = (int *)(iVar2 * 0x38 + iVar1 + 0x20);
      do {
        if (piVar4[-0xf] != 0) {
          FUN_98021e50();
        }
        if (piVar4[-0xe] != 0) {
          FUN_98021e50();
        }
        if (piVar4[-0xd] != 0) {
          FUN_98021e50();
        }
        if (piVar4[-0xc] != 0) {
          FUN_98021e50();
        }
        if (piVar4[-0xb] != 0) {
          FUN_98021e50();
        }
        if (piVar4[-10] != 0) {
          FUN_98021e50();
        }
        if (piVar4[-9] != 0) {
          FUN_98021e50();
        }
        iVar3 = iVar3 + -1;
        piVar4 = piVar4 + -0xe;
      } while (-1 < iVar3);
    }
    if ((uVar5 & 1) != 0) {
      FUN_98021e50();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016570 @ 98016570 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016570(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980166a0 @ 980166a0 ==== */

void FUN_980166a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98016760 @ 98016760 ==== */

void FUN_98016760(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980168f8 @ 980168f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980168f8(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                 ,undefined4 *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 uVar4;
  double dVar5;
  double extraout_f1;
  double dVar6;
  double dVar7;
  float *in_stack_00000054;
  float local_50 [6];
  
  iVar3 = FUN_980447a8();
  FUN_98014d60(*(char *)(iVar3 + 1) * 0x38 + DAT_98077970,0x98070000,param_6,param_7,param_8,
               in_stack_00000054);
  dVar5 = (double)DAT_980005ec;
  dVar6 = (double)DAT_980021a8;
  dVar7 = (double)((float)(extraout_f1 - (double)*(float *)(iVar3 + 0x20)) /
                  (float)((double)*(float *)(iVar3 + 0x24) - (double)*(float *)(iVar3 + 0x20)));
  if ((dVar5 <= dVar7) && (dVar5 = dVar7, dVar6 < dVar7)) {
    dVar5 = dVar6;
  }
  dVar7 = (double)FUN_98015d88();
  fVar2 = DAT_980021f0;
  fVar1 = (float)((double)*(float *)(iVar3 + 0x30) * dVar7 + (double)*(float *)(iVar3 + 0x2c)) *
          *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x10);
  *param_3 = fVar1;
  if (fVar1 <= fVar2) {
    *param_3 = fVar2;
  }
  *param_4 = *param_3 * DAT_980021c4;
  uVar4 = extraout_r4;
  if (*(char **)(iVar3 + 0x18) != (char *)0x0) {
    FUN_980161a0(dVar5,*(char **)(iVar3 + 0x18),extraout_r4,param_5);
    uVar4 = extraout_r4_00;
  }
  if (*(char **)(iVar3 + 0x1c) != (char *)0x0) {
    FUN_980161a0(dVar5,*(char **)(iVar3 + 0x1c),uVar4,local_50);
    param_5[3] = (float)(dVar6 - (double)local_50[0]);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016a30 @ 98016a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016a30(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  pcVar1 = (char *)FUN_980447a8();
  iVar2 = 0;
  if ('\0' < *pcVar1) {
    iVar3 = 0;
    do {
      if (*(short *)(*(int *)(pcVar1 + 4) + iVar3 + 4) != -1) {
        dVar4 = (double)FUN_98015d88();
        *(float *)(*(int *)(pcVar1 + 4) + iVar3) = (float)dVar4;
      }
      FUN_980166a0();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *pcVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98016ad0 @ 98016ad0 ==== */

void FUN_98016ad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98016b58 @ 98016b58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98016b58(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  float **ppfVar5;
  float local_360;
  float local_35c;
  float local_358;
  float *local_350 [12];
  float local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  float local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  float local_2f8;
  undefined4 local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  undefined1 local_2e0 [4];
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  float local_2a4;
  float local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  float local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  undefined4 local_274;
  float local_264;
  float local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  float local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  float local_238;
  undefined4 local_234;
  float local_224;
  float local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined1 auStack_1e0 [64];
  float local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined4 local_174;
  float local_164;
  float local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  float local_138;
  undefined4 local_134;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_e4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float afStack_90 [16];
  
  pcVar3 = (char *)FUN_980447a0();
  fVar2 = DAT_980021a8;
  uVar1 = DAT_980005ec;
  if ((pcVar3[1] == -1) || (*pcVar3 == -1)) {
    local_350[0] = (float *)0x0;
    local_350[2] = (float *)0x0;
  }
  else {
    FUN_980166a0();
    local_2e4 = fVar2;
    local_2f8 = fVar2;
    local_30c = fVar2;
    local_320 = fVar2;
    local_350[0] = &local_320;
    local_2f4 = uVar1;
    local_350[2] = &local_2a0;
    local_2fc = uVar1;
    local_300 = uVar1;
    local_304 = uVar1;
    local_308 = uVar1;
    local_310 = uVar1;
    local_314 = uVar1;
    local_318 = uVar1;
    local_31c = uVar1;
    local_264 = fVar2;
    local_278 = fVar2;
    local_28c = fVar2;
    local_2a0 = fVar2;
    local_274 = uVar1;
    local_27c = uVar1;
    local_280 = uVar1;
    local_2f0 = -local_360;
    local_2ec = -local_35c;
    local_2e8 = -local_358;
    local_284 = uVar1;
    local_288 = uVar1;
    local_290 = uVar1;
    local_294 = uVar1;
    local_298 = uVar1;
    local_29c = uVar1;
  }
  if (pcVar3[1] == -1) {
    local_350[1] = (float *)0x0;
  }
  else {
    FUN_980166a0();
    local_350[1] = (float *)local_2e0;
    local_2a8 = uVar1;
    local_2ac = uVar1;
    local_2b0 = uVar1;
    local_2b4 = uVar1;
    local_2bc = uVar1;
    local_2c0 = uVar1;
    local_2c4 = uVar1;
    local_2c8 = uVar1;
    local_2d0 = uVar1;
    local_2d4 = uVar1;
    local_2d8 = uVar1;
    local_2dc = uVar1;
    local_2a4 = fVar2;
  }
  if (pcVar3[2] == -1) {
    local_350[3] = (float *)0x0;
  }
  else {
    FUN_980166a0();
    local_350[3] = &local_260;
    local_224 = fVar2;
    local_238 = fVar2;
    local_24c = fVar2;
    local_260 = fVar2;
    local_234 = uVar1;
    local_23c = uVar1;
    local_240 = uVar1;
    local_244 = uVar1;
    local_248 = uVar1;
    local_250 = uVar1;
    local_254 = uVar1;
    local_258 = uVar1;
    local_25c = uVar1;
  }
  if ((pcVar3[4] == -1) || (pcVar3[3] == -1)) {
    local_350[4] = (float *)0x0;
    local_350[6] = (float *)0x0;
  }
  else {
    FUN_980166a0();
    local_1e4 = fVar2;
    local_1f8 = fVar2;
    local_20c = fVar2;
    local_220 = fVar2;
    local_350[4] = &local_220;
    local_1f4 = uVar1;
    local_350[6] = &local_1a0;
    local_1fc = uVar1;
    local_200 = uVar1;
    local_204 = uVar1;
    local_208 = uVar1;
    local_210 = uVar1;
    local_214 = uVar1;
    local_218 = uVar1;
    local_21c = uVar1;
    local_164 = fVar2;
    local_178 = fVar2;
    local_18c = fVar2;
    local_1a0 = fVar2;
    local_174 = uVar1;
    local_17c = uVar1;
    local_180 = uVar1;
    local_1f0 = -local_360;
    local_1ec = -local_35c;
    local_1e8 = -local_358;
    local_184 = uVar1;
    local_188 = uVar1;
    local_190 = uVar1;
    local_194 = uVar1;
    local_198 = uVar1;
    local_19c = uVar1;
  }
  if (pcVar3[4] == -1) {
    local_350[5] = (float *)0x0;
  }
  else {
    FUN_980166a0();
    FUN_980163f0();
    local_350[5] = (float *)auStack_1e0;
  }
  if (pcVar3[5] == -1) {
    local_350[7] = (float *)0x0;
  }
  else {
    FUN_980166a0();
    local_350[7] = &local_160;
    local_124 = fVar2;
    local_138 = fVar2;
    local_14c = fVar2;
    local_160 = fVar2;
    local_134 = uVar1;
    local_13c = uVar1;
    local_140 = uVar1;
    local_144 = uVar1;
    local_148 = uVar1;
    local_150 = uVar1;
    local_154 = uVar1;
    local_158 = uVar1;
    local_15c = uVar1;
  }
  if (pcVar3[6] == -1) {
    local_350[8] = (float *)0x0;
  }
  else {
    if (pcVar3[6] == -0x62) {
      FUN_980166a0();
      FUN_98016ad0();
    }
    else {
      FUN_980166a0();
    }
    local_350[8] = &local_120;
    local_e4 = fVar2;
    local_f8 = fVar2;
    local_10c = fVar2;
    local_120 = fVar2;
    local_f4 = uVar1;
    local_fc = uVar1;
    local_100 = uVar1;
    local_104 = uVar1;
    local_108 = uVar1;
    local_110 = uVar1;
    local_114 = uVar1;
    local_118 = uVar1;
    local_11c = uVar1;
  }
  local_94 = fVar2;
  ppfVar5 = local_350;
  local_a8 = fVar2;
  iVar4 = 9;
  local_bc = fVar2;
  local_d0 = fVar2;
  local_98 = uVar1;
  local_9c = uVar1;
  local_a0 = uVar1;
  local_a4 = uVar1;
  local_ac = uVar1;
  local_b0 = uVar1;
  local_b4 = uVar1;
  local_b8 = uVar1;
  local_c0 = uVar1;
  local_c4 = uVar1;
  local_c8 = uVar1;
  local_cc = uVar1;
  do {
    if (*ppfVar5 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_9800ee88(&local_d0,*ppfVar5,afStack_90);
    }
    iVar4 = iVar4 + -1;
    ppfVar5 = ppfVar5 + 1;
  } while (iVar4 != 0);
  if ((byte)pcVar3[7] != 0xff) {
    FUN_98016b58(&DAT_9805dbb0 + (uint)(byte)pcVar3[7] * 8,0,afStack_90);
                    /* WARNING: Subroutine does not return */
    FUN_9800ee88(&local_d0,afStack_90,param_3);
  }
  FUN_98044240();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98017120 @ 98017120 ==== */

void FUN_98017120(void)

{
  int iVar1;
  undefined4 extraout_r4;
  uint uVar2;
  undefined8 uVar3;
  float local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  float afStack_110 [16];
  float afStack_d0 [52];
  
  FUN_980447a8();
  uVar3 = FUN_98044ad4();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  FUN_98016b58(&DAT_9805dbb0 + (uint)*(byte *)(iVar1 + 0x18) * 8,(int)uVar3,afStack_d0);
  uVar2 = (uint)*(byte *)(iVar1 + 0x19);
  if (uVar2 == 0xff) {
    local_114 = DAT_980021a8;
    local_128 = DAT_980021a8;
    local_13c = DAT_980021a8;
    local_150 = DAT_980021a8;
    local_118 = DAT_980005ec;
    local_11c = DAT_980005ec;
    local_120 = DAT_980005ec;
    local_124 = DAT_980005ec;
    local_12c = DAT_980005ec;
    local_130 = DAT_980005ec;
    local_134 = DAT_980005ec;
    local_138 = DAT_980005ec;
    local_140 = DAT_980005ec;
    local_144 = DAT_980005ec;
    local_148 = DAT_980005ec;
    local_14c = DAT_980005ec;
  }
  else {
    FUN_98016b58(&DAT_9805dbb0 + uVar2 * 8,extraout_r4,&local_150);
  }
                    /* WARNING: Subroutine does not return */
  FUN_9800ee88(&local_150,afStack_d0,afStack_110);
}


/* ==== FUN_980172b8 @ 980172b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980172b8(void)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  char *pcVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float local_50;
  
  pcVar4 = (char *)FUN_980447a4();
  FUN_98017120();
  dVar21 = (double)DAT_980021a8;
  dVar11 = dVar21;
  if (*(short *)(pcVar4 + 4) != -1) {
    dVar11 = (double)FUN_98015d88();
  }
  *(float *)(pcVar4 + 0x20) = (float)dVar11;
  dVar11 = dVar21;
  if (*(short *)(pcVar4 + 6) != -1) {
    dVar11 = (double)FUN_98015d88();
  }
  *(float *)(pcVar4 + 0x24) = (float)dVar11;
  if (*(short *)(pcVar4 + 8) == -1) {
    dVar11 = (double)*(float *)(pcVar4 + 0xc);
  }
  else {
    dVar11 = (double)FUN_98015d88();
  }
  *(float *)(pcVar4 + 0x28) = (float)dVar11;
  if (*(int *)(pcVar4 + 0x18) != 0) {
    FUN_98016a30();
  }
  if (*(int *)(pcVar4 + 0x1c) != 0) {
    FUN_98016a30();
  }
  iVar8 = 0;
  if ('\0' < *pcVar4) {
    iVar9 = 0;
    iVar10 = 0;
    do {
      if (*(short *)(*(int *)(pcVar4 + 0x14) + iVar10 + 0xc) == -1) {
        dVar11 = (double)*(float *)(*(int *)(pcVar4 + 0x14) + iVar10 + 4);
      }
      else {
        dVar11 = (double)FUN_98015d88();
      }
      *(float *)(*(int *)(pcVar4 + 0x70) + iVar9) = (float)dVar11;
      if (*(short *)(*(int *)(pcVar4 + 0x14) + iVar10 + 0xe) == -1) {
        dVar11 = (double)*(float *)(*(int *)(pcVar4 + 0x14) + iVar10 + 8);
      }
      else {
        dVar11 = (double)FUN_98015d88();
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x10;
      iVar7 = *(int *)(pcVar4 + 0x70) + iVar9;
      iVar9 = iVar9 + 0x18;
      *(float *)(iVar7 + 4) = (float)dVar11;
    } while (iVar8 < *pcVar4);
  }
  fVar3 = DAT_980025e0;
  if ('\0' < *pcVar4) {
    dVar11 = (double)local_50;
    dVar16 = (double)local_50;
    dVar19 = (double)local_50;
    dVar17 = (double)local_50;
    dVar12 = (double)DAT_980025e4;
    dVar13 = (double)DAT_980021d8;
    dVar14 = (double)DAT_980025c0;
    dVar15 = (double)DAT_980005ec;
    fVar5 = local_50;
    iVar8 = 0;
    do {
      bVar2 = false;
      dVar20 = dVar15;
      dVar18 = dVar21;
      if (iVar8 != 0) {
        if (*(int *)(iVar8 * 0x10 + *(int *)(pcVar4 + 0x14) + -0x10) == 1) {
          fVar5 = 4.2039e-45;
          pfVar6 = (float *)(iVar8 * 0x18 + *(int *)(pcVar4 + 0x70));
          dVar20 = (double)(pfVar6[1] - pfVar6[-5]);
          dVar18 = (double)(*pfVar6 - pfVar6[-6]);
        }
        else {
          fVar5 = 9.80909e-45;
          bVar2 = true;
          dVar20 = dVar16;
          dVar18 = dVar11;
        }
      }
      dVar16 = dVar20;
      iVar9 = *pcVar4 + -1;
      dVar11 = dVar15;
      dVar20 = dVar21;
      if (iVar8 != iVar9) {
        if (*(int *)(iVar8 * 0x10 + *(int *)(pcVar4 + 0x14)) == 1) {
          local_50 = 4.2039e-45;
          pfVar6 = (float *)(iVar8 * 0x18 + *(int *)(pcVar4 + 0x70));
          dVar11 = (double)(pfVar6[7] - pfVar6[1]);
          dVar20 = (double)(pfVar6[6] - *pfVar6);
        }
        else {
          local_50 = 9.80909e-45;
          bVar2 = true;
          dVar11 = dVar17;
          dVar20 = dVar19;
        }
      }
      dVar17 = dVar11;
      if (bVar2) {
        if (iVar8 == 0) {
          if (0 < iVar9) {
            if (local_50 == 9.80909e-45) {
              pfVar6 = *(float **)(pcVar4 + 0x70);
              dVar20 = (double)(pfVar6[6] - *pfVar6);
              dVar17 = (double)(pfVar6[7] - pfVar6[1]);
            }
            if (fVar5 == 9.80909e-45) {
              pfVar6 = *(float **)(pcVar4 + 0x70);
              dVar18 = (double)(pfVar6[6] - *pfVar6);
              dVar16 = (double)(pfVar6[7] - pfVar6[1]);
            }
          }
        }
        else if (0 < iVar8) {
          if (iVar8 == iVar9) {
            if (local_50 == 9.80909e-45) {
              pfVar6 = (float *)(iVar8 * 0x18 + *(int *)(pcVar4 + 0x70));
              dVar20 = (double)(*pfVar6 - pfVar6[-6]);
              dVar17 = (double)(pfVar6[1] - pfVar6[-5]);
            }
            if (fVar5 == 9.80909e-45) {
              pfVar6 = (float *)(iVar8 * 0x18 + *(int *)(pcVar4 + 0x70));
              dVar18 = (double)(*pfVar6 - pfVar6[-6]);
              dVar16 = (double)(pfVar6[1] - pfVar6[-5]);
            }
          }
          else if (iVar8 < iVar9) {
            pfVar6 = (float *)(iVar8 * 0x18 + *(int *)(pcVar4 + 0x70));
            dVar11 = (double)(pfVar6[6] - pfVar6[-6]);
            fVar1 = fVar3;
            if (dVar14 <= dVar11) {
              fVar1 = (float)((double)(pfVar6[7] - pfVar6[-5]) / dVar11);
            }
            if (local_50 == 9.80909e-45) {
              dVar20 = (double)(pfVar6[6] - *pfVar6);
              dVar17 = (double)(float)((double)fVar1 * dVar20);
            }
            if (fVar5 == 9.80909e-45) {
              dVar18 = (double)(*pfVar6 - pfVar6[-6]);
              dVar16 = (double)(float)((double)fVar1 * dVar18);
            }
          }
        }
      }
      if (dVar18 < dVar15) {
        dVar18 = dVar15;
      }
      dVar11 = (double)SQRT((float)(dVar16 * dVar16 + (double)(float)(dVar18 * dVar18)));
      if (dVar11 != dVar15) {
        dVar11 = (double)(float)(dVar21 / dVar11);
        dVar18 = (double)(float)(dVar11 * dVar18);
        dVar16 = (double)(float)(dVar11 * dVar16);
      }
      dVar11 = dVar18;
      if ((dVar18 == dVar15) && (dVar16 != dVar15)) {
        dVar11 = dVar21;
        if (dVar16 < 0.0) {
          dVar11 = dVar13;
        }
        dVar16 = (double)(float)(dVar11 * dVar12);
        dVar11 = dVar14;
      }
      if (dVar20 < dVar15) {
        dVar20 = dVar15;
      }
      dVar19 = (double)SQRT((float)(dVar17 * dVar17 + (double)(float)(dVar20 * dVar20)));
      if (dVar19 != dVar15) {
        dVar19 = (double)(float)(dVar21 / dVar19);
        dVar20 = (double)(float)(dVar19 * dVar20);
        dVar17 = (double)(float)(dVar19 * dVar17);
      }
      dVar19 = dVar20;
      if ((dVar20 == dVar15) && (dVar17 != dVar15)) {
        dVar19 = dVar21;
        if (dVar17 < 0.0) {
          dVar19 = dVar13;
        }
        dVar17 = (double)(float)(dVar19 * dVar12);
        dVar19 = dVar14;
      }
      iVar9 = iVar8 + 1;
      iVar8 = iVar8 * 0x18;
      *(float *)(*(int *)(pcVar4 + 0x70) + iVar8 + 8) = (float)dVar11;
      *(float *)(*(int *)(pcVar4 + 0x70) + iVar8 + 0xc) = (float)dVar16;
      *(float *)(*(int *)(pcVar4 + 0x70) + iVar8 + 0x10) = (float)dVar19;
      *(float *)(*(int *)(pcVar4 + 0x70) + iVar8 + 0x14) = (float)dVar17;
      iVar8 = iVar9;
    } while (iVar9 < *pcVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980177c0 @ 980177c0 ==== */

void FUN_980177c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98017948 @ 98017948 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98017948(void)

{
  FUN_98044778();
  FUN_98044af8();
  DAT_9807796c = FUN_98021e18();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98019598 @ 98019598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98019598(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  char *pcVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_980447a8();
  pcVar1 = (char *)((ulonglong)uVar7 >> 0x20);
  psVar2 = (short *)FUN_98021e18();
  iVar3 = 0;
  iVar5 = 0;
  psVar4 = psVar2;
  if (0 < (int)uVar7) {
    do {
      if (iVar5 == 0) {
        if (*pcVar1 == -0x80) {
          iVar6 = 3;
          *psVar4 = CONCAT11(pcVar1[2],pcVar1[1]);
        }
        else {
          iVar6 = 1;
          *psVar4 = (short)*pcVar1;
        }
      }
      else if (pcVar1[iVar5] == -0x80) {
        iVar6 = iVar5 + 3;
        *psVar4 = CONCAT11(pcVar1[iVar5 + 2],pcVar1[iVar5 + 1]) + psVar4[-1];
      }
      else {
        iVar6 = iVar5 + 1;
        *psVar4 = psVar4[-1] + (short)pcVar1[iVar5];
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 1;
      iVar5 = iVar6;
    } while (iVar6 < (int)uVar7);
  }
  *param_3 = psVar2;
  *param_4 = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980196a0 @ 980196a0 ==== */

void FUN_980196a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980199c8 @ 980199c8 ==== */

void FUN_980199c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98019e18 @ 98019e18 ==== */

void FUN_98019e18(uint param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  
  pfVar13 = (float *)((param_1 & 0xffff) * 0x20 + param_4);
  pfVar12 = (float *)((param_2 & 0xffff) * 0x20 + param_4);
  pfVar11 = (float *)((param_3 & 0xffff) * 0x20 + param_4);
  fVar1 = *pfVar12 - *pfVar13;
  fVar3 = pfVar12[2] - pfVar13[2];
  fVar5 = pfVar12[1] - pfVar13[1];
  fVar2 = *pfVar11 - *pfVar12;
  fVar6 = pfVar11[1] - pfVar12[1];
  fVar4 = pfVar11[2] - pfVar12[2];
  fVar7 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar8 = DAT_980005ec;
  fVar9 = DAT_980005ec;
  fVar10 = DAT_980005ec;
  if (DAT_980025c0 <= fVar7) {
    fVar7 = DAT_980021a8 / fVar7;
    fVar8 = fVar7 * fVar5;
    fVar9 = fVar3 * fVar7;
    fVar10 = fVar7 * fVar1;
  }
  fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6);
  fVar3 = DAT_980005ec;
  fVar5 = DAT_980005ec;
  fVar7 = DAT_980005ec;
  if (DAT_980025c0 <= fVar1) {
    fVar1 = DAT_980021a8 / fVar1;
    fVar3 = fVar4 * fVar1;
    fVar5 = fVar1 * fVar2;
    fVar7 = fVar6 * fVar1;
  }
  fVar6 = fVar9 * fVar5 - fVar3 * fVar10;
  fVar10 = fVar7 * fVar10 - fVar5 * fVar8;
  fVar5 = fVar3 * fVar8 - fVar7 * fVar9;
  fVar1 = SQRT(fVar5 * fVar5 + fVar10 * fVar10 + fVar6 * fVar6);
  fVar2 = DAT_980005ec;
  fVar3 = DAT_980005ec;
  fVar4 = DAT_980005ec;
  if (DAT_980025c0 <= fVar1) {
    fVar1 = DAT_980021a8 / fVar1;
    fVar2 = fVar10 * fVar1;
    fVar3 = fVar6 * fVar1;
    fVar4 = fVar5 * fVar1;
  }
  pfVar13[4] = pfVar13[4] + fVar3;
  pfVar13[5] = pfVar13[5] + fVar2;
  pfVar13[3] = pfVar13[3] + fVar4;
  pfVar12[3] = pfVar12[3] + fVar4;
  pfVar12[4] = pfVar12[4] + fVar3;
  pfVar12[5] = pfVar12[5] + fVar2;
  pfVar11[3] = pfVar11[3] + fVar4;
  pfVar11[4] = pfVar11[4] + fVar3;
  pfVar11[5] = pfVar11[5] + fVar2;
  return;
}


/* ==== FUN_98019fc0 @ 98019fc0 ==== */

void FUN_98019fc0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== FUN_98019fd8 @ 98019fd8 ==== */

void FUN_98019fd8(int param_1)

{
  *(float *)(param_1 + 0x98) =
       *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0xc) +
       *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x94) +
       *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x9c) =
       *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x8c) +
       *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x94) +
       *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0xa0) =
       *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x8c) +
       *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x94) +
       *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x44);
  return;
}


/* ==== FUN_9801a070 @ 9801a070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a138 @ 9801a138 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a2a8 @ 9801a2a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a2a8(void)

{
  int *piVar1;
  float *pfVar2;
  float afStack_c0 [34];
  
  piVar1 = (int *)FUN_980447a8();
  if (DAT_980005ec < (float)piVar1[0x16]) {
    FUN_98028750();
    FUN_98028548();
    FUN_98028968(DAT_98077954,piVar1[2]);
    FUN_98024ee0(DAT_98077954,0,*piVar1,0,piVar1[0x1f]);
    FUN_98025000();
    pfVar2 = (float *)FUN_98013460();
                    /* WARNING: Subroutine does not return */
    FUN_9800ee88((float *)(piVar1 + 3),pfVar2,afStack_c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a508 @ 9801a508 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a508(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a5c8 @ 9801a5c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a5c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801a620 @ 9801a620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801a620(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_98044788();
  uVar4 = FUN_98044aec();
  puVar1 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  iVar3 = (int)uVar4 + 1;
  puVar1[0x20] = iVar3 * param_3;
  puVar1[0x21] = (param_3 * 2 + -2) * iVar3 + -2;
  uVar2 = FUN_9802f538();
  *puVar1 = uVar2;
  FUN_98030718();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801aa48 @ 9801aa48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801aa48(undefined8 param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  undefined2 *puVar10;
  int in_r6;
  double extraout_f1;
  double dVar11;
  
  piVar7 = (int *)FUN_980447a8();
  piVar7[0x20] = 4;
  piVar7[0x21] = 2;
  iVar8 = FUN_9802f538();
  *piVar7 = iVar8;
  pfVar9 = (float *)FUN_98030718();
  fVar6 = DAT_980005ec;
  dVar11 = (double)DAT_98002204;
  fVar1 = (float)(param_2 * (double)DAT_980021f4);
  fVar2 = (float)(extraout_f1 * (double)DAT_980021f4);
  *pfVar9 = fVar1;
  fVar3 = (float)(extraout_f1 * dVar11);
  pfVar9[1] = fVar2;
  fVar4 = (float)(param_2 * dVar11);
  pfVar9[2] = fVar6;
  pfVar9[8] = fVar1;
  pfVar9[9] = fVar3;
  pfVar9[10] = fVar6;
  pfVar9[0x10] = fVar4;
  pfVar9[0x11] = fVar3;
  pfVar9[0x12] = fVar6;
  pfVar9[0x18] = fVar4;
  pfVar9[0x19] = fVar2;
  pfVar9[0x1a] = fVar6;
  fVar1 = DAT_980021a8;
  pfVar9[6] = fVar6;
  pfVar9[7] = fVar6;
  pfVar9[0xe] = fVar6;
  pfVar9[0xf] = fVar1;
  pfVar9[0x16] = fVar1;
  pfVar9[0x17] = fVar1;
  pfVar9[0x1e] = fVar1;
  pfVar9[0x1f] = fVar6;
  pfVar9[3] = fVar6;
  pfVar9[4] = fVar6;
  pfVar9[5] = fVar1;
  pfVar9[0xb] = fVar6;
  pfVar9[0xc] = fVar6;
  pfVar9[0xd] = fVar1;
  pfVar9[0x13] = fVar6;
  pfVar9[0x14] = fVar6;
  pfVar9[0x15] = fVar1;
  pfVar9[0x1b] = fVar6;
  pfVar9[0x1c] = fVar6;
  pfVar9[0x1d] = fVar1;
  FUN_9802f600(*piVar7);
  iVar8 = FUN_9802f610(0xc,0,1);
  piVar7[1] = iVar8;
  puVar10 = (undefined2 *)FUN_98030768();
  *puVar10 = 0;
  puVar10[1] = 2;
  puVar10[2] = 1;
  puVar10[3] = 0;
  puVar10[4] = 3;
  puVar10[5] = 2;
  FUN_9802f6c0(piVar7[1]);
  FUN_98044240();
  piVar7[0x22] = 4;
  piVar7[0x13] = (int)fVar1;
  piVar7[0x14] = (int)fVar1;
  piVar7[0x15] = (int)fVar1;
  piVar7[0x16] = (int)fVar1;
  piVar7[0x17] = (int)fVar1;
  piVar7[0x18] = (int)fVar1;
  piVar7[0x19] = (int)fVar1;
  piVar7[0x1a] = (int)fVar1;
  piVar7[0x1b] = (int)fVar1;
  piVar7[0x1c] = (int)fVar1;
  piVar7[0x1d] = (int)fVar1;
  piVar7[0x1e] = (int)fVar1;
  FUN_9801a070();
  piVar7[0x1f] = 0x20;
  fVar1 = DAT_980021c0;
  iVar8 = *(int *)(in_r6 + 0x34);
  iVar5 = *(int *)(in_r6 + 0x30);
  piVar7[0x25] = *(int *)(in_r6 + 0x38);
  piVar7[0x23] = iVar5;
  piVar7[0x24] = iVar8;
  piVar7[0x29] = (int)SQRT((float)(extraout_f1 * extraout_f1) * fVar1 +
                           (float)(param_2 * param_2) * fVar1);
  piVar7[0x26] = (int)((float)piVar7[0x23] * (float)piVar7[3] +
                       (float)piVar7[0xb] * (float)piVar7[0x25] +
                       (float)piVar7[7] * (float)piVar7[0x24] + (float)piVar7[0xf]);
  piVar7[0x27] = (int)((float)piVar7[4] * (float)piVar7[0x23] +
                       (float)piVar7[0xc] * (float)piVar7[0x25] +
                       (float)piVar7[8] * (float)piVar7[0x24] + (float)piVar7[0x10]);
  piVar7[0x28] = (int)((float)piVar7[5] * (float)piVar7[0x23] +
                       (float)piVar7[0xd] * (float)piVar7[0x25] +
                       (float)piVar7[9] * (float)piVar7[0x24] + (float)piVar7[0x11]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ace8 @ 9801ace8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ace8(void)

{
  int iVar1;
  float *pfVar2;
  float afStack_f0 [60];
  
  FUN_980447a8();
  iVar1 = FUN_98044ae4();
  if (DAT_980005ec < *(float *)(iVar1 + 0x58)) {
    FUN_9801a138();
    FUN_98028750();
    FUN_98028548();
    pfVar2 = (float *)FUN_98013460();
                    /* WARNING: Subroutine does not return */
    FUN_9800ee88((float *)(iVar1 + 0xc),pfVar2,afStack_f0);
  }
  FUN_98044b30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801af98 @ 9801af98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801af98(void)

{
  int iVar1;
  float *pfVar2;
  float afStack_c0 [34];
  
  iVar1 = FUN_980447a8();
  if (DAT_980005ec < *(float *)(iVar1 + 0x58)) {
    FUN_98028750();
    FUN_98028548();
    pfVar2 = (float *)FUN_98013460();
                    /* WARNING: Subroutine does not return */
    FUN_9800ee88((float *)(iVar1 + 0xc),pfVar2,afStack_c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801b1b0 @ 9801b1b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801b1b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  bool bVar14;
  float *pfVar13;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  undefined8 uVar18;
  
  uVar18 = FUN_98044794();
  piVar10 = (int *)((ulonglong)uVar18 >> 0x20);
  iVar11 = (int)uVar18;
  piVar10[0x20] = param_4;
  iVar15 = param_6 + -2;
  piVar10[0x21] = iVar15;
  fVar5 = DAT_980021a8;
  fVar4 = DAT_980005ec;
  if ((param_7 & 0xff) != 0) {
    if (0 < param_4) {
      pfVar12 = (float *)(iVar11 + -0xc);
      iVar17 = param_4;
      do {
        pfVar12[6] = fVar4;
        pfVar12[7] = fVar4;
        pfVar12 = pfVar12 + 8;
        *pfVar12 = fVar4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    bVar14 = false;
    if (0 < iVar15) {
      do {
        puVar16 = param_5 + 1;
        if (bVar14) {
          uVar8 = *puVar16;
          uVar7 = param_5[2];
        }
        else {
          uVar7 = *puVar16;
          uVar8 = param_5[2];
        }
        FUN_98019e18((uint)*param_5,(uint)uVar7,(uint)uVar8,iVar11);
        iVar15 = iVar15 + -1;
        bVar14 = !bVar14;
        param_5 = puVar16;
      } while (iVar15 != 0);
    }
    fVar6 = DAT_980025c0;
    if (0 < param_4) {
      pfVar12 = (float *)(iVar11 + 0x14);
      iVar15 = param_4;
      do {
        fVar1 = pfVar12[-2];
        fVar2 = *pfVar12;
        fVar3 = pfVar12[-1];
        fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        if (fVar6 <= fVar9) {
          fVar9 = fVar5 / fVar9;
          pfVar12[-2] = fVar1 * fVar9;
          pfVar12[-1] = fVar3 * fVar9;
          *pfVar12 = fVar2 * fVar9;
        }
        else {
          pfVar12[-2] = fVar4;
          pfVar12[-1] = fVar4;
          *pfVar12 = fVar4;
        }
        pfVar12 = pfVar12 + 8;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  iVar15 = FUN_9802f538();
  *piVar10 = iVar15;
  FUN_98030718();
  FUN_98044240();
  FUN_9802f600(*piVar10);
  iVar15 = FUN_9802f610(param_6 << 1,0,1);
  piVar10[1] = iVar15;
  FUN_98030768();
  FUN_98044240();
  FUN_9802f6c0(piVar10[1]);
  piVar10[0x12] = (int)fVar5;
  piVar10[3] = (int)fVar5;
  pfVar12 = (float *)(piVar10 + 0x23);
  piVar10[0xd] = (int)fVar5;
  iVar15 = 0;
  piVar10[8] = (int)fVar5;
  piVar10[0x11] = (int)fVar4;
  piVar10[0x10] = (int)fVar4;
  piVar10[0xf] = (int)fVar4;
  piVar10[0xe] = (int)fVar4;
  piVar10[0xc] = (int)fVar4;
  piVar10[0xb] = (int)fVar4;
  piVar10[10] = (int)fVar4;
  piVar10[9] = (int)fVar4;
  piVar10[7] = (int)fVar4;
  piVar10[6] = (int)fVar4;
  piVar10[5] = (int)fVar4;
  piVar10[4] = (int)fVar4;
  piVar10[0x22] = 6;
  piVar10[0x13] = (int)fVar5;
  piVar10[0x14] = (int)fVar5;
  piVar10[0x15] = (int)fVar5;
  piVar10[0x16] = (int)fVar5;
  piVar10[0x17] = (int)fVar5;
  piVar10[0x18] = (int)fVar5;
  piVar10[0x19] = (int)fVar5;
  piVar10[0x1a] = (int)fVar5;
  piVar10[0x1b] = (int)fVar5;
  piVar10[0x1c] = (int)fVar5;
  piVar10[0x1d] = (int)fVar5;
  piVar10[0x1e] = (int)fVar5;
  piVar10[0x1f] = param_3;
  piVar10[0x23] = (int)fVar4;
  piVar10[0x24] = (int)fVar4;
  piVar10[0x25] = (int)fVar4;
  if (3 < param_4) {
    pfVar13 = (float *)(iVar11 + -0x18);
    do {
      fVar4 = pfVar13[6];
      iVar15 = iVar15 + 4;
      fVar5 = *pfVar12;
      *pfVar12 = fVar5 + fVar4;
      fVar6 = pfVar13[7];
      fVar1 = (float)piVar10[0x24];
      piVar10[0x24] = (int)(fVar6 + fVar1);
      fVar2 = pfVar13[8];
      fVar3 = (float)piVar10[0x25];
      piVar10[0x25] = (int)(fVar2 + fVar3);
      fVar4 = fVar5 + fVar4 + pfVar13[0xe];
      *pfVar12 = fVar4;
      fVar5 = pfVar13[0xf] + fVar6 + fVar1;
      piVar10[0x24] = (int)fVar5;
      fVar6 = pfVar13[0x10] + fVar2 + fVar3;
      piVar10[0x25] = (int)fVar6;
      fVar4 = fVar4 + pfVar13[0x16];
      *pfVar12 = fVar4;
      fVar5 = pfVar13[0x17] + fVar5;
      piVar10[0x24] = (int)fVar5;
      fVar6 = pfVar13[0x18] + fVar6;
      piVar10[0x25] = (int)fVar6;
      *pfVar12 = fVar4 + pfVar13[0x1e];
      piVar10[0x24] = (int)(pfVar13[0x1f] + fVar5);
      pfVar13 = pfVar13 + 0x20;
      piVar10[0x25] = (int)(*pfVar13 + fVar6);
    } while (iVar15 < param_4 + -3);
  }
  if (iVar15 < param_4) {
    iVar17 = param_4 - iVar15;
    pfVar13 = (float *)(iVar15 * 0x20 + iVar11 + -0x18);
    do {
      *pfVar12 = *pfVar12 + pfVar13[6];
      piVar10[0x24] = (int)(pfVar13[7] + (float)piVar10[0x24]);
      pfVar13 = pfVar13 + 8;
      piVar10[0x25] = (int)(*pfVar13 + (float)piVar10[0x25]);
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801b7a8 @ 9801b7a8 ==== */

void FUN_9801b7a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9801b888 @ 9801b888 ==== */

void FUN_9801b888(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9801baa8 @ 9801baa8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9801baa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801bba8 @ 9801bba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801bba8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  
  piVar3 = (int *)FUN_980447a8();
  iVar4 = FUN_98021e18();
  *piVar3 = iVar4;
  iVar13 = 0;
  iVar18 = 0x100;
  iVar4 = 0;
  do {
    iVar16 = iVar4;
    *(int *)(iVar13 + *piVar3) = iVar16;
    iVar13 = iVar13 + 4;
    iVar18 = iVar18 + -1;
    iVar4 = iVar16 + 1;
  } while (iVar18 != 0);
  FUN_98013130();
  if (iVar16 != 0) {
    iVar4 = iVar16 << 2;
    do {
      uVar15 = *(undefined4 *)(iVar4 + *piVar3);
      uVar5 = FUN_98021e88();
      iVar16 = iVar16 + -1;
      iVar13 = (uVar5 + (((int)uVar5 >> 8) + (uint)((int)uVar5 < 0 && (uVar5 & 0xff) != 0)) * -0x100
               ) * 4;
      *(undefined4 *)(iVar4 + *piVar3) = *(undefined4 *)(iVar13 + *piVar3);
      iVar4 = iVar4 + -4;
      *(undefined4 *)(iVar13 + *piVar3) = uVar15;
    } while (iVar16 != 0);
  }
  iVar4 = 0x404;
  iVar13 = 0x2b;
  do {
    *(undefined4 *)(iVar4 + *piVar3 + -4) = *(undefined4 *)(iVar4 + -0x404 + *piVar3);
    *(undefined4 *)(iVar4 + *piVar3) = *(undefined4 *)(iVar4 + -0x404 + *piVar3 + 4);
    *(undefined4 *)(iVar4 + *piVar3 + 4) = *(undefined4 *)(iVar4 + *piVar3 + -0x3fc);
    *(undefined4 *)(iVar4 + *piVar3 + 8) = *(undefined4 *)(iVar4 + *piVar3 + -0x3f8);
    *(undefined4 *)(iVar4 + *piVar3 + 0xc) = *(undefined4 *)(iVar4 + *piVar3 + -0x3f4);
    iVar18 = iVar4 + *piVar3;
    iVar16 = iVar4 + *piVar3;
    iVar4 = iVar4 + 0x18;
    *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar18 + -0x3f0);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar4 = FUN_98021e18();
  piVar3[1] = iVar4;
  iVar4 = 0;
  do {
    uVar15 = FUN_98021e18();
    *(undefined4 *)(iVar4 + piVar3[1]) = uVar15;
    uVar2 = DAT_980021d8;
    uVar1 = DAT_980021a8;
    uVar15 = DAT_980005ec;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x30);
  puVar14 = (undefined4 *)piVar3[1];
  puVar9 = (undefined4 *)*puVar14;
  puVar8 = (undefined4 *)puVar14[1];
  puVar7 = (undefined4 *)puVar14[2];
  puVar6 = (undefined4 *)puVar14[3];
  puVar12 = (undefined4 *)puVar14[4];
  puVar11 = (undefined4 *)puVar14[5];
  *puVar9 = DAT_980021a8;
  puVar9[1] = uVar1;
  puVar10 = (undefined4 *)puVar14[6];
  *puVar8 = uVar2;
  puVar9 = (undefined4 *)puVar14[7];
  puVar8[1] = uVar1;
  puVar8 = (undefined4 *)puVar14[8];
  *puVar7 = uVar1;
  puVar17 = (undefined4 *)puVar14[9];
  puVar7[1] = uVar2;
  puVar7 = (undefined4 *)puVar14[10];
  *puVar6 = uVar2;
  puVar14 = (undefined4 *)puVar14[0xb];
  puVar6[1] = uVar2;
  *puVar12 = uVar1;
  puVar12[1] = uVar15;
  *puVar11 = uVar2;
  puVar11[1] = uVar15;
  *puVar10 = uVar1;
  puVar10[1] = uVar15;
  *puVar9 = uVar2;
  puVar9[1] = uVar15;
  *puVar8 = uVar15;
  puVar8[1] = uVar1;
  *puVar17 = uVar15;
  puVar17[1] = uVar2;
  *puVar7 = uVar15;
  puVar7[1] = uVar1;
  *puVar14 = uVar15;
  puVar14[1] = uVar2;
  puVar6 = (undefined4 *)FUN_98021e18();
  *puVar6 = uVar1;
  puVar6[1] = uVar2;
  piVar3[2] = (int)puVar6;
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  puVar6[4] = uVar1;
  puVar6[5] = uVar2;
  puVar6[6] = uVar1;
  puVar6[7] = uVar2;
  puVar6[8] = uVar15;
  puVar6[9] = uVar15;
  puVar6[10] = uVar15;
  puVar6[0xb] = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801be00 @ 9801be00 ==== */

void FUN_9801be00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9801be60 @ 9801be60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801be60(void)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  
  FUN_980447a0();
  iRam980779c4 = FUN_9802f610(0xe1a,0,1);
  psVar1 = (short *)FUN_98030768();
  sVar4 = 1;
  iVar3 = 0;
  iVar5 = 0x81;
  do {
    *psVar1 = sVar4 + -1;
    psVar1[1] = sVar4 + 5;
    psVar1[2] = sVar4;
    psVar1[3] = sVar4 + 6;
    psVar1[4] = sVar4 + 1;
    psVar1[5] = sVar4 + 7;
    psVar1[6] = sVar4 + 2;
    psVar1[7] = sVar4 + 8;
    psVar1[8] = sVar4 + 3;
    psVar1[9] = sVar4 + 9;
    psVar1[10] = sVar4 + 4;
    psVar1[0xb] = sVar4 + 10;
    psVar1[0xc] = sVar4 + -1;
    psVar2 = psVar1 + 0xd;
    if (iVar3 != 0x80) {
      *psVar2 = sVar4 + 5;
      psVar2 = psVar1 + 0xe;
    }
    iVar3 = iVar3 + 1;
    sVar4 = sVar4 + 6;
    iVar5 = iVar5 + -1;
    psVar1 = psVar2;
  } while (iVar5 != 0);
  FUN_9802f6c0(iRam980779c4);
  uRam980779c8 = FUN_98028f20();
  uRam980779cc = FUN_98028d38(&UNK_980027a0);
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_5c = 0x2a23b9;
  uStack_56 = 0;
  uStack_54 = 0;
  uStack_52 = 0xc;
  uStack_50 = 0x1a23a6;
  uStack_4c = 0;
  uStack_4b = 10;
  uStack_4a = 0;
  uStack_48 = 0xff;
  uStack_46 = 0;
  uStack_44 = 0xffffffff;
  uStack_40 = 0;
  uStack_3f = 0;
  uStack_3e = 0;
  uRam980779d0 = FUN_98028a70(&uStack_60);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801c000 @ 9801c000 ==== */

void FUN_9801c000(void)

{
  FUN_980301b8();
  FUN_980301b8();
  FUN_980301b8();
  FUN_980301b8();
  return;
}


/* ==== FUN_9801c050 @ 9801c050 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9801c050(void)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  puVar2 = (undefined4 *)FUN_980447a8();
  FUN_98016118(puVar2[1]);
  iVar4 = 0;
  *(undefined1 *)((int)puVar2 + 0xd) = 0;
  dVar6 = (double)_UNK_98002840;
  fVar1 = DAT_980005ec;
  do {
    dVar7 = (double)fVar1;
    dVar5 = (double)FUN_98044900(dVar7);
    *(float *)(iVar4 + -0x67f8866c) = (float)dVar5;
    dVar5 = (double)FUN_98044820(dVar7);
    *(float *)(iVar4 + -0x67f88654) = (float)dVar5;
    iVar4 = iVar4 + 4;
    fVar1 = (float)(dVar7 + dVar6);
  } while (iVar4 < 0x18);
  uVar3 = FUN_9802f538();
  *puVar2 = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801c0f8 @ 9801c0f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801c0f8(void)

{
  int iVar1;
  float local_180;
  float local_17c [95];
  
  FUN_9804477c();
  iVar1 = FUN_98044ac0();
  FUN_980172b8();
  FUN_98016188(*(int *)(iVar1 + 4),&local_180,local_17c);
  *(bool *)(iVar1 + 0xc) = local_180 < local_17c[0];
  if (local_180 < local_17c[0]) {
    FUN_98030718();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98044b0c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801cd20 @ 9801cd20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801cd20(void)

{
  int iVar1;
  
  iVar1 = FUN_980447a8();
  if (*(char *)(iVar1 + 0xc) != '\0') {
    FUN_98023288(DAT_98077954,0);
    FUN_98013460();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801cea0 @ 9801cea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801cea0(void)

{
  int iVar1;
  float *pfVar2;
  float afStack_140 [32];
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  
  iVar1 = FUN_980447a4();
  if (*(char *)(iVar1 + 0xc) != '\0') {
    local_84 = DAT_980021a8;
    local_98 = DAT_980021a8;
    local_ac = DAT_980021a8;
    local_c0 = DAT_980021a8;
    local_88 = DAT_980005ec;
    local_8c = DAT_980005ec;
    local_90 = DAT_980005ec;
    local_94 = DAT_980005ec;
    local_9c = DAT_980005ec;
    local_a0 = DAT_980005ec;
    local_a4 = DAT_980005ec;
    local_a8 = DAT_980005ec;
    local_b0 = DAT_980005ec;
    local_b4 = DAT_980005ec;
    local_b8 = DAT_980005ec;
    local_bc = DAT_980005ec;
    pfVar2 = (float *)FUN_98013460();
                    /* WARNING: Subroutine does not return */
    FUN_9800ee88(&local_c0,pfVar2,afStack_140);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d0b0 @ 9801d0b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d0b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d0f0 @ 9801d0f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d0f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d138 @ 9801d138 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d170 @ 9801d170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d170(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d280 @ 9801d280 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d280(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d380 @ 9801d380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d380(void)

{
  int iVar1;
  
  FUN_98044790();
  iVar1 = 0x24;
  do {
    FUN_9801d170();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d5f8 @ 9801d5f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d5f8(void)

{
  FUN_9804479c();
  FUN_98027938(DAT_98077954,0,*(int *)(iRam98059080 + 0xf8));
  FUN_9801ace8();
  FUN_98027938(DAT_98077954,0,*(int *)(iRam98059080 + 0xf8));
  if (*(float *)(iRam98059080 + 0xc) <= DAT_980028bc) {
    FUN_9801a2a8();
    FUN_9801a2a8();
    FUN_98027938(DAT_98077954,0,*(int *)(iRam98059080 + 0xf8));
    FUN_9801ace8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801d828 @ 9801d828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801d828(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  int in_r6;
  int in_r7;
  float *pfVar13;
  int iVar14;
  
  pfVar11 = (float *)FUN_9804479c();
  fVar2 = DAT_980028d8;
  fVar1 = DAT_980028d4;
  fVar8 = DAT_980021a8;
  fVar9 = DAT_980005ec;
  pfVar11[2] = DAT_980028d0;
  pfVar11[1] = fVar1;
  fVar5 = DAT_980028cc;
  *pfVar11 = fVar2;
  pfVar11[3] = fVar9;
  pfVar11[4] = fVar8;
  fVar10 = DAT_980025c0;
  fVar4 = DAT_980021c0;
  fVar2 = DAT_980028c8 - pfVar11[1];
  fVar3 = DAT_980028c4 - pfVar11[2];
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + DAT_980028c0);
  if (DAT_980025c0 <= fVar1) {
    fVar1 = fVar8 / fVar1;
    DAT_980779e4 = fVar2 * fVar1;
    DAT_980779e8 = fVar3 * fVar1;
    DAT_980779e0 = fVar1 * fVar5;
  }
  else {
    DAT_980779e4 = fVar9;
    DAT_980779e8 = fVar9;
    DAT_980779e0 = fVar9;
  }
  *pfVar11 = DAT_980779e0 * DAT_980021c0 + *pfVar11;
  pfVar11[1] = DAT_980779e4 * fVar4 + pfVar11[1];
  pfVar11[2] = DAT_980779e8 * fVar4 + pfVar11[2];
  fVar4 = SQRT(DAT_98063478 * DAT_98063478 +
               DAT_9806347c * DAT_9806347c + DAT_98063480 * DAT_98063480);
  fVar1 = fVar9;
  fVar2 = fVar9;
  fVar3 = fVar9;
  if (fVar10 <= fVar4) {
    fVar4 = fVar8 / fVar4;
    fVar1 = DAT_98063478 * fVar4;
    fVar2 = DAT_98063480 * fVar4;
    fVar3 = DAT_9806347c * fVar4;
  }
  DAT_98063480 = fVar2;
  DAT_98063478 = fVar1;
  DAT_9806347c = fVar3;
  fVar6 = fVar2 * DAT_980779e0 - fVar1 * DAT_980779e8;
  fVar5 = fVar3 * DAT_980779e8 - fVar2 * DAT_980779e4;
  fVar4 = fVar1 * DAT_980779e4 - fVar3 * DAT_980779e0;
  fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  DAT_980779dc = fVar9;
  DAT_980779d8 = fVar9;
  DAT_980779d4 = fVar9;
  if (fVar10 <= fVar7) {
    fVar7 = fVar8 / fVar7;
    DAT_980779dc = fVar4 * fVar7;
    DAT_980779d8 = fVar6 * fVar7;
    DAT_980779d4 = fVar5 * fVar7;
  }
  if (-1 < in_r6 + -1) {
    if (3 < in_r6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < in_r6 + -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  fVar5 = DAT_980779d8 * DAT_980779e8 - DAT_980779dc * DAT_980779e4;
  fVar6 = DAT_980779d4 * DAT_980779e4 - DAT_980779d8 * DAT_980779e0;
  fVar4 = DAT_980779dc * DAT_980779e0 - DAT_980779d4 * DAT_980779e8;
  fVar7 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
  if (fVar10 <= fVar7) {
    fVar7 = fVar8 / fVar7;
    DAT_980779d8 = fVar4 * fVar7;
    DAT_980779d4 = fVar5 * fVar7;
    DAT_980779dc = fVar6 * fVar7;
  }
  else {
    DAT_980779d4 = fVar9;
    DAT_980779d8 = fVar9;
    DAT_980779dc = fVar9;
  }
  if (3 < in_r6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < in_r6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pfVar12 = pfVar11 + -1;
  iVar14 = 5;
  pfVar13 = pfVar11 + 4;
  do {
    pfVar12 = pfVar12 + 1;
    pfVar13 = pfVar13 + 1;
    *pfVar13 = *pfVar12;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  pfVar12 = pfVar11 + -1;
  iVar14 = 5;
  pfVar11 = pfVar11 + 9;
  do {
    pfVar12 = pfVar12 + 1;
    pfVar11 = pfVar11 + 1;
    *pfVar11 = *pfVar12;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  fVar2 = DAT_980779d8 * DAT_980779e8 - DAT_980779dc * DAT_980779e4;
  fVar1 = DAT_980779d4 * DAT_980779e4 - DAT_980779d8 * DAT_980779e0;
  fVar3 = DAT_980779dc * DAT_980779e0 - DAT_980779d4 * DAT_980779e8;
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  DAT_980779dc = fVar9;
  DAT_980779d8 = fVar9;
  DAT_980779d4 = fVar9;
  if (fVar10 <= fVar4) {
    fVar4 = fVar8 / fVar4;
    DAT_980779dc = fVar1 * fVar4;
    DAT_980779d8 = fVar3 * fVar4;
    DAT_980779d4 = fVar4 * fVar2;
  }
  if (-1 < in_r7 + -1) {
    if (3 < in_r7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < in_r7 + -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  fVar2 = DAT_980779d8 * DAT_980779e8 - DAT_980779dc * DAT_980779e4;
  fVar3 = DAT_980779d4 * DAT_980779e4 - DAT_980779d8 * DAT_980779e0;
  fVar1 = DAT_980779dc * DAT_980779e0 - DAT_980779d4 * DAT_980779e8;
  fVar4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar10 <= fVar4) {
    fVar8 = fVar8 / fVar4;
    DAT_980779d8 = fVar1 * fVar8;
    DAT_980779d4 = fVar8 * fVar2;
    DAT_980779dc = fVar3 * fVar8;
  }
  else {
    DAT_980779d4 = fVar9;
    DAT_980779d8 = fVar9;
    DAT_980779dc = fVar9;
  }
  if (in_r7 < 4) {
    if (in_r7 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ea88 @ 9801ea88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ea88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801ed38 @ 9801ed38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801ed38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801f120 @ 9801f120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801f120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801f268 @ 9801f268 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9801f268(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
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
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [40];
  
  FUN_980447a4();
  iVar9 = FUN_98044af0();
  fVar6 = DAT_980021a8;
  fVar5 = DAT_980005ec;
  iVar16 = 0;
  puVar15 = (undefined4 *)(iVar9 + 0x30);
  uStack_140 = _UNK_98002954;
  uStack_13c = _UNK_98002954;
  uStack_138 = _UNK_98002954;
  fStack_134 = DAT_980005ec;
  uStack_130 = _UNK_98002950;
  uStack_12c = _UNK_98002950;
  uStack_128 = _UNK_98002950;
  fStack_124 = DAT_980005ec;
  do {
    iVar10 = FUN_98021e18();
    if (iVar10 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_9801d0b0(iVar10,iVar16 + iRam9807797c);
    }
    iVar16 = iVar16 + 0x74;
    puVar15 = puVar15 + 1;
    *puVar15 = uVar11;
  } while (iVar16 < 0xb54);
  iVar16 = 0;
  iVar10 = 0;
  puVar15 = (undefined4 *)(iVar9 + 0x94);
  do {
    iVar12 = FUN_98021e18();
    if (iVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_9801d0f0(iVar12,iVar10 + iRam98077978,iVar16);
    }
    iVar10 = iVar10 + 0x74;
    puVar15 = puVar15 + 1;
    *puVar15 = uVar11;
    fVar7 = DAT_980025c0;
    iVar16 = iVar16 + 1;
  } while (iVar10 < 0x15c);
  iVar10 = *(int *)(iVar9 + 0xa4);
  iVar12 = 0;
  iVar16 = 0x124c;
  do {
    iVar13 = iVar10 + iVar12;
    *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(iVar10 + iVar12);
    *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar13 + 4);
    *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(iVar13 + 8);
    iVar10 = *(int *)(iVar9 + 0xa4);
    iVar13 = iVar10 + iVar12;
    pfVar14 = (float *)(iVar13 + 0xc);
    fVar1 = *pfVar14;
    fVar2 = *(float *)(iVar13 + 0x14);
    fVar3 = *(float *)(iVar13 + 0x10);
    fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    if (fVar7 <= fVar4) {
      fVar4 = fVar6 / fVar4;
      *pfVar14 = fVar1 * fVar4;
      *(float *)(iVar13 + 0x10) = fVar3 * fVar4;
      *(float *)(iVar13 + 0x14) = fVar2 * fVar4;
    }
    else {
      *pfVar14 = fVar5;
      *(float *)(iVar13 + 0x10) = fVar5;
      *(float *)(iVar13 + 0x14) = fVar5;
    }
    uVar8 = _UNK_98002948;
    iVar16 = iVar16 + -1;
    iVar12 = iVar12 + 0x20;
  } while (iVar16 != 0);
  dVar17 = (double)FUN_98044820(_UNK_98002948);
  dVar18 = (double)FUN_98044900(uVar8);
  uVar8 = _UNK_98002940;
  fStack_cc = (float)dVar18;
  fStack_bc = -(float)dVar17;
  fStack_e0 = fVar6;
  fStack_dc = fVar5;
  fStack_d8 = fVar5;
  fStack_d4 = fVar5;
  fStack_d0 = fVar5;
  fStack_c4 = fVar5;
  fStack_c0 = fVar5;
  fStack_b4 = fVar5;
  fStack_a8 = fVar5;
  fStack_ac = fVar5;
  fStack_b0 = fVar5;
  fStack_a4 = fVar6;
  fStack_c8 = (float)dVar17;
  fStack_b8 = fStack_cc;
  dVar17 = (double)FUN_98044820(_UNK_98002940);
  dVar18 = (double)FUN_98044900(uVar8);
  fStack_180 = (float)dVar18;
  fStack_17c = fVar5;
  fStack_160 = -(float)dVar17;
  fStack_174 = fVar5;
  fStack_170 = fVar5;
  fStack_16c = fVar6;
  fStack_168 = fVar5;
  fStack_164 = fVar5;
  fStack_15c = fVar5;
  fStack_154 = fVar5;
  fStack_148 = fVar5;
  fStack_14c = fVar5;
  fStack_150 = fVar5;
  fStack_144 = fVar6;
  fStack_178 = (float)dVar17;
  fStack_158 = fStack_180;
                    /* WARNING: Subroutine does not return */
  FUN_9800ee88(&fStack_e0,&fStack_180,afStack_a0);
}


/* ==== FUN_9801fba8 @ 9801fba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801fba8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_980447a8();
  piVar3 = piVar1 + 0xd;
  iVar2 = 0x19;
  do {
    if (*piVar3 != 0) {
      FUN_9801d138(*piVar3);
      FUN_98021e50();
    }
    iVar2 = iVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 0);
  piVar3 = piVar1 + 0x26;
  iVar2 = 3;
  do {
    if (*piVar3 != 0) {
      FUN_9801d138(*piVar3);
      FUN_98021e50();
    }
    iVar2 = iVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 0);
  if (*piVar1 != 0) {
    FUN_9801a5c8(*piVar1);
    FUN_98021e50();
  }
  if (piVar1[1] != 0) {
    FUN_9801a5c8(piVar1[1]);
    FUN_98021e50();
  }
  if (piVar1[2] != 0) {
    FUN_9801a5c8(piVar1[2]);
    FUN_98021e50();
  }
  if (piVar1[3] != 0) {
    FUN_9801a5c8(piVar1[3]);
    FUN_98021e50();
  }
  if (piVar1[4] != 0) {
    FUN_9801a5c8(piVar1[4]);
    FUN_98021e50();
  }
  if (piVar1[5] != 0) {
    FUN_9801a5c8(piVar1[5]);
    FUN_98021e50();
  }
  if (piVar1[6] != 0) {
    FUN_9801a5c8(piVar1[6]);
    FUN_98021e50();
  }
  if (piVar1[7] != 0) {
    FUN_9801a5c8(piVar1[7]);
    FUN_98021e50();
  }
  if (piVar1[8] != 0) {
    FUN_9801a5c8(piVar1[8]);
    FUN_98021e50();
  }
  if (piVar1[9] != 0) {
    FUN_9801a5c8(piVar1[9]);
    FUN_98021e50();
  }
  FUN_98021e50();
  FUN_98021e50();
  FUN_98021e50();
  FUN_98021e50();
  FUN_98021e50();
  FUN_98021e50();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9801fd68 @ 9801fd68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9801fd68(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_980447a4();
  FUN_98022bb8(DAT_98077954,1);
  FUN_98022cd8(DAT_98077954,6);
  FUN_98022d68(DAT_98077954,7);
  FUN_98022b80(DAT_98077954,1);
  FUN_98023040(DAT_98077954,4);
  FUN_98022fe0();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  FUN_9801a2a8();
  if (*(float *)(iRam98059080 + 0xc) <= DAT_980025d0) {
    FUN_9801d380();
    FUN_9801d5f8();
    if (*(float *)(iRam98059080 + 0xc) < DAT_98002234) {
      iVar2 = 3;
      do {
        FUN_9801d170();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_9801d5f8();
    FUN_9801ea88();
    FUN_9801d380();
  }
  if (((*(char *)(iRam98059080 + 0x1e) != '\0') && (*(char *)(iVar1 + 0xc4) != '\0')) &&
     (*(int *)(iRam98059080 + 0xfc) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020098 @ 98020098 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98020098(void)

{
  FUN_980447a8();
  FUN_98044af0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980207f0 @ 980207f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980207f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020830 @ 98020830 ==== */

void FUN_98020830(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980208f8 @ 980208f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980208f8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  
  uVar18 = FUN_98044784();
  puVar4 = (uint *)((ulonglong)uVar18 >> 0x20);
  uVar6 = (uint)uVar18;
  FUN_980441a0(puVar4,0,uVar6 * uVar6 * 4);
  FUN_98013130();
  bVar1 = true;
  uVar13 = (int)uVar6 >> 1;
  *puVar4 = (int)((int)param_5 >> 8 | param_5) >> 8 | param_5 | 0xff000000;
  uVar12 = param_3 >> 1;
  bVar11 = false;
  uVar14 = uVar13;
  uVar17 = uVar13;
  uVar3 = uVar6;
  while (uVar2 = uVar13, 0 < (int)uVar2) {
    iVar10 = uVar17 - uVar2;
    iVar9 = uVar17 + uVar2;
    iVar7 = uVar14 - uVar2;
    iVar8 = uVar14 + uVar2;
    if (iVar10 < 0) {
      iVar10 = iVar10 + uVar6;
    }
    if ((int)uVar6 <= iVar9) {
      iVar9 = iVar9 - uVar6;
    }
    if (iVar7 < 0) {
      iVar7 = iVar7 + uVar6;
    }
    if ((int)uVar6 <= iVar8) {
      iVar8 = iVar8 - uVar6;
    }
    iVar7 = iVar7 * uVar6;
    uVar13 = uVar2;
    if (bVar1) {
      uVar16 = (puVar4[iVar8 * uVar6 + iVar9] & 0xff) + (puVar4[iVar8 * uVar6 + iVar10] & 0xff) +
               (puVar4[iVar7 + iVar9] & 0xff) + (puVar4[iVar7 + iVar10] & 0xff) >> 2;
      if (uVar16 < param_6) {
        uVar16 = param_6;
      }
      if (0 < (int)uVar12) {
        uVar5 = FUN_98021e88();
        iVar7 = (int)uVar5 / 100 + ((int)uVar5 >> 0x1f);
        if ((int)(uVar5 + (iVar7 - (iVar7 >> 0x1f)) * -100) < 0x32) {
          uVar5 = FUN_98021e88();
          uVar16 = uVar16 - (uVar5 - ((int)uVar5 / (int)uVar12) * uVar12);
          trapWord(6,uVar12,0);
          trapWord(5,uVar12 & ~((uVar5 << 1 | uVar5 >> 0x1f) - 1),0xffff);
          if (0xff < uVar16) {
            uVar16 = param_6;
          }
        }
        else {
          uVar5 = FUN_98021e88();
          uVar16 = (uVar5 - ((int)uVar5 / (int)uVar12) * uVar12) + uVar16;
          trapWord(6,uVar12,0);
          trapWord(5,uVar12 & ~((uVar5 << 1 | uVar5 >> 0x1f) - 1),0xffff);
          if (0xff < uVar16) {
            uVar16 = 0xff;
          }
        }
      }
      uVar5 = uVar3 + uVar17;
      puVar4[uVar14 * uVar6 + uVar17] = ((uVar16 & 0xff) << 8 | 0xffff0000 | uVar16) << 8 | uVar16;
      uVar17 = uVar5;
      if (((int)uVar6 <= (int)uVar5) &&
         (uVar14 = uVar3 + uVar14, uVar17 = uVar2, (int)uVar6 <= (int)uVar14)) {
        bVar1 = false;
        uVar14 = 0;
      }
    }
    else {
      iVar15 = uVar14 * uVar6;
      uVar16 = (puVar4[iVar15 + iVar9] & 0xff) + (puVar4[iVar15 + iVar10] & 0xff) +
               (puVar4[iVar7 + uVar17] & 0xff) + (puVar4[iVar8 * uVar6 + uVar17] & 0xff) >> 2;
      if (uVar16 < param_6) {
        uVar16 = param_6;
      }
      if (0 < (int)uVar12) {
        uVar5 = FUN_98021e88();
        iVar7 = (int)uVar5 / 100 + ((int)uVar5 >> 0x1f);
        if ((int)(uVar5 + (iVar7 - (iVar7 >> 0x1f)) * -100) < 0x32) {
          uVar5 = FUN_98021e88();
          uVar16 = uVar16 - (uVar5 - ((int)uVar5 / (int)uVar12) * uVar12);
          trapWord(6,uVar12,0);
          trapWord(5,uVar12 & ~((uVar5 << 1 | uVar5 >> 0x1f) - 1),0xffff);
          if (0xff < uVar16) {
            uVar16 = param_6;
          }
        }
        else {
          uVar5 = FUN_98021e88();
          uVar16 = (uVar5 - ((int)uVar5 / (int)uVar12) * uVar12) + uVar16;
          trapWord(6,uVar12,0);
          trapWord(5,uVar12 & ~((uVar5 << 1 | uVar5 >> 0x1f) - 1),0xffff);
          if (0xff < uVar16) {
            uVar16 = 0xff;
          }
        }
      }
      iVar15 = iVar15 + uVar17;
      uVar17 = uVar3 + uVar17;
      puVar4[iVar15] = ((uVar16 & 0xff) << 8 | 0xffff0000 | uVar16) << 8 | uVar16;
      if ((int)uVar6 <= (int)uVar17) {
        uVar14 = uVar3 + uVar14;
        if ((int)uVar14 < (int)uVar6) {
          uVar17 = -(uint)!bVar11 & uVar2;
        }
        else if (bVar11) {
          uVar17 = (int)uVar2 >> 1;
          uVar12 = (int)uVar12 >> 1;
          bVar1 = true;
          bVar11 = !bVar11;
          uVar13 = uVar17;
          uVar14 = uVar17;
          uVar3 = uVar2;
        }
        else {
          uVar17 = 0;
          bVar11 = true;
          uVar14 = uVar2;
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020c98 @ 98020c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020c98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020cf0 @ 98020cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020cf0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_78;
  int local_74;
  
  iVar1 = FUN_98044788();
  FUN_980276c0();
  iVar2 = FUN_980276a8(iVar1);
  thunk_FUN_980269f0();
  iVar12 = local_78 >> 1;
  iVar10 = local_74 >> 1;
  if (iVar2 < 2) {
    FUN_98025ef0(iVar1);
  }
  else {
    if ((0 < iVar12) && (0 < iVar10)) {
      FUN_980276c0();
      iVar2 = 0;
      if (0 < iVar10) {
        iVar11 = 1;
        do {
          if (0 < iVar12) {
            puVar3 = (uint *)(local_a0 * iVar2 + local_9c + -4);
            puVar4 = (uint *)(iVar11 * local_98 + local_94 + -4);
            puVar5 = (uint *)(local_98 * iVar2 * 2 + local_94 + -4);
            iVar13 = iVar12;
            do {
              uVar9 = puVar5[1];
              puVar5 = puVar5 + 2;
              uVar7 = *puVar5;
              uVar8 = puVar4[1];
              puVar4 = puVar4 + 2;
              uVar6 = *puVar4;
              puVar3 = puVar3 + 1;
              *puVar3 = (uVar9 >> 2 & 0x3fc00000) + (uVar7 >> 2 & 0x3fc00000) +
                        (uVar8 >> 2 & 0x3fc00000) + (uVar6 >> 2 & 0x3fc00000) & 0xff00ffff |
                        (uVar9 >> 2 & 0x3fc000) + (uVar7 >> 2 & 0x3fc000) + (uVar8 >> 2 & 0x3fc000)
                        + (uVar6 >> 2 & 0x3fc000) & 0xffff00ff |
                        (uVar9 >> 2 & 0x3fc0) + (uVar7 >> 2 & 0x3fc0) + (uVar8 >> 2 & 0x3fc0) +
                        (uVar6 >> 2 & 0x3fc0) & 0xffffff00 |
                        (uVar6 & 0xff) + (uVar8 & 0xff) + (uVar7 & 0xff) + (uVar9 & 0xff) >> 2;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          iVar2 = iVar2 + 1;
          iVar11 = iVar11 + 2;
        } while (iVar2 < iVar10);
      }
      FUN_98025ef0(iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_98025ef0(iVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98020ed8 @ 98020ed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98020ed8(void)

{
  FUN_98044794();
  FUN_98044ac0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980212e0 @ 980212e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980212e0(void)

{
  FUN_9804478c();
  FUN_98044ac0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980217c8 @ 980217c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980217c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 local_f4;
  
  FUN_9804479c();
  FUN_98044ac0();
  iVar1 = FUN_980276e0(param_3,param_4,1,0,0,0x18280086,1,3);
  *param_5 = iVar1;
  FUN_980276c0();
  FUN_980208f8(local_f4,param_3,100,0xbabeface,0xffffffff,0);
  if (0 < param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98025ef0(*param_5);
  FUN_98020cf0();
  FUN_98044b0c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021c60 @ 98021c60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021c60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021cf0 @ 98021cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98021cf0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_60;
  uint auStack_5c [6];
  int iStack_44;
  int iStack_40;
  
  FUN_980447a4();
  iVar2 = func_0x98058b14(&DAT_980779f0,&DAT_980753d4,0x903000,4,1);
  if (-1 < iVar2) {
    uVar1 = _DAT_980779f0 & 0xfffff000;
    iVar2 = (_DAT_980779f0 - uVar1) + _DAT_980753d4;
    FUN_980441a0(auStack_5c,0,0x2c);
    uStack_60 = 0x30;
    iStack_44 = iVar2;
    iStack_40 = iVar2;
    DAT_980779ec = FUN_98047bb8(0x1000,uVar1,iVar2,0,0,&uStack_60);
    if (DAT_980779ec == 0) {
      func_0x98058b04(&DAT_980779f0,&DAT_980753d4,0x8000,1);
      _DAT_980779f0 = 0;
    }
    else {
      FUN_98045210();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021dd0 @ 98021dd0 ==== */

void FUN_98021dd0(void)

{
  FUN_98047390();
  func_0x98058b04(&DAT_980779f0,&DAT_980753d4,0x8000,1);
  return;
}


/* ==== FUN_98021e18 @ 98021e18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021e18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021e50 @ 98021e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021e50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021e88 @ 98021e88 ==== */

uint FUN_98021e88(void)

{
  uint local_10 [4];
  
  local_10[0] = 0;
  func_0x98058b24(local_10,4);
  return local_10[0] & 0x7fff;
}


/* ==== FUN_98021ef8 @ 98021ef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021ef8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98021f08 @ 98021f08 ==== */

void FUN_98021f08(int *param_1,int param_2,int param_3)

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


/* ==== FUN_98021f38 @ 98021f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98021f38(int param_1)

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


/* ==== FUN_98022000 @ 98022000 ==== */

void FUN_98022000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980220e0 @ 980220e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980220e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022130 @ 98022130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022230 @ 98022230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022230(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980222a8 @ 980222a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980222a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022358 @ 98022358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980223e0 @ 980223e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980223e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022420 @ 98022420 ==== */

void FUN_98022420(int param_1)

{
  enforceInOrderExecutionIO();
  *(undefined4 *)(param_1 + 0x2b08) = 0;
  return;
}


/* ==== FUN_98022430 @ 98022430 ==== */

void FUN_98022430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98022540 @ 98022540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022540(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022598 @ 98022598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980225e8 @ 980225e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980225e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022760 @ 98022760 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022760(void)

{
  int iVar1;
  int iVar2;
  int extraout_r4;
  uint in_r6;
  int *in_r8;
  
  FUN_980447a4();
  *in_r8 = 0;
  iVar1 = FUN_98022598();
  if (iVar1 != 0) {
    iVar2 = FUN_98034130();
    if (iVar2 == 0) {
      FUN_98048ea8(*(int *)(iVar1 + -4),0x24800000);
    }
    else {
      if (extraout_r4 == 2) {
        *(byte *)(iVar1 + 0x2b3c) = *(byte *)(iVar1 + 0x2b3c) | 0x80;
        FUN_980307b0(iVar1);
        iVar2 = FUN_980341a0();
      }
      else {
        if (((in_r6 & 0x100) == 0) && ((in_r6 & 0x3f000000) == 0)) {
          in_r6 = in_r6 | 0xc000000;
        }
        *(uint *)(iVar1 + 0x5f48) = in_r6;
        iVar2 = FUN_980346c8();
      }
      if (iVar2 == 0) {
        FUN_98022358();
      }
      else {
        *in_r8 = iVar1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022838 @ 98022838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022838(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  undefined8 uVar15;
  
  uVar15 = FUN_9804478c();
  iVar2 = (int)((ulonglong)uVar15 >> 0x20);
  uVar4 = (uint)uVar15;
  uVar3 = *(uint *)(iVar2 + 0x30);
  if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  if ((*(byte *)(iVar2 + 0x2b3c) & 0x10) == 0) {
    if (((((*(byte *)(iVar2 + 0x2b3c) & 0x20) == 0) ||
         ((*(int *)(iVar2 + 0x3330) != *(int *)(iVar2 + 0x3210) && (*(int *)(iVar2 + 0x3210) != 0)))
         ) || ((*(int *)(iVar2 + 0x3334) != *(int *)(iVar2 + 0x3214) &&
               (*(int *)(iVar2 + 0x3214) != 0)))) ||
       ((((*(int *)(iVar2 + 0x3338) != *(int *)(iVar2 + 0x3218) && (*(int *)(iVar2 + 0x3218) != 0))
         || ((*(int *)(iVar2 + 0x333c) != *(int *)(iVar2 + 0x321c) &&
             (*(int *)(iVar2 + 0x321c) != 0)))) ||
        ((*(int *)(iVar2 + 0x3340) != *(int *)(iVar2 + 0x3220) && (*(int *)(iVar2 + 0x3220) != 0))))
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar12 = 0;
    *(undefined4 *)(uVar3 + 4) = 0xc0006100;
    puVar11 = (uint *)(uVar3 + 8);
    *puVar11 = 0;
    if (*(int *)(iVar2 + 0x3344) != 0) {
      uVar3 = 0;
      puVar14 = (uint *)(iVar2 + 0x334c);
      piVar13 = (int *)(iVar2 + 0x343c);
      do {
        iVar6 = piVar13[-1];
        iVar5 = *piVar13;
        uVar7 = uVar4;
        if ((int)uVar4 <= (int)puVar14[-1]) {
          uVar7 = puVar14[-1];
        }
        uVar8 = param_3;
        if ((int)param_3 <= (int)*puVar14) {
          uVar8 = *puVar14;
        }
        uVar9 = puVar14[1];
        if ((int)param_4 < (int)puVar14[1]) {
          uVar9 = param_4;
        }
        uVar10 = puVar14[2];
        if ((int)param_5 < (int)puVar14[2]) {
          uVar10 = param_5;
        }
        if (((int)uVar9 <= (int)uVar7) || ((int)uVar10 <= (int)uVar8)) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
        }
        puVar11[1] = 0xc0006000;
        puVar11[2] = 3 << (uVar3 & 0x3f);
        puVar11[3] = 0xc0035501;
        puVar11[4] = 0x2080;
        puVar11[5] = iVar5 * -0x10000 & 0x7fff0000U | -iVar6 & 0x7fffU;
        puVar11[6] = (uVar8 & 0x3fff) << 0x10 | uVar7 & 0x3fff;
        puVar11 = puVar11 + 7;
        *puVar11 = (uVar10 & 0x3fff) << 0x10 | uVar9 & 0x3fff;
        *(uint **)(iVar2 + 0x30) = puVar11;
        if (*(uint **)(iVar2 + 0x38) < puVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_98032238();
        }
        uVar12 = uVar12 + 1;
        piVar13 = piVar13 + 2;
        puVar14 = puVar14 + 4;
        uVar3 = uVar3 + 2;
      } while (uVar12 < *(uint *)(iVar2 + 0x3344));
    }
    if (((*(byte *)(iVar2 + 0x2b3f) & 0x20) != 0) && ((*(byte *)(iVar2 + 0x2b3c) & 0x40) != 0)) {
      puVar11[1] = 0xc0006000;
      puVar11[2] = 1;
      puVar11[3] = 0xc0025501;
      puVar11[4] = 0x2081;
      puVar11[5] = (param_3 & 0x3fff) << 0x10 | uVar4 & 0x3fff;
      puVar11 = puVar11 + 6;
      *puVar11 = (param_5 & 0x3fff) << 0x10 | param_4 & 0x3fff;
    }
    puVar11[1] = 0xc0006000;
    puVar11[2] = *(uint *)(iVar2 + 0x331c);
    puVar11[3] = 0xc0006100;
    puVar11 = puVar11 + 4;
    *puVar11 = *(uint *)(iVar2 + 0x3320);
  }
  else {
    *(undefined4 *)(uVar3 + 4) = 0x22080;
    *(undefined4 *)(uVar3 + 8) = 0;
    *(uint *)(uVar3 + 0xc) = (param_3 & 0x3fff) << 0x10 | uVar4 & 0x3fff;
    puVar11 = (uint *)(uVar3 + 0x10);
    *puVar11 = (param_5 & 0x3fff) << 0x10 | param_4 & 0x3fff;
  }
  *(uint **)(iVar2 + 0x30) = puVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022b20 @ 98022b20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022b20(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2948) = *(uint *)(param_1 + 0x2948) & 0xfffffff8 | param_2 & 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022b80 @ 98022b80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022b80(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x293c) = (param_2 & 1) << 3 | *(uint *)(param_1 + 0x293c) & 0xfffffff7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98022bb8 @ 98022bb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022bb8(int param_1,int param_2)

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


/* ==== FUN_98022cd8 @ 98022cd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022cd8(int param_1,uint param_2)

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


/* ==== FUN_98022d68 @ 98022d68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022d68(int param_1,uint param_2)

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


/* ==== FUN_98022fe0 @ 98022fe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98022fe0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023040 @ 98023040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023040(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x293c) = *(uint *)(param_1 + 0x293c) & 0xfffffff8 | param_2 & 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023218 @ 98023218 ==== */

void FUN_98023218(int param_1,int param_2)

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


/* ==== FUN_98023248 @ 98023248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023248(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3014) = param_2;
  *(uint *)(param_1 + 0x2934) =
       (-(uint)(*(int *)(param_1 + 0x3220) != 0) & param_2 & 1) << 1 |
       *(uint *)(param_1 + 0x2934) & 0xfffffffd;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023288 @ 98023288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023288(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2934) = (param_2 & 1) << 2 | *(uint *)(param_1 + 0x2934) & 0xfffffffb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980232b8 @ 980232b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980232b8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2934) = (param_2 & 7) << 4 | *(uint *)(param_1 + 0x2934) & 0xffffff8f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980237e8 @ 980237e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980237e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3004) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98023d50 @ 98023d50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98023d50(int param_1,int param_2)

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


/* ==== FUN_98023d90 @ 98023d90 ==== */

uint FUN_98023d90(int param_1)

{
  return *(uint *)(param_1 + 0x294c) & 1;
}


/* ==== FUN_980240a8 @ 980240a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980240a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980240d0 @ 980240d0 ==== */

uint FUN_980240d0(int param_1)

{
  return *(uint *)(param_1 + 0x29c0) & 1;
}


/* ==== FUN_98024278 @ 98024278 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024278(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2ffc) = (param_2 & 7) << 0x11 | *(uint *)(param_1 + 0x2ffc) & 0xfff1ffff;
  if (((*(byte *)(param_1 + 0x2b3f) & 0x20) == 0) && ((param_2 & 7) == 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024390 @ 98024390 ==== */

void FUN_98024390(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 14000) = param_2;
  return;
}


/* ==== FUN_980243c0 @ 980243c0 ==== */

void FUN_980243c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98024568 @ 98024568 ==== */

void FUN_98024568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98024de8 @ 98024de8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024de8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98024ee0 @ 98024ee0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98024ee0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  iVar2 = (int)uVar6;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x1c);
    uVar4 = *(int *)(param_3 + 0x18) + param_4;
    *(uint *)((-iVar2 + 0xef) * 8 + iVar1) =
         ((uVar4 >> 0x14) + 0x200 & 0x1000) + (uVar4 & 0x1fffffff);
    *(int *)((-iVar2 + 0x11) * 8 + iVar1 + 0x6f4) = iVar3 - param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (iVar2 + 0xc89) * 4;
  puVar5 = *(uint **)(iVar3 + iVar1);
  if (puVar5 != (uint *)0x0) {
    if (*(uint *)(iVar1 + 0x2b1c) == 0) {
      if ((*(uint *)(iVar1 + 0x2b20) & *puVar5) != 0) {
        if (*(uint *)(iVar1 + 0x366c) <= *(uint *)(iVar1 + 0x3668)) {
                    /* WARNING: Subroutine does not return */
          FUN_98034ac0();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      puVar5[2] = *(uint *)(iVar1 + 0x2b1c);
    }
  }
  *(undefined4 *)(iVar3 + iVar1) = 0;
  *(char *)(iVar1 + iVar2 + 0x3268) = (char)(param_5 >> 2);
  if ((param_5 >> 2 != 0) && (param_5 >> 2 != (uint)*(byte *)(iVar1 + iVar2 + 0x2fe8))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025000 @ 98025000 ==== */

void FUN_98025000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98025090 @ 98025090 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025090(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980250d8 @ 980250d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980250d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025118 @ 98025118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980251e8 @ 980251e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980251e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980252b8 @ 980252b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980252b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980253b0 @ 980253b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980253b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025618 @ 98025618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98025698 @ 98025698 ==== */

void FUN_98025698(void)

{
  FUN_980253b0();
  return;
}


/* ==== FUN_980256b8 @ 980256b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980256b8(int param_1,int param_2)

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


/* ==== FUN_98025748 @ 98025748 ==== */

void FUN_98025748(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98025ad8 @ 98025ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98025ad8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_FUN_98025748 @ 98025db0 ==== */

void thunk_FUN_98025748(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98025db8 @ 98025db8 ==== */

void FUN_98025db8(int param_1,int *param_2,int *param_3,int *param_4)

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


/* ==== FUN_98025e50 @ 98025e50 ==== */

void FUN_98025e50(int param_1,int *param_2,int *param_3,int *param_4)

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


/* ==== FUN_98025ef0 @ 98025ef0 ==== */

void FUN_98025ef0(int param_1)

{
  FUN_9802f258(param_1,*(uint *)(param_1 + 0x20) & 0xfffff000,*(uint *)(param_1 + 0x30) & 0xfffff000
              );
  return;
}


/* ==== FUN_98025f08 @ 98025f08 ==== */

void FUN_98025f08(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x2d) {
    if (param_1 == 0x2c) {
LAB_98025f58:
      uVar1 = 4;
      goto LAB_98025f48;
    }
    if (10 < param_1) {
      if (param_1 < 0xd) {
LAB_98025f44:
        uVar1 = 2;
LAB_98025f48:
        *param_2 = uVar1;
        *param_3 = 1;
        return;
      }
      if (0x11 < param_1) {
        if (param_1 < 0x15) goto LAB_98025f90;
        if (param_1 == 0x27) goto LAB_98025f58;
        if (param_1 == 0x28) goto LAB_98025f44;
      }
    }
  }
  else if ((param_1 == 0x31) ||
          ((0x32 < param_1 && ((param_1 < 0x36 || ((0x39 < param_1 && (param_1 < 0x3e)))))))) {
LAB_98025f90:
    uVar1 = 4;
    goto LAB_98025f94;
  }
  uVar1 = 1;
LAB_98025f94:
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}


/* ==== FUN_98025fa0 @ 98025fa0 ==== */

int FUN_98025fa0(int param_1,int param_2,int param_3,int param_4)

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


/* ==== FUN_98026028 @ 98026028 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026028(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,uint param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int local_60;
  int local_5c [23];
  
  uVar5 = FUN_98044794();
  puVar2 = (uint *)((ulonglong)uVar5 >> 0x20);
  uVar3 = 0x20;
  iVar4 = 4;
  if (param_6 != 2) {
    iVar4 = 1;
  }
  FUN_98025f08(param_5,local_5c,&local_60);
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


/* ==== FUN_98026148 @ 98026148 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026148(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 int param_6,int param_7,int param_8)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uStack00000024;
  int iStack0000004c;
  int in_stack_00000054;
  uint in_stack_00000064;
  uint *in_stack_0000006c;
  uint *in_stack_00000074;
  int *in_stack_0000007c;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4 [41];
  
  uVar15 = FUN_98044770();
  iVar3 = (int)uVar15;
  iVar7 = 0;
  if ((param_6 == 1) && (1 < param_3)) {
    local_a4[0] = 1;
LAB_980261a4:
    bVar1 = true;
  }
  else {
    local_a4[0] = 0;
    bVar1 = false;
    if (param_6 == 3) goto LAB_980261a4;
  }
  uVar12 = 1;
  if (!bVar1) {
    uVar12 = param_3;
  }
  uVar9 = (int)((ulonglong)uVar15 >> 0x20) + in_stack_00000054 * -2;
  uVar10 = iVar3 + in_stack_00000054 * -2;
  uVar8 = (uint)(byte)(&DAT_98002b29)[param_5 * 2];
  uVar13 = (in_stack_00000054 - LZCOUNT(uVar9 - 1)) + 0x20;
  uVar14 = (in_stack_00000054 - LZCOUNT(uVar10 - 1)) + 0x20;
  if (param_6 == 2) {
    uVar11 = uVar12 + in_stack_00000054 * -2;
    uVar5 = (in_stack_00000054 - LZCOUNT(uVar11 - 1)) + 0x20;
  }
  else {
    uVar11 = 1;
    uVar5 = 0;
    in_stack_00000064 = -(uint)(param_6 != 0) & in_stack_00000064;
  }
  uVar4 = 1 << (uVar13 & 0x3f);
  uVar6 = 1 << (uVar14 & 0x3f);
  if ((((0x10 < uVar4) && (0x10 < uVar6)) ||
      (local_b0 = 1 << (uVar5 & 0x3f), uVar2 = CONCAT44(uVar4,uVar6), param_8 == 0)) &&
     (local_b0 = uVar12, uVar2 = uVar15, in_stack_00000064 != 0)) {
    trapWord(6,uVar8,0);
    uVar2 = CONCAT44((in_stack_00000064 << 3) / uVar8,iVar3);
  }
  local_a8 = (uint)((ulonglong)uVar2 >> 0x20);
  local_ac = (uint)uVar2;
  uStack00000024 = param_3;
  iStack0000004c = param_8;
  FUN_98026028(&local_a8,&local_ac,&local_b0,uVar8,param_5,param_6,param_7);
  uVar5 = local_a8;
  if (in_stack_00000064 == 0) {
    in_stack_00000064 = local_a8 * uVar8 >> 3;
  }
  if ((param_7 != 0) || (bVar1)) {
    if (param_6 == 2) goto LAB_98026364;
    uVar4 = (in_stack_00000064 * local_ac + 0xfff & 0xfffff000) * local_b0;
LAB_9802637c:
    if (bVar1) {
      uVar4 = uVar4 * uStack00000024;
    }
  }
  else {
    if (param_6 == 2) {
LAB_98026364:
      uVar4 = in_stack_00000064 * local_b0 * local_ac + 0xfff & 0xfffff000;
      goto LAB_9802637c;
    }
    if (((param_6 == 1) && (param_4 == 1)) && ((iStack0000004c == 0 && (in_stack_00000054 == 0)))) {
      FUN_98025f08(param_5,&local_a8,local_a4);
      uVar4 = ((local_a4[0] + iVar3) - 1U & ~(local_a4[0] - 1U)) * in_stack_00000064;
      goto LAB_980264a4;
    }
    uVar4 = in_stack_00000064 * local_b0 * local_ac;
  }
  if ((1 < param_4) || (param_4 == 0)) {
    uVar6 = uVar10;
    if (uVar10 <= uVar11) {
      uVar6 = uVar11;
    }
    if ((uVar9 <= uVar6) && (uVar9 = uVar10, uVar10 <= uVar11)) {
      uVar9 = uVar11;
    }
    if (param_4 == 0) {
      param_4 = 0x20 - LZCOUNT(uVar9);
    }
    while ((param_4 = param_4 - 1, param_4 != 0 &&
           ((iStack0000004c == 0 || ((4 < uVar13 && (4 < uVar14))))))) {
      if (uVar13 != 0) {
        uVar13 = uVar13 - 1;
      }
      if (uVar14 != 0) {
        uVar14 = uVar14 - 1;
      }
      if (1 < uVar12) {
        uVar12 = uVar12 >> 1;
      }
      local_b0 = 1 << (uVar13 & 0x3f);
      local_ac = 1 << (uVar14 & 0x3f);
      local_a8 = uVar12;
      iVar3 = FUN_98026028(&local_b0,&local_ac,&local_a8,uVar8,param_5,param_6,param_7);
      iVar7 = iVar3 + iVar7;
    }
    if (bVar1) {
      uVar12 = -(uint)(local_a4[0] != 0) & 3;
      iVar7 = (uVar12 + uStack00000024 & ~uVar12) * iVar7;
    }
  }
LAB_980264a4:
  *in_stack_0000006c = uVar5;
  *in_stack_00000074 = uVar4;
  *in_stack_0000007c = iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980264c8 @ 980264c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980264c8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *in_stack_00000054;
  int *in_stack_0000005c;
  uint local_70;
  uint local_6c;
  uint local_68 [26];
  
  uVar4 = FUN_98044798();
  uVar3 = (uint)(uVar4 >> 0x20);
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  FUN_98025f08(param_7,&local_70,&local_6c);
  uVar2 = 0x20 - LZCOUNT((int)uVar4 + -1);
  uVar1 = 0x20 - LZCOUNT(param_3 + -1);
  local_68[0] = 1 << (uVar2 & 0x3f);
  uVar2 = -(uint)(uVar1 < uVar2) & 1;
  local_68[1] = 1 << (uVar1 & 0x3f);
  if (uVar4 < 0x300000000) {
    local_68[uVar2 + 2] = 0x10 >> (uVar3 & 0x3f);
  }
  else {
    uVar1 = uVar2 * 4 ^ 4;
    uVar2 = *(uint *)((int)local_68 + uVar1) >> (uVar3 - 2 & 0x3f);
    *(uint *)((int)local_68 + uVar1 + 8) = uVar2;
    if (uVar2 < 4) {
      uVar3 = (0x20 - LZCOUNT(param_4 + -1)) - uVar3;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      local_68[4] = uVar3 << 2;
    }
  }
  trapWord(6,local_70,0);
  *param_8 = local_68[2] / local_70;
  *in_stack_00000054 = local_68[3] / local_6c;
  *in_stack_0000005c = local_68[4];
  trapWord(6,local_6c,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026620 @ 98026620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026620(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
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
  
  uVar15 = FUN_98044774();
  puVar2 = (uint *)((ulonglong)uVar15 >> 0x20);
  uVar10 = (uint)uVar15;
  uVar1 = puVar2[8] & 0x3f;
  uVar11 = (uint)(byte)(&DAT_98002b29)[uVar1 * 2];
  uVar3 = FUN_9802f1c8(puVar2);
  if (uVar3 == 4) {
    FUN_98025db8((int)puVar2,(int *)&local_a4,(int *)&local_a0,(int *)local_9c);
    uVar12 = (puVar2[7] >> 0x16 & 0x1ff) * uVar11 * 4;
    local_a8 = local_a4;
    local_b0 = local_a0;
    local_ac = local_9c[0];
    FUN_98026028(&local_a8,&local_b0,&local_ac,uVar11,uVar1,puVar2[0xc] >> 9 & 3,puVar2[7] >> 0x1f);
    uVar8 = local_9c[0];
    uVar14 = local_a4;
    uVar5 = local_a0;
  }
  else {
    iVar7 = -((int)puVar2[10] >> 0x1f);
    iVar4 = ((int)puVar2[10] >> 0x1f) * -2;
    FUN_98025db8((int)puVar2,(int *)&local_a4,(int *)&local_a0,(int *)local_9c);
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
      FUN_98026028(&local_a8,&local_b0,&local_ac,uVar11,uVar1,uVar12,iVar4);
      if (iVar4 == 0) {
        if ((puVar2[8] & 0x400) == 0) {
          if ((((uVar13 & 0x800) == 0) && (uVar12 == 1)) &&
             (((puVar2[0xb] & 0x3c0) == 0 && (iVar7 == 0)))) {
            FUN_98025f08(puVar2[8] & 0x3f,&local_a0,local_9c);
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
      FUN_98026028(&local_a8,&local_b0,&local_ac,uVar11,uVar1,uVar12,puVar2[7] >> 0x1f);
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


/* ==== FUN_980269f0 @ 980269f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980269f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026af0 @ 98026af0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026af0(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,uint *param_5,
                 uint *param_6,int *param_7,uint *param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  int iStack0000001c;
  uint *puStack0000002c;
  uint *puStack00000034;
  uint *puStack0000003c;
  int *piStack00000044;
  uint *puStack0000004c;
  uint *in_stack_00000054;
  uint *in_stack_0000005c;
  int *in_stack_00000064;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0 [40];
  
  uVar19 = FUN_98044770();
  puVar4 = (uint *)((ulonglong)uVar19 >> 0x20);
  iStack0000001c = (int)uVar19;
  uVar6 = puVar4[7];
  iVar3 = (int)puVar4[10] >> 0x1f;
  iVar9 = -iVar3;
  uVar10 = (uint)(byte)(&DAT_98002b29)[(puVar4[8] & 0x3f) * 2];
  local_a4 = 0;
  uVar13 = puVar4[0xc] >> 9 & 3;
  iVar2 = iVar3 * -2;
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  puStack0000003c = param_6;
  piStack00000044 = param_7;
  puStack0000004c = param_8;
  FUN_9802f1c8(puVar4);
  FUN_98025db8((int)puVar4,(int *)&local_ac,(int *)&local_a8,(int *)&local_b4);
  uVar5 = local_a8;
  uVar8 = local_ac + iVar3 * 2;
  uVar7 = local_a8 + iVar3 * 2;
  uVar14 = 1 << ((iVar9 - LZCOUNT(uVar8 - 1)) + 0x20U & 0x3f);
  uVar12 = 1 << ((iVar9 - LZCOUNT(uVar7 - 1)) + 0x20U & 0x3f);
  if (uVar13 == 2) {
    uVar11 = 1 << ((iVar9 - LZCOUNT(local_b4 + iVar3 * 2 + -1)) + 0x20U & 0x3f);
  }
  else {
    uVar11 = 1;
  }
  if (((0x10 < uVar14) && (0x10 < uVar12)) || (bVar1 = true, (puVar4[0xc] & 0x800) == 0)) {
    bVar1 = false;
  }
  if ((param_3 == 0) || (bVar1)) {
    local_b8 = puVar4[8];
  }
  else {
    local_b8 = puVar4[0xc];
  }
  local_b8 = local_b8 & 0xfffff000;
  if ((param_3 != 0) || (bVar1)) {
    uVar8 = uVar8 >> (param_3 & 0x3f);
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    uVar7 = uVar7 >> (param_3 & 0x3f);
    local_ac = uVar8 + iVar2;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    local_a8 = uVar7 + iVar2;
    if (uVar13 == 2) {
      local_b4 = local_b4 + iVar3 * 2 >> (param_3 & 0x3f);
      if (local_b4 < 2) {
        local_b4 = 1;
      }
      local_b4 = local_b4 + iVar2;
    }
    else {
      local_b4 = 1;
    }
    uVar5 = FUN_9802f1c8(puVar4);
    if ((uVar5 == 0x12) || (uVar5 == 0x13)) {
      iVar9 = 1 << (puVar4[8] >> 9 & 2);
      uVar5 = (puVar4[9] >> 0x1a) + iVar9 & ~(iVar9 - 1U);
    }
    else {
      uVar5 = 1;
    }
    iVar9 = -LZCOUNT(uVar14);
    uVar6 = iVar9 + 0x1f;
    uVar7 = -LZCOUNT(uVar12) + 0x1f;
    uVar8 = -LZCOUNT(uVar11) + 0x1f;
    if (bVar1) {
      uVar6 = iVar9 + 0x20;
      uVar7 = -LZCOUNT(uVar12) + 0x20;
      uVar8 = -LZCOUNT(uVar11) + 0x20;
    }
    else {
      param_3 = param_3 - 1;
    }
    local_c0 = uVar11;
    if (-1 < (int)param_3) {
      uVar14 = puVar4[7];
      uVar13 = puVar4[8];
      uVar11 = puVar4[0xc];
      do {
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
        }
        if (uVar7 != 0) {
          uVar7 = uVar7 - 1;
        }
        if (uVar8 != 0) {
          uVar8 = uVar8 - 1;
        }
        uVar18 = 1 << (uVar6 & 0x3f);
        uVar17 = 1 << (uVar7 & 0x3f);
        uVar16 = 1 << (uVar8 & 0x3f);
        uVar15 = uVar11 >> 9 & 3;
        local_c0 = uVar16;
        local_bc = uVar17;
        local_b0 = uVar18;
        FUN_98026028(&local_b0,&local_bc,&local_c0,uVar10,uVar13 & 0x3f,uVar15,uVar14 >> 0x1f);
        uVar12 = local_bc;
        local_a0[0] = local_b0 * uVar10 >> 3;
        if (((uVar18 < 0x11) || (uVar17 < 0x11)) && ((uVar11 & 0x800) != 0)) {
          local_a4 = FUN_980264c8(param_3,uVar18,uVar17,uVar16,local_a0[0],local_a0[0] * local_bc,
                                  uVar13 & 0x3f,&local_b0);
          local_b8 = local_b8 + local_a4;
          param_6 = puStack0000003c;
          param_5 = puStack00000034;
          break;
        }
        if (0 < (int)param_3) {
          if (uVar15 == 2) {
            uVar15 = local_a0[0] * local_c0 * local_bc + 0xfff & 0xfffff000;
          }
          else {
            uVar15 = (local_a0[0] * local_bc + 0xfff & 0xfffff000) * local_c0;
          }
          local_b8 = uVar15 * uVar5 + local_b8;
        }
        param_3 = param_3 - 1;
        param_6 = puStack0000003c;
        param_5 = puStack00000034;
      } while (-1 < (int)param_3);
    }
  }
  else {
    local_b0 = local_ac;
    local_bc = local_a8;
    uVar14 = puVar4[0xc];
    uVar11 = puVar4[8];
    local_c0 = local_b4;
    uVar8 = uVar14 >> 9 & 3;
    uVar7 = uVar11 & 0x3f;
    FUN_98026028(&local_b0,&local_bc,&local_c0,uVar10,uVar7,uVar8,uVar6 >> 0x1f);
    uVar6 = puVar4[7];
    uVar12 = local_bc;
    if (((((uVar6 & 0x80000000) == 0) && ((uVar11 & 0x400) == 0)) &&
        (((uVar14 & 0x800) == 0 && ((uVar8 == 1 && ((puVar4[0xb] & 0x3c0) == 0)))))) &&
       ((puVar4[10] & 0x80000000) == 0)) {
      FUN_98025f08(uVar7,local_a0,&local_bc);
      uVar12 = (local_bc + uVar5) - 1 & ~(local_bc - 1);
    }
    if (uVar13 == 0) {
      local_a0[0] = local_b0 * uVar10 >> 3;
    }
    else {
      local_a0[0] = (uVar6 >> 0x16 & 0x1ff) * uVar10 * 4;
    }
  }
  uVar12 = local_a0[0] * uVar12;
  uVar5 = uVar12 + 0xfff & 0xfffff000;
  *in_stack_00000064 = uVar5 * iStack0000001c + local_b8;
  *puStack0000002c = local_a0[0];
  if ((puVar4[0xc] & 0x600) == 0x400) {
    *param_5 = uVar12;
    local_c0 = uVar12 * local_c0 + 0xfff & 0xfffff000;
  }
  else {
    local_c0 = uVar5 * local_c0;
    *param_5 = uVar5;
  }
  *param_6 = local_c0;
  *puStack0000004c = local_ac;
  *in_stack_00000054 = local_a8;
  *in_stack_0000005c = local_b4;
  *piStack00000044 = local_a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98026fd8 @ 98026fd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98026fd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,int *param_6,uint *param_7,uint *param_8)

{
  int iVar1;
  int *in_stack_00000054;
  uint uStack_50;
  int aiStack_4c [2];
  uint auStack_44 [17];
  
  iVar1 = FUN_9804479c();
  FUN_98026af0(iVar1,param_3,param_4,param_7,param_8,&uStack_50,in_stack_00000054,auStack_44);
  FUN_98025f08(*(uint *)(iVar1 + 0x20) & 0x3f,auStack_44,aiStack_4c);
  *param_7 = *param_7 * aiStack_4c[0];
  iVar1 = FUN_980303a8();
  *param_6 = *in_stack_00000054 + iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980270b0 @ 980270b0 ==== */

void FUN_980270b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98027140 @ 98027140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027140(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int in_stack_00000054;
  uint in_stack_0000005c;
  uint *in_stack_0000006c;
  undefined4 *in_stack_00000074;
  uint *in_stack_0000007c;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  
  uVar8 = FUN_98044784();
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  iVar6 = in_stack_00000054 * 2 + 1;
  uVar4 = param_4;
  if (iVar1 == 3) {
LAB_980271f0:
    uVar7 = 1;
LAB_980271fc:
    if (iVar1 != 0x11) {
LAB_98027204:
      uVar4 = 1;
    }
  }
  else {
    if (iVar1 != 0x11) {
      if (iVar1 == 0x12) {
        uVar7 = 3;
      }
      else {
        if (iVar1 == 0x13) goto LAB_980271f0;
        uVar7 = local_78;
        if (iVar1 != 0x14) goto LAB_980271fc;
        uVar7 = 0;
        param_8 = 0;
      }
      goto LAB_98027204;
    }
    uVar7 = 2;
  }
  if (param_5 == 0) {
    param_5 = FUN_98025fa0(iVar2,param_3,uVar4,in_stack_00000054);
  }
  if (param_8 == 2) {
    param_8 = -(uint)(1 < param_5) & 1;
  }
  FUN_98026148(iVar2,param_3,param_4,param_5,param_7 & 0x3f,uVar7,param_7 >> 8 & 1,param_8);
  uVar4 = 0x100003;
  if ((param_6 & 4) != 0) {
    uVar4 = 0x300003;
  }
  if ((param_6 & 0x200) != 0) {
    uVar4 = uVar4 | 0x400000;
  }
  *in_stack_0000006c = uVar4;
  uVar5 = in_stack_0000006c[0xc];
  in_stack_0000006c[1] = 1;
  uVar4 = (uVar7 & 3) << 9;
  in_stack_0000006c[5] = 0xffff0000;
  in_stack_0000006c[6] = 0xffff0000;
  in_stack_0000006c[2] = 0;
  in_stack_0000006c[0xc] = uVar4 | uVar5 & 0xfffff9ff;
  if (uVar7 == 0) {
    uVar7 = in_stack_0000006c[9] & 0xff000000 | iVar2 - iVar6 & 0xffffffU;
LAB_9802735c:
    in_stack_0000006c[9] = uVar7;
  }
  else {
    if (uVar7 == 1) {
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xffffe000 | iVar2 - iVar6 & 0x1fffU;
      uVar3 = (param_3 - iVar6) * 0x2000 & 0x3ffe000U | (param_4 - 1) * 0x4000000;
      uVar7 = in_stack_0000006c[9] & 0x1fff;
    }
    else {
      if (2 < uVar7) {
        if (uVar7 != 3) goto LAB_98027360;
        uVar7 = (param_4 - 1) * 0x4000000 |
                (param_3 - iVar6) * 0x2000 & 0x3ffe000U | iVar2 - iVar6 & 0x1fffU;
        goto LAB_9802735c;
      }
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xfffff800 | iVar2 - iVar6 & 0x7ffU;
      uVar3 = (param_3 - iVar6) * 0x800 & 0x3ff800U | (param_4 - iVar6) * 0x400000;
      uVar7 = iVar2 - iVar6 & 0x7ff;
    }
    in_stack_0000006c[9] = uVar3 | uVar7;
  }
LAB_98027360:
  in_stack_0000006c[7] =
       (((((int)param_7 >> 0xf & 3U) << 2 | (int)param_7 >> 0xd & 3U) << 2 |
        (int)param_7 >> 0xb & 3U) << 2 | (int)param_7 >> 9 & 3U) << 2 |
       ((((int)param_7 >> 8) << 0xe | local_80 & 0x3fff) & 0x7fe0) << 0x11 |
       in_stack_0000006c[7] & 0x3ffc00 | 2;
  in_stack_0000006c[0xb] = (param_5 - 1) * 0x40 & 0x3c0 | in_stack_0000006c[0xb] & 0xfffffc3f;
  in_stack_0000006c[8] =
       (uint)(iVar1 == 0x13) << 10 |
       ((int)param_7 >> 6 & 3U) << 6 | in_stack_0000006c[8] & 0xfffffb00 | param_7 & 0x3f;
  in_stack_0000006c[0xc] = (param_8 & 1) << 0xb | uVar4 | uVar5 & 0xfffff1ff;
  in_stack_0000006c[10] =
       (in_stack_0000005c & 0x3f | in_stack_00000054 << 0x12) << 0xd |
       (int)param_7 >> 0x11 & 0x1fffU | in_stack_0000006c[10] & 0x7ff80000;
  *in_stack_00000074 = local_7c;
  *in_stack_0000007c = local_78;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98027438 @ 98027438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027438(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5,
                 undefined4 *param_6,uint *param_7,uint *param_8)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar15 = FUN_98044788();
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
  uVar4 = FUN_9800f1d0(iVar3,iVar5,param_3,param_4);
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
      uVar13 = -(uint)(DAT_98077a0c != 0);
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
  uVar1 = *(ushort *)(&UNK_98002b28 + uVar14 * 2) >> 8;
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
  param_6[0xb] = uVar4 * 0x1400;
  *param_7 = uVar4;
  *param_8 = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980276a8 @ 980276a8 ==== */

int FUN_980276a8(int param_1)

{
  return (*(uint *)(param_1 + 0x2c) >> 6 & 0xf) + 1;
}


/* ==== thunk_FUN_980269f0 @ 980276b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_980269f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980276c0 @ 980276c0 ==== */

void FUN_980276c0(void)

{
  FUN_980270b0();
  return;
}


/* ==== FUN_980276e0 @ 980276e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980276e0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_5c;
  
  uVar4 = FUN_98044790();
  uVar3 = 0;
  uVar1 = FUN_98048d70();
  if (uVar1 != 0) {
    FUN_98027140(param_8,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,param_3,param_4,param_5,param_6,
                 2);
    uVar2 = FUN_98048d70();
    if (uVar2 == 0) {
      uVar3 = 0x24800000;
      uVar2 = uVar1;
    }
    else {
      if ((local_5c == 0) || (uVar3 = FUN_98048d70(), uVar3 != 0)) {
        *(uint *)(uVar1 + 0x20) = uVar2 & 0xfffff000 | *(uint *)(uVar1 + 0x20) & 0xfff;
        *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xfff | uVar3 & 0xfffff000;
        halt_baddata();
      }
      FUN_98048ea8(uVar1,0x24800000);
      uVar3 = 0xb1800000;
    }
    FUN_98048ea8(uVar2,uVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98027800 @ 98027800 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027800(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_40;
  uint auStack_3c [15];
  
  uVar5 = FUN_980447a0();
  puVar3 = (uint *)FUN_98048d70();
  if (puVar3 != (uint *)0x0) {
    FUN_98027438((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,param_3,param_4,param_5,puVar3,&local_40
                 ,auStack_3c);
    uVar2 = local_40;
    *puVar3 = *puVar3 | 0x100000;
    if (param_5 == (uint *)0x0) {
      if (((puVar3[10] & 0x3f) == 0x16) || (bVar1 = false, (puVar3[10] & 0x3f) == 0x17)) {
        bVar1 = true;
      }
      iVar4 = FUN_980375a8();
      if (iVar4 != 0) {
        if (local_40 + uVar2 < 0x801) {
          *puVar3 = *puVar3 | 0x80000000;
          if (!bVar1) {
            puVar3[7] = puVar3[7] & 0xfffff000 | local_40 & 0xfff;
            halt_baddata();
          }
          puVar3[7] = puVar3[7] & 0xfffff000 | local_40 & 0xfff;
          if (DAT_98077a0c != 0) {
            halt_baddata();
          }
          DAT_98077a0c = 1;
          puVar3[8] = puVar3[8] & 0x1ffff;
          halt_baddata();
        }
        FUN_98037558();
      }
      FUN_98048ea8((int)puVar3,0x24800000);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98027938 @ 98027938 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027938(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar13 = FUN_98044788();
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
          FUN_98034ac0();
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


/* ==== FUN_98027ac8 @ 98027ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98027ac8(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined2 uVar7;
  uint uVar6;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uStack_38;
  
  uVar11 = FUN_980447a8();
  uVar6 = (uint)(uVar11 >> 0x20);
  iVar3 = (int)uVar11;
  uVar5 = uVar6 & 0x400e;
  iVar8 = 0;
  uVar9 = 0;
  puVar10 = (undefined4 *)(iVar3 + 0x34);
  if (uVar5 == 2) {
    uVar9 = 0xc;
    *(undefined4 *)(iVar3 + 0x38) = 0x2a23b9;
LAB_98027e54:
    *(undefined2 *)(iVar3 + 0x36) = 0;
    iVar8 = 1;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
LAB_98027e60:
    *(undefined2 *)puVar10 = 0;
LAB_98027e64:
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 10) = 0;
  }
  else {
    if (uVar5 == 6) {
      *(undefined2 *)puVar10 = 0;
      *(undefined2 *)(iVar3 + 0x36) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x2a23b9;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      puVar10 = (undefined4 *)(iVar3 + 0x40);
      if ((uVar11 & 0x100000000000) == 0) {
        *(undefined2 *)puVar10 = 0;
        *(undefined1 *)(iVar3 + 0x48) = 0;
        *(undefined1 *)(iVar3 + 0x4a) = 0;
        *(undefined2 *)(iVar3 + 0x42) = 0xc;
        uVar9 = 0x10;
        if ((uVar11 & 0x800000000000) == 0) {
          *(undefined4 *)(iVar3 + 0x44) = 0x2c83a4;
          iVar8 = 2;
          *(undefined1 *)(iVar3 + 0x49) = 1;
        }
        else {
          iVar8 = 2;
          *(undefined4 *)(iVar3 + 0x44) = 0x182886;
          *(undefined1 *)(iVar3 + 0x49) = 2;
        }
        goto LAB_98027e6c;
      }
      iVar8 = 2;
      *(undefined1 *)(iVar3 + 0x49) = 2;
      *(undefined4 *)(iVar3 + 0x44) = 0x1a2286;
      uVar9 = 0x10;
      *(undefined2 *)(iVar3 + 0x42) = 0xc;
      goto LAB_98027e60;
    }
    if (uVar5 == 8) {
      *(undefined2 *)puVar10 = 0;
      *(undefined2 *)(iVar3 + 0x36) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x2a23b9;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      puVar10 = (undefined4 *)(iVar3 + 0x40);
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)(iVar3 + 0x48) = 0;
      *(undefined1 *)(iVar3 + 0x49) = 1;
      *(undefined1 *)(iVar3 + 0x4a) = 0;
      if ((uVar11 & 0x100000000000) == 0) {
        if ((uVar11 & 0x800000000000) == 0) {
          *(undefined2 *)(iVar3 + 0x42) = 0xc;
          iVar8 = 2;
          *(undefined4 *)(iVar3 + 0x44) = 0x2c23a5;
          uVar9 = 0x14;
          goto LAB_98027e6c;
        }
        *(undefined4 *)(iVar3 + 0x44) = 0x182886;
      }
      else {
        *(undefined4 *)(iVar3 + 0x44) = 0x2c83a4;
      }
      uVar7 = 0x10;
      *(undefined2 *)(iVar3 + 0x42) = 0xc;
      uVar9 = 0x14;
LAB_98027c38:
      puVar10 = (undefined4 *)(iVar3 + 0x4c);
      *(undefined2 *)puVar10 = 0;
      iVar8 = 3;
      *(undefined2 *)(iVar3 + 0x4e) = uVar7;
      *(undefined4 *)(iVar3 + 0x50) = 0x1a2286;
      *(undefined1 *)(iVar3 + 0x55) = 2;
      goto LAB_98027e64;
    }
    if (uVar5 == 10) {
      *(undefined2 *)puVar10 = 0;
      *(undefined2 *)(iVar3 + 0x36) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x2a23b9;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      puVar10 = (undefined4 *)(iVar3 + 0x40);
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)(iVar3 + 0x48) = 0;
      *(undefined1 *)(iVar3 + 0x49) = 1;
      *(undefined1 *)(iVar3 + 0x4a) = 0;
      if ((uVar11 & 0x100000000000) != 0) {
        *(undefined2 *)(iVar3 + 0x42) = 0xc;
        uVar7 = 0x14;
        *(undefined4 *)(iVar3 + 0x44) = 0x2c23a5;
        uVar9 = 0x18;
        goto LAB_98027c38;
      }
      if ((uVar11 & 0x800000000000) == 0) {
        *(undefined4 *)(iVar3 + 0x44) = 0x2a23b9;
        iVar8 = 2;
        *(undefined2 *)(iVar3 + 0x42) = 0xc;
        uVar9 = 0x18;
        goto LAB_98027e6c;
      }
      *(undefined2 *)(iVar3 + 0x42) = 0xc;
      uVar7 = 0x14;
      *(undefined4 *)(iVar3 + 0x44) = 0x2c23a5;
      uVar9 = 0x18;
LAB_98027c78:
      puVar10 = (undefined4 *)(iVar3 + 0x4c);
      *(undefined2 *)puVar10 = 0;
      iVar8 = 3;
      *(undefined2 *)(iVar3 + 0x4e) = uVar7;
      *(undefined4 *)(iVar3 + 0x50) = 0x182886;
      *(undefined1 *)(iVar3 + 0x55) = 2;
      goto LAB_98027e64;
    }
    if (uVar5 == 0xc) {
      *(undefined2 *)puVar10 = 0;
      *(undefined2 *)(iVar3 + 0x36) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x2a23b9;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      puVar10 = (undefined4 *)(iVar3 + 0x40);
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)(iVar3 + 0x48) = 0;
      *(undefined1 *)(iVar3 + 0x49) = 1;
      *(undefined1 *)(iVar3 + 0x4a) = 0;
      if ((uVar11 & 0x100000000000) != 0) {
        *(undefined4 *)(iVar3 + 0x44) = 0x2a23b9;
        uVar7 = 0x18;
        *(undefined2 *)(iVar3 + 0x42) = 0xc;
        uVar9 = 0x1c;
        goto LAB_98027c38;
      }
      if ((uVar11 & 0x800000000000) != 0) {
        *(undefined4 *)(iVar3 + 0x44) = 0x2a23b9;
        uVar7 = 0x18;
        *(undefined2 *)(iVar3 + 0x42) = 0xc;
        uVar9 = 0x1c;
        goto LAB_98027c78;
      }
      *(undefined2 *)(iVar3 + 0x42) = 0xc;
      iVar8 = 2;
      *(undefined4 *)(iVar3 + 0x44) = 0x1a23a6;
      uVar9 = 0x1c;
    }
    else {
      if (uVar5 != 0xe) {
        if (uVar5 != 0x4002) goto LAB_98027e70;
        uVar9 = 0x10;
        *(undefined4 *)(iVar3 + 0x38) = 0x1a23a6;
        goto LAB_98027e54;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined2 *)(iVar3 + 0x36) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x2a23b9;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      *(undefined2 *)(iVar3 + 0x40) = 0;
      *(undefined2 *)(iVar3 + 0x42) = 0xc;
      *(undefined4 *)(iVar3 + 0x44) = 0x1a23a6;
      *(undefined1 *)(iVar3 + 0x48) = 0;
      *(undefined1 *)(iVar3 + 0x49) = 1;
      *(undefined1 *)(iVar3 + 0x4a) = 0;
      puVar10 = (undefined4 *)(iVar3 + 0x4c);
      *(undefined1 *)(iVar3 + 0x55) = 2;
      if ((uVar11 & 0x100000000000) != 0) {
        *(undefined2 *)(iVar3 + 0x4e) = 0x1c;
        iVar8 = 3;
        *(undefined4 *)(iVar3 + 0x50) = 0x1a2286;
        uVar9 = 0x20;
        goto LAB_98027e60;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)(iVar3 + 0x54) = 0;
      iVar8 = 3;
      *(undefined1 *)(iVar3 + 0x56) = 0;
      *(undefined2 *)(iVar3 + 0x4e) = 0x1c;
      uVar9 = 0x20;
      if ((uVar11 & 0x800000000000) == 0) {
        *(undefined4 *)(iVar3 + 0x50) = 0x2c83a4;
      }
      else {
        *(undefined4 *)(iVar3 + 0x50) = 0x182886;
      }
    }
  }
LAB_98027e6c:
  puVar10 = puVar10 + 3;
LAB_98027e70:
  if ((uVar11 & 0x1000000000) != 0) {
    *(short *)((int)puVar10 + 2) = (short)uVar9;
    *(undefined2 *)puVar10 = 0;
    uVar9 = uVar9 + 0xc;
    puVar10[1] = 0x2a23b9;
    *(undefined1 *)((int)puVar10 + 9) = 3;
    iVar8 = iVar8 + 1;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 10) = 0;
    puVar10 = puVar10 + 3;
  }
  if ((uVar11 & 0x2000000000) != 0) {
    *(short *)((int)puVar10 + 2) = (short)uVar9;
    *(undefined2 *)puVar10 = 0;
    uVar9 = uVar9 + 4;
    puVar10[1] = 0x2c83a4;
    *(undefined1 *)((int)puVar10 + 9) = 4;
    iVar8 = iVar8 + 1;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 10) = 0;
    puVar10 = puVar10 + 3;
  }
  if ((uVar11 & 0x4000000000) != 0) {
    *(short *)((int)puVar10 + 2) = (short)uVar9;
    *(undefined2 *)puVar10 = 0;
    iVar8 = iVar8 + 1;
    uVar9 = uVar9 + 4;
    puVar10[1] = 0x182886;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 9) = 10;
    *(undefined1 *)((int)puVar10 + 10) = 0;
    puVar10 = puVar10 + 3;
  }
  if ((uVar11 & 0x8000000000) != 0) {
    *(short *)((int)puVar10 + 2) = (short)uVar9;
    *(undefined2 *)puVar10 = 0;
    iVar8 = iVar8 + 1;
    uVar9 = uVar9 + 4;
    puVar10[1] = 0x182886;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 9) = 10;
    *(undefined1 *)((int)puVar10 + 10) = 1;
    puVar10 = puVar10 + 3;
  }
  uVar5 = uVar6 >> 8 & 0xf;
  uVar6 = uVar6 >> 0x10;
  if (uVar5 != 0) {
    iVar8 = uVar5 + iVar8;
    cVar4 = '\0';
    do {
      uVar2 = uVar6 & 3;
      uVar6 = uVar6 >> 2;
      bVar1 = (&UNK_98002c2c)[uVar2];
      *(short *)((int)puVar10 + 2) = (short)uVar9;
      *(undefined2 *)puVar10 = 0;
      uVar9 = uVar9 + (bVar1 & 0xfffffffc) & 0xffff;
      puVar10[1] = *(undefined4 *)(&UNK_98002c2c + (bVar1 & 0xfffffffc));
      *(undefined1 *)(puVar10 + 2) = 0;
      *(undefined1 *)((int)puVar10 + 9) = 5;
      *(char *)((int)puVar10 + 10) = cVar4;
      puVar10 = puVar10 + 3;
      uVar5 = uVar5 - 1;
      cVar4 = cVar4 + '\x01';
    } while (uVar5 != 0);
  }
  uStack_38 = (uint)(uStack_38._1_3_ & 0xff);
  puVar10[1] = 0xffffffff;
  puVar10[2] = uStack_38;
  *puVar10 = 0xff0000;
  *(int *)(iVar3 + 0x18) = iVar8;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028000 @ 98028000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028000(void)

{
  undefined4 *extraout_r4;
  
  FUN_9804477c();
  *extraout_r4 = 0xc0003b00;
  extraout_r4[1] = 0x300;
  extraout_r4[2] = 0xc0192b00;
  extraout_r4[3] = 0;
  extraout_r4[4] = 0x18;
  FUN_98044240();
  extraout_r4[0x1d] = 0xc00a2b00;
  extraout_r4[0x1e] = 1;
  extraout_r4[0x1f] = 9;
  FUN_98044240();
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


/* ==== FUN_980281d8 @ 980281d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980281d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980282f0 @ 980282f0 ==== */

int FUN_980282f0(undefined4 param_1,uint param_2,undefined4 *param_3)

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


/* ==== FUN_98028350 @ 98028350 ==== */

/* WARNING: Removing unreachable block (ram,0x98048ebc) */

void FUN_98028350(int param_1)

{
  if (*(int *)(param_1 + 0x3768) != 0) {
    FUN_980467f0();
    return;
  }
  return;
}


/* ==== FUN_98028360 @ 98028360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028360(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

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


/* ==== FUN_98028438 @ 98028438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028438(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

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


/* ==== FUN_98028510 @ 98028510 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028510(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028548 @ 98028548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028548(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  puVar2 = *(uint **)(iVar1 + 0x330c);
  if (puVar2 != (uint *)0x0) {
    if (*(uint *)(iVar1 + 0x2b1c) == 0) {
      if ((*(uint *)(iVar1 + 0x2b20) & *puVar2) != 0) {
        if (*(uint *)(iVar1 + 0x366c) <= *(uint *)(iVar1 + 0x3668)) {
                    /* WARNING: Subroutine does not return */
          FUN_98034ac0();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      puVar2[2] = *(uint *)(iVar1 + 0x2b1c);
    }
  }
  *(int *)(iVar1 + 0x330c) = (int)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028708 @ 98028708 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028708(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028750 @ 98028750 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x98028800) */
/* WARNING: Removing unreachable block (ram,0x98028808) */
/* WARNING: Removing unreachable block (ram,0x98028814) */

void FUN_98028750(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = *(uint **)(iVar1 + 0x3310);
  if (puVar2 != (uint *)0x0) {
    if (*(uint *)(iVar1 + 0x2b1c) == 0) {
      if ((*(uint *)(iVar1 + 0x2b20) & *puVar2) != 0) {
        if (*(uint *)(iVar1 + 0x3668) < *(uint *)(iVar1 + 0x366c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Subroutine does not return */
        FUN_98034ac0();
      }
    }
    else {
      puVar2[2] = *(uint *)(iVar1 + 0x2b1c);
    }
  }
  *(undefined4 *)(iVar1 + 0x3310) = 0;
  *(byte *)(iVar1 + 0x2b3e) = *(byte *)(iVar1 + 0x2b3e) & 0x7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028920 @ 98028920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028968 @ 98028968 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028968(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2fd0) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028980 @ 98028980 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028980(void)

{
  FUN_980447a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028a70 @ 98028a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028a70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028af0 @ 98028af0 ==== */

void FUN_98028af0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98028bd8 @ 98028bd8 ==== */

void FUN_98028bd8(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  *param_2 = (uint)((*(uint *)(param_1 + 0x2b28) & 0x7f000) == 0);
  *param_3 = *(uint *)(param_1 + 0x2b28) >> 0xc & 0x7f;
  *param_4 = *(uint *)(param_1 + 0x2b28) >> 4 & 0x7f;
  return;
}


/* ==== FUN_98028c08 @ 98028c08 ==== */

void FUN_98028c08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98028d38 @ 98028d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028d38(void)

{
  int iVar1;
  
  FUN_980447a8();
  if ((pcRam98077a10 != (code *)0x0) && (iVar1 = (*pcRam98077a10)(), iVar1 == 0)) {
    halt_baddata();
  }
  iVar1 = FUN_98048d70();
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028e28 @ 98028e28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028e28(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_98044798();
  puVar1 = (uint *)((ulonglong)uVar11 >> 0x20);
  FUN_980441a0(puVar1,0,0x368);
  puVar1[8] = (uint)uVar11;
  *puVar1 = 6;
  puVar1[1] = 1;
  puVar1[5] = 0xffff0000;
  iVar5 = ((puVar1[0xda] & 0x20) == 0 ^ 1) + 1;
  if (iVar5 != 0) {
    puVar8 = puVar1 + 10;
    puVar9 = puVar1 + 0xe0;
    do {
      uVar6 = *puVar9;
      uVar3 = puVar1[8];
      iVar2 = *(int *)((int)puVar1 + uVar6 + 0x368);
      iVar7 = *(int *)((int)puVar1 + uVar6 + 900);
      puVar4 = (uint *)((int)puVar1 +
                       (*(int *)((int)puVar1 + uVar6 + 0x380) + 9) * 4 + uVar6 + 0x368);
      if (iVar7 != 0) {
        puVar10 = puVar8 + 7;
        do {
          if (puVar10 != (uint *)((*puVar4 & 0xfff) * 0xc + uVar3 + iVar2)) {
            FUN_98044240();
          }
          iVar7 = iVar7 + -1;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 3;
        } while (iVar7 != 0);
      }
      iVar5 = iVar5 + -1;
      *puVar8 = 0xffffffff;
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 0x68;
    } while (iVar5 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98028f20 @ 98028f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98028f20(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = FUN_980447a4();
  if (((DAT_98077a14 == (code *)0x0) || (iVar2 = (*DAT_98077a14)(), iVar2 != 0)) &&
     (puVar3 = (uint *)FUN_98048d70(), puVar3 != (uint *)0x0)) {
    uVar4 = *(uint *)(iVar1 + 4);
    FUN_980441a0(puVar3,0,0x368);
    FUN_98048fd8(puVar3 + 0xda,iVar1,uVar4);
    iVar1 = FUN_98048d70();
    if (iVar1 == 0) {
      FUN_98048ea8((int)puVar3,0x24800000);
    }
    else {
      FUN_98044240();
      FUN_98028e28();
      *puVar3 = *puVar3 | 0x100000;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029010 @ 98029010 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029010(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029060 @ 98029060 ==== */

uint FUN_98029060(int param_1)

{
  return (param_1 + 1U) % 10;
}


/* ==== FUN_98029078 @ 98029078 ==== */

undefined4 FUN_98029078(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -0x67f90000;
  uVar1 = FUN_98029060(DAT_98077a20);
  *(uint *)(iVar2 + 0x7a20) = uVar1;
  return DAT_98077a24;
}


/* ==== FUN_980290b0 @ 980290b0 ==== */

void FUN_980290b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98029128 @ 98029128 ==== */

void FUN_98029128(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98029408 @ 98029408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980294b0 @ 980294b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980294b0(void)

{
  FUN_9804478c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029b30 @ 98029b30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029b30(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  uVar5 = (uint)uVar6;
  FUN_9803aa30();
  FUN_9802bcc8();
  if ((uVar5 == 0) && (*(int *)(iVar1 + 0x6008) == 0)) {
    uVar2 = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar2 + 4) = 0x579;
    *(undefined4 *)(uVar2 + 8) = 1;
    *(undefined4 *)(uVar2 + 0xc) = 0xc0043c00;
    *(undefined4 *)(uVar2 + 0x10) = 0x13;
    uVar3 = *(int *)(iVar1 + 0x2b14) + 4;
    *(uint *)(uVar2 + 0x14) = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) | 2;
    *(undefined4 *)(uVar2 + 0x18) = 1;
    *(undefined4 *)(uVar2 + 0x1c) = 0xffffffff;
    *(undefined4 *)(uVar2 + 0x20) = 0x100;
    *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x20);
  }
  iVar4 = *(int *)(iVar1 + 14000);
  if ((iVar4 == 0) || (iVar4 == 1)) {
    uVar2 = 1;
  }
  else if (iVar4 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = -(uint)(iVar4 == 4) & 3;
  }
  if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  uVar2 = FUN_980318e8(iVar1,*(uint *)(iVar1 + 0x30),0,0x98028458,
                       *(uint *)(iVar1 + 0x2ffc) >> 0x17 & 0x7f | uVar2 << 8 | uVar5);
  *(uint *)(iVar1 + 0x30) = uVar2;
  if ((uVar5 == 0) && (*(int *)(iVar1 + 0x6008) == 0)) {
    if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar2 + 4) = 0xc0043c00;
    *(undefined4 *)(uVar2 + 8) = 0x13;
    uVar5 = *(int *)(iVar1 + 0x2b14) + 4;
    *(uint *)(uVar2 + 0xc) = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) | 2;
    *(undefined4 *)(uVar2 + 0x10) = 0;
    *(undefined4 *)(uVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)(uVar2 + 0x18) = 0x100;
    *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x18);
  }
  FUN_9803aa30();
  *(byte *)(iVar1 + 0x2b3d) = *(byte *)(iVar1 + 0x2b3d) | 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029d10 @ 98029d10 ==== */

void FUN_98029d10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98029dc8 @ 98029dc8 ==== */

void FUN_98029dc8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                 uint param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_98044770();
  iVar1 = (int)(uVar5 >> 0x20);
  iVar4 = ((param_3 >> 0x14) + 0x200 & 0x1000) + (param_3 & 0x1fffffff);
  if (((*(uint *)(iVar1 + 0x5f48) & 4) != 0) || (*(int *)(iVar1 + 0x6008) != 0)) {
    FUN_98029b30();
  }
  if ((uVar5 & 4) != 0) {
    uVar2 = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar2 + 4) = 0x1973;
    *(undefined4 *)(uVar2 + 8) = 0x10000;
    *(undefined4 *)(uVar2 + 0xc) = 0x1964;
    *(undefined4 *)(uVar2 + 0x10) = 1;
    *(undefined4 *)(uVar2 + 0x14) = 0x1973;
    *(undefined4 *)(uVar2 + 0x18) = 0;
    *(undefined4 *)(uVar2 + 0x1c) = 0xc0043c00;
    *(undefined4 *)(uVar2 + 0x20) = 3;
    *(undefined4 *)(uVar2 + 0x24) = 0x1973;
    *(undefined4 *)(uVar2 + 0x28) = 0;
    *(undefined4 *)(uVar2 + 0x2c) = 1;
    *(undefined4 *)(uVar2 + 0x30) = 0x100;
    *(undefined4 *)(uVar2 + 0x34) = 0x1852;
    *(undefined4 *)(uVar2 + 0x38) = 0;
    *(undefined4 *)(uVar2 + 0x3c) = 0x1838;
    *(undefined4 *)(uVar2 + 0x40) = 1;
    *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x40);
    FUN_9803c8e8(iVar1,param_5,param_6,param_7);
  }
  FUN_98029408();
  uVar2 = *(uint *)(iVar1 + 0x30);
  if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar2 + 4) = 0x1844;
  piVar3 = (int *)(uVar2 + 8);
  *piVar3 = iVar4;
  if ((uVar5 & 4) != 0) {
    *(undefined4 *)(uVar2 + 0xc) = 0x1838;
    *(undefined4 *)(uVar2 + 0x10) = 0;
    *(undefined4 *)(uVar2 + 0x14) = 0xc0043c00;
    *(undefined4 *)(uVar2 + 0x18) = 3;
    *(undefined4 *)(uVar2 + 0x1c) = 0x1973;
    *(undefined4 *)(uVar2 + 0x20) = 0;
    *(undefined4 *)(uVar2 + 0x24) = 1;
    *(undefined4 *)(uVar2 + 0x28) = 0x100;
    *(undefined4 *)(uVar2 + 0x2c) = 0x1852;
    piVar3 = (int *)(uVar2 + 0x30);
    *piVar3 = 1;
  }
  *(int **)(iVar1 + 0x30) = piVar3;
  if (iVar4 == 0) {
    if (param_4 == 0x28280136) {
      FUN_980352b8();
    }
    else {
      FUN_980351c8();
    }
  }
  else if ((uVar5 & 2) != 0) {
    FUN_980290b0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_98032238();
}


/* ==== FUN_98029fe8 @ 98029fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029fe8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  uVar5 = (uint)uVar6;
  FUN_9803aa30();
  FUN_9802bcc8();
  if ((uVar5 == 0) && (*(int *)(iVar1 + 0x6008) == 0)) {
    uVar2 = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar2 + 4) = 0x579;
    *(undefined4 *)(uVar2 + 8) = 1;
    *(undefined4 *)(uVar2 + 0xc) = 0xc0043c00;
    *(undefined4 *)(uVar2 + 0x10) = 0x13;
    uVar3 = *(int *)(iVar1 + 0x2b14) + 4;
    *(uint *)(uVar2 + 0x14) = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) | 2;
    *(undefined4 *)(uVar2 + 0x18) = 1;
    *(undefined4 *)(uVar2 + 0x1c) = 0xffffffff;
    *(undefined4 *)(uVar2 + 0x20) = 0x100;
    *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x20);
  }
  iVar4 = *(int *)(iVar1 + 14000);
  if ((iVar4 == 0) || (iVar4 == 1)) {
    uVar2 = 1;
  }
  else if (iVar4 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = -(uint)(iVar4 == 4) & 3;
  }
  if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  uVar2 = FUN_980318e8(iVar1,*(uint *)(iVar1 + 0x30),0,0x98028458,
                       *(uint *)(iVar1 + 0x2ffc) >> 0x17 & 0x7f | uVar2 << 8 | uVar5);
  *(uint *)(iVar1 + 0x30) = uVar2;
  if ((uVar5 == 0) && (*(int *)(iVar1 + 0x6008) == 0)) {
    if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar2 + 4) = 0xc0043c00;
    *(undefined4 *)(uVar2 + 8) = 0x13;
    uVar5 = *(int *)(iVar1 + 0x2b14) + 4;
    *(uint *)(uVar2 + 0xc) = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) | 2;
    *(undefined4 *)(uVar2 + 0x10) = 0;
    *(undefined4 *)(uVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)(uVar2 + 0x18) = 0x100;
    *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x18);
  }
  FUN_9803aa30();
  *(byte *)(iVar1 + 0x2b3d) = *(byte *)(iVar1 + 0x2b3d) | 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98029ff0 @ 98029ff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98029ff0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  int local_178;
  uint local_174;
  uint local_170;
  undefined4 local_16c [3];
  uint local_160;
  uint local_15c;
  uint local_158;
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
  
  uVar22 = FUN_98044784();
  iVar7 = (int)((ulonglong)uVar22 >> 0x20);
  iVar8 = func_0x98058b34();
  iVar3 = iVar8 + -3 + (uint)(iVar8 == 2);
  if (((*(uint *)(iVar7 + 0x36a8) & 0x10) != 0) && (iVar9 = FUN_98029078(), iVar9 != 0)) {
    FUN_980294b0();
  }
  *(int *)(iVar7 + 0x4248) = *(int *)(iVar7 + 0x4248) + 1;
  FUN_98044240();
  if ((local_15c & 0x3f) == 0x32) {
    iVar9 = 3;
LAB_9802a080:
    local_15c = iVar9 << 1 | local_15c & 0xffffffc0;
  }
  else if ((local_15c & 0x3f) == 7) {
    iVar9 = 0x1b;
    goto LAB_9802a080;
  }
  uVar20 = *(uint *)(iVar7 + 0x36bc) >> 0x11;
  local_160 = *(uint *)(iVar7 + 0x36bc) >> 7 & 0x3fc | local_160 & 0xfffffc03;
  local_154 = local_154 & 0xffffe000 | uVar20 & 0x1ffe | uVar20 & 1;
  if ((*(byte *)(iVar7 + 0x2b40) & 0x40) != 0) {
    FUN_980222a8();
  }
  uVar20 = local_154;
  uVar19 = local_15c;
  FUN_98044240();
  iVar12 = *(int *)(iVar7 + 0x36c0);
  iVar15 = (uVar20 >> 0x1e & 2) + 1;
  iVar9 = (local_158 & 0x1fff) + iVar15;
  uVar20 = uVar19 & 0x3f;
  uVar19 = uVar19 & 0xfffff000;
  uVar16 = (local_158 >> 0xd & 0x1fff) + iVar15;
  bVar4 = false;
  local_178 = iVar12;
  local_174 = uVar19;
  local_170 = uVar20;
  if ((*(int *)(iVar7 + 0x5618) != 0) && (*(uint *)(iVar7 + 0x5614) - *(int *)(iVar7 + 0x5610) < 6))
  {
    *(undefined4 *)(((*(uint *)(iVar7 + 0x5614) & 7) + 0x10) * 4 + *(int *)(iVar7 + 0x2b10)) = 0;
    *(undefined4 *)(((*(int *)(iVar7 + 0x5614) + 1U & 7) + 0x10) * 4 + *(int *)(iVar7 + 0x2b10)) = 0
    ;
    FUN_9803a9a0();
    bVar4 = true;
  }
  if (param_3 == (char *)0x0) {
LAB_9802a1e4:
    bVar5 = false;
  }
  else {
    pcVar13 = (char *)(iVar7 + 0x36dc);
    pcVar17 = param_3;
    do {
      cVar1 = *pcVar17;
      cVar2 = *pcVar13;
      if (cVar1 != cVar2) break;
      pcVar17 = pcVar17 + 1;
      pcVar13 = pcVar13 + 1;
    } while (pcVar17 != param_3 + 0x1c);
    bVar5 = true;
    if (cVar1 == cVar2) goto LAB_9802a1e4;
  }
  if (iVar8 + -2 != iVar3) {
    if (DAT_98077a1c != 0) {
      if (*(uint *)(iVar7 + 0x38) < *(uint *)(iVar7 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
      }
      *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30);
    }
    if (bVar5) {
      *(uint *)(iVar7 + 0x5f30) = *(uint *)(iVar7 + 0x5f30) | 0x40000000;
    }
    FUN_9803fa98(iVar7,(int)uVar22);
  }
  func_0x98058bb4(&uStack_110,local_16c);
  if (*(int *)(iVar7 + 0x55b4) == 0) {
    bVar21 = *(int *)(iVar7 + 0x6014) != 0;
    if (((local_e0 == 0x500) && (local_dc == 0x5be)) ||
       ((*(int *)(iVar7 + 0x3708) == 0x500 && (*(int *)(iVar7 + 0x370c) == 0x5be)))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_108 == 0) {
      bVar6 = bVar21;
    }
    if (bVar21) {
      if (!bVar6) goto LAB_9802a308;
    }
    else if (bVar6) {
LAB_9802a308:
      FUN_980441a0(&uStack_110,0,0x94);
      *(undefined4 *)(*(int *)(iVar7 + 0x2b10) + 8) = local_16c[0];
      FUN_980441a0((uint *)(iVar7 + 0x36f8),0,0x38);
    }
    iVar15 = FUN_98032470();
    func_0x98058ba4(iVar15 + 4,&local_160,*(int *)(iVar7 + 0x2b10) + 8,&uStack_110,local_16c[0],
                    &local_174,&local_170,&local_178);
    *(int *)(iVar7 + 0x30) = iVar15 + 0x100;
  }
  else {
    *(undefined4 *)(*(int *)(iVar7 + 0x2b10) + 8) = local_16c[0];
    uVar10 = *(uint *)(iVar7 + 0x30);
    if (*(uint *)(iVar7 + 0x38) < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar10 + 4) = 0xc0001000;
    *(undefined4 *)(uVar10 + 8) = 0;
    *(undefined4 **)(iVar7 + 0x30) = (undefined4 *)(uVar10 + 8);
  }
  *(undefined4 *)(iVar7 + 0x5cd0) = local_10c;
  if (bVar4) {
    FUN_9803a9a0();
    *(int *)(iVar7 + 0x5614) = *(int *)(iVar7 + 0x5614) + 2;
  }
  if (local_108 != 0) {
    *(int *)(iVar7 + 0x5f44) = local_108;
  }
  uVar10 = *(uint *)(iVar7 + 0x42dc);
  *(undefined4 *)(iVar7 + 0x42dc) = 0;
  if ((uVar10 & 8) != 0) {
    FUN_98033ec8();
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  if (bVar5) {
    FUN_98044240();
    FUN_9803cb18(iVar7,(undefined4 *)param_3);
  }
  if ((local_108 == 0) || (local_178 != iVar12)) {
    piVar11 = (int *)(iVar7 + 0x3730);
    iVar15 = *(int *)(iVar7 + 0x36bc);
    local_178 = iVar12;
    local_174 = uVar19;
    local_170 = uVar20;
    if ((*(byte *)(iVar7 + 0x2b3e) & 0x10) != 0) {
      FUN_980441a0((uint *)(iVar7 + 0x36f8),0,0x38);
      uVar10 = uVar10 | 4;
      *(byte *)(iVar7 + 0x2b3e) = *(byte *)(iVar7 + 0x2b3e) & 0xef;
    }
    if ((*(byte *)(iVar7 + 0x2b3f) & 0x40) != 0) {
      uVar10 = uVar10 | 3;
    }
    bVar18 = *(byte *)(iVar7 + 0x2b3f) & 0xbf;
    goto LAB_9802a558;
  }
  piVar11 = (int *)(iVar7 + 0x36f8);
  if (local_170 == 7) {
    iVar15 = 0x28280136;
  }
  else {
    iVar15 = 0x28280106;
  }
  if (local_f4 == 0) {
LAB_9802a4bc:
    if (((*(byte *)(iVar7 + 0x2b3e) & 0x10) != 0) && (local_80 == 0)) {
      piVar11 = (int *)(iVar7 + 0x3730);
      goto LAB_9802a4d8;
    }
  }
  else {
    pcVar17 = local_f0;
    piVar14 = piVar11;
    do {
      cVar1 = *pcVar17;
      cVar2 = *(char *)piVar14;
      if (cVar1 != cVar2) break;
      pcVar17 = pcVar17 + 1;
      piVar14 = (int *)((int)piVar14 + 1);
    } while (pcVar17 != acStack_b8);
    if (cVar1 == cVar2) goto LAB_9802a4bc;
    FUN_98044240();
    *(byte *)(iVar7 + 0x2b3e) = *(byte *)(iVar7 + 0x2b3e) | 0x10;
LAB_9802a4d8:
    uVar10 = uVar10 | 4;
  }
  if ((*(byte *)(iVar7 + 0x2b3f) & 0x40) == 0) {
    uVar10 = uVar10 | 3;
  }
  bVar18 = *(byte *)(iVar7 + 0x2b3f) | 0x40;
  uVar19 = local_174;
LAB_9802a558:
  *(byte *)(iVar7 + 0x2b3f) = bVar18;
  if ((DAT_98077a50 != 0) || ((*(byte *)(iVar7 + 0x2b3d) & 2) != 0)) {
    uVar10 = 0;
  }
  uVar20 = ((uVar19 >> 0x14) + 0x200 & 0x1000) + (uVar19 & 0x1fffffff);
  if (uVar10 == 0) {
    FUN_98029d10();
  }
  else {
    FUN_98029dc8(iVar7,uVar10,uVar20,iVar15,iVar9,uVar16,piVar11);
  }
  FUN_9803a6f8(iVar7,uVar10,local_178,uVar20,iVar15,iVar9,uVar16,piVar11);
  if (((uVar10 & 8) != 0) && (iVar8 + -2 != iVar3)) {
    uVar20 = *(uint *)(iVar7 + 0x30);
    if (uVar20 <= *(uint *)(iVar7 + 0x38)) {
      *(undefined4 *)(uVar20 + 4) = 0xc0022100;
      *(undefined4 *)(uVar20 + 8) = 0x1e4e;
      *(undefined4 *)(uVar20 + 0xc) = 0xfffffffe;
      *(undefined4 *)(uVar20 + 0x10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  if (*(int *)(iVar7 + 0x6008) != 0) {
    FUN_9803ced0();
  }
  *(undefined4 *)(iVar7 + 0x2b30) = *(undefined4 *)(iVar7 + 0x2b1c);
                    /* WARNING: Subroutine does not return */
  FUN_98032238();
}


/* ==== FUN_9802a758 @ 9802a758 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802a758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802a870 @ 9802a870 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802a870(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_98044790();
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(uint *)(iVar1 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  iVar2 = FUN_98031070();
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


/* ==== FUN_9802ab28 @ 9802ab28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ab28(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  int extraout_r4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_b0 [18];
  
  FUN_9804478c();
  uVar2 = param_8 >> 0x10 & 3;
  iVar6 = 1;
  if (uVar2 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    if (uVar2 != 1) {
      iVar6 = 0;
    }
  }
  uVar3 = 0x28 << iVar6;
  uVar1 = 8 << iVar5;
  uVar2 = (uVar3 + extraout_r4) - 1;
  uVar7 = (uVar1 + param_3) - 1;
  iVar9 = ((int)uVar2 / (int)uVar3) * uVar3;
  iVar8 = ((int)param_4 / (int)uVar3) * uVar3;
  trapWord(6,uVar3,0);
  trapWord(6,uVar3,0);
  trapWord(6,uVar1,0);
  trapWord(6,uVar1,0);
  trapWord(5,uVar3 & ~((uVar2 * 2 | uVar2 >> 0x1f) - 1),0xffff);
  trapWord(5,uVar1 & ~((uVar7 * 2 | uVar7 >> 0x1f) - 1),0xffff);
  iVar5 = ((int)uVar7 / (int)uVar1) * uVar1;
  trapWord(5,uVar3 & ~((param_4 << 1 | param_4 >> 0x1f) - 1),0xffff);
  trapWord(5,uVar1 & ~((param_5 << 1 | param_5 >> 0x1f) - 1),0xffff);
  iVar6 = ((int)param_5 / (int)uVar1) * uVar1;
  if (((iVar9 < iVar8) && (iVar5 < iVar6)) && (DAT_980759e4 != 0)) {
    piVar4 = local_b0;
    if (extraout_r4 < iVar9) {
      piVar4 = local_b0 + 4;
      local_b0[0] = extraout_r4;
      local_b0[1] = param_3;
      local_b0[2] = iVar9;
      local_b0[3] = param_5;
    }
    if (iVar8 < (int)param_4) {
      *piVar4 = iVar8;
      piVar4[1] = param_3;
      piVar4[2] = param_4;
      piVar4[3] = param_5;
      piVar4 = piVar4 + 4;
    }
    if (param_3 < iVar5) {
      *piVar4 = iVar9;
      piVar4[1] = param_3;
      piVar4[2] = iVar8;
      piVar4[3] = iVar5;
      piVar4 = piVar4 + 4;
    }
    if (iVar6 < (int)param_5) {
      *piVar4 = iVar9;
      piVar4[1] = iVar6;
      piVar4[2] = iVar8;
      piVar4[3] = param_5;
      piVar4 = piVar4 + 4;
    }
    if ((int)piVar4 - (int)local_b0 >> 4 != 0) {
      FUN_9802a870();
    }
    FUN_9802a870();
  }
  else {
    FUN_9802a870();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ad90 @ 9802ad90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ad90(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 uint param_6,uint param_7,undefined4 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs48 [16];
  ulonglong uVar17;
  int iStack0000002c;
  int iStack00000034;
  uint uStack0000003c;
  uint uStack00000044;
  uint in_stack_0000005c;
  
  uVar17 = FUN_98044770();
  iVar3 = (int)(uVar17 >> 0x20);
  uVar8 = *(uint *)(iVar3 + 0x2880);
  uVar9 = 0;
  if (param_3 != -1) {
    uVar9 = *(uint *)(*(int *)((param_3 + 0xc84) * 4 + iVar3) + 0x1c);
    if ((uVar9 & 0xf0000) == 0xa0000) {
      uVar9 = 0x20000;
    }
    if ((uVar9 & 0xf0000) == 0xc0000) {
      uVar9 = 0x30000;
    }
  }
  uVar15 = *(uint *)(iVar3 + 0x2940) & 0xfffffff0;
  if ((uVar17 & 0x10) != 0) {
    uVar15 = uVar15 | 1;
  }
  iStack0000002c = param_4;
  iStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  if ((uVar17 & 0x20) != 0) {
    uVar8 = *(uint *)(iVar3 + 0x30);
    if (uVar8 <= *(uint *)(iVar3 + 0x38)) {
      *(undefined4 *)(uVar8 + 4) = 0x210d;
      *(uint *)(uVar8 + 8) = in_stack_0000005c & 0xff | 0xff0000;
      *(uint **)(iVar3 + 0x30) = (uint *)(uVar8 + 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  FUN_9803fe38(iVar3,0x100,uVar15);
  uVar15 = *(uint *)(iVar3 + 0x30);
  if (*(uint *)(iVar3 + 0x38) < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  iVar4 = 0;
  *(undefined4 *)(uVar15 + 4) = 0x22080;
  *(undefined4 *)(uVar15 + 8) = 0;
  *(undefined4 *)(uVar15 + 0xc) = 0;
  *(undefined4 *)(uVar15 + 0x10) = 0x20002000;
  if (((((uVar17 & 0x30) == 0) && (uVar9 = uVar9 >> 0x10 & 0xf, uVar9 != 5)) && (uVar9 != 7)) &&
     (uVar9 != 0xf)) {
    uVar9 = uVar8 >> 0x10 & 3;
    iVar4 = 0x10;
    if (uVar9 == 0) {
      iVar6 = 0x50;
      iVar5 = 0x10;
    }
    else {
      iVar5 = 8;
      iVar6 = 0x50;
      if (uVar9 != 1) {
        iVar6 = 0x28;
      }
    }
    if ((iVar6 <= (int)(param_6 - param_4)) && (iVar5 <= (int)(param_7 - param_5))) {
      altv300_21(in_vs32,in_vs48);
      altv300_23(in_vs41,in_vs48);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined4 **)(iVar3 + 0x30) = (undefined4 *)(uVar15 + 0x10);
  if ((((*(byte *)(iVar3 + 0x2b3f) & 2) != 0) || ((*(byte *)(iVar3 + 0x2b40) & 0x80) != 0)) ||
     ((*(byte *)(iVar3 + 0x2b40) & 0x40) != 0)) {
    FUN_980222a8();
  }
  bVar1 = *(byte *)(iVar3 + 0x2b3c);
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0x20) != 0) {
      iVar4 = *(int *)(iVar3 + 0x3330);
      if ((iVar4 == *(int *)(iVar3 + 0x3210)) || (*(int *)(iVar3 + 0x3210) == 0)) {
        iVar4 = *(int *)(iVar3 + 0x3334);
        if ((iVar4 == *(int *)(iVar3 + 0x3214)) || (*(int *)(iVar3 + 0x3214) == 0)) {
          iVar4 = *(int *)(iVar3 + 0x3338);
          if ((iVar4 == *(int *)(iVar3 + 0x3218)) || (*(int *)(iVar3 + 0x3218) == 0)) {
            iVar4 = *(int *)(iVar3 + 0x333c);
            if ((iVar4 == *(int *)(iVar3 + 0x321c)) || (*(int *)(iVar3 + 0x321c) == 0)) {
              iVar4 = *(int *)(iVar3 + 0x3340);
              if ((iVar4 == *(int *)(iVar3 + 0x3220)) || (*(int *)(iVar3 + 0x3220) == 0)) {
                bVar2 = true;
                goto LAB_9802b100;
              }
            }
          }
        }
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
LAB_9802b100:
  if (bVar2) {
    uVar9 = *(uint *)(iVar3 + 0x331c);
    if ((((*(byte *)(iVar3 + 0x2b3f) & 0x20) != 0) && ((bVar1 & 0x40) != 0)) &&
       ((uVar9 & 0x15555555) != 0)) {
      if ((uVar17 & 0x30) != 0) {
        uVar15 = *(uint *)(iVar3 + 0x30);
        if (*(uint *)(iVar3 + 0x38) < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_98032238();
        }
        *(undefined4 *)(uVar15 + 4) = 0xc0006000;
        *(uint *)(uVar15 + 8) = uVar9 & 0x15555555;
        uVar10 = *(int *)(iVar3 + 0x34ec) << 0x12;
        *(uint **)(iVar3 + 0x30) = (uint *)(uVar15 + 8);
        FUN_9802ab28(iVar3,param_4 - *(int *)(iVar3 + 0x3438),param_5 - *(int *)(iVar3 + 0x343c),
                     param_6 - *(int *)(iVar3 + 0x3438),param_7 - *(int *)(iVar3 + 0x343c),param_8,
                     uVar10 | uVar8 & 0x3ffff,
                     *(uint *)(iVar3 + 0x34f0) & 0x3fff | uVar10 | uVar8 & 0x3c000);
      }
      uVar9 = uVar9 & 0xeaaaaaaa;
    }
    uVar15 = 0;
    if (*(int *)(iVar3 + 0x3344) != 0) {
      uVar10 = 0;
      piVar13 = (int *)(iVar3 + 0x343c);
      piVar11 = (int *)(iVar3 + 0x334c);
      do {
        if (param_4 <= piVar11[-1]) {
          param_4 = piVar11[-1];
        }
        if (param_5 <= *piVar11) {
          param_5 = *piVar11;
        }
        uVar12 = uStack0000003c;
        if (piVar11[1] <= (int)uStack0000003c) {
          uVar12 = piVar11[1];
        }
        uVar14 = piVar11[2];
        if ((int)uStack00000044 < piVar11[2]) {
          uVar14 = uStack00000044;
        }
        if (((param_4 < (int)uVar12) && (param_5 < (int)uVar14)) &&
           (uVar16 = 3 << (uVar10 & 0x3f) & uVar9, uVar16 != 0)) {
          uVar7 = *(uint *)(iVar3 + 0x30);
          if (*(uint *)(iVar3 + 0x38) < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_98032238();
          }
          *(undefined4 *)(uVar7 + 4) = 0xc0006000;
          *(uint *)(uVar7 + 8) = uVar16;
          *(uint **)(iVar3 + 0x30) = (uint *)(uVar7 + 8);
          iVar4 = *piVar13;
          FUN_9802ab28(iVar3,param_4 - piVar13[-1],param_5 - iVar4,uVar12 - piVar13[-1],
                       uVar14 - iVar4,param_8,iVar4,uVar8);
        }
        uVar15 = uVar15 + 1;
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 + 2;
        piVar13 = piVar13 + 2;
        param_4 = iStack0000002c;
        param_5 = iStack00000034;
      } while (uVar15 < *(uint *)(iVar3 + 0x3344));
    }
  }
  else {
    FUN_9802ab28(iVar3,param_4,param_5,param_6,param_7,param_8,iVar4,uVar8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802b330 @ 9802b330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b330(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

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
  
  uVar7 = FUN_98044784();
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


/* ==== FUN_9802b9b0 @ 9802b9b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802b9b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bae8 @ 9802bae8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802bae8(void)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  
  FUN_980447a4();
  altv300_21(in_vs32,in_vs43);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802bba8 @ 9802bba8 ==== */

void FUN_9802bba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9802bcc8 @ 9802bcc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802bcc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802be38 @ 9802be38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802be38(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs60 [16];
  ulonglong uVar10;
  
  uVar10 = FUN_98044798();
  iVar1 = (int)(uVar10 >> 0x20);
  *(int *)(iVar1 + 0x3344) = param_3;
  uVar2 = 0;
  uVar8 = 0;
  if (param_3 != 0) {
    puVar3 = (uint *)(iVar1 + 0x3434);
    puVar6 = (uint *)(param_4 + -0xc);
    puVar4 = (uint *)(iVar1 + 0x3344);
    iVar9 = param_3;
    do {
      if (uVar2 <= puVar6[5]) {
        uVar2 = puVar6[5];
      }
      if (uVar8 <= puVar6[6]) {
        uVar8 = puVar6[6];
      }
      puVar4[1] = puVar6[3];
      puVar4[2] = puVar6[4];
      puVar4[3] = puVar6[5];
      puVar4 = puVar4 + 4;
      *puVar4 = puVar6[6];
      puVar3[1] = puVar6[3] & 0xffffffe0;
      puVar6 = puVar6 + 4;
      puVar3 = puVar3 + 2;
      *puVar3 = *puVar6 & 0xffffffe0;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((uVar10 & 2) != 0) {
    FUN_9802bba8();
  }
  *(uint *)(iVar1 + 0x34f8) = uVar8;
  *(uint *)(iVar1 + 0x34f4) = uVar2;
  *(int *)(iVar1 + 0x34fc) = (int)uVar10;
  if (((uVar10 & 1) == 0) && ((*(byte *)(iVar1 + 0x2b3f) & 0x20) == 0)) {
    uVar8 = 0;
    uVar2 = 0;
    if (param_3 != 0) {
      piVar5 = (int *)(iVar1 + 0x3354);
      piVar7 = (int *)(iVar1 + 0x343c);
      do {
        if (uVar8 <= (uint)(piVar5[-1] - piVar7[-1])) {
          uVar8 = piVar5[-1] - piVar7[-1];
        }
        if (uVar2 <= (uint)(*piVar5 - *piVar7)) {
          uVar2 = *piVar5 - *piVar7;
        }
        piVar7 = piVar7 + 2;
        piVar5 = piVar5 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_98044240();
    FUN_98025618();
    FUN_98024de8();
    FUN_9802b9b0();
    FUN_98025698();
    FUN_98024de8();
  }
  if (param_5 != 0) {
    altv207_13(in_vs32,in_vs60);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802c1a8 @ 9802c1a8 ==== */

void FUN_9802c1a8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_98044790();
  if ((((param_3 != 0) || (param_4 != 0)) && (param_4 != 0)) &&
     (uVar2 = 0, *(int *)(iVar1 + 0x3344) != 0)) {
    do {
      FUN_9802bcc8();
      FUN_98024278(iVar1,~(uint)*(byte *)(iVar1 + 0x2b3f) >> 4 & 2);
      if (uVar2 < *(int *)(iVar1 + 0x3344) - 1U) {
        FUN_9802ef90();
      }
      else {
        FUN_9802ef90();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(iVar1 + 0x3344));
  }
  FUN_9802bcc8();
  FUN_98024278(iVar1,2);
  uVar2 = *(uint *)(iVar1 + 0x34fc) & 0x3f000000;
  uVar3 = 0x1000000 << (*(uint *)(iVar1 + 0x2cc8) & 0x3f);
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  if (*(int *)(iVar1 + 0x3344) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  FUN_9802bcc8();
  uVar2 = *(uint *)(iVar1 + 0x35c0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) + 0xc0000000;
  }
  FUN_98032560(iVar1,uVar3,0x98041338,uVar2);
  FUN_9802bcc8();
                    /* WARNING: Subroutine does not return */
  FUN_98032238();
}


/* ==== FUN_9802c660 @ 9802c660 ==== */

void FUN_9802c660(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3614);
  return;
}


/* ==== FUN_9802c670 @ 9802c670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802c670(void)

{
  int iVar1;
  uint in_r6;
  
  iVar1 = FUN_98044790();
  *(char *)(iVar1 + 0x3268) = (char)(in_r6 >> 2);
  if (((in_r6 >> 2 & 0xff) != (uint)*(byte *)(iVar1 + 0x2fe8)) && (*(int *)(iVar1 + 0x3310) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802cb30 @ 9802cb30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802cb30(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_980447a8();
  iVar2 = FUN_9802c670();
  if (iVar2 != 0) {
    FUN_98044240();
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x3614);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802cb78 @ 9802cb78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802cb78(void)

{
  FUN_98044794();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802cf90 @ 9802cf90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802cf90(void)

{
  FUN_9804477c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d408 @ 9802d408 ==== */

undefined4 FUN_9802d408(int param_1)

{
  if (((((param_1 != 0x1e) && (param_1 != 0x1f)) && (param_1 != 0x20)) &&
      ((param_1 != 0x24 && (param_1 != 0x25)))) &&
     ((param_1 != 0x26 && ((param_1 != 0x39 && (param_1 != 0x3f)))))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_9802d458 @ 9802d458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d500 @ 9802d500 ==== */

uint FUN_9802d500(double param_1,undefined4 param_2,uint param_3)

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


/* ==== FUN_9802d568 @ 9802d568 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802d688 @ 9802d688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802d688(void)

{
  FUN_980447a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802db00 @ 9802db00 ==== */

void FUN_9802db00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9802dbd8 @ 9802dbd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802dbd8(void)

{
  FUN_980447a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802de38 @ 9802de38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802de38(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  ulonglong uVar18;
  uint in_stack_00000054;
  int in_stack_0000005c;
  uint auStack_fc [3];
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint auStack_e4 [3];
  int aiStack_d8 [2];
  uint auStack_d0 [4];
  uint auStack_c0 [3];
  int iStack_b4;
  
  uVar18 = FUN_98044770();
  iVar4 = (int)(uVar18 >> 0x20);
  uVar12 = (uint)uVar18;
  iVar13 = 1;
  if (((uVar18 & 0x4000) == 0) || (uStack_f0 = 1, iRam98077a2c != 0)) {
    uStack_f0 = 0;
  }
  if (((uVar18 & 0x8000) == 0) || (auStack_fc[1] = 1, iRam98077a30 != 0)) {
    auStack_fc[1] = 0;
  }
  uStack_ec = uVar12 & 7;
  if ((uVar18 & 0x70) == 0) {
    if (uStack_ec == 4) {
      iVar9 = *(int *)(iVar4 + 0x3220);
    }
    else {
      iVar9 = *(int *)((uStack_ec + 0xc84) * 4 + iVar4);
    }
    if ((*(ushort *)(iVar9 + 0x18) & 3) == 0) {
      uVar12 = uVar12 | 0x10;
    }
    else if ((*(ushort *)(iVar9 + 0x18) & 3) == 1) {
      uVar12 = uVar12 | 0x50;
    }
    else {
      uVar12 = uVar12 | 0x70;
    }
  }
  if (in_stack_0000005c == 0) {
    altv207_13(in_vs32,in_vs43);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = *(uint *)(param_6 + 0x24);
  iVar9 = (*(uint *)(param_6 + 0x28) >> 0x1e & 2) + 1;
  if ((*(uint *)(param_6 + 0x30) & 0x600) == 0x400) {
    auStack_fc[0] = uVar8 & 0x7ff;
    iVar13 = 8;
    uVar8 = uVar8 >> 0xb & 0x7ff;
  }
  else {
    auStack_fc[0] = uVar8 & 0x1fff;
    uVar8 = uVar8 >> 0xd & 0x1fff;
  }
  uVar16 = *(uint *)(param_6 + 0x20);
  iVar14 = uVar8 + iVar9;
  auStack_fc[0] = auStack_fc[0] + iVar9;
  FUN_98025f08(uVar16 & 0x3f,&uStack_e8,auStack_e4);
  uVar3 = auStack_e4[0];
  auStack_fc[2] = uVar16 & 0xfffff000;
  uVar8 = (byte)(&DAT_98002b29)[(uVar16 & 0x3f) * 2] * uStack_e8 * auStack_e4[0] >> 3;
  uVar16 = (*(uint *)(param_6 + 0x1c) >> 0x11 & 0x3fe0) / uStack_e8;
  trapWord(6,uStack_e8,0);
  uStack_e8 = uVar8;
  if ((param_8 != 0) || (in_stack_00000054 != 0)) {
    FUN_98026af0(param_6,in_stack_00000054 & ~(iVar13 - 1U),param_8,auStack_e4,auStack_c0,auStack_d0
                 ,aiStack_d8,auStack_fc);
    trapWord(6,uVar8,0);
    uVar16 = auStack_e4[0] / uVar8;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = auStack_c0;
    iStack_b4 = iVar14;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    auStack_c0[2] = auStack_fc[0];
  }
  if (param_7 == (int *)0x0) {
    param_7 = (int *)&UNK_980030c8;
  }
  uVar1 = auStack_fc[2] >> 0x14;
  iVar9 = param_7[1];
  iVar13 = *param_7;
  trapWord(6,uVar3,0);
  uVar10 = param_3[1];
  uVar7 = *param_3;
  uVar6 = *(uint *)(param_6 + 0x28);
  uVar15 = *(uint *)(param_6 + 0x20);
  uVar2 = auStack_fc[2] & 0x1fffffff;
  uVar17 = uVar15 & 0x3f;
  uVar11 = *(uint *)(param_6 + 0x1c) >> 2 & 3;
  if (uVar17 == 0x36) {
    uVar17 = 7;
  }
  else if (uVar17 == 0x37) {
    uVar17 = 0x10;
  }
  else if (uVar17 == 0x38) {
    uVar17 = 0x11;
  }
  else if (uVar17 == 0x1b) {
    uVar17 = 0x1e;
  }
  else if (uVar17 == 0x1c) {
    uVar17 = 0x1f;
  }
  else if (uVar17 == 0x1d) {
    uVar17 = 0x20;
  }
  else if (((uVar17 == 0x16) || (uVar17 == 0x17)) || (uVar17 == 0x32)) {
    uVar17 = 6;
  }
  if ((uVar6 & 1) == 1) {
    uVar11 = (uVar11 == 1) + 2;
  }
  else {
    uVar11 = (uint)(uVar11 == 1);
  }
  iVar5 = FUN_9802d408(uVar17);
  if (iVar5 != 0) {
    uVar11 = 7;
  }
  if ((*(uint *)(param_6 + 0x30) & 0x600) == 0x400) {
    *(uint *)(iVar4 + 0x2a44) = uVar16 * iVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = 1;
  if ((uVar12 & 0x2000) == 0) {
    if (uStack_ec == 4) {
      iVar5 = 0;
    }
    else if (uVar17 == 0x3d) {
      iVar5 = 2;
    }
  }
  else {
    iVar5 = 3;
  }
  *(uint *)(iVar4 + 0x2a24) =
       ((((uint)((uVar6 & 0xe) != 0) * 0x100 | uVar12 >> 0x1a) << 3 | uVar11) << 6 | uVar17) << 7 |
       uVar15 >> 6 & 3;
  *(uint *)(iVar4 + 0x2a1c) =
       ((iVar9 - uVar10) * uVar16 + (iVar13 - uVar7) * 0x20) * uVar8 + (uVar1 + 0x200 & 0x1000) +
       uVar2;
  *(uint *)(iVar4 + 0x2a20) =
       ((uint)(iVar14 - iVar9) / uVar3 + uVar10) * 0x10000 & 0x3fff0000 | uVar16 & 0x3fff;
  *(uint *)(iVar4 + 0x2a18) = iVar5 << 0x14 | (uVar12 & 0x377) - 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ef90 @ 9802ef90 ==== */

void FUN_9802ef90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9802efe0 @ 9802efe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802efe0(void)

{
  int iVar1;
  int extraout_r4;
  uint uStack_a0;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [152];
  
  FUN_980447a0();
  FUN_98043670(extraout_r4 + 0x1c,auStack_98,&uStack_a0,auStack_9c);
  if ((uStack_a0 < 0x398001) &&
     (iVar1 = func_0x98058bc4(1,0x398000,0x404,0,0x7fffffff,0x1000,
                              *(uint *)(extraout_r4 + 0x24) >> 0xd & 0x1fff,
                              *(uint *)(extraout_r4 + 0x24) & 0x1fff), iVar1 != 0)) {
    FUN_980324e8();
    FUN_980276c0();
    FUN_98044240();
    FUN_98025ef0(extraout_r4);
    sync(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f1c8 @ 9802f1c8 ==== */

uint FUN_9802f1c8(uint *param_1)

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


/* ==== FUN_9802f258 @ 9802f258 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f258(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a8();
  puVar1 = (uint *)((ulonglong)uVar6 >> 0x20);
  uVar2 = (uint)uVar6;
  if ((*puVar1 & 0xf00) == 0x100) {
    uVar5 = puVar1[5];
    if (uVar5 != 0xffff0000) {
      uVar3 = (uVar5 >> 0x10 & 0x7fff) << 4;
      if ((uVar5 >> 0x10 & 0x8000) == 0) {
        uVar3 = uVar5 >> 0x10;
      }
      uVar4 = (uVar5 & 0x7fff) << 4;
      if ((uVar5 & 0x8000) == 0) {
        uVar4 = uVar5 & 0xffff;
      }
      puVar1[5] = 0xffff0000;
      if ((*puVar1 & 0x200000) == 0) {
        uVar2 = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) + 0xc0000000;
      }
      FUN_98043738(uVar3 * 0x80 + (uVar2 & 0xffffff80),uVar4 * 0x80 + (uVar2 & 0xffffff80));
    }
    if ((param_3 != 0) && (uVar2 = puVar1[6], uVar2 != 0xffff0000)) {
      uVar5 = (uVar2 >> 0x10 & 0x7fff) << 4;
      if ((uVar2 >> 0x10 & 0x8000) == 0) {
        uVar5 = uVar2 >> 0x10;
      }
      uVar3 = (uVar2 & 0x7fff) << 4;
      if ((uVar2 & 0x8000) == 0) {
        uVar3 = uVar2 & 0xffff;
      }
      puVar1[6] = 0xffff0000;
      if ((*puVar1 & 0x200000) == 0) {
        param_3 = ((param_3 >> 0x14) + 0x200 & 0x1000) + (param_3 & 0x1fffffff) + 0xc0000000;
      }
      FUN_98043738(uVar5 * 0x80 + (param_3 & 0xffffff80),uVar3 * 0x80 + (param_3 & 0xffffff80));
    }
  }
  sync(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f3a8 @ 9802f3a8 ==== */

int FUN_9802f3a8(uint *param_1)

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


/* ==== FUN_9802f400 @ 9802f400 ==== */

void FUN_9802f400(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9802f4c0 @ 9802f4c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f4c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f538 @ 9802f538 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f538(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_980447a8();
  puVar1 = (uint *)FUN_98048d70();
  if (puVar1 != (uint *)0x0) {
    uVar3 = 0x100001;
    if ((uVar4 & 4) != 0) {
      uVar3 = 0x300001;
    }
    if ((uVar4 & 0x200) != 0) {
      uVar3 = uVar3 | 0x400000;
    }
    uVar2 = FUN_98048d70();
    if (uVar2 == 0) {
      FUN_98048ea8((int)puVar1,0x24800000);
    }
    else {
      *puVar1 = uVar3;
      puVar1[6] = uVar2 | 3;
      puVar1[1] = 1;
      puVar1[5] = 0xffff0000;
      puVar1[7] = (uint)(uVar4 >> 0x20) & 0x3fffffc | puVar1[7] & 0x8000000 | 0x10000002;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f600 @ 9802f600 ==== */

void FUN_9802f600(int param_1)

{
  FUN_9802f258(param_1,*(uint *)(param_1 + 0x18) & 0xfffffffc,0);
  return;
}


/* ==== FUN_9802f610 @ 9802f610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f610(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_980447a8();
  puVar1 = (uint *)FUN_98048d70();
  if (puVar1 != (uint *)0x0) {
    uVar3 = param_3 << 0x1d | 0x100002;
    if ((uVar4 & 4) != 0) {
      uVar3 = param_3 << 0x1d | 0x300002;
    }
    if ((uVar4 & 0x200) != 0) {
      uVar3 = uVar3 | 0x400000;
    }
    uVar2 = FUN_98048d70();
    if (uVar2 == 0) {
      FUN_98048ea8((int)puVar1,0x24800000);
    }
    else {
      puVar1[7] = (uint)(uVar4 >> 0x20);
      *puVar1 = uVar3;
      puVar1[1] = 1;
      puVar1[5] = 0xffff0000;
      puVar1[6] = uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f6c0 @ 9802f6c0 ==== */

void FUN_9802f6c0(int param_1)

{
  FUN_9802f258(param_1,*(undefined4 *)(param_1 + 0x18),0);
  return;
}


/* ==== FUN_9802f6d0 @ 9802f6d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f6d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802f828 @ 9802f828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802f828(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_98044770();
  if (iRam98077a44 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *(uint *)(iVar2 + 0x30);
  if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 4) = 0xc0003b00;
  *(undefined4 *)(uVar3 + 8) = 0x300;
  *(undefined4 *)(uVar3 + 0xc) = 0xc0192b00;
  *(undefined4 *)(uVar3 + 0x10) = 0;
  *(undefined4 *)(uVar3 + 0x14) = 0x18;
  FUN_98044240();
  *(uint *)(iVar2 + 0x30) = uVar3 + 0x74;
  if (*(uint *)(iVar2 + 0x38) < uVar3 + 0x74) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 0x78) = 0xc00a2b00;
  *(undefined4 *)(uVar3 + 0x7c) = 1;
  *(undefined4 *)(uVar3 + 0x80) = 9;
  FUN_98044240();
  *(uint *)(iVar2 + 0x30) = uVar3 + 0xa4;
  if (*(uint *)(iVar2 + 0x38) < uVar3 + 0xa4) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 0xa8) = 0x12180;
  *(undefined4 *)(uVar3 + 0xac) = 0x10000001;
  *(undefined4 *)(uVar3 + 0xb0) = 0;
  *(undefined4 *)(uVar3 + 0xb4) = 0x22100;
  *(undefined4 *)(uVar3 + 0xb8) = 0xffff;
  *(undefined4 *)(uVar3 + 0xbc) = 0;
  *(undefined4 *)(uVar3 + 0xc0) = 0;
  *(undefined4 *)(uVar3 + 0xc4) = 0x2293;
  *(undefined4 *)(uVar3 + 200) = 0;
  *(undefined4 *)(uVar3 + 0xcc) = 0x22204;
  *(undefined4 *)(uVar3 + 0xd0) = 0x10000;
  *(undefined4 *)(uVar3 + 0xd4) = 0x10000;
  *(undefined4 *)(uVar3 + 0xd8) = 0x300;
  *(undefined4 *)(uVar3 + 0xdc) = 0x2312;
  *(undefined4 *)(uVar3 + 0xe0) = 0xffff;
  *(undefined4 *)(uVar3 + 0xe4) = 0x200d;
  *(undefined4 *)(uVar3 + 0xe8) = 0;
  *(undefined4 *)(uVar3 + 0xec) = 0x2200;
  *(undefined4 *)(uVar3 + 0xf0) = 0;
  *(undefined4 *)(uVar3 + 0xf4) = 0x2203;
  *(undefined4 *)(uVar3 + 0xf8) = 0;
  *(undefined4 *)(uVar3 + 0xfc) = 0x2208;
  *(undefined4 *)(uVar3 + 0x100) = 4;
  *(undefined4 *)(uVar3 + 0x104) = 0x2104;
  *(undefined4 *)(uVar3 + 0x108) = 0;
  *(undefined4 *)(uVar3 + 0x10c) = 0x2280;
  *(undefined4 *)(uVar3 + 0x110) = 0x80008;
  *(undefined4 *)(uVar3 + 0x114) = 0x2302;
  *(undefined4 *)(uVar3 + 0x118) = 4;
  *(undefined4 *)(uVar3 + 0x11c) = 0x22080;
  *(undefined4 *)(uVar3 + 0x120) = 0;
  *(undefined4 *)(uVar3 + 0x124) = 0;
  puVar1 = (undefined4 *)(uVar3 + 0x128);
  *puVar1 = 0x100010;
  *(undefined4 **)(iVar2 + 0x30) = puVar1;
  if (*(undefined4 **)(iVar2 + 0x38) < puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 300) = 0xc0003600;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802fbb0 @ 9802fbb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802fbb0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = FUN_980447a4();
  if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  FUN_9802f3a8(param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802fca8 @ 9802fca8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802fca8(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint auStack_60 [4];
  uint uStack_50;
  int iStack_4c;
  uint auStack_48 [2];
  uint auStack_40 [16];
  
  uVar6 = FUN_980447a4();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(((int)uVar6 + 0xa26) * 4 + iVar2) = 0;
  uVar3 = *(uint *)(iVar2 + 0x30);
  if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(int *)(uVar3 + 4) = (int)uVar6 + 0x2006;
  *(undefined4 *)(uVar3 + 8) = 0;
  uVar4 = *(uint *)(iVar2 + 0x2b1c);
  *(undefined4 **)(iVar2 + 0x30) = (undefined4 *)(uVar3 + 8);
  if (uVar4 == 0) {
    if ((*(uint *)(iVar2 + 0x2b20) & *param_3) != 0) {
      if (*(uint *)(iVar2 + 0x366c) <= *(uint *)(iVar2 + 0x3668)) {
                    /* WARNING: Subroutine does not return */
        FUN_98034ac0();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    param_3[2] = uVar4;
    param_3[3] = uVar4;
  }
  if ((*param_3 & 0xf) != 1) {
    if ((*param_3 & 0xf) != 3) goto LAB_9802fe30;
    uVar3 = param_3[0xc];
    FUN_98026af0(param_3,0,0,auStack_40,auStack_48,auStack_60,&iStack_4c,&uStack_50);
    FUN_9802f400();
    if ((uVar3 & 0xfffff000) == 0) goto LAB_9802fe30;
  }
  FUN_9802f400();
LAB_9802fe30:
  uVar3 = *(uint *)(iVar2 + 0x30);
  *(int *)(iVar2 + 0x3650) = *(int *)(iVar2 + 0x3650) + -1;
  if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 4) = 0xc0004600;
  puVar1 = (undefined4 *)(uVar3 + 8);
  *puVar1 = 6;
  *(undefined4 **)(iVar2 + 0x30) = puVar1;
  if (*(int *)(iVar2 + 0x3650) == 0) {
    if (param_4 != 1) {
      if (*(undefined4 **)(iVar2 + 0x38) < puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
      }
      *(undefined4 *)(uVar3 + 0xc) = 0x5c8;
      *(undefined4 *)(uVar3 + 0x10) = 0x20000;
      *(undefined4 **)(iVar2 + 0x30) = (undefined4 *)(uVar3 + 0x10);
      if (param_4 != 2) {
        FUN_9802f828(iVar2);
      }
    }
  }
  else {
    FUN_9802f6d0(iVar2);
  }
  if (*(uint *)(iVar2 + 0x38) < *(uint *)(iVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30);
  if ((*(int *)(iVar2 + 0x3650) != 0) || (uVar5 = 1, param_4 != 1)) {
    uVar5 = 0;
  }
  *(undefined4 *)(iVar2 + 0x3654) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9802ff10 @ 9802ff10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9802ff10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980301b8 @ 980301b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980301b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030238 @ 98030238 ==== */

void FUN_98030238(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980303a8 @ 980303a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980303a8(void)

{
  FUN_98044788();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030718 @ 98030718 ==== */

void FUN_98030718(void)

{
  FUN_980303a8();
  return;
}


/* ==== FUN_98030768 @ 98030768 ==== */

void FUN_98030768(void)

{
  FUN_980303a8();
  return;
}


/* ==== FUN_980307b0 @ 980307b0 ==== */

void FUN_980307b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x42f0);
  *(int *)(param_1 + 0x34) = iVar1 + 0x12c0;
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x38) = iVar1 + 0x1220;
  *(byte *)(param_1 + 0x2b3d) = *(byte *)(param_1 + 0x2b3d) | 0x20;
  return;
}


/* ==== FUN_980307d8 @ 980307d8 ==== */

void FUN_980307d8(int param_1)

{
  *(undefined4 *)(param_1 + 0x35f0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x35f4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x35f8) = *(undefined4 *)(param_1 + 0x3be4);
  *(undefined4 *)(param_1 + 0x35fc) = *(undefined4 *)(param_1 + 0x3be0);
  *(undefined4 *)(param_1 + 0x3600) = *(undefined4 *)(param_1 + 0x3bd8);
  *(undefined4 *)(param_1 + 0x3604) = *(undefined4 *)(param_1 + 0x3bdc);
  return;
}


/* ==== FUN_98030810 @ 98030810 ==== */

void FUN_98030810(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x35f0);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x35f4);
  *(undefined4 *)(param_1 + 0x3be4) = *(undefined4 *)(param_1 + 0x35f8);
  *(undefined4 *)(param_1 + 0x3be0) = *(undefined4 *)(param_1 + 0x35fc);
  *(undefined4 *)(param_1 + 0x3bd8) = *(undefined4 *)(param_1 + 0x3600);
  *(undefined4 *)(param_1 + 0x3bdc) = *(undefined4 *)(param_1 + 0x3604);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x35f4) + -0xa0;
  return;
}


/* ==== FUN_98030850 @ 98030850 ==== */

void FUN_98030850(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980308e8 @ 980308e8 ==== */

void FUN_980308e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98030998 @ 98030998 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030998(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iStack0000001c;
  uint uStack00000024;
  
  uVar9 = FUN_980447a8();
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  iStack0000001c = (int)uVar9;
  uStack00000024 = param_3;
  if ((*(int **)(iVar3 + 0x55b4) != (int *)0x0) && (DAT_98077a54 == 0)) {
    (**(code **)(**(int **)(iVar3 + 0x55b4) + 0x18))();
  }
  if (*(code **)(iVar3 + 0x5cd8) != (code *)0x0) {
    (**(code **)(iVar3 + 0x5cd8))(1,&stack0x0000001c,&stack0x00000024,0);
  }
  uVar8 = *(uint *)(iVar3 + 0x2b50);
  uVar7 = *(uint *)(iVar3 + 0x3bc8);
  iVar6 = *(int *)(iVar3 + 0x3bc4);
  FUN_980308e8();
  uVar5 = 0;
  if (uStack00000024 != 0) {
    iVar4 = 0;
    do {
      iVar2 = uVar8 * 4;
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 + 1 & uVar7;
      puVar1 = (undefined4 *)(iVar4 + iStack0000001c);
      iVar4 = iVar4 + 4;
      *(undefined4 *)(iVar2 + iVar6) = *puVar1;
    } while (uVar5 < uStack00000024);
  }
  *(uint *)(iVar3 + 0x2b50) = uVar8;
  if (*(int **)(iVar3 + 0x55b4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 0x55b4) + 0x1c))();
  }
  if (*(code **)(iVar3 + 0x5cd8) != (code *)0x0) {
    (**(code **)(iVar3 + 0x5cd8))(2,0,0,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030ab0 @ 98030ab0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98030ab0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b50) = param_2;
  sync(0);
  _DAT_7fc80714 = param_2;
  enforceInOrderExecutionIO();
  sync(0);
  return;
}


/* ==== FUN_98030ad0 @ 98030ad0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030ad0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030b38 @ 98030b38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030b38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030b90 @ 98030b90 ==== */

void FUN_98030b90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98030c28 @ 98030c28 ==== */

void FUN_98030c28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98030e58 @ 98030e58 ==== */

void FUN_98030e58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98030f28 @ 98030f28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98030f28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98030f88 @ 98030f88 ==== */

void FUN_98030f88(int param_1)

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


/* ==== FUN_98030fd0 @ 98030fd0 ==== */

void FUN_98030fd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98031070 @ 98031070 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031158 @ 98031158 ==== */

void FUN_98031158(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980312c8 @ 980312c8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_980312c8(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar12 = FUN_98044784();
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  puVar5 = (uint *)uVar12;
  uVar10 = *(uint *)(iVar3 + 0x3bc8);
  iVar9 = *(int *)(iVar3 + 0x3bc4);
  bVar2 = *(char *)puVar5 == -0x71;
  if ((*(byte *)(iVar3 + 0x2b3d) & 2) == 0) {
    local_80 = *(uint *)(iVar3 + 0x2b50);
    FUN_980308e8();
    uVar8 = 0;
    uVar7 = local_80;
    if (param_3 != 0) {
      do {
        piVar4 = *(int **)(iVar3 + 0x55b4);
        uVar11 = (puVar5 + uVar8 * 2)[1];
        local_7c = puVar5[uVar8 * 2] & 0xffffff;
        if ((piVar4 != (int *)0x0) && (DAT_98077a54 == 0)) {
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


/* ==== FUN_98031598 @ 98031598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031598(void)

{
  FUN_98044794();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980317a8 @ 980317a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980317a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980318e8 @ 980318e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980318e8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  puVar4 = (uint *)uVar8;
  uVar7 = param_3 >> 0x18 & 0x3f;
  iVar2 = func_0x98058b34();
  piVar6 = DAT_98000438;
  if (iVar2 == 2) {
    piVar6 = DAT_9800043c;
  }
  uVar3 = *(uint *)(*piVar6 + 0x2b14);
  if ((param_3 & 6) == 0) {
    param_3 = param_3 | 6;
  }
  if ((param_3 & 2) != 0) {
    if (((param_3 & 1) == 0) || ((*(byte *)(iVar1 + 0x2b40) & 0x80) != 0)) {
      puVar4[1] = 0x5c8;
      puVar4[2] = 0x20000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_3 & 0x80) == 0) {
      puVar4[1] = 0x1057c;
      puVar4[2] = param_4;
      puVar4 = puVar4 + 3;
      *puVar4 = param_5;
    }
    else {
      puVar4[1] = 0x57c;
      puVar4 = puVar4 + 2;
      *puVar4 = param_4;
    }
    if (uVar7 == 0) {
      uVar7 = 4;
    }
    puVar4[1] = 0x578;
    puVar4[2] = uVar7;
    puVar4[3] = *(uint *)(iVar1 + 0x3324) | 0xc0043c00;
    puVar4[4] = 0x13;
    puVar4[5] = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) | 2;
    puVar4[6] = uVar7;
    puVar4[7] = 0xffffffff;
    puVar5 = puVar4 + 8;
    *puVar5 = 0x100;
    if ((param_3 & 0x80) == 0) {
      puVar4[9] = *(uint *)(iVar1 + 0x3324) | 0xc0043c00;
      puVar4[10] = 0x13;
      puVar4[0xb] = ((uVar3 + 0x14 >> 0x14) + 0x200 & 0x1000) + (uVar3 + 0x14 & 0x1fffffff) | 2;
      puVar4[0xc] = param_5;
      puVar4[0xd] = 0xffffffff;
      puVar5 = puVar4 + 0xe;
      *puVar5 = 0x100;
    }
    puVar5[1] = *(uint *)(iVar1 + 0x3324) | 0xc0043c00;
    puVar5[2] = 0x13;
    puVar5[3] = ((uVar3 + 0x10 >> 0x14) + 0x200 & 0x1000) + (uVar3 + 0x10 & 0x1fffffff) | 2;
    puVar5[4] = param_4;
    puVar5[5] = 0xffffffff;
    puVar5[6] = 0x100;
    puVar5[7] = *(uint *)(iVar1 + 0x3324) | 0xc0005400;
    puVar5[8] = uVar7;
    puVar5[9] = 0x45e;
    puVar4 = puVar5 + 10;
    *puVar4 = uVar7;
  }
  if ((param_3 & 4) != 0) {
    puVar4[1] = *(uint *)(iVar1 + 0x3324) | 0xc0043c00;
    puVar4[2] = 0x13;
    puVar4[3] = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) | 2;
    puVar4[4] = 0;
    puVar4[5] = 0xffffffff;
    puVar4[6] = 0x100;
    puVar4[7] = 0x57c;
    puVar4[8] = 0xbadf00d;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031b68 @ 98031b68 ==== */

void FUN_98031b68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98031c78 @ 98031c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031c78(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_980447a0();
  uVar3 = param_3 * param_4;
  while( true ) {
    uVar2 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2 & ~(param_4 - 1U);
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    FUN_98044240();
    uVar3 = uVar3 - uVar2;
    *(uint *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + uVar2 * 4;
    if (uVar3 == 0) break;
    FUN_98031b68();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031cf8 @ 98031cf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031cf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint *param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_60;
  undefined4 local_5c;
  
  uVar6 = FUN_98044790();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  bVar1 = false;
  local_5c = param_3;
  if (*(int *)(iVar2 + 0x3520) == 0) {
    if (*(int *)(iVar2 + 0x2b90) != 0) {
      uVar3 = func_0x98058b54(iVar2 + 0x2b94);
      if (*(int *)(iVar2 + 0x2b90) != 0) {
        uVar5 = 0x8f000000;
        if (param_7 == 0) {
          uVar5 = 0x81000000;
        }
        *(uint *)(iVar4 + 4) = uVar5 | param_4;
        *(undefined4 *)(iVar4 + 8) = param_3;
        *(undefined4 *)(iVar4 + 0xc) = 0xc0000000;
        FUN_98030fd0();
        bVar1 = true;
        *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5;
      }
      func_0x98058b44(iVar2 + 0x2b94,uVar3);
      if (bVar1) {
        if ((*(byte *)(iVar2 + 0x2b40) & 8) == 0) {
          halt_baddata();
        }
        func_0x98058aa4(iVar2 + 0x5f8c,1,0);
        *(byte *)(iVar2 + 0x2b40) = *(byte *)(iVar2 + 0x2b40) & 0xf7;
        halt_baddata();
      }
    }
    if ((*(int *)(iVar2 + 0x55b4) != 0) || (bVar1 = false, *(int *)(iVar2 + 0x5cd8) != 0)) {
      bVar1 = true;
    }
    if ((((~*(uint *)(iVar2 + 0x5f48) >> 8 & 1) == 0) || (param_7 == 0)) || (!bVar1)) {
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5;
      local_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | param_4 & 0xffffff;
      FUN_980312c8(iVar2,&local_60,1);
    }
    else {
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + param_5 + 1;
      FUN_98043308(iVar2,param_3,param_4,param_6,0x8f000000);
    }
  }
  else {
    local_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | param_4 & 0xffffff;
    FUN_98031c78(iVar2 + 0x35c0,&local_60,1,2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98031ed8 @ 98031ed8 ==== */

void FUN_98031ed8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[5] = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  FUN_98031b68();
  return;
}


/* ==== FUN_98031ef8 @ 98031ef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98031ef8(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_980447a8();
  uVar5 = *(uint *)(iVar1 + 0x3be4);
  iVar3 = *(int *)(iVar1 + 0x30) + 4;
  if ((*(byte *)(iVar1 + 0x2b3d) & 0x20) == 0) {
    if ((*(byte *)(iVar1 + 0x2b3c) & 0x80) == 0) {
      if (*(int *)(iVar1 + 0x3520) == 0) {
        iVar3 = FUN_980317a8();
        iVar3 = FUN_98031cf8(iVar1,iVar3 + 4,
                             ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff),
                             (int)((iVar3 + 4) - uVar5) >> 2,0,(uint *)(iVar1 + 0x35c0),0);
      }
      else {
        uVar4 = (int)(iVar3 - uVar5) >> 2;
        if (uVar4 != 0) {
          puVar2 = *(uint **)(iVar1 + 0x35cc);
          if (*(uint **)(iVar1 + 0x35d0) < puVar2 + 2) {
            puVar2 = (uint *)FUN_98031b68();
          }
          puVar2[1] = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff);
          *puVar2 = uVar4 | 0x81000000;
          *(uint **)(iVar1 + 0x35cc) = puVar2 + 2;
        }
      }
    }
    else if (((*(int *)(iVar1 + 0x3660) != 0) && (*(int *)(*(int *)(iVar1 + 0x3660) + 0x98) == 0))
            && (uVar4 = (int)(iVar3 - uVar5) >> 2, uVar4 != 0)) {
      puVar2 = *(uint **)(iVar1 + 0x3674);
      if (*(uint **)(iVar1 + 0x3678) <= puVar2) {
        puVar2 = (uint *)FUN_98034b70();
      }
      *puVar2 = uVar4 | 0x81000000;
      puVar2[1] = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff);
      *(uint **)(iVar1 + 0x3674) = puVar2 + 2;
    }
  }
  if (*(uint *)(iVar1 + 0x38) < (iVar3 + 0x1fU & 0xffffffe0)) {
    *(int *)(iVar1 + 0x30) = iVar3 + -4;
    FUN_98031158();
  }
  else {
    uVar5 = iVar3 + 0x1fU & 0xffffffe0;
    *(uint *)(iVar1 + 0x3be4) = uVar5;
    *(uint *)(iVar1 + 0x30) = uVar5 - 4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032080 @ 98032080 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032080(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_98044788();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  if (*(int *)(iVar2 + 0x3520) == 0) {
    if (*(int *)(iVar2 + 0x2b90) != 0) {
      iVar3 = FUN_98031070();
      FUN_98044240();
      *(undefined4 *)(param_3 * param_4 * 4 + iVar3 + 4) = 0xc0000000;
      uVar4 = func_0x98058b54(iVar2 + 0x2b94);
      bVar1 = *(int *)(iVar2 + 0x2b90) != 0;
      if (bVar1) {
        FUN_98030fd0();
      }
      func_0x98058b44(iVar2 + 0x2b94,uVar4);
      if (bVar1) {
        if (param_6 == 0) {
          halt_baddata();
        }
        if ((*(byte *)(iVar2 + 0x2b40) & 8) == 0) {
          halt_baddata();
        }
        func_0x98058aa4(iVar2 + 0x5f8c,1,0);
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
      FUN_98031b68();
      FUN_98031c78(iVar2 + 0x35c0,(int)uVar6,param_3,param_4);
      FUN_98030f88(iVar2 + 0x35c0);
      *(int *)(iVar2 + 0x2b90) = *(int *)(iVar2 + 0x2b90) + 1;
      uVar5 = *(uint *)(iVar2 + 0x35c0);
      if (uVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) + -0x40000000;
      }
      func_0x98058bf4(*(int *)(iVar2 + 0x2cc8) * 0x6c + iVar2 + 0x2d58,iVar3,0);
    }
  }
  else {
    FUN_98031c78(iVar2 + 0x35c0,(int)uVar6,param_3,param_4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032238 @ 98032238 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032238(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032340 @ 98032340 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032340(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032408 @ 98032408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032470 @ 98032470 ==== */

void FUN_98032470(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980324e8 @ 980324e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980324e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032560 @ 98032560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032560(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  uVar2 = FUN_980318e8(iVar1,*(uint *)(iVar1 + 0x30),(uint)uVar3,param_3,param_4);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980325b8 @ 980325b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980325b8(void)

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
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 auStack_e0 [8];
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uVar14 = FUN_98044794();
  iVar1 = (int)((ulonglong)uVar14 >> 0x20);
  iVar5 = (int)uVar14;
  if ((*(int *)(iVar1 + 0x2b1c) != 0) && (*(int *)(iVar1 + 0x30) != 0)) {
    FUN_980324e8();
    while (*(int *)(iVar1 + 0x2b74) != *(int *)(iVar1 + 0x2b70)) {
      FUN_980493c0(1);
    }
  }
  uVar6 = *(uint *)(iVar1 + 0x3bcc);
  if (uVar6 != 0) {
    FUN_98043738(((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff) + 0xc0000000,
                 ((*(uint *)(iVar1 + 0x3bd0) >> 0x14) + 0x200 & 0x1000) +
                 (*(uint *)(iVar1 + 0x3bd0) & 0x1fffffff) + -0x40000000);
  }
  FUN_98048ea8(*(int *)(iVar1 + 0x3b88),0xb1800000);
  FUN_98048ea8(*(int *)(iVar1 + 0x3b8c),0xb1800000);
  *(undefined4 *)(iVar1 + 0x3b88) = 0;
  *(undefined4 *)(iVar1 + 0x3b8c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  func_0x98058c44(0);
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
      iVar11 = FUN_98048d70();
      *(int *)(iVar1 + 0x3b88) = iVar11;
    }
    if (iVar13 == 0) {
      iVar13 = FUN_98048d70();
      *(int *)(iVar1 + 0x3b8c) = iVar13;
    }
    if ((iVar11 != 0) && (iVar13 != 0)) {
      uVar2 = func_0x98058c34(iVar11);
      func_0x98058c24(uVar2,0x1c - LZCOUNT(uVar10));
      uVar3 = 0x1f - LZCOUNT(uVar10 >> 9);
      if (0x13 < uVar3) {
        uVar3 = 0x13;
      }
      uVar7 = *(int *)(iVar1 + 0x2b10) + 0x3c;
      func_0x98058c14(((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff),uVar3);
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
      func_0x98058c44(*(int *)(iVar1 + 0x2b10) + 8);
      uStack_e8 = 0;
      iVar5 = 8;
      puVar4 = &uStack_e4;
      uStack_f0 = 0xc0114800;
      uStack_ec = 0x3ff;
      puVar9 = (undefined4 *)&UNK_98003198;
      uStack_e4 = 0;
      do {
        puVar9 = puVar9 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uStack_b8 = 0;
      uStack_b4 = 0;
      *(undefined2 *)(iVar1 + 0x2b2c) = 1;
      *(undefined2 *)(iVar1 + 0x2b2e) = 0x800;
      uStack_be = 0x800;
      uStack_c0 = 1;
      uStack_bc = 7;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      func_0x98058c04(&uStack_f0,0x13);
      FUN_98030998(iVar1,&uStack_f0,0x13);
      uVar6 = *(uint *)(iVar1 + 0x30);
      if (*(uint *)(iVar1 + 0x38) < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
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
      FUN_98032408();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980329a8 @ 980329a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980329a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032a30 @ 98032a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032a30(void)

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
  int iVar10;
  uint *puVar11;
  char acStack_120 [288];
  
  iVar3 = FUN_98044794();
  uVar4 = (**(code **)(iVar3 + 4))(0x5d0);
  bVar2 = false;
  FUN_980329a8();
  iVar8 = 0xb;
  iVar10 = -0x67f8a60c;
  do {
    if ((*(uint *)(iVar10 + -4) & uVar4) != 0) {
      if (bVar2) {
        FUN_980329a8();
      }
      FUN_980329a8();
      bVar2 = true;
    }
    iVar8 = iVar8 + -1;
    iVar10 = iVar10 + 8;
  } while (iVar8 != 0);
  if (!bVar2) {
    FUN_980329a8();
  }
  FUN_980329a8();
  (**(code **)(iVar3 + 8))(0xf11,0);
  FUN_980493c0(1);
  (**(code **)(iVar3 + 4))(0xf12);
  FUN_980329a8();
  iVar10 = 0x1e;
  iVar8 = -0x67f8a5bc;
  do {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar8 + 4));
    iVar8 = iVar8 + 8;
    FUN_980329a8();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  puVar11 = (uint *)0x98075b48;
  iVar8 = 5;
  do {
    FUN_980329a8();
    uVar4 = 0;
    if (*puVar11 != 0) {
      do {
        func_0x98058c74(acStack_120,"%s 0x%02x: ",puVar11[1],uVar4);
        uVar9 = uVar4 + 8;
        while( true ) {
          uVar6 = *puVar11;
          if (uVar9 < *puVar11) {
            uVar6 = uVar9;
          }
          if (uVar6 <= uVar4) break;
          (**(code **)(iVar3 + 8))(puVar11[-4],uVar4 << (puVar11[-1] & 0x3f) | puVar11[-2]);
          FUN_980493c0(1);
          uVar5 = (**(code **)(iVar3 + 4))(puVar11[-3]);
          pcVar7 = acStack_120;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          func_0x98058c74(pcVar7 + (int)(acStack_120 + (-1 - (int)acStack_120)),&UNK_98003418,uVar5)
          ;
          uVar4 = uVar4 + 1;
        }
        FUN_980329a8();
        uVar4 = uVar9;
      } while (uVar9 < *puVar11);
    }
    iVar8 = iVar8 + -1;
    puVar11 = puVar11 + 6;
  } while (iVar8 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032c98 @ 98032c98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032c98(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 undefined4 *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_98044798();
  pcVar1 = (code *)((ulonglong)uVar8 >> 0x20);
  uVar2 = (*pcVar1)(0xc30);
  uVar3 = (*pcVar1)(0xd05);
  (*(code *)uVar8)(0xd05,((uVar2 >> 0x10 & 7) - param_3) * 0x100000 & 0x700000 | uVar3 & 0xff8fffff)
  ;
  if (param_4 <= param_5) {
    iVar6 = (param_4 + 0xc00) * 6;
    iVar5 = (param_5 - param_4) + 1;
    do {
      iVar7 = 6;
      do {
        uVar4 = (*pcVar1)(iVar6);
        *param_6 = uVar4;
        iVar7 = iVar7 + -1;
        param_6 = param_6 + 1;
      } while (iVar7 != 0);
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 6;
    } while (iVar5 != 0);
  }
  (*(code *)uVar8)(0xd05,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032d58 @ 98032d58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032d58(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint extraout_r4;
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_9804479c();
  uVar1 = 0;
  if ((((extraout_r4 & 1) == 0) || ((extraout_r4 & 2) != 0)) || ((extraout_r4 & 0xfffffffc) == 0)) {
    uVar2 = extraout_r4;
    if ((((extraout_r4 & 2) != 0) && ((extraout_r4 & 1) == 0)) && ((extraout_r4 & 0xfffffffc) != 0))
    {
      FUN_980329a8();
      FUN_980329a8();
      uVar2 = 0;
      if (*(int *)(extraout_r4 + 0x7a) != 0) {
        do {
          FUN_980329a8();
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(extraout_r4 + 0x7a));
      }
      goto LAB_98032e64;
    }
  }
  else {
    uVar2 = *(uint *)(extraout_r4 - 1);
    if (uVar2 == 0) {
      FUN_980329a8();
      uVar1 = uVar2;
      goto LAB_98032e64;
    }
  }
  FUN_980329a8();
  uVar1 = uVar2;
LAB_98032e64:
  if ((param_3 == 0) && (uVar1 != 0)) {
    if (*(int *)(uVar1 + 0x98) == 0) {
      FUN_980329a8();
    }
    FUN_980329a8();
    for (piVar3 = *(int **)(uVar1 + 0x74); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      uVar2 = 0;
      if (piVar3[1] != 0) {
        do {
          FUN_980329a8();
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)piVar3[1]);
      }
    }
    if (*(int *)(uVar1 + 0x98) == 0) {
      FUN_980329a8();
      FUN_980329a8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98032f38 @ 98032f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98032f38(void)

{
  FUN_98044770();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980337f8 @ 980337f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980337f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980338b8 @ 980338b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980338b8(int param_1)

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


/* ==== FUN_98033990 @ 98033990 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033990(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033a38 @ 98033a38 ==== */

void FUN_98033a38(undefined4 param_1)

{
  func_0x98058c84(param_1,0);
  if (*DAT_98000438 != 0) {
    FUN_980338b8(*DAT_98000438);
  }
  return;
}


/* ==== FUN_98033a78 @ 98033a78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033a78(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_98044794();
  puVar2 = (undefined4 *)0x980753e0;
  uVar3 = 0;
  do {
    *(undefined4 *)(((uVar3 >> 2) + 0x10) * 4 + iVar1) = puVar2[1];
    *(undefined4 *)(((uVar3 >> 2) + 0x89) * 4 + iVar1) = *puVar2;
    (**(code **)(uVar3 + iVar1 + 0x40))(iVar1,puVar2[2]);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while (uVar3 < 0x194);
  uVar3 = 0;
  puVar2 = (undefined4 *)0x980758a8;
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


/* ==== FUN_98033ce0 @ 98033ce0 ==== */

void FUN_98033ce0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98033d90 @ 98033d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033de8 @ 98033de8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033de8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033e60 @ 98033e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98033ec8 @ 98033ec8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98033ec8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034048 @ 98034048 ==== */

void FUN_98034048(undefined4 param_1)

{
  int iVar1;
  
  func_0x98058c84(param_1,0);
  iVar1 = func_0x98058b34();
  if ((iVar1 != 2) && (*DAT_98000438 != 0)) {
    FUN_98033e60();
  }
  func_0x98058ce4();
  return;
}


/* ==== FUN_98034098 @ 98034098 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034098(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034130 @ 98034130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980341a0 @ 980341a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980341a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980341f0 @ 980341f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980341f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034270 @ 98034270 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034270(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034448 @ 98034448 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034448(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_690;
  undefined4 local_68c;
  float local_67c;
  undefined1 auStack_660 [1632];
  
  uVar12 = FUN_98044790();
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  puVar4 = (undefined4 *)uVar12;
  uVar11 = puVar4[0x10];
  uVar10 = *puVar4;
  uVar9 = puVar4[1];
  uVar7 = puVar4[4];
  uVar5 = puVar4[10];
  uVar8 = puVar4[2];
  if ((uVar11 == 0) || (uVar11 == 0x28280186)) {
    uVar11 = 0x28280000;
  }
  else {
    if (uVar11 != 0x18280186) {
      if (uVar11 == 0x282801b6) {
        uVar11 = 0x28280000;
      }
      else {
        if (uVar11 != 0x182801b6) goto LAB_980344e8;
        uVar11 = 0x18280000;
      }
      uVar11 = uVar11 | 0x136;
      goto LAB_980344e8;
    }
    uVar11 = 0x18280000;
  }
  uVar11 = uVar11 | 0x106;
LAB_980344e8:
  uVar1 = uVar11 & 0x3f;
  if (uVar1 == 0x32) {
    uVar6 = 6;
  }
  else {
    uVar6 = uVar1;
    if (uVar1 == 7) {
      uVar6 = 0x36;
    }
  }
  func_0x98058ac4(&local_690);
  local_67c = local_67c + DAT_98002204;
  *(undefined4 *)(iVar3 + 0x55c0) = local_690;
  *(undefined4 *)(iVar3 + 0x55c8) = local_690;
  *(int *)(iVar3 + 0x55cc) = (int)(longlong)local_67c;
  *(undefined4 *)(iVar3 + 0x55c4) = local_68c;
  if (puVar4[0xf] == 0) {
    iVar2 = FUN_980276e0(uVar10,uVar9,1,1,0,uVar11,0,3);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar3 + 0x3b80) = iVar2;
  }
  if (puVar4[0xe] == 0) {
    iVar2 = FUN_98027800(uVar10,uVar9,uVar8,uVar7,(uint *)0x0);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar3 + 0x3b84) = iVar2;
    FUN_98025748();
  }
  if (puVar4[9] != 0) {
    iVar2 = FUN_98027800(uVar10,uVar9,uVar5,uVar7,(uint *)0x0);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(iVar3 + 0x3b7c) = iVar2;
    FUN_98025ad8();
  }
  FUN_98044240();
  if ((uVar11 & 0x3ffc0000) != 0x24900000) {
    *(uint *)(iVar3 + 0x36bc) = uVar1 | 0x28280100;
  }
  FUN_9803cb18(iVar3,puVar4 + 0x18);
  if ((uVar6 == 7) || (uVar6 == 0x36)) {
    FUN_98035430((int)auStack_660,0);
    FUN_980251e8();
  }
  else {
    FUN_980353e8((int)auStack_660,0);
    FUN_98025118();
  }
  *(undefined4 *)(iVar3 + 0x42dc) = 0xffffffff;
  iVar3 = func_0x98058b34();
  if (iVar3 != 2) {
    if ((puVar4[0xb] & 0x30) == 0) {
      FUN_98033e60();
    }
    else {
      FUN_98033de8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980346c8 @ 980346c8 ==== */

void FUN_980346c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98034948 @ 98034948 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980349b0 @ 980349b0 ==== */

uint FUN_980349b0(int param_1,uint param_2,uint *param_3,int param_4)

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


/* ==== FUN_98034a60 @ 98034a60 ==== */

void FUN_98034a60(int param_1)

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


/* ==== FUN_98034ac0 @ 98034ac0 ==== */

void FUN_98034ac0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98034b70 @ 98034b70 ==== */

void FUN_98034b70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98034c20 @ 98034c20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar2 = func_0x98058b34();
  piVar3 = DAT_98000438;
  if (iVar2 == 2) {
    piVar3 = DAT_9800043c;
  }
  iVar2 = *piVar3;
  func_0x98058ae4(iVar2 + 0x3c10);
  (**(code **)(iVar1 + 0xac))(*(undefined4 *)(iVar1 + 0xa4),(int)uVar4,param_3,param_4);
  func_0x98058ad4(iVar2 + 0x3c10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034ca0 @ 98034ca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034ca0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034d18 @ 98034d18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034d18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98034d70 @ 98034d70 ==== */

void FUN_98034d70(short *param_1,ushort *param_2,int param_3)

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


/* ==== FUN_98034dc0 @ 98034dc0 ==== */

double FUN_98034dc0(double param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  
  if (param_3 == 0) {
    fVar1 = DAT_98004c30;
    if (DAT_98004c38 < param_1) {
      dVar2 = (double)FUN_98043bd0();
      return (double)((float)dVar2 * DAT_98004c24 - DAT_98004c4c);
    }
  }
  else {
    fVar1 = DAT_98004c50;
    if (DAT_98004c58 < param_1) {
      dVar2 = (double)FUN_98043bd0();
      return (double)(float)dVar2;
    }
  }
  return (double)(float)(param_1 * (double)fVar1);
}


/* ==== FUN_98034e70 @ 98034e70 ==== */

double FUN_98034e70(double param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  
  if (param_3 == 0) {
    fVar1 = DAT_980021b4;
    if (DAT_98004c70 <= param_1) {
      dVar2 = (double)FUN_98043bd0();
      return (double)((float)dVar2 * DAT_98004c60 - DAT_98004c84);
    }
  }
  else {
    fVar1 = DAT_98004c88;
    if (DAT_98004c90 <= param_1) {
      dVar2 = (double)FUN_98043bd0();
      return (double)(float)dVar2;
    }
  }
  return (double)(float)(param_1 * (double)fVar1);
}


/* ==== FUN_98034f20 @ 98034f20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98034f20(void)

{
  int iVar1;
  float local_60;
  int local_5c [23];
  
  FUN_980447a8();
  iVar1 = FUN_98044af8();
  func_0x98058d34(local_5c,&local_60);
  iVar1 = (uint)(iVar1 != 0) * 4;
  if ((*(int *)(&DAT_98075bd0 + iVar1) == local_5c[0]) &&
     (*(float *)(&DAT_98077a5c + iVar1) == local_60)) {
    FUN_98044b44();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(float *)(&DAT_98077a5c + iVar1) = local_60;
  *(int *)(&DAT_98075bd0 + iVar1) = local_5c[0];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980350a8 @ 980350a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980350a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035140 @ 98035140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980351c8 @ 980351c8 ==== */

void FUN_980351c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980352b8 @ 980352b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980352b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980353e8 @ 980353e8 ==== */

void FUN_980353e8(int param_1,int param_2)

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
  FUN_980350a8();
  return;
}


/* ==== FUN_98035430 @ 98035430 ==== */

void FUN_98035430(int param_1,int param_2)

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
  FUN_98035140();
  return;
}


/* ==== FUN_98035498 @ 98035498 ==== */

int FUN_98035498(int param_1)

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


/* ==== FUN_980354e0 @ 980354e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980354e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035550 @ 98035550 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035550(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035638 @ 98035638 ==== */

void FUN_98035638(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980356d8 @ 980356d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980356d8(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9804478c();
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  iVar5 = (int)uVar6;
  iVar4 = FUN_98032470();
  bVar2 = *(byte *)(iVar5 + 3);
  *(undefined4 *)(iVar4 + 4) = 0x1e6;
  *(uint *)(iVar4 + 8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 7);
  *(undefined4 *)(iVar4 + 0xc) = 0x395;
  *(uint *)(iVar4 + 0x10) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xb);
  *(undefined4 *)(iVar4 + 0x14) = 0x396;
  *(uint *)(iVar4 + 0x18) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xf);
  *(undefined4 *)(iVar4 + 0x1c) = 0xdc8;
  *(uint *)(iVar4 + 0x20) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x13);
  *(undefined4 *)(iVar4 + 0x24) = 0xdc9;
  *(uint *)(iVar4 + 0x28) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x17);
  *(undefined4 *)(iVar4 + 0x2c) = 0xdca;
  *(uint *)(iVar4 + 0x30) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x1b);
  *(undefined4 *)(iVar4 + 0x34) = 0xdcb;
  *(uint *)(iVar4 + 0x38) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x1f);
  *(undefined4 *)(iVar4 + 0x3c) = 0xc48;
  *(uint *)(iVar4 + 0x40) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x23);
  *(undefined4 *)(iVar4 + 0x44) = 0xc49;
  *(uint *)(iVar4 + 0x48) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x27);
  *(undefined4 *)(iVar4 + 0x4c) = 0xc4a;
  *(uint *)(iVar4 + 0x50) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x2b);
  *(undefined4 *)(iVar4 + 0x54) = 0xc4b;
  *(uint *)(iVar4 + 0x58) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x2f);
  *(undefined4 *)(iVar4 + 0x5c) = 0xe48;
  *(uint *)(iVar4 + 0x60) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x33);
  *(undefined4 *)(iVar4 + 100) = 0xe4b;
  *(uint *)(iVar4 + 0x68) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x37);
  *(undefined4 *)(iVar4 + 0x6c) = 0xe4e;
  *(uint *)(iVar4 + 0x70) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x3b);
  *(undefined4 *)(iVar4 + 0x74) = 0xe51;
  *(uint *)(iVar4 + 0x78) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x3f);
  *(undefined4 *)(iVar4 + 0x7c) = 0xc88;
  *(uint *)(iVar4 + 0x80) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x43);
  *(undefined4 *)(iVar4 + 0x84) = 0xc89;
  *(uint *)(iVar4 + 0x88) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x47);
  *(undefined4 *)(iVar4 + 0x8c) = 0xc8a;
  *(uint *)(iVar4 + 0x90) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x4b);
  *(undefined4 *)(iVar4 + 0x94) = 0xc8b;
  *(uint *)(iVar4 + 0x98) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x4f);
  *(undefined4 *)(iVar4 + 0x9c) = 0xc98;
  *(uint *)(iVar4 + 0xa0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x53);
  *(undefined4 *)(iVar4 + 0xa4) = 0xc99;
  *(uint *)(iVar4 + 0xa8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x57);
  *(undefined4 *)(iVar4 + 0xac) = 0xc9a;
  *(uint *)(iVar4 + 0xb0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x5b);
  *(undefined4 *)(iVar4 + 0xb4) = 0xc9b;
  *(uint *)(iVar4 + 0xb8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x5f);
  *(undefined4 *)(iVar4 + 0xbc) = 0x1004;
  *(uint *)(iVar4 + 0xc0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 99);
  *(undefined4 *)(iVar4 + 0xc4) = 0x1007;
  *(uint *)(iVar4 + 200) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x67);
  *(undefined4 *)(iVar4 + 0xcc) = 0xe05;
  *(uint *)(iVar4 + 0xd0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x6b);
  *(undefined4 *)(iVar4 + 0xd4) = 0xe08;
  *(uint *)(iVar4 + 0xd8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x6f);
  *(undefined4 *)(iVar4 + 0xdc) = 0xe54;
  *(uint *)(iVar4 + 0xe0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x73);
  *(undefined4 *)(iVar4 + 0xe4) = 0xe57;
  *(uint *)(iVar4 + 0xe8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x77);
  *(undefined4 *)(iVar4 + 0xec) = 0xe5a;
  *(uint *)(iVar4 + 0xf0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x7b);
  *(undefined4 *)(iVar4 + 0xf4) = 0xe5d;
  *(uint *)(iVar4 + 0xf8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x7f);
  *(undefined4 *)(iVar4 + 0xfc) = 0xe60;
  *(uint *)(iVar4 + 0x100) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x83);
  *(undefined4 *)(iVar4 + 0x104) = 0xe63;
  *(uint *)(iVar4 + 0x108) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x87);
  *(undefined4 *)(iVar4 + 0x10c) = 0xe66;
  *(uint *)(iVar4 + 0x110) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x8b);
  *(undefined4 *)(iVar4 + 0x114) = 0xe69;
  *(uint *)(iVar4 + 0x118) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x8f);
  *(undefined4 *)(iVar4 + 0x11c) = 0xe6c;
  *(uint *)(iVar4 + 0x120) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x93);
  *(undefined4 *)(iVar4 + 0x124) = 0xe6f;
  *(uint *)(iVar4 + 0x128) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x97);
  *(undefined4 *)(iVar4 + 300) = 0xe72;
  *(uint *)(iVar4 + 0x130) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x9b);
  *(undefined4 *)(iVar4 + 0x134) = 0xe75;
  *(uint *)(iVar4 + 0x138) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0x9f);
  *(undefined4 *)(iVar4 + 0x13c) = 0xe78;
  *(uint *)(iVar4 + 0x140) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xa3);
  *(undefined4 *)(iVar4 + 0x144) = 0xe7b;
  *(uint *)(iVar4 + 0x148) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xa7);
  *(undefined4 *)(iVar4 + 0x14c) = 0xe1f;
  *(uint *)(iVar4 + 0x150) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xab);
  *(undefined4 *)(iVar4 + 0x154) = 0xe22;
  *(uint *)(iVar4 + 0x158) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xaf);
  *(undefined4 *)(iVar4 + 0x15c) = 0xe28;
  *(uint *)(iVar4 + 0x160) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xb3);
  *(undefined4 *)(iVar4 + 0x164) = 0xe2b;
  *(uint *)(iVar4 + 0x168) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xb7);
  *(undefined4 *)(iVar4 + 0x16c) = 0xe31;
  *(uint *)(iVar4 + 0x170) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xbb);
  *(undefined4 *)(iVar4 + 0x174) = 0xe34;
  *(uint *)(iVar4 + 0x178) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xbf);
  *(undefined4 *)(iVar4 + 0x17c) = 0xe3a;
  *(uint *)(iVar4 + 0x180) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xc3);
  *(undefined4 *)(iVar4 + 0x184) = 0xe3d;
  *(uint *)(iVar4 + 0x188) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 199);
  *(undefined4 *)(iVar4 + 0x18c) = 0xdd4;
  *(uint *)(iVar4 + 400) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xcb);
  *(undefined4 *)(iVar4 + 0x194) = 0xf04;
  *(uint *)(iVar4 + 0x198) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xcf);
  *(undefined4 *)(iVar4 + 0x19c) = 0xf05;
  *(uint *)(iVar4 + 0x1a0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xd3);
  *(undefined4 *)(iVar4 + 0x1a4) = 0xf06;
  *(uint *)(iVar4 + 0x1a8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xd7);
  *(undefined4 *)(iVar4 + 0x1ac) = 0xf07;
  *(uint *)(iVar4 + 0x1b0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xdb);
  *(undefined4 *)(iVar4 + 0x1b4) = 0x815;
  *(uint *)(iVar4 + 0x1b8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xdf);
  *(undefined4 *)(iVar4 + 0x1bc) = 0x855;
  *(uint *)(iVar4 + 0x1c0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xe3);
  *(undefined4 *)(iVar4 + 0x1c4) = 0xa18;
  *(uint *)(iVar4 + 0x1c8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xe7);
  *(undefined4 *)(iVar4 + 0x1cc) = 0xa1b;
  *(uint *)(iVar4 + 0x1d0) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xeb);
  *(undefined4 *)(iVar4 + 0x1d4) = 0xa1e;
  *(uint *)(iVar4 + 0x1d8) = (uint)bVar2;
  bVar2 = *(byte *)(iVar5 + 0xef);
  *(undefined4 *)(iVar4 + 0x1dc) = 0x48;
  puVar1 = (uint *)(iVar4 + 0x1e0);
  *puVar1 = (uint)bVar2;
  *(uint **)(iVar3 + 0x30) = puVar1;
  if (*(uint **)(iVar3 + 0x38) < puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(iVar4 + 0x1e4) = 0x1f5;
  *(undefined4 *)(iVar4 + 0x1e8) = 0;
  *(undefined4 *)(iVar4 + 0x1ec) = 0x21f9;
  *(undefined4 *)(iVar4 + 0x1f0) = 0x17;
  *(undefined4 *)(iVar4 + 500) = 0x1f5;
  *(undefined4 *)(iVar4 + 0x1f8) = 1;
  *(undefined4 **)(iVar3 + 0x30) = (undefined4 *)(iVar4 + 0x1f8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035ce0 @ 98035ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035ce0(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035cf8 @ 98035cf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035cf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035d40 @ 98035d40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98035d88 @ 98035d88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98035d88(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_9804478c();
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = (int)uVar6;
  if (*(int *)(iVar4 + 0xc) != 0) {
    FUN_98030f28();
  }
  if (((param_3 & 1) != 0) || ((*(byte *)(iVar1 + 0x2b40) & 0x80) != 0)) {
    FUN_980222a8();
  }
  if ((param_3 & 4) != 0) {
    uVar2 = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar2 + 4) = 0xc0002600;
    *(undefined4 *)(uVar2 + 8) = 0;
    *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 8);
  }
  uVar5 = *(uint *)(iVar4 + 4);
  iVar3 = FUN_98032470();
  uVar2 = param_3 >> 1 & 1 | 0xc0013e00;
  *(uint *)(iVar3 + 4) = uVar2;
  *(undefined4 *)(iVar3 + 8) = 0x1e7;
  *(uint *)(iVar3 + 0xc) = ((uVar5 + 4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x10) = uVar2;
  *(undefined4 *)(iVar3 + 0x14) = 0x1e8;
  *(uint *)(iVar3 + 0x18) = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1c) = uVar2;
  *(undefined4 *)(iVar3 + 0x20) = 0x397;
  *(uint *)(iVar3 + 0x24) =
       ((uVar5 + 0xc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x28) = uVar2;
  *(undefined4 *)(iVar3 + 0x2c) = 0x398;
  *(uint *)(iVar3 + 0x30) = ((uVar5 + 8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x34) = uVar2;
  *(undefined4 *)(iVar3 + 0x38) = 0x399;
  *(uint *)(iVar3 + 0x3c) =
       ((uVar5 + 0x14 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x14 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x40) = uVar2;
  *(undefined4 *)(iVar3 + 0x44) = 0x39a;
  *(uint *)(iVar3 + 0x48) =
       ((uVar5 + 0x10 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x10 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4c) = uVar2;
  *(undefined4 *)(iVar3 + 0x50) = 0xdcc;
  *(uint *)(iVar3 + 0x54) =
       ((uVar5 + 0x1c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x58) = uVar2;
  *(undefined4 *)(iVar3 + 0x5c) = 0xdcd;
  *(uint *)(iVar3 + 0x60) =
       ((uVar5 + 0x18 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x18 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 100) = uVar2;
  *(undefined4 *)(iVar3 + 0x68) = 0xdce;
  *(uint *)(iVar3 + 0x6c) =
       ((uVar5 + 0x24 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x24 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x70) = uVar2;
  *(undefined4 *)(iVar3 + 0x74) = 0xdcf;
  *(uint *)(iVar3 + 0x78) =
       ((uVar5 + 0x20 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x20 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x7c) = uVar2;
  *(undefined4 *)(iVar3 + 0x80) = 0xdd0;
  *(uint *)(iVar3 + 0x84) =
       ((uVar5 + 0x2c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x2c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x88) = uVar2;
  *(undefined4 *)(iVar3 + 0x8c) = 0xdd1;
  *(uint *)(iVar3 + 0x90) =
       ((uVar5 + 0x28 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x28 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x94) = uVar2;
  *(undefined4 *)(iVar3 + 0x98) = 0xdd2;
  *(uint *)(iVar3 + 0x9c) =
       ((uVar5 + 0x34 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x34 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xa0) = uVar2;
  *(undefined4 *)(iVar3 + 0xa4) = 0xdd3;
  *(uint *)(iVar3 + 0xa8) =
       ((uVar5 + 0x30 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x30 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xac) = uVar2;
  *(undefined4 *)(iVar3 + 0xb0) = 0xc4c;
  *(uint *)(iVar3 + 0xb4) =
       ((uVar5 + 0x3c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x3c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xb8) = uVar2;
  *(undefined4 *)(iVar3 + 0xbc) = 0xc4d;
  *(uint *)(iVar3 + 0xc0) =
       ((uVar5 + 0x38 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x38 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xc4) = uVar2;
  *(undefined4 *)(iVar3 + 200) = 0xc4e;
  *(uint *)(iVar3 + 0xcc) =
       ((uVar5 + 0x44 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x44 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xd0) = uVar2;
  *(undefined4 *)(iVar3 + 0xd4) = 0xc4f;
  *(uint *)(iVar3 + 0xd8) =
       ((uVar5 + 0x40 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x40 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xdc) = uVar2;
  *(undefined4 *)(iVar3 + 0xe0) = 0xc50;
  *(uint *)(iVar3 + 0xe4) =
       ((uVar5 + 0x4c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x4c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xe8) = uVar2;
  *(undefined4 *)(iVar3 + 0xec) = 0xc51;
  *(uint *)(iVar3 + 0xf0) =
       ((uVar5 + 0x48 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x48 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0xf4) = uVar2;
  *(undefined4 *)(iVar3 + 0xf8) = 0xc52;
  *(uint *)(iVar3 + 0xfc) =
       ((uVar5 + 0x54 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x54 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x100) = uVar2;
  *(undefined4 *)(iVar3 + 0x104) = 0xc53;
  *(uint *)(iVar3 + 0x108) =
       ((uVar5 + 0x50 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x50 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x10c) = uVar2;
  *(undefined4 *)(iVar3 + 0x110) = 0xe4a;
  *(uint *)(iVar3 + 0x114) =
       ((uVar5 + 0x5c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x5c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x118) = uVar2;
  *(undefined4 *)(iVar3 + 0x11c) = 0xe49;
  *(uint *)(iVar3 + 0x120) =
       ((uVar5 + 0x58 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x58 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x124) = uVar2;
  *(undefined4 *)(iVar3 + 0x128) = 0xe4d;
  *(uint *)(iVar3 + 300) = ((uVar5 + 100 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 100 & 0x1fffffff) | 2
  ;
  *(uint *)(iVar3 + 0x130) = uVar2;
  *(undefined4 *)(iVar3 + 0x134) = 0xe4c;
  *(uint *)(iVar3 + 0x138) =
       ((uVar5 + 0x60 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x60 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x13c) = uVar2;
  *(undefined4 *)(iVar3 + 0x140) = 0xe50;
  *(uint *)(iVar3 + 0x144) =
       ((uVar5 + 0x6c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x6c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x148) = uVar2;
  *(undefined4 *)(iVar3 + 0x14c) = 0xe4f;
  *(uint *)(iVar3 + 0x150) =
       ((uVar5 + 0x68 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x68 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x154) = uVar2;
  *(undefined4 *)(iVar3 + 0x158) = 0xe53;
  *(uint *)(iVar3 + 0x15c) =
       ((uVar5 + 0x74 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x74 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x160) = uVar2;
  *(undefined4 *)(iVar3 + 0x164) = 0xe52;
  *(uint *)(iVar3 + 0x168) =
       ((uVar5 + 0x70 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x70 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x16c) = uVar2;
  *(undefined4 *)(iVar3 + 0x170) = 0xc8c;
  *(uint *)(iVar3 + 0x174) =
       ((uVar5 + 0x7c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x7c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x178) = uVar2;
  *(undefined4 *)(iVar3 + 0x17c) = 0xc8d;
  *(uint *)(iVar3 + 0x180) =
       ((uVar5 + 0x78 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x78 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x184) = uVar2;
  *(undefined4 *)(iVar3 + 0x188) = 0xc8e;
  *(uint *)(iVar3 + 0x18c) =
       ((uVar5 + 0x84 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x84 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 400) = uVar2;
  *(undefined4 *)(iVar3 + 0x194) = 0xc8f;
  *(uint *)(iVar3 + 0x198) =
       ((uVar5 + 0x80 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x80 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x19c) = uVar2;
  *(undefined4 *)(iVar3 + 0x1a0) = 0xc90;
  *(uint *)(iVar3 + 0x1a4) =
       ((uVar5 + 0x8c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x8c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1a8) = uVar2;
  *(undefined4 *)(iVar3 + 0x1ac) = 0xc91;
  *(uint *)(iVar3 + 0x1b0) =
       ((uVar5 + 0x88 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x88 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1b4) = uVar2;
  *(undefined4 *)(iVar3 + 0x1b8) = 0xc92;
  *(uint *)(iVar3 + 0x1bc) =
       ((uVar5 + 0x94 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x94 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1c0) = uVar2;
  *(undefined4 *)(iVar3 + 0x1c4) = 0xc93;
  *(uint *)(iVar3 + 0x1c8) =
       ((uVar5 + 0x90 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x90 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1cc) = uVar2;
  *(undefined4 *)(iVar3 + 0x1d0) = 0xc9c;
  *(uint *)(iVar3 + 0x1d4) =
       ((uVar5 + 0x9c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x9c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1d8) = uVar2;
  *(undefined4 *)(iVar3 + 0x1dc) = 0xc9d;
  *(uint *)(iVar3 + 0x1e0) =
       ((uVar5 + 0x98 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x98 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1e4) = uVar2;
  *(undefined4 *)(iVar3 + 0x1e8) = 0xc9e;
  *(uint *)(iVar3 + 0x1ec) =
       ((uVar5 + 0xa4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xa4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1f0) = uVar2;
  *(undefined4 *)(iVar3 + 500) = 0xc9f;
  *(uint *)(iVar3 + 0x1f8) =
       ((uVar5 + 0xa0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xa0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x1fc) = uVar2;
  *(undefined4 *)(iVar3 + 0x200) = 0xca0;
  *(uint *)(iVar3 + 0x204) =
       ((uVar5 + 0xac >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xac & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x208) = uVar2;
  *(undefined4 *)(iVar3 + 0x20c) = 0xca1;
  *(uint *)(iVar3 + 0x210) =
       ((uVar5 + 0xa8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xa8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x214) = uVar2;
  *(undefined4 *)(iVar3 + 0x218) = 0xca2;
  *(uint *)(iVar3 + 0x21c) =
       ((uVar5 + 0xb4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xb4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x220) = uVar2;
  *(undefined4 *)(iVar3 + 0x224) = 0xca3;
  *(uint *)(iVar3 + 0x228) =
       ((uVar5 + 0xb0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xb0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x22c) = uVar2;
  *(undefined4 *)(iVar3 + 0x230) = 0x1006;
  *(uint *)(iVar3 + 0x234) =
       ((uVar5 + 0xbc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xbc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x238) = uVar2;
  *(undefined4 *)(iVar3 + 0x23c) = 0x1005;
  *(uint *)(iVar3 + 0x240) =
       ((uVar5 + 0xb8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xb8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x244) = uVar2;
  *(undefined4 *)(iVar3 + 0x248) = 0x1009;
  *(uint *)(iVar3 + 0x24c) =
       ((uVar5 + 0xc4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xc4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x250) = uVar2;
  *(undefined4 *)(iVar3 + 0x254) = 0x1008;
  *(uint *)(iVar3 + 600) =
       ((uVar5 + 0xc0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xc0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x25c) = uVar2;
  *(undefined4 *)(iVar3 + 0x260) = 0xe07;
  *(uint *)(iVar3 + 0x264) =
       ((uVar5 + 0xcc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xcc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x268) = uVar2;
  *(undefined4 *)(iVar3 + 0x26c) = 0xe06;
  *(uint *)(iVar3 + 0x270) =
       ((uVar5 + 200 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 200 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x274) = uVar2;
  *(undefined4 *)(iVar3 + 0x278) = 0xe0a;
  *(uint *)(iVar3 + 0x27c) =
       ((uVar5 + 0xd4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xd4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x280) = uVar2;
  *(undefined4 *)(iVar3 + 0x284) = 0xe09;
  *(uint *)(iVar3 + 0x288) =
       ((uVar5 + 0xd0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xd0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x28c) = uVar2;
  *(undefined4 *)(iVar3 + 0x290) = 0xe56;
  *(uint *)(iVar3 + 0x294) =
       ((uVar5 + 0xdc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xdc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x298) = uVar2;
  *(undefined4 *)(iVar3 + 0x29c) = 0xe55;
  *(uint *)(iVar3 + 0x2a0) =
       ((uVar5 + 0xd8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xd8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2a4) = uVar2;
  *(undefined4 *)(iVar3 + 0x2a8) = 0xe59;
  *(uint *)(iVar3 + 0x2ac) =
       ((uVar5 + 0xe4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xe4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2b0) = uVar2;
  *(undefined4 *)(iVar3 + 0x2b4) = 0xe58;
  *(uint *)(iVar3 + 0x2b8) =
       ((uVar5 + 0xe0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xe0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 700) = uVar2;
  *(undefined4 *)(iVar3 + 0x2c0) = 0xe5c;
  *(uint *)(iVar3 + 0x2c4) =
       ((uVar5 + 0xec >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xec & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2c8) = uVar2;
  *(undefined4 *)(iVar3 + 0x2cc) = 0xe5b;
  *(uint *)(iVar3 + 0x2d0) =
       ((uVar5 + 0xe8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xe8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2d4) = uVar2;
  *(undefined4 *)(iVar3 + 0x2d8) = 0xe5f;
  *(uint *)(iVar3 + 0x2dc) =
       ((uVar5 + 0xf4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xf4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2e0) = uVar2;
  *(undefined4 *)(iVar3 + 0x2e4) = 0xe5e;
  *(uint *)(iVar3 + 0x2e8) =
       ((uVar5 + 0xf0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xf0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2ec) = uVar2;
  *(undefined4 *)(iVar3 + 0x2f0) = 0xe62;
  *(uint *)(iVar3 + 0x2f4) =
       ((uVar5 + 0xfc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xfc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x2f8) = uVar2;
  *(undefined4 *)(iVar3 + 0x2fc) = 0xe61;
  *(uint *)(iVar3 + 0x300) =
       ((uVar5 + 0xf8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0xf8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x304) = uVar2;
  *(undefined4 *)(iVar3 + 0x308) = 0xe65;
  *(uint *)(iVar3 + 0x30c) =
       ((uVar5 + 0x104 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x104 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x310) = uVar2;
  *(undefined4 *)(iVar3 + 0x314) = 0xe64;
  *(uint *)(iVar3 + 0x318) =
       ((uVar5 + 0x100 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x100 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x31c) = uVar2;
  *(undefined4 *)(iVar3 + 800) = 0xe68;
  *(uint *)(iVar3 + 0x324) =
       ((uVar5 + 0x10c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x10c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x328) = uVar2;
  *(undefined4 *)(iVar3 + 0x32c) = 0xe67;
  *(uint *)(iVar3 + 0x330) =
       ((uVar5 + 0x108 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x108 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x334) = uVar2;
  *(undefined4 *)(iVar3 + 0x338) = 0xe6b;
  *(uint *)(iVar3 + 0x33c) =
       ((uVar5 + 0x114 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x114 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x340) = uVar2;
  *(undefined4 *)(iVar3 + 0x344) = 0xe6a;
  *(uint *)(iVar3 + 0x348) =
       ((uVar5 + 0x110 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x110 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x34c) = uVar2;
  *(undefined4 *)(iVar3 + 0x350) = 0xe6e;
  *(uint *)(iVar3 + 0x354) =
       ((uVar5 + 0x11c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x11c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x358) = uVar2;
  *(undefined4 *)(iVar3 + 0x35c) = 0xe6d;
  *(uint *)(iVar3 + 0x360) =
       ((uVar5 + 0x118 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x118 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x364) = uVar2;
  *(undefined4 *)(iVar3 + 0x368) = 0xe71;
  *(uint *)(iVar3 + 0x36c) =
       ((uVar5 + 0x124 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x124 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x370) = uVar2;
  *(undefined4 *)(iVar3 + 0x374) = 0xe70;
  *(uint *)(iVar3 + 0x378) =
       ((uVar5 + 0x120 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x120 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x37c) = uVar2;
  *(undefined4 *)(iVar3 + 0x380) = 0xe74;
  *(uint *)(iVar3 + 900) = ((uVar5 + 300 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 300 & 0x1fffffff) | 2
  ;
  *(uint *)(iVar3 + 0x388) = uVar2;
  *(undefined4 *)(iVar3 + 0x38c) = 0xe73;
  *(uint *)(iVar3 + 0x390) =
       ((uVar5 + 0x128 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x128 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x394) = uVar2;
  *(undefined4 *)(iVar3 + 0x398) = 0xe77;
  *(uint *)(iVar3 + 0x39c) =
       ((uVar5 + 0x134 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x134 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3a0) = uVar2;
  *(undefined4 *)(iVar3 + 0x3a4) = 0xe76;
  *(uint *)(iVar3 + 0x3a8) =
       ((uVar5 + 0x130 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x130 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3ac) = uVar2;
  *(undefined4 *)(iVar3 + 0x3b0) = 0xe7a;
  *(uint *)(iVar3 + 0x3b4) =
       ((uVar5 + 0x13c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x13c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3b8) = uVar2;
  *(undefined4 *)(iVar3 + 0x3bc) = 0xe79;
  *(uint *)(iVar3 + 0x3c0) =
       ((uVar5 + 0x138 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x138 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3c4) = uVar2;
  *(undefined4 *)(iVar3 + 0x3c8) = 0xe7d;
  *(uint *)(iVar3 + 0x3cc) =
       ((uVar5 + 0x144 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x144 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3d0) = uVar2;
  *(undefined4 *)(iVar3 + 0x3d4) = 0xe7c;
  *(uint *)(iVar3 + 0x3d8) =
       ((uVar5 + 0x140 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x140 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3dc) = uVar2;
  *(undefined4 *)(iVar3 + 0x3e0) = 0xe21;
  *(uint *)(iVar3 + 0x3e4) =
       ((uVar5 + 0x14c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x14c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 1000) = uVar2;
  *(undefined4 *)(iVar3 + 0x3ec) = 0xe20;
  *(uint *)(iVar3 + 0x3f0) =
       ((uVar5 + 0x148 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x148 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x3f4) = uVar2;
  *(undefined4 *)(iVar3 + 0x3f8) = 0xe24;
  *(uint *)(iVar3 + 0x3fc) =
       ((uVar5 + 0x154 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x154 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x400) = uVar2;
  *(undefined4 *)(iVar3 + 0x404) = 0xe23;
  *(uint *)(iVar3 + 0x408) =
       ((uVar5 + 0x150 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x150 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x40c) = uVar2;
  *(undefined4 *)(iVar3 + 0x410) = 0xe2a;
  *(uint *)(iVar3 + 0x414) =
       ((uVar5 + 0x15c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x15c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x418) = uVar2;
  *(undefined4 *)(iVar3 + 0x41c) = 0xe29;
  *(uint *)(iVar3 + 0x420) =
       ((uVar5 + 0x158 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x158 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x424) = uVar2;
  *(undefined4 *)(iVar3 + 0x428) = 0xe2d;
  *(uint *)(iVar3 + 0x42c) =
       ((uVar5 + 0x164 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x164 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x430) = uVar2;
  *(undefined4 *)(iVar3 + 0x434) = 0xe2c;
  *(uint *)(iVar3 + 0x438) =
       ((uVar5 + 0x160 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x160 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x43c) = uVar2;
  *(undefined4 *)(iVar3 + 0x440) = 0xe33;
  *(uint *)(iVar3 + 0x444) =
       ((uVar5 + 0x16c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x16c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x448) = uVar2;
  *(undefined4 *)(iVar3 + 0x44c) = 0xe32;
  *(uint *)(iVar3 + 0x450) =
       ((uVar5 + 0x168 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x168 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x454) = uVar2;
  *(undefined4 *)(iVar3 + 0x458) = 0xe36;
  *(uint *)(iVar3 + 0x45c) =
       ((uVar5 + 0x174 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x174 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x460) = uVar2;
  *(undefined4 *)(iVar3 + 0x464) = 0xe35;
  *(uint *)(iVar3 + 0x468) =
       ((uVar5 + 0x170 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x170 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x46c) = uVar2;
  *(undefined4 *)(iVar3 + 0x470) = 0xe3c;
  *(uint *)(iVar3 + 0x474) =
       ((uVar5 + 0x17c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x17c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x478) = uVar2;
  *(undefined4 *)(iVar3 + 0x47c) = 0xe3b;
  *(uint *)(iVar3 + 0x480) =
       ((uVar5 + 0x178 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x178 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x484) = uVar2;
  *(undefined4 *)(iVar3 + 0x488) = 0xe3f;
  *(uint *)(iVar3 + 0x48c) =
       ((uVar5 + 0x184 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x184 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x490) = uVar2;
  *(undefined4 *)(iVar3 + 0x494) = 0xe3e;
  *(uint *)(iVar3 + 0x498) =
       ((uVar5 + 0x180 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x180 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x49c) = uVar2;
  *(undefined4 *)(iVar3 + 0x4a0) = 0xdd8;
  *(uint *)(iVar3 + 0x4a4) =
       ((uVar5 + 0x18c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x18c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4a8) = uVar2;
  *(undefined4 *)(iVar3 + 0x4ac) = 0xdd9;
  *(uint *)(iVar3 + 0x4b0) =
       ((uVar5 + 0x188 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x188 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4b4) = uVar2;
  *(undefined4 *)(iVar3 + 0x4b8) = 0xf08;
  *(uint *)(iVar3 + 0x4bc) =
       ((uVar5 + 0x194 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x194 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4c0) = uVar2;
  *(undefined4 *)(iVar3 + 0x4c4) = 0xf09;
  *(uint *)(iVar3 + 0x4c8) =
       ((uVar5 + 400 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 400 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4cc) = uVar2;
  *(undefined4 *)(iVar3 + 0x4d0) = 0xf0a;
  *(uint *)(iVar3 + 0x4d4) =
       ((uVar5 + 0x19c >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x19c & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4d8) = uVar2;
  *(undefined4 *)(iVar3 + 0x4dc) = 0xf0b;
  *(uint *)(iVar3 + 0x4e0) =
       ((uVar5 + 0x198 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x198 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4e4) = uVar2;
  *(undefined4 *)(iVar3 + 0x4e8) = 0xf0c;
  *(uint *)(iVar3 + 0x4ec) =
       ((uVar5 + 0x1a4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1a4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4f0) = uVar2;
  *(undefined4 *)(iVar3 + 0x4f4) = 0xf0d;
  *(uint *)(iVar3 + 0x4f8) =
       ((uVar5 + 0x1a0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1a0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x4fc) = uVar2;
  *(undefined4 *)(iVar3 + 0x500) = 0xf0e;
  *(uint *)(iVar3 + 0x504) =
       ((uVar5 + 0x1ac >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1ac & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x508) = uVar2;
  *(undefined4 *)(iVar3 + 0x50c) = 0xf0f;
  *(uint *)(iVar3 + 0x510) =
       ((uVar5 + 0x1a8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1a8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x514) = uVar2;
  *(undefined4 *)(iVar3 + 0x518) = 0x817;
  *(uint *)(iVar3 + 0x51c) =
       ((uVar5 + 0x1b4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1b4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x520) = uVar2;
  *(undefined4 *)(iVar3 + 0x524) = 0x816;
  *(uint *)(iVar3 + 0x528) =
       ((uVar5 + 0x1b0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1b0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x52c) = uVar2;
  *(undefined4 *)(iVar3 + 0x530) = 0x857;
  *(uint *)(iVar3 + 0x534) =
       ((uVar5 + 0x1bc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1bc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x538) = uVar2;
  *(undefined4 *)(iVar3 + 0x53c) = 0x856;
  *(uint *)(iVar3 + 0x540) =
       ((uVar5 + 0x1b8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1b8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x544) = uVar2;
  *(undefined4 *)(iVar3 + 0x548) = 0xa1a;
  *(uint *)(iVar3 + 0x54c) =
       ((uVar5 + 0x1c4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1c4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x550) = uVar2;
  *(undefined4 *)(iVar3 + 0x554) = 0xa19;
  *(uint *)(iVar3 + 0x558) =
       ((uVar5 + 0x1c0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1c0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x55c) = uVar2;
  *(undefined4 *)(iVar3 + 0x560) = 0xa1d;
  *(uint *)(iVar3 + 0x564) =
       ((uVar5 + 0x1cc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1cc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x568) = uVar2;
  *(undefined4 *)(iVar3 + 0x56c) = 0xa1c;
  *(uint *)(iVar3 + 0x570) =
       ((uVar5 + 0x1c8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1c8 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x574) = uVar2;
  *(undefined4 *)(iVar3 + 0x578) = 0xa20;
  *(uint *)(iVar3 + 0x57c) =
       ((uVar5 + 0x1d4 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1d4 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x580) = uVar2;
  *(undefined4 *)(iVar3 + 0x584) = 0xa1f;
  *(uint *)(iVar3 + 0x588) =
       ((uVar5 + 0x1d0 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1d0 & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x58c) = uVar2;
  *(undefined4 *)(iVar3 + 0x590) = 0x4a;
  *(uint *)(iVar3 + 0x594) =
       ((uVar5 + 0x1dc >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1dc & 0x1fffffff) | 2;
  *(uint *)(iVar3 + 0x598) = uVar2;
  *(undefined4 *)(iVar3 + 0x59c) = 0x49;
  *(uint *)(iVar3 + 0x5a0) =
       ((uVar5 + 0x1d8 >> 0x14) + 0x200 & 0x1000) + (uVar5 + 0x1d8 & 0x1fffffff) | 2;
  *(uint **)(iVar1 + 0x30) = (uint *)(iVar3 + 0x5a0);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0x2b1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980372d0 @ 980372d0 ==== */

void FUN_980372d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98037340 @ 98037340 ==== */

int FUN_98037340(int param_1,uint *param_2)

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


/* ==== FUN_98037418 @ 98037418 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037418(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037558 @ 98037558 ==== */

void FUN_98037558(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980375a8 @ 980375a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980375a8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_50 [20];
  
  uVar7 = FUN_9804479c();
  iVar2 = DAT_98078a68;
  uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar4 = 0xffffffff;
  if (DAT_98078a68 == 0) {
    iVar2 = FUN_98048d70();
    if (iVar2 != 0) {
      func_0x98058d24(iVar2);
      *(undefined4 *)(iVar2 + 0x1c) = 0x1800;
      *(undefined4 *)(iVar2 + 800) = 0x55555555;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    func_0x98058ae4(DAT_98078a68);
    if (uVar1 <= *(uint *)(iVar2 + 0x1c)) {
      local_50[0] = 0;
      uVar6 = 0;
      uVar5 = 0xffffffff;
      uVar3 = FUN_98037340(iVar2,local_50);
      if (uVar3 != 0) {
        do {
          if ((uVar1 <= uVar3) && (uVar3 < uVar5)) {
            uVar5 = uVar3;
            uVar6 = local_50[0];
          }
          local_50[0] = uVar3 + local_50[0];
          uVar3 = FUN_98037340(iVar2,local_50);
        } while (uVar3 != 0);
        if (uVar5 != 0xffffffff) {
          *(uint *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) - uVar1;
          FUN_98037418();
          uVar4 = uVar6;
        }
      }
    }
    func_0x98058ad4(iVar2);
    *(uint *)uVar7 = uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037718 @ 98037718 ==== */

void FUN_98037718(int param_1,int param_2)

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


/* ==== FUN_98037788 @ 98037788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980377e0 @ 980377e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980377e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980378d0 @ 980378d0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_980378d0(undefined4 param_1,int *param_2)

{
  if ((*param_2 != 0) && (*param_2 != 1)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037a00 @ 98037a00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037a00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037a70 @ 98037a70 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_98037a70(int param_1,int param_2)

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


/* ==== FUN_98037b78 @ 98037b78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037b78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037c10 @ 98037c10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037c10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037c68 @ 98037c68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037c68(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_980447a4();
  iVar2 = FUN_98032470();
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 4) = (param_3 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    *(undefined4 *)(iVar2 + 8) = param_4;
    *(uint *)(iVar2 + 0xc) = param_3 & 0x3fff;
    FUN_98044240();
    *(uint **)(iVar1 + 0x30) = (uint *)(iVar2 + 0xc) + param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037ce8 @ 98037ce8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037ce8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_r6;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_9804479c();
  uVar4 = (uint)uVar8;
  uVar2 = uVar4 & 0xfffffffc;
  uVar5 = uVar4 - uVar2;
  iVar1 = ((uVar4 + in_r6 + 3 & 0xfffffffc) - uVar2) * 4;
  iVar6 = iVar1 + in_r6 * -4 + uVar5 * -4;
  iVar3 = FUN_98032470();
  if (iVar3 != 0) {
    puVar7 = (uint *)(iVar3 + 4);
    *puVar7 = (uVar2 + 0x1000) * 4 | (iVar1 + -1) * 0x10000;
    if ((uVar5 & 0x3fffffff) != 0) {
      FUN_980441a0((uint *)(iVar3 + 8),0,uVar5 * 0x10);
      puVar7 = puVar7 + uVar5 * 4;
    }
    FUN_98044240();
    puVar7 = puVar7 + in_r6 * 4;
    if (iVar6 != 0) {
      FUN_980441a0(puVar7 + 1,0,iVar6 * 4);
      puVar7 = puVar7 + iVar6;
    }
    *(uint **)((int)((ulonglong)uVar8 >> 0x20) + 0x30) = puVar7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037dc0 @ 98037dc0 ==== */

void FUN_98037dc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98037e80 @ 98037e80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037e80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037ee8 @ 98037ee8 ==== */

void FUN_98037ee8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98037f40 @ 98037f40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037f40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98037f88 @ 98037f88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98037f88(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_980447a0();
  uVar3 = *(uint *)(iVar2 + 0x30);
  if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 4) = 0x22100;
  *(undefined4 *)(uVar3 + 8) = 0xffff;
  *(undefined4 *)(uVar3 + 0xc) = 0;
  *(undefined4 *)(uVar3 + 0x10) = 0;
  *(undefined4 *)(uVar3 + 0x14) = 0x2293;
  *(undefined4 *)(uVar3 + 0x18) = 0;
  *(undefined4 *)(uVar3 + 0x1c) = 0x22204;
  *(undefined4 *)(uVar3 + 0x20) = 0x10000;
  *(undefined4 *)(uVar3 + 0x24) = 0x10000;
  *(undefined4 *)(uVar3 + 0x28) = 0x300;
  *(undefined4 *)(uVar3 + 0x2c) = 0x2312;
  *(undefined4 *)(uVar3 + 0x30) = 0xffff;
  *(undefined4 *)(uVar3 + 0x34) = 0x200d;
  puVar1 = (undefined4 *)(uVar3 + 0x38);
  *puVar1 = 0;
  *(undefined4 **)(iVar2 + 0x30) = puVar1;
  if (*(undefined4 **)(iVar2 + 0x38) < puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar3 + 0x3c) = 0x2104;
  *(undefined4 *)(uVar3 + 0x40) = 0xffff;
  *(undefined4 *)(uVar3 + 0x44) = 0x2202;
  *(undefined4 *)(uVar3 + 0x48) = 0;
  *(undefined4 *)(uVar3 + 0x4c) = 0x2201;
  *(undefined4 *)(uVar3 + 0x50) = 0x10001;
  *(undefined4 *)(uVar3 + 0x54) = 0x2302;
  *(undefined4 *)(uVar3 + 0x58) = 1;
  *(undefined4 *)(uVar3 + 0x5c) = 0x2200;
  *(undefined4 *)(uVar3 + 0x60) = 0;
  *(undefined4 *)(uVar3 + 100) = 0x2208;
  *(undefined4 *)(uVar3 + 0x68) = 4;
  *(undefined4 *)(uVar3 + 0x6c) = 0x2203;
  *(undefined4 *)(uVar3 + 0x70) = 0;
  *(undefined4 *)(uVar3 + 0x74) = 0x2182;
  *(undefined4 *)(uVar3 + 0x78) = 0xffffffff;
  *(undefined4 **)(iVar2 + 0x30) = (undefined4 *)(uVar3 + 0x78);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038180 @ 98038180 ==== */

void FUN_98038180(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98038290 @ 98038290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038290(void)

{
  FUN_980447a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980386e0 @ 980386e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980386e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038da8 @ 98038da8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038da8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038ea8 @ 98038ea8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98038ea8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98038f60 @ 98038f60 ==== */

void FUN_98038f60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98039000 @ 98039000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98039000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039040 @ 98039040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98039040(void)

{
  FUN_98044784();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980397f8 @ 980397f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980397f8(void)

{
  FUN_9804478c();
  FUN_98044af8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039c90 @ 98039c90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98039c90(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint auStack_ccc [819];
  
  uVar3 = FUN_98044788();
  iVar1 = (int)(uVar3 >> 0x20);
  *(int *)(iVar1 + 0x5ccc) = *(int *)(iVar1 + 0x5ccc) + 1;
  if ((uVar3 & 1) != 0) {
    FUN_98037788();
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  iVar2 = (((uint)(*param_3 + param_5) >> 0x14) + 0x200 & 0x1000) +
          (*param_3 + param_5 & 0x1fffffffU);
  if ((((*(int *)(iVar2 + -0x3ffffffc) == 0) && (*(uint *)(iVar2 + -0x3ffffff8) < 3)) &&
      (*(uint *)(iVar2 + -0x3ffffff0) <= *(uint *)(iVar1 + 0x564c))) &&
     (*(uint *)(iVar2 + -0x3fffffec) <= *(uint *)(iVar1 + 0x5650))) {
    FUN_980441a0(auStack_ccc,0,0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_98043738(iVar2 + 0xc0000000,iVar2 + -0x3ffff9dc);
  *(int *)(iVar1 + 0x5ccc) = *(int *)(iVar1 + 0x5ccc) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98039fe0 @ 98039fe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98039fe0(void)

{
  uint auStack_47c [247];
  
  FUN_98044778();
  FUN_980441a0(auStack_47c,0,0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803a6f8 @ 9803a6f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803a6f8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 in_stack_00000054;
  int local_70;
  uint auStack_6c [5];
  uint local_58;
  
  uVar3 = FUN_98044798();
  iVar1 = (int)(uVar3 >> 0x20);
  *(undefined4 *)(iVar1 + 0x5648) = param_5;
  *(undefined4 *)(iVar1 + 0x564c) = param_6;
  *(undefined4 *)(iVar1 + 0x5650) = param_7;
  *(undefined4 *)(iVar1 + 0x5654) = param_4;
  *(undefined4 *)(iVar1 + 0x5658) = param_8;
  *(undefined4 *)(iVar1 + 0x565c) = in_stack_00000054;
  if ((uVar3 & 8) != 0) {
    func_0x98058ac4(iVar1 + 0x5660);
  }
  if ((*(uint *)(iVar1 + 0x55b8) & 0x40000000) != 0) {
    if ((param_3 == 0) && ((*(byte *)(iVar1 + 0x2b3d) & 2) == 0)) {
      local_58 = FUN_98039fe0();
    }
    else {
      FUN_980441a0(auStack_6c,0,0x18);
      local_70 = (param_3 == 0 ^ 1) + 4;
      if (*DAT_98000494 != 0) {
        (**(code **)(*DAT_98000494 + 0x18))(0x5c,&local_70);
      }
    }
    if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    uVar2 = FUN_980318e8(iVar1,*(uint *)(iVar1 + 0x30),0,0x980372e0,local_58);
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803a828 @ 9803a828 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803a828(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803a9a0 @ 9803a9a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803a9a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803aa30 @ 9803aa30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803aa30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ab08 @ 9803ab08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ab08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ada8 @ 9803ada8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ada8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_48;
  int local_44;
  
  uVar7 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  iVar3 = param_4[1];
  iVar4 = *param_4;
  local_48 = param_4[2];
  local_44 = param_4[3];
  if ((((iVar4 == 0) && (local_48 == 0)) && (iVar3 == 0)) && (local_44 == 0)) {
    local_48 = (int)uVar7;
    local_44 = param_3;
  }
  iVar5 = param_4[4];
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar1 + 0x55c0);
  }
  uVar6 = param_4[5];
  if (uVar6 == 0) {
    uVar6 = (uint)(iVar5 * (local_44 - iVar3)) / (uint)(local_48 - iVar4);
    trapWord(6,local_48 - iVar4,0);
    if ((((*(uint *)(iVar1 + 0x36a8) & 1) != 0) || (uVar2 = func_0x98058d54(), (uVar2 & 1) != 0)) ||
       (((uint)(local_44 - iVar3) < uVar6 || (*(uint *)(iVar1 + 0x55c4) < uVar6)))) {
      uVar6 = *(uint *)(iVar1 + 0x55c4);
    }
  }
  FUN_98044240();
  param_5[4] = iVar5;
  param_5[5] = uVar6;
  *param_5 = iVar4;
  param_5[1] = iVar3;
  param_5[2] = local_48;
  param_5[3] = local_44;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803aed0 @ 9803aed0 ==== */

void FUN_9803aed0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


/* ==== FUN_9803af48 @ 9803af48 ==== */

void FUN_9803af48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9803afa8 @ 9803afa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803afa8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803b048 @ 9803b048 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_9803b048(void)

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


/* ==== FUN_9803b130 @ 9803b130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803b130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803b318 @ 9803b318 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9803b5c0) */
/* WARNING: Removing unreachable block (ram,0x9803b6e0) */

void FUN_9803b318(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uStack_384;
  uint local_380 [24];
  int local_320 [11];
  undefined4 uStack_2f4;
  float local_2f0 [12];
  undefined4 local_2c0 [176];
  
  uVar14 = FUN_980447a0();
  fVar3 = DAT_980005ec;
  iVar7 = 0;
  if (0 < (int)(param_3 * param_4)) {
    puVar5 = local_2c0;
    do {
      iVar7 = iVar7 + 1;
      *puVar5 = *(undefined4 *)(((int)((ulonglong)uVar14 >> 0x20) - (int)local_2c0) + (int)puVar5);
      puVar5 = puVar5 + 1;
    } while (iVar7 < (int)(param_3 * param_4));
  }
  if (0 < (int)param_3) {
    puVar5 = &uStack_384;
    for (uVar13 = param_3; uVar13 != 0; uVar13 = uVar13 - 1) {
      puVar5 = puVar5 + 1;
      *puVar5 = 0xffffffff;
    }
  }
  uVar13 = param_3 - 1;
  local_380[((int)param_3 >> 1) + (uint)((int)param_3 < 0 && (param_3 & 1) != 0)] = 0;
  local_380[((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0)] = 0;
  if (param_3 != 2) {
    uVar9 = param_3 + 2;
    uVar13 = param_3 - 3;
    local_380[((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)] = 1;
    local_380[((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0)] = 1;
  }
  if (0 < (int)param_3) {
    puVar10 = local_380;
    uVar13 = param_3;
    do {
      if (*puVar10 == 0xffffffff) {
        *puVar10 = 2;
      }
      puVar10 = puVar10 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (0 < param_4) {
    iVar7 = (int)uVar14;
    iVar12 = param_4;
    do {
      iVar4 = 0x200;
      if (0 < (int)param_3) {
        puVar5 = &uStack_2f4;
        puVar8 = (undefined4 *)((int)local_2c0 + iVar7 + (param_4 * -4 - (int)uVar14));
        do {
          puVar8 = puVar8 + param_4;
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar8;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      do {
        if (0 < (int)param_3) {
          iVar11 = 0;
          uVar13 = param_3;
          do {
            if (fVar3 < ABS(*(float *)((int)local_2f0 + iVar11))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar11 = iVar11 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        iVar4 = iVar4 - (4 >> (local_380[0] & 0x3f));
        local_320[0] = local_320[0] + 1;
      } while (0 < iVar4);
      for (; iVar4 < 0; iVar4 = (4 >> (local_380[0] & 0x3f)) + iVar4) {
        if (0 < (int)param_3) {
          iVar11 = 0;
          uVar13 = param_3;
          do {
            if (fVar3 < ABS(*(float *)((int)local_2f0 + iVar11))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar11 = iVar11 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        local_320[0] = local_320[0] + -1;
      }
      if (0 < (int)param_3) {
        iVar4 = 0;
        piVar6 = (int *)(iVar7 + param_4 * -4);
        uVar13 = param_3;
        do {
          piVar1 = (int *)((int)local_380 + iVar4);
          piVar2 = (int *)((int)local_320 + iVar4);
          iVar4 = iVar4 + 4;
          piVar6 = piVar6 + param_4;
          *piVar6 = *piVar2 << (2U - *piVar1 & 0x3f);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      iVar12 = iVar12 + -1;
      iVar7 = iVar7 + 4;
    } while (iVar12 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803b770 @ 9803b770 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_9803b770(double param_1)

{
  float fVar1;
  
  if (ABS(param_1) < (double)_UNK_98005c04) {
    fVar1 = (float)(param_1 * (double)_UNK_98002924) * (float)(param_1 * (double)_UNK_98002924);
    return (double)((((((fVar1 * _UNK_98005c00 + _UNK_98005bfc) * fVar1 + _UNK_98005bf8) * fVar1 +
                      _UNK_98005bf4) * fVar1 + _UNK_98005bf0) * fVar1 + _UNK_98005bec) * fVar1 +
                   DAT_980021a8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803b918 @ 9803b918 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803b918(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803b9d8 @ 9803b9d8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_9803b9d8(double param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = DAT_980021a8;
  if (param_1 != (double)DAT_980005ec) {
    dVar2 = (double)_UNK_98005bc4;
    dVar3 = (double)FUN_9803b048((double)(float)(param_1 * dVar2));
    fVar1 = (float)(dVar3 / (double)(float)(param_1 * dVar2));
  }
  return (double)fVar1;
}


/* ==== FUN_9803ba30 @ 9803ba30 ==== */

double FUN_9803ba30(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)DAT_980021a8 <= ABS(param_1)) {
    dVar1 = (double)DAT_98002234;
    if (dVar1 <= ABS(param_1)) {
      dVar1 = (double)DAT_980005ec;
    }
    else {
      dVar2 = (double)FUN_9803b130();
      dVar3 = (double)FUN_9803b130();
      dVar1 = (double)(-(float)(ABS(param_1) * (double)DAT_98002a1c -
                               (double)(float)(dVar2 * (double)DAT_98002a00 -
                                              (double)(float)(dVar3 * dVar1))) + DAT_980021b8);
    }
  }
  else {
    dVar1 = (double)FUN_9803b130();
    dVar2 = (double)FUN_9803b130();
    dVar1 = (double)((float)(dVar1 * (double)DAT_98002218 -
                            (double)(float)(dVar2 * (double)DAT_98002a00)) + DAT_980025bc);
  }
  return dVar1;
}


/* ==== FUN_9803bb38 @ 9803bb38 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_9803bb38(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)DAT_980021a8 <= ABS(param_1)) {
    if ((double)DAT_98002234 <= ABS(param_1)) {
      dVar1 = (double)DAT_980005ec;
    }
    else {
      dVar1 = (double)FUN_9803b130();
      dVar3 = (double)DAT_980025d0;
      dVar2 = (double)FUN_9803b130();
      dVar1 = (double)(-(float)(ABS(param_1) * (double)_UNK_9800295c -
                               (double)(float)(dVar1 * (double)_UNK_98002644 -
                                              (double)(float)(dVar2 * dVar3))) + DAT_98002a00);
    }
  }
  else {
    dVar1 = (double)FUN_9803b130();
    dVar2 = (double)FUN_9803b130();
    dVar1 = (double)((float)(dVar1 * (double)_UNK_98002964 -
                            (double)(float)(dVar2 * (double)_UNK_98002644)) + _UNK_980021bc);
  }
  return dVar1;
}


/* ==== FUN_9803bc40 @ 9803bc40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803bc40(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,float *param_7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  
  FUN_9804479c();
  uVar11 = FUN_98044ae4();
  fVar4 = DAT_980021a8;
  fVar3 = DAT_980005ec;
  iVar5 = (int)((ulonglong)uVar11 >> 0x20);
  iVar6 = (int)uVar11;
  uVar8 = iVar6 * param_3;
  if (iVar5 == 1) {
    if (uVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (iVar5 == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar5 == 3) {
      if (uVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (iVar5 == 4) {
      if (uVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (iVar5 == 5) {
      if (uVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((iVar5 == 6) || (iVar5 != 7)) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar8 >> 1;
        pfVar7 = param_7;
        do {
          if ((uVar1 - iVar6 <= uVar9) && (uVar9 < uVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((uVar9 < uVar1 + iVar6) && (uVar1 <= uVar9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *pfVar7 = fVar3;
          uVar9 = uVar9 + 1;
          pfVar7 = pfVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      if (uVar8 != 0) {
        pfVar7 = param_7 + -1;
        for (uVar9 = uVar8; uVar9 != 0; uVar9 = uVar9 - 1) {
          pfVar7 = pfVar7 + 1;
          *pfVar7 = 0.0;
        }
      }
      uVar9 = uVar8 - iVar6 >> 1;
      uVar8 = uVar8 + iVar6 >> 1;
      if (uVar9 < uVar8) {
        pfVar7 = param_7 + (uVar9 - 1);
        do {
          uVar9 = uVar9 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar7 = fVar4;
        } while (uVar9 < uVar8);
      }
    }
  }
  iVar5 = iVar6;
  if (param_4 != 0) {
    *param_7 = fVar3;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (param_3 != 0) {
      pfVar7 = param_7 + -iVar6;
      iVar10 = param_3;
      fVar2 = fVar3;
      do {
        pfVar7 = pfVar7 + iVar6;
        fVar2 = *pfVar7 + fVar2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      pfVar7 = param_7;
      iVar10 = param_3;
      do {
        *pfVar7 = (fVar4 / fVar2) * *pfVar7;
        pfVar7 = pfVar7 + iVar6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    param_7 = param_7 + 1;
  }
  FUN_98044b30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c078 @ 9803c078 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c078(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c358 @ 9803c358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803c358(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5
                 ,uint param_6,int *param_7)

{
  int extraout_r4;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_stack_00000054;
  undefined1 auStack_e0 [8];
  int local_d8;
  
  FUN_98044770();
  func_0x98058ac4(auStack_e0);
  uVar1 = (local_d8 == 0 ^ 1) + 1;
  if ((extraout_r4 == 0) && (param_3 == 0)) {
    param_3 = param_6;
  }
  if (*in_stack_00000054 == 0) {
    if (param_3 >> 0x10 == param_5 >> 0x10) {
      iVar2 = 7;
    }
    else {
      iVar2 = (-(uint)(param_3 >> 0x10 < param_5 >> 0x10) & 0xfffffffc) + 5;
    }
    *in_stack_00000054 = iVar2;
  }
  if (*param_7 == 0) {
    uVar3 = (param_5 & 0xffff) / uVar1;
    trapWord(6,uVar1,0);
    if ((param_3 & 0xffff) == uVar3) {
      iVar2 = (-(uint)(local_d8 != 0) & 0xfffffffe) + 7;
    }
    else {
      iVar2 = (-(uint)((param_3 & 0xffff) < uVar3) & 0xfffffffc) + 5;
    }
    *param_7 = iVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803c8e8 @ 9803c8e8 ==== */

void FUN_9803c8e8(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_92c [3];
  uint local_920;
  uint local_91c;
  int local_918;
  int local_914;
  uint local_910;
  uint local_90c;
  int local_908;
  undefined1 auStack_904 [12];
  undefined4 local_8f8;
  undefined1 auStack_8e0 [2272];
  
  uVar9 = FUN_9804479c();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  FUN_9803ada8(iVar1,(int)uVar9,param_3,param_4,(int *)&local_920);
  uVar7 = *(uint *)(iVar1 + 0x55c8);
  uVar5 = *(uint *)(iVar1 + 0x55c0);
  uVar6 = local_918 - local_920;
  uVar4 = local_920;
  if (uVar7 != uVar5) {
    if ((uVar7 <= local_910) && (local_910 <= uVar5)) {
      local_910 = uVar7;
    }
    if ((uVar7 <= uVar6) && (uVar6 <= uVar5)) {
      uVar4 = uVar5 - local_910 >> 1;
      uVar6 = uVar7;
    }
  }
  uVar8 = (int)uVar9 << 0x10 | param_3 & 0xffff;
  local_92c[0] = local_908;
  uVar5 = (uVar7 - local_910 >> 1) << 0x10 | *(int *)(iVar1 + 0x55c4) - local_90c >> 1 & 0xffff;
  FUN_9803c358(iVar1,uVar4 << 0x10 | local_91c & 0xffff,
               uVar6 << 0x10 | local_914 - local_91c & 0xffff,uVar5,
               local_90c & 0xffff | local_910 << 0x10,uVar8,local_92c);
  func_0x98058d74(auStack_8e0,800,0x80000000);
  iVar2 = FUN_98032470();
  iVar3 = func_0x98058d64(local_920 << 0x10 | local_91c & 0xffff,
                          (local_918 - local_920) * 0x10000 | local_914 - local_91c & 0xffff,uVar5,
                          local_90c & 0xffff | local_910 << 0x10,uVar8,local_92c[0],auStack_904,
                          local_8f8);
  FUN_98044240();
  *(int *)(iVar1 + 0x30) = iVar3 * 4 + iVar2;
                    /* WARNING: Subroutine does not return */
  FUN_98032238();
}


/* ==== FUN_9803ca98 @ 9803ca98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ca98(void)

{
  int iVar1;
  
  iVar1 = FUN_980447a8();
  FUN_98044240();
  *(byte *)(iVar1 + 0x2b3e) = *(byte *)(iVar1 + 0x2b3e) | 0x10;
  FUN_9803af48();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cb18 @ 9803cb18 ==== */

void FUN_9803cb18(undefined4 param_1,undefined4 *param_2)

{
  undefined4 auStack_40 [16];
  
  FUN_9803aed0(param_1,param_2,auStack_40);
  FUN_9803ca98();
  return;
}


/* ==== FUN_9803cb48 @ 9803cb48 ==== */

void FUN_9803cb48(int param_1)

{
  if (*(code **)(param_1 + 0x365c) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x9803cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x365c))();
  return;
}


/* ==== FUN_9803cb60 @ 9803cb60 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_9803cb60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_840 [4];
  undefined1 auStack_830 [2096];
  
  uVar2 = FUN_980447a8();
  func_0x98058db4();
  func_0x98058ae4(DAT_980004e8);
  if (param_3 != 0) {
    func_0x98058da4(0);
  }
  local_840[1] = 0;
  local_840[0] = 0;
  iVar1 = func_0x98058d94((int)uVar2,local_840,0x1000,local_840 + 1,auStack_830,0x800);
  if (iVar1 != 0) {
    if (param_3 == 0) {
      FUN_980324e8();
    }
    do {
      local_840[0] = FUN_98032470();
      local_840[0] = local_840[0] + 4;
      iVar1 = func_0x98058d94((int)uVar2,local_840,0x1000,local_840 + 1,auStack_830,0x800);
      local_840[0] = local_840[0] + -4;
      *(int *)((int)((ulonglong)uVar2 >> 0x20) + 0x30) = local_840[0];
      FUN_980324e8();
    } while (iVar1 != 0);
  }
  func_0x98058ad4(DAT_980004e8);
  func_0x98058d84();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cc48 @ 9803cc48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cc48(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar3 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  iVar2 = (int)uVar3;
  if ((0xf < param_3) && (param_3 < 0x71)) {
    local_64 = *(undefined4 *)(iVar2 + 0x3770);
    local_4c = *(undefined4 *)(iVar2 + 0x3b78);
    local_58 = *(undefined4 *)((param_3 + 0x6ef) * 8 + iVar2);
    local_60 = *(uint *)(iVar2 + 0x376c) & 0xffffff;
    local_70 = 0x57e;
    local_54 = *(uint *)(param_3 * 8 + iVar2 + 0x3774) & 0xffffff;
    local_6c = 0x10019;
    local_48 = *(uint *)(iVar2 + 0x3b74) & 0xffffff;
    local_68 = 0xc0013f00;
    local_5c = 0xc0013f00;
    local_50 = 0xc0013f00;
    local_44 = 0x57e;
    local_40 = 0x1001a;
    if (param_3 != *(uint *)(iVar1 + 0x188)) {
      FUN_98030998(iVar2,&local_70,0xd);
      *(uint *)(iVar1 + 0x188) = param_3;
      *(undefined4 *)(iVar2 + 0x2cf0) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cd28 @ 9803cd28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cd28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803cda0 @ 9803cda0 ==== */

void FUN_9803cda0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_20 = 0xc0013e00;
  local_18 = ((param_2 >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff) | 2;
  local_1c = param_3;
  FUN_98030998(param_1,&local_20,3);
  return;
}


/* ==== FUN_9803cdf8 @ 9803cdf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803cdf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ce68 @ 9803ce68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ce68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ced0 @ 9803ced0 ==== */

void FUN_9803ced0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9803d020 @ 9803d020 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d020(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_98044798();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  if (param_3 == 0) {
    param_3 = 0x400;
  }
  if ((*(int *)(iVar1 + 0x6008) != iVar4) ||
     ((iVar4 != 0 && (*(int *)(iVar1 + 0x5fac) != param_3 + -1)))) {
    if (*(int *)(iVar1 + 0x6010) != 0) {
      FUN_980324e8();
    }
    uVar3 = 0;
    if (*(int *)(iVar1 + 0x6008) != 0) {
      puVar5 = (undefined4 *)(iVar1 + 0x5f90);
      do {
        FUN_98048ea8(puVar5[3],0x24800000);
        puVar5[5] = 0;
        puVar5[3] = 0;
        uVar3 = uVar3 + 1;
        puVar5[6] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5 = puVar5 + 9;
        *puVar5 = 0;
      } while (uVar3 < *(uint *)(iVar1 + 0x6008));
    }
    *(int *)(iVar1 + 0x6008) = iVar4;
    uVar3 = 0;
    *(undefined4 *)(iVar1 + 0x600c) = param_4;
    if (iVar4 != 0) {
      iVar4 = 2;
      piVar6 = (int *)(iVar1 + 0x5f8c);
      do {
        iVar2 = FUN_98048d70();
        piVar6[4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0;
          if (*(int *)(iVar1 + 0x6008) != 0) {
            puVar5 = (undefined4 *)(iVar1 + 0x5f90);
            do {
              FUN_98048ea8(puVar5[3],0x24800000);
              puVar5[5] = 0;
              puVar5[3] = 0;
              uVar3 = uVar3 + 1;
              puVar5[6] = 0;
              puVar5[4] = 0;
              puVar5[7] = 0;
              puVar5[8] = 0;
              puVar5 = puVar5 + 9;
              *puVar5 = 0;
            } while (uVar3 < *(uint *)(iVar1 + 0x6008));
          }
          *(undefined4 *)(iVar1 + 0x6008) = 0;
          *(undefined4 *)(iVar1 + 0x600c) = 0;
          halt_baddata();
        }
        piVar6[5] = 0;
        piVar6[6] = 0;
        uVar3 = uVar3 + 1;
        piVar6[7] = 0;
        piVar6[8] = param_3 + -1;
        piVar6[10] = 0;
        piVar6 = piVar6 + 9;
        *piVar6 = iVar4;
        iVar4 = iVar4 + 2;
      } while (uVar3 < *(uint *)(iVar1 + 0x6008));
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d1a8 @ 9803d1a8 ==== */

void FUN_9803d1a8(int param_1)

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


/* ==== FUN_9803d2f0 @ 9803d2f0 ==== */

undefined4 FUN_9803d2f0(int param_1,int param_2)

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


/* ==== FUN_9803d360 @ 9803d360 ==== */

void FUN_9803d360(undefined4 param_1,uint param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_20 = 0xc0025800;
  local_18 = ((param_2 >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff) | 2;
  local_1c = 0x80000003;
  local_14 = 0xdeadbeef;
  FUN_98030998(param_1,&local_20,4);
  return;
}


/* ==== FUN_9803d3c8 @ 9803d3c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d3c8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
  uVar5 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  uVar3 = (uint)param_4[4] >> 0x17 & 0x7f;
  if ((0xf < uVar3) && (uVar3 < 0x7f)) {
    FUN_9803cc48(iVar1,iVar2,uVar3);
  }
  local_3c = *param_4;
  local_34 = param_4[1];
  local_40 = 0x57b;
  local_38 = 0xc0006300;
  FUN_98030998(iVar2,&local_40,4);
  if (param_4[3] != 0) {
    FUN_9803d360(iVar2,param_4[3]);
  }
  piVar4 = *(int **)(*param_4 + 0x74);
  *(undefined4 *)(iVar2 + 0x2cf0) = 0;
  do {
    FUN_980312c8(iVar2,piVar4 + 2,piVar4[1]);
    piVar4 = (int *)*piVar4;
  } while (piVar4 != (int *)0x0);
  if (param_4[3] != 0) {
    FUN_9803d360(iVar2,param_4[3] + 4);
    *(undefined4 *)(iVar2 + 0x2cf0) = 1;
  }
  iVar2 = (param_3 + 100) * 4;
  *(int *)(iVar2 + iVar1) = *(int *)(iVar2 + iVar1) + 1;
  *(int *)(iVar1 + 0x18c) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d4b8 @ 9803d4b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d4b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  iVar6 = *(int *)(iVar1 + 0x1a0);
  if (iVar6 != param_3) {
    uVar5 = *(uint *)(iVar1 + 0x1a4);
    iVar3 = iVar6 * 0x24 + (int)uVar8;
    do {
      iVar2 = *(int *)(iVar3 + 0x5f9c);
      iVar4 = (*(uint *)(iVar3 + 0x5fac) & uVar5) * 0x1c;
      piVar7 = (int *)(iVar4 + iVar2);
      if (*(int *)(iVar4 + iVar2) != 0) {
        FUN_9803d3c8(iVar1,(int)uVar8,iVar6,piVar7);
      }
      uVar5 = uVar5 + 1;
    } while ((piVar7[6] & 0x20000000U) == 0);
  }
  *(undefined4 *)(iVar1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x19c) = 0;
  FUN_9803cd28();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803d558 @ 9803d558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d558(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

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
  
  uVar12 = FUN_98044788();
  iVar2 = (int)((ulonglong)uVar12 >> 0x20);
  iVar3 = (int)uVar12;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(iVar2 + 0x19c) != 0) {
    FUN_9803d4b8(iVar2,iVar3,param_3);
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
  FUN_98030998(iVar3,&local_c0,9);
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
LAB_9803d6d8:
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
          FUN_98030998(iVar3,&local_90,9);
          local_d0 = *(uint *)(iVar2 + 0x34) & 0xffffff | 0x81000000;
          local_cc = ((*(uint *)(iVar2 + 0x30) >> 0x14) + 0x200 & 0x1000) +
                     (*(uint *)(iVar2 + 0x30) & 0x1fffffff);
          FUN_980312c8(iVar3,&local_d0,1);
          *(undefined4 *)(iVar3 + 0x2cf0) = 0;
          *(int *)(iVar3 + 0x2d2c) = *(int *)(iVar3 + 0x2d2c) + 1;
        }
      }
      else if ((piVar10[4] & 0x40000000U) == 0) {
        if (((piVar10[4] & 0x80000000U) == 0) || (bVar11)) {
          FUN_9803d3c8(iVar2,iVar3,param_3,piVar10);
          iVar8 = iVar8 + 1;
          goto LAB_9803d6d8;
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
        FUN_9803cd28();
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar8;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_9803d810 @ 9803d810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d810(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  uVar11 = FUN_98044790();
  iVar5 = (int)((ulonglong)uVar11 >> 0x20);
  iVar7 = (int)uVar11;
  do {
    bVar2 = false;
    bVar4 = false;
    uVar10 = 0;
    puVar8 = (uint *)(iVar5 + 400);
    piVar9 = (int *)(iVar7 + 0x5fa8);
LAB_9803d844:
    do {
      if (*(int *)(iVar5 + 0x1ac) == 0) {
        uVar6 = FUN_9803d2f0(iVar7,uVar10);
        bVar1 = false;
        if ((uVar6 & 0xff) != 0) goto LAB_9803d868;
      }
      else {
LAB_9803d868:
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
          FUN_9803d558(iVar5,iVar7,uVar10,local_60);
          bVar4 = (bool)(local_60[0] != 0 | bVar4);
          goto LAB_9803d844;
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


/* ==== FUN_9803d918 @ 9803d918 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803d918(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_98044788();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = func_0x98058b34();
  piVar3 = DAT_98000438;
  if (iVar2 == 2) {
    piVar3 = DAT_9800043c;
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


/* ==== FUN_9803dde0 @ 9803dde0 ==== */

undefined4 FUN_9803dde0(int param_1)

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


/* ==== FUN_9803de08 @ 9803de08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803de08(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  char acStack_260 [4];
  char acStack_25c [4];
  char acStack_258 [2];
  uint auStack_256 [13];
  undefined *puStack_220;
  char acStack_21c [4];
  char acStack_218 [4];
  char acStack_214 [4];
  char cStack_210;
  uint auStack_20f [12];
  undefined4 uStack_1dc;
  char acStack_1d8 [4];
  char acStack_1d4 [4];
  char acStack_1d0 [2];
  uint auStack_1ce [13];
  undefined4 uStack_198;
  char acStack_194 [19];
  uint auStack_181 [11];
  undefined4 uStack_154;
  uint auStack_135 [9];
  undefined4 uStack_110;
  uint auStack_f3 [9];
  undefined4 uStack_cc;
  char acStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [4];
  char acStack_bc [2];
  char cStack_ba;
  uint auStack_b9 [12];
  undefined4 uStack_88;
  char acStack_84 [4];
  char acStack_80 [4];
  char acStack_7c [4];
  char cStack_78;
  uint auStack_77 [12];
  undefined4 uStack_44;
  
  uVar8 = FUN_9804479c();
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  acStack_260[0] = s__Connect__98007a38[0];
  acStack_260[1] = s__Connect__98007a38[1];
  acStack_260[2] = s__Connect__98007a38[2];
  acStack_260[3] = s__Connect__98007a38[3];
  acStack_25c[0] = s__Connect__98007a38[4];
  acStack_25c[1] = s__Connect__98007a38[5];
  acStack_25c[2] = s__Connect__98007a38[6];
  acStack_25c[3] = s__Connect__98007a38[7];
  acStack_258[0] = s__Connect__98007a38[8];
  acStack_258[1] = s__Connect__98007a38[9];
  FUN_980441a0(auStack_256,0,0x36);
  puStack_220 = &UNK_9803cea8;
  acStack_21c[0] = s__Disconnect__98007a28[0];
  acStack_21c[1] = s__Disconnect__98007a28[1];
  acStack_21c[2] = s__Disconnect__98007a28[2];
  acStack_21c[3] = s__Disconnect__98007a28[3];
  acStack_218[0] = s__Disconnect__98007a28[4];
  acStack_218[1] = s__Disconnect__98007a28[5];
  acStack_218[2] = s__Disconnect__98007a28[6];
  acStack_218[3] = s__Disconnect__98007a28[7];
  acStack_214[0] = s__Disconnect__98007a28[8];
  acStack_214[1] = s__Disconnect__98007a28[9];
  acStack_214[2] = s__Disconnect__98007a28[10];
  acStack_214[3] = s__Disconnect__98007a28[0xb];
  cStack_210 = s__Disconnect__98007a28[0xc];
  FUN_980441a0(auStack_20f,0,0x33);
  uStack_1dc = 0x9803cec0;
  acStack_1d8[0] = s__Version__98007a1c[0];
  acStack_1d8[1] = s__Version__98007a1c[1];
  acStack_1d8[2] = s__Version__98007a1c[2];
  acStack_1d8[3] = s__Version__98007a1c[3];
  acStack_1d4[0] = s__Version__98007a1c[4];
  acStack_1d4[1] = s__Version__98007a1c[5];
  acStack_1d4[2] = s__Version__98007a1c[6];
  acStack_1d4[3] = s__Version__98007a1c[7];
  acStack_1d0[0] = s__Version__98007a1c[8];
  acStack_1d0[1] = s__Version__98007a1c[9];
  FUN_980441a0(auStack_1ce,0,0x36);
  pcVar5 = (char *)((int)&uStack_198 + 3);
  uStack_198 = 0x9803ced8;
  pcVar4 = "";
  iVar7 = 0x13;
  do {
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
    *pcVar5 = *pcVar4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_980441a0(auStack_181,0,0x2d);
  uStack_154 = 0x9803cf10;
  FUN_98044240();
  FUN_980441a0(auStack_135,0,0x25);
  uStack_110 = 0x9803cf68;
  FUN_98044240();
  FUN_980441a0(auStack_f3,0,0x27);
  uStack_cc = 0x9803cfc8;
  acStack_c8[0] = s__BeginCapture__980079c0[0];
  acStack_c8[1] = s__BeginCapture__980079c0[1];
  acStack_c8[2] = s__BeginCapture__980079c0[2];
  acStack_c8[3] = s__BeginCapture__980079c0[3];
  acStack_c4[0] = s__BeginCapture__980079c0[4];
  acStack_c4[1] = s__BeginCapture__980079c0[5];
  acStack_c4[2] = s__BeginCapture__980079c0[6];
  acStack_c4[3] = s__BeginCapture__980079c0[7];
  acStack_c0[0] = s__BeginCapture__980079c0[8];
  acStack_c0[1] = s__BeginCapture__980079c0[9];
  acStack_c0[2] = s__BeginCapture__980079c0[10];
  acStack_c0[3] = s__BeginCapture__980079c0[0xb];
  acStack_bc[0] = s__BeginCapture__980079c0[0xc];
  acStack_bc[1] = s__BeginCapture__980079c0[0xd];
  cStack_ba = s__BeginCapture__980079c0[0xe];
  FUN_980441a0(auStack_b9,0,0x31);
  uStack_88 = 0x9803cfb0;
  acStack_84[0] = s__EndCapture__980079b0[0];
  acStack_84[1] = s__EndCapture__980079b0[1];
  acStack_84[2] = s__EndCapture__980079b0[2];
  acStack_84[3] = s__EndCapture__980079b0[3];
  acStack_80[0] = s__EndCapture__980079b0[4];
  acStack_80[1] = s__EndCapture__980079b0[5];
  acStack_80[2] = s__EndCapture__980079b0[6];
  acStack_80[3] = s__EndCapture__980079b0[7];
  acStack_7c[0] = s__EndCapture__980079b0[8];
  acStack_7c[1] = s__EndCapture__980079b0[9];
  acStack_7c[2] = s__EndCapture__980079b0[10];
  acStack_7c[3] = s__EndCapture__980079b0[0xb];
  cStack_78 = s__EndCapture__980079b0[0xc];
  FUN_980441a0(auStack_77,0,0x33);
  uVar6 = 0;
  pcVar5 = acStack_260;
  uStack_44 = 0x9803cfc8;
  pcVar4 = pcVar5;
  while( true ) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar7 = FUN_980452f0(iVar2 + 6,pcVar4,pcVar5 + (-1 - (int)pcVar4));
    if (iVar7 == 0) break;
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar4 + 0x44;
    pcVar4 = pcVar5;
    if (7 < uVar6) {
LAB_9803e068:
      puVar3 = &UNK_98005ae0;
LAB_9803e070:
      FUN_98045548((char *)uVar8,(int)puVar3,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar2 = (*(code *)(&puStack_220)[uVar6 * 0x11])(pcVar5 + (-1 - (int)pcVar4) + iVar2 + 7);
  if (iVar2 != 0) {
    puVar3 = &UNK_980079a8;
    goto LAB_9803e070;
  }
  goto LAB_9803e068;
}


/* ==== FUN_9803e0c0 @ 9803e0c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803e0c0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a4();
  uVar2 = 0;
  iVar1 = func_0x98058bc4(2,(int)((ulonglong)uVar3 >> 0x20),0x404,0,0xffffffff,0x1000);
  if (iVar1 == 0) {
    iVar1 = FUN_98048d70();
    if (iVar1 == 0) {
      if ((int)uVar3 != 0) {
        uVar2 = 2;
        iVar1 = (int)uVar3;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  *param_3 = iVar1;
  *param_4 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803e140 @ 9803e140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803e140(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803e248 @ 9803e248 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x9803e5dc) */
/* WARNING: Removing unreachable block (ram,0x9803e43c) */
/* WARNING: Removing unreachable block (ram,0x9803e5d4) */
/* WARNING: Removing unreachable block (ram,0x9803e71c) */
/* WARNING: Removing unreachable block (ram,0x9803e444) */

void FUN_9803e248(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_9804477c();
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


/* ==== FUN_9803e960 @ 9803e960 ==== */

void FUN_9803e960(int param_1,int param_2)

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


/* ==== FUN_9803ea18 @ 9803ea18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ea18(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 local_8bc [3];
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
  
  iVar3 = FUN_98044794();
  bVar2 = *(byte *)(iVar3 + 0x5f3c);
  if ((bVar2 & 0x10) != 0) {
    if (*(int *)(iVar3 + 0x5e48) != 0) {
      if ((bVar2 & 0x80) != 0) {
        if ((bVar2 & 0x40) != 0) {
          FUN_98046858(*(int *)(iVar3 + 0x5e48),0xffffffff);
        }
        FUN_98030f28();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar8 = 0;
      local_8bc[0] = 0;
      if ((*(uint *)(iVar3 + 0x5f30) & 0xfc000) != 0) {
        iVar7 = iVar3 + 0x5cec;
        do {
          if (((*(byte *)(iVar3 + 0x5f3c) & 0x20) == 0) &&
             (uVar5 = *(uint *)(iVar3 + 0x5f30) >> 0x14 & 0x3f, uVar5 <= uVar8)) {
            if (uVar5 < uVar8) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + 0x5e58);
            }
          }
          else {
            uVar4 = *(undefined4 *)(iVar7 + 0xa8);
          }
          FUN_98049860(*(undefined4 *)(iVar7 + 4),uVar4,(int)local_8bc);
          iVar7 = iVar7 + 4;
          FUN_980497b8();
          uVar8 = uVar8 + 1;
        } while (uVar8 < (*(uint *)(iVar3 + 0x5f30) >> 0xe & 0x3f));
      }
      func_0x98058cb4(auStack_8b0);
      iVar7 = *(int *)(iVar3 + 0x5f38) >> 0x1d;
      if (iVar7 == 0) {
        local_850 = 0x53a722b4;
      }
      else if (iVar7 == 1) {
        local_850 = 0x53a722b5;
      }
      else if (iVar7 == 2) {
        local_850 = 0x53a722b6;
      }
      local_84c = 0x10001;
      if ((iVar7 == 0) || (iVar7 == 1)) {
        local_840 = (uint)*(ushort *)(iVar3 + 0x5e4c);
        local_83c = (uint)*(ushort *)(iVar3 + 0x5e4e);
        local_838 = (uint)local_868;
        local_834 = (uint)local_866;
      }
      else if (iVar7 == 2) {
        local_840 = 400;
        local_83c = 0xe0;
        local_838 = 400;
        local_834 = 0xe0;
      }
      local_830 = func_0x98058b64();
      bVar1 = (*(uint *)(iVar3 + 0x5f30) >> 0x1a & 1) != 0;
      local_82c = (uint)bVar1;
      if ((*(uint *)(iVar3 + 0x5f30) >> 0x1a & 2) != 0) {
        local_82c = bVar1 | 2;
      }
      if (local_8ab == '\x01') {
        local_82c = local_82c | 4;
        FUN_98035140();
      }
      else {
        FUN_980350a8();
      }
      uVar8 = *(uint *)(iVar3 + 0x5f30);
      FUN_98044240();
      if ((*(byte *)(iVar3 + 0x5f3c) & 0x20) == 0) {
        local_848 = 0x800;
        local_844 = 0;
      }
      else {
        local_844 = uVar8 >> 0x14 & 0x3f;
        local_848 = *(undefined4 *)(iVar3 + 0x5e58);
      }
      *(undefined4 *)(iVar3 + 0x5e40) = 0;
      *(undefined4 *)(iVar3 + 0x5e44) = 0;
      FUN_980499d0();
      FUN_98046858(*(undefined4 *)(iVar3 + 0x5e48),0xffffffff);
      FUN_98046810();
    }
    uVar8 = 0;
    piVar9 = (int *)(iVar3 + 0x5cf0);
    do {
      if (*piVar9 == -1) break;
      FUN_98046810();
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar8 < 0x29);
  }
  piVar9 = (int *)*DAT_98000430;
  if (piVar9 == (int *)0x0) {
    if (*DAT_98000494 == 0) goto LAB_9803edfc;
    pcVar6 = *(code **)(*DAT_98000494 + 0x18);
  }
  else if ((piVar9 == (int *)0x0) || (pcVar6 = (code *)*piVar9, pcVar6 == (code *)0x0))
  goto LAB_9803edfc;
  (*pcVar6)(0x1b,"PIX!{CaptureEnded}");
LAB_9803edfc:
  FUN_9803e140();
  func_0x98058dd4(&DAT_98076c50);
  DAT_98078fbe = 0;
  DAT_98078fbc = 0;
  DAT_98078fbd = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803ee38 @ 9803ee38 ==== */

void FUN_9803ee38(void)

{
  FUN_9803ea18();
  DAT_98078fbf = 0;
  return;
}


/* ==== FUN_9803ee68 @ 9803ee68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803ee68(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_2d8 [23];
  char acStack_2c1 [260];
  undefined1 local_1bd;
  undefined1 auStack_1b0 [5];
  byte local_1ab;
  undefined1 auStack_150 [336];
  
  iVar2 = FUN_98044798();
  if ((*(byte *)(iVar2 + 0x5f3c) & 0x10) == 0) {
    FUN_98045548(acStack_2c1 + 1,param_3,0x104);
    local_1bd = 0;
    pcVar5 = acStack_2c1 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + (int)(auStack_2d8 + (0x16 - (int)(acStack_2c1 + 1)));
    if (acStack_2c1 + 1 <= pcVar5) {
      do {
        if (*pcVar5 == '\\') break;
        pcVar5 = pcVar5 + -1;
      } while (acStack_2c1 + 1 <= pcVar5);
    }
    if (*pcVar5 == '\\') {
      *pcVar5 = '\0';
      func_0x98058df4(auStack_2d8,acStack_2c1 + 1);
      iVar3 = func_0x98058de4(&DAT_98076c50,auStack_2d8);
      if (-1 < iVar3) {
        func_0x98058c74(auStack_150,"%s:\\%s","xbmovie",pcVar5 + 1);
        iVar3 = FUN_9803e248();
        if (-1 < iVar3) {
          FUN_98045548(acStack_2c1 + 1,(int)auStack_150,0x104);
          local_1bd = 0;
          pcVar5 = acStack_2c1 + 1;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + (int)(auStack_2d8 + (0x16 - (int)(acStack_2c1 + 1)));
          pcVar6 = pcVar5;
          if (acStack_2c1 + 1 <= pcVar5) {
            do {
              if ((*pcVar6 == '.') || (*pcVar6 == '\\')) break;
              pcVar6 = pcVar6 + -1;
            } while (acStack_2c1 + 1 <= pcVar6);
          }
          if (*pcVar6 != '.') {
            pcVar6 = pcVar5;
          }
          iVar3 = 0;
          if ((*(uint *)(iVar2 + 0x5f30) & 0xfc000) == 0) {
            do {
              func_0x98058c74(pcVar6,&DAT_98007b14,iVar3,pcVar6 + 0x170);
              iVar3 = iVar3 + 1;
              iVar4 = FUN_98049b98();
            } while (iVar4 != 0);
            *(undefined4 *)(iVar2 + 0x5e38) = 0;
            *(undefined4 *)(iVar2 + 0x5e3c) = 0;
            *(undefined4 *)(iVar2 + 0x5e40) = 0;
            *(undefined4 *)(iVar2 + 0x5e44) = 0;
            *(undefined4 *)(iVar2 + 0x5e48) = 0;
            iVar3 = FUN_98049af8();
            *(int *)(iVar2 + 0x5e48) = iVar3;
            if (iVar3 != 0) {
              *(undefined4 *)(iVar2 + 0x5e40) = 0;
              *(undefined4 *)(iVar2 + 0x5e44) = 0;
              FUN_980441a0(*(uint **)(iVar2 + 0x5cdc),0,0x800);
              FUN_980499d0();
              FUN_98046858(*(undefined4 *)(iVar2 + 0x5e48),0xffffffff);
              func_0x98058cb4(auStack_1b0);
              *(undefined4 *)(iVar2 + 0x5e58) = 0x800;
              *(undefined4 *)(iVar2 + 0x5f24) = 0;
              *(uint *)(iVar2 + 0x5f30) = *(uint *)(iVar2 + 0x5f30) & 0xfc0fffff;
              *(byte *)(iVar2 + 0x5f34) =
                   (byte)(LZCOUNT(local_1ab - 1) << 2) & 0x80 | *(byte *)(iVar2 + 0x5f34) & 0x7f;
              halt_baddata();
            }
          }
          else if (DAT_98078fbc == '\0') {
            func_0x98058c74(pcVar6,&DAT_98007b14,0,pcVar6 + 0x170);
            iVar3 = FUN_98049c50(acStack_2c1 + 1,0x40000000,0,0,2,0x68000000);
            *(int *)(iVar2 + 0x5cf0) = iVar3;
            if (iVar3 != -1) {
              if ((*(uint *)(iVar2 + 0x5f30) >> 0xe & 0x3f) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (*(int *)(iVar2 + 0x5e5c) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
    }
  }
  FUN_9803ea18();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803f1d0 @ 9803f1d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803f1d0(void)

{
  FUN_98044790();
  FUN_98028af0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803fa98 @ 9803fa98 ==== */

void FUN_9803fa98(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_110 [272];
  
  if (DAT_98078fbe != '\0') {
    if ((*(byte *)(param_1 + 0x5f3c) & 0x10) == 0) {
      iVar1 = FUN_9803ee68(param_1,param_2,-0x67f87148);
      func_0x98058c74(auStack_110,"%s 0x%08X","PIX!{CaptureFileCreationEnded}",
                      -(uint)(iVar1 == 0) & 0x80004005);
      piVar2 = (int *)*DAT_98000430;
      if (piVar2 == (int *)0x0) {
        if (*DAT_98000494 == 0) {
          return;
        }
        pcVar3 = *(code **)(*DAT_98000494 + 0x18);
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
    else if (DAT_98078fbc == '\0') {
      if (DAT_98078fbd != '\0') {
        FUN_9803f1d0();
      }
    }
    else {
      FUN_9803ea18();
    }
  }
  return;
}


/* ==== FUN_9803fb88 @ 9803fb88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803fb88(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  puVar2 = (uint *)uVar4;
  trapWord(6,param_6,0);
  uVar3 = (*(int *)(iVar1 + 0x34) - (int)puVar2 >> 2) - 1;
  trapWord(5,param_6 & ~((uVar3 * 2 | uVar3 >> 0x1f) - 1),0xffff);
  if (0 < (int)uVar3 / (int)param_6) {
    param_6 = ((int)uVar3 / (int)param_6) * param_6;
    if (param_5 <= param_6) {
      param_6 = param_5;
    }
    param_5 = param_5 - param_6;
    puVar2 = puVar2 + 1;
    *puVar2 = (param_6 - 1) * 0x10000 | param_3;
    for (; param_6 != 0; param_6 = param_6 - 1) {
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *param_4;
    }
  }
  if (param_5 != 0) {
    *(uint **)(iVar1 + 0x30) = puVar2;
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803fc40 @ 9803fc40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803fc40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9803fe38 @ 9803fe38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9803fe38(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_70;
  
  uVar8 = FUN_9804478c();
  iVar3 = (int)(uVar8 >> 0x20);
  uVar5 = *(uint *)(iVar3 + 0x30);
  if (*(uint *)(iVar3 + 0x38) < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  if ((uVar8 & 0x100) != 0) {
    if ((*(byte *)(iVar3 + 0x2b3f) & 0x20) != 0) {
      if ((*(byte *)(iVar3 + 0x2b3c) & 0x10) == 0) {
        if (((((*(byte *)(iVar3 + 0x2b3c) & 0x20) == 0) ||
             ((*(int *)(iVar3 + 0x3330) != *(int *)(iVar3 + 0x3210) &&
              (*(int *)(iVar3 + 0x3210) != 0)))) ||
            ((*(int *)(iVar3 + 0x3334) != *(int *)(iVar3 + 0x3214) &&
             (*(int *)(iVar3 + 0x3214) != 0)))) ||
           ((((*(int *)(iVar3 + 0x3338) != *(int *)(iVar3 + 0x3218) &&
              (*(int *)(iVar3 + 0x3218) != 0)) ||
             ((*(int *)(iVar3 + 0x333c) != *(int *)(iVar3 + 0x321c) &&
              (*(int *)(iVar3 + 0x321c) != 0)))) ||
            ((*(int *)(iVar3 + 0x3340) != *(int *)(iVar3 + 0x3220) &&
             (*(int *)(iVar3 + 0x3220) != 0)))))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(uVar5 + 4) = 0xc0006100;
        puVar6 = (uint *)(uVar5 + 8);
        *puVar6 = 0;
        uVar5 = *(uint *)(iVar3 + 0x3344);
        do {
          uVar2 = uVar5 - 1;
          if ((int)uVar2 < 0) {
            if ((local_70 != param_3) && ((*(byte *)(iVar3 + 0x2b3c) & 0x40) != 0)) {
              puVar6[1] = 0xc0006000;
              puVar6[2] = 1;
              puVar6[3] = 0xc0015501;
              puVar6[4] = 0x2203;
              puVar6 = puVar6 + 5;
              *puVar6 = param_3;
            }
            puVar6[1] = 0xc0006000;
            puVar6[2] = *(uint *)(iVar3 + 0x331c);
            puVar6[3] = 0xc0006100;
            puVar6[4] = *(uint *)(iVar3 + 0x3320);
            halt_baddata();
          }
          uVar4 = *(uint *)(iVar3 + 0x2ffc) >> 0x11 & 7;
          uVar5 = *(int *)((uVar5 + 0xd2b) * 4 + iVar3) << 0x11;
          uVar7 = uVar5 | param_3 & 0x1ffff;
          if ((uVar4 == 0) ||
             ((local_70 = uVar7, uVar4 == 2 &&
              ((uVar2 != 0 || ((*(byte *)(iVar3 + 0x2b3f) & 0x10) == 0)))))) {
            local_70 = uVar5 | param_3 & 0x1fffe;
          }
          puVar6[1] = 0xc0006000;
          puVar6[2] = 3 << ((uVar2 & 0x1f) << 1);
          puVar6[3] = 0xc0015501;
          puVar6[4] = 0x2203;
          puVar6 = puVar6 + 5;
          *puVar6 = local_70;
          *(uint **)(iVar3 + 0x30) = puVar6;
          param_3 = uVar7;
          uVar5 = uVar2;
        } while (puVar6 <= *(uint **)(iVar3 + 0x38));
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
      }
    }
    if ((*(uint *)(iVar3 + 0x2ffc) & 0xe0000) == 0) {
      param_3 = param_3 & 0xfffffffe;
    }
    *(undefined4 *)(uVar5 + 4) = 0x2203;
    *(uint *)(uVar5 + 8) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980401c8 @ 980401c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980401c8(void)

{
  FUN_980447a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040288 @ 98040288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040288(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_9804479c();
  uVar2 = *(uint *)(iVar1 + 0x30);
  if (*(uint *)(iVar1 + 0x38) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar2 + 4) = 0x2007;
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)(iVar1 + 0x289c);
  *(undefined4 *)(uVar2 + 0xc) = 0xa31;
  *(undefined4 *)(uVar2 + 0x10) = 0x10000;
  *(undefined4 *)(uVar2 + 0x14) = 0x10a2f;
  *(undefined4 *)(uVar2 + 0x18) = 0;
  *(undefined4 *)(uVar2 + 0x1c) = 0x1000;
  *(undefined4 *)(uVar2 + 0x20) = 0xc0043c00;
  *(undefined4 *)(uVar2 + 0x24) = 3;
  *(undefined4 *)(uVar2 + 0x28) = 0xa31;
  *(undefined4 *)(uVar2 + 0x2c) = 0;
  *(undefined4 *)(uVar2 + 0x30) = 0x80000000;
  *(undefined4 *)(uVar2 + 0x34) = 8;
  *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar2 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040408 @ 98040408 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040408(void)

{
  FUN_980447a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040560 @ 98040560 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040560(void)

{
  FUN_98044790();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980406b0 @ 980406b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980406b0(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4,int param_5)

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
  
  uVar21 = FUN_98044788();
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
LAB_98040788:
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
          if (uVar16 <= uVar8) goto LAB_98040788;
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
        uVar1 = uVar9 & *(ushort *)(&DAT_98007b58 + (uVar2 & 7) * 2);
        uVar8 = uVar9 & *(ushort *)(&DAT_98007b58 + ((uVar2 & 0xfffffff8) >> 2 & 0xe));
        uVar12 = uVar9 & *(ushort *)(&DAT_98007b58 + ((uVar2 & 0x1c0) >> 5));
        uVar4 = uVar9 & *(ushort *)(&DAT_98007b58 + ((uVar2 & 0xe00) >> 8));
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
                    iVar18 = (uint)(byte)(&DAT_98007b68)[*(ushort *)(puVar13 + 1) & 0x3f] -
                             (uint)(byte)(&DAT_98007b68)[*(ushort *)(puVar6 + 4) & 0x3f];
                  }
LAB_98040b6c:
                  if (0 < iVar18) goto LAB_98040b74;
                }
                else {
                  if (uVar2 != uVar4) {
                    if (uVar2 == uVar12) {
                      iVar18 = -1;
                    }
                    goto LAB_98040b6c;
                  }
LAB_98040b74:
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
                 (uVar9 = ((byte)(&DAT_98007b68)[*(ushort *)(puVar13 + 1) & 0x3f] - uVar1) + uVar9,
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
        FUN_98044240();
      }
      puVar3 = puVar3 + 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040cd8 @ 98040cd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040cd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040da8 @ 98040da8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040da8(undefined4 param_1,undefined4 param_2,ushort *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint local_40 [16];
  
  uVar4 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  puVar2 = (uint *)(((*(uint *)(iVar1 + 0x14) >> 5 & 0x1f) + (*param_3 & 0xfff) +
                     *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x18) + 9) * 4 + iVar1);
  while( true ) {
    puVar3 = (uint *)((*puVar2 & 0xfff) * 0xc + (int)uVar4);
    if (local_40 != puVar3) {
      FUN_98044240();
    }
    local_40[0] = *param_4 >> 8 & 0xf | local_40[0] & 0xfffffff0;
    if (puVar3 != local_40) {
      FUN_98044240();
    }
    if ((*puVar2 & 0x1000) != 0) break;
    puVar2 = puVar2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040e60 @ 98040e60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040e60(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_98044790();
  iVar7 = (int)((ulonglong)uVar9 >> 0x20);
  if ((((*(byte *)(iVar7 + 8) & 7) != 7) && ((*(uint *)(iVar7 + 0x14) & 0x40000) == 0)) &&
     ((param_4 == 0 || ((*(uint *)(param_4 + 0x14) & 0x20000) == 0)))) {
    uVar4 = *(uint *)(iVar7 + 0x14) >> 5 & 0x1f;
    uVar6 = 0;
    puVar8 = (uint *)((*(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x18) + 9) * 4 + iVar7);
    if (param_4 == 0) {
      puVar5 = (uint *)0x0;
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      puVar5 = (uint *)(param_4 + 0x20);
      uVar3 = *(uint *)(param_4 + 0x14) & 0x1f;
      uVar2 = *(uint *)(param_4 + 0x14) >> 5 & 0x1f;
      if (uVar3 != 0) {
        uVar3 = uVar3 - 1;
      }
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = *puVar5;
      for (; (uVar6 < uVar4 && ((byte)*puVar8 < (byte)uVar1)); puVar8 = puVar8 + 1) {
        FUN_98040cd8();
        uVar6 = uVar6 + 1;
      }
      if (((*puVar8 ^ *puVar5) & 0xf00) != 0) {
        FUN_98040da8(iVar7,(int)uVar9,(ushort *)puVar8,puVar5);
      }
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    }
    if (uVar6 < uVar4) {
      iVar7 = uVar4 - uVar6;
      do {
        FUN_98040cd8();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *param_3 = (uVar3 & 0xf) << 0x14 | *param_3 & 0xff0fffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98040fb0 @ 98040fb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98040fb0(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_98044784();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar1 = (param_8 + 0x70) * 8;
  uVar5 = *(uint *)(*(int *)(iVar1 + param_3) + param_3 + 0x36c);
  uVar4 = uVar5 >> 2;
  iVar3 = FUN_98032470();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = 0xc0003b00;
    *(undefined4 *)(iVar3 + 8) = 0x100;
    *(uint *)(iVar3 + 0xc) = (uVar4 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(uint *)(iVar3 + 0x14) = uVar4 & 0x3fff;
    uVar4 = *(int *)(*(int *)(iVar1 + param_3) + param_3 + 0x368) + *(int *)(param_3 + 0x20);
    uVar4 = ((uVar4 >> 0x14) + 0x200 & 0x1000) + (uVar4 & 0x1fffffff) + 0xc0000000;
    sync(0);
    FUN_98044240();
    FUN_98043738(uVar4,uVar4 + uVar5);
    if ((int)uVar6 != 0) {
      FUN_98040e60(param_6,iVar3 + 0x18,param_4,param_7);
    }
    *(byte *)(iVar2 + 0x2b3e) = ((int)uVar6 != 0) * -0x80 | *(byte *)(iVar2 + 0x2b3e) & 0x7f;
    FUN_980406b0(param_3,iVar3 + 0x18,param_5,(byte *)(iVar2 + 0x3268),param_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041108 @ 98041108 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041108(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_9804479c();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  iVar5 = *(int *)((int)uVar8 + 0x14);
  if (iVar5 != 0) {
    iVar5 = iVar5 + (int)uVar8;
    puVar7 = (ushort *)(iVar5 + 0x14);
    puVar6 = (ushort *)(*(int *)(iVar5 + 0x10) + (int)puVar7);
    while (puVar7 < puVar6) {
      uVar1 = puVar7[1];
      uVar2 = *puVar7;
      if (uVar1 == 0) {
        halt_baddata();
      }
      iVar5 = *(int *)(puVar7 + 2);
      puVar7 = puVar7 + 4;
      uVar4 = *(uint *)(iVar3 + 0x30);
      if (*(uint *)(iVar3 + 0x38) < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
      }
      *(undefined4 *)(uVar4 + 4) = 0xc0022f00;
      *(uint *)(uVar4 + 8) =
           (((uint)(iVar5 + param_3) >> 0x14) + 0x200 & 0x1000) + (iVar5 + param_3 & 0x1fffffffU);
      *(uint *)(uVar4 + 0xc) = (uint)uVar2 << 2;
      *(uint *)(uVar4 + 0x10) = (uint)uVar1;
      *(uint **)(iVar3 + 0x30) = (uint *)(uVar4 + 0x10);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980411b8 @ 980411b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980411b8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  iVar3 = param_4 * 0x1a0 + iVar2;
  if (*(int *)(iVar3 + 0x28) == *(int *)(param_3 + 0x30)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(int *)(iVar3 + 0x40) != 0) &&
     ((uint)(*(int *)(iVar1 + 0x2b1c) - *(int *)(iVar3 + 0x40)) <
      (uint)(*(int *)(iVar1 + 0x2b1c) - **(int **)(iVar1 + 0x2b10)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_980406b0(iVar2,*(int *)(*(int *)((param_4 + 0x70) * 8 + iVar2) + iVar2 + 0x368) +
                     *(int *)(iVar2 + 0x20),param_3,(byte *)(iVar1 + 0x3268),param_4);
  if (*(int *)(param_3 + 0x30) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_3 + 0x30);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980412f8 @ 980412f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980412f8(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  
  uVar21 = FUN_98044770();
  iVar2 = (int)(uVar21 >> 0x20);
  uVar3 = (uint)uVar21;
  uVar9 = 0;
  local_bc = 0xffffffff;
  local_b8 = 0xffffffff;
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_b4 = 0xffffffff;
  uVar8 = 0xffffffff;
  local_b0 = 0;
  if ((uVar21 & 0x20000) != 0) {
    uVar3 = FUN_9803fc40();
  }
  iVar20 = *(int *)(iVar2 + 0x3310);
  iVar11 = *(int *)(iVar2 + 0x2fd0);
  iVar18 = *(int *)(iVar2 + 0x330c);
  if (iVar20 == 0) {
    halt_baddata();
  }
  uVar12 = 0;
  iVar14 = *(int *)(iVar20 + 0x380) + iVar20 + 0x368;
  if (iVar18 != 0) goto LAB_98041460;
  if ((*(byte *)(iVar2 + 0x2b3f) & 2) != 0) {
    uVar12 = *(uint *)(iVar2 + 0x30);
    if (*(uint *)(iVar2 + 0x38) < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_98032238();
    }
    *(undefined4 *)(uVar12 + 4) = 0x5c8;
    *(undefined4 *)(uVar12 + 8) = 0x20000;
    *(undefined4 **)(iVar2 + 0x30) = (undefined4 *)(uVar12 + 8);
    *(byte *)(iVar2 + 0x2b3f) = *(byte *)(iVar2 + 0x2b3f) & 0xfc;
  }
  iVar16 = 0;
  bVar1 = (*(uint *)(iVar20 + 0x368) & 0x20) != 0;
  uVar10 = 0;
  if (bVar1) {
    iVar14 = *(int *)(iVar20 + 0x388) + iVar20 + 0x368;
  }
  uVar12 = (uint)bVar1;
  if ((*(byte *)(iVar2 + 0x2b3f) & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(uint *)(iVar2 + 0x2954) & 7) != 5) {
    *(uint *)(iVar2 + 0x2954) = *(uint *)(iVar2 + 0x2954) & 0xfffffff8 | 5;
    uVar3 = uVar3 | 0x80008;
  }
  uVar4 = (uint)((*(uint *)(iVar14 + 0x14) & 0x1f) != 0);
  do {
    if ((*(int *)(iVar2 + 0x3650) != 0) || ((*(uint *)(iVar20 + 0x368) & 0x10) == 0))
    goto LAB_980415f4;
    func_0x98058e04(0xf5);
LAB_98041460:
    iVar5 = *(int *)(iVar18 + 0x40) + iVar18;
    iVar16 = iVar5 + 0x28;
    uVar10 = *(uint *)(iVar5 + 0x30);
    uVar9 = *(uint *)(iVar5 + 0x34);
    uVar4 = -(uint)(0x10000000 < (uVar10 & 0x70000000)) & 1;
    *(byte *)(iVar2 + 0x2b3e) =
         (byte)(uVar4 << 3) | *(byte *)(iVar2 + 0x2b3e) & 8 | *(byte *)(iVar2 + 0x2b3e) & 0xf7;
    *(byte *)(iVar2 + 0x2b3f) =
         (byte)(uVar4 << 1) | *(byte *)(iVar2 + 0x2b3f) & 2 | *(byte *)(iVar2 + 0x2b3f) & 0xfd;
    if ((uVar3 & 0x100000) != 0) {
      FUN_98041108(iVar2,iVar18 + 0x28,*(int *)(iVar18 + 0x18));
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(uint *)(iVar2 + 0x38) < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
      }
      *(undefined4 *)(uVar4 + 4) = 0xc0012700;
      uVar6 = *(int *)(*(int *)(iVar18 + 0x40) + iVar18 + 0x28) + *(int *)(iVar18 + 0x18);
      *(uint *)(uVar4 + 8) = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1ffffffe) | 1;
      *(uint *)(uVar4 + 0xc) = *(uint *)(*(int *)(iVar18 + 0x40) + iVar18 + 0x2c) >> 2;
      *(uint **)(iVar2 + 0x30) = (uint *)(uVar4 + 0xc);
      *(undefined4 *)(iVar2 + 0x2928) = *(undefined4 *)(iVar5 + 0x40);
      if ((*(byte *)(iVar2 + 0x2b3f) & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(uint *)(iVar2 + 0x2954) & 7) != 4) {
        uVar3 = uVar3 | 0x84008;
        *(uint *)(iVar2 + 0x2954) = *(uint *)(iVar2 + 0x2954) & 0xfffffff8 | 4;
      }
    }
    if ((DAT_98078fc4 & 1) == 0) {
      DAT_98078fc4 = DAT_98078fc4 | 1;
      DAT_98078fc0 = 0x603ff;
    }
    uVar4 = (uint)((*(uint *)(iVar5 + 0x3c) & DAT_98078fc0) !=
                  (*(uint *)(iVar14 + 0x14) & DAT_98078fc0));
  } while ((*(int *)(iVar2 + 0x3650) != 0) || ((*(uint *)(iVar18 + 0x28) & 0x10) == 0));
  func_0x98058e04(0xf5);
LAB_980415f4:
  local_c0 = *(uint *)(iVar14 + 8);
  uVar15 = *(uint *)(iVar2 + 0x2954);
  uVar13 = *(uint *)(iVar14 + 0xc);
  uVar6 = uVar10;
  uVar19 = uVar15;
  if ((*(byte *)(iVar2 + 0x2b3c) & 0x40) != 0) {
    if (iVar16 == 0) {
LAB_98041658:
      uVar19 = uVar15 & 0xfffffff8 | 5;
    }
    else if ((((*(uint *)(iVar2 + 0x293c) & 8) == 0) && ((*(uint *)(iVar16 + 0x1c) & 0x10) == 0)) &&
            ((*(uint *)(iVar16 + 0x1c) & 0x20) == 0)) {
      uVar6 = 0;
      local_b0 = *(byte *)(iVar2 + 0x2b3f) & 1;
      *(byte *)(iVar2 + 0x2b3f) = *(byte *)(iVar2 + 0x2b3f) & 0xfe;
      goto LAB_98041658;
    }
    if ((uVar3 & 0x40000) != 0) {
      local_bc = local_c0 | uVar6;
      local_b8 = uVar13 | uVar9;
    }
    if (((*(byte *)(iVar2 + 0x2b3f) & 8) != 0) &&
       (local_a8 = *(uint *)(iVar2 + 0x2884), (uVar19 & 7) == 5)) {
      local_a8 = local_a8 & 0xfff0ffff;
    }
    if ((uVar19 != *(uint *)(iVar2 + 0x3314)) || ((uVar3 & 8) != 0)) {
      *(uint *)(iVar2 + 0x3314) = uVar19;
      uVar3 = uVar3 | 8;
      local_ac = uVar19;
    }
  }
  *(byte *)(iVar2 + 0x2b3f) =
       *(byte *)(iVar2 + 0x2b3f) & 0xfe |
       0x10000000 < (uVar6 & 0x70000000) | *(byte *)(iVar2 + 0x2b3f) & 1;
  if (((*(byte *)(iVar2 + 0x2b3e) & 0x80) == 0) && (uVar4 == 0)) {
    if ((uVar3 & 0x80000) == 0) goto LAB_98041864;
    puVar17 = (uint *)(iVar20 + 0x368);
    FUN_98041108(iVar2,puVar17,*(int *)(iVar20 + 0x20));
    *(byte *)(iVar2 + 0x2b3e) = *(byte *)(iVar2 + 0x2b3e) & 0xbf;
    if ((iVar11 == 0) || ((*puVar17 & 0x40) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(byte *)(iVar2 + 0x2b3c) & 0x80) == 0) {
      iVar18 = FUN_980411b8(iVar2,iVar20,iVar11,uVar12);
      if (iVar18 == 0) {
        FUN_98040fb0(iVar2,0,iVar20,&local_c0,iVar11,iVar14,iVar16,uVar12);
        uVar12 = uVar8;
      }
      uVar8 = uVar12;
      if (((((uVar19 ^ uVar15) & 7) != 0) && ((*puVar17 & 0x20) != 0)) &&
         (iVar11 = FUN_980411b8(iVar2,iVar20,iVar11,1), iVar11 != 0)) {
        local_b4 = 1;
        *(byte *)(iVar2 + 0x2b3e) = *(byte *)(iVar2 + 0x2b3e) | 0x40;
      }
      goto LAB_98041864;
    }
    uVar4 = 0;
  }
  else {
    if ((uVar3 & 0x180000) == 0) goto LAB_98041864;
    *(byte *)(iVar2 + 0x2b3e) = *(byte *)(iVar2 + 0x2b3e) & 0xbf;
    FUN_98041108(iVar2,iVar20 + 0x368,*(int *)(iVar20 + 0x20));
  }
  FUN_98040fb0(iVar2,uVar4,iVar20,&local_c0,iVar11,iVar14,iVar16,uVar12);
LAB_98041864:
  if ((uVar3 & 0x180000) != 0) {
    *(uint *)(iVar2 + 0x2924) = uVar13 | uVar9;
    *(uint *)(iVar2 + 0x2920) = local_c0 | uVar10;
    if ((*(byte *)(iVar2 + 0x2b3e) & 0x40) == 0) {
      if ((uVar6 == 0) && (uVar10 != 0)) {
        local_bc = local_c0;
        local_b8 = uVar13;
      }
    }
    else {
      iVar11 = *(int *)(iVar20 + 0x388) + iVar20;
      local_bc = *(uint *)(iVar11 + 0x370) | uVar6;
      local_b8 = *(uint *)(iVar11 + 0x374) | uVar9;
    }
  }
  if ((*(byte *)(iVar2 + 0x2b3c) & 0x40) == 0) {
    if (uVar8 != 0xffffffff) {
      uVar3 = *(uint *)(iVar2 + 0x30);
      if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_98032238();
      }
      *(undefined4 *)(uVar3 + 4) = 0xc0012700;
      iVar11 = (uVar8 + 0x70) * 8;
      uVar9 = *(int *)(*(int *)(iVar11 + iVar20) + iVar20 + 0x368) + *(int *)(iVar20 + 0x20);
      *(uint *)(uVar3 + 8) = ((uVar9 >> 0x14) + 0x200 & 0x1000) + (uVar9 & 0x1fffffff);
      *(uint *)(uVar3 + 0xc) = *(uint *)(*(int *)(iVar11 + iVar20) + iVar20 + 0x36c) >> 2;
      *(undefined4 *)(uVar8 * 0x1a0 + iVar20 + 0x40) = *(undefined4 *)(iVar2 + 0x2b1c);
      *(uint **)(iVar2 + 0x30) = (uint *)(uVar3 + 0xc);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = *(uint *)(iVar2 + 0x30);
  if (*(uint *)(iVar2 + 0x38) < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_98032238();
  }
  *(undefined4 *)(uVar8 + 4) = 0xc0006000;
  *(undefined4 *)(uVar8 + 8) = 0x15555555;
  *(undefined4 *)(uVar8 + 0xc) = 0xc0006100;
  puVar7 = (undefined4 *)(uVar8 + 0x10);
  *puVar7 = 0;
  if ((uVar3 & 8) != 0) {
    *(undefined4 *)(uVar8 + 0x14) = 0x2208;
    puVar7 = (undefined4 *)(uVar8 + 0x18);
    *puVar7 = *(undefined4 *)(iVar2 + 0x2954);
  }
  if (local_b0 != 0) {
    puVar7[1] = 0xc0002601;
    puVar7 = puVar7 + 2;
    *puVar7 = 0;
  }
  if (local_ac != 0xffffffff) {
    puVar7[1] = 0xc0015501;
    puVar7[2] = 0x2208;
    puVar7[3] = local_ac;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041c78 @ 98041c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041d30 @ 98041d30 ==== */

uint FUN_98041d30(int param_1)

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


/* ==== FUN_98041d98 @ 98041d98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041d98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041e20 @ 98041e20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041e20(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int aiStack_40 [16];
  
  FUN_980447a8();
  iVar1 = func_0x98058b34();
  piVar3 = DAT_98000438;
  if (iVar1 == 2) {
    piVar3 = DAT_9800043c;
  }
  iVar5 = *piVar3;
  iVar1 = 6;
  puVar7 = (uint *)(iVar5 + 0x2d44);
  do {
    if (puVar7[1] != 0) {
      uVar6 = puVar7[-1];
      uVar4 = *puVar7;
      FUN_98021f08(aiStack_40,iVar5,0);
      do {
        iVar2 = FUN_98022000();
        if (iVar2 == 0) break;
      } while (*(uint *)puVar7[4] != (uVar4 & 3 | uVar6 & 0xfffffffc));
      FUN_98021f38((int)aiStack_40);
    }
    iVar1 = iVar1 + -1;
    puVar7 = puVar7 + 0x1b;
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_98041ec0 @ 98041ec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041ec0(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_98044798();
  iVar2 = (int)((ulonglong)uVar13 >> 0x20);
  iVar11 = *(int *)(iVar2 + 4);
  puVar3 = (undefined4 *)(uint)uVar13;
  do {
    puVar4 = (uint *)*puVar3;
    puVar9 = puVar3 + 1;
    if (puVar9 < puVar4) {
      iVar5 = iVar11 + -1;
      puVar10 = (ushort *)(puVar3 + 3);
      do {
        uVar6 = 0;
        uVar12 = *puVar9;
        puVar8 = (uint *)(iVar5 * 0x10 + iVar2 + 0xc);
        iVar7 = iVar5;
        do {
          uVar6 = uVar6 << 2;
          if ((((puVar8[-1] < (puVar10[-1] + 1) * 8) && ((uint)puVar10[-2] << 3 < puVar8[1])) &&
              (*puVar8 < (puVar10[1] + 1) * 8)) && ((uint)*puVar10 << 3 < puVar8[2])) {
            uVar6 = uVar6 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -4;
        } while (bVar1);
        puVar9 = puVar9 + 4;
        *(uint *)(uVar12 + 8) = uVar6 | 0x80000000;
        puVar10 = puVar10 + 8;
      } while (puVar9 < puVar4);
    }
    uVar6 = *puVar9;
    if (param_3 != 0) {
      FUN_98043738((uint)puVar3,(int)puVar4);
    }
    puVar3 = (undefined4 *)uVar6;
  } while (uVar6 != 0xc0000000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98041fc8 @ 98041fc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98041fc8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_980447a0();
  puVar1 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  puVar7 = puVar1 + 0x13;
  uVar2 = func_0x98058b54(puVar7);
  if (*param_3 == -0x40000000) {
    puVar1[9] = param_3;
    puVar1[0x10] = puVar1[0x10] & ~(0x1000000 << (*(uint *)((int)uVar8 + 4) & 0x3f));
    iVar5 = puVar1[0x11];
    puVar1[0x11] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      iVar5 = func_0x98058b34();
      piVar6 = DAT_98000438;
      if (iVar5 == 2) {
        piVar6 = DAT_9800043c;
      }
      uVar3 = 0;
      piVar6 = (int *)(*piVar6 + 0x2d90);
      iVar5 = 6;
      do {
        uVar4 = 0x1000000 << (uVar3 & 0x3f);
        if ((puVar1[0x10] & uVar4) != 0) {
          *piVar6 = *piVar6 + 1;
          puVar1[0x10] = puVar1[0x10] & ~uVar4;
        }
        uVar3 = uVar3 + 1;
        piVar6 = piVar6 + 0x1b;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (puVar1[0x14] == 0) {
        puVar1[0x12] = puVar1[0x12] + -1;
      }
    }
    func_0x98058b44(puVar7,uVar2);
    FUN_98041e20();
    if (puVar1[0x1c] != 0) {
      func_0x98058e24(0);
    }
    sync(1);
    *puVar1 = 0;
  }
  else {
    func_0x98058b44(puVar7,uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98042138 @ 98042138 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98042138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980421c8 @ 980421c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980421c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98042338 @ 98042338 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98042338(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_980447a8();
  *(undefined4 *)(iVar1 + 0x2b4c) = 0;
  FUN_98048ea8(*(int *)(iVar1 + 0x2fc0),0xb1800000);
  FUN_98048ea8(*(int *)(iVar1 + 0x2b78),0xb1800000);
  iVar3 = iVar1 + 0x2d74;
  iVar2 = 6;
  do {
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x98058aa4(iVar3,1,0);
    }
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 0x6c;
  } while (iVar2 != 0);
  piVar4 = (int *)(iVar1 + 0x2d84);
  iVar2 = 6;
  do {
    if (*piVar4 != 0) {
      FUN_98046858(*piVar4,0xffffffff);
      FUN_98046810();
    }
    iVar2 = iVar2 + -1;
    piVar4 = piVar4 + 0x1b;
  } while (iVar2 != 0);
  *(undefined4 *)(iVar1 + 0x2b70) = 0;
  *(undefined4 *)(iVar1 + 0x2b74) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980423d8 @ 980423d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980423d8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_60;
  int local_5c;
  int aiStack_50 [20];
  
  uVar12 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  FUN_98041c78();
  uVar8 = 0;
  uVar5 = 0;
  uVar3 = 0;
  iVar10 = 6;
  do {
    if ((0x1000000 << (uVar3 & 0x3f) & param_3) != 0) {
      uVar5 = uVar5 + 1;
    }
    uVar3 = uVar3 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(uint *)((int)uVar12 + 0x40) = param_3 & 0x3f000000;
  uVar3 = 0x40000;
  if ((param_3 & 1) == 0) {
    uVar3 = 0x20000;
  }
  trapWord(6,uVar5,0);
  puVar6 = *(undefined4 **)(iVar1 + 0x2fc0);
  uVar2 = 0;
  iVar11 = 6;
  piVar7 = (int *)(iVar1 + 0x2d48);
  iVar10 = 0x7f100000;
  do {
    iVar4 = iVar10;
    if ((0x1000000 << (uVar2 & 0x3f) & param_3) != 0) {
      *piVar7 = iVar10;
      piVar7[-1] = 0;
      iVar4 = iVar10 + (uVar3 / uVar5 & 0xffffff80);
      piVar7[-2] = iVar10;
      piVar7[1] = iVar4;
      *puVar6 = 0xc0025800;
      puVar6[1] = 3;
      puVar6[2] = piVar7[2];
      puVar6[3] = piVar7[-2] & 0xfffffffcU | piVar7[-1] & 3U;
      puVar6 = puVar6 + 4;
    }
    uVar2 = uVar2 + 1;
    piVar7 = piVar7 + 0x1b;
    iVar11 = iVar11 + -1;
    iVar10 = iVar4;
  } while (iVar11 != 0);
  uVar3 = *(uint *)(iVar1 + 0x2fc0);
  local_5c = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff);
  local_60 = (int)((int)puVar6 - uVar3) >> 2 & 0xffffffU | 0x81000000;
  FUN_980312c8(iVar1,&local_60,1);
  puVar9 = (uint *)(iVar1 + 0x2d40);
  do {
    if ((0x1000000 << (uVar8 & 0x3f) & param_3) != 0) {
      uVar5 = puVar9[1];
      uVar3 = *puVar9;
      FUN_98021f08(aiStack_50,iVar1,0);
      do {
        iVar10 = FUN_98022000();
        if (iVar10 == 0) break;
      } while (*(uint *)puVar9[5] != (uVar3 & 0xfffffffc | uVar5 & 3));
      FUN_98021f38((int)aiStack_50);
    }
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 0x1b;
    if (5 < uVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_98042580 @ 98042580 ==== */

void FUN_98042580(undefined4 *param_1)

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


/* ==== FUN_98042660 @ 98042660 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98042660(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_980447a0();
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  puVar5 = (undefined4 *)uVar12;
  iVar11 = *(int *)(iVar3 + 4);
  do {
    puVar10 = (uint *)*puVar5;
    for (puVar6 = puVar5 + 1; puVar6 < puVar10; puVar6 = puVar6 + 2) {
      puVar4 = (uint *)puVar6[1];
      uVar2 = *puVar6 & 0xfffffffc;
      dataCacheBlockFlush((ushort *)(uVar2 + 0xc0000000));
      if ((*puVar6 & 1) == 0) {
        iVar7 = iVar11 + -1;
        uVar8 = 0;
        puVar9 = (uint *)(iVar7 * 0x10 + iVar3 + 0xc);
        do {
          uVar8 = uVar8 << 2;
          if ((((puVar9[-1] < (*(ushort *)(uVar2 + 0xc0000002) + 1) * 8) &&
               ((uint)*(ushort *)(uVar2 + 0xc0000000) << 3 < puVar9[1])) &&
              (*puVar9 < (*(ushort *)(uVar2 + 0xc0000006) + 1) * 8)) &&
             ((uint)*(ushort *)(uVar2 + 0xc0000004) << 3 < puVar9[2])) {
            uVar8 = uVar8 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar9 = puVar9 + -4;
        } while (bVar1);
      }
      else {
        uVar8 = -(uint)(((((uint)*(byte *)(uVar2 + 0xc0000013) << 0x18 |
                           (uint)*(byte *)(uVar2 + 0xc0000012) << 0x10 |
                           (uint)*(byte *)(uVar2 + 0xc0000011) << 8 |
                          (uint)*(byte *)(uVar2 + 0xc0000010)) -
                         ((uint)*(byte *)(uVar2 + 0xc0000033) << 0x18 |
                          (uint)*(byte *)(uVar2 + 0xc0000032) << 0x10 |
                          (uint)*(byte *)(uVar2 + 0xc0000031) << 8 |
                         (uint)*(byte *)(uVar2 + 0xc0000030))) -
                        ((uint)*(byte *)(uVar2 + 0xc0000037) << 0x18 |
                         (uint)*(byte *)(uVar2 + 0xc0000036) << 0x10 |
                         (uint)*(byte *)(uVar2 + 0xc0000035) << 8 |
                        (uint)*(byte *)(uVar2 + 0xc0000034))) +
                        ((uint)*(byte *)(uVar2 + 0xc0000017) << 0x18 |
                         (uint)*(byte *)(uVar2 + 0xc0000016) << 0x10 |
                         (uint)*(byte *)(uVar2 + 0xc0000015) << 8 |
                        (uint)*(byte *)(uVar2 + 0xc0000014)) != 0);
      }
      *puVar4 = uVar8;
      dataCacheBlockFlush((((uint)puVar4 >> 0x14) + 0x200 & 0x1000) + ((uint)puVar4 & 0x1fffffff) +
                          -0x40000000);
    }
    puVar5 = (undefined4 *)*puVar6;
  } while (puVar5 != (undefined4 *)0xc0000000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980427a0 @ 980427a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980427a0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_980447a0();
  iVar2 = (int)((ulonglong)uVar13 >> 0x20);
  puVar4 = (undefined4 *)uVar13;
  iVar11 = *(int *)(iVar2 + 4);
  do {
    puVar12 = (undefined4 *)*puVar4;
    puVar9 = puVar4 + 1;
    if (puVar9 < puVar12) {
      iVar3 = iVar11 + -1;
      puVar10 = (ushort *)(puVar4 + 3);
      do {
        uVar5 = 0;
        puVar6 = (uint *)*puVar9;
        puVar8 = (uint *)(iVar3 * 0x10 + iVar2 + 0xc);
        iVar7 = iVar3;
        do {
          uVar5 = uVar5 << 2;
          if ((((puVar8[-1] < (puVar10[-1] + 1) * 8) && ((uint)puVar10[-2] << 3 < puVar8[1])) &&
              (*puVar8 < (puVar10[1] + 1) * 8)) && ((uint)*puVar10 << 3 < puVar8[2])) {
            uVar5 = uVar5 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -4;
        } while (bVar1);
        *puVar6 = uVar5;
        dataCacheBlockFlush((((uint)puVar6 >> 0x14) + 0x200 & 0x1000) + ((uint)puVar6 & 0x1fffffff)
                            + -0x40000000);
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 8;
      } while (puVar9 < puVar12);
    }
    puVar4 = (undefined4 *)*puVar9;
  } while (puVar4 != (undefined4 *)0xc0000000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98042898 @ 98042898 ==== */

void FUN_98042898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98042950 @ 98042950 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98042950(void)

{
  uint *puVar1;
  uint uVar2;
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
  
  uVar9 = FUN_98044794();
  puVar8 = (uint *)((ulonglong)uVar9 >> 0x20);
  iVar4 = (int)uVar9;
  iVar3 = func_0x98058b34();
  puVar6 = DAT_98000438;
  if (iVar3 == 2) {
    puVar6 = DAT_9800043c;
  }
  uVar5 = *puVar8;
  uVar7 = *puVar6;
  do {
    if ((uVar5 & 0x80000000) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = uVar5 & 0xff000000;
    if (uVar2 < 0x88000001) {
      if (uVar2 == 0x88000000) {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        if ((*(uint *)(iVar4 + 0x16c) & *puVar1) != 0) {
          *(uint **)(iVar4 + 0x50) = puVar8;
          puVar8 = (uint *)(iVar4 + 0x5c);
        }
      }
      else if (uVar2 < 0x84000001) {
        if (uVar2 == 0x84000000) {
          uVar5 = *(uint *)(iVar4 + 0x38);
          *(uint *)(iVar4 + 0x38) = uVar5 & 0xbfffffff;
          if ((uVar5 & 0x80000000) == 0) goto LAB_98042a20;
          puVar8 = *(uint **)(iVar4 + 0x178);
        }
        else if (uVar2 == 0x80000000) {
          FUN_98044240();
          *(undefined4 *)(iVar4 + 0x3c) = 0;
          puVar8 = puVar8 + 0x3f;
          *(undefined4 *)(iVar4 + 0x16c) = 0x7fffffff;
          *(undefined4 *)(iVar4 + 0x170) = 0xffffffff;
        }
        else {
          if (uVar2 == 0x81000000) goto LAB_98042c4c;
          if (uVar2 != 0x82000000) {
            if (uVar2 != 0x83000000) goto LAB_98042c24;
            uVar5 = *(uint *)(iVar4 + 0x38);
            *(uint **)(iVar4 + 0x174) = puVar8;
            *(uint *)(iVar4 + 0x38) = uVar5 | 0x40000000;
            if ((*(int *)(iVar4 + 0x3c) != 0) && ((*(uint *)(iVar4 + 0x74) & 2) != 0)) {
              uVar5 = uVar5 | 0xc0000000;
              goto LAB_98042a1c;
            }
            goto LAB_98042a20;
          }
        }
      }
      else {
        if (uVar2 == 0x85000000) {
          *(uint **)(iVar4 + 0x178) = puVar8;
          uVar5 = LZCOUNT(*(uint *)(iVar4 + 0x38) & 0x80000000) & 0x20;
          *(uint *)(iVar4 + 0x38) = uVar5 << 0x1a | *(uint *)(iVar4 + 0x38) & 0x7fffffff;
          if (uVar5 != 0) {
            puVar8 = *(uint **)(iVar4 + 0x174);
            goto LAB_98042ca8;
          }
        }
        else if (uVar2 == 0x86000000) {
          *(uint **)(iVar4 + 0x17c) = puVar8;
          uVar5 = *(uint *)(iVar4 + 0x38) | 0x20000000;
LAB_98042a1c:
          *(uint *)(iVar4 + 0x38) = uVar5;
        }
        else {
          if (uVar2 != 0x87000000) goto LAB_98042c24;
          uVar5 = *(int *)(iVar4 + 0x3c) + 1;
          *(uint *)(iVar4 + 0x3c) = uVar5;
          *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xdfffffff;
          if (uVar5 < *(uint *)(iVar4 + 0x78)) {
            puVar8 = *(uint **)(iVar4 + 0x17c);
            goto LAB_98042ca8;
          }
        }
LAB_98042a20:
        puVar8 = puVar8 + 1;
        FUN_98041d98();
      }
    }
    else if (uVar2 < 0x8d000001) {
      if (uVar2 == 0x8d000000) {
        halt_baddata();
      }
      if (uVar2 == 0x89000000) {
        if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) != 0) {
          FUN_98042898();
        }
        puVar8 = puVar8 + 3;
      }
      else if (uVar2 == 0x8a000000) {
        puVar6 = (undefined4 *)puVar8[1];
        FUN_980423d8(uVar7,iVar4,puVar8[4]);
        FUN_98042580(puVar6);
        if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) == 0) {
          if (*(int *)(iVar4 + 0x3c) == 1) {
            FUN_980427a0();
          }
        }
        else {
          FUN_98042660();
        }
        puVar8 = puVar8 + 5;
      }
      else if (uVar2 == 0x8b000000) {
        puVar8 = puVar8 + 1;
      }
      else {
        if (uVar2 == 0x8c000000) {
          halt_baddata();
        }
LAB_98042c24:
        if (uVar5 == 0xc0000000) {
          halt_baddata();
        }
        puVar8 = (uint *)(uVar5 + 4);
      }
    }
    else if (uVar2 == 0x8e000000) {
      if ((*(uint *)(iVar4 + 0x16c) & 0x80000000) != 0) {
        local_58 = puVar8[2];
        local_54 = puVar8[3];
        FUN_980312c8(uVar7,&local_58,1);
      }
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 4;
      *(uint *)(iVar4 + 0x170) = *puVar1;
    }
    else if (uVar2 == 0x8f000000) {
LAB_98042c4c:
      local_5c = puVar8[1];
      local_60 = uVar5;
      FUN_980312c8(uVar7,&local_60,1);
      puVar8 = puVar8 + 2;
    }
    else {
      if (uVar2 != 0x90000000) goto LAB_98042c24;
      puVar8 = (uint *)FUN_9803d918();
    }
LAB_98042ca8:
    uVar5 = *puVar8;
  } while( true );
}


/* ==== FUN_98042cc0 @ 98042cc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98042cc0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_980447a4();
  do {
    if (*(int *)(*piVar1 + 0x44) == 0) {
      halt_baddata();
    }
  } while ((0x1000000 << (piVar1[1] & 0x3fU) & *(uint *)(*piVar1 + 0x40)) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98043120 @ 98043120 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98043120(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_50;
  undefined4 local_4c;
  
  iVar1 = FUN_98044798();
  if ((*(byte *)(iVar1 + 0x2b3d) & 0x20) == 0) {
    FUN_98031598();
  }
  uVar2 = FUN_98031070();
  uVar3 = FUN_98031070();
  uVar4 = FUN_98031070();
  *(undefined4 *)(iVar1 + 0x3520) = 0;
  *(undefined4 *)(iVar1 + 0x3524) = 0;
  if ((*(byte *)(iVar1 + 0x2b3d) >> 5 & 1) == 0) {
    FUN_98030f88(iVar1 + 0x35c0);
    FUN_98030f88(iVar1 + 0x3530);
    FUN_98030f88(iVar1 + 0x35a8);
    FUN_98030f88(iVar1 + 0x3548);
    FUN_98030f88(iVar1 + 0x3560);
    FUN_98030f88(iVar1 + 0x3578);
    FUN_98030f88(iVar1 + 0x3590);
    uVar7 = *(uint *)(iVar1 + 0x35c0);
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = ((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff) + 0xc0000000;
    }
    iVar5 = FUN_980318e8(iVar1,uVar2 - 4,param_3 | 1,0x98041338,uVar7);
    iVar6 = FUN_980317a8();
    if (local_50 != 0) {
      uVar4 = FUN_98031cf8(iVar1,uVar4,local_4c,local_50,0,(uint *)(iVar1 + 0x35d8),0);
    }
    if ((*(int *)(iVar1 + 0x55b4) != 0) || ((*(byte *)(iVar1 + 0x2b3d) & 2) == 0)) {
      uVar4 = FUN_98031cf8(iVar1,uVar4,((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff),
                           (int)((iVar5 + 4) - uVar2) >> 2,1,(uint *)(iVar1 + 0x35d8),0);
    }
    FUN_98031cf8(iVar1,uVar4,((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff),
                 (int)((iVar6 + 4) - uVar3) >> 2,0,(uint *)(iVar1 + 0x35c0),0);
  }
  else {
    FUN_98030810(iVar1);
    *(byte *)(iVar1 + 0x2b3d) = *(byte *)(iVar1 + 0x2b3d) & 0xdf;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98043308 @ 98043308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98043308(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  FUN_98031ed8(param_4,iVar1,0x80);
  puVar2 = (uint *)param_4[3];
  if ((uint *)param_4[4] < puVar2 + 2) {
    puVar2 = (uint *)FUN_98031b68();
  }
  puVar2[1] = (uint)uVar5;
  *puVar2 = param_3 | param_5;
  param_4[3] = (uint)(puVar2 + 2);
  FUN_98030f88((int)param_4);
  uVar4 = *param_4;
  if (uVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = ((uVar4 >> 0x14) + 0x200 & 0x1000) + (uVar4 & 0x1fffffff) + -0x40000000;
  }
  func_0x98058bf4(*(int *)(iVar1 + 0x2cc8) * 0x6c + iVar1 + 0x2d58,iVar3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980433c0 @ 980433c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980433c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 auStack_60 [24];
  
  iVar1 = FUN_98044794();
  if ((*(uint *)(iVar1 + 0x5f48) & 0x100) == 0) {
    iVar2 = FUN_98048d70();
    *(int *)(iVar1 + 0x2fc0) = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_98048d70();
      *(int *)(iVar1 + 0x2b78) = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_980318e8(iVar1,iVar2 + -4,6,0x9803c4a0,iVar1);
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
            func_0x98058e64(iVar2 + -0x24,0x98041300,iVar2 + -0x44);
            *(char *)(iVar2 + -0x21) = (char)uVar6 + '\x01';
            iVar3 = FUN_98046860(0,0x10000,0x98042180,iVar2 + -0x44,0,iVar2 + 0xc);
            *(int *)(iVar2 + 8) = iVar3;
            if (iVar3 == 0) {
              halt_baddata();
            }
            iVar3 = func_0x98058e54(iVar3,DAT_9800051c,auStack_60);
            if (-1 < iVar3) {
              func_0x98058e44(auStack_60[0],0x11);
              func_0x98058e34(auStack_60[0]);
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


/* ==== FUN_98043670 @ 98043670 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98043670(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [26];
  
  puVar1 = (uint *)FUN_9804478c();
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  FUN_98025e50(puVar1,auStack_68,&uStack_6c,&uStack_70);
  FUN_98026148(auStack_68[0],uStack_6c,uStack_70,(uVar4 >> 6 & 0xf) + 1,uVar3 & 0x3f,uVar5 >> 9 & 3,
               uVar2 >> 0x1f,uVar5 >> 0xb & 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98043738 @ 98043738 ==== */

void FUN_98043738(uint param_1,int param_2)

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


/* ==== FUN_980437e0 @ 980437e0 ==== */

void FUN_980437e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980439d8 @ 980439d8 ==== */

undefined4 FUN_980439d8(double param_1)

{
  int iStack00000014;
  
  if (((((ulonglong)param_1 & 0x7ff0000000000000) != 0) ||
      ((((ulonglong)param_1 & 0xfffff00000000) == 0 &&
       (iStack00000014 = SUB84(param_1,0), iStack00000014 == 0)))) &&
     ((double)(longlong)param_1 == param_1)) {
    if ((double)(longlong)(param_1 * DAT_980029d0) == param_1 * DAT_980029d0) {
      return 2;
    }
    return 1;
  }
  return 0;
}


/* ==== FUN_98043a48 @ 98043a48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98043a48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98043bd0 @ 98043bd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98043bd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980440b8 @ 980440b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980440b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980441a0 @ 980441a0 ==== */

void FUN_980441a0(uint *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x9804422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x98044234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar5 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}


/* ==== FUN_98044240 @ 98044240 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044240(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980446c8 @ 980446c8 ==== */

void FUN_980446c8(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* ==== FUN_98044770 @ 98044770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044770(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044774 @ 98044774 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044774(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044778 @ 98044778 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044778(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804477c @ 9804477c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804477c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044780 @ 98044780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044784 @ 98044784 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044784(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044788 @ 98044788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804478c @ 9804478c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804478c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044790 @ 98044790 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044790(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044794 @ 98044794 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044794(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044798 @ 98044798 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044798(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804479c @ 9804479c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804479c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980447a0 @ 980447a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980447a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980447a4 @ 980447a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980447a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980447a8 @ 980447a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980447a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980447ac @ 980447ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980447ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044820 @ 98044820 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98044820(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044900 @ 98044900 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98044900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980449e0 @ 980449e0 ==== */

double FUN_980449e0(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_10;
  
  dVar1 = (double)(longlong)(dRam98076e78 * param_1);
  dVar3 = -(dRam98076e88 * dVar1 - -(dRam98076e80 * dVar1 - param_1));
  dVar2 = dVar3 * dVar3;
  dVar3 = ((dRam98076ea0 * dVar2 + dRam98076e98) * dVar2 + dRam98076e90) * dVar3;
  dVar2 = dVar3 / (((dRam98076eb8 * dVar2 + dRam98076eb0) * dVar2 + dRam98076ea8) - dVar3) +
          (double)fRam98076ec4;
  uStack_10 = dVar2;
  if ((int)dVar1 + 1 != 0) {
    uStack_10._0_2_ = (ushort)((ulonglong)dVar2 >> 0x30);
    uStack_10 = (double)CONCAT26((short)((int)(short)((uStack_10._0_2_ >> 4 & 0x7ff) - 0x3fe) +
                                         (int)dVar1 + 1 + 0x3fe) * 0x10 | uStack_10._0_2_ & 0x800f,
                                 SUB86(dVar2,0));
  }
  dVar2 = dRam98076e68;
  if (param_1 - dRam98076e58 < 0.0) {
    dVar2 = uStack_10;
  }
  dVar1 = (double)fRam98076ec0;
  if (dRam98076e60 - param_1 < 0.0) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* ==== FUN_98044ac0 @ 98044ac0 ==== */

void FUN_98044ac0(void)

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


/* ==== FUN_98044ad4 @ 98044ad4 ==== */

void FUN_98044ad4(void)

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


/* ==== FUN_98044ae4 @ 98044ae4 ==== */

void FUN_98044ae4(void)

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


/* ==== FUN_98044ae8 @ 98044ae8 ==== */

void FUN_98044ae8(void)

{
  int in_r12;
  undefined8 unaff_f24;
  undefined8 unaff_f25;
  undefined8 unaff_f26;
  undefined8 unaff_f27;
  undefined8 unaff_f28;
  undefined8 unaff_f29;
  undefined8 unaff_f30;
  undefined8 unaff_f31;
  
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


/* ==== FUN_98044aec @ 98044aec ==== */

void FUN_98044aec(void)

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


/* ==== FUN_98044af0 @ 98044af0 ==== */

void FUN_98044af0(void)

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


/* ==== FUN_98044af8 @ 98044af8 ==== */

void FUN_98044af8(void)

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


/* ==== FUN_98044b0c @ 98044b0c ==== */

void FUN_98044b0c(void)

{
  return;
}


/* ==== FUN_98044b30 @ 98044b30 ==== */

void FUN_98044b30(void)

{
  return;
}


/* ==== FUN_98044b3c @ 98044b3c ==== */

void FUN_98044b3c(void)

{
  return;
}


/* ==== FUN_98044b44 @ 98044b44 ==== */

void FUN_98044b44(void)

{
  return;
}


/* ==== FUN_98044b58 @ 98044b58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98044b58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044c40 @ 98044c40 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98044c40(double param_1)

{
  if (param_1 == DAT_98002938) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98044d24 @ 98044d24 ==== */

void FUN_98044d24(void)

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


/* ==== FUN_98044d48 @ 98044d48 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_98044d48(double param_1)

{
  double dVar1;
  
  dVar1 = (double)(longlong)param_1;
  if (param_1 - dVar1 < 0.0) {
    dVar1 = dVar1 - _UNK_9800a578;
  }
  if (_UNK_9800a610 - ABS(param_1) < 0.0) {
    dVar1 = param_1;
  }
  if (-ABS(param_1) < 0.0) {
    param_1 = dVar1;
  }
  return param_1;
}


/* ==== FUN_98044d88 @ 98044d88 ==== */

double FUN_98044d88(double param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(param_1);
  if (dVar3 <= (double)fRam98076fac) {
    iVar1 = 0;
    dVar2 = dVar3 * dVar3;
    if (param_1 == (double)fRam98076fa0) {
      return param_1;
    }
  }
  else {
    iVar1 = 1;
    dVar2 = ((double)fRam98076fa4 - dVar3) * (double)fRam98076fac;
    dVar3 = -(SQRT(dVar2) * (double)fRam98076fa8);
  }
  dVar3 = (((((dRam98076ff0 * dVar2 + dRam98076fe8) * dVar2 + dRam98076fe0) * dVar2 + dRam98076fd8)
            * dVar2 + dRam98076fd0) * dVar2 * dVar3) /
          (((((dRam98077018 + dVar2) * dVar2 + dRam98077010) * dVar2 + dRam98077008) * dVar2 +
           dRam98077000) * dVar2 + dRam98076ff8) + dVar3 + *(double *)(iVar1 * 8 + -0x67f89050);
  if (param_1 < 0.0) {
    dVar3 = -dVar3;
  }
  return dVar3;
}


/* ==== FUN_98044e50 @ 98044e50 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_98044e50(double param_1)

{
  double dVar1;
  ushort uStack00000010;
  
  if (param_1 == _UNK_9800a578) {
    return DAT_98002938;
  }
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uStack00000010 & 0x7ff0) == 0x7ff0) {
    if (_UNK_9800a6a0 < param_1) {
      return param_1;
    }
  }
  else {
    if (DAT_98002938 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    dVar1 = _PTR_LAB_98077020;
    if (param_1 == DAT_98002938) goto LAB_98044e9c;
  }
  dVar1 = dRam98077028;
LAB_98044e9c:
  return -dVar1;
}


/* ==== FUN_980451c0 @ 980451c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980451c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98045200 @ 98045200 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98045200(void)

{
  undefined *puVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_98044798();
  FUN_98045840();
  if (iRam98078ff8 != 1) {
    puVar1 = &UNK_98080000;
    if (iRam98078ff4 == 1) {
      func_0x98058e04(0);
    }
    *(undefined4 *)(puVar1 + -0x700c) = 1;
    uRam98078ff0 = (undefined1)uVar7;
    if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
      piVar3 = piRam98079100;
      piVar4 = piRam98079104;
      piVar5 = piRam98079104;
      piVar6 = piRam98079100;
      if (piRam98079104 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar2 = (code *)*piVar6;
            *piVar6 = 0;
            (*pcVar2)();
            if ((piVar5 != piRam98079104) || (piVar3 != piRam98079100)) {
              piVar3 = piRam98079100;
              piVar4 = piRam98079104;
              piVar5 = piRam98079104;
              piVar6 = piRam98079100;
            }
          }
        }
      }
      func_0x98044fe0(0x98059038,0x9805903c);
    }
    func_0x98044fe0(0x98059040,FUN_98059044);
  }
  FUN_980451c0();
  if ((int)uVar7 == 0) {
    func_0x98058e04(0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98045210 @ 98045210 ==== */

void FUN_98045210(undefined4 param_1)

{
  uRam980790fc = param_1;
  return;
}


/* ==== FUN_98045220 @ 98045220 ==== */

undefined4 FUN_98045220(void)

{
  return uRam980790fc;
}


/* ==== FUN_98045230 @ 98045230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98045230(int param_1,int param_2,uint param_3)

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
    param_3 = param_3 & 3;
    if (param_3 != 0) {
      do {
        puVar2 = (undefined1 *)(uVar5 - 1);
        uVar5 = uVar5 - 1;
        *(undefined1 *)((int)puVar4 + -1) = *puVar2;
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980452f0 @ 980452f0 ==== */

int FUN_980452f0(byte *param_1,byte *param_2,int param_3)

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


/* ==== FUN_98045340 @ 98045340 ==== */

void FUN_98045340(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98045520 @ 98045520 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98045520(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98045548 @ 98045548 ==== */

void FUN_98045548(char *param_1,int param_2,int param_3)

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


/* ==== FUN_980455a8 @ 980455a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_980455a8(double param_1)

{
  double dVar1;
  
  dVar1 = (double)(longlong)param_1;
  if (dVar1 - param_1 < 0.0) {
    dVar1 = dVar1 + _UNK_9800a578;
  }
  if (_UNK_9800a610 - ABS(param_1) < 0.0) {
    dVar1 = param_1;
  }
  if (-ABS(param_1) < 0.0) {
    param_1 = dVar1;
  }
  return param_1;
}


/* ==== FUN_980455e8 @ 980455e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980455e8(void)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  
  uVar8 = 10;
  uVar9 = 0;
  uVar15 = FUN_98044794();
  pbVar4 = (byte *)((ulonglong)uVar15 >> 0x20);
  puVar5 = (undefined4 *)uVar15;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = pbVar4;
  }
  if ((pbVar4 == (byte *)0x0) || ((uVar8 != 0 && (((int)uVar8 < 2 || (0x24 < (int)uVar8)))))) {
    puVar5 = (undefined4 *)FUN_980458d8();
    *puVar5 = 0x16;
    FUN_980458a0();
    halt_baddata();
  }
  bVar1 = *pbVar4;
  uVar12 = 0;
  iVar10 = iRam980773e0;
  pbVar3 = pbVar4;
  while( true ) {
    uVar14 = (uint)bVar1;
    pbVar13 = pbVar3 + 1;
    if (*(int *)(iVar10 + 0xac) < 2) {
      uVar6 = *(ushort *)(uVar14 * 2 + *(int *)(iVar10 + 200)) & 8;
    }
    else {
      uVar6 = FUN_98046690(bVar1,8,0x980773e0);
      iVar10 = iRam980773e0;
    }
    if (uVar6 == 0) break;
    bVar1 = *pbVar13;
    pbVar3 = pbVar13;
  }
  if (bVar1 == 0x2d) {
    uVar9 = uVar9 | 2;
LAB_980463d0:
    uVar14 = (uint)*pbVar13;
    pbVar13 = pbVar3 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_980463d0;
  if ((((int)uVar8 < 0) || (uVar8 == 1)) || (0x24 < (int)uVar8)) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = pbVar4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar8 == 0) {
    if ((char)uVar14 != '0') {
      uVar8 = 10;
      goto LAB_98046468;
    }
    if ((*pbVar13 != 0x78) && (*pbVar13 != 0x58)) {
      uVar8 = 8;
      goto LAB_98046468;
    }
    uVar8 = 0x10;
  }
  else if (uVar8 != 0x10) goto LAB_98046468;
  if (((char)uVar14 == '0') && ((*pbVar13 == 0x78 || (*pbVar13 == 0x58)))) {
    uVar14 = (uint)pbVar13[1];
    pbVar13 = pbVar13 + 2;
  }
LAB_98046468:
  trapWord(6,uVar8,0);
  do {
    uVar2 = *(ushort *)(uVar14 * 2 + *(int *)(iVar10 + 200));
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) {
LAB_980464fc:
        pbVar13 = pbVar13 + -1;
        if ((uVar9 & 8) == 0) {
          if (puVar5 != (undefined4 *)0x0) {
            pbVar13 = pbVar4;
          }
        }
        else if (((uVar9 & 4) != 0) ||
                (((uVar9 & 1) == 0 &&
                 ((((uVar9 & 2) != 0 && (0x80000000 < uVar12)) ||
                  (((uVar9 & 2) == 0 && (0x7fffffff < uVar12)))))))) {
          puVar7 = (undefined4 *)FUN_980458d8();
          *puVar7 = 0x22;
        }
        if (puVar5 == (undefined4 *)0x0) {
          halt_baddata();
        }
        *puVar5 = pbVar13;
        halt_baddata();
      }
      iVar11 = (int)(char)uVar14;
      if ((0x60 < iVar11) && (iVar11 < 0x7b)) {
        iVar11 = iVar11 + -0x20;
      }
      uVar14 = iVar11 - 0x37;
    }
    else {
      uVar14 = (int)(char)uVar14 - 0x30;
    }
    if (uVar8 <= uVar14) goto LAB_980464fc;
    uVar6 = uVar9 | 8;
    if ((uVar12 < 0xffffffff / uVar8) ||
       ((uVar12 == 0xffffffff / uVar8 &&
        (trapWord(6,uVar8,0), uVar14 <= -((0xffffffff / uVar8) * uVar8) - 1)))) {
      uVar12 = uVar12 * uVar8 + uVar14;
    }
    else {
      uVar9 = uVar9 | 0xc;
      uVar6 = uVar9;
      if (puVar5 == (undefined4 *)0x0) goto LAB_980464fc;
    }
    uVar14 = (uint)*pbVar13;
    pbVar13 = pbVar13 + 1;
    uVar9 = uVar6;
  } while( true );
}


/* ==== FUN_980455f8 @ 980455f8 ==== */

undefined8 FUN_980455f8(undefined8 param_1,undefined4 param_2,short param_3)

{
  ushort uStack00000010;
  undefined8 uStack_10;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uStack_10 = CONCAT26((param_3 + 0x3fe) * 0x10 | uStack00000010 & 0x800f,(int6)param_1);
  return uStack_10;
}


/* ==== FUN_98045620 @ 98045620 ==== */

int FUN_98045620(undefined8 param_1)

{
  return (int)(short)(((ushort)((ulonglong)param_1 >> 0x34) & 0x7ff) - 0x3fe);
}


/* ==== FUN_98045638 @ 98045638 ==== */

undefined4 FUN_98045638(ulonglong param_1)

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


/* ==== FUN_980456c0 @ 980456c0 ==== */

double FUN_980456c0(double param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ushort uStack00000010;
  undefined6 uStack00000012;
  double local_10;
  
  if (param_1 == DAT_98002938) {
    iVar4 = 0;
  }
  else {
    uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
    if ((((ulonglong)param_1 & 0x7ff0000000000000) == 0) &&
       ((uStack00000012._2_4_ = SUB84(param_1,0), ((ulonglong)param_1 & 0xfffff00000000) != 0 ||
        (uStack00000012._2_4_ != 0)))) {
      iVar4 = -0x3fd;
      bVar5 = param_1 < DAT_98002938;
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


/* ==== FUN_980457b8 @ 980457b8 ==== */

undefined8 FUN_980457b8(undefined8 param_1,undefined8 param_2)

{
  uint uStack00000010;
  uint uStack00000018;
  
  uStack00000018 = (uint)((ulonglong)param_2 >> 0x20);
  uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
  return CONCAT44(uStack00000010 & 0x7fffffff | uStack00000018 & 0x80000000,(int)param_1);
}


/* ==== FUN_98045840 @ 98045840 ==== */

void FUN_98045840(void)

{
  func_0x98058db4();
  func_0x98058ae4(&PTR_LAB_98077054);
  return;
}


/* ==== FUN_98045870 @ 98045870 ==== */

void FUN_98045870(void)

{
  func_0x98058ad4(&PTR_LAB_98077054);
  func_0x98058d84();
  return;
}


/* ==== FUN_980458a0 @ 980458a0 ==== */

void FUN_980458a0(void)

{
  undefined4 in_r0;
  
  if (pcRam980790f8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x980458c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam980790f8)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}


/* ==== FUN_980458d8 @ 980458d8 ==== */

undefined4 FUN_980458d8(void)

{
  return 0x980790f4;
}


/* ==== FUN_980458e8 @ 980458e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980458e8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5,
                 uint *param_6,int param_7)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *in_stack_00000014;
  undefined4 uStack_50;
  
  uVar3 = FUN_9804479c();
  in_stack_00000014 = (uint *)((ulonglong)uVar3 >> 0x20);
  puVar2 = (uint *)uVar3;
  in_stack_00000014[1] = 0;
  in_stack_00000014[2] = 0;
  in_stack_00000014[3] = 0;
  if ((param_3 & 0x10) != 0) {
    uStack_50 = 0xc000008f;
    in_stack_00000014[1] = in_stack_00000014[1] | 0x80000000;
  }
  if ((param_3 & 2) != 0) {
    uStack_50 = 0xc0000093;
    in_stack_00000014[1] = in_stack_00000014[1] | 0x40000000;
  }
  if ((param_3 & 1) != 0) {
    uStack_50 = 0xc0000091;
    in_stack_00000014[1] = in_stack_00000014[1] | 0x20000000;
  }
  if ((param_3 & 4) != 0) {
    uStack_50 = 0xc000008e;
    in_stack_00000014[1] = in_stack_00000014[1] | 0x10000000;
  }
  if ((param_3 & 8) != 0) {
    uStack_50 = 0xc0000090;
    in_stack_00000014[1] = in_stack_00000014[1] | 0x8000000;
  }
  in_stack_00000014[2] = (~*puVar2 & 0x80) << 0x14 | in_stack_00000014[2] & 0xf7ffffff;
  in_stack_00000014[2] = (~*puVar2 & 0x10) << 0x18 | in_stack_00000014[2] & 0xefffffff;
  in_stack_00000014[2] = (~*puVar2 & 0x40) << 0x17 | in_stack_00000014[2] & 0xdfffffff;
  in_stack_00000014[2] = (~*puVar2 & 0x20) << 0x19 | in_stack_00000014[2] & 0xbfffffff;
  in_stack_00000014[2] = (~*puVar2 & 8) << 0x1c | in_stack_00000014[2] & 0x7fffffff;
  uVar1 = FUN_98046280();
  if ((uVar1 & 0x20000000) != 0) {
    in_stack_00000014[3] = in_stack_00000014[3] | 0x8000000;
  }
  if ((uVar1 & 0x4000000) != 0) {
    in_stack_00000014[3] = in_stack_00000014[3] | 0x10000000;
  }
  if ((uVar1 & 0x10000000) != 0) {
    in_stack_00000014[3] = in_stack_00000014[3] | 0x20000000;
  }
  if ((uVar1 & 0x8000000) != 0) {
    in_stack_00000014[3] = in_stack_00000014[3] | 0x40000000;
  }
  if ((uVar1 & 0x2000000) != 0) {
    in_stack_00000014[3] = in_stack_00000014[3] | 0x80000000;
  }
  uVar1 = *puVar2 & 3;
  if (uVar1 == 0) {
    uVar1 = *in_stack_00000014 & 0x3fffffff;
LAB_98045b20:
    *in_stack_00000014 = uVar1;
  }
  else {
    if (uVar1 == 1) {
      uVar1 = *in_stack_00000014 | 0xc0000000;
      goto LAB_98045b20;
    }
    if (uVar1 < 3) {
      uVar1 = *in_stack_00000014 & 0x3fffffff | 0x80000000;
      goto LAB_98045b20;
    }
    if (uVar1 == 3) {
      uVar1 = *in_stack_00000014 & 0x3fffffff | 0x40000000;
      goto LAB_98045b20;
    }
  }
  *in_stack_00000014 = *in_stack_00000014 & 0xc7ffffff | 0x8000000;
  *in_stack_00000014 = (param_4 & 0xfff) << 0xf | *in_stack_00000014 & 0xf8007fff;
  in_stack_00000014[8] = in_stack_00000014[8] | 0x80000000;
  if (param_7 == 0) {
    in_stack_00000014[8] = in_stack_00000014[8] & 0x87ffffff | 0x8000000;
    *(undefined8 *)(in_stack_00000014 + 4) = *(undefined8 *)param_5;
    in_stack_00000014[0x18] = in_stack_00000014[0x18] | 0x80000000;
    in_stack_00000014[0x18] = in_stack_00000014[0x18] & 0x87ffffff | 0x8000000;
    *(undefined8 *)(in_stack_00000014 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    in_stack_00000014[8] = in_stack_00000014[8] & 0x87ffffff;
    in_stack_00000014[4] = *param_5;
    in_stack_00000014[0x18] = in_stack_00000014[0x18] | 0x80000000;
    in_stack_00000014[0x18] = in_stack_00000014[0x18] & 0x87ffffff;
    in_stack_00000014[0x14] = *param_6;
  }
  FUN_98046658();
  FUN_98049f88(uStack_50,0,1,&stack0x00000014);
  if ((in_stack_00000014[2] & 0x8000000) != 0) {
    *puVar2 = *puVar2 & 0xffffff7f;
  }
  if ((in_stack_00000014[2] & 0x10000000) != 0) {
    *puVar2 = *puVar2 & 0xffffffef;
  }
  if ((in_stack_00000014[2] & 0x20000000) != 0) {
    *puVar2 = *puVar2 & 0xffffffbf;
  }
  if ((in_stack_00000014[2] & 0x40000000) != 0) {
    *puVar2 = *puVar2 & 0xffffffdf;
  }
  if ((in_stack_00000014[2] & 0x80000000) != 0) {
    *puVar2 = *puVar2 & 0xfffffff7;
  }
  uVar1 = *in_stack_00000014 >> 0x1e;
  if (uVar1 == 0) {
    uVar1 = *puVar2 & 0xfffffffc;
  }
  else if (uVar1 == 1) {
    uVar1 = *puVar2 | 3;
  }
  else if (uVar1 < 3) {
    uVar1 = *puVar2 & 0xfffffffc | 2;
  }
  else {
    if (uVar1 != 3) goto LAB_98045ccc;
    uVar1 = *puVar2 & 0xfffffffc | 1;
  }
  *puVar2 = uVar1;
LAB_98045ccc:
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(in_stack_00000014 + 0x14);
  }
  else {
    *param_6 = in_stack_00000014[0x14];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98045cf0 @ 98045cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_98045cf0(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar8 = FUN_980447a4();
  dVar3 = DAT_98002938;
  pdVar4 = (double *)uVar8;
  if (((uVar8 & 0x800000000) == 0) || ((param_3 & 0x80) == 0)) {
    if (((uVar8 & 0x400000000) == 0) || ((param_3 & 0x10) == 0)) {
      if (((uVar8 & 0x100000000) == 0) || ((param_3 & 0x40) == 0)) {
        if (((uVar8 & 0x200000000) != 0) && ((param_3 & 0x20) != 0)) {
          bVar1 = (uVar8 & 0x1000000000) != 0;
          if (*pdVar4 == DAT_98002938) {
            bVar1 = true;
          }
          else {
            dVar6 = FUN_980456c0(*pdVar4,(int)(uVar8 >> 0x20),(int *)&local_40);
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
            FUN_980462b4(0x8000000);
          }
        }
      }
      else {
        FUN_980462b4(0x10000000);
        uVar2 = param_3 & 3;
        dVar3 = _PTR_LAB_98077020;
        dVar6 = _PTR_LAB_98077020;
        if (uVar2 == 0) {
          dVar7 = *pdVar4;
        }
        else if (uVar2 == 1) {
          dVar7 = *pdVar4;
          dVar3 = _PTR_LAB_98077030;
          dVar6 = _PTR_LAB_98077030;
        }
        else if (uVar2 < 3) {
          dVar7 = *pdVar4;
          dVar3 = _PTR_LAB_98077030;
        }
        else {
          if (uVar2 != 3) goto LAB_98045f14;
          dVar7 = *pdVar4;
          dVar6 = _PTR_LAB_98077030;
        }
        if (dVar7 <= DAT_98002938) {
          dVar6 = -dVar3;
        }
        *pdVar4 = dVar6;
      }
    }
    else {
      FUN_980462b4(0x4000000);
    }
  }
  else {
    FUN_980462b4(0x20000000);
  }
LAB_98045f14:
  if (((uVar8 & 0x1000000000) != 0) && ((param_3 & 8) != 0)) {
    FUN_980462b4(0x2000000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98045f48 @ 98045f48 ==== */

void FUN_98045f48(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_980458d8();
    uVar2 = 0x21;
  }
  else {
    if (param_1 < 2) {
      return;
    }
    if (3 < param_1) {
      return;
    }
    puVar1 = (undefined4 *)FUN_980458d8();
    uVar2 = 0x22;
  }
  *puVar1 = uVar2;
  return;
}


/* ==== FUN_98045f90 @ 98045f90 ==== */

int FUN_98045f90(uint param_1)

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


/* ==== FUN_98045fd8 @ 98045fd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98045fd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980460e0 @ 980460e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980460e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98046160 @ 98046160 ==== */

void FUN_98046160(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98046250 @ 98046250 ==== */

uint FUN_98046250(void)

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


/* ==== FUN_98046280 @ 98046280 ==== */

uint FUN_98046280(void)

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


/* ==== FUN_980462b4 @ 980462b4 ==== */

ulonglong FUN_980462b4(uint param_1)

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


/* ==== FUN_980465d8 @ 980465d8 ==== */

uint FUN_980465d8(uint param_1)

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


/* ==== FUN_98046658 @ 98046658 ==== */

void FUN_98046658(void)

{
  FUN_98046250(0,0xfff80700);
  FUN_980465d8();
  return;
}


/* ==== FUN_98046688 @ 98046688 ==== */

undefined4 FUN_98046688(void)

{
  return 0;
}


/* ==== FUN_98046690 @ 98046690 ==== */

ushort FUN_98046690(int param_1,ushort param_2)

{
  if ((-2 < param_1) && (param_1 < 0x100)) {
    return *(ushort *)(*(int *)(iRam980773e0 + 200) + param_1 * 2) & param_2;
  }
  return 0;
}


/* ==== FUN_980466f8 @ 980466f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980466f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98046780 @ 98046780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98046780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980467f0 @ 980467f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980467f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98046800 @ 98046800 ==== */

undefined4 FUN_98046800(void)

{
  return *(undefined4 *)(DAT_9800052c + 0x10);
}


/* ==== FUN_98046810 @ 98046810 ==== */

bool FUN_98046810(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_980776b0 + 4))();
  if (iVar1 < 0) {
    FUN_9804a030();
  }
  return iVar1 >= 0;
}


/* ==== FUN_98046858 @ 98046858 ==== */

void FUN_98046858(undefined4 param_1,undefined4 param_2)

{
  FUN_9804a088(param_1,param_2,0);
  return;
}


/* ==== FUN_98046860 @ 98046860 ==== */

/* WARNING: Removing unreachable block (ram,0x9804a110) */

undefined4 FUN_98046860(void)

{
  int iVar1;
  undefined4 uStack_10;
  
  iVar1 = FUN_98059024();
  if (iVar1 < 0) {
    FUN_9804a030();
    uStack_10 = 0;
  }
  return uStack_10;
}


/* ==== FUN_98046870 @ 98046870 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98046870(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98046a48 @ 98046a48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98046a48(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_980447a8();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  piVar3 = (int *)*(int *)(iVar2 + 0x38);
  piVar1 = (int *)(iVar2 + 0x38);
  do {
    piVar6 = piVar3;
    if (piVar6 == (int *)0x0) {
LAB_98046aec:
      piVar3 = (int *)FUN_98046870();
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
      goto LAB_98046aec;
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


/* ==== FUN_98046b68 @ 98046b68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98046b68(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

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
  
  uVar12 = FUN_9804479c();
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
    iVar2 = func_0x98058b14(local_50,param_3,0x60001000,4,*(undefined4 *)(iVar2 + 0x590));
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


/* ==== FUN_98046df8 @ 98046df8 ==== */

undefined4 FUN_98046df8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c [3];
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    local_c[0] = *(undefined4 *)(param_1 + 0x20);
    local_10 = 0;
    uVar1 = func_0x98058b04(local_c,&local_10,0x8000,param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_98046e50 @ 98046e50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98046e50(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

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
  
  uVar10 = FUN_9804479c();
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
          func_0x98058eb4(puVar8 + 0xc,uVar5,0xfeeefeee);
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
        func_0x98058eb4(puVar9 + 0xc,uVar5,0xfeeefeee);
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
          func_0x98058eb4(puVar8 + 0xc,uVar5,0xfeeefeee);
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
        func_0x98058eb4(puVar9 + 0xc,uVar5,0xfeeefeee);
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


/* ==== FUN_98047258 @ 98047258 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98047258(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar13 = FUN_980447a8();
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


/* ==== FUN_98047390 @ 98047390 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98047390(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_30;
  undefined4 local_2c [9];
  undefined4 local_8;
  
  iVar1 = FUN_980447a8();
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x14) & 0x40000) != 0) &&
       (uVar2 = func_0x98058b34(), *(byte *)(iVar1 + 0x17b) != uVar2)) {
      func_0x98058ea4(0xf4,iVar1,local_8,0x520,0);
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x58);
    while ((undefined4 *)(iVar1 + 0x58) != puVar5) {
      puVar6 = (undefined4 *)*puVar5;
      local_2c[0] = 0;
      local_30 = puVar5;
      func_0x98058b04(&local_30,local_2c,0x8000,*(undefined4 *)(iVar1 + 0x590));
      puVar5 = puVar6;
    }
    if ((*(uint *)(iVar1 + 0x14) & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x580) = 0;
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x48) = 0;
    while (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar5;
      local_2c[0] = 0;
      local_30 = puVar5;
      func_0x98058b04(&local_30,local_2c,0x8000,*(undefined4 *)(iVar1 + 0x590));
      puVar5 = puVar6;
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x590);
    uVar2 = 0x40;
    do {
      uVar2 = uVar2 + 0xff & 0xff;
      iVar3 = *(int *)((uVar2 + 0x18) * 4 + iVar1);
      if (iVar3 != 0) {
        FUN_98046df8(iVar3,uVar4);
      }
    } while (uVar2 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980474a8 @ 980474a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980474a8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
  
  uVar8 = FUN_98044790();
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
    iVar3 = func_0x98058b14(&stack0x0000003c,local_60,0x60001000,4,*(undefined4 *)(puVar2 + 0x2c8));
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
    FUN_98046a48(puVar4,param_6,iVar3 * 0x10000);
  }
  *(undefined2 **)(puVar2 + ((param_3 & 0xff) + 0x18) * 2) = puVar4;
  uVar6 = *puVar4;
  *(undefined1 *)(uVar1 + 5) = 0x10;
  *(uint *)(puVar4 + 0x20) = uVar1;
  *(char *)(uVar1 + 4) = (char)param_3;
  *(undefined2 *)(uVar1 + 2) = uVar6;
  FUN_98047258(puVar2,uVar1,(int)(uStack0000003c - uVar1) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98047610 @ 98047610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98047610(void)

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
  
  uVar8 = FUN_980447a4();
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
            (iVar2 = FUN_98046b68(iVar1,local_3c,&local_38,0), iVar2 != 0)) {
      local_38 = local_38 >> 4;
      uVar3 = FUN_98046e50(iVar1,iVar2,(int *)&local_38,0);
      FUN_98047258(iVar1,uVar3,local_38);
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
    iVar2 = func_0x98058b14(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
    if (iVar2 < 0) {
      do {
        if (local_40 == uVar7) break;
        local_40 = local_40 >> 1;
        if (local_40 < uVar7) {
          local_40 = uVar7;
        }
        iVar2 = func_0x98058b14(&local_3c,&local_40,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
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
    iVar2 = func_0x98058b14(&local_3c,local_34,0x60001000,4,*(undefined4 *)(iVar1 + 0x590));
    if (-1 < iVar2) {
      iVar4 = FUN_980474a8(iVar1,local_3c,uVar5,0,(undefined2 *)local_3c,local_34[0] + local_3c,
                           local_40 + local_3c);
      if (iVar4 == 0) {
        iVar2 = -0x3fffffe9;
      }
      if (-1 < iVar2) {
        halt_baddata();
      }
    }
    func_0x98058b04(&local_3c,&local_40,0x8000,*(undefined4 *)(iVar1 + 0x590));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98047850 @ 98047850 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98047850(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar14 = FUN_98044784();
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
    if ((uStack_80 != 0) && (puVar3 = (undefined4 *)FUN_98046870(), puVar3 != (undefined4 *)0x0)) {
      iVar4 = func_0x98058b04(apuStack_7c,&uStack_80,0x4000,*(undefined4 *)(iVar2 + 0x590));
      *puVar3 = *(undefined4 *)(*(int *)(iVar11 + 0x18) + 0x4c);
      *(undefined4 **)(*(int *)(iVar11 + 0x18) + 0x4c) = puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if (-1 < iVar4) {
        FUN_98046a48(iVar11,apuStack_7c[0],uStack_80);
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
  FUN_98047258(iVar2,puVar5,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98047bb8 @ 98047bb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98047bb8(void)

{
  FUN_98044788();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048188 @ 98048188 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048188(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  uVar18 = FUN_98044790();
  iVar4 = (int)((ulonglong)uVar18 >> 0x20);
  puStack_dc = (uint *)0x0;
  uStack_d8 = 0;
  iStack_c4 = iVar4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar5 = func_0x98058b34(), *(byte *)(iVar4 + 0x17b) != uVar5)) {
    func_0x98058ea4(0xf4,iVar4,uStack_8,0x5ea,param_3);
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
    func_0x98058ae4(*(undefined4 *)(iVar4 + 0x580));
    uStack_d8 = 1;
  }
  if (0x7f < uVar8) {
    if (*(uint *)(iVar4 + 0x1c) < uVar8) {
      if ((*(uint *)(iVar4 + 0x14) & 2) != 0) {
        uStack_e8 = uStack_e8 + 0x20;
        puStack_ec = (uint *)0x0;
        iVar7 = func_0x98058b14(&puStack_ec,&uStack_e8,(~uVar15 & 8) << 0x14 | 0x60001000,4,
                                *(undefined4 *)(iVar4 + 0x590));
        if (-1 < iVar7) {
          FUN_980441a0(puStack_ec,0,0x30);
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
          goto LAB_980447e0;
        }
      }
    }
    else {
LAB_98048440:
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
            goto LAB_98048514;
          }
        }
      }
      puStack_e4 = (ushort *)FUN_98047610();
      if (puStack_e4 != (ushort *)0x0) {
        piVar12 = *(int **)(puStack_e4 + 6);
        iVar7 = *(int *)(puStack_e4 + 4);
        if (((ushort *)*piVar12 == *(ushort **)(iVar7 + 4)) &&
           ((ushort *)*piVar12 == puStack_e4 + 4)) {
          *piVar12 = iVar7;
          *(int **)(iVar7 + 4) = piVar12;
        }
        goto LAB_98048514;
      }
    }
    if ((uVar15 & 4) != 0) {
      uStack_b0 = 0xc0000017;
      uStack_a8 = 0;
      uStack_a0 = 1;
      uStack_ac = 0;
      uStack_9c = uStack_e8;
      func_0x98058ed4(&uStack_b0);
    }
    puStack_dc = (uint *)0x0;
    goto LAB_980447e0;
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
        goto LAB_98048368;
      }
      iVar7 = iVar4 + 0x180;
    }
    else if (uVar5 == 1) {
LAB_98048368:
      if (uStack_d4 == 0) {
        uStack_d4 = *puStack_e0;
        puStack_e0 = puStack_e0 + 1;
        goto LAB_98048388;
      }
      iVar7 = iVar4 + 0x280;
    }
    else {
      if (uVar5 < 3) {
LAB_98048388:
        if (uStack_d4 != 0) {
          iVar7 = iVar4 + 0x380;
          goto LAB_980483b4;
        }
        uStack_d4 = *puStack_e0;
        puStack_e0 = puStack_e0 + 1;
      }
      else if (uVar5 != 3) goto LAB_98048440;
      if (uStack_d4 == 0) goto LAB_98048440;
      iVar7 = iVar4 + 0x480;
    }
LAB_980483b4:
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
LAB_98048514:
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
                goto LAB_980486a8;
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
            goto LAB_980486ac;
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
            goto LAB_9804886c;
          }
          FUN_98047258(iVar4,puVar17,uVar5);
        }
        else {
          if (uVar3 < 0x80) {
            piVar12 = (int *)((uVar3 + 0x30) * 8 + iVar4);
            *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar17 + 5) & 0x10;
            if ((int *)*piVar12 == piVar12) {
              iVar7 = ((*puVar17 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar17 & 0x1f) | *(uint *)(iVar7 + iVar4);
LAB_980486a8:
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
LAB_980486ac:
          puVar13 = (undefined4 *)piVar12[1];
          *(int **)(puVar17 + 4) = piVar12;
          *(undefined4 **)(puVar17 + 6) = puVar13;
          *puVar13 = puVar17 + 4;
          piVar12[1] = (int)(puVar17 + 4);
          iVar7 = uVar5 + *(int *)(iVar4 + 0x30);
LAB_9804886c:
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
    func_0x98058ad4(*(undefined4 *)(iVar4 + 0x580));
    uStack_d8 = 0;
  }
  if ((uVar15 & 8) != 0) {
    FUN_980441a0(puVar6,0,param_3);
  }
LAB_980447e0:
  FUN_98048a30();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048a30 @ 98048a30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048a80 @ 98048a80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048a80(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  uint auStack_50 [4];
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_8;
  
  uVar8 = FUN_980447a0();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  auStack_50[1] = 0;
  auStack_50[2] = 1;
  iStack_3c = iVar4;
  if (((*(uint *)(iVar4 + 0x14) & 0x40000) != 0) &&
     (uVar2 = func_0x98058b34(), *(byte *)(iVar4 + 0x17b) != uVar2)) {
    func_0x98058ea4(0xf4,iVar4,uStack_8,0x1160,param_3);
  }
  if (param_3 == 0) {
    halt_baddata();
  }
  bVar1 = ((*(uint *)(iVar4 + 0x18) | (uint)uVar8) & 1) == 0;
  if (bVar1) {
    func_0x98058ae4(*(undefined4 *)(iVar4 + 0x580));
    auStack_50[1] = 1;
  }
  if ((*(byte *)(param_3 + -0xb) & 8) != 0) {
    iStack_40 = param_3 + -0x30;
    iVar6 = *(int *)(param_3 + -0x30);
    piVar7 = *(int **)(param_3 + -0x2c);
    *piVar7 = iVar6;
    *(int **)(iVar6 + 4) = piVar7;
    if (bVar1) {
      func_0x98058ad4(*(undefined4 *)(iVar4 + 0x580));
      auStack_50[1] = 0;
    }
    auStack_50[0] = 0;
    iVar4 = func_0x98058b04(&iStack_40,auStack_50,0x8000,*(undefined4 *)(iVar4 + 0x590));
    auStack_50[2] = 0xffffffffU - (iVar4 >> 0x1f) & 1;
    goto LAB_98048ce4;
  }
  auStack_50[0] = (uint)*(ushort *)(param_3 + -0x10);
  puVar3 = (ushort *)FUN_98046e50(iVar4,(ushort *)(param_3 + -0x10),(int *)auStack_50,0);
  if (auStack_50[0] < 0x80) {
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) & 0x10;
    piVar7 = (int *)(((auStack_50[0] & 0xffff) + 0x30) * 8 + iVar4);
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
    if ((*(uint *)(iVar4 + 0x28) <= auStack_50[0]) &&
       (*(uint *)(iVar4 + 0x2c) <= *(int *)(iVar4 + 0x30) + auStack_50[0])) {
      FUN_98047850(iVar4);
      goto LAB_98048ce4;
    }
    if (0xf000 < auStack_50[0]) {
      FUN_98047258(iVar4,puVar3,auStack_50[0]);
      goto LAB_98048ce4;
    }
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) & 0x10;
    for (auStack_50[3] = *(int *)(iVar4 + 0x180);
        (iVar4 + 0x180 != auStack_50[3] &&
        (iStack_40 = auStack_50[3] + -8,
        (uint)*(ushort *)(auStack_50[3] + -8) < (auStack_50[0] & 0xffff)));
        auStack_50[3] = *(uint *)auStack_50[3]) {
    }
    puVar5 = *(undefined4 **)(auStack_50[3] + 4);
    *(uint *)(puVar3 + 4) = auStack_50[3];
    *(undefined4 **)(puVar3 + 6) = puVar5;
    *puVar5 = puVar3 + 4;
    *(ushort **)(auStack_50[3] + 4) = puVar3 + 4;
    iVar6 = *(int *)(iVar4 + 0x30);
  }
  *(uint *)(iVar4 + 0x30) = iVar6 + auStack_50[0];
LAB_98048ce4:
  FUN_98048d24();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048d24 @ 98048d24 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048d24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048d70 @ 98048d70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048d70(void)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uStack0000001c;
  
  uVar4 = FUN_980447a4();
  uVar3 = (uint)uVar4;
  if ((uVar4 & 0x80000000) == 0) {
    uStack0000001c = uVar3;
    FUN_9804a160();
  }
  else {
    if ((uVar4 & 0xf000000) == 0) {
      uVar3 = uVar3 & 0xf0ffffff | 0xc000000;
    }
    uStack0000001c._1_1_ = (char)(uVar3 >> 0x10);
    uStack0000001c = uVar3;
    if ((((((uStack0000001c._1_1_ == -100) || (bVar1 = uStack0000001c._1_1_ == -0x42, bVar1)) &&
          (((uVar3 & 0x1fff) == 1 || ((uVar3 & 0x1fff) == 2)))) &&
         (puVar2 = (uint *)FUN_98046780(), puVar2 != (uint *)0x0)) ||
        (puVar2 = (uint *)FUN_980466f8(), puVar2 != (uint *)0x0)) && ((uVar3 & 0x40000000) != 0)) {
      FUN_980441a0(puVar2,0,(uint)(uVar4 >> 0x20));
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048ea8 @ 98048ea8 ==== */

void FUN_98048ea8(int param_1,uint param_2)

{
  if ((param_2 & 0x80000000) == 0) {
    thunk_FUN_9804b440();
    return;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_980467f0();
  return;
}


/* ==== FUN_98048ec8 @ 98048ec8 ==== */

undefined4 FUN_98048ec8(void)

{
  int unaff_r13;
  
  return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x14c);
}


/* ==== FUN_98048ed8 @ 98048ed8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048ed8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r0;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uVar9 = FUN_980447a8();
  iVar3 = (int)(uVar9 >> 0x20);
  uVar2 = (uint)uVar9 & 0xff;
  uVar5 = param_3 >> 7;
  if ((uVar9 & 0xff) == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      dataCacheBlockClearToZero(iVar3);
      iVar3 = iVar3 + 0x80;
    }
  }
  else {
    uVar6 = (uint)(uVar5 != 0);
    auVar7 = vectorSplatImmediateSignedByte(4);
    loadVectorForShiftLeft(in_r0,uVar2);
    iVar4 = 0;
    auVar8 = loadVectorForShiftLeft(in_r0,(int)uVar2 >> 4);
    vectorShiftLeftIntegerByte(auVar8,auVar7);
    if (uVar6 != 0) {
      iVar1 = 0;
      do {
        dataCacheBlockClearToZero(iVar1 + iVar3);
        iVar4 = iVar4 + 1;
        iVar1 = iVar4 * 0x80;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (uVar5 != 0) {
      if (1 < uVar5) {
        dataCacheBlockClearToZero(iVar3 + 0x80);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98048fd8 @ 98048fd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98048fd8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 in_r0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs59 [16];
  ulonglong uVar8;
  
  uVar8 = FUN_980447a0();
  puVar1 = (undefined4 *)(uVar8 >> 0x20);
  puVar2 = (undefined4 *)uVar8;
  if (param_3 < 0x10) {
    if ((7 < param_3) && ((uVar8 & 7) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((uVar8 & 3) == 0) && (3 < param_3)) {
      uVar6 = param_3 >> 2;
      FUN_980446c8(puVar1,puVar2,param_3 & 0xfffffffc);
      uVar8 = CONCAT44((param_3 & 0xfffffffc) + (int)puVar1,(param_3 & 0xfffffffc) + (int)puVar2);
      do {
        uVar6 = uVar6 - 1;
        param_3 = param_3 - 4;
      } while (uVar6 != 0);
    }
    iVar4 = DAT_9807767c;
    puVar7 = (undefined1 *)(uVar8 >> 0x20);
    if (param_3 != 0) {
      iVar5 = (int)uVar8 - (int)puVar7;
      do {
        param_3 = param_3 - iVar4;
        *puVar7 = puVar7[iVar5];
        puVar7 = puVar7 + 1;
      } while (param_3 != 0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = -(int)puVar1 >> 4 & 7;
  uVar3 = param_3;
  if (0x3ff < param_3) {
    uVar3 = 0x400;
  }
  iVar4 = 0;
  if (uVar3 != 0) {
    iVar5 = (uVar3 - 1 >> 7) + 1;
    do {
      dataCacheBlockTouch(iVar4 + (int)puVar2);
      iVar4 = iVar4 + 0x80;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((-(int)puVar1 & 0xfU) != 0) {
    altv207_13(in_vs32,in_vs36);
    altv207_13(in_vs36,in_vs59);
    loadVectorForShiftLeft(in_r0,puVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 >> 4 < uVar6) {
    uVar6 = param_3 >> 4;
  }
  uVar6 = param_3 + uVar6 * -0x10 & 0xffffff80;
  if (0x7f < uVar6) {
    uVar6 = 0x80;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    do {
      dataCacheBlockClearToZero((int)puVar1 + uVar3 + 0x7f);
      uVar3 = uVar3 + 0x80;
    } while (uVar3 < uVar6);
  }
  loadVectorForShiftLeft(in_r0,puVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980492d0 @ 980492d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980492d0(void)

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


/* ==== FUN_980492f0 @ 980492f0 ==== */

void FUN_980492f0(undefined4 param_1)

{
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  func_0x98058df4(&uStack_10,param_1);
  FUN_9804b2e0(&uStack_10);
  return;
}


/* ==== FUN_98049330 @ 98049330 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049330(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980493c0 @ 980493c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980493c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980493c8 @ 980493c8 ==== */

bool FUN_980493c8(void)

{
  int iVar1;
  
  iVar1 = func_0x98058ef4();
  if (-1 >= iVar1) {
    thunk_FUN_9804a030();
  }
  return -1 < iVar1;
}


/* ==== FUN_98049400 @ 98049400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049400(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049470 @ 98049470 ==== */

undefined4 FUN_98049470(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = func_0x98058f14(param_1,9,0,local_10);
  if (iVar1 < 0) {
    thunk_FUN_9804a030();
    local_10[0] = 0;
  }
  return local_10[0];
}


/* ==== FUN_980494b8 @ 980494b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980494b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980494f0 @ 980494f0 ==== */

void FUN_980494f0(double param_1,uint param_2)

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
  if (*DAT_98000494 != 0) {
    fStack_1c = fStack0000001c;
    (**(code **)(*DAT_98000494 + 0x18))(0x43,&puStack_18);
  }
  return;
}


/* ==== FUN_98049558 @ 98049558 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049558(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_60 [4];
  uint *local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  
  uVar7 = FUN_980447a4();
  local_60[1] = (uint)((ulonglong)uVar7 >> 0x20);
  local_48 = (undefined4)uVar7;
  local_44 = param_3 + 3U >> 2;
  iVar6 = local_44 + 3;
  local_50 = local_60;
  local_4c = 3;
  local_60[0] = iVar6 * 0x1000000 & 0x7f000000U | 0x62;
  local_40 = 0;
  local_60[2] = param_3;
  if (*DAT_98000494 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(*DAT_98000494 + 0x18))(0x5e,&local_50);
    uVar7 = CONCAT44(local_60[1],local_48);
  }
  local_60[1] = (uint)((ulonglong)uVar7 >> 0x20);
  local_48 = (undefined4)uVar7;
  if ((iVar4 < 1) && (-1 < iVar4)) {
    uVar5 = iVar6 * -4 & 0xfffffff0;
    FUN_98044d24();
    uVar3 = local_60[2];
    uVar2 = local_60[1];
    uVar1 = local_60[0];
    *(BADSPACEBASE **)(&stack0xffffff50 + uVar5) = register0x00000004;
    *(uint *)((int)local_60 + uVar5) = uVar1;
    *(uint *)((int)local_60 + uVar5 + 4) = uVar2;
    *(uint *)((int)local_60 + uVar5 + 8) = uVar3;
    FUN_98044240();
    if (*DAT_98000494 != 0) {
      local_50 = (uint *)((int)local_60 + uVar5);
      local_4c = iVar6;
      (**(code **)(*DAT_98000494 + 0x18))(0x43,&local_50);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049678 @ 98049678 ==== */

undefined4 FUN_98049678(void)

{
  undefined4 uVar1;
  
  if (*DAT_98000494 != 0) {
                    /* WARNING: Could not recover jumptable at 0x9804969c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_98000494 + 0x18))(0x44,0);
    return uVar1;
  }
  return 0;
}


/* ==== FUN_980496a8 @ 980496a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980496a8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_70 [2];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined1 auStack_40 [64];
  
  uVar1 = FUN_980447a8();
  func_0x98058df4(auStack_68,uVar1);
  local_54 = auStack_68;
  local_58 = 0xfffffffd;
  local_50 = 0x40;
  iVar2 = func_0x98058f44(local_70,0x100001,&local_58,auStack_60,3,0x800021);
  if (iVar2 < 0) {
    FUN_9804a030();
    iVar2 = thunk_FUN_9804a068();
    if (iVar2 == 2) {
      thunk_FUN_9804a018(3);
    }
  }
  else {
    iVar2 = func_0x98058f34(local_70[0],auStack_60,auStack_40,0x18,3);
    func_0x98058f24(local_70[0]);
    if (-1 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_9804a030();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980497b8 @ 980497b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980497b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049860 @ 98049860 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049860(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_980447a8();
  if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980499d0 @ 980499d0 ==== */

void FUN_980499d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98049af8 @ 98049af8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049af8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049b98 @ 98049b98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049b98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049c50 @ 98049c50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  uVar5 = FUN_980447a0();
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
    FUN_9804a030();
    halt_baddata();
  }
  func_0x98058df4(local_58,iVar2);
  if ((local_58[0] < 2) || (bVar1 = true, *(char *)((uint)local_58[0] + iVar2 + -1) != '\\')) {
    bVar1 = false;
  }
  local_48 = 0xfffffffd;
  local_44 = local_58;
  local_40 = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    uVar3 = uVar3 | 0x10000;
  }
  iVar2 = (**(code **)(DAT_980776b0 + 0xc))
                    (local_60,uVar3 | 0x100080,&local_48,auStack_50,0,param_6 & 0x7fa7,param_3,uVar4
                    );
  if (iVar2 < 0) {
    FUN_9804a030();
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
    thunk_FUN_9804a018(uVar4);
  }
  else {
    if (((param_5 == 2) && (local_4c == 3)) || ((param_5 == 4 && (local_4c == 1)))) {
      uVar4 = 0xb7;
    }
    else {
      uVar4 = 0;
    }
    thunk_FUN_9804a018(uVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049e48 @ 98049e48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049e48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049ef8 @ 98049ef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98049ef8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98049f88 @ 98049f88 ==== */

void FUN_98049f88(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  uint local_50;
  undefined4 auStack_4c [19];
  
  local_5c = param_2 & 1;
  local_58 = 0;
  local_54 = &LAB_98049188;
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
      FUN_980446c8(auStack_4c,param_4,param_3 << 2);
    }
  }
  func_0x98058ed4(&local_60);
  return;
}


/* ==== thunk_FUN_9804a018 @ 9804a008 ==== */

void thunk_FUN_9804a018(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== thunk_FUN_9804a068 @ 9804a010 ==== */

undefined4 thunk_FUN_9804a068(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_9804a018 @ 9804a018 ==== */

void FUN_9804a018(undefined4 param_1)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = param_1;
  return;
}


/* ==== FUN_9804a030 @ 9804a030 ==== */

void FUN_9804a030(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x98058fb4();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_9804a068 @ 9804a068 ==== */

undefined4 FUN_9804a068(void)

{
  int unaff_r13;
  
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    return *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160);
  }
  return 0;
}


/* ==== FUN_9804a088 @ 9804a088 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804a088(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [48];
  
  uVar3 = FUN_980447a8();
  uVar1 = FUN_9804b350(auStack_30,(int)uVar3);
  while( true ) {
    iVar2 = func_0x98058f74((int)((ulonglong)uVar3 >> 0x20),1,param_3 & 0xff,uVar1);
    if (iVar2 < 0) {
      FUN_9804a030();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 == 0) break;
    if (iVar2 != 0x101) {
      halt_baddata();
    }
  }
  halt_baddata();
}


/* ==== FUN_9804a160 @ 9804a160 ==== */

void FUN_9804a160(void)

{
  FUN_9804b3f8();
  return;
}


/* ==== thunk_FUN_9804b440 @ 9804a170 ==== */

void thunk_FUN_9804b440(void)

{
  FUN_9804b440();
  return;
}


/* ==== FUN_9804b220 @ 9804b220 ==== */

void FUN_9804b220(uint param_1,uint param_2,uint param_3)

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


/* ==== FUN_9804b2e0 @ 9804b2e0 ==== */

ulonglong FUN_9804b2e0(undefined2 *param_1)

{
  undefined4 in_r0;
  
  trapWord(0x1f,in_r0,0x14);
  return (ulonglong)CONCAT24(*param_1,*(undefined4 *)(param_1 + 2));
}


/* ==== thunk_FUN_9804a030 @ 9804b2f0 ==== */

void thunk_FUN_9804a030(void)

{
  undefined4 uVar1;
  int unaff_r13;
  
  uVar1 = func_0x98058fb4();
  if (*(int *)(unaff_r13 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(unaff_r13 + 0x100) + 0x160) = uVar1;
  }
  return;
}


/* ==== FUN_9804b2f8 @ 9804b2f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b2f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b350 @ 9804b350 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_9804b350(undefined4 param_1,int param_2)

{
  if (param_2 == -1) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b3f8 @ 9804b3f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b3f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b440 @ 9804b440 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b440(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b498 @ 9804b498 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b498(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_980447a8();
  func_0x98058ae4(&DAT_980776d0);
  puVar1 = DAT_980776ec;
  while ((undefined4 **)puVar1 != &DAT_980776ec) {
    puVar3 = (undefined4 *)*puVar1;
    (*(code *)puVar1[2])(uVar2);
    puVar1 = puVar3;
  }
  func_0x98058ad4(&DAT_980776d0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b500 @ 9804b500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b500(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b550 @ 9804b550 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b550(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b5b8 @ 9804b5b8 ==== */

void FUN_9804b5b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804b610 @ 9804b610 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_980447a8();
  func_0x98058ae4(&DAT_98077734);
  piVar1 = *(int **)((int)((ulonglong)uVar2 >> 0x20) + 0x4c);
  (**(code **)(*piVar1 + 0x1c))(piVar1,(int)uVar2,param_3);
  func_0x98058ad4(&DAT_98077734);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b670 @ 9804b670 ==== */

void FUN_9804b670(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804b6b8 @ 9804b6b8 ==== */

void FUN_9804b6b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804b810 @ 9804b810 ==== */

void FUN_9804b810(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804b818 @ 9804b818 ==== */

void FUN_9804b818(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804b878 @ 9804b878 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b878(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804b988 @ 9804b988 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804b988(int param_1,int param_2)

{
  int unaff_r13;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    return;
  }
  *(undefined1 *)((uint)*(byte *)(unaff_r13 + 0x10c) + param_2) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804ba90 @ 9804ba90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804ba90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804bb98 @ 9804bb98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804bb98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804bc20 @ 9804bc20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804bc20(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int unaff_r13;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a0();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  uVar3 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar3;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  uVar4 = 0;
  do {
    iVar1 = (((uint)uVar6 & 0xff) * 8 + 0x15 + uVar4) * 8;
    puVar5 = (undefined4 *)(iVar1 + iVar2);
    *(undefined4 **)(iVar2 + 0x128) = puVar5;
    if (*(int *)(iVar1 + iVar2) != 0) {
      if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
        DAT_980790a8 = DAT_980790a8 + -1;
        if (DAT_980790a8 == 0) {
          DAT_980790ac = 0;
          DAT_980790b0 = 0;
          func_0x98058bd4(&DAT_980790a4);
          FUN_98059044();
        }
      }
      (*(code *)*puVar5)(puVar5[1]);
      uVar3 = FUN_98059034();
      if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
        func_0x98058be4(&DAT_980790a4);
        DAT_980790ac = unaff_r13;
        DAT_980790b0 = uVar3;
      }
      DAT_980790a8 = DAT_980790a8 + 1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  *(undefined4 *)(iVar2 + 0x128) = 0;
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804bda8 @ 9804bda8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804bda8(void)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r13;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if ((*(int *)(unaff_r13 + 0x100) != *(int *)(iVar1 + 300)) &&
     (*(int *)(unaff_r13 + 0x100) != *(int *)((*(byte *)(unaff_r13 + 0x10c) + 0x53) * 4 + iVar1))) {
    do {
      uVar3 = 0;
      piVar4 = (int *)(iVar1 + 0x90);
      while ((int)uVar7 != *piVar4) {
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
        if (5 < uVar3) {
          halt_baddata();
        }
      }
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
        DAT_980790b0 = 0;
        DAT_980790ac = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      iVar6 = DAT_98077748;
      iVar5 = DAT_98077748;
      if (DAT_98077748 != 0) {
        do {
          func_0x98058ad4(&DAT_98077734);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        do {
          func_0x98058ae4(&DAT_98077734);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar2 = FUN_98059034();
      if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
        func_0x98058be4(&DAT_980790a4);
        DAT_980790ac = unaff_r13;
        DAT_980790b0 = uVar2;
      }
      DAT_980790a8 = DAT_980790a8 + 1;
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804bfc8 @ 9804bfc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804bfc8(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int unaff_r13;
  
  iVar1 = FUN_980447a8();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804c088 @ 9804c088 ==== */

int FUN_9804c088(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1[2] + param_2);
  }
  if (param_3 == 0) {
    puVar1 = (undefined4 *)puVar1[1];
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
  }
  if (param_1 == puVar1) {
    return 0;
  }
  return (int)puVar1 - param_1[2];
}


/* ==== FUN_9804c0d0 @ 9804c0d0 ==== */

void FUN_9804c0d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804c1b8 @ 9804c1b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804c1b8(void)

{
  int iVar1;
  undefined1 uVar2;
  int unaff_r13;
  uint uVar3;
  
  iVar1 = FUN_980447a8();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  FUN_9804bfc8();
  uVar3 = 0;
  if (*(char *)(iVar1 + 0x80) != '\0') {
    do {
      FUN_9804bfc8();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(iVar1 + 0x80));
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790ac = 0;
    DAT_980790b0 = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804c2a0 @ 9804c2a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804c2a0(void)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_r13;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_980447a0();
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  bVar1 = *(byte *)(unaff_r13 + 0x10c);
  while( true ) {
    uVar3 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar3;
    }
    iVar4 = DAT_980790a8 + 1;
    piVar5 = *(int **)((int)uVar8 + 0x24);
    if (piVar5 == (int *)*piVar5) break;
    piVar7 = (int *)(*piVar5 - piVar5[2]);
    if (piVar7 == (int *)0x0) break;
    puVar6 = (undefined4 *)(piVar5[2] + (int)piVar7);
    DAT_980790a8 = iVar4;
    if ((undefined4 *)*puVar6 != puVar6) {
      ((undefined4 *)*puVar6)[1] = puVar6[1];
      *(undefined4 *)puVar6[1] = *puVar6;
      puVar6[1] = puVar6;
      *puVar6 = puVar6;
    }
    iVar4 = *(int *)((int)uVar8 + 0x28);
    piVar5 = (int *)(*(int *)(iVar4 + 8) + (int)piVar7);
    *piVar5 = iVar4;
    piVar5[1] = *(int *)(iVar4 + 4);
    *(int **)(iVar4 + 4) = piVar5;
    *(int **)piVar5[1] = piVar5;
    *(int **)((bVar1 + 0x24) * 4 + iVar2) = piVar7;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    iVar4 = (**(code **)(*piVar7 + 0x44))(piVar7);
    if (-1 < iVar4) {
      FUN_9804fb58();
    }
  }
  if (((iVar4 != 0) && (unaff_r13 == DAT_980790ac)) && (iVar4 = DAT_980790a8, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
    iVar4 = DAT_980790a8;
  }
  DAT_980790a8 = iVar4;
  *(undefined4 *)((bVar1 + 0x24) * 4 + iVar2) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804c458 @ 9804c458 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804c458(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_980447a0();
  iVar1 = (int)(uVar5 >> 0x20);
  if ((uVar5 & 0xff) != 0) {
    FUN_9804bc20();
    iVar2 = FUN_98059074();
    uVar4 = 0;
    uVar3 = 1;
    do {
      if (iVar2 < 0) break;
      if ((*(uint *)(iVar1 + 0x8c) & uVar3) != 0) {
        iVar2 = FUN_98059064();
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 << 1 | uVar3 >> 0x1f;
    } while (uVar4 < 2);
    if (1 < *(int *)(DAT_9807909c + 0x130)) {
      FUN_98059054();
    }
  }
  FUN_9804c2a0();
  FUN_9804b988(iVar1,iVar1 + 0x164);
  uVar3 = 1;
  uVar4 = 0;
  if (*(char *)(iVar1 + 0x80) != '\0') {
    do {
      FUN_9804c2a0();
      FUN_9804b988(iVar1,uVar3 * 8 + iVar1 + 0x164);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 ^ 1;
    } while (uVar4 < *(byte *)(iVar1 + 0x80));
  }
  if ((uVar5 & 0xff) != 0) {
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    FUN_9804bc20();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804c598 @ 9804c598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804c598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804c620 @ 9804c620 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804c620(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int unaff_r13;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  puVar2 = (undefined4 *)FUN_9804478c();
  *puVar2 = &PTR_LAB_9800b34c;
  FUN_98046688();
  if (puVar2[0x10] != 0) {
    piVar3 = *(int **)(puVar2[0x10] + 0x44);
    (**(code **)(*piVar3 + 0x1c))(piVar3,0);
  }
  if (puVar2[0x4c] != 0) {
    func_0x98058aa4(&DAT_9807908c,1,0);
    piVar3 = puVar2 + 0x4d;
    iVar8 = 6;
    do {
      if (*piVar3 != 0) {
        FUN_98046858(*piVar3,0xffffffff);
        FUN_98046810();
        *piVar3 = 0;
      }
      iVar8 = iVar8 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar8 != 0);
  }
  func_0x98058ae4(0x980776f4);
  if (DAT_98079048 != 0) {
    func_0x98058c84(&DAT_98079048,0);
    DAT_98079048 = 0;
  }
  func_0x98058ad4(0x980776f4);
  uVar4 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar4;
  }
  iVar5 = DAT_980790ac;
  iVar8 = DAT_980790a8 + 1;
  puVar6 = puVar2 + 0x14;
  DAT_980790a8 = iVar8;
  piVar3 = (int *)FUN_9804c088(puVar6,0,1);
  while (piVar3 != (int *)0x0) {
    if (((iVar8 != 0) && (unaff_r13 == iVar5)) && (DAT_980790a8 = iVar8 + -1, DAT_980790a8 == 0)) {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    (**(code **)(*piVar3 + 0xc))(piVar3);
    uVar4 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar4;
    }
    iVar5 = DAT_980790ac;
    iVar8 = DAT_980790a8 + 1;
    DAT_980790a8 = iVar8;
    piVar3 = (int *)FUN_9804c088(puVar6,0,1);
  }
  if (((iVar8 != 0) && (unaff_r13 == iVar5)) && (DAT_980790a8 = iVar8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
  uVar7 = 0;
  if (*(char *)(puVar2 + 0x20) != '\0') {
    iVar8 = 0;
    do {
      iVar5 = puVar2[0x1f];
      uVar4 = FUN_98059034();
      if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
        func_0x98058be4(&DAT_980790a4);
        DAT_980790ac = unaff_r13;
        DAT_980790b0 = uVar4;
      }
      iVar1 = DAT_980790ac;
      iVar9 = DAT_980790a8 + 1;
      DAT_980790a8 = iVar9;
      piVar3 = (int *)FUN_9804c088(iVar8 + iVar5,0,1);
      while (piVar3 != (int *)0x0) {
        if (((iVar9 != 0) && (unaff_r13 == iVar1)) && (DAT_980790a8 = iVar9 + -1, DAT_980790a8 == 0)
           ) {
          DAT_980790b0 = 0;
          DAT_980790ac = 0;
          func_0x98058bd4(&DAT_980790a4);
          FUN_98059044();
        }
        (**(code **)(*piVar3 + 0xc))(piVar3);
        uVar4 = FUN_98059034();
        if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
          func_0x98058be4(&DAT_980790a4);
          DAT_980790ac = unaff_r13;
          DAT_980790b0 = uVar4;
        }
        iVar1 = DAT_980790ac;
        iVar9 = DAT_980790a8 + 1;
        DAT_980790a8 = iVar9;
        piVar3 = (int *)FUN_9804c088(iVar8 + iVar5,0,1);
      }
      if (((iVar9 != 0) && (unaff_r13 == iVar1)) && (DAT_980790a8 = iVar9 + -1, DAT_980790a8 == 0))
      {
        DAT_980790b0 = 0;
        DAT_980790ac = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x2c;
    } while (uVar7 < *(byte *)(puVar2 + 0x20));
  }
  if ((int *)puVar2[0x10] != (int *)0x0) {
    (**(code **)(*(int *)puVar2[0x10] + 0xc))();
    puVar2[0x10] = 0;
  }
  DAT_9807909c = 0;
  if (puVar2[0xf] != 0) {
    FUN_9804fc78(puVar2[0xf]);
    puVar2[0xf] = 0;
  }
  uVar7 = 3;
  do {
    uVar10 = 0;
    do {
      if (puVar2[uVar7 + uVar10] != 0) {
        FUN_9804fc78(puVar2[uVar7 + uVar10]);
        puVar2[uVar7 + uVar10] = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    uVar7 = uVar7 + 2;
  } while (uVar7 < 0xf);
  FUN_9804c598(puVar2 + 0x1a);
  FUN_9804c598(puVar2 + 0x17);
  FUN_9804c598(puVar6);
  FUN_9804c598(puVar2 + 0x11);
  *puVar2 = &PTR_DAT_9800b338;
  if ((int *)puVar2[2] != (int *)0x0) {
    (**(code **)(*(int *)puVar2[2] + 4))();
    puVar2[2] = 0;
  }
  *puVar2 = &PTR_LAB_9800b324;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804cae0 @ 9804cae0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804cae0(void)

{
  bool bVar1;
  int unaff_r13;
  
  FUN_980447a4();
  *(undefined4 *)((*(byte *)(unaff_r13 + 0x10c) + 0x53) * 4 + DAT_9807909c) =
       *(undefined4 *)(unaff_r13 + 0x100);
  do {
    func_0x98058a94(&DAT_9807908c,3,1,0,0);
    bVar1 = *(int *)(DAT_9807909c + 300) != 0;
    if (bVar1) {
      FUN_9804c1b8();
      FUN_9804c458();
    }
    else if (*(int *)(DAT_9807909c + 0x130) != 1) {
      FUN_98059054();
    }
    func_0x98058aa4(&DAT_9807907c,1,0);
  } while (bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804cba8 @ 9804cba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804cba8(void)

{
  int iVar1;
  int iVar2;
  int unaff_r13;
  uint uVar3;
  uint uVar4;
  
  FUN_980447a0();
  *(undefined4 *)((*(byte *)(unaff_r13 + 0x10c) + 0x53) * 4 + DAT_9807909c) =
       *(undefined4 *)(unaff_r13 + 0x100);
  func_0x98058a94(&DAT_98079068,3,1,0,0);
  iVar2 = *(int *)(DAT_9807909c + 300);
  iVar1 = DAT_9807909c;
  while (iVar2 != 0) {
    DAT_9807909c = iVar1;
    FUN_9804c2a0();
    FUN_9804b988(iVar1,iVar1 + 0x164);
    uVar3 = 1;
    uVar4 = 0;
    if (*(char *)(iVar1 + 0x80) != '\0') {
      do {
        FUN_9804c2a0();
        FUN_9804b988(iVar1,uVar3 * 8 + iVar1 + 0x164);
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 ^ 1;
      } while (uVar4 < *(byte *)(iVar1 + 0x80));
    }
    func_0x98058a94(&DAT_98079068,3,1,0,0);
    iVar1 = DAT_9807909c;
    iVar2 = *(int *)(DAT_9807909c + 300);
  }
  DAT_9807909c = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804cca0 @ 9804cca0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804cca0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_r13;
  uint auStack_5c [23];
  
  iVar2 = FUN_980447a8();
  bVar1 = false;
  FUN_98046688();
  func_0x98058ae4(&DAT_98077714);
  *(undefined4 *)(iVar2 + 300) = *(undefined4 *)(unaff_r13 + 0x100);
  if (*(int *)(iVar2 + 0x130) == 0) {
    FUN_9804c1b8();
    FUN_9804c458();
  }
  else {
    func_0x98058aa4(&DAT_9807908c,1,0);
    FUN_980441a0(auStack_5c,0,0x2c);
    iVar3 = FUN_98059084();
    if (iVar3 == 1) {
      bVar1 = true;
    }
  }
  if ((!bVar1) && (iVar3 = (**(code **)(**(int **)(iVar2 + 0x40) + 0x44))(), -1 < iVar3)) {
    FUN_9804fb58();
  }
  *(undefined4 *)(iVar2 + 300) = 0;
  FUN_9804fb90();
  func_0x98058ad4(&DAT_98077714);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804cdb8 @ 9804cdb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804cdb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804cec0 @ 9804cec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804cec0(void)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  byte local_6e [110];
  
  uVar12 = FUN_98044798();
  iVar2 = (int)((ulonglong)uVar12 >> 0x20);
  FUN_98046688();
  bVar1 = *(byte *)((int)uVar12 + 1);
  uVar9 = (uint)bVar1;
  *(byte *)(iVar2 + 0x80) = bVar1;
  if (uVar9 != 0) {
    if ((0x5d1745d < uVar9) || (iVar5 = uVar9 * 0x2c + 4, 0xfffffffb < uVar9 * 0x2c)) {
      iVar5 = -1;
    }
    puVar3 = (uint *)(**(code **)(**(int **)(iVar2 + 8) + 0x14))(*(int **)(iVar2 + 8),iVar5);
    if (puVar3 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = puVar3 + 1;
      *puVar3 = uVar9;
      if (-1 < (int)(uVar9 - 1)) {
        puVar3 = puVar3 + 5;
        puVar8 = puVar10;
        do {
          puVar7 = puVar3 + -1;
          puVar3[-3] = (uint)puVar8;
          puVar6 = puVar3 + 2;
          *puVar8 = (uint)puVar8;
          puVar3[-2] = 0x10;
          puVar8 = puVar8 + 0xb;
          puVar3[-1] = (uint)puVar7;
          puVar3[1] = 0x18;
          *puVar3 = (uint)puVar7;
          puVar3[4] = 0x18;
          puVar3[2] = (uint)puVar6;
          puVar3[3] = (uint)puVar6;
          puVar3[5] = (uint)puVar7;
          puVar3[6] = (uint)puVar6;
          puVar3 = puVar3 + 0xb;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    *(uint **)(iVar2 + 0x7c) = puVar10;
    if (puVar10 == (uint *)0x0) {
      halt_baddata();
    }
  }
  local_78 = *(undefined **)((int)uVar12 + 4);
  if (local_78 == (undefined *)0x0) {
    local_78 = &DAT_9800b418;
  }
  iVar5 = FUN_9804ea28();
  if (iVar5 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_9807908c = 1;
  DAT_98079094 = &DAT_98079094;
  DAT_98079098 = &DAT_98079094;
  DAT_98079090 = 0;
  DAT_9807907c = 1;
  DAT_98079080 = 0;
  DAT_98079084 = &DAT_98079084;
  DAT_98079088 = &DAT_98079084;
  FUN_980590a4();
  DAT_98079058 = 0;
  DAT_98079060 = &DAT_98079060;
  DAT_9807905c = 0;
  DAT_98079064 = &DAT_98079060;
  DAT_98079048 = &DAT_9804b0e8;
  DAT_9807904c = 0x7d800000;
  func_0x98058c84(&DAT_98079048,1);
  *(undefined4 *)(iVar2 + 0x130) = 0;
  FUN_9804b878();
  iVar5 = 0;
  puVar11 = (undefined4 *)(iVar2 + 0x130);
  do {
    local_7c = 0;
    if ((local_6e[iVar5] & 3) != 0) {
      iVar4 = FUN_98059024();
      if (iVar4 < 0) {
        halt_baddata();
      }
      func_0x98058e54(local_7c,DAT_9800051c,&local_80);
      func_0x98058e44(local_80,0xf);
      FUN_98059094();
      func_0x98058e34(local_80);
      *(int *)(iVar2 + 0x130) = *(int *)(iVar2 + 0x130) + 1;
    }
    iVar5 = iVar5 + 1;
    puVar11 = puVar11 + 1;
    *puVar11 = local_7c;
  } while (iVar5 < 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d268 @ 9804d268 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804d268(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_r4;
  int *piStack0000001c;
  int local_30;
  
  FUN_980447a8();
  piStack0000001c = extraout_r4;
  iVar1 = FUN_9804c0d0();
  if ((((-1 < iVar1) &&
       (iVar1 = FUN_98050bb0(0x61820005,local_30 + 0x174,&stack0x0000001c), -1 < iVar1)) &&
      (iVar1 = (**(code **)(*piStack0000001c + 0x14))(piStack0000001c,0x174), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_9804cdb8(), piVar2 != (int *)0x0)) {
    iVar1 = FUN_9804cec0();
    if (iVar1 < 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    else {
      *param_3 = (int)piVar2;
    }
  }
  if (piStack0000001c != (int *)0x0) {
    (**(code **)(*piStack0000001c + 4))();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d368 @ 9804d368 ==== */

void FUN_9804d368(void)

{
  DAT_980790a0 = (uint)bRam7fea1803 << 0x18 | (uint)bRam7fea1802 << 0x10 | (uint)bRam7fea1801 << 8 |
                 (uint)bRam7fea1800;
  return;
}


/* ==== FUN_9804d380 @ 9804d380 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804d380(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 int *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r4;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_98044794();
  iVar7 = (int)((ulonglong)uVar12 >> 0x20);
  uVar3 = FUN_9804d5e0();
  if ((param_5 != (int *)0x0) || (param_5 = (int *)FUN_9804fb20(), param_5 != (int *)0x0)) {
    uVar9 = iVar7 * 0x60 + 0x8fU & 0xffffff80;
    iVar8 = uVar3 - uVar9;
    FUN_98048ed8(param_5,0,uVar3);
    *param_5 = iVar7;
    uVar9 = uVar9 + (int)param_5;
    iVar6 = 0;
    param_5[2] = (int)(param_5 + 4);
    if (iVar8 != 0) {
      iVar8 = (iVar8 - 1U >> 7) + 1;
      do {
        dataCacheBlockFlush(iVar6 + uVar9);
        iVar6 = iVar6 + 0x80;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    param_5[1] = param_3 | 0x30000;
    uVar4 = extraout_r4;
    if (iVar7 != 0) {
      pbVar10 = (byte *)((int)uVar12 + 8);
      iVar6 = 0;
      do {
        puVar11 = (uint *)(iVar6 + param_5[2]);
        puVar11[0x11] = uVar9;
        uVar3 = *(uint *)(pbVar10 + -8);
        if (uVar3 < 0x5dc1) {
          iVar8 = 0;
        }
        else if (uVar3 < 0x7d01) {
          iVar8 = 1;
        }
        else {
          iVar8 = (-(uint)(0xac44 < uVar3) & 1) + 2;
        }
        uVar5 = puVar11[1];
        uVar3 = iVar8 << 0x1b;
        puVar11[1] = uVar3 | uVar5 & 0xe7ffffff;
        uVar2 = (*pbVar10 - 1) * 0x20000000 & 0x20000000;
        puVar11[1] = uVar2 | uVar3 | uVar5 & 0xc7ffffff;
        puVar11[1] = (pbVar10[1] & 0xf) << 0x14 | uVar2 | uVar3 | uVar5 & 0xc70fffff;
        uVar3 = func_0x98058c34(uVar9);
        puVar11[7] = uVar3;
        bVar1 = *pbVar10;
        uVar3 = *(uint *)(pbVar10 + -4);
        puVar11[1] = puVar11[1] | 0x80000000;
        *puVar11 = bVar1 * uVar3 * 0x8000 & 0x7c00000 | *puVar11 & 0xf83fffff;
        uVar9 = (uint)*pbVar10 * *(int *)(pbVar10 + -4) * 2 + uVar9;
        puVar11[0x12] = uVar9;
        uVar12 = func_0x98058c34(uVar9);
        uVar4 = (undefined4)uVar12;
        puVar11[8] = (uint)((ulonglong)uVar12 >> 0x20);
        iVar7 = iVar7 + -1;
        uVar9 = (uint)*pbVar10 * 0x100 + uVar9;
        iVar6 = iVar6 + 0x60;
        pbVar10 = pbVar10 + 0xc;
      } while (iVar7 != 0);
    }
    if (((param_3 & 1) == 0) && (iVar7 = FUN_9804df98(param_5,uVar4,uVar3), iVar7 < 0)) {
      FUN_9804d588();
    }
    else {
      *param_4 = param_5;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d588 @ 9804d588 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804d588(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d5e0 @ 9804d5e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804d5e0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_980447a8();
  uVar2 = 0;
  if (1 < iVar1) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 < iVar1 - 1U);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d698 @ 9804d698 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804d698(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_980447a8();
  uVar2 = 0;
  if (*puVar1 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + puVar1[2] + 0x40) != 0) {
        func_0x980590b4();
        *(undefined4 *)(iVar3 + puVar1[2] + 0x40) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (uVar2 < *puVar1);
  }
  puVar1[1] = puVar1[1] & 0xfffbffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d710 @ 9804d710 ==== */

uint FUN_9804d710(int param_1)

{
  return *(uint *)(param_1 + 4) >> 0x12 & 1;
}


/* ==== FUN_9804d720 @ 9804d720 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804d720(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a8();
  iVar4 = *(int *)((int)((ulonglong)uVar6 >> 0x20) + 8);
  iVar1 = (int)uVar6 * 0x60;
  puVar5 = (uint *)(iVar1 + iVar4);
  uVar3 = *(uint *)(iVar1 + iVar4) >> 0x14;
  if ((uVar3 & 1) == 0) {
    uVar2 = func_0x98058c34(param_3);
    puVar5[5] = uVar2;
    *puVar5 = *puVar5 & 0xfffff000 | param_4 >> 0xb & 0xfff | 0x100000;
    puVar5[0x15] = (uint)param_3;
  }
  else {
    if ((uVar3 & 2) != 0) {
      halt_baddata();
    }
    uVar2 = func_0x98058c34(param_3);
    puVar5[6] = uVar2;
    puVar5[1] = puVar5[1] & 0xfffff000 | param_4 >> 0xb & 0xfff;
    *puVar5 = *puVar5 | 0x200000;
    puVar5[0x16] = (uint)param_3;
  }
  if (((uVar3 & 3) == 0) && (uVar3 = FUN_9804df78(*param_3), uVar3 != 0)) {
    puVar5[2] = puVar5[2] & 0xfc000000 | uVar3 & 0x3ffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804d7f8 @ 9804d7f8 ==== */

undefined4 FUN_9804d7f8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  if ((*(uint *)(param_1 + 4) & 0x20000) == 0) {
    uVar1 = *(uint *)puVar2[0x10];
  }
  else {
    uVar1 = *puVar2;
  }
  if (((uVar1 >> 0x14 & 1) != 0) && (puVar2[0x15] == param_3)) {
    return 1;
  }
  if (((uVar1 >> 0x14 & 2) != 0) && (puVar2[0x16] == param_3)) {
    return 1;
  }
  return 0;
}


/* ==== FUN_9804d878 @ 9804d878 ==== */

int FUN_9804d878(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    uVar1 = *(uint *)(param_2 * 0x60 + *(int *)(param_1 + 8)) & 0x300000;
    iVar2 = uVar1 - 0x300000;
    return iVar2 - ((uVar1 - 0x300001) + (uint)(iVar2 == 0));
  }
  uVar1 = **(uint **)(param_2 * 0x60 + *(int *)(param_1 + 8) + 0x40) & 0x300000;
  iVar2 = uVar1 - 0x300000;
  return iVar2 - ((uVar1 - 0x300001) + (uint)(iVar2 == 0));
}


/* ==== FUN_9804d8d8 @ 9804d8d8 ==== */

bool FUN_9804d8d8(int param_1,int param_2)

{
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    return (*(uint *)(param_2 * 0x60 + *(int *)(param_1 + 8)) >> 0x14 & 3) == 0;
  }
  return (**(uint **)(param_2 * 0x60 + *(int *)(param_1 + 8) + 0x40) >> 0x14 & 3) == 0;
}


/* ==== FUN_9804d938 @ 9804d938 ==== */

uint FUN_9804d938(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar2 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  puVar3 = puVar2;
  if ((*(uint *)(param_1 + 4) & 0x20000) == 0) {
    puVar3 = (uint *)puVar2[0x10];
  }
  if ((puVar3[1] & 0x80000000) == 0) {
    uVar4 = *puVar3 >> 0x16 & 0x1f;
  }
  else {
    uVar4 = *puVar3 >> 0x1b;
    uVar1 = puVar3[9] & 0x1f;
    if (uVar4 < uVar1) {
      uVar4 = ((*puVar3 >> 0x16 & 0x1f) - uVar1) + uVar4;
    }
    else {
      uVar4 = uVar4 - uVar1;
    }
  }
  return uVar4 * 0x100 - (uint)*(ushort *)((int)puVar2 + 0x52) >> (puVar3[1] >> 0x1d & 1) + 1;
}


/* ==== FUN_9804d9c8 @ 9804d9c8 ==== */

void FUN_9804d9c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804db78 @ 9804db78 ==== */

uint FUN_9804db78(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar2 = 0;
  puVar6 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  uVar4 = (uint)*(ushort *)((int)puVar6 + 0x52);
  *param_3 = (puVar6[9] & 0x1f) * 0x100 + puVar6[0x11] + uVar4;
  uVar1 = *puVar6 >> 0x1b;
  uVar7 = puVar6[9] & 0x1f;
  uVar3 = puVar6[1] >> 0x1f;
  if (uVar4 != 0) {
    iVar2 = 0x100 - uVar4;
    uVar7 = uVar7 + 1;
    uVar3 = 1;
  }
  iVar5 = 0;
  if (uVar7 < uVar1) {
    iVar5 = uVar1 - uVar7;
  }
  else if ((uVar1 < uVar7) || (uVar3 == 0)) {
    iVar5 = (*puVar6 >> 0x16 & 0x1f) - uVar7;
  }
  return (uint)(iVar5 * 0x100 + iVar2) >> (puVar6[1] >> 0x1d & 1) + 1;
}


/* ==== FUN_9804dc20 @ 9804dc20 ==== */

undefined4 FUN_9804dc20(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar1 = 1;
  puVar6 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  uVar2 = puVar6[1];
  uVar5 = *puVar6;
  uVar4 = uVar5 >> 0x16 & 0x1f;
  uVar3 = param_3 >> (7 - (uVar2 >> 0x1d & 1) & 0x3f);
  if (uVar3 < uVar4) {
    uVar3 = ((uVar5 >> 0x1b) - uVar3) + uVar4;
    if (uVar4 <= uVar3) {
      puVar6[1] = uVar2 | 0x80000000;
      *puVar6 = (uVar3 - uVar4) * 0x8000000 | uVar5 & 0x7ffffff;
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
    uVar3 = puVar6[2] & 0x3ffffff;
  }
  puVar6[1] = uVar2 | 0x80000000;
  *puVar6 = uVar3 << 0x1b | uVar5 & 0x7ffffff;
  return uVar1;
}


/* ==== FUN_9804dca8 @ 9804dca8 ==== */

undefined4 FUN_9804dca8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  puVar3 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  iVar1 = (puVar3[1] >> 0x1d & 1) + 1;
  if (iVar1 != 0) {
    do {
      dataCacheBlockClearToZero(uVar2 + puVar3[0x12]);
      uVar2 = uVar2 + 0x80;
    } while (uVar2 < (uint)(iVar1 * 0x100));
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[4] = puVar3[4] & 0x7fffffff;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x13] = 0;
  *puVar3 = *puVar3 & 0x7cff000;
  puVar3[9] = puVar3[9] & 0xffffffe0;
  puVar3[1] = puVar3[1] & 0x7ffff000 | 0x80000000;
  *(undefined2 *)((int)puVar3 + 0x52) = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar3[3] & 0x3ffffff;
  return 0;
}


/* ==== FUN_9804dd58 @ 9804dd58 ==== */

uint FUN_9804dd58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x60 + *(int *)(param_1 + 8);
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    return *(uint *)(iVar1 + 8) >> 0x1a & 0x1f;
  }
  return *(uint *)(*(int *)(iVar1 + 0x40) + 8) >> 0x1a & 0x1f;
}


/* ==== FUN_9804dd98 @ 9804dd98 ==== */

uint FUN_9804dd98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x60 + *(int *)(param_1 + 8);
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    return *(uint *)(iVar1 + 0xc) >> 0x1a & 0x1f;
  }
  return *(uint *)(*(int *)(iVar1 + 0x40) + 0xc) >> 0x1a & 0x1f;
}


/* ==== FUN_9804ddd8 @ 9804ddd8 ==== */

undefined4 FUN_9804ddd8(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  uVar2 = puVar3[1];
  *puVar3 = (uint)*(byte *)((int)param_3 + 10) << 0xc | *puVar3 & 0xfff00fff;
  uVar1 = (*(byte *)(param_3 + 2) & 3) << 0xc;
  puVar3[1] = uVar1 | uVar2 & 0xffffcfff;
  puVar3[1] = (*(byte *)((int)param_3 + 9) & 7) << 0x11 | uVar1 | uVar2 & 0xfff1cfff;
  puVar3[3] = *param_3 & 0x3ffffff | puVar3[3] & 0xfc000000;
  puVar3[4] = puVar3[4] & 0xfc000000 | param_3[1] & 0x3ffffff;
  return 0;
}


/* ==== FUN_9804de50 @ 9804de50 ==== */

uint FUN_9804de50(int param_1,int param_2)

{
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    return *(uint *)(param_2 * 0x60 + *(int *)(param_1 + 8)) >> 0xc & 0xff;
  }
  return **(uint **)(param_2 * 0x60 + *(int *)(param_1 + 8) + 0x40) >> 0xc & 0xff;
}


/* ==== FUN_9804de98 @ 9804de98 ==== */

undefined4 FUN_9804de98(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x60 + *(int *)(param_1 + 8) + 0x4c);
}


/* ==== FUN_9804deb8 @ 9804deb8 ==== */

undefined4 FUN_9804deb8(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  puVar2 = puVar1;
  if ((*(uint *)(param_1 + 4) & 0x20000) == 0) {
    puVar2 = (uint *)puVar1[0x10];
  }
  if ((*puVar2 & 0x300000) == 0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return 0;
  }
  *param_3 = puVar1[0x15 - ((int)puVar2[4] >> 0x1f)];
  param_3[1] = puVar2[2] & 0x3ffffff;
  param_3[2] = *(byte *)(puVar2 + 1) & 7;
  return 0;
}


/* ==== FUN_9804df40 @ 9804df40 ==== */

undefined4 FUN_9804df40(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_2 * 0x60 + *(int *)(param_1 + 8);
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfc000000 | param_3 & 0x3ffffff;
  *(uint *)(iVar1 + 4) = (param_4 & 7) << 0x18 | *(uint *)(iVar1 + 4) & 0xf8ffffff;
  return 0;
}


/* ==== FUN_9804df78 @ 9804df78 ==== */

int FUN_9804df78(uint param_1)

{
  if (param_1 == 0x7fff) {
    return 0;
  }
  return (param_1 >> 0xb & 0x7fff) + 0x20;
}


/* ==== FUN_9804df98 @ 9804df98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804df98(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_98044794();
  puVar1 = (uint *)((ulonglong)uVar9 >> 0x20);
  puVar4 = (uint *)uVar9;
  uVar6 = 0;
  if (*puVar1 != 0) {
    iVar7 = 0;
    do {
      iVar8 = iVar7 + puVar1[2];
      if (*(int *)(iVar8 + 0x40) == 0) {
        pbVar2 = FUN_980590c4((undefined4 *)(iVar8 + 0x40),(uint)puVar4,param_3);
        if ((int)pbVar2 < 0) {
          halt_baddata();
        }
        iVar3 = func_0x98058c34(*(undefined4 *)(iVar8 + 0x40));
        uVar5 = iVar3 - DAT_980790a0 >> 6;
        *(short *)(iVar8 + 0x50) = (short)uVar5;
        param_3 = 1 << (uVar5 & 0x1f);
        puVar4 = (uint *)((((uVar5 & 0xffff) >> 5) + 0x1ffa86a0) * 4);
        *puVar4 = param_3 << 0x18 | (param_3 & 0xff00) << 8 | param_3 >> 8 & 0xff00 |
                  param_3 >> 0x18;
        enforceInOrderExecutionIO();
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x60;
    } while (uVar6 < *puVar1);
  }
  puVar1[1] = puVar1[1] | 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804e060 @ 9804e060 ==== */

undefined4 FUN_9804e060(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1[1] & 0x30000) != 0) {
    param_1[1] = param_1[1] | 0x10000;
    return 0;
  }
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar4 = 0;
    do {
      uVar1 = *(ushort *)(param_1[2] + iVar4 + 0x50);
      uVar2 = 1 << (uVar1 & 0x1f);
      *(uint *)(((uVar1 >> 5) + 0x1ffa8690) * 4) =
           uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
      enforceInOrderExecutionIO();
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x60;
    } while (uVar3 < *param_1);
  }
  param_1[1] = param_1[1] | 0x10000;
  return 0;
}


/* ==== FUN_9804e0f8 @ 9804e0f8 ==== */

void FUN_9804e0f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804e1c0 @ 9804e1c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804e1c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804e310 @ 9804e310 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_9804e310(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs43 [16];
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    puVar4 = (uint *)param_1[2];
    uVar3 = uVar2;
    do {
      iVar7 = 0;
      uVar5 = *puVar4 >> 0xe & 0x1f00;
      if (uVar5 != 0) {
        iVar6 = (uVar5 - 1 >> 7) + 1;
        do {
          dataCacheBlockFlush(iVar7 + puVar4[0x11]);
          iVar7 = iVar7 + 0x80;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 0x18;
    } while (uVar3 != 0);
  }
  if (((param_1[1] & 0x20000) != 0) && (uVar2 != 0)) {
    altv207_13(in_vs43,in_vs39);
    altv207_13(in_vs43,in_vs38);
    altv207_13(in_vs32,in_vs43);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar7 = 0;
    do {
      uVar1 = *(ushort *)(iVar7 + param_1[2] + 0x50);
      uVar3 = 1 << (uVar1 & 0x1f);
      *(uint *)(((uVar1 >> 5) + 0x1ffa8650) * 4) =
           uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00 | uVar3 >> 0x18;
      enforceInOrderExecutionIO();
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 0x60;
    } while (uVar2 < *param_1);
  }
  param_1[1] = param_1[1] & 0xfffcffff;
  return 0;
}


/* ==== FUN_9804e438 @ 9804e438 ==== */

void FUN_9804e438(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -8);
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x9804e454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x14))();
  return;
}


/* ==== FUN_9804e458 @ 9804e458 ==== */

void FUN_9804e458(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -8);
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x9804e474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x18))();
  return;
}


/* ==== FUN_9804e808 @ 9804e808 ==== */

int FUN_9804e808(undefined4 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  uVar4 = (uint)*pbVar2;
  uVar1 = 0;
  if (uVar4 != 0) {
    iVar3 = 0;
    do {
      uVar5 = *(byte *)(iVar3 + *(int *)(pbVar2 + 4)) + 1;
      if (uVar1 < uVar5) {
        uVar1 = uVar5;
      }
      iVar3 = iVar3 + 0xc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar1 << 3;
}


/* ==== FUN_9804e868 @ 9804e868 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804e868(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804e958 @ 9804e958 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804e958(void)

{
  int iVar1;
  int iVar2;
  uint in_r9;
  byte *in_r10;
  int in_r11;
  int *unaff_r30;
  int unaff_r31;
  
  for (; in_r9 < *in_r10; in_r9 = in_r9 + 1) {
    iVar1 = (uint)*(byte *)(*(int *)(in_r10 + 4) + in_r11) * 8;
    *(undefined4 *)(*(int *)(unaff_r31 + 0xc) + iVar1) =
         *(undefined4 *)((byte *)(*(int *)(in_r10 + 4) + in_r11) + 4);
    iVar2 = *(int *)(*unaff_r30 + 4) + in_r11;
    in_r11 = in_r11 + 0xc;
    *(undefined4 *)(*(int *)(unaff_r31 + 0xc) + iVar1 + 4) = *(undefined4 *)(iVar2 + 8);
    in_r10 = (byte *)*unaff_r30;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804e980 @ 9804e980 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804e980(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804e9f0 @ 9804e9f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804e9f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804ea28 @ 9804ea28 ==== */

void FUN_9804ea28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804eaa0 @ 9804eaa0 ==== */

void FUN_9804eaa0(char *param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  if (*param_1 == '\x04') {
    cVar2 = '\0';
    if ((byte)param_1[4] != 0) {
      uVar3 = 0;
      do {
        iVar1 = uVar3 * 8;
        uVar3 = uVar3 + 1 & 0xff;
        cVar2 = param_1[iVar1 + 0xc] + cVar2;
      } while (uVar3 < (byte)param_1[4]);
    }
    param_2[1] = cVar2;
  }
  else {
    param_2[1] = param_1[4];
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 48000;
  return;
}


/* ==== FUN_9804eb08 @ 9804eb08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804eb08(void)

{
  int iVar1;
  undefined1 uVar4;
  int *piVar2;
  int iVar3;
  int unaff_r13;
  undefined8 uVar5;
  byte local_40 [64];
  
  uVar5 = FUN_980447a4();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  uVar4 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar4;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  piVar2 = *(int **)(iVar1 + 0x4c);
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,local_40);
  if (-1 < iVar3) {
    *(byte *)uVar5 = *(byte *)(iVar1 + 0x3d) | local_40[0];
  }
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804ed50 @ 9804ed50 ==== */

void FUN_9804ed50(char *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined4 *)(param_2 + -4);
  iVar7 = 8;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar8 = FUN_9804eaa0(param_1,param_2);
  iVar7 = (int)((ulonglong)uVar8 >> 0x20);
  iVar1 = (int)uVar8;
  uVar4 = 0;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar7 + 0x44);
  piVar2 = (int *)(DAT_9807909c + 0xc);
  do {
    if (*piVar2 != 0) {
      uVar5 = *(undefined4 *)(uVar4 * 8 + DAT_9807909c + 0xc);
      goto LAB_9804edb0;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 2;
  } while (uVar4 < 6);
  uVar5 = 0;
LAB_9804edb0:
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar7 + 0x58);
  cVar6 = *(char *)(iVar7 + 0x39);
  if (cVar6 == '\0') {
    cVar6 = '\x01';
  }
  *(char *)(iVar1 + 0x18) = cVar6;
  cVar6 = *(char *)(iVar7 + 0x3a);
  if (cVar6 == '\0') {
    cVar6 = '\x06';
  }
  *(char *)(iVar1 + 0x19) = cVar6;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar7 + 0x48);
  return;
}


/* ==== FUN_9804ee18 @ 9804ee18 ==== */

void FUN_9804ee18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804eef0 @ 9804eef0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804eef0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804efc8 @ 9804efc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804efc8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int unaff_r13;
  
  puVar1 = (undefined4 *)FUN_980447a4();
  *puVar1 = &PTR_LAB_9800b388;
  iVar2 = (*(code *)PTR_FUN_9800b3c4)(puVar1,1);
  if ((-1 < iVar2) && ((int *)puVar1[0x13] != (int *)0x0)) {
    (**(code **)(*(int *)puVar1[0x13] + 0x20))();
  }
  iVar2 = DAT_9807909c;
  uVar3 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar3;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  piVar4 = (int *)(*(int *)(iVar2 + 0x58) + (int)puVar1);
  if ((int *)*piVar4 != piVar4) {
    ((int *)*piVar4)[1] = piVar4[1];
    *(int *)piVar4[1] = *piVar4;
    piVar4[1] = (int)piVar4;
    *piVar4 = (int)piVar4;
  }
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  if ((int *)puVar1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)puVar1[0x13] + 4))();
    puVar1[0x13] = 0;
  }
  FUN_98051078();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f170 @ 9804f170 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804f170(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_r13;
  
  iVar1 = FUN_980447a4();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  iVar3 = DAT_980790a8 + 1;
  if ((*(byte *)(iVar1 + 0x3d) & 0x40) == 0) {
    if (((iVar3 != 0) && (unaff_r13 == DAT_980790ac)) && (iVar3 = DAT_980790a8, DAT_980790a8 == 0))
    {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
      iVar3 = DAT_980790a8;
    }
  }
  else {
    DAT_980790a8 = iVar3;
    FUN_9804bda8();
    iVar3 = DAT_9807909c;
    uVar2 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar2;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x4c) + iVar1);
    if ((undefined4 *)*puVar4 != puVar4) {
      ((undefined4 *)*puVar4)[1] = puVar4[1];
      *(undefined4 *)puVar4[1] = *puVar4;
      puVar4[1] = puVar4;
      *puVar4 = puVar4;
    }
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    uVar2 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar2;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    *(byte *)(iVar1 + 0x3d) = *(byte *)(iVar1 + 0x3d) & 0xbf;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    iVar3 = DAT_980790a8;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, iVar3 = DAT_980790a8, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
      iVar3 = DAT_980790a8;
    }
  }
  DAT_980790a8 = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f400 @ 9804f400 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804f400(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int unaff_r13;
  int iVar6;
  
  puVar3 = (undefined4 *)FUN_980447a4();
  FUN_98050c60();
  uVar1 = DAT_980021a8;
  *puVar3 = &PTR_LAB_9800b388;
  puVar3[0x23] = uVar1;
  iVar2 = DAT_9807909c;
  iVar6 = DAT_9807909c + 0x50;
  uVar4 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar4;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  piVar5 = (int *)(*(int *)(iVar2 + 0x58) + (int)puVar3);
  *piVar5 = iVar6;
  piVar5[1] = *(int *)(iVar2 + 0x54);
  *(int **)(iVar2 + 0x54) = piVar5;
  *(int **)piVar5[1] = piVar5;
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f4f8 @ 9804f4f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804f4f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f528 @ 9804f528 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804f528(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int unaff_r13;
  
  iVar2 = FUN_980447a0();
  uVar3 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar3;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if (((*(byte *)(iVar2 + 0x3d) & 1) == 0) && ((*(byte *)(iVar2 + 0x3d) & 0x40) == 0)) {
    uVar3 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar3;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    *(byte *)(iVar2 + 0x3d) = *(byte *)(iVar2 + 0x3d) | 0x40;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    iVar1 = DAT_9807909c;
    uVar3 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar3;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    piVar4 = (int *)(*(int *)(iVar1 + 0x4c) + iVar2);
    *piVar4 = iVar1 + 0x44;
    piVar4[1] = *(int *)(iVar1 + 0x48);
    *(int **)(iVar1 + 0x48) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f808 @ 9804f808 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804f808(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *in_stack_0000001c;
  int aiStack_30 [12];
  
  uVar3 = FUN_980447a8();
  in_stack_0000001c = (int *)uVar3;
  iVar1 = FUN_9804ee18((int)((ulonglong)uVar3 >> 0x20),aiStack_30);
  if ((((-1 < iVar1) &&
       (iVar1 = FUN_98050bb0(0x61820006,aiStack_30[0] + 0x94,&stack0x0000001c), -1 < iVar1)) &&
      (iVar1 = (**(code **)(*in_stack_0000001c + 0x14))(in_stack_0000001c,0x94), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_9804f400(iVar1,in_stack_0000001c,0), piVar2 != (int *)0x0)) {
    iVar1 = FUN_9804eef0();
    if (iVar1 < 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    else {
      *param_3 = (int)piVar2;
    }
  }
  if (in_stack_0000001c != (int *)0x0) {
    (**(code **)(*in_stack_0000001c + 4))();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f908 @ 9804f908 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804f908(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804f9a8 @ 9804f9a8 ==== */

byte * FUN_9804f9a8(byte param_1,byte param_2,byte *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_1 == param_2) {
      if (param_1 < 7) {
        *param_3 = param_1;
        *(undefined **)(param_3 + 4) = &DAT_9800b450;
        return param_3;
      }
    }
    else if (param_2 == 1) {
      if (param_1 < 7) {
        *param_3 = param_1;
        *(undefined **)(param_3 + 4) = &UNK_9800b480;
        return param_3;
      }
    }
    else if (param_1 == 1) {
      if (((param_2 == 2) || (param_2 == 4)) || (param_2 == 6)) {
        *param_3 = 2;
        *(undefined **)(param_3 + 4) = &UNK_9800b420;
        return param_3;
      }
    }
    else if (param_1 == 2) {
      if ((param_2 == 4) || (param_2 == 6)) {
        *param_3 = 2;
        *(undefined **)(param_3 + 4) = &DAT_9800b450;
        return param_3;
      }
    }
    else if ((param_1 == 4) && (param_2 == 6)) {
      *param_3 = 4;
      *(undefined **)(param_3 + 4) = &UNK_9800b4b0;
      return param_3;
    }
  }
  return (byte *)0x0;
}


/* ==== FUN_9804fb20 @ 9804fb20 ==== */

void FUN_9804fb20(void)

{
  FUN_98048d70();
  return;
}


/* ==== FUN_9804fb30 @ 9804fb30 ==== */

void FUN_9804fb30(undefined4 param_1,int param_2,uint param_3)

{
  if ((param_3 & 0x80000000) == 0) {
    thunk_FUN_9804b440();
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_980467f0();
  return;
}


/* ==== FUN_9804fb58 @ 9804fb58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804fb58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804fb90 @ 9804fb90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804fb90(void)

{
  undefined4 uVar1;
  
  FUN_980447a0();
  uVar1 = TBLr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804fc58 @ 9804fc58 ==== */

void FUN_9804fc58(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -8);
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x9804fc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))();
  return;
}


/* ==== FUN_9804fc78 @ 9804fc78 ==== */

void FUN_9804fc78(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -8);
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x9804fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}


/* ==== FUN_9804fc98 @ 9804fc98 ==== */

undefined4 FUN_9804fc98(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}


/* ==== FUN_9804fcc0 @ 9804fcc0 ==== */

undefined4 FUN_9804fcc0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -8;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x14);
  param_2[1] = *(undefined4 *)(iVar1 + 0x18);
  param_2[2] = *(undefined4 *)(iVar1 + 0x1c);
  return 0;
}


/* ==== FUN_9804fcf0 @ 9804fcf0 ==== */

void FUN_9804fcf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_9804fe10 @ 9804fe10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804fe10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804ff38 @ 9804ff38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_9804ff38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_9804ff50 @ 9804ff50 ==== */

undefined4 FUN_9804ff50(char *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_1 == '\0') {
    trapWord(6,*(uint *)(param_1 + 8),0);
    uVar1 = 48000 / *(uint *)(param_1 + 8);
    trapWord(6,uVar1,0);
    iVar2 = ((0x100 / uVar1) * (uint)(byte)param_1[5] + 0x20) * 4;
  }
  *param_2 = iVar2 + 0x24;
  return 0;
}


/* ==== FUN_9804ffa8 @ 9804ffa8 ==== */

void FUN_9804ffa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98050038 @ 98050038 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980500a8 @ 980500a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980500a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050130 @ 98050130 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980501b0 @ 980501b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980501b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980501e0 @ 980501e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980501e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050308 @ 98050308 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050308(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980503c8 @ 980503c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980503c8(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int unaff_r13;
  
  iVar1 = FUN_980447a8();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  if (*(undefined4 **)(iVar1 + 0x18) != puVar3) {
    (*(undefined4 **)(iVar1 + 0x18))[1] = *(undefined4 *)(iVar1 + 0x1c);
    **(undefined4 **)(iVar1 + 0x1c) = *puVar3;
    *(undefined4 **)(iVar1 + 0x1c) = puVar3;
    *puVar3 = puVar3;
  }
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980504a8 @ 980504a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980504a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050540 @ 98050540 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050540(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_r4;
  int *piStack_30;
  int iStack_2c;
  
  FUN_980447a8();
  piStack_30 = (int *)0x0;
  iVar1 = FUN_980504a8();
  if (((-1 < iVar1) && (iVar1 = FUN_98050bb0(0x61820006,iStack_2c + 0x48,&piStack_30), -1 < iVar1))
     && (piVar2 = (int *)(**(code **)(*piStack_30 + 0x14))(piStack_30,0x48), piVar2 != (int *)0x0))
  {
    FUN_980519d8(piVar2,piStack_30,2);
    *piVar2 = (int)&PTR_LAB_9800b4f0;
    iVar1 = FUN_980501e0();
    if (iVar1 < 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    else {
      *extraout_r4 = piVar2;
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 4))();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050648 @ 98050648 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050648(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int unaff_r13;
  
  iVar1 = FUN_980447a4();
  iVar2 = FUN_98050130();
  if (iVar2 != 0) {
    uVar3 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar3;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    iVar2 = *(int *)(iVar2 + 0x28);
    piVar4 = (int *)(*(int *)(iVar2 + 8) + iVar1);
    *piVar4 = iVar2;
    piVar4[1] = *(int *)(iVar2 + 4);
    *(int **)(iVar2 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
      DAT_980790a8 = DAT_980790a8 + -1;
      if (DAT_980790a8 == 0) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050750 @ 98050750 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050750(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980507c8 @ 980507c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980507c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050838 @ 98050838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980508d0 @ 980508d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980508d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050a60 @ 98050a60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050a60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050b10 @ 98050b10 ==== */

void FUN_98050b10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98050bb0 @ 98050bb0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050bb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a8();
  piVar2 = (int *)*param_3;
  if (piVar2 == (int *)0x0) {
    if ((int)uVar3 == 0) {
      iVar1 = FUN_98050a60();
    }
    else {
      iVar1 = FUN_98050b10();
    }
    if (-1 < iVar1) {
      *param_3 = 0;
    }
  }
  else {
    (**(code **)*piVar2)(piVar2);
    (**(code **)(*piVar2 + 8))(piVar2,(int)uVar3);
    (**(code **)(*piVar2 + 0xc))(piVar2,(int)((ulonglong)uVar3 >> 0x20));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050c60 @ 98050c60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050c60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050cf0 @ 98050cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050cf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050da8 @ 98050da8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050da8(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_980447a8();
  piVar1 = (int *)((ulonglong)uVar3 >> 0x20);
  *(undefined1 *)(piVar1 + 0x11) = *(undefined1 *)((int)uVar3 + 0x18);
  iVar2 = FUN_980522c0();
  if (-1 < iVar2) {
    if (*(byte *)(piVar1 + 0x11) != 0) {
      iVar2 = (**(code **)(*(int *)piVar1[2] + 0x14))
                        ((int *)piVar1[2],(uint)*(byte *)(piVar1 + 0x11) * 0xc);
      piVar1[0x12] = iVar2;
      if (iVar2 == 0) {
        halt_baddata();
      }
      iVar2 = 0;
    }
    if (*(char *)(piVar1 + 0x11) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < iVar2) {
      (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)((int)uVar3 + 0x1c));
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050ec0 @ 98050ec0 ==== */

void FUN_98050ec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98050f80 @ 98050f80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050f80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_980447a8();
  uVar2 = 0;
  if (*(char *)(iVar1 + 0x45) != '\0') {
    iVar3 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(iVar1 + 0x48) + iVar3) + 8))();
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar2 < *(byte *)(iVar1 + 0x45));
  }
  *(undefined1 *)(iVar1 + 0x45) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98050fe0 @ 98050fe0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98050fe0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_980447a4();
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  pbVar5 = (byte *)uVar8;
  bVar1 = *(byte *)(iVar2 + 0x3d);
  uVar7 = 0;
  iVar3 = 0;
  if (*pbVar5 != 0) {
    iVar6 = 0;
    do {
      if (iVar3 < 0) {
        halt_baddata();
      }
      piVar4 = *(int **)((uint)*(byte *)(*(int *)(pbVar5 + 4) + iVar6) * 0xc +
                         *(int *)(iVar2 + 0x48) + 4);
      iVar3 = (**(code **)(*piVar4 + 0x38))
                        (piVar4,*(undefined4 *)((byte *)(*(int *)(pbVar5 + 4) + iVar6) + 4),
                         ~bVar1 & 1);
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar7 < *pbVar5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051078 @ 98051078 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051078(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_980447a8();
  *puVar1 = &PTR_LAB_9800b5a0;
  FUN_98051f00();
  FUN_98050f80();
  uVar3 = 0;
  if (*(char *)(puVar1 + 0x11) != '\0') {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(puVar1[0x12] + iVar4 + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
        *(undefined4 *)(puVar1[0x12] + iVar4 + 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 < *(byte *)(puVar1 + 0x11));
  }
  FUN_98051770();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980511e0 @ 980511e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980511e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  iVar2 = FUN_980523f8();
  uVar5 = 0;
  if (*(char *)(iVar1 + 0x45) != '\0') {
    iVar6 = 0;
    do {
      if (iVar2 < 0) {
        halt_baddata();
      }
      piVar4 = *(int **)(*(int *)(iVar1 + 0x48) + iVar6);
      uVar3 = (**(code **)(*piVar4 + 0x48))(piVar4);
      piVar4 = *(int **)(*(int *)(iVar1 + 0x48) + iVar6 + 4);
      iVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,*(undefined4 *)uVar7,uVar3);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (uVar5 < *(byte *)(iVar1 + 0x45));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051270 @ 98051270 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051270(void)

{
  int iVar1;
  undefined1 uVar4;
  int iVar2;
  int *piVar3;
  undefined4 *puVar5;
  int unaff_r13;
  uint uVar6;
  int iVar7;
  
  iVar1 = FUN_980447a8();
  uVar4 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar4;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  puVar5 = (undefined4 *)(iVar1 + 0x18);
  if (*(undefined4 **)(iVar1 + 0x18) != puVar5) {
    (*(undefined4 **)(iVar1 + 0x18))[1] = *(undefined4 *)(iVar1 + 0x1c);
    **(undefined4 **)(iVar1 + 0x1c) = *puVar5;
    *(undefined4 **)(iVar1 + 0x1c) = puVar5;
    *puVar5 = puVar5;
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
  iVar2 = 0;
  uVar6 = 0;
  if (*(char *)(iVar1 + 0x45) != '\0') {
    iVar7 = 0;
    do {
      if (iVar2 < 0) {
        halt_baddata();
      }
      piVar3 = *(int **)(*(int *)(iVar1 + 0x48) + iVar7);
      iVar2 = piVar3[10];
      piVar3[10] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        iVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3,0);
      }
      else {
        iVar2 = 0;
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (uVar6 < *(byte *)(iVar1 + 0x45));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980515a0 @ 980515a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980515a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051670 @ 98051670 ==== */

void FUN_98051670(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x34) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = param_2[1];
  return;
}


/* ==== FUN_98051688 @ 98051688 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051688(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int aiStack_60 [24];
  
  uVar7 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  iVar6 = 0;
  iVar4 = 0;
  uVar5 = 0;
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar3 = *(byte **)(iVar1 + 8);
  if ((pbVar3 != (byte *)0x0) && (*pbVar3 != 0)) {
    do {
      iVar2 = FUN_9804e438(*(undefined4 *)(DAT_9807909c + 0x3c),
                           *(undefined4 *)(*(int *)(pbVar3 + 4) + iVar6),aiStack_60);
      if (iVar2 < 0) {
        halt_baddata();
      }
      pbVar3 = *(byte **)(iVar1 + 8);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = aiStack_60[0] + iVar4;
    } while (uVar5 < *pbVar3);
  }
  *(int *)uVar7 = uVar5 * 8 + iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051770 @ 98051770 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051770(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)FUN_980447a8();
  *puVar2 = &PTR_LAB_9800b600;
  if (*(char *)(puVar2 + 0xf) != '\0') {
    uVar4 = 0;
    do {
      iVar1 = uVar4 * 8;
      piVar3 = *(int **)(iVar1 + puVar2[9]);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(*(undefined4 *)(iVar1 + puVar2[9]));
        *(undefined4 *)(iVar1 + puVar2[9]) = 0;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < *(byte *)(puVar2 + 0xf));
  }
  if (puVar2[8] != 0) {
    FUN_9804fc78(puVar2[8]);
    puVar2[8] = 0;
  }
  *puVar2 = &PTR_DAT_9800b338;
  if ((int *)puVar2[2] != (int *)0x0) {
    (**(code **)(*(int *)puVar2[2] + 4))();
    puVar2[2] = 0;
  }
  *puVar2 = &PTR_LAB_9800b324;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051840 @ 98051840 ==== */

void FUN_98051840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980519d8 @ 980519d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980519d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051ad8 @ 98051ad8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051ad8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 local_50 [2];
  ushort local_4e;
  
  uVar5 = FUN_98044798();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = 0;
  uVar3 = 0;
  if (*(byte *)uVar5 != 0) {
    do {
      if (iVar2 < 0) {
        halt_baddata();
      }
      puVar4 = (undefined4 *)(uVar3 * 8 + *(int *)(iVar1 + 0x24));
      iVar2 = *(int *)(DAT_9807909c + 0x3c);
      *(undefined4 *)(uVar3 * 8 + *(int *)(iVar1 + 0x24)) = 0;
      iVar2 = FUN_9804e458(iVar2);
      if ((-1 < iVar2) &&
         (iVar2 = (**(code **)(*(int *)*puVar4 + 8))((int *)*puVar4,local_50), -1 < iVar2)) {
        *(char *)(puVar4 + 1) = (char)uVar3;
        *(undefined1 *)((int)puVar4 + 5) = 1;
        *(undefined1 *)((int)puVar4 + 6) = local_50[0];
        if (*(ushort *)(iVar1 + 0x3e) < local_4e) {
          *(ushort *)(iVar1 + 0x3e) = local_4e;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)uVar5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051bb8 @ 98051bb8 ==== */

undefined4 FUN_98051bb8(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r13;
  int iStack_10;
  
  if ((*(byte *)((int)param_2 + 5) & 1) == 0) {
    return 0;
  }
  bVar1 = *(byte *)((int)param_2 + 6);
  if ((bVar1 & 6) == 6) {
    iStack_10 = *param_3;
    if (iStack_10 != 0) {
      iVar4 = (uint)*(byte *)(unaff_r13 + 0x10c) * 2;
      uVar3 = 0;
      do {
        if (iStack_10 == *(int *)((iVar4 + 3 + uVar3) * 4 + DAT_9807909c)) {
          iVar4 = *(int *)(((uVar3 - 1 & 1) + iVar4 + 3) * 4 + DAT_9807909c);
          *param_3 = iVar4;
          goto LAB_98051ca8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 2);
    }
    iVar4 = *(int *)((uint)*(byte *)(unaff_r13 + 0x10c) * 8 + DAT_9807909c + 0xc);
    *param_3 = iVar4;
  }
  else if ((bVar1 & 3) == 0) {
    iVar4 = iStack_10;
    if ((bVar1 & 4) != 0) {
      iStack_10 = 0;
      iVar4 = *param_3;
    }
  }
  else {
    iStack_10 = *param_3;
    iVar4 = 0;
  }
LAB_98051ca8:
  uVar2 = (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,iStack_10,iVar4);
  return uVar2;
}


/* ==== FUN_98051cd8 @ 98051cd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051cd8(void)

{
  int *piVar1;
  undefined1 uVar2;
  int unaff_r13;
  
  piVar1 = (int *)FUN_980447a8();
  FUN_98046688();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if ((*(byte *)((int)piVar1 + 0x3d) & 1) == 0) {
    uVar2 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar2;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    *(byte *)((int)piVar1 + 0x3d) = *(byte *)((int)piVar1 + 0x3d) & 0xbe | 1;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    (**(code **)(*piVar1 + 0x4c))(piVar1);
  }
  else {
    uVar2 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar2;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    *(byte *)((int)piVar1 + 0x3d) = *(byte *)((int)piVar1 + 0x3d) & 0xfb;
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790ac = 0;
    DAT_980790b0 = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
  FUN_98046688();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98051f00 @ 98051f00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98051f00(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r13;
  ulonglong uVar4;
  
  uVar4 = FUN_980447a8();
  piVar1 = (int *)(uVar4 >> 0x20);
  FUN_98046688();
  if ((uVar4 & 1) == 0) {
    uVar2 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar2;
    }
    iVar3 = DAT_980790a8 + 1;
    if ((*(byte *)((int)piVar1 + 0x3d) & 1) == 0) {
      if (((iVar3 != 0) && (unaff_r13 == DAT_980790ac)) && (iVar3 = DAT_980790a8, DAT_980790a8 == 0)
         ) {
        DAT_980790b0 = 0;
        DAT_980790ac = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
        FUN_98046688();
        halt_baddata();
      }
    }
    else {
      DAT_980790a8 = iVar3;
      uVar2 = FUN_98059034();
      if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
        func_0x98058be4(&DAT_980790a4);
        DAT_980790ac = unaff_r13;
        DAT_980790b0 = uVar2;
      }
      DAT_980790a8 = DAT_980790a8 + 1;
      *(byte *)((int)piVar1 + 0x3d) = *(byte *)((int)piVar1 + 0x3d) | 4;
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      *(undefined2 *)(piVar1 + 0x10) = *(undefined2 *)((int)piVar1 + 0x3e);
      iVar3 = DAT_980790a8;
    }
  }
  else {
    uVar2 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar2;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    FUN_9804bda8();
    if ((*(byte *)((int)piVar1 + 0x3d) & 1) == 0) {
      iVar3 = DAT_980790a8;
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, iVar3 = DAT_980790a8, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
        FUN_98046688();
        halt_baddata();
      }
    }
    else {
      uVar2 = FUN_98059034();
      if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
        func_0x98058be4(&DAT_980790a4);
        DAT_980790ac = unaff_r13;
        DAT_980790b0 = uVar2;
      }
      DAT_980790a8 = DAT_980790a8 + 1;
      *(byte *)((int)piVar1 + 0x3d) = *(byte *)((int)piVar1 + 0x3d) & 0xba;
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      (**(code **)(*piVar1 + 0x50))(piVar1);
      iVar3 = DAT_980790a8;
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, iVar3 = DAT_980790a8, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
        FUN_98046688();
        halt_baddata();
      }
    }
  }
  DAT_980790a8 = iVar3;
  FUN_98046688();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980522c0 @ 980522c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980522c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_980447a8();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  puVar3 = (undefined4 *)uVar5;
  *(undefined4 *)(iVar1 + 0x2c) = puVar3[4];
  *(undefined4 *)(iVar1 + 0x30) = puVar3[5];
  *(undefined4 *)(iVar1 + 0x34) = *puVar3;
  *(undefined4 *)(iVar1 + 0x38) = puVar3[1];
  if ((undefined1 *)puVar3[2] == (undefined1 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)puVar3[2];
  }
  *(undefined1 *)(iVar1 + 0x3c) = uVar4;
  if (puVar3[3] != 0) {
    *(undefined4 *)(iVar1 + 0x20) = puVar3[3];
    if (puVar3[3] != 0) {
      FUN_9804fc58(puVar3[3]);
    }
    if (*(byte *)(iVar1 + 0x3c) != 0) {
      iVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x14))
                        (*(int **)(iVar1 + 8),(uint)*(byte *)(iVar1 + 0x3c) << 3);
      *(int *)(iVar1 + 0x24) = iVar2;
      if (iVar2 == 0) {
        halt_baddata();
      }
    }
    if (*(char *)(iVar1 + 0x3c) != '\0') {
      FUN_98051ad8();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980523f8 @ 980523f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980523f8(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r13;
  int iVar8;
  undefined8 uVar9;
  int local_40;
  
  uVar9 = FUN_980447a0();
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  piVar4 = (int *)uVar9;
  uVar6 = 0;
  iVar3 = 0;
  iVar8 = local_40;
  if (*(char *)(iVar2 + 0x3c) != '\0') {
    do {
      if (iVar3 < 0) {
        halt_baddata();
      }
      puVar5 = (undefined4 *)(uVar6 * 8 + *(int *)(iVar2 + 0x24));
      if ((*(byte *)((int)puVar5 + 5) & 1) == 0) {
        iVar3 = 0;
      }
      else {
        bVar1 = *(byte *)((int)puVar5 + 6);
        if ((bVar1 & 6) == 6) {
          local_40 = *piVar4;
          if (local_40 != 0) {
            iVar8 = (uint)*(byte *)(unaff_r13 + 0x10c) * 2;
            uVar7 = 0;
            do {
              if (local_40 == *(int *)((iVar8 + 3 + uVar7) * 4 + DAT_9807909c)) {
                iVar8 = *(int *)(((uVar7 - 1 & 1) + iVar8 + 3) * 4 + DAT_9807909c);
                *piVar4 = iVar8;
                goto LAB_9805250c;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 2);
          }
          iVar8 = *(int *)((uint)*(byte *)(unaff_r13 + 0x10c) * 8 + DAT_9807909c + 0xc);
          *piVar4 = iVar8;
        }
        else if ((bVar1 & 3) == 0) {
          if ((bVar1 & 4) != 0) {
            iVar8 = *piVar4;
            local_40 = 0;
          }
        }
        else {
          local_40 = *piVar4;
          iVar8 = 0;
        }
LAB_9805250c:
        iVar3 = (**(code **)(*(int *)*puVar5 + 0x18))((int *)*puVar5,local_40,iVar8);
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < *(byte *)(iVar2 + 0x3c));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980525d0 @ 980525d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980525d0(void)

{
  if (DAT_98076c38 != 0x1800) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


/* ==== FUN_980526a0 @ 980526a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980526a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98052760 @ 98052760 ==== */

int FUN_98052760(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0xc))((int *)(param_1 + 4));
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== FUN_980527c8 @ 980527c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980527c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98052830 @ 98052830 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98052830(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98052898 @ 98052898 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98052898(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980528c8 @ 980528c8 ==== */

void FUN_980528c8(undefined4 *param_1,int param_2)

{
  param_1[2] = 1;
  param_1[1] = &PTR_LAB_9800b658;
  param_1[3] = *(undefined4 *)(param_2 + 4);
  *param_1 = &UNK_9800b690;
  param_1[4] = 0;
  param_1[1] = &PTR_LAB_9800b674;
  param_1[5] = 0;
  return;
}


/* ==== FUN_980529f0 @ 980529f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980529f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98052cc0 @ 98052cc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98052cc0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_r13;
  undefined8 uVar9;
  
  uVar9 = FUN_9804479c();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  pbVar3 = (byte *)uVar9;
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if (param_3 == 0) {
    *param_4 = (*(byte *)(iVar1 + 0x10) + 1) * 8;
  }
  else {
    *pbVar3 = *(byte *)(iVar1 + 0x10);
    uVar6 = 0;
    *(byte **)(pbVar3 + 4) = pbVar3 + 8;
    if (*(char *)(iVar1 + 0x10) != '\0') {
      iVar7 = 0;
      iVar8 = 0;
      do {
        uVar6 = uVar6 + 1;
        *(undefined1 *)(iVar7 + *(int *)(pbVar3 + 4)) =
             *(undefined1 *)(iVar8 + *(int *)(iVar1 + 0x14));
        *(undefined1 *)(iVar7 + *(int *)(pbVar3 + 4) + 1) =
             *(undefined1 *)(iVar8 + *(int *)(iVar1 + 0x14) + 1);
        iVar5 = iVar8 + *(int *)(iVar1 + 0x14);
        iVar4 = iVar7 + *(int *)(pbVar3 + 4);
        iVar8 = iVar8 + 0xc;
        iVar7 = iVar7 + 8;
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 8);
      } while (uVar6 < *(byte *)(iVar1 + 0x10));
    }
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790ac = 0;
    DAT_980790b0 = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98052e18 @ 98052e18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98052e18(void)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int unaff_r13;
  undefined8 uVar11;
  
  uVar11 = FUN_980447a4();
  iVar2 = (int)((ulonglong)uVar11 >> 0x20);
  pbVar4 = (byte *)uVar11;
  uVar3 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar3;
  }
  iVar9 = DAT_980790a8 + 1;
  if (pbVar4 == (byte *)0x0) {
    DAT_980790a8 = iVar9;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x19) = 0;
  }
  else {
    bVar1 = *pbVar4;
    if (*(byte *)(iVar2 + 0x18) < bVar1) {
      if (((iVar9 != 0) && (unaff_r13 == DAT_980790ac)) && (iVar9 = DAT_980790a8, DAT_980790a8 == 0)
         ) {
        DAT_980790b0 = 0;
        DAT_980790ac = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
        iVar9 = DAT_980790a8;
      }
      DAT_980790a8 = iVar9;
      if (DAT_980790a8 == 0) {
        halt_baddata();
      }
      if (unaff_r13 != DAT_980790ac) {
        halt_baddata();
      }
      DAT_980790a8 = DAT_980790a8 + -1;
      if (DAT_980790a8 != 0) {
        halt_baddata();
      }
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
      halt_baddata();
    }
    DAT_980790a8 = iVar9;
    *(byte *)(iVar2 + 0x10) = bVar1;
    uVar6 = 0;
    if (bVar1 != 0) {
      iVar9 = 0;
      iVar10 = 0;
      do {
        uVar6 = uVar6 + 1;
        *(undefined1 *)(iVar9 + *(int *)(iVar2 + 0x14)) =
             *(undefined1 *)(*(int *)(pbVar4 + 4) + iVar10);
        *(undefined1 *)(iVar9 + *(int *)(iVar2 + 0x14) + 1) =
             *(undefined1 *)(*(int *)(pbVar4 + 4) + iVar10 + 1);
        *(undefined4 *)(iVar9 + *(int *)(iVar2 + 0x14) + 4) =
             *(undefined4 *)(*(int *)(pbVar4 + 4) + iVar10 + 4);
        iVar5 = *(int *)(pbVar4 + 4) + iVar10;
        iVar10 = iVar10 + 8;
        *(undefined4 *)(iVar9 + *(int *)(iVar2 + 0x14) + 8) = *(undefined4 *)(iVar5 + 4);
        iVar9 = iVar9 + 0xc;
      } while (uVar6 < *(byte *)(iVar2 + 0x10));
    }
    uVar7 = 0;
    uVar6 = 0;
    if (*(char *)(iVar2 + 0x10) != '\0') {
      iVar10 = 0;
      iVar9 = *(int *)(iVar2 + 0x14);
      do {
        uVar8 = *(byte *)(iVar9 + 1) + 1;
        if (uVar6 < uVar8) {
          uVar6 = uVar8;
        }
        uVar7 = uVar7 + 1;
        iVar10 = iVar10 + 0xc;
        iVar9 = iVar10 + *(int *)(iVar2 + 0x14);
      } while (uVar7 < *(byte *)(iVar2 + 0x10));
    }
    *(char *)(iVar2 + 0x19) = (char)uVar6;
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790ac = 0;
    DAT_980790b0 = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980531c0 @ 980531c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980531c0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int unaff_r13;
  undefined8 uVar8;
  
  uVar8 = FUN_980447a0();
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  pbVar4 = (byte *)uVar8;
  uVar3 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar3;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if (*pbVar4 != 0) {
    uVar5 = 0;
    do {
      if (*(byte *)(iVar2 + 0x10) <= *(byte *)(uVar5 * 8 + *(int *)(pbVar4 + 4))) {
        if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
           (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
          DAT_980790ac = 0;
          DAT_980790b0 = 0;
          func_0x98058bd4(&DAT_980790a4);
          FUN_98059044();
        }
        if (DAT_980790a8 == 0) {
          halt_baddata();
        }
        if (unaff_r13 != DAT_980790ac) {
          halt_baddata();
        }
        DAT_980790a8 = DAT_980790a8 + -1;
        if (DAT_980790a8 != 0) {
          halt_baddata();
        }
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
        halt_baddata();
      }
      pbVar6 = (byte *)(uVar5 * 8 + *(int *)(pbVar4 + 4));
      uVar1 = *(undefined4 *)(pbVar6 + 4);
      iVar7 = (uint)*pbVar6 * 0xc + *(int *)(iVar2 + 0x14);
      *(undefined4 *)(iVar7 + 8) = uVar1;
      if ((param_3 & 0xff) != 0) {
        *(undefined4 *)(iVar7 + 4) = uVar1;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *pbVar4);
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980533a0 @ 980533a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980533a0(int param_1)

{
  int iVar1;
  uint in_r7;
  uint uVar2;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  
  uVar2 = in_r7 >> 5 & 0x1ffffff;
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      dataCacheBlockTouch(iVar1 + param_1);
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 0x80;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  altv207_13(in_vs32,in_vs38);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98053940 @ 98053940 ==== */

void FUN_98053940(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x4c);
  FUN_98054530();
  return;
}


/* ==== FUN_98053ba0 @ 98053ba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98053ba0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98053c78 @ 98053c78 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98053c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98053d18 @ 98053d18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98053d18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98053de0 @ 98053de0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98053de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98053e68 @ 98053e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98053e68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054248 @ 98054248 ==== */

void FUN_98054248(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_980544d8 @ 980544d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980544d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054518 @ 98054518 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98054518(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_9800b7c8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054530 @ 98054530 ==== */

void FUN_98054530(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98054598 @ 98054598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98054598(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980546b0 @ 980546b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980546b0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r13;
  undefined8 uVar5;
  
  uVar5 = FUN_980447a4();
  piVar1 = (int *)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  if ((param_3 & 0x10) == 0) {
    if (*(int *)(iVar2 + 0x20) == 0) {
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0xc);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      if ((((*(uint *)(iVar2 + 0xc) <= *(uint *)(iVar2 + 0x14)) && (DAT_980790a8 != 0)) &&
          (unaff_r13 == DAT_980790ac)) && (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      if (((*(uint *)(iVar2 + 0xc) < *(uint *)(iVar2 + 0x18)) && (DAT_980790a8 != 0)) &&
         ((unaff_r13 == DAT_980790ac && (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)))) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
    }
    if (((*(uint *)(iVar2 + 0xc) <= *(uint *)(iVar2 + 0x1c)) && (DAT_980790a8 != 0)) &&
       ((unaff_r13 == DAT_980790ac && (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)))) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    if ((((*(uint *)(iVar2 + 0xc) < *(uint *)(iVar2 + 0x20)) && (DAT_980790a8 != 0)) &&
        (unaff_r13 == DAT_980790ac)) && (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  if ((*(int *)(iVar2 + 0x10) != 0) && ((param_3 & 0x20) == 0)) {
    if (((*(uint *)(iVar2 + 0x18) <= *(uint *)(iVar2 + 0x14)) &&
        ((DAT_980790a8 != 0 && (unaff_r13 == DAT_980790ac)))) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
    if ((((*(uint *)(iVar2 + 0x18) <= *(uint *)(iVar2 + 0x1c)) && (DAT_980790a8 != 0)) &&
        (unaff_r13 == DAT_980790ac)) && (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  if (*(uint *)(iVar2 + 0x20) != 0) {
    if (*(int *)(iVar2 + 0x10) == 0) {
      uVar4 = *(uint *)(iVar2 + 0x1c);
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0x14);
    }
    if (((*(uint *)(iVar2 + 0x20) <= uVar4) && (DAT_980790a8 != 0)) &&
       ((unaff_r13 == DAT_980790ac && (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)))) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  uVar3 = 8;
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  (**(code **)(*piVar1 + 0x54))(piVar1,0x18,uVar3);
  if ((piVar1 + 4 == (int *)piVar1[4]) || ((int *)piVar1[4] == (int *)piVar1[6])) {
    (**(code **)(*piVar1 + 0x54))(piVar1,0x20,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054a28 @ 98054a28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98054a28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054ac8 @ 98054ac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98054ac8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int unaff_r13;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_9804479c();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  puVar3 = (undefined4 *)uVar9;
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  iVar5 = DAT_980790a8 + 1;
  if (iVar1 + 0x10 != *(int *)(iVar1 + 0x10)) {
    iVar4 = *(int *)(iVar1 + 0x18);
    iVar8 = *(int *)(iVar1 + 0x10) - iVar4;
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(iVar4 + iVar8);
      DAT_980790a8 = iVar5;
      if (*(undefined4 **)(iVar4 + iVar8) != puVar6) {
        (*(undefined4 **)(iVar4 + iVar8))[1] = puVar6[1];
        *(undefined4 *)puVar6[1] = *puVar6;
        puVar6[1] = puVar6;
        *puVar6 = puVar6;
      }
      piVar7 = (int *)(*(int *)(iVar1 + 0xc) + iVar8);
      *piVar7 = iVar1 + 4;
      piVar7[1] = *(int *)(iVar1 + 8);
      *(int **)(iVar1 + 8) = piVar7;
      *(int **)piVar7[1] = piVar7;
      iVar5 = *(int *)(iVar1 + 0x20) + 1;
      *(int *)(iVar1 + 0x20) = iVar5;
      *(int *)(iVar8 + 0x70) = iVar5;
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar1 + 0x20) + 1;
        *(int *)(iVar1 + 0x20) = iVar5;
        *(int *)(iVar8 + 0x70) = iVar5;
      }
      *(undefined1 *)(iVar8 + 0x75) = 0;
      *(undefined1 *)(iVar8 + 0x76) = 0;
      *(undefined1 *)(iVar8 + 0x77) = 0;
      *(undefined4 *)(iVar8 + 8) = *puVar3;
      trapWord(6,(uint)*(ushort *)(iVar1 + 0x5c),0);
      *(uint *)(iVar8 + 0xc) = (uint)puVar3[1] / (uint)*(ushort *)(iVar1 + 0x5c);
      *(undefined4 *)(iVar8 + 0x10) = puVar3[2];
      if ((param_3 & 0x20) == 0) {
        trapWord(6,(uint)*(ushort *)(iVar1 + 0x5c),0);
        *(uint *)(iVar8 + 0x14) = (uint)puVar3[3] / (uint)*(ushort *)(iVar1 + 0x5c);
        if (puVar3[4] == 0) {
          iVar5 = *(int *)(iVar8 + 0xc);
        }
        else {
          trapWord(6,(uint)*(ushort *)(iVar1 + 0x5c),0);
          iVar5 = (uint)puVar3[4] / (uint)*(ushort *)(iVar1 + 0x5c) + *(int *)(iVar8 + 0x14);
        }
        *(int *)(iVar8 + 0x18) = iVar5;
      }
      else {
        *(undefined4 *)(iVar8 + 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x18) = 0;
        FUN_98044240();
      }
      *(undefined4 *)(iVar8 + 0x20) = 0;
      *(undefined4 *)(iVar8 + 0x1c) = 0;
      *(undefined4 *)(iVar8 + 0x24) = puVar3[0x15];
      FUN_980546b0(iVar1,iVar8,param_3);
      if (DAT_980790a8 == 0) {
        halt_baddata();
      }
      if (unaff_r13 != DAT_980790ac) {
        halt_baddata();
      }
      DAT_980790a8 = DAT_980790a8 + -1;
      if (DAT_980790a8 != 0) {
        halt_baddata();
      }
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
      halt_baddata();
    }
  }
  if (((iVar5 != 0) && (unaff_r13 == DAT_980790ac)) && (iVar5 = DAT_980790a8, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
    iVar5 = DAT_980790a8;
  }
  DAT_980790a8 = iVar5;
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054d88 @ 98054d88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98054d88(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int unaff_r13;
  undefined8 uVar9;
  
  uVar9 = FUN_980447a0();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  puVar3 = (undefined4 *)uVar9;
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  iVar6 = DAT_980790a8 + 1;
  if (iVar1 + 0x10 != *(int *)(iVar1 + 0x10)) {
    iVar5 = *(int *)(iVar1 + 0x18);
    iVar4 = *(int *)(iVar1 + 0x10) - iVar5;
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)(iVar5 + iVar4);
      DAT_980790a8 = iVar6;
      if (*(undefined4 **)(iVar5 + iVar4) != puVar7) {
        (*(undefined4 **)(iVar5 + iVar4))[1] = puVar7[1];
        *(undefined4 *)puVar7[1] = *puVar7;
        puVar7[1] = puVar7;
        *puVar7 = puVar7;
      }
      piVar8 = (int *)(*(int *)(iVar1 + 0xc) + iVar4);
      *piVar8 = iVar1 + 4;
      piVar8[1] = *(int *)(iVar1 + 8);
      *(int **)(iVar1 + 8) = piVar8;
      *(int **)piVar8[1] = piVar8;
      iVar6 = *(int *)(iVar1 + 0x20) + 1;
      *(int *)(iVar1 + 0x20) = iVar6;
      *(int *)(iVar4 + 0x70) = iVar6;
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar1 + 0x20) + 1;
        *(int *)(iVar1 + 0x20) = iVar6;
        *(int *)(iVar4 + 0x70) = iVar6;
      }
      *(undefined1 *)(iVar4 + 0x75) = 0;
      *(undefined1 *)(iVar4 + 0x76) = 0;
      *(undefined1 *)(iVar4 + 0x77) = 0;
      *(undefined4 *)(iVar4 + 8) = *puVar3;
      trapWord(6,(uint)*(ushort *)(iVar1 + 0x5c),0);
      *(uint *)(iVar4 + 0xc) = (uint)puVar3[1] / (uint)*(ushort *)(iVar1 + 0x5c);
      *(undefined4 *)(iVar4 + 0x10) = puVar3[2];
      *(undefined4 *)(iVar4 + 0x14) = puVar3[3];
      *(undefined4 *)(iVar4 + 0x18) = puVar3[4];
      *(undefined4 *)(iVar4 + 0x1c) = puVar3[5];
      *(undefined4 *)(iVar4 + 0x20) = puVar3[6];
      *(undefined4 *)(iVar4 + 0x24) = puVar3[7];
      FUN_980546b0(iVar1,iVar4,param_3);
      if (DAT_980790a8 == 0) {
        halt_baddata();
      }
      if (unaff_r13 != DAT_980790ac) {
        halt_baddata();
      }
      DAT_980790a8 = DAT_980790a8 + -1;
      if (DAT_980790a8 != 0) {
        halt_baddata();
      }
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
      halt_baddata();
    }
  }
  if (((iVar6 != 0) && (unaff_r13 == DAT_980790ac)) && (iVar6 = DAT_980790a8, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
    iVar6 = DAT_980790a8;
  }
  DAT_980790a8 = iVar6;
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98054ff0 @ 98054ff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98054ff0(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_r13;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a4();
  piVar1 = (int *)((ulonglong)uVar6 >> 0x20);
  iVar5 = (int)uVar6;
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  iVar3 = DAT_980790a8 + 1;
  if (iVar5 == 0) {
    if (piVar1 + 1 == (int *)piVar1[1]) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar1[1] - piVar1[3];
    }
    if (iVar5 == 0) {
      if (iVar3 == 0) {
        DAT_980790a8 = iVar3;
        halt_baddata();
      }
      if (unaff_r13 != DAT_980790ac) {
        DAT_980790a8 = iVar3;
        halt_baddata();
      }
      if (DAT_980790a8 != 0) {
        halt_baddata();
      }
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
      halt_baddata();
    }
  }
  puVar4 = (undefined4 *)(piVar1[3] + iVar5);
  DAT_980790a8 = iVar3;
  if ((undefined4 *)*puVar4 != puVar4) {
    ((undefined4 *)*puVar4)[1] = puVar4[1];
    *(undefined4 *)puVar4[1] = *puVar4;
    puVar4[1] = puVar4;
    *puVar4 = puVar4;
  }
  puVar4 = (undefined4 *)(piVar1[6] + iVar5);
  *puVar4 = piVar1 + 4;
  puVar4[1] = piVar1[5];
  piVar1[5] = (int)puVar4;
  *(undefined4 **)puVar4[1] = puVar4;
  FUN_980441a0((uint *)(piVar1 + 0x1a),0,0x30);
  *(undefined1 *)(iVar5 + 0x74) = 0;
  (**(code **)(*piVar1 + 0x54))(piVar1,0x20,0x20);
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790ac = 0;
    DAT_980790b0 = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980551b8 @ 980551b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980551b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055280 @ 98055280 ==== */

int FUN_98055280(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  
  puVar6 = (uint *)(param_3 * 0x800 + param_1);
  uVar3 = *puVar6;
  iVar8 = (uVar3 & 0xff) + 1;
  puVar7 = puVar6;
  iVar2 = param_3 << 0xe;
  iVar4 = param_3 << 0xe;
  for (puVar1 = puVar6 + iVar8 * 0x200; iVar5 = iVar2, puVar1 < (uint *)(param_1 + param_2);
      puVar1 = puVar1 + iVar8 * 0x200) {
    uVar3 = *puVar1;
    iVar4 = iVar8 * 0x4000;
    iVar8 = (uVar3 & 0xff) + 1;
    puVar6 = puVar7;
    puVar7 = puVar1;
    iVar2 = iVar4 + iVar5;
    iVar4 = iVar5;
  }
  if ((uVar3 & 0xfc000000) == 0) {
    iVar5 = iVar4;
    puVar7 = puVar6;
  }
  uVar3 = *puVar7 >> 0x1a;
  uVar9 = (*puVar7 >> 0xb & 0x7fff) + 0x20;
  if (1 < uVar3) {
    iVar4 = uVar3 - 1;
    do {
      uVar9 = ((uint)(*(int *)((uVar9 >> 3) + (int)puVar7) << (uVar9 & 7)) >> 0x11) + uVar9;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar9 + iVar5;
}


/* ==== FUN_98055340 @ 98055340 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055340(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980553b8 @ 980553b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980553b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055448 @ 98055448 ==== */

undefined4 FUN_98055448(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_34;
  undefined4 local_30 [12];
  
  if (*(char *)(param_1 + 0x124) == '\x01') {
    return 0x80004001;
  }
  *(undefined1 *)(param_1 + 0x124) = 2;
  if ((0xff < (uint)param_2[2]) && (param_2[2] != 0xffffffff)) {
    puVar2 = &uStack_34;
    puVar3 = param_2 + -1;
    iVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_2 = local_30;
    local_30[2] = 0xffffffff;
  }
  iVar4 = param_2[2];
  if (iVar4 != 0) {
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    *(int *)(param_1 + 0x110) = iVar4;
    *(undefined4 *)(param_1 + 0x10c) = param_2[4];
  }
  uVar1 = FUN_98054d88(param_1 + 0x10,param_2,param_3 & 0xff | 0x10);
  return uVar1;
}


/* ==== FUN_98055500 @ 98055500 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055500(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_980447a8();
  if (*(char *)(iVar1 + 0x28) != '\0') {
    uVar3 = 0;
    do {
      FUN_9804dd98(*(int *)(iVar1 + 0xa8),uVar3);
      FUN_9804dd58(*(int *)(iVar1 + 0xa8),uVar3);
      iVar2 = *(int *)(iVar1 + 0xa8);
      if ((*(uint *)(iVar2 + 4) & 0x80000) != 0) {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfff7ffff;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(iVar1 + 0x28));
  }
  FUN_98054248();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980555f0 @ 980555f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980555f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055648 @ 98055648 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055648(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055718 @ 98055718 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055718(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055780 @ 98055780 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055780(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055808 @ 98055808 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055808(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055838 @ 98055838 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055978 @ 98055978 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055978(void)

{
  int iVar1;
  undefined1 uVar2;
  int unaff_r13;
  double dVar3;
  
  iVar1 = FUN_980447a8();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  dVar3 = (double)FUN_98043bd0();
  *(float *)(iVar1 + 0x74) = (float)dVar3;
  if (*(char *)(iVar1 + 0x38) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055ad0 @ 98055ad0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055ad0(void)

{
  int iVar1;
  undefined1 uVar2;
  int unaff_r13;
  double extraout_f1;
  
  iVar1 = FUN_980447a8();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  *(float *)(iVar1 + 0x74) = (float)extraout_f1;
  if (*(char *)(iVar1 + 0x38) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790ac = 0;
      DAT_980790b0 = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98055ef0 @ 98055ef0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98055ef0(void)

{
  int iVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  undefined4 *puVar5;
  int unaff_r13;
  uint uVar6;
  undefined8 uVar7;
  uint uStack_50;
  undefined4 local_4c;
  int local_48;
  
  uVar7 = FUN_9804479c();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar4 = FUN_98059034();
  if ((*(int *)(iVar1 + 300) == 0) || (unaff_r13 != *(int *)(iVar1 + 0x130))) {
    func_0x98058be4(iVar1 + 0x128);
    *(undefined1 *)(iVar1 + 0x134) = uVar4;
    *(int *)(iVar1 + 0x130) = unaff_r13;
  }
  *(int *)(iVar1 + 300) = *(int *)(iVar1 + 300) + 1;
  iVar2 = FUN_9804e1c0();
  if (iVar2 == 0) {
    iVar3 = FUN_9804e060(*(uint **)(iVar1 + 0xb8));
    if (iVar3 < 0) goto LAB_98055ff0;
    FUN_9804e0f8();
  }
  if (*(char *)(iVar1 + 0x38) != '\0') {
    uVar6 = 0;
    do {
      iVar3 = FUN_9804deb8(*(int *)(iVar1 + 0xb8),uVar6,&uStack_50);
      if (iVar3 < 0) break;
      puVar5 = (undefined4 *)(uVar6 * 8 + (int)uVar7);
      uVar6 = uVar6 + 1 & 0xff;
      *puVar5 = local_4c;
      *(short *)(puVar5 + 1) = (short)(local_48 << 7);
    } while (uVar6 < *(byte *)(iVar1 + 0x38));
  }
  if (iVar2 == 0) {
    FUN_9804e310(*(uint **)(iVar1 + 0xb8));
  }
LAB_98055ff0:
  if ((*(int *)(iVar1 + 300) != 0) && (unaff_r13 == *(int *)(iVar1 + 0x130))) {
    iVar2 = *(int *)(iVar1 + 300) + -1;
    *(int *)(iVar1 + 300) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined1 *)(iVar1 + 0x134) = 0;
      func_0x98058bd4(iVar1 + 0x128);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98056040 @ 98056040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98056040(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r13;
  
  iVar1 = FUN_980447a4();
  if (*(char *)(iVar1 + 0x124) != '\x02') {
    uVar2 = FUN_98059034();
    if ((*(int *)(iVar1 + 300) == 0) || (unaff_r13 != *(int *)(iVar1 + 0x130))) {
      func_0x98058be4(iVar1 + 0x128);
      *(undefined1 *)(iVar1 + 0x134) = uVar2;
      *(int *)(iVar1 + 0x130) = unaff_r13;
    }
    *(int *)(iVar1 + 300) = *(int *)(iVar1 + 300) + 1;
    FUN_98044240();
    if (((*(int *)(iVar1 + 300) != 0) && (unaff_r13 == *(int *)(iVar1 + 0x130))) &&
       (iVar3 = *(int *)(iVar1 + 300) + -1, *(int *)(iVar1 + 300) = iVar3, iVar3 == 0)) {
      *(undefined1 *)(iVar1 + 0x134) = 0;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      func_0x98058bd4(iVar1 + 0x128);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980561c8 @ 980561c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980561c8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 extraout_r4;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_r13;
  undefined5 uVar7;
  
  iVar1 = FUN_980447a4();
  if ((*(byte *)(iVar1 + 0x108) & 2) != 0) {
    uVar7 = FUN_98059034();
    uVar4 = (undefined4)uVar7;
    if ((*(int *)(iVar1 + 300) == 0) || (unaff_r13 != *(int *)(iVar1 + 0x130))) {
      func_0x98058be4(iVar1 + 0x128);
      *(char *)(iVar1 + 0x134) = (char)((uint5)uVar7 >> 0x20);
      *(int *)(iVar1 + 0x130) = unaff_r13;
      uVar4 = extraout_r4;
    }
    *(int *)(iVar1 + 300) = *(int *)(iVar1 + 300) + 1;
    iVar2 = FUN_9804df98(*(undefined4 *)(iVar1 + 0xb8),uVar4,param_3);
    if (((*(int *)(iVar1 + 300) != 0) && (unaff_r13 == *(int *)(iVar1 + 0x130))) &&
       (iVar6 = *(int *)(iVar1 + 300) + -1, *(int *)(iVar1 + 300) = iVar6, iVar6 == 0)) {
      *(undefined1 *)(iVar1 + 0x134) = 0;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      func_0x98058bd4(iVar1 + 0x128);
      FUN_98059044();
    }
    if (iVar2 < 0) {
      halt_baddata();
    }
  }
  uVar3 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar3;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if ((*(byte *)(iVar1 + 0xac) & 1) == 0) {
    uVar5 = 3;
    uVar4 = 3;
  }
  else {
    if ((*(byte *)(iVar1 + 0xac) & 4) == 0) goto LAB_9805631c;
    uVar5 = 2;
    uVar4 = 6;
  }
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x54))((int *)(iVar1 + 0x10),uVar4,uVar5);
LAB_9805631c:
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98056578 @ 98056578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98056578(void)

{
  int iVar1;
  undefined1 uVar2;
  int unaff_r13;
  
  iVar1 = FUN_980447a8();
  uVar2 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar2;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if ((iVar1 + 0x14 != *(int *)(iVar1 + 0x14)) && (*(int *)(iVar1 + 0x14) != *(int *)(iVar1 + 0x1c))
     ) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x54))((int *)(iVar1 + 0x10),8,8);
  }
  if ((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) {
    DAT_980790a8 = DAT_980790a8 + -1;
    if (DAT_980790a8 == 0) {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98056668 @ 98056668 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98056668(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_980447a0();
  puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  FUN_98053ba0();
  puVar2[0x2e] = 0;
  *puVar2 = &PTR_LAB_9800b8b0;
  puVar2[1] = &DAT_9800b888;
  puVar2[4] = &DAT_9800b828;
  *(undefined1 *)(puVar2 + 0x42) = *(undefined1 *)((int)uVar6 + 0x45);
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  puVar2[0x48] = 0;
  *(undefined1 *)(puVar2 + 0x49) = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4c] = 0;
  *(undefined1 *)(puVar2 + 0x4d) = 0;
  puVar2[0x4a] = 0;
  FUN_98053940((int)(puVar2 + 1),(int)uVar6);
  uVar5 = (uint)*(byte *)(puVar2 + 0xe);
  iVar4 = uVar5 * 0x58;
  if (0x2e8ba2e < uVar5) {
    iVar4 = -1;
  }
  puVar3 = (uint *)(**(code **)(*param_3 + 0x14))(param_3,iVar4);
  puVar1 = puVar3;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      FUN_980441a0(puVar1,0,0x4c);
      puVar1[0x13] = 0;
      puVar1 = puVar1 + 0x16;
    }
  }
  puVar2[0x32] = puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980567d0 @ 980567d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980567d0(void)

{
  int iVar1;
  int iVar2;
  bool bVar6;
  undefined1 uVar7;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  int unaff_r13;
  int *piVar11;
  byte bVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  
  iVar1 = FUN_98044780();
  bVar12 = 1;
  bVar8 = false;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    uVar15 = 0;
    do {
      iVar2 = FUN_9804d878(*(int *)(iVar1 + 0xb8),uVar15);
      if (iVar2 == 0) {
        halt_baddata();
      }
      bVar6 = FUN_9804d8d8(*(int *)(iVar1 + 0xb8),uVar15);
      uVar15 = uVar15 + 1 & 0xff;
      bVar12 = -bVar6 & bVar12;
    } while (uVar15 < *(byte *)(iVar1 + 0x38));
  }
  uVar7 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar7;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  piVar11 = (int *)(iVar1 + 0x14);
  if (piVar11 == *(int **)(iVar1 + 0x14)) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)((int)*(int **)(iVar1 + 0x14) - *(int *)(iVar1 + 0x1c));
  }
  if (piVar14 != (int *)0x0) {
    iVar2 = *(int *)(iVar1 + 0x110);
    if ((iVar2 != 0) && (*(uint *)(iVar1 + 0x10c) <= *(uint *)(iVar1 + 0xa8))) {
      if (iVar2 == -1) {
        iVar2 = -1;
      }
      else {
        iVar2 = iVar2 + -1;
        *(int *)(iVar1 + 0x110) = iVar2;
      }
      *(int *)(iVar1 + 0x110) = iVar2;
      *(uint *)(iVar1 + 0x10c) = (piVar14[6] - piVar14[5]) + *(uint *)(iVar1 + 0x10c);
      if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
         (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
        DAT_980790ac = 0;
        DAT_980790b0 = 0;
        func_0x98058bd4(&DAT_980790a4);
        FUN_98059044();
      }
      if (((*(int *)(iVar1 + 300) != 0) && (unaff_r13 == *(int *)(iVar1 + 0x130))) &&
         (iVar2 = *(int *)(iVar1 + 300) + -1, *(int *)(iVar1 + 300) = iVar2, iVar2 == 0)) {
        *(undefined4 *)(iVar1 + 0x130) = 0;
        *(undefined1 *)(iVar1 + 0x134) = 0;
        func_0x98058bd4(iVar1 + 0x128);
        FUN_98059044();
      }
      if (*(code **)(iVar1 + 0xb4) != (code *)0x0) {
        local_88 = *(undefined4 *)(iVar1 + 0xc);
        local_84 = piVar14[9];
        local_80 = 0;
        (**(code **)(iVar1 + 0xb4))(&local_88);
      }
      uVar7 = FUN_98059034();
      if ((*(int *)(iVar1 + 300) == 0) || (unaff_r13 != *(int *)(iVar1 + 0x130))) {
        func_0x98058be4(iVar1 + 0x128);
        *(int *)(iVar1 + 0x130) = unaff_r13;
        *(undefined1 *)(iVar1 + 0x134) = uVar7;
      }
      *(int *)(iVar1 + 300) = *(int *)(iVar1 + 300) + 1;
      uVar7 = FUN_98059034();
      if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
        func_0x98058be4(&DAT_980790a4);
        DAT_980790ac = unaff_r13;
        DAT_980790b0 = uVar7;
      }
      DAT_980790a8 = DAT_980790a8 + 1;
    }
    if (*(int *)(iVar1 + 0x120) != 0) {
      *(undefined4 *)(iVar1 + 0x120) = 0;
      *(uint *)(iVar1 + 0x110) = (uint)*(byte *)(iVar1 + 0xc6);
      if (*(char *)(iVar1 + 0x38) != '\0') {
        uVar15 = 0;
        do {
          FUN_9804ddd8(*(int *)(iVar1 + 0xb8),uVar15,(uint *)(iVar1 + 0xbc));
          uVar15 = uVar15 + 1 & 0xff;
        } while (uVar15 < *(byte *)(iVar1 + 0x38));
      }
    }
    do {
      if ((int *)*piVar14 == piVar14) break;
      piVar10 = *(int **)(*(int *)(iVar1 + 0x1c) + (int)piVar14);
      piVar13 = (int *)((int)piVar10 - *(int *)(iVar1 + 0x1c));
      if (piVar11 == piVar10) {
        piVar13 = (int *)0x0;
      }
      if (*(char *)(piVar14 + 0x1d) == '\0') {
        bVar8 = true;
      }
      else {
        bVar6 = false;
        if (*(char *)(iVar1 + 0x38) != '\0') {
          uVar15 = 0;
          do {
            iVar2 = FUN_9804d7f8(*(int *)(iVar1 + 0xb8),uVar15,piVar14[2]);
            if ((iVar2 != 0) &&
               (uVar3 = FUN_9804dd58(*(int *)(iVar1 + 0xb8),uVar15), (uVar3 & 8) == 0)) {
              bVar6 = true;
              break;
            }
            uVar15 = uVar15 + 1 & 0xff;
          } while (uVar15 < *(byte *)(iVar1 + 0x38));
        }
        if (!bVar6) {
          *(undefined1 *)(piVar14 + 0x1d) = 4;
        }
      }
      if ((*(char *)(piVar14 + 0x1d) == '\x04') &&
         (((piVar13 != (int *)0x0 || ((*(byte *)(iVar1 + 0xac) & 1) == 0)) ||
          ((*(byte *)(iVar1 + 0xac) & 0x10) != 0)))) {
        if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
           (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
          DAT_980790b0 = 0;
          DAT_980790ac = 0;
          func_0x98058bd4(&DAT_980790a4);
          FUN_98059044();
        }
        if (((*(int *)(iVar1 + 300) != 0) && (unaff_r13 == *(int *)(iVar1 + 0x130))) &&
           (iVar2 = *(int *)(iVar1 + 300) + -1, *(int *)(iVar1 + 300) = iVar2, iVar2 == 0)) {
          *(undefined4 *)(iVar1 + 0x130) = 0;
          *(undefined1 *)(iVar1 + 0x134) = 0;
          func_0x98058bd4(iVar1 + 0x128);
          FUN_98059044();
        }
        (**(code **)(*(int *)(iVar1 + 0x10) + 0x5c))(iVar1 + 0x10,piVar14,0);
        uVar7 = FUN_98059034();
        if ((*(int *)(iVar1 + 300) == 0) || (unaff_r13 != *(int *)(iVar1 + 0x130))) {
          func_0x98058be4(iVar1 + 0x128);
          *(int *)(iVar1 + 0x130) = unaff_r13;
          *(undefined1 *)(iVar1 + 0x134) = uVar7;
        }
        *(int *)(iVar1 + 300) = *(int *)(iVar1 + 300) + 1;
        uVar7 = FUN_98059034();
        if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
          func_0x98058be4(&DAT_980790a4);
          DAT_980790ac = unaff_r13;
          DAT_980790b0 = uVar7;
        }
        DAT_980790a8 = DAT_980790a8 + 1;
      }
      piVar14 = piVar13;
    } while (piVar13 != (int *)0x0);
  }
  if (*(char *)(iVar1 + 0x124) == '\x02') {
    bVar8 = (bool)(bVar12 != 0 & bVar8);
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
  if (bVar8) {
    uVar7 = FUN_98059034();
    if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
      func_0x98058be4(&DAT_980790a4);
      DAT_980790ac = unaff_r13;
      DAT_980790b0 = uVar7;
    }
    DAT_980790a8 = DAT_980790a8 + 1;
    if (piVar11 == (int *)*piVar11) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = (int *)(*piVar11 - *(int *)(iVar1 + 0x1c));
    }
    do {
      do {
        piVar10 = piVar14;
        if ((piVar10 == (int *)0x0) || ((int *)*piVar10 == piVar10)) goto LAB_98057044;
        piVar13 = *(int **)(*(int *)(iVar1 + 0x1c) + (int)piVar10);
        piVar14 = (int *)((int)piVar13 - *(int *)(iVar1 + 0x1c));
        if (piVar11 == piVar13) {
          piVar14 = (int *)0x0;
        }
      } while (*(char *)(piVar10 + 0x1d) != '\0');
      bVar8 = true;
      if (*(char *)(iVar1 + 0x38) != '\0') {
        uVar15 = 0;
        do {
          bVar6 = false;
          if (*(char *)(iVar1 + 0x124) == '\x02') {
            bVar6 = true;
          }
          else if (uVar15 != 0) {
            bVar6 = FUN_9804d8d8(*(int *)(iVar1 + 0xb8),uVar15);
          }
          FUN_9804d720(*(undefined4 *)(iVar1 + 0xb8),uVar15,(uint *)piVar10[2],piVar10[3]);
          if (bVar6 != false) {
            if (*(char *)(iVar1 + 0x124) == '\x02') {
              uVar3 = FUN_980551b8();
              uVar9 = (uint)piVar10[7] >> 7 & 3;
            }
            else {
              uVar9 = 0;
              uVar3 = uVar15 * 0x4000 + 0x20;
            }
            FUN_9804df40(*(int *)(iVar1 + 0xb8),uVar15,uVar3,uVar9);
          }
          if (piVar10[4] == 0) {
            if (*(char *)(iVar1 + 0x124) == '\x02') {
              *(undefined4 *)(iVar1 + 0xbc) = 0;
              *(undefined4 *)(iVar1 + 0xc0) = 0;
              *(undefined4 *)(iVar1 + 0xc4) = 0;
              goto LAB_98056fdc;
            }
          }
          else {
            *(undefined4 *)(iVar1 + 0xbc) = 0;
            *(undefined4 *)(iVar1 + 0xc0) = 0;
            *(undefined4 *)(iVar1 + 0xc4) = 0;
            *(char *)(iVar1 + 0xc6) = (char)piVar10[4];
            if (*(char *)(iVar1 + 0x124) == '\x02') {
              iVar2 = piVar10[6];
              uVar4 = FUN_980551b8();
              FUN_980551b8();
              uVar3 = (uint)piVar10[5] >> 7 & 3;
              uVar7 = (undefined1)uVar3;
              if (uVar3 == 0) {
                if ((uint)piVar10[5] < 0x200) {
                  iVar5 = FUN_980551b8();
                  uVar7 = 0;
                }
                else {
                  iVar5 = FUN_980551b8();
                  uVar7 = 4;
                }
              }
              else {
                iVar5 = FUN_980551b8();
              }
              *(int *)(iVar1 + 0xbc) = iVar5;
              *(undefined4 *)(iVar1 + 0xc0) = uVar4;
              *(byte *)(iVar1 + 0xc4) = (byte)(iVar2 - 0x80U >> 7) & 3;
              *(undefined1 *)(iVar1 + 0xc5) = uVar7;
            }
            else {
              *(int *)(iVar1 + 0xbc) = piVar10[uVar15 * 3 + 10];
              *(int *)(iVar1 + 0xc0) = piVar10[uVar15 * 3 + 0xb];
              *(undefined1 *)(iVar1 + 0xc4) = *(undefined1 *)(piVar10 + (uVar15 + 4) * 3);
              *(undefined1 *)(iVar1 + 0xc5) = *(undefined1 *)((int)piVar10 + uVar15 * 0xc + 0x31);
            }
LAB_98056fdc:
            FUN_9804ddd8(*(int *)(iVar1 + 0xb8),uVar15,(uint *)(iVar1 + 0xbc));
          }
          if ((*(char *)(iVar1 + 0x124) == '\x02') ||
             (iVar2 = FUN_9804d878(*(int *)(iVar1 + 0xb8),uVar15), iVar2 == 0)) {
            bVar8 = false;
          }
          uVar15 = uVar15 + 1 & 0xff;
        } while (uVar15 < *(byte *)(iVar1 + 0x38));
      }
      *(undefined1 *)(piVar10 + 0x1d) = 3;
    } while (bVar8);
LAB_98057044:
    if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
       (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
      DAT_980790b0 = 0;
      DAT_980790ac = 0;
      func_0x98058bd4(&DAT_980790a4);
      FUN_98059044();
    }
  }
  if (*(int *)(iVar1 + 0x78) != 0) {
    if (*(char *)(iVar1 + 0x38) != '\0') {
      uVar15 = 0;
      do {
        FUN_9804df40(*(int *)(iVar1 + 0xb8),uVar15,*(uint *)((uVar15 + 0xf) * 8 + iVar1),
                     (uint)(*(ushort *)(uVar15 * 8 + iVar1 + 0x7c) >> 7));
        uVar15 = uVar15 + 1 & 0xff;
      } while (uVar15 < *(byte *)(iVar1 + 0x38));
    }
    *(undefined4 *)(iVar1 + 0x78) = 0;
  }
  if (*(char *)(iVar1 + 0x38) != '\0') {
    uVar15 = 0;
    do {
      bVar8 = FUN_9804d8d8(*(int *)(iVar1 + 0xb8),uVar15);
      if ((!bVar8) && (uVar3 = FUN_9804dd58(*(int *)(iVar1 + 0xb8),uVar15), (uVar3 & 8) == 0)) {
        halt_baddata();
      }
      uVar15 = uVar15 + 1 & 0xff;
    } while (uVar15 < *(byte *)(iVar1 + 0x38));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98057140 @ 98057140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98057140(void)

{
  bool bVar1;
  int iVar2;
  bool bVar4;
  undefined1 uVar5;
  uint uVar3;
  int iVar6;
  int unaff_r13;
  int iVar7;
  uint uVar8;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  iVar2 = FUN_98044798();
  bVar1 = true;
  if (*(char *)(iVar2 + 0x38) != '\0') {
    uVar8 = 0;
    do {
      bVar4 = FUN_9804d8d8(*(int *)(iVar2 + 0xb8),uVar8);
      if (!bVar4) {
        bVar1 = false;
        break;
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(iVar2 + 0x38));
  }
  uVar5 = FUN_98059034();
  if ((DAT_980790a8 == 0) || (unaff_r13 != DAT_980790ac)) {
    func_0x98058be4(&DAT_980790a4);
    DAT_980790ac = unaff_r13;
    DAT_980790b0 = uVar5;
  }
  DAT_980790a8 = DAT_980790a8 + 1;
  if ((((iVar2 + 0x14 != *(int *)(iVar2 + 0x14)) &&
       (iVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x1c), iVar7 != 0)) &&
      (*(char *)(iVar7 + 0x74) != '\0')) && (*(int *)(iVar7 + 0x20) != 0)) {
    if (*(char *)(iVar7 + 0x76) == '\0') {
      bVar1 = true;
      if ((*(int *)(iVar7 + 0x10) != 0) && (*(char *)(iVar2 + 0x38) != '\0')) {
        uVar8 = 0;
        do {
          uVar3 = FUN_9804de50(*(int *)(iVar2 + 0xb8),uVar8);
          if (uVar3 != 0) {
            bVar1 = false;
            break;
          }
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar8 < *(byte *)(iVar2 + 0x38));
      }
      if (bVar1) {
        if (*(char *)(iVar2 + 0x38) != '\0') {
          uVar8 = 0;
          do {
            local_60 = 0;
            iVar6 = *(int *)(iVar7 + 0x20);
            local_5c = 0;
            local_58 = 0x100;
            local_5c = FUN_980551b8();
            local_58 = CONCAT13((char)(iVar6 - 0x80U >> 7),local_58._1_3_) & 0x3ffffff;
            local_60 = FUN_98055280(*(int *)(iVar7 + 8),*(int *)(iVar7 + 0xc),uVar8);
            local_58._1_3_ = CONCAT12(3,local_58._2_2_);
            FUN_9804ddd8(*(int *)(iVar2 + 0xb8),uVar8,&local_60);
            uVar8 = uVar8 + 1 & 0xff;
          } while (uVar8 < *(byte *)(iVar2 + 0x38));
        }
        *(undefined1 *)(iVar7 + 0x76) = 1;
      }
    }
    else if ((bVar1) && (*(char *)(iVar7 + 0x77) == '\0')) {
      if (*(char *)(iVar2 + 0x38) != '\0') {
        uVar8 = 0;
        do {
          FUN_9804dc20(*(int *)(iVar2 + 0xb8),uVar8,0x80);
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar8 < *(byte *)(iVar2 + 0x38));
      }
      *(undefined1 *)(iVar7 + 0x77) = 1;
    }
  }
  if (((DAT_980790a8 != 0) && (unaff_r13 == DAT_980790ac)) &&
     (DAT_980790a8 = DAT_980790a8 + -1, DAT_980790a8 == 0)) {
    DAT_980790b0 = 0;
    DAT_980790ac = 0;
    func_0x98058bd4(&DAT_980790a4);
    FUN_98059044();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980573d8 @ 980573d8 ==== */

void FUN_980573d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_980447ac();
}


/* ==== FUN_98057f48 @ 98057f48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98057f48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98057f80 @ 98057f80 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98057f80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98058038 @ 98058038 ==== */

void FUN_98058038(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x10) = param_1 + 0xc;
  return;
}


/* ==== FUN_98058060 @ 98058060 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98058060(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980583e0 @ 980583e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980583e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059024 @ 98059024 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059024(void)

{
  uint in_r11;
  int unaff_r31;
  
  if (in_r11 != 0) {
    if ((in_r11 & 3) != 0) {
      *(undefined4 *)(unaff_r31 + 0x4c) = 0x980573d0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_r31 + 0x50) = 0;
  }
  (**(code **)(unaff_r31 + 0x4c))(unaff_r31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059034 @ 98059034 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059034(void)

{
  int unaff_r31;
  byte in_cr6;
  
  if (!(bool)(in_cr6 >> 1 & 1)) {
    *(undefined4 *)(unaff_r31 + 0x4c) = 0x980573d0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r31 + 0x50) = 0;
  (**(code **)(unaff_r31 + 0x4c))(unaff_r31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059044 @ 98059044 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059044(void)

{
  int in_r10;
  int unaff_r31;
  
  *(int *)(unaff_r31 + 0x4c) = in_r10 + 0x73d0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059054 @ 98059054 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059054(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059064 @ 98059064 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059064(void)

{
  int unaff_r31;
  double in_f11;
  double in_f12;
  
  *(float *)(unaff_r31 + 0x2c) = (float)in_f12 / (float)in_f11;
  *(undefined4 *)(unaff_r31 + 0x50) = 0;
  (**(code **)(unaff_r31 + 0x4c))(unaff_r31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059074 @ 98059074 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059074(void)

{
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x50) = 0;
  (**(code **)(unaff_r31 + 0x4c))(unaff_r31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059084 @ 98059084 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059084(void)

{
  code *in_r11;
  
  (*in_r11)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_98059094 @ 98059094 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_98059094(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980590a4 @ 980590a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_980590a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_980590c4 @ 980590c4 ==== */

byte * FUN_980590c4(undefined4 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *in_r9;
  byte in_cr0;
  
  pbVar3 = (byte *)0x0;
  if ((bool)(in_cr0 >> 1 & 1)) goto LAB_980590e0;
  while (param_3 != 0) {
    bVar1 = in_r9[1];
    pbVar2 = in_r9 + 1;
    while (in_r9 = pbVar2, param_3 = (uint)bVar1, param_2 == param_3) {
LAB_980590e0:
      pbVar2 = in_r9 + 1;
      pbVar3 = in_r9;
      bVar1 = in_r9[1];
    }
  }
  return pbVar3;
}


