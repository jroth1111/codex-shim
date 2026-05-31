
void FUN_10090ea70(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s_failed_to_start_compaction__108acb158,unaff_x29 + -0x68);
  lVar2 = *(long *)(unaff_x29 + -0x80);
  lVar1 = *(long *)(unaff_x29 + -0x78);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
  FUN_100df5738(&stack0x000001d8);
  if (lVar2 == -0x8000000000000000) {
    if (lVar1 != 0) {
      _free(uVar6);
    }
    lVar2 = **(long **)(unaff_x19 + 0x80);
    **(long **)(unaff_x19 + 0x80) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      lVar2 = -0x8000000000000000;
LAB_10090eb44:
      _free(*(undefined8 *)(unaff_x19 + 0x68));
      goto LAB_10090eb4c;
    }
    *unaff_x24 = 1;
    lVar2 = -0x8000000000000000;
  }
  else {
    lVar3 = **(long **)(unaff_x19 + 0x80);
    **(long **)(unaff_x19 + 0x80) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    in_stack_00000008 = 0xffffffffffff80a5;
    unaff_x25 = 0x8000000000000005;
    if (*(long *)(unaff_x19 + 0x60) != 0) goto LAB_10090eb44;
LAB_10090eb4c:
    *unaff_x24 = 1;
    if (lVar2 == -0x7fffffffffffffff) {
      *unaff_x21 = 0x8000000000000071;
      uVar4 = 3;
      goto LAB_10090ebf0;
    }
  }
  FUN_100d5b420();
  if (lVar2 == -0x8000000000000000) {
    uVar5 = 0x8000000000000011;
    in_stack_00000008 = extraout_x9;
  }
  else {
    in_stack_00000098 = in_stack_00000198;
    in_stack_00000090 = in_stack_00000190;
    in_stack_000000a8 = in_stack_000001a8;
    in_stack_000000a0 = in_stack_000001a0;
    in_stack_000000b8 = in_stack_000001b8;
    in_stack_000000b0 = in_stack_000001b0;
    in_stack_000000c8 = in_stack_000001c8;
    in_stack_000000c0 = in_stack_000001c0;
    uVar5 = 0x8000000000000070;
  }
  unaff_x21[6] = in_stack_00000098;
  unaff_x21[5] = in_stack_00000090;
  unaff_x21[8] = in_stack_000000a8;
  unaff_x21[7] = in_stack_000000a0;
  unaff_x21[10] = in_stack_000000b8;
  unaff_x21[9] = in_stack_000000b0;
  *unaff_x21 = uVar5;
  unaff_x21[1] = lVar2;
  unaff_x21[2] = lVar1;
  unaff_x21[3] = uVar6;
  unaff_x21[4] = unaff_x25;
  unaff_x21[0xc] = in_stack_000000c8;
  unaff_x21[0xb] = in_stack_000000c0;
  uVar4 = 1;
  unaff_x21[0xd] = in_stack_00000008;
LAB_10090ebf0:
  *(undefined1 *)(unaff_x19 + 0xda8) = uVar4;
  return;
}

