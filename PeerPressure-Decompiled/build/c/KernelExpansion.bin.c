// Decompiled from KernelExpansion.bin  base=00000000  (approximate C, for reading only)
/* ==== FUN_00000000 @ 00000000 ==== */

void FUN_00000000(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined1 uStack_40;
  char acStack_3f [5];
  char cStack_3a;
  undefined1 uStack_30;
  undefined1 auStack_2f [23];
  
  uStack_30 = 1;
  thunk_EXT_FUN_8010d110(auStack_2f,0,0xf);
  uStack_40 = 0;
  thunk_EXT_FUN_8010d110(acStack_3f,0,0xf);
  FUN_000003c0(0xffffffff80072860,0xffffffff801f0150,1,0);
  FUN_0000ebe8(param_1);
  FUN_0000ebf8(0xffffffff8017ce00);
  FUN_00000480(0xffffffff801ff4b0);
  FUN_00000480(0xffffffff801ff4c4);
  FUN_0000ec08(&uStack_30,&uStack_40);
  if (cStack_3a != '\0') {
    cRam80202d40 = '\x01';
  }
  if (cRam80202d40 == '\0') {
    FUN_000004b8();
  }
  if (*param_2 == '\x01') {
    FUN_00000568(param_2);
  }
  FUN_000005f0(uRam802032a4,uRam802032a0);
  FUN_00000648();
  FUN_00000748();
  if (((cRam80202d40 == '\0') && (acStack_3f[0] == '\x12')) &&
     (iVar1 = FUN_000009c0(), *(int *)(iVar1 + 300) == 1)) {
    FUN_000009d0();
  }
  FUN_00000a50(0);
  FUN_00000de8();
  return;
}


/* ==== FUN_00000178 @ 00000178 ==== */

void FUN_00000178(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int unaff_r27;
  int *piVar7;
  ulonglong uVar6;
  longlong lVar8;
  ulonglong uVar9;
  int *unaff_r31;
  undefined4 *puVar10;
  uint uVar11;
  uint in_stack_00000050;
  
  thunk_EXT_FUN_80085ee8(0xffffffff801ff4d4);
  thunk_EXT_FUN_80085ee8(0xffffffff801ff4dc);
  if (*unaff_r31 == -0x3ffffffb) {
    thunk_EXT_FUN_80085ee8(0xffffffff801ff500);
    thunk_EXT_FUN_80085ee8(0xffffffff801ff51c,unaff_r31[3]);
    if (unaff_r31[5] == 0) {
      uVar4 = 0xffffffff801ff538;
    }
    else {
      uVar4 = 0xffffffff801ff540;
    }
    thunk_EXT_FUN_80085ee8(0xffffffff801ff548,uVar4,unaff_r31[6]);
  }
  else {
    thunk_EXT_FUN_80085ee8(0xffffffff801ff56c);
    thunk_EXT_FUN_80085ee8(0xffffffff801ff584,unaff_r31[3]);
    thunk_EXT_FUN_80085ee8(0xffffffff801ff5a4,unaff_r31[4]);
    uVar9 = 0;
    if (unaff_r31[4] != 0) {
      piVar7 = unaff_r31 + 4;
      do {
        piVar7 = piVar7 + 1;
        thunk_EXT_FUN_80085ee8(0xffffffff801ff5b4,uVar9,*piVar7);
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < (ulonglong)(uint)unaff_r31[4]);
    }
  }
  thunk_EXT_FUN_80085ee8(0xffffffff801ff5cc);
  thunk_EXT_FUN_80085ee8(0xffffffff801ff5d0);
  lVar8 = 0;
  puVar10 = (undefined4 *)(unaff_r27 + 0x14);
  do {
    puVar1 = puVar10 + 1;
    puVar2 = puVar10 + 2;
    puVar3 = puVar10 + 3;
    puVar10 = puVar10 + 4;
    thunk_EXT_FUN_80085ee8(0xffffffff801ff5e0,lVar8,*puVar1,*puVar2,lVar8 + 1,*puVar3,*puVar10);
    lVar8 = lVar8 + 2;
  } while ((int)lVar8 < 0x20);
  thunk_EXT_FUN_80085ee8(0xffffffff801ff600,*(undefined4 *)(unaff_r27 + 4));
  thunk_EXT_FUN_80085ee8(0xffffffff801ff610,*(undefined4 *)(unaff_r27 + 8));
  thunk_EXT_FUN_80085ee8(0xffffffff801ff620,*(undefined4 *)(unaff_r27 + 0xc));
  thunk_EXT_FUN_80085ee8
            (0xffffffff801ff630,*(ulonglong *)(unaff_r27 + 0x10) >> 0x20,
             *(ulonglong *)(unaff_r27 + 0x10) & 0xffffffff);
  thunk_EXT_FUN_80085ee8(0xffffffff801ff5cc);
  FUN_0000ec28(&stack0x00000050,&stack0x00000054);
  uVar9 = *(ulonglong *)(unaff_r27 + 0x20) & 0xffffffff;
  uVar6 = 0x400;
  if ((uVar9 - in_stack_00000050 & 0xffffffff) < 0x401) {
    uVar6 = uVar9 - in_stack_00000050;
  }
  thunk_EXT_FUN_80085ee8(0xffffffff801ff644);
  uVar5 = (uVar6 + 0xf & 0xffffffff) >> 4;
  do {
    if (uVar5 == 0) {
      thunk_EXT_FUN_80085ee8(0xffffffff801ff664);
      do {
        thunk_EXT_FUN_80073484(1000);
      } while( true );
    }
    thunk_EXT_FUN_80085ee8(0xffffffff801ff658,uVar9);
    uVar11 = 0;
    do {
      if ((uVar6 & 0xffffffff) == 0) break;
      thunk_EXT_FUN_80085ee8(0xffffffff801ff650,*(undefined1 *)uVar9);
      uVar11 = uVar11 + 1;
      uVar6 = uVar6 - 1;
      uVar9 = uVar9 + 1;
    } while (uVar11 < 0x10);
    thunk_EXT_FUN_80085ee8(0xffffffff801ff5cc);
    uVar5 = uVar5 - 1;
  } while( true );
}


/* ==== FUN_000003c0 @ 000003c0 ==== */

undefined8 FUN_000003c0(uint *param_1,int param_2,char param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_2 - (int)param_1;
  if (((int)uVar2 < 0x1fffffd) && (-0x2000001 < (int)uVar2)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(undefined1 *)param_1;
      param_4[1] = *(undefined1 *)((int)param_1 + 1);
      param_4[2] = *(undefined1 *)((int)param_1 + 2);
      param_4[3] = (char)*param_1;
    }
    *param_1 = (uint)(param_3 == '\x01') | uVar2 & 0x3fffffc | 0x48000000;
    thunk_EXT_FUN_80073850(param_1,4);
    uVar1 = thunk_EXT_FUN_80080048(param_1);
    thunk_EXT_FUN_8007f968(uVar1,4);
    uVar1 = 1;
  }
  else {
    thunk_EXT_FUN_80085ea0();
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_00000480 @ 00000480 ==== */

bool FUN_00000480(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  thunk_EXT_FUN_80086110(auStack_10,param_1);
  iVar1 = FUN_0000ec98(auStack_10);
  return iVar1 == 0;
}


/* ==== FUN_000004b8 @ 000004b8 ==== */

void FUN_000004b8(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_210 [176];
  ushort local_160;
  
  iVar1 = thunk_EXT_FUN_8015e218(0xffffffff801a60e0,0xec,auStack_210);
  if (iVar1 == 0) {
    uVar2 = 7;
    do {
      if ((1 << ((uint)uVar2 & 0x3f) & (uint)(local_160 >> 8)) != 0) {
        if ((uVar2 & 0xffffffff) < 2) {
          return;
        }
        if (5 < (uVar2 & 0xffffffff)) {
          uVar2 = 6;
        }
        iVar1 = thunk_EXT_FUN_8015e2b8(0xffffffff801a60e0,uVar2 + 0x40 & 0xff);
        if (iVar1 != 0) {
          return;
        }
        thunk_EXT_FUN_80073484(100);
        thunk_EXT_FUN_8015e218(0xffffffff801a60e0,0xec,auStack_210);
        return;
      }
      uVar2 = uVar2 - 1;
    } while (-1 < (longlong)uVar2);
  }
  return;
}


/* ==== FUN_00000568 @ 00000568 ==== */

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
  return;
}


/* ==== FUN_000005f0 @ 000005f0 ==== */

bool FUN_000005f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  thunk_EXT_FUN_80086110(auStack_18,param_1);
  thunk_EXT_FUN_80086110(auStack_20,param_2);
  iVar1 = FUN_0000ecd8(auStack_18,auStack_20);
  return iVar1 == 0;
}


/* ==== FUN_00000648 @ 00000648 ==== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00000648(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int aiStack_30 [12];
  
  FUN_0000ead8();
  uVar3 = 0;
  aiStack_30[0] = 0;
  aiStack_30[2] = 0;
  aiStack_30[1] = 0x170;
  thunk_EXT_FUN_80064498(0xffffffff80202d44);
  iVar1 = thunk_EXT_FUN_80083aa8(0xffffffff80202d7c,aiStack_30 + 1,0x1000,4,2);
  if ((iVar1 != 0) || (_DAT_80202d7c == (undefined4 *)0x0)) {
    thunk_EXT_FUN_800bdd40(u_btnSoftmodSettings_000123e8 + 0xc);
  }
  cVar2 = FUN_000014d0(0xffffffff801ff6fc,aiStack_30,aiStack_30 + 2);
  if (cVar2 == '\0') {
    cVar2 = FUN_000016a8();
    if (cVar2 == '\0') goto LAB_000006e4;
  }
  else {
    cVar2 = FUN_00001700(0xffffffff801ff6fc,_DAT_80202d7c,0xffffffff801ff738,6);
    if (cVar2 == '\0') {
      thunk_EXT_FUN_8010d110(_DAT_80202d7c,0,0x170);
      *_DAT_80202d7c = 0;
      *(undefined1 *)((int)_DAT_80202d7c + 0x129) = 1;
      goto LAB_000006e4;
    }
  }
  uVar3 = 1;
LAB_000006e4:
  if (aiStack_30[0] != 0) {
    thunk_EXT_FUN_80064768();
  }
  return uVar3;
}


/* ==== FUN_00000748 @ 00000748 ==== */

undefined8 FUN_00000748(void)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88 [2];
  int local_80 [2];
  undefined2 local_78 [2];
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 auStack_5c [40];
  undefined4 local_34;
  
  FUN_0000ead8();
  local_78[0] = 0;
  local_80[0] = 0;
  local_74 = 0;
  local_72 = 0;
  local_80[1] = 0;
  local_90 = 0;
  local_60 = 0;
  thunk_EXT_FUN_8010d110(auStack_5c,0,0x34);
  local_8c = (int *)0x0;
  thunk_EXT_FUN_80086110(local_78,0xffffffff801ff7b0);
  local_70 = 0;
  local_68 = 0x40;
  local_6c = local_78;
  iVar3 = thunk_EXT_FUN_8006caa8(&local_90,0xffffffff80100080,&local_70,local_80,0,0x80,1,1);
  if (iVar3 == 0) {
    iVar3 = thunk_EXT_FUN_8006d630(local_90,local_80,&local_60,0x38,0x22);
    if (iVar3 == 0) {
      local_88[0] = local_34;
      iVar3 = thunk_EXT_FUN_80083aa8(&local_8c,local_88,0x1000,4,2);
      if ((iVar3 != 0) || (local_8c == (int *)0x0)) {
        thunk_EXT_FUN_800bdd40(u_btnSoftmodSettings_000123e8 + 0xc);
      }
      iVar3 = thunk_EXT_FUN_8006cec8(local_90,0,0,0,local_80,local_8c,local_88[0],0);
      if (iVar3 == 0x103) {
        iVar3 = thunk_EXT_FUN_8008b188(local_90,1,0,0);
      }
      if ((iVar3 == 0) && (-1 < local_80[0])) {
        thunk_EXT_FUN_80089eb0(local_90);
        for (piVar4 = local_8c; iVar3 = *piVar4, iVar3 != -1;
            piVar4 = (int *)((int)piVar4 + iVar1 + 8)) {
          iVar1 = piVar4[1];
          thunk_EXT_FUN_8010cc40(iVar3,piVar4 + 2,iVar1);
          thunk_EXT_FUN_80073850(iVar3,iVar1);
          uVar2 = thunk_EXT_FUN_80080048(iVar3);
          thunk_EXT_FUN_8007f968(uVar2,iVar1);
        }
        thunk_EXT_FUN_80083190(&local_8c,local_88,0x8000,2);
        goto LAB_0000091c;
      }
    }
    thunk_EXT_FUN_80089eb0(local_90);
  }
LAB_0000091c:
  FUN_00001790();
  FUN_000018f0(0xffffffff80061000,0xffffffff801f18e8,0,0);
  FUN_000003c0(0xffffffff8007d6e8,0xffffffff801f19c8,0,0);
  FUN_000003c0(0xffffffff8007d6b8,0xffffffff801f1a20,1,0);
  FUN_000003c0(0xffffffff8007b080,0xffffffff801f1a60,0,0);
  FUN_000003c0(0xffffffff80065748,0xffffffff801f1c60,1,0);
  FUN_00001cb0();
  return 1;
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
  iVar1 = FUN_0000ed98(0xffffffff801ff7f4,8,0,&iStack_10);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a50(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  double dVar7;
  int iStack_2d0;
  uint uStack_2cc;
  float fStack_2c8;
  undefined4 uStack_2c4;
  float fStack_2c0;
  undefined1 auStack_2bc [12];
  undefined1 auStack_2b0 [688];
  
  FUN_0000ead4();
  iVar2 = FUN_0000edb8();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_000009c0();
    uVar6 = -(uint)(cRam80202d40 != '\x01') & *puVar3;
    if (uVar6 < 3) {
      iStack_2d0 = 0;
      if (uVar6 == 0) {
        uVar5 = 0xffffffff801ff81c;
      }
      else if (uVar6 == 1) {
        uVar5 = 0xffffffff801ff838;
      }
      else {
        uVar5 = 0xffffffff801ff888;
      }
      iVar2 = FUN_0000ed98(uVar5,9,0,&iStack_2d0);
      if (iVar2 == 0) {
        iRam8017cdc4 = iStack_2d0;
        if (uVar6 == 1) {
          iVar2 = FUN_000009c0();
          if ((*(char *)(iVar2 + 4) == '\0') || (cVar4 = FUN_00001fc0(), cVar4 == '\0')) {
            uVar5 = FUN_00002058(auStack_2b0);
            thunk_EXT_FUN_8010cc40(0xffffffff80202d90,uVar5,0x278);
          }
          FUN_000018f0(0xffffffff98012df0,0xffffffff801f2690,0,0);
          FUN_000018f0(0xffffffff9800b438,0xffffffff801f26e8,0,0);
          FUN_000018f0(0xffffffff98017960,0xffffffff801f2718,0,0);
          FUN_000018f0(0xffffffff98011f90,0xffffffff801f2878,0,0);
          FUN_000018f0(0xffffffff98012588,0xffffffff801f2b20,0,0);
          FUN_000018f0(0xffffffff9801a23c,0xffffffff801f2d10,0,0);
          FUN_000018f0(0xffffffff980111b4,0xffffffff801f2d38,0,0);
          FUN_00002d70(0xffffffff98010f74);
          uRam9800b380 = 0x60000000;
          uRam9800b384 = 0x60000000;
          uRam9800b388 = 0x60000000;
          uRam9800b38c = 0x60000000;
          thunk_EXT_FUN_80073850(0xffffffff9800b380,4);
          uVar5 = thunk_EXT_FUN_80080048(0xffffffff9800b380);
          thunk_EXT_FUN_8007f968(uVar5,4);
        }
        iVar2 = FUN_0000ee38(0xffffffff8017cdc0,0x8000,0,0,0xffffffff801fee28,uRam80170000,0x20000a0
                            );
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
      cVar4 = FUN_00001cf0(0xffffffff80202d80);
      if (cVar4 != '\0') {
        FUN_0000edc8(auStack_2bc,&iStack_2d0,&uStack_2cc);
        if (((iStack_2d0 == 0x300) && ((uStack_2cc & 0x200) == 0)) && (iRam80186218 != 6)) {
          bVar1 = true;
          uVar5 = 0x240;
        }
        uRam80170d84 = 0xffffffff;
        FUN_0000edd8(dVar7,0x280,uVar5);
        FUN_0000ede8(0xffffffff80000000);
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
  return;
}


/* ==== FUN_00000de8 @ 00000de8 ==== */

void FUN_00000de8(void)

{
  undefined4 uVar1;
  int in_r13;
  
  uVar1 = *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x60);
  *(undefined4 *)(in_r13 + 0x70) = *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x5c);
  *(undefined4 *)(in_r13 + 0x74) = uVar1;
  FUN_00002db8();
  (*(code *)0x800612b4)();
  return;
}


/* ==== FUN_00000e38 @ 00000e38 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00000e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_70 [2];
  undefined8 local_68;
  ushort local_60 [2];
  undefined4 local_5c;
  short local_58 [4];
  undefined8 local_50 [10];
  
  iVar3 = FUN_0000eac8();
  iVar6 = 0;
  thunk_EXT_FUN_80086150(local_60);
  thunk_EXT_FUN_80086110(local_50,param_3);
  iVar5 = *(int *)(iVar3 + 0x14);
  uVar8 = 0;
  if (*(int *)(iVar5 + 0x50) == 0) {
    return 0;
  }
  while( true ) {
    iVar7 = *(int *)(iVar5 + 0x54) * uVar8 + *(int *)(iVar3 + 0x18);
    iVar4 = thunk_EXT_FUN_800864b0(iVar7 + 0x38,0xffffffffffffffff,local_5c,local_60[0] >> 1,0);
    iVar5 = _DAT_801a5e90;
    if (iVar4 == 0) break;
    iVar5 = *(int *)(iVar3 + 0x14);
    uVar8 = uVar8 + 1;
    if (*(uint *)(iVar5 + 0x50) <= uVar8) {
      return 0;
    }
  }
  local_70[0] = 0;
  iVar3 = 0;
  local_68 = local_50[0];
  uVar2 = thunk_EXT_FUN_80070138(0xffffffff801a5e94);
  do {
    if (local_68._0_2_ == 0) goto LAB_00000f7c;
    thunk_EXT_FUN_8008c148(local_68,local_58,&local_68);
    iVar5 = thunk_EXT_FUN_8008a348(iVar5,local_58,0,local_70);
    if (iVar5 == 0) {
      if (local_58[0] == 0) {
        iVar3 = -0x3fffffcc;
      }
      else {
        iVar3 = -0x3fffffc6;
      }
      goto LAB_00000f7c;
    }
    iVar5 = local_70[0];
  } while (local_68._0_2_ != 0);
  thunk_EXT_FUN_8008b8e0(local_70[0]);
  iVar6 = local_70[0];
LAB_00000f7c:
  thunk_EXT_FUN_8007018c(0xffffffff801a5e94,uVar2);
  if (iVar3 == 0) {
    plVar1 = *(longlong **)(iVar6 + 0x18);
    *plVar1 = *(longlong *)(iVar7 + 0x20) << 9;
    plVar1[1] = ((*(longlong *)(iVar7 + 0x28) - *(longlong *)(iVar7 + 0x20)) + 1) * 0x200;
    *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xffffffef;
    if (((param_4 & 0xff) != 1) || (iVar5 = FUN_00002dd8(iVar6,0x200,*plVar1,plVar1[1]), iVar5 == 0)
       ) {
      thunk_EXT_FUN_8008b928(iVar6);
      return 1;
    }
  }
  return 0;
}


/* ==== FUN_000010ec @ 000010ec ==== */

longlong FUN_000010ec(ulonglong param_1)

{
  longlong lVar1;
  undefined4 *unaff_r29;
  longlong unaff_r31;
  int in_stack_00000060;
  ulonglong uStack00000068;
  int in_stack_000001a0;
  undefined4 in_stack_000001a4;
  
  uStack00000068 = param_1 & 0xffffffff;
  lVar1 = thunk_EXT_FUN_8006cec8
                    (in_stack_00000060,0,0,0,&stack0x00000070,&stack0x00000090,0x200,
                     &stack0x00000068);
  if (lVar1 == 0) {
    if (in_stack_000001a0 == 0x58425050) {
      *unaff_r29 = in_stack_000001a4;
      lVar1 = unaff_r31;
    }
    else {
      lVar1 = -0x3fffffc2;
    }
  }
  if (in_stack_00000060 != 0) {
    thunk_EXT_FUN_80089eb0();
  }
  return lVar1;
}


/* ==== FUN_00001164 @ 00001164 ==== */

undefined8 FUN_00001164(void)

{
  return 0xffffffffc000000d;
}


/* ==== FUN_000011b8 @ 000011b8 ==== */

undefined8 FUN_000011b8(void)

{
  short sVar1;
  ushort uVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  undefined8 unaff_r26;
  int unaff_r27;
  undefined4 *unaff_r28;
  uint *unaff_r29;
  int unaff_r31;
  int iVar6;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(0xffffffff80202d44);
  iVar6 = 0;
  uVar3 = 0;
  piVar4 = (int *)0x801ff73c;
  do {
    if (*piVar4 == unaff_r31) {
      iVar6 = iVar6 * 0x14;
      sVar1 = *(short *)(iVar6 + -0x7fe008ba);
      if (sVar1 == 0) {
        if ((unaff_r28 == (undefined4 *)0x0) && (unaff_r29 != (uint *)0x0)) {
LAB_00001258:
          unaff_r26 = 0xffffffffc0000023;
          uVar2 = *(ushort *)(iVar6 + -0x7fe008bc);
        }
        else {
          if (*unaff_r29 < (uint)*(ushort *)(iVar6 + -0x7fe008bc)) goto LAB_00001258;
          thunk_EXT_FUN_8010d1b0(unaff_r28,*(int *)(iVar6 + -0x7fe008b8) + unaff_r27);
          uVar2 = *(ushort *)(iVar6 + -0x7fe008bc);
        }
        *unaff_r29 = (uint)uVar2;
        goto LAB_00001208;
      }
      if (sVar1 == 1) {
        if (((unaff_r28 != (undefined4 *)0x0) || (unaff_r29 == (uint *)0x0)) && (3 < *unaff_r29)) {
          *unaff_r28 = *(undefined4 *)(*(int *)(iVar6 + -0x7fe008b8) + unaff_r27);
          goto LAB_00001208;
        }
        uVar5 = 4;
      }
      else {
        if (sVar1 != 2) {
          unaff_r26 = 0xffffffffc0000002;
          goto LAB_00001208;
        }
        if (((unaff_r28 != (undefined4 *)0x0) || (unaff_r29 == (uint *)0x0)) && (*unaff_r29 != 0)) {
          *(undefined1 *)unaff_r28 = *(undefined1 *)(*(int *)(iVar6 + -0x7fe008b8) + unaff_r27);
          goto LAB_00001208;
        }
        uVar5 = 1;
      }
      *unaff_r29 = uVar5;
      unaff_r26 = 0xffffffffc0000023;
      goto LAB_00001208;
    }
    uVar3 = uVar3 + 0x14;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 5;
  } while ((uVar3 & 0xffffffff) < 0x78);
  unaff_r26 = 0xffffffffc0000225;
LAB_00001208:
  thunk_EXT_FUN_800643d8(0xffffffff80202d44);
  thunk_EXT_FUN_800718f8();
  return unaff_r26;
}


/* ==== FUN_00001360 @ 00001360 ==== */

uint FUN_00001360(void)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint unaff_r25;
  undefined4 *unaff_r27;
  int unaff_r28;
  uint unaff_r30;
  int unaff_r31;
  int iVar6;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800641d8(0xffffffff80202d44);
  piVar4 = (int *)0x801ff73c;
  uVar5 = unaff_r25;
  uVar3 = unaff_r25;
  do {
    if (*piVar4 == unaff_r31) {
      iVar6 = uVar5 * 0x14;
      sVar1 = *(short *)(iVar6 + -0x7fe008ba);
      if (sVar1 == 0) {
        if (unaff_r30 < *(ushort *)(iVar6 + -0x7fe008bc)) {
LAB_0000144c:
          unaff_r25 = 0xc0000023;
          goto LAB_000013b0;
        }
        thunk_EXT_FUN_8010d1b0(*(int *)(iVar6 + -0x7fe008b8) + unaff_r28,unaff_r27);
        *(char *)((uint)*(ushort *)(iVar6 + -0x7fe008bc) + *(int *)(iVar6 + -0x7fe008b8) + unaff_r28
                 + -1) = (char)unaff_r25;
      }
      else if (sVar1 == 1) {
        if (unaff_r30 < 4) goto LAB_0000144c;
        *(undefined4 *)(*(int *)(iVar6 + -0x7fe008b8) + unaff_r28) = *unaff_r27;
      }
      else {
        if (sVar1 != 2) {
          unaff_r25 = 0xc0000002;
          goto LAB_000013b0;
        }
        if (unaff_r30 == 0) goto LAB_0000144c;
        *(undefined1 *)(*(int *)(iVar6 + -0x7fe008b8) + unaff_r28) = *(undefined1 *)unaff_r27;
      }
      cVar2 = FUN_00003000(1);
      if (cVar2 == '\0') {
        unaff_r25 = 0xc0000001;
      }
      goto LAB_000013b0;
    }
    uVar3 = uVar3 + 0x14;
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 5;
  } while (uVar3 < 0x78);
  unaff_r25 = 0xc0000225;
LAB_000013b0:
  thunk_EXT_FUN_800643d8(0xffffffff80202d44);
  thunk_EXT_FUN_800718f8();
  return unaff_r25;
}


/* ==== FUN_000014d0 @ 000014d0 ==== */

longlong FUN_000014d0(undefined8 param_1,int *param_2,int *param_3)

{
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar1;
  int iVar5;
  longlong lVar6;
  int local_b0 [2];
  uint local_a8 [2];
  undefined2 local_a0 [2];
  undefined2 local_9c;
  undefined2 local_9a;
  uint local_98;
  undefined2 *local_94;
  undefined4 local_90;
  undefined4 local_80;
  undefined1 auStack_7c [40];
  uint local_54;
  
  pcVar2 = (char *)FUN_0000eac8();
  local_a0[0] = 0;
  local_a8[0] = 0;
  local_9c = 0;
  local_9a = 0;
  local_a8[1] = 0;
  local_b0[0] = 0;
  lVar6 = 0;
  local_80 = 0;
  thunk_EXT_FUN_8010d110(auStack_7c,0,0x34);
  iVar5 = 0;
  thunk_EXT_FUN_80086110(local_a0,pcVar2);
  local_98 = 0xfffffffd;
  if (pcVar2 != (char *)0x0) {
    local_98 = -(uint)(*pcVar2 != '\\') & 0xfffffffd;
  }
  local_90 = 0x40;
  local_94 = local_a0;
  iVar3 = thunk_EXT_FUN_8006caa8(local_b0,0xffffffff80100080,&local_98,local_a8,0,0x80,1,1);
  if (iVar3 != 0) {
    return 0;
  }
  uVar4 = thunk_EXT_FUN_8006d630(local_b0[0],local_a8,&local_80,0x38,0x22);
  if (uVar4 == 0) {
    iVar5 = thunk_EXT_FUN_80064a68(local_54 + 1);
    if (iVar5 == 0) {
      uVar1 = 0xffffffff801ffb60;
    }
    else {
      iVar3 = thunk_EXT_FUN_8006cec8(local_b0[0],0,0,0,local_a8,iVar5,local_54,0);
      if (iVar3 == 0x103) {
        iVar3 = thunk_EXT_FUN_8008b188(local_b0[0],1,0,0);
      }
      if ((iVar3 == 0) && (-1 < (int)local_a8[0])) {
        *(undefined1 *)(local_54 + iVar5) = 0;
        lVar6 = 1;
        *param_2 = iVar5;
        *param_3 = local_54 + 1;
        goto LAB_00001674;
      }
      uVar1 = 0xffffffff801ffbc8;
      local_54 = local_a8[0];
    }
  }
  else {
    uVar1 = 0xffffffff801ffb08;
    local_54 = uVar4;
  }
  thunk_EXT_FUN_80085ee8(uVar1,local_54);
LAB_00001674:
  if ((lVar6 == 0) && (iVar5 != 0)) {
    thunk_EXT_FUN_80064768(iVar5);
  }
  if (local_b0[0] != 0) {
    thunk_EXT_FUN_80089eb0();
  }
  return lVar6;
}


/* ==== FUN_000016a8 @ 000016a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016a8(void)

{
  thunk_EXT_FUN_8010d110(_DAT_80202d7c,0,0x170);
  *_DAT_80202d7c = 0;
  *(undefined1 *)((int)_DAT_80202d7c + 0x129) = 1;
  FUN_00003050(0);
  return;
}


/* ==== FUN_00001700 @ 00001700 ==== */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00001700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  int local_40 [16];
  
  uVar2 = FUN_0000ead0();
  local_40[0] = 0;
  local_40[1] = 0;
  uVar4 = 0;
  cVar3 = FUN_000014d0(uVar2,local_40,local_40 + 1);
  iVar1 = local_40[0];
  if (cVar3 != '\0') {
    cVar3 = FUN_000030b0(local_40[0],param_2,param_3,param_4);
    if (cVar3 == '\0') {
      thunk_EXT_FUN_80085ee8(0xffffffff801ffcc0);
    }
    else {
      uVar4 = 1;
    }
  }
  if (iVar1 != 0) {
    thunk_EXT_FUN_80064768(iVar1);
  }
  return uVar4;
}


/* ==== FUN_00001790 @ 00001790 ==== */

undefined8 FUN_00001790(void)

{
  byte bVar1;
  byte bVar2;
  int iVar4;
  undefined8 uVar3;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  
  iVar4 = thunk_EXT_FUN_800893e8(0xffffffff80040000);
  iVar8 = 0;
  uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 7),*(undefined1 *)(iVar4 + 6));
  pbVar5 = (byte *)((uint)CONCAT11(*(undefined1 *)(iVar4 + 0x15),*(undefined1 *)(iVar4 + 0x14)) +
                    iVar4 + 0x18);
  if (uVar6 != 0) {
    pbVar10 = &DAT_801ffd14;
    pbVar7 = pbVar5;
    pbVar9 = pbVar5;
LAB_000017e8:
    do {
      bVar1 = *pbVar10;
      bVar2 = *pbVar9;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 == 0) {
        pbVar10 = pbVar10 + 1;
        pbVar9 = pbVar9 + 1;
        if (pbVar10 != (byte *)0x801ffd1c) goto LAB_000017e8;
      }
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        uVar6 = (uint)pbVar5[iVar8 * 0x28 + 0xf] << 0x18 | (uint)pbVar5[iVar8 * 0x28 + 0xe] << 0x10
                | (uint)pbVar5[iVar8 * 0x28 + 0xd] << 8 | (uint)pbVar5[iVar8 * 0x28 + 0xc];
        if (*(int *)(uVar6 + 0x80040028) + *(int *)(uVar6 + 0x80040024) != 0x3a4) {
          return 0;
        }
        *(int *)(*(int *)(uVar6 + 0x80040024) * 4 + uVar6 + 0x8004002c) =
             *(int *)(uVar6 + 0x80040020) * -0x10000 + -0x7fe0cee0;
        *(int *)(uVar6 + 0x80040024) = *(int *)(uVar6 + 0x80040024) + 1;
        *(int *)((0x30c - *(int *)(uVar6 + 0x80040028)) * 4 + uVar6 + 0x8004002c) =
             *(int *)(uVar6 + 0x80040020) * -0x10000 + -0x7fe0ce60;
        lVar11 = ((ulonglong)pbVar5[iVar8 * 0x28 + 0x13] << 0x18 |
                  (ulonglong)pbVar5[iVar8 * 0x28 + 0x12] << 0x10 |
                  (ulonglong)pbVar5[iVar8 * 0x28 + 0x11] << 8 |
                 (ulonglong)pbVar5[iVar8 * 0x28 + 0x10]) + 4;
        thunk_EXT_FUN_80073850(uVar6 + 0x80040000,lVar11);
        uVar3 = thunk_EXT_FUN_80080048(uVar6 + 0x80040000);
        thunk_EXT_FUN_8007f968(uVar3,lVar11);
        return 1;
      }
      iVar8 = iVar8 + 1;
      pbVar7 = pbVar7 + 0x28;
      pbVar10 = &DAT_801ffd14;
      pbVar9 = pbVar7;
    } while (iVar8 < (int)uVar6);
  }
  return 0;
}


/* ==== FUN_000018f0 @ 000018f0 ==== */

void FUN_000018f0(undefined8 param_1,uint param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_2 & 0x8000) == 0) {
    local_20[0] = (param_2 >> 0x10) + 0x3d600000;
  }
  else {
    local_20[0] = (param_2 >> 0x10) + 0x3d600001;
  }
  local_18 = 0x7d6903a6;
  if (param_3 == '\x01') {
    local_14 = 0x4e800421;
  }
  else {
    local_14 = 0x4e800420;
  }
  if ((int)param_4 != 0) {
    thunk_EXT_FUN_8010cc40(param_4,param_1,0x10);
  }
  thunk_EXT_FUN_8010cc40(param_1,local_20,0x10);
  thunk_EXT_FUN_80073850(param_1,0x10);
  uVar1 = thunk_EXT_FUN_80080048(param_1);
  thunk_EXT_FUN_8007f968(uVar1,0x10);
  return;
}


/* ==== FUN_000019c8 @ 000019c8 ==== */

undefined8 FUN_000019c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_0000ead4();
  cVar2 = FUN_00003218();
  if (cVar2 == '\x01') {
    uVar1 = 0xffffffffc0000034;
  }
  else {
    uVar1 = FUN_000032d8(uVar1,param_2,param_3,param_4);
  }
  return uVar1;
}


/* ==== FUN_00001a88 @ 00001a88 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a88(void)

{
  int iVar1;
  code *unaff_r26;
  undefined4 *puVar2;
  longlong lVar3;
  code *unaff_r31;
  undefined2 uStack00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000080;
  undefined4 in_stack_0000008c;
  
  if (unaff_r31 != FUN_00000000) {
    (*unaff_r31)(0);
  }
  iVar1 = FUN_0000ef48(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x183ff,&stack0x00000060);
  if (iVar1 != 0) {
    iVar1 = thunk_EXT_FUN_80086390
                      (in_stack_00000064,uStack00000060,0xffffffff801ffd1c,0xffffffffffffffff,1);
    if (iVar1 == 0) {
      FUN_00003690();
    }
    else {
      iVar1 = thunk_EXT_FUN_80086390
                        (in_stack_00000064,uStack00000060,0xffffffff801ffd28,0xffffffffffffffff,1);
      if (iVar1 == 0) {
        iVar1 = FUN_0000ef68(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x40006);
        if (iVar1 == 0) {
          FUN_0000ed98(0xffffffff801ffd38,9,0,0);
        }
      }
      else {
        puVar2 = (undefined4 *)0x802032c4;
        lVar3 = 2;
        do {
          iVar1 = thunk_EXT_FUN_80086390
                            (in_stack_00000064,uStack00000060,*puVar2,0xffffffffffffffff,1);
          if (iVar1 == 0) {
            in_stack_00000080 = 0;
            thunk_EXT_FUN_8010d110(&stack0x00000084,0,0x18);
            thunk_EXT_FUN_80066368(&stack0x0000008c,0,1,0);
            thunk_EXT_FUN_816e0bf0(0x12a);
            thunk_EXT_FUN_816e0bf0(0x78);
            do {
              iVar1 = thunk_EXT_FUN_816c5508
                                (0xff,0xffffffff801fff24,0xffffffff801ffd80,2,&stack0x00000070,1,2,
                                 &stack0x00000068);
            } while (iVar1 == 5);
            if (iVar1 == 0x3e5) {
              iVar1 = thunk_EXT_FUN_816a2898(&stack0x00000080,0,1);
              thunk_EXT_FUN_80089eb0(in_stack_0000008c);
              if (iVar1 != 0) {
                FUN_0000efb8();
              }
            }
          }
          lVar3 = lVar3 + -1;
          puVar2 = puVar2 + 1;
        } while (lVar3 != 0);
      }
    }
  }
  (*unaff_r26)();
  return;
}


/* ==== FUN_00001c60 @ 00001c60 ==== */

undefined8 FUN_00001c60(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  short sVar2;
  undefined8 uVar1;
  
  sVar2 = FUN_0000ead8();
  uVar1 = thunk_EXT_FUN_800655a0();
  if ((int)uVar1 == 0) {
    if ((sVar2 == 2) && ((param_2 & 0xffff) == 4)) {
      *param_3 = 0xff;
    }
    uVar1 = 0;
  }
  return uVar1;
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

undefined8 FUN_00001cf0(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uStack_b0;
  short *psStack_ac;
  uint auStack_a8 [2];
  int aiStack_a0 [2];
  undefined2 auStack_98 [2];
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_7c [40];
  uint uStack_54;
  
  puVar2 = (uint *)FUN_0000eac8();
  uVar6 = 0;
  auStack_98[0] = 0;
  aiStack_a0[0] = 0;
  uStack_94 = 0;
  uStack_92 = 0;
  aiStack_a0[1] = 0;
  uStack_b0 = 0;
  uStack_80 = 0;
  thunk_EXT_FUN_8010d110(auStack_7c,0,0x34);
  psStack_ac = (short *)0x0;
  thunk_EXT_FUN_80086110(auStack_98,0xffffffff801fff4c);
  uStack_90 = 0;
  uStack_88 = 0x40;
  puStack_8c = auStack_98;
  iVar3 = thunk_EXT_FUN_8006caa8(&uStack_b0,0xffffffff80100080,&uStack_90,aiStack_a0,0,0x80,1,1);
  if (iVar3 == 0) {
    iVar3 = thunk_EXT_FUN_8006d630(uStack_b0,aiStack_a0,&uStack_80,0x38,0x22);
    if (iVar3 == 0) {
      auStack_a8[0] = uStack_54;
      if (uStack_54 < 0x36) {
        thunk_EXT_FUN_80085ea0();
      }
      iVar3 = thunk_EXT_FUN_80083aa8(&psStack_ac,auStack_a8,0x1000,4,1);
      if ((iVar3 != 0) || (psStack_ac == (short *)0x0)) {
        thunk_EXT_FUN_80085ea0();
        thunk_EXT_FUN_800bdd40(u_btnSoftmodSettings_000123e8 + 0xc);
      }
      iVar3 = thunk_EXT_FUN_8006cec8(uStack_b0,0,0,0,aiStack_a0,psStack_ac,auStack_a8[0],0);
      if (iVar3 == 0x103) {
        iVar3 = thunk_EXT_FUN_8008b188(uStack_b0,1,0,0);
      }
      if ((iVar3 == 0) && (-1 < aiStack_a0[0])) {
        thunk_EXT_FUN_80089eb0(uStack_b0);
        psVar5 = psStack_ac;
        if (*psStack_ac != 0x424d) {
          thunk_EXT_FUN_80085ea0();
        }
        if (((((ulonglong)*(byte *)((int)psVar5 + 0x11) << 0x18 |
               (ulonglong)*(byte *)(psVar5 + 8) << 0x10 |
               (ulonglong)*(byte *)((int)psVar5 + 0xf) << 8 | (ulonglong)*(byte *)(psVar5 + 7)) !=
              0x28) ||
            (CONCAT11(*(undefined1 *)((int)psVar5 + 0x1d),*(undefined1 *)(psVar5 + 0xe)) != 0x20))
           || (((*(char *)((int)psVar5 + 0x21) != '\0' || *(char *)(psVar5 + 0x10) != '\0') ||
               *(char *)((int)psVar5 + 0x1f) != '\0') || *(char *)(psVar5 + 0xf) != '\0')) {
          thunk_EXT_FUN_80085ea0();
        }
        *puVar2 = (uint)*(byte *)((int)psVar5 + 0x15) << 0x18 | (uint)*(byte *)(psVar5 + 10) << 0x10
                  | (uint)*(byte *)((int)psVar5 + 0x13) << 8 | (uint)*(byte *)(psVar5 + 9);
        puVar2[1] = (uint)*(byte *)((int)psVar5 + 0x19) << 0x18 |
                    (uint)*(byte *)(psVar5 + 0xc) << 0x10 | (uint)*(byte *)((int)psVar5 + 0x17) << 8
                    | (uint)*(byte *)(psVar5 + 0xb);
        uVar4 = (uint)*(byte *)((int)psVar5 + 0x25) << 0x18 | (uint)*(byte *)(psVar5 + 0x12) << 0x10
                | (uint)*(byte *)((int)psVar5 + 0x23) << 8 | (uint)*(byte *)(psVar5 + 0x11);
        puVar2[2] = uVar4;
        uVar4 = FUN_0000efd8(2,uVar4,4,0,0x20000000,0x1000);
        puVar2[3] = uVar4;
        if (uVar4 == 0) {
          thunk_EXT_FUN_80085ea0();
        }
        uVar4 = puVar2[3];
        psVar5 = psStack_ac + 0x1b;
        if ((puVar2[1] & 0xfffffffe) != 0) {
          iVar3 = 0x1df;
          do {
            uVar1 = *puVar2;
            thunk_EXT_FUN_8010cc40(uVar4,psVar5 + uVar1 * uVar6 * 2,uVar1 << 2);
            thunk_EXT_FUN_8010cc40
                      (psVar5 + uVar1 * uVar6 * 2,psVar5 + iVar3 * uVar1 * 2,*puVar2 << 2);
            thunk_EXT_FUN_8010cc40(psVar5 + iVar3 * uVar1 * 2,uVar4,*puVar2 << 2);
            uVar6 = uVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (uVar6 < puVar2[1] >> 1);
        }
        FUN_000038f8(psVar5,puVar2[3],*puVar2,puVar2[1],0);
        return 1;
      }
    }
    thunk_EXT_FUN_80089eb0(uStack_b0);
  }
  return 0;
}


/* ==== FUN_00001fc0 @ 00001fc0 ==== */

undefined8 FUN_00001fc0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_3a0 [272];
  int aiStack_290 [160];
  
  uVar3 = 0;
  FUN_00002058(aiStack_290);
  lVar1 = FUN_000009c0();
  thunk_EXT_FUN_8010c7f8(auStack_3a0,0x104,0xffffffff801fff88,0x25,lVar1 + 4);
  cVar2 = FUN_00001700(auStack_3a0,aiStack_290,0xffffffff80200038,0x29);
  if ((cVar2 != '\0') && (aiStack_290[0] == 0x23ef)) {
    thunk_EXT_FUN_8010cc40(0xffffffff80202d90,aiStack_290,0x278);
    uVar3 = 1;
  }
  return uVar3;
}


/* ==== FUN_00002058 @ 00002058 ==== */

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
  FUN_0000eb00();
  return;
}


/* ==== FUN_00002690 @ 00002690 ==== */

void FUN_00002690(void)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_0000ead8();
  FUN_000039e8();
  lVar4 = 0xc;
  lVar3 = -0x7fdfd268;
  puVar2 = (uint *)(*(int *)(iVar1 + 0x114) + -4);
  do {
    puVar2 = puVar2 + 1;
    thunk_EXT_FUN_8010cc40((ulonglong)*puVar2 + 0x54,lVar3,0x30);
    lVar4 = lVar4 + -1;
    lVar3 = lVar3 + 0x30;
  } while (lVar4 != 0);
  return;
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

void FUN_00002970(void)

{
  float fVar1;
  double *pdVar2;
  int unaff_r25;
  undefined8 unaff_r26;
  int unaff_r27;
  double *unaff_r28;
  uint *unaff_r29;
  int unaff_r30;
  code *unaff_r31;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double in_f21;
  double in_f22;
  double in_f23;
  double in_f24;
  double dVar6;
  double in_f25;
  double in_f26;
  double in_f27;
  double dVar7;
  double dVar8;
  double in_f31;
  longlong lStack00000050;
  
  do {
    lStack00000050 = (longlong)unaff_r27;
    dVar4 = (double)(float)((double)lStack00000050 * in_f23);
    dVar6 = in_f24;
    if (in_f27 < dVar4) {
      dVar8 = (double)(float)((double)*(float *)(unaff_r30 + 0x238) * in_f31);
      dVar7 = (double)(float)((double)*(float *)(unaff_r30 + 0x23c) * in_f31);
      dVar5 = (double)(float)((double)*(float *)(unaff_r30 + 0x240) * in_f31);
      if (in_f26 <= (double)(float)(in_f25 - dVar4)) {
        dVar4 = (double)(*unaff_r31)();
        in_f24 = dVar4 * in_f21;
      }
    }
    else {
      dVar5 = (double)(float)(dVar4 * dVar4);
      fVar1 = (float)(in_f27 - dVar5);
      dVar8 = (double)((float)((double)*(float *)(unaff_r30 + 0x218) * in_f31) * fVar1 +
                      (float)((double)(float)((double)*(float *)(unaff_r30 + 0x228) * in_f31) *
                             dVar5));
      dVar7 = (double)((float)((double)*(float *)(unaff_r30 + 0x21c) * in_f31) * fVar1 +
                      (float)((double)(float)((double)*(float *)(unaff_r30 + 0x22c) * in_f31) *
                             dVar5));
      dVar5 = (double)((float)((double)*(float *)(unaff_r30 + 0x220) * in_f31) * fVar1 +
                      (float)((double)(float)((double)*(float *)(unaff_r30 + 0x230) * in_f31) *
                             dVar5));
      if (in_f26 <= dVar4) {
        dVar4 = (double)(*unaff_r31)();
        in_f24 = dVar4 * in_f22;
      }
    }
    lVar3 = 0x200;
    pdVar2 = unaff_r28;
    do {
      dVar4 = (double)((float)*pdVar2 * (float)in_f24);
      if (in_f27 <= (double)((float)*pdVar2 * (float)in_f24)) {
        dVar4 = in_f27;
      }
      fVar1 = (float)(in_f27 - dVar4);
      pdVar2 = pdVar2 + 1;
      unaff_r29 = unaff_r29 + 1;
      *unaff_r29 = (uint)((((longlong)
                            ((float)((double)*(float *)(unaff_r30 + 0x228) * in_f31) * fVar1 +
                            (float)(dVar4 * dVar8)) & 0xffU) << 8 | 0xff0000 |
                          (longlong)
                          ((float)((double)*(float *)(unaff_r30 + 0x22c) * in_f31) * fVar1 +
                          (float)(dVar4 * dVar7)) & 0xffU) << 8) |
                   (uint)(longlong)
                         ((float)((double)*(float *)(unaff_r30 + 0x230) * in_f31) * fVar1 +
                         (float)(dVar4 * dVar5)) & 0xff;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    unaff_r27 = unaff_r27 + 1;
    in_f24 = dVar6;
  } while (unaff_r27 < 0x100);
  (*(code *)&SUB_9801cf10)(unaff_r26,0);
  (*(code *)&SUB_98011d90)(unaff_r25,unaff_r26);
  *(int *)(unaff_r25 + 0x120) = (int)unaff_r26;
  FUN_0000eba8();
  return;
}


/* ==== FUN_00002b20 @ 00002b20 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 local_a0;
  undefined1 auStack_98 [4];
  int local_94;
  longlong local_90;
  undefined8 local_88;
  
  FUN_0000eac8();
  iVar4 = FUN_0000eb6c();
  uVar1 = *(undefined4 *)(iVar4 + 0x110);
  local_a0 = (ulonglong)local_a0._4_4_;
  FUN_00003ce0(0x100,0x100,0,0,0x18280086,1,&local_a0,0);
  uVar2 = local_a0._0_4_;
  (*(code *)&SUB_9801e380)(local_a0._0_4_,0,auStack_98,0,0);
  puVar7 = (uint *)(local_94 + -4);
  dVar17 = (double)_DAT_802013d4;
  dVar16 = (double)_DAT_802013cc;
  dVar11 = (double)_DAT_802013d8;
  iVar6 = 0;
  dVar15 = (double)_DAT_8020137c;
  dVar13 = (double)_DAT_802013dc;
  dVar14 = (double)_DAT_802013e0;
  do {
    local_a0 = (ulonglong)iVar6;
    iVar8 = 0;
    dVar12 = (double)(float)((double)(float)((double)(longlong)local_a0 * dVar14) * dVar13);
    do {
      local_90 = (longlong)iVar8;
      dVar9 = (double)(*(code *)&SUB_9800f918)
                                ((double)(float)((double)(float)((double)local_90 * dVar14) * dVar13
                                                ),dVar12,uVar1);
      iVar8 = iVar8 + 1;
      dVar10 = (double)(float)((double)(float)(dVar9 + dVar15) * dVar11);
      dVar9 = (double)(float)(dVar15 - dVar10);
      local_88._7_1_ =
           (byte)(longlong)
                 ((double)(float)(dVar9 * (double)_DAT_80202fdc) * dVar17 +
                 (double)(float)((double)(float)((double)_DAT_80202fdc * dVar10) * dVar16));
      uVar5 = (uint)(byte)local_88;
      local_88._7_1_ =
           (byte)(longlong)
                 ((double)(float)(dVar9 * (double)_DAT_80202fe0) * dVar17 +
                 (double)(float)((double)(float)((double)_DAT_80202fe0 * dVar10) * dVar16));
      bVar3 = (byte)local_88;
      local_88 = (longlong)
                 ((double)(float)(dVar9 * (double)_DAT_80202fd8) * dVar17 +
                 (double)(float)((double)(float)((double)_DAT_80202fd8 * dVar10) * dVar16));
      puVar7 = puVar7 + 1;
      *puVar7 = ((uint)(byte)local_88 << 8 | 0xffff0000 | uVar5) << 8 | (uint)bVar3;
    } while (iVar8 < 0x100);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x100);
  (*(code *)&SUB_9801cf10)(uVar2,0);
  (*(code *)&SUB_98011d90)(iVar4,uVar2);
  *(undefined4 *)(iVar4 + 0x128) = uVar2;
  FUN_0000ebb8();
  return;
}


/* ==== FUN_00002d70 @ 00002d70 ==== */

void FUN_00002d70(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x60000000;
  thunk_EXT_FUN_80073850(param_1,4);
  uVar1 = thunk_EXT_FUN_80080048(param_1);
  thunk_EXT_FUN_8007f968(uVar1,4);
  return;
}


/* ==== FUN_00002db8 @ 00002db8 ==== */

void FUN_00002db8(void)

{
  (*(code *)0x800817d0)(0xffffffff80170880,0x7a020000,0x7c000,0);
  return;
}


/* ==== FUN_00002dd8 @ 00002dd8 ==== */

undefined8 FUN_00002dd8(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  int local_50;
  short local_4c [38];
  
  iVar3 = FUN_0000eacc();
  local_50 = 0;
  lVar2 = thunk_EXT_FUN_8006aea0(0xffffffff80203d14,0x3d8,0,8,0,&local_50);
  if (lVar2 == 0) {
    *(char *)(local_50 + 0x1e) = *(char *)(iVar3 + 0x1e) + *(char *)(local_50 + 0x1e);
    *(undefined4 *)(local_50 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(local_50 + 0x20) = param_2;
    iVar1 = *(int *)(local_50 + 0x18);
    thunk_EXT_FUN_80064498(iVar1 + 0x10);
    thunk_EXT_FUN_80064498(iVar1 + 0x48);
    thunk_EXT_FUN_80089760(iVar1 + 0x80);
    *(int *)(iVar1 + 0xa0) = iVar3;
    *(int *)(iVar1 + 0x324) = iVar1 + 800;
    *(int *)(iVar1 + 800) = iVar1 + 800;
    *(undefined1 *)(iVar1 + 0x9c) = 0;
    *(int *)(iVar1 + 0x32c) = iVar1 + 0x328;
    *(int *)(iVar1 + 0x328) = iVar1 + 0x328;
    thunk_EXT_FUN_8008b8e0(iVar3);
    *(undefined8 *)(iVar1 + 0xa8) = param_3;
    *(longlong *)(iVar1 + 0xb0) = param_4;
    *(ulonglong *)(iVar1 + 0xb8) = (ulonglong)*(uint *)(local_50 + 0x20) * param_4;
    *(undefined4 *)(iVar1 + 0x338) = 3;
    *(undefined4 *)(iVar1 + 0x33c) = 0;
    *(int *)(iVar1 + 0x374) = iVar1 + 0x370;
    *(int *)(iVar1 + 0x370) = iVar1 + 0x370;
    thunk_EXT_FUN_80089760(iVar1 + 0x350);
    iVar4 = FUN_00003d90(local_50);
    *(int *)(iVar1 + 0xc0) = iVar4;
    if (iVar4 == -1) {
      thunk_EXT_FUN_80085ee8(0xffffffff80201430);
    }
    else {
      local_4c[2] = 0;
      local_4c[0] = (short)iVar4 + 0x30;
      local_4c[1] = 0x3a;
      *(uint *)(local_50 + 0x14) = *(uint *)(local_50 + 0x14) & 0xffffffef;
      lVar2 = FUN_00003e68(iVar1 + 200,local_4c,1);
      if (lVar2 == 0) {
        *(int *)(iVar3 + 0xc) = local_50;
        return 0;
      }
      thunk_EXT_FUN_80085ee8(0xffffffff80201480,*(undefined4 *)(iVar1 + 0xc0));
    }
    if (*(int *)(iVar1 + 0xc0) != -1) {
      FUN_00003e08();
    }
    thunk_EXT_FUN_8006b150(local_50);
  }
  else {
    thunk_EXT_FUN_80085ee8(0xffffffff802013e8,lVar2);
    thunk_EXT_FUN_80085ea0();
  }
  return 0xffffffffc000014f;
}


/* ==== FUN_00002f98 @ 00002f98 ==== */

ulonglong FUN_00002f98(void)

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
      return 0xffffffffffffffff;
    }
    iVar1 = -0x7fdfc7dc;
  }
  uVar2 = bRam7feac000 >> 4 & 3;
  if (3 < uVar2) {
    return 0xffffffffffffffff;
  }
  return (ulonglong)*(uint *)(uVar2 * 4 + iVar1);
}


/* ==== FUN_00003000 @ 00003000 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00003000(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00003f00(0xffffffff801ff6fc,param_1,_DAT_80202d7c,0xffffffff801ff738,6);
  return cVar1 != '\0';
}


/* ==== FUN_00003050 @ 00003050 ==== */

undefined8 FUN_00003050(undefined8 param_1)

{
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800641d8(0xffffffff80202d44);
  FUN_00003000(param_1);
  thunk_EXT_FUN_800643d8(0xffffffff80202d44);
  thunk_EXT_FUN_800718f8();
  return 0;
}


/* ==== FUN_000030b0 @ 000030b0 ==== */

bool FUN_000030b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  cVar1 = FUN_000044e0(param_1,0xffffffff801f41e8,&local_30);
  if (cVar1 == '\0') {
    thunk_EXT_FUN_80085ee8(0xffffffff802014f0);
  }
  return cVar1 != '\0';
}


/* ==== FUN_00003160 @ 00003160 ==== */

undefined8 FUN_00003160(void)

{
  uint in_r0;
  undefined8 uVar1;
  
  if (in_r0 < uRam801ffd0c) {
                    /* WARNING: Could not recover jumptable at 0x0000318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(in_r0 * 4 + -0x7fdfcd54))();
    return uVar1;
  }
  return 0xffffffffc0000001;
}


/* ==== FUN_000031c0 @ 000031c0 ==== */

undefined8 FUN_000031c0(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == 2) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 3) {
      param_3[0] = 0xffffffff;
      param_3[1] = 0xffffffff;
      return 0;
    }
    if (param_2 != 4) {
      return 0xffffffffc0000002;
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

undefined8 FUN_00003218(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar3 = (char *)FUN_0000ead0();
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0;
  while( true ) {
    pcVar2 = *(char **)(uVar7 * 4 + -0x7fdfcd34);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((((int)(pcVar6 + (-1 - (int)pcVar2)) <= (int)(pcVar5 + (-1 - (int)pcVar3))) &&
        (iVar4 = thunk_EXT_FUN_80086390
                           (pcVar3 + ((int)(pcVar5 + (-1 - (int)pcVar3)) -
                                     (int)(pcVar6 + (-1 - (int)pcVar2))),0xffffffffffffffff,pcVar2,
                            0xffffffffffffffff,1), iVar4 == 0)) &&
       ((uVar7 != 0 || ((param_2 & 0xffffffff) == 8)))) break;
    uVar7 = uVar7 + 1;
    if (1 < uVar7) {
      return 0;
    }
  }
  return 1;
}


/* ==== FUN_000032d8 @ 000032d8 ==== */

void FUN_000032d8(void)

{
  (*(code *)&LAB_8007d6ec)();
  return;
}


/* ==== FUN_000032f0 @ 000032f0 ==== */

void FUN_000032f0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_0000ead8();
  piVar1 = (int *)*piVar3;
  piVar2 = piVar3;
  while (piVar1 != piVar3) {
    if (*(int *)(*piVar2 + 0xc) == -0x7ea10000) {
      FUN_00004600();
    }
    else {
      iVar4 = thunk_EXT_FUN_800864b0
                        (*(undefined4 *)(*piVar2 + 0x20),0xffffffffffffffff,0xffffffff80201540,
                         0xffffffffffffffff,0);
      if (iVar4 == 0) {
        FUN_000048a8();
      }
    }
    piVar2 = (int *)*piVar2;
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* ==== FUN_00003378 @ 00003378 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00003378(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined1 auStack_3bc [40];
  char acStack_394 [260];
  char cStack_290;
  char cStack_28f;
  undefined1 uStack_280;
  undefined1 auStack_27f [271];
  undefined1 uStack_170;
  undefined1 auStack_16f [367];
  
  FUN_0000eab8();
  iVar13 = 0;
  uStack_280 = 0;
  uVar11 = 0;
  thunk_EXT_FUN_8010d110(auStack_27f,0,0x103);
  iStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  thunk_EXT_FUN_8010d110(auStack_3bc,0,0x130);
  uStack_3c4 = 0;
  uStack_170 = 0;
  thunk_EXT_FUN_8010d110(auStack_16f,0,0x103);
  lVar1 = FUN_00004928();
  iVar2 = FUN_0000ef68(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x40006);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x554;
    iVar3 = thunk_EXT_FUN_80086390(lVar1,0x10,0xffffffff80201550,0x10,1);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_0000f048(lVar1);
      if (puVar4 == (undefined4 *)0x0) goto LAB_00003670;
      iVar3 = 0;
      puVar8 = puVar4 + 0x25e8;
      lVar1 = 0x104;
      puVar9 = puVar8;
      do {
        if (*(char *)((int)puVar8 + iVar3) == '\\') {
          puVar9 = (undefined4 *)((int)puVar8 + iVar3);
        }
        iVar3 = iVar3 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      thunk_EXT_FUN_8010c7f8
                (&uStack_170,0x104,0xffffffff80201564,(int)puVar9 + (-0x97a0 - (int)puVar4));
      thunk_EXT_FUN_8008b928(*puVar4);
    }
    else {
      thunk_EXT_FUN_8010d1b0(&uStack_170,lVar1,0x104);
    }
    do {
      if (iVar13 == 0) {
        thunk_EXT_FUN_8010c7f8(&uStack_280,0x104,0xffffffff802015c0,&uStack_170);
      }
      else {
        if (iVar13 == 1) {
          uVar6 = 0xffffffff802015b4;
          puVar7 = &uStack_170;
        }
        else {
          uVar6 = 0xffffffff8020159c;
          puVar7 = puRam802032a0;
        }
        thunk_EXT_FUN_8010c7f8(&uStack_280,0x104,uVar6,puVar7,*(undefined4 *)(iVar2 + 0xc));
      }
      cVar5 = FUN_000014d0(&uStack_280,&iStack_3d0,&uStack_3c8);
      if (cVar5 != '\0') {
        thunk_EXT_FUN_8010d110(&uStack_3c0,0,0x134);
        thunk_EXT_FUN_8010cc40(&uStack_3c0,iVar2,0x18);
        cVar5 = FUN_000044e0(iStack_3d0,0xffffffff801f4938,&uStack_3c0);
        if (((cVar5 != '\0') && (cStack_290 == '\x01')) && (cStack_28f == '\0')) {
          uVar6 = 0xffffffff80201588;
          puVar7 = puRam802032a0;
          if (iVar13 != 2) {
            uVar6 = 0xffffffff80201580;
            puVar7 = &uStack_170;
          }
          thunk_EXT_FUN_8010c7f8(&uStack_280,0x104,uVar6,puVar7,acStack_394);
          iVar3 = FUN_0000ed98(&uStack_280,9,0,&uStack_3c4);
          if (iVar3 != 0) break;
          pcVar12 = acStack_394;
          pcVar10 = acStack_394;
          cVar5 = acStack_394[0];
          while (cVar5 != '\0') {
            if (cVar5 == '\\') {
              pcVar12 = pcVar10 + 1;
            }
            pcVar10 = pcVar10 + 1;
            cVar5 = *pcVar10;
          }
          lVar1 = thunk_EXT_FUN_80064a68(200);
          if (lVar1 != 0) {
            thunk_EXT_FUN_8010d110(lVar1,0,200);
            thunk_EXT_FUN_8010c880(lVar1,100,0xffffffff8020156c,pcVar12);
            iVar3 = FUN_0000ee38(&uStack_3cc,0,0,0,0xffffffff801f4ca0,lVar1,0);
            if (iVar3 == 0) {
              thunk_EXT_FUN_80089eb0(uStack_3cc);
            }
          }
          uVar11 = 1;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  }
LAB_00003670:
  if (iStack_3d0 != 0) {
    thunk_EXT_FUN_80064768();
  }
  return uVar11;
}


/* ==== FUN_00003690 @ 00003690 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003690(void)

{
  int iVar1;
  
  iVar1 = FUN_0000ef68(*(undefined4 *)(_DAT_801a5dd4 + 0x58),0x40006);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != -0x1f82f) {
      return;
    }
    if (*(int *)(iVar1 + 4) == 0x20449700) {
      FUN_00002d70(0xffffffff922bfe20);
      FUN_00002d70(0xffffffff922bfe5c);
    }
  }
  FUN_00004d38(_DAT_801a5dd4,0xffffffff802015d0,0x210,0xffffffff801f4d08);
  FUN_00004d38(_DAT_801a5dd4,0xffffffff802015d0,0x227,0xffffffff801f4ed8);
  return;
}


/* ==== FUN_000037cc @ 000037cc ==== */

undefined8 FUN_000037cc(void)

{
  char cVar2;
  undefined8 uVar1;
  undefined8 *in_r9;
  undefined8 unaff_r30;
  undefined8 unaff_r31;
  undefined8 uStack00000050;
  
  uStack00000050 = *in_r9;
  thunk_EXT_FUN_8008c148(*in_r9,&stack0x00000058,&stack0x00000050);
  cVar2 = FUN_00004f28(&stack0x00000058);
  if (cVar2 == '\0') {
    uVar1 = 0xffffffffc0000022;
  }
  else {
    uVar1 = FUN_0000f068(unaff_r30,unaff_r31);
  }
  return uVar1;
}


/* ==== FUN_0000383c @ 0000383c ==== */

undefined8 FUN_0000383c(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((((*(byte *)(*(int *)(param_2 + 0x50) + 2) & 0x80) == 0) &&
      (uVar1 = *(uint *)(*(int *)(param_2 + 0x50) + 0x10), (uVar1 & 0x8000) != 0)) &&
     ((uVar1 = uVar1 >> 2 & 0xfff, uVar1 < 0x11 || (0x13 < uVar1)))) {
    return 0xffffffffc0000022;
  }
  uVar2 = (*(code *)0x80094828)();
  return uVar2;
}


/* ==== FUN_00003894 @ 00003894 ==== */

undefined8 FUN_00003894(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(*(int *)(param_2 + 0x50) + 0x18) + 8) == 0) {
    return 0xffffffffc0000022;
  }
  uVar1 = (*(code *)0x80093990)();
  return uVar1;
}


/* ==== FUN_000038cc @ 000038cc ==== */

undefined8 FUN_000038cc(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x50) + 8);
  if ((iVar1 != 10) && (iVar1 != 0xd)) {
    uVar2 = (*(code *)0x80093ed8)();
    return uVar2;
  }
  return 0xffffffffc0000022;
}


/* ==== FUN_000038f8 @ 000038f8 ==== */

void FUN_000038f8(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,
                 ulonglong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar7 = (int)param_4;
  uVar6 = (undefined4)((ulonglong)param_4 >> 0x20);
  iVar3 = FUN_0000eab8();
  if (0 < iVar7) {
    lVar9 = 0;
    lVar8 = CONCAT44(uVar6,iVar7);
    do {
      lVar10 = 0;
      iVar7 = (int)param_3;
      if (0 < iVar7) {
        do {
          lVar11 = lVar9 + lVar10;
          iVar1 = (int)lVar11 * 4;
          iVar4 = FUN_00004f98(lVar11,param_3,4);
          iVar5 = FUN_00005058(lVar11,param_3,4);
          iVar4 = (iVar4 * iVar7 + iVar5) * 4;
          if ((param_5 & 0xff) == 0) {
            iVar5 = iVar4 + iVar3;
            iVar2 = iVar1 + param_2;
            *(undefined1 *)(iVar1 + param_2) = *(undefined1 *)(iVar4 + iVar3);
            *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(iVar5 + 1);
            *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(iVar5 + 2);
            *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(iVar5 + 3);
          }
          else {
            iVar5 = iVar1 + iVar3;
            iVar2 = iVar4 + param_2;
            *(undefined1 *)(iVar4 + param_2) = *(undefined1 *)(iVar1 + iVar3);
            *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(iVar5 + 1);
            *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(iVar5 + 2);
            *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(iVar5 + 3);
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < iVar7);
      }
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 + param_3;
    } while (lVar8 != 0);
  }
  return;
}


/* ==== FUN_000039e8 @ 000039e8 ==== */

void FUN_000039e8(void)

{
  (*(code *)&LAB_98012e00)();
  return;
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

ulonglong FUN_00003ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong lVar1;
  
  lVar1 = (*(code *)&SUB_9801e398)(param_1,param_2,1,param_3,param_4,param_5,param_6,3);
  *param_7 = (int)lVar1;
  return -(ulonglong)(lVar1 == 0) & 0xffffffff8007000e;
}


/* ==== FUN_00003d48 @ 00003d48 ==== */

void FUN_00003d48(double param_1,undefined8 param_2,undefined8 param_3,float *param_4)

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

uint FUN_00003d90(void)

{
  undefined4 uVar2;
  undefined8 uVar1;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_0000ead8();
  uVar5 = 0xffffffff;
  uVar1 = thunk_EXT_FUN_80070138(0xffffffff80203008);
  piVar3 = (int *)&DAT_8020300c;
  uVar4 = 0;
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)(&DAT_8020300c + uVar4 * 4) = uVar2;
      uVar5 = uVar4;
      break;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 10);
  thunk_EXT_FUN_8007018c(0xffffffff80203008,uVar1);
  return uVar5;
}


/* ==== FUN_00003e08 @ 00003e08 ==== */

void FUN_00003e08(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_EXT_FUN_80070138(0xffffffff80203008);
  *(undefined4 *)(&DAT_8020300c + param_1 * 4) = 0;
  thunk_EXT_FUN_8007018c(0xffffffff80203008,uVar1);
  return;
}


/* ==== FUN_00003e68 @ 00003e68 ==== */

undefined8 FUN_00003e68(ulonglong param_1,undefined4 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  undefined4 uStack0000001c;
  undefined4 local_10 [4];
  
  uStack0000001c = param_2;
  local_10[0] = param_2;
  iVar3 = FUN_00006af0(local_10);
  if (iVar3 < 0) {
    uVar2 = 0xb;
  }
  else {
    iVar4 = iVar3 * 4;
    puVar1 = *(undefined1 **)(iVar4 + -0x7fdfcfcc);
    if (puVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(iVar4 + -0x7fdfcfcc) = 0;
      *puVar1 = 0;
    }
    if ((param_1 & 0xffffffff) != 0) {
      puVar1 = (undefined1 *)param_1;
      puVar1[1] = (char)iVar3;
      *puVar1 = 0;
      *(undefined1 **)(iVar4 + -0x7fdfcfcc) = puVar1;
    }
    if ((param_3 & 0xff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00006b68(&stack0x0000001c,&stack0x00000014,0);
    }
  }
  return uVar2;
}


/* ==== FUN_00003f00 @ 00003f00 ==== */

undefined8
FUN_00003f00(undefined8 param_1,ulonglong param_2,undefined4 param_3,longlong param_4,
            ulonglong param_5)

{
  char *pcVar3;
  int iVar4;
  longlong lVar1;
  undefined8 uVar2;
  char cVar7;
  int iVar5;
  int iVar6;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [2];
  int local_a0 [2];
  undefined2 local_98 [2];
  undefined2 local_94;
  undefined2 local_92;
  uint local_90;
  undefined2 *local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  
  pcVar3 = (char *)FUN_0000eab8();
  uVar10 = 0;
  local_7c = (undefined4)param_4;
  local_78 = (undefined4)param_5;
  local_98[0] = 0;
  local_a0[0] = 0;
  local_94 = 0;
  local_92 = 0;
  uVar8 = 0;
  local_a0[1] = 0;
  local_b0 = 0;
  local_a8[0] = 0;
  local_74 = 0;
  local_70 = 0;
  local_ac = 0;
  local_6c = 0;
  local_68 = 0;
  local_80 = param_3;
  if ((param_2 & 0xff) == 1) {
    FUN_000014d0(pcVar3,&local_ac,local_a8);
  }
  iVar4 = thunk_EXT_FUN_80064a68(param_5 + 0x400);
  local_70 = iVar4;
  if (iVar4 == 0) {
    thunk_EXT_FUN_80085ee8(0xffffffff802017c0);
    goto LAB_000041c8;
  }
  iVar6 = iVar4 + 0x400;
  local_68 = iVar6;
  thunk_EXT_FUN_8010d110(iVar6,0,param_5);
  thunk_EXT_FUN_80086110(local_98,pcVar3);
  local_90 = 0xfffffffd;
  if (pcVar3 != (char *)0x0) {
    local_90 = -(uint)(*pcVar3 != '\\') & 0xfffffffd;
  }
  local_88 = 0x40;
  local_8c = local_98;
  lVar1 = thunk_EXT_FUN_8006caa8(&local_b0,0x40100100,&local_90,local_a0,0,0x80,0,5);
  if (lVar1 == 0) {
    local_74 = local_b0;
    cVar7 = FUN_000073c8(local_ac,0xffffffff801f73c0,0xffffffff801f72f0,0xffffffff801f7228,&local_80
                        );
    if (cVar7 == '\0') {
      thunk_EXT_FUN_80085ee8(0xffffffff80201888);
    }
    else {
      if ((param_5 & 0xffffffff) != 0) {
        do {
          iVar5 = iVar4 + 0x3ff + (int)uVar10;
          if (*(char *)(iVar5 + 1) != '\x01') {
            cVar7 = FUN_00007608(&local_80,0xffffffff802018d4,*(undefined4 *)param_4);
            if ((cVar7 == '\0') || (cVar7 = FUN_00007730(&local_80,param_4), cVar7 == '\0'))
            goto LAB_000041c0;
            uVar9 = uVar10 + 1;
            *(undefined1 *)(iVar5 + 1) = 1;
            lVar1 = param_4;
            if ((uVar9 & 0xffffffff) < (param_5 & 0xffffffff)) {
              do {
                lVar1 = lVar1 + 0x14;
                if ((*(char *)((int)uVar9 + iVar6) != '\x01') &&
                   (iVar5 = thunk_EXT_FUN_80086390
                                      (*(undefined4 *)param_4,0xffffffffffffffff,
                                       *(undefined4 *)lVar1,0xffffffffffffffff,1), iVar5 == 0)) {
                  cVar7 = FUN_00007730(&local_80,lVar1);
                  if (cVar7 == '\0') goto LAB_000041c0;
                  *(undefined1 *)((int)uVar9 + iVar6) = 1;
                }
                uVar9 = uVar9 + 1;
              } while ((uVar9 & 0xffffffff) < (param_5 & 0xffffffff));
            }
          }
          uVar10 = uVar10 + 1;
          param_4 = param_4 + 0x14;
        } while ((uVar10 & 0xffffffff) < (param_5 & 0xffffffff));
      }
      if (local_6c != 0) {
        iVar6 = thunk_EXT_FUN_8006cf00(local_b0,0,0,0,local_a0,iVar4,local_6c,0);
        if (iVar6 == 0x103) {
          iVar6 = thunk_EXT_FUN_8008b188(local_b0,1,0,0);
        }
        if ((iVar6 != 0) || (local_a0[0] < 0)) {
          uVar2 = 0xffffffff802018e0;
          goto LAB_000041b4;
        }
      }
      uVar8 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff80201828;
LAB_000041b4:
    thunk_EXT_FUN_80085ee8(uVar2);
  }
LAB_000041c0:
  thunk_EXT_FUN_80064768(iVar4);
LAB_000041c8:
  if (local_b0 != 0) {
    thunk_EXT_FUN_80089eb0();
  }
  return uVar8;
}


/* ==== FUN_00004238 @ 00004238 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004238(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  byte bVar8;
  uint uVar9;
  ulonglong unaff_r23;
  undefined1 uVar10;
  float *pfVar11;
  undefined8 unaff_r25;
  char *unaff_r26;
  ulonglong unaff_r27;
  undefined8 unaff_r28;
  uint unaff_r29;
  ulonglong uVar12;
  int *unaff_r30;
  int unaff_r31;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 in_stack_00000050;
  ulonglong in_stack_00000058;
  
  while ((((pfVar11 = (float *)(*(int *)(unaff_r31 + unaff_r30[1] + 0x10) + *unaff_r30),
           *(int *)(unaff_r31 + unaff_r30[1] + 4) == 0 ||
           ((ulonglong)*(uint *)(unaff_r31 + unaff_r30[1] + 4) != (unaff_r27 & 0xffffffff))) &&
          (iVar6 = thunk_EXT_FUN_80086390
                             (unaff_r28,0xffffffffffffffff,
                              *(undefined4 *)(unaff_r31 + unaff_r30[1] + 8),0xffffffffffffffff,1),
          iVar6 != 0)) ||
         (iVar6 = thunk_EXT_FUN_80086390
                            (unaff_r25,0xffffffffffffffff,*(undefined4 *)(unaff_r31 + unaff_r30[1]),
                             0xffffffffffffffff,1), iVar6 != 0))) {
    unaff_r29 = unaff_r29 + 1;
    unaff_r31 = unaff_r31 + 0x14;
    if ((uint)unaff_r30[2] <= unaff_r29) {
      thunk_EXT_FUN_80085ee8(0xffffffff80201930,unaff_r28,unaff_r27);
      return;
    }
  }
  iVar6 = unaff_r29 * 0x14;
  sVar2 = *(short *)(iVar6 + unaff_r30[1] + 0xe);
  uVar10 = (undefined1)unaff_r23;
  if (sVar2 == 0) {
    if (*unaff_r26 == '\"') {
      unaff_r26 = unaff_r26 + 1;
    }
    if (*(short *)(iVar6 + unaff_r30[1] + 0xc) != 1) {
      iVar3 = (int)pfVar11 - (int)unaff_r26;
      do {
        if (*unaff_r26 == '\0') break;
        unaff_r26[iVar3] = *unaff_r26;
        unaff_r23 = unaff_r23 + 1;
        unaff_r26 = unaff_r26 + 1;
      } while ((unaff_r23 & 0xffffffff) <
               ((ulonglong)*(ushort *)(iVar6 + unaff_r30[1] + 0xc) - 1 & 0xffffffff));
    }
    iVar6 = (int)unaff_r23;
    *(undefined1 *)(iVar6 + (int)pfVar11) = uVar10;
    if (((unaff_r23 & 0xffffffff) != 0) && (*(char *)((int)pfVar11 + iVar6 + -1) == '\"')) {
      *(undefined1 *)((int)pfVar11 + iVar6 + -1) = uVar10;
    }
    return;
  }
  if (sVar2 == 1) {
    fVar7 = (float)FUN_000078e0(unaff_r26);
    *pfVar11 = fVar7;
    return;
  }
  if (sVar2 == 2) {
    cVar1 = *unaff_r26;
    if (((cVar1 != 't') && (cVar1 != 'T')) && (cVar1 != '1')) {
      *(undefined1 *)pfVar11 = uVar10;
      return;
    }
    *(undefined1 *)pfVar11 = 1;
    return;
  }
  if (sVar2 != 3) {
    return;
  }
  if (*unaff_r26 != '0') {
    return;
  }
  if (unaff_r26[1] != 'x') {
    return;
  }
  in_stack_00000050 = (int)unaff_r23;
  uVar12 = unaff_r23;
  uVar13 = unaff_r23;
  while (unaff_r26[(int)uVar13 + 2] != '\0') {
    bVar8 = FUN_0000f0b8();
    if (((char)bVar8 < '0') || ('9' < (char)bVar8)) {
      if (((char)bVar8 < 'a') || ('f' < (char)bVar8)) break;
      bVar8 = bVar8 - 7;
    }
    if (0 < (int)uVar13) {
      uVar12 = (uVar12 & 0xfffffff) << 4;
    }
    uVar13 = uVar13 + 1;
    uVar12 = (longlong)(char)(bVar8 & 0xf) | uVar12;
    in_stack_00000050 = (int)uVar12;
    if (7 < (int)uVar13) break;
  }
  fVar5 = _DAT_802013e0;
  fVar7 = _DAT_802013cc;
  uVar9 = 0xc;
  lVar14 = 4;
  do {
    in_stack_00000058 = (ulonglong)*(byte *)((int)&stack0x00000050 + (int)unaff_r23);
    fVar4 = (float)in_stack_00000058 * fVar5;
    *pfVar11 = fVar4;
    if (((uint)*(ushort *)(iVar6 + unaff_r30[1] + 0xc) & 1 << (uVar9 & 0x3f)) != 0) {
      *pfVar11 = fVar4 * fVar7;
    }
    unaff_r23 = unaff_r23 + 1;
    uVar9 = uVar9 - 4;
    pfVar11 = pfVar11 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}


/* ==== FUN_000044e0 @ 000044e0 ==== */

undefined8 FUN_000044e0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  char local_b0;
  undefined1 auStack_af [126];
  undefined1 local_31;
  
  pcVar1 = (char *)FUN_0000ead4();
  local_b0 = '\0';
  thunk_EXT_FUN_8010d110(auStack_af,0,0x7f);
  local_c0 = pcVar1;
  do {
    cVar2 = FUN_00007938(&local_c0,&local_b4,&local_bc,&local_b8);
    iVar3 = local_b4;
    if (cVar2 == '\0') {
      if (*local_c0 != '\0') {
        return 0;
      }
      break;
    }
    if (local_b4 == 0) {
      if ((local_bc != 0) && (iVar3 = local_bc, iVar4 = local_b8, local_b8 != 0)) goto LAB_00004598;
    }
    else {
      if (local_b0 != '\0') {
        (*param_2)(param_3,0,0,0);
      }
      thunk_EXT_FUN_8010d1b0(&local_b0,iVar3,0x80);
      local_31 = 0;
      iVar3 = 0;
      iVar4 = 0;
LAB_00004598:
      (*param_2)(param_3,&local_b0,iVar3,iVar4);
    }
  } while (local_c0 != (char *)0x0);
  if (local_b0 != '\0') {
    (*param_2)(param_3,0,0,0);
  }
  return 1;
}


/* ==== FUN_00004600 @ 00004600 ==== */

void FUN_00004600(undefined8 param_1)

{
  FUN_000003c0(0xffffffff81696b20,0xffffffff801f7b40,1,0);
  FUN_000003c0(0xffffffff8169d448,0xffffffff801f7c50,0,0);
  FUN_000018f0(0xffffffff81a72a64,0xffffffff801f7d70,0,0);
  FUN_000018f0(0xffffffff81a72ad4,0xffffffff801f7d78,0,0);
  FUN_000003c0(0xffffffff8196a044,0xffffffff801f7d88,1,0);
  FUN_000003c0(0xffffffff816a14b8,0xffffffff801f7e68,0,0);
  FUN_000003c0(0xffffffff8169e680,0xffffffff801f8080,0,0);
  FUN_000018f0(0xffffffff8167f8f8,0xffffffff801f8210,0,0);
  FUN_000018f0(0xffffffff81682410,0xffffffff801f8238,0,0);
  FUN_000018f0(0xffffffff8167c370,0xffffffff801f8270,0,0);
  FUN_000018f0(0xffffffff81682470,0xffffffff801f82d8,0,0);
  FUN_000018f0(0xffffffff816ee190,0xffffffff801f83a8,0,0);
  FUN_000003c0(0xffffffff8199e3e0,0xffffffff801f83b0,0,0);
  FUN_000018f0(0xffffffff818cd588,0xffffffff801f83b8,0,0);
  FUN_000018f0(0xffffffff818efc10,0xffffffff801f8428,0,0);
  FUN_000018f0(0xffffffff818efb68,0xffffffff801f8438,0,0);
  FUN_000018f0(0xffffffff818efdd8,0xffffffff801f8448,0,0);
  FUN_000018f0(0xffffffff818efef8,0xffffffff801f8458,0,0);
  FUN_000018f0(0xffffffff81679780,0xffffffff801f8468,0,0);
  FUN_000018f0(0xffffffff81a724d4,0xffffffff801f8478,0,0);
  FUN_000003c0(0xffffffff816b70c8,0xffffffff801f8488,0,0);
  uRam81754234 = 0x60000000;
  uRam817450d4 = 0x38600001;
  FUN_000084a0(param_1,0x1d2,0xffffffff816e1680);
  return;
}


/* ==== FUN_000048a8 @ 000048a8 ==== */

void FUN_000048a8(void)

{
  FUN_000018f0(0xffffffff913fd6b4,0xffffffff801f8570,0,0);
  FUN_000018f0(0xffffffff913e9178,0xffffffff801f8608,0,0);
  FUN_000018f0(0xffffffff913f8278,0xffffffff801f8710,0,0);
  uRam913ea6a4 = 0x38600000;
  return;
}


/* ==== FUN_00004928 @ 00004928 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00004928(void)

{
  return (ulonglong)_DAT_81a9f850 + 0x350;
}


/* ==== FUN_00004938 @ 00004938 ==== */

void FUN_00004938(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  
  lVar2 = FUN_0000ead8();
  piVar1 = (int *)lVar2;
  if ((*(char *)(piVar1 + 0x4c) != '\x01') && (*(char *)((int)piVar1 + 0x131) != '\x01')) {
    if ((param_2 & 0xffffffff) == 0) {
      if (((param_3 & 0xffffffff) == 0) && ((param_4 & 0xffffffff) == 0)) {
        if (piVar1[6] != piVar1[3]) {
          return;
        }
        if ((piVar1[7] != 0) && (piVar1[7] != *piVar1)) {
          return;
        }
        lVar5 = lVar2 + 4;
        if ((piVar1[9] == 0) || (lVar6 = lVar2 + 0x28, piVar1[10] == 0)) {
          if (lVar2 + 0x20 == 0) {
            return;
          }
          iVar3 = 0;
          do {
            cVar4 = *(char *)((int)(lVar2 + 0x20) + iVar3);
            if ((cVar4 != -1) && (*(char *)(iVar3 + (int)lVar5) != cVar4)) {
              return;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 4);
        }
        else {
          cVar4 = FUN_000087f8(lVar5,lVar2 + 0x24,lVar5,lVar6);
          if (cVar4 != '\x01') {
            return;
          }
          cVar4 = FUN_000087f8(lVar6,lVar5);
          if (cVar4 != '\x01') {
            return;
          }
        }
        *(undefined1 *)(piVar1 + 0x4c) = 1;
        return;
      }
    }
    else if (((param_3 & 0xffffffff) == 0) && ((param_4 & 0xffffffff) == 0)) {
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      thunk_EXT_FUN_8010d110(lVar2 + 0x2c,0,0x104);
      return;
    }
    iVar3 = thunk_EXT_FUN_80086390
                      (param_2,0xffffffffffffffff,0xffffffff8020198c,0xffffffffffffffff,1);
    if (iVar3 == 0) {
      iVar3 = thunk_EXT_FUN_80086390
                        (param_3,0xffffffffffffffff,0xffffffff80201998,0xffffffffffffffff,1);
      pcVar7 = (char *)param_4;
      if (iVar3 == 0) {
        if (*pcVar7 == '\"') {
          param_4 = param_4 + 1;
        }
        cVar4 = *(char *)param_4;
        uVar8 = param_4;
        while (cVar4 != '\0') {
          uVar8 = uVar8 + 1;
          cVar4 = *(char *)uVar8;
        }
        if (*(char *)((int)uVar8 + -1) == '\"') {
          *(undefined1 *)((int)uVar8 + -1) = 0;
        }
        iVar3 = FUN_00008848(param_4,0,0x10);
        piVar1[6] = iVar3;
      }
      else {
        iVar3 = thunk_EXT_FUN_80086390
                          (param_3,0xffffffffffffffff,0xffffffff802019a0,0xffffffffffffffff,1);
        if (iVar3 == 0) {
          if (*pcVar7 == '\"') {
            param_4 = param_4 + 1;
          }
          cVar4 = *(char *)param_4;
          uVar8 = param_4;
          while (cVar4 != '\0') {
            uVar8 = uVar8 + 1;
            cVar4 = *(char *)uVar8;
          }
          if (*(char *)((int)uVar8 + -1) == '\"') {
            *(undefined1 *)((int)uVar8 + -1) = 0;
          }
          iVar3 = FUN_00008848(param_4,0,0x10);
          piVar1[7] = iVar3;
        }
        else {
          iVar3 = thunk_EXT_FUN_80086390
                            (param_3,0xffffffffffffffff,0xffffffff802019a8,0xffffffffffffffff,1);
          if (iVar3 == 0) {
            lVar2 = lVar2 + 0x20;
          }
          else {
            iVar3 = thunk_EXT_FUN_80086390
                              (param_3,0xffffffffffffffff,0xffffffff802019b8,0xffffffffffffffff,1);
            if (iVar3 == 0) {
              lVar2 = lVar2 + 0x24;
            }
            else {
              iVar3 = thunk_EXT_FUN_80086390
                                (param_3,0xffffffffffffffff,0xffffffff802019c4,0xffffffffffffffff,1)
              ;
              if (iVar3 != 0) {
                iVar3 = thunk_EXT_FUN_80086390
                                  (param_3,0xffffffffffffffff,0xffffffff802019d0,0xffffffffffffffff,
                                   1);
                if (iVar3 != 0) {
                  return;
                }
                if (*pcVar7 == '\"') {
                  param_4 = param_4 + 1;
                }
                cVar4 = *(char *)param_4;
                uVar8 = param_4;
                while (cVar4 != '\0') {
                  uVar8 = uVar8 + 1;
                  cVar4 = *(char *)uVar8;
                }
                if (*(char *)((int)uVar8 + -1) == '\"') {
                  *(undefined1 *)((int)uVar8 + -1) = 0;
                }
                thunk_EXT_FUN_8010d1b0(lVar2 + 0x2c,param_4,0x104);
                return;
              }
              lVar2 = lVar2 + 0x28;
            }
          }
          cVar4 = FUN_00008a08(param_4,lVar2);
          if (cVar4 == '\0') {
            *(undefined1 *)((int)piVar1 + 0x131) = 1;
          }
        }
      }
    }
  }
  return;
}


/* ==== FUN_00004d24 @ 00004d24 ==== */

void FUN_00004d24(void)

{
  return;
}


/* ==== FUN_00004d38 @ 00004d38 ==== */

undefined8 FUN_00004d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar3;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_40;
  uint auStack_3c [15];
  
  iVar4 = FUN_0000eacc();
  iVar9 = 0;
  uStack_40 = 0;
  auStack_3c[0] = 0;
  iVar5 = FUN_0000f0e8(param_2,&uStack_40);
  if (((iVar5 == 0) && (iVar5 = FUN_0000eda8(uStack_40,param_3,auStack_3c), iVar5 == 0)) &&
     (piVar6 = (int *)FUN_0000ef68(*(undefined4 *)(iVar4 + 0x58),0x103ff), piVar6 != (int *)0x0)) {
    piVar10 = piVar6 + 3;
    for (piVar11 = (int *)(piVar6[1] + (int)piVar10); piVar11 < (int *)((int)piVar6 + *piVar6);
        piVar11 = (int *)(*piVar11 + (int)piVar11)) {
      iVar4 = 0;
      piVar7 = piVar10;
      if (*(byte *)((int)piVar11 + 0x25) != 0) {
        do {
          do {
            cVar1 = *(char *)piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
          } while (cVar1 != '\0');
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(byte *)((int)piVar11 + 0x25));
      }
      iVar4 = thunk_EXT_FUN_80086390(param_2,0xffffffffffffffff,piVar7,0xffffffffffffffff,1);
      if (iVar4 == 0) {
        piVar6 = piVar11 + 10;
        if (*(short *)((int)piVar11 + 0x26) == 0) {
          return 0;
        }
        do {
          puVar2 = (uint *)*piVar6;
          uVar8 = *puVar2;
          if (uVar8 == auStack_3c[0]) {
            *puVar2 = (uint)param_4;
            thunk_EXT_FUN_80073850(puVar2,4);
            uVar3 = thunk_EXT_FUN_80080048(puVar2);
            thunk_EXT_FUN_8007f968(uVar3,4);
          }
          else {
            if ((auStack_3c[0] & 0x8000) != 0) {
              uVar8 = uVar8 - 1;
            }
            if ((uVar8 << 0x10 | (uint)*(ushort *)((int)puVar2 + 6)) == auStack_3c[0]) {
              FUN_000018f0(puVar2,param_4,0,0);
            }
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < (int)(uint)*(ushort *)((int)piVar11 + 0x26));
        return 0;
      }
    }
  }
  return 0;
}


/* ==== FUN_00004f14 @ 00004f14 ==== */

void FUN_00004f14(void)

{
  return;
}


/* ==== FUN_00004f28 @ 00004f28 ==== */

undefined8 FUN_00004f28(void)

{
  undefined2 *puVar2;
  char cVar4;
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 auStack_30 [48];
  
  puVar2 = (undefined2 *)FUN_0000ead8();
  cVar4 = thunk_EXT_FUN_80092028(puVar2,auStack_30);
  if (cVar4 == '\0') {
    uVar5 = 0;
    puVar6 = (undefined4 *)&DAT_802037f8;
    do {
      iVar3 = thunk_EXT_FUN_80086390
                        (*puVar6,0xffffffffffffffff,*(undefined4 *)(puVar2 + 2),*puVar2,0);
      if (iVar3 == 0) goto LAB_00004f48;
      uVar5 = uVar5 + 4;
      puVar6 = puVar6 + 1;
    } while ((uVar5 & 0xffffffff) < 0xc);
    uVar1 = 0;
  }
  else {
LAB_00004f48:
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== FUN_00004f98 @ 00004f98 ==== */

longlong FUN_00004f98(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = ((param_3 >> 1) >> (param_3 >> 2 & 0x3fU)) + (param_3 >> 2);
  uVar1 = param_1 << (uVar4 & 0x3f);
  uVar5 = ((int)uVar1 >> 3 & 0xfffffe00U) + ((int)uVar1 >> 2 & 0x1c0U) + (uVar1 & 0x3f);
  uVar2 = (int)uVar5 >> (uVar4 + 7 & 0x3f);
  iVar3 = param_2 + 0x1f >> 5;
  trapWord(6,(longlong)iVar3,0);
  trapWord(5,(longlong)iVar3 &
             ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
  return ((((ulonglong)(uint)((int)uVar2 / iVar3) & 0x3fffffff) * 4 +
           ((ulonglong)(uint)((int)uVar5 >> (uVar4 + 6 & 0x3f)) & 1) +
          ((ulonglong)(uint)((int)uVar1 >> 10) & 2)) * 8 & 0xfffffff8) +
         ((ulonglong)
          (uint)((int)((param_3 * 0x40 - 1U & uVar5 & 0xffffffe0) + (uVar5 * 2 & 0x1e)) >>
                (uVar4 + 3 & 0x3f)) & 0xfffffffe) + ((ulonglong)(uint)((int)uVar5 >> 4) & 1);
}


/* ==== FUN_00005058 @ 00005058 ==== */

longlong FUN_00005058(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = ((param_3 >> 1) >> (param_3 >> 2 & 0x3fU)) + (param_3 >> 2);
  uVar1 = param_1 << (uVar5 & 0x3f);
  uVar4 = ((int)uVar1 >> 3 & 0xfffffe00U) + ((int)uVar1 >> 2 & 0x1c0U) + (uVar1 & 0x3f);
  uVar2 = (int)uVar4 >> (uVar5 + 7 & 0x3f);
  iVar3 = param_2 + 0x1f >> 5;
  trapWord(6,(longlong)iVar3,0);
  trapWord(5,(longlong)iVar3 &
             ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
  return (((((ulonglong)(uint)((int)uVar4 >> (uVar5 + 5 & 0x3f)) & 0xfffffffe) +
            (longlong)((int)uVar1 >> 6) & 3) +
          ((longlong)(int)uVar2 - (longlong)((int)uVar2 / iVar3) * (longlong)iVar3 & 0x3fffffffU) *
          4) * 8 & 0xfffffff8) +
         (longlong)
         ((int)((((int)uVar4 >> 1 ^ uVar4) & 0xf ^ (int)uVar4 >> 1) & param_3 * 8 - 1U) >>
         (uVar5 & 0x3f));
}


/* ==== FUN_000051b8 @ 000051b8 ==== */

undefined8 FUN_000051b8(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 unaff_r25;
  undefined8 unaff_r26;
  undefined8 unaff_r27;
  undefined8 unaff_r30;
  int unaff_r31;
  short sStack00000050;
  undefined2 uStack00000052;
  undefined2 uStack00000054;
  
  uStack00000054 = (undefined2)unaff_r27;
  sStack00000050 = (short)*(undefined4 *)(unaff_r31 + 0xc0) + 0x30;
  uStack00000052 = 0x3a;
  lVar2 = FUN_00003e68(0,&stack0x00000050,0);
  if (lVar2 != 0) {
    thunk_EXT_FUN_80085ee8(0xffffffff80201a04,*(undefined4 *)(unaff_r31 + 0xc0));
  }
  *(undefined1 *)(unaff_r31 + 0x9c) = 1;
  FUN_0000f128(unaff_r30);
  thunk_EXT_FUN_80088fa0(unaff_r31 + 0x80);
  for (puVar1 = *(undefined4 **)(unaff_r31 + 800); puVar1 != (undefined4 *)(unaff_r31 + 800);
      puVar1 = (undefined4 *)*puVar1) {
    *(byte *)((int)puVar1 + -0x4e) = *(byte *)((int)puVar1 + -0x4e) | 0x80;
    if (((puVar1[-0x12] != 0) && ((~*(uint *)(puVar1[-0x12] + 8) & 1) == 1)) && (puVar1[-0x11] != 0)
       ) {
      puVar1[-0x11] = (int)unaff_r27;
      FUN_0000f148();
    }
  }
  thunk_EXT_FUN_800890f8(unaff_r31 + 0x80);
  thunk_EXT_FUN_800643d8(unaff_r25);
  thunk_EXT_FUN_800718f8();
  if ((int)unaff_r27 == 0) {
    thunk_EXT_FUN_8006b150(unaff_r26);
  }
  return unaff_r27;
}


/* ==== FUN_00005310 @ 00005310 ==== */

longlong FUN_00005310(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  byte bVar5;
  int iVar6;
  char cVar9;
  int iVar7;
  uint uVar8;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  int unaff_r16;
  longlong unaff_r18;
  undefined4 uVar13;
  char unaff_r19;
  int unaff_r21;
  int unaff_r22;
  ulonglong unaff_r23;
  longlong unaff_r26;
  longlong lVar15;
  int unaff_r27;
  char *pcVar16;
  undefined2 *unaff_r31;
  ushort uStack00000060;
  char *pcStack00000064;
  uint in_stack_00000068;
  uint in_stack_00000078;
  undefined2 uStack00000080;
  undefined4 in_stack_00000084;
  int in_stack_00000088;
  int in_stack_00000090;
  undefined2 uStack000000a0;
  undefined2 uStack000000a2;
  byte in_stack_000002b0;
  undefined2 uVar14;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(unaff_r21 + 0x48);
  in_stack_00000090 = unaff_r21 + 0x80;
  thunk_EXT_FUN_80088fa0();
  uVar2 = *(uint *)(unaff_r27 + 8);
  cVar1 = *(char *)(unaff_r27 + 8);
  if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
    thunk_EXT_FUN_800642b8(unaff_r21 + 0x10);
  }
  else {
    thunk_EXT_FUN_800641d8(unaff_r21 + 0x10);
  }
  if (*(int *)(unaff_r16 + 0x28) == 0) {
    uVar11 = **(ulonglong **)(unaff_r27 + 0x10);
    uStack00000060 = (ushort)(uVar11 >> 0x30);
    thunk_EXT_FUN_80085ee8
              (0xffffffff80201a70,uVar2 & 1,(unaff_r23 & 0xff) != 0,uStack00000060,
               uVar11 & 0xffffffff);
    iVar6 = *(int *)(unaff_r22 + 0x1c);
    uVar14 = (undefined2)unaff_r18;
    uVar13 = (undefined4)unaff_r18;
    pcStack00000064 = (char *)uVar11;
    if (iVar6 == 0) {
      if (*(char *)(unaff_r21 + 0x9c) != '\0') goto LAB_000053c8;
      if (uStack00000060 != 0) {
        iVar6 = unaff_r21 + 0x330;
        FUN_00008ae0(iVar6,unaff_r23);
        if (*pcStack00000064 == '\\') {
          if (uStack00000060 == 1) {
            if ((*(byte *)(unaff_r27 + 2) & 4) == 4) goto LAB_000056bc;
            uStack000000a0 = 0x5c;
            unaff_r26 = unaff_r18;
            uStack000000a2 = uVar14;
            goto LAB_000059e0;
          }
LAB_00005484:
          if (pcStack00000064[uStack00000060 - 1] == '\\') {
            unaff_r19 = '\x01';
            _uStack00000060 = CONCAT26(uStack00000060 - 1,(int6)uVar11);
            uVar11 = _uStack00000060;
          }
          do {
            _uStack00000060 = uVar11;
            thunk_EXT_FUN_8008c148(_uStack00000060,&stack0x00000080,&stack0x00000060);
            if ((uStack00000060 != 0) && (*pcStack00000064 == '\\')) goto LAB_00005878;
            FUN_0000f178(unaff_r31,0xff - (ulonglong)in_stack_00000068,&stack0x00000078,
                         in_stack_00000084,uStack00000080);
            in_stack_00000068 = (in_stack_00000078 >> 1) + in_stack_00000068;
            in_stack_00000088 = FUN_00008cf0(iVar6,&stack0x00000070);
            if (in_stack_00000088 == 0) goto LAB_000056e4;
            iVar7 = FUN_00008ae0(in_stack_00000088,unaff_r23);
            if (iVar7 == 0) goto LAB_00005940;
            thunk_EXT_FUN_80085ee8(0xffffffff80201a94,in_stack_00000084);
            unaff_r31[in_stack_00000078 >> 1] = 0x5c;
            unaff_r31 = unaff_r31 + (in_stack_00000078 >> 1) + 1;
            *unaff_r31 = uVar14;
            FUN_00008da0(iVar6);
            iVar6 = iVar7;
            if (uStack00000060 == 0) {
              iVar3 = *(int *)(iVar7 + 0x10);
              if (iVar3 != 0) {
                if ((*(uint *)(iVar3 + 8) & 8) == 8) goto LAB_0000582c;
                if (((~*(uint *)(iVar3 + 8) & 1) == 1) &&
                   ((((*(uint *)(unaff_r27 + 4) & 0x10106) != 0 || (*(char *)(iVar3 + 0x1a) != '\0')
                     ) || (*(char *)(iVar3 + 0x1b) != '\0')))) goto LAB_000059a4;
              }
              unaff_r26 = unaff_r18;
              if ((*(byte *)(unaff_r27 + 2) & 4) != 4) goto LAB_000059d0;
              uVar10 = 4;
              iVar7 = *(int *)(iVar7 + 0xc);
              goto LAB_00005930;
            }
            uVar11 = _uStack00000060;
          } while ((~*(uint *)(iVar7 + 8) & 1) != 1);
LAB_0000558c:
          lVar15 = -0x3fffffc6;
        }
        else {
LAB_00005878:
          lVar15 = -0x3fffffcd;
        }
        goto LAB_00005594;
      }
      if ((cVar1 != '\x01') && (cVar1 != '\x03')) {
        unaff_r18 = -0x3fffffde;
        goto LAB_000055a4;
      }
      if ((uVar2 & 1) == 1) {
        unaff_r18 = -0x3ffffefd;
        goto LAB_000055a4;
      }
      if ((uVar2 & 0x1000) == 0x1000) {
        unaff_r18 = -0x3ffffedf;
        goto LAB_000055a4;
      }
      if ((*(byte *)(unaff_r27 + 2) & 4) == 4) goto LAB_00005370;
      *(byte *)(unaff_r22 + 2) = *(byte *)(unaff_r22 + 2) | 4;
      thunk_EXT_FUN_8006bbd0(*(undefined4 *)(unaff_r27 + 4),0,unaff_r22,&stack0x00000088);
      uVar12 = 1;
      *(undefined4 *)(unaff_r22 + 8) = uVar13;
      *(undefined4 *)(unaff_r22 + 0xc) = uVar13;
LAB_00005920:
      *(undefined4 *)(unaff_r16 + 0x14) = uVar12;
      goto LAB_00005b58;
    }
    if ((*(byte *)(iVar6 + 2) & 0x80) == 0x80) {
LAB_000053c8:
      unaff_r18 = -0x3ffffd92;
      goto LAB_000055a4;
    }
    iVar6 = *(int *)(iVar6 + 8);
    if ((iVar6 != 0) && ((*(uint *)(iVar6 + 8) & 1) != 0)) {
      if ((*(uint *)(iVar6 + 8) & 0x10) == 0x10) {
        unaff_r18 = -0x3fffffaa;
        goto LAB_000055a4;
      }
      iVar6 = FUN_00008ae0(iVar6,unaff_r23);
      if (iVar6 == 0) {
        unaff_r18 = -0x3fffff66;
        goto LAB_000055a4;
      }
      cVar9 = FUN_00008c20(iVar6,&stack0x000000a0,&stack0x00000068,0x200);
      if (cVar9 == '\0') {
        thunk_EXT_FUN_80085ea0();
LAB_000056bc:
        lVar15 = -0x3ffffff3;
      }
      else {
        unaff_r31 = (undefined2 *)((int)&stack0x000000a0 + in_stack_00000068 * 2);
        if (uStack00000060 != 0) {
          if (*pcStack00000064 != '\\') goto LAB_00005484;
          goto LAB_00005878;
        }
        if ((*(byte *)(unaff_r27 + 2) & 4) != 4) goto LAB_000059e0;
LAB_000059a4:
        lVar15 = -0x3fffffde;
      }
      goto LAB_00005594;
    }
  }
LAB_00005370:
  unaff_r18 = -0x3ffffff3;
  goto LAB_000055a4;
LAB_00005940:
  lVar15 = -0x3fffff66;
  goto LAB_00005594;
LAB_0000582c:
  lVar15 = -0x3fffffaa;
  goto LAB_00005594;
LAB_000059d0:
  iVar7 = (int)unaff_r26;
  if ((*(uint *)(iVar6 + 8) & 1) == 1) {
LAB_000059e0:
    iVar7 = (int)unaff_r26;
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      if ((uVar2 & 0x40) == 0x40) {
        lVar15 = -0x3fffff46;
        goto LAB_00005594;
      }
LAB_00005a34:
      pcVar16 = (char *)(iVar6 + 0x18);
      if (*(char *)(iVar6 + 0x18) == '\0') {
        thunk_EXT_FUN_8006bbd0();
        if (*pcVar16 == '\x01') {
          if ((*(uint *)(iVar6 + 8) & 1) == 1) {
            lVar15 = FUN_000091d0(iVar6 + 0x48,&stack0x000000a0);
          }
          else {
            uVar8 = FUN_000092f8(cVar1);
            lVar15 = FUN_00009358(iVar6 + 0x40,&stack0x000000a0,
                                  *(uint *)(unaff_r27 + 4) & 3 | uVar8 & 0xff);
          }
          if (lVar15 != 0) {
            thunk_EXT_FUN_8006bb38(unaff_r22,pcVar16);
            lVar15 = FUN_00009768(lVar15,0);
            goto LAB_00005594;
          }
          *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 4;
        }
      }
      else {
        lVar15 = thunk_EXT_FUN_8006b9d0
                           (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),
                            unaff_r22,pcVar16,1);
        iVar7 = 0;
        if (lVar15 != 0) goto LAB_00005594;
      }
      if (((cVar1 == '\0') || (cVar1 == '\x04')) || (cVar1 == '\x05')) {
        if (iVar7 == 0) {
          uVar12 = 3;
          goto LAB_00005b1c;
        }
        thunk_EXT_FUN_8006bb38(unaff_r22,pcVar16);
      }
      else {
        uVar12 = 1;
LAB_00005b1c:
        *(undefined4 *)(unaff_r16 + 0x14) = uVar12;
      }
      *(int *)(*(int *)(unaff_r27 + 0x18) + 8) = iVar6;
      *(undefined4 *)(*(int *)(unaff_r27 + 0x18) + 0xc) = uVar13;
      if ((uVar2 & 0x1000) == 0x1000) {
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x10;
      }
LAB_00005b58:
      iVar6 = *(int *)(unaff_r21 + 800);
      *(int *)(unaff_r22 + 0x54) = unaff_r21 + 800;
      *(int *)(unaff_r22 + 0x50) = iVar6;
      *(int *)(iVar6 + 4) = unaff_r22 + 0x50;
      *(int *)(unaff_r21 + 800) = unaff_r22 + 0x50;
      goto LAB_000055a4;
    }
LAB_00005a10:
    lVar15 = -0x3fffffcb;
  }
  else {
    if (cVar1 == '\x02') goto LAB_00005a10;
    if ((unaff_r19 != '\x01') && ((uVar2 & 1) != 1)) goto LAB_00005a34;
    lVar15 = -0x3ffffefd;
  }
  goto LAB_00005594;
LAB_000056e4:
  if ((uStack00000060 != 0) && (*pcStack00000064 == '\\')) goto LAB_00005878;
  FUN_0000f178(unaff_r31,0xff - (ulonglong)in_stack_00000068,&stack0x00000078,in_stack_00000084,
               uStack00000080);
  in_stack_00000068 = (in_stack_00000078 >> 1) + in_stack_00000068;
  puVar4 = (undefined2 *)((int)unaff_r31 + (in_stack_00000078 & 0xfffffffe));
  *puVar4 = uVar14;
  thunk_EXT_FUN_8010d110(&stack0x000002a0,0,0x230);
  uVar10 = FUN_00008e58(&stack0x000000a0,&stack0x000002a0);
  thunk_EXT_FUN_80085ee8(0xffffffff80201aa4,&stack0x000000a0,uVar10);
  iVar7 = iVar6;
  if ((int)uVar10 != 4) {
    bVar5 = in_stack_000002b0 >> 4 & 1;
    if ((uStack00000060 != 0) && (bVar5 == 0)) goto LAB_0000558c;
    if ((uStack00000060 == 0) && ((*(byte *)(unaff_r27 + 2) & 4) == 4)) {
      uVar10 = 4;
      goto LAB_00005930;
    }
    iVar7 = FUN_00008f18(unaff_r21,iVar6,unaff_r23,bVar5,&stack0x00000070);
    in_stack_00000088 = iVar7;
    if (iVar7 == 0) goto LAB_00005940;
    FUN_00008da0(iVar6);
    iVar6 = iVar7;
    if (uStack00000060 == 0) goto LAB_000059d0;
    thunk_EXT_FUN_8008c148(_uStack00000060,&stack0x00000080,&stack0x00000060);
    unaff_r31 = puVar4 + 1;
    *puVar4 = 0x5c;
    *unaff_r31 = uVar14;
    goto LAB_000056e4;
  }
  lVar15 = -0x3fffffcc;
  if (uStack00000060 != 0) goto LAB_0000558c;
  if ((*(uint *)(iVar6 + 8) & 0x10) == 0x10) goto LAB_0000582c;
  if ((*(byte *)(unaff_r27 + 2) & 4) != 4) {
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) goto LAB_00005594;
    if ((unaff_r19 == '\x01') && ((uVar2 & 0x40) == 0x40)) goto LAB_00005878;
    lVar15 = FUN_00008fe8(unaff_r21,unaff_r16,iVar6,&stack0x000000a0,&stack0x00000070,unaff_r23,
                          uVar2 & 1,cVar1);
    if (lVar15 != 0) goto LAB_00005594;
    thunk_EXT_FUN_80085ee8(0xffffffff80201ad0,&stack0x000000a0);
    FUN_00008da0(iVar6);
    iVar6 = in_stack_00000088;
    thunk_EXT_FUN_8006bbd0
              (*(undefined4 *)(unaff_r27 + 4),*(undefined2 *)(unaff_r27 + 0xe),unaff_r22,
               in_stack_00000088 + 0x18);
    *(int *)(unaff_r22 + 8) = iVar6;
    *(undefined4 *)(unaff_r22 + 0xc) = uVar13;
    if (((uVar2 & 0x1000) == 0x1000) && ((uVar2 & 1) == 0)) {
      *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x10;
    }
    uVar12 = 2;
    goto LAB_00005920;
  }
  uVar10 = 5;
LAB_00005930:
  lVar15 = FUN_00009118(unaff_r21,unaff_r16,iVar7,uVar10);
LAB_00005594:
  unaff_r18 = lVar15;
  if (iVar6 != 0) {
    FUN_00008da0(iVar6);
  }
LAB_000055a4:
  thunk_EXT_FUN_800643d8(unaff_r21 + 0x10);
  thunk_EXT_FUN_800890f8(in_stack_00000090);
  thunk_EXT_FUN_800643d8(unaff_r21 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r16 + 0x10) = (int)unaff_r18;
  thunk_EXT_FUN_8006ac20(unaff_r16,0);
  return unaff_r18;
}


/* ==== FUN_00005b88 @ 00005b88 ==== */

undefined8 FUN_00005b88(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_0000ead4();
  uVar1 = *(uint *)(iVar4 + 0x18);
  iVar4 = *(int *)(*(int *)((int)param_2 + 0x50) + 0x18);
  iVar2 = *(int *)(iVar4 + 8);
  thunk_EXT_FUN_800718e0();
  lVar5 = (ulonglong)uVar1 + 0x80;
  thunk_EXT_FUN_80088fa0(lVar5);
  if (iVar2 != 0) {
    FUN_00008da0(iVar2);
  }
  iVar2 = *(int *)(iVar4 + 0x50);
  piVar3 = *(int **)(iVar4 + 0x54);
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  thunk_EXT_FUN_800890f8(lVar5);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)((int)param_2 + 0x10) = 0;
  thunk_EXT_FUN_8006ac20(param_2,0);
  return 0;
}


/* ==== FUN_00005c44 @ 00005c44 ==== */

longlong FUN_00005c44(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_r25;
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_r28;
  int unaff_r29;
  uint uVar8;
  char *unaff_r30;
  uint in_stack_00000050;
  
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(unaff_r28 + 0x48);
  if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x80) == 0x80) {
    unaff_r25 = -0x3ffffd92;
    goto LAB_00005f2c;
  }
  cVar1 = *unaff_r30;
  if (unaff_r29 == 0) {
    if (cVar1 == '\x02') {
      thunk_EXT_FUN_800642b8();
    }
    else {
      thunk_EXT_FUN_800641d8(unaff_r28 + 0x10);
    }
    if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x10) == 0x10) {
LAB_00005e2c:
      unaff_r25 = -0x3ffffed8;
    }
    else {
      uVar6 = *(ulonglong *)(unaff_r30 + 0xc);
      uVar5 = *(ulonglong *)(unaff_r28 + 0xb8);
      if (uVar6 < uVar5) {
        uVar2 = *(uint *)(unaff_r30 + 4);
        uVar8 = uVar2;
        if ((longlong)(uVar5 - uVar6) < (longlong)(ulonglong)uVar2) {
          uVar8 = (int)uVar5 - (int)uVar6;
        }
        cVar1 = *(char *)(*(int *)(unaff_r28 + 0xa0) + 0x1c);
        if (cVar1 == '\a') {
LAB_00005d44:
          iVar3 = *(int *)(unaff_r26 + 0x50);
          thunk_EXT_FUN_8010cc40(iVar3 + -0x24,iVar3,0x1c);
          *(char *)(iVar3 + -0x21) = (char)unaff_r27;
          *(uint *)(iVar3 + -0x20) = uVar8;
          unaff_r25 = FUN_0000f1c8(unaff_r26,*(undefined4 *)(unaff_r30 + 4));
          if (unaff_r25 == 0) {
            iVar3 = *(int *)(unaff_r26 + 0x50);
            *(undefined4 *)(iVar3 + -8) = 0x801f9810;
            *(undefined4 *)(iVar3 + -4) = unaff_r27;
            *(undefined1 *)(iVar3 + -0x21) = 0xe0;
            lVar4 = thunk_EXT_FUN_8006ab48(*(undefined4 *)(unaff_r28 + 0xa0),unaff_r26);
            thunk_EXT_FUN_800718f8();
            return lVar4;
          }
        }
        else if (cVar1 == '-') {
          if (((((*(uint *)(unaff_r26 + 0x1c) & 1) == 0) && ((*(uint *)(unaff_r30 + 8) & 1) == 0))
              && ((uVar2 & 0x1ff) == 0)) &&
             (((*(uint *)(unaff_r30 + 0x10) & 0x1ff) == 0 &&
              ((longlong)(uVar2 + uVar6) <= (longlong)uVar5)))) goto LAB_00005d44;
          *(undefined4 *)(unaff_r26 + 0x10) = 0xc000000d;
          thunk_EXT_FUN_8006ac20(unaff_r26,0);
        }
        else {
          thunk_EXT_FUN_80085ee8(0xffffffff80201ae8);
          thunk_EXT_FUN_80085ea0();
          *(undefined4 *)(unaff_r26 + 0x10) = 0xc0000010;
        }
      }
      else {
        unaff_r25 = -0x3fffffef;
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      unaff_r25 = -0x3fffffff;
      goto LAB_00005f2c;
    }
    if (cVar1 == '\x02') {
      thunk_EXT_FUN_800642b8();
    }
    else {
      thunk_EXT_FUN_800641d8(unaff_r28 + 0x10);
    }
    if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 0x10) == 0x10) goto LAB_00005e2c;
    thunk_EXT_FUN_80088fa0(unaff_r29 + 0x20);
    if (*(longlong *)(unaff_r29 + 0x78) == *(longlong *)(unaff_r30 + 0xc)) {
      uVar5 = (ulonglong)in_stack_00000050;
LAB_00005e6c:
      if (*unaff_r30 == '\x02') {
        uVar6 = *(ulonglong *)(unaff_r30 + 0xc);
        uVar5 = *(ulonglong *)(unaff_r29 + 0x50);
        if (uVar6 < uVar5) {
          uVar7 = (ulonglong)*(uint *)(unaff_r30 + 4);
          if (uVar5 < uVar7 + uVar6) {
            uVar7 = (uVar5 & 0xffffffff) - (uVar6 & 0xffffffff);
          }
          uVar5 = FUN_00009b30(unaff_r29 + 0x40,*(undefined4 *)(unaff_r26 + 0x1c),uVar7,
                               &stack0x00000050);
          goto LAB_00005ed0;
        }
        unaff_r25 = -0x3fffffef;
      }
      else {
        thunk_EXT_FUN_80085ea0();
LAB_00005ed0:
        if ((int)uVar5 != 0) goto LAB_00005ed8;
        if ((*(byte *)(*(int *)(unaff_r30 + 0x18) + 2) & 1) == 1) {
          *(ulonglong *)(*(int *)(unaff_r30 + 0x18) + 0x14) =
               (ulonglong)in_stack_00000050 + *(longlong *)(*(int *)(unaff_r30 + 0x18) + 0x14);
        }
        *(uint *)(unaff_r26 + 0x14) = in_stack_00000050;
      }
    }
    else {
      uVar5 = FUN_000098b0(unaff_r29 + 0x40);
      if (uVar5 == 0) goto LAB_00005e6c;
LAB_00005ed8:
      unaff_r25 = FUN_00009768(uVar5,0);
    }
    thunk_EXT_FUN_800890f8(unaff_r29 + 0x20);
  }
  thunk_EXT_FUN_800643d8(unaff_r28 + 0x10);
LAB_00005f2c:
  thunk_EXT_FUN_800643d8(unaff_r28 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r26 + 0x10) = (int)unaff_r25;
  thunk_EXT_FUN_8006ac20(unaff_r26,0);
  return unaff_r25;
}


/* ==== FUN_00005fb8 @ 00005fb8 ==== */

longlong FUN_00005fb8(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 unaff_r25;
  undefined8 unaff_r26;
  undefined4 unaff_r27;
  undefined8 unaff_r28;
  longlong unaff_r29;
  int unaff_r30;
  int unaff_r31;
  
  thunk_EXT_FUN_8010d110(*(undefined4 *)(unaff_r31 + 0x1c),0,*(undefined4 *)(unaff_r30 + 4));
  *(int *)(unaff_r31 + 0x14) = (int)unaff_r29;
  iVar1 = *(int *)(unaff_r30 + 8);
  if (iVar1 == 6) {
    if (7 < *(uint *)(unaff_r30 + 4)) {
      puVar2 = *(undefined4 **)(unaff_r31 + 0x1c);
      *puVar2 = (int)unaff_r28;
      puVar2[1] = unaff_r27;
LAB_00006098:
      *(undefined4 *)(unaff_r31 + 0x14) = 8;
      goto LAB_000060a0;
    }
  }
  else if (iVar1 == 0xe) {
    if (7 < *(uint *)(unaff_r30 + 4)) {
      **(undefined8 **)(unaff_r31 + 0x1c) = *(undefined8 *)(*(int *)(unaff_r30 + 0x18) + 0x14);
      goto LAB_00006098;
    }
  }
  else if (iVar1 == 0x13) {
    if (7 < *(uint *)(unaff_r30 + 4)) {
      unaff_r29 = FUN_00009ec0(unaff_r28,*(undefined4 *)(unaff_r30 + 0x18),
                               *(undefined4 *)(unaff_r31 + 0x1c));
      uVar3 = 8;
LAB_00006048:
      *(uint *)(unaff_r31 + 0x14) = -(uint)(unaff_r29 == 0) & uVar3;
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
      uVar3 = 0x38;
      goto LAB_00006048;
    }
  }
  unaff_r29 = -0x7ffffffb;
LAB_000060a0:
  thunk_EXT_FUN_800643d8(unaff_r25);
  thunk_EXT_FUN_800643d8(unaff_r26);
  thunk_EXT_FUN_800718f8();
  *(int *)(unaff_r31 + 0x10) = (int)unaff_r29;
  thunk_EXT_FUN_8006ac20(unaff_r31,0);
  return unaff_r29;
}


/* ==== FUN_000060d0 @ 000060d0 ==== */

undefined8 FUN_000060d0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int iVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  
  iVar12 = FUN_0000eab8();
  iVar9 = (int)param_2;
  iVar3 = *(int *)(iVar9 + 0x50);
  iVar12 = *(int *)(iVar12 + 0x18);
  uVar13 = 0;
  bVar10 = false;
  iVar4 = *(int *)(*(int *)(iVar3 + 0x18) + 8);
  if (*(int *)(iVar3 + 8) == 0x18) {
    thunk_EXT_FUN_80085ea0();
    return 0xffffffffc000000d;
  }
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar12 + 0x48);
  bVar1 = *(int *)(iVar3 + 8) == 10;
  if (bVar1) {
    thunk_EXT_FUN_80088fa0(iVar12 + 0x80);
  }
  if ((iVar4 != 0) && ((*(uint *)(iVar4 + 8) & 3) == 0)) {
    thunk_EXT_FUN_80088fa0(iVar4 + 0x20);
    bVar10 = true;
  }
  thunk_EXT_FUN_800642b8(iVar12 + 0x10);
  bVar2 = *(byte *)(*(int *)(iVar3 + 0x18) + 2);
  if ((bVar2 & 0x80) == 0x80) {
    uVar13 = 0xffffffffc000026e;
    goto LAB_000061dc;
  }
  if ((bVar2 & 0x10) == 0x10) {
    uVar13 = 0xffffffffc0000128;
    goto LAB_000061dc;
  }
  iVar5 = *(int *)(iVar3 + 8);
  if (((iVar5 != 4) && (iVar5 != 10)) && (iVar5 != 0xd)) {
    if (iVar5 == 0xe) {
      puVar6 = *(undefined8 **)(iVar9 + 0x1c);
      if ((bVar2 & 4) == 4) {
        uVar7 = *(uint *)((int)puVar6 + 4);
        uVar8 = *(uint *)(*(int *)(iVar12 + 0xa0) + 0x20);
        trapWord(6,(ulonglong)uVar8,0);
        if ((ulonglong)uVar7 != (longlong)(int)(uVar7 / uVar8) * (longlong)(int)uVar8)
        goto LAB_00006264;
      }
      thunk_EXT_FUN_80088fa0(iVar4 + 0x20);
      *(undefined8 *)(*(int *)(iVar3 + 0x18) + 0x14) = *puVar6;
      uVar11 = FUN_000098b0(iVar4 + 0x40,*(undefined8 *)(*(int *)(iVar3 + 0x18) + 0x14));
      thunk_EXT_FUN_800890f8(iVar4 + 0x20);
      if ((int)uVar11 != 0) {
        uVar13 = FUN_00009768(uVar11,0);
      }
      goto LAB_000061dc;
    }
    if ((iVar5 != 0x13) && (iVar5 != 0x14)) {
LAB_00006264:
      uVar13 = 0xffffffffc000000d;
      goto LAB_000061dc;
    }
  }
  thunk_EXT_FUN_80085ea0();
LAB_000061dc:
  thunk_EXT_FUN_800643d8(iVar12 + 0x10);
  if (bVar10) {
    thunk_EXT_FUN_800890f8(iVar4 + 0x20);
  }
  if (bVar1) {
    thunk_EXT_FUN_800890f8(iVar12 + 0x80);
  }
  thunk_EXT_FUN_800643d8(iVar12 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(int *)(iVar9 + 0x10) = (int)uVar13;
  thunk_EXT_FUN_8006ac20(param_2,0);
  return uVar13;
}


/* ==== FUN_000062c0 @ 000062c0 ==== */

undefined8 FUN_000062c0(void)

{
  thunk_EXT_FUN_80085ea0();
  return 0xffffffffc0000002;
}


/* ==== FUN_000062e8 @ 000062e8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000062e8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  iVar10 = FUN_0000eac4();
  iVar8 = (int)param_2;
  iVar2 = *(int *)(iVar8 + 0x50);
  iVar3 = *(int *)(iVar10 + 0x18);
  uVar14 = 0;
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar3 + 0x48);
  thunk_EXT_FUN_800642b8(iVar3 + 0x10);
  if ((*(byte *)(*(int *)(iVar2 + 0x18) + 2) & 0x80) == 0x80) {
    uVar14 = 0xffffffffc000026e;
  }
  else {
    thunk_EXT_FUN_8010d110(*(undefined4 *)(iVar8 + 0x1c),0,*(undefined4 *)(iVar2 + 4));
    iVar4 = *(int *)(iVar2 + 8);
    if (iVar4 == 1) {
      *(undefined4 *)(*(int *)(iVar8 + 0x1c) + 8) = 0x11223344;
      *(undefined4 *)(iVar8 + 0x14) = 0x14;
    }
    else {
      if (iVar4 == 3) {
        puVar7 = *(ulonglong **)(iVar8 + 0x1c);
        *puVar7 = (ulonglong)*(uint *)(iVar3 + 0xe0) - 2 & 0xffffffff;
        *(uint *)(puVar7 + 2) = (uint)*(ushort *)(iVar3 + 0xd2);
        *(undefined4 *)((int)puVar7 + 0x14) = *(undefined4 *)(iVar10 + 0x20);
        uVar9 = FUN_00009f10(iVar3 + 200,puVar7 + 1);
        if ((int)uVar9 != 0) {
          uVar14 = FUN_00009768(uVar9,0);
          *(undefined4 *)(iVar8 + 0x14) = 0;
          goto LAB_00006480;
        }
        uVar13 = 0x18;
      }
      else {
        if (iVar4 == 4) {
          puVar6 = *(uint **)(iVar8 + 0x1c);
          bVar1 = *(byte *)(*(int *)(iVar3 + 0xa0) + 0x1c);
          puVar6[1] = 0;
          *puVar6 = (uint)bVar1;
          *(undefined4 *)(iVar8 + 0x14) = 8;
          goto LAB_00006480;
        }
        if (iVar4 != 5) {
          *(undefined4 *)(iVar8 + 0x14) = 0;
          uVar14 = 0xffffffffc000000d;
          goto LAB_00006480;
        }
        puVar5 = *(undefined4 **)(iVar8 + 0x1c);
        *puVar5 = 0;
        puVar5[1] = 0xff;
        puVar5[2] = 5;
        if (*(uint *)(iVar2 + 4) < 0x11) {
          *(undefined4 *)(iVar8 + 0x14) = 0xc;
          uVar14 = 0xffffffff80000005;
          goto LAB_00006480;
        }
        lVar15 = 5;
        puVar11 = (undefined1 *)((int)puVar5 + 0xb);
        puVar12 = (undefined1 *)(_DAT_80203d4c + -1);
        do {
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = *puVar12;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        uVar13 = 0x11;
      }
      *(undefined4 *)(iVar8 + 0x14) = uVar13;
    }
  }
LAB_00006480:
  thunk_EXT_FUN_800643d8(iVar3 + 0x10);
  thunk_EXT_FUN_800643d8(iVar3 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(int *)(iVar8 + 0x10) = (int)uVar14;
  thunk_EXT_FUN_8006ac20(param_2,0);
  return uVar14;
}


/* ==== FUN_000064b0 @ 000064b0 ==== */

longlong FUN_000064b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar7;
  undefined8 uVar6;
  char cVar9;
  int iVar8;
  short *psVar11;
  ulonglong uVar10;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *local_2a0 [4];
  undefined8 local_290;
  undefined2 local_288;
  undefined2 local_286;
  undefined2 local_284;
  undefined2 local_282;
  byte local_280;
  short local_264 [306];
  
  iVar7 = FUN_0000eabc();
  iVar3 = (int)param_2;
  iVar8 = *(int *)(iVar3 + 0x50);
  uVar1 = *(uint *)(iVar7 + 0x18);
  lVar14 = 0;
  bVar4 = false;
  iVar7 = *(int *)(*(int *)(iVar8 + 0x18) + 8);
  thunk_EXT_FUN_800718e0();
  lVar13 = (ulonglong)uVar1 + 0x48;
  thunk_EXT_FUN_800642b8(lVar13);
  lVar12 = (ulonglong)uVar1 + 0x10;
  thunk_EXT_FUN_800642b8(lVar12);
  if (iVar7 != 0) {
    if (((*(uint *)(iVar7 + 8) & 3) != 0) && ((*(uint *)(iVar7 + 8) & 4) != 0)) {
      iVar2 = *(int *)(iVar8 + 0x18);
      if ((*(byte *)(iVar2 + 2) & 0x80) == 0x80) {
        lVar14 = -0x3ffffd92;
      }
      else if ((*(byte *)(iVar2 + 2) & 0x10) == 0x10) {
        lVar14 = -0x3ffffed8;
      }
      else {
        local_2a0[0] = *(int **)(iVar2 + 0xc);
        if (local_2a0[0] == (int *)0x0) {
          lVar14 = FUN_00009fe8(iVar7 + 0x48,iVar2,*(undefined4 *)(iVar8 + 8),1,local_2a0);
          if (lVar14 != 0) {
            thunk_EXT_FUN_80085ee8(0xffffffff80201b28,lVar14);
            thunk_EXT_FUN_80085ea0();
            goto LAB_000067c8;
          }
          bVar4 = true;
          *(int **)(*(int *)(iVar8 + 0x18) + 0xc) = local_2a0[0];
        }
        piVar5 = local_2a0[0];
        if ((*(byte *)(iVar8 + 2) & 1) == 1) {
          FUN_0000a0e8(iVar7 + 0x48,0);
          *piVar5 = 0;
        }
        do {
          uVar6 = FUN_0000a0e8(piVar5 + 4,&local_290);
          if ((int)uVar6 != 0) {
            lVar14 = FUN_00009768(uVar6,0);
            goto LAB_000067c8;
          }
          if (local_264[0] == 0) {
            if (bVar4) {
              lVar14 = -0x3ffffff1;
            }
            else {
              lVar14 = -0x7ffffffa;
            }
            goto LAB_000067c8;
          }
          uVar15 = 0;
          psVar11 = local_264;
          do {
            if (0xfe < (uVar15 & 0xffffffff)) break;
            psVar11 = psVar11 + 1;
            uVar15 = uVar15 + 1;
          } while (*psVar11 != 0);
        } while ((piVar5[2] != 0) &&
                (cVar9 = thunk_EXT_FUN_8015bac8(piVar5 + 1,local_264,(uVar15 & 0x7fffffff) << 1,1),
                cVar9 == '\0'));
        iVar7 = *(int *)(iVar3 + 0x1c);
        FUN_0000a1d0(local_284,local_282,iVar7 + 8);
        FUN_0000a1d0(local_288,local_286,iVar7 + 0x18);
        *(undefined4 *)(iVar7 + 0x38) = 0;
        *(undefined8 *)(iVar7 + 0x10) = *(undefined8 *)(iVar7 + 0x18);
        *(undefined8 *)(iVar7 + 0x20) = *(undefined8 *)(iVar7 + 0x18);
        if ((local_280 & 1) == 1) {
          *(undefined4 *)(iVar7 + 0x38) = 1;
        }
        if ((local_280 & 2) == 2) {
          *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 2;
        }
        if ((local_280 & 4) == 4) {
          *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 4;
        }
        if ((local_280 & 0x20) == 0x20) {
          *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 0x20;
        }
        if ((local_280 & 0x10) == 0x10) {
          *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 0x10;
        }
        if (*(int *)(iVar7 + 0x38) == 0) {
          *(undefined4 *)(iVar7 + 0x38) = 0x80;
        }
        if ((~*(uint *)(iVar7 + 0x38) >> 4 & 1) == 1) {
          *(undefined8 *)(iVar7 + 0x28) = local_290;
          *(undefined8 *)(iVar7 + 0x30) = local_290;
        }
        else {
          *(undefined8 *)(iVar7 + 0x30) = 0;
          *(undefined8 *)(iVar7 + 0x28) = 0;
        }
        lVar16 = (uVar15 & 0x7fffffff) << 1;
        uVar15 = thunk_EXT_FUN_80086a98(local_264,lVar16,1);
        uVar10 = (ulonglong)*(uint *)(iVar8 + 4) - 0x40;
        if ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          lVar14 = -0x7ffffffb;
          uVar15 = uVar10;
        }
        iVar8 = thunk_EXT_FUN_80086af0(local_264,lVar16,1,iVar7 + 0x40,uVar15);
        *(int *)(iVar7 + 0x3c) = iVar8;
        *(int *)(iVar3 + 0x14) = iVar8 + 0x40;
        *piVar5 = *piVar5 + 1;
      }
      goto LAB_000067c8;
    }
  }
  lVar14 = -0x3ffffff3;
LAB_000067c8:
  thunk_EXT_FUN_800643d8(lVar12);
  thunk_EXT_FUN_800643d8(lVar13);
  thunk_EXT_FUN_800718f8();
  *(int *)(iVar3 + 0x10) = (int)lVar14;
  thunk_EXT_FUN_8006ac20(param_2,0);
  return lVar14;
}


/* ==== FUN_000067f8 @ 000067f8 ==== */

undefined8 FUN_000067f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_0000ead4();
  iVar3 = *(int *)(iVar3 + 0x18);
  iVar2 = (int)param_2;
  iVar1 = *(int *)(iVar2 + 0x50);
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(iVar3 + 0x48);
  if ((*(byte *)(*(int *)(iVar1 + 0x18) + 2) & 0x80) == 0x80) {
    thunk_EXT_FUN_800643d8(iVar3 + 0x48);
    uVar4 = 0xffffffffc000026e;
    *(undefined4 *)(iVar2 + 0x10) = 0xc000026e;
  }
  else {
    thunk_EXT_FUN_800642b8(iVar3 + 0x10);
    iVar1 = *(int *)(iVar2 + 0x50);
    thunk_EXT_FUN_8010cc40(iVar1 + -0x24,iVar1,0x1c);
    *(undefined1 *)(iVar1 + -0x21) = 0;
    iVar1 = *(int *)(iVar2 + 0x50);
    *(undefined4 *)(iVar1 + -8) = 0x801f9810;
    *(undefined4 *)(iVar1 + -4) = 0;
    *(undefined1 *)(iVar1 + -0x21) = 0xe0;
    uVar4 = thunk_EXT_FUN_8006ab48(*(undefined4 *)(iVar3 + 0xa0),param_2);
  }
  thunk_EXT_FUN_800718f8();
  return uVar4;
}


/* ==== FUN_000068b0 @ 000068b0 ==== */

undefined8 FUN_000068b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar4;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar5;
  
  iVar4 = FUN_0000eac0();
  uVar5 = (ulonglong)*(uint *)(iVar4 + 0x18);
  iVar4 = *(int *)(*(int *)((int)param_2 + 0x50) + 0x18);
  iVar1 = *(int *)(iVar4 + 8);
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_800642b8(uVar5 + 0x48);
  if (iVar1 == 0) {
    thunk_EXT_FUN_800641d8(uVar5 + 0x10);
    *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
    thunk_EXT_FUN_800643d8(uVar5 + 0x10);
  }
  else {
    thunk_EXT_FUN_80088fa0(uVar5 + 0x80);
    if ((*(uint *)(iVar1 + 8) & 1) == 1) {
      thunk_EXT_FUN_800641d8(uVar5 + 0x10);
      if (((*(int *)(iVar1 + 0x14) == 1) && ((~(uint)*(byte *)(iVar4 + 2) >> 7 & 1) == 1)) &&
         ((*(uint *)(iVar1 + 8) & 4) == 4)) {
        thunk_EXT_FUN_80088fa0(iVar1 + 0x20);
        lVar2 = FUN_0000a250(iVar1 + 0x48);
        if (lVar2 != 0) {
          uVar3 = FUN_00009768(lVar2,0);
          thunk_EXT_FUN_80085ee8
                    (0xffffffff80201b78,lVar2,uVar3,*(undefined4 *)(iVar1 + 0xa0),iVar1 + 0xa4);
          thunk_EXT_FUN_80085ea0();
        }
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffb;
        thunk_EXT_FUN_800890f8(iVar1 + 0x20);
        if ((*(uint *)(iVar1 + 8) & 0x10) == 0x10) {
          thunk_EXT_FUN_80085ea0();
        }
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        thunk_EXT_FUN_80064768();
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
      thunk_EXT_FUN_800643d8(uVar5 + 0x10);
    }
    else {
      if ((*(int *)(iVar1 + 0x14) == 1) && ((~(uint)*(byte *)(iVar4 + 2) >> 7 & 1) == 1)) {
        thunk_EXT_FUN_80088fa0(iVar1 + 0x20);
        lVar2 = FUN_0000a290(iVar1 + 0x40);
        if (lVar2 != 0) {
          uVar3 = FUN_00009768(lVar2,0);
          thunk_EXT_FUN_80085ee8
                    (0xffffffff80201bc0,lVar2,uVar3,*(undefined4 *)(iVar1 + 0xa0),iVar1 + 0xa4);
        }
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffb;
        thunk_EXT_FUN_800890f8(iVar1 + 0x20);
        if ((*(uint *)(iVar1 + 8) & 0x10) == 0x10) {
          thunk_EXT_FUN_800641d8(uVar5 + 0x10);
          thunk_EXT_FUN_80085ea0();
          thunk_EXT_FUN_800643d8(uVar5 + 0x10);
        }
      }
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 0x10;
    }
    thunk_EXT_FUN_8006bb38(iVar4,iVar1 + 0x18);
    thunk_EXT_FUN_800890f8(uVar5 + 0x80);
  }
  thunk_EXT_FUN_800643d8(uVar5 + 0x48);
  thunk_EXT_FUN_800718f8();
  *(undefined4 *)((int)param_2 + 0x10) = 0;
  thunk_EXT_FUN_8006ac20(param_2,0);
  return 0;
}


/* ==== FUN_00006af0 @ 00006af0 ==== */

longlong FUN_00006af0(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ulonglong uVar3;
  ushort *puVar4;
  
  puVar2 = (ushort *)*param_1;
  puVar4 = puVar2;
  if (puVar2 != (ushort *)0x0) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      if (uVar1 < 0x20) break;
    } while (uVar1 != 0x3a);
    if (uVar1 != 0x3a) {
      return 0;
    }
    uVar3 = (ulonglong)*puVar2;
    if ((((0x2f < uVar3) && (uVar3 < 0x3a)) && (puVar2 + 2 == puVar4)) && ((int)(uVar3 - 0x30) < 10)
       ) {
      *param_1 = puVar4;
      return uVar3 - 0x30;
    }
  }
  return -1;
}


/* ==== FUN_00006b68 @ 00006b68 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00006b68(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  byte bVar1;
  char *pcVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar6;
  ulonglong uVar5;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 unaff_r26;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  char cVar17;
  ulonglong uVar18;
  uint uStack_84;
  uint local_80 [32];
  
  FUN_0000eab4();
  *param_2 = 0;
  iVar6 = FUN_00006af0();
  if (iVar6 < 0) {
    return 0xb;
  }
  pcVar2 = *(char **)(iVar6 * 4 + -0x7fdfcfcc);
  uVar18 = ZEXT48(pcVar2);
  if (uVar18 == 0) {
    return 0xc;
  }
  *param_2 = pcVar2;
  if ((*pcVar2 != '\0') && (uVar5 = FUN_0000a2e0(pcVar2[1]), (uVar5 & 1) == 0)) {
    if (((param_3 & 0xfe) != 0) && ((uVar5 & 4) != 0)) {
      return 10;
    }
    return 0;
  }
  *pcVar2 = '\0';
  uVar5 = FUN_0000a300(pcVar2[1]);
  if ((uVar5 & 1) != 0) {
    return 3;
  }
  if (((param_3 & 0xfe) != 0) && ((uVar5 & 4) != 0)) {
    return 10;
  }
  uVar7 = FUN_0000a320(uVar18,0);
  if (uVar7 == 2) {
    if (pcVar2[0x216] == -0x12) {
      iVar6 = FUN_0000a4d8(uVar18,1);
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = FUN_0000a540(uVar18 + 0x54);
      if (iVar6 == 0) {
        return 0xd;
      }
      uVar15 = (uint)(byte)pcVar2[0xa7] << 0x18 | (uint)(byte)pcVar2[0xa6] << 0x10 |
               (uint)(byte)pcVar2[0xa5] << 8 | (uint)(byte)pcVar2[0xa4];
      uVar13 = 0;
      lVar14 = LoadDoublewordByteReverseIndexed(unaff_r26,uVar18,0x9c);
      if (uVar15 == 0) {
        return 0xd;
      }
      uVar5 = 0;
      do {
        lVar8 = (uVar5 >> 9 & 0x7fffff) + lVar14;
        iVar6 = FUN_0000a4d8(uVar18,lVar8);
        if (iVar6 != 0) {
          return 1;
        }
        lVar12 = uVar18 + 0x54 + (uVar5 & 0x1ff);
        iVar6 = (int)lVar12;
        pbVar11 = &DAT_80201c10;
        do {
          lVar10 = (ulonglong)*(byte *)lVar12 - (ulonglong)*pbVar11;
          if (lVar10 != 0) break;
          lVar12 = lVar12 + 1;
          pbVar11 = pbVar11 + 1;
        } while ((int)lVar12 != iVar6 + 0x10);
        if ((int)lVar10 == 0) {
          uVar9 = LoadDoublewordByteReverseIndexed(lVar8,(uVar5 & 0x1ff) + uVar18,0x74);
          uVar7 = FUN_0000a320(uVar18,uVar9);
          if (uVar7 < 2) goto LAB_00006d80;
        }
        uVar13 = uVar13 + 1;
        uVar5 = uVar5 + 0x80;
        if (uVar15 <= uVar13) {
          return 0xd;
        }
      } while( true );
    }
    puVar16 = &uStack_84;
    lVar14 = uVar18 + 0x21a;
    lVar8 = 4;
    do {
      pbVar11 = (byte *)lVar14;
      lVar14 = lVar14 + 0x10;
      puVar16 = puVar16 + 1;
      *puVar16 = (uint)pbVar11[3] << 0x18 | (uint)pbVar11[2] << 0x10 | (uint)pbVar11[1] << 8 |
                 (uint)*pbVar11;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar13 = 0;
    puVar16 = local_80;
    do {
      if (*puVar16 == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = FUN_0000a320(uVar18,*puVar16);
      }
      if (uVar7 < 2) break;
      uVar13 = uVar13 + 1;
      puVar16 = puVar16 + 1;
    } while (uVar13 < 4);
  }
LAB_00006d80:
  if (uVar7 == 4) {
    return 1;
  }
  if (1 < uVar7) {
    return 0xd;
  }
  lVar14 = *(longlong *)(pcVar2 + 0x20);
  if (uVar7 == 1) {
    uVar7 = 0xb;
    do {
      if (pcVar2[uVar7 + 0x54] != '\0') break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x40);
    if (((uVar7 < 0x40) || (CONCAT11(pcVar2[0xbd],pcVar2[0xbc]) != 0x100)) ||
       (1 << ((byte)pcVar2[0xc0] & 0x3f) != 0x200)) {
      return 0xd;
    }
    lVar8 = LoadDoublewordByteReverseIndexed(0x200,uVar18,0x9c);
    pcVar2[3] = pcVar2[0xc2];
    *(uint *)(pcVar2 + 0x1c) =
         (uint)(byte)pcVar2[0xab] << 0x18 | (uint)(byte)pcVar2[0xaa] << 0x10 |
         (uint)(byte)pcVar2[0xa9] << 8 | (uint)(byte)pcVar2[0xa8];
    if (pcVar2[0xc2] != '\x01') {
      return 0xd;
    }
    uVar7 = 1 << ((byte)pcVar2[0xc1] & 0x3f);
    *(short *)(pcVar2 + 10) = (short)uVar7;
    if ((uVar7 & 0xffff) == 0) {
      return 0xd;
    }
    uVar13 = (uint)(byte)pcVar2[0xb3] << 0x18 | (uint)(byte)pcVar2[0xb2] << 0x10 |
             (uint)(byte)pcVar2[0xb1] << 8 | (uint)(byte)pcVar2[0xb0];
    if (0x7ffffffd < uVar13) {
      return 0xd;
    }
    *(longlong *)(pcVar2 + 0x28) = lVar14;
    *(uint *)(pcVar2 + 0x18) = uVar13 + 2;
    lVar12 = ((ulonglong)(byte)pcVar2[0xaf] << 0x18 | (ulonglong)(byte)pcVar2[0xae] << 0x10 |
              (ulonglong)(byte)pcVar2[0xad] << 8 | (ulonglong)(byte)pcVar2[0xac]) + lVar14;
    *(longlong *)(pcVar2 + 0x40) = lVar12;
    *(ulonglong *)(pcVar2 + 0x30) =
         ((ulonglong)(byte)pcVar2[0xa7] << 0x18 | (ulonglong)(byte)pcVar2[0xa6] << 0x10 |
          (ulonglong)(byte)pcVar2[0xa5] << 8 | (ulonglong)(byte)pcVar2[0xa4]) + lVar14;
    if ((ulonglong)(lVar8 + lVar14) <
        ((longlong)(int)(uVar7 & 0xffff) * (longlong)(int)uVar13 & 0xffffffffU) + lVar12) {
      return 0xd;
    }
    uVar7 = 0;
    uVar13 = 0;
    *(ulonglong *)(pcVar2 + 0x38) =
         (ulonglong)(byte)pcVar2[0xb7] << 0x18 | (ulonglong)(byte)pcVar2[0xb6] << 0x10 |
         (ulonglong)(byte)pcVar2[0xb5] << 8 | (ulonglong)(byte)pcVar2[0xb4];
    while( true ) {
      if (uVar7 == 0) {
        if (*(ushort *)(pcVar2 + 10) <= uVar13) {
          return 0xd;
        }
        uVar5 = (*(ulonglong *)(pcVar2 + 0x38) & 0xffffffff) - 2;
        if ((uVar5 & 0xffffffff) < ((ulonglong)*(uint *)(pcVar2 + 0x18) - 2 & 0xffffffff)) {
          lVar14 = (ulonglong)*(ushort *)(pcVar2 + 10) * (uVar5 & 0xffffffff) +
                   *(longlong *)(pcVar2 + 0x40);
        }
        else {
          lVar14 = 0;
        }
        iVar6 = FUN_0000a4d8(uVar18,(ulonglong)uVar13 + lVar14);
        if (iVar6 != 0) {
          return 1;
        }
        uVar13 = uVar13 + 1;
      }
      if (pcVar2[uVar7 + 0x54] == -0x7f) break;
      uVar7 = uVar7 + 0x20 & 0x1ff;
    }
    uVar5 = (ulonglong)(byte)pcVar2[uVar7 + 0x6b] << 0x18 |
            (ulonglong)(byte)pcVar2[uVar7 + 0x6a] << 0x10 |
            (ulonglong)(byte)pcVar2[uVar7 + 0x69] << 8 | (ulonglong)(byte)pcVar2[uVar7 + 0x68];
    if (uVar5 < 2) {
      return 0xd;
    }
    if (*(uint *)(pcVar2 + 0x18) <= uVar5) {
      return 0xd;
    }
    lVar14 = (uVar5 >> 7) + *(longlong *)(pcVar2 + 0x30);
    *(ulonglong *)(pcVar2 + 0x48) =
         ((longlong)((int)uVar5 + -2) * (longlong)(int)(uint)*(ushort *)(pcVar2 + 10) & 0xffffffffU)
         + *(longlong *)(pcVar2 + 0x40);
    while( true ) {
      iVar6 = FUN_0000a4d8(uVar18,lVar14);
      if (iVar6 != 0) {
        return 1;
      }
      pbVar11 = (byte *)(pcVar2 + (((uint)uVar5 & 0x7f) + 0x15) * 4);
      uVar7 = (uint)pbVar11[3] << 0x18 | (uint)pbVar11[2] << 0x10 | (uint)pbVar11[1] << 8 |
              (uint)*pbVar11;
      if (uVar7 == 0xffffffff) break;
      uVar5 = uVar5 + 1;
      if ((ulonglong)uVar7 != (uVar5 & 0xffffffff)) {
        return 0xd;
      }
      lVar14 = (uVar5 >> 7 & 0x1ffffff) + *(longlong *)(pcVar2 + 0x30);
    }
    uVar7 = 0xffffffff;
    pcVar2[5] = '\0';
    cVar17 = '\x04';
    pcVar2[0x14] = -1;
    pcVar2[0x15] = -1;
    pcVar2[0x16] = -1;
    pcVar2[0x17] = -1;
  }
  else {
    if (CONCAT11(pcVar2[0x60],pcVar2[0x5f]) != 0x200) {
      return 0xd;
    }
    uVar7 = (uint)CONCAT11(pcVar2[0x6b],pcVar2[0x6a]);
    if (CONCAT11(pcVar2[0x6b],pcVar2[0x6a]) == 0) {
      uVar7 = (uint)(byte)pcVar2[0x7b] << 0x18 | (uint)(byte)pcVar2[0x7a] << 0x10 |
              (uint)(byte)pcVar2[0x79] << 8 | (uint)(byte)pcVar2[0x78];
    }
    bVar1 = pcVar2[100];
    *(uint *)(pcVar2 + 0x1c) = uVar7;
    pcVar2[3] = bVar1;
    if ((bVar1 != 1) && (bVar1 != 2)) {
      return 0xd;
    }
    uVar5 = (ulonglong)(byte)pcVar2[0x61];
    *(ushort *)(pcVar2 + 10) = (ushort)(byte)pcVar2[0x61];
    if (uVar5 == 0) {
      return 0xd;
    }
    if ((uVar5 - 1 & uVar5) != 0) {
      return 0xd;
    }
    uVar3 = CONCAT11(pcVar2[0x66],pcVar2[0x65]);
    *(ushort *)(pcVar2 + 8) = uVar3;
    if ((pcVar2[0x65] & 0xfU) != 0) {
      return 0xd;
    }
    uVar13 = (uint)CONCAT11(pcVar2[0x68],pcVar2[0x67]);
    if (uVar13 == 0) {
      uVar13 = (uint)(byte)pcVar2[0x77] << 0x18 | (uint)(byte)pcVar2[0x76] << 0x10 |
               (uint)(byte)pcVar2[0x75] << 8 | (uint)(byte)pcVar2[0x74];
    }
    uVar4 = CONCAT11(pcVar2[99],pcVar2[0x62]);
    if (uVar4 == 0) {
      return 0xd;
    }
    uVar15 = (uint)(uVar3 >> 4) + (uint)uVar4 + bVar1 * uVar7;
    if (uVar13 < uVar15) {
      return 0xd;
    }
    trapWord(6,uVar5,0);
    uVar5 = (uVar13 - uVar15) / uVar5;
    if ((int)uVar5 == 0) {
      return 0xd;
    }
    cVar17 = '\0';
    if (uVar5 < 0xffffff6) {
      cVar17 = '\x03';
    }
    if (uVar5 < 0xfff6) {
      cVar17 = '\x02';
    }
    if (uVar5 < 0xff6) {
      cVar17 = '\x01';
    }
    if (cVar17 == '\0') {
      return 0xd;
    }
    *(longlong *)(pcVar2 + 0x28) = lVar14;
    uVar5 = uVar5 + 2;
    *(int *)(pcVar2 + 0x18) = (int)uVar5;
    *(ulonglong *)(pcVar2 + 0x30) = (ulonglong)uVar4 + lVar14;
    *(ulonglong *)(pcVar2 + 0x40) = (ulonglong)uVar15 + lVar14;
    if (cVar17 == '\x03') {
      if (CONCAT11(pcVar2[0x7f],pcVar2[0x7e]) != 0) {
        return 0xd;
      }
      if (*(short *)(pcVar2 + 8) != 0) {
        return 0xd;
      }
      lVar8 = (uVar5 & 0x3fffffff) << 2;
      *(ulonglong *)(pcVar2 + 0x38) =
           (ulonglong)(byte)pcVar2[0x83] << 0x18 | (ulonglong)(byte)pcVar2[0x82] << 0x10 |
           (ulonglong)(byte)pcVar2[0x81] << 8 | (ulonglong)(byte)pcVar2[0x80];
    }
    else {
      if (*(short *)(pcVar2 + 8) == 0) {
        return 0xd;
      }
      *(ulonglong *)(pcVar2 + 0x38) = (ulonglong)(bVar1 * uVar7) + (ulonglong)uVar4 + lVar14;
      if (cVar17 == '\x02') {
        lVar8 = (uVar5 & 0x7fffffff) << 1;
      }
      else {
        lVar8 = ((uVar5 * 3 & 0xffffffff) >> 1) + (uVar5 & 1);
      }
    }
    if ((ulonglong)*(uint *)(pcVar2 + 0x1c) < (lVar8 + 0x1ffU & 0xffffffff) >> 9) {
      return 0xd;
    }
    pcVar2[5] = -0x80;
    pcVar2[0x14] = -1;
    pcVar2[0x15] = -1;
    pcVar2[0x16] = -1;
    pcVar2[0x17] = -1;
    pcVar2[0x10] = -1;
    pcVar2[0x11] = -1;
    pcVar2[0x12] = -1;
    pcVar2[0x13] = -1;
    if (((((cVar17 != '\x03') || (CONCAT11(pcVar2[0x85],pcVar2[0x84]) != 1)) ||
         (iVar6 = FUN_0000a4d8(uVar18,lVar14 + 1), iVar6 != 0)) ||
        ((pcVar2[5] = '\0',
         ((ulonglong)(byte)pcVar2[0x57] << 0x18 | (ulonglong)(byte)pcVar2[0x56] << 0x10 |
          (ulonglong)(byte)pcVar2[0x55] << 8 | (ulonglong)(byte)pcVar2[0x54]) != 0x41615252 ||
         (((ulonglong)(byte)pcVar2[0x23b] << 0x18 | (ulonglong)(byte)pcVar2[0x23a] << 0x10 |
           (ulonglong)(byte)pcVar2[0x239] << 8 | (ulonglong)(byte)pcVar2[0x238]) != 0x61417272))))
       || (((ulonglong)(byte)pcVar2[0x253] << 0x18 | (ulonglong)(byte)pcVar2[0x252] << 0x10 |
            (ulonglong)(byte)pcVar2[0x251] << 8 | (ulonglong)(byte)pcVar2[0x250]) != 0xaa550000))
    goto LAB_00007204;
    *(uint *)(pcVar2 + 0x14) =
         (uint)(byte)pcVar2[0x23f] << 0x18 | (uint)(byte)pcVar2[0x23e] << 0x10 |
         (uint)(byte)pcVar2[0x23d] << 8 | (uint)(byte)pcVar2[0x23c];
    uVar7 = (uint)(byte)pcVar2[0x243] << 0x18 | (uint)(byte)pcVar2[0x242] << 0x10 |
            (uint)(byte)pcVar2[0x241] << 8 | (uint)(byte)pcVar2[0x240];
  }
  *(uint *)(pcVar2 + 0x10) = uVar7;
LAB_00007204:
  *pcVar2 = cVar17;
  _DAT_8020305c = _DAT_8020305c + 1;
  *(short *)(pcVar2 + 6) = _DAT_8020305c;
  return 0;
}


/* ==== FUN_00007264 @ 00007264 ==== */

undefined8 FUN_00007264(void)

{
  int iVar2;
  undefined8 uVar1;
  char cVar3;
  undefined8 unaff_r27;
  undefined8 unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  do {
    iVar2 = thunk_EXT_FUN_80086390
                      (unaff_r28,0xffffffffffffffff,
                       *(undefined4 *)(*(int *)(unaff_r31 + 4) + unaff_r29 + 8),0xffffffffffffffff,1
                      );
    if (iVar2 == 0) {
      cVar3 = FUN_00007730(unaff_r31,unaff_r30 * 0x14 + *(int *)(unaff_r31 + 4));
      if (cVar3 == '\0') {
        return 0;
      }
      *(undefined1 *)(*(int *)(unaff_r31 + 0x18) + unaff_r30) = 1;
      return 1;
    }
    unaff_r30 = unaff_r30 + 1;
    unaff_r29 = unaff_r29 + 0x14;
  } while (unaff_r30 < *(uint *)(unaff_r31 + 8));
  uVar1 = FUN_00007608(unaff_r31,unaff_r27);
  return uVar1;
}


/* ==== FUN_0000731c @ 0000731c ==== */

undefined8 FUN_0000731c(void)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  undefined8 unaff_r27;
  char unaff_r28;
  int unaff_r29;
  uint unaff_r30;
  int unaff_r31;
  
  do {
    if ((*(char *)(*(int *)(unaff_r31 + 0x18) + unaff_r30) == '\0') &&
       (iVar2 = thunk_EXT_FUN_80086390
                          (unaff_r27,0xffffffffffffffff,
                           *(undefined4 *)(unaff_r29 + *(int *)(unaff_r31 + 4)),0xffffffffffffffff,1
                          ), iVar2 == 0)) {
      cVar3 = FUN_00007730(unaff_r31,unaff_r29 + *(int *)(unaff_r31 + 4));
      if (cVar3 == '\0') {
        return 0;
      }
      unaff_r28 = '\x01';
      *(undefined1 *)(*(int *)(unaff_r31 + 0x18) + unaff_r30) = 1;
    }
    unaff_r30 = unaff_r30 + 1;
    unaff_r29 = unaff_r29 + 0x14;
  } while (unaff_r30 < *(uint *)(unaff_r31 + 8));
  if (unaff_r28 == '\x01') {
    uVar1 = FUN_00007608(unaff_r31,0xffffffff80201cf4);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== FUN_000073c8 @ 000073c8 ==== */

void FUN_000073c8(undefined8 param_1,ulonglong param_2,ulonglong param_3,code *param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char cVar7;
  ulonglong uVar5;
  bool bVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  char *local_300;
  char *local_2fc;
  uint local_2f8;
  int local_2f4;
  undefined1 local_2f0;
  undefined1 auStack_2ef [126];
  undefined1 local_271;
  undefined1 local_270;
  undefined1 auStack_26f [623];
  
  pcVar6 = (char *)FUN_0000eab0();
  local_2f0 = 0;
  thunk_EXT_FUN_8010d110(auStack_2ef,0,0x7f);
  local_270 = 0;
  thunk_EXT_FUN_8010d110(auStack_26f,0,0x1ff);
  if (pcVar6 == (char *)0x0) {
LAB_0000741c:
    bVar8 = true;
  }
  else {
    local_300 = pcVar6;
    if (((param_2 & 0xffffffff) == 0) ||
       (cVar7 = (*(code *)param_2)(param_5,&local_2f0), cVar7 != '\0')) {
      do {
        cVar7 = FUN_00007938(&local_300,&local_2f4,&local_2f8,&local_2fc);
        iVar4 = local_2f4;
        uVar3 = local_2f8;
        pcVar2 = local_2fc;
        pcVar1 = local_300;
        if (cVar7 == '\0') {
          bVar8 = *local_300 == '\0';
          goto LAB_00007600;
        }
        if (local_2f4 == 0) {
          if ((local_2f8 == 0) ||
             (uVar9 = 0xffffffff80201d00, pcVar11 = local_2fc, uVar10 = local_2f8,
             local_2fc == (char *)0x0)) {
            uVar10 = (int)local_300 - (int)pcVar6;
            if (uVar10 != 0) {
              if (pcVar6[uVar10 - 1] == '\n') {
                uVar10 = uVar10 - 1;
              }
              if ((uVar10 != 0) && (pcVar6[uVar10 - 1] == '\r')) {
                uVar10 = uVar10 - 1;
              }
            }
            uVar9 = 0xffffffff80201cf8;
            pcVar11 = pcVar6;
          }
          uVar5 = thunk_EXT_FUN_8010c7f8(&local_270,0x200,uVar9,uVar10,pcVar11);
        }
        else {
          if (((param_3 & 0xffffffff) != 0) &&
             (cVar7 = (*(code *)param_3)(param_5,&local_2f0), cVar7 == '\0')) goto LAB_000075fc;
          thunk_EXT_FUN_8010d1b0(&local_2f0,iVar4,0x80);
          local_271 = 0;
          uVar5 = thunk_EXT_FUN_8010c7f8(&local_270,0x200,0xffffffff80201d0c,&local_2f0);
        }
        if (((int)uVar5 < 0) || (0x1ff < (uVar5 & 0xffffffff))) {
          thunk_EXT_FUN_80085ee8(0xffffffff80201d18);
          goto LAB_000075fc;
        }
        cVar7 = (*param_4)(param_5,&local_270,uVar5,&local_2f0,uVar3,pcVar2);
        if ((cVar7 == '\0') ||
           (((iVar4 != 0 && ((param_2 & 0xffffffff) != 0)) &&
            (cVar7 = (*(code *)param_2)(param_5,iVar4), cVar7 == '\0')))) goto LAB_000075fc;
        pcVar6 = pcVar1;
      } while (pcVar1 != (char *)0x0);
      if (((param_3 & 0xffffffff) == 0) ||
         (cVar7 = (*(code *)param_3)(param_5,&local_2f0), cVar7 != '\0')) goto LAB_0000741c;
    }
LAB_000075fc:
    bVar8 = false;
  }
LAB_00007600:
  FUN_0000eb00(bVar8);
  return;
}


/* ==== FUN_00007608 @ 00007608 ==== */

undefined8 FUN_00007608(undefined8 param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  ulonglong uVar5;
  undefined1 *local_30;
  int local_28 [10];
  
  iVar3 = FUN_0000ead8();
  local_28[0] = 0;
  local_28[1] = 0;
  bVar1 = false;
  uVar5 = param_2;
  while( true ) {
    local_30 = &stack0x00000020;
    lVar2 = thunk_EXT_FUN_8010caa0
                      ((ulonglong)*(uint *)(iVar3 + 0x10) + (ulonglong)*(uint *)(iVar3 + 0x14),
                       0x400 - (ulonglong)*(uint *)(iVar3 + 0x14),uVar5,local_30);
    if (-1 < lVar2) {
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + (int)lVar2;
      return 1;
    }
    if (bVar1) break;
    iVar4 = thunk_EXT_FUN_8006cf00
                      (*(undefined4 *)(iVar3 + 0xc),0,0,0,local_28,*(undefined4 *)(iVar3 + 0x10),
                       *(undefined4 *)(iVar3 + 0x14),0);
    if (iVar4 == 0x103) {
      iVar4 = thunk_EXT_FUN_8008b188(*(undefined4 *)(iVar3 + 0xc),1,0,0);
    }
    if ((iVar4 != 0) || (local_28[0] < 0)) {
      thunk_EXT_FUN_80085ee8(0xffffffff80201de0);
      return 0;
    }
    uVar5 = param_2 & 0xffffffff;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    bVar1 = true;
  }
  thunk_EXT_FUN_80085ee8(0xffffffff80201d80);
  return 0;
}


/* ==== FUN_00007730 @ 00007730 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00007730(int *param_1,int param_2)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_20;
  undefined8 local_18;
  
  sVar2 = *(short *)(param_2 + 0xe);
  pfVar6 = (float *)(*(int *)(param_2 + 0x10) + *param_1);
  if (sVar2 == 0) {
    uVar5 = 0xffffffff80201e2c;
  }
  else if (sVar2 == 1) {
    pfVar6 = (float *)*pfVar6;
    uVar5 = 0xffffffff80201e38;
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
      lVar9 = 4;
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
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      cVar4 = FUN_00007608(param_1,0xffffffff80201e54,*(undefined4 *)(param_2 + 8),local_20._0_1_,
                           local_20._1_1_,local_20._2_1_,(undefined1)local_20);
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
    uVar5 = 0xffffffff80201d00;
  }
  cVar4 = FUN_00007608(param_1,uVar5,*(undefined4 *)(param_2 + 8),pfVar6);
  if (cVar4 != '\0') {
    return 1;
  }
  return 0;
}


/* ==== FUN_00007878 @ 00007878 ==== */

ulonglong FUN_00007878(char *param_1)

{
  ulonglong uVar1;
  char cVar2;
  
  uVar1 = 0xffffffffffffffff;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    param_1 = param_1 + 1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    uVar1 = (ulonglong)
            *(uint *)(((uint)((((longlong)cVar2 ^ uVar1) & 0xffffffff) << 2) & 0x3fc) + 0x80201e70)
            ^ (uVar1 & 0xffffffff) >> 8;
    cVar2 = *param_1;
  }
  return ~uVar1;
}


/* ==== FUN_000078e0 @ 000078e0 ==== */

longlong FUN_000078e0(char *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = 0;
  iVar5 = 0;
  iVar3 = 1;
  if (*param_1 == '-') {
    iVar3 = -1;
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  while ((lVar2 = (longlong)cVar1, lVar2 != 0 &&
         (iVar5 = (int)lVar4, (lVar2 - 0x30U & 0xffffffff) < 10))) {
    param_1 = param_1 + 1;
    lVar4 = lVar4 * 10 + lVar2 + -0x30;
    iVar5 = (int)lVar4;
    cVar1 = *param_1;
  }
  return (longlong)iVar3 * (longlong)iVar5;
}


/* ==== FUN_00007938 @ 00007938 ==== */

undefined8
FUN_00007938(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  
  piVar3 = (int *)param_1;
  uVar4 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *(undefined4 *)param_4 = 0;
  uVar7 = ZEXT48((char *)*piVar3);
  cVar2 = *(char *)*piVar3;
  while ((lVar8 = (longlong)cVar2, lVar8 != 0 && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    uVar7 = uVar7 + 1;
    cVar2 = *(char *)uVar7;
  }
  if (cVar2 == '\0') {
    return 0;
  }
  puVar9 = (undefined1 *)uVar7;
  if (cVar2 == ';') {
LAB_00007ae0:
    if (cVar2 == '\r') goto LAB_00007ae8;
  }
  else {
    if (cVar2 != '\r') {
      if (cVar2 != '\n') {
        if (cVar2 == '[') {
          lVar8 = uVar7 + 1;
          *param_2 = (char *)lVar8;
          cVar2 = *(char *)lVar8;
          while (cVar2 != ']') {
            if (cVar2 == '\0') {
              return 0;
            }
            if (cVar2 == '\n') {
              return 0;
            }
            lVar8 = lVar8 + 1;
            cVar2 = *(char *)lVar8;
          }
          uVar5 = lVar8 + 1;
          *(undefined1 *)lVar8 = 0;
        }
        else {
          *param_3 = puVar9;
          uVar1 = *puVar9;
          while( true ) {
            cVar2 = FUN_0000a640(uVar1);
            piVar3 = (int *)param_1;
            if (cVar2 != '\x01') break;
            uVar7 = uVar7 + 1;
            uVar1 = *(undefined1 *)uVar7;
          }
          pcVar6 = (char *)uVar7;
          cVar2 = *pcVar6;
          while (cVar2 != '=') {
            if (cVar2 == '\0') {
              return 0;
            }
            if (cVar2 == '\n') {
              return 0;
            }
            uVar7 = uVar7 + 1;
            cVar2 = *(char *)uVar7;
          }
          *pcVar6 = (char)uVar4;
          uVar5 = uVar7 + 1;
          cVar2 = *(char *)((int)uVar7 + 1);
          while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
            uVar5 = uVar5 + 1;
            cVar2 = *(char *)uVar5;
          }
          if (cVar2 == '\0') {
            return 0;
          }
          *(undefined4 *)param_4 = (int)uVar5;
        }
        cVar2 = *(char *)uVar5;
        while (((uVar7 = uVar5, cVar2 != '\n' && (uVar7 = uVar4, cVar2 != '\0')) && (cVar2 != '\n'))
              ) {
          uVar5 = uVar5 + 1;
          cVar2 = *(char *)uVar5;
        }
        puVar9 = (undefined1 *)uVar7;
        *piVar3 = (int)puVar9;
        if ((uVar7 & 0xffffffff) == 0) {
          return 1;
        }
        if (puVar9[-1] == '\r') {
          puVar9[-1] = (char)uVar4;
        }
        else {
          *puVar9 = (char)uVar4;
        }
        iVar10 = *piVar3 + 1;
        goto LAB_00007b1c;
      }
      goto LAB_00007ae0;
    }
LAB_00007ae8:
    if (puVar9[1] != '\n') {
      return 0;
    }
  }
  while (iVar10 = (int)lVar8, iVar10 != 10) {
    if ((iVar10 == 0) || (iVar10 == 10)) {
      iVar10 = 0;
      goto LAB_00007b1c;
    }
    uVar7 = uVar7 + 1;
    lVar8 = (longlong)*(char *)uVar7;
  }
  iVar10 = (int)uVar7 + 1;
LAB_00007b1c:
  *piVar3 = iVar10;
  return 1;
}


/* ==== FUN_00007bfc @ 00007bfc ==== */

undefined8 FUN_00007bfc(void)

{
  undefined8 unaff_r31;
  
  thunk_EXT_FUN_8010d110(&stack0x00000064,0,0x18);
  FUN_0000f268(&stack0x00000060,0xffffffff80203060);
  return unaff_r31;
}


/* ==== FUN_00007cd0 @ 00007cd0 ==== */

undefined8 FUN_00007cd0(void)

{
  int iVar1;
  char cVar2;
  int in_r11;
  undefined8 unaff_r28;
  undefined8 unaff_r29;
  undefined8 unaff_r30;
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
  return unaff_r28;
}


/* ==== FUN_00007d88 @ 00007d88 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00007d88(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar2 = (*_DAT_80203d50)();
  pbVar7 = _DAT_80203d54;
  if ((int)uVar2 == 0) {
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    uVar4 = 0;
    pbVar7 = pbVar7 + (-1 - (int)_DAT_80203d54);
    if ((byte *)*param_4 != pbVar7) {
      do {
        pbVar8 = (byte *)(*param_3 + uVar4);
        lVar5 = 0;
        if (pbVar7 != (byte *)0x0) {
          pbVar3 = pbVar8 + (int)pbVar7;
          pbVar6 = _DAT_80203d54;
          do {
            lVar5 = (ulonglong)*pbVar8 - (ulonglong)*pbVar6;
            if (lVar5 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar8 != pbVar3);
        }
        if ((int)lVar5 == 0) {
          return 0xffffffff80004005;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)((int)*param_4 - (int)pbVar7));
    }
  }
  return uVar2;
}


/* ==== FUN_00007e68 @ 00007e68 ==== */

/* WARNING: Removing unreachable block (ram,0x00008028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_00007e68(void)

{
  int iVar2;
  longlong lVar1;
  longlong lVar3;
  int local_100 [2];
  int local_f8 [2];
  undefined2 local_f0 [2];
  undefined2 local_ec;
  undefined2 local_ea;
  undefined4 local_e8;
  undefined2 *local_e4;
  undefined4 local_e0;
  undefined1 local_d0;
  undefined1 auStack_cf [31];
  undefined4 local_b0;
  undefined1 auStack_ac [40];
  uint local_84;
  undefined1 local_70;
  undefined1 auStack_6f [111];
  
  iVar2 = FUN_0000ead4();
  local_70 = 0;
  thunk_EXT_FUN_8010d110(auStack_6f,0,0x3f);
  local_f0[0] = 0;
  local_f8[0] = 0;
  local_100[0] = 0;
  local_b0 = 0;
  local_ec = 0;
  local_ea = 0;
  local_f8[1] = 0;
  thunk_EXT_FUN_8010d110(auStack_ac,0,0x34);
  local_d0 = 0;
  thunk_EXT_FUN_8010d110(auStack_cf,0,0x13);
  lVar1 = FUN_0000ab50(iVar2);
  if (lVar1 != 0) {
    if (*(int *)(iVar2 + 0x274) != 0) {
      return lVar1;
    }
    lVar3 = 0;
    do {
      thunk_EXT_FUN_8010c7f8(&local_70,0x40,0xffffffff80202270,lVar3);
      thunk_EXT_FUN_80086110(local_f0,&local_70);
      local_e8 = 0;
      local_e0 = 0x40;
      local_e4 = local_f0;
      iVar2 = thunk_EXT_FUN_8006caa8(local_100,0xffffffff80100080,&local_e8,local_f8,0,0x80,1,1);
      if (iVar2 == 0) {
        iVar2 = thunk_EXT_FUN_8006d630(local_100[0],local_f8,&local_b0,0x38,0x22);
        if (((iVar2 == 0) && (0x17 < local_84)) &&
           (iVar2 = thunk_EXT_FUN_8006cec8(local_100[0],0,0,0,local_f8,&local_d0,0x18,0),
           iVar2 == 0x103)) {
          thunk_EXT_FUN_8008b188(local_100[0],1,0,0);
        }
        thunk_EXT_FUN_80089eb0(local_100[0]);
        local_100[0] = 0;
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < 3);
  }
  if (local_100[0] != 0) {
    thunk_EXT_FUN_80089eb0();
  }
  return lVar1;
}


/* ==== FUN_00008080 @ 00008080 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  
  iVar2 = FUN_0000eab8();
  local_80[0] = 0;
  local_78[0] = 0x4220004;
  iVar3 = thunk_EXT_FUN_816ba440(0xffffffff801fab68,0,local_78,local_80);
  if (iVar3 == 0) {
    thunk_EXT_FUN_816ba660(local_80[0]);
    iVar3 = thunk_EXT_FUN_816b7c10(local_80[0]);
    thunk_EXT_FUN_816b7b80(local_80[0]);
    if (iVar3 == 0x534d5550) {
      uVar1 = thunk_EXT_FUN_80070138(0xffffffff80203078);
      local_70 = 0x5050534100000000;
      local_68 = _DAT_80203fc8;
      thunk_EXT_FUN_8007018c(0xffffffff80203078,uVar1);
      (*_DAT_80204250)(*(undefined4 *)(iVar2 + 4),0,&local_70,0xc);
      iVar3 = _DAT_81a9f850;
      param_2 = 0xffffffff802022a0;
      param_3 = 0xffffffff802022e4;
      param_5 = 0;
      param_6 = 0;
      param_7 = 0;
      thunk_EXT_FUN_8010d1b0(_DAT_81a9f850 + 0x7a4,0xffffffff802022a0,0x100);
      thunk_EXT_FUN_8010d1b0(iVar3 + 0x8a4,0xffffffff802022e4,0x100);
      thunk_EXT_FUN_8010d110(iVar3 + 0x9a4,0,0x100);
      *(undefined4 *)(iVar3 + 0x360) = 0;
      *(undefined4 *)(iVar3 + 0xaa4) = 0;
    }
  }
  FUN_0000ac10(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* ==== FUN_00008220 @ 00008220 ==== */

undefined8 FUN_00008220(void)

{
  undefined4 *in_r6;
  
  if (in_r6 != (undefined4 *)0x0) {
    *in_r6 = 0;
  }
  return 0;
}


/* ==== FUN_00008254 @ 00008254 ==== */

undefined8 FUN_00008254(void)

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

undefined8 FUN_00008294(undefined8 param_1,undefined1 *param_2)

{
  int in_r11;
  undefined1 uVar1;
  
  if (in_r11 == 0x4c495645) {
    uVar1 = 3;
  }
  else {
    if (in_r11 != 0x50495253) {
      return 0xffffffff80070570;
    }
    uVar1 = 4;
  }
  *param_2 = uVar1;
  return 0;
}


/* ==== FUN_000082d8 @ 000082d8 ==== */

undefined8 FUN_000082d8(void)

{
  int iVar1;
  int *in_r6;
  undefined4 *in_r9;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = thunk_EXT_FUN_816e0c68();
  if (((iVar1 == 0) && (iVar1 = thunk_EXT_FUN_816e0ca0(), iVar1 == 0)) && (*in_r6 == 1)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = thunk_EXT_FUN_816e0298(&local_30);
    if ((iVar1 == 0) && (in_r6[9] != local_1c)) {
      return 0xffffffff80004005;
    }
  }
  if (in_r9 != (undefined4 *)0x0) {
    uVar2 = 1;
    if (*in_r6 != 0xd0000) {
      uVar2 = 0xffffffff;
    }
    *in_r9 = uVar2;
  }
  return 0;
}


/* ==== FUN_000083b8 @ 000083b8 ==== */

undefined8 FUN_000083b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_EXT_FUN_800718e0();
  thunk_EXT_FUN_80088fa0(param_1 + 0x1c);
  thunk_EXT_FUN_816a2588(param_3,0x65b,0xffffffff800700aa,0);
  thunk_EXT_FUN_800890f8(param_1 + 0x1c);
  thunk_EXT_FUN_800718f8();
  return 0xffffffff800700aa;
}


/* ==== FUN_000084a0 @ 000084a0 ==== */

undefined8 FUN_000084a0(undefined8 param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar3;
  int *piVar4;
  undefined8 uVar2;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar3 = FUN_0000ead8();
  iVar7 = *(int *)(iVar3 + 0x58);
  iVar1 = *(int *)(*(int *)(iVar7 + 0x10) + 0x160);
  if (iVar1 == 0) {
LAB_000084fc:
    piVar4 = (int *)FUN_0000ef68(iVar7,0xe10402);
    if (piVar4 != (int *)0x0) {
      iVar7 = *piVar4 + *(int *)(iVar3 + 0x1c);
      uVar6 = (ulonglong)*(byte *)(iVar7 + 0x13) << 0x18 |
              (ulonglong)*(byte *)(iVar7 + 0x12) << 0x10 | (ulonglong)*(byte *)(iVar7 + 0x11) << 8 |
              (ulonglong)*(byte *)(iVar7 + 0x10);
      if (((param_2 & 0xffffffff) < uVar6) ||
         (param_2 = param_2 - uVar6,
         ((ulonglong)*(byte *)(iVar7 + 0x17) << 0x18 | (ulonglong)*(byte *)(iVar7 + 0x16) << 0x10 |
          (ulonglong)*(byte *)(iVar7 + 0x15) << 8 | (ulonglong)*(byte *)(iVar7 + 0x14)) <
         (param_2 & 0xffffffff))) goto LAB_00008564;
      uVar5 = param_3 - *(int *)(iVar3 + 0x1c);
      *(uint *)(((uint)*(byte *)(iVar7 + 0x1f) << 0x18 | (uint)*(byte *)(iVar7 + 0x1e) << 0x10 |
                 (uint)*(byte *)(iVar7 + 0x1d) << 8 | (uint)*(byte *)(iVar7 + 0x1c)) +
                (int)((param_2 & 0xffffffff) << 2) + iVar7) =
           uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
    }
    uVar2 = 1;
  }
  else {
    if (((ulonglong)*(uint *)(iVar1 + 0x28) <= (param_2 & 0xffffffff)) &&
       (uVar6 = param_2 - *(uint *)(iVar1 + 0x28),
       (uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(iVar1 + 0x24))) {
      *(int *)((int)((uVar6 + 0xb & 0xffffffff) << 2) + iVar1) = param_3 - *(int *)(iVar3 + 0x1c);
      goto LAB_000084fc;
    }
LAB_00008564:
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_00008598 @ 00008598 ==== */

void FUN_00008598(void)

{
  int iVar1;
  undefined8 unaff_r26;
  undefined8 unaff_r27;
  undefined8 unaff_r28;
  uint unaff_r29;
  undefined4 *unaff_r30;
  undefined8 unaff_r31;
  
  do {
    iVar1 = thunk_EXT_FUN_800864b0(unaff_r31,0xffffffffffffffff,*unaff_r30,0xffffffffffffffff,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0000f308(0xffffffff80202318,unaff_r31,unaff_r28,unaff_r27);
      if (iVar1 == 0) {
        return;
      }
      break;
    }
    unaff_r29 = unaff_r29 + 4;
    unaff_r30 = unaff_r30 + 1;
  } while (unaff_r29 < 0x10);
  FUN_0000f308(unaff_r26,unaff_r31,unaff_r28,unaff_r27);
  return;
}


/* ==== FUN_00008608 @ 00008608 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00008608(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar5;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar5 = FUN_0000ead8();
  iVar2 = (int)param_2;
  if (*(int *)(iVar2 + 4) == 0x13) {
    thunk_EXT_FUN_817bd708(*(undefined4 *)(iVar5 + 8),0xffffffff802023ac,0xffffffff80203290);
    thunk_EXT_FUN_817bd708(*(undefined4 *)(iVar5 + 8),0xffffffff802023cc,0xffffffff80203288);
    FUN_0000ac40();
    FUN_0000ad20(_DAT_80203290,DAT_80203184);
    FUN_0000ad68(_DAT_80203290,0xffffffff80203188);
  }
  else if ((*(int *)(iVar2 + 4) == 0xe) && (piVar1 = *(int **)(iVar2 + 0x10), *piVar1 == 7)) {
    if (piVar1[1] == _DAT_80203290) {
      if (DAT_80203184 == '\x01') {
        lVar3 = FUN_000009c0();
        FUN_0000adc0(piVar1[1],lVar3 + 0x29,0xffffffff80203188);
        *(undefined4 *)(iVar2 + 8) = 1;
        return 0;
      }
    }
    else if (piVar1[1] == _DAT_80203288) {
      FUN_0000af30(1);
    }
  }
  uVar4 = FUN_0000af40(iVar5,param_2);
  return uVar4;
}


/* ==== FUN_00008710 @ 00008710 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00008710(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar4;
  longlong lVar3;
  
  iVar4 = FUN_0000ead8();
  iVar2 = (int)param_2;
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 == 0x13) {
    _DAT_8020328c = 0;
    lVar3 = (*(code *)&SUB_913f81c0)(iVar4,*(undefined4 *)(iVar2 + 0x10),param_2 + 8);
    if (lVar3 == 0) {
      thunk_EXT_FUN_817bd708(*(undefined4 *)(iVar4 + 0x10),0xffffffff802023e8,0xffffffff8020328c);
    }
  }
  else if (iVar1 == 0x27) {
    lVar3 = (*(code *)&SUB_913f8218)(iVar4,*(undefined4 *)(iVar2 + 0x10),param_2 + 8);
  }
  else {
    if (((iVar1 == 0xe) && (**(int **)(iVar2 + 0x10) == 7)) &&
       (iVar1 = (*(int **)(iVar2 + 0x10))[1], iVar1 == _DAT_8020328c)) {
      FUN_0000adc0(iVar1,0xffffffff802022a0,0xffffffff80202410);
      *(undefined4 *)(iVar2 + 8) = 1;
    }
    lVar3 = 0;
  }
  return lVar3;
}


/* ==== FUN_000087f8 @ 000087f8 ==== */

undefined8 FUN_000087f8(int param_1,byte *param_2)

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

ulonglong FUN_00008848(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar6;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  byte *pbVar13;
  
  pbVar6 = (byte *)FUN_0000ead4();
  uVar5 = 0;
  bVar3 = false;
  bVar4 = false;
  pbVar13 = pbVar6;
  do {
    pbVar9 = pbVar13;
    bVar1 = *pbVar9;
    uVar11 = (ulonglong)bVar1;
    pbVar13 = pbVar9 + 1;
  } while (bVar1 == 0x20);
  if (bVar1 == 0x2d) {
    bVar2 = true;
LAB_0000888c:
    bVar3 = bVar2;
    bVar1 = *pbVar13;
    pbVar13 = pbVar9 + 2;
    uVar11 = (ulonglong)(char)bVar1;
  }
  else {
    bVar2 = false;
    if (bVar1 == 0x2b) goto LAB_0000888c;
  }
  if (((((int)param_3 == 0) || ((int)param_3 == 0x10)) && ((int)uVar11 == 0x30)) &&
     ((*pbVar13 == 0x78 || (*pbVar13 == 0x58)))) {
    pbVar9 = pbVar13 + 1;
    pbVar13 = pbVar13 + 2;
    param_3 = 0x10;
    uVar11 = (ulonglong)(char)*pbVar9;
  }
  if ((int)param_3 == 0) {
    if ((int)uVar11 == 0x30) {
      param_3 = 8;
      goto LAB_00008904;
    }
    param_3 = 10;
  }
  if (((int)param_3 < 2) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pbVar6;
    }
    return 0;
  }
LAB_00008904:
  bVar2 = false;
  iVar7 = (int)param_3;
  uVar8 = 0xffffffff / (param_3 & 0xffffffff);
  trapWord(6,param_3,0);
  trapWord(6,param_3,0);
  do {
    if ((uVar11 - 0x30 & 0xffffffff) < 10) {
      lVar10 = uVar11 - 0x30;
    }
    else {
      iVar12 = (int)uVar11;
      if (((iVar12 < 0x61) || (0x7a < iVar12)) && ((iVar12 < 0x41 || (0x5a < iVar12)))) {
LAB_000089bc:
        if ((bVar3) && (bVar4)) {
          uVar5 = -uVar5;
        }
        if (param_2 == (undefined4 *)0x0) {
          return uVar5;
        }
        pbVar13 = pbVar13 + -1;
        if (!bVar4) {
          pbVar13 = pbVar6;
        }
        *param_2 = pbVar13;
        return uVar5;
      }
      if ((0x60 < iVar12) && (iVar12 < 0x7b)) {
        uVar11 = uVar11 - 0x20;
      }
      lVar10 = uVar11 - 0x37;
    }
    if (iVar7 <= (int)lVar10) goto LAB_000089bc;
    bVar4 = true;
    if (!bVar2) {
      if ((uVar8 < (uVar5 & 0xffffffff)) ||
         (((uVar5 & 0xffffffff) == uVar8 &&
          (-1 - (int)(0xffffffff / (param_3 & 0xffffffff)) * iVar7 < (int)lVar10)))) {
        bVar2 = true;
        uVar5 = 0xffffffffffffffff;
      }
      else {
        uVar5 = (longlong)(int)uVar5 * (longlong)iVar7 + lVar10;
      }
    }
    uVar11 = (ulonglong)*pbVar13;
    pbVar13 = pbVar13 + 1;
  } while( true );
}


/* ==== FUN_00008a08 @ 00008a08 ==== */

undefined8 FUN_00008a08(undefined8 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar2 = (char *)FUN_0000ead4();
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
      return 0;
    }
    *pcVar4 = '\0';
    if (*pcVar2 == '*') {
      *(undefined1 *)(iVar5 + param_2) = 0xff;
    }
    else {
      iVar3 = FUN_000078e0();
      if (0xff < iVar3) {
        return 0;
      }
      *(char *)(iVar5 + param_2) = (char)iVar3;
    }
    iVar5 = iVar5 + 1;
    pcVar2 = pcVar4 + 1;
  } while (iVar5 < 4);
  return 1;
}


/* ==== FUN_00008ae0 @ 00008ae0 ==== */

/* WARNING: Removing unreachable block (ram,0x00008b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00008ae0(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_0000ead0();
  if (((*(uint *)(iVar1 + 8) & 2) == 2) ||
     (((ulonglong)(*(uint *)(iVar1 + 8) >> 3) & 1) == (param_2 & 0xff))) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      iVar2 = FUN_0000af60(iVar1,param_2);
      iVar4 = iVar1;
      if (iVar2 == 0) {
        do {
          iVar4 = *(int *)(iVar4 + 0xc);
          if ((*(uint *)(iVar4 + 8) & 2) == 2) {
            if ((param_2 & 0xff) == 1) goto LAB_00008bd8;
            piVar3 = (int *)(iVar4 + -8);
LAB_00008bdc:
            iRam0000000c = iVar4;
            *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
            _FUN_00000000 = *piVar3;
            piRam00000004 = piVar3;
            *(undefined4 *)(_FUN_00000000 + 4) = 0;
            *piVar3 = 0;
            goto LAB_00008b2c;
          }
          if (*(int *)(iVar4 + 0x10) != 0) {
            iVar4 = *(int *)(iVar4 + 0x10);
LAB_00008bd8:
            piVar3 = (int *)(iVar4 + 0x40);
            goto LAB_00008bdc;
          }
          iVar2 = FUN_0000af60(iVar4,param_2);
        } while (iVar2 == 0);
        if (iVar4 != iVar1) {
          FUN_00008da0(*(undefined4 *)(iVar1 + 0x10));
        }
      }
      iVar1 = 0;
    }
    else {
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
LAB_00008b2c:
      iVar1 = *(int *)(iVar1 + 0x10);
    }
  }
  return iVar1;
}


/* ==== FUN_00008c20 @ 00008c20 ==== */

undefined8 FUN_00008c20(undefined8 param_1,longlong param_2,uint *param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar3;
  char cVar4;
  undefined8 uVar2;
  undefined2 *puVar5;
  
  iVar3 = FUN_0000ead0();
  if (((*(uint *)(iVar3 + 8) & 2) == 0) &&
     (cVar4 = FUN_00008c20(*(undefined4 *)(iVar3 + 0xc)), cVar4 == '\0')) {
LAB_00008c58:
    uVar2 = 0;
  }
  else {
    puVar5 = (undefined2 *)param_2;
    if ((*(uint *)(iVar3 + 8) & 2) == 2) {
      *puVar5 = 0x5c;
      puVar5[1] = 0;
      *param_3 = *param_3 + 1;
    }
    else {
      uVar1 = *param_3;
      if ((param_4 & 0xffffffff) < (ulonglong)(*(int *)(iVar3 + 0xa0) + uVar1 + 2))
      goto LAB_00008c58;
      thunk_EXT_FUN_8010cc40
                (((ulonglong)uVar1 & 0x7fffffff) * 2 + param_2,iVar3 + 0xa4,
                 *(int *)(iVar3 + 0xa0) << 1);
      iVar3 = *(int *)(iVar3 + 0xa0) + uVar1;
      puVar5[iVar3] = 0x5c;
      puVar5[iVar3 + 1] = 0;
      *param_3 = iVar3 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== FUN_00008cf0 @ 00008cf0 ==== */

undefined4 * FUN_00008cf0(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_0000eacc();
  puVar6 = (undefined4 *)(iVar3 + 0x40);
  iVar5 = 0;
  do {
    uVar1 = *param_2;
    for (puVar2 = (undefined4 *)*puVar6; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
      if ((puVar2[0x28] == (uint)(uVar1 >> 1)) &&
         (iVar4 = thunk_EXT_FUN_800864b0
                            (puVar2 + 0x29,puVar2[0x28],*(undefined4 *)(param_2 + 2),
                             (uint)(uVar1 >> 1),1), iVar4 == 0)) {
        return puVar2;
      }
    }
    if (iVar5 == 1) {
      return (undefined4 *)0x0;
    }
    if ((*(uint *)(iVar3 + 8) & 2) == 2) {
      puVar6 = (undefined4 *)(iVar3 + -8);
    }
    else {
      if (*(int *)(iVar3 + 0x10) == 0) {
        return (undefined4 *)0x0;
      }
      puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x10) + 0x40);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return (undefined4 *)0x0;
}


/* ==== FUN_00008da0 @ 00008da0 ==== */

void FUN_00008da0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)FUN_0000ead4();
  while( true ) {
    uVar1 = piVar5[5];
    piVar5[5] = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 != 0) {
      return;
    }
    if ((piVar5[2] & 2U) == 2) break;
    piVar2 = (int *)piVar5[3];
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar5;
      piVar4 = (int *)piVar5[1];
      *piVar4 = iVar3;
      *(int **)(iVar3 + 4) = piVar4;
    }
    if (piVar5[4] != 0) {
      *(undefined4 *)(piVar5[4] + 0x10) = 0;
    }
    if ((piVar5[2] & 4U) == 4) {
      thunk_EXT_FUN_80085ee8(0xffffffff8020244c);
    }
    thunk_EXT_FUN_80085ee8(0xffffffff80202434,piVar5[0x28],piVar5 + 0x29);
    thunk_EXT_FUN_80064768(piVar5);
    piVar5 = piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  return;
}


/* ==== FUN_00008e58 @ 00008e58 ==== */

longlong FUN_00008e58(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 in_stack_00000014;
  int aiStack_80 [19];
  byte bStack_31;
  
  in_stack_00000014 = FUN_0000ead8();
  lVar1 = FUN_00006b68(&stack0x00000014,aiStack_80,0);
  if (lVar1 == 0) {
    lVar2 = FUN_0000afe0(0x460);
    if (lVar2 == 0) {
      return 0x11;
    }
    *(int *)(aiStack_80[0] + 0xc) = (int)lVar2;
    *(int *)(aiStack_80[0] + 0x50) = (int)lVar2 + 0x200;
    lVar1 = FUN_0000aff0(aiStack_80,in_stack_00000014);
    if (lVar1 == 0) {
      if ((bStack_31 & 0x80) == 0) {
        if ((param_2 & 0xffffffff) != 0) {
          FUN_0000b108(aiStack_80,param_2);
        }
      }
      else {
        lVar1 = 6;
      }
    }
    thunk_EXT_FUN_80064768(lVar2);
  }
  if (((param_2 & 0xffffffff) != 0) && ((int)lVar1 != 0)) {
    *(undefined2 *)((int)param_2 + 0x2c) = 0;
  }
  return lVar1;
}


/* ==== FUN_00008f18 @ 00008f18 ==== */

int * FUN_00008f18(undefined8 param_1,int param_2,ulonglong param_3,undefined8 param_4,
                  ushort *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_0000ead0();
  piVar3 = (int *)FUN_0000b4f0((ulonglong)*param_5 + 0xa8,param_3,param_4);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[0x28] = (uint)(*param_5 >> 1);
    thunk_EXT_FUN_8010cc40(piVar3 + 0x29,*(undefined4 *)(param_5 + 2),*param_5);
    piVar3[3] = param_2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    if (((param_3 & 0xff) == 1) || ((~*(uint *)(param_2 + 8) >> 1 & 1) == 1)) {
      iVar2 = *(int *)(param_2 + 0x40);
      piVar3[1] = param_2 + 0x40;
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      *(int **)(param_2 + 0x40) = piVar3;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x328);
      piVar3[1] = iVar2 + 0x328;
      *piVar3 = iVar1;
      *(int **)(iVar1 + 4) = piVar3;
      *(int **)(iVar2 + 0x328) = piVar3;
    }
  }
  return piVar3;
}


/* ==== FUN_00008fe8 @ 00008fe8 ==== */

undefined8
FUN_00008fe8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,ulonglong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  int iVar3;
  longlong lVar2;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  byte in_stack_00000057;
  int *in_stack_0000005c;
  
  uVar1 = FUN_0000eacc();
  uVar5 = 0;
  iVar3 = FUN_00008f18(uVar1,param_3,param_6,param_7);
  if (iVar3 == 0) {
    return 0xffffffffc000009a;
  }
  if ((param_7 & 0xff) == 1) {
    lVar2 = FUN_0000b5a0(param_4);
    if (((int)lVar2 == 0) && (lVar2 = FUN_000091d0(iVar3 + 0x48,param_4), (int)lVar2 == 0)) {
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 4;
      goto LAB_00009068;
    }
  }
  else {
    bVar4 = FUN_000092f8(param_8);
    iVar6 = iVar3 + 0x40;
    lVar2 = FUN_00009358(iVar6,param_4,in_stack_00000057 & 3 | bVar4);
    if ((int)lVar2 == 0) {
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 4;
      if (*(int *)(param_2 + 0x2c) == 0) goto LAB_00009068;
      lVar2 = FUN_000098b0(iVar6,*(int *)(param_2 + 0x2c));
      if (lVar2 == 0) {
        lVar2 = FUN_000098b0(iVar6,0);
        if ((int)lVar2 == 0) goto LAB_00009068;
      }
      else {
        thunk_EXT_FUN_80085ea0();
      }
    }
  }
  uVar5 = FUN_00009768(lVar2,0);
  if ((int)uVar5 != 0) {
    FUN_00008da0(iVar3);
    return uVar5;
  }
LAB_00009068:
  *in_stack_0000005c = iVar3;
  return uVar5;
}


/* ==== FUN_00009118 @ 00009118 ==== */

longlong FUN_00009118(undefined8 param_1,int param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  longlong lVar4;
  
  iVar5 = FUN_0000eacc();
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x18);
  if ((param_3 & 0xffffffff) == 0) {
    lVar4 = -0x3ffffefe;
  }
  else {
    iVar3 = (int)param_3;
    if (*(char *)(iVar3 + 0x18) == '\0') {
      thunk_EXT_FUN_8006bbd0();
    }
    else {
      lVar4 = thunk_EXT_FUN_8006b9d0
                        (*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 0xe),iVar2,
                         param_3 + 0x18,1);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
    lVar4 = 0;
    FUN_00008ae0(param_3,*(uint *)(iVar3 + 8) >> 3 & 1);
    *(int *)(iVar2 + 8) = iVar3;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x14) = param_4;
    iVar1 = *(int *)(iVar5 + 800);
    *(int *)(iVar2 + 0x54) = iVar5 + 800;
    *(int *)(iVar2 + 0x50) = iVar1;
    *(int *)(iVar1 + 4) = iVar2 + 0x50;
    *(int *)(iVar5 + 800) = iVar2 + 0x50;
  }
  return lVar4;
}


/* ==== FUN_000091d0 @ 000091d0 ==== */

longlong FUN_000091d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 *puVar5;
  longlong lVar3;
  longlong lVar4;
  uint uVar6;
  undefined4 in_stack_0000001c;
  char *local_30 [12];
  
  puVar5 = (undefined4 *)FUN_0000ead4();
  if (puVar5 == (undefined4 *)0x0) {
    return 9;
  }
  in_stack_0000001c = param_2;
  lVar3 = FUN_00006b68(&stack0x0000001c,local_30,0);
  if (lVar3 != 0) goto LAB_000092b0;
  *puVar5 = local_30[0];
  lVar4 = FUN_0000afe0(0x460);
  if (lVar4 == 0) {
    return 0x11;
  }
  *(int *)(local_30[0] + 0xc) = (int)lVar4;
  *(int *)(local_30[0] + 0x50) = (int)lVar4 + 0x200;
  lVar3 = FUN_0000aff0(puVar5,in_stack_0000001c);
  if (lVar3 == 0) {
    if ((*(byte *)((int)puVar5 + 0x4f) & 0x80) == 0) {
      if ((*(byte *)((int)puVar5 + 6) & 0x10) == 0) {
        lVar3 = 5;
        goto LAB_00009294;
      }
      if (*local_30[0] == '\x04') {
        FUN_0000b818(puVar5,puVar5);
      }
      else {
        iVar1 = puVar5[0x10];
        uVar2 = CONCAT11(*(undefined1 *)(iVar1 + 0x1b),*(undefined1 *)(iVar1 + 0x1a));
        uVar6 = (uint)uVar2;
        if (*local_30[0] == '\x03') {
          uVar6 = CONCAT22(CONCAT11(*(undefined1 *)(iVar1 + 0x15),*(undefined1 *)(iVar1 + 0x14)),
                           uVar2);
        }
        puVar5[2] = uVar6;
      }
    }
    *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(local_30[0] + 6);
    lVar3 = FUN_0000b888(puVar5,0);
  }
LAB_00009294:
  thunk_EXT_FUN_80064768(lVar4);
  if ((int)lVar3 == 4) {
    lVar3 = 5;
  }
  if ((int)lVar3 == 0) {
    return lVar3;
  }
LAB_000092b0:
  *puVar5 = 0;
  return lVar3;
}


/* ==== FUN_000092f8 @ 000092f8 ==== */

undefined8 FUN_000092f8(uint param_1)

{
  undefined8 uVar1;
  
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

longlong FUN_00009358(undefined8 param_1,undefined4 param_2,ulonglong param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar6;
  longlong lVar4;
  longlong lVar5;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 in_stack_0000001c;
  char *local_d0 [4];
  char *local_c0;
  byte local_ba;
  int local_80;
  byte local_71;
  
  piVar6 = (int *)FUN_0000eab8();
  if (piVar6 == (int *)0x0) {
    return 9;
  }
  uVar10 = param_3 & 0x3f;
  in_stack_0000001c = param_2;
  lVar4 = FUN_00006b68(&stack0x0000001c,local_d0,uVar10);
  if (lVar4 != 0) goto LAB_00009754;
  *piVar6 = (int)local_d0[0];
  local_c0 = local_d0[0];
  lVar5 = FUN_0000afe0(0x460);
  if (lVar5 == 0) {
    return 0x11;
  }
  *(int *)(local_d0[0] + 0xc) = (int)lVar5;
  *(int *)(local_d0[0] + 0x50) = (int)lVar5 + 0x200;
  lVar4 = FUN_0000aff0(&local_c0,in_stack_0000001c);
  if ((lVar4 == 0) && ((local_71 & 0x80) != 0)) {
    lVar4 = 6;
  }
  iVar11 = (int)lVar4;
  if ((param_3 & 0x1c) == 0) {
    if (iVar11 == 0) {
      if ((local_ba & 0x10) == 0) {
        if (((param_3 & 2) != 0) && ((local_ba & 1) != 0)) {
          lVar4 = 7;
LAB_000095fc:
          if ((int)lVar4 != 0) goto LAB_00009744;
        }
        goto LAB_00009608;
      }
      lVar4 = 4;
    }
    goto LAB_00009744;
  }
  if (iVar11 == 0) {
    if ((param_3 & 4) != 0) {
      lVar4 = 8;
      goto LAB_00009744;
    }
    if ((local_ba & 0x11) != 0) {
      lVar4 = 7;
      goto LAB_00009450;
    }
  }
  else {
    if (iVar11 == 4) {
      lVar4 = FUN_0000b9c8(&local_c0);
    }
    uVar10 = uVar10 | 8;
LAB_00009450:
    if ((int)lVar4 != 0) goto LAB_00009744;
  }
  if ((uVar10 & 8) == 0) {
LAB_00009608:
    if ((uVar10 & 8) != 0) {
      uVar10 = uVar10 | 0x40;
    }
    uVar8 = *(undefined8 *)(local_d0[0] + 0x20);
    piVar6[0x16] = local_80;
    *(undefined8 *)(piVar6 + 0x14) = uVar8;
    if (*local_d0[0] == '\x04') {
      FUN_0000b818(piVar6,&local_c0);
    }
    else {
      uVar2 = CONCAT11(*(undefined1 *)(local_80 + 0x1b),*(undefined1 *)(local_80 + 0x1a));
      uVar7 = (uint)uVar2;
      if (*local_d0[0] == '\x03') {
        uVar7 = CONCAT22(CONCAT11(*(undefined1 *)(local_80 + 0x15),*(undefined1 *)(local_80 + 0x14))
                         ,uVar2);
      }
      piVar6[2] = uVar7;
      *(ulonglong *)(piVar6 + 4) =
           (ulonglong)*(byte *)(local_80 + 0x1f) << 0x18 |
           (ulonglong)*(byte *)(local_80 + 0x1e) << 0x10 |
           (ulonglong)*(byte *)(local_80 + 0x1d) << 8 | (ulonglong)*(byte *)(local_80 + 0x1c);
    }
    uVar1 = *(undefined2 *)(local_d0[0] + 6);
    *(char *)(piVar6 + 0xc) = (char)uVar10;
    *(undefined1 *)((int)piVar6 + 0x31) = 0;
    piVar6[0x12] = 0;
    piVar6[0x13] = 0;
    piVar6[0xe] = 0;
    piVar6[0xf] = 0;
    *(undefined2 *)(piVar6 + 1) = uVar1;
    if (((uVar10 & 0x20) != 0) && (uVar10 = *(ulonglong *)(piVar6 + 4), uVar10 != 0)) {
      *(ulonglong *)(piVar6 + 0xe) = uVar10;
      uVar7 = piVar6[2];
      uVar2 = *(ushort *)(local_d0[0] + 10);
      do {
        if (uVar10 <= (ulonglong)uVar2 * 0x200) break;
        uVar7 = FUN_0000c140(piVar6);
        if (uVar7 < 2) {
          lVar4 = 2;
        }
        if (uVar7 == 0xffffffff) {
          lVar4 = 1;
        }
        uVar10 = uVar10 + (ulonglong)uVar2 * -0x200;
      } while ((int)lVar4 == 0);
      piVar6[0x10] = uVar7;
      if (((int)lVar4 == 0) && ((uVar10 & 0x1ff) != 0)) {
        if ((uVar7 - 2 < *(int *)(local_d0[0] + 0x18) - 2U) &&
           (lVar9 = (ulonglong)*(ushort *)(local_d0[0] + 10) * (ulonglong)(uVar7 - 2) +
                    *(longlong *)(local_d0[0] + 0x40), lVar9 != 0)) {
          *(ulonglong *)(piVar6 + 0x12) = (uVar10 >> 9 & 0xffffffff) + lVar9;
        }
        else {
          lVar4 = 2;
        }
      }
    }
  }
  else {
    uVar7 = FUN_0000bde0();
    if (*local_d0[0] == '\x04') {
      iVar11 = *piVar6;
      iVar3 = *(int *)(iVar11 + 0x50);
      piVar6[2] = (uint)*(byte *)(iVar3 + 0x37) << 0x18 | (uint)*(byte *)(iVar3 + 0x36) << 0x10 |
                  (uint)*(byte *)(iVar3 + 0x35) << 8 | (uint)*(byte *)(iVar3 + 0x34);
      uVar8 = LoadDoublewordByteReverseIndexed
                        ((ulonglong)*(uint *)(iVar11 + 0x50),(ulonglong)*(uint *)(iVar11 + 0x50),
                         0x38);
      *(undefined8 *)(piVar6 + 4) = uVar8;
      *(byte *)((int)piVar6 + 7) = *(byte *)(*(int *)(iVar11 + 0x50) + 0x21) & 2;
      piVar6[7] = 0;
      thunk_EXT_FUN_8010d110((ulonglong)*(uint *)(local_d0[0] + 0x50) + 2,0,0x1e);
      thunk_EXT_FUN_8010d110((ulonglong)*(uint *)(local_d0[0] + 0x50) + 0x26,0,0x1a);
      *(undefined1 *)(*(int *)(local_d0[0] + 0x50) + 4) = 0x20;
      *(uint *)(*(int *)(local_d0[0] + 0x50) + 8) =
           uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 8 & 0xff00 | uVar7 >> 0x18;
      *(uint *)(*(int *)(local_d0[0] + 0x50) + 0xc) =
           uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 8 & 0xff00 | uVar7 >> 0x18;
      *(undefined1 *)(*(int *)(local_d0[0] + 0x50) + 0x21) = 1;
      lVar4 = FUN_0000be60(&local_c0);
      if (lVar4 == 0) {
        if (piVar6[2] != 0) {
          lVar4 = FUN_0000bf48(piVar6,piVar6[2],0);
          uVar7 = piVar6[2];
LAB_000095c4:
          *(uint *)(local_d0[0] + 0x10) = uVar7 - 1;
          goto LAB_000095fc;
        }
        goto LAB_00009608;
      }
    }
    else {
      *(uint *)(local_80 + 0xe) =
           uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 8 & 0xff00 | uVar7 >> 0x18;
      *(uint *)(local_80 + 0x16) =
           uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 8 & 0xff00 | uVar7 >> 0x18;
      uVar2 = CONCAT11(*(undefined1 *)(local_80 + 0x1b),*(undefined1 *)(local_80 + 0x1a));
      uVar7 = (uint)uVar2;
      if (*local_d0[0] == '\x03') {
        uVar7 = CONCAT22(CONCAT11(*(undefined1 *)(local_80 + 0x15),*(undefined1 *)(local_80 + 0x14))
                         ,uVar2);
      }
      *(undefined1 *)(local_80 + 0xb) = 0x20;
      *(undefined2 *)(local_80 + 0x1a) = 0;
      if (*local_d0[0] == '\x03') {
        *(undefined2 *)(local_80 + 0x14) = 0;
      }
      *(undefined4 *)(local_80 + 0x1c) = 0;
      local_d0[0][4] = '\x01';
      if (uVar7 == 0) goto LAB_00009608;
      uVar8 = *(undefined8 *)(local_d0[0] + 0x20);
      lVar4 = FUN_0000bf48(&local_c0,uVar7,0);
      if (lVar4 == 0) {
        lVar4 = FUN_0000a4d8(local_d0[0],uVar8);
        goto LAB_000095c4;
      }
    }
  }
LAB_00009744:
  thunk_EXT_FUN_80064768(lVar5);
  if ((int)lVar4 == 0) {
    return lVar4;
  }
LAB_00009754:
  *piVar6 = 0;
  return lVar4;
}


/* ==== FUN_00009768 @ 00009768 ==== */

undefined8 FUN_00009768(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0000ead8();
  uVar4 = 0;
  uVar3 = 0xffffffffc0000001;
  iVar2 = (int)uVar1;
  if (iVar2 == 4) {
    uVar4 = 5;
    uVar3 = 0xffffffffc0000034;
  }
  else if (iVar2 == 5) {
    uVar4 = 5;
    uVar3 = 0xffffffffc000003a;
  }
  else if (iVar2 == 6) {
    uVar4 = 5;
    uVar3 = 0xffffffffc0000033;
  }
  else if (iVar2 == 8) {
    uVar4 = 4;
    uVar3 = 0xffffffffc0000035;
  }
  else {
    thunk_EXT_FUN_80085ee8(0xffffffff80202474,uVar1);
    thunk_EXT_FUN_80085ea0();
  }
  if ((param_2 & 0xffffffff) != 0) {
    *(undefined4 *)param_2 = uVar4;
  }
  return uVar3;
}


/* ==== FUN_00009810 @ 00009810 ==== */

undefined8 FUN_00009810(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  pcVar2 = *(char **)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x1a) != '\0') {
    pcVar2[3] = pcVar2[3] | 1;
  }
  if (((*pcVar2 == '\x02') || (*pcVar2 == '\x03')) && (*(int *)(param_2 + 0x10) == 0)) {
    if ((*(byte *)(*(int *)(pcVar2 + 0x18) + 2) & 1) != 0) {
      *(ulonglong *)(*(int *)(pcVar2 + 0x18) + 0x14) =
           (ulonglong)*(uint *)(param_2 + 0x14) + *(longlong *)(pcVar2 + 0xc);
    }
  }
  thunk_EXT_FUN_800643d8((ulonglong)uVar1 + 0x10);
  thunk_EXT_FUN_800643d8((ulonglong)uVar1 + 0x48);
  return 0;
}


/* ==== FUN_000098b0 @ 000098b0 ==== */

ulonglong FUN_000098b0(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  int iVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong lVar8;
  char *local_40 [16];
  
  iVar4 = FUN_0000ead0();
  uVar2 = FUN_0000c350(iVar4,local_40);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(byte *)(iVar4 + 0x31) != 0) {
    return (ulonglong)*(byte *)(iVar4 + 0x31);
  }
  if ((*local_40[0] == '\x04') &&
     (uVar2 = FUN_0000c3c8(iVar4,*(undefined4 *)(iVar4 + 0x40),0xffffffffffffffff), (int)uVar2 != 0)
     ) {
    return uVar2;
  }
  if ((*local_40[0] != '\x04') && (0xffffffff < param_2)) {
    param_2 = 0xffffffff;
  }
  if ((*(ulonglong *)(iVar4 + 0x10) < param_2) && ((*(byte *)(iVar4 + 0x30) & 2) == 0)) {
    param_2 = *(ulonglong *)(iVar4 + 0x10);
  }
  lVar8 = 0;
  lVar5 = *(longlong *)(iVar4 + 0x38);
  *(undefined8 *)(iVar4 + 0x38) = 0;
  if (param_2 == 0) goto LAB_00009aac;
  uVar1 = *(ushort *)(local_40[0] + 10);
  uVar2 = (ulonglong)uVar1 * 0x200;
  if (lVar5 == 0) {
LAB_000099ac:
    uVar3 = (ulonglong)*(uint *)(iVar4 + 8);
    if (uVar3 != 0) {
LAB_000099f4:
      *(int *)(iVar4 + 0x40) = (int)uVar3;
      goto LAB_000099f8;
    }
    uVar3 = FUN_0000c440(iVar4,0);
    if ((uVar3 & 0xffffffff) != 1) {
      if ((int)uVar3 == -1) {
LAB_000099e4:
        uVar7 = 1;
        uVar2 = 1;
        goto LAB_000099d4;
      }
      *(int *)(iVar4 + 8) = (int)uVar3;
      goto LAB_000099f4;
    }
  }
  else {
    uVar6 = lVar5 - 1;
    trapDoubleWordImmediate(6,uVar2,0);
    trapDoubleWordImmediate(6,uVar2,0);
    if ((param_2 - 1) / uVar2 < uVar6 / uVar2) goto LAB_000099ac;
    uVar3 = (ulonglong)*(uint *)(iVar4 + 0x40);
    uVar6 = uVar6 & ~(uVar2 - 1 & 0xffffffff);
    param_2 = param_2 - uVar6;
    *(ulonglong *)(iVar4 + 0x38) = uVar6;
LAB_000099f8:
    if ((uVar3 & 0xffffffff) == 0) {
LAB_00009aac:
      uVar2 = *(ulonglong *)(iVar4 + 0x38);
      if (*(ulonglong *)(iVar4 + 0x10) < uVar2) {
        *(ulonglong *)(iVar4 + 0x10) = uVar2;
        *(byte *)(iVar4 + 0x30) = *(byte *)(iVar4 + 0x30) | 0x40;
      }
      if (((uVar2 & 0x1ff) != 0) && (lVar8 != *(longlong *)(iVar4 + 0x48))) {
        *(longlong *)(iVar4 + 0x48) = lVar8;
      }
      return 0;
    }
    while (uVar2 < param_2) {
      param_2 = param_2 + (ulonglong)uVar1 * -0x200;
      uVar6 = *(longlong *)(iVar4 + 0x38) + uVar2;
      *(ulonglong *)(iVar4 + 0x38) = uVar6;
      if ((*(byte *)(iVar4 + 0x30) & 2) == 0) {
        uVar3 = FUN_0000c140(iVar4,uVar3);
      }
      else {
        if (*(ulonglong *)(iVar4 + 0x10) < uVar6) {
          *(ulonglong *)(iVar4 + 0x10) = uVar6;
          *(byte *)(iVar4 + 0x30) = *(byte *)(iVar4 + 0x30) | 0x40;
        }
        uVar3 = FUN_0000c440(iVar4,uVar3);
        if ((uVar3 & 0xffffffff) == 0) {
          param_2 = 0;
          break;
        }
      }
      if ((int)uVar3 == -1) goto LAB_000099e4;
      if (((uVar3 & 0xffffffff) < 2) ||
         ((ulonglong)*(uint *)(local_40[0] + 0x18) <= (uVar3 & 0xffffffff))) goto LAB_000099cc;
      *(int *)(iVar4 + 0x40) = (int)uVar3;
    }
    *(ulonglong *)(iVar4 + 0x38) = *(longlong *)(iVar4 + 0x38) + param_2;
    if ((param_2 & 0x1ff) == 0) goto LAB_00009aac;
    if (((uVar3 - 2 & 0xffffffff) < (ulonglong)(*(int *)(local_40[0] + 0x18) - 2)) &&
       (lVar8 = (ulonglong)*(ushort *)(local_40[0] + 10) * (uVar3 - 2 & 0xffffffff) +
                *(longlong *)(local_40[0] + 0x40), lVar8 != 0)) {
      lVar8 = (param_2 >> 9 & 0xffffffff) + lVar8;
      goto LAB_00009aac;
    }
  }
LAB_000099cc:
  uVar7 = 2;
  uVar2 = 2;
LAB_000099d4:
  *(undefined1 *)(iVar4 + 0x31) = uVar7;
  return uVar2;
}


/* ==== FUN_00009b30 @ 00009b30 ==== */

ulonglong FUN_00009b30(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,
                      undefined8 param_5)

{
  int iVar2;
  ulonglong uVar1;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint auStack_50 [20];
  
  iVar2 = FUN_0000eac4();
  *param_4 = 0;
  uVar1 = FUN_0000c350(iVar2,auStack_50);
  if (((int)uVar1 == 0) &&
     (uVar1 = (ulonglong)*(byte *)(iVar2 + 0x31), *(byte *)(iVar2 + 0x31) == 0)) {
    if ((*(byte *)(iVar2 + 0x30) & 1) == 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = *(longlong *)(iVar2 + 0x10) - *(longlong *)(iVar2 + 0x38);
      if (uVar1 < (param_3 & 0xffffffff)) {
        param_3 = uVar1 & 0xffffffff;
      }
      if ((param_3 & 0xffffffff) != 0) {
        uVar1 = (ulonglong)auStack_50[0];
        do {
          uVar5 = *(ulonglong *)(iVar2 + 0x38);
          if ((uVar5 & 0x1ff) == 0) {
            uVar8 = (ulonglong)*(ushort *)(auStack_50[0] + 10) - 1 & uVar5 >> 9 & 0xffffffff;
            if (uVar8 == 0) {
              if (uVar5 == 0) {
                uVar3 = *(uint *)(iVar2 + 8);
              }
              else {
                uVar3 = FUN_0000c140(iVar2,*(undefined4 *)(iVar2 + 0x40));
              }
              if (1 < uVar3) {
                if (uVar3 != 0xffffffff) {
                  *(uint *)(iVar2 + 0x40) = uVar3;
                  goto LAB_00009c04;
                }
                goto LAB_00009d54;
              }
            }
            else {
LAB_00009c04:
              if (*(int *)(iVar2 + 0x40) - 2U < *(int *)(auStack_50[0] + 0x18) - 2U) {
                uVar5 = (ulonglong)*(ushort *)(auStack_50[0] + 10);
                lVar6 = uVar5 * (*(int *)(iVar2 + 0x40) - 2) + *(longlong *)(auStack_50[0] + 0x40);
                if (lVar6 != 0) {
                  uVar10 = (param_3 & 0xffffffff) >> 9;
                  uVar9 = uVar8 + lVar6;
                  if (uVar10 == 0) {
                    *(ulonglong *)(iVar2 + 0x48) = uVar9;
                    goto LAB_00009cc8;
                  }
                  if (uVar5 < (uVar10 + uVar8 & 0xffffffff)) {
                    uVar10 = uVar5 - uVar8;
                  }
                  iVar4 = FUN_0000c710(*(undefined1 *)(auStack_50[0] + 1),param_2,uVar9,uVar10,
                                       param_5,uVar5);
                  if (iVar4 != 0) goto LAB_00009d54;
                  if ((*(char *)(auStack_50[0] + 4) != '\0') &&
                     (*(ulonglong *)(auStack_50[0] + 0x20) - uVar9 < (uVar10 & 0xffffffff))) {
                    thunk_EXT_FUN_8010cc40
                              (((*(ulonglong *)(auStack_50[0] + 0x20) & 0xffffffff) -
                                (uVar9 & 0xffffffff) & 0x7fffff) * 0x200 + param_2,uVar1 + 0x54,
                               0x200);
                  }
                  uVar5 = (uVar10 & 0x7fffff) << 9;
                  goto LAB_00009d10;
                }
              }
            }
            uVar7 = 2;
            uVar1 = 2;
LAB_00009d4c:
            *(undefined1 *)(iVar2 + 0x31) = uVar7;
            return uVar1;
          }
LAB_00009cc8:
          uVar5 = 0x200 - (*(ulonglong *)(iVar2 + 0x38) & 0x1ff);
          if ((param_3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
            uVar5 = param_3;
          }
          iVar4 = FUN_0000a4d8(uVar1,*(undefined8 *)(iVar2 + 0x48));
          if (iVar4 != 0) {
LAB_00009d54:
            uVar7 = 1;
            uVar1 = 1;
            goto LAB_00009d4c;
          }
          thunk_EXT_FUN_8010cc40
                    (param_2,(*(ulonglong *)(iVar2 + 0x38) & 0x1ff) + uVar1 + 0x54,uVar5);
LAB_00009d10:
          param_3 = param_3 - uVar5;
          param_2 = uVar5 + param_2;
          *param_4 = *param_4 + (int)uVar5;
          *(ulonglong *)(iVar2 + 0x38) = (uVar5 & 0xffffffff) + *(longlong *)(iVar2 + 0x38);
        } while (param_3 != 0);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* ==== FUN_00009d60 @ 00009d60 ==== */

undefined8 FUN_00009d60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_250;
  undefined2 local_248;
  undefined2 local_246;
  undefined2 local_244;
  undefined2 local_242;
  byte local_240;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(uint *)(iVar1 + 8) & 2) == 2) {
    thunk_EXT_FUN_8010d110(param_2,0,0x38);
    uVar2 = *(uint *)(param_2 + 0x30) | 0x10;
  }
  else {
    if ((*(uint *)(iVar1 + 8) & 1) == 1) {
      FUN_0000c800(iVar1 + 0x48,&local_250);
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    else {
      FUN_0000c800(iVar1 + 0x40,&local_250);
      *(undefined8 *)(param_2 + 0x20) = local_250;
      *(undefined8 *)(param_2 + 0x28) = local_250;
    }
    FUN_0000a1d0(local_244,local_242,param_2);
    FUN_0000a1d0(local_248,local_246,param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
    if ((local_240 & 1) == 1) {
      *(undefined4 *)(param_2 + 0x30) = 1;
    }
    if ((local_240 & 2) == 2) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
    }
    if ((local_240 & 4) == 4) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 4;
    }
    if ((local_240 & 0x20) == 0x20) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20;
    }
    if ((local_240 & 0x10) == 0x10) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x10;
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      return 0;
    }
    uVar2 = 0x80;
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  return 0;
}


/* ==== FUN_00009ec0 @ 00009ec0 ==== */

undefined8 FUN_00009ec0(int param_1,int param_2,ulonglong *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *param_3 = 0;
  if (*(int *)(iVar1 + 0x48) == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  *param_3 = (longlong)(int)((*(int *)(iVar1 + 0x18) + -2) * (uint)*(ushort *)(iVar1 + 10)) *
             (longlong)*(int *)(*(int *)(param_1 + 0xa0) + 0x20) & 0xffffffff;
  return 0;
}


/* ==== FUN_00009f10 @ 00009f10 ==== */

ulonglong FUN_00009f10(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char *pcVar3;
  ulonglong uVar2;
  uint uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint local_40;
  
  pcVar3 = (char *)FUN_0000eacc();
  uVar5 = *(int *)(pcVar3 + 0x18) - 2;
  uVar6 = 0;
  if (uVar5 < *(uint *)(pcVar3 + 0x14)) {
    if (*pcVar3 == '\x04') {
      lVar7 = *(longlong *)(pcVar3 + 0x48);
      uVar2 = (ulonglong)local_40;
      uVar8 = 0;
      do {
        if (uVar8 == 0) {
          uVar2 = FUN_0000a4d8(pcVar3,lVar7);
          lVar7 = lVar7 + 1;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
        lVar9 = 8;
        uVar4 = ~(ulonglong)(byte)(pcVar3 + uVar8)[0x54] & 0xff;
        do {
          if (uVar5 == 0) break;
          uVar1 = uVar4 & 1;
          uVar4 = uVar4 >> 1;
          uVar5 = uVar5 - 1;
          uVar6 = uVar1 + uVar6;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar8 = uVar8 + 1 & 0x1ff;
      } while (uVar5 != 0);
      if ((int)uVar2 == 0) {
        *param_2 = uVar6;
      }
    }
    else {
      uVar2 = 0xd;
    }
  }
  else {
    uVar2 = (ulonglong)local_40;
    *param_2 = (ulonglong)*(uint *)(pcVar3 + 0x14);
  }
  return uVar2;
}


/* ==== FUN_00009fe8 @ 00009fe8 ==== */

undefined8
FUN_00009fe8(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,int *param_5
            )

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = FUN_0000eacc();
  if ((param_3 & 0xffffffff) != 0) {
    uVar4 = (ulonglong)*(ushort *)param_3;
    if ((uVar4 != 0) && ((uVar4 != 1 || (**(char **)((ushort *)param_3 + 2) != '*')))) {
      lVar5 = uVar4 << 1;
      goto LAB_0000a03c;
    }
  }
  lVar5 = 0;
LAB_0000a03c:
  iVar2 = thunk_EXT_FUN_8008b9b0(param_2);
  iVar2 = thunk_EXT_FUN_800644e8(lVar5 + 0x68,0x65446f49,(iVar2 != 1) + '\x01');
  if (iVar2 == 0) {
    uVar1 = 0xffffffffc000009a;
  }
  else {
    thunk_EXT_FUN_8010d110(iVar2,0,0x68);
    thunk_EXT_FUN_8010cc40(iVar2 + 0x10,uVar1,0x58);
    if (lVar5 != 0) {
      *(short *)(iVar2 + 6) = (short)lVar5;
      *(int *)(iVar2 + 8) = iVar2 + 0x68;
      cVar3 = thunk_EXT_FUN_8015b8b0(iVar2 + 4,param_4,param_3);
      if (cVar3 == '\0') {
        return 0xffffffffc000000d;
      }
    }
    *param_5 = iVar2;
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== FUN_0000a0e8 @ 0000a0e8 ==== */

ulonglong FUN_0000a0e8(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_40 [16];
  
  uVar1 = FUN_0000ead0();
  uVar2 = FUN_0000c350(uVar1,local_40);
  if (uVar2 == 0) {
    if ((param_2 & 0xffffffff) == 0) {
      uVar2 = FUN_0000b888(uVar1,0);
      return uVar2;
    }
    lVar3 = FUN_0000afe0(0x460);
    if (lVar3 == 0) {
      return 0x11;
    }
    *(int *)(local_40[0] + 0xc) = (int)lVar3;
    *(int *)(local_40[0] + 0x50) = (int)lVar3 + 0x200;
    *(undefined2 *)((int)param_2 + 0x2c) = 0;
    uVar2 = FUN_0000c970(uVar1,0);
    uVar2 = -(ulonglong)(uVar2 != 4) & uVar2;
    if ((int)uVar2 == 0) {
      FUN_0000b108(uVar1,param_2);
      uVar2 = FUN_0000cb40(uVar1,0);
      uVar2 = -(ulonglong)(uVar2 != 4) & uVar2;
    }
    thunk_EXT_FUN_80064768(lVar3);
  }
  if (((param_2 & 0xffffffff) != 0) && ((int)uVar2 != 0)) {
    *(undefined2 *)((int)param_2 + 0x2c) = 0;
  }
  return uVar2;
}


/* ==== FUN_0000a1d0 @ 0000a1d0 ==== */

void FUN_0000a1d0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  short local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  
  uVar1 = FUN_0000ead8();
  thunk_EXT_FUN_8010d110(&local_2e,0,0xe);
  local_2e = (ushort)((uVar1 & 0xffffffff) >> 5) & 0xf;
  local_30 = ((ushort)((uVar1 & 0xffffffff) >> 9) & 0x7f) + 0x7bc;
  local_2c = (ushort)uVar1 & 0x1f;
  local_2a = (ushort)((param_2 & 0xffffffff) >> 0xb) & 0x1f;
  local_28 = (ushort)((param_2 & 0xffffffff) >> 5) & 0x3f;
  local_26 = (ushort)((param_2 & 0xffffffff) << 1) & 0x3e;
  cVar2 = thunk_EXT_FUN_80089a58(&local_30,param_3);
  if (cVar2 == '\0') {
    *(undefined8 *)param_3 = 0;
  }
  return;
}


/* ==== FUN_0000a250 @ 0000a250 ==== */

void FUN_0000a250(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_0000c350(param_1,auStack_20);
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  return;
}


/* ==== FUN_0000a290 @ 0000a290 ==== */

void FUN_0000a290(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_0000ccc8();
  if ((iVar1 == 0) && (iVar1 = FUN_0000c350(param_1,auStack_20), iVar1 == 0)) {
    *param_1 = 0;
  }
  return;
}


/* ==== FUN_0000a2e0 @ 0000a2e0 ==== */

bool FUN_0000a2e0(uint param_1)

{
  return *(int *)(&DAT_8020300c + (param_1 & 0xff) * 4) == 0;
}


/* ==== FUN_0000a300 @ 0000a300 ==== */

bool FUN_0000a300(uint param_1)

{
  return *(int *)(&DAT_8020300c + (param_1 & 0xff) * 4) == 0;
}


/* ==== FUN_0000a320 @ 0000a320 ==== */

char FUN_0000a320(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  iVar6 = FUN_0000a4d8();
  if (iVar6 != 0) {
    return '\x04';
  }
  sVar4 = CONCAT11(*(undefined1 *)(param_1 + 0x253),*(undefined1 *)(param_1 + 0x252));
  if (sVar4 == -0x55ab) {
    pbVar8 = (byte *)(param_1 + 0x54);
    pbVar7 = &DAT_802024b8;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != (byte *)(param_1 + 0x5f));
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      return '\x01';
    }
  }
  cVar3 = *(char *)(param_1 + 0x54);
  if (((cVar3 == -0x15) || (cVar3 == -0x17)) || (cVar3 == -0x18)) {
    if (sVar4 == -0x55ab) {
      pbVar8 = (byte *)(param_1 + 0xa6);
      pbVar7 = &DAT_802024c4;
      do {
        bVar1 = *pbVar8;
        bVar2 = *pbVar7;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
      } while (pbVar8 != (byte *)(param_1 + 0xae));
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return '\0';
      }
    }
    bVar1 = *(byte *)(param_1 + 0x61);
    uVar5 = CONCAT11(*(undefined1 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x5f));
    if ((((((uVar5 - 1 & uVar5) == 0) && (0x1ff < uVar5)) &&
         ((uVar5 < 0x201 && ((bVar1 != 0 && ((bVar1 - 1 & bVar1) == 0)))))) &&
        ((CONCAT11(*(undefined1 *)(param_1 + 99),*(undefined1 *)(param_1 + 0x62)) != 0 &&
         ((*(byte *)(param_1 + 100) - 1 < 2 &&
          (CONCAT11(*(undefined1 *)(param_1 + 0x66),*(undefined1 *)(param_1 + 0x65)) != 0)))))) &&
       (((0x7f < CONCAT11(*(undefined1 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0x67)) ||
         (0xffff < ((ulonglong)*(byte *)(param_1 + 0x77) << 0x18 |
                    (ulonglong)*(byte *)(param_1 + 0x76) << 0x10 |
                    (ulonglong)*(byte *)(param_1 + 0x75) << 8 | (ulonglong)*(byte *)(param_1 + 0x74)
                   ))) &&
        (CONCAT11(*(undefined1 *)(param_1 + 0x6b),*(undefined1 *)(param_1 + 0x6a)) != 0)))) {
      return '\0';
    }
  }
  return (sVar4 != -0x55ab) + '\x02';
}


/* ==== FUN_0000a4d8 @ 0000a4d8 ==== */

longlong FUN_0000a4d8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_0000ead8();
  lVar3 = 0;
  if ((param_2 != *(longlong *)(iVar1 + 0x20)) && (lVar3 = FUN_0000cf48(), lVar3 == 0)) {
    iVar2 = FUN_0000c710(*(undefined1 *)(iVar1 + 1),iVar1 + 0x54,param_2,1);
    if (iVar2 != 0) {
      param_2 = -1;
      lVar3 = 1;
    }
    *(longlong *)(iVar1 + 0x20) = param_2;
  }
  return lVar3;
}


/* ==== FUN_0000a540 @ 0000a540 ==== */

longlong FUN_0000a540(byte *param_1)

{
  byte bVar1;
  byte *pbVar3;
  ulonglong uVar2;
  byte bVar4;
  byte *pbVar7;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar3 = &DAT_802024d0;
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar7;
    bVar4 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar4 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar7 != param_1 + 0xc);
  if ((((int)((ulonglong)bVar1 - (ulonglong)bVar4) == 0) &&
      (uVar2 = (ulonglong)param_1[0xf] << 0x18 | (ulonglong)param_1[0xe] << 0x10 |
               (ulonglong)param_1[0xd] << 8 | (ulonglong)param_1[0xc], 0x5b < uVar2)) &&
     (uVar2 < 0x201)) {
    uVar5 = 0xffffffffffffffff;
    if (uVar2 != 0) {
      pbVar7 = param_1;
      do {
        bVar1 = 0;
        if ((byte *)0x3 < pbVar7 + (-0x10 - (int)param_1)) {
          bVar1 = *pbVar7;
        }
        bVar4 = 1;
        do {
          uVar6 = (bVar1 & bVar4) != 0 ^ uVar5;
          uVar5 = (uVar6 & 0xffffffff) >> 1;
          if ((uVar6 & 1) != 0) {
            uVar5 = uVar5 ^ 0xedb88320;
          }
          bVar4 = bVar4 << 1;
        } while (bVar4 != 0);
        pbVar7 = pbVar7 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (((~uVar5 & 0xffffffff) ==
         ((ulonglong)param_1[0x13] << 0x18 | (ulonglong)param_1[0x12] << 0x10 |
          (ulonglong)param_1[0x11] << 8 | (ulonglong)param_1[0x10])) &&
       (((ulonglong)param_1[0x57] << 0x18 | (ulonglong)param_1[0x56] << 0x10 |
         (ulonglong)param_1[0x55] << 8 | (ulonglong)param_1[0x54]) == 0x80)) {
      return -((ulonglong)
               (0x80 < ((ulonglong)param_1[0x53] << 0x18 | (ulonglong)param_1[0x52] << 0x10 |
                        (ulonglong)param_1[0x51] << 8 | (ulonglong)param_1[0x50])) - 1);
    }
  }
  return 0;
}


/* ==== FUN_0000a640 @ 0000a640 ==== */

undefined8 FUN_0000a640(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) &&
     ((param_1 < 'a' || ('z' < param_1)))) {
    return 0;
  }
  return 1;
}


/* ==== FUN_0000a688 @ 0000a688 ==== */

undefined8 FUN_0000a688(void)

{
  undefined1 *puVar1;
  char cVar4;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar5;
  undefined1 *puStack_150;
  uint auStack_14c [3];
  undefined1 uStack_140;
  undefined1 auStack_13f [319];
  
  FUN_0000ead0();
  uVar5 = 0;
  uStack_140 = 0;
  puStack_150 = (undefined1 *)0x0;
  auStack_14c[0] = 0;
  thunk_EXT_FUN_8010d110(auStack_13f,0,0x103);
  cVar4 = FUN_000014d0(0xffffffff802024dc,&puStack_150,auStack_14c);
  puVar1 = puStack_150;
  if (cVar4 == '\0') {
    uVar5 = 1;
  }
  else {
    while (((puVar1 != (undefined1 *)0x0 &&
            ((uint)((int)puVar1 - (int)puStack_150) < auStack_14c[0])) &&
           (puVar2 = (undefined1 *)FUN_0000cfd8(puVar1,10), puVar2 != (undefined1 *)0x0))) {
      *puVar2 = 0;
      iVar3 = FUN_0000f358(puVar1);
      if (iVar3 != 0) goto LAB_0000a778;
      thunk_EXT_FUN_8010c7f8(&uStack_140,0x104,0xffffffff802024f4,puVar1);
      iVar3 = FUN_0000f368(&uStack_140,puVar1);
      if (iVar3 == 0) goto LAB_0000a778;
      puVar1 = puVar2 + 1;
    }
    iVar3 = FUN_0000f358(0xffffffff802024dc);
    if (iVar3 == 0) {
      uVar5 = 1;
    }
LAB_0000a778:
    if (puStack_150 != (undefined1 *)0x0) {
      thunk_EXT_FUN_80064768();
    }
  }
  return uVar5;
}


/* ==== FUN_0000a800 @ 0000a800 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0000a800(void)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  undefined8 unaff_r28;
  undefined8 unaff_r29;
  int in_stack_00000050;
  code *in_stack_00000054;
  uint in_stack_00000058;
  
  thunk_EXT_FUN_8007018c(unaff_r29,unaff_r28);
  iVar2 = FUN_0000ed98(0xffffffff802024f8,8,0,&stack0x00000050);
  if (iVar2 == 0) {
    iVar2 = FUN_0000eda8(in_stack_00000050,1,&stack0x00000054);
    if ((iVar2 == 0) && (cVar3 = (*in_stack_00000054)(&stack0x00000058), cVar3 == '\x01')) {
      uVar1 = thunk_EXT_FUN_80070138(0xffffffff80203078);
      if (_DAT_80203074 < in_stack_00000058) {
        _DAT_80203074 = in_stack_00000058;
        DAT_80203070 = 1;
        _DAT_80203fc8 = 3;
      }
      thunk_EXT_FUN_8007018c(0xffffffff80203078,uVar1);
    }
    if (in_stack_00000050 != 0) {
      *(undefined2 *)(in_stack_00000050 + 0x40) = 1;
      FUN_0000ebe8(in_stack_00000050);
    }
  }
  return 0;
}


/* ==== FUN_0000a92c @ 0000a92c ==== */

void FUN_0000a92c(void)

{
  undefined8 unaff_r29;
  undefined8 unaff_r30;
  
  thunk_EXT_FUN_8007018c(unaff_r30,unaff_r29);
  return;
}


/* ==== FUN_0000a940 @ 0000a940 ==== */

void FUN_0000a940(void)

{
  (*(code *)&LAB_8169d44c)();
  return;
}


/* ==== FUN_0000a958 @ 0000a958 ==== */

undefined8 FUN_0000a958(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_0000eac8();
  uVar2 = (*pcRam8020423c)();
  if ((int)uVar2 != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    thunk_EXT_FUN_800718e0();
    thunk_EXT_FUN_80088fa0(iVar1 + 0x10);
    if ((param_4 & 0xffffffff) != 0) {
      *(undefined4 *)param_4 = *(undefined4 *)(iVar1 + 8);
    }
    uVar2 = 0;
    if (((ulonglong)*(uint *)(iVar1 + 8) != 0) &&
       ((ulonglong)*(uint *)(iVar1 + 8) <= (param_3 & 0xffffffff))) {
      thunk_EXT_FUN_8010cc40(param_2,*(undefined4 *)(iVar1 + 0xc));
      uVar2 = 1;
    }
    thunk_EXT_FUN_800890f8(iVar1 + 0x10);
    thunk_EXT_FUN_800718f8();
    *(undefined4 *)(iVar3 + 0x278) = 1;
    FUN_0000f398(iVar3 + 0x310,1,0);
  }
  return uVar2;
}


/* ==== FUN_0000aa08 @ 0000aa08 ==== */

bool FUN_0000aa08(undefined8 param_1)

{
  int iVar1;
  undefined4 local_40 [2];
  undefined2 local_38 [2];
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  
  local_38[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_32 = 0;
  local_2c = 0;
  local_40[0] = 0;
  thunk_EXT_FUN_80086110(local_38,param_1);
  local_28 = 0;
  local_20 = 0x40;
  local_24 = local_38;
  iVar1 = thunk_EXT_FUN_8006caa8(local_40,0xffffffff80100080,&local_28,&local_30,0,0x80,1,1);
  if (iVar1 == 0) {
    thunk_EXT_FUN_80089eb0(local_40[0]);
  }
  return iVar1 == 0;
}


/* ==== FUN_0000aac0 @ 0000aac0 ==== */

void FUN_0000aac0(int param_1,char *param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  iVar1 = 0;
  pcVar2 = param_2;
  do {
    pcVar3 = param_2 + iVar1;
    if (param_2[iVar1] == '\0') break;
    *(char *)(iVar1 + param_1 + 0x10) = *pcVar3;
    if (*pcVar3 == '\\') {
      pcVar2 = pcVar3;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  iVar4 = 0;
  *(undefined1 *)(iVar1 + param_1 + 0x10) = 0;
  if ((param_3 == '\x01') && (param_2 < pcVar2)) {
    iVar1 = (int)pcVar2 - (int)param_2;
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      *(char *)(param_1 + 0x110 + iVar4) = *param_2;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(iVar4 + param_1 + 0x110) = 0;
  return;
}


/* ==== FUN_0000ab50 @ 0000ab50 ==== */

void FUN_0000ab50(void)

{
  (*(code *)&LAB_816a14bc)();
  return;
}


/* ==== FUN_0000abf4 @ 0000abf4 ==== */

undefined8 FUN_0000abf4(void)

{
  return 0;
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
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_0000ead0();
  DAT_80203184 = 0;
  thunk_EXT_FUN_8010d110(0xffffffff80203188,0,0x100);
  lVar4 = FUN_000009c0();
  lVar6 = lVar4 + 0x29;
  if (*(char *)((int)lVar4 + 0x29) != '\0') {
    lVar5 = thunk_EXT_FUN_81722ed0(lVar6);
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      lVar5 = lVar5 + -1;
      if (lVar5 < 0) goto LAB_0000acd0;
      cVar1 = *(char *)((int)lVar6 + (int)lVar5);
    } while (((cVar1 == '.') && (uVar3 = lVar6 + lVar5, (uVar2 & 0xffffffff) == 0)) ||
            (uVar3 = uVar2, cVar1 != '\\'));
    lVar4 = lVar5 + lVar4 + 0x2a;
    if ((lVar4 != 0) && ((uVar2 & 0xffffffff) != 0)) {
      thunk_EXT_FUN_81722fa8(0xffffffff80203188,0xffffffff8020266c,uVar2 - lVar4);
      DAT_80203184 = 1;
      return;
    }
  }
LAB_0000acd0:
  thunk_EXT_FUN_81722ef8(0xffffffff80203188,0xffffffff80202658);
  return;
}


/* ==== FUN_0000ad20 @ 0000ad20 ==== */

void FUN_0000ad20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [32];
  
  FUN_0000d198(auStack_30,auStack_40,param_2);
  thunk_EXT_FUN_817b3d10(param_1,auStack_30);
  return;
}


/* ==== FUN_0000ad68 @ 0000ad68 ==== */

void FUN_0000ad68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [48];
  
  FUN_0000d1e8(auStack_60,auStack_40,0,0,0,param_2);
  uVar1 = thunk_EXT_FUN_817af168(param_1);
  thunk_EXT_FUN_817b3d10(uVar1,auStack_60);
  return;
}


/* ==== FUN_0000adc0 @ 0000adc0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000adc0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar5;
  char cVar6;
  undefined8 uVar4;
  char *pcVar8;
  longlong lVar7;
  int iVar9;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar3 = FUN_0000eac4();
  bVar2 = true;
  if (_DAT_801a5dd4 != 0) {
    iVar9 = 0;
    lVar7 = param_2;
    while( true ) {
      uVar1 = *(ushort *)(*(int *)(_DAT_801a5dd4 + 0x28) + iVar9);
      pcVar8 = (char *)lVar7;
      if ((uVar1 == 0) && (*pcVar8 == '\0')) goto LAB_0000ae5c;
      if ((uVar1 == 0) || (*pcVar8 == '\0')) break;
      cVar5 = thunk_EXT_FUN_800861f0(uVar1 & 0xff);
      cVar6 = thunk_EXT_FUN_800861f0(*pcVar8);
      if (cVar5 != cVar6) break;
      iVar9 = iVar9 + 2;
      lVar7 = lVar7 + 1;
    }
  }
  bVar2 = false;
LAB_0000ae5c:
  if (bVar2) {
    (**(code **)(*(int *)*_DAT_802044c4 + 0x2c))();
  }
  else {
    thunk_EXT_FUN_8010d110(0xffffffff80203080,0,0x104);
    thunk_EXT_FUN_81722e30(0xffffffff80203080,param_2);
    if (*(int *)(*_DAT_802044c4 + 0x504) != 0) {
      (*(code *)&SUB_913e7aa8)(*(int *)(*_DAT_802044c4 + 0x504),2);
    }
    local_50 = thunk_EXT_FUN_816e0bf0(0x12a);
    local_4c = thunk_EXT_FUN_816e0bf0(0x78);
    uVar4 = thunk_EXT_FUN_816e0bf0(0x16);
    uVar3 = thunk_EXT_FUN_817af168(uVar3);
    thunk_EXT_FUN_816cb168(uVar3,param_3,uVar4,2,&local_50,1,0xffffffff801fd238,2);
  }
  return;
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

int FUN_0000af60(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0000b4f0(((ulonglong)*(uint *)(param_1 + 0xa0) + 0x54 & 0x7fffffff) << 1,param_2,
                       *(uint *)(param_1 + 8) & 1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
    thunk_EXT_FUN_8010cc40(iVar1 + 0xa4,param_1 + 0xa4,*(int *)(param_1 + 0xa0) << 1);
    *(int *)(iVar1 + 0x10) = param_1;
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return iVar1;
}


/* ==== FUN_0000afe0 @ 0000afe0 ==== */

void FUN_0000afe0(undefined8 param_1)

{
  thunk_EXT_FUN_800644e8(param_1,0x66467845,2);
  return;
}


/* ==== FUN_0000aff0 @ 0000aff0 ==== */

undefined8 FUN_0000aff0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  uint uVar6;
  ushort *in_stack_0000001c;
  
  puVar5 = (undefined4 *)FUN_0000ead8();
  pcVar2 = (char *)*puVar5;
  while( true ) {
    in_stack_0000001c = (ushort *)param_2;
    if ((*in_stack_0000001c != 0x2f) && (*in_stack_0000001c != 0x5c)) break;
    param_2 = param_2 + 2;
  }
  puVar5[7] = 0;
  puVar5[2] = 0;
  if (*in_stack_0000001c < 0x20) {
    *(undefined1 *)((int)puVar5 + 0x4f) = 0x80;
    uVar4 = FUN_0000b888(puVar5,0);
  }
  else {
    while (uVar4 = FUN_0000d588(puVar5,&stack0x0000001c), (int)uVar4 == 0) {
      bVar1 = *(byte *)((int)puVar5 + 0x4f);
      uVar4 = FUN_0000d2c8(puVar5);
      if ((int)uVar4 != 0) {
        if ((int)uVar4 != 4) {
          return uVar4;
        }
        if ((bVar1 & 4) == 0) {
          return 5;
        }
        return uVar4;
      }
      if ((bVar1 & 4) != 0) {
        return uVar4;
      }
      if ((*(byte *)((int)puVar5 + 6) & 0x10) == 0) {
        return 5;
      }
      if (*pcVar2 == '\x04') {
        FUN_0000b818(puVar5,puVar5);
      }
      else {
        uVar3 = puVar5[0xc] & 0x1ff;
        uVar6 = (uint)CONCAT11(pcVar2[uVar3 + 0x6f],pcVar2[uVar3 + 0x6e]);
        if (*pcVar2 == '\x03') {
          uVar6 = CONCAT22(CONCAT11(pcVar2[uVar3 + 0x69],pcVar2[uVar3 + 0x68]),
                           CONCAT11(pcVar2[uVar3 + 0x6f],pcVar2[uVar3 + 0x6e]));
        }
        puVar5[2] = uVar6;
      }
    }
  }
  return uVar4;
}


/* ==== FUN_0000b108 @ 0000b108 ==== */

void FUN_0000b108(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  short *psVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar6;
  ulonglong uVar5;
  char cVar8;
  short sVar7;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  uint uVar18;
  
  puVar6 = (undefined4 *)FUN_0000ead0();
  pcVar1 = (char *)*puVar6;
  puVar3 = (ulonglong *)param_2;
  *(undefined2 *)((int)puVar3 + 0x2c) = 0;
  if (*(longlong *)(puVar6 + 0xe) != 0) {
    if (*pcVar1 == '\x04') {
      iVar14 = *(int *)(pcVar1 + 0x50);
      uVar9 = 0;
      uVar11 = 0x40;
      uVar13 = 0;
      uVar16 = 0;
      uVar5 = 0;
      if (*(char *)(iVar14 + 0x23) != '\0') {
        do {
          if (0x25f < (uVar11 & 0xffffffff)) {
LAB_0000b1e0:
            uVar13 = 0;
            uVar5 = uVar16;
            break;
          }
          if ((uVar11 & 0x1f) == 0) {
            uVar11 = uVar11 + 2;
          }
          puVar4 = (undefined1 *)(iVar14 + (int)uVar11);
          uVar5 = (ulonglong)CONCAT11(puVar4[1],*puVar4);
          uVar11 = uVar11 + 2;
          uVar9 = uVar9 + 1;
          if (((uVar16 != 0) || (uVar5 < 0xd800)) || (0xdfff < uVar5)) {
            uVar5 = FUN_0000d9c0(uVar16 << 0x10 | uVar5,(uVar13 + 0x16 & 0x7fffffff) * 2 + param_2,
                                 0xff - uVar13);
            if ((uVar5 & 0xffffffff) == 0) goto LAB_0000b1e0;
            uVar13 = uVar5 + uVar13;
            uVar5 = 0;
          }
          iVar14 = *(int *)(pcVar1 + 0x50);
          uVar16 = uVar5;
        } while ((uVar9 & 0xffffffff) < (ulonglong)*(byte *)(iVar14 + 0x23));
      }
      uVar13 = -(ulonglong)(uVar5 == 0) & uVar13;
      if ((uVar13 & 0xffffffff) == 0) {
        uVar13 = 1;
        *(undefined2 *)((int)puVar3 + 0x2c) = 0x3f;
      }
      *(undefined2 *)((int)((uVar13 + 0x16 & 0xffffffff) << 1) + (int)puVar3) = 0;
      *(undefined2 *)((int)puVar3 + 0x12) = 0;
      bVar12 = *(byte *)(*(int *)(pcVar1 + 0x50) + 4);
      *(byte *)(puVar3 + 2) = bVar12 & 0x37;
      if ((bVar12 & 0x10) == 0) {
        uVar16 = LoadDoublewordByteReverseIndexed
                           ((ulonglong)*(uint *)(pcVar1 + 0x50),(ulonglong)*(uint *)(pcVar1 + 0x50),
                            0x38);
      }
      else {
        uVar16 = 0;
      }
      *puVar3 = uVar16;
      *(ushort *)((int)puVar3 + 10) =
           CONCAT11(*(undefined1 *)(*(int *)(pcVar1 + 0x50) + 0xd),
                    *(undefined1 *)(*(int *)(pcVar1 + 0x50) + 0xc));
      *(ushort *)(puVar3 + 1) =
           CONCAT11(*(undefined1 *)(*(int *)(pcVar1 + 0x50) + 0xf),
                    *(undefined1 *)(*(int *)(pcVar1 + 0x50) + 0xe));
      *(ushort *)((int)puVar3 + 0xe) =
           CONCAT11(*(undefined1 *)(*(int *)(pcVar1 + 0x50) + 9),
                    *(undefined1 *)(*(int *)(pcVar1 + 0x50) + 8));
      uVar17 = CONCAT11(*(undefined1 *)(*(int *)(pcVar1 + 0x50) + 0xb),
                        *(undefined1 *)(*(int *)(pcVar1 + 0x50) + 10));
    }
    else {
      if (puVar6[0x14] != -1) {
        psVar2 = *(short **)(pcVar1 + 0xc);
        uVar5 = 0;
        uVar16 = 0;
        if (*psVar2 != 0) {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar16 = (ulonglong)*(ushort *)((int)psVar2 + (int)lVar10);
            lVar10 = lVar10 + 2;
            if (((uVar9 != 0) || (uVar16 < 0xd800)) || (0xdfff < uVar16)) {
              uVar16 = FUN_0000d9c0(uVar9 << 0x10 | uVar16,(uVar5 + 0x16 & 0x7fffffff) * 2 + param_2
                                    ,0xff - uVar5);
              if ((uVar16 & 0xffffffff) == 0) {
                uVar5 = 0;
                uVar16 = uVar9;
                break;
              }
              uVar5 = uVar16 + uVar5;
              uVar16 = 0;
            }
            psVar2 = *(short **)(pcVar1 + 0xc);
            uVar9 = uVar16;
          } while (*(short *)((int)psVar2 + (int)lVar10) != 0);
        }
        *(undefined2 *)
         ((int)(((-(ulonglong)((uVar16 & 0xffff) == 0) & uVar5) + 0x16 & 0xffffffff) << 1) +
         (int)puVar3) = 0;
      }
      uVar16 = 0;
      uVar18 = 0;
      do {
        cVar8 = *(char *)(puVar6[0x10] + uVar18);
        uVar18 = uVar18 + 1;
        if (cVar8 != ' ') {
          if (cVar8 == '\x05') {
            cVar8 = -0x1b;
          }
          if ((uVar18 == 9) && ((uVar16 & 0xffffffff) < 0xc)) {
            uVar5 = uVar16 + 9;
            uVar16 = uVar16 + 1;
            *(undefined2 *)((int)((uVar5 & 0xffffffff) << 1) + (int)puVar3) = 0x2e;
          }
          sVar7 = FUN_0000da38(cVar8,0x1b5);
          if ((sVar7 == 0) ||
             (uVar5 = FUN_0000d9c0(sVar7,(uVar16 + 9 & 0x7fffffff) * 2 + param_2,0xc - uVar16),
             (uVar5 & 0xffffffff) == 0)) {
            uVar16 = 0;
            break;
          }
          uVar16 = uVar5 + uVar16;
        }
      } while (uVar18 < 0xb);
      *(undefined2 *)((int)((uVar16 + 9 & 0xffffffff) << 1) + (int)puVar3) = 0;
      if (*(short *)((int)puVar3 + 0x2c) == 0) {
        if ((uVar16 & 0xffffffff) == 0) {
          iVar14 = 1;
          *(undefined2 *)((int)puVar3 + 0x2c) = 0x3f;
        }
        else {
          param_2 = param_2 + 0x12;
          bVar12 = 8;
          iVar14 = 0;
          uVar15 = *(ushort *)((int)puVar3 + 0x12);
          while (uVar15 != 0) {
            if (uVar15 == 0x2e) {
              bVar12 = 0x10;
            }
            if (((0x40 < uVar15) && (uVar15 < 0x5b)) &&
               ((bVar12 & *(byte *)(puVar6[0x10] + 0xc)) != 0)) {
              uVar15 = uVar15 + 0x20;
            }
            *(ushort *)((int)param_2 + 0x1a) = uVar15;
            iVar14 = iVar14 + 1;
            param_2 = param_2 + 2;
            uVar15 = *(ushort *)param_2;
          }
        }
        *(undefined2 *)((iVar14 + 0x16) * 2 + (int)puVar3) = 0;
        if (*(char *)(puVar6[0x10] + 0xc) == '\0') {
          *(undefined2 *)((int)puVar3 + 0x12) = 0;
        }
      }
      *(byte *)(puVar3 + 2) = *(byte *)(puVar6[0x10] + 0xb) & 0x3f;
      iVar14 = puVar6[0x10];
      *puVar3 = (ulonglong)*(byte *)(iVar14 + 0x1f) << 0x18 |
                (ulonglong)*(byte *)(iVar14 + 0x1e) << 0x10 |
                (ulonglong)*(byte *)(iVar14 + 0x1d) << 8 | (ulonglong)*(byte *)(iVar14 + 0x1c);
      *(ushort *)((int)puVar3 + 10) =
           CONCAT11(*(undefined1 *)(puVar6[0x10] + 0x17),*(undefined1 *)(puVar6[0x10] + 0x16));
      *(ushort *)(puVar3 + 1) =
           CONCAT11(*(undefined1 *)(puVar6[0x10] + 0x19),*(undefined1 *)(puVar6[0x10] + 0x18));
      *(ushort *)((int)puVar3 + 0xe) =
           CONCAT11(*(undefined1 *)(puVar6[0x10] + 0xf),*(undefined1 *)(puVar6[0x10] + 0xe));
      uVar17 = CONCAT11(*(undefined1 *)(puVar6[0x10] + 0x11),*(undefined1 *)(puVar6[0x10] + 0x10));
    }
    *(undefined2 *)((int)puVar3 + 0xc) = uVar17;
  }
  return;
}


/* ==== thunk_EXT_FUN_80064768 @ 0000b4e8 ==== */

void thunk_EXT_FUN_80064768(void)

{
  (*(code *)&LAB_80064768)();
  return;
}


/* ==== FUN_0000b4f0 @ 0000b4f0 ==== */

int FUN_0000b4f0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_0000ead4();
  iVar2 = thunk_EXT_FUN_800644e8(uVar1,0x63467845,((int)(param_2 & 0xff) != 1) + '\x01');
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    thunk_EXT_FUN_8010d110(iVar2,0,uVar1);
    *(undefined4 *)(iVar2 + 0x14) = 1;
    if ((param_2 & 0xff) == 1) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 8;
    }
    thunk_EXT_FUN_80089760(iVar2 + 0x20);
    if ((param_3 & 0xff) == 1) {
      *(int *)(iVar2 + 0x44) = iVar2 + 0x40;
      *(int *)(iVar2 + 0x40) = iVar2 + 0x40;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 1;
    }
  }
  return iVar2;
}


/* ==== FUN_0000b5a0 @ 0000b5a0 ==== */

longlong FUN_0000b5a0(void)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_stack_00000014;
  char *apcStack_100 [4];
  char *apcStack_f0 [16];
  int iStack_b0;
  byte bStack_a1;
  char *apcStack_90 [36];
  
  in_stack_00000014 = FUN_0000eabc();
  lVar2 = FUN_00006b68(&stack0x00000014,apcStack_100,2);
  if (lVar2 != 0) {
    return lVar2;
  }
  apcStack_f0[0] = apcStack_100[0];
  lVar2 = FUN_0000afe0(0x460);
  if (lVar2 == 0) {
    return 0x11;
  }
  *(int *)(apcStack_100[0] + 0xc) = (int)lVar2;
  *(int *)(apcStack_100[0] + 0x50) = (int)lVar2 + 0x200;
  lVar3 = FUN_0000aff0(apcStack_f0,in_stack_00000014);
  if (lVar3 == 0) {
    lVar3 = (-(ulonglong)((bStack_a1 & 0xa0) != 0) & 0xfffffffe) + 8;
  }
  if ((int)lVar3 == 4) {
    apcStack_90[0] = apcStack_100[0];
    uVar4 = FUN_0000c440(apcStack_90,0);
    lVar3 = 0;
    if (uVar4 == 0) {
      lVar3 = 7;
    }
    if ((uVar4 & 0xffffffff) == 1) {
      lVar3 = 2;
    }
    uVar6 = (uint)uVar4;
    if (uVar6 == 0xffffffff) {
      lVar3 = 1;
    }
    uVar5 = FUN_0000bde0();
    if (((int)lVar3 == 0) && (lVar3 = FUN_0000da80(apcStack_100[0],uVar4), lVar3 == 0)) {
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
          *(ushort *)(apcStack_100[0] + 0x68) =
               (ushort)((uVar4 & 0xffffffff) >> 0x10) >> 8 |
               (ushort)(byte)((uVar4 & 0xffffffff) >> 0x10) << 8;
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
      lVar3 = FUN_0000b9c8(apcStack_f0);
      if (lVar3 == 0) {
        if (*apcStack_100[0] == '\x04') {
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 8) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0xc) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0x34) =
               uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00 | uVar6 >> 0x18;
          uVar1 = *(ushort *)(apcStack_100[0] + 10);
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0x38) =
               (uVar1 & 0x7f) << 0x11 | (uVar1 & 0x7f80) << 1 | (uint)(uVar1 >> 0xf);
          uVar1 = *(ushort *)(apcStack_100[0] + 10);
          *(uint *)(*(int *)(apcStack_100[0] + 0x50) + 0x28) =
               (uVar1 & 0x7f) << 0x11 | (uVar1 & 0x7f80) << 1 | (uint)(uVar1 >> 0xf);
          *(undefined1 *)(*(int *)(apcStack_100[0] + 0x50) + 0x21) = 3;
          *(undefined1 *)(*(int *)(apcStack_100[0] + 0x50) + 4) = 0x10;
          lVar3 = FUN_0000be60(apcStack_f0);
        }
        else {
          *(uint *)(iStack_b0 + 0xe) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(uint *)(iStack_b0 + 0x16) =
               uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
          *(ushort *)(iStack_b0 + 0x1a) = (ushort)uVar4 >> 8 | (ushort)(byte)uVar4 << 8;
          if (*apcStack_100[0] == '\x03') {
            *(ushort *)(iStack_b0 + 0x14) =
                 (ushort)((uVar4 & 0xffffffff) >> 0x10) >> 8 |
                 (ushort)(byte)((uVar4 & 0xffffffff) >> 0x10) << 8;
          }
          *(undefined1 *)(iStack_b0 + 0xb) = 0x10;
          apcStack_100[0][4] = '\x01';
        }
        if ((int)lVar3 == 0) {
          lVar3 = FUN_0000dbf0(apcStack_100[0]);
        }
        goto LAB_0000b804;
      }
    }
    FUN_0000bf48(apcStack_90,uVar4,0);
  }
LAB_0000b804:
  thunk_EXT_FUN_80064768(lVar2);
  return lVar3;
}


/* ==== FUN_0000b818 @ 0000b818 ==== */

void FUN_0000b818(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  if (param_2 != 0) {
    param_1[8] = *(int *)(param_2 + 8);
    param_1[9] = (uint)*(undefined8 *)(param_2 + 0x10) & 0xffffff00 | (uint)*(byte *)(param_2 + 7);
    param_1[10] = *(int *)(param_2 + 0x50);
  }
  iVar2 = *(int *)(iVar1 + 0x50);
  param_1[2] = (uint)*(byte *)(iVar2 + 0x37) << 0x18 | (uint)*(byte *)(iVar2 + 0x36) << 0x10 |
               (uint)*(byte *)(iVar2 + 0x35) << 8 | (uint)*(byte *)(iVar2 + 0x34);
  uVar3 = LoadDoublewordByteReverseIndexed
                    ((ulonglong)*(uint *)(iVar1 + 0x50),(ulonglong)*(uint *)(iVar1 + 0x50),0x38);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(byte *)((int)param_1 + 7) = *(byte *)(*(int *)(iVar1 + 0x50) + 0x21) & 2;
  param_1[7] = 0;
  return;
}


/* ==== FUN_0000b888 @ 0000b888 ==== */

undefined8 FUN_0000b888(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar3 = (undefined4 *)FUN_0000ead4();
  pbVar2 = (byte *)*puVar3;
  uVar5 = 0x10000000;
  if (*pbVar2 != 4) {
    uVar5 = 0x200000;
  }
  if (uVar5 <= (param_2 & 0xffffffff)) {
    return 2;
  }
  if ((param_2 & 0x1f) != 0) {
    return 2;
  }
  uVar4 = puVar3[2];
  uVar5 = (ulonglong)uVar4;
  puVar3[0xc] = (int)param_2;
  if (uVar5 == 0) {
    if (2 < *pbVar2) {
      uVar5 = *(ulonglong *)(pbVar2 + 0x38) & 0xffffffff;
      uVar4 = (uint)*(ulonglong *)(pbVar2 + 0x38);
      *(undefined1 *)((int)puVar3 + 7) = 0;
      if (uVar5 != 0) goto LAB_0000b90c;
    }
    if ((ulonglong)*(ushort *)(pbVar2 + 8) <= (param_2 & 0xffffffff) >> 5) {
      return 2;
    }
    lVar6 = *(longlong *)(pbVar2 + 0x38);
  }
  else {
LAB_0000b90c:
    uVar1 = *(ushort *)(pbVar2 + 10);
    for (; uVar4 = (uint)uVar5, (ulonglong)uVar1 * 0x200 <= (param_2 & 0xffffffff);
        param_2 = param_2 + (ulonglong)uVar1 * -0x200) {
      uVar5 = FUN_0000c140(puVar3);
      if ((int)uVar5 == -1) {
        return 1;
      }
      if ((uVar5 & 0xffffffff) < 2) {
        return 2;
      }
      if ((ulonglong)*(uint *)(pbVar2 + 0x18) <= (uVar5 & 0xffffffff)) {
        return 2;
      }
    }
    if ((uVar5 - 2 & 0xffffffff) < (ulonglong)(*(int *)(pbVar2 + 0x18) - 2)) {
      lVar6 = (ulonglong)*(ushort *)(pbVar2 + 10) * (uVar5 - 2 & 0xffffffff) +
              *(longlong *)(pbVar2 + 0x40);
    }
    else {
      lVar6 = 0;
    }
  }
  *(longlong *)(puVar3 + 0xe) = lVar6;
  puVar3[0xd] = uVar4;
  if (lVar6 == 0) {
    return 2;
  }
  *(ulonglong *)(puVar3 + 0xe) = (param_2 >> 9 & 0x7fffff) + lVar6;
  puVar3[0x10] = pbVar2 + ((uint)param_2 & 0x1ff) + 0x54;
  return 0;
}


/* ==== FUN_0000b9c8 @ 0000b9c8 ==== */

longlong FUN_0000b9c8(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar6;
  longlong lVar5;
  ushort *puVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  byte bVar13;
  byte *pbVar12;
  byte *pbVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_d0 [11];
  byte local_c5;
  undefined4 local_c0;
  undefined1 local_b9;
  undefined4 local_b8;
  ulonglong local_b0;
  undefined4 local_a4;
  undefined4 local_70;
  
  puVar6 = (undefined4 *)FUN_0000eab4();
  pcVar1 = (char *)*puVar6;
  pbVar14 = (byte *)((int)puVar6 + 0x4f);
  if ((*(byte *)((int)puVar6 + 0x4f) & 0xa0) != 0) {
    return 6;
  }
  piVar15 = (int *)(pcVar1 + 0xc);
  iVar18 = 0;
  if (**(short **)(pcVar1 + 0xc) != 0) {
    iVar11 = 0;
    do {
      iVar11 = iVar11 + 2;
      iVar18 = iVar18 + 1;
    } while (*(short *)(iVar11 + *piVar15) != 0);
  }
  if (*pcVar1 == '\x04') {
    uVar17 = (iVar18 + 0xeU) / 0xf;
    lVar5 = FUN_0000dd40(puVar6,uVar17 + 2);
    if ((int)lVar5 != 0) {
      return lVar5;
    }
    puVar6[0x14] = puVar6[0xc] + (uVar17 + 1) * -0x20;
    if ((*(byte *)((int)puVar6 + 7) & 4) != 0) {
      bVar13 = *(byte *)((int)puVar6 + 7) & 0xfb;
      *(byte *)((int)puVar6 + 7) = bVar13;
      if (bVar13 == 3) {
        uVar4 = (ulonglong)(uint)puVar6[2];
        for (uVar19 = (ulonglong)(uint)puVar6[6]; uVar19 != 0; uVar19 = uVar19 - 1) {
          lVar5 = FUN_0000ddf8(*puVar6,uVar4,uVar4 + 1);
          if ((int)lVar5 != 0) goto LAB_0000bacc;
          uVar4 = uVar4 + 1;
        }
        *(undefined1 *)((int)puVar6 + 7) = 0;
      }
      lVar5 = 0;
LAB_0000bacc:
      if ((int)lVar5 != 0) {
        return lVar5;
      }
      lVar5 = FUN_0000c3c8(puVar6,puVar6[0xd],0xffffffffffffffff);
      if ((int)lVar5 != 0) {
        return lVar5;
      }
      if (puVar6[2] != 0) {
        local_70 = puVar6[10];
        local_c0 = *puVar6;
        local_b8 = puVar6[8];
        local_b0 = (ulonglong)(uint)puVar6[9] & 0xffffffffffffff00;
        local_a4 = 0;
        local_b9 = (undefined1)puVar6[9];
        lVar5 = FUN_0000b888(&local_c0);
        if ((int)lVar5 != 0) {
          return lVar5;
        }
        lVar5 = FUN_0000df88(&local_c0);
        if ((int)lVar5 != 0) {
          return lVar5;
        }
        lVar5 = (ulonglong)*(ushort *)(pcVar1 + 10) * 0x200 + *(longlong *)(puVar6 + 4);
        *(longlong *)(puVar6 + 4) = lVar5;
        uVar3 = StoreDoublewordByteReverseIndexed(lVar5,(ulonglong)*(uint *)(pcVar1 + 0x50),0x38);
        *(undefined8 *)(*(uint *)(pcVar1 + 0x50) + 0x38) = uVar3;
        uVar3 = StoreDoublewordByteReverseIndexed
                          (*(undefined8 *)(puVar6 + 4),(ulonglong)*(uint *)(pcVar1 + 0x50),0x28);
        *(undefined8 *)(*(uint *)(pcVar1 + 0x50) + 0x28) = uVar3;
        *(byte *)(*(int *)(pcVar1 + 0x50) + 0x21) = *(byte *)((int)puVar6 + 7) | 1;
        lVar5 = FUN_0000be60(&local_c0);
        if ((int)lVar5 != 0) {
          return lVar5;
        }
      }
    }
    FUN_0000e138(*(undefined4 *)(pcVar1 + 0x50),*piVar15);
    return 0;
  }
  puVar16 = puVar6 + 0x11;
  thunk_EXT_FUN_8010cc40(auStack_d0,puVar16,0xc);
  if ((local_c5 & 1) != 0) {
    uVar17 = 1;
    *pbVar14 = 0x40;
    do {
      FUN_0000e248(puVar16,auStack_d0,*piVar15,uVar17 & 0xffff);
      lVar5 = FUN_0000d2c8(puVar6);
      if ((int)lVar5 != 0) break;
      uVar17 = uVar17 + 1;
    } while (uVar17 < 100);
    if (uVar17 == 100) {
      return 7;
    }
    if ((int)lVar5 != 4) {
      return lVar5;
    }
    *pbVar14 = local_c5;
  }
  if ((local_c5 & 2) == 0) {
    iVar18 = 1;
  }
  else {
    iVar18 = (iVar18 + 0xcU) / 0xd + 1;
  }
  lVar5 = FUN_0000dd40(puVar6,iVar18);
  if (lVar5 == 0) {
    uVar17 = iVar18 - 1;
    if (uVar17 != 0) {
      lVar5 = FUN_0000b888(puVar6,puVar6[0xc] + (uVar17 & 0x7ffffff) * -0x20);
      if (lVar5 != 0) {
        return lVar5;
      }
      pbVar12 = (byte *)((int)puVar6 + 0x43);
      uVar19 = 0;
      lVar5 = 0xb;
      do {
        pbVar12 = pbVar12 + 1;
        uVar19 = (uVar19 & 1) * 0x80 + (uVar19 >> 1 & 0x7f) + (ulonglong)*pbVar12;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      do {
        lVar5 = FUN_0000a4d8(pcVar1,*(undefined8 *)(puVar6 + 0xe));
        if (lVar5 != 0) {
          return lVar5;
        }
        puVar2 = (undefined1 *)puVar6[0x10];
        uVar8 = uVar17 & 0xff;
        iVar18 = *piVar15;
        lVar5 = 0xd;
        iVar10 = (uVar8 - 1) * 0xd;
        puVar2[0xb] = 0xf;
        puVar2[0xd] = (char)uVar19;
        puVar2[0xc] = 0;
        *(undefined2 *)(puVar2 + 0x1a) = 0;
        iVar11 = 0;
        puVar7 = (ushort *)((uVar8 - 1) * 0x1a + iVar18 + -2);
        uVar9 = 0;
        do {
          if (uVar9 != 0xffff) {
            puVar7 = puVar7 + 1;
            uVar9 = *puVar7;
            iVar10 = iVar10 + 1;
          }
          *(ushort *)(puVar2 + *(byte *)(iVar11 + -0x7fdfe400)) = uVar9 >> 8 | uVar9 << 8;
          if (uVar9 == 0) {
            uVar9 = 0xffff;
          }
          iVar11 = iVar11 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if ((uVar9 == 0xffff) || (*(short *)(iVar10 * 2 + iVar18) == 0)) {
          uVar8 = uVar8 | 0x40;
        }
        *puVar2 = (char)uVar8;
        pcVar1[4] = '\x01';
        lVar5 = FUN_0000cb40(puVar6,0);
        if (lVar5 != 0) {
          return lVar5;
        }
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    lVar5 = FUN_0000a4d8(pcVar1,*(undefined8 *)(puVar6 + 0xe));
    if (lVar5 == 0) {
      thunk_EXT_FUN_8010d110(puVar6[0x10],0,0x20);
      thunk_EXT_FUN_8010cc40(puVar6[0x10],puVar16,0xb);
      *(byte *)(puVar6[0x10] + 0xc) = *pbVar14 & 0x18;
      pcVar1[4] = '\x01';
    }
  }
  return lVar5;
}


/* ==== FUN_0000bde0 @ 0000bde0 ==== */

ulonglong FUN_0000bde0(void)

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
  return (((((ulonglong)local_1e & 0x7ff) << 5 | (ulonglong)local_1c) << 5 | (ulonglong)local_1a) <<
          6 | (ulonglong)local_18) << 5 | ((ulonglong)local_20 - 0x3c & 0x7f) << 0x19 |
         (ulonglong)(local_16 >> 1);
}


/* ==== FUN_0000be60 @ 0000be60 ==== */

longlong FUN_0000be60(void)

{
  int *piVar2;
  longlong lVar1;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar7;
  int iVar8;
  ushort uVar6;
  
  piVar2 = (int *)FUN_0000ead0();
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  iVar8 = *(int *)(*piVar2 + 0x50);
  iVar3 = *(byte *)(iVar8 + 1) + 1;
  if (iVar3 != 0) {
    do {
      if (uVar4 == 2) {
        uVar4 = 3;
      }
      else {
        uVar5 = (ulonglong)*(byte *)(uVar4 + iVar8) + (uVar5 & 1) * 0x8000 + (uVar5 >> 1 & 0x7fff);
      }
      uVar6 = (ushort)uVar5;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(iVar3 * 0x20));
  }
  *(ushort *)(iVar8 + 2) = uVar6 >> 8 | uVar6 << 8;
  lVar7 = (ulonglong)*(byte *)(iVar8 + 1) + 1;
  lVar1 = FUN_0000b888(piVar2,piVar2[0x14]);
  while (lVar1 == 0) {
    lVar1 = FUN_0000a4d8(*piVar2,*(undefined8 *)(piVar2 + 0xe));
    if (lVar1 != 0) break;
    thunk_EXT_FUN_8010cc40(piVar2[0x10],iVar8,0x20);
    lVar7 = lVar7 + -1;
    *(undefined1 *)(*piVar2 + 4) = 1;
    if (lVar7 == 0) goto LAB_0000bf3c;
    iVar8 = iVar8 + 0x20;
    lVar1 = FUN_0000cb40(piVar2,0);
  }
  lVar7 = 2;
  if ((int)lVar1 == 1) {
LAB_0000bf3c:
    lVar7 = lVar1;
  }
  return lVar7;
}


/* ==== FUN_0000bf48 @ 0000bf48 ==== */

undefined8 FUN_0000bf48(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined4 *puVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar6;
  ulonglong uVar7;
  
  puVar5 = (undefined4 *)FUN_0000eac8();
  pcVar1 = (char *)*puVar5;
  if (((param_2 & 0xffffffff) < 2) ||
     ((ulonglong)*(uint *)(pcVar1 + 0x18) <= (param_2 & 0xffffffff))) {
    return 2;
  }
  uVar7 = param_2;
  if (((param_3 & 0xffffffff) != 0) &&
     (((*pcVar1 != '\x04' || (*(char *)((int)puVar5 + 7) != '\x02')) &&
      (uVar2 = FUN_0000ddf8(pcVar1,param_3,0xffffffffffffffff), (int)uVar2 != 0)))) {
    return uVar2;
  }
  do {
    uVar3 = FUN_0000c140(puVar5,uVar7);
    if (uVar3 == 0) break;
    if ((uVar3 & 0xffffffff) == 1) {
      return 2;
    }
    if ((int)uVar3 == -1) {
      return 1;
    }
    if ((*pcVar1 != '\x04') && (uVar2 = FUN_0000ddf8(pcVar1,uVar7,0), (int)uVar2 != 0)) {
      return uVar2;
    }
    if (*(uint *)(pcVar1 + 0x14) < *(int *)(pcVar1 + 0x18) - 2U) {
      *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) + 1;
      pcVar1[5] = pcVar1[5] | 1;
    }
    uVar4 = param_2;
    if ((((uVar7 + 1 & 0xffffffff) != (uVar3 & 0xffffffff)) && (uVar4 = uVar3, *pcVar1 == '\x04'))
       && (uVar2 = FUN_0000e378(pcVar1,param_2,(uVar7 - param_2) + 1,0), (int)uVar2 != 0)) {
      return uVar2;
    }
    param_2 = uVar4;
    uVar7 = uVar3;
  } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(pcVar1 + 0x18));
  if (*pcVar1 == '\x04') {
    if ((param_3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      if (*(char *)((int)puVar5 + 7) == '\0') {
        uVar3 = (ulonglong)(uint)puVar5[2];
        uVar7 = uVar3;
        if (uVar3 != (param_3 & 0xffffffff)) {
          do {
            uVar4 = FUN_0000c140(puVar5,uVar3);
            if ((uVar4 & 0xffffffff) < 2) {
              return 2;
            }
            if ((int)uVar4 == -1) {
              return 1;
            }
          } while (((uVar4 & 0xffffffff) == (uVar7 + 1 & 0xffffffff)) &&
                  (uVar3 = uVar3 + 1, uVar7 = uVar7 + 1,
                  (uVar3 & 0xffffffff) != (param_3 & 0xffffffff)));
          if ((uVar3 & 0xffffffff) != (param_3 & 0xffffffff)) {
            return 0;
          }
        }
      }
      else {
        if (*(char *)((int)puVar5 + 7) != '\x03') {
          return 0;
        }
        if ((param_3 & 0xffffffff) < (ulonglong)(uint)puVar5[2]) {
          return 0;
        }
        if ((ulonglong)(uint)(puVar5[6] + puVar5[2]) < (param_3 & 0xffffffff)) {
          return 0;
        }
      }
      uVar6 = 2;
    }
    *(undefined1 *)((int)puVar5 + 7) = uVar6;
  }
  return 0;
}


/* ==== FUN_0000c140 @ 0000c140 ==== */

ulonglong FUN_0000c140(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  
  puVar6 = (undefined4 *)FUN_0000ead0();
  pcVar4 = (char *)*puVar6;
  if ((1 < (param_2 & 0xffffffff)) && ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(pcVar4 + 0x18))
     ) {
    cVar2 = *pcVar4;
    if (cVar2 == '\x01') {
      uVar8 = ((param_2 & 0xffffffff) >> 1) + param_2;
      iVar7 = FUN_0000a4d8(pcVar4,(uVar8 >> 9 & 0x7fffff) + *(longlong *)(pcVar4 + 0x30));
      if (iVar7 != 0) {
        return 0xffffffffffffffff;
      }
      bVar3 = pcVar4[((uint)uVar8 & 0x1ff) + 0x54];
      iVar7 = FUN_0000a4d8(pcVar4,(uVar8 + 1 >> 9 & 0x7fffff) + *(longlong *)(pcVar4 + 0x30));
      if (iVar7 == 0) {
        if ((param_2 & 1) == 0) {
          return ((ulonglong)(byte)pcVar4[((uint)(uVar8 + 1) & 0x1ff) + 0x54] & 0xf) << 8 |
                 (ulonglong)bVar3;
        }
        return (ulonglong)(ushort)(CONCAT11(pcVar4[((uint)(uVar8 + 1) & 0x1ff) + 0x54],bVar3) >> 4);
      }
      return 0xffffffffffffffff;
    }
    if (cVar2 == '\x02') {
      iVar7 = FUN_0000a4d8(pcVar4,(param_2 >> 8 & 0xffffff) + *(longlong *)(pcVar4 + 0x30));
      if (iVar7 == 0) {
        uVar5 = (uint)((param_2 & 0xffffffff) << 1) & 0x1fe;
        return (ulonglong)CONCAT11(pcVar4[uVar5 + 0x55],pcVar4[uVar5 + 0x54]);
      }
      return 0xffffffffffffffff;
    }
    if (cVar2 == '\x03') {
      iVar7 = FUN_0000a4d8(pcVar4,(param_2 >> 7 & 0x1ffffff) + *(longlong *)(pcVar4 + 0x30));
      if (iVar7 == 0) {
        uVar5 = (uint)((param_2 & 0xffffffff) << 2) & 0x1fc;
        return ((ulonglong)(byte)pcVar4[uVar5 + 0x57] & 0xf) << 0x18 |
               (ulonglong)(byte)pcVar4[uVar5 + 0x56] << 0x10 |
               (ulonglong)(byte)pcVar4[uVar5 + 0x55] << 8 | (ulonglong)(byte)pcVar4[uVar5 + 0x54];
      }
      return 0xffffffffffffffff;
    }
    if ((cVar2 == '\x04') &&
       (((*(longlong *)(puVar6 + 4) != 0 && (puVar6[2] != 0)) ||
        (*(char *)((int)puVar6 + 7) == '\0')))) {
      cVar2 = *(char *)((int)puVar6 + 7);
      trapDoubleWordImmediate(6,(ulonglong)*(ushort *)(pcVar4 + 10),0);
      uVar8 = (*(longlong *)(puVar6 + 4) - 1U >> 9) / (ulonglong)*(ushort *)(pcVar4 + 10) &
              0xffffffff;
      if ((cVar2 == '\x02') && (uVar1 = param_2 - (uint)puVar6[2] & 0xffffffff, uVar1 <= uVar8)) {
        if (uVar1 != uVar8) {
LAB_0000c1f8:
          return param_2 + 1;
        }
      }
      else {
        if ((cVar2 == '\x03') &&
           ((param_2 - (uint)puVar6[2] & 0xffffffff) < (ulonglong)(uint)puVar6[6]))
        goto LAB_0000c1f8;
        if (cVar2 == '\x02') {
          return 1;
        }
        if (puVar6[7] == 0) {
          iVar7 = FUN_0000a4d8(pcVar4,(param_2 >> 7 & 0x1ffffff) + *(longlong *)(pcVar4 + 0x30));
          if (iVar7 == 0) {
            uVar5 = (uint)((param_2 & 0xffffffff) << 2) & 0x1fc;
            return ((ulonglong)(byte)pcVar4[uVar5 + 0x57] & 0x7f) << 0x18 |
                   (ulonglong)(byte)pcVar4[uVar5 + 0x56] << 0x10 |
                   (ulonglong)(byte)pcVar4[uVar5 + 0x55] << 8 |
                   (ulonglong)(byte)pcVar4[uVar5 + 0x54];
          }
          return 0xffffffffffffffff;
        }
      }
      return 0x7fffffff;
    }
  }
  return 1;
}


/* ==== FUN_0000c350 @ 0000c350 ==== */

undefined8 FUN_0000c350(undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined4 *)FUN_0000ead8();
  uVar5 = 9;
  if (((puVar3 != (undefined4 *)0x0) && (pcVar1 = (char *)*puVar3, pcVar1 != (char *)0x0)) &&
     (*pcVar1 != '\0')) {
    if ((*(short *)(puVar3 + 1) == *(short *)(pcVar1 + 6)) &&
       (uVar2 = FUN_0000a2e0(pcVar1[1]), (uVar2 & 1) == 0)) {
      uVar4 = *puVar3;
      uVar5 = 0;
      goto LAB_0000c3b8;
    }
  }
  uVar4 = 0;
LAB_0000c3b8:
  *param_2 = uVar4;
  return uVar5;
}


/* ==== FUN_0000c3c8 @ 0000c3c8 ==== */

undefined8 FUN_0000c3c8(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined4 *)FUN_0000ead8();
  while( true ) {
    if (puVar2[7] == 0) {
      return 0;
    }
    uVar4 = (ulonglong)(uint)puVar2[7];
    lVar3 = param_3;
    if (1 < uVar4) {
      lVar3 = (param_2 - uVar4) + 2;
    }
    uVar1 = FUN_0000ddf8(*puVar2,(param_2 - uVar4) + 1,lVar3);
    if ((int)uVar1 != 0) break;
    puVar2[7] = puVar2[7] + -1;
  }
  return uVar1;
}


/* ==== FUN_0000c440 @ 0000c440 ==== */

ulonglong FUN_0000c440(undefined8 param_1,ulonglong param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar6;
  ulonglong uVar4;
  int iVar7;
  ulonglong uVar5;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar6 = (undefined4 *)FUN_0000eac8();
  pcVar1 = (char *)*puVar6;
  if ((param_2 & 0xffffffff) == 0) {
    uVar9 = (ulonglong)*(uint *)(pcVar1 + 0x10);
    if ((uVar9 == 0) || (*(uint *)(pcVar1 + 0x18) <= uVar9)) {
      uVar9 = 1;
    }
LAB_0000c4c0:
    if (*(int *)(pcVar1 + 0x14) != 0) {
      if (*pcVar1 == '\x04') {
        uVar4 = FUN_0000e450(pcVar1,uVar9,1);
        if (uVar4 == 0) {
          return 0;
        }
        if ((int)uVar4 == -1) {
          return uVar4;
        }
        iVar7 = FUN_0000e378(pcVar1,uVar4,1,1);
        if (iVar7 == 2) {
          return 1;
        }
        if (iVar7 != 1) {
          if ((param_2 & 0xffffffff) == 0) {
            *(undefined1 *)((int)puVar6 + 7) = 2;
          }
          else if ((*(char *)((int)puVar6 + 7) == '\x02') &&
                  ((uVar4 & 0xffffffff) != (uVar9 + 1 & 0xffffffff))) {
            *(undefined1 *)((int)puVar6 + 7) = 3;
            puVar6[6] = (int)uVar9 - puVar6[2];
          }
          if (*(char *)((int)puVar6 + 7) != '\x02') {
            iVar2 = puVar6[7];
            if ((uVar4 & 0xffffffff) == (param_2 + 1 & 0xffffffff)) {
              iVar8 = iVar2 + 1;
              if (iVar2 == 0) {
                iVar8 = 2;
              }
              puVar6[7] = iVar8;
            }
            else {
              if (iVar2 == 0) {
                puVar6[7] = 1;
              }
              iVar7 = FUN_0000c3c8(puVar6,param_2,uVar4);
              if (iVar7 != 0) goto LAB_0000c6f0;
              puVar6[7] = 1;
            }
          }
LAB_0000c6b0:
          if (iVar7 == 0) {
LAB_0000c6b8:
            uVar3 = *(uint *)(pcVar1 + 0x14);
            *(int *)(pcVar1 + 0x10) = (int)uVar4;
            if (uVar3 == 0) {
              return uVar4;
            }
            if (uVar3 <= *(int *)(pcVar1 + 0x18) - 2U) {
              *(uint *)(pcVar1 + 0x14) = uVar3 - 1;
              pcVar1[5] = pcVar1[5] | 1;
              return uVar4;
            }
            return uVar4;
          }
LAB_0000c6f0:
          if (iVar7 != 1) {
            return 1;
          }
          return 0xffffffffffffffff;
        }
        goto LAB_0000c4a8;
      }
      uVar10 = uVar9;
      if ((uVar9 & 0xffffffff) == (param_2 & 0xffffffff)) {
        uVar4 = uVar9 + 1;
        if ((ulonglong)*(uint *)(pcVar1 + 0x18) <= (uVar4 & 0xffffffff)) {
          uVar4 = 2;
        }
        uVar5 = FUN_0000c140(puVar6,uVar4);
        if ((uVar5 & 0xffffffff) == 1) {
          return uVar5;
        }
        if ((int)uVar5 == -1) {
          return uVar5;
        }
        if ((uVar5 & 0xffffffff) == 0) {
          if ((uVar4 & 0xffffffff) != 0) {
LAB_0000c680:
            iVar7 = FUN_0000ddf8(pcVar1,uVar4,0xffffffffffffffff);
            if (iVar7 != 0) goto LAB_0000c6f0;
            if ((param_2 & 0xffffffff) == 0) goto LAB_0000c6b8;
            iVar7 = FUN_0000ddf8(pcVar1,param_2,uVar4);
            goto LAB_0000c6b0;
          }
        }
        else {
          uVar4 = (ulonglong)*(uint *)(pcVar1 + 0x10);
          if ((1 < uVar4) && (uVar4 < *(uint *)(pcVar1 + 0x18))) {
            uVar9 = uVar4;
            uVar10 = uVar4;
          }
        }
      }
      do {
        uVar4 = uVar9 + 1;
        if (((ulonglong)*(uint *)(pcVar1 + 0x18) <= (uVar4 & 0xffffffff)) &&
           (uVar4 = 2, (uVar10 & 0xffffffff) < 2)) break;
        uVar9 = FUN_0000c140(puVar6,uVar4);
        if ((uVar9 & 0xffffffff) == 0) goto LAB_0000c680;
        if ((uVar9 & 0xffffffff) == 1) {
          return uVar9;
        }
        if ((int)uVar9 == -1) {
          return uVar9;
        }
        uVar9 = uVar4;
      } while ((uVar4 & 0xffffffff) != (uVar10 & 0xffffffff));
    }
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0000c140(puVar6,param_2);
    if ((uVar4 & 0xffffffff) < 2) {
      return 1;
    }
    if ((int)uVar4 != -1) {
      uVar9 = param_2;
      if ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(pcVar1 + 0x18)) {
        return uVar4;
      }
      goto LAB_0000c4c0;
    }
LAB_0000c4a8:
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}


/* ==== FUN_0000c710 @ 0000c710 ==== */

undefined8 FUN_0000c710(byte param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_10 [2];
  
  iVar3 = *(int *)(&DAT_8020300c + (uint)param_1 * 4);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff80202680;
LAB_0000c7e0:
    thunk_EXT_FUN_80085ee8(uVar4,param_1);
    thunk_EXT_FUN_80085ea0();
    uVar4 = 4;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x18);
    uVar2 = *(uint *)(iVar3 + 0x20);
    param_1 = *(byte *)(*(int *)(iVar1 + 0xa0) + 0x1c);
    if (param_1 == 7) {
      local_10[0] = (ulonglong)uVar2 * param_3;
    }
    else {
      if (param_1 != 0x2d) {
        uVar4 = 0xffffffff802026e4;
        goto LAB_0000c7e0;
      }
      local_10[0] = (*(longlong *)(iVar1 + 0xa8) + param_3) * (ulonglong)uVar2;
    }
    lVar5 = thunk_EXT_FUN_8006b928
                      (2,*(undefined4 *)(iVar1 + 0xa0),param_2,
                       (longlong)(int)uVar2 * (longlong)param_4,local_10);
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((int)lVar5 != -0x3ffffff0) {
        thunk_EXT_FUN_80085ee8(0xffffffff802026b0);
        thunk_EXT_FUN_80085ea0();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* ==== FUN_0000c800 @ 0000c800 ==== */

void FUN_0000c800(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar6;
  ulonglong uVar5;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  piVar6 = (int *)FUN_0000eac8();
  iVar2 = *piVar6;
  puVar4 = (undefined8 *)param_2;
  *(undefined2 *)((int)puVar4 + 0x2c) = 0;
  uVar10 = 0x40;
  uVar9 = 0;
  uVar11 = 0;
  iVar3 = *(int *)(iVar2 + 0x50);
  uVar8 = 0;
  uVar5 = 0;
  if (*(char *)(iVar3 + 0x23) != '\0') {
    do {
      if (0x25f < uVar10) {
LAB_0000c8bc:
        uVar11 = 0;
        uVar5 = uVar8;
        break;
      }
      if ((uVar10 & 0x1f) == 0) {
        uVar10 = uVar10 + 2;
      }
      uVar5 = (ulonglong)
              CONCAT11(((undefined1 *)(iVar3 + uVar10))[1],*(undefined1 *)(iVar3 + uVar10));
      uVar10 = uVar10 + 2;
      uVar9 = uVar9 + 1;
      if (((uVar8 != 0) || (uVar5 < 0xd800)) || (0xdfff < uVar5)) {
        uVar5 = FUN_0000d9c0(uVar8 << 0x10 | uVar5,(uVar11 + 0x16 & 0x7fffffff) * 2 + param_2,
                             0xff - uVar11);
        if ((uVar5 & 0xffffffff) == 0) goto LAB_0000c8bc;
        uVar11 = uVar5 + uVar11;
        uVar5 = 0;
      }
      iVar3 = *(int *)(iVar2 + 0x50);
      uVar8 = uVar5;
    } while (uVar9 < *(byte *)(iVar3 + 0x23));
  }
  uVar11 = -(ulonglong)(uVar5 == 0) & uVar11;
  if ((uVar11 & 0xffffffff) == 0) {
    uVar11 = 1;
    *(undefined2 *)((int)puVar4 + 0x2c) = 0x3f;
  }
  *(undefined2 *)((int)((uVar11 + 0x16 & 0xffffffff) << 1) + (int)puVar4) = 0;
  *(undefined2 *)((int)puVar4 + 0x12) = 0;
  bVar1 = *(byte *)(*(int *)(iVar2 + 0x50) + 4);
  *(byte *)(puVar4 + 2) = bVar1 & 0x37;
  if ((bVar1 & 0x10) == 0) {
    uVar7 = LoadDoublewordByteReverseIndexed
                      ((ulonglong)*(uint *)(iVar2 + 0x50),(ulonglong)*(uint *)(iVar2 + 0x50),0x38);
  }
  else {
    uVar7 = 0;
  }
  *puVar4 = uVar7;
  *(ushort *)((int)puVar4 + 10) =
       CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x50) + 0xd),
                *(undefined1 *)(*(int *)(iVar2 + 0x50) + 0xc));
  *(ushort *)(puVar4 + 1) =
       CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x50) + 0xf),
                *(undefined1 *)(*(int *)(iVar2 + 0x50) + 0xe));
  *(ushort *)((int)puVar4 + 0xe) =
       CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x50) + 9),
                *(undefined1 *)(*(int *)(iVar2 + 0x50) + 8));
  *(ushort *)((int)puVar4 + 0xc) =
       CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x50) + 0xb),
                *(undefined1 *)(*(int *)(iVar2 + 0x50) + 10));
  return;
}


/* ==== FUN_0000c970 @ 0000c970 ==== */

undefined8 FUN_0000c970(undefined8 param_1,uint param_2)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  
  puVar5 = (undefined4 *)FUN_0000ead0();
  uVar4 = 4;
  bVar11 = 0xff;
  uVar10 = 0xff;
  pcVar2 = (char *)*puVar5;
  if (*(longlong *)(puVar5 + 0xe) != 0) {
    while (uVar4 = FUN_0000a4d8(pcVar2,*(undefined8 *)(puVar5 + 0xe)), (int)uVar4 == 0) {
      pbVar8 = (byte *)puVar5[0x10];
      bVar7 = *pbVar8;
      if (bVar7 == 0) {
        uVar4 = 4;
        break;
      }
      if (*pcVar2 == '\x04') {
        if (param_2 == 0) {
          if (bVar7 == 0x85) {
            puVar5[0x14] = puVar5[0xc];
            uVar4 = FUN_0000df88(puVar5);
            if ((int)uVar4 == 0) {
              *(byte *)((int)puVar5 + 6) = *(byte *)(*(int *)(pcVar2 + 0x50) + 4) & 0x3f;
              return uVar4;
            }
            break;
          }
        }
        else if (bVar7 == 0x83) {
          return uVar4;
        }
      }
      else {
        bVar1 = pbVar8[0xb];
        bVar3 = bVar1 & 0x3f;
        *(byte *)((int)puVar5 + 6) = bVar3;
        if (((bVar7 == 0xe5) || (bVar7 == 0x2e)) || (((bVar1 & 0x1f) == 8) != param_2)) {
          bVar11 = 0xff;
        }
        else {
          if (bVar3 != 0xf) {
            if (bVar11 == 0) {
              pbVar8 = pbVar8 + -1;
              uVar9 = 0;
              lVar12 = 0xb;
              do {
                pbVar8 = pbVar8 + 1;
                uVar9 = (uVar9 & 1) * 0x80 + (uVar9 >> 1 & 0x7f) + (ulonglong)*pbVar8;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              if (uVar10 == (uVar9 & 0xff)) {
                return uVar4;
              }
            }
            puVar5[0x14] = 0xffffffff;
            return uVar4;
          }
          if ((bVar7 & 0x40) != 0) {
            bVar7 = bVar7 & 0xbf;
            uVar10 = (ulonglong)pbVar8[0xd];
            puVar5[0x14] = puVar5[0xc];
            bVar11 = bVar7;
          }
          if ((bVar7 == bVar11) && (uVar10 == pbVar8[0xd])) {
            iVar6 = FUN_0000e560(*(undefined4 *)(pcVar2 + 0xc));
            bVar11 = bVar11 - 1;
            if (iVar6 != 0) goto LAB_0000cab8;
          }
          bVar11 = 0xff;
        }
      }
LAB_0000cab8:
      uVar4 = FUN_0000cb40(puVar5,0);
      if ((int)uVar4 != 0) break;
      if (*(longlong *)(puVar5 + 0xe) == 0) {
        return uVar4;
      }
    }
  }
  *(undefined8 *)(puVar5 + 0xe) = 0;
  return uVar4;
}


/* ==== FUN_0000cb40 @ 0000cb40 ==== */

undefined8 FUN_0000cb40(undefined8 param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  int iVar4;
  uint uVar6;
  longlong lVar5;
  uint uVar7;
  
  puVar3 = (undefined4 *)FUN_0000eac8();
  pcVar1 = (char *)*puVar3;
  uVar7 = puVar3[0xc] + 0x20;
  uVar6 = 0x10000000;
  if (*pcVar1 != '\x04') {
    uVar6 = 0x200000;
  }
  if (uVar6 <= uVar7) {
    *(undefined8 *)(puVar3 + 0xe) = 0;
  }
  if (*(longlong *)(puVar3 + 0xe) == 0) {
    return 4;
  }
  if ((uVar7 & 0x1ff) == 0) {
    *(longlong *)(puVar3 + 0xe) = *(longlong *)(puVar3 + 0xe) + 1;
    if (puVar3[0xd] == 0) {
      if ((uint)*(ushort *)(pcVar1 + 8) <= uVar7 >> 5) {
LAB_0000cbc4:
        *(undefined8 *)(puVar3 + 0xe) = 0;
        return 4;
      }
    }
    else if ((uVar7 >> 9 & *(ushort *)(pcVar1 + 10) - 1) == 0) {
      uVar2 = FUN_0000c140(puVar3);
      if ((uVar2 & 0xffffffff) < 2) {
        return 2;
      }
      if ((int)uVar2 == -1) {
        return 1;
      }
      if ((ulonglong)*(uint *)(pcVar1 + 0x18) <= (uVar2 & 0xffffffff)) {
        if (param_2 == 0) goto LAB_0000cbc4;
        uVar2 = FUN_0000c440(puVar3,puVar3[0xd]);
        if (uVar2 == 0) {
          return 7;
        }
        if ((uVar2 & 0xffffffff) == 1) {
          return 2;
        }
        if ((int)uVar2 == -1) {
          return 1;
        }
        iVar4 = FUN_0000da80(pcVar1,uVar2);
        if (iVar4 != 0) {
          return 1;
        }
        *(byte *)((int)puVar3 + 7) = *(byte *)((int)puVar3 + 7) | 4;
      }
      puVar3[0xd] = (int)uVar2;
      if ((uVar2 - 2 & 0xffffffff) < (ulonglong)(*(int *)(pcVar1 + 0x18) - 2)) {
        lVar5 = (ulonglong)*(ushort *)(pcVar1 + 10) * (uVar2 - 2 & 0xffffffff) +
                *(longlong *)(pcVar1 + 0x40);
      }
      else {
        lVar5 = 0;
      }
      *(longlong *)(puVar3 + 0xe) = lVar5;
    }
  }
  puVar3[0xc] = uVar7;
  puVar3[0x10] = pcVar1 + (uVar7 & 0x1ff) + 0x54;
  return 0;
}


/* ==== FUN_0000ccc8 @ 0000ccc8 ==== */

longlong FUN_0000ccc8(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar8;
  longlong lVar6;
  longlong lVar7;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint *puVar13;
  char *local_b0 [4];
  undefined4 local_a0;
  undefined1 local_99;
  undefined4 local_98;
  ulonglong local_90;
  undefined4 local_84;
  undefined4 local_50;
  
  puVar8 = (undefined4 *)FUN_0000eac8();
  lVar6 = FUN_0000c350(puVar8,local_b0);
  if ((lVar6 == 0) && (pbVar11 = (byte *)(puVar8 + 0xc), (*(byte *)(puVar8 + 0xc) & 0x40) != 0)) {
    if (*local_b0[0] == '\x04') {
      if (*(char *)((int)puVar8 + 7) == '\x03') {
        uVar5 = (ulonglong)(uint)puVar8[2];
        for (uVar12 = (ulonglong)(uint)puVar8[6]; uVar12 != 0; uVar12 = uVar12 - 1) {
          lVar6 = FUN_0000ddf8(*puVar8,uVar5,uVar5 + 1);
          if ((int)lVar6 != 0) goto LAB_0000cd54;
          uVar5 = uVar5 + 1;
        }
        *(undefined1 *)((int)puVar8 + 7) = 0;
      }
      lVar6 = 0;
LAB_0000cd54:
      if (((int)lVar6 == 0) &&
         (lVar6 = FUN_0000c3c8(puVar8,puVar8[0x10],0xffffffffffffffff), lVar6 == 0)) {
        lVar7 = FUN_0000afe0(0x460);
        if (lVar7 == 0) {
          lVar6 = 0x11;
        }
        else {
          *(int *)(local_b0[0] + 0xc) = (int)lVar7;
          local_84 = 0;
          *(int *)(local_b0[0] + 0x50) = (int)lVar7 + 0x200;
          puVar13 = (uint *)(local_b0[0] + 0x50);
          local_50 = puVar8[10];
          local_a0 = *puVar8;
          local_98 = puVar8[8];
          local_90 = (ulonglong)(uint)puVar8[9] & 0xffffffffffffff00;
          local_99 = (undefined1)puVar8[9];
          lVar6 = FUN_0000b888(&local_a0);
          if ((int)lVar6 == 0) {
            lVar6 = FUN_0000df88(&local_a0);
          }
          if ((int)lVar6 == 0) {
            *(byte *)(*puVar13 + 4) = *(byte *)(*puVar13 + 4) | 0x20;
            *(byte *)(*puVar13 + 0x21) = *(byte *)((int)puVar8 + 7) | 1;
            uVar10 = puVar8[2];
            *(uint *)(*puVar13 + 0x34) =
                 uVar10 << 0x18 | (uVar10 & 0xff00) << 8 | uVar10 >> 8 & 0xff00 | uVar10 >> 0x18;
            uVar4 = StoreDoublewordByteReverseIndexed
                              (*(undefined8 *)(puVar8 + 4),(ulonglong)*puVar13,0x38);
            *(undefined8 *)(*puVar13 + 0x38) = uVar4;
            uVar4 = StoreDoublewordByteReverseIndexed
                              (*(undefined8 *)(puVar8 + 4),(ulonglong)*puVar13,0x28);
            *(undefined8 *)(*puVar13 + 0x28) = uVar4;
            uVar10 = *puVar13;
            uVar9 = FUN_0000bde0();
            *(uint *)(uVar10 + 0xc) =
                 uVar9 << 0x18 | (uVar9 & 0xff00) << 8 | uVar9 >> 8 & 0xff00 | uVar9 >> 0x18;
            *(undefined1 *)(*puVar13 + 0x15) = 0;
            *(undefined1 *)(*puVar13 + 0x17) = 0;
            *(undefined4 *)(*puVar13 + 0x10) = 0;
            *(undefined1 *)(*puVar13 + 0x18) = 0;
            lVar6 = FUN_0000be60(&local_a0);
            if (lVar6 == 0) {
              lVar6 = FUN_0000dbf0(local_b0[0]);
              *pbVar11 = *pbVar11 & 0xbf;
            }
          }
          thunk_EXT_FUN_80064768(lVar7);
        }
      }
    }
    else {
      lVar6 = FUN_0000a4d8(local_b0[0],*(undefined8 *)(puVar8 + 0x14));
      if (lVar6 == 0) {
        iVar1 = puVar8[0x16];
        *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x20;
        uVar2 = puVar8[2];
        pcVar3 = (char *)*puVar8;
        *(ushort *)(iVar1 + 0x1a) = (ushort)uVar2 >> 8 | (ushort)(byte)uVar2 << 8;
        if (*pcVar3 == '\x03') {
          *(ushort *)(iVar1 + 0x14) =
               (ushort)((uint)uVar2 >> 0x18) | (ushort)(byte)((uint)uVar2 >> 0x10) << 8;
        }
        uVar10 = (uint)*(undefined8 *)(puVar8 + 4);
        *(uint *)(iVar1 + 0x1c) =
             uVar10 << 0x18 | (uVar10 & 0xff00) << 8 | uVar10 >> 8 & 0xff00 | uVar10 >> 0x18;
        uVar10 = FUN_0000bde0();
        *(uint *)(iVar1 + 0x16) =
             uVar10 << 0x18 | (uVar10 & 0xff00) << 8 | uVar10 >> 8 & 0xff00 | uVar10 >> 0x18;
        *(undefined2 *)(iVar1 + 0x12) = 0;
        local_b0[0][4] = '\x01';
        lVar6 = FUN_0000dbf0(local_b0[0]);
        *pbVar11 = *pbVar11 & 0xbf;
      }
    }
  }
  return lVar6;
}


/* ==== FUN_0000cf48 @ 0000cf48 ==== */

undefined8 FUN_0000cf48(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0000ead8();
  uVar3 = 0;
  if (*(char *)(iVar1 + 4) != '\0') {
    iVar2 = FUN_0000e618(*(undefined1 *)(iVar1 + 1),iVar1 + 0x54,*(undefined8 *)(iVar1 + 0x20),1);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 4) = 0;
      if (((ulonglong)(*(longlong *)(iVar1 + 0x20) - *(longlong *)(iVar1 + 0x30)) <
           (ulonglong)*(uint *)(iVar1 + 0x1c)) && (*(char *)(iVar1 + 3) == '\x02')) {
        FUN_0000e618(*(undefined1 *)(iVar1 + 1),iVar1 + 0x54,
                     (ulonglong)*(uint *)(iVar1 + 0x1c) + *(longlong *)(iVar1 + 0x20),1);
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
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

undefined8 FUN_0000d010(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_160 [2];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 auStack_14c [8];
  int local_144 [5];
  undefined2 local_130;
  undefined1 auStack_12e [302];
  
  uVar1 = FUN_0000ead4();
  local_160[0] = 0;
  local_150 = 0;
  uVar5 = 0;
  thunk_EXT_FUN_8010d110(auStack_14c,0,0x18);
  local_130 = 0;
  thunk_EXT_FUN_8010d110(auStack_12e,0,0xfe);
  thunk_EXT_FUN_816cac20();
  while ((iVar2 = thunk_EXT_FUN_816c7d78(), iVar2 != 0 &&
         (iVar2 = thunk_EXT_FUN_816caf08(1), iVar2 != 0))) {
    thunk_EXT_FUN_81721b90(10,0);
  }
  thunk_EXT_FUN_80066368(local_144,0,1,0);
  local_158 = thunk_EXT_FUN_816e0bf0(0x12a);
  local_154 = thunk_EXT_FUN_816e0bf0(0x78);
  if ((param_2 & 0xff) == 0) {
    uVar4 = 0xffffffff80202720;
  }
  else {
    uVar4 = 0xffffffff802027e8;
  }
  uVar3 = thunk_EXT_FUN_8010c880
                    (&local_130,0x80,uVar4,(uVar1 & 0xffffffff) >> 0x18,
                     (uVar1 & 0xffffffff) >> 0x10 & 0xff,uVar1 & 0xffff);
  if (uVar3 < 0x80) {
    do {
      iVar2 = thunk_EXT_FUN_816c5508(0xff,0xffffffff80202890,&local_130,2,&local_158,1,3,local_160);
    } while (iVar2 == 5);
    if (iVar2 == 0x3e5) {
      iVar2 = thunk_EXT_FUN_816a2898(&local_150,0,1);
      thunk_EXT_FUN_80089eb0(local_144[0]);
      DAT_80203071 = 1;
      if ((iVar2 == 0) && (local_160[0] == 0)) {
        uVar5 = 1;
      }
    }
  }
  if (local_144[0] != 0) {
    thunk_EXT_FUN_80089eb0();
  }
  return uVar5;
}


/* ==== FUN_0000d198 @ 0000d198 ==== */

void FUN_0000d198(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0000e708(param_1,0x7d3);
  FUN_0000e730(uVar1,param_2,4);
  *param_2 = param_3;
  return;
}


/* ==== FUN_0000d1e8 @ 0000d1e8 ==== */

void FUN_0000d1e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0000ead0();
  uVar1 = FUN_0000e708(uVar1,0x7e0);
  FUN_0000e730(uVar1,param_2,0x28);
  puVar2 = (undefined4 *)param_2;
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar2[2] = param_5;
  puVar2[3] = param_6;
  return;
}


/* ==== FUN_0000d238 @ 0000d238 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000d238(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    *param_2 = 0;
    thunk_EXT_FUN_816a0d70(0xffffffff80203080,0,0,0);
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

longlong FUN_0000d2c8(void)

{
  byte bVar1;
  short sVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 *puVar7;
  longlong lVar5;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar13;
  byte *pbVar12;
  byte *pbVar14;
  int iVar15;
  short *psVar16;
  char cVar17;
  ulonglong uVar18;
  uint uVar19;
  byte bVar20;
  longlong lVar21;
  
  puVar7 = (undefined4 *)FUN_0000eac0();
  pcVar3 = (char *)*puVar7;
  lVar5 = FUN_0000b888(puVar7,0);
  if ((int)lVar5 != 0) {
    return lVar5;
  }
  if (*pcVar3 == '\x04') {
    psVar16 = *(short **)(pcVar3 + 0xc);
    uVar18 = 0;
    sVar2 = *psVar16;
    while (sVar2 != 0) {
      uVar6 = FUN_0000e780();
      psVar16 = psVar16 + 1;
      uVar18 = (uVar6 & 0xff) + (uVar18 & 1) * 0x8000 + (uVar18 >> 1 & 0x7fff);
      uVar18 = (uVar18 * 0x8000 & 0x8000) + ((uVar6 & 0xffff) >> 8) + (uVar18 >> 1 & 0x7fff);
      sVar2 = *psVar16;
    }
    lVar5 = FUN_0000c970(puVar7,0);
    if (lVar5 != 0) {
      return lVar5;
    }
    do {
      iVar10 = *(int *)(pcVar3 + 0x50);
      if ((ulonglong)CONCAT11(*(undefined1 *)(iVar10 + 0x25),*(undefined1 *)(iVar10 + 0x24)) ==
          (uVar18 & 0xffff)) {
        cVar17 = *(char *)(iVar10 + 0x23);
        uVar19 = 0x40;
        iVar10 = 0;
        if (cVar17 != '\0') {
          iVar15 = 0;
          do {
            if ((uVar19 & 0x1f) == 0) {
              uVar19 = uVar19 + 2;
            }
            iVar8 = FUN_0000e780(CONCAT11(((undefined1 *)(*(int *)(pcVar3 + 0x50) + uVar19))[1],
                                          *(undefined1 *)(*(int *)(pcVar3 + 0x50) + uVar19)));
            iVar9 = FUN_0000e780(*(undefined2 *)(iVar15 + *(int *)(pcVar3 + 0xc)));
            if (iVar8 != iVar9) break;
            cVar17 = cVar17 + -1;
            uVar19 = uVar19 + 2;
            iVar10 = iVar10 + 1;
            iVar15 = iVar15 + 2;
          } while (cVar17 != '\0');
        }
        if ((cVar17 == '\0') && (*(short *)(iVar10 * 2 + *(int *)(pcVar3 + 0xc)) == 0)) {
          return 0;
        }
      }
      lVar5 = FUN_0000c970(puVar7,0);
      if (lVar5 != 0) {
        return lVar5;
      }
    } while( true );
  }
  uVar18 = 0xff;
  bVar20 = 0xff;
  puVar7[0x14] = 0xffffffff;
  do {
    lVar5 = FUN_0000a4d8(pcVar3,*(undefined8 *)(puVar7 + 0xe));
    if ((int)lVar5 != 0) {
      return lVar5;
    }
    pbVar14 = (byte *)puVar7[0x10];
    bVar13 = *pbVar14;
    if (bVar13 == 0) {
      return 4;
    }
    bVar1 = pbVar14[0xb];
    bVar4 = bVar1 & 0x3f;
    *(byte *)((int)puVar7 + 6) = bVar4;
    if ((bVar13 == 0xe5) || (((bVar1 & 8) != 0 && (bVar4 != 0xf)))) {
LAB_0000d558:
      puVar7[0x14] = 0xffffffff;
      bVar20 = 0xff;
    }
    else {
      if (bVar4 != 0xf) {
        if (bVar20 == 0) {
          pbVar11 = pbVar14 + -1;
          uVar6 = 0;
          lVar21 = 0xb;
          do {
            pbVar11 = pbVar11 + 1;
            uVar6 = (uVar6 & 1) * 0x80 + (uVar6 >> 1 & 0x7f) + (ulonglong)*pbVar11;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          if (uVar18 == (uVar6 & 0xff)) {
            return lVar5;
          }
        }
        if ((*(byte *)((int)puVar7 + 0x4f) & 1) == 0) {
          pbVar12 = (byte *)(puVar7 + 0x11);
          pbVar11 = pbVar14 + 0xb;
          do {
            bVar20 = *pbVar14;
            bVar13 = *pbVar12;
            if ((ulonglong)bVar20 - (ulonglong)bVar13 != 0) break;
            pbVar14 = pbVar14 + 1;
            pbVar12 = pbVar12 + 1;
          } while (pbVar14 != pbVar11);
          if ((int)((ulonglong)bVar20 - (ulonglong)bVar13) == 0) {
            return lVar5;
          }
        }
        goto LAB_0000d558;
      }
      if ((*(byte *)((int)puVar7 + 0x4f) & 0x40) == 0) {
        if ((bVar13 & 0x40) != 0) {
          bVar13 = bVar13 & 0xbf;
          puVar7[0x14] = puVar7[0xc];
          uVar18 = (ulonglong)pbVar14[0xd];
          bVar20 = bVar13;
        }
        if ((bVar13 == bVar20) && (uVar18 == pbVar14[0xd])) {
          iVar10 = FUN_0000e8a8(*(undefined4 *)(pcVar3 + 0xc));
          bVar20 = bVar20 - 1;
          if (iVar10 != 0) goto LAB_0000d560;
        }
        bVar20 = 0xff;
      }
    }
LAB_0000d560:
    lVar5 = FUN_0000cb40(puVar7,0);
    if ((int)lVar5 != 0) {
      return lVar5;
    }
  } while( true );
}


/* ==== FUN_0000d588 @ 0000d588 ==== */

undefined8 FUN_0000d588(undefined8 param_1,undefined4 *param_2)

{
  ushort uVar1;
  short *psVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  ushort *puVar6;
  ushort *puVar8;
  longlong lVar7;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  
  piVar4 = (int *)FUN_0000eab8();
  uVar15 = 0;
  puVar6 = (ushort *)*param_2;
  uVar13 = 0;
  psVar2 = *(short **)(*piVar4 + 0xc);
  uVar11 = ZEXT48(psVar2);
  lVar5 = uVar11 - 2;
  while( true ) {
    uVar9 = (ulonglong)*puVar6;
    puVar8 = puVar6 + 1;
    if ((0xd7ff < uVar9) && (uVar9 < 0xe000)) {
      uVar1 = *puVar8;
      if (0xdbff < uVar9) {
        return 6;
      }
      if (uVar1 < 0xdc00) {
        return 6;
      }
      if (0xdfff < uVar1) {
        return 6;
      }
      uVar9 = (ulonglong)CONCAT22(*puVar6,uVar1);
      puVar8 = puVar6 + 2;
    }
    puVar6 = puVar8;
    if ((int)uVar9 == -1) {
      return 6;
    }
    if (0xffff < uVar9) {
      uVar13 = uVar13 + 1;
      *(short *)((int)lVar5 + 2) = (short)(uVar9 >> 0x10);
      lVar5 = lVar5 + 2;
    }
    uVar3 = uVar9 & 0xffff;
    if (((uVar3 < 0x20) || (uVar3 == 0x2f)) || (uVar3 == 0x5c)) break;
    if (uVar3 < 0x80) {
      lVar7 = 0x2a;
      pcVar10 = (char *)0x802028c4;
      do {
        if ((int)lVar7 == (int)uVar3) break;
        pcVar10 = pcVar10 + 1;
        lVar7 = (longlong)*pcVar10;
      } while (lVar7 != 0);
      if ((-(uint)(uVar3 == (longlong)*pcVar10) & (uint)pcVar10) != 0) {
        return 6;
      }
    }
    if (0xfe < (uVar13 & 0xffffffff)) {
      return 6;
    }
    lVar5 = lVar5 + 2;
    *(undefined2 *)lVar5 = (short)uVar9;
    uVar13 = uVar13 + 1;
  }
  if (uVar3 < 0x20) {
LAB_0000d6cc:
    bVar12 = 4;
  }
  else {
    for (; (uVar1 = *puVar6, uVar1 == 0x2f || (uVar1 == 0x5c)); puVar6 = puVar6 + 1) {
    }
    bVar12 = 0;
    if (uVar1 < 0x20) goto LAB_0000d6cc;
  }
  *param_2 = puVar6;
  if ((uVar13 & 0xffffffff) != 0) {
    lVar5 = (uVar13 & 0x7fffffff) * 2 + uVar11;
    do {
      lVar5 = lVar5 + -2;
      if ((*(short *)lVar5 != 0x20) && (*(short *)lVar5 != 0x2e)) break;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar7 = (uVar13 & 0x7fffffff) * 2;
  lVar5 = lVar7 + uVar11;
  *(undefined2 *)((int)lVar7 + (int)psVar2) = 0;
  if ((uVar13 & 0xffffffff) == 0) {
    return 6;
  }
  uVar9 = 0;
  if (*psVar2 == 0x20) {
    do {
      uVar11 = uVar11 + 2;
      uVar9 = uVar9 + 1;
    } while (*(short *)uVar11 == 0x20);
    if ((uVar9 & 0xffffffff) == 0) goto LAB_0000d748;
  }
  else {
LAB_0000d748:
    if (*(short *)((int)((uVar9 & 0xffffffff) << 1) + (int)psVar2) != 0x2e) goto LAB_0000d760;
  }
  bVar12 = bVar12 | 3;
LAB_0000d760:
  uVar11 = uVar13 & 0xffffffff;
  while ((uVar11 != 0 && (lVar5 = lVar5 + -2, *(short *)lVar5 != 0x2e))) {
    uVar13 = uVar13 - 1;
    uVar11 = uVar13;
  }
  piVar18 = piVar4 + 0x11;
  piVar4[0x11] = 0x20202020;
  uVar16 = 0;
  piVar4[0x12] = 0x20202020;
  *(undefined2 *)(piVar4 + 0x13) = 0x2020;
  uVar14 = 8;
  *(undefined1 *)((int)piVar4 + 0x4e) = 0x20;
  uVar11 = (ulonglong)*(ushort *)((int)((uVar9 & 0xffffffff) << 1) + (int)psVar2);
  if (uVar11 != 0) {
    do {
      uVar9 = uVar9 + 1;
      uVar17 = uVar16;
      if ((uVar11 == 0x20) || ((uVar11 == 0x2e && ((uVar9 & 0xffffffff) != (uVar13 & 0xffffffff)))))
      {
LAB_0000d840:
        bVar12 = bVar12 | 3;
        uVar16 = uVar17;
      }
      else if ((uVar16 < uVar14) && ((uVar9 & 0xffffffff) != (uVar13 & 0xffffffff))) {
        if (0x7f < uVar11) {
          bVar12 = bVar12 | 2;
          uVar11 = FUN_0000e990(uVar11,0x1b5);
          if ((uVar11 & 0x80) != 0) {
            uVar11 = (ulonglong)*(byte *)(((uint)uVar11 & 0x7f) + 0x80201c20);
          }
        }
        uVar3 = uVar11 & 0xffff;
        if (uVar3 < 0x100) {
          if (uVar3 != 0) {
            lVar5 = 0x2b;
            pcVar10 = (char *)0x802028d0;
            do {
              if ((int)lVar5 == (int)uVar3) break;
              pcVar10 = pcVar10 + 1;
              lVar5 = (longlong)*pcVar10;
            } while (lVar5 != 0);
            if ((-(uint)(uVar3 == (longlong)*pcVar10) & (uint)pcVar10) == 0) {
              if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
                uVar15 = uVar15 | 2;
              }
              if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
                uVar15 = uVar15 | 1;
                uVar11 = uVar3 + 0xffe0 & 0xffff;
              }
              goto LAB_0000d8fc;
            }
          }
          uVar11 = 0x5f;
          bVar12 = bVar12 | 3;
        }
        else {
          uVar17 = uVar14;
          if (uVar14 - 1 <= uVar16) goto LAB_0000d840;
          *(char *)((int)piVar18 + uVar16) = (char)(uVar11 >> 8);
          uVar16 = uVar16 + 1;
        }
LAB_0000d8fc:
        *(char *)((int)piVar18 + uVar16) = (char)uVar11;
        uVar16 = uVar16 + 1;
      }
      else {
        if (uVar14 == 0xb) {
          bVar12 = bVar12 | 3;
          break;
        }
        if (((uVar9 & 0xffffffff) != (uVar13 & 0xffffffff)) &&
           (bVar12 = bVar12 | 3, (uVar13 & 0xffffffff) < (uVar9 & 0xffffffff))) break;
        uVar16 = 8;
        uVar14 = 0xb;
        uVar15 = (uVar15 & 0x3f) << 2;
        uVar9 = uVar13;
      }
      uVar11 = (ulonglong)*(ushort *)((int)((uVar9 & 0xffffffff) << 1) + (int)psVar2);
    } while (uVar11 != 0);
  }
  if (*(char *)piVar18 == -0x1b) {
    *(char *)piVar18 = '\x05';
  }
  if (uVar14 == 8) {
    uVar15 = (uVar15 & 0x3f) << 2;
  }
  if (((uVar15 & 0xc) == 0xc) || ((uVar15 & 3) == 3)) {
    bVar12 = bVar12 | 2;
  }
  if ((bVar12 & 2) == 0) {
    if ((uVar15 & 1) != 0) {
      bVar12 = bVar12 | 0x10;
    }
    if ((uVar15 & 4) != 0) {
      bVar12 = bVar12 | 8;
    }
  }
  *(byte *)((int)piVar4 + 0x4f) = bVar12;
  return 0;
}


/* ==== FUN_0000d9c0 @ 0000d9c0 ==== */

undefined8 FUN_0000d9c0(ulonglong param_1,undefined2 *param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1 & 0xffffffff) >> 0x10;
  uVar2 = param_1 & 0xffff;
  if (uVar1 == 0) {
    if ((param_3 != 0) && ((uVar2 < 0xd800 || (0xdfff < uVar2)))) {
      *param_2 = (short)param_1;
      return 1;
    }
  }
  else if ((((1 < param_3) && (0xd7ff < uVar1)) && (uVar1 < 0xdc00)) &&
          ((0xdbff < uVar2 && (uVar2 < 0xe000)))) {
    *param_2 = (short)((param_1 & 0xffffffff) >> 0x10);
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

bool FUN_0000da80(undefined8 param_1,longlong param_2)

{
  int iVar2;
  int iVar3;
  longlong lVar1;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = FUN_0000ead0();
  iVar3 = FUN_0000cf48();
  if (iVar3 != 0) {
    return true;
  }
  if ((param_2 - 2U & 0xffffffff) < ((ulonglong)*(uint *)(iVar2 + 0x18) - 2 & 0xffffffff)) {
    lVar4 = (ulonglong)*(ushort *)(iVar2 + 10) * (param_2 - 2U & 0xffffffff) +
            *(longlong *)(iVar2 + 0x40);
  }
  else {
    lVar4 = 0;
  }
  *(longlong *)(iVar2 + 0x20) = lVar4;
  thunk_EXT_FUN_8010d110(iVar2 + 0x54,0,0x200);
  uVar5 = (ulonglong)*(ushort *)(iVar2 + 10) << 9;
  if (uVar5 < 0x8000) {
    if (0x200 < uVar5) goto LAB_0000db14;
  }
  else {
    uVar5 = 0x8000;
LAB_0000db14:
    do {
      lVar1 = FUN_0000afe0(uVar5);
      if (lVar1 != 0) break;
      uVar5 = uVar5 >> 1;
    } while (0x200 < uVar5);
    if (0x200 < uVar5) {
      thunk_EXT_FUN_8010d110(lVar1,0,uVar5);
      uVar6 = 0;
      if (*(short *)(iVar2 + 10) != 0) {
        do {
          iVar3 = FUN_0000e618(*(undefined1 *)(iVar2 + 1),lVar1,(uVar6 & 0xffffffff) + lVar4,
                               uVar5 >> 9);
          if (iVar3 != 0) break;
          uVar6 = uVar6 + (uVar5 >> 9);
        } while ((uVar6 & 0xffffffff) < (ulonglong)*(ushort *)(iVar2 + 10));
      }
      thunk_EXT_FUN_80064768(lVar1);
      goto LAB_0000dbd8;
    }
  }
  uVar6 = 0;
  if (*(short *)(iVar2 + 10) != 0) {
    do {
      iVar3 = FUN_0000e618(*(undefined1 *)(iVar2 + 1),iVar2 + 0x54,(uVar6 & 0xffffffff) + lVar4,1);
      if (iVar3 != 0) break;
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)*(ushort *)(iVar2 + 10));
  }
LAB_0000dbd8:
  return *(ushort *)(iVar2 + 10) != uVar6;
}


/* ==== FUN_0000dbf0 @ 0000dbf0 ==== */

ulonglong FUN_0000dbf0(void)

{
  uint uVar1;
  char *pcVar3;
  ulonglong uVar2;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  
  pcVar3 = (char *)FUN_0000ead8();
  uVar2 = FUN_0000cf48();
  if (uVar2 != 0) {
    return uVar2;
  }
  if (pcVar3[5] != '\x01') goto LAB_0000dd18;
  pcVar3[5] = '\0';
  if (*pcVar3 == '\x03') {
    pcVar6 = pcVar3 + 0x54;
    thunk_EXT_FUN_8010d110(pcVar6,0,0x200);
    pcVar6[0] = 'R';
    pcVar6[1] = 'R';
    pcVar6[2] = 'a';
    pcVar6[3] = 'A';
    pcVar3[0x238] = 'r';
    pcVar3[0x239] = 'r';
    pcVar3[0x23a] = 'A';
    pcVar3[0x23b] = 'a';
    uVar1 = *(uint *)(pcVar3 + 0x14);
    *(uint *)(pcVar3 + 0x23c) =
         uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
    uVar1 = *(uint *)(pcVar3 + 0x10);
    *(uint *)(pcVar3 + 0x240) =
         uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
    pcVar3[0x250] = '\0';
    pcVar3[0x251] = '\0';
    pcVar3[0x252] = 'U';
    pcVar3[0x253] = -0x56;
    lVar5 = *(longlong *)(pcVar3 + 0x28) + 1;
    *(longlong *)(pcVar3 + 0x20) = lVar5;
  }
  else {
    if (*pcVar3 != '\x04') goto LAB_0000dd18;
    *(undefined8 *)(pcVar3 + 0x20) = *(undefined8 *)(pcVar3 + 0x28);
    iVar4 = FUN_0000c710(pcVar3[1],pcVar3 + 0x54,*(undefined8 *)(pcVar3 + 0x28),1);
    if (iVar4 != 0) goto LAB_0000dd18;
    iVar4 = *(int *)(pcVar3 + 0x18);
    if (iVar4 - 2U < *(uint *)(pcVar3 + 0x14)) {
      uVar2 = 0xff;
    }
    else {
      trapDoubleWordImmediate(6,(ulonglong)(iVar4 - 2),0);
      uVar2 = ((ulonglong)((iVar4 - *(uint *)(pcVar3 + 0x14)) - 2) * 100) / (ulonglong)(iVar4 - 2) &
              0xff;
    }
    if ((byte)pcVar3[0xc4] == uVar2) goto LAB_0000dd18;
    lVar5 = *(longlong *)(pcVar3 + 0x20);
    pcVar3[0xc4] = (char)uVar2;
  }
  FUN_0000e618(pcVar3[1],pcVar3 + 0x54,lVar5,1);
LAB_0000dd18:
  iVar4 = FUN_0000e9f8(pcVar3[1],0,0);
  return (ulonglong)(iVar4 != 0);
}


/* ==== FUN_0000dd40 @ 0000dd40 ==== */

undefined8 FUN_0000dd40(undefined8 param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  uint uVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined4 *)FUN_0000ead4();
  pcVar1 = (char *)*puVar3;
  uVar2 = FUN_0000b888(puVar3,0);
  if ((int)uVar2 == 0) {
    uVar5 = 0;
    do {
      uVar2 = FUN_0000a4d8(pcVar1,*(undefined8 *)(puVar3 + 0xe));
      if ((int)uVar2 != 0) break;
      uVar4 = (uint)*(byte *)puVar3[0x10];
      if (*pcVar1 == '\x04') {
        uVar4 = ~uVar4 >> 7 & 1;
LAB_0000ddb4:
        if (uVar4 == 0) goto LAB_0000ddcc;
        uVar5 = uVar5 + 1;
        if ((uVar5 & 0xffffffff) == (param_2 & 0xffffffff)) {
          return uVar2;
        }
      }
      else {
        if ((uVar4 == 0xe5) || (uVar4 == 0)) {
          uVar4 = 1;
          goto LAB_0000ddb4;
        }
LAB_0000ddcc:
        uVar5 = 0;
      }
      uVar2 = FUN_0000cb40(puVar3,1);
    } while ((int)uVar2 == 0);
  }
  if ((int)uVar2 == 4) {
    uVar2 = 7;
  }
  return uVar2;
}


/* ==== FUN_0000ddf8 @ 0000ddf8 ==== */

undefined8 FUN_0000ddf8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  byte *pbVar3;
  undefined8 uVar2;
  byte bVar5;
  uint uVar4;
  ulonglong uVar6;
  
  pbVar3 = (byte *)FUN_0000ead0();
  uVar4 = (uint)param_3;
  uVar2 = 2;
  if ((1 < (param_2 & 0xffffffff)) && ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(pbVar3 + 0x18))
     ) {
    bVar1 = *pbVar3;
    bVar5 = (byte)param_3;
    if (bVar1 == 1) {
      uVar6 = ((param_2 & 0xffffffff) >> 1) + param_2;
      uVar2 = FUN_0000a4d8(pbVar3,(uVar6 >> 9 & 0x7fffff) + *(longlong *)(pbVar3 + 0x30));
      if ((int)uVar2 == 0) {
        if ((param_2 & 1) != 0) {
          bVar5 = (byte)((param_3 & 0xff) << 4) | (pbVar3 + ((uint)uVar6 & 0x1ff))[0x54] & 0xf;
        }
        (pbVar3 + ((uint)uVar6 & 0x1ff))[0x54] = bVar5;
        pbVar3[4] = 1;
        uVar2 = FUN_0000a4d8(pbVar3,(uVar6 + 1 >> 9 & 0x7fffff) + *(longlong *)(pbVar3 + 0x30));
        if ((int)uVar2 == 0) {
          if ((param_2 & 1) == 0) {
            bVar1 = (pbVar3 + ((uint)(uVar6 + 1) & 0x1ff))[0x54] & 0xf0 | (byte)(param_3 >> 8) & 0xf
            ;
          }
          else {
            bVar1 = (byte)((param_3 & 0xffffffff) >> 4);
          }
          (pbVar3 + ((uint)(uVar6 + 1) & 0x1ff))[0x54] = bVar1;
          pbVar3[4] = 1;
        }
      }
    }
    else if (bVar1 == 2) {
      uVar2 = FUN_0000a4d8(pbVar3,(param_2 >> 8 & 0xffffff) + *(longlong *)(pbVar3 + 0x30));
      if ((int)uVar2 == 0) {
        *(ushort *)(pbVar3 + ((uint)((param_2 & 0xffffffff) << 1) & 0x1fe) + 0x54) =
             (ushort)param_3 >> 8 | (ushort)bVar5 << 8;
        pbVar3[4] = 1;
      }
    }
    else if (((2 < bVar1) && (bVar1 < 5)) &&
            (uVar2 = FUN_0000a4d8(pbVar3,(param_2 >> 7 & 0x1ffffff) + *(longlong *)(pbVar3 + 0x30)),
            (int)uVar2 == 0)) {
      if (*pbVar3 != 4) {
        uVar4 = uVar4 & 0xfffffff |
                ((pbVar3 + ((uint)((param_2 & 0xffffffff) << 2) & 0x1fc))[0x57] & 0xfffffff0) <<
                0x18;
      }
      *(uint *)(pbVar3 + ((uint)((param_2 & 0xffffffff) << 2) & 0x1fc) + 0x54) =
           uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
      pbVar3[4] = 1;
    }
  }
  return uVar2;
}


/* ==== FUN_0000df88 @ 0000df88 ==== */

undefined8 FUN_0000df88(void)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  piVar3 = (int *)FUN_0000ead0();
  iVar1 = *(int *)(*piVar3 + 0x50);
  uVar2 = FUN_0000a4d8(*piVar3,*(undefined8 *)(piVar3 + 0xe));
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(char *)piVar3[0x10] == -0x7b) {
    thunk_EXT_FUN_8010cc40(iVar1,(char *)piVar3[0x10],0x20);
    uVar5 = (*(byte *)(iVar1 + 1) + 1) * 0x20;
    if ((0x5f < uVar5) && (uVar5 < 0x261)) {
      uVar2 = FUN_0000cb40(piVar3,0);
      if ((int)uVar2 == 4) {
        uVar2 = 2;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_0000a4d8(*piVar3,*(undefined8 *)(piVar3 + 0xe));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((*(char *)piVar3[0x10] == -0x40) &&
         (thunk_EXT_FUN_8010cc40(iVar1 + 0x20,(char *)piVar3[0x10],0x20),
         (*(byte *)(iVar1 + 0x23) + 0x2c) / 0xf << 5 <= uVar5)) {
        uVar7 = 0x40;
        while( true ) {
          uVar2 = FUN_0000cb40(piVar3,0);
          if ((int)uVar2 == 4) {
            uVar2 = 2;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_0000a4d8(*piVar3,*(undefined8 *)(piVar3 + 0xe));
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(char *)piVar3[0x10] != -0x3f) break;
          if (uVar7 < 0x260) {
            thunk_EXT_FUN_8010cc40(uVar7 + iVar1,(char *)piVar3[0x10],0x20);
          }
          uVar7 = uVar7 + 0x20;
          if (uVar5 <= uVar7) {
            if (uVar7 < 0x261) {
              uVar6 = 0;
              uVar5 = 0;
              iVar4 = *(byte *)(iVar1 + 1) + 1;
              if (iVar4 != 0) {
                do {
                  if (uVar5 == 2) {
                    uVar5 = 3;
                  }
                  else {
                    uVar6 = (ulonglong)*(byte *)(uVar5 + iVar1) + (uVar6 & 1) * 0x8000 +
                            (uVar6 >> 1 & 0x7fff);
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < (uint)(iVar4 * 0x20));
              }
              if ((uVar6 & 0xffff) !=
                  (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + 3),*(undefined1 *)(iVar1 + 2))) {
                return 2;
              }
            }
            return 0;
          }
        }
        return 2;
      }
    }
  }
  return 2;
}


/* ==== FUN_0000e138 @ 0000e138 ==== */

void FUN_0000e138(undefined8 param_1,longlong param_2)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  undefined1 *puVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar4 = (undefined1 *)FUN_0000ead8();
  thunk_EXT_FUN_8010d110(puVar4,0,0x40);
  uVar9 = 0;
  *puVar4 = 0x85;
  puVar4[0x20] = 0xc0;
  uVar7 = 0x40;
  uVar8 = 0;
  uVar5 = 1;
  cVar3 = '\0';
  do {
    cVar6 = cVar3;
    puVar4[uVar7] = 0xc1;
    puVar4[uVar7 + 1] = 0;
    uVar7 = uVar7 + 2;
    do {
      psVar2 = (short *)param_2;
      if (uVar5 != 0) {
        uVar5 = *(ushort *)((int)(uVar8 << 1) + (int)psVar2);
        if (uVar5 != 0) {
          uVar8 = uVar8 + 1 & 0xff;
        }
      }
      *(ushort *)(puVar4 + uVar7) = uVar5 >> 8 | uVar5 << 8;
      uVar7 = uVar7 + 2;
    } while ((uVar7 & 0x1f) != 0);
    cVar3 = cVar6 + '\x01';
  } while (*(short *)((int)(uVar8 << 1) + (int)psVar2) != 0);
  puVar4[0x23] = (char)uVar8;
  puVar4[1] = cVar6 + '\x02';
  sVar1 = *psVar2;
  while (sVar1 != 0) {
    uVar8 = FUN_0000e780();
    param_2 = param_2 + 2;
    uVar9 = (uVar8 & 0xff) + (uVar9 & 1) * 0x8000 + (uVar9 >> 1 & 0x7fff);
    uVar9 = (uVar9 * 0x8000 & 0x8000) + ((uVar8 & 0xffff) >> 8) + (uVar9 >> 1 & 0x7fff);
    sVar1 = *(short *)param_2;
  }
  *(ushort *)(puVar4 + 0x24) = (ushort)uVar9 >> 8 | (ushort)(byte)uVar9 << 8;
  return;
}


/* ==== FUN_0000e248 @ 0000e248 ==== */

void FUN_0000e248(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  char acStack_32 [50];
  
  iVar3 = FUN_0000ead8();
  thunk_EXT_FUN_8010cc40(iVar3,param_2,0xb);
  uVar6 = param_4 & 0xffff;
  if (5 < uVar6) {
    uVar1 = *(ushort *)param_3;
    while (uVar9 = (ulonglong)uVar1, uVar9 != 0) {
      param_3 = param_3 + 2;
      lVar11 = 0x10;
      do {
        uVar2 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        uVar6 = uVar2 + (uVar6 & 0x7fffffff) * 2;
        if ((uVar6 & 0x10000) != 0) {
          uVar6 = uVar6 ^ 0x11021;
        }
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uVar1 = *(ushort *)param_3;
    }
    param_4 = uVar6 & 0xffff;
  }
  uVar8 = 7;
  do {
    uVar7 = uVar8;
    uVar6 = param_4 & 0xffff;
    param_4 = (param_4 & 0xffffffff) >> 4 & 0xfff;
    uVar6 = uVar6 + (ulonglong)(uint)((int)uVar6 >> 4) * -0x10 + 0x30;
    cVar5 = (char)uVar6;
    if (0x39 < (uVar6 & 0xff)) {
      cVar5 = cVar5 + '\a';
    }
    acStack_32[uVar7 + 2] = cVar5;
    uVar8 = uVar7 - 1;
  } while ((uVar8 != 0) && (param_4 != 0));
  uVar10 = 0;
  acStack_32[uVar7 + 1] = '~';
  if (uVar8 != 0) {
    do {
      if (*(char *)(uVar10 + iVar3) == ' ') break;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  pcVar4 = acStack_32 + uVar7;
  do {
    if (uVar8 < 8) {
      pcVar4 = pcVar4 + 1;
      cVar5 = *pcVar4;
      uVar8 = uVar8 + 1;
    }
    else {
      cVar5 = ' ';
    }
    *(char *)(uVar10 + iVar3) = cVar5;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 8);
  return;
}


/* ==== FUN_0000e378 @ 0000e378 ==== */

undefined8 FUN_0000e378(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar3 = FUN_0000eac4();
  uVar5 = param_2 - 2;
  lVar6 = (uVar5 >> 0xc & 0xfffff) + *(longlong *)(iVar3 + 0x48);
  uVar8 = (uVar5 & 0xffffffff) >> 3 & 0x1ff;
  uVar7 = 1 << ((uint)uVar5 & 7) & 0xff;
  iVar4 = FUN_0000a4d8(iVar3,lVar6);
  if (iVar4 == 0) {
    do {
      lVar6 = lVar6 + 1;
      do {
        do {
          bVar1 = *(byte *)(iVar3 + 0x54 + (int)uVar8);
          if (param_4 == ((bVar1 & uVar7) != 0)) {
            return 2;
          }
          param_3 = param_3 + -1;
          *(byte *)(iVar3 + 0x54 + (int)uVar8) = bVar1 ^ (byte)uVar7;
          *(undefined1 *)(iVar3 + 4) = 1;
          if (param_3 == 0) {
            return 0;
          }
          uVar2 = uVar7 & 0x7f;
          uVar7 = uVar2 << 1;
        } while (uVar2 != 0);
        uVar8 = uVar8 + 1;
        uVar7 = 1;
      } while ((uVar8 & 0xffffffff) < 0x200);
      uVar8 = 0;
      iVar4 = FUN_0000a4d8(iVar3,lVar6);
    } while (iVar4 == 0);
  }
  return 1;
}


/* ==== FUN_0000e450 @ 0000e450 ==== */

longlong FUN_0000e450(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar2 = FUN_0000eac8();
  uVar7 = 0;
  uVar8 = -(ulonglong)(param_2 - 2U < (ulonglong)*(uint *)(iVar2 + 0x18) - 2) & param_2 - 2U;
  iVar3 = FUN_0000a4d8(iVar2,(uVar8 >> 0xc & 0xfffff) + *(longlong *)(iVar2 + 0x48));
  if (iVar3 == 0) {
    uVar6 = uVar8;
    uVar9 = uVar8;
    do {
      uVar4 = (uVar9 & 0xffffffff) >> 3 & 0x1ff;
      uVar5 = (ulonglong)(uint)(1 << ((uint)uVar9 & 7)) & 0xff;
      do {
        do {
          uVar9 = uVar9 + 1;
          uVar1 = uVar5 & *(byte *)(iVar2 + 0x54 + (int)uVar4);
          uVar5 = (uVar5 & 0x7f) << 1;
          if (((ulonglong)*(uint *)(iVar2 + 0x18) - 2 & 0xffffffff) <= (uVar9 & 0xffffffff)) {
            uVar9 = 0;
            uVar5 = 0;
            uVar4 = 0x200;
          }
          if (uVar1 == 0) {
            uVar7 = uVar7 + 1;
            if ((uVar7 & 0xffffffff) == (param_3 & 0xffffffff)) {
              return uVar6 + 2;
            }
          }
          else {
            uVar7 = 0;
            uVar6 = uVar9;
          }
          if ((uVar9 & 0xffffffff) == (uVar8 & 0xffffffff)) {
            return 0;
          }
        } while (uVar5 != 0);
        uVar4 = uVar4 + 1;
        uVar5 = 1;
      } while ((uVar4 & 0xffffffff) < 0x200);
      iVar3 = FUN_0000a4d8(iVar2,(uVar9 >> 0xc & 0xfffff) + *(longlong *)(iVar2 + 0x48));
    } while (iVar3 == 0);
  }
  return -1;
}


/* ==== FUN_0000e560 @ 0000e560 ==== */

undefined8 FUN_0000e560(int param_1,byte *param_2)

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

undefined8 FUN_0000e618(byte param_1,undefined8 param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_20 [2];
  
  iVar4 = *(int *)(&DAT_8020300c + (uint)param_1 * 4);
  if (iVar4 == 0) {
    thunk_EXT_FUN_80085ee8(0xffffffff80202c8c,param_1);
    uVar6 = 4;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x18);
    uVar3 = *(uint *)(iVar4 + 0x20);
    cVar1 = *(char *)(*(int *)(iVar2 + 0xa0) + 0x1c);
    if (cVar1 == '\a') {
      local_20[0] = (ulonglong)uVar3 * param_3;
    }
    else {
      if (cVar1 != '-') {
        thunk_EXT_FUN_80085ee8
                  (0xffffffff80202cf0,cVar1,param_3,(longlong)(int)uVar3 * (longlong)param_4);
        thunk_EXT_FUN_80085ea0();
        return 4;
      }
      local_20[0] = (*(longlong *)(iVar2 + 0xa8) + param_3) * (ulonglong)uVar3;
    }
    lVar5 = thunk_EXT_FUN_8006b928
                      (3,*(undefined4 *)(iVar2 + 0xa0),param_2,
                       (longlong)(int)uVar3 * (longlong)param_4,local_20);
    if (lVar5 == 0) {
      return 0;
    }
    thunk_EXT_FUN_80085ee8(0xffffffff80202cbc);
    uVar6 = 1;
  }
  thunk_EXT_FUN_80085ea0();
  return uVar6;
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

void FUN_0000e730(int param_1,undefined8 param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x10) = (int)param_2;
  thunk_EXT_FUN_8010d110(param_2,0);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}


/* ==== FUN_0000e780 @ 0000e780 ==== */

uint FUN_0000e780(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  char *pcVar5;
  
  if (0xffff < param_1) {
    return param_1;
  }
  param_1 = param_1 & 0xffff;
  puVar4 = (ushort *)&DAT_80202bd0;
  if (param_1 < 0x1000) {
    puVar4 = (ushort *)&DAT_802029d8;
  }
  uVar1 = *puVar4;
  while( true ) {
    uVar3 = (uint)uVar1;
    if (uVar3 == 0) {
      return param_1;
    }
    if (param_1 < uVar3) break;
    uVar1 = puVar4[1];
    puVar4 = puVar4 + 2;
    uVar2 = uVar1 >> 8;
    if (param_1 < (uVar1 & 0xff) + uVar3) {
      if (uVar2 < 9) {
        if (uVar2 == 1) {
          pcVar5 = (char *)(param_1 - (param_1 - uVar3 & 1));
        }
        else if (uVar2 == 2) {
          pcVar5 = (char *)(param_1 + 0xfff0);
        }
        else if (uVar2 == 3) {
          pcVar5 = (char *)(param_1 + 0xffe0);
        }
        else if (uVar2 == 4) {
          pcVar5 = s__Device_Harddisk0_Partition1_Pee_0000ff88 + param_1 + 0x48;
        }
        else if (uVar2 == 5) {
          pcVar5 = (char *)(param_1 + 0xffe6);
        }
        else if (uVar2 == 6) {
          pcVar5 = (char *)(param_1 + 8);
        }
        else if (uVar2 == 7) {
          pcVar5 = s__Device_Harddisk0_Partition1_Pee_0000ff88 + param_1 + 0x28;
        }
        else {
          if (uVar2 == 0) {
            return (uint)puVar4[param_1 - uVar3];
          }
          pcVar5 = (char *)(param_1 + 0xe3a0);
        }
        param_1 = (uint)pcVar5 & 0xffff;
      }
      return param_1;
    }
    if (uVar2 == 0) {
      puVar4 = puVar4 + (uVar1 & 0xff);
    }
    uVar1 = *puVar4;
  }
  return param_1;
}


/* ==== FUN_0000e8a8 @ 0000e8a8 ==== */

undefined8 FUN_0000e8a8(undefined8 param_1,byte *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  
  iVar4 = FUN_0000eac0();
  if (CONCAT11(param_2[0x1b],param_2[0x1a]) == 0) {
    uVar10 = 0;
    iVar5 = (*param_2 & 0x3f) - 1;
    uVar11 = iVar5 * 0xd;
    puVar9 = (undefined2 *)(iVar5 * 0x1a + iVar4 + -2);
    sVar7 = 1;
    do {
      sVar8 = CONCAT11((param_2 + *(byte *)(uVar10 + 0x80201c00))[1],
                       param_2[*(byte *)(uVar10 + 0x80201c00)]);
      if (sVar7 == 0) {
        bVar1 = sVar8 != -1;
        sVar8 = sVar7;
        if (bVar1) goto LAB_0000e8cc;
      }
      else {
        if (0xff < uVar11) goto LAB_0000e8cc;
        puVar9 = puVar9 + 1;
        uVar2 = *puVar9;
        iVar5 = FUN_0000e780(sVar8);
        iVar6 = FUN_0000e780(uVar2);
        uVar11 = uVar11 + 1;
        if (iVar5 != iVar6) goto LAB_0000e8cc;
      }
      uVar10 = uVar10 + 1;
      sVar7 = sVar8;
    } while (uVar10 < 0xd);
    if ((((*param_2 & 0x40) == 0) || (sVar8 == 0)) ||
       (uVar3 = 0, *(short *)(uVar11 * 2 + iVar4) == 0)) {
      uVar3 = 1;
    }
  }
  else {
LAB_0000e8cc:
    uVar3 = 0;
  }
  return uVar3;
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

undefined8 FUN_0000e9f8(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar3;
  undefined8 uVar2;
  
  bVar3 = FUN_0000ead8();
  param_2 = param_2 & 0xff;
  thunk_EXT_FUN_80085ee8(0xffffffff80202d28,param_2);
  iVar1 = *(int *)(&DAT_8020300c + (uint)bVar3 * 4);
  if (iVar1 == 0) {
    thunk_EXT_FUN_80085ee8(0xffffffff80202c8c,bVar3);
    thunk_EXT_FUN_80085ea0();
LAB_0000ea4c:
    uVar2 = 4;
  }
  else {
    if (param_2 != 0) {
      if (param_2 == 1) {
        *param_3 = *(undefined8 *)(*(int *)(iVar1 + 0x18) + 0xb0);
      }
      else if (param_2 < 3) {
        *(short *)param_3 = (short)*(undefined4 *)(iVar1 + 0x20);
      }
      else {
        if (param_2 != 3) goto LAB_0000ea4c;
        *(undefined4 *)param_3 = 0x80;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== FUN_0000ea9c @ 0000ea9c ==== */

void FUN_0000ea9c(void)

{
  return;
}


/* ==== FUN_0000eab0 @ 0000eab0 ==== */

void FUN_0000eab0(void)

{
  return;
}


/* ==== FUN_0000eab4 @ 0000eab4 ==== */

void FUN_0000eab4(void)

{
  return;
}


/* ==== FUN_0000eab8 @ 0000eab8 ==== */

void FUN_0000eab8(void)

{
  return;
}


/* ==== FUN_0000eabc @ 0000eabc ==== */

void FUN_0000eabc(void)

{
  return;
}


/* ==== FUN_0000eac0 @ 0000eac0 ==== */

void FUN_0000eac0(void)

{
  return;
}


/* ==== FUN_0000eac4 @ 0000eac4 ==== */

void FUN_0000eac4(void)

{
  return;
}


/* ==== FUN_0000eac8 @ 0000eac8 ==== */

void FUN_0000eac8(void)

{
  return;
}


/* ==== FUN_0000eacc @ 0000eacc ==== */

void FUN_0000eacc(void)

{
  return;
}


/* ==== FUN_0000ead0 @ 0000ead0 ==== */

void FUN_0000ead0(void)

{
  return;
}


/* ==== FUN_0000ead4 @ 0000ead4 ==== */

void FUN_0000ead4(void)

{
  return;
}


/* ==== FUN_0000ead8 @ 0000ead8 ==== */

void FUN_0000ead8(void)

{
  return;
}


/* ==== FUN_0000eb00 @ 0000eb00 ==== */

void FUN_0000eb00(void)

{
  return;
}


/* ==== FUN_0000eb5c @ 0000eb5c ==== */

void FUN_0000eb5c(void)

{
  int in_r12;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r12 + -0x58) = in_f21;
  *(undefined8 *)(in_r12 + -0x50) = in_f22;
  *(undefined8 *)(in_r12 + -0x48) = in_f23;
  *(undefined8 *)(in_r12 + -0x40) = in_f24;
  *(undefined8 *)(in_r12 + -0x38) = in_f25;
  *(undefined8 *)(in_r12 + -0x30) = in_f26;
  *(undefined8 *)(in_r12 + -0x28) = in_f27;
  *(undefined8 *)(in_r12 + -0x20) = in_f28;
  *(undefined8 *)(in_r12 + -0x18) = in_f29;
  *(undefined8 *)(in_r12 + -0x10) = in_f30;
  *(undefined8 *)(in_r12 + -8) = in_f31;
  return;
}


/* ==== FUN_0000eb6c @ 0000eb6c ==== */

void FUN_0000eb6c(void)

{
  int in_r12;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r12 + -0x38) = in_f25;
  *(undefined8 *)(in_r12 + -0x30) = in_f26;
  *(undefined8 *)(in_r12 + -0x28) = in_f27;
  *(undefined8 *)(in_r12 + -0x20) = in_f28;
  *(undefined8 *)(in_r12 + -0x18) = in_f29;
  *(undefined8 *)(in_r12 + -0x10) = in_f30;
  *(undefined8 *)(in_r12 + -8) = in_f31;
  return;
}


/* ==== FUN_0000eba8 @ 0000eba8 ==== */

void FUN_0000eba8(void)

{
  return;
}


/* ==== FUN_0000ebb8 @ 0000ebb8 ==== */

void FUN_0000ebb8(void)

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


/* ==== thunk_EXT_FUN_80073484 @ 0000ec38 ==== */

void thunk_EXT_FUN_80073484(void)

{
  (*(code *)&LAB_80073484)();
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


/* ==== thunk_EXT_FUN_8015e218 @ 0000eca8 ==== */

void thunk_EXT_FUN_8015e218(void)

{
  (*(code *)&LAB_8015e218)();
  return;
}


/* ==== thunk_EXT_FUN_8015e2b8 @ 0000ecb8 ==== */

void thunk_EXT_FUN_8015e2b8(void)

{
  (*(code *)&LAB_8015e2b8)();
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


/* ==== thunk_EXT_FUN_80064498 @ 0000ece8 ==== */

void thunk_EXT_FUN_80064498(void)

{
  (*(code *)&LAB_80064498)();
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


/* ==== thunk_EXT_FUN_8008c148 @ 0000ee78 ==== */

void thunk_EXT_FUN_8008c148(void)

{
  (*(code *)&LAB_8008c148)();
  return;
}


/* ==== thunk_EXT_FUN_8008a348 @ 0000ee88 ==== */

void thunk_EXT_FUN_8008a348(void)

{
  (*(code *)&LAB_8008a348)();
  return;
}


/* ==== thunk_EXT_FUN_8008b8e0 @ 0000ee98 ==== */

void thunk_EXT_FUN_8008b8e0(void)

{
  (*(code *)&LAB_8008b8e0)();
  return;
}


/* ==== thunk_EXT_FUN_8007018c @ 0000eea8 ==== */

void thunk_EXT_FUN_8007018c(void)

{
  (*(code *)&LAB_8007018c)();
  return;
}


/* ==== thunk_EXT_FUN_8008b928 @ 0000eeb8 ==== */

void thunk_EXT_FUN_8008b928(void)

{
  (*(code *)&LAB_8008b928)();
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


/* ==== thunk_EXT_FUN_800893e8 @ 0000ef38 ==== */

void thunk_EXT_FUN_800893e8(void)

{
  (*(code *)&LAB_800893e8)();
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


/* ==== thunk_EXT_FUN_8006aea0 @ 0000f008 ==== */

void thunk_EXT_FUN_8006aea0(void)

{
  (*(code *)&LAB_8006aea0)();
  return;
}


/* ==== thunk_EXT_FUN_80089760 @ 0000f018 ==== */

void thunk_EXT_FUN_80089760(void)

{
  (*(code *)&LAB_80089760)();
  return;
}


/* ==== thunk_EXT_FUN_8006b150 @ 0000f028 ==== */

void thunk_EXT_FUN_8006b150(void)

{
  (*(code *)&LAB_8006b150)();
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


/* ==== thunk_EXT_FUN_80086a98 @ 0000f1f8 ==== */

void thunk_EXT_FUN_80086a98(void)

{
  (*(code *)&LAB_80086a98)();
  return;
}


/* ==== thunk_EXT_FUN_80086af0 @ 0000f208 ==== */

void thunk_EXT_FUN_80086af0(void)

{
  (*(code *)&LAB_80086af0)();
  return;
}


/* ==== thunk_EXT_FUN_8010caa0 @ 0000f218 ==== */

void thunk_EXT_FUN_8010caa0(void)

{
  (*(code *)&LAB_8010caa0)();
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


/* ==== thunk_EXT_FUN_816e0c68 @ 0000f2c8 ==== */

void thunk_EXT_FUN_816e0c68(void)

{
  (*(code *)&LAB_816e0c68)();
  return;
}


/* ==== thunk_EXT_FUN_816e0ca0 @ 0000f2d8 ==== */

void thunk_EXT_FUN_816e0ca0(void)

{
  (*(code *)&LAB_816e0ca0)();
  return;
}


/* ==== thunk_EXT_FUN_816e0298 @ 0000f2e8 ==== */

void thunk_EXT_FUN_816e0298(void)

{
  (*(code *)&LAB_816e0298)();
  return;
}


/* ==== thunk_EXT_FUN_816a2588 @ 0000f2f8 ==== */

void thunk_EXT_FUN_816a2588(void)

{
  (*(code *)&LAB_816a2588)();
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


/* ==== thunk_EXT_FUN_81722ed0 @ 0000f3a8 ==== */

void thunk_EXT_FUN_81722ed0(void)

{
  (*(code *)&LAB_81722ed0)();
  return;
}


/* ==== thunk_EXT_FUN_81722ef8 @ 0000f3b8 ==== */

void thunk_EXT_FUN_81722ef8(void)

{
  (*(code *)&LAB_81722ef8)();
  return;
}


/* ==== thunk_EXT_FUN_81722fa8 @ 0000f3c8 ==== */

void thunk_EXT_FUN_81722fa8(void)

{
  (*(code *)&LAB_81722fa8)();
  return;
}


/* ==== thunk_EXT_FUN_817b3d10 @ 0000f3d8 ==== */

void thunk_EXT_FUN_817b3d10(void)

{
  (*(code *)&LAB_817b3d10)();
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


/* ==== thunk_EXT_FUN_8006b928 @ 0000f448 ==== */

void thunk_EXT_FUN_8006b928(void)

{
  (*(code *)&LAB_8006b928)();
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
  byte in_cr3;
  byte in_cr6;
  longlong in_CTR;
  longlong lVar1;
  
  do {
  } while (!(bool)(in_cr0 >> 3 & 1));
  lVar1 = in_CTR + -1;
  if (lVar1 == 0 && (in_cr3 >> 3 & 1) == 0) {
    func_0x0000e040();
  }
  do {
    lVar1 = lVar1 + -1;
  } while (lVar1 == 0 && (in_cr0 >> 3 & 1) == 0);
  do {
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0 && (in_cr0 >> 3 & 1) == 0);
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
  do {
    in_CTR = in_CTR + -1;
  } while (in_CTR != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ==== FUN_00011794 @ 00011794 ==== */

/* WARNING: Control flow encountered bad instruction data */

longlong FUN_00011794(int param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong in_r10;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_r11;
  undefined8 unaff_r22;
  undefined8 unaff_r23;
  int unaff_r24;
  undefined8 unaff_r25;
  longlong unaff_r26;
  int iVar7;
  int unaff_r28;
  int *unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar8;
  int unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr3;
  byte unaff_cr4;
  longlong in_CTR;
  longlong lVar9;
  undefined8 in_stack_00000060;
  byte bStack00000070;
  
  do {
    lVar9 = in_CTR;
    in_CTR = lVar9 + -1;
  } while (lVar9 + -1 == 0 && (in_cr0 >> 3 & 1) == 0);
  if (lVar9 == 2 && (in_cr3 >> 3 & 1) == 0) {
    iVar7 = 0;
    uVar2 = -(ulonglong)(in_r11 < in_r10 - 2U) & in_r11;
    iVar3 = FUN_0000a4d8(param_1,(uVar2 >> 0xc & 0xfffff) + *(longlong *)(param_1 + 0x48));
    if (iVar3 == 0) {
      uVar5 = uVar2;
      uVar8 = uVar2;
      do {
        uVar4 = (uVar8 & 0xffffffff) >> 3 & 0x1ff;
        uVar6 = (ulonglong)(uint)(1 << ((uint)uVar8 & 7)) & 0xff;
        do {
          do {
            uVar8 = uVar8 + 1;
            uVar1 = uVar6 & *(byte *)(param_1 + 0x54 + (int)uVar4);
            uVar6 = (uVar6 & 0x7f) << 1;
            if (((ulonglong)*(uint *)(param_1 + 0x18) - 2 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
              uVar8 = 0;
              uVar6 = 0;
              uVar4 = 0x200;
            }
            if (uVar1 == 0) {
              iVar7 = iVar7 + 1;
              if (iVar7 == param_3) {
                return uVar5 + 2;
              }
            }
            else {
              iVar7 = 0;
              uVar5 = uVar8;
            }
            if ((uVar8 & 0xffffffff) == (uVar2 & 0xffffffff)) {
              return 0;
            }
          } while (uVar6 != 0);
          uVar4 = uVar4 + 1;
          uVar6 = 1;
        } while ((uVar4 & 0xffffffff) < 0x200);
        iVar3 = FUN_0000a4d8(param_1,(uVar8 >> 0xc & 0xfffff) + *(longlong *)(param_1 + 0x48));
      } while (iVar3 == 0);
    }
    unaff_r26 = -1;
  }
  else {
    if (((bool)(in_cr1 >> 1 & 1)) && (lVar9 = lVar9 + -3, lVar9 != 0 || (in_cr1 >> 1 & 1) != 0)) {
      do {
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0 && (in_cr0 >> 3 & 1) == 1);
      if (lVar9 == 1 && (unaff_cr4 & 1) == 0) {
        func_0x00003330();
      }
      if ((bool)(in_cr1 >> 3 & 1)) {
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
    if ((~*(uint *)(unaff_r31 + 0x38) >> 4 & 1) == 1) {
      *(undefined8 *)(unaff_r31 + 0x28) = in_stack_00000060;
      *(undefined8 *)(unaff_r31 + 0x30) = in_stack_00000060;
    }
    else {
      *(undefined8 *)(unaff_r31 + 0x30) = unaff_r25;
      *(undefined8 *)(unaff_r31 + 0x28) = unaff_r25;
    }
    lVar9 = (unaff_r30 & 0x7fffffff) << 1;
    uVar2 = thunk_EXT_FUN_80086a98(&stack0x0000008c,lVar9,1);
    uVar5 = (ulonglong)*(uint *)(unaff_r28 + 4) - 0x40;
    if ((uVar5 & 0xffffffff) < (uVar2 & 0xffffffff)) {
      unaff_r26 = -0x7ffffffb;
      uVar2 = uVar5;
    }
    iVar3 = thunk_EXT_FUN_80086af0(&stack0x0000008c,lVar9,1,unaff_r31 + 0x40,uVar2);
    *(int *)(unaff_r31 + 0x3c) = iVar3;
    *(int *)(unaff_r24 + 0x14) = iVar3 + 0x40;
    *unaff_r29 = *unaff_r29 + 1;
    thunk_EXT_FUN_800643d8(unaff_r22);
    thunk_EXT_FUN_800643d8(unaff_r23);
    thunk_EXT_FUN_800718f8();
    *(int *)(unaff_r24 + 0x10) = (int)unaff_r26;
    thunk_EXT_FUN_8006ac20(unaff_r24,0);
  }
  return unaff_r26;
}


/* ==== FUN_000132f0 @ 000132f0 ==== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000132f0(void)

{
  byte in_cr0;
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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
  longlong in_CTR;
  
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


