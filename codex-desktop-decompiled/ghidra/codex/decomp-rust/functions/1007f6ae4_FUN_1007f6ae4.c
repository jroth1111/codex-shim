
/* WARNING: Removing unreachable block (ram,0x0001007f77a8) */
/* WARNING: Removing unreachable block (ram,0x0001007f7e1c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8564) */
/* WARNING: Removing unreachable block (ram,0x0001007f8570) */
/* WARNING: Removing unreachable block (ram,0x0001007f7e20) */
/* WARNING: Removing unreachable block (ram,0x0001007f7e2c) */
/* WARNING: Removing unreachable block (ram,0x0001007f7e38) */
/* WARNING: Removing unreachable block (ram,0x0001007f8684) */
/* WARNING: Removing unreachable block (ram,0x0001007f868c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8698) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a38) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a3c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8ae0) */
/* WARNING: Removing unreachable block (ram,0x0001007f8ae8) */
/* WARNING: Removing unreachable block (ram,0x0001007f9228) */
/* WARNING: Removing unreachable block (ram,0x0001007fa124) */
/* WARNING: Removing unreachable block (ram,0x0001007fa138) */
/* WARNING: Removing unreachable block (ram,0x0001007f8b00) */
/* WARNING: Removing unreachable block (ram,0x0001007f8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001007f922c) */
/* WARNING: Removing unreachable block (ram,0x0001007f923c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9250) */
/* WARNING: Removing unreachable block (ram,0x0001007f9298) */
/* WARNING: Removing unreachable block (ram,0x0001007f92a4) */
/* WARNING: Removing unreachable block (ram,0x0001007f92bc) */
/* WARNING: Removing unreachable block (ram,0x0001007f932c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a4c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a54) */
/* WARNING: Removing unreachable block (ram,0x0001007f9350) */
/* WARNING: Removing unreachable block (ram,0x0001007fa13c) */
/* WARNING: Removing unreachable block (ram,0x0001007fa150) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a6c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9354) */
/* WARNING: Removing unreachable block (ram,0x0001007f9364) */
/* WARNING: Removing unreachable block (ram,0x0001007f9378) */
/* WARNING: Removing unreachable block (ram,0x0001007f93c0) */
/* WARNING: Removing unreachable block (ram,0x0001007f93cc) */
/* WARNING: Removing unreachable block (ram,0x0001007f93e4) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a78) */
/* WARNING: Removing unreachable block (ram,0x0001007f9454) */
/* WARNING: Removing unreachable block (ram,0x0001007f9484) */
/* WARNING: Removing unreachable block (ram,0x0001007f77b4) */
/* WARNING: Removing unreachable block (ram,0x0001007f8424) */
/* WARNING: Removing unreachable block (ram,0x0001007f920c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9210) */
/* WARNING: Removing unreachable block (ram,0x0001007f9224) */
/* WARNING: Removing unreachable block (ram,0x0001007f843c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8448) */
/* WARNING: Removing unreachable block (ram,0x0001007f84cc) */
/* WARNING: Removing unreachable block (ram,0x0001007f84e0) */
/* WARNING: Removing unreachable block (ram,0x0001007f8520) */
/* WARNING: Removing unreachable block (ram,0x0001007f852c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8544) */
/* WARNING: Removing unreachable block (ram,0x0001007f77bc) */
/* WARNING: Removing unreachable block (ram,0x0001007f77cc) */
/* WARNING: Removing unreachable block (ram,0x0001007f77e0) */
/* WARNING: Removing unreachable block (ram,0x0001007f7828) */
/* WARNING: Removing unreachable block (ram,0x0001007f7834) */
/* WARNING: Removing unreachable block (ram,0x0001007f784c) */
/* WARNING: Removing unreachable block (ram,0x0001007f855c) */
/* WARNING: Removing unreachable block (ram,0x0001007f6c6c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9470) */
/* WARNING: Removing unreachable block (ram,0x0001007f94a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6ae4(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 uVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long unaff_x28;
  char in_wzr;
  undefined4 *in_stack_00000018;
  long in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  char cVar10;
  undefined8 in_stack_000008d0;
  undefined8 in_stack_000008d8;
  undefined8 in_stack_000008e0;
  
  FUN_1007fa820(&stack0x00000ba0);
  uVar4 = in_stack_000001c0;
  uVar3 = in_stack_000001b0;
  pcVar8 = *(char **)(unaff_x28 + 0x20);
  if (*pcVar8 == '\0') {
    *pcVar8 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar8,extraout_x1,1000000000);
  }
  pcVar9 = *(char **)(unaff_x28 + 0x28);
  func_0x000105a96624(&stack0x00000ba0,pcVar8 + 0x1f0,uVar4);
  in_stack_00000020 = 1;
  in_stack_00000028 = &stack0x000008c0;
  if (*pcVar9 == '\0') {
    *pcVar9 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar9,extraout_x1_00,1000000000);
  }
  pcVar1 = pcVar8 + 0xa8;
  cVar10 = (char)in_stack_00000028;
  if (((((ulong)in_stack_00000028 & 0xffffffff) < *(ulong *)(in_stack_00000020 + 0x10)) &&
      (plVar7 = (long *)(*(long *)(in_stack_00000020 + 8) +
                        ((ulong)in_stack_00000028 & 0xffffffff) * 0x158), *plVar7 != 2)) &&
     (*(int *)((long)plVar7 + 0x13c) == in_stack_00000028._4_4_)) {
    lVar2 = plVar7[0xc];
    __ZN14rama_http_core2h25proto7streams4recv4Recv9recv_data17h22ca9f5f7fef9b3bE
              (&stack0x00000a40,pcVar1,&stack0x000006f0,&stack0x00000020);
    if (cVar10 == '\0') {
      func_0x000105a8dbb0(pcVar1,uVar3,&stack0x000006f0);
    }
    FUN_100811c18(&stack0x000008c0,pcVar1,pcVar9 + 8,&stack0x00000020,pcVar8 + 8,&stack0x000006f0);
    __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
              (pcVar8 + 8,&stack0x000006f0,(int)lVar2 != 1000000000);
    cVar10 = (char)&stack0x00000a40;
    if (*pcVar9 == '\x01') {
      *pcVar9 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar9,0);
    }
    if (*pcVar8 == '\x01') {
      *pcVar8 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar8,0);
    }
    if (cVar10 == '\x04') {
      uVar6 = 2;
    }
    else {
      *(undefined8 *)(in_stack_00000018 + 10) = in_stack_000008e0;
      *(undefined8 *)(in_stack_00000018 + 8) = in_stack_000008d8;
      *(char *)(in_stack_00000018 + 2) = cVar10;
      *(char *)((long)in_stack_00000018 + 9) = (char)((ulong)&stack0x00000a40 >> 8);
      *(short *)((long)in_stack_00000018 + 10) = (short)((ulong)&stack0x00000a40 >> 0x10);
      in_stack_00000018[3] = (int)((ulong)&stack0x00000a40 >> 0x20);
      *(undefined **)(in_stack_00000018 + 4) = &UNK_10b208fd0;
      *(undefined8 *)(in_stack_00000018 + 6) = in_stack_000008d0;
      uVar6 = 4;
    }
    *in_stack_00000018 = uVar6;
    return;
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b233d4,&stack0x000006f0,&UNK_10b3fa588);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1007fa264);
  (*pcVar5)();
}

