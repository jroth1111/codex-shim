
/* WARNING: Type propagation algorithm not settling */

long * FUN_10611e800(byte *param_1,ulong param_2,byte param_3,byte param_4,long *param_5)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong unaff_x25;
  bool bVar13;
  byte *pbStack_c8;
  ulong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  byte **ppbStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  uint uStack_64;
  
  if (param_3 < 2) {
    bVar3 = param_3 != 0;
    pbStack_b8 = &UNK_109beca46;
    if (bVar3) {
      pbStack_b8 = &UNK_109beca47;
    }
    uStack_b0 = 1;
LAB_10611e89c:
    bVar13 = 1 < param_3;
  }
  else {
    if (param_3 == 2) {
      bVar3 = false;
      pbStack_b8 = &UNK_109beca48;
LAB_10611e898:
      uStack_b0 = 3;
      goto LAB_10611e89c;
    }
    if (param_3 == 3) {
      bVar3 = true;
      pbStack_b8 = &UNK_109beca4b;
      goto LAB_10611e898;
    }
    bVar13 = false;
    bVar3 = false;
    pbStack_b8 = (byte *)0x1;
    uStack_b0 = 0;
  }
  ppbStack_88 = &pbStack_b8;
  puStack_80 = &DAT_10611f8fc;
  pbStack_c8 = param_1;
  uStack_c0 = param_2;
  uVar4 = __ZN4core3fmt5write17h64810b21425781ecE(param_5,&UNK_10b4cf200,s__108b38569,&ppbStack_88);
  if ((uVar4 & 1) == 0) {
    if ((param_4 & bVar13) != 0) {
      lVar7 = param_5[2];
      if (*param_5 == lVar7) {
        FUN_108a8c380(param_5,lVar7,1,1,1);
        lVar7 = param_5[2];
      }
      *(undefined1 *)(param_5[1] + lVar7) = 10;
      param_5[2] = lVar7 + 1;
    }
    if (bVar3) {
      iVar8 = 2;
      if (bVar13 == false) {
        iVar8 = 0;
      }
      if (param_2 != 0) {
LAB_10611e93c:
        iVar12 = 0;
        uVar4 = 0;
        if (bVar13 == false) {
LAB_10611e9fc:
          bVar2 = param_1[uVar4];
          if (bVar2 < 0xd) {
            if (bVar2 < 10) {
              if (bVar2 == 8) goto LAB_10611eab0;
              if (bVar2 == 9) goto LAB_10611ea88;
            }
            else {
              if (bVar2 == 10) {
                lVar7 = 1;
                puVar9 = &UNK_109beca52;
                goto joined_r0x00010611eb0c;
              }
              if (bVar2 == 0xc) goto LAB_10611ea9c;
            }
LAB_10611ea50:
            if ((bVar2 < 0x20) || (iVar12 = 0, bVar2 == 0x7f)) goto LAB_10611ea64;
LAB_10611e9f0:
            uVar4 = uVar4 + 1;
            if (param_2 == uVar4) goto LAB_10611ea74;
            goto LAB_10611e9fc;
          }
          if (bVar2 == 0x22) {
            if (iVar8 <= iVar12) goto LAB_10611eaec;
            iVar12 = iVar12 + 1;
            goto LAB_10611e9f0;
          }
          if (bVar2 == 0xd) goto LAB_10611eac4;
          if (bVar2 != 0x5c) goto LAB_10611ea50;
LAB_10611ead8:
          puVar9 = &UNK_109beca58;
          goto joined_r0x00010611eaf8;
        }
        do {
          bVar2 = param_1[uVar4];
          if (bVar2 < 0xc) {
            if (bVar2 != 10) {
              if (bVar2 != 8) {
                if (bVar2 != 9) goto LAB_10611e9d0;
                goto LAB_10611ea88;
              }
              goto LAB_10611eab0;
            }
LAB_10611e954:
            iVar12 = 0;
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
            if (iVar8 <= iVar12) goto LAB_10611eaec;
            iVar12 = iVar12 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (param_2 != uVar4);
LAB_10611ea74:
        lVar7 = 0;
        puVar9 = (undefined *)0x0;
        uVar4 = param_2;
        goto joined_r0x00010611eb0c;
      }
    }
    else {
      ppbStack_88 = &pbStack_c8;
      puStack_80 = &DAT_10611f8fc;
      uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                        (param_5,&UNK_10b4cf200,s__108b38569,&ppbStack_88);
      if ((uVar4 & 1) != 0) goto LAB_10611e8dc;
    }
LAB_10611ec24:
    ppbStack_88 = &pbStack_b8;
    puStack_80 = &DAT_10611f8fc;
    plVar5 = (long *)__ZN4core3fmt5write17h64810b21425781ecE
                               (param_5,&UNK_10b4cf200,s__108b38569,&ppbStack_88);
  }
  else {
LAB_10611e8dc:
    plVar5 = (long *)0x1;
  }
  return plVar5;
LAB_10611ea9c:
  puVar9 = &UNK_109beca54;
  goto joined_r0x00010611eaf8;
LAB_10611eab0:
  puVar9 = &UNK_109beca4e;
  goto joined_r0x00010611eaf8;
LAB_10611ea88:
  lVar7 = 1;
  puVar9 = &UNK_109beca50;
  goto joined_r0x00010611eb0c;
LAB_10611ea64:
  lVar7 = 0;
  puVar9 = (undefined *)0x0;
  goto joined_r0x00010611eb0c;
LAB_10611eac4:
  lVar7 = 1;
  puVar9 = &UNK_109beca56;
  goto joined_r0x00010611eb0c;
LAB_10611eaec:
  puVar9 = &UNK_109beca5a;
joined_r0x00010611eaf8:
  lVar7 = 1;
joined_r0x00010611eb0c:
  if (uVar4 != 0) {
    if (param_2 <= uVar4) {
      if (uVar4 != param_2) goto LAB_10611ec98;
      goto LAB_10611eb2c;
    }
    if (-0x41 < (char)param_1[uVar4]) goto LAB_10611eb2c;
LAB_10611ec98:
    __ZN4core3str16slice_error_fail17h7d5f7302866db666E(param_1,param_2,0,uVar4,&UNK_10b4cf230);
    goto LAB_10611ecb0;
  }
LAB_10611eb2c:
  iVar12 = (int)lVar7;
  if (iVar12 == 0) {
    puVar9 = (undefined *)0x1;
  }
  uStack_90 = 2;
  if (iVar12 == 0) {
    uStack_90 = 0;
  }
  unaff_x25 = uVar4 + lVar7;
  pbStack_a8 = param_1;
  uStack_a0 = uVar4;
  puStack_98 = puVar9;
  if (unaff_x25 != 0) {
    if (unaff_x25 < param_2) {
      if ((char)param_1[unaff_x25] < -0x40) {
LAB_10611ecb0:
        __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                  (param_1,param_2,unaff_x25,param_2,&UNK_10b4cf248);
        goto LAB_10611eccc;
      }
    }
    else if (param_2 != unaff_x25) goto LAB_10611ecb0;
  }
  ppbStack_88 = &pbStack_a8;
  puStack_80 = &DAT_10611f8fc;
  ppuStack_78 = &puStack_98;
  puStack_70 = &DAT_10611f8fc;
  uVar4 = __ZN4core3fmt5write17h64810b21425781ecE(param_5,&UNK_10b4cf200,s__108ac1772,&ppbStack_88);
  if ((uVar4 & 1) != 0) goto LAB_10611e8dc;
  param_2 = param_2 - unaff_x25;
  param_1 = param_1 + unaff_x25;
  if (iVar12 == 0) {
    if (param_2 == 0) goto LAB_10611ec24;
    uStack_64 = (uint)*param_1;
    ppbStack_88 = (byte **)&uStack_64;
    puStack_80 = &
                 __ZN4core3fmt3num53__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_u32_GT_3fmt17h3bf066852fe5b28eE
    ;
    uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                      (param_5,&UNK_10b4cf200,&UNK_109beca5c,&ppbStack_88);
    if ((uVar4 & 1) != 0) goto LAB_10611e8dc;
    if ((param_2 - 1 != 0) && ((char)param_1[1] < -0x40)) {
LAB_10611eccc:
      plVar6 = (long *)__ZN4core3str16slice_error_fail17h7d5f7302866db666E
                                 (param_1,param_2,1,param_2,&UNK_10b4cf260);
      lVar7 = plVar6[0xb];
      *extraout_x8 = 0x8000000000000004;
      extraout_x8[1] = lVar7;
      lVar7 = plVar6[3];
      plVar5 = plVar6;
      if (lVar7 != -0x8000000000000000) {
        lVar1 = plVar6[4];
        lVar10 = plVar6[5];
        if (lVar10 != 0) {
          puVar11 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar11[-1] != 0) {
              plVar5 = (long *)_free(*puVar11);
            }
            puVar11 = puVar11 + 3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar7 != 0) {
          plVar5 = (long *)_free(lVar1);
        }
      }
      if (*plVar6 != 0) {
        plVar5 = (long *)_free(plVar6[1]);
      }
      if (plVar6[8] == 0) {
        return plVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(*(code *)PTR__free_10b61b0a8)(plVar6[9]);
      return plVar5;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  if (param_2 == 0) goto LAB_10611ec24;
  goto LAB_10611e93c;
}

