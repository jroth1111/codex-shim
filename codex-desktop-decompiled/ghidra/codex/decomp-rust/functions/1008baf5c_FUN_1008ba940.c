
/* WARNING: Removing unreachable block (ram,0x0001008bafa8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb048) */
/* WARNING: Removing unreachable block (ram,0x0001008bb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001008bb0fc) */
/* WARNING: Removing unreachable block (ram,0x0001008bb100) */
/* WARNING: Removing unreachable block (ram,0x0001008bb174) */
/* WARNING: Removing unreachable block (ram,0x0001008bb190) */
/* WARNING: Removing unreachable block (ram,0x0001008bb104) */
/* WARNING: Removing unreachable block (ram,0x0001008bb118) */
/* WARNING: Removing unreachable block (ram,0x0001008bb8cc) */
/* WARNING: Removing unreachable block (ram,0x0001008bb130) */
/* WARNING: Removing unreachable block (ram,0x0001008bb194) */
/* WARNING: Removing unreachable block (ram,0x0001008bb1c8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb1e0) */
/* WARNING: Removing unreachable block (ram,0x0001008bb1e8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb1f8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb158) */
/* WARNING: Removing unreachable block (ram,0x0001008bb15c) */
/* WARNING: Removing unreachable block (ram,0x0001008bb164) */
/* WARNING: Removing unreachable block (ram,0x0001008bb168) */
/* WARNING: Removing unreachable block (ram,0x0001008bb1a4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb058) */
/* WARNING: Removing unreachable block (ram,0x0001008bb07c) */
/* WARNING: Removing unreachable block (ram,0x0001008bb200) */
/* WARNING: Removing unreachable block (ram,0x0001008bb294) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2c4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2a4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2cc) */
/* WARNING: Removing unreachable block (ram,0x0001008bb840) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2ac) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2b0) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2bc) */
/* WARNING: Removing unreachable block (ram,0x0001008bb2e4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb30c) */
/* WARNING: Removing unreachable block (ram,0x0001008bb360) */
/* WARNING: Removing unreachable block (ram,0x0001008bb398) */
/* WARNING: Removing unreachable block (ram,0x0001008bb450) */
/* WARNING: Removing unreachable block (ram,0x0001008bb39c) */
/* WARNING: Removing unreachable block (ram,0x0001008bb824) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3ac) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3e8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3b4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb954) */
/* WARNING: Removing unreachable block (ram,0x0001008bb99c) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3c4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3e4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3ec) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3f8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb3fc) */
/* WARNING: Removing unreachable block (ram,0x0001008bb400) */
/* WARNING: Removing unreachable block (ram,0x0001008bb408) */
/* WARNING: Removing unreachable block (ram,0x0001008bb430) */
/* WARNING: Removing unreachable block (ram,0x0001008bb348) */
/* WARNING: Removing unreachable block (ram,0x0001008bb490) */
/* WARNING: Removing unreachable block (ram,0x0001008bb498) */
/* WARNING: Removing unreachable block (ram,0x0001008bb4a8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb4b8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb4e4) */
/* WARNING: Removing unreachable block (ram,0x0001008bb4d8) */
/* WARNING: Removing unreachable block (ram,0x0001008bb508) */
/* WARNING: Removing unreachable block (ram,0x0001008bb50c) */
/* WARNING: Removing unreachable block (ram,0x0001008b9eb0) */

undefined8 FUN_1008ba940(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined1 uVar6;
  long *unaff_x19;
  long *unaff_x20;
  char *pcVar7;
  undefined1 *unaff_x23;
  undefined8 unaff_x26;
  undefined8 unaff_x28;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000048;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000890;
  long in_stack_000008a8;
  long in_stack_000008b0;
  
  FUN_108858fa8(s_2MCP_tool_request__meta_must_be_a_108ace899,&stack0x00000ec0);
  FUN_100de6690(&stack0x00000d90);
  *(undefined1 *)((long)unaff_x19 + 0x5ef) = 0;
  if ((*(char *)((long)unaff_x19 + 0x5eb) == '\x01') && (in_stack_00000890 != -0x8000000000000000))
  {
    if ((in_stack_000008b0 != 0) && (in_stack_000008b0 * 9 != -0x11)) {
      _free(in_stack_000008a8 + in_stack_000008b0 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000890);
  }
  *(undefined1 *)((long)unaff_x19 + 0x5eb) = 0;
  if (unaff_x19[0xb2] != -0x7ffffffffffffffb) {
    if ((*(byte *)((long)unaff_x19 + 0x5e9) & 1) != 0) {
      if (unaff_x19[0xb2] < 0) {
        FUN_100de6690(unaff_x19 + 0xb2);
      }
      else if ((*(byte *)((long)unaff_x19 + 0x5ec) & 1) != 0) {
        FUN_100e8442c(unaff_x19 + 0xb2);
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x5e9) = 0;
  }
  *(undefined1 *)((long)unaff_x19 + 0x5e9) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x5ec) = 0;
  if (unaff_x19[0xa9] != -0x7ffffffffffffffb) {
    if ((unaff_x19[0xa9] < 0) && ((*(byte *)((long)unaff_x19 + 0x5ea) & 1) != 0)) {
      FUN_100de6690(unaff_x19 + 0xa9);
    }
    *(undefined1 *)((long)unaff_x19 + 0x5ea) = 0;
  }
  *(undefined1 *)((long)unaff_x19 + 0x5ea) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x5ee) = 0;
  if (((*(byte *)((long)unaff_x19 + 0x5ed) & 1) != 0) && (unaff_x19[0xbe] != 0)) {
    _free(unaff_x19[0xbf]);
  }
  *(undefined1 *)((long)unaff_x19 + 0x5ed) = 0;
  *(undefined1 *)(unaff_x19 + 0xbd) = 1;
  FUN_100ca7588();
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000bc8,s_tool_call_failed_for_______108ad9e76,&stack0x00000d90);
  puVar5 = (undefined8 *)FUN_108857988(&stack0x00000ec0,&stack0x00000d90);
  FUN_100e061d8(unaff_x19 + 0x6f);
  if (((*(byte *)((long)unaff_x19 + 0x479) & 1) != 0) && (unaff_x19[0x99] != -0x7ffffffffffffffb)) {
    FUN_100de6690(unaff_x19 + 0x99);
  }
  *(undefined1 *)((long)unaff_x19 + 0x479) = 0;
  if (((*(byte *)((long)unaff_x19 + 0x47a) & 1) != 0) && (unaff_x19[0x90] != -0x7ffffffffffffffb)) {
    FUN_100de6690(unaff_x19 + 0x90);
  }
  *(undefined1 *)((long)unaff_x19 + 0x47a) = 0;
  *in_stack_00000048 = 1;
  FUN_100ccba6c(unaff_x26);
  pcVar7 = (char *)unaff_x19[0x51];
  if (*pcVar7 == '\0') {
    *pcVar7 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar7,extraout_x1,1000000000);
  }
  FUN_1060fa678(pcVar7,1,pcVar7);
  *(undefined1 *)((long)unaff_x19 + 0x29a) = 0;
  *(undefined2 *)(unaff_x19 + 0x53) = 1;
  FUN_100d28dd0(in_stack_00000028);
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  *unaff_x23 = 1;
  FUN_100ca18a8();
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000d90,&UNK_108cb23ab,&stack0x00000ec0);
  (**(code **)*puVar5)();
  lVar2 = unaff_x19[0x1d] + 0x10;
  *(undefined2 *)((long)unaff_x19 + 0xf1) = 0;
  lVar8 = unaff_x19[6];
  lVar10 = unaff_x19[9];
  lVar9 = unaff_x19[8];
  unaff_x20[1] = unaff_x19[7];
  *unaff_x20 = lVar8;
  unaff_x20[7] = (long)(unaff_x19 + 0x6d);
  unaff_x20[6] = (long)&DAT_100c7b3a0;
  unaff_x20[9] = in_stack_00000088;
  unaff_x20[8] = -0x7ffffffffffffffb;
  unaff_x20[3] = lVar10;
  unaff_x20[2] = lVar9;
  unaff_x20[5] = 3;
  unaff_x20[4] = -0x8000000000000000;
  unaff_x20[0xf] = in_stack_000000b8;
  unaff_x20[0xe] = in_stack_000000b0;
  unaff_x20[0x11] = -0x7f5b;
  unaff_x20[0x10] = in_stack_000000c0;
  unaff_x20[0xb] = in_stack_00000098;
  unaff_x20[10] = in_stack_00000090;
  unaff_x20[0xd] = in_stack_000000a8;
  unaff_x20[0xc] = in_stack_000000a0;
  unaff_x20[0x17] = in_stack_000000f8;
  unaff_x20[0x16] = in_stack_000000f0;
  unaff_x20[0x19] = in_stack_00000108;
  unaff_x20[0x18] = in_stack_00000100;
  unaff_x20[0x13] = in_stack_000000d8;
  unaff_x20[0x12] = in_stack_000000d0;
  unaff_x20[0x15] = in_stack_000000e8;
  unaff_x20[0x14] = in_stack_000000e0;
  unaff_x19[0x39] = lVar2;
  plVar1 = unaff_x19 + 0x1f;
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  unaff_x19[0x4b] = unaff_x19[0x34];
  unaff_x19[0x4a] = unaff_x19[0x33];
  unaff_x19[0x4d] = unaff_x19[0x36];
  unaff_x19[0x4c] = unaff_x19[0x35];
  unaff_x19[0x4f] = unaff_x19[0x38];
  unaff_x19[0x4e] = unaff_x19[0x37];
  unaff_x19[0x43] = unaff_x19[0x2c];
  unaff_x19[0x42] = unaff_x19[0x2b];
  unaff_x19[0x45] = unaff_x19[0x2e];
  unaff_x19[0x44] = unaff_x19[0x2d];
  unaff_x19[0x47] = unaff_x19[0x30];
  unaff_x19[0x46] = unaff_x19[0x2f];
  unaff_x19[0x49] = unaff_x19[0x32];
  unaff_x19[0x48] = unaff_x19[0x31];
  unaff_x19[0x3b] = unaff_x19[0x24];
  unaff_x19[0x3a] = unaff_x19[0x23];
  unaff_x19[0x3d] = unaff_x19[0x26];
  unaff_x19[0x3c] = unaff_x19[0x25];
  unaff_x19[0x3f] = unaff_x19[0x28];
  unaff_x19[0x3e] = unaff_x19[0x27];
  unaff_x19[0x41] = unaff_x19[0x2a];
  unaff_x19[0x40] = unaff_x19[0x29];
  if (unaff_x19[0x3a] == -0x8000000000000000) {
    unaff_x19[0x5e] = *plVar1;
    unaff_x19[0x5d] = unaff_x19[0x30];
    unaff_x19[0x60] = unaff_x19[0x21];
    unaff_x19[0x5f] = unaff_x19[0x20];
    unaff_x19[0x61] = unaff_x19[0x22];
    unaff_x19[0x56] = unaff_x19[0x29];
    unaff_x19[0x55] = unaff_x19[0x28];
    unaff_x19[0x58] = unaff_x19[0x2b];
    unaff_x19[0x57] = unaff_x19[0x2a];
    unaff_x19[0x5a] = unaff_x19[0x2d];
    unaff_x19[0x59] = unaff_x19[0x2c];
    unaff_x19[0x5c] = unaff_x19[0x2f];
    unaff_x19[0x5b] = unaff_x19[0x2e];
    unaff_x19[0x52] = unaff_x19[0x25];
    unaff_x19[0x51] = unaff_x19[0x24];
    unaff_x19[0x54] = unaff_x19[0x27];
    unaff_x19[0x53] = unaff_x19[0x26];
    unaff_x19[0x62] = lVar2;
    *(undefined1 *)(unaff_x19 + 0x68) = 0;
    iVar3 = FUN_1008927b8(unaff_x19 + 0x51,unaff_x28);
    if (iVar3 == 0) {
      FUN_100d84c5c(unaff_x19 + 0x51);
LAB_1008ba258:
      *(undefined1 *)(unaff_x19 + 0x50) = 1;
      FUN_100db1df0(plVar1);
      *(undefined1 *)((long)unaff_x19 + 0xf2) = 0;
      lVar2 = *(long *)unaff_x19[0x1c];
      *(long *)unaff_x19[0x1c] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      }
      if (*unaff_x19 != 0) {
        _free(unaff_x19[1]);
      }
      if (unaff_x19[3] != 0) {
        _free(unaff_x19[4]);
      }
      lVar2 = *(long *)unaff_x19[0x1d];
      *(long *)unaff_x19[0x1d] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
      }
      uVar4 = 0;
      uVar6 = 1;
      goto LAB_1008ba8e0;
    }
    uVar6 = 4;
  }
  else {
    unaff_x19[0x66] = unaff_x19[0x38];
    unaff_x19[0x65] = unaff_x19[0x37];
    unaff_x19[0x68] = unaff_x19[0x20];
    unaff_x19[0x67] = *plVar1;
    unaff_x19[0x6a] = unaff_x19[0x22];
    unaff_x19[0x69] = unaff_x19[0x21];
    unaff_x19[0x5e] = unaff_x19[0x30];
    unaff_x19[0x5d] = unaff_x19[0x2f];
    unaff_x19[0x60] = unaff_x19[0x32];
    unaff_x19[0x5f] = unaff_x19[0x31];
    unaff_x19[0x62] = unaff_x19[0x34];
    unaff_x19[0x61] = unaff_x19[0x33];
    unaff_x19[100] = unaff_x19[0x36];
    unaff_x19[99] = unaff_x19[0x35];
    unaff_x19[0x56] = unaff_x19[0x28];
    unaff_x19[0x55] = unaff_x19[0x27];
    unaff_x19[0x58] = unaff_x19[0x2a];
    unaff_x19[0x57] = unaff_x19[0x29];
    unaff_x19[0x5a] = unaff_x19[0x2c];
    unaff_x19[0x59] = unaff_x19[0x2b];
    unaff_x19[0x5c] = unaff_x19[0x2e];
    unaff_x19[0x5b] = unaff_x19[0x2d];
    unaff_x19[0x52] = unaff_x19[0x24];
    unaff_x19[0x51] = unaff_x19[0x23];
    unaff_x19[0x54] = unaff_x19[0x26];
    unaff_x19[0x53] = unaff_x19[0x25];
    unaff_x19[0x6b] = lVar2;
    *(undefined1 *)(unaff_x19 + 0x22c) = 0;
    unaff_x19[0x6c] = unaff_x19[0x67];
    unaff_x19[0x6d] = unaff_x19[0x68];
    unaff_x19[0x6f] = unaff_x19[0x6a];
    unaff_x19[0x6e] = unaff_x19[0x69];
    unaff_x19[0x70] = -0x7fffffffffffffb1;
    unaff_x19[0x82] = unaff_x19[0x62];
    unaff_x19[0x81] = unaff_x19[0x61];
    unaff_x19[0x84] = unaff_x19[100];
    unaff_x19[0x83] = unaff_x19[99];
    unaff_x19[0x86] = unaff_x19[0x66];
    unaff_x19[0x85] = unaff_x19[0x65];
    unaff_x19[0x7a] = unaff_x19[0x5a];
    unaff_x19[0x79] = unaff_x19[0x59];
    unaff_x19[0x7c] = unaff_x19[0x5c];
    unaff_x19[0x7b] = unaff_x19[0x5b];
    unaff_x19[0x7e] = unaff_x19[0x5e];
    unaff_x19[0x7d] = unaff_x19[0x5d];
    unaff_x19[0x80] = unaff_x19[0x60];
    unaff_x19[0x7f] = unaff_x19[0x5f];
    unaff_x19[0x72] = unaff_x19[0x52];
    unaff_x19[0x71] = unaff_x19[0x51];
    unaff_x19[0x74] = unaff_x19[0x54];
    unaff_x19[0x73] = unaff_x19[0x53];
    unaff_x19[0x76] = unaff_x19[0x56];
    unaff_x19[0x75] = unaff_x19[0x55];
    unaff_x19[0x78] = unaff_x19[0x58];
    unaff_x19[0x77] = unaff_x19[0x57];
    unaff_x19[0xe7] = lVar2;
    *(undefined1 *)(unaff_x19 + 0xfa) = 0;
    iVar3 = FUN_100892e70(unaff_x19 + 0x6c,unaff_x28);
    if (iVar3 == 0) {
      FUN_100cf6de0(unaff_x19 + 0x6c);
      *(undefined1 *)(unaff_x19 + 0x22c) = 1;
      goto LAB_1008ba258;
    }
    uVar6 = 3;
    *(undefined1 *)(unaff_x19 + 0x22c) = 3;
  }
  *(undefined1 *)(unaff_x19 + 0x50) = uVar6;
  uVar4 = 1;
  uVar6 = 4;
LAB_1008ba8e0:
  *(undefined1 *)(unaff_x19 + 0x1e) = uVar6;
  return uVar4;
}

