
undefined8 FUN_1002f215c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 *puStack0000000000000038;
  undefined *puStack0000000000000040;
  char *pcStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined8 uStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined *puStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 *puStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 *puStack00000000000000c0;
  undefined *puStack00000000000000c8;
  
  puStack0000000000000050 = &stack0x00000058;
  pcStack0000000000000048 = s_token_bucket_for_added_to_config_108abab76;
  puStack0000000000000038 = (undefined1 *)&stack0x00000048;
  puStack0000000000000040 = &UNK_10b1f8a98;
  puStack0000000000000070 = (undefined1 *)&stack0x00000038;
  uStack0000000000000068 = 1;
  uStack0000000000000078 = 1;
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = 1;
  if (lVar6 == 0) {
    uVar1 = 2;
  }
  uVar3 = *(undefined4 *)(unaff_x22 + 8);
  uVar4 = *(undefined4 *)(unaff_x22 + 0xc);
  puStack00000000000000a0 = (undefined1 *)&stack0x00000068;
  in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,1);
  puStack00000000000000c0 = (undefined1 *)&stack0x000000a0;
  puStack00000000000000c8 = &DAT_1061c2098;
  uVar2 = 1;
  if (lVar5 == 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000028;
  *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000020;
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000030;
  *(char **)(unaff_x29 + -0x40) = s__108b39f4f;
  *(undefined1 ***)(unaff_x29 + -0x38) = &stack0x000000c0;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar1;
  *(long *)(unaff_x29 + -0x88) = lVar6;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar2;
  *(long *)(unaff_x29 + -0x70) = lVar5;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar7;
  *(undefined4 *)(unaff_x29 + -0x48) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x44) = uVar4;
  puStack0000000000000080 = (undefined *)param_1;
  (**(code **)(unaff_x21 + 0x20))();
  in_stack_00000088 = 0;
  puStack0000000000000080 = &UNK_108c56c70;
  uStack0000000000000068 = 0x8000000000000000;
  puStack0000000000000070 = &UNK_108c7a42a;
  uStack0000000000000078 = 0x16;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = in_stack_00000010;
  puStack00000000000000a0 = (undefined1 *)in_stack_00000008;
  in_stack_000000b0 = in_stack_00000018;
  puVar10 = (undefined8 *)_malloc(0x18);
  if (puVar10 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    puVar10[1] = in_stack_00000010;
    *puVar10 = in_stack_00000008;
    puVar10[2] = in_stack_00000018;
    puVar11 = (undefined8 *)_malloc(0x10);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[1] = 1;
      *puVar11 = 1;
      *(undefined8 **)(unaff_x29 + -0x90) = puVar10;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_10b1f9ce8;
      *(undefined8 **)(unaff_x29 + -0x80) = puVar11;
      *(undefined **)(unaff_x29 + -0x78) = &UNK_10b1f9d08;
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
      FUN_1003270fc(&stack0x000000c0,&stack0x00000080,&UNK_108c79030,unaff_x29 + -0x90);
      if (puStack00000000000000c0 != (undefined1 *)0x0) {
        FUN_10031a418(&stack0x000000c0);
      }
      *(undefined1 **)(unaff_x29 + -0x88) = puStack0000000000000070;
      *(undefined8 *)(unaff_x29 + -0x90) = uStack0000000000000068;
      *(undefined **)(unaff_x29 + -0x78) = puStack0000000000000080;
      *(undefined8 *)(unaff_x29 + -0x80) = uStack0000000000000078;
      *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000090;
      *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000088;
      *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000098;
      __ZN16aws_smithy_types10config_bag9ConfigBag10push_layer17hff2b09a13f9a25e4E();
      return 0;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1002f2328);
  (*pcVar9)();
}

