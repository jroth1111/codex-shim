
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10054ec78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x24;
  long unaff_x29;
  undefined1 *puStack0000000000000090;
  undefined *puStack0000000000000098;
  char *pcStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined8 uStack00000000000000d8;
  undefined1 *puStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  
  puStack00000000000000a8 = &stack0x000000b0;
  pcStack00000000000000a0 = s_5failed_to_send_response_process_108ac0de0;
  puStack0000000000000090 = (undefined1 *)&stack0x000000a0;
  puStack0000000000000098 = &UNK_10b208fd0;
  puStack00000000000000e0 = (undefined1 *)&stack0x00000090;
  uStack00000000000000d8 = 1;
  uStack00000000000000e8 = 1;
  uStack00000000000000f0 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000d8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000f40);
    if (iVar3 != 0) {
      *(undefined8 **)(unaff_x29 + -0x80) = &stack0x000000d8;
      *(undefined1 *)(unaff_x24 + 0x578) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000588);
    }
  }
  FUN_100de91d8(&stack0x00000a60);
  *(undefined1 *)(unaff_x19 + 0x540) = 1;
  return 0;
}

