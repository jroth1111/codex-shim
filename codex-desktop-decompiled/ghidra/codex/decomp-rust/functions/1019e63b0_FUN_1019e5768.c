
/* WARNING: Possible PIC construction at 0x0001019e6254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e6258) */
/* WARNING: Removing unreachable block (ram,0x0001019e6264) */
/* WARNING: Removing unreachable block (ram,0x0001019e62e4) */
/* WARNING: Removing unreachable block (ram,0x0001019e6304) */
/* WARNING: Removing unreachable block (ram,0x0001019e6308) */
/* WARNING: Removing unreachable block (ram,0x0001019e630c) */
/* WARNING: Removing unreachable block (ram,0x0001019e6280) */
/* WARNING: Removing unreachable block (ram,0x0001019e628c) */
/* WARNING: Removing unreachable block (ram,0x0001019e6644) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1019e5768(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar13;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  ulong *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x21;
  long *plVar20;
  ulong unaff_x22;
  undefined1 *puVar21;
  long lVar22;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long *plVar12;
  byte *pbVar14;
  long *plVar15;
  
  uVar9 = param_2[4];
  uVar17 = param_2[5];
  uVar18 = param_2[1];
  if (uVar18 == 0) {
    uStack_98 = 0;
    puStack_a0 = &UNK_108cea360;
    lStack_88 = 0;
    uStack_90 = 0;
    puStack_c0 = param_1;
    goto LAB_1019e5978;
  }
  uVar1 = uVar18 + 1;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar1;
  if (SUB168(auVar28 * ZEXT816(0x18),8) == 0) {
    unaff_x22 = uVar1 * 0x18;
    unaff_x21 = uVar18 + 9;
    uVar19 = unaff_x22 + unaff_x21;
    if ((CARRY8(unaff_x22,unaff_x21)) || (0x7ffffffffffffff8 < uVar19)) goto LAB_1019e5804;
    uStack_d0 = uVar17;
    uStack_c8 = uVar9;
    puStack_c0 = param_1;
    if (uVar19 == 0) goto LAB_1019e581c;
    if (uVar19 < 8) {
      puStack_80 = (undefined *)0x0;
      param_3 = uVar19;
      iVar6 = _posix_memalign(&puStack_80,8,uVar19);
      puVar7 = puStack_80;
      if (iVar6 == 0) goto LAB_1019e5844;
LAB_1019e59b4:
      uVar9 = func_0x0001087c906c(8,uVar19);
      FUN_10194b248(unaff_x21,puStack_80);
      FUN_10196acc8(&puStack_80);
      auVar27 = __Unwind_Resume(uVar9);
      lVar24 = auVar27._8_8_;
      puVar13 = auVar27._0_8_;
      uStack_e8 = 0x1019e59e0;
      uVar9 = *(undefined8 *)(lVar24 + 0x20);
      uVar17 = *(undefined8 *)(lVar24 + 0x28);
      uVar18 = *(ulong *)(lVar24 + 8);
      if (uVar18 == 0) {
        uStack_178 = 0;
        puStack_180 = &UNK_108cea360;
        lStack_168 = 0;
        uStack_170 = 0;
        goto LAB_1019e5c40;
      }
      puVar21 = (undefined1 *)(uVar18 + 1);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = puVar21;
      puStack_f0 = &stack0xfffffffffffffff0;
      if (SUB168(auVar3 * ZEXT816(0x30),8) == 0) {
        unaff_x22 = (long)puVar21 * 0x30;
        uVar19 = uVar18 + 9;
        uVar1 = unaff_x22 + uVar19;
        if ((CARRY8(unaff_x22,uVar19)) || (0x7ffffffffffffff8 < uVar1)) goto LAB_1019e5a7c;
        uStack_1b8 = uVar17;
        uStack_1b0 = uVar9;
        if (uVar1 == 0) goto LAB_1019e5a94;
        puStack_1a8 = puVar13;
        if (uVar1 < 8) {
          puStack_160 = (undefined *)0x0;
          param_3 = uVar1;
          iVar6 = _posix_memalign(&puStack_160,8,uVar1);
          puVar7 = puStack_160;
          if (iVar6 == 0) goto LAB_1019e5abc;
LAB_1019e5c90:
          uVar9 = func_0x0001087c906c(8,uVar1);
          FUN_10194b8a8(lStack_198,puStack_160);
          FUN_101933378(&puStack_160);
          auVar28 = __Unwind_Resume(uVar9);
          pbVar14 = auVar28._8_8_;
          plVar11 = auVar28._0_8_;
          uStack_1c8 = 0x1019e5cd0;
          pppuVar23 = &ppuStack_1d0;
          bVar2 = *pbVar14;
          uStack_1f0 = unaff_x22;
          uStack_1e8 = uVar1;
          uStack_1e0 = uVar19;
          uStack_1d8 = uVar9;
          ppuStack_1d0 = &puStack_f0;
          if (bVar2 < 0xe) {
            if (bVar2 == 0xc) {
              lVar25 = *(long *)(pbVar14 + 0x10);
              lVar26 = *(long *)(pbVar14 + 0x18);
joined_r0x0001019e5d30:
              if (lVar26 == 0) {
                lVar8 = 1;
              }
              else {
                auVar30._8_8_ = lVar26;
                auVar30._0_8_ = plVar11;
                lVar8 = _malloc(lVar26);
                if (lVar8 == 0) {
                  uVar9 = 0x1019e5dbc;
                  auVar29 = func_0x0001087c9084(1,lVar26);
                  lVar26 = 0;
                  puVar5 = auStack_210;
                  do {
                    uVar17 = auVar30._8_8_;
                    plVar11 = auVar29._8_8_;
                    puVar13 = auVar29._0_8_;
                    *(long *)(puVar5 + -0x30) = lVar26;
                    *(long *)(puVar5 + -0x28) = lVar25;
                    *(undefined8 *)(puVar5 + -0x20) = uVar17;
                    *(long *)(puVar5 + -0x18) = auVar30._0_8_;
                    *(undefined1 ****)(puVar5 + -0x10) = pppuVar23;
                    *(undefined8 *)(puVar5 + -8) = uVar9;
                    lVar25 = *plVar11;
                    if (lVar25 != -0x7fffffffffffffff) {
                      *(undefined8 *)(puVar5 + -0x68) = 0;
                      *(undefined8 *)(puVar5 + -0x60) = 1;
                      *(undefined8 *)(puVar5 + -0x58) = 0;
                      __ZN84__LT_toml__ser__value__key__KeySerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17h97c00fd3c87f7941E
                                (puVar5 + -0x50,puVar5 + -0x68,param_3,param_4);
                      if (*(long *)(puVar5 + -0x50) == -0x7ffffffffffffffc) {
                        *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x60);
                        *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x68);
                        *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x58);
                        if (lVar25 != -0x8000000000000000 && lVar25 != 0) {
                          _free(plVar11[1]);
                        }
                        lVar24 = *(long *)(puVar5 + -0x50);
                        plVar11[1] = *(long *)(puVar5 + -0x48);
                        *plVar11 = lVar24;
                        plVar11[2] = *(long *)(puVar5 + -0x40);
                        *puVar13 = 0x8000000000000004;
                      }
                      else {
                        uVar9 = *(undefined8 *)(puVar5 + -0x50);
                        puVar13[1] = *(undefined8 *)(puVar5 + -0x48);
                        *puVar13 = uVar9;
                        puVar13[2] = *(undefined8 *)(puVar5 + -0x40);
                        if (*(long *)(puVar5 + -0x68) != 0) {
                          _free(*(undefined8 *)(puVar5 + -0x60));
                        }
                      }
                      return;
                    }
                    puVar16 = (ulong *)&UNK_10b269de8;
                    plVar11 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                                (&UNK_108cf273d,0xc5);
                    if (*(long *)(puVar5 + -0x68) != 0) {
                      _free(*(undefined8 *)(puVar5 + -0x60));
                    }
                    auVar30 = __Unwind_Resume(plVar11);
                    plVar15 = auVar30._8_8_;
                    plVar12 = auVar30._0_8_;
                    *(undefined8 *)(puVar5 + -0xd0) = unaff_x28;
                    *(undefined8 *)(puVar5 + -200) = unaff_x27;
                    *(undefined8 *)(puVar5 + -0xc0) = unaff_x26;
                    *(ulong *)(puVar5 + -0xb8) = unaff_x25;
                    *(long *)(puVar5 + -0xb0) = lVar24;
                    *(undefined1 **)(puVar5 + -0xa8) = puVar21;
                    *(long *)(puVar5 + -0xa0) = lVar26;
                    *(undefined8 *)(puVar5 + -0x98) = 0x8000000000000001;
                    *(undefined8 *)(puVar5 + -0x90) = uVar17;
                    *(long **)(puVar5 + -0x88) = plVar11;
                    *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x10;
                    *(undefined8 *)(puVar5 + -0x78) = 0x1019e5ec4;
                    pppuVar23 = (undefined1 ***)(puVar5 + -0x80);
                    lVar24 = *plVar15;
                    if (lVar24 == -0x7fffffffffffffff) {
                      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                (&UNK_108cf273d,0xc5,&UNK_10b269e00);
LAB_1019e6530:
                      func_0x000108a079f0(&UNK_108cf27d0,0x23,&UNK_10b269ec0);
                      plVar20 = (long *)0x8000000000000001;
                      lVar24 = extraout_x1_01;
                      goto LAB_1019e6548;
                    }
                    *plVar15 = -0x8000000000000000;
                    if (lVar24 == -0x8000000000000000) goto LAB_1019e6530;
                    lVar26 = -0x7ffffffffffffffc;
                    *(long *)(puVar5 + -0x220) = lVar24;
                    lVar24 = plVar15[1];
                    *(long *)(puVar5 + -0x210) = plVar15[2];
                    *(long *)(puVar5 + -0x218) = lVar24;
                    *(undefined8 *)(puVar5 + -0x208) = 0;
                    *(undefined8 *)(puVar5 + -0x200) = 1;
                    *(undefined8 *)(puVar5 + -0x1f8) = 0;
                    uVar18 = *puVar16 ^ 0x8000000000000000;
                    if (-1 < (long)*puVar16) {
                      uVar18 = 6;
                    }
                    if ((long)uVar18 < 3) {
                      if (uVar18 == 0) {
                        __ZN81__LT_toml__ser__value__ValueSerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17hdebb71f02f8851d9E
                                  (puVar5 + -0x1f0,puVar5 + -0x208,plVar15,puVar16[2],puVar16[3]);
                      }
                      else {
                        if (uVar18 == 1) {
                          *(ulong *)(puVar5 + -0x1d8) = puVar16[1];
                          *(undefined1 **)(puVar5 + -0x188) = puVar5 + -0x1d8;
                          *(undefined1 **)(puVar5 + -0xf8) = puVar5 + -0x188;
                          *(undefined **)(puVar5 + -0xf0) = &DAT_10611f7b8;
                          iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                                            (puVar5 + -0x208,&UNK_10b4cf200,s__108b38569,
                                             puVar5 + -0xf8);
                          goto LAB_1019e5fe8;
                        }
                        func_0x00010612882c(puVar5 + -0x1f0,puVar16[1],puVar5 + -0x208);
                      }
LAB_1019e6314:
                      lVar25 = *(long *)(puVar5 + -0x1f0);
                      goto LAB_1019e6318;
                    }
                    puVar21 = puVar5 + -0x1a0;
                    if ((long)uVar18 < 5) {
                      if (uVar18 != 3) {
                        *(undefined4 *)(puVar5 + -0x1d0) = 2;
                        *(undefined8 *)(puVar5 + -0x1d8) = 0x8000000000000001;
                        *(undefined1 **)(puVar5 + -0x1c0) = puVar5 + -0x208;
                        *(undefined1 **)(puVar5 + -0x1b8) = puVar5 + -0x208;
                        *(undefined8 *)(puVar5 + -0x188) = 0;
                        *(undefined8 *)(puVar5 + -0x180) = 1;
                        *(undefined8 *)(puVar5 + -0x178) = 0;
                        *(undefined8 *)(puVar5 + -0xe8) = 0x60000020;
                        *(undefined1 **)(puVar5 + -0xf8) = puVar5 + -0x188;
                        *(undefined **)(puVar5 + -0xf0) = &UNK_10b25d2c0;
                        iVar6 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                                          (puVar16 + 1,puVar5 + -0xf8);
                        if (iVar6 == 0) {
                          lVar24 = *(long *)(puVar5 + -0x188);
                          uVar9 = *(undefined8 *)(puVar5 + -0x180);
                          __ZN80__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hde5586f6355fdd1fE
                                    (puVar5 + -0xf8,uVar9,*(undefined8 *)(puVar5 + -0x178));
                          if ((*(uint *)(puVar5 + -0xf8) & 1) == 0) {
                            *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -0xec);
                            *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0xf4);
                            *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0xe4);
                            *(undefined8 *)(puVar5 + -0x1c8) = *(undefined8 *)(puVar5 + -0xec);
                            *(undefined8 *)(puVar5 + -0x1d0) = *(undefined8 *)(puVar5 + -0xf4);
                            *(undefined8 *)(puVar5 + -0x1c0) = *(undefined8 *)(puVar5 + -0xe4);
                          }
                          else {
                            *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0xe8);
                            *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xf0);
                            *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0xe8);
                            *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0xf0);
                            *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0xe0);
                            *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -0xd8);
                            *(undefined8 *)(puVar5 + -0x188) = 0;
                            __ZN4toml3ser5value3map6dt_err17h95730fcd51874602E
                                      (puVar5 + -0x1a0,puVar5 + -0x188);
                            *(undefined8 *)(puVar5 + -0x1a8) = *(undefined8 *)(puVar5 + -400);
                            *(undefined8 *)(puVar5 + -0x1b0) = *(undefined8 *)(puVar5 + -0x198);
                            if (*(long *)(puVar5 + -0x1a0) != -0x7ffffffffffffffc) {
                              *(long *)(puVar5 + -0x1f0) = *(long *)(puVar5 + -0x1a0);
                              *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x1a8);
                              *(undefined8 *)(puVar5 + -0x1e8) = *(undefined8 *)(puVar5 + -0x1b0);
                              if (lVar24 != 0) {
                                _free(uVar9);
                              }
                              goto LAB_1019e6314;
                            }
                          }
                          if (lVar24 != 0) {
                            _free(uVar9);
                          }
                          __ZN88__LT_toml__ser__value__map__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17h95df88aea6058f62E
                                    (puVar5 + -0x1f0,puVar5 + -0x1d8);
                          goto LAB_1019e6314;
                        }
                        func_0x000108a07a3c(&UNK_108cf1f7a,0x37,puVar5 + -0x140,&UNK_10b268ec0,
                                            &UNK_10b268df0);
                        goto LAB_1019e665c;
                      }
                      puVar5[-0x1d8] = (char)puVar16[1];
                      *(undefined1 **)(puVar5 + -0x188) = puVar5 + -0x1d8;
                      *(undefined1 **)(puVar5 + -0xf8) = puVar5 + -0x188;
                      *(undefined **)(puVar5 + -0xf0) = &DAT_10611f610;
                      iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                                        (puVar5 + -0x208,&UNK_10b4cf200,s__108b38569,puVar5 + -0xf8)
                      ;
LAB_1019e5fe8:
                      if (iVar6 == 0) goto LAB_1019e6320;
                      puVar13 = (undefined8 *)_malloc(0x26);
                      if (puVar13 == (undefined8 *)0x0) goto LAB_1019e6634;
                      puVar13[1] = 0x6572727563636f20;
                      *puVar13 = 0x726f727265206e61;
                      puVar13[3] = 0x6120676e69746972;
                      puVar13[2] = 0x77206e6568772064;
                      *(undefined8 *)((long)puVar13 + 0x1e) = 0x65756c6176206120;
                      *plVar12 = 0x26;
                      plVar12[1] = (long)puVar13;
                      plVar12[2] = 0x26;
                      lVar24 = *(long *)(puVar5 + -0x208);
                      goto joined_r0x0001019e6024;
                    }
                    bVar2 = *(byte *)((long)plVar15 + 0x21);
                    unaff_x25 = (ulong)bVar2;
                    if (uVar18 == 5) {
                      uVar18 = puVar16[2];
                      uVar1 = puVar16[3];
                      FUN_108a8c380(puVar5 + -0x208,0,1,1,1);
                      lVar24 = *(long *)(puVar5 + -0x1f8);
                      *(undefined1 *)(*(long *)(puVar5 + -0x200) + lVar24) = 0x5b;
                      *(long *)(puVar5 + -0x1f8) = lVar24 + 1;
                      *(undefined8 *)(puVar5 + -0xf8) = 1;
                      *(ulong *)(puVar5 + -0xf0) = uVar1;
                      *(undefined1 **)(puVar5 + -0xe8) = puVar5 + -0x208;
                      puVar5[-0xe0] = 0;
                      puVar5[-0xdf] = bVar2;
                      if (uVar1 == 0) {
                        plVar11 = (long *)(puVar5 + -0x208);
                        goto LAB_1019e64d8;
                      }
                      lVar24 = uVar1 * 0x50;
                      goto LAB_1019e608c;
                    }
                    FUN_108a8c380(puVar5 + -0x208,0,1,1,1);
                    lVar24 = *(long *)(puVar5 + -0x1f8);
                    *(undefined1 *)(*(long *)(puVar5 + -0x200) + lVar24) = 0x7b;
                    *(long *)(puVar5 + -0x1f8) = lVar24 + 1;
                    *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x208;
                    *(ulong *)(puVar5 + -0x100) = unaff_x25 << 8;
                    *(undefined8 *)(puVar5 + -0x120) = 0x8000000000000000;
                    if (puVar16[2] == 0) {
                      FUN_106125dd8(puVar5 + -0x1f0,puVar5 + -0x120);
                      goto LAB_1019e6314;
                    }
                    uVar18 = puVar16[1];
                    lVar24 = puVar16[2] * 0x70;
                    lVar25 = uVar18 + 0x18;
                    param_3 = *(ulong *)(uVar18 + 8);
                    param_4 = *(undefined8 *)(uVar18 + 0x10);
                    auVar29._8_8_ = puVar5 + -0x120;
                    auVar29._0_8_ = puVar5 + -0xf8;
                    uVar9 = 0x1019e6258;
                    puVar5 = puVar5 + -0x220;
                  } while( true );
                }
              }
              _memcpy(lVar8,lVar25,lVar26);
              *plVar11 = lVar8;
              plVar11[1] = lVar26;
              return;
            }
            if (bVar2 == 0xd) {
              lVar25 = *(long *)(pbVar14 + 8);
              lVar26 = *(long *)(pbVar14 + 0x10);
              goto joined_r0x0001019e5d30;
            }
LAB_1019e5d98:
            lVar24 = FUN_1088bb940(pbVar14,&uStack_1f1,&UNK_10b25d5d0);
          }
          else {
            if (bVar2 == 0xe) {
              uStack_208 = *(undefined8 *)(pbVar14 + 0x10);
              uStack_200 = *(undefined8 *)(pbVar14 + 0x18);
            }
            else {
              if (bVar2 != 0xf) goto LAB_1019e5d98;
              uStack_208 = *(undefined8 *)(pbVar14 + 8);
              uStack_200 = *(undefined8 *)(pbVar14 + 0x10);
            }
            auStack_210[0] = 6;
            lVar24 = func_0x000108a4a50c(auStack_210,&uStack_1f1,&UNK_10b25d5d0);
          }
          *plVar11 = 0;
          plVar11[1] = lVar24;
          return;
        }
        puVar7 = (undefined *)_malloc(uVar1);
LAB_1019e5abc:
        auVar27._8_8_ = lVar24;
        auVar27._0_8_ = puStack_1a8;
        if (puVar7 == (undefined *)0x0) goto LAB_1019e5c90;
      }
      else {
LAB_1019e5a7c:
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
        auVar27._8_8_ = extraout_x1_00;
        auVar27._0_8_ = puStack_1a8;
LAB_1019e5a94:
        puVar7 = (undefined *)0x8;
      }
      puVar13 = auVar27._8_8_;
      puStack_1a8 = auVar27._0_8_;
      puVar7 = puVar7 + unaff_x22;
      uStack_150 = uVar18;
      if (7 < uVar18) {
        uStack_150 = ((ulong)puVar21 >> 3) * 7;
      }
      uStack_148 = 0;
      plStack_188 = (long *)*puVar13;
      puStack_160 = puVar7;
      uStack_158 = uVar18;
      _memcpy(puVar7,plStack_188,uVar19);
      lStack_1a0 = puVar13[3];
      puStack_1c0 = puVar13;
      if (lStack_1a0 != 0) {
        lVar24 = 0;
        puStack_190 = puVar7 + -0x30;
        plVar11 = plStack_188 + 1;
        lVar25 = *plStack_188;
        uVar18 = CONCAT17(-(-1 < lVar25),
                          CONCAT16(-(-1 < (char)((ulong)lVar25 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar25 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar25 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar25 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar25
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar25 >> 8)),-(-1 < (char)lVar25)))))))) &
                 0x8080808080808080;
        plVar12 = plStack_188;
        lVar25 = lStack_1a0;
        do {
          while (uVar18 == 0) {
            lVar26 = *plVar11;
            plVar11 = plVar11 + 1;
            plVar12 = plVar12 + -0x30;
            uVar18 = CONCAT17(-(-1 < lVar26),
                              CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar26 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar26 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar26 >> 8)),
                                                           -(-1 < (char)lVar26)))))))) &
                     0x8080808080808080;
          }
          uVar1 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          plVar15 = plVar12 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6;
          lVar26 = plVar15[-5];
          lVar8 = plVar15[-4];
          if (lVar8 == 0) {
            lVar10 = 1;
            _memcpy(1,lVar26,0);
            lVar26 = plVar15[-2];
            lVar22 = plVar15[-1];
            if (lVar22 == 0) goto LAB_1019e5b3c;
LAB_1019e5c0c:
            lStack_198 = lVar24;
            lVar24 = _malloc(lVar22);
            if (lVar24 == 0) {
              func_0x0001087c9084(1,lVar22);
LAB_1019e5c8c:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1019e5c90);
              (*pcVar4)();
            }
          }
          else {
            lVar10 = _malloc(lVar8);
            if (lVar10 == 0) {
              lStack_198 = lVar24;
              func_0x0001087c9084(1,lVar8);
              goto LAB_1019e5c8c;
            }
            _memcpy(lVar10,lVar26,lVar8);
            lVar26 = plVar15[-2];
            lVar22 = plVar15[-1];
            if (lVar22 != 0) goto LAB_1019e5c0c;
LAB_1019e5b3c:
            lVar24 = 1;
          }
          uVar18 = uVar18 - 1 & uVar18;
          lVar25 = lVar25 + -1;
          _memcpy(lVar24,lVar26,lVar22);
          lVar26 = (long)plStack_188 - (long)plVar15 >> 4;
          plVar15 = (long *)(puStack_190 + lVar26 * -0x10);
          *plVar15 = lVar8;
          plVar15[1] = lVar10;
          plVar15[2] = lVar8;
          plVar15[3] = lVar22;
          plVar15[4] = lVar24;
          plVar15[5] = lVar22;
          lVar24 = lVar26 * -0x5555555555555555 + 1;
        } while (lVar25 != 0);
      }
      uStack_170 = puStack_1c0[2];
      uStack_178 = uStack_158;
      puStack_180 = puStack_160;
      lStack_168 = lStack_1a0;
      puVar13 = puStack_1a8;
      uVar9 = uStack_1b0;
      uVar17 = uStack_1b8;
LAB_1019e5c40:
      puVar13[4] = uVar9;
      puVar13[5] = uVar17;
      puVar13[1] = uStack_178;
      *puVar13 = puStack_180;
      puVar13[3] = lStack_168;
      puVar13[2] = uStack_170;
      return;
    }
    puVar7 = (undefined *)_malloc(uVar19);
LAB_1019e5844:
    if (puVar7 == (undefined *)0x0) goto LAB_1019e59b4;
  }
  else {
LAB_1019e5804:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
    param_2 = extraout_x1;
LAB_1019e581c:
    puVar7 = (undefined *)0x8;
  }
  puVar7 = puVar7 + unaff_x22;
  uStack_70 = uVar18;
  if (7 < uVar18) {
    uStack_70 = (uVar1 >> 3) * 7;
  }
  uStack_68 = 0;
  plStack_a8 = (long *)*param_2;
  puStack_80 = puVar7;
  uStack_78 = uVar18;
  _memcpy(puVar7,plStack_a8,unaff_x21);
  lStack_b8 = param_2[3];
  puStack_d8 = param_2;
  if (lStack_b8 != 0) {
    puStack_b0 = puVar7 + -0x18;
    plVar11 = plStack_a8 + 1;
    lVar24 = *plStack_a8;
    uVar18 = CONCAT17(-(-1 < lVar24),
                      CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar24 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar24 >> 8)),-(-1 < (char)lVar24)))))))) &
             0x8080808080808080;
    plVar12 = plStack_a8;
    lVar24 = lStack_b8;
    do {
      while (uVar18 == 0) {
        lVar25 = *plVar11;
        plVar11 = plVar11 + 1;
        plVar12 = plVar12 + -0x18;
        uVar18 = CONCAT17(-(-1 < lVar25),
                          CONCAT16(-(-1 < (char)((ulong)lVar25 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar25 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar25 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar25 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar25
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar25 >> 8)),-(-1 < (char)lVar25)))))))) &
                 0x8080808080808080;
      }
      uVar1 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar15 = plVar12 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 3;
      lVar25 = plVar15[-2];
      lVar26 = plVar15[-1];
      if (lVar26 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = _malloc(lVar26);
        if (lVar8 == 0) {
          func_0x0001087c9084(1,lVar26);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019e59b4);
          (*pcVar4)();
        }
      }
      _memcpy(lVar8,lVar25,lVar26);
      uVar18 = uVar18 - 1 & uVar18;
      plVar15 = (long *)(puStack_b0 + ((long)plStack_a8 - (long)plVar15 >> 3) * -8);
      *plVar15 = lVar26;
      plVar15[1] = lVar8;
      plVar15[2] = lVar26;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  uStack_90 = puStack_d8[2];
  uStack_98 = uStack_78;
  puStack_a0 = puStack_80;
  lStack_88 = lStack_b8;
  uVar9 = uStack_c8;
  uVar17 = uStack_d0;
LAB_1019e5978:
  puStack_c0[4] = uVar9;
  puStack_c0[5] = uVar17;
  puStack_c0[1] = uStack_98;
  *puStack_c0 = puStack_a0;
  puStack_c0[3] = lStack_88;
  puStack_c0[2] = uStack_90;
  return;
  while( true ) {
    uVar18 = uVar18 + 0x50;
    lVar24 = lVar24 + -0x50;
    if (lVar24 == 0) break;
LAB_1019e608c:
    *(ulong *)(puVar5 + -0x1d8) = uVar18;
    FUN_101aa9b68(puVar5 + -0x188,puVar5 + -0xf8,puVar5 + -0x1d8);
    lVar25 = *(long *)(puVar5 + -0x188);
    if (lVar25 != -0x7ffffffffffffffc) {
      *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x178);
      *(undefined8 *)(puVar5 + -0x1e8) = *(undefined8 *)(puVar5 + -0x180);
      goto LAB_1019e6318;
    }
  }
  plVar11 = *(long **)(puVar5 + -0xe8);
  if ((((puVar5[-0xdf] & 1) != 0) &&
      (((*(uint *)(puVar5 + -0xf8) ^ 1) & 1) != 0 || 1 < *(ulong *)(puVar5 + -0xf0))) &&
     ((puVar5[-0xe0] & 1) != 0)) {
    lVar24 = plVar11[2];
    if (*plVar11 == lVar24) {
      FUN_108a8c380(plVar11,lVar24,1,1,1);
      lVar24 = plVar11[2];
    }
    *(undefined1 *)(plVar11[1] + lVar24) = 10;
    plVar11[2] = lVar24 + 1;
  }
LAB_1019e64d8:
  lVar24 = plVar11[2];
  if (*plVar11 == lVar24) {
    FUN_108a8c380(plVar11,lVar24,1,1,1);
    lVar24 = plVar11[2];
  }
  *(undefined1 *)(plVar11[1] + lVar24) = 0x5d;
  plVar11[2] = lVar24 + 1;
  *(long **)(puVar5 + -0x1e8) = plVar11;
  lVar25 = -0x7ffffffffffffffc;
LAB_1019e6318:
  if (lVar25 == -0x7ffffffffffffffc) {
LAB_1019e6320:
    plVar20 = (long *)plVar15[3];
    if ((*(byte *)(plVar15 + 4) & 1) == 0) {
      lVar24 = plVar20[2];
    }
    else {
      lVar24 = plVar20[2];
      if (*plVar20 == lVar24) {
        FUN_1088bb36c(plVar20,lVar24,1,1,1);
        lVar24 = plVar20[2];
      }
      *(undefined1 *)(plVar20[1] + lVar24) = 0x2c;
      lVar24 = lVar24 + 1;
      plVar20[2] = lVar24;
    }
    *(undefined1 *)(plVar15 + 4) = 1;
    plVar11 = plVar12;
    if (*plVar20 == lVar24) {
LAB_1019e6548:
      FUN_1088bb36c(plVar20,lVar24,1,1,1);
      lVar24 = plVar20[2];
    }
    *(undefined1 *)(plVar20[1] + lVar24) = 0x20;
    plVar20[2] = lVar24 + 1;
    *(undefined1 **)(puVar5 + -0xf8) = puVar5 + -0x220;
    *(undefined **)(puVar5 + -0xf0) = &DAT_1019a7324;
    iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                      (plVar20,&UNK_10b25d2c0,s__108add0bf,puVar5 + -0xf8);
    if (iVar6 == 0) {
      lVar24 = plVar20[2];
      if (*plVar20 == lVar24) {
        FUN_1088bb36c(plVar20,lVar24,1,1,1);
        lVar24 = plVar20[2];
      }
      *(undefined1 *)(plVar20[1] + lVar24) = 0x20;
      lVar24 = lVar24 + 1;
      plVar20[2] = lVar24;
      if (*plVar20 == lVar24) {
        FUN_1088bb36c(plVar20,lVar24,1,1,1);
        lVar24 = plVar20[2];
      }
      *(undefined1 *)(plVar20[1] + lVar24) = 0x3d;
      lVar24 = lVar24 + 1;
      plVar20[2] = lVar24;
      if (*plVar20 == lVar24) {
        FUN_1088bb36c(plVar20,lVar24,1,1,1);
        lVar24 = plVar20[2];
      }
      *(undefined1 *)(plVar20[1] + lVar24) = 0x20;
      plVar20[2] = lVar24 + 1;
      *(undefined1 **)(puVar5 + -0xf8) = puVar5 + -0x208;
      *(undefined **)(puVar5 + -0xf0) = &DAT_1019a7324;
      iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                        (plVar20,&UNK_10b25d2c0,s__108add0bf,puVar5 + -0xf8);
      if (iVar6 == 0) {
        *plVar11 = lVar26;
        lVar24 = *(long *)(puVar5 + -0x208);
        goto joined_r0x0001019e6024;
      }
    }
    puVar13 = (undefined8 *)_malloc(0x26);
    if (puVar13 == (undefined8 *)0x0) {
LAB_1019e6634:
      func_0x0001087c9084(1,0x26);
LAB_1019e665c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1019e6660);
      (*pcVar4)();
    }
    puVar13[1] = 0x6572727563636f20;
    *puVar13 = 0x726f727265206e61;
    puVar13[3] = 0x6120676e69746972;
    puVar13[2] = 0x77206e6568772064;
    *(undefined8 *)((long)puVar13 + 0x1e) = 0x65756c6176206120;
    *plVar11 = 0x26;
    plVar11[1] = (long)puVar13;
    plVar11[2] = 0x26;
    lVar24 = *(long *)(puVar5 + -0x208);
  }
  else {
    lVar24 = *(long *)(puVar5 + -0x1e8);
    lVar26 = *(long *)(puVar5 + -0x1e0);
    *plVar12 = lVar25;
    plVar12[1] = lVar24;
    plVar12[2] = lVar26;
    lVar24 = *(long *)(puVar5 + -0x208);
  }
joined_r0x0001019e6024:
  if (lVar24 != 0) {
    _free(*(undefined8 *)(puVar5 + -0x200));
  }
  if (*(long *)(puVar5 + -0x220) != 0) {
    _free(*(undefined8 *)(puVar5 + -0x218));
  }
  return;
}

