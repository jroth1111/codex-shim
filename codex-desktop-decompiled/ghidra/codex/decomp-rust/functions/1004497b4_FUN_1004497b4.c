
/* WARNING: Type propagation algorithm not settling */

void FUN_1004497b4(undefined1 param_1 [16],undefined1 param_2 [16],byte *param_3,byte *param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  byte *pbVar9;
  code *pcVar10;
  byte **ppbVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  byte **ppbVar19;
  byte **ppbVar21;
  byte **ppbVar22;
  byte **ppbVar23;
  byte **ppbVar24;
  byte in_ZR;
  long lVar26;
  long lVar27;
  uint uVar28;
  byte bVar29;
  byte *pbVar30;
  byte *pbVar31;
  undefined8 uVar32;
  byte *pbVar33;
  undefined *puVar34;
  byte *pbVar35;
  byte *unaff_x19;
  byte *unaff_x20;
  long *plVar36;
  byte *unaff_x21;
  byte *pbVar37;
  byte *unaff_x22;
  byte *pbVar38;
  long *unaff_x23;
  byte *unaff_x24;
  long unaff_x25;
  byte *pbVar39;
  byte *pbVar40;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar41;
  undefined8 unaff_x30;
  byte *pbVar42;
  byte *pbVar43;
  long lVar44;
  byte abStack_310 [80];
  byte *pbStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  long lStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  long lStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  long lStack_220;
  byte *pbStack_218;
  long lStack_210;
  long lStack_208;
  byte bStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  byte *pbStack_90;
  long lStack_88;
  undefined1 auStack_71 [17];
  byte **ppbVar20;
  byte **ppbVar25;
  
  lVar44 = param_2._8_8_;
  lVar26 = param_2._0_8_;
  pbVar43 = param_1._8_8_;
  pbVar42 = param_1._0_8_;
  puVar41 = &stack0xfffffffffffffff0;
  ppbVar14 = &pbStack_2c0;
  ppbVar19 = &pbStack_2c0;
  ppbVar24 = &pbStack_2c0;
  pbVar39 = &bStack_108;
  bVar29 = *param_4;
  pbVar30 = (byte *)(ulong)bVar29;
  pbVar33 = &UNK_108c98ec0;
  pbVar35 = (byte *)(ulong)*(ushort *)(&UNK_108c98ec0 + (long)pbVar30 * 2);
  puVar34 = &UNK_1004497f8 + (long)pbVar35 * 4;
  ppbVar21 = &pbStack_2c0;
  ppbVar22 = &pbStack_2c0;
  ppbVar23 = &pbStack_2c0;
  ppbVar25 = &pbStack_2c0;
  ppbVar15 = &pbStack_2c0;
  ppbVar16 = &pbStack_2c0;
  ppbVar17 = &pbStack_2c0;
  ppbVar18 = &pbStack_2c0;
  ppbVar20 = &pbStack_2c0;
  ppbVar11 = &pbStack_2c0;
  ppbVar12 = &pbStack_2c0;
  ppbVar13 = &pbStack_2c0;
  pbVar40 = param_3;
  pbVar31 = pbVar30;
  pbVar37 = unaff_x21;
  pbVar38 = unaff_x22;
  pbVar9 = pbStack_248;
  switch(bVar29) {
  case 0:
    bVar29 = param_4[1];
  case 0x96:
    lStack_220 = (ulong)CONCAT61(lStack_220._2_6_,bVar29) << 8;
    goto code_r0x00010044a1e4;
  case 1:
    pbVar30 = (byte *)(ulong)param_4[1];
    goto code_r0x00010044a198;
  case 2:
    pbVar30 = (byte *)(ulong)*(ushort *)(param_4 + 2);
  case 0x78:
code_r0x00010044a198:
    bVar29 = 1;
    pbStack_218 = pbVar30;
    break;
  case 3:
    pbVar30 = (byte *)(ulong)*(uint *)(param_4 + 4);
    goto code_r0x00010044a198;
  case 4:
  case 0x6e:
    pbVar30 = *(byte **)(param_4 + 8);
  case 0x49:
  case 0x8a:
    goto code_r0x00010044a198;
  case 5:
    pbVar30 = (byte *)(long)(char)param_4[1];
    goto code_r0x00010044a1d8;
  case 6:
    pbVar30 = (byte *)(long)*(short *)(param_4 + 2);
  case 0x80:
code_r0x00010044a1d8:
    bVar29 = 2;
    pbStack_218 = pbVar30;
    break;
  case 7:
  case 0x4a:
    pbVar30 = (byte *)(long)*(int *)(param_4 + 4);
    goto code_r0x00010044a1d8;
  case 8:
    pbVar30 = *(byte **)(param_4 + 8);
    goto code_r0x00010044a1d8;
  case 9:
    pbVar42 = (byte *)(ulong)*(uint *)(param_4 + 4);
  case 0x4f:
    pbVar42 = (byte *)(double)SUB84(pbVar42,0);
code_r0x00010044a158:
code_r0x00010044a1c8:
    bVar29 = 3;
    pbStack_218 = pbVar42;
    break;
  case 10:
    pbVar42 = *(byte **)(param_4 + 8);
    goto code_r0x00010044a1c8;
  case 0xb:
  case 0x4b:
  case 0x70:
    param_4 = (byte *)(ulong)*(uint *)(param_4 + 4);
  case 0x85:
code_r0x00010044a100:
    ppbVar15 = (byte **)&stack0xffffffffffffffa0;
code_r0x00010044a104:
    puVar41 = *(undefined1 **)((long)ppbVar15 + 0x50);
    unaff_x30 = *(undefined8 *)((long)ppbVar15 + 0x58);
    unaff_x20 = *(byte **)((long)ppbVar15 + 0x40);
    unaff_x19 = *(byte **)((long)ppbVar15 + 0x48);
    ppbVar16 = ppbVar15;
code_r0x00010044a10c:
    ppbVar17 = ppbVar16;
code_r0x00010044a110:
    ppbVar18 = ppbVar17;
code_r0x00010044a114:
    ppbVar20 = ppbVar18;
code_r0x00010044a118:
    ppbVar19 = (byte **)((long)ppbVar20 + 0x60);
code_r0x00010044a11c:
    *(byte **)((long)ppbVar19 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar19 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar19 + -0x10) = puVar41;
    *(undefined8 *)((long)ppbVar19 + -8) = unaff_x30;
    *(undefined4 *)((long)ppbVar19 + -0x44) = 0;
    uVar28 = (uint)param_4;
    if (uVar28 < 0x80) {
      *(byte *)((long)ppbVar19 + -0x44) = (byte)param_4;
      uVar32 = 1;
    }
    else {
      bVar29 = (byte)param_4 & 0x3f | 0x80;
      if (uVar28 < 0x800) {
        *(byte *)((long)ppbVar19 + -0x44) = (byte)(uVar28 >> 6) | 0xc0;
        *(byte *)((long)ppbVar19 + -0x43) = bVar29;
        uVar32 = 2;
      }
      else {
        bVar2 = (byte)(uVar28 >> 6) & 0x3f | 0x80;
        if (uVar28 < 0x10000) {
          *(byte *)((long)ppbVar19 + -0x44) = (byte)(uVar28 >> 0xc) | 0xe0;
          *(byte *)((long)ppbVar19 + -0x43) = bVar2;
          *(byte *)((long)ppbVar19 + -0x42) = bVar29;
          uVar32 = 3;
        }
        else {
          *(byte *)((long)ppbVar19 + -0x44) = (byte)(uVar28 >> 0x12) | 0xf0;
          *(byte *)((long)ppbVar19 + -0x43) = (byte)(uVar28 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)ppbVar19 + -0x42) = bVar2;
          *(byte *)((long)ppbVar19 + -0x41) = bVar29;
          uVar32 = 4;
        }
      }
    }
    *(undefined1 **)((long)ppbVar19 + -0x38) = (undefined1 *)((long)ppbVar19 + -0x44);
    *(undefined8 *)((long)ppbVar19 + -0x30) = uVar32;
    *(undefined1 *)((long)ppbVar19 + -0x40) = 5;
    lVar26 = func_0x000108a4a50c((undefined1 *)((long)ppbVar19 + -0x40),
                                 (undefined1 *)((long)ppbVar19 + -0x21),&UNK_10b219f10);
    param_3[0] = 0x1d;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(long *)(param_3 + 8) = lVar26;
    return;
  case 0xc:
    param_4 = param_4 + 8;
  case 0x42:
  case 0x8e:
code_r0x00010044a130:
    ppbVar21 = (byte **)&stack0xffffffffffffffa0;
    puVar41 = unaff_x29;
code_r0x00010044a13c:
    unaff_x22 = *(byte **)((long)ppbVar21 + 0x30);
    unaff_x21 = *(byte **)((long)ppbVar21 + 0x38);
    ppbVar22 = ppbVar21;
code_r0x00010044a140:
    ppbVar23 = ppbVar22;
code_r0x00010044a144:
    ppbVar25 = ppbVar23;
code_r0x00010044a148:
    ppbVar24 = (byte **)((long)ppbVar25 + 0x60);
code_r0x00010044a14c:
    *(byte **)((long)ppbVar24 + -0x30) = unaff_x22;
    *(byte **)((long)ppbVar24 + -0x28) = unaff_x21;
    *(byte **)((long)ppbVar24 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar24 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar24 + -0x10) = puVar41;
    *(undefined8 *)((long)ppbVar24 + -8) = unaff_x30;
    uVar32 = *(undefined8 *)(param_4 + 8);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)((long)ppbVar24 + -0x48) = uVar32;
    *(undefined8 *)((long)ppbVar24 + -0x40) = uVar1;
    *(undefined1 *)((long)ppbVar24 + -0x50) = 5;
    lVar26 = func_0x000108a4a50c((undefined1 *)((long)ppbVar24 + -0x50),
                                 (undefined1 *)((long)ppbVar24 + -0x31),&UNK_10b219f10);
    param_3[0] = 0x1d;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(long *)(param_3 + 8) = lVar26;
    if (*(long *)param_4 != 0) {
      _free(uVar32);
    }
    return;
  case 0xd:
  case 0x54:
    pbStack_218 = *(byte **)(param_4 + 8);
    lStack_210 = *(long *)(param_4 + 0x10);
    bVar29 = 5;
    break;
  case 0xe:
  case 0x4e:
  case 0xce:
    param_4 = param_4 + 8;
    ppbVar11 = (byte **)&stack0xffffffffffffffa0;
  case 0x32:
  case 0x87:
  case 0xf8:
    puVar41 = *(undefined1 **)((long)ppbVar11 + 0x50);
    unaff_x30 = *(undefined8 *)((long)ppbVar11 + 0x58);
    unaff_x20 = *(byte **)((long)ppbVar11 + 0x40);
    unaff_x19 = *(byte **)((long)ppbVar11 + 0x48);
    ppbVar12 = ppbVar11;
code_r0x00010044a0e4:
    unaff_x22 = *(byte **)((long)ppbVar12 + 0x30);
    unaff_x21 = *(byte **)((long)ppbVar12 + 0x38);
    ppbVar13 = ppbVar12;
code_r0x00010044a0ec:
    ppbVar14 = (byte **)((long)ppbVar13 + 0x60);
code_r0x00010044a0f4:
    *(byte **)((long)ppbVar14 + -0x30) = unaff_x22;
    *(byte **)((long)ppbVar14 + -0x28) = unaff_x21;
    *(byte **)((long)ppbVar14 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar14 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar14 + -0x10) = puVar41;
    *(undefined8 *)((long)ppbVar14 + -8) = unaff_x30;
    uVar32 = *(undefined8 *)(param_4 + 8);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)((long)ppbVar14 + -0x48) = uVar32;
    *(undefined8 *)((long)ppbVar14 + -0x40) = uVar1;
    *(undefined1 *)((long)ppbVar14 + -0x50) = 6;
    lVar26 = func_0x000108a4a50c((undefined1 *)((long)ppbVar14 + -0x50),
                                 (undefined1 *)((long)ppbVar14 + -0x31),&UNK_10b219f10);
    param_3[0] = 0x1d;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(long *)(param_3 + 8) = lVar26;
    if (*(long *)param_4 != 0) {
      _free(uVar32);
    }
    return;
  case 0xf:
  case 0x48:
    pbStack_218 = *(byte **)(param_4 + 8);
    lStack_210 = *(long *)(param_4 + 0x10);
  case 0x4c:
    bVar29 = 6;
code_r0x00010044a170:
    break;
  case 0x10:
  case 0x46:
    bVar29 = 8;
  case 0x39:
  case 0x93:
  case 0xff:
    break;
  default:
    plVar36 = *(long **)(param_4 + 8);
    pbStack_218 = (byte *)plVar36[1];
    lStack_220 = *plVar36;
    lStack_208 = plVar36[3];
    lStack_210 = plVar36[2];
    thunk_FUN_1087fe600(param_3,&lStack_220);
    goto code_r0x000100449d6c;
  case 0x12:
    bVar29 = 7;
    break;
  case 0x13:
    plVar36 = *(long **)(param_4 + 8);
    pbStack_218 = (byte *)plVar36[1];
    lStack_220 = *plVar36;
    lStack_208 = plVar36[3];
    lStack_210 = plVar36[2];
    thunk_FUN_1088275c0(param_3,&lStack_220);
code_r0x000100449d6c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar36);
    return;
  case 0x14:
    unaff_x24 = *(byte **)(param_4 + 8);
    unaff_x20 = *(byte **)(param_4 + 0x10);
    unaff_x28 = *(byte **)(param_4 + 0x18);
  case 0x55:
    unaff_x19 = unaff_x20 + (long)unaff_x28 * 0x20;
    lStack_b0 = 0;
    unaff_x21 = unaff_x20;
    uStack_d0 = unaff_x20;
    pbStack_c8 = unaff_x20;
    pbStack_c0 = unaff_x24;
    pbStack_b8 = unaff_x19;
    if (unaff_x28 == (byte *)0x0) {
code_r0x000100449dc4:
      param_4 = &UNK_10b22e000;
code_r0x000100449dc8:
      pbVar40 = (byte *)thunk_FUN_1087e422c(0,param_4 + 0xd28,&UNK_10b20a590);
code_r0x000100449ddc:
      unaff_x22 = pbVar40;
code_r0x000100449de0:
      param_3[0] = 0x1d;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      *(byte **)(param_3 + 8) = unaff_x22;
    }
    else {
      unaff_x21 = unaff_x20 + 0x20;
      bVar29 = *unaff_x20;
      in_ZR = bVar29 == 0x16;
      pbStack_c8 = unaff_x21;
code_r0x000100449dc0:
      if ((bool)in_ZR) goto code_r0x000100449dc4;
      uStack_267 = (undefined7)*(undefined8 *)(unaff_x20 + 9);
      uStack_26f = (undefined7)*(undefined8 *)(unaff_x20 + 1);
      uStack_268 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 1) >> 0x38);
      lStack_258 = *(long *)(unaff_x20 + 0x18);
      uStack_260 = (undefined1)*(long *)(unaff_x20 + 0x10);
      uStack_25f = (undefined7)((ulong)*(long *)(unaff_x20 + 0x10) >> 8);
code_r0x000100449e48:
      bStack_270 = bVar29;
      lStack_b0 = 1;
code_r0x000100449e54:
      pbVar40 = &bStack_108;
      param_4 = &bStack_270;
code_r0x000100449e5c:
      FUN_1004b62d4(pbVar40,param_4);
      unaff_x25 = CONCAT71(uStack_107,bStack_108);
      unaff_x22 = (byte *)CONCAT71(uStack_ff,uStack_100);
      in_ZR = unaff_x25 == -0x8000000000000000;
code_r0x000100449e6c:
      if ((bool)in_ZR) goto code_r0x000100449de0;
      in_ZR = unaff_x28 == (byte *)0x1;
code_r0x000100449e74:
      if ((bool)in_ZR) {
code_r0x000100449e90:
        param_4 = &UNK_10b22ed28;
        param_5 = &UNK_10b20a000;
code_r0x000100449e9c:
        param_5 = param_5 + 0x590;
        pbVar40 = (byte *)0x1;
code_r0x000100449ea4:
        lVar26 = thunk_FUN_1087e422c(pbVar40,param_4,param_5);
code_r0x000100449eac:
        param_3[0] = 0x1d;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        *(long *)(param_3 + 8) = lVar26;
      }
      else {
        pbVar33 = (byte *)CONCAT71(uStack_f7,uStack_f8);
code_r0x000100449e7c:
        unaff_x21 = unaff_x20 + 0x40;
        bVar29 = unaff_x20[0x20];
        in_ZR = bVar29 == 0x16;
        pbStack_c8 = unaff_x21;
code_r0x000100449e8c:
        if ((bool)in_ZR) goto code_r0x000100449e90;
        uStack_267 = (undefined7)*(undefined8 *)(unaff_x20 + 0x29);
        uStack_26f = (undefined7)*(undefined8 *)(unaff_x20 + 0x21);
        uStack_268 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x21) >> 0x38);
        lStack_258 = *(long *)(unaff_x20 + 0x38);
        uStack_260 = (undefined1)*(long *)(unaff_x20 + 0x30);
        uStack_25f = (undefined7)((ulong)*(long *)(unaff_x20 + 0x30) >> 8);
        lStack_b0 = 2;
        pbStack_278 = pbVar33;
        bStack_270 = bVar29;
        FUN_1004b62d4(&bStack_108,&bStack_270);
        lVar44 = CONCAT71(uStack_107,bStack_108);
        lVar26 = CONCAT71(uStack_ff,uStack_100);
        pbStack_288 = param_3;
        if (lVar44 == -0x8000000000000000) goto code_r0x000100449eac;
        if (unaff_x28 == (byte *)0x2) {
code_r0x00010044a394:
          lVar27 = thunk_FUN_1087e422c(2,&UNK_10b22ed28,&UNK_10b20a590);
        }
        else {
          lVar3 = CONCAT71(uStack_f7,uStack_f8);
          unaff_x21 = unaff_x20 + 0x60;
          pbStack_c8 = unaff_x21;
          if (unaff_x20[0x40] == 0x16) goto code_r0x00010044a394;
          uStack_ff = (undefined7)*(undefined8 *)(unaff_x20 + 0x49);
          uStack_107 = (undefined7)*(undefined8 *)(unaff_x20 + 0x41);
          uStack_100 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x41) >> 0x38);
          lStack_f0 = *(long *)(unaff_x20 + 0x58);
          uStack_f8 = (undefined1)*(long *)(unaff_x20 + 0x50);
          uStack_f7 = (undefined7)((ulong)*(long *)(unaff_x20 + 0x50) >> 8);
          lStack_b0 = 3;
          bStack_108 = unaff_x20[0x40];
          FUN_100b1671c(&bStack_270,&bStack_108);
          pbVar30 = pbStack_288;
          lVar27 = CONCAT71(uStack_267,uStack_268);
          if (CONCAT71(uStack_26f,bStack_270) != -0x8000000000000000) {
            *(long *)(pbStack_288 + 0x50) = lStack_258;
            *(long *)(pbStack_288 + 0x48) = CONCAT71(uStack_25f,uStack_260);
            *(byte **)(pbStack_288 + 0x60) = pbStack_248;
            *(byte **)(pbStack_288 + 0x58) = pbStack_250;
            *(long *)(pbStack_288 + 0x68) = lStack_240;
            pbStack_288[0] = 0x17;
            pbStack_288[1] = 0;
            pbStack_288[2] = 0;
            pbStack_288[3] = 0;
            pbStack_288[4] = 0;
            pbStack_288[5] = 0;
            pbStack_288[6] = 0;
            pbStack_288[7] = 0;
            *(long *)(pbStack_288 + 8) = unaff_x25;
            *(byte **)(pbStack_288 + 0x10) = unaff_x22;
            *(byte **)(pbStack_288 + 0x18) = pbStack_278;
            *(long *)(pbStack_288 + 0x20) = lVar44;
            *(long *)(pbStack_288 + 0x28) = lVar26;
            *(long *)(pbStack_288 + 0x30) = lVar3;
            *(long *)(pbStack_288 + 0x38) = CONCAT71(uStack_26f,bStack_270);
            *(long *)(pbStack_288 + 0x40) = lVar27;
            _memcpy(&lStack_220,pbStack_288,0x118);
            lVar26 = FUN_100fbc738(&uStack_d0);
code_r0x00010044a284:
            if (lVar26 == 0) {
              return;
            }
            pbVar30[0] = 0x1d;
            pbVar30[1] = 0;
            pbVar30[2] = 0;
            pbVar30[3] = 0;
            pbVar30[4] = 0;
            pbVar30[5] = 0;
            pbVar30[6] = 0;
            pbVar30[7] = 0;
            *(long *)(pbVar30 + 8) = lVar26;
            FUN_100e35e0c(&lStack_220);
            return;
          }
        }
        pbStack_288[0] = 0x1d;
        pbStack_288[1] = 0;
        pbStack_288[2] = 0;
        pbStack_288[3] = 0;
        pbStack_288[4] = 0;
        pbStack_288[5] = 0;
        pbStack_288[6] = 0;
        pbStack_288[7] = 0;
        *(long *)(pbStack_288 + 8) = lVar27;
        if (lVar44 != 0) {
          _free(lVar26);
        }
      }
code_r0x000100449eb4:
      param_3 = unaff_x22;
      if (unaff_x25 != 0) {
code_r0x000100449ebc:
        _free(param_3);
      }
    }
    pbVar30 = (byte *)((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5);
code_r0x000100449df0:
    param_3 = unaff_x20;
    pbVar30 = pbVar30 + 1;
    while (pbVar30 = pbVar30 + -1, pbVar30 != (byte *)0x0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 0x20;
    }
    if (unaff_x24 == (byte *)0x0) {
      return;
    }
code_r0x000100449e18:
    _free(param_3);
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
    lStack_240 = *(long *)(param_4 + 8);
    pbStack_250 = *(byte **)(param_4 + 0x10);
    lVar26 = *(long *)(param_4 + 0x18) * 0x40;
    pbVar39 = pbStack_250 + lVar26;
    unaff_x22 = &bStack_270;
    bStack_270 = 0x16;
    pbStack_230 = (byte *)0x0;
    pbStack_288 = param_3;
    pbStack_248 = pbStack_250;
    pbStack_238 = pbVar39;
    if (*(long *)(param_4 + 0x18) == 0) goto code_r0x000100449e20;
    unaff_x21 = (byte *)0x0;
    unaff_x23 = (long *)((ulong)&uStack_d0 | 1);
    unaff_x19 = (byte *)((ulong)unaff_x22 | 1);
    pbStack_290 = (byte *)((ulong)&uStack_98 | 1);
    pbStack_2c0 = (byte *)((lVar26 - 0x40U >> 6) + 1);
    pbVar40 = (byte *)0x8000000000000000;
    pbStack_280 = (byte *)0x8000000000000000;
    pbStack_278 = (byte *)0x8000000000000000;
    unaff_x28 = (byte *)0x8000000000000000;
    unaff_x20 = pbStack_250;
    do {
      pbVar37 = pbStack_c0;
      pbVar30 = pbStack_c8;
      pbVar33 = uStack_d0;
      unaff_x22 = unaff_x20 + 0x40;
      bVar29 = *unaff_x20;
      pbVar9 = unaff_x22;
      if (bVar29 == 0x16) goto code_r0x000100449f18;
      uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar29);
      pbVar31 = uStack_d0;
      lVar26 = *(long *)(unaff_x20 + 0x10);
      *(long *)((long)unaff_x23 + 0x17) = *(long *)(unaff_x20 + 0x18);
      *(long *)((long)unaff_x23 + 0xf) = lVar26;
      lVar26 = *(long *)(unaff_x20 + 1);
      unaff_x23[1] = *(long *)(unaff_x20 + 9);
      *unaff_x23 = lVar26;
      uStack_268 = (undefined1)*(long *)(unaff_x20 + 0x28);
      uStack_267 = (undefined7)((ulong)*(long *)(unaff_x20 + 0x28) >> 8);
      bStack_270 = (byte)*(long *)(unaff_x20 + 0x20);
      uStack_26f = (undefined7)((ulong)*(long *)(unaff_x20 + 0x20) >> 8);
      lStack_258 = *(long *)(unaff_x20 + 0x38);
      uStack_260 = (undefined1)*(long *)(unaff_x20 + 0x30);
      uStack_25f = (undefined7)((ulong)*(long *)(unaff_x20 + 0x30) >> 8);
      if (bVar29 < 0xd) {
        if (bVar29 == 1) {
          uStack_d0._1_1_ = SUB81(pbVar33,1);
          bVar29 = uStack_d0._1_1_;
          if (2 < uStack_d0._1_1_) {
            bVar29 = 3;
          }
          goto code_r0x000100449b4c;
        }
        if (bVar29 == 4) {
          pbVar33 = pbStack_c8;
          if ((byte *)0x2 < pbStack_c8) {
            pbVar33 = (byte *)0x3;
          }
          uStack_98._1_7_ = CONCAT61(uStack_98._2_6_,(char)pbVar33);
          goto code_r0x000100449b50;
        }
        if (bVar29 == 0xc) {
          if (pbStack_b8 == (byte *)0x15) {
            if ((*(long *)pbStack_c0 != 0x69746361706d6f63 ||
                *(long *)(pbStack_c0 + 8) != 0x65757165725f6e6f) ||
                *(long *)(pbStack_c0 + 0xd) != 0x64695f7473657571) goto code_r0x000100449aac;
            uStack_98 = (byte *)CONCAT62(uStack_98._2_6_,0x100);
          }
          else if (pbStack_b8 == (byte *)0x10) {
            if (*(long *)pbStack_c0 != 0x65736e6f70736572 ||
                *(long *)(pbStack_c0 + 8) != 0x64616f6c7961705f) goto code_r0x000100449aac;
            uStack_98 = (byte *)CONCAT62(uStack_98._2_6_,0x200);
          }
          else if ((pbStack_b8 == (byte *)0xd) &&
                  (*(long *)pbStack_c0 == 0x69746361706d6f63 &&
                   *(long *)(pbStack_c0 + 5) == 0x64695f6e6f697463)) {
            uStack_98 = (byte *)((ulong)uStack_98._2_6_ << 0x10);
          }
          else {
code_r0x000100449aac:
            uStack_98 = (byte *)CONCAT62(uStack_98._2_6_,0x300);
          }
joined_r0x000100449a5c:
          if (pbVar30 != (byte *)0x0) {
            _free(pbVar37);
          }
        }
        else {
code_r0x000100449d28:
          pbStack_90 = (byte *)thunk_FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b212220);
code_r0x000100449d40:
          uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,1);
        }
      }
      else {
        if (bVar29 == 0xd) {
          if (pbStack_c0 == (byte *)0x15) {
            pbVar30 = *(byte **)pbStack_c8;
            pbVar33 = *(byte **)(pbStack_c8 + 8);
            puVar34 = *(undefined **)(pbStack_c8 + 0xd);
            pbVar35 = (byte *)0x69746361706d6f63;
code_r0x000100449b18:
            if ((pbVar30 != pbVar35 || pbVar33 != (byte *)0x65757165725f6e6f) ||
                puVar34 != (undefined *)0x64695f7473657571) goto code_r0x000100449b48;
            pbVar31 = uStack_d0;
            bVar29 = 1;
          }
          else if (pbStack_c0 == (byte *)0x10) {
            if (*(long *)pbStack_c8 != 0x65736e6f70736572 ||
                *(long *)(pbStack_c8 + 8) != 0x64616f6c7961705f) goto code_r0x000100449b48;
            bVar29 = 2;
          }
          else if ((pbStack_c0 == (byte *)0xd) &&
                  (*(long *)pbStack_c8 == 0x69746361706d6f63 &&
                   *(long *)(pbStack_c8 + 5) == 0x64695f6e6f697463)) {
            bVar29 = 0;
          }
          else {
code_r0x000100449b48:
            pbVar31 = uStack_d0;
            bVar29 = 3;
          }
code_r0x000100449b4c:
          uStack_d0 = pbVar31;
          uStack_98._1_7_ = CONCAT61(uStack_98._2_6_,bVar29);
code_r0x000100449b50:
          uStack_98 = (byte *)((ulong)uStack_98._1_7_ << 8);
        }
        else {
          if (bVar29 == 0xe) {
            FUN_100b49cd4(&uStack_98,pbStack_c0);
            goto joined_r0x000100449a5c;
          }
          if (bVar29 != 0xf) goto code_r0x000100449d28;
          FUN_100b49cd4(&uStack_98,pbStack_c8,pbStack_c0);
        }
        FUN_100e077ec(&uStack_d0);
      }
code_r0x000100449b5c:
      uVar8 = uStack_ff;
      uVar7 = uStack_100;
      uVar5 = uStack_107;
      bVar2 = bStack_108;
      bVar29 = bStack_270;
      pbVar37 = pbStack_2a0;
      if (((ulong)uStack_98 & 1) != 0) {
        pbVar30 = unaff_x21 + 1;
        pbStack_248 = unaff_x22;
        goto code_r0x000100449ecc;
      }
      bStack_108 = (byte)unaff_x28;
      bVar4 = bStack_108;
      uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
      uVar6 = uStack_107;
      uStack_100 = SUB81(pbStack_2a0,0);
      uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
      if (uStack_98._1_1_ < 2) {
        if (uStack_98._1_1_ == 0) {
          if (pbVar40 != (byte *)0x8000000000000000) {
            pbStack_230 = unaff_x21 + 1;
            uStack_98 = &UNK_108cb88ab;
            pbStack_90 = (byte *)0xd;
            uStack_d0 = (byte *)&uStack_98;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_248 = unaff_x22;
            lVar26 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            unaff_x22 = &bStack_270;
            goto LAB_100449f68;
          }
          bStack_270 = 0x16;
          if (bVar29 == 0x16) {
            pbStack_230 = unaff_x21 + 1;
            pbStack_248 = unaff_x22;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010044a620;
          }
          lVar26 = *(long *)unaff_x19;
          unaff_x23[1] = *(long *)(unaff_x19 + 8);
          *unaff_x23 = lVar26;
          uVar32 = *(undefined8 *)(unaff_x19 + 0xf);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(unaff_x19 + 0x17);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar32;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar29);
          bStack_108 = bVar2;
          uStack_107 = uVar5;
          uStack_100 = uVar7;
          uStack_ff = uVar8;
          FUN_1004b62d4(&uStack_98,&uStack_d0);
          if (uStack_98 == (byte *)0x8000000000000000) {
            uStack_100 = SUB81(pbStack_2a0,0);
            uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
            pbStack_288[0] = 0x1d;
            pbStack_288[1] = 0;
            pbStack_288[2] = 0;
            pbStack_288[3] = 0;
            pbStack_288[4] = 0;
            pbStack_288[5] = 0;
            pbStack_288[6] = 0;
            pbStack_288[7] = 0;
            *(byte **)(pbStack_288 + 8) = pbStack_90;
            pbVar40 = (byte *)0x0;
            pbStack_248 = unaff_x22;
            pbStack_230 = unaff_x21 + 1;
            bStack_108 = bVar4;
            uStack_107 = uVar6;
            goto code_r0x000100449eec;
          }
          pbStack_298 = pbStack_90;
          lStack_2b0 = lStack_88;
          pbVar40 = uStack_98;
        }
        else {
          if (pbStack_278 != (byte *)0x8000000000000000) {
            pbStack_230 = unaff_x21 + 1;
            uStack_98 = &UNK_108cb8e87;
            pbStack_90 = (byte *)0x15;
            uStack_d0 = (byte *)&uStack_98;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_248 = unaff_x22;
            lVar26 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            unaff_x22 = &bStack_270;
            goto LAB_100449f68;
          }
          bStack_270 = 0x16;
          in_ZR = bVar29 == 0x16;
          bStack_108 = bVar2;
          uStack_107 = uVar5;
          uStack_100 = uVar7;
          uStack_ff = uVar8;
code_r0x000100449c88:
          if ((bool)in_ZR) {
            pbStack_230 = unaff_x21 + 1;
            bStack_108 = (byte)unaff_x28;
            uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
            uStack_100 = SUB81(pbStack_2a0,0);
            uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
            pbStack_278 = (byte *)0x8000000000000000;
            pbStack_248 = unaff_x22;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010044a620;
          }
          lVar26 = *(long *)unaff_x19;
          unaff_x23[1] = *(long *)(unaff_x19 + 8);
          *unaff_x23 = lVar26;
code_r0x000100449c94:
          uVar32 = *(undefined8 *)(unaff_x19 + 0xf);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(unaff_x19 + 0x17);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar32;
code_r0x000100449c9c:
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar29);
          pbStack_278 = (byte *)0x8000000000000000;
          FUN_1004b62d4(&uStack_98,&uStack_d0);
          pbStack_278 = uStack_98;
          if (uStack_98 == (byte *)0x8000000000000000) {
            bStack_108 = (byte)unaff_x28;
            uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
            uStack_100 = SUB81(pbStack_2a0,0);
            uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
            pbStack_288[0] = 0x1d;
            pbStack_288[1] = 0;
            pbStack_288[2] = 0;
            pbStack_288[3] = 0;
            pbStack_288[4] = 0;
            pbStack_288[5] = 0;
            pbStack_288[6] = 0;
            pbStack_288[7] = 0;
            *(byte **)(pbStack_288 + 8) = pbStack_90;
            pbStack_278 = (byte *)0x8000000000000000;
            pbStack_248 = unaff_x22;
            pbStack_230 = unaff_x21 + 1;
            goto code_r0x000100449eec;
          }
          pbStack_2a8 = pbStack_90;
          lStack_2b8 = lStack_88;
        }
      }
      else if (uStack_98._1_1_ == 2) {
        if (pbStack_280 != (byte *)0x8000000000000000) {
          pbStack_230 = unaff_x21 + 1;
          uStack_98 = &UNK_108cdd020;
          pbStack_90 = (byte *)0x10;
          uStack_d0 = (byte *)&uStack_98;
          pbStack_c8 = &DAT_100c7b3a0;
          pbStack_248 = unaff_x22;
          lVar26 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
          unaff_x22 = &bStack_270;
          pbStack_288[0] = 0x1d;
          pbStack_288[1] = 0;
          pbStack_288[2] = 0;
          pbStack_288[3] = 0;
          pbStack_288[4] = 0;
          pbStack_288[5] = 0;
          pbStack_288[6] = 0;
          pbStack_288[7] = 0;
          *(long *)(pbStack_288 + 8) = lVar26;
          unaff_x19 = (byte *)0x1;
          unaff_x20 = (byte *)0x1;
          param_3 = pbVar40;
          pbVar30 = pbStack_280;
          goto joined_r0x00010044a52c;
        }
        bStack_270 = 0x16;
        in_ZR = bVar29 == 0x16;
        bStack_108 = bVar2;
        uStack_107 = uVar5;
        uStack_100 = uVar7;
        uStack_ff = uVar8;
code_r0x000100449c00:
        if ((bool)in_ZR) {
          pbStack_230 = unaff_x21 + 1;
          bStack_108 = (byte)unaff_x28;
          uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_100 = SUB81(pbStack_2a0,0);
          uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
          pbStack_280 = (byte *)0x8000000000000000;
          pbStack_248 = unaff_x22;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010044a620;
        }
        lVar26 = *(long *)unaff_x19;
        *(long *)(pbStack_290 + 8) = *(long *)(unaff_x19 + 8);
        *(long *)pbStack_290 = lVar26;
        pbVar33 = pbStack_290;
code_r0x000100449c10:
        pbVar43 = *(byte **)(unaff_x19 + 0x17);
        pbVar42 = *(byte **)(unaff_x19 + 0xf);
        pbVar38 = unaff_x22;
code_r0x000100449c14:
        *(byte **)(pbVar33 + 0x17) = pbVar43;
        *(byte **)(pbVar33 + 0xf) = pbVar42;
        uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar29);
        pbStack_280 = (byte *)0x8000000000000000;
        FUN_100b1671c(&uStack_d0,&uStack_98);
        pbVar31 = pbStack_c8;
        unaff_x28 = uStack_d0;
        if (uStack_d0 == (byte *)0x8000000000000000) {
          pbStack_230 = unaff_x21 + 1;
          pbStack_288[0] = 0x1d;
          pbStack_288[1] = 0;
          pbStack_288[2] = 0;
          pbStack_288[3] = 0;
          pbStack_288[4] = 0;
          pbStack_288[5] = 0;
          pbStack_288[6] = 0;
          pbStack_288[7] = 0;
          *(byte **)(pbStack_288 + 8) = pbStack_c8;
          unaff_x19 = (byte *)0x1;
          unaff_x20 = (byte *)0x1;
          unaff_x22 = &bStack_270;
          pbStack_248 = pbVar38;
          goto LAB_100449fa8;
        }
code_r0x000100449c44:
        pbVar30 = (byte *)&uStack_d0;
        pbVar42 = pbStack_c0;
        pbVar43 = pbStack_b8;
        lVar26 = lStack_b0;
        lVar44 = lStack_a8;
        pbStack_2a0 = pbVar31;
code_r0x000100449c50:
        pbVar33 = &bStack_108;
code_r0x000100449c54:
        *(byte **)(pbVar33 + 0x18) = pbVar43;
        *(byte **)(pbVar33 + 0x10) = pbVar42;
        *(long *)(pbVar33 + 0x28) = lVar44;
        *(long *)(pbVar33 + 0x20) = lVar26;
        unaff_x22 = pbVar38;
code_r0x000100449c58:
        *(long *)(pbVar33 + 0x30) = *(long *)(pbVar30 + 0x30);
        pbStack_280 = unaff_x28;
      }
      else {
        pbVar30 = (byte *)(ulong)bStack_270;
        pbVar33 = (byte *)0x16;
        bStack_108 = bVar2;
        uStack_107 = uVar5;
        uStack_100 = uVar7;
        uStack_ff = uVar8;
code_r0x000100449ce0:
        bVar29 = (byte)pbVar30;
        bStack_270 = (byte)pbVar33;
        if ((int)pbVar30 == 0x16) {
          pbStack_230 = unaff_x21 + 1;
          bStack_108 = (byte)unaff_x28;
          uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_100 = SUB81(pbStack_2a0,0);
          uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
          pbStack_248 = unaff_x22;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010044a620:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10044a624);
          (*pcVar10)();
        }
        lVar26 = *(long *)unaff_x19;
        unaff_x23[1] = *(long *)(unaff_x19 + 8);
        *unaff_x23 = lVar26;
        uVar32 = *(undefined8 *)(unaff_x19 + 0xf);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(unaff_x19 + 0x17);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar32;
code_r0x000100449cfc:
        uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar29);
        FUN_100e077ec(&uStack_d0);
      }
      pbVar33 = unaff_x20 + 0x40;
      unaff_x21 = unaff_x21 + 1;
      unaff_x20 = unaff_x22;
    } while (pbVar33 != pbVar39);
  case 0x24:
    unaff_x21 = pbStack_2c0;
    pbVar9 = pbVar39;
code_r0x000100449f18:
    pbStack_248 = pbVar9;
    bStack_108 = (byte)unaff_x28;
    uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_100 = SUB81(pbStack_2a0,0);
    uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
    pbVar30 = (byte *)0x8000000000000000;
    pbVar37 = pbStack_2a0;
    pbStack_230 = unaff_x21;
    if (pbVar40 == (byte *)0x8000000000000000) {
      unaff_x22 = &bStack_270;
      pbVar37 = pbStack_2a0;
      goto code_r0x000100449f34;
    }
code_r0x000100449ff4:
    pbVar33 = pbStack_278;
code_r0x000100449ff8:
    in_ZR = pbVar33 == pbVar30;
code_r0x000100449ffc:
    unaff_x20 = (byte *)(ulong)in_ZR;
code_r0x00010044a000:
    unaff_x22 = &bStack_270;
code_r0x00010044a004:
    if ((bool)in_ZR) {
code_r0x00010044a008:
      pbVar30 = &UNK_108cb8000;
code_r0x00010044a00c:
      pbVar30 = pbVar30 + 0xe87;
code_r0x00010044a010:
      pbStack_90 = (byte *)0x15;
      uStack_98 = pbVar30;
code_r0x00010044a018:
      pbVar30 = (byte *)&uStack_98;
code_r0x00010044a01c:
      pbVar33 = &DAT_100c7b3a0;
code_r0x00010044a024:
      uStack_d0 = pbVar30;
      pbStack_c8 = pbVar33;
FUN_10044a028:
      param_3 = (byte *)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010044a02c:
      param_3 = param_3 + 0x8f7;
code_r0x00010044a030:
      param_4 = (byte *)&uStack_d0;
code_r0x00010044a034:
      param_3 = (byte *)thunk_FUN_108856088(param_3,param_4);
code_r0x00010044a038:
      pbVar30 = (byte *)0x1d;
      pbVar33 = pbStack_288;
code_r0x00010044a040:
      *(byte **)pbVar33 = pbVar30;
      *(byte **)(pbVar33 + 8) = param_3;
code_r0x00010044a044:
    }
    else {
code_r0x00010044a048:
      pbVar33 = pbStack_280;
code_r0x00010044a04c:
      in_ZR = pbVar33 == pbVar30;
code_r0x00010044a050:
      pbVar30 = pbStack_288;
      if (!(bool)in_ZR) {
        *(long *)(pbStack_288 + 0x50) = lStack_f0;
        *(long *)(pbStack_288 + 0x48) = CONCAT71(uStack_f7,uStack_f8);
        *(long *)(pbStack_288 + 0x60) = lStack_e0;
        *(long *)(pbStack_288 + 0x58) = lStack_e8;
        *(long *)(pbStack_288 + 0x68) = lStack_d8;
        pbStack_288[0] = 0x17;
        pbStack_288[1] = 0;
        pbStack_288[2] = 0;
        pbStack_288[3] = 0;
        pbStack_288[4] = 0;
        pbStack_288[5] = 0;
        pbStack_288[6] = 0;
        pbStack_288[7] = 0;
        *(byte **)(pbStack_288 + 8) = pbVar40;
        *(byte **)(pbStack_288 + 0x10) = pbStack_298;
        *(long *)(pbStack_288 + 0x18) = lStack_2b0;
        *(byte **)(pbStack_288 + 0x20) = pbStack_278;
        *(byte **)(pbStack_288 + 0x28) = pbStack_2a8;
        *(long *)(pbStack_288 + 0x30) = lStack_2b8;
        *(byte **)(pbStack_288 + 0x38) = pbVar33;
        *(byte **)(pbStack_288 + 0x40) = pbVar37;
        _memcpy(&lStack_220,pbStack_288,0x118);
        lVar26 = FUN_100fbc67c(&bStack_270);
        goto code_r0x00010044a284;
      }
      pbVar30 = &UNK_108cdd000;
code_r0x00010044a058:
      pbVar30 = pbVar30 + 0x20;
code_r0x00010044a05c:
      pbVar33 = (byte *)0x10;
code_r0x00010044a060:
      uStack_98 = pbVar30;
      pbStack_90 = pbVar33;
code_r0x00010044a064:
      pbVar30 = (byte *)&uStack_98;
code_r0x00010044a068:
      pbVar33 = &UNK_100c7b000;
code_r0x00010044a06c:
      pbVar33 = pbVar33 + 0x3a0;
code_r0x00010044a070:
      param_3 = (byte *)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
      uStack_d0 = pbVar30;
      pbStack_c8 = pbVar33;
code_r0x00010044a078:
      param_3 = param_3 + 0x8f7;
code_r0x00010044a07c:
      param_4 = (byte *)&uStack_d0;
code_r0x00010044a080:
      param_3 = (byte *)thunk_FUN_108856088(param_3,param_4);
code_r0x00010044a084:
      pbVar30 = (byte *)0x1d;
code_r0x00010044a088:
      *(byte **)pbStack_288 = pbVar30;
      *(byte **)(pbStack_288 + 8) = param_3;
code_r0x00010044a090:
      pbVar30 = pbStack_278;
code_r0x00010044a094:
      param_3 = pbStack_2a8;
      if (pbVar30 != (byte *)0x0) {
code_r0x00010044a09c:
        _free(param_3);
      }
    }
LAB_10044a0a0:
    if (pbVar40 != (byte *)0x0) {
code_r0x00010044a0a4:
      param_3 = pbStack_298;
code_r0x00010044a0a8:
      _free(param_3);
    }
LAB_10044a0ac:
    unaff_x19 = (byte *)0x0;
    pbVar30 = (byte *)0x8000000000000000;
code_r0x00010044a0b4:
    pbVar33 = pbStack_280;
code_r0x00010044a0b8:
    in_ZR = pbVar33 == pbVar30;
code_r0x00010044a0bc:
    pbVar30 = pbVar33;
code_r0x00010044a0c0:
    if (!(bool)in_ZR) goto LAB_100449f8c;
code_r0x00010044a0c4:
    goto LAB_100449fa8;
  case 0x16:
    goto LAB_100449fc0;
  case 0x17:
    goto code_r0x000100449fd0;
  case 0x18:
    goto LAB_100449f98;
  case 0x19:
  case 0xa6:
  case 0xe8:
    goto code_r0x000100449fb0;
  case 0x1a:
  case 0xc0:
    goto code_r0x000100449f5c;
  case 0x1b:
    goto code_r0x000100449fe0;
  case 0x1c:
  case 0xbf:
    goto code_r0x000100449ff8;
  case 0x1d:
    goto code_r0x000100449fb8;
  case 0x1e:
  case 0xb7:
    goto code_r0x00010044a010;
  case 0x1f:
  case 0xbb:
    goto LAB_100449f8c;
  case 0x20:
    goto code_r0x00010044a000;
  case 0x21:
    goto code_r0x000100449f34;
  case 0x22:
  case 0xbe:
    goto code_r0x000100449f64;
  case 0x23:
  case 0x3c:
    goto code_r0x000100449fe8;
  case 0x25:
    goto code_r0x000100449fa0;
  case 0x26:
    goto code_r0x000100449f04;
  case 0x28:
  case 0x8f:
  case 0xd5:
    goto code_r0x00010044a060;
  case 0x29:
    goto code_r0x000100449c00;
  case 0x2a:
  case 0x3f:
    goto code_r0x000100449c44;
  case 0x2c:
  case 0xf2:
    goto code_r0x00010044a0a4;
  case 0x2d:
  case 0xf3:
    goto code_r0x00010044a0b4;
  case 0x2e:
  case 0xf4:
    goto code_r0x00010044a07c;
  case 0x2f:
  case 0x79:
  case 0xf5:
    goto code_r0x00010044a094;
  case 0x30:
  case 0xbd:
  case 0xf6:
    goto code_r0x00010044a040;
  case 0x31:
  case 0x7a:
  case 0x86:
  case 0xf7:
    goto code_r0x00010044a0c4;
  case 0x33:
  case 0xf9:
    goto code_r0x00010044a09c;
  case 0x34:
  case 0xfa:
    goto code_r0x00010044a0f4;
  case 0x35:
  case 0x52:
  case 0xc9:
  case 0xfb:
    goto code_r0x00010044a070;
  case 0x36:
  case 0x8b:
  case 0xfc:
    goto code_r0x00010044a0e4;
  case 0x37:
  case 0xb0:
  case 0xfd:
    goto code_r0x00010044a018;
  case 0x38:
  case 0xfe:
    goto code_r0x00010044a048;
  case 0x3a:
  case 0xb2:
    goto code_r0x000100449ff0;
  case 0x3b:
    goto code_r0x00010044a084;
  case 0x3e:
    goto code_r0x00010044a144;
  case 0x40:
    goto code_r0x000100449c88;
  case 0x43:
  case 0x8c:
    goto code_r0x00010044a13c;
  case 0x44:
  case 0xd8:
    goto code_r0x00010044a104;
  case 0x45:
    goto code_r0x00010044a11c;
  case 0x47:
    goto code_r0x00010044a14c;
  case 0x4d:
  case 0xcb:
    goto LAB_10044a0a0;
  case 0x50:
  case 0xcd:
    goto code_r0x00010044a078;
  case 0x51:
  case 0x89:
    goto code_r0x00010044a10c;
  case 0x56:
    goto code_r0x000100449ddc;
  case 0x58:
    goto code_r0x000100449e7c;
  case 0x59:
    goto code_r0x000100449e8c;
  case 0x5a:
    goto code_r0x000100449e54;
  case 0x5b:
    goto code_r0x000100449e6c;
  case 0x5c:
    goto code_r0x000100449e18;
  case 0x5d:
    goto code_r0x000100449e9c;
  case 0x5e:
    goto code_r0x000100449eb4;
  case 0x5f:
    goto code_r0x000100449e74;
  case 0x60:
code_r0x000100449ecc:
    bStack_108 = (byte)unaff_x28;
    uStack_107 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_100 = SUB81(pbStack_2a0,0);
    uStack_ff = (undefined7)((ulong)pbStack_2a0 >> 8);
    pbStack_288[0] = 0x1d;
    pbStack_288[1] = 0;
    pbStack_288[2] = 0;
    pbStack_288[3] = 0;
    pbStack_288[4] = 0;
    pbStack_288[5] = 0;
    pbStack_288[6] = 0;
    pbStack_288[7] = 0;
    *(byte **)(pbStack_288 + 8) = pbStack_90;
    pbStack_230 = pbVar30;
code_r0x000100449eec:
    unaff_x20 = (byte *)0x1;
    unaff_x19 = (byte *)0x1;
    unaff_x22 = &bStack_270;
    in_ZR = pbStack_280 == (byte *)0x8000000000000000;
    pbVar30 = pbStack_280;
    pbVar37 = pbStack_2a0;
code_r0x000100449f04:
    if (!(bool)in_ZR) goto LAB_100449f8c;
    goto LAB_100449fa8;
  case 0x61:
    goto code_r0x000100449e48;
  case 0x62:
    goto code_r0x000100449ebc;
  case 99:
    goto code_r0x000100449df0;
  case 100:
code_r0x000100449e20:
    bStack_108 = 0;
    uStack_107 = 0x80000000000000;
    pbStack_280 = (byte *)0x8000000000000000;
    pbStack_278 = (byte *)0x8000000000000000;
    goto code_r0x000100449f34;
  case 0x65:
    goto code_r0x000100449ea4;
  case 0x66:
    goto code_r0x000100449dc8;
  case 0x67:
    goto code_r0x000100449e5c;
  case 0x68:
    goto code_r0x000100449dc0;
  case 0x6a:
    goto code_r0x000100449f18;
  case 0x6b:
    goto code_r0x000100449b18;
  case 0x6c:
    goto code_r0x000100449b5c;
  case 0x6f:
    goto code_r0x00010044a130;
  case 0x71:
    goto code_r0x00010044a110;
  case 0x72:
    goto code_r0x00010044a0bc;
  case 0x73:
    goto code_r0x00010044a140;
  case 0x74:
    goto code_r0x00010044a158;
  case 0x75:
    goto code_r0x00010044a118;
  case 0x76:
    goto code_r0x00010044a170;
  case 0x77:
  case 0x84:
    goto code_r0x00010044a0ec;
  case 0x7b:
    goto code_r0x00010044a148;
  case 0x7c:
    goto code_r0x00010044a06c;
  case 0x7d:
    goto code_r0x00010044a100;
  case 0x7e:
    goto code_r0x00010044a064;
  case 0x81:
    goto code_r0x000100449c50;
  case 0x82:
    goto code_r0x000100449c94;
  case 0x88:
    goto code_r0x00010044a088;
  case 0x8d:
  case 0xc2:
  case 0xcc:
    goto code_r0x00010044a0b8;
  case 0x90:
  case 199:
    goto code_r0x00010044a090;
  case 0x91:
    goto code_r0x00010044a114;
  case 0x92:
  case 0xb5:
    goto code_r0x00010044a038;
  case 0x94:
    goto code_r0x00010044a030;
  case 0x97:
    goto code_r0x000100449cfc;
  case 0x98:
    goto code_r0x000100449d40;
  case 0x9a:
  case 0xdc:
    goto code_r0x00010044a00c;
  case 0x9b:
  case 0xca:
  case 0xdd:
    goto code_r0x00010044a01c;
  case 0x9c:
  case 0xb9:
  case 0xde:
    goto code_r0x000100449fe4;
  case 0x9d:
  case 0xdf:
    goto code_r0x000100449ffc;
  case 0x9e:
  case 0xe0:
    goto LAB_100449fa8;
  case 0x9f:
  case 0xe1:
    goto code_r0x00010044a02c;
  case 0xa0:
  case 0xe2:
    goto code_r0x00010044a044;
  case 0xa1:
  case 0xe3:
    goto code_r0x00010044a004;
  case 0xa2:
  case 0xe4:
    goto code_r0x00010044a05c;
  case 0xa3:
  case 0xe5:
    goto code_r0x000100449fd8;
  case 0xa4:
  case 0xcf:
  case 0xe6:
    goto code_r0x00010044a04c;
  case 0xa5:
  case 0xe7:
    goto code_r0x000100449f80;
  case 0xa7:
  case 0xe9:
    goto code_r0x00010044a034;
  case 0xa8:
  case 0xea:
    goto FUN_100449f58;
  case 0xa9:
  case 0xeb:
    goto code_r0x000100449fec;
  case 0xaa:
  case 0xec:
    goto code_r0x000100449f50;
  case 0xac:
  case 0xee:
    goto LAB_10044a0ac;
  case 0xad:
  case 0xef:
    goto code_r0x000100449c14;
  case 0xae:
  case 0xf0:
    goto code_r0x000100449c58;
  case 0xb1:
    goto FUN_10044a028;
  case 0xb3:
    goto code_r0x00010044a008;
  case 0xb4:
    goto code_r0x000100449fb4;
  case 0xb6:
    goto code_r0x00010044a050;
  case 0xb8:
    goto code_r0x00010044a068;
  case 0xba:
  case 200:
    goto code_r0x00010044a058;
  case 0xbc:
    goto code_r0x000100449fbc;
  case 0xc3:
    goto code_r0x000100449c10;
  case 0xc4:
    goto code_r0x000100449c54;
  case 0xc6:
    goto code_r0x00010044a080;
  case 0xd0:
    goto code_r0x00010044a0c0;
  case 0xd1:
    goto code_r0x000100449ff4;
  case 0xd2:
    goto code_r0x00010044a024;
  case 0xd3:
    goto code_r0x00010044a0a8;
  case 0xd4:
    goto code_r0x000100449fcc;
  case 0xd6:
    goto code_r0x000100449fc4;
  case 0xd9:
    goto code_r0x000100449c9c;
  case 0xda:
    goto code_r0x000100449ce0;
  }
  lStack_220 = CONCAT71(lStack_220._1_7_,bVar29);
code_r0x00010044a1e4:
  lVar26 = FUN_107c05dcc(&lStack_220,auStack_71,&UNK_10b219f10);
  param_3[0] = 0x1d;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(long *)(param_3 + 8) = lVar26;
  return;
code_r0x000100449f34:
  uStack_98 = &UNK_108cb88ab;
  pbStack_90 = (byte *)0xd;
  pbVar30 = (byte *)&uStack_98;
  pbVar33 = &DAT_100c7b3a0;
code_r0x000100449f50:
  pbVar40 = (byte *)0x0;
  uStack_d0 = pbVar30;
  pbStack_c8 = pbVar33;
FUN_100449f58:
  param_3 = (byte *)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x000100449f5c:
  param_3 = param_3 + 0x8f7;
  param_4 = (byte *)&uStack_d0;
code_r0x000100449f64:
  lVar26 = thunk_FUN_108856088(param_3,param_4);
LAB_100449f68:
  pbStack_288[0] = 0x1d;
  pbStack_288[1] = 0;
  pbStack_288[2] = 0;
  pbStack_288[3] = 0;
  pbStack_288[4] = 0;
  pbStack_288[5] = 0;
  pbStack_288[6] = 0;
  pbStack_288[7] = 0;
  *(long *)(pbStack_288 + 8) = lVar26;
  unaff_x20 = (byte *)0x1;
  unaff_x19 = (byte *)0x1;
  pbVar31 = (byte *)0x8000000000000000;
  pbVar33 = pbStack_280;
code_r0x000100449f80:
  pbVar30 = pbVar33;
  if (pbVar30 != pbVar31) {
LAB_100449f8c:
    param_3 = pbVar40;
joined_r0x00010044a52c:
    if (pbVar30 != (byte *)0x0) {
      _free(pbVar37);
    }
LAB_100449f98:
    pbVar40 = param_3;
    if (lStack_f0 != 0) {
code_r0x000100449fa0:
      _free(lStack_e8);
    }
  }
LAB_100449fa8:
  in_ZR = ((ulong)pbStack_278 & 0x7fffffffffffffff) == 0;
code_r0x000100449fb0:
  if (!(bool)in_ZR) {
code_r0x000100449fb4:
    if (((ulong)unaff_x20 & 1) != 0) {
code_r0x000100449fb8:
      param_3 = pbStack_2a8;
code_r0x000100449fbc:
      _free(param_3);
    }
  }
LAB_100449fc0:
  in_ZR = ((ulong)pbVar40 & 0x7fffffffffffffff) == 0;
code_r0x000100449fc4:
  uVar28 = 0;
  if (!(bool)in_ZR) {
    uVar28 = (uint)unaff_x19;
  }
  if ((uVar28 & 1) != 0) {
code_r0x000100449fcc:
    param_3 = pbStack_298;
code_r0x000100449fd0:
    _free(param_3);
  }
  param_3 = unaff_x22 + 0x20;
code_r0x000100449fd8:
  FUN_100d34830(param_3);
  pbVar30 = (byte *)(ulong)bStack_270;
code_r0x000100449fe0:
  in_ZR = (int)pbVar30 == 0x16;
code_r0x000100449fe4:
  if ((bool)in_ZR) {
    return;
  }
code_r0x000100449fe8:
  param_3 = &bStack_270;
code_r0x000100449fec:
  FUN_100e077ec(param_3);
code_r0x000100449ff0:
  return;
}

