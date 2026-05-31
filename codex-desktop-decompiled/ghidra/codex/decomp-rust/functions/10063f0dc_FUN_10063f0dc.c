
undefined8 * FUN_10063f0dc(long *param_1,long param_2,byte *param_3,byte *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long extraout_x1;
  byte *pbVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x21;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 *puStack_2e8;
  long *plStack_2e0;
  long lStack_2d8;
  byte *pbStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [8];
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
LAB_10063f240:
    pbVar8 = &UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
  }
  else {
    unaff_x21 = *(long *)(param_2 + 0x10);
    if (unaff_x21 == 0) {
      puVar3 = (undefined8 *)0x1;
      if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) goto LAB_10063f154;
LAB_10063f20c:
      _free(param_1[10]);
      param_1[10] = (long)puVar3;
      param_1[0xb] = unaff_x21;
      param_1[9] = -0x8000000000000000;
joined_r0x00010063f224:
      if (unaff_x21 != -0x8000000000000000) {
        lStack_e0 = param_1[0xb];
        lStack_e8 = param_1[10];
        uStack_d0 = (ulong)*param_3;
        uStack_d8 = 0x8000000000000001;
        lStack_f0 = unaff_x21;
        FUN_101497a9c(auStack_90,param_1,&lStack_f0,&uStack_d8);
        uStack_138 = uStack_80;
        lStack_140 = lStack_88;
        uStack_128 = uStack_70;
        uStack_130 = uStack_78;
        uStack_118 = uStack_60;
        uStack_120 = uStack_68;
        uStack_108 = uStack_50;
        uStack_110 = uStack_58;
        uStack_100 = uStack_48;
        if (lStack_88 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_140);
        }
        return (undefined8 *)0x0;
      }
      FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
      goto LAB_10063f240;
    }
    uVar11 = *(undefined8 *)(param_2 + 8);
    pbVar8 = param_3;
    puVar3 = (undefined8 *)_malloc(unaff_x21);
    if (puVar3 != (undefined8 *)0x0) {
      _memcpy(puVar3,uVar11,unaff_x21);
      if (unaff_x21 == -0x8000000000000000) {
        return puVar3;
      }
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) goto LAB_10063f20c;
LAB_10063f154:
      param_1[10] = (long)puVar3;
      param_1[0xb] = unaff_x21;
      param_1[9] = -0x8000000000000000;
      goto joined_r0x00010063f224;
    }
  }
  auVar12 = FUN_107c03c64(1,unaff_x21);
  lVar6 = auVar12._8_8_;
  uStack_148 = 0x10063f264;
  uVar11 = *(undefined8 *)(pbVar8 + 8);
  lVar10 = *(long *)(pbVar8 + 0x10);
  puStack_150 = &stack0xfffffffffffffff0;
  if (lVar10 == 0) {
LAB_10063f2b0:
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(lVar10);
    if (lVar4 == 0) {
      FUN_107c03c64(1,lVar10);
      goto LAB_10063f2b0;
    }
  }
  _memcpy(lVar4,uVar11,lVar10);
  if (*(long *)(lVar6 + 0x50) == -0x8000000000000000 || *(long *)(lVar6 + 0x50) == 0) {
    *(long *)(lVar6 + 0x58) = lVar4;
    *(long *)(lVar6 + 0x60) = lVar10;
    *(undefined8 *)(lVar6 + 0x50) = 0x8000000000000000;
  }
  else {
    _free(*(undefined8 *)(lVar6 + 0x58));
    *(long *)(lVar6 + 0x58) = lVar4;
    *(long *)(lVar6 + 0x60) = lVar10;
    *(undefined8 *)(lVar6 + 0x50) = 0x8000000000000000;
  }
  if (lVar10 != -0x8000000000000000) {
    uStack_298 = (ulong)*param_4;
    uStack_2a0 = 0x8000000000000003;
    lStack_200 = lVar10;
    lStack_1f8 = lVar4;
    lStack_1f0 = lVar10;
    puVar3 = (undefined8 *)FUN_101497734(auStack_1e8,lVar6,&lStack_200,&uStack_2a0);
    uStack_248 = uStack_1d8;
    lStack_250 = lStack_1e0;
    uStack_238 = uStack_1c8;
    uStack_240 = uStack_1d0;
    uStack_228 = uStack_1b8;
    uStack_230 = uStack_1c0;
    uStack_218 = uStack_1a8;
    uStack_220 = uStack_1b0;
    uStack_208 = uStack_198;
    uStack_210 = uStack_1a0;
    if (lStack_1e0 != -0x7ffffffffffffffa) {
      puVar3 = (undefined8 *)FUN_100ddb5bc(&lStack_250);
    }
    *auVar12._0_8_ = 0x8000000000000004;
    return puVar3;
  }
  puVar9 = &UNK_10b24a320;
  auVar13 = FUN_107c05cac(&UNK_108cd2aad,0x2b);
  plVar7 = auVar13._8_8_;
  plVar5 = auVar13._0_8_;
  uStack_2a8 = 0x10063f3a4;
  pbStack_2d0 = param_4;
  lStack_2c8 = lVar10;
  lStack_2c0 = lVar6;
  puStack_2b8 = auVar12._0_8_;
  ppuStack_2b0 = &puStack_150;
  puVar3 = (undefined8 *)FUN_10160d630(plVar5,plVar7,&UNK_108cac280,0x1b);
  if (*plVar5 != -0x7ffffffffffffffc) {
    return puVar3;
  }
  lVar10 = plVar7[8];
  plVar7[8] = -0x8000000000000000;
  if (lVar10 == -0x8000000000000000) {
    FUN_107c05cac(&UNK_108cd581e,0x23,&UNK_10b24f4d8);
    lVar10 = extraout_x1;
LAB_10063f588:
    thunk_FUN_108855060(plVar7,lVar10,1,1,1);
    lVar10 = plVar7[2];
  }
  else {
    lStack_2f0 = plVar7[10];
    lStack_2f8 = plVar7[9];
    plStack_2e0 = (long *)&DAT_10112965c;
    lStack_300 = lVar10;
    puStack_2e8 = (undefined1 *)&lStack_300;
    iVar2 = __ZN4core3fmt5write17h64810b21425781ecE(plVar7,&UNK_10b209290,s__108b1bd74,&puStack_2e8)
    ;
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)_malloc(0x26);
      if (puVar3 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0x26);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10063f608);
        (*pcVar1)();
      }
      puVar3[1] = 0x6572727563636f20;
      *puVar3 = 0x726f727265206e61;
      puVar3[3] = 0x6120676e69746972;
      puVar3[2] = 0x77206e6568772064;
      *(undefined8 *)((long)puVar3 + 0x1e) = 0x65756c6176206120;
      *plVar5 = 0x26;
      plVar5[1] = (long)puVar3;
      plVar5[2] = 0x26;
      goto joined_r0x00010063f550;
    }
    lVar10 = plVar7[2];
    if (*plVar7 == lVar10) goto LAB_10063f588;
  }
  *(undefined1 *)(plVar7[1] + lVar10) = 0x20;
  lVar10 = lVar10 + 1;
  plVar7[2] = lVar10;
  if (*plVar7 == lVar10) {
    thunk_FUN_108855060(plVar7,lVar10,1,1,1);
    lVar10 = plVar7[2];
  }
  *(undefined1 *)(plVar7[1] + lVar10) = 0x3d;
  lVar10 = lVar10 + 1;
  plVar7[2] = lVar10;
  if (*plVar7 == lVar10) {
    thunk_FUN_108855060(plVar7,lVar10,1,1,1);
    lVar10 = plVar7[2];
  }
  *(undefined1 *)(plVar7[1] + lVar10) = 0x20;
  plVar7[2] = lVar10 + 1;
  lVar6 = ((ulong)puVar9 & 0xff) * 8;
  puVar3 = (undefined8 *)
           __ZN81__LT_toml__ser__value__ValueSerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17hdebb71f02f8851d9E
                     (&puStack_2e8,plVar7,lVar10,*(undefined8 *)(&UNK_10b254788 + lVar6),
                      *(undefined8 *)(&UNK_108cdb1e8 + lVar6));
  plVar7 = plStack_2e0;
  if (puStack_2e8 == (undefined1 *)0x8000000000000004) {
    lVar10 = plStack_2e0[2];
    if (*plStack_2e0 == lVar10) {
      puVar3 = (undefined8 *)thunk_FUN_108855060(plStack_2e0,lVar10,1,1,1);
      lVar10 = plVar7[2];
    }
    *(undefined1 *)(plVar7[1] + lVar10) = 10;
    plVar7[2] = lVar10 + 1;
    *plVar5 = -0x7ffffffffffffffc;
  }
  else {
    *plVar5 = (long)puStack_2e8;
    plVar5[1] = (long)plStack_2e0;
    plVar5[2] = lStack_2d8;
  }
joined_r0x00010063f550:
  if (lStack_300 != 0) {
    puVar3 = (undefined8 *)_free(lStack_2f8);
  }
  return puVar3;
}

