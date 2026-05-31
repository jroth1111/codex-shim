
/* WARNING: Removing unreachable block (ram,0x000100b94628) */
/* WARNING: Removing unreachable block (ram,0x000100b9462c) */
/* WARNING: Removing unreachable block (ram,0x000100b94638) */
/* WARNING: Removing unreachable block (ram,0x000100b94648) */
/* WARNING: Removing unreachable block (ram,0x000100b94658) */
/* WARNING: Removing unreachable block (ram,0x000100b9465c) */
/* WARNING: Removing unreachable block (ram,0x000100b9477c) */
/* WARNING: Removing unreachable block (ram,0x000100b94660) */
/* WARNING: Removing unreachable block (ram,0x000100b94670) */
/* WARNING: Removing unreachable block (ram,0x000100b9467c) */
/* WARNING: Removing unreachable block (ram,0x000100b94684) */

void FUN_100b947ec(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined1 unaff_w20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
  in_stack_00000058 = in_stack_00000058 + '\x01';
  plVar1 = (long *)FUN_100654604(&stack0x00000010);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 1) {
      FUN_100de21d4(plVar1 + 1);
    }
    else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
      _free(plVar1[1]);
    }
    _free(plVar1);
  }
  uVar2 = FUN_108832da4(uVar2,&stack0x00000010);
  if (in_stack_00000010 != (undefined8 *)0x0) {
    _free(in_stack_00000018);
  }
  in_stack_00000090 = *(undefined8 **)(unaff_x19 + 0x18);
  in_stack_00000098 = *(undefined **)(unaff_x19 + 0x20);
  in_stack_00000010 = &stack0x00000090;
  in_stack_00000018 =
       &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
  in_stack_00000070 = uVar2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000078,s_failed_to_parse_daemon_settings_108ad1b72,&stack0x00000010);
  in_stack_00000060 = uVar2;
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000010);
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  in_stack_000000a8 = in_stack_00000028;
  in_stack_000000a0 = in_stack_00000020;
  in_stack_000000b8 = in_stack_00000038;
  in_stack_000000b0 = in_stack_00000030;
  in_stack_00000018 = (undefined *)in_stack_00000080;
  in_stack_00000010 = (undefined8 *)in_stack_00000078;
  in_stack_00000020 = in_stack_00000088;
  in_stack_00000028 = uVar2;
  uVar2 = FUN_108857ac8(&stack0x00000010,&stack0x00000090);
  if (unaff_x26 != 0) {
    _free();
  }
  *unaff_x21 = 1;
  unaff_x21[1] = unaff_w20;
  *(undefined8 *)(unaff_x21 + 8) = uVar2;
  *unaff_x25 = 1;
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  return;
}

