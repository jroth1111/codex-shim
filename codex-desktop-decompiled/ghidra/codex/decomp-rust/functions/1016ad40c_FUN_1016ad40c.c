
undefined1  [16] FUN_1016ad40c(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uVar2 = __ZN4eyre7private10format_err17h38a6e5ff633f7028E
                    (s_8Failed_to_start_a_fresh_session_108adb23d,&stack0x00000020,&UNK_10b251d28);
  if (in_stack_00000040 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x1e0);
  }
  else {
    _free(in_stack_00000048);
    lVar3 = *(long *)(unaff_x19 + 0x1e0);
  }
  if (((lVar3 == 2) && (*(char *)(unaff_x19 + 0x581) == '\x01')) &&
     (*(long *)(unaff_x19 + 0x1e8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x1f0));
  }
  *(undefined1 *)(unaff_x19 + 0x582) = 0;
  *(undefined2 *)(unaff_x19 + 0x580) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

