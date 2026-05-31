
void FUN_100c82320(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
  if ((uVar2 & 1) == 0) {
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000;
    unaff_x19[2] = in_stack_00000010;
    return;
  }
  func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x00000020,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c82418);
  (*pcVar1)();
}

