
void FUN_10161865c(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  code *pcVar2;
  long lVar3;
  undefined1 uVar4;
  short *psStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  short **ppsStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *param_2;
  psVar1 = (short *)param_2[1];
  lStack_80 = param_2[2];
  if (lVar3 == -0x8000000000000000) {
    if (lStack_80 == 2) {
      if (*psVar1 == 0x3176) {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        if (*psVar1 != 0x3276) goto code_r0x0001087e44e4;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      *param_1 = 2;
      return;
    }
code_r0x0001087e44e4:
    puStack_78 = &UNK_10b2228b8;
    uStack_70 = 2;
    ppsStack_68 = &psStack_88;
    puStack_60 = &DAT_100c7b3a0;
    ppuStack_58 = &puStack_78;
    puStack_50 = &
                 __ZN60__LT_serde_core__de__OneOf_u20_as_u20_core__fmt__Display_GT_3fmt17hd5744e9bc51436a2E
    ;
    psStack_88 = psVar1;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_48,s_unknown_variant______expected_108ac2989,&ppsStack_68);
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
  if (lStack_80 == 2) {
    if (*psVar1 == 0x3176) {
      uVar4 = 0;
    }
    else {
      if (*psVar1 != 0x3276) goto LAB_1016186fc;
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 1) = uVar4;
    *param_1 = 2;
  }
  else {
LAB_1016186fc:
    FUN_1087e44e4(param_1,psVar1,lStack_80,&UNK_10b2228b8,2);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(psVar1);
  return;
}

