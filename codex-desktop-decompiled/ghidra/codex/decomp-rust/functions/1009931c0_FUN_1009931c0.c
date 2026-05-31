
void FUN_1009931c0(void)

{
  long lVar1;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 extraout_x10_03;
  undefined8 uVar2;
  undefined1 extraout_w11;
  undefined1 extraout_w11_00;
  undefined1 extraout_w11_01;
  undefined1 extraout_w11_02;
  undefined1 extraout_w11_03;
  undefined1 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x24;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000cb0;
  undefined8 in_stack_00000cb8;
  undefined8 in_stack_00000cc0;
  undefined8 in_stack_00000cd0;
  undefined8 in_stack_00000cd8;
  undefined8 in_stack_00000ce0;
  undefined8 in_stack_00000ce8;
  undefined8 in_stack_00000cf0;
  undefined8 in_stack_00000cf8;
  undefined8 in_stack_00000d00;
  undefined8 in_stack_00000d08;
  undefined8 in_stack_00000d10;
  undefined8 in_stack_00000d18;
  undefined8 in_stack_00000d20;
  undefined7 in_stack_00000d28;
  undefined1 in_stack_00000d2f;
  undefined7 in_stack_00000d30;
  undefined8 in_stack_00000ed0;
  undefined8 in_stack_00000ed8;
  undefined8 in_stack_00000ee0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000ed0,s_Invalid_configuration__108acc6ee,&stack0x000009a0);
  FUN_100de3b58(&stack0x00002950);
  if ((*(byte *)(unaff_x19 + 0xa31) & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0xb40);
    lVar5 = *(long *)(unaff_x19 + 0xb48) + 1;
    lVar6 = lVar4;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e01ef4(lVar6);
      lVar6 = lVar6 + 200;
    }
    if (*(long *)(unaff_x19 + 0xb38) != 0) {
      _free(lVar4);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xa31) = 0;
  lVar5 = *(long *)(unaff_x19 + 0xb28);
  lVar6 = *(long *)(unaff_x19 + 0xb30);
  if (lVar6 != 0) {
    lVar4 = 0;
    do {
      plVar8 = (long *)(lVar5 + lVar4 * 0x18);
      lVar1 = plVar8[1];
      lVar9 = plVar8[2];
      if (lVar9 != 0) {
        puVar7 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*plVar8 != 0) {
        _free(lVar1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar6);
  }
  if (*(long *)(unaff_x19 + 0xb20) != 0) {
    _free(lVar5);
  }
  FUN_100ddb5bc(unaff_x19 + 0xba8);
  if (*(long *)(unaff_x19 + 0xa38) != 7) {
    FUN_100e05a40(unaff_x19 + 0xa38);
  }
  FUN_100e05b5c(unaff_x19 + 0xd0);
  uVar2 = extraout_x10;
  uVar3 = extraout_w11;
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xc0));
    uVar2 = extraout_x10_00;
    uVar3 = extraout_w11_00;
  }
  *(undefined1 *)(unaff_x19 + 0xa34) = 0;
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xa8));
    uVar2 = extraout_x10_01;
    uVar3 = extraout_w11_01;
  }
  if ((*(byte *)(unaff_x19 + 0xa32) & 1) != 0) {
    FUN_100ca4b40(unaff_x19 + 0x88);
    uVar2 = extraout_x10_02;
    uVar3 = extraout_w11_02;
  }
  *(undefined1 *)(unaff_x19 + 0xa32) = 0;
  if ((*(long *)(unaff_x19 + 0x70) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x70) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
    uVar2 = extraout_x10_03;
    uVar3 = extraout_w11_03;
  }
  if (((*(long *)(unaff_x19 + 0x58) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x58) != 0))
     && ((*(byte *)(unaff_x19 + 0xa33) & 1) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x60));
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000008._4_1_;
  }
  *(undefined1 *)(unaff_x19 + 0xa33) = 0;
  *unaff_x20 = 8;
  unaff_x20[1] = 2;
  unaff_x20[2] = in_stack_00000ed0;
  unaff_x20[3] = in_stack_00000ed8;
  unaff_x20[4] = in_stack_00000ee0;
  *(undefined1 *)(unaff_x20 + 5) = 2;
  *(undefined8 *)((long)unaff_x20 + 0x31) = in_stack_00000d18;
  *(undefined8 *)((long)unaff_x20 + 0x29) = in_stack_00000d10;
  *(ulong *)((long)unaff_x20 + 0x41) = CONCAT17(in_stack_00000d2f,in_stack_00000d28);
  *(undefined8 *)((long)unaff_x20 + 0x39) = in_stack_00000d20;
  unaff_x20[9] = CONCAT71(in_stack_00000d30,in_stack_00000d2f);
  unaff_x20[10] = in_stack_00000058;
  unaff_x20[0xb] = in_stack_00000050;
  unaff_x20[0xc] = in_stack_00000028;
  unaff_x20[0xd] = unaff_x24;
  unaff_x20[0x13] = in_stack_00000cf8;
  unaff_x20[0x12] = in_stack_00000cf0;
  unaff_x20[0x15] = in_stack_00000d08;
  unaff_x20[0x14] = in_stack_00000d00;
  unaff_x20[0xf] = in_stack_00000cd8;
  unaff_x20[0xe] = in_stack_00000cd0;
  unaff_x20[0x11] = in_stack_00000ce8;
  unaff_x20[0x10] = in_stack_00000ce0;
  unaff_x20[0x16] = 0x8000000000000000;
  unaff_x20[0x17] = uVar2;
  unaff_x20[0x18] = 0x8000000000000000;
  unaff_x20[0x1a] = in_stack_00000cb8;
  unaff_x20[0x19] = in_stack_00000cb0;
  unaff_x20[0x1b] = in_stack_00000cc0;
  *(undefined1 *)(unaff_x20 + 0x1c) = uVar3;
  *(undefined1 *)(unaff_x19 + 0xa30) = 1;
  return;
}

