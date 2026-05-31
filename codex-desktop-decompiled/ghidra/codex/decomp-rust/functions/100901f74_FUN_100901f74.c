
void FUN_100901f74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar8;
  long unaff_x23;
  undefined8 unaff_x25;
  long unaff_x27;
  long lVar9;
  long unaff_x29;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x90,s_invalid_cursor__108aca359,&stack0x00000090);
  lVar3 = *(long *)(unaff_x29 + -0x90);
  lVar4 = *(long *)(unaff_x29 + -0x88);
  lVar9 = *(long *)(unaff_x29 + -0x80);
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000068);
  }
  puVar8 = (undefined8 *)(unaff_x27 + 8);
  do {
    if (puVar8[-1] != 0) {
      _free(*puVar8);
    }
    puVar8 = puVar8 + 3;
    unaff_x23 = unaff_x23 + -1;
  } while (unaff_x23 != 0);
  if (in_stack_00000030 != 0) {
    _free();
  }
  if (((*(long *)(unaff_x19 + 0x50) != -0x8000000000000000) &&
      (*(char *)(unaff_x19 + 0xf1) == '\x01')) && (*(long *)(unaff_x19 + 0x50) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  *(undefined2 *)(unaff_x19 + 0xf0) = 1;
  if (lVar3 == -0x7fffffffffffffff) {
    *unaff_x21 = 0x8000000000000071;
    uVar7 = 3;
  }
  else {
    FUN_100d6ac74(in_stack_00000028);
    bVar6 = lVar3 != -0x8000000000000000;
    uVar2 = 0x8000000000000017;
    lVar5 = lVar4;
    uVar1 = unaff_x25;
    if (bVar6) {
      uVar1 = 0x8000000000000000;
      uVar2 = 0x8000000000000070;
      lVar5 = lVar3;
    }
    *unaff_x21 = uVar2;
    unaff_x21[1] = lVar5;
    lVar3 = lVar9;
    lVar5 = -0x7ffffffffffffffb;
    if (bVar6) {
      lVar3 = lVar4;
      lVar5 = lVar9;
    }
    unaff_x21[2] = lVar3;
    unaff_x21[3] = lVar5;
    lVar3 = -0x8000000000000000;
    if (bVar6) {
      lVar3 = -0x7ffffffffffffffb;
    }
    uVar2 = 0x8000000000000000;
    if (bVar6) {
      uVar2 = unaff_x25;
    }
    unaff_x21[4] = lVar3;
    unaff_x21[5] = uVar1;
    unaff_x21[6] = uVar2;
    unaff_x21[7] = 0x8000000000000000;
    uVar7 = 1;
    unaff_x21[0xd] = 0xffffffffffff80a8;
  }
  *(undefined1 *)(unaff_x19 + 0xf8) = uVar7;
  return;
}

