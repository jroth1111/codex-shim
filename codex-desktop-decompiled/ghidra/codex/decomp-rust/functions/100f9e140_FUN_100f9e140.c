
undefined1  [16] FUN_100f9e140(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x26;
  long *unaff_x28;
  long in_stack_000000f8;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00005f80);
  if (*unaff_x28 != 0) {
    _free(unaff_x28[1]);
  }
  FUN_100e0e7bc(&stack0x00000880);
  if ((*(byte *)(in_stack_000000f8 + 0x6f2) & 1) != 0) {
    FUN_100e6ddec(in_stack_000000f8 + 0x520);
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f2) = 0;
  if ((((*(byte *)(in_stack_000000f8 + 0x6f3) & 1) != 0) &&
      (*(short *)(in_stack_000000f8 + 0x500) == 3)) && (*(long *)(in_stack_000000f8 + 0x508) != 0))
  {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x510));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f3) = 0;
  if (*(long *)(in_stack_000000f8 + 0x4c8) != -0x7ffffffffffffffb) {
    *(undefined1 *)(in_stack_000000f8 + 0x6f4) = 0;
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f4) = 0;
  *(undefined4 *)(unaff_x26 + 0x4d5) = 0;
  if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
  }
  if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
  if (*(long *)(in_stack_000000f8 + 0x228) != -0x7fffffffffffffe9) {
    *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
  if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
    FUN_100ddd750(in_stack_000000f8 + 0x108);
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
  *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
  FUN_100c973ec(in_stack_000000f8 + 0xa8);
  if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
    lVar1 = *(long *)(in_stack_000000f8 + 0x98);
    lVar3 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar1);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar1 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar1 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  if ((*(ulong *)(in_stack_000000f8 + 0x78) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
  return ZEXT816(0);
}

