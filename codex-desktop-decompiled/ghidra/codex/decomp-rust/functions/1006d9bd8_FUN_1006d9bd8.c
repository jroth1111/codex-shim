
void FUN_1006d9bd8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long *unaff_x26;
  undefined8 *puVar5;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  FUN_100f3f484(&stack0x000000a0,s__external_auth_refresh_returned_w_108ac3627,&stack0x00000190);
  in_stack_00000078 = in_stack_000000a8;
  in_stack_00000070 = in_stack_000000a0;
  in_stack_00000080 = in_stack_000000b0;
  uVar2 = FUN_100c358e0(&stack0x00000070);
  if (unaff_x19[8] != 0) {
    _free(unaff_x19[9]);
  }
  if (*unaff_x26 != -0x8000000000000000) {
    if (*unaff_x26 != 0) {
      _free(unaff_x19[0xc]);
    }
    if ((unaff_x19[0xe] != -0x8000000000000000) && (unaff_x19[0xe] != 0)) {
      _free(unaff_x19[0xf]);
    }
  }
  *(undefined2 *)(unaff_x19 + 7) = 0;
  lVar3 = unaff_x19[3];
  if (lVar3 != -0x8000000000000000) {
    lVar1 = unaff_x19[4];
    lVar4 = unaff_x19[5];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  lVar3 = *(long *)*unaff_x19;
  *(long *)*unaff_x19 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103d03378();
  }
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar2;
  *(undefined1 *)((long)unaff_x19 + 0x3a) = 1;
  return;
}

