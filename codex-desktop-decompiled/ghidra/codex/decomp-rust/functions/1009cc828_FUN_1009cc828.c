
undefined1  [16] FUN_1009cc828(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x28;
  long in_stack_00006f00;
  undefined8 in_stack_00006f08;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000ae80,s_error_parsing__c_overrides__108acc8cc,&stack0x00002f80);
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x0000ae80);
  if (in_stack_00006f00 != 0) {
    _free(in_stack_00006f08);
  }
  *(undefined1 *)(unaff_x28 + 0x201) = 0;
  lVar3 = *(long *)(unaff_x19 + 0xb0);
  lVar4 = *(long *)(unaff_x19 + 0xb8);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    _free(lVar3);
  }
  if (*(long *)(unaff_x19 + 0x60) == -0x8000000000000000 || *(long *)(unaff_x19 + 0x60) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x78);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x68));
    lVar3 = *(long *)(unaff_x19 + 0x78);
  }
  if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
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

