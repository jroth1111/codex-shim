
undefined8 FUN_1005b6614(void)

{
  int iVar1;
  bool bVar2;
  undefined8 extraout_x1;
  code *pcVar3;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  ulong in_stack_00000230;
  ulong in_stack_00000258;
  
  *(char **)(unaff_x29 + -0xc0) = s_Cfailed_to_rebuild_managed_netwo_108ac1cde;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xb0;
  uVar4 = *(undefined8 *)(unaff_x26 + 0x200);
  *(undefined8 *)(unaff_x25 + 0x178) = *(undefined8 *)(unaff_x26 + 0x208);
  *(undefined8 *)(unaff_x25 + 0x170) = uVar4;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00000258 & 3) == 1) {
    uVar4 = *(undefined8 *)(in_stack_00000258 - 1);
    puVar6 = *(undefined8 **)(in_stack_00000258 + 7);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4);
    }
    if (puVar6[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(in_stack_00000258 - 1));
  }
  bVar2 = in_stack_00000230 != 0x8000000000000000;
  if (in_stack_00000230 < 0x8000000000000001) {
    in_stack_00000230 = 0;
  }
  if ((bVar2) && ((in_stack_00000230 & 0x7fffffffffffffff) == 0)) {
    FUN_100e79780(&stack0x00000230);
  }
  *(undefined1 *)(unaff_x19 + 0x149) = 0;
  FUN_100e4119c(unaff_x19 + 0x9c);
  FUN_100e2d09c(unaff_x19 + 3);
  iVar1 = *(int *)(unaff_x19 + 1);
  if (iVar1 != 0) {
    pcVar5 = (char *)*unaff_x19;
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar5,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar5,iVar1,pcVar5);
  }
  *(undefined1 *)((long)unaff_x19 + 0xa49) = 1;
  return 0;
}

