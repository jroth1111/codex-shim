
undefined8 FUN_100f43b5c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar3;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar4;
  long unaff_x25;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 *puStack0000000000000070;
  long lStack0000000000000090;
  
  do {
    puStack0000000000000070 = (undefined8 *)(unaff_x25 + -0x30);
    uStack0000000000000060 = *(undefined8 *)(unaff_x25 + -0x10);
    uStack0000000000000068 = *(undefined8 *)(unaff_x25 + -8);
    lStack0000000000000090 = unaff_x25;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000040,s_______at___108ad4128,&stack0x00000070);
    lVar1 = in_stack_00000028;
    unaff_x21[1] = in_stack_00000048;
    *unaff_x21 = in_stack_00000040;
    unaff_x21[2] = in_stack_00000050;
    unaff_x24 = unaff_x24 + 1;
    unaff_x21 = unaff_x21 + 3;
    unaff_x25 = unaff_x25 + 0x48;
  } while (unaff_x20 != unaff_x24);
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  FUN_100f3f514(&stack0x00000070,in_stack_00000028);
  in_stack_00000020 = (long)puStack0000000000000070;
  in_stack_00000028 = unaff_x23;
  if (unaff_x20 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    lVar4 = unaff_x20;
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (in_stack_00000040 != 0) {
    _free(lVar1);
  }
  puStack0000000000000070 = &stack0x00000020;
  uVar2 = FUN_108858fa8(s_3failed_to_load_configured_marke_108ad40f2,&stack0x00000070);
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  puVar3 = (undefined8 *)(unaff_x19 + 0x20);
  do {
    if (puVar3[-4] != 0) {
      _free(puVar3[-3]);
    }
    if (puVar3[-1] != 0) {
      _free(*puVar3);
    }
    if (puVar3[2] != 0) {
      _free(puVar3[3]);
    }
    puVar3 = puVar3 + 9;
    unaff_x20 = unaff_x20 + -1;
  } while (unaff_x20 != 0);
  if (in_stack_00000008 != 0) {
    _free();
  }
  return uVar2;
}

