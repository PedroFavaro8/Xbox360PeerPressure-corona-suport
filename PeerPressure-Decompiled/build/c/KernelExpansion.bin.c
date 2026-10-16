// Decompiled from KernelExpansion.bin  base=00000000  (approximate C, for reading only)
/* ==== FUN_00000000 @ 00000000 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000000bc @ 000000bc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000bc(void)

{
  int iVar1;
  char *unaff_r30;
  int unaff_r31;
  undefined4 in_stack_00000050;
  
  if (*(char *)(unaff_r31 + 0x2d40) == '\0') {
    FUN_000004b8();
  }
  if (*unaff_r30 == '\x01') {
    FUN_00000568(unaff_r30);
  }
  FUN_000005f0(uRam802032a4,uRam802032a0);
  FUN_00000648();
  FUN_00000748();
  if (((*(char *)(unaff_r31 + 0x2d40) == '\0') && (in_stack_00000050._1_1_ == '\x12')) &&
     (iVar1 = FUN_000009c0(), *(int *)(iVar1 + 300) == 1)) {
    FUN_000009d0();
  }
  FUN_00000a50(0);
  FUN_00000de8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000178 @ 00000178 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000178(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r27;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *unaff_r31;
  undefined4 *puVar8;
  
  thunk_EXT_FUN_80085ee8(0x801ff4d4);
  thunk_EXT_FUN_80085ee8(0x801ff4dc);
  if (*unaff_r31 == -0x3ffffffb) {
    thunk_EXT_FUN_80085ee8(0x801ff500);
    thunk_EXT_FUN_80085ee8(0x801ff51c,unaff_r31[3]);
    if (unaff_r31[5] == 0) {
      uVar4 = 0x801ff538;
    }
    else {
      uVar4 = 0x801ff540;
    }
    thunk_EXT_FUN_80085ee8(0x801ff548,uVar4,unaff_r31[6]);
  }
  else {
    thunk_EXT_FUN_80085ee8(0x801ff56c);
    thunk_EXT_FUN_80085ee8(0x801ff584,unaff_r31[3]);
    thunk_EXT_FUN_80085ee8(0x801ff5a4,unaff_r31[4]);
    uVar6 = 0;
    if (unaff_r31[4] != 0) {
      piVar5 = unaff_r31 + 4;
      do {
        piVar5 = piVar5 + 1;
        thunk_EXT_FUN_80085ee8(0x801ff5b4,uVar6,*piVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)unaff_r31[4]);
    }
  }
  thunk_EXT_FUN_80085ee8(0x801ff5cc);
  thunk_EXT_FUN_80085ee8(0x801ff5d0);
  iVar7 = 0;
  puVar8 = (undefined4 *)(unaff_r27 + 0x14);
  do {
    puVar1 = puVar8 + 1;
    puVar2 = puVar8 + 2;
    puVar3 = puVar8 + 3;
    puVar8 = puVar8 + 4;
    thunk_EXT_FUN_80085ee8(0x801ff5e0,iVar7,*puVar1,*puVar2,iVar7 + 1,*puVar3,*puVar8);
    iVar7 = iVar7 + 2;
  } while (iVar7 < 0x20);
  thunk_EXT_FUN_80085ee8(0x801ff600,*(undefined4 *)(unaff_r27 + 4));
  thunk_EXT_FUN_80085ee8(0x801ff610,*(undefined4 *)(unaff_r27 + 8));
  thunk_EXT_FUN_80085ee8(0x801ff620,*(undefined4 *)(unaff_r27 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000334 @ 00000334 ==== */

void FUN_00000334(void)

{
  undefined4 unaff_r25;
  uint uVar1;
  int unaff_r29;
  undefined1 *unaff_r30;
  uint uVar2;
  
  thunk_EXT_FUN_80085ee8(0x801ff644);
  uVar1 = unaff_r29 + 0xfU >> 4;
  do {
    if (uVar1 == 0) {
      thunk_EXT_FUN_80085ee8(0x801ff664);
      do {
        FUN_0000ec38(1000);
      } while( true );
    }
    thunk_EXT_FUN_80085ee8(0x801ff658,unaff_r30);
    uVar2 = 0;
    do {
      if (unaff_r29 == 0) break;
      thunk_EXT_FUN_80085ee8(0x801ff650,*unaff_r30);
      uVar2 = uVar2 + 1;
      unaff_r29 = unaff_r29 + -1;
      unaff_r30 = unaff_r30 + 1;
    } while (uVar2 < 0x10);
    thunk_EXT_FUN_80085ee8(unaff_r25);
    uVar1 = uVar1 - 1;
  } while( true );
}


/* ==== FUN_000003c0 @ 000003c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000003c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000438 @ 00000438 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000438(void)

{
  undefined4 uVar1;
  undefined4 in_r11;
  undefined4 *unaff_r31;
  
  *unaff_r31 = in_r11;
  thunk_EXT_FUN_80073850(unaff_r31,4);
  uVar1 = thunk_EXT_FUN_80080048(unaff_r31);
  thunk_EXT_FUN_8007f968(uVar1,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000460 @ 00000460 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000460(void)

{
  thunk_EXT_FUN_80085ea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000480 @ 00000480 ==== */

bool FUN_00000480(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  thunk_EXT_FUN_80086110(auStack_10,param_1);
  iVar1 = FUN_0000ec98(auStack_10);
  return iVar1 == 0;
}


/* ==== FUN_000004b8 @ 000004b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000004b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000004f4 @ 000004f4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000004f4(void)

{
  int iVar1;
  uint in_r10;
  uint in_r11;
  undefined4 unaff_r31;
  
  while ((1 << (in_r11 & 0x3f) & in_r10) == 0) {
    in_r11 = in_r11 - 1;
    if ((int)in_r11 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (in_r11 < 2) {
    halt_baddata();
  }
  if (5 < in_r11) {
    in_r11 = 6;
  }
  iVar1 = FUN_0000ecb8(unaff_r31,in_r11 + 0x40 & 0xff);
  if (iVar1 != 0) {
    halt_baddata();
  }
  FUN_0000ec38(100);
  FUN_0000eca8(unaff_r31,0xec,&stack0x00000050);
  halt_baddata();
}


/* ==== FUN_00000568 @ 00000568 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000568(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  iVar1 = FUN_0000ead4();
  cVar2 = FUN_00000e38(iVar1,_DAT_80203544,_DAT_80203564,1);
  if (cVar2 == '\0') {
    thunk_EXT_FUN_80085ea0();
  }
  uVar3 = 4;
  do {
    FUN_00000e38(iVar1,*(undefined4 *)(&DAT_80203544 + uVar3),*(undefined4 *)(&DAT_80203564 + uVar3)
                 ,0);
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x20);
  thunk_EXT_FUN_800807b8(2,*(undefined4 *)(iVar1 + 0x10));
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000005f0 @ 000005f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000648 @ 00000648 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000648(void)

{
  int iVar1;
  char cVar2;
  int aiStack_30 [12];
  
  FUN_0000ead8();
  aiStack_30[0] = 0;
  aiStack_30[2] = 0;
  aiStack_30[1] = 0x170;
  FUN_0000ece8(0x80202d44);
  iVar1 = thunk_EXT_FUN_80083aa8(&DAT_80202d7c,aiStack_30 + 1,0x1000,4,2);
  if ((iVar1 != 0) || (_DAT_80202d7c == (undefined4 *)0x0)) {
    thunk_EXT_FUN_800bdd40(u_btnSoftmodSettings_000123e8 + 0xc);
  }
  cVar2 = FUN_000014d0(0x801ff6fc,aiStack_30,aiStack_30 + 2);
  if (cVar2 == '\0') {
    FUN_000016a8();
  }
  else {
    cVar2 = FUN_00001700(0x801ff6fc,_DAT_80202d7c,0x801ff738,6);
    if (cVar2 == '\0') {
      thunk_EXT_FUN_8010d110(_DAT_80202d7c,0,0x170);
      *_DAT_80202d7c = 0;
      *(undefined1 *)((int)_DAT_80202d7c + 0x129) = 1;
    }
  }
  if (aiStack_30[0] != 0) {
    thunk_EXT_FUN_80064768();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000748 @ 00000748 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000748(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88 [2];
  int local_80 [2];
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 auStack_5c [40];
  undefined4 local_34;
  
  FUN_0000ead8();
  local_78 = 0;
  local_80[0] = 0;
  local_76 = 0;
  local_74 = 0;
  local_72 = 0;
  local_80[1] = 0;
  local_90 = 0;
  local_60 = 0;
  thunk_EXT_FUN_8010d110(auStack_5c,0,0x34);
  local_8c = (int *)0x0;
  thunk_EXT_FUN_80086110(&local_78,0x801ff7b0);
  local_70 = 0;
  local_68 = 0x40;
  local_6c = &local_78;
  iVar1 = thunk_EXT_FUN_8006caa8(&local_90,0x80100080,&local_70,local_80,0,0x80,1,1);
  if (iVar1 == 0) {
    iVar1 = thunk_EXT_FUN_8006d630(local_90,local_80,&local_60,0x38,0x22);
    if (iVar1 == 0) {
      local_88[0] = local_34;
      iVar1 = thunk_EXT_FUN_80083aa8(&local_8c,local_88,0x1000,4,2);
      if ((iVar1 != 0) || (local_8c == (int *)0x0)) {
        thunk_EXT_FUN_800bdd40(u_btnSoftmodSettings_000123e8 + 0xc);
      }
      iVar1 = thunk_EXT_FUN_8006cec8(local_90,0,0,0,local_80,local_8c,local_88[0],0);
      if (iVar1 == 0x103) {
        iVar1 = thunk_EXT_FUN_8008b188(local_90,1,0,0);
      }
      if ((iVar1 == 0) && (-1 < local_80[0])) {
        thunk_EXT_FUN_80089eb0(local_90);
        for (piVar4 = local_8c; iVar1 = *piVar4, iVar1 != -1;
            piVar4 = (int *)((int)piVar4 + iVar3 + 8)) {
          iVar3 = piVar4[1];
          thunk_EXT_FUN_8010cc40(iVar1,piVar4 + 2,iVar3);
          thunk_EXT_FUN_80073850(iVar1,iVar3);
          uVar2 = thunk_EXT_FUN_80080048(iVar1);
          thunk_EXT_FUN_8007f968(uVar2,iVar3);
        }
        thunk_EXT_FUN_80083190(&local_8c,local_88,0x8000,2);
        goto LAB_0000091c;
      }
    }
    thunk_EXT_FUN_80089eb0(local_90);
  }
LAB_0000091c:
  FUN_00001790();
  FUN_000018f0(0x80061000,0x801f18e8,0,0);
  FUN_000003c0(0x8007d6e8,0x801f19c8,0,0);
  FUN_000003c0(0x8007d6b8,0x801f1a20,1,0);
  FUN_000003c0(0x8007b080,0x801f1a60,0,0);
  FUN_000003c0(0x80065748,0x801f1c60,1,0);
  FUN_00001cb0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000009c0 @ 000009c0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000009c0(void)

{
  return _DAT_80202d7c;
}


/* ==== FUN_000009d0 @ 000009d0 ==== */

void FUN_000009d0(void)

{
  int iVar1;
  int iStack_10;
  code *apcStack_c [3];
  
  iStack_10 = 0;
  apcStack_c[0] = FUN_00000000;
  iVar1 = FUN_0000ed98(0x801ff7f4,8,0,&iStack_10);
  if (iVar1 == 0) {
    iVar1 = FUN_0000eda8(iStack_10,1,apcStack_c);
    if (iVar1 == 0) {
      (*apcStack_c[0])();
    }
    if (iStack_10 != 0) {
      FUN_0000ebe8();
    }
  }
  return;
}


/* ==== FUN_00000a50 @ 00000a50 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a50(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  double dVar7;
  int iStack_2d0;
  uint uStack_2cc;
  float fStack_2c8;
  undefined4 uStack_2c4;
  float fStack_2c0;
  undefined1 auStack_2bc [12];
  undefined1 auStack_2b0 [640];
  
  FUN_0000ead4();
  iVar2 = FUN_0000edb8();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_000009c0();
    uVar6 = -(uint)(cRam80202d40 != '\x01') & *puVar3;
    if (uVar6 < 3) {
      iStack_2d0 = 0;
      if (uVar6 == 0) {
        uVar5 = 0x801ff81c;
      }
      else if (uVar6 == 1) {
        uVar5 = 0x801ff838;
      }
      else {
        uVar5 = 0x801ff888;
      }
      iVar2 = FUN_0000ed98(uVar5,9,0,&iStack_2d0);
      if (iVar2 == 0) {
        iRam8017cdc4 = iStack_2d0;
        if (uVar6 == 1) {
          iVar2 = FUN_000009c0();
          if ((*(char *)(iVar2 + 4) == '\0') || (cVar4 = FUN_00001fc0(), cVar4 == '\0')) {
            uVar5 = FUN_00002058(auStack_2b0);
            thunk_EXT_FUN_8010cc40(0x80202d90,uVar5,0x278);
          }
          FUN_000018f0(0x98012df0,0x801f2690,0,0);
          FUN_000018f0(0x9800b438,0x801f26e8,0,0);
          FUN_000018f0(0x98017960,0x801f2718,0,0);
          FUN_000018f0(0x98011f90,0x801f2878,0,0);
          FUN_000018f0(0x98012588,0x801f2b20,0,0);
          FUN_000018f0(0x9801a23c,0x801f2d10,0,0);
          FUN_000018f0(0x980111b4,0x801f2d38,0,0);
          FUN_00002d70(0x98010f74);
          uRam9800b380 = 0x60000000;
          uRam9800b384 = 0x60000000;
          uRam9800b388 = 0x60000000;
          uRam9800b38c = 0x60000000;
          thunk_EXT_FUN_80073850(0x9800b380,4);
          uVar5 = thunk_EXT_FUN_80080048(0x9800b380);
          thunk_EXT_FUN_8007f968(uVar5,4);
        }
        iVar2 = FUN_0000ee38(0x8017cdc0,0x8000,0,0,0x801fee28,uRam80170000,0x20000a0);
        if (iVar2 == 0) {
          uRam8017cdc8 = 1;
          uRam80170054 = 0;
        }
        else {
          FUN_0000ebe8(iStack_2d0);
          iRam8017cdc4 = 0;
        }
      }
    }
    else if (uVar6 == 3) {
      dVar7 = (double)_DAT_801ff814;
      bVar1 = false;
      fStack_2c8 = _DAT_801ff814;
      uVar5 = 0x1e0;
      uStack_2c4 = uRam801ff818;
      fStack_2c0 = _DAT_801ff814;
      cVar4 = FUN_00001cf0(0x80202d80);
      if (cVar4 != '\0') {
        FUN_0000edc8(auStack_2bc,&iStack_2d0,&uStack_2cc);
        if (((iStack_2d0 == 0x300) && ((uStack_2cc & 0x200) == 0)) && (iRam80186218 != 6)) {
          bVar1 = true;
          uVar5 = 0x240;
        }
        uRam80170d84 = 0xffffffff;
        FUN_0000edd8(dVar7,0x280,uVar5);
        FUN_0000ede8(0x80000000);
        FUN_0000edf8(0);
        uRam7fc86110 = thunk_EXT_FUN_80080048(uRam80202d8c);
        enforceInOrderExecutionIO();
        uVar5 = 0x28001e0;
        if (bVar1) {
          uVar5 = 0x2800240;
        }
        FUN_0000ee08(0,0x28001e0,0,uVar5,0x28001e0,0,&fStack_2c8,0);
        FUN_0000ee18();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000de8 @ 00000de8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000de8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000e38 @ 00000e38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort local_60 [2];
  undefined4 local_5c;
  undefined1 auStack_50 [80];
  
  iVar1 = FUN_0000eac8();
  thunk_EXT_FUN_80086150(local_60);
  thunk_EXT_FUN_80086110(auStack_50,param_3);
  iVar2 = *(int *)(iVar1 + 0x14);
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x50) != 0) {
    do {
      iVar2 = thunk_EXT_FUN_800864b0
                        (*(int *)(iVar2 + 0x54) * uVar3 + *(int *)(iVar1 + 0x18) + 0x38,0xffffffff,
                         local_5c,local_60[0] >> 1,0);
      if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = *(int *)(iVar1 + 0x14);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar2 + 0x50));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000f08 @ 00000f08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000f50 @ 00000f50 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f50(void)

{
  undefined4 unaff_r27;
  int iVar1;
  undefined4 unaff_r30;
  short sStack00000068;
  
  if (sStack00000068 == 0) {
    iVar1 = -0x3fffffcc;
  }
  else {
    iVar1 = -0x3fffffc6;
  }
  thunk_EXT_FUN_8007018c(unaff_r30,unaff_r27);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000f70 @ 00000f70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f70(void)

{
  undefined4 unaff_r27;
  int unaff_r28;
  undefined4 unaff_r30;
  undefined4 in_stack_00000050;
  
  FUN_0000ee98(in_stack_00000050);
  thunk_EXT_FUN_8007018c(unaff_r30,unaff_r27);
  if (unaff_r28 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00000fec @ 00000fec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000fec(void)

{
  undefined4 unaff_r26;
  
  FUN_0000eeb8(unaff_r26);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000010ec @ 000010ec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000010ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001140 @ 00001140 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001140(void)

{
  undefined4 *unaff_r29;
  int in_stack_00000060;
  undefined4 in_stack_000001a4;
  
  *unaff_r29 = in_stack_000001a4;
  if (in_stack_00000060 != 0) {
    thunk_EXT_FUN_80089eb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001164 @ 00001164 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001164(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000011b8 @ 000011b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000011b8(void)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int unaff_r27;
  undefined4 *unaff_r28;
  uint *unaff_r29;
  int unaff_r31;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(0x80202d44);
  iVar5 = 0;
  uVar3 = 0;
  piVar4 = (int *)0x801ff73c;
  do {
    if (*piVar4 == unaff_r31) {
      iVar5 = iVar5 * 0x14;
      sVar1 = *(short *)(iVar5 + -0x7fe008ba);
      if (sVar1 == 0) {
        if (((unaff_r28 == (undefined4 *)0x0) && (unaff_r29 != (uint *)0x0)) ||
           (*unaff_r29 < (uint)*(ushort *)(iVar5 + -0x7fe008bc))) {
          uVar2 = *(ushort *)(iVar5 + -0x7fe008bc);
        }
        else {
          thunk_EXT_FUN_8010d1b0(unaff_r28,*(int *)(iVar5 + -0x7fe008b8) + unaff_r27);
          uVar2 = *(ushort *)(iVar5 + -0x7fe008bc);
        }
        *unaff_r29 = (uint)uVar2;
        break;
      }
      if (sVar1 == 1) {
        if (((unaff_r28 != (undefined4 *)0x0) || (unaff_r29 == (uint *)0x0)) && (3 < *unaff_r29)) {
          *unaff_r28 = *(undefined4 *)(*(int *)(iVar5 + -0x7fe008b8) + unaff_r27);
          break;
        }
        uVar3 = 4;
      }
      else {
        if (sVar1 != 2) break;
        if (((unaff_r28 != (undefined4 *)0x0) || (unaff_r29 == (uint *)0x0)) && (*unaff_r29 != 0)) {
          *(undefined1 *)unaff_r28 = *(undefined1 *)(*(int *)(iVar5 + -0x7fe008b8) + unaff_r27);
          break;
        }
        uVar3 = 1;
      }
      *unaff_r29 = uVar3;
      break;
    }
    uVar3 = uVar3 + 0x14;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 5;
  } while (uVar3 < 0x78);
  thunk_EXT_FUN_800643d8(0x80202d44);
  thunk_EXT_FUN_800718f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001360 @ 00001360 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001360(void)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint unaff_r25;
  undefined4 *unaff_r27;
  int unaff_r28;
  uint unaff_r30;
  int unaff_r31;
  int iVar5;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800641d8(0x80202d44);
  piVar3 = (int *)0x801ff73c;
  uVar2 = unaff_r25;
  uVar4 = unaff_r25;
  do {
    if (*piVar3 == unaff_r31) {
      iVar5 = uVar4 * 0x14;
      sVar1 = *(short *)(iVar5 + -0x7fe008ba);
      if (sVar1 == 0) {
        if (unaff_r30 < *(ushort *)(iVar5 + -0x7fe008bc)) break;
        thunk_EXT_FUN_8010d1b0(*(int *)(iVar5 + -0x7fe008b8) + unaff_r28,unaff_r27);
        *(char *)((uint)*(ushort *)(iVar5 + -0x7fe008bc) + *(int *)(iVar5 + -0x7fe008b8) + unaff_r28
                 + -1) = (char)unaff_r25;
      }
      else if (sVar1 == 1) {
        if (unaff_r30 < 4) break;
        *(undefined4 *)(*(int *)(iVar5 + -0x7fe008b8) + unaff_r28) = *unaff_r27;
      }
      else {
        if ((sVar1 != 2) || (unaff_r30 == 0)) break;
        *(undefined1 *)(*(int *)(iVar5 + -0x7fe008b8) + unaff_r28) = *(undefined1 *)unaff_r27;
      }
      FUN_00003000(1);
      break;
    }
    uVar2 = uVar2 + 0x14;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 5;
  } while (uVar2 < 0x78);
  thunk_EXT_FUN_800643d8(0x80202d44);
  thunk_EXT_FUN_800718f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000014d0 @ 000014d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000014d0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
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
  undefined1 auStack_7c [40];
  int local_54;
  
  uVar6 = FUN_0000eac8();
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
  thunk_EXT_FUN_8010d110(auStack_7c,0,0x34);
  iVar5 = 0;
  thunk_EXT_FUN_80086110(&local_a0,pcVar2);
  local_98 = 0xfffffffd;
  if (pcVar2 != (char *)0x0) {
    local_98 = -(uint)(*pcVar2 != '\\') & 0xfffffffd;
  }
  local_90 = 0x40;
  local_94 = &local_a0;
  iVar3 = thunk_EXT_FUN_8006caa8(local_b0,0x80100080,&local_98,local_a8,0,0x80,1,1);
  if (iVar3 != 0) {
    halt_baddata();
  }
  iVar3 = thunk_EXT_FUN_8006d630(local_b0[0],local_a8,&local_80,0x38,0x22);
  if (iVar3 == 0) {
    iVar5 = thunk_EXT_FUN_80064a68(local_54 + 1);
    if (iVar5 == 0) {
      uVar4 = 0x801ffb60;
    }
    else {
      iVar3 = thunk_EXT_FUN_8006cec8(local_b0[0],0,0,0,local_a8,iVar5,local_54,0);
      if (iVar3 == 0x103) {
        iVar3 = thunk_EXT_FUN_8008b188(local_b0[0],1,0,0);
      }
      if ((iVar3 == 0) && (-1 < local_a8[0])) {
        *(undefined1 *)(local_54 + iVar5) = 0;
        bVar1 = true;
        *(int *)uVar6 = iVar5;
        *param_3 = local_54 + 1;
        goto LAB_00001674;
      }
      uVar4 = 0x801ffbc8;
      local_54 = local_a8[0];
    }
  }
  else {
    uVar4 = 0x801ffb08;
    local_54 = iVar3;
  }
  thunk_EXT_FUN_80085ee8(uVar4,local_54);
LAB_00001674:
  if ((!bVar1) && (iVar5 != 0)) {
    thunk_EXT_FUN_80064768(iVar5);
  }
  if (local_b0[0] != 0) {
    thunk_EXT_FUN_80089eb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000016a8 @ 000016a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000016a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001700 @ 00001700 ==== */

void FUN_00001700(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000176c @ 0000176c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000176c(void)

{
  int unaff_r28;
  
  if (unaff_r28 != 0) {
    thunk_EXT_FUN_80064768(unaff_r28);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001790 @ 00001790 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001790(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000017dc @ 000017dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000017dc(char *param_1,int param_2,int param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  do {
    pcVar4 = param_4;
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar4;
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar6 != param_1 + 8);
    if (cVar1 == cVar2) {
      param_2 = param_7 * 0x28 + param_2;
      uVar5 = (uint)*(byte *)(param_2 + 0xf) << 0x18 | (uint)*(byte *)(param_2 + 0xe) << 0x10 |
              (uint)*(byte *)(param_2 + 0xd) << 8 | (uint)*(byte *)(param_2 + 0xc);
      if (*(int *)(uVar5 + 0x80040028) + *(int *)(uVar5 + 0x80040024) != 0x3a4) {
        halt_baddata();
      }
      *(int *)(*(int *)(uVar5 + 0x80040024) * 4 + uVar5 + 0x8004002c) =
           *(int *)(uVar5 + 0x80040020) * -0x10000 + -0x7fe0cee0;
      *(int *)(uVar5 + 0x80040024) = *(int *)(uVar5 + 0x80040024) + 1;
      *(int *)((0x30c - *(int *)(uVar5 + 0x80040028)) * 4 + uVar5 + 0x8004002c) =
           *(int *)(uVar5 + 0x80040020) * -0x10000 + -0x7fe0ce60;
      iVar7 = ((uint)*(byte *)(param_2 + 0x13) << 0x18 | (uint)*(byte *)(param_2 + 0x12) << 0x10 |
               (uint)*(byte *)(param_2 + 0x11) << 8 | (uint)*(byte *)(param_2 + 0x10)) + 4;
      thunk_EXT_FUN_80073850(uVar5 + 0x80040000,iVar7);
      uVar3 = thunk_EXT_FUN_80080048(uVar5 + 0x80040000);
      thunk_EXT_FUN_8007f968(uVar3,iVar7);
      halt_baddata();
    }
    param_7 = param_7 + 1;
    param_4 = param_4 + 0x28;
    if (param_3 <= param_7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_000018f0 @ 000018f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000018f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001930 @ 00001930 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001930(undefined4 param_1,uint param_2,char param_3,int param_4)

{
  undefined4 uVar1;
  int in_r11;
  undefined4 unaff_r31;
  int iStack00000050;
  int iStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  iStack00000050 = in_r11 + 0x3d600000;
  iStack00000054 = (param_2 & 0xffff) + 0x396b0000;
  uStack00000058 = 0x7d6903a6;
  if (param_3 == '\x01') {
    uStack0000005c = 0x4e800421;
  }
  else {
    uStack0000005c = 0x4e800420;
  }
  if (param_4 != 0) {
    thunk_EXT_FUN_8010cc40(param_4,unaff_r31,0x10);
  }
  thunk_EXT_FUN_8010cc40(unaff_r31,&stack0x00000050,0x10);
  thunk_EXT_FUN_80073850(unaff_r31,0x10);
  uVar1 = thunk_EXT_FUN_80080048(unaff_r31);
  thunk_EXT_FUN_8007f968(uVar1,0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000019c8 @ 000019c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000019c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0000ead4();
  cVar1 = FUN_00003218();
  if (cVar1 != '\x01') {
    FUN_000032d8((int)((ulonglong)uVar2 >> 0x20),(int)uVar2,param_3,param_4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001a88 @ 00001a88 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a88(void)

{
  int iVar1;
  int iVar2;
  code *unaff_r26;
  undefined4 *puVar3;
  code *unaff_r31;
  undefined2 uStack00000060;
  undefined4 in_stack_00000064;
  int in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000080;
  undefined4 in_stack_0000008c;
  
  if (unaff_r31 != FUN_00000000) {
    (*unaff_r31)(0);
  }
  iVar1 = FUN_0000ef48(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x183ff,&stack0x00000060);
  if (iVar1 != 0) {
    iVar1 = thunk_EXT_FUN_80086390(in_stack_00000064,uStack00000060,0x801ffd1c,0xffffffff,1);
    if (iVar1 == 0) {
      FUN_00003690();
    }
    else {
      iVar1 = thunk_EXT_FUN_80086390(in_stack_00000064,uStack00000060,0x801ffd28,0xffffffff,1);
      if (iVar1 == 0) {
        iVar1 = FUN_0000ef68(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x40006);
        if (iVar1 == 0) {
          FUN_0000ed98(0x801ffd38,9,0,0);
        }
      }
      else {
        puVar3 = (undefined4 *)0x802032c4;
        iVar1 = 2;
        do {
          iVar2 = thunk_EXT_FUN_80086390(in_stack_00000064,uStack00000060,*puVar3,0xffffffff,1);
          if (iVar2 == 0) {
            in_stack_00000068 = 0;
            in_stack_00000080 = 0;
            in_stack_0000006c = 0;
            thunk_EXT_FUN_8010d110(&stack0x00000084,0,0x18);
            thunk_EXT_FUN_80066368(&stack0x0000008c,0,1,0);
            in_stack_00000070 = thunk_EXT_FUN_816e0bf0(0x12a);
            in_stack_00000074 = thunk_EXT_FUN_816e0bf0(0x78);
            do {
              iVar2 = thunk_EXT_FUN_816c5508
                                (0xff,0x801fff24,0x801ffd80,2,&stack0x00000070,1,2,&stack0x00000068)
              ;
            } while (iVar2 == 5);
            if (iVar2 == 0x3e5) {
              iVar2 = thunk_EXT_FUN_816a2898(&stack0x00000080,0,1);
              thunk_EXT_FUN_80089eb0(in_stack_0000008c);
              if ((iVar2 != 0) || (in_stack_00000068 != 0)) {
                FUN_0000efb8();
              }
            }
          }
          iVar1 = iVar1 + -1;
          puVar3 = puVar3 + 1;
        } while (iVar1 != 0);
      }
    }
  }
  (*unaff_r26)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001c60 @ 00001c60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c60(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0000ead8();
  iVar1 = thunk_EXT_FUN_800655a0();
  if (((iVar1 == 0) && (((uint)((ulonglong)uVar2 >> 0x20) & 0xffff) == 2)) &&
     (((uint)uVar2 & 0xffff) == 4)) {
    *param_3 = 0xff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001cb0 @ 00001cb0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cb0(void)

{
  _DAT_80042a5c = 0x801f3758;
  _DAT_80042a80 = 0x801f3828;
  _DAT_80042a68 = 0x801f3880;
  _DAT_80042a70 = 0x801f38b8;
  return;
}


/* ==== FUN_00001cf0 @ 00001cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001cf0(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uStack_b0;
  short *psStack_ac;
  uint auStack_a8 [2];
  int aiStack_a0 [2];
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_7c [40];
  uint uStack_54;
  
  puVar1 = (uint *)FUN_0000eac8();
  uVar6 = 0;
  uStack_98 = 0;
  aiStack_a0[0] = 0;
  uStack_96 = 0;
  uStack_94 = 0;
  uStack_92 = 0;
  aiStack_a0[1] = 0;
  uStack_b0 = 0;
  uStack_80 = 0;
  thunk_EXT_FUN_8010d110(auStack_7c,0,0x34);
  psStack_ac = (short *)0x0;
  thunk_EXT_FUN_80086110(&uStack_98,0x801fff4c);
  uStack_90 = 0;
  uStack_88 = 0x40;
  puStack_8c = &uStack_98;
  iVar2 = thunk_EXT_FUN_8006caa8(&uStack_b0,0x80100080,&uStack_90,aiStack_a0,0,0x80,1,1);
  if (iVar2 == 0) {
    iVar2 = thunk_EXT_FUN_8006d630(uStack_b0,aiStack_a0,&uStack_80,0x38,0x22);
    if (iVar2 == 0) {
      auStack_a8[0] = uStack_54;
      if (uStack_54 < 0x36) {
        thunk_EXT_FUN_80085ea0();
      }
      iVar2 = thunk_EXT_FUN_80083aa8(&psStack_ac,auStack_a8,0x1000,4,1);
      if ((iVar2 != 0) || (psStack_ac == (short *)0x0)) {
        thunk_EXT_FUN_80085ea0();
        thunk_EXT_FUN_800bdd40(u_btnSoftmodSettings_000123e8 + 0xc);
      }
      iVar2 = thunk_EXT_FUN_8006cec8(uStack_b0,0,0,0,aiStack_a0,psStack_ac,auStack_a8[0],0);
      if (iVar2 == 0x103) {
        iVar2 = thunk_EXT_FUN_8008b188(uStack_b0,1,0,0);
      }
      if ((iVar2 == 0) && (-1 < aiStack_a0[0])) {
        thunk_EXT_FUN_80089eb0(uStack_b0);
        psVar5 = psStack_ac;
        if (*psStack_ac != 0x424d) {
          thunk_EXT_FUN_80085ea0();
        }
        if (((((uint)*(byte *)((int)psVar5 + 0x11) << 0x18 | (uint)*(byte *)(psVar5 + 8) << 0x10 |
               (uint)*(byte *)((int)psVar5 + 0xf) << 8 | (uint)*(byte *)(psVar5 + 7)) != 0x28) ||
            (CONCAT11(*(undefined1 *)((int)psVar5 + 0x1d),*(undefined1 *)(psVar5 + 0xe)) != 0x20))
           || (((*(char *)((int)psVar5 + 0x21) != '\0' || *(char *)(psVar5 + 0x10) != '\0') ||
               *(char *)((int)psVar5 + 0x1f) != '\0') || *(char *)(psVar5 + 0xf) != '\0')) {
          thunk_EXT_FUN_80085ea0();
        }
        *puVar1 = (uint)*(byte *)((int)psVar5 + 0x15) << 0x18 | (uint)*(byte *)(psVar5 + 10) << 0x10
                  | (uint)*(byte *)((int)psVar5 + 0x13) << 8 | (uint)*(byte *)(psVar5 + 9);
        puVar1[1] = (uint)*(byte *)((int)psVar5 + 0x19) << 0x18 |
                    (uint)*(byte *)(psVar5 + 0xc) << 0x10 | (uint)*(byte *)((int)psVar5 + 0x17) << 8
                    | (uint)*(byte *)(psVar5 + 0xb);
        uVar3 = (uint)*(byte *)((int)psVar5 + 0x25) << 0x18 | (uint)*(byte *)(psVar5 + 0x12) << 0x10
                | (uint)*(byte *)((int)psVar5 + 0x23) << 8 | (uint)*(byte *)(psVar5 + 0x11);
        puVar1[2] = uVar3;
        uVar3 = FUN_0000efd8(2,uVar3,4,0,0x20000000,0x1000);
        puVar1[3] = uVar3;
        if (uVar3 == 0) {
          thunk_EXT_FUN_80085ea0();
        }
        uVar3 = puVar1[3];
        psVar5 = psStack_ac + 0x1b;
        if ((puVar1[1] & 0xfffffffe) != 0) {
          iVar2 = 0x1df;
          do {
            uVar4 = *puVar1;
            thunk_EXT_FUN_8010cc40(uVar3,psVar5 + uVar4 * uVar6 * 2,uVar4 << 2);
            thunk_EXT_FUN_8010cc40
                      (psVar5 + uVar4 * uVar6 * 2,psVar5 + iVar2 * uVar4 * 2,*puVar1 << 2);
            thunk_EXT_FUN_8010cc40(psVar5 + iVar2 * uVar4 * 2,uVar3,*puVar1 << 2);
            uVar6 = uVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (uVar6 < puVar1[1] >> 1);
        }
        FUN_000038f8(psVar5,puVar1[3],*puVar1,puVar1[1],0);
        halt_baddata();
      }
    }
    thunk_EXT_FUN_80089eb0(uStack_b0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00001fc0 @ 00001fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001fc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002040 @ 00002040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002040(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002058 @ 00002058 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002058(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0000eab0();
  *puVar1 = 0;
  puVar1[1] = 0xffffffff;
  puVar1[2] = _DAT_80203aa4;
  puVar1[3] = _DAT_80203aa8;
  puVar1[4] = _DAT_80203aac;
  puVar1[5] = _DAT_80203ab0;
  puVar1[6] = _DAT_80203ab4;
  puVar1[7] = _DAT_80203ab8;
  puVar1[8] = _DAT_80203abc;
  puVar1[9] = _DAT_80203ac0;
  puVar1[10] = _DAT_80203ac4;
  puVar1[0xb] = _DAT_80203ac8;
  puVar1[0xc] = _DAT_80203acc;
  puVar1[0xd] = _DAT_80203ad0;
  puVar1[0xe] = _DAT_80203ad4;
  puVar1[0xf] = _DAT_80203ad8;
  puVar1[0x10] = _DAT_80203adc;
  puVar1[0x11] = _DAT_80203ae0;
  puVar1[0x12] = _DAT_80203ae4;
  puVar1[0x13] = _DAT_80203ae8;
  puVar1[0x14] = _DAT_80203aec;
  puVar1[0x15] = _DAT_80203af0;
  puVar1[0x16] = _DAT_80203af4;
  puVar1[0x17] = _DAT_80203af8;
  puVar1[0x18] = _DAT_80203afc;
  puVar1[0x19] = _DAT_80203b00;
  puVar1[0x1a] = _DAT_80203b04;
  puVar1[0x1b] = _DAT_80203b08;
  puVar1[0x1c] = _DAT_80203b0c;
  puVar1[0x1d] = _DAT_80203b10;
  puVar1[0x1e] = _DAT_80203b14;
  puVar1[0x1f] = _DAT_80203b18;
  puVar1[0x20] = _DAT_80203b1c;
  puVar1[0x21] = _DAT_80203b20;
  puVar1[0x22] = _DAT_80203b24;
  puVar1[0x23] = _DAT_80203b28;
  puVar1[0x24] = _DAT_80203b2c;
  puVar1[0x25] = _DAT_80203b30;
  puVar1[0x26] = _DAT_80203b34;
  puVar1[0x27] = _DAT_80203b38;
  puVar1[0x28] = _DAT_80203b3c;
  puVar1[0x29] = _DAT_80203b40;
  puVar1[0x2a] = _DAT_80203b44;
  puVar1[0x2b] = _DAT_80203b48;
  puVar1[0x2c] = _DAT_80203b4c;
  puVar1[0x2d] = _DAT_80203b50;
  puVar1[0x2e] = _DAT_80203b54;
  puVar1[0x2f] = _DAT_80203b58;
  puVar1[0x30] = _DAT_80203b5c;
  puVar1[0x31] = _DAT_80203b60;
  puVar1[0x32] = _DAT_80203b64;
  puVar1[0x33] = _DAT_80203b68;
  puVar1[0x34] = _DAT_80203b6c;
  puVar1[0x35] = _DAT_80203b70;
  puVar1[0x36] = _DAT_80203b74;
  puVar1[0x37] = _DAT_80203b78;
  puVar1[0x38] = _DAT_80203b7c;
  puVar1[0x39] = _DAT_80203b80;
  puVar1[0x3a] = _DAT_80203b84;
  puVar1[0x3b] = _DAT_80203b88;
  puVar1[0x3c] = _DAT_80203b8c;
  puVar1[0x3d] = _DAT_80203b90;
  puVar1[0x3e] = _DAT_80203b94;
  puVar1[0x3f] = _DAT_80203b98;
  puVar1[0x40] = _DAT_80203b9c;
  puVar1[0x41] = _DAT_80203ba0;
  puVar1[0x42] = _DAT_80203ba4;
  puVar1[0x43] = _DAT_80203ba8;
  puVar1[0x44] = _DAT_80203bac;
  puVar1[0x45] = _DAT_80203bb0;
  puVar1[0x46] = _DAT_80203bb4;
  puVar1[0x47] = _DAT_80203bb8;
  puVar1[0x48] = _DAT_80203bbc;
  puVar1[0x49] = _DAT_80203bc0;
  puVar1[0x4a] = _DAT_80203bc4;
  puVar1[0x4b] = _DAT_80203bc8;
  puVar1[0x4c] = _DAT_80203bcc;
  puVar1[0x4d] = _DAT_80203bd0;
  puVar1[0x4e] = _DAT_80203bd4;
  puVar1[0x4f] = _DAT_80203bd8;
  puVar1[0x50] = _DAT_80203bdc;
  puVar1[0x51] = _DAT_80203be0;
  puVar1[0x52] = _DAT_80203be4;
  puVar1[0x53] = _DAT_80203be8;
  puVar1[0x54] = _DAT_80203bec;
  puVar1[0x55] = _DAT_80203bf0;
  puVar1[0x56] = _DAT_80203bf4;
  puVar1[0x57] = _DAT_80203bf8;
  puVar1[0x58] = _DAT_80203bfc;
  puVar1[0x59] = _DAT_80203c00;
  puVar1[0x5a] = _DAT_80203c04;
  puVar1[0x5b] = _DAT_80203c08;
  puVar1[0x5c] = _DAT_80203c0c;
  puVar1[0x5d] = _DAT_80203c10;
  puVar1[0x5e] = _DAT_80203c14;
  puVar1[0x5f] = _DAT_80203c18;
  puVar1[0x60] = _DAT_80203c1c;
  puVar1[0x61] = _DAT_80203c20;
  puVar1[0x62] = _DAT_80203c24;
  puVar1[99] = _DAT_80203c28;
  puVar1[100] = _DAT_80203c2c;
  puVar1[0x65] = _DAT_80203c30;
  puVar1[0x66] = _DAT_80203c34;
  puVar1[0x67] = _DAT_80203c38;
  puVar1[0x68] = _DAT_80203c3c;
  puVar1[0x69] = _DAT_80203c40;
  puVar1[0x6a] = _DAT_80203c44;
  puVar1[0x6b] = _DAT_80203c48;
  puVar1[0x6c] = _DAT_80203c4c;
  puVar1[0x6d] = _DAT_80203c50;
  puVar1[0x6e] = _DAT_80203c54;
  puVar1[0x6f] = _DAT_80203c58;
  puVar1[0x70] = _DAT_80203c5c;
  puVar1[0x71] = _DAT_80203c60;
  puVar1[0x72] = _DAT_80203c64;
  puVar1[0x73] = _DAT_80203c68;
  puVar1[0x74] = _DAT_80203c6c;
  puVar1[0x75] = _DAT_80203c70;
  puVar1[0x76] = _DAT_80203c74;
  puVar1[0x77] = _DAT_80203c78;
  puVar1[0x78] = _DAT_80203c7c;
  puVar1[0x79] = _DAT_80203c80;
  puVar1[0x7a] = _DAT_80203c84;
  puVar1[0x7b] = _DAT_80203c88;
  puVar1[0x7c] = _DAT_80203c8c;
  puVar1[0x7d] = _DAT_80203c90;
  puVar1[0x7e] = _DAT_80203c94;
  puVar1[0x7f] = _DAT_80203c98;
  puVar1[0x80] = _DAT_80203c9c;
  puVar1[0x81] = _DAT_80203ca0;
  puVar1[0x82] = _DAT_80203ca4;
  puVar1[0x83] = _DAT_80203ca8;
  puVar1[0x84] = _DAT_80203cac;
  puVar1[0x85] = _DAT_80203cb0;
  puVar1[0x86] = _DAT_80203cb4;
  puVar1[0x87] = _DAT_80203cb8;
  puVar1[0x88] = _DAT_80203cbc;
  puVar1[0x89] = _DAT_80203cc0;
  puVar1[0x8a] = _DAT_80203cc4;
  puVar1[0x8b] = _DAT_80203cc8;
  puVar1[0x8c] = _DAT_80203ccc;
  puVar1[0x8d] = _DAT_80203cd0;
  puVar1[0x8e] = _DAT_80203cd4;
  puVar1[0x8f] = _DAT_80203cd8;
  puVar1[0x90] = _DAT_80203cdc;
  puVar1[0x91] = _DAT_80203ce0;
  puVar1[0x92] = _DAT_80203ce4;
  puVar1[0x93] = _DAT_80203ce8;
  puVar1[0x94] = _DAT_80203cec;
  puVar1[0x95] = _DAT_80203cf0;
  puVar1[0x96] = _DAT_80203cf4;
  puVar1[0x97] = _DAT_80203cf8;
  puVar1[0x98] = _DAT_80203cfc;
  puVar1[0x99] = _DAT_80203d00;
  puVar1[0x9a] = _DAT_80203d04;
  puVar1[0x9b] = _DAT_80203d08;
  puVar1[0x9c] = _DAT_80203d0c;
  puVar1[0x9d] = _DAT_80203d10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002690 @ 00002690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002690(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0000ead8();
  FUN_000039e8();
  iVar4 = 0xc;
  iVar3 = -0x7fdfd268;
  piVar2 = (int *)(*(int *)(iVar1 + 0x114) + -4);
  do {
    piVar2 = piVar2 + 1;
    thunk_EXT_FUN_8010cc40(*piVar2 + 0x54,iVar3,0x30);
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002718 @ 00002718 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002718(undefined8 param_1)

{
  float fVar1;
  int iVar2;
  double extraout_f1;
  double dVar3;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = (double)_DAT_80201370;
  iVar2 = FUN_00003c88((double)_DAT_80201374,dVar5,param_1);
  dVar6 = (double)_DAT_8020137c;
  dVar8 = (double)_DAT_80201380;
  dVar7 = (double)_DAT_80201384;
  *(float *)(iVar2 + 0xb4) = -(float)(extraout_f1 * (double)_DAT_80201378 - dVar6);
  dVar4 = (double)_DAT_80201388;
  dVar3 = (double)_DAT_8020138c;
  *(float *)(iVar2 + 0xb8) = -(float)(extraout_f1 * dVar8 - dVar6);
  *(float *)(iVar2 + 0xbc) = -(float)(extraout_f1 * dVar7 - dVar6);
  iVar2 = FUN_00003c88(dVar3,dVar4);
  *(float *)(iVar2 + 0xc0) = (float)extraout_f1_00;
  iVar2 = FUN_00003c88((double)_DAT_80201390,dVar5);
  dVar4 = -(double)(float)(extraout_f1_01 * (double)_DAT_80201394 - dVar6);
  dVar3 = (double)_DAT_8020139c;
  fVar1 = -(float)(extraout_f1_01 * (double)_DAT_80201398 - dVar6);
  *(float *)(iVar2 + 0x1c) =
       (float)((double)(float)((double)_DAT_80202ff8 - dVar6) * extraout_f1_01 + dVar6);
  *(float *)(iVar2 + 0x20) =
       (float)((double)(float)((double)_DAT_80202ffc - dVar6) * extraout_f1_01 + dVar6);
  *(float *)(iVar2 + 0x24) =
       (float)((double)(float)((double)_DAT_80203000 - dVar6) * extraout_f1_01 + dVar6);
  *(float *)(iVar2 + 0x28) = (float)dVar6;
  *(float *)(iVar2 + 0xd4) = fVar1;
  *(float *)(iVar2 + 0xd8) = (float)dVar4;
  *(float *)(iVar2 + 0xdc) = fVar1;
  *(float *)(iVar2 + 0xe0) = (float)dVar6;
  iVar2 = FUN_00003c88(dVar5,dVar3);
  dVar3 = (double)_DAT_802013a0;
  dVar5 = (double)_DAT_802013a4;
  *(float *)(iVar2 + 0xd4) =
       (float)((double)(float)(dVar3 - (double)*(float *)(iVar2 + 0xd4)) * extraout_f1_02 +
              (double)*(float *)(iVar2 + 0xd4));
  *(float *)(iVar2 + 0xdc) =
       (float)((double)(float)(dVar3 - (double)*(float *)(iVar2 + 0xdc)) * extraout_f1_02 +
              (double)*(float *)(iVar2 + 0xdc));
  *(float *)(iVar2 + 0xd8) = (float)((double)(float)(dVar5 - dVar4) * extraout_f1_02 + dVar4);
  return;
}


/* ==== FUN_00002970 @ 00002970 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002970(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000029f8 @ 000029f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000029f8(double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r25;
  undefined4 unaff_r26;
  int unaff_r27;
  double *unaff_r28;
  uint *unaff_r29;
  int unaff_r30;
  code *unaff_r31;
  int iVar7;
  double dVar8;
  double unaff_f21;
  double unaff_f24;
  double unaff_f25;
  double unaff_f26;
  double unaff_f27;
  double unaff_f31;
  byte bStack00000067;
  
  fVar2 = *(float *)(unaff_r30 + 0x238);
  fVar3 = *(float *)(unaff_r30 + 0x23c);
  fVar4 = *(float *)(unaff_r30 + 0x240);
  if (unaff_f26 <= (double)(float)(unaff_f25 - param_1)) {
    dVar8 = (double)(*unaff_r31)();
    unaff_f24 = dVar8 * unaff_f21;
  }
  iVar7 = 0x200;
  do {
    dVar8 = (double)((float)*unaff_r28 * (float)unaff_f24);
    if (unaff_f27 <= (double)((float)*unaff_r28 * (float)unaff_f24)) {
      dVar8 = unaff_f27;
    }
    fVar1 = (float)(unaff_f27 - dVar8);
    unaff_r28 = unaff_r28 + 1;
    bStack00000067 =
         (byte)(longlong)
               ((float)((double)*(float *)(unaff_r30 + 0x22c) * unaff_f31) * fVar1 +
               (float)(dVar8 * (double)(float)((double)fVar3 * unaff_f31)));
    uVar6 = (uint)bStack00000067;
    bStack00000067 =
         (byte)(longlong)
               ((float)((double)*(float *)(unaff_r30 + 0x230) * unaff_f31) * fVar1 +
               (float)(dVar8 * (double)(float)((double)fVar4 * unaff_f31)));
    uVar5 = (uint)bStack00000067;
    bStack00000067 =
         (byte)(longlong)
               ((float)((double)*(float *)(unaff_r30 + 0x228) * unaff_f31) * fVar1 +
               (float)(dVar8 * (double)(float)((double)fVar2 * unaff_f31)));
    unaff_r29 = unaff_r29 + 1;
    *unaff_r29 = ((uint)bStack00000067 << 8 | 0xffff0000 | uVar6) << 8 | uVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (unaff_r27 + 1 < 0x100) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)0x9801cf10)(unaff_r26,0);
  (*(code *)0x98011d90)(unaff_r25,unaff_r26);
  *(undefined4 *)(unaff_r25 + 0x120) = unaff_r26;
  FUN_0000eba8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002b20 @ 00002b20 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b20(void)

{
  undefined4 local_a0 [2];
  undefined1 auStack_98 [152];
  
  FUN_0000eac8();
  FUN_0000eb6c();
  local_a0[0] = 0;
  FUN_00003ce0(0x100,0x100,0,0,0x18280086,1,local_a0,0);
  (*(code *)&SUB_9801e380)(local_a0[0],0,auStack_98,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002bd8 @ 00002bd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002bd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002bf8 @ 00002bf8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002bf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002d70 @ 00002d70 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002d70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002db8 @ 00002db8 ==== */

void FUN_00002db8(void)

{
  (*(code *)0x800817d0)(0x80170880,0x7a020000,0x7c000,0);
  return;
}


/* ==== FUN_00002dd8 @ 00002dd8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002dd8(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int aiStack_50 [20];
  
  uVar3 = FUN_0000eacc();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  aiStack_50[0] = 0;
  iVar2 = FUN_0000f008(0x80203d14,0x3d8,0,8,0,aiStack_50);
  if (iVar2 != 0) {
    thunk_EXT_FUN_80085ee8(0x802013e8,iVar2);
    thunk_EXT_FUN_80085ea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(aiStack_50[0] + 0x1e) = *(char *)(iVar1 + 0x1e) + *(char *)(aiStack_50[0] + 0x1e);
  *(undefined4 *)(aiStack_50[0] + 0x24) = *(undefined4 *)(iVar1 + 0x24);
  *(int *)(aiStack_50[0] + 0x20) = (int)uVar3;
  iVar2 = *(int *)(aiStack_50[0] + 0x18);
  FUN_0000ece8(iVar2 + 0x10);
  FUN_0000ece8(iVar2 + 0x48);
  FUN_0000f018(iVar2 + 0x80);
  *(int *)(iVar2 + 0xa0) = iVar1;
  *(int *)(iVar2 + 0x324) = iVar2 + 800;
  *(int *)(iVar2 + 800) = iVar2 + 800;
  *(undefined1 *)(iVar2 + 0x9c) = 0;
  *(int *)(iVar2 + 0x32c) = iVar2 + 0x328;
  *(int *)(iVar2 + 0x328) = iVar2 + 0x328;
  FUN_0000ee98(iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002f0c @ 00002f0c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002f0c(void)

{
  int unaff_r31;
  undefined4 in_stack_00000050;
  
  if (*(int *)(unaff_r31 + 0xc0) != -1) {
    FUN_00003e08();
  }
  FUN_0000f028(in_stack_00000050);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002f38 @ 00002f38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002f38(short param_1)

{
  int iVar1;
  int unaff_r30;
  int unaff_r31;
  int in_stack_00000050;
  short sStack00000054;
  undefined2 uStack00000056;
  
  sStack00000054 = param_1 + 0x30;
  uStack00000056 = 0x3a;
  *(uint *)(in_stack_00000050 + 0x14) = *(uint *)(in_stack_00000050 + 0x14) & 0xffffffef;
  iVar1 = FUN_00003e68(unaff_r31 + 200,&stack0x00000054,1);
  if (iVar1 == 0) {
    *(int *)(unaff_r30 + 0xc) = in_stack_00000050;
  }
  else {
    thunk_EXT_FUN_80085ee8(0x80201480,*(undefined4 *)(unaff_r31 + 0xc0));
    if (*(int *)(unaff_r31 + 0xc0) != -1) {
      FUN_00003e08();
    }
    FUN_0000f028(in_stack_00000050);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00002f98 @ 00002f98 ==== */

undefined4 FUN_00002f98(void)

{
  int iVar1;
  byte bVar3;
  uint uVar2;
  
  bVar3 = bRam7feac002 >> 1 & 3;
  if ((bRam7feac002 >> 1 & 3) == 0) {
    iVar1 = -0x7fdfc7fc;
  }
  else if (bVar3 == 1) {
    iVar1 = -0x7fdfc7ec;
  }
  else {
    if (bVar3 != 2) {
      return 0xffffffff;
    }
    iVar1 = -0x7fdfc7dc;
  }
  uVar2 = bRam7feac000 >> 4 & 3;
  if (3 < uVar2) {
    return 0xffffffff;
  }
  return *(undefined4 *)(uVar2 * 4 + iVar1);
}


/* ==== FUN_00003000 @ 00003000 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00003000(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00003f00(0x801ff6fc,param_1,_DAT_80202d7c,0x801ff738,6);
  return cVar1 != '\0';
}


/* ==== FUN_00003050 @ 00003050 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003050(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000030b0 @ 000030b0 ==== */

bool FUN_000030b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  cVar1 = FUN_000044e0(param_1,0x801f41e8,&uStack_30);
  if (cVar1 == '\0') {
    thunk_EXT_FUN_80085ee8(0x802014f0);
  }
  return cVar1 != '\0';
}


/* ==== FUN_00003160 @ 00003160 ==== */

undefined4 FUN_00003160(void)

{
  uint in_r0;
  undefined4 uVar1;
  
  if (in_r0 < uRam801ffd0c) {
                    /* WARNING: Could not recover jumptable at 0x0000318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(in_r0 * 4 + -0x7fdfcd54))();
    return uVar1;
  }
  return 0xc0000001;
}


/* ==== FUN_000031c0 @ 000031c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000031c0(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == 2) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != 4) {
      return 0xc0000002;
    }
    uVar1 = *param_3 | 1;
  }
  *param_3 = uVar1;
  return 0;
}


/* ==== thunk_FUN_0000f038 @ 00003210 ==== */

void thunk_FUN_0000f038(void)

{
  (*(code *)0x80066400)();
  return;
}


/* ==== FUN_00003218 @ 00003218 ==== */

void FUN_00003218(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_00003230 @ 00003230 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003230(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *in_r11;
  char *pcVar4;
  int unaff_r27;
  uint uVar5;
  int unaff_r30;
  
  do {
    cVar1 = *in_r11;
    in_r11 = in_r11 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  do {
    pcVar3 = *(char **)(uVar5 * 4 + -0x7fdfcd34);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  } while (((((int)(in_r11 + (-1 - unaff_r30)) < (int)(pcVar4 + (-1 - (int)pcVar3))) ||
            (iVar2 = thunk_EXT_FUN_80086390
                               (in_r11 + (-1 - unaff_r30) +
                                (unaff_r30 - (int)(pcVar4 + (-1 - (int)pcVar3))),0xffffffff,pcVar3,
                                0xffffffff,1), iVar2 != 0)) || ((uVar5 == 0 && (unaff_r27 != 8))))
          && (uVar5 = uVar5 + 1, uVar5 < 2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000032d8 @ 000032d8 ==== */

void FUN_000032d8(void)

{
  (*(code *)&LAB_8007d6ec)();
  return;
}


/* ==== FUN_000032f0 @ 000032f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000032f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)FUN_0000ead8();
  puVar3 = (undefined4 *)*puVar1;
  piVar4 = puVar1;
  while (puVar3 != puVar1) {
    if (*(int *)(*piVar4 + 0xc) == -0x7ea10000) {
      FUN_00004600();
    }
    else {
      iVar2 = thunk_EXT_FUN_800864b0
                        (*(undefined4 *)(*piVar4 + 0x20),0xffffffff,0x80201540,0xffffffff,0);
      if (iVar2 == 0) {
        FUN_000048a8();
      }
    }
    piVar4 = (int *)*piVar4;
    puVar3 = (undefined4 *)*piVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003378 @ 00003378 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003378(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined1 auStack_3bc [40];
  char cStack_394;
  char acStack_393 [259];
  char cStack_290;
  char cStack_28f;
  undefined1 uStack_280;
  undefined1 auStack_27f [271];
  undefined1 uStack_170;
  undefined1 auStack_16f [367];
  
  FUN_0000eab8();
  iVar12 = 0;
  uStack_280 = 0;
  thunk_EXT_FUN_8010d110(auStack_27f,0,0x103);
  iStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  thunk_EXT_FUN_8010d110(auStack_3bc,0,0x130);
  uStack_3c4 = 0;
  uStack_170 = 0;
  thunk_EXT_FUN_8010d110(auStack_16f,0,0x103);
  iVar1 = FUN_00004928();
  iVar2 = FUN_0000ef68(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x40006);
  if (iVar2 != 0) {
    iVar1 = iVar1 + 0x554;
    iVar3 = thunk_EXT_FUN_80086390(iVar1,0x10,0x80201550,0x10,1);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_0000f048(iVar1);
      if (puVar4 == (undefined4 *)0x0) goto LAB_00003670;
      iVar1 = 0;
      puVar8 = puVar4 + 0x25e8;
      iVar3 = 0x104;
      puVar9 = puVar8;
      do {
        if (*(char *)((int)puVar8 + iVar1) == '\\') {
          puVar9 = (undefined4 *)((int)puVar8 + iVar1);
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      thunk_EXT_FUN_8010c7f8(&uStack_170,0x104,0x80201564,(int)puVar9 + (-0x97a0 - (int)puVar4));
      FUN_0000eeb8(*puVar4);
    }
    else {
      thunk_EXT_FUN_8010d1b0(&uStack_170,iVar1,0x104);
    }
    do {
      if (iVar12 == 0) {
        thunk_EXT_FUN_8010c7f8(&uStack_280,0x104,0x802015c0,&uStack_170);
      }
      else {
        if (iVar12 == 1) {
          uVar6 = 0x802015b4;
          puVar7 = &uStack_170;
        }
        else {
          uVar6 = 0x8020159c;
          puVar7 = puRam802032a0;
        }
        thunk_EXT_FUN_8010c7f8(&uStack_280,0x104,uVar6,puVar7,*(undefined4 *)(iVar2 + 0xc));
      }
      cVar5 = FUN_000014d0(&uStack_280,&iStack_3d0,&uStack_3c8);
      if (cVar5 != '\0') {
        thunk_EXT_FUN_8010d110(&uStack_3c0,0,0x134);
        thunk_EXT_FUN_8010cc40(&uStack_3c0,iVar2,0x18);
        cVar5 = FUN_000044e0(iStack_3d0,0x801f4938,&uStack_3c0);
        if (((cVar5 != '\0') && (cStack_290 == '\x01')) && (cStack_28f == '\0')) {
          uVar6 = 0x80201588;
          puVar7 = puRam802032a0;
          if (iVar12 != 2) {
            uVar6 = 0x80201580;
            puVar7 = &uStack_170;
          }
          thunk_EXT_FUN_8010c7f8(&uStack_280,0x104,uVar6,puVar7,&cStack_394);
          iVar1 = FUN_0000ed98(&uStack_280,9,0,&uStack_3c4);
          if (iVar1 != 0) break;
          pcVar11 = &cStack_394;
          pcVar10 = &cStack_394;
          cVar5 = cStack_394;
          while (cVar5 != '\0') {
            if (cVar5 == '\\') {
              pcVar11 = pcVar10 + 1;
            }
            pcVar10 = pcVar10 + 1;
            cVar5 = *pcVar10;
          }
          iVar1 = thunk_EXT_FUN_80064a68(200);
          if (iVar1 != 0) {
            thunk_EXT_FUN_8010d110(iVar1,0,200);
            thunk_EXT_FUN_8010c880(iVar1,100,0x8020156c,pcVar11);
            iVar1 = FUN_0000ee38(&uStack_3cc,0,0,0,0x801f4ca0,iVar1,0);
            if (iVar1 == 0) {
              thunk_EXT_FUN_80089eb0(uStack_3cc);
            }
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 3);
  }
LAB_00003670:
  if (iStack_3d0 != 0) {
    thunk_EXT_FUN_80064768();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003690 @ 00003690 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003690(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003704 @ 00003704 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003704(void)

{
  int unaff_r31;
  
  FUN_00004d38(*(undefined4 *)(unaff_r31 + 0x5dd4),0x802015d0,0x210,0x801f4d08);
  FUN_00004d38(*(undefined4 *)(unaff_r31 + 0x5dd4),0x802015d0,0x227,0x801f4ed8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000037cc @ 000037cc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000037cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003800 @ 00003800 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003800(void)

{
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  FUN_0000f068(unaff_r30,unaff_r31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000383c @ 0000383c ==== */

undefined4 FUN_0000383c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((*(byte *)(*(int *)(param_2 + 0x50) + 2) & 0x80) == 0) &&
      (uVar2 = *(uint *)(*(int *)(param_2 + 0x50) + 0x10), (uVar2 & 0x8000) != 0)) &&
     ((uVar2 = uVar2 >> 2 & 0xfff, uVar2 < 0x11 || (0x13 < uVar2)))) {
    return 0xc0000022;
  }
  uVar1 = (*(code *)0x80094828)();
  return uVar1;
}


/* ==== FUN_00003894 @ 00003894 ==== */

undefined4 FUN_00003894(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(*(int *)(param_2 + 0x50) + 0x18) + 8) == 0) {
    return 0xc0000022;
  }
  uVar1 = (*(code *)0x80093990)();
  return uVar1;
}


/* ==== FUN_000038cc @ 000038cc ==== */

undefined4 FUN_000038cc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x50) + 8);
  if ((iVar2 != 10) && (iVar2 != 0xd)) {
    uVar1 = (*(code *)0x80093ed8)();
    return uVar1;
  }
  return 0xc0000022;
}


/* ==== FUN_000038f8 @ 000038f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_0000eab8();
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  iVar4 = (int)uVar9;
  if (0 < param_4) {
    iVar6 = 0;
    do {
      iVar7 = 0;
      if (0 < param_3) {
        do {
          iVar8 = iVar6 + iVar7;
          iVar1 = iVar8 * 4;
          iVar3 = FUN_00004f98(iVar8,param_3,4);
          iVar8 = FUN_00005058(iVar8,param_3,4);
          iVar3 = (iVar3 * param_3 + iVar8) * 4;
          if ((param_5 & 0xff) == 0) {
            iVar5 = iVar3 + iVar2;
            iVar8 = iVar1 + iVar4;
            *(undefined1 *)(iVar1 + iVar4) = *(undefined1 *)(iVar3 + iVar2);
            *(undefined1 *)(iVar8 + 1) = *(undefined1 *)(iVar5 + 1);
            *(undefined1 *)(iVar8 + 2) = *(undefined1 *)(iVar5 + 2);
            *(undefined1 *)(iVar8 + 3) = *(undefined1 *)(iVar5 + 3);
          }
          else {
            iVar5 = iVar1 + iVar2;
            iVar8 = iVar3 + iVar4;
            *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)(iVar1 + iVar2);
            *(undefined1 *)(iVar8 + 1) = *(undefined1 *)(iVar5 + 1);
            *(undefined1 *)(iVar8 + 2) = *(undefined1 *)(iVar5 + 2);
            *(undefined1 *)(iVar8 + 3) = *(undefined1 *)(iVar5 + 3);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_3);
      }
      param_4 = param_4 + -1;
      iVar6 = iVar6 + param_3;
    } while (param_4 != 0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000039e8 @ 000039e8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000039e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003a20 @ 00003a20 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003a20(double param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(uint *)(param_2 + 0x54);
  *(uint *)(param_2 + 0x54) = uVar1 | 0x40;
  dVar2 = (double)_DAT_801ff814;
  if ((param_1 < dVar2) || ((double)fRam8020178c < param_1)) {
    uVar1 = uVar1 & 0xfffffffe | 0x40;
  }
  else {
    uVar1 = uVar1 | 0x41;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  dVar4 = (double)fRam80201790;
  if ((param_1 < dVar4) || ((double)fRam80201794 < param_1)) {
    uVar1 = uVar1 & 0xfffffeff;
  }
  else {
    uVar1 = uVar1 | 0x100;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  dVar5 = (double)fRam8020179c;
  if ((param_1 < (double)fRam80201798) || (dVar5 < param_1)) {
    uVar1 = uVar1 & 0xfffffdff;
  }
  else {
    uVar1 = uVar1 | 0x200;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  dVar3 = (double)fRam802017a4;
  if ((param_1 < (double)fRam802017a0) || (dVar3 < param_1)) {
    uVar1 = uVar1 & 0xfffffbff;
  }
  else {
    uVar1 = uVar1 | 0x400;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if ((param_1 < dVar5) || (dVar3 < param_1)) {
    uVar1 = uVar1 & 0xfffff7ff;
  }
  else {
    uVar1 = uVar1 | 0x800;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if ((param_1 < dVar2) || ((double)fRam802017a8 < param_1)) {
    uVar1 = uVar1 & 0xffffff7f;
  }
  else {
    uVar1 = uVar1 | 0x80;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if ((param_1 < (double)fRam802017ac) || (dVar3 < param_1)) {
    uVar1 = uVar1 & 0xfffffffb;
  }
  else {
    uVar1 = uVar1 | 4;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  dVar5 = (double)fRam802017b0;
  if ((param_1 < dVar5) || (dVar3 < param_1)) {
    uVar1 = uVar1 & 0xfffffffd;
  }
  else {
    uVar1 = uVar1 | 2;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if ((param_1 < dVar4) || ((double)_DAT_80201388 < param_1)) {
    uVar1 = uVar1 & 0xffffffef;
  }
  else {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if ((param_1 < dVar2) || ((double)fRam802017b4 < param_1)) {
    uVar1 = uVar1 & 0xfffffff7;
  }
  else {
    uVar1 = uVar1 | 8;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if ((param_1 < dVar5) || (dVar3 < param_1)) {
    uVar1 = uVar1 & 0xffffffdf;
  }
  else {
    uVar1 = uVar1 | 0x20;
  }
  *(uint *)(param_2 + 0x54) = uVar1;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    dVar2 = (double)fRam802017b8;
    if ((double)fRam802017b8 <= (double)fRam98043064) {
      dVar2 = (double)fRam98043064;
    }
    if (dVar3 <= (double)(fRam98043064 + fRam802017bc)) {
      dVar3 = (double)(fRam98043064 + fRam802017bc);
    }
    if (((double)(float)((double)fRam98043068 + param_1) < dVar2) ||
       (dVar3 < (double)(float)((double)fRam98043068 + param_1))) {
      uVar1 = uVar1 & 0xffffefff;
    }
    else {
      uVar1 = uVar1 | 0x1000;
    }
    *(uint *)(param_2 + 0x54) = uVar1;
  }
  *(uint *)(param_2 + 0x54) = uRam80202d94 & *(uint *)(param_2 + 0x54);
  return;
}


/* ==== FUN_00003c88 @ 00003c88 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00003c88(double param_1,double param_2,double param_3)

{
  float fVar1;
  
  if (param_3 < param_1) {
    return (double)_DAT_801ff814;
  }
  if (param_2 <= param_3) {
    return (double)_DAT_8020137c;
  }
  fVar1 = (float)(param_3 - param_1) / (float)(param_2 - param_1);
  return (double)(-(fVar1 * _DAT_802013c8 - _DAT_80201388) * fVar1 * fVar1);
}


/* ==== FUN_00003ce0 @ 00003ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003d48 @ 00003d48 ==== */

void FUN_00003d48(double param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  undefined4 uVar1;
  
  *param_4 = (float)((double)fRam80202fe8 * param_1);
  param_4[1] = (float)((double)fRam80202fec * param_1);
  uVar1 = uRam980687e0;
  param_4[2] = (float)((double)fRam80202ff0 * param_1);
  (*(code *)0x9801bab8)(uVar1);
  return;
}


/* ==== FUN_00003d90 @ 00003d90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003d90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = FUN_0000ead8();
  uVar2 = thunk_EXT_FUN_80070138(0x80203008);
  piVar3 = (int *)0x8020300c;
  uVar4 = 0;
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)(uVar4 * 4 + -0x7fdfcff4) = uVar1;
      break;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 10);
  thunk_EXT_FUN_8007018c(0x80203008,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003e08 @ 00003e08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003e08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00003e68 @ 00003e68 ==== */

undefined4 FUN_00003e68(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uStack0000001c;
  undefined4 local_10 [4];
  
  uStack0000001c = param_2;
  local_10[0] = param_2;
  iVar2 = FUN_00006af0(local_10);
  if (iVar2 < 0) {
    uVar3 = 0xb;
  }
  else {
    iVar1 = iVar2 * 4;
    puVar4 = *(undefined1 **)(iVar1 + -0x7fdfcfcc);
    if (puVar4 != (undefined1 *)0x0) {
      *(undefined4 *)(iVar1 + -0x7fdfcfcc) = 0;
      *puVar4 = 0;
    }
    if (param_1 != (undefined1 *)0x0) {
      param_1[1] = (char)iVar2;
      *param_1 = 0;
      *(undefined1 **)(iVar1 + -0x7fdfcfcc) = param_1;
    }
    if ((param_3 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00006b68(&stack0x0000001c,&stack0x00000014,0);
    }
  }
  return uVar3;
}


/* ==== FUN_00003f00 @ 00003f00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [2];
  int local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  uint local_90;
  undefined2 *local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 *local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  
  uVar10 = FUN_0000eab8();
  pcVar2 = (char *)((ulonglong)uVar10 >> 0x20);
  uVar9 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_96 = 0;
  local_94 = 0;
  local_92 = 0;
  local_9c = 0;
  local_b0 = 0;
  local_a8[0] = 0;
  local_74 = 0;
  local_70 = 0;
  local_ac = 0;
  local_6c = 0;
  local_68 = 0;
  local_80 = param_3;
  local_7c = param_4;
  local_78 = param_5;
  if (((uint)uVar10 & 0xff) == 1) {
    FUN_000014d0(pcVar2,&local_ac,local_a8);
  }
  iVar3 = thunk_EXT_FUN_80064a68(param_5 + 0x400);
  local_70 = iVar3;
  if (iVar3 == 0) {
    thunk_EXT_FUN_80085ee8(0x802017c0);
    goto LAB_000041c8;
  }
  iVar7 = iVar3 + 0x400;
  local_68 = iVar7;
  thunk_EXT_FUN_8010d110(iVar7,0,param_5);
  thunk_EXT_FUN_80086110(&local_98,pcVar2);
  local_90 = 0xfffffffd;
  if (pcVar2 != (char *)0x0) {
    local_90 = -(uint)(*pcVar2 != '\\') & 0xfffffffd;
  }
  local_88 = 0x40;
  local_8c = &local_98;
  iVar4 = thunk_EXT_FUN_8006caa8(&local_b0,0x40100100,&local_90,&local_a0,0,0x80,0,5);
  if (iVar4 == 0) {
    local_74 = local_b0;
    cVar6 = FUN_000073c8(local_ac,0x801f73c0,0x801f72f0,0x801f7228,&local_80);
    if (cVar6 == '\0') {
      thunk_EXT_FUN_80085ee8(0x80201888);
    }
    else {
      if (param_5 != 0) {
        do {
          iVar4 = iVar3 + 0x3ff + uVar9;
          if (*(char *)(iVar4 + 1) != '\x01') {
            cVar6 = FUN_00007608(&local_80,0x802018d4,*param_4);
            if ((cVar6 == '\0') || (cVar6 = FUN_00007730(&local_80,param_4), cVar6 == '\0'))
            goto LAB_000041c0;
            *(undefined1 *)(iVar4 + 1) = 1;
            puVar8 = param_4;
            uVar1 = uVar9;
            while (uVar1 = uVar1 + 1, uVar1 < param_5) {
              puVar8 = puVar8 + 5;
              if ((*(char *)(uVar1 + iVar7) != '\x01') &&
                 (iVar4 = thunk_EXT_FUN_80086390(*param_4,0xffffffff,*puVar8,0xffffffff,1),
                 iVar4 == 0)) {
                cVar6 = FUN_00007730(&local_80,puVar8);
                if (cVar6 == '\0') goto LAB_000041c0;
                *(undefined1 *)(uVar1 + iVar7) = 1;
              }
            }
          }
          uVar9 = uVar9 + 1;
          param_4 = param_4 + 5;
        } while (uVar9 < param_5);
      }
      if (local_6c != 0) {
        iVar7 = thunk_EXT_FUN_8006cf00(local_b0,0,0,0,&local_a0,iVar3,local_6c,0);
        if (iVar7 == 0x103) {
          iVar7 = thunk_EXT_FUN_8008b188(local_b0,1,0,0);
        }
        if ((iVar7 != 0) || (local_a0 < 0)) {
          uVar5 = 0x802018e0;
          goto LAB_000041b4;
        }
      }
    }
  }
  else {
    uVar5 = 0x80201828;
LAB_000041b4:
    thunk_EXT_FUN_80085ee8(uVar5);
  }
LAB_000041c0:
  thunk_EXT_FUN_80064768(iVar3);
LAB_000041c8:
  if (local_b0 != 0) {
    thunk_EXT_FUN_80089eb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00004238 @ 00004238 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004238(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint unaff_r23;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 unaff_r25;
  char *unaff_r26;
  int unaff_r27;
  undefined4 unaff_r28;
  uint unaff_r29;
  int *unaff_r30;
  int unaff_r31;
  
  while ((((puVar6 = (undefined4 *)(*(int *)(unaff_r31 + unaff_r30[1] + 0x10) + *unaff_r30),
           *(int *)(unaff_r31 + unaff_r30[1] + 4) == 0 ||
           (*(int *)(unaff_r31 + unaff_r30[1] + 4) != unaff_r27)) &&
          (iVar2 = thunk_EXT_FUN_80086390
                             (unaff_r28,0xffffffff,*(undefined4 *)(unaff_r31 + unaff_r30[1] + 8),
                              0xffffffff,1), iVar2 != 0)) ||
         (iVar2 = thunk_EXT_FUN_80086390
                            (unaff_r25,0xffffffff,*(undefined4 *)(unaff_r31 + unaff_r30[1]),
                             0xffffffff,1), iVar2 != 0))) {
    unaff_r29 = unaff_r29 + 1;
    unaff_r31 = unaff_r31 + 0x14;
    if ((uint)unaff_r30[2] <= unaff_r29) {
      thunk_EXT_FUN_80085ee8(0x80201930,unaff_r28,unaff_r27);
      halt_baddata();
    }
  }
  iVar2 = unaff_r29 * 0x14 + unaff_r30[1];
  sVar1 = *(short *)(iVar2 + 0xe);
  uVar5 = (undefined1)unaff_r23;
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      uVar3 = FUN_000078e0(unaff_r26);
      *puVar6 = uVar3;
      halt_baddata();
    }
    if (sVar1 == 2) {
      cVar4 = *unaff_r26;
      if (((cVar4 != 't') && (cVar4 != 'T')) && (cVar4 != '1')) {
        *(undefined1 *)puVar6 = uVar5;
        halt_baddata();
      }
      *(undefined1 *)puVar6 = 1;
      halt_baddata();
    }
    if (sVar1 != 3) {
      halt_baddata();
    }
    if (*unaff_r26 == '0') {
      if (unaff_r26[1] != 'x') {
        halt_baddata();
      }
      do {
        if (unaff_r26[unaff_r23 + 2] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        cVar4 = FUN_0000f0b8();
        if ((cVar4 < '0') || ('9' < cVar4)) {
          if (cVar4 < 'a') {
            halt_baddata();
          }
          if ('f' < cVar4) {
            halt_baddata();
          }
        }
        unaff_r23 = unaff_r23 + 1;
        if (7 < (int)unaff_r23) {
          halt_baddata();
        }
      } while( true );
    }
    halt_baddata();
  }
  if (*unaff_r26 == '\"') {
    unaff_r26 = unaff_r26 + 1;
  }
  if (*(short *)(iVar2 + 0xc) != 1) {
    iVar2 = (int)puVar6 - (int)unaff_r26;
    do {
      if (*unaff_r26 == '\0') break;
      unaff_r26[iVar2] = *unaff_r26;
      unaff_r23 = unaff_r23 + 1;
      unaff_r26 = unaff_r26 + 1;
    } while (unaff_r23 < *(ushort *)(unaff_r29 * 0x14 + unaff_r30[1] + 0xc) - 1);
  }
  *(undefined1 *)(unaff_r23 + (int)puVar6) = uVar5;
  if ((unaff_r23 != 0) && (*(char *)((int)puVar6 + (unaff_r23 - 1)) == '\"')) {
    *(undefined1 *)((int)puVar6 + (unaff_r23 - 1)) = uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000044c8 @ 000044c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000044c8(void)

{
  int in_CTR;
  
  if (in_CTR == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000044e0 @ 000044e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000044e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  undefined1 auStack_af [126];
  undefined1 uStack_31;
  
  uVar5 = FUN_0000ead4();
  pcVar2 = (code *)uVar5;
  cStack_b0 = '\0';
  thunk_EXT_FUN_8010d110(auStack_af,0,0x7f);
  pcStack_c0 = (char *)((ulonglong)uVar5 >> 0x20);
  do {
    cVar1 = FUN_00007938(&pcStack_c0,&iStack_b4,&iStack_bc,&iStack_b8);
    iVar3 = iStack_b4;
    if (cVar1 == '\0') {
      if (*pcStack_c0 != '\0') {
        halt_baddata();
      }
      break;
    }
    if (iStack_b4 == 0) {
      if ((iStack_bc != 0) && (iVar3 = iStack_bc, iVar4 = iStack_b8, iStack_b8 != 0))
      goto LAB_00004598;
    }
    else {
      if (cStack_b0 != '\0') {
        (*pcVar2)(param_3,0,0,0);
      }
      thunk_EXT_FUN_8010d1b0(&cStack_b0,iVar3,0x80);
      uStack_31 = 0;
      iVar3 = 0;
      iVar4 = 0;
LAB_00004598:
      (*pcVar2)(param_3,&cStack_b0,iVar3,iVar4);
    }
  } while (pcStack_c0 != (char *)0x0);
  if (cStack_b0 != '\0') {
    (*pcVar2)(param_3,0,0,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00004600 @ 00004600 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000048a8 @ 000048a8 ==== */

void FUN_000048a8(void)

{
  FUN_000018f0(0x913fd6b4,0x801f8570,0,0);
  FUN_000018f0(0x913e9178,0x801f8608,0,0);
  FUN_000018f0(0x913f8278,0x801f8710,0,0);
  uRam913ea6a4 = 0x38600000;
  return;
}


/* ==== FUN_00004928 @ 00004928 ==== */

int FUN_00004928(void)

{
  return iRam81a9f850 + 0x350;
}


/* ==== FUN_00004938 @ 00004938 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004938(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_0000ead8();
  piVar1 = (int *)((ulonglong)uVar7 >> 0x20);
  if ((*(char *)(piVar1 + 0x4c) != '\x01') && (*(char *)((int)piVar1 + 0x131) != '\x01')) {
    if ((int)uVar7 == 0) {
      if ((param_3 == 0) && (param_4 == (char *)0x0)) {
        if (piVar1[6] != piVar1[3]) {
          halt_baddata();
        }
        if ((piVar1[7] != 0) && (piVar1[7] != *piVar1)) {
          halt_baddata();
        }
        piVar4 = piVar1 + 1;
        if ((piVar1[9] == 0) || (piVar5 = piVar1 + 10, piVar1[10] == 0)) {
          if (piVar1 + 8 == (int *)0x0) {
            halt_baddata();
          }
          iVar2 = 0;
          do {
            cVar3 = *(char *)((int)(piVar1 + 8) + iVar2);
            if ((cVar3 != -1) && (*(char *)(iVar2 + (int)piVar4) != cVar3)) {
              halt_baddata();
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 4);
        }
        else {
          cVar3 = FUN_000087f8(piVar4,piVar1 + 9,piVar4,piVar5);
          if (cVar3 != '\x01') {
            halt_baddata();
          }
          cVar3 = FUN_000087f8(piVar5,piVar4);
          if (cVar3 != '\x01') {
            halt_baddata();
          }
        }
        *(undefined1 *)(piVar1 + 0x4c) = 1;
        halt_baddata();
      }
    }
    else if ((param_3 == 0) && (param_4 == (char *)0x0)) {
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      thunk_EXT_FUN_8010d110(piVar1 + 0xb,0,0x104);
      halt_baddata();
    }
    iVar2 = thunk_EXT_FUN_80086390((int)uVar7,0xffffffff,0x8020198c,0xffffffff,1);
    if (iVar2 == 0) {
      iVar2 = thunk_EXT_FUN_80086390(param_3,0xffffffff,0x80201998,0xffffffff,1);
      if (iVar2 == 0) {
        if (*param_4 == '\"') {
          param_4 = param_4 + 1;
        }
        cVar3 = *param_4;
        pcVar6 = param_4;
        while (cVar3 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar3 = *pcVar6;
        }
        if (pcVar6[-1] == '\"') {
          pcVar6[-1] = '\0';
        }
        iVar2 = FUN_00008848(param_4,0,0x10);
        piVar1[6] = iVar2;
      }
      else {
        iVar2 = thunk_EXT_FUN_80086390(param_3,0xffffffff,0x802019a0,0xffffffff,1);
        if (iVar2 == 0) {
          if (*param_4 == '\"') {
            param_4 = param_4 + 1;
          }
          cVar3 = *param_4;
          pcVar6 = param_4;
          while (cVar3 != '\0') {
            pcVar6 = pcVar6 + 1;
            cVar3 = *pcVar6;
          }
          if (pcVar6[-1] == '\"') {
            pcVar6[-1] = '\0';
          }
          iVar2 = FUN_00008848(param_4,0,0x10);
          piVar1[7] = iVar2;
        }
        else {
          iVar2 = thunk_EXT_FUN_80086390(param_3,0xffffffff,0x802019a8,0xffffffff,1);
          if (iVar2 == 0) {
            piVar4 = piVar1 + 8;
          }
          else {
            iVar2 = thunk_EXT_FUN_80086390(param_3,0xffffffff,0x802019b8,0xffffffff,1);
            if (iVar2 == 0) {
              piVar4 = piVar1 + 9;
            }
            else {
              iVar2 = thunk_EXT_FUN_80086390(param_3,0xffffffff,0x802019c4,0xffffffff,1);
              if (iVar2 != 0) {
                iVar2 = thunk_EXT_FUN_80086390(param_3,0xffffffff,0x802019d0,0xffffffff,1);
                if (iVar2 != 0) {
                  halt_baddata();
                }
                if (*param_4 == '\"') {
                  param_4 = param_4 + 1;
                }
                cVar3 = *param_4;
                pcVar6 = param_4;
                while (cVar3 != '\0') {
                  pcVar6 = pcVar6 + 1;
                  cVar3 = *pcVar6;
                }
                if (pcVar6[-1] == '\"') {
                  pcVar6[-1] = '\0';
                }
                thunk_EXT_FUN_8010d1b0(piVar1 + 0xb,param_4,0x104);
                halt_baddata();
              }
              piVar4 = piVar1 + 10;
            }
          }
          cVar3 = FUN_00008a08(param_4,piVar4);
          if (cVar3 == '\0') {
            *(undefined1 *)((int)piVar1 + 0x131) = 1;
          }
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00004d24 @ 00004d24 ==== */

void FUN_00004d24(void)

{
  return;
}


/* ==== FUN_00004d38 @ 00004d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004d38(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_40;
  uint auStack_3c [15];
  
  uVar11 = FUN_0000eacc();
  iVar7 = 0;
  uStack_40 = 0;
  auStack_3c[0] = 0;
  iVar2 = FUN_0000f0e8((int)uVar11,&uStack_40);
  if (((iVar2 == 0) && (iVar2 = FUN_0000eda8(uStack_40,param_3,auStack_3c), iVar2 == 0)) &&
     (piVar3 = (int *)FUN_0000ef68(*(undefined4 *)((int)((ulonglong)uVar11 >> 0x20) + 0x58),0x103ff)
     , piVar3 != (int *)0x0)) {
    piVar8 = piVar3 + 3;
    for (piVar9 = (int *)(piVar3[1] + (int)piVar8); piVar9 < (int *)((int)piVar3 + *piVar3);
        piVar9 = (int *)(*piVar9 + (int)piVar9)) {
      iVar2 = 0;
      piVar5 = piVar8;
      if (*(byte *)((int)piVar9 + 0x25) != 0) {
        do {
          do {
            cVar1 = *(char *)piVar5;
            piVar5 = (int *)((int)piVar5 + 1);
          } while (cVar1 != '\0');
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*(byte *)((int)piVar9 + 0x25));
      }
      iVar2 = thunk_EXT_FUN_80086390((int)uVar11,0xffffffff,piVar5,0xffffffff,1);
      if (iVar2 == 0) {
        piVar3 = piVar9 + 10;
        if (*(short *)((int)piVar9 + 0x26) == 0) {
          halt_baddata();
        }
        do {
          puVar10 = (uint *)*piVar3;
          uVar6 = *puVar10;
          if (uVar6 == auStack_3c[0]) {
            *puVar10 = param_4;
            thunk_EXT_FUN_80073850(puVar10,4);
            uVar4 = thunk_EXT_FUN_80080048(puVar10);
            thunk_EXT_FUN_8007f968(uVar4,4);
          }
          else {
            if ((auStack_3c[0] & 0x8000) != 0) {
              uVar6 = uVar6 - 1;
            }
            if ((uVar6 << 0x10 | (uint)*(ushort *)((int)puVar10 + 6)) == auStack_3c[0]) {
              FUN_000018f0(puVar10,param_4,0,0);
            }
          }
          iVar7 = iVar7 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar7 < (int)(uint)*(ushort *)((int)piVar9 + 0x26));
        halt_baddata();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00004f14 @ 00004f14 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004f14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00004f28 @ 00004f28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004f28(void)

{
  undefined2 *puVar1;
  char cVar3;
  int iVar2;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_30 [48];
  
  puVar1 = (undefined2 *)FUN_0000ead8();
  cVar3 = thunk_EXT_FUN_80092028(puVar1,auStack_30);
  if (cVar3 == '\0') {
    uVar4 = 0;
    puVar5 = (undefined4 *)&DAT_802037f8;
    do {
      iVar2 = thunk_EXT_FUN_80086390(*puVar5,0xffffffff,*(undefined4 *)(puVar1 + 2),*puVar1,0);
      if (iVar2 == 0) {
        halt_baddata();
      }
      uVar4 = uVar4 + 4;
      puVar5 = puVar5 + 1;
    } while (uVar4 < 0xc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00004f98 @ 00004f98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004f98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005058 @ 00005058 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005058(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000051b8 @ 000051b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000051b8(void)

{
  int iVar1;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  int unaff_r27;
  undefined4 unaff_r30;
  int unaff_r31;
  undefined4 *puVar2;
  short sStack00000050;
  undefined2 uStack00000052;
  undefined2 uStack00000054;
  
  uStack00000054 = (undefined2)unaff_r27;
  sStack00000050 = (short)*(undefined4 *)(unaff_r31 + 0xc0) + 0x30;
  uStack00000052 = 0x3a;
  iVar1 = FUN_00003e68(0,&stack0x00000050,0);
  if (iVar1 != 0) {
    thunk_EXT_FUN_80085ee8(0x80201a04,*(undefined4 *)(unaff_r31 + 0xc0));
  }
  *(undefined1 *)(unaff_r31 + 0x9c) = 1;
  FUN_0000f128(unaff_r30);
  thunk_EXT_FUN_80088fa0(unaff_r31 + 0x80);
  for (puVar2 = *(undefined4 **)(unaff_r31 + 800); puVar2 != (undefined4 *)(unaff_r31 + 800);
      puVar2 = (undefined4 *)*puVar2) {
    *(byte *)((int)puVar2 + -0x4e) = *(byte *)((int)puVar2 + -0x4e) | 0x80;
    if (((puVar2[-0x12] != 0) && ((~*(uint *)(puVar2[-0x12] + 8) & 1) == 1)) && (puVar2[-0x11] != 0)
       ) {
      puVar2[-0x11] = unaff_r27;
      FUN_0000f148();
    }
  }
  thunk_EXT_FUN_800890f8(unaff_r31 + 0x80);
  thunk_EXT_FUN_800643d8(unaff_r25);
  thunk_EXT_FUN_800718f8();
  if (unaff_r27 == 0) {
    FUN_0000f028(unaff_r26);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005310 @ 00005310 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005310(void)

{
  int unaff_r16;
  int unaff_r21;
  int unaff_r27;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(unaff_r21 + 0x48);
  thunk_EXT_FUN_80088fa0();
  if ((*(char *)(unaff_r27 + 8) == '\x01') || (*(char *)(unaff_r27 + 8) == '\x03')) {
    thunk_EXT_FUN_800642b8(unaff_r21 + 0x10);
  }
  else {
    thunk_EXT_FUN_800641d8(unaff_r21 + 0x10);
  }
  if (*(int *)(unaff_r16 + 0x28) != 0) {
    thunk_EXT_FUN_800643d8(unaff_r21 + 0x10);
    thunk_EXT_FUN_800890f8(unaff_r21 + 0x80);
    thunk_EXT_FUN_800643d8(unaff_r21 + 0x48);
    thunk_EXT_FUN_800718f8();
    *(undefined4 *)(unaff_r16 + 0x10) = 0xc000000d;
    thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000053c8 @ 000053c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000053c8(void)

{
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  int unaff_r16;
  undefined4 in_stack_00000090;
  
  thunk_EXT_FUN_800643d8(unaff_r15);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r14);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r16 + 0x10) = 0xc000026e;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000053d4 @ 000053d4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000053d4(void)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  int in_r11;
  undefined4 uVar4;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  int unaff_r16;
  uint unaff_r17;
  int unaff_r18;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  undefined4 unaff_r23;
  int unaff_r26;
  int iVar5;
  int unaff_r27;
  char *pcVar6;
  uint in_stack_00000060;
  char *in_stack_00000064;
  int in_stack_00000068;
  undefined4 in_stack_00000090;
  
  iVar1 = *(int *)(in_r11 + 8);
  if ((iVar1 == 0) || ((*(uint *)(iVar1 + 8) & 1) == 0)) {
    unaff_r18 = -0x3ffffff3;
    goto LAB_000055a4;
  }
  if ((*(uint *)(iVar1 + 8) & 0x10) == 0x10) {
    unaff_r18 = -0x3fffffaa;
    goto LAB_000055a4;
  }
  iVar1 = FUN_00008ae0(iVar1,unaff_r23);
  if (iVar1 == 0) {
    unaff_r18 = -0x3fffff66;
    goto LAB_000055a4;
  }
  cVar3 = FUN_00008c20(iVar1,&stack0x000000a0,&stack0x00000068,0x200);
  if (cVar3 == '\0') {
    thunk_EXT_FUN_80085ea0();
    iVar5 = -0x3ffffff3;
  }
  else if (in_stack_00000060 >> 0x10 == 0) {
    if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
      iVar5 = -0x3fffffde;
    }
    else if ((unaff_r20 == 1) || (unaff_r20 == 3)) {
      if ((unaff_r17 & 0x40) != 0x40) {
        pcVar6 = (char *)(iVar1 + 0x18);
        if (*(char *)(iVar1 + 0x18) == '\0') {
          thunk_EXT_FUN_8006bbd0();
          if (*pcVar6 == '\x01') {
            if ((*(uint *)(iVar1 + 8) & 1) == 1) {
              iVar5 = FUN_000091d0(iVar1 + 0x48,&stack0x000000a0);
            }
            else {
              uVar2 = FUN_000092f8(unaff_r20);
              iVar5 = FUN_00009358(iVar1 + 0x40,&stack0x000000a0,
                                   *(uint *)(unaff_r27 + 4) & 3 | uVar2 & 0xff);
            }
            if (iVar5 != 0) {
              thunk_EXT_FUN_8006bb38(unaff_r22,pcVar6);
              iVar5 = FUN_00009768(iVar5,0);
              goto LAB_00005594;
            }
            *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 4;
          }
        }
        else {
          iVar5 = thunk_EXT_FUN_8006b9d0
                            (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),
                             unaff_r22,pcVar6,1,0,in_stack_00000068 << 1,&stack0x000000a0);
          unaff_r26 = 0;
          if (iVar5 != 0) goto LAB_00005594;
        }
        if (((unaff_r20 == 0) || (unaff_r20 == 4)) || (unaff_r20 == 5)) {
          if (unaff_r26 == 0) {
            uVar4 = 3;
            goto LAB_00005b1c;
          }
          thunk_EXT_FUN_8006bb38(unaff_r22,pcVar6);
        }
        else {
          uVar4 = 1;
LAB_00005b1c:
          *(undefined4 *)(unaff_r16 + 0x14) = uVar4;
        }
        *(int *)(*(int *)(unaff_r27 + 0x18) + 8) = iVar1;
        *(int *)(*(int *)(unaff_r27 + 0x18) + 0xc) = unaff_r18;
        if ((unaff_r17 & 0x1000) == 0x1000) {
          *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x10;
        }
        iVar1 = *(int *)(unaff_r21 + 800);
        *(int *)(unaff_r22 + 0x54) = unaff_r21 + 800;
        *(int *)(unaff_r22 + 0x50) = iVar1;
        *(int *)(iVar1 + 4) = unaff_r22 + 0x50;
        *(int *)(unaff_r21 + 800) = unaff_r22 + 0x50;
        goto LAB_000055a4;
      }
      iVar5 = -0x3fffff46;
    }
    else {
      iVar5 = -0x3fffffcb;
    }
  }
  else {
    if (*in_stack_00000064 != '\\') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = -0x3fffffcd;
  }
LAB_00005594:
  unaff_r18 = iVar5;
  if (iVar1 != 0) {
    FUN_00008da0(iVar1);
  }
LAB_000055a4:
  thunk_EXT_FUN_800643d8(unaff_r15);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r14);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r16 + 0x10) = unaff_r18;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000054dc @ 000054dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000054dc(void)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  int unaff_r16;
  uint unaff_r17;
  int unaff_r18;
  char unaff_r19;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  undefined4 unaff_r23;
  int unaff_r24;
  undefined2 unaff_r25;
  int unaff_r26;
  int iVar6;
  int unaff_r27;
  undefined4 unaff_r28;
  char *pcVar7;
  int unaff_r31;
  short sStack00000060;
  char *in_stack_00000064;
  int in_stack_00000068;
  undefined2 uStack00000070;
  undefined2 in_stack_00000072;
  uint in_stack_00000078;
  undefined2 uStack00000080;
  undefined4 in_stack_00000084;
  int in_stack_00000088;
  undefined4 in_stack_00000090;
  byte in_stack_000002b0;
  
  FUN_0000f178(unaff_r31,0xff - in_stack_00000068,&stack0x00000078,in_stack_00000084,uStack00000080)
  ;
  uVar4 = in_stack_00000078 >> 1;
  uStack00000070 = (undefined2)in_stack_00000078;
  in_stack_00000072 = uStack00000070;
  in_stack_00000088 = FUN_00008cf0(unaff_r24,&stack0x00000070);
  iVar3 = unaff_r24;
  if (in_stack_00000088 == 0) {
    if ((sStack00000060 == 0) || (*in_stack_00000064 != '\\')) {
      FUN_0000f178(unaff_r31,0xff - (uVar4 + in_stack_00000068),&stack0x00000078,in_stack_00000084,
                   uStack00000080);
      uStack00000070 = (undefined2)in_stack_00000078;
      *(short *)(unaff_r31 + (in_stack_00000078 & 0xfffffffe)) = (short)unaff_r18;
      in_stack_00000072 = uStack00000070;
      thunk_EXT_FUN_8010d110(&stack0x000002a0,0,0x230);
      iVar6 = FUN_00008e58(&stack0x000000a0,&stack0x000002a0);
      thunk_EXT_FUN_80085ee8(0x80201aa4,&stack0x000000a0,iVar6);
      if (iVar6 == 4) {
        iVar6 = -0x3fffffcc;
        if (sStack00000060 != 0) goto LAB_0000558c;
        if ((*(uint *)(unaff_r24 + 8) & 0x10) == 0x10) goto LAB_0000582c;
        if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
          uVar5 = 5;
          goto LAB_00005930;
        }
        if ((unaff_r20 == 1) || (unaff_r20 == 4)) goto LAB_00005594;
        if ((unaff_r19 == '\x01') && ((unaff_r17 & 0x40) == 0x40)) goto LAB_00005878;
        iVar6 = FUN_00008fe8(unaff_r21,unaff_r16,unaff_r24,&stack0x000000a0,&stack0x00000070,
                             unaff_r23,unaff_r17 & 1,unaff_r20);
        if (iVar6 != 0) goto LAB_00005594;
        thunk_EXT_FUN_80085ee8(0x80201ad0,&stack0x000000a0);
        FUN_00008da0(unaff_r24);
        iVar3 = in_stack_00000088;
        thunk_EXT_FUN_8006bbd0
                  (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),unaff_r22,
                   in_stack_00000088 + 0x18);
        *(int *)(unaff_r22 + 8) = iVar3;
        *(int *)(unaff_r22 + 0xc) = unaff_r18;
        if (((unaff_r17 & 0x1000) == 0x1000) && ((unaff_r17 & 1) == 0)) {
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x10;
        }
        *(undefined4 *)(unaff_r16 + 0x14) = 2;
LAB_00005b58:
        iVar3 = *(int *)(unaff_r21 + 800);
        *(int *)(unaff_r22 + 0x54) = unaff_r21 + 800;
        *(int *)(unaff_r22 + 0x50) = iVar3;
        *(int *)(iVar3 + 4) = unaff_r22 + 0x50;
        *(int *)(unaff_r21 + 800) = unaff_r22 + 0x50;
        goto LAB_000055a4;
      }
      bVar2 = in_stack_000002b0 >> 4 & 1;
      if ((sStack00000060 == 0) || (bVar2 != 0)) {
        if ((sStack00000060 != 0) || ((*(byte *)(unaff_r27 + 2) & 4) != 4)) {
          iVar3 = FUN_00008f18(unaff_r21,unaff_r24,unaff_r23,bVar2,&stack0x00000070);
          in_stack_00000088 = iVar3;
          if (iVar3 != 0) {
            FUN_00008da0(unaff_r24);
            if (sStack00000060 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto LAB_000059d0;
          }
          goto LAB_00005940;
        }
        uVar5 = 4;
LAB_00005930:
        iVar6 = FUN_00009118(unaff_r21,unaff_r16,unaff_r24,uVar5);
      }
      else {
LAB_0000558c:
        iVar6 = -0x3fffffc6;
        iVar3 = unaff_r24;
      }
    }
    else {
LAB_00005878:
      iVar6 = -0x3fffffcd;
    }
  }
  else {
    iVar3 = FUN_00008ae0(in_stack_00000088,unaff_r23);
    if (iVar3 == 0) {
LAB_00005940:
      iVar6 = -0x3fffff66;
      iVar3 = unaff_r24;
      goto LAB_00005594;
    }
    thunk_EXT_FUN_80085ee8(unaff_r28,in_stack_00000084);
    puVar1 = (undefined2 *)(unaff_r31 + uVar4 * 2);
    *puVar1 = unaff_r25;
    puVar1[1] = (short)unaff_r18;
    FUN_00008da0(unaff_r24);
    unaff_r24 = iVar3;
    if (sStack00000060 != 0) {
      if ((~*(uint *)(iVar3 + 8) & 1) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0000558c;
    }
    iVar6 = *(int *)(iVar3 + 0x10);
    if (iVar6 != 0) {
      if ((*(uint *)(iVar6 + 8) & 8) == 8) {
LAB_0000582c:
        iVar6 = -0x3fffffaa;
        iVar3 = unaff_r24;
        goto LAB_00005594;
      }
      if (((~*(uint *)(iVar6 + 8) & 1) == 1) &&
         ((((*(uint *)(unaff_r27 + 4) & 0x10106) != 0 || (*(char *)(iVar6 + 0x1a) != '\0')) ||
          (*(char *)(iVar6 + 0x1b) != '\0')))) {
        iVar6 = -0x3fffffde;
        goto LAB_00005594;
      }
    }
    unaff_r26 = unaff_r18;
    if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
      unaff_r24 = *(int *)(iVar3 + 0xc);
      uVar5 = 4;
      goto LAB_00005930;
    }
LAB_000059d0:
    if ((*(uint *)(iVar3 + 8) & 1) == 1) {
      if ((unaff_r20 == 1) || (unaff_r20 == 3)) {
        if ((unaff_r17 & 0x40) == 0x40) {
          iVar6 = -0x3fffff46;
          goto LAB_00005594;
        }
LAB_00005a34:
        pcVar7 = (char *)(iVar3 + 0x18);
        if (*(char *)(iVar3 + 0x18) == '\0') {
          thunk_EXT_FUN_8006bbd0();
          if (*pcVar7 == '\x01') {
            if ((*(uint *)(iVar3 + 8) & 1) == 1) {
              iVar6 = FUN_000091d0(iVar3 + 0x48,&stack0x000000a0);
            }
            else {
              uVar4 = FUN_000092f8(unaff_r20);
              iVar6 = FUN_00009358(iVar3 + 0x40,&stack0x000000a0,
                                   *(uint *)(unaff_r27 + 4) & 3 | uVar4 & 0xff);
            }
            if (iVar6 != 0) {
              thunk_EXT_FUN_8006bb38(unaff_r22,pcVar7);
              iVar6 = FUN_00009768(iVar6,0);
              goto LAB_00005594;
            }
            *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 4;
          }
        }
        else {
          iVar6 = thunk_EXT_FUN_8006b9d0
                            (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),
                             unaff_r22,pcVar7,1);
          unaff_r26 = 0;
          if (iVar6 != 0) goto LAB_00005594;
        }
        if (((unaff_r20 == 0) || (unaff_r20 == 4)) || (unaff_r20 == 5)) {
          if (unaff_r26 == 0) {
            uVar5 = 3;
            goto LAB_00005b1c;
          }
          thunk_EXT_FUN_8006bb38(unaff_r22,pcVar7);
        }
        else {
          uVar5 = 1;
LAB_00005b1c:
          *(undefined4 *)(unaff_r16 + 0x14) = uVar5;
        }
        *(int *)(*(int *)(unaff_r27 + 0x18) + 8) = iVar3;
        *(int *)(*(int *)(unaff_r27 + 0x18) + 0xc) = unaff_r18;
        if ((unaff_r17 & 0x1000) == 0x1000) {
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x10;
        }
        goto LAB_00005b58;
      }
    }
    else if (unaff_r20 != 2) {
      if ((unaff_r19 != '\x01') && ((unaff_r17 & 1) != 1)) goto LAB_00005a34;
      iVar6 = -0x3ffffefd;
      goto LAB_00005594;
    }
    iVar6 = -0x3fffffcb;
  }
LAB_00005594:
  unaff_r18 = iVar6;
  if (iVar3 != 0) {
    FUN_00008da0(iVar3);
  }
LAB_000055a4:
  thunk_EXT_FUN_800643d8(unaff_r15);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r14);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r16 + 0x10) = unaff_r18;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000055dc @ 000055dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000055dc(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  int unaff_r16;
  uint unaff_r17;
  int unaff_r18;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  undefined4 unaff_r23;
  int iVar4;
  int iVar5;
  int unaff_r27;
  char *pcVar6;
  short sStack00000060;
  char *in_stack_00000064;
  undefined4 in_stack_00000090;
  undefined2 uStack000000a0;
  undefined2 uStack000000a2;
  
  if (*(char *)(unaff_r21 + 0x9c) != '\0') {
    iVar2 = -0x3ffffd92;
    goto LAB_000055a4;
  }
  if (sStack00000060 == 0) {
    if ((unaff_r20 != 1) && (unaff_r20 != 3)) {
      iVar2 = -0x3fffffde;
      goto LAB_000055a4;
    }
    if ((unaff_r17 & 1) == 1) {
      iVar2 = -0x3ffffefd;
      goto LAB_000055a4;
    }
    if ((unaff_r17 & 0x1000) == 0x1000) {
      iVar2 = -0x3ffffedf;
      goto LAB_000055a4;
    }
    if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
      iVar2 = -0x3ffffff3;
      goto LAB_000055a4;
    }
    *(byte *)(unaff_r22 + 2) = *(byte *)(unaff_r22 + 2) | 4;
    thunk_EXT_FUN_8006bbd0(*(undefined4 *)(unaff_r27 + 4),0,unaff_r22,&stack0x00000088);
    *(int *)(unaff_r22 + 8) = unaff_r18;
    *(int *)(unaff_r22 + 0xc) = unaff_r18;
    *(undefined4 *)(unaff_r16 + 0x14) = 1;
LAB_00005b58:
    iVar2 = *(int *)(unaff_r21 + 800);
    *(int *)(unaff_r22 + 0x54) = unaff_r21 + 800;
    *(int *)(unaff_r22 + 0x50) = iVar2;
    *(int *)(iVar2 + 4) = unaff_r22 + 0x50;
    *(int *)(unaff_r21 + 800) = unaff_r22 + 0x50;
    iVar2 = unaff_r18;
  }
  else {
    iVar4 = unaff_r21 + 0x330;
    FUN_00008ae0(iVar4,unaff_r23);
    if (*in_stack_00000064 == '\\') {
      if (sStack00000060 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
        iVar2 = -0x3ffffff3;
      }
      else {
        uStack000000a2 = (undefined2)unaff_r18;
        uStack000000a0 = 0x5c;
        if ((unaff_r20 == 1) || (unaff_r20 == 3)) {
          if ((unaff_r17 & 0x40) != 0x40) {
            pcVar6 = (char *)(unaff_r21 + 0x348);
            if (*(char *)(unaff_r21 + 0x348) == '\0') {
              thunk_EXT_FUN_8006bbd0();
              iVar5 = unaff_r18;
              if (*pcVar6 == '\x01') {
                if ((*(uint *)(unaff_r21 + 0x338) & 1) == 1) {
                  iVar2 = FUN_000091d0(unaff_r21 + 0x378,&stack0x000000a0);
                }
                else {
                  uVar1 = FUN_000092f8(unaff_r20);
                  iVar2 = FUN_00009358(unaff_r21 + 0x370,&stack0x000000a0,
                                       *(uint *)(unaff_r27 + 4) & 3 | uVar1 & 0xff);
                }
                if (iVar2 != 0) {
                  thunk_EXT_FUN_8006bb38(unaff_r22,pcVar6);
                  iVar2 = FUN_00009768(iVar2,0);
                  goto LAB_00005594;
                }
                *(uint *)(unaff_r21 + 0x338) = *(uint *)(unaff_r21 + 0x338) | 4;
              }
            }
            else {
              iVar2 = thunk_EXT_FUN_8006b9d0
                                (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),
                                 unaff_r22,pcVar6,1);
              iVar5 = 0;
              if (iVar2 != 0) goto LAB_00005594;
            }
            if (((unaff_r20 == 0) || (unaff_r20 == 4)) || (unaff_r20 == 5)) {
              if (iVar5 == 0) {
                uVar3 = 3;
                goto LAB_00005b1c;
              }
              thunk_EXT_FUN_8006bb38(unaff_r22,pcVar6);
            }
            else {
              uVar3 = 1;
LAB_00005b1c:
              *(undefined4 *)(unaff_r16 + 0x14) = uVar3;
            }
            *(int *)(*(int *)(unaff_r27 + 0x18) + 8) = iVar4;
            *(int *)(*(int *)(unaff_r27 + 0x18) + 0xc) = unaff_r18;
            if ((unaff_r17 & 0x1000) == 0x1000) {
              *(uint *)(unaff_r21 + 0x338) = *(uint *)(unaff_r21 + 0x338) | 0x10;
            }
            goto LAB_00005b58;
          }
          iVar2 = -0x3fffff46;
        }
        else {
          iVar2 = -0x3fffffcb;
        }
      }
    }
    else {
      iVar2 = -0x3fffffcd;
    }
LAB_00005594:
    if (iVar4 != 0) {
      FUN_00008da0(iVar4);
    }
  }
LAB_000055a4:
  thunk_EXT_FUN_800643d8(unaff_r15);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r14);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r16 + 0x10) = iVar2;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000056dc @ 000056dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000056dc(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  int unaff_r16;
  uint unaff_r17;
  int unaff_r18;
  char unaff_r19;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  undefined4 unaff_r23;
  int unaff_r24;
  int unaff_r26;
  int unaff_r27;
  char *pcVar6;
  int unaff_r31;
  short sStack00000060;
  char *in_stack_00000064;
  int in_stack_00000068;
  undefined2 uStack00000070;
  undefined2 uStack00000072;
  uint in_stack_00000078;
  undefined2 uStack00000080;
  undefined4 in_stack_00000084;
  int in_stack_00000088;
  undefined4 in_stack_00000090;
  byte in_stack_000002b0;
  
  if ((sStack00000060 != 0) && (*in_stack_00000064 == '\\')) {
LAB_00005878:
    iVar2 = -0x3fffffcd;
    goto LAB_00005594;
  }
  FUN_0000f178(unaff_r31,0xff - in_stack_00000068,&stack0x00000078,in_stack_00000084,uStack00000080)
  ;
  uStack00000070 = (undefined2)in_stack_00000078;
  *(short *)(unaff_r31 + (in_stack_00000078 & 0xfffffffe)) = (short)unaff_r18;
  uStack00000072 = uStack00000070;
  thunk_EXT_FUN_8010d110(&stack0x000002a0,0,0x230);
  iVar2 = FUN_00008e58(&stack0x000000a0,&stack0x000002a0);
  thunk_EXT_FUN_80085ee8(0x80201aa4,&stack0x000000a0,iVar2);
  if (iVar2 == 4) {
    iVar2 = -0x3fffffcc;
    if (sStack00000060 != 0) goto LAB_0000558c;
    if ((*(uint *)(unaff_r24 + 8) & 0x10) == 0x10) {
      iVar2 = -0x3fffffaa;
      goto LAB_00005594;
    }
    if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
      uVar5 = 5;
      goto LAB_0000592c;
    }
    if ((unaff_r20 == 1) || (unaff_r20 == 4)) goto LAB_00005594;
    if ((unaff_r19 == '\x01') && ((unaff_r17 & 0x40) == 0x40)) goto LAB_00005878;
    iVar2 = FUN_00008fe8(unaff_r21,unaff_r16,unaff_r24,&stack0x000000a0,&stack0x00000070,unaff_r23,
                         unaff_r17 & 1,unaff_r20);
    if (iVar2 != 0) goto LAB_00005594;
    thunk_EXT_FUN_80085ee8(0x80201ad0,&stack0x000000a0);
    FUN_00008da0(unaff_r24);
    iVar2 = in_stack_00000088;
    thunk_EXT_FUN_8006bbd0
              (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),unaff_r22,
               in_stack_00000088 + 0x18);
    *(int *)(unaff_r22 + 8) = iVar2;
    *(int *)(unaff_r22 + 0xc) = unaff_r18;
    if (((unaff_r17 & 0x1000) == 0x1000) && ((unaff_r17 & 1) == 0)) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x10;
    }
    *(undefined4 *)(unaff_r16 + 0x14) = 2;
LAB_00005b58:
    iVar2 = *(int *)(unaff_r21 + 800);
    *(int *)(unaff_r22 + 0x54) = unaff_r21 + 800;
    *(int *)(unaff_r22 + 0x50) = iVar2;
    *(int *)(iVar2 + 4) = unaff_r22 + 0x50;
    *(int *)(unaff_r21 + 800) = unaff_r22 + 0x50;
  }
  else {
    bVar1 = in_stack_000002b0 >> 4 & 1;
    if ((sStack00000060 == 0) || (bVar1 != 0)) {
      if ((sStack00000060 == 0) && ((*(byte *)(unaff_r27 + 2) & 4) == 4)) {
        uVar5 = 4;
LAB_0000592c:
        iVar2 = FUN_00009118(unaff_r21,unaff_r16,unaff_r24,uVar5);
      }
      else {
        iVar3 = FUN_00008f18(unaff_r21,unaff_r24,unaff_r23,bVar1,&stack0x00000070);
        in_stack_00000088 = iVar3;
        if (iVar3 == 0) {
          iVar2 = -0x3fffff66;
        }
        else {
          FUN_00008da0(unaff_r24);
          if (sStack00000060 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_r24 = iVar3;
          if ((*(uint *)(iVar3 + 8) & 1) == 1) {
            if ((unaff_r20 == 1) || (unaff_r20 == 3)) {
              if ((unaff_r17 & 0x40) == 0x40) {
                iVar2 = -0x3fffff46;
                goto LAB_00005594;
              }
LAB_00005a34:
              pcVar6 = (char *)(iVar3 + 0x18);
              if (*(char *)(iVar3 + 0x18) == '\0') {
                thunk_EXT_FUN_8006bbd0();
                if (*pcVar6 == '\x01') {
                  if ((*(uint *)(iVar3 + 8) & 1) == 1) {
                    iVar2 = FUN_000091d0(iVar3 + 0x48,&stack0x000000a0);
                  }
                  else {
                    uVar4 = FUN_000092f8(unaff_r20);
                    iVar2 = FUN_00009358(iVar3 + 0x40,&stack0x000000a0,
                                         *(uint *)(unaff_r27 + 4) & 3 | uVar4 & 0xff);
                  }
                  if (iVar2 != 0) {
                    thunk_EXT_FUN_8006bb38(unaff_r22,pcVar6);
                    iVar2 = FUN_00009768(iVar2,0);
                    goto LAB_00005594;
                  }
                  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 4;
                }
              }
              else {
                iVar2 = thunk_EXT_FUN_8006b9d0
                                  (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),
                                   unaff_r22,pcVar6,1);
                unaff_r26 = 0;
                if (iVar2 != 0) goto LAB_00005594;
              }
              if (((unaff_r20 == 0) || (unaff_r20 == 4)) || (unaff_r20 == 5)) {
                if (unaff_r26 == 0) {
                  uVar5 = 3;
                  goto LAB_00005b1c;
                }
                thunk_EXT_FUN_8006bb38(unaff_r22,pcVar6);
              }
              else {
                uVar5 = 1;
LAB_00005b1c:
                *(undefined4 *)(unaff_r16 + 0x14) = uVar5;
              }
              *(int *)(*(int *)(unaff_r27 + 0x18) + 8) = iVar3;
              *(int *)(*(int *)(unaff_r27 + 0x18) + 0xc) = unaff_r18;
              if ((unaff_r17 & 0x1000) == 0x1000) {
                *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x10;
              }
              goto LAB_00005b58;
            }
LAB_00005a10:
            iVar2 = -0x3fffffcb;
          }
          else {
            if (unaff_r20 == 2) goto LAB_00005a10;
            if ((unaff_r19 != '\x01') && ((unaff_r17 & 1) != 1)) goto LAB_00005a34;
            iVar2 = -0x3ffffefd;
          }
        }
      }
    }
    else {
LAB_0000558c:
      iVar2 = -0x3fffffc6;
    }
LAB_00005594:
    unaff_r18 = iVar2;
    if (unaff_r24 != 0) {
      FUN_00008da0(unaff_r24);
    }
  }
  thunk_EXT_FUN_800643d8(unaff_r15);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r14);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r16 + 0x10) = unaff_r18;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000594c @ 0000594c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000594c(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  int unaff_r16;
  uint unaff_r17;
  int unaff_r18;
  char unaff_r19;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  int unaff_r24;
  int iVar4;
  int unaff_r27;
  int unaff_r30;
  char *pcVar5;
  undefined4 in_stack_00000090;
  
  iVar2 = *(int *)(unaff_r30 + 0x10);
  if (iVar2 == 0) {
LAB_000059b0:
    if ((*(byte *)(unaff_r27 + 2) & 4) == 4) {
      iVar2 = FUN_00009118(unaff_r21,unaff_r16,*(undefined4 *)(unaff_r30 + 0xc),4);
    }
    else if ((*(uint *)(unaff_r30 + 8) & 1) == 1) {
      if ((unaff_r20 == 1) || (unaff_r20 == 3)) {
        if ((unaff_r17 & 0x40) == 0x40) {
          iVar2 = -0x3fffff46;
          goto LAB_00005594;
        }
LAB_00005a34:
        pcVar5 = (char *)(unaff_r24 + 0x18);
        if (*(char *)(unaff_r24 + 0x18) == '\0') {
          thunk_EXT_FUN_8006bbd0();
          iVar4 = unaff_r18;
          if (*pcVar5 == '\x01') {
            if ((*(uint *)(unaff_r24 + 8) & 1) == 1) {
              iVar2 = FUN_000091d0(unaff_r24 + 0x48,&stack0x000000a0);
            }
            else {
              uVar1 = FUN_000092f8(unaff_r20);
              iVar2 = FUN_00009358(unaff_r24 + 0x40,&stack0x000000a0,
                                   *(uint *)(unaff_r27 + 4) & 3 | uVar1 & 0xff);
            }
            if (iVar2 != 0) {
              thunk_EXT_FUN_8006bb38(unaff_r22,pcVar5);
              iVar2 = FUN_00009768(iVar2,0);
              goto LAB_00005594;
            }
            *(uint *)(unaff_r24 + 8) = *(uint *)(unaff_r24 + 8) | 4;
          }
        }
        else {
          iVar2 = thunk_EXT_FUN_8006b9d0
                            (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),
                             unaff_r22,pcVar5,1);
          iVar4 = 0;
          if (iVar2 != 0) goto LAB_00005594;
        }
        if (((unaff_r20 == 0) || (unaff_r20 == 4)) || (unaff_r20 == 5)) {
          if (iVar4 == 0) {
            uVar3 = 3;
            goto LAB_00005b1c;
          }
          thunk_EXT_FUN_8006bb38(unaff_r22,pcVar5);
        }
        else {
          uVar3 = 1;
LAB_00005b1c:
          *(undefined4 *)(unaff_r16 + 0x14) = uVar3;
        }
        *(int *)(*(int *)(unaff_r27 + 0x18) + 8) = unaff_r24;
        *(int *)(*(int *)(unaff_r27 + 0x18) + 0xc) = unaff_r18;
        if ((unaff_r17 & 0x1000) == 0x1000) {
          *(uint *)(unaff_r24 + 8) = *(uint *)(unaff_r24 + 8) | 0x10;
        }
        iVar2 = *(int *)(unaff_r21 + 800);
        *(int *)(unaff_r22 + 0x54) = unaff_r21 + 800;
        *(int *)(unaff_r22 + 0x50) = iVar2;
        *(int *)(iVar2 + 4) = unaff_r22 + 0x50;
        *(int *)(unaff_r21 + 800) = unaff_r22 + 0x50;
        goto LAB_000055a4;
      }
LAB_00005a10:
      iVar2 = -0x3fffffcb;
    }
    else {
      if (unaff_r20 == 2) goto LAB_00005a10;
      if ((unaff_r19 != '\x01') && ((unaff_r17 & 1) != 1)) goto LAB_00005a34;
      iVar2 = -0x3ffffefd;
    }
  }
  else if ((*(uint *)(iVar2 + 8) & 8) == 8) {
    iVar2 = -0x3fffffaa;
  }
  else {
    if (((~*(uint *)(iVar2 + 8) & 1) != 1) ||
       ((((*(uint *)(unaff_r27 + 4) & 0x10106) == 0 && (*(char *)(iVar2 + 0x1a) == '\0')) &&
        (*(char *)(iVar2 + 0x1b) == '\0')))) goto LAB_000059b0;
    iVar2 = -0x3fffffde;
  }
LAB_00005594:
  unaff_r18 = iVar2;
  if (unaff_r24 != 0) {
    FUN_00008da0(unaff_r24);
  }
LAB_000055a4:
  thunk_EXT_FUN_800643d8(unaff_r15);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r14);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r16 + 0x10) = unaff_r18;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005b88 @ 00005b88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005b88(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0000ead4();
  iVar1 = (int)uVar6;
  iVar4 = *(int *)((int)((ulonglong)uVar6 >> 0x20) + 0x18);
  iVar5 = *(int *)(*(int *)(iVar1 + 0x50) + 0x18);
  iVar3 = *(int *)(iVar5 + 8);
  thunk_EXT_FUN_800718e0();
  iVar4 = iVar4 + 0x80;
  thunk_EXT_FUN_80088fa0(iVar4);
  if (iVar3 != 0) {
    FUN_00008da0(iVar3);
  }
  iVar3 = *(int *)(iVar5 + 0x50);
  piVar2 = *(int **)(iVar5 + 0x54);
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  thunk_EXT_FUN_800890f8(iVar4);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(iVar1 + 0x10) = 0;
  thunk_EXT_FUN_8006ac20(iVar1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005c44 @ 00005c44 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005c44(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_r26;
  int unaff_r28;
  int unaff_r29;
  char *unaff_r30;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(unaff_r28 + 0x48);
  if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x80) == 0x80) {
    uVar2 = 0xc000026e;
  }
  else {
    cVar1 = *unaff_r30;
    if (unaff_r29 == 0) {
      if (cVar1 == '\x02') {
        thunk_EXT_FUN_800642b8();
      }
      else {
        thunk_EXT_FUN_800641d8(unaff_r28 + 0x10);
      }
      if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x10) != 0x10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (cVar1 == '\x03') {
        uVar2 = 0xc0000001;
        goto LAB_00005f2c;
      }
      if (cVar1 == '\x02') {
        thunk_EXT_FUN_800642b8();
      }
      else {
        thunk_EXT_FUN_800641d8(unaff_r28 + 0x10);
      }
      if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x10) != 0x10) {
        thunk_EXT_FUN_80088fa0(unaff_r29 + 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar2 = 0xc0000128;
    thunk_EXT_FUN_800643d8(unaff_r28 + 0x10);
  }
LAB_00005f2c:
  thunk_EXT_FUN_800643d8(unaff_r28 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r26 + 0x10) = uVar2;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005ccc @ 00005ccc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005ccc(void)

{
  char cVar1;
  undefined4 in_r6;
  uint uVar2;
  uint uVar3;
  int in_r10;
  uint in_r11;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  int unaff_r25;
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_r28;
  uint uVar4;
  int unaff_r30;
  int iVar5;
  
  uVar3 = *(uint *)(unaff_r30 + 4);
  uVar2 = uVar3;
  uVar4 = uVar3;
  if ((int)(in_r10 - in_r11) < (int)uVar3) {
    uVar4 = in_r10 - in_r11;
    uVar2 = in_r11;
  }
  cVar1 = *(char *)(*(int *)(unaff_r28 + 0xa0) + 0x1c);
  if (cVar1 == '\a') {
    iVar5 = *(int *)(unaff_r26 + 0x50);
    thunk_EXT_FUN_8010cc40(iVar5 + -0x24,iVar5,0x1c,in_r6,uVar2);
    *(char *)(iVar5 + -0x21) = (char)unaff_r27;
    *(uint *)(iVar5 + -0x20) = uVar4;
    unaff_r25 = FUN_0000f1c8(unaff_r26,*(undefined4 *)(unaff_r30 + 4));
    if (unaff_r25 == 0) {
      iVar5 = *(int *)(unaff_r26 + 0x50);
      *(undefined4 *)(iVar5 + -8) = 0x801f9810;
      *(undefined4 *)(iVar5 + -4) = unaff_r27;
      *(undefined1 *)(iVar5 + -0x21) = 0xe0;
      thunk_EXT_FUN_8006ab48(*(undefined4 *)(unaff_r28 + 0xa0),unaff_r26);
      thunk_EXT_FUN_800718f8();
      halt_baddata();
    }
  }
  else if (cVar1 == '-') {
    if (((((*(uint *)(unaff_r26 + 0x1c) & 1) == 0) && ((*(uint *)(unaff_r30 + 8) & 1) == 0)) &&
        ((uVar3 & 0x1ff) == 0)) && ((*(uint *)(unaff_r30 + 0x10) & 0x1ff) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_r26 + 0x10) = 0xc000000d;
    thunk_EXT_FUN_8006ac20(unaff_r26,0);
  }
  else {
    thunk_EXT_FUN_80085ee8(0x80201ae8);
    thunk_EXT_FUN_80085ea0();
    *(undefined4 *)(unaff_r26 + 0x10) = 0xc0000010;
  }
  thunk_EXT_FUN_800643d8(unaff_r24);
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r26 + 0x10) = unaff_r25;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005de8 @ 00005de8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005de8(void)

{
  int in_r11;
  undefined4 unaff_r23;
  undefined4 uVar1;
  int unaff_r26;
  int unaff_r28;
  int unaff_r29;
  int unaff_r30;
  
  if (in_r11 == 3) {
    uVar1 = 0xc0000001;
  }
  else {
    if (in_r11 == 2) {
      thunk_EXT_FUN_800642b8();
    }
    else {
      thunk_EXT_FUN_800641d8(unaff_r28 + 0x10);
    }
    if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x10) != 0x10) {
      thunk_EXT_FUN_80088fa0(unaff_r29 + 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0xc0000128;
    thunk_EXT_FUN_800643d8(unaff_r28 + 0x10);
  }
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r26 + 0x10) = uVar1;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005e68 @ 00005e68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005e68(void)

{
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  int unaff_r26;
  undefined4 unaff_r28;
  char *unaff_r30;
  int in_stack_00000050;
  
  if (*unaff_r30 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_EXT_FUN_80085ea0();
  if (in_stack_00000050 == 0) {
    if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_r26 + 0x14) = 0;
  }
  else {
    unaff_r25 = FUN_00009768(in_stack_00000050,0);
  }
  thunk_EXT_FUN_800890f8(unaff_r28);
  thunk_EXT_FUN_800643d8(unaff_r24);
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r26 + 0x10) = unaff_r25;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005e94 @ 00005e94 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005e94(void)

{
  uint in_r9;
  int in_r10;
  int iVar1;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  int unaff_r26;
  undefined4 unaff_r28;
  int unaff_r29;
  int unaff_r30;
  undefined4 in_stack_00000050;
  
  iVar1 = *(int *)(unaff_r30 + 4);
  if (in_r9 < (uint)(iVar1 + in_r10)) {
    iVar1 = in_r9 - in_r10;
  }
  iVar1 = FUN_00009b30(unaff_r29 + 0x40,*(undefined4 *)(unaff_r26 + 0x1c),iVar1,&stack0x00000050);
  if (iVar1 == 0) {
    if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_r26 + 0x14) = in_stack_00000050;
  }
  else {
    unaff_r25 = FUN_00009768(iVar1,0);
  }
  thunk_EXT_FUN_800890f8(unaff_r28);
  thunk_EXT_FUN_800643d8(unaff_r24);
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r26 + 0x10) = unaff_r25;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005ecc @ 00005ecc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005ecc(void)

{
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  int unaff_r26;
  undefined4 unaff_r28;
  int unaff_r30;
  int unaff_r31;
  undefined4 in_stack_00000050;
  
  thunk_EXT_FUN_80085ea0();
  if (unaff_r31 == 0) {
    if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_r26 + 0x14) = in_stack_00000050;
  }
  else {
    unaff_r25 = FUN_00009768(unaff_r31,0);
  }
  thunk_EXT_FUN_800890f8(unaff_r28);
  thunk_EXT_FUN_800643d8(unaff_r24);
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r26 + 0x10) = unaff_r25;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00005fb8 @ 00005fb8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005fb8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  int unaff_r29;
  int unaff_r30;
  int unaff_r31;
  
  thunk_EXT_FUN_8010d110(*(undefined4 *)(unaff_r31 + 0x1c),0,*(undefined4 *)(unaff_r30 + 4));
  *(int *)(unaff_r31 + 0x14) = unaff_r29;
  iVar1 = *(int *)(unaff_r30 + 8);
  if (iVar1 == 6) {
    if (7 < *(uint *)(unaff_r30 + 4)) {
      puVar3 = *(undefined4 **)(unaff_r31 + 0x1c);
      *puVar3 = unaff_r28;
      puVar3[1] = unaff_r27;
      *(undefined4 *)(unaff_r31 + 0x14) = 8;
      goto LAB_000060a0;
    }
  }
  else if (iVar1 == 0xe) {
    if (7 < *(uint *)(unaff_r30 + 4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (iVar1 == 0x13) {
    if (7 < *(uint *)(unaff_r30 + 4)) {
      unaff_r29 = FUN_00009ec0(unaff_r28,*(undefined4 *)(unaff_r30 + 0x18),
                               *(undefined4 *)(unaff_r31 + 0x1c));
      uVar2 = 8;
LAB_00006048:
      *(uint *)(unaff_r31 + 0x14) = -(uint)(unaff_r29 == 0) & uVar2;
      goto LAB_000060a0;
    }
  }
  else {
    if (iVar1 != 0x22) {
      unaff_r29 = -0x3ffffff3;
      goto LAB_000060a0;
    }
    if (0x37 < *(uint *)(unaff_r30 + 4)) {
      unaff_r29 = FUN_00009d60(*(undefined4 *)(unaff_r30 + 0x18),*(undefined4 *)(unaff_r31 + 0x1c));
      uVar2 = 0x38;
      goto LAB_00006048;
    }
  }
  unaff_r29 = -0x7ffffffb;
LAB_000060a0:
  thunk_EXT_FUN_800643d8(unaff_r25);
  thunk_EXT_FUN_800643d8(unaff_r26);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r31 + 0x10) = unaff_r29;
  thunk_EXT_FUN_8006ac20(unaff_r31,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000060d0 @ 000060d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000060d0(void)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_0000eab8();
  iVar4 = (int)uVar11;
  iVar10 = *(int *)(iVar4 + 0x50);
  iVar8 = *(int *)((int)((ulonglong)uVar11 >> 0x20) + 0x18);
  uVar7 = 0;
  bVar3 = false;
  iVar9 = *(int *)(*(int *)(iVar10 + 0x18) + 8);
  if (*(int *)(iVar10 + 8) == 0x18) {
    thunk_EXT_FUN_80085ea0();
    halt_baddata();
  }
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar8 + 0x48);
  bVar1 = *(int *)(iVar10 + 8) == 10;
  if (bVar1) {
    thunk_EXT_FUN_80088fa0(iVar8 + 0x80);
  }
  if ((iVar9 != 0) && ((*(uint *)(iVar9 + 8) & 3) == 0)) {
    thunk_EXT_FUN_80088fa0(iVar9 + 0x20);
    bVar3 = true;
  }
  thunk_EXT_FUN_800642b8(iVar8 + 0x10);
  bVar2 = *(byte *)(*(int *)(iVar10 + 0x18) + 2);
  if ((bVar2 & 0x80) == 0x80) {
    uVar7 = 0xc000026e;
    goto LAB_000061dc;
  }
  if ((bVar2 & 0x10) == 0x10) {
    uVar7 = 0xc0000128;
    goto LAB_000061dc;
  }
  iVar10 = *(int *)(iVar10 + 8);
  if (((iVar10 == 4) || (iVar10 == 10)) || (iVar10 == 0xd)) {
LAB_000061d8:
    thunk_EXT_FUN_80085ea0();
  }
  else {
    if (iVar10 == 0xe) {
      if ((bVar2 & 4) != 4) {
LAB_00006270:
        thunk_EXT_FUN_80088fa0(iVar9 + 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = *(uint *)(*(int *)(iVar4 + 0x1c) + 4);
      uVar6 = *(uint *)(*(int *)(iVar8 + 0xa0) + 0x20);
      trapWord(6,uVar6,0);
      if (uVar5 == (uVar5 / uVar6) * uVar6) goto LAB_00006270;
    }
    else if ((iVar10 == 0x13) || (iVar10 == 0x14)) goto LAB_000061d8;
    uVar7 = 0xc000000d;
  }
LAB_000061dc:
  thunk_EXT_FUN_800643d8(iVar8 + 0x10);
  if (bVar3) {
    thunk_EXT_FUN_800890f8(iVar9 + 0x20);
  }
  if (bVar1) {
    thunk_EXT_FUN_800890f8(iVar8 + 0x80);
  }
  thunk_EXT_FUN_800643d8(iVar8 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(iVar4 + 0x10) = uVar7;
  thunk_EXT_FUN_8006ac20(iVar4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000062c0 @ 000062c0 ==== */

undefined4 FUN_000062c0(void)

{
  thunk_EXT_FUN_80085ea0();
  return 0xc0000002;
}


/* ==== FUN_000062e8 @ 000062e8 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000062e8(void)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_0000eac4();
  iVar2 = (int)uVar11;
  iVar9 = *(int *)(iVar2 + 0x50);
  iVar10 = *(int *)((int)((ulonglong)uVar11 >> 0x20) + 0x18);
  uVar8 = 0;
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar10 + 0x48);
  thunk_EXT_FUN_800642b8(iVar10 + 0x10);
  if ((*(byte *)(*(int *)(iVar9 + 0x18) + 2) & 0x80) == 0x80) {
    uVar8 = 0xc000026e;
  }
  else {
    thunk_EXT_FUN_8010d110(*(undefined4 *)(iVar2 + 0x1c),0,*(undefined4 *)(iVar9 + 4));
    iVar5 = *(int *)(iVar9 + 8);
    if (iVar5 == 1) {
      *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8) = 0x11223344;
      *(undefined4 *)(iVar2 + 0x14) = 0x14;
    }
    else {
      if (iVar5 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar5 == 4) {
        puVar4 = *(uint **)(iVar2 + 0x1c);
        bVar1 = *(byte *)(*(int *)(iVar10 + 0xa0) + 0x1c);
        puVar4[1] = 0;
        *puVar4 = (uint)bVar1;
        *(undefined4 *)(iVar2 + 0x14) = 8;
      }
      else if (iVar5 == 5) {
        puVar6 = *(undefined4 **)(iVar2 + 0x1c);
        *puVar6 = 0;
        puVar6[1] = 0xff;
        puVar6[2] = 5;
        if (*(uint *)(iVar9 + 4) < 0x11) {
          *(undefined4 *)(iVar2 + 0x14) = 0xc;
          uVar8 = 0x80000005;
        }
        else {
          iVar9 = 5;
          puVar3 = (undefined1 *)((int)puVar6 + 0xb);
          puVar7 = (undefined1 *)(_DAT_80203d4c + -1);
          do {
            puVar7 = puVar7 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = *puVar7;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *(undefined4 *)(iVar2 + 0x14) = 0x11;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        uVar8 = 0xc000000d;
      }
    }
  }
  thunk_EXT_FUN_800643d8(iVar10 + 0x10);
  thunk_EXT_FUN_800643d8(iVar10 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(iVar2 + 0x10) = uVar8;
  thunk_EXT_FUN_8006ac20(iVar2,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000645c @ 0000645c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000645c(void)

{
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x14) = 0x18;
  thunk_EXT_FUN_800643d8(unaff_r24);
  thunk_EXT_FUN_800643d8(unaff_r25);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r31 + 0x10) = unaff_r26;
  thunk_EXT_FUN_8006ac20(unaff_r31,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006468 @ 00006468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006468(void)

{
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  int unaff_r31;
  
  *(undefined4 *)(*(int *)(unaff_r31 + 0x1c) + 8) = 0x11223344;
  *(undefined4 *)(unaff_r31 + 0x14) = 0x14;
  thunk_EXT_FUN_800643d8(unaff_r24);
  thunk_EXT_FUN_800643d8(unaff_r25);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r31 + 0x10) = unaff_r26;
  thunk_EXT_FUN_8006ac20(unaff_r31,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000064b0 @ 000064b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000064b0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 *local_2a0 [4];
  undefined1 auStack_290 [8];
  undefined2 local_288;
  undefined2 local_286;
  undefined2 local_284;
  undefined2 local_282;
  short local_264;
  short local_262 [305];
  
  uVar12 = FUN_0000eabc();
  iVar11 = (int)uVar12;
  iVar7 = *(int *)(iVar11 + 0x50);
  iVar10 = *(int *)((int)((ulonglong)uVar12 >> 0x20) + 0x18);
  bVar1 = false;
  iVar8 = *(int *)(*(int *)(iVar7 + 0x18) + 8);
  thunk_EXT_FUN_800718e0();
  iVar6 = iVar10 + 0x48;
  thunk_EXT_FUN_800642b8(iVar6);
  iVar10 = iVar10 + 0x10;
  thunk_EXT_FUN_800642b8(iVar10);
  if (iVar8 != 0) {
    if (((*(uint *)(iVar8 + 8) & 3) != 0) && ((*(uint *)(iVar8 + 8) & 4) != 0)) {
      iVar4 = *(int *)(iVar7 + 0x18);
      if ((*(byte *)(iVar4 + 2) & 0x80) == 0x80) {
        iVar4 = -0x3ffffd92;
      }
      else if ((*(byte *)(iVar4 + 2) & 0x10) == 0x10) {
        iVar4 = -0x3ffffed8;
      }
      else {
        local_2a0[0] = *(undefined4 **)(iVar4 + 0xc);
        if (local_2a0[0] == (undefined4 *)0x0) {
          iVar4 = FUN_00009fe8(iVar8 + 0x48,iVar4,*(undefined4 *)(iVar7 + 8),1,local_2a0);
          if (iVar4 != 0) {
            thunk_EXT_FUN_80085ee8(0x80201b28,iVar4);
            thunk_EXT_FUN_80085ea0();
            goto LAB_000067c8;
          }
          bVar1 = true;
          *(undefined4 **)(*(int *)(iVar7 + 0x18) + 0xc) = local_2a0[0];
        }
        puVar2 = local_2a0[0];
        if ((*(byte *)(iVar7 + 2) & 1) == 1) {
          FUN_0000a0e8(iVar8 + 0x48,0);
          *puVar2 = 0;
        }
        while( true ) {
          iVar7 = FUN_0000a0e8(puVar2 + 4,auStack_290);
          if (iVar7 != 0) {
            iVar4 = FUN_00009768(iVar7,0);
            goto LAB_000067c8;
          }
          if (local_264 == 0) break;
          uVar9 = 0;
          psVar5 = &local_264;
          do {
            if (0xfe < uVar9) break;
            psVar5 = psVar5 + 1;
            uVar9 = uVar9 + 1;
          } while (*psVar5 != 0);
          if ((puVar2[2] == 0) ||
             (cVar3 = thunk_EXT_FUN_8015bac8(puVar2 + 1,&local_264,uVar9 << 1,1), cVar3 != '\0')) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            FUN_0000a1d0(local_284,local_282,iVar11 + 8);
            FUN_0000a1d0(local_288,local_286,iVar11 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        if (bVar1) {
          iVar4 = -0x3ffffff1;
        }
        else {
          iVar4 = -0x7ffffffa;
        }
      }
      goto LAB_000067c8;
    }
  }
  iVar4 = -0x3ffffff3;
LAB_000067c8:
  thunk_EXT_FUN_800643d8(iVar10);
  thunk_EXT_FUN_800643d8(iVar6);
  thunk_EXT_FUN_800718f8();
  *(int *)(iVar11 + 0x10) = iVar4;
  thunk_EXT_FUN_8006ac20(iVar11,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006664 @ 00006664 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006664(void)

{
  uint in_r11;
  int unaff_r31;
  byte bStack00000070;
  
  if ((in_r11 & 1) == 1) {
    *(undefined4 *)(unaff_r31 + 0x38) = 1;
  }
  if ((bStack00000070 & 2) == 2) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 2;
  }
  if ((bStack00000070 & 4) == 4) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 4;
  }
  if ((bStack00000070 & 0x20) == 0x20) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 0x20;
  }
  if ((bStack00000070 & 0x10) == 0x10) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 0x10;
  }
  if (*(int *)(unaff_r31 + 0x38) == 0) {
    *(undefined4 *)(unaff_r31 + 0x38) = 0x80;
  }
  if ((~*(uint *)(unaff_r31 + 0x38) >> 4 & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006754 @ 00006754 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006754(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000675c @ 0000675c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000675c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  int unaff_r24;
  undefined4 unaff_r26;
  int unaff_r28;
  int *unaff_r29;
  int unaff_r30;
  int unaff_r31;
  
  uVar1 = FUN_0000f1f8(&stack0x0000008c,unaff_r30 << 1,1);
  uVar3 = *(int *)(unaff_r28 + 4) - 0x40;
  if (uVar3 < uVar1) {
    unaff_r26 = 0x80000005;
    uVar1 = uVar3;
  }
  iVar2 = FUN_0000f208(&stack0x0000008c,unaff_r30 << 1,1,unaff_r31 + 0x40,uVar1);
  *(int *)(unaff_r31 + 0x3c) = iVar2;
  *(int *)(unaff_r24 + 0x14) = iVar2 + 0x40;
  *unaff_r29 = *unaff_r29 + 1;
  thunk_EXT_FUN_800643d8(unaff_r22);
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r24 + 0x10) = unaff_r26;
  thunk_EXT_FUN_8006ac20(unaff_r24,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000067c0 @ 000067c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000067c0(void)

{
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  int unaff_r24;
  
  thunk_EXT_FUN_800643d8(unaff_r22);
  thunk_EXT_FUN_800643d8(unaff_r23);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(unaff_r24 + 0x10) = 0xc000000d;
  thunk_EXT_FUN_8006ac20(unaff_r24,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000067f8 @ 000067f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000067f8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000ead4();
  iVar1 = (int)uVar4;
  iVar3 = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x18);
  iVar2 = *(int *)(iVar1 + 0x50);
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar3 + 0x48);
  if ((*(byte *)(*(int *)(iVar2 + 0x18) + 2) & 0x80) == 0x80) {
    thunk_EXT_FUN_800643d8(iVar3 + 0x48);
    *(undefined4 *)(iVar1 + 0x10) = 0xc000026e;
  }
  else {
    thunk_EXT_FUN_800642b8(iVar3 + 0x10);
    iVar2 = *(int *)(iVar1 + 0x50);
    thunk_EXT_FUN_8010cc40(iVar2 + -0x24,iVar2,0x1c);
    *(undefined1 *)(iVar2 + -0x21) = 0;
    iVar2 = *(int *)(iVar1 + 0x50);
    *(undefined4 *)(iVar2 + -8) = 0x801f9810;
    *(undefined4 *)(iVar2 + -4) = 0;
    *(undefined1 *)(iVar2 + -0x21) = 0xe0;
    thunk_EXT_FUN_8006ab48(*(undefined4 *)(iVar3 + 0xa0),iVar1);
  }
  thunk_EXT_FUN_800718f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000068b0 @ 000068b0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000068b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_0000eac0();
  iVar3 = (int)uVar7;
  iVar5 = *(int *)((int)((ulonglong)uVar7 >> 0x20) + 0x18);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x50) + 0x18);
  iVar6 = *(int *)(iVar4 + 8);
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar5 + 0x48);
  if (iVar6 == 0) {
    thunk_EXT_FUN_800641d8(iVar5 + 0x10);
    *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
    thunk_EXT_FUN_800643d8(iVar5 + 0x10);
  }
  else {
    thunk_EXT_FUN_80088fa0(iVar5 + 0x80);
    if ((*(uint *)(iVar6 + 8) & 1) == 1) {
      thunk_EXT_FUN_800641d8(iVar5 + 0x10);
      if (((*(int *)(iVar6 + 0x14) == 1) && ((~(uint)*(byte *)(iVar4 + 2) >> 7 & 1) == 1)) &&
         ((*(uint *)(iVar6 + 8) & 4) == 4)) {
        thunk_EXT_FUN_80088fa0(iVar6 + 0x20);
        iVar1 = FUN_0000a250(iVar6 + 0x48);
        if (iVar1 != 0) {
          uVar2 = FUN_00009768(iVar1,0);
          thunk_EXT_FUN_80085ee8(0x80201b78,iVar1,uVar2,*(undefined4 *)(iVar6 + 0xa0),iVar6 + 0xa4);
          thunk_EXT_FUN_80085ea0();
        }
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xfffffffb;
        thunk_EXT_FUN_800890f8(iVar6 + 0x20);
        if ((*(uint *)(iVar6 + 8) & 0x10) == 0x10) {
          thunk_EXT_FUN_80085ea0();
        }
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        thunk_EXT_FUN_80064768();
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
      thunk_EXT_FUN_800643d8(iVar5 + 0x10);
    }
    else {
      if ((*(int *)(iVar6 + 0x14) == 1) && ((~(uint)*(byte *)(iVar4 + 2) >> 7 & 1) == 1)) {
        thunk_EXT_FUN_80088fa0(iVar6 + 0x20);
        iVar1 = FUN_0000a290(iVar6 + 0x40);
        if (iVar1 != 0) {
          uVar2 = FUN_00009768(iVar1,0);
          thunk_EXT_FUN_80085ee8(0x80201bc0,iVar1,uVar2,*(undefined4 *)(iVar6 + 0xa0),iVar6 + 0xa4);
        }
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xfffffffb;
        thunk_EXT_FUN_800890f8(iVar6 + 0x20);
        if ((*(uint *)(iVar6 + 8) & 0x10) == 0x10) {
          thunk_EXT_FUN_800641d8(iVar5 + 0x10);
          thunk_EXT_FUN_80085ea0();
          thunk_EXT_FUN_800643d8(iVar5 + 0x10);
        }
      }
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
    }
    thunk_EXT_FUN_8006bb38(iVar4,iVar6 + 0x18);
    thunk_EXT_FUN_800890f8(iVar5 + 0x80);
  }
  thunk_EXT_FUN_800643d8(iVar5 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)(iVar3 + 0x10) = 0;
  thunk_EXT_FUN_8006ac20(iVar3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006af0 @ 00006af0 ==== */

int FUN_00006af0(undefined4 *param_1)

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


/* ==== FUN_00006b68 @ 00006b68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006b68(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *extraout_r4;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  uint uStack_84;
  uint local_80 [32];
  
  FUN_0000eab4();
  *extraout_r4 = 0;
  lVar11 = FUN_00006af0();
  if ((-1 < lVar11) &&
     (pcVar10 = *(char **)((int)((ulonglong)lVar11 >> 0x20) * 4 + -0x7fdfcfcc),
     pcVar10 != (char *)0x0)) {
    *(undefined4 *)lVar11 = pcVar10;
    if ((*pcVar10 == '\0') || (uVar5 = FUN_0000a2e0(pcVar10[1]), (uVar5 & 1) != 0)) {
      *pcVar10 = '\0';
      uVar5 = FUN_0000a300(pcVar10[1]);
      if (((uVar5 & 1) == 0) && (((param_3 & 0xfe) == 0 || ((uVar5 & 4) == 0)))) {
        uVar5 = FUN_0000a320(pcVar10,0);
        if (uVar5 == 2) {
          if (pcVar10[0x216] == -0x12) {
            iVar6 = FUN_0000a4d8(pcVar10,1);
            if (iVar6 != 0) {
              halt_baddata();
            }
            iVar6 = FUN_0000a540(pcVar10 + 0x54);
            if (iVar6 == 0) {
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar7 = &uStack_84;
          pbVar8 = (byte *)(pcVar10 + 0x21a);
          iVar6 = 4;
          do {
            pbVar1 = pbVar8 + 3;
            pbVar2 = pbVar8 + 2;
            pbVar3 = pbVar8 + 1;
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 0x10;
            puVar7 = puVar7 + 1;
            *puVar7 = (uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 |
                      (uint)bVar4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          uVar9 = 0;
          puVar7 = local_80;
          do {
            if (*puVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            uVar5 = 3;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 < 4);
        }
        if ((uVar5 != 4) && (uVar5 < 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006c9c @ 00006c9c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006c9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006cc4 @ 00006cc4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006cc4(void)

{
  char cVar1;
  char cVar2;
  char *in_r8;
  char *in_r10;
  char *in_r11;
  int unaff_r27;
  uint unaff_r28;
  
  do {
    cVar1 = *in_r11;
    cVar2 = *in_r10;
    if (cVar1 != cVar2) break;
    in_r11 = in_r11 + 1;
    in_r10 = in_r10 + 1;
  } while (in_r11 != in_r8);
  if (cVar1 == cVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r28 <= unaff_r27 + 1U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006dac @ 00006dac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006dac(void)

{
  uint in_r11;
  int unaff_r28;
  int unaff_r31;
  
  do {
    if (*(char *)(unaff_r28 + in_r11) != '\0') break;
    in_r11 = in_r11 + 1;
  } while (in_r11 < 0x40);
  if (((0x3f < in_r11) &&
      (CONCAT11(*(undefined1 *)(unaff_r31 + 0xbd),*(undefined1 *)(unaff_r31 + 0xbc)) == 0x100)) &&
     (1 << (*(byte *)(unaff_r31 + 0xc0) & 0x3f) == 0x200)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006e64 @ 00006e64 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006e64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006e98 @ 00006e98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006e98(void)

{
  int iVar1;
  int unaff_r28;
  uint unaff_r29;
  uint unaff_r30;
  uint uVar2;
  int unaff_r31;
  
  while( true ) {
    if (unaff_r29 == 0) {
      if (*(ushort *)(unaff_r31 + 10) <= unaff_r30) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(unaff_r28 + unaff_r29) == -0x7f) break;
    unaff_r29 = unaff_r29 + 0x20 & 0x1ff;
  }
  iVar1 = unaff_r29 + unaff_r31;
  uVar2 = (uint)*(byte *)(iVar1 + 0x6b) << 0x18 | (uint)*(byte *)(iVar1 + 0x6a) << 0x10 |
          (uint)*(byte *)(iVar1 + 0x69) << 8 | (uint)*(byte *)(iVar1 + 0x68);
  if (uVar2 < 2) {
    halt_baddata();
  }
  if (*(uint *)(unaff_r31 + 0x18) <= uVar2) {
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006ed4 @ 00006ed4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006ed4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006ee8 @ 00006ee8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006f68 @ 00006f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006f68(void)

{
  byte *pbVar1;
  uint uVar2;
  short sVar3;
  int unaff_r20;
  undefined1 unaff_r21;
  uint unaff_r30;
  undefined1 *unaff_r31;
  
  pbVar1 = unaff_r31 + ((unaff_r30 & 0x7f) + 0x15) * 4;
  uVar2 = (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1;
  if (uVar2 == 0xffffffff) {
    unaff_r31[5] = unaff_r21;
    *(undefined4 *)(unaff_r31 + 0x14) = 0xffffffff;
    *(undefined4 *)(unaff_r31 + 0x10) = 0xffffffff;
    sVar3 = *(short *)(unaff_r20 + 0x28);
    *unaff_r31 = 4;
    sVar3 = sVar3 + 1;
    *(short *)(unaff_r20 + 0x28) = sVar3;
    *(short *)(unaff_r31 + 6) = sVar3;
  }
  else if (uVar2 == unaff_r30 + 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006f98 @ 00006f98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006f98(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int unaff_r20;
  undefined1 unaff_r21;
  uint unaff_r30;
  undefined1 *unaff_r31;
  
  iVar2 = FUN_0000a4d8(unaff_r31);
  if (iVar2 == 0) {
    pbVar1 = unaff_r31 + ((unaff_r30 & 0x7f) + 0x15) * 4;
    uVar3 = (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1
    ;
    if (uVar3 == 0xffffffff) {
      unaff_r31[5] = unaff_r21;
      *(undefined4 *)(unaff_r31 + 0x14) = 0xffffffff;
      *(undefined4 *)(unaff_r31 + 0x10) = 0xffffffff;
      sVar4 = *(short *)(unaff_r20 + 0x28);
      *unaff_r31 = 4;
      sVar4 = sVar4 + 1;
      *(short *)(unaff_r20 + 0x28) = sVar4;
      *(short *)(unaff_r31 + 6) = sVar4;
    }
    else if (uVar3 == unaff_r30 + 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00006fc0 @ 00006fc0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006fc0(void)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r21;
  int unaff_r22;
  int unaff_r31;
  
  if (CONCAT11(*(undefined1 *)(unaff_r31 + 0x60),*(undefined1 *)(unaff_r31 + 0x5f)) == 0x200) {
    uVar6 = (uint)CONCAT11(*(undefined1 *)(unaff_r31 + 0x6b),*(undefined1 *)(unaff_r31 + 0x6a));
    if (uVar6 == 0) {
      uVar6 = (uint)*(byte *)(unaff_r31 + 0x7b) << 0x18 | (uint)*(byte *)(unaff_r31 + 0x7a) << 0x10
              | (uint)*(byte *)(unaff_r31 + 0x79) << 8 | (uint)*(byte *)(unaff_r31 + 0x78);
    }
    uVar4 = (uint)*(byte *)(unaff_r31 + 100);
    *(uint *)(unaff_r31 + 0x1c) = uVar6;
    *(byte *)(unaff_r31 + 3) = *(byte *)(unaff_r31 + 100);
    if ((uVar4 == 1) || (uVar4 == 2)) {
      uVar5 = (uint)*(byte *)(unaff_r31 + 0x61);
      *(ushort *)(unaff_r31 + 10) = (ushort)*(byte *)(unaff_r31 + 0x61);
      if (uVar5 != 0) {
        if ((uVar5 - 1 & uVar5) == 0) {
          uVar2 = CONCAT11(*(undefined1 *)(unaff_r31 + 0x66),*(byte *)(unaff_r31 + 0x65));
          *(ushort *)(unaff_r31 + 8) = uVar2;
          if ((*(byte *)(unaff_r31 + 0x65) & 0xf) == 0) {
            uVar7 = (uint)CONCAT11(*(undefined1 *)(unaff_r31 + 0x68),
                                   *(undefined1 *)(unaff_r31 + 0x67));
            if (uVar7 == 0) {
              pbVar1 = (byte *)(unaff_r31 + unaff_r22);
              uVar7 = (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 |
                      (uint)*pbVar1;
            }
            uVar3 = (uint)CONCAT11(*(undefined1 *)(unaff_r31 + 99),*(undefined1 *)(unaff_r31 + 0x62)
                                  );
            if ((uVar3 != 0) && (uVar6 = (uVar2 >> 4) + uVar3 + uVar4 * uVar6, uVar6 <= uVar7)) {
              trapWord(6,uVar5,0);
              uVar5 = (uVar7 - uVar6) / uVar5;
              if (uVar5 != 0) {
                if (uVar5 < 0xffffff6) {
                  unaff_r21 = 3;
                }
                if (uVar5 < 0xfff6) {
                  unaff_r21 = 2;
                }
                if (uVar5 < 0xff6) {
                  unaff_r21 = 1;
                }
                if (unaff_r21 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000711c @ 0000711c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000711c(void)

{
  int unaff_r31;
  
  if (*(short *)(unaff_r31 + 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007144 @ 00007144 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007144(void)

{
  int iVar1;
  int in_r6;
  undefined1 in_r8;
  uint in_r11;
  short sVar2;
  int unaff_r20;
  undefined1 unaff_r21;
  int unaff_r30;
  undefined1 *unaff_r31;
  
  if ((in_r11 * 3 >> 1) + (in_r11 & 1) + 0x1ff >> 9 <= *(uint *)(unaff_r31 + 0x1c)) {
    unaff_r31[5] = in_r8;
    *(undefined4 *)(unaff_r31 + 0x14) = 0xffffffff;
    *(undefined4 *)(unaff_r31 + 0x10) = 0xffffffff;
    if ((((unaff_r30 == 3) && (CONCAT11(unaff_r31[0x85],unaff_r31[0x84]) == 1)) &&
        (iVar1 = FUN_0000a4d8(unaff_r31,in_r6 + 1), iVar1 == 0)) &&
       (((unaff_r31[5] = unaff_r21,
         ((uint)(byte)unaff_r31[0x57] << 0x18 | (uint)(byte)unaff_r31[0x56] << 0x10 |
          (uint)(byte)unaff_r31[0x55] << 8 | (uint)(byte)unaff_r31[0x54]) == 0x41615252 &&
         (((uint)(byte)unaff_r31[0x23b] << 0x18 | (uint)(byte)unaff_r31[0x23a] << 0x10 |
           (uint)(byte)unaff_r31[0x239] << 8 | (uint)(byte)unaff_r31[0x238]) == 0x61417272)) &&
        (((uint)(byte)unaff_r31[0x253] << 0x18 | (uint)(byte)unaff_r31[0x252] << 0x10 |
          (uint)(byte)unaff_r31[0x251] << 8 | (uint)(byte)unaff_r31[0x250]) == 0xaa550000)))) {
      *(uint *)(unaff_r31 + 0x14) =
           (uint)(byte)unaff_r31[0x23f] << 0x18 | (uint)(byte)unaff_r31[0x23e] << 0x10 |
           (uint)(byte)unaff_r31[0x23d] << 8 | (uint)(byte)unaff_r31[0x23c];
      *(uint *)(unaff_r31 + 0x10) =
           (uint)(byte)unaff_r31[0x243] << 0x18 | (uint)(byte)unaff_r31[0x242] << 0x10 |
           (uint)(byte)unaff_r31[0x241] << 8 | (uint)(byte)unaff_r31[0x240];
    }
    sVar2 = *(short *)(unaff_r20 + 0x28);
    *unaff_r31 = (char)unaff_r30;
    sVar2 = sVar2 + 1;
    *(short *)(unaff_r20 + 0x28) = sVar2;
    *(short *)(unaff_r31 + 6) = sVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007264 @ 00007264 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007264(void)

{
  int iVar1;
  char cVar2;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  do {
    iVar1 = thunk_EXT_FUN_80086390
                      (unaff_r28,0xffffffff,*(undefined4 *)(*(int *)(unaff_r31 + 4) + unaff_r29 + 8)
                       ,0xffffffff,1);
    if (iVar1 == 0) {
      cVar2 = FUN_00007730(unaff_r31,unaff_r30 * 0x14 + *(int *)(unaff_r31 + 4));
      if (cVar2 == '\0') {
        halt_baddata();
      }
      *(undefined1 *)(*(int *)(unaff_r31 + 0x18) + unaff_r30) = 1;
      halt_baddata();
    }
    unaff_r30 = unaff_r30 + 1;
    unaff_r29 = unaff_r29 + 0x14;
  } while (unaff_r30 < *(uint *)(unaff_r31 + 8));
  FUN_00007608(unaff_r31,unaff_r27);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000731c @ 0000731c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000731c(void)

{
  int iVar1;
  char cVar2;
  undefined4 unaff_r27;
  char unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  do {
    if ((*(char *)(*(int *)(unaff_r31 + 0x18) + unaff_r30) == '\0') &&
       (iVar1 = thunk_EXT_FUN_80086390
                          (unaff_r27,0xffffffff,*(undefined4 *)(unaff_r29 + *(int *)(unaff_r31 + 4))
                           ,0xffffffff,1), iVar1 == 0)) {
      cVar2 = FUN_00007730(unaff_r31,unaff_r29 + *(int *)(unaff_r31 + 4));
      if (cVar2 == '\0') {
        halt_baddata();
      }
      unaff_r28 = '\x01';
      *(undefined1 *)(*(int *)(unaff_r31 + 0x18) + unaff_r30) = 1;
    }
    unaff_r30 = unaff_r30 + 1;
    unaff_r29 = unaff_r29 + 0x14;
  } while (unaff_r30 < *(uint *)(unaff_r31 + 8));
  if (unaff_r28 == '\x01') {
    FUN_00007608(unaff_r31,0x80201cf4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000073c8 @ 000073c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000073c8(undefined4 param_1,undefined4 param_2,code *param_3,code *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  uint uVar5;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  undefined1 local_2f0;
  undefined1 auStack_2ef [126];
  undefined1 local_271;
  undefined1 local_270;
  undefined1 auStack_26f [623];
  
  uVar12 = FUN_0000eab0();
  iVar11 = (int)((ulonglong)uVar12 >> 0x20);
  pcVar7 = (code *)uVar12;
  local_2f0 = 0;
  thunk_EXT_FUN_8010d110(auStack_2ef,0,0x7f);
  local_270 = 0;
  thunk_EXT_FUN_8010d110(auStack_26f,0,0x1ff);
  if ((iVar11 != 0) &&
     ((local_300 = iVar11, pcVar7 == FUN_00000000 ||
      (cVar6 = (*pcVar7)(param_5,&local_2f0), cVar6 != '\0')))) {
    do {
      cVar6 = FUN_00007938(&local_300,&local_2f4,&local_2f8,&local_2fc);
      iVar4 = local_2f4;
      iVar3 = local_2f8;
      iVar2 = local_2fc;
      iVar1 = local_300;
      if (cVar6 == '\0') {
        halt_baddata();
      }
      if (local_2f4 == 0) {
        if ((local_2f8 == 0) ||
           (uVar8 = 0x80201d00, iVar9 = local_2f8, iVar10 = local_2fc, local_2fc == 0)) {
          iVar9 = local_300 - iVar11;
          if (iVar9 != 0) {
            if (*(char *)(iVar9 + iVar11 + -1) == '\n') {
              iVar9 = iVar9 + -1;
            }
            if ((iVar9 != 0) && (*(char *)(iVar9 + iVar11 + -1) == '\r')) {
              iVar9 = iVar9 + -1;
            }
          }
          uVar8 = 0x80201cf8;
          iVar10 = iVar11;
        }
        uVar5 = thunk_EXT_FUN_8010c7f8(&local_270,0x200,uVar8,iVar9,iVar10);
      }
      else {
        if ((param_3 != FUN_00000000) && (cVar6 = (*param_3)(param_5,&local_2f0), cVar6 == '\0')) {
          halt_baddata();
        }
        thunk_EXT_FUN_8010d1b0(&local_2f0,iVar4,0x80);
        local_271 = 0;
        uVar5 = thunk_EXT_FUN_8010c7f8(&local_270,0x200,0x80201d0c,&local_2f0);
      }
      if (((int)uVar5 < 0) || (0x1ff < uVar5)) {
        thunk_EXT_FUN_80085ee8(0x80201d18);
        halt_baddata();
      }
      cVar6 = (*param_4)(param_5,&local_270,uVar5,&local_2f0,iVar3,iVar2);
      if (cVar6 == '\0') {
        halt_baddata();
      }
      if (((iVar4 != 0) && (pcVar7 != FUN_00000000)) &&
         (cVar6 = (*pcVar7)(param_5,iVar4), cVar6 == '\0')) {
        halt_baddata();
      }
      iVar11 = iVar1;
    } while (iVar1 != 0);
    if (param_3 != FUN_00000000) {
      (*param_3)(param_5,&local_2f0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007608 @ 00007608 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007608(void)

{
  FUN_0000ead8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000765c @ 0000765c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000765c(void)

{
  int iVar1;
  undefined4 unaff_r29;
  char unaff_r30;
  int unaff_r31;
  int in_stack_00000058;
  undefined4 in_stack_0000009c;
  
  while( true ) {
    if (unaff_r30 == '\x01') {
      thunk_EXT_FUN_80085ee8(0x80201d80);
      halt_baddata();
    }
    iVar1 = thunk_EXT_FUN_8006cf00
                      (*(undefined4 *)(unaff_r31 + 0xc),0,0,0,&stack0x00000058,
                       *(undefined4 *)(unaff_r31 + 0x10),*(undefined4 *)(unaff_r31 + 0x14),0);
    if (iVar1 == 0x103) {
      iVar1 = thunk_EXT_FUN_8008b188(*(undefined4 *)(unaff_r31 + 0xc),1,0,0);
    }
    if ((iVar1 != 0) || (in_stack_00000058 < 0)) break;
    *(undefined4 *)(unaff_r31 + 0x14) = unaff_r29;
    unaff_r30 = '\x01';
    iVar1 = FUN_0000f218(*(int *)(unaff_r31 + 0x10) + *(int *)(unaff_r31 + 0x14),
                         0x400 - *(int *)(unaff_r31 + 0x14),in_stack_0000009c,&stack0x000000a0);
    if (-1 < iVar1) {
      *(int *)(unaff_r31 + 0x14) = *(int *)(unaff_r31 + 0x14) + iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  thunk_EXT_FUN_80085ee8(0x80201de0);
  halt_baddata();
}


/* ==== FUN_00007730 @ 00007730 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00007730(int *param_1,int param_2)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_20;
  undefined8 local_18;
  
  sVar2 = *(short *)(param_2 + 0xe);
  pfVar6 = (float *)(*(int *)(param_2 + 0x10) + *param_1);
  if (sVar2 == 0) {
    uVar5 = 0x80201e2c;
  }
  else if (sVar2 == 1) {
    pfVar6 = (float *)*pfVar6;
    uVar5 = 0x80201e38;
  }
  else {
    if (sVar2 != 2) {
      if (sVar2 != 3) {
        return 1;
      }
      uVar3 = *(ushort *)(param_2 + 0xc);
      iVar7 = 0;
      uVar8 = 0xc;
      local_20 = 0;
      iVar9 = 4;
      do {
        fVar1 = *pfVar6;
        if ((1 << (uVar8 & 0x3f) & (uint)uVar3) != 0) {
          fVar1 = fVar1 * _DAT_802013e0;
        }
        pfVar6 = pfVar6 + 1;
        uVar8 = uVar8 - 4;
        local_18 = (longlong)(fVar1 * _DAT_802013cc);
        *(undefined1 *)((int)&local_20 + iVar7) = (undefined1)local_18;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      cVar4 = FUN_00007608(param_1,0x80201e54,*(undefined4 *)(param_2 + 8),local_20._0_1_,
                           local_20._1_1_,local_20._2_1_,local_20 & 0xff);
      if (cVar4 != '\0') {
        return 1;
      }
      return 0;
    }
    if (*(char *)pfVar6 == '\0') {
      pfVar6 = (float *)0x80201e44;
    }
    else {
      pfVar6 = (float *)0x80201e4c;
    }
    uVar5 = 0x80201d00;
  }
  cVar4 = FUN_00007608(param_1,uVar5,*(undefined4 *)(param_2 + 8),pfVar6);
  if (cVar4 != '\0') {
    return 1;
  }
  return 0;
}


/* ==== FUN_00007878 @ 00007878 ==== */

uint FUN_00007878(char *param_1)

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
    uVar1 = *(uint *)((((int)cVar2 ^ uVar1) & 0xff) * 4 + -0x7fdfe190) ^ uVar1 >> 8;
    cVar2 = *param_1;
  }
  return ~uVar1;
}


/* ==== FUN_000078e0 @ 000078e0 ==== */

int FUN_000078e0(char *param_1)

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


/* ==== FUN_00007938 @ 00007938 ==== */

undefined4 FUN_00007938(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
LAB_00007ae0:
    if (cVar1 == '\r') goto LAB_00007ae8;
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
          while (cVar1 = FUN_0000a640(cVar1), cVar1 == '\x01') {
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
        goto LAB_00007b1c;
      }
      goto LAB_00007ae0;
    }
LAB_00007ae8:
    if (pcVar4[1] != '\n') {
      return 0;
    }
  }
  while (cVar1 != '\n') {
    if ((cVar1 == '\0') || (cVar1 == '\n')) {
      pcVar4 = (char *)0x0;
      goto LAB_00007b1c;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = pcVar4 + 1;
LAB_00007b1c:
  *param_1 = (int)pcVar4;
  return 1;
}


/* ==== FUN_00007bfc @ 00007bfc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007bfc(void)

{
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000074;
  
  thunk_EXT_FUN_8010d110(&stack0x00000064,0,0x18);
  in_stack_00000060 = 3;
  in_stack_00000074 = 0x801fa8d8;
  FUN_0000f268(&stack0x00000060,0x80203060);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007cd0 @ 00007cd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007cd0(void)

{
  int iVar1;
  char cVar2;
  int in_r11;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  char *pcVar3;
  undefined4 *unaff_r31;
  int in_stack_00000050;
  int in_stack_00000060;
  
  if ((((in_r11 != 10) ||
       (iVar1 = FUN_0000a958(unaff_r30,&stack0x00000060,0x3fc,&stack0x00000050), iVar1 == 0)) ||
      (in_stack_00000050 != 0x3fc)) || (in_stack_00000060 != 0)) {
    if (DAT_8020307c == '\x01') {
      DAT_8020307c = '\0';
    }
    else {
      iVar1 = FUN_000009c0();
      pcVar3 = (char *)(iVar1 + 0x29);
      if ((*pcVar3 != '\0') && (cVar2 = FUN_0000aa08(pcVar3), cVar2 != '\0')) {
        FUN_0000aac0(unaff_r29,pcVar3,1);
        *unaff_r31 = 3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007d88 @ 00007d88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007d88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007dc8 @ 00007dc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00007dc8(void)

{
  char cVar1;
  byte *pbVar2;
  byte *in_r6;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *in_r11;
  char *pcVar6;
  byte *pbVar7;
  int *unaff_r30;
  undefined4 *unaff_r31;
  
  do {
    cVar1 = *in_r11;
    in_r11 = in_r11 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0;
  pcVar6 = in_r11 + (-1 - (int)in_r6);
  if ((char *)*unaff_r31 != pcVar6) {
    do {
      pbVar7 = (byte *)(*unaff_r30 + uVar3);
      iVar4 = 0;
      if (pcVar6 != (char *)0x0) {
        pbVar2 = pbVar7 + (int)pcVar6;
        pbVar5 = in_r6;
        do {
          iVar4 = (uint)*pbVar7 - (uint)*pbVar5;
          if (iVar4 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar7 != pbVar2);
      }
    } while ((iVar4 != 0) && (uVar3 = uVar3 + 1, uVar3 < (uint)((int)*unaff_r31 - (int)pcVar6)));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00007e68 @ 00007e68 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007e68(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_100 [2];
  int local_f8 [2];
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined4 local_e8;
  undefined2 *local_e4;
  undefined4 local_e0;
  undefined1 local_d0;
  undefined1 auStack_cf [19];
  uint local_bc;
  undefined4 local_b0;
  undefined1 auStack_ac [40];
  uint local_84;
  undefined1 local_70;
  undefined1 auStack_6f [111];
  
  iVar1 = FUN_0000ead4();
  local_70 = 0;
  thunk_EXT_FUN_8010d110(auStack_6f,0,0x3f);
  local_f0 = 0;
  local_f8[0] = 0;
  local_100[0] = 0;
  local_b0 = 0;
  local_ee = 0;
  local_ec = 0;
  local_ea = 0;
  local_f8[1] = 0;
  thunk_EXT_FUN_8010d110(auStack_ac,0,0x34);
  local_d0 = 0;
  thunk_EXT_FUN_8010d110(auStack_cf,0,0x13);
  local_bc = 0;
  iVar2 = FUN_0000ab50(iVar1);
  if (iVar2 != 0) {
    if (*(int *)(iVar1 + 0x274) != 0) {
      halt_baddata();
    }
    iVar1 = 0;
    do {
      thunk_EXT_FUN_8010c7f8(&local_70,0x40,0x80202270,iVar1);
      thunk_EXT_FUN_80086110(&local_f0,&local_70);
      local_e8 = 0;
      local_e0 = 0x40;
      local_e4 = &local_f0;
      iVar2 = thunk_EXT_FUN_8006caa8(local_100,0x80100080,&local_e8,local_f8,0,0x80,1,1);
      if (iVar2 == 0) {
        iVar2 = thunk_EXT_FUN_8006d630(local_100[0],local_f8,&local_b0,0x38,0x22);
        if ((iVar2 == 0) && (0x17 < local_84)) {
          iVar2 = thunk_EXT_FUN_8006cec8(local_100[0],0,0,0,local_f8,&local_d0,0x18,0);
          if (iVar2 == 0x103) {
            iVar2 = thunk_EXT_FUN_8008b188(local_100[0],1,0,0);
          }
          if (((iVar2 == 0) && (-1 < local_f8[0])) && (0x10001dd < local_bc)) {
            uVar3 = thunk_EXT_FUN_80070138(0x80203078);
            DAT_80203070 = 1;
            _DAT_80203074 = local_bc;
            _DAT_80203fc8 = iVar1;
            thunk_EXT_FUN_8007018c(0x80203078,uVar3);
            break;
          }
        }
        thunk_EXT_FUN_80089eb0(local_100[0]);
        local_100[0] = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  if (local_100[0] != 0) {
    thunk_EXT_FUN_80089eb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008080 @ 00008080 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  
  uVar2 = FUN_0000eab8();
  local_74 = 0;
  local_80[0] = 0;
  local_78 = 0x4220004;
  iVar1 = thunk_EXT_FUN_816ba440(0x801fab68,0,&local_78,local_80);
  if (iVar1 == 0) {
    thunk_EXT_FUN_816ba660(local_80[0]);
    iVar1 = thunk_EXT_FUN_816b7c10(local_80[0]);
    thunk_EXT_FUN_816b7b80(local_80[0]);
    if (iVar1 == 0x534d5550) {
      thunk_EXT_FUN_80070138(0x80203078);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  FUN_0000ac10((int)((ulonglong)uVar2 >> 0x20),(int)uVar2,param_3,param_4,param_5,param_6,param_7,
               param_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008220 @ 00008220 ==== */

undefined4 FUN_00008220(void)

{
  undefined4 *in_r6;
  
  if (in_r6 != (undefined4 *)0x0) {
    *in_r6 = 0;
  }
  return 0;
}


/* ==== FUN_00008254 @ 00008254 ==== */

undefined4 FUN_00008254(void)

{
  undefined4 *in_r6;
  undefined4 *in_r7;
  undefined4 in_r11;
  
  *in_r6 = in_r11;
  if (in_r7 != (undefined4 *)0x0) {
    *in_r7 = 0;
  }
  return 0;
}


/* ==== FUN_00008294 @ 00008294 ==== */

undefined4 FUN_00008294(undefined4 param_1,undefined1 *param_2)

{
  int in_r11;
  undefined1 uVar1;
  
  if (in_r11 == 0x4c495645) {
    uVar1 = 3;
  }
  else {
    if (in_r11 != 0x50495253) {
      return 0x80070570;
    }
    uVar1 = 4;
  }
  *param_2 = uVar1;
  return 0;
}


/* ==== FUN_000082d8 @ 000082d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000082d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008364 @ 00008364 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008364(void)

{
  undefined4 uVar1;
  undefined4 *unaff_r30;
  int *unaff_r31;
  
  if (unaff_r30 != (undefined4 *)0x0) {
    uVar1 = 1;
    if (*unaff_r31 != 0xd0000) {
      uVar1 = 0xffffffff;
    }
    *unaff_r30 = uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000083b8 @ 000083b8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000083b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000084a0 @ 000084a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000084a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_0000ead8();
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  iVar2 = *(int *)(iVar1 + 0x58);
  iVar6 = *(int *)(*(int *)(iVar2 + 0x10) + 0x160);
  if (iVar6 != 0) {
    if (uVar5 < *(uint *)(iVar6 + 0x28)) {
      halt_baddata();
    }
    uVar4 = uVar5 - *(uint *)(iVar6 + 0x28);
    if (*(uint *)(iVar6 + 0x24) < uVar4) {
      halt_baddata();
    }
    *(int *)((uVar4 + 0xb) * 4 + iVar6) = param_3 - *(int *)(iVar1 + 0x1c);
  }
  piVar3 = (int *)FUN_0000ef68(iVar2,0xe10402);
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3 + *(int *)(iVar1 + 0x1c);
    uVar4 = (uint)*(byte *)(iVar2 + 0x13) << 0x18 | (uint)*(byte *)(iVar2 + 0x12) << 0x10 |
            (uint)*(byte *)(iVar2 + 0x11) << 8 | (uint)*(byte *)(iVar2 + 0x10);
    if ((uVar4 <= uVar5) &&
       (uVar5 = uVar5 - uVar4,
       uVar5 <= ((uint)*(byte *)(iVar2 + 0x17) << 0x18 | (uint)*(byte *)(iVar2 + 0x16) << 0x10 |
                 (uint)*(byte *)(iVar2 + 0x15) << 8 | (uint)*(byte *)(iVar2 + 0x14)))) {
      uVar4 = param_3 - *(int *)(iVar1 + 0x1c);
      *(uint *)(((uint)*(byte *)(iVar2 + 0x1f) << 0x18 | (uint)*(byte *)(iVar2 + 0x1e) << 0x10 |
                 (uint)*(byte *)(iVar2 + 0x1d) << 8 | (uint)*(byte *)(iVar2 + 0x1c)) + uVar5 * 4 +
               iVar2) =
           uVar4 * 0x1000000 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008598 @ 00008598 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008598(void)

{
  int iVar1;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  uint unaff_r29;
  undefined4 *unaff_r30;
  undefined4 unaff_r31;
  
  do {
    iVar1 = thunk_EXT_FUN_800864b0(unaff_r31,0xffffffff,*unaff_r30,0xffffffff,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0000f308(0x80202318,unaff_r31,unaff_r28,unaff_r27);
      if (iVar1 == 0) {
        halt_baddata();
      }
      break;
    }
    unaff_r29 = unaff_r29 + 4;
    unaff_r30 = unaff_r30 + 1;
  } while (unaff_r29 < 0x10);
  FUN_0000f308(unaff_r26,unaff_r31,unaff_r28,unaff_r27);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008608 @ 00008608 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008608(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000ead8();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if (*(int *)(iVar2 + 4) == 0x13) {
    thunk_EXT_FUN_817bd708(*(undefined4 *)(iVar1 + 8),0x802023ac,&DAT_80203290);
    thunk_EXT_FUN_817bd708(*(undefined4 *)(iVar1 + 8),0x802023cc,&DAT_80203288);
    FUN_0000ac40();
    FUN_0000ad20(_DAT_80203290,DAT_80203184);
    FUN_0000ad68(_DAT_80203290,0x80203188);
  }
  else if ((*(int *)(iVar2 + 4) == 0xe) && (piVar3 = *(int **)(iVar2 + 0x10), *piVar3 == 7)) {
    if (piVar3[1] == _DAT_80203290) {
      if (DAT_80203184 == '\x01') {
        iVar1 = FUN_000009c0();
        FUN_0000adc0(piVar3[1],iVar1 + 0x29,0x80203188);
        *(undefined4 *)(iVar2 + 8) = 1;
        halt_baddata();
      }
    }
    else if (piVar3[1] == _DAT_80203288) {
      FUN_0000af30(1);
    }
  }
  FUN_0000af40(iVar1,iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008710 @ 00008710 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008710(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000ead8();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  iVar3 = *(int *)(iVar1 + 4);
  if (iVar3 == 0x13) {
    _DAT_8020328c = 0;
    iVar1 = (*(code *)&SUB_913f81c0)(iVar2,*(undefined4 *)(iVar1 + 0x10),iVar1 + 8);
    if (iVar1 == 0) {
      thunk_EXT_FUN_817bd708(*(undefined4 *)(iVar2 + 0x10),0x802023e8,&DAT_8020328c);
    }
  }
  else if (iVar3 == 0x27) {
    (*(code *)&SUB_913f8218)(iVar2,*(undefined4 *)(iVar1 + 0x10),iVar1 + 8);
  }
  else if (((iVar3 == 0xe) && (**(int **)(iVar1 + 0x10) == 7)) &&
          (iVar2 = (*(int **)(iVar1 + 0x10))[1], iVar2 == _DAT_8020328c)) {
    FUN_0000adc0(iVar2,0x802022a0,0x80202410);
    *(undefined4 *)(iVar1 + 8) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000087f8 @ 000087f8 ==== */

undefined4 FUN_000087f8(int param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 - (int)param_2;
  while (((param_2[param_1] == 0xff || (*param_2 == 0xff)) || (*param_2 <= param_2[param_1]))) {
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
    if (3 < iVar1) {
      return 1;
    }
  }
  return 0;
}


/* ==== FUN_00008848 @ 00008848 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008848(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_0000ead4();
  pbVar4 = (byte *)((ulonglong)uVar11 >> 0x20);
  puVar6 = (undefined4 *)uVar11;
  uVar5 = 0;
  bVar3 = false;
  pbVar8 = pbVar4;
  do {
    pbVar7 = pbVar8;
    uVar10 = (uint)*pbVar7;
    pbVar8 = pbVar7 + 1;
  } while (uVar10 == 0x20);
  if ((uVar10 == 0x2d) || (uVar10 == 0x2b)) {
    bVar1 = *pbVar8;
    pbVar8 = pbVar7 + 2;
    uVar10 = (uint)(char)bVar1;
  }
  if ((((param_3 == 0) || (param_3 == 0x10)) && (uVar10 == 0x30)) &&
     ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    pbVar7 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    param_3 = 0x10;
    uVar10 = (uint)(char)*pbVar7;
  }
  if (param_3 == 0) {
    if (uVar10 == 0x30) {
      param_3 = 8;
      goto LAB_00008904;
    }
    param_3 = 10;
  }
  if (((int)param_3 < 2) || (0x24 < (int)param_3)) {
    if (puVar6 == (undefined4 *)0x0) {
      halt_baddata();
    }
    *puVar6 = pbVar4;
    halt_baddata();
  }
LAB_00008904:
  bVar2 = false;
  trapWord(6,param_3,0);
  trapWord(6,param_3,0);
  do {
    if (uVar10 - 0x30 < 10) {
      iVar9 = uVar10 - 0x30;
    }
    else {
      if ((((int)uVar10 < 0x61) || (0x7a < (int)uVar10)) &&
         (((int)uVar10 < 0x41 || (0x5a < (int)uVar10)))) {
LAB_000089d0:
        if (puVar6 != (undefined4 *)0x0) {
          pbVar8 = pbVar8 + -1;
          if (!bVar3) {
            pbVar8 = pbVar4;
          }
          *puVar6 = pbVar8;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((0x60 < (int)uVar10) && ((int)uVar10 < 0x7b)) {
        uVar10 = uVar10 - 0x20;
      }
      iVar9 = uVar10 - 0x37;
    }
    if ((int)param_3 <= iVar9) goto LAB_000089d0;
    bVar3 = true;
    if (!bVar2) {
      if ((0xffffffff / param_3 < uVar5) ||
         ((uVar5 == 0xffffffff / param_3 && ((int)(-1 - (0xffffffff / param_3) * param_3) < iVar9)))
         ) {
        bVar2 = true;
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = uVar5 * param_3 + iVar9;
      }
    }
    uVar10 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
}


/* ==== FUN_00008a08 @ 00008a08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008a08(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0000ead4();
  pcVar2 = (char *)((ulonglong)uVar6 >> 0x20);
  if (*pcVar2 == '\"') {
    pcVar2 = pcVar2 + 1;
  }
  cVar1 = *pcVar2;
  pcVar4 = pcVar2;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  if (pcVar4[-1] == '\"') {
    pcVar4[-1] = '\0';
  }
  iVar5 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    while ((cVar1 != '.' && (*pcVar4 != '\0'))) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if ((*pcVar4 == '\0') && (iVar5 != 3)) {
      halt_baddata();
    }
    *pcVar4 = '\0';
    if (*pcVar2 == '*') {
      *(undefined1 *)(iVar5 + (int)uVar6) = 0xff;
    }
    else {
      iVar3 = FUN_000078e0();
      if (0xff < iVar3) {
        halt_baddata();
      }
      *(char *)(iVar5 + (int)uVar6) = (char)iVar3;
    }
    iVar5 = iVar5 + 1;
    pcVar2 = pcVar4 + 1;
  } while (iVar5 < 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008ae0 @ 00008ae0 ==== */

void FUN_00008ae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_00008b2c @ 00008b2c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008b2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008b34 @ 00008b34 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00008b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008b34(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r27;
  undefined4 unaff_r28;
  int unaff_r29;
  int iVar3;
  
  iVar1 = FUN_0000af60(unaff_r29,unaff_r28);
  iVar3 = unaff_r29;
  if (iVar1 == 0) {
    do {
      iVar3 = *(int *)(iVar3 + 0xc);
      if ((*(uint *)(iVar3 + 8) & 2) == 2) {
        if (unaff_r27 != 1) {
          piVar2 = (int *)(iVar3 + -8);
          goto LAB_00008bdc;
        }
LAB_00008bd8:
        piVar2 = (int *)(iVar3 + 0x40);
LAB_00008bdc:
        iRam0000000c = iVar3;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        _FUN_00000000 = *piVar2;
        FUN_00000000 = piVar2;
        *(undefined4 *)(_FUN_00000000 + 4) = 0;
        *piVar2 = 0;
        halt_baddata();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = *(int *)(iVar3 + 0x10);
        goto LAB_00008bd8;
      }
      iVar1 = FUN_0000af60(iVar3,unaff_r28);
    } while (iVar1 == 0);
    if (iVar3 != unaff_r29) {
      FUN_00008da0(*(undefined4 *)(unaff_r29 + 0x10));
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008c04 @ 00008c04 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008c04(void)

{
  int unaff_r29;
  
  *(int *)(unaff_r29 + 0x14) = *(int *)(unaff_r29 + 0x14) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008c20 @ 00008c20 ==== */

void FUN_00008c20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_00008c58 @ 00008c58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008c58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008c60 @ 00008c60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008c60(void)

{
  uint unaff_r27;
  undefined2 *unaff_r28;
  int *unaff_r29;
  int iVar1;
  int unaff_r31;
  
  if ((*(uint *)(unaff_r31 + 8) & 2) == 2) {
    *unaff_r28 = 0x5c;
    unaff_r28[1] = 0;
    *unaff_r29 = *unaff_r29 + 1;
  }
  else {
    iVar1 = *unaff_r29;
    if (*(int *)(unaff_r31 + 0xa0) + iVar1 + 2U <= unaff_r27) {
      thunk_EXT_FUN_8010cc40(unaff_r28 + iVar1,unaff_r31 + 0xa4,*(int *)(unaff_r31 + 0xa0) << 1);
      iVar1 = *(int *)(unaff_r31 + 0xa0) + iVar1;
      unaff_r28[iVar1] = 0x5c;
      unaff_r28[iVar1 + 1] = 0;
      *unaff_r29 = iVar1 + 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008cf0 @ 00008cf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008cf0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_0000eacc();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  puVar5 = (undefined4 *)(iVar2 + 0x40);
  iVar4 = 0;
  do {
    uVar1 = (uint)(*(ushort *)uVar7 >> 1);
    for (puVar6 = (undefined4 *)*puVar5; puVar6 != puVar5; puVar6 = (undefined4 *)*puVar6) {
      if ((puVar6[0x28] == uVar1) &&
         (iVar3 = thunk_EXT_FUN_800864b0
                            (puVar6 + 0x29,puVar6[0x28],*(undefined4 *)((ushort *)uVar7 + 2),uVar1,1
                            ), iVar3 == 0)) {
        halt_baddata();
      }
    }
    if (iVar4 == 1) {
      halt_baddata();
    }
    if ((*(uint *)(iVar2 + 8) & 2) == 2) {
      puVar5 = (undefined4 *)(iVar2 + -8);
    }
    else {
      if (*(int *)(iVar2 + 0x10) == 0) {
        halt_baddata();
      }
      puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x10) + 0x40);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008da0 @ 00008da0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008da0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_0000ead4();
  while( true ) {
    iVar3 = piVar1[5];
    piVar1[5] = iVar3 + -1;
    if (iVar3 + -1 != 0) {
      halt_baddata();
    }
    if ((piVar1[2] & 2U) == 2) break;
    piVar4 = (int *)piVar1[3];
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
    }
    if (piVar1[4] != 0) {
      *(undefined4 *)(piVar1[4] + 0x10) = 0;
    }
    if ((piVar1[2] & 4U) == 4) {
      thunk_EXT_FUN_80085ee8(0x8020244c);
    }
    thunk_EXT_FUN_80085ee8(0x80202434,piVar1[0x28],piVar1 + 0x29);
    thunk_EXT_FUN_80064768(piVar1);
    piVar1 = piVar4;
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  halt_baddata();
}


/* ==== FUN_00008e58 @ 00008e58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008e58(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000014;
  int aiStack_80 [19];
  byte bStack_31;
  
  uVar4 = FUN_0000ead8();
  in_stack_00000014 = (undefined4)((ulonglong)uVar4 >> 0x20);
  iVar3 = (int)uVar4;
  iVar1 = FUN_00006b68(&stack0x00000014,aiStack_80,0);
  if (iVar1 == 0) {
    iVar2 = FUN_0000afe0(0x460);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(int *)(aiStack_80[0] + 0xc) = iVar2;
    *(int *)(aiStack_80[0] + 0x50) = iVar2 + 0x200;
    iVar1 = FUN_0000aff0(aiStack_80,in_stack_00000014);
    if (iVar1 == 0) {
      if ((bStack_31 & 0x80) == 0) {
        if (iVar3 != 0) {
          FUN_0000b108(aiStack_80,iVar3);
        }
      }
      else {
        iVar1 = 6;
      }
    }
    thunk_EXT_FUN_80064768(iVar2);
  }
  if ((iVar3 != 0) && (iVar1 != 0)) {
    *(undefined2 *)(iVar3 + 0x2c) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008f18 @ 00008f18 ==== */

void FUN_00008f18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_00008f58 @ 00008f58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008f58(void)

{
  int iVar1;
  int unaff_r27;
  char unaff_r28;
  ushort *unaff_r29;
  int unaff_r30;
  int *unaff_r31;
  
  unaff_r31[0x28] = (uint)(*unaff_r29 >> 1);
  thunk_EXT_FUN_8010cc40(unaff_r31 + 0x29,*(undefined4 *)(unaff_r29 + 2),*unaff_r29);
  unaff_r31[3] = unaff_r30;
  *(int *)(unaff_r30 + 0x14) = *(int *)(unaff_r30 + 0x14) + 1;
  if ((unaff_r28 == '\x01') || ((~*(uint *)(unaff_r30 + 8) >> 1 & 1) == 1)) {
    iVar1 = *(int *)(unaff_r30 + 0x40);
    unaff_r31[1] = unaff_r30 + 0x40;
    *unaff_r31 = iVar1;
    *(int **)(iVar1 + 4) = unaff_r31;
    *(int **)(unaff_r30 + 0x40) = unaff_r31;
  }
  else {
    iVar1 = *(int *)(unaff_r27 + 0x328);
    unaff_r31[1] = unaff_r27 + 0x328;
    *unaff_r31 = iVar1;
    *(int **)(iVar1 + 4) = unaff_r31;
    *(int **)(unaff_r27 + 0x328) = unaff_r31;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00008fe8 @ 00008fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008fe8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  byte in_stack_00000057;
  int *in_stack_0000005c;
  
  uVar4 = FUN_0000eacc();
  iVar1 = FUN_00008f18((int)((ulonglong)uVar4 >> 0x20),param_3,param_6,param_7);
  if (iVar1 == 0) {
    halt_baddata();
  }
  if ((param_7 & 0xff) == 1) {
    iVar2 = FUN_0000b5a0(param_4);
    if ((iVar2 == 0) && (iVar2 = FUN_000091d0(iVar1 + 0x48,param_4), iVar2 == 0)) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 4;
      goto LAB_00009068;
    }
  }
  else {
    bVar3 = FUN_000092f8(param_8);
    iVar2 = FUN_00009358(iVar1 + 0x40,param_4,in_stack_00000057 & 3 | bVar3);
    if (iVar2 == 0) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 4;
      if (*(int *)((int)uVar4 + 0x2c) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_00009068;
    }
  }
  iVar2 = FUN_00009768(iVar2,0);
  if (iVar2 != 0) {
    FUN_00008da0(iVar1);
    halt_baddata();
  }
LAB_00009068:
  *in_stack_0000005c = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000090e4 @ 000090e4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000090e4(void)

{
  int iVar1;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 *in_stack_000000ec;
  
  iVar1 = FUN_000098b0(unaff_r30,0);
  if ((iVar1 == 0) || (iVar1 = FUN_00009768(iVar1,0), iVar1 == 0)) {
    *in_stack_000000ec = unaff_r29;
  }
  else {
    FUN_00008da0(unaff_r29);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009118 @ 00009118 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009118(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000eacc();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar2 = *(int *)((int)uVar4 + 0x50);
  iVar3 = *(int *)(iVar2 + 0x18);
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x18) == '\0') {
      thunk_EXT_FUN_8006bbd0();
    }
    else {
      iVar2 = thunk_EXT_FUN_8006b9d0
                        (*(undefined4 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 0xe),iVar3,
                         param_3 + 0x18,1);
      if (iVar2 != 0) {
        halt_baddata();
      }
    }
    FUN_00008ae0(param_3,*(uint *)(param_3 + 8) >> 3 & 1);
    *(int *)(iVar3 + 8) = param_3;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)((int)uVar4 + 0x14) = param_4;
    iVar2 = *(int *)(iVar1 + 800);
    *(int *)(iVar3 + 0x54) = iVar1 + 800;
    *(int *)(iVar3 + 0x50) = iVar2;
    *(int *)(iVar2 + 4) = iVar3 + 0x50;
    *(int *)(iVar1 + 800) = iVar3 + 0x50;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000091d0 @ 000091d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000091d0(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 in_stack_0000001c;
  char *local_30 [12];
  
  uVar6 = FUN_0000ead4();
  puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  in_stack_0000001c = (undefined4)uVar6;
  if (puVar2 == (undefined4 *)0x0) {
    halt_baddata();
  }
  iVar3 = FUN_00006b68(&stack0x0000001c,local_30,0);
  if (iVar3 != 0) goto LAB_000092b0;
  *puVar2 = local_30[0];
  iVar3 = FUN_0000afe0(0x460);
  if (iVar3 == 0) {
    halt_baddata();
  }
  *(int *)(local_30[0] + 0xc) = iVar3;
  *(int *)(local_30[0] + 0x50) = iVar3 + 0x200;
  iVar4 = FUN_0000aff0(puVar2,in_stack_0000001c);
  if (iVar4 == 0) {
    if ((*(byte *)((int)puVar2 + 0x4f) & 0x80) == 0) {
      if ((*(byte *)((int)puVar2 + 6) & 0x10) == 0) {
        iVar4 = 5;
        goto LAB_00009294;
      }
      if (*local_30[0] == '\x04') {
        FUN_0000b818(puVar2,puVar2);
      }
      else {
        iVar4 = puVar2[0x10];
        uVar1 = CONCAT11(*(undefined1 *)(iVar4 + 0x1b),*(undefined1 *)(iVar4 + 0x1a));
        uVar5 = (uint)uVar1;
        if (*local_30[0] == '\x03') {
          uVar5 = CONCAT22(CONCAT11(*(undefined1 *)(iVar4 + 0x15),*(undefined1 *)(iVar4 + 0x14)),
                           uVar1);
        }
        puVar2[2] = uVar5;
      }
    }
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(local_30[0] + 6);
    iVar4 = FUN_0000b888(puVar2,0);
  }
LAB_00009294:
  thunk_EXT_FUN_80064768(iVar3);
  if (iVar4 == 4) {
    iVar4 = 5;
  }
  if (iVar4 == 0) {
    halt_baddata();
  }
LAB_000092b0:
  *puVar2 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000092f8 @ 000092f8 ==== */

undefined4 FUN_000092f8(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
LAB_00009344:
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
        if (param_1 == 5) goto LAB_00009344;
        thunk_EXT_FUN_80085ea0();
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_00009358 @ 00009358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009358(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 in_stack_0000001c;
  char *local_d0 [4];
  char *local_c0;
  byte local_ba;
  int local_80;
  byte local_71;
  
  uVar6 = FUN_0000eab8();
  piVar2 = (int *)((ulonglong)uVar6 >> 0x20);
  in_stack_0000001c = (undefined4)uVar6;
  if (piVar2 == (int *)0x0) {
    halt_baddata();
  }
  uVar5 = param_3 & 0x3f;
  iVar3 = FUN_00006b68(&stack0x0000001c,local_d0,uVar5);
  if (iVar3 != 0) goto LAB_00009754;
  *piVar2 = (int)local_d0[0];
  local_c0 = local_d0[0];
  iVar3 = FUN_0000afe0(0x460);
  if (iVar3 == 0) {
    halt_baddata();
  }
  *(int *)(local_d0[0] + 0xc) = iVar3;
  *(int *)(local_d0[0] + 0x50) = iVar3 + 0x200;
  iVar4 = FUN_0000aff0(&local_c0,in_stack_0000001c);
  if ((iVar4 == 0) && ((local_71 & 0x80) != 0)) {
    iVar4 = 6;
  }
  if ((param_3 & 0x1c) == 0) {
    if (iVar4 == 0) {
      if ((local_ba & 0x10) == 0) {
        if ((param_3 & 2) == 0) {
          halt_baddata();
        }
        if ((local_ba & 1) == 0) {
          halt_baddata();
        }
        iVar4 = 7;
      }
      else {
        iVar4 = 4;
      }
    }
  }
  else {
    if (iVar4 == 0) {
      if ((param_3 & 4) != 0) {
        iVar4 = 8;
        goto LAB_00009744;
      }
      if ((local_ba & 0x11) == 0) goto LAB_00009458;
      iVar4 = 7;
    }
    else {
      if (iVar4 == 4) {
        iVar4 = FUN_0000b9c8(&local_c0);
      }
      uVar5 = uVar5 | 8;
    }
    if (iVar4 == 0) {
LAB_00009458:
      if ((uVar5 & 8) != 0) {
        uVar5 = FUN_0000bde0();
        if (*local_d0[0] == '\x04') {
          iVar3 = *(int *)(*piVar2 + 0x50);
          piVar2[2] = (uint)*(byte *)(iVar3 + 0x37) << 0x18 | (uint)*(byte *)(iVar3 + 0x36) << 0x10
                      | (uint)*(byte *)(iVar3 + 0x35) << 8 | (uint)*(byte *)(iVar3 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(uint *)(local_80 + 0xe) =
             uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
        *(uint *)(local_80 + 0x16) =
             uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
        uVar1 = CONCAT11(*(undefined1 *)(local_80 + 0x1b),*(undefined1 *)(local_80 + 0x1a));
        uVar5 = (uint)uVar1;
        if (*local_d0[0] == '\x03') {
          uVar5 = CONCAT22(CONCAT11(*(undefined1 *)(local_80 + 0x15),
                                    *(undefined1 *)(local_80 + 0x14)),uVar1);
        }
        *(undefined1 *)(local_80 + 0xb) = 0x20;
        *(undefined2 *)(local_80 + 0x1a) = 0;
        if (*local_d0[0] == '\x03') {
          *(undefined2 *)(local_80 + 0x14) = 0;
        }
        *(undefined4 *)(local_80 + 0x1c) = 0;
        local_d0[0][4] = '\x01';
        if (uVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
LAB_00009744:
  thunk_EXT_FUN_80064768(iVar3);
  if (iVar4 == 0) {
    halt_baddata();
  }
LAB_00009754:
  *piVar2 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000095c4 @ 000095c4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000095c4(int param_1)

{
  undefined4 in_r11;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 *unaff_r29;
  int unaff_r31;
  
  *(undefined4 *)(unaff_r31 + 0x10) = in_r11;
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_EXT_FUN_80064768(unaff_r21);
  if (param_1 != 0) {
    *unaff_r29 = unaff_r22;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000095d0 @ 000095d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000095d0(void)

{
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  uint unaff_r26;
  int unaff_r27;
  undefined4 *unaff_r29;
  byte in_cr6;
  uint in_stack_00000064;
  
  if ((bool)(in_cr6 >> 1 & 1)) {
    if ((in_stack_00000064 & 0x1000) == 0) {
      if (((unaff_r26 & 2) == 0) || ((in_stack_00000064 & 0x100) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_r27 = 7;
    }
    else {
      unaff_r27 = 4;
    }
  }
  thunk_EXT_FUN_80064768(unaff_r21);
  if (unaff_r27 != 0) {
    *unaff_r29 = unaff_r22;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009618 @ 00009618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009640 @ 00009640 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009640(void)

{
  ushort uVar1;
  int in_r10;
  uint uVar2;
  int in_r11;
  int unaff_r24;
  int unaff_r29;
  
  uVar1 = CONCAT11(*(undefined1 *)(in_r11 + 0x1b),*(undefined1 *)(in_r11 + 0x1a));
  uVar2 = (uint)uVar1;
  if (in_r10 == 3) {
    uVar2 = CONCAT22(CONCAT11(((undefined1 *)(in_r11 + unaff_r24))[1],
                              *(undefined1 *)(in_r11 + unaff_r24)),uVar1);
  }
  *(uint *)(unaff_r29 + 8) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000966c @ 0000966c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000966c(void)

{
  undefined1 unaff_r22;
  undefined1 unaff_r25;
  int unaff_r29;
  
  *(undefined1 *)(unaff_r29 + 0x30) = unaff_r25;
  *(undefined1 *)(unaff_r29 + 0x31) = unaff_r22;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000096ac @ 000096ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000096ac(undefined4 param_1,uint param_2)

{
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  int unaff_r23;
  int unaff_r27;
  uint unaff_r28;
  undefined4 *unaff_r29;
  uint unaff_r30;
  
  do {
    if (unaff_r28 <= unaff_r30) break;
    param_2 = FUN_0000c140(unaff_r29);
    if (param_2 < 2) {
      unaff_r27 = 2;
    }
    if (param_2 == 0xffffffff) {
      unaff_r27 = unaff_r23;
    }
    unaff_r28 = unaff_r28 - unaff_r30;
  } while (unaff_r27 == 0);
  unaff_r29[0x10] = param_2;
  if (unaff_r27 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_EXT_FUN_80064768(unaff_r21);
  if (unaff_r27 != 0) {
    *unaff_r29 = unaff_r22;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000972c @ 0000972c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000972c(void)

{
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 *unaff_r29;
  
  thunk_EXT_FUN_80064768(unaff_r21);
  *unaff_r29 = unaff_r22;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009734 @ 00009734 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009734(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009768 @ 00009768 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009768(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0000ead8();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  uVar2 = 0;
  if (iVar1 == 4) {
    uVar2 = 5;
  }
  else if (iVar1 == 5) {
    uVar2 = 5;
  }
  else if (iVar1 == 6) {
    uVar2 = 5;
  }
  else if (iVar1 == 8) {
    uVar2 = 4;
  }
  else {
    thunk_EXT_FUN_80085ee8(0x80202474,iVar1);
    thunk_EXT_FUN_80085ea0();
  }
  if ((undefined4 *)uVar3 != (undefined4 *)0x0) {
    *(undefined4 *)uVar3 = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009810 @ 00009810 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009844 @ 00009844 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009844(undefined4 param_1,int param_2)

{
  char *in_r10;
  int unaff_r31;
  
  if ((((*in_r10 == '\x02') || (*in_r10 == '\x03')) && (*(int *)(param_2 + 0x10) == 0)) &&
     ((*(byte *)(*(int *)(in_r10 + 0x18) + 2) & 1) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_EXT_FUN_800643d8(unaff_r31 + 0x10);
  thunk_EXT_FUN_800643d8(unaff_r31 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000098b0 @ 000098b0 ==== */

void FUN_000098b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_00009908 @ 00009908 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009908(void)

{
  char *unaff_r28;
  
  if (*unaff_r28 != '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000992c @ 0000992c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000992c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009948 @ 00009948 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000099ac @ 000099ac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000099ac(void)

{
  int iVar1;
  undefined1 uVar2;
  int unaff_r31;
  
  iVar1 = *(int *)(unaff_r31 + 8);
  if (iVar1 != 0) {
LAB_000099f4:
    *(int *)(unaff_r31 + 0x40) = iVar1;
    if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = FUN_0000c440(unaff_r31,0);
  if (iVar1 == 1) {
    uVar2 = 2;
  }
  else {
    if (iVar1 != -1) {
      *(int *)(unaff_r31 + 8) = iVar1;
      goto LAB_000099f4;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_r31 + 0x31) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009a08 @ 00009a08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009a08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009a40 @ 00009a40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009a40(undefined4 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int unaff_r28;
  uint unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  uVar1 = FUN_0000c440(unaff_r31,param_1);
  if (uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 == 0xffffffff) {
    uVar2 = 1;
  }
  else {
    if ((1 < uVar1) && (uVar1 < *(uint *)(unaff_r28 + 0x18))) {
      *(uint *)(unaff_r31 + 0x40) = uVar1;
      if (unaff_r30 <= unaff_r29) {
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = 2;
  }
  *(undefined1 *)(unaff_r31 + 0x31) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009a58 @ 00009a58 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009a58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009aac @ 00009aac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009aac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009acc @ 00009acc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009acc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009ae8 @ 00009ae8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009ae8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009af4 @ 00009af4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009af4(undefined4 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int unaff_r28;
  uint unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  uVar1 = FUN_0000c140(unaff_r31,param_1);
  if (uVar1 == 0xffffffff) {
    uVar2 = 1;
  }
  else {
    if ((1 < uVar1) && (uVar1 < *(uint *)(unaff_r28 + 0x18))) {
      *(uint *)(unaff_r31 + 0x40) = uVar1;
      if (unaff_r30 <= unaff_r29) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = 2;
  }
  *(undefined1 *)(unaff_r31 + 0x31) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009b30 @ 00009b30 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009b30(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_r6;
  undefined1 auStack_50 [80];
  
  iVar1 = FUN_0000eac4();
  *in_r6 = 0;
  iVar2 = FUN_0000c350(iVar1,auStack_50);
  if (((iVar2 == 0) && (*(char *)(iVar1 + 0x31) == '\0')) && ((*(byte *)(iVar1 + 0x30) & 1) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009b84 @ 00009b84 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009b84(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009ba0 @ 00009ba0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009ba0(void)

{
  int unaff_r26;
  
  if (unaff_r26 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009bac @ 00009bac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009bac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009be4 @ 00009be4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009be4(void)

{
  uint uVar1;
  undefined1 uVar2;
  int unaff_r28;
  int unaff_r30;
  
  uVar1 = FUN_0000c140(unaff_r30,*(undefined4 *)(unaff_r30 + 0x40));
  if (1 < uVar1) {
    if (uVar1 == 0xffffffff) {
      uVar2 = 1;
      goto LAB_00009d4c;
    }
    *(uint *)(unaff_r30 + 0x40) = uVar1;
    if (*(int *)(unaff_r30 + 0x40) - 2U < *(int *)(unaff_r28 + 0x18) - 2U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar2 = 2;
LAB_00009d4c:
  *(undefined1 *)(unaff_r30 + 0x31) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009c60 @ 00009c60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009c60(void)

{
  int iVar1;
  undefined4 unaff_r25;
  int unaff_r28;
  undefined4 unaff_r29;
  int unaff_r30;
  undefined4 unaff_r31;
  
  iVar1 = FUN_0000c710(*(undefined1 *)(unaff_r28 + 1),unaff_r25,unaff_r29,unaff_r31);
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_r30 + 0x31) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(unaff_r28 + 4) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009cc4 @ 00009cc4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009cc4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009cc8 @ 00009cc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009cc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009ce0 @ 00009ce0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009ce0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009d38 @ 00009d38 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009d44 @ 00009d44 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009d44(void)

{
  int unaff_r30;
  
  *(undefined1 *)(unaff_r30 + 0x31) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009d60 @ 00009d60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009da8 @ 00009da8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009da8(void)

{
  uint in_r10;
  int in_r11;
  
  if ((in_r10 & 1) == 1) {
    FUN_0000c800(in_r11 + 0x48,&stack0x00000050);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0000c800(in_r11 + 0x40,&stack0x00000050);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009de4 @ 00009de4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009de4(void)

{
  undefined4 unaff_r30;
  int unaff_r31;
  undefined2 uStack00000058;
  undefined2 uStack0000005a;
  undefined2 uStack0000005c;
  undefined2 uStack0000005e;
  
  FUN_0000a1d0(uStack0000005c,uStack0000005e,unaff_r31);
  FUN_0000a1d0(uStack00000058,uStack0000005a,unaff_r31 + 0x10);
  *(undefined4 *)(unaff_r31 + 0x30) = unaff_r30;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009e2c @ 00009e2c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009e2c(void)

{
  uint in_r11;
  int unaff_r31;
  
  if ((in_r11 & 2) == 2) {
    *(uint *)(unaff_r31 + 0x30) = *(uint *)(unaff_r31 + 0x30) | 2;
  }
  if ((in_r11 & 4) == 4) {
    *(uint *)(unaff_r31 + 0x30) = *(uint *)(unaff_r31 + 0x30) | 4;
  }
  if ((in_r11 & 0x20) == 0x20) {
    *(uint *)(unaff_r31 + 0x30) = *(uint *)(unaff_r31 + 0x30) | 0x20;
  }
  if ((in_r11 & 0x10) == 0x10) {
    *(uint *)(unaff_r31 + 0x30) = *(uint *)(unaff_r31 + 0x30) | 0x10;
  }
  if (*(int *)(unaff_r31 + 0x30) == 0) {
    *(undefined4 *)(unaff_r31 + 0x30) = 0x80;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009ec0 @ 00009ec0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009ec0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009f10 @ 00009f10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009f10(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0000eacc();
  if (*(uint *)(pcVar1 + 0x14) <= *(int *)(pcVar1 + 0x18) - 2U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*pcVar1 == '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009f68 @ 00009f68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009f68(int param_1)

{
  int iVar1;
  undefined4 unaff_r28;
  int unaff_r29;
  int unaff_r30;
  undefined4 unaff_r31;
  
  if (unaff_r29 == 0) {
    iVar1 = FUN_0000a4d8(unaff_r31,unaff_r28);
    param_1 = 0;
    if (iVar1 != 0) {
      halt_baddata();
    }
  }
  if (unaff_r30 == 0) {
    if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009fdc @ 00009fdc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009fdc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00009fe8 @ 00009fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009fe8(undefined4 param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,
                 int *param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_0000eacc();
  if (((param_3 == (ushort *)0x0) || (uVar3 = (uint)*param_3, uVar3 == 0)) ||
     ((uVar3 == 1 && (**(char **)(param_3 + 2) == '*')))) {
    iVar4 = 0;
  }
  else {
    iVar4 = uVar3 << 1;
  }
  iVar1 = thunk_EXT_FUN_8008b9b0((int)uVar5);
  iVar1 = thunk_EXT_FUN_800644e8(iVar4 + 0x68,0x65446f49,(iVar1 != 1) + '\x01');
  if (iVar1 != 0) {
    thunk_EXT_FUN_8010d110(iVar1,0,0x68);
    thunk_EXT_FUN_8010cc40(iVar1 + 0x10,(int)((ulonglong)uVar5 >> 0x20),0x58);
    if (iVar4 != 0) {
      *(short *)(iVar1 + 6) = (short)iVar4;
      *(int *)(iVar1 + 8) = iVar1 + 0x68;
      cVar2 = thunk_EXT_FUN_8015b8b0(iVar1 + 4,param_4,param_3);
      if (cVar2 == '\0') {
        halt_baddata();
      }
    }
    *param_5 = iVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a0e8 @ 0000a0e8 ==== */

void FUN_0000a0e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000a12c @ 0000a12c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a12c(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_r27;
  int unaff_r29;
  undefined4 unaff_r30;
  int in_stack_00000050;
  
  iVar1 = FUN_0000afe0(0x460);
  if (iVar1 != 0) {
    *(int *)(in_stack_00000050 + 0xc) = iVar1;
    *(int *)(in_stack_00000050 + 0x50) = iVar1 + 0x200;
    *(undefined2 *)(unaff_r29 + 0x2c) = unaff_r27;
    uVar2 = FUN_0000c970(unaff_r30,0);
    uVar2 = -(uint)(uVar2 != 4) & uVar2;
    if (uVar2 == 0) {
      FUN_0000b108(unaff_r30,unaff_r29);
      uVar2 = FUN_0000cb40(unaff_r30,0);
      uVar2 = -(uint)(uVar2 != 4) & uVar2;
    }
    thunk_EXT_FUN_80064768(iVar1);
    if ((unaff_r29 != 0) && (uVar2 != 0)) {
      *(undefined2 *)(unaff_r29 + 0x2c) = unaff_r27;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a1d0 @ 0000a1d0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  short local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  
  uVar4 = FUN_0000ead8();
  uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar3 = (uint)uVar4;
  thunk_EXT_FUN_8010d110(&local_2e,0,0xe);
  local_2e = (ushort)(uVar1 >> 5) & 0xf;
  local_30 = ((ushort)(uVar1 >> 9) & 0x7f) + 0x7bc;
  local_2c = (ushort)((ulonglong)uVar4 >> 0x20) & 0x1f;
  local_2a = (ushort)(uVar3 >> 0xb) & 0x1f;
  local_28 = (ushort)(uVar3 >> 5) & 0x3f;
  local_26 = (ushort)(uVar3 << 1) & 0x3e;
  cVar2 = thunk_EXT_FUN_80089a58(&local_30,param_3);
  if (cVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a250 @ 0000a250 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a250(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a27c @ 0000a27c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a27c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a290 @ 0000a290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a290(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a2cc @ 0000a2cc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a2cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a2e0 @ 0000a2e0 ==== */

bool FUN_0000a2e0(uint param_1)

{
  return *(int *)((param_1 & 0xff) * 4 + -0x7fdfcff4) == 0;
}


/* ==== FUN_0000a300 @ 0000a300 ==== */

bool FUN_0000a300(uint param_1)

{
  return *(int *)((param_1 & 0xff) * 4 + -0x7fdfcff4) == 0;
}


/* ==== FUN_0000a320 @ 0000a320 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a320(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a358 @ 0000a358 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a358(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  char *pcVar5;
  int unaff_r31;
  
  sVar3 = CONCAT11(*(undefined1 *)(unaff_r31 + 0x253),*(undefined1 *)(unaff_r31 + 0x252));
  if (sVar3 == -0x55ab) {
    pcVar5 = (char *)(unaff_r31 + 0x54);
    pcVar4 = (char *)0x802024b8;
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar4;
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar5 != (char *)(unaff_r31 + 0x5f));
    if (cVar1 == cVar2) {
      halt_baddata();
    }
  }
  cVar1 = *(char *)(unaff_r31 + 0x54);
  if ((((cVar1 == -0x15) || (cVar1 == -0x17)) || (cVar1 == -0x18)) && (sVar3 == -0x55ab)) {
    pcVar5 = (char *)(unaff_r31 + 0xa6);
    pcVar4 = (char *)0x802024c4;
    do {
      if (*pcVar5 != *pcVar4) {
        halt_baddata();
      }
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar5 != (char *)(unaff_r31 + 0xae));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a4d8 @ 0000a4d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a4d8(void)

{
  FUN_0000ead8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a52c @ 0000a52c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a52c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a530 @ 0000a530 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a540 @ 0000a540 ==== */

int FUN_0000a540(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  pbVar2 = &DAT_802024d0;
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    bVar4 = *pbVar2;
    if (bVar1 != bVar4) break;
    pbVar5 = pbVar5 + 1;
    pbVar2 = pbVar2 + 1;
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


/* ==== FUN_0000a640 @ 0000a640 ==== */

undefined4 FUN_0000a640(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_0000a688 @ 0000a688 ==== */

void FUN_0000a688(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000a6dc @ 0000a6dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a6dc(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_r27;
  undefined1 unaff_r29;
  undefined1 *puVar3;
  undefined1 *in_stack_00000050;
  uint in_stack_00000054;
  
  puVar3 = in_stack_00000050;
  while (((puVar3 != (undefined1 *)0x0 &&
          ((uint)((int)puVar3 - (int)in_stack_00000050) < in_stack_00000054)) &&
         (puVar1 = (undefined1 *)FUN_0000cfd8(puVar3,10), puVar1 != (undefined1 *)0x0))) {
    *puVar1 = unaff_r29;
    iVar2 = FUN_0000f358(puVar3);
    if (iVar2 != 0) goto LAB_0000a778;
    thunk_EXT_FUN_8010c7f8(&stack0x00000060,0x104,0x802024f4,puVar3);
    iVar2 = FUN_0000f368(&stack0x00000060,puVar3);
    if (iVar2 == 0) goto LAB_0000a778;
    puVar3 = puVar1 + 1;
  }
  FUN_0000f358(unaff_r27);
LAB_0000a778:
  if (in_stack_00000050 != (undefined1 *)0x0) {
    thunk_EXT_FUN_80064768();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a800 @ 0000a800 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a800(void)

{
  int iVar1;
  char cVar3;
  undefined4 uVar2;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  int in_stack_00000050;
  code *in_stack_00000054;
  uint in_stack_00000058;
  
  thunk_EXT_FUN_8007018c(unaff_r29,unaff_r28);
  iVar1 = FUN_0000ed98(0x802024f8,8,0,&stack0x00000050);
  if (iVar1 == 0) {
    iVar1 = FUN_0000eda8(in_stack_00000050,1,&stack0x00000054);
    if ((iVar1 == 0) && (cVar3 = (*in_stack_00000054)(&stack0x00000058), cVar3 == '\x01')) {
      uVar2 = thunk_EXT_FUN_80070138(0x80203078);
      if (_DAT_80203074 < in_stack_00000058) {
        _DAT_80203074 = in_stack_00000058;
        DAT_80203070 = 1;
        _DAT_80203fc8 = 3;
      }
      thunk_EXT_FUN_8007018c(0x80203078,uVar2);
    }
    if (in_stack_00000050 != 0) {
      *(undefined2 *)(in_stack_00000050 + 0x40) = 1;
      FUN_0000ebe8(in_stack_00000050);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a92c @ 0000a92c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a92c(void)

{
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  
  thunk_EXT_FUN_8007018c(unaff_r30,unaff_r29);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000a940 @ 0000a940 ==== */

void FUN_0000a940(void)

{
  (*(code *)&LAB_8169d44c)();
  return;
}


/* ==== FUN_0000a958 @ 0000a958 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a958(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0000eac8();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  iVar2 = (*pcRam8020423c)();
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    thunk_EXT_FUN_800718e0();
    thunk_EXT_FUN_80088fa0(iVar2 + 0x10);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar2 + 8);
    }
    if ((*(uint *)(iVar2 + 8) != 0) && (*(uint *)(iVar2 + 8) <= param_3)) {
      thunk_EXT_FUN_8010cc40((int)uVar3,*(undefined4 *)(iVar2 + 0xc));
    }
    thunk_EXT_FUN_800890f8(iVar2 + 0x10);
    thunk_EXT_FUN_800718f8();
    *(undefined4 *)(iVar1 + 0x278) = 1;
    FUN_0000f398(iVar1 + 0x310,1,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000aa08 @ 0000aa08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000aa08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000aaa0 @ 0000aaa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000aaa0(void)

{
  undefined4 in_stack_00000060;
  
  thunk_EXT_FUN_80089eb0(in_stack_00000060);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000aac0 @ 0000aac0 ==== */

void FUN_0000aac0(int param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  pcVar1 = param_2;
  do {
    pcVar2 = param_2 + iVar4;
    if (param_2[iVar4] == '\0') break;
    *(char *)(iVar4 + param_1 + 0x10) = *pcVar2;
    if (*pcVar2 == '\\') {
      pcVar1 = pcVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x100);
  iVar3 = 0;
  *(undefined1 *)(iVar4 + param_1 + 0x10) = 0;
  if ((param_3 == '\x01') && (param_2 < pcVar1)) {
    iVar4 = (int)pcVar1 - (int)param_2;
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      *(char *)(param_1 + 0x110 + iVar3) = *param_2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined1 *)(iVar3 + param_1 + 0x110) = 0;
  return;
}


/* ==== FUN_0000ab50 @ 0000ab50 ==== */

void FUN_0000ab50(void)

{
  (*(code *)&LAB_816a14bc)();
  return;
}


/* ==== FUN_0000abf4 @ 0000abf4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000abf4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ac10 @ 0000ac10 ==== */

void FUN_0000ac10(void)

{
  (*(code *)&LAB_8169e684)();
  return;
}


/* ==== FUN_0000ac28 @ 0000ac28 ==== */

void FUN_0000ac28(void)

{
  (*(code *)0x8199e3e4)();
  return;
}


/* ==== FUN_0000ac40 @ 0000ac40 ==== */

void FUN_0000ac40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000ac9c @ 0000ac9c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ac9c(void)

{
  int iVar1;
  int in_r11;
  int unaff_r27;
  int unaff_r28;
  undefined4 unaff_r29;
  int unaff_r30;
  int unaff_r31;
  
  while( true ) {
    iVar1 = unaff_r31 + in_r11;
    if (((*(char *)(unaff_r31 + in_r11) != '.') || (unaff_r30 != 0)) &&
       (iVar1 = unaff_r30, *(char *)(unaff_r31 + in_r11) == '\\')) break;
    in_r11 = in_r11 + -1;
    unaff_r30 = iVar1;
    if (in_r11 < 0) {
LAB_0000acd0:
      FUN_0000f3b8(unaff_r29,0x80202658);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar1 = in_r11 + unaff_r28 + 0x2a;
  if ((iVar1 != 0) && (unaff_r30 != 0)) {
    FUN_0000f3c8(unaff_r29,0x8020266c,unaff_r30 - iVar1);
    *(undefined1 *)(unaff_r27 + 0x3184) = 1;
    halt_baddata();
  }
  goto LAB_0000acd0;
}


/* ==== FUN_0000ad20 @ 0000ad20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ad20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ad68 @ 0000ad68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ad68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000adc0 @ 0000adc0 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000adc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar5;
  char cVar6;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar9 = FUN_0000eac4();
  bVar2 = true;
  if (_DAT_801a5dd4 != 0) {
    iVar8 = 0;
    pcVar7 = (char *)uVar9;
    while( true ) {
      uVar1 = *(ushort *)(*(int *)(_DAT_801a5dd4 + 0x28) + iVar8);
      if ((uVar1 == 0) && (*pcVar7 == '\0')) goto LAB_0000ae5c;
      if ((uVar1 == 0) || (*pcVar7 == '\0')) break;
      cVar5 = thunk_EXT_FUN_800861f0(uVar1 & 0xff);
      cVar6 = thunk_EXT_FUN_800861f0(*pcVar7);
      if (cVar5 != cVar6) break;
      iVar8 = iVar8 + 2;
      pcVar7 = pcVar7 + 1;
    }
  }
  bVar2 = false;
LAB_0000ae5c:
  if (bVar2) {
    (**(code **)(*(int *)*_DAT_802044c4 + 0x2c))();
  }
  else {
    thunk_EXT_FUN_8010d110(0x80203080,0,0x104);
    thunk_EXT_FUN_81722e30(0x80203080,(char *)uVar9);
    if (*(int *)(*_DAT_802044c4 + 0x504) != 0) {
      (*(code *)&SUB_913e7aa8)(*(int *)(*_DAT_802044c4 + 0x504),2);
    }
    local_50 = thunk_EXT_FUN_816e0bf0(0x12a);
    local_4c = thunk_EXT_FUN_816e0bf0(0x78);
    uVar3 = thunk_EXT_FUN_816e0bf0(0x16);
    uVar4 = thunk_EXT_FUN_817af168((int)((ulonglong)uVar9 >> 0x20));
    thunk_EXT_FUN_816cb168(uVar4,param_3,uVar3,2,&local_50,1,0x801fd238,2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000af30 @ 0000af30 ==== */

void FUN_0000af30(undefined1 param_1)

{
  DAT_8020307c = param_1;
  return;
}


/* ==== FUN_0000af40 @ 0000af40 ==== */

void FUN_0000af40(void)

{
  (*(code *)&LAB_913e9188)();
  return;
}


/* ==== FUN_0000af60 @ 0000af60 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000af60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000afa0 @ 0000afa0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000afa0(void)

{
  int unaff_r30;
  int unaff_r31;
  
  *(undefined4 *)(unaff_r30 + 0xa0) = *(undefined4 *)(unaff_r31 + 0xa0);
  thunk_EXT_FUN_8010cc40(unaff_r30 + 0xa4,unaff_r31 + 0xa4,*(int *)(unaff_r31 + 0xa0) << 1);
  *(int *)(unaff_r30 + 0x10) = unaff_r31;
  *(int *)(unaff_r31 + 0x10) = unaff_r30;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000afe0 @ 0000afe0 ==== */

void FUN_0000afe0(undefined4 param_1)

{
  thunk_EXT_FUN_800644e8(param_1,0x66467845,2);
  return;
}


/* ==== FUN_0000aff0 @ 0000aff0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000aff0(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ushort *in_stack_0000001c;
  
  uVar7 = FUN_0000ead8();
  puVar3 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  pcVar6 = (char *)*puVar3;
  for (in_stack_0000001c = (ushort *)uVar7;
      (*in_stack_0000001c == 0x2f || (*in_stack_0000001c == 0x5c));
      in_stack_0000001c = in_stack_0000001c + 1) {
  }
  puVar3[7] = 0;
  puVar3[2] = 0;
  if (*in_stack_0000001c < 0x20) {
    *(undefined1 *)((int)puVar3 + 0x4f) = 0x80;
    FUN_0000b888(puVar3,0);
  }
  else {
    while (iVar4 = FUN_0000d588(puVar3,&stack0x0000001c), iVar4 == 0) {
      bVar1 = *(byte *)((int)puVar3 + 0x4f);
      iVar4 = FUN_0000d2c8(puVar3);
      if (iVar4 != 0) {
        halt_baddata();
      }
      if ((bVar1 & 4) != 0) {
        halt_baddata();
      }
      if ((*(byte *)((int)puVar3 + 6) & 0x10) == 0) {
        halt_baddata();
      }
      if (*pcVar6 == '\x04') {
        FUN_0000b818(puVar3,puVar3);
      }
      else {
        uVar2 = puVar3[0xc] & 0x1ff;
        uVar5 = (uint)CONCAT11(pcVar6[uVar2 + 0x6f],pcVar6[uVar2 + 0x6e]);
        if (*pcVar6 == '\x03') {
          uVar5 = CONCAT22(CONCAT11(pcVar6[uVar2 + 0x69],pcVar6[uVar2 + 0x68]),
                           CONCAT11(pcVar6[uVar2 + 0x6f],pcVar6[uVar2 + 0x6e]));
        }
        puVar3[2] = uVar5;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b108 @ 0000b108 ==== */

void FUN_0000b108(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000b160 @ 0000b160 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b160(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint in_r6;
  uint in_r7;
  uint in_r8;
  int in_r11;
  uint uVar5;
  uint unaff_r27;
  int unaff_r29;
  int unaff_r30;
  uint unaff_r31;
  
  do {
    uVar5 = unaff_r27;
    uVar3 = unaff_r31;
    if (0x25f < in_r7) break;
    if ((in_r7 & 0x1f) == 0) {
      in_r7 = in_r7 + 2;
    }
    uVar2 = CONCAT11(((undefined1 *)(in_r11 + in_r7))[1],*(undefined1 *)(in_r11 + in_r7));
    uVar3 = (uint)uVar2;
    in_r7 = in_r7 + 2;
    in_r6 = in_r6 + 1;
    if ((((unaff_r31 & 0xffff) != 0) || (uVar2 < 0xd800)) || (0xdfff < uVar2)) {
      iVar4 = FUN_0000d9c0(unaff_r31 << 0x10 | uVar3,(in_r8 + 0x16) * 2 + unaff_r29,0xff - in_r8);
      uVar3 = unaff_r31;
      if (iVar4 == 0) break;
      in_r8 = iVar4 + in_r8;
      uVar3 = unaff_r27;
    }
    in_r11 = *(int *)(unaff_r30 + 0x50);
    uVar5 = in_r8;
    unaff_r31 = uVar3;
  } while (in_r6 < *(byte *)(in_r11 + 0x23));
  uVar5 = -(uint)((uVar3 & 0xffff) == 0) & uVar5;
  if (uVar5 == 0) {
    uVar5 = 1;
    *(undefined2 *)(unaff_r29 + 0x2c) = 0x3f;
  }
  *(short *)((uVar5 + 0x16) * 2 + unaff_r29) = (short)unaff_r27;
  *(short *)(unaff_r29 + 0x12) = (short)unaff_r27;
  bVar1 = *(byte *)(*(int *)(unaff_r30 + 0x50) + 4);
  *(byte *)(unaff_r29 + 0x10) = bVar1 & 0x37;
  if ((bVar1 & 0x10) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b244 @ 0000b244 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b244(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b288 @ 0000b288 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b288(void)

{
  uint uVar1;
  char cVar4;
  short sVar3;
  int iVar2;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ushort uVar9;
  short *psVar10;
  ushort *puVar11;
  uint unaff_r27;
  undefined2 uVar12;
  int unaff_r28;
  int unaff_r29;
  int unaff_r30;
  uint uVar13;
  uint uVar14;
  
  uVar12 = (undefined2)unaff_r27;
  uVar13 = unaff_r27;
  uVar14 = unaff_r27;
  if (*(int *)(unaff_r28 + 0x50) != -1) {
    psVar10 = *(short **)(unaff_r30 + 0xc);
    sVar3 = *psVar10;
    uVar5 = unaff_r27;
    uVar6 = unaff_r27;
    uVar8 = unaff_r27;
    while (uVar1 = uVar8, sVar3 != 0) {
      uVar9 = *(ushort *)((int)psVar10 + uVar5);
      uVar1 = (uint)uVar9;
      uVar5 = uVar5 + 2;
      if ((((uVar6 & 0xffff) != 0) || (uVar9 < 0xd800)) || (0xdfff < uVar9)) {
        iVar2 = FUN_0000d9c0(uVar6 << 0x10 | uVar1,(uVar8 + 0x16) * 2 + unaff_r29,0xff - uVar8);
        uVar1 = unaff_r27;
        if (iVar2 == 0) break;
        uVar8 = iVar2 + uVar8;
      }
      psVar10 = *(short **)(unaff_r30 + 0xc);
      uVar6 = uVar1;
      sVar3 = *(short *)((int)psVar10 + uVar5);
    }
    *(undefined2 *)(((-(uint)((uVar6 & 0xffff) == 0) & uVar1) + 0x16) * 2 + unaff_r29) = uVar12;
  }
  do {
    cVar4 = *(char *)(*(int *)(unaff_r28 + 0x40) + uVar13);
    uVar13 = uVar13 + 1;
    if (cVar4 != ' ') {
      if (cVar4 == '\x05') {
        cVar4 = -0x1b;
      }
      uVar5 = uVar14;
      if ((uVar13 == 9) && (uVar14 < 0xc)) {
        uVar5 = uVar14 + 1;
        *(undefined2 *)((uVar14 + 9) * 2 + unaff_r29) = 0x2e;
      }
      sVar3 = FUN_0000da38(cVar4,0x1b5);
      uVar14 = unaff_r27;
      if ((sVar3 == 0) ||
         (iVar2 = FUN_0000d9c0(sVar3,(uVar5 + 9) * 2 + unaff_r29,0xc - uVar5), iVar2 == 0)) break;
      uVar14 = iVar2 + uVar5;
    }
  } while (uVar13 < 0xb);
  *(undefined2 *)((uVar14 + 9) * 2 + unaff_r29) = uVar12;
  if (*(short *)(unaff_r29 + 0x2c) == 0) {
    if (uVar14 == 0) {
      unaff_r27 = 1;
      *(undefined2 *)(unaff_r29 + 0x2c) = 0x3f;
    }
    else {
      puVar11 = (ushort *)(unaff_r29 + 0x12);
      bVar7 = 8;
      uVar9 = *(ushort *)(unaff_r29 + 0x12);
      while (uVar9 != 0) {
        if (uVar9 == 0x2e) {
          bVar7 = 0x10;
        }
        if (((0x40 < uVar9) && (uVar9 < 0x5b)) &&
           ((bVar7 & *(byte *)(*(int *)(unaff_r28 + 0x40) + 0xc)) != 0)) {
          uVar9 = uVar9 + 0x20;
        }
        puVar11[0xd] = uVar9;
        unaff_r27 = unaff_r27 + 1;
        puVar11 = puVar11 + 1;
        uVar9 = *puVar11;
      }
    }
    *(undefined2 *)((unaff_r27 + 0x16) * 2 + unaff_r29) = uVar12;
    if (*(char *)(*(int *)(unaff_r28 + 0x40) + 0xc) == '\0') {
      *(undefined2 *)(unaff_r29 + 0x12) = uVar12;
    }
  }
  *(byte *)(unaff_r29 + 0x10) = *(byte *)(*(int *)(unaff_r28 + 0x40) + 0xb) & 0x3f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b4dc @ 0000b4dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b4dc(void)

{
  undefined2 in_r11;
  int unaff_r29;
  
  *(undefined2 *)(unaff_r29 + 0xc) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== thunk_EXT_FUN_80064768 @ 0000b4e8 ==== */

void thunk_EXT_FUN_80064768(void)

{
  (*(code *)&LAB_80064768)();
  return;
}


/* ==== FUN_0000b4f0 @ 0000b4f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b4f0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000ead4();
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = (uint)uVar4 & 0xff;
  iVar3 = thunk_EXT_FUN_800644e8(uVar2,0x63467845,(uVar1 != 1) + '\x01');
  if (iVar3 != 0) {
    thunk_EXT_FUN_8010d110(iVar3,0,uVar2);
    *(undefined4 *)(iVar3 + 0x14) = 1;
    if (uVar1 == 1) {
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 8;
    }
    FUN_0000f018(iVar3 + 0x20);
    if ((param_3 & 0xff) == 1) {
      *(int *)(iVar3 + 0x44) = iVar3 + 0x40;
      *(int *)(iVar3 + 0x40) = iVar3 + 0x40;
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b5a0 @ 0000b5a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b5a0(void)

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
  
  in_stack_00000014 = FUN_0000eabc();
  iVar2 = FUN_00006b68(&stack0x00000014,apcStack_100,2);
  if (iVar2 != 0) {
    halt_baddata();
  }
  apcStack_f0[0] = apcStack_100[0];
  iVar2 = FUN_0000afe0(0x460);
  if (iVar2 == 0) {
    halt_baddata();
  }
  *(int *)(apcStack_100[0] + 0xc) = iVar2;
  *(int *)(apcStack_100[0] + 0x50) = iVar2 + 0x200;
  iVar3 = FUN_0000aff0(apcStack_f0,in_stack_00000014);
  if (iVar3 == 0) {
    iVar3 = (-(uint)((bStack_a1 & 0xa0) != 0) & 0xfffffffe) + 8;
  }
  if (iVar3 == 4) {
    apcStack_90[0] = apcStack_100[0];
    uVar4 = FUN_0000c440(apcStack_90,0);
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
    uVar5 = FUN_0000bde0();
    if ((iVar3 == 0) && (iVar3 = FUN_0000da80(apcStack_100[0],uVar4), iVar3 == 0)) {
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
        thunk_EXT_FUN_8010cc40(apcStack_100[0] + 0x74,apcStack_100[0] + 0x54,0x20);
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
      iVar3 = FUN_0000b9c8(apcStack_f0);
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
          iVar3 = FUN_0000be60(apcStack_f0);
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
          FUN_0000dbf0(apcStack_100[0]);
        }
        goto LAB_0000b804;
      }
    }
    FUN_0000bf48(apcStack_90,uVar4,0);
  }
LAB_0000b804:
  thunk_EXT_FUN_80064768(iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b818 @ 0000b818 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b818(int *param_1,int param_2)

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


/* ==== FUN_0000b888 @ 0000b888 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b888(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  uVar6 = FUN_0000ead4();
  puVar2 = (undefined4 *)(uVar6 >> 0x20);
  uVar4 = (uint)uVar6;
  pbVar5 = (byte *)*puVar2;
  uVar3 = 0x10000000;
  if (*pbVar5 != 4) {
    uVar3 = 0x200000;
  }
  if ((uVar4 < uVar3) && ((uVar6 & 0x1f) == 0)) {
    uVar3 = puVar2[2];
    puVar2[0xc] = uVar4;
    if (uVar3 == 0) {
      if (2 < *pbVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar4 >> 5 < (uint)*(ushort *)(pbVar5 + 8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar1 = *(ushort *)(pbVar5 + 10);
      while( true ) {
        if (uVar4 < (uint)uVar1 * 0x200) {
          if (uVar3 - 2 < *(int *)(pbVar5 + 0x18) - 2U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar3 = FUN_0000c140(puVar2);
        if (((uVar3 == 0xffffffff) || (uVar3 < 2)) || (*(uint *)(pbVar5 + 0x18) <= uVar3)) break;
        uVar4 = uVar4 + (uint)uVar1 * -0x200;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b984 @ 0000b984 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b984(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000b9c8 @ 0000b9c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b9c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_d0 [11];
  byte local_c5;
  
  puVar1 = (undefined4 *)FUN_0000eab4();
  pcVar7 = (char *)*puVar1;
  if ((*(byte *)((int)puVar1 + 0x4f) & 0xa0) == 0) {
    piVar6 = (int *)(pcVar7 + 0xc);
    iVar8 = 0;
    if (**(short **)(pcVar7 + 0xc) != 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 2;
        iVar8 = iVar8 + 1;
      } while (*(short *)(iVar3 + *piVar6) != 0);
    }
    if (*pcVar7 == '\x04') {
      uVar4 = (iVar8 + 0xeU) / 0xf;
      iVar8 = FUN_0000dd40(puVar1,uVar4 + 2);
      if (iVar8 == 0) {
        puVar1[0x14] = puVar1[0xc] + (uVar4 + 1) * -0x20;
        if ((*(byte *)((int)puVar1 + 7) & 4) != 0) {
          bVar5 = *(byte *)((int)puVar1 + 7) & 0xfb;
          *(byte *)((int)puVar1 + 7) = bVar5;
          if (bVar5 == 3) {
            iVar3 = puVar1[2];
            for (iVar8 = puVar1[6]; iVar8 != 0; iVar8 = iVar8 + -1) {
              iVar2 = FUN_0000ddf8(*puVar1,iVar3,iVar3 + 1);
              if (iVar2 != 0) goto LAB_0000bacc;
              iVar3 = iVar3 + 1;
            }
            *(undefined1 *)((int)puVar1 + 7) = 0;
          }
          iVar2 = 0;
LAB_0000bacc:
          if (iVar2 != 0) {
            halt_baddata();
          }
          iVar8 = FUN_0000c3c8(puVar1,puVar1[0xd],0xffffffff);
          if (iVar8 != 0) {
            halt_baddata();
          }
          if (puVar1[2] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        FUN_0000e138(*(undefined4 *)(pcVar7 + 0x50),*piVar6);
      }
    }
    else {
      thunk_EXT_FUN_8010cc40(auStack_d0,puVar1 + 0x11,0xc);
      if ((local_c5 & 1) != 0) {
        uVar4 = 1;
        *(byte *)((int)puVar1 + 0x4f) = 0x40;
        do {
          FUN_0000e248(puVar1 + 0x11,auStack_d0,*piVar6,uVar4 & 0xffff);
          iVar3 = FUN_0000d2c8(puVar1);
          if (iVar3 != 0) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 100);
        if (uVar4 == 100) {
          halt_baddata();
        }
        if (iVar3 != 4) {
          halt_baddata();
        }
        *(byte *)((int)puVar1 + 0x4f) = local_c5;
      }
      if ((local_c5 & 2) == 0) {
        iVar8 = 1;
      }
      else {
        iVar8 = (iVar8 + 0xcU) / 0xd + 1;
      }
      iVar3 = FUN_0000dd40(puVar1,iVar8);
      if (iVar3 == 0) {
        if (iVar8 + -1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar8 = FUN_0000b888(puVar1,puVar1[0xc] + (iVar8 + -1) * -0x20);
        if (iVar8 == 0) {
          iVar8 = 0xb;
          do {
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000bd14 @ 0000bd14 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000bd14(undefined4 param_1,ushort *param_2,int param_3,byte param_4,int param_5,
                 byte param_6,ushort param_7,int param_8)

{
  int iVar1;
  byte *in_r11;
  int unaff_r22;
  undefined1 unaff_r23;
  int unaff_r27;
  int unaff_r28;
  undefined4 unaff_r31;
  int in_CTR;
  
  do {
    if (param_7 != 0xffff) {
      param_2 = param_2 + 1;
      param_7 = *param_2;
      param_8 = param_8 + 1;
    }
    *(ushort *)(in_r11 + *(byte *)(param_3 + unaff_r27)) = param_7 >> 8 | param_7 << 8;
    if (param_7 == 0) {
      param_7 = 0xffff;
    }
    param_3 = param_3 + 1;
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0);
  if (param_7 != 0xffff) {
    if (*(short *)(param_8 * 2 + param_5) != 0) goto LAB_0000bd68;
  }
  param_6 = param_4 | 0x40;
LAB_0000bd68:
  *in_r11 = param_6;
  *(undefined1 *)(unaff_r22 + 4) = unaff_r23;
  iVar1 = FUN_0000cb40(unaff_r31,0);
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r28 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000bde0 @ 0000bde0 ==== */

uint FUN_0000bde0(void)

{
  undefined1 auStack_30 [16];
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  
  thunk_EXT_FUN_80071948(auStack_30);
  thunk_EXT_FUN_800898e8(auStack_30,&local_20);
  return ((((uint)local_1e << 5 | (uint)local_1c) << 5 | (uint)local_1a) << 6 | (uint)local_18) << 5
         | (local_20 - 0x3c) * 0x2000000 | (uint)(local_16 >> 1);
}


/* ==== FUN_0000be60 @ 0000be60 ==== */

void FUN_0000be60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000be90 @ 0000be90 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000be90(void)

{
  int iVar1;
  uint in_r6;
  uint in_r10;
  uint in_r11;
  int unaff_r30;
  int unaff_r31;
  
  do {
    if (in_r10 == 2) {
      in_r10 = 3;
    }
    else {
      in_r11 = (uint)*(byte *)(in_r10 + unaff_r31) + (in_r11 & 1) * 0x8000 + (in_r11 >> 1 & 0x7fff);
    }
    in_r10 = in_r10 + 1;
  } while (in_r10 < in_r6);
  *(ushort *)(unaff_r31 + 2) = (ushort)in_r11 >> 8 | (ushort)(byte)in_r11 << 8;
  iVar1 = FUN_0000b888(unaff_r30,*(undefined4 *)(unaff_r30 + 0x50));
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000bee0 @ 0000bee0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000bee0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000bf48 @ 0000bf48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000bf48(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_0000eac8();
  puVar1 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
  uVar5 = (uint)uVar9;
  pcVar7 = (char *)*puVar1;
  if (((1 < uVar5) && (uVar5 < *(uint *)(pcVar7 + 0x18))) &&
     ((uVar8 = uVar5, param_3 == 0 ||
      (((*pcVar7 == '\x04' && (*(char *)((int)puVar1 + 7) == '\x02')) ||
       (iVar2 = FUN_0000ddf8(pcVar7,param_3,0xffffffff), iVar2 == 0)))))) {
    do {
      uVar3 = FUN_0000c140(puVar1,uVar8);
      if (uVar3 == 0) break;
      if (uVar3 == 1) {
        halt_baddata();
      }
      if (uVar3 == 0xffffffff) {
        halt_baddata();
      }
      if ((*pcVar7 != '\x04') && (iVar2 = FUN_0000ddf8(pcVar7,uVar8,0), iVar2 != 0)) {
        halt_baddata();
      }
      if (*(uint *)(pcVar7 + 0x14) < *(int *)(pcVar7 + 0x18) - 2U) {
        *(uint *)(pcVar7 + 0x14) = *(uint *)(pcVar7 + 0x14) + 1;
        pcVar7[5] = pcVar7[5] | 1;
      }
      uVar6 = uVar5;
      if (((uVar8 + 1 != uVar3) && (uVar6 = uVar3, *pcVar7 == '\x04')) &&
         (iVar2 = FUN_0000e378(pcVar7,uVar5,(uVar8 - uVar5) + 1,0), iVar2 != 0)) {
        halt_baddata();
      }
      uVar5 = uVar6;
      uVar8 = uVar3;
    } while (uVar3 < *(uint *)(pcVar7 + 0x18));
    if (*pcVar7 == '\x04') {
      if (param_3 == 0) {
        uVar4 = 0;
      }
      else {
        if (*(char *)((int)puVar1 + 7) == '\0') {
          uVar8 = puVar1[2];
          uVar5 = uVar8;
          if (uVar8 != param_3) {
            do {
              uVar3 = FUN_0000c140(puVar1,uVar8);
              if (uVar3 < 2) {
                halt_baddata();
              }
              if (uVar3 == 0xffffffff) {
                halt_baddata();
              }
            } while ((uVar3 == uVar5 + 1) &&
                    (uVar8 = uVar8 + 1, uVar5 = uVar5 + 1, uVar8 != param_3));
            if (uVar8 != param_3) {
              halt_baddata();
            }
          }
        }
        else {
          if (*(char *)((int)puVar1 + 7) != '\x03') {
            halt_baddata();
          }
          if (param_3 < (uint)puVar1[2]) {
            halt_baddata();
          }
          if ((uint)(puVar1[6] + puVar1[2]) < param_3) {
            halt_baddata();
          }
        }
        uVar4 = 2;
      }
      *(undefined1 *)((int)puVar1 + 7) = uVar4;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c140 @ 0000c140 ==== */

void FUN_0000c140(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000c1a8 @ 0000c1a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c1a8(int param_1)

{
  if (*(char *)(param_1 + 7) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c1ec @ 0000c1ec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c1ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c1f8 @ 0000c1f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c1f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c200 @ 0000c200 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c200(int param_1)

{
  uint in_r10;
  int in_r11;
  
  if ((((in_r11 != 3) || (*(uint *)(param_1 + 0x18) <= in_r10)) && (in_r11 != 2)) &&
     (*(int *)(param_1 + 0x1c) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c25c @ 0000c25c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c25c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c290 @ 0000c290 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c290(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c2c0 @ 0000c2c0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c2c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c334 @ 0000c334 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c334(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c33c @ 0000c33c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c33c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c350 @ 0000c350 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c350(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_0000ead8();
  puVar1 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  if (((puVar1 != (undefined4 *)0x0) && (pcVar3 = (char *)*puVar1, pcVar3 != (char *)0x0)) &&
     (*pcVar3 != '\0')) {
    if ((*(short *)(puVar1 + 1) == *(short *)(pcVar3 + 6)) &&
       (uVar2 = FUN_0000a2e0(pcVar3[1]), (uVar2 & 1) == 0)) {
      uVar4 = *puVar1;
      goto LAB_0000c3b8;
    }
  }
  uVar4 = 0;
LAB_0000c3b8:
  *(undefined4 *)uVar5 = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c3c8 @ 0000c3c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c3c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000ead8();
  puVar1 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  while( true ) {
    if (puVar1[7] == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = puVar1[7];
    iVar2 = param_3;
    if (1 < uVar3) {
      iVar2 = ((int)uVar4 - uVar3) + 2;
    }
    iVar2 = FUN_0000ddf8(*puVar1,((int)uVar4 - uVar3) + 1,iVar2);
    if (iVar2 != 0) break;
    puVar1[7] = puVar1[7] + -1;
  }
  halt_baddata();
}


/* ==== FUN_0000c440 @ 0000c440 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c440(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_0000eac8();
  puVar1 = (undefined4 *)((ulonglong)uVar10 >> 0x20);
  uVar6 = (uint)uVar10;
  pcVar7 = (char *)*puVar1;
  if (uVar6 == 0) {
    uVar8 = *(uint *)(pcVar7 + 0x10);
    if ((uVar8 == 0) || (*(uint *)(pcVar7 + 0x18) <= uVar8)) {
      uVar8 = 1;
    }
  }
  else {
    uVar2 = FUN_0000c140(puVar1,uVar6);
    if (uVar2 < 2) {
      halt_baddata();
    }
    if (uVar2 == 0xffffffff) {
      halt_baddata();
    }
    uVar8 = uVar6;
    if (uVar2 < *(uint *)(pcVar7 + 0x18)) {
      halt_baddata();
    }
  }
  if (*(int *)(pcVar7 + 0x14) == 0) {
    halt_baddata();
  }
  if (*pcVar7 == '\x04') {
    uVar2 = FUN_0000e450(pcVar7,uVar8,1);
    if (uVar2 == 0) {
      halt_baddata();
    }
    if (uVar2 == 0xffffffff) {
      halt_baddata();
    }
    iVar3 = FUN_0000e378(pcVar7,uVar2,1,1);
    if (iVar3 == 2) {
      halt_baddata();
    }
    if (iVar3 == 1) {
      halt_baddata();
    }
    if (uVar6 == 0) {
      *(undefined1 *)((int)puVar1 + 7) = 2;
    }
    else if ((*(char *)((int)puVar1 + 7) == '\x02') && (uVar2 != uVar8 + 1)) {
      *(undefined1 *)((int)puVar1 + 7) = 3;
      puVar1[6] = uVar8 - puVar1[2];
    }
    if (*(char *)((int)puVar1 + 7) != '\x02') {
      iVar4 = puVar1[7];
      if (uVar2 == uVar6 + 1) {
        iVar5 = iVar4 + 1;
        if (iVar4 == 0) {
          iVar5 = 2;
        }
        puVar1[7] = iVar5;
      }
      else {
        if (iVar4 == 0) {
          puVar1[7] = 1;
        }
        iVar3 = FUN_0000c3c8(puVar1,uVar6,uVar2);
        if (iVar3 != 0) {
          halt_baddata();
        }
        puVar1[7] = 1;
        iVar3 = 0;
      }
    }
LAB_0000c6b0:
    if (iVar3 != 0) {
      halt_baddata();
    }
LAB_0000c6b8:
    uVar6 = *(uint *)(pcVar7 + 0x14);
    *(uint *)(pcVar7 + 0x10) = uVar2;
    if ((uVar6 != 0) && (uVar6 <= *(int *)(pcVar7 + 0x18) - 2U)) {
      *(uint *)(pcVar7 + 0x14) = uVar6 - 1;
      pcVar7[5] = pcVar7[5] | 1;
    }
  }
  else {
    uVar9 = uVar8;
    if (uVar8 == uVar6) {
      uVar2 = uVar8 + 1;
      if (*(uint *)(pcVar7 + 0x18) <= uVar2) {
        uVar2 = 2;
      }
      iVar3 = FUN_0000c140(puVar1,uVar2);
      if (iVar3 == 1) {
        halt_baddata();
      }
      if (iVar3 == -1) {
        halt_baddata();
      }
      if (iVar3 == 0) {
        if (uVar2 != 0) {
LAB_0000c680:
          iVar3 = FUN_0000ddf8(pcVar7,uVar2,0xffffffff);
          if (iVar3 != 0) {
            halt_baddata();
          }
          if (uVar6 != 0) {
            iVar3 = FUN_0000ddf8(pcVar7,uVar6,uVar2);
            goto LAB_0000c6b0;
          }
          goto LAB_0000c6b8;
        }
      }
      else {
        uVar2 = *(uint *)(pcVar7 + 0x10);
        if ((1 < uVar2) && (uVar2 < *(uint *)(pcVar7 + 0x18))) {
          uVar8 = uVar2;
          uVar9 = uVar2;
        }
      }
    }
    while ((uVar2 = uVar8 + 1, uVar2 < *(uint *)(pcVar7 + 0x18) || (uVar2 = 2, 1 < uVar9))) {
      iVar3 = FUN_0000c140(puVar1,uVar2);
      if (iVar3 == 0) goto LAB_0000c680;
      if (iVar3 == 1) {
        halt_baddata();
      }
      if (iVar3 == -1) {
        halt_baddata();
      }
      uVar8 = uVar2;
      if (uVar2 == uVar9) {
        halt_baddata();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c710 @ 0000c710 ==== */

/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_0000c710(byte param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((uint)param_1 * 4 + -0x7fdfcff4);
  if (iVar2 == 0) {
    uVar1 = 0x80202680;
  }
  else {
    param_4 = *(int *)(iVar2 + 0x20) * param_4;
    param_1 = *(byte *)(*(int *)(*(int *)(iVar2 + 0x18) + 0xa0) + 0x1c);
    if (param_1 == 7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 == 0x2d) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0x802026e4;
  }
  thunk_EXT_FUN_80085ee8(uVar1,param_1,param_3,param_4,param_5,param_2);
  thunk_EXT_FUN_80085ea0();
  return 4;
}


/* ==== FUN_0000c788 @ 0000c788 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c788(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c7c8 @ 0000c7c8 ==== */

undefined4 FUN_0000c7c8(void)

{
  return 1;
}


/* ==== FUN_0000c7d0 @ 0000c7d0 ==== */

undefined4 FUN_0000c7d0(void)

{
  return 0;
}


/* ==== FUN_0000c7d8 @ 0000c7d8 ==== */

undefined4 FUN_0000c7d8(void)

{
  thunk_EXT_FUN_80085ee8(0x802026e4);
  thunk_EXT_FUN_80085ea0();
  return 4;
}


/* ==== FUN_0000c800 @ 0000c800 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c800(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_0000eac8();
  iVar4 = (int)uVar11;
  iVar6 = *(int *)((ulonglong)uVar11 >> 0x20);
  *(undefined2 *)(iVar4 + 0x2c) = 0;
  uVar9 = 0x40;
  uVar8 = 0;
  uVar10 = 0;
  iVar5 = *(int *)(iVar6 + 0x50);
  uVar7 = 0;
  uVar3 = 0;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    do {
      if (0x25f < uVar9) {
LAB_0000c8bc:
        uVar10 = 0;
        uVar3 = uVar7;
        break;
      }
      if ((uVar9 & 0x1f) == 0) {
        uVar9 = uVar9 + 2;
      }
      uVar2 = CONCAT11(((undefined1 *)(iVar5 + uVar9))[1],*(undefined1 *)(iVar5 + uVar9));
      uVar3 = (uint)uVar2;
      uVar9 = uVar9 + 2;
      uVar8 = uVar8 + 1;
      if (((uVar7 != 0) || (uVar2 < 0xd800)) || (0xdfff < uVar2)) {
        iVar5 = FUN_0000d9c0(uVar7 << 0x10 | uVar3,(uVar10 + 0x16) * 2 + iVar4,0xff - uVar10);
        if (iVar5 == 0) goto LAB_0000c8bc;
        uVar10 = iVar5 + uVar10;
        uVar3 = 0;
      }
      iVar5 = *(int *)(iVar6 + 0x50);
      uVar7 = uVar3;
    } while (uVar8 < *(byte *)(iVar5 + 0x23));
  }
  uVar10 = -(uint)(uVar3 == 0) & uVar10;
  if (uVar10 == 0) {
    uVar10 = 1;
    *(undefined2 *)(iVar4 + 0x2c) = 0x3f;
  }
  *(undefined2 *)((uVar10 + 0x16) * 2 + iVar4) = 0;
  *(undefined2 *)(iVar4 + 0x12) = 0;
  bVar1 = *(byte *)(*(int *)(iVar6 + 0x50) + 4);
  *(byte *)(iVar4 + 0x10) = bVar1 & 0x37;
  if ((bVar1 & 0x10) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c920 @ 0000c920 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c970 @ 0000c970 ==== */

void FUN_0000c970(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000c9a0 @ 0000c9a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c9a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000c9e4 @ 0000c9e4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000c9e4(void)

{
  int iVar1;
  int in_r10;
  int unaff_r29;
  int unaff_r31;
  
  if (in_r10 == 0x85) {
    *(undefined4 *)(unaff_r31 + 0x50) = *(undefined4 *)(unaff_r31 + 0x30);
    iVar1 = FUN_0000df88(unaff_r31);
    if (iVar1 == 0) {
      *(byte *)(unaff_r31 + 6) = *(byte *)(*(int *)(unaff_r29 + 0x50) + 4) & 0x3f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    iVar1 = FUN_0000cb40(unaff_r31,0);
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ca18 @ 0000ca18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ca18(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint in_r9;
  uint in_r10;
  byte *pbVar3;
  byte bVar5;
  uint uVar4;
  uint unaff_r27;
  uint unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  bVar1 = *(byte *)(param_2 + 0xb);
  bVar5 = bVar1 & 0x3f;
  *(byte *)(unaff_r31 + 6) = bVar5;
  if (((in_r10 != 0xe5) && (in_r10 != 0x2e)) && (((bVar1 & 0x1f) == 8) == unaff_r28)) {
    if (bVar5 != 0xf) {
      if ((unaff_r30 & 0xff) == 0) {
        pbVar3 = (byte *)(param_2 + -1);
        uVar4 = 0;
        iVar2 = 0xb;
        do {
          pbVar3 = pbVar3 + 1;
          uVar4 = (uVar4 & 1) * 0x80 + (uVar4 >> 1 & 0x7f) + (uint)*pbVar3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        if ((unaff_r27 & 0xff) == (uVar4 & 0xff)) {
          halt_baddata();
        }
      }
      *(undefined4 *)(unaff_r31 + 0x50) = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((in_r10 & 0x40) != 0) {
      in_r9 = in_r10 & 0xbf;
      unaff_r27 = (uint)*(byte *)(param_2 + 0xd);
      *(undefined4 *)(unaff_r31 + 0x50) = *(undefined4 *)(unaff_r31 + 0x30);
      unaff_r30 = in_r9;
    }
    if (((in_r9 & 0xff) == (unaff_r30 & 0xff)) &&
       ((unaff_r27 & 0xff) == (uint)*(byte *)(param_2 + 0xd))) {
      FUN_0000e560(*(undefined4 *)(unaff_r29 + 0xc));
    }
  }
  iVar2 = FUN_0000cb40(unaff_r31,0);
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cadc @ 0000cadc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cadc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cb40 @ 0000cb40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cb40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_0000eac8();
  uVar2 = 0x10000000;
  if (*(char *)*puVar1 != '\x04') {
    uVar2 = 0x200000;
  }
  if (uVar2 <= puVar1[0xc] + 0x20) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cb84 @ 0000cb84 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cb84(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cb98 @ 0000cb98 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cb98(void)

{
  uint unaff_r27;
  int unaff_r29;
  int unaff_r31;
  
  if ((unaff_r27 & 0x1ff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_r31 + 0x30) = unaff_r27;
  *(uint *)(unaff_r31 + 0x40) = (unaff_r27 & 0x1ff) + unaff_r29 + 0x54;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cbc4 @ 0000cbc4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cbc4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cbd0 @ 0000cbd0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cbd0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r25;
  uint unaff_r27;
  int unaff_r28;
  int unaff_r29;
  int unaff_r31;
  
  if ((*(ushort *)(unaff_r29 + 10) - 1 & unaff_r27 >> 9) == 0) {
    uVar1 = FUN_0000c140(unaff_r31);
    if ((1 < uVar1) && (uVar1 != 0xffffffff)) {
      if (*(uint *)(unaff_r29 + 0x18) <= uVar1) {
        if (unaff_r28 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar1 = FUN_0000c440(unaff_r31,*(undefined4 *)(unaff_r31 + 0x34));
        if (uVar1 == 0) {
          halt_baddata();
        }
        if (uVar1 == 1) {
          halt_baddata();
        }
        if (uVar1 == 0xffffffff) {
          halt_baddata();
        }
        iVar2 = FUN_0000da80(unaff_r29,uVar1);
        if (iVar2 != 0) {
          halt_baddata();
        }
        *(byte *)(unaff_r31 + 7) = *(byte *)(unaff_r31 + 7) | 4;
      }
      *(uint *)(unaff_r31 + 0x34) = uVar1;
      if (*(int *)(unaff_r29 + 0x18) - 2U <= uVar1 - 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(uint *)(unaff_r31 + 0x30) = unaff_r27;
    *(int *)(unaff_r31 + 0x40) = unaff_r25 + unaff_r29 + 0x54;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cca4 @ 0000cca4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cca4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ccc8 @ 0000ccc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ccc8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *apcStack_b0 [44];
  
  puVar2 = (undefined4 *)FUN_0000eac8();
  iVar3 = FUN_0000c350(puVar2,apcStack_b0);
  if ((iVar3 == 0) && ((*(byte *)(puVar2 + 0xc) & 0x40) != 0)) {
    if (*apcStack_b0[0] != '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)((int)puVar2 + 7) == '\x03') {
      iVar1 = puVar2[2];
      for (iVar3 = puVar2[6]; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar4 = FUN_0000ddf8(*puVar2,iVar1,iVar1 + 1);
        if (iVar4 != 0) goto LAB_0000cd54;
        iVar1 = iVar1 + 1;
      }
      *(undefined1 *)((int)puVar2 + 7) = 0;
    }
    iVar4 = 0;
LAB_0000cd54:
    if (((iVar4 == 0) && (iVar3 = FUN_0000c3c8(puVar2,puVar2[0x10],0xffffffff), iVar3 == 0)) &&
       (iVar3 = FUN_0000afe0(0x460), iVar3 != 0)) {
      *(int *)(apcStack_b0[0] + 0xc) = iVar3;
      *(int *)(apcStack_b0[0] + 0x50) = iVar3 + 0x200;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cdec @ 0000cdec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cdec(int param_1)

{
  uint uVar1;
  undefined4 unaff_r28;
  int *unaff_r30;
  int unaff_r31;
  
  if (param_1 == 0) {
    *(byte *)(*unaff_r30 + 4) = *(byte *)(*unaff_r30 + 4) | 0x20;
    *(byte *)(*unaff_r30 + 0x21) = *(byte *)(unaff_r31 + 7) | 1;
    uVar1 = *(uint *)(unaff_r31 + 8);
    *(uint *)(*unaff_r30 + 0x34) =
         uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_EXT_FUN_80064768(unaff_r28);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ceac @ 0000ceac ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ceac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cef8 @ 0000cef8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cef8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cf48 @ 0000cf48 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cf48(void)

{
  int iVar1;
  
  iVar1 = FUN_0000ead8();
  if (*(char *)(iVar1 + 4) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cfc8 @ 0000cfc8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cfc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000cfd8 @ 0000cfd8 ==== */

char * FUN_0000cfd8(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == param_2) {
      return param_1;
    }
    if ((cVar1 == '\0') || (cVar1 == '\n')) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return (char *)0x0;
}


/* ==== FUN_0000d010 @ 0000d010 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000d010(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int local_160 [3];
  undefined4 local_154;
  undefined4 local_150;
  undefined1 auStack_14c [8];
  int local_144 [5];
  undefined2 local_130;
  undefined1 auStack_12e [302];
  
  uVar4 = FUN_0000ead4();
  uVar2 = (uint)(uVar4 >> 0x20);
  local_160[0] = 0;
  local_150 = 0;
  local_160[1] = 0;
  thunk_EXT_FUN_8010d110(auStack_14c,0,0x18);
  local_130 = 0;
  thunk_EXT_FUN_8010d110(auStack_12e,0,0xfe);
  thunk_EXT_FUN_816cac20();
  while ((iVar1 = thunk_EXT_FUN_816c7d78(), iVar1 != 0 &&
         (iVar1 = thunk_EXT_FUN_816caf08(1), iVar1 != 0))) {
    thunk_EXT_FUN_81721b90(10,0);
  }
  thunk_EXT_FUN_80066368(local_144,0,1,0);
  local_160[2] = thunk_EXT_FUN_816e0bf0(0x12a);
  local_154 = thunk_EXT_FUN_816e0bf0(0x78);
  if ((uVar4 & 0xff) == 0) {
    uVar3 = 0x80202720;
  }
  else {
    uVar3 = 0x802027e8;
  }
  uVar2 = thunk_EXT_FUN_8010c880
                    (&local_130,0x80,uVar3,uVar2 >> 0x18,uVar2 >> 0x10 & 0xff,uVar2 & 0xffff);
  if (uVar2 < 0x80) {
    do {
      iVar1 = thunk_EXT_FUN_816c5508(0xff,0x80202890,&local_130,2,local_160 + 2,1,3,local_160);
    } while (iVar1 == 5);
    if (iVar1 == 0x3e5) {
      thunk_EXT_FUN_816a2898(&local_150,0,1);
      thunk_EXT_FUN_80089eb0(local_144[0]);
      DAT_80203071 = 1;
    }
  }
  if (local_144[0] != 0) {
    thunk_EXT_FUN_80089eb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000d198 @ 0000d198 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000d198(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000d1e8 @ 0000d1e8 ==== */

void FUN_0000d1e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000d238 @ 0000d238 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000d238(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    *param_2 = 0;
    thunk_EXT_FUN_816a0d70(0x80203080,0,0,0);
    uVar2 = 0;
    piVar1 = (int *)*_DAT_802044c4;
    pcVar3 = *(code **)(*piVar1 + 0x2c);
  }
  else {
    piVar1 = *(int **)(*_DAT_802044c4 + 0x504);
    if (piVar1 == (int *)0x0) {
      return;
    }
    uVar2 = 3;
    pcVar3 = (code *)&SUB_913e7aa8;
  }
  (*pcVar3)(piVar1,uVar2);
  return;
}


/* ==== FUN_0000d2c8 @ 0000d2c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000d2c8(void)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  short *psVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  
  puVar2 = (undefined4 *)FUN_0000eac0();
  pcVar6 = (char *)*puVar2;
  iVar3 = FUN_0000b888(puVar2,0);
  if (iVar3 == 0) {
    if (*pcVar6 != '\x04') {
      puVar2[0x14] = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    psVar8 = *(short **)(pcVar6 + 0xc);
    uVar10 = 0;
    sVar1 = *psVar8;
    while (sVar1 != 0) {
      uVar11 = FUN_0000e780();
      psVar8 = psVar8 + 1;
      uVar10 = (uVar11 & 0xff) + (uVar10 & 1) * 0x8000 + (uVar10 >> 1 & 0x7fff);
      uVar10 = (uVar10 * 0x8000 & 0x8000) + ((uVar11 & 0xffff) >> 8) + (uVar10 >> 1 & 0x7fff);
      sVar1 = *psVar8;
    }
    iVar3 = FUN_0000c970(puVar2,0);
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
              iVar4 = FUN_0000e780(CONCAT11(((undefined1 *)(*(int *)(pcVar6 + 0x50) + uVar11))[1],
                                            *(undefined1 *)(*(int *)(pcVar6 + 0x50) + uVar11)));
              iVar5 = FUN_0000e780(*(undefined2 *)(iVar7 + *(int *)(pcVar6 + 0xc)));
              if (iVar4 != iVar5) break;
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
        iVar3 = FUN_0000c970(puVar2,0);
      } while (iVar3 == 0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000d468 @ 0000d468 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000d468(undefined4 param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int in_r9;
  byte in_r10;
  byte *pbVar5;
  char *pcVar6;
  byte in_r11;
  uint uVar7;
  int unaff_r24;
  int unaff_r25;
  uint unaff_r29;
  undefined4 unaff_r30;
  byte unaff_r31;
  
  if (in_r9 == 0xf) {
    if ((*(byte *)(unaff_r25 + 0x4f) & 0x40) == 0) {
      if ((in_r11 & 0x40) != 0) {
        unaff_r31 = in_r11 & 0xbf;
        *(undefined4 *)(unaff_r25 + 0x50) = *(undefined4 *)(unaff_r25 + 0x30);
        unaff_r29 = (uint)(byte)param_2[0xd];
        in_r10 = unaff_r31;
      }
      if ((in_r10 == unaff_r31) && ((unaff_r29 & 0xff) == (uint)(byte)param_2[0xd])) {
        FUN_0000e8a8(*(undefined4 *)(unaff_r24 + 0xc));
      }
    }
  }
  else {
    if (unaff_r31 == 0) {
      pbVar5 = (byte *)(param_2 + -1);
      uVar7 = 0;
      iVar3 = 0xb;
      do {
        pbVar5 = pbVar5 + 1;
        uVar7 = (uVar7 & 1) * 0x80 + (uVar7 >> 1 & 0x7f) + (uint)*pbVar5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if ((unaff_r29 & 0xff) == (uVar7 & 0xff)) {
        halt_baddata();
      }
    }
    if ((*(byte *)(unaff_r25 + 0x4f) & 1) == 0) {
      pcVar6 = (char *)(unaff_r25 + 0x44);
      pcVar4 = param_2 + 0xb;
      do {
        cVar1 = *param_2;
        cVar2 = *pcVar6;
        if (cVar1 != cVar2) break;
        param_2 = param_2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (param_2 != pcVar4);
      if (cVar1 == cVar2) {
        halt_baddata();
      }
    }
    *(undefined4 *)(unaff_r25 + 0x50) = unaff_r30;
  }
  iVar3 = FUN_0000cb40(unaff_r25,0);
  if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000d578 @ 0000d578 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000d578(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000d588 @ 0000d588 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000d588(void)

{
  ushort uVar1;
  int *piVar2;
  short *psVar3;
  ushort *puVar4;
  uint uVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  short *psVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uVar19;
  
  uVar19 = FUN_0000eab8();
  piVar2 = (int *)((ulonglong)uVar19 >> 0x20);
  uVar15 = 0;
  puVar4 = (ushort *)*(undefined4 *)uVar19;
  uVar14 = 0;
  psVar12 = *(short **)(*piVar2 + 0xc);
  psVar3 = psVar12 + -1;
  while( true ) {
    uVar9 = (uint)*puVar4;
    puVar7 = puVar4 + 1;
    if ((0xd7ff < uVar9) && (uVar9 < 0xe000)) {
      uVar1 = *puVar7;
      if (0xdbff < uVar9) {
        halt_baddata();
      }
      if (uVar1 < 0xdc00) {
        halt_baddata();
      }
      if (0xdfff < uVar1) {
        halt_baddata();
      }
      uVar9 = CONCAT22(*puVar4,uVar1);
      puVar7 = puVar4 + 2;
    }
    puVar4 = puVar7;
    if (uVar9 == 0xffffffff) {
      halt_baddata();
    }
    if (0xffff < uVar9) {
      uVar14 = uVar14 + 1;
      psVar3[1] = (short)(uVar9 >> 0x10);
      psVar3 = psVar3 + 1;
    }
    uVar11 = uVar9 & 0xffff;
    if (((uVar11 < 0x20) || (uVar11 == 0x2f)) || (uVar11 == 0x5c)) break;
    if (uVar11 < 0x80) {
      uVar8 = 0x2a;
      pcVar6 = (char *)0x802028c4;
      do {
        if (uVar8 == uVar11) break;
        pcVar6 = pcVar6 + 1;
        uVar8 = (uint)*pcVar6;
      } while (uVar8 != 0);
      if ((-(uint)(uVar11 == (int)*pcVar6) & (uint)pcVar6) != 0) {
        halt_baddata();
      }
    }
    if (0xfe < uVar14) {
      halt_baddata();
    }
    psVar3 = psVar3 + 1;
    *psVar3 = (short)uVar9;
    uVar14 = uVar14 + 1;
  }
  if (uVar11 < 0x20) {
LAB_0000d6cc:
    bVar13 = 4;
  }
  else {
    for (; (uVar1 = *puVar4, uVar1 == 0x2f || (uVar1 == 0x5c)); puVar4 = puVar4 + 1) {
    }
    bVar13 = 0;
    if (uVar1 < 0x20) goto LAB_0000d6cc;
  }
  *(undefined4 *)uVar19 = puVar4;
  if (uVar14 != 0) {
    psVar3 = psVar12 + uVar14;
    do {
      psVar3 = psVar3 + -1;
      if ((*psVar3 != 0x20) && (*psVar3 != 0x2e)) break;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  psVar3 = psVar12 + uVar14;
  psVar12[uVar14] = 0;
  if (uVar14 == 0) {
    halt_baddata();
  }
  uVar9 = 0;
  psVar10 = psVar12;
  if (*psVar12 == 0x20) {
    do {
      psVar10 = psVar10 + 1;
      uVar9 = uVar9 + 1;
    } while (*psVar10 == 0x20);
    if (uVar9 == 0) goto LAB_0000d748;
  }
  else {
LAB_0000d748:
    if (psVar12[uVar9] != 0x2e) goto joined_r0x0000d764;
  }
  bVar13 = bVar13 | 3;
joined_r0x0000d764:
  while ((uVar14 != 0 && (psVar3 = psVar3 + -1, *psVar3 != 0x2e))) {
    uVar14 = uVar14 - 1;
  }
  piVar18 = piVar2 + 0x11;
  piVar2[0x11] = 0x20202020;
  piVar2[0x12] = 0x20202020;
  *(undefined2 *)(piVar2 + 0x13) = 0x2020;
  uVar8 = 8;
  *(undefined1 *)((int)piVar2 + 0x4e) = 0x20;
  uVar11 = (uint)(ushort)psVar12[uVar9];
  if (uVar11 != 0) {
    uVar16 = 0;
    do {
      uVar9 = uVar9 + 1;
      uVar17 = uVar16;
      if ((uVar11 == 0x20) || ((uVar11 == 0x2e && (uVar9 != uVar14)))) {
LAB_0000d840:
        bVar13 = bVar13 | 3;
      }
      else if ((uVar16 < uVar8) && (uVar9 != uVar14)) {
        if (0x7f < uVar11) {
          bVar13 = bVar13 | 2;
          uVar11 = FUN_0000e990(uVar11,0x1b5);
          if ((uVar11 & 0x80) != 0) {
            uVar11 = (uint)*(byte *)((uVar11 & 0x7f) + 0x80201c20);
          }
        }
        uVar17 = uVar11 & 0xffff;
        if (uVar17 < 0x100) {
          if (uVar17 != 0) {
            uVar5 = 0x2b;
            pcVar6 = (char *)0x802028d0;
            do {
              if (uVar5 == uVar17) break;
              pcVar6 = pcVar6 + 1;
              uVar5 = (uint)*pcVar6;
            } while (uVar5 != 0);
            if ((-(uint)(uVar17 == (int)*pcVar6) & (uint)pcVar6) == 0) {
              if ((0x40 < uVar17) && (uVar17 < 0x5b)) {
                uVar15 = uVar15 | 2;
              }
              if ((0x60 < uVar17) && (uVar17 < 0x7b)) {
                uVar15 = uVar15 | 1;
                uVar11 = uVar17 + 0xffe0 & 0xffff;
              }
              goto LAB_0000d8fc;
            }
          }
          uVar11 = 0x5f;
          bVar13 = bVar13 | 3;
        }
        else {
          uVar17 = uVar8;
          if (uVar8 - 1 <= uVar16) goto LAB_0000d840;
          *(char *)((int)piVar18 + uVar16) = (char)(uVar11 >> 8);
          uVar16 = uVar16 + 1;
        }
LAB_0000d8fc:
        *(char *)((int)piVar18 + uVar16) = (char)uVar11;
        uVar17 = uVar16 + 1;
      }
      else {
        if (uVar8 == 0xb) {
          bVar13 = bVar13 | 3;
          break;
        }
        if ((uVar9 != uVar14) && (bVar13 = bVar13 | 3, uVar14 < uVar9)) break;
        uVar17 = 8;
        uVar8 = 0xb;
        uVar15 = (uVar15 & 0x3f) << 2;
        uVar9 = uVar14;
      }
      uVar11 = (uint)(ushort)psVar12[uVar9];
      uVar16 = uVar17;
    } while (uVar11 != 0);
  }
  if (*(char *)piVar18 == -0x1b) {
    *(char *)piVar18 = '\x05';
  }
  if (uVar8 == 8) {
    uVar15 = (uVar15 & 0x3f) << 2;
  }
  if (((uVar15 & 0xc) == 0xc) || ((uVar15 & 3) == 3)) {
    bVar13 = bVar13 | 2;
  }
  if ((bVar13 & 2) == 0) {
    if ((uVar15 & 1) != 0) {
      bVar13 = bVar13 | 0x10;
    }
    if ((uVar15 & 4) != 0) {
      bVar13 = bVar13 | 8;
    }
  }
  *(byte *)((int)piVar2 + 0x4f) = bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000d9c0 @ 0000d9c0 ==== */

undefined4 FUN_0000d9c0(uint param_1,undefined2 *param_2,uint param_3)

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


/* ==== FUN_0000da38 @ 0000da38 ==== */

uint FUN_0000da38(uint param_1,short param_2)

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
  return (uint)*(ushort *)((uVar1 - 0x80) * 2 + -0x7fdfd728);
}


/* ==== FUN_0000da80 @ 0000da80 ==== */

void FUN_0000da80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000daa8 @ 0000daa8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000daa8(void)

{
  int unaff_r30;
  int unaff_r31;
  
  if (*(int *)(unaff_r31 + 0x18) - 2U <= unaff_r30 - 2U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000db0c @ 0000db0c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000db0c(void)

{
  int iVar1;
  uint unaff_r30;
  int unaff_r31;
  
  if (0x200 < unaff_r30) {
    do {
      iVar1 = FUN_0000afe0(unaff_r30);
      if (iVar1 != 0) break;
      unaff_r30 = unaff_r30 >> 1;
    } while (0x200 < unaff_r30);
    if (0x200 < unaff_r30) {
      thunk_EXT_FUN_8010d110(iVar1,0,unaff_r30);
      if (*(short *)(unaff_r31 + 10) == 0) {
        thunk_EXT_FUN_80064768(iVar1);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (*(short *)(unaff_r31 + 10) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000db5c @ 0000db5c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000db5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dba8 @ 0000dba8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dba8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dbf0 @ 0000dbf0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dbf0(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar1 = (char *)FUN_0000ead8();
  iVar2 = FUN_0000cf48();
  if (iVar2 == 0) {
    if (pcVar1[5] == '\x01') {
      pcVar1[5] = '\0';
      if (*pcVar1 == '\x03') {
        pcVar4 = pcVar1 + 0x54;
        thunk_EXT_FUN_8010d110(pcVar4,0,0x200);
        pcVar4[0] = 'R';
        pcVar4[1] = 'R';
        pcVar4[2] = 'a';
        pcVar4[3] = 'A';
        pcVar1[0x238] = 'r';
        pcVar1[0x239] = 'r';
        pcVar1[0x23a] = 'A';
        pcVar1[0x23b] = 'a';
        uVar3 = *(uint *)(pcVar1 + 0x14);
        *(uint *)(pcVar1 + 0x23c) =
             uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00 | uVar3 >> 0x18;
        uVar3 = *(uint *)(pcVar1 + 0x10);
        *(uint *)(pcVar1 + 0x240) =
             uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00 | uVar3 >> 0x18;
        pcVar1[0x250] = '\0';
        pcVar1[0x251] = '\0';
        pcVar1[0x252] = 'U';
        pcVar1[0x253] = -0x56;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*pcVar1 == '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    FUN_0000e9f8(pcVar1[1],0,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dcec @ 0000dcec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dcec(void)

{
  int unaff_r31;
  
  if (*(char *)(unaff_r31 + 0xc4) != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0000e9f8(*(undefined1 *)(unaff_r31 + 1),0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dd08 @ 0000dd08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dd08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r30;
  int unaff_r31;
  
  FUN_0000e618(*(undefined1 *)(unaff_r31 + 1),unaff_r30,param_3,1);
  FUN_0000e9f8(*(undefined1 *)(unaff_r31 + 1),0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dd40 @ 0000dd40 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dd40(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0000ead4();
  iVar2 = FUN_0000b888(uVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dda0 @ 0000dda0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dda0(void)

{
  int iVar1;
  int in_r11;
  int unaff_r28;
  int unaff_r30;
  undefined4 unaff_r31;
  
  if ((((in_r11 != 0xe5) && (in_r11 != 0)) || (unaff_r30 + 1 != unaff_r28)) &&
     (iVar1 = FUN_0000cb40(unaff_r31,1), iVar1 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ddf8 @ 0000ddf8 ==== */

void FUN_0000ddf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000de88 @ 0000de88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000de88(void)

{
  int in_r10;
  uint unaff_r27;
  uint unaff_r30;
  int unaff_r31;
  
  *(uint *)((unaff_r30 & 0x7f) * 4 + unaff_r31 + in_r10) =
       unaff_r27 << 0x18 | (unaff_r27 & 0xff00) << 8 | unaff_r27 >> 8 & 0xff00 | unaff_r27 >> 0x18;
  *(undefined1 *)(unaff_r31 + 4) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000dea0 @ 0000dea0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000dea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ded8 @ 0000ded8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ded8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000df24 @ 0000df24 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000df24(void)

{
  int in_r11;
  undefined1 unaff_r27;
  
  *(undefined1 *)(in_r11 + 0x54) = unaff_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000df68 @ 0000df68 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000df68(void)

{
  int in_r11;
  undefined4 unaff_r27;
  undefined1 unaff_r29;
  int unaff_r31;
  
  *(byte *)(in_r11 + 0x54) = *(byte *)(in_r11 + 0x54) & 0xf0 | (byte)((uint)unaff_r27 >> 8) & 0xf;
  *(undefined1 *)(unaff_r31 + 4) = unaff_r29;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000df88 @ 0000df88 ==== */

void FUN_0000df88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000ead0();
}


/* ==== FUN_0000e004 @ 0000e004 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e004(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e040 @ 0000e040 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e040(void)

{
  int iVar1;
  int in_r11;
  int unaff_r27;
  uint unaff_r28;
  undefined4 unaff_r30;
  
  if ((in_r11 + 0x2cU) / 0xf << 5 <= unaff_r28) {
    iVar1 = FUN_0000cb40(unaff_r30,0);
    if (iVar1 == 4) {
      iVar1 = unaff_r27;
    }
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e0b4 @ 0000e0b4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e0b4(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r27;
  uint unaff_r28;
  int unaff_r29;
  undefined4 unaff_r30;
  int unaff_r31;
  
  if (unaff_r29 + 0x20U < unaff_r28) {
    iVar1 = FUN_0000cb40(unaff_r30,0);
    if (iVar1 == 4) {
      iVar1 = unaff_r27;
    }
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (unaff_r29 + 0x20U < 0x261) {
    uVar2 = 0;
    iVar1 = *(byte *)(unaff_r31 + 1) + 1;
    if (iVar1 != 0) {
      do {
        if (uVar2 == 2) {
          uVar2 = 3;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(iVar1 * 0x20));
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e138 @ 0000e138 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e138(void)

{
  short sVar1;
  char cVar2;
  undefined1 *puVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_0000ead8();
  puVar3 = (undefined1 *)((ulonglong)uVar10 >> 0x20);
  psVar8 = (short *)uVar10;
  thunk_EXT_FUN_8010d110(puVar3,0,0x40);
  uVar9 = 0;
  *puVar3 = 0x85;
  puVar3[0x20] = 0xc0;
  uVar6 = 0x40;
  uVar7 = 0;
  uVar4 = 1;
  cVar2 = '\0';
  do {
    cVar5 = cVar2;
    puVar3[uVar6] = 0xc1;
    puVar3[uVar6 + 1] = 0;
    uVar6 = uVar6 + 2;
    do {
      if (uVar4 != 0) {
        uVar4 = psVar8[uVar7];
        if (uVar4 != 0) {
          uVar7 = uVar7 + 1 & 0xff;
        }
      }
      *(ushort *)(puVar3 + uVar6) = uVar4 >> 8 | uVar4 << 8;
      uVar6 = uVar6 + 2;
    } while ((uVar6 & 0x1f) != 0);
    cVar2 = cVar5 + '\x01';
  } while (psVar8[uVar7] != 0);
  puVar3[0x23] = (char)uVar7;
  puVar3[1] = cVar5 + '\x02';
  sVar1 = *psVar8;
  while (sVar1 != 0) {
    uVar7 = FUN_0000e780();
    psVar8 = psVar8 + 1;
    uVar6 = (uVar7 & 0xff) + (uVar9 & 1) * 0x8000 + (uVar9 >> 1 & 0x7fff);
    uVar9 = (uVar6 * 0x8000 & 0x8000) + ((uVar7 & 0xffff) >> 8) + (uVar6 >> 1 & 0x7fff);
    sVar1 = *psVar8;
  }
  *(ushort *)(puVar3 + 0x24) = (ushort)uVar9 >> 8 | (ushort)(byte)uVar9 << 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e248 @ 0000e248 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e248(undefined4 param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  char acStack_32 [50];
  
  uVar9 = FUN_0000ead8();
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  thunk_EXT_FUN_8010cc40(iVar2,(int)uVar9,0xb);
  uVar5 = param_4 & 0xffff;
  if (5 < uVar5) {
    uVar1 = *param_3;
    while (uVar6 = (uint)uVar1, uVar6 != 0) {
      param_3 = param_3 + 1;
      iVar8 = 0x10;
      do {
        uVar7 = uVar6 & 1;
        uVar6 = uVar6 >> 1;
        uVar5 = uVar7 + uVar5 * 2;
        if ((uVar5 & 0x10000) != 0) {
          uVar5 = uVar5 ^ 0x11021;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      uVar1 = *param_3;
    }
    param_4 = uVar5 & 0xffff;
  }
  uVar5 = 7;
  do {
    uVar6 = uVar5;
    uVar5 = param_4 & 0xffff;
    param_4 = param_4 >> 4 & 0xfff;
    uVar5 = uVar5 + ((int)uVar5 >> 4) * -0x10 + 0x30;
    cVar4 = (char)uVar5;
    if (0x39 < (uVar5 & 0xff)) {
      cVar4 = cVar4 + '\a';
    }
    acStack_32[uVar6 + 2] = cVar4;
    uVar5 = uVar6 - 1;
  } while ((uVar5 != 0) && (param_4 != 0));
  uVar7 = 0;
  acStack_32[uVar6 + 1] = '~';
  if (uVar5 != 0) {
    do {
      if (*(char *)(uVar7 + iVar2) == ' ') break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  pcVar3 = acStack_32 + uVar6;
  do {
    if (uVar5 < 8) {
      pcVar3 = pcVar3 + 1;
      cVar4 = *pcVar3;
      uVar5 = uVar5 + 1;
    }
    else {
      cVar4 = ' ';
    }
    *(char *)(uVar7 + iVar2) = cVar4;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e378 @ 0000e378 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e378(void)

{
  FUN_0000eac4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e3c8 @ 0000e3c8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e3c8(void)

{
  int iVar1;
  uint unaff_r24;
  byte unaff_r25;
  int unaff_r26;
  int unaff_r27;
  byte unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  do {
    unaff_r27 = unaff_r27 + 1;
    do {
      if (unaff_r24 == ((*(byte *)(unaff_r26 + unaff_r30) & unaff_r28) != 0)) {
        halt_baddata();
      }
      unaff_r29 = unaff_r29 + -1;
      *(byte *)(unaff_r26 + unaff_r30) = *(byte *)(unaff_r26 + unaff_r30) ^ unaff_r28;
      *(byte *)(unaff_r31 + 4) = unaff_r25;
      if (unaff_r29 == 0) {
        halt_baddata();
      }
      unaff_r28 = unaff_r28 << 1;
    } while ((unaff_r28 != 0) ||
            (unaff_r30 = unaff_r30 + 1, unaff_r28 = unaff_r25, unaff_r30 < 0x200));
    unaff_r30 = 0;
    iVar1 = FUN_0000a4d8(unaff_r31,unaff_r27);
    if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}


/* ==== FUN_0000e450 @ 0000e450 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e450(void)

{
  FUN_0000eac8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e4a4 @ 0000e4a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e4a4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r25;
  int unaff_r26;
  int unaff_r28;
  uint unaff_r29;
  int unaff_r30;
  uint unaff_r31;
  
  uVar2 = unaff_r31 >> 3 & 0x1ff;
  uVar3 = 1 << (unaff_r31 & 7) & 0xff;
  while( true ) {
    unaff_r31 = unaff_r31 + 1;
    uVar1 = uVar3 & *(byte *)(unaff_r26 + uVar2);
    uVar3 = (uVar3 & 0x7f) << 1;
    if (*(int *)(unaff_r30 + 0x18) - 2U <= unaff_r31) {
      unaff_r31 = 0;
      uVar3 = 0;
      uVar2 = 0x200;
    }
    if (uVar1 == 0) {
      unaff_r28 = unaff_r28 + 1;
      if (unaff_r28 == unaff_r25) {
        halt_baddata();
      }
    }
    else {
      unaff_r28 = 0;
    }
    if (unaff_r31 == unaff_r29) break;
    if (uVar3 == 0) {
      uVar2 = uVar2 + 1;
      uVar3 = 1;
      if (0x1ff < uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e548 @ 0000e548 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e550 @ 0000e550 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e550(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e560 @ 0000e560 ==== */

undefined4 FUN_0000e560(int param_1,byte *param_2)

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
    sVar1 = CONCAT11((param_2 + *(byte *)(uVar3 + 0x80201c00))[1],
                     param_2[*(byte *)(uVar3 + 0x80201c00)]);
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


/* ==== FUN_0000e618 @ 0000e618 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e618(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e658 @ 0000e658 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e658(void)

{
  thunk_EXT_FUN_80085ea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e664 @ 0000e664 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e664(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int in_r11;
  
  cVar1 = *(char *)(*(int *)(*(int *)(in_r11 + 0x18) + 0xa0) + 0x1c);
  if (cVar1 == '\a') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar1 == '-') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_EXT_FUN_80085ee8(0x80202cf0,cVar1,param_3,*(int *)(in_r11 + 0x20) * param_4);
  thunk_EXT_FUN_80085ea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e6a4 @ 0000e6a4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e6a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e6d8 @ 0000e6d8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e6d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e6e0 @ 0000e6e0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e6e0(void)

{
  thunk_EXT_FUN_80085ee8(0x80202cf0);
  thunk_EXT_FUN_80085ea0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e708 @ 0000e708 ==== */

void FUN_0000e708(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0x14;
  param_1[1] = param_2;
  return;
}


/* ==== FUN_0000e730 @ 0000e730 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e780 @ 0000e780 ==== */

uint FUN_0000e780(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  char *pcVar6;
  
  if (0xffff < param_1) {
    return param_1;
  }
  param_1 = param_1 & 0xffff;
  puVar5 = (ushort *)&DAT_80202bd0;
  if (param_1 < 0x1000) {
    puVar5 = (ushort *)&DAT_802029d8;
  }
  uVar1 = *puVar5;
  while( true ) {
    uVar2 = (uint)uVar1;
    if (uVar2 == 0) {
      return param_1;
    }
    puVar3 = puVar5 + 1;
    if (param_1 < uVar2) break;
    puVar5 = puVar5 + 2;
    uVar4 = *puVar3 & 0xff;
    uVar1 = *puVar3 >> 8;
    if (param_1 < uVar4 + uVar2) {
      if (uVar1 < 9) {
        if (uVar1 == 1) {
          pcVar6 = (char *)(param_1 - (param_1 - uVar2 & 1));
        }
        else if (uVar1 == 2) {
          pcVar6 = (char *)(param_1 + 0xfff0);
        }
        else if (uVar1 == 3) {
          pcVar6 = (char *)(param_1 + 0xffe0);
        }
        else if (uVar1 == 4) {
          pcVar6 = s__Device_Harddisk0_Partition1_Pee_0000ff88 + param_1 + 0x48;
        }
        else if (uVar1 == 5) {
          pcVar6 = (char *)(param_1 + 0xffe6);
        }
        else if (uVar1 == 6) {
          pcVar6 = (char *)(param_1 + 8);
        }
        else if (uVar1 == 7) {
          pcVar6 = s__Device_Harddisk0_Partition1_Pee_0000ff88 + param_1 + 0x28;
        }
        else {
          if (uVar1 == 0) {
            return (uint)puVar5[param_1 - uVar2];
          }
          pcVar6 = (char *)(param_1 + 0xe3a0);
        }
        param_1 = (uint)pcVar6 & 0xffff;
      }
      return param_1;
    }
    if (uVar1 == 0) {
      puVar5 = puVar5 + uVar4;
    }
    uVar1 = *puVar5;
  }
  return param_1;
}


/* ==== FUN_0000e8a8 @ 0000e8a8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e8a8(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_0000eac0();
  pbVar4 = (byte *)uVar11;
  if (CONCAT11(pbVar4[0x1b],pbVar4[0x1a]) == 0) {
    uVar9 = 0;
    iVar7 = (*pbVar4 & 0x3f) - 1;
    uVar10 = iVar7 * 0xd;
    puVar8 = (undefined2 *)(iVar7 * 0x1a + (int)((ulonglong)uVar11 >> 0x20) + -2);
    sVar5 = 1;
    do {
      sVar6 = CONCAT11((pbVar4 + *(byte *)(uVar9 + 0x80201c00))[1],
                       pbVar4[*(byte *)(uVar9 + 0x80201c00)]);
      if (sVar5 == 0) {
        bVar1 = sVar6 != -1;
        sVar6 = sVar5;
        if (bVar1) {
          halt_baddata();
        }
      }
      else {
        if (0xff < uVar10) {
          halt_baddata();
        }
        puVar8 = puVar8 + 1;
        uVar2 = *puVar8;
        iVar7 = FUN_0000e780(sVar6);
        iVar3 = FUN_0000e780(uVar2);
        uVar10 = uVar10 + 1;
        if (iVar7 != iVar3) {
          halt_baddata();
        }
      }
      uVar9 = uVar9 + 1;
      sVar5 = sVar6;
    } while (uVar9 < 0xd);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000e990 @ 0000e990 ==== */

uint FUN_0000e990(uint param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x80) {
    uVar1 = param_1 & 0xffff;
  }
  else if ((param_1 < 0x10000) && (param_2 == 0x1b5)) {
    uVar1 = 0;
    do {
      if (param_1 == *(ushort *)(uVar1 * 2 + -0x7fdfd728)) break;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 0x80);
    uVar1 = uVar1 - 0x80 & 0xff;
  }
  return uVar1;
}


/* ==== FUN_0000e9f8 @ 0000e9f8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000e9f8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_0000ead8();
  uVar2 = (uint)(uVar4 >> 0x20);
  uVar1 = (uint)uVar4 & 0xff;
  thunk_EXT_FUN_80085ee8(0x80202d28,uVar1);
  iVar3 = *(int *)((uVar2 & 0xff) * 4 + -0x7fdfcff4);
  if (iVar3 == 0) {
    thunk_EXT_FUN_80085ee8(0x80202c8c,uVar2 & 0xff);
    thunk_EXT_FUN_80085ea0();
  }
  else if ((uVar4 & 0xff) != 0) {
    if (uVar1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar1 < 3) {
      *(short *)param_3 = (short)*(undefined4 *)(iVar3 + 0x20);
    }
    else if (uVar1 == 3) {
      *param_3 = 0x80;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ea88 @ 0000ea88 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ea88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ea9c @ 0000ea9c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ea9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eab0 @ 0000eab0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eab0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eab4 @ 0000eab4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eab4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eab8 @ 0000eab8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eab8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eabc @ 0000eabc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eabc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eac0 @ 0000eac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eac0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eac4 @ 0000eac4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eac4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eac8 @ 0000eac8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eac8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eacc @ 0000eacc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eacc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ead0 @ 0000ead0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ead0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ead4 @ 0000ead4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ead4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000ead8 @ 0000ead8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000ead8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eaec @ 0000eaec ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eaec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb00 @ 0000eb00 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb04 @ 0000eb04 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb04(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb08 @ 0000eb08 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb0c @ 0000eb0c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb10 @ 0000eb10 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb14 @ 0000eb14 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb18 @ 0000eb18 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb1c @ 0000eb1c ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb20 @ 0000eb20 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb24 @ 0000eb24 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb28 @ 0000eb28 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000eb28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_0000eb5c @ 0000eb5c ==== */

void FUN_0000eb5c(void)

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


/* ==== FUN_0000eb6c @ 0000eb6c ==== */

void FUN_0000eb6c(void)

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


/* ==== FUN_0000eba8 @ 0000eba8 ==== */

void FUN_0000eba8(void)

{
  return;
}


/* ==== thunk_EXT_FUN_8010d110 @ 0000ebd8 ==== */

void thunk_EXT_FUN_8010d110(void)

{
  (*(code *)&LAB_8010d110)();
  return;
}


/* ==== FUN_0000ebe8 @ 0000ebe8 ==== */

void FUN_0000ebe8(void)

{
  (*(code *)0x8007d0e8)();
  return;
}


/* ==== FUN_0000ebf8 @ 0000ebf8 ==== */

void FUN_0000ebf8(void)

{
  (*(code *)0x8006eb20)();
  return;
}


/* ==== FUN_0000ec08 @ 0000ec08 ==== */

void FUN_0000ec08(void)

{
  (*(code *)0x80067f48)();
  return;
}


/* ==== thunk_EXT_FUN_80085ee8 @ 0000ec18 ==== */

void thunk_EXT_FUN_80085ee8(void)

{
  (*(code *)&LAB_80085ee8)();
  return;
}


/* ==== FUN_0000ec28 @ 0000ec28 ==== */

void FUN_0000ec28(void)

{
  (*(code *)0x800893b0)();
  return;
}


/* ==== FUN_0000ec38 @ 0000ec38 ==== */

void FUN_0000ec38(void)

{
  (*(code *)0x80073484)();
  return;
}


/* ==== thunk_EXT_FUN_80073850 @ 0000ec48 ==== */

void thunk_EXT_FUN_80073850(void)

{
  (*(code *)&LAB_80073850)();
  return;
}


/* ==== thunk_EXT_FUN_80080048 @ 0000ec58 ==== */

void thunk_EXT_FUN_80080048(void)

{
  (*(code *)&LAB_80080048)();
  return;
}


/* ==== thunk_EXT_FUN_8007f968 @ 0000ec68 ==== */

void thunk_EXT_FUN_8007f968(void)

{
  (*(code *)&LAB_8007f968)();
  return;
}


/* ==== thunk_EXT_FUN_80085ea0 @ 0000ec78 ==== */

void thunk_EXT_FUN_80085ea0(void)

{
  (*(code *)&LAB_80085ea0)();
  return;
}


/* ==== thunk_EXT_FUN_80086110 @ 0000ec88 ==== */

void thunk_EXT_FUN_80086110(void)

{
  (*(code *)&LAB_80086110)();
  return;
}


/* ==== FUN_0000ec98 @ 0000ec98 ==== */

void FUN_0000ec98(void)

{
  (*(code *)0x8008af50)();
  return;
}


/* ==== FUN_0000eca8 @ 0000eca8 ==== */

void FUN_0000eca8(void)

{
  (*(code *)0x8015e218)();
  return;
}


/* ==== FUN_0000ecb8 @ 0000ecb8 ==== */

void FUN_0000ecb8(void)

{
  (*(code *)0x8015e2b8)();
  return;
}


/* ==== thunk_EXT_FUN_800807b8 @ 0000ecc8 ==== */

void thunk_EXT_FUN_800807b8(void)

{
  (*(code *)&LAB_800807b8)();
  return;
}


/* ==== FUN_0000ecd8 @ 0000ecd8 ==== */

void FUN_0000ecd8(void)

{
  (*(code *)0x8008aef0)();
  return;
}


/* ==== FUN_0000ece8 @ 0000ece8 ==== */

void FUN_0000ece8(void)

{
  (*(code *)0x80064498)();
  return;
}


/* ==== thunk_EXT_FUN_80083aa8 @ 0000ecf8 ==== */

void thunk_EXT_FUN_80083aa8(void)

{
  (*(code *)&LAB_80083aa8)();
  return;
}


/* ==== thunk_EXT_FUN_800bdd40 @ 0000ed08 ==== */

void thunk_EXT_FUN_800bdd40(void)

{
  (*(code *)&LAB_800bdd40)();
  return;
}


/* ==== thunk_EXT_FUN_80064768 @ 0000ed18 ==== */

void thunk_EXT_FUN_80064768(void)

{
  (*(code *)&LAB_80064768)();
  return;
}


/* ==== thunk_EXT_FUN_8006caa8 @ 0000ed28 ==== */

void thunk_EXT_FUN_8006caa8(void)

{
  (*(code *)&LAB_8006caa8)();
  return;
}


/* ==== thunk_EXT_FUN_8006d630 @ 0000ed38 ==== */

void thunk_EXT_FUN_8006d630(void)

{
  (*(code *)&LAB_8006d630)();
  return;
}


/* ==== thunk_EXT_FUN_8006cec8 @ 0000ed48 ==== */

void thunk_EXT_FUN_8006cec8(void)

{
  (*(code *)&LAB_8006cec8)();
  return;
}


/* ==== thunk_EXT_FUN_8008b188 @ 0000ed58 ==== */

void thunk_EXT_FUN_8008b188(void)

{
  (*(code *)&LAB_8008b188)();
  return;
}


/* ==== thunk_EXT_FUN_80089eb0 @ 0000ed68 ==== */

void thunk_EXT_FUN_80089eb0(void)

{
  (*(code *)&LAB_80089eb0)();
  return;
}


/* ==== thunk_EXT_FUN_8010cc40 @ 0000ed78 ==== */

void thunk_EXT_FUN_8010cc40(void)

{
  (*(code *)&LAB_8010cc40)();
  return;
}


/* ==== thunk_EXT_FUN_80083190 @ 0000ed88 ==== */

void thunk_EXT_FUN_80083190(void)

{
  (*(code *)&LAB_80083190)();
  return;
}


/* ==== FUN_0000ed98 @ 0000ed98 ==== */

void FUN_0000ed98(void)

{
  (*(code *)0x8007d7c0)();
  return;
}


/* ==== FUN_0000eda8 @ 0000eda8 ==== */

void FUN_0000eda8(void)

{
  (*(code *)0x8007d1b0)();
  return;
}


/* ==== FUN_0000edb8 @ 0000edb8 ==== */

void FUN_0000edb8(void)

{
  (*(code *)0x80061498)();
  return;
}


/* ==== FUN_0000edc8 @ 0000edc8 ==== */

void FUN_0000edc8(void)

{
  (*(code *)0x800c6918)();
  return;
}


/* ==== FUN_0000edd8 @ 0000edd8 ==== */

void FUN_0000edd8(void)

{
  (*(code *)0x800c6b58)();
  return;
}


/* ==== FUN_0000ede8 @ 0000ede8 ==== */

void FUN_0000ede8(void)

{
  (*(code *)0x800c7650)();
  return;
}


/* ==== FUN_0000edf8 @ 0000edf8 ==== */

void FUN_0000edf8(void)

{
  (*(code *)0x800bede8)();
  return;
}


/* ==== FUN_0000ee08 @ 0000ee08 ==== */

void FUN_0000ee08(void)

{
  (*(code *)0x800cf670)();
  return;
}


/* ==== FUN_0000ee18 @ 0000ee18 ==== */

void FUN_0000ee18(void)

{
  (*(code *)0x800c6010)();
  return;
}


/* ==== FUN_0000ee38 @ 0000ee38 ==== */

void FUN_0000ee38(void)

{
  (*(code *)0x80065f40)();
  return;
}


/* ==== thunk_EXT_FUN_80086150 @ 0000ee48 ==== */

void thunk_EXT_FUN_80086150(void)

{
  (*(code *)&LAB_80086150)();
  return;
}


/* ==== thunk_EXT_FUN_800864b0 @ 0000ee58 ==== */

void thunk_EXT_FUN_800864b0(void)

{
  (*(code *)&LAB_800864b0)();
  return;
}


/* ==== thunk_EXT_FUN_80070138 @ 0000ee68 ==== */

void thunk_EXT_FUN_80070138(void)

{
  (*(code *)&LAB_80070138)();
  return;
}


/* ==== FUN_0000ee78 @ 0000ee78 ==== */

void FUN_0000ee78(void)

{
  (*(code *)0x8008c148)();
  return;
}


/* ==== FUN_0000ee88 @ 0000ee88 ==== */

void FUN_0000ee88(void)

{
  (*(code *)0x8008a348)();
  return;
}


/* ==== FUN_0000ee98 @ 0000ee98 ==== */

void FUN_0000ee98(void)

{
  (*(code *)0x8008b8e0)();
  return;
}


/* ==== thunk_EXT_FUN_8007018c @ 0000eea8 ==== */

void thunk_EXT_FUN_8007018c(void)

{
  (*(code *)&LAB_8007018c)();
  return;
}


/* ==== FUN_0000eeb8 @ 0000eeb8 ==== */

void FUN_0000eeb8(void)

{
  (*(code *)0x8008b928)();
  return;
}


/* ==== thunk_EXT_FUN_800718e0 @ 0000eec8 ==== */

void thunk_EXT_FUN_800718e0(void)

{
  (*(code *)&LAB_800718e0)();
  return;
}


/* ==== thunk_EXT_FUN_800642b8 @ 0000eed8 ==== */

void thunk_EXT_FUN_800642b8(void)

{
  (*(code *)&LAB_800642b8)();
  return;
}


/* ==== thunk_EXT_FUN_800643d8 @ 0000eee8 ==== */

void thunk_EXT_FUN_800643d8(void)

{
  (*(code *)&LAB_800643d8)();
  return;
}


/* ==== thunk_EXT_FUN_800718f8 @ 0000eef8 ==== */

void thunk_EXT_FUN_800718f8(void)

{
  (*(code *)&LAB_800718f8)();
  return;
}


/* ==== thunk_EXT_FUN_8010d1b0 @ 0000ef08 ==== */

void thunk_EXT_FUN_8010d1b0(void)

{
  (*(code *)&LAB_8010d1b0)();
  return;
}


/* ==== thunk_EXT_FUN_800641d8 @ 0000ef18 ==== */

void thunk_EXT_FUN_800641d8(void)

{
  (*(code *)&LAB_800641d8)();
  return;
}


/* ==== thunk_EXT_FUN_80064a68 @ 0000ef28 ==== */

void thunk_EXT_FUN_80064a68(void)

{
  (*(code *)&LAB_80064a68)();
  return;
}


/* ==== FUN_0000ef38 @ 0000ef38 ==== */

void FUN_0000ef38(void)

{
  (*(code *)0x800893e8)();
  return;
}


/* ==== FUN_0000ef48 @ 0000ef48 ==== */

void FUN_0000ef48(void)

{
  (*(code *)0x80089678)();
  return;
}


/* ==== thunk_EXT_FUN_80086390 @ 0000ef58 ==== */

void thunk_EXT_FUN_80086390(void)

{
  (*(code *)&LAB_80086390)();
  return;
}


/* ==== FUN_0000ef68 @ 0000ef68 ==== */

void FUN_0000ef68(void)

{
  (*(code *)0x80089590)();
  return;
}


/* ==== thunk_EXT_FUN_80066368 @ 0000ef78 ==== */

void thunk_EXT_FUN_80066368(void)

{
  (*(code *)&LAB_80066368)();
  return;
}


/* ==== thunk_EXT_FUN_816e0bf0 @ 0000ef88 ==== */

void thunk_EXT_FUN_816e0bf0(void)

{
  (*(code *)&LAB_816e0bf0)();
  return;
}


/* ==== thunk_EXT_FUN_816c5508 @ 0000ef98 ==== */

void thunk_EXT_FUN_816c5508(void)

{
  (*(code *)&LAB_816c5508)();
  return;
}


/* ==== thunk_EXT_FUN_816a2898 @ 0000efa8 ==== */

void thunk_EXT_FUN_816a2898(void)

{
  (*(code *)&LAB_816a2898)();
  return;
}


/* ==== FUN_0000efb8 @ 0000efb8 ==== */

void FUN_0000efb8(void)

{
  (*(code *)0x816a1458)();
  return;
}


/* ==== thunk_EXT_FUN_800655a0 @ 0000efc8 ==== */

void thunk_EXT_FUN_800655a0(void)

{
  (*(code *)&LAB_800655a0)();
  return;
}


/* ==== FUN_0000efd8 @ 0000efd8 ==== */

void FUN_0000efd8(void)

{
  (*(code *)0x800801d8)();
  return;
}


/* ==== thunk_EXT_FUN_8010c7f8 @ 0000efe8 ==== */

void thunk_EXT_FUN_8010c7f8(void)

{
  (*(code *)&LAB_8010c7f8)();
  return;
}


/* ==== FUN_0000f008 @ 0000f008 ==== */

void FUN_0000f008(void)

{
  (*(code *)0x8006aea0)();
  return;
}


/* ==== FUN_0000f018 @ 0000f018 ==== */

void FUN_0000f018(void)

{
  (*(code *)0x80089760)();
  return;
}


/* ==== FUN_0000f028 @ 0000f028 ==== */

void FUN_0000f028(void)

{
  (*(code *)0x8006b150)();
  return;
}


/* ==== FUN_0000f038 @ 0000f038 ==== */

void FUN_0000f038(void)

{
  (*(code *)0x80066400)();
  return;
}


/* ==== FUN_0000f048 @ 0000f048 ==== */

void FUN_0000f048(void)

{
  (*(code *)0x8167c0e0)();
  return;
}


/* ==== thunk_EXT_FUN_8010c880 @ 0000f058 ==== */

void thunk_EXT_FUN_8010c880(void)

{
  (*(code *)&LAB_8010c880)();
  return;
}


/* ==== FUN_0000f068 @ 0000f068 ==== */

void FUN_0000f068(void)

{
  (*(code *)0x80092458)();
  return;
}


/* ==== thunk_EXT_FUN_8006cf00 @ 0000f0a8 ==== */

void thunk_EXT_FUN_8006cf00(void)

{
  (*(code *)&LAB_8006cf00)();
  return;
}


/* ==== FUN_0000f0b8 @ 0000f0b8 ==== */

void FUN_0000f0b8(void)

{
  (*(code *)0x8010f438)();
  return;
}


/* ==== FUN_0000f0c8 @ 0000f0c8 ==== */

void FUN_0000f0c8(void)

{
  (*(code *)0x816a9de8)();
  return;
}


/* ==== FUN_0000f0d8 @ 0000f0d8 ==== */

void FUN_0000f0d8(void)

{
  (*(code *)0x816dd118)();
  return;
}


/* ==== FUN_0000f0e8 @ 0000f0e8 ==== */

void FUN_0000f0e8(void)

{
  (*(code *)0x8007d320)();
  return;
}


/* ==== FUN_0000f0f8 @ 0000f0f8 ==== */

void FUN_0000f0f8(void)

{
  (*(code *)0x816ddb20)();
  return;
}


/* ==== thunk_EXT_FUN_80092028 @ 0000f108 ==== */

void thunk_EXT_FUN_80092028(void)

{
  (*(code *)&LAB_80092028)();
  return;
}


/* ==== FUN_0000f118 @ 0000f118 ==== */

void FUN_0000f118(void)

{
  (*(code *)0x8006ab28)();
  return;
}


/* ==== FUN_0000f128 @ 0000f128 ==== */

void FUN_0000f128(void)

{
  (*(code *)0x8006ab38)();
  return;
}


/* ==== thunk_EXT_FUN_80088fa0 @ 0000f138 ==== */

void thunk_EXT_FUN_80088fa0(void)

{
  (*(code *)&LAB_80088fa0)();
  return;
}


/* ==== FUN_0000f148 @ 0000f148 ==== */

void FUN_0000f148(void)

{
  (*(code *)0x801495d0)();
  return;
}


/* ==== thunk_EXT_FUN_800890f8 @ 0000f158 ==== */

void thunk_EXT_FUN_800890f8(void)

{
  (*(code *)&LAB_800890f8)();
  return;
}


/* ==== thunk_EXT_FUN_8008b9b0 @ 0000f168 ==== */

void thunk_EXT_FUN_8008b9b0(void)

{
  (*(code *)&LAB_8008b9b0)();
  return;
}


/* ==== FUN_0000f178 @ 0000f178 ==== */

void FUN_0000f178(void)

{
  (*(code *)0x800868a8)();
  return;
}


/* ==== thunk_EXT_FUN_8006ac20 @ 0000f188 ==== */

void thunk_EXT_FUN_8006ac20(void)

{
  (*(code *)&LAB_8006ac20)();
  return;
}


/* ==== thunk_EXT_FUN_8006bbd0 @ 0000f198 ==== */

void thunk_EXT_FUN_8006bbd0(void)

{
  (*(code *)&LAB_8006bbd0)();
  return;
}


/* ==== thunk_EXT_FUN_8006bb38 @ 0000f1a8 ==== */

void thunk_EXT_FUN_8006bb38(void)

{
  (*(code *)&LAB_8006bb38)();
  return;
}


/* ==== thunk_EXT_FUN_8006b9d0 @ 0000f1b8 ==== */

void thunk_EXT_FUN_8006b9d0(void)

{
  (*(code *)&LAB_8006b9d0)();
  return;
}


/* ==== FUN_0000f1c8 @ 0000f1c8 ==== */

void FUN_0000f1c8(void)

{
  (*(code *)0x8006b440)();
  return;
}


/* ==== thunk_EXT_FUN_8006ab48 @ 0000f1d8 ==== */

void thunk_EXT_FUN_8006ab48(void)

{
  (*(code *)&LAB_8006ab48)();
  return;
}


/* ==== thunk_EXT_FUN_8015bac8 @ 0000f1e8 ==== */

void thunk_EXT_FUN_8015bac8(void)

{
  (*(code *)&LAB_8015bac8)();
  return;
}


/* ==== FUN_0000f1f8 @ 0000f1f8 ==== */

void FUN_0000f1f8(void)

{
  (*(code *)0x80086a98)();
  return;
}


/* ==== FUN_0000f208 @ 0000f208 ==== */

void FUN_0000f208(void)

{
  (*(code *)0x80086af0)();
  return;
}


/* ==== FUN_0000f218 @ 0000f218 ==== */

void FUN_0000f218(void)

{
  (*(code *)0x8010caa0)();
  return;
}


/* ==== FUN_0000f228 @ 0000f228 ==== */

void FUN_0000f228(void)

{
  (*(code *)0x816968a8)();
  return;
}


/* ==== FUN_0000f238 @ 0000f238 ==== */

void FUN_0000f238(void)

{
  (*(code *)0x8008ba50)();
  return;
}


/* ==== thunk_EXT_FUN_816ba440 @ 0000f248 ==== */

void thunk_EXT_FUN_816ba440(void)

{
  (*(code *)&LAB_816ba440)();
  return;
}


/* ==== thunk_EXT_FUN_816b7b80 @ 0000f258 ==== */

void thunk_EXT_FUN_816b7b80(void)

{
  (*(code *)&LAB_816b7b80)();
  return;
}


/* ==== FUN_0000f268 @ 0000f268 ==== */

void FUN_0000f268(void)

{
  (*(code *)0x800d2160)();
  return;
}


/* ==== FUN_0000f278 @ 0000f278 ==== */

void FUN_0000f278(void)

{
  (*(code *)0x816e3510)();
  return;
}


/* ==== FUN_0000f288 @ 0000f288 ==== */

void FUN_0000f288(void)

{
  (*(code *)0x8007d7e0)();
  return;
}


/* ==== FUN_0000f298 @ 0000f298 ==== */

void FUN_0000f298(void)

{
  (*(code *)0x8007b0c8)();
  return;
}


/* ==== thunk_EXT_FUN_816ba660 @ 0000f2a8 ==== */

void thunk_EXT_FUN_816ba660(void)

{
  (*(code *)&LAB_816ba660)();
  return;
}


/* ==== thunk_EXT_FUN_816b7c10 @ 0000f2b8 ==== */

void thunk_EXT_FUN_816b7c10(void)

{
  (*(code *)&LAB_816b7c10)();
  return;
}


/* ==== FUN_0000f2c8 @ 0000f2c8 ==== */

void FUN_0000f2c8(void)

{
  (*(code *)0x816e0c68)();
  return;
}


/* ==== FUN_0000f2d8 @ 0000f2d8 ==== */

void FUN_0000f2d8(void)

{
  (*(code *)0x816e0ca0)();
  return;
}


/* ==== FUN_0000f2e8 @ 0000f2e8 ==== */

void FUN_0000f2e8(void)

{
  (*(code *)0x816e0298)();
  return;
}


/* ==== FUN_0000f2f8 @ 0000f2f8 ==== */

void FUN_0000f2f8(void)

{
  (*(code *)0x816a2588)();
  return;
}


/* ==== FUN_0000f308 @ 0000f308 ==== */

void FUN_0000f308(void)

{
  (*(code *)0x817c4a58)();
  return;
}


/* ==== thunk_EXT_FUN_817bd708 @ 0000f318 ==== */

void thunk_EXT_FUN_817bd708(void)

{
  (*(code *)&LAB_817bd708)();
  return;
}


/* ==== thunk_EXT_FUN_800644e8 @ 0000f328 ==== */

void thunk_EXT_FUN_800644e8(void)

{
  (*(code *)&LAB_800644e8)();
  return;
}


/* ==== thunk_EXT_FUN_8015b8b0 @ 0000f338 ==== */

void thunk_EXT_FUN_8015b8b0(void)

{
  (*(code *)&LAB_8015b8b0)();
  return;
}


/* ==== thunk_EXT_FUN_80089a58 @ 0000f348 ==== */

void thunk_EXT_FUN_80089a58(void)

{
  (*(code *)&LAB_80089a58)();
  return;
}


/* ==== FUN_0000f358 @ 0000f358 ==== */

void FUN_0000f358(void)

{
  (*(code *)0x816e24b8)();
  return;
}


/* ==== FUN_0000f368 @ 0000f368 ==== */

void FUN_0000f368(void)

{
  (*(code *)0x816e2200)();
  return;
}


/* ==== FUN_0000f378 @ 0000f378 ==== */

void FUN_0000f378(void)

{
  (*(code *)0x800d21e8)();
  return;
}


/* ==== FUN_0000f388 @ 0000f388 ==== */

void FUN_0000f388(void)

{
  (*(code *)0x800d27c0)();
  return;
}


/* ==== FUN_0000f398 @ 0000f398 ==== */

void FUN_0000f398(void)

{
  (*(code *)0x800741d8)();
  return;
}


/* ==== FUN_0000f3a8 @ 0000f3a8 ==== */

void FUN_0000f3a8(void)

{
  (*(code *)0x81722ed0)();
  return;
}


/* ==== FUN_0000f3b8 @ 0000f3b8 ==== */

void FUN_0000f3b8(void)

{
  (*(code *)0x81722ef8)();
  return;
}


/* ==== FUN_0000f3c8 @ 0000f3c8 ==== */

void FUN_0000f3c8(void)

{
  (*(code *)0x81722fa8)();
  return;
}


/* ==== FUN_0000f3d8 @ 0000f3d8 ==== */

void FUN_0000f3d8(void)

{
  (*(code *)0x817b3d10)();
  return;
}


/* ==== thunk_EXT_FUN_817af168 @ 0000f3e8 ==== */

void thunk_EXT_FUN_817af168(void)

{
  (*(code *)&LAB_817af168)();
  return;
}


/* ==== thunk_EXT_FUN_800861f0 @ 0000f3f8 ==== */

void thunk_EXT_FUN_800861f0(void)

{
  (*(code *)&LAB_800861f0)();
  return;
}


/* ==== thunk_EXT_FUN_81722e30 @ 0000f408 ==== */

void thunk_EXT_FUN_81722e30(void)

{
  (*(code *)&LAB_81722e30)();
  return;
}


/* ==== thunk_EXT_FUN_816cb168 @ 0000f418 ==== */

void thunk_EXT_FUN_816cb168(void)

{
  (*(code *)&LAB_816cb168)();
  return;
}


/* ==== thunk_EXT_FUN_80071948 @ 0000f428 ==== */

void thunk_EXT_FUN_80071948(void)

{
  (*(code *)&LAB_80071948)();
  return;
}


/* ==== thunk_EXT_FUN_800898e8 @ 0000f438 ==== */

void thunk_EXT_FUN_800898e8(void)

{
  (*(code *)&LAB_800898e8)();
  return;
}


/* ==== FUN_0000f448 @ 0000f448 ==== */

void FUN_0000f448(void)

{
  (*(code *)0x8006b928)();
  return;
}


/* ==== thunk_EXT_FUN_816cac20 @ 0000f458 ==== */

void thunk_EXT_FUN_816cac20(void)

{
  (*(code *)&LAB_816cac20)();
  return;
}


/* ==== thunk_EXT_FUN_816caf08 @ 0000f468 ==== */

void thunk_EXT_FUN_816caf08(void)

{
  (*(code *)&LAB_816caf08)();
  return;
}


/* ==== thunk_EXT_FUN_81721b90 @ 0000f478 ==== */

void thunk_EXT_FUN_81721b90(void)

{
  (*(code *)&LAB_81721b90)();
  return;
}


/* ==== thunk_EXT_FUN_816c7d78 @ 0000f488 ==== */

void thunk_EXT_FUN_816c7d78(void)

{
  (*(code *)&LAB_816c7d78)();
  return;
}


/* ==== thunk_EXT_FUN_816a0d70 @ 0000f498 ==== */

void thunk_EXT_FUN_816a0d70(void)

{
  (*(code *)&LAB_816a0d70)();
  return;
}


/* ==== FUN_00011370 @ 00011370 ==== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011370(void)

{
  byte in_cr0;
  byte unaff_cr3;
  byte in_cr6;
  int in_CTR;
  int iVar1;
  
  do {
  } while (!(bool)(in_cr0 >> 3 & 1));
  iVar1 = in_CTR + -1;
  if (iVar1 == 0 && (unaff_cr3 >> 3 & 1) == 0) {
    FUN_0000e040();
  }
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 == 0 && (in_cr0 >> 3 & 1) == 0);
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0 && (in_cr0 >> 3 & 1) == 0);
  do {
  } while (!(bool)(in_cr6 >> 3 & 1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000113c8 @ 000113c8 ==== */

void FUN_000113c8(void)

{
  bool bVar1;
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 0);
  do {
    bVar1 = in_CTR == 1;
    in_CTR = 0;
  } while (bVar1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ==== FUN_000113dc @ 000113dc ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000113dc(void)

{
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00011794 @ 00011794 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00011794(void)

{
  uint in_r11;
  int unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte unaff_cr3;
  byte unaff_cr4;
  int in_CTR;
  int iVar1;
  byte bStack00000070;
  
  do {
    iVar1 = in_CTR;
    in_CTR = iVar1 + -1;
  } while (iVar1 + -1 == 0 && (in_cr0 >> 3 & 1) == 0);
  if (iVar1 == 2 && (unaff_cr3 >> 3 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((bool)(in_cr1 >> 1 & 1)) && (iVar1 = iVar1 + -3, iVar1 != 0 || (in_cr1 >> 1 & 1) != 0)) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0 && (in_cr0 >> 3 & 1) == 1);
    if (iVar1 == 1 && (unaff_cr4 & 1) == 0) {
      func_0x00003330();
    }
    if (!(bool)(in_cr1 >> 3 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)(in_cr1 >> 2 & 1)) {
      func_0x00016d04();
    }
    do {
    } while (!(bool)(unaff_cr4 >> 3 & 1));
    do {
    } while (!(bool)(unaff_cr4 >> 3 & 1));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_r11 & 1) == 1) {
    *(undefined4 *)(unaff_r31 + 0x38) = 1;
  }
  if ((bStack00000070 & 2) == 2) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 2;
  }
  if ((bStack00000070 & 4) == 4) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 4;
  }
  if ((bStack00000070 & 0x20) == 0x20) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 0x20;
  }
  if ((bStack00000070 & 0x10) == 0x10) {
    *(uint *)(unaff_r31 + 0x38) = *(uint *)(unaff_r31 + 0x38) | 0x10;
  }
  if (*(int *)(unaff_r31 + 0x38) == 0) {
    *(undefined4 *)(unaff_r31 + 0x38) = 0x80;
  }
  if ((~*(uint *)(unaff_r31 + 0x38) >> 4 & 1) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000132f0 @ 000132f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000132f0(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000135a0 @ 000135a0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000135a0(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00013850 @ 00013850 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00013850(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00013ac0 @ 00013ac0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00013ac0(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00013d74 @ 00013d74 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00013d74(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00013fe8 @ 00013fe8 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00013fe8(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00014270 @ 00014270 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00014270(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_000144f4 @ 000144f4 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000144f4(void)

{
  byte in_cr0;
  int in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0 && (in_cr0 >> 3 & 1) == 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


