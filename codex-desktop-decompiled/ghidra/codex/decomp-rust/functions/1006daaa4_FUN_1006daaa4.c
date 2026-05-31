
undefined8 FUN_1006daaa4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b0;
  char *pcStack0000000000000110;
  undefined8 *puStack0000000000000118;
  long in_stack_00000158;
  
  puStack0000000000000118 = &stack0x00000158;
  pcStack0000000000000110 = s_Reloading_auth_for_account_108ac3667;
  *(char ***)(unaff_x29 + -0x98) = &stack0x00000110;
  *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
            (&stack0x00000158,*(undefined8 *)(unaff_x19 + 0x18));
  puVar1 = (undefined8 *)0x0;
  if (in_stack_00000158 != -0x7ffffffffffffffd) {
    puVar1 = &stack0x00000158;
  }
  puVar2 = (undefined8 *)0x0;
  if (in_stack_00000020 != -0x7ffffffffffffffd) {
    puVar2 = &stack0x00000020;
  }
  uVar3 = __ZN11codex_login4auth7manager11AuthManager23auths_equal_for_refresh17h862ec9e6fadcc0d3E
                    (puVar1,puVar2);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x24 + 0x238) = in_stack_00000088;
  *(undefined8 *)(unaff_x24 + 0x230) = in_stack_00000080;
  *(undefined8 *)(unaff_x24 + 0x248) = *(undefined8 *)(unaff_x24 + 0x78);
  *(undefined8 *)(unaff_x24 + 0x240) = *(undefined8 *)(unaff_x24 + 0x70);
  *(undefined8 *)(unaff_x24 + 600) = *(undefined8 *)(unaff_x24 + 0x88);
  *(undefined8 *)(unaff_x24 + 0x250) = *(undefined8 *)(unaff_x24 + 0x80);
  *(undefined8 *)(unaff_x24 + 0x1f8) = in_stack_00000048;
  *(undefined8 *)(unaff_x24 + 0x1f0) = in_stack_00000040;
  *(undefined8 *)(unaff_x24 + 0x208) = in_stack_00000058;
  *(undefined8 *)(unaff_x24 + 0x200) = in_stack_00000050;
  *(undefined8 *)(unaff_x24 + 0x218) = in_stack_00000068;
  *(undefined8 *)(unaff_x24 + 0x210) = in_stack_00000060;
  *(undefined8 *)(unaff_x24 + 0x228) = in_stack_00000078;
  *(undefined8 *)(unaff_x24 + 0x220) = in_stack_00000070;
  *(undefined8 *)(unaff_x24 + 0x1d8) = in_stack_00000028;
  *(long *)(unaff_x24 + 0x1d0) = in_stack_00000020;
  *(undefined8 *)(unaff_x24 + 0x1e8) = in_stack_00000038;
  *(undefined8 *)(unaff_x24 + 0x1e0) = in_stack_00000030;
  __ZN11codex_login4auth7manager11AuthManager15set_cached_auth17hc05d8eeaf2b9240eE
            (uVar4,&stack0x000001f0);
  if (in_stack_00000158 != -0x7ffffffffffffffd) {
    FUN_100e0609c(&stack0x00000158);
  }
  if (unaff_x25 != 0) {
    _free();
  }
  *(undefined1 *)(unaff_x19 + 0xb40) = 1;
  return uVar3;
}

