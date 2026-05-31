
/* WARNING: Type propagation algorithm not settling */

void FUN_100421c18(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *extraout_x1;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined1 auVar16 [16];
  undefined *puStack_210;
  int *piStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  int *piStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar9 = param_2[1];
  while (lVar9 != 0) {
    uVar14 = *param_2;
    FUN_1061db950(&puStack_48,uVar14);
    if (puStack_48 == (undefined1 *)0x0) break;
    uVar11 = param_2[2];
    uVar7 = *(ulong *)(puStack_48 + 8);
    param_2[1] = *(undefined8 *)(puStack_48 + 0x10);
    if ((uVar7 & uVar11) == 0) {
      *param_1 = uVar14;
      param_1[1] = puStack_48;
      param_1[2] = puStack_40;
      param_1[3] = uStack_38;
      param_1[4] = uVar11;
      return;
    }
    uVar7 = *(ulong *)(puStack_48 + 0x50);
    do {
      while( true ) {
        if ((uVar7 & 3) == 2) {
          uStack_50 = 2;
          puStack_40 = &
                       __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
          ;
          puStack_48 = (undefined1 *)&uStack_50;
          auVar16 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (&UNK_108cd640b,&puStack_48,&UNK_10b24e120);
          plVar8 = auVar16._8_8_;
          plVar6 = auVar16._0_8_;
          lVar9 = plVar8[1];
          goto joined_r0x000100421d64;
        }
        uVar11 = uVar7 >> 2;
        if (((uVar7 & 3) != 1) || ((uVar11 & 0x1ffffffffffff) != 1)) break;
        uVar13 = uVar7 & 0xfff8000000000000;
        uVar11 = *(ulong *)(puStack_48 + 0x50);
        bVar1 = uVar11 == uVar7;
        uVar7 = uVar11;
        if (bVar1) {
          *(ulong *)(puStack_48 + 0x50) = uVar13 | 3;
          FUN_10074fd94();
          goto LAB_100421c40;
        }
      }
      uVar12 = uVar7 & 0xfff8000000000003;
      uVar13 = *(ulong *)(puStack_48 + 0x50);
      bVar1 = uVar13 != uVar7;
      uVar7 = uVar13;
    } while (bVar1);
    *(ulong *)(puStack_48 + 0x50) = (uVar11 & 0xc001ffffffffffff) * 4 - 4 | uVar12;
LAB_100421c40:
    lVar9 = param_2[1];
  }
  *param_1 = 0;
  return;
joined_r0x000100421d64:
  if (lVar9 == 0) {
LAB_100421e20:
    *plVar6 = 0;
    return;
  }
  lVar9 = *plVar8;
  FUN_1061db950(&puStack_98,lVar9 + 0x730);
  if (puStack_98 == (undefined1 *)0x0) goto LAB_100421e20;
  uVar11 = plVar8[2];
  uVar7 = *(ulong *)(puStack_98 + 8);
  plVar8[1] = *(long *)(puStack_98 + 0x10);
  if ((uVar7 & uVar11) == 0) {
    *plVar6 = lVar9;
    plVar6[1] = (long)puStack_98;
    plVar6[2] = (long)puStack_90;
    plVar6[3] = lStack_88;
    plVar6[4] = uVar11;
    return;
  }
  uVar7 = *(ulong *)(puStack_98 + 0x50);
  do {
    while( true ) {
      if ((uVar7 & 3) == 2) {
        uStack_a0 = 2;
        puStack_90 = &
                     __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
        ;
        puStack_98 = (undefined1 *)&uStack_a0;
        auVar16 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                            (&UNK_108cd640b,&puStack_98,&UNK_10b24e120);
        plVar8 = auVar16._8_8_;
        plVar6 = auVar16._0_8_;
        lVar9 = plVar8[1];
        goto joined_r0x000100421e94;
      }
      uVar11 = uVar7 >> 2;
      if (((uVar7 & 3) != 1) || ((uVar11 & 0x1ffffffffffff) != 1)) break;
      uVar13 = uVar7 & 0xfff8000000000000;
      uVar11 = *(ulong *)(puStack_98 + 0x50);
      bVar1 = uVar11 == uVar7;
      uVar7 = uVar11;
      if (bVar1) {
        *(ulong *)(puStack_98 + 0x50) = uVar13 | 3;
        FUN_10074fd94();
        goto LAB_100421d70;
      }
    }
    uVar12 = uVar7 & 0xfff8000000000003;
    uVar13 = *(ulong *)(puStack_98 + 0x50);
    bVar1 = uVar13 != uVar7;
    uVar7 = uVar13;
  } while (bVar1);
  *(ulong *)(puStack_98 + 0x50) = (uVar11 & 0xc001ffffffffffff) * 4 - 4 | uVar12;
LAB_100421d70:
  lVar9 = plVar8[1];
  goto joined_r0x000100421d64;
joined_r0x000100421e94:
  if (lVar9 == 0) {
LAB_100421f50:
    *plVar6 = 0;
    return;
  }
  lVar9 = *plVar8;
  FUN_1061db950(&puStack_e8,lVar9 + 0xb10);
  if (puStack_e8 == (undefined1 *)0x0) goto LAB_100421f50;
  uVar11 = plVar8[2];
  uVar7 = *(ulong *)(puStack_e8 + 8);
  plVar8[1] = *(long *)(puStack_e8 + 0x10);
  if ((uVar7 & uVar11) == 0) {
    *plVar6 = lVar9;
    plVar6[1] = (long)puStack_e8;
    plVar6[2] = (long)puStack_e0;
    plVar6[3] = lStack_d8;
    plVar6[4] = uVar11;
    return;
  }
  uVar7 = *(ulong *)(puStack_e8 + 0x50);
LAB_100421f08:
  do {
    if ((uVar7 & 3) == 2) {
      uStack_f0 = 2;
      puStack_e0 = &
                   __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
      ;
      puStack_e8 = (undefined1 *)&uStack_f0;
      auVar16 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cd640b,&puStack_e8,&UNK_10b24e120);
      lVar9 = auVar16._8_8_;
      puVar5 = auVar16._0_8_;
      FUN_10072c154(&puStack_210,lVar9,&UNK_108c60fe8,4);
      puStack_1e0 = &UNK_108c60fe8;
      uStack_1d8 = 4;
      if (puStack_210 != (undefined *)0x2) {
        uStack_1c8 = piStack_208;
        puStack_1d0 = puStack_210;
        uStack_1b8 = uStack_1f8;
        uStack_1c0 = lStack_200;
        uStack_1b0 = uStack_1f0;
        ppuStack_1a0 = &puStack_1e0;
        puStack_198 = &DAT_100c7b3a0;
        ppuStack_190 = &puStack_1d0;
        puStack_188 = &
                      __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
        ;
        uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                           (s__Mismatch_between_definition_and_108ac57ee,&ppuStack_1a0,
                            &UNK_10b21f750);
        if (puStack_210 != (undefined *)0x0) {
          _free(piStack_208);
        }
        __Unwind_Resume(uVar14);
        FUN_107c05ccc();
                    /* WARNING: Could not recover jumptable at 0x000100422290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(extraout_x1[1] + 0x18))(*extraout_x1,&UNK_108c61050,4);
        return;
      }
      cVar3 = (char)piStack_208;
      if ((char)piStack_208 == '\x02') {
        uVar14 = FUN_10072aa8c(9,&UNK_108ca1cb5,0x36);
        *(undefined8 *)(puVar5 + 8) = uVar14;
      }
      else {
        plVar6 = *(long **)(lVar9 + 0x30);
        if (plVar6 == (long *)0x0) {
LAB_100422050:
          uVar15 = 2;
LAB_100422054:
          uVar10 = 0;
          puVar5[1] = cVar3;
          puVar5[2] = uVar15;
          goto LAB_100422060;
        }
        piVar2 = (int *)plVar6[1];
        if (plVar6[2] == 5) {
          if (*piVar2 != 0x72617473 || (char)piVar2[1] != 't') goto LAB_100422050;
        }
        else if ((plVar6[2] != 4) || (*piVar2 != 0x706f7473)) goto LAB_100422050;
        *(undefined8 *)(lVar9 + 0x30) = 0;
        piStack_178 = (int *)plVar6[1];
        puStack_180 = (undefined *)*plVar6;
        lStack_170 = plVar6[2];
        lStack_160 = plVar6[4];
        lStack_168 = plVar6[3];
        lStack_150 = plVar6[6];
        lStack_158 = plVar6[5];
        lStack_140 = plVar6[8];
        lStack_148 = plVar6[7];
        lStack_138 = plVar6[9];
        _free();
        piVar2 = piStack_178;
        if (puStack_180 == (undefined *)0x8000000000000000) {
          uVar14 = FUN_10072aa8c(10,&UNK_108ca1951,0x31);
        }
        else {
          piStack_208 = piStack_178;
          puStack_210 = puStack_180;
          lStack_200 = lStack_170;
          if (lStack_170 == 4) {
            if (*piStack_178 == 0x706f7473) {
              uVar15 = 1;
              iVar4 = __ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17hafcc85949dbdb592E
                                (&lStack_168,1,0);
              if (iVar4 == 0) goto LAB_1004221e8;
            }
          }
          else if (((lStack_170 == 5) && (*piStack_178 == 0x72617473 && (char)piStack_178[1] == 't')
                   ) && (uVar7 = __ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17hafcc85949dbdb592E
                                           (&lStack_168,1,0), (uVar7 & 1) == 0)) {
            uVar15 = 0;
LAB_1004221e8:
            FUN_100e3ab90(&lStack_168);
            if (puStack_210 != (undefined *)0x0) {
              _free(piVar2);
            }
            goto LAB_100422054;
          }
          puStack_198 = &DAT_10112965c;
          ppuStack_1a0 = &puStack_210;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&puStack_1d0,s_the_subcommand_____wasn_t_recogn_108abf349,&ppuStack_1a0);
          uVar14 = FUN_10072a880(&puStack_1d0);
          FUN_100e3ab90(&lStack_168);
          if (puStack_210 != (undefined *)0x0) {
            _free(piStack_208);
          }
        }
        *(undefined8 *)(puVar5 + 8) = uVar14;
      }
      uVar10 = 1;
LAB_100422060:
      *puVar5 = uVar10;
      return;
    }
    uVar11 = uVar7 >> 2;
    if (((uVar7 & 3) != 1) || ((uVar11 & 0x1ffffffffffff) != 1)) {
      uVar12 = uVar7 & 0xfff8000000000003;
      uVar13 = *(ulong *)(puStack_e8 + 0x50);
      bVar1 = uVar13 == uVar7;
      uVar7 = uVar13;
      if (bVar1) {
        *(ulong *)(puStack_e8 + 0x50) = (uVar11 & 0xc001ffffffffffff) * 4 - 4 | uVar12;
        goto LAB_100421ea0;
      }
      goto LAB_100421f08;
    }
    uVar13 = uVar7 & 0xfff8000000000000;
    uVar11 = *(ulong *)(puStack_e8 + 0x50);
    bVar1 = uVar11 != uVar7;
    uVar7 = uVar11;
  } while (bVar1);
  *(ulong *)(puStack_e8 + 0x50) = uVar13 | 3;
  FUN_10074fd94();
LAB_100421ea0:
  lVar9 = plVar8[1];
  goto joined_r0x000100421e94;
}

