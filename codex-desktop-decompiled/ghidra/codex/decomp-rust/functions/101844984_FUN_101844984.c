
void FUN_101844984(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000210,s__auth_refresh_request_timed_out_a_108add0eb,unaff_x29 + -0xf0);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar3 = in_stack_00000210;
    puVar3[1] = in_stack_00000218;
    puVar3[2] = in_stack_00000220;
    plVar4 = (long *)_malloc(0x18);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)puVar3;
      plVar4[1] = (long)&UNK_10b25d268;
      *(undefined1 *)(plVar4 + 2) = 0x28;
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
      unaff_x21[2] = in_stack_00000218;
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

