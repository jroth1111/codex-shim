
void FUN_101733a18(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x20;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined1 uStack00000000000000f1;
  undefined1 uStack00000000000000f2;
  undefined1 uStack00000000000000f3;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe8,s_user__108adc739,&stack0x00000070);
  puVar2 = (undefined8 *)_malloc(0xb);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xb);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1017340ec);
    (*pcVar1)();
  }
  *(undefined4 *)((long)puVar2 + 7) = 0x68637461;
  uStack00000000000000f2 = unaff_x27 != 0x8000000000000000;
  *puVar2 = 0x61705f796c707061;
  uStack00000000000000f3 = 1;
  uStack00000000000000f1 = 0;
  FUN_101774864(unaff_x29 + -0xe8,unaff_x20 + 0xf0,&stack0x00000150,&stack0x00000070);
  if (*(long *)(unaff_x29 + -0xe8) != -0x8000000000000000) {
    if (*(long *)(unaff_x29 + -0xe8) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xe0));
    }
    if (*(long *)(unaff_x29 + -0xd0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -200));
    }
    if ((*(ulong *)(unaff_x29 + -0x88) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x80));
    }
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xb0));
    }
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
  }
  if ((in_stack_00000038 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) == 0) {
    uVar3 = *(ulong *)(unaff_x29 + -0x100);
  }
  else {
    _free();
    uVar3 = *(ulong *)(unaff_x29 + -0x100);
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xf8));
  }
  return;
}

