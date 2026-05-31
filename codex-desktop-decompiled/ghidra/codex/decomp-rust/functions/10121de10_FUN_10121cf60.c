
/* WARNING: Type propagation algorithm not settling */

void FUN_10121cf60(long *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte bVar19;
  undefined8 *puVar20;
  uint uVar21;
  long *unaff_x19;
  undefined *puVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  undefined *puVar26;
  long *plVar27;
  ulong uVar28;
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined1 auVar29 [16];
  undefined1 extraout_q0_02 [16];
  undefined1 extraout_q0_03 [16];
  undefined1 extraout_q0_04 [16];
  undefined1 extraout_q0_05 [16];
  undefined1 extraout_q0_06 [16];
  undefined1 extraout_q0_07 [16];
  undefined1 extraout_q0_08 [16];
  undefined1 extraout_q0_09 [16];
  byte *pbStack_310;
  long *plStack_308;
  long *plStack_2d0;
  long *plStack_2b0;
  long lStack_290;
  long lStack_288;
  char *pcStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  undefined4 uStack_168;
  undefined3 uStack_164;
  long *plStack_160;
  byte *pbStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  long *plStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  ulong uStack_108;
  long *plStack_100;
  byte *pbStack_f8;
  long *aplStack_f0 [2];
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  byte *pbStack_90;
  
  if (*param_2 != '\x15') {
    lVar16 = FUN_108855c40(param_2,aplStack_f0,&UNK_10b213548);
    *param_1 = 2;
    param_1[1] = lVar16;
    return;
  }
  lStack_290 = *(long *)(param_2 + 0x10);
  lStack_288 = lStack_290 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_280 = (char *)0x0;
  puStack_278 = (undefined8 *)0x0;
  pbVar24 = &bStack_150;
  lStack_198 = 0;
  lStack_190 = 8;
  lStack_188 = 0;
  puVar17 = (undefined8 *)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&puStack_270,&lStack_290);
    pcVar6 = pcStack_280;
    puStack_1e0 = puVar17;
    plStack_1d8 = unaff_x19;
    if ((byte)puStack_270 == 0x18) break;
    uVar1 = *(undefined4 *)((long)((ulong)&puStack_270 | 1) + 3);
    uStack_168._0_3_ = (undefined3)*(undefined4 *)((ulong)&puStack_270 | 1);
    uStack_168._3_1_ = (undefined1)uVar1;
    uStack_164 = (undefined3)((uint)uVar1 >> 8);
    plStack_178 = plStack_258;
    puStack_180 = puStack_260;
    if ((byte)puStack_270 == 0x16) {
      if (puVar17 != (undefined8 *)0x8000000000000002) {
        uStack_e0 = (undefined8 *)&UNK_108cadf95;
        plStack_d8 = (long *)0x5;
        puStack_270 = &uStack_e0;
        plStack_268 = (long *)&DAT_100c7b3a0;
        bVar13 = true;
        lVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_270);
        *param_1 = 2;
        param_1[1] = lVar16;
        goto LAB_10121dc30;
      }
      pcStack_280 = (char *)0x0;
      if (pcVar6 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_10121de50;
      }
      cVar2 = *pcVar6;
      puVar17 = (undefined8 *)0x8000000000000001;
      if (cVar2 != '\x10') {
        if (cVar2 == '\x11') {
          FUN_1004de164(&puStack_270,*(undefined8 *)(pcVar6 + 8));
        }
        else {
          if (cVar2 == '\x12') goto LAB_10121d158;
          FUN_1004de164(&puStack_270);
        }
        if (puStack_270 == (undefined8 *)0x8000000000000000) {
          *param_1 = 2;
          param_1[1] = (long)plStack_268;
          bVar13 = true;
          goto LAB_10121dc30;
        }
        plStack_d8 = plStack_258;
        uStack_e0 = puStack_260;
        plStack_c8 = plStack_248;
        plStack_d0 = uStack_250;
        plStack_b8 = plStack_238;
        plStack_c0 = plStack_240;
        puStack_b0 = puStack_230;
        puVar17 = puStack_270;
        unaff_x19 = plStack_268;
      }
LAB_10121d158:
      puStack_1d0 = uStack_e0;
      plStack_1c8 = plStack_d8;
      plStack_1b8 = plStack_c8;
      plStack_1c0 = plStack_d0;
      plStack_1a8 = plStack_b8;
      plStack_1b0 = plStack_c0;
      puStack_1a0 = puStack_b0;
    }
    else {
      if ((byte)puStack_270 == 0x17) {
        bVar13 = puVar17 == (undefined8 *)0x8000000000000002;
        if (bVar13) {
          puStack_270 = (undefined8 *)0x8000000000000001;
        }
        else {
          plStack_248 = plStack_1b8;
          uStack_250 = plStack_1c0;
          plStack_238 = plStack_1a8;
          plStack_240 = plStack_1b0;
          puStack_230 = puStack_1a0;
          plStack_258 = plStack_1c8;
          puStack_260 = puStack_1d0;
          puStack_270 = puVar17;
          plStack_268 = unaff_x19;
        }
        lVar16 = lStack_190 + lStack_188 * 0x40;
        lStack_130 = lStack_190;
        bStack_150 = 0x16;
        puStack_120 = &UNK_10b2366c0;
        uStack_118 = 4;
        uStack_108 = 0;
        lStack_128 = lVar16;
        if (lStack_188 == 0) {
          puVar26 = (undefined *)0x8000000000000001;
          uStack_108._0_4_ = 0;
          uVar21 = (uint)uStack_108;
          goto LAB_10121dabc;
        }
        bVar5 = false;
        puVar20 = (undefined8 *)((ulong)&bStack_150 | 1);
        puVar17 = (undefined8 *)((ulong)&uStack_e0 | 1);
        puVar18 = (undefined8 *)((ulong)&uStack_a0 | 1);
        lVar25 = 2;
        pbVar24 = &UNK_10b2366c0;
        plStack_2b0 = (long *)0x7ff8000000000000;
        plStack_2d0 = (long *)0x7ff8000000000000;
        puVar26 = (undefined *)0x8000000000000001;
        lVar23 = lStack_190;
        lVar14 = lStack_130;
        goto LAB_10121d278;
      }
      *(undefined4 *)((ulong)pbVar24 | 1) = uStack_168;
      *(undefined4 *)((long)((ulong)pbVar24 | 1) + 3) = uVar1;
      plStack_138 = plStack_258;
      puStack_140 = puStack_260;
      bStack_150 = (byte)puStack_270;
      plStack_148 = plStack_268;
      pcStack_280 = (char *)0x0;
      if (pcVar6 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_10121de50:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10121de54);
        (*pcVar12)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&uStack_e0);
      lVar16 = lStack_188;
      if ((byte)uStack_e0 == '\x16') {
        *param_1 = 2;
        param_1[1] = (long)plStack_d8;
        bVar13 = true;
        FUN_100e077ec(&bStack_150);
        goto LAB_10121dc30;
      }
      uStack_250 = (long *)CONCAT44(*(undefined4 *)((long)((ulong)&uStack_e0 | 1) + 3),
                                    *(int *)((ulong)&uStack_e0 | 1) << 8);
      plStack_248 = plStack_d8;
      plStack_240 = plStack_d0;
      plStack_238 = plStack_c8;
      puStack_270 = (undefined8 *)CONCAT71(uStack_14f,bStack_150);
      plStack_258 = plStack_138;
      puStack_260 = puStack_140;
      plStack_268 = plStack_148;
      uStack_250 = (long *)CONCAT71(uStack_250._1_7_,(byte)uStack_e0);
      if (lStack_188 == lStack_198) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_198);
      }
      puVar18 = (undefined8 *)(lStack_190 + lVar16 * 0x40);
      puVar18[1] = plStack_268;
      *puVar18 = puStack_270;
      puVar18[3] = plStack_258;
      puVar18[2] = puStack_260;
      puVar18[5] = plStack_248;
      puVar18[4] = uStack_250;
      puVar18[7] = plStack_238;
      puVar18[6] = plStack_240;
      lStack_188 = lVar16 + 1;
    }
  }
  *param_1 = 2;
  param_1[1] = (long)plStack_268;
  bVar13 = true;
  goto LAB_10121dc30;
LAB_10121d278:
  lStack_130 = lVar14;
  __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E(&uStack_e0,lVar23,&UNK_10b2366c0,4)
  ;
  bVar19 = (byte)uStack_e0;
  plVar10 = plStack_308;
  lVar11 = lVar16;
  lVar14 = lStack_130;
  if ((byte)uStack_e0 == 0x16) goto joined_r0x00010121d5e8;
  lStack_130 = lVar23 + 0x40;
  if (bStack_150 != 0x16) {
    FUN_100e077ec(&bStack_150);
  }
  plVar9 = plStack_d0;
  plVar15 = plStack_d8;
  plStack_148 = plStack_b8;
  bStack_150 = (byte)plStack_c0;
  uStack_14f = (undefined7)((ulong)plStack_c0 >> 8);
  plStack_138 = plStack_a8;
  puStack_140 = puStack_b0;
  if (bVar19 < 0xd) {
    if (bVar19 == 1) {
      bVar19 = uStack_e0._1_1_;
      if (3 < uStack_e0._1_1_) {
        bVar19 = 4;
      }
LAB_10121d550:
      uStack_a0._1_7_ = CONCAT61(uStack_a0._2_6_,bVar19);
      uStack_a0 = (undefined *)((ulong)uStack_a0._1_7_ << 8);
      goto LAB_10121d554;
    }
    if (bVar19 == 4) {
      if ((long *)0x3 < plStack_d8) {
        plVar15 = (long *)0x4;
      }
      bVar19 = (byte)plVar15;
      goto LAB_10121d550;
    }
    if (bVar19 == 0xc) {
      plVar27 = plStack_c0;
      if ((long)plStack_c8 < 8) {
        if (plStack_c8 == (long *)0x5) {
          if ((int)*plStack_d0 == 0x61746f74 && *(char *)((long)plStack_d0 + 4) == 'l') {
            uStack_a0 = (undefined *)CONCAT62(uStack_a0._2_6_,0x200);
          }
          else {
LAB_10121d4e8:
            uStack_a0 = (undefined *)CONCAT62(uStack_a0._2_6_,0x400);
          }
        }
        else {
          if ((plStack_c8 != (long *)0x7) ||
             ((int)*plStack_d0 != 0x7373656d || *(int *)((long)plStack_d0 + 3) != 0x65676173))
          goto LAB_10121d4e8;
          uStack_a0 = (undefined *)CONCAT62(uStack_a0._2_6_,0x300);
        }
      }
      else if (plStack_c8 == (long *)0x8) {
        if (*plStack_d0 != 0x73736572676f7270) goto LAB_10121d4e8;
        uStack_a0 = (undefined *)CONCAT62(uStack_a0._2_6_,0x100);
      }
      else {
        if ((plStack_c8 != (long *)0xd) ||
           (*plStack_d0 != 0x73736572676f7270 ||
            *(long *)((long)plStack_d0 + 5) != 0x6e656b6f54737365)) goto LAB_10121d4e8;
        uStack_a0 = (undefined *)((ulong)uStack_a0._2_6_ << 0x10);
      }
joined_r0x00010121d8cc:
      if (plVar15 != (long *)0x0) {
        auVar29 = _free(plVar9);
        plVar27 = auVar29._0_8_;
      }
    }
    else {
LAB_10121da1c:
      plStack_98 = (long *)FUN_108855b04(&uStack_e0,aplStack_f0,&UNK_10b20e860);
      plVar27 = extraout_q0._0_8_;
      uStack_a0 = (undefined *)CONCAT71(uStack_a0._1_7_,1);
    }
  }
  else {
    if (bVar19 == 0xd) {
      if ((long)plStack_d0 < 8) {
        if (plStack_d0 == (long *)0x5) {
          if ((int)*plStack_d8 == 0x61746f74 && *(char *)((long)plStack_d8 + 4) == 'l') {
            bVar19 = 2;
          }
          else {
LAB_10121d548:
            bVar19 = 4;
          }
        }
        else {
          if ((plStack_d0 != (long *)0x7) ||
             ((int)*plStack_d8 != 0x7373656d || *(int *)((long)plStack_d8 + 3) != 0x65676173))
          goto LAB_10121d548;
          bVar19 = 3;
        }
      }
      else if (plStack_d0 == (long *)0x8) {
        if (*plStack_d8 != 0x73736572676f7270) goto LAB_10121d548;
        bVar19 = 1;
      }
      else {
        if ((plStack_d0 != (long *)0xd) ||
           (*plStack_d8 != 0x73736572676f7270 ||
            *(long *)((long)plStack_d8 + 5) != 0x6e656b6f54737365)) goto LAB_10121d548;
        bVar19 = 0;
      }
      goto LAB_10121d550;
    }
    if (bVar19 == 0xe) {
      auVar29 = FUN_100a5a724(&uStack_a0,plStack_d0);
      plVar27 = auVar29._0_8_;
      goto joined_r0x00010121d8cc;
    }
    if (bVar19 != 0xf) goto LAB_10121da1c;
    FUN_100a5a724(&uStack_a0,plStack_d8,plStack_d0);
LAB_10121d554:
    auVar29 = FUN_100e077ec(&uStack_e0);
    plVar27 = auVar29._0_8_;
  }
  plVar9 = plStack_98;
  puVar22 = uStack_a0;
  puVar4 = uStack_e0;
  bVar19 = bStack_150;
  plVar15 = plStack_98;
  if (((ulong)uStack_a0 & 1) == 0) {
    if (1 < uStack_a0._1_1_) {
      if (uStack_a0._1_1_ == 2) {
        if (lVar25 != 2) {
          uStack_a0 = &UNK_108ca3984;
          plStack_98 = (long *)0x5;
          uStack_e0 = &uStack_a0;
          plStack_d8 = (long *)&DAT_100c7b3a0;
          plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
          plVar27 = extraout_q0_05._0_8_;
          goto LAB_10121dd44;
        }
        bStack_150 = 0x16;
        if (bVar19 == 0x16) goto LAB_10121dd84;
        uVar3 = *puVar20;
        puVar18[1] = puVar20[1];
        *puVar18 = uVar3;
        auVar29 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
        *(long *)((long)puVar18 + 0x17) = auVar29._8_8_;
        *(long *)((long)puVar18 + 0xf) = auVar29._0_8_;
        uStack_a0 = (undefined *)CONCAT71(uStack_a0._1_7_,bVar19);
        puVar8 = uStack_a0;
        if (bVar19 == 0x10) {
LAB_10121d6e4:
          FUN_100e077ec(&uStack_a0);
          lVar25 = 0;
          lVar11 = lStack_130;
          lVar14 = lStack_130;
        }
        else {
          if (bVar19 == 0x11) {
            puVar4 = (undefined8 *)*plStack_98;
            plStack_d8 = (long *)plStack_98[1];
            plStack_c8 = SUB168(*(undefined1 (*) [16])(plStack_98 + 2),8);
            plStack_d0 = SUB168(*(undefined1 (*) [16])(plStack_98 + 2),0);
            uStack_e0._0_1_ = (byte)puVar4;
            uStack_e0._1_1_ = (byte)((ulong)puVar4 >> 8);
            uStack_e0._2_2_ = (ushort)((ulong)puVar4 >> 0x10);
            uStack_e0._4_4_ = (float)((ulong)puVar4 >> 0x20);
            uStack_e0 = puVar4;
            switch((byte)uStack_e0) {
            case 1:
              plStack_2d0 = (long *)NEON_ucvtf((ulong)uStack_e0._1_1_);
              break;
            case 2:
              plStack_2d0 = (long *)NEON_ucvtf((ulong)uStack_e0._2_2_);
              break;
            case 3:
              plStack_2d0 = (long *)NEON_ucvtf((ulong)(uint)uStack_e0._4_4_);
              break;
            case 4:
              plStack_2d0 = (long *)NEON_ucvtf(plStack_d8);
              break;
            case 5:
              plStack_2d0 = (long *)(double)uStack_e0._1_1_;
              break;
            case 6:
              plStack_2d0 = (long *)(double)(long)(int)(short)uStack_e0._2_2_;
              break;
            case 7:
              plStack_2d0 = (long *)(double)(long)(int)uStack_e0._4_4_;
              break;
            case 8:
              plStack_2d0 = (long *)(double)(long)plStack_d8;
              break;
            case 9:
              uVar28 = 0x3ff0000000000000;
              if (0x7fffffff < (uint)uStack_e0._4_4_) {
                uVar28 = 0xbff0000000000000;
              }
              plStack_2d0 = (long *)(uVar28 ^ (uVar28 ^ (ulong)(double)uStack_e0._4_4_) &
                                              0x7ff8000000000000);
              break;
            case 10:
              plStack_2d0 = plStack_d8;
              break;
            default:
              plVar15 = (long *)FUN_108855b04(&uStack_e0,aplStack_f0,&UNK_10b21c390);
              auVar29 = _free(plVar9);
              plVar27 = auVar29._0_8_;
              goto LAB_10121dd44;
            }
            FUN_100e077ec(&uStack_e0);
            _free(plVar9);
          }
          else {
            if (bVar19 == 0x12) goto LAB_10121d6e4;
            uStack_a0._2_2_ = SUB82(puVar22,2);
            uStack_a0._4_4_ = SUB84(puVar22,4);
            uStack_a0 = puVar8;
            switch(bVar19) {
            case 1:
              plStack_2d0 = (long *)NEON_ucvtf(2);
              break;
            case 2:
              plStack_2d0 = (long *)NEON_ucvtf((ulong)uStack_a0._2_2_);
              break;
            case 3:
              plStack_2d0 = (long *)NEON_ucvtf((ulong)(uint)uStack_a0._4_4_);
              break;
            case 4:
              plStack_2d0 = (long *)NEON_ucvtf(plStack_98);
              break;
            case 5:
              plStack_2d0 = (long *)0x4000000000000000;
              break;
            case 6:
              plStack_2d0 = (long *)(double)(long)(int)(short)uStack_a0._2_2_;
              break;
            case 7:
              plStack_2d0 = (long *)(double)(long)(int)uStack_a0._4_4_;
              break;
            case 8:
              plStack_2d0 = (long *)(double)(long)plStack_98;
              break;
            case 9:
              uVar28 = 0x3ff0000000000000;
              if (0x7fffffff < (uint)uStack_a0._4_4_) {
                uVar28 = 0xbff0000000000000;
              }
              plStack_2d0 = (long *)(uVar28 ^ (uVar28 ^ (ulong)(double)uStack_a0._4_4_) &
                                              0x7ff8000000000000);
              break;
            case 10:
              plStack_2d0 = plStack_98;
              break;
            default:
              plVar15 = (long *)FUN_108855b04(&uStack_a0,aplStack_f0,&UNK_10b21c390);
              plVar27 = extraout_q0_09._0_8_;
              goto LAB_10121dd44;
            }
            FUN_100e077ec(&uStack_a0);
          }
          lVar25 = 1;
          lVar11 = lStack_130;
          lVar14 = lStack_130;
        }
      }
      else {
        if (uStack_a0._1_1_ == 3) {
          if (puVar26 != (undefined *)0x8000000000000001) {
            uStack_a0 = &UNK_108ca1064;
            plStack_98 = (long *)0x7;
            uStack_e0 = &uStack_a0;
            plStack_d8 = (long *)&DAT_100c7b3a0;
            plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
            plStack_2b0 = extraout_q0_06._0_8_;
            puVar22 = (undefined *)0x1;
            goto joined_r0x00010121df38;
          }
          bStack_150 = 0x16;
          if (bVar19 == 0x16) {
            plVar15 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
            plVar9 = extraout_q0_03._0_8_;
          }
          else {
            uVar3 = *puVar20;
            puVar17[1] = puVar20[1];
            *puVar17 = uVar3;
            auVar29 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
            *(long *)((long)puVar17 + 0x17) = auVar29._8_8_;
            *(long *)((long)puVar17 + 0xf) = auVar29._0_8_;
            uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar19);
            auVar29 = FUN_1004b60cc(&uStack_a0,&uStack_e0);
            plVar15 = plStack_98;
            plVar9 = auVar29._0_8_;
            plVar10 = plStack_98;
            pbStack_310 = pbStack_90;
            lVar11 = lStack_130;
            lVar14 = lStack_130;
            puVar26 = uStack_a0;
            if (uStack_a0 != (undefined *)0x8000000000000001) goto joined_r0x00010121d5e8;
          }
          plStack_2b0 = plVar9;
          puVar22 = (undefined *)0x1;
          pbStack_310 = pbVar24;
          goto LAB_10121db14;
        }
        bStack_150 = 0x16;
        if (bVar19 == 0x16) goto LAB_10121dd84;
        uVar3 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar3;
        auVar29 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
        *(long *)((long)puVar17 + 0x17) = auVar29._8_8_;
        *(long *)((long)puVar17 + 0xf) = auVar29._0_8_;
        uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar19);
        FUN_100e077ec(&uStack_e0);
        lVar11 = lStack_130;
        lVar14 = lStack_130;
      }
joined_r0x00010121d5e8:
      lStack_130 = lVar11;
      plStack_308 = plVar10;
      plVar15 = plStack_2d0;
      lVar23 = lVar23 + 0x40;
      plStack_2d0 = plVar15;
      if (lVar23 == lVar16) goto LAB_10121da44;
      goto LAB_10121d278;
    }
    if (uStack_a0._1_1_ == 0) {
      if (uStack_108 != 0) {
        uStack_a0 = &UNK_108cb4e99;
        plStack_98 = (long *)0xd;
        uStack_e0 = &uStack_a0;
        plStack_d8 = (long *)&DAT_100c7b3a0;
        plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
        plVar27 = extraout_q0_07._0_8_;
        goto LAB_10121dd44;
      }
      bStack_150 = 0x16;
      if (bVar19 == 0x16) {
LAB_10121dd84:
        bStack_150 = 0x16;
        puVar22 = (undefined *)0x1;
        plVar15 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
        plStack_2b0 = extraout_q0_02._0_8_;
        goto LAB_10121daf8;
      }
      uVar3 = *puVar20;
      puVar17[1] = puVar20[1];
      *puVar17 = uVar3;
      auVar29 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
      *(long *)((long)puVar17 + 0x17) = auVar29._8_8_;
      *(long *)((long)puVar17 + 0xf) = auVar29._0_8_;
      uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar19);
      auVar29 = FUN_1011b82d4(&uStack_a0,&uStack_e0);
      pbStack_f8 = pbStack_90;
      plVar15 = plStack_98;
      plVar27 = auVar29._0_8_;
      if ((int)uStack_a0 != 1) {
        if ((uStack_108 != 0) && (plStack_100 != (long *)0x0)) {
          lVar14 = *plStack_100;
          *plStack_100 = lVar14 + -1;
          LORelease();
          if (lVar14 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_100);
          }
        }
        uStack_108 = 1;
        lVar11 = lStack_130;
        lVar14 = lStack_130;
        plStack_100 = plVar15;
        goto joined_r0x00010121d5e8;
      }
    }
    else {
      if (!bVar5) {
        bStack_150 = 0x16;
        if (bVar19 == 0x16) goto LAB_10121dd84;
        uVar3 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar3;
        auVar29 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
        *(long *)((long)puVar17 + 0x17) = auVar29._8_8_;
        *(long *)((long)puVar17 + 0xf) = auVar29._0_8_;
        uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar19);
        puVar7 = uStack_e0;
        uStack_e0._1_1_ = SUB81(puVar4,1);
        uStack_e0._2_2_ = SUB82(puVar4,2);
        uStack_e0._4_4_ = SUB84(puVar4,4);
        uStack_e0 = puVar7;
        switch(bVar19) {
        case 1:
          plStack_2b0 = (long *)NEON_ucvtf((ulong)uStack_e0._1_1_);
          break;
        case 2:
          plStack_2b0 = (long *)NEON_ucvtf((ulong)uStack_e0._2_2_);
          break;
        case 3:
          plStack_2b0 = (long *)NEON_ucvtf((ulong)(uint)uStack_e0._4_4_);
          break;
        case 4:
          plStack_2b0 = (long *)NEON_ucvtf(plStack_d8);
          break;
        case 5:
          plStack_2b0 = (long *)(double)uStack_e0._1_1_;
          break;
        case 6:
          plStack_2b0 = (long *)(double)(long)(int)(short)uStack_e0._2_2_;
          break;
        case 7:
          plStack_2b0 = (long *)(double)(long)(int)uStack_e0._4_4_;
          break;
        case 8:
          plStack_2b0 = (long *)(double)(long)plStack_d8;
          break;
        case 9:
          uVar28 = 0x3ff0000000000000;
          if (0x7fffffff < (uint)uStack_e0._4_4_) {
            uVar28 = 0xbff0000000000000;
          }
          plStack_2b0 = (long *)(uVar28 ^ (uVar28 ^ (ulong)(double)uStack_e0._4_4_) &
                                          0x7ff8000000000000);
          break;
        case 10:
          plStack_2b0 = plStack_d8;
          break;
        default:
          plVar15 = (long *)FUN_108855b04(&uStack_e0,aplStack_f0,&UNK_10b21c390);
          plVar27 = extraout_q0_08._0_8_;
          goto LAB_10121dd44;
        }
        FUN_100e077ec(&uStack_e0);
        bVar5 = true;
        lVar11 = lStack_130;
        lVar14 = lStack_130;
        goto joined_r0x00010121d5e8;
      }
      uStack_a0 = &UNK_108c983b8;
      plStack_98 = (long *)0x8;
      uStack_e0 = &uStack_a0;
      plStack_d8 = (long *)&DAT_100c7b3a0;
      plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
      plVar27 = extraout_q0_04._0_8_;
    }
  }
LAB_10121dd44:
  plStack_2b0 = plVar27;
  puVar22 = (undefined *)0x1;
  goto LAB_10121daf8;
LAB_10121da44:
  uVar21 = (uint)uStack_108;
  if ((uStack_108 & 1) == 0) {
LAB_10121dabc:
    uStack_a0 = &UNK_108cb4e99;
    plStack_98 = (long *)0xd;
    uStack_e0 = &uStack_a0;
    plStack_d8 = (long *)&DAT_100c7b3a0;
    plVar15 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
    plStack_2b0 = extraout_q0_00._0_8_;
LAB_10121daf4:
    puVar22 = (undefined *)(ulong)(uVar21 ^ 1);
LAB_10121daf8:
    pbStack_310 = pbVar24;
    if (puVar26 != (undefined *)0x8000000000000001) {
joined_r0x00010121df38:
      pbStack_310 = pbVar24;
      if (((ulong)puVar26 & 0x7fffffffffffffff) != 0) {
        auVar29 = _free(plStack_308);
        plStack_2b0 = auVar29._0_8_;
      }
    }
LAB_10121db14:
    if ((((int)puVar22 != 0) && ((uStack_108 & 1) != 0)) && (plStack_100 != (long *)0x0)) {
      lVar16 = *plStack_100;
      *plStack_100 = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        auVar29 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_100);
        plStack_2b0 = auVar29._0_8_;
      }
    }
    if (bStack_150 != 0x16) {
      lVar16 = 2;
      goto LAB_10121dbcc;
    }
  }
  else {
    pbVar24 = &UNK_10b2366c0;
    aplStack_f0[0] = plStack_100;
    if (!bVar5) {
      uStack_a0 = &UNK_108c983b8;
      plStack_98 = (long *)0x8;
      uStack_e0 = &uStack_a0;
      plStack_d8 = (long *)&DAT_100c7b3a0;
      plVar15 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
      plStack_2b0 = extraout_q0_01._0_8_;
      if (aplStack_f0[0] != (long *)0x0) {
        lVar16 = *aplStack_f0[0];
        *aplStack_f0[0] = lVar16 + -1;
        LORelease();
        if (lVar16 == 1) {
          DataMemoryBarrier(2,1);
          auVar29 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(aplStack_f0);
          plStack_2b0 = auVar29._0_8_;
        }
      }
      goto LAB_10121daf4;
    }
    lVar16 = 0;
    if (lVar25 != 2) {
      lVar16 = lVar25;
    }
    puVar22 = (undefined *)0x8000000000000000;
    if (puVar26 != (undefined *)0x8000000000000001) {
      puVar22 = puVar26;
    }
    plStack_160 = plStack_100;
    pbStack_158 = pbStack_f8;
    if (bStack_150 == 0x16) goto LAB_10121dca0;
LAB_10121dbcc:
    FUN_100e077ec(&bStack_150);
    if (lVar16 != 2) {
LAB_10121dca0:
      param_1[6] = (long)pbStack_158;
      param_1[5] = (long)plStack_160;
      param_1[0xd] = (long)plStack_248;
      param_1[0xc] = (long)uStack_250;
      param_1[0xf] = (long)plStack_238;
      param_1[0xe] = (long)plStack_240;
      param_1[0x10] = (long)puStack_230;
      param_1[9] = (long)plStack_268;
      param_1[8] = (long)puStack_270;
      param_1[0xb] = (long)plStack_258;
      param_1[10] = (long)puStack_260;
      *param_1 = lVar16;
      param_1[1] = (long)plVar15;
      param_1[2] = (long)puVar22;
      param_1[3] = (long)plStack_308;
      param_1[4] = (long)pbStack_310;
      param_1[7] = (long)plStack_2b0;
      FUN_100d5c778(&lStack_198);
      if (lVar16 == 2) {
        return;
      }
      lStack_210 = param_1[0xc];
      lStack_208 = param_1[0xd];
      lStack_1f8 = param_1[0xf];
      lStack_200 = param_1[0xe];
      lStack_1f0 = param_1[0x10];
      uStack_250 = (long *)param_1[4];
      plStack_248 = (long *)param_1[5];
      plStack_238 = (long *)param_1[7];
      plStack_240 = (long *)param_1[6];
      lStack_228 = param_1[9];
      puStack_230 = (undefined8 *)param_1[8];
      lStack_220 = param_1[10];
      lStack_218 = param_1[0xb];
      plStack_268 = (long *)param_1[1];
      puStack_270 = (undefined8 *)*param_1;
      plStack_258 = SUB168(*(undefined1 (*) [16])(param_1 + 2),8);
      puStack_260 = SUB168(*(undefined1 (*) [16])(param_1 + 2),0);
      if (lStack_288 - lStack_290 == 0) {
        return;
      }
      puStack_1e0 = puStack_278;
      lVar16 = FUN_1087e422c((long)puStack_278 + ((ulong)(lStack_288 - lStack_290) >> 6),
                             &puStack_1e0,&UNK_10b23a190);
      *param_1 = 2;
      param_1[1] = lVar16;
      FUN_100c98688(&puStack_270);
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = (long)plVar15;
  if ((puStack_270 != (undefined8 *)0x8000000000000001) &&
     (puStack_270 != (undefined8 *)0x8000000000000000)) {
    if ((uStack_250 != (long *)0x0) && ((long)uStack_250 * 9 != -0x11)) {
      _free(plStack_258 + (-1 - (long)uStack_250));
    }
    func_0x000100cd7284(&puStack_270);
  }
LAB_10121dc30:
  FUN_100d5c778(&lStack_198);
  bVar13 = (bool)(bVar13 ^ 1);
  if (puStack_1e0 == (undefined8 *)0x8000000000000002) {
    bVar13 = true;
  }
  if (((!bVar13) && (puStack_1e0 != (undefined8 *)0x8000000000000001)) &&
     (puStack_1e0 != (undefined8 *)0x8000000000000000)) {
    if ((plStack_1c0 != (long *)0x0) && ((long)plStack_1c0 * 9 != -0x11)) {
      _free(plStack_1c8 + (-1 - (long)plStack_1c0));
    }
    func_0x000100cd7284(&puStack_1e0);
  }
  return;
}

