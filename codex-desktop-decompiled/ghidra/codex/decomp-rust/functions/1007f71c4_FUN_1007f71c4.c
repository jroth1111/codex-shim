
/* WARNING: Removing unreachable block (ram,0x0001007f7258) */
/* WARNING: Removing unreachable block (ram,0x0001007f72a8) */
/* WARNING: Removing unreachable block (ram,0x0001007f72e8) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a48) */
/* WARNING: Removing unreachable block (ram,0x0001007f72f4) */
/* WARNING: Removing unreachable block (ram,0x0001007f7314) */
/* WARNING: Removing unreachable block (ram,0x0001007f7328) */
/* WARNING: Removing unreachable block (ram,0x0001007fa0ec) */
/* WARNING: Removing unreachable block (ram,0x0001007f7334) */
/* WARNING: Removing unreachable block (ram,0x0001007f733c) */
/* WARNING: Removing unreachable block (ram,0x0001007f737c) */
/* WARNING: Removing unreachable block (ram,0x0001007f7390) */
/* WARNING: Removing unreachable block (ram,0x0001007fa0f4) */
/* WARNING: Removing unreachable block (ram,0x0001007fa0f8) */
/* WARNING: Removing unreachable block (ram,0x0001007fa260) */
/* WARNING: Removing unreachable block (ram,0x0001007f739c) */
/* WARNING: Removing unreachable block (ram,0x0001007f73a8) */
/* WARNING: Removing unreachable block (ram,0x0001007f73bc) */
/* WARNING: Removing unreachable block (ram,0x0001007f72d0) */
/* WARNING: Removing unreachable block (ram,0x0001007f72d8) */
/* WARNING: Removing unreachable block (ram,0x0001007f740c) */
/* WARNING: Removing unreachable block (ram,0x0001007f743c) */
/* WARNING: Removing unreachable block (ram,0x0001007f82ac) */
/* WARNING: Removing unreachable block (ram,0x0001007f82bc) */
/* WARNING: Removing unreachable block (ram,0x0001007f82c0) */
/* WARNING: Removing unreachable block (ram,0x0001007f7444) */
/* WARNING: Removing unreachable block (ram,0x0001007f744c) */
/* WARNING: Removing unreachable block (ram,0x0001007f82c8) */
/* WARNING: Removing unreachable block (ram,0x0001007f82e0) */
/* WARNING: Removing unreachable block (ram,0x0001007f8308) */
/* WARNING: Removing unreachable block (ram,0x0001007f832c) */
/* WARNING: Removing unreachable block (ram,0x0001007f833c) */

void FUN_1007f71c4(void)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar1;
  char *pcVar2;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  char in_wzr;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *in_stack_00000018;
  long in_stack_00000a40;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined4 in_stack_00000a60;
  undefined8 in_stack_00000bc0;
  
  FUN_1007fabd4(&stack0x00000ba0);
  pcVar1 = *(char **)(unaff_x28 + 0x20);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    uVar3 = extraout_x1;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar1,extraout_x1,1000000000);
    uVar3 = extraout_x1_00;
  }
  pcVar2 = *(char **)(unaff_x28 + 0x28);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar2,uVar3,1000000000);
  }
  __ZN14rama_http_core2h25proto7streams4send4Send12recv_go_away17h203f0b7728b220d5E
            (&stack0x00000ba0,pcVar1 + 0x180,in_stack_00000a60);
  uVar4 = *(undefined8 *)(unaff_x27 + 9);
  uVar3 = *(undefined8 *)(unaff_x27 + 1);
  uVar6 = *(undefined8 *)(unaff_x27 + 0x19);
  uVar5 = *(undefined8 *)(unaff_x27 + 0x11);
  *(undefined8 *)(unaff_x26 + 0x67) = in_stack_00000bc0;
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
  *(undefined8 *)((long)in_stack_00000018 + 0x11) = uVar4;
  *(undefined8 *)((long)in_stack_00000018 + 9) = uVar3;
  *(undefined8 *)((long)in_stack_00000018 + 0x21) = uVar6;
  *(undefined8 *)((long)in_stack_00000018 + 0x19) = uVar5;
  *(undefined8 *)(in_stack_00000018 + 10) = *(undefined8 *)(unaff_x26 + 0x67);
  *(undefined1 *)(in_stack_00000018 + 2) = 1;
  *in_stack_00000018 = 4;
  (**(code **)(in_stack_00000a40 + 0x20))(&stack0x00000a58,in_stack_00000a48,in_stack_00000a50);
  return;
}

