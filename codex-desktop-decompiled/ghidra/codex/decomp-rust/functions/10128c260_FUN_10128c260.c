
void FUN_10128c260(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined1 auStack_48 [8];
  
  bVar1 = *param_2;
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      bVar1 = param_2[1];
      if (bVar1 != 0) {
        if (bVar1 == 1) {
LAB_10128c494:
          uVar8 = 1;
        }
        else {
          if (bVar1 != 2) {
            auStack_48[0] = 1;
            uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (auStack_48,&UNK_10b229e80,&UNK_10b20a590);
            goto LAB_10128c3f8;
          }
LAB_10128c488:
          uVar8 = 2;
        }
        uVar5 = 0;
        param_1[1] = uVar8;
        goto LAB_10128c4e4;
      }
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_10128c500:
          uVar3 = FUN_108855b04(param_2,auStack_48,&UNK_10b210500);
          *(undefined8 *)(param_1 + 8) = uVar3;
          *param_1 = 1;
          return;
        }
        lVar7 = *(long *)(param_2 + 8);
        piVar9 = *(int **)(param_2 + 0x10);
        lVar4 = *(long *)(param_2 + 0x18);
        if (lVar4 == 6) {
          if (*piVar9 == 0x656c6564 && (short)piVar9[1] == 0x6574) {
            uVar8 = 1;
          }
          else {
            if (*piVar9 != 0x61647075 || (short)piVar9[1] != 0x6574) goto LAB_10128c2d4;
            uVar8 = 2;
          }
          uVar5 = 0;
          param_1[1] = uVar8;
        }
        else if ((lVar4 == 3) && ((short)*piVar9 == 0x6461 && *(char *)((long)piVar9 + 2) == 'd')) {
          uVar5 = 0;
          param_1[1] = 0;
        }
        else {
LAB_10128c2d4:
          uVar3 = FUN_1087e4494(piVar9,lVar4,&UNK_10b22d2e0,3);
          *(undefined8 *)(param_1 + 8) = uVar3;
          uVar5 = 1;
        }
        *param_1 = uVar5;
joined_r0x00010128c370:
        if (lVar7 == 0) {
          return;
        }
        goto _free;
      }
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        if (lVar7 == 1) goto LAB_10128c494;
        if (lVar7 == 2) goto LAB_10128c488;
        auStack_48[0] = 1;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b229e80,&UNK_10b20a590);
        goto LAB_10128c3f8;
      }
    }
LAB_10128c4e0:
    uVar5 = 0;
    param_1[1] = 0;
LAB_10128c4e4:
    *param_1 = uVar5;
  }
  else {
    if (bVar1 == 0xd) {
      piVar9 = *(int **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      if (lVar7 == 6) {
        if (*piVar9 == 0x656c6564 && (short)piVar9[1] == 0x6574) goto LAB_10128c494;
        if (*piVar9 == 0x61647075 && (short)piVar9[1] == 0x6574) goto LAB_10128c488;
      }
      else if ((lVar7 == 3) && ((short)*piVar9 == 0x6461 && *(char *)((long)piVar9 + 2) == 'd'))
      goto LAB_10128c4e0;
      uVar3 = FUN_1087e4494(piVar9,lVar7,&UNK_10b22d2e0,3);
LAB_10128c3f8:
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar5 = 1;
      goto LAB_10128c4e4;
    }
    if (bVar1 == 0xe) {
      lVar7 = *(long *)(param_2 + 8);
      piVar9 = *(int **)(param_2 + 0x10);
      func_0x000100ad8298(param_1,piVar9,*(undefined8 *)(param_2 + 0x18));
      goto joined_r0x00010128c370;
    }
    if (bVar1 != 0xf) goto LAB_10128c500;
    func_0x000100ad8298(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  bVar1 = *param_2;
  uVar6 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar6 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      piVar9 = *(int **)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    piVar9 = *(int **)(param_2 + 0x10);
    piVar2 = piVar9;
    for (lVar7 = *(long *)(param_2 + 0x18); lVar7 != 0; lVar7 = lVar7 + -1) {
      FUN_100e077ec(piVar2);
      FUN_100e077ec(piVar2 + 8);
      piVar2 = piVar2 + 0x10;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar6 - 0xf < 2 || uVar6 == 0xd) {
        return;
      }
      if (uVar6 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar6 < 0x13) {
      if (uVar6 == 0x11) {
        piVar9 = *(int **)(param_2 + 8);
        FUN_100e077ec(piVar9);
        goto _free;
      }
      if (uVar6 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar6 == 0x13) {
      piVar9 = *(int **)(param_2 + 8);
      FUN_100e077ec(piVar9);
      goto _free;
    }
    if (uVar6 != 0x14) goto LAB_100e078c0;
    piVar9 = *(int **)(param_2 + 0x10);
    lVar7 = *(long *)(param_2 + 0x18) + 1;
    piVar2 = piVar9;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      FUN_100e077ec(piVar2);
      piVar2 = piVar2 + 8;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(piVar9);
  return;
}

