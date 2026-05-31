
undefined1  [16] FUN_1009ccc44(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x28;
  ulong in_stack_00006f00;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000ee00,s_error_loading_config__108acd283,&stack0x0000ae80);
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x0000ee00);
  if ((in_stack_00006f00 & 3) == 1) {
    uVar7 = *(undefined8 *)(in_stack_00006f00 - 1);
    puVar5 = *(undefined8 **)(in_stack_00006f00 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar7);
    }
    if (puVar5[1] != 0) {
      _free(uVar7);
    }
    _free((undefined8 *)(in_stack_00006f00 - 1));
  }
  *(undefined1 *)(unaff_x28 + 0x1f9) = 0;
  *(undefined1 *)(unaff_x28 + 0x201) = 0;
  lVar4 = *(long *)(unaff_x19 + 0xb0);
  lVar6 = *(long *)(unaff_x19 + 0xb8);
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    _free(lVar4);
  }
  if (*(long *)(unaff_x19 + 0x60) == -0x8000000000000000 || *(long *)(unaff_x19 + 0x60) == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x78);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x68));
    lVar4 = *(long *)(unaff_x19 + 0x78);
  }
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x80));
  }
  if ((*(ulong *)(unaff_x19 + 0x90) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *(undefined1 *)(unaff_x28 + 0x1fa) = 0;
  *(undefined1 *)(unaff_x28 + 0x1f1) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

