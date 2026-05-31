
void FUN_100e9e228(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *unaff_x19;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s_Bfailed_to_resolve_home_director_108acf62c);
  uVar3 = in_stack_00000038;
  uVar2 = in_stack_00000030;
  uVar1 = in_stack_00000028;
  if ((in_stack_00000020 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_00000020 - 1);
    puVar6 = *(undefined8 **)(in_stack_00000020 + 7);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_00000020 - 1));
  }
  *unaff_x19 = 0x8000000000000012;
  unaff_x19[2] = uVar2;
  unaff_x19[1] = uVar1;
  unaff_x19[3] = uVar3;
  return;
}

