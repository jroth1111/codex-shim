
void FUN_100744fd8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 unaff_w21;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_000000e0;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000060,s__Failed_to_read_project_hooks_co_108ac5cbf,unaff_x29 + -0xc0);
  in_stack_000001a8 = in_stack_00000068;
  in_stack_000001a0 = in_stack_00000060;
  in_stack_000001b0 = in_stack_00000070;
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(unaff_w21,&stack0x000001a0);
  if ((in_stack_000000e0 & 3) == 1) {
    puVar3 = (undefined8 *)(in_stack_000000e0 - 1);
    uVar4 = *puVar3;
    puVar5 = *(undefined8 **)(in_stack_000000e0 + 7);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
    _free(puVar3);
  }
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 200));
  }
  if ((*(byte *)(unaff_x19 + 0xeb) & 1) != 0) {
    FUN_100ddb5bc(unaff_x19 + 0x68);
  }
  *(undefined1 *)(unaff_x19 + 0xeb) = 0;
  *unaff_x20 = 0x8000000000000006;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000168;
  unaff_x20[2] = in_stack_00000160;
  unaff_x20[5] = in_stack_00000178;
  unaff_x20[4] = in_stack_00000170;
  unaff_x20[7] = in_stack_00000188;
  unaff_x20[6] = in_stack_00000180;
  unaff_x20[9] = in_stack_00000198;
  unaff_x20[8] = in_stack_00000190;
  *(undefined1 *)(unaff_x19 + 0xe9) = 1;
  return;
}

