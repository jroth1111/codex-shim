
/* WARNING: Removing unreachable block (ram,0x000100787ad8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100787470(long *param_1,char *param_2)

{
  byte *pbVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_130;
  byte bStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  byte bStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  byte bStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  byte bStack_f8;
  undefined6 uStack_f7;
  byte bStack_f1;
  undefined1 uStack_f0;
  undefined6 uStack_ef;
  undefined1 uStack_e9;
  byte bStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  long lStack_e0;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  if (*param_2 != '\x14') {
    if (*param_2 != '\x15') {
      thunk_FUN_108855bf0(param_1,param_2,auStack_71,&UNK_10b213aa8);
      return;
    }
    lVar18 = *(long *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    lVar10 = lVar18 + lVar12;
    if (*(long *)(param_2 + 0x18) == 0) {
      lVar15 = 0;
      uVar17 = 0x8000000000000001;
      lStack_198 = 0;
      bVar9 = 2;
    }
    else {
      lVar13 = 0;
      lVar15 = (lVar12 - 0x40U >> 6) + 1;
      bVar11 = 3;
      lVar14 = 1;
      uVar17 = 0x8000000000000001;
      do {
        pbVar1 = (byte *)(lVar18 + lVar13);
        pbVar16 = pbVar1 + 0x20;
        bVar9 = *pbVar1;
        if (bVar9 < 0xd) {
          if (bVar9 == 1) {
            bVar9 = *(byte *)(lVar18 + lVar13 + 1);
            if (bVar9 != 0) {
              if (bVar9 != 1) {
                uStack_c7 = 0;
                uStack_d0 = 1;
                bStack_c8 = bVar9;
                thunk_FUN_1087e3ee8(&lStack_130,&uStack_d0,&UNK_10b22d740,&UNK_10b20a590);
                goto LAB_100787580;
              }
              goto LAB_1007877c8;
            }
          }
          else {
            if (bVar9 != 4) {
              if (bVar9 != 0xc) goto LAB_100787868;
              piVar2 = *(int **)(lVar18 + lVar13 + 0x10);
              lVar8 = *(long *)(lVar18 + lVar13 + 0x18);
              goto joined_r0x000100787540;
            }
            lVar8 = *(long *)(lVar18 + lVar13 + 8);
            if (lVar8 != 0) {
              if (lVar8 != 1) {
                bStack_c8 = (byte)lVar8;
                uStack_c7 = (undefined7)((ulong)lVar8 >> 8);
                uStack_d0 = 1;
                thunk_FUN_1087e3ee8(&lStack_130,&uStack_d0,&UNK_10b22d740,&UNK_10b20a590);
                goto LAB_100787580;
              }
              goto LAB_1007877c8;
            }
          }
LAB_100787760:
          if (bVar11 == 3) {
            bVar9 = *pbVar16;
            bVar11 = 2;
            if (bVar9 != 0x10) {
              if (bVar9 == 0x11) {
                pcVar5 = *(char **)(lVar18 + lVar13 + 0x28);
                if (*pcVar5 == '\0') {
                  bVar11 = pcVar5[1];
                  goto LAB_100787858;
                }
                thunk_FUN_108855bf0(&uStack_d0,pcVar5,auStack_71,&UNK_10b20a560);
LAB_1007878b8:
                lVar8 = CONCAT71(uStack_cf,uStack_d0);
                bVar11 = bStack_c8;
                if (lVar8 != 2) {
                  bStack_108 = (byte)uStack_9f;
                  uStack_107 = (undefined7)(CONCAT17(bStack_98,uStack_9f) >> 8);
                  uStack_110 = (undefined1)uStack_a7;
                  uStack_10f = (undefined7)(CONCAT17(uStack_a0,uStack_a7) >> 8);
                  bStack_f8 = (byte)uStack_8f;
                  uStack_f7 = (undefined6)((uint7)uStack_8f >> 8);
                  uStack_100 = (undefined1)uStack_97;
                  uStack_ff = (undefined7)(CONCAT17(uStack_90,uStack_97) >> 8);
                  uStack_e9 = (undefined1)lStack_80;
                  bStack_e8 = (byte)((ulong)lStack_80 >> 8);
                  uStack_e7 = (undefined6)((ulong)lStack_80 >> 0x10);
                  bStack_f1 = bStack_88;
                  uStack_f0 = (undefined1)uStack_87;
                  uStack_ef = (undefined6)((uint7)uStack_87 >> 8);
                  lStack_130 = CONCAT17(uStack_c0,uStack_c7);
                  bStack_128 = (byte)uStack_bf;
                  uStack_127 = (undefined7)(CONCAT17(bStack_b8,uStack_bf) >> 8);
                  bStack_118 = (byte)uStack_af;
                  uStack_117 = (undefined7)(CONCAT17(bStack_a8,uStack_af) >> 8);
                  uStack_120 = (undefined1)uStack_b7;
                  uStack_11f = (undefined7)(CONCAT17(uStack_b0,uStack_b7) >> 8);
                }
              }
              else {
                if (bVar9 == 0x12) goto LAB_1007874f8;
                if (bVar9 != 0) {
                  thunk_FUN_108855bf0(&uStack_d0,pbVar16,auStack_71,&UNK_10b20a560);
                  goto LAB_1007878b8;
                }
                bVar11 = *(byte *)(lVar18 + lVar13 + 0x21);
LAB_100787858:
                lVar8 = 2;
              }
              if (lVar8 != 2) {
                *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_117,bStack_118);
                *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_11f,uStack_120);
                *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_107,bStack_108);
                *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_10f,uStack_110);
                *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_f1,CONCAT61(uStack_f7,bStack_f8))
                ;
                *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_ff,uStack_100);
                param_1[10] = CONCAT62(uStack_e7,CONCAT11(bStack_e8,uStack_e9));
                param_1[9] = CONCAT62(uStack_ef,CONCAT11(uStack_f0,bStack_f1));
                *(ulong *)((long)param_1 + 0x11) = CONCAT71(uStack_127,bStack_128);
                *(long *)((long)param_1 + 9) = lStack_130;
                *param_1 = lVar8;
                *(byte *)(param_1 + 1) = bVar11;
                goto joined_r0x000100787bf0;
              }
            }
            goto LAB_1007874f8;
          }
          thunk_FUN_1087e4364(&uStack_d0,&UNK_108ca2209,7);
          param_1[5] = CONCAT71(uStack_a7,bStack_a8);
          param_1[4] = CONCAT71(uStack_af,uStack_b0);
          param_1[7] = CONCAT71(uStack_97,bStack_98);
          param_1[6] = CONCAT71(uStack_9f,uStack_a0);
          param_1[9] = CONCAT71(uStack_87,bStack_88);
          param_1[8] = CONCAT71(uStack_8f,uStack_90);
          param_1[10] = lStack_80;
          param_1[1] = CONCAT71(uStack_c7,bStack_c8);
          *param_1 = CONCAT71(uStack_cf,uStack_d0);
          param_1[3] = CONCAT71(uStack_b7,bStack_b8);
          param_1[2] = CONCAT71(uStack_bf,uStack_c0);
joined_r0x000100787bf0:
          if (-0x7fffffffffffffff < (long)uVar17) {
joined_r0x000100787d58:
            if (uVar17 != 0) {
              _free(lStack_198);
            }
          }
LAB_100787c00:
          if (*param_1 != 2) {
            return;
          }
          lVar18 = lVar18 + lVar13 + 0x40;
          uVar3 = param_1[1];
          lStack_198 = param_1[2];
          lStack_130 = lVar14;
          goto joined_r0x000100787c20;
        }
        if (bVar9 == 0xd) {
          piVar2 = *(int **)(lVar18 + lVar13 + 8);
          lVar8 = *(long *)(lVar18 + lVar13 + 0x10);
joined_r0x000100787540:
          if (lVar8 == 7) {
            if (*piVar2 == 0x62616e65 && *(int *)((long)piVar2 + 3) == 0x64656c62)
            goto LAB_100787760;
            lVar8 = 7;
          }
          else if (lVar8 == 4) {
            if (*piVar2 == 0x68746170) goto LAB_1007877c8;
            lVar8 = 4;
          }
          func_0x000107c041e8(&lStack_130,piVar2,lVar8,&UNK_10b222118,2);
        }
        else {
          if (bVar9 == 0xe) {
            pcVar5 = *(char **)(lVar18 + 0x10 + lVar13);
            lVar8 = *(long *)(lVar18 + 0x18 + lVar13);
            if (lVar8 != 7) goto LAB_1007875d0;
LAB_10078766c:
            if (((((*pcVar5 == 'e') && (pcVar5[1] == 'n')) && (pcVar5[2] == 'a')) &&
                ((pcVar5[3] == 'b' && (pcVar5[4] == 'l')))) &&
               ((pcVar5[5] == 'e' && (pcVar5[6] == 'd')))) goto LAB_100787760;
          }
          else {
            if (bVar9 != 0xf) {
LAB_100787868:
              thunk_FUN_108855bf0(&lStack_130,pbVar1,auStack_71,&UNK_10b2150c8);
              goto LAB_100787580;
            }
            pcVar5 = *(char **)(lVar18 + 8 + lVar13);
            lVar8 = *(long *)(lVar18 + 0x10 + lVar13);
            if (lVar8 == 7) goto LAB_10078766c;
LAB_1007875d0:
            if ((((lVar8 == 4) && (*pcVar5 == 'p')) && (pcVar5[1] == 'a')) &&
               ((pcVar5[2] == 't' && (pcVar5[3] == 'h')))) goto LAB_1007877c8;
          }
          __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_180);
          uVar7 = uStack_178;
          uVar3 = uStack_180;
          func_0x000107c041e8(&uStack_d0,uStack_178,uStack_170,&UNK_10b222118,2);
          bStack_108 = bStack_a8;
          uStack_107 = uStack_a7;
          uStack_110 = uStack_b0;
          uStack_10f = uStack_af;
          bStack_f8 = bStack_98;
          uStack_f7 = (undefined6)uStack_97;
          bStack_f1 = (byte)((uint7)uStack_97 >> 0x30);
          uStack_100 = uStack_a0;
          uStack_ff = uStack_9f;
          bStack_e8 = bStack_88;
          uStack_e7 = (undefined6)uStack_87;
          uStack_e1 = (undefined1)((uint7)uStack_87 >> 0x30);
          uStack_f0 = uStack_90;
          uStack_ef = (undefined6)uStack_8f;
          uStack_e9 = (undefined1)((uint7)uStack_8f >> 0x30);
          lStack_e0 = lStack_80;
          lStack_130 = CONCAT71(uStack_cf,uStack_d0);
          bStack_128 = bStack_c8;
          uStack_127 = uStack_c7;
          bStack_118 = bStack_b8;
          uStack_117 = uStack_b7;
          uStack_120 = uStack_c0;
          uStack_11f = uStack_bf;
          if ((uVar3 & 0x7fffffffffffffff) != 0) {
            _free(uVar7);
          }
        }
LAB_100787580:
        if (lStack_130 != 2) {
          *(ulong *)((long)param_1 + 0x21) = CONCAT17(bStack_108,uStack_10f);
          *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_110,uStack_117);
          *(ulong *)((long)param_1 + 0x31) = CONCAT17(bStack_f8,uStack_ff);
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_100,uStack_107);
          *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_e8,CONCAT16(uStack_e9,uStack_ef));
          *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_f0,CONCAT16(bStack_f1,uStack_f7));
          param_1[10] = lStack_e0;
          param_1[9] = CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
          *(ulong *)((long)param_1 + 0x11) = CONCAT17(bStack_118,uStack_11f);
          *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_120,uStack_127);
          *param_1 = lStack_130;
          *(byte *)(param_1 + 1) = bStack_128;
          goto joined_r0x000100787bf0;
        }
        if ((bStack_128 & 1) == 0) goto LAB_100787760;
LAB_1007877c8:
        if (uVar17 != 0x8000000000000001) {
          thunk_FUN_1087e4364(&uStack_d0,&UNK_108c61038,4);
          param_1[5] = CONCAT71(uStack_a7,bStack_a8);
          param_1[4] = CONCAT71(uStack_af,uStack_b0);
          param_1[7] = CONCAT71(uStack_97,bStack_98);
          param_1[6] = CONCAT71(uStack_9f,uStack_a0);
          param_1[9] = CONCAT71(uStack_87,bStack_88);
          param_1[8] = CONCAT71(uStack_8f,uStack_90);
          param_1[10] = lStack_80;
          param_1[1] = CONCAT71(uStack_c7,bStack_c8);
          *param_1 = CONCAT71(uStack_cf,uStack_d0);
          param_1[3] = CONCAT71(uStack_b7,bStack_b8);
          param_1[2] = CONCAT71(uStack_bf,uStack_c0);
          uVar17 = uVar17 & 0x7fffffffffffffff;
          goto joined_r0x000100787d58;
        }
        bVar9 = *pbVar16;
        uVar17 = 0x8000000000000000;
        if (bVar9 != 0x10) {
          if (bVar9 == 0x11) {
            func_0x0001004e0914(&uStack_d0,*(undefined8 *)(lVar18 + lVar13 + 0x28));
          }
          else {
            if (bVar9 == 0x12) goto LAB_1007874f8;
            func_0x0001004e0914(&uStack_d0,pbVar16);
          }
          lVar8 = CONCAT71(uStack_cf,uStack_d0);
          if (lVar8 != 2) {
            lStack_130 = CONCAT71(uStack_af,uStack_b0);
            bStack_128 = bStack_a8;
            uStack_127 = uStack_a7;
            bStack_118 = bStack_98;
            uStack_117 = uStack_97;
            uStack_120 = uStack_a0;
            uStack_11f = uStack_9f;
            bStack_108 = bStack_88;
            uStack_107 = uStack_87;
            uStack_110 = uStack_90;
            uStack_10f = uStack_8f;
            uStack_100 = (undefined1)lStack_80;
            uStack_ff = (undefined7)((ulong)lStack_80 >> 8);
          }
          uVar17 = CONCAT71(uStack_c7,bStack_c8);
          lStack_198 = CONCAT71(uStack_bf,uStack_c0);
          unaff_x21 = CONCAT71(uStack_b7,bStack_b8);
          if (lVar8 == 2) goto LAB_1007874f8;
          param_1[5] = CONCAT71(uStack_127,bStack_128);
          param_1[4] = lStack_130;
          param_1[7] = CONCAT71(uStack_117,bStack_118);
          param_1[6] = CONCAT71(uStack_11f,uStack_120);
          param_1[9] = CONCAT71(uStack_107,bStack_108);
          param_1[8] = CONCAT71(uStack_10f,uStack_110);
          param_1[10] = CONCAT71(uStack_ff,uStack_100);
          *param_1 = lVar8;
          param_1[1] = uVar17;
          param_1[2] = lStack_198;
          param_1[3] = unaff_x21;
          goto LAB_100787c00;
        }
LAB_1007874f8:
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x40;
      } while (lVar12 - lVar13 != 0);
      lVar18 = lVar10;
      bVar9 = 2;
      if (bVar11 != 3) {
        bVar9 = bVar11;
      }
    }
    uVar3 = 0x8000000000000000;
    if (uVar17 != 0x8000000000000001) {
      uVar3 = uVar17;
    }
    param_1[2] = lStack_198;
    param_1[3] = unaff_x21;
    *(byte *)(param_1 + 4) = bVar9;
    *param_1 = 2;
    param_1[1] = uVar3;
    lStack_130 = lVar15;
joined_r0x000100787c20:
    if ((lVar10 - lVar18 != 0) &&
       (thunk_FUN_1087e427c(&uStack_d0,lStack_130 + ((ulong)(lVar10 - lVar18) >> 6),&lStack_130,
                            &UNK_10b23a190), CONCAT71(uStack_cf,uStack_d0) != 2)) {
      param_1[5] = CONCAT71(uStack_a7,bStack_a8);
      param_1[4] = CONCAT71(uStack_af,uStack_b0);
      param_1[7] = CONCAT71(uStack_97,bStack_98);
      param_1[6] = CONCAT71(uStack_9f,uStack_a0);
      param_1[9] = CONCAT71(uStack_87,bStack_88);
      param_1[8] = CONCAT71(uStack_8f,uStack_90);
      param_1[10] = lStack_80;
      param_1[1] = CONCAT71(uStack_c7,bStack_c8);
      *param_1 = CONCAT71(uStack_cf,uStack_d0);
      param_1[3] = CONCAT71(uStack_b7,bStack_b8);
      param_1[2] = CONCAT71(uStack_bf,uStack_c0);
      if ((uVar3 & 0x7fffffffffffffff) == 0) {
        return;
      }
      _free(lStack_198);
      return;
    }
    goto LAB_1007879c0;
  }
  pcVar5 = *(char **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18);
  if (lVar18 == 0) {
    uVar7 = 0;
    lVar10 = 0;
    pcVar6 = pcVar5;
LAB_100787c88:
    thunk_FUN_1087e427c(param_1,uVar7,&UNK_10b22f398,&UNK_10b20a590);
    if (*param_1 != 2) {
      return;
    }
    uVar17 = param_1[1];
    lVar18 = lVar18 * 0x20 - (long)pcVar6;
    lStack_130 = lVar10;
  }
  else {
    cVar4 = *pcVar5;
    if (cVar4 != '\x10') {
      if (cVar4 == '\x11') {
        pcVar6 = *(char **)(pcVar5 + 8);
        if (*pcVar6 == '\0') {
          bVar9 = pcVar6[1];
          goto LAB_100787a04;
        }
LAB_100787de8:
        thunk_FUN_108855bf0(&uStack_d0,pcVar6,auStack_71,&UNK_10b20a560);
        lVar10 = CONCAT71(uStack_cf,uStack_d0);
        bVar9 = bStack_c8;
        if (lVar10 != 2) {
          bStack_108 = (byte)uStack_9f;
          uStack_107 = (undefined7)(CONCAT17(bStack_98,uStack_9f) >> 8);
          uStack_110 = (undefined1)uStack_a7;
          uStack_10f = (undefined7)(CONCAT17(uStack_a0,uStack_a7) >> 8);
          bStack_f8 = (byte)uStack_8f;
          uStack_f7 = (undefined6)((uint7)uStack_8f >> 8);
          uStack_100 = (undefined1)uStack_97;
          uStack_ff = (undefined7)(CONCAT17(uStack_90,uStack_97) >> 8);
          uStack_e9 = (undefined1)lStack_80;
          bStack_e8 = (byte)((ulong)lStack_80 >> 8);
          uStack_e7 = (undefined6)((ulong)lStack_80 >> 0x10);
          bStack_f1 = bStack_88;
          uStack_f0 = (undefined1)uStack_87;
          uStack_ef = (undefined6)((uint7)uStack_87 >> 8);
          lStack_130 = CONCAT17(uStack_c0,uStack_c7);
          bStack_128 = (byte)uStack_bf;
          uStack_127 = (undefined7)(CONCAT17(bStack_b8,uStack_bf) >> 8);
          bStack_118 = (byte)uStack_af;
          uStack_117 = (undefined7)(CONCAT17(bStack_a8,uStack_af) >> 8);
          uStack_120 = (undefined1)uStack_b7;
          uStack_11f = (undefined7)(CONCAT17(uStack_b0,uStack_b7) >> 8);
        }
      }
      else {
        if (cVar4 == '\x12') goto LAB_10078791c;
        pcVar6 = pcVar5;
        if (cVar4 != '\0') goto LAB_100787de8;
        bVar9 = pcVar5[1];
LAB_100787a04:
        lVar10 = 2;
      }
      if (lVar10 != 2) {
        *(ulong *)((long)param_1 + 0x21) = CONCAT71(uStack_117,bStack_118);
        *(ulong *)((long)param_1 + 0x19) = CONCAT71(uStack_11f,uStack_120);
        *(ulong *)((long)param_1 + 0x31) = CONCAT71(uStack_107,bStack_108);
        *(ulong *)((long)param_1 + 0x29) = CONCAT71(uStack_10f,uStack_110);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(bStack_f1,CONCAT61(uStack_f7,bStack_f8));
        *(ulong *)((long)param_1 + 0x39) = CONCAT71(uStack_ff,uStack_100);
        param_1[10] = CONCAT62(uStack_e7,CONCAT11(bStack_e8,uStack_e9));
        param_1[9] = CONCAT62(uStack_ef,CONCAT11(uStack_f0,bStack_f1));
        *(ulong *)((long)param_1 + 0x11) = CONCAT71(uStack_127,bStack_128);
        *(long *)((long)param_1 + 9) = lStack_130;
        *param_1 = lVar10;
        *(byte *)(param_1 + 1) = bVar9;
        return;
      }
      if (bVar9 != 3) goto LAB_100787920;
      uVar7 = 0;
LAB_100787c84:
      lVar10 = 1;
      pcVar6 = pcVar5 + 0x20;
      goto LAB_100787c88;
    }
LAB_10078791c:
    bVar9 = 2;
LAB_100787920:
    if (lVar18 == 1) {
      uVar7 = 1;
      goto LAB_100787c84;
    }
    cVar4 = pcVar5[0x20];
    if (cVar4 == '\x10') {
LAB_100787948:
      uVar17 = 0x8000000000000000;
    }
    else {
      if (cVar4 == '\x11') {
        func_0x0001004e0914(&uStack_d0,*(undefined8 *)(pcVar5 + 0x28));
        lVar10 = CONCAT71(uStack_cf,uStack_d0);
        uVar17 = CONCAT71(uStack_c7,bStack_c8);
        if (lVar10 == 2) {
          lStack_130 = CONCAT71(uStack_bf,uStack_c0);
        }
        else {
          uStack_f7 = (undefined6)uStack_87;
          bStack_f1 = (byte)((uint7)uStack_87 >> 0x30);
          uStack_f0 = (undefined1)lStack_80;
          uStack_ef = (undefined6)((ulong)lStack_80 >> 8);
          uStack_e9 = (undefined1)((ulong)lStack_80 >> 0x38);
          lStack_130 = CONCAT71(uStack_bf,uStack_c0);
LAB_100787b70:
          uStack_120 = uStack_b0;
          uStack_11f = uStack_af;
          bStack_118 = bStack_a8;
          uStack_117 = uStack_a7;
          uStack_110 = uStack_a0;
          uStack_10f = uStack_9f;
          bStack_108 = bStack_98;
          uStack_107 = uStack_97;
          uStack_100 = uStack_90;
          uStack_ff = uStack_8f;
          bStack_f8 = bStack_88;
          if (lVar10 != 2) {
            param_1[7] = CONCAT71(uStack_97,bStack_98);
            param_1[6] = CONCAT71(uStack_9f,uStack_a0);
            param_1[9] = CONCAT17(bStack_f1,CONCAT61(uStack_f7,bStack_88));
            param_1[8] = CONCAT71(uStack_8f,uStack_90);
            param_1[10] = CONCAT17(uStack_e9,CONCAT61(uStack_ef,uStack_f0));
            param_1[3] = CONCAT71(uStack_b7,bStack_b8);
            param_1[2] = lStack_130;
            param_1[5] = CONCAT71(uStack_a7,bStack_a8);
            param_1[4] = CONCAT71(uStack_af,uStack_b0);
            *param_1 = lVar10;
            param_1[1] = uVar17;
            return;
          }
        }
      }
      else {
        if (cVar4 == '\x12') goto LAB_100787948;
        func_0x0001004e0914(&uStack_d0,pcVar5 + 0x20);
        lVar10 = CONCAT71(uStack_cf,uStack_d0);
        uVar17 = CONCAT71(uStack_c7,bStack_c8);
        if (lVar10 != 2) {
          uStack_f7 = (undefined6)uStack_87;
          bStack_f1 = (byte)((uint7)uStack_87 >> 0x30);
          uStack_f0 = (undefined1)lStack_80;
          uStack_ef = (undefined6)((ulong)lStack_80 >> 8);
          uStack_e9 = (undefined1)((ulong)lStack_80 >> 0x38);
          lStack_130 = CONCAT71(uStack_bf,uStack_c0);
          goto LAB_100787b70;
        }
        lStack_130 = CONCAT71(uStack_bf,uStack_c0);
      }
      lStack_188 = CONCAT71(uStack_b7,bStack_b8);
      lStack_190 = lStack_130;
      bStack_128 = bStack_b8;
      uStack_127 = uStack_b7;
      if (uVar17 == 0x8000000000000001) {
        lVar10 = 2;
        uVar7 = 1;
        pcVar6 = pcVar5 + 0x40;
        goto LAB_100787c88;
      }
    }
    param_1[3] = lStack_188;
    param_1[2] = lStack_190;
    *(byte *)(param_1 + 4) = bVar9;
    lStack_130 = 2;
    *param_1 = 2;
    param_1[1] = uVar17;
    lVar18 = lVar18 * 0x20 - (long)(pcVar5 + 0x40);
  }
  if (pcVar5 + lVar18 != (char *)0x0) {
    lVar10 = param_1[2];
    thunk_FUN_1087e427c(&uStack_d0,lStack_130 + ((ulong)(pcVar5 + lVar18) >> 5),&lStack_130,
                        &UNK_10b23a1b0);
    if (CONCAT71(uStack_cf,uStack_d0) != 2) {
      param_1[5] = CONCAT71(uStack_a7,bStack_a8);
      param_1[4] = CONCAT71(uStack_af,uStack_b0);
      param_1[7] = CONCAT71(uStack_97,bStack_98);
      param_1[6] = CONCAT71(uStack_9f,uStack_a0);
      param_1[9] = CONCAT71(uStack_87,bStack_88);
      param_1[8] = CONCAT71(uStack_8f,uStack_90);
      param_1[10] = lStack_80;
      param_1[1] = CONCAT71(uStack_c7,bStack_c8);
      *param_1 = CONCAT71(uStack_cf,uStack_d0);
      param_1[3] = CONCAT71(uStack_b7,bStack_b8);
      param_1[2] = CONCAT71(uStack_bf,uStack_c0);
      if ((uVar17 & 0x7fffffffffffffff) == 0) {
        return;
      }
      _free(lVar10);
      return;
    }
  }
LAB_1007879c0:
  *param_1 = 2;
  return;
}

