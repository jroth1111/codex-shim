
void FUN_1002b9978(undefined8 param_1)

{
  long lVar1;
  byte *unaff_x19;
  long *plVar2;
  long unaff_x29;
  char in_stack_00000010;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x50) = s_pool_dropped__dropping_pooled_____108aba385;
  *(undefined1 **)(unaff_x29 + -0x48) = &stack0x00000040;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b1f3630;
  lStack0000000000000078 = unaff_x29 + -0x60;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  FUN_1002e0168(&stack0x00000070);
  FUN_1002c2300(&stack0x00000018);
  if (in_stack_00000010 == '\x02') {
    FUN_1002c523c();
  }
  else {
    FUN_1002b7d4c();
  }
  if (unaff_x19[0x61] != 2) {
    FUN_1002c2300(unaff_x19 + 0x48);
    if (unaff_x19[0x40] == 2) {
      FUN_1002c523c(unaff_x19 + 0x30);
    }
    else {
      FUN_1002b7d4c(unaff_x19 + 0x30);
    }
  }
  if (1 < *unaff_x19) {
    plVar2 = *(long **)(unaff_x19 + 8);
    (**(code **)(*plVar2 + 0x20))(plVar2 + 3,plVar2[1],plVar2[2]);
    _free(plVar2);
  }
  (**(code **)(*(long *)(unaff_x19 + 0x10) + 0x20))
            (unaff_x19 + 0x28,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x20));
  if (1 < *(long *)(unaff_x19 + 0x68) + 1U) {
    plVar2 = (long *)(*(long *)(unaff_x19 + 0x68) + 8);
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      _free();
    }
  }
  return;
}

