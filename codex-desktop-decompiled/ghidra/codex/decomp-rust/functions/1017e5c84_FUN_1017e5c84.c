
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017e5c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x29;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  *(char **)(unaff_x29 + -0x40) = s_failed_to_parse_event____data__108adced7;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0xb0;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x40;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b25b0a0;
  lStack0000000000000028 = unaff_x29 + -0x50;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  uStack0000000000000038 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000020);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *(long *)(unaff_x20 + 0x158);
    in_stack_000000f8 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000100 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_000000f0 = 4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000000f0);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar5,puVar2,puVar1,&stack0x000000f0,&stack0x00000020);
    }
  }
  uVar3 = in_stack_000000b8;
  *(undefined8 *)(unaff_x19 + 0x48) = 0x8000000000000000;
  FUN_1017a4f34(in_stack_000000b8);
  _free(uVar3);
  return;
}

