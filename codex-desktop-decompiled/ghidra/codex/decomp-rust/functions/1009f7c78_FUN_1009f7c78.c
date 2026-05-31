
void FUN_1009f7c78(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000038,s_No_diff_available_for_task___it_m_108acd8af,unaff_x29 + -0x70);
  in_stack_00000168 = in_stack_00000040;
  in_stack_00000160 = in_stack_00000038;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000048;
  uVar1 = FUN_108856624(unaff_x29 + -0x90);
  lVar3 = *(long *)(unaff_x19 + 0xa8);
  lVar4 = *(long *)(unaff_x19 + 0xb0);
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)(lVar3 + 0x18);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 7;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    _free(lVar3);
  }
  if (*(long *)(unaff_x19 + 0x68) == -0x8000000000000000 || *(long *)(unaff_x19 + 0x68) == 0) {
    puVar2 = *(undefined8 **)(unaff_x19 + 0x40);
    lVar3 = *(long *)(unaff_x19 + 0x48);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x70));
    puVar2 = *(undefined8 **)(unaff_x19 + 0x40);
    lVar3 = *(long *)(unaff_x19 + 0x48);
  }
  if (lVar3 != 0) {
    puVar5 = puVar2 + 1;
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    _free(puVar2);
  }
  if (((*(long *)(unaff_x19 + 0x80) != -0x8000000000000000) &&
      ((*(byte *)(unaff_x19 + 0xc0) & 1) != 0)) && (*(long *)(unaff_x19 + 0x80) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x88));
  }
  lVar3 = *(long *)(unaff_x19 + 0x58);
  lVar4 = *(long *)(unaff_x19 + 0x60);
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    _free(lVar3);
  }
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  *unaff_x28 = 0x8000000000000000;
  unaff_x28[1] = uVar1;
  unaff_x28[2] = puVar2;
  *(undefined1 *)(unaff_x19 + 0xc2) = 1;
  return;
}

