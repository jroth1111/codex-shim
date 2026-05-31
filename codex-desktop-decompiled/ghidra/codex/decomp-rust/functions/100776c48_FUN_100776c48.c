
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100776c48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x19;
  ulong *unaff_x24;
  undefined1 *unaff_x27;
  long unaff_x29;
  undefined1 *in_stack_00000108;
  
  FUN_100779be8(&stack0x00000d98);
  if ((*unaff_x24 < 4) &&
     (((bRam000000010b62fe38 - 1 < 2 ||
       ((bRam000000010b62fe38 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN13codex_rollout8state_db19apply_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e48a948a2dec313E
                           ), unaff_x27 = in_stack_00000108, cVar4 != '\0')))) &&
      (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN13codex_rollout8state_db19apply_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e48a948a2dec313E
                         ), (uVar6 & 1) != 0)))) {
    *(char **)(unaff_x29 + -0x70) = s_1state_db_discrepancy_during_app_108ac721c;
    *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000d98;
    FUN_100779aac(&stack0x00000570);
  }
  else {
    uVar3 = 
    ___ZN13codex_rollout8state_db19apply_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e48a948a2dec313E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000558);
      if (iVar5 != 0) {
        *(char **)(unaff_x29 + -0x70) = s_1state_db_discrepancy_during_app_108ac721c;
        *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000d98;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar3,puVar2,puVar1,&stack0x00000558,&stack0x00000570);
      }
    }
  }
  *unaff_x27 = 1;
  *(undefined1 *)(unaff_x19 + 0x633) = 1;
  return 0;
}

