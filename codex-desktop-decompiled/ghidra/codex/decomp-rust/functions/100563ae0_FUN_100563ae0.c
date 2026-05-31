
void FUN_100563ae0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 unaff_w21;
  undefined8 unaff_x22;
  undefined8 *puVar3;
  ulong in_stack_00000018;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s_failed_to_read___108ac1253,&stack0x00000040);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(unaff_w21,&stack0x00000028);
  if ((in_stack_00000018 & 3) == 1) {
    unaff_x22 = *(undefined8 *)(in_stack_00000018 - 1);
    puVar3 = *(undefined8 **)(in_stack_00000018 + 7);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(unaff_x22);
    }
    if (puVar3[1] != 0) {
      _free(unaff_x22);
    }
    _free((undefined8 *)(in_stack_00000018 - 1));
  }
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = unaff_x22;
  *(undefined1 *)(unaff_x19 + 0x50) = 1;
  return;
}

