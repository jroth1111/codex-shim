
/* WARNING: Possible PIC construction at 0x0001061206a4: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ***** FUN_106127690(ulong *****param_1,ulong *param_2,ulong *******param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong ******ppppppuVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint5 uVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined1 *puVar14;
  int iVar15;
  ulong *puVar16;
  ulong ****ppppuVar17;
  ulong *****pppppuVar18;
  undefined8 uVar19;
  undefined8 ******ppppppuVar20;
  ulong ***pppuVar21;
  ulong ****ppppuVar22;
  undefined8 uVar23;
  ulong ****ppppuVar24;
  undefined8 *puVar25;
  undefined1 extraout_w1;
  undefined8 *****pppppuVar26;
  undefined1 uVar27;
  undefined4 uVar28;
  byte *pbVar29;
  char *pcVar30;
  ulong *******pppppppuVar31;
  byte *pbVar32;
  undefined8 *****pppppuVar33;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong ****extraout_x8_03;
  undefined8 *extraout_x8_04;
  byte *pbVar34;
  ulong uVar35;
  byte *pbVar36;
  byte bVar37;
  char cVar38;
  ulong ****unaff_x21;
  ulong ***unaff_x22;
  long lVar39;
  ulong ****unaff_x23;
  ulong ***pppuVar40;
  undefined8 unaff_x24;
  ulong ***unaff_x25;
  uint uVar41;
  ulong ***unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar42;
  char cVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  ulong uVar48;
  undefined1 auVar49 [16];
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_e0 [8];
  ulong ****ppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  ulong *******pppppppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  undefined8 *****pppppuStack_98;
  ulong *******pppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  ulong *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  undefined1 auStack_60 [8];
  undefined8 ******ppppppuStack_58;
  undefined8 *******pppppppuStack_50;
  ulong ****ppppuStack_48;
  undefined8 ******ppppppuStack_40;
  undefined8 uStack_38;
  
  uVar35 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar35 = 6;
  }
  if ((long)uVar35 < 3) {
    if (uVar35 == 0) {
      pbVar32 = (byte *)param_2[2];
      uVar35 = param_2[3];
      if (uVar35 == 0) {
        bVar44 = 0;
        bVar45 = 0;
        iVar15 = 0;
        bVar11 = false;
        bVar10 = false;
      }
      else {
        bVar10 = false;
        bVar11 = false;
        iVar15 = 0;
        bVar45 = 0;
        bVar44 = 0;
        cVar43 = '\0';
        bVar46 = 0;
        uVar48 = uVar35;
        pbVar29 = pbVar32;
        do {
          bVar47 = *pbVar29;
          bVar37 = bVar44;
          if (bVar47 < 0x22) {
            if (bVar47 == 9) {
              bVar46 = 0;
              cVar43 = '\0';
            }
            else {
              if (bVar47 != 10) {
                bVar46 = 0;
                cVar38 = '\0';
                goto LAB_106128bd0;
              }
              bVar46 = 0;
              cVar43 = '\0';
              iVar15 = 1;
            }
          }
          else {
            if (bVar47 == 0x22) {
              cVar38 = '\0';
              bVar46 = bVar46 + 1;
              bVar37 = bVar46;
              if (bVar46 <= bVar44) {
                bVar37 = bVar44;
              }
            }
            else {
              if (bVar47 == 0x5c) {
                bVar46 = 0;
                cVar43 = '\0';
                bVar11 = true;
                goto LAB_106128be0;
              }
              bVar44 = cVar43 + 1U;
              if ((byte)(cVar43 + 1U) <= bVar45) {
                bVar44 = bVar45;
              }
              bVar46 = 0;
              cVar38 = '\0';
              if (bVar47 == 0x27) {
                cVar38 = cVar43 + '\x01';
                bVar45 = bVar44;
              }
            }
LAB_106128bd0:
            bVar10 = (bool)((bVar47 < 0x20 || bVar47 == 0x7f) | bVar10);
            bVar44 = bVar37;
            cVar43 = cVar38;
          }
LAB_106128be0:
          uVar48 = uVar48 - 1;
          pbVar29 = pbVar29 + 1;
        } while (uVar48 != 0);
      }
      if (((bVar10 || bVar11) || (bVar44 != 0)) || (iVar15 != 0)) {
        uVar28 = 3;
        if (iVar15 == 0) {
          uVar28 = 1;
        }
        if (!bVar10 && bVar45 < 3) {
          uVar28 = 2;
        }
        uVar2 = 3;
        if ((bVar10 || bVar11) || 2 < bVar44) {
          uVar2 = uVar28;
        }
        uVar28 = 0;
        if ((bVar10 || iVar15 != 0) || bVar45 != 0) {
          uVar28 = uVar2;
        }
        ppppuVar22 = (ulong ****)FUN_10611e800(pbVar32,uVar35,uVar28,iVar15,param_3);
        iVar15 = (int)ppppuVar22;
      }
      else {
        uVar28 = 1;
        ppppuVar22 = (ulong ****)FUN_10611e800(pbVar32,uVar35,1,0,param_3);
        iVar15 = (int)ppppuVar22;
      }
      if (iVar15 == 0) {
                    /* WARNING: Read-only address (ram,0x000108c73af0) is written */
        *param_1 = (ulong ****)0x8000000000000004;
        param_1[1] = (ulong ****)param_3;
      }
      else {
                    /* WARNING: Read-only address (ram,0x000108c73af0) is written */
        ppppuVar22 = (ulong ****)_malloc(0x26);
        if (ppppuVar22 == (ulong ****)0x0) {
          uVar19 = func_0x0001087c9084(1,0x26);
          auStack_60._4_4_ = uVar28;
          ppppppuStack_58 = (undefined8 ******)(auStack_60 + 4);
          pppppppuStack_50 = &ppppppuStack_58;
          ppppuStack_48 = (ulong ****)&DAT_10611f754;
          pcVar30 = s__108b38569;
          ppppppuStack_40 = param_3;
          uStack_38 = (ulong ******)param_1;
          puVar16 = (ulong *)__ZN4core3fmt5write17h64810b21425781ecE
                                       (uVar19,&UNK_10b4cf200,s__108b38569,&pppppppuStack_50);
          if ((int)puVar16 == 0) {
            *extraout_x8_01 = 0x8000000000000004;
            extraout_x8_01[1] = uVar19;
          }
          else {
            puVar16 = (ulong *)_malloc(0x26);
            if (puVar16 == (ulong *)0x0) {
              uVar23 = func_0x0001087c9084(1,0x26);
              pppppuStack_98 = &ppppuStack_a0;
              ppppppuStack_68 = (undefined8 ******)0x106128e24;
              pppppppuStack_90 = (ulong *******)&pppppuStack_98;
              puStack_88 = &DAT_10611f828;
              uVar27 = 0x69;
              ppppuStack_a0 = (ulong ****)pcVar30;
              auStack_80 = (undefined1  [8])uVar19;
              pppppppuStack_70 = (undefined8 *******)&stack0xffffffffffffffd0;
              puVar16 = (ulong *)__ZN4core3fmt5write17h64810b21425781ecE
                                           (uVar23,&UNK_10b4cf200,s__108b38569,&pppppppuStack_90);
              if ((int)puVar16 == 0) {
                *extraout_x8_02 = 0x8000000000000004;
                extraout_x8_02[1] = uVar23;
              }
              else {
                puVar16 = (ulong *)_malloc(0x26);
                if (puVar16 == (ulong *)0x0) {
                  ppppuVar22 = (ulong ****)func_0x0001087c9084(1,0x26);
                  puVar14 = auStack_e0;
                  ppppuStack_a8 = (ulong ****)0x106128ecc;
                  pppppppuVar42 = &pppppppuStack_b0;
                  auStack_e0[7] = uVar27;
                  ppppuStack_d8 = (ulong ****)(auStack_e0 + 7);
                  ppppppuStack_d0 = (undefined8 ******)&ppppuStack_d8;
                  puStack_c8 = &DAT_10611f610;
                  pppppppuStack_b0 = (ulong *******)&pppppppuStack_70;
                  pppuVar21 = (ulong ***)
                              __ZN4core3fmt5write17h64810b21425781ecE
                                        (ppppuVar22,&UNK_10b4cf200,s__108b38569,&ppppppuStack_d0);
                  if ((int)pppuVar21 == 0) {
                    *extraout_x8_03 = (ulong ***)0x8000000000000004;
                    extraout_x8_03[1] = (ulong ***)ppppuVar22;
                  }
                  else {
                    pppuVar21 = (ulong ***)_malloc(0x26);
                    if (pppuVar21 == (ulong ***)0x0) {
                      ppppuVar24 = (ulong ****)func_0x0001087c9084(1,0x26);
                      uVar19 = 0x106128f78;
                      uVar35 = (ulong)*ppppuVar24 ^ 0x8000000000000000;
                      if (-1 < (long)*ppppuVar24) {
                        uVar35 = 6;
                      }
                      if (uVar35 == 5) {
                        pppuVar21 = ppppuVar24[1];
                        ppppuVar22 = (ulong ****)ppppuVar24[2];
                        pppuVar40 = ppppuVar24[3];
                        if (pppuVar40 == (ulong ***)0x0) {
                          *extraout_x8_04 = 2;
                        }
                        else {
                          puVar25 = (undefined8 *)_malloc(0x14);
                          if (puVar25 == (undefined8 *)0x0) {
                            func_0x0001087c9084(1,0x14);
                            goto LAB_1061291c8;
                          }
                          *(undefined4 *)(puVar25 + 2) = 0x79617272;
                          puVar25[1] = 0x61207974706d6520;
                          *puVar25 = 0x6465746365707865;
                          *extraout_x8_04 = 0;
                          extraout_x8_04[3] = 0x14;
                          extraout_x8_04[4] = puVar25;
                          auVar49 = _UNK_108c73af0;
                          extraout_x8_04[6] = UNK_108c73af0._8_8_;
                          extraout_x8_04[5] = auVar49._0_8_;
                          extraout_x8_04[8] = 0;
                          extraout_x8_04[9] = 0;
                          extraout_x8_04[7] = 8;
                        }
                        lVar39 = (long)pppuVar40 + 1;
                        ppppuVar24 = ppppuVar22;
                        while (lVar39 = lVar39 + -1, lVar39 != 0) {
                          FUN_10611fd9c(ppppuVar24);
                          ppppuVar24 = ppppuVar24 + 10;
                        }
                        if (pppuVar21 != (ulong ***)0x0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          puVar16 = (ulong *)(*(code *)PTR__free_10b61b0a8)(ppppuVar22);
                          return (ulong *****)puVar16;
                        }
                      }
                      else {
                        if (uVar35 == 6) {
                          ppppuVar17 = extraout_x8_03;
                          if (ppppuVar24[6] == (ulong ***)0x0) {
                            *extraout_x8_04 = 2;
                          }
                          else {
                            puVar25 = (undefined8 *)_malloc(0x14);
                            if (puVar25 == (undefined8 *)0x0) {
                              func_0x0001087c9084(1,0x14);
                              goto LAB_1061291c8;
                            }
                            *(undefined4 *)(puVar25 + 2) = 0x656c6261;
                            puVar25[1] = 0x74207974706d6520;
                            *puVar25 = 0x6465746365707865;
                            *extraout_x8_04 = 0;
                            extraout_x8_04[3] = 0x14;
                            extraout_x8_04[4] = puVar25;
                            auVar49 = _UNK_108c73af0;
                            extraout_x8_04[6] = UNK_108c73af0._8_8_;
                            extraout_x8_04[5] = auVar49._0_8_;
                            extraout_x8_04[8] = 0;
                            extraout_x8_04[9] = 0;
                            extraout_x8_04[7] = 8;
                            puVar14 = auStack_e0;
                          }
SUB_106120624:
                          *(undefined8 *)(puVar14 + -0x60) = unaff_x28;
                          *(undefined8 *)(puVar14 + -0x58) = unaff_x27;
                          *(ulong ****)(puVar14 + -0x50) = unaff_x26;
                          *(ulong ****)(puVar14 + -0x48) = unaff_x25;
                          *(undefined8 *)(puVar14 + -0x40) = unaff_x24;
                          *(ulong *****)(puVar14 + -0x38) = unaff_x23;
                          *(ulong ****)(puVar14 + -0x30) = unaff_x22;
                          *(ulong *****)(puVar14 + -0x28) = unaff_x21;
                          *(ulong *****)(puVar14 + -0x20) = ppppuVar22;
                          *(ulong *****)(puVar14 + -0x18) = ppppuVar17;
                          *(undefined8 ********)(puVar14 + -0x10) = pppppppuVar42;
                          *(undefined8 *)(puVar14 + -8) = uVar19;
                          pppppppuVar42 = (undefined8 *******)(puVar14 + -0x10);
                          pppuVar21 = ppppuVar24[4];
                          if (pppuVar21 == (ulong ***)0x0 || (long)pppuVar21 * 9 == -0x11) {
                            ppppuVar22 = (ulong ****)ppppuVar24[1];
                            unaff_x22 = ppppuVar24[2];
                            *(ulong *****)(puVar14 + -0x68) = ppppuVar24;
                          }
                          else {
                            ppppuVar17 = (ulong ****)_free(ppppuVar24[3] + (-1 - (long)pppuVar21));
                            ppppuVar22 = (ulong ****)ppppuVar24[1];
                            unaff_x22 = ppppuVar24[2];
                            *(ulong *****)(puVar14 + -0x68) = ppppuVar24;
                            ppppuVar24 = ppppuVar17;
                          }
                          if (unaff_x22 != (ulong ***)0x0) {
                            unaff_x26 = (ulong ***)0x0;
                            unaff_x28 = 6;
                            unaff_x25 = unaff_x22;
                            unaff_x21 = ppppuVar22;
                            do {
                              unaff_x21 = unaff_x21 + 0xe;
                              unaff_x24 = 0x70;
                              ppppuVar17 = ppppuVar22 + (long)unaff_x26 * 0xe;
                              if (*ppppuVar17 != (ulong ***)0x0) {
                                _free(ppppuVar17[1]);
                              }
                              ppppuVar24 = ppppuVar17 + 3;
                              uVar35 = (ulong)*ppppuVar24 ^ 0x8000000000000000;
                              if (-1 < (long)*ppppuVar24) {
                                uVar35 = 6;
                              }
                              if (3 < uVar35 - 1) {
                                if (uVar35 == 0) {
                                  if (ppppuVar17[4] != (ulong ***)0x0) {
                                    unaff_x23 = (ulong ****)ppppuVar17[5];
                                    goto LAB_10612073c;
                                  }
                                }
                                else {
                                  if (uVar35 != 5) goto LAB_1061206a4;
                                  unaff_x23 = (ulong ****)ppppuVar17[5];
                                  lVar39 = (long)ppppuVar17[6] + 1;
                                  ppppuVar24 = unaff_x23;
                                  while (lVar39 = lVar39 + -1, lVar39 != 0) {
                                    FUN_10611fd9c(ppppuVar24);
                                    ppppuVar24 = ppppuVar24 + 10;
                                  }
                                  unaff_x27 = 0;
                                  if (ppppuVar17[4] != (ulong ***)0x0) {
LAB_10612073c:
                                    ppppuVar24 = (ulong ****)_free(unaff_x23);
                                  }
                                }
                              }
                              unaff_x26 = (ulong ***)((long)unaff_x26 + 1);
                              unaff_x25 = (ulong ***)((long)unaff_x25 - 1);
                              if (unaff_x26 == unaff_x22) break;
                            } while( true );
                          }
                          if (**(long **)(puVar14 + -0x68) == 0) {
                            return (ulong *****)ppppuVar24;
                          }
                          goto code_r0x000108aa97c4;
                        }
                        uStack_140 = *(undefined8 *)(&UNK_10b4cf8a0 + uVar35 * 8);
                        uStack_138 = *(undefined8 *)(&UNK_109becdc8 + uVar35 * 8);
                        puStack_130 = &uStack_140;
                        puStack_128 = &DAT_10611f8fc;
                        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                  (&lStack_158,s_expected_table__found_108b38550,&puStack_130);
                        if (lStack_148 == 0) {
                          lVar39 = 1;
                        }
                        else {
                          lVar39 = _malloc(lStack_148);
                          if (lVar39 == 0) {
                            func_0x0001087c9084(1,lStack_148);
LAB_1061291c8:
                    /* WARNING: Does not return */
                            pcVar13 = (code *)SoftwareBreakpoint(1,0x1061291cc);
                            (*pcVar13)();
                          }
                          _memcpy(lVar39,uStack_150,lStack_148);
                        }
                        if (lStack_158 != 0) {
                          _free(uStack_150);
                        }
                        *extraout_x8_04 = 0;
                        extraout_x8_04[3] = lStack_148;
                        extraout_x8_04[4] = lVar39;
                        extraout_x8_04[5] = lStack_148;
                        extraout_x8_04[6] = 0;
                        extraout_x8_04[8] = 0;
                        extraout_x8_04[9] = 0;
                        extraout_x8_04[7] = 8;
                        ppppuVar24 = (ulong ****)FUN_10611fd9c(ppppuVar24);
                      }
                      return (ulong *****)ppppuVar24;
                    }
                    pppuVar21[1] = (ulong **)0x6572727563636f20;
                    *pppuVar21 = (ulong **)0x726f727265206e61;
                    pppuVar21[3] = (ulong **)0x6120676e69746972;
                    pppuVar21[2] = (ulong **)0x77206e6568772064;
                    *(undefined8 *)((long)pppuVar21 + 0x1e) = 0x65756c6176206120;
                    *extraout_x8_03 = (ulong ***)0x26;
                    extraout_x8_03[1] = pppuVar21;
                    extraout_x8_03[2] = (ulong ***)0x26;
                  }
                  return (ulong *****)pppuVar21;
                }
                puVar16[1] = 0x6572727563636f20;
                *puVar16 = 0x726f727265206e61;
                puVar16[3] = 0x6120676e69746972;
                puVar16[2] = 0x77206e6568772064;
                *(undefined8 *)((long)puVar16 + 0x1e) = 0x65756c6176206120;
                *extraout_x8_02 = 0x26;
                extraout_x8_02[1] = puVar16;
                extraout_x8_02[2] = 0x26;
              }
              return (ulong *****)puVar16;
            }
            puVar16[1] = 0x6572727563636f20;
            *puVar16 = 0x726f727265206e61;
            puVar16[3] = 0x6120676e69746972;
            puVar16[2] = 0x77206e6568772064;
            *(undefined8 *)((long)puVar16 + 0x1e) = 0x65756c6176206120;
            *extraout_x8_01 = 0x26;
            extraout_x8_01[1] = puVar16;
            extraout_x8_01[2] = 0x26;
          }
          return (ulong *****)puVar16;
        }
        ppppuVar22[1] = (ulong ***)0x6572727563636f20;
        *ppppuVar22 = (ulong ***)0x726f727265206e61;
        ppppuVar22[3] = (ulong ***)0x6120676e69746972;
        ppppuVar22[2] = (ulong ***)0x77206e6568772064;
        *(undefined8 *)((long)ppppuVar22 + 0x1e) = 0x65756c6176206120;
        *param_1 = (ulong ****)0x26;
        param_1[1] = ppppuVar22;
        param_1[2] = (ulong ****)0x26;
      }
      return (ulong *****)ppppuVar22;
    }
    if (uVar35 != 1) {
      pppppuVar18 = (ulong *****)param_2[1];
      uStack_38 = (ulong ******)&ppppppuStack_40;
      ppppppuStack_40 = (undefined8 ******)ABS((double)pppppuVar18);
      if (!NAN((double)pppppuVar18)) {
        ppppppuStack_40 = (undefined8 ******)pppppuVar18;
      }
      ppppppuVar20 = param_3;
      if ((long)ppppppuStack_40 < 0) {
        if (NAN((double)ppppppuStack_40)) {
          uVar28 = 9;
          ppppppuVar20 = (undefined8 ******)FUN_10611f954(param_3,&UNK_109becdf0);
joined_r0x000106128924:
          if (((ulong)ppppppuVar20 & 1) != 0) {
LAB_106128928:
            ppppppuVar20 = (undefined8 ******)_malloc(0x26);
            if (ppppppuVar20 != (undefined8 ******)0x0) {
              ppppppuVar20[1] = (undefined8 *****)0x6572727563636f20;
              *ppppppuVar20 = (undefined8 *****)0x726f727265206e61;
              ppppppuVar20[3] = (undefined8 *****)0x6120676e69746972;
              ppppppuVar20[2] = (undefined8 *****)0x77206e6568772064;
              *(undefined8 *)((long)ppppppuVar20 + 0x1e) = 0x65756c6176206120;
              *param_1 = (ulong ****)0x26;
              param_1[1] = (ulong ****)ppppppuVar20;
              param_1[2] = (ulong ****)0x26;
              return (ulong *****)ppppppuVar20;
            }
            pppuVar21 = (ulong ***)func_0x0001087c9084(1,0x26);
            ppppuStack_48 = (ulong ****)0x106128a20;
            auStack_80._4_4_ = uVar28;
            pppppppuStack_78 = (ulong *******)(auStack_80 + 4);
            pppppppuStack_70 = &pppppppuStack_78;
            ppppppuStack_68 = (undefined8 ******)&DAT_10611f88c;
            pcVar30 = s__108b38569;
            pppppppuVar31 = (ulong *******)&pppppppuStack_70;
            auStack_60 = (undefined1  [8])param_3;
            ppppppuStack_58 = (undefined8 ******)param_1;
            pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
            puVar16 = (ulong *)__ZN4core3fmt5write17h64810b21425781ecE(pppuVar21,&UNK_10b4cf200);
            if ((int)puVar16 == 0) {
              *extraout_x8 = 0x8000000000000004;
              extraout_x8[1] = pppuVar21;
            }
            else {
              puVar16 = (ulong *)_malloc(0x26);
              if (puVar16 == (ulong *)0x0) {
                puVar16 = (ulong *)func_0x0001087c9084(1,0x26);
                puStack_88 = (undefined *)0x106128acc;
                uVar35 = puVar16[2];
                if (*puVar16 == uVar35) {
                  ppppuStack_a0 = (ulong ****)pppuVar21;
                  pppppppuStack_90 = (ulong *******)&pppppppuStack_50;
                  FUN_108a8c380(puVar16,uVar35,1,1,1);
                  uVar35 = puVar16[2];
                }
                *(undefined1 *)(puVar16[1] + uVar35) = 0x5b;
                puVar16[2] = uVar35 + 1;
                *extraout_x8_00 = pcVar30;
                extraout_x8_00[1] = pppppppuVar31;
                extraout_x8_00[2] = puVar16;
                *(undefined1 *)(extraout_x8_00 + 3) = 0;
                *(undefined1 *)((long)extraout_x8_00 + 0x19) = extraout_w1;
                return (ulong *****)puVar16;
              }
              puVar16[1] = 0x6572727563636f20;
              *puVar16 = 0x726f727265206e61;
              puVar16[3] = 0x6120676e69746972;
              puVar16[2] = 0x77206e6568772064;
              *(undefined8 *)((long)puVar16 + 0x1e) = 0x65756c6176206120;
              *extraout_x8 = 0x26;
              extraout_x8[1] = puVar16;
              extraout_x8[2] = 0x26;
            }
            return (ulong *****)puVar16;
          }
          goto LAB_106128988;
        }
        if ((double)ppppppuStack_40 != 0.0) goto LAB_1061288b4;
        pppppuVar26 = param_3[2];
        if ((ulong)((long)*param_3 - (long)pppppuVar26) < 4) {
          uStack_38 = (ulong ******)&ppppppuStack_40;
          ppppppuVar20 = (undefined8 ******)FUN_108a8c380(param_3,pppppuVar26,4,1,1);
          pppppuVar26 = param_3[2];
        }
        *(undefined4 *)((long)param_3[1] + (long)pppppuVar26) = 0x302e302d;
        pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 4);
      }
      else {
        if (NAN((double)ppppppuStack_40)) {
          uVar28 = 7;
          uStack_38 = (ulong ******)&ppppppuStack_40;
          ppppppuVar20 = (undefined8 ******)FUN_10611f954(param_3,&UNK_109becbc8);
          if ((int)ppppppuVar20 != 0) goto LAB_106128928;
          goto LAB_106128988;
        }
        if ((double)ppppppuStack_40 != 0.0) {
LAB_1061288b4:
          if ((double)((ulong)ppppppuStack_40 ^
                      ((ulong)ppppppuStack_40 ^
                      (ulong)((double)ppppppuStack_40 - (double)(long)(double)ppppppuStack_40)) &
                      0x7ff8000000000000) == 0.0) {
            uVar28 = 0x8b3894e;
            uStack_38 = (ulong ******)&ppppppuStack_40;
            ppppppuVar20 = (undefined8 ******)
                           __ZN4core3fmt5write17h64810b21425781ecE
                                     (param_3,&UNK_10b4cf200,s__0_108b3894e,&stack0xffffffffffffffd0
                                     );
          }
          else {
            uVar28 = 0x8b38569;
            uStack_38 = (ulong ******)&ppppppuStack_40;
            ppppppuVar20 = (undefined8 ******)
                           __ZN4core3fmt5write17h64810b21425781ecE
                                     (param_3,&UNK_10b4cf200,s__108b38569,&stack0xffffffffffffffd0);
          }
          goto joined_r0x000106128924;
        }
        pppppuVar26 = param_3[2];
        if ((ulong)((long)*param_3 - (long)pppppuVar26) < 3) {
          uStack_38 = (ulong ******)&ppppppuStack_40;
          ppppppuVar20 = (undefined8 ******)FUN_108a8c380(param_3,pppppuVar26,3,1,1);
          pppppuVar26 = param_3[2];
        }
        pppppuVar33 = param_3[1];
        *(undefined2 *)((long)pppppuVar33 + (long)pppppuVar26) = 0x2e30;
        *(undefined1 *)((undefined2 *)((long)pppppuVar33 + (long)pppppuVar26) + 1) = 0x30;
        pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 3);
      }
      param_3[2] = (ulong ******)pppppuVar26;
LAB_106128988:
      *param_1 = (ulong ****)0x8000000000000004;
      param_1[1] = (ulong ****)param_3;
                    /* WARNING: Read-only address (ram,0x000108c73af0) is written */
      return (ulong *****)ppppppuVar20;
    }
    pppppppuStack_90 = (ulong *******)param_2[1];
    pppppppuStack_70 = (undefined8 *******)&DAT_10611f7b8;
  }
  else {
    if (4 < (long)uVar35) {
      if (uVar35 == 5) {
        ppppppuVar20 = (undefined8 ******)param_2[2];
        ppppppuVar5 = (ulong ******)param_2[3];
        pppppuVar26 = param_3[2];
        pppppuVar18 = param_1;
        if (*param_3 == (ulong ******)pppppuVar26) {
          pppppppuStack_b0 = param_3;
          pppppuVar18 = (ulong *****)FUN_108a8c380(param_3,pppppuVar26,1,1,1);
          pppppuVar26 = pppppppuStack_b0[2];
          param_3 = pppppppuStack_b0;
        }
        *(undefined1 *)((long)param_3[1] + (long)pppppuVar26) = 0x5b;
        pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 1);
        param_3[2] = (ulong ******)pppppuVar26;
        pppppppuStack_78 = (ulong *******)0x1;
        auStack_60 = (undefined1  [8])((ulong)CONCAT61(auStack_60._2_6_,(char)param_4) << 8);
        pppppppuStack_70 = (undefined8 *******)ppppppuVar5;
        ppppppuStack_68 = param_3;
        if (ppppppuVar5 != (ulong ******)0x0) {
          lVar39 = (long)ppppppuVar5 * 0x50;
          do {
            pppppppuStack_90 = (ulong *******)ppppppuVar20;
            pppppuVar18 = (ulong *****)
                          func_0x00010612adb0(&pppppppuStack_50,&pppppppuStack_78,&pppppppuStack_90)
            ;
            param_3 = (ulong *******)ppppppuStack_68;
            if (pppppppuStack_50 != (undefined8 *******)0x8000000000000004) {
              param_1[2] = (ulong ****)ppppppuStack_40;
              param_1[1] = ppppuStack_48;
              *param_1 = (ulong ****)pppppppuStack_50;
              return pppppuVar18;
            }
            ppppppuVar20 = ppppppuVar20 + 10;
            lVar39 = lVar39 + -0x50;
          } while (lVar39 != 0);
          if (((((ulong)auStack_60 & 0x100) == 0) ||
              ((((uint)pppppppuStack_78 ^ 1) & 1) == 0 && pppppppuStack_70 < (ulong ******)0x2)) ||
             (((ulong)auStack_60 & 1) == 0)) {
            pppppuVar26 = ppppppuStack_68[2];
          }
          else {
            pppppuVar26 = ppppppuStack_68[2];
            if (*ppppppuStack_68 == pppppuVar26) {
              pppppuVar18 = (ulong *****)FUN_108a8c380(ppppppuStack_68,pppppuVar26,1,1,1);
              pppppuVar26 = param_3[2];
            }
            *(undefined1 *)((long)param_3[1] + (long)pppppuVar26) = 10;
            pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 1);
            param_3[2] = (ulong ******)pppppuVar26;
          }
        }
        if (*param_3 == (ulong ******)pppppuVar26) {
          pppppuVar18 = (ulong *****)FUN_108a8c380(param_3,pppppuVar26,1,1,1);
          pppppuVar26 = param_3[2];
        }
        *(undefined1 *)((long)param_3[1] + (long)pppppuVar26) = 0x5d;
        param_3[2] = (ulong ******)((long)pppppuVar26 + 1);
        *param_1 = (ulong ****)0x8000000000000004;
        param_1[1] = (ulong ****)param_3;
        return pppppuVar18;
      }
      pppppuVar26 = param_3[2];
      if (*param_3 == (ulong ******)pppppuVar26) {
        FUN_108a8c380(param_3,pppppuVar26,1,1,1);
        pppppuVar26 = param_3[2];
      }
      *(undefined1 *)((long)param_3[1] + (long)pppppuVar26) = 0x7b;
      param_3[2] = (ulong ******)((long)pppppuVar26 + 1);
      ppppppuStack_58 = (undefined8 ******)0x100;
      if (param_4 == 0) {
        ppppppuStack_58 = (undefined8 ******)0x0;
      }
      pppppppuStack_78 = (ulong *******)0x8000000000000000;
      auStack_60 = (undefined1  [8])param_3;
      if (param_2[2] == 0) {
LAB_1061279e8:
        pppppuVar18 = (ulong *****)FUN_106125dd8(param_1,&pppppppuStack_78);
                    /* WARNING: Read-only address (ram,0x000108c73af0) is written */
        return pppppuVar18;
      }
      lVar39 = param_2[2] * 0x70;
      unaff_x22 = (ulong ***)0x8000000000000004;
      ppppppuVar20 = (undefined8 ******)(param_2[1] + 0x18);
      do {
        pppppuVar18 = (ulong *****)
                      func_0x000106129454(&pppppppuStack_50,&pppppppuStack_78,ppppppuVar20[-2],
                                          ppppppuVar20[-1]);
        if ((pppppppuStack_50 != (undefined8 *******)0x8000000000000004) ||
           (pppppuVar18 = (ulong *****)
                          FUN_106129654(&pppppppuStack_50,&pppppppuStack_78,ppppppuVar20),
           pppppppuStack_50 != (undefined8 *******)0x8000000000000004)) {
          param_1[1] = ppppuStack_48;
          *param_1 = (ulong ****)pppppppuStack_50;
          param_1[2] = (ulong ****)ppppppuStack_40;
          if ((long)pppppppuStack_78 < -0x7ffffffffffffffe || pppppppuStack_78 == (ulong *******)0x0
             ) {
            return pppppuVar18;
          }
          goto LAB_106127a58;
        }
        ppppppuVar20 = ppppppuVar20 + 0xe;
        lVar39 = lVar39 + -0x70;
      } while (lVar39 != 0);
      unaff_x21 = (ulong ****)0x0;
      if (pppppppuStack_78 != (ulong *******)0x8000000000000001) goto LAB_1061279e8;
      goto LAB_106127b90;
    }
    if (uVar35 != 3) {
      auStack_80 = (undefined1  [8])0x0;
      pppppppuStack_78 = (ulong *******)0x8000000000000001;
      pppppppuStack_70 = (undefined8 *******)CONCAT44(pppppppuStack_70._4_4_,2);
      pppppppuStack_90 = (ulong *******)0x0;
      puStack_88 = (undefined *)0x1;
      ppppppuStack_40 = (undefined8 ******)0x60000020;
      pppppppuStack_50 = &pppppppuStack_90;
      ppppuStack_48 = (ulong ****)&UNK_10b4cf200;
      auStack_60 = (undefined1  [8])param_3;
      ppppppuStack_58 = param_3;
      iVar15 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                         (param_2 + 1,&pppppppuStack_50);
      puVar12 = puStack_88;
      pppppppuVar31 = pppppppuStack_90;
      if (iVar15 != 0) {
        func_0x000108a07a3c(&UNK_109becab3,0x37,(long)&uStack_38 + 7,&UNK_10b4cf348,&UNK_10b4cf298);
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x106127b3c);
        (*pcVar13)();
      }
      pppppuVar18 = (ulong *****)
                    func_0x00010612a044(&ppppuStack_a8,&pppppppuStack_78,puStack_88,auStack_80);
      if (ppppuStack_a8 == (ulong ****)0x8000000000000004) {
        if (pppppppuVar31 != (ulong *******)0x0) {
          _free(puVar12);
        }
        pppppuVar18 = (ulong *****)
                      __ZN88__LT_toml__ser__value__map__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17h95df88aea6058f62E
                                (param_1,&pppppppuStack_78);
        return pppppuVar18;
      }
      param_1[1] = ppppuStack_a0;
      *param_1 = ppppuStack_a8;
      param_1[2] = (ulong ****)pppppuStack_98;
      if (pppppppuVar31 != (ulong *******)0x0) {
        pppppuVar18 = (ulong *****)_free(puVar12);
      }
      if ((long)pppppppuStack_78 < -0x7ffffffffffffffe) {
        return pppppuVar18;
      }
      if (pppppppuStack_78 == (ulong *******)0x0) {
        return pppppuVar18;
      }
LAB_106127a58:
      pppppuVar18 = (ulong *****)_free(pppppppuStack_70);
      return pppppuVar18;
    }
    pppppppuStack_90 = (ulong *******)CONCAT71(pppppppuStack_90._1_7_,(char)param_2[1]);
    pppppppuStack_70 = (undefined8 *******)&DAT_10611f610;
  }
  pppppppuStack_50 = &pppppppuStack_90;
  pppppppuStack_78 = (ulong *******)&pppppppuStack_50;
  pppppuVar18 = (ulong *****)
                __ZN4core3fmt5write17h64810b21425781ecE
                          (param_3,&UNK_10b4cf200,s__108b38569,&pppppppuStack_78);
  if ((int)pppppuVar18 == 0) {
    *param_1 = (ulong ****)0x8000000000000004;
    param_1[1] = (ulong ****)param_3;
    return pppppuVar18;
  }
  pppppuVar18 = (ulong *****)_malloc(0x26);
  if (pppppuVar18 != (ulong *****)0x0) {
    pppppuVar18[1] = (ulong ****)0x6572727563636f20;
    *pppppuVar18 = (ulong ****)0x726f727265206e61;
    pppppuVar18[3] = (ulong ****)0x6120676e69746972;
    pppppuVar18[2] = (ulong ****)0x77206e6568772064;
    *(undefined8 *)((long)pppppuVar18 + 0x1e) = 0x65756c6176206120;
    *param_1 = (ulong ****)0x26;
    param_1[1] = (ulong ****)pppppuVar18;
    param_1[2] = (ulong ****)0x26;
    return pppppuVar18;
  }
  func_0x0001087c9084(1,0x26);
  ppppppuVar20 = param_3;
LAB_106127b90:
  uVar19 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beccb5,0xc5,&UNK_10b4cf838);
  if (unaff_x21 != (ulong ****)0x0) {
    _free(ppppppuVar20);
  }
  if ((-0x7fffffffffffffff < (long)pppppppuStack_78) && (pppppppuStack_78 != (ulong *******)0x0)) {
    _free(pppppppuStack_70);
  }
  auVar49 = __Unwind_Resume(uVar19);
  puVar25 = auVar49._8_8_;
  puVar16 = auVar49._0_8_;
  uVar35 = *puVar16 ^ 0x8000000000000000;
  if (-1 < (long)*puVar16) {
    uVar35 = 4;
  }
  if ((long)uVar35 < 2) {
    if (uVar35 == 0) {
      ppppuStack_d8 = (ulong ****)(puVar16 + 1);
      if (*ppppuStack_d8 != (ulong ***)0x0) {
        ppppppuStack_d0 = (undefined8 ******)&ppppuStack_d8;
        puStack_c8 = &DAT_10611f90c;
        puVar16 = (ulong *)__ZN4core3fmt5write17h64810b21425781ecE
                                     (*puVar25,puVar25[1],s_unsupported_type_108b3898c,
                                      &ppppppuStack_d0);
        return (ulong *****)puVar16;
      }
                    /* WARNING: Could not recover jumptable at 0x000106127cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar16 = (ulong *)(**(code **)(puVar25[1] + 0x18))(*puVar25,&UNK_109becc51,0x15);
      return (ulong *****)puVar16;
    }
    pbVar32 = &UNK_109becc66;
    pbVar29 = (byte *)0x16;
  }
  else if (uVar35 == 2) {
    pbVar32 = &UNK_109becc7c;
    pbVar29 = (byte *)0x18;
  }
  else if (uVar35 == 3) {
    pbVar32 = &UNK_109becc94;
    pbVar29 = (byte *)0x1d;
  }
  else {
    pbVar32 = (byte *)puVar16[1];
    pbVar29 = (byte *)puVar16[2];
  }
  uVar6 = *(uint *)(puVar25 + 2);
  auStack_e0 = (undefined1  [8])unaff_x22;
  ppppuStack_d8 = unaff_x21;
  ppppppuStack_d0 = ppppppuVar20;
  puStack_c8 = (undefined *)uVar19;
  if ((uVar6 & 0x18000000) != 0) {
    if ((uVar6 >> 0x1c & 1) == 0) {
      if (pbVar29 < (byte *)0x20) {
        if (pbVar29 == (byte *)0x0) {
          uVar35 = 0;
        }
        else {
          if ((byte *)0x7 < pbVar29) {
            pbVar34 = (byte *)((ulong)pbVar29 & 0x18);
            uVar19 = *(undefined8 *)pbVar32;
            cVar43 = -(-0x41 < (char)((ulong)uVar19 >> 0x28));
            auVar49._0_8_ = CONCAT71(0,-(-0x41 < (char)((ulong)uVar19 >> 0x30)) & 1);
            auVar49[8] = -(-0x41 < (char)((ulong)uVar19 >> 0x38)) & 1;
            auVar49._9_7_ = 0;
            uVar9 = CONCAT14(cVar43,(uint)CONCAT12(cVar43,(ushort)(byte)-(-0x41 < (char)((ulong)
                                                  uVar19 >> 0x20)))) & 0xff0000ffff;
            bVar44 = (byte)uVar9 & 1;
            bVar45 = (byte)(uVar9 >> 0x20) & 1;
            bVar46 = -(-0x41 < (char)((ulong)uVar19 >> 0x10)) & 1;
            bVar47 = -(-0x41 < (char)((ulong)uVar19 >> 0x18)) & 1;
            uVar35 = (ulong)(-(-0x41 < (char)uVar19) & 1);
            uVar48 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 8)) & 1);
            if (pbVar34 != (byte *)0x8) {
              uVar19 = *(undefined8 *)(pbVar32 + 8);
              auVar49._0_8_ = auVar49._0_8_ + (-(-0x41 < (char)((ulong)uVar19 >> 0x30)) & 1);
              auVar49._8_8_ =
                   (ulong)auVar49[8] + (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x38)) & 1);
              bVar44 = bVar44 + (-(-0x41 < (char)((ulong)uVar19 >> 0x20)) & 1U);
              bVar45 = bVar45 + (-(-0x41 < (char)((ulong)uVar19 >> 0x28)) & 1U);
              bVar46 = bVar46 + (-(-0x41 < (char)((ulong)uVar19 >> 0x10)) & 1U);
              bVar47 = bVar47 + (-(-0x41 < (char)((ulong)uVar19 >> 0x18)) & 1U);
              uVar35 = uVar35 + (-(-0x41 < (char)uVar19) & 1);
              uVar48 = uVar48 + (-(-0x41 < (char)((ulong)uVar19 >> 8)) & 1);
              if (pbVar34 != (byte *)0x10) {
                uVar19 = *(undefined8 *)(pbVar32 + 0x10);
                auVar49._0_8_ = auVar49._0_8_ + (-(-0x41 < (char)((ulong)uVar19 >> 0x30)) & 1);
                auVar49._8_8_ =
                     auVar49._8_8_ + (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x38)) & 1);
                bVar44 = bVar44 + (-(-0x41 < (char)((ulong)uVar19 >> 0x20)) & 1U);
                bVar45 = bVar45 + (-(-0x41 < (char)((ulong)uVar19 >> 0x28)) & 1U);
                bVar46 = bVar46 + (-(-0x41 < (char)((ulong)uVar19 >> 0x10)) & 1U);
                bVar47 = bVar47 + (-(-0x41 < (char)((ulong)uVar19 >> 0x18)) & 1U);
                uVar35 = uVar35 + (-(-0x41 < (char)uVar19) & 1);
                uVar48 = uVar48 + (-(-0x41 < (char)((ulong)uVar19 >> 8)) & 1);
              }
            }
            uVar35 = uVar35 + bVar44 + (ulong)bVar46 + auVar49._0_8_ +
                     uVar48 + bVar45 + (ulong)bVar47 + auVar49._8_8_;
            goto LAB_1055b9000;
          }
          pbVar34 = (byte *)0x0;
          uVar35 = 0;
          do {
            if (-0x41 < (char)pbVar32[(long)pbVar34]) {
              uVar35 = uVar35 + 1;
            }
            pbVar34 = pbVar34 + 1;
LAB_1055b9000:
          } while (pbVar29 != pbVar34);
        }
      }
      else {
        uVar35 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(pbVar32,pbVar29);
      }
    }
    else {
      uVar35 = (ulong)*(ushort *)((long)puVar25 + 0x16);
      if (uVar35 == 0) {
        pbVar29 = (byte *)0x0;
        uVar35 = 0;
      }
      else {
        pbVar34 = pbVar32 + (long)pbVar29;
        pbVar29 = (byte *)0x0;
        uVar48 = uVar35;
        pbVar36 = pbVar32;
        do {
          if (pbVar36 == pbVar34) break;
          bVar44 = *pbVar36;
          pbVar4 = pbVar36 + 3;
          if (0xef < bVar44) {
            pbVar4 = pbVar36 + 4;
          }
          pbVar3 = pbVar36 + 2;
          if (0xdf < bVar44) {
            pbVar3 = pbVar4;
          }
          pbVar4 = pbVar36 + 1;
          if (((int)(char)bVar44 & 0x80000000U) != 0) {
            pbVar4 = pbVar3;
          }
          pbVar29 = pbVar4 + ((long)pbVar29 - (long)pbVar36);
          uVar48 = uVar48 - 1;
          pbVar36 = pbVar4;
        } while (uVar48 != 0);
        uVar35 = uVar35 - uVar48;
      }
    }
    if (uVar35 < *(ushort *)((long)puVar25 + 0x14)) {
      uVar7 = (uint)*(ushort *)((long)puVar25 + 0x14) - (int)uVar35;
      uVar41 = uVar6 >> 0x1d & 3;
      uVar8 = uVar7 >> 1 & 0x7fff;
      if (uVar41 != 2) {
        uVar8 = 0;
      }
      uVar1 = 0;
      if (uVar41 != 0) {
        uVar1 = uVar7;
      }
      if (uVar41 < 2) {
        uVar8 = uVar1;
      }
      uVar41 = 0;
      uVar19 = *puVar25;
      lVar39 = puVar25[1];
      do {
        if ((uVar8 & 0xffff) <= (uVar41 & 0xffff)) {
          uVar35 = (**(code **)(lVar39 + 0x18))(uVar19,pbVar32,pbVar29);
          if ((uVar35 & 1) != 0) {
            return (ulong *****)(ulong *)0x1;
          }
          uVar41 = 0;
          do {
            if ((uVar7 - uVar8 & 0xffff) <= (uVar41 & 0xffff)) {
              return (ulong *****)0;
            }
            uVar41 = uVar41 + 1;
            uVar35 = (**(code **)(lVar39 + 0x20))(uVar19,uVar6 & 0x1fffff);
          } while ((uVar35 & 1) == 0);
          return (ulong *****)1;
        }
        uVar41 = uVar41 + 1;
        uVar35 = (**(code **)(lVar39 + 0x20))(uVar19,uVar6 & 0x1fffff);
      } while ((uVar35 & 1) == 0);
                    /* WARNING: Read-only address (ram,0x000108c73af0) is written */
                    /* WARNING: Read-only address (ram,0x000108c73af0) is written */
      return (ulong *****)(ulong *)0x1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001055b9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar16 = (ulong *)(**(code **)(puVar25[1] + 0x18))(*puVar25,pbVar32,pbVar29);
  return (ulong *****)puVar16;
LAB_1061206a4:
  uVar19 = 0x1061206a8;
  puVar14 = puVar14 + -0x70;
  goto SUB_106120624;
}

