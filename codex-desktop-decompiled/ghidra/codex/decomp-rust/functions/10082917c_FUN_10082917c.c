
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10082917c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  *(char **)(unaff_x29 + -0xe0) = s_flushed_____108ac8a8d;
  *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000068;
  *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
  *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -200) = 1;
  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x100;
  *(undefined8 *)(unaff_x29 + -0xb8) = 1;
  *(undefined8 *)(unaff_x29 + -0xb0) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -200);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar4 = *unaff_x20;
    in_stack_00000050 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000058 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000048 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000048);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar4,puVar2,puVar1,&stack0x00000048,unaff_x29 + -200);
    }
  }
  return ZEXT816(0);
}

