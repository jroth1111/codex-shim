
void FUN_100ecc20c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_x24;
  long unaff_x26;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  ulong in_stack_00000090;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  char in_stack_000000c0;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000138;
  long in_stack_00000140;
  
  uVar4 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  unaff_x24[1] = uVar4;
  *unaff_x24 = 0x8000000000000000;
  if ((unaff_x26 != -0x7fffffffffffffff) && (unaff_x26 != -0x8000000000000000)) {
    if ((in_stack_00000140 != 0) && (in_stack_00000140 * 9 != -0x11)) {
      _free(in_stack_00000138 + in_stack_00000140 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000120);
  }
  lVar3 = in_stack_00000118;
  lVar2 = in_stack_00000110;
  if ((in_stack_00000098 != -0x7fffffffffffffff) && (in_stack_00000098 != -0x8000000000000000)) {
    if (in_stack_00000118 != 0) {
      lVar6 = 0;
      do {
        plVar8 = (long *)(lVar2 + lVar6 * 0x48);
        if (*plVar8 != 0) {
          _free(plVar8[1]);
        }
        if (plVar8[3] == -0x8000000000000000 || plVar8[3] == 0) {
          lVar7 = plVar8[6];
        }
        else {
          _free(plVar8[4]);
          lVar7 = plVar8[6];
        }
        if (lVar7 != -0x8000000000000000) {
          lVar1 = plVar8[7];
          lVar9 = plVar8[8];
          if (lVar9 != 0) {
            puVar5 = (undefined8 *)(lVar1 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          if (lVar7 != 0) {
            _free(lVar1);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar3);
    }
    if (in_stack_00000098 != 0) {
      _free(lVar2);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000b0) && (in_stack_000000b0 != 0)) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_00000030);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a8) && (in_stack_000000a8 != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_000000c0 != '\x16') {
    FUN_100e077ec(&stack0x000000c0);
  }
  return;
}

