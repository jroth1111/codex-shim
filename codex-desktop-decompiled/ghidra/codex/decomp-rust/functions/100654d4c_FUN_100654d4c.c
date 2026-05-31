
void FUN_100654d4c(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x23;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  char in_stack_00000068;
  
  plVar1 = (long *)thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  in_stack_00000068 = in_stack_00000068 + '\x01';
  plVar2 = (long *)FUN_100654604(&stack0x00000020);
  if (unaff_x20 == -0x8000000000000000) {
    if (plVar2 != (long *)0x0) {
      plVar3 = plVar2;
      if (*plVar2 == 1) {
        uVar7 = plVar2[1];
        if ((uVar7 & 3) == 1) {
          puVar6 = (undefined8 *)(uVar7 - 1);
          uVar8 = *puVar6;
          puVar9 = *(undefined8 **)(uVar7 + 7);
          pcVar5 = (code *)*puVar9;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar8);
          }
          if (puVar9[1] != 0) {
            _free(uVar8);
          }
          goto LAB_100654df0;
        }
      }
      else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
        puVar6 = (undefined8 *)plVar2[1];
LAB_100654df0:
        _free(puVar6);
      }
LAB_100654e7c:
      _free(plVar3);
    }
  }
  else {
    if (plVar2 == (long *)0x0) {
      *unaff_x19 = unaff_x20;
      unaff_x19[1] = (long)plVar1;
      unaff_x19[2] = unaff_x23;
      *(undefined4 *)(unaff_x19 + 3) = in_stack_00000018._4_4_;
      if (in_stack_00000048 < in_stack_00000040) {
        do {
          if (0x20 < *(byte *)(in_stack_00000038 + in_stack_00000048) ||
              (1L << ((ulong)*(byte *)(in_stack_00000038 + in_stack_00000048) & 0x3f) & 0x100002600U
              ) == 0) {
            *(undefined8 *)(unaff_x29 + -0x78) = 0x16;
            lVar4 = thunk_FUN_108831e8c(&stack0x00000020,unaff_x29 + -0x78);
            *unaff_x19 = -0x8000000000000000;
            unaff_x19[1] = lVar4;
            if (unaff_x20 != 0) {
              _free(plVar1);
            }
            break;
          }
          in_stack_00000048 = in_stack_00000048 + 1;
        } while (in_stack_00000040 != in_stack_00000048);
      }
      goto LAB_100654e98;
    }
    plVar3 = plVar1;
    plVar1 = plVar2;
    if (unaff_x20 != 0) goto LAB_100654e7c;
  }
  lVar4 = thunk_FUN_108832da4(plVar1,&stack0x00000020);
  *unaff_x19 = -0x8000000000000000;
  unaff_x19[1] = lVar4;
LAB_100654e98:
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  return;
}

