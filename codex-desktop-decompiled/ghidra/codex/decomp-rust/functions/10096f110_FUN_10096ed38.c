
/* WARNING: Removing unreachable block (ram,0x00010096ee94) */
/* WARNING: Removing unreachable block (ram,0x00010096ee98) */
/* WARNING: Removing unreachable block (ram,0x00010096eea0) */
/* WARNING: Removing unreachable block (ram,0x00010096eecc) */
/* WARNING: Removing unreachable block (ram,0x00010096eed8) */
/* WARNING: Removing unreachable block (ram,0x00010096ef8c) */
/* WARNING: Removing unreachable block (ram,0x00010096ef9c) */
/* WARNING: Removing unreachable block (ram,0x00010096f040) */
/* WARNING: Removing unreachable block (ram,0x00010096efe0) */
/* WARNING: Removing unreachable block (ram,0x00010096f0a8) */
/* WARNING: Removing unreachable block (ram,0x00010096f018) */
/* WARNING: Removing unreachable block (ram,0x00010096db58) */
/* WARNING: Removing unreachable block (ram,0x00010096f0ac) */
/* WARNING: Removing unreachable block (ram,0x00010096f0f4) */
/* WARNING: Removing unreachable block (ram,0x00010096f19c) */
/* WARNING: Removing unreachable block (ram,0x00010096f1b4) */
/* WARNING: Removing unreachable block (ram,0x00010096f1bc) */
/* WARNING: Removing unreachable block (ram,0x00010096f1c4) */
/* WARNING: Removing unreachable block (ram,0x00010096f1cc) */
/* WARNING: Removing unreachable block (ram,0x00010096f1dc) */
/* WARNING: Removing unreachable block (ram,0x00010096f1ec) */
/* WARNING: Removing unreachable block (ram,0x00010096f41c) */
/* WARNING: Removing unreachable block (ram,0x00010096f424) */
/* WARNING: Removing unreachable block (ram,0x00010096f42c) */
/* WARNING: Removing unreachable block (ram,0x00010096f434) */
/* WARNING: Removing unreachable block (ram,0x00010096f43c) */
/* WARNING: Removing unreachable block (ram,0x00010096f278) */
/* WARNING: Removing unreachable block (ram,0x00010096f3b4) */
/* WARNING: Removing unreachable block (ram,0x00010096f3bc) */
/* WARNING: Removing unreachable block (ram,0x00010096ec68) */
/* WARNING: Removing unreachable block (ram,0x00010096f408) */
/* WARNING: Removing unreachable block (ram,0x00010096e61c) */
/* WARNING: Removing unreachable block (ram,0x00010096e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010096e6d0) */
/* WARNING: Removing unreachable block (ram,0x00010096e6d8) */
/* WARNING: Removing unreachable block (ram,0x00010096e6e0) */
/* WARNING: Removing unreachable block (ram,0x00010096e6f0) */
/* WARNING: Removing unreachable block (ram,0x00010096e6fc) */
/* WARNING: Removing unreachable block (ram,0x00010096e818) */

void FUN_10096ed38(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x12;
  long unaff_x20;
  long *plVar4;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined1 *in_stack_000000f0;
  undefined1 *in_stack_000000f8;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 uStack0000000000000180;
  long in_stack_00000188;
  long *in_stack_00000190;
  long *in_stack_00000198;
  ulong in_stack_000001a0;
  undefined8 in_stack_000001a8;
  short sStack00000000000001b0;
  long *in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long in_stack_00005248;
  undefined8 in_stack_00005250;
  long in_stack_00005258;
  undefined8 in_stack_000055c8;
  long in_stack_000055d0;
  undefined4 in_stack_000055d8;
  undefined3 in_stack_000055dc;
  long in_stack_00005618;
  undefined8 *in_stack_00005620;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000180,s_5failed_to_join_remote_plugin_bu_108acf091,&stack0x000054c0);
  plVar4 = in_stack_00000190;
  lVar3 = in_stack_00000188;
  uVar2 = _uStack0000000000000180;
  if (in_stack_00005618 != 0) {
    if ((code *)*in_stack_00005620 != (code *)0x0) {
      (*(code *)*in_stack_00005620)(in_stack_00005618);
    }
    if (in_stack_00005620[1] != 0) {
      _free(in_stack_00005618);
    }
  }
  in_stack_000000f8[0x573] = 0;
  if (((in_stack_000000f8[0x571] & 1) != 0) && (*(long *)(unaff_x20 + 0x2c40) != 0)) {
    _free(*(undefined8 *)(unaff_x20 + 0x2c48));
  }
  in_stack_000000f8[0x571] = 0;
  if ((in_stack_000000f8[0x572] & 1) != 0) {
    FUN_100e4f794(unaff_x20 + 0x2b90);
  }
  in_stack_000000f8[0x572] = 0;
  *in_stack_000000f0 = 1;
  FUN_100d1219c();
  _uStack0000000000000180 = CONCAT41(in_stack_000055d8,0xd);
  _uStack0000000000000180 =
       CONCAT44(CONCAT31(in_stack_000055dc,(char)((uint)in_stack_000055d8 >> 0x18)),
                uStack0000000000000180);
  in_stack_00000188 = uVar2;
  in_stack_00000190 = (long *)lVar3;
  in_stack_00000198 = plVar4;
  in_stack_000001a8 = in_stack_000055c8;
  _sStack00000000000001b0 = in_stack_000055d0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005610,s__failed_to_check_out_remote_plug_108acf6a5,&stack0x000054c0);
  FUN_100e59c1c(&stack0x00000180);
  *in_stack_000000f8 = 0;
  if (*(long *)(unaff_x20 + 0x2ab8) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2ac0));
  }
  in_stack_000000f8[1] = 0;
  lVar3 = *(long *)(unaff_x20 + 0x2aa0);
  if (lVar3 == 0) {
    in_stack_000001c0 = 0;
  }
  else {
    in_stack_000001c0 = *(undefined8 *)(unaff_x20 + 0x2ab0);
    in_stack_00000198 = *(long **)(unaff_x20 + 0x2aa8);
    in_stack_00000188 = 0;
    in_stack_000001a8 = 0;
    in_stack_00000190 = (long *)lVar3;
    _sStack00000000000001b0 = lVar3;
    in_stack_000001b8 = in_stack_00000198;
  }
  _uStack0000000000000180 = (ulong)(lVar3 != 0);
  in_stack_000001a0 = _uStack0000000000000180;
  while (FUN_100f3a3c8(&stack0x00005248,&stack0x00000180), in_stack_00005248 != 0) {
    lVar3 = in_stack_00005248 + in_stack_00005258 * 0x18;
    plVar4 = (long *)(lVar3 + 8);
    if (*plVar4 != 0) {
      _free(*(undefined8 *)(lVar3 + 0x10));
    }
    if (*(long *)(lVar3 + 0x110) != 0) {
      _free(*(undefined8 *)(lVar3 + 0x118));
    }
  }
  if (*(long *)(unaff_x20 + 0x2a88) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2a90));
  }
  in_stack_000000f8[2] = 0;
  if ((*(long *)(unaff_x20 + 0x2a70) != -0x8000000000000000) && (*(long *)(unaff_x20 + 0x2a70) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x20 + 0x2a78));
  }
  in_stack_000000f8[3] = 0;
  if (*(long *)(unaff_x20 + 0x2a58) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2a60));
  }
  in_stack_000000f8[4] = 0;
  FUN_100e21910(unaff_x20 + 0x26d0);
  *in_stack_00000098 = 1;
  FUN_100cf302c(in_stack_00000090);
  in_stack_000001a0 =
       CONCAT17((char)((ulong)uVar2 >> 0x30),
                CONCAT25((short)((ulong)uVar2 >> 0x20),CONCAT41((int)uVar2,0x14)));
  in_stack_000001a8 = in_stack_000000e8;
  _sStack00000000000001b0 = in_stack_000000e0;
  _uStack0000000000000180 = 0x8000000000000012;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005248,s___108add0c1,&stack0x00004e58);
  uVar1 = _uStack0000000000000180;
  if (-1 < (long)_uStack0000000000000180) {
    uVar1 = 4;
  }
  in_stack_000000f0 = (undefined1 *)0xffffffffffff80a8;
  if ((1L << (uVar1 & 0x3f) & 0xeceecU) == 0) {
    if ((1L << (uVar1 & 0x3f) & 0x13103U) != 0) goto LAB_10096e724;
    if (sStack00000000000001b0 == 0x194) {
      in_stack_000000f0 = (undefined1 *)0xffffffffffff80a8;
      goto LAB_10096e724;
    }
  }
  in_stack_000000f0 = (undefined1 *)0xffffffffffff80a5;
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
  unaff_x22[1] = 0;
  unaff_x22[2] = in_stack_00005250;
  unaff_x22[3] = in_stack_00005258;
  unaff_x22[4] = 0x8000000000000005;
  unaff_x22[5] = 0;
  unaff_x22[6] = in_stack_000000e8;
  unaff_x22[7] = in_stack_000000e0;
  unaff_x22[8] = in_stack_000000c0;
  unaff_x22[9] = in_stack_000000d8;
  unaff_x22[10] = plVar4;
  unaff_x22[0xb] = in_stack_000000d0;
  unaff_x22[0xc] = 0x18;
  unaff_x22[0xd] = in_stack_000000f0;
  unaff_x22[0xe] = in_stack_000000c0;
  unaff_x22[0xf] = extraout_x12;
  unaff_x22[0x12] = in_stack_00000170;
  unaff_x22[0x11] = in_stack_00000168;
  unaff_x22[0x10] = in_stack_00000160;
  unaff_x22[0x15] = in_stack_00000150;
  unaff_x22[0x14] = in_stack_00000148;
  unaff_x22[0x13] = in_stack_00000140;
  in_stack_000000f8[0xf90] = 1;
  return;
}

