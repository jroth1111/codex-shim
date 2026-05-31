
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007efd48(long param_1,byte *******param_2)

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
  byte *******pppppppbStack_510;
  byte *******pppppppbStack_508;
  byte *******pppppppbStack_500;
  byte *******pppppppbStack_4f8;
  byte ******ppppppbStack_4f0;
  byte ******ppppppbStack_4e8;
  byte ******ppppppbStack_4e0;
  byte ******ppppppbStack_4d8;
  byte ******ppppppbStack_4d0;
  undefined *puStack_4c8;
  byte *******pppppppbStack_4c0;
  byte *******pppppppbStack_4b8;
  byte *******pppppppbStack_4b0;
  byte *******pppppppbStack_4a8;
  byte ******ppppppbStack_4a0;
  byte *******pppppppbStack_498;
  byte ******ppppppbStack_490;
  byte ******ppppppbStack_488;
  undefined8 uStack_480;
  byte *******pppppppbStack_478;
  undefined1 auStack_470 [344];
  undefined1 auStack_318 [344];
  byte *******pppppppbStack_1c0;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  undefined1 auStack_1a0 [8];
  byte *******pppppppbStack_198;
  byte ******ppppppbStack_190;
  byte ******ppppppbStack_188;
  byte ******ppppppbStack_180;
  byte ******ppppppbStack_178;
  byte ******ppppppbStack_170;
  byte *******pppppppbStack_168;
  byte ******ppppppbStack_160;
  byte ******ppppppbStack_158;
  byte ******ppppppbStack_150;
  byte ******ppppppbStack_148;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte ******ppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  
  plVar22 = (long *)(param_1 + 0xb8);
  if ((*plVar22 != 4) ||
     ((ulong)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108)) < *(ulong *)(param_1 + 0x130)
     )) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb065e,0x25,&UNK_10b223278);
    goto LAB_1007f2e68;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b636588 - 1 < 2 ||
       ((bRam000000010b636588 != 0 &&
        (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hb85ff88e148b40d8E
                            ), cVar13 != '\0')))) &&
      (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hb85ff88e148b40d8E
                          ), iVar14 != 0)))) {
    pppppppbStack_1a8 =
         (byte *******)
         (
         ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hb85ff88e148b40d8E
         + 6);
    pppppppbStack_4c0 = (byte *******)&pppppppbStack_a0;
    pppppppbStack_4b8 = (byte *******)&UNK_10b223290;
    pppppppbStack_1b8 = (byte *******)&pppppppbStack_4c0;
    pppppppbStack_1c0 = (byte *******)0x1;
    pppppppbStack_1b0 = (byte *******)0x1;
    pppppppbStack_a0 = param_2;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&pppppppbStack_510,
               ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hb85ff88e148b40d8E
               ,&pppppppbStack_1c0);
  }
  else {
    pppppppbStack_1c0 = (byte *******)0x2;
    auStack_1a0 = (undefined1  [8])
                  ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hb85ff88e148b40d8E
    ;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      pppppppbStack_4a8 =
           (byte *******)
           (
           ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hb85ff88e148b40d8E
           + 6);
      pppppppbStack_510 = (byte *******)&pppppppbStack_a0;
      pppppppbStack_508 = (byte *******)&UNK_10b223290;
      pppppppbStack_4b8 = (byte *******)&pppppppbStack_510;
      pppppppbStack_4c0 = (byte *******)0x1;
      pppppppbStack_4b0 = (byte *******)0x1;
      pppppppbStack_a0 = param_2;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pppppppbStack_1c0,&pppppppbStack_4c0);
    }
    pppppppbStack_508 = pppppppbStack_1b8;
    pppppppbStack_510 = pppppppbStack_1c0;
    pppppppbStack_4f8 = pppppppbStack_1a8;
    pppppppbStack_500 = pppppppbStack_1b0;
    ppppppbStack_4f0 = (byte ******)auStack_1a0;
  }
  if (pppppppbStack_510 != (byte *******)0x2) {
    pppppppbVar18 = pppppppbStack_508;
    if (((ulong)pppppppbStack_510 & 1) != 0) {
      pppppppbVar18 =
           (byte *******)
           ((long)pppppppbStack_508 + ((long)pppppppbStack_500[2] - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (*(code *)pppppppbStack_500[0xc])(pppppppbVar18,&pppppppbStack_4f8);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (ppppppbStack_4f0 != (byte ******)0x0)) {
    pppppppbStack_4c0 = (byte *******)ppppppbStack_4f0[2];
    pppppppbStack_4b8 = (byte *******)ppppppbStack_4f0[3];
    pppppppbStack_1c0 = (byte *******)&pppppppbStack_4c0;
    pppppppbStack_1b8 = (byte *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&pppppppbStack_510,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&pppppppbStack_1c0);
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
      ((bRam000000010b636540 - 1 < 2 ||
       ((bRam000000010b636540 != 0 &&
        (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
                            ), cVar13 != '\0')))))) &&
     (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
                         ), iVar14 != 0)) {
    pppppppbStack_1a8 =
         (byte *******)
         (
         ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
         + 0x30);
    pppppppbStack_98 = (byte *******)&DAT_1013ebde0;
    pppppppbStack_78 = (byte *******)&pppppppbStack_a0;
    pppppppbStack_80 = (byte *******)s_send__frame___108ac7a67;
    pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
    pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
    pppppppbStack_1b8 = (byte *******)&pppppppbStack_b0;
    pppppppbStack_1c0 = (byte *******)0x1;
    pppppppbStack_1b0 = (byte *******)0x1;
    pppppppbStack_a0 = param_2;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
               ,&pppppppbStack_1c0);
    lVar16 = 
    ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppppbStack_4b8 =
           *(byte ********)
            (
            ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
            + 0x20);
      pppppppbStack_4b0 =
           *(byte ********)
            (
            ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
            + 0x28);
      pppppppbStack_4c0 = (byte *******)0x4;
      puVar20 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar20 = &UNK_10b3c24c8;
      }
      puVar23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar23 = &UNK_109adfc03;
      }
      iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_4c0);
      if (iVar14 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar16,puVar23,puVar20,&pppppppbStack_4c0,&pppppppbStack_1c0);
      }
    }
  }
  else {
    lVar16 = 
    ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      ppppppbStack_4e0 =
           *(byte *******)
            (
            ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
            + 0x20);
      ppppppbStack_4d8 =
           *(byte *******)
            (
            ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
            + 0x28);
      ppppppbStack_4e8 = (byte ******)0x4;
      puVar20 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar20 = &UNK_10b3c24c8;
      }
      puVar23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar23 = &UNK_109adfc03;
      }
      iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&ppppppbStack_4e8);
      if (iVar14 != 0) {
        pppppppbStack_4a8 =
             (byte *******)
             (
             ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h5f384a1a1741390eE
             + 0x30);
        pppppppbStack_a8 = (byte *******)&DAT_1013ebde0;
        uStack_c0._0_4_ = 0x8ac7a67;
        uStack_c0._4_4_ = 1;
        bStack_b8 = (byte)&pppppppbStack_b0;
        uStack_b7 = (undefined7)((ulong)&pppppppbStack_b0 >> 8);
        ppppppbStack_4d0 = (byte ******)&uStack_c0;
        puStack_4c8 = &UNK_10b208fd0;
        pppppppbStack_4b8 = &ppppppbStack_4d0;
        pppppppbStack_4c0 = (byte *******)0x1;
        pppppppbStack_4b0 = (byte *******)0x1;
        ppppppbStack_188 = ppppppbStack_4e0;
        ppppppbStack_190 = ppppppbStack_4e8;
        ppppppbStack_180 = ppppppbStack_4d8;
        auStack_1a0 = *(undefined1 (*) [8])(lVar16 + 0x60);
        pppppppbStack_198 = *(byte ********)(lVar16 + 0x68);
        pppppppbStack_1b8 = *(byte ********)(lVar16 + 0x50);
        pppppppbStack_1b0 = *(byte ********)(lVar16 + 0x58);
        pppppppbStack_1c0 = (byte *******)0x1;
        if (pppppppbStack_1b8 == (byte *******)0x0) {
          pppppppbStack_1c0 = (byte *******)0x2;
        }
        ppppppbStack_178 = *(byte *******)(lVar16 + 8);
        pppppppbStack_80 = (byte *******)&pppppppbStack_4c0;
        pppppppbStack_78 = (byte *******)CONCAT71(pppppppbStack_78._1_7_,1);
        pppppppbStack_a0 = (byte *******)&pppppppbStack_80;
        pppppppbStack_98 = (byte *******)&DAT_1061c2098;
        pppppppbStack_1a8 = (byte *******)0x1;
        if (auStack_1a0 == (undefined1  [8])0x0) {
          pppppppbStack_1a8 = (byte *******)0x2;
        }
        pppppppbStack_168 = (byte *******)&pppppppbStack_a0;
        ppppppbStack_170 = (byte ******)s__108b39f4f;
        pppppppbStack_b0 = param_2;
        (**(code **)(puVar20 + 0x20))(puVar23,&pppppppbStack_1c0);
      }
    }
  }
  pppppppbVar18 = (byte *******)(param_1 + 0x100);
  bVar4 = *(byte *)param_2;
  if (bVar4 < 5) {
    if (1 < bVar4) {
      if (bVar4 == 3) {
        _memcpy(auStack_318,param_2 + 1,0x158);
        pppppppbStack_4b8 = (byte *******)((ulong)*(uint *)(param_1 + 0x138) + 9);
        pppppppbStack_4c0 = pppppppbVar18;
        __ZN15rama_http_types5proto2h25frame7headers11PushPromise6encode17ha051754a63164434E
                  (&pppppppbStack_1c0,auStack_318,param_1,&pppppppbStack_4c0);
        if (pppppppbStack_1c0 != (byte *******)0x0) {
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
          *(byte ********)(param_1 + 200) = pppppppbStack_1b8;
          *(byte ********)(param_1 + 0xc0) = pppppppbStack_1c0;
          *(byte ********)(param_1 + 0xd8) = pppppppbStack_1a8;
          *(byte ********)(param_1 + 0xd0) = pppppppbStack_1b0;
          *(undefined1 (*) [8])(param_1 + 0xe0) = auStack_1a0;
        }
      }
      else {
        if (bVar4 != 4) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb069a,0xf,&UNK_10b2232c8);
          goto LAB_1007f2e68;
        }
        ppppppbStack_178 = param_2[10];
        ppppppbStack_180 = param_2[9];
        pppppppbStack_168 = (byte *******)param_2[0xc];
        ppppppbStack_170 = param_2[0xb];
        ppppppbStack_158 = param_2[0xe];
        ppppppbStack_160 = param_2[0xd];
        ppppppbStack_148 = param_2[0x10];
        ppppppbStack_150 = param_2[0xf];
        pppppppbStack_1b8 = (byte *******)param_2[2];
        pppppppbStack_1c0 = (byte *******)param_2[1];
        pppppppbStack_1a8 = (byte *******)param_2[4];
        pppppppbStack_1b0 = (byte *******)param_2[3];
        pppppppbStack_198 = (byte *******)param_2[6];
        auStack_1a0 = (undefined1  [8])param_2[5];
        ppppppbStack_188 = param_2[8];
        ppppppbStack_190 = param_2[7];
        __ZN15rama_http_types5proto2h25frame8settings8Settings6encode17h9445a2f7da4b7472E
                  (&pppppppbStack_1c0,pppppppbVar18);
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b6365d0 - 1 < 2 ||
             ((bRam000000010b6365d0 != 0 &&
              (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
                                  ), cVar13 != '\0')))) &&
            (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
                                ), iVar14 != 0)))) {
          pppppppbStack_4a8 =
               (byte *******)
               (
               ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
               + 0x30);
          lVar16 = 0;
          if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
            lVar16 = *(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120);
          }
          uStack_c0._0_4_ = (uint)lVar16;
          uStack_c0._4_4_ = (uint)((ulong)lVar16 >> 0x20);
          pppppppbStack_a0 = (byte *******)&uStack_c0;
          pppppppbStack_98 =
               (byte *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppbStack_78 = (byte *******)&pppppppbStack_a0;
          pppppppbStack_80 = (byte *******)s_encoded_settings__rem___108ac7a78;
          pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
          pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_4b8 = (byte *******)&pppppppbStack_b0;
          pppppppbStack_4c0 = (byte *******)0x1;
          pppppppbStack_4b0 = (byte *******)0x1;
          FUN_1007f30e4(&pppppppbStack_4c0);
        }
        else {
          lVar16 = 
          ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
          ;
          uStack_c0 = (byte *******)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0);
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (uStack_c0 = (byte *******)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0),
             4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppbStack_130 =
                 *(byte ********)
                  (
                  ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
                  + 0x20);
            pppppppbStack_128 =
                 *(byte ********)
                  (
                  ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
                  + 0x28);
            pppppppbStack_138 = (byte *******)0x5;
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar23 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar23 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_138);
            if (iVar14 != 0) {
              pppppppbStack_4a8 =
                   (byte *******)
                   (
                   ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf27e9ffcd3f9720bE
                   + 0x30);
              ppppppbStack_4d0 = (byte ******)0x0;
              if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                ppppppbStack_4d0 =
                     (byte ******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
              }
              pppppppbStack_80 = &ppppppbStack_4d0;
              pppppppbStack_78 =
                   (byte *******)
                   &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppppppbStack_a8 = (byte *******)&pppppppbStack_80;
              pppppppbStack_b0 = (byte *******)s_encoded_settings__rem___108ac7a78;
              uStack_c0 = (byte *******)&pppppppbStack_b0;
              bStack_b8 = 0xd0;
              uStack_b7 = 0x10b208f;
              pppppppbStack_4b8 = (byte *******)&uStack_c0;
              pppppppbStack_4c0 = (byte *******)0x1;
              pppppppbStack_4b0 = (byte *******)0x1;
              pppppppbStack_98 = pppppppbStack_130;
              pppppppbStack_a0 = pppppppbStack_138;
              pppppppbStack_90 = pppppppbStack_128;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
            }
          }
        }
        if (((short)ppppppbStack_180 != 2) && ((byte ******)0x8 < ppppppbStack_158)) {
          _free(ppppppbStack_170);
        }
      }
      goto joined_r0x0001007f2c50;
    }
    if (bVar4 != 0) {
      _memcpy(auStack_470,param_2 + 1,0x158);
      pppppppbStack_4b8 = (byte *******)((ulong)*(uint *)(param_1 + 0x138) + 9);
      pppppppbStack_4c0 = pppppppbVar18;
      __ZN15rama_http_types5proto2h25frame7headers7Headers6encode17h1d235259a8611bdfE
                (&pppppppbStack_1c0,auStack_470,param_1,&pppppppbStack_4c0);
      if (pppppppbStack_1c0 != (byte *******)0x0) {
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
        *(byte ********)(param_1 + 200) = pppppppbStack_1b8;
        *(byte ********)(param_1 + 0xc0) = pppppppbStack_1c0;
        *(byte ********)(param_1 + 0xd8) = pppppppbStack_1a8;
        *(byte ********)(param_1 + 0xd0) = pppppppbStack_1b0;
        *(undefined1 (*) [8])(param_1 + 0xe0) = auStack_1a0;
      }
      goto joined_r0x0001007f2c50;
    }
    pppppppbStack_4b8 = (byte *******)param_2[2];
    pppppppbStack_4c0 = (byte *******)param_2[1];
    pppppppbStack_4a8 = (byte *******)param_2[4];
    pppppppbStack_4b0 = (byte *******)param_2[3];
    pppppppbStack_498 = (byte *******)param_2[6];
    ppppppbStack_4a0 = param_2[5];
    ppppppbStack_488 = param_2[8];
    ppppppbStack_490 = param_2[7];
    ppppppbVar15 = param_2[9];
    uStack_480 = ppppppbVar15;
    if (pppppppbStack_4c0 == (byte *******)0x2) {
      pppppppbVar19 = (byte *******)0x0;
    }
    else {
      pppppppbVar19 = pppppppbStack_498;
      if (pppppppbStack_4c0 == (byte *******)0x1) {
        pppppppbVar24 = (byte *******)0x0;
        if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
          pppppppbVar24 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
        }
        if (pppppppbVar24 <= pppppppbStack_498) {
          pppppppbVar19 = pppppppbVar24;
        }
        if ((byte *******)(ulong)*(uint *)(param_1 + 0x138) < pppppppbVar19) {
LAB_1007f1dac:
          if (pppppppbStack_4c0 == (byte *******)0x1) {
            if (pppppppbStack_4b0 != (byte *******)0x0) {
              _free(pppppppbStack_4b8);
            }
          }
          else if (pppppppbStack_4c0 == (byte *******)0x0) {
            (*(code *)pppppppbStack_4b8[4])(&ppppppbStack_4a0,pppppppbStack_4b0,pppppppbStack_4a8);
          }
          if (pppppppbStack_510 != (byte *******)0x2) {
            pppppppbVar18 = pppppppbStack_508;
            if (((ulong)pppppppbStack_510 & 1) != 0) {
              pppppppbVar18 =
                   (byte *******)
                   ((long)pppppppbStack_508 +
                   ((long)pppppppbStack_500[2] - 1U & 0xfffffffffffffff0) + 0x10);
            }
            (*(code *)pppppppbStack_500[0xd])(pppppppbVar18,&pppppppbStack_4f8);
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (ppppppbStack_4f0 != (byte ******)0x0)) {
            pppppppbStack_4c0 = (byte *******)ppppppbStack_4f0[2];
            pppppppbStack_4b8 = (byte *******)ppppppbStack_4f0[3];
            pppppppbStack_1c0 = (byte *******)&pppppppbStack_4c0;
            pppppppbStack_1b8 = (byte *******)&DAT_100c7b3a0;
            FUN_1011d7d74(&pppppppbStack_510,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&pppppppbStack_1c0
                         );
          }
          FUN_100dddd8c(&pppppppbStack_510);
          return 2;
        }
      }
      else {
        if (pppppppbStack_4a8 <= pppppppbStack_498) {
          pppppppbVar19 = pppppppbStack_4a8;
        }
        if ((byte *******)(ulong)*(uint *)(param_1 + 0x138) < pppppppbVar19) goto LAB_1007f1dac;
      }
    }
    uStack_480._6_1_ = (undefined1)((ulong)ppppppbVar15 >> 0x30);
    uVar8 = uStack_480._6_1_;
    uStack_480._0_4_ = (uint)ppppppbVar15;
    uVar5 = (uint)uStack_480;
    if (pppppppbVar19 < *(byte ********)(param_1 + 0x128)) {
      if (pppppppbStack_4c0 == (byte *******)0x2) {
        pppppppbVar19 = (byte *******)0x0;
      }
      else {
        pppppppbVar19 = pppppppbStack_4a8;
        if (pppppppbStack_4c0 == (byte *******)0x1) {
          pppppppbVar19 = (byte *******)0x0;
          if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
            pppppppbVar19 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
          }
        }
      }
      pppppppbVar24 = pppppppbStack_498;
      if (pppppppbVar19 <= pppppppbStack_498) {
        pppppppbVar24 = pppppppbVar19;
      }
      uVar17 = *(ulong *)(param_1 + 0x108);
      if ((byte *******)(uVar17 ^ 0x7fffffffffffffff) < pppppppbVar24) {
        puVar20 = &UNK_10b223ff8;
        uVar21 = 0x2c;
        puVar23 = &UNK_108cb18f9;
LAB_1007f2da4:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar23,uVar21,puVar20);
        goto LAB_1007f2e68;
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
        if (pppppppbVar19 < (byte *******)0x3) goto LAB_1007f271c;
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
LAB_1007f2780:
        lVar16 = lVar16 + 1;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) == lVar16) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = uVar8;
          if (lVar3 == lVar16) goto LAB_1007f27b8;
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
          if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2814;
        }
        else {
          *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
        }
        *(long *)(param_1 + 0x108) = lVar16 + 4;
        pppppppbStack_b0 = (byte *******)&pppppppbStack_4c0;
        if (pppppppbStack_4c0 == (byte *******)0x2) {
          pppppppbVar19 = (byte *******)0x0;
        }
        else {
          pppppppbVar19 = pppppppbStack_4a8;
          if (pppppppbStack_4c0 == (byte *******)0x1) {
            pppppppbVar19 = (byte *******)0x0;
            if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
              pppppppbVar19 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
            }
          }
        }
        pppppppbVar24 = pppppppbStack_498;
        if (pppppppbVar19 <= pppppppbStack_498) {
          pppppppbVar24 = pppppppbVar19;
        }
        if (pppppppbVar24 != (byte *******)0x0) {
          if (*(long *)(param_1 + 0x110) != 0) {
            if (pppppppbStack_4c0 == (byte *******)0x2) {
              pppppppbVar19 = (byte *******)0x0;
            }
            else {
              pppppppbVar19 = pppppppbStack_4a8;
              if (pppppppbStack_4c0 == (byte *******)0x1) {
                pppppppbVar19 = (byte *******)0x0;
                if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
                  pppppppbVar19 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
                }
              }
            }
            pppppppbVar24 = pppppppbStack_498;
            if (pppppppbVar19 <= pppppppbStack_498) {
              pppppppbVar24 = pppppppbVar19;
            }
            if ((byte *******)(*(long *)(param_1 + 0x110) - (lVar16 + 4)) < pppppppbVar24) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                        (pppppppbVar18,pppppppbVar24,1);
            }
            puVar20 = &UNK_10b24a6b8;
            uVar21 = 0x23;
            puVar23 = &UNK_108cd2e85;
            if (pppppppbStack_4c0 != (byte *******)0x2) goto LAB_1007f2970;
            do {
              pppppppbVar19 = (byte *******)0x0;
LAB_1007f2994:
              pppppppbVar24 = pppppppbStack_498;
              if (pppppppbVar19 <= pppppppbStack_498) {
                pppppppbVar24 = pppppppbVar19;
              }
              if (pppppppbVar24 == (byte *******)0x0) goto LAB_1007f2b80;
              if (pppppppbStack_4c0 == (byte *******)0x2) {
                pppppppbVar19 = (byte *******)0x1;
                pppppppbVar24 = (byte *******)0x0;
                lVar16 = *(long *)(param_1 + 0x108);
              }
              else {
                pppppppbVar24 = pppppppbStack_498;
                if (pppppppbStack_4c0 == (byte *******)0x1) {
                  pppppppbVar11 = pppppppbStack_4b0;
                  if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
                    pppppppbVar11 = pppppppbStack_4a8;
                  }
                  pppppppbVar19 = (byte *******)((long)pppppppbStack_4b8 + (long)pppppppbVar11);
                  if ((byte *******)((long)pppppppbStack_4b0 - (long)pppppppbVar11) <=
                      pppppppbStack_498) {
                    pppppppbVar24 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbVar11);
                  }
                  lVar16 = *(long *)(param_1 + 0x108);
                  if ((byte *******)(*(long *)(param_1 + 0x110) - lVar16) < pppppppbVar24) {
LAB_1007f2a28:
                    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                              (pppppppbVar18,pppppppbVar24,1);
                    lVar16 = *(long *)(param_1 + 0x108);
                  }
                }
                else {
                  if (pppppppbStack_4a8 <= pppppppbStack_498) {
                    pppppppbVar24 = pppppppbStack_4a8;
                  }
                  lVar16 = *(long *)(param_1 + 0x108);
                  pppppppbVar19 = pppppppbStack_4b0;
                  if ((byte *******)(*(long *)(param_1 + 0x110) - lVar16) < pppppppbVar24)
                  goto LAB_1007f2a28;
                }
              }
              _memcpy(*(long *)(param_1 + 0x100) + lVar16,pppppppbVar19,pppppppbVar24);
              pppppppbVar19 =
                   (byte *******)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108));
              if (pppppppbVar19 < pppppppbVar24) goto LAB_1007f2c98;
              *(byte **)(param_1 + 0x108) =
                   (byte *)((long)pppppppbVar24 + *(long *)(param_1 + 0x108));
              pppppppbVar11 = (byte *******)((long)pppppppbStack_498 - (long)pppppppbVar24);
              if (pppppppbStack_498 < pppppppbVar24) goto LAB_1007f2da4;
              if (pppppppbStack_4c0 != (byte *******)0x2) {
                if (pppppppbStack_4c0 == (byte *******)0x1) {
                  pppppppbVar19 = (byte *******)0x0;
                  if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
                    pppppppbVar19 =
                         (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
                  }
                  if (pppppppbVar19 < pppppppbVar24) goto LAB_1007f2c98;
                  pppppppbStack_4a8 = (byte *******)((long)pppppppbStack_4a8 + (long)pppppppbVar24);
                }
                else {
                  pppppppbStack_80 = pppppppbVar24;
                  if (pppppppbStack_4a8 < pppppppbVar24) {
                    pppppppbStack_a0 = pppppppbStack_4a8;
                    pppppppbStack_1c0 = (byte *******)&pppppppbStack_80;
                    pppppppbStack_1b8 = (byte *******)&DAT_100c929e0;
                    pppppppbStack_1b0 = (byte *******)&pppppppbStack_a0;
                    pppppppbStack_1a8 = (byte *******)&DAT_100c929e0;
                    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (s__cannot_advance_past__remaining__108aba12e,&pppppppbStack_1c0,
                               &UNK_10b243fb8);
                    goto LAB_1007f2e68;
                  }
                  pppppppbStack_4b0 = (byte *******)((long)pppppppbStack_4b0 + (long)pppppppbVar24);
                  pppppppbStack_4a8 = (byte *******)((long)pppppppbStack_4a8 - (long)pppppppbVar24);
                }
              }
              pppppppbStack_498 = pppppppbVar11;
            } while (pppppppbStack_4c0 == (byte *******)0x2);
LAB_1007f2970:
            pppppppbVar19 = pppppppbStack_4a8;
            if (pppppppbStack_4c0 == (byte *******)0x1) {
              pppppppbVar19 = (byte *******)0x0;
              if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
                pppppppbVar19 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
              }
            }
            goto LAB_1007f2994;
          }
          if (pppppppbStack_4c0 == (byte *******)0x2) {
            pppppppbVar19 = (byte *******)0x0;
          }
          else {
            pppppppbVar19 = pppppppbStack_4a8;
            if (pppppppbStack_4c0 == (byte *******)0x1) {
              pppppppbVar19 = (byte *******)0x0;
              if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
                pppppppbVar19 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
              }
            }
          }
          pppppppbVar24 = pppppppbStack_498;
          if (pppppppbVar19 <= pppppppbStack_498) {
            pppppppbVar24 = pppppppbVar19;
          }
          FUN_100f305dc(&pppppppbStack_a0,&pppppppbStack_b0,pppppppbVar24);
          __ZN5bytes5bytes5Bytes12try_into_mut17hb9dd212f7bac5c02E
                    (&pppppppbStack_1c0,&pppppppbStack_a0);
          pppppppbVar24 = pppppppbStack_1a8;
          pppppppbVar19 = pppppppbStack_1b0;
          if (((ulong)pppppppbStack_1c0 & 1) == 0) {
            __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                      (pppppppbVar18);
            *(byte ********)(param_1 + 0x108) = pppppppbStack_1b0;
            *pppppppbVar18 = (byte ******)pppppppbStack_1b8;
            *(undefined1 (*) [8])(param_1 + 0x118) = auStack_1a0;
            *(byte ********)(param_1 + 0x110) = pppppppbStack_1a8;
          }
          else {
            pppppppbStack_98 = pppppppbStack_1b0;
            pppppppbStack_a0 = pppppppbStack_1b8;
            ppppppbStack_88 = (byte ******)auStack_1a0;
            pppppppbStack_90 = pppppppbStack_1a8;
            lVar16 = *(long *)(param_1 + 0x108);
            if ((byte *******)-lVar16 < pppppppbStack_1a8) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
                        (pppppppbVar18,pppppppbStack_1a8,1);
              lVar16 = *(long *)(param_1 + 0x108);
            }
            _memcpy(*(long *)(param_1 + 0x100) + lVar16,pppppppbVar19,pppppppbVar24);
            pppppppbVar18 = (byte *******)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108));
            if (pppppppbVar18 < pppppppbVar24) {
              pppppppbStack_80 = pppppppbVar24;
              pppppppbStack_78 = pppppppbVar18;
              __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppppppbStack_80);
              goto LAB_1007f2e68;
            }
            *(byte **)(param_1 + 0x108) = (byte *)((long)pppppppbVar24 + *(long *)(param_1 + 0x108))
            ;
            (*(code *)pppppppbStack_a0[4])(&ppppppbStack_88,pppppppbStack_98,pppppppbStack_90);
          }
        }
LAB_1007f2b80:
        if (pppppppbStack_4c0 == (byte *******)0x2) {
          pppppppbVar18 = (byte *******)0x0;
        }
        else {
          pppppppbVar18 = pppppppbStack_4a8;
          if (pppppppbStack_4c0 == (byte *******)0x1) {
            pppppppbVar18 = (byte *******)0x0;
            if (pppppppbStack_4a8 <= pppppppbStack_4b0) {
              pppppppbVar18 = (byte *******)((long)pppppppbStack_4b0 - (long)pppppppbStack_4a8);
            }
          }
        }
        pppppppbStack_478 = pppppppbStack_498;
        if (pppppppbVar18 <= pppppppbStack_498) {
          pppppppbStack_478 = pppppppbVar18;
        }
        if (pppppppbStack_478 != (byte *******)0x0) {
          FUN_107c05cc8(0,&pppppppbStack_478,&UNK_108c511b0,&UNK_108cb0683,0x2f,&UNK_10b2232b0);
          goto LAB_1007f2e68;
        }
        pppppppbStack_198 = pppppppbStack_498;
        auStack_1a0 = (undefined1  [8])ppppppbStack_4a0;
        ppppppbStack_188 = ppppppbStack_488;
        ppppppbStack_190 = ppppppbStack_490;
        ppppppbStack_180 = uStack_480;
        pppppppbStack_1b8 = pppppppbStack_4b8;
        pppppppbStack_1c0 = pppppppbStack_4c0;
        pppppppbStack_1a8 = pppppppbStack_4a8;
        pppppppbStack_1b0 = pppppppbStack_4b0;
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
        *(byte ********)(param_1 + 0x98) = pppppppbStack_198;
        *(undefined1 (*) [8])(param_1 + 0x90) = auStack_1a0;
        *(byte *******)(param_1 + 0xa8) = ppppppbStack_188;
        *(byte *******)(param_1 + 0xa0) = ppppppbStack_190;
        *(byte *******)(param_1 + 0xb0) = ppppppbStack_180;
        *(byte ********)(param_1 + 0x78) = pppppppbStack_1b8;
        *(long *)(param_1 + 0x70) = (long)pppppppbStack_1c0;
        *(byte ********)(param_1 + 0x88) = pppppppbStack_1a8;
        *(byte ********)(param_1 + 0x80) = pppppppbStack_1b0;
LAB_1007f2c34:
        goto joined_r0x0001007f2c50;
      }
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
      if (lVar3 != lVar16) goto LAB_1007f2780;
LAB_1007f27b8:
      pppppppbStack_1b8 = (byte *******)0x0;
      pppppppbStack_1c0 = (byte *******)0x1;
      pppppppbVar24 = pppppppbStack_1c0;
      pppppppbVar19 = pppppppbStack_1b8;
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
        if ((byte *******)0x2 < pppppppbVar19) goto LAB_1007f20e8;
LAB_1007f271c:
        pppppppbVar24 = (byte *******)0x3;
      }
      else {
        ppppppbVar15 = *pppppppbVar18;
        *(ushort *)((long)ppppppbVar15 + lVar16) = uVar10;
        *(undefined1 *)((ushort *)((long)ppppppbVar15 + lVar16) + 1) = uVar9;
LAB_1007f20e8:
        lVar16 = lVar16 + 3;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) == lVar16) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
          if (lVar3 == lVar16) goto LAB_1007f27b8;
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
          if (lVar3 == lVar16) goto LAB_1007f27b8;
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
LAB_1007f21c0:
          uVar17 = lVar16 + 4;
          *(ulong *)(param_1 + 0x108) = uVar17;
          if (uVar17 < *(ulong *)(param_1 + 0x128)) {
            lVar16 = 0;
            if (*(ulong *)(param_1 + 0x120) <= uVar17) {
              lVar16 = uVar17 - *(ulong *)(param_1 + 0x120);
            }
            FUN_1011a3558(pppppppbVar18,&pppppppbStack_4c0,*(ulong *)(param_1 + 0x128) - lVar16);
          }
          pppppppbStack_198 = pppppppbStack_498;
          auStack_1a0 = (undefined1  [8])ppppppbStack_4a0;
          ppppppbStack_188 = ppppppbStack_488;
          ppppppbStack_190 = ppppppbStack_490;
          ppppppbStack_180 = uStack_480;
          pppppppbStack_1b8 = pppppppbStack_4b8;
          pppppppbStack_1c0 = pppppppbStack_4c0;
          pppppppbStack_1a8 = pppppppbStack_4a8;
          pppppppbStack_1b0 = pppppppbStack_4b0;
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
          *(byte ********)(param_1 + 0xe0) = pppppppbStack_198;
          *(undefined1 (*) [8])(param_1 + 0xd8) = auStack_1a0;
          *(byte *******)(param_1 + 0xf0) = ppppppbStack_188;
          *(byte *******)(param_1 + 0xe8) = ppppppbStack_190;
          *(byte *******)(param_1 + 0xf8) = ppppppbStack_180;
          *(byte ********)(param_1 + 0xc0) = pppppppbStack_1b8;
          *plVar22 = (long)pppppppbStack_1c0;
          *(byte ********)(param_1 + 0xd0) = pppppppbStack_1a8;
          *(byte ********)(param_1 + 200) = pppppppbStack_1b0;
          goto LAB_1007f2c34;
        }
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
        lVar16 = *(long *)(param_1 + 0x108);
        pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
        *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
        if ((byte *******)0x3 < pppppppbVar19) goto LAB_1007f21c0;
LAB_1007f2814:
        pppppppbVar24 = (byte *******)0x4;
      }
    }
LAB_1007f2c98:
    pppppppbStack_1b8 = pppppppbVar19;
    pppppppbStack_1c0 = pppppppbVar24;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppppppbStack_1c0);
    goto LAB_1007f2e68;
  }
  if (bVar4 < 7) {
    if (bVar4 != 5) {
      pppppppbStack_1b8 = (byte *******)param_2[2];
      pppppppbStack_1c0 = (byte *******)param_2[1];
      pppppppbStack_1a8 = (byte *******)param_2[4];
      pppppppbStack_1b0 = (byte *******)param_2[3];
      auStack_1a0 = (undefined1  [8])param_2[5];
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b638d30 - 1 < 2 ||
           ((bRam000000010b638d30 != 0 &&
            (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                                ), cVar13 != '\0')))) &&
          (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                              ), iVar14 != 0)))) {
        pppppppbStack_4a8 =
             (byte *******)
             (
             ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
             + 0x30);
        pppppppbStack_80 = (byte *******)(auStack_1a0 + 4);
        pppppppbStack_78 =
             (byte *******)
             &
             __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
        ;
        pppppppbStack_a8 = (byte *******)&pppppppbStack_80;
        pppppppbStack_b0 = (byte *******)s_encoding_GO_AWAY__code__108ac96cc;
        uStack_c0 = (byte *******)&pppppppbStack_b0;
        bStack_b8 = 0xd0;
        uStack_b7 = 0x10b208f;
        pppppppbStack_4b8 = (byte *******)&uStack_c0;
        pppppppbStack_4c0 = (byte *******)0x1;
        pppppppbStack_4b0 = (byte *******)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                   ,&pppppppbStack_4c0);
        lVar16 = 
        ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppbStack_98 =
               *(byte ********)
                (
                ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                + 0x20);
          pppppppbStack_90 =
               *(byte ********)
                (
                ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                + 0x28);
          pppppppbStack_a0 = (byte *******)0x5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar23 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar23 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_a0);
          if (iVar14 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
          }
        }
      }
      else {
        lVar16 = 
        ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE;
        uStack_c0 = (byte *******)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0);
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (uStack_c0 = (byte *******)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0),
           4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppbStack_98 =
               *(byte ********)
                (
                ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                + 0x20);
          pppppppbStack_90 =
               *(byte ********)
                (
                ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                + 0x28);
          pppppppbStack_a0 = (byte *******)0x5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar23 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar23 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_a0);
          if (iVar14 != 0) {
            pppppppbStack_4a8 =
                 (byte *******)
                 (
                 ___ZN15rama_http_types5proto2h25frame7go_away6GoAway6encode10__CALLSITE17h661a0e2a27793f8dE
                 + 0x30);
            pppppppbStack_80 = (byte *******)(auStack_1a0 + 4);
            pppppppbStack_78 =
                 (byte *******)
                 &
                 __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
            ;
            pppppppbStack_a8 = (byte *******)&pppppppbStack_80;
            pppppppbStack_b0 = (byte *******)s_encoding_GO_AWAY__code__108ac96cc;
            uStack_c0 = (byte *******)&pppppppbStack_b0;
            bStack_b8 = 0xd0;
            uStack_b7 = 0x10b208f;
            pppppppbStack_4b8 = (byte *******)&uStack_c0;
            pppppppbStack_4c0 = (byte *******)0x1;
            pppppppbStack_4b0 = (byte *******)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
          }
        }
      }
      uVar17 = ((ulong)(pppppppbStack_1b0 + 1) & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)(pppppppbStack_1b0 + 1) & 0xff00ff00ff00ff) << 8;
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
        if ((byte *******)0x2 < pppppppbVar19) {
          lVar16 = lVar16 + 3;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_1007f1488;
          goto LAB_1007f1558;
        }
        pppppppbStack_4c0 = (byte *******)0x3;
      }
      else {
        ppppppbVar15 = *pppppppbVar18;
        *(ushort *)((long)ppppppbVar15 + lVar16) = uVar10;
        *(undefined1 *)((ushort *)((long)ppppppbVar15 + lVar16) + 1) = uVar8;
        lVar16 = lVar16 + 3;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) == lVar16) {
LAB_1007f1488:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 7;
          if (lVar3 != lVar16) {
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f1578;
            goto LAB_1007f14c4;
          }
LAB_1007f2cb0:
          pppppppbVar19 = (byte *******)0x0;
          pppppppbStack_4c0 = (byte *******)0x1;
        }
        else {
LAB_1007f1558:
          *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 7;
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          if (*(long *)(param_1 + 0x110) != lVar16) {
LAB_1007f1578:
            *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
            lVar16 = lVar16 + 1;
            *(long *)(param_1 + 0x108) = lVar16;
            if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) goto LAB_1007f1500;
LAB_1007f1598:
            *(undefined4 *)((long)*pppppppbVar18 + lVar16) = 0;
LAB_1007f15a0:
            lVar16 = lVar16 + 4;
            *(long *)(param_1 + 0x108) = lVar16;
            uVar5 = (auStack_1a0._0_4_ & 0xff00ff00) >> 8 | (auStack_1a0._0_4_ & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
              lVar16 = *(long *)(param_1 + 0x108);
              pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
              *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
              if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2ca8;
            }
            else {
              *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
            }
            lVar3 = lVar16 + 4;
            *(long *)(param_1 + 0x108) = lVar3;
            uVar5 = (auStack_1a0._4_4_ & 0xff00ff00) >> 8 | (auStack_1a0._4_4_ & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if ((ulong)(*(long *)(param_1 + 0x110) - lVar3) < 4) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
              lVar16 = *(long *)(param_1 + 0x108);
              pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
              *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
              if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2ca8;
              *(long *)(param_1 + 0x108) = lVar16 + 4;
              if (pppppppbStack_1b0 == (byte *******)0x0) goto LAB_1007f1688;
LAB_1007f164c:
              pppppppbVar19 = pppppppbStack_1b0;
              (*(code *)*pppppppbStack_1c0)
                        (&pppppppbStack_4c0,&pppppppbStack_1a8,pppppppbStack_1b8,pppppppbStack_1b0);
              pppppppbStack_4b0 = pppppppbVar19;
            }
            else {
              *(uint *)((long)*pppppppbVar18 + lVar3) = uVar5;
              *(long *)(param_1 + 0x108) = lVar16 + 8;
              if (pppppppbStack_1b0 != (byte *******)0x0) goto LAB_1007f164c;
LAB_1007f1688:
              pppppppbStack_4a8 = (byte *******)0x0;
              pppppppbStack_4c0 = (byte *******)&UNK_10b209220;
              pppppppbStack_4b8 = pppppppbStack_1b8;
              pppppppbStack_4b0 = pppppppbStack_1b0;
            }
            FUN_1011a3a1c(pppppppbVar18,&pppppppbStack_4c0);
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
              if (1 < bRam000000010b6365a0 - 1) {
                if (bRam000000010b6365a0 != 0) {
                  cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
                                     );
                  if (cVar13 != '\0') goto LAB_1007f1cec;
                }
                goto LAB_1007f16bc;
              }
LAB_1007f1cec:
              iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
                                 );
              if (iVar14 == 0) goto LAB_1007f16bc;
              pppppppbStack_4a8 =
                   (byte *******)
                   (
                   ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
                   + 0x30);
              lVar16 = 0;
              if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                lVar16 = *(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120);
              }
              uStack_c0._0_4_ = (uint)lVar16;
              uStack_c0._4_4_ = (uint)((ulong)lVar16 >> 0x20);
              pppppppbStack_a0 = (byte *******)&uStack_c0;
              pppppppbStack_98 =
                   (byte *******)
                   &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppppppbStack_78 = (byte *******)&pppppppbStack_a0;
              pppppppbStack_80 = (byte *******)s_encoded_go_away__rem___108ac7aaa;
              pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
              pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
              pppppppbStack_4b8 = (byte *******)&pppppppbStack_b0;
              pppppppbStack_4c0 = (byte *******)0x1;
              pppppppbStack_4b0 = (byte *******)0x1;
              FUN_1007f3498(&pppppppbStack_4c0);
            }
            else {
LAB_1007f16bc:
              lVar16 = 
              ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pppppppbStack_118 =
                     *(byte ********)
                      (
                      ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
                      + 0x20);
                pppppppbStack_110 =
                     *(byte ********)
                      (
                      ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
                      + 0x28);
                pppppppbStack_120 = (byte *******)0x5;
                puVar20 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar20 = &UNK_10b3c24c8;
                }
                puVar23 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar23 = &UNK_109adfc03;
                }
                iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_120);
                if (iVar14 != 0) {
                  pppppppbStack_4a8 =
                       (byte *******)
                       (
                       ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17heb0629ae50b6d62dE
                       + 0x30);
                  ppppppbStack_4d0 = (byte ******)0x0;
                  if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                    ppppppbStack_4d0 =
                         (byte ******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
                  }
                  pppppppbStack_80 = &ppppppbStack_4d0;
                  pppppppbStack_78 =
                       (byte *******)
                       &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                  ;
                  pppppppbStack_a8 = (byte *******)&pppppppbStack_80;
                  pppppppbStack_b0 = (byte *******)s_encoded_go_away__rem___108ac7aaa;
                  uStack_c0 = (byte *******)&pppppppbStack_b0;
                  bStack_b8 = 0xd0;
                  uStack_b7 = 0x10b208f;
                  pppppppbStack_4b8 = (byte *******)&uStack_c0;
                  pppppppbStack_4c0 = (byte *******)0x1;
                  pppppppbStack_4b0 = (byte *******)0x1;
                  pppppppbStack_98 = pppppppbStack_118;
                  pppppppbStack_a0 = pppppppbStack_120;
                  pppppppbStack_90 = pppppppbStack_110;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
                }
              }
            }
            (*(code *)pppppppbStack_1c0[4])(&pppppppbStack_1a8,pppppppbStack_1b8,pppppppbStack_1b0);
            goto joined_r0x0001007f2c50;
          }
LAB_1007f14c4:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
          lVar16 = *(long *)(param_1 + 0x108);
          lVar3 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
          if (lVar3 == lVar16) goto LAB_1007f2cb0;
          lVar16 = lVar16 + 1;
          *(long *)(param_1 + 0x108) = lVar16;
          if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) goto LAB_1007f1598;
LAB_1007f1500:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
          if ((byte *******)0x3 < pppppppbVar19) goto LAB_1007f15a0;
LAB_1007f2ca8:
          pppppppbStack_4c0 = (byte *******)0x4;
        }
      }
      pppppppbStack_4b8 = pppppppbVar19;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E();
      goto LAB_1007f2e68;
    }
    uStack_c0._0_4_ = (uint)*(undefined8 *)((long)param_2 + 1);
    uStack_c0._4_4_ = (uint)((ulong)*(undefined8 *)((long)param_2 + 1) >> 0x20);
    bStack_b8 = *(byte *)((long)param_2 + 9);
    ppppppbStack_4d0 = (byte ******)0x8;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b638d00 - 1 < 2 ||
         ((bRam000000010b638d00 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
                              ), cVar13 != '\0')))))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
                           ), iVar14 != 0)) {
      pppppppbStack_4a8 =
           (byte *******)
           (___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE +
           0x30);
      pppppppbStack_1c0 = (byte *******)&uStack_c0;
      pppppppbStack_1b8 =
           (byte *******)&__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E;
      pppppppbStack_1b0 = &ppppppbStack_4d0;
      pppppppbStack_1a8 =
           (byte *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppppppbStack_78 = (byte *******)&pppppppbStack_1c0;
      pppppppbStack_80 = (byte *******)s_encoding_PING__ack__len__108ab974b;
      pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
      pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_4b8 = (byte *******)&pppppppbStack_b0;
      pppppppbStack_4c0 = (byte *******)0x1;
      pppppppbStack_4b0 = (byte *******)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
                 ,&pppppppbStack_4c0);
      lVar16 = 
      ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_98 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
              + 0x20);
        pppppppbStack_90 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
              + 0x28);
        pppppppbStack_a0 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_a0);
        if (iVar14 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
        }
      }
    }
    else {
      lVar16 = 
      ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_98 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
              + 0x20);
        pppppppbStack_90 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
              + 0x28);
        pppppppbStack_a0 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_a0);
        if (iVar14 != 0) {
          pppppppbStack_4a8 =
               (byte *******)
               (
               ___ZN15rama_http_types5proto2h25frame4ping4Ping6encode10__CALLSITE17hbf2d1b80035296ccE
               + 0x30);
          pppppppbStack_1c0 = (byte *******)&uStack_c0;
          pppppppbStack_1b8 =
               (byte *******)
               &__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E;
          pppppppbStack_1b0 = &ppppppbStack_4d0;
          pppppppbStack_1a8 =
               (byte *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppbStack_78 = (byte *******)&pppppppbStack_1c0;
          pppppppbStack_80 = (byte *******)s_encoding_PING__ack__len__108ab974b;
          pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
          pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_4b8 = (byte *******)&pppppppbStack_b0;
          pppppppbStack_4c0 = (byte *******)0x1;
          pppppppbStack_4b0 = (byte *******)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
        }
      }
    }
    uVar8 = (undefined1)uStack_c0;
    lVar16 = *(long *)(param_1 + 0x108);
    if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 3) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      puVar1 = (undefined2 *)(*(long *)(param_1 + 0x100) + lVar16);
      *(undefined1 *)(puVar1 + 1) = 8;
      *puVar1 = 0;
      if (pppppppbVar19 < (byte *******)0x3) goto LAB_1007f2ca0;
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f0da0;
LAB_1007f0c38:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 6;
      if (lVar3 == lVar16) goto LAB_1007f1a20;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_1007f0c84;
LAB_1007f0dc0:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = uVar8;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) goto LAB_1007f0cd0;
LAB_1007f0de0:
      *(undefined4 *)((long)*pppppppbVar18 + lVar16) = 0;
      lVar16 = lVar16 + 4;
      *(long *)(param_1 + 0x108) = lVar16;
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 8) goto LAB_1007f0d20;
LAB_1007f0e00:
      *(ulong *)((long)*pppppppbVar18 + lVar16) =
           CONCAT17(bStack_b8,CONCAT43(uStack_c0._4_4_,uStack_c0._1_3_));
      *(long *)(param_1 + 0x108) = lVar16 + 8;
    }
    else {
      ppppppbVar15 = *pppppppbVar18;
      *(undefined1 *)((undefined2 *)((long)ppppppbVar15 + lVar16) + 1) = 8;
      *(undefined2 *)((long)ppppppbVar15 + lVar16) = 0;
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_1007f0c38;
LAB_1007f0da0:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 6;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f0dc0;
LAB_1007f0c84:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = uVar8;
      if (lVar3 == lVar16) goto LAB_1007f1a20;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) goto LAB_1007f0de0;
LAB_1007f0cd0:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
      if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2c88;
      lVar16 = lVar16 + 4;
      *(long *)(param_1 + 0x108) = lVar16;
      if (7 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) goto LAB_1007f0e00;
LAB_1007f0d20:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,8,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      *(ulong *)(*(long *)(param_1 + 0x100) + lVar16) =
           CONCAT17(bStack_b8,CONCAT43(uStack_c0._4_4_,uStack_c0._1_3_));
      if (pppppppbVar19 < (byte *******)0x8) {
        pppppppbStack_1c0 = (byte *******)0x8;
        goto LAB_1007f2d2c;
      }
      *(long *)(param_1 + 0x108) = lVar16 + 8;
    }
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b636558 - 1 < 2 ||
         ((bRam000000010b636558 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
                              ), cVar13 != '\0')))))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
                           ), iVar14 != 0)) {
      pppppppbStack_1a8 =
           (byte *******)
           (
           ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
           + 0x30);
      pppppppbStack_b0 = (byte *******)0x0;
      if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
        pppppppbStack_b0 = (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120))
        ;
      }
      pppppppbStack_4c0 = (byte *******)&pppppppbStack_b0;
      pppppppbStack_4b8 =
           (byte *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppppppbStack_98 = (byte *******)&pppppppbStack_4c0;
      pppppppbStack_a0 = (byte *******)s_encoded_ping__rem___108ac7a93;
      pppppppbStack_80 = (byte *******)&pppppppbStack_a0;
      pppppppbStack_78 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_1b8 = (byte *******)&pppppppbStack_80;
      pppppppbStack_1c0 = (byte *******)0x1;
      pppppppbStack_1b0 = (byte *******)0x1;
      FUN_1007f335c(&pppppppbStack_1c0);
    }
    else {
      lVar16 = 
      ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_100 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
                      + 0x20);
        uStack_f8 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
                     + 0x28);
        uStack_108 = 5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_108);
        if (iVar14 != 0) {
          pppppppbStack_1a8 =
               (byte *******)
               (
               ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h748d13e4a697a38aE
               + 0x30);
          pppppppbStack_b0 = (byte *******)0x0;
          if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
            pppppppbStack_b0 =
                 (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
          }
          pppppppbStack_4c0 = (byte *******)&pppppppbStack_b0;
          pppppppbStack_4b8 =
               (byte *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppbStack_98 = (byte *******)&pppppppbStack_4c0;
          pppppppbStack_a0 = (byte *******)s_encoded_ping__rem___108ac7a93;
          pppppppbStack_80 = (byte *******)&pppppppbStack_a0;
          pppppppbStack_78 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_1b8 = (byte *******)&pppppppbStack_80;
          pppppppbStack_1c0 = (byte *******)0x1;
          pppppppbStack_1b0 = (byte *******)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&uStack_108,&pppppppbStack_1c0);
        }
      }
    }
LAB_1007f25bc:
joined_r0x0001007f2c50:
    if (pppppppbStack_510 != (byte *******)0x2) {
      pppppppbVar18 = pppppppbStack_508;
      if (((ulong)pppppppbStack_510 & 1) != 0) {
        pppppppbVar18 =
             (byte *******)
             ((long)pppppppbStack_508 +
             ((long)pppppppbStack_500[2] - 1U & 0xfffffffffffffff0) + 0x10);
      }
      (*(code *)pppppppbStack_500[0xd])(pppppppbVar18,&pppppppbStack_4f8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (ppppppbStack_4f0 != (byte ******)0x0)) {
      pppppppbStack_4c0 = (byte *******)ppppppbStack_4f0[2];
      pppppppbStack_4b8 = (byte *******)ppppppbStack_4f0[3];
      pppppppbStack_1c0 = (byte *******)&pppppppbStack_4c0;
      pppppppbStack_1b8 = (byte *******)&DAT_100c7b3a0;
      FUN_1011d7d74(&pppppppbStack_510,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&pppppppbStack_1c0);
    }
    FUN_100dddd8c(&pppppppbStack_510);
    return 0xf;
  }
  if (bVar4 == 7) {
    uStack_c0._0_4_ = (uint)*(undefined8 *)((long)param_2 + 4);
    uStack_c0._4_4_ = (uint)((ulong)*(undefined8 *)((long)param_2 + 4) >> 0x20);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b638ce8 - 1 < 2 ||
         ((bRam000000010b638ce8 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
                              ), cVar13 != '\0')))))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
                           ), iVar14 != 0)) {
      pppppppbStack_1a8 =
           (byte *******)
           (
           ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
           + 0x30);
      pppppppbStack_a0 = (byte *******)&uStack_c0;
      pppppppbStack_98 = (byte *******)&DAT_10114d844;
      pppppppbStack_78 = (byte *******)&pppppppbStack_a0;
      pppppppbStack_80 = (byte *******)s_encoding_WINDOW_UPDATE__id__108ab96ce;
      pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
      pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_1b8 = (byte *******)&pppppppbStack_b0;
      pppppppbStack_1c0 = (byte *******)0x1;
      pppppppbStack_1b0 = (byte *******)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
                 ,&pppppppbStack_1c0);
      lVar16 = 
      ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_4b8 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
              + 0x20);
        pppppppbStack_4b0 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
              + 0x28);
        pppppppbStack_4c0 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_4c0);
        if (iVar14 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_4c0,&pppppppbStack_1c0);
        }
      }
    }
    else {
      lVar16 = 
      ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_4b8 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
              + 0x20);
        pppppppbStack_4b0 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
              + 0x28);
        pppppppbStack_4c0 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_4c0);
        if (iVar14 != 0) {
          pppppppbStack_1a8 =
               (byte *******)
               (
               ___ZN15rama_http_types5proto2h25frame13window_update12WindowUpdate6encode10__CALLSITE17h5b9873183f06c213E
               + 0x30);
          pppppppbStack_a0 = (byte *******)&uStack_c0;
          pppppppbStack_98 = (byte *******)&DAT_10114d844;
          pppppppbStack_78 = (byte *******)&pppppppbStack_a0;
          pppppppbStack_80 = (byte *******)s_encoding_WINDOW_UPDATE__id__108ab96ce;
          pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
          pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_1b8 = (byte *******)&pppppppbStack_b0;
          pppppppbStack_1c0 = (byte *******)0x1;
          pppppppbStack_1b0 = (byte *******)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_4c0,&pppppppbStack_1c0);
        }
      }
    }
    uVar5 = (uint)uStack_c0;
    lVar16 = *(long *)(param_1 + 0x108);
    if (2 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) {
      ppppppbVar15 = *pppppppbVar18;
      *(undefined1 *)((undefined2 *)((long)ppppppbVar15 + lVar16) + 1) = 4;
      *(undefined2 *)((long)ppppppbVar15 + lVar16) = 0;
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_1007f1094;
LAB_1007f1140:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 8;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_1007f10e0;
LAB_1007f1160:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
LAB_1007f1168:
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar16) < 4) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
        lVar16 = *(long *)(param_1 + 0x108);
        pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
        *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
        if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2c88;
      }
      else {
        *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
      }
      lVar3 = lVar16 + 4;
      *(long *)(param_1 + 0x108) = lVar3;
      uVar5 = (uStack_c0._4_4_ & 0xff00ff00) >> 8 | (uStack_c0._4_4_ & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((ulong)(*(long *)(param_1 + 0x110) - lVar3) < 4) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
        lVar16 = *(long *)(param_1 + 0x108);
        pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
        *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
        if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2c88;
        *(long *)(param_1 + 0x108) = lVar16 + 4;
      }
      else {
        *(uint *)((long)*pppppppbVar18 + lVar3) = uVar5;
        *(long *)(param_1 + 0x108) = lVar16 + 8;
      }
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b636570 - 1 < 2 ||
           ((bRam000000010b636570 != 0 &&
            (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
                                ), cVar13 != '\0')))) &&
          (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
                              ), iVar14 != 0)))) {
        pppppppbStack_1a8 =
             (byte *******)
             (
             ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
             + 0x30);
        pppppppbStack_b0 = (byte *******)0x0;
        if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
          pppppppbStack_b0 =
               (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
        }
        pppppppbStack_4c0 = (byte *******)&pppppppbStack_b0;
        pppppppbStack_4b8 =
             (byte *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppppbStack_98 = (byte *******)&pppppppbStack_4c0;
        pppppppbStack_a0 = (byte *******)s_encoded_window_update__rem___108ac7ac4;
        pppppppbStack_80 = (byte *******)&pppppppbStack_a0;
        pppppppbStack_78 = (byte *******)&UNK_10b208fd0;
        pppppppbStack_1b8 = (byte *******)&pppppppbStack_80;
        pppppppbStack_1c0 = (byte *******)0x1;
        pppppppbStack_1b0 = (byte *******)0x1;
        FUN_1007f3220(&pppppppbStack_1c0);
      }
      else {
        lVar16 = 
        ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_e8 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
                       + 0x20);
          uStack_e0 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
                       + 0x28);
          uStack_f0 = 5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar23 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar23 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_f0);
          if (iVar14 != 0) {
            pppppppbStack_1a8 =
                 (byte *******)
                 (
                 ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h91e132fcfe966eb1E
                 + 0x30);
            pppppppbStack_b0 = (byte *******)0x0;
            if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
              pppppppbStack_b0 =
                   (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
            }
            pppppppbStack_4c0 = (byte *******)&pppppppbStack_b0;
            pppppppbStack_4b8 =
                 (byte *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppbStack_98 = (byte *******)&pppppppbStack_4c0;
            pppppppbStack_a0 = (byte *******)s_encoded_window_update__rem___108ac7ac4;
            pppppppbStack_80 = (byte *******)&pppppppbStack_a0;
            pppppppbStack_78 = (byte *******)&UNK_10b208fd0;
            pppppppbStack_1b8 = (byte *******)&pppppppbStack_80;
            pppppppbStack_1c0 = (byte *******)0x1;
            pppppppbStack_1b0 = (byte *******)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar16,puVar23,puVar20,&uStack_f0,&pppppppbStack_1c0);
          }
        }
      }
      goto LAB_1007f25bc;
    }
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
    lVar16 = *(long *)(param_1 + 0x108);
    pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
    puVar1 = (undefined2 *)(*(long *)(param_1 + 0x100) + lVar16);
    *(undefined1 *)(puVar1 + 1) = 4;
    *puVar1 = 0;
    if (pppppppbVar19 < (byte *******)0x3) goto LAB_1007f2ca0;
    lVar16 = lVar16 + 3;
    *(long *)(param_1 + 0x108) = lVar16;
    if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f1140;
LAB_1007f1094:
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
    lVar16 = *(long *)(param_1 + 0x108);
    lVar3 = *(long *)(param_1 + 0x110);
    *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 8;
    if (lVar3 != lVar16) {
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f1160;
LAB_1007f10e0:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
      if (lVar3 == lVar16) goto LAB_1007f1a20;
      goto LAB_1007f1168;
    }
LAB_1007f1a20:
    pppppppbVar19 = (byte *******)0x0;
    pppppppbStack_1c0 = (byte *******)0x1;
  }
  else {
    uStack_c0._0_4_ = (uint)*(undefined8 *)((long)param_2 + 4);
    uStack_c0._4_4_ = (uint)((ulong)*(undefined8 *)((long)param_2 + 4) >> 0x20);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b638d18 - 1 < 2 ||
         ((bRam000000010b638d18 != 0 &&
          (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
                              ), cVar13 != '\0')))))) &&
       (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
                           ), iVar14 != 0)) {
      pppppppbStack_4a8 =
           (byte *******)
           (___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
           + 0x30);
      pppppppbStack_1c0 = (byte *******)&uStack_c0;
      pppppppbStack_1b8 = (byte *******)&DAT_10114d844;
      pppppppbStack_1a8 =
           (byte *******)
           &
           __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
      ;
      pppppppbStack_78 = (byte *******)&pppppppbStack_1c0;
      pppppppbStack_80 = (byte *******)s_encoding_RESET__id__code__108ac96ae;
      pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
      pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
      pppppppbStack_4b8 = (byte *******)&pppppppbStack_b0;
      pppppppbStack_4c0 = (byte *******)0x1;
      pppppppbStack_4b0 = (byte *******)0x1;
      pppppppbStack_1b0 = (byte *******)((ulong)&uStack_c0 | 4);
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
                 ,&pppppppbStack_4c0);
      lVar16 = 
      ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_98 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
              + 0x20);
        pppppppbStack_90 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
              + 0x28);
        pppppppbStack_a0 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_a0);
        if (iVar14 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
        }
      }
    }
    else {
      lVar16 = 
      ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppbStack_98 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
              + 0x20);
        pppppppbStack_90 =
             *(byte ********)
              (
              ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
              + 0x28);
        pppppppbStack_a0 = (byte *******)0x5;
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&pppppppbStack_a0);
        if (iVar14 != 0) {
          pppppppbStack_4a8 =
               (byte *******)
               (
               ___ZN15rama_http_types5proto2h25frame5reset5Reset6encode10__CALLSITE17h938f22cf0e0c9a59E
               + 0x30);
          pppppppbStack_1c0 = (byte *******)&uStack_c0;
          pppppppbStack_1b8 = (byte *******)&DAT_10114d844;
          pppppppbStack_1a8 =
               (byte *******)
               &
               __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
          ;
          pppppppbStack_78 = (byte *******)&pppppppbStack_1c0;
          pppppppbStack_80 = (byte *******)s_encoding_RESET__id__code__108ac96ae;
          pppppppbStack_b0 = (byte *******)&pppppppbStack_80;
          pppppppbStack_a8 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_4b8 = (byte *******)&pppppppbStack_b0;
          pppppppbStack_4c0 = (byte *******)0x1;
          pppppppbStack_4b0 = (byte *******)0x1;
          pppppppbStack_1b0 = (byte *******)((ulong)&uStack_c0 | 4);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar23,puVar20,&pppppppbStack_a0,&pppppppbStack_4c0);
        }
      }
    }
    uVar5 = (uint)uStack_c0;
    lVar16 = *(long *)(param_1 + 0x108);
    if (2 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) {
      ppppppbVar15 = *pppppppbVar18;
      *(undefined1 *)((undefined2 *)((long)ppppppbVar15 + lVar16) + 1) = 4;
      *(undefined2 *)((long)ppppppbVar15 + lVar16) = 0;
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f1a54;
LAB_1007f19a0:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
      lVar16 = *(long *)(param_1 + 0x108);
      lVar3 = *(long *)(param_1 + 0x110);
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 3;
      if (lVar3 != lVar16) {
        lVar16 = lVar16 + 1;
        *(long *)(param_1 + 0x108) = lVar16;
        if (*(long *)(param_1 + 0x110) != lVar16) goto LAB_1007f1a74;
        goto LAB_1007f19ec;
      }
      goto LAB_1007f1a20;
    }
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,3,1);
    lVar16 = *(long *)(param_1 + 0x108);
    pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
    puVar1 = (undefined2 *)(*(long *)(param_1 + 0x100) + lVar16);
    *(undefined1 *)(puVar1 + 1) = 4;
    *puVar1 = 0;
    if (pppppppbVar19 < (byte *******)0x3) {
LAB_1007f2ca0:
      pppppppbStack_1c0 = (byte *******)0x3;
    }
    else {
      lVar16 = lVar16 + 3;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) goto LAB_1007f19a0;
LAB_1007f1a54:
      *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 3;
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      if (*(long *)(param_1 + 0x110) == lVar16) {
LAB_1007f19ec:
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,1,1);
        lVar16 = *(long *)(param_1 + 0x108);
        lVar3 = *(long *)(param_1 + 0x110);
        *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar16) = 0;
        if (lVar3 == lVar16) goto LAB_1007f1a20;
      }
      else {
LAB_1007f1a74:
        *(undefined1 *)((long)*pppppppbVar18 + lVar16) = 0;
      }
      lVar16 = lVar16 + 1;
      *(long *)(param_1 + 0x108) = lVar16;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (3 < (ulong)(*(long *)(param_1 + 0x110) - lVar16)) {
        *(uint *)((long)*pppppppbVar18 + lVar16) = uVar5;
LAB_1007f1adc:
        lVar3 = lVar16 + 4;
        *(long *)(param_1 + 0x108) = lVar3;
        uVar5 = (uStack_c0._4_4_ & 0xff00ff00) >> 8 | (uStack_c0._4_4_ & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((ulong)(*(long *)(param_1 + 0x110) - lVar3) < 4) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
          lVar16 = *(long *)(param_1 + 0x108);
          pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
          *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
          if (pppppppbVar19 < (byte *******)0x4) goto LAB_1007f2c88;
          *(long *)(param_1 + 0x108) = lVar16 + 4;
        }
        else {
          *(uint *)((long)*pppppppbVar18 + lVar3) = uVar5;
          *(long *)(param_1 + 0x108) = lVar16 + 8;
        }
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b6365b8 - 1 < 2 ||
             ((bRam000000010b6365b8 != 0 &&
              (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
                                  ), cVar13 != '\0')))))) &&
           (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
                               ), iVar14 != 0)) {
          pppppppbStack_1a8 =
               (byte *******)
               (
               ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
               + 0x30);
          pppppppbStack_b0 = (byte *******)0x0;
          if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
            pppppppbStack_b0 =
                 (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
          }
          pppppppbStack_4c0 = (byte *******)&pppppppbStack_b0;
          pppppppbStack_4b8 =
               (byte *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppbStack_98 = (byte *******)&pppppppbStack_4c0;
          pppppppbStack_a0 = (byte *******)s_encoded_reset__rem___108ac7ae4;
          pppppppbStack_80 = (byte *******)&pppppppbStack_a0;
          pppppppbStack_78 = (byte *******)&UNK_10b208fd0;
          pppppppbStack_1b8 = (byte *******)&pppppppbStack_80;
          pppppppbStack_1c0 = (byte *******)0x1;
          pppppppbStack_1b0 = (byte *******)0x1;
          FUN_1007f35d4(&pppppppbStack_1c0);
        }
        else {
          lVar16 = 
          ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_d0 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
                         + 0x20);
            uStack_c8 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
                         + 0x28);
            uStack_d8 = 5;
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar23 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar23 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar20 + 0x18))(puVar23,&uStack_d8);
            if (iVar14 != 0) {
              pppppppbStack_1a8 =
                   (byte *******)
                   (
                   ___ZN14rama_http_core2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17hf149ed981230eebcE
                   + 0x30);
              pppppppbStack_b0 = (byte *******)0x0;
              if (*(ulong *)(param_1 + 0x120) <= *(ulong *)(param_1 + 0x108)) {
                pppppppbStack_b0 =
                     (byte *******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x120));
              }
              pppppppbStack_4c0 = (byte *******)&pppppppbStack_b0;
              pppppppbStack_4b8 =
                   (byte *******)
                   &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppppppbStack_98 = (byte *******)&pppppppbStack_4c0;
              pppppppbStack_a0 = (byte *******)s_encoded_reset__rem___108ac7ae4;
              pppppppbStack_80 = (byte *******)&pppppppbStack_a0;
              pppppppbStack_78 = (byte *******)&UNK_10b208fd0;
              pppppppbStack_1b8 = (byte *******)&pppppppbStack_80;
              pppppppbStack_1c0 = (byte *******)0x1;
              pppppppbStack_1b0 = (byte *******)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar23,puVar20,&uStack_d8,&pppppppbStack_1c0);
            }
          }
        }
        goto LAB_1007f25bc;
      }
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(pppppppbVar18,4,1);
      lVar16 = *(long *)(param_1 + 0x108);
      pppppppbVar19 = (byte *******)(*(long *)(param_1 + 0x110) - lVar16);
      *(uint *)(*(long *)(param_1 + 0x100) + lVar16) = uVar5;
      if ((byte *******)0x3 < pppppppbVar19) goto LAB_1007f1adc;
LAB_1007f2c88:
      pppppppbStack_1c0 = (byte *******)0x4;
    }
  }
LAB_1007f2d2c:
  pppppppbStack_1b8 = pppppppbVar19;
  __ZN5bytes13panic_advance17h894eeb3b0f978370E();
LAB_1007f2e68:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1007f2e6c);
  (*pcVar12)();
}

