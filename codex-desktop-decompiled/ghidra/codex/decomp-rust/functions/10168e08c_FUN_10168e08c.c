
undefined1  [16] FUN_10168e08c(void)

{
  int iVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x25;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  byte in_stack_00000240;
  byte in_stack_00000241;
  int6 in_stack_00000242;
  long in_stack_00000248;
  ulong in_stack_00000550;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe0,s_0Failed_to_resolve_app_server_re_108adae8d,&stack0x00000240);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  if ((in_stack_00000550 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_00000550 - 1);
    puVar6 = *(undefined8 **)(in_stack_00000550 + 7);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_00000550 - 1));
  }
  *(undefined2 *)(unaff_x19 + 0x348) = 0;
  *unaff_x28 = 1;
  FUN_100d4b68c();
  _memcpy(&stack0x00000040,&stack0x00000240,0x1f8);
  uVar7 = *(undefined8 *)(unaff_x25 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x25 + 0x20);
  _memcpy();
  *(undefined8 *)(unaff_x19 + 0x498) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x490) = uVar5;
  *(long *)(unaff_x19 + 0x4a0) = unaff_x19 + 0x168;
  *(undefined1 *)(unaff_x19 + 0x4b0) = 0;
  FUN_101699938(&stack0x00000240,unaff_x19 + 0x298);
  if (in_stack_00000240 == 2) {
    uVar2 = 4;
    in_stack_00000248 = unaff_x19 + 0x168;
    goto LAB_10168e8d8;
  }
  FUN_100d69254(unaff_x19 + 0x298);
  if ((in_stack_00000240 & 1) == 0) {
    if ((in_stack_00000241 & 1) != 0) {
      FUN_1052799c8(&stack0x00000240,unaff_x19 + 0x168);
      FUN_100dfca00(&stack0x00000240);
      in_stack_00000248 = 0;
      uVar4 = CONCAT62(in_stack_00000242,CONCAT11(in_stack_00000241,in_stack_00000240)) ^
              0x8000000000000000;
      if (-1 < in_stack_00000242) {
        uVar4 = 6;
      }
      if ((uVar4 < 0x12) && ((0x21f00U >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
        *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x148);
        *(long *)(unaff_x19 + 0x2a0) = unaff_x19 + 0x168;
        *(undefined8 *)(unaff_x19 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x160);
        *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x158);
        *(undefined1 *)(unaff_x19 + 0x348) = 0;
        iVar1 = FUN_101690be0(unaff_x19 + 0x298);
        if (iVar1 == 0) {
          if ((((*(char *)(unaff_x19 + 0x348) == '\x03') && (*(char *)(unaff_x19 + 0x340) == '\x03')
               ) && (*(char *)(unaff_x19 + 0x338) == '\x03')) &&
             (*(char *)(unaff_x19 + 0x2f0) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x2f8);
            if (*(long *)(unaff_x19 + 0x300) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x300) + 0x18))(*(undefined8 *)(unaff_x19 + 0x308))
              ;
            }
          }
          *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x148);
          *(undefined1 *)(unaff_x19 + 0x39b) = 0;
          iVar1 = FUN_101696164(unaff_x19 + 0x298);
          if (iVar1 == 0) {
            FUN_100d51964(unaff_x19 + 0x298);
            *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x148);
            *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x160);
            *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x19 + 0x158);
            *(undefined1 *)(unaff_x19 + 0x340) = 0;
            iVar1 = FUN_101698080(unaff_x19 + 0x298);
            if (iVar1 == 0) {
              if (((*(char *)(unaff_x19 + 0x340) == '\x03') &&
                  (*(char *)(unaff_x19 + 0x338) == '\x03')) &&
                 ((*(char *)(unaff_x19 + 0x330) == '\x03' &&
                  (*(char *)(unaff_x19 + 0x2e8) == '\x04')))) {
                __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                          (unaff_x19 + 0x2f0);
                if (*(long *)(unaff_x19 + 0x2f8) != 0) {
                  (**(code **)(*(long *)(unaff_x19 + 0x2f8) + 0x18))
                            (*(undefined8 *)(unaff_x19 + 0x300));
                }
              }
              in_stack_00000248 = 0;
              goto LAB_10168e4fc;
            }
            uVar2 = 7;
          }
          else {
            uVar2 = 6;
          }
        }
        else {
          uVar2 = 5;
        }
LAB_10168e8d8:
        *(undefined1 *)(unaff_x19 + 0x290) = uVar2;
        uVar5 = 1;
        goto LAB_10168e8e0;
      }
      goto LAB_10168e4fc;
    }
    uVar5 = *(undefined8 *)(unaff_x19 + 0x148);
    *(long *)(unaff_x29 + -0xe0) = unaff_x19 + 0x158;
    *(undefined **)(unaff_x29 + -0xd8) =
         &
         __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000240,s__Not_available_in_TUI_yet_for_th_108adad84,unaff_x29 + -0xe0);
    __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
              (uVar5,&stack0x00000040);
    FUN_100dfca00(unaff_x19 + 0x168);
    in_stack_00000248 = 0;
  }
  else {
LAB_10168e4fc:
    FUN_100dfca00(unaff_x19 + 0x168);
  }
  uVar5 = 0;
  *(undefined1 *)(unaff_x19 + 0x290) = 1;
LAB_10168e8e0:
  auVar8._8_8_ = in_stack_00000248;
  auVar8._0_8_ = uVar5;
  return auVar8;
}

