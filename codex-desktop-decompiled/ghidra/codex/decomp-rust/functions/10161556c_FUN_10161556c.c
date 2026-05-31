
/* WARNING: Type propagation algorithm not settling */

void FUN_10161556c(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  int *piStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  int **ppiStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*param_2 == -0x8000000000000000) {
    piStack_88 = (int *)param_2[1];
    lStack_80 = param_2[2];
    if (lStack_80 == 3) {
      if ((short)*piStack_88 == 0x6c61 && *(char *)((long)piStack_88 + 2) == 'l') {
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return;
      }
    }
    else if (lStack_80 == 4) {
      if (*piStack_88 == 0x65726f63) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return;
      }
      if (*piStack_88 == 0x656e6f6e) {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 2;
        return;
      }
    }
    puStack_78 = &UNK_10b2223b8;
    uStack_70 = 3;
    ppiStack_68 = &piStack_88;
    puStack_60 = &DAT_100c7b3a0;
    ppuStack_58 = &puStack_78;
    puStack_50 = &
                 __ZN60__LT_serde_core__de__OneOf_u20_as_u20_core__fmt__Display_GT_3fmt17hd5744e9bc51436a2E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_48,s_unknown_variant______expected_108ac2989,&ppiStack_68);
    if (lStack_38 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(lStack_38);
      if (lVar3 == 0) {
        func_0x0001087c9084(1,lStack_38);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e4560);
        (*pcVar2)();
      }
    }
    _memcpy(lVar3,uStack_40,lStack_38);
    param_1[3] = lStack_38;
    param_1[4] = lVar3;
    param_1[5] = lStack_38;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    *param_1 = 0;
    if (lStack_48 != 0) {
      _free(uStack_40);
    }
    return;
  }
  piVar1 = (int *)param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 3) {
    if ((short)*piVar1 == 0x6c61 && *(char *)((long)piVar1 + 2) == 'l') {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      lVar3 = *param_2;
      goto joined_r0x00010061e90c;
    }
  }
  else if (lVar3 == 4) {
    if (*piVar1 == 0x65726f63) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      lVar3 = *param_2;
      goto joined_r0x00010061e90c;
    }
    if (*piVar1 == 0x656e6f6e) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      lVar3 = *param_2;
      goto joined_r0x00010061e90c;
    }
  }
  thunk_FUN_1087e44e4(param_1,piVar1,lVar3,&UNK_10b2223b8,3);
  lVar3 = *param_2;
joined_r0x00010061e90c:
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(piVar1);
  return;
}

