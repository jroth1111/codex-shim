
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fc280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000050;
  undefined *puStack0000000000000058;
  undefined8 uStack0000000000000078;
  undefined1 *puStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  
  *(char **)(unaff_x29 + -0x88) = s_current_throughput__is_below_min_108abac76;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x78;
  lStack0000000000000050 = unaff_x29 + -0x88;
  puStack0000000000000058 = &UNK_10b1f8a98;
  puStack0000000000000080 = (undefined1 *)&stack0x00000050;
  uStack0000000000000078 = 1;
  uStack0000000000000088 = 1;
  uStack0000000000000090 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000078);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *(long *)(unaff_x20 + 0xae0);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x58) = 4;
    *(undefined8 *)(unaff_x29 + -0x50) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x48) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x58);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x58,&stack0x00000078);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *unaff_x19 = 1;
  return;
}

