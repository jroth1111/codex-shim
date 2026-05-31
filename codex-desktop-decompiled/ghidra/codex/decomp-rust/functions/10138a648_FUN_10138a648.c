
void FUN_10138a648(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x21;
  long *plVar4;
  long unaff_x23;
  long lVar5;
  long unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  ulong in_stack_000000c8;
  long *in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  
  in_stack_000000e8 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000e0);
  in_stack_000000e0 = -0x8000000000000000;
  if (in_stack_000000a8 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000028 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (in_stack_000000a8 != 0) {
      _free(in_stack_00000028);
    }
  }
  if (in_stack_000000b0 != -0x8000000000000000) {
    if (unaff_x23 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000030 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (in_stack_000000b0 != 0) {
      _free(in_stack_00000030);
    }
  }
  if (in_stack_000000b8 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000038 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x26 = unaff_x26 + -1;
      } while (unaff_x26 != 0);
    }
    if (in_stack_000000b8 != 0) {
      _free(in_stack_00000038);
    }
  }
  if (in_stack_000000c0 != -0x8000000000000000) {
    if (unaff_x24 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000050 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x24 = unaff_x24 + -1;
      } while (unaff_x24 != 0);
    }
    if (in_stack_000000c0 != 0) {
      _free(in_stack_00000050);
    }
  }
  if (in_stack_00000098 != -0x8000000000000000) {
    if (in_stack_00000048 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000058 + 0x20);
      do {
        if (puVar2[-4] != 0) {
          _free(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        if (puVar2[2] != -0x8000000000000000 && puVar2[2] != 0) {
          _free(puVar2[3]);
        }
        puVar2 = puVar2 + 9;
        in_stack_00000048 = in_stack_00000048 + -1;
      } while (in_stack_00000048 != 0);
    }
    if (in_stack_00000080 != 0) {
      _free(in_stack_00000058);
    }
  }
  if (in_stack_000000a0 != -0x8000000000000000) {
    if (unaff_x27 != 0) {
      lVar3 = 0;
      do {
        plVar4 = (long *)(in_stack_000000d8 + lVar3 * 0x30);
        if (*plVar4 != 0) {
          _free(plVar4[1]);
        }
        lVar1 = plVar4[4];
        lVar5 = plVar4[5];
        if (lVar5 != 0) {
          puVar2 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar2[-1] != 0) {
              _free(*puVar2);
            }
            puVar2 = puVar2 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (plVar4[3] != 0) {
          _free(lVar1);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != unaff_x27);
    }
    if (in_stack_00000088 != 0) {
      _free(in_stack_000000d8);
    }
  }
  FUN_100de8910(&stack0x000001b8);
  if (in_stack_00000170 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000170);
  }
  if (((long)in_stack_000000c8 < 0) &&
     ((in_stack_000000c8 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000090);
  }
  if (in_stack_000000e0 == -0x8000000000000000) {
    *in_stack_000000d0 = -0x7fffffffffffffff;
    in_stack_000000d0[1] = in_stack_000000e8;
  }
  else {
    in_stack_000000d0[0xd] = in_stack_00000148;
    in_stack_000000d0[0xc] = in_stack_00000140;
    in_stack_000000d0[0xf] = in_stack_00000158;
    in_stack_000000d0[0xe] = in_stack_00000150;
    in_stack_000000d0[0x11] = in_stack_00000168;
    in_stack_000000d0[0x10] = in_stack_00000160;
    in_stack_000000d0[5] = in_stack_00000108;
    in_stack_000000d0[4] = in_stack_00000100;
    in_stack_000000d0[7] = in_stack_00000118;
    in_stack_000000d0[6] = in_stack_00000110;
    in_stack_000000d0[9] = in_stack_00000128;
    in_stack_000000d0[8] = in_stack_00000120;
    in_stack_000000d0[0xb] = in_stack_00000138;
    in_stack_000000d0[10] = in_stack_00000130;
    in_stack_000000d0[1] = in_stack_000000e8;
    *in_stack_000000d0 = in_stack_000000e0;
    in_stack_000000d0[3] = in_stack_000000f8;
    in_stack_000000d0[2] = in_stack_000000f0;
  }
  return;
}

