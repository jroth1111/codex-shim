
undefined1  [16] FUN_1002753d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000008,s_unsupported_scheme_108ab91b0,&stack0x00000090);
  uVar3 = in_stack_00000018;
  uVar2 = in_stack_00000010;
  uVar1 = in_stack_00000008;
  auVar5._0_8_ = (undefined8 *)_malloc(0x20);
  if (auVar5._0_8_ != (undefined8 *)0x0) {
    *auVar5._0_8_ = uVar1;
    auVar5._0_8_[1] = uVar2;
    auVar5._0_8_[2] = uVar3;
    *(undefined1 *)(auVar5._0_8_ + 3) = 0;
    FUN_1002bd1ac();
    auVar5._8_8_ = &UNK_10b1f3bd8;
    return auVar5;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100275590);
  (*pcVar4)();
}

