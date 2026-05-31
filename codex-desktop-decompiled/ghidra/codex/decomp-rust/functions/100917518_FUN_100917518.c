
void FUN_100917518(void)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  long unaff_x28;
  long in_stack_000004b8;
  undefined8 in_stack_000004c0;
  long in_stack_000004c8;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000004b8,s_no_rollout_found_for_thread_id_108acb1f5,&stack0x00000290);
  if (unaff_x21 == in_stack_000004c8) {
    uVar2 = *(undefined8 *)(unaff_x28 + 0xf);
    iVar1 = _memcmp(uVar2,in_stack_000004c0);
    if (iVar1 == 0) {
      if (in_stack_000004b8 != 0) {
        _free(in_stack_000004c0);
      }
      if (*(long *)(unaff_x28 + 7) != 0) {
        _free(uVar2);
      }
      uVar2 = 0x8000000000000000;
      goto LAB_1009178d0;
    }
  }
  if (in_stack_000004b8 != 0) {
    _free(in_stack_000004c0);
  }
  in_stack_000004c0 = 0;
  in_stack_00000948 = *(undefined8 *)(unaff_x28 + 0xf);
  in_stack_00000940 = *(undefined8 *)(unaff_x28 + 7);
  uVar2 = 0x8000000000000001;
LAB_1009178d0:
  *unaff_x20 = uVar2;
  unaff_x20[1] = in_stack_000004c0;
  unaff_x20[3] = in_stack_00000948;
  unaff_x20[2] = in_stack_00000940;
  unaff_x20[4] = unaff_x21;
  _memcpy(unaff_x20 + 5,&stack0x00000770,0x1d0);
  *(undefined1 *)(unaff_x19 + 0x51) = 1;
  return;
}

