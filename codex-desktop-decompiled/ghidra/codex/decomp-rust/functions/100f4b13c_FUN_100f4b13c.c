
undefined8 FUN_100f4b13c(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar4;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar5;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    lVar2 = *(long *)(unaff_x22 + -0x18);
    if (lVar2 == unaff_x25) {
      if (unaff_x23 - unaff_x22 != 0) {
        uVar3 = (ulong)(unaff_x23 - unaff_x22) / 0x18;
        puVar4 = (undefined8 *)(unaff_x22 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      break;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + -0x10);
    *(undefined8 *)(unaff_x24 + 0x10) = *(undefined8 *)(unaff_x22 + -8);
    *(undefined8 *)(unaff_x24 + 8) = uVar5;
    in_stack_00000050 = unaff_x24;
    in_stack_00000058 = unaff_x26;
    func_0x00010602ab90(s__108ac265a,&stack0x00000050);
    if (lVar2 != 0) {
      _free(in_stack_00000040);
    }
    bVar1 = unaff_x22 != unaff_x23;
    unaff_x22 = unaff_x22 + 0x18;
  } while (bVar1);
  if (unaff_x21 != 0) {
    _free();
  }
  return 0;
}

