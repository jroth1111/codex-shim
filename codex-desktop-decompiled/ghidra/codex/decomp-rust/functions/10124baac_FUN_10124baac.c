
void FUN_10124baac(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x20;
  long lVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  bool bVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  ulong uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  uVar14 = *param_2;
  if (uVar14 == 0x8000000000000000) {
    *param_1 = 0x8000000000000000;
    uVar14 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar14 = 5;
    }
    if (uVar14 < 3) {
      return;
    }
    if (uVar14 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar2 = (long *)param_2[2];
    }
    else if (uVar14 == 4) {
      plVar2 = (long *)param_2[2];
      lVar9 = param_2[3] + 1;
      plVar1 = plVar2;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100de6690(plVar1);
        plVar1 = plVar1 + 9;
      }
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar14 = param_2[4];
      if ((uVar14 != 0) && (uVar14 * 9 != -0x11)) {
        _free(param_2[3] + uVar14 * -8 + -8);
      }
      plVar2 = (long *)param_2[1];
      lVar9 = param_2[2] + 1;
      plVar1 = plVar2;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        if (*plVar1 != 0) {
          _free(plVar1[1]);
        }
        FUN_100de6690(plVar1 + 3);
        plVar1 = plVar1 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar2);
    return;
  }
  uVar6 = uVar14 ^ 0x8000000000000000;
  if (-1 < (long)uVar14) {
    uVar6 = 5;
  }
  if (uVar6 != 4) {
    if (uVar6 == 5) {
      uVar11 = param_2[6];
      ppuVar10 = (undefined **)param_2[1];
      puVar5 = (undefined *)param_2[2];
      uVar6 = param_2[4];
      if ((uVar6 != 0) && (uVar6 * 9 != -0x11)) {
        _free(param_2[3] + uVar6 * -8 + -8);
      }
      ppuVar12 = ppuVar10 + (long)puVar5 * 0xd;
      ppuStack_130 = (undefined **)0x8000000000000005;
      ppuStack_e8 = ppuVar10;
      uStack_d8 = uVar14;
      ppuStack_d0 = ppuVar12;
      if (puVar5 != (undefined *)0x0) {
        ppuVar15 = (undefined **)0x8000000000000000;
        ppuVar7 = ppuVar10;
        ppuStack_e0 = ppuVar10;
        do {
          ppuVar10 = ppuVar7 + 0xd;
          ppuVar8 = ppuVar10;
          puVar4 = puVar5;
          if (*ppuVar7 == (undefined *)0x8000000000000000) break;
          ppuStack_118 = (undefined **)ppuVar7[6];
          puStack_120 = ppuVar7[5];
          puStack_108 = ppuVar7[8];
          puStack_110 = ppuVar7[7];
          puStack_f8 = ppuVar7[10];
          puStack_100 = ppuVar7[9];
          puStack_f0 = ppuVar7[0xb];
          ppuStack_128 = (undefined **)ppuVar7[4];
          ppuStack_130 = (undefined **)ppuVar7[3];
          if (ppuVar7[2] == (undefined *)0x7) {
            bVar13 = *(int *)ppuVar7[1] != 0x7373656d ||
                     *(int *)((long)ppuVar7[1] + 3) != 0x65676173;
          }
          else {
            bVar13 = true;
          }
          if (*ppuVar7 != (undefined *)0x0) {
            _free();
          }
          ppuVar7 = ppuStack_130;
          if (bVar13) {
            ppuStack_130 = (undefined **)0x8000000000000005;
            if (ppuVar7 == (undefined **)0x8000000000000005) {
              ppuStack_e0 = ppuVar10;
              puVar4 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
              ppuVar15 = (undefined **)((ulong)ppuVar15 & 0x7fffffffffffffff);
joined_r0x00010124bfd8:
              ppuVar8 = ppuStack_e0;
              if (ppuVar15 != (undefined **)0x0) {
                _free(puVar5);
                ppuVar8 = ppuStack_e0;
              }
              goto LAB_10124be90;
            }
            ppuStack_c0 = ppuVar7;
            puStack_b0 = puStack_120;
            ppuStack_b8 = ppuStack_128;
            puStack_a0 = puStack_110;
            ppuStack_a8 = ppuStack_118;
            puStack_90 = puStack_100;
            puStack_98 = puStack_108;
            puStack_80 = puStack_f0;
            puStack_88 = puStack_f8;
            FUN_100de6690(&ppuStack_c0);
          }
          else {
            if (ppuVar15 != (undefined **)0x8000000000000000) {
              puStack_78 = &UNK_108ca1064;
              uStack_70 = 7;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_100c7b3a0;
              ppuStack_e0 = ppuVar10;
              puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_c0);
              goto joined_r0x00010124bfd8;
            }
            ppuStack_130 = (undefined **)0x8000000000000005;
            if (ppuVar7 == (undefined **)0x8000000000000005) {
              ppuStack_e0 = ppuVar10;
              puVar4 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
              ppuVar8 = ppuStack_e0;
              goto LAB_10124be90;
            }
            ppuStack_c0 = ppuVar7;
            puStack_b0 = puStack_120;
            ppuStack_b8 = ppuStack_128;
            puStack_a0 = puStack_110;
            ppuStack_a8 = ppuStack_118;
            puStack_90 = puStack_100;
            puStack_98 = puStack_108;
            puStack_80 = puStack_f0;
            puStack_88 = puStack_f8;
            if (ppuVar7 != (undefined **)0x8000000000000003) {
              ppuStack_e0 = ppuVar10;
              puVar4 = (undefined *)FUN_108832ea0(&ppuStack_c0,&puStack_78,&UNK_10b20a5e0);
              FUN_100de6690(&ppuStack_c0);
              ppuVar8 = ppuStack_e0;
              goto LAB_10124be90;
            }
            puVar4 = puStack_120;
            if (ppuStack_128 == (undefined **)0x8000000000000000) goto LAB_10124be90;
            ppuStack_138 = ppuStack_118;
            puVar5 = puStack_120;
            ppuVar15 = ppuStack_128;
            ppuStack_c0 = ppuVar7;
          }
          ppuVar7 = ppuVar10;
          ppuVar8 = ppuVar12;
          puVar4 = puVar5;
        } while (ppuVar10 != ppuVar12);
        if (ppuVar15 != (undefined **)0x8000000000000000) {
          ppuStack_e0 = ppuVar10;
          if (ppuVar12 != ppuVar8) {
            puVar5 = (undefined *)FUN_1087e422c(uVar11,&UNK_10b21cb90,&UNK_10b20a590);
            if (ppuVar15 != (undefined **)0x0) {
              _free(puVar4);
            }
            ppuVar15 = (undefined **)0x8000000000000000;
            puVar4 = puVar5;
          }
          FUN_100de8910(&ppuStack_e8);
          goto LAB_10124beb0;
        }
      }
      puStack_78 = &UNK_108ca1064;
      uStack_70 = 7;
      ppuStack_c0 = &puStack_78;
      ppuStack_b8 = (undefined **)&DAT_100c7b3a0;
      ppuStack_e0 = ppuVar10;
      puVar4 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c0);
      ppuVar8 = ppuStack_e0;
LAB_10124be90:
      ppuStack_e0 = ppuVar8;
      FUN_100de8910(&ppuStack_e8);
      ppuStack_138 = ppuVar10;
      if (ppuStack_130 != (undefined **)0x8000000000000005) {
        FUN_100de6690(&ppuStack_130);
      }
    }
    else {
      puVar4 = (undefined *)FUN_108832ea0(param_2,&puStack_78,&UNK_10b21d320);
      ppuStack_138 = unaff_x20;
    }
    ppuVar15 = (undefined **)0x8000000000000000;
    goto LAB_10124beb0;
  }
  puVar5 = (undefined *)param_2[1];
  ppuVar10 = (undefined **)param_2[2];
  uVar6 = param_2[3];
  ppuVar7 = ppuVar10 + uVar6 * 9;
  ppuVar12 = ppuVar10;
  ppuStack_c0 = ppuVar10;
  puStack_b0 = puVar5;
  ppuStack_a8 = ppuVar7;
  if (uVar6 == 0) {
LAB_10124bd34:
    ppuStack_b8 = ppuVar12;
    puVar3 = (undefined *)FUN_1087e422c(0,&UNK_10b231ae8,&UNK_10b20a590);
LAB_10124bd50:
    ppuVar15 = (undefined **)0x8000000000000000;
    puVar4 = puVar3;
  }
  else {
    ppuVar12 = ppuVar10 + 9;
    ppuVar8 = (undefined **)*ppuVar10;
    if (ppuVar8 == (undefined **)0x8000000000000005) goto LAB_10124bd34;
    puVar3 = ppuVar10[2];
    ppuVar15 = (undefined **)ppuVar10[1];
    puStack_110 = ppuVar10[4];
    ppuStack_118 = (undefined **)ppuVar10[3];
    puStack_100 = ppuVar10[6];
    puStack_108 = ppuVar10[5];
    puStack_f0 = ppuVar10[8];
    puStack_f8 = ppuVar10[7];
    ppuStack_130 = ppuVar8;
    ppuStack_128 = ppuVar15;
    puStack_120 = puVar3;
    ppuStack_b8 = ppuVar12;
    if (ppuVar8 != (undefined **)0x8000000000000003) {
      puVar3 = (undefined *)FUN_108832ea0(&ppuStack_130,&puStack_78,&UNK_10b20a5e0);
      FUN_100de6690(&ppuStack_130);
      goto LAB_10124bd50;
    }
    if ((ppuVar15 == (undefined **)0x8000000000000000) ||
       (ppuVar15 == (undefined **)0x8000000000000001)) goto LAB_10124bd50;
    puVar4 = puVar3;
    ppuStack_138 = ppuStack_118;
    if (uVar6 != 1) {
      puVar4 = (undefined *)FUN_1087e422c(uVar6,&UNK_10b21cb80,&UNK_10b20a590);
      if (ppuVar15 != (undefined **)0x0) {
        _free(puVar3);
      }
      ppuVar15 = (undefined **)0x8000000000000000;
    }
  }
  lVar9 = ((ulong)((long)ppuVar7 - (long)ppuVar12) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar9 = lVar9 + -1, lVar9 != 0) {
    FUN_100de6690(ppuVar12);
    ppuVar12 = ppuVar12 + 9;
  }
  if (puVar5 != (undefined *)0x0) {
    _free(ppuVar10);
  }
LAB_10124beb0:
  if (((long)uVar14 < 0) && ((uVar14 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(param_2);
  }
  if (ppuVar15 == (undefined **)0x8000000000000000) {
    ppuVar15 = (undefined **)0x8000000000000001;
  }
  else {
    param_1[2] = ppuStack_138;
  }
  *param_1 = ppuVar15;
  param_1[1] = puVar4;
  return;
}

