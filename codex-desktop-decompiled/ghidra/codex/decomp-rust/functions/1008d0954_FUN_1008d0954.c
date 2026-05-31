
void FUN_1008d0954(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  char *unaff_x24;
  long *unaff_x25;
  long unaff_x29;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *in_stack_00000028;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_00000230;
  ulong in_stack_00000238;
  long in_stack_00000240;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000230,s_expected_active_turn_id_but_foun_108aca5af,&stack0x00000248);
  FUN_100e4623c(&stack0x00000190);
  if (*unaff_x24 == '\0') {
    *unaff_x24 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
  }
  FUN_1060fa678();
  lVar1 = **(long **)(unaff_x19 + 0xd8);
  **(long **)(unaff_x19 + 0xd8) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE();
  }
  lVar1 = **(long **)(unaff_x19 + 0xd0);
  **(long **)(unaff_x19 + 0xd0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xb0));
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *in_stack_00000028 = 1;
  if (in_stack_00000230 == -0x7fffffffffffffff) {
    *unaff_x25 = unaff_x21 + 0x6c;
    uVar2 = 3;
  }
  else {
    lVar5 = *(long *)(unaff_x29 + -0x98);
    lVar1 = *(long *)(unaff_x29 + -0xa0);
    lVar9 = *(long *)(unaff_x29 + -0x88);
    lVar7 = *(long *)(unaff_x29 + -0x90);
    lVar6 = *(long *)(unaff_x29 + -0x78);
    lVar4 = *(long *)(unaff_x29 + -0x80);
    lVar10 = *(long *)(unaff_x29 + -0x68);
    lVar8 = *(long *)(unaff_x29 + -0x70);
    FUN_100d38338();
    if (in_stack_00000230 == -0x8000000000000000) {
      in_stack_00000240 = 0x34;
      lVar3 = 0x34;
      if ((in_stack_00000238 & 1) == 0) {
        lVar3 = 0x6a;
      }
      lVar3 = unaff_x21 + lVar3;
    }
    else {
      lVar3 = unaff_x21 + 0x6b;
      in_stack_00000070 = lVar1;
      in_stack_00000078 = lVar5;
      in_stack_00000080 = lVar7;
      in_stack_00000088 = lVar9;
      in_stack_00000090 = lVar4;
      in_stack_00000098 = lVar6;
      in_stack_000000a0 = lVar8;
      in_stack_000000a8 = lVar10;
    }
    unaff_x25[6] = in_stack_00000078;
    unaff_x25[5] = in_stack_00000070;
    unaff_x25[8] = in_stack_00000088;
    unaff_x25[7] = in_stack_00000080;
    unaff_x25[10] = in_stack_00000098;
    unaff_x25[9] = in_stack_00000090;
    *unaff_x25 = lVar3;
    unaff_x25[1] = in_stack_00000230;
    unaff_x25[2] = in_stack_00000238;
    unaff_x25[3] = in_stack_00000240;
    unaff_x25[4] = -0x7ffffffffffffffb;
    unaff_x25[0xc] = in_stack_000000a8;
    unaff_x25[0xb] = in_stack_000000a0;
    uVar2 = 1;
    unaff_x25[0xd] = -0x7f58;
  }
  *(undefined1 *)(unaff_x19 + 0xf40) = uVar2;
  return;
}

