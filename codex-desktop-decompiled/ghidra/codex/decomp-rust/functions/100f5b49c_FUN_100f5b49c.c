
void FUN_100f5b49c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000058,s_______108ad4adf,&stack0x00000108);
  lVar3 = unaff_x19[2];
  if (lVar3 == *unaff_x19) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar1 = (undefined8 *)(unaff_x19[1] + lVar3 * 0x18);
  puVar1[1] = in_stack_00000060;
  *puVar1 = in_stack_00000058;
  puVar1[2] = in_stack_00000068;
  unaff_x19[2] = lVar3 + 1;
  uVar4 = *(ulong *)(unaff_x29 + -0xc0);
  if ((uVar4 & 3) == 1) {
    uVar5 = *(undefined8 *)(uVar4 - 1);
    puVar1 = *(undefined8 **)(uVar4 + 7);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar1[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(uVar4 - 1));
  }
  return;
}

