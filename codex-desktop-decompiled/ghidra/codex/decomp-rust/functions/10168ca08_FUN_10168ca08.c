
undefined8 FUN_10168ca08(void)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00001630;
  undefined8 in_stack_00001638;
  undefined8 in_stack_00001640;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001630,s_Removed_custom_shortcut_for_______108adacde,&stack0x00001680);
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00001638;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00001630;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00001640;
  __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE();
  *(undefined1 *)(unaff_x23 + 0x5ba) = 0;
  FUN_100df8020(unaff_x19 + 0xc90);
  if ((*(byte *)(unaff_x23 + 0x5b9) & 1) != 0) {
    FUN_100e0bbc0(unaff_x19 + 0x70);
    FUN_100e0ba70(unaff_x19 + 0x1b0);
    FUN_100e18a28(unaff_x19 + 0x210);
    FUN_100e127ac(unaff_x19 + 0x2b0);
    FUN_100e1bc08(unaff_x19 + 0x4d0);
    FUN_100e2093c(unaff_x19 + 0x790);
    FUN_100e0bbc0(unaff_x19 + 0x910);
    FUN_100e0bbc0(unaff_x19 + 0xa50);
    FUN_100e186f8(unaff_x19 + 0xb90);
  }
  *(undefined1 *)(unaff_x23 + 0x5b9) = 0;
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x60));
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  *(undefined1 *)(unaff_x23 + 0x5b8) = 1;
  return 0;
}

