
void FUN_10065566c(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong unaff_x21;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x29;
  undefined8 in_stack_00000008;
  long *in_stack_00000018;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  char in_stack_00000070;
  long in_stack_00000258;
  undefined8 in_stack_00000260;
  long in_stack_00000440;
  long *in_stack_00000448;
  long in_stack_00000620;
  undefined8 in_stack_00000628;
  
  thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000440);
  FUN_100d5c778(unaff_x29 + -0xb8);
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000008);
  }
  in_stack_00000070 = in_stack_00000070 + '\x01';
  _memcpy(&stack0x00000650,&stack0x00000270,0x1d0);
  plVar1 = (long *)FUN_100654604(&stack0x00000028);
  _memcpy(&stack0x00000440,&stack0x00000640,0x1f8);
  if (in_stack_00000440 == 5) {
    if (plVar1 != (long *)0x0) {
      if (*plVar1 == 1) {
        uVar5 = plVar1[1];
        if ((uVar5 & 3) == 1) {
          puVar4 = (undefined8 *)(uVar5 - 1);
          uVar6 = *puVar4;
          puVar7 = *(undefined8 **)(uVar5 + 7);
          pcVar3 = (code *)*puVar7;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar6);
          }
          if (puVar7[1] != 0) {
            _free(uVar6);
          }
          goto LAB_10065558c;
        }
      }
      else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
        puVar4 = (undefined8 *)plVar1[1];
LAB_10065558c:
        _free(puVar4);
      }
      _free(plVar1);
    }
  }
  else {
    if (plVar1 == (long *)0x0) {
      _memcpy(in_stack_00000018 + 2,&stack0x00000450,0x1e8);
      *in_stack_00000018 = in_stack_00000440;
      in_stack_00000018[1] = (long)in_stack_00000448;
      _memcpy(&stack0x00000078,in_stack_00000018,0x1f8);
      if (in_stack_00000050 < in_stack_00000048) {
        do {
          if (0x20 < *(byte *)(in_stack_00000040 + in_stack_00000050) ||
              (1L << ((ulong)*(byte *)(in_stack_00000040 + in_stack_00000050) & 0x3f) & 0x100002600U
              ) == 0) {
            lVar2 = thunk_FUN_108831e8c(&stack0x00000028,&stack0x00000440);
            *in_stack_00000018 = 5;
            in_stack_00000018[1] = lVar2;
            if (in_stack_00000258 != 0) {
              _free(in_stack_00000260);
            }
            FUN_100e068b8(&stack0x00000078);
            break;
          }
          in_stack_00000050 = in_stack_00000050 + 1;
        } while (in_stack_00000048 != in_stack_00000050);
      }
      goto LAB_1006556b8;
    }
    if (in_stack_00000620 != 0) {
      _free(in_stack_00000628);
    }
    FUN_100e068b8(&stack0x00000440);
    in_stack_00000448 = plVar1;
  }
  lVar2 = thunk_FUN_108832da4(in_stack_00000448,&stack0x00000028);
  *in_stack_00000018 = 5;
  in_stack_00000018[1] = lVar2;
LAB_1006556b8:
  if (in_stack_00000028 != 0) {
    _free(in_stack_00000030);
  }
  return;
}

