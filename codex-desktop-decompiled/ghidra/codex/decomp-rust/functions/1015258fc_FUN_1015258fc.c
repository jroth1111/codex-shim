
/* WARNING: Type propagation algorithm not settling */

void FUN_1015258fc(ulong *param_1,char *param_2,long param_3)

{
  char cVar1;
  byte *pbVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  ulong uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  byte bVar10;
  undefined7 uVar11;
  byte bVar12;
  undefined7 uVar13;
  byte bVar14;
  undefined7 uVar15;
  byte bVar16;
  undefined7 uVar17;
  byte bVar18;
  undefined7 uVar19;
  byte bVar20;
  undefined7 uVar21;
  byte bVar22;
  undefined7 uVar23;
  undefined7 uVar24;
  byte bVar25;
  undefined7 uVar26;
  byte bVar27;
  undefined7 uVar28;
  byte bVar29;
  undefined7 uVar30;
  byte bVar31;
  undefined7 uVar32;
  byte bVar33;
  undefined7 uVar34;
  byte bVar35;
  undefined7 uVar36;
  byte bVar37;
  undefined7 uVar38;
  byte bVar39;
  undefined7 uVar40;
  code *pcVar41;
  int iVar42;
  ulong *puVar43;
  uint uVar44;
  char *pcVar45;
  ulong uVar46;
  ulong *puVar47;
  ulong *puVar48;
  long lVar49;
  undefined8 *puVar50;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x13;
  ulong uVar51;
  ulong extraout_x14;
  ulong *extraout_x16;
  long lVar52;
  char *pcVar53;
  int iVar54;
  ulong uVar55;
  long lVar56;
  ulong *puVar57;
  ulong *unaff_x24;
  long lVar58;
  ulong uVar59;
  ulong uVar60;
  ulong unaff_x26;
  ulong uVar61;
  byte *pbVar62;
  ulong uVar63;
  ulong *puVar64;
  char *pcVar65;
  ulong uVar66;
  ulong *puStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong *puStack_328;
  ulong uStack_318;
  ulong *puStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_250;
  byte bStack_248;
  undefined7 uStack_247;
  byte bStack_240;
  undefined7 uStack_23f;
  byte bStack_238;
  undefined7 uStack_237;
  byte bStack_230;
  undefined7 uStack_22f;
  byte bStack_228;
  undefined7 uStack_227;
  byte bStack_220;
  undefined7 uStack_21f;
  byte bStack_218;
  undefined7 uStack_217;
  byte bStack_210;
  undefined7 uStack_20f;
  byte bStack_208;
  undefined7 uStack_207;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  byte bStack_130;
  undefined7 uStack_12f;
  byte bStack_128;
  undefined7 uStack_127;
  byte bStack_120;
  undefined7 uStack_11f;
  byte bStack_118;
  undefined7 uStack_117;
  byte bStack_110;
  undefined7 uStack_10f;
  byte bStack_108;
  undefined7 uStack_107;
  byte bStack_100;
  undefined7 uStack_ff;
  byte bStack_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  puStack_2e8 = (ulong *)0x0;
  uStack_2d8 = 0;
  pcVar53 = param_2;
LAB_101525938:
  do {
    pcVar45 = pcVar53;
    if (pcVar45 == param_2 + param_3 * 0x40) {
LAB_101527314:
      param_1[2] = uStack_2e0;
      param_1[1] = (ulong)puStack_2e8;
      param_1[3] = uStack_2d8;
      *param_1 = 2;
      return;
    }
    pcVar53 = pcVar45 + 0x40;
  } while (*pcVar45 == '\x16');
  func_0x0001004e0914(&uStack_140,pcVar45);
  uVar66 = CONCAT71(uStack_137,bStack_138);
  uVar55 = CONCAT71(uStack_12f,bStack_130);
  uVar51 = CONCAT71(uStack_127,bStack_128);
  if (uStack_140 != 2) {
    uStack_2c8 = CONCAT71(uStack_117,bStack_118);
    uStack_2d0 = CONCAT71(uStack_11f,bStack_120);
    uStack_2b8 = CONCAT71(uStack_107,bStack_108);
    uStack_2c0 = CONCAT71(uStack_10f,bStack_110);
    uStack_2a8 = CONCAT71(uStack_f7,bStack_f8);
    uStack_2b0 = CONCAT71(uStack_ff,bStack_100);
    uStack_2a0 = uStack_f0;
    uVar61 = uStack_140;
    uVar59 = uVar66;
    uVar60 = uVar55;
    uVar46 = uVar51;
    goto LAB_1015273bc;
  }
  if (uVar66 != 0x8000000000000000) {
    if (pcVar45[0x20] == '\x14') {
      pcVar5 = *(char **)(pcVar45 + 0x30);
      lVar58 = *(long *)(pcVar45 + 0x38);
      if (lVar58 == 0) {
        unaff_x26 = 0;
        pcVar45 = pcVar5;
LAB_1015260ac:
        FUN_1087e427c(&uStack_250,0,&UNK_10b22d270,&UNK_10b20a590);
joined_r0x0001015260d8:
        if (uStack_250 != 2) goto LAB_1015261a4;
      }
      else {
        pcVar45 = pcVar5 + 0x20;
        cVar1 = *pcVar5;
        if (cVar1 == '\x10') {
LAB_10152601c:
          uVar59 = 0x8000000000000000;
          uVar60 = extraout_x12;
        }
        else {
          if (cVar1 == '\x11') {
            func_0x0001004e0914(&uStack_140,*(undefined8 *)(pcVar5 + 8));
            uVar60 = extraout_x12_00;
          }
          else {
            if (cVar1 == '\x12') goto LAB_10152601c;
            func_0x0001004e0914(&uStack_140,pcVar5);
            uVar60 = extraout_x12_01;
          }
          if (uStack_140 != 2) {
            uStack_b8 = CONCAT71(uStack_117,bStack_118);
            uStack_c0 = CONCAT71(uStack_11f,bStack_120);
            uStack_a8 = CONCAT71(uStack_107,bStack_108);
            uStack_b0 = CONCAT71(uStack_10f,bStack_110);
            uStack_98 = CONCAT71(uStack_f7,bStack_f8);
            uStack_a0 = CONCAT71(uStack_ff,bStack_100);
            uStack_90 = uStack_f0;
          }
          uVar59 = CONCAT71(uStack_137,bStack_138);
          unaff_x24 = (ulong *)CONCAT71(uStack_12f,bStack_130);
          unaff_x26 = CONCAT71(uStack_127,bStack_128);
          if (uStack_140 != 2) {
            bStack_228 = (byte)uStack_b8;
            uStack_227 = (undefined7)(uStack_b8 >> 8);
            bStack_230 = (byte)uStack_c0;
            uStack_22f = (undefined7)(uStack_c0 >> 8);
            bStack_218 = (byte)uStack_a8;
            uStack_217 = (undefined7)(uStack_a8 >> 8);
            bStack_220 = (byte)uStack_b0;
            uStack_21f = (undefined7)(uStack_b0 >> 8);
            bStack_208 = (byte)uStack_98;
            uStack_207 = (undefined7)(uStack_98 >> 8);
            bStack_210 = (byte)uStack_a0;
            uStack_20f = (undefined7)(uStack_a0 >> 8);
            uStack_200 = uStack_90;
            bStack_248 = bStack_138;
            uStack_247 = uStack_137;
            bStack_240 = bStack_130;
            uStack_23f = uStack_12f;
            bStack_238 = bStack_128;
            uStack_237 = uStack_127;
            uStack_250 = uStack_140;
            goto LAB_1015261a4;
          }
          if (uVar59 == 0x8000000000000001) {
            unaff_x26 = 1;
            goto LAB_1015260ac;
          }
        }
        if (lVar58 == 1) {
          unaff_x26 = 1;
          pcVar65 = pcVar45;
LAB_10152602c:
          FUN_1087e427c(&uStack_140,1,&UNK_10b22d270,&UNK_10b20a590);
          pcVar45 = pcVar65;
          uStack_250 = uStack_140;
          bStack_248 = bStack_138;
          uStack_247 = uStack_137;
          bStack_240 = bStack_130;
          uStack_23f = uStack_12f;
          bStack_238 = bStack_128;
          uStack_237 = uStack_127;
          bStack_230 = bStack_120;
          uStack_22f = uStack_11f;
          bStack_228 = bStack_118;
          uStack_227 = uStack_117;
          bStack_220 = bStack_110;
          uStack_21f = uStack_10f;
          bStack_218 = bStack_108;
          uStack_217 = uStack_107;
          bStack_210 = bStack_100;
          uStack_20f = uStack_ff;
          bStack_208 = bStack_f8;
          uStack_207 = uStack_f7;
          uStack_200 = uStack_f0;
joined_r0x000101526544:
          if ((uVar59 & 0x7fffffffffffffff) != 0) {
            _free(unaff_x24);
          }
          goto joined_r0x0001015260d8;
        }
        pcVar65 = pcVar5 + 0x40;
        cVar1 = pcVar5[0x20];
        if ((cVar1 == '\x10') || (cVar1 == '\x12')) {
          puStack_2f8 = (ulong *)0x8000000000000000;
        }
        else {
          if (cVar1 == '\x11') {
            pcVar45 = *(char **)(pcVar5 + 0x28);
          }
          func_0x00010144491c(&uStack_140,pcVar45);
          puStack_2f8 = (ulong *)CONCAT71(uStack_137,bStack_138);
          uVar60 = CONCAT71(uStack_127,bStack_128);
          if (uStack_140 != 2) {
            unaff_x26 = 2;
            pcVar45 = pcVar65;
            uStack_250 = uStack_140;
            bStack_248 = bStack_138;
            uStack_247 = uStack_137;
            bStack_240 = bStack_130;
            uStack_23f = uStack_12f;
            bStack_238 = bStack_128;
            uStack_237 = uStack_127;
            bStack_230 = bStack_120;
            uStack_22f = uStack_11f;
            bStack_228 = bStack_118;
            uStack_227 = uStack_117;
            bStack_220 = bStack_110;
            uStack_21f = uStack_10f;
            bStack_218 = bStack_108;
            uStack_217 = uStack_107;
            bStack_210 = bStack_100;
            uStack_20f = uStack_ff;
            bStack_208 = bStack_f8;
            uStack_207 = uStack_f7;
            uStack_200 = uStack_f0;
            goto joined_r0x000101526544;
          }
          puStack_300 = (ulong *)CONCAT71(uStack_12f,bStack_130);
          if (puStack_2f8 == (ulong *)0x8000000000000001) {
            unaff_x26 = 2;
            goto LAB_10152602c;
          }
        }
        if (lVar58 == 2) {
          unaff_x26 = 2;
          pcVar45 = pcVar65;
LAB_1015264e8:
          FUN_1087e427c(&uStack_140,2,&UNK_10b22d270,&UNK_10b20a590);
          uStack_200 = uStack_f0;
          bStack_248 = bStack_138;
          uStack_247 = uStack_137;
          bStack_240 = bStack_130;
          uStack_23f = uStack_12f;
          bStack_238 = bStack_128;
          uStack_237 = uStack_127;
          bStack_230 = bStack_120;
          uStack_22f = uStack_11f;
          bStack_228 = bStack_118;
          uStack_227 = uStack_117;
          bStack_220 = bStack_110;
          uStack_21f = uStack_10f;
          bStack_218 = bStack_108;
          uStack_217 = uStack_107;
          bStack_210 = bStack_100;
          uStack_20f = uStack_ff;
          bStack_208 = bStack_f8;
          uStack_207 = uStack_f7;
          uStack_250 = uStack_140;
joined_r0x000101526988:
          uStack_140 = uStack_250;
          if (((ulong)puStack_2f8 & 0x7fffffffffffffff) != 0) {
            _free(puStack_300);
          }
          goto joined_r0x000101526544;
        }
        pcVar45 = pcVar5 + 0x60;
        cVar1 = pcVar5[0x40];
        uStack_318 = uVar60;
        if (cVar1 == '\x10') {
LAB_101526570:
          lVar52 = -0x8000000000000000;
        }
        else {
          if (cVar1 == '\x11') {
            FUN_1004dfff4(&uStack_140,*(undefined8 *)(pcVar5 + 0x48));
            if (uStack_140 != 2) {
              uStack_98 = CONCAT71(uStack_107,bStack_108);
              uStack_a0 = CONCAT71(uStack_10f,bStack_110);
              uStack_88 = CONCAT71(uStack_f7,bStack_f8);
              uStack_90 = CONCAT71(uStack_ff,bStack_100);
              uStack_80 = uStack_f0;
              uStack_a8 = CONCAT71(uStack_117,bStack_118);
              uStack_b0 = CONCAT71(uStack_11f,bStack_120);
            }
            uStack_b8 = CONCAT71(uStack_127,bStack_128);
            uStack_c0 = CONCAT71(uStack_12f,bStack_130);
            lVar52 = CONCAT71(uStack_137,bStack_138);
          }
          else {
            if (cVar1 == '\x12') goto LAB_101526570;
            FUN_1004dfff4(&uStack_140,pcVar65);
            lVar52 = CONCAT71(uStack_137,bStack_138);
            if (uStack_140 == 2) {
              uStack_b8 = CONCAT71(uStack_127,bStack_128);
              uStack_c0 = CONCAT71(uStack_12f,bStack_130);
            }
            else {
              uStack_98 = CONCAT71(uStack_107,bStack_108);
              uStack_a0 = CONCAT71(uStack_10f,bStack_110);
              uStack_88 = CONCAT71(uStack_f7,bStack_f8);
              uStack_90 = CONCAT71(uStack_ff,bStack_100);
              uStack_80 = uStack_f0;
              uStack_b8 = CONCAT71(uStack_127,bStack_128);
              uStack_c0 = CONCAT71(uStack_12f,bStack_130);
              uStack_a8 = CONCAT71(uStack_117,bStack_118);
              uStack_b0 = CONCAT71(uStack_11f,bStack_120);
            }
          }
          if (uStack_140 != 2) {
            bStack_218 = (byte)uStack_98;
            uStack_217 = (undefined7)(uStack_98 >> 8);
            bStack_220 = (byte)uStack_a0;
            uStack_21f = (undefined7)(uStack_a0 >> 8);
            bStack_208 = (byte)uStack_88;
            uStack_207 = (undefined7)(uStack_88 >> 8);
            bStack_210 = (byte)uStack_90;
            uStack_20f = (undefined7)(uStack_90 >> 8);
            bStack_238 = (byte)uStack_b8;
            uStack_237 = (undefined7)(uStack_b8 >> 8);
            bStack_240 = (byte)uStack_c0;
            uStack_23f = (undefined7)(uStack_c0 >> 8);
            bStack_228 = (byte)uStack_a8;
            uStack_227 = (undefined7)(uStack_a8 >> 8);
            bStack_230 = (byte)uStack_b0;
            uStack_22f = (undefined7)(uStack_b0 >> 8);
            unaff_x26 = 3;
            bStack_248 = (byte)lVar52;
            uStack_247 = (undefined7)((ulong)lVar52 >> 8);
            uStack_150 = uStack_80;
            uStack_200 = uStack_80;
            uStack_170 = uStack_a0;
            uStack_168 = uStack_98;
            uStack_180 = uStack_b0;
            uStack_178 = uStack_a8;
            uStack_160 = uStack_90;
            uStack_158 = uStack_88;
            uStack_1e0 = uStack_c0;
            uStack_190 = uStack_c0;
            uStack_1d8 = uStack_b8;
            uStack_188 = uStack_b8;
            uStack_250 = uStack_140;
            goto joined_r0x000101526988;
          }
          uStack_1d8 = uStack_b8;
          uStack_1e0 = uStack_c0;
          if (lVar52 == -0x7fffffffffffffff) {
            unaff_x26 = 3;
            goto LAB_1015264e8;
          }
        }
        bStack_208 = (byte)uStack_1d8;
        uStack_207 = (undefined7)(uStack_1d8 >> 8);
        bStack_210 = (byte)uStack_1e0;
        uStack_20f = (undefined7)(uStack_1e0 >> 8);
        bStack_240 = (byte)unaff_x24;
        uStack_23f = (undefined7)((ulong)unaff_x24 >> 8);
        bStack_238 = (byte)unaff_x26;
        uStack_237 = (undefined7)(unaff_x26 >> 8);
        bStack_230 = (byte)puStack_2f8;
        uStack_22f = (undefined7)((ulong)puStack_2f8 >> 8);
        bStack_228 = (byte)puStack_300;
        uStack_227 = (undefined7)((ulong)puStack_300 >> 8);
        bStack_220 = (byte)uVar60;
        uStack_21f = (undefined7)(uVar60 >> 8);
        bStack_218 = (byte)lVar52;
        uStack_217 = (undefined7)((ulong)lVar52 >> 8);
        uStack_250 = 2;
        bStack_248 = (byte)uVar59;
        uStack_247 = (undefined7)(uVar59 >> 8);
        unaff_x26 = 3;
      }
      uStack_a8 = CONCAT71(uStack_22f,bStack_230);
      uStack_b0 = CONCAT71(uStack_237,bStack_238);
      uStack_98 = CONCAT71(uStack_21f,bStack_220);
      uStack_a0 = CONCAT71(uStack_227,bStack_228);
      uStack_88 = CONCAT71(uStack_20f,bStack_210);
      uStack_90 = CONCAT71(uStack_217,bStack_218);
      uStack_80 = CONCAT71(uStack_207,bStack_208);
      uStack_b8 = CONCAT71(uStack_23f,bStack_240);
      uStack_c0 = CONCAT71(uStack_247,bStack_248);
      if ((pcVar5 + (lVar58 * 0x20 - (long)pcVar45) == (char *)0x0) ||
         (uStack_190 = unaff_x26,
         FUN_1087e427c(&uStack_140,
                       unaff_x26 + ((ulong)(pcVar5 + (lVar58 * 0x20 - (long)pcVar45)) >> 5),
                       &uStack_190,&UNK_10b23a1b0), uStack_140 == 2)) {
        uStack_250 = 2;
      }
      else {
        bStack_228 = bStack_118;
        uStack_227 = uStack_117;
        bStack_230 = bStack_120;
        uStack_22f = uStack_11f;
        bStack_218 = bStack_108;
        uStack_217 = uStack_107;
        bStack_220 = bStack_110;
        uStack_21f = uStack_10f;
        bStack_208 = bStack_f8;
        uStack_207 = uStack_f7;
        bStack_210 = bStack_100;
        uStack_20f = uStack_ff;
        uStack_200 = uStack_f0;
        bStack_248 = bStack_138;
        uStack_247 = uStack_137;
        uStack_250 = uStack_140;
        bStack_238 = bStack_128;
        uStack_237 = uStack_127;
        bStack_240 = bStack_130;
        uStack_23f = uStack_12f;
        FUN_100e0e974(&uStack_c0);
      }
    }
    else if (pcVar45[0x20] == '\x15') {
      lVar58 = *(long *)(pcVar45 + 0x30);
      lVar52 = *(long *)(pcVar45 + 0x38) * 0x40;
      unaff_x26 = 0x8000000000000001;
      uStack_190 = 0x8000000000000001;
      if (*(long *)(pcVar45 + 0x38) == 0) {
        uVar60 = 0;
        puStack_2f8 = (ulong *)0x8000000000000001;
        puVar47 = (ulong *)0x8000000000000001;
        uVar46 = extraout_x13;
        uVar61 = extraout_x14;
        puVar43 = extraout_x16;
        lVar49 = lVar58;
LAB_101526120:
        puVar48 = (ulong *)0x8000000000000000;
        if (puVar47 != (ulong *)0x8000000000000001) {
          puVar48 = puVar47;
        }
        uVar59 = 0x8000000000000000;
        if (unaff_x26 != 0x8000000000000001) {
          uVar59 = unaff_x26;
        }
        uVar63 = 0x8000000000000000;
        if (puStack_2f8 != (ulong *)0x8000000000000001) {
          uStack_1d8 = uStack_180;
          uStack_1e0 = uStack_188;
          uVar63 = (ulong)puStack_2f8;
        }
        bStack_240 = (byte)uVar46;
        uStack_23f = (undefined7)(uVar46 >> 8);
        bStack_238 = (byte)puVar43;
        uStack_237 = (undefined7)((ulong)puVar43 >> 8);
        bStack_230 = (byte)uVar59;
        uStack_22f = (undefined7)(uVar59 >> 8);
        bStack_228 = (byte)uVar61;
        uStack_227 = (undefined7)(uVar61 >> 8);
        bStack_220 = (byte)unaff_x24;
        uStack_21f = (undefined7)((ulong)unaff_x24 >> 8);
        bStack_218 = (byte)uVar63;
        uStack_217 = (undefined7)(uVar63 >> 8);
        bStack_208 = (byte)uStack_1d8;
        uStack_207 = (undefined7)(uStack_1d8 >> 8);
        bStack_210 = (byte)uStack_1e0;
        uStack_20f = (undefined7)(uStack_1e0 >> 8);
        bStack_248 = (byte)puVar48;
        uStack_247 = (undefined7)((ulong)puVar48 >> 8);
        uStack_250 = 2;
        uVar59 = uVar60;
      }
      else {
        lVar56 = 0;
        uVar60 = (lVar52 - 0x40U >> 6) + 1;
        puStack_300 = (ulong *)0x8000000000000001;
        puStack_2f8 = (ulong *)0x8000000000000001;
        uVar59 = 1;
        puStack_328 = (ulong *)0x8000000000000001;
LAB_1015259f4:
        pbVar2 = (byte *)(lVar58 + lVar56);
        pbVar62 = pbVar2 + 0x20;
        bVar7 = *pbVar2;
        if (0xc < bVar7) {
          if (bVar7 == 0xd) {
            plVar4 = *(long **)(lVar58 + lVar56 + 8);
            lVar49 = *(long *)(lVar58 + lVar56 + 0x10);
joined_r0x000101525cc0:
            if (lVar49 == 0x13) {
              if ((*plVar4 != 0x656d616e6b63696e || plVar4[1] != 0x616469646e61635f) ||
                  *(long *)((long)plVar4 + 0xb) != 0x736574616469646e) goto LAB_101525d8c;
LAB_101525d0c:
              uVar44 = 2;
            }
            else {
              if (lVar49 != 0xb) goto LAB_101525d8c;
              if (*plVar4 == 0x7470697263736564 && *(long *)((long)plVar4 + 3) == 0x6e6f697470697263
                 ) {
LAB_101525c94:
                uVar44 = 0;
              }
              else {
                if (*plVar4 != 0x665f6769666e6f63 ||
                    *(long *)((long)plVar4 + 3) != 0x656c69665f676966) goto LAB_101525d8c;
LAB_101525aa0:
                uVar44 = 1;
              }
            }
            goto LAB_101525d90;
          }
          if (bVar7 == 0xe) {
            pcVar45 = *(char **)(lVar58 + 0x10 + lVar56);
            lVar49 = *(long *)(lVar58 + 0x18 + lVar56);
joined_r0x000101525bfc:
            if (lVar49 == 0x13) {
              if (((((*pcVar45 == 'n') && (pcVar45[1] == 'i')) && (pcVar45[2] == 'c')) &&
                  (((pcVar45[3] == 'k' && (pcVar45[4] == 'n')) &&
                   ((pcVar45[5] == 'a' && ((pcVar45[6] == 'm' && (pcVar45[7] == 'e')))))))) &&
                 (((pcVar45[8] == '_' &&
                   ((((pcVar45[9] == 'c' && (pcVar45[10] == 'a')) && (pcVar45[0xb] == 'n')) &&
                    ((pcVar45[0xc] == 'd' && (pcVar45[0xd] == 'i')))))) &&
                  ((((pcVar45[0xe] == 'd' && ((pcVar45[0xf] == 'a' && (pcVar45[0x10] == 't')))) &&
                    (pcVar45[0x11] == 'e')) && (pcVar45[0x12] == 's')))))) goto LAB_101525d0c;
            }
            else if (lVar49 == 0xb) {
              if (*pcVar45 == 'c') {
                if (((((((pcVar45[1] == 'o') && (pcVar45[2] == 'n')) && (pcVar45[3] == 'f')) &&
                      ((pcVar45[4] == 'i' && (pcVar45[5] == 'g')))) &&
                     ((pcVar45[6] == '_' && ((pcVar45[7] == 'f' && (pcVar45[8] == 'i')))))) &&
                    (pcVar45[9] == 'l')) && (pcVar45[10] == 'e')) goto LAB_101525aa0;
              }
              else if (((((*pcVar45 == 'd') && (pcVar45[1] == 'e')) && (pcVar45[2] == 's')) &&
                       (((pcVar45[3] == 'c' && (pcVar45[4] == 'r')) &&
                        ((pcVar45[5] == 'i' && ((pcVar45[6] == 'p' && (pcVar45[7] == 't')))))))) &&
                      ((pcVar45[8] == 'i' && ((pcVar45[9] == 'o' && (pcVar45[10] == 'n'))))))
              goto LAB_101525c94;
            }
LAB_101525d8c:
            uVar44 = 3;
            goto LAB_101525d90;
          }
          if (bVar7 == 0xf) {
            pcVar45 = *(char **)(lVar58 + 8 + lVar56);
            lVar49 = *(long *)(lVar58 + 0x10 + lVar56);
            goto joined_r0x000101525bfc;
          }
LAB_101525f80:
          FUN_108855bf0(&uStack_140,pbVar2,&uStack_c0,&UNK_10b2150e8);
          uVar44 = (uint)bStack_138;
          puVar47 = puStack_328;
          uVar63 = uStack_f0;
          bVar7 = bStack_120;
          uVar24 = uStack_11f;
          bVar25 = bStack_118;
          uVar26 = uStack_117;
          bVar27 = bStack_110;
          uVar28 = uStack_10f;
          bVar29 = bStack_108;
          uVar30 = uStack_107;
          bVar31 = bStack_100;
          uVar32 = uStack_ff;
          bVar33 = bStack_f8;
          uVar34 = uStack_f7;
          uVar61 = uStack_188;
          uVar46 = uStack_180;
          uVar3 = uStack_140;
          bVar35 = bStack_138;
          uVar36 = uStack_137;
          bVar37 = bStack_130;
          uVar38 = uStack_12f;
          bVar39 = bStack_128;
          uVar40 = uStack_127;
          if (uStack_140 == 2) goto LAB_101525d90;
          goto joined_r0x000101525fec;
        }
        if (bVar7 == 1) {
          uVar44 = (uint)*(byte *)(lVar58 + lVar56 + 1);
          if (2 < uVar44) {
            uVar44 = 3;
          }
        }
        else {
          if (bVar7 != 4) {
            if (bVar7 != 0xc) goto LAB_101525f80;
            plVar4 = *(long **)(lVar58 + lVar56 + 0x10);
            lVar49 = *(long *)(lVar58 + lVar56 + 0x18);
            goto joined_r0x000101525cc0;
          }
          uVar46 = *(ulong *)(lVar58 + lVar56 + 8);
          if (2 < uVar46) {
            uVar46 = 3;
          }
          uVar44 = (uint)uVar46;
        }
LAB_101525d90:
        uVar44 = uVar44 & 0xff;
        uVar46 = uStack_338;
        if (uVar44 < 2) {
          if (uVar44 == 0) {
            if (puStack_300 == (ulong *)0x8000000000000001) {
              bVar7 = *pbVar62;
              puStack_300 = (ulong *)0x8000000000000000;
              puVar47 = puStack_340;
              if (bVar7 != 0x10) {
                if (bVar7 == 0x11) {
                  func_0x0001004e0914(&uStack_140,*(undefined8 *)(lVar58 + lVar56 + 0x28));
                }
                else {
                  if (bVar7 == 0x12) goto LAB_1015259dc;
                  func_0x0001004e0914(&uStack_140,pbVar62);
                }
                if (uStack_140 != 2) {
                  uStack_b8 = CONCAT71(uStack_117,bStack_118);
                  uStack_c0 = CONCAT71(uStack_11f,bStack_120);
                  uStack_a8 = CONCAT71(uStack_107,bStack_108);
                  uStack_b0 = CONCAT71(uStack_10f,bStack_110);
                  uStack_98 = CONCAT71(uStack_f7,bStack_f8);
                  uStack_a0 = CONCAT71(uStack_ff,bStack_100);
                  uStack_90 = uStack_f0;
                }
                puStack_300 = (ulong *)CONCAT71(uStack_137,bStack_138);
                uStack_318 = CONCAT71(uStack_12f,bStack_130);
                puVar47 = (ulong *)CONCAT71(uStack_127,bStack_128);
                if (uStack_140 != 2) {
                  bStack_228 = (byte)uStack_b8;
                  uStack_227 = (undefined7)(uStack_b8 >> 8);
                  bStack_230 = (byte)uStack_c0;
                  uStack_22f = (undefined7)(uStack_c0 >> 8);
                  bStack_218 = (byte)uStack_a8;
                  uStack_217 = (undefined7)(uStack_a8 >> 8);
                  bStack_220 = (byte)uStack_b0;
                  uStack_21f = (undefined7)(uStack_b0 >> 8);
                  bStack_208 = (byte)uStack_98;
                  uStack_207 = (undefined7)(uStack_98 >> 8);
                  bStack_210 = (byte)uStack_a0;
                  uStack_20f = (undefined7)(uStack_a0 >> 8);
                  puStack_300 = (ulong *)0x8000000000000001;
                  puVar47 = puStack_328;
                  uVar63 = uStack_90;
                  bVar7 = bStack_230;
                  uVar24 = uStack_22f;
                  bVar25 = bStack_228;
                  uVar26 = uStack_227;
                  bVar27 = bStack_220;
                  uVar28 = uStack_21f;
                  bVar29 = bStack_218;
                  uVar30 = uStack_217;
                  bVar31 = bStack_210;
                  uVar32 = uStack_20f;
                  bVar33 = bStack_208;
                  uVar34 = uStack_207;
                  uVar61 = uStack_188;
                  uVar46 = uStack_180;
                  uVar3 = uStack_140;
                  bVar35 = bStack_138;
                  uVar36 = uStack_137;
                  bVar37 = bStack_130;
                  uVar38 = uStack_12f;
                  bVar39 = bStack_128;
                  uVar40 = uStack_127;
                  goto joined_r0x000101525fec;
                }
              }
LAB_1015259dc:
              puStack_340 = puVar47;
              uStack_330 = uStack_318;
              goto LAB_1015259e4;
            }
            uStack_190 = (ulong)puStack_328;
            FUN_1087e4364(&uStack_140,&UNK_108ca155d,0xb);
            puVar47 = (ulong *)uStack_190;
            uVar63 = uStack_f0;
            bVar7 = bStack_120;
            uVar24 = uStack_11f;
            bVar25 = bStack_118;
            uVar26 = uStack_117;
            bVar27 = bStack_110;
            uVar28 = uStack_10f;
            bVar29 = bStack_108;
            uVar30 = uStack_107;
            bVar31 = bStack_100;
            uVar32 = uStack_ff;
            bVar33 = bStack_f8;
            uVar34 = uStack_f7;
            uVar61 = uStack_188;
            uVar46 = uStack_180;
            uVar3 = uStack_140;
            bVar35 = bStack_138;
            uVar36 = uStack_137;
            bVar37 = bStack_130;
            uVar38 = uStack_12f;
            bVar39 = bStack_128;
            uVar40 = uStack_127;
joined_r0x000101525fec:
            uStack_237 = uVar40;
            bStack_238 = bVar39;
            uStack_23f = uVar38;
            bStack_240 = bVar37;
            uStack_247 = uVar36;
            bStack_248 = bVar35;
            uStack_250 = uVar3;
            uStack_207 = uVar34;
            bStack_208 = bVar33;
            uStack_20f = uVar32;
            bStack_210 = bVar31;
            uStack_217 = uVar30;
            bStack_218 = bVar29;
            uStack_21f = uVar28;
            bStack_220 = bVar27;
            uStack_227 = uVar26;
            bStack_228 = bVar25;
            uStack_22f = uVar24;
            bStack_230 = bVar7;
            uStack_200 = uVar63;
            uStack_190 = (ulong)puVar47;
            uStack_188 = uVar61;
            uStack_180 = uVar46;
            uStack_140 = uStack_250;
            bStack_138 = bStack_248;
            uStack_137 = uStack_247;
            bStack_130 = bStack_240;
            uStack_12f = uStack_23f;
            bStack_128 = bStack_238;
            uStack_127 = uStack_237;
            if (puStack_2f8 != (ulong *)0x8000000000000001) goto joined_r0x0001015271d8;
            goto LAB_101526798;
          }
          if (unaff_x26 != 0x8000000000000001) {
            uStack_190 = (ulong)puStack_328;
            FUN_1087e4364(&uStack_140,&UNK_108cabe70,0xb);
            puVar47 = (ulong *)uStack_190;
            uVar63 = uStack_f0;
            bVar7 = bStack_120;
            uVar24 = uStack_11f;
            bVar25 = bStack_118;
            uVar26 = uStack_117;
            bVar27 = bStack_110;
            uVar28 = uStack_10f;
            bVar29 = bStack_108;
            uVar30 = uStack_107;
            bVar31 = bStack_100;
            uVar32 = uStack_ff;
            bVar33 = bStack_f8;
            uVar34 = uStack_f7;
            uVar61 = uStack_188;
            uVar46 = uStack_180;
            uVar3 = uStack_140;
            bVar35 = bStack_138;
            uVar36 = uStack_137;
            bVar37 = bStack_130;
            uVar38 = uStack_12f;
            bVar39 = bStack_128;
            uVar40 = uStack_127;
            goto joined_r0x000101525fec;
          }
          bVar7 = *pbVar62;
          if (bVar7 == 0x10) {
LAB_101525e60:
            unaff_x26 = 0x8000000000000000;
            unaff_x24 = (ulong *)CONCAT71(uStack_127,bStack_128);
            uVar46 = CONCAT71(uStack_12f,bStack_130);
          }
          else {
            if (bVar7 == 0x11) {
              pbVar62 = *(byte **)(lVar58 + lVar56 + 0x28);
            }
            else if (bVar7 == 0x12) goto LAB_101525e60;
            func_0x00010144491c(&uStack_140,pbVar62);
            unaff_x26 = CONCAT71(uStack_137,bStack_138);
            unaff_x24 = (ulong *)CONCAT71(uStack_127,bStack_128);
            uVar46 = CONCAT71(uStack_12f,bStack_130);
            if (uStack_140 != 2) {
              unaff_x26 = 0x8000000000000001;
              puVar47 = puStack_328;
              uVar63 = uStack_f0;
              bVar7 = bStack_120;
              uVar24 = uStack_11f;
              bVar25 = bStack_118;
              uVar26 = uStack_117;
              bVar27 = bStack_110;
              uVar28 = uStack_10f;
              bVar29 = bStack_108;
              uVar30 = uStack_107;
              bVar31 = bStack_100;
              uVar32 = uStack_ff;
              bVar33 = bStack_f8;
              uVar34 = uStack_f7;
              uVar61 = uStack_188;
              uVar46 = uStack_180;
              uVar3 = uStack_140;
              bVar35 = bStack_138;
              uVar36 = uStack_137;
              bVar37 = bStack_130;
              uVar38 = uStack_12f;
              bVar39 = bStack_128;
              uVar40 = uStack_127;
              goto joined_r0x000101525fec;
            }
          }
LAB_1015259e4:
          uStack_338 = uVar46;
          uVar59 = uVar59 + 1;
          lVar56 = lVar56 + 0x40;
          puVar47 = puStack_300;
          uVar46 = uStack_330;
          uVar61 = uStack_338;
          puVar43 = puStack_340;
          lVar49 = lVar58 + lVar52;
          if (lVar52 - lVar56 == 0) goto LAB_101526120;
          goto LAB_1015259f4;
        }
        if (uVar44 != 2) goto LAB_1015259e4;
        if (puStack_2f8 == (ulong *)0x8000000000000001) {
          bVar7 = *pbVar62;
          puStack_2f8 = (ulong *)0x8000000000000000;
          if (bVar7 != 0x10) {
            if (bVar7 == 0x11) {
              FUN_1004dfff4(&uStack_140,*(undefined8 *)(lVar58 + lVar56 + 0x28));
            }
            else {
              if (bVar7 == 0x12) goto LAB_101525f64;
              FUN_1004dfff4(&uStack_140,pbVar62);
            }
            puStack_2f8 = (ulong *)CONCAT71(uStack_137,bStack_138);
            if (uStack_140 != 2) {
              uStack_98 = CONCAT71(uStack_107,bStack_108);
              uStack_a0 = CONCAT71(uStack_10f,bStack_110);
              uStack_88 = CONCAT71(uStack_f7,bStack_f8);
              uStack_90 = CONCAT71(uStack_ff,bStack_100);
              uStack_80 = uStack_f0;
              uStack_1e8 = CONCAT71(uStack_127,bStack_128);
              uStack_1f0 = CONCAT71(uStack_12f,bStack_130);
              uStack_a8 = CONCAT71(uStack_117,bStack_118);
              uStack_b0 = CONCAT71(uStack_11f,bStack_120);
              bStack_218 = bStack_108;
              uStack_217 = uStack_107;
              bStack_220 = bStack_110;
              uStack_21f = uStack_10f;
              bStack_208 = bStack_f8;
              uStack_207 = uStack_f7;
              bStack_210 = bStack_100;
              uStack_20f = uStack_ff;
              uStack_200 = uStack_f0;
              bStack_238 = bStack_128;
              uStack_237 = uStack_127;
              bStack_240 = bStack_130;
              uStack_23f = uStack_12f;
              bStack_228 = bStack_118;
              uStack_227 = uStack_117;
              bStack_230 = bStack_120;
              uStack_22f = uStack_11f;
              uStack_250 = uStack_140;
              bStack_248 = bStack_138;
              uStack_247 = uStack_137;
              uStack_c0 = uStack_1f0;
              uStack_b8 = uStack_1e8;
              goto LAB_101526798;
            }
            uStack_b8 = CONCAT71(uStack_127,bStack_128);
            uStack_c0 = CONCAT71(uStack_12f,bStack_130);
          }
LAB_101525f64:
          uStack_1e8 = uStack_b8;
          uStack_1f0 = uStack_c0;
          puStack_328 = puStack_2f8;
          uStack_188 = uStack_1f0;
          uStack_180 = uStack_1e8;
          goto LAB_1015259e4;
        }
        uStack_190 = (ulong)puStack_328;
        FUN_1087e4364(&uStack_140,&UNK_108cabe7b,0x13);
        uStack_200 = uStack_f0;
        uStack_250 = uStack_140;
        bStack_248 = bStack_138;
        uStack_247 = uStack_137;
        bStack_240 = bStack_130;
        uStack_23f = uStack_12f;
        bStack_238 = bStack_128;
        uStack_237 = uStack_127;
        bStack_230 = bStack_120;
        uStack_22f = uStack_11f;
        bStack_228 = bStack_118;
        uStack_227 = uStack_117;
        bStack_220 = bStack_110;
        uStack_21f = uStack_10f;
        bStack_218 = bStack_108;
        uStack_217 = uStack_107;
        bStack_210 = bStack_100;
        uStack_20f = uStack_ff;
        bStack_208 = bStack_f8;
        uStack_207 = uStack_f7;
        uVar61 = uStack_188;
        uVar46 = uStack_180;
joined_r0x0001015271d8:
        uStack_188 = uVar61;
        uStack_180 = uVar46;
        uStack_140 = uStack_250;
        bStack_138 = bStack_248;
        uStack_137 = uStack_247;
        bStack_130 = bStack_240;
        uStack_12f = uStack_23f;
        bStack_128 = bStack_238;
        uStack_127 = uStack_237;
        if (puStack_2f8 != (ulong *)0x8000000000000000) {
          if (uVar46 != 0) {
            unaff_x24 = (ulong *)(uVar61 + 8);
            do {
              if (unaff_x24[-1] != 0) {
                _free(*unaff_x24);
              }
              unaff_x24 = unaff_x24 + 3;
              uVar46 = uVar46 - 1;
            } while (uVar46 != 0);
          }
          if (puStack_2f8 != (ulong *)0x0) {
            _free(uVar61);
          }
        }
LAB_101526798:
        if ((-0x7fffffffffffffff < (long)unaff_x26) && (unaff_x26 != 0)) {
          _free(uStack_338);
        }
        if ((-0x7fffffffffffffff < (long)puStack_300) && (puStack_300 != (ulong *)0x0)) {
          _free(uStack_330);
        }
        if (uStack_250 != 2) goto LAB_1015261a4;
        lVar49 = lVar58 + lVar56 + 0x40;
      }
      uStack_a8 = CONCAT71(uStack_22f,bStack_230);
      uStack_b0 = CONCAT71(uStack_237,bStack_238);
      uStack_98 = CONCAT71(uStack_21f,bStack_220);
      uStack_a0 = CONCAT71(uStack_227,bStack_228);
      uStack_88 = CONCAT71(uStack_20f,bStack_210);
      uStack_90 = CONCAT71(uStack_217,bStack_218);
      uStack_80 = CONCAT71(uStack_207,bStack_208);
      uStack_b8 = CONCAT71(uStack_23f,bStack_240);
      uStack_c0 = CONCAT71(uStack_247,bStack_248);
      uVar60 = (lVar58 + lVar52) - lVar49;
      if ((uVar60 == 0) ||
         (uStack_190 = uVar59,
         FUN_1087e427c(&uStack_140,uVar59 + (uVar60 >> 6),&uStack_190,&UNK_10b23a190),
         uStack_140 == 2)) {
        uStack_250 = 2;
      }
      else {
        bStack_228 = bStack_118;
        uStack_227 = uStack_117;
        bStack_230 = bStack_120;
        uStack_22f = uStack_11f;
        bStack_218 = bStack_108;
        uStack_217 = uStack_107;
        bStack_220 = bStack_110;
        uStack_21f = uStack_10f;
        bStack_208 = bStack_f8;
        uStack_207 = uStack_f7;
        bStack_210 = bStack_100;
        uStack_20f = uStack_ff;
        uStack_200 = uStack_f0;
        bStack_248 = bStack_138;
        uStack_247 = uStack_137;
        uStack_250 = uStack_140;
        bStack_238 = bStack_128;
        uStack_237 = uStack_127;
        bStack_240 = bStack_130;
        uStack_23f = uStack_12f;
        FUN_100e0e974(&uStack_c0);
      }
    }
    else {
      FUN_108855bf0(&uStack_140,pcVar45 + 0x20,&uStack_c0,&UNK_10b213d88);
      bStack_228 = bStack_118;
      uStack_227 = uStack_117;
      bStack_230 = bStack_120;
      uStack_22f = uStack_11f;
      bStack_218 = bStack_108;
      uStack_217 = uStack_107;
      bStack_220 = bStack_110;
      uStack_21f = uStack_10f;
      bStack_208 = bStack_f8;
      uStack_207 = uStack_f7;
      bStack_210 = bStack_100;
      uStack_20f = uStack_ff;
      uStack_200 = uStack_f0;
      bStack_248 = bStack_138;
      uStack_247 = uStack_137;
      bStack_238 = bStack_128;
      uStack_237 = uStack_127;
      bStack_240 = bStack_130;
      uStack_23f = uStack_12f;
      uStack_250 = uStack_140;
    }
LAB_1015261a4:
    uVar38 = uStack_207;
    bVar37 = bStack_208;
    uVar36 = uStack_20f;
    bVar35 = bStack_210;
    uVar34 = uStack_217;
    bVar33 = bStack_218;
    uVar32 = uStack_21f;
    bVar31 = bStack_220;
    uVar30 = uStack_227;
    bVar29 = bStack_228;
    uVar28 = uStack_22f;
    bVar27 = bStack_230;
    uVar26 = uStack_237;
    bVar25 = bStack_238;
    uVar24 = uStack_23f;
    bVar7 = bStack_240;
    uVar61 = uStack_250;
    if (uStack_250 != 2) {
      uVar59 = CONCAT71(uStack_247,bStack_248);
      uVar60 = CONCAT71(uStack_23f,bStack_240);
      uVar46 = CONCAT71(uStack_237,bStack_238);
      uStack_2c8 = CONCAT71(uStack_227,bStack_228);
      uStack_2d0 = CONCAT71(uStack_22f,bStack_230);
      uStack_2b8 = CONCAT71(uStack_217,bStack_218);
      uStack_2c0 = CONCAT71(uStack_21f,bStack_220);
      uStack_2a8 = CONCAT71(uStack_207,bStack_208);
      uStack_2b0 = CONCAT71(uStack_20f,bStack_210);
      uStack_2a0 = uStack_200;
      if (uVar66 != 0) {
        _free(uVar55);
      }
LAB_1015273bc:
      param_1[5] = uStack_2c8;
      param_1[4] = uStack_2d0;
      param_1[7] = uStack_2b8;
      param_1[6] = uStack_2c0;
      param_1[9] = uStack_2a8;
      param_1[8] = uStack_2b0;
      param_1[10] = uStack_2a0;
      *param_1 = uVar61;
      param_1[1] = uVar59;
      param_1[2] = uVar60;
      param_1[3] = uVar46;
      if (puStack_2e8 == (ulong *)0x0) {
        uStack_2d8 = 0;
      }
      else {
        bStack_138 = 0;
        uStack_137 = 0;
        bStack_130 = (byte)puStack_2e8;
        uStack_12f = (undefined7)((ulong)puStack_2e8 >> 8);
        bStack_128 = (byte)uStack_2e0;
        uStack_127 = (undefined7)(uStack_2e0 >> 8);
        bStack_118 = 0;
        uStack_117 = 0;
        bStack_110 = bStack_130;
        uStack_10f = uStack_12f;
        bStack_108 = bStack_128;
        uStack_107 = uStack_127;
      }
      bStack_120 = puStack_2e8 != (ulong *)0x0;
      uStack_140 = (ulong)bStack_120;
      uStack_11f = 0;
      bStack_100 = (byte)uStack_2d8;
      uStack_ff = (undefined7)(uStack_2d8 >> 8);
      FUN_100f3b678(&uStack_250,&uStack_140);
      uVar66 = uStack_250;
      while (uVar66 != 0) {
        lVar58 = CONCAT71(uStack_23f,bStack_240);
        lVar52 = uVar66 + lVar58 * 0x18;
        uStack_250 = uVar66;
        if (*(long *)(lVar52 + 8) != 0) {
          _free(*(undefined8 *)(lVar52 + 0x10));
        }
        FUN_100e0e974(uVar66 + lVar58 * 0x48 + 0x110);
        FUN_100f3b678(&uStack_250,&uStack_140);
        uVar66 = uStack_250;
      }
      return;
    }
    uVar60 = CONCAT71(uStack_247,bStack_248);
    uVar46 = CONCAT71(uStack_23f,bStack_240);
    uStack_2c8 = CONCAT71(uStack_22f,bStack_230);
    uStack_2d0 = CONCAT71(uStack_237,bStack_238);
    uStack_2b8 = CONCAT71(uStack_21f,bStack_220);
    uStack_2c0 = CONCAT71(uStack_227,bStack_228);
    uStack_2a8 = CONCAT71(uStack_20f,bStack_210);
    uStack_2b0 = CONCAT71(uStack_217,bStack_218);
    uStack_2a0 = CONCAT71(uStack_207,bStack_208);
    uVar61 = uVar55;
    uVar59 = uVar51;
    if (uVar66 == 0x8000000000000001) goto LAB_1015273bc;
    if (puStack_2e8 != (ulong *)0x0) {
      uStack_318 = uStack_2e0;
      puStack_300 = puStack_2e8;
      puStack_2f8 = puStack_2e8;
      uVar59 = uStack_2e0;
      do {
        uVar8 = *(ushort *)((long)puStack_2f8 + 0x42a);
        uVar63 = (ulong)uVar8;
        puVar47 = puStack_2f8 + 1;
        lVar58 = uVar63 * 0x18;
        uVar61 = 0xffffffffffffffff;
        puVar48 = puVar47;
        puVar43 = puStack_2f8 + 0x19;
        do {
          puVar57 = puVar43;
          unaff_x26 = uVar63;
          if (lVar58 == 0) goto LAB_101526290;
          uVar6 = puVar48[2];
          uVar3 = uVar51;
          if (uVar6 <= uVar51) {
            uVar3 = uVar6;
          }
          iVar42 = _memcmp(uVar55,puVar48[1],uVar3);
          lVar52 = uVar51 - uVar6;
          if (iVar42 != 0) {
            lVar52 = (long)iVar42;
          }
          cVar1 = 0 < lVar52;
          if (lVar52 < 0) {
            cVar1 = -1;
          }
          lVar58 = lVar58 + -0x18;
          puVar43 = puVar57 + 9;
          uVar61 = uVar61 + 1;
          puVar48 = puVar48 + 3;
        } while (cVar1 == '\x01');
        unaff_x26 = uVar61;
        if (cVar1 == '\0') {
          if (uVar66 != 0) {
            _free(uVar55);
          }
          uVar66 = *puVar43;
          uVar51 = puVar57[10];
          unaff_x26 = puVar57[0xc];
          uVar59 = puVar57[0xd];
          uVar55 = puVar57[0xf];
          unaff_x24 = (ulong *)puVar57[0x10];
          uVar61 = puVar57[0x11];
          puVar57[10] = uVar46;
          *puVar43 = uVar60;
          puVar57[0x11] = uStack_2a0;
          puVar57[0xe] = uStack_2b8;
          puVar57[0xd] = uStack_2c0;
          puVar57[0x10] = uStack_2a8;
          puVar57[0xf] = uStack_2b0;
          puVar57[0xc] = uStack_2c8;
          puVar57[0xb] = uStack_2d0;
          if (uVar66 != 0x8000000000000000) {
            if (uVar66 == 0x8000000000000001) goto LAB_101525938;
            if (uVar66 != 0) {
              _free(uVar51);
            }
          }
          if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
            _free(uVar59);
          }
          if (uVar55 != 0x8000000000000000) {
            if (uVar61 != 0) {
              puVar47 = unaff_x24 + 1;
              do {
                if (puVar47[-1] != 0) {
                  _free(*puVar47);
                }
                puVar47 = puVar47 + 3;
                uVar61 = uVar61 - 1;
              } while (uVar61 != 0);
            }
            if (uVar55 != 0) {
              _free(unaff_x24);
            }
          }
          goto LAB_101525938;
        }
LAB_101526290:
        uVar23 = uStack_ff;
        bVar22 = bStack_100;
        uVar21 = uStack_107;
        bVar20 = bStack_108;
        uVar19 = uStack_10f;
        bVar18 = bStack_110;
        uVar17 = uStack_117;
        bVar16 = bStack_118;
        uVar15 = uStack_11f;
        bVar14 = bStack_120;
        uVar13 = uStack_127;
        bVar12 = bStack_128;
        uVar11 = uStack_12f;
        bVar10 = bStack_130;
        uVar40 = uStack_137;
        bVar39 = bStack_138;
        if (uVar59 == 0) goto LAB_1015265a4;
        puStack_2f8 = (ulong *)puStack_2f8[unaff_x26 + 0x86];
        uVar59 = uVar59 - 1;
      } while( true );
    }
    puStack_2e8 = (ulong *)_malloc(0x430);
    if (puStack_2e8 == (ulong *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x430);
      goto LAB_101527554;
    }
    uStack_2e0 = 0;
    *(undefined2 *)((long)puStack_2e8 + 0x42a) = 1;
    *puStack_2e8 = 0;
    puStack_2e8[1] = uVar66;
    puStack_2e8[2] = uVar55;
    puStack_2e8[3] = uVar51;
    puStack_2e8[0x27] = uStack_2b8;
    puStack_2e8[0x26] = uStack_2c0;
    puStack_2e8[0x29] = uStack_2a8;
    puStack_2e8[0x28] = uStack_2b0;
    puStack_2e8[0x2a] = uStack_2a0;
    puStack_2e8[0x23] = uVar46;
    puStack_2e8[0x22] = uVar60;
    puStack_2e8[0x25] = uStack_2c8;
    puStack_2e8[0x24] = uStack_2d0;
    goto LAB_101526378;
  }
  goto LAB_101527314;
LAB_1015265a4:
  bStack_120 = bVar29;
  bVar29 = bStack_120;
  uStack_11f = uVar30;
  uVar30 = uStack_11f;
  bStack_118 = bVar31;
  bVar31 = bStack_118;
  uStack_117 = uVar32;
  uVar32 = uStack_117;
  bStack_110 = bVar33;
  bVar33 = bStack_110;
  uStack_10f = uVar34;
  uVar34 = uStack_10f;
  bStack_108 = bVar35;
  bVar35 = bStack_108;
  uStack_107 = uVar36;
  uVar36 = uStack_107;
  bStack_100 = bVar37;
  bVar37 = bStack_100;
  uStack_ff = uVar38;
  uVar38 = uStack_ff;
  bStack_138 = bVar7;
  bVar7 = bStack_138;
  uStack_137 = uVar24;
  uVar24 = uStack_137;
  bStack_130 = bVar25;
  bVar25 = bStack_130;
  uStack_12f = uVar26;
  uVar26 = uStack_12f;
  bStack_128 = bVar27;
  bVar27 = bStack_128;
  uStack_127 = uVar28;
  uVar28 = uStack_127;
  if (10 < uVar8) {
    if (unaff_x26 < 5) {
      iVar42 = 0;
      uVar59 = 4;
    }
    else if (unaff_x26 == 5) {
      iVar42 = 0;
      uVar59 = 5;
    }
    else if (unaff_x26 == 6) {
      unaff_x26 = 0;
      iVar42 = 1;
      uVar59 = 5;
    }
    else {
      unaff_x26 = unaff_x26 - 7;
      iVar42 = 1;
      uVar59 = 6;
    }
    bStack_138 = bVar39;
    uStack_137 = uVar40;
    bStack_130 = bVar10;
    uStack_12f = uVar11;
    bStack_128 = bVar12;
    uStack_127 = uVar13;
    bStack_120 = bVar14;
    uStack_11f = uVar15;
    bStack_118 = bVar16;
    uStack_117 = uVar17;
    bStack_110 = bVar18;
    uStack_10f = uVar19;
    bStack_108 = bVar20;
    uStack_107 = uVar21;
    bStack_100 = bVar22;
    uStack_ff = uVar23;
    puVar43 = (ulong *)_malloc(0x430);
    if (puVar43 == (ulong *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x430);
    }
    else {
      puStack_340 = (ulong *)CONCAT44(puStack_340._4_4_,iVar42);
      *puVar43 = 0;
      uVar46 = (ulong)*(ushort *)((long)puStack_2f8 + 0x42a) + ~uVar59;
      *(short *)((long)puVar43 + 0x42a) = (short)uVar46;
      puVar48 = puVar47 + uVar59 * 3;
      uStack_330 = *puVar48;
      puStack_328 = (ulong *)puVar48[1];
      uStack_338 = puVar48[2];
      puVar48 = puStack_2f8 + uVar59 * 9 + 0x22;
      bStack_128 = (byte)puVar48[3];
      uStack_127 = (undefined7)(puVar48[3] >> 8);
      bStack_130 = (byte)puVar48[2];
      uStack_12f = (undefined7)(puVar48[2] >> 8);
      bStack_118 = (byte)puVar48[5];
      uStack_117 = (undefined7)(puVar48[5] >> 8);
      bStack_120 = (byte)puVar48[4];
      uStack_11f = (undefined7)(puVar48[4] >> 8);
      bStack_108 = (byte)puVar48[7];
      uStack_107 = (undefined7)(puVar48[7] >> 8);
      bStack_110 = (byte)puVar48[6];
      uStack_10f = (undefined7)(puVar48[6] >> 8);
      bStack_100 = (byte)puVar48[8];
      uStack_ff = (undefined7)(puVar48[8] >> 8);
      uStack_140 = *puVar48;
      bStack_138 = (byte)puVar48[1];
      uStack_137 = (undefined7)(puVar48[1] >> 8);
      if (uVar46 < 0xc) {
        _memcpy(puVar43 + 1,puVar47 + (uVar59 + 1) * 3,uVar46 * 0x18);
        _memcpy(puVar43 + 0x22,puStack_2f8 + (uVar59 + 1) * 9 + 0x22,uVar46 * 0x48);
        *(short *)((long)puStack_2f8 + 0x42a) = (short)uVar59;
        bStack_238 = (byte)puVar48[3];
        uStack_237 = (undefined7)(puVar48[3] >> 8);
        bStack_240 = (byte)puVar48[2];
        uStack_23f = (undefined7)(puVar48[2] >> 8);
        bStack_228 = (byte)puVar48[5];
        uStack_227 = (undefined7)(puVar48[5] >> 8);
        bStack_230 = (byte)puVar48[4];
        uStack_22f = (undefined7)(puVar48[4] >> 8);
        bStack_218 = (byte)puVar48[7];
        uStack_217 = (undefined7)(puVar48[7] >> 8);
        bStack_220 = (byte)puVar48[6];
        uStack_21f = (undefined7)(puVar48[6] >> 8);
        bStack_210 = (byte)puVar48[8];
        uStack_20f = (undefined7)(puVar48[8] >> 8);
        uStack_250 = *puVar48;
        bStack_248 = (byte)puVar48[1];
        uStack_247 = (undefined7)(puVar48[1] >> 8);
        puVar47 = puVar43;
        if (iVar42 == 0) {
          puVar47 = puStack_2f8;
        }
        uVar8 = *(ushort *)((long)puVar47 + 0x42a);
        puVar48 = puVar47 + unaff_x26 * 3 + 1;
        unaff_x24 = (ulong *)(uVar8 - unaff_x26);
        if (unaff_x26 <= uVar8 && unaff_x24 != (ulong *)0x0) {
          _memmove(puVar47 + unaff_x26 * 3 + 4,puVar48,(long)unaff_x24 * 0x18);
          uStack_140 = uVar60;
          bStack_138 = bVar7;
          uStack_137 = uVar24;
          bStack_130 = bVar25;
          uStack_12f = uVar26;
          bStack_128 = bVar27;
          uStack_127 = uVar28;
          bStack_120 = bVar29;
          uStack_11f = uVar30;
          bStack_118 = bVar31;
          uStack_117 = uVar32;
          bStack_110 = bVar33;
          uStack_10f = uVar34;
          bStack_108 = bVar35;
          uStack_107 = uVar36;
          bStack_100 = bVar37;
          uStack_ff = uVar38;
          _memmove(puVar47 + unaff_x26 * 9 + 0x2b,puVar47 + unaff_x26 * 9 + 0x22,
                   (long)unaff_x24 * 0x48);
          uVar60 = uStack_140;
          bVar7 = bStack_138;
          uVar24 = uStack_137;
          bVar25 = bStack_130;
          uVar26 = uStack_12f;
          bVar27 = bStack_128;
          uVar28 = uStack_127;
          bVar29 = bStack_120;
          uVar30 = uStack_11f;
          bVar31 = bStack_118;
          uVar32 = uStack_117;
          bVar33 = bStack_110;
          uVar34 = uStack_10f;
          bVar35 = bStack_108;
          uVar36 = uStack_107;
          bVar37 = bStack_100;
          uVar38 = uStack_ff;
        }
        uStack_ff = uVar38;
        bStack_100 = bVar37;
        uStack_107 = uVar36;
        bStack_108 = bVar35;
        uStack_10f = uVar34;
        bStack_110 = bVar33;
        uStack_117 = uVar32;
        bStack_118 = bVar31;
        uStack_11f = uVar30;
        bStack_120 = bVar29;
        uStack_127 = uVar28;
        bStack_128 = bVar27;
        uStack_12f = uVar26;
        bStack_130 = bVar25;
        uStack_137 = uVar24;
        bStack_138 = bVar7;
        uStack_140 = uVar60;
        *puVar48 = uVar66;
        puVar48[1] = uVar55;
        puVar48[2] = uVar51;
        puVar47[unaff_x26 * 9 + 0x25] = CONCAT71(uStack_127,bStack_128);
        puVar47[unaff_x26 * 9 + 0x24] = CONCAT71(uStack_12f,bStack_130);
        puVar47[unaff_x26 * 9 + 0x27] = CONCAT71(uStack_117,bStack_118);
        puVar47[unaff_x26 * 9 + 0x26] = CONCAT71(uStack_11f,bStack_120);
        puVar47[unaff_x26 * 9 + 0x29] = CONCAT71(uStack_107,bStack_108);
        puVar47[unaff_x26 * 9 + 0x28] = CONCAT71(uStack_10f,bStack_110);
        puVar47[unaff_x26 * 9 + 0x2a] = CONCAT71(uStack_ff,bStack_100);
        puVar47[unaff_x26 * 9 + 0x23] = CONCAT71(uStack_137,bStack_138);
        puVar47[unaff_x26 * 9 + 0x22] = uStack_140;
        *(ushort *)((long)puVar47 + 0x42a) = uVar8 + 1;
        uStack_b8 = CONCAT71(uStack_247,bStack_248);
        uStack_c0 = uStack_250;
        uStack_a8 = CONCAT71(uStack_237,bStack_238);
        uStack_b0 = CONCAT71(uStack_23f,bStack_240);
        uStack_98 = CONCAT71(uStack_227,bStack_228);
        uStack_a0 = CONCAT71(uStack_22f,bStack_230);
        uStack_88 = CONCAT71(uStack_217,bStack_218);
        uStack_90 = CONCAT71(uStack_21f,bStack_220);
        uStack_80 = CONCAT71(uStack_20f,bStack_210);
        if (uStack_330 == 0x8000000000000000) goto LAB_101526378;
        if ((ulong *)*puStack_2f8 == (ulong *)0x0) {
          uVar66 = 0;
        }
        else {
          uVar66 = 0;
          puVar47 = (ulong *)*puStack_2f8;
          do {
            puStack_340 = puVar43;
            puVar48 = puVar47;
            uVar8 = (ushort)puStack_2f8[0x85];
            uVar55 = (ulong)uVar8;
            uVar9 = *(ushort *)((long)puVar48 + 0x42a);
            uVar51 = (ulong)uVar9;
            uStack_1e0 = uStack_c0;
            uStack_1d8 = uStack_b8;
            uStack_1d0 = uStack_b0;
            uStack_1c8 = uStack_a8;
            uStack_1c0 = uStack_a0;
            uStack_1b8 = uStack_98;
            uStack_1b0 = uStack_90;
            uStack_1a8 = uStack_88;
            uStack_1a0 = uStack_80;
            if (uVar9 < 0xb) {
              uVar66 = uVar55 + 1;
              puVar47 = puVar48 + uVar55 * 3 + 1;
              if (uVar8 < uVar9) {
                _memmove(puVar48 + uVar66 * 3 + 1,puVar47,(uVar51 - uVar55) * 0x18);
                bStack_118 = (byte)uStack_1b8;
                uStack_117 = (undefined7)(uStack_1b8 >> 8);
                bStack_120 = (byte)uStack_1c0;
                uStack_11f = (undefined7)(uStack_1c0 >> 8);
                bStack_108 = (byte)uStack_1a8;
                uStack_107 = (undefined7)(uStack_1a8 >> 8);
                bStack_110 = (byte)uStack_1b0;
                uStack_10f = (undefined7)(uStack_1b0 >> 8);
                bStack_100 = (byte)uStack_1a0;
                uStack_ff = (undefined7)(uStack_1a0 >> 8);
                bStack_138 = (byte)uStack_1d8;
                uStack_137 = (undefined7)(uStack_1d8 >> 8);
                uStack_140 = uStack_1e0;
                bStack_128 = (byte)uStack_1c8;
                uStack_127 = (undefined7)(uStack_1c8 >> 8);
                bStack_130 = (byte)uStack_1d0;
                uStack_12f = (undefined7)(uStack_1d0 >> 8);
                _memmove(puVar48 + uVar66 * 9 + 0x22,puVar48 + uVar55 * 9 + 0x22,
                         (uVar51 - uVar55) * 0x48);
              }
              else {
                bStack_118 = (byte)uStack_98;
                uStack_117 = (undefined7)(uStack_98 >> 8);
                bStack_120 = (byte)uStack_a0;
                uStack_11f = (undefined7)(uStack_a0 >> 8);
                bStack_108 = (byte)uStack_88;
                uStack_107 = (undefined7)(uStack_88 >> 8);
                bStack_110 = (byte)uStack_90;
                uStack_10f = (undefined7)(uStack_90 >> 8);
                bStack_100 = (byte)uStack_80;
                uStack_ff = (undefined7)(uStack_80 >> 8);
                bStack_138 = (byte)uStack_b8;
                uStack_137 = (undefined7)(uStack_b8 >> 8);
                uStack_140 = uStack_c0;
                bStack_128 = (byte)uStack_a8;
                uStack_127 = (undefined7)(uStack_a8 >> 8);
                bStack_130 = (byte)uStack_b0;
                uStack_12f = (undefined7)(uStack_b0 >> 8);
              }
              *puVar47 = uStack_330;
              puVar47[1] = (ulong)puStack_328;
              puVar47[2] = uStack_338;
              puVar48[uVar55 * 9 + 0x25] = CONCAT71(uStack_127,bStack_128);
              puVar48[uVar55 * 9 + 0x24] = CONCAT71(uStack_12f,bStack_130);
              puVar48[uVar55 * 9 + 0x27] = CONCAT71(uStack_117,bStack_118);
              puVar48[uVar55 * 9 + 0x26] = CONCAT71(uStack_11f,bStack_120);
              puVar48[uVar55 * 9 + 0x29] = CONCAT71(uStack_107,bStack_108);
              puVar48[uVar55 * 9 + 0x28] = CONCAT71(uStack_10f,bStack_110);
              puVar48[uVar55 * 9 + 0x2a] = CONCAT71(uStack_ff,bStack_100);
              puVar48[uVar55 * 9 + 0x23] = CONCAT71(uStack_137,bStack_138);
              puVar48[uVar55 * 9 + 0x22] = uStack_140;
              unaff_x24 = puStack_328;
              unaff_x26 = 0x48;
              if (uVar8 < uVar9) {
                _memmove(puVar48 + uVar55 + 0x88,puVar48 + uVar55 + 0x87,(uVar51 - uVar55) * 8);
                unaff_x24 = puStack_340;
                unaff_x26 = uVar51;
              }
              puVar48[uVar55 + 0x87] = (ulong)puStack_340;
              *(ushort *)((long)puVar48 + 0x42a) = uVar9 + 1;
              if (uVar66 < uVar51 + 2) {
                lVar58 = uVar55 + 0x87;
                do {
                  puVar50 = (undefined8 *)puVar48[lVar58];
                  *puVar50 = puVar48;
                  *(short *)(puVar50 + 0x85) = (short)lVar58 + -0x86;
                  lVar58 = lVar58 + 1;
                } while (lVar58 - uVar51 != 0x88);
              }
              goto LAB_101526378;
            }
            uVar66 = uVar66 + 1;
            uVar60 = 5;
            if (uVar8 != 6) {
              uVar60 = 6;
            }
            uVar59 = 0;
            if (uVar8 != 6) {
              uVar59 = uVar55 - 7;
            }
            uVar46 = uVar55;
            uVar61 = uVar55;
            if (uVar8 != 5) {
              uVar46 = uVar59;
              uVar61 = uVar60;
            }
            uVar60 = 4;
            if (4 < uVar8) {
              uVar55 = uVar46;
              uVar60 = uVar61;
            }
            puVar43 = (ulong *)_malloc(0x490);
            if (puVar43 == (ulong *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x490);
              goto LAB_101527554;
            }
            *puVar43 = 0;
            uVar59 = (ulong)*(ushort *)((long)puVar48 + 0x42a) + ~uVar60;
            *(short *)((long)puVar43 + 0x42a) = (short)uVar59;
            puVar47 = puVar48 + uVar60 * 3 + 1;
            uVar46 = *puVar47;
            puVar57 = (ulong *)puVar47[1];
            uVar61 = puVar47[2];
            puVar47 = puVar48 + uVar60 * 9 + 0x22;
            bStack_238 = (byte)puVar47[3];
            uStack_237 = (undefined7)(puVar47[3] >> 8);
            bStack_240 = (byte)puVar47[2];
            uStack_23f = (undefined7)(puVar47[2] >> 8);
            bStack_228 = (byte)puVar47[5];
            uStack_227 = (undefined7)(puVar47[5] >> 8);
            bStack_230 = (byte)puVar47[4];
            uStack_22f = (undefined7)(puVar47[4] >> 8);
            bStack_218 = (byte)puVar47[7];
            uStack_217 = (undefined7)(puVar47[7] >> 8);
            bStack_220 = (byte)puVar47[6];
            uStack_21f = (undefined7)(puVar47[6] >> 8);
            bStack_210 = (byte)puVar47[8];
            uStack_20f = (undefined7)(puVar47[8] >> 8);
            uStack_250 = *puVar47;
            bStack_248 = (byte)puVar47[1];
            uStack_247 = (undefined7)(puVar47[1] >> 8);
            if (0xb < uVar59) {
              func_0x000108a07904(0,uVar59,0xb,&UNK_10b2381a8);
              goto LAB_101527554;
            }
            _memcpy(puVar43 + 1,puVar48 + (uVar60 + 1) * 3 + 1,uVar59 * 0x18);
            _memcpy(puVar43 + 0x22,puVar48 + (uVar60 + 1) * 9 + 0x22,uVar59 * 0x48);
            *(short *)((long)puVar48 + 0x42a) = (short)uVar60;
            bStack_110 = (byte)puVar47[3];
            uStack_10f = (undefined7)(puVar47[3] >> 8);
            bStack_118 = (byte)puVar47[2];
            uStack_117 = (undefined7)(puVar47[2] >> 8);
            bStack_100 = (byte)puVar47[5];
            uStack_ff = (undefined7)(puVar47[5] >> 8);
            bStack_108 = (byte)puVar47[4];
            uStack_107 = (undefined7)(puVar47[4] >> 8);
            uStack_f0 = puVar47[7];
            bStack_f8 = (byte)puVar47[6];
            uStack_f7 = (undefined7)(puVar47[6] >> 8);
            uStack_e8 = puVar47[8];
            bStack_120 = (byte)puVar47[1];
            uStack_11f = (undefined7)(puVar47[1] >> 8);
            bStack_128 = (byte)*puVar47;
            uStack_127 = (undefined7)(*puVar47 >> 8);
            bStack_138 = (byte)puVar57;
            uStack_137 = (undefined7)((ulong)puVar57 >> 8);
            bStack_130 = (byte)uVar61;
            uStack_12f = (undefined7)(uVar61 >> 8);
            uVar59 = (ulong)*(ushort *)((long)puVar43 + 0x42a);
            lVar58 = uVar59 + 1;
            uStack_140 = uVar46;
            if (0xb < uVar59) {
              func_0x000108a07904(0,lVar58,0xc,&UNK_10b2381c0);
              goto LAB_101527554;
            }
            if (uVar51 - uVar60 != lVar58) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
              goto LAB_101527554;
            }
            unaff_x24 = (ulong *)0x48;
            _memcpy(puVar43 + 0x86,puVar48 + uVar60 + 0x87,lVar58 * 8);
            uVar51 = 0;
            do {
              puVar50 = (undefined8 *)(puVar43 + 0x86)[uVar51];
              *puVar50 = puVar43;
              *(short *)(puVar50 + 0x85) = (short)uVar51;
              if (uVar59 <= uVar51) break;
              uVar51 = uVar51 + 1;
            } while (uVar51 <= uVar59);
            uStack_a8 = CONCAT71(uStack_10f,bStack_110);
            uStack_b0 = CONCAT71(uStack_117,bStack_118);
            uStack_98 = CONCAT71(uStack_ff,bStack_100);
            uStack_a0 = CONCAT71(uStack_107,bStack_108);
            uStack_90 = CONCAT71(uStack_f7,bStack_f8);
            uStack_88 = uStack_f0;
            uStack_80 = uStack_e8;
            uStack_b8 = CONCAT71(uStack_11f,bStack_120);
            uStack_c0 = CONCAT71(uStack_127,bStack_128);
            puVar47 = puVar43;
            if (uVar8 < 6) {
              puVar47 = puVar48;
            }
            uVar8 = *(ushort *)((long)puVar47 + 0x42a);
            unaff_x26 = (ulong)uVar8;
            iVar42 = (int)uVar55;
            puVar64 = puVar47 + (long)iVar42 * 3 + 1;
            lVar58 = unaff_x26 - uVar55;
            if (unaff_x26 < uVar55 || lVar58 == 0) {
              *puVar64 = uStack_330;
              puVar64[1] = (ulong)puStack_328;
              puVar64[2] = uStack_338;
              puVar47[(long)iVar42 * 9 + 0x27] = uStack_1b8;
              puVar47[(long)iVar42 * 9 + 0x26] = uStack_1c0;
              puVar47[(long)iVar42 * 9 + 0x29] = uStack_1a8;
              puVar47[(long)iVar42 * 9 + 0x28] = uStack_1b0;
              puVar47[(long)iVar42 * 9 + 0x2a] = uStack_1a0;
              puVar47[(long)iVar42 * 9 + 0x23] = uStack_1d8;
              puVar47[(long)iVar42 * 9 + 0x22] = uStack_1e0;
              puVar47[(long)iVar42 * 9 + 0x25] = uStack_1c8;
              puVar47[(long)iVar42 * 9 + 0x24] = uStack_1d0;
            }
            else {
              iVar54 = (int)(uVar55 + 1);
              _memmove(puVar47 + (long)iVar54 * 3 + 1,puVar64,lVar58 * 0x18);
              *puVar64 = uStack_330;
              puVar64[1] = (ulong)puStack_328;
              puVar64[2] = uStack_338;
              unaff_x24 = puVar47 + (long)iVar42 * 9 + 0x22;
              _memmove(puVar47 + (long)iVar54 * 9 + 0x22,unaff_x24,lVar58 * 0x48);
              unaff_x24[5] = uStack_1b8;
              unaff_x24[4] = uStack_1c0;
              unaff_x24[7] = uStack_1a8;
              unaff_x24[6] = uStack_1b0;
              unaff_x24[8] = uStack_1a0;
              unaff_x24[1] = uStack_1d8;
              *unaff_x24 = uStack_1e0;
              unaff_x24[3] = uStack_1c8;
              unaff_x24[2] = uStack_1d0;
              _memmove(puVar47 + uVar55 + 0x88,puVar47 + uVar55 + 0x87,lVar58 * 8);
            }
            puVar47[uVar55 + 0x87] = (ulong)puStack_340;
            *(ushort *)((long)puVar47 + 0x42a) = uVar8 + 1;
            if (uVar55 + 1 < unaff_x26 + 2) {
              lVar58 = uVar55 + 0x87;
              do {
                puVar50 = (undefined8 *)puVar47[lVar58];
                *puVar50 = puVar47;
                *(short *)(puVar50 + 0x85) = (short)lVar58 + -0x86;
                lVar58 = lVar58 + 1;
              } while (lVar58 - unaff_x26 != 0x88);
            }
            uStack_168 = uStack_98;
            uStack_170 = uStack_a0;
            uStack_158 = uStack_88;
            uStack_160 = uStack_90;
            uStack_150 = uStack_80;
            uStack_188 = uStack_b8;
            uStack_190 = uStack_c0;
            uStack_178 = uStack_a8;
            uStack_180 = uStack_b0;
            uStack_338 = uVar61;
            uStack_330 = uVar46;
            if (uVar46 == 0x8000000000000000) goto LAB_101526378;
            puVar47 = (ulong *)*puVar48;
            puStack_328 = puVar57;
            puStack_2f8 = puVar48;
          } while ((ulong *)*puVar48 != (ulong *)0x0);
        }
        bStack_110 = (byte)uStack_a8;
        uStack_10f = (undefined7)(uStack_a8 >> 8);
        bStack_118 = (byte)uStack_b0;
        uStack_117 = (undefined7)(uStack_b0 >> 8);
        bStack_100 = (byte)uStack_98;
        uStack_ff = (undefined7)(uStack_98 >> 8);
        bStack_108 = (byte)uStack_a0;
        uStack_107 = (undefined7)(uStack_a0 >> 8);
        uStack_f0 = uStack_88;
        bStack_f8 = (byte)uStack_90;
        uStack_f7 = (undefined7)(uStack_90 >> 8);
        uStack_e8 = uStack_80;
        bStack_120 = (byte)uStack_b8;
        uStack_11f = (undefined7)(uStack_b8 >> 8);
        bStack_128 = (byte)uStack_c0;
        uStack_127 = (undefined7)(uStack_c0 >> 8);
        bStack_138 = (byte)puStack_328;
        uStack_137 = (undefined7)((ulong)puStack_328 >> 8);
        bStack_130 = (byte)uStack_338;
        uStack_12f = (undefined7)(uStack_338 >> 8);
        uStack_1e0 = uStack_c0;
        uStack_1d8 = uStack_b8;
        uStack_1d0 = uStack_b0;
        uStack_1c8 = uStack_a8;
        uStack_1c0 = uStack_a0;
        uStack_1b8 = uStack_98;
        uStack_1b0 = uStack_90;
        uStack_1a8 = uStack_88;
        uStack_1a0 = uStack_80;
        uStack_140 = uStack_330;
        puStack_e0 = puStack_2f8;
        uStack_d8 = uVar66;
        puStack_d0 = puVar43;
        uStack_c8 = uVar66;
        unaff_x24 = (ulong *)_malloc(0x490);
        if (unaff_x24 == (ulong *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x490);
        }
        else {
          *unaff_x24 = 0;
          *(undefined2 *)((long)unaff_x24 + 0x42a) = 0;
          unaff_x24[0x86] = (ulong)puStack_2e8;
          if (uStack_2e0 < 0xffffffffffffffff) {
            *puStack_2e8 = (ulong)unaff_x24;
            *(undefined2 *)(puStack_2e8 + 0x85) = 0;
            if (uVar66 == uStack_2e0) {
              *(undefined2 *)((long)unaff_x24 + 0x42a) = 1;
              unaff_x24[1] = uStack_330;
              unaff_x24[2] = (ulong)puStack_328;
              unaff_x24[3] = uStack_338;
              unaff_x24[0x27] = uStack_1b8;
              unaff_x24[0x26] = uStack_1c0;
              unaff_x24[0x29] = uStack_1a8;
              unaff_x24[0x28] = uStack_1b0;
              unaff_x24[0x2a] = uStack_1a0;
              unaff_x24[0x23] = uStack_1d8;
              unaff_x24[0x22] = uStack_1e0;
              unaff_x24[0x25] = uStack_1c8;
              unaff_x24[0x24] = uStack_1d0;
              unaff_x24[0x87] = (ulong)puVar43;
              *puVar43 = (ulong)unaff_x24;
              *(undefined2 *)(puVar43 + 0x85) = 1;
              unaff_x26 = uStack_338;
              puStack_2e8 = unaff_x24;
              uStack_2e0 = uStack_2e0 + 1;
              goto LAB_101526378;
            }
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
          }
          else {
            func_0x000108a07a20(&UNK_10b238148);
          }
        }
      }
      else {
        func_0x000108a07904(0,uVar46,0xb,&UNK_10b2381a8);
      }
    }
LAB_101527554:
                    /* WARNING: Does not return */
    pcVar41 = (code *)SoftwareBreakpoint(1,0x101527558);
    (*pcVar41)();
  }
  puVar43 = puVar47 + unaff_x26 * 3;
  lVar58 = uVar63 - unaff_x26;
  if (unaff_x26 <= uVar63 && lVar58 != 0) {
    bStack_138 = bVar39;
    uStack_137 = uVar40;
    bStack_130 = bVar10;
    uStack_12f = uVar11;
    bStack_128 = bVar12;
    uStack_127 = uVar13;
    bStack_120 = bVar14;
    uStack_11f = uVar15;
    bStack_118 = bVar16;
    uStack_117 = uVar17;
    bStack_110 = bVar18;
    uStack_10f = uVar19;
    bStack_108 = bVar20;
    uStack_107 = uVar21;
    bStack_100 = bVar22;
    uStack_ff = uVar23;
    _memmove(puVar47 + unaff_x26 * 3 + 3,puVar43,lVar58 * 0x18);
    uStack_140 = uVar60;
    bStack_138 = bVar7;
    uStack_137 = uVar24;
    bStack_130 = bVar25;
    uStack_12f = uVar26;
    bStack_128 = bVar27;
    uStack_127 = uVar28;
    bStack_120 = bVar29;
    uStack_11f = uVar30;
    bStack_118 = bVar31;
    uStack_117 = uVar32;
    bStack_110 = bVar33;
    uStack_10f = uVar34;
    bStack_108 = bVar35;
    uStack_107 = uVar36;
    bStack_100 = bVar37;
    uStack_ff = uVar38;
    _memmove(puStack_2f8 + unaff_x26 * 9 + 0x2b,puStack_2f8 + unaff_x26 * 9 + 0x22,lVar58 * 0x48);
    uVar60 = uStack_140;
  }
  uStack_140 = uVar60;
  *puVar43 = uVar66;
  puVar43[1] = uVar55;
  puVar43[2] = uVar51;
  puStack_2f8[unaff_x26 * 9 + 0x25] = CONCAT71(uStack_127,bStack_128);
  puStack_2f8[unaff_x26 * 9 + 0x24] = CONCAT71(uStack_12f,bStack_130);
  puStack_2f8[unaff_x26 * 9 + 0x27] = CONCAT71(uStack_117,bStack_118);
  puStack_2f8[unaff_x26 * 9 + 0x26] = CONCAT71(uStack_11f,bStack_120);
  puStack_2f8[unaff_x26 * 9 + 0x29] = CONCAT71(uStack_107,bStack_108);
  puStack_2f8[unaff_x26 * 9 + 0x28] = CONCAT71(uStack_10f,bStack_110);
  puStack_2f8[unaff_x26 * 9 + 0x2a] = CONCAT71(uStack_ff,bStack_100);
  puStack_2f8[unaff_x26 * 9 + 0x23] = CONCAT71(uStack_137,bStack_138);
  puStack_2f8[unaff_x26 * 9 + 0x22] = uStack_140;
  *(ushort *)((long)puStack_2f8 + 0x42a) = uVar8 + 1;
  unaff_x24 = puStack_2f8;
LAB_101526378:
  uStack_2d8 = uStack_2d8 + 1;
  goto LAB_101525938;
}

