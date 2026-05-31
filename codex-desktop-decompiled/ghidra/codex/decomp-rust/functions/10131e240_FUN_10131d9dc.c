
/* WARNING: Type propagation algorithm not settling */

void FUN_10131d9dc(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  char *pcVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ushort *puVar10;
  undefined8 uVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  short *unaff_x28;
  ushort *puStack_220;
  long lStack_210;
  long lStack_208;
  char *pcStack_200;
  ushort *puStack_1f8;
  ushort *puStack_1f0;
  short *psStack_1e8;
  undefined **ppuStack_1e0;
  short *psStack_1d8;
  undefined8 uStack_1d0;
  short *psStack_1c8;
  ushort *puStack_1c0;
  short *psStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ushort *puStack_190;
  short *psStack_188;
  undefined **ppuStack_180;
  short *psStack_178;
  ushort *puStack_170;
  short *psStack_168;
  ushort *puStack_160;
  short *psStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  ushort *puStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  short *psStack_128;
  undefined4 uStack_118;
  undefined3 uStack_114;
  ushort *puStack_110;
  short *psStack_108;
  undefined **ppuStack_100;
  short *psStack_f8;
  ushort *puStack_f0;
  ushort *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  ushort *puStack_c0;
  ushort *puStack_b8;
  undefined8 uStack_b0;
  short *psStack_a8;
  ushort *puStack_a0;
  short *psStack_98;
  ushort *puStack_90;
  short *psStack_88;
  undefined **ppuStack_80;
  short *psStack_78;
  
  if (*param_2 != '\x15') {
    uVar11 = FUN_108855c40(param_2,&puStack_c8,&UNK_10b2131e8);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    return;
  }
  puVar14 = (ushort *)&uStack_118;
  lStack_210 = *(long *)(param_2 + 0x10);
  lStack_208 = lStack_210 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_200 = (char *)0x0;
  puStack_1f8 = (ushort *)0x0;
  lStack_148 = 0;
  puStack_140 = (ushort *)0x8;
  lStack_138 = 0;
  puVar13 = (ushort *)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&puStack_1f0,&lStack_210);
    pcVar5 = pcStack_200;
    puStack_190 = puVar13;
    psStack_188 = unaff_x28;
    if ((char)puStack_1f0 == '\x18') break;
    uVar2 = *(undefined4 *)((long)((ulong)&puStack_1f0 | 1) + 3);
    uStack_118._0_3_ = (undefined3)*(undefined4 *)((ulong)&puStack_1f0 | 1);
    uStack_118._3_1_ = (undefined1)uVar2;
    uStack_114 = (undefined3)((uint)uVar2 >> 8);
    psStack_128 = psStack_1d8;
    ppuStack_130 = ppuStack_1e0;
    if ((char)puStack_1f0 == '\x16') {
      if (puVar13 != (ushort *)0x8000000000000002) {
        uStack_b0 = (undefined **)&UNK_108cadf95;
        psStack_a8 = (short *)0x5;
        puStack_1f0 = (ushort *)&uStack_b0;
        psStack_1e8 = (short *)&DAT_100c7b3a0;
        bVar8 = true;
        uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_1f0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        goto LAB_10131dfcc;
      }
      pcStack_200 = (char *)0x0;
      if (pcVar5 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_10131e1e4;
      }
      cVar3 = *pcVar5;
      puVar13 = (ushort *)0x8000000000000001;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          FUN_1004de164(&puStack_1f0,*(undefined8 *)(pcVar5 + 8));
        }
        else {
          if (cVar3 == '\x12') goto LAB_10131dbd0;
          FUN_1004de164(&puStack_1f0);
        }
        if (puStack_1f0 == (ushort *)0x8000000000000000) {
          *param_1 = 0x8000000000000000;
          param_1[1] = psStack_1e8;
          bVar8 = true;
          goto LAB_10131dfcc;
        }
        psStack_a8 = psStack_1d8;
        uStack_b0 = ppuStack_1e0;
        psStack_98 = psStack_1c8;
        puStack_a0 = uStack_1d0;
        psStack_88 = psStack_1b8;
        puStack_90 = puStack_1c0;
        ppuStack_80 = ppuStack_1b0;
        puVar13 = puStack_1f0;
        unaff_x28 = psStack_1e8;
      }
LAB_10131dbd0:
      psStack_178 = psStack_a8;
      ppuStack_180 = uStack_b0;
      psStack_168 = psStack_98;
      puStack_170 = puStack_a0;
      psStack_158 = psStack_88;
      puStack_160 = puStack_90;
      ppuStack_150 = ppuStack_80;
    }
    else {
      if ((char)puStack_1f0 == '\x17') {
        bVar8 = puVar13 == (ushort *)0x8000000000000002;
        if (bVar8) {
          puStack_1f0 = (ushort *)0x8000000000000001;
        }
        else {
          psStack_1c8 = psStack_168;
          uStack_1d0 = puStack_170;
          psStack_1b8 = psStack_158;
          puStack_1c0 = puStack_160;
          ppuStack_1b0 = ppuStack_150;
          psStack_1d8 = psStack_178;
          ppuStack_1e0 = ppuStack_180;
          puStack_1f0 = puVar13;
          psStack_1e8 = unaff_x28;
        }
        puVar10 = puStack_140 + lStack_138 * 0x20;
        puStack_f0 = puStack_140;
        puStack_110 = (ushort *)CONCAT71(puStack_110._1_7_,0x16);
        puStack_e0 = &UNK_10b236500;
        uStack_d8 = 1;
        puStack_e8 = puVar10;
        if (lStack_138 == 0) goto LAB_10131df0c;
        puVar16 = (undefined8 *)((ulong)&puStack_110 | 1);
        puVar18 = (undefined8 *)((ulong)&uStack_b0 | 1);
        puVar17 = (undefined *)0x8000000000000000;
        puVar15 = puStack_140;
        goto LAB_10131dcb8;
      }
      *(undefined4 *)((ulong)&puStack_110 | 1) = uStack_118;
      *(undefined4 *)((long)((ulong)&puStack_110 | 1) + 3) = uVar2;
      psStack_f8 = psStack_1d8;
      ppuStack_100 = ppuStack_1e0;
      puStack_110 = (ushort *)CONCAT71(puStack_110._1_7_,(char)puStack_1f0);
      psStack_108 = psStack_1e8;
      pcStack_200 = (char *)0x0;
      if (pcVar5 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_10131e1e4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10131e1e8);
        (*pcVar7)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&uStack_b0);
      lVar6 = lStack_138;
      if ((byte)uStack_b0 == '\x16') {
        *param_1 = 0x8000000000000000;
        param_1[1] = psStack_a8;
        bVar8 = true;
        FUN_100e077ec(&puStack_110);
        goto LAB_10131dfcc;
      }
      uStack_1d0 = (ushort *)
                   CONCAT44(*(undefined4 *)((long)((ulong)&uStack_b0 | 1) + 3),
                            *(int *)((ulong)&uStack_b0 | 1) << 8);
      psStack_1c8 = psStack_a8;
      psStack_1b8 = psStack_98;
      puStack_1c0 = puStack_a0;
      psStack_1e8 = psStack_108;
      puStack_1f0 = puStack_110;
      psStack_1d8 = psStack_f8;
      ppuStack_1e0 = ppuStack_100;
      uStack_1d0 = (ushort *)CONCAT71(uStack_1d0._1_7_,(byte)uStack_b0);
      if (lStack_138 == lStack_148) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_148);
      }
      puVar10 = puStack_140 + lVar6 * 0x20;
      *(short **)(puVar10 + 4) = psStack_1e8;
      *(ushort **)puVar10 = puStack_1f0;
      *(short **)(puVar10 + 0xc) = psStack_1d8;
      *(undefined ***)(puVar10 + 8) = ppuStack_1e0;
      *(short **)(puVar10 + 0x14) = psStack_1c8;
      *(ushort **)(puVar10 + 0x10) = uStack_1d0;
      *(short **)(puVar10 + 0x1c) = psStack_1b8;
      *(ushort **)(puVar10 + 0x18) = puStack_1c0;
      lStack_138 = lVar6 + 1;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = psStack_1e8;
  bVar8 = true;
  goto LAB_10131dfcc;
  while (puVar15 = puVar13, puVar13 != puVar10) {
LAB_10131dcb8:
    puVar13 = puVar15 + 0x20;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
              (&uStack_b0,puVar15,&UNK_10b236500,1);
    if ((byte)uStack_b0 != 0x16) {
      psStack_108 = psStack_88;
      puStack_110 = puStack_90;
      psStack_f8 = psStack_78;
      ppuStack_100 = ppuStack_80;
      if ((byte)uStack_b0 < 0xd) {
        if ((byte)uStack_b0 == 1) {
          bVar9 = uStack_b0._1_1_ == '\0';
LAB_10131de04:
          puVar13 = (ushort *)(ulong)!bVar9;
          goto LAB_10131de10;
        }
        if ((byte)uStack_b0 == 4) {
          bVar9 = psStack_a8 == (short *)0x0;
          goto LAB_10131de04;
        }
        if ((byte)uStack_b0 != 0xc) goto LAB_10131e25c;
        if (psStack_98 == (short *)0x3) {
          uVar4 = *puStack_a0;
          bVar1 = (byte)puStack_a0[1] ^ 0x69;
          puVar13 = (ushort *)(ulong)((uVar4 ^ 0x7275) != 0 || bVar1 != 0);
          if (psStack_a8 == (short *)0x0) goto LAB_10131de18;
          _free();
          if ((uVar4 ^ 0x7275) != 0 || bVar1 != 0) goto LAB_10131de1c;
          goto LAB_10131de6c;
        }
        if (psStack_a8 != (short *)0x0) {
          _free();
        }
LAB_10131de1c:
        cVar3 = (char)puStack_110;
        puStack_110 = (ushort *)CONCAT71(puStack_110._1_7_,0x16);
        if (cVar3 != '\x16') {
          uVar11 = *puVar16;
          puVar18[1] = puVar16[1];
          *puVar18 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
          uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,cVar3);
          FUN_100e077ec(&uStack_b0);
joined_r0x00010131ded0:
          puVar15 = puVar15 + 0x20;
          if (puVar15 == puVar10) break;
          goto LAB_10131dcb8;
        }
        puStack_f0 = puVar15 + 0x20;
        puVar10 = (ushort *)FUN_1088561c0(&UNK_108cde170,0x10);
LAB_10131e104:
        puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
        puStack_220 = puVar13;
      }
      else {
        if ((byte)uStack_b0 != 0xd) {
          if ((byte)uStack_b0 == 0xe) {
            if (((psStack_98 == (short *)0x3) && ((char)*puStack_a0 == 'u')) &&
               (*(char *)((long)puStack_a0 + 1) == 'r')) {
              puVar13 = (ushort *)(ulong)((char)puStack_a0[1] != 'i');
            }
            else {
              puVar13 = (ushort *)0x1;
            }
            if (psStack_a8 == (short *)0x0) goto LAB_10131de18;
            _free();
            iVar12 = (int)puVar13;
            goto joined_r0x00010131de18;
          }
          if ((byte)uStack_b0 == 0xf) {
            if (((puStack_a0 == (ushort *)0x3) && ((char)*psStack_a8 == 'u')) &&
               (*(char *)((long)psStack_a8 + 1) == 'r')) {
              bVar9 = (char)psStack_a8[1] == 'i';
              goto LAB_10131de04;
            }
            goto LAB_10131de0c;
          }
LAB_10131e25c:
          puStack_f0 = puVar15 + 0x20;
          puVar10 = (ushort *)FUN_108855b04(&uStack_b0,&puStack_c8,&UNK_10b20e1e0);
          goto LAB_10131e104;
        }
        if (puStack_a0 == (ushort *)0x3) {
          bVar9 = false;
          if (*psStack_a8 == 0x7275) {
            bVar9 = (char)psStack_a8[1] == 'i';
          }
          goto LAB_10131de04;
        }
LAB_10131de0c:
        puVar13 = (ushort *)0x1;
LAB_10131de10:
        FUN_100e077ec(&uStack_b0);
LAB_10131de18:
        iVar12 = (int)puVar13;
joined_r0x00010131de18:
        if (iVar12 != 0) goto LAB_10131de1c;
LAB_10131de6c:
        puStack_220 = puVar13;
        if (puVar17 == (undefined *)0x8000000000000000) {
          cVar3 = (char)puStack_110;
          puStack_110 = (ushort *)CONCAT71(puStack_110._1_7_,0x16);
          if (cVar3 == '\x16') {
            puStack_f0 = puVar15 + 0x20;
            puVar10 = (ushort *)FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            uVar11 = *puVar16;
            puVar18[1] = puVar16[1];
            *puVar18 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar16 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
            uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,cVar3);
            FUN_1004b62d4(&puStack_c8,&uStack_b0);
            puStack_220 = puStack_b8;
            puVar17 = puStack_c8;
            puVar14 = puStack_c0;
            if (puStack_c8 != (undefined *)0x8000000000000000) goto joined_r0x00010131ded0;
            puStack_f0 = puVar15 + 0x20;
            puVar10 = puStack_c0;
            puStack_220 = puVar13;
          }
          goto LAB_10131df44;
        }
        puStack_f0 = puVar15 + 0x20;
        puStack_c8 = &UNK_108cb4cd2;
        puStack_c0 = (ushort *)0x3;
        uStack_b0 = &puStack_c8;
        psStack_a8 = (short *)&DAT_100c7b3a0;
        puVar10 = (ushort *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
      }
      if (puVar17 != (undefined *)0x0) {
        _free(puVar14);
        puStack_220 = puVar10;
      }
      goto LAB_10131df44;
    }
  }
  puStack_f0 = puVar10;
  if (puVar17 == (undefined *)0x8000000000000000) {
LAB_10131df0c:
    puStack_c8 = &UNK_108cb4cd2;
    puStack_c0 = (ushort *)0x3;
    uStack_b0 = &puStack_c8;
    psStack_a8 = (short *)&DAT_100c7b3a0;
    puVar10 = (ushort *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
    puStack_220 = puVar13;
LAB_10131df44:
    if ((char)puStack_110 != '\x16') {
      puVar17 = (undefined *)0x8000000000000000;
      puVar14 = puVar10;
      goto LAB_10131df68;
    }
  }
  else {
    if ((char)puStack_110 == '\x16') goto LAB_10131e03c;
LAB_10131df68:
    FUN_100e077ec(&puStack_110);
    puVar10 = puVar14;
    if (puVar17 != (undefined *)0x8000000000000000) {
LAB_10131e03c:
      param_1[6] = psStack_1d8;
      param_1[5] = ppuStack_1e0;
      param_1[8] = psStack_1c8;
      param_1[7] = uStack_1d0;
      param_1[10] = psStack_1b8;
      param_1[9] = puStack_1c0;
      param_1[0xb] = ppuStack_1b0;
      param_1[4] = psStack_1e8;
      param_1[3] = puStack_1f0;
      *param_1 = puVar17;
      param_1[1] = puVar14;
      param_1[2] = puStack_220;
      FUN_100d5c778(&lStack_148);
      psStack_1c8 = (short *)param_1[5];
      uStack_1d0 = (ushort *)param_1[4];
      psStack_1b8 = (short *)param_1[7];
      puStack_1c0 = (ushort *)param_1[6];
      uStack_1a8 = param_1[9];
      ppuStack_1b0 = (undefined **)param_1[8];
      uStack_198 = param_1[0xb];
      uStack_1a0 = param_1[10];
      psStack_1e8 = (short *)param_1[1];
      puStack_1f0 = (ushort *)*param_1;
      psStack_1d8 = (short *)param_1[3];
      ppuStack_1e0 = (undefined **)param_1[2];
      if (lStack_208 - lStack_210 == 0) {
        return;
      }
      puStack_190 = puStack_1f8;
      uVar11 = FUN_1087e422c((long)puStack_1f8 + ((ulong)(lStack_208 - lStack_210) >> 6),
                             &puStack_190,&UNK_10b23a190);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      FUN_100cbb248(&puStack_1f0);
      return;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar10;
  if ((puStack_1f0 != (ushort *)0x8000000000000001) && (puStack_1f0 != (ushort *)0x8000000000000000)
     ) {
    if ((uStack_1d0 != (ushort *)0x0) && ((long)uStack_1d0 * 9 != -0x11)) {
      _free(psStack_1d8 + (long)uStack_1d0 * -4 + -4);
    }
    func_0x000100cd7284(&puStack_1f0);
  }
LAB_10131dfcc:
  FUN_100d5c778(&lStack_148);
  bVar8 = (bool)(bVar8 ^ 1);
  if (puStack_190 == (ushort *)0x8000000000000002) {
    bVar8 = true;
  }
  if (((!bVar8) && (puStack_190 != (ushort *)0x8000000000000001)) &&
     (puStack_190 != (ushort *)0x8000000000000000)) {
    if ((puStack_170 != (ushort *)0x0) && ((long)puStack_170 * 9 != -0x11)) {
      _free(psStack_178 + (long)puStack_170 * -4 + -4);
    }
    func_0x000100cd7284(&puStack_190);
  }
  return;
}

