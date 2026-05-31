
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c0fe88(long param_1,byte *******param_2)

{
  undefined2 *puVar1;
  ushort *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  byte *******pppppppbVar11;
  code *pcVar12;
  char cVar13;
  int iVar14;
  byte ******ppppppbVar15;
  long lVar16;
  ulong uVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined *puVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbStack_470;
  byte *******pppppppbStack_468;
  byte *******pppppppbStack_460;
  byte *******pppppppbStack_458;
  byte ******ppppppbStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  byte ******ppppppbStack_438;
  byte *******pppppppbStack_430;
  byte *******pppppppbStack_428;
  byte *******pppppppbStack_420;
  byte *******pppppppbStack_418;
  byte ******ppppppbStack_410;
  byte *******pppppppbStack_408;
  byte ******ppppppbStack_400;
  byte ******ppppppbStack_3f8;
  undefined8 uStack_3f0;
  byte *******pppppppbStack_3e8;
  undefined1 auStack_3e0 [288];
  undefined1 auStack_2c0 [288];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *******pppppppbStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  undefined7 uStack_117;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  byte ******ppppppbStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  
  plVar22 = (long *)(param_1 + 0xb8);
  if ((*plVar22 != 4) ||
     ((ulong)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108)) < *(ulong *)(param_1 + 0x130)
     )) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb065e,0x25,&UNK_10b2333a0);
    goto LAB_100c12f40;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b631e50 - 1 < 2 ||
       ((bRam000000010b631e50 != 0 &&
        (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h7d1afe6264b209b7E
                            ), cVar13 != '\0')))) &&
      (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h7d1afe6264b209b7E
                          ), iVar14 != 0)))) {
    pppppppbStack_d8 =
         (byte *******)
         (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h7d1afe6264b209b7E + 6)
    ;
    pppppppbStack_430 = (byte *******)&pppppppbStack_110;
    pppppppbStack_428 = (byte *******)&UNK_10b2333b8;
    pppppppbStack_e8 = (byte *******)&pppppppbStack_430;
    pppppppbStack_f0 = (byte *******)0x1;
    pppppppbStack_e0 = (byte *******)0x1;
    pppppppbStack_110 = param_2;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&pppppppbStack_470,
               ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h7d1afe6264b209b7E
               ,&pppppppbStack_f0);
  }
  else {
    pppppppbStack_f0 = (byte *******)0x2;
    auStack_d0 = (undefined1  [8])
                 ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h7d1afe6264b209b7E
    ;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      pppppppbStack_418 =
           (byte *******)
           (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h7d1afe6264b209b7E +
           6);
      pppppppbStack_470 = (byte *******)&pppppppbStack_110;
      pppppppbStack_468 = (byte *******)&UNK_10b2333b8;
      pppppppbStack_428 = (byte *******)&pppppppbStack_470;
      pppppppbStack_430 = (byte *******)0x1;
      pppppppbStack_420 = (byte *******)0x1;
      pppppppbStack_110 = param_2;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pppppppbStack_f0,&pppppppbStack_430);
    }
    pppppppbStack_468 = pppppppbStack_e8;
    pppppppbStack_470 = pppppppbStack_f0;
    pppppppbStack_458 = pppppppbStack_d8;
    pppppppbStack_460 = pppppppbStack_e0;
    ppppppbStack_450 = (byte ******)auStack_d0;
  }
  if (pppppppbStack_470 != (byte *******)0x2) {
    pppppppbVar18 = pppppppbStack_468;
    if (((ulong)pppppppbStack_470 & 1) != 0) {
      pppppppbVar18 =
           (byte *******)
           ((long)pppppppbStack_468 + ((long)pppppppbStack_460[2] - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (*(code *)pppppppbStack_460[0xc])(pppppppbVar18,&pppppppbStack_458);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (ppppppbStack_450 != (byte ******)0x0)) {
    pppppppbStack_430 = (byte *******)ppppppbStack_450[2];
    pppppppbStack_428 = (byte *******)ppppppbStack_450[3];
    pppppppbStack_f0 = (byte *******)&pppppppbStack_430;
    pppppppbStack_e8 = (byte *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&pppppppbStack_470,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&pppppppbStack_f0);
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
      ((bRam000000010b631ec8 - 1 < 2 ||
       ((bRam000000010b631ec8 != 0 &&
        (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE
                            ), cVar13 != '\0')))))) &&
     (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE
                         ), iVar14 != 0)) {
    pppppppbStack_418 =
         (byte *******)
         (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE +
         0x30);
    pppppppbStack_80 = (byte *******)&UNK_108c78a8c;
    pppppppbStack_78 = (byte *******)0x9;
    pppppppbStack_f0 = (byte *******)&pppppppbStack_80;
    pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
    pppppppbStack_e0 = (byte *******)&pppppppbStack_90;
    pppppppbStack_d8 = (byte *******)&UNK_10b2333b8;
    pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
    pppppppbStack_430 = (byte *******)0x1;
    pppppppbStack_420 = (byte *******)0x2;
    pppppppbStack_90 = param_2;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE
               ,&pppppppbStack_430);
    lVar16 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppppbStack_108 =
           *(byte ********)
            (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE +
            0x20);
      pppppppbStack_100 =
           *(byte ********)
            (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE +
            0x28);
      pppppppbStack_110 = (byte *******)0x4;
      puVar20 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar20 = &UNK_10b3c24c8;
      }
      puVar23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar23 = &UNK_109adfc03;
      }
      iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
      if (iVar14 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
      }
    }
  }
  else {
    lVar16 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_440 = *(undefined8 *)
                    (
                    ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE
                    + 0x20);
      ppppppbStack_438 =
           *(byte *******)
            (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE +
            0x28);
      uStack_448 = 4;
      puVar20 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar20 = &UNK_10b3c24c8;
      }
      puVar23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar23 = &UNK_109adfc03;
      }
      iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_448);
      if (iVar14 != 0) {
        ppppppbStack_f8 =
             (byte ******)
             (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hfa417f228814268cE
             + 0x30);
        uStack_120._0_4_ = 0x8c78a8c;
        uStack_120._4_4_ = 1;
        bStack_118 = 9;
        uStack_117 = 0;
        pppppppbStack_430 = (byte *******)&uStack_120;
        pppppppbStack_428 = (byte *******)&UNK_10b208fd0;
        pppppppbStack_420 = (byte *******)&pppppppbStack_128;
        pppppppbStack_418 = (byte *******)&UNK_10b2333b8;
        pppppppbStack_108 = (byte *******)&pppppppbStack_430;
        pppppppbStack_110 = (byte *******)0x1;
        pppppppbStack_100 = (byte *******)0x2;
        uStack_b8 = (undefined4)uStack_440;
        uStack_b4 = (undefined4)((ulong)uStack_440 >> 0x20);
        uStack_c0 = (undefined4)uStack_448;
        uStack_bc = (undefined4)((ulong)uStack_448 >> 0x20);
        ppppppbStack_b0 = ppppppbStack_438;
        auStack_d0 = *(undefined1 (*) [8])(lVar16 + 0x60);
        pppppppbStack_e8 = *(byte ********)(lVar16 + 0x50);
        pppppppbStack_e0 = *(byte ********)(lVar16 + 0x58);
        pppppppbStack_f0 = (byte *******)0x1;
        if (pppppppbStack_e8 == (byte *******)0x0) {
          pppppppbStack_f0 = (byte *******)0x2;
        }
        uStack_a8 = *(undefined4 *)(lVar16 + 8);
        uStack_a4 = *(undefined4 *)(lVar16 + 0xc);
        pppppppbStack_90 = (byte *******)&pppppppbStack_110;
        pppppppbStack_88 = (byte *******)CONCAT71(pppppppbStack_88._1_7_,1);
        pppppppbStack_80 = (byte *******)&pppppppbStack_90;
        pppppppbStack_78 = (byte *******)&DAT_1061c2098;
        pppppppbStack_d8 = (byte *******)0x1;
        if (auStack_d0 == (undefined1  [8])0x0) {
          pppppppbStack_d8 = (byte *******)0x2;
        }
        pppppppbStack_98 = (byte *******)&pppppppbStack_80;
        pcStack_a0 = s__108b39f4f;
        uStack_c8 = (undefined4)*(undefined8 *)(lVar16 + 0x68);
        uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar16 + 0x68) >> 0x20);
        pppppppbStack_128 = param_2;
        (**(code **)(puVar20 + 0x20))(puVar23,&pppppppbStack_f0);
      }
    }
  }
  pppppppbVar18 = (byte *******)(param_1 + 0x100);
  bVar4 = *(byte *)param_2;
  if (bVar4 < 5) {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        _memcpy(auStack_3e0,param_2 + 1,0x120);
        pppppppbStack_428 = (byte *******)((ulong)*(uint *)(param_1 + 0x138) + 9);
        pppppppbStack_430 = pppppppbVar18;
        __ZN2h25frame7headers7Headers6encode17h46983ef077deee74E
                  (&pppppppbStack_f0,auStack_3e0,param_1,&pppppppbStack_430);
        if (pppppppbStack_f0 != (byte *******)0x0) {
          lVar16 = *plVar22;
          if (lVar16 != 4) {
            if ((lVar16 == 3) || (lVar16 == 0)) {
              (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))
                        (param_1 + 0xd8,*(undefined8 *)(param_1 + 200),
                         *(undefined8 *)(param_1 + 0xd0));
            }
            else if ((lVar16 == 1) && (*(long *)(param_1 + 200) != 0)) {
              _free(*(undefined8 *)(param_1 + 0xc0));
            }
          }
          *(undefined8 *)(param_1 + 0xb8) = 3;
          *(byte ********)(param_1 + 200) = pppppppbStack_e8;
          *(byte ********)(param_1 + 0xc0) = pppppppbStack_f0;
          *(byte ********)(param_1 + 0xd8) = pppppppbStack_d8;
          *(byte ********)(param_1 + 0xd0) = pppppppbStack_e0;
          *(undefined1 (*) [8])(param_1 + 0xe0) = auStack_d0;
        }
        goto joined_r0x000100c12d34;
      }
      pppppppbStack_428 = (byte *******)param_2[2];
      pppppppbStack_430 = (byte *******)param_2[1];
      pppppppbStack_418 = (byte *******)param_2[4];
      pppppppbStack_420 = (byte *******)param_2[3];
      pppppppbStack_408 = (byte *******)param_2[6];
      ppppppbStack_410 = param_2[5];
      ppppppbStack_3f8 = param_2[8];
      ppppppbStack_400 = param_2[7];
      ppppppbVar15 = param_2[9];
      uStack_3f0 = ppppppbVar15;
      if (pppppppbStack_430 == (byte *******)0x2) {
        pppppppbVar19 = (byte *******)0x0;
      }
      else {
        pppppppbVar19 = pppppppbStack_408;
        if (pppppppbStack_430 == (byte *******)0x1) {
          pppppppbVar24 = (byte *******)0x0;
          if (pppppppbStack_418 <= pppppppbStack_420) {
            pppppppbVar24 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
          }
          if (pppppppbVar24 <= pppppppbStack_408) {
            pppppppbVar19 = pppppppbVar24;
          }
          if ((byte *******)(ulong)*(uint *)(param_1 + 0x138) < pppppppbVar19) {
LAB_100c11ea8:
            if (pppppppbStack_430 == (byte *******)0x1) {
              if (pppppppbStack_420 != (byte *******)0x0) {
                _free(pppppppbStack_428);
              }
            }
            else if (pppppppbStack_430 == (byte *******)0x0) {
              (*(code *)pppppppbStack_428[4])(&ppppppbStack_410,pppppppbStack_420,pppppppbStack_418)
              ;
            }
            if (pppppppbStack_470 != (byte *******)0x2) {
              pppppppbVar18 = pppppppbStack_468;
              if (((ulong)pppppppbStack_470 & 1) != 0) {
                pppppppbVar18 =
                     (byte *******)
                     ((long)pppppppbStack_468 +
                     ((long)pppppppbStack_460[2] - 1U & 0xfffffffffffffff0) + 0x10);
              }
              (*(code *)pppppppbStack_460[0xd])(pppppppbVar18,&pppppppbStack_458);
            }
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (ppppppbStack_450 != (byte ******)0x0)) {
              pppppppbStack_430 = (byte *******)ppppppbStack_450[2];
              pppppppbStack_428 = (byte *******)ppppppbStack_450[3];
              pppppppbStack_f0 = (byte *******)&pppppppbStack_430;
              pppppppbStack_e8 = (byte *******)&DAT_100c7b3a0;
              FUN_1011d7d74(&pppppppbStack_470,&UNK_108cd3ef5,0x15,s_<____108ab67c5,
                            &pppppppbStack_f0);
            }
            FUN_100dddd8c(&pppppppbStack_470);
            return 2;
          }
        }
        else {
          if (pppppppbStack_418 <= pppppppbStack_408) {
            pppppppbVar19 = pppppppbStack_418;
          }
          if ((byte *******)(ulong)*(uint *)(param_1 + 0x138) < pppppppbVar19) goto LAB_100c11ea8;
        }
      }
      uStack_3f0._6_1_ = (undefined1)((ulong)ppppppbVar15 >> 0x30);
      uVar8 = uStack_3f0._6_1_;
      uStack_3f0._0_4_ = (uint)ppppppbVar15;
      uVar5 = (uint)uStack_3f0;
      if (pppppppbVar19 < *(byte ********)(param_1 + 0x128)) {
        if (pppppppbStack_430 == (byte *******)0x2) {
          pppppppbVar19 = (byte *******)0x0;
        }
        else {
          pppppppbVar19 = pppppppbStack_418;
          if (pppppppbStack_430 == (byte *******)0x1) {
            pppppppbVar19 = (byte *******)0x0;
            if (pppppppbStack_418 <= pppppppbStack_420) {
              pppppppbVar19 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
            }
          }
        }
        pppppppbVar24 = pppppppbStack_408;
        if (pppppppbVar19 <= pppppppbStack_408) {
          pppppppbVar24 = pppppppbVar19;
        }
        uVar17 = *(ulong *)(param_1 + 0x108);
        if ((byte *******)(uVar17 ^ 0x7fffffffffffffff) < pppppppbVar24) {
          puVar20 = &UNK_10b233440;
          uVar21 = 0x2c;
          puVar23 = &UNK_108cb18f9;
LAB_100c12e7c:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar23,uVar21,puVar20);
          goto LAB_100c12f40;
        }
        uVar6 = ((ulong)pppppppbVar24 & 0xff00ff00ff00ff00) >> 8 |
                ((ulong)pppppppbVar24 & 0xff00ff00ff00ff) << 8;
        uVar7 = uVar6 & 0xffff0000ffff;
        uVar10 = (ushort)(uVar6 >> 0x18) & 0xff | (ushort)((uVar7 << 0x10) >> 8);
        uVar9 = (undefined1)(uVar7 >> 8);
        if (*(long *)(param_1 + 0x110) - uVar17 < 3) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
          uVar17 = *(ulong *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - uVar17);
          puVar2 = (ushort *)(*(long *)(param_1 + 0x100) + uVar17);
          *puVar2 = uVar10;
          *(undefined1 *)(puVar2 + 1) = uVar9;
          if (pppppppbVar19 < (byte *******)0x3) goto LAB_100c12808;
        }
        else {
          ppppppbVar15 = *pppppppbVar18;
          *(ushort *)((long)ppppppbVar15 + uVar17) = uVar10;
          *(undefined1 *)((ushort *)((long)ppppppbVar15 + uVar17) + 1) = uVar9;
        }
        lVar16 = uVar17 + 3;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) != lVar16) {
          *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
LAB_100c1286c:
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) == lVar16) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
            lVar16 = *(long *)(param_1 + 0x108);
            lVar3 = *(long *)(param_1 + 0x110);
            *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = uVar8;
            if (lVar3 == lVar16) goto LAB_100c128a4;
          }
          else {
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = uVar8;
          }
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
            lVar16 = *(long *)(param_1 + 0x108);
            pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
            *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
            if (pppppppbVar19 < (byte *******)0x4) goto LAB_100c12900;
          }
          else {
            *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
          }
          *(long *)(param_1 + 0x108) = lVar16 + 4;
          pppppppbStack_90 = (byte *******)&pppppppbStack_430;
          if (pppppppbStack_430 == (byte *******)0x2) {
            pppppppbVar19 = (byte *******)0x0;
          }
          else {
            pppppppbVar19 = pppppppbStack_418;
            if (pppppppbStack_430 == (byte *******)0x1) {
              pppppppbVar19 = (byte *******)0x0;
              if (pppppppbStack_418 <= pppppppbStack_420) {
                pppppppbVar19 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
              }
            }
          }
          pppppppbVar24 = pppppppbStack_408;
          if (pppppppbVar19 <= pppppppbStack_408) {
            pppppppbVar24 = pppppppbVar19;
          }
          if (pppppppbVar24 != (byte *******)0x0) {
            if (*(long *)(param_1 + 0x110) != 0) {
              if (pppppppbStack_430 == (byte *******)0x2) {
                pppppppbVar19 = (byte *******)0x0;
              }
              else {
                pppppppbVar19 = pppppppbStack_418;
                if (pppppppbStack_430 == (byte *******)0x1) {
                  pppppppbVar19 = (byte *******)0x0;
                  if (pppppppbStack_418 <= pppppppbStack_420) {
                    pppppppbVar19 =
                         (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
                  }
                }
              }
              pppppppbVar24 = pppppppbStack_408;
              if (pppppppbVar19 <= pppppppbStack_408) {
                pppppppbVar24 = pppppppbVar19;
              }
              if ((byte *******)(*(long *)(param_1 + 0x110) - (lVar16 + 4)) < pppppppbVar24) {
                __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                          (pppppppbVar18,pppppppbVar24,1);
              }
              puVar20 = &UNK_10b24a6b8;
              uVar21 = 0x23;
              puVar23 = &UNK_108cd2e85;
              if (pppppppbStack_430 != (byte *******)0x2) goto LAB_100c12a58;
              do {
                pppppppbVar19 = (byte *******)0x0;
LAB_100c12a7c:
                pppppppbVar24 = pppppppbStack_408;
                if (pppppppbVar19 <= pppppppbStack_408) {
                  pppppppbVar24 = pppppppbVar19;
                }
                if (pppppppbVar24 == (byte *******)0x0) goto LAB_100c12c68;
                if (pppppppbStack_430 == (byte *******)0x2) {
                  pppppppbVar19 = (byte *******)0x1;
                  pppppppbVar24 = (byte *******)0x0;
                  lVar16 = *(long *)(param_1 + 0x108);
                }
                else {
                  pppppppbVar24 = pppppppbStack_408;
                  if (pppppppbStack_430 == (byte *******)0x1) {
                    pppppppbVar11 = pppppppbStack_420;
                    if (pppppppbStack_418 <= pppppppbStack_420) {
                      pppppppbVar11 = pppppppbStack_418;
                    }
                    pppppppbVar19 = (byte *******)((long)pppppppbStack_428 + (long)pppppppbVar11);
                    if ((byte *******)((long)pppppppbStack_420 - (long)pppppppbVar11) <=
                        pppppppbStack_408) {
                      pppppppbVar24 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbVar11);
                    }
                    lVar16 = *(long *)(param_1 + 0x108);
                    if ((byte *******)(*(long *)(param_1 + 0x110) - lVar16) < pppppppbVar24) {
LAB_100c12b10:
                      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                                (pppppppbVar18,pppppppbVar24,1);
                      lVar16 = *(long *)(param_1 + 0x108);
                    }
                  }
                  else {
                    if (pppppppbStack_418 <= pppppppbStack_408) {
                      pppppppbVar24 = pppppppbStack_418;
                    }
                    lVar16 = *(long *)(param_1 + 0x108);
                    pppppppbVar19 = pppppppbStack_420;
                    if ((byte *******)(*(long *)(param_1 + 0x110) - lVar16) < pppppppbVar24)
                    goto LAB_100c12b10;
                  }
                }
                _memcpy(*(long *)(param_1 + 0x100) + lVar16,pppppppbVar19,pppppppbVar24);
                pppppppbVar19 =
                     (byte *******)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108));
                if (pppppppbVar19 < pppppppbVar24) goto LAB_100c12d78;
                *(byte **)(param_1 + 0x108) =
                     (byte *)((long)pppppppbVar24 + *(long *)(param_1 + 0x108));
                pppppppbVar11 = (byte *******)((long)pppppppbStack_408 - (long)pppppppbVar24);
                if (pppppppbStack_408 < pppppppbVar24) goto LAB_100c12e7c;
                if (pppppppbStack_430 != (byte *******)0x2) {
                  if (pppppppbStack_430 == (byte *******)0x1) {
                    pppppppbVar19 = (byte *******)0x0;
                    if (pppppppbStack_418 <= pppppppbStack_420) {
                      pppppppbVar19 =
                           (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
                    }
                    if (pppppppbVar19 < pppppppbVar24) goto LAB_100c12d78;
                    pppppppbStack_418 =
                         (byte *******)((long)pppppppbStack_418 + (long)pppppppbVar24);
                  }
                  else {
                    pppppppbStack_80 = pppppppbVar24;
                    if (pppppppbStack_418 < pppppppbVar24) {
                      pppppppbStack_110 = pppppppbStack_418;
                      pppppppbStack_f0 = (byte *******)&pppppppbStack_80;
                      pppppppbStack_e8 = (byte *******)&DAT_100c929e0;
                      pppppppbStack_e0 = (byte *******)&pppppppbStack_110;
                      pppppppbStack_d8 = (byte *******)&DAT_100c929e0;
                      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                (s__cannot_advance_past__remaining__108aba12e,&pppppppbStack_f0,
                                 &UNK_10b243fb8);
                      goto LAB_100c12f40;
                    }
                    pppppppbStack_420 =
                         (byte *******)((long)pppppppbStack_420 + (long)pppppppbVar24);
                    pppppppbStack_418 =
                         (byte *******)((long)pppppppbStack_418 - (long)pppppppbVar24);
                  }
                }
                pppppppbStack_408 = pppppppbVar11;
              } while (pppppppbStack_430 == (byte *******)0x2);
LAB_100c12a58:
              pppppppbVar19 = pppppppbStack_418;
              if (pppppppbStack_430 == (byte *******)0x1) {
                pppppppbVar19 = (byte *******)0x0;
                if (pppppppbStack_418 <= pppppppbStack_420) {
                  pppppppbVar19 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
                }
              }
              goto LAB_100c12a7c;
            }
            if (pppppppbStack_430 == (byte *******)0x2) {
              pppppppbVar19 = (byte *******)0x0;
            }
            else {
              pppppppbVar19 = pppppppbStack_418;
              if (pppppppbStack_430 == (byte *******)0x1) {
                pppppppbVar19 = (byte *******)0x0;
                if (pppppppbStack_418 <= pppppppbStack_420) {
                  pppppppbVar19 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
                }
              }
            }
            pppppppbVar24 = pppppppbStack_408;
            if (pppppppbVar19 <= pppppppbStack_408) {
              pppppppbVar24 = pppppppbVar19;
            }
            FUN_100f30848(&pppppppbStack_110,&pppppppbStack_90,pppppppbVar24);
            __ZN5bytes5bytes5Bytes12try_into_mut17hb9dd212f7bac5c02E
                      (&pppppppbStack_f0,&pppppppbStack_110);
            pppppppbVar24 = pppppppbStack_d8;
            pppppppbVar19 = pppppppbStack_e0;
            if (((ulong)pppppppbStack_f0 & 1) == 0) {
              __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                        (pppppppbVar18);
              *(byte ********)(param_1 + 0x108) = pppppppbStack_e0;
              *pppppppbVar18 = (byte ******)pppppppbStack_e8;
              *(undefined1 (*) [8])(param_1 + 0x118) = auStack_d0;
              *(byte ********)(param_1 + 0x110) = pppppppbStack_d8;
            }
            else {
              pppppppbStack_108 = pppppppbStack_e0;
              pppppppbStack_110 = pppppppbStack_e8;
              ppppppbStack_f8 = (byte ******)auStack_d0;
              pppppppbStack_100 = pppppppbStack_d8;
              lVar16 = *(long *)(param_1 + 0x108);
              if ((byte *******)-lVar16 < pppppppbStack_d8) {
                __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                          (pppppppbVar18,pppppppbStack_d8,1);
                lVar16 = *(long *)(param_1 + 0x108);
              }
              _memcpy(*(long *)(param_1 + 0x100) + lVar16,pppppppbVar19,pppppppbVar24);
              pppppppbVar18 =
                   (byte *******)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108));
              if (pppppppbVar18 < pppppppbVar24) {
                pppppppbStack_80 = pppppppbVar24;
                pppppppbStack_78 = pppppppbVar18;
                __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppppppbStack_80);
                goto LAB_100c12f40;
              }
              *(byte **)(param_1 + 0x108) =
                   (byte *)((long)pppppppbVar24 + *(long *)(param_1 + 0x108));
              (*(code *)pppppppbStack_110[4])(&ppppppbStack_f8,pppppppbStack_108,pppppppbStack_100);
            }
          }
LAB_100c12c68:
          if (pppppppbStack_430 == (byte *******)0x2) {
            pppppppbVar18 = (byte *******)0x0;
          }
          else {
            pppppppbVar18 = pppppppbStack_418;
            if (pppppppbStack_430 == (byte *******)0x1) {
              pppppppbVar18 = (byte *******)0x0;
              if (pppppppbStack_418 <= pppppppbStack_420) {
                pppppppbVar18 = (byte *******)((long)pppppppbStack_420 - (long)pppppppbStack_418);
              }
            }
          }
          pppppppbStack_3e8 = pppppppbStack_408;
          if (pppppppbVar18 <= pppppppbStack_408) {
            pppppppbStack_3e8 = pppppppbVar18;
          }
          if (pppppppbStack_3e8 != (byte *******)0x0) {
            func_0x000108a07b2c(0,&pppppppbStack_3e8,&UNK_108c511b0,&UNK_108cb0683,0x2f,
                                &UNK_10b2333d8);
            goto LAB_100c12f40;
          }
          uStack_c8 = SUB84(pppppppbStack_408,0);
          uStack_c4 = (undefined4)((ulong)pppppppbStack_408 >> 0x20);
          auStack_d0 = (undefined1  [8])ppppppbStack_410;
          uStack_b8 = SUB84(ppppppbStack_3f8,0);
          uStack_b4 = (undefined4)((ulong)ppppppbStack_3f8 >> 0x20);
          uStack_c0 = SUB84(ppppppbStack_400,0);
          uStack_bc = (undefined4)((ulong)ppppppbStack_400 >> 0x20);
          ppppppbStack_b0 = uStack_3f0;
          pppppppbStack_e8 = pppppppbStack_428;
          pppppppbStack_f0 = pppppppbStack_430;
          pppppppbStack_d8 = pppppppbStack_418;
          pppppppbStack_e0 = pppppppbStack_420;
          lVar16 = *(long *)(param_1 + 0x70);
          if (lVar16 != 3) {
            if (lVar16 == 1) {
              if (*(long *)(param_1 + 0x80) != 0) {
                _free(*(undefined8 *)(param_1 + 0x78));
              }
            }
            else if (lVar16 == 0) {
              (**(code **)(*(long *)(param_1 + 0x78) + 0x20))
                        (param_1 + 0x90,*(undefined8 *)(param_1 + 0x80),
                         *(undefined8 *)(param_1 + 0x88));
            }
          }
          *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_c4,uStack_c8);
          *(undefined1 (*) [8])(param_1 + 0x90) = auStack_d0;
          *(ulong *)(param_1 + 0xa8) = CONCAT44(uStack_b4,uStack_b8);
          *(ulong *)(param_1 + 0xa0) = CONCAT44(uStack_bc,uStack_c0);
          *(byte *******)(param_1 + 0xb0) = ppppppbStack_b0;
          *(byte ********)(param_1 + 0x78) = pppppppbStack_e8;
          *(long *)(param_1 + 0x70) = (long)pppppppbStack_f0;
          *(byte ********)(param_1 + 0x88) = pppppppbStack_d8;
          *(byte ********)(param_1 + 0x80) = pppppppbStack_e0;
LAB_100c12d1c:
          goto joined_r0x000100c12d34;
        }
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
        lVar16 = *(long *)(param_1 + 0x108);
        lVar3 = *(long *)(param_1 + 0x110);
        *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
        if (lVar3 != lVar16) goto LAB_100c1286c;
LAB_100c128a4:
        pppppppbStack_e8 = (byte *******)0x0;
        pppppppbStack_f0 = (byte *******)0x1;
        pppppppbVar24 = pppppppbStack_f0;
        pppppppbVar19 = pppppppbStack_e8;
      }
      else {
        uVar17 = ((ulong)pppppppbVar19 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)pppppppbVar19 & 0xff00ff00ff00ff) << 8;
        uVar6 = uVar17 & 0xffff0000ffff;
        uVar10 = (ushort)(uVar17 >> 0x18) & 0xff | (ushort)((uVar6 << 0x10) >> 8);
        lVar16 = *(long *)(param_1 + 0x108);
        uVar9 = (undefined1)(uVar6 >> 8);
        if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 3) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          puVar2 = (ushort *)(*(long *)(param_1 + 0x100) + lVar16);
          *puVar2 = uVar10;
          *(undefined1 *)(puVar2 + 1) = uVar9;
          if ((byte *******)0x2 < pppppppbVar19) goto LAB_100c121dc;
LAB_100c12808:
          pppppppbVar24 = (byte *******)0x3;
        }
        else {
          ppppppbVar15 = *pppppppbVar18;
          *(ushort *)((long)ppppppbVar15 + lVar16) = uVar10;
          *(undefined1 *)((ushort *)((long)ppppppbVar15 + lVar16) + 1) = uVar9;
LAB_100c121dc:
          lVar16 = lVar16 + 3;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) == lVar16) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
            lVar16 = *(long *)(param_1 + 0x108);
            lVar3 = *(long *)(param_1 + 0x110);
            *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
            if (lVar3 == lVar16) goto LAB_100c128a4;
          }
          else {
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
          }
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) == lVar16) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
            lVar16 = *(long *)(param_1 + 0x108);
            lVar3 = *(long *)(param_1 + 0x110);
            *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = uVar8;
            if (lVar3 == lVar16) goto LAB_100c128a4;
          }
          else {
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = uVar8;
          }
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) {
            *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
LAB_100c122b4:
            uVar17 = lVar16 + 4;
            *(ulong *)(param_1 + 0x108) = uVar17;
            if (uVar17 < *(ulong *)(param_1 + 0x128)) {
              lVar16 = 0;
              if (*(ulong *)(param_1 + 0x120) <= uVar17) {
                lVar16 = uVar17 - *(ulong *)(param_1 + 0x120);
              }
              FUN_1011a3da4(pppppppbVar18,&pppppppbStack_430,*(ulong *)(param_1 + 0x128) - lVar16);
            }
            uStack_c8 = SUB84(pppppppbStack_408,0);
            uStack_c4 = (undefined4)((ulong)pppppppbStack_408 >> 0x20);
            auStack_d0 = (undefined1  [8])ppppppbStack_410;
            uStack_b8 = SUB84(ppppppbStack_3f8,0);
            uStack_b4 = (undefined4)((ulong)ppppppbStack_3f8 >> 0x20);
            uStack_c0 = SUB84(ppppppbStack_400,0);
            uStack_bc = (undefined4)((ulong)ppppppbStack_400 >> 0x20);
            ppppppbStack_b0 = uStack_3f0;
            pppppppbStack_e8 = pppppppbStack_428;
            pppppppbStack_f0 = pppppppbStack_430;
            pppppppbStack_d8 = pppppppbStack_418;
            pppppppbStack_e0 = pppppppbStack_420;
            lVar16 = *plVar22;
            if (lVar16 != 4) {
              if ((lVar16 == 3) || (lVar16 == 0)) {
                (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))
                          (param_1 + 0xd8,*(undefined8 *)(param_1 + 200),
                           *(undefined8 *)(param_1 + 0xd0));
              }
              else if ((lVar16 == 1) && (*(long *)(param_1 + 200) != 0)) {
                _free(*(undefined8 *)(param_1 + 0xc0));
              }
            }
            *(ulong *)(param_1 + 0xe0) = CONCAT44(uStack_c4,uStack_c8);
            *(undefined1 (*) [8])(param_1 + 0xd8) = auStack_d0;
            *(ulong *)(param_1 + 0xf0) = CONCAT44(uStack_b4,uStack_b8);
            *(ulong *)(param_1 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
            *(byte *******)(param_1 + 0xf8) = ppppppbStack_b0;
            *(byte ********)(param_1 + 0xc0) = pppppppbStack_e8;
            *plVar22 = (long)pppppppbStack_f0;
            *(byte ********)(param_1 + 0xd0) = pppppppbStack_d8;
            *(byte ********)(param_1 + 200) = pppppppbStack_e0;
            goto LAB_100c12d1c;
          }
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
          if ((byte *******)0x3 < pppppppbVar19) goto LAB_100c122b4;
LAB_100c12900:
          pppppppbVar24 = (byte *******)0x4;
        }
      }
LAB_100c12d78:
      pppppppbStack_e8 = pppppppbVar19;
      pppppppbStack_f0 = pppppppbVar24;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppppppbStack_f0);
      goto LAB_100c12f40;
    }
    if (bVar4 == 3) {
      _memcpy(auStack_2c0,param_2 + 1,0x120);
      pppppppbStack_428 = (byte *******)((ulong)*(uint *)(param_1 + 0x138) + 9);
      pppppppbStack_430 = pppppppbVar18;
      __ZN2h25frame7headers11PushPromise6encode17hd632ba33f6339d37E
                (&pppppppbStack_f0,auStack_2c0,param_1,&pppppppbStack_430);
      if (pppppppbStack_f0 != (byte *******)0x0) {
        lVar16 = *plVar22;
        if (lVar16 != 4) {
          if ((lVar16 == 3) || (lVar16 == 0)) {
            (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))
                      (param_1 + 0xd8,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0)
                      );
          }
          else if ((lVar16 == 1) && (*(long *)(param_1 + 200) != 0)) {
            _free(*(undefined8 *)(param_1 + 0xc0));
          }
        }
        *(undefined8 *)(param_1 + 0xb8) = 3;
        *(byte ********)(param_1 + 200) = pppppppbStack_e8;
        *(byte ********)(param_1 + 0xc0) = pppppppbStack_f0;
        *(byte ********)(param_1 + 0xd8) = pppppppbStack_d8;
        *(byte ********)(param_1 + 0xd0) = pppppppbStack_e0;
        *(undefined1 (*) [8])(param_1 + 0xe0) = auStack_d0;
      }
      goto joined_r0x000100c12d34;
    }
    if (bVar4 != 4) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb069a,0xf,&UNK_10b2333f0);
      goto LAB_100c12f40;
    }
    pppppppbStack_e8 = *(byte ********)((long)param_2 + 0xc);
    pppppppbStack_f0 = *(byte ********)((long)param_2 + 4);
    pppppppbStack_d8 = *(byte ********)((long)param_2 + 0x1c);
    pppppppbStack_e0 = *(byte ********)((long)param_2 + 0x14);
    auStack_d0 = *(undefined1 (*) [8])((long)param_2 + 0x24);
    uStack_c8 = (undefined4)*(undefined8 *)((long)param_2 + 0x2c);
    uStack_bc = SUB84(param_2[7],0);
    uStack_b8 = (undefined4)((ulong)param_2[7] >> 0x20);
    uStack_c4 = SUB84(param_2[6],0);
    uStack_c0 = (undefined4)((ulong)param_2[6] >> 0x20);
    __ZN2h25frame8settings8Settings6encode17h4813351f6599494aE(&pppppppbStack_f0,pppppppbVar18);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b631e38 - 1 < 2 ||
         ((bRam000000010b631e38 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE
                              ), cVar13 != '\0')))))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE
                           ), iVar14 != 0)) {
      ppppppbStack_f8 =
           (byte ******)
           (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE +
           0x30);
      pppppppbStack_80 = (byte *******)&UNK_108c73cc0;
      pppppppbStack_78 = (byte *******)0x21;
      pppppppbStack_90 = (byte *******)0x0;
      if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
        pppppppbStack_90 = (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120))
        ;
      }
      pppppppbStack_430 = (byte *******)&pppppppbStack_80;
      pppppppbStack_428 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_420 = (byte *******)&pppppppbStack_90;
      pppppppbStack_418 = (byte *******)&UNK_10b215f00;
      pppppppbStack_108 = (byte *******)&pppppppbStack_430;
      pppppppbStack_110 = (byte *******)0x1;
      pppppppbStack_100 = (byte *******)0x2;
      FUN_100c1361c(&pppppppbStack_110);
    }
    else {
      lVar16 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_198 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE
                      + 0x20);
        uStack_190 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE
                      + 0x28);
        uStack_1a0 = 5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_1a0);
        if (iVar14 != 0) {
          ppppppbStack_f8 =
               (byte ******)
               (
               ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h3a5e9d1b6f08baeeE
               + 0x30);
          pppppppbStack_80 = (byte *******)&UNK_108c73cc0;
          pppppppbStack_78 = (byte *******)0x21;
          pppppppbStack_90 = (byte *******)0x0;
          if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
            pppppppbStack_90 =
                 (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
          }
          pppppppbStack_430 = (byte *******)&pppppppbStack_80;
          pppppppbStack_428 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_420 = (byte *******)&pppppppbStack_90;
          pppppppbStack_418 = (byte *******)&UNK_10b215f00;
          pppppppbStack_108 = (byte *******)&pppppppbStack_430;
          pppppppbStack_110 = (byte *******)0x1;
          pppppppbStack_100 = (byte *******)0x2;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&uStack_1a0,&pppppppbStack_110);
        }
      }
    }
  }
  else {
    if (6 < bVar4) {
      if (bVar4 == 7) {
        uStack_120._0_4_ = (uint)*(undefined8 *)((long)param_2 + 4);
        uStack_120._4_4_ = (uint)((ulong)*(undefined8 *)((long)param_2 + 4) >> 0x20);
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b631f40 - 1 < 2 ||
             ((bRam000000010b631f40 != 0 &&
              (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                                  ), cVar13 != '\0')))))) &&
           (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                               ), iVar14 != 0)) {
          pppppppbStack_d8 =
               (byte *******)
               (___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E +
               0x30);
          pppppppbStack_110 = (byte *******)&uStack_120;
          pppppppbStack_108 = (byte *******)&DAT_10114d844;
          pppppppbStack_78 = (byte *******)&pppppppbStack_110;
          pppppppbStack_80 = (byte *******)s_encoding_WINDOW_UPDATE__id__108ab96ce;
          pppppppbStack_90 = (byte *******)&pppppppbStack_80;
          pppppppbStack_88 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_e8 = (byte *******)&pppppppbStack_90;
          pppppppbStack_f0 = (byte *******)0x1;
          pppppppbStack_e0 = (byte *******)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                     ,&pppppppbStack_f0);
          lVar16 = 
          ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppbStack_428 =
                 *(byte ********)
                  (
                  ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                  + 0x20);
            pppppppbStack_420 =
                 *(byte ********)
                  (
                  ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                  + 0x28);
            pppppppbStack_430 = (byte *******)0x5;
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar23 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar23 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_430);
            if (iVar14 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar23,puVar20,&pppppppbStack_430,&pppppppbStack_f0);
            }
          }
        }
        else {
          lVar16 = 
          ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppbStack_428 =
                 *(byte ********)
                  (
                  ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                  + 0x20);
            pppppppbStack_420 =
                 *(byte ********)
                  (
                  ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                  + 0x28);
            pppppppbStack_430 = (byte *******)0x5;
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar23 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar23 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_430);
            if (iVar14 != 0) {
              pppppppbStack_d8 =
                   (byte *******)
                   (
                   ___ZN2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h0462cc06f36d0eb3E
                   + 0x30);
              pppppppbStack_110 = (byte *******)&uStack_120;
              pppppppbStack_108 = (byte *******)&DAT_10114d844;
              pppppppbStack_78 = (byte *******)&pppppppbStack_110;
              pppppppbStack_80 = (byte *******)s_encoding_WINDOW_UPDATE__id__108ab96ce;
              pppppppbStack_90 = (byte *******)&pppppppbStack_80;
              pppppppbStack_88 = (byte *******)&UNK_10b208fd0;
              pppppppbStack_e8 = (byte *******)&pppppppbStack_90;
              pppppppbStack_f0 = (byte *******)0x1;
              pppppppbStack_e0 = (byte *******)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar23,puVar20,&pppppppbStack_430,&pppppppbStack_f0);
            }
          }
        }
        uVar5 = (uint)uStack_120;
        lVar16 = *(long *)(param_1 + 0x108);
        if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 3) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          puVar1 = (undefined2 *)(*(long *)(param_1 + 0x100) + lVar16);
          *(undefined1 *)(puVar1 + 1) = 4;
          *puVar1 = 0;
          if ((byte *******)0x2 < pppppppbVar19) {
            lVar16 = lVar16 + 3;
            *(long *)(param_1 + 0x108) = lVar16;
            if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c11248;
            goto LAB_100c1119c;
          }
LAB_100c12d80:
          pppppppbStack_f0 = (byte *******)0x3;
        }
        else {
          ppppppbVar15 = *pppppppbVar18;
          *(undefined1 *)((undefined2 *)((long)ppppppbVar15 + lVar16) + 1) = 4;
          *(undefined2 *)((long)ppppppbVar15 + lVar16) = 0;
          lVar16 = lVar16 + 3;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) == lVar16) {
LAB_100c1119c:
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
            lVar16 = *(long *)(param_1 + 0x108);
            lVar3 = *(long *)(param_1 + 0x110);
            *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 8;
            if (lVar3 == lVar16) goto LAB_100c11b10;
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c111e8;
LAB_100c11268:
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
          }
          else {
LAB_100c11248:
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 8;
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c11268;
LAB_100c111e8:
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
            lVar16 = *(long *)(param_1 + 0x108);
            lVar3 = *(long *)(param_1 + 0x110);
            *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
            if (lVar3 == lVar16) goto LAB_100c11b10;
          }
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) {
            *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
LAB_100c112d0:
            lVar3 = lVar16 + 4;
            *(long *)(param_1 + 0x108) = lVar3;
            uVar5 = (uStack_120._4_4_ & 0xff00ff00) >> 8 | (uStack_120._4_4_ & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if ((ulong)(*(long *)(param_1 + 0x110) - lVar3) < 4) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
              lVar16 = *(long *)(param_1 + 0x108);
              pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
              *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
              if (pppppppbVar19 < (byte *******)0x4) goto LAB_100c12d68;
              *(long *)(param_1 + 0x108) = lVar16 + 4;
            }
            else {
              *(uint *)((long)*pppppppbVar18 + lVar3) = uVar5;
              *(long *)(param_1 + 0x108) = lVar16 + 8;
            }
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
               (((bRam000000010b631e80 - 1 < 2 ||
                 ((bRam000000010b631e80 != 0 &&
                  (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE
                                      ), cVar13 != '\0')))) &&
                (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE
                                    ), iVar14 != 0)))) {
              pppppppbStack_418 =
                   (byte *******)
                   (
                   ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE
                   + 0x30);
              pppppppbStack_110 = (byte *******)&UNK_108cc386a;
              pppppppbStack_108 = (byte *******)0x2b;
              pppppppbStack_80 = (byte *******)0x0;
              if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                pppppppbStack_80 =
                     (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
              }
              pppppppbStack_f0 = (byte *******)&pppppppbStack_110;
              pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
              pppppppbStack_e0 = (byte *******)&pppppppbStack_80;
              pppppppbStack_d8 = (byte *******)&UNK_10b215f00;
              pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
              pppppppbStack_430 = (byte *******)0x1;
              pppppppbStack_420 = (byte *******)0x2;
              FUN_100c134e0(&pppppppbStack_430);
            }
            else {
              lVar16 = 
              ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uStack_150 = *(undefined8 *)
                              (
                              ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE
                              + 0x20);
                uStack_148 = *(undefined8 *)
                              (
                              ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE
                              + 0x28);
                uStack_158 = 5;
                puVar20 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar20 = &UNK_10b3c24c8;
                }
                puVar23 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar23 = &UNK_109adfc03;
                }
                iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_158);
                if (iVar14 != 0) {
                  pppppppbStack_418 =
                       (byte *******)
                       (
                       ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hd1c48d407fc76c8eE
                       + 0x30);
                  pppppppbStack_110 = (byte *******)&UNK_108cc386a;
                  pppppppbStack_108 = (byte *******)0x2b;
                  pppppppbStack_80 = (byte *******)0x0;
                  if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                    pppppppbStack_80 =
                         (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
                  }
                  pppppppbStack_f0 = (byte *******)&pppppppbStack_110;
                  pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
                  pppppppbStack_e0 = (byte *******)&pppppppbStack_80;
                  pppppppbStack_d8 = (byte *******)&UNK_10b215f00;
                  pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
                  pppppppbStack_430 = (byte *******)0x1;
                  pppppppbStack_420 = (byte *******)0x2;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar16,puVar23,puVar20,&uStack_158,&pppppppbStack_430);
                }
              }
            }
            goto LAB_100c126b0;
          }
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
          if ((byte *******)0x3 < pppppppbVar19) goto LAB_100c112d0;
LAB_100c12d68:
          pppppppbStack_f0 = (byte *******)0x4;
        }
      }
      else {
        uStack_120._0_4_ = (uint)*(undefined8 *)((long)param_2 + 4);
        uStack_120._4_4_ = (uint)((ulong)*(undefined8 *)((long)param_2 + 4) >> 0x20);
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b631f70 - 1 < 2 ||
             ((bRam000000010b631f70 != 0 &&
              (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&__ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE
                                  ), cVar13 != '\0')))) &&
            (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE),
            iVar14 != 0)))) {
          pppppppbStack_418 =
               (byte *******)
               (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE + 0x30);
          pppppppbStack_f0 = (byte *******)&uStack_120;
          pppppppbStack_e8 = (byte *******)&DAT_10114d844;
          pppppppbStack_d8 =
               (byte *******)
               &
               __ZN62__LT_h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17h79552bcddb473b39E
          ;
          pppppppbStack_78 = (byte *******)&pppppppbStack_f0;
          pppppppbStack_80 = (byte *******)s_encoding_RESET__id__code__108ac96ae;
          pppppppbStack_90 = (byte *******)&pppppppbStack_80;
          pppppppbStack_88 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_428 = (byte *******)&pppppppbStack_90;
          pppppppbStack_430 = (byte *******)0x1;
          pppppppbStack_420 = (byte *******)0x1;
          pppppppbStack_e0 = (byte *******)((ulong)&uStack_120 | 4);
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE,
                     &pppppppbStack_430);
          lVar16 = ___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppbStack_108 =
                 *(byte ********)
                  (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE + 0x20);
            pppppppbStack_100 =
                 *(byte ********)
                  (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE + 0x28);
            pppppppbStack_110 = (byte *******)0x5;
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar23 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar23 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
            if (iVar14 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
            }
          }
        }
        else {
          lVar16 = ___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppbStack_108 =
                 *(byte ********)
                  (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE + 0x20);
            pppppppbStack_100 =
                 *(byte ********)
                  (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE + 0x28);
            pppppppbStack_110 = (byte *******)0x5;
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar23 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar23 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
            if (iVar14 != 0) {
              pppppppbStack_418 =
                   (byte *******)
                   (___ZN2h25frame5reset5Reset6encode10__CALLSITE17h49857e2e401d1e7dE + 0x30);
              pppppppbStack_f0 = (byte *******)&uStack_120;
              pppppppbStack_e8 = (byte *******)&DAT_10114d844;
              pppppppbStack_d8 =
                   (byte *******)
                   &
                   __ZN62__LT_h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17h79552bcddb473b39E
              ;
              pppppppbStack_78 = (byte *******)&pppppppbStack_f0;
              pppppppbStack_80 = (byte *******)s_encoding_RESET__id__code__108ac96ae;
              pppppppbStack_90 = (byte *******)&pppppppbStack_80;
              pppppppbStack_88 = (byte *******)&UNK_10b208fd0;
              pppppppbStack_428 = (byte *******)&pppppppbStack_90;
              pppppppbStack_430 = (byte *******)0x1;
              pppppppbStack_420 = (byte *******)0x1;
              pppppppbStack_e0 = (byte *******)((ulong)&uStack_120 | 4);
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
            }
          }
        }
        uVar5 = (uint)uStack_120;
        lVar16 = *(long *)(param_1 + 0x108);
        if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 3) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          puVar1 = (undefined2 *)(*(long *)(param_1 + 0x100) + lVar16);
          *(undefined1 *)(puVar1 + 1) = 4;
          *puVar1 = 0;
          if (pppppppbVar19 < (byte *******)0x3) goto LAB_100c12d80;
          lVar16 = lVar16 + 3;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c11b44;
LAB_100c11a90:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 3;
          if (lVar3 != lVar16) {
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c11adc;
LAB_100c11b64:
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
            goto LAB_100c11b6c;
          }
        }
        else {
          ppppppbVar15 = *pppppppbVar18;
          *(undefined1 *)((undefined2 *)((long)ppppppbVar15 + lVar16) + 1) = 4;
          *(undefined2 *)((long)ppppppbVar15 + lVar16) = 0;
          lVar16 = lVar16 + 3;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c11a90;
LAB_100c11b44:
          *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 3;
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c11b64;
LAB_100c11adc:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
          if (lVar3 != lVar16) {
LAB_100c11b6c:
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
              lVar16 = *(long *)(param_1 + 0x108);
              pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
              *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
              if (pppppppbVar19 < (byte *******)0x4) goto LAB_100c12d68;
            }
            else {
              *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
            }
            lVar3 = lVar16 + 4;
            *(long *)(param_1 + 0x108) = lVar3;
            uVar5 = (uStack_120._4_4_ & 0xff00ff00) >> 8 | (uStack_120._4_4_ & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if ((ulong)(*(long *)(param_1 + 0x110) - lVar3) < 4) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
              lVar16 = *(long *)(param_1 + 0x108);
              pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
              *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
              if (pppppppbVar19 < (byte *******)0x4) goto LAB_100c12d68;
              *(long *)(param_1 + 0x108) = lVar16 + 4;
            }
            else {
              *(uint *)((long)*pppppppbVar18 + lVar3) = uVar5;
              *(long *)(param_1 + 0x108) = lVar16 + 8;
            }
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                ((bRam000000010b631e68 - 1 < 2 ||
                 ((bRam000000010b631e68 != 0 &&
                  (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                                      ), cVar13 != '\0')))))) &&
               (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                                   ), iVar14 != 0)) {
              pppppppbStack_418 =
                   (byte *******)
                   (
                   ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                   + 0x30);
              pppppppbStack_110 = (byte *******)&UNK_108cc387f;
              pppppppbStack_108 = (byte *******)0x1b;
              pppppppbStack_80 = (byte *******)0x0;
              if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                pppppppbStack_80 =
                     (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
              }
              pppppppbStack_f0 = (byte *******)&pppppppbStack_110;
              pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
              pppppppbStack_e0 = (byte *******)&pppppppbStack_80;
              pppppppbStack_d8 = (byte *******)&UNK_10b215f00;
              pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
              pppppppbStack_430 = (byte *******)0x1;
              pppppppbStack_420 = (byte *******)0x2;
              FUN_100c133a4(&pppppppbStack_430);
            }
            else {
              lVar16 = 
              ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uStack_138 = *(undefined8 *)
                              (
                              ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                              + 0x20);
                uStack_130 = *(undefined8 *)
                              (
                              ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                              + 0x28);
                uStack_140 = 5;
                puVar20 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar20 = &UNK_10b3c24c8;
                }
                puVar23 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar23 = &UNK_109adfc03;
                }
                iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_140);
                if (iVar14 != 0) {
                  pppppppbStack_418 =
                       (byte *******)
                       (
                       ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                       + 0x30);
                  pppppppbStack_110 = (byte *******)&UNK_108cc387f;
                  pppppppbStack_108 = (byte *******)0x1b;
                  pppppppbStack_80 = (byte *******)0x0;
                  if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                    pppppppbStack_80 =
                         (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
                  }
                  pppppppbStack_f0 = (byte *******)&pppppppbStack_110;
                  pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
                  pppppppbStack_e0 = (byte *******)&pppppppbStack_80;
                  pppppppbStack_d8 = (byte *******)&UNK_10b215f00;
                  pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
                  pppppppbStack_430 = (byte *******)0x1;
                  pppppppbStack_420 = (byte *******)0x2;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar16,puVar23,puVar20,&uStack_140,&pppppppbStack_430);
                }
              }
            }
            goto LAB_100c126b0;
          }
        }
LAB_100c11b10:
        pppppppbVar19 = (byte *******)0x0;
        pppppppbStack_f0 = (byte *******)0x1;
      }
LAB_100c12e0c:
      pppppppbStack_e8 = pppppppbVar19;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E();
LAB_100c12f40:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100c12f44);
      (*pcVar12)();
    }
    if (bVar4 != 5) {
      pppppppbStack_e8 = (byte *******)param_2[2];
      pppppppbStack_f0 = (byte *******)param_2[1];
      pppppppbStack_d8 = (byte *******)param_2[4];
      pppppppbStack_e0 = (byte *******)param_2[3];
      auStack_d0 = (undefined1  [8])param_2[5];
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b631f88 - 1 < 2 ||
           ((bRam000000010b631f88 != 0 &&
            (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E
                                ), cVar13 != '\0')))))) &&
         (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E),
         iVar14 != 0)) {
        pppppppbStack_418 =
             (byte *******)
             (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E + 0x30);
        pppppppbStack_80 = (byte *******)(auStack_d0 + 4);
        pppppppbStack_78 =
             (byte *******)
             &
             __ZN62__LT_h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17h79552bcddb473b39E
        ;
        pppppppbStack_88 = (byte *******)&pppppppbStack_80;
        pppppppbStack_90 = (byte *******)s_encoding_GO_AWAY__code__108ac96cc;
        uStack_120 = (byte *******)&pppppppbStack_90;
        bStack_118 = 0xd0;
        uStack_117 = 0x10b208f;
        pppppppbStack_428 = (byte *******)&uStack_120;
        pppppppbStack_430 = (byte *******)0x1;
        pppppppbStack_420 = (byte *******)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E,
                   &pppppppbStack_430);
        lVar16 = ___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppbStack_108 =
               *(byte ********)
                (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E + 0x20);
          pppppppbStack_100 =
               *(byte ********)
                (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E + 0x28);
          pppppppbStack_110 = (byte *******)0x5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar23 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar23 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
          if (iVar14 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
          }
        }
      }
      else {
        lVar16 = ___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E;
        uStack_120 = (byte *******)CONCAT44(uStack_120._4_4_,(uint)uStack_120);
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (uStack_120 = (byte *******)CONCAT44(uStack_120._4_4_,(uint)uStack_120),
           4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppbStack_108 =
               *(byte ********)
                (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E + 0x20);
          pppppppbStack_100 =
               *(byte ********)
                (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E + 0x28);
          pppppppbStack_110 = (byte *******)0x5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar23 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar23 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
          if (iVar14 != 0) {
            pppppppbStack_418 =
                 (byte *******)
                 (___ZN2h25frame7go_away6GoAway6encode10__CALLSITE17h1b9b5035fb2ad2e6E + 0x30);
            pppppppbStack_80 = (byte *******)(auStack_d0 + 4);
            pppppppbStack_78 =
                 (byte *******)
                 &
                 __ZN62__LT_h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17h79552bcddb473b39E
            ;
            pppppppbStack_88 = (byte *******)&pppppppbStack_80;
            pppppppbStack_90 = (byte *******)s_encoding_GO_AWAY__code__108ac96cc;
            uStack_120 = (byte *******)&pppppppbStack_90;
            bStack_118 = 0xd0;
            uStack_117 = 0x10b208f;
            pppppppbStack_428 = (byte *******)&uStack_120;
            pppppppbStack_430 = (byte *******)0x1;
            pppppppbStack_420 = (byte *******)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
          }
        }
      }
      uVar17 = ((ulong)(pppppppbStack_e0 + 1) & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)(pppppppbStack_e0 + 1) & 0xff00ff00ff00ff) << 8;
      uVar6 = uVar17 & 0xffff0000ffff;
      uVar10 = (ushort)(uVar17 >> 0x18) & 0xff | (ushort)((uVar6 << 0x10) >> 8);
      lVar16 = *(long *)(param_1 + 0x108);
      uVar8 = (undefined1)(uVar6 >> 8);
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 3) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
        lVar16 = *(long *)(param_1 + 0x108);
        pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
        puVar2 = (ushort *)(*(long *)(param_1 + 0x100) + lVar16);
        *puVar2 = uVar10;
        *(undefined1 *)(puVar2 + 1) = uVar8;
        if (pppppppbVar19 < (byte *******)0x3) {
          pppppppbStack_430 = (byte *******)0x3;
        }
        else {
          lVar16 = lVar16 + 3;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c11660;
LAB_100c11590:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 7;
          if (lVar3 != lVar16) {
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c11680;
LAB_100c115cc:
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
            lVar16 = *(long *)(param_1 + 0x108);
            lVar3 = *(long *)(param_1 + 0x110);
            *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
            if (lVar3 != lVar16) {
              lVar16 = lVar16 + 1;
              *(long *)(param_1 + 0x108) = lVar16;
              if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) goto LAB_100c116a0;
LAB_100c11608:
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
              lVar16 = *(long *)(param_1 + 0x108);
              pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
              *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
              if ((byte *******)0x3 < pppppppbVar19) goto LAB_100c116a8;
              goto LAB_100c12d88;
            }
          }
          pppppppbVar19 = (byte *******)0x0;
          pppppppbStack_430 = (byte *******)0x1;
        }
      }
      else {
        ppppppbVar15 = *pppppppbVar18;
        *(ushort *)((long)ppppppbVar15 + lVar16) = uVar10;
        *(undefined1 *)((ushort *)((long)ppppppbVar15 + lVar16) + 1) = uVar8;
        lVar16 = lVar16 + 3;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c11590;
LAB_100c11660:
        *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 7;
        lVar16 = lVar16 + 1;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c115cc;
LAB_100c11680:
        *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
        lVar16 = lVar16 + 1;
        *(long *)(param_1 + 0x108) = lVar16;
        if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) goto LAB_100c11608;
LAB_100c116a0:
        *(undefined4 *)((long)*pppppppbVar18 + lVar16) = 0;
LAB_100c116a8:
        lVar16 = lVar16 + 4;
        *(long *)(param_1 + 0x108) = lVar16;
        uVar5 = (auStack_d0._0_4_ & 0xff00ff00) >> 8 | (auStack_d0._0_4_ & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) {
          *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
LAB_100c116fc:
          lVar3 = lVar16 + 4;
          *(long *)(param_1 + 0x108) = lVar3;
          uVar5 = (auStack_d0._4_4_ & 0xff00ff00) >> 8 | (auStack_d0._4_4_ & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          if ((ulong)(*(long *)(param_1 + 0x110) - lVar3) < 4) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
            lVar16 = *(long *)(param_1 + 0x108);
            pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
            *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
            if (pppppppbVar19 < (byte *******)0x4) goto LAB_100c12d88;
            *(long *)(param_1 + 0x108) = lVar16 + 4;
            if (pppppppbStack_e0 == (byte *******)0x0) goto LAB_100c1178c;
LAB_100c11754:
            pppppppbVar19 = pppppppbStack_e0;
            (*(code *)*pppppppbStack_f0)
                      (&pppppppbStack_430,&pppppppbStack_d8,pppppppbStack_e8,pppppppbStack_e0);
            pppppppbStack_420 = pppppppbVar19;
          }
          else {
            *(uint *)((long)*pppppppbVar18 + lVar3) = uVar5;
            *(long *)(param_1 + 0x108) = lVar16 + 8;
            if (pppppppbStack_e0 != (byte *******)0x0) goto LAB_100c11754;
LAB_100c1178c:
            pppppppbStack_418 = (byte *******)0x0;
            pppppppbStack_430 = (byte *******)&UNK_10b209220;
            pppppppbStack_428 = pppppppbStack_e8;
            pppppppbStack_420 = pppppppbStack_e0;
          }
          FUN_1011a3a1c(pppppppbVar18,&pppppppbStack_430);
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
            if (1 < bRam000000010b631e98 - 1) {
              if (bRam000000010b631e98 != 0) {
                cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                                   );
                if (cVar13 != '\0') goto LAB_100c11dd0;
              }
              goto LAB_100c117c0;
            }
LAB_100c11dd0:
            iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                               );
            if (iVar14 == 0) goto LAB_100c117c0;
            ppppppbStack_f8 =
                 (byte ******)
                 (
                 ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                 + 0x30);
            pppppppbStack_80 = (byte *******)&UNK_108cc385b;
            pppppppbStack_78 = (byte *******)0x1f;
            pppppppbStack_90 = (byte *******)0x0;
            if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
              pppppppbStack_90 =
                   (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
            }
            pppppppbStack_430 = (byte *******)&pppppppbStack_80;
            pppppppbStack_428 = (byte *******)&UNK_10b208fd0;
            pppppppbStack_420 = (byte *******)&pppppppbStack_90;
            pppppppbStack_418 = (byte *******)&UNK_10b215f00;
            pppppppbStack_108 = (byte *******)&pppppppbStack_430;
            pppppppbStack_110 = (byte *******)0x1;
            pppppppbStack_100 = (byte *******)0x2;
            FUN_100c13268(&pppppppbStack_110);
          }
          else {
LAB_100c117c0:
            lVar16 = 
            ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_180 = *(undefined8 *)
                            (
                            ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                            + 0x20);
              uStack_178 = *(undefined8 *)
                            (
                            ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                            + 0x28);
              uStack_188 = 5;
              puVar20 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar20 = &UNK_10b3c24c8;
              }
              puVar23 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar23 = &UNK_109adfc03;
              }
              iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_188);
              if (iVar14 != 0) {
                ppppppbStack_f8 =
                     (byte ******)
                     (
                     ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                     + 0x30);
                pppppppbStack_80 = (byte *******)&UNK_108cc385b;
                pppppppbStack_78 = (byte *******)0x1f;
                pppppppbStack_90 = (byte *******)0x0;
                if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                  pppppppbStack_90 =
                       (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
                }
                pppppppbStack_430 = (byte *******)&pppppppbStack_80;
                pppppppbStack_428 = (byte *******)&UNK_10b208fd0;
                pppppppbStack_420 = (byte *******)&pppppppbStack_90;
                pppppppbStack_418 = (byte *******)&UNK_10b215f00;
                pppppppbStack_108 = (byte *******)&pppppppbStack_430;
                pppppppbStack_110 = (byte *******)0x1;
                pppppppbStack_100 = (byte *******)0x2;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar16,puVar23,puVar20,&uStack_188,&pppppppbStack_110);
              }
            }
          }
          (*(code *)pppppppbStack_f0[4])(&pppppppbStack_d8,pppppppbStack_e8,pppppppbStack_e0);
          goto joined_r0x000100c12d34;
        }
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
        lVar16 = *(long *)(param_1 + 0x108);
        pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
        *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
        if ((byte *******)0x3 < pppppppbVar19) goto LAB_100c116fc;
LAB_100c12d88:
        pppppppbStack_430 = (byte *******)0x4;
      }
      pppppppbStack_428 = pppppppbVar19;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E();
      goto LAB_100c12f40;
    }
    uStack_120._0_4_ = (uint)*(undefined8 *)((long)param_2 + 1);
    uStack_120._4_4_ = (uint)((ulong)*(undefined8 *)((long)param_2 + 1) >> 0x20);
    bStack_118 = *(byte *)((long)param_2 + 9);
    pppppppbStack_128 = (byte *******)0x8;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b631f58 - 1 < 2 ||
         ((bRam000000010b631f58 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&__ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E),
          cVar13 != '\0')))))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E),
       iVar14 != 0)) {
      pppppppbStack_418 =
           (byte *******)(___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E + 0x30);
      pppppppbStack_f0 = (byte *******)&uStack_120;
      pppppppbStack_e8 =
           (byte *******)&__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E;
      pppppppbStack_e0 = (byte *******)&pppppppbStack_128;
      pppppppbStack_d8 =
           (byte *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppppppbStack_78 = (byte *******)&pppppppbStack_f0;
      pppppppbStack_80 = (byte *******)s_encoding_PING__ack__len__108ab974b;
      pppppppbStack_90 = (byte *******)&pppppppbStack_80;
      pppppppbStack_88 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_428 = (byte *******)&pppppppbStack_90;
      pppppppbStack_430 = (byte *******)0x1;
      pppppppbStack_420 = (byte *******)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E,&pppppppbStack_430)
      ;
      lVar16 = ___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_108 =
             *(byte ********)
              (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E + 0x20);
        pppppppbStack_100 =
             *(byte ********)
              (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E + 0x28);
        pppppppbStack_110 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
        if (iVar14 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
        }
      }
    }
    else {
      lVar16 = ___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_108 =
             *(byte ********)
              (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E + 0x20);
        pppppppbStack_100 =
             *(byte ********)
              (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E + 0x28);
        pppppppbStack_110 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_110);
        if (iVar14 != 0) {
          pppppppbStack_418 =
               (byte *******)
               (___ZN2h25frame4ping4Ping6encode10__CALLSITE17h6a45c6bc1fa58193E + 0x30);
          pppppppbStack_f0 = (byte *******)&uStack_120;
          pppppppbStack_e8 =
               (byte *******)
               &__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E;
          pppppppbStack_e0 = (byte *******)&pppppppbStack_128;
          pppppppbStack_d8 =
               (byte *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppbStack_78 = (byte *******)&pppppppbStack_f0;
          pppppppbStack_80 = (byte *******)s_encoding_PING__ack__len__108ab974b;
          pppppppbStack_90 = (byte *******)&pppppppbStack_80;
          pppppppbStack_88 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_428 = (byte *******)&pppppppbStack_90;
          pppppppbStack_430 = (byte *******)0x1;
          pppppppbStack_420 = (byte *******)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_110,&pppppppbStack_430);
        }
      }
    }
    uVar8 = (undefined1)uStack_120;
    lVar16 = *(long *)(param_1 + 0x108);
    if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 3) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      puVar1 = (undefined2 *)(*(long *)(param_1 + 0x100) + lVar16);
      *(undefined1 *)(puVar1 + 1) = 8;
      *puVar1 = 0;
      if (pppppppbVar19 < (byte *******)0x3) goto LAB_100c12d80;
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c10d4c;
LAB_100c10eb4:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 6;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_100c10d98;
LAB_100c10ed4:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = uVar8;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) goto LAB_100c10ef4;
LAB_100c10de4:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
      if (pppppppbVar19 < (byte *******)0x4) goto LAB_100c12d68;
      lVar16 = lVar16 + 4;
      *(long *)(param_1 + 0x108) = lVar16;
      if (7 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) goto LAB_100c10f14;
LAB_100c10e34:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,8,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      *(ulong *)(*(long *)(param_1 + 0x100) + lVar16) =
           CONCAT17(bStack_118,CONCAT43(uStack_120._4_4_,uStack_120._1_3_));
      if (pppppppbVar19 < (byte *******)0x8) {
        pppppppbStack_f0 = (byte *******)0x8;
        goto LAB_100c12e0c;
      }
      *(long *)(param_1 + 0x108) = lVar16 + 8;
    }
    else {
      ppppppbVar15 = *pppppppbVar18;
      *(undefined1 *)((undefined2 *)((long)ppppppbVar15 + lVar16) + 1) = 8;
      *(undefined2 *)((long)ppppppbVar15 + lVar16) = 0;
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c10eb4;
LAB_100c10d4c:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 6;
      if (lVar3 == lVar16) goto LAB_100c11b10;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_100c10ed4;
LAB_100c10d98:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = uVar8;
      if (lVar3 == lVar16) goto LAB_100c11b10;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) goto LAB_100c10de4;
LAB_100c10ef4:
      *(undefined4 *)((long)*pppppppbVar18 + lVar16) = 0;
      lVar16 = lVar16 + 4;
      *(long *)(param_1 + 0x108) = lVar16;
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 8) goto LAB_100c10e34;
LAB_100c10f14:
      *(ulong *)((long)*pppppppbVar18 + lVar16) =
           CONCAT17(bStack_118,CONCAT43(uStack_120._4_4_,uStack_120._1_3_));
      *(long *)(param_1 + 0x108) = lVar16 + 8;
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b631eb0 - 1 < 2 ||
         ((bRam000000010b631eb0 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
                              ), cVar13 != '\0')))) &&
        (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
                            ), iVar14 != 0)))) {
      pppppppbStack_418 =
           (byte *******)
           (___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE +
           0x30);
      pppppppbStack_110 = (byte *******)&UNK_108cc384f;
      pppppppbStack_108 = (byte *******)0x19;
      pppppppbStack_80 = (byte *******)0x0;
      if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
        pppppppbStack_80 = (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120))
        ;
      }
      pppppppbStack_f0 = (byte *******)&pppppppbStack_110;
      pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_e0 = (byte *******)&pppppppbStack_80;
      pppppppbStack_d8 = (byte *******)&UNK_10b215f00;
      pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
      pppppppbStack_430 = (byte *******)0x1;
      pppppppbStack_420 = (byte *******)0x2;
      FUN_100c1312c(&pppppppbStack_430);
    }
    else {
      lVar16 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_168 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
                      + 0x20);
        uStack_160 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
                      + 0x28);
        uStack_170 = 5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_170);
        if (iVar14 != 0) {
          pppppppbStack_418 =
               (byte *******)
               (
               ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
               + 0x30);
          pppppppbStack_110 = (byte *******)&UNK_108cc384f;
          pppppppbStack_108 = (byte *******)0x19;
          pppppppbStack_80 = (byte *******)0x0;
          if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
            pppppppbStack_80 =
                 (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
          }
          pppppppbStack_f0 = (byte *******)&pppppppbStack_110;
          pppppppbStack_e8 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_e0 = (byte *******)&pppppppbStack_80;
          pppppppbStack_d8 = (byte *******)&UNK_10b215f00;
          pppppppbStack_428 = (byte *******)&pppppppbStack_f0;
          pppppppbStack_430 = (byte *******)0x1;
          pppppppbStack_420 = (byte *******)0x2;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&uStack_170,&pppppppbStack_430);
        }
      }
    }
  }
LAB_100c126b0:
joined_r0x000100c12d34:
  if (pppppppbStack_470 != (byte *******)0x2) {
    pppppppbVar18 = pppppppbStack_468;
    if (((ulong)pppppppbStack_470 & 1) != 0) {
      pppppppbVar18 =
           (byte *******)
           ((long)pppppppbStack_468 + ((long)pppppppbStack_460[2] - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (*(code *)pppppppbStack_460[0xd])(pppppppbVar18,&pppppppbStack_458);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (ppppppbStack_450 != (byte ******)0x0)) {
    pppppppbStack_430 = (byte *******)ppppppbStack_450[2];
    pppppppbStack_428 = (byte *******)ppppppbStack_450[3];
    pppppppbStack_f0 = (byte *******)&pppppppbStack_430;
    pppppppbStack_e8 = (byte *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&pppppppbStack_470,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&pppppppbStack_f0);
  }
  FUN_100dddd8c(&pppppppbStack_470);
  return 0xd;
}

