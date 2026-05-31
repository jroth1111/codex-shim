
void FUN_101848fac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000008,s__108add0bf,unaff_x29 + -0x40);
  uVar3 = in_stack_00000018;
  uVar2 = in_stack_00000010;
  uVar1 = in_stack_00000008;
  puVar5 = (undefined8 *)_malloc(0x1c);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x6b726f77202c796c;
    *puVar5 = 0x6e6f2d646165725b;
    *(undefined8 *)((long)puVar5 + 0x14) = 0x5d65746972772d65;
    *(undefined8 *)((long)puVar5 + 0xc) = 0x636170736b726f77;
    FUN_101aa4bd4(&stack0x00000008);
    unaff_x19[7] = in_stack_00000010;
    unaff_x19[6] = in_stack_00000008;
    unaff_x19[9] = in_stack_00000020;
    unaff_x19[8] = in_stack_00000018;
    unaff_x19[0xb] = in_stack_00000030;
    unaff_x19[10] = in_stack_00000028;
    *unaff_x19 = uVar1;
    unaff_x19[1] = uVar2;
    unaff_x19[2] = uVar3;
    unaff_x19[3] = 0x1c;
    unaff_x19[4] = puVar5;
    unaff_x19[5] = 0x1c;
    unaff_x19[0xc] = &UNK_108cead1f;
    unaff_x19[0xd] = 0xc;
    return;
  }
  func_0x0001087c9084(1,0x1c);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101849060);
  (*pcVar4)();
}

