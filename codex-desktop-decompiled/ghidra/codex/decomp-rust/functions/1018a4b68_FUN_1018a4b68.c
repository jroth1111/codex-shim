
void FUN_1018a4b68(void)

{
  code *pcVar1;
  undefined8 *unaff_x19;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000040;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x38,s_0failed_to_load_plugin_share_loc_108addff8,&stack0x00000020);
  in_stack_00000028 = *(undefined8 *)(unaff_x29 + -0x30);
  in_stack_00000020 = *(undefined8 *)(unaff_x29 + -0x38);
  in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x28);
  if ((in_stack_00000040 & 3) == 1) {
    puVar2 = (undefined8 *)(in_stack_00000040 - 1);
    uVar3 = *puVar2;
    puVar4 = *(undefined8 **)(in_stack_00000040 + 7);
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free(puVar2);
  }
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  unaff_x19[2] = in_stack_00000030;
  unaff_x19[3] = 0x8000000000000005;
  unaff_x19[0xc] = 0xffffffffffff80a5;
  return;
}

