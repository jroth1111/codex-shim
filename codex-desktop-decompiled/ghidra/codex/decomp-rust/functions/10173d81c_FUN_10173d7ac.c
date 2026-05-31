
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10173d7ac(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 (*unaff_x21) [16];
  ulong uVar8;
  undefined1 auVar9 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  uint uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined1 in_stack_000000a8;
  uint in_stack_000000c0;
  undefined8 *in_stack_000000d0;
  undefined *in_stack_000000d8;
  undefined8 in_stack_00000100;
  ulong in_stack_00000108;
  undefined8 *in_stack_00000110;
  undefined *in_stack_00000118;
  undefined8 *in_stack_00000120;
  undefined *in_stack_00000128;
  undefined1 *in_stack_00000130;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000110,s_repo__108adc75a,&stack0x00000048);
  in_stack_00000038 = SUB168(unaff_x21[6],8);
  in_stack_00000030 = SUB168(unaff_x21[6],0);
  in_stack_00000040 = in_stack_00000120;
  in_stack_00000110 = &stack0x00000030;
  in_stack_00000118 = &DAT_101762220;
  in_stack_00000120 = &stack0x00000018;
  in_stack_00000128 = &DAT_101762220;
  in_stack_00000130 = &stack0x00000008;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000048,s_____108adc762,&stack0x00000110);
  uVar7 = in_stack_00000058;
  lVar3 = in_stack_00000050;
  lVar2 = in_stack_00000048;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000068 = 0;
  in_stack_00000048 = 0;
  uStack0000000000000060 = 0xc3d2e1f0;
  lVar5 = in_stack_00000050;
  in_stack_00000050 = (long)UNK_108c84140;
  uVar4 = UNK_108c84140._8_8_;
  if (0x3f < in_stack_00000058) {
    in_stack_00000048 = in_stack_00000058 >> 6;
    in_stack_00000058 = UNK_108c84140._8_8_;
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&stack0x00000050,lVar3);
    lVar5 = lVar3 + (uVar7 & 0x7fffffffffffffc0);
    uVar7 = uVar7 & 0x3f;
    uVar4 = in_stack_00000058;
  }
  in_stack_00000058 = uVar4;
  _memcpy(&stack0x00000068,lVar5,uVar7);
  in_stack_000000a8 = (undefined1)uVar7;
  *(undefined8 *)(unaff_x21[10] + 8) = in_stack_00000090;
  *(undefined8 *)unaff_x21[10] = in_stack_00000088;
  *(undefined8 *)(unaff_x21[0xb] + 8) = in_stack_000000a0;
  *(undefined8 *)unaff_x21[0xb] = in_stack_00000098;
  *(long *)(unaff_x21[6] + 8) = in_stack_00000050;
  *(ulong *)unaff_x21[6] = in_stack_00000048;
  *(ulong *)(unaff_x21[7] + 8) = CONCAT44(uStack0000000000000064,uStack0000000000000060);
  *(ulong *)unaff_x21[7] = in_stack_00000058;
  *(undefined8 *)(unaff_x21[8] + 8) = in_stack_00000070;
  *(undefined8 *)unaff_x21[8] = in_stack_00000068;
  *(undefined8 *)(unaff_x21[9] + 8) = in_stack_00000080;
  *(undefined8 *)unaff_x21[9] = in_stack_00000078;
  uVar8 = uVar7 & 0xff;
  uVar6 = (long)in_stack_00000110 << 9 | uVar8 << 3;
  *(ulong *)(*unaff_x21 + 8) = in_stack_00000058;
  *(long *)*unaff_x21 = in_stack_00000050;
  in_stack_000000c0 = uStack0000000000000060;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  *(undefined1 *)((long)&stack0x00000130 + uVar8) = 0x80;
  if ((((uint)uVar7 & 0xff) == 0x3f) ||
     (_bzero((long)&stack0x00000130 + uVar8 + 1,uVar8 ^ 0x3f), (uVar8 ^ 0x38) < 8)) {
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&stack0x000000b0,&stack0x00000130,1);
    *(undefined8 *)(unaff_x21[3] + 8) = 0;
    *(undefined8 *)unaff_x21[3] = 0;
    *(undefined8 *)(unaff_x21[4] + 8) = 0;
    *(undefined8 *)unaff_x21[4] = 0;
    *(undefined8 *)(unaff_x21[2] + 8) = 0;
    *(undefined8 *)unaff_x21[2] = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = uVar6 >> 0x20 | uVar6 << 0x20;
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&stack0x000000b0,&stack0x000000d0,1);
  }
  else {
    __ZN4sha18compress8compress17hd7531616bdc795c7E(&stack0x000000b0,&stack0x00000130,1);
  }
  uVar1 = (in_stack_000000c0 & 0xff00ff00) >> 8 | (in_stack_000000c0 & 0xff00ff) << 8;
  auVar9 = NEON_rev32(*unaff_x21,1);
  *(long *)(unaff_x21[6] + 8) = auVar9._8_8_;
  *(long *)unaff_x21[6] = auVar9._0_8_;
  in_stack_00000120 = (undefined8 *)CONCAT44(in_stack_00000120._4_4_,uVar1 >> 0x10 | uVar1 << 0x10);
  in_stack_000000d0 = &stack0x00000110;
  in_stack_000000d8 = &DAT_1017210d8;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s__108b1bd74,&stack0x000000d0);
  if (lVar2 != 0) {
    _free(lVar3);
  }
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000018 != 0) {
    _free(in_stack_00000020);
  }
  return;
}

