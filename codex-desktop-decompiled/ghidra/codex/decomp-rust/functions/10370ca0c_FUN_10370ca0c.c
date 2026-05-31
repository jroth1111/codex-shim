
/* WARNING: Possible PIC construction at 0x000103382c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370cadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103382c04) */
/* WARNING: Removing unreachable block (ram,0x00010370cae0) */

void FUN_10370ca0c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar5;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_50 [8];
  ulong uStack_48;
  undefined1 uStack_31;
  
  puVar2 = auStack_50;
  puVar6 = &stack0xfffffffffffffff0;
  puVar1 = param_2;
  if (*param_2 == 0x8000000000000000) {
    *param_1 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    puVar6 = unaff_x29;
SUB_103382b94:
    while( true ) {
      puVar3 = puVar1;
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(ulong *)(puVar2 + -0x38) = unaff_x23;
      *(ulong **)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
      *(ulong **)(puVar2 + -0x20) = param_2;
      *(ulong **)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = puVar6;
      *(undefined8 *)(puVar2 + -8) = unaff_x30;
      puVar6 = puVar2 + -0x10;
      uVar5 = *puVar3;
      uVar4 = uVar5 ^ 0x8000000000000000;
      if (-1 < (long)uVar5) {
        uVar4 = 5;
      }
      if (uVar4 < 3) {
        return;
      }
      if (uVar4 == 3) {
        if (puVar3[1] == 0) {
          return;
        }
        param_2 = (ulong *)puVar3[2];
        goto LAB_103382c60;
      }
      if (uVar4 != 4) break;
      param_2 = (ulong *)puVar3[2];
      unaff_x23 = puVar3[3];
      if (unaff_x23 == 0) {
        uVar5 = puVar3[1];
joined_r0x000103382c50:
        if (uVar5 == 0) {
          return;
        }
LAB_103382c60:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(param_2);
        return;
      }
      unaff_x22 = param_2 + 9;
      unaff_x30 = 0x103382c04;
      puVar2 = puVar2 + -0x40;
      puVar1 = param_2;
      param_1 = puVar3;
    }
    uVar4 = puVar3[4];
    if ((uVar4 != 0) && (uVar4 * 9 != -0x11)) {
      _free(puVar3[3] + uVar4 * -8 + -8);
    }
    param_2 = (ulong *)puVar3[1];
    FUN_1032aa3b0(param_2,puVar3[2]);
    goto joined_r0x000103382c50;
  }
  if (*param_2 != 0x8000000000000002) {
    unaff_x21 = func_0x000108938b38(param_2,&uStack_31,&UNK_10b2b6260);
    unaff_x30 = 0x10370cae0;
    goto SUB_103382b94;
  }
  uStack_48 = param_2[2];
  if (param_2[1] == 0) {
LAB_10370ca74:
    *param_1 = 1;
    param_1[1] = uStack_48;
  }
  else {
    if (param_2[1] == 1) {
      if (-1 < (long)uStack_48) goto LAB_10370ca74;
      auStack_50[0] = 2;
      uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b2b6260);
    }
    else {
      auStack_50[0] = 3;
      uVar4 = func_0x000108a4a50c(auStack_50,&uStack_31,&UNK_10b2b6260);
    }
    *param_1 = 2;
    param_1[1] = uVar4;
  }
  return;
}

