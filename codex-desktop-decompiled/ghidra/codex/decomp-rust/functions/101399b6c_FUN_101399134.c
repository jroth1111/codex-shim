
/* WARNING: Type propagation algorithm not settling */

void FUN_101399134(undefined8 *param_1,char *param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  byte bVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  int *unaff_x19;
  int *unaff_x20;
  long lVar17;
  int *******pppppppiVar18;
  char cVar19;
  int *******pppppppiStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  char *pcStack_2e0;
  int ******ppppppiStack_2d8;
  undefined8 uStack_2d0;
  int *piStack_2c8;
  int *******pppppppiStack_2c0;
  int *piStack_2b8;
  undefined8 uStack_2b0;
  int *piStack_2a8;
  int *******pppppppiStack_2a0;
  int *piStack_298;
  int *******pppppppiStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  int *******pppppppiStack_230;
  int *piStack_228;
  int *******pppppppiStack_220;
  int *piStack_218;
  int *******pppppppiStack_210;
  int *piStack_208;
  int *******pppppppiStack_200;
  int *piStack_1f8;
  int *******pppppppiStack_1f0;
  int *piStack_1e8;
  long lStack_1e0;
  int *piStack_1d8;
  int *******pppppppiStack_1d0;
  int *piStack_1c8;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  int *******pppppppiStack_1b0;
  int *piStack_1a8;
  int *******pppppppiStack_1a0;
  int *piStack_198;
  int *******pppppppiStack_190;
  int *piStack_188;
  int *******pppppppiStack_180;
  int *piStack_178;
  int *******pppppppiStack_170;
  int *******pppppppiStack_160;
  int *piStack_158;
  int *******pppppppiStack_150;
  int *piStack_148;
  int *******pppppppiStack_140;
  int *piStack_138;
  int *******pppppppiStack_130;
  int *******pppppppiStack_120;
  int *piStack_118;
  int *******pppppppiStack_110;
  int *piStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  int *******pppppppiStack_e0;
  int *piStack_d8;
  int *******pppppppiStack_d0;
  int *piStack_c8;
  int *******pppppppiStack_c0;
  int *piStack_b8;
  int *******pppppppiStack_b0;
  int *piStack_a8;
  int *******pppppppiStack_a0;
  int *****pppppiStack_90;
  undefined8 uStack_88;
  int ******ppppppiStack_80;
  undefined *puStack_78;
  
  if (*param_2 != '\x15') {
    uVar12 = FUN_108855c40(param_2,&ppppppiStack_80,&UNK_10b213588);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar12;
    return;
  }
  lStack_2f0 = *(long *)(param_2 + 0x10);
  lStack_2e8 = lStack_2f0 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_2e0 = (char *)0x0;
  ppppppiStack_2d8 = (int ******)0x0;
  piStack_1e8 = (int *)0x0;
  lStack_1e0 = 8;
  piStack_1d8 = (int *)0x0;
  pppppppiStack_2f8 = (int *******)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&uStack_2d0,&lStack_2f0);
    pcVar6 = pcStack_2e0;
    piStack_228 = unaff_x20;
    if ((byte)uStack_2d0 == '\x18') break;
    uVar2 = *(undefined4 *)((long)((ulong)&uStack_2d0 | 1) + 3);
    uStack_1b8._0_3_ = (undefined3)*(undefined4 *)((ulong)&uStack_2d0 | 1);
    uStack_1b8._3_1_ = (undefined1)uVar2;
    uStack_1b4 = (undefined3)((uint)uVar2 >> 8);
    piStack_1c8 = piStack_2b8;
    pppppppiStack_1d0 = pppppppiStack_2c0;
    if ((byte)uStack_2d0 == '\x16') {
      if (pppppppiStack_2f8 != (int *******)0x8000000000000002) {
        pppppppiStack_230 = pppppppiStack_2f8;
        pppppppiStack_e0 = (int *******)&UNK_108cadf95;
        piStack_d8 = (int *)0x5;
        uStack_2d0 = (int *******)&pppppppiStack_e0;
        piStack_2c8 = (int *)&DAT_100c7b3a0;
        bVar10 = true;
        uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2d0);
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar12;
        goto LAB_1013999a8;
      }
      pcStack_2e0 = (char *)0x0;
      if (pcVar6 == (char *)0x0) {
        pppppppiStack_230 = pppppppiStack_2f8;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_101399bb8;
      }
      cVar19 = *pcVar6;
      pppppppiVar18 = (int *******)0x8000000000000001;
      if (cVar19 != '\x10') {
        if (cVar19 == '\x11') {
          FUN_1004de164(&uStack_2d0,*(undefined8 *)(pcVar6 + 8));
        }
        else {
          if (cVar19 == '\x12') goto LAB_10139933c;
          FUN_1004de164(&uStack_2d0);
        }
        if (uStack_2d0 == (int *******)0x8000000000000000) {
          pppppppiStack_230 = pppppppiStack_2f8;
          *param_1 = 0x8000000000000001;
          param_1[1] = piStack_2c8;
          bVar10 = true;
          pppppppiStack_2f8 = (int *******)0x8000000000000002;
          goto LAB_1013999a8;
        }
        piStack_d8 = piStack_2b8;
        pppppppiStack_e0 = pppppppiStack_2c0;
        piStack_c8 = piStack_2a8;
        pppppppiStack_d0 = uStack_2b0;
        piStack_b8 = piStack_298;
        pppppppiStack_c0 = pppppppiStack_2a0;
        pppppppiStack_b0 = pppppppiStack_290;
        pppppppiVar18 = uStack_2d0;
        unaff_x20 = piStack_2c8;
      }
LAB_10139933c:
      piStack_218 = piStack_d8;
      pppppppiStack_220 = pppppppiStack_e0;
      piStack_208 = piStack_c8;
      pppppppiStack_210 = pppppppiStack_d0;
      piStack_1f8 = piStack_b8;
      pppppppiStack_200 = pppppppiStack_c0;
      pppppppiStack_1f0 = pppppppiStack_b0;
      pppppppiStack_2f8 = pppppppiVar18;
    }
    else {
      if ((byte)uStack_2d0 == '\x17') {
        pppppppiStack_230 = pppppppiStack_2f8;
        bVar10 = pppppppiStack_2f8 == (int *******)0x8000000000000002;
        if (bVar10) {
          pppppppiStack_1b0 = (int *******)0x8000000000000001;
        }
        else {
          piStack_188 = piStack_208;
          pppppppiStack_190 = pppppppiStack_210;
          piStack_178 = piStack_1f8;
          pppppppiStack_180 = pppppppiStack_200;
          pppppppiStack_170 = pppppppiStack_1f0;
          pppppppiStack_1b0 = pppppppiStack_2f8;
          piStack_198 = piStack_218;
          pppppppiStack_1a0 = pppppppiStack_220;
          piStack_1a8 = unaff_x20;
        }
        lStack_f8 = lStack_1e0 + (long)piStack_1d8 * 0x40;
        lStack_100 = lStack_1e0;
        pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
        puStack_f0 = &UNK_10b2365c0;
        uStack_e8 = 2;
        if (piStack_1d8 == (int *)0x0) {
          pppppppiStack_e0 = (int *******)0x8000000000000001;
          cVar19 = '\b';
          goto LAB_101399848;
        }
        puVar16 = (undefined8 *)((ulong)&pppppppiStack_120 | 1);
        puVar14 = (undefined8 *)((ulong)&uStack_2d0 | 1);
        cVar19 = '\b';
        pppppppiVar18 = (int *******)0x8000000000000001;
        lVar17 = lStack_1e0;
        uVar12 = uStack_e8;
        puVar4 = puStack_f0;
        lVar5 = lStack_f8;
        goto LAB_10139943c;
      }
      *(undefined4 *)((ulong)&pppppppiStack_1b0 | 1) = uStack_1b8;
      *(undefined4 *)((long)((ulong)&pppppppiStack_1b0 | 1) + 3) = uVar2;
      piStack_198 = piStack_2b8;
      pppppppiStack_1a0 = pppppppiStack_2c0;
      pppppppiStack_1b0 = (int *******)CONCAT71(pppppppiStack_1b0._1_7_,(byte)uStack_2d0);
      piStack_1a8 = piStack_2c8;
      pcStack_2e0 = (char *)0x0;
      if (pcVar6 == (char *)0x0) {
        pppppppiStack_230 = pppppppiStack_2f8;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_101399bb8:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x101399bbc);
        (*pcVar9)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&pppppppiStack_e0);
      unaff_x19 = piStack_1d8;
      if ((char)pppppppiStack_e0 == '\x16') {
        pppppppiStack_230 = pppppppiStack_2f8;
        *param_1 = 0x8000000000000001;
        param_1[1] = piStack_d8;
        bVar10 = true;
        FUN_100e077ec(&pppppppiStack_1b0);
        goto LAB_1013999a8;
      }
      uStack_2b0 = (int *******)
                   CONCAT44(*(undefined4 *)((long)((ulong)&pppppppiStack_e0 | 1) + 3),
                            *(int *)((ulong)&pppppppiStack_e0 | 1) << 8);
      piStack_2a8 = piStack_d8;
      piStack_298 = piStack_c8;
      pppppppiStack_2a0 = pppppppiStack_d0;
      piStack_2c8 = piStack_1a8;
      uStack_2d0 = pppppppiStack_1b0;
      piStack_2b8 = piStack_198;
      pppppppiStack_2c0 = pppppppiStack_1a0;
      uStack_2b0 = (int *******)CONCAT71(uStack_2b0._1_7_,(char)pppppppiStack_e0);
      if (piStack_1d8 == piStack_1e8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&piStack_1e8);
      }
      puVar14 = (undefined8 *)(lStack_1e0 + (long)unaff_x19 * 0x40);
      puVar14[1] = piStack_2c8;
      *puVar14 = uStack_2d0;
      puVar14[3] = piStack_2b8;
      puVar14[2] = pppppppiStack_2c0;
      puVar14[5] = piStack_2a8;
      puVar14[4] = uStack_2b0;
      puVar14[7] = piStack_298;
      puVar14[6] = pppppppiStack_2a0;
      piStack_1d8 = (int *)((long)unaff_x19 + 1);
    }
  }
  pppppppiStack_230 = pppppppiStack_2f8;
  *param_1 = 0x8000000000000001;
  param_1[1] = piStack_2c8;
  bVar10 = true;
  goto LAB_1013999a8;
LAB_10139943c:
  do {
    lVar1 = lVar17 + 0x40;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E(&uStack_2d0,lVar17,puVar4,uVar12)
    ;
    bVar7 = (byte)uStack_2d0;
    if ((byte)uStack_2d0 == 0x16) {
      lVar17 = lVar1;
      if (lVar1 == lVar5) break;
      goto LAB_10139943c;
    }
    lStack_100 = lVar17 + 0x40;
    if ((char)pppppppiStack_120 != '\x16') {
      FUN_100e077ec(&pppppppiStack_120);
    }
    piStack_118 = piStack_2a8;
    pppppppiStack_120 = uStack_2b0;
    piStack_108 = piStack_298;
    pppppppiStack_110 = pppppppiStack_2a0;
    if (bVar7 < 0xd) {
      if (bVar7 == 1) {
        iVar15 = 1;
        if (uStack_2d0._1_1_ != '\x01') {
          iVar15 = 2;
        }
        iVar13 = 0;
        if (uStack_2d0._1_1_ != '\0') {
          iVar13 = iVar15;
        }
LAB_1013996f0:
        FUN_100e077ec(&uStack_2d0);
        goto LAB_1013996f8;
      }
      if (bVar7 == 4) {
        iVar15 = 1;
        if (piStack_2c8 != (int *)0x1) {
          iVar15 = 2;
        }
        iVar13 = 0;
        if (piStack_2c8 != (int *)0x0) {
          iVar13 = iVar15;
        }
        goto LAB_1013996f0;
      }
      if (bVar7 == 0xc) {
        if (piStack_2b8 != (int *)0x5) goto LAB_1013996a4;
        if (*(int *)pppppppiStack_2c0 == 0x74656d5f && *(char *)((long)pppppppiStack_2c0 + 4) == 'a'
           ) {
LAB_1013995e8:
          iVar13 = 0;
        }
        else {
          iVar13 = 1;
          if (*(int *)pppppppiStack_2c0 != 0x6576656c ||
              *(char *)((long)pppppppiStack_2c0 + 4) != 'l') {
            iVar13 = 2;
          }
        }
        goto LAB_1013996a8;
      }
LAB_101399c68:
      pppppppiStack_e0 = pppppppiVar18;
      piStack_d8 = unaff_x19;
      piVar11 = (int *)FUN_108855b04(&uStack_2d0,&ppppppiStack_80,&UNK_10b211620);
LAB_101399b00:
      bVar3 = true;
      goto LAB_1013998d8;
    }
    if (bVar7 == 0xd) {
      if (pppppppiStack_2c0 == (int *******)0x5) {
        if (*piStack_2c8 == 0x74656d5f && (char)piStack_2c8[1] == 'a') {
LAB_101399664:
          iVar13 = 0;
        }
        else {
          iVar13 = 1;
          if (*piStack_2c8 != 0x6576656c || (char)piStack_2c8[1] != 'l') {
            iVar13 = 2;
          }
        }
        goto LAB_1013996f0;
      }
LAB_1013996ec:
      iVar13 = 2;
      goto LAB_1013996f0;
    }
    if (bVar7 != 0xe) {
      if (bVar7 != 0xf) goto LAB_101399c68;
      if (pppppppiStack_2c0 == (int *******)0x5) {
        if ((char)*piStack_2c8 == 'l') {
          if ((((*(char *)((long)piStack_2c8 + 1) == 'e') &&
               (*(char *)((long)piStack_2c8 + 2) == 'v')) &&
              (*(char *)((long)piStack_2c8 + 3) == 'e')) && ((char)piStack_2c8[1] == 'l')) {
            iVar13 = 1;
            goto LAB_1013996f0;
          }
        }
        else if ((((char)*piStack_2c8 == '_') && (*(char *)((long)piStack_2c8 + 1) == 'm')) &&
                ((*(char *)((long)piStack_2c8 + 2) == 'e' &&
                 ((*(char *)((long)piStack_2c8 + 3) == 't' && ((char)piStack_2c8[1] == 'a'))))))
        goto LAB_101399664;
      }
      goto LAB_1013996ec;
    }
    if (piStack_2b8 == (int *)0x5) {
      if (*(char *)pppppppiStack_2c0 == 'l') {
        if ((((*(char *)((long)pppppppiStack_2c0 + 1) == 'e') &&
             (*(char *)((long)pppppppiStack_2c0 + 2) == 'v')) &&
            (*(char *)((long)pppppppiStack_2c0 + 3) == 'e')) &&
           (*(char *)((long)pppppppiStack_2c0 + 4) == 'l')) {
          iVar13 = 1;
          goto LAB_1013996a8;
        }
      }
      else if (((*(char *)pppppppiStack_2c0 == '_') &&
               (*(char *)((long)pppppppiStack_2c0 + 1) == 'm')) &&
              ((*(char *)((long)pppppppiStack_2c0 + 2) == 'e' &&
               ((*(char *)((long)pppppppiStack_2c0 + 3) == 't' &&
                (*(char *)((long)pppppppiStack_2c0 + 4) == 'a')))))) goto LAB_1013995e8;
    }
LAB_1013996a4:
    iVar13 = 2;
LAB_1013996a8:
    if (piStack_2c8 != (int *)0x0) {
      _free();
    }
LAB_1013996f8:
    if (iVar13 == 0) {
      if (pppppppiVar18 != (int *******)0x8000000000000001) {
        ppppppiStack_80 = (int ******)&UNK_108cadf95;
        puStack_78 = (undefined *)0x5;
        uStack_2d0 = &ppppppiStack_80;
        piStack_2c8 = (int *)&DAT_100c7b3a0;
        pppppppiStack_e0 = pppppppiVar18;
        piStack_d8 = unaff_x19;
        piVar11 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2d0);
        goto LAB_101399b00;
      }
      FUN_100623670(&uStack_2d0,&pppppppiStack_120);
      piVar11 = piStack_2c8;
      if (uStack_2d0 != (int *******)0x8000000000000001) {
        piStack_c8 = piStack_2b8;
        pppppppiStack_d0 = pppppppiStack_2c0;
        piStack_b8 = piStack_2a8;
        pppppppiStack_c0 = uStack_2b0;
        piStack_a8 = piStack_298;
        pppppppiStack_b0 = pppppppiStack_2a0;
        pppppppiStack_a0 = pppppppiStack_290;
        unaff_x19 = piStack_2c8;
        pppppppiVar18 = uStack_2d0;
        goto LAB_1013997bc;
      }
      goto LAB_101399930;
    }
    if (iVar13 != 1) {
      cVar8 = (char)pppppppiStack_120;
      pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
      if (cVar8 != '\x16') {
        uVar12 = *puVar16;
        puVar14[1] = puVar16[1];
        *puVar14 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar16 + 0xf);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar12;
        uStack_2d0 = (int *******)CONCAT71(uStack_2d0._1_7_,cVar8);
        FUN_100e077ec(&uStack_2d0);
        goto LAB_1013997bc;
      }
      pppppppiStack_e0 = pppppppiVar18;
      piStack_d8 = unaff_x19;
      piVar11 = (int *)FUN_1088561c0(&UNK_108cde170,0x10);
      goto LAB_101399b00;
    }
    if (cVar19 != '\b') {
      ppppppiStack_80 = (int ******)&UNK_108ca13ad;
      puStack_78 = (undefined *)0x5;
      uStack_2d0 = &ppppppiStack_80;
      piStack_2c8 = (int *)&DAT_100c7b3a0;
      pppppppiStack_e0 = pppppppiVar18;
      piStack_d8 = unaff_x19;
      piVar11 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2d0);
      goto LAB_101399b00;
    }
    FUN_100621104(&uStack_2d0,&pppppppiStack_120);
    if ((byte)uStack_2d0 == '\x01') {
      bVar3 = true;
      piVar11 = piStack_2c8;
      pppppppiStack_e0 = pppppppiVar18;
      piStack_d8 = unaff_x19;
      goto LAB_1013998d8;
    }
    cVar19 = uStack_2d0._1_1_;
LAB_1013997bc:
    lVar17 = lStack_100;
    lVar1 = lStack_100;
    uVar12 = uStack_e8;
    puVar4 = puStack_f0;
    lVar5 = lStack_f8;
  } while (lStack_100 != lStack_f8);
  lStack_100 = lVar1;
  pppppppiStack_e0 = pppppppiVar18;
  piStack_d8 = unaff_x19;
  if (pppppppiVar18 == (int *******)0x8000000000000001) {
LAB_101399848:
    uStack_2d0 = (int *******)0x8000000000000000;
    pppppppiVar18 = (int *******)0x8000000000000001;
    bVar3 = true;
    if (cVar19 != '\b') goto LAB_10139980c;
LAB_101399864:
    pppppiStack_90 = (int *****)&UNK_108ca13ad;
    uStack_88 = 5;
    ppppppiStack_80 = &pppppiStack_90;
    puStack_78 = &DAT_100c7b3a0;
    piVar11 = (int *)FUN_108856088(s_missing_field_____108ac28f7,&ppppppiStack_80);
    if (uStack_2d0 != (int *******)0x8000000000000000) {
      if ((uStack_2b0 != (int *******)0x0) && ((long)uStack_2b0 * 9 != -0x11)) {
        _free(piStack_2b8 + (long)uStack_2b0 * -2 + -2);
      }
      func_0x000100cd7284(&uStack_2d0);
    }
LAB_1013998d8:
    if (((bVar3) && (pppppppiVar18 != (int *******)0x8000000000000001)) &&
       (pppppppiVar18 != (int *******)0x8000000000000000)) {
      if ((pppppppiStack_c0 != (int *******)0x0) && ((long)pppppppiStack_c0 * 9 != -0x11)) {
        _free(piStack_c8 + (long)pppppppiStack_c0 * -2 + -2);
      }
      func_0x000100cd7284(&pppppppiStack_e0);
    }
LAB_101399930:
    if ((char)pppppppiStack_120 != '\x16') {
      cVar19 = '\0';
      pppppppiVar18 = (int *******)0x8000000000000001;
      goto LAB_101399944;
    }
  }
  else {
    bVar3 = false;
    piStack_2a8 = piStack_b8;
    uStack_2b0 = pppppppiStack_c0;
    piStack_298 = piStack_a8;
    pppppppiStack_2a0 = pppppppiStack_b0;
    pppppppiStack_290 = pppppppiStack_a0;
    piStack_2b8 = piStack_c8;
    pppppppiStack_2c0 = pppppppiStack_d0;
    uStack_2d0 = pppppppiVar18;
    piStack_2c8 = unaff_x19;
    if (cVar19 == '\b') goto LAB_101399864;
LAB_10139980c:
    piStack_158 = piStack_2b8;
    pppppppiStack_160 = pppppppiStack_2c0;
    piStack_148 = piStack_2a8;
    pppppppiStack_150 = uStack_2b0;
    piStack_138 = piStack_298;
    pppppppiStack_140 = pppppppiStack_2a0;
    pppppppiStack_130 = pppppppiStack_290;
    pppppppiVar18 = uStack_2d0;
    piVar11 = piStack_2c8;
    if ((char)pppppppiStack_120 != '\x16') {
LAB_101399944:
      FUN_100e077ec(&pppppppiStack_120);
    }
    if (pppppppiVar18 != (int *******)0x8000000000000001) {
      param_1[3] = piStack_158;
      param_1[2] = pppppppiStack_160;
      param_1[5] = piStack_148;
      param_1[4] = pppppppiStack_150;
      param_1[7] = piStack_138;
      param_1[6] = pppppppiStack_140;
      param_1[8] = pppppppiStack_130;
      param_1[0xf] = piStack_188;
      param_1[0xe] = pppppppiStack_190;
      param_1[0x11] = piStack_178;
      param_1[0x10] = pppppppiStack_180;
      param_1[0x12] = pppppppiStack_170;
      param_1[0xb] = piStack_1a8;
      param_1[10] = pppppppiStack_1b0;
      param_1[0xd] = piStack_198;
      param_1[0xc] = pppppppiStack_1a0;
      *param_1 = pppppppiVar18;
      param_1[1] = piVar11;
      *(char *)(param_1 + 9) = cVar19;
      FUN_100d5c778(&piStack_1e8);
      uStack_268 = param_1[0xd];
      uStack_270 = param_1[0xc];
      uStack_258 = param_1[0xf];
      uStack_260 = param_1[0xe];
      uStack_248 = param_1[0x11];
      uStack_250 = param_1[0x10];
      uStack_240 = param_1[0x12];
      piStack_2a8 = (int *)param_1[5];
      uStack_2b0 = (int *******)param_1[4];
      piStack_298 = (int *)param_1[7];
      pppppppiStack_2a0 = (int *******)param_1[6];
      uStack_288 = param_1[9];
      pppppppiStack_290 = (int *******)param_1[8];
      uStack_278 = param_1[0xb];
      uStack_280 = param_1[10];
      piStack_2c8 = (int *)param_1[1];
      uStack_2d0 = (int *******)*param_1;
      piStack_2b8 = (int *)param_1[3];
      pppppppiStack_2c0 = (int *******)param_1[2];
      if (lStack_2e8 - lStack_2f0 == 0) {
        return;
      }
      pppppppiStack_e0 = (int *******)ppppppiStack_2d8;
      uVar12 = FUN_1087e422c((long)ppppppiStack_2d8 + ((ulong)(lStack_2e8 - lStack_2f0) >> 6),
                             &pppppppiStack_e0,&UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar12;
      FUN_100e80d04(&uStack_2d0);
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = piVar11;
  if ((pppppppiStack_1b0 != (int *******)0x8000000000000001) &&
     (pppppppiStack_1b0 != (int *******)0x8000000000000000)) {
    if ((pppppppiStack_190 != (int *******)0x0) && ((long)pppppppiStack_190 * 9 != -0x11)) {
      _free(piStack_198 + (long)pppppppiStack_190 * -2 + -2);
    }
    func_0x000100cd7284(&pppppppiStack_1b0);
  }
LAB_1013999a8:
  FUN_100d5c778(&piStack_1e8);
  bVar10 = (bool)(bVar10 ^ 1);
  if (pppppppiStack_2f8 == (int *******)0x8000000000000002) {
    bVar10 = true;
  }
  if ((!bVar10) && (pppppppiStack_2f8 != (int *******)0x8000000000000001)) {
    if ((pppppppiStack_210 != (int *******)0x0) && ((long)pppppppiStack_210 * 9 != -0x11)) {
      _free(piStack_218 + (long)pppppppiStack_210 * -2 + -2);
    }
    func_0x000100cd7284(&pppppppiStack_230);
  }
  return;
}

