
/* WARNING: Removing unreachable block (ram,0x00010096e61c) */
/* WARNING: Removing unreachable block (ram,0x00010096e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010096e6d0) */
/* WARNING: Removing unreachable block (ram,0x00010096e6d8) */
/* WARNING: Removing unreachable block (ram,0x00010096e6e0) */
/* WARNING: Removing unreachable block (ram,0x00010096e6f0) */
/* WARNING: Removing unreachable block (ram,0x00010096e6fc) */
/* WARNING: Removing unreachable block (ram,0x00010096e818) */

void FUN_10096dee4(void)

{
  ulong uVar1;
  undefined8 extraout_x12;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x28;
  undefined8 in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined1 in_stack_000001a0;
  undefined4 uStack00000000000001a1;
  undefined2 uStack00000000000001a5;
  undefined1 uStack00000000000001a7;
  undefined8 in_stack_000001a8;
  short sStack00000000000001b0;
  undefined8 in_stack_00005248;
  undefined8 in_stack_00005250;
  undefined8 in_stack_00005258;
  long in_stack_00005610;
  undefined8 in_stack_00005618;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005248,s_remote_plugin_____returned_inval_108acf5ce,&stack0x00000180);
  if (in_stack_00005610 != 0) {
    _free(in_stack_00005618);
  }
  if ((*(long *)(unaff_x20 + 0x2a70) != -0x8000000000000000) && (*(long *)(unaff_x20 + 0x2a70) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x20 + 0x2a78));
  }
  *(undefined1 *)(in_stack_000000f8 + 3) = 0;
  if (*(long *)(unaff_x20 + 0x2a58) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2a60));
  }
  *(undefined1 *)(in_stack_000000f8 + 4) = 0;
  FUN_100e21910(unaff_x20 + 0x26d0);
  *in_stack_00000098 = 1;
  FUN_100cf302c(in_stack_00000090);
  in_stack_00000180 = 0x8000000000000012;
  in_stack_000001a0 = 0x14;
  uStack00000000000001a1 = (undefined4)unaff_x28;
  uStack00000000000001a7 = (undefined1)((ulong)unaff_x28 >> 0x30);
  uStack00000000000001a5 = (undefined2)((ulong)unaff_x28 >> 0x20);
  in_stack_000001a8 = in_stack_000000e8;
  _sStack00000000000001b0 = in_stack_000000e0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005248,s___108add0c1,&stack0x00004e58);
  uVar1 = in_stack_00000180;
  if (-1 < (long)in_stack_00000180) {
    uVar1 = 4;
  }
  uStack00000000000000f0 = 0xffffffffffff80a8;
  if ((1L << (uVar1 & 0x3f) & 0xeceecU) == 0) {
    if ((1L << (uVar1 & 0x3f) & 0x13103U) != 0) goto LAB_10096e724;
    if (sStack00000000000001b0 == 0x194) {
      uStack00000000000000f0 = 0xffffffffffff80a8;
      goto LAB_10096e724;
    }
  }
  uStack00000000000000f0 = 0xffffffffffff80a5;
LAB_10096e724:
  FUN_101960064(&stack0x00000180);
  if (*(long *)(unaff_x20 + 0x2660) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2668));
  }
  if (*(long *)(unaff_x20 + 0x2648) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2650));
  }
  if (*(long *)(unaff_x20 + 0x25b0) != -0x7ffffffffffffffd) {
    FUN_100e0609c(unaff_x20 + 0x25b0);
  }
  FUN_100de93d0(unaff_x20 + 0x68);
  if (((*(byte *)(unaff_x20 + 0x61) & 1) != 0) && (*(long *)(unaff_x20 + 0x48) != 0)) {
    _free(*(undefined8 *)(unaff_x20 + 0x50));
  }
  *(undefined1 *)(unaff_x20 + 0x61) = 0;
  *in_stack_000000c8 = 1;
  FUN_100d4cef4(in_stack_000000b8);
  *unaff_x22 = 0x8000000000000070;
  unaff_x22[1] = in_stack_00005248;
  unaff_x22[2] = in_stack_00005250;
  unaff_x22[3] = in_stack_00005258;
  unaff_x22[4] = 0x8000000000000005;
  unaff_x22[5] = 0;
  unaff_x22[6] = in_stack_000000e8;
  unaff_x22[7] = in_stack_000000e0;
  unaff_x22[8] = in_stack_000000c0;
  unaff_x22[9] = in_stack_000000d8;
  unaff_x22[10] = unaff_x21;
  unaff_x22[0xb] = in_stack_000000d0;
  unaff_x22[0xc] = unaff_x19;
  unaff_x22[0xd] = uStack00000000000000f0;
  unaff_x22[0xe] = in_stack_000000c0;
  unaff_x22[0xf] = extraout_x12;
  unaff_x22[0x12] = in_stack_00000170;
  unaff_x22[0x11] = in_stack_00000168;
  unaff_x22[0x10] = in_stack_00000160;
  unaff_x22[0x15] = in_stack_00000150;
  unaff_x22[0x14] = in_stack_00000148;
  unaff_x22[0x13] = in_stack_00000140;
  *(undefined1 *)(in_stack_000000f8 + 0xf90) = 1;
  return;
}

