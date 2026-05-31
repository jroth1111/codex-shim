
void FUN_10189bdb0(void)

{
  code *pcVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s_failed_to_request_device_code__108adddfa,&stack0x00000040);
  unaff_x19[0xc] = 0xffffffffffff80a5;
  unaff_x19[1] = in_stack_00000018;
  *unaff_x19 = in_stack_00000010;
  unaff_x19[2] = in_stack_00000020;
  unaff_x19[3] = 0x8000000000000005;
  if ((in_stack_00000008 & 3) == 1) {
    uVar2 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar3 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      _free(uVar2);
    }
    _free((undefined8 *)(in_stack_00000008 - 1));
  }
  return;
}

