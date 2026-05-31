
void FUN_100afab20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  long *in_stack_000000a8;
  undefined8 in_stack_00001508;
  undefined8 in_stack_00001510;
  undefined8 in_stack_00001518;
  
  *(char **)(unaff_x29 + -0x100) = s__CONNECT_upstream_dial_failed__t_108ad02f5;
  *(undefined1 **)(unaff_x29 + -0xf8) = &stack0x00001020;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x100;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x26 + 0x558) = in_stack_00001510;
  *(undefined8 *)(unaff_x26 + 0x550) = in_stack_00001508;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00001518;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x29 + -0xd0) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -200) = unaff_x22;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000230,s_establish_CONNECT_tunnel_to_108ad032e,&stack0x00001020);
  uVar5 = *(undefined8 *)(unaff_x23 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x23 + 0x130);
  puVar3 = (undefined8 *)_malloc(0x28);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    puVar3[3] = unaff_x24;
    puVar3[2] = 1;
    puVar3[4] = unaff_x22;
    FUN_100dbf624(unaff_x27 + 0x170);
    *(undefined4 *)(unaff_x27 + 0x256) = 0;
    if ((*(byte *)(unaff_x27 + 0x138) != 0x1a) && (0x18 < *(byte *)(unaff_x27 + 0x138))) {
      lVar2 = **(long **)(unaff_x27 + 0x140);
      **(long **)(unaff_x27 + 0x140) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x27 + 0x140);
      }
    }
    if ((*(byte *)(unaff_x27 + 0x251) & 1) != 0) {
      lVar2 = *in_stack_000000a8;
      *in_stack_000000a8 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(&stack0x000000a8);
      }
    }
    *(undefined1 *)(unaff_x27 + 0x251) = 0;
    if ((*(long *)(unaff_x27 + 0xe8) != 2) && ((*(byte *)(unaff_x27 + 0x252) & 1) != 0)) {
      FUN_100e0a3e4();
    }
    *(undefined1 *)(unaff_x27 + 0x252) = 0;
    FUN_100df8150(unaff_x27 + 0xa0);
    *(undefined1 *)(unaff_x27 + 0x253) = 0;
    unaff_x28[1] = puVar3;
    unaff_x28[2] = &UNK_10b2240d0;
    *unaff_x28 = 0;
    *(undefined1 *)(unaff_x27 + 0x250) = 1;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100afd248);
  (*pcVar1)();
}

