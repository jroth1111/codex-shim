
void FUN_100931f54(void)

{
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000048;
  long in_stack_00001bf0;
  undefined8 in_stack_00001bf8;
  undefined8 in_stack_00003620;
  undefined8 in_stack_00003628;
  undefined8 in_stack_00003630;
  undefined8 in_stack_00005090;
  undefined8 in_stack_00005098;
  undefined8 in_stack_000050a0;
  undefined8 in_stack_000050a8;
  undefined8 in_stack_000050b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003620,s_failed_to_reload_config__108aca2f4,&stack0x000050c0);
  if (in_stack_00001bf0 != 0) {
    _free(in_stack_00001bf8);
  }
  if (*(long *)(unaff_x27 + 0x80) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0x88));
  }
  if (((*(long *)(unaff_x27 + 0x40) != -0x8000000000000000) &&
      (*(char *)(unaff_x27 + 0x79) == '\x01')) && (*(long *)(unaff_x27 + 0x40) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0x48));
  }
  in_stack_00000048[8] = in_stack_00005098;
  in_stack_00000048[7] = in_stack_00005090;
  *(undefined1 *)(unaff_x27 + 0x79) = 0;
  *in_stack_00000048 = in_stack_00003620;
  in_stack_00000048[1] = in_stack_00003628;
  in_stack_00000048[2] = in_stack_00003630;
  in_stack_00000048[3] = 0x8000000000000005;
  in_stack_00000048[4] = in_stack_00000030;
  in_stack_00000048[5] = unaff_x20;
  in_stack_00000048[6] = unaff_x22;
  in_stack_00000048[10] = in_stack_000050a8;
  in_stack_00000048[9] = in_stack_000050a0;
  in_stack_00000048[0xb] = in_stack_000050b0;
  in_stack_00000048[0xc] = 0xffffffffffff80a5;
  *(undefined1 *)(unaff_x27 + 0x78) = 1;
  return;
}

