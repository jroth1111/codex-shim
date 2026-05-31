
undefined8 FUN_1005e1cc4(void)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 uVar5;
  long unaff_x23;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000cad0,s__invalid_thread_settings_overrid_108ac20a2,&stack0x0000cab0);
  uVar5 = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x23 + 0x10) = *(undefined8 *)(unaff_x19 + 200);
  *(undefined8 *)(unaff_x23 + 8) = uVar5;
  *(undefined1 *)(in_stack_000000a0 + 0x682) = 1;
  *(undefined1 *)(unaff_x23 + 0x20) = 8;
  FUN_100e11d38(&stack0x00005490);
  lVar3 = **(long **)(in_stack_000000a0 + 0x5f0);
  *(undefined2 *)(in_stack_000000a0 + 0x681) = 0;
  _memcpy(&stack0x00007b98,&stack0x00002da0,0x1d8);
  _memcpy(in_stack_000000a0 + 0x688,&stack0x00007b80,0x1f0);
  *(long *)(in_stack_000000a0 + 0x878) = lVar3 + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0xa90) = 0;
  iVar1 = FUN_1005a4060(in_stack_000000a0 + 0x688,in_stack_00000098);
  if (iVar1 == 0) {
    FUN_100d28c3c(in_stack_000000a0 + 0x688);
    *(undefined4 *)(in_stack_00000090 + 0xa6) = 0;
    *(undefined1 *)(in_stack_000000a0 + 0x680) = 1;
    FUN_100ca6934();
    uVar5 = 0;
    *(undefined1 *)(in_stack_000000a0 + 0x485) = 0;
    uVar4 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
    if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
      uVar4 = 7;
    }
    if (0x18 < uVar4 || (1L << (uVar4 & 0x3f) & 0x161ff1cU) == 0) {
      FUN_100def028(in_stack_000000a0 + 0x200);
    }
    if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
      FUN_100def028(in_stack_000000a0);
    }
    uVar2 = 1;
  }
  else {
    *unaff_x20 = 6;
    uVar5 = 2;
    uVar2 = 0xc;
  }
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar2;
  return uVar5;
}

