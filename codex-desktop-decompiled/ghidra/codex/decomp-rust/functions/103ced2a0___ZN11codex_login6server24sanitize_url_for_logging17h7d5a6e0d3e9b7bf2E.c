
void __ZN11codex_login6server24sanitize_url_for_logging17h7d5a6e0d3e9b7bf2E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  ulong extraout_x1_03;
  ulong uVar9;
  long *extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  ulong uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  uStack_90 = 0;
  lStack_b0 = 0;
  uStack_a0 = 0;
  __ZN3url12ParseOptions5parse17h966f9c9374804e81E(&lStack_108,&lStack_b0,param_2,param_3);
  if (lStack_108 != -0x8000000000000000) {
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    uStack_68 = uStack_c0;
    uStack_70 = uStack_c8;
    uStack_60 = uStack_b8;
    uStack_a8 = uStack_100;
    lStack_b0 = lStack_108;
    uStack_98 = uStack_f0;
    uStack_a0 = uStack_f8;
    uStack_88 = uStack_e0;
    uStack_90 = uStack_e8;
    FUN_103ced7d4(&lStack_b0);
    uStack_58 = 0;
    uStack_50 = 1;
    uStack_30 = 0x60000020;
    puStack_40 = &uStack_58;
    uStack_48 = 0;
    puStack_38 = &UNK_10b2f5918;
    iVar2 = func_0x0001055b8dfc(&puStack_40,uStack_a8,uStack_a0);
    if (iVar2 == 0) {
      param_1[1] = uStack_50;
      *param_1 = uStack_58;
      param_1[2] = uStack_48;
      if (lStack_b0 != 0) {
        _free(uStack_a8);
      }
      return;
    }
    func_0x000108a07a3c(&UNK_108dbfea0,0x37,&uStack_21,&UNK_10b2f5a08,&UNK_10b2f5948);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ced260);
    (*pcVar1)();
  }
  puVar3 = (undefined8 *)_malloc(0xd);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0x64696c61766e693c;
    *(undefined8 *)((long)puVar3 + 5) = 0x3e6c72752d64696c;
    *param_1 = 0xd;
    param_1[1] = puVar3;
    param_1[2] = 0xd;
    return;
  }
  uVar4 = func_0x0001087c9084(1,0xd);
  if (lStack_b0 != 0) {
    _free(uStack_a8);
  }
  __Unwind_Resume(uVar4);
  auVar12 = FUN_103d00630();
  lVar7 = auVar12._8_8_;
  if (lVar7 == 0) {
    puVar3 = (undefined8 *)_malloc(0xd);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0x206e776f6e6b6e75;
      *(undefined8 *)((long)puVar3 + 5) = 0x726f727265206e77;
      extraout_x8[6] = -0x8000000000000000;
      *extraout_x8 = 0xd;
      extraout_x8[1] = (long)puVar3;
      extraout_x8[3] = -0x8000000000000000;
      extraout_x8[2] = 0xd;
      return;
    }
    func_0x0001087c9084(1,0xd);
    uVar9 = extraout_x1_03;
    uVar10 = extraout_x8_00;
    goto LAB_103ced700;
  }
  uStack_198 = 0;
  uStack_190 = 0;
  auStack_1a8 = auVar12;
  auStack_188 = auVar12;
  FUN_103cc64cc(&lStack_1f0,auStack_1a8);
  if (lStack_1f0 == -0x7ffffffffffffffb) {
    FUN_103cf422c(&lStack_1f0);
    lVar5 = _malloc(lVar7);
joined_r0x000103ced628:
    if (lVar5 != 0) {
      _memcpy(lVar5,auVar12._0_8_,lVar7);
      extraout_x8[6] = -0x8000000000000000;
      *extraout_x8 = lVar7;
      extraout_x8[1] = lVar5;
      extraout_x8[2] = lVar7;
      extraout_x8[3] = -0x8000000000000000;
      return;
    }
    func_0x0001087c9084(1,lVar7);
    lVar5 = unaff_x20;
  }
  else {
    uStack_198 = uStack_1e0;
    auStack_1a8._8_8_ = lStack_1e8;
    auStack_188._0_8_ = uStack_1d0;
    uStack_190 = uStack_1d8;
    uStack_178 = uStack_1c0;
    auStack_188._8_8_ = uStack_1c8;
    uStack_168 = uStack_1b0;
    uStack_170 = uStack_1b8;
    auStack_1a8._0_8_ = lStack_1f0;
    if (lStack_1f0 < 0) {
LAB_103ced618:
      func_0x000103cf9fd0(auStack_1a8);
      lVar5 = _malloc(lVar7);
      goto joined_r0x000103ced628;
    }
    auVar13 = FUN_105dc9750(auStack_1a8,&UNK_108db9e50,5);
    uVar9 = auVar13._8_8_;
    if ((auVar13._0_8_ & 1) == 0) goto LAB_103ced418;
    if (uStack_198 <= uVar9) {
LAB_103ced718:
      func_0x000108a07bdc(uVar9,uStack_198,&UNK_10b46a548);
      goto LAB_103ced76c;
    }
    lVar5 = auStack_1a8._8_8_ + uVar9 * 0x68;
    if (*(long *)(lVar5 + 0x18) == -0x7ffffffffffffffd) {
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      unaff_x20 = *(long *)(lVar5 + 0x30);
      FUN_103d00630(uVar4,unaff_x20);
      if (extraout_x1 == 0) goto LAB_103ced418;
      if (unaff_x20 != 0) {
        unaff_x21 = _malloc(unaff_x20);
        if (unaff_x21 != 0) {
          _memcpy(unaff_x21,uVar4,unaff_x20);
          if (unaff_x20 == -0x8000000000000000) goto LAB_103ced418;
          goto LAB_103ced4b4;
        }
LAB_103ced4a0:
        func_0x0001087c9084(1,unaff_x20);
        goto LAB_103ced76c;
      }
      unaff_x21 = 1;
    }
    else {
LAB_103ced418:
      auVar13 = FUN_105dc9750(auStack_1a8,&UNK_108db9e50,5);
      uVar9 = auVar13._8_8_;
      if ((auVar13._0_8_ & 1) != 0) {
        if (uStack_198 <= uVar9) goto LAB_103ced718;
        plVar6 = (long *)(auStack_1a8._8_8_ + uVar9 * 0x68 + 0x18);
        if (((-1 < *plVar6) &&
            (plVar6 = (long *)FUN_103d1ab4c(plVar6,&UNK_108c520a8,4), plVar6 != (long *)0x0)) &&
           (*plVar6 == -0x7ffffffffffffffd)) {
          lVar5 = plVar6[2];
          unaff_x20 = plVar6[3];
          FUN_103d00630(lVar5,unaff_x20);
          if (extraout_x1_00 != 0) {
            if (unaff_x20 == 0) {
              unaff_x21 = 1;
            }
            else {
              unaff_x21 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(unaff_x20,1);
              if (unaff_x21 == 0) goto LAB_103ced4a0;
            }
            _memcpy(unaff_x21,lVar5,unaff_x20);
            goto LAB_103ced4b4;
          }
        }
      }
      unaff_x20 = -0x8000000000000000;
    }
LAB_103ced4b4:
    auVar13 = FUN_105dc9750(auStack_1a8,&UNK_108dbe31a,0x11);
    uVar9 = auVar13._8_8_;
    if ((auVar13._0_8_ & 1) == 0) goto LAB_103ced544;
    uVar10 = uStack_198;
    if (uStack_198 <= uVar9) goto LAB_103ced700;
    lVar5 = auStack_1a8._8_8_ + uVar9 * 0x68;
    if (*(long *)(lVar5 + 0x18) == -0x7ffffffffffffffd) {
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(lVar5 + 0x30);
      FUN_103d00630(uVar4,lVar5);
      if (extraout_x1_01 == 0) goto LAB_103ced544;
      if (lVar5 == 0) {
LAB_103ced678:
        lVar7 = 1;
        lVar8 = 1;
      }
      else {
        lVar7 = _malloc(lVar5);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar5);
          goto LAB_103ced76c;
        }
        _memcpy(lVar7,uVar4,lVar5);
        lVar8 = _malloc(lVar5);
        if (lVar8 == 0) {
          func_0x0001087c9084(1,lVar5);
          goto LAB_103ced76c;
        }
      }
LAB_103ced680:
      _memcpy(lVar8,uVar4,lVar5);
      extraout_x8[3] = unaff_x20;
      extraout_x8[4] = unaff_x21;
      extraout_x8[5] = unaff_x20;
      extraout_x8[6] = lVar5;
      lVar11 = 0x40;
      extraout_x8[7] = lVar7;
      lVar7 = lVar5;
      goto LAB_103ced6a4;
    }
LAB_103ced544:
    auVar13 = FUN_105dc9750(auStack_1a8,&UNK_108db9e50,5);
    uVar9 = auVar13._8_8_;
    if ((auVar13._0_8_ & 1) != 0) {
      uVar10 = uStack_198;
      if (uStack_198 <= uVar9) {
LAB_103ced700:
        func_0x000108a07bdc(uVar9,uVar10,&UNK_10b46a548);
        goto LAB_103ced76c;
      }
      lVar5 = auStack_1a8._8_8_ + uVar9 * 0x68;
      if (-1 < *(long *)(lVar5 + 0x18)) {
        auVar13 = FUN_105dc9750((long *)(lVar5 + 0x18),&UNK_108db96eb,7);
        uVar9 = auVar13._8_8_;
        if ((auVar13._0_8_ & 1) != 0) {
          uVar10 = *(ulong *)(lVar5 + 0x28);
          if (uVar10 <= uVar9) goto LAB_103ced700;
          lVar5 = *(long *)(lVar5 + 0x20) + uVar9 * 0x68;
          if (*(long *)(lVar5 + 0x18) == -0x7ffffffffffffffd) {
            uVar4 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(lVar5 + 0x30);
            FUN_103d00630(uVar4,lVar5);
            if (extraout_x1_02 != 0) {
              if (lVar5 == 0) goto LAB_103ced678;
              lVar7 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar5,1);
              if (lVar7 == 0) {
                func_0x0001087c9084(1,lVar5);
                goto LAB_103ced76c;
              }
              _memcpy(lVar7,uVar4,lVar5);
              lVar8 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar5,1);
              if (lVar8 == 0) {
                func_0x0001087c9084(1,lVar5);
                goto LAB_103ced76c;
              }
              goto LAB_103ced680;
            }
          }
        }
      }
    }
    lVar5 = unaff_x20;
    if (unaff_x20 == -0x8000000000000000) goto LAB_103ced618;
  }
  if (lVar5 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = _malloc(lVar5);
    if (lVar8 == 0) {
      func_0x0001087c9084(1,lVar5);
LAB_103ced76c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ced770);
      (*pcVar1)();
    }
  }
  _memcpy(lVar8,unaff_x21,lVar5);
  extraout_x8[3] = lVar5;
  extraout_x8[4] = unaff_x21;
  lVar11 = 0x30;
  extraout_x8[5] = lVar5;
  lVar7 = -0x8000000000000000;
LAB_103ced6a4:
  *(long *)((long)extraout_x8 + lVar11) = lVar7;
  *extraout_x8 = lVar5;
  extraout_x8[1] = lVar8;
  extraout_x8[2] = lVar5;
  func_0x000103cf9fd0(auStack_1a8);
  return;
}

