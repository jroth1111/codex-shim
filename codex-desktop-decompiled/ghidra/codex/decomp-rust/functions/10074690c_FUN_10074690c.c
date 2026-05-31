
undefined8 FUN_10074690c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x19;
  long unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000288;
  long in_stack_00000298;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000c0,s__Failed_to_parse_config_requirem_108ac5cef,&stack0x00000680);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x000000c0);
  FUN_100de3b58(&stack0x00000360);
  uVar2 = unaff_x19 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x19) {
    uVar2 = 1;
  }
  if (uVar2 == 1) {
    if (unaff_x19 != 0) {
      _free(in_stack_00000288);
    }
  }
  else {
    in_stack_00000000 = in_stack_00000008;
    in_stack_00000298 = in_stack_00000288;
    if ((uVar2 != 3) && (uVar2 != 4)) goto LAB_100746970;
  }
  if (in_stack_00000298 != 0) {
    _free(*in_stack_00000000);
  }
LAB_100746970:
  FUN_100dbdee8(&stack0x00000120);
  *(undefined1 *)(unaff_x23 + 0xd8) = 1;
  return uVar1;
}

