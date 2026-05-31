
void FUN_1009026d4(void)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 extraout_w9;
  long unaff_x19;
  long *unaff_x21;
  undefined1 *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  ulong uVar6;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined7 uStack0000000000000048;
  undefined1 uStack000000000000004f;
  undefined7 uStack0000000000000050;
  undefined8 uStack0000000000000057;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_000001a0;
  long *in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  ulong in_stack_00000238;
  byte in_stack_00000240;
  undefined8 in_stack_00000248;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000238,s_invalid_thread_id__108aca2c9,unaff_x29 + -0x70);
  uVar6 = (ulong)in_stack_00000240;
  uVar4 = *(undefined8 *)((long)unaff_x26 + 9);
  *(undefined8 *)(unaff_x25 + 0xd7) = in_stack_00000248;
  in_stack_000001b8 = unaff_x26[6];
  in_stack_000001b0 = unaff_x26[5];
  in_stack_000001c8 = unaff_x26[8];
  in_stack_000001c0 = unaff_x26[7];
  in_stack_000001d8 = unaff_x26[10];
  in_stack_000001d0 = unaff_x26[9];
  in_stack_000001e8 = unaff_x26[0xc];
  in_stack_000001e0 = unaff_x26[0xb];
  in_stack_000001a8 = (long *)unaff_x26[4];
  in_stack_000001a0 = unaff_x26[3];
  if (in_stack_00000238 == 0x8000000000000000) {
    *(undefined8 *)(unaff_x25 + 199) = *(undefined8 *)(unaff_x25 + 0xd7);
    *(byte *)(unaff_x19 + 0x78) = in_stack_00000240;
    *(undefined8 *)(unaff_x19 + 0x79) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x25 + 199);
    *(long *)(unaff_x19 + 0x90) = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x188) + 0x10;
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined1 *)(unaff_x19 + 0x138) = 0;
    FUN_10050e55c(&stack0x00000238,unaff_x19 + 0x90);
    if (unaff_x24 == 0x7fffffffffffffe4) {
      *unaff_x23 = 3;
    }
    else {
      in_stack_000001c8 = unaff_x26[5];
      in_stack_000001c0 = unaff_x26[4];
      in_stack_000001d8 = unaff_x26[7];
      in_stack_000001d0 = unaff_x26[6];
      in_stack_000001e8 = unaff_x26[9];
      in_stack_000001e0 = unaff_x26[8];
      in_stack_000001a8 = (long *)unaff_x26[1];
      in_stack_000001a0 = *unaff_x26;
      in_stack_000001b8 = unaff_x26[3];
      in_stack_000001b0 = unaff_x26[2];
      if ((((*(char *)(unaff_x19 + 0x138) == '\x03') && (*(char *)(unaff_x19 + 0x130) == '\x03')) &&
          (*(char *)(unaff_x19 + 0x128) == '\x03')) && (*(char *)(unaff_x19 + 0x120) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0xe0);
        if (*(long *)(unaff_x19 + 0xe8) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0xe8) + 0x18))(*(undefined8 *)(unaff_x19 + 0xf0));
        }
      }
      if (in_stack_000001a0 == unaff_x24 + 0x1b) {
        lVar1 = *in_stack_000001a8;
        *in_stack_000001a8 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E
                    ((ulong)&stack0x000001a0 | 8);
        }
        *(long *)(unaff_x19 + 0x90) = *(long *)(unaff_x19 + 0x50) + 0x1b8;
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x80);
        *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
        *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x70);
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
        uVar2 = FUN_100889d08(unaff_x19 + 0x90);
        if ((uVar2 & 0xff) != 2) {
          if (((*(char *)(unaff_x19 + 0x140) == '\x03') && (*(char *)(unaff_x19 + 0x138) == '\x03'))
             && ((*(char *)(unaff_x19 + 0x130) == '\x03' && (*(char *)(unaff_x19 + 0xe8) == '\x04'))
                )) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0xf0);
            if (*(long *)(unaff_x19 + 0xf8) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0xf8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x100));
            }
          }
          uVar6 = (ulong)((uVar2 & 0xff) + 1);
          if (*(long *)(unaff_x19 + 0x58) != 0) {
            in_stack_00000238 = 0x8000000000000000;
            goto LAB_100902a10;
          }
          uStack0000000000000028 = *(undefined8 *)(unaff_x29 + -200);
          uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0xd0);
          uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -0xb8);
          uStack0000000000000030 = *(undefined8 *)(unaff_x29 + -0xc0);
          uStack0000000000000040 = *(undefined8 *)(unaff_x29 + -0xb0);
          uStack0000000000000048 = (undefined7)*(undefined8 *)(unaff_x29 + -0xa8);
          uStack0000000000000057 = *(undefined8 *)((long)unaff_x26 + 0xef);
          uStack000000000000004f = (undefined1)*(undefined8 *)((long)unaff_x26 + 0xe7);
          uStack0000000000000050 = (undefined7)((ulong)*(undefined8 *)((long)unaff_x26 + 0xe7) >> 8)
          ;
          uStack0000000000000008 = *(undefined8 *)(unaff_x29 + -0xe8);
          uStack0000000000000000 = *(undefined8 *)(unaff_x29 + -0xf0);
          uStack0000000000000018 = *(undefined8 *)(unaff_x29 + -0xd8);
          uStack0000000000000010 = *(undefined8 *)(unaff_x29 + -0xe0);
          *unaff_x23 = 1;
          in_stack_00000238 = 0x8000000000000000;
          goto LAB_100902a88;
        }
        *unaff_x23 = 5;
      }
      else {
        FUN_100df5738(&stack0x000001a0);
        *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x50);
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x80);
        *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
        *(undefined1 *)(unaff_x19 + 0xc0) = 0;
        uVar6 = FUN_100912194(unaff_x19 + 0x90);
        if ((uVar6 & 1) == 0) {
          func_0x000100d54f30(unaff_x19 + 0x90);
          uVar6 = 0;
          in_stack_00000238 = 0x8000000000000000;
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_100902a18;
LAB_100902a10:
          _free(*(undefined8 *)(unaff_x19 + 0x60));
          goto LAB_100902a18;
        }
        *unaff_x23 = 4;
      }
    }
  }
  else {
    *(undefined8 *)(unaff_x25 + 199) = *(undefined8 *)(unaff_x25 + 0xd7);
    *(undefined8 *)((long)unaff_x26 + 0x9f) = *(undefined8 *)(unaff_x25 + 199);
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar4;
    *(long **)((long)unaff_x26 + 0xaf) = in_stack_000001a8;
    *(long *)((long)unaff_x26 + 0xa7) = in_stack_000001a0;
    *(long *)((long)unaff_x26 + 0xef) = in_stack_000001e8;
    *(long *)((long)unaff_x26 + 0xe7) = in_stack_000001e0;
    *(long *)((long)unaff_x26 + 0xdf) = in_stack_000001d8;
    *(long *)((long)unaff_x26 + 0xd7) = in_stack_000001d0;
    *(long *)((long)unaff_x26 + 0xcf) = in_stack_000001c8;
    *(long *)((long)unaff_x26 + 199) = in_stack_000001c0;
    *(long *)((long)unaff_x26 + 0xbf) = in_stack_000001b8;
    *(long *)((long)unaff_x26 + 0xb7) = in_stack_000001b0;
    if (*(long *)(unaff_x19 + 0x58) != 0) goto LAB_100902a10;
LAB_100902a18:
    uStack0000000000000028 = *(undefined8 *)(unaff_x29 + -200);
    uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0xd0);
    uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -0xb8);
    uStack0000000000000030 = *(undefined8 *)(unaff_x29 + -0xc0);
    uStack0000000000000040 = *(undefined8 *)(unaff_x29 + -0xb0);
    uStack0000000000000048 = (undefined7)*(undefined8 *)(unaff_x29 + -0xa8);
    uStack0000000000000057 = *(undefined8 *)((long)unaff_x26 + 0xef);
    uStack000000000000004f = (undefined1)*(undefined8 *)((long)unaff_x26 + 0xe7);
    uStack0000000000000050 = (undefined7)((ulong)*(undefined8 *)((long)unaff_x26 + 0xe7) >> 8);
    uStack0000000000000008 = *(undefined8 *)(unaff_x29 + -0xe8);
    uStack0000000000000000 = *(undefined8 *)(unaff_x29 + -0xf0);
    uStack0000000000000018 = *(undefined8 *)(unaff_x29 + -0xd8);
    uStack0000000000000010 = *(undefined8 *)(unaff_x29 + -0xe0);
    *unaff_x23 = 1;
    if (in_stack_00000238 != 0x8000000000000001) {
LAB_100902a88:
      uVar3 = (undefined1)uVar6;
      uVar4 = CONCAT17(uStack000000000000004f,uStack0000000000000048);
      *(undefined8 *)(unaff_x25 + 0x57) = uStack0000000000000057;
      *(ulong *)(unaff_x25 + 0x4f) = CONCAT71(uStack0000000000000050,uStack000000000000004f);
      FUN_100d6ad78();
      if (in_stack_00000238 == 0x8000000000000000) {
        uVar5 = 0;
        in_stack_00000238 = uVar6;
        uVar3 = extraout_w9;
      }
      else {
        uVar5 = in_stack_00000238 & 0xffffffffffffff00;
        in_stack_000000e8 = uStack0000000000000028;
        in_stack_000000e0 = uStack0000000000000020;
        in_stack_000000f8 = uStack0000000000000038;
        in_stack_000000f0 = uStack0000000000000030;
        in_stack_00000100 = uStack0000000000000040;
        *(undefined8 *)(unaff_x25 + 0xb7) = *(undefined8 *)(unaff_x25 + 0x57);
        *(undefined8 *)(unaff_x25 + 0xaf) = *(undefined8 *)(unaff_x25 + 0x4f);
        unaff_x24 = unaff_x24 + 0x6b;
        in_stack_000000c8 = uStack0000000000000008;
        in_stack_000000c0 = uStack0000000000000000;
        in_stack_000000d8 = uStack0000000000000018;
        in_stack_000000d0 = uStack0000000000000010;
        in_stack_00000108 = uVar4;
      }
      *(undefined8 *)((long)unaff_x21 + 0x39) = in_stack_000000e8;
      *(undefined8 *)((long)unaff_x21 + 0x31) = in_stack_000000e0;
      *(undefined8 *)((long)unaff_x21 + 0x49) = in_stack_000000f8;
      *(undefined8 *)((long)unaff_x21 + 0x41) = in_stack_000000f0;
      *(undefined8 *)((long)unaff_x21 + 0x59) = in_stack_00000108;
      *(undefined8 *)((long)unaff_x21 + 0x51) = in_stack_00000100;
      lVar1 = *(long *)(unaff_x25 + 0xaf);
      unaff_x21[0xd] = *(long *)(unaff_x25 + 0xb7);
      unaff_x21[0xc] = lVar1;
      *(undefined8 *)((long)unaff_x21 + 0x19) = in_stack_000000c8;
      *(undefined8 *)((long)unaff_x21 + 0x11) = in_stack_000000c0;
      *unaff_x21 = unaff_x24;
      unaff_x21[1] = uVar5 | in_stack_00000238 & 0xff;
      *(undefined1 *)(unaff_x21 + 2) = uVar3;
      uVar3 = 1;
      *(undefined8 *)((long)unaff_x21 + 0x29) = in_stack_000000d8;
      *(undefined8 *)((long)unaff_x21 + 0x21) = in_stack_000000d0;
      goto LAB_100902b30;
    }
  }
  *unaff_x21 = unaff_x24 + 0x6c;
  uVar3 = 3;
LAB_100902b30:
  *(undefined1 *)(unaff_x19 + 0xe38) = uVar3;
  return;
}

