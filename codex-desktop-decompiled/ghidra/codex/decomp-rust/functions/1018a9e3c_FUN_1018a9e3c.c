
void FUN_1018a9e3c(void)

{
  code *pcVar1;
  undefined8 *unaff_x19;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000008,s_invalid_value__108ade103,unaff_x29 + -0x40);
  plVar2 = *(long **)(unaff_x29 + -0x48);
  if (*plVar2 == 1) {
    uVar4 = plVar2[1];
    if ((uVar4 & 3) != 1) goto LAB_1018a9eac;
    puVar3 = (undefined8 *)(uVar4 - 1);
    uVar5 = *puVar3;
    puVar6 = *(undefined8 **)(uVar4 + 7);
    pcVar1 = (code *)*puVar6;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar5);
    }
    if (puVar6[1] != 0) {
      _free(uVar5);
    }
  }
  else {
    if ((*plVar2 != 0) || (plVar2[2] == 0)) goto LAB_1018a9eac;
    puVar3 = (undefined8 *)plVar2[1];
  }
  _free(puVar3);
LAB_1018a9eac:
  _free(plVar2);
  unaff_x19[2] = in_stack_00000010;
  unaff_x19[1] = in_stack_00000008;
  unaff_x19[3] = in_stack_00000018;
  *unaff_x19 = 0x8000000000000007;
  return;
}

