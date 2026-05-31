
/* WARNING: Possible PIC construction at 0x000103db24e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db24b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db24c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db24b4) */
/* WARNING: Removing unreachable block (ram,0x000103db24e4) */
/* WARNING: Removing unreachable block (ram,0x000103db24c4) */

void FUN_103d20208(long *param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  byte *unaff_x19;
  byte *unaff_x20;
  long lVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  byte *unaff_x22;
  undefined8 uVar11;
  long unaff_x23;
  byte *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  int aiStack_78 [2];
  undefined8 uStack_70;
  long lStack_68;
  uint auStack_60 [2];
  long lStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  bVar1 = *param_2;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      lVar4 = *(long *)(param_2 + 8);
      param_1[1] = *(long *)(param_2 + 0x10);
      *param_1 = lVar4;
      param_1[2] = *(long *)(param_2 + 0x18);
      return;
    }
    if (bVar1 != 0xd) {
LAB_103d20350:
      lVar4 = func_0x00010897c8c4(param_2,&uStack_41,&UNK_10b2f73c8);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar4;
      return;
    }
    uStack_70 = *(undefined8 *)(param_2 + 8);
    lStack_68 = *(long *)(param_2 + 0x10);
    lVar4 = lStack_68;
    uVar11 = uStack_70;
    if (lStack_68 == 0) goto LAB_103d202a4;
LAB_103d2024c:
    lVar3 = _malloc(lVar4);
    uStack_70 = uVar11;
    if (lVar3 == 0) {
      func_0x0001087c9084(1,lVar4);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103d2026c);
      (*pcVar2)();
    }
  }
  else {
    if (bVar1 == 0xe) {
      lVar4 = *(long *)(param_2 + 8);
      lVar3 = *(long *)(param_2 + 0x10);
      lVar8 = *(long *)(param_2 + 0x18);
      func_0x0001055bf348(auStack_60,lVar3,lVar8);
      lVar5 = lVar8;
      lVar9 = lVar3;
      lVar10 = lVar4;
      if (((auStack_60[0] & 1) != 0) &&
         (lVar5 = lStack_58, lVar9 = lVar8, lVar10 = lVar3, lVar4 != -0x8000000000000000)) {
        auStack_60[0] = CONCAT31(auStack_60[0]._1_3_,6);
        lStack_58 = lVar3;
        lStack_50 = lVar8;
        lVar5 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_60,&uStack_41,&UNK_10b2f73c8);
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar5;
        if (lVar4 == 0) {
          return;
        }
        _free(lVar3);
        return;
      }
      *param_1 = lVar10;
      param_1[1] = lVar9;
      param_1[2] = lVar5;
      return;
    }
    if (bVar1 != 0xf) goto LAB_103d20350;
    lVar4 = *(long *)(param_2 + 8);
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    func_0x0001055bf348(aiStack_78,lVar4,uVar11);
    if (aiStack_78[0] == 1) {
      auStack_60[0] = CONCAT31(auStack_60[0]._1_3_,6);
      lStack_58 = lVar4;
      lStack_50 = uVar11;
      lVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_60,&uStack_41,&UNK_10b2f73c8);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar4;
      goto SUB_103db23f4;
    }
    lVar4 = lStack_68;
    uVar11 = uStack_70;
    if (lStack_68 != 0) goto LAB_103d2024c;
LAB_103d202a4:
    lVar3 = 1;
    lVar4 = lStack_68;
  }
  _memcpy(lVar3,uStack_70,lVar4);
  *param_1 = lVar4;
  param_1[1] = lVar3;
  param_1[2] = lVar4;
SUB_103db23f4:
  do {
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    bVar1 = *param_2;
    uVar7 = (uint)bVar1;
    unaff_x20 = param_2;
    if (bVar1 < 0xd) {
      if (bVar1 < 0xc) {
        return;
      }
      if (uVar7 == 0xc) {
LAB_103db2448:
        if (*(long *)(param_2 + 8) == 0) {
          return;
        }
        unaff_x19 = *(byte **)(param_2 + 0x10);
        goto LAB_103db2500;
      }
LAB_103db24c8:
      unaff_x19 = *(byte **)(param_2 + 0x10);
      unaff_x21 = *(long *)(param_2 + 0x18);
      if (unaff_x21 != 0) {
        unaff_x30 = 0x103db24e4;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        param_2 = unaff_x19;
        unaff_x22 = unaff_x19;
        unaff_x23 = unaff_x21;
        unaff_x24 = unaff_x19;
        goto SUB_103db23f4;
      }
      goto LAB_103db24f8;
    }
    if (bVar1 < 0x11) {
      if (uVar7 - 0xf < 2 || uVar7 == 0xd) {
        return;
      }
      if (uVar7 == 0xe) goto LAB_103db2448;
      goto LAB_103db24c8;
    }
    if (0x12 < uVar7) {
      if (uVar7 == 0x13) {
        unaff_x19 = *(byte **)(param_2 + 8);
        unaff_x30 = 0x103db24c4;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        param_2 = unaff_x19;
        goto SUB_103db23f4;
      }
      if (uVar7 != 0x14) goto LAB_103db24c8;
      unaff_x19 = *(byte **)(param_2 + 0x10);
      lVar4 = *(long *)(param_2 + 0x18) + 1;
      pbVar6 = unaff_x19;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        func_0x000103db23f4(pbVar6);
        pbVar6 = pbVar6 + 0x20;
      }
LAB_103db24f8:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
LAB_103db2500:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(unaff_x19);
      return;
    }
    if (uVar7 != 0x11) {
      if (uVar7 == 0x12) {
        return;
      }
      goto LAB_103db24c8;
    }
    unaff_x19 = *(byte **)(param_2 + 8);
    unaff_x30 = 0x103db24b4;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_2 = unaff_x19;
  } while( true );
}

