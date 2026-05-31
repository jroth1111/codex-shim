
void FUN_100917870(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  byte in_stack_000004b8;
  long in_stack_000004c0;
  undefined8 in_stack_000004c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000290,s_failed_to_read_thread__108acb217,&stack0x00000958);
  if (in_stack_000004b8 < 2) {
    if (in_stack_000004b8 == 0) goto LAB_1009178c8;
  }
  else if ((in_stack_000004b8 != 2) && (in_stack_000004b8 == 3)) goto LAB_1009178c8;
  if (in_stack_000004c0 != 0) {
    _free(in_stack_000004c8);
  }
LAB_1009178c8:
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = 2;
  unaff_x20[3] = in_stack_00000298;
  unaff_x20[2] = in_stack_00000290;
  unaff_x20[4] = in_stack_000002a0;
  _memcpy(unaff_x20 + 5,&stack0x00000770,0x1d0);
  *(undefined1 *)(unaff_x19 + 0x51) = 1;
  return;
}

