
void FUN_1012f9660(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_48 [8];
  
  bVar1 = *param_2;
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      if (param_2[1] == 0) {
LAB_1012f98a8:
        uVar5 = 0;
        param_1[1] = 0;
        goto LAB_1012f98ac;
      }
      if (param_2[1] != 1) {
        auStack_48[0] = 1;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b2242c0,&UNK_10b20a590);
        goto LAB_1012f97f8;
      }
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_1012f98c8:
          uVar3 = FUN_108855b04(param_2,auStack_48,&UNK_10b2117c0);
          *(undefined8 *)(param_1 + 8) = uVar3;
          *param_1 = 1;
          return;
        }
        lVar8 = *(long *)(param_2 + 8);
        plVar7 = *(long **)(param_2 + 0x10);
        lVar4 = *(long *)(param_2 + 0x18);
        if (lVar4 == 9) {
          if (*plVar7 == 0x656b636f73626577 && (char)plVar7[1] == 't') {
            param_1[1] = 0;
            *param_1 = 0;
          }
          else {
LAB_1012f96d8:
            uVar3 = FUN_1087e4494(plVar7,lVar4,&UNK_10b232970,2);
            *(undefined8 *)(param_1 + 8) = uVar3;
            *param_1 = 1;
          }
        }
        else {
          if ((lVar4 != 6) || ((int)*plVar7 != 0x72626577 || *(short *)((long)plVar7 + 4) != 0x6374)
             ) goto LAB_1012f96d8;
          param_1[1] = 1;
          *param_1 = 0;
        }
joined_r0x0001012f9774:
        if (lVar8 == 0) {
          return;
        }
        goto _free;
      }
      if (*(long *)(param_2 + 8) == 0) goto LAB_1012f98a8;
      if (*(long *)(param_2 + 8) != 1) {
        auStack_48[0] = 1;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b2242c0,&UNK_10b20a590);
        goto LAB_1012f97f8;
      }
    }
LAB_1012f986c:
    param_1[1] = 1;
    *param_1 = 0;
  }
  else if (bVar1 == 0xd) {
    plVar7 = *(long **)(param_2 + 8);
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 == 9) {
      if (*plVar7 == 0x656b636f73626577 && (char)plVar7[1] == 't') goto LAB_1012f98a8;
    }
    else if ((lVar8 == 6) && ((int)*plVar7 == 0x72626577 && *(short *)((long)plVar7 + 4) == 0x6374))
    goto LAB_1012f986c;
    uVar3 = FUN_1087e4494(plVar7,lVar8,&UNK_10b232970,2);
LAB_1012f97f8:
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar5 = 1;
LAB_1012f98ac:
    *param_1 = uVar5;
  }
  else {
    if (bVar1 == 0xe) {
      lVar8 = *(long *)(param_2 + 8);
      plVar7 = *(long **)(param_2 + 0x10);
      func_0x000100bde2dc(param_1,plVar7,*(undefined8 *)(param_2 + 0x18));
      goto joined_r0x0001012f9774;
    }
    if (bVar1 != 0xf) goto LAB_1012f98c8;
    func_0x000100bde2dc(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
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
      plVar7 = *(long **)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    plVar7 = *(long **)(param_2 + 0x10);
    plVar2 = plVar7;
    for (lVar8 = *(long *)(param_2 + 0x18); lVar8 != 0; lVar8 = lVar8 + -1) {
      FUN_100e077ec(plVar2);
      FUN_100e077ec(plVar2 + 4);
      plVar2 = plVar2 + 8;
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
        plVar7 = *(long **)(param_2 + 8);
        FUN_100e077ec(plVar7);
        goto _free;
      }
      if (uVar6 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar6 == 0x13) {
      plVar7 = *(long **)(param_2 + 8);
      FUN_100e077ec(plVar7);
      goto _free;
    }
    if (uVar6 != 0x14) goto LAB_100e078c0;
    plVar7 = *(long **)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) + 1;
    plVar2 = plVar7;
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      FUN_100e077ec(plVar2);
      plVar2 = plVar2 + 4;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar7);
  return;
}

