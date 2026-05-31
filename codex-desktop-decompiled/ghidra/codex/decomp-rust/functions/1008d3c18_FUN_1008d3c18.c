
void FUN_1008d3c18(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  undefined1 *unaff_x22;
  long lVar7;
  long unaff_x25;
  undefined8 uVar8;
  long lVar9;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000120,s__failed_to_update_thread_setting_108aca710,unaff_x29 + -0x70);
  uVar5 = in_stack_00000130;
  lVar7 = in_stack_00000128;
  lVar1 = in_stack_00000120;
  FUN_100df5738(&stack0x00000260);
  if (lVar1 == -0x8000000000000000) {
    if (lVar7 != 0) {
      _free(uVar5);
    }
    if ((*(byte *)(unaff_x20 + 0x2f1) & 1) != 0) {
      func_0x000100e2b238(unaff_x20 + 0x1018);
    }
    *(undefined1 *)(unaff_x20 + 0x2f1) = 0;
    lVar1 = **(long **)(unaff_x20 + 0x2e8);
    **(long **)(unaff_x20 + 0x2e8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x2e8);
    }
    if (*(long *)(unaff_x20 + 0x200) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x208));
    }
    *(undefined2 *)(unaff_x20 + 0x2f6) = 0;
    *(undefined4 *)(unaff_x20 + 0x2f2) = 0;
    uStack0000000000000028 = *(undefined8 *)(unaff_x29 + -0xa8);
    uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0xb0);
    uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -0x98);
    uStack0000000000000030 = *(undefined8 *)(unaff_x29 + -0xa0);
    uStack0000000000000048 = *(undefined8 *)(unaff_x29 + -0x88);
    uStack0000000000000040 = *(undefined8 *)(unaff_x29 + -0x90);
    uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x78);
    uStack0000000000000050 = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined1 *)(unaff_x20 + 0x2f0) = 1;
    lVar1 = -0x8000000000000000;
    uVar8 = uVar5;
    lVar9 = lVar7;
  }
  else {
    uVar8 = 0x8000000000000005;
    lVar9 = -0x7f5b;
    *(undefined1 *)(unaff_x20 + 0x2f1) = 0;
    lVar2 = **(long **)(unaff_x20 + 0x2e8);
    **(long **)(unaff_x20 + 0x2e8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x2e8);
    }
    in_stack_00000018 = uVar5;
    in_stack_00000010 = lVar7;
    if (*(long *)(unaff_x20 + 0x200) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x208));
    }
    if ((((*(byte *)(unaff_x20 + 0x2f7) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x218) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x218) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x220));
    }
    if ((((*(byte *)(unaff_x20 + 0x2f6) & 1) != 0) &&
        (lVar7 = *(long *)(unaff_x20 + 0x2b8), lVar7 != -0x7ffffffffffffffd)) &&
       (-0x7ffffffffffffffe < lVar7)) {
      lVar4 = *(long *)(unaff_x20 + 0x2c0);
      lVar2 = *(long *)(unaff_x20 + 0x2c8);
      if (lVar2 != 0) {
        puVar6 = (undefined8 *)(lVar4 + 8);
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar4);
      }
    }
    if ((((*(byte *)(unaff_x20 + 0x2f5) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x230) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x230) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x238));
    }
    if ((((*(byte *)(unaff_x20 + 0x2f4) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x248) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x248) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x250));
    }
    if ((((*(byte *)(unaff_x20 + 0x2f3) & 1) != 0) &&
        (lVar7 = *(long *)(unaff_x20 + 0x2a0), lVar7 != -0x7fffffffffffffff)) &&
       ((lVar7 != -0x8000000000000000 && (lVar7 != 0)))) {
      _free(*(undefined8 *)(unaff_x20 + 0x2a8));
    }
    if (((*(byte *)(unaff_x20 + 0x2f2) & 1) != 0) &&
       (*(long *)(unaff_x20 + 0x260) != -0x8000000000000000)) {
      if (*(long *)(unaff_x20 + 0x260) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x268));
      }
      if ((*(long *)(unaff_x20 + 0x278) != -0x8000000000000000) &&
         (*(long *)(unaff_x20 + 0x278) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x280));
      }
    }
    *(undefined2 *)(unaff_x20 + 0x2f6) = 0;
    *(undefined4 *)(unaff_x20 + 0x2f2) = 0;
    uStack0000000000000028 = *(undefined8 *)(unaff_x29 + -0xa8);
    uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0xb0);
    uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -0x98);
    uStack0000000000000030 = *(undefined8 *)(unaff_x29 + -0xa0);
    uStack0000000000000048 = *(undefined8 *)(unaff_x29 + -0x88);
    uStack0000000000000040 = *(undefined8 *)(unaff_x29 + -0x90);
    uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x78);
    uStack0000000000000050 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x22 = 1;
    if (lVar1 == -0x7fffffffffffffff) {
      *unaff_x21 = 0x8000000000000071;
      uVar3 = 3;
      goto LAB_1008d3e5c;
    }
  }
  FUN_100d550d8();
  if (lVar1 == -0x8000000000000000) {
    uVar5 = 0x800000000000000d;
  }
  else {
    in_stack_000000a8 = uStack0000000000000028;
    in_stack_000000a0 = uStack0000000000000020;
    in_stack_000000b8 = uStack0000000000000038;
    in_stack_000000b0 = uStack0000000000000030;
    in_stack_000000c8 = uStack0000000000000048;
    in_stack_000000c0 = uStack0000000000000040;
    in_stack_000000d8 = uStack0000000000000058;
    in_stack_000000d0 = uStack0000000000000050;
    uVar5 = 0x8000000000000070;
  }
  unaff_x21[6] = in_stack_000000a8;
  unaff_x21[5] = in_stack_000000a0;
  unaff_x21[8] = in_stack_000000b8;
  unaff_x21[7] = in_stack_000000b0;
  unaff_x21[10] = in_stack_000000c8;
  unaff_x21[9] = in_stack_000000c0;
  *unaff_x21 = uVar5;
  unaff_x21[1] = lVar1;
  unaff_x21[2] = in_stack_00000010;
  unaff_x21[3] = in_stack_00000018;
  unaff_x21[4] = uVar8;
  unaff_x21[0xc] = in_stack_000000d8;
  unaff_x21[0xb] = in_stack_000000d0;
  uVar3 = 1;
  unaff_x21[0xd] = lVar9;
LAB_1008d3e5c:
  *(undefined1 *)(unaff_x25 + 0xe66) = uVar3;
  return;
}

