
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a463c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long lVar4;
  undefined *puStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined1 *puStack0000000000000028;
  undefined *puStack0000000000000030;
  char *pcStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  puStack0000000000000040 = &stack0x00000050;
  pcStack0000000000000038 = s__locally_reset_streams_reached_l_108ac84be;
  puStack0000000000000028 = (undefined1 *)&stack0x00000038;
  puStack0000000000000030 = &UNK_10b1f3630;
  puStack0000000000000008 = (undefined1 *)&stack0x00000028;
  puStack0000000000000000 = (undefined *)0x1;
  uStack0000000000000010 = 1;
  uStack0000000000000018 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE();
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *unaff_x22;
    in_stack_00000068 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000070 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000060 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000060);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000060);
    }
  }
  puStack0000000000000000 = &UNK_10b1f34d8;
  puStack0000000000000008 = &UNK_108c75460;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0x18;
  in_stack_00000068 = unaff_x21[1];
  in_stack_00000060 = *unaff_x21;
  __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E();
  unaff_x19[1] = puStack0000000000000008;
  *unaff_x19 = puStack0000000000000000;
  unaff_x19[3] = uStack0000000000000018;
  unaff_x19[2] = uStack0000000000000010;
  unaff_x19[4] = CONCAT44(in_stack_00000020._4_4_,0xb);
  return;
}

