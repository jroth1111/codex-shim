
void FUN_100956cbc(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s__fuzzy_file_search_session_not_f_108acc155,&stack0x00000030);
  uVar1 = in_stack_00000010;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  if (((*(byte *)(unaff_x19 + 0xe1) & 1) != 0) && (*(long *)(unaff_x19 + 0x50) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  *(undefined1 *)(unaff_x19 + 0xe1) = 0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x40));
  }
  *unaff_x20 = uVar1;
  unaff_x20[2] = in_stack_00000048;
  unaff_x20[1] = in_stack_00000040;
  unaff_x20[3] = 0x8000000000000005;
  unaff_x20[0xc] = 0xffffffffffff80a8;
  *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  return;
}

