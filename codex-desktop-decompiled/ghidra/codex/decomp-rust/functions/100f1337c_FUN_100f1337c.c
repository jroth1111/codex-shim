
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1337c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar6;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined1 *puStack00000000000000e0;
  undefined *puStack00000000000000e8;
  char *pcStack0000000000000108;
  undefined1 *puStack0000000000000110;
  
  puStack0000000000000110 = &stack0x00000090;
  pcStack0000000000000108 = s_Failed_to_parse_message_____Erro_108ad3d3d;
  puStack00000000000000e0 = (undefined1 *)&stack0x00000108;
  puStack00000000000000e8 = &UNK_10b208fd0;
  puStack0000000000000050 = (undefined1 *)&stack0x000000e0;
  uStack0000000000000048 = 1;
  uStack0000000000000058 = 1;
  uStack0000000000000060 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000048);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x20;
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x48) = 4;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x38) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x48);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x48,&stack0x00000048);
    }
  }
  unaff_x19[2] = in_stack_00000040;
  unaff_x19[1] = 1;
  *unaff_x19 = 0x16;
  return;
}

