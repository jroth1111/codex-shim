
void FUN_101684900(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 *in_stack_000068c0;
  
  FUN_100f3f484(&stack0x00003e30,s_7Failed_to_fork_current_session_t_108ada844,&stack0x00006750);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_000068c0)();
  plVar3 = *(long **)(*(long *)(unaff_x27 + 0x3f0) + 0x80);
  plVar3[0x39] = plVar3[0x39] + 1;
  lVar2 = *plVar3;
  *plVar3 = lVar2 + 1;
  if (-1 < lVar2) {
    __ZN9codex_tui3tui15frame_requester14FrameRequester14schedule_frame17h8fe09e615184c7a7E
              (&stack0x00003e30);
    FUN_100e25188(&stack0x00003e30);
    if ((*(long *)(unaff_x27 + 0x848) != -0x7fffffffffffffff) &&
       ((*(byte *)(unaff_x27 + 0xacc) & 1) != 0)) {
      FUN_100df3274(unaff_x27 + 0x848);
    }
    *(undefined1 *)(unaff_x27 + 0xacc) = 0;
    *unaff_x20 = 0x8000000000000001;
    unaff_x20[1] = unaff_x22;
    unaff_x20[2] = unaff_x20;
    *(undefined1 *)(unaff_x27 + 0xac8) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101686e48);
  (*pcVar1)();
}

