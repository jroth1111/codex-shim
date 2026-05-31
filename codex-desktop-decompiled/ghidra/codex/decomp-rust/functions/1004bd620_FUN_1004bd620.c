
/* WARNING: Removing unreachable block (ram,0x0001004bd788) */
/* WARNING: Removing unreachable block (ram,0x0001004bd78c) */
/* WARNING: Removing unreachable block (ram,0x0001004bd790) */
/* WARNING: Removing unreachable block (ram,0x0001004bd7a4) */
/* WARNING: Removing unreachable block (ram,0x0001004bd7a8) */
/* WARNING: Removing unreachable block (ram,0x0001004bd7c0) */

void FUN_1004bd620(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 *puVar3;
  uint unaff_w26;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  char in_stack_00000110;
  long in_stack_00000138;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000388;
  long in_stack_00000390;
  long in_stack_00000408;
  undefined8 in_stack_00000410;
  
  lVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000430);
  *unaff_x20 = -0x8000000000000000;
  unaff_x20[1] = lVar2;
  if (in_stack_00000100 != 0) {
    _free();
  }
  if ((in_stack_000000c0 != -0x7fffffffffffffff) && (in_stack_000000c0 != -0x8000000000000000)) {
    if (in_stack_000000c0 != 0) {
      _free(in_stack_00000030);
    }
    if ((in_stack_00000408 != -0x8000000000000000) && (in_stack_00000408 != 0)) {
      _free(in_stack_00000410);
    }
  }
  if (1 < in_stack_000000c8 + 0x7ffffffffffffffbU) {
    FUN_100de6690(&stack0x000003a0);
  }
  if ((-0x7ffffffffffffffe < in_stack_000000d0) && (in_stack_000000d0 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_000000d8) && (in_stack_000000d8 != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_00000048);
  }
  if (((in_stack_00000108 != -0x7ffffffffffffffc) && (in_stack_00000108 != -0x7ffffffffffffffd)) &&
     (-0x7ffffffffffffffe < in_stack_00000108)) {
    if (in_stack_00000390 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000388 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        in_stack_00000390 = in_stack_00000390 + -1;
      } while (in_stack_00000390 != 0);
    }
    if (in_stack_00000108 != 0) {
      _free(in_stack_00000388);
    }
  }
  if ((in_stack_000000f8 != -0x7fffffffffffffff) && (in_stack_000000f8 != -0x8000000000000000)) {
    if (in_stack_00000378 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000370 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        in_stack_00000378 = in_stack_00000378 + -1;
      } while (in_stack_00000378 != 0);
    }
    if (in_stack_000000f8 != 0) {
      _free(in_stack_00000370);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_00000050);
  }
  if ((in_stack_000000f0 != -0x7fffffffffffffff) && (in_stack_000000f0 != -0x8000000000000000)) {
    if (in_stack_00000360 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000358 + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 6;
        in_stack_00000360 = in_stack_00000360 + -1;
      } while (in_stack_00000360 != 0);
    }
    if (in_stack_000000f0 != 0) {
      _free(in_stack_00000358);
    }
  }
  if (((in_stack_000000b8 & 1) != 0) && (unaff_x27 != 0)) {
    FUN_100cb56bc(&stack0x00000320);
  }
  if (*unaff_x20 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000130);
    if (in_stack_00000110 != '\x16') {
      FUN_100e077ec(&stack0x00000110);
    }
  }
  else {
    _memcpy(&stack0x00000158);
    lVar1 = in_stack_00000148;
    lVar2 = in_stack_00000138;
    FUN_100d34830(&stack0x00000130);
    if (lVar1 == lVar2) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_1087e422c(in_stack_00000150 + ((ulong)(lVar1 - lVar2) >> 6),&stack0x00000430
                                  ,&UNK_10b23a190);
    }
    if (in_stack_00000110 != '\x16') {
      FUN_100e077ec(&stack0x00000110);
    }
    if (lVar2 == 0) {
      _memcpy();
    }
    else {
      *unaff_x20 = -0x8000000000000000;
      unaff_x20[1] = lVar2;
      FUN_100e4f2ec(&stack0x00000158);
    }
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

