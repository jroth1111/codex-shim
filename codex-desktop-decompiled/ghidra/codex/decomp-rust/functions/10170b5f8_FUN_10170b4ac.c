
void FUN_10170b4ac(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  byte *extraout_x1;
  byte *pbVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_68;
  byte bStack_60;
  uint uStack_5f;
  uint3 uStack_5b;
  ulong uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar13 = (param_4 + 3 >> 2) * 3;
  if (param_4 == 0) {
    uVar6 = 1;
LAB_10170b500:
    __ZN90__LT_base64__engine__general_purpose__GeneralPurpose_u20_as_u20_base64__engine__Engine_GT_15internal_decode17he8a46a2f798488dbE
              (&lStack_68,param_2,param_3,param_4,uVar6,uVar13,param_4 & 3,uVar13);
    if (lStack_68 == 2) {
      if ((ulong)bStack_60 == 4) {
        puStack_50 = &UNK_10b2560f0;
        puStack_48 = &DAT_10170679c;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__internal_error__entered_unreach_108abccef,&puStack_50,&UNK_10b256100);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10170b5d4);
        (*pcVar5)();
      }
      param_1[1] = (ulong)uStack_5f << 8 | (ulong)uStack_5b << 0x28 | (ulong)bStack_60;
      param_1[2] = uStack_58;
      *param_1 = 0x8000000000000000;
      if (param_4 != 0) {
        _free(uVar6);
      }
    }
    else {
      if (uVar13 <= uStack_58) {
        uStack_58 = uVar13;
      }
      *param_1 = uVar13;
      param_1[1] = uVar6;
      param_1[2] = uStack_58;
    }
    return;
  }
  uVar11 = param_3;
  uVar12 = param_4;
  uVar6 = _calloc(uVar13,1);
  if (uVar6 != 0) goto LAB_10170b500;
  uVar7 = func_0x0001087c9084(1,uVar13);
  if (param_4 != 0) {
    _free();
  }
  auVar15 = __Unwind_Resume(uVar7);
  pbVar10 = auVar15._8_8_;
  puVar8 = auVar15._0_8_;
  bVar3 = *pbVar10;
  uVar6 = (uVar12 / 3) * 4;
  uVar13 = uVar6;
  if (uVar12 % 3 != 0) {
    uVar9 = 2;
    if (uVar12 % 3 != 1) {
      uVar9 = 3;
    }
    uVar13 = uVar6 + 4;
    if ((bVar3 & 1) == 0) {
      uVar13 = uVar9 | uVar6;
    }
  }
  uVar7 = uVar11;
  uVar6 = uVar12;
  if (-1 < (long)uVar13) goto LAB_10170b66c;
  uVar14 = 0;
  do {
    func_0x0001087c9084(uVar14,uVar13);
    pbVar10 = extraout_x1;
    uVar7 = uVar11;
    uVar6 = uVar12;
LAB_10170b66c:
    if (uVar13 == 0) {
      uVar9 = 1;
      break;
    }
    uVar14 = 1;
    uVar11 = uVar7;
    uVar12 = uVar6;
    uVar9 = _calloc(uVar13,1);
  } while (uVar9 == 0);
  uVar6 = __ZN90__LT_base64__engine__general_purpose__GeneralPurpose_u20_as_u20_base64__engine__Engine_GT_15internal_encode17h2d6957cc06403b38E
                    (pbVar10,uVar7,uVar6,uVar9,uVar13);
  if (bVar3 != 0) {
    lVar4 = uVar13 - uVar6;
    if (uVar13 < uVar6) {
      func_0x000108a07904(uVar6,uVar13,uVar13,&UNK_10b2560d8);
      goto LAB_10170b7c0;
    }
    uVar2 = -(int)uVar6 & 3;
    if ((-(int)uVar6 & 3U) != 0) {
      if (uVar13 == uVar6) {
LAB_10170b7b0:
        func_0x000108a07bdc(lVar4,lVar4,&UNK_10b204f98);
        goto LAB_10170b7c0;
      }
      puVar1 = (undefined1 *)(uVar9 + uVar6);
      *puVar1 = 0x3d;
      if (uVar2 != 1) {
        if (lVar4 == 1) goto LAB_10170b7b0;
        puVar1[1] = 0x3d;
        if (uVar2 != 2) {
          if (lVar4 == 2) goto LAB_10170b7b0;
          puVar1[2] = 0x3d;
        }
      }
    }
  }
  func_0x0001055bf348(&uStack_e8,uVar9,uVar13);
  if ((int)uStack_e8 != 1) {
    *puVar8 = uVar13;
    puVar8[1] = uVar9;
    puVar8[2] = uVar13;
    return;
  }
  uStack_c8 = uStack_d8;
  uStack_d0 = uStack_e0;
  uStack_e8 = uVar13;
  uStack_e0 = uVar9;
  uStack_d8 = uVar13;
  func_0x000108a07a3c(&UNK_108cdf4cd,0xc,&uStack_e8,&UNK_10b255048,&UNK_10b256118);
LAB_10170b7c0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10170b7c4);
  (*pcVar5)();
}

