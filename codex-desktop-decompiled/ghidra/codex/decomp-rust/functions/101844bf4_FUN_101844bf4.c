
void FUN_101844bf4(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x24;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  long in_stack_00000228;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001c8,s__auth_refresh_request_failed__co_108add137,unaff_x29 + -0xf0);
  uVar7 = in_stack_000001d8;
  uVar6 = in_stack_000001d0;
  uVar5 = in_stack_000001c8;
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    plVar4 = (long *)_malloc(0x18);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)puVar3;
      plVar4[1] = (long)&UNK_10b25d268;
      *(undefined1 *)(plVar4 + 2) = 0x28;
      if (in_stack_00000228 != unaff_x27) {
        func_0x00010194dc28(unaff_x24 + 0x18);
      }
      if (in_stack_00000210 != 0) {
        _free(in_stack_00000218);
      }
      *(undefined1 *)((long)unaff_x19 + 0xc2) = 0;
      if ((unaff_x19[8] & 0x7fffffffffffffff) == 0) {
        *(undefined2 *)((long)unaff_x19 + 0xc3) = 0;
        cVar1 = *(char *)((long)unaff_x19 + 0xc1);
      }
      else {
        _free(unaff_x19[9]);
        *(undefined2 *)((long)unaff_x19 + 0xc3) = 0;
        cVar1 = *(char *)((long)unaff_x19 + 0xc1);
      }
      if ((cVar1 == '\x01') && ((*unaff_x19 & 0x7fffffffffffffff) != 0)) {
        _free(unaff_x19[1]);
      }
      *unaff_x21 = 0x8000000000000000;
      unaff_x21[1] = (long)plVar4 + 1;
      unaff_x21[2] = plVar4;
      uVar5 = *unaff_x28;
      uVar7 = unaff_x28[3];
      uVar6 = unaff_x28[2];
      unaff_x21[4] = unaff_x28[1];
      unaff_x21[3] = uVar5;
      unaff_x21[6] = uVar7;
      unaff_x21[5] = uVar6;
      uVar5 = unaff_x28[4];
      unaff_x21[8] = unaff_x28[5];
      unaff_x21[7] = uVar5;
      *(undefined1 *)(unaff_x19 + 0x18) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101845950);
  (*pcVar2)();
}

