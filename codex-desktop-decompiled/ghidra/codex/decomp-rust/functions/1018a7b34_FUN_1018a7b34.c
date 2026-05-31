
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a7b34(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  *(char **)(unaff_x29 + -0xb0) = s_request_failed__108ac9ce2;
  *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00000180;
  *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xb0;
  *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b25d1e8;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000001f0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar4 = *(long *)(unaff_x21 + 0x430);
    in_stack_000000b8 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_000000c0 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_000000b0 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000000b0);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x000000b0,&stack0x000001f0);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x12) = 1;
  *unaff_x20 = unaff_x25 + -1;
  unaff_x20[9] = unaff_x25 + -1;
  return;
}

