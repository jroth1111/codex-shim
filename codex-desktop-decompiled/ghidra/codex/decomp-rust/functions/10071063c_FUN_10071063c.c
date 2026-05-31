
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071063c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined1 **ppuStack_28;
  
  puStack_60 = (undefined1 *)&uStack_80;
  puStack_58 = &uStack_78;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  plVar1 = (long *)(*
                   ___ZN8arc_swap4debt4list11THREAD_HEAD29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17hf43570a65d6d2082E
                   )();
  if (((char)plVar1[3] == '\x01') ||
     (plVar1 = (long *)thunk_FUN_108853f90(plVar1), plVar1 != (long *)0x0)) {
    if (*plVar1 == 0) {
      lVar2 = __ZN8arc_swap4debt4list4Node3get17h72433f120e816358E();
      *plVar1 = lVar2;
    }
    puStack_38 = &uStack_70;
    puStack_30 = &uStack_68;
    ppuStack_28 = &puStack_60;
    func_0x000101496480(&puStack_38,plVar1);
  }
  else {
    uStack_50 = __ZN8arc_swap4debt4list4Node3get17h72433f120e816358E();
    uStack_48 = 0;
    uStack_40 = 0;
    puStack_38 = &uStack_70;
    puStack_30 = &uStack_68;
    ppuStack_28 = &puStack_60;
    func_0x000101496480(&puStack_38,&uStack_50);
    __ZN73__LT_arc_swap__debt__list__LocalNode_u20_as_u20_core__ops__drop__Drop_GT_4drop17hb17ba285778f8ac1E
              (&uStack_50);
  }
  return;
}

