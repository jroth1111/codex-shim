
void FUN_1008cde24(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar5;
  undefined1 *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char *in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *in_stack_000000d8;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  long in_stack_00000df0;
  undefined8 in_stack_00000df8;
  undefined8 in_stack_00000e00;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000df0,s_failed_to_start_review__108aca594,&stack0x00000420);
  FUN_100df5738(&stack0x00000710);
  if (in_stack_00000df0 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x20 + 0x1ba) = 0;
    __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor17build_review_turn17h60a4e480e8374341E
              (&stack0x00000490,&stack0x00000710,*(undefined8 *)(unaff_x20 + 0x1a8),
               *(undefined8 *)(unaff_x20 + 0x1b0));
    *(undefined1 *)(unaff_x20 + 0x1b9) = 0;
    *(undefined8 *)(unaff_x20 + 0x248) = in_stack_00000518;
    *(undefined8 *)(unaff_x20 + 0x240) = in_stack_00000510;
    *(undefined8 *)(unaff_x20 + 600) = in_stack_00000528;
    *(undefined8 *)(unaff_x20 + 0x250) = in_stack_00000520;
    *(undefined8 *)(unaff_x20 + 0x268) = *(undefined8 *)(unaff_x20 + 0x1c8);
    *(undefined8 *)(unaff_x20 + 0x260) = *(undefined8 *)(unaff_x20 + 0x1c0);
    *(undefined8 *)(unaff_x20 + 0x270) = *(undefined8 *)(unaff_x20 + 0x1d0);
    *(undefined8 *)(unaff_x20 + 0x208) = in_stack_000004d8;
    *(undefined8 *)(unaff_x20 + 0x200) = in_stack_000004d0;
    *(undefined8 *)(unaff_x20 + 0x218) = in_stack_000004e8;
    *(undefined8 *)(unaff_x20 + 0x210) = in_stack_000004e0;
    *(undefined8 *)(unaff_x20 + 0x228) = in_stack_000004f8;
    *(undefined8 *)(unaff_x20 + 0x220) = in_stack_000004f0;
    *(undefined8 *)(unaff_x20 + 0x238) = in_stack_00000508;
    *(undefined8 *)(unaff_x20 + 0x230) = in_stack_00000500;
    *(undefined8 *)(unaff_x20 + 0x1c8) = in_stack_00000498;
    *(undefined8 *)(unaff_x20 + 0x1c0) = in_stack_00000490;
    *(undefined8 *)(unaff_x20 + 0x1d8) = in_stack_000004a8;
    *(undefined8 *)(unaff_x20 + 0x1d0) = in_stack_000004a0;
    *(undefined8 *)(unaff_x20 + 0x1e8) = in_stack_000004b8;
    *(undefined8 *)(unaff_x20 + 0x1e0) = in_stack_000004b0;
    *(undefined8 *)(unaff_x20 + 0x1f8) = in_stack_000004c8;
    *(undefined8 *)(unaff_x20 + 0x1f0) = in_stack_000004c0;
    uVar5 = *(undefined8 *)(unaff_x20 + 400);
    *(undefined8 *)(unaff_x26 + 0x17e) = *(undefined8 *)(unaff_x20 + 0x198);
    *(undefined8 *)(unaff_x26 + 0x176) = uVar5;
    *in_stack_00000040 = '\0';
    uVar2 = FUN_1008d153c(unaff_x20 + 0x1c0);
    if ((uVar2 & 1) == 0) {
      if (*in_stack_00000040 == '\x03') {
        FUN_100d90384(unaff_x20 + 0x288);
        in_stack_00000040[1] = '\0';
      }
      else if ((*in_stack_00000040 == '\0') &&
              (FUN_100e4623c(unaff_x20 + 0x1c0), *(long *)(unaff_x20 + 0x260) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x268));
      }
      *(undefined2 *)(unaff_x20 + 0x1b9) = 0;
      *(undefined1 *)(unaff_x20 + 0x1bb) = 0;
      lVar1 = **(long **)(unaff_x20 + 0x1a0);
      **(long **)(unaff_x20 + 0x1a0) = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x1a0);
      }
      *in_stack_00000020 = 1;
      in_stack_00000df0 = -0x8000000000000000;
      in_stack_00000e00 = in_stack_00000df8;
LAB_1008ce170:
      FUN_100d35044(in_stack_00000030);
      if (in_stack_00000df0 == -0x8000000000000000) {
        if (*(long *)(unaff_x20 + 0xe8) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xf0));
        }
        *(undefined2 *)(unaff_x20 + 0x104) = 0;
        *(undefined1 *)(unaff_x20 + 0x103) = 0;
        if (((*(byte *)(unaff_x20 + 0x102) & 1) != 0) && (*(long *)(unaff_x20 + 0xd0) != 0)) {
          _free(*(undefined8 *)(unaff_x20 + 0xd8));
        }
        *(undefined1 *)(unaff_x20 + 0x102) = 0;
        in_stack_00000df0 = -0x8000000000000000;
      }
      else {
        if (*(long *)(unaff_x20 + 0xe8) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xf0));
        }
        *(undefined1 *)(unaff_x20 + 0x105) = 0;
        in_stack_00000030 = 0xffffffffffff80a5;
        if ((*(byte *)(unaff_x20 + 0x103) & 1) != 0) {
          lVar1 = *in_stack_000000d8;
          *in_stack_000000d8 = lVar1 + -1;
          LORelease();
          if (lVar1 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(&stack0x000000d8);
          }
        }
        *(undefined1 *)(unaff_x20 + 0x103) = 0;
        if ((*(byte *)(unaff_x20 + 0x104) & 1) != 0) {
          uVar4 = *(ulong *)(unaff_x20 + 0x108);
          uVar2 = uVar4 ^ 0x8000000000000000;
          if (-1 < (long)uVar4) {
            uVar2 = 2;
          }
          if (uVar2 != 0) {
            if ((uVar2 == 1) || (uVar2 != 2)) {
              if (*(long *)(unaff_x20 + 0x110) != 0) {
                lVar1 = 0x10;
                goto LAB_1008cf358;
              }
            }
            else {
              if (uVar4 != 0) {
                _free(*(undefined8 *)(unaff_x20 + 0x110));
              }
              if ((*(ulong *)(unaff_x20 + 0x120) & 0x7fffffffffffffff) != 0) {
                lVar1 = 0x20;
LAB_1008cf358:
                _free(*(undefined8 *)(unaff_x20 + 0x108 + lVar1));
              }
            }
          }
        }
        *(undefined1 *)(unaff_x20 + 0x104) = 0;
        if (((*(byte *)(unaff_x20 + 0x102) & 1) != 0) && (*(long *)(unaff_x20 + 0xd0) != 0)) {
          _free(*(undefined8 *)(unaff_x20 + 0xd8));
        }
        *(undefined1 *)(unaff_x20 + 0x102) = 0;
      }
      *in_stack_00000048 = 1;
      FUN_100d33230(in_stack_00000038);
      if (in_stack_00000df0 == -0x8000000000000000) {
        uVar5 = 0x800000000000006f;
      }
      else {
        uVar5 = 0x8000000000000070;
        in_stack_00000090 = in_stack_00000230;
        in_stack_00000098 = in_stack_00000238;
        in_stack_000000a0 = in_stack_00000240;
        in_stack_000000a8 = in_stack_00000248;
        in_stack_000000b0 = in_stack_00000250;
        in_stack_000000b8 = in_stack_00000258;
        in_stack_000000c0 = in_stack_00000260;
        in_stack_000000c8 = in_stack_00000268;
      }
      unaff_x22[6] = in_stack_00000098;
      unaff_x22[5] = in_stack_00000090;
      unaff_x22[8] = in_stack_000000a8;
      unaff_x22[7] = in_stack_000000a0;
      unaff_x22[10] = in_stack_000000b8;
      unaff_x22[9] = in_stack_000000b0;
      *unaff_x22 = uVar5;
      unaff_x22[1] = in_stack_00000df0;
      unaff_x22[2] = in_stack_00000df8;
      unaff_x22[3] = in_stack_00000e00;
      unaff_x22[4] = 0x8000000000000005;
      unaff_x22[0xc] = in_stack_000000c8;
      unaff_x22[0xb] = in_stack_000000c0;
      uVar3 = 1;
      unaff_x22[0xd] = in_stack_00000030;
      goto LAB_1008cf40c;
    }
    *in_stack_00000020 = 4;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x1ba) = 0;
    if (*(long *)(unaff_x20 + 0x1c0) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x1c8));
    }
    *(undefined1 *)(unaff_x20 + 0x1b9) = 0;
    *(undefined1 *)(unaff_x20 + 0x1bb) = 0;
    lVar1 = **(long **)(unaff_x20 + 0x1a0);
    **(long **)(unaff_x20 + 0x1a0) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x1a0);
    }
    *in_stack_00000020 = 1;
    if (in_stack_00000df0 != -0x7fffffffffffffff) goto LAB_1008ce170;
  }
  *in_stack_00000048 = 4;
  *unaff_x22 = 0x8000000000000071;
  uVar3 = 3;
LAB_1008cf40c:
  *(undefined1 *)(unaff_x28 + 8) = uVar3;
  return;
}

