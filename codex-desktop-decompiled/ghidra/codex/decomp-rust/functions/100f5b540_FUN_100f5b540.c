
void FUN_100f5b540(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s____missing__108ad4aeb,&stack0x00000108);
  lVar3 = unaff_x19[2];
  if (lVar3 == *unaff_x19) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar1 = (undefined8 *)(unaff_x19[1] + lVar3 * 0x18);
  puVar1[1] = in_stack_00000048;
  *puVar1 = in_stack_00000040;
  puVar1[2] = in_stack_00000050;
  unaff_x19[2] = lVar3 + 1;
  if ((unaff_x20 & 3) == 1) {
    uVar4 = *(undefined8 *)(unaff_x20 - 1);
    puVar1 = *(undefined8 **)(unaff_x20 + 7);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar1[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(unaff_x20 - 1));
  }
  return;
}

