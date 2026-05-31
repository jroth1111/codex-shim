
/* WARNING: Type propagation algorithm not settling */

long * FUN_10611e640(long *param_1,ulong *param_2,long param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 *extraout_x8;
  long unaff_x19;
  long *plVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long *unaff_x22;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_138 [16];
  byte *pbStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  long *plStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  byte **ppbStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  uint uStack_d4;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  ulong *puStack_68;
  
  plVar9 = (long *)*param_2;
  plVar6 = (long *)param_2[1];
  if (plVar9 != plVar6) {
    plStack_70 = param_1;
    puStack_68 = param_2;
    if (param_2[3] == 0) {
      lVar22 = -0x7fffffffffffffff;
      do {
        uVar7 = (uint)param_3;
        plVar12 = plVar9 + 0x12;
        plVar16 = (long *)plVar9[1];
        lVar14 = plVar9[2];
        lVar20 = plVar9[3];
        lVar21 = plVar9[4];
        lVar13 = -0x8000000000000000;
        plVar19 = plVar12;
        if (*plVar9 == -0x8000000000000000) goto LAB_10611e7b4;
        if (lVar14 == 0) {
          lVar13 = 0;
          plVar16 = (long *)0x1;
          goto LAB_10611e7b4;
        }
        plVar4 = (long *)_malloc(lVar14);
        uVar8 = (uint)param_4;
        if (plVar4 == (long *)0x0) {
          plVar19 = plVar9 + 0x12;
          goto LAB_10611e7ec;
        }
        param_3 = lVar14;
        param_1 = (long *)_memcpy(plVar4,plVar16);
        lVar13 = lVar14;
        plVar16 = plVar4;
        if (lVar14 != -0x7fffffffffffffff) goto LAB_10611e7b4;
        plVar9 = plVar9 + 0x12;
        unaff_x22 = plVar4;
      } while (plVar9 != plVar6);
    }
    else {
      lVar22 = param_2[3] << 4;
      plVar12 = (long *)(param_2[2] + 8);
      do {
        plVar19 = plVar9 + 0x12;
        unaff_x19 = *plVar9;
        unaff_x22 = (long *)plVar9[1];
        lVar14 = plVar9[2];
        lVar20 = lVar22;
        plVar16 = plVar12;
        do {
          if ((*plVar16 == lVar14) &&
             (param_3 = lVar14, param_1 = (long *)_memcmp(plVar16[-1],unaff_x22), (int)param_1 == 0)
             ) goto LAB_10611e688;
          uVar7 = (uint)param_3;
          plVar16 = plVar16 + 2;
          lVar20 = lVar20 + -0x10;
        } while (lVar20 != 0);
        lVar20 = plVar9[3];
        lVar21 = plVar9[4];
        lVar13 = -0x8000000000000000;
        plVar16 = unaff_x22;
        if (unaff_x19 == -0x8000000000000000) goto LAB_10611e7b4;
        if (lVar14 == 0) {
          lVar13 = 0;
          plVar16 = (long *)0x1;
LAB_10611e7b4:
          *puStack_68 = (ulong)plVar19;
          *plStack_70 = lVar13;
          plStack_70[1] = (long)plVar16;
          plStack_70[2] = lVar14;
          plStack_70[3] = lVar20;
          plStack_70[4] = lVar21;
          return param_1;
        }
        plVar4 = (long *)_malloc(lVar14);
        uVar8 = (uint)param_4;
        plVar16 = plVar9;
        if (plVar4 == (long *)0x0) goto LAB_10611e7ec;
        param_3 = lVar14;
        param_1 = (long *)_memcpy(plVar4,unaff_x22);
        lVar13 = lVar14;
        plVar16 = plVar4;
        if (lVar14 != -0x7fffffffffffffff) goto LAB_10611e7b4;
LAB_10611e688:
        plVar9 = plVar19;
      } while (plVar19 != plVar6);
    }
    *puStack_68 = (ulong)plVar19;
    param_1 = plStack_70;
  }
  *param_1 = -0x7fffffffffffffff;
  return param_1;
LAB_10611ea9c:
  puVar11 = &UNK_109beca54;
  goto joined_r0x00010611eaf8;
LAB_10611eab0:
  puVar11 = &UNK_109beca4e;
  goto joined_r0x00010611eaf8;
LAB_10611ea88:
  lVar22 = 1;
  puVar11 = &UNK_109beca50;
  goto joined_r0x00010611eb0c;
LAB_10611ea64:
  lVar22 = 0;
  puVar11 = (undefined *)0x0;
  goto joined_r0x00010611eb0c;
LAB_10611eac4:
  lVar22 = 1;
  puVar11 = &UNK_109beca56;
  goto joined_r0x00010611eb0c;
LAB_10611e7ec:
  *puStack_68 = (ulong)plVar19;
  auVar23 = func_0x0001087c9084(1,lVar14);
  lVar13 = auVar23._8_8_;
  pcStack_78 = FUN_10611e800;
  uVar1 = uVar7 & 0xff;
  if (uVar1 < 2) {
    bVar3 = uVar1 != 0;
    pbStack_128 = &UNK_109beca46;
    if (bVar3) {
      pbStack_128 = &UNK_109beca47;
    }
    uStack_120 = 1;
  }
  else {
    if (uVar1 == 2) {
      bVar3 = false;
      pbStack_128 = &UNK_109beca48;
    }
    else {
      if (uVar1 != 3) {
        uVar7 = 0;
        bVar3 = false;
        pbStack_128 = (byte *)0x1;
        uStack_120 = 0;
        goto LAB_10611e8ac;
      }
      bVar3 = true;
      pbStack_128 = &UNK_109beca4b;
    }
    uStack_120 = 3;
  }
  uVar7 = (uint)(1 < (uVar7 & 0xff));
LAB_10611e8ac:
  ppbStack_f8 = &pbStack_128;
  puStack_f0 = &DAT_10611f8fc;
  lStack_d0 = lVar22;
  lStack_c8 = lVar21;
  lStack_c0 = lVar20;
  plStack_b8 = plVar6;
  plStack_b0 = plVar19;
  plStack_a8 = plVar16;
  plStack_a0 = unaff_x22;
  lStack_98 = lVar14;
  plStack_90 = plVar12;
  lStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  auStack_138 = auVar23;
  uVar5 = __ZN4core3fmt5write17h64810b21425781ecE(param_5,&UNK_10b4cf200,s__108b38569,&ppbStack_f8);
  if ((uVar5 & 1) == 0) {
    if ((uVar8 & uVar7) != 0) {
      lVar22 = param_5[2];
      if (*param_5 == lVar22) {
        FUN_108a8c380(param_5,lVar22,1,1,1);
        lVar22 = param_5[2];
      }
      *(undefined1 *)(param_5[1] + lVar22) = 10;
      param_5[2] = lVar22 + 1;
    }
    if (bVar3) {
      iVar10 = 2;
      if (uVar7 == 0) {
        iVar10 = 0;
      }
joined_r0x00010611e920:
      if (lVar13 != 0) {
        plVar12 = auVar23._8_8_;
        pbVar15 = auVar23._0_8_;
        iVar18 = 0;
        plVar9 = (long *)0x0;
        if (uVar7 == 0) {
LAB_10611e9fc:
          bVar2 = pbVar15[(long)plVar9];
          if (bVar2 < 0xd) {
            if (bVar2 < 10) {
              if (bVar2 == 8) goto LAB_10611eab0;
              if (bVar2 == 9) goto LAB_10611ea88;
            }
            else {
              if (bVar2 == 10) {
                lVar22 = 1;
                puVar11 = &UNK_109beca52;
                goto joined_r0x00010611eb0c;
              }
              if (bVar2 == 0xc) goto LAB_10611ea9c;
            }
LAB_10611ea50:
            if ((bVar2 < 0x20) || (iVar18 = 0, bVar2 == 0x7f)) goto LAB_10611ea64;
LAB_10611e9f0:
            plVar9 = (long *)((long)plVar9 + 1);
            if (plVar12 == plVar9) goto LAB_10611ea74;
            goto LAB_10611e9fc;
          }
          if (bVar2 == 0x22) {
            if (iVar10 <= iVar18) goto LAB_10611eaec;
            iVar18 = iVar18 + 1;
            goto LAB_10611e9f0;
          }
          if (bVar2 == 0xd) goto LAB_10611eac4;
          if (bVar2 != 0x5c) goto LAB_10611ea50;
LAB_10611ead8:
          puVar11 = &UNK_109beca58;
          goto joined_r0x00010611eaf8;
        }
        do {
          bVar2 = pbVar15[(long)plVar9];
          if (bVar2 < 0xc) {
            if (bVar2 != 10) {
              if (bVar2 != 8) {
                if (bVar2 != 9) goto LAB_10611e9d0;
                goto LAB_10611ea88;
              }
              goto LAB_10611eab0;
            }
LAB_10611e954:
            iVar18 = 0;
          }
          else {
            if (bVar2 < 0x22) {
              if (bVar2 != 0xc) {
                if (bVar2 != 0xd) {
LAB_10611e9d0:
                  if ((0x1f < bVar2) && (bVar2 != 0x7f)) goto LAB_10611e954;
                  goto LAB_10611ea64;
                }
                goto LAB_10611eac4;
              }
              goto LAB_10611ea9c;
            }
            if (bVar2 != 0x22) {
              if (bVar2 != 0x5c) goto LAB_10611e9d0;
              goto LAB_10611ead8;
            }
            if (iVar10 <= iVar18) goto LAB_10611eaec;
            iVar18 = iVar18 + 1;
          }
          plVar9 = (long *)((long)plVar9 + 1);
        } while (plVar12 != plVar9);
LAB_10611ea74:
        lVar22 = 0;
        puVar11 = (undefined *)0x0;
        plVar9 = plVar12;
        goto joined_r0x00010611eb0c;
      }
      goto LAB_10611ec24;
    }
    ppbStack_f8 = (byte **)auStack_138;
    puStack_f0 = &DAT_10611f8fc;
    uVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                      (param_5,&UNK_10b4cf200,s__108b38569,&ppbStack_f8);
    if ((uVar5 & 1) == 0) {
LAB_10611ec24:
      ppbStack_f8 = &pbStack_128;
      puStack_f0 = &DAT_10611f8fc;
      plVar6 = (long *)__ZN4core3fmt5write17h64810b21425781ecE
                                 (param_5,&UNK_10b4cf200,s__108b38569,&ppbStack_f8);
      return plVar6;
    }
  }
  return (long *)0x1;
LAB_10611eaec:
  puVar11 = &UNK_109beca5a;
joined_r0x00010611eaf8:
  lVar22 = 1;
joined_r0x00010611eb0c:
  if (plVar9 != (long *)0x0) {
    if (plVar12 <= plVar9) {
      if (plVar9 != plVar12) goto LAB_10611ec98;
      goto LAB_10611eb2c;
    }
    if (-0x41 < (char)pbVar15[(long)plVar9]) goto LAB_10611eb2c;
LAB_10611ec98:
    __ZN4core3str16slice_error_fail17h7d5f7302866db666E(pbVar15,plVar12,0,plVar9,&UNK_10b4cf230);
    goto LAB_10611ecb0;
  }
LAB_10611eb2c:
  iVar18 = (int)lVar22;
  if (iVar18 == 0) {
    puVar11 = (undefined *)0x1;
  }
  uStack_100 = 2;
  if (iVar18 == 0) {
    uStack_100 = 0;
  }
  plVar6 = (long *)((long)plVar9 + lVar22);
  pbStack_118 = pbVar15;
  plStack_110 = plVar9;
  puStack_108 = puVar11;
  if (plVar6 != (long *)0x0) {
    if (plVar6 < plVar12) {
      if ((char)pbVar15[(long)plVar6] < -0x40) {
LAB_10611ecb0:
        __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                  (pbVar15,plVar12,plVar6,plVar12,&UNK_10b4cf248);
        goto LAB_10611eccc;
      }
    }
    else if (plVar12 != plVar6) goto LAB_10611ecb0;
  }
  ppbStack_f8 = &pbStack_118;
  puStack_f0 = &DAT_10611f8fc;
  ppuStack_e8 = &puStack_108;
  puStack_e0 = &DAT_10611f8fc;
  uVar5 = __ZN4core3fmt5write17h64810b21425781ecE(param_5,&UNK_10b4cf200,s__108ac1772,&ppbStack_f8);
  if ((uVar5 & 1) != 0) {
    return (long *)0x1;
  }
  lVar13 = (long)plVar12 - (long)plVar6;
  pbVar15 = pbVar15 + (long)plVar6;
  auVar23._8_8_ = lVar13;
  auVar23._0_8_ = pbVar15;
  if (iVar18 != 0) goto joined_r0x00010611e920;
  if (lVar13 == 0) goto LAB_10611ec24;
  uStack_d4 = (uint)*pbVar15;
  ppbStack_f8 = (byte **)&uStack_d4;
  puStack_f0 = &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_u32_GT_3fmt17h3bf066852fe5b28eE
  ;
  uVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                    (param_5,&UNK_10b4cf200,&UNK_109beca5c,&ppbStack_f8);
  if ((uVar5 & 1) != 0) {
    return (long *)0x1;
  }
  lVar13 = lVar13 + -1;
  if ((lVar13 == 0) || (-0x41 < (char)pbVar15[1])) {
    auVar23._8_8_ = lVar13;
    auVar23._0_8_ = pbVar15 + 1;
    goto joined_r0x00010611e920;
  }
LAB_10611eccc:
  plVar9 = (long *)__ZN4core3str16slice_error_fail17h7d5f7302866db666E
                             (auVar23._0_8_,auVar23._8_8_,1,auVar23._8_8_,&UNK_10b4cf260);
  lVar22 = plVar9[0xb];
  *extraout_x8 = 0x8000000000000004;
  extraout_x8[1] = lVar22;
  lVar22 = plVar9[3];
  plVar6 = plVar9;
  if (lVar22 != -0x8000000000000000) {
    lVar20 = plVar9[4];
    lVar14 = plVar9[5];
    if (lVar14 != 0) {
      puVar17 = (undefined8 *)(lVar20 + 8);
      do {
        if (puVar17[-1] != 0) {
          plVar6 = (long *)_free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if (lVar22 != 0) {
      plVar6 = (long *)_free(lVar20);
    }
  }
  if (*plVar9 != 0) {
    plVar6 = (long *)_free(plVar9[1]);
  }
  if (plVar9[8] == 0) {
    return plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar6 = (long *)(*(code *)PTR__free_10b61b0a8)(plVar9[9]);
  return plVar6;
}

