
void FUN_100767ca0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x26;
  long in_stack_00000070;
  undefined8 *in_stack_000000a8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000005d0,s_rollout_at_is_empty_108ac6abd,&stack0x000003d8);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar2 = in_stack_000005d0;
    puVar2[1] = in_stack_000005d8;
    puVar2[2] = in_stack_000005e0;
    plVar3 = (long *)_malloc(0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)puVar2;
      plVar3[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar3 + 2) = 0x28;
      lVar4 = unaff_x26 + 1;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de6690();
      }
      if (in_stack_00000070 != 0) {
        _free();
      }
      *in_stack_000000a8 = 0x8000000000000000;
      in_stack_000000a8[1] = (long)plVar3 + 1;
      _memcpy(in_stack_000000a8 + 2,&stack0x000000c8,0x1c8);
      *(undefined1 *)(unaff_x19 + 0x138) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100768760);
  (*pcVar1)();
}

