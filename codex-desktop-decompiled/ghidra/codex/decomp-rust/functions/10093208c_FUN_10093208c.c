
void FUN_10093208c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  long unaff_x24;
  undefined8 uVar3;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00005090;
  undefined8 in_stack_00005098;
  undefined8 in_stack_000050a0;
  undefined8 in_stack_000050a8;
  undefined8 in_stack_000050b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa0,s__failed_to_read_effective_config_108acb6c1,unaff_x29 + -0xd0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x90);
  FUN_100de3b58(&stack0x000050c0);
  FUN_100e05b5c(&stack0x00000050);
  if (((*(long *)(unaff_x24 + 0x40) != -0x8000000000000000) &&
      (*(char *)(unaff_x24 + 0x79) == '\x01')) && (*(long *)(unaff_x24 + 0x40) != 0)) {
    _free(*(undefined8 *)(unaff_x24 + 0x48));
  }
  in_stack_00000048[8] = in_stack_00005098;
  in_stack_00000048[7] = in_stack_00005090;
  *(undefined1 *)(unaff_x24 + 0x79) = 0;
  *in_stack_00000048 = uVar1;
  in_stack_00000048[1] = uVar2;
  in_stack_00000048[2] = uVar3;
  in_stack_00000048[3] = 0x8000000000000005;
  in_stack_00000048[4] = in_stack_00000030;
  in_stack_00000048[5] = unaff_x20;
  in_stack_00000048[6] = unaff_x22;
  in_stack_00000048[10] = in_stack_000050a8;
  in_stack_00000048[9] = in_stack_000050a0;
  in_stack_00000048[0xb] = in_stack_000050b0;
  in_stack_00000048[0xc] = 0xffffffffffff80a5;
  *(undefined1 *)(unaff_x24 + 0x78) = 1;
  return;
}

