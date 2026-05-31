
void FUN_1009f8580(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  long unaff_x23;
  undefined8 unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000010;
  
  uVar1 = FUN_108858fa8(s_environment_label___D__is_ambigu_108acd8e8,unaff_x29 + -0x70);
  if (unaff_x23 != 0) {
    _free();
  }
  puVar2 = (undefined8 *)(unaff_x28 + 0x20);
  do {
    while( true ) {
      if (puVar2[-4] != 0) {
        _free(puVar2[-3]);
      }
      if (puVar2[-1] == -0x8000000000000000 || puVar2[-1] == 0) break;
      _free(*puVar2);
      if (puVar2[2] == -0x8000000000000000 || puVar2[2] == 0) goto LAB_1009f83e0;
LAB_1009f841c:
      _free(puVar2[3]);
      puVar2 = puVar2 + 10;
      unaff_x27 = unaff_x27 + -1;
      if (unaff_x27 == 0) goto LAB_1009f8430;
    }
    if (puVar2[2] != -0x8000000000000000 && puVar2[2] != 0) goto LAB_1009f841c;
LAB_1009f83e0:
    puVar2 = puVar2 + 10;
    unaff_x27 = unaff_x27 + -1;
  } while (unaff_x27 != 0);
LAB_1009f8430:
  if (in_stack_00000010 != 0) {
    _free();
  }
  FUN_100def764(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x30));
  }
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = unaff_x25;
  *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  return;
}

