
void FUN_10073abd8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  ulong uVar5;
  long lVar6;
  undefined8 *unaff_x23;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000118,s__Error_parsing_project_config_fi_108ac5b90,&stack0x000003d0);
  in_stack_00000188 = in_stack_00000120;
  in_stack_00000180 = in_stack_00000118;
  in_stack_00000190 = in_stack_00000128;
  uVar3 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00000180);
  FUN_100de3b58(&stack0x000000c0);
  *(undefined1 *)((long)unaff_x19 + 0x1d5) = 0;
  if (unaff_x19[0x3c] != 0) {
    _free(unaff_x19[0x3d]);
  }
  if (unaff_x19[0x31] != 0) {
    _free(unaff_x19[0x32]);
  }
  if (unaff_x19[0x2e] != 0) {
    _free(unaff_x19[0x2f]);
  }
  if ((unaff_x19[0x2b] & 0x7fffffffffffffff) == 0) {
    *(undefined1 *)((long)unaff_x19 + 0x1d1) = 0;
    lVar4 = unaff_x19[0x28];
  }
  else {
    _free(unaff_x19[0x2c]);
    *(undefined1 *)((long)unaff_x19 + 0x1d1) = 0;
    lVar4 = unaff_x19[0x28];
  }
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(unaff_x19[0x29]);
  }
  *(undefined1 *)((long)unaff_x19 + 0x1d2) = 0;
  if (unaff_x19[4] != 0) {
    _free(unaff_x19[5]);
  }
  if (unaff_x19[0x25] != 0) {
    _free(unaff_x19[0x26]);
  }
  if (unaff_x19[0x22] != 0) {
    _free(unaff_x19[0x23]);
  }
  uVar5 = unaff_x19[3] - unaff_x19[1];
  if (uVar5 != 0) {
    uVar5 = uVar5 / 0x18;
    puVar2 = (undefined8 *)(unaff_x19[1] + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (unaff_x19[2] != 0) {
    _free(*unaff_x19);
  }
  lVar4 = unaff_x19[0x1d];
  lVar6 = unaff_x19[0x1e];
  if (lVar6 != 0) {
    unaff_x23 = (undefined8 *)(lVar4 + 8);
    do {
      if (unaff_x23[-1] != 0) {
        _free(*unaff_x23);
      }
      unaff_x23 = unaff_x23 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (unaff_x19[0x1c] != 0) {
    _free(lVar4);
  }
  puVar1 = (undefined8 *)unaff_x19[0x1a];
  lVar4 = unaff_x19[0x1b] + 1;
  puVar2 = puVar1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    puVar2 = puVar2 + 0x1d;
    FUN_100e05a40();
    unaff_x23 = puVar2;
  }
  if (unaff_x19[0x19] != 0) {
    _free(puVar1);
  }
  *(undefined1 *)((long)unaff_x19 + 0x1d6) = 0;
  if (unaff_x19[0x13] != 0) {
    _free(unaff_x19[0x14]);
  }
  if (unaff_x19[0x10] != 0) {
    _free(unaff_x19[0x11]);
  }
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar3;
  unaff_x27[2] = unaff_x23;
  unaff_x27[4] = in_stack_000003b8;
  unaff_x27[3] = in_stack_000003b0;
  unaff_x27[5] = in_stack_000003c0;
  *(undefined1 *)((long)unaff_x19 + 0x1d7) = 1;
  return;
}

