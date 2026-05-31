
void FUN_100963818(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00005490;
  undefined8 in_stack_00005498;
  undefined8 in_stack_00005690;
  undefined8 in_stack_00005698;
  long *in_stack_00005768;
  long in_stack_00005828;
  undefined8 *in_stack_00005830;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000060,s__failed_to_list_marketplace_plug_108acc1d2,unaff_x29 + -0xc0);
  uVar3 = in_stack_00000070;
  uVar2 = in_stack_00000068;
  uVar1 = in_stack_00000060;
  if (in_stack_00005828 != 0) {
    if ((code *)*in_stack_00005830 != (code *)0x0) {
      (*(code *)*in_stack_00005830)(in_stack_00005828);
    }
    if (in_stack_00005830[1] != 0) {
      _free(in_stack_00005828);
    }
  }
  *(undefined1 *)(in_stack_00000050 + 0x59) = 0;
  if ((*(byte *)(in_stack_00000050 + 0x55) & 1) != 0) {
    lVar4 = *in_stack_00005768;
    *in_stack_00005768 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(&stack0x00005768);
    }
  }
  *(undefined1 *)(in_stack_00000050 + 0x55) = 0;
  if (((*(byte *)(in_stack_00000050 + 0x56) & 1) != 0) &&
     (FUN_100e05b5c(&stack0x00004b30), in_stack_00005490 != 0)) {
    _free(in_stack_00005498);
  }
  *(undefined1 *)(in_stack_00000050 + 0x56) = 0;
  FUN_100e05b5c(in_stack_00000058 + 0x26a0);
  if (*(long *)(in_stack_00000058 + 0x3000) != 0) {
    _free(*(undefined8 *)(in_stack_00000058 + 0x3008));
  }
  if (*(long *)(in_stack_00000058 + 0x2608) != -0x7ffffffffffffffd) {
    FUN_100e0609c(in_stack_00000058 + 0x2608);
  }
  FUN_100de93d0(in_stack_00000058 + 0xc0);
  if (*(long *)(in_stack_00000058 + 0xa8) != 0) {
    _free(*(undefined8 *)(in_stack_00000058 + 0xb0));
  }
  if ((*(byte *)(in_stack_00000050 + 0x54) & 1) != 0) {
    lVar4 = *(long *)(in_stack_00000058 + 0x98);
    lVar5 = *(long *)(in_stack_00000058 + 0xa0);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(long *)(in_stack_00000058 + 0x90) != 0) {
      _free(lVar4);
    }
  }
  *(undefined1 *)(in_stack_00000050 + 0x54) = 0;
  *(undefined1 *)(in_stack_00000050 + 0x5a) = 0;
  lVar4 = **(long **)(in_stack_00000058 + 0x70);
  **(long **)(in_stack_00000058 + 0x70) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E();
  }
  *(undefined2 *)(in_stack_00000050 + 0x5b) = 0;
  *in_stack_00000040 = uVar1;
  in_stack_00000040[1] = uVar2;
  in_stack_00000040[2] = uVar3;
  in_stack_00000040[3] = 0x8000000000000005;
  in_stack_00000040[4] = unaff_x25;
  in_stack_00000040[5] = in_stack_00000030;
  in_stack_00000040[6] = in_stack_00000038;
  in_stack_00000040[7] = unaff_x24;
  in_stack_00000040[8] = unaff_x27;
  in_stack_00000040[9] = unaff_x26;
  in_stack_00000040[0xb] = in_stack_00005698;
  in_stack_00000040[10] = in_stack_00005690;
  in_stack_00000040[0xc] = 0xffffffffffff80a5;
  *(undefined1 *)(in_stack_00000050 + 0x50) = 1;
  return;
}

