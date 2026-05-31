
undefined1  [16] FUN_100f5f188(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long unaff_x21;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00000260);
  if (in_stack_00000118 != 0) {
    _free(in_stack_00000120);
  }
  if (unaff_x19 != 0) {
    _free();
  }
  if (unaff_x21 != 0) {
    _free(in_stack_000000b8);
  }
  FUN_100cf1500(&stack0x00000160);
  if (in_stack_00000108._4_1_ == '\x02') {
    __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f60488);
    (*pcVar2)();
  }
  if (in_stack_000000c0 != 0) {
    _free(in_stack_000000c8);
  }
  lVar1 = in_stack_000000f8;
  if (in_stack_000000d8 != 0) {
    _free(in_stack_000000e0);
  }
  for (; in_stack_00000100 != 0; in_stack_00000100 = in_stack_00000100 + -1) {
    FUN_100de8fec(lVar1);
    lVar1 = lVar1 + 0xa0;
  }
  if (in_stack_000000f0 != 0) {
    _free(in_stack_000000f8,0);
  }
  *in_stack_00000018 = 1;
  return ZEXT816(0);
}

