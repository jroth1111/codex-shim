
void FUN_100156cd0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined *in_stack_00000030;
  
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x00000008,param_2,s__108ac988c,&stack0x00000028);
  if (iVar2 == 0) {
    in_stack_00000020 = unaff_x20 + 0xa8;
    in_stack_00000028 = &stack0x00000020;
    in_stack_00000030 = &DAT_10015fb90;
    uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
    if ((uVar3 & 1) == 0) {
      in_stack_00000028 = &stack0x00000020;
      in_stack_00000030 = &DAT_10015faf0;
      in_stack_00000020 = unaff_x20;
      uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&stack0x00000008,&UNK_10b1e27f8,s__108b1bd74,&stack0x00000028);
      if ((uVar3 & 1) == 0) {
        unaff_x19[1] = in_stack_00000010;
        *unaff_x19 = in_stack_00000008;
        unaff_x19[2] = in_stack_00000018;
        return;
      }
      puVar4 = &UNK_10b1e2988;
    }
    else {
      puVar4 = &UNK_10b1e2970;
    }
  }
  else {
    puVar4 = &UNK_10b1e2958;
  }
  FUN_107c05cb4(&UNK_108c633e8,0x2b,unaff_x29 + -0x11,&UNK_10b1e32a8,puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100156db4);
  (*pcVar1)();
}

