
undefined1  [16] FUN_100f4443c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000028;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_Opening_Codex_Desktop_at_____108ad42a6,&stack0x00000060);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x308) = 0;
  auVar4 = FUN_100f43d50(unaff_x19 + 0xb0,in_stack_00000028);
  uVar3 = auVar4._8_8_;
  if ((auVar4._0_8_ & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x60) = 3;
    uVar2 = 1;
    uVar3 = unaff_x20;
    goto LAB_100f45c8c;
  }
  if (*(char *)(unaff_x19 + 0x308) == '\x03') {
    if (*(char *)(unaff_x19 + 0x300) == '\x03') {
      lVar1 = unaff_x19 + 0x250;
LAB_100f448ac:
      FUN_100de2564(lVar1);
    }
    else if (*(char *)(unaff_x19 + 0x300) == '\0') {
      if (*(long *)(unaff_x19 + 0x1c0) != 3) {
        lVar1 = unaff_x19 + 0x1c0;
        goto LAB_100f448ac;
      }
      FUN_100de21d4(unaff_x19 + 0x1c8);
    }
    FUN_100de2268(unaff_x19 + 0xf0);
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xa0));
  }
  if ((((*(byte *)(unaff_x19 + 0x61) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x68) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x68) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x70));
  }
  *(undefined1 *)(unaff_x19 + 0x61) = 0;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x38));
  }
  uVar2 = 0;
  *(undefined1 *)(unaff_x19 + 0x60) = 1;
LAB_100f45c8c:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

