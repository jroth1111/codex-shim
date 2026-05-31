
void FUN_10074511c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000110,s__Error_parsing_project_hooks_con_108ac5c90,&stack0x000001a0);
  in_stack_000000e8 = in_stack_00000118;
  in_stack_000000e0 = in_stack_00000110;
  in_stack_000000f0 = in_stack_00000120;
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x000000e0);
  FUN_100de3b58(unaff_x29 + -0xc0);
  if (unaff_x27 != 0) {
    _free();
  }
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 200));
  }
  if ((*(byte *)(unaff_x19 + 0xeb) & 1) != 0) {
    FUN_100ddb5bc(unaff_x19 + 0x68);
  }
  *(undefined1 *)(unaff_x19 + 0xeb) = 0;
  *unaff_x20 = unaff_x25;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000168;
  unaff_x20[2] = in_stack_00000160;
  unaff_x20[5] = in_stack_00000178;
  unaff_x20[4] = in_stack_00000170;
  unaff_x20[7] = in_stack_00000188;
  unaff_x20[6] = in_stack_00000180;
  unaff_x20[9] = in_stack_00000198;
  unaff_x20[8] = in_stack_00000190;
  *(undefined1 *)(unaff_x19 + 0xe9) = 1;
  return;
}

