
void FUN_100a0d12c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined1 *puStack_48;
  ulong *puStack_40;
  undefined1 *puStack_38;
  
  plVar4 = (long *)param_1[1];
  if ((*plVar4 != 2) && (uVar3 = plVar4[0x1b], 1 < uVar3)) {
    lVar1 = 0;
    if (uVar3 != 0) {
      lVar1 = (plVar4[0x25] + param_2) / (long)uVar3;
    }
    lVar1 = ((plVar4[0x25] + param_2) - lVar1 * uVar3) + uVar3;
    lVar2 = 0;
    if (uVar3 != 0) {
      lVar2 = lVar1 / (long)uVar3;
    }
    plVar4[0x25] = lVar1 - lVar2 * uVar3;
    __ZN17codex_cloud_tasks3app11DiffOverlay25apply_selection_to_fields17hdb7e3313749530f7E(plVar4);
    uVar3 = plVar4[0x1b];
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    uStack_78 = plVar4[1];
    if ((int)*plVar4 == 0) {
      uStack_78 = uVar3;
    }
    lStack_70 = plVar4[0x25] + 1;
    plStack_50 = &lStack_70;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_40 = &uStack_78;
    puStack_38 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_68,s_Viewing_attempt_of_108acdcff,&plStack_50);
    plVar5 = (long *)*param_1;
    if (*plVar5 != 0) {
      _free(plVar5[1]);
    }
    plVar5[1] = lStack_60;
    *plVar5 = lStack_68;
    plVar5[2] = lStack_58;
    *(undefined2 *)((long)plVar4 + 0x8c) = 0;
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

