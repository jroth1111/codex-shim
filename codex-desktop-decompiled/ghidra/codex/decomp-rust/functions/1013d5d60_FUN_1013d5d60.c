
void FUN_1013d5d60(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined1 auStack_48 [8];
  
  bVar1 = *param_2;
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      bVar1 = param_2[1];
      if (bVar1 != 0) {
        if (bVar1 == 1) {
LAB_1013d6004:
          uVar8 = 1;
        }
        else {
          if (bVar1 != 2) {
            auStack_48[0] = 1;
            uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (auStack_48,&UNK_10b229e80,&UNK_10b20a590);
            goto LAB_1013d5f10;
          }
LAB_1013d5ff8:
          uVar8 = 2;
        }
        uVar5 = 0;
        param_1[1] = uVar8;
        goto LAB_1013d6054;
      }
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_1013d6070:
          uVar3 = FUN_108855b04(param_2,auStack_48,&UNK_10b20ee60);
          *(undefined8 *)(param_1 + 8) = uVar3;
          *param_1 = 1;
          return;
        }
        lVar7 = *(long *)(param_2 + 8);
        plVar9 = *(long **)(param_2 + 0x10);
        lVar4 = *(long *)(param_2 + 0x18);
        if (lVar4 == 0xb) {
          if (*plVar9 == 0x6d695f7475706e69 && *(long *)((long)plVar9 + 3) == 0x6567616d695f7475) {
            uVar8 = 1;
          }
          else {
            if (*plVar9 != 0x745f74757074756f || *(long *)((long)plVar9 + 3) != 0x747865745f747570)
            goto LAB_1013d5de0;
            uVar8 = 2;
          }
          uVar5 = 0;
          param_1[1] = uVar8;
        }
        else if ((lVar4 == 10) && (*plVar9 == 0x65745f7475706e69 && (short)plVar9[1] == 0x7478)) {
          uVar5 = 0;
          param_1[1] = 0;
        }
        else {
LAB_1013d5de0:
          uVar3 = FUN_1087e4494(plVar9,lVar4,&UNK_10b22cb50,3);
          *(undefined8 *)(param_1 + 8) = uVar3;
          uVar5 = 1;
        }
        *param_1 = uVar5;
joined_r0x0001013d5e7c:
        if (lVar7 == 0) {
          return;
        }
        goto _free;
      }
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        if (lVar7 == 1) goto LAB_1013d6004;
        if (lVar7 == 2) goto LAB_1013d5ff8;
        auStack_48[0] = 1;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b229e80,&UNK_10b20a590);
        goto LAB_1013d5f10;
      }
    }
LAB_1013d6050:
    uVar5 = 0;
    param_1[1] = 0;
LAB_1013d6054:
    *param_1 = uVar5;
  }
  else {
    if (bVar1 == 0xd) {
      plVar9 = *(long **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      if (lVar7 == 0xb) {
        if (*plVar9 == 0x6d695f7475706e69 && *(long *)((long)plVar9 + 3) == 0x6567616d695f7475)
        goto LAB_1013d6004;
        if (*plVar9 == 0x745f74757074756f && *(long *)((long)plVar9 + 3) == 0x747865745f747570)
        goto LAB_1013d5ff8;
      }
      else if ((lVar7 == 10) && (*plVar9 == 0x65745f7475706e69 && (short)plVar9[1] == 0x7478))
      goto LAB_1013d6050;
      uVar3 = FUN_1087e4494(plVar9,lVar7,&UNK_10b22cb50,3);
LAB_1013d5f10:
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar5 = 1;
      goto LAB_1013d6054;
    }
    if (bVar1 == 0xe) {
      lVar7 = *(long *)(param_2 + 8);
      plVar9 = *(long **)(param_2 + 0x10);
      func_0x000100ac28a4(param_1,plVar9,*(undefined8 *)(param_2 + 0x18));
      goto joined_r0x0001013d5e7c;
    }
    if (bVar1 != 0xf) goto LAB_1013d6070;
    func_0x000100ac28a4(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
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
      plVar9 = *(long **)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    plVar9 = *(long **)(param_2 + 0x10);
    plVar2 = plVar9;
    for (lVar7 = *(long *)(param_2 + 0x18); lVar7 != 0; lVar7 = lVar7 + -1) {
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
        plVar9 = *(long **)(param_2 + 8);
        FUN_100e077ec(plVar9);
        goto _free;
      }
      if (uVar6 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar6 == 0x13) {
      plVar9 = *(long **)(param_2 + 8);
      FUN_100e077ec(plVar9);
      goto _free;
    }
    if (uVar6 != 0x14) goto LAB_100e078c0;
    plVar9 = *(long **)(param_2 + 0x10);
    lVar7 = *(long *)(param_2 + 0x18) + 1;
    plVar2 = plVar9;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
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
  (*(code *)PTR__free_10b61b0a8)(plVar9);
  return;
}

