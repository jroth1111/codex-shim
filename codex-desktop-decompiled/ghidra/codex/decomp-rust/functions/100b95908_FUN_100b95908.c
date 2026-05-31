
void FUN_100b95908(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 *unaff_x27;
  long unaff_x29;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000098;
  undefined *in_stack_000000a0;
  long in_stack_000000a8;
  undefined *in_stack_000000b0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000098,s__app_server_did_not_become_ready_108ad15a8,&stack0x00000020);
  *(undefined **)(unaff_x19 + 0x60) = in_stack_000000a0;
  *(long *)(unaff_x19 + 0x58) = in_stack_00000098;
  *(long *)(unaff_x19 + 0x68) = in_stack_000000a8;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  *(long *)(unaff_x19 + 0x80) = unaff_x19 + 0x58;
  *(undefined1 *)(unaff_x19 + 0x508) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar7;
  *(long *)(unaff_x19 + 0x90) = unaff_x19 + 0x58;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar7;
  *(undefined1 *)(unaff_x19 + 0x500) = 0;
  FUN_100b971d8(&stack0x00000098,unaff_x19 + 0x98);
  lVar1 = in_stack_00000098;
  if (in_stack_00000098 == -0x7fffffffffffffff) {
    uVar6 = 3;
    *(undefined1 *)(unaff_x19 + 0x508) = 3;
LAB_100b95aa4:
    *unaff_x27 = uVar6;
  }
  else {
    in_stack_00000128 = in_stack_000000a8;
    in_stack_00000120 = in_stack_000000a0;
    FUN_100cd7c20(unaff_x19 + 0x98);
    if (lVar1 == -0x8000000000000000) {
      puVar4 = (undefined4 *)_malloc(7);
      if (puVar4 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,7);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b95b9c);
        (*pcVar3)();
      }
      *(undefined4 *)((long)puVar4 + 3) = 0x6e776f6e;
      *puVar4 = 0x6e6b6e75;
      *(undefined8 *)(unaff_x29 + -0x98) = 7;
      *(undefined4 **)(unaff_x29 + -0x90) = puVar4;
      *(undefined8 *)(unaff_x29 + -0x88) = 7;
    }
    else {
      *(long *)(unaff_x29 + -0x98) = lVar1;
      in_stack_00000118 = in_stack_00000128;
      in_stack_00000110 = in_stack_00000120;
    }
    plVar2 = *(long **)(unaff_x19 + 0x90);
    uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x88) + 0x88);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(*(long *)(unaff_x19 + 0x88) + 0x80);
    *(undefined8 *)(unaff_x29 + -0x68) = uVar7;
    in_stack_00000098 = unaff_x29 + -0x70;
    in_stack_000000a0 =
         &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
    in_stack_000000a8 = unaff_x29 + -0x98;
    in_stack_000000b0 = &DAT_10112965c;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000020,s___Daemon_used_app_server__path__v_108ad1670,&stack0x00000098);
    uVar5 = in_stack_00000030;
    uVar7 = in_stack_00000028;
    lVar1 = in_stack_00000020;
    lVar9 = plVar2[2];
    if ((ulong)(*plVar2 - lVar9) < in_stack_00000030) {
      FUN_108855060(plVar2,lVar9,in_stack_00000030,1,1);
      lVar9 = plVar2[2];
    }
    _memcpy(plVar2[1] + lVar9,uVar7,uVar5);
    plVar2[2] = lVar9 + uVar5;
    if (lVar1 != 0) {
      _free(uVar7);
    }
    if (*(long *)(unaff_x29 + -0x98) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x90));
    }
    *(undefined1 *)(unaff_x19 + 0x508) = 1;
    uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x28);
    *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x20);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
    *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x58;
    *(undefined1 *)(unaff_x19 + 0x218) = 0;
    uVar5 = FUN_100b9c0fc(unaff_x19 + 0x78);
    if ((uVar5 & 1) != 0) {
      uVar6 = 4;
      goto LAB_100b95aa4;
    }
    if ((*(char *)(unaff_x19 + 0x218) == '\x03') && (*(char *)(unaff_x19 + 0x210) == '\x03')) {
      FUN_100ca11c0(unaff_x19 + 0xc0);
      if (*(long *)(unaff_x19 + 0xa8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0xb0));
      }
    }
    lVar1 = *(long *)(unaff_x19 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined1 *)(unaff_x19 + 0x70) = 1;
    if (lVar1 != -0x8000000000000000) {
      FUN_100cc7b00();
      *(undefined1 *)(unaff_x19 + 0x38) = 0;
      in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x40);
      in_stack_00000098 = 3;
      in_stack_00000020 = lVar1;
      in_stack_00000028 = uVar7;
      in_stack_00000030 = uVar8;
      uVar7 = FUN_108857988(&stack0x00000020,&stack0x00000098);
      *(undefined1 *)(unaff_x19 + 0x38) = 0;
      *(undefined1 *)(unaff_x19 + 0x39) = 0;
      *unaff_x20 = 0x8000000000000000;
      unaff_x20[1] = uVar7;
      uVar6 = 1;
      unaff_x20[2] = extraout_x9;
      goto LAB_100b95b48;
    }
  }
  *unaff_x20 = 0x8000000000000001;
  uVar6 = 5;
LAB_100b95b48:
  *(undefined1 *)(unaff_x19 + 0x3a) = uVar6;
  return;
}

