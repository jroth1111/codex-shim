
void FUN_10089a254(void)

{
  char *pcVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x21;
  long unaff_x27;
  long unaff_x29;
  long lVar5;
  long lVar6;
  undefined1 *in_stack_00000040;
  long in_stack_000009c0;
  undefined8 in_stack_000009c8;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(long *)(unaff_x19 + 0xb68) = *(long *)(unaff_x19 + 0x330) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xbd8) = 0;
  pcVar1 = (char *)FUN_100fd3e50(unaff_x19 + 0xb68);
  if (pcVar1 == (char *)0x0) {
    *unaff_x21 = -0x7fffffffffffffff;
    *in_stack_00000040 = 6;
  }
  else {
    if (((*(char *)(unaff_x19 + 0xbd8) == '\x03') && (*(char *)(unaff_x19 + 0xbd0) == '\x03')) &&
       (*(char *)(unaff_x19 + 0xb88) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0xb90);
      if (*(long *)(unaff_x19 + 0xb98) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0xb98) + 0x18))(*(undefined8 *)(unaff_x19 + 0xba0));
      }
    }
    FUN_1016e46b0(&stack0x000009c0,pcVar1 + 0x28,unaff_x19 + 0x360);
    uVar2 = extraout_x1;
    if (in_stack_000009c0 != -0x7fffffffffffffff) {
      _memcpy(&stack0x000005c0,&stack0x000009d8,0x1c0);
      if ((in_stack_000009c0 != -0x8000000000000000) && (in_stack_000009c0 != 0)) {
        _free(in_stack_000009c8);
      }
      FUN_100e40940(&stack0x000005c0);
      uVar2 = extraout_x1_00;
    }
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,uVar2,1000000000);
    }
    FUN_1060fa678(pcVar1,1,pcVar1);
    FUN_100e349f0(unaff_x19 + 0xbe0);
    lVar6 = *(long *)(unaff_x19 + 0x368);
    lVar5 = *(long *)(unaff_x19 + 0x360);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x19 + 0x370);
    *(undefined2 *)(unaff_x19 + 0xb5e) = 0;
    lVar4 = *(long *)(unaff_x19 + 0x518);
    if ((*(byte *)(unaff_x19 + 0xb5b) & 1) != 0) {
      func_0x000100e4d0ac(unaff_x19 + 0x520);
    }
    *(undefined2 *)(unaff_x19 + 0xb5b) = 0;
    *(undefined1 *)(unaff_x19 + 0xb5e) = 0;
    func_0x000100e45ab8(unaff_x19 + 0x378);
    *(undefined2 *)(unaff_x19 + 0xb5f) = 0;
    *(undefined1 *)(unaff_x19 + 0xb5d) = 0;
    unaff_x21[1] = lVar6;
    *unaff_x21 = lVar5;
    unaff_x21[2] = *(long *)(unaff_x29 + -0x80);
    unaff_x21[3] = lVar4;
    lVar4 = *unaff_x21;
    *(undefined1 *)(unaff_x19 + 0xb49) = 1;
    if (lVar4 != -0x7fffffffffffffff) {
      FUN_100d1a4d8();
      *(undefined1 *)(unaff_x27 + 0x31) = 0;
      uVar3 = 1;
      goto LAB_10089a468;
    }
  }
  *unaff_x21 = -0x7fffffffffffffff;
  uVar3 = 3;
LAB_10089a468:
  *(undefined1 *)(unaff_x27 + 0x30) = uVar3;
  return;
}

