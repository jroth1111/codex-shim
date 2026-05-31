
void FUN_10142736c(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4,byte *param_5,
                  byte *param_6,byte *param_7,byte *param_8)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  byte *in_x9;
  byte *extraout_x9;
  byte *extraout_x9_00;
  byte *pbVar14;
  byte *in_x10;
  byte *extraout_x10;
  byte *pbVar15;
  byte *extraout_x10_00;
  byte *pbVar16;
  byte *in_x14;
  byte *in_x17;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *unaff_x20;
  byte *pbVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  byte *pbStack_3c0;
  byte *pbStack_3b8;
  byte *pbStack_3b0;
  byte *pbStack_3a8;
  byte *pbStack_3a0;
  byte *pbStack_398;
  byte *pbStack_390;
  byte *pbStack_388;
  byte *pbStack_380;
  byte *pbStack_378;
  byte *pbStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  byte *pbStack_338;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  byte bStack_2e0;
  byte bStack_2df;
  undefined6 uStack_2de;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  undefined8 uStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  long lStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined1 auStack_71 [17];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    pbVar22 = *(byte **)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar19 = pbVar2 + *(long *)(param_2 + 0x18) * 0x20;
    lStack_228 = 0;
    uStack_248 = pbVar2;
    pbStack_238 = pbVar22;
    pbStack_230 = pbVar19;
    if (*(long *)(param_2 + 0x18) == 0) {
      lVar12 = 0;
      pbStack_f0 = (byte *)0x0;
      pbStack_e8 = (byte *)0x8;
      pbStack_e0 = (byte *)0x0;
      pbVar26 = pbVar2;
      pbStack_240 = pbVar2;
      if (pbVar2 == pbVar19) goto LAB_1014274a8;
LAB_101427a04:
      pbVar4 = pbStack_e0;
      pbVar25 = pbStack_e8;
      pbVar20 = pbStack_f0;
      pbStack_2f0 = pbVar26 + 0x20;
      bStack_2e0 = *pbVar26;
      pbStack_240 = pbStack_2f0;
      if (bStack_2e0 == 0x16) {
        pbStack_d8 = (byte *)0x0;
        pbStack_d0 = (byte *)0x8;
        pbStack_c8 = (byte *)0x0;
        in_x9 = (byte *)0x16;
        if (pbStack_2f0 == pbVar19) goto LAB_101427c8c;
LAB_101427a34:
        pbVar17 = pbStack_c8;
        pbVar5 = pbStack_d0;
        pbVar8 = pbStack_d8;
        pbStack_2f0 = pbVar26 + 0x40;
        bStack_2e0 = pbVar26[0x20];
        pbStack_240 = pbStack_2f0;
        if (bStack_2e0 == 0x16) {
          in_x10 = (byte *)0x0;
          in_x9 = (byte *)0x8;
          pbStack_c0 = (byte *)0x0;
          pbStack_b8 = (byte *)0x8;
          pbStack_b0 = (byte *)0x0;
          if (pbStack_2f0 == pbVar19) goto LAB_101427c98;
LAB_101427e04:
          pbVar23 = pbStack_b0;
          pbVar7 = pbStack_b8;
          pbVar6 = pbStack_c0;
          pbStack_2f0 = pbVar26 + 0x60;
          bStack_2e0 = pbVar26[0x40];
          pbStack_240 = pbStack_2f0;
          if (bStack_2e0 == 0x16) {
            pbVar14 = (byte *)0x8;
            pbVar16 = (byte *)0x0;
            pbVar18 = (byte *)0x0;
LAB_101427e7c:
            in_x9 = pbVar14;
            in_x10 = pbVar16;
            pbStack_a8 = pbVar16;
            pbStack_a0 = pbVar14;
            pbStack_98 = pbVar18;
            if (pbStack_2f0 == pbVar19) goto LAB_101427ca4;
            pbStack_2f0 = pbVar26 + 0x80;
            bStack_2e0 = pbVar26[0x60];
            pbStack_240 = pbStack_2f0;
            if (bStack_2e0 == 0x16) {
              in_x9 = (byte *)0x8;
              in_x10 = (byte *)0x0;
              pbVar27 = (byte *)0x0;
LAB_1014281f0:
              pbStack_90 = in_x10;
              pbStack_88 = in_x9;
              pbStack_80 = pbVar27;
              if (pbStack_2f0 == pbVar19) goto LAB_101427cb0;
              pbStack_2f0 = pbVar26 + 0xa0;
              bStack_2e0 = pbVar26[0x80];
              pbStack_240 = pbStack_2f0;
              if (bStack_2e0 == 0x16) {
                pbVar26 = (byte *)0x8000000000000000;
                pbStack_210 = in_x9;
                pbVar15 = in_x10;
              }
              else {
                uVar11 = *(undefined8 *)(pbVar26 + 0x81);
                uStack_2d7 = (undefined7)*(undefined8 *)(pbVar26 + 0x89);
                bStack_2df = (byte)uVar11;
                uStack_2de = (undefined6)((ulong)uVar11 >> 8);
                uStack_2d8 = (undefined1)((ulong)uVar11 >> 0x38);
                pbStack_2c8 = *(byte **)(pbVar26 + 0x98);
                uStack_2d0 = (undefined1)*(undefined8 *)(pbVar26 + 0x90);
                uStack_2cf = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x90) >> 8);
                lStack_228 = lVar12 + 1;
                func_0x0001012232c8(&pbStack_220,&bStack_2e0);
                pbVar26 = pbStack_220;
                pbVar15 = pbStack_218;
                if (pbStack_220 == (byte *)0x8000000000000000) {
                  bStack_2e0 = 0;
                  bStack_2df = 0;
                  uStack_2de = 0x800000000000;
                  uStack_2d8 = SUB81(pbStack_218,0);
                  uStack_2d7 = (undefined7)((ulong)pbStack_218 >> 8);
                  if (pbVar27 != (byte *)0x0) {
                    pbVar26 = in_x9 + 8;
                    do {
                      if (*(long *)(pbVar26 + -8) != 0) {
                        _free(*(undefined8 *)pbVar26);
                      }
                      pbVar26 = pbVar26 + 0x18;
                      pbVar27 = pbVar27 + -1;
                    } while (pbVar27 != (byte *)0x0);
                  }
                  if (in_x10 != (byte *)0x0) {
                    _free(in_x9);
                  }
                  goto LAB_1014282b8;
                }
              }
LAB_101427cb8:
              pbStack_218 = pbStack_e8;
              pbStack_220 = pbStack_f0;
              bVar10 = pbVar26 != (byte *)0x8000000000000000;
              pbStack_268 = (byte *)0x0;
              if (bVar10) {
                pbStack_268 = pbVar26;
              }
              pbStack_260 = (byte *)0x8;
              if (bVar10) {
                pbStack_260 = pbVar15;
              }
              pbStack_258 = (byte *)0x0;
              if (bVar10) {
                pbStack_258 = pbStack_210;
              }
              pbStack_200 = pbStack_d0;
              pbStack_208 = pbStack_d8;
              pbStack_210 = pbStack_e0;
              pbStack_1f8 = pbStack_c8;
              pbStack_1e8 = pbStack_b8;
              pbStack_1f0 = pbStack_c0;
              pbStack_1e0 = pbStack_b0;
              pbStack_1c8 = pbStack_98;
              pbStack_1d0 = pbStack_a0;
              pbStack_1d8 = pbStack_a8;
              pbStack_2b8 = pbStack_c8;
              pbStack_2c0 = pbStack_d0;
              pbStack_2a8 = pbStack_b8;
              pbStack_2b0 = pbStack_c0;
              uStack_2d8 = SUB81(pbStack_e8,0);
              uStack_2d7 = (undefined7)((ulong)pbStack_e8 >> 8);
              bStack_2e0 = (byte)pbStack_f0;
              bStack_2df = (byte)((ulong)pbStack_f0 >> 8);
              uStack_2de = (undefined6)((ulong)pbStack_f0 >> 0x10);
              pbStack_2c8 = pbStack_d8;
              uStack_2d0 = SUB81(pbStack_e0,0);
              uStack_2cf = (undefined7)((ulong)pbStack_e0 >> 8);
              pbStack_288 = pbStack_98;
              pbStack_290 = pbStack_a0;
              pbStack_278 = pbStack_88;
              pbStack_280 = pbStack_90;
              pbStack_298 = pbStack_a8;
              pbStack_2a0 = pbStack_b0;
              pbStack_270 = pbStack_80;
              if (pbStack_f0 != (byte *)0x8000000000000000) {
                pbStack_138 = pbStack_88;
                pbStack_140 = pbStack_90;
                pbStack_130 = pbStack_80;
                pbStack_178 = pbStack_c8;
                pbStack_180 = pbStack_d0;
                pbStack_168 = pbStack_b8;
                pbStack_170 = pbStack_c0;
                pbStack_158 = pbStack_a8;
                pbStack_160 = pbStack_b0;
                pbStack_148 = pbStack_98;
                pbStack_150 = pbStack_a0;
                pbStack_198 = pbStack_e8;
                pbStack_1a0 = pbStack_f0;
                pbStack_190 = pbStack_e0;
                pbStack_188 = pbStack_d8;
                pbStack_128 = pbStack_268;
                pbStack_120 = pbStack_260;
                pbStack_118 = pbStack_258;
                lVar12 = FUN_100fbc738(&uStack_248);
                if (lVar12 != 0) {
                  bStack_2e0 = 0;
                  bStack_2df = 0;
                  uStack_2de = 0x800000000000;
                  uStack_2d8 = (undefined1)lVar12;
                  uStack_2d7 = (undefined7)((ulong)lVar12 >> 8);
                  FUN_100e589f4(&pbStack_1a0);
                }
                goto LAB_101428460;
              }
              goto LAB_10142842c;
            }
            uVar11 = *(undefined8 *)(pbVar26 + 0x61);
            uStack_2d7 = (undefined7)*(undefined8 *)(pbVar26 + 0x69);
            bStack_2df = (byte)uVar11;
            uStack_2de = (undefined6)((ulong)uVar11 >> 8);
            uStack_2d8 = (undefined1)((ulong)uVar11 >> 0x38);
            pbStack_2c8 = *(byte **)(pbVar26 + 0x78);
            uStack_2d0 = (undefined1)*(undefined8 *)(pbVar26 + 0x70);
            uStack_2cf = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x70) >> 8);
            lVar12 = lVar12 + 1;
            lStack_228 = lVar12;
            func_0x0001012652ac(&pbStack_220,&bStack_2e0);
            in_x9 = pbStack_218;
            in_x10 = pbStack_220;
            pbVar27 = pbStack_210;
            if (pbStack_220 != (byte *)0x8000000000000000) goto LAB_1014281f0;
            bStack_2e0 = 0;
            bStack_2df = 0;
            uStack_2de = 0x800000000000;
            uStack_2d8 = SUB81(pbStack_218,0);
            uStack_2d7 = (undefined7)((ulong)pbStack_218 >> 8);
LAB_1014282b8:
            if (pbVar18 != (byte *)0x0) {
              pbVar26 = pbVar14 + 8;
              do {
                if (*(long *)(pbVar26 + -8) != 0) {
                  _free(*(undefined8 *)pbVar26);
                }
                pbVar26 = pbVar26 + 0x18;
                pbVar18 = pbVar18 + -1;
              } while (pbVar18 != (byte *)0x0);
            }
            if (pbVar16 != (byte *)0x0) {
              _free(pbVar14);
            }
          }
          else {
            uVar11 = *(undefined8 *)(pbVar26 + 0x41);
            uStack_2d7 = (undefined7)*(undefined8 *)(pbVar26 + 0x49);
            bStack_2df = (byte)uVar11;
            uStack_2de = (undefined6)((ulong)uVar11 >> 8);
            uStack_2d8 = (undefined1)((ulong)uVar11 >> 0x38);
            pbStack_2c8 = *(byte **)(pbVar26 + 0x58);
            uStack_2d0 = (undefined1)*(undefined8 *)(pbVar26 + 0x50);
            uStack_2cf = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x50) >> 8);
            lVar12 = lVar12 + 1;
            lStack_228 = lVar12;
            func_0x0001013a7e30(&pbStack_220,&bStack_2e0);
            pbVar14 = pbStack_218;
            pbVar16 = pbStack_220;
            pbVar18 = pbStack_210;
            if (pbStack_220 != (byte *)0x8000000000000000) goto LAB_101427e7c;
            bStack_2e0 = 0;
            bStack_2df = 0;
            uStack_2de = 0x800000000000;
            uStack_2d8 = SUB81(pbStack_218,0);
            uStack_2d7 = (undefined7)((ulong)pbStack_218 >> 8);
          }
          if (pbVar23 != (byte *)0x0) {
            pbVar26 = pbVar7 + 8;
            do {
              if (*(long *)(pbVar26 + -8) != 0) {
                _free(*(undefined8 *)pbVar26);
              }
              pbVar26 = pbVar26 + 0x18;
              pbVar23 = pbVar23 + -1;
            } while (pbVar23 != (byte *)0x0);
          }
          if (pbVar6 != (byte *)0x0) {
            _free(pbVar7);
          }
        }
        else {
          uVar11 = *(undefined8 *)(pbVar26 + 0x21);
          uStack_2d7 = (undefined7)*(undefined8 *)(pbVar26 + 0x29);
          bStack_2df = (byte)uVar11;
          uStack_2de = (undefined6)((ulong)uVar11 >> 8);
          uStack_2d8 = (undefined1)((ulong)uVar11 >> 0x38);
          pbStack_2c8 = *(byte **)(pbVar26 + 0x38);
          uStack_2d0 = (undefined1)*(undefined8 *)(pbVar26 + 0x30);
          uStack_2cf = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x30) >> 8);
          lVar12 = lVar12 + 1;
          lStack_228 = lVar12;
          func_0x00010127dd40(&pbStack_220,&bStack_2e0);
          if (pbStack_220 != (byte *)0x8000000000000000) {
            pbStack_b0 = pbStack_210;
            pbStack_c0 = pbStack_220;
            pbStack_b8 = pbStack_218;
            in_x9 = pbStack_218;
            in_x10 = extraout_x10_00;
            if (pbStack_2f0 != pbVar19) goto LAB_101427e04;
            goto LAB_101427c98;
          }
          bStack_2e0 = 0;
          bStack_2df = 0;
          uStack_2de = 0x800000000000;
          uStack_2d8 = SUB81(pbStack_218,0);
          uStack_2d7 = (undefined7)((ulong)pbStack_218 >> 8);
        }
        if (pbVar17 != (byte *)0x0) {
          pbVar26 = pbVar5 + 0x20;
          do {
            if (*(long *)(pbVar26 + -0x20) != 0) {
              _free(*(undefined8 *)(pbVar26 + -0x18));
            }
            if (*(long *)(pbVar26 + -8) != 0) {
              _free(*(undefined8 *)pbVar26);
            }
            if (*(long *)(pbVar26 + 0x10) != -0x8000000000000000 && *(long *)(pbVar26 + 0x10) != 0)
            {
              _free(*(undefined8 *)(pbVar26 + 0x18));
            }
            pbVar26 = pbVar26 + 0x48;
            pbVar17 = pbVar17 + -1;
          } while (pbVar17 != (byte *)0x0);
        }
        if (pbVar8 != (byte *)0x0) {
          _free(pbVar5);
        }
      }
      else {
        uVar11 = *(undefined8 *)(pbVar26 + 1);
        uStack_2d7 = (undefined7)*(undefined8 *)(pbVar26 + 9);
        bStack_2df = (byte)uVar11;
        uStack_2de = (undefined6)((ulong)uVar11 >> 8);
        uStack_2d8 = (undefined1)((ulong)uVar11 >> 0x38);
        pbStack_2c8 = *(byte **)(pbVar26 + 0x18);
        uStack_2d0 = (undefined1)*(undefined8 *)(pbVar26 + 0x10);
        uStack_2cf = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x10) >> 8);
        lVar12 = lVar12 + 1;
        lStack_228 = lVar12;
        func_0x0001012527b8(&pbStack_220,&bStack_2e0);
        if (pbStack_220 != (byte *)0x8000000000000000) {
          pbStack_c8 = pbStack_210;
          pbStack_d8 = pbStack_220;
          pbStack_d0 = pbStack_218;
          in_x9 = extraout_x9_00;
          in_x10 = pbStack_220;
          if (pbStack_2f0 != pbVar19) goto LAB_101427a34;
          goto LAB_101427c8c;
        }
        bStack_2e0 = 0;
        bStack_2df = 0;
        uStack_2de = 0x800000000000;
        uStack_2d8 = SUB81(pbStack_218,0);
        uStack_2d7 = (undefined7)((ulong)pbStack_218 >> 8);
      }
      if (pbVar4 != (byte *)0x0) {
        pbVar26 = (byte *)0x0;
        do {
          pbVar17 = pbVar25 + (long)pbVar26 * 0x30;
          if (*(long *)pbVar17 != 0) {
            _free(*(undefined8 *)(pbVar17 + 8));
          }
          lVar12 = *(long *)(pbVar17 + 0x20);
          lVar24 = *(long *)(pbVar17 + 0x28);
          if (lVar24 != 0) {
            puVar21 = (undefined8 *)(lVar12 + 8);
            do {
              if (puVar21[-1] != 0) {
                _free(*puVar21);
              }
              puVar21 = puVar21 + 3;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          if (*(long *)(pbVar17 + 0x18) != 0) {
            _free(lVar12);
          }
          pbVar26 = pbVar26 + 1;
        } while (pbVar26 != pbVar4);
      }
      if (pbVar20 != (byte *)0x0) {
        _free(pbVar25);
      }
    }
    else {
      pbStack_2f0 = pbVar2 + 0x20;
      bStack_2e0 = *pbVar2;
      pbStack_240 = pbStack_2f0;
      if (bStack_2e0 == 0x16) {
        lVar12 = 0;
        pbStack_f0 = (byte *)0x0;
        pbStack_e8 = (byte *)0x8;
        pbStack_e0 = (byte *)0x0;
joined_r0x0001014274a4:
        pbVar26 = pbStack_2f0;
        if (pbStack_2f0 != pbVar19) goto LAB_101427a04;
LAB_1014274a8:
        pbStack_d8 = (byte *)0x0;
        pbStack_d0 = (byte *)0x8;
        pbStack_c8 = (byte *)0x0;
LAB_101427c8c:
        pbStack_c0 = (byte *)0x0;
        pbStack_b8 = (byte *)0x8;
        pbStack_b0 = (byte *)0x0;
LAB_101427c98:
        pbStack_a8 = (byte *)0x0;
        pbStack_a0 = (byte *)0x8;
        pbStack_98 = (byte *)0x0;
LAB_101427ca4:
        pbStack_90 = (byte *)0x0;
        pbStack_88 = (byte *)0x8;
        pbStack_80 = (byte *)0x0;
LAB_101427cb0:
        pbStack_2f0 = pbVar19;
        pbVar26 = (byte *)0x8000000000000000;
        pbStack_210 = in_x9;
        pbVar15 = in_x10;
        goto LAB_101427cb8;
      }
      uVar11 = *(undefined8 *)(pbVar2 + 1);
      uStack_2d7 = (undefined7)*(undefined8 *)(pbVar2 + 9);
      bStack_2df = (byte)uVar11;
      uStack_2de = (undefined6)((ulong)uVar11 >> 8);
      uStack_2d8 = (undefined1)((ulong)uVar11 >> 0x38);
      pbStack_2c8 = *(byte **)(pbVar2 + 0x18);
      uStack_2d0 = (undefined1)*(undefined8 *)(pbVar2 + 0x10);
      uStack_2cf = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x10) >> 8);
      lStack_228 = 1;
      func_0x0001013407f0(&pbStack_220,&bStack_2e0);
      if (pbStack_220 != (byte *)0x8000000000000000) {
        lVar12 = 1;
        in_x10 = extraout_x10;
        in_x9 = extraout_x9;
        pbStack_f0 = pbStack_220;
        pbStack_e8 = pbStack_218;
        pbStack_e0 = pbStack_210;
        goto joined_r0x0001014274a4;
      }
      bStack_2e0 = 0;
      bStack_2df = 0;
      uStack_2de = 0x800000000000;
      uStack_2d8 = SUB81(pbStack_218,0);
      uStack_2d7 = (undefined7)((ulong)pbStack_218 >> 8);
    }
LAB_10142842c:
    lVar12 = ((ulong)((long)pbVar19 - (long)pbStack_2f0) >> 5) + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e077ec(pbStack_2f0);
      pbStack_2f0 = pbStack_2f0 + 0x20;
    }
    if (pbVar22 != (byte *)0x0) {
      _free(pbVar2);
    }
  }
  else {
    if (bVar3 != 0x15) {
      uVar11 = FUN_108855b04(param_2,auStack_71,&UNK_10b20bf20);
      goto LAB_101428488;
    }
    pbStack_1f0 = *(byte **)(param_2 + 8);
    pbStack_200 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar19 = pbStack_200 + lVar12;
    pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
    pbStack_1e0 = (byte *)0x0;
    pbStack_108 = (byte *)0x8000000000000000;
    pbStack_f0 = (byte *)0x8000000000000000;
    pbStack_d8 = (byte *)0x8000000000000000;
    pbStack_c0 = (byte *)0x8000000000000000;
    pbStack_a8 = (byte *)0x8000000000000000;
    pbStack_90 = (byte *)0x8000000000000000;
    pbStack_1e8 = pbVar19;
    if (*(long *)(param_2 + 0x18) == 0) {
      pbStack_308 = (byte *)0x8000000000000000;
      pbStack_300 = (byte *)0x8000000000000000;
      pbStack_2f8 = (byte *)0x8000000000000000;
      pbStack_2f0 = (byte *)0x8000000000000000;
      pbStack_318 = (byte *)0x8000000000000000;
      pbStack_310 = (byte *)0x8000000000000000;
      pbStack_390 = (byte *)0x0;
      pbStack_378 = param_1;
      pbStack_368 = param_2;
      pbVar22 = pbStack_200;
      pbVar2 = pbStack_1e0;
    }
    else {
      pbVar26 = (byte *)0x0;
      puVar28 = (undefined8 *)((ulong)&bStack_2e0 | 1);
      puVar21 = (undefined8 *)((ulong)&pbStack_220 | 1);
      pbStack_318 = (byte *)0x8000000000000000;
      pbStack_310 = (byte *)0x8000000000000000;
      pbStack_2f8 = (byte *)0x8000000000000000;
      pbStack_2f0 = (byte *)0x8000000000000000;
      pbStack_308 = (byte *)0x8000000000000000;
      pbStack_300 = (byte *)0x8000000000000000;
      pbStack_370 = (byte *)0x8000000000000000;
      pbStack_350 = (byte *)0x8000000000000000;
      pbStack_348 = (byte *)0x8000000000000000;
      pbStack_358 = (byte *)0x8000000000000000;
      pbStack_340 = (byte *)0x8000000000000000;
      pbStack_338 = (byte *)0x8000000000000000;
      pbVar20 = unaff_x20;
      pbVar25 = unaff_x24;
      pbVar4 = pbStack_200;
      pbStack_1f8 = pbStack_200;
      do {
        pbVar17 = pbVar4 + 0x40;
        bStack_2e0 = *pbVar4;
        param_4 = pbStack_360;
        param_5 = pbStack_398;
        param_6 = pbStack_3a0;
        param_7 = pbStack_3a8;
        param_8 = pbStack_388;
        in_x14 = pbStack_2e8;
        in_x17 = pbStack_380;
        pbVar22 = pbVar17;
        unaff_x20 = pbVar20;
        unaff_x24 = pbVar25;
        pbVar2 = pbVar26;
        if (bStack_2e0 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar4 + 1);
        puVar28[1] = *(undefined8 *)(pbVar4 + 9);
        *puVar28 = uVar11;
        pbStack_218 = *(byte **)(pbVar4 + 0x28);
        pbStack_220 = *(byte **)(pbVar4 + 0x20);
        pbStack_208 = *(byte **)(pbVar4 + 0x38);
        pbStack_210 = *(byte **)(pbVar4 + 0x30);
        uVar1 = CONCAT71(uStack_2d7,uStack_2d8);
        uVar11 = CONCAT71(uStack_2cf,uStack_2d0);
        if (0xc < bStack_2e0) {
          if (bStack_2e0 == 0xd) {
            func_0x000100baa718(&uStack_248,uVar1,uVar11);
            goto LAB_1014275dc;
          }
          if (bStack_2e0 == 0xe) {
            func_0x000100baa448(&uStack_248,uVar11,pbStack_2c8);
joined_r0x000101427540:
            pbVar22 = uStack_248;
            pbVar2 = pbStack_220;
            if (uVar1 != 0) {
              _free(uVar11);
              pbVar22 = uStack_248;
              pbVar2 = pbStack_220;
            }
            goto joined_r0x0001014275a8;
          }
          if (bStack_2e0 == 0xf) {
            func_0x000100baa448(&uStack_248,uVar1,uVar11);
            goto LAB_1014275dc;
          }
LAB_1014278f4:
          pbStack_240 = (byte *)FUN_108855b04(&bStack_2e0,auStack_71,&UNK_10b20ebc0);
          uStack_248 = (byte *)CONCAT71(uStack_248._1_7_,1);
LAB_10142798c:
          pbStack_1e0 = pbVar26 + 1;
          pbStack_88 = pbStack_3c0;
          pbStack_90 = pbStack_370;
          pbStack_a0 = pbStack_3b8;
          pbStack_a8 = pbStack_348;
          pbStack_b0 = pbStack_388;
          pbStack_b8 = pbStack_3b0;
          pbStack_c0 = pbStack_350;
          pbStack_c8 = pbStack_360;
          pbStack_d0 = pbStack_378;
          pbStack_d8 = pbStack_358;
          pbStack_e0 = pbStack_368;
          pbStack_e8 = pbStack_380;
          pbStack_f0 = pbStack_340;
          pbStack_f8 = pbStack_2e8;
          pbStack_108 = pbStack_338;
          pbStack_100 = pbStack_390;
          pbVar19 = pbStack_240;
          pbStack_1f8 = pbVar17;
          pbStack_98 = pbVar25;
          pbStack_80 = pbVar20;
LAB_101427990:
          bStack_2e0 = 0;
          bStack_2df = 0;
          uStack_2de = 0x800000000000;
          uStack_2d8 = SUB81(pbVar19,0);
          uStack_2d7 = (undefined7)((ulong)pbVar19 >> 8);
          if (pbStack_308 != (byte *)0x8000000000000000) {
joined_r0x0001014285a4:
            uStack_2de = 0x800000000000;
            bStack_2df = 0;
            bStack_2e0 = 0;
            if (pbVar20 != (byte *)0x0) {
              uStack_2de = 0x800000000000;
              bStack_2df = 0;
              bStack_2e0 = 0;
              pbVar19 = pbStack_3a8 + 8;
              do {
                if (*(long *)(pbVar19 + -8) != 0) {
                  _free(*(undefined8 *)pbVar19);
                }
                pbVar19 = pbVar19 + 0x18;
                pbVar20 = pbVar20 + -1;
              } while (pbVar20 != (byte *)0x0);
            }
            if (pbStack_308 != (byte *)0x0) {
              _free(pbStack_3a8);
            }
          }
LAB_1014285b8:
          if (pbStack_300 != (byte *)0x8000000000000000) {
            if (pbVar25 != (byte *)0x0) {
              pbVar19 = pbStack_3a0 + 8;
              do {
                if (*(long *)(pbVar19 + -8) != 0) {
                  _free(*(undefined8 *)pbVar19);
                }
                pbVar19 = pbVar19 + 0x18;
                pbVar25 = pbVar25 + -1;
              } while (pbVar25 != (byte *)0x0);
            }
            if (pbStack_300 != (byte *)0x0) {
              _free(pbStack_3a0);
            }
          }
          if (pbStack_2f8 != (byte *)0x8000000000000000) {
            if (pbStack_388 != (byte *)0x0) {
              pbVar19 = pbStack_398 + 8;
              do {
                if (*(long *)(pbVar19 + -8) != 0) {
                  _free(*(undefined8 *)pbVar19);
                }
                pbVar19 = pbVar19 + 0x18;
                pbStack_388 = pbStack_388 + -1;
              } while (pbStack_388 != (byte *)0x0);
            }
            if (pbStack_2f8 != (byte *)0x0) {
              _free(pbStack_398);
            }
          }
          if (pbStack_2f0 != (byte *)0x8000000000000000) {
            if (pbStack_360 != (byte *)0x0) {
              pbVar19 = pbStack_378 + 8;
              do {
                if (*(long *)(pbVar19 + -8) != 0) {
                  _free(*(undefined8 *)pbVar19);
                }
                pbVar19 = pbVar19 + 0x18;
                pbStack_360 = pbStack_360 + -1;
              } while (pbStack_360 != (byte *)0x0);
            }
            if (pbStack_2f0 != (byte *)0x0) {
              _free(pbStack_378);
            }
          }
          if (pbStack_318 != (byte *)0x8000000000000000) {
            if (pbStack_368 != (byte *)0x0) {
              pbVar19 = pbStack_380 + 0x20;
              do {
                if (*(long *)(pbVar19 + -0x20) != 0) {
                  _free(*(undefined8 *)(pbVar19 + -0x18));
                }
                if (*(long *)(pbVar19 + -8) != 0) {
                  _free(*(undefined8 *)pbVar19);
                }
                if (*(long *)(pbVar19 + 0x10) != -0x8000000000000000 &&
                    *(long *)(pbVar19 + 0x10) != 0) {
                  _free(*(undefined8 *)(pbVar19 + 0x18));
                }
                pbVar19 = pbVar19 + 0x48;
                pbStack_368 = pbStack_368 + -1;
              } while (pbStack_368 != (byte *)0x0);
            }
            if (pbStack_340 != (byte *)0x0) {
              _free(pbStack_380);
            }
          }
          if (pbStack_310 != (byte *)0x8000000000000000) {
            if (pbStack_2e8 != (byte *)0x0) {
              pbVar19 = (byte *)0x0;
              do {
                pbVar22 = pbStack_390 + (long)pbVar19 * 0x30;
                if (*(long *)pbVar22 != 0) {
                  _free(*(undefined8 *)(pbVar22 + 8));
                }
                lVar12 = *(long *)(pbVar22 + 0x20);
                lVar24 = *(long *)(pbVar22 + 0x28);
                if (lVar24 != 0) {
                  puVar21 = (undefined8 *)(lVar12 + 8);
                  do {
                    if (puVar21[-1] != 0) {
                      _free(*puVar21);
                    }
                    puVar21 = puVar21 + 3;
                    lVar24 = lVar24 + -1;
                  } while (lVar24 != 0);
                }
                if (*(long *)(pbVar22 + 0x18) != 0) {
                  _free(lVar12);
                }
                pbVar19 = pbVar19 + 1;
              } while (pbVar19 != pbStack_2e8);
            }
            if (pbStack_338 != (byte *)0x0) {
              _free(pbStack_390);
            }
          }
          FUN_100d34830(&pbStack_200);
          if ((byte)pbStack_220 != '\x16') {
            FUN_100e077ec(&pbStack_220);
          }
          goto LAB_101428460;
        }
        if (bStack_2e0 == 1) {
          bVar13 = bStack_2df;
          if (5 < bStack_2df) {
            bVar13 = 6;
          }
          uStack_248 = (byte *)((ulong)CONCAT61(uStack_248._2_6_,bVar13) << 8);
        }
        else {
          if (bStack_2e0 != 4) {
            if (bStack_2e0 != 0xc) goto LAB_1014278f4;
            func_0x000100baa718(&uStack_248,uVar11);
            goto joined_r0x000101427540;
          }
          if (5 < uVar1) {
            uVar1 = 6;
          }
          uStack_248 = (byte *)((ulong)CONCAT61(uStack_248._2_6_,(char)uVar1) << 8);
        }
LAB_1014275dc:
        FUN_100e077ec(&bStack_2e0);
        pbVar22 = uStack_248;
        pbVar2 = pbStack_220;
joined_r0x0001014275a8:
        uStack_248 = pbVar22;
        pbStack_220 = pbVar2;
        if (((ulong)pbVar22 & 1) != 0) goto LAB_10142798c;
        uStack_248._1_1_ = (byte)((ulong)pbVar22 >> 8);
        pbStack_220._0_1_ = (byte)pbVar2;
        bVar13 = (byte)pbStack_220;
        pbStack_220._1_7_ = (undefined7)((ulong)pbVar2 >> 8);
        pbVar22 = pbStack_3c0;
        pbVar2 = pbStack_3b8;
        pbVar4 = pbStack_3a0;
        pbVar8 = pbStack_348;
        if (2 < uStack_248._1_1_) {
          if (uStack_248._1_1_ < 5) {
            if (uStack_248._1_1_ == 3) {
              if (pbStack_2f8 == (byte *)0x8000000000000000) {
                pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
                if (bVar13 == 0x16) {
                  pbStack_1e0 = pbVar26 + 1;
                  pbStack_f8 = pbStack_2e8;
                  pbStack_88 = pbStack_3c0;
                  pbStack_90 = pbStack_370;
                  pbStack_a0 = pbStack_3b8;
                  pbStack_b0 = pbStack_388;
                  pbStack_a8 = pbStack_348;
                  pbStack_b8 = pbStack_3b0;
                  pbStack_c8 = pbStack_360;
                  pbStack_c0 = pbStack_350;
                  pbStack_d0 = pbStack_378;
                  pbStack_e0 = pbStack_368;
                  pbStack_d8 = pbStack_358;
                  pbStack_f0 = pbStack_340;
                  pbStack_e8 = pbStack_380;
                  pbStack_108 = pbStack_338;
                  pbStack_100 = pbStack_390;
                  pbStack_1f8 = pbVar17;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_101428f14;
                }
                uVar11 = *puVar21;
                puVar28[1] = puVar21[1];
                *puVar28 = uVar11;
                uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
                *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
                bStack_2e0 = bVar13;
                func_0x0001013a7e30(&uStack_248,&bStack_2e0);
                pbStack_2f8 = uStack_248;
                if (uStack_248 != (byte *)0x8000000000000000) {
                  pbStack_388 = pbStack_238;
                  pbStack_3b0 = pbStack_240;
                  pbStack_398 = pbStack_240;
                  pbStack_350 = pbStack_2f8;
                  goto LAB_1014274cc;
                }
                pbStack_2f8 = (byte *)0x8000000000000000;
LAB_101427fe8:
                pbStack_1e0 = pbVar26 + 1;
                pbStack_88 = pbStack_3c0;
                pbStack_90 = pbStack_370;
                pbStack_a0 = pbStack_3b8;
                pbStack_a8 = pbStack_348;
                pbStack_b0 = pbStack_388;
                pbStack_b8 = pbStack_3b0;
                pbStack_c0 = pbStack_350;
                pbStack_c8 = pbStack_360;
                pbStack_d0 = pbStack_378;
                pbStack_d8 = pbStack_358;
                pbStack_e0 = pbStack_368;
                pbStack_e8 = pbStack_380;
                pbStack_f0 = pbStack_340;
                pbStack_f8 = pbStack_2e8;
                pbStack_100 = pbStack_390;
                pbStack_108 = pbStack_338;
                pbVar19 = pbStack_240;
                pbStack_1f8 = pbVar17;
                pbStack_98 = pbVar25;
                pbStack_80 = pbVar20;
              }
              else {
                pbStack_1e0 = pbVar26 + 1;
                pbStack_88 = pbStack_3c0;
                pbStack_90 = pbStack_370;
                pbStack_a0 = pbStack_3b8;
                pbStack_b0 = pbStack_388;
                pbStack_a8 = pbStack_348;
                pbStack_b8 = pbStack_3b0;
                pbStack_c8 = pbStack_360;
                pbStack_c0 = pbStack_350;
                pbStack_d0 = pbStack_378;
                pbStack_e0 = pbStack_368;
                pbStack_d8 = pbStack_358;
                pbStack_e8 = pbStack_380;
                pbStack_f8 = pbStack_2e8;
                pbStack_f0 = pbStack_340;
                pbStack_108 = pbStack_338;
                pbStack_100 = pbStack_390;
                uStack_248 = &UNK_108cabd72;
                pbStack_240 = (byte *)0x5;
                bStack_2e0 = (byte)&uStack_248;
                bStack_2df = (byte)((ulong)&uStack_248 >> 8);
                uStack_2de = (undefined6)((ulong)&uStack_248 >> 0x10);
                uStack_2d8 = 0xa0;
                uStack_2d7 = 0x100c7b3;
                pbStack_1f8 = pbVar17;
                pbStack_98 = pbVar25;
                pbStack_80 = pbVar20;
                pbVar19 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_2e0);
              }
            }
            else {
              if (pbStack_300 == (byte *)0x8000000000000000) {
                pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
                if (bVar13 == 0x16) {
                  pbStack_1e0 = pbVar26 + 1;
                  pbStack_f8 = pbStack_2e8;
                  pbStack_88 = pbStack_3c0;
                  pbStack_90 = pbStack_370;
                  pbStack_a0 = pbStack_3b8;
                  pbStack_b0 = pbStack_388;
                  pbStack_a8 = pbStack_348;
                  pbStack_b8 = pbStack_3b0;
                  pbStack_c8 = pbStack_360;
                  pbStack_c0 = pbStack_350;
                  pbStack_d0 = pbStack_378;
                  pbStack_e0 = pbStack_368;
                  pbStack_d8 = pbStack_358;
                  pbStack_f0 = pbStack_340;
                  pbStack_e8 = pbStack_380;
                  pbStack_108 = pbStack_338;
                  pbStack_100 = pbStack_390;
                  pbStack_1f8 = pbVar17;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_101428f14;
                }
                uVar11 = *puVar21;
                puVar28[1] = puVar21[1];
                *puVar28 = uVar11;
                uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
                *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
                bStack_2e0 = bVar13;
                func_0x0001012652ac(&uStack_248,&bStack_2e0);
                pbStack_300 = uStack_248;
                unaff_x24 = pbStack_238;
                pbVar2 = pbStack_240;
                pbVar4 = pbStack_240;
                pbVar8 = pbStack_300;
                if (uStack_248 == (byte *)0x8000000000000000) {
                  pbStack_300 = (byte *)0x8000000000000000;
                  goto LAB_101427fe8;
                }
                goto LAB_1014274cc;
              }
              pbStack_1e0 = pbVar26 + 1;
              pbStack_88 = pbStack_3c0;
              pbStack_90 = pbStack_370;
              pbStack_a0 = pbStack_3b8;
              pbStack_b0 = pbStack_388;
              pbStack_a8 = pbStack_348;
              pbStack_b8 = pbStack_3b0;
              pbStack_c8 = pbStack_360;
              pbStack_c0 = pbStack_350;
              pbStack_d0 = pbStack_378;
              pbStack_e0 = pbStack_368;
              pbStack_d8 = pbStack_358;
              pbStack_e8 = pbStack_380;
              pbStack_f8 = pbStack_2e8;
              pbStack_f0 = pbStack_340;
              pbStack_108 = pbStack_338;
              pbStack_100 = pbStack_390;
              uStack_248 = &UNK_108cbffc8;
              pbStack_240 = (byte *)0x9;
              bStack_2e0 = (byte)&uStack_248;
              bStack_2df = (byte)((ulong)&uStack_248 >> 8);
              uStack_2de = (undefined6)((ulong)&uStack_248 >> 0x10);
              uStack_2d8 = 0xa0;
              uStack_2d7 = 0x100c7b3;
              pbStack_1f8 = pbVar17;
              pbStack_98 = pbVar25;
              pbStack_80 = pbVar20;
              pbVar19 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_2e0);
            }
            goto LAB_101427990;
          }
          if (uStack_248._1_1_ != 5) {
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            if (bVar13 == 0x16) {
              pbStack_1e0 = pbVar26 + 1;
              pbStack_f8 = pbStack_2e8;
              pbStack_88 = pbStack_3c0;
              pbStack_90 = pbStack_370;
              pbStack_a0 = pbStack_3b8;
              pbStack_b0 = pbStack_388;
              pbStack_a8 = pbStack_348;
              pbStack_b8 = pbStack_3b0;
              pbStack_c8 = pbStack_360;
              pbStack_c0 = pbStack_350;
              pbStack_d0 = pbStack_378;
              pbStack_e0 = pbStack_368;
              pbStack_d8 = pbStack_358;
              pbStack_f0 = pbStack_340;
              pbStack_e8 = pbStack_380;
              pbStack_108 = pbStack_338;
              pbStack_100 = pbStack_390;
              pbStack_1f8 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101428f14:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x101428f18);
              (*pcVar9)();
            }
            uVar11 = *puVar21;
            puVar28[1] = puVar21[1];
            *puVar28 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
            bStack_2e0 = bVar13;
            FUN_100e077ec(&bStack_2e0);
            goto LAB_1014274cc;
          }
          if (pbStack_308 != (byte *)0x8000000000000000) {
            pbStack_1e0 = pbVar26 + 1;
            pbStack_88 = pbStack_3c0;
            pbStack_90 = pbStack_370;
            pbStack_a0 = pbStack_3b8;
            pbStack_b0 = pbStack_388;
            pbStack_a8 = pbStack_348;
            pbStack_b8 = pbStack_3b0;
            pbStack_c8 = pbStack_360;
            pbStack_c0 = pbStack_350;
            pbStack_d0 = pbStack_378;
            pbStack_e0 = pbStack_368;
            pbStack_d8 = pbStack_358;
            pbStack_e8 = pbStack_380;
            pbStack_f8 = pbStack_2e8;
            pbStack_f0 = pbStack_340;
            pbStack_108 = pbStack_338;
            pbStack_100 = pbStack_390;
            uStack_248 = &UNK_108c983a0;
            pbStack_240 = (byte *)0x8;
            bStack_2e0 = (byte)&uStack_248;
            bStack_2df = (byte)((ulong)&uStack_248 >> 8);
            uStack_2de = (undefined6)((ulong)&uStack_248 >> 0x10);
            uStack_2d8 = 0xa0;
            uStack_2d7 = 0x100c7b3;
            pbStack_1f8 = pbVar17;
            pbStack_98 = pbVar25;
            pbStack_80 = pbVar20;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_2e0);
            uStack_2d8 = (undefined1)uVar11;
            uStack_2d7 = (undefined7)((ulong)uVar11 >> 8);
            goto joined_r0x0001014285a4;
          }
          pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
          if (bVar13 == 0x16) {
            pbStack_1e0 = pbVar26 + 1;
            pbStack_f8 = pbStack_2e8;
            pbStack_88 = pbStack_3c0;
            pbStack_90 = pbStack_370;
            pbStack_a0 = pbStack_3b8;
            pbStack_b0 = pbStack_388;
            pbStack_a8 = pbStack_348;
            pbStack_b8 = pbStack_3b0;
            pbStack_c8 = pbStack_360;
            pbStack_c0 = pbStack_350;
            pbStack_d0 = pbStack_378;
            pbStack_e0 = pbStack_368;
            pbStack_d8 = pbStack_358;
            pbStack_f0 = pbStack_340;
            pbStack_e8 = pbStack_380;
            pbStack_108 = pbStack_338;
            pbStack_100 = pbStack_390;
            pbStack_1f8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101428f14;
          }
          uVar11 = *puVar21;
          puVar28[1] = puVar21[1];
          *puVar28 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
          bStack_2e0 = bVar13;
          func_0x0001012232c8(&uStack_248,&bStack_2e0);
          pbStack_370 = uStack_248;
          pbStack_3a8 = pbStack_240;
          unaff_x20 = pbStack_238;
          pbVar22 = pbStack_3a8;
          pbStack_308 = pbStack_370;
          if (uStack_248 != (byte *)0x8000000000000000) goto LAB_1014274cc;
          pbStack_1e0 = pbVar26 + 1;
          pbStack_88 = pbStack_3c0;
          pbStack_a0 = pbStack_3b8;
          pbStack_b0 = pbStack_388;
          pbStack_a8 = pbStack_348;
          pbStack_b8 = pbStack_3b0;
          pbStack_c8 = pbStack_360;
          pbStack_c0 = pbStack_350;
          pbStack_d0 = pbStack_378;
          pbStack_e0 = pbStack_368;
          pbStack_d8 = pbStack_358;
          pbStack_e8 = pbStack_380;
          pbStack_f8 = pbStack_2e8;
          pbStack_f0 = pbStack_340;
          pbStack_108 = pbStack_338;
          pbStack_100 = pbStack_390;
          bStack_2e0 = 0;
          bStack_2df = 0;
          uStack_2de = 0x800000000000;
          uStack_2d8 = SUB81(pbStack_240,0);
          uStack_2d7 = (undefined7)((ulong)pbStack_240 >> 8);
          pbStack_1f8 = pbVar17;
          pbStack_98 = pbVar25;
          pbStack_80 = pbVar20;
          goto LAB_1014285b8;
        }
        if (uStack_248._1_1_ != 0) {
          if (uStack_248._1_1_ != 1) {
            if (pbStack_2f0 != (byte *)0x8000000000000000) {
              pbStack_1e0 = pbVar26 + 1;
              pbStack_88 = pbStack_3c0;
              pbStack_90 = pbStack_370;
              pbStack_a0 = pbStack_3b8;
              pbStack_b0 = pbStack_388;
              pbStack_a8 = pbStack_348;
              pbStack_b8 = pbStack_3b0;
              pbStack_c8 = pbStack_360;
              pbStack_c0 = pbStack_350;
              pbStack_d0 = pbStack_378;
              pbStack_e0 = pbStack_368;
              pbStack_d8 = pbStack_358;
              pbStack_e8 = pbStack_380;
              pbStack_f8 = pbStack_2e8;
              pbStack_f0 = pbStack_340;
              pbStack_108 = pbStack_338;
              pbStack_100 = pbStack_390;
              uStack_248 = &UNK_108cb67d5;
              pbStack_240 = (byte *)0xa;
              bStack_2e0 = (byte)&uStack_248;
              bStack_2df = (byte)((ulong)&uStack_248 >> 8);
              uStack_2de = (undefined6)((ulong)&uStack_248 >> 0x10);
              uStack_2d8 = 0xa0;
              uStack_2d7 = 0x100c7b3;
              pbStack_1f8 = pbVar17;
              pbStack_98 = pbVar25;
              pbStack_80 = pbVar20;
              pbVar19 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_2e0);
              goto LAB_101427990;
            }
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            if (bVar13 == 0x16) {
              pbStack_1e0 = pbVar26 + 1;
              pbStack_f8 = pbStack_2e8;
              pbStack_88 = pbStack_3c0;
              pbStack_90 = pbStack_370;
              pbStack_a0 = pbStack_3b8;
              pbStack_b0 = pbStack_388;
              pbStack_a8 = pbStack_348;
              pbStack_b8 = pbStack_3b0;
              pbStack_c8 = pbStack_360;
              pbStack_c0 = pbStack_350;
              pbStack_d0 = pbStack_378;
              pbStack_e0 = pbStack_368;
              pbStack_d8 = pbStack_358;
              pbStack_f0 = pbStack_340;
              pbStack_e8 = pbStack_380;
              pbStack_108 = pbStack_338;
              pbStack_100 = pbStack_390;
              pbStack_1f8 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101428f14;
            }
            uVar11 = *puVar21;
            puVar28[1] = puVar21[1];
            *puVar28 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
            bStack_2e0 = bVar13;
            func_0x00010127dd40(&uStack_248,&bStack_2e0);
            pbStack_2f0 = uStack_248;
            if (uStack_248 == (byte *)0x8000000000000000) {
              pbStack_2f0 = (byte *)0x8000000000000000;
              goto LAB_10142798c;
            }
            pbStack_378 = pbStack_240;
            pbStack_360 = pbStack_238;
            pbStack_358 = pbStack_2f0;
            goto LAB_1014274cc;
          }
          if (pbStack_318 == (byte *)0x8000000000000000) {
            pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
            if (bVar13 == 0x16) {
              pbStack_1e0 = pbVar26 + 1;
              pbStack_f8 = pbStack_2e8;
              pbStack_88 = pbStack_3c0;
              pbStack_90 = pbStack_370;
              pbStack_a0 = pbStack_3b8;
              pbStack_b0 = pbStack_388;
              pbStack_a8 = pbStack_348;
              pbStack_b8 = pbStack_3b0;
              pbStack_c8 = pbStack_360;
              pbStack_c0 = pbStack_350;
              pbStack_d0 = pbStack_378;
              pbStack_e0 = pbStack_368;
              pbStack_d8 = pbStack_358;
              pbStack_f0 = pbStack_340;
              pbStack_e8 = pbStack_380;
              pbStack_108 = pbStack_338;
              pbStack_100 = pbStack_390;
              pbStack_1f8 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101428f14;
            }
            uVar11 = *puVar21;
            puVar28[1] = puVar21[1];
            *puVar28 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
            bStack_2e0 = bVar13;
            func_0x0001012527b8(&uStack_248,&bStack_2e0);
            pbStack_318 = uStack_248;
            if (uStack_248 == (byte *)0x8000000000000000) {
              pbStack_318 = (byte *)0x8000000000000000;
              goto LAB_10142798c;
            }
            pbStack_380 = pbStack_240;
            pbStack_368 = pbStack_238;
            pbStack_340 = pbStack_318;
            goto LAB_1014274cc;
          }
          pbStack_1e0 = pbVar26 + 1;
          pbStack_88 = pbStack_3c0;
          pbStack_90 = pbStack_370;
          pbStack_a0 = pbStack_3b8;
          pbStack_b0 = pbStack_388;
          pbStack_a8 = pbStack_348;
          pbStack_b8 = pbStack_3b0;
          pbStack_c8 = pbStack_360;
          pbStack_c0 = pbStack_350;
          pbStack_d0 = pbStack_378;
          pbStack_e0 = pbStack_368;
          pbStack_d8 = pbStack_358;
          pbStack_e8 = pbStack_380;
          pbStack_f8 = pbStack_2e8;
          pbStack_f0 = pbStack_340;
          pbStack_108 = pbStack_338;
          pbStack_100 = pbStack_390;
          uStack_248 = &UNK_108c98238;
          pbStack_240 = (byte *)0x8;
          bStack_2e0 = (byte)&uStack_248;
          bStack_2df = (byte)((ulong)&uStack_248 >> 8);
          uStack_2de = (undefined6)((ulong)&uStack_248 >> 0x10);
          uStack_2d8 = 0xa0;
          uStack_2d7 = 0x100c7b3;
          pbStack_1f8 = pbVar17;
          pbStack_98 = pbVar25;
          pbStack_80 = pbVar20;
          pbVar19 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_2e0);
          goto LAB_101427990;
        }
        if (pbStack_310 != (byte *)0x8000000000000000) {
          pbStack_1e0 = pbVar26 + 1;
          pbStack_88 = pbStack_3c0;
          pbStack_90 = pbStack_370;
          pbStack_a0 = pbStack_3b8;
          pbStack_b0 = pbStack_388;
          pbStack_a8 = pbStack_348;
          pbStack_b8 = pbStack_3b0;
          pbStack_c8 = pbStack_360;
          pbStack_c0 = pbStack_350;
          pbStack_d0 = pbStack_378;
          pbStack_e0 = pbStack_368;
          pbStack_d8 = pbStack_358;
          pbStack_e8 = pbStack_380;
          pbStack_f8 = pbStack_2e8;
          pbStack_f0 = pbStack_340;
          pbStack_108 = pbStack_338;
          pbStack_100 = pbStack_390;
          uStack_248 = &UNK_108cabd77;
          pbStack_240 = (byte *)0x7;
          bStack_2e0 = (byte)&uStack_248;
          bStack_2df = (byte)((ulong)&uStack_248 >> 8);
          uStack_2de = (undefined6)((ulong)&uStack_248 >> 0x10);
          uStack_2d8 = 0xa0;
          uStack_2d7 = 0x100c7b3;
          pbStack_1f8 = pbVar17;
          pbStack_98 = pbVar25;
          pbStack_80 = pbVar20;
          pbVar19 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_2e0);
          goto LAB_101427990;
        }
        pbStack_220 = (byte *)CONCAT71(pbStack_220._1_7_,0x16);
        if (bVar13 == 0x16) {
          pbStack_1e0 = pbVar26 + 1;
          pbStack_f8 = pbStack_2e8;
          pbStack_88 = pbStack_3c0;
          pbStack_90 = pbStack_370;
          pbStack_a0 = pbStack_3b8;
          pbStack_b0 = pbStack_388;
          pbStack_a8 = pbStack_348;
          pbStack_b8 = pbStack_3b0;
          pbStack_c8 = pbStack_360;
          pbStack_c0 = pbStack_350;
          pbStack_d0 = pbStack_378;
          pbStack_e0 = pbStack_368;
          pbStack_d8 = pbStack_358;
          pbStack_f0 = pbStack_340;
          pbStack_e8 = pbStack_380;
          pbStack_108 = pbStack_338;
          pbStack_100 = pbStack_390;
          pbStack_1f8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101428f14;
        }
        uVar11 = *puVar21;
        puVar28[1] = puVar21[1];
        *puVar28 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar28 + 0xf) = uVar11;
        bStack_2e0 = bVar13;
        func_0x0001013407f0(&uStack_248,&bStack_2e0);
        if (uStack_248 == (byte *)0x8000000000000000) {
          pbStack_310 = (byte *)0x8000000000000000;
          goto LAB_10142798c;
        }
        pbStack_390 = pbStack_240;
        pbStack_2e8 = pbStack_238;
        pbStack_310 = uStack_248;
        pbStack_338 = uStack_248;
LAB_1014274cc:
        pbStack_348 = pbVar8;
        pbStack_3a0 = pbVar4;
        pbStack_3b8 = pbVar2;
        pbStack_3c0 = pbVar22;
        pbVar26 = pbVar26 + 1;
        param_4 = pbStack_360;
        param_5 = pbStack_398;
        param_6 = pbStack_3a0;
        param_7 = pbStack_3a8;
        param_8 = pbStack_388;
        in_x14 = pbStack_2e8;
        in_x17 = pbStack_380;
        pbVar22 = pbVar19;
        pbVar20 = unaff_x20;
        pbVar25 = unaff_x24;
        pbVar4 = pbVar17;
        pbVar2 = (byte *)((lVar12 - 0x40U >> 6) + 1);
      } while (pbVar17 != pbVar19);
    }
    pbStack_1e0 = pbVar2;
    pbVar2 = pbStack_1e0;
    bVar10 = pbStack_310 != (byte *)0x8000000000000000;
    pbStack_1a0 = (byte *)0x0;
    if (bVar10) {
      pbStack_1a0 = pbStack_310;
    }
    pbStack_198 = (byte *)0x8;
    if (bVar10) {
      pbStack_198 = pbStack_390;
    }
    bStack_2e0 = (byte)pbStack_1a0;
    bStack_2df = (byte)((ulong)pbStack_1a0 >> 8);
    uStack_2de = (undefined6)((ulong)pbStack_1a0 >> 0x10);
    uStack_2d8 = SUB81(pbStack_198,0);
    uStack_2d7 = (undefined7)((ulong)pbStack_198 >> 8);
    pbStack_190 = (byte *)0x0;
    if (bVar10) {
      pbStack_190 = in_x14;
    }
    bVar10 = pbStack_318 != (byte *)0x8000000000000000;
    pbStack_2c8 = (byte *)0x0;
    if (bVar10) {
      pbStack_2c8 = pbStack_318;
    }
    uStack_2d0 = SUB81(pbStack_190,0);
    uStack_2cf = (undefined7)((ulong)pbStack_190 >> 8);
    pbStack_2c0 = (byte *)0x8;
    if (bVar10) {
      pbStack_2c0 = in_x17;
    }
    pbStack_2b8 = (byte *)0x0;
    if (bVar10) {
      pbStack_2b8 = pbStack_368;
    }
    bVar10 = pbStack_2f0 != (byte *)0x8000000000000000;
    pbStack_2b0 = (byte *)0x0;
    if (bVar10) {
      pbStack_2b0 = pbStack_2f0;
    }
    pbStack_2a8 = (byte *)0x8;
    if (bVar10) {
      pbStack_2a8 = pbStack_378;
    }
    pbStack_2a0 = (byte *)0x0;
    if (bVar10) {
      pbStack_2a0 = param_4;
    }
    bVar10 = pbStack_2f8 != (byte *)0x8000000000000000;
    pbStack_298 = (byte *)0x0;
    if (bVar10) {
      pbStack_298 = pbStack_2f8;
    }
    pbStack_290 = (byte *)0x8;
    if (bVar10) {
      pbStack_290 = param_5;
    }
    pbStack_288 = (byte *)0x0;
    if (bVar10) {
      pbStack_288 = param_8;
    }
    bVar10 = pbStack_300 != (byte *)0x8000000000000000;
    pbStack_280 = (byte *)0x0;
    if (bVar10) {
      pbStack_280 = pbStack_300;
    }
    pbStack_278 = (byte *)0x8;
    if (bVar10) {
      pbStack_278 = param_6;
    }
    pbStack_270 = (byte *)0x0;
    if (bVar10) {
      pbStack_270 = unaff_x24;
    }
    bVar10 = pbStack_308 != (byte *)0x8000000000000000;
    pbStack_268 = (byte *)0x0;
    if (bVar10) {
      pbStack_268 = pbStack_308;
    }
    pbStack_260 = (byte *)0x8;
    if (bVar10) {
      pbStack_260 = param_7;
    }
    pbStack_258 = (byte *)0x0;
    if (bVar10) {
      pbStack_258 = unaff_x20;
    }
    pbStack_1f8 = pbVar22;
    pbStack_188 = pbStack_2c8;
    pbStack_180 = pbStack_2c0;
    pbStack_178 = pbStack_2b8;
    pbStack_170 = pbStack_2b0;
    pbStack_168 = pbStack_2a8;
    pbStack_160 = pbStack_2a0;
    pbStack_158 = pbStack_298;
    pbStack_150 = pbStack_290;
    pbStack_148 = pbStack_288;
    pbStack_140 = pbStack_280;
    pbStack_138 = pbStack_278;
    pbStack_130 = pbStack_270;
    pbStack_128 = pbStack_268;
    pbStack_120 = pbStack_260;
    pbStack_118 = pbStack_258;
    FUN_100d34830(&pbStack_200);
    if (pbVar19 != pbVar22) {
      uStack_248 = pbVar2;
      uVar11 = FUN_1087e422c(pbVar2 + ((ulong)((long)pbVar19 - (long)pbVar22) >> 6),&uStack_248,
                             &UNK_10b23a190);
      bStack_2e0 = 0;
      bStack_2df = 0;
      uStack_2de = 0x800000000000;
      uStack_2d8 = (undefined1)uVar11;
      uStack_2d7 = (undefined7)((ulong)uVar11 >> 8);
      FUN_100e589f4(&pbStack_1a0);
    }
  }
LAB_101428460:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_2de,CONCAT11(bStack_2df,bStack_2e0)) != -0x8000000000000000) {
    *(byte **)(param_1 + 0x68) = pbStack_278;
    *(byte **)(param_1 + 0x60) = pbStack_280;
    *(byte **)(param_1 + 0x78) = pbStack_268;
    *(byte **)(param_1 + 0x70) = pbStack_270;
    *(byte **)(param_1 + 0x88) = pbStack_258;
    *(byte **)(param_1 + 0x80) = pbStack_260;
    *(byte **)(param_1 + 0x28) = pbStack_2b8;
    *(byte **)(param_1 + 0x20) = pbStack_2c0;
    *(byte **)(param_1 + 0x38) = pbStack_2a8;
    *(byte **)(param_1 + 0x30) = pbStack_2b0;
    *(byte **)(param_1 + 0x48) = pbStack_298;
    *(byte **)(param_1 + 0x40) = pbStack_2a0;
    *(byte **)(param_1 + 0x58) = pbStack_288;
    *(byte **)(param_1 + 0x50) = pbStack_290;
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_2d7,uStack_2d8);
    *(ulong *)param_1 = CONCAT62(uStack_2de,CONCAT11(bStack_2df,bStack_2e0));
    *(byte **)(param_1 + 0x18) = pbStack_2c8;
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_2cf,uStack_2d0);
    return;
  }
  uVar11 = CONCAT71(uStack_2d7,uStack_2d8);
LAB_101428488:
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80;
  *(undefined8 *)(param_1 + 8) = uVar11;
  return;
}

