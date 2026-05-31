
/* WARNING: Removing unreachable block (ram,0x0001007f7c3c) */

void FUN_1007f600c(void)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar1;
  char *pcVar2;
  long unaff_x24;
  long unaff_x28;
  char in_wzr;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined4 *in_stack_00000018;
  int in_stack_000003a0;
  undefined4 in_stack_000003a4;
  undefined8 in_stack_000003b8;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined1 uVar11;
  undefined7 uVar12;
  undefined1 in_stack_00000708;
  undefined7 in_stack_00000709;
  undefined1 in_stack_00000710;
  undefined7 in_stack_00000711;
  
  uVar3 = *(undefined8 *)(unaff_x24 + 0x230);
  uVar9 = (undefined1)*(undefined8 *)(unaff_x24 + 0x238);
  uVar10 = (undefined7)((ulong)*(undefined8 *)(unaff_x24 + 0x238) >> 8);
  cVar5 = (char)uVar3;
  uVar6 = (undefined1)((ulong)uVar3 >> 8);
  uVar7 = (undefined4)((ulong)uVar3 >> 0x20);
  uVar11 = (undefined1)in_stack_000003b8;
  uVar12 = (undefined7)((ulong)in_stack_000003b8 >> 8);
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  pcVar1 = *(char **)(unaff_x28 + 0x20);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar1,extraout_x1,1000000000);
  }
  func_0x000105ac65fc(pcVar1 + 0x260,in_stack_000003a0,in_stack_000003a4);
  pcVar2 = *(char **)(unaff_x28 + 0x28);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar2,extraout_x1_00,1000000000);
  }
  if (in_stack_000003a0 == 0) {
    auVar4 = func_0x000105a91ca0(pcVar1 + 0x180,0,in_stack_000003a4,pcVar1 + 0x1f0,pcVar1 + 8);
    uVar8 = auVar4._8_4_;
    if ((auVar4._0_8_ & 1) == 0) {
      cVar5 = '\x04';
      uVar8 = uVar7;
    }
    else {
      cVar5 = '\x01';
      uVar6 = 1;
      uVar9 = 0x20;
      uVar10 = 0x10b2092;
      uVar11 = 1;
      uVar12 = 0;
      in_stack_00000710 = 0;
      in_stack_00000711 = 0;
      in_stack_00000708 = 0;
      in_stack_00000709 = 0;
    }
  }
  else {
    func_0x000105a96624(&stack0x000008c0,pcVar1 + 0x1f0,in_stack_000003a0);
    FUN_10080bf98(pcVar1 + 0x180,in_stack_000003a4,pcVar2 + 8,&stack0x00000a40,pcVar1 + 8,
                  pcVar1 + 0x170);
    FUN_100811c18(&stack0x000006f0,pcVar1 + 0xa8,pcVar2 + 8,&stack0x00000a40,pcVar1 + 8,
                  &stack0x00000ba0);
    uVar8 = uVar7;
  }
  if (*pcVar2 == '\x01') {
    *pcVar2 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar2,0);
  }
  if (*pcVar1 == '\x01') {
    *pcVar1 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
  }
  if (cVar5 == '\x04') {
    *in_stack_00000018 = 2;
  }
  else {
    *(ulong *)((long)in_stack_00000018 + 0x11) = CONCAT17(uVar11,uVar10);
    *(ulong *)((long)in_stack_00000018 + 9) =
         CONCAT17(uVar9,CONCAT43(uVar8,CONCAT21((short)((ulong)uVar3 >> 0x10),uVar6)));
    *(ulong *)((long)in_stack_00000018 + 0x21) = CONCAT17(in_stack_00000710,in_stack_00000709);
    *(ulong *)((long)in_stack_00000018 + 0x19) = CONCAT17(in_stack_00000708,uVar12);
    *(ulong *)(in_stack_00000018 + 10) = CONCAT71(in_stack_00000711,in_stack_00000710);
    *(char *)(in_stack_00000018 + 2) = cVar5;
    *in_stack_00000018 = 4;
  }
  return;
}

