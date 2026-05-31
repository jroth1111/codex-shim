
void FUN_100255dcc(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
  if (in_stack_00000018 != 0) {
    _free(in_stack_00000020);
  }
  if (iVar2 == 0) {
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000;
    unaff_x19[2] = in_stack_00000010;
    return;
  }
  FUN_107c05cb4(&UNK_108c726b9,0x37,&stack0x00000030,&UNK_10b1f20a8,&UNK_10b1f2018);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100255e44);
  (*pcVar1)();
}

