
void FUN_1016ac364(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 unaff_x25;
  undefined1 *unaff_x28;
  undefined8 *in_stack_000071c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00007220,s__Failed_to_attach_to_resumed_app_108adb20b,&stack0x000071e0);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_000071c8)();
  unaff_x28[3] = 0;
  lVar1 = *(long *)(unaff_x19 + 0x25e0);
  if ((lVar1 != -0x7fffffffffffffff) && ((unaff_x28[1] & 1) != 0)) {
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x25e8));
    }
    if ((*(long *)(unaff_x19 + 0x25f8) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x25f8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x2600));
    }
  }
  unaff_x28[1] = 0;
  if ((unaff_x28[2] & 1) != 0) {
    FUN_100de93d0(unaff_x19 + 0x98);
  }
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

