
/* WARNING: Removing unreachable block (ram,0x0001004b83a8) */

void FUN_1004b80e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000080;
  char in_stack_00000090;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x28 = 0x8000000000000000;
  unaff_x28[1] = uVar2;
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  lVar5 = *(long *)(unaff_x29 + -200);
  if (lVar5 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xc0);
    lVar3 = *(long *)(unaff_x29 + -0xb8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      do {
        while (puVar4[-4] != -0x8000000000000000 && puVar4[-4] != 0) {
          _free(puVar4[-3]);
          if (puVar4[-1] == -0x8000000000000000 || puVar4[-1] == 0) goto LAB_1004b8354;
LAB_1004b8380:
          _free(*puVar4);
          lVar3 = lVar3 + -1;
          puVar4 = puVar4 + 8;
          if (lVar3 == 0) goto LAB_1004b8390;
        }
        if (puVar4[-1] != -0x8000000000000000 && puVar4[-1] != 0) goto LAB_1004b8380;
LAB_1004b8354:
        puVar4 = puVar4 + 8;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
LAB_1004b8390:
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000040);
  }
  return;
}

