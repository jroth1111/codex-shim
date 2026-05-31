
/* WARNING: Removing unreachable block (ram,0x0001007868d8) */
/* WARNING: Removing unreachable block (ram,0x0001007868e8) */
/* WARNING: Removing unreachable block (ram,0x000100786298) */
/* WARNING: Removing unreachable block (ram,0x0001007868b8) */
/* WARNING: Removing unreachable block (ram,0x0001007868bc) */
/* WARNING: Removing unreachable block (ram,0x000100786278) */

void FUN_1007847a4(ulong *param_1,char *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  byte bVar16;
  ulong unaff_x23;
  byte bVar17;
  byte *pbVar18;
  byte bVar19;
  ulong unaff_x27;
  ulong uVar20;
  ulong uVar21;
  ulong uStack_240;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  char *pcStack_208;
  char *pcStack_200;
  ulong uStack_1f8;
  ulong uStack_1b0;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  byte bStack_1a0;
  undefined7 uStack_19f;
  byte bStack_198;
  undefined7 uStack_197;
  byte bStack_190;
  undefined7 uStack_18f;
  byte bStack_188;
  undefined7 uStack_187;
  byte bStack_180;
  undefined7 uStack_17f;
  byte bStack_178;
  undefined7 uStack_177;
  byte bStack_170;
  undefined7 uStack_16f;
  byte bStack_168;
  undefined7 uStack_167;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  byte bStack_e8;
  undefined7 uStack_e7;
  byte bStack_e0;
  undefined7 uStack_df;
  byte bStack_d8;
  undefined7 uStack_d7;
  byte bStack_d0;
  undefined7 uStack_cf;
  byte bStack_c8;
  undefined7 uStack_c7;
  byte bStack_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined6 uStack_b7;
  byte bStack_b1;
  byte bStack_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  byte bStack_a8;
  undefined6 uStack_a7;
  undefined1 uStack_a1;
  ulong uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  if (*param_2 == '\x14') {
    pcVar7 = *(char **)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    pcStack_200 = pcVar7 + lVar2 * 0x20;
    if (lVar2 == 0) {
LAB_10078613c:
      thunk_FUN_1087e427c(&uStack_1b0,0,&UNK_10b22ee58,&UNK_10b20a590);
      goto LAB_100786158;
    }
    pcVar8 = pcVar7 + 0x20;
    cVar3 = *pcVar7;
    if (cVar3 == '\x10') {
LAB_100784870:
      bVar19 = 2;
    }
    else {
      if (cVar3 == '\x11') {
        pcVar10 = *(char **)(pcVar7 + 8);
        if (*pcVar10 == '\0') {
          bVar19 = pcVar10[1];
        }
        else {
LAB_100786fa8:
          thunk_FUN_108855bf0(&uStack_1b0,pcVar10,auStack_71,&UNK_10b20a560);
          bVar19 = bStack_1a8;
          if (uStack_1b0 != 2) {
            uStack_af = (undefined6)((uint7)uStack_167 >> 8);
            *(ulong *)((long)param_1 + 0x29) = CONCAT17(bStack_188,uStack_18f);
            *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_190,uStack_197);
            *(ulong *)((long)param_1 + 0x39) = CONCAT17(bStack_178,uStack_17f);
            *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_180,uStack_187);
            *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_168,uStack_16f);
            *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_170,uStack_177);
            param_1[0xb] = uStack_160;
            param_1[10] = CONCAT62(uStack_af,(short)CONCAT71(uStack_167,bStack_168));
            *(ulong *)((long)param_1 + 0x19) = CONCAT17(bStack_198,uStack_19f);
            *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_1a0,uStack_1a7);
            *(byte *)(param_1 + 2) = bStack_1a8;
            goto LAB_10078640c;
          }
        }
      }
      else {
        if (cVar3 == '\x12') goto LAB_100784870;
        pcVar10 = pcVar7;
        if (cVar3 != '\0') goto LAB_100786fa8;
        bVar19 = pcVar7[1];
      }
      if (bVar19 == 3) goto LAB_10078613c;
    }
    if (lVar2 == 1) {
LAB_10078638c:
      thunk_FUN_1087e427c(&uStack_1b0,1,&UNK_10b22ee58,&UNK_10b20a590);
      param_1[6] = CONCAT71(uStack_187,bStack_188);
      param_1[5] = CONCAT71(uStack_18f,bStack_190);
      uVar12 = CONCAT71(uStack_177,bStack_178);
      uVar15 = CONCAT71(uStack_17f,bStack_180);
      uVar21 = CONCAT71(uStack_167,bStack_168);
      uVar20 = CONCAT71(uStack_16f,bStack_170);
      goto LAB_1007863b8;
    }
    pcVar10 = pcVar7 + 0x40;
    uStack_1f8 = 2;
    cVar3 = pcVar7[0x20];
    pcStack_208 = pcVar10;
    if (cVar3 == '\x10') {
LAB_1007848ac:
      uVar15 = 0x8000000000000000;
    }
    else {
      if (cVar3 == '\x11') {
        pcVar8 = *(char **)(pcVar7 + 0x28);
      }
      else if (cVar3 == '\x12') goto LAB_1007848ac;
      func_0x0001004e0914(&uStack_1b0,pcVar8);
      uVar15 = CONCAT71(uStack_1a7,bStack_1a8);
      uStack_240 = CONCAT71(uStack_19f,bStack_1a0);
      unaff_x27 = CONCAT71(uStack_197,bStack_198);
      if (uStack_1b0 != 2) {
        param_1[6] = CONCAT71(uStack_187,bStack_188);
        param_1[5] = CONCAT71(uStack_18f,bStack_190);
        param_1[8] = CONCAT71(uStack_177,bStack_178);
        param_1[7] = CONCAT71(uStack_17f,bStack_180);
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        param_1[9] = CONCAT71(uStack_16f,bStack_170);
        param_1[0xb] = uStack_160;
        param_1[2] = uVar15;
        param_1[3] = uStack_240;
        param_1[4] = unaff_x27;
LAB_10078640c:
        *param_1 = 2;
        param_1[1] = uStack_1b0;
        return;
      }
      if (uVar15 == 0x8000000000000001) goto LAB_10078638c;
    }
    if (lVar2 == 2) {
LAB_1007848b8:
      thunk_FUN_1087e427c(&uStack_1b0,2,&UNK_10b22ee58,&UNK_10b20a590);
LAB_1007861f8:
      param_1[6] = CONCAT71(uStack_187,bStack_188);
      param_1[5] = CONCAT71(uStack_18f,bStack_190);
      param_1[8] = CONCAT71(uStack_177,bStack_178);
      param_1[7] = CONCAT71(uStack_17f,bStack_180);
      param_1[10] = CONCAT71(uStack_167,bStack_168);
      param_1[9] = CONCAT71(uStack_16f,bStack_170);
      param_1[0xb] = uStack_160;
      param_1[2] = CONCAT71(uStack_1a7,bStack_1a8);
      param_1[1] = uStack_1b0;
      param_1[4] = CONCAT71(uStack_197,bStack_198);
      param_1[3] = CONCAT71(uStack_19f,bStack_1a0);
      *param_1 = 2;
LAB_10078622c:
      if ((uVar15 & 0x7fffffffffffffff) == 0) {
        uVar15 = *param_1;
      }
      else {
        _free(uStack_240);
        uVar15 = *param_1;
      }
    }
    else {
      pcVar8 = pcVar7 + 0x60;
      uStack_1f8 = 3;
      cVar3 = pcVar7[0x40];
      pcStack_208 = pcVar8;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          pcVar10 = *(char **)(pcVar7 + 0x48);
          if (*pcVar10 == '\0') {
            bVar16 = pcVar10[1];
            goto LAB_100786578;
          }
          thunk_FUN_108855bf0(&uStack_1b0,pcVar10,auStack_71,&UNK_10b20a560);
LAB_100787118:
          uVar12 = uStack_1b0;
          bVar16 = bStack_1a8;
          if (uStack_1b0 != 2) {
            bStack_c8 = (byte)uStack_17f;
            uStack_c7 = (undefined7)(CONCAT17(bStack_178,uStack_17f) >> 8);
            bStack_d0 = (byte)uStack_187;
            uStack_cf = (undefined7)(CONCAT17(bStack_180,uStack_187) >> 8);
            bStack_b8 = (byte)uStack_16f;
            uStack_b7 = (undefined6)((uint7)uStack_16f >> 8);
            bStack_c0 = (byte)uStack_177;
            uStack_bf = (undefined7)(CONCAT17(bStack_170,uStack_177) >> 8);
            uStack_a9 = (undefined1)uStack_160;
            bStack_a8 = (byte)(uStack_160 >> 8);
            uStack_a7 = (undefined6)(uStack_160 >> 0x10);
            bStack_b1 = bStack_168;
            bStack_b0 = (byte)uStack_167;
            uStack_af = (undefined6)((uint7)uStack_167 >> 8);
            uStack_f0 = CONCAT17(bStack_1a0,uStack_1a7);
            bStack_e8 = (byte)uStack_19f;
            uStack_e7 = (undefined7)(CONCAT17(bStack_198,uStack_19f) >> 8);
            bStack_d8 = (byte)uStack_18f;
            uStack_d7 = (undefined7)(CONCAT17(bStack_188,uStack_18f) >> 8);
            bStack_e0 = (byte)uStack_197;
            uStack_df = (undefined7)(CONCAT17(bStack_190,uStack_197) >> 8);
          }
        }
        else {
          if (cVar3 == '\x12') goto LAB_1007861d0;
          if (cVar3 != '\0') {
            thunk_FUN_108855bf0(&uStack_1b0,pcVar10,auStack_71,&UNK_10b20a560);
            goto LAB_100787118;
          }
          bVar16 = pcVar7[0x41];
LAB_100786578:
          uVar12 = 2;
        }
        if (uVar12 == 2) {
          if (bVar16 == 3) goto LAB_1007848b8;
          goto LAB_1007861d4;
        }
        *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_d7,bStack_d8);
        *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_df,bStack_e0);
        *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_c7,bStack_c8);
        *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_cf,bStack_d0);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_b1,CONCAT61(uStack_b7,bStack_b8));
        *(ulong *)((long)param_1 + 0x41) = CONCAT71(uStack_bf,bStack_c0);
        param_1[0xb] = CONCAT62(uStack_a7,CONCAT11(bStack_a8,uStack_a9));
        param_1[10] = CONCAT62(uStack_af,CONCAT11(bStack_b0,bStack_b1));
        *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_e7,bStack_e8);
        *(ulong *)((long)param_1 + 0x11) = uStack_f0;
        *(byte *)(param_1 + 2) = bVar16;
LAB_100786a48:
        *param_1 = 2;
        param_1[1] = uVar12;
        goto LAB_10078622c;
      }
LAB_1007861d0:
      bVar16 = 2;
LAB_1007861d4:
      if (lVar2 == 3) {
LAB_1007861dc:
        thunk_FUN_1087e427c(&uStack_1b0,3,&UNK_10b22ee58,&UNK_10b20a590);
        goto LAB_1007861f8;
      }
      pcVar10 = pcVar7 + 0x80;
      uStack_1f8 = 4;
      cVar3 = pcVar7[0x60];
      pcStack_208 = pcVar10;
      if (cVar3 == '\x10') {
LAB_10078652c:
        uStack_210 = 0x8000000000000000;
      }
      else {
        if (cVar3 == '\x11') {
          func_0x0001004e0914(&uStack_1b0,*(undefined8 *)(pcVar7 + 0x68));
        }
        else {
          if (cVar3 == '\x12') goto LAB_10078652c;
          func_0x0001004e0914(&uStack_1b0,pcVar8);
        }
        uStack_210 = CONCAT71(uStack_1a7,bStack_1a8);
        uStack_218 = CONCAT71(uStack_19f,bStack_1a0);
        uStack_220 = CONCAT71(uStack_197,bStack_198);
        if (uStack_1b0 != 2) {
          uStack_f0 = CONCAT71(uStack_18f,bStack_190);
          bStack_e8 = bStack_188;
          uStack_e7 = uStack_187;
          bStack_d8 = bStack_178;
          uStack_d7 = uStack_177;
          bStack_e0 = bStack_180;
          uStack_df = uStack_17f;
          bStack_c8 = bStack_168;
          uStack_c7 = uStack_167;
          bStack_d0 = bStack_170;
          uStack_cf = uStack_16f;
          bStack_c0 = (byte)uStack_160;
          uStack_bf = (undefined7)(uStack_160 >> 8);
          param_1[6] = CONCAT71(uStack_187,bStack_188);
          param_1[5] = uStack_f0;
          param_1[8] = CONCAT71(uStack_177,bStack_178);
          param_1[7] = CONCAT71(uStack_17f,bStack_180);
          param_1[10] = CONCAT71(uStack_167,bStack_168);
          param_1[9] = CONCAT71(uStack_16f,bStack_170);
          param_1[0xb] = uStack_160;
          param_1[2] = uStack_210;
          param_1[3] = uStack_218;
          param_1[4] = uStack_220;
          uVar12 = uStack_1b0;
          goto LAB_100786a48;
        }
        if (uStack_210 == 0x8000000000000001) goto LAB_1007861dc;
      }
      if (lVar2 == 4) {
LAB_10078653c:
        thunk_FUN_1087e427c(&uStack_1b0,4,&UNK_10b22ee58,&UNK_10b20a590);
LAB_100786640:
        param_1[6] = CONCAT71(uStack_187,bStack_188);
        param_1[5] = CONCAT71(uStack_18f,bStack_190);
        param_1[8] = CONCAT71(uStack_177,bStack_178);
        param_1[7] = CONCAT71(uStack_17f,bStack_180);
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        param_1[9] = CONCAT71(uStack_16f,bStack_170);
        param_1[0xb] = uStack_160;
        param_1[2] = CONCAT71(uStack_1a7,bStack_1a8);
        param_1[1] = uStack_1b0;
        param_1[4] = CONCAT71(uStack_197,bStack_198);
        param_1[3] = CONCAT71(uStack_19f,bStack_1a0);
        *param_1 = 2;
LAB_100786ed8:
        if ((uStack_210 & 0x7fffffffffffffff) != 0) {
          _free(uStack_218);
        }
        goto LAB_10078622c;
      }
      pcVar8 = pcVar7 + 0xa0;
      uStack_1f8 = 5;
      cVar3 = pcVar7[0x80];
      pcStack_208 = pcVar8;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          pcVar10 = *(char **)(pcVar7 + 0x88);
          if (*pcVar10 == '\0') {
            bVar17 = pcVar10[1];
            goto LAB_100786c2c;
          }
          thunk_FUN_108855bf0(&uStack_1b0,pcVar10,auStack_71,&UNK_10b20a560);
LAB_100787184:
          uVar12 = uStack_1b0;
          bVar17 = bStack_1a8;
          if (uStack_1b0 != 2) {
            bStack_c8 = (byte)uStack_17f;
            uStack_c7 = (undefined7)(CONCAT17(bStack_178,uStack_17f) >> 8);
            bStack_d0 = (byte)uStack_187;
            uStack_cf = (undefined7)(CONCAT17(bStack_180,uStack_187) >> 8);
            bStack_b8 = (byte)uStack_16f;
            uStack_b7 = (undefined6)((uint7)uStack_16f >> 8);
            bStack_c0 = (byte)uStack_177;
            uStack_bf = (undefined7)(CONCAT17(bStack_170,uStack_177) >> 8);
            uStack_a9 = (undefined1)uStack_160;
            bStack_a8 = (byte)(uStack_160 >> 8);
            uStack_a7 = (undefined6)(uStack_160 >> 0x10);
            bStack_b1 = bStack_168;
            bStack_b0 = (byte)uStack_167;
            uStack_af = (undefined6)((uint7)uStack_167 >> 8);
            uStack_f0 = CONCAT17(bStack_1a0,uStack_1a7);
            bStack_e8 = (byte)uStack_19f;
            uStack_e7 = (undefined7)(CONCAT17(bStack_198,uStack_19f) >> 8);
            bStack_d8 = (byte)uStack_18f;
            uStack_d7 = (undefined7)(CONCAT17(bStack_188,uStack_18f) >> 8);
            bStack_e0 = (byte)uStack_197;
            uStack_df = (undefined7)(CONCAT17(bStack_190,uStack_197) >> 8);
          }
        }
        else {
          if (cVar3 == '\x12') goto LAB_100786618;
          if (cVar3 != '\0') {
            thunk_FUN_108855bf0(&uStack_1b0,pcVar10,auStack_71,&UNK_10b20a560);
            goto LAB_100787184;
          }
          bVar17 = pcVar7[0x81];
LAB_100786c2c:
          uVar12 = 2;
        }
        if (uVar12 == 2) {
          if (bVar17 == 3) goto LAB_10078653c;
          goto LAB_10078661c;
        }
        *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_d7,bStack_d8);
        *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_df,bStack_e0);
        *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_c7,bStack_c8);
        *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_cf,bStack_d0);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_b1,CONCAT61(uStack_b7,bStack_b8));
        *(ulong *)((long)param_1 + 0x41) = CONCAT71(uStack_bf,bStack_c0);
        param_1[0xb] = CONCAT62(uStack_a7,CONCAT11(bStack_a8,uStack_a9));
        param_1[10] = CONCAT62(uStack_af,CONCAT11(bStack_b0,bStack_b1));
        *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_e7,bStack_e8);
        *(ulong *)((long)param_1 + 0x11) = uStack_f0;
        *(byte *)(param_1 + 2) = bVar17;
LAB_100786ed0:
        *param_1 = 2;
        param_1[1] = uVar12;
        goto LAB_100786ed8;
      }
LAB_100786618:
      bVar17 = 2;
LAB_10078661c:
      if (lVar2 == 5) {
LAB_100786624:
        thunk_FUN_1087e427c(&uStack_1b0,5,&UNK_10b22ee58,&UNK_10b20a590);
        goto LAB_100786640;
      }
      pcStack_208 = pcVar7 + 0xc0;
      uStack_1f8 = 6;
      cVar3 = pcVar7[0xa0];
      if (cVar3 == '\x10') {
LAB_100786a80:
        bVar14 = 2;
      }
      else {
        if (cVar3 == '\x11') {
          pcVar7 = *(char **)(pcVar7 + 0xa8);
          if (*pcVar7 == '\0') {
            bVar14 = pcVar7[1];
            goto LAB_100786cc0;
          }
          thunk_FUN_108855bf0(&uStack_1b0,pcVar7,auStack_71,&UNK_10b20a560);
LAB_100787210:
          uVar12 = uStack_1b0;
          bVar14 = bStack_1a8;
          if (uStack_1b0 != 2) {
            bStack_c8 = (byte)uStack_17f;
            uStack_c7 = (undefined7)(CONCAT17(bStack_178,uStack_17f) >> 8);
            bStack_d0 = (byte)uStack_187;
            uStack_cf = (undefined7)(CONCAT17(bStack_180,uStack_187) >> 8);
            bStack_b8 = (byte)uStack_16f;
            uStack_b7 = (undefined6)((uint7)uStack_16f >> 8);
            bStack_c0 = (byte)uStack_177;
            uStack_bf = (undefined7)(CONCAT17(bStack_170,uStack_177) >> 8);
            uStack_a9 = (undefined1)uStack_160;
            bStack_a8 = (byte)(uStack_160 >> 8);
            uStack_a7 = (undefined6)(uStack_160 >> 0x10);
            bStack_b1 = bStack_168;
            bStack_b0 = (byte)uStack_167;
            uStack_af = (undefined6)((uint7)uStack_167 >> 8);
            uStack_f0 = CONCAT17(bStack_1a0,uStack_1a7);
            bStack_e8 = (byte)uStack_19f;
            uStack_e7 = (undefined7)(CONCAT17(bStack_198,uStack_19f) >> 8);
            bStack_d8 = (byte)uStack_18f;
            uStack_d7 = (undefined7)(CONCAT17(bStack_188,uStack_18f) >> 8);
            bStack_e0 = (byte)uStack_197;
            uStack_df = (undefined7)(CONCAT17(bStack_190,uStack_197) >> 8);
          }
        }
        else {
          if (cVar3 == '\x12') goto LAB_100786a80;
          if (cVar3 != '\0') {
            thunk_FUN_108855bf0(&uStack_1b0,pcVar8,auStack_71,&UNK_10b20a560);
            goto LAB_100787210;
          }
          bVar14 = pcVar7[0xa1];
LAB_100786cc0:
          uVar12 = 2;
        }
        if (uVar12 != 2) {
          *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_d7,bStack_d8);
          *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_df,bStack_e0);
          *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_c7,bStack_c8);
          *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_cf,bStack_d0);
          *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_b1,CONCAT61(uStack_b7,bStack_b8));
          *(ulong *)((long)param_1 + 0x41) = CONCAT71(uStack_bf,bStack_c0);
          param_1[0xb] = CONCAT62(uStack_a7,CONCAT11(bStack_a8,uStack_a9));
          param_1[10] = CONCAT62(uStack_af,CONCAT11(bStack_b0,bStack_b1));
          *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_e7,bStack_e8);
          *(ulong *)((long)param_1 + 0x11) = uStack_f0;
          *(byte *)(param_1 + 2) = bVar14;
          goto LAB_100786ed0;
        }
        if (bVar14 == 3) goto LAB_100786624;
      }
      func_0x000100f2f6c0(&uStack_1b0,&pcStack_208);
      bVar4 = bStack_1a8;
      if (uStack_1b0 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(bStack_188,uStack_18f);
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_190,uStack_197);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(bStack_178,uStack_17f);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_180,uStack_187);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_168,uStack_16f);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_170,uStack_177);
        param_1[0xb] = uStack_160;
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(bStack_198,uStack_19f);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_1a0,uStack_1a7);
        *(byte *)(param_1 + 2) = bStack_1a8;
        uVar12 = uStack_1b0;
        goto LAB_100786ed0;
      }
      if (bStack_1a8 == 3) {
        thunk_FUN_1087e427c(&uStack_1b0,6,&UNK_10b22ee58,&UNK_10b20a590);
        goto LAB_100786640;
      }
      func_0x000100f2f6c0(&uStack_1b0,&pcStack_208);
      bVar5 = bStack_1a8;
      if (uStack_1b0 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(bStack_188,uStack_18f);
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_190,uStack_197);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(bStack_178,uStack_17f);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_180,uStack_187);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_168,uStack_16f);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_170,uStack_177);
        param_1[0xb] = uStack_160;
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(bStack_198,uStack_19f);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_1a0,uStack_1a7);
        *(byte *)(param_1 + 2) = bStack_1a8;
        uVar12 = uStack_1b0;
        goto LAB_100786ed0;
      }
      if (bStack_1a8 == 3) {
        thunk_FUN_1087e427c(&uStack_1b0,7,&UNK_10b22ee58,&UNK_10b20a590);
        goto LAB_100786640;
      }
      func_0x000100f2806c(&uStack_1b0,&pcStack_208);
      bVar6 = bStack_1a8;
      if (uStack_1b0 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(bStack_188,uStack_18f);
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_190,uStack_197);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(bStack_178,uStack_17f);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_180,uStack_187);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_168,uStack_16f);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_170,uStack_177);
        param_1[0xb] = uStack_160;
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(bStack_198,uStack_19f);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_1a0,uStack_1a7);
        *(byte *)(param_1 + 2) = bStack_1a8;
        uVar12 = uStack_1b0;
        goto LAB_100786ed0;
      }
      if (bStack_1a8 == 3) {
        thunk_FUN_1087e427c(&uStack_1b0,8,&UNK_10b22ee58,&UNK_10b20a590);
        goto LAB_100786640;
      }
      func_0x000100f2cf1c(&uStack_1b0,&pcStack_208);
      uStack_110 = CONCAT71(uStack_1a7,bStack_1a8);
      uStack_100 = CONCAT71(uStack_197,bStack_198);
      uStack_108 = CONCAT71(uStack_19f,bStack_1a0);
      uStack_f8 = CONCAT71(uStack_18f,bStack_190);
      if (uStack_1b0 != 2) {
        param_1[7] = CONCAT71(uStack_17f,bStack_180);
        param_1[6] = CONCAT71(uStack_187,bStack_188);
        param_1[9] = CONCAT71(uStack_16f,bStack_170);
        param_1[8] = CONCAT71(uStack_177,bStack_178);
        param_1[0xb] = uStack_160;
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        param_1[4] = uStack_100;
        param_1[3] = uStack_108;
        param_1[5] = uStack_f8;
        param_1[1] = uStack_1b0;
        param_1[2] = uStack_110;
        *param_1 = 2;
        goto LAB_100786ed8;
      }
      if (uStack_110 == 2) {
        thunk_FUN_1087e427c(&uStack_1b0,9,&UNK_10b22ee58,&UNK_10b20a590);
        goto LAB_100786640;
      }
      func_0x000100f2df3c(&uStack_1b0,&pcStack_208);
      uVar12 = CONCAT71(uStack_1a7,bStack_1a8);
      uStack_130 = CONCAT71(uStack_19f,bStack_1a0);
      if (uStack_1b0 != 2) {
        param_1[7] = CONCAT71(uStack_17f,bStack_180);
        param_1[6] = CONCAT71(uStack_187,bStack_188);
        param_1[9] = CONCAT71(uStack_16f,bStack_170);
        param_1[8] = CONCAT71(uStack_177,bStack_178);
        param_1[0xb] = uStack_160;
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        param_1[4] = CONCAT71(uStack_197,bStack_198);
        param_1[3] = uStack_130;
        param_1[5] = CONCAT71(uStack_18f,bStack_190);
        param_1[1] = uStack_1b0;
        param_1[2] = uVar12;
        *param_1 = 2;
LAB_1007870dc:
        func_0x000100d85f1c(&uStack_110);
        goto LAB_100786ed8;
      }
      if (uVar12 == 2) {
        thunk_FUN_1087e427c(&uStack_1b0,10,&UNK_10b22ee58,&UNK_10b20a590);
        param_1[6] = CONCAT71(uStack_187,bStack_188);
        param_1[5] = CONCAT71(uStack_18f,bStack_190);
        param_1[8] = CONCAT71(uStack_177,bStack_178);
        param_1[7] = CONCAT71(uStack_17f,bStack_180);
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        param_1[9] = CONCAT71(uStack_16f,bStack_170);
        param_1[0xb] = uStack_160;
        param_1[2] = CONCAT71(uStack_1a7,bStack_1a8);
        param_1[1] = uStack_1b0;
        param_1[4] = CONCAT71(uStack_197,bStack_198);
        param_1[3] = CONCAT71(uStack_19f,bStack_1a0);
        *param_1 = 2;
        goto LAB_1007870dc;
      }
      bStack_e0 = bStack_198;
      uStack_df = uStack_197;
      bStack_e8 = bStack_1a0;
      uStack_e7 = uStack_19f;
      bStack_d8 = bStack_190;
      uStack_d7 = uStack_18f;
      uStack_f0 = uVar12;
      func_0x000100f2f6c0(&uStack_1b0,&pcStack_208);
      if (uStack_1b0 != 2) {
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(bStack_188,uStack_18f);
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_190,uStack_197);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(bStack_178,uStack_17f);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_180,uStack_187);
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_168,uStack_16f);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_170,uStack_177);
        param_1[0xb] = uStack_160;
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(bStack_198,uStack_19f);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_1a0,uStack_1a7);
        *(byte *)(param_1 + 2) = bStack_1a8;
        param_1[1] = uStack_1b0;
LAB_1007870d0:
        *param_1 = 2;
        func_0x000100d85f1c(&uStack_f0);
        goto LAB_1007870dc;
      }
      if (bStack_1a8 == 3) {
        thunk_FUN_1087e427c(&uStack_1b0,0xb,&UNK_10b22ee58,&UNK_10b20a590);
        param_1[6] = CONCAT71(uStack_187,bStack_188);
        param_1[5] = CONCAT71(uStack_18f,bStack_190);
        param_1[8] = CONCAT71(uStack_177,bStack_178);
        param_1[7] = CONCAT71(uStack_17f,bStack_180);
        param_1[10] = CONCAT71(uStack_167,bStack_168);
        param_1[9] = CONCAT71(uStack_16f,bStack_170);
        param_1[0xb] = uStack_160;
        param_1[2] = CONCAT71(uStack_1a7,bStack_1a8);
        param_1[1] = uStack_1b0;
        param_1[4] = CONCAT71(uStack_197,bStack_198);
        param_1[3] = CONCAT71(uStack_19f,bStack_1a0);
        goto LAB_1007870d0;
      }
      param_1[1] = uStack_108;
      *param_1 = uStack_110;
      param_1[3] = uStack_f8;
      param_1[2] = uStack_100;
      param_1[5] = CONCAT71(uStack_e7,bStack_e8);
      param_1[4] = uStack_f0;
      param_1[7] = CONCAT71(uStack_d7,bStack_d8);
      param_1[6] = CONCAT71(uStack_df,bStack_e0);
      param_1[8] = uVar15;
      param_1[9] = uStack_240;
      param_1[10] = unaff_x27;
      param_1[0xb] = uStack_210;
      param_1[0xc] = uStack_218;
      param_1[0xd] = uStack_220;
      *(byte *)(param_1 + 0xe) = bVar19;
      *(byte *)((long)param_1 + 0x71) = bVar16;
      *(byte *)((long)param_1 + 0x72) = bVar17;
      *(byte *)((long)param_1 + 0x73) = bVar14;
      *(byte *)((long)param_1 + 0x74) = bVar4;
      *(byte *)((long)param_1 + 0x75) = bVar5;
      *(byte *)((long)param_1 + 0x76) = bVar6;
      *(byte *)((long)param_1 + 0x77) = bStack_1a8;
      uVar15 = *param_1;
    }
    if (uVar15 == 2) {
      return;
    }
    uStack_158 = param_1[0xb];
    uStack_160 = param_1[10];
    uStack_148 = param_1[0xd];
    uStack_150 = param_1[0xc];
    uStack_1b0 = *param_1;
    bStack_1a8 = (byte)param_1[1];
    uStack_1a7 = (undefined7)(param_1[1] >> 8);
    bStack_198 = (byte)param_1[3];
    uStack_197 = (undefined7)(param_1[3] >> 8);
    bStack_1a0 = (byte)param_1[2];
    uStack_19f = (undefined7)(param_1[2] >> 8);
    bStack_188 = (byte)param_1[5];
    uStack_187 = (undefined7)(param_1[5] >> 8);
    bStack_190 = (byte)param_1[4];
    uStack_18f = (undefined7)(param_1[4] >> 8);
    uStack_140 = param_1[0xe];
    bStack_178 = (byte)param_1[7];
    uStack_177 = (undefined7)(param_1[7] >> 8);
    bStack_180 = (byte)param_1[6];
    uStack_17f = (undefined7)(param_1[6] >> 8);
    bStack_168 = (byte)param_1[9];
    uStack_167 = (undefined7)(param_1[9] >> 8);
    bStack_170 = (byte)param_1[8];
    uStack_16f = (undefined7)(param_1[8] >> 8);
    if (((long)pcStack_200 - (long)pcStack_208 == 0) ||
       (uStack_110 = uStack_1f8,
       thunk_FUN_1087e427c(&uStack_f0,
                           uStack_1f8 + ((ulong)((long)pcStack_200 - (long)pcStack_208) >> 5),
                           &uStack_110,&UNK_10b23a1b0), uStack_f0 == 2)) {
      uVar12 = CONCAT71(uStack_177,bStack_178);
      uVar15 = CONCAT71(uStack_17f,bStack_180);
      uVar21 = CONCAT71(uStack_167,bStack_168);
      uVar20 = CONCAT71(uStack_16f,bStack_170);
      goto LAB_1007864c0;
    }
    param_1[6] = CONCAT71(uStack_c7,bStack_c8);
    param_1[5] = CONCAT71(uStack_cf,bStack_d0);
    param_1[8] = CONCAT17(bStack_b1,CONCAT61(uStack_b7,bStack_b8));
    param_1[7] = CONCAT71(uStack_bf,bStack_c0);
    param_1[10] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,bStack_a8));
    param_1[9] = CONCAT17(uStack_a9,CONCAT61(uStack_af,bStack_b0));
    param_1[0xb] = uStack_a0;
    uVar15 = CONCAT71(uStack_e7,bStack_e8);
    uVar20 = CONCAT71(uStack_d7,bStack_d8);
    uVar12 = CONCAT71(uStack_df,bStack_e0);
    goto LAB_10078707c;
  }
  if (*param_2 != '\x15') {
    thunk_FUN_108855bf0(&uStack_1b0,param_2,auStack_71,&UNK_10b214008);
LAB_100786158:
    param_1[6] = CONCAT71(uStack_187,bStack_188);
    param_1[5] = CONCAT71(uStack_18f,bStack_190);
    uVar12 = CONCAT71(uStack_177,bStack_178);
    uVar15 = CONCAT71(uStack_17f,bStack_180);
    uVar21 = CONCAT71(uStack_167,bStack_168);
    uVar20 = CONCAT71(uStack_16f,bStack_170);
LAB_1007863b8:
    param_1[8] = uVar12;
    param_1[7] = uVar15;
    param_1[10] = uVar21;
    param_1[9] = uVar20;
    param_1[0xb] = uStack_160;
    param_1[2] = CONCAT71(uStack_1a7,bStack_1a8);
    param_1[1] = uStack_1b0;
    param_1[4] = CONCAT71(uStack_197,bStack_198);
    param_1[3] = CONCAT71(uStack_19f,bStack_1a0);
    *param_1 = 2;
    return;
  }
  pbVar1 = *(byte **)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uStack_130 = 2;
  uStack_110 = 2;
  if (lVar2 == 0) {
    uVar15 = 0;
    *param_1 = 0;
    param_1[2] = CONCAT71(uStack_e7,bStack_e8);
    param_1[1] = uStack_f0;
    param_1[3] = CONCAT71(uStack_df,bStack_e0);
    param_1[4] = 0;
    param_1[6] = CONCAT71(uStack_1a7,bStack_1a8);
    param_1[5] = uStack_1b0;
    param_1[7] = CONCAT71(uStack_19f,bStack_1a0);
    param_1[8] = 0x8000000000000000;
    param_1[9] = uStack_240;
    param_1[10] = param_4;
    param_1[0xb] = 0x8000000000000000;
    param_1[0xc] = unaff_x23;
    param_1[0xd] = param_5;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)((long)param_1 + 0x71) = 2;
    *(undefined1 *)((long)param_1 + 0x72) = 2;
    *(undefined1 *)((long)param_1 + 0x73) = 2;
    *(undefined1 *)((long)param_1 + 0x74) = 2;
    *(undefined1 *)((long)param_1 + 0x75) = 2;
    *(undefined1 *)((long)param_1 + 0x76) = 2;
    *(undefined1 *)((long)param_1 + 0x77) = 2;
    pbVar18 = pbVar1;
    goto LAB_1007862f0;
  }
  uVar15 = 1;
  bVar19 = *pbVar1;
  if (bVar19 < 0xd) {
    if (bVar19 == 1) {
      bVar19 = pbVar1[1];
      uVar12 = (ulong)bVar19;
      if (bVar19 < 0xc) goto LAB_100785668;
      uStack_1a7 = 0;
      uStack_1b0 = CONCAT71(uStack_1b0._1_7_,1);
      bStack_1a8 = bVar19;
      thunk_FUN_1087e3ee8(&uStack_f0,&uStack_1b0,&UNK_10b22f2d8,&UNK_10b20a590);
    }
    else {
      if (bVar19 != 4) {
        if (bVar19 != 0xc) goto LAB_100784944;
        lVar13 = 0x10;
        lVar11 = 0x18;
        goto LAB_100784a24;
      }
      uVar12 = *(ulong *)(pbVar1 + 8);
      if (uVar12 < 0xc) goto LAB_100785668;
      bStack_1a8 = (byte)uVar12;
      uStack_1a7 = (undefined7)(uVar12 >> 8);
      uStack_1b0 = CONCAT71(uStack_1b0._1_7_,1);
      thunk_FUN_1087e3ee8(&uStack_f0,&uStack_1b0,&UNK_10b22f2d8,&UNK_10b20a590);
    }
    goto LAB_10078544c;
  }
  if (bVar19 != 0xd) {
    if (bVar19 == 0xe) {
      lVar13 = 0x10;
      lVar11 = 0x18;
    }
    else {
      lVar13 = 8;
      lVar11 = 0x10;
      if (bVar19 != 0xf) {
LAB_100784944:
        thunk_FUN_108855bf0(&uStack_f0,pbVar1,auStack_71,&UNK_10b214a28);
        goto LAB_10078544c;
      }
    }
    pcVar7 = *(char **)(pbVar1 + lVar13);
    switch(*(undefined8 *)(pbVar1 + lVar11)) {
    case 4:
      if ((((*pcVar7 == 'm') && (pcVar7[1] == 'o')) && (pcVar7[2] == 'd')) && (pcVar7[3] == 'e'))
      goto code_r0x000100784a6c;
      break;
    case 7:
      if (*pcVar7 == 'd') {
        if (((pcVar7[1] == 'o') && (pcVar7[2] == 'm')) &&
           ((pcVar7[3] == 'a' && (((pcVar7[4] == 'i' && (pcVar7[5] == 'n')) && (pcVar7[6] == 's'))))
           )) goto code_r0x000100785658;
      }
      else if (((*pcVar7 == 'e') && (pcVar7[1] == 'n')) &&
              ((pcVar7[2] == 'a' &&
               (((pcVar7[3] == 'b' && (pcVar7[4] == 'l')) &&
                ((pcVar7[5] == 'e' && (pcVar7[6] == 'd')))))))) goto code_r0x0001007855a0;
      break;
    case 9:
      if (*pcVar7 == 'p') {
        if (((pcVar7[1] == 'r') && (pcVar7[2] == 'o')) &&
           (((pcVar7[3] == 'x' && (((pcVar7[4] == 'y' && (pcVar7[5] == '_')) && (pcVar7[6] == 'u')))
             ) && ((pcVar7[7] == 'r' && (pcVar7[8] == 'l')))))) goto code_r0x000100785608;
      }
      else if ((*pcVar7 == 's') &&
              ((((pcVar7[1] == 'o' && (pcVar7[2] == 'c')) &&
                ((pcVar7[3] == 'k' &&
                 (((pcVar7[4] == 's' && (pcVar7[5] == '_')) && (pcVar7[6] == 'u')))))) &&
               ((pcVar7[7] == 'r' && (pcVar7[8] == 'l')))))) goto code_r0x000100784e5c;
      break;
    case 0xc:
      if ((((*pcVar7 == 'u') && (pcVar7[1] == 'n')) &&
          ((pcVar7[2] == 'i' && ((pcVar7[3] == 'x' && (pcVar7[4] == '_')))))) &&
         ((pcVar7[5] == 's' &&
          (((((pcVar7[6] == 'o' && (pcVar7[7] == 'c')) && (pcVar7[8] == 'k')) &&
            ((pcVar7[9] == 'e' && (pcVar7[10] == 't')))) && (pcVar7[0xb] == 's'))))))
      goto code_r0x000100784e08;
      break;
    case 0xd:
      if ((((*pcVar7 == 'e') && (((pcVar7[1] == 'n' && (pcVar7[2] == 'a')) && (pcVar7[3] == 'b'))))
          && (((pcVar7[4] == 'l' && (pcVar7[5] == 'e')) &&
              (((pcVar7[6] == '_' && ((pcVar7[7] == 's' && (pcVar7[8] == 'o')))) &&
               (pcVar7[9] == 'c')))))) &&
         (((pcVar7[10] == 'k' && (pcVar7[0xb] == 's')) && (pcVar7[0xc] == '5'))))
      goto code_r0x000100784c08;
      break;
    case 0x11:
      if (((((((*pcVar7 == 'e') && (pcVar7[1] == 'n')) && (pcVar7[2] == 'a')) &&
            ((pcVar7[3] == 'b' && (pcVar7[4] == 'l')))) &&
           ((pcVar7[5] == 'e' && ((pcVar7[6] == '_' && (pcVar7[7] == 's')))))) && (pcVar7[8] == 'o')
          ) && (((((pcVar7[9] == 'c' && (pcVar7[10] == 'k')) && (pcVar7[0xb] == 's')) &&
                 ((pcVar7[0xc] == '5' && (pcVar7[0xd] == '_')))) &&
                ((pcVar7[0xe] == 'u' && ((pcVar7[0xf] == 'd' && (pcVar7[0x10] == 'p'))))))))
      goto code_r0x0001007853c8;
      break;
    case 0x13:
      if ((((*pcVar7 == 'a') && (((pcVar7[1] == 'l' && (pcVar7[2] == 'l')) && (pcVar7[3] == 'o'))))
          && (((pcVar7[4] == 'w' && (pcVar7[5] == '_')) && (pcVar7[6] == 'l')))) &&
         (((((pcVar7[7] == 'o' && (pcVar7[8] == 'c')) &&
            ((pcVar7[9] == 'a' &&
             (((pcVar7[10] == 'l' && (pcVar7[0xb] == '_')) && (pcVar7[0xc] == 'b')))))) &&
           ((pcVar7[0xd] == 'i' && (pcVar7[0xe] == 'n')))) &&
          ((pcVar7[0xf] == 'd' &&
           (((pcVar7[0x10] == 'i' && (pcVar7[0x11] == 'n')) && (pcVar7[0x12] == 'g'))))))))
      goto code_r0x000100785598;
      break;
    case 0x14:
      if (((((*pcVar7 == 'a') && (pcVar7[1] == 'l')) &&
           ((pcVar7[2] == 'l' && (((pcVar7[3] == 'o' && (pcVar7[4] == 'w')) && (pcVar7[5] == '_'))))
           )) && (((pcVar7[6] == 'u' && (pcVar7[7] == 'p')) && (pcVar7[8] == 's')))) &&
         (((((pcVar7[9] == 't' && (pcVar7[10] == 'r')) &&
            ((pcVar7[0xb] == 'e' &&
             ((((pcVar7[0xc] == 'a' && (pcVar7[0xd] == 'm')) && (pcVar7[0xe] == '_')) &&
              ((pcVar7[0xf] == 'p' && (pcVar7[0x10] == 'r')))))))) && (pcVar7[0x11] == 'o')) &&
          ((pcVar7[0x12] == 'x' && (pcVar7[0x13] == 'y')))))) goto code_r0x000100784ef0;
      break;
    case 0x22:
      if (((((((*pcVar7 == 'd') && (pcVar7[1] == 'a')) && (pcVar7[2] == 'n')) &&
            (((pcVar7[3] == 'g' && (pcVar7[4] == 'e')) &&
             ((pcVar7[5] == 'r' && ((pcVar7[6] == 'o' && (pcVar7[7] == 'u')))))))) &&
           ((pcVar7[8] == 's' &&
            (((pcVar7[9] == 'l' && (pcVar7[10] == 'y')) && (pcVar7[0xb] == '_')))))) &&
          ((pcVar7[0xc] == 'a' && (pcVar7[0xd] == 'l')))) &&
         ((((pcVar7[0xe] == 'l' && ((pcVar7[0xf] == 'o' && (pcVar7[0x10] == 'w')))) &&
           ((pcVar7[0x11] == '_' &&
            ((((((pcVar7[0x12] == 'a' && (pcVar7[0x13] == 'l')) && (pcVar7[0x14] == 'l')) &&
               ((pcVar7[0x15] == '_' && (pcVar7[0x16] == 'u')))) && (pcVar7[0x17] == 'n')) &&
             (((pcVar7[0x18] == 'i' && (pcVar7[0x19] == 'x')) &&
              ((pcVar7[0x1a] == '_' &&
               (((pcVar7[0x1b] == 's' && (pcVar7[0x1c] == 'o')) && (pcVar7[0x1d] == 'c'))))))))))))
          && (((pcVar7[0x1e] == 'k' && (pcVar7[0x1f] == 'e')) &&
              ((pcVar7[0x20] == 't' && (pcVar7[0x21] == 's')))))))) goto code_r0x000100785460;
      break;
    case 0x24:
      if ((((((((((*pcVar7 == 'd') && (pcVar7[1] == 'a')) && (pcVar7[2] == 'n')) &&
               ((pcVar7[3] == 'g' && (pcVar7[4] == 'e')))) &&
              ((pcVar7[5] == 'r' && ((pcVar7[6] == 'o' && (pcVar7[7] == 'u')))))) &&
             (pcVar7[8] == 's')) &&
            (((((pcVar7[9] == 'l' && (pcVar7[10] == 'y')) && (pcVar7[0xb] == '_')) &&
              (((pcVar7[0xc] == 'a' && (pcVar7[0xd] == 'l')) &&
               ((pcVar7[0xe] == 'l' && ((pcVar7[0xf] == 'o' && (pcVar7[0x10] == 'w')))))))) &&
             (pcVar7[0x11] == '_')))) &&
           (((pcVar7[0x12] == 'n' && (pcVar7[0x13] == 'o')) && (pcVar7[0x14] == 'n')))) &&
          (((pcVar7[0x15] == '_' && (pcVar7[0x16] == 'l')) &&
           ((((pcVar7[0x17] == 'o' && ((pcVar7[0x18] == 'o' && (pcVar7[0x19] == 'p')))) &&
             (pcVar7[0x1a] == 'b')) &&
            ((((pcVar7[0x1b] == 'a' && (pcVar7[0x1c] == 'c')) && (pcVar7[0x1d] == 'k')) &&
             ((pcVar7[0x1e] == '_' && (pcVar7[0x1f] == 'p')))))))))) &&
         (((pcVar7[0x20] == 'r' && ((pcVar7[0x21] == 'o' && (pcVar7[0x22] == 'x')))) &&
          (pcVar7[0x23] == 'y')))) goto code_r0x000100785118;
    }
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_90);
    func_0x000107c041e8(&uStack_1b0,uStack_88,uStack_80,&UNK_10b222058,0xc);
    bStack_c8 = bStack_188;
    uStack_c7 = uStack_187;
    bStack_d0 = bStack_190;
    uStack_cf = uStack_18f;
    bStack_b8 = bStack_178;
    uStack_b7 = (undefined6)uStack_177;
    bStack_b1 = (byte)((uint7)uStack_177 >> 0x30);
    bStack_c0 = bStack_180;
    uStack_bf = uStack_17f;
    bStack_a8 = bStack_168;
    uStack_a7 = (undefined6)uStack_167;
    uStack_a1 = (undefined1)((uint7)uStack_167 >> 0x30);
    bStack_b0 = bStack_170;
    uStack_af = (undefined6)uStack_16f;
    uStack_a9 = (undefined1)((uint7)uStack_16f >> 0x30);
    uStack_a0 = uStack_160;
    bStack_e8 = bStack_1a8;
    uStack_e7 = uStack_1a7;
    uStack_f0 = uStack_1b0;
    bStack_d8 = bStack_198;
    uStack_d7 = uStack_197;
    bStack_e0 = bStack_1a0;
    uStack_df = uStack_19f;
    if ((uStack_90 & 0x7fffffffffffffff) != 0) {
      _free(uStack_88);
    }
    uVar12 = (ulong)bStack_e8;
    if (uStack_f0 == 2) goto LAB_100785668;
    goto LAB_100786418;
  }
  lVar13 = 8;
  lVar11 = 0x10;
LAB_100784a24:
  plVar9 = *(long **)(pbVar1 + lVar13);
  switch(*(undefined8 *)(pbVar1 + lVar11)) {
  case 4:
    if ((int)*plVar9 == 0x65646f6d) {
code_r0x000100784a6c:
      uVar12 = 8;
      goto code_r0x00010078565c;
    }
    break;
  case 7:
    if ((int)*plVar9 == 0x62616e65 && *(int *)((long)plVar9 + 3) == 0x64656c62) {
code_r0x0001007855a0:
      uVar12 = 0;
    }
    else {
      if ((int)*plVar9 != 0x616d6f64 || *(int *)((long)plVar9 + 3) != 0x736e6961) break;
code_r0x000100785658:
      uVar12 = 9;
    }
    goto code_r0x00010078565c;
  case 9:
    if (*plVar9 == 0x72755f79786f7270 && (char)plVar9[1] == 'l') {
code_r0x000100785608:
      uVar12 = 1;
    }
    else {
      if (*plVar9 != 0x72755f736b636f73 || (char)plVar9[1] != 'l') break;
code_r0x000100784e5c:
      uVar12 = 3;
    }
code_r0x00010078565c:
    bStack_e8 = (byte)uVar12;
    uStack_f0 = 2;
    goto LAB_100785668;
  case 0xc:
    if (*plVar9 == 0x636f735f78696e75 && (int)plVar9[1] == 0x7374656b) {
code_r0x000100784e08:
      uVar12 = 10;
      goto code_r0x00010078565c;
    }
    break;
  case 0xd:
    if (*plVar9 == 0x735f656c62616e65 && *(long *)((long)plVar9 + 5) == 0x35736b636f735f65) {
code_r0x000100784c08:
      uVar12 = 2;
      goto code_r0x00010078565c;
    }
    break;
  case 0x11:
    if ((*plVar9 == 0x735f656c62616e65 && plVar9[1] == 0x64755f35736b636f) && (char)plVar9[2] == 'p'
       ) {
code_r0x0001007853c8:
      uVar12 = 4;
      goto code_r0x00010078565c;
    }
    break;
  case 0x13:
    if ((*plVar9 == 0x6f6c5f776f6c6c61 && plVar9[1] == 0x646e69625f6c6163) &&
        *(long *)((long)plVar9 + 0xb) == 0x676e69646e69625f) {
code_r0x000100785598:
      uVar12 = 0xb;
      goto code_r0x00010078565c;
    }
    break;
  case 0x14:
    if ((*plVar9 == 0x70755f776f6c6c61 && plVar9[1] == 0x705f6d6165727473) &&
        (int)plVar9[2] == 0x79786f72) {
code_r0x000100784ef0:
      uVar12 = 5;
      goto code_r0x00010078565c;
    }
    break;
  case 0x22:
    if ((((*plVar9 == 0x756f7265676e6164 && plVar9[1] == 0x6f6c6c615f796c73) &&
         plVar9[2] == 0x6e755f6c6c615f77) && plVar9[3] == 0x656b636f735f7869) &&
        (short)plVar9[4] == 0x7374) {
code_r0x000100785460:
      uVar12 = 7;
      goto code_r0x00010078565c;
    }
    break;
  case 0x24:
    if ((((*plVar9 == 0x756f7265676e6164 && plVar9[1] == 0x6f6c6c615f796c73) &&
         plVar9[2] == 0x6f6c5f6e6f6e5f77) && plVar9[3] == 0x705f6b636162706f) &&
        (int)plVar9[4] == 0x79786f72) {
code_r0x000100785118:
      uVar12 = 6;
      goto code_r0x00010078565c;
    }
  }
  func_0x000107c041e8(&uStack_f0,plVar9,*(undefined8 *)(pbVar1 + lVar11),&UNK_10b222058,0xc);
LAB_10078544c:
  uVar12 = (ulong)bStack_e8;
  if (uStack_f0 != 2) {
LAB_100786418:
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(bStack_c8,uStack_cf);
    *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_d0,uStack_d7);
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(bStack_b8,uStack_bf);
    *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_c0,uStack_c7);
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(bStack_a8,CONCAT16(uStack_a9,uStack_af));
    *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_b0,CONCAT16(bStack_b1,uStack_b7));
    param_1[0xb] = uStack_a0;
    param_1[10] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,bStack_a8));
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(bStack_d8,uStack_df);
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_e0,uStack_e7);
    *(byte *)(param_1 + 2) = bStack_e8;
    param_1[1] = uStack_f0;
    *param_1 = 2;
    if ((uStack_110 != 2) && (uStack_110 != 0)) {
      if (uStack_108 == 0) {
        uStack_f8 = 0;
      }
      else {
        bStack_1a8 = 0;
        uStack_1a7 = 0;
        bStack_1a0 = (byte)uStack_108;
        uStack_19f = (undefined7)(uStack_108 >> 8);
        bStack_198 = (byte)uStack_100;
        uStack_197 = (undefined7)(uStack_100 >> 8);
        bStack_188 = 0;
        uStack_187 = 0;
        bStack_180 = bStack_1a0;
        uStack_17f = uStack_19f;
        bStack_178 = bStack_198;
        uStack_177 = uStack_197;
      }
      bStack_190 = uStack_108 != 0;
      uStack_1b0 = (ulong)bStack_190;
      uStack_18f = 0;
      bStack_170 = (byte)uStack_f8;
      uStack_16f = (undefined7)(uStack_f8 >> 8);
      while (FUN_100f3a554(&uStack_f0,&uStack_1b0), uStack_f0 != 0) {
        lVar11 = uStack_f0 + CONCAT71(uStack_df,bStack_e0) * 0x18;
        if (*(long *)(lVar11 + 8) != 0) {
          _free(*(undefined8 *)(lVar11 + 0x10));
        }
      }
    }
    if (uStack_130 != 2 && uStack_130 != 0) {
      if (lStack_128 == 0) {
        uStack_118 = 0;
      }
      else {
        bStack_1a8 = 0;
        uStack_1a7 = 0;
        bStack_1a0 = (byte)lStack_128;
        uStack_19f = (undefined7)((ulong)lStack_128 >> 8);
        bStack_198 = (byte)uStack_120;
        uStack_197 = (undefined7)((ulong)uStack_120 >> 8);
        bStack_188 = 0;
        uStack_187 = 0;
        bStack_180 = bStack_1a0;
        uStack_17f = uStack_19f;
        bStack_178 = bStack_198;
        uStack_177 = uStack_197;
      }
      bStack_190 = lStack_128 != 0;
      uStack_1b0 = (ulong)bStack_190;
      uStack_18f = 0;
      bStack_170 = (byte)uStack_118;
      uStack_16f = (undefined7)((ulong)uStack_118 >> 8);
      while (FUN_100f3a554(&uStack_f0,&uStack_1b0), uStack_f0 != 0) {
        lVar11 = uStack_f0 + CONCAT71(uStack_df,bStack_e0) * 0x18;
        if (*(long *)(lVar11 + 8) != 0) {
          _free(*(undefined8 *)(lVar11 + 0x10));
        }
      }
    }
    pbVar18 = pbVar1 + 0x40;
LAB_1007862f0:
    if (*param_1 != 2) {
      uStack_158 = param_1[0xb];
      uStack_160 = param_1[10];
      uStack_148 = param_1[0xd];
      uStack_150 = param_1[0xc];
      uStack_1b0 = *param_1;
      bStack_1a8 = (byte)param_1[1];
      uStack_1a7 = (undefined7)(param_1[1] >> 8);
      bStack_198 = (byte)param_1[3];
      uStack_197 = (undefined7)(param_1[3] >> 8);
      bStack_1a0 = (byte)param_1[2];
      uStack_19f = (undefined7)(param_1[2] >> 8);
      bStack_188 = (byte)param_1[5];
      uStack_187 = (undefined7)(param_1[5] >> 8);
      bStack_190 = (byte)param_1[4];
      uStack_18f = (undefined7)(param_1[4] >> 8);
      uStack_140 = param_1[0xe];
      bStack_178 = (byte)param_1[7];
      uStack_177 = (undefined7)(param_1[7] >> 8);
      bStack_180 = (byte)param_1[6];
      uStack_17f = (undefined7)(param_1[6] >> 8);
      bStack_168 = (byte)param_1[9];
      uStack_167 = (undefined7)(param_1[9] >> 8);
      bStack_170 = (byte)param_1[8];
      uStack_16f = (undefined7)(param_1[8] >> 8);
      if ((pbVar1 + (lVar2 * 0x40 - (long)pbVar18) == (byte *)0x0) ||
         (uStack_110 = uVar15,
         thunk_FUN_1087e427c(&uStack_f0,
                             uVar15 + ((ulong)(pbVar1 + (lVar2 * 0x40 - (long)pbVar18)) >> 6),
                             &uStack_110,&UNK_10b23a190), uStack_f0 == 2)) {
        uVar12 = CONCAT71(uStack_177,bStack_178);
        uVar15 = CONCAT71(uStack_17f,bStack_180);
        uVar21 = CONCAT71(uStack_167,bStack_168);
        uVar20 = CONCAT71(uStack_16f,bStack_170);
LAB_1007864c0:
        param_1[9] = uVar21;
        param_1[8] = uVar20;
        param_1[0xb] = uStack_158;
        param_1[10] = uStack_160;
        param_1[0xd] = uStack_148;
        param_1[0xc] = uStack_150;
        param_1[0xe] = uStack_140;
        param_1[1] = CONCAT71(uStack_1a7,bStack_1a8);
        *param_1 = uStack_1b0;
        param_1[3] = CONCAT71(uStack_197,bStack_198);
        param_1[2] = CONCAT71(uStack_19f,bStack_1a0);
        param_1[5] = CONCAT71(uStack_187,bStack_188);
        param_1[4] = CONCAT71(uStack_18f,bStack_190);
        param_1[7] = uVar12;
        param_1[6] = uVar15;
      }
      else {
        param_1[6] = CONCAT71(uStack_c7,bStack_c8);
        param_1[5] = CONCAT71(uStack_cf,bStack_d0);
        param_1[8] = CONCAT17(bStack_b1,CONCAT61(uStack_b7,bStack_b8));
        param_1[7] = CONCAT71(uStack_bf,bStack_c0);
        param_1[10] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,bStack_a8));
        param_1[9] = CONCAT17(uStack_a9,CONCAT61(uStack_af,bStack_b0));
        param_1[0xb] = uStack_a0;
        uVar15 = CONCAT71(uStack_e7,bStack_e8);
        uVar20 = CONCAT71(uStack_d7,bStack_d8);
        uVar12 = CONCAT71(uStack_df,bStack_e0);
LAB_10078707c:
        param_1[2] = uVar15;
        param_1[1] = uStack_f0;
        param_1[4] = uVar20;
        param_1[3] = uVar12;
        *param_1 = 2;
        FUN_100e3dea4(&uStack_1b0);
      }
    }
    return;
  }
LAB_100785668:
                    /* WARNING: Could not recover jumptable at 0x000100785680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100785684 + (ulong)(byte)(&UNK_108c9b0a8)[uVar12 & 0xffffffff] * 4))();
  return;
}

