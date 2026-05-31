
void FUN_1016acc50(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 unaff_x25;
  undefined1 *unaff_x28;
  undefined8 *in_stack_000071e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00007220,s__Failed_to_rebuild_configuration_108adb1b7,&stack0x00000010);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_000071e0)();
  unaff_x28[2] = 0;
  unaff_x28[4] = 0;
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x88));
  }
  if ((*(ulong *)(unaff_x19 + 0x58) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x60));
  }
  *unaff_x21 = 0x8000000000000001;
  unaff_x21[1] = unaff_x25;
  *unaff_x28 = 1;
  return;
}

