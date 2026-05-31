
undefined8 FUN_101841d64(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *in_stack_00000048;
  
  uVar1 = __ZN4core3fmt5write17h64810b21425781ecE();
  if ((uVar1 & 1) == 0) {
    in_stack_00000048 = &stack0x00000008;
    uVar1 = __ZN4core3fmt5write17h64810b21425781ecE();
    if ((uVar1 & 1) == 0) {
      in_stack_00000048 = &stack0x00000018;
      uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
      return uVar2;
    }
  }
  return 1;
}

