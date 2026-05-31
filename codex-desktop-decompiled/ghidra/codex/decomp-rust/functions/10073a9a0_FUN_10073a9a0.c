
void FUN_10073a9a0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *unaff_x19;
  long lVar5;
  undefined8 *puVar6;
  undefined1 unaff_w21;
  ulong uVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000c0,s__Failed_to_read_project_config_f_108ac5bb9,&stack0x000003d0);
  in_stack_00000068 = in_stack_000000c8;
  in_stack_00000060 = in_stack_000000c0;
  in_stack_00000070 = in_stack_000000d0;
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(unaff_w21,&stack0x00000060);
  uVar7 = unaff_x19[0x3c];
  if ((uVar7 & 3) == 1) {
    unaff_x23 = *(undefined8 **)(uVar7 - 1);
    puVar6 = *(undefined8 **)(uVar7 + 7);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(unaff_x23);
    }
    if (puVar6[1] != 0) {
      _free(unaff_x23);
    }
    _free((long *)(uVar7 - 1));
  }
  if (unaff_x19[0x31] != 0) {
    _free(unaff_x19[0x32]);
  }
  if (unaff_x19[0x2e] != 0) {
    _free(unaff_x19[0x2f]);
  }
  if ((unaff_x19[0x2b] & 0x7fffffffffffffff) == 0) {
    *(undefined1 *)((long)unaff_x19 + 0x1d1) = 0;
    lVar3 = unaff_x19[0x28];
  }
  else {
    _free(unaff_x19[0x2c]);
    *(undefined1 *)((long)unaff_x19 + 0x1d1) = 0;
    lVar3 = unaff_x19[0x28];
  }
  if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
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
  uVar7 = unaff_x19[3] - unaff_x19[1];
  if (uVar7 != 0) {
    uVar7 = uVar7 / 0x18;
    puVar6 = (undefined8 *)(unaff_x19[1] + 8);
    do {
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (unaff_x19[2] != 0) {
    _free(*unaff_x19);
  }
  lVar3 = unaff_x19[0x1d];
  lVar5 = unaff_x19[0x1e];
  if (lVar5 != 0) {
    unaff_x23 = (undefined8 *)(lVar3 + 8);
    do {
      if (unaff_x23[-1] != 0) {
        _free(*unaff_x23);
      }
      unaff_x23 = unaff_x23 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (unaff_x19[0x1c] != 0) {
    _free(lVar3);
  }
  puVar1 = (undefined8 *)unaff_x19[0x1a];
  lVar3 = unaff_x19[0x1b] + 1;
  puVar6 = puVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    puVar6 = puVar6 + 0x1d;
    FUN_100e05a40();
    unaff_x23 = puVar6;
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
  unaff_x27[1] = uVar2;
  unaff_x27[2] = unaff_x23;
  unaff_x27[4] = in_stack_000003b8;
  unaff_x27[3] = in_stack_000003b0;
  unaff_x27[5] = in_stack_000003c0;
  *(undefined1 *)((long)unaff_x19 + 0x1d7) = 1;
  return;
}

