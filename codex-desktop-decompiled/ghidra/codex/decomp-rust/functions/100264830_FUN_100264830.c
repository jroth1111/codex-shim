
void FUN_100264830(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 *unaff_x19;
  char *unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar12 = __ZN4core3fmt5write17h64810b21425781ecE(&stack0x00000020,param_2,s___108b19070);
  uVar8 = in_stack_00000030;
  uVar6 = in_stack_00000028;
  uVar4 = in_stack_00000020;
  if ((uVar12 & 1) != 0) {
    FUN_107c05cb4(&UNK_108c73991,0x37);
    goto LAB_100264974;
  }
  if (*(ushort *)(unaff_x20 + 0x50) == 0xffff) {
    uVar13 = 0x3f;
    cVar2 = *unaff_x20;
joined_r0x00010026480c:
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        unaff_x27 = (undefined8 *)(ulong)(byte)unaff_x20[1];
      }
      else {
        unaff_x27 = *(undefined8 **)(unaff_x20 + 8);
        unaff_x23 = (undefined8 *)_malloc(0x20);
        if (unaff_x23 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
          goto LAB_100264974;
        }
        (**(code **)*unaff_x27)(&stack0x00000020,unaff_x27 + 3,unaff_x27[1],unaff_x27[2]);
        unaff_x23[1] = in_stack_00000028;
        *unaff_x23 = in_stack_00000020;
        unaff_x23[3] = in_stack_00000038;
        unaff_x23[2] = in_stack_00000030;
      }
    }
    (*(code *)**(undefined8 **)(unaff_x20 + 0x10))
              (&stack0x00000020,unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined8 *)(unaff_x20 + 0x20));
    uVar10 = in_stack_00000038;
    uVar9 = in_stack_00000030;
    uVar7 = in_stack_00000028;
    uVar5 = in_stack_00000020;
    (*(code *)**(undefined8 **)(unaff_x20 + 0x30))
              (&stack0x00000020,unaff_x20 + 0x48,*(undefined8 *)(unaff_x20 + 0x38),
               *(undefined8 *)(unaff_x20 + 0x40));
    unaff_x19[10] = in_stack_00000028;
    unaff_x19[9] = in_stack_00000020;
    unaff_x19[0xc] = in_stack_00000038;
    unaff_x19[0xb] = in_stack_00000030;
    unaff_x19[6] = uVar7;
    unaff_x19[5] = uVar5;
    uVar3 = *(undefined2 *)(unaff_x20 + 0x50);
    unaff_x19[8] = uVar10;
    unaff_x19[7] = uVar9;
    *(char *)(unaff_x19 + 3) = cVar2;
    *(char *)((long)unaff_x19 + 0x19) = (char)unaff_x27;
    unaff_x19[4] = unaff_x23;
    *(undefined2 *)(unaff_x19 + 0xd) = uVar3;
    *unaff_x19 = uVar4;
    unaff_x19[1] = uVar6;
    unaff_x19[2] = uVar8;
    *(undefined4 *)(unaff_x19 + 0xe) = uVar13;
    return;
  }
  uVar12 = (ulong)*(ushort *)(unaff_x20 + 0x50) + 1;
  uVar1 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar12 < uVar1) {
    if (-0x41 < *(char *)(*(long *)(unaff_x20 + 0x38) + uVar12)) {
LAB_1002647f8:
      uVar13 = 0x110000;
      if (uVar1 != uVar12) {
        uVar13 = 0x26;
      }
      cVar2 = *unaff_x20;
      goto joined_r0x00010026480c;
    }
  }
  else if (uVar1 == uVar12) goto LAB_1002647f8;
  __ZN4core3str16slice_error_fail17h7d5f7302866db666E();
LAB_100264974:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100264978);
  (*pcVar11)();
}

