
void FUN_1008d0ed4(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000f0;
  ulong in_stack_000000f8;
  long in_stack_00000100;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000f0,s_failed_to_interrupt___108aca5d7,&stack0x00000190);
  lVar6 = in_stack_00000100;
  uVar2 = in_stack_000000f8;
  lVar1 = in_stack_000000f0;
  FUN_100df5738();
  if ((*(long *)(unaff_x19 + 0xe0) == unaff_x21 + 0x1b) && (*(long *)(unaff_x19 + 0xe8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xf0));
  }
  lVar3 = **(long **)(unaff_x19 + 0xd0);
  **(long **)(unaff_x19 + 0xd0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xb0));
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *unaff_x20 = 1;
  if (lVar1 == -0x7fffffffffffffff) {
    *unaff_x25 = unaff_x21 + 0x6c;
    uVar4 = 3;
  }
  else {
    lVar8 = *(long *)(unaff_x29 + -0x98);
    lVar3 = *(long *)(unaff_x29 + -0xa0);
    lVar12 = *(long *)(unaff_x29 + -0x88);
    lVar10 = *(long *)(unaff_x29 + -0x90);
    lVar9 = *(long *)(unaff_x29 + -0x78);
    lVar7 = *(long *)(unaff_x29 + -0x80);
    lVar13 = *(long *)(unaff_x29 + -0x68);
    lVar11 = *(long *)(unaff_x29 + -0x70);
    FUN_100d38338();
    if (lVar1 == -0x8000000000000000) {
      lVar6 = 0x34;
      lVar5 = 0x34;
      if ((uVar2 & 1) == 0) {
        lVar5 = 0x6a;
      }
      lVar5 = unaff_x21 + lVar5;
    }
    else {
      lVar5 = unaff_x21 + 0x6b;
      in_stack_00000070 = lVar3;
      in_stack_00000078 = lVar8;
      in_stack_00000080 = lVar10;
      in_stack_00000088 = lVar12;
      in_stack_00000090 = lVar7;
      in_stack_00000098 = lVar9;
      in_stack_000000a0 = lVar11;
      in_stack_000000a8 = lVar13;
    }
    unaff_x25[6] = in_stack_00000078;
    unaff_x25[5] = in_stack_00000070;
    unaff_x25[8] = in_stack_00000088;
    unaff_x25[7] = in_stack_00000080;
    unaff_x25[10] = in_stack_00000098;
    unaff_x25[9] = in_stack_00000090;
    *unaff_x25 = lVar5;
    unaff_x25[1] = lVar1;
    unaff_x25[2] = uVar2;
    unaff_x25[3] = lVar6;
    unaff_x25[4] = unaff_x26;
    unaff_x25[0xc] = in_stack_000000a8;
    unaff_x25[0xb] = in_stack_000000a0;
    uVar4 = 1;
    unaff_x25[0xd] = -0x7f5b;
  }
  *(undefined1 *)(unaff_x19 + 0xf40) = uVar4;
  return;
}

