
void FUN_1038e33f8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uStack_48;
  ulong *puStack_40;
  code *pcStack_38;
  
  puStack_40 = &uStack_48;
  pcStack_38 = 
  __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
  uStack_48 = param_2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (param_1,s_3failed_to_resolve_materialized_p_108afa178,&puStack_40);
  if ((uStack_48 & 3) == 1) {
    puVar2 = (undefined8 *)(uStack_48 - 1);
    uVar4 = *puVar2;
    puVar3 = *(undefined8 **)(uStack_48 + 7);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar4);
    }
    if (puVar3[1] != 0) {
      _free(uVar4);
    }
    _free(puVar2);
  }
  return;
}

