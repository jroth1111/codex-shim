
void FUN_10135d050(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong unaff_x23;
  long unaff_x24;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long *in_stack_00000278;
  uint in_stack_00000280;
  long *in_stack_00000288;
  long in_stack_000002b0;
  long in_stack_000002b8;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000198);
  if ((unaff_x24 != -0x7fffffffffffffff) && (unaff_x24 != -0x8000000000000000)) {
    lVar3 = *(long *)(unaff_x29 + -0x88);
    if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
      _free(*(long *)(unaff_x29 + -0x90) + lVar3 * -8 + -8);
    }
    func_0x000100cd7284(unaff_x29 + -0xa8);
  }
  if ((in_stack_00000090 != -0x7fffffffffffffff) && (in_stack_00000090 != -0x8000000000000000)) {
    if (in_stack_000002b8 != 0) {
      lVar3 = 0;
      do {
        plVar5 = (long *)(in_stack_000002b0 + lVar3 * 0x48);
        if (*plVar5 != 0) {
          _free(plVar5[1]);
        }
        if (plVar5[3] == -0x8000000000000000 || plVar5[3] == 0) {
          lVar7 = plVar5[6];
        }
        else {
          _free(plVar5[4]);
          lVar7 = plVar5[6];
        }
        if (lVar7 != -0x8000000000000000) {
          lVar1 = plVar5[7];
          lVar6 = plVar5[8];
          if (lVar6 != 0) {
            puVar4 = (undefined8 *)(lVar1 + 8);
            do {
              if (puVar4[-1] != 0) {
                _free(*puVar4);
              }
              puVar4 = puVar4 + 3;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          if (lVar7 != 0) {
            _free(lVar1);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != in_stack_000002b8);
    }
    if (in_stack_00000090 != 0) {
      _free(in_stack_000002b0);
    }
  }
  if ((-0x7ffffffffffffffe < in_stack_00000098) && (in_stack_00000098 != 0)) {
    _free(in_stack_00000018);
  }
  if (((in_stack_00000280 & 1) != 0) && (in_stack_00000288 != (long *)0x0)) {
    lVar3 = *in_stack_00000288;
    *in_stack_00000288 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0205a1f6d49d4824E(&stack0x00000288);
    }
  }
  if (in_stack_00000278 != (long *)0x0) {
    lVar3 = *in_stack_00000278;
    *in_stack_00000278 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0205a1f6d49d4824E(&stack0x00000278);
    }
  }
  if (((in_stack_00000088 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000088)) &&
     (in_stack_00000088 != 0)) {
    _free(in_stack_00000078);
  }
  if ((in_stack_00000080 != 0x8000000000000001) && ((in_stack_00000080 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000058);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000068);
  }
  *in_stack_00000060 = 0x8000000000000000;
  in_stack_00000060[1] = uVar2;
  in_stack_000000b0 = in_stack_000000b0 + 1;
  lVar3 = in_stack_000000a8;
  while (in_stack_000000b0 = in_stack_000000b0 + -1, in_stack_000000b0 != 0) {
    FUN_100de5590(lVar3);
    lVar3 = lVar3 + 0xe0;
  }
  if (in_stack_000000a0 != 0) {
    _free(in_stack_000000a8);
  }
  return;
}

