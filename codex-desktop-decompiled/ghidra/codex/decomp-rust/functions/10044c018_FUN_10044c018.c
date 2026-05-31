
void FUN_10044c018(undefined1 param_1 [16],ulong *param_2,byte *param_3,undefined *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong *puVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 in_ZR;
  bool bVar26;
  char *pcVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  byte bVar32;
  ulong *puVar33;
  ulong *puVar34;
  undefined8 uVar35;
  ulong *puVar36;
  ulong *puVar37;
  long lVar38;
  ulong *puVar39;
  uint uVar40;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  uint uVar41;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong *puVar42;
  ulong *unaff_x26;
  ulong *puVar43;
  ulong *unaff_x27;
  ulong *puVar44;
  byte unaff_w28;
  undefined1 *puVar45;
  undefined8 unaff_x30;
  ulong *puVar46;
  ulong *puVar47;
  byte abStack_380 [88];
  ulong *puStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2f0;
  ulong *puStack_2e8;
  ulong *puStack_2e0;
  ulong *puStack_2d8;
  ulong *puStack_2d0;
  ulong *puStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong uStack_220;
  ulong *puStack_218;
  ulong *puStack_210;
  ulong uStack_208;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  byte abStack_69 [9];
  byte *pbVar18;
  byte *pbVar25;
  
  puVar47 = param_1._8_8_;
  puVar46 = param_1._0_8_;
  puVar45 = &stack0xfffffffffffffff0;
  pbVar17 = abStack_380 + 0x50;
  pbVar12 = abStack_380 + 0x50;
  pbVar24 = abStack_380 + 0x50;
  bVar32 = *param_3;
  puVar33 = (ulong *)(ulong)bVar32;
  puVar37 = (ulong *)&UNK_108c98f44;
  puVar39 = (ulong *)(&UNK_10044c058 + (ulong)*(ushort *)(&UNK_108c98f44 + (long)puVar33 * 2) * 4);
  pbVar19 = abStack_380 + 0x50;
  pbVar20 = abStack_380 + 0x50;
  pbVar21 = abStack_380 + 0x50;
  pbVar22 = abStack_380 + 0x50;
  pbVar23 = abStack_380 + 0x50;
  pbVar25 = abStack_380 + 0x50;
  pbVar13 = abStack_380 + 0x50;
  pbVar14 = abStack_380 + 0x50;
  pbVar15 = abStack_380 + 0x50;
  pbVar16 = abStack_380 + 0x50;
  pbVar18 = abStack_380 + 0x50;
  pbVar7 = abStack_380 + 0x50;
  pbVar8 = abStack_380 + 0x50;
  pbVar9 = abStack_380 + 0x50;
  pbVar10 = abStack_380 + 0x50;
  pbVar11 = abStack_380 + 0x50;
  puVar28 = param_2;
  pcVar27 = (char *)param_2;
  puVar34 = puVar33;
  puVar36 = puVar37;
  puVar42 = unaff_x25;
  puVar43 = unaff_x26;
  puVar44 = unaff_x27;
  puVar5 = uStack_d0;
  switch(bVar32) {
  case 0:
  case 0x4c:
  case 0xf9:
    bVar32 = param_3[1];
  case 0x2d:
  case 0xd0:
    uStack_220 = (ulong)CONCAT61(uStack_220._2_6_,bVar32) << 8;
code_r0x00010044c994:
    uStack_220 = uStack_220 & 0xffffffffffffff00;
    goto code_r0x00010044c9ec;
  case 1:
  case 0x4a:
    puVar33 = (ulong *)(ulong)param_3[1];
  case 0x31:
  case 0xce:
code_r0x00010044c9a0:
    puStack_218 = puVar33;
code_r0x00010044c9a4:
    bVar32 = 1;
code_r0x00010044c9a8:
    break;
  case 2:
  case 0x96:
    puVar33 = (ulong *)(ulong)*(ushort *)(param_3 + 2);
    goto code_r0x00010044c9a0;
  case 3:
    puVar33 = (ulong *)(ulong)*(uint *)(param_3 + 4);
  case 0x2c:
    goto code_r0x00010044c9a0;
  case 4:
  case 200:
    puVar33 = *(ulong **)(param_3 + 8);
  case 0x51:
  case 0xbd:
    goto code_r0x00010044c9a0;
  case 5:
    puStack_218 = (ulong *)(long)(char)param_3[1];
  case 0xfa:
code_r0x00010044c9e4:
    bVar32 = 2;
    break;
  case 6:
    puStack_218 = (ulong *)(long)*(short *)(param_3 + 2);
    goto code_r0x00010044c9e4;
  case 7:
  case 0x48:
  case 0xf5:
    puVar33 = (ulong *)(long)*(int *)(param_3 + 4);
  case 0xcc:
    puStack_218 = puVar33;
    goto code_r0x00010044c9e4;
  case 8:
    puStack_218 = *(ulong **)(param_3 + 8);
    goto code_r0x00010044c9e4;
  case 9:
  case 0x2e:
    puVar46 = (ulong *)(ulong)*(uint *)(param_3 + 4);
  case 0x43:
    puVar46 = (ulong *)(double)SUB84(puVar46,0);
code_r0x00010044c960:
code_r0x00010044c9d0:
    puStack_218 = puVar46;
code_r0x00010044c9d4:
    bVar32 = 3;
    break;
  case 10:
  case 0xf8:
    puVar46 = *(ulong **)(param_3 + 8);
    goto code_r0x00010044c9d0;
  case 0xb:
  case 0x89:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0xb0:
code_r0x00010044c908:
    pbVar13 = &stack0xffffffffffffffa0;
code_r0x00010044c90c:
    puVar45 = *(undefined1 **)(pbVar13 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar13 + 0x58);
    unaff_x20 = *(ulong **)(pbVar13 + 0x40);
    puVar28 = *(ulong **)(pbVar13 + 0x48);
    pbVar14 = pbVar13;
code_r0x00010044c914:
    pbVar15 = pbVar14;
code_r0x00010044c918:
    pbVar16 = pbVar15;
code_r0x00010044c91c:
    pbVar18 = pbVar16;
code_r0x00010044c920:
    pbVar17 = pbVar18 + 0x60;
code_r0x00010044c924:
    *(ulong **)(pbVar17 + -0x20) = unaff_x20;
    *(ulong **)(pbVar17 + -0x18) = puVar28;
    *(undefined1 **)(pbVar17 + -0x10) = puVar45;
    *(undefined8 *)(pbVar17 + -8) = unaff_x30;
    *(undefined4 *)(pbVar17 + -0x44) = 0;
    uVar31 = (uint)param_3;
    if (uVar31 < 0x80) {
      pbVar17[-0x44] = (byte)param_3;
      uVar35 = 1;
    }
    else {
      bVar32 = (byte)param_3 & 0x3f | 0x80;
      if (uVar31 < 0x800) {
        pbVar17[-0x44] = (byte)(uVar31 >> 6) | 0xc0;
        pbVar17[-0x43] = bVar32;
        uVar35 = 2;
      }
      else {
        bVar4 = (byte)(uVar31 >> 6) & 0x3f | 0x80;
        if (uVar31 < 0x10000) {
          pbVar17[-0x44] = (byte)(uVar31 >> 0xc) | 0xe0;
          pbVar17[-0x43] = bVar4;
          pbVar17[-0x42] = bVar32;
          uVar35 = 3;
        }
        else {
          pbVar17[-0x44] = (byte)(uVar31 >> 0x12) | 0xf0;
          pbVar17[-0x43] = (byte)(uVar31 >> 0xc) & 0x3f | 0x80;
          pbVar17[-0x42] = bVar4;
          pbVar17[-0x41] = bVar32;
          uVar35 = 4;
        }
      }
    }
    *(byte **)(pbVar17 + -0x38) = pbVar17 + -0x44;
    *(undefined8 *)(pbVar17 + -0x30) = uVar35;
    pbVar17[-0x40] = 5;
    uVar29 = func_0x000108a4a50c(pbVar17 + -0x40,pbVar17 + -0x21,&UNK_10b21b870);
    *param_2 = 0x1d;
    param_2[1] = uVar29;
    return;
  case 0xc:
  case 0x8c:
  case 0xd5:
  case 0xf6:
    param_3 = param_3 + 8;
  case 0xfe:
    pbVar19 = &stack0xffffffffffffffa0;
code_r0x00010044c93c:
    puVar45 = *(undefined1 **)(pbVar19 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar19 + 0x58);
    pbVar20 = pbVar19;
code_r0x00010044c940:
    unaff_x20 = *(ulong **)(pbVar20 + 0x40);
    puVar28 = *(ulong **)(pbVar20 + 0x48);
    pbVar21 = pbVar20;
code_r0x00010044c944:
    unaff_x22 = *(ulong **)(pbVar21 + 0x30);
    unaff_x21 = *(ulong **)(pbVar21 + 0x38);
    pbVar22 = pbVar21;
code_r0x00010044c948:
    pbVar23 = pbVar22;
code_r0x00010044c94c:
    pbVar25 = pbVar23;
code_r0x00010044c950:
    pbVar24 = pbVar25 + 0x60;
code_r0x00010044c954:
    *(ulong **)(pbVar24 + -0x30) = unaff_x22;
    *(ulong **)(pbVar24 + -0x28) = unaff_x21;
    *(ulong **)(pbVar24 + -0x20) = unaff_x20;
    *(ulong **)(pbVar24 + -0x18) = puVar28;
    *(undefined1 **)(pbVar24 + -0x10) = puVar45;
    *(undefined8 *)(pbVar24 + -8) = unaff_x30;
    uVar35 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pbVar24 + -0x48) = uVar35;
    *(undefined8 *)(pbVar24 + -0x40) = uVar3;
    pbVar24[-0x50] = 5;
    uVar29 = func_0x000108a4a50c(pbVar24 + -0x50,pbVar24 + -0x31,&UNK_10b21b870);
    *param_2 = 0x1d;
    param_2[1] = uVar29;
    if (*(long *)param_3 != 0) {
      _free(uVar35);
    }
    return;
  case 0xd:
  case 0xf7:
    puVar33 = *(ulong **)(param_3 + 8);
    puVar37 = *(ulong **)(param_3 + 0x10);
  case 0x32:
    puStack_218 = puVar33;
    puStack_210 = puVar37;
code_r0x00010044c9bc:
    bVar32 = 5;
code_r0x00010044c9c0:
    break;
  case 0xe:
  case 0x8b:
    param_3 = param_3 + 8;
  case 0xb2:
code_r0x00010044c8e0:
    pbVar7 = &stack0xffffffffffffffa0;
code_r0x00010044c8e4:
    puVar45 = *(undefined1 **)(pbVar7 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar7 + 0x58);
    pbVar8 = pbVar7;
code_r0x00010044c8e8:
    unaff_x20 = *(ulong **)(pbVar8 + 0x40);
    puVar28 = *(ulong **)(pbVar8 + 0x48);
    pbVar9 = pbVar8;
code_r0x00010044c8ec:
    unaff_x22 = *(ulong **)(pbVar9 + 0x30);
    unaff_x21 = *(ulong **)(pbVar9 + 0x38);
    pbVar10 = pbVar9;
code_r0x00010044c8f0:
    pbVar11 = pbVar10;
code_r0x00010044c8f4:
    pbVar12 = pbVar11 + 0x60;
code_r0x00010044c8fc:
    *(ulong **)(pbVar12 + -0x30) = unaff_x22;
    *(ulong **)(pbVar12 + -0x28) = unaff_x21;
    *(ulong **)(pbVar12 + -0x20) = unaff_x20;
    *(ulong **)(pbVar12 + -0x18) = puVar28;
    *(undefined1 **)(pbVar12 + -0x10) = puVar45;
    *(undefined8 *)(pbVar12 + -8) = unaff_x30;
    uVar35 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pbVar12 + -0x48) = uVar35;
    *(undefined8 *)(pbVar12 + -0x40) = uVar3;
    pbVar12[-0x50] = 6;
    uVar29 = func_0x000108a4a50c(pbVar12 + -0x50,pbVar12 + -0x31,&UNK_10b21b870);
    *param_2 = 0x1d;
    param_2[1] = uVar29;
    if (*(long *)param_3 != 0) {
      _free(uVar35);
    }
    return;
  case 0xf:
  case 0x47:
  case 0xf4:
    puVar33 = *(ulong **)(param_3 + 8);
    puVar37 = *(ulong **)(param_3 + 0x10);
  case 0x2f:
  case 0xcb:
    puStack_218 = puVar33;
    puStack_210 = puVar37;
code_r0x00010044c974:
    bVar32 = 6;
code_r0x00010044c978:
    break;
  case 0x10:
  case 0x87:
  case 0xb9:
    bVar32 = 8;
    break;
  default:
    puVar28 = *(ulong **)(param_3 + 8);
    puStack_218 = (ulong *)puVar28[1];
    uStack_220 = *puVar28;
    uStack_208 = puVar28[3];
    puStack_210 = (ulong *)puVar28[2];
    func_0x000107c04744(param_2,&uStack_220);
  case 0x26:
code_r0x00010044c620:
code_r0x00010044c628:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puVar28);
    return;
  case 0x12:
    bVar32 = 7;
    break;
  case 0x13:
    puVar28 = *(ulong **)(param_3 + 8);
    puStack_218 = (ulong *)puVar28[1];
    uStack_220 = *puVar28;
    uStack_208 = puVar28[3];
    puStack_210 = (ulong *)puVar28[2];
    func_0x000107c0542c(param_2,&uStack_220);
    goto code_r0x00010044c620;
  case 0x14:
    puStack_f8 = *(ulong **)(param_3 + 8);
    unaff_x24 = *(ulong **)(param_3 + 0x10);
    unaff_x25 = *(ulong **)(param_3 + 0x18);
    unaff_x22 = unaff_x24 + (long)unaff_x25 * 4;
    puStack_108 = unaff_x24;
    puStack_100 = unaff_x24;
    puStack_f0 = unaff_x22;
  case 0x21:
    puStack_e8 = (ulong *)0x0;
    if (unaff_x25 == (ulong *)0x0) {
code_r0x00010044c72c:
      unaff_x21 = unaff_x24;
code_r0x00010044c730:
      puStack_88 = (ulong *)thunk_FUN_1087e422c(0,&UNK_10b22ec28,&UNK_10b20a590);
    }
    else {
      unaff_x21 = unaff_x24 + 4;
      bVar32 = (byte)*unaff_x24;
      puStack_100 = unaff_x21;
      if (bVar32 == 0x16) goto code_r0x00010044c730;
      uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x24 + 9);
      uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x24 + 1);
      uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x24 + 1) >> 0x38);
      puVar47 = (ulong *)unaff_x24[3];
      puVar46 = (ulong *)unaff_x24[2];
code_r0x00010044c678:
      uStack_260 = SUB81(puVar46,0);
      uStack_25f = (undefined7)((ulong)puVar46 >> 8);
      puVar37 = (ulong *)0x1;
      puStack_258 = puVar47;
code_r0x00010044c680:
      bStack_270 = bVar32;
      puStack_e8 = puVar37;
      FUN_1004b62d4(&uStack_90,&bStack_270);
      if (uStack_90 != (ulong *)0x8000000000000000) {
        in_ZR = unaff_x25 == (ulong *)0x1;
        unaff_x20 = puStack_88;
        unaff_x26 = uStack_90;
code_r0x00010044c6a8:
        if ((bool)in_ZR) {
code_r0x00010044c6c4:
          param_3 = &UNK_10b22ec28;
code_r0x00010044c6cc:
          param_4 = &UNK_10b20a590;
code_r0x00010044c6d4:
          puVar28 = (ulong *)thunk_FUN_1087e422c(1,param_3,param_4);
code_r0x00010044c6dc:
          puStack_88 = puVar28;
code_r0x00010044c6e0:
          *param_2 = 0x1d;
          param_2[1] = (ulong)puStack_88;
        }
        else {
          puVar33 = unaff_x24 + 8;
          unaff_x23 = puStack_80;
code_r0x00010044c6b4:
          puVar34 = (ulong *)(ulong)(byte)unaff_x24[4];
          puStack_100 = puVar33;
code_r0x00010044c6bc:
          if ((int)puVar34 == 0x16) goto code_r0x00010044c6c4;
          uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x29);
          uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x21);
          uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x24 + 0x21) >> 0x38);
          puStack_258 = (ulong *)unaff_x24[7];
          uStack_260 = (undefined1)unaff_x24[6];
          uStack_25f = (undefined7)(unaff_x24[6] >> 8);
          puStack_e8 = (ulong *)0x2;
          bStack_270 = (byte)puVar34;
          FUN_1004b62d4(&uStack_90,&bStack_270);
          puVar33 = puStack_80;
          puVar42 = puStack_88;
          puVar37 = uStack_90;
          if (uStack_90 == (ulong *)0x8000000000000000) goto code_r0x00010044c6e0;
          if (unaff_x25 == (ulong *)0x2) {
code_r0x00010044cac0:
            puStack_88 = (ulong *)thunk_FUN_1087e422c(2,&UNK_10b22ec28,&UNK_10b20a590);
code_r0x00010044cadc:
            *param_2 = 0x1d;
            param_2[1] = (ulong)puStack_88;
          }
          else {
            puStack_100 = unaff_x24 + 0xc;
            if ((byte)unaff_x24[8] == 0x16) goto code_r0x00010044cac0;
            uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x49);
            uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x41);
            uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x24 + 0x41) >> 0x38);
            puStack_258 = (ulong *)unaff_x24[0xb];
            uStack_260 = (undefined1)unaff_x24[10];
            uStack_25f = (undefined7)(unaff_x24[10] >> 8);
            puStack_e8 = (ulong *)0x3;
            bStack_270 = (byte)unaff_x24[8];
            FUN_1004b62d4(&uStack_90,&bStack_270);
            puVar34 = puStack_88;
            puStack_278 = uStack_90;
            if (uStack_90 == (ulong *)0x8000000000000000) goto code_r0x00010044cadc;
            if (unaff_x25 == (ulong *)0x3) {
code_r0x00010044cf98:
              puStack_88 = (ulong *)thunk_FUN_1087e422c(3,&UNK_10b22ec28,&UNK_10b20a590);
code_r0x00010044cfb0:
              *param_2 = 0x1d;
              param_2[1] = (ulong)puStack_88;
            }
            else {
              puStack_280 = puStack_80;
              puStack_100 = unaff_x24 + 0x10;
              if ((byte)unaff_x24[0xc] == 0x16) goto code_r0x00010044cf98;
              uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x69);
              uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x61);
              uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x24 + 0x61) >> 0x38);
              puStack_258 = (ulong *)unaff_x24[0xf];
              uStack_260 = (undefined1)unaff_x24[0xe];
              uStack_25f = (undefined7)(unaff_x24[0xe] >> 8);
              puStack_e8 = (ulong *)0x4;
              bStack_270 = (byte)unaff_x24[0xc];
              FUN_1004b62d4(&uStack_90,&bStack_270);
              puStack_288 = uStack_90;
              if (uStack_90 == (ulong *)0x8000000000000000) goto code_r0x00010044cfb0;
              puStack_298 = puStack_88;
              if (unaff_x25 == (ulong *)0x4) {
code_r0x00010044d0d0:
                puStack_290 = (ulong *)thunk_FUN_1087e422c(4,&UNK_10b22ec28,&UNK_10b20a590);
code_r0x00010044d0ec:
                *param_2 = 0x1d;
                param_2[1] = (ulong)puStack_290;
              }
              else {
                puStack_2a0 = puStack_80;
                puStack_100 = unaff_x24 + 0x14;
                if ((byte)unaff_x24[0x10] == 0x16) goto code_r0x00010044d0d0;
                uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x89);
                uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x24 + 0x81);
                uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x24 + 0x81) >> 0x38);
                puStack_258 = (ulong *)unaff_x24[0x13];
                uStack_260 = (undefined1)unaff_x24[0x12];
                uStack_25f = (undefined7)(unaff_x24[0x12] >> 8);
                puStack_e8 = (ulong *)0x5;
                bStack_270 = (byte)unaff_x24[0x10];
                FUN_1004b62d4(&uStack_90,&bStack_270);
                puVar28 = puStack_80;
                puStack_2a8 = uStack_90;
                puStack_290 = puStack_88;
                if (uStack_90 == (ulong *)0x8000000000000000) goto code_r0x00010044d0ec;
                if (unaff_x25 == (ulong *)0x5) {
code_r0x00010044d5f0:
                  puStack_2b0 = (ulong *)thunk_FUN_1087e422c(5,&UNK_10b22ec28,&UNK_10b20a590);
code_r0x00010044d60c:
                  *param_2 = 0x1d;
                  param_2[1] = (ulong)puStack_2b0;
                }
                else {
                  puStack_100 = unaff_x24 + 0x18;
                  if ((byte)unaff_x24[0x14] == 0x16) goto code_r0x00010044d5f0;
                  uStack_267 = (undefined7)*(undefined8 *)((long)unaff_x24 + 0xa9);
                  uStack_26f = (undefined7)*(undefined8 *)((long)unaff_x24 + 0xa1);
                  uStack_268 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x24 + 0xa1) >> 0x38);
                  puStack_258 = (ulong *)unaff_x24[0x17];
                  uStack_260 = (undefined1)unaff_x24[0x16];
                  uStack_25f = (undefined7)(unaff_x24[0x16] >> 8);
                  puStack_e8 = (ulong *)0x6;
                  bStack_270 = (byte)unaff_x24[0x14];
                  FUN_1004b62d4(&uStack_90,&bStack_270);
                  puVar39 = uStack_90;
                  puStack_2b0 = puStack_88;
                  if (uStack_90 == (ulong *)0x8000000000000000) goto code_r0x00010044d60c;
                  puStack_2b8 = puStack_80;
                  func_0x000100f2c7e0(&bStack_270,&puStack_108);
                  uVar29 = CONCAT71(uStack_26f,bStack_270);
                  uVar30 = CONCAT71(uStack_267,uStack_268);
                  if (uVar29 != 0x8000000000000001) {
                    uStack_d0 = (ulong *)CONCAT71(uStack_25f,uStack_260);
                    puStack_c8 = puStack_258;
                    puStack_b8 = puStack_248;
                    puStack_c0 = puStack_250;
                    puStack_b0 = puStack_240;
                    if (uVar29 != 0x8000000000000000) {
                      param_2[0x16] = (ulong)puStack_258;
                      param_2[0x15] = (ulong)uStack_d0;
                      param_2[0x18] = (ulong)puStack_248;
                      param_2[0x17] = (ulong)puStack_250;
                      param_2[0x19] = (ulong)puStack_240;
                      *param_2 = 0x16;
                      param_2[1] = (ulong)unaff_x26;
                      param_2[2] = (ulong)unaff_x20;
                      param_2[3] = (ulong)unaff_x23;
                      param_2[4] = (ulong)puVar37;
                      param_2[5] = (ulong)puVar42;
                      param_2[6] = (ulong)puVar33;
                      param_2[7] = (ulong)puStack_278;
                      param_2[8] = (ulong)puVar34;
                      param_2[9] = (ulong)puStack_280;
                      param_2[10] = (ulong)puStack_288;
                      param_2[0xb] = (ulong)puStack_298;
                      param_2[0xc] = (ulong)puStack_2a0;
                      param_2[0xd] = (ulong)puStack_2a8;
                      param_2[0xe] = (ulong)puStack_290;
                      param_2[0xf] = (ulong)puVar28;
                      param_2[0x10] = (ulong)puVar39;
                      param_2[0x11] = (ulong)puStack_2b0;
                      param_2[0x12] = (ulong)puStack_2b8;
                      param_2[0x13] = uVar29;
                      param_2[0x14] = uVar30;
                      _memcpy(&uStack_220,param_2,0x118);
                      uVar29 = FUN_100fbc738(&puStack_108);
                      if (uVar29 == 0) {
                        return;
                      }
                      param_2[1] = uVar29;
code_r0x00010044cef8:
                      *param_2 = 0x1d;
                      FUN_100e35e0c(&uStack_220);
                      return;
                    }
                    uVar30 = thunk_FUN_1087e422c(6,&UNK_10b22ec28,&UNK_10b20a590);
                  }
                  *param_2 = 0x1d;
                  param_2[1] = uVar30;
                  if (puVar39 != (ulong *)0x0) {
                    _free(puStack_2b0);
                  }
                }
                if (puStack_2a8 != (ulong *)0x0) {
                  _free(puStack_290);
                }
              }
              if (puStack_288 != (ulong *)0x0) {
                _free(puStack_298);
              }
            }
            if (puStack_278 != (ulong *)0x0) {
              _free(puVar34);
            }
          }
          if (puVar37 != (ulong *)0x0) {
            _free(puVar42);
          }
        }
        unaff_x21 = puStack_100;
        unaff_x22 = puStack_f0;
        if (unaff_x26 != (ulong *)0x0) {
code_r0x00010044c6ec:
          _free(unaff_x20);
          unaff_x21 = puStack_100;
          unaff_x22 = puStack_f0;
        }
code_r0x00010044c6fc:
        goto code_r0x00010044c754;
      }
    }
    *param_2 = 0x1d;
    param_2[1] = (ulong)puStack_88;
code_r0x00010044c754:
    unaff_x22 = (ulong *)(((ulong)((long)unaff_x22 - (long)unaff_x21) >> 5) + 1);
    puVar37 = unaff_x21;
    while (unaff_x22 = (ulong *)((long)unaff_x22 + -1), unaff_x22 != (ulong *)0x0) {
      unaff_x21 = puVar37 + 4;
      FUN_100e077ec(puVar37);
code_r0x00010044c778:
      puVar37 = unaff_x21;
    }
    if (puStack_f8 == (ulong *)0x0) {
      return;
    }
    _free(puStack_108);
    return;
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
    puStack_240 = *(ulong **)(param_3 + 8);
    unaff_x27 = *(ulong **)(param_3 + 0x10);
    lVar38 = *(long *)(param_3 + 0x18);
    puStack_278 = unaff_x27 + lVar38 * 8;
    bStack_270 = 0x16;
    puStack_230 = (ulong *)0x0;
    unaff_x24 = (ulong *)0x8000000000000000;
    puStack_108 = (ulong *)0x8000000000000000;
    puVar42 = (ulong *)0x0;
    puStack_250 = unaff_x27;
    puStack_248 = unaff_x27;
    puStack_238 = puStack_278;
    if (lVar38 == 0) {
      puVar37 = (ulong *)0x8000000000000000;
      goto code_r0x00010044c704;
    }
    unaff_x21 = (ulong *)((ulong)&uStack_d0 | 1);
    unaff_x22 = (ulong *)((ulong)&bStack_270 | 1);
    puStack_2c0 = (ulong *)((ulong)&uStack_90 | 1);
    puStack_2f8 = (ulong *)((lVar38 * 0x40 - 0x40U >> 6) + 1);
    puStack_2b0 = (ulong *)0x8000000000000000;
    puStack_288 = (ulong *)0x8000000000000000;
    puStack_280 = (ulong *)0x8000000000000000;
    puStack_298 = (ulong *)0x8000000000000000;
    puStack_290 = (ulong *)0x8000000000000000;
    puStack_2a8 = (ulong *)0x8000000000000000;
    puStack_2a0 = (ulong *)0x8000000000000000;
    unaff_x20 = (ulong *)0x8000000000000000;
    puVar43 = unaff_x27;
    do {
      puVar34 = puStack_c0;
      puVar33 = puStack_c8;
      puVar37 = uStack_d0;
      unaff_x27 = puVar43 + 8;
      bVar32 = (byte)*puVar43;
      unaff_x25 = puVar42;
      puVar44 = unaff_x27;
      if (bVar32 == 0x16) break;
      uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
      puVar28 = uStack_d0;
      uVar29 = puVar43[2];
      *(ulong *)((long)unaff_x21 + 0x17) = puVar43[3];
      *(ulong *)((long)unaff_x21 + 0xf) = uVar29;
      uVar29 = *(ulong *)((long)puVar43 + 1);
      unaff_x21[1] = *(ulong *)((long)puVar43 + 9);
      *unaff_x21 = uVar29;
      puStack_258 = (ulong *)puVar43[7];
      uStack_268 = (undefined1)puVar43[5];
      uStack_267 = (undefined7)(puVar43[5] >> 8);
      bStack_270 = (byte)puVar43[4];
      uStack_26f = (undefined7)(puVar43[4] >> 8);
      uStack_260 = (undefined1)puVar43[6];
      uStack_25f = (undefined7)(puVar43[6] >> 8);
      if (bVar32 < 0xd) {
        if (bVar32 == 1) {
          uStack_d0._1_1_ = SUB81(puVar37,1);
          if (6 < uStack_d0._1_1_) {
            uStack_d0._1_1_ = 7;
          }
          uStack_90 = (ulong *)((ulong)CONCAT61(uStack_90._2_6_,uStack_d0._1_1_) << 8);
          uStack_d0 = puVar28;
          goto code_r0x00010044c228;
        }
        if (bVar32 == 4) {
          puVar37 = puStack_c8;
          if ((ulong *)0x6 < puStack_c8) {
            puVar37 = (ulong *)0x7;
          }
          uStack_90 = (ulong *)((ulong)CONCAT61(uStack_90._2_6_,(char)puVar37) << 8);
          uStack_d0 = puVar28;
          goto code_r0x00010044c228;
        }
        if (bVar32 != 0xc) {
code_r0x00010044c590:
          puVar28 = &uStack_d0;
          param_3 = abStack_69;
          param_4 = &UNK_10b20da60;
          goto code_r0x00010044c5a0;
        }
        func_0x000100b4bb8c(&uStack_90,puStack_c0);
joined_r0x00010044c1e4:
        unaff_x26 = puStack_2c8;
        bVar32 = bStack_270;
        puVar5 = uStack_d0;
        puVar37 = uStack_90;
        if (puVar33 != (ulong *)0x0) {
          _free(puVar34);
          unaff_x26 = puStack_2c8;
          bVar32 = bStack_270;
          puVar5 = uStack_d0;
          puVar37 = uStack_90;
        }
      }
      else {
        if (bVar32 == 0xd) {
          func_0x000100b4bb8c(&uStack_90,puStack_c8,puStack_c0);
        }
        else {
          if (bVar32 == 0xe) {
            func_0x000100b4a6dc(&uStack_90,puStack_c0,puStack_b8);
            goto joined_r0x00010044c1e4;
          }
          if (bVar32 != 0xf) goto code_r0x00010044c590;
          func_0x000100b4a6dc(&uStack_90,puStack_c8,puStack_c0);
        }
code_r0x00010044c228:
        FUN_100e077ec(&uStack_d0);
        unaff_x26 = puStack_2c8;
        bVar32 = bStack_270;
        puVar5 = uStack_d0;
        puVar37 = uStack_90;
      }
      puStack_2c8 = unaff_x26;
      bStack_270 = bVar32;
      uStack_d0 = puVar5;
      uStack_90 = puVar37;
      if (((ulong)puVar37 & 1) != 0) goto code_r0x00010044c5b8;
      uStack_90._1_1_ = (byte)((ulong)puVar37 >> 8);
      uStack_d0._1_7_ = (undefined7)((ulong)puVar5 >> 8);
      if (uStack_90._1_1_ < 4) {
        if (uStack_90._1_1_ < 2) {
          if (uStack_90._1_1_ == 0) {
            if (puStack_280 != unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              uStack_90 = (ulong *)&UNK_108cb88ab;
              puStack_88 = (ulong *)0xd;
              uStack_d0 = &uStack_90;
              puStack_c8 = (ulong *)&DAT_100c7b3a0;
              puStack_248 = unaff_x27;
              puStack_230 = unaff_x25;
              puStack_108 = unaff_x20;
              puStack_100 = puStack_2b8;
              uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
              goto LAB_10044c800;
            }
            bStack_270 = 0x16;
            if (bVar32 == 0x16) {
              puStack_230 = (ulong *)((long)puVar42 + 1);
              puStack_248 = unaff_x27;
              puStack_108 = unaff_x20;
              puStack_100 = puStack_2b8;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010044d558;
            }
            uVar29 = *unaff_x22;
            unaff_x21[1] = unaff_x22[1];
            *unaff_x21 = uVar29;
            uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
            *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
            *(undefined8 *)((long)unaff_x21 + 0xf) = uVar35;
            uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
            puStack_280 = (ulong *)0x8000000000000000;
            FUN_1004b62d4(&uStack_90,&uStack_d0);
            puStack_280 = uStack_90;
            if (uStack_90 == unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              puStack_100 = puStack_2b8;
              *param_2 = 0x1d;
              param_2[1] = (ulong)puStack_88;
              puStack_280 = (ulong *)0x8000000000000000;
              puStack_108 = unaff_x20;
code_r0x00010044cc50:
              unaff_x23 = (ulong *)0x1;
              uVar31 = 1;
              uVar41 = 1;
              unaff_w28 = 1;
              uVar40 = 1;
              bVar26 = true;
              unaff_x26 = puStack_2c8;
              puStack_2b8 = puStack_100;
              puStack_248 = unaff_x27;
              puStack_230 = unaff_x25;
              goto LAB_10044cd70;
            }
            puStack_300 = puStack_80;
            puStack_2c8 = puStack_88;
          }
          else {
            if (puStack_288 != unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              uStack_90 = (ulong *)&UNK_108cb8e87;
              puStack_88 = (ulong *)0x15;
              uStack_d0 = &uStack_90;
              puStack_c8 = (ulong *)&DAT_100c7b3a0;
              puStack_248 = unaff_x27;
              puStack_230 = unaff_x25;
              puStack_108 = unaff_x20;
              puStack_100 = puStack_2b8;
              uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
              goto LAB_10044c800;
            }
            bStack_270 = 0x16;
            if (bVar32 == 0x16) {
              puStack_230 = (ulong *)((long)puVar42 + 1);
              puStack_288 = (ulong *)0x8000000000000000;
              puStack_248 = unaff_x27;
              puStack_108 = unaff_x20;
              puStack_100 = puStack_2b8;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010044d558;
            }
            uVar29 = *unaff_x22;
            unaff_x21[1] = unaff_x22[1];
            *unaff_x21 = uVar29;
            uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
            *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
            *(undefined8 *)((long)unaff_x21 + 0xf) = uVar35;
            uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
            puStack_288 = (ulong *)0x8000000000000000;
            FUN_1004b62d4(&uStack_90,&uStack_d0);
            puVar33 = puStack_88;
            puVar37 = uStack_90;
code_r0x00010044c470:
            puStack_288 = puVar37;
code_r0x00010044c474:
            if (puVar37 == unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              puStack_100 = puStack_2b8;
              *param_2 = 0x1d;
              param_2[1] = (ulong)puVar33;
              puStack_288 = (ulong *)0x8000000000000000;
              puStack_108 = unaff_x20;
              goto code_r0x00010044cc50;
            }
            puStack_308 = puStack_80;
            puStack_2d0 = puVar33;
          }
        }
        else {
          bVar26 = uStack_90._1_1_ == 2;
          if (bVar26) {
            if (puStack_290 != unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              uStack_90 = (ulong *)&UNK_108ca2143;
              puStack_88 = (ulong *)0x9;
              uStack_d0 = &uStack_90;
              puStack_c8 = (ulong *)&DAT_100c7b3a0;
              puStack_248 = unaff_x27;
              puStack_230 = unaff_x25;
              puStack_108 = unaff_x20;
              puStack_100 = puStack_2b8;
              uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
              goto LAB_10044c800;
            }
            bStack_270 = 0x16;
            if (bVar32 == 0x16) {
              puStack_230 = (ulong *)((long)puVar42 + 1);
              puStack_290 = (ulong *)0x8000000000000000;
              puStack_248 = unaff_x27;
              puStack_108 = unaff_x20;
              puStack_100 = puStack_2b8;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010044d558;
            }
            uVar29 = *unaff_x22;
            unaff_x21[1] = unaff_x22[1];
            *unaff_x21 = uVar29;
            uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
            *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
            *(undefined8 *)((long)unaff_x21 + 0xf) = uVar35;
            uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
            puStack_290 = (ulong *)0x8000000000000000;
            puVar28 = &uStack_90;
code_r0x00010044c378:
            FUN_1004b62d4(puVar28,&uStack_d0);
            puStack_290 = uStack_90;
            if (uStack_90 == unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              puStack_100 = puStack_2b8;
              *param_2 = 0x1d;
              param_2[1] = (ulong)puStack_88;
              puStack_290 = (ulong *)0x8000000000000000;
              puStack_108 = unaff_x20;
              goto code_r0x00010044cc50;
            }
            puStack_310 = puStack_80;
            puStack_2d8 = puStack_88;
          }
          else {
code_r0x00010044c4f4:
            uStack_d0 = puVar5;
            in_ZR = puStack_298 == unaff_x24;
code_r0x00010044c4fc:
            bVar32 = bStack_270;
            if (!(bool)in_ZR) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              puStack_100 = puStack_2b8;
              uStack_90 = (ulong *)&UNK_108cb88bf;
              puStack_88 = (ulong *)0xd;
              uStack_d0 = &uStack_90;
              puStack_c8 = (ulong *)&DAT_100c7b3a0;
              puStack_248 = unaff_x27;
              puStack_230 = unaff_x25;
              puStack_108 = unaff_x20;
              uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
              unaff_x26 = puStack_2c8;
              goto LAB_10044c800;
            }
            bStack_270 = 0x16;
            if (bVar32 == 0x16) {
              puStack_230 = (ulong *)((long)puVar42 + 1);
              puStack_100 = puStack_2b8;
              puStack_298 = (ulong *)0x8000000000000000;
              puStack_248 = unaff_x27;
              puStack_108 = unaff_x20;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010044d558;
            }
            uVar29 = *unaff_x22;
            unaff_x21[1] = unaff_x22[1];
            *unaff_x21 = uVar29;
            uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
            *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
            *(undefined8 *)((long)unaff_x21 + 0xf) = uVar35;
            uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
            puStack_298 = (ulong *)0x8000000000000000;
            FUN_1004b62d4(&uStack_90,&uStack_d0);
            puVar33 = puStack_88;
            puVar37 = uStack_90;
code_r0x00010044c540:
            if (puVar37 == unaff_x24) {
              unaff_x25 = (ulong *)((long)puVar42 + 1);
              puStack_100 = puStack_2b8;
              *param_2 = 0x1d;
              param_2[1] = (ulong)puVar33;
              puStack_298 = (ulong *)0x8000000000000000;
              puStack_108 = unaff_x20;
              goto code_r0x00010044cc50;
            }
            puStack_318 = puStack_80;
            puStack_2e0 = puVar33;
            puStack_298 = puVar37;
          }
        }
      }
      else if (uStack_90._1_1_ < 6) {
        if (uStack_90._1_1_ == 4) {
          if (puStack_2a0 != unaff_x24) {
            unaff_x25 = (ulong *)((long)puVar42 + 1);
            uStack_90 = (ulong *)&UNK_108ca1efe;
            puStack_88 = (ulong *)0x5;
            uStack_d0 = &uStack_90;
            puStack_c8 = (ulong *)&DAT_100c7b3a0;
            puStack_248 = unaff_x27;
            puStack_230 = unaff_x25;
            puStack_108 = unaff_x20;
            puStack_100 = puStack_2b8;
            uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_10044c800;
          }
          bStack_270 = 0x16;
          if (bVar32 == 0x16) {
            puStack_230 = (ulong *)((long)puVar42 + 1);
            puStack_2a0 = (ulong *)0x8000000000000000;
            puStack_248 = unaff_x27;
            puStack_108 = unaff_x20;
            puStack_100 = puStack_2b8;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010044d558;
          }
          uVar29 = *unaff_x22;
          unaff_x21[1] = unaff_x22[1];
          *unaff_x21 = uVar29;
          uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar35;
          uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
          puStack_2a0 = (ulong *)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_d0);
          puStack_2a0 = uStack_90;
          if (uStack_90 == unaff_x24) {
            unaff_x25 = (ulong *)((long)puVar42 + 1);
            puStack_100 = puStack_2b8;
            *param_2 = 0x1d;
            param_2[1] = (ulong)puStack_88;
            puStack_2a0 = (ulong *)0x8000000000000000;
            puStack_108 = unaff_x20;
            goto code_r0x00010044cc50;
          }
          puStack_320 = puStack_80;
          puStack_2e8 = puStack_88;
        }
        else {
          if (puStack_2a8 != unaff_x24) {
            unaff_x25 = (ulong *)((long)puVar42 + 1);
            uStack_90 = (ulong *)&UNK_108cb88cc;
            puStack_88 = (ulong *)0xd;
            uStack_d0 = &uStack_90;
            puStack_c8 = (ulong *)&DAT_100c7b3a0;
            puStack_248 = unaff_x27;
            puStack_230 = unaff_x25;
            puStack_108 = unaff_x20;
            puStack_100 = puStack_2b8;
            uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_10044c800;
          }
          bStack_270 = 0x16;
          in_ZR = bVar32 == 0x16;
code_r0x00010044c4a8:
          if ((bool)in_ZR) {
            puStack_230 = (ulong *)((long)puVar42 + 1);
            puStack_100 = puStack_2b8;
            puStack_2a8 = (ulong *)0x8000000000000000;
            puStack_248 = unaff_x27;
            puStack_108 = unaff_x20;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010044d558;
          }
          puVar47 = (ulong *)unaff_x22[1];
          puVar46 = (ulong *)*unaff_x22;
code_r0x00010044c4b0:
          unaff_x21[1] = (ulong)puVar47;
          *unaff_x21 = (ulong)puVar46;
code_r0x00010044c4b4:
          puVar47 = *(ulong **)((long)unaff_x22 + 0x17);
          puVar46 = *(ulong **)((long)unaff_x22 + 0xf);
code_r0x00010044c4b8:
          *(ulong **)((long)unaff_x21 + 0x17) = puVar47;
          *(ulong **)((long)unaff_x21 + 0xf) = puVar46;
          uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
          puStack_2a8 = (ulong *)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_d0);
          puStack_2a8 = uStack_90;
          if (uStack_90 == unaff_x24) {
            unaff_x25 = (ulong *)((long)puVar42 + 1);
            puStack_100 = puStack_2b8;
            *param_2 = 0x1d;
            param_2[1] = (ulong)puStack_88;
            puStack_2a8 = (ulong *)0x8000000000000000;
            puStack_108 = unaff_x20;
            goto code_r0x00010044cc50;
          }
          puStack_328 = puStack_80;
          puVar33 = puStack_88;
code_r0x00010044c4ec:
          puStack_2f0 = puVar33;
        }
      }
      else {
        bVar26 = uStack_90._1_1_ == 6;
        if (bVar26) {
          if (puStack_2b0 != unaff_x24) {
            unaff_x25 = (ulong *)((long)puVar42 + 1);
            uStack_90 = (ulong *)&UNK_108cbac55;
            puStack_88 = (ulong *)0xf;
            uStack_d0 = &uStack_90;
            puStack_c8 = (ulong *)&DAT_100c7b3a0;
            puStack_248 = unaff_x27;
            puStack_230 = unaff_x25;
            puStack_108 = unaff_x20;
            puStack_100 = puStack_2b8;
            uVar29 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            bVar26 = true;
            uVar40 = 1;
            *param_2 = 0x1d;
            param_2[1] = uVar29;
            unaff_w28 = 1;
            uVar41 = 1;
            uVar31 = 1;
            unaff_x23 = (ulong *)0x1;
            goto joined_r0x00010044d39c;
          }
          puVar33 = (ulong *)(ulong)bVar32;
          puVar37 = (ulong *)0x16;
code_r0x00010044c3bc:
          bStack_270 = (byte)puVar37;
          if ((int)puVar33 == 0x16) {
            puStack_230 = (ulong *)((long)puVar42 + 1);
            puStack_100 = puStack_2b8;
            puStack_2b0 = (ulong *)0x8000000000000000;
            puStack_248 = unaff_x27;
            puStack_108 = unaff_x20;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010044d558;
          }
          uVar29 = *unaff_x22;
          puStack_2c0[1] = unaff_x22[1];
          *puStack_2c0 = uVar29;
          uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)puStack_2c0 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)puStack_2c0 + 0xf) = uVar35;
          uStack_90 = (ulong *)CONCAT71(uStack_90._1_7_,(char)puVar33);
          puStack_2b0 = (ulong *)0x8000000000000000;
          FUN_100b1671c(&uStack_d0,&uStack_90);
          if (uStack_d0 == unaff_x24) {
            unaff_x25 = (ulong *)((long)puVar42 + 1);
            bVar26 = true;
            uVar40 = 1;
            *param_2 = 0x1d;
            param_2[1] = (ulong)puStack_c8;
            unaff_w28 = 1;
            uVar41 = 1;
            uVar31 = 1;
            unaff_x23 = (ulong *)0x1;
            unaff_x26 = puStack_2c8;
            puStack_248 = unaff_x27;
            puStack_230 = unaff_x25;
            goto LAB_10044cda0;
          }
          puStack_2b8 = puStack_c8;
          puStack_f0 = puStack_b8;
          puStack_f8 = puStack_c0;
          uStack_e0 = uStack_a8;
          puStack_e8 = puStack_b0;
          uStack_d8 = uStack_a0;
          unaff_x20 = uStack_d0;
          puStack_2b0 = uStack_d0;
        }
        else {
code_r0x00010044c55c:
          bVar32 = bStack_270;
          bStack_270 = 0x16;
          if (bVar32 == 0x16) {
            puStack_230 = (ulong *)((long)puVar42 + 1);
            puStack_100 = puStack_2b8;
            puStack_248 = unaff_x27;
            puStack_108 = unaff_x20;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010044d558:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10044d55c);
            (*pcVar6)();
          }
          uVar29 = *unaff_x22;
          unaff_x21[1] = unaff_x22[1];
          *unaff_x21 = uVar29;
          uVar35 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar35;
          uStack_d0 = (ulong *)CONCAT71(uStack_d0._1_7_,bVar32);
          FUN_100e077ec(&uStack_d0);
        }
      }
      puVar37 = puVar43 + 8;
      puVar42 = (ulong *)((long)puVar42 + 1);
      unaff_x25 = puStack_2f8;
      puVar44 = puStack_278;
      puVar43 = unaff_x27;
    } while (puVar37 != puStack_278);
    puStack_100 = puStack_2b8;
    puVar33 = (ulong *)0x8000000000000000;
    puVar37 = puStack_280;
    puStack_248 = puVar44;
    puStack_230 = unaff_x25;
    puStack_108 = unaff_x20;
  case 0x68:
  case 0xaa:
  case 0xec:
    in_ZR = puVar37 == puVar33;
    unaff_x26 = puStack_2c8;
code_r0x00010044c7b8:
    if ((bool)in_ZR) {
code_r0x00010044c7bc:
      puVar33 = (ulong *)&UNK_108cb88ab;
code_r0x00010044c7c4:
      puStack_88 = (ulong *)0xd;
      uStack_d0 = &uStack_90;
      puStack_c8 = (ulong *)&DAT_100c7b3a0;
      uStack_90 = puVar33;
FUN_10044c7e0:
      pcVar27 = s_missing_field_____108ac28f7;
      param_3 = (byte *)&uStack_d0;
      unaff_x27 = puVar44;
code_r0x00010044c7ec:
      uVar29 = thunk_FUN_108856088(pcVar27,param_3);
      puStack_280 = (ulong *)0x8000000000000000;
LAB_10044c800:
      unaff_x23 = (ulong *)0x1;
      unaff_x21 = (ulong *)0x1;
      *param_2 = 0x1d;
      param_2[1] = uVar29;
code_r0x00010044c808:
      unaff_x24 = (ulong *)0x1;
      unaff_w28 = 1;
code_r0x00010044c810:
      unaff_x20 = (ulong *)0x1;
code_r0x00010044c814:
      uVar40 = (uint)unaff_x20;
      uVar41 = (uint)unaff_x24;
      uVar31 = (uint)unaff_x21;
      bVar26 = true;
LAB_10044cd70:
      if (puStack_2b0 != (ulong *)0x8000000000000000) {
joined_r0x00010044d39c:
        if (puStack_2b0 != (ulong *)0x0) {
          _free(puStack_2b8);
        }
        if (puStack_f0 != (ulong *)0x0) {
          _free(puStack_e8);
        }
      }
LAB_10044cda0:
      if ((((ulong)puStack_2a8 & 0x7fffffffffffffff) != 0) && (((ulong)unaff_x23 & 1) != 0)) {
        _free(puStack_2f0);
      }
      uVar2 = 0;
      if (((ulong)puStack_2a0 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar31;
      }
      if ((uVar2 & 1) == 0) {
        uVar31 = 0;
        if (((ulong)puStack_298 & 0x7fffffffffffffff) != 0) {
          uVar31 = uVar41;
        }
        if ((uVar31 & 1) == 0) goto LAB_10044cdd8;
LAB_10044ce50:
        _free(puStack_2e0);
        bVar32 = 0;
        if (((ulong)puStack_290 & 0x7fffffffffffffff) != 0) {
          bVar32 = unaff_w28;
        }
        if ((bVar32 & 1) != 0) goto LAB_10044ce68;
LAB_10044cde8:
        uVar31 = 0;
        if (((ulong)puStack_288 & 0x7fffffffffffffff) != 0) {
          uVar31 = uVar40;
        }
        if ((uVar31 & 1) == 0) goto LAB_10044cdf8;
LAB_10044ce80:
        _free(puStack_2d0);
        bVar1 = false;
        if (((ulong)puStack_280 & 0x7fffffffffffffff) != 0) {
          bVar1 = bVar26;
        }
        if (bVar1) goto LAB_10044ce9c;
      }
      else {
        _free(puStack_2e8);
        uVar31 = 0;
        if (((ulong)puStack_298 & 0x7fffffffffffffff) != 0) {
          uVar31 = uVar41;
        }
        if ((uVar31 & 1) != 0) goto LAB_10044ce50;
LAB_10044cdd8:
        bVar32 = 0;
        if (((ulong)puStack_290 & 0x7fffffffffffffff) != 0) {
          bVar32 = unaff_w28;
        }
        if ((bVar32 & 1) == 0) goto LAB_10044cde8;
LAB_10044ce68:
        _free(puStack_2d8);
        uVar31 = 0;
        if (((ulong)puStack_288 & 0x7fffffffffffffff) != 0) {
          uVar31 = uVar40;
        }
        if ((uVar31 & 1) != 0) goto LAB_10044ce80;
LAB_10044cdf8:
        bVar1 = false;
        if (((ulong)puStack_280 & 0x7fffffffffffffff) != 0) {
          bVar1 = bVar26;
        }
        if (bVar1) {
LAB_10044ce9c:
          _free(unaff_x26);
          uVar29 = *param_2;
          goto joined_r0x00010044ceac;
        }
      }
      uVar29 = *param_2;
    }
    else {
code_r0x00010044c81c:
      in_ZR = puStack_288 == puVar33;
code_r0x00010044c824:
      unaff_x20 = (ulong *)(ulong)(byte)in_ZR;
      if ((bool)in_ZR) {
code_r0x00010044c82c:
        puVar34 = (ulong *)&UNK_108cb8e87;
        puVar36 = (ulong *)0x15;
code_r0x00010044c838:
        puVar33 = &uStack_90;
        puVar37 = (ulong *)&UNK_100c7b000;
        uStack_90 = puVar34;
        puStack_88 = puVar36;
code_r0x00010044c844:
        puVar37 = puVar37 + 0x74;
code_r0x00010044c848:
        uStack_d0 = puVar33;
        puStack_c8 = puVar37;
FUN_10044c84c:
        puVar28 = (ulong *)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010044c850:
        puVar28 = (ulong *)((long)puVar28 + 0x8f7);
code_r0x00010044c854:
        param_3 = (byte *)&uStack_d0;
code_r0x00010044c858:
        puVar28 = (ulong *)thunk_FUN_108856088(puVar28,param_3);
code_r0x00010044c85c:
        *param_2 = 0x1d;
        param_2[1] = (ulong)puVar28;
code_r0x00010044c864:
        unaff_x23 = (ulong *)0x1;
code_r0x00010044c868:
        unaff_x21 = (ulong *)0x1;
code_r0x00010044c86c:
        unaff_x24 = (ulong *)0x1;
code_r0x00010044c870:
        uVar40 = (uint)unaff_x20;
        uVar41 = (uint)unaff_x24;
        uVar31 = (uint)unaff_x21;
        unaff_w28 = 1;
        unaff_x27 = puVar44;
LAB_10044cd54:
        if (puStack_280 == (ulong *)0x0) {
          puStack_280 = (ulong *)0x0;
        }
        else {
          _free(unaff_x26);
        }
        bVar26 = false;
        goto LAB_10044cd70;
      }
code_r0x00010044c878:
      puVar37 = puStack_290;
code_r0x00010044c87c:
      in_ZR = puVar37 == puVar33;
      unaff_w28 = in_ZR;
code_r0x00010044c884:
      if ((bool)in_ZR) {
code_r0x00010044c888:
        puVar33 = (ulong *)&UNK_108ca2000;
code_r0x00010044c88c:
        puVar33 = (ulong *)((long)puVar33 + 0x143);
code_r0x00010044c890:
        puVar37 = (ulong *)0x9;
code_r0x00010044c894:
        uStack_90 = puVar33;
        puStack_88 = puVar37;
code_r0x00010044c898:
        puVar33 = &uStack_90;
code_r0x00010044c89c:
        puVar37 = (ulong *)&UNK_100c7b000;
code_r0x00010044c8a0:
        puVar37 = puVar37 + 0x74;
code_r0x00010044c8a4:
        uStack_d0 = puVar33;
        puStack_c8 = puVar37;
FUN_10044c8a8:
        puVar28 = (ulong *)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010044c8ac:
        puVar28 = (ulong *)((long)puVar28 + 0x8f7);
code_r0x00010044c8b0:
        puVar28 = (ulong *)thunk_FUN_108856088(puVar28,&uStack_d0);
code_r0x00010044c8b8:
        puVar33 = (ulong *)0x1d;
code_r0x00010044c8bc:
        *param_2 = (ulong)puVar33;
        param_2[1] = (ulong)puVar28;
code_r0x00010044c8c0:
        unaff_x23 = (ulong *)0x1;
code_r0x00010044c8c4:
        unaff_x21 = (ulong *)0x1;
code_r0x00010044c8c8:
        unaff_x24 = (ulong *)0x1;
code_r0x00010044c8cc:
        uVar40 = (uint)unaff_x20;
        uVar41 = (uint)unaff_x24;
        uVar31 = (uint)unaff_x21;
        unaff_x27 = puVar44;
LAB_10044cd44:
        if (puStack_288 != (ulong *)0x0) {
          _free(puStack_2d0);
        }
        goto LAB_10044cd54;
      }
      in_ZR = puStack_298 == puVar33;
      unaff_x24 = (ulong *)(ulong)(byte)in_ZR;
code_r0x00010044ca20:
      uVar40 = (uint)unaff_x20;
      uVar41 = (uint)unaff_x24;
      unaff_x27 = puVar44;
      if ((bool)in_ZR) {
        uStack_90 = (ulong *)&UNK_108cb88bf;
        puStack_88 = (ulong *)0xd;
        uStack_d0 = &uStack_90;
        puStack_c8 = (ulong *)&DAT_100c7b3a0;
        uVar29 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
        *param_2 = 0x1d;
        param_2[1] = uVar29;
        unaff_x23 = (ulong *)0x1;
        uVar31 = 1;
LAB_10044cd34:
        if (puStack_290 != (ulong *)0x0) {
          _free(puStack_2d8);
        }
        goto LAB_10044cd44;
      }
      uVar31 = (uint)(puStack_2a0 == puVar33);
      if (puStack_2a0 == puVar33) {
        uStack_90 = (ulong *)&UNK_108ca1efe;
        puStack_88 = (ulong *)0x5;
        uStack_d0 = &uStack_90;
        puStack_c8 = (ulong *)&DAT_100c7b3a0;
        uVar29 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
        *param_2 = 0x1d;
        param_2[1] = uVar29;
        unaff_x23 = (ulong *)0x1;
LAB_10044cd24:
        if (puStack_298 != (ulong *)0x0) {
          _free(puStack_2e0);
        }
        goto LAB_10044cd34;
      }
      unaff_x23 = (ulong *)(ulong)(puStack_2a8 == puVar33);
      if (puStack_2a8 == puVar33) {
        uStack_90 = (ulong *)&UNK_108cb88cc;
        puStack_88 = (ulong *)0xd;
        uStack_d0 = &uStack_90;
        puStack_c8 = (ulong *)&DAT_100c7b3a0;
        uVar29 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
        *param_2 = 0x1d;
        param_2[1] = uVar29;
LAB_10044cd14:
        if (puStack_2a0 != (ulong *)0x0) {
          _free(puStack_2e8);
        }
        goto LAB_10044cd24;
      }
      if (puStack_2b0 == puVar33) {
        uStack_90 = (ulong *)&UNK_108cbac55;
        puStack_88 = (ulong *)0xf;
        uStack_d0 = &uStack_90;
        puStack_c8 = (ulong *)&DAT_100c7b3a0;
        uVar29 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
        *param_2 = 0x1d;
        param_2[1] = uVar29;
        if (puStack_2a8 != (ulong *)0x0) {
          _free(puStack_2f0);
        }
        goto LAB_10044cd14;
      }
      param_2[0x16] = (ulong)puStack_f0;
      param_2[0x15] = (ulong)puStack_f8;
      param_2[0x18] = uStack_e0;
      param_2[0x17] = (ulong)puStack_e8;
      param_2[0x19] = uStack_d8;
      *param_2 = 0x16;
      param_2[1] = (ulong)puStack_280;
      param_2[2] = (ulong)unaff_x26;
      param_2[3] = (ulong)puStack_300;
      param_2[4] = (ulong)puStack_288;
      param_2[5] = (ulong)puStack_2d0;
      param_2[6] = (ulong)puStack_308;
      param_2[7] = (ulong)puStack_290;
      param_2[8] = (ulong)puStack_2d8;
      param_2[9] = (ulong)puStack_310;
      param_2[10] = (ulong)puStack_298;
      param_2[0xb] = (ulong)puStack_2e0;
      param_2[0xc] = (ulong)puStack_318;
      param_2[0xd] = (ulong)puStack_2a0;
      param_2[0xe] = (ulong)puStack_2e8;
      param_2[0xf] = (ulong)puStack_320;
      param_2[0x10] = (ulong)puStack_2a8;
      param_2[0x11] = (ulong)puStack_2f0;
      param_2[0x12] = (ulong)puStack_328;
      param_2[0x13] = (ulong)puStack_2b0;
      param_2[0x14] = (ulong)puStack_2b8;
      uVar29 = *param_2;
    }
joined_r0x00010044ceac:
    if (uVar29 == 0x1d) {
      FUN_100d34830(&puStack_250);
      if (bStack_270 == 0x16) {
        return;
      }
      FUN_100e077ec(&bStack_270);
      return;
    }
    _memcpy(&uStack_220,param_2,0x118);
    FUN_100d34830(&puStack_250);
    if (puStack_278 == unaff_x27) {
      uVar29 = 0;
    }
    else {
      uStack_d0 = unaff_x25;
      uVar29 = thunk_FUN_1087e422c((byte *)(((ulong)((long)puStack_278 - (long)unaff_x27) >> 6) +
                                           (long)unaff_x25),&uStack_d0,&UNK_10b23a190);
    }
    if (bStack_270 != 0x16) {
      FUN_100e077ec(&bStack_270);
    }
    if (uVar29 == 0) {
      _memcpy(param_2,&uStack_220,0x118);
      return;
    }
    param_2[1] = uVar29;
    goto code_r0x00010044cef8;
  case 0x16:
    goto code_r0x00010044c6dc;
  case 0x17:
    goto code_r0x00010044c6ec;
  case 0x18:
    goto code_r0x00010044c6b4;
  case 0x19:
    goto code_r0x00010044c6cc;
  case 0x1a:
    goto code_r0x00010044c678;
  case 0x1b:
    goto code_r0x00010044c6fc;
  case 0x1c:
    goto code_r0x00010044c714;
  case 0x1d:
    goto code_r0x00010044c6d4;
  case 0x1e:
    goto code_r0x00010044c72c;
  case 0x1f:
    goto code_r0x00010044c6a8;
  case 0x20:
    goto code_r0x00010044c71c;
  case 0x22:
    goto code_r0x00010044c680;
  case 0x23:
code_r0x00010044c704:
    puStack_290 = (ulong *)0x8000000000000000;
    puStack_288 = (ulong *)0x8000000000000000;
    puStack_108 = unaff_x24;
code_r0x00010044c714:
    puVar39 = (ulong *)0x8000000000000000;
    puVar33 = (ulong *)0x8000000000000000;
    unaff_x25 = puVar42;
    puVar44 = unaff_x27;
code_r0x00010044c71c:
    puStack_2a8 = (ulong *)0x8000000000000000;
    puStack_2b0 = puVar37;
    puStack_2a0 = puVar33;
    puStack_298 = puVar39;
    goto code_r0x00010044c7bc;
  case 0x24:
    goto code_r0x00010044c628;
  case 0x25:
    goto code_r0x00010044c6bc;
  case 0x28:
    goto code_r0x00010044c778;
  case 0x29:
    goto code_r0x00010044c378;
  case 0x2a:
    goto code_r0x00010044c3bc;
  case 0x30:
  case 0xcf:
    goto code_r0x00010044c91c;
  case 0x33:
  case 0xd3:
    goto code_r0x00010044c978;
  case 0x34:
    goto code_r0x00010044c9d0;
  case 0x35:
  case 0x42:
    goto code_r0x00010044c94c;
  case 0x36:
    goto code_r0x00010044c9c0;
  case 0x37:
  case 0xb3:
  case 0xd2:
    goto code_r0x00010044c8f4;
  case 0x38:
  case 0x44:
  case 0xb5:
    goto code_r0x00010044c924;
  case 0x39:
    goto code_r0x00010044c9a8;
  case 0x3a:
    goto code_r0x00010044c8cc;
  case 0x3b:
  case 199:
  case 0xfb:
    goto code_r0x00010044c960;
  case 0x3c:
  case 0xd1:
    goto code_r0x00010044c8c4;
  case 0x3e:
    goto code_r0x00010044ca20;
  case 0x3f:
    goto code_r0x00010044c4b0;
  case 0x40:
    goto code_r0x00010044c4f4;
  case 0x45:
  case 0xb6:
    goto code_r0x00010044c93c;
  case 0x46:
    goto code_r0x00010044c8e8;
  case 0x49:
  case 0xba:
    goto code_r0x00010044c944;
  case 0x4b:
  case 0x80:
  case 0x8a:
    goto code_r0x00010044c918;
  case 0x4d:
  case 0x93:
    goto code_r0x00010044c8c0;
  case 0x4e:
  case 0x85:
    goto code_r0x00010044c8f0;
  case 0x4f:
    goto code_r0x00010044c974;
  case 0x50:
  case 0x73:
    goto code_r0x00010044c898;
  case 0x52:
    goto code_r0x00010044c890;
  case 0x54:
    break;
  case 0x55:
    goto code_r0x00010044c55c;
  case 0x56:
code_r0x00010044c5a0:
    puStack_88 = (ulong *)thunk_FUN_108855b04(puVar28,param_3,param_4);
    uStack_90 = (ulong *)CONCAT71(uStack_90._1_7_,1);
code_r0x00010044c5b8:
    unaff_x25 = (ulong *)((long)puVar42 + 1);
    puStack_100 = puStack_2b8;
    unaff_x23 = (ulong *)0x1;
    uVar31 = 1;
    *param_2 = 0x1d;
    param_2[1] = (ulong)puStack_88;
    uVar41 = 1;
    unaff_w28 = 1;
    uVar40 = 1;
    bVar26 = true;
    unaff_x26 = puStack_2c8;
    puStack_248 = unaff_x27;
    puStack_230 = unaff_x25;
    puStack_108 = unaff_x20;
    goto LAB_10044cd70;
  case 0x58:
  case 0x9a:
  case 0xdc:
    goto code_r0x00010044c86c;
  case 0x59:
  case 0x88:
  case 0x9b:
  case 0xdd:
    goto code_r0x00010044c87c;
  case 0x5a:
  case 0x77:
  case 0x9c:
  case 0xde:
    goto code_r0x00010044c844;
  case 0x5b:
  case 0x9d:
  case 0xdf:
    goto code_r0x00010044c85c;
  case 0x5c:
  case 0x9e:
  case 0xe0:
    goto code_r0x00010044c808;
  case 0x5d:
  case 0x9f:
  case 0xe1:
    goto code_r0x00010044c88c;
  case 0x5e:
  case 0xa0:
  case 0xe2:
    goto code_r0x00010044c8a4;
  case 0x5f:
  case 0xa1:
  case 0xe3:
    goto code_r0x00010044c864;
  case 0x60:
  case 0xa2:
  case 0xe4:
    goto code_r0x00010044c8bc;
  case 0x61:
  case 0xa3:
  case 0xe5:
    goto code_r0x00010044c838;
  case 0x62:
  case 0x8d:
  case 0xa4:
  case 0xe6:
    goto code_r0x00010044c8ac;
  case 99:
  case 0xa5:
  case 0xe7:
    goto FUN_10044c7e0;
  case 100:
  case 0xa6:
  case 0xe8:
    goto code_r0x00010044c810;
  case 0x65:
  case 0xa7:
  case 0xd6:
  case 0xe9:
    goto code_r0x00010044c894;
  case 0x66:
  case 0xa8:
  case 0xea:
    goto code_r0x00010044c7b8;
  case 0x67:
  case 0xa9:
  case 0xeb:
    goto FUN_10044c84c;
  case 0x6a:
  case 0xac:
  case 0xee:
    goto code_r0x00010044c90c;
  case 0x6b:
  case 0xad:
  case 0xef:
    goto code_r0x00010044c474;
  case 0x6c:
  case 0xae:
  case 0xf0:
    goto code_r0x00010044c4b8;
  case 0x6e:
  case 0xbb:
    goto code_r0x00010044c878;
  case 0x6f:
    goto code_r0x00010044c888;
  case 0x70:
  case 0xbe:
    goto code_r0x00010044c850;
  case 0x71:
    goto code_r0x00010044c868;
  case 0x72:
    goto code_r0x00010044c814;
  case 0x74:
    goto code_r0x00010044c8b0;
  case 0x75:
    goto code_r0x00010044c870;
  case 0x76:
    goto code_r0x00010044c8c8;
  case 0x78:
  case 0x86:
    goto code_r0x00010044c8b8;
  case 0x79:
    goto code_r0x00010044c7ec;
  case 0x7a:
    goto code_r0x00010044c81c;
  case 0x7b:
  case 0xb4:
    goto code_r0x00010044c8a0;
  case 0x7c:
    goto code_r0x00010044c7c4;
  case 0x7d:
    goto code_r0x00010044c858;
  case 0x7e:
    goto code_r0x00010044c7bc;
  case 0x81:
    goto code_r0x00010044c470;
  case 0x82:
    goto code_r0x00010044c4b4;
  case 0x84:
    goto code_r0x00010044c8e0;
  case 0x8e:
    goto code_r0x00010044c920;
  case 0x8f:
    goto code_r0x00010044c854;
  case 0x90:
    goto code_r0x00010044c884;
  case 0x91:
  case 0xfd:
    goto code_r0x00010044c908;
  case 0x92:
    goto code_r0x00010044c82c;
  case 0x94:
    goto code_r0x00010044c824;
  case 0x97:
    goto code_r0x00010044c4fc;
  case 0x98:
    goto code_r0x00010044c540;
  case 0xb1:
    goto code_r0x00010044c914;
  case 0xb7:
    goto code_r0x00010044c8fc;
  case 0xb8:
    goto code_r0x00010044c954;
  case 0xbc:
    goto FUN_10044c8a8;
  case 0xbf:
    goto code_r0x00010044c8e4;
  case 0xc0:
    goto code_r0x00010044c848;
  case 0xc2:
  case 0xf3:
    goto code_r0x00010044c9a4;
  case 0xc3:
  case 0xd9:
    goto code_r0x00010044c4a8;
  case 0xc4:
  case 0xda:
    goto code_r0x00010044c4ec;
  case 0xc6:
    goto code_r0x00010044c950;
  case 0xc9:
    goto code_r0x00010044c940;
  case 0xca:
    goto code_r0x00010044c8ec;
  case 0xcd:
    goto code_r0x00010044c948;
  case 0xd4:
    goto code_r0x00010044c89c;
  case 0xd8:
    goto code_r0x00010044c9f0;
  case 0xf2:
    goto code_r0x00010044c994;
  case 0xfc:
    goto code_r0x00010044c9d4;
  case 0xff:
    goto code_r0x00010044c9bc;
  }
  uStack_220 = CONCAT71(uStack_220._1_7_,bVar32);
code_r0x00010044c9ec:
  param_4 = &UNK_10b21b000;
code_r0x00010044c9f0:
  uVar29 = FUN_107c05dcc(&uStack_220,abStack_69,param_4 + 0x870);
  *param_2 = 0x1d;
  param_2[1] = uVar29;
  return;
}

