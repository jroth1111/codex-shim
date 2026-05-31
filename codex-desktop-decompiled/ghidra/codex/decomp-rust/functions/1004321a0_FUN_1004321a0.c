
/* WARNING: Type propagation algorithm not settling */

void FUN_1004321a0(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,byte *param_4,
                  undefined *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  byte in_ZR;
  bool bVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  undefined1 uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *unaff_x19;
  uint *puVar15;
  int iVar16;
  uint *unaff_x20;
  uint *puVar17;
  uint uVar18;
  uint *unaff_x21;
  uint *puVar19;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *puVar20;
  uint *unaff_x25;
  uint *unaff_x26;
  uint *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined8 unaff_x30;
  uint *puVar22;
  undefined8 uVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  undefined1 auStack_350 [88];
  uint *puStack_2f8;
  uint *puStack_2f0;
  uint *puStack_2e8;
  uint *puStack_2e0;
  uint *puStack_2d8;
  uint *puStack_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  uint *puStack_2b0;
  uint *puStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  uint *puStack_288;
  uint *puStack_280;
  uint *puStack_278;
  long lStack_270;
  uint *puStack_268;
  long lStack_260;
  long lStack_250;
  double dStack_248;
  long lStack_240;
  long lStack_238;
  uint *puStack_138;
  uint *puStack_130;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  long lStack_e0;
  uint *puStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  uint *puStack_88;
  uint *puStack_80;
  long lStack_78;
  byte abStack_69 [9];
  
  puVar24 = param_1._8_8_;
  puVar22 = param_1._0_8_;
  bVar9 = *param_4;
  puVar11 = (uint *)(ulong)bVar9;
  puVar12 = (uint *)&UNK_108c989da;
  puVar14 = (uint *)(ulong)*(ushort *)(&UNK_108c989da + (long)puVar11 * 2);
  puVar13 = (uint *)(&UNK_1004321e0 + (long)puVar14 * 4);
  puVar5 = auStack_350 + 0x50;
  puVar17 = (uint *)param_3;
  puVar15 = puVar11;
  puVar19 = unaff_x21;
  puVar20 = unaff_x24;
  puVar21 = &stack0xfffffffffffffff0;
  puVar25 = param_2._0_8_;
  lVar7 = param_2._8_8_;
  switch(bVar9) {
  case 0:
    lStack_250 = (ulong)CONCAT61(lStack_250._2_6_,param_4[1]) << 8;
    goto code_r0x000100432c4c;
  case 1:
    dStack_248 = (double)(ulong)param_4[1];
  case 0xd6:
code_r0x000100432c04:
    uVar10 = 1;
    break;
  case 2:
    dStack_248 = (double)(ulong)*(ushort *)(param_4 + 2);
    goto code_r0x000100432c04;
  case 3:
    dStack_248 = (double)(ulong)*(uint *)(param_4 + 4);
    goto code_r0x000100432c04;
  case 4:
    dStack_248 = *(double *)(param_4 + 8);
    goto code_r0x000100432c04;
  case 5:
  case 0xd4:
    dStack_248 = (double)(long)(char)param_4[1];
    goto code_r0x000100432c40;
  case 6:
    dStack_248 = (double)(long)*(short *)(param_4 + 2);
    goto code_r0x000100432c40;
  case 7:
    dStack_248 = (double)(long)*(int *)(param_4 + 4);
    goto code_r0x000100432c40;
  case 8:
    dStack_248 = *(double *)(param_4 + 8);
code_r0x000100432c40:
    uVar10 = 2;
    break;
  case 9:
    dStack_248 = (double)*(float *)(param_4 + 4);
  case 0xd1:
code_r0x000100432c34:
    uVar10 = 3;
    break;
  case 10:
    dStack_248 = *(double *)(param_4 + 8);
    goto code_r0x000100432c34;
  case 0xb:
    lVar7 = func_0x000108a4a50c(&stack0xffffffffffffffc0,&stack0xffffffffffffffdf,&UNK_10b21c490);
    *(uint *)((long)param_3 + 0) = 0x1d;
    *(uint *)((long)param_3 + 4) = 0;
    *(long *)((long)param_3 + 8) = lVar7;
    return;
  case 0xc:
    uVar23 = *(undefined8 *)(param_4 + 0x10);
    lVar7 = func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,&UNK_10b21c490);
    *(uint *)((long)param_3 + 0) = 0x1d;
    *(uint *)((long)param_3 + 4) = 0;
    *(long *)((long)param_3 + 8) = lVar7;
    if (*(long *)(param_4 + 8) != 0) {
      _free(uVar23);
    }
    return;
  case 0xd:
    dStack_248 = *(double *)(param_4 + 8);
    lStack_240 = *(long *)(param_4 + 0x10);
    uVar10 = 5;
    break;
  case 0xe:
    param_4 = param_4 + 8;
    puVar5 = (undefined1 *)register0x00000008;
    puVar17 = unaff_x19;
    puVar21 = unaff_x29;
  case 0xac:
    *(uint **)(puVar5 + -0x30) = unaff_x22;
    *(uint **)(puVar5 + -0x28) = unaff_x21;
    *(uint **)(puVar5 + -0x20) = unaff_x20;
    *(uint **)(puVar5 + -0x18) = puVar17;
    *(undefined1 **)(puVar5 + -0x10) = puVar21;
    *(undefined8 *)(puVar5 + -8) = unaff_x30;
    uVar23 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(puVar5 + -0x48) = uVar23;
    *(undefined8 *)(puVar5 + -0x40) = uVar3;
    puVar5[-0x50] = 6;
    lVar7 = func_0x000108a4a50c(puVar5 + -0x50,puVar5 + -0x31,&UNK_10b21c490);
    *(uint *)((long)param_3 + 0) = 0x1d;
    *(uint *)((long)param_3 + 4) = 0;
    *(long *)((long)param_3 + 8) = lVar7;
    if (*(long *)param_4 != 0) {
      _free(uVar23);
    }
    return;
  case 0xf:
    dStack_248 = *(double *)(param_4 + 8);
    lStack_240 = *(long *)(param_4 + 0x10);
    uVar10 = 6;
    break;
  case 0x10:
    uVar10 = 8;
    break;
  default:
    puVar17 = *(uint **)(param_4 + 8);
    dStack_248 = *(double *)(puVar17 + 2);
    lStack_250 = *(long *)puVar17;
    lStack_238 = *(long *)(puVar17 + 6);
    lStack_240 = *(long *)(puVar17 + 4);
    thunk_FUN_1087fda3c(param_3,&lStack_250);
  case 0xd9:
code_r0x00010043229c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puVar17);
    return;
  case 0x12:
    uVar10 = 7;
    break;
  case 0x13:
    puVar17 = *(uint **)(param_4 + 8);
    dStack_248 = *(double *)(puVar17 + 2);
    lStack_250 = *(long *)puVar17;
    lStack_238 = *(long *)(puVar17 + 6);
    lStack_240 = *(long *)(puVar17 + 4);
    func_0x000107c052e4(param_3,&lStack_250);
    goto code_r0x00010043229c;
  case 0x14:
    puStack_128 = *(uint **)(param_4 + 8);
    unaff_x22 = *(uint **)(param_4 + 0x10);
    unaff_x26 = *(uint **)(param_4 + 0x18);
    unaff_x24 = unaff_x22 + (long)unaff_x26 * 8;
    puStack_118 = (uint *)0x0;
    puStack_138 = unaff_x22;
    puStack_130 = unaff_x22;
    puStack_120 = unaff_x24;
    if (unaff_x26 == (uint *)0x0) goto code_r0x000100432970;
    unaff_x21 = unaff_x22 + 8;
    bVar9 = (byte)*unaff_x22;
    in_ZR = bVar9 == 0x16;
    puStack_130 = unaff_x21;
  case 0xda:
    if ((bool)in_ZR) goto code_r0x000100432974;
    uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x22 + 9);
    uStack_2a0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x22 + 1);
    uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x22 + 1) >> 0x38);
    puStack_288 = *(uint **)(unaff_x22 + 6);
    uStack_290 = (undefined1)*(long *)(unaff_x22 + 4);
    uStack_28f = (undefined7)((ulong)*(long *)(unaff_x22 + 4) >> 8);
    puStack_118 = (uint *)0x1;
    uStack_2a0._0_1_ = bVar9;
    FUN_1004b62d4(&puStack_c0,&uStack_2a0);
    unaff_x20 = puStack_b8;
    if (puStack_c0 == (uint *)0x8000000000000000) goto code_r0x000100432990;
    unaff_x23 = puStack_c0;
    if (unaff_x26 == (uint *)0x1) {
code_r0x00010043233c:
      puVar12 = (uint *)thunk_FUN_1087e422c(1,&UNK_10b22ecf8,&UNK_10b20a590);
      puStack_b8 = puVar12;
code_r0x000100432358:
      *(uint *)((long)param_3 + 0) = 0x1d;
      *(uint *)((long)param_3 + 4) = 0;
      *(uint **)((long)param_3 + 8) = puStack_b8;
    }
    else {
      puStack_130 = unaff_x22 + 0x10;
      bVar9 = (byte)unaff_x22[8];
      if (bVar9 == 0x16) goto code_r0x00010043233c;
      puVar24 = *(uint **)((long)unaff_x22 + 0x29);
      puVar22 = *(uint **)((long)unaff_x22 + 0x21);
      unaff_x25 = puStack_b0;
code_r0x000100432d00:
      uStack_297 = SUB87(puVar24,0);
      uStack_2a0._1_7_ = SUB87(puVar22,0);
      uStack_298 = (undefined1)((ulong)puVar22 >> 0x38);
      puStack_288 = *(uint **)(unaff_x22 + 0xe);
      uStack_290 = (undefined1)*(long *)(unaff_x22 + 0xc);
      uStack_28f = (undefined7)((ulong)*(long *)(unaff_x22 + 0xc) >> 8);
      puVar12 = (uint *)0x2;
code_r0x000100432d10:
      uStack_2a0._0_1_ = bVar9;
      puStack_118 = puVar12;
      FUN_1004b60cc(&puStack_c0,&uStack_2a0);
      if (puStack_c0 == (uint *)0x8000000000000001) goto code_r0x000100432358;
      bVar6 = unaff_x26 == (uint *)0x2;
      unaff_x21 = puStack_b8;
      unaff_x24 = puStack_c0;
      unaff_x26 = puStack_b0;
      if (bVar6) {
code_r0x000100432d54:
        puStack_b8 = (uint *)thunk_FUN_1087e422c(2,&UNK_10b22ecf8,&UNK_10b20a590);
code_r0x000100432d70:
        *(uint *)((long)param_3 + 0) = 0x1d;
        *(uint *)((long)param_3 + 4) = 0;
        *(uint **)((long)param_3 + 8) = puStack_b8;
      }
      else {
code_r0x000100432d40:
        puStack_130 = unaff_x22 + 0x18;
        if ((byte)unaff_x22[0x10] == 0x16) goto code_r0x000100432d54;
        uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x22 + 0x49);
        uStack_2a0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x22 + 0x41);
        uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x22 + 0x41) >> 0x38);
        puStack_288 = *(uint **)(unaff_x22 + 0x16);
        uStack_290 = (undefined1)*(long *)(unaff_x22 + 0x14);
        uStack_28f = (undefined7)((ulong)*(long *)(unaff_x22 + 0x14) >> 8);
        puStack_118 = (uint *)0x3;
        uStack_2a0._0_1_ = (byte)unaff_x22[0x10];
        FUN_1004b62d4(&puStack_c0,&uStack_2a0);
        puVar17 = puStack_b0;
        puVar11 = puStack_b8;
        puVar12 = puStack_c0;
        if (puStack_c0 == (uint *)0x8000000000000000) goto code_r0x000100432d70;
        FUN_100f28ba8(&uStack_2a0,&puStack_138);
        lVar7 = CONCAT71(uStack_2a0._1_7_,(byte)uStack_2a0);
        lVar8 = CONCAT71(uStack_297,uStack_298);
        if (lVar7 != -0x7ffffffffffffffe) {
          uStack_100 = (uint *)CONCAT71(uStack_28f,uStack_290);
          puStack_f8 = puStack_288;
          puStack_e8 = puStack_278;
          puStack_f0 = puStack_280;
          lStack_e0 = lStack_270;
          if (lVar7 != -0x7fffffffffffffff) {
            *(uint **)((long)param_3 + 0x68) = puStack_288;
            *(uint **)((long)param_3 + 0x60) = uStack_100;
            *(uint **)((long)param_3 + 0x78) = puStack_278;
            *(uint **)((long)param_3 + 0x70) = puStack_280;
            *(long *)((long)param_3 + 0x80) = lStack_270;
            *(uint *)((long)param_3 + 0) = 0xc;
            *(uint *)((long)param_3 + 4) = 0;
            *(uint **)((long)param_3 + 8) = unaff_x23;
            *(uint **)((long)param_3 + 0x10) = unaff_x20;
            *(uint **)((long)param_3 + 0x18) = unaff_x25;
            *(uint **)((long)param_3 + 0x20) = puVar12;
            *(uint **)((long)param_3 + 0x28) = puVar11;
            *(uint **)((long)param_3 + 0x30) = puVar17;
            *(uint **)((long)param_3 + 0x38) = unaff_x24;
            *(uint **)((long)param_3 + 0x40) = unaff_x21;
            *(uint **)((long)param_3 + 0x48) = unaff_x26;
            *(long *)((long)param_3 + 0x50) = lVar7;
            *(long *)((long)param_3 + 0x58) = lVar8;
            _memcpy(&lStack_250,param_3,0x118);
            lVar7 = FUN_100fbc738(&puStack_138);
            if (lVar7 == 0) {
              return;
            }
            *(uint *)((long)param_3 + 0) = 0x1d;
            *(uint *)((long)param_3 + 4) = 0;
            *(long *)((long)param_3 + 8) = lVar7;
code_r0x000100432cf0:
            FUN_100e35e0c(&lStack_250);
code_r0x000100432cf8:
            return;
          }
          lVar8 = thunk_FUN_1087e422c(3,&UNK_10b22ecf8,&UNK_10b20a590);
        }
        *(uint *)((long)param_3 + 0) = 0x1d;
        *(uint *)((long)param_3 + 4) = 0;
        *(long *)((long)param_3 + 8) = lVar8;
        if (puVar12 != (uint *)0x0) {
          _free(puVar11);
        }
      }
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x21);
      }
    }
    unaff_x21 = puStack_130;
    unaff_x24 = puStack_120;
    if (unaff_x23 != (uint *)0x0) {
      _free(unaff_x20);
      unaff_x21 = puStack_130;
      unaff_x24 = puStack_120;
    }
    goto code_r0x000100432998;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    lStack_270 = *(long *)(param_4 + 8);
    puVar19 = *(uint **)(param_4 + 0x10);
    unaff_x28 = puVar19 + *(long *)(param_4 + 0x18) * 0x10;
    unaff_x24 = (uint *)&uStack_2a0;
    uStack_2a0._0_1_ = 0x16;
    lStack_260 = 0;
    puVar12 = (uint *)0x8000000000000001;
    puStack_138 = (uint *)0x8000000000000001;
    puStack_2c0 = (uint *)param_3;
    puStack_280 = puVar19;
    puStack_278 = puVar19;
    puStack_268 = unaff_x28;
    if (*(long *)(param_4 + 0x18) == 0) goto code_r0x000100432954;
    unaff_x22 = (uint *)((ulong)&uStack_90 | 1);
    unaff_x23 = (uint *)((ulong)unaff_x24 | 1);
    unaff_x20 = (uint *)((ulong)&uStack_100 | 1);
    puStack_2b8 = (uint *)0x8000000000000000;
    puStack_2b0 = (uint *)0x8000000000000001;
    puStack_2a8 = (uint *)0x8000000000000001;
    puVar15 = (uint *)0x8000000000000000;
    unaff_x24 = (uint *)0x8000000000000001;
    do {
      unaff_x21 = puVar19 + 0x10;
      bVar9 = (byte)*puVar19;
      puStack_278 = unaff_x21;
      if (bVar9 == 0x16) break;
      lStack_260 = lStack_260 + 1;
      uStack_90 = (uint *)CONCAT71(uStack_90._1_7_,bVar9);
      lVar7 = *(long *)((long)puVar19 + 1);
      lVar26 = *(long *)(puVar19 + 6);
      lVar8 = *(long *)(puVar19 + 4);
      puStack_f8 = *(uint **)(puVar19 + 10);
      uStack_100 = *(uint **)(puVar19 + 8);
      *(long *)(unaff_x22 + 2) = *(long *)((long)puVar19 + 9);
      *(long *)unaff_x22 = lVar7;
      *(long *)((long)unaff_x22 + 0x17) = lVar26;
      *(long *)((long)unaff_x22 + 0xf) = lVar8;
      puStack_e8 = *(uint **)(puVar19 + 0xe);
      puStack_f0 = *(uint **)(puVar19 + 0xc);
      if ((byte)uStack_2a0 != 0x16) {
        FUN_100e077ec(&uStack_2a0);
      }
      unaff_x26 = puStack_80;
      unaff_x25 = puStack_88;
      uStack_298 = SUB81(puStack_f8,0);
      uStack_297 = (undefined7)((ulong)puStack_f8 >> 8);
      uStack_2a0._0_1_ = (byte)uStack_100;
      uStack_2a0._1_7_ = (undefined7)((ulong)uStack_100 >> 8);
      puStack_288 = puStack_e8;
      uStack_290 = SUB81(puStack_f0,0);
      uStack_28f = (undefined7)((ulong)puStack_f0 >> 8);
      param_3 = (char *)puVar15;
      puVar17 = puVar15;
      if (bVar9 < 0xd) {
        if (bVar9 == 1) {
          bVar9 = uStack_90._1_1_;
          if (3 < uStack_90._1_1_) {
            bVar9 = 4;
          }
          goto code_r0x000100432710;
        }
        if (bVar9 == 4) {
          puVar12 = puStack_88;
          if ((uint *)0x3 < puStack_88) {
            puVar12 = (uint *)0x4;
          }
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,(char)puVar12);
          goto code_r0x000100432714;
        }
        if (bVar9 != 0xc) {
code_r0x000100432930:
          param_3 = (char *)&uStack_90;
          param_4 = abStack_69;
code_r0x000100432938:
          param_5 = &UNK_10b20f4c0;
code_r0x000100432940:
          param_3 = (char *)thunk_FUN_108855b04(param_3,param_4,param_5);
code_r0x000100432944:
          puStack_f8 = (uint *)param_3;
code_r0x000100432948:
          bVar9 = 1;
code_r0x00010043294c:
          uStack_100 = (uint *)CONCAT71(uStack_100._1_7_,bVar9);
          param_3 = (char *)puVar17;
code_r0x000100432950:
          puVar15 = (uint *)param_3;
          goto code_r0x000100432720;
        }
        if (lStack_78 < 0x13) {
          if (lStack_78 == 5) {
code_r0x000100432604:
            puVar11 = (uint *)(ulong)*unaff_x26;
code_r0x000100432608:
            puVar15 = (uint *)param_3;
            param_3 = (char *)puVar15;
            if ((int)puVar11 != 0x6f727265 || (char)unaff_x26[1] != 'r') goto code_r0x000100432680;
code_r0x000100432624:
            uStack_100 = (uint *)CONCAT62(uStack_100._2_6_,0x200);
code_r0x00010043262c:
            uStack_100 = (uint *)((ulong)uStack_100 & 0xffffffffffffff00);
            puVar15 = (uint *)param_3;
          }
          else {
            if ((lStack_78 != 0x11) ||
               ((*(long *)puStack_80 != 0x636e657265666e69 ||
                *(long *)(puStack_80 + 2) != 0x695f6c6c61635f65) || (char)puStack_80[4] != 'd'))
            goto code_r0x000100432680;
            uStack_100 = (uint *)((ulong)uStack_100._2_6_ << 0x10);
          }
joined_r0x0001004324c0:
          if (unaff_x25 == (uint *)0x0) goto code_r0x000100432720;
        }
        else {
          if (lStack_78 != 0x13) {
            if ((lStack_78 == 0x18) &&
               ((*(long *)puStack_80 == 0x5f6c616974726170 &&
                *(long *)(puStack_80 + 2) == 0x65736e6f70736572) &&
                *(long *)(puStack_80 + 4) == 0x64616f6c7961705f)) {
              uStack_100 = (uint *)CONCAT62(uStack_100._2_6_,0x300);
              goto joined_r0x0001004324c0;
            }
code_r0x000100432680:
            uStack_100 = (uint *)CONCAT62(uStack_100._2_6_,0x400);
            goto joined_r0x0001004324c0;
          }
          puVar11 = *(uint **)puStack_80;
          puVar12 = *(uint **)(puStack_80 + 2);
          puVar13 = *(uint **)((long)puStack_80 + 0xb);
          puVar14 = (uint *)0x74737075;
code_r0x000100432648:
          puVar14 = (uint *)((ulong)puVar14 | 0x657200000000);
code_r0x00010043264c:
          in_ZR = false;
          if (puVar11 == (uint *)((ulong)puVar14 | 0x6d61000000000000)) {
            in_ZR = puVar12 == (uint *)0x747365757165725f;
          }
code_r0x000100432668:
          puVar15 = (uint *)param_3;
          if (!(bool)in_ZR || puVar13 != (uint *)0x64695f7473657571) goto code_r0x000100432680;
          uStack_100 = (uint *)CONCAT62(uStack_100._2_6_,0x100);
          param_3 = (char *)puVar15;
code_r0x00010043291c:
          puVar15 = (uint *)param_3;
          uStack_100 = (uint *)((ulong)uStack_100 & 0xffffffffffffff00);
          param_3 = (char *)puVar15;
          if (unaff_x25 == (uint *)0x0) {
code_r0x000100432924:
            puVar15 = (uint *)param_3;
            goto code_r0x000100432720;
          }
        }
        _free(unaff_x26);
      }
      else {
        if (bVar9 == 0xd) {
          if ((long)puStack_80 < 0x13) {
            if (puStack_80 == (uint *)0x5) {
              if (*puStack_88 != 0x6f727265 || (char)puStack_88[1] != 'r')
              goto code_r0x00010043270c;
              bVar9 = 2;
            }
            else {
              if ((puStack_80 != (uint *)0x11) ||
                 ((*(long *)puStack_88 != 0x636e657265666e69 ||
                  *(long *)(puStack_88 + 2) != 0x695f6c6c61635f65) || (char)puStack_88[4] != 'd'))
              goto code_r0x00010043270c;
              bVar9 = 0;
            }
          }
          else {
            if (puStack_80 == (uint *)0x13) {
code_r0x0001004326c4:
              in_ZR = false;
              if (*(long *)unaff_x25 == 0x6d61657274737075 &&
                  *(long *)(unaff_x25 + 2) == 0x747365757165725f) {
                in_ZR = *(long *)((long)unaff_x25 + 0xb) == 0x64695f7473657571;
              }
code_r0x000100432708:
              if ((bool)in_ZR) {
code_r0x000100432928:
                puVar15 = (uint *)param_3;
                bVar9 = 1;
                goto code_r0x000100432710;
              }
            }
            else if (puStack_80 == (uint *)0x18) {
              puVar13 = *(uint **)(puStack_88 + 4);
              in_ZR = *(long *)puStack_88 == 0x5f6c616974726170 &&
                      *(long *)(puStack_88 + 2) == 0x65736e6f70736572;
              puVar11 = (uint *)0x705f;
code_r0x0001004325e8:
              if ((bool)in_ZR && puVar13 == (uint *)((ulong)puVar11 | 0x64616f6c79610000)) {
                puVar15 = (uint *)param_3;
                bVar9 = 3;
                goto code_r0x000100432710;
              }
            }
code_r0x00010043270c:
            puVar15 = (uint *)param_3;
            bVar9 = 4;
          }
code_r0x000100432710:
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar9);
code_r0x000100432714:
          uStack_100 = (uint *)((ulong)uStack_100._1_7_ << 8);
        }
        else {
          if (bVar9 == 0xe) {
            FUN_100b48248(&uStack_100,puStack_80);
            goto joined_r0x0001004324c0;
          }
          if (bVar9 != 0xf) goto code_r0x000100432930;
          FUN_100b48248(&uStack_100,puStack_88,puStack_80);
        }
        FUN_100e077ec(&uStack_90);
      }
code_r0x000100432720:
      bVar9 = (byte)uStack_2a0;
      puVar12 = puStack_2b0;
      puVar13 = puStack_2b8;
      unaff_x25 = puStack_2c8;
      param_3 = (char *)puVar15;
      if (((ulong)uStack_100 & 1) != 0) goto code_r0x000100432a50;
      if (uStack_100._1_1_ < 2) {
        if (uStack_100._1_1_ == 0) {
code_r0x0001004327a8:
          puVar11 = (uint *)0x8000000000000000;
          puVar13 = puStack_2b8;
code_r0x0001004327b0:
          puVar15 = (uint *)param_3;
          bVar9 = (byte)uStack_2a0;
          puVar12 = puStack_2b0;
          unaff_x25 = puStack_2c8;
          if (puVar13 != puVar11) {
            puStack_130 = puStack_2c8;
            uStack_90 = (uint *)&UNK_108cb8872;
            puStack_88 = (uint *)0x11;
            uStack_100 = (uint *)&uStack_90;
            puStack_f8 = (uint *)&DAT_100c7b3a0;
            puStack_138 = unaff_x24;
            lVar7 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
LAB_100433100:
            unaff_x24 = (uint *)&uStack_2a0;
            puStack_2c0[0] = 0x1d;
            puStack_2c0[1] = 0;
            *(long *)(puStack_2c0 + 2) = lVar7;
            puVar17 = puVar15;
            unaff_x22 = puVar13;
            unaff_x23 = puVar12;
            goto LAB_100432a34;
          }
          uStack_2a0._0_1_ = 0x16;
          if (bVar9 == 0x16) {
            puStack_130 = puStack_2c8;
            puStack_138 = unaff_x24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004331b4;
          }
          lVar7 = *(long *)unaff_x23;
          *(long *)(unaff_x20 + 2) = *(long *)(unaff_x23 + 2);
          *(long *)unaff_x20 = lVar7;
          puVar24 = *(uint **)((long)unaff_x23 + 0x17);
          puVar22 = *(uint **)((long)unaff_x23 + 0xf);
          param_3 = (char *)puVar15;
code_r0x0001004327d8:
          *(uint **)((long)unaff_x20 + 0x17) = puVar24;
          *(uint **)((long)unaff_x20 + 0xf) = puVar22;
          uStack_100 = (uint *)CONCAT71(uStack_100._1_7_,bVar9);
          puVar11 = (uint *)0x8000000000000000;
code_r0x0001004327e4:
          puStack_2b8 = puVar11;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          puStack_2b8 = uStack_90;
          puVar11 = uStack_90;
code_r0x0001004327fc:
          in_ZR = puVar11 == (uint *)0x8000000000000000;
          puVar19 = unaff_x21;
code_r0x000100432804:
          puVar15 = (uint *)param_3;
          if ((bool)in_ZR) {
            puStack_130 = puStack_2c8;
            puStack_2c0[0] = 0x1d;
            puStack_2c0[1] = 0;
            *(uint **)(puStack_2c0 + 2) = puStack_88;
            unaff_x22 = (uint *)0x0;
            unaff_x25 = puStack_2c8;
            puStack_138 = unaff_x24;
            goto code_r0x000100432a6c;
          }
          puStack_2d0 = puStack_88;
          puStack_2f0 = puStack_80;
        }
        else {
          if (puStack_2b0 != (uint *)0x8000000000000001) {
            puStack_130 = puStack_2c8;
            uStack_90 = (uint *)&UNK_108cb88d9;
            puStack_88 = (uint *)0x13;
            uStack_100 = (uint *)&uStack_90;
            puStack_f8 = (uint *)&DAT_100c7b3a0;
            puStack_138 = unaff_x24;
            lVar7 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_100433100;
          }
          puVar11 = (uint *)(ulong)(byte)uStack_2a0;
          uStack_2a0._0_1_ = 0x16;
          puVar17 = puVar15;
code_r0x0001004328c4:
          bVar9 = (byte)puVar11;
          if ((int)puVar11 == 0x16) {
            puStack_130 = puStack_2c8;
            puStack_138 = unaff_x24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004331b4;
          }
code_r0x0001004328cc:
          lVar7 = *(long *)unaff_x23;
          *(long *)(unaff_x20 + 2) = *(long *)(unaff_x23 + 2);
          *(long *)unaff_x20 = lVar7;
          uVar23 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
          uStack_100 = (uint *)CONCAT71(uStack_100._1_7_,bVar9);
          puStack_2b0 = (uint *)0x8000000000000001;
          param_3 = (char *)&uStack_90;
code_r0x0001004328ec:
          FUN_1004b60cc(param_3,&uStack_100);
code_r0x0001004328f4:
          puStack_2b0 = uStack_90;
          puVar11 = uStack_90;
          param_3 = (char *)puVar17;
          puVar19 = unaff_x21;
code_r0x0001004328fc:
          puVar15 = (uint *)param_3;
          if (puVar11 == (uint *)0x8000000000000001) {
            puStack_130 = puStack_2c8;
            puStack_2c0[0] = 0x1d;
            puStack_2c0[1] = 0;
            *(uint **)(puStack_2c0 + 2) = puStack_88;
            iVar16 = 1;
            unaff_x23 = (uint *)0x8000000000000001;
            uVar18 = 1;
            puVar20 = (uint *)&uStack_2a0;
            unaff_x22 = puStack_2b8;
            puStack_138 = unaff_x24;
            uVar2 = 1;
            iVar1 = 1;
            unaff_x25 = puStack_2c8;
            puVar12 = puStack_2a8;
            if (puStack_2a8 != (uint *)0x8000000000000001) goto joined_r0x0001004330b0;
            goto LAB_100432e3c;
          }
          puStack_2e0 = puStack_88;
          puStack_2e8 = puStack_80;
        }
      }
      else if (uStack_100._1_1_ == 2) {
code_r0x00010043280c:
        puVar15 = (uint *)param_3;
        puVar12 = puStack_2b0;
        puVar13 = puStack_2b8;
        unaff_x25 = puStack_2c8;
        if (puVar15 != (uint *)0x8000000000000000) {
          puStack_130 = puStack_2c8;
          uStack_90 = (uint *)&UNK_108ca33da;
          puStack_88 = (uint *)0x5;
          uStack_100 = (uint *)&uStack_90;
          puStack_f8 = (uint *)&DAT_100c7b3a0;
          puStack_138 = unaff_x24;
          lVar7 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          goto LAB_100433100;
        }
        puVar11 = (uint *)(ulong)(byte)uStack_2a0;
code_r0x00010043281c:
        bVar9 = (byte)puVar11;
        uStack_2a0._0_1_ = 0x16;
        if ((int)puVar11 == 0x16) {
          puStack_130 = puStack_2c8;
          puStack_138 = unaff_x24;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004331b4;
        }
code_r0x00010043282c:
        lVar7 = *(long *)unaff_x23;
        *(long *)(unaff_x20 + 2) = *(long *)(unaff_x23 + 2);
        *(long *)unaff_x20 = lVar7;
code_r0x000100432834:
        uVar23 = *(undefined8 *)((long)unaff_x23 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
        uStack_100 = (uint *)CONCAT71(uStack_100._1_7_,bVar9);
        puVar17 = (uint *)0x0;
code_r0x000100432844:
        param_3 = (char *)&uStack_90;
        param_4 = (byte *)&uStack_100;
code_r0x00010043284c:
        FUN_1004b62d4(param_3,param_4);
        in_ZR = uStack_90 == (uint *)0x8000000000000000;
        puVar15 = uStack_90;
        param_3 = (char *)puVar17;
code_r0x00010043285c:
        if ((bool)in_ZR) {
          puStack_130 = puStack_2c8;
          puVar11 = puStack_88;
          unaff_x25 = puStack_2c8;
          puStack_138 = unaff_x24;
          goto code_r0x000100432a5c;
        }
        puStack_2d8 = puStack_88;
        puStack_2f8 = puStack_80;
        puVar19 = unaff_x21;
      }
      else if (uStack_100._1_1_ == 3) {
        if (puStack_2a8 != (uint *)0x8000000000000001) {
          puStack_130 = puStack_2c8;
          uStack_90 = (uint *)&UNK_108cbacc1;
          puStack_88 = (uint *)0x18;
          uStack_100 = (uint *)&uStack_90;
          puStack_f8 = (uint *)&DAT_100c7b3a0;
          puStack_138 = unaff_x24;
          lVar7 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          puStack_2c0[0] = 0x1d;
          puStack_2c0[1] = 0;
          *(long *)(puStack_2c0 + 2) = lVar7;
          puVar20 = (uint *)&uStack_2a0;
          uVar2 = 1;
          iVar1 = 1;
          unaff_x22 = puVar13;
          unaff_x23 = puVar12;
          puVar12 = puStack_2a8;
          goto joined_r0x0001004330b0;
        }
        puStack_2a8 = (uint *)0x8000000000000001;
        func_0x000100f1ec38(&uStack_100,&uStack_2a0);
        if (uStack_100 == (uint *)0x8000000000000001) {
          puStack_2c0[0] = 0x1d;
          puStack_2c0[1] = 0;
          *(uint **)(puStack_2c0 + 2) = puStack_f8;
          uVar18 = 1;
          iVar16 = 1;
          puVar20 = (uint *)&uStack_2a0;
          unaff_x22 = puStack_2b8;
          unaff_x23 = puStack_2b0;
          goto LAB_100432e3c;
        }
        puStack_2c8 = puStack_f8;
        puVar11 = (uint *)&uStack_100;
        unaff_x24 = uStack_100;
code_r0x000100432780:
        puVar15 = (uint *)param_3;
        puStack_120 = *(uint **)(puVar11 + 6);
        puStack_128 = *(uint **)(puVar11 + 4);
        lStack_110 = *(long *)(puVar11 + 10);
        puStack_118 = *(uint **)(puVar11 + 8);
        lStack_108 = *(long *)(puVar11 + 0xc);
        puVar19 = puStack_278;
        unaff_x28 = puStack_268;
        puStack_2a8 = unaff_x24;
      }
      else {
        uStack_2a0._0_1_ = 0x16;
        if (bVar9 == 0x16) {
          puStack_130 = puStack_2c8;
          puStack_138 = unaff_x24;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004331b4:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004331b8);
          (*pcVar4)();
        }
        lVar7 = *(long *)unaff_x23;
        *(long *)(unaff_x20 + 2) = *(long *)(unaff_x23 + 2);
        *(long *)unaff_x20 = lVar7;
        puVar24 = *(uint **)((long)unaff_x23 + 0x17);
        puVar22 = *(uint **)((long)unaff_x23 + 0xf);
code_r0x000100432894:
        *(uint **)((long)unaff_x20 + 0x17) = puVar24;
        *(uint **)((long)unaff_x20 + 0xf) = puVar22;
        uStack_100 = (uint *)CONCAT71(uStack_100._1_7_,bVar9);
code_r0x00010043289c:
        FUN_100e077ec(&uStack_100);
        puVar19 = unaff_x21;
code_r0x0001004328a4:
        puVar15 = (uint *)param_3;
      }
    } while (puVar19 != unaff_x28);
    puStack_130 = puStack_2c8;
    param_3 = (char *)puVar15;
    unaff_x25 = puStack_2c8;
    puStack_138 = unaff_x24;
  case 0x4b:
  case 0x70:
  case 0x86:
    puVar12 = (uint *)0x8000000000000000;
code_r0x0001004329e0:
    unaff_x22 = puStack_2b8;
code_r0x0001004329e4:
    in_ZR = unaff_x22 == puVar12;
code_r0x0001004329e8:
    unaff_x23 = puStack_2b0;
    if ((bool)in_ZR) {
code_r0x0001004329f0:
      unaff_x20 = puStack_2c0;
code_r0x0001004329f4:
      unaff_x24 = (uint *)&uStack_2a0;
code_r0x0001004329f8:
      puVar11 = (uint *)&UNK_108cb8000;
code_r0x0001004329fc:
      puVar11 = (uint *)((long)puVar11 + 0x872);
code_r0x000100432a00:
      puVar12 = (uint *)0x11;
code_r0x000100432a04:
      uStack_90 = puVar11;
      puStack_88 = puVar12;
code_r0x000100432a08:
      puVar11 = (uint *)&uStack_90;
code_r0x000100432a0c:
      puVar12 = (uint *)&UNK_100c7b000;
code_r0x000100432a10:
      puVar12 = puVar12 + 0xe8;
code_r0x000100432a14:
      unaff_x22 = (uint *)0x0;
      puVar17 = (uint *)param_3;
      uStack_100 = puVar11;
      puStack_f8 = puVar12;
FUN_100432a1c:
      param_3 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x000100432a20:
      param_3 = (char *)((long)param_3 + 0x8f7);
code_r0x000100432a24:
      param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_100);
code_r0x000100432a2c:
      puVar11 = (uint *)0x1d;
code_r0x000100432a30:
      *(uint **)unaff_x20 = puVar11;
      *(char **)(unaff_x20 + 2) = param_3;
LAB_100432a34:
      unaff_x20 = (uint *)0x1;
code_r0x000100432a38:
      unaff_x21 = (uint *)0x1;
code_r0x000100432a3c:
      puVar11 = (uint *)0x8000000000000001;
      puVar12 = puStack_2a8;
code_r0x000100432a44:
      in_ZR = puVar12 == puVar11;
code_r0x000100432a48:
      param_3 = (char *)puVar17;
      puVar20 = unaff_x24;
      puVar15 = puVar17;
      uVar2 = (uint)unaff_x21;
      iVar1 = (int)unaff_x20;
      if ((bool)in_ZR) {
code_r0x000100432a4c:
        puVar15 = (uint *)param_3;
        iVar16 = (int)unaff_x20;
        uVar18 = (uint)unaff_x21;
        goto LAB_100432e3c;
      }
joined_r0x0001004330b0:
      iVar16 = iVar1;
      uVar18 = uVar2;
      if (puVar12 != (uint *)0x8000000000000000) {
        if (puVar12 != (uint *)0x0) {
          _free(unaff_x25);
        }
        if (puStack_120 != (uint *)0x0) {
          _free(puStack_118);
        }
      }
LAB_100432e3c:
      if (((ulong)puVar15 & 0x7fffffffffffffff) == 0) {
        iVar1 = 0;
        if (unaff_x23 != (uint *)0x8000000000000001) {
          iVar1 = iVar16;
        }
      }
      else {
        _free(puStack_2d8);
        iVar1 = 0;
        if (unaff_x23 != (uint *)0x8000000000000001) {
          iVar1 = iVar16;
        }
      }
      if ((iVar1 == 1) && (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0)) {
        _free(puStack_2e0);
      }
      uVar2 = 0;
      if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar18;
      }
      if ((uVar2 & 1) != 0) {
        _free(puStack_2d0);
      }
      FUN_100d34830(puVar20 + 8);
      if ((byte)uStack_2a0 == 0x16) {
        return;
      }
      FUN_100e077ec(&uStack_2a0);
      return;
    }
    puVar11 = (uint *)0x8000000000000001;
code_r0x000100432a8c:
    unaff_x23 = puStack_2b0;
code_r0x000100432a90:
    in_ZR = unaff_x23 == puVar11;
code_r0x000100432a94:
    unaff_x21 = puVar12;
    if (!(bool)in_ZR) {
      unaff_x21 = unaff_x23;
    }
code_r0x000100432a98:
    unaff_x20 = (uint *)(ulong)in_ZR;
    in_ZR = (uint *)param_3 == puVar12;
code_r0x000100432aa0:
    unaff_x24 = puStack_2c0;
code_r0x000100432aa4:
    puVar14 = puStack_2a8;
    if ((bool)in_ZR) {
code_r0x000100432aa8:
      puVar11 = (uint *)&UNK_108ca33da;
code_r0x000100432ab0:
      puStack_88 = (uint *)0x5;
      uStack_90 = puVar11;
code_r0x000100432ab8:
      puVar11 = (uint *)&uStack_90;
      puVar12 = (uint *)&UNK_100c7b000;
code_r0x000100432ac0:
      puStack_f8 = puVar12 + 0xe8;
      param_3 = s_missing_field_____108ac28f7;
      uStack_100 = puVar11;
code_r0x000100432ad0:
      lVar7 = thunk_FUN_108856088(param_3,&uStack_100);
      unaff_x24[0] = 0x1d;
      unaff_x24[1] = 0;
      *(long *)(unaff_x24 + 2) = lVar7;
code_r0x000100432ae0:
      if (((ulong)unaff_x21 & 0x7fffffffffffffff) != 0) {
code_r0x000100432ae8:
        _free(puStack_2e0);
      }
      unaff_x24 = (uint *)&uStack_2a0;
      if (unaff_x22 != (uint *)0x0) {
code_r0x000100432af8:
        _free(puStack_2d0);
      }
LAB_100432b00:
      unaff_x21 = (uint *)0x0;
      puVar11 = (uint *)0x8000000000000001;
      puVar12 = puStack_2a8;
      param_3 = (char *)(uint *)0x0;
      puVar20 = unaff_x24;
code_r0x000100432b10:
      puVar15 = (uint *)param_3;
      iVar16 = (int)unaff_x20;
      uVar18 = (uint)unaff_x21;
      uVar2 = uVar18;
      iVar1 = iVar16;
      if (puVar12 == puVar11) goto LAB_100432e3c;
      goto joined_r0x0001004330b0;
    }
code_r0x000100432b20:
    puVar13 = puStack_2d8;
    puVar12 = puStack_2e0;
    if (puVar14 == puVar11) {
      puVar14 = (uint *)0x8000000000000000;
    }
    else {
      puStack_b8 = puStack_120;
      puStack_c0 = puStack_128;
      lStack_a8 = lStack_110;
      puStack_b0 = puStack_118;
      lStack_a0 = lStack_108;
    }
code_r0x000100432c8c:
    unaff_x24[0] = 0xc;
    unaff_x24[1] = 0;
    *(uint **)(unaff_x24 + 2) = unaff_x22;
    puVar11 = puStack_2d0;
code_r0x000100432c98:
    *(uint **)(unaff_x24 + 4) = puVar11;
    puVar11 = puStack_2f0;
code_r0x000100432ca0:
    *(uint **)(unaff_x24 + 6) = puVar11;
    *(char **)(unaff_x24 + 8) = param_3;
    *(uint **)(unaff_x24 + 10) = puVar13;
    *(uint **)(unaff_x24 + 0xc) = puStack_2f8;
    *(uint **)(unaff_x24 + 0xe) = unaff_x21;
    *(uint **)(unaff_x24 + 0x10) = puVar12;
code_r0x000100432cb0:
    *(uint **)(unaff_x24 + 0x12) = puStack_2e8;
    *(uint **)(unaff_x24 + 0x14) = puVar14;
code_r0x000100432cb8:
    *(uint **)(unaff_x24 + 0x16) = unaff_x25;
    puVar22 = puStack_c0;
    puVar24 = puStack_b8;
    puVar25 = puStack_b0;
    lVar7 = lStack_a8;
code_r0x000100432cc0:
    *(uint **)(unaff_x24 + 0x1a) = puVar24;
    *(uint **)(unaff_x24 + 0x18) = puVar22;
    *(long *)(unaff_x24 + 0x1e) = lVar7;
    *(uint **)(unaff_x24 + 0x1c) = puVar25;
    *(long *)(unaff_x24 + 0x20) = lStack_a0;
    param_3 = (char *)&lStack_250;
code_r0x000100432cd0:
    _memcpy(param_3,unaff_x24,0x118);
    param_3 = (char *)&uStack_2a0;
code_r0x000100432ce0:
    param_3 = (char *)FUN_100fbc67c(param_3);
    if ((uint *)param_3 == (uint *)0x0) {
      return;
    }
code_r0x000100432ce8:
    unaff_x24[0] = 0x1d;
    unaff_x24[1] = 0;
    *(char **)(unaff_x24 + 2) = param_3;
    goto code_r0x000100432cf0;
  case 0x16:
  case 0xdc:
    goto code_r0x000100432a80;
  case 0x17:
  case 0xdd:
    goto code_r0x000100432a90;
  case 0x18:
  case 0xde:
    goto code_r0x000100432a58;
  case 0x19:
  case 0xdf:
    goto code_r0x000100432a70;
  case 0x1a:
  case 0xe0:
    goto FUN_100432a1c;
  case 0x1b:
  case 0xa9:
  case 0xe1:
    goto code_r0x000100432aa0;
  case 0x1c:
  case 0xa1:
  case 0xe2:
    goto code_r0x000100432ab8;
  case 0x1d:
  case 0xe3:
    goto code_r0x000100432a78;
  case 0x1e:
  case 0x9b:
  case 0xe4:
    goto code_r0x000100432ad0;
  case 0x1f:
  case 0xe5:
    goto code_r0x000100432a4c;
  case 0x20:
  case 0x9a:
  case 0xe6:
    goto code_r0x000100432ac0;
  case 0x21:
  case 0x71:
  case 0x87:
  case 0xe7:
    goto code_r0x0001004329f4;
  case 0x22:
  case 0x73:
  case 0x89:
  case 0xe8:
    goto code_r0x000100432a24;
  case 0x23:
  case 0xe9:
    goto code_r0x000100432aa8;
  case 0x24:
  case 0xea:
    goto code_r0x0001004329cc;
  case 0x25:
  case 0x4a:
  case 0xeb:
    goto code_r0x000100432a60;
  case 0x26:
  case 0xec:
    goto code_r0x0001004329c4;
  case 0x28:
  case 0xee:
    goto code_r0x000100432b20;
  case 0x29:
  case 0xef:
    goto code_r0x000100432624;
  case 0x2a:
  case 0xf0:
    goto code_r0x000100432668;
  case 0x2c:
  case 0x7c:
  case 0x92:
  case 0xb7:
    goto code_r0x000100432950;
  case 0x2d:
    goto code_r0x000100432960;
  case 0x2e:
    goto code_r0x000100432928;
  case 0x2f:
    goto code_r0x000100432940;
  case 0x30:
  case 0x68:
    goto code_r0x0001004328ec;
  case 0x31:
code_r0x000100432970:
    unaff_x21 = unaff_x22;
  case 0x61:
code_r0x000100432974:
    param_4 = &UNK_10b22e000;
code_r0x000100432978:
    param_4 = param_4 + 0xcf8;
    param_5 = &UNK_10b20a000;
code_r0x000100432980:
    param_5 = param_5 + 0x590;
code_r0x000100432984:
    puVar17 = (uint *)0x0;
code_r0x000100432988:
    unaff_x20 = (uint *)thunk_FUN_1087e422c(puVar17,param_4,param_5);
code_r0x000100432990:
    *(uint *)((long)param_3 + 0) = 0x1d;
    *(uint *)((long)param_3 + 4) = 0;
    *(uint **)((long)param_3 + 8) = unaff_x20;
code_r0x000100432998:
    puVar11 = (uint *)((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5);
code_r0x0001004329a0:
    unaff_x22 = (uint *)((long)puVar11 + 1);
    unaff_x20 = unaff_x21;
    while( true ) {
      unaff_x22 = (uint *)((long)unaff_x22 + -1);
      in_ZR = unaff_x22 == (uint *)0x0;
      unaff_x21 = unaff_x20;
code_r0x0001004329a8:
      puVar11 = puStack_128;
      if ((bool)in_ZR) break;
code_r0x0001004329ac:
      param_3 = (char *)unaff_x21;
      unaff_x20 = (uint *)((long)param_3 + 0x20);
code_r0x0001004329b4:
      FUN_100e077ec(param_3);
code_r0x0001004329b8:
    }
code_r0x0001004329c4:
    if (puVar11 == (uint *)0x0) {
      return;
    }
code_r0x0001004329c8:
    param_3 = (char *)puStack_138;
code_r0x0001004329cc:
    _free(param_3);
code_r0x0001004329d0:
    return;
  case 0x32:
  case 0x67:
    goto code_r0x000100432988;
  case 0x33:
  case 0x7e:
  case 0x94:
  case 0xb3:
    goto code_r0x000100432948;
  case 0x34:
  case 0x5f:
  case 0x72:
  case 0x88:
    goto code_r0x0001004329a0;
  case 0x35:
  case 99:
    goto code_r0x00010043291c;
  case 0x36:
  case 0xb6:
    goto code_r0x000100432990;
  case 0x37:
    goto code_r0x0001004328c4;
  case 0x38:
  case 0x66:
  case 0xb4:
    goto code_r0x0001004328f4;
  case 0x39:
  case 0x79:
  case 0x8f:
  case 0xb5:
    goto code_r0x000100432978;
  case 0x3a:
  case 0xc0:
    goto code_r0x00010043289c;
  case 0x3b:
  case 0xb2:
    goto code_r0x000100432930;
  case 0x3c:
    goto code_r0x000100432894;
  case 0x3e:
  case 0x51:
    goto code_r0x0001004329f0;
  case 0x3f:
  case 0x6b:
  case 0xc3:
    goto code_r0x0001004325e8;
  case 0x40:
  case 0x6c:
  case 0xc4:
    goto code_r0x00010043262c;
  case 0x42:
    goto code_r0x000100432a10;
  case 0x43:
    goto code_r0x000100432a20;
  case 0x44:
  case 0x62:
    goto code_r0x0001004329e8;
  case 0x45:
    goto code_r0x000100432a00;
  case 0x46:
    goto code_r0x0001004329ac;
  case 0x47:
    goto code_r0x000100432a30;
  case 0x48:
  case 0x6a:
    goto code_r0x000100432a48;
  case 0x49:
    goto code_r0x000100432a08;
  case 0x4c:
code_r0x000100432a50:
    unaff_x25 = puStack_2c8;
  case 0x76:
  case 0x8c:
    puStack_138 = unaff_x24;
    puStack_130 = unaff_x25;
code_r0x000100432a58:
    puVar11 = puStack_f8;
code_r0x000100432a5c:
    puVar12 = (uint *)0x1d;
code_r0x000100432a60:
    puVar13 = puStack_2c0;
    unaff_x22 = puStack_2b8;
code_r0x000100432a64:
    puVar15 = (uint *)param_3;
    *(uint **)puVar13 = puVar12;
    *(uint **)(puVar13 + 2) = puVar11;
code_r0x000100432a6c:
    unaff_x20 = (uint *)0x1;
    unaff_x21 = (uint *)0x1;
    param_3 = (char *)puVar15;
code_r0x000100432a70:
    unaff_x24 = (uint *)&uStack_2a0;
    puVar12 = puStack_2a8;
    unaff_x23 = puStack_2b0;
code_r0x000100432a78:
    in_ZR = puVar12 == (uint *)0x8000000000000001;
    puVar20 = unaff_x24;
code_r0x000100432a80:
    puVar15 = (uint *)param_3;
    iVar16 = (int)unaff_x20;
    uVar18 = (uint)unaff_x21;
    uVar2 = uVar18;
    iVar1 = iVar16;
    if ((bool)in_ZR) goto LAB_100432e3c;
    goto joined_r0x0001004330b0;
  case 0x4d:
    goto code_r0x000100432984;
  case 0x4e:
    goto code_r0x0001004329b4;
  case 0x4f:
    goto code_r0x000100432a38;
  case 0x50:
    goto code_r0x00010043295c;
  case 0x52:
code_r0x000100432954:
    puStack_138 = puVar12;
  case 0xb0:
    param_3 = (char *)0x0;
code_r0x00010043295c:
    puVar11 = (uint *)0x8000000000000001;
code_r0x000100432960:
    unaff_x23 = (uint *)0x8000000000000001;
    puStack_2a8 = puVar11;
code_r0x000100432968:
    unaff_x20 = puStack_2c0;
    goto code_r0x0001004329f8;
  case 0x54:
    goto code_r0x000100432a94;
  case 0x55:
    goto code_r0x000100432608;
  case 0x56:
    goto code_r0x00010043264c;
  case 0x58:
  case 0x7a:
  case 0x90:
  case 0xb8:
    goto code_r0x0001004329a8;
  case 0x59:
    goto code_r0x0001004329b8;
  case 0x5a:
  case 0xbd:
    goto code_r0x000100432980;
  case 0x5b:
  case 0xba:
    goto code_r0x000100432998;
  case 0x5c:
    goto code_r0x000100432944;
  case 0x5d:
    goto code_r0x0001004329c8;
  case 0x5e:
    goto code_r0x0001004329e0;
  case 0x60:
  case 0xc2:
    goto code_r0x0001004329f8;
  case 100:
    goto code_r0x00010043294c;
  case 0x65:
  case 0x77:
  case 0x8d:
    goto code_r0x0001004329d0;
  case 0x6e:
  case 0x84:
  case 0xaa:
    goto code_r0x000100432a04;
  case 0x6f:
  case 0x85:
    goto code_r0x000100432a14;
  case 0x74:
  case 0x8a:
    goto code_r0x000100432a3c;
  case 0x75:
  case 0x8b:
    goto code_r0x0001004329fc;
  case 0x78:
  case 0x8e:
    goto code_r0x000100432a44;
  case 0x7b:
  case 0x91:
    goto code_r0x000100432a2c;
  case 0x7d:
  case 0x93:
    goto code_r0x0001004329e4;
  case 0x80:
  case 0x96:
    goto code_r0x000100432aa4;
  case 0x81:
  case 0x97:
    goto code_r0x000100432604;
  case 0x82:
  case 0x98:
    goto code_r0x000100432648;
  case 0x9c:
    goto code_r0x000100432a98;
  case 0x9d:
    goto code_r0x000100432ab0;
  case 0x9e:
    goto code_r0x000100432a5c;
  case 0x9f:
    goto code_r0x000100432ae0;
  case 0xa0:
    goto code_r0x000100432af8;
  case 0xa2:
    goto code_r0x000100432b10;
  case 0xa3:
    goto code_r0x000100432a8c;
  case 0xa4:
    goto LAB_100432b00;
  case 0xa5:
    goto LAB_100432a34;
  case 0xa6:
    goto code_r0x000100432a64;
  case 0xa7:
    goto code_r0x000100432ae8;
  case 0xa8:
    goto code_r0x000100432a0c;
  case 0xad:
    goto code_r0x0001004326c4;
  case 0xae:
    goto code_r0x000100432708;
  case 0xb1:
    goto code_r0x000100432968;
  case 0xb9:
    goto code_r0x000100432924;
  case 0xbb:
    goto code_r0x0001004328cc;
  case 0xbc:
    goto code_r0x0001004328fc;
  case 0xbe:
    goto code_r0x0001004328a4;
  case 0xbf:
    goto code_r0x000100432938;
  case 0xc6:
    goto code_r0x000100432cc0;
  case 199:
    goto code_r0x000100432cd0;
  case 200:
    goto code_r0x000100432c98;
  case 0xc9:
    goto code_r0x000100432cb0;
  case 0xca:
    goto code_r0x000100432c5c;
  case 0xcb:
    goto code_r0x000100432ce0;
  case 0xcc:
    goto code_r0x000100432cf8;
  case 0xcd:
    goto code_r0x000100432cb8;
  case 0xce:
    goto code_r0x000100432d10;
  case 0xcf:
    goto code_r0x000100432c8c;
  case 0xd0:
    goto code_r0x000100432d00;
  case 0xd2:
    goto code_r0x000100432c64;
  case 0xd3:
    goto code_r0x000100432ce8;
  case 0xd5:
    goto code_r0x000100432ca0;
  case 0xd8:
    goto code_r0x000100432d40;
  case 0xf2:
    goto code_r0x00010043280c;
  case 0xf3:
    goto code_r0x00010043281c;
  case 0xf4:
    goto code_r0x0001004327e4;
  case 0xf5:
    goto code_r0x0001004327fc;
  case 0xf6:
    goto code_r0x0001004327a8;
  case 0xf7:
    goto code_r0x00010043282c;
  case 0xf8:
    goto code_r0x000100432844;
  case 0xf9:
    goto code_r0x000100432804;
  case 0xfa:
    goto code_r0x00010043285c;
  case 0xfb:
    goto code_r0x0001004327d8;
  case 0xfc:
    goto code_r0x00010043284c;
  case 0xfd:
    goto code_r0x000100432780;
  case 0xfe:
    goto code_r0x0001004327b0;
  case 0xff:
    goto code_r0x000100432834;
  }
  lStack_250 = CONCAT71(lStack_250._1_7_,uVar10);
code_r0x000100432c4c:
  param_5 = &UNK_10b21c490;
  puVar17 = (uint *)&lStack_250;
  param_4 = abStack_69;
code_r0x000100432c5c:
  puVar17 = (uint *)FUN_107c05dcc(puVar17,param_4,param_5);
  puVar11 = (uint *)0x1d;
code_r0x000100432c64:
  *(uint **)param_3 = puVar11;
  *(uint **)((long)param_3 + 8) = puVar17;
  return;
}

