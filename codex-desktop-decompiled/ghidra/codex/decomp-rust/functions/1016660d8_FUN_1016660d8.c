
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016660d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000060;
  undefined *puStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x60) = s_panic__108ada489;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x50;
  lStack0000000000000060 = unaff_x29 + -0x60;
  puStack0000000000000068 = &UNK_10b208fd0;
  puStack0000000000000078 = (undefined1 *)&stack0x00000060;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000070);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar4 = *unaff_x20;
    in_stack_00000028 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000020 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000020);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000020,&stack0x00000070);
    }
  }
  (**(code **)(unaff_x19[1] + 0x28))(*unaff_x19,in_stack_00000000);
  return;
}

