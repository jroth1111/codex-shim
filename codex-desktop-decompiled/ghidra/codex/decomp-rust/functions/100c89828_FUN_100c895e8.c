
void FUN_100c895e8(long param_1,long *param_2,undefined *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long **pplVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined4 *puStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  long **pplStack_1a8;
  undefined *puStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined2 uStack_168;
  long *plStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long **pplStack_68;
  undefined *puStack_60;
  long *plStack_58;
  
  __ZN4axum7routing11path_router4Node2at17h00027362a015d4a9E
            (&puStack_448,*(long *)(param_1 + 0x30) + 0x10);
  if (puStack_448 != (undefined4 *)0x0) {
    uVar2 = *puStack_448;
    _memcpy(&pplStack_1a8,param_4,0x118);
    FUN_1016e6544(&lStack_2c0,param_1,uVar2,&pplStack_1a8);
    puVar4 = puStack_2b0;
    uVar6 = uStack_2b8;
    if (lStack_2c0 != 4) {
      if (lStack_2c0 == 3) {
        if ((code *)*puStack_2b0 != (code *)0x0) {
          (*(code *)*puStack_2b0)(uStack_2b8);
        }
        if (puVar4[1] != 0) {
          _free(uVar6);
        }
      }
      else {
        FUN_100d108c0(&lStack_2c0);
      }
    }
    if (lStack_440 != 0) {
      return;
    }
    goto joined_r0x000100c898b0;
  }
  _memcpy(&lStack_3d8,param_4,0x118);
  puVar7 = &UNK_108c855e2;
  plVar8 = (long *)0x1b;
  if (((char)*param_2 == '/') && (puVar7 = (undefined *)0x0, (*(byte *)(param_1 + 0x3c) & 1) != 0))
  {
    pplStack_1a8 = (long **)0x0;
    uStack_188 = 0;
    uStack_178 = 0x2f0000002f;
    uStack_170 = 1;
    uStack_168 = 1;
    puStack_1a0 = param_3;
    plStack_198 = param_2;
    puStack_190 = param_3;
    puStack_180 = param_3;
    auVar9 = FUN_10036272c(&pplStack_1a8);
    if (auVar9._0_8_ != 0) {
      puVar7 = &UNK_108c85601;
      plVar8 = (long *)0xbd;
      do {
        if (auVar9._8_8_ != 0) {
          if (*auVar9._0_8_ == '*') goto LAB_100c89768;
          if (*auVar9._0_8_ == ':') {
            puVar7 = &UNK_108c856be;
            goto LAB_100c89764;
          }
        }
        auVar9 = FUN_10036272c(&pplStack_1a8);
      } while (auVar9._0_8_ != 0);
    }
    puVar7 = (undefined *)0x0;
LAB_100c89764:
    plVar8 = (long *)0xb5;
  }
LAB_100c89768:
  if (puVar7 == (undefined *)0x0) {
    if (*(int *)(param_1 + 0x38) == -1) {
      func_0x000108a079f0(&UNK_108cc3ee4,0x47,&UNK_10b234a30);
      goto LAB_100c89950;
    }
    iVar1 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar1;
    plStack_90 = param_2;
    puStack_88 = param_3;
    uVar6 = FUN_100f4099c((long *)(param_1 + 0x30));
    FUN_100c89a08(&lStack_80,uVar6,param_2,param_3,iVar1);
    if (lStack_80 != -0x7ffffffffffffffd) {
      uStack_2b8 = uStack_78;
      lStack_2c0 = lStack_80;
      puStack_2b0 = puStack_70;
      pplStack_1a8 = &plStack_90;
      puStack_1a0 = &DAT_100c5cd90;
      plStack_198 = &lStack_2c0;
      puStack_190 = &
                    __ZN66__LT_matchit__error__InsertError_u20_as_u20_core__fmt__Display_GT_3fmt17hab430a9fd28b25abE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pplStack_68,s_Invalid_route___108ad34e4,&pplStack_1a8);
      if (0 < lStack_2c0) {
        _free(uStack_2b8);
      }
      pplVar3 = pplStack_68;
      puVar7 = puStack_60;
      plVar8 = plStack_58;
      uVar6 = uStack_3d0;
      puVar4 = puStack_3c8;
      if (pplStack_68 != (long **)0x8000000000000000) goto joined_r0x000100c89778;
    }
    _memcpy(&pplStack_1a8,&lStack_3d8,0x118);
    FUN_1016e6544(&lStack_2c0,param_1,iVar1,&pplStack_1a8);
    puVar4 = puStack_2b0;
    uVar6 = uStack_2b8;
    if (lStack_2c0 == 4) {
      return;
    }
    if (lStack_2c0 != 3) {
      FUN_100d108c0(&lStack_2c0);
      return;
    }
    if ((code *)*puStack_2b0 != (code *)0x0) {
      (*(code *)*puStack_2b0)(uStack_2b8);
    }
    lStack_438 = puVar4[1];
    uStack_430 = uVar6;
joined_r0x000100c898b0:
    if (lStack_438 != 0) {
      _free(uStack_430);
    }
    return;
  }
  pplVar3 = (long **)0x8000000000000000;
  uVar6 = uStack_3d0;
  puVar4 = puStack_3c8;
joined_r0x000100c89778:
  if (lStack_3d8 == 3) {
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar6);
    }
    if (puVar4[1] != 0) {
      _free(uVar6);
    }
  }
  else {
    FUN_100d108c0(&lStack_3d8);
  }
  if (pplVar3 == (long **)0x8000000000000001) {
    return;
  }
  pplStack_1a8 = pplVar3;
  puStack_1a0 = puVar7;
  plStack_198 = plVar8;
  func_0x000108a07a3c(&UNK_108cc3f67,0x2f,&pplStack_1a8,&UNK_10b235040,&UNK_10b234a60);
LAB_100c89950:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100c89954);
  (*pcVar5)();
}

