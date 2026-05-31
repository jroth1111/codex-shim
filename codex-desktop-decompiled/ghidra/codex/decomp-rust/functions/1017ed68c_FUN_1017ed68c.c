
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017ed68c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x29;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000050;
  undefined *puStack0000000000000058;
  
  *(char **)(unaff_x29 + -0x88) = s__received_unsupported_realtime_v_108adce74;
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000000c0;
  lStack0000000000000050 = unaff_x29 + -0x88;
  puStack0000000000000058 = &UNK_10b25b0a0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long **)(unaff_x29 + -200) = &stack0x00000050;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xd0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *(long *)(unaff_x20 + 0x128);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x78) = 4;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x78);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x78,unaff_x29 + -0xd0);
    }
  }
  *unaff_x19 = 0x800000000000000f;
  if (in_stack_00000028 != 0) {
    _free(in_stack_00000030);
  }
  FUN_1017a4698(&stack0x00000060);
  return;
}

