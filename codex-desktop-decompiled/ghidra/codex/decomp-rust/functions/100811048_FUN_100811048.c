
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 *unaff_x19;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000060;
  long lStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  *(char **)(unaff_x22 + 0x70) = s_failed_to_create_stream_for_id_i_108ac8261;
  *(long *)(unaff_x22 + 0x78) = unaff_x22;
  *(long *)(unaff_x22 + 0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_10b208fd0;
  lStack0000000000000068 = unaff_x29 + -0x60;
  uStack0000000000000060 = 1;
  uStack0000000000000070 = 1;
  uStack0000000000000078 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000060);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *unaff_x21;
    in_stack_00000028 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000020 = 2;
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
                (lVar4,puVar2,puVar1,&stack0x00000020,&stack0x00000060);
    }
  }
  *(undefined **)(unaff_x19 + 4) = &UNK_10b209220;
  *(undefined8 *)(unaff_x19 + 8) = 1;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined4 *)(unaff_x19 + 2) = in_stack_00000000._4_4_;
  *unaff_x19 = 0x101;
  return;
}

