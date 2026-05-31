
void FUN_1009360ac(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x28;
  undefined8 *in_stack_00000090;
  long in_stack_00000520;
  long in_stack_00000530;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  
  FUN_100f3f484(&stack0x00000900,s_invalid_thread_id__108aca2c9,&stack0x00000d00);
  if ((*(byte *)(unaff_x28 + 0x4c3) & 1) != 0) {
    while (FUN_100f3a3c8(&stack0x00000520,&stack0x00000900), in_stack_00000520 != 0) {
      lVar3 = in_stack_00000520 + in_stack_00000530 * 0x18;
      if (*(long *)(lVar3 + 8) != 0) {
        _free(*(undefined8 *)(lVar3 + 0x10));
      }
      if (*(long *)(lVar3 + 0x110) != 0) {
        _free(*(undefined8 *)(lVar3 + 0x118));
      }
    }
  }
  *(undefined1 *)(unaff_x28 + 0x4c3) = 0;
  lVar3 = *(long *)(unaff_x28 + 0x168);
  if ((lVar3 != -0x8000000000000000) && ((*(byte *)(unaff_x28 + 0x4c4) & 1) != 0)) {
    lVar1 = *(long *)(unaff_x28 + 0x170);
    lVar4 = *(long *)(unaff_x28 + 0x178);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  *(undefined1 *)(unaff_x28 + 0x4c4) = 0;
  if (*(long *)(unaff_x28 + 0x150) == -0x8000000000000000 || *(long *)(unaff_x28 + 0x150) == 0) {
    bVar2 = *(byte *)(unaff_x28 + 0x4c5);
  }
  else {
    _free(*(undefined8 *)(unaff_x28 + 0x158));
    bVar2 = *(byte *)(unaff_x28 + 0x4c5);
  }
  if ((((bVar2 & 1) != 0) && (*(long *)(unaff_x28 + 0x138) != -0x8000000000000000)) &&
     (*(long *)(unaff_x28 + 0x138) != 0)) {
    _free(*(undefined8 *)(unaff_x28 + 0x140));
  }
  *(undefined1 *)(unaff_x28 + 0x4c5) = 0;
  if (((*(byte *)(unaff_x28 + 0x4c6) & 1) != 0) && (*(long *)(unaff_x28 + 0x120) != 0)) {
    _free(*(undefined8 *)(unaff_x28 + 0x128));
  }
  *(undefined1 *)(unaff_x28 + 0x4c6) = 0;
  if (((*(byte *)(unaff_x28 + 0x4cb) & 1) != 0) && (*(long *)(unaff_x28 + 0xb8) != 0)) {
    _free(*(undefined8 *)(unaff_x28 + 0xc0));
  }
  if ((((*(byte *)(unaff_x28 + 0x4ca) & 1) != 0) &&
      (*(long *)(unaff_x28 + 0xd0) != -0x8000000000000000)) && (*(long *)(unaff_x28 + 0xd0) != 0)) {
    _free(*(undefined8 *)(unaff_x28 + 0xd8));
  }
  if ((((*(byte *)(unaff_x28 + 0x4c9) & 1) != 0) &&
      (*(long *)(unaff_x28 + 0xe8) != -0x8000000000000000)) && (*(long *)(unaff_x28 + 0xe8) != 0)) {
    _free(*(undefined8 *)(unaff_x28 + 0xf0));
  }
  if (((*(byte *)(unaff_x28 + 0x4c8) & 1) != 0) &&
     (lVar3 = *(long *)(unaff_x28 + 0x100), lVar3 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x28 + 0x108);
    lVar4 = *(long *)(unaff_x28 + 0x110);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  if ((*(byte *)(unaff_x28 + 0x4c7) & 1) != 0) {
    func_0x000100d2eaf0(unaff_x28 + 0x98);
  }
  *(undefined1 *)(unaff_x28 + 0x4cb) = 0;
  *(undefined4 *)(unaff_x28 + 0x4c7) = 0;
  *in_stack_00000090 = in_stack_00000900;
  in_stack_00000090[1] = in_stack_00000908;
  in_stack_00000090[2] = in_stack_00000910;
  in_stack_00000090[3] = 0x8000000000000005;
  in_stack_00000090[0xc] = 0xffffffffffff80a8;
  *(undefined1 *)(unaff_x28 + 0x4b0) = 1;
  return;
}

