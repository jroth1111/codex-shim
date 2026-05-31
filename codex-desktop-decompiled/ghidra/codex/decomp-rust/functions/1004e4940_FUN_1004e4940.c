
void FUN_1004e4940(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long in_stack_00000058;
  long in_stack_00000060;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000020);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar2;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar3 = (undefined8 *)(unaff_x28 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (unaff_x24 != 0) {
      _free();
    }
  }
  lVar1 = in_stack_00000058;
  if ((unaff_x23 != -0x7fffffffffffffff) && (unaff_x23 != -0x8000000000000000)) {
    if (in_stack_00000060 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000058 + 8);
      lVar4 = in_stack_00000060;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (unaff_x23 != 0) {
      _free(lVar1);
    }
  }
  return;
}

