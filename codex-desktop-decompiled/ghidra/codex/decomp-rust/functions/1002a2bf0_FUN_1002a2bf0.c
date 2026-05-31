
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a2bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *unaff_x25;
  long lVar4;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack0000000000000068;
  undefined *puStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined1 *puStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x26 + 0x60) = s__recv_stream_window_update_____e_108ac8030;
  *(long *)(unaff_x26 + 0x68) = unaff_x29 + -0x68;
  lStack0000000000000068 = unaff_x29 + -0x78;
  puStack0000000000000070 = &UNK_10b1f3630;
  puStack0000000000000080 = (undefined1 *)&stack0x00000068;
  uStack0000000000000078 = 1;
  uStack0000000000000088 = 1;
  *(undefined8 *)(unaff_x26 + 0x18) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000078);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *unaff_x25;
    in_stack_00000030 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000028 = 4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000028);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000028,&stack0x00000078);
    }
  }
  FUN_1002a19f0();
  return;
}

