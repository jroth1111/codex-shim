
/* WARNING: Type propagation algorithm not settling */

void FUN_101305804(undefined8 *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *unaff_x23;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong *puStack_220;
  long lStack_210;
  long lStack_208;
  char *pcStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  ulong *puStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong *puStack_190;
  long *plStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  ulong *puStack_170;
  long *plStack_168;
  ulong *puStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  ulong *puStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  long *plStack_128;
  undefined4 uStack_118;
  undefined3 uStack_114;
  ulong *puStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  
  if (*param_2 != '\x15') {
    uVar9 = FUN_108855c40(param_2,&puStack_c8,&UNK_10b2135c8);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    return;
  }
  puVar14 = (ulong *)&uStack_118;
  lStack_210 = *(long *)(param_2 + 0x10);
  lStack_208 = lStack_210 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_200 = (char *)0x0;
  puStack_1f8 = (ulong *)0x0;
  lStack_148 = 0;
  puStack_140 = (ulong *)0x8;
  lStack_138 = 0;
  puVar13 = (ulong *)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&puStack_1f0,&lStack_210);
    pcVar3 = pcStack_200;
    puStack_190 = puVar13;
    plStack_188 = unaff_x23;
    if ((char)puStack_1f0 == '\x18') break;
    uVar1 = *(undefined4 *)((long)((ulong)&puStack_1f0 | 1) + 3);
    uStack_118._0_3_ = (undefined3)*(undefined4 *)((ulong)&puStack_1f0 | 1);
    uStack_118._3_1_ = (undefined1)uVar1;
    uStack_114 = (undefined3)((uint)uVar1 >> 8);
    plStack_128 = plStack_1d8;
    ppuStack_130 = ppuStack_1e0;
    if ((char)puStack_1f0 == '\x16') {
      if (puVar13 != (ulong *)0x8000000000000002) {
        uStack_b0 = (undefined **)&UNK_108cadf95;
        plStack_a8 = (long *)0x5;
        puStack_1f0 = &uStack_b0;
        plStack_1e8 = (long *)&DAT_100c7b3a0;
        bVar6 = true;
        uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_1f0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar9;
        goto LAB_101305f14;
      }
      pcStack_200 = (char *)0x0;
      if (pcVar3 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_10130612c;
      }
      cVar2 = *pcVar3;
      puVar13 = (ulong *)0x8000000000000001;
      if (cVar2 != '\x10') {
        if (cVar2 == '\x11') {
          FUN_1004de164(&puStack_1f0,*(undefined8 *)(pcVar3 + 8));
        }
        else {
          if (cVar2 == '\x12') goto LAB_1013059f8;
          FUN_1004de164(&puStack_1f0);
        }
        if (puStack_1f0 == (ulong *)0x8000000000000000) {
          *param_1 = 0x8000000000000000;
          param_1[1] = plStack_1e8;
          bVar6 = true;
          goto LAB_101305f14;
        }
        plStack_a8 = plStack_1d8;
        uStack_b0 = ppuStack_1e0;
        plStack_98 = plStack_1c8;
        puStack_a0 = uStack_1d0;
        plStack_88 = plStack_1b8;
        puStack_90 = puStack_1c0;
        ppuStack_80 = ppuStack_1b0;
        puVar13 = puStack_1f0;
        unaff_x23 = plStack_1e8;
      }
LAB_1013059f8:
      plStack_178 = plStack_a8;
      ppuStack_180 = uStack_b0;
      plStack_168 = plStack_98;
      puStack_170 = puStack_a0;
      plStack_158 = plStack_88;
      puStack_160 = puStack_90;
      ppuStack_150 = ppuStack_80;
    }
    else {
      if ((char)puStack_1f0 == '\x17') {
        bVar6 = puVar13 == (ulong *)0x8000000000000002;
        if (bVar6) {
          puStack_1f0 = (ulong *)0x8000000000000001;
        }
        else {
          plStack_1c8 = plStack_168;
          uStack_1d0 = puStack_170;
          plStack_1b8 = plStack_158;
          puStack_1c0 = puStack_160;
          ppuStack_1b0 = ppuStack_150;
          plStack_1d8 = plStack_178;
          ppuStack_1e0 = ppuStack_180;
          puStack_1f0 = puVar13;
          plStack_1e8 = unaff_x23;
        }
        puVar8 = puStack_140 + lStack_138 * 8;
        puStack_f0 = puStack_140;
        puStack_110 = (ulong *)CONCAT71(puStack_110._1_7_,0x16);
        puStack_e0 = &UNK_10b236510;
        uStack_d8 = 1;
        puStack_e8 = puVar8;
        if (lStack_138 == 0) goto LAB_101305e54;
        puVar17 = (undefined8 *)((ulong)&puStack_110 | 1);
        puVar18 = (undefined8 *)((ulong)&uStack_b0 | 1);
        puVar16 = (undefined *)0x8000000000000000;
        puVar15 = puStack_140;
        goto LAB_101305ae0;
      }
      *(undefined4 *)((ulong)&puStack_110 | 1) = uStack_118;
      *(undefined4 *)((long)((ulong)&puStack_110 | 1) + 3) = uVar1;
      plStack_f8 = plStack_1d8;
      ppuStack_100 = ppuStack_1e0;
      puStack_110 = (ulong *)CONCAT71(puStack_110._1_7_,(char)puStack_1f0);
      plStack_108 = plStack_1e8;
      pcStack_200 = (char *)0x0;
      if (pcVar3 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_10130612c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101306130);
        (*pcVar5)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&uStack_b0);
      lVar4 = lStack_138;
      if ((byte)uStack_b0 == '\x16') {
        *param_1 = 0x8000000000000000;
        param_1[1] = plStack_a8;
        bVar6 = true;
        FUN_100e077ec(&puStack_110);
        goto LAB_101305f14;
      }
      uStack_1d0 = (ulong *)CONCAT44(*(undefined4 *)((long)((ulong)&uStack_b0 | 1) + 3),
                                     *(int *)((ulong)&uStack_b0 | 1) << 8);
      plStack_1c8 = plStack_a8;
      plStack_1b8 = plStack_98;
      puStack_1c0 = puStack_a0;
      plStack_1e8 = plStack_108;
      puStack_1f0 = puStack_110;
      plStack_1d8 = plStack_f8;
      ppuStack_1e0 = ppuStack_100;
      uStack_1d0 = (ulong *)CONCAT71(uStack_1d0._1_7_,(byte)uStack_b0);
      if (lStack_138 == lStack_148) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_148);
      }
      puVar8 = puStack_140 + lVar4 * 8;
      puVar8[1] = (ulong)plStack_1e8;
      *puVar8 = (ulong)puStack_1f0;
      puVar8[3] = (ulong)plStack_1d8;
      puVar8[2] = (ulong)ppuStack_1e0;
      puVar8[5] = (ulong)plStack_1c8;
      puVar8[4] = (ulong)uStack_1d0;
      puVar8[7] = (ulong)plStack_1b8;
      puVar8[6] = (ulong)puStack_1c0;
      lStack_138 = lVar4 + 1;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = plStack_1e8;
  bVar6 = true;
  goto LAB_101305f14;
  while (puVar15 = puVar13, puVar13 != puVar8) {
LAB_101305ae0:
    puVar13 = puVar15 + 8;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
              (&uStack_b0,puVar15,&UNK_10b236510,1);
    if ((byte)uStack_b0 != 0x16) {
      plStack_108 = plStack_88;
      puStack_110 = puStack_90;
      plStack_f8 = plStack_78;
      ppuStack_100 = ppuStack_80;
      if ((byte)uStack_b0 < 0xd) {
        if ((byte)uStack_b0 == 1) {
          bVar7 = uStack_b0._1_1_ == '\0';
LAB_101305d4c:
          puVar13 = (ulong *)(ulong)!bVar7;
          goto LAB_101305d58;
        }
        if ((byte)uStack_b0 == 4) {
          bVar7 = plStack_a8 == (long *)0x0;
          goto LAB_101305d4c;
        }
        if ((byte)uStack_b0 != 0xc) goto LAB_1013061a4;
        if (plStack_98 == (long *)0xd) {
          uVar10 = *puStack_a0;
          uVar11 = *(ulong *)((long)puStack_a0 + 5) ^ 0x64496e6f69746174;
          puVar13 = (ulong *)(ulong)((uVar10 ^ 0x7461746963696c65) != 0 || uVar11 != 0);
          if (plStack_a8 == (long *)0x0) goto LAB_101305d60;
          _free();
          if ((uVar10 ^ 0x7461746963696c65) != 0 || uVar11 != 0) goto LAB_101305d64;
          goto LAB_101305db4;
        }
        if (plStack_a8 != (long *)0x0) {
          _free();
        }
LAB_101305d64:
        cVar2 = (char)puStack_110;
        puStack_110 = (ulong *)CONCAT71(puStack_110._1_7_,0x16);
        if (cVar2 != '\x16') {
          uVar9 = *puVar17;
          puVar18[1] = puVar17[1];
          *puVar18 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar9;
          uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,cVar2);
          FUN_100e077ec(&uStack_b0);
joined_r0x000101305e18:
          puVar15 = puVar15 + 8;
          if (puVar15 == puVar8) break;
          goto LAB_101305ae0;
        }
        puStack_f0 = puVar15 + 8;
        puVar8 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
LAB_10130604c:
        puVar16 = (undefined *)((ulong)puVar16 & 0x7fffffffffffffff);
        puStack_220 = puVar13;
      }
      else {
        if ((byte)uStack_b0 != 0xd) {
          if ((byte)uStack_b0 == 0xe) {
            if ((((((plStack_98 == (long *)0xd) && ((char)*puStack_a0 == 'e')) &&
                  (*(char *)((long)puStack_a0 + 1) == 'l')) &&
                 (((*(char *)((long)puStack_a0 + 2) == 'i' &&
                   (*(char *)((long)puStack_a0 + 3) == 'c')) &&
                  ((*(char *)((long)puStack_a0 + 4) == 'i' &&
                   ((*(char *)((long)puStack_a0 + 5) == 't' &&
                    (*(char *)((long)puStack_a0 + 6) == 'a')))))))) &&
                (*(char *)((long)puStack_a0 + 7) == 't')) &&
               (((((char)puStack_a0[1] == 'i' && (*(char *)((long)puStack_a0 + 9) == 'o')) &&
                 (*(char *)((long)puStack_a0 + 10) == 'n')) &&
                (*(char *)((long)puStack_a0 + 0xb) == 'I')))) {
              puVar13 = (ulong *)(ulong)(*(char *)((long)puStack_a0 + 0xc) != 'd');
            }
            else {
              puVar13 = (ulong *)0x1;
            }
            if (plStack_a8 == (long *)0x0) goto LAB_101305d60;
            _free();
            iVar12 = (int)puVar13;
            goto joined_r0x000101305d60;
          }
          if ((byte)uStack_b0 == 0xf) {
            if ((((puStack_a0 == (ulong *)0xd) && ((char)*plStack_a8 == 'e')) &&
                (((*(char *)((long)plStack_a8 + 1) == 'l' &&
                  ((*(char *)((long)plStack_a8 + 2) == 'i' &&
                   (*(char *)((long)plStack_a8 + 3) == 'c')))) &&
                 (*(char *)((long)plStack_a8 + 4) == 'i')))) &&
               ((((*(char *)((long)plStack_a8 + 5) == 't' &&
                  (*(char *)((long)plStack_a8 + 6) == 'a')) &&
                 (*(char *)((long)plStack_a8 + 7) == 't')) &&
                ((((char)plStack_a8[1] == 'i' && (*(char *)((long)plStack_a8 + 9) == 'o')) &&
                 ((*(char *)((long)plStack_a8 + 10) == 'n' &&
                  (*(char *)((long)plStack_a8 + 0xb) == 'I')))))))) {
              bVar7 = *(char *)((long)plStack_a8 + 0xc) == 'd';
              goto LAB_101305d4c;
            }
            goto LAB_101305d54;
          }
LAB_1013061a4:
          puStack_f0 = puVar15 + 8;
          puVar8 = (ulong *)FUN_108855b04(&uStack_b0,&puStack_c8,&UNK_10b212b20);
          goto LAB_10130604c;
        }
        if (puStack_a0 == (ulong *)0xd) {
          bVar7 = false;
          if (*plStack_a8 == 0x7461746963696c65) {
            bVar7 = *(long *)((long)plStack_a8 + 5) == 0x64496e6f69746174;
          }
          goto LAB_101305d4c;
        }
LAB_101305d54:
        puVar13 = (ulong *)0x1;
LAB_101305d58:
        FUN_100e077ec(&uStack_b0);
LAB_101305d60:
        iVar12 = (int)puVar13;
joined_r0x000101305d60:
        if (iVar12 != 0) goto LAB_101305d64;
LAB_101305db4:
        puStack_220 = puVar13;
        if (puVar16 == (undefined *)0x8000000000000000) {
          cVar2 = (char)puStack_110;
          puStack_110 = (ulong *)CONCAT71(puStack_110._1_7_,0x16);
          if (cVar2 == '\x16') {
            puStack_f0 = puVar15 + 8;
            puVar8 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            uVar9 = *puVar17;
            puVar18[1] = puVar17[1];
            *puVar18 = uVar9;
            uVar9 = *(undefined8 *)((long)puVar17 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar9;
            uStack_b0 = (undefined **)CONCAT71(uStack_b0._1_7_,cVar2);
            FUN_1004b62d4(&puStack_c8,&uStack_b0);
            puStack_220 = puStack_b8;
            puVar16 = puStack_c8;
            puVar14 = puStack_c0;
            if (puStack_c8 != (undefined *)0x8000000000000000) goto joined_r0x000101305e18;
            puStack_f0 = puVar15 + 8;
            puVar8 = puStack_c0;
            puStack_220 = puVar13;
          }
          goto LAB_101305e8c;
        }
        puStack_f0 = puVar15 + 8;
        puStack_c8 = &UNK_108cb6e4b;
        puStack_c0 = (ulong *)0xd;
        uStack_b0 = &puStack_c8;
        plStack_a8 = (long *)&DAT_100c7b3a0;
        puVar8 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
      }
      if (puVar16 != (undefined *)0x0) {
        _free(puVar14);
        puStack_220 = puVar8;
      }
      goto LAB_101305e8c;
    }
  }
  puStack_f0 = puVar8;
  if (puVar16 == (undefined *)0x8000000000000000) {
LAB_101305e54:
    puStack_c8 = &UNK_108cb6e4b;
    puStack_c0 = (ulong *)0xd;
    uStack_b0 = &puStack_c8;
    plStack_a8 = (long *)&DAT_100c7b3a0;
    puVar8 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
    puStack_220 = puVar13;
LAB_101305e8c:
    if ((char)puStack_110 != '\x16') {
      puVar16 = (undefined *)0x8000000000000000;
      puVar14 = puVar8;
      goto LAB_101305eb0;
    }
  }
  else {
    if ((char)puStack_110 == '\x16') goto LAB_101305f84;
LAB_101305eb0:
    FUN_100e077ec(&puStack_110);
    puVar8 = puVar14;
    if (puVar16 != (undefined *)0x8000000000000000) {
LAB_101305f84:
      param_1[6] = plStack_1d8;
      param_1[5] = ppuStack_1e0;
      param_1[8] = plStack_1c8;
      param_1[7] = uStack_1d0;
      param_1[10] = plStack_1b8;
      param_1[9] = puStack_1c0;
      param_1[0xb] = ppuStack_1b0;
      param_1[4] = plStack_1e8;
      param_1[3] = puStack_1f0;
      *param_1 = puVar16;
      param_1[1] = puVar14;
      param_1[2] = puStack_220;
      FUN_100d5c778(&lStack_148);
      plStack_1c8 = (long *)param_1[5];
      uStack_1d0 = (ulong *)param_1[4];
      plStack_1b8 = (long *)param_1[7];
      puStack_1c0 = (ulong *)param_1[6];
      uStack_1a8 = param_1[9];
      ppuStack_1b0 = (undefined **)param_1[8];
      uStack_198 = param_1[0xb];
      uStack_1a0 = param_1[10];
      plStack_1e8 = (long *)param_1[1];
      puStack_1f0 = (ulong *)*param_1;
      plStack_1d8 = (long *)param_1[3];
      ppuStack_1e0 = (undefined **)param_1[2];
      if (lStack_208 - lStack_210 == 0) {
        return;
      }
      puStack_190 = puStack_1f8;
      uVar9 = FUN_1087e422c((long)puStack_1f8 + ((ulong)(lStack_208 - lStack_210) >> 6),&puStack_190
                            ,&UNK_10b23a190);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      FUN_100cbb248(&puStack_1f0);
      return;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar8;
  if ((puStack_1f0 != (ulong *)0x8000000000000001) && (puStack_1f0 != (ulong *)0x8000000000000000))
  {
    if ((uStack_1d0 != (ulong *)0x0) && ((long)uStack_1d0 * 9 != -0x11)) {
      _free(plStack_1d8 + (-1 - (long)uStack_1d0));
    }
    func_0x000100cd7284(&puStack_1f0);
  }
LAB_101305f14:
  FUN_100d5c778(&lStack_148);
  bVar6 = (bool)(bVar6 ^ 1);
  if (puStack_190 == (ulong *)0x8000000000000002) {
    bVar6 = true;
  }
  if (((!bVar6) && (puStack_190 != (ulong *)0x8000000000000001)) &&
     (puStack_190 != (ulong *)0x8000000000000000)) {
    if ((puStack_170 != (ulong *)0x0) && ((long)puStack_170 * 9 != -0x11)) {
      _free(plStack_178 + (-1 - (long)puStack_170));
    }
    func_0x000100cd7284(&puStack_190);
  }
  return;
}

