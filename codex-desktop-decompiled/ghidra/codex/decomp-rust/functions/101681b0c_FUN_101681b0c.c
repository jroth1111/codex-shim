
void FUN_101681b0c(void)

{
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000078;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  
  FUN_100f3f484(&stack0x00003e30,s_Sandbox_read_access_granted_for_108ada7a7,&stack0x00006750);
  __ZN9codex_tui12history_cell7notices14new_info_event17h1327efb83840ed57E
            (&stack0x00006610,&stack0x00000140,&stack0x00003e30);
  FUN_10164b6f4(in_stack_00000048,&stack0x00006610);
  if (unaff_x20 != 0) {
    _free();
  }
  *in_stack_00000050 = 0x8000000000000001;
  in_stack_00000050[1] = unaff_x22;
  in_stack_00000050[2] = unaff_x20;
  *(undefined1 *)(in_stack_00000078 + 0xac8) = 1;
  return;
}

