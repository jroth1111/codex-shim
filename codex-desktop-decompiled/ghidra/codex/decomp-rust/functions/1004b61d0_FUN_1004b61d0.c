
void FUN_1004b61d0(long *param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd0;
  long in_stack_ffffffffffffffd8;
  
  bVar1 = *param_2;
  if (bVar1 != 0x10) {
    if (bVar1 == 0x11) {
      plVar4 = *(long **)(param_2 + 8);
      lStack_58 = plVar4[1];
      lStack_60 = *plVar4;
      lStack_48 = plVar4[3];
      lStack_50 = plVar4[2];
      FUN_1004b64d4(&stack0xffffffffffffffc8,&lStack_60);
      if (in_stack_ffffffffffffffc8 == -0x8000000000000000) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = in_stack_ffffffffffffffd0;
      }
      else {
        param_1[1] = in_stack_ffffffffffffffd0;
        *param_1 = in_stack_ffffffffffffffc8;
        param_1[2] = in_stack_ffffffffffffffd8;
      }
      goto _free;
    }
    if (bVar1 != 0x12) {
      FUN_1004b64d4(&lStack_60);
      if (lStack_60 == -0x8000000000000000) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lStack_58;
      }
      else {
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        param_1[2] = lStack_50;
      }
      return;
    }
  }
  *param_1 = -0x8000000000000000;
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar3 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      plVar4 = *(long **)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    plVar4 = *(long **)(param_2 + 0x10);
    plVar2 = plVar4;
    for (lVar5 = *(long *)(param_2 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
      FUN_100e077ec(plVar2);
      FUN_100e077ec(plVar2 + 4);
      plVar2 = plVar2 + 8;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2 || uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar3 < 0x13) {
      if (uVar3 == 0x11) {
        plVar4 = *(long **)(param_2 + 8);
        FUN_100e077ec(plVar4);
        goto _free;
      }
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar3 == 0x13) {
      plVar4 = *(long **)(param_2 + 8);
      FUN_100e077ec(plVar4);
      goto _free;
    }
    if (uVar3 != 0x14) goto LAB_100e078c0;
    plVar4 = *(long **)(param_2 + 0x10);
    lVar5 = *(long *)(param_2 + 0x18) + 1;
    plVar2 = plVar4;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
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
  (*(code *)PTR__free_10b61b0a8)(plVar4);
  return;
}

