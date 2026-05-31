
/* WARNING: Removing unreachable block (ram,0x00010095f284) */
/* WARNING: Removing unreachable block (ram,0x00010095f290) */

void FUN_10095efec(void)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x27;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long lStack0000000000000030;
  long lStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  long lStack0000000000000050;
  long lStack0000000000000058;
  long lStack0000000000000060;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  ulong in_stack_000000d0;
  short in_stack_00000100;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x98,s___108add0c1,unaff_x29 + -0x80);
  uVar1 = in_stack_000000d0;
  if (-1 < (long)in_stack_000000d0) {
    uVar1 = 4;
  }
  lStack0000000000000030 = -0x7f58;
  if ((1L << (uVar1 & 0x3f) & 0xeceecU) == 0) {
    if ((1L << (uVar1 & 0x3f) & 0x13103U) == 0) {
      if (in_stack_00000100 != 0x194) goto LAB_10095f034;
      lStack0000000000000030 = -0x7f58;
    }
  }
  else {
LAB_10095f034:
    lStack0000000000000030 = -0x7f5b;
  }
  lVar5 = *(long *)(unaff_x29 + -0x98);
  lVar6 = *(long *)(unaff_x29 + -0x90);
  lVar3 = *(long *)(unaff_x29 + -0x88);
  FUN_101960064(&stack0x000000d0);
  if (lVar5 == -0x8000000000000000) {
    __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor27clear_plugin_related_caches17hb1255b89d75ef5e3E
              (*(undefined8 *)(unaff_x20 + 0xb0));
    in_stack_00000028 = 0;
    in_stack_00000020 = 1;
    in_stack_00000018 = 0;
    *(undefined1 *)(unaff_x20 + 0x10d) = 0;
    if (*(long *)(unaff_x20 + 0x2740) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2748));
    }
    *(undefined1 *)(unaff_x20 + 0x109) = 0;
    if ((*(long *)(unaff_x20 + 10000) != -0x8000000000000000) && (*(long *)(unaff_x20 + 10000) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x20 + 0x2718));
    }
    if (*(long *)(unaff_x20 + 0x26f8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2700));
    }
    if (*(long *)(unaff_x20 + 0x2660) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x2660);
    }
    FUN_100de93d0(unaff_x20 + 0x118);
    *(undefined2 *)(unaff_x20 + 0x10a) = 0;
    *(undefined1 *)(unaff_x20 + 0x10c) = 0;
    lStack0000000000000048 = *(long *)(unaff_x29 + -200);
    lStack0000000000000040 = *(long *)(unaff_x29 + -0xd0);
    lStack0000000000000058 = *(long *)(unaff_x29 + -0xb8);
    lStack0000000000000050 = *(long *)(unaff_x29 + -0xc0);
    lStack0000000000000060 = *(long *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x20 + 0x108) = 1;
    lVar5 = -0x8000000000000000;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x10d) = 0;
    if (*(long *)(unaff_x20 + 0x2740) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2748));
    }
    if (((*(byte *)(unaff_x20 + 0x109) & 1) != 0) &&
       (lVar8 = *(long *)(unaff_x20 + 0x2728), lVar8 != -0x8000000000000000)) {
      lVar4 = *(long *)(unaff_x20 + 0x2730);
      lVar7 = *(long *)(unaff_x20 + 0x2738);
      if (lVar7 != 0) {
        puVar9 = (undefined8 *)(lVar4 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar8 != 0) {
        _free(lVar4);
      }
    }
    *(undefined1 *)(unaff_x20 + 0x109) = 0;
    if (*(long *)(unaff_x20 + 10000) == -0x8000000000000000 || *(long *)(unaff_x20 + 10000) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x26f8);
    }
    else {
      _free(*(undefined8 *)(unaff_x20 + 0x2718));
      lVar8 = *(long *)(unaff_x20 + 0x26f8);
    }
    if (lVar8 != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2700));
    }
    if (*(long *)(unaff_x20 + 0x2660) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x2660);
    }
    FUN_100de93d0(unaff_x20 + 0x118);
    if (((*(byte *)(unaff_x20 + 0x10c) & 1) != 0) && (*(long *)(unaff_x20 + 0xb8) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0xc0));
    }
    if ((((*(byte *)(unaff_x20 + 0x10b) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0xd0) != -0x8000000000000000)) && (*(long *)(unaff_x20 + 0xd0) != 0))
    {
      _free(*(undefined8 *)(unaff_x20 + 0xd8));
    }
    if (((*(byte *)(unaff_x20 + 0x10a) & 1) != 0) &&
       (lVar8 = *(long *)(unaff_x20 + 0xe8), lVar8 != -0x8000000000000000)) {
      lVar7 = *(long *)(unaff_x20 + 0xf0);
      lVar4 = *(long *)(unaff_x20 + 0xf8);
      if (lVar4 != 0) {
        puVar9 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      unaff_x27 = -0x7ffffffffffffffb;
      if (lVar8 != 0) {
        _free(lVar7);
      }
    }
    *(undefined2 *)(unaff_x20 + 0x10a) = 0;
    *(undefined1 *)(unaff_x20 + 0x10c) = 0;
    lStack0000000000000048 = *(long *)(unaff_x29 + -200);
    lStack0000000000000040 = *(long *)(unaff_x29 + -0xd0);
    lStack0000000000000058 = *(long *)(unaff_x29 + -0xb8);
    lStack0000000000000050 = *(long *)(unaff_x29 + -0xc0);
    lStack0000000000000060 = *(long *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x20 + 0x108) = 1;
    if (lVar5 == -0x7fffffffffffffff) {
      *unaff_x21 = unaff_x27 + 0x6c;
      uVar2 = 3;
      goto LAB_10095f5e4;
    }
  }
  lStack0000000000000038 = -0x7ffffffffffffffb;
  FUN_100d3a654(unaff_x19);
  lVar8 = -0x7ffffffffffffffb;
  if (lVar5 == -0x8000000000000000) {
    lVar7 = unaff_x27 + 0x20;
    lVar8 = in_stack_00000028;
    in_stack_00000028 = in_stack_00000020;
    in_stack_00000020 = in_stack_00000018;
    lVar5 = lVar6;
    lVar6 = lVar3;
    lVar3 = lStack0000000000000038;
  }
  else {
    in_stack_000000a8 = lStack0000000000000048;
    in_stack_000000a0 = lStack0000000000000040;
    in_stack_000000b8 = lStack0000000000000058;
    in_stack_000000b0 = lStack0000000000000050;
    in_stack_000000c0 = lStack0000000000000060;
    lVar7 = unaff_x27 + 0x6b;
  }
  *unaff_x21 = lVar7;
  unaff_x21[1] = lVar5;
  unaff_x21[2] = lVar6;
  unaff_x21[3] = lVar3;
  unaff_x21[4] = lVar8;
  unaff_x21[5] = in_stack_00000028;
  unaff_x21[6] = in_stack_00000020;
  unaff_x21[7] = in_stack_00000018;
  unaff_x21[9] = in_stack_000000a8;
  unaff_x21[8] = in_stack_000000a0;
  unaff_x21[0xb] = in_stack_000000b8;
  unaff_x21[10] = in_stack_000000b0;
  uVar2 = 1;
  unaff_x21[0xc] = in_stack_000000c0;
  unaff_x21[0xd] = lStack0000000000000030;
LAB_10095f5e4:
  *(undefined1 *)(in_stack_00000008 + 0xd78) = uVar2;
  return;
}

