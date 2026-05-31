
undefined8 *
FUN_10147d38c(long *param_1,undefined8 param_2,long param_3,long *param_4,long *param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x1;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  byte bVar12;
  long *plVar13;
  byte *pbVar14;
  long unaff_x21;
  long *unaff_x22;
  long *plVar15;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar16 [16];
  byte *pbStack_358;
  long lStack_350;
  long lStack_348;
  byte bStack_339;
  byte *pbStack_338;
  byte **ppbStack_330;
  undefined *puStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined1 ***pppuStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  int aiStack_240 [2];
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 **ppuStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
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
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
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
    puVar6 = (undefined8 *)func_0x000108a4a0f8(&stack0xffffffffffffffd8,0,0);
    return puVar6;
  }
  if (*param_1 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    plVar10 = param_4;
  }
  else {
    plVar10 = param_4;
    lVar3 = _malloc(param_3);
    unaff_x21 = param_3;
    unaff_x23 = param_2;
    if (lVar3 != 0) {
      _memcpy(lVar3,param_2,param_3);
      uStack_d8 = 0x8000000000000000;
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
        _free(param_1[10]);
      }
      param_1[10] = lVar3;
      param_1[0xb] = param_3;
      param_1[9] = -0x8000000000000000;
      lStack_e0 = param_1[0xb];
      lStack_e8 = param_1[10];
      lStack_f0 = param_3;
      if (*param_4 != -0x8000000000000000) {
        lVar3 = param_4[1];
        param_4 = (long *)param_4[2];
        if (param_4 == (long *)0x0) {
          param_3 = 1;
        }
        else {
          param_3 = _malloc(param_4);
          if (param_3 == 0) {
            FUN_107c03c64(1,param_4);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100643504);
            (*pcVar1)();
          }
        }
        _memcpy(param_3,lVar3,param_4);
        uStack_d8 = 0x8000000000000003;
      }
      plStack_d0 = param_4;
      lStack_c8 = param_3;
      plStack_c0 = param_4;
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
  }
  uVar4 = FUN_107c03c64(1,unaff_x21);
  _free(lStack_e8);
  plVar5 = (long *)__Unwind_Resume(uVar4);
  uStack_148 = 0x1006435cc;
  plVar11 = plVar10;
  plVar13 = param_5;
  puStack_150 = &stack0xfffffffffffffff0;
  puVar6 = (undefined8 *)FUN_1013fde34();
  if (puVar6 != (undefined8 *)0x0) {
    return puVar6;
  }
  if ((char)*plVar5 == '\x01') {
    plVar9 = (long *)&UNK_10b24d400;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
LAB_1006437c4:
    plStack_1a0 = unaff_x22;
    plStack_198 = unaff_x25;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_1a0);
LAB_1006437d0:
    plStack_1a0 = unaff_x22;
    plStack_198 = unaff_x24;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_1a0);
  }
  else {
    puVar6 = (undefined8 *)plVar5[1];
    plVar5 = (long *)*puVar6;
    unaff_x24 = (long *)plVar5[1];
    unaff_x22 = (long *)(ulong)(unaff_x24 != (long *)0x7fffffffffffffff);
    unaff_x25 = (long *)(plVar5[2] - (long)unaff_x24);
    plVar15 = unaff_x24;
    if (unaff_x25 < unaff_x22) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar5,unaff_x22,1);
      unaff_x25 = (long *)(plVar5[2] - plVar5[1]);
      plVar15 = (long *)plVar5[1];
    }
    plVar9 = unaff_x22;
    _memset((char *)(*plVar5 + (long)plVar15),0x3a);
    if (unaff_x25 < unaff_x22) goto LAB_1006437c4;
    plVar5[1] = (long)((long)plVar15 + (long)unaff_x22);
    if (unaff_x24 == (long *)0x7fffffffffffffff) {
LAB_100643788:
      puVar7 = &UNK_10b233fc8;
LAB_100643790:
      puVar6 = (undefined8 *)_malloc(0x28);
      if (puVar6 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
        (*pcVar1)();
      }
      puVar6[1] = puVar7;
      *puVar6 = 1;
      puVar6[3] = 0;
      puVar6[2] = unaff_x23;
      puVar6[4] = 0;
      return puVar6;
    }
    plVar5 = (long *)*puVar6;
    lVar3 = plVar5[1];
    unaff_x22 = (long *)(ulong)(lVar3 != 0x7fffffffffffffff);
    unaff_x24 = (long *)(plVar5[2] - lVar3);
    lVar8 = lVar3;
    if (unaff_x24 < unaff_x22) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar5,unaff_x22,1);
      unaff_x24 = (long *)(plVar5[2] - plVar5[1]);
      lVar8 = plVar5[1];
    }
    plVar9 = unaff_x22;
    _memset(*plVar5 + lVar8,0x22);
    if (unaff_x24 < unaff_x22) goto LAB_1006437d0;
    plVar5[1] = (long)(lVar8 + (long)unaff_x22);
    if (lVar3 == 0x7fffffffffffffff) goto LAB_100643788;
    puVar7 = (undefined *)FUN_1006572d8(plVar5,plVar10,param_5);
    if (puVar7 != (undefined *)0x0) goto LAB_100643790;
    plVar10 = (long *)plVar5[1];
    param_5 = (long *)(ulong)(plVar10 != (long *)0x7fffffffffffffff);
    unaff_x22 = (long *)(plVar5[2] - (long)plVar10);
    plVar15 = plVar10;
    if (unaff_x22 < param_5) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar5,param_5,1);
      unaff_x22 = (long *)(plVar5[2] - plVar5[1]);
      plVar15 = (long *)plVar5[1];
    }
    plVar9 = param_5;
    _memset((char *)(*plVar5 + (long)plVar15),0x22);
    if (param_5 <= unaff_x22) {
      plVar5[1] = (long)((long)plVar15 + (long)param_5);
      if (plVar10 != (long *)0x7fffffffffffffff) {
        return (undefined8 *)0x0;
      }
      goto LAB_100643788;
    }
  }
  plStack_1a0 = param_5;
  plStack_198 = unaff_x22;
  auVar16 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_1a0);
  plVar15 = auVar16._0_8_;
  uStack_1a8 = 0x1006437e8;
  ppuStack_1b0 = &puStack_150;
  if (*plVar15 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    bVar12 = (byte)plVar13;
  }
  else {
    plVar10 = plVar13;
    lVar3 = _malloc(plVar9);
    bVar12 = (byte)plVar10;
    plVar10 = plVar13;
    plVar5 = plVar11;
    unaff_x22 = plVar9;
    if (lVar3 != 0) {
      _memcpy(lVar3,auVar16._8_8_,plVar9);
      if (plVar15[9] != -0x8000000000000000 && plVar15[9] != 0) {
        _free(plVar15[10]);
      }
      plVar15[10] = lVar3;
      plVar15[0xb] = (long)plVar9;
      plVar15[9] = -0x8000000000000000;
      lStack_290 = plVar15[0xb];
      lStack_298 = plVar15[10];
      plStack_2a0 = plVar9;
      func_0x0001055bf348(aiStack_240,plVar11,plVar13);
      lStack_280 = lStack_230;
      lVar3 = lStack_238;
      if (aiStack_240[0] == 1) {
        puVar6 = (undefined8 *)thunk_FUN_1088564ec(&UNK_108ca7604,0x26);
        _free(lStack_298);
      }
      else {
        if (lStack_230 == 0) {
          lVar8 = 1;
        }
        else {
          lVar8 = _malloc(lStack_230);
          if (lVar8 == 0) {
            FUN_107c03c64(1,lStack_280);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006438dc);
            (*pcVar1)();
          }
        }
        _memcpy(lVar8,lVar3,lStack_280);
        uStack_288 = 0x8000000000000003;
        lStack_270 = lStack_280;
        lStack_278 = lVar8;
        FUN_101497a9c(aiStack_240,plVar15,&plStack_2a0,&uStack_288);
        lStack_2e8 = lStack_230;
        lStack_2f0 = lStack_238;
        uStack_2d8 = uStack_220;
        uStack_2e0 = uStack_228;
        uStack_2c8 = uStack_210;
        uStack_2d0 = uStack_218;
        uStack_2b8 = uStack_200;
        uStack_2c0 = uStack_208;
        uStack_2b0 = uStack_1f8;
        if (lStack_238 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_2f0);
        }
        puVar6 = (undefined8 *)0x0;
      }
      return puVar6;
    }
  }
  uVar4 = FUN_107c03c64(1,unaff_x22);
  _free(lStack_298);
  auVar16 = __Unwind_Resume(uVar4);
  plVar13 = auVar16._8_8_;
  plVar11 = auVar16._0_8_;
  uStack_2f8 = 0x1006439a8;
  plStack_320 = unaff_x22;
  plStack_318 = plVar5;
  plStack_310 = plVar10;
  uStack_308 = uVar4;
  pppuStack_300 = &ppuStack_1b0;
  puVar6 = (undefined8 *)FUN_10160d630();
  if (*plVar11 != -0x7ffffffffffffffc) {
    return puVar6;
  }
  pbVar14 = (byte *)plVar13[8];
  plVar13[8] = -0x8000000000000000;
  if (pbVar14 == (byte *)0x8000000000000000) {
    FUN_107c05cac(&UNK_108cd581e,0x23,&UNK_10b24f4d8);
    lVar3 = extraout_x1;
LAB_100643b74:
    thunk_FUN_108855060(plVar13,lVar3,1,1,1);
    lVar3 = plVar13[2];
LAB_100643a40:
    *(undefined1 *)(plVar13[1] + lVar3) = 0x20;
    lVar3 = lVar3 + 1;
    plVar13[2] = lVar3;
    if (*plVar13 == lVar3) {
      thunk_FUN_108855060(plVar13,lVar3,1,1,1);
      lVar3 = plVar13[2];
    }
    *(undefined1 *)(plVar13[1] + lVar3) = 0x3d;
    lVar3 = lVar3 + 1;
    plVar13[2] = lVar3;
    if (*plVar13 == lVar3) {
      thunk_FUN_108855060(plVar13,lVar3,1,1,1);
      lVar3 = plVar13[2];
    }
    *(undefined1 *)(plVar13[1] + lVar3) = 0x20;
    plVar13[2] = lVar3 + 1;
    bStack_339 = bVar12 & 1;
    pbStack_338 = &bStack_339;
    ppbStack_330 = &pbStack_338;
    puStack_328 = &DAT_10611f610;
    puVar6 = (undefined8 *)
             __ZN4core3fmt5write17h64810b21425781ecE
                       (plVar13,&UNK_10b4cf200,s__108b38569,&ppbStack_330);
    if ((int)puVar6 == 0) {
      lVar3 = plVar13[2];
      if (*plVar13 == lVar3) {
        puVar6 = (undefined8 *)thunk_FUN_108855060(plVar13,lVar3,1,1,1);
        lVar3 = plVar13[2];
      }
      *(undefined1 *)(plVar13[1] + lVar3) = 10;
      plVar13[2] = lVar3 + 1;
      *plVar11 = -0x7ffffffffffffffc;
      goto joined_r0x000100643b54;
    }
  }
  else {
    lStack_348 = plVar13[10];
    lStack_350 = plVar13[9];
    ppbStack_330 = &pbStack_358;
    puStack_328 = &DAT_10112965c;
    pbStack_358 = pbVar14;
    iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                      (plVar13,&UNK_10b209290,s__108b1bd74,&ppbStack_330);
    if (iVar2 == 0) {
      lVar3 = plVar13[2];
      if (*plVar13 == lVar3) goto LAB_100643b74;
      goto LAB_100643a40;
    }
  }
  puVar6 = (undefined8 *)_malloc(0x26);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x26);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100643bf4);
    (*pcVar1)();
  }
  puVar6[1] = 0x6572727563636f20;
  *puVar6 = 0x726f727265206e61;
  puVar6[3] = 0x6120676e69746972;
  puVar6[2] = 0x77206e6568772064;
  *(undefined8 *)((long)puVar6 + 0x1e) = 0x65756c6176206120;
  *plVar11 = 0x26;
  plVar11[1] = (long)puVar6;
  plVar11[2] = 0x26;
joined_r0x000100643b54:
  if (pbStack_358 != (byte *)0x0) {
    puVar6 = (undefined8 *)_free(lStack_350);
  }
  return puVar6;
}

