
void FUN_100603148(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s_failed_to_reject_____server_requ_108ac25bf,&stack0x00000030);
  if ((in_stack_00000028 & 3) == 1) {
    puVar2 = (undefined8 *)(in_stack_00000028 - 1);
    uVar3 = *puVar2;
    puVar4 = *(undefined8 **)(in_stack_00000028 + 7);
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free(puVar2);
  }
  *unaff_x20 = in_stack_00000010;
  unaff_x20[2] = in_stack_00000020;
  unaff_x20[1] = in_stack_00000018;
  *(undefined1 *)(unaff_x19 + 0x290) = 1;
  return;
}

