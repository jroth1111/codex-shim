
void FUN_101a76b64(void)

{
  long lVar1;
  long in_x10;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  long *in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  
  in_stack_00000088 = FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x00000080);
  in_stack_00000080 = -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < unaff_x21) {
    func_0x000101938f78(unaff_x29 + -0xb0);
  }
  if (-0x7fffffffffffffff < unaff_x22) {
    if (unaff_x28 != 0) {
      puVar2 = (undefined8 *)(unaff_x20 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (unaff_x22 != 0) {
      _free();
    }
  }
  if ((in_x10 != -0x7fffffffffffffff) && (in_x10 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x29 + -0xd8);
    lVar3 = *(long *)(unaff_x29 + -0xd0);
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (in_x10 != 0) {
      _free(lVar1);
    }
  }
  FUN_10194df64(unaff_x24 + 0x48);
  if (in_stack_000000d0 != -0x7ffffffffffffffb) {
    func_0x00010194dc28(&stack0x000000d0);
  }
  if (((long)in_stack_00000060 < 0) &&
     ((in_stack_00000060 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010194dc28(in_stack_00000058);
  }
  if (in_stack_00000080 == -0x7fffffffffffffff) {
    *in_stack_00000070 = -0x7ffffffffffffffe;
    in_stack_00000070[1] = in_stack_00000088;
  }
  else {
    in_stack_00000070[5] = in_stack_000000a8;
    in_stack_00000070[4] = in_stack_000000a0;
    in_stack_00000070[7] = in_stack_000000b8;
    in_stack_00000070[6] = in_stack_000000b0;
    in_stack_00000070[9] = in_stack_000000c8;
    in_stack_00000070[8] = in_stack_000000c0;
    in_stack_00000070[1] = in_stack_00000088;
    *in_stack_00000070 = in_stack_00000080;
    in_stack_00000070[3] = in_stack_00000098;
    in_stack_00000070[2] = in_stack_00000090;
  }
  return;
}

