
void FUN_101284bb4(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 auStack_48 [8];
  
  bVar1 = *param_2;
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      bVar1 = param_2[1];
      if (bVar1 < 3) {
        if (bVar1 == 0) {
LAB_101284d30:
          uVar4 = 0;
          param_1[1] = 0;
          goto LAB_101284d44;
        }
        if (bVar1 == 1) {
LAB_101284d18:
          uVar7 = 1;
        }
        else {
          if (bVar1 != 2) {
LAB_101284d98:
            auStack_48[0] = 1;
            uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (auStack_48,&UNK_10b22e148,&UNK_10b20a590);
            goto LAB_101284dc0;
          }
LAB_101284c98:
          uVar7 = 2;
        }
      }
      else if (bVar1 == 3) {
LAB_101284d38:
        uVar7 = 3;
      }
      else if (bVar1 == 4) {
LAB_101284d24:
        uVar7 = 4;
      }
      else {
        if (bVar1 != 5) goto LAB_101284d98;
LAB_101284d0c:
        uVar7 = 5;
      }
      uVar4 = 0;
      param_1[1] = uVar7;
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_101284d60:
          uVar3 = FUN_108855b04(param_2,auStack_48,&UNK_10b20fa60);
          *(undefined8 *)(param_1 + 8) = uVar3;
          *param_1 = 1;
          return;
        }
        lVar8 = *(long *)(param_2 + 8);
        lVar6 = *(long *)(param_2 + 0x10);
        func_0x000100b4024c(param_1,lVar6,*(undefined8 *)(param_2 + 0x18));
LAB_101284c5c:
        if (lVar8 == 0) {
          return;
        }
        goto _free;
      }
      lVar6 = *(long *)(param_2 + 8);
      if (lVar6 < 3) {
        if (lVar6 == 0) goto LAB_101284d30;
        if (lVar6 == 1) goto LAB_101284d18;
        if (lVar6 == 2) goto LAB_101284c98;
      }
      else {
        if (lVar6 == 3) goto LAB_101284d38;
        if (lVar6 == 4) goto LAB_101284d24;
        if (lVar6 == 5) goto LAB_101284d0c;
      }
      auStack_48[0] = 1;
      uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_48,&UNK_10b22e148,&UNK_10b20a590);
LAB_101284dc0:
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar4 = 1;
    }
LAB_101284d44:
    *param_1 = uVar4;
  }
  else if (bVar1 == 0xd) {
    func_0x000100b4024c(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (bVar1 == 0xe) {
      lVar8 = *(long *)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
      func_0x000100b3f9d4(param_1,lVar6,*(undefined8 *)(param_2 + 0x18));
      goto LAB_101284c5c;
    }
    if (bVar1 != 0xf) goto LAB_101284d60;
    func_0x000100b3f9d4(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
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
      lVar6 = *(long *)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    lVar6 = *(long *)(param_2 + 0x10);
    lVar2 = lVar6;
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
        lVar6 = *(long *)(param_2 + 8);
        FUN_100e077ec(lVar6);
        goto _free;
      }
      if (uVar5 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar5 == 0x13) {
      lVar6 = *(long *)(param_2 + 8);
      FUN_100e077ec(lVar6);
      goto _free;
    }
    if (uVar5 != 0x14) goto LAB_100e078c0;
    lVar6 = *(long *)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) + 1;
    lVar2 = lVar6;
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
  (*(code *)PTR__free_10b61b0a8)(lVar6);
  return;
}

