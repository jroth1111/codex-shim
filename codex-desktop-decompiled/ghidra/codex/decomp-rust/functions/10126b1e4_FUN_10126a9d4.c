
void FUN_10126a9d4(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  long *unaff_x28;
  undefined4 *puStack_240;
  long lStack_230;
  long lStack_228;
  char *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined4 **ppuStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined4 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined4 **ppuStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined4 **ppuStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  undefined4 **ppuStack_140;
  long *plStack_138;
  undefined4 uStack_128;
  undefined3 uStack_124;
  long *plStack_120;
  long *plStack_118;
  undefined4 **ppuStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  long *plStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined4 **ppuStack_80;
  long *plStack_78;
  
  if (*param_2 != '\x15') {
    uVar10 = FUN_108855c40(param_2,&puStack_c8,&UNK_10b213268);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar10;
    return;
  }
  plVar15 = (long *)&uStack_128;
  lStack_230 = *(long *)(param_2 + 0x10);
  lStack_228 = lStack_230 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_220 = (char *)0x0;
  plStack_218 = (long *)0x0;
  puVar17 = (undefined4 *)((ulong)&plStack_210 | 1);
  lStack_158 = 0;
  plStack_150 = (long *)0x8;
  lStack_148 = 0;
  plVar11 = (long *)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&plStack_210,&lStack_230);
    pcVar4 = pcStack_220;
    plStack_1a0 = plVar11;
    plStack_198 = unaff_x28;
    if ((char)plStack_210 == '\x18') break;
    uVar2 = *(undefined4 *)((long)puVar17 + 3);
    uStack_128._0_3_ = (undefined3)*puVar17;
    uStack_128._3_1_ = (undefined1)uVar2;
    uStack_124 = (undefined3)((uint)uVar2 >> 8);
    plStack_138 = plStack_1f8;
    ppuStack_140 = ppuStack_200;
    if ((char)plStack_210 == '\x16') {
      if (plVar11 != (long *)0x8000000000000002) {
        uStack_b0 = (undefined4 **)&UNK_108cadf95;
        plStack_a8 = (long *)0x5;
        plStack_210 = &uStack_b0;
        plStack_208 = (long *)&DAT_100c7b3a0;
        bVar7 = true;
        uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&plStack_210);
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar10;
        goto LAB_10126b2d0;
      }
      pcStack_220 = (char *)0x0;
      if (pcVar4 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_10126b4d8;
      }
      cVar3 = *pcVar4;
      plVar11 = (long *)0x8000000000000001;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          FUN_1004de164(&plStack_210,*(undefined8 *)(pcVar4 + 8));
        }
        else {
          if (cVar3 == '\x12') goto LAB_10126abc8;
          FUN_1004de164(&plStack_210);
        }
        if (plStack_210 == (long *)0x8000000000000000) {
          *param_1 = 0x8000000000000001;
          param_1[1] = plStack_208;
          bVar7 = true;
          goto LAB_10126b2d0;
        }
        plStack_a8 = plStack_1f8;
        uStack_b0 = ppuStack_200;
        plStack_98 = plStack_1e8;
        plStack_a0 = uStack_1f0;
        plStack_88 = plStack_1d8;
        plStack_90 = plStack_1e0;
        ppuStack_80 = ppuStack_1d0;
        plVar11 = plStack_210;
        unaff_x28 = plStack_208;
      }
LAB_10126abc8:
      plStack_188 = plStack_a8;
      ppuStack_190 = uStack_b0;
      plStack_178 = plStack_98;
      plStack_180 = plStack_a0;
      plStack_168 = plStack_88;
      plStack_170 = plStack_90;
      ppuStack_160 = ppuStack_80;
    }
    else {
      if ((char)plStack_210 == '\x17') {
        bVar7 = plVar11 == (long *)0x8000000000000002;
        if (bVar7) {
          plStack_210 = (long *)0x8000000000000001;
        }
        else {
          plStack_1e8 = plStack_178;
          uStack_1f0 = plStack_180;
          plStack_1d8 = plStack_168;
          plStack_1e0 = plStack_170;
          ppuStack_1d0 = ppuStack_160;
          plStack_1f8 = plStack_188;
          ppuStack_200 = ppuStack_190;
          plStack_210 = plVar11;
          plStack_208 = unaff_x28;
        }
        plVar1 = plStack_150 + lStack_148 * 8;
        plStack_100 = plStack_150;
        plStack_120 = (long *)CONCAT71(plStack_120._1_7_,0x16);
        puStack_f0 = &UNK_10b236700;
        uStack_e8 = 2;
        uStack_e0 = 0;
        plVar11 = plStack_150;
        plStack_f8 = plVar1;
        if (lStack_148 == 0) {
          puVar19 = (undefined4 *)0x8000000000000001;
          goto LAB_10126b1c4;
        }
        puVar20 = (undefined8 *)((ulong)&plStack_120 | 1);
        puVar18 = (undefined8 *)((ulong)&uStack_b0 | 1);
        puVar19 = (undefined4 *)0x8000000000000001;
        puVar17 = (undefined4 *)&UNK_10b236700;
        goto LAB_10126acb4;
      }
      *(undefined4 *)((ulong)&plStack_120 | 1) = uStack_128;
      *(undefined4 *)((long)((ulong)&plStack_120 | 1) + 3) = uVar2;
      plStack_108 = plStack_1f8;
      ppuStack_110 = ppuStack_200;
      plStack_120 = (long *)CONCAT71(plStack_120._1_7_,(char)plStack_210);
      plStack_118 = plStack_208;
      pcStack_220 = (char *)0x0;
      if (pcVar4 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_10126b4d8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10126b4dc);
        (*pcVar6)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&uStack_b0);
      lVar8 = lStack_148;
      if ((byte)uStack_b0 == '\x16') {
        *param_1 = 0x8000000000000001;
        param_1[1] = plStack_a8;
        bVar7 = true;
        FUN_100e077ec(&plStack_120);
        goto LAB_10126b2d0;
      }
      uStack_1f0 = (long *)CONCAT44(*(undefined4 *)((long)((ulong)&uStack_b0 | 1) + 3),
                                    *(int *)((ulong)&uStack_b0 | 1) << 8);
      plStack_1e8 = plStack_a8;
      plStack_1d8 = plStack_98;
      plStack_1e0 = plStack_a0;
      plStack_208 = plStack_118;
      plStack_210 = plStack_120;
      plStack_1f8 = plStack_108;
      ppuStack_200 = ppuStack_110;
      uStack_1f0 = (long *)CONCAT71(uStack_1f0._1_7_,(byte)uStack_b0);
      if (lStack_148 == lStack_158) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_158);
      }
      plVar1 = plStack_150 + lVar8 * 8;
      plVar1[1] = (long)plStack_208;
      *plVar1 = (long)plStack_210;
      plVar1[3] = (long)plStack_1f8;
      plVar1[2] = (long)ppuStack_200;
      plVar1[5] = (long)plStack_1e8;
      plVar1[4] = (long)uStack_1f0;
      plVar1[7] = (long)plStack_1d8;
      plVar1[6] = (long)plStack_1e0;
      lStack_148 = lVar8 + 1;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = plStack_208;
  bVar7 = true;
  goto LAB_10126b2d0;
  while (plVar11 = plVar16 + 8, plVar9 = plVar1, plVar16 + 8 != plVar1) {
LAB_10126acb4:
    plVar16 = plVar11;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
              (&uStack_b0,plVar16,&UNK_10b236700,2);
    bVar5 = (byte)uStack_b0;
    if ((byte)uStack_b0 != 0x16) {
      plVar11 = plVar16 + 8;
      plStack_100 = plVar11;
      if ((char)plStack_120 != '\x16') {
        FUN_100e077ec(&plStack_120);
      }
      plStack_118 = plStack_88;
      plStack_120 = plStack_90;
      plStack_108 = plStack_78;
      ppuStack_110 = ppuStack_80;
      if (bVar5 < 0xd) {
        if (bVar5 == 1) {
          iVar13 = 1;
          if (uStack_b0._1_1_ != '\x01') {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (uStack_b0._1_1_ != '\0') {
            iVar12 = iVar13;
          }
        }
        else {
          if (bVar5 != 4) {
            if (bVar5 == 0xc) {
              if (plStack_98 == (long *)0x6) {
                iVar12 = 1;
                if ((int)*plStack_a0 != 0x73616572 || *(short *)((long)plStack_a0 + 4) != 0x6e6f) {
                  iVar12 = 2;
                }
              }
              else {
                if (plStack_98 != (long *)0x9) goto LAB_10126af78;
                iVar12 = 2;
                if (*plStack_a0 == 0x4974736575716572 && (char)plStack_a0[1] == 'd') {
                  iVar12 = 0;
                }
              }
              goto joined_r0x00010126af70;
            }
LAB_10126b584:
            plVar9 = (long *)FUN_108855b04(&uStack_b0,&puStack_c8,&UNK_10b211a60);
            puVar17 = (undefined4 *)&UNK_10b236700;
            goto LAB_10126b1f8;
          }
          iVar13 = 1;
          if (plStack_a8 != (long *)0x1) {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (plStack_a8 != (long *)0x0) {
            iVar12 = iVar13;
          }
        }
LAB_10126b040:
        FUN_100e077ec(&uStack_b0);
      }
      else {
        if (bVar5 == 0xd) {
          if (plStack_a0 == (long *)0x6) {
            iVar12 = 1;
            if ((int)*plStack_a8 != 0x73616572 || *(short *)((long)plStack_a8 + 4) != 0x6e6f) {
              iVar12 = 2;
            }
          }
          else {
            if (plStack_a0 != (long *)0x9) goto LAB_10126b00c;
            iVar12 = 2;
            if (*plStack_a8 == 0x4974736575716572 && (char)plStack_a8[1] == 'd') {
              iVar12 = 0;
            }
          }
          goto LAB_10126b040;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_10126b584;
          if (plStack_a0 == (long *)0x6) {
            if (((((char)*plStack_a8 != 'r') || (*(char *)((long)plStack_a8 + 1) != 'e')) ||
                (*(char *)((long)plStack_a8 + 2) != 'a')) ||
               (((*(char *)((long)plStack_a8 + 3) != 's' || (*(char *)((long)plStack_a8 + 4) != 'o')
                 ) || (*(char *)((long)plStack_a8 + 5) != 'n')))) goto LAB_10126b00c;
            iVar12 = 1;
          }
          else if (((plStack_a0 == (long *)0x9) && ((char)*plStack_a8 == 'r')) &&
                  (((*(char *)((long)plStack_a8 + 1) == 'e' &&
                    (((((*(char *)((long)plStack_a8 + 2) == 'q' &&
                        (*(char *)((long)plStack_a8 + 3) == 'u')) &&
                       (*(char *)((long)plStack_a8 + 4) == 'e')) &&
                      ((*(char *)((long)plStack_a8 + 5) == 's' &&
                       (*(char *)((long)plStack_a8 + 6) == 't')))) &&
                     (*(char *)((long)plStack_a8 + 7) == 'I')))) && ((char)plStack_a8[1] == 'd'))))
          {
            iVar12 = 0;
          }
          else {
LAB_10126b00c:
            iVar12 = 2;
          }
          goto LAB_10126b040;
        }
        if (plStack_98 == (long *)0x6) {
          if ((((char)*plStack_a0 != 'r') || (*(char *)((long)plStack_a0 + 1) != 'e')) ||
             ((*(char *)((long)plStack_a0 + 2) != 'a' ||
              (((*(char *)((long)plStack_a0 + 3) != 's' || (*(char *)((long)plStack_a0 + 4) != 'o'))
               || (*(char *)((long)plStack_a0 + 5) != 'n')))))) goto LAB_10126af78;
          iVar12 = 1;
        }
        else if ((((((plStack_98 == (long *)0x9) && ((char)*plStack_a0 == 'r')) &&
                   ((*(char *)((long)plStack_a0 + 1) == 'e' &&
                    ((*(char *)((long)plStack_a0 + 2) == 'q' &&
                     (*(char *)((long)plStack_a0 + 3) == 'u')))))) &&
                  (*(char *)((long)plStack_a0 + 4) == 'e')) &&
                 (((*(char *)((long)plStack_a0 + 5) == 's' &&
                   (*(char *)((long)plStack_a0 + 6) == 't')) &&
                  (*(char *)((long)plStack_a0 + 7) == 'I')))) && ((char)plStack_a0[1] == 'd')) {
          iVar12 = 0;
        }
        else {
LAB_10126af78:
          iVar12 = 2;
        }
joined_r0x00010126af70:
        if (plStack_a8 != (long *)0x0) {
          _free();
        }
      }
      cVar3 = (char)plStack_120;
      if (iVar12 == 0) {
        if (uStack_e0 != 0) {
          puStack_c8 = (undefined4 *)&UNK_108cb4866;
          plStack_c0 = (long *)0x9;
          uStack_b0 = &puStack_c8;
          plStack_a8 = (long *)&DAT_100c7b3a0;
          plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          puVar17 = (undefined4 *)&UNK_10b236700;
          goto LAB_10126b1f8;
        }
        plStack_120 = (long *)CONCAT71(plStack_120._1_7_,0x16);
        if (cVar3 == '\x16') {
          plVar9 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_10126b1f8;
        }
        uVar10 = *puVar20;
        puVar18[1] = puVar20[1];
        *puVar18 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar10;
        uStack_b0 = (undefined4 **)CONCAT71(uStack_b0._1_7_,cVar3);
        FUN_1011b82d4(&puStack_c8,&uStack_b0);
        puVar14 = puStack_b8;
        plVar9 = plStack_c0;
        if ((int)puStack_c8 == 1) goto LAB_10126b1f8;
        if ((uStack_e0 != 0) && (plStack_d8 != (long *)0x0)) {
          lVar8 = *plStack_d8;
          *plStack_d8 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_d8);
          }
        }
        uStack_e0 = 1;
        plStack_d8 = plVar9;
        puStack_d0 = puVar14;
      }
      else if (iVar12 == 1) {
        if (puVar19 != (undefined4 *)0x8000000000000001) {
          puStack_c8 = (undefined4 *)&UNK_108cadf0d;
          plStack_c0 = (long *)0x6;
          uStack_b0 = &puStack_c8;
          plStack_a8 = (long *)&DAT_100c7b3a0;
          plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          puVar14 = (undefined4 *)((ulong)puVar19 & 0x7fffffffffffffff);
          goto joined_r0x00010126b57c;
        }
        plStack_120 = (long *)CONCAT71(plStack_120._1_7_,0x16);
        if (cVar3 == '\x16') {
          puStack_240 = (undefined4 *)0x8000000000000001;
          plVar9 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_10126b214;
        }
        uVar10 = *puVar20;
        puVar18[1] = puVar20[1];
        *puVar18 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar10;
        uStack_b0 = (undefined4 **)CONCAT71(uStack_b0._1_7_,cVar3);
        FUN_1004b60cc(&puStack_c8,&uStack_b0);
        plVar9 = plStack_c0;
        puStack_240 = puStack_c8;
        if (puStack_c8 == (undefined4 *)0x8000000000000001) goto LAB_10126b214;
        puStack_240 = puStack_b8;
        plVar15 = plStack_c0;
        puVar19 = puStack_c8;
      }
      else {
        plStack_120 = (long *)CONCAT71(plStack_120._1_7_,0x16);
        if (cVar3 == '\x16') {
          plVar9 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_10126b1f8;
        }
        uVar10 = *puVar20;
        puVar18[1] = puVar20[1];
        *puVar18 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar10;
        uStack_b0 = (undefined4 **)CONCAT71(uStack_b0._1_7_,cVar3);
        FUN_100e077ec(&uStack_b0);
      }
      plVar9 = plStack_100;
      if (plVar11 == plVar1) break;
      goto LAB_10126acb4;
    }
  }
  plStack_100 = plVar9;
  plVar11 = plVar16 + 8;
  if ((uStack_e0 & 1) == 0) {
LAB_10126b1c4:
    puStack_c8 = (undefined4 *)&UNK_108cb4866;
    plStack_c0 = (long *)0x9;
    uStack_b0 = &puStack_c8;
    plStack_a8 = (long *)&DAT_100c7b3a0;
    plVar9 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
LAB_10126b1f8:
    puStack_240 = puVar19;
    puVar14 = puVar19;
    if (-0x7fffffffffffffff < (long)puVar19) {
joined_r0x00010126b57c:
      puStack_240 = puVar19;
      if (puVar14 != (undefined4 *)0x0) {
        _free(plVar15);
      }
    }
LAB_10126b214:
    plVar15 = plVar9;
    if (((uStack_e0 & 1) != 0) && (plStack_d8 != (long *)0x0)) {
      lVar8 = *plStack_d8;
      *plStack_d8 = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_d8);
      }
    }
    if ((char)plStack_120 != '\x16') {
      puVar14 = (undefined4 *)0x8000000000000001;
      goto LAB_10126b26c;
    }
  }
  else {
    puVar14 = (undefined4 *)0x8000000000000000;
    if (puVar19 != (undefined4 *)0x8000000000000001) {
      puVar14 = puVar19;
    }
    plVar11 = plStack_d8;
    puVar17 = puStack_d0;
    if ((char)plStack_120 == '\x16') goto LAB_10126b340;
LAB_10126b26c:
    FUN_100e077ec(&plStack_120);
    if (puVar14 != (undefined4 *)0x8000000000000001) {
LAB_10126b340:
      param_1[8] = plStack_1f8;
      param_1[7] = ppuStack_200;
      param_1[10] = plStack_1e8;
      param_1[9] = uStack_1f0;
      param_1[0xc] = plStack_1d8;
      param_1[0xb] = plStack_1e0;
      param_1[0xd] = ppuStack_1d0;
      param_1[6] = plStack_208;
      param_1[5] = plStack_210;
      *param_1 = puVar14;
      param_1[1] = plVar15;
      param_1[2] = puStack_240;
      param_1[3] = plVar11;
      param_1[4] = puVar17;
      FUN_100d5c778(&lStack_158);
      if (puVar14 == (undefined4 *)0x8000000000000001) {
        return;
      }
      uStack_1c8 = param_1[9];
      ppuStack_1d0 = (undefined4 **)param_1[8];
      uStack_1b8 = param_1[0xb];
      uStack_1c0 = param_1[10];
      uStack_1a8 = param_1[0xd];
      uStack_1b0 = param_1[0xc];
      plStack_208 = (long *)param_1[1];
      plStack_210 = (long *)*param_1;
      plStack_1f8 = (long *)param_1[3];
      ppuStack_200 = (undefined4 **)param_1[2];
      plStack_1e8 = (long *)param_1[5];
      uStack_1f0 = (long *)param_1[4];
      plStack_1d8 = (long *)param_1[7];
      plStack_1e0 = (long *)param_1[6];
      if (lStack_228 - lStack_230 == 0) {
        return;
      }
      plStack_1a0 = plStack_218;
      uVar10 = FUN_1087e422c((long)plStack_218 + ((ulong)(lStack_228 - lStack_230) >> 6),
                             &plStack_1a0,&UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar10;
      FUN_100c9f0ac(&plStack_210);
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = plVar15;
  if ((plStack_210 != (long *)0x8000000000000001) && (plStack_210 != (long *)0x8000000000000000)) {
    if ((uStack_1f0 != (long *)0x0) && ((long)uStack_1f0 * 9 != -0x11)) {
      _free(plStack_1f8 + (-1 - (long)uStack_1f0));
    }
    func_0x000100cd7284(&plStack_210);
  }
LAB_10126b2d0:
  FUN_100d5c778(&lStack_158);
  bVar7 = (bool)(bVar7 ^ 1);
  if (plStack_1a0 == (long *)0x8000000000000002) {
    bVar7 = true;
  }
  if (((!bVar7) && (plStack_1a0 != (long *)0x8000000000000001)) &&
     (plStack_1a0 != (long *)0x8000000000000000)) {
    if ((plStack_180 != (long *)0x0) && ((long)plStack_180 * 9 != -0x11)) {
      _free(plStack_188 + (-1 - (long)plStack_180));
    }
    func_0x000100cd7284(&plStack_1a0);
  }
  return;
}

