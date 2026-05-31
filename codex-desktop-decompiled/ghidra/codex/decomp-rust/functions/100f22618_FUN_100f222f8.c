
/* WARNING: Type propagation algorithm not settling */

void FUN_100f222f8(long *param_1,long *param_2,ulong *******param_3,ulong *******param_4)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  long lVar14;
  byte *pbVar16;
  ulong *******pppppppuVar17;
  ulong *******pppppppuVar18;
  uint uVar19;
  byte *pbVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  long lVar24;
  ulong *******pppppppuVar25;
  ulong *******pppppppuVar26;
  undefined4 *unaff_x26;
  byte *unaff_x27;
  undefined4 *unaff_x28;
  ulong uVar27;
  ulong *******pppppppuVar28;
  ulong ******ppppppuVar29;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  long lVar32;
  ulong *******pppppppuVar33;
  ulong ******ppppppuVar34;
  ulong *******pppppppuVar35;
  ulong ******ppppppuVar36;
  undefined1 auVar37 [16];
  ulong *******pppppppuStack_2e8;
  undefined1 uStack_2df;
  ushort uStack_2de;
  uint uStack_2dc;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong *******pppppppuStack_2a0;
  ulong *******pppppppuStack_298;
  ulong *******pppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong *******pppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong uStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
  ulong *******pppppppuStack_238;
  ulong *******pppppppuStack_228;
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  ulong ******ppppppuStack_210;
  ulong *******pppppppuStack_208;
  ulong *******pppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  ulong *******pppppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong *******pppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
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
  long *plVar10;
  long *plVar15;
  
  uVar3 = uStack_2c0;
  lVar1 = *param_2;
  lVar14 = param_2[1];
  lVar24 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_101353020(param_1,param_2 + 3);
    if (*param_1 == 2) {
      if (lVar1 != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar14);
        return;
      }
    }
    else {
      plStack_68 = (long *)param_1[7];
      lStack_70 = param_1[6];
      lStack_58 = param_1[9];
      lVar32 = param_1[8];
      lStack_88 = param_1[3];
      lStack_90 = param_1[2];
      lStack_78 = param_1[5];
      lStack_80 = param_1[4];
      lStack_50 = param_1[10];
      lStack_98 = param_1[1];
      lStack_a0 = *param_1;
      lStack_60 = lVar32;
      if (lVar32 == lStack_70) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar10 = plStack_68;
      if (lVar32 != 0) {
        _memmove(plStack_68 + 3,plStack_68,lVar32 * 0x18);
      }
      *plVar10 = lVar1;
      plVar10[1] = lVar14;
      plVar10[2] = lVar24;
      param_1[5] = lStack_78;
      param_1[4] = lStack_80;
      param_1[7] = (long)plStack_68;
      param_1[6] = lStack_70;
      param_1[10] = lStack_50;
      param_1[1] = lStack_98;
      *param_1 = lStack_a0;
      param_1[3] = lStack_88;
      param_1[2] = lStack_90;
      param_1[9] = lStack_58;
      param_1[8] = lVar32 + 1;
    }
    return;
  }
  puVar8 = (undefined8 *)_malloc(0x10);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0x676e697373696d20;
    *puVar8 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar8;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    return;
  }
  uVar9 = func_0x0001087c9084(1,0x10);
  _free(lVar14);
  FUN_100de3b58(&lStack_a0);
  auVar37 = __Unwind_Resume(uVar9);
  plVar15 = auVar37._8_8_;
  plVar10 = auVar37._0_8_;
  lVar1 = *plVar15;
  lVar14 = plVar15[1];
  lVar24 = plVar15[2];
  *plVar15 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    func_0x0001013aec7c(plVar10,plVar15 + 3);
    if (*plVar10 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_108 = (long *)plVar10[7];
      lStack_110 = plVar10[6];
      lStack_f8 = plVar10[9];
      lVar32 = plVar10[8];
      lStack_128 = plVar10[3];
      lStack_130 = plVar10[2];
      lStack_118 = plVar10[5];
      lStack_120 = plVar10[4];
      lStack_f0 = plVar10[10];
      lStack_138 = plVar10[1];
      lStack_140 = *plVar10;
      lStack_100 = lVar32;
      if (lVar32 == lStack_110) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_110);
      }
      plVar15 = plStack_108;
      if (lVar32 != 0) {
        _memmove(plStack_108 + 3,plStack_108,lVar32 * 0x18);
      }
      *plVar15 = lVar1;
      plVar15[1] = lVar14;
      plVar15[2] = lVar24;
      plVar10[5] = lStack_118;
      plVar10[4] = lStack_120;
      plVar10[7] = (long)plStack_108;
      plVar10[6] = lStack_110;
      plVar10[10] = lStack_f0;
      plVar10[1] = lStack_138;
      *plVar10 = lStack_140;
      plVar10[3] = lStack_128;
      plVar10[2] = lStack_130;
      plVar10[9] = lStack_f8;
      plVar10[8] = lVar32 + 1;
    }
    return;
  }
  puVar8 = (undefined8 *)_malloc(0x10);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0x676e697373696d20;
    *puVar8 = 0x73692065756c6176;
    *plVar10 = 0;
    plVar10[3] = 0x10;
    plVar10[4] = (long)puVar8;
    plVar10[6] = 0;
    plVar10[5] = 0x10;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[7] = 8;
    return;
  }
  uVar9 = func_0x0001087c9084(1,0x10);
  _free(lVar14);
  FUN_100de3b58(&lStack_140);
  auVar37 = __Unwind_Resume(uVar9);
  pbVar20 = auVar37._8_8_;
  puVar11 = auVar37._0_8_;
  pbVar16 = *(byte **)(pbVar20 + 0x28);
  if (pbVar16 == *(byte **)(pbVar20 + 0x38)) {
LAB_100f22664:
    uVar6 = 0x17;
    goto code_r0x000100f22668;
  }
  bVar2 = *pbVar16;
  pppppppuVar25 = (ulong *******)(ulong)bVar2;
  *(byte **)(pbVar20 + 0x28) = pbVar16 + 0x40;
  if (bVar2 == 0x16) goto LAB_100f22664;
  *(long *)(pbVar20 + 0x40) = *(long *)(pbVar20 + 0x40) + 1;
  uVar27 = *(ulong *)(pbVar16 + 1);
  uStack_2d7 = (undefined7)*(undefined8 *)(pbVar16 + 9);
  uStack_2df = (undefined1)uVar27;
  uStack_2de = (ushort)(uVar27 >> 8);
  uStack_2dc = (uint)(uVar27 >> 0x18);
  uStack_2d8 = (undefined1)(uVar27 >> 0x38);
  pppppppuVar30 = *(ulong ********)(pbVar16 + 0x18);
  pppppppuVar13 = *(ulong ********)(pbVar16 + 0x10);
  pppppppuStack_298 = *(ulong ********)(pbVar16 + 0x28);
  pppppppuStack_2a0 = *(ulong ********)(pbVar16 + 0x20);
  pppppppuStack_288 = *(ulong ********)(pbVar16 + 0x38);
  pppppppuStack_290 = *(ulong ********)(pbVar16 + 0x30);
  uVar5 = 0x15 < *pbVar20;
  uVar6 = *pbVar20 == 0x16;
  if (!(bool)uVar6) {
    auVar37 = FUN_100e077ec(pbVar20);
  }
  pppppppuVar22 = auVar37._0_8_;
  *(ulong ********)(pbVar20 + 8) = pppppppuStack_298;
  *(ulong ********)pbVar20 = pppppppuStack_2a0;
  *(ulong ********)(pbVar20 + 0x18) = pppppppuStack_288;
  *(ulong ********)(pbVar20 + 0x10) = pppppppuStack_290;
  pppppppuVar17 = (ulong *******)(uVar27 & 0xff);
  uVar19 = (uint)uStack_2de;
  pppppppuVar18 = (ulong *******)(ulong)uStack_2dc;
  pppppppuVar23 = (ulong *******)CONCAT71(uStack_2d7,uStack_2d8);
  pbVar20 = &UNK_108c9ecf0;
  pppppppuVar21 = (ulong *******)(&UNK_100f226e8 + (ulong)*(byte *)(pppppppuVar25 + 0x21193d9e) * 4)
  ;
  pppppppuVar12 = pppppppuVar22;
  pppppppuVar26 = pppppppuVar25;
  pppppppuVar28 = pppppppuStack_2a0;
  pppppppuVar31 = pppppppuStack_298;
  pppppppuVar33 = pppppppuStack_290;
  pppppppuVar35 = pppppppuStack_288;
  switch(bVar2) {
  default:
    uStack_2c0 = (ulong)uStack_2c0._1_7_ << 8;
  case 0x2d:
  case 0x53:
  case 0xc0:
  case 0xd7:
  case 0xd9:
  case 0xef:
  case 0xf3:
  case 0xf9:
  case 0xfb:
    goto code_r0x000100f22844;
  case 1:
  case 0x52:
  case 0xd8:
    uStack_2dc = 1;
  case 0x2c:
  case 0x9d:
  case 0xd5:
  case 0x78:
code_r0x000100f22840:
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,(char)uStack_2dc);
code_r0x000100f22844:
    uStack_2c0._0_2_ = CONCAT11(uStack_2df,(undefined1)uStack_2c0);
    goto code_r0x000100f22a04;
  case 2:
    uVar6 = 2;
    goto code_r0x000100f228dc;
  case 3:
    uStack_2df = 3;
  case 0x24:
    break;
  case 4:
  case 0x9b:
  case 0xba:
    pppppppuVar17 = (ulong *******)0x4;
  case 0xbf:
    uVar6 = SUB81(pppppppuVar17,0);
code_r0x000100f228fc:
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uVar6);
    pppppppuStack_2b8 = pppppppuVar23;
    goto code_r0x000100f22a04;
  case 5:
    uStack_2dc = 5;
    goto code_r0x000100f22840;
  case 6:
    uVar6 = 6;
code_r0x000100f228dc:
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uVar6);
    uVar9 = uStack_2c0;
    uStack_2c0._4_4_ = SUB84(uVar3,4);
    uStack_2c0._0_2_ = (undefined2)uVar9;
    uStack_2c0._0_4_ = CONCAT22(uStack_2de,(undefined2)uStack_2c0);
    goto code_r0x000100f22a04;
  case 7:
    uStack_2df = 7;
    break;
  case 8:
    uVar6 = 8;
    goto code_r0x000100f228fc;
  case 9:
    uStack_2df = 9;
    break;
  case 10:
    uVar6 = 10;
    goto code_r0x000100f228fc;
  case 0xb:
  case 0xb9:
  case 0xc2:
    uStack_2df = 0xb;
  case 0x1f:
    break;
  case 0xc:
  case 0xc1:
    uVar6 = pppppppuVar30 == param_4;
  case 0x21:
  case 0xa7:
    pppppppuVar22 = pppppppuVar13;
    if ((bool)uVar6) {
code_r0x000100f22738:
      auVar37._8_8_ = param_3;
      auVar37._0_8_ = pppppppuVar22;
code_r0x000100f22740:
      iVar7 = _memcmp(auVar37._0_8_,auVar37._8_8_);
      if (iVar7 != 0) goto code_r0x000100f22748;
code_r0x000100f229e4:
      pppppppuVar17 = (ulong *******)0x16;
code_r0x000100f229e8:
      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,(char)pppppppuVar17);
      if (pppppppuVar23 != (ulong *******)0x0) {
code_r0x000100f229f0:
        pppppppuVar22 = pppppppuVar13;
code_r0x000100f229f4:
        _free(pppppppuVar22);
code_r0x000100f229f8:
      }
      goto code_r0x000100f22a04;
    }
code_r0x000100f22748:
    uStack_2df = 0xc;
code_r0x000100f2274c:
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uStack_2df);
    pppppppuStack_2b8 = pppppppuVar23;
    pppppppuStack_2b0 = pppppppuVar13;
    pppppppuStack_2a8 = pppppppuVar30;
code_r0x000100f22758:
code_r0x000100f22978:
    pppppppuVar17 = (ulong *******)(uStack_2c0 & 0xff);
code_r0x000100f2297c:
    if ((int)pppppppuVar17 != 0x17) goto code_r0x000100f22a04;
    puVar11[1] = (ulong)pppppppuStack_2b8;
code_r0x000100f2298c:
    pppppppuVar17 = (ulong *******)0x18;
code_r0x000100f22990:
    uVar6 = SUB81(pppppppuVar17,0);
code_r0x000100f22668:
    *(undefined1 *)puVar11 = uVar6;
    goto code_r0x000100f22a10;
  case 0xd:
    pppppppuVar22 = pppppppuVar23;
    if (pppppppuVar13 == param_4) goto code_r0x000100f228b8;
  case 0x8a:
code_r0x000100f228c8:
    uStack_2df = 0xd;
code_r0x000100f228cc:
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uStack_2df);
    pppppppuStack_2b8 = pppppppuVar23;
    pppppppuStack_2b0 = pppppppuVar13;
    goto code_r0x000100f22a04;
  case 0xe:
  case 0x91:
  case 0x9f:
  case 0xb3:
    uVar6 = pppppppuVar30 == param_4;
  case 0x25:
  case 0x86:
    if ((bool)uVar6) {
code_r0x000100f22700:
      pppppppuVar22 = pppppppuVar13;
code_r0x000100f22704:
      auVar37._8_8_ = param_3;
      auVar37._0_8_ = pppppppuVar22;
code_r0x000100f2270c:
      pppppppuVar22 = (ulong *******)_memcmp(auVar37._0_8_,auVar37._8_8_);
code_r0x000100f22710:
      if ((int)pppppppuVar22 != 0) goto code_r0x000100f22714;
      goto code_r0x000100f229e4;
    }
code_r0x000100f22714:
    uStack_2df = 0xe;
code_r0x000100f22718:
    goto code_r0x000100f2274c;
  case 0xf:
    pppppppuVar22 = pppppppuVar23;
    if (pppppppuVar13 == param_4) goto code_r0x000100f22778;
    goto code_r0x000100f22788;
  case 0x10:
  case 0x59:
  case 0x8b:
  case 0xcd:
  case 0xdd:
  case 0xdf:
  case 0xe3:
  case 0xf5:
  case 0xf7:
  case 0xfd:
  case 0xff:
    pppppppuVar17 = (ulong *******)0x10;
  case 0x8d:
  case 0x8f:
    uVar6 = SUB81(pppppppuVar17,0);
    goto code_r0x000100f22a00;
  case 0x11:
    pppppppuStack_298 = (ulong *******)pppppppuVar23[1];
    pppppppuStack_2a0 = (ulong *******)*pppppppuVar23;
    pppppppuStack_288 = (ulong *******)pppppppuVar23[3];
    pppppppuStack_290 = (ulong *******)pppppppuVar23[2];
  case 0xd3:
code_r0x000100f227b8:
    if ((char)pppppppuStack_2a0 == '\x16') {
code_r0x000100f2291c:
      pppppppuStack_2b8 = pppppppuStack_298;
      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,0x17);
      pppppppuVar12 = pppppppuVar23;
    }
    else {
code_r0x000100f227c4:
      pppppppuVar22 = (ulong *******)0x20;
code_r0x000100f227c8:
      pppppppuVar22 = (ulong *******)_malloc(pppppppuVar22);
      if (pppppppuVar22 == (ulong *******)0x0) {
        func_0x0001087c906c(8,0x20);
code_r0x000100f22c64:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f22c68);
        (*pcVar4)();
      }
      pppppppuVar31 = (ulong *******)pppppppuVar23[1];
      pppppppuVar28 = (ulong *******)*pppppppuVar23;
      pppppppuVar35 = (ulong *******)pppppppuVar23[3];
      pppppppuVar33 = (ulong *******)pppppppuVar23[2];
code_r0x000100f227d4:
      pppppppuVar22[1] = (ulong ******)pppppppuVar31;
      *pppppppuVar22 = (ulong ******)pppppppuVar28;
      pppppppuVar22[3] = (ulong ******)pppppppuVar35;
      pppppppuVar22[2] = (ulong ******)pppppppuVar33;
      pppppppuVar17 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar23 + 5);
      uStack_2dc = (uint)*(byte *)((long)pppppppuVar23 + 7);
      uVar19 = *(uint *)((long)pppppppuVar23 + 1);
code_r0x000100f227e4:
      uStack_2c0 = (ulong)uVar19 << 8;
code_r0x000100f227e8:
      uStack_2c0._0_7_ = CONCAT25((short)pppppppuVar17,(undefined5)uStack_2c0);
      uStack_2c0 = CONCAT17((char)uStack_2dc,(undefined7)uStack_2c0);
      pppppppuVar31 = (ulong *******)pppppppuVar23[3];
      pppppppuVar28 = (ulong *******)pppppppuVar23[2];
code_r0x000100f227f4:
      pppppppuStack_2b0 = pppppppuVar28;
      pppppppuStack_2a8 = pppppppuVar31;
code_r0x000100f227f8:
      uVar6 = 0x11;
code_r0x000100f22968:
      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uVar6);
code_r0x000100f2296c:
      pppppppuVar12 = pppppppuVar23;
      pppppppuStack_2b8 = pppppppuVar22;
    }
code_r0x000100f22974:
    _free(pppppppuVar12);
    goto code_r0x000100f22978;
  case 0x12:
  case 0xce:
    uVar6 = 0x12;
    goto code_r0x000100f22a00;
  case 0x13:
    pppppppuStack_298 = (ulong *******)pppppppuVar23[1];
    pppppppuStack_2a0 = (ulong *******)*pppppppuVar23;
    pppppppuStack_288 = (ulong *******)pppppppuVar23[3];
    pppppppuStack_290 = (ulong *******)pppppppuVar23[2];
    pppppppuVar17 = (ulong *******)((ulong)pppppppuStack_2a0 & 0xff);
  case 0xd2:
    if ((int)pppppppuVar17 == 0x16) goto code_r0x000100f2291c;
    pppppppuVar22 = (ulong *******)_malloc(0x20);
    if (pppppppuVar22 == (ulong *******)0x0) {
      func_0x0001087c906c(8,0x20);
      goto code_r0x000100f22c64;
    }
code_r0x000100f2293c:
    ppppppuVar29 = *pppppppuVar23;
    ppppppuVar36 = pppppppuVar23[3];
    ppppppuVar34 = pppppppuVar23[2];
    pppppppuVar22[1] = pppppppuVar23[1];
    *pppppppuVar22 = ppppppuVar29;
    pppppppuVar22[3] = ppppppuVar36;
    pppppppuVar22[2] = ppppppuVar34;
    pppppppuVar17 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar23 + 5);
    uStack_2dc = (uint)*(byte *)((long)pppppppuVar23 + 7);
    uStack_2c0 = (ulong)*(uint *)((long)pppppppuVar23 + 1) << 8;
code_r0x000100f22954:
    uStack_2c0._0_7_ = CONCAT25((short)pppppppuVar17,(undefined5)uStack_2c0);
    uStack_2c0 = CONCAT17((char)uStack_2dc,(undefined7)uStack_2c0);
code_r0x000100f2295c:
    pppppppuStack_2a8 = (ulong *******)pppppppuVar23[3];
    pppppppuStack_2b0 = (ulong *******)pppppppuVar23[2];
code_r0x000100f22964:
    uVar6 = 0x13;
    goto code_r0x000100f22968;
  case 0x14:
  case 0x29:
  case 0xe1:
  case 0xe5:
  case 0xe7:
  case 0xe9:
  case 0xeb:
  case 0xed:
  case 0xf1:
  case 0xfc:
    pppppppuStack_2a0 = pppppppuVar13;
    pppppppuStack_298 = pppppppuVar13;
  case 0xa5:
    pppppppuVar17 = pppppppuVar13 + (long)pppppppuVar30 * 4;
code_r0x000100f22808:
    pppppppuStack_280 = (ulong *******)0x0;
    pppppppuVar22 = &ppppppuStack_210;
    pppppppuStack_290 = pppppppuVar23;
    pppppppuStack_288 = pppppppuVar17;
code_r0x000100f22814:
    auVar37._8_8_ = &pppppppuStack_2a0;
    auVar37._0_8_ = pppppppuVar22;
code_r0x000100f22818:
    FUN_1013efd54(auVar37._0_8_,auVar37._8_8_);
    pppppppuVar17 = (ulong *******)(ulong)(byte)ppppppuStack_210;
code_r0x000100f22820:
    uVar6 = (int)pppppppuVar17 == 0x16;
code_r0x000100f22824:
    if ((bool)uVar6) {
code_r0x000100f22828:
      pppppppuVar17 = pppppppuStack_208;
code_r0x000100f2282c:
      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,0x17);
      pppppppuStack_2b8 = pppppppuVar17;
code_r0x000100f229a8:
      pppppppuVar22 = pppppppuStack_298;
code_r0x000100f229ac:
      pppppppuVar17 = pppppppuStack_288;
code_r0x000100f229b0:
      pppppppuVar17 = (ulong *******)((ulong)((long)pppppppuVar17 - (long)pppppppuVar22) >> 5);
code_r0x000100f229b8:
      pppppppuVar13 = (ulong *******)((long)pppppppuVar17 + 1);
code_r0x000100f229bc:
      while( true ) {
        pppppppuVar13 = (ulong *******)((long)pppppppuVar13 + -1);
        uVar6 = pppppppuVar13 == (ulong *******)0x0;
code_r0x000100f229c0:
        pppppppuVar17 = pppppppuStack_290;
        if ((bool)uVar6) break;
        pppppppuVar23 = pppppppuVar22 + 4;
code_r0x000100f229c8:
        FUN_100e077ec(pppppppuVar22);
code_r0x000100f229cc:
        pppppppuVar22 = pppppppuVar23;
code_r0x000100f229d0:
      }
code_r0x000100f229d8:
      pppppppuVar22 = pppppppuStack_2a0;
      if (pppppppuVar17 == (ulong *******)0x0) goto code_r0x000100f22978;
code_r0x000100f229e0:
      pppppppuVar12 = pppppppuVar22;
      goto code_r0x000100f22974;
    }
    uStack_2c0 = CONCAT71(ppppppuStack_210._1_7_,(byte)ppppppuStack_210);
    pppppppuStack_2b8 = pppppppuStack_208;
    pppppppuStack_2a8 = pppppppuStack_1f8;
    pppppppuStack_2b0 = pppppppuStack_200;
code_r0x000100f2299c:
    pppppppuVar17 = (ulong *******)(uStack_2c0 & 0xff);
code_r0x000100f229a0:
    uVar6 = (int)pppppppuVar17 == 0x17;
code_r0x000100f229a4:
    if ((bool)uVar6) goto code_r0x000100f229a8;
    pppppppuStack_1c8 = pppppppuStack_2b8;
    uStack_1d0 = uStack_2c0;
    pppppppuStack_1b8 = pppppppuStack_2a8;
    pppppppuStack_1c0 = pppppppuStack_2b0;
    pppppppuVar25 = (ulong *******)FUN_100fbc738(&pppppppuStack_2a0);
    if (pppppppuVar25 != (ulong *******)0x0) {
      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,0x17);
      pppppppuStack_2b8 = pppppppuVar25;
      if ((char)uStack_1d0 != '\x16') {
        FUN_100e077ec(&uStack_1d0);
      }
    }
    goto code_r0x000100f22978;
  case 0x15:
    param_4 = (ulong *******)((long)pppppppuVar30 * 0x40);
    param_3 = pppppppuVar13 + (long)pppppppuVar30 * 8;
  case 200:
    pppppppuStack_280 = pppppppuVar13;
    pppppppuStack_278 = pppppppuVar13;
code_r0x000100f22858:
    pppppppuStack_270 = pppppppuVar23;
    pppppppuStack_268 = param_3;
code_r0x000100f2285c:
    uStack_2df = 0x16;
code_r0x000100f22860:
    pppppppuStack_2a0 = (ulong *******)CONCAT71(pppppppuStack_2a0._1_7_,uStack_2df);
    pppppppuStack_260 = (ulong *******)0x0;
code_r0x000100f22868:
    pppppppuVar17 = (ulong *******)0x4000;
    uVar5 = (ulong *******)0x3fff < pppppppuVar30;
code_r0x000100f22870:
    pppppppuVar25 = pppppppuVar30;
    if ((bool)uVar5) {
      pppppppuVar25 = pppppppuVar17;
    }
code_r0x000100f22874:
    if (pppppppuVar30 == (ulong *******)0x0) {
      pppppppuVar25 = (ulong *******)0x0;
code_r0x000100f22a30:
      pppppppuVar17 = (ulong *******)&pppppppuStack_220;
code_r0x000100f22a38:
      pppppppuVar18 = (ulong *******)0x8;
code_r0x000100f22a3c:
      pppppppuStack_220 = pppppppuVar18;
      pppppppuStack_218 = (ulong *******)0x0;
    }
    else {
      pppppppuVar22 = (ulong *******)((long)pppppppuVar25 << 6);
      pppppppuVar23 = pppppppuVar22;
code_r0x000100f22880:
      pppppppuVar22 = (ulong *******)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(pppppppuVar22,8);
code_r0x000100f22888:
      if (pppppppuVar22 == (ulong *******)0x0) {
        func_0x0001087c9084(8,pppppppuVar23);
        goto code_r0x000100f22c64;
      }
      pppppppuStack_220 = pppppppuVar22;
      pppppppuStack_218 = (ulong *******)0x0;
      pppppppuVar17 = (ulong *******)(ulong)*(byte *)pppppppuVar13;
      pppppppuVar18 = pppppppuVar13 + 8;
      pppppppuStack_2e8 = param_3;
      pppppppuStack_228 = pppppppuVar25;
      if (*(byte *)pppppppuVar13 == 0x16) {
code_r0x000100f228a4:
        pppppppuStack_2e8 = pppppppuVar18;
        param_3 = (ulong *******)0x0;
      }
      else {
code_r0x000100f22a48:
        pppppppuVar25 = (ulong *******)0x0;
        unaff_x26 = (undefined4 *)((ulong)&uStack_1d0 | 1);
        unaff_x27 = (byte *)&ppppppuStack_210;
code_r0x000100f22a58:
        unaff_x28 = (undefined4 *)((ulong)unaff_x27 | 1);
        pppppppuVar23 = param_4 + -8;
        pppppppuVar18 = (ulong *******)0x1;
code_r0x000100f22a64:
        do {
          pppppppuVar30 = (ulong *******)((long)pppppppuVar13 + (long)pppppppuVar25);
          uVar19 = (uint)*(byte *)(pppppppuVar30 + 4);
          param_4 = (ulong *******)pppppppuVar30[5];
          param_3 = pppppppuVar18;
code_r0x000100f22a74:
          pppppppuVar18 = (ulong *******)pppppppuVar30[1];
          pbVar20 = (byte *)((long)pppppppuVar30 + 1);
          *unaff_x26 = *(undefined4 *)pbVar20;
code_r0x000100f22a84:
          *(undefined4 *)((long)unaff_x26 + 3) = *(undefined4 *)((long)pppppppuVar30 + 4);
code_r0x000100f22a8c:
          pppppppuVar31 = (ulong *******)pppppppuVar30[3];
          pppppppuVar28 = (ulong *******)pppppppuVar30[2];
code_r0x000100f22a90:
          pppppppuStack_1b8 = pppppppuVar31;
          pppppppuStack_1c0 = pppppppuVar28;
code_r0x000100f22a98:
          uStack_1d0 = CONCAT71(uStack_1d0._1_7_,(byte)pppppppuVar17);
          pppppppuStack_1c8 = pppppppuVar18;
          if (uVar19 == 0x16) {
            pppppppuStack_278 = pppppppuVar30 + 8;
            pppppppuStack_260 = param_3;
            FUN_100e077ec(&uStack_1d0);
code_r0x000100f22bb0:
            FUN_100d03040(&pppppppuStack_228);
            uStack_2c0 = CONCAT71(uStack_2c0._1_7_,0x17);
            FUN_100d34830(&pppppppuStack_280);
            pppppppuStack_2b8 = param_4;
            goto code_r0x000100f22978;
          }
          if ((int)pppppppuVar17 == 0x17) {
            pppppppuStack_278 =
                 (ulong *******)((byte *)((long)pppppppuVar13 + (long)pppppppuVar25) + 0x40);
            param_4 = pppppppuVar18;
            pppppppuStack_260 = param_3;
            goto code_r0x000100f22bb0;
          }
          pppppppuVar21 = (ulong *******)((long)param_3 + -1);
          ppppppuStack_210._0_1_ = (byte)pppppppuVar17;
          *unaff_x28 = *(undefined4 *)pbVar20;
          pppppppuVar26 = pppppppuVar25;
code_r0x000100f22ac0:
          *(undefined4 *)((long)unaff_x28 + 3) = *(undefined4 *)(pbVar20 + 3);
          pppppppuStack_208 = pppppppuVar18;
          ppppppuVar29 = pppppppuVar30[2];
          *(ulong *******)(unaff_x27 + 0x18) = pppppppuVar30[3];
          *(ulong *******)(unaff_x27 + 0x10) = ppppppuVar29;
          uStack_1f0 = (char)uVar19;
          *(undefined4 *)(unaff_x27 + 0x21) = *(undefined4 *)((long)pppppppuVar30 + 0x21);
          *(undefined4 *)(unaff_x27 + 0x24) = *(undefined4 *)((long)pppppppuVar30 + 0x24);
          pppppppuStack_1e8 = param_4;
          ppppppuVar29 = pppppppuVar30[6];
          *(ulong *******)(unaff_x27 + 0x38) = pppppppuVar30[7];
          *(ulong *******)(unaff_x27 + 0x30) = ppppppuVar29;
          if (pppppppuVar21 == pppppppuStack_228) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&pppppppuStack_228)
            ;
            pppppppuVar22 = pppppppuStack_220;
          }
          pbVar20 = (byte *)((long)pppppppuVar22 + (long)pppppppuVar26);
          *(ulong ********)(pbVar20 + 0x28) = pppppppuStack_1e8;
          *(ulong *)(pbVar20 + 0x20) = CONCAT71(uStack_1ef,uStack_1f0);
          *(undefined8 *)(pbVar20 + 0x38) = uStack_1d8;
          *(undefined8 *)(pbVar20 + 0x30) = uStack_1e0;
          *(ulong ********)(pbVar20 + 8) = pppppppuStack_208;
          *(ulong *)pbVar20 = CONCAT71(ppppppuStack_210._1_7_,(byte)ppppppuStack_210);
          *(ulong ********)(pbVar20 + 0x18) = pppppppuStack_1f8;
          *(ulong ********)(pbVar20 + 0x10) = pppppppuStack_200;
          pppppppuStack_218 = param_3;
          pppppppuVar25 = pppppppuStack_228;
          if (pppppppuVar23 == pppppppuVar26) goto code_r0x000100f22bdc;
          pppppppuVar17 = (ulong *******)(ulong)*(byte *)(pppppppuVar30 + 8);
          pppppppuVar25 = pppppppuVar26 + 8;
          pppppppuVar18 = (ulong *******)((long)param_3 + 1);
        } while (*(byte *)(pppppppuVar30 + 8) != 0x16);
        pppppppuStack_2e8 =
             (ulong *******)((byte *)((long)pppppppuVar13 + (long)pppppppuVar25) + 0x40);
        pppppppuVar25 = pppppppuStack_228;
      }
code_r0x000100f22bdc:
      pppppppuVar17 = (ulong *******)&pppppppuStack_220;
      pppppppuStack_278 = pppppppuStack_2e8;
      pppppppuStack_260 = param_3;
    }
    pppppppuStack_2a8 = (ulong *******)pppppppuVar17[1];
    pppppppuStack_2b0 = (ulong *******)*pppppppuVar17;
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,0x15);
    uStack_250 = uStack_2c0;
    pppppppuStack_248 = pppppppuVar25;
    pppppppuStack_240 = pppppppuStack_2b0;
    pppppppuStack_238 = pppppppuStack_2a8;
    pppppppuVar13 = (ulong *******)FUN_100fbc67c(&pppppppuStack_2a0);
    pppppppuStack_2b8 = pppppppuVar25;
    if (pppppppuVar13 != (ulong *******)0x0) {
      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,0x17);
      pppppppuStack_2b8 = pppppppuVar13;
      if ((char)uStack_250 != '\x16') {
        FUN_100e077ec(&uStack_250);
      }
    }
    goto code_r0x000100f22978;
  case 0x16:
  case 0xb8:
    goto code_r0x000100f227a4;
  case 0x17:
    goto code_r0x000100f227c8;
  case 0x18:
  case 0xe8:
    goto code_r0x000100f22784;
  case 0x1a:
  case 0xca:
  case 0xde:
    goto code_r0x000100f22860;
  case 0x1b:
  case 0xac:
    break;
  case 0x1c:
code_r0x000100f228b8:
    auVar37._8_8_ = param_3;
    auVar37._0_8_ = pppppppuVar22;
  case 0x28:
    iVar7 = _memcmp(auVar37._0_8_,auVar37._8_8_);
    if (iVar7 != 0) goto code_r0x000100f228c8;
code_r0x000100f229fc:
    uVar6 = 0x16;
code_r0x000100f22a00:
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uVar6);
    goto code_r0x000100f22a04;
  case 0x1d:
    goto code_r0x000100f2277c;
  case 0x1e:
    goto code_r0x000100f22870;
  case 0x22:
    goto code_r0x000100f22828;
  case 0x23:
    goto code_r0x000100f22704;
  case 0x26:
    goto code_r0x000100f227f8;
  case 0x27:
    goto code_r0x000100f22868;
  case 0x2b:
  case 0xc9:
  case 0xcb:
    goto code_r0x000100f22808;
  case 0x2e:
    goto code_r0x000100f229b8;
  case 0x32:
    goto code_r0x000100f229e8;
  case 0x36:
    goto code_r0x000100f22a3c;
  case 0x38:
    goto code_r0x000100f229c0;
  case 0x3a:
  case 0xf6:
    goto code_r0x000100f22a8c;
  case 0x3c:
    goto code_r0x000100f229a8;
  case 0x3e:
    goto code_r0x000100f22a74;
  case 0x42:
    goto code_r0x000100f22990;
  case 0x44:
    goto code_r0x000100f229a0;
  case 0x46:
    goto code_r0x000100f22a18;
  case 0x48:
  case 0xec:
    goto code_r0x000100f2295c;
  case 0x4a:
    goto code_r0x000100f229b0;
  case 0x4c:
  case 0x70:
  case 0xf8:
    goto code_r0x000100f2293c;
  case 0x4e:
    goto code_r0x000100f229d8;
  case 0x50:
  case 0x6c:
    goto code_r0x000100f22a48;
  case 0x54:
    goto code_r0x000100f229e0;
  case 0x56:
    goto code_r0x000100f229f0;
  case 0x58:
    goto code_r0x000100f22880;
  case 0x5c:
    goto code_r0x000100f22964;
  case 0x5e:
    goto code_r0x000100f2297c;
  case 0x60:
    goto code_r0x000100f228cc;
  case 0x62:
    goto code_r0x000100f229bc;
  case 100:
  case 0xea:
    goto code_r0x000100f22a30;
  case 0x66:
  case 0xd4:
    goto code_r0x000100f2298c;
  case 0x68:
    goto code_r0x000100f22a58;
  case 0x6a:
  case 0xda:
    goto code_r0x000100f22954;
  case 0x6e:
    goto code_r0x000100f22888;
  case 0x72:
    goto code_r0x000100f22a20;
  case 0x74:
    goto code_r0x000100f22858;
  case 0x76:
    goto code_r0x000100f2296c;
  case 0x7a:
    goto code_r0x000100f2299c;
  case 0x7c:
  case 0xdc:
    goto code_r0x000100f22a38;
  case 0x7e:
    goto code_r0x000100f22a84;
  case 0x80:
  case 0xc4:
    goto code_r0x000100f229ac;
  case 0x82:
    goto code_r0x000100f229cc;
  case 0x87:
  case 0x89:
    goto code_r0x000100f22710;
  case 0x88:
    goto code_r0x000100f2270c;
  case 0x8c:
    goto code_r0x000100f22738;
  case 0x8e:
    goto code_r0x000100f22874;
  case 0x90:
    goto code_r0x000100f22818;
  case 0x92:
    goto code_r0x000100f229a4;
  case 0x94:
    goto code_r0x000100f229d0;
  case 0x96:
  case 0xfe:
    goto code_r0x000100f22a10;
  case 0x97:
    goto code_r0x000100f22700;
  case 0x9a:
    goto code_r0x000100f22820;
  case 0x9c:
    goto code_r0x000100f227f4;
  case 0xa0:
    goto code_r0x000100f2274c;
  case 0xa1:
    goto code_r0x000100f227d4;
  case 0xa2:
  case 0xf0:
    goto code_r0x000100f227e4;
  case 0xa3:
    goto code_r0x000100f227c4;
  case 0xa6:
  case 0xc5:
    goto code_r0x000100f22740;
  case 0xa8:
    goto code_r0x000100f227b8;
  case 0xab:
    goto code_r0x000100f22814;
  case 0xad:
  case 0xbc:
    goto code_r0x000100f22714;
  case 0xaf:
    goto code_r0x000100f2278c;
  case 0xb2:
    goto code_r0x000100f22a90;
  case 0xb4:
code_r0x000100f22778:
    auVar37._8_8_ = param_3;
    auVar37._0_8_ = pppppppuVar22;
code_r0x000100f2277c:
    pppppppuVar22 = (ulong *******)_memcmp(auVar37._0_8_,auVar37._8_8_,param_4);
code_r0x000100f22784:
    if ((int)pppppppuVar22 == 0) goto code_r0x000100f229fc;
code_r0x000100f22788:
    uStack_2df = 0xf;
code_r0x000100f2278c:
    goto code_r0x000100f228cc;
  case 0xb5:
  case 0xb7:
    goto code_r0x000100f22718;
  case 0xb6:
    goto code_r0x000100f22a24;
  case 0xbe:
    goto code_r0x000100f22824;
  case 0xcc:
    goto code_r0x000100f2282c;
  case 0xcf:
    goto code_r0x000100f22758;
  case 0xd0:
    goto code_r0x000100f2285c;
  case 0xd1:
  case 0xdb:
    goto code_r0x000100f227e8;
  case 0xd6:
    goto code_r0x000100f22a98;
  case 0xe0:
    goto code_r0x000100f229f8;
  case 0xe2:
    goto code_r0x000100f228a4;
  case 0xe4:
    goto code_r0x000100f2291c;
  case 0xe6:
    goto code_r0x000100f22a64;
  case 0xee:
    goto code_r0x000100f22ac0;
  case 0xf2:
    goto code_r0x000100f229f4;
  case 0xf4:
    goto code_r0x000100f22974;
  case 0xfa:
    goto code_r0x000100f229c8;
  }
  uStack_2c0 = CONCAT71(uStack_2c0._1_7_,uStack_2df);
  uStack_2c0 = CONCAT44(uStack_2dc,(undefined4)uStack_2c0);
code_r0x000100f227a4:
code_r0x000100f22a04:
  puVar11[1] = (ulong)pppppppuStack_2b8;
  *puVar11 = uStack_2c0;
  puVar11[3] = (ulong)pppppppuStack_2a8;
  puVar11[2] = (ulong)pppppppuStack_2b0;
code_r0x000100f22a10:
code_r0x000100f22a18:
code_r0x000100f22a20:
code_r0x000100f22a24:
  return;
}

