
void FUN_1013bbc24(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_48 [8];
  
  bVar1 = *param_2;
  if (0xc < bVar1) {
    if (bVar1 == 0xd) {
      func_0x000100a60098(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    else {
      if (bVar1 == 0xe) {
        lVar8 = *(long *)(param_2 + 8);
        lVar7 = *(long *)(param_2 + 0x10);
        func_0x000100a5f9f8(param_1,lVar7,*(undefined8 *)(param_2 + 0x18));
        goto LAB_1013bbccc;
      }
      if (bVar1 != 0xf) goto LAB_1013bbdb8;
      func_0x000100a5f9f8(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    goto code_r0x000100e077ec;
  }
  if (bVar1 != 1) {
    if (bVar1 != 4) {
      if (bVar1 != 0xc) {
LAB_1013bbdb8:
        uVar3 = FUN_108855b04(param_2,auStack_48,&UNK_10b20e2c0);
        *(undefined8 *)(param_1 + 8) = uVar3;
        *param_1 = 1;
        return;
      }
      lVar8 = *(long *)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      func_0x000100a60098(param_1,lVar7,*(undefined8 *)(param_2 + 0x18));
LAB_1013bbccc:
      if (lVar8 == 0) {
        return;
      }
      goto _free;
    }
    switch(*(undefined8 *)(param_2 + 8)) {
    case 0:
      goto code_r0x0001013bbd0c;
    case 1:
      goto code_r0x0001013bbd60;
    case 2:
      goto code_r0x0001013bbd3c;
    case 3:
      goto code_r0x0001013bbd48;
    case 4:
      goto code_r0x0001013bbd24;
    case 5:
      goto code_r0x0001013bbd6c;
    case 6:
      goto code_r0x0001013bbd78;
    case 7:
      goto code_r0x0001013bbd54;
    case 8:
      goto code_r0x0001013bbd90;
    case 9:
      goto code_r0x0001013bbd30;
    case 10:
      goto code_r0x0001013bbd84;
    default:
      auStack_48[0] = 1;
      uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_48,&UNK_10b22b798,&UNK_10b20a590);
      goto LAB_1013bbe44;
    }
  }
  switch(param_2[1]) {
  case 0:
    goto code_r0x0001013bbd0c;
  case 1:
code_r0x0001013bbd60:
    uVar6 = 1;
    break;
  case 2:
code_r0x0001013bbd3c:
    uVar6 = 2;
    break;
  case 3:
code_r0x0001013bbd48:
    uVar6 = 3;
    break;
  case 4:
code_r0x0001013bbd24:
    uVar6 = 4;
    break;
  case 5:
code_r0x0001013bbd6c:
    uVar6 = 5;
    break;
  case 6:
code_r0x0001013bbd78:
    uVar6 = 6;
    break;
  case 7:
code_r0x0001013bbd54:
    uVar6 = 7;
    break;
  case 8:
code_r0x0001013bbd90:
    uVar6 = 8;
    break;
  case 9:
code_r0x0001013bbd30:
    uVar6 = 9;
    break;
  case 10:
code_r0x0001013bbd84:
    uVar6 = 10;
    break;
  default:
    auStack_48[0] = 1;
    uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (auStack_48,&UNK_10b22b798,&UNK_10b20a590);
LAB_1013bbe44:
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar4 = 1;
    goto LAB_1013bbd9c;
  }
  uVar4 = 0;
  param_1[1] = uVar6;
  goto LAB_1013bbd9c;
code_r0x0001013bbd0c:
  uVar4 = 0;
  param_1[1] = 0;
LAB_1013bbd9c:
  *param_1 = uVar4;
code_r0x000100e077ec:
  bVar1 = *param_2;
  uVar5 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar5 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      lVar7 = *(long *)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    lVar7 = *(long *)(param_2 + 0x10);
    lVar2 = lVar7;
    for (lVar8 = *(long *)(param_2 + 0x18); lVar8 != 0; lVar8 = lVar8 + -1) {
      FUN_100e077ec(lVar2);
      FUN_100e077ec(lVar2 + 0x20);
      lVar2 = lVar2 + 0x40;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar5 - 0xf < 2 || uVar5 == 0xd) {
        return;
      }
      if (uVar5 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar5 < 0x13) {
      if (uVar5 == 0x11) {
        lVar7 = *(long *)(param_2 + 8);
        FUN_100e077ec(lVar7);
        goto _free;
      }
      if (uVar5 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar5 == 0x13) {
      lVar7 = *(long *)(param_2 + 8);
      FUN_100e077ec(lVar7);
      goto _free;
    }
    if (uVar5 != 0x14) goto LAB_100e078c0;
    lVar7 = *(long *)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) + 1;
    lVar2 = lVar7;
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      FUN_100e077ec(lVar2);
      lVar2 = lVar2 + 0x20;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar7);
  return;
}

