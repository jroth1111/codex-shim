
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a7df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x20;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack00000000000000b0;
  undefined1 *puStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  long in_stack_000001f0;
  undefined8 in_stack_000001f8;
  long in_stack_00000208;
  
  *(char **)(unaff_x29 + -0x100) = s__request_failed_with_client_erro_108ac9cbd;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xb0;
  puStack00000000000000b8 = &stack0x000002d0;
  uStack00000000000000b0 = 1;
  uStack00000000000000c0 = 1;
  uStack00000000000000c8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000b0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar4 = *(long *)(unaff_x19 + 0x448);
    in_stack_00000188 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000190 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000180 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000180);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000180,&stack0x000000b0);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x12) = 1;
  lVar4 = unaff_x25 + -1;
  *unaff_x20 = lVar4;
  unaff_x20[9] = lVar4;
  if (in_stack_00000208 != lVar4) {
    func_0x00010194dc28(&stack0x00000208);
  }
  if (in_stack_000001f0 != 0) {
    _free(in_stack_000001f8);
  }
  return;
}

