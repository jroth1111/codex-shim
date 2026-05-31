
void FUN_10395e76c(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,long *param_4,
                  undefined8 *param_5,byte *******param_6)

{
  byte *******pppppppbVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  undefined8 *extraout_x1;
  long lVar18;
  undefined1 uVar19;
  undefined2 uVar20;
  byte *******pppppppbVar21;
  long *plVar22;
  byte bVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte *******unaff_x21;
  byte *******pppppppbVar26;
  long lVar27;
  byte *******unaff_x24;
  byte *******unaff_x25;
  undefined8 *unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *unaff_x28;
  byte *******extraout_d0;
  byte *******pppppppbVar28;
  byte *******extraout_var;
  byte *******pppppppbVar29;
  long lVar30;
  byte *******pppppppbVar31;
  byte *******pppppppbVar32;
  undefined1 auVar33 [16];
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  uint auStack_288 [2];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  byte ******ppppppbStack_250;
  undefined8 uStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  byte ******ppppppbStack_228;
  byte ******ppppppbStack_220;
  byte ******ppppppbStack_218;
  byte ******ppppppbStack_210;
  byte ******ppppppbStack_208;
  byte ******ppppppbStack_200;
  byte ******ppppppbStack_1f8;
  byte ******ppppppbStack_1f0;
  byte ******ppppppbStack_1e8;
  byte ******ppppppbStack_1e0;
  byte ******ppppppbStack_1d8;
  undefined4 uStack_1c8;
  undefined3 uStack_1c4;
  byte ******ppppppbStack_1c0;
  byte ******ppppppbStack_1b8;
  byte ******ppppppbStack_1b0;
  byte ******ppppppbStack_1a8;
  byte ******ppppppbStack_1a0;
  byte ******ppppppbStack_198;
  byte *****pppppbStack_190;
  byte *****pppppbStack_188;
  byte ******ppppppbStack_180;
  byte ******ppppppbStack_178;
  byte ******ppppppbStack_170;
  byte ******ppppppbStack_160;
  byte ******ppppppbStack_158;
  byte ******ppppppbStack_150;
  byte ******ppppppbStack_148;
  undefined8 uStack_140;
  byte ******ppppppbStack_138;
  byte ******ppppppbStack_130;
  byte ******ppppppbStack_128;
  byte ******ppppppbStack_120;
  byte ******ppppppbStack_118;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  pppppppbVar32 = param_2._8_8_;
  pppppppbVar31 = param_2._0_8_;
  lVar18 = *param_4;
  pppppppbVar25 = (byte *******)param_4[1];
  lVar27 = param_4[2];
  *param_4 = -0x8000000000000000;
  if (lVar18 != -0x8000000000000000) {
    func_0x00010399b5c0(param_3,param_4 + 3);
    if (*param_3 == 2) {
      if (lVar18 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(pppppppbVar25);
        return;
      }
    }
    else {
      plStack_68 = (long *)param_3[7];
      lStack_70 = param_3[6];
      lStack_58 = param_3[9];
      lVar30 = param_3[8];
      lStack_88 = param_3[3];
      lStack_90 = param_3[2];
      lStack_78 = param_3[5];
      lStack_80 = param_3[4];
      lStack_50 = param_3[10];
      lStack_98 = param_3[1];
      lStack_a0 = *param_3;
      lStack_60 = lVar30;
      if (lVar30 == lStack_70) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar22 = plStack_68;
      if (lVar30 != 0) {
        _memmove(plStack_68 + 3,plStack_68,lVar30 * 0x18);
      }
      *plVar22 = lVar18;
      plVar22[1] = (long)pppppppbVar25;
      plVar22[2] = lVar27;
      param_3[5] = lStack_78;
      param_3[4] = lStack_80;
      param_3[7] = (long)plStack_68;
      param_3[6] = lStack_70;
      param_3[10] = lStack_50;
      param_3[1] = lStack_98;
      *param_3 = lStack_a0;
      param_3[3] = lStack_88;
      param_3[2] = lStack_90;
      param_3[9] = lStack_58;
      param_3[8] = lVar30 + 1;
    }
    return;
  }
  puVar12 = (undefined8 *)_malloc(0x10);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = 0x676e697373696d20;
    *puVar12 = 0x73692065756c6176;
    *param_3 = 0;
    param_3[3] = 0x10;
    param_3[4] = (long)puVar12;
    param_3[6] = 0;
    param_3[5] = 0x10;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[7] = 8;
    return;
  }
  uVar13 = func_0x0001087c9084(1,0x10);
  _free(pppppppbVar25);
  FUN_103938e08(&lStack_a0);
  pppppppbVar14 = (byte *******)__Unwind_Resume(uVar13);
  pppppppbVar1 = uStack_140;
  puStack_b0 = &stack0xfffffffffffffff0;
  uStack_a8 = 0x10395e8fc;
  pppppppbVar21 = (byte *******)*extraout_x1;
  if (pppppppbVar21 == (byte *******)extraout_x1[1]) {
LAB_10395e970:
    *(byte *)pppppppbVar14 = 0x17;
    return;
  }
  *extraout_x1 = pppppppbVar21 + 8;
  extraout_x1[2] = pppppppbVar21 + 4;
  extraout_x1[3] = extraout_x1[3] + 1;
  bVar23 = *(byte *)pppppppbVar21;
  pppppppbVar24 = (byte *******)(ulong)bVar23;
  pppppppbVar26 = (byte *******)0x8000000000000000;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  pppppppbVar15 = pppppppbVar14;
  pppppppbVar17 = pppppppbVar14;
  pppppppbVar16 = pppppppbVar14;
  puVar12 = extraout_x1;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar28 = extraout_d0;
  pppppppbVar29 = extraout_var;
  pppppppbVar29 = extraout_var;
  pppppppbVar29 = extraout_var;
  pppppppbVar29 = extraout_var;
  pppppppbVar29 = extraout_var;
  pppppppbVar29 = extraout_var;
  switch(bVar23) {
  case 0:
  case 0x26:
  case 0x27:
  case 0x2c:
  case 0x3b:
  case 0x4f:
  case 0x50:
  case 0x67:
  case 0x68:
  case 0x7c:
  case 0x93:
  case 0x94:
  case 0xa6:
  case 0xa8:
  case 0xa9:
  case 0xb7:
  case 0xc6:
  case 0xd5:
  case 0xe4:
    pppppppbVar21 = (byte *******)(ulong)*(byte *)((long)pppppppbVar21 + 1);
  default:
    uStack_140 = (byte *******)((ulong)uStack_140 & 0xffffffffffffff00);
code_r0x00010395e96c:
code_r0x00010395eb08:
    uStack_140._0_2_ = CONCAT11((char)pppppppbVar21,(char)uStack_140);
    goto code_r0x00010395ee5c;
  case 1:
    pppppppbVar21 = (byte *******)(ulong)*(byte *)((long)pppppppbVar21 + 1);
  case 0x9d:
    bVar23 = 1;
code_r0x00010395ea54:
code_r0x00010395eb04:
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,bVar23);
    goto code_r0x00010395eb08;
  case 2:
    pppppppbVar21 = (byte *******)(ulong)*(ushort *)((long)pppppppbVar21 + 2);
  case 0x19:
    uVar20 = SUB82(pppppppbVar21,0);
    uVar19 = 2;
code_r0x00010395ecac:
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,uVar19);
    uVar13 = uStack_140;
    uStack_140._4_4_ = SUB84(pppppppbVar1,4);
    uStack_140._0_2_ = (undefined2)uVar13;
    uStack_140._0_4_ = CONCAT22(uVar20,(undefined2)uStack_140);
    goto code_r0x00010395ee5c;
  case 3:
  case 0x40:
    pppppppbVar21 = (byte *******)(ulong)*(uint *)((long)pppppppbVar21 + 4);
    bVar23 = 3;
  case 0x17:
code_r0x00010395ea40:
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,bVar23);
code_r0x00010395ea44:
    uStack_140 = (byte *******)CONCAT44((int)pppppppbVar21,(undefined4)uStack_140);
code_r0x00010395ea48:
    goto code_r0x00010395ee5c;
  case 4:
  case 0x5f:
    pppppppbVar21 = (byte *******)pppppppbVar21[1];
    bVar23 = 4;
  case 0x1f:
  case 0x3c:
  case 0xa7:
  case 0xbb:
code_r0x00010395ecdc:
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,bVar23);
    ppppppbStack_138 = (byte ******)pppppppbVar21;
    goto code_r0x00010395ee5c;
  case 5:
  case 0x46:
  case 0xe6:
    pppppppbVar21 = (byte *******)(ulong)*(byte *)((long)pppppppbVar21 + 1);
    bVar23 = 5;
    goto code_r0x00010395eb04;
  case 6:
  case 0x77:
    pppppppbVar21 = (byte *******)(ulong)*(ushort *)((long)pppppppbVar21 + 2);
  case 0x7d:
  case 0xb3:
    uVar20 = SUB82(pppppppbVar21,0);
    uVar19 = 6;
    goto code_r0x00010395ecac;
  case 7:
    pppppppbVar21 = (byte *******)(ulong)*(uint *)((long)pppppppbVar21 + 4);
  case 0x31:
  case 99:
    bVar23 = 7;
    goto code_r0x00010395ea40;
  case 8:
    pppppppbVar21 = (byte *******)pppppppbVar21[1];
  case 0x8f:
  case 0xfb:
    bVar23 = 8;
    goto code_r0x00010395ecdc;
  case 9:
  case 0x65:
    pppppppbVar28 = (byte *******)(ulong)*(uint *)((long)pppppppbVar21 + 4);
  case 0x25:
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,9);
    uStack_140 = (byte *******)CONCAT44((int)pppppppbVar28,(undefined4)uStack_140);
code_r0x00010395e9f4:
    goto code_r0x00010395ee5c;
  case 10:
    pppppppbVar28 = (byte *******)pppppppbVar21[1];
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,10);
  case 0x69:
    ppppppbStack_138 = (byte ******)pppppppbVar28;
    goto code_r0x00010395ee5c;
  case 0xb:
  case 0x22:
    pppppppbVar21 = (byte *******)(ulong)*(uint *)((long)pppppppbVar21 + 4);
  case 0x38:
    bVar23 = 0xb;
    goto code_r0x00010395ea40;
  case 0xc:
    pppppppbVar25 = (byte *******)pppppppbVar21[3];
    unaff_x21 = (byte *******)pppppppbVar21[2];
  case 0x35:
    pppppppbVar15 = unaff_x21;
    pppppppbVar17 = pppppppbVar25;
    puVar12 = param_5;
    pppppppbVar25 = pppppppbVar17;
    unaff_x21 = pppppppbVar15;
    if (pppppppbVar17 == param_6) {
code_r0x00010395e9d4:
code_r0x00010395e9d8:
      pppppppbVar15 = (byte *******)_memcmp(pppppppbVar15,puVar12);
code_r0x00010395e9dc:
      pppppppbVar17 = pppppppbVar25;
      pppppppbVar25 = pppppppbVar17;
      if ((int)pppppppbVar15 == 0) {
code_r0x00010395ed0c:
        pppppppbVar21 = (byte *******)0x16;
        break;
      }
code_r0x00010395ed3c:
      pppppppbVar15 = unaff_x21;
      pppppppbVar16 = (byte *******)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(pppppppbVar17,1);
      pppppppbVar17 = pppppppbVar25;
      if (pppppppbVar16 != (byte *******)0x0) goto code_r0x00010395edb8;
code_r0x00010395ed4c:
      func_0x0001087c9084(1,pppppppbVar25);
code_r0x00010395ed58:
      pppppppbVar15 = (byte *******)_malloc(0x20);
      if (pppppppbVar15 == (byte *******)0x0) {
        func_0x0001087c906c(8,0x20);
code_r0x00010395eea0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10395eea4);
        (*pcVar2)();
      }
      pppppppbVar15[1] = ppppppbStack_1b8;
      *pppppppbVar15 = ppppppbStack_1c0;
      pppppppbVar15[3] = ppppppbStack_1a8;
      pppppppbVar15[2] = ppppppbStack_1b0;
      uVar19 = 0x13;
code_r0x00010395ed70:
      ppppppbStack_1c0 = (byte ******)CONCAT71(ppppppbStack_1c0._1_7_,uVar19);
      uStack_140 = (byte *******)ppppppbStack_1c0;
      ppppppbStack_138 = (byte ******)pppppppbVar15;
      ppppppbStack_130 = (byte ******)(byte *******)ppppppbStack_1b0;
      ppppppbStack_128 = (byte ******)(byte *******)ppppppbStack_1a8;
    }
    else {
      if (pppppppbVar17 != (byte *******)0x0) goto code_r0x00010395ed3c;
      pppppppbVar16 = (byte *******)0x1;
code_r0x00010395edb8:
      _memcpy(pppppppbVar16,pppppppbVar15,pppppppbVar17);
      uVar19 = 0xc;
code_r0x00010395edcc:
      uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,uVar19);
      ppppppbStack_138 = (byte ******)pppppppbVar17;
      ppppppbStack_130 = (byte ******)pppppppbVar16;
      ppppppbStack_128 = (byte ******)pppppppbVar17;
    }
code_r0x00010395ee3c:
    if ((char)uStack_140 == '\x17') {
      pppppppbVar14[1] = ppppppbStack_138;
      *(byte *)pppppppbVar14 = 0x18;
      return;
    }
    goto code_r0x00010395ee5c;
  case 0xd:
  case 0x6d:
  case 0x89:
    pppppppbVar25 = (byte *******)pppppppbVar21[1];
    unaff_x21 = (byte *******)pppppppbVar21[2];
  case 0xf9:
    bVar9 = unaff_x21 == param_6;
code_r0x00010395ec7c:
    pppppppbVar15 = pppppppbVar25;
    puVar12 = param_5;
    pppppppbVar25 = pppppppbVar15;
    if (!bVar9) {
code_r0x00010395ec94:
      uVar19 = 0xd;
code_r0x00010395ec98:
      uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,uVar19);
      ppppppbStack_138 = (byte ******)pppppppbVar25;
      ppppppbStack_130 = (byte ******)unaff_x21;
code_r0x00010395eca0:
      goto code_r0x00010395ee5c;
    }
code_r0x00010395ec88:
    iVar11 = _memcmp(pppppppbVar15,puVar12,param_6);
    if (iVar11 != 0) goto code_r0x00010395ec94;
    goto code_r0x00010395ed0c;
  case 0xe:
  case 0x53:
    pppppppbVar15 = (byte *******)pppppppbVar21[2];
    pppppppbVar17 = (byte *******)pppppppbVar21[3];
    pppppppbVar25 = pppppppbVar17;
    unaff_x21 = pppppppbVar15;
    if (pppppppbVar17 == param_6) goto code_r0x00010395e994;
    if (pppppppbVar17 != (byte *******)0x0) goto code_r0x00010395ed1c;
    pppppppbVar16 = (byte *******)0x1;
    goto code_r0x00010395ed9c;
  case 0xf:
  case 0xfe:
    pppppppbVar25 = (byte *******)pppppppbVar21[1];
    unaff_x21 = (byte *******)pppppppbVar21[2];
  case 0xc3:
    bVar3 = unaff_x21 == param_6;
code_r0x00010395ea0c:
    if (!bVar3) {
code_r0x00010395ea24:
      uVar19 = 0xf;
      goto code_r0x00010395ec98;
    }
code_r0x00010395ea10:
    pppppppbVar15 = (byte *******)_memcmp(pppppppbVar25,param_5,param_6);
code_r0x00010395ea20:
    if ((int)pppppppbVar15 != 0) goto code_r0x00010395ea24;
    goto code_r0x00010395ed0c;
  case 0x10:
  case 0x37:
  case 0xa5:
  case 0xc5:
    pppppppbVar21 = (byte *******)0x10;
  case 0x21:
  case 0x3e:
    break;
  case 0x11:
    pppppppbVar15 = (byte *******)pppppppbVar21[1];
  case 0x23:
  case 0x42:
    __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE
              (&ppppppbStack_1c0,pppppppbVar15);
    bVar4 = (char)ppppppbStack_1c0 == '\x16';
code_r0x00010395ea6c:
    if (!bVar4) {
code_r0x00010395ea70:
      pppppppbVar15 = (byte *******)0x20;
code_r0x00010395ea74:
      pppppppbVar15 = (byte *******)_malloc(pppppppbVar15);
      if (pppppppbVar15 == (byte *******)0x0) {
        func_0x0001087c906c(8,0x20);
        goto code_r0x00010395eea0;
      }
code_r0x00010395ea7c:
      pppppppbVar15[1] = ppppppbStack_1b8;
      *pppppppbVar15 = ppppppbStack_1c0;
      pppppppbVar15[3] = ppppppbStack_1a8;
      pppppppbVar15[2] = ppppppbStack_1b0;
      pppppppbVar31 = (byte *******)ppppppbStack_1b0;
      pppppppbVar32 = (byte *******)ppppppbStack_1a8;
code_r0x00010395ea84:
      ppppppbStack_1a8 = (byte ******)pppppppbVar32;
      ppppppbStack_1b0 = (byte ******)pppppppbVar31;
      uVar19 = 0x11;
      goto code_r0x00010395ed70;
    }
code_r0x00010395ed00:
    ppppppbStack_138 = ppppppbStack_1b8;
code_r0x00010395edfc:
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,0x17);
    goto code_r0x00010395ee3c;
  case 0x12:
    pppppppbVar21 = (byte *******)0x12;
    break;
  case 0x13:
  case 0xb1:
    __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE
              (&ppppppbStack_1c0,pppppppbVar21[1]);
    bVar10 = (char)ppppppbStack_1c0 == '\x16';
  case 0x59:
    if (bVar10) goto code_r0x00010395ed00;
    goto code_r0x00010395ed58;
  case 0x14:
    pppppppbVar24 = (byte *******)pppppppbVar21[2];
    pppppppbVar21 = (byte *******)pppppppbVar21[3];
  case 0xe8:
    ppppppbStack_1f8 = (byte ******)(pppppppbVar24 + (long)pppppppbVar21 * 4);
    ppppppbStack_200 = (byte ******)pppppppbVar24;
code_r0x00010395ea98:
    ppppppbStack_1f0 = (byte ******)0x0;
    pppppppbVar15 = &ppppppbStack_1c0;
code_r0x00010395eaa0:
    func_0x0001039a1208(pppppppbVar15,&ppppppbStack_200);
code_r0x00010395eaa8:
    pppppppbVar21 = (byte *******)((ulong)ppppppbStack_1c0 & 0xff);
code_r0x00010395eaac:
    bVar5 = (int)pppppppbVar21 == 0x16;
code_r0x00010395eab0:
    if (bVar5) goto code_r0x00010395ed00;
code_r0x00010395eab4:
    pppppppbVar28 = (byte *******)ppppppbStack_1c0;
    pppppppbVar29 = (byte *******)ppppppbStack_1b8;
    pppppppbVar31 = (byte *******)ppppppbStack_1b0;
    pppppppbVar32 = (byte *******)ppppppbStack_1a8;
code_r0x00010395eab8:
    pppppppbVar1 = pppppppbVar28;
    ppppppbStack_138 = (byte ******)pppppppbVar29;
    ppppppbStack_130 = (byte ******)pppppppbVar31;
    ppppppbStack_128 = (byte ******)pppppppbVar32;
code_r0x00010395eabc:
    uStack_140 = pppppppbVar1;
    bVar6 = (char)uStack_140 == '\x17';
code_r0x00010395eac4:
    if (!bVar6) {
      ppppppbStack_1b8 = ppppppbStack_138;
      ppppppbStack_1c0 = (byte ******)uStack_140;
      ppppppbStack_1a8 = ppppppbStack_128;
      ppppppbStack_1b0 = ppppppbStack_130;
code_r0x00010395ead0:
      pppppppbVar21 = (byte *******)ppppppbStack_200;
      pppppppbVar24 = (byte *******)ppppppbStack_1f8;
code_r0x00010395ead4:
      pppppppbVar21 = (byte *******)((long)pppppppbVar24 - (long)pppppppbVar21);
      bVar7 = pppppppbVar21 == (byte *******)0x0;
code_r0x00010395ead8:
      pppppppbVar24 = (byte *******)ppppppbStack_1f0;
      if (!bVar7) {
code_r0x00010395eae0:
        pppppppbVar15 = (byte *******)((long)pppppppbVar24 + ((ulong)pppppppbVar21 >> 5));
        ppppppbStack_160 = (byte ******)pppppppbVar24;
code_r0x00010395eae8:
code_r0x00010395eaf0:
        pppppppbVar15 = (byte *******)FUN_10894d600(pppppppbVar15,&ppppppbStack_160);
code_r0x00010395eaf8:
code_r0x00010395eebc:
        uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,0x17);
        ppppppbStack_138 = (byte ******)pppppppbVar15;
        if ((char)ppppppbStack_1c0 != '\x16') {
          FUN_10393b6bc(&ppppppbStack_1c0);
        }
      }
    }
    goto code_r0x00010395ee3c;
  case 0x15:
    pppppppbVar25 = (byte *******)pppppppbVar21[2];
    pppppppbVar21 = (byte *******)pppppppbVar21[3];
    pppppppbVar26 = (byte *******)((long)pppppppbVar21 << 6);
  case 0xf5:
    ppppppbStack_220 = (byte ******)((long)pppppppbVar25 + (long)pppppppbVar26);
code_r0x00010395eb20:
    unaff_x24 = pppppppbVar21;
    if ((byte *******)0x3fff < pppppppbVar21) {
      unaff_x24 = (byte *******)0x4000;
    }
    if (pppppppbVar21 == (byte *******)0x0) {
      ppppppbStack_218 = (byte ******)0x0;
      ppppppbStack_210 = (byte ******)0x8;
      ppppppbStack_208 = (byte ******)0x0;
      pppppppbVar31 = pppppppbVar25;
      pppppppbVar32 = (byte *******)0x0;
    }
    else {
code_r0x00010395eb30:
      unaff_x21 = (byte *******)((long)unaff_x24 << 6);
code_r0x00010395eb34:
      pppppppbVar15 = unaff_x21;
      puVar12 = (undefined8 *)0x8;
      unaff_x21 = pppppppbVar15;
code_r0x00010395eb3c:
      pppppppbVar15 =
           (byte *******)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(pppppppbVar15,puVar12);
      if (pppppppbVar15 == (byte *******)0x0) {
        uVar13 = func_0x0001087c9084(8,unaff_x21);
        if ((char)ppppppbStack_1c0 != '\x16') {
          FUN_10393b6bc(&uStack_140);
        }
        __Unwind_Resume(uVar13);
        auVar33 = func_0x000108a07bc4();
        lVar18 = auVar33._8_8_;
        puVar12 = auVar33._0_8_;
        plVar22 = *(long **)(lVar18 + 8);
        if (plVar22 != *(long **)(lVar18 + 0x18)) {
          lStack_2d0 = *plVar22;
          *(long **)(lVar18 + 8) = plVar22 + 9;
          if (lStack_2d0 != -0x7ffffffffffffffb) {
            pcStack_238 = FUN_10395ef98;
            lStack_2c0 = plVar22[2];
            lStack_2c8 = plVar22[1];
            lStack_2b0 = plVar22[4];
            lStack_2b8 = plVar22[3];
            lStack_2a0 = plVar22[6];
            lStack_2a8 = plVar22[5];
            lStack_290 = plVar22[8];
            lStack_298 = plVar22[7];
            ppppppbStack_250 = (byte ******)pppppppbVar25;
            uStack_248 = uVar13;
            ppuStack_240 = &puStack_b0;
            func_0x00010398d934(auStack_288,&lStack_2d0);
            if ((auStack_288[0] & 1) == 0) {
              puVar12[2] = uStack_278;
              puVar12[1] = uStack_280;
              puVar12[4] = uStack_268;
              puVar12[3] = uStack_270;
              puVar12[6] = uStack_258;
              puVar12[5] = uStack_260;
              uVar13 = 1;
            }
            else {
              puVar12[1] = uStack_280;
              uVar13 = 2;
            }
            *puVar12 = uVar13;
            return;
          }
        }
        *puVar12 = 0;
        return;
      }
code_r0x00010395eb44:
      ppppppbStack_208 = (byte ******)0x0;
      ppppppbStack_218 = (byte ******)unaff_x24;
      ppppppbStack_210 = (byte ******)pppppppbVar15;
code_r0x00010395eb4c:
      unaff_x26 = &uStack_140;
      unaff_x28 = (undefined4 *)((ulong)&ppppppbStack_180 | 1);
      unaff_x25 = &ppppppbStack_1c0;
      unaff_x27 = (undefined4 *)((ulong)unaff_x25 | 1);
      pppppppbVar21 = (byte *******)((ulong)(pppppppbVar26 + -8) >> 6);
code_r0x00010395eb68:
      pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
code_r0x00010395eb6c:
      ppppppbStack_228 = (byte ******)pppppppbVar21;
code_r0x00010395eb70:
      unaff_x24 = (byte *******)0x1;
code_r0x00010395eb74:
code_r0x00010395ebb0:
      do {
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE
                  (&ppppppbStack_160,pppppppbVar25);
        pppppppbVar21 = (byte *******)((ulong)ppppppbStack_160 & 0xff);
code_r0x00010395ebc0:
        pppppppbVar26 = (byte *******)ppppppbStack_158;
        if ((int)pppppppbVar21 == 0x16) {
code_r0x00010395edf0:
          func_0x00010392e180(&ppppppbStack_218);
          ppppppbStack_138 = (byte ******)pppppppbVar26;
          goto code_r0x00010395edfc;
        }
        unaff_x21 = pppppppbVar25 + 4;
code_r0x00010395ebcc:
        pppppppbVar28 = (byte *******)ppppppbStack_160;
        pppppppbVar29 = (byte *******)ppppppbStack_158;
        pppppppbVar31 = (byte *******)ppppppbStack_150;
code_r0x00010395ebd0:
        ppppppbStack_180 = (byte ******)pppppppbVar28;
        ppppppbStack_178 = (byte ******)pppppppbVar29;
        ppppppbStack_170 = (byte ******)pppppppbVar31;
code_r0x00010395ebd4:
        pppppppbVar21 = &ppppppbStack_160;
code_r0x00010395ebd8:
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(pppppppbVar21,unaff_x21);
        pppppppbVar28 = (byte *******)ppppppbStack_160;
        pppppppbVar29 = (byte *******)ppppppbStack_158;
        pppppppbVar31 = (byte *******)ppppppbStack_150;
        pppppppbVar32 = (byte *******)ppppppbStack_148;
        if ((char)ppppppbStack_160 == '\x16') {
          FUN_10393b6bc(&ppppppbStack_180);
          pppppppbVar26 = (byte *******)ppppppbStack_158;
          goto code_r0x00010395edf0;
        }
code_r0x00010395ebf0:
        unaff_x26[3] = pppppppbVar29;
        unaff_x26[2] = pppppppbVar28;
        unaff_x26[5] = pppppppbVar32;
        unaff_x26[4] = pppppppbVar31;
code_r0x00010395ebf4:
        pppppppbVar21 = (byte *******)((ulong)ppppppbStack_180 & 0xff);
code_r0x00010395ebf8:
        uStack_1c8 = *unaff_x28;
        pppppppbVar24 = (byte *******)(ulong)*(uint *)((long)unaff_x28 + 3);
code_r0x00010395ec04:
        uStack_1c8._3_1_ = SUB81(pppppppbVar24,0);
        uStack_1c4 = (undefined3)((ulong)pppppppbVar24 >> 8);
        pppppppbVar26 = (byte *******)ppppppbStack_178;
code_r0x00010395ec0c:
        pppppppbVar28 = (byte *******)ppppppbStack_130;
        pppppppbVar29 = (byte *******)ppppppbStack_128;
        pppppppbVar31 = (byte *******)ppppppbStack_120;
        pppppppbVar32 = (byte *******)ppppppbStack_118;
code_r0x00010395ec10:
        pppppppbVar24 = &ppppppbStack_180;
        ppppppbStack_1f0 = (byte ******)pppppppbVar28;
        ppppppbStack_1e8 = (byte ******)pppppppbVar29;
        ppppppbStack_1e0 = (byte ******)pppppppbVar31;
        ppppppbStack_1d8 = (byte ******)pppppppbVar32;
code_r0x00010395ec18:
        pppppppbVar32 = (byte *******)pppppppbVar24[3];
        pppppppbVar31 = (byte *******)pppppppbVar24[2];
code_r0x00010395ec1c:
        ppppppbStack_200 = (byte ******)pppppppbVar31;
        ppppppbStack_1f8 = (byte ******)pppppppbVar32;
        if ((int)pppppppbVar21 == 0x16) {
          pppppppbVar31 = pppppppbVar25 + 8;
          pppppppbVar32 = unaff_x24;
          break;
        }
code_r0x00010395ec28:
        if ((int)pppppppbVar21 == 0x17) goto code_r0x00010395edf0;
code_r0x00010395ec30:
        ppppppbStack_1c0 = (byte ******)CONCAT71(ppppppbStack_1c0._1_7_,(char)pppppppbVar21);
code_r0x00010395ec34:
        *unaff_x27 = uStack_1c8;
        pppppppbVar21 = (byte *******)(ulong)CONCAT31(uStack_1c4,uStack_1c8._3_1_);
code_r0x00010395ec40:
        *(int *)((long)unaff_x27 + 3) = (int)pppppppbVar21;
code_r0x00010395ec44:
        pppppppbVar28 = (byte *******)ppppppbStack_200;
        pppppppbVar29 = (byte *******)ppppppbStack_1f8;
        pppppppbVar31 = (byte *******)ppppppbStack_1f0;
        pppppppbVar32 = (byte *******)ppppppbStack_1e8;
        ppppppbStack_1b8 = (byte ******)pppppppbVar26;
code_r0x00010395ec4c:
        unaff_x25[3] = (byte ******)pppppppbVar29;
        unaff_x25[2] = (byte ******)pppppppbVar28;
        unaff_x25[5] = (byte ******)pppppppbVar32;
        unaff_x25[4] = (byte ******)pppppppbVar31;
        unaff_x25[7] = ppppppbStack_1d8;
        unaff_x25[6] = ppppppbStack_1e0;
code_r0x00010395ec58:
        pppppppbVar25 = (byte *******)ppppppbStack_208;
code_r0x00010395ec5c:
        bVar8 = pppppppbVar25 == (byte *******)ppppppbStack_218;
code_r0x00010395ec64:
        if (bVar8) {
code_r0x00010395ec68:
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&ppppppbStack_218);
code_r0x00010395ec70:
        }
        pppppppbVar21 = (byte *******)(ppppppbStack_210 + (long)pppppppbVar25 * 8);
        pppppppbVar21[1] = ppppppbStack_1b8;
        *pppppppbVar21 = ppppppbStack_1c0;
        pppppppbVar21[3] = ppppppbStack_1a8;
        pppppppbVar21[2] = ppppppbStack_1b0;
        pppppppbVar28 = (byte *******)ppppppbStack_1a0;
        pppppppbVar29 = (byte *******)ppppppbStack_198;
code_r0x00010395eb8c:
        pppppppbVar21[5] = (byte ******)pppppppbVar29;
        pppppppbVar21[4] = (byte ******)pppppppbVar28;
        pppppppbVar21[7] = (byte ******)pppppbStack_188;
        pppppppbVar21[6] = (byte ******)pppppbStack_190;
        ppppppbStack_208 = (byte ******)((long)pppppppbVar25 + 1);
        unaff_x24 = (byte *******)((long)unaff_x24 + 1);
        pppppppbVar25 = unaff_x21 + 4;
code_r0x00010395eba4:
        pppppppbVar21 = (byte *******)ppppppbStack_220;
code_r0x00010395eba8:
        pppppppbVar31 = (byte *******)ppppppbStack_220;
        pppppppbVar32 = (byte *******)ppppppbStack_228;
      } while (pppppppbVar25 != pppppppbVar21);
    }
    ppppppbStack_128 = ppppppbStack_208;
    ppppppbStack_130 = ppppppbStack_210;
    uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,0x15);
    ppppppbStack_138 = ppppppbStack_218;
    ppppppbStack_1b8 = ppppppbStack_218;
    ppppppbStack_1c0 = (byte ******)uStack_140;
    ppppppbStack_1a8 = ppppppbStack_208;
    ppppppbStack_1b0 = ppppppbStack_210;
    if ((long)ppppppbStack_220 - (long)pppppppbVar31 != 0) {
      ppppppbStack_200 = (byte ******)pppppppbVar32;
      pppppppbVar15 =
           (byte *******)
           FUN_10894d600((byte *)((long)pppppppbVar32 +
                                 ((ulong)((long)ppppppbStack_220 - (long)pppppppbVar31) >> 6)),
                         &ppppppbStack_200,&UNK_10b2dac80);
      goto code_r0x00010395eebc;
    }
    goto code_r0x00010395ee3c;
  case 0x16:
  case 0x2d:
    goto code_r0x00010395ea24;
  case 0x18:
  case 0xad:
    goto code_r0x00010395e9d4;
  case 0x1a:
  case 0x30:
  case 0xb4:
code_r0x00010395e994:
    puVar12 = param_5;
  case 0x43:
    pppppppbVar17 = pppppppbVar25;
    iVar11 = _memcmp(pppppppbVar15,puVar12);
    pppppppbVar15 = unaff_x21;
    if (iVar11 == 0) {
code_r0x00010395e9a4:
      goto code_r0x00010395ed0c;
    }
code_r0x00010395ed1c:
    pppppppbVar16 = (byte *******)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(pppppppbVar17,1);
    pppppppbVar25 = pppppppbVar17;
    unaff_x21 = pppppppbVar15;
code_r0x00010395ed28:
    pppppppbVar15 = unaff_x21;
    pppppppbVar17 = pppppppbVar25;
    if (pppppppbVar16 != (byte *******)0x0) {
code_r0x00010395ed9c:
      _memcpy(pppppppbVar16,pppppppbVar15,pppppppbVar17);
      uVar19 = 0xe;
      goto code_r0x00010395edcc;
    }
    goto code_r0x00010395ed4c;
  case 0x1b:
  case 0x44:
  case 0xf2:
    goto code_r0x00010395ea48;
  case 0x1c:
  case 0x55:
    goto code_r0x00010395ea70;
  case 0x1d:
  case 0x3f:
  case 0x51:
    goto code_r0x00010395ea10;
  case 0x1e:
    goto code_r0x00010395ea98;
  case 0x20:
    goto code_r0x00010395ea84;
  case 0x24:
  case 0x52:
  case 0x54:
  case 0x56:
  case 0x5e:
  case 0x60:
  case 100:
  case 0x66:
  case 0x70:
  case 0x88:
  case 0x8c:
  case 0x96:
    goto code_r0x00010395e96c;
  case 0x28:
    goto code_r0x00010395eac4;
  case 0x29:
  case 0x36:
  case 0x6f:
    goto code_r0x00010395ead0;
  case 0x2a:
    goto code_r0x00010395eaac;
  case 0x2b:
  case 0x32:
  case 0xbe:
    goto code_r0x00010395eab8;
  case 0x2e:
    goto code_r0x00010395e9dc;
  case 0x2f:
  case 0x41:
    goto code_r0x00010395e9f4;
  case 0x33:
    goto code_r0x00010395ea0c;
  case 0x34:
    goto code_r0x00010395eae8;
  case 0x39:
  case 0xb9:
  case 0xf7:
    goto code_r0x00010395ea54;
  case 0x3a:
  case 0x87:
    goto LAB_10395e970;
  case 0x3d:
  case 0x95:
    goto code_r0x00010395e9d8;
  case 0x45:
    goto code_r0x00010395ea40;
  case 0x47:
  case 0xeb:
    goto code_r0x00010395eb44;
  case 0x48:
    goto code_r0x00010395ea74;
  case 0x49:
    goto code_r0x00010395ebd0;
  case 0x4a:
    goto code_r0x00010395ec18;
  case 0x4b:
  case 0xe9:
    goto code_r0x00010395eb8c;
  case 0x4c:
  case 0xfd:
    goto code_r0x00010395eca0;
  case 0x4d:
    goto code_r0x00010395eabc;
  case 0x4e:
    goto code_r0x00010395ec5c;
  case 0x57:
    goto code_r0x00010395ed28;
  case 0x5b:
    goto code_r0x00010395ec44;
  case 0x5d:
  case 0xff:
    goto code_r0x00010395eaa0;
  case 0x61:
    goto code_r0x00010395ed58;
  case 0x6b:
    goto code_r0x00010395eb74;
  case 0x71:
  case 0xd2:
  case 0xe1:
  case 0xec:
    goto code_r0x00010395ec1c;
  case 0x73:
    goto code_r0x00010395ebcc;
  case 0x75:
    goto code_r0x00010395ebf4;
  case 0x79:
  case 0x8d:
  case 0xbf:
    goto code_r0x00010395eba4;
  case 0x7b:
  case 0x8b:
  case 0xc2:
    goto code_r0x00010395e9a4;
  case 0x7f:
    goto code_r0x00010395eb08;
  case 0x81:
    goto code_r0x00010395ec0c;
  case 0x83:
  case 0xb0:
    goto code_r0x00010395eb70;
  case 0x85:
  case 0xc9:
  case 0xd8:
    goto code_r0x00010395ec40;
  case 0x91:
    goto code_r0x00010395eb3c;
  case 0x97:
    goto code_r0x00010395ead4;
  case 0x99:
    goto code_r0x00010395ed3c;
  case 0x9b:
  case 0xf4:
    goto code_r0x00010395ebd8;
  case 0x9f:
    goto code_r0x00010395eaa8;
  case 0xa1:
    break;
  case 0xa3:
  case 0xba:
    goto code_r0x00010395ea7c;
  case 0xaa:
  case 0xf1:
    goto code_r0x00010395ebb0;
  case 0xab:
    goto code_r0x00010395eaf0;
  case 0xac:
    goto code_r0x00010395eb30;
  case 0xae:
    goto code_r0x00010395ebf0;
  case 0xaf:
    goto code_r0x00010395ec68;
  case 0xb2:
    goto code_r0x00010395eab0;
  case 0xb5:
    goto code_r0x00010395ea44;
  case 0xb6:
    goto code_r0x00010395ec30;
  case 0xb8:
  case 0xfc:
    goto code_r0x00010395eae0;
  case 0xbc:
    goto code_r0x00010395eaf8;
  case 0xbd:
    goto code_r0x00010395eb4c;
  case 0xc0:
    goto code_r0x00010395ea20;
  case 0xc1:
    goto code_r0x00010395eb6c;
  case 0xc4:
    goto code_r0x00010395eb34;
  case 199:
  case 0xd6:
    goto code_r0x00010395ec58;
  case 200:
  case 0xd7:
    goto code_r0x00010395ec34;
  case 0xca:
  case 0xd9:
  case 0xf8:
    goto code_r0x00010395ec10;
  case 0xcb:
  case 0xda:
    goto code_r0x00010395ec64;
  case 0xcc:
  case 0xdb:
    goto code_r0x00010395ec7c;
  case 0xcd:
  case 0xdc:
    goto code_r0x00010395ec4c;
  case 0xce:
  case 0xdd:
    goto code_r0x00010395ec94;
  case 0xcf:
  case 0xde:
    goto code_r0x00010395ec28;
  case 0xd0:
  case 0xdf:
    goto code_r0x00010395ec88;
  case 0xd1:
  case 0xe0:
    goto code_r0x00010395ec04;
  case 0xd3:
  case 0xe2:
    goto code_r0x00010395ec70;
  case 0xd4:
  case 0xe3:
  case 0xee:
    goto code_r0x00010395ebf8;
  case 0xe5:
  case 0xf6:
    goto code_r0x00010395eb68;
  case 0xe7:
    goto code_r0x00010395eb20;
  case 0xea:
    goto code_r0x00010395ebd4;
  case 0xed:
    goto code_r0x00010395ead8;
  case 0xef:
    goto code_r0x00010395ea6c;
  case 0xf0:
    goto code_r0x00010395eab4;
  case 0xf3:
    goto code_r0x00010395ebc0;
  case 0xfa:
    goto code_r0x00010395eba8;
  }
  uStack_140 = (byte *******)CONCAT71(uStack_140._1_7_,(char)pppppppbVar21);
code_r0x00010395ee5c:
  pppppppbVar14[1] = ppppppbStack_138;
  *pppppppbVar14 = (byte ******)uStack_140;
  pppppppbVar14[3] = ppppppbStack_128;
  pppppppbVar14[2] = ppppppbStack_130;
  return;
}

