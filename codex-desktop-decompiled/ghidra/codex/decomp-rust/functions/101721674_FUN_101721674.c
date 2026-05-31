
void FUN_101721674(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  byte bVar6;
  ulong unaff_x23;
  ulong uVar7;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined5 uStack0000000000000028;
  undefined3 uStack000000000000002d;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined7 uStack0000000000000060;
  undefined1 uStack0000000000000067;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  ulong in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  uStack0000000000000028 = 0x2d656c6966;
  uStack000000000000002d = 0x6e696c;
  uVar4 = unaff_x23 - 0x33;
  bVar6 = (byte)unaff_x22;
  if (unaff_x23 < 0x33) {
    _memcpy(unaff_x25 + 0x2d);
    uVar7 = unaff_x23 + 0xd;
    if (uVar7 == 0x3f) goto LAB_1017217ac;
LAB_1017216bc:
    *(undefined1 *)(unaff_x20 + uVar7) = 0;
    uVar7 = (ulong)((int)uVar7 + 1) & 0xff;
    uVar4 = 0x40 - uVar7;
    bVar2 = uVar4 <= unaff_x22;
    unaff_x22 = unaff_x22 - uVar4;
    if (bVar2) {
      unaff_x21 = unaff_x21 + uVar4;
      _memcpy(unaff_x20 + uVar7);
      in_stack_00000008 = in_stack_00000008 + 1;
      __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x25 + 8);
      bVar6 = (byte)unaff_x22 & 0x3f;
      if (0x3f < unaff_x22) goto LAB_101721800;
      goto LAB_10172181c;
    }
  }
  else {
    uVar1 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    *(undefined8 *)(unaff_x25 + 0x35) = param_2[1];
    *(undefined8 *)(unaff_x25 + 0x2d) = uVar1;
    *(undefined8 *)(unaff_x25 + 0x45) = uVar10;
    *(undefined8 *)(unaff_x25 + 0x3d) = uVar9;
    auVar8 = *(undefined1 (*) [16])(param_2 + 4);
    *(long *)(unaff_x25 + 0x55) = auVar8._8_8_;
    *(long *)(unaff_x25 + 0x4d) = auVar8._0_8_;
    *(undefined4 *)(unaff_x25 + 0x5c) = *(undefined4 *)((long)param_2 + 0x2f);
    in_stack_00000008 = 1;
    __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x25 + 8);
    uVar7 = uVar4 & 0x3f;
    if (0x3f < uVar4) {
      in_stack_00000008 = (uVar4 >> 6) + 1;
      __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x25 + 8,(long)param_2 + 0x33);
    }
    _memcpy();
    if (uVar7 != 0x3f) goto LAB_1017216bc;
LAB_1017217ac:
    uStack0000000000000067 = 0;
    in_stack_00000008 = in_stack_00000008 + 1;
    __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x25 + 8);
    if (0x3f < unaff_x22) {
      bVar6 = bVar6 & 0x3f;
LAB_101721800:
      in_stack_00000008 = in_stack_00000008 + (unaff_x22 >> 6);
      __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x25 + 8,unaff_x21);
LAB_10172181c:
      _memcpy();
      goto LAB_10172182c;
    }
    uVar7 = 0;
  }
  _memcpy(unaff_x20 + uVar7);
  bVar6 = (char)uVar7 + bVar6;
LAB_10172182c:
  in_stack_000000c8 = CONCAT17(uStack0000000000000067,uStack0000000000000060);
  in_stack_000000b8 = in_stack_00000050;
  in_stack_000000b0 = in_stack_00000048;
  in_stack_000000c0 = in_stack_00000058;
  in_stack_000000d0 = CONCAT71(in_stack_00000068._1_7_,bVar6);
  in_stack_00000078 = in_stack_00000010;
  in_stack_00000070 = in_stack_00000008;
  in_stack_00000088 = in_stack_00000020;
  in_stack_00000080 = in_stack_00000018;
  in_stack_00000098 = CONCAT35(in_stack_00000030._5_3_,0x31762d65);
  in_stack_00000090 = CONCAT35(uStack000000000000002d,uStack0000000000000028);
  in_stack_000000a8 = in_stack_00000040;
  in_stack_000000a0 = in_stack_00000038;
  puVar3 = &stack0x00000090;
  uVar5 = (uint)in_stack_000000d0;
  uVar7 = (ulong)bVar6;
  uVar4 = in_stack_00000008 << 9 | uVar7 << 3;
  in_stack_000000e8 = SUB168(*(undefined1 (*) [16])(unaff_x25 + 8),8);
  in_stack_000000e0 = SUB168(*(undefined1 (*) [16])(unaff_x25 + 8),0);
  *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x25 + 0x18);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  *(undefined1 *)((long)puVar3 + uVar7) = 0x80;
  if (((uVar5 & 0xff) == 0x3f) ||
     (_bzero((long)&stack0x00000090 + uVar7 + 1,uVar7 ^ 0x3f), (uVar7 ^ 0x38) < 8)) {
    __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x29 + -0xb0,puVar3,1);
    in_stack_00000118 = 0;
    in_stack_00000110 = 0;
    in_stack_00000128 = 0;
    in_stack_00000120 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    *(undefined8 *)(unaff_x29 + -0x60) = 0;
    *(ulong *)(unaff_x29 + -0x58) = uVar4;
    puVar3 = (undefined8 *)(unaff_x29 + -0x90);
    uVar4 = in_stack_000000c8;
  }
  in_stack_000000c8 = uVar4;
  __ZN4sha18compress8compress17hd7531616bdc795c7E(unaff_x29 + -0xb0,puVar3,1);
  uVar5 = (*(uint *)(unaff_x29 + -0xa0) & 0xff00ff00) >> 8 |
          (*(uint *)(unaff_x29 + -0xa0) & 0xff00ff) << 8;
  auVar8._8_8_ = in_stack_000000e8;
  auVar8._0_8_ = in_stack_000000e0;
  auVar8 = NEON_rev32(auVar8,1);
  in_stack_00000078 = auVar8._8_8_;
  in_stack_00000070 = auVar8._0_8_;
  in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar5 >> 0x10 | uVar5 << 0x10);
  *(long **)(unaff_x29 + -0x90) = &stack0x00000070;
  *(undefined **)(unaff_x29 + -0x88) = &DAT_1017210d8;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s__108b1bd74,unaff_x29 + -0x90);
  return;
}

