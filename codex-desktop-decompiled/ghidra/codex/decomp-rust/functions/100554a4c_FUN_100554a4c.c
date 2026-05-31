
void FUN_100554a4c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  long in_stack_000000c0;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  long in_stack_000002b0;
  long in_stack_000002c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000002b0,s_duplicate_agent_role_name_____de_108ac0f07,&stack0x000001b0);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x00000350);
  if (*(long *)(unaff_x29 + -0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xa8));
  }
  while (FUN_100f3b678(&stack0x00000350,&stack0x000002b0), in_stack_000002b0 != 0) {
    lVar2 = in_stack_000002b0 + in_stack_000002c0 * 0x18;
    if (*(long *)(lVar2 + 8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x10));
    }
    FUN_100dff5f8(in_stack_000002b0 + in_stack_000002c0 * 0x48 + 0x110);
  }
  *unaff_x26 = 1;
  FUN_100cd1c8c();
  if (((*(byte *)(in_stack_000000c0 + 0x128) & 1) != 0) &&
     (*(long *)(in_stack_000000c0 + 0x48) != 0)) {
    _free(*(undefined8 *)(in_stack_000000c0 + 0x50));
  }
  *(undefined1 *)(in_stack_000000c0 + 0x128) = 0;
  *in_stack_00000018 = 1;
  in_stack_00000018[1] = uVar1;
  in_stack_00000018[3] = in_stack_00000208;
  in_stack_00000018[2] = in_stack_00000200;
  *(undefined1 *)(in_stack_000000c0 + 299) = 1;
  return;
}

