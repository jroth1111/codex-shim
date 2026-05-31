
void FUN_100c89408(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x29;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 *in_stack_000001a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s_Invalid_route___108ad34e4,&stack0x000002a8);
  if (0 < in_stack_00000190) {
    _free(in_stack_00000198);
  }
  puVar2 = in_stack_00000088;
  uVar1 = in_stack_00000080;
  lVar4 = *(long *)(unaff_x29 + -0x58);
  if (lVar4 == -0x8000000000000000) {
    _memcpy(&stack0x000002a8,&stack0x00000078,0x118);
    FUN_1016e7e18(&stack0x00000190);
    puVar2 = in_stack_000001a0;
    uVar1 = in_stack_00000198;
    if (in_stack_00000190 != 4) {
      if (in_stack_00000190 == 3) {
        if ((code *)*in_stack_000001a0 != (code *)0x0) {
          (*(code *)*in_stack_000001a0)(in_stack_00000198);
        }
        if (puVar2[1] != 0) {
          _free(uVar1);
        }
      }
      else {
        FUN_100d108c0(&stack0x00000190);
      }
    }
  }
  else {
    if (in_stack_00000078 == 3) {
      if ((code *)*in_stack_00000088 != (code *)0x0) {
        (*(code *)*in_stack_00000088)(in_stack_00000080);
      }
      if (puVar2[1] != 0) {
        _free(uVar1);
      }
    }
    else {
      FUN_100d108c0(&stack0x00000078);
    }
    if (lVar4 != -0x7fffffffffffffff) {
      func_0x000108a07a3c(&UNK_108cc3f67,0x2f,&stack0x000002a8,&UNK_10b235040,&UNK_10b234a60);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c89534);
      (*pcVar3)();
    }
  }
  return;
}

