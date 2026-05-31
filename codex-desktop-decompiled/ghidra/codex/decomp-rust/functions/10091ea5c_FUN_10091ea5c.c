
void FUN_10091ea5c(void)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x27;
  long unaff_x29;
  ulong in_stack_00000240;
  ulong in_stack_00000248;
  long in_stack_00000250;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000240,s__failed_to_construct_backend_cli_108acb4a9,&stack0x00000130);
  (**(code **)**(undefined8 **)(unaff_x29 + -0xe0))();
  FUN_100e0609c(unaff_x19 + 0x18);
  *unaff_x27 = 1;
  if (in_stack_00000240 == 0x8000000000000001) {
    uVar1 = 3;
    *unaff_x25 = 3;
    *unaff_x20 = unaff_x26 + 0x6f;
  }
  else {
    FUN_100d701d8();
    *unaff_x25 = 1;
    if (in_stack_00000240 == 0x8000000000000000) {
      uVar3 = 0;
      lVar2 = unaff_x26 + 0x54;
      in_stack_00000240 = in_stack_00000248;
    }
    else {
      uVar3 = in_stack_00000240 & 0xffffffffffffff00;
      lVar2 = unaff_x26 + 0x6e;
    }
    *unaff_x20 = lVar2;
    unaff_x20[1] = uVar3 | in_stack_00000240 & 0xff;
    unaff_x20[2] = in_stack_00000248;
    unaff_x20[3] = in_stack_00000250;
    unaff_x20[4] = unaff_x26 + 3;
    unaff_x20[0xd] = -0x7f5b;
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xfb8) = uVar1;
  return;
}

