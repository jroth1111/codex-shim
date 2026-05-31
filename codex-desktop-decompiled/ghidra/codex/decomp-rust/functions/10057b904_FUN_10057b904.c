
undefined8 FUN_10057b904(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *in_stack_00000548;
  
  FUN_10057c2d0(&stack0x00000990);
  if (*in_stack_00000548 == 1) {
    uVar7 = in_stack_00000548[1];
    if ((uVar7 & 3) != 1) goto LAB_10057bab4;
    puVar6 = (undefined8 *)(uVar7 - 1);
    uVar8 = *puVar6;
    puVar5 = *(undefined8 **)(uVar7 + 7);
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar8);
    }
    if (puVar5[1] != 0) {
      _free(uVar8);
    }
  }
  else {
    if ((*in_stack_00000548 != 0) || (in_stack_00000548[2] == 0)) {
LAB_10057bab4:
      _free(in_stack_00000548);
      *(undefined1 *)(unaff_x19 + 0xc2) = 0;
      bVar1 = *(byte *)(unaff_x19 + 0xc0);
      goto joined_r0x00010057ba9c;
    }
    puVar6 = (undefined8 *)in_stack_00000548[1];
  }
  _free(puVar6);
  _free(in_stack_00000548);
  *(undefined1 *)(unaff_x19 + 0xc2) = 0;
  bVar1 = *(byte *)(unaff_x19 + 0xc0);
joined_r0x00010057ba9c:
  if ((bVar1 & 1) != 0) {
    FUN_100de6690(&stack0x00000070);
  }
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  plVar3 = *(long **)(unaff_x19 + 0x140);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h889d73266575641eE(unaff_x19 + 0x140);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc1) = 0;
  *(undefined1 *)(unaff_x19 + 0xc3) = 1;
  return 0;
}

