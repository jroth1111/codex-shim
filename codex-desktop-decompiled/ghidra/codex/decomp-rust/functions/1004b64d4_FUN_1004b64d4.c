
void FUN_1004b64d4(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_41;
  
  bVar2 = *param_2;
  if (bVar2 < 0xe) {
    if (bVar2 == 0xc) {
      uVar4 = *(ulong *)(param_2 + 8);
      param_1[1] = *(ulong *)(param_2 + 0x10);
      *param_1 = uVar4;
      param_1[2] = *(ulong *)(param_2 + 0x18);
      return;
    }
    if (bVar2 != 0xd) {
LAB_1004b6638:
      uVar4 = thunk_FUN_108855b04(param_2,&uStack_41,&UNK_10b20a620);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar4;
      return;
    }
    uVar9 = *(ulong *)(param_2 + 8);
    uVar10 = *(ulong *)(param_2 + 0x10);
joined_r0x0001004b656c:
    if (uVar10 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = _malloc(uVar10);
      if (uVar4 == 0) {
        FUN_107c03c64(1,uVar10);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b6538);
        (*pcVar3)();
      }
    }
    _memcpy(uVar4,uVar9,uVar10);
    *param_1 = uVar10;
    param_1[1] = uVar4;
    param_1[2] = uVar10;
  }
  else {
    if (bVar2 == 0xe) {
      uVar4 = *(ulong *)(param_2 + 8);
      uVar1 = *(ulong *)(param_2 + 0x10);
      uVar8 = *(ulong *)(param_2 + 0x18);
      func_0x0001055bf348(&uStack_70,uVar1,uVar8);
      uVar9 = uVar8;
      uVar10 = uVar1;
      uVar12 = uVar4;
      if (((uStack_70 & 1) != 0) &&
         (uVar9 = uStack_68, uVar10 = uVar8, uVar12 = uVar1, uVar4 != 0x8000000000000000)) {
        uStack_50 = uStack_60;
        uStack_58 = uStack_68;
        uStack_70 = uVar4;
        uStack_68 = uVar1;
        uStack_60 = uVar8;
        uVar4 = thunk_FUN_10886f33c(&uStack_41,&uStack_70);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar4;
        return;
      }
      *param_1 = uVar12;
      param_1[1] = uVar10;
      param_1[2] = uVar9;
      return;
    }
    if (bVar2 != 0xf) goto LAB_1004b6638;
    uVar4 = *(ulong *)(param_2 + 8);
    uVar1 = *(ulong *)(param_2 + 0x10);
    func_0x0001055bf348(&uStack_70,uVar4,uVar1);
    uVar9 = uStack_68;
    uVar10 = uStack_60;
    if ((int)uStack_70 != 1) goto joined_r0x0001004b656c;
    uStack_70 = CONCAT71(uStack_70._1_7_,6);
    uStack_68 = uVar4;
    uStack_60 = uVar1;
    uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_70,&uStack_41,&UNK_10b20a620);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar4;
  }
  bVar2 = *param_2;
  uVar6 = (uint)bVar2;
  if (bVar2 < 0xd) {
    if (bVar2 < 0xc) {
      return;
    }
    if (uVar6 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      lVar7 = *(long *)(param_2 + 0x10);
      goto LAB_100e078f8;
    }
LAB_100e078c0:
    lVar7 = *(long *)(param_2 + 0x10);
    lVar5 = lVar7;
    for (lVar11 = *(long *)(param_2 + 0x18); lVar11 != 0; lVar11 = lVar11 + -1) {
      FUN_100e077ec(lVar5);
      FUN_100e077ec(lVar5 + 0x20);
      lVar5 = lVar5 + 0x40;
    }
  }
  else {
    if (bVar2 < 0x11) {
      if (uVar6 - 0xf < 2 || uVar6 == 0xd) {
        return;
      }
      if (uVar6 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar6 < 0x13) {
      if (uVar6 == 0x11) {
        lVar7 = *(long *)(param_2 + 8);
        FUN_100e077ec(lVar7);
        goto LAB_100e078f8;
      }
      if (uVar6 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar6 == 0x13) {
      lVar7 = *(long *)(param_2 + 8);
      FUN_100e077ec(lVar7);
      goto LAB_100e078f8;
    }
    if (uVar6 != 0x14) goto LAB_100e078c0;
    lVar7 = *(long *)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18) + 1;
    lVar5 = lVar7;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100e077ec(lVar5);
      lVar5 = lVar5 + 0x20;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
LAB_100e078f8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar7);
  return;
}

