
void FUN_100a4937c(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar2;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00001780;
  undefined8 in_stack_00001788;
  undefined8 in_stack_00001790;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001780,s_invalid_http_version__108acecb0,&stack0x000012b0);
  *(undefined1 *)(unaff_x19 + 0x239) = 0;
  if ((*(byte *)(unaff_x19 + 0x23a) & 1) != 0) {
    unaff_x21 = &stack0x000000a0;
    FUN_100deb62c(&stack0x000000a0);
    func_0x000100e3c8d4(&stack0x000000c0);
  }
  *(undefined1 *)(unaff_x19 + 0x23a) = 0;
  if ((*(byte *)(unaff_x19 + 0x23b) & 1) != 0) {
    FUN_100df6754(unaff_x19 + 0x138);
    unaff_x21 = *(undefined1 **)(unaff_x19 + 0x228);
    puVar2 = *(undefined8 **)(unaff_x19 + 0x230);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(unaff_x21);
    }
    if (puVar2[1] != 0) {
      _free(unaff_x21);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x23b) = 0;
  *unaff_x28 = 3;
  unaff_x28[1] = in_stack_00001780;
  unaff_x28[2] = in_stack_00001788;
  unaff_x28[3] = in_stack_00001790;
  unaff_x28[5] = in_stack_00000448;
  unaff_x28[4] = in_stack_00000440;
  unaff_x28[7] = in_stack_00000458;
  unaff_x28[6] = in_stack_00000450;
  unaff_x28[9] = in_stack_00000468;
  unaff_x28[8] = in_stack_00000460;
  unaff_x28[0xb] = in_stack_00000478;
  unaff_x28[10] = in_stack_00000470;
  unaff_x28[0xc] = unaff_x27;
  unaff_x28[0xd] = unaff_x20;
  unaff_x28[0xe] = unaff_x21;
  unaff_x28[0x14] = in_stack_00000438;
  unaff_x28[0x13] = in_stack_00000430;
  unaff_x28[0x12] = in_stack_00000428;
  unaff_x28[0x11] = in_stack_00000420;
  unaff_x28[0x10] = in_stack_00000418;
  unaff_x28[0xf] = in_stack_00000410;
  *(undefined1 *)(unaff_x19 + 0x238) = 1;
  return;
}

