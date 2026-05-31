
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002f1fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  undefined8 in_stack_00000068;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char *pcStack00000000000000a0;
  undefined8 *puStack00000000000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000c0;
  
  puStack00000000000000a8 = &stack0x000000c0;
  pcStack00000000000000a0 = s_token_bucket_for_added_to_config_108abab76;
  puStack0000000000000058 = (undefined1 *)&stack0x000000a0;
  puStack0000000000000060 = &UNK_10b1f8a98;
  *(undefined8 *)(unaff_x29 + -0x90) = 1;
  *(undefined1 ***)(unaff_x29 + -0x88) = &stack0x00000058;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0x90);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar7 = *(long *)(unaff_x20 + 0xd18);
    in_stack_00000070 = *(undefined **)(lVar7 + 0x20);
    in_stack_00000078 = *(undefined8 *)(lVar7 + 0x28);
    in_stack_00000068 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000068);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar7,puVar2,puVar1,&stack0x00000068,unaff_x29 + -0x90);
    }
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = &UNK_108c56c70;
  in_stack_00000068 = 0x8000000000000000;
  in_stack_00000070 = &UNK_108c7a42a;
  in_stack_00000078 = 0x16;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  puStack00000000000000a8 = (undefined8 *)in_stack_00000010;
  pcStack00000000000000a0 = (char *)in_stack_00000008;
  in_stack_000000b0 = in_stack_00000018;
  puVar5 = (undefined8 *)_malloc(0x18);
  if (puVar5 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    puVar5[1] = in_stack_00000010;
    *puVar5 = in_stack_00000008;
    puVar5[2] = in_stack_00000018;
    puVar6 = (undefined8 *)_malloc(0x10);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 1;
      *puVar6 = 1;
      *(undefined8 **)(unaff_x29 + -0x90) = puVar5;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_10b1f9ce8;
      *(undefined8 **)(unaff_x29 + -0x80) = puVar6;
      *(undefined **)(unaff_x29 + -0x78) = &UNK_10b1f9d08;
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
      FUN_1003270fc(&stack0x000000c0,&stack0x00000080,&UNK_108c79030,unaff_x29 + -0x90);
      if (in_stack_000000c0 != 0) {
        FUN_10031a418(&stack0x000000c0);
      }
      *(undefined **)(unaff_x29 + -0x88) = in_stack_00000070;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000068;
      *(undefined **)(unaff_x29 + -0x78) = in_stack_00000080;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000078;
      *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000090;
      *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000088;
      *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000098;
      __ZN16aws_smithy_types10config_bag9ConfigBag10push_layer17hff2b09a13f9a25e4E();
      return 0;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f2328);
  (*pcVar3)();
}

