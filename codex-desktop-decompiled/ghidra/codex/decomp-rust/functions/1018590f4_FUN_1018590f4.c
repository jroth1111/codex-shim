
void FUN_1018590f4(void)

{
  undefined8 uVar1;
  undefined1 *unaff_x27;
  undefined8 *in_stack_00000088;
  long in_stack_000000a8;
  long in_stack_00001f68;
  undefined8 *in_stack_00001f70;
  
  FUN_10186232c(&stack0x00002b80);
  uVar1 = FUN_10192b678(&UNK_108cec5b1,0x23);
  if (in_stack_00001f68 != 0) {
    if ((code *)*in_stack_00001f70 != (code *)0x0) {
      (*(code *)*in_stack_00001f70)(in_stack_00001f68);
    }
    if (in_stack_00001f70[1] != 0) {
      _free(in_stack_00001f68);
    }
  }
  *unaff_x27 = 1;
  if ((*(byte *)(in_stack_000000a8 + 0xc4e) & 1) != 0) {
    FUN_101965740(in_stack_000000a8 + 0x250);
  }
  *(undefined1 *)(in_stack_000000a8 + 0xc4e) = 0;
  if ((*(ulong *)(in_stack_000000a8 + 0x238) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000a8 + 0x240));
  }
  FUN_101952554(in_stack_000000a8 + 0x188);
  FUN_10194c6ac(in_stack_000000a8 + 0x168);
  if (((*(long *)(in_stack_000000a8 + 0x140) != -0x8000000000000000) &&
      (*(char *)(in_stack_000000a8 + 0xc4f) == '\x01')) &&
     (*(long *)(in_stack_000000a8 + 0x140) != 0)) {
    _free(*(undefined8 *)(in_stack_000000a8 + 0x148));
  }
  *(undefined1 *)(in_stack_000000a8 + 0xc4f) = 0;
  *in_stack_00000088 = 2;
  in_stack_00000088[1] = uVar1;
  _memcpy(in_stack_00000088 + 2,&stack0x00003500,0x950);
  *(undefined1 *)(in_stack_000000a8 + 0xc40) = 1;
  return;
}

