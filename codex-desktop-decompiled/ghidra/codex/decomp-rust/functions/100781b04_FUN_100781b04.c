
/* WARNING: Removing unreachable block (ram,0x0001007835d0) */
/* WARNING: Removing unreachable block (ram,0x0001007835b8) */
/* WARNING: Removing unreachable block (ram,0x0001007835a4) */
/* WARNING: Removing unreachable block (ram,0x000100783584) */
/* WARNING: Removing unreachable block (ram,0x000100783570) */
/* WARNING: Removing unreachable block (ram,0x000100783564) */
/* WARNING: Removing unreachable block (ram,0x000100783578) */
/* WARNING: Removing unreachable block (ram,0x000100783590) */
/* WARNING: Removing unreachable block (ram,0x0001007835b0) */
/* WARNING: Removing unreachable block (ram,0x0001007835c4) */
/* WARNING: Removing unreachable block (ram,0x0001007835dc) */
/* WARNING: Removing unreachable block (ram,0x000100783c9c) */
/* WARNING: Removing unreachable block (ram,0x000100783ca0) */
/* WARNING: Removing unreachable block (ram,0x000100783cc0) */
/* WARNING: Removing unreachable block (ram,0x000100783cc4) */
/* WARNING: Removing unreachable block (ram,0x000100783ce0) */
/* WARNING: Removing unreachable block (ram,0x000100783ce4) */
/* WARNING: Removing unreachable block (ram,0x000100783cfc) */
/* WARNING: Removing unreachable block (ram,0x000100783d00) */

void FUN_100781b04(long *param_1,char *param_2,long param_3,long param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  char *pcVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  long lVar24;
  long in_x11;
  long extraout_x11;
  long lVar25;
  long extraout_x11_00;
  long in_x14;
  long in_x15;
  long in_x17;
  long unaff_x21;
  byte bVar26;
  long unaff_x23;
  byte *pbVar27;
  long unaff_x26;
  long lVar28;
  long unaff_x27;
  char *pcVar29;
  long unaff_x30;
  long lStack_198;
  long lStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined6 uStack_a7;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined6 uStack_9f;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined6 uStack_97;
  undefined1 uStack_91;
  long lStack_90;
  char *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  
  if (*param_2 == '\x14') {
    pcVar29 = *(char **)(param_2 + 0x10);
    lVar21 = *(long *)(param_2 + 0x18);
    pcStack_80 = pcVar29 + lVar21 * 0x20;
    lStack_78 = 0;
    if (lVar21 == 0) {
LAB_1007838f0:
      uVar20 = 0;
LAB_100783908:
      thunk_FUN_1087e427c(&lStack_190,uVar20,&UNK_10b22ee48,&UNK_10b20a590);
LAB_10078390c:
      param_1[6] = CONCAT71(uStack_167,uStack_168);
      param_1[5] = CONCAT71(uStack_16f,uStack_170);
      param_1[8] = CONCAT71(uStack_157,uStack_158);
      param_1[7] = CONCAT71(uStack_15f,uStack_160);
      param_1[10] = CONCAT71(uStack_147,uStack_148);
      param_1[9] = CONCAT71(uStack_14f,uStack_150);
      param_1[0xb] = lStack_140;
      param_1[2] = CONCAT71(uStack_187,bStack_188);
      param_1[1] = lStack_190;
      param_1[4] = CONCAT71(uStack_177,uStack_178);
      param_1[3] = CONCAT71(uStack_17f,uStack_180);
      *param_1 = 2;
      return;
    }
    pcVar18 = pcVar29 + 0x20;
    cVar2 = *pcVar29;
    pcStack_88 = pcVar18;
    if (cVar2 == '\x10') {
LAB_100781bf0:
      bVar26 = 2;
    }
    else {
      if (cVar2 == '\x11') {
        pcVar23 = *(char **)(pcVar29 + 8);
        if (*pcVar23 == '\0') {
          bVar26 = pcVar23[1];
          goto LAB_1007838dc;
        }
LAB_1007843d8:
        thunk_FUN_108855bf0(&lStack_190,pcVar23,&lStack_198,&UNK_10b20a560);
        lVar24 = lStack_190;
        bVar26 = bStack_188;
        if (lStack_190 != 2) {
          uStack_b8 = (undefined1)uStack_15f;
          uStack_b7 = (undefined7)(CONCAT17(uStack_158,uStack_15f) >> 8);
          uStack_c0 = (undefined1)uStack_167;
          uStack_bf = (undefined7)(CONCAT17(uStack_160,uStack_167) >> 8);
          uStack_a8 = (undefined1)uStack_14f;
          uStack_a7 = (undefined6)((uint7)uStack_14f >> 8);
          uStack_b0 = (undefined1)uStack_157;
          uStack_af = (undefined7)(CONCAT17(uStack_150,uStack_157) >> 8);
          uStack_99 = (undefined1)lStack_140;
          uStack_98 = (undefined1)((ulong)lStack_140 >> 8);
          uStack_97 = (undefined6)((ulong)lStack_140 >> 0x10);
          uStack_a1 = uStack_148;
          uStack_a0 = (undefined1)uStack_147;
          uStack_9f = (undefined6)((uint7)uStack_147 >> 8);
          lStack_e0 = CONCAT17(uStack_180,uStack_187);
          bStack_d8 = (byte)uStack_17f;
          uStack_d7 = (undefined7)(CONCAT17(uStack_178,uStack_17f) >> 8);
          uStack_c8 = (undefined1)uStack_16f;
          uStack_c7 = (undefined7)(CONCAT17(uStack_168,uStack_16f) >> 8);
          uStack_d0 = (undefined1)uStack_177;
          uStack_cf = (undefined7)(CONCAT17(uStack_170,uStack_177) >> 8);
        }
      }
      else {
        if (cVar2 == '\x12') goto LAB_100781bf0;
        pcVar23 = pcVar29;
        if (cVar2 != '\0') goto LAB_1007843d8;
        bVar26 = pcVar29[1];
LAB_1007838dc:
        lVar24 = 2;
      }
      if (lVar24 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_c7,uStack_c8);
        *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_cf,uStack_d0);
        *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_b7,uStack_b8);
        *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_bf,uStack_c0);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
        *(ulong *)((long)param_1 + 0x41) = CONCAT71(uStack_af,uStack_b0);
        param_1[0xb] = CONCAT62(uStack_97,CONCAT11(uStack_98,uStack_99));
        param_1[10] = CONCAT62(uStack_9f,CONCAT11(uStack_a0,uStack_a1));
        *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_d7,bStack_d8);
        *(long *)((long)param_1 + 0x11) = lStack_e0;
        *(byte *)(param_1 + 2) = bVar26;
        goto LAB_100783a50;
      }
      if (bVar26 == 3) goto LAB_1007838f0;
    }
    if (lVar21 == 1) {
      uVar20 = 1;
      goto LAB_100783908;
    }
    cVar2 = pcVar29[0x20];
    if (cVar2 == '\x10' || cVar2 == '\x12') {
      lVar28 = 0;
    }
    else {
      if (cVar2 == '\x11') {
        pcVar18 = *(char **)(pcVar29 + 0x28);
      }
      func_0x000101439b2c(&lStack_190,pcVar18);
      lVar28 = CONCAT71(uStack_187,bStack_188);
      unaff_x27 = CONCAT71(uStack_17f,uStack_180);
      if (lStack_190 != 2) {
        param_1[5] = CONCAT71(uStack_16f,uStack_170);
        param_1[4] = CONCAT71(uStack_177,uStack_178);
        param_1[7] = CONCAT71(uStack_15f,uStack_160);
        param_1[6] = CONCAT71(uStack_167,uStack_168);
        param_1[9] = CONCAT71(uStack_14f,uStack_150);
        param_1[8] = CONCAT71(uStack_157,uStack_158);
        param_1[0xb] = lStack_140;
        param_1[10] = CONCAT71(uStack_147,uStack_148);
        param_1[2] = lVar28;
        param_1[3] = unaff_x27;
        lVar24 = lStack_190;
        goto LAB_100783a50;
      }
    }
    if (lVar21 == 2) {
      thunk_FUN_1087e427c(&lStack_190,2,&UNK_10b22ee48,&UNK_10b20a590);
      param_1[6] = CONCAT71(uStack_167,uStack_168);
      param_1[5] = CONCAT71(uStack_16f,uStack_170);
      param_1[8] = CONCAT71(uStack_157,uStack_158);
      param_1[7] = CONCAT71(uStack_15f,uStack_160);
      param_1[10] = CONCAT71(uStack_147,uStack_148);
      param_1[9] = CONCAT71(uStack_14f,uStack_150);
      param_1[0xb] = lStack_140;
      param_1[2] = CONCAT71(uStack_187,bStack_188);
      param_1[1] = lStack_190;
      param_1[4] = CONCAT71(uStack_177,uStack_178);
      param_1[3] = CONCAT71(uStack_17f,uStack_180);
      *param_1 = 2;
      return;
    }
    func_0x000101347edc(&lStack_190,pcVar29 + 0x40);
    lVar4 = CONCAT71(uStack_187,bStack_188);
    lVar10 = CONCAT71(uStack_17f,uStack_180);
    if (lStack_190 != 2) {
      param_1[5] = CONCAT71(uStack_16f,uStack_170);
      param_1[4] = CONCAT71(uStack_177,uStack_178);
      param_1[7] = CONCAT71(uStack_15f,uStack_160);
      param_1[6] = CONCAT71(uStack_167,uStack_168);
      param_1[9] = CONCAT71(uStack_14f,uStack_150);
      param_1[8] = CONCAT71(uStack_157,uStack_158);
      param_1[0xb] = lStack_140;
      param_1[10] = CONCAT71(uStack_147,uStack_148);
      param_1[2] = lVar4;
      param_1[3] = lVar10;
      lVar24 = lStack_190;
      goto LAB_100783a50;
    }
    if (lVar21 == 3) {
      uVar20 = 3;
      goto LAB_100783908;
    }
    func_0x000101347edc(&lStack_190,pcVar29 + 0x60);
    lVar5 = CONCAT71(uStack_187,bStack_188);
    lVar11 = CONCAT71(uStack_17f,uStack_180);
    if (lStack_190 != 2) {
      param_1[5] = CONCAT71(uStack_16f,uStack_170);
      param_1[4] = CONCAT71(uStack_177,uStack_178);
      param_1[7] = CONCAT71(uStack_15f,uStack_160);
      param_1[6] = CONCAT71(uStack_167,uStack_168);
      param_1[9] = CONCAT71(uStack_14f,uStack_150);
      param_1[8] = CONCAT71(uStack_157,uStack_158);
      param_1[0xb] = lStack_140;
      param_1[10] = CONCAT71(uStack_147,uStack_148);
      param_1[2] = lVar5;
      param_1[3] = lVar11;
      lVar24 = lStack_190;
      goto LAB_100783a50;
    }
    if (lVar21 == 4) {
      uVar20 = 4;
      goto LAB_100783908;
    }
    func_0x000101347edc(&lStack_190,pcVar29 + 0x80);
    lVar6 = CONCAT71(uStack_187,bStack_188);
    lVar12 = CONCAT71(uStack_17f,uStack_180);
    if (lStack_190 != 2) {
      param_1[5] = CONCAT71(uStack_16f,uStack_170);
      param_1[4] = CONCAT71(uStack_177,uStack_178);
      param_1[7] = CONCAT71(uStack_15f,uStack_160);
      param_1[6] = CONCAT71(uStack_167,uStack_168);
      param_1[9] = CONCAT71(uStack_14f,uStack_150);
      param_1[8] = CONCAT71(uStack_157,uStack_158);
      param_1[0xb] = lStack_140;
      param_1[10] = CONCAT71(uStack_147,uStack_148);
      param_1[2] = lVar6;
      param_1[3] = lVar12;
      lVar24 = lStack_190;
      goto LAB_100783a50;
    }
    if (lVar21 == 5) {
LAB_100783e14:
      uVar20 = 5;
      goto LAB_100783908;
    }
    cVar2 = pcVar29[0xa0];
    lVar25 = extraout_x11;
    if (cVar2 == '\x10') {
LAB_100783738:
      bVar3 = 2;
    }
    else {
      if (cVar2 == '\x11') {
        pcVar18 = *(char **)(pcVar29 + 0xa8);
        if (*pcVar18 == '\0') {
          bVar3 = pcVar18[1];
          goto LAB_100783df8;
        }
LAB_100784450:
        thunk_FUN_108855bf0(&lStack_190,pcVar18,&lStack_198,&UNK_10b20a560);
        lVar24 = lStack_190;
        lVar25 = extraout_x11_00;
        bVar3 = bStack_188;
        if (lStack_190 != 2) {
          uStack_b8 = (undefined1)uStack_15f;
          uStack_b7 = (undefined7)(CONCAT17(uStack_158,uStack_15f) >> 8);
          uStack_c0 = (undefined1)uStack_167;
          uStack_bf = (undefined7)(CONCAT17(uStack_160,uStack_167) >> 8);
          uStack_a8 = (undefined1)uStack_14f;
          uStack_a7 = (undefined6)((uint7)uStack_14f >> 8);
          uStack_b0 = (undefined1)uStack_157;
          uStack_af = (undefined7)(CONCAT17(uStack_150,uStack_157) >> 8);
          uStack_99 = (undefined1)lStack_140;
          uStack_98 = (undefined1)((ulong)lStack_140 >> 8);
          uStack_97 = (undefined6)((ulong)lStack_140 >> 0x10);
          uStack_a1 = uStack_148;
          uStack_a0 = (undefined1)uStack_147;
          uStack_9f = (undefined6)((uint7)uStack_147 >> 8);
          lStack_e0 = CONCAT17(uStack_180,uStack_187);
          bStack_d8 = (byte)uStack_17f;
          uStack_d7 = (undefined7)(CONCAT17(uStack_178,uStack_17f) >> 8);
          uStack_c8 = (undefined1)uStack_16f;
          uStack_c7 = (undefined7)(CONCAT17(uStack_168,uStack_16f) >> 8);
          uStack_d0 = (undefined1)uStack_177;
          uStack_cf = (undefined7)(CONCAT17(uStack_170,uStack_177) >> 8);
        }
      }
      else {
        if (cVar2 == '\x12') goto LAB_100783738;
        if (cVar2 != '\0') {
          pcVar18 = pcVar29 + 0xa0;
          goto LAB_100784450;
        }
        bVar3 = pcVar29[0xa1];
LAB_100783df8:
        lVar24 = 2;
      }
      if (lVar24 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_c7,uStack_c8);
        *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_cf,uStack_d0);
        *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_b7,uStack_b8);
        *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_bf,uStack_c0);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
        *(ulong *)((long)param_1 + 0x41) = CONCAT71(uStack_af,uStack_b0);
        param_1[0xb] = CONCAT62(uStack_97,CONCAT11(uStack_98,uStack_99));
        param_1[10] = CONCAT62(uStack_9f,CONCAT11(uStack_a0,uStack_a1));
        *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_d7,bStack_d8);
        *(long *)((long)param_1 + 0x11) = lStack_e0;
        *(byte *)(param_1 + 2) = bVar3;
        goto LAB_100783a50;
      }
      if (bVar3 == 3) goto LAB_100783e14;
    }
    if (lVar21 == 6) {
LAB_100783f0c:
      uVar20 = 6;
      goto LAB_100783908;
    }
    pcStack_88 = pcVar29 + 0xe0;
    lStack_78 = 7;
    cVar2 = pcVar29[0xc0];
    if (cVar2 == '\x10') {
LAB_100783774:
      uVar22 = 0x8000000000000000;
    }
    else {
      if (cVar2 == '\x11') {
        pcVar29 = *(char **)(pcVar29 + 200);
      }
      else {
        if (cVar2 == '\x12') goto LAB_100783774;
        pcVar29 = pcVar29 + 0xc0;
      }
      func_0x0001004e0914(&lStack_190,pcVar29);
      uVar22 = CONCAT71(uStack_187,bStack_188);
      pcVar29 = (char *)CONCAT71(uStack_17f,uStack_180);
      lVar25 = CONCAT71(uStack_177,uStack_178);
      if (lStack_190 != 2) {
        param_1[6] = CONCAT71(uStack_167,uStack_168);
        param_1[5] = CONCAT71(uStack_16f,uStack_170);
        param_1[8] = CONCAT71(uStack_157,uStack_158);
        param_1[7] = CONCAT71(uStack_15f,uStack_160);
        param_1[10] = CONCAT71(uStack_147,uStack_148);
        param_1[9] = CONCAT71(uStack_14f,uStack_150);
        param_1[0xb] = lStack_140;
        param_1[2] = uVar22;
        param_1[3] = (long)pcVar29;
        param_1[4] = lVar25;
        lVar24 = lStack_190;
LAB_100783a50:
        *param_1 = 2;
        param_1[1] = lVar24;
        return;
      }
      if (uVar22 == 0x8000000000000001) goto LAB_100783f0c;
    }
    func_0x000100f2ce04(&lStack_190,&pcStack_88);
    uVar7 = CONCAT71(uStack_187,bStack_188);
    lVar21 = CONCAT71(uStack_17f,uStack_180);
    lVar24 = CONCAT71(uStack_177,uStack_178);
    if (lStack_190 == 2) {
      if (uVar7 == 0x8000000000000001) {
        thunk_FUN_1087e427c(&lStack_190,7,&UNK_10b22ee48,&UNK_10b20a590);
        param_1[6] = CONCAT71(uStack_167,uStack_168);
        param_1[5] = CONCAT71(uStack_16f,uStack_170);
        param_1[8] = CONCAT71(uStack_157,uStack_158);
        param_1[7] = CONCAT71(uStack_15f,uStack_160);
        param_1[10] = CONCAT71(uStack_147,uStack_148);
        param_1[9] = CONCAT71(uStack_14f,uStack_150);
        param_1[0xb] = lStack_140;
        param_1[2] = CONCAT71(uStack_187,bStack_188);
        param_1[1] = lStack_190;
        param_1[4] = CONCAT71(uStack_177,uStack_178);
        param_1[3] = CONCAT71(uStack_17f,uStack_180);
        *param_1 = 2;
joined_r0x000100783fbc:
        if ((uVar22 & 0x7fffffffffffffff) != 0) goto LAB_100783e9c;
LAB_1007840f4:
        lVar21 = *param_1;
        lStack_198 = lStack_78;
      }
      else {
        func_0x000100f2ce04(&lStack_190,&pcStack_88);
        uVar8 = CONCAT71(uStack_187,bStack_188);
        lVar13 = CONCAT71(uStack_17f,uStack_180);
        lVar15 = CONCAT71(uStack_177,uStack_178);
        if (lStack_190 != 2) {
          param_1[6] = CONCAT71(uStack_167,uStack_168);
          param_1[5] = CONCAT71(uStack_16f,uStack_170);
          param_1[8] = CONCAT71(uStack_157,uStack_158);
          param_1[7] = CONCAT71(uStack_15f,uStack_160);
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          param_1[9] = CONCAT71(uStack_14f,uStack_150);
          param_1[0xb] = lStack_140;
          param_1[2] = uVar8;
          param_1[3] = lVar13;
          param_1[4] = lVar15;
          *param_1 = 2;
          param_1[1] = lStack_190;
joined_r0x000100783fac:
          if ((uVar7 & 0x7fffffffffffffff) != 0) {
            _free(lVar21);
          }
          goto joined_r0x000100783fbc;
        }
        if (uVar8 == 0x8000000000000001) {
          thunk_FUN_1087e427c(&lStack_190,8,&UNK_10b22ee48,&UNK_10b20a590);
          param_1[6] = CONCAT71(uStack_167,uStack_168);
          param_1[5] = CONCAT71(uStack_16f,uStack_170);
          param_1[8] = CONCAT71(uStack_157,uStack_158);
          param_1[7] = CONCAT71(uStack_15f,uStack_160);
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          param_1[9] = CONCAT71(uStack_14f,uStack_150);
          param_1[0xb] = lStack_140;
          param_1[2] = CONCAT71(uStack_187,bStack_188);
          param_1[1] = lStack_190;
          param_1[4] = CONCAT71(uStack_177,uStack_178);
          param_1[3] = CONCAT71(uStack_17f,uStack_180);
          *param_1 = 2;
          goto joined_r0x000100783fac;
        }
        func_0x000100f2ce04(&lStack_190,&pcStack_88);
        uVar9 = CONCAT71(uStack_187,bStack_188);
        lVar14 = CONCAT71(uStack_17f,uStack_180);
        lVar16 = CONCAT71(uStack_177,uStack_178);
        if (lStack_190 != 2) {
          param_1[6] = CONCAT71(uStack_167,uStack_168);
          param_1[5] = CONCAT71(uStack_16f,uStack_170);
          param_1[8] = CONCAT71(uStack_157,uStack_158);
          param_1[7] = CONCAT71(uStack_15f,uStack_160);
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          param_1[9] = CONCAT71(uStack_14f,uStack_150);
          param_1[0xb] = lStack_140;
          param_1[2] = uVar9;
          param_1[3] = lVar14;
          param_1[4] = lVar16;
          *param_1 = 2;
          param_1[1] = lStack_190;
joined_r0x000100784004:
          if ((uVar8 & 0x7fffffffffffffff) != 0) {
LAB_100784008:
            _free(lVar13);
          }
          goto joined_r0x000100783fac;
        }
        if (uVar9 == 0x8000000000000001) {
          thunk_FUN_1087e427c(&lStack_190,9,&UNK_10b22ee48,&UNK_10b20a590);
          param_1[6] = CONCAT71(uStack_167,uStack_168);
          param_1[5] = CONCAT71(uStack_16f,uStack_170);
          param_1[8] = CONCAT71(uStack_157,uStack_158);
          param_1[7] = CONCAT71(uStack_15f,uStack_160);
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          param_1[9] = CONCAT71(uStack_14f,uStack_150);
          param_1[0xb] = lStack_140;
          param_1[2] = CONCAT71(uStack_187,bStack_188);
          param_1[1] = lStack_190;
          param_1[4] = CONCAT71(uStack_177,uStack_178);
          param_1[3] = CONCAT71(uStack_17f,uStack_180);
          *param_1 = 2;
          goto joined_r0x000100784004;
        }
        func_0x000100f2f6c0(&lStack_190,&pcStack_88);
        bVar17 = bStack_188;
        if (lStack_190 != 2) {
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_168,uStack_16f);
          *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_170,uStack_177);
          *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_158,uStack_15f);
          *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_160,uStack_167);
          *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_148,uStack_14f);
          *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_150,uStack_157);
          param_1[0xb] = lStack_140;
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_178,uStack_17f);
          *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_180,uStack_187);
          *(byte *)(param_1 + 2) = bStack_188;
          *param_1 = 2;
          param_1[1] = lStack_190;
LAB_1007840bc:
          if ((uVar9 & 0x7fffffffffffffff) == 0) goto joined_r0x000100784004;
          _free(lVar14);
          if ((uVar8 & 0x7fffffffffffffff) == 0) goto joined_r0x000100783fac;
          goto LAB_100784008;
        }
        if (bStack_188 == 3) {
          thunk_FUN_1087e427c(&lStack_190,10,&UNK_10b22ee48,&UNK_10b20a590);
LAB_10078463c:
          param_1[6] = CONCAT71(uStack_167,uStack_168);
          param_1[5] = CONCAT71(uStack_16f,uStack_170);
          param_1[8] = CONCAT71(uStack_157,uStack_158);
          param_1[7] = CONCAT71(uStack_15f,uStack_160);
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          param_1[9] = CONCAT71(uStack_14f,uStack_150);
          param_1[0xb] = lStack_140;
          param_1[2] = CONCAT71(uStack_187,bStack_188);
          param_1[1] = lStack_190;
          param_1[4] = CONCAT71(uStack_177,uStack_178);
          param_1[3] = CONCAT71(uStack_17f,uStack_180);
LAB_1007840b8:
          *param_1 = 2;
          goto LAB_1007840bc;
        }
        func_0x000100f2f6c0(&lStack_190,&pcStack_88);
        if (lStack_190 != 2) {
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_168,uStack_16f);
          *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_170,uStack_177);
          *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_158,uStack_15f);
          *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_160,uStack_167);
          *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_148,uStack_14f);
          *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_150,uStack_157);
          param_1[0xb] = lStack_140;
          param_1[10] = CONCAT71(uStack_147,uStack_148);
          *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_178,uStack_17f);
          *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_180,uStack_187);
          *(byte *)(param_1 + 2) = bStack_188;
          param_1[1] = lStack_190;
          goto LAB_1007840b8;
        }
        if (bStack_188 == 3) {
          thunk_FUN_1087e427c(&lStack_190,0xb,&UNK_10b22ee48,&UNK_10b20a590);
          goto LAB_10078463c;
        }
        *param_1 = lVar28;
        param_1[1] = unaff_x27;
        param_1[2] = lVar4;
        param_1[3] = lVar10;
        param_1[4] = lVar5;
        param_1[5] = lVar11;
        param_1[6] = lVar6;
        param_1[7] = lVar12;
        param_1[8] = uVar22;
        param_1[9] = (long)pcVar29;
        param_1[10] = lVar25;
        param_1[0xb] = uVar7;
        param_1[0xc] = lVar21;
        param_1[0xd] = lVar24;
        param_1[0xe] = uVar8;
        param_1[0xf] = lVar13;
        param_1[0x10] = lVar15;
        param_1[0x11] = uVar9;
        param_1[0x12] = lVar14;
        param_1[0x13] = lVar16;
        *(byte *)(param_1 + 0x14) = bVar26;
        *(byte *)((long)param_1 + 0xa1) = bVar3;
        *(byte *)((long)param_1 + 0xa2) = bVar17;
        *(byte *)((long)param_1 + 0xa3) = bStack_188;
        lVar21 = *param_1;
        lStack_198 = lStack_78;
      }
    }
    else {
      param_1[6] = CONCAT71(uStack_167,uStack_168);
      param_1[5] = CONCAT71(uStack_16f,uStack_170);
      param_1[8] = CONCAT71(uStack_157,uStack_158);
      param_1[7] = CONCAT71(uStack_15f,uStack_160);
      param_1[10] = CONCAT71(uStack_147,uStack_148);
      param_1[9] = CONCAT71(uStack_14f,uStack_150);
      param_1[0xb] = lStack_140;
      param_1[2] = uVar7;
      param_1[3] = lVar21;
      param_1[4] = lVar24;
      *param_1 = 2;
      param_1[1] = lStack_190;
      if ((uVar22 & 0x7fffffffffffffff) == 0) goto LAB_1007840f4;
LAB_100783e9c:
      _free(pcVar29);
      lVar21 = *param_1;
      lStack_198 = lStack_78;
    }
    if (lVar21 == 2) {
      return;
    }
    lStack_108 = param_1[0x11];
    lStack_110 = param_1[0x10];
    lStack_f8 = param_1[0x13];
    lStack_100 = param_1[0x12];
    lStack_f0 = param_1[0x14];
    lStack_138 = param_1[0xb];
    lStack_140 = param_1[10];
    uStack_148 = (undefined1)param_1[9];
    uStack_147 = (undefined7)((ulong)param_1[9] >> 8);
    uStack_150 = (undefined1)param_1[8];
    uStack_14f = (undefined7)((ulong)param_1[8] >> 8);
    lStack_128 = param_1[0xd];
    lStack_130 = param_1[0xc];
    lStack_118 = param_1[0xf];
    lStack_120 = param_1[0xe];
    lStack_190 = *param_1;
    bStack_188 = (byte)param_1[1];
    uStack_187 = (undefined7)((ulong)param_1[1] >> 8);
    uStack_178 = (undefined1)param_1[3];
    uStack_177 = (undefined7)((ulong)param_1[3] >> 8);
    uStack_180 = (undefined1)param_1[2];
    uStack_17f = (undefined7)((ulong)param_1[2] >> 8);
    uStack_168 = (undefined1)param_1[5];
    uStack_167 = (undefined7)((ulong)param_1[5] >> 8);
    uStack_170 = (undefined1)param_1[4];
    uStack_16f = (undefined7)((ulong)param_1[4] >> 8);
    uStack_158 = (undefined1)param_1[7];
    uStack_157 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_160 = (undefined1)param_1[6];
    uStack_15f = (undefined7)((ulong)param_1[6] >> 8);
    if (((long)pcStack_80 - (long)pcStack_88 == 0) ||
       (lStack_78 = lStack_198,
       thunk_FUN_1087e427c(&lStack_e0,
                           lStack_198 + ((ulong)((long)pcStack_80 - (long)pcStack_88) >> 5),
                           &lStack_198,&UNK_10b23a1b0), lStack_e0 == 2)) goto LAB_100783650;
    param_1[6] = CONCAT71(uStack_b7,uStack_b8);
    param_1[5] = CONCAT71(uStack_bf,uStack_c0);
    param_1[8] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
    param_1[7] = CONCAT71(uStack_af,uStack_b0);
    param_1[10] = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
    param_1[9] = CONCAT17(uStack_99,CONCAT61(uStack_9f,uStack_a0));
    lVar21 = CONCAT71(uStack_d7,bStack_d8);
    lVar28 = CONCAT71(uStack_c7,uStack_c8);
    lVar24 = CONCAT71(uStack_cf,uStack_d0);
    goto LAB_100784324;
  }
  if (*param_2 != '\x15') {
    thunk_FUN_108855bf0(&lStack_190,param_2,&lStack_198,&UNK_10b213988);
    goto LAB_10078390c;
  }
  pbVar27 = *(byte **)(param_2 + 0x10);
  pbVar1 = pbVar27 + *(long *)(param_2 + 0x18) * 0x40;
  if (*(long *)(param_2 + 0x18) == 0) {
    pcVar29 = (char *)0x0;
    *param_1 = 0;
    param_1[1] = unaff_x23;
    param_1[2] = 0;
    param_1[3] = in_x11;
    param_1[4] = 0;
    param_1[5] = param_3;
    param_1[6] = 0;
    param_1[7] = param_4;
    param_1[8] = -0x8000000000000000;
    param_1[9] = unaff_x21;
    param_1[10] = unaff_x26;
    param_1[0xb] = -0x8000000000000000;
    param_1[0xc] = in_x14;
    param_1[0xd] = unaff_x30;
    param_1[0xe] = -0x8000000000000000;
    param_1[0xf] = in_x15;
    param_1[0x10] = (long)pbVar1;
    param_1[0x11] = -0x8000000000000000;
    param_1[0x12] = in_x17;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x14) = 2;
    *(undefined1 *)((long)param_1 + 0xa1) = 2;
    *(undefined1 *)((long)param_1 + 0xa2) = 2;
    *(undefined1 *)((long)param_1 + 0xa3) = 2;
    goto LAB_100783608;
  }
  pcVar29 = (char *)0x1;
  bVar26 = *pbVar27;
  if (bVar26 < 0xd) {
    if (bVar26 == 1) {
      bVar26 = pbVar27[1];
      uVar22 = (ulong)bVar26;
      if (bVar26 < 0xc) goto LAB_100782ca8;
      uStack_187 = 0;
      lStack_190 = CONCAT71(lStack_190._1_7_,1);
      bStack_188 = bVar26;
      thunk_FUN_1087e3ee8(&lStack_e0,&lStack_190,&UNK_10b22f2d8,&UNK_10b20a590);
    }
    else {
      if (bVar26 != 4) {
        if (bVar26 != 0xc) goto LAB_100781c84;
        lVar24 = 0x10;
        lVar21 = 0x18;
        goto LAB_100781d88;
      }
      uVar22 = *(ulong *)(pbVar27 + 8);
      if (uVar22 < 0xc) goto LAB_100782ca8;
      bStack_188 = (byte)uVar22;
      uStack_187 = (undefined7)(uVar22 >> 8);
      lStack_190 = CONCAT71(lStack_190._1_7_,1);
      thunk_FUN_1087e3ee8(&lStack_e0,&lStack_190,&UNK_10b22f2d8,&UNK_10b20a590);
    }
    goto LAB_100782acc;
  }
  if (bVar26 != 0xd) {
    if (bVar26 == 0xe) {
      lVar24 = 0x10;
      lVar21 = 0x18;
    }
    else {
      lVar24 = 8;
      lVar21 = 0x10;
      if (bVar26 != 0xf) {
LAB_100781c84:
        thunk_FUN_108855bf0(&lStack_e0,pbVar27,&lStack_198,&UNK_10b2153a8);
        goto LAB_100782acc;
      }
    }
    pcVar18 = *(char **)(pbVar27 + lVar24);
    switch(*(undefined8 *)(pbVar27 + lVar21)) {
    case 7:
      if ((((*pcVar18 == 'e') && (pcVar18[1] == 'n')) && (pcVar18[2] == 'a')) &&
         (((pcVar18[3] == 'b' && (pcVar18[4] == 'l')) &&
          ((pcVar18[5] == 'e' && (pcVar18[6] == 'd')))))) goto code_r0x000100781de0;
      break;
    case 0xe:
      if ((((*pcVar18 == 't') &&
           (((pcVar18[1] == 'o' && (pcVar18[2] == 'o')) && (pcVar18[3] == 'l')))) &&
          (((pcVar18[4] == '_' && (pcVar18[5] == 'n')) && (pcVar18[6] == 'a')))) &&
         (((pcVar18[7] == 'm' && (pcVar18[8] == 'e')) &&
          ((pcVar18[9] == 's' &&
           ((((pcVar18[10] == 'p' && (pcVar18[0xb] == 'a')) && (pcVar18[0xc] == 'c')) &&
            (pcVar18[0xd] == 'e')))))))) goto code_r0x000100782850;
      break;
    case 0xf:
      if (((*pcVar18 == 'u') && ((pcVar18[1] == 's' && (pcVar18[2] == 'a')))) &&
         (((pcVar18[3] == 'g' &&
           ((((((pcVar18[4] == 'e' && (pcVar18[5] == '_')) && (pcVar18[6] == 'h')) &&
              ((pcVar18[7] == 'i' && (pcVar18[8] == 'n')))) &&
             ((pcVar18[9] == 't' && ((pcVar18[10] == '_' && (pcVar18[0xb] == 't')))))) &&
            (pcVar18[0xc] == 'e')))) && ((pcVar18[0xd] == 'x' && (pcVar18[0xe] == 't'))))))
      goto code_r0x0001007827c4;
      break;
    case 0x12:
      if (*pcVar18 == 'n') {
        if ((((pcVar18[1] == 'o') && (pcVar18[2] == 'n')) &&
            ((pcVar18[3] == '_' &&
             (((((pcVar18[4] == 'c' && (pcVar18[5] == 'o')) && (pcVar18[6] == 'd')) &&
               ((pcVar18[7] == 'e' && (pcVar18[8] == '_')))) && (pcVar18[9] == 'm')))))) &&
           ((((pcVar18[10] == 'o' && (pcVar18[0xb] == 'd')) &&
             ((pcVar18[0xc] == 'e' &&
              (((pcVar18[0xd] == '_' && (pcVar18[0xe] == 'o')) && (pcVar18[0xf] == 'n')))))) &&
            ((pcVar18[0x10] == 'l' && (pcVar18[0x11] == 'y')))))) goto code_r0x000100782bc4;
      }
      else if (((((*pcVar18 == 'u') && ((pcVar18[1] == 's' && (pcVar18[2] == 'a')))) &&
                (pcVar18[3] == 'g')) &&
               (((pcVar18[4] == 'e' && (pcVar18[5] == '_')) && (pcVar18[6] == 'h')))) &&
              ((((pcVar18[7] == 'i' && (pcVar18[8] == 'n')) &&
                ((pcVar18[9] == 't' && ((pcVar18[10] == '_' && (pcVar18[0xb] == 'e')))))) &&
               ((pcVar18[0xc] == 'n' &&
                ((((pcVar18[0xd] == 'a' && (pcVar18[0xe] == 'b')) && (pcVar18[0xf] == 'l')) &&
                 ((pcVar18[0x10] == 'e' && (pcVar18[0x11] == 'd'))))))))))
      goto code_r0x000100782ae8;
      break;
    case 0x13:
      if (*pcVar18 == 'm') {
        if (pcVar18[1] == 'a') {
          if (((((pcVar18[2] == 'x') && (pcVar18[3] == '_')) &&
               ((pcVar18[4] == 'w' &&
                (((pcVar18[5] == 'a' && (pcVar18[6] == 'i')) && (pcVar18[7] == 't')))))) &&
              ((pcVar18[8] == '_' && (pcVar18[9] == 't')))) &&
             ((pcVar18[10] == 'i' &&
              (((pcVar18[0xb] == 'm' && (pcVar18[0xc] == 'e')) &&
               ((pcVar18[0xd] == 'o' &&
                ((((pcVar18[0xe] == 'u' && (pcVar18[0xf] == 't')) && (pcVar18[0x10] == '_')) &&
                 ((pcVar18[0x11] == 'm' && (pcVar18[0x12] == 's'))))))))))))
          goto code_r0x000100782c98;
        }
        else if (((pcVar18[1] == 'i') &&
                 (((pcVar18[2] == 'n' && (pcVar18[3] == '_')) &&
                  ((pcVar18[4] == 'w' &&
                   (((pcVar18[5] == 'a' && (pcVar18[6] == 'i')) && (pcVar18[7] == 't')))))))) &&
                (((((pcVar18[8] == '_' && (pcVar18[9] == 't')) && (pcVar18[10] == 'i')) &&
                  ((pcVar18[0xb] == 'm' && (pcVar18[0xc] == 'e')))) &&
                 (((pcVar18[0xd] == 'o' &&
                   (((pcVar18[0xe] == 'u' && (pcVar18[0xf] == 't')) && (pcVar18[0x10] == '_')))) &&
                  ((pcVar18[0x11] == 'm' && (pcVar18[0x12] == 's')))))))) goto code_r0x000100782af0;
      }
      break;
    case 0x17:
      if (((((*pcVar18 == 'd') && (pcVar18[1] == 'e')) && (pcVar18[2] == 'f')) &&
          (((pcVar18[3] == 'a' && (pcVar18[4] == 'u')) &&
           (((pcVar18[5] == 'l' && ((pcVar18[6] == 't' && (pcVar18[7] == '_')))) &&
            (pcVar18[8] == 'w')))))) &&
         ((((((pcVar18[9] == 'a' && (pcVar18[10] == 'i')) && (pcVar18[0xb] == 't')) &&
            ((pcVar18[0xc] == '_' && (pcVar18[0xd] == 't')))) &&
           ((pcVar18[0xe] == 'i' && ((pcVar18[0xf] == 'm' && (pcVar18[0x10] == 'e')))))) &&
          ((pcVar18[0x11] == 'o' &&
           ((((pcVar18[0x12] == 'u' && (pcVar18[0x13] == 't')) && (pcVar18[0x14] == '_')) &&
            ((pcVar18[0x15] == 'm' && (pcVar18[0x16] == 's')))))))))) goto code_r0x000100782814;
      break;
    case 0x18:
      if ((((((((*pcVar18 == 's') && (pcVar18[1] == 'u')) &&
              ((pcVar18[2] == 'b' && ((pcVar18[3] == 'a' && (pcVar18[4] == 'g')))))) &&
             (pcVar18[5] == 'e')) &&
            (((((((pcVar18[6] == 'n' && (pcVar18[7] == 't')) && (pcVar18[8] == '_')) &&
                ((pcVar18[9] == 'u' && (pcVar18[10] == 's')))) && (pcVar18[0xb] == 'a')) &&
              ((pcVar18[0xc] == 'g' && (pcVar18[0xd] == 'e')))) &&
             ((pcVar18[0xe] == '_' &&
              (((pcVar18[0xf] == 'h' && (pcVar18[0x10] == 'i')) && (pcVar18[0x11] == 'n')))))))) &&
           ((pcVar18[0x12] == 't' && (pcVar18[0x13] == '_')))) && (pcVar18[0x14] == 't')) &&
         (((pcVar18[0x15] == 'e' && (pcVar18[0x16] == 'x')) && (pcVar18[0x17] == 't'))))
      goto code_r0x0001007828a0;
      break;
    case 0x19:
      if (((((*pcVar18 == 'h') && ((pcVar18[1] == 'i' && (pcVar18[2] == 'd')))) &&
           ((pcVar18[3] == 'e' &&
            (((pcVar18[4] == '_' && (pcVar18[5] == 's')) && (pcVar18[6] == 'p')))))) &&
          ((((pcVar18[7] == 'a' && (pcVar18[8] == 'w')) &&
            ((pcVar18[9] == 'n' && ((pcVar18[10] == '_' && (pcVar18[0xb] == 'a')))))) &&
           ((pcVar18[0xc] == 'g' &&
            (((((pcVar18[0xd] == 'e' && (pcVar18[0xe] == 'n')) && (pcVar18[0xf] == 't')) &&
              ((pcVar18[0x10] == '_' && (pcVar18[0x11] == 'm')))) &&
             ((pcVar18[0x12] == 'e' && ((pcVar18[0x13] == 't' && (pcVar18[0x14] == 'a'))))))))))))
         && ((pcVar18[0x15] == 'd' &&
             (((pcVar18[0x16] == 'a' && (pcVar18[0x17] == 't')) && (pcVar18[0x18] == 'a'))))))
      goto code_r0x0001007828fc;
      break;
    case 0x1a:
      if (((((((*pcVar18 == 'r') && (pcVar18[1] == 'o')) && (pcVar18[2] == 'o')) &&
            ((((pcVar18[3] == 't' && (pcVar18[4] == '_')) && (pcVar18[5] == 'a')) &&
             ((pcVar18[6] == 'g' && (pcVar18[7] == 'e')))))) &&
           (((((pcVar18[8] == 'n' && ((pcVar18[9] == 't' && (pcVar18[10] == '_')))) &&
              (pcVar18[0xb] == 'u')) &&
             (((pcVar18[0xc] == 's' && (pcVar18[0xd] == 'a')) && (pcVar18[0xe] == 'g')))) &&
            ((pcVar18[0xf] == 'e' && (pcVar18[0x10] == '_')))))) &&
          (((pcVar18[0x11] == 'h' && ((pcVar18[0x12] == 'i' && (pcVar18[0x13] == 'n')))) &&
           (pcVar18[0x14] == 't')))) &&
         ((((pcVar18[0x15] == '_' && (pcVar18[0x16] == 't')) && (pcVar18[0x17] == 'e')) &&
          ((pcVar18[0x18] == 'x' && (pcVar18[0x19] == 't')))))) goto code_r0x000100782ae0;
      break;
    case 0x22:
      if ((((((*pcVar18 == 'm') && (pcVar18[1] == 'a')) && (pcVar18[2] == 'x')) &&
           ((pcVar18[3] == '_' && (pcVar18[4] == 'c')))) &&
          (((pcVar18[5] == 'o' && ((pcVar18[6] == 'n' && (pcVar18[7] == 'c')))) &&
           ((pcVar18[8] == 'u' &&
            (((((pcVar18[9] == 'r' && (pcVar18[10] == 'r')) && (pcVar18[0xb] == 'e')) &&
              (((pcVar18[0xc] == 'n' && (pcVar18[0xd] == 't')) &&
               ((pcVar18[0xe] == '_' && ((pcVar18[0xf] == 't' && (pcVar18[0x10] == 'h')))))))) &&
             (pcVar18[0x11] == 'r')))))))) &&
         (((((pcVar18[0x12] == 'e' && (pcVar18[0x13] == 'a')) && (pcVar18[0x14] == 'd')) &&
           (((pcVar18[0x15] == 's' && (pcVar18[0x16] == '_')) &&
            ((((pcVar18[0x17] == 'p' && ((pcVar18[0x18] == 'e' && (pcVar18[0x19] == 'r')))) &&
              (pcVar18[0x1a] == '_')) &&
             ((((pcVar18[0x1b] == 's' && (pcVar18[0x1c] == 'e')) && (pcVar18[0x1d] == 's')) &&
              ((pcVar18[0x1e] == 's' && (pcVar18[0x1f] == 'i')))))))))) &&
          ((pcVar18[0x20] == 'o' && (pcVar18[0x21] == 'n')))))) goto code_r0x000100782a5c;
    }
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&pcStack_88);
    pcVar18 = pcStack_80;
    func_0x000107c041e8(&lStack_190,pcStack_80,lStack_78,&UNK_10b221f98,0xc);
    uStack_b8 = uStack_168;
    uStack_b7 = uStack_167;
    uStack_c0 = uStack_170;
    uStack_bf = uStack_16f;
    uStack_a8 = uStack_158;
    uStack_a7 = (undefined6)uStack_157;
    uStack_a1 = (undefined1)((uint7)uStack_157 >> 0x30);
    uStack_b0 = uStack_160;
    uStack_af = uStack_15f;
    uStack_98 = uStack_148;
    uStack_97 = (undefined6)uStack_147;
    uStack_91 = (undefined1)((uint7)uStack_147 >> 0x30);
    uStack_a0 = uStack_150;
    uStack_9f = (undefined6)uStack_14f;
    uStack_99 = (undefined1)((uint7)uStack_14f >> 0x30);
    lStack_90 = lStack_140;
    bStack_d8 = bStack_188;
    uStack_d7 = uStack_187;
    lStack_e0 = lStack_190;
    uStack_c8 = uStack_178;
    uStack_c7 = uStack_177;
    uStack_d0 = uStack_180;
    uStack_cf = uStack_17f;
    if (((ulong)pcStack_88 & 0x7fffffffffffffff) != 0) {
      _free(pcVar18);
    }
    uVar22 = (ulong)bStack_d8;
    if (lStack_e0 == 2) goto LAB_100782ca8;
    goto LAB_1007839c0;
  }
  lVar24 = 8;
  lVar21 = 0x10;
LAB_100781d88:
  plVar19 = *(long **)(pbVar27 + lVar24);
  switch(*(undefined8 *)(pbVar27 + lVar21)) {
  case 7:
    if ((int)*plVar19 == 0x62616e65 && *(int *)((long)plVar19 + 3) == 0x64656c62) {
code_r0x000100781de0:
      uVar22 = 0;
      goto code_r0x000100782c9c;
    }
    break;
  case 0xe:
    if (*plVar19 == 0x6d616e5f6c6f6f74 && *(long *)((long)plVar19 + 6) == 0x6563617073656d61) {
code_r0x000100782850:
      uVar22 = 9;
      goto code_r0x000100782c9c;
    }
    break;
  case 0xf:
    if (*plVar19 == 0x69685f6567617375 && *(long *)((long)plVar19 + 7) == 0x747865745f746e69) {
code_r0x0001007827c4:
      uVar22 = 6;
      goto code_r0x000100782c9c;
    }
    break;
  case 0x12:
    if ((*plVar19 == 0x69685f6567617375 && plVar19[1] == 0x6c62616e655f746e) &&
        (short)plVar19[2] == 0x6465) {
code_r0x000100782ae8:
      uVar22 = 5;
    }
    else {
      if ((*plVar19 != 0x65646f635f6e6f6e || plVar19[1] != 0x6e6f5f65646f6d5f) ||
          (short)plVar19[2] != 0x796c) break;
code_r0x000100782bc4:
      uVar22 = 0xb;
    }
    goto code_r0x000100782c9c;
  case 0x13:
    if ((*plVar19 == 0x746961775f6e696d && plVar19[1] == 0x74756f656d69745f) &&
        *(long *)((long)plVar19 + 0xb) == 0x736d5f74756f656d) {
code_r0x000100782af0:
      uVar22 = 2;
    }
    else {
      if ((*plVar19 != 0x746961775f78616d || plVar19[1] != 0x74756f656d69745f) ||
          *(long *)((long)plVar19 + 0xb) != 0x736d5f74756f656d) break;
code_r0x000100782c98:
      uVar22 = 3;
    }
code_r0x000100782c9c:
    bStack_d8 = (byte)uVar22;
    lStack_e0 = 2;
    goto LAB_100782ca8;
  case 0x17:
    if ((*plVar19 == 0x5f746c7561666564 && plVar19[1] == 0x6d69745f74696177) &&
        *(long *)((long)plVar19 + 0xf) == 0x736d5f74756f656d) {
code_r0x000100782814:
      uVar22 = 4;
      goto code_r0x000100782c9c;
    }
    break;
  case 0x18:
    if ((*plVar19 == 0x746e656761627573 && plVar19[1] == 0x685f65676173755f) &&
        plVar19[2] == 0x747865745f746e69) {
code_r0x0001007828a0:
      uVar22 = 8;
      goto code_r0x000100782c9c;
    }
    break;
  case 0x19:
    if (((*plVar19 == 0x6170735f65646968 && plVar19[1] == 0x746e6567615f6e77) &&
        plVar19[2] == 0x7461646174656d5f) && (char)plVar19[3] == 'a') {
code_r0x0001007828fc:
      uVar22 = 10;
      goto code_r0x000100782c9c;
    }
    break;
  case 0x1a:
    if (((*plVar19 == 0x6567615f746f6f72 && plVar19[1] == 0x65676173755f746e) &&
        plVar19[2] == 0x65745f746e69685f) && (short)plVar19[3] == 0x7478) {
code_r0x000100782ae0:
      uVar22 = 7;
      goto code_r0x000100782c9c;
    }
    break;
  case 0x22:
    if ((((*plVar19 == 0x636e6f635f78616d && plVar19[1] == 0x745f746e65727275) &&
         plVar19[2] == 0x705f736461657268) && plVar19[3] == 0x69737365735f7265) &&
        (short)plVar19[4] == 0x6e6f) {
code_r0x000100782a5c:
      uVar22 = 1;
      goto code_r0x000100782c9c;
    }
  }
  func_0x000107c041e8(&lStack_e0,plVar19,*(undefined8 *)(pbVar27 + lVar21),&UNK_10b221f98,0xc);
LAB_100782acc:
  uVar22 = (ulong)bStack_d8;
  if (lStack_e0 != 2) {
LAB_1007839c0:
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_b8,uStack_bf);
    *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_c0,uStack_c7);
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_a8,uStack_af);
    *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_b0,uStack_b7);
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_98,CONCAT16(uStack_99,uStack_9f));
    *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a0,CONCAT16(uStack_a1,uStack_a7));
    param_1[0xb] = lStack_90;
    param_1[10] = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_c8,uStack_cf);
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_d0,uStack_d7);
    *(byte *)(param_1 + 2) = bStack_d8;
    param_1[1] = lStack_e0;
    *param_1 = 2;
    pbVar27 = pbVar27 + 0x40;
LAB_100783608:
    if (*param_1 != 2) {
      lStack_108 = param_1[0x11];
      lStack_110 = param_1[0x10];
      lStack_f8 = param_1[0x13];
      lStack_100 = param_1[0x12];
      lStack_f0 = param_1[0x14];
      lStack_138 = param_1[0xb];
      lStack_140 = param_1[10];
      uStack_148 = (undefined1)param_1[9];
      uStack_147 = (undefined7)((ulong)param_1[9] >> 8);
      uStack_150 = (undefined1)param_1[8];
      uStack_14f = (undefined7)((ulong)param_1[8] >> 8);
      lStack_128 = param_1[0xd];
      lStack_130 = param_1[0xc];
      lStack_118 = param_1[0xf];
      lStack_120 = param_1[0xe];
      lStack_190 = *param_1;
      bStack_188 = (byte)param_1[1];
      uStack_187 = (undefined7)((ulong)param_1[1] >> 8);
      uStack_178 = (undefined1)param_1[3];
      uStack_177 = (undefined7)((ulong)param_1[3] >> 8);
      uStack_180 = (undefined1)param_1[2];
      uStack_17f = (undefined7)((ulong)param_1[2] >> 8);
      uStack_168 = (undefined1)param_1[5];
      uStack_167 = (undefined7)((ulong)param_1[5] >> 8);
      uStack_170 = (undefined1)param_1[4];
      uStack_16f = (undefined7)((ulong)param_1[4] >> 8);
      uStack_158 = (undefined1)param_1[7];
      uStack_157 = (undefined7)((ulong)param_1[7] >> 8);
      uStack_160 = (undefined1)param_1[6];
      uStack_15f = (undefined7)((ulong)param_1[6] >> 8);
      uVar22 = (long)pbVar1 - (long)pbVar27;
      if ((uVar22 == 0) ||
         (pcStack_88 = pcVar29,
         thunk_FUN_1087e427c(&lStack_e0,pcVar29 + (uVar22 >> 6),&pcStack_88,&UNK_10b23a190),
         lStack_e0 == 2)) {
LAB_100783650:
        param_1[0x11] = lStack_108;
        param_1[0x10] = lStack_110;
        param_1[0x13] = lStack_f8;
        param_1[0x12] = lStack_100;
        param_1[0x14] = lStack_f0;
        param_1[9] = CONCAT71(uStack_147,uStack_148);
        param_1[8] = CONCAT71(uStack_14f,uStack_150);
        param_1[0xb] = lStack_138;
        param_1[10] = lStack_140;
        param_1[0xd] = lStack_128;
        param_1[0xc] = lStack_130;
        param_1[0xf] = lStack_118;
        param_1[0xe] = lStack_120;
        param_1[1] = CONCAT71(uStack_187,bStack_188);
        *param_1 = lStack_190;
        param_1[3] = CONCAT71(uStack_177,uStack_178);
        param_1[2] = CONCAT71(uStack_17f,uStack_180);
        param_1[5] = CONCAT71(uStack_167,uStack_168);
        param_1[4] = CONCAT71(uStack_16f,uStack_170);
        param_1[7] = CONCAT71(uStack_157,uStack_158);
        param_1[6] = CONCAT71(uStack_15f,uStack_160);
      }
      else {
        param_1[6] = CONCAT71(uStack_b7,uStack_b8);
        param_1[5] = CONCAT71(uStack_bf,uStack_c0);
        param_1[8] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
        param_1[7] = CONCAT71(uStack_af,uStack_b0);
        param_1[10] = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
        param_1[9] = CONCAT17(uStack_99,CONCAT61(uStack_9f,uStack_a0));
        lVar21 = CONCAT71(uStack_d7,bStack_d8);
        lVar28 = CONCAT71(uStack_c7,uStack_c8);
        lVar24 = CONCAT71(uStack_cf,uStack_d0);
LAB_100784324:
        param_1[2] = lVar21;
        param_1[1] = lStack_e0;
        param_1[0xb] = lStack_90;
        param_1[4] = lVar28;
        param_1[3] = lVar24;
        *param_1 = 2;
        if ((CONCAT71(uStack_14f,uStack_150) != -0x8000000000000000) &&
           (CONCAT71(uStack_14f,uStack_150) != 0)) {
          _free(CONCAT71(uStack_147,uStack_148));
        }
        if ((lStack_138 != -0x8000000000000000) && (lStack_138 != 0)) {
          _free(lStack_130);
        }
        if ((lStack_120 != -0x8000000000000000) && (lStack_120 != 0)) {
          _free(lStack_118);
        }
        if ((lStack_108 != -0x8000000000000000) && (lStack_108 != 0)) {
          _free(lStack_100);
        }
      }
    }
    return;
  }
LAB_100782ca8:
                    /* WARNING: Could not recover jumptable at 0x000100782cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100782cc4 + (ulong)(byte)(&UNK_108c9b018)[uVar22 & 0xffffffff] * 4))();
  return;
}

