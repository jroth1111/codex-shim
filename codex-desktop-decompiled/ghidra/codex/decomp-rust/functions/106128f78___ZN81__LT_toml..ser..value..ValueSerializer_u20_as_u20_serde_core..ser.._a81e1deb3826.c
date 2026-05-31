
/* WARNING: Possible PIC construction at 0x0001061206a4: Changing call to branch */

void __ZN81__LT_toml__ser__value__ValueSerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17hdebb71f02f8851d9E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,long param_5
               )

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte *pbVar22;
  char cVar23;
  char cVar24;
  long *plVar25;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar26;
  undefined8 unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ****ppppuVar27;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [7];
  undefined1 uStack_d9;
  undefined1 *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 ***pppuStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined1 *puStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_5 == 0) {
    bVar21 = 0;
    bVar19 = 0;
    iVar8 = 0;
    bVar4 = false;
    bVar3 = false;
  }
  else {
    bVar3 = false;
    bVar4 = false;
    iVar8 = 0;
    bVar19 = 0;
    bVar21 = 0;
    cVar24 = '\0';
    bVar7 = 0;
    lVar15 = param_5;
    pbVar22 = param_4;
    do {
      bVar2 = *pbVar22;
      bVar20 = bVar21;
      if (bVar2 < 0x22) {
        if (bVar2 == 9) {
          bVar7 = 0;
          cVar24 = '\0';
        }
        else {
          if (bVar2 != 10) {
            bVar7 = 0;
            cVar23 = '\0';
            goto LAB_106128bd0;
          }
          bVar7 = 0;
          cVar24 = '\0';
          iVar8 = 1;
        }
      }
      else {
        if (bVar2 == 0x22) {
          cVar23 = '\0';
          bVar7 = bVar7 + 1;
          bVar20 = bVar7;
          if (bVar7 <= bVar21) {
            bVar20 = bVar21;
          }
        }
        else {
          if (bVar2 == 0x5c) {
            bVar7 = 0;
            cVar24 = '\0';
            bVar4 = true;
            goto LAB_106128be0;
          }
          bVar21 = cVar24 + 1U;
          if ((byte)(cVar24 + 1U) <= bVar19) {
            bVar21 = bVar19;
          }
          bVar7 = 0;
          cVar23 = '\0';
          if (bVar2 == 0x27) {
            cVar23 = cVar24 + '\x01';
            bVar19 = bVar21;
          }
        }
LAB_106128bd0:
        bVar3 = (bool)((bVar2 < 0x20 || bVar2 == 0x7f) | bVar3);
        bVar21 = bVar20;
        cVar24 = cVar23;
      }
LAB_106128be0:
      lVar15 = lVar15 + -1;
      pbVar22 = pbVar22 + 1;
    } while (lVar15 != 0);
  }
  if (((bVar3 || bVar4) || (bVar21 != 0)) || (iVar8 != 0)) {
    uVar16 = 3;
    if (iVar8 == 0) {
      uVar16 = 1;
    }
    if (!bVar3 && bVar19 < 3) {
      uVar16 = 2;
    }
    uVar1 = 3;
    if ((bVar3 || bVar4) || 2 < bVar21) {
      uVar1 = uVar16;
    }
    uVar16 = 0;
    if ((bVar3 || iVar8 != 0) || bVar19 != 0) {
      uVar16 = uVar1;
    }
    iVar8 = FUN_10611e800(param_4,param_5,uVar16,iVar8,param_2);
  }
  else {
    uVar16 = 1;
    iVar8 = FUN_10611e800(param_4,param_5,1,0,param_2);
  }
  if (iVar8 == 0) {
    *param_1 = 0x8000000000000004;
    param_1[1] = param_2;
  }
  else {
    puVar10 = (undefined8 *)_malloc(0x26);
    if (puVar10 == (undefined8 *)0x0) {
      uVar11 = func_0x0001087c9084(1,0x26);
      uStack_28 = 0x106128d78;
      puStack_58 = &uStack_5c;
      ppuStack_50 = &puStack_58;
      puStack_48 = &DAT_10611f754;
      pcVar17 = s__108b38569;
      uStack_5c = uVar16;
      uStack_40 = param_2;
      puStack_38 = param_1;
      puStack_30 = &stack0xfffffffffffffff0;
      iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                        (uVar11,&UNK_10b4cf200,s__108b38569,&ppuStack_50);
      if (iVar8 == 0) {
        *extraout_x8 = 0x8000000000000004;
        extraout_x8[1] = uVar11;
      }
      else {
        puVar10 = (undefined8 *)_malloc(0x26);
        if (puVar10 == (undefined8 *)0x0) {
          uVar12 = func_0x0001087c9084(1,0x26);
          puStack_98 = (undefined1 *)&pcStack_a0;
          uStack_68 = 0x106128e24;
          ppuStack_90 = &puStack_98;
          puStack_88 = &DAT_10611f828;
          uStack_d9 = 0x69;
          pcStack_a0 = pcVar17;
          uStack_80 = uVar11;
          ppuStack_70 = &puStack_30;
          iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                            (uVar12,&UNK_10b4cf200,s__108b38569,&ppuStack_90);
          if (iVar8 == 0) {
            *extraout_x8_00 = 0x8000000000000004;
            extraout_x8_00[1] = uVar12;
          }
          else {
            puVar10 = (undefined8 *)_malloc(0x26);
            if (puVar10 == (undefined8 *)0x0) {
              uVar13 = func_0x0001087c9084(1,0x26);
              puVar6 = auStack_e0;
              uStack_a8 = 0x106128ecc;
              ppppuVar27 = &pppuStack_b0;
              puStack_d8 = &uStack_d9;
              ppuStack_d0 = &puStack_d8;
              puStack_c8 = &DAT_10611f610;
              uStack_c0 = uVar12;
              pppuStack_b0 = &ppuStack_70;
              iVar8 = __ZN4core3fmt5write17h64810b21425781ecE
                                (uVar13,&UNK_10b4cf200,s__108b38569,&ppuStack_d0);
              if (iVar8 == 0) {
                *extraout_x8_01 = -0x7ffffffffffffffc;
                extraout_x8_01[1] = uVar13;
              }
              else {
                puVar10 = (undefined8 *)_malloc(0x26);
                if (puVar10 == (undefined8 *)0x0) {
                  puVar14 = (ulong *)func_0x0001087c9084(1,0x26);
                  uStack_e8 = 0x106128f78;
                  uVar18 = *puVar14 ^ 0x8000000000000000;
                  if (-1 < (long)*puVar14) {
                    uVar18 = 6;
                  }
                  if (uVar18 == 5) {
                    uVar18 = puVar14[1];
                    uVar13 = puVar14[2];
                    uVar26 = puVar14[3];
                    if (uVar26 == 0) {
                      *extraout_x8_02 = 2;
                    }
                    else {
                      puVar10 = (undefined8 *)_malloc(0x14);
                      if (puVar10 == (undefined8 *)0x0) {
                        func_0x0001087c9084(1,0x14);
                        goto LAB_1061291c8;
                      }
                      *(undefined4 *)(puVar10 + 2) = 0x79617272;
                      puVar10[1] = 0x61207974706d6520;
                      *puVar10 = 0x6465746365707865;
                      *extraout_x8_02 = 0;
                      extraout_x8_02[3] = 0x14;
                      extraout_x8_02[4] = puVar10;
                      extraout_x8_02[6] = 0;
                      extraout_x8_02[5] = 0x14;
                      extraout_x8_02[8] = 0;
                      extraout_x8_02[9] = 0;
                      extraout_x8_02[7] = 8;
                    }
                    lVar15 = uVar26 + 1;
                    uVar26 = uVar13;
                    while (lVar15 = lVar15 + -1, lVar15 != 0) {
                      FUN_10611fd9c(uVar26);
                      uVar26 = uVar26 + 0x50;
                    }
                    if (uVar18 != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)PTR__free_10b61b0a8)(uVar13);
                      return;
                    }
                  }
                  else {
                    if (uVar18 == 6) {
                      plVar25 = extraout_x8_01;
                      if (puVar14[6] == 0) {
                        *extraout_x8_02 = 2;
                      }
                      else {
                        puVar10 = (undefined8 *)_malloc(0x14);
                        if (puVar10 == (undefined8 *)0x0) {
                          func_0x0001087c9084(1,0x14);
                          goto LAB_1061291c8;
                        }
                        *(undefined4 *)(puVar10 + 2) = 0x656c6261;
                        puVar10[1] = 0x74207974706d6520;
                        *puVar10 = 0x6465746365707865;
                        *extraout_x8_02 = 0;
                        extraout_x8_02[3] = 0x14;
                        extraout_x8_02[4] = puVar10;
                        extraout_x8_02[6] = 0;
                        extraout_x8_02[5] = 0x14;
                        extraout_x8_02[8] = 0;
                        extraout_x8_02[9] = 0;
                        extraout_x8_02[7] = 8;
                        puVar6 = auStack_e0;
                      }
SUB_106120624:
                      *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
                      *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
                      *(ulong *)(puVar6 + -0x50) = unaff_x26;
                      *(ulong *)(puVar6 + -0x48) = unaff_x25;
                      *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
                      *(long *)(puVar6 + -0x38) = unaff_x23;
                      *(ulong *)(puVar6 + -0x30) = unaff_x22;
                      *(ulong *)(puVar6 + -0x28) = unaff_x21;
                      *(ulong *)(puVar6 + -0x20) = uVar13;
                      *(long **)(puVar6 + -0x18) = plVar25;
                      *(undefined1 *****)(puVar6 + -0x10) = ppppuVar27;
                      *(undefined8 *)(puVar6 + -8) = uStack_e8;
                      ppppuVar27 = (undefined1 ****)(puVar6 + -0x10);
                      uVar13 = puVar14[4];
                      if (uVar13 == 0 || uVar13 * 9 == -0x11) {
                        uVar13 = puVar14[1];
                        unaff_x22 = puVar14[2];
                        *(ulong **)(puVar6 + -0x68) = puVar14;
                      }
                      else {
                        _free(puVar14[3] + uVar13 * -8 + -8);
                        uVar13 = puVar14[1];
                        unaff_x22 = puVar14[2];
                        *(ulong **)(puVar6 + -0x68) = puVar14;
                      }
                      if (unaff_x22 != 0) {
                        unaff_x26 = 0;
                        unaff_x28 = 6;
                        unaff_x25 = unaff_x22;
                        unaff_x21 = uVar13;
                        do {
                          unaff_x21 = unaff_x21 + 0x70;
                          unaff_x24 = 0x70;
                          plVar25 = (long *)(uVar13 + unaff_x26 * 0x70);
                          if (*plVar25 != 0) {
                            _free(plVar25[1]);
                          }
                          puVar14 = (ulong *)(plVar25 + 3);
                          uVar18 = *puVar14 ^ 0x8000000000000000;
                          if (-1 < (long)*puVar14) {
                            uVar18 = 6;
                          }
                          if (3 < uVar18 - 1) {
                            if (uVar18 == 0) {
                              if (plVar25[4] != 0) {
                                unaff_x23 = plVar25[5];
                                goto LAB_10612073c;
                              }
                            }
                            else {
                              if (uVar18 != 5) goto LAB_1061206a4;
                              unaff_x23 = plVar25[5];
                              lVar15 = plVar25[6] + 1;
                              lVar9 = unaff_x23;
                              while (lVar15 = lVar15 + -1, lVar15 != 0) {
                                FUN_10611fd9c(lVar9);
                                lVar9 = lVar9 + 0x50;
                              }
                              unaff_x27 = 0;
                              if (plVar25[4] != 0) {
LAB_10612073c:
                                _free(unaff_x23);
                              }
                            }
                          }
                          unaff_x26 = unaff_x26 + 1;
                          unaff_x25 = unaff_x25 - 1;
                          if (unaff_x26 == unaff_x22) break;
                        } while( true );
                      }
                      if (**(long **)(puVar6 + -0x68) == 0) {
                        return;
                      }
                      goto code_r0x000108aa97c4;
                    }
                    uStack_140 = *(undefined8 *)(&UNK_10b4cf8a0 + uVar18 * 8);
                    uStack_138 = *(undefined8 *)(&UNK_109becdc8 + uVar18 * 8);
                    puStack_130 = &uStack_140;
                    puStack_128 = &DAT_10611f8fc;
                    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                              (&lStack_158,s_expected_table__found_108b38550,&puStack_130);
                    if (lStack_148 == 0) {
                      lVar15 = 1;
                    }
                    else {
                      lVar15 = _malloc(lStack_148);
                      if (lVar15 == 0) {
                        func_0x0001087c9084(1,lStack_148);
LAB_1061291c8:
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x1061291cc);
                        (*pcVar5)();
                      }
                      _memcpy(lVar15,uStack_150,lStack_148);
                    }
                    if (lStack_158 != 0) {
                      _free(uStack_150);
                    }
                    *extraout_x8_02 = 0;
                    extraout_x8_02[3] = lStack_148;
                    extraout_x8_02[4] = lVar15;
                    extraout_x8_02[5] = lStack_148;
                    extraout_x8_02[6] = 0;
                    extraout_x8_02[8] = 0;
                    extraout_x8_02[9] = 0;
                    extraout_x8_02[7] = 8;
                    FUN_10611fd9c(puVar14);
                  }
                  return;
                }
                puVar10[1] = 0x6572727563636f20;
                *puVar10 = 0x726f727265206e61;
                puVar10[3] = 0x6120676e69746972;
                puVar10[2] = 0x77206e6568772064;
                *(undefined8 *)((long)puVar10 + 0x1e) = 0x65756c6176206120;
                *extraout_x8_01 = 0x26;
                extraout_x8_01[1] = (long)puVar10;
                extraout_x8_01[2] = 0x26;
              }
              return;
            }
            puVar10[1] = 0x6572727563636f20;
            *puVar10 = 0x726f727265206e61;
            puVar10[3] = 0x6120676e69746972;
            puVar10[2] = 0x77206e6568772064;
            *(undefined8 *)((long)puVar10 + 0x1e) = 0x65756c6176206120;
            *extraout_x8_00 = 0x26;
            extraout_x8_00[1] = puVar10;
            extraout_x8_00[2] = 0x26;
          }
          return;
        }
        puVar10[1] = 0x6572727563636f20;
        *puVar10 = 0x726f727265206e61;
        puVar10[3] = 0x6120676e69746972;
        puVar10[2] = 0x77206e6568772064;
        *(undefined8 *)((long)puVar10 + 0x1e) = 0x65756c6176206120;
        *extraout_x8 = 0x26;
        extraout_x8[1] = puVar10;
        extraout_x8[2] = 0x26;
      }
      return;
    }
    puVar10[1] = 0x6572727563636f20;
    *puVar10 = 0x726f727265206e61;
    puVar10[3] = 0x6120676e69746972;
    puVar10[2] = 0x77206e6568772064;
    *(undefined8 *)((long)puVar10 + 0x1e) = 0x65756c6176206120;
    *param_1 = 0x26;
    param_1[1] = puVar10;
    param_1[2] = 0x26;
  }
  return;
LAB_1061206a4:
  uStack_e8 = 0x1061206a8;
  puVar6 = puVar6 + -0x70;
  goto SUB_106120624;
}

