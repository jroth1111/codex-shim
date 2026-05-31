
/* WARNING: Removing unreachable block (ram,0x000101882cd4) */

void FUN_101882bc0(void)

{
  char *pcVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar4;
  long lStack00000000000001d0;
  undefined *puStack00000000000001d8;
  ulong in_stack_00000800;
  undefined8 in_stack_00000808;
  
  *(char **)(unaff_x29 + -0xa0) = s_failed_to_send_request_to_client_108ac9f54;
  *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000800;
  lStack00000000000001d0 = unaff_x29 + -0xa0;
  puStack00000000000001d8 = &UNK_10b25d1e8;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xd8);
  *(undefined8 *)(unaff_x26 + 0x438) = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined8 *)(unaff_x26 + 0x430) = uVar3;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(long *)(unaff_x19 + 0x9d8) = *(long *)(unaff_x19 + 0x1a0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xa48) = 0;
  pcVar1 = (char *)FUN_1019971ac(unaff_x19 + 0x9d8);
  if (pcVar1 == (char *)0x0) {
    *unaff_x27 = 0x8000000000000001;
    uVar2 = 6;
  }
  else {
    if (((*(char *)(unaff_x19 + 0xa48) == '\x03') && (*(char *)(unaff_x19 + 0xa40) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x9f8) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0xa00);
      if (*(long *)(unaff_x19 + 0xa08) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0xa08) + 0x18))(*(undefined8 *)(unaff_x19 + 0xa10));
      }
    }
    FUN_101ba5e80(&stack0x00000800,pcVar1 + 0x28,unaff_x19 + 0x1d0);
    uVar3 = extraout_x1;
    if (in_stack_00000800 != 0x8000000000000001) {
      _memcpy(&stack0x00000400,&stack0x00000818,0x1c0);
      if ((in_stack_00000800 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000808);
      }
      FUN_1019615a8(&stack0x00000400);
      uVar3 = extraout_x1_00;
    }
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,uVar3,1000000000);
    }
    FUN_1060fa678(pcVar1,1,pcVar1);
    FUN_10195fc88(unaff_x19 + 0xa50);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x1d0);
    *(undefined8 *)(unaff_x26 + 0xa88) = *(undefined8 *)(unaff_x19 + 0x1d8);
    *(undefined8 *)(unaff_x26 + 0xa80) = uVar3;
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x19 + 0x1e0);
    *(undefined2 *)(unaff_x19 + 0x9ce) = 0;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x388);
    if ((*(byte *)(unaff_x19 + 0x9cb) & 1) != 0) {
      func_0x00010196452c(unaff_x19 + 0x390);
    }
    *(undefined2 *)(unaff_x19 + 0x9cb) = 0;
    *(undefined1 *)(unaff_x19 + 0x9ce) = 0;
    FUN_101962cd4(unaff_x19 + 0x1e8);
    *(undefined2 *)(unaff_x19 + 0x9cf) = 0;
    *(undefined1 *)(unaff_x19 + 0x9cd) = 0;
    uVar4 = *(undefined8 *)(unaff_x26 + 0xa80);
    unaff_x27[1] = *(undefined8 *)(unaff_x26 + 0xa88);
    *unaff_x27 = uVar4;
    unaff_x27[2] = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x27[3] = uVar3;
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x9b9) = uVar2;
  return;
}

