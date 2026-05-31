
/* WARNING: Type propagation algorithm not settling */

void FUN_1039989dc(undefined8 *param_1,long ******param_2)

{
  char cVar1;
  byte bVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  bool bVar6;
  undefined8 uVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *****ppppplVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  long *******extraout_x9;
  long *******extraout_x9_00;
  long *******extraout_x9_01;
  long *******extraout_x9_02;
  long *******extraout_x9_03;
  long *******extraout_x9_04;
  long *******extraout_x9_05;
  long *******extraout_x9_06;
  long *******extraout_x9_07;
  long *******extraout_x9_08;
  long *******extraout_x9_09;
  long *******extraout_x9_10;
  long *******extraout_x10;
  long *******extraout_x10_00;
  long *******extraout_x10_01;
  long *******extraout_x10_02;
  long *******extraout_x10_03;
  long *******extraout_x10_04;
  long *******extraout_x10_05;
  long *******extraout_x10_06;
  long *******extraout_x10_07;
  long *******ppppppplVar14;
  long *******extraout_x10_08;
  long *******extraout_x10_09;
  long *******extraout_x10_10;
  long *******extraout_x11;
  long *******extraout_x11_00;
  long *******extraout_x11_01;
  long *******extraout_x11_02;
  long *******extraout_x11_03;
  long *******extraout_x12;
  long *******extraout_x12_00;
  long *******extraout_x12_01;
  long *******extraout_x12_02;
  long *******extraout_x12_03;
  long *******extraout_x12_04;
  long *******extraout_x12_05;
  long *******extraout_x12_06;
  long *******extraout_x12_07;
  long *******extraout_x12_08;
  long *******extraout_x12_09;
  long *******extraout_x12_10;
  long *******unaff_x23;
  long *******unaff_x24;
  long *******ppppppplVar15;
  long *******unaff_x25;
  long *******unaff_x27;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long ******pppppplStack_188;
  undefined1 uStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined8 uStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long ******pppppplStack_a0;
  undefined1 uStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  undefined1 auStack_71 [17];
  
  ppppplVar11 = param_2[5];
  if (ppppplVar11 < param_2[4]) {
    do {
      bVar2 = *(byte *)((long)param_2[3] + (long)ppppplVar11);
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if (bVar2 != 0x5b) {
          ppppppplVar10 = (long *******)FUN_10894fd58(param_2,auStack_71,&UNK_10b2d5d48);
          goto LAB_103999394;
        }
        cVar1 = *(char *)(param_2 + 9);
        *(char *)(param_2 + 9) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          param_2[5] = (long *****)((long)ppppplVar11 + 1);
          uStack_180 = 1;
          ppppppplStack_178 = (long *******)0x0;
          ppppppplStack_170 = (long *******)0x8;
          ppppppplStack_168 = (long *******)0x0;
          pppppplStack_188 = param_2;
          goto LAB_103998aa8;
        }
        uStack_110 = (long *******)0x18;
        goto LAB_103998a4c;
      }
      ppppplVar11 = (long *****)((long)ppppplVar11 + 1);
      param_2[5] = ppppplVar11;
    } while (param_2[4] != ppppplVar11);
  }
  uStack_110 = (long *******)0x5;
LAB_103998a4c:
  uVar7 = FUN_10894f97c(param_2,&uStack_110);
  goto LAB_1039993a0;
LAB_103998aa8:
  FUN_103982584(&uStack_110,&pppppplStack_188);
  pppppplVar3 = pppppplStack_188;
  ppppppplVar14 = ppppppplStack_170;
  ppppppplVar9 = ppppppplStack_168;
  ppppppplVar10 = ppppppplStack_170;
  ppppppplVar8 = ppppppplStack_108;
  if ((char)uStack_110 == '\x01') goto joined_r0x000103999284;
  ppppppplVar8 = ppppppplStack_170;
  ppppppplVar14 = ppppppplStack_178;
  ppppppplVar10 = ppppppplStack_168;
  if (uStack_110._1_1_ != '\x01') goto LAB_10399929c;
  ppppplVar11 = pppppplStack_188[5];
  if (pppppplStack_188[4] <= ppppplVar11) {
LAB_103999228:
    uStack_110 = (long *******)0x5;
    ppppppplVar8 = (long *******)FUN_10894f97c(pppppplStack_188,&uStack_110);
    ppppppplVar14 = ppppppplStack_170;
    ppppppplVar9 = ppppppplStack_168;
    ppppppplVar10 = ppppppplStack_170;
    goto joined_r0x000103999284;
  }
  while (bVar2 = *(byte *)((long)pppppplStack_188[3] + (long)ppppplVar11),
        bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
    ppppplVar11 = (long *****)((long)ppppplVar11 + 1);
    pppppplStack_188[5] = ppppplVar11;
    if (pppppplStack_188[4] == ppppplVar11) goto LAB_103999228;
  }
  if (bVar2 != 0x5b) {
    if (bVar2 == 0x7b) {
      cVar1 = *(char *)(pppppplStack_188 + 9);
      *(char *)(pppppplStack_188 + 9) = cVar1 + -1;
      if ((char)(cVar1 + -1) != '\0') {
        pppppplStack_188[5] = (long *****)((long)ppppplVar11 + 1);
        pppppplStack_a0 = pppppplStack_188;
        uStack_98 = 1;
        unaff_x25 = (long *******)0x8000000000000000;
        ppppppplStack_190 = (long *******)0x8000000000000001;
LAB_103998b50:
        do {
          FUN_103982194(&uStack_110,&pppppplStack_a0);
          pppppplVar13 = pppppplStack_a0;
          ppppppplVar8 = ppppppplStack_108;
          ppppppplVar10 = ppppppplStack_1a0;
          ppppppplVar14 = extraout_x10;
          ppppppplVar9 = extraout_x12;
          ppppppplVar15 = ppppppplStack_190;
          ppppppplVar12 = unaff_x25;
          ppppppplVar4 = ppppppplStack_1a0;
          ppppppplVar5 = ppppppplStack_198;
          if ((char)uStack_110 == '\x01') break;
          if (uStack_110._1_1_ != '\x01') {
            ppppppplVar10 = (long *******)0x8000000000000000;
            if (ppppppplStack_190 != (long *******)0x8000000000000001) {
              ppppppplVar10 = ppppppplStack_190;
            }
            bVar6 = unaff_x25 != (long *******)0x8000000000000000;
            ppppppplVar12 = (long *******)0x0;
            if (bVar6) {
              ppppppplVar12 = unaff_x25;
            }
            ppppppplVar8 = (long *******)0x8;
            if (bVar6) {
              ppppppplVar8 = ppppppplStack_1a0;
            }
            ppppppplVar14 = (long *******)0x0;
            ppppppplVar9 = ppppppplStack_1a8;
            if (bVar6) {
              ppppppplVar14 = ppppppplStack_198;
            }
            goto LAB_103998f30;
          }
          pppppplStack_a0[5] = (long *****)((long)pppppplStack_a0[5] + 1);
          pppppplStack_a0[2] = (long *****)0x0;
          __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                    (&uStack_110,pppppplStack_a0 + 3,pppppplStack_a0);
          ppppppplVar8 = ppppppplStack_108;
          ppppppplVar14 = extraout_x10_00;
          ppppppplVar9 = extraout_x12_00;
          ppppppplVar12 = unaff_x25;
          ppppppplVar4 = ppppppplStack_1a0;
          ppppppplVar5 = ppppppplStack_198;
          if (uStack_110 == (long *******)0x2) break;
          if (ppppppplStack_100 == (long *******)0x5) {
            if (*(int *)ppppppplStack_108 == 0x6b6f6f68 &&
                *(char *)((long)ppppppplStack_108 + 4) == 's') {
              if (unaff_x25 != (long *******)0x8000000000000000) {
                ppppppplStack_88 = ppppppplStack_1a0;
                ppppppplStack_80 = ppppppplStack_198;
                ppppppplStack_d0 = (long *******)&UNK_108d96207;
                ppppppplStack_c8 = (long *******)0x5;
                uStack_110 = (long *******)&ppppppplStack_d0;
                ppppppplStack_108 = (long *******)&DAT_103925cd0;
                ppppppplStack_90 = unaff_x25;
                ppppppplVar8 = (long *******)
                               FUN_1089510d0(s_duplicate_field_____108ac2973,&uStack_110);
                goto LAB_103998ee8;
              }
              ppppplVar11 = pppppplVar13[5];
              if (ppppplVar11 < pppppplVar13[4]) {
                while( true ) {
                  bVar2 = *(byte *)((long)pppppplVar13[3] + (long)ppppplVar11);
                  if (0x3a < bVar2) goto LAB_103999200;
                  if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
                  ppppplVar11 = (long *****)((long)ppppplVar11 + 1);
                  pppppplVar13[5] = ppppplVar11;
                  if (pppppplVar13[4] == ppppplVar11) goto LAB_10399909c;
                }
                if ((ulong)bVar2 == 0x3a) {
                  pppppplVar13[5] = (long *****)((long)ppppplVar11 + 1);
                  func_0x0001039847cc(&ppppppplStack_d0,pppppplVar13);
                  if (ppppppplStack_d0 == (long *******)0x8000000000000000) {
                    ppppppplStack_88 = ppppppplStack_1a0;
                    ppppppplStack_80 = ppppppplStack_198;
                    ppppppplVar8 = ppppppplStack_c8;
                    ppppppplVar14 = extraout_x10_03;
                    ppppppplVar9 = extraout_x12_03;
                    ppppppplStack_90 = unaff_x25;
                    goto LAB_103998efc;
                  }
                  ppppppplStack_1a0 = ppppppplStack_c8;
                  ppppppplStack_198 = ppppppplStack_c0;
                  unaff_x25 = ppppppplStack_d0;
                  goto LAB_103998b50;
                }
LAB_103999200:
                ppppppplStack_88 = ppppppplStack_1a0;
                ppppppplStack_80 = ppppppplStack_198;
                uStack_110 = (long *******)0x6;
                ppppppplStack_90 = unaff_x25;
                ppppppplVar8 = (long *******)FUN_10894f97c(pppppplVar13,&uStack_110);
                ppppppplVar10 = extraout_x9_10;
                ppppppplVar14 = extraout_x10_10;
                ppppppplVar9 = extraout_x12_10;
              }
              else {
LAB_10399909c:
                ppppppplStack_88 = ppppppplStack_1a0;
                ppppppplStack_80 = ppppppplStack_198;
                uStack_110 = (long *******)0x3;
                ppppppplStack_90 = unaff_x25;
                ppppppplVar8 = (long *******)FUN_10894f97c(pppppplVar13,&uStack_110);
                ppppppplVar10 = extraout_x9_06;
                ppppppplVar14 = extraout_x10_06;
                ppppppplVar9 = extraout_x12_06;
              }
              unaff_x25 = (long *******)0x8000000000000000;
              goto LAB_103998efc;
            }
          }
          else if ((ppppppplStack_100 == (long *******)0x7) &&
                  (*(int *)ppppppplStack_108 == 0x6374616d &&
                   *(int *)((long)ppppppplStack_108 + 3) == 0x72656863)) {
            if (ppppppplStack_190 != (long *******)0x8000000000000001) {
              ppppppplStack_88 = ppppppplStack_1a0;
              ppppppplStack_80 = ppppppplStack_198;
              ppppppplStack_d0 = (long *******)&UNK_108d9620c;
              ppppppplStack_c8 = (long *******)0x7;
              uStack_110 = (long *******)&ppppppplStack_d0;
              ppppppplStack_108 = (long *******)&DAT_103925cd0;
              ppppppplStack_90 = unaff_x25;
              ppppppplVar8 = (long *******)
                             FUN_1089510d0(s_duplicate_field_____108ac2973,&uStack_110);
              ppppppplVar10 = extraout_x9_08;
              ppppppplVar14 = extraout_x10_08;
              ppppppplVar9 = extraout_x12_08;
              ppppppplVar12 = ppppppplStack_90;
              ppppppplVar4 = ppppppplStack_88;
              ppppppplVar5 = ppppppplStack_80;
              break;
            }
            ppppplVar11 = pppppplVar13[5];
            if (ppppplVar11 < pppppplVar13[4]) {
              while( true ) {
                bVar2 = *(byte *)((long)pppppplVar13[3] + (long)ppppplVar11);
                if (0x3a < bVar2) goto LAB_1039991d4;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
                ppppplVar11 = (long *****)((long)ppppplVar11 + 1);
                pppppplVar13[5] = ppppplVar11;
                if (pppppplVar13[4] == ppppplVar11) goto LAB_1039990cc;
              }
              if ((ulong)bVar2 == 0x3a) {
                pppppplVar13[5] = (long *****)((long)ppppplVar11 + 1);
                FUN_10399b988(&ppppppplStack_d0,pppppplVar13);
                if (ppppppplStack_d0 != (long *******)0x8000000000000001) {
                  ppppppplStack_190 = ppppppplStack_d0;
                  ppppppplStack_1a8 = ppppppplStack_c0;
                  unaff_x27 = ppppppplStack_c8;
                  goto LAB_103998b50;
                }
                ppppppplStack_88 = ppppppplStack_1a0;
                ppppppplStack_80 = ppppppplStack_198;
                ppppppplVar8 = ppppppplStack_c8;
                ppppppplVar14 = extraout_x10_02;
                ppppppplVar9 = extraout_x12_02;
                ppppppplStack_90 = unaff_x25;
              }
              else {
LAB_1039991d4:
                ppppppplStack_88 = ppppppplStack_1a0;
                ppppppplStack_80 = ppppppplStack_198;
                ppppppplStack_190 = (long *******)0x8000000000000001;
                uStack_110 = (long *******)0x6;
                ppppppplStack_90 = unaff_x25;
                ppppppplVar8 = (long *******)FUN_10894f97c(pppppplVar13,&uStack_110);
                ppppppplVar10 = extraout_x9_09;
                ppppppplVar14 = extraout_x10_09;
                ppppppplVar9 = extraout_x12_09;
              }
            }
            else {
LAB_1039990cc:
              ppppppplStack_88 = ppppppplStack_1a0;
              ppppppplStack_80 = ppppppplStack_198;
              ppppppplStack_190 = (long *******)0x8000000000000001;
              uStack_110 = (long *******)0x3;
              ppppppplStack_90 = unaff_x25;
              ppppppplVar8 = (long *******)FUN_10894f97c(pppppplVar13,&uStack_110);
              ppppppplVar10 = extraout_x9_07;
              ppppppplVar14 = extraout_x10_07;
              ppppppplVar9 = extraout_x12_07;
            }
            ppppppplVar15 = (long *******)0x8000000000000001;
            ppppppplVar12 = ppppppplStack_90;
            ppppppplVar4 = ppppppplStack_88;
            ppppppplVar5 = ppppppplStack_80;
            break;
          }
          ppppppplVar8 = (long *******)FUN_103891e88(pppppplVar13);
          ppppppplVar14 = extraout_x10_01;
          ppppppplVar9 = extraout_x12_01;
          ppppppplVar12 = unaff_x25;
          ppppppplVar4 = ppppppplStack_1a0;
          ppppppplVar5 = ppppppplStack_198;
        } while (ppppppplVar8 == (long *******)0x0);
        ppppppplStack_80 = ppppppplVar5;
        ppppppplStack_88 = ppppppplVar4;
        ppppppplStack_90 = ppppppplVar12;
        if (unaff_x25 != (long *******)0x8000000000000000) {
LAB_103998ee8:
          FUN_103944418(&ppppppplStack_90);
          ppppppplVar10 = extraout_x9_03;
          ppppppplVar14 = extraout_x10_04;
          ppppppplVar9 = extraout_x12_04;
        }
LAB_103998efc:
        ppppppplVar12 = (long *******)0x8000000000000000;
        if ((-0x7fffffffffffffff < (long)ppppppplVar15) && (ppppppplVar15 != (long *******)0x0)) {
          _free(unaff_x27);
          ppppppplVar12 = (long *******)0x8000000000000000;
          ppppppplVar10 = extraout_x9_04;
          ppppppplVar14 = extraout_x10_05;
          ppppppplVar9 = extraout_x12_05;
        }
LAB_103998f30:
        *(char *)(pppppplVar3 + 9) = *(char *)(pppppplVar3 + 9) + '\x01';
        ppppppplStack_d0 = ppppppplVar12;
        ppppppplStack_c8 = ppppppplVar8;
        ppppppplStack_c0 = ppppppplVar14;
        ppppppplStack_b8 = ppppppplVar10;
        ppppppplStack_b0 = unaff_x27;
        ppppppplStack_a8 = ppppppplVar9;
        unaff_x24 = (long *******)FUN_103893cdc(pppppplVar3);
        unaff_x23 = ppppppplStack_c8;
        ppppppplStack_108 = ppppppplStack_c8;
        uStack_110 = ppppppplStack_d0;
        ppppppplStack_f8 = ppppppplStack_b8;
        ppppppplStack_100 = ppppppplStack_c0;
        ppppppplStack_e8 = ppppppplStack_a8;
        ppppppplStack_f0 = ppppppplStack_b0;
        if (ppppppplStack_d0 == (long *******)0x8000000000000000) {
          ppppppplStack_e0 = unaff_x24;
          if (unaff_x24 != (long *******)0x0) {
            pppppplVar13 = *unaff_x24;
            if (pppppplVar13 != (long ******)0x1) goto LAB_103998f8c;
            FUN_103938a30(unaff_x24 + 1);
            goto LAB_103999018;
          }
          goto LAB_103999020;
        }
        goto LAB_103998fa4;
      }
      uStack_110 = (long *******)0x18;
      ppppppplVar8 = (long *******)FUN_10894f97c(pppppplStack_188,&uStack_110);
      ppppppplVar14 = ppppppplStack_170;
      ppppppplVar9 = ppppppplStack_168;
      ppppppplVar10 = ppppppplStack_170;
    }
    else {
      unaff_x23 = (long *******)FUN_10894fd58(pppppplStack_188,auStack_71,&UNK_10b2d5d88);
LAB_1039993e8:
      ppppppplVar8 = (long *******)FUN_108950124(unaff_x23,pppppplVar3);
      ppppppplVar14 = ppppppplStack_170;
      ppppppplVar9 = ppppppplStack_168;
      ppppppplVar10 = ppppppplStack_170;
    }
    goto joined_r0x000103999284;
  }
  cVar1 = *(char *)(pppppplStack_188 + 9);
  *(char *)(pppppplStack_188 + 9) = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    uStack_110 = (long *******)0x18;
    ppppppplVar8 = (long *******)FUN_10894f97c(pppppplStack_188,&uStack_110);
    ppppppplVar14 = ppppppplStack_170;
    ppppppplVar9 = ppppppplStack_168;
    ppppppplVar10 = ppppppplStack_170;
    goto joined_r0x000103999284;
  }
  pppppplStack_188[5] = (long *****)((long)ppppplVar11 + 1);
  ppppppplStack_d0 = (long *******)pppppplStack_188;
  ppppppplStack_c8 = (long *******)CONCAT71(ppppppplStack_c8._1_7_,1);
  FUN_103982584(&uStack_110,&ppppppplStack_d0);
  ppppppplVar8 = extraout_x9;
  ppppppplVar14 = extraout_x11;
  ppppppplVar10 = ppppppplStack_108;
  if ((char)uStack_110 == '\x01') {
LAB_103998df4:
    ppppppplStack_d0 = (long *******)0x8000000000000000;
    ppppppplStack_c0 = ppppppplVar8;
    ppppppplStack_a8 = ppppppplVar14;
  }
  else {
    if (uStack_110._1_1_ == '\x01') {
      FUN_10399b988(&uStack_110,ppppppplStack_d0);
      unaff_x27 = (long *******)0x8;
      ppppppplVar8 = extraout_x9_00;
      ppppppplVar14 = extraout_x11_00;
      ppppppplVar10 = ppppppplStack_108;
      unaff_x24 = uStack_110;
      if (uStack_110 == (long *******)0x8000000000000001) goto LAB_103998df4;
      ppppppplStack_190 = ppppppplStack_100;
      unaff_x23 = ppppppplStack_108;
      unaff_x25 = ppppppplStack_108;
    }
    else {
      unaff_x24 = (long *******)0x8000000000000000;
    }
    unaff_x27 = (long *******)0x8;
    FUN_103982584(&uStack_110,&ppppppplStack_d0);
    ppppppplVar8 = extraout_x9_01;
    ppppppplVar14 = extraout_x11_01;
    if ((char)uStack_110 == '\x01') {
LAB_103998de4:
      ppppppplVar10 = ppppppplStack_108;
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x25);
        ppppppplVar8 = extraout_x9_02;
        ppppppplVar14 = extraout_x11_02;
      }
      goto LAB_103998df4;
    }
    if (uStack_110._1_1_ == '\x01') {
      func_0x0001039847cc(&uStack_110,ppppppplStack_d0);
      ppppppplVar10 = uStack_110;
      ppppppplVar9 = ppppppplStack_100;
      ppppppplVar8 = extraout_x9_05;
      ppppppplVar14 = extraout_x11_03;
      unaff_x23 = ppppppplStack_108;
      if (uStack_110 == (long *******)0x8000000000000000) goto LAB_103998de4;
    }
    else {
      ppppppplVar10 = (long *******)0x8000000000000000;
      ppppppplVar9 = extraout_x9_01;
    }
    bVar6 = ppppppplVar10 != (long *******)0x8000000000000000;
    ppppppplStack_d0 = (long *******)0x0;
    if (bVar6) {
      ppppppplStack_d0 = ppppppplVar10;
    }
    ppppppplVar10 = (long *******)0x8;
    if (bVar6) {
      ppppppplVar10 = unaff_x23;
    }
    ppppppplStack_c0 = (long *******)0x0;
    ppppppplStack_a8 = ppppppplStack_190;
    if (bVar6) {
      ppppppplStack_c0 = ppppppplVar9;
    }
  }
  *(char *)(pppppplVar3 + 9) = *(char *)(pppppplVar3 + 9) + '\x01';
  ppppppplStack_c8 = ppppppplVar10;
  ppppppplStack_b8 = unaff_x24;
  ppppppplStack_b0 = unaff_x25;
  unaff_x24 = (long *******)FUN_103893e74(pppppplVar3);
  unaff_x23 = ppppppplStack_c8;
  ppppppplStack_108 = ppppppplStack_c8;
  uStack_110 = ppppppplStack_d0;
  ppppppplStack_f8 = ppppppplStack_b8;
  ppppppplStack_100 = ppppppplStack_c0;
  ppppppplStack_e8 = ppppppplStack_a8;
  ppppppplStack_f0 = ppppppplStack_b0;
  if (ppppppplStack_d0 == (long *******)0x8000000000000000) {
    ppppppplStack_e0 = unaff_x24;
    if (unaff_x24 != (long *******)0x0) {
      pppppplVar13 = *unaff_x24;
      if (pppppplVar13 == (long ******)0x1) {
        FUN_103938a30(unaff_x24 + 1);
      }
      else {
LAB_103998f8c:
        unaff_x23 = ppppppplStack_c8;
        uStack_110 = ppppppplStack_d0;
        ppppppplStack_108 = ppppppplStack_c8;
        ppppppplStack_100 = ppppppplStack_c0;
        ppppppplStack_f8 = ppppppplStack_b8;
        ppppppplStack_f0 = ppppppplStack_b0;
        ppppppplStack_e8 = ppppppplStack_a8;
        ppppppplStack_e0 = unaff_x24;
        if ((pppppplVar13 == (long ******)0x0) && (unaff_x24[2] != (long ******)0x0)) {
          _free(unaff_x24[1]);
        }
      }
LAB_103999018:
      _free(unaff_x24);
    }
LAB_103999020:
    ppppppplVar10 = (long *******)0x8000000000000000;
  }
  else {
LAB_103998fa4:
    uStack_110 = ppppppplStack_d0;
    ppppppplStack_108 = ppppppplStack_c8;
    ppppppplStack_100 = ppppppplStack_c0;
    ppppppplStack_f8 = ppppppplStack_b8;
    ppppppplStack_f0 = ppppppplStack_b0;
    ppppppplStack_e8 = ppppppplStack_a8;
    ppppppplStack_e0 = unaff_x24;
    if (unaff_x24 == (long *******)0x0) {
      ppppppplStack_128 = ppppppplStack_b8;
      ppppppplStack_130 = ppppppplStack_c0;
      ppppppplStack_118 = ppppppplStack_a8;
      ppppppplStack_120 = ppppppplStack_b0;
      ppppppplVar10 = ppppppplStack_d0;
      unaff_x23 = ppppppplStack_c8;
    }
    else {
      if (((ulong)ppppppplStack_b8 & 0x7fffffffffffffff) != 0) {
        _free(ppppppplStack_b0);
      }
      FUN_103944418(&uStack_110);
      ppppppplVar10 = (long *******)0x8000000000000000;
      unaff_x23 = unaff_x24;
    }
  }
  ppppppplVar8 = ppppppplStack_168;
  if (ppppppplVar10 == (long *******)0x8000000000000000) goto LAB_1039993e8;
  ppppppplStack_148 = ppppppplStack_128;
  ppppppplStack_150 = ppppppplStack_130;
  ppppppplStack_138 = ppppppplStack_118;
  ppppppplStack_140 = ppppppplStack_120;
  ppppppplStack_160 = ppppppplVar10;
  ppppppplStack_158 = unaff_x23;
  if (ppppppplStack_168 == ppppppplStack_178) {
    func_0x000108919e4c(&ppppppplStack_178);
  }
  ppppppplVar10 = ppppppplStack_170 + (long)ppppppplVar8 * 6;
  ppppppplVar10[1] = (long ******)ppppppplStack_158;
  *ppppppplVar10 = (long ******)ppppppplStack_160;
  ppppppplVar10[3] = (long ******)ppppppplStack_148;
  ppppppplVar10[2] = (long ******)ppppppplStack_150;
  ppppppplVar10[5] = (long ******)ppppppplStack_138;
  ppppppplVar10[4] = (long ******)ppppppplStack_140;
  ppppppplStack_168 = (long *******)((long)ppppppplVar8 + 1);
  goto LAB_103998aa8;
joined_r0x000103999284:
  for (; ppppppplVar9 != (long *******)0x0; ppppppplVar9 = (long *******)((long)ppppppplVar9 + -1))
  {
    if (((ulong)ppppppplVar14[3] & 0x7fffffffffffffff) != 0) {
      _free(ppppppplVar14[4]);
    }
    FUN_103944418(ppppppplVar14);
    ppppppplVar14 = ppppppplVar14 + 6;
  }
  if (ppppppplStack_178 != (long *******)0x0) {
    _free(ppppppplVar10);
  }
  ppppppplVar14 = (long *******)0x8000000000000000;
  ppppppplVar10 = unaff_x25;
LAB_10399929c:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  uStack_110 = ppppppplVar14;
  ppppppplStack_108 = ppppppplVar8;
  ppppppplStack_100 = ppppppplVar10;
  ppppppplVar9 = (long *******)FUN_103893e74(param_2);
  if (ppppppplVar14 == (long *******)0x8000000000000000) {
    ppppppplVar10 = ppppppplVar8;
    if (ppppppplVar9 != (long *******)0x0) {
      if (*ppppppplVar9 == (long ******)0x1) {
        FUN_103938a30(ppppppplVar9 + 1);
      }
      else if ((*ppppppplVar9 == (long ******)0x0) && (ppppppplVar9[2] != (long ******)0x0)) {
        _free(ppppppplVar9[1]);
      }
      _free(ppppppplVar9);
    }
  }
  else {
    ppppppplVar15 = ppppppplVar8;
    if (ppppppplVar9 == (long *******)0x0) {
      *param_1 = ppppppplVar14;
      param_1[1] = ppppppplVar8;
      param_1[2] = ppppppplVar10;
      return;
    }
    for (; ppppppplVar10 != (long *******)0x0;
        ppppppplVar10 = (long *******)((long)ppppppplVar10 + -1)) {
      if (((ulong)ppppppplVar15[3] & 0x7fffffffffffffff) != 0) {
        _free(ppppppplVar15[4]);
      }
      FUN_103944418(ppppppplVar15);
      ppppppplVar15 = ppppppplVar15 + 6;
    }
    ppppppplVar10 = ppppppplVar9;
    if (ppppppplVar14 != (long *******)0x0) {
      _free(ppppppplVar8);
    }
  }
LAB_103999394:
  uVar7 = FUN_108950124(ppppppplVar10,param_2);
LAB_1039993a0:
  *param_1 = 0x8000000000000000;
  param_1[1] = uVar7;
  return;
}

