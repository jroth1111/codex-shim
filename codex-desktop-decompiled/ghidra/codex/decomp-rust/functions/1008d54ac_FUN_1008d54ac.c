
void FUN_1008d54ac(void)

{
  long lVar1;
  undefined1 extraout_w10;
  undefined1 extraout_w10_00;
  undefined1 uVar2;
  undefined4 extraout_w10_01;
  undefined4 extraout_w10_02;
  undefined4 extraout_w10_03;
  undefined4 extraout_w10_04;
  undefined4 extraout_w10_05;
  undefined4 extraout_w10_06;
  undefined4 extraout_w10_07;
  undefined4 extraout_w10_08;
  undefined4 extraout_w10_09;
  undefined4 extraout_w10_10;
  undefined4 extraout_w10_11;
  undefined4 extraout_w10_12;
  undefined4 extraout_w10_13;
  undefined4 extraout_w10_14;
  undefined4 extraout_w10_15;
  undefined4 uVar3;
  undefined4 extraout_w10_16;
  undefined1 extraout_w11;
  undefined1 extraout_w11_00;
  undefined1 uVar4;
  undefined4 extraout_w11_01;
  undefined4 extraout_w11_02;
  undefined4 extraout_w11_03;
  undefined4 extraout_w11_04;
  undefined4 extraout_w11_05;
  undefined4 extraout_w11_06;
  undefined4 extraout_w11_07;
  undefined4 extraout_w11_08;
  undefined4 extraout_w11_09;
  undefined4 extraout_w11_10;
  undefined4 extraout_w11_11;
  undefined4 extraout_w11_12;
  undefined4 extraout_w11_13;
  undefined4 extraout_w11_14;
  undefined4 extraout_w11_15;
  undefined4 uVar5;
  undefined4 extraout_w11_16;
  undefined1 extraout_w12;
  undefined1 extraout_w12_00;
  undefined1 uVar6;
  undefined4 extraout_w12_01;
  undefined4 extraout_w12_02;
  undefined4 extraout_w12_03;
  undefined4 extraout_w12_04;
  undefined4 extraout_w12_05;
  undefined4 extraout_w12_06;
  undefined4 extraout_w12_07;
  undefined4 extraout_w12_08;
  undefined4 extraout_w12_09;
  undefined4 extraout_w12_10;
  undefined4 extraout_w12_11;
  undefined4 extraout_w12_12;
  undefined4 extraout_w12_13;
  undefined4 extraout_w12_14;
  undefined4 extraout_w12_15;
  undefined4 uVar7;
  undefined4 extraout_w12_16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  undefined8 *unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_00002970;
  undefined8 in_stack_00002978;
  undefined8 in_stack_00002980;
  undefined8 in_stack_000078f0;
  undefined8 in_stack_000078f8;
  undefined8 in_stack_00007900;
  undefined8 in_stack_00007908;
  undefined8 in_stack_00007910;
  undefined8 in_stack_00007920;
  undefined8 in_stack_00007928;
  undefined8 in_stack_00007930;
  undefined8 in_stack_00007938;
  undefined8 in_stack_00007940;
  undefined8 in_stack_00007948;
  undefined8 in_stack_00007950;
  undefined8 in_stack_00007960;
  undefined8 in_stack_00007968;
  undefined8 in_stack_00007970;
  undefined8 in_stack_00007978;
  undefined8 in_stack_00007980;
  undefined8 in_stack_00007988;
  undefined8 in_stack_00007990;
  undefined8 in_stack_00007998;
  undefined8 in_stack_000079a0;
  undefined8 in_stack_000079a8;
  undefined8 in_stack_000079b0;
  undefined8 in_stack_000079c0;
  undefined8 in_stack_000079c8;
  undefined8 in_stack_000079d0;
  undefined8 in_stack_000079d8;
  undefined8 in_stack_000079e0;
  undefined8 in_stack_000079e8;
  undefined8 in_stack_000079f0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002970,s_0_runtime_workspace_roots_missin_108aca735,&stack0x00000420);
  uVar3 = extraout_w10_01;
  uVar5 = extraout_w11_01;
  uVar7 = extraout_w12_01;
  if (unaff_x23 != 0) {
    unaff_x24 = (undefined8 *)(unaff_x22 + 8);
    do {
      if (unaff_x24[-1] != 0) {
        _free(*unaff_x24);
        uVar3 = extraout_w10_02;
        uVar5 = extraout_w11_02;
        uVar7 = extraout_w12_02;
      }
      unaff_x24 = unaff_x24 + 3;
      unaff_x23 = unaff_x23 + -1;
    } while (unaff_x23 != 0);
  }
  if (unaff_x21 != 0) {
    _free();
    uVar3 = extraout_w10_03;
    uVar5 = extraout_w11_03;
    uVar7 = extraout_w12_03;
  }
  if (*(long *)(unaff_x19 + 0x200) != -0x8000000000000000) {
    FUN_100e20dec(unaff_x19 + 0x200);
    uVar3 = extraout_w10_04;
    uVar5 = extraout_w11_04;
    uVar7 = extraout_w12_04;
  }
  lVar8 = *(long *)(unaff_x19 + 0x1e8);
  if (lVar8 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x19 + 0x1f0);
    lVar9 = *(long *)(unaff_x19 + 0x1f8);
    if (lVar9 != 0) {
      unaff_x24 = (undefined8 *)(lVar1 + 8);
      do {
        if (unaff_x24[-1] != 0) {
          _free(*unaff_x24);
          uVar3 = extraout_w10_05;
          uVar5 = extraout_w11_05;
          uVar7 = extraout_w12_05;
        }
        unaff_x24 = unaff_x24 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar8 != 0) {
      _free(lVar1);
      uVar3 = extraout_w10_06;
      uVar5 = extraout_w11_06;
      uVar7 = extraout_w12_06;
    }
  }
  if (*(long *)(unaff_x19 + 0x1a8) != -0x8000000000000000) {
    if (*(long *)(unaff_x19 + 0x1a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1b0));
      uVar3 = extraout_w10_07;
      uVar5 = extraout_w11_07;
      uVar7 = extraout_w12_07;
    }
    if ((*(long *)(unaff_x19 + 0x1c0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x1c0) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x1c8));
      uVar3 = extraout_w10_08;
      uVar5 = extraout_w11_08;
      uVar7 = extraout_w12_08;
    }
  }
  *(undefined1 *)(unaff_x19 + 999) = 0;
  if (((*(byte *)(unaff_x19 + 0x3e2) & 1) != 0) && (in_stack_00000090 != -0x8000000000000000)) {
    if (in_stack_00000090 != 0) {
      _free(in_stack_00000098);
      uVar3 = extraout_w10_09;
      uVar5 = extraout_w11_09;
      uVar7 = extraout_w12_09;
    }
    if ((in_stack_000000a8 != -0x8000000000000000) && (in_stack_000000a8 != 0)) {
      _free(in_stack_000000b0);
      uVar3 = extraout_w10_10;
      uVar5 = extraout_w11_10;
      uVar7 = extraout_w12_10;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x3e2) = 0;
  lVar8 = *(long *)(unaff_x19 + 400);
  if (((lVar8 != -0x7fffffffffffffff) && (lVar8 != -0x8000000000000000)) && (lVar8 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x198));
    uVar3 = extraout_w10_11;
    uVar5 = extraout_w11_11;
    uVar7 = extraout_w12_11;
  }
  *(undefined1 *)(unaff_x19 + 1000) = 0;
  if ((*(long *)(unaff_x19 + 0x178) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x178) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x180));
    uVar3 = extraout_w10_12;
    uVar5 = extraout_w11_12;
    uVar7 = extraout_w12_12;
  }
  *(undefined1 *)(unaff_x19 + 0x3e9) = 0;
  if (((*(long *)(unaff_x19 + 0x160) != -0x8000000000000000) &&
      ((*(byte *)(unaff_x19 + 0x3e3) & 1) != 0)) && (*(long *)(unaff_x19 + 0x160) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x168));
    uVar3 = extraout_w10_13;
    uVar5 = extraout_w11_13;
    uVar7 = extraout_w12_13;
  }
  *(undefined1 *)(unaff_x19 + 0x3e3) = 0;
  if ((((*(byte *)(unaff_x19 + 0x3e4) & 1) != 0) &&
      (lVar8 = *(long *)(unaff_x19 + 0x140), lVar8 != -0x7ffffffffffffffd)) &&
     (-0x7ffffffffffffffe < lVar8)) {
    lVar1 = *(long *)(unaff_x19 + 0x148);
    lVar9 = *(long *)(unaff_x19 + 0x150);
    if (lVar9 != 0) {
      unaff_x24 = (undefined8 *)(lVar1 + 8);
      do {
        if (unaff_x24[-1] != 0) {
          _free(*unaff_x24);
          uVar3 = extraout_w10_14;
          uVar5 = extraout_w11_14;
          uVar7 = extraout_w12_14;
        }
        unaff_x24 = unaff_x24 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar8 != 0) {
      _free(lVar1);
      uVar3 = extraout_w10_15;
      uVar5 = extraout_w11_15;
      uVar7 = extraout_w12_15;
    }
  }
  uVar4 = (undefined1)uVar5;
  uVar6 = (undefined1)uVar7;
  uVar2 = (undefined1)uVar3;
  *(undefined1 *)(unaff_x19 + 0x3e4) = 0;
  if (((*(byte *)(unaff_x19 + 0x3e5) & 1) != 0) && (in_stack_00000070 != -0x8000000000000000)) {
    if (in_stack_00000080 != 0) {
      unaff_x24 = (undefined8 *)(in_stack_00000078 + 8);
      do {
        if (unaff_x24[-1] != 0) {
          _free(*unaff_x24);
          uVar3 = extraout_w10_16;
          uVar5 = extraout_w11_16;
          uVar7 = extraout_w12_16;
        }
        uVar4 = (undefined1)uVar5;
        uVar6 = (undefined1)uVar7;
        uVar2 = (undefined1)uVar3;
        unaff_x24 = unaff_x24 + 3;
        in_stack_00000080 = in_stack_00000080 + -1;
      } while (in_stack_00000080 != 0);
    }
    if (in_stack_00000070 != 0) {
      _free(in_stack_00000078);
      uVar2 = extraout_w10;
      uVar6 = extraout_w12;
      uVar4 = extraout_w11;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x3e5) = 0;
  if (*(long *)(unaff_x19 + 0x128) != -0x8000000000000000 && *(long *)(unaff_x19 + 0x128) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x130));
    uVar2 = extraout_w10_00;
    uVar6 = extraout_w12_00;
    uVar4 = extraout_w11_00;
  }
  *(undefined1 *)(unaff_x19 + 0x3ea) = 0;
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = in_stack_00002970;
  unaff_x20[2] = in_stack_00002978;
  unaff_x20[3] = in_stack_00002980;
  unaff_x20[4] = in_stack_00000068;
  unaff_x20[5] = in_stack_00000040;
  unaff_x20[7] = in_stack_000079e8;
  unaff_x20[6] = in_stack_000079e0;
  unaff_x20[8] = in_stack_000079f0;
  unaff_x20[10] = in_stack_000079c8;
  unaff_x20[9] = in_stack_000079c0;
  unaff_x20[0xc] = in_stack_000079d8;
  unaff_x20[0xb] = in_stack_000079d0;
  unaff_x20[0xd] = 0xffffffffffff80a5;
  unaff_x20[0xe] = unaff_x24;
  unaff_x20[0x11] = in_stack_000079b0;
  unaff_x20[0x10] = in_stack_000079a8;
  unaff_x20[0xf] = in_stack_000079a0;
  unaff_x20[0x13] = in_stack_00007968;
  unaff_x20[0x12] = in_stack_00007960;
  unaff_x20[0x15] = in_stack_00007978;
  unaff_x20[0x14] = in_stack_00007970;
  unaff_x20[0x17] = in_stack_00007988;
  unaff_x20[0x16] = in_stack_00007980;
  unaff_x20[0x19] = in_stack_00007998;
  unaff_x20[0x18] = in_stack_00007990;
  unaff_x20[0x1b] = in_stack_00007948;
  unaff_x20[0x1a] = in_stack_00007940;
  unaff_x20[0x1c] = in_stack_00007950;
  unaff_x20[0x20] = in_stack_00007938;
  unaff_x20[0x1f] = in_stack_00007930;
  unaff_x20[0x1e] = in_stack_00007928;
  unaff_x20[0x1d] = in_stack_00007920;
  unaff_x20[0x25] = in_stack_00007910;
  unaff_x20[0x22] = in_stack_000078f8;
  unaff_x20[0x21] = in_stack_000078f0;
  unaff_x20[0x24] = in_stack_00007908;
  unaff_x20[0x23] = in_stack_00007900;
  *(undefined1 *)(unaff_x20 + 0x26) = uVar2;
  *(undefined1 *)((long)unaff_x20 + 0x131) = 3;
  *(undefined1 *)((long)unaff_x20 + 0x132) = uVar6;
  *(undefined1 *)((long)unaff_x20 + 0x133) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x27) = *(undefined1 *)(unaff_x26 + 0x32c);
  *(undefined4 *)((long)unaff_x20 + 0x134) = *(undefined4 *)(unaff_x26 + 0x328);
  *(undefined1 *)((long)unaff_x20 + 0x139) = 0;
  *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
  return;
}

