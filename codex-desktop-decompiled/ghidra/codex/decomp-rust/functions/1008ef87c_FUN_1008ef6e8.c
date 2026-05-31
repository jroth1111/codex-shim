
void FUN_1008ef6e8(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  long lVar3;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000048,s_invalid_thread_id__108aca2c9,unaff_x29 + -0x60);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x21 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x21 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x21 + 0x50);
  if (in_stack_00000048 == -0x8000000000000000) {
    *(long *)(unaff_x19 + 0x18) = in_stack_00000050;
    *(long *)(unaff_x19 + 0x20) = in_stack_00000058;
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x22 + 0x188) + 0x10;
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0xd0) = 0;
    FUN_10050e55c(&stack0x00000048,unaff_x19 + 0x28);
    lVar2 = -0x7ffffffffffffffb;
    if (in_stack_00000048 == -0x7fffffffffffffdf) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar1 = 3;
      goto LAB_1008ef8dc;
    }
    in_stack_00000148 = *(undefined8 *)(unaff_x21 + 0x68);
    in_stack_00000140 = *(undefined8 *)(unaff_x21 + 0x60);
    in_stack_00000158 = *(undefined8 *)(unaff_x21 + 0x78);
    in_stack_00000150 = *(undefined8 *)(unaff_x21 + 0x70);
    in_stack_00000168 = *(undefined8 *)(unaff_x21 + 0x88);
    in_stack_00000160 = *(undefined8 *)(unaff_x21 + 0x80);
    in_stack_00000170 = in_stack_000000d8;
    in_stack_00000108 = in_stack_00000070;
    in_stack_00000100 = in_stack_00000068;
    in_stack_00000118 = in_stack_00000080;
    in_stack_00000110 = in_stack_00000078;
    in_stack_00000128 = *(undefined8 *)(unaff_x21 + 0x48);
    in_stack_00000120 = *(undefined8 *)(unaff_x21 + 0x40);
    in_stack_00000138 = *(undefined8 *)(unaff_x21 + 0x58);
    in_stack_00000130 = *(undefined8 *)(unaff_x21 + 0x50);
    in_stack_000000e8 = in_stack_00000050;
    in_stack_000000e0 = in_stack_00000048;
    in_stack_000000f8 = in_stack_00000060;
    in_stack_000000f0 = in_stack_00000058;
    if ((((*(char *)(unaff_x19 + 0xd0) == '\x03') && (*(char *)(unaff_x19 + 200) == '\x03')) &&
        (*(char *)(unaff_x19 + 0xc0) == '\x03')) && (*(char *)(unaff_x19 + 0xb8) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x78);
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x80) + 0x18))(*(undefined8 *)(unaff_x19 + 0x88));
      }
    }
    if (in_stack_000000e0 != -0x7fffffffffffffe0) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000048,s_thread_not_found__108aca2df);
      lVar9 = in_stack_00000058;
      lVar7 = in_stack_00000050;
      lVar3 = in_stack_00000048;
      FUN_100df5738(&stack0x000000e0);
      in_stack_000000e8 = lVar7;
      if (lVar3 != -0x8000000000000000) goto LAB_1008ef8b8;
    }
    lVar2 = in_stack_000000e8;
    lVar7 = *(long *)(unaff_x19 + 0x18);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    lVar3 = -0x8000000000000000;
  }
  else {
    lVar2 = -0x7ffffffffffffffb;
    *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000070;
    *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000068;
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000080;
    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000078;
    *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
    lVar7 = in_stack_00000050;
    lVar9 = in_stack_00000058;
    lVar3 = in_stack_00000048;
  }
LAB_1008ef8b8:
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar7;
  unaff_x20[2] = lVar9;
  unaff_x20[3] = lVar2;
  lVar2 = *(long *)(unaff_x29 + -0xc0);
  lVar9 = *(long *)(unaff_x29 + -0xa8);
  lVar7 = *(long *)(unaff_x29 + -0xb0);
  unaff_x20[5] = *(long *)(unaff_x29 + -0xb8);
  unaff_x20[4] = lVar2;
  unaff_x20[7] = lVar9;
  unaff_x20[6] = lVar7;
  lVar2 = *(long *)(unaff_x29 + -0xa0);
  lVar9 = *(long *)(unaff_x29 + -0x88);
  lVar7 = *(long *)(unaff_x29 + -0x90);
  unaff_x20[9] = *(long *)(unaff_x29 + -0x98);
  unaff_x20[8] = lVar2;
  unaff_x20[0xb] = lVar9;
  unaff_x20[10] = lVar7;
  uVar1 = 1;
  unaff_x20[0xc] = -0x7f58;
LAB_1008ef8dc:
  *(undefined1 *)(unaff_x19 + 0xd8) = uVar1;
  return;
}

