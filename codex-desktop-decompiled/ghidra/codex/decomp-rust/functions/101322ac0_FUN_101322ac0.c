
void FUN_101322ac0(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x25;
  long unaff_x26;
  long in_stack_00000058;
  long in_stack_00000070;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000260;
  long *in_stack_00000268;
  
  FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000260);
  if (in_stack_000000e8 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000070 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        unaff_x26 = unaff_x26 + -1;
      } while (unaff_x26 != 0);
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_00000070);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_00000090) && (in_stack_00000090 != 0)) {
    _free(in_stack_00000128);
  }
  if ((-0x7fffffffffffffff < in_stack_00000098) && (in_stack_00000098 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_000000a0) && (in_stack_000000a0 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_000000a8) && (in_stack_000000a8 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_000000b0) && (in_stack_000000b0 != 0)) {
    _free(in_stack_000000f8);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_00000100);
  }
  if ((-0x7fffffffffffffff < in_stack_000000c0) && (in_stack_000000c0 != 0)) {
    _free(in_stack_00000108);
  }
  if (in_stack_00000088 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000058 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (in_stack_00000088 != 0) {
      _free(in_stack_00000058);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000c8) && (in_stack_000000c8 != 0)) {
    _free(in_stack_00000110);
  }
  if ((-0x7fffffffffffffff < in_stack_000000d0) && (in_stack_000000d0 != 0)) {
    _free(in_stack_00000120);
  }
  if ((-0x7fffffffffffffff < in_stack_000000d8) && (in_stack_000000d8 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_00000118);
  }
  *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
  plVar1 = (long *)FUN_100654604();
  _memcpy(&stack0x00000260,&stack0x000003a0,0x138);
  if (in_stack_00000260 != -0x8000000000000000) {
    if (plVar1 == (long *)0x0) {
      _memcpy(&stack0x00000138,&stack0x00000270,0x128);
    }
    else {
      FUN_100e56904(&stack0x00000260);
      in_stack_00000260 = -0x8000000000000000;
      in_stack_00000268 = plVar1;
    }
    goto LAB_10132317c;
  }
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 1) {
      uVar4 = plVar1[1];
      if ((uVar4 & 3) == 1) {
        puVar5 = (undefined8 *)(uVar4 - 1);
        uVar6 = *puVar5;
        puVar7 = *(undefined8 **)(uVar4 + 7);
        pcVar3 = (code *)*puVar7;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar6);
        }
        if (puVar7[1] != 0) {
          _free(uVar6);
        }
LAB_101323120:
        _free(puVar5);
      }
    }
    else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
      puVar5 = (undefined8 *)plVar1[1];
      goto LAB_101323120;
    }
    _free(plVar1);
  }
  in_stack_00000260 = -0x8000000000000000;
LAB_10132317c:
  if (in_stack_00000260 == -0x8000000000000000) {
    lVar2 = FUN_108832da4(in_stack_00000268);
    *in_stack_000000f0 = -0x8000000000000000;
    in_stack_000000f0[1] = lVar2;
  }
  else {
    _memcpy(in_stack_000000f0 + 2,&stack0x00000138,0x128);
    *in_stack_000000f0 = in_stack_00000260;
    in_stack_000000f0[1] = (long)in_stack_00000268;
  }
  return;
}

