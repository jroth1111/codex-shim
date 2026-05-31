
void FUN_10049fb34(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong unaff_x27;
  long lVar5;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000018 = 0x8000000000000006;
  in_stack_00000018[1] = uVar2;
  if ((in_stack_00000048 != -0x8000000000000000) && (in_stack_00000048 != 0)) {
    _free(in_stack_00000038);
  }
  lVar5 = *(long *)(unaff_x29 + -0xb8);
  if (lVar5 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xb0);
    lVar3 = *(long *)(unaff_x29 + -0xa8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  return;
}

