
/* WARNING: Removing unreachable block (ram,0x000100768060) */

void FUN_100768218(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x26;
  long unaff_x29;
  long in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 *in_stack_000000a8;
  ulong in_stack_00000300;
  undefined8 in_stack_00000308;
  long in_stack_00000318;
  undefined8 in_stack_00000320;
  long in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  long in_stack_000009f0;
  
  plVar4 = (long *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000007d0);
  FUN_100d5c778(&stack0x00000b78);
  if ((in_stack_00000300 != in_stack_00000078) && (in_stack_00000300 != 0x8000000000000001)) {
    if ((in_stack_00000300 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000308);
    }
    if ((in_stack_00000318 != -0x8000000000000000) && (in_stack_00000318 != 0)) {
      _free(in_stack_00000320);
    }
    if ((in_stack_00000330 != -0x8000000000000000) && (in_stack_00000330 != 0)) {
      _free(in_stack_00000338);
    }
  }
  FUN_100de8910(&stack0x00000a38);
  if (in_stack_000009f0 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000009f0);
  }
  if (*(long *)(unaff_x29 + -0xa8) < 0) {
    FUN_100de6690(unaff_x29 + -0xa8);
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000005d0,s_rollout_at___does_not_start_with_108ac6ad5,&stack0x000007d0);
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
      if (*plVar4 == 1) {
        FUN_100de21d4(plVar4 + 1);
      }
      else if ((*plVar4 == 0) && (plVar4[2] != 0)) {
        _free(plVar4[1]);
      }
      _free(plVar4);
      lVar5 = unaff_x26 + 1;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
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

