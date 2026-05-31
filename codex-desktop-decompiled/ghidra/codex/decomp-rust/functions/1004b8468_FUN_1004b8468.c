
/* WARNING: Removing unreachable block (ram,0x0001004b83a8) */

void FUN_1004b8468(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  long in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x28 = 0x8000000000000000;
  unaff_x28[1] = uVar1;
  lVar5 = *(long *)(unaff_x29 + -0x88);
  lVar4 = *(long *)(unaff_x29 + -0x80);
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar5 + 0x20);
    do {
      while (puVar3[-4] == -0x8000000000000000 || puVar3[-4] == 0) {
        if (puVar3[-1] == -0x8000000000000000 || puVar3[-1] == 0) goto LAB_1004b84b4;
LAB_1004b84e0:
        _free(*puVar3);
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 8;
        if (lVar4 == 0) goto LAB_1004b84f0;
      }
      _free(puVar3[-3]);
      if (puVar3[-1] != -0x8000000000000000 && puVar3[-1] != 0) goto LAB_1004b84e0;
LAB_1004b84b4:
      puVar3 = puVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
LAB_1004b84f0:
  if (*(long *)(unaff_x29 + -0x90) != 0) {
    _free(lVar5);
  }
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000058);
  }
  lVar5 = *(long *)(unaff_x29 + -200);
  if ((lVar5 != -0x8000000000000000) && ((unaff_x19 & 1) != 0)) {
    lVar4 = *(long *)(unaff_x29 + -0xc0);
    lVar2 = *(long *)(unaff_x29 + -0xb8);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar4 + 0x20);
      do {
        while (puVar3[-4] == -0x8000000000000000 || puVar3[-4] == 0) {
          if (puVar3[-1] == -0x8000000000000000 || puVar3[-1] == 0) goto LAB_1004b8354;
LAB_1004b8380:
          _free(*puVar3);
          lVar2 = lVar2 + -1;
          puVar3 = puVar3 + 8;
          if (lVar2 == 0) goto LAB_1004b8390;
        }
        _free(puVar3[-3]);
        if (puVar3[-1] != -0x8000000000000000 && puVar3[-1] != 0) goto LAB_1004b8380;
LAB_1004b8354:
        puVar3 = puVar3 + 8;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
LAB_1004b8390:
    if (lVar5 != 0) {
      _free(lVar4);
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

