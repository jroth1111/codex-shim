
undefined8 FUN_100f468d0(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  int unaff_w20;
  long unaff_x21;
  long *plVar6;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long lVar7;
  long lVar8;
  long in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000080;
  undefined *in_stack_00000088;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s_To_continue_this_session__run_108ad4818,&stack0x00000080);
  lVar2 = in_stack_00000040;
  if (in_stack_00000040 == in_stack_00000030) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000030);
  }
  plVar4 = in_stack_00000038 + lVar2 * 3;
  lVar7 = *(long *)(unaff_x29 + -0x78);
  plVar4[1] = *(long *)(unaff_x29 + -0x70);
  *plVar4 = lVar7;
  plVar4[2] = *(long *)(unaff_x29 + -0x68);
  in_stack_00000040 = lVar2 + 1;
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000068);
  }
  if ((unaff_x21 != 0) && (unaff_x25 != 0)) {
    _free();
  }
  lVar7 = in_stack_00000040;
  plVar4 = in_stack_00000038;
  lVar2 = in_stack_00000030;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  plVar6 = plVar4;
  if (lVar7 == 0) {
LAB_100f469fc:
    uVar5 = (long)(plVar4 + lVar7 * 3) - (long)plVar6;
    if (uVar5 != 0) {
      uVar5 = uVar5 / 0x18;
      plVar6 = plVar6 + 1;
      do {
        if (plVar6[-1] != 0) {
          _free(*plVar6);
        }
        plVar6 = plVar6 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    plVar1 = plVar4;
    do {
      plVar6 = plVar1 + 3;
      if (*plVar1 == -0x8000000000000000) goto LAB_100f469fc;
      *(long *)(unaff_x29 + -0x78) = *plVar1;
      lVar8 = plVar1[1];
      *(long *)(unaff_x29 + -0x68) = plVar1[2];
      *(long *)(unaff_x29 + -0x70) = lVar8;
      in_stack_00000088 = &DAT_10112965c;
      in_stack_00000080 = unaff_x29 + -0x78;
      func_0x00010602ab90(s__108ac265a,&stack0x00000080);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      plVar1 = plVar6;
    } while (plVar6 != plVar4 + lVar7 * 3);
  }
  if (lVar2 != 0) {
    _free(plVar4);
  }
  if (unaff_w20 == 5) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100f49448();
  }
  return uVar3;
}

