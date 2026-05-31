
void FUN_100a8013c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 extraout_x11_06;
  undefined8 extraout_x11_07;
  undefined8 extraout_x11_08;
  undefined8 extraout_x11_09;
  undefined8 extraout_x11_10;
  undefined8 extraout_x11_11;
  undefined8 uVar3;
  undefined8 extraout_x11_12;
  undefined8 extraout_x11_13;
  undefined8 extraout_x11_14;
  undefined8 extraout_x11_15;
  undefined8 extraout_x11_16;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar4;
  undefined8 *puVar5;
  undefined8 in_stack_000000a0;
  undefined1 uStack00000000000000a8;
  undefined1 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long in_stack_00000268;
  undefined8 *in_stack_00000270;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_000008e0;
  undefined8 in_stack_000008e8;
  undefined8 in_stack_000008f0;
  undefined8 in_stack_000008f8;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  undefined8 in_stack_00000918;
  undefined8 in_stack_00000920;
  undefined8 in_stack_00000928;
  undefined8 in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s__failed_to_materialize_plugin_so_108acf745,&stack0x000001e0);
  uVar3 = extraout_x11;
  if (in_stack_00000268 != 0) {
    if ((code *)*in_stack_00000270 != (code *)0x0) {
      (*(code *)*in_stack_00000270)(in_stack_00000268);
      uVar3 = extraout_x11_00;
    }
    unaff_x21 = in_stack_00000270;
    if (in_stack_00000270[1] != 0) {
      _free(in_stack_00000268);
      uVar3 = extraout_x11_01;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x93b) = 0;
  if (((*(byte *)(unaff_x19 + 0x931) & 1) != 0) && (*(long *)(unaff_x19 + 0x500) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x508));
    uVar3 = extraout_x11_02;
  }
  *(undefined1 *)(unaff_x19 + 0x931) = 0;
  if (*(long *)(unaff_x19 + 0x4d0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x4d8));
    uVar3 = extraout_x11_03;
  }
  if (*(long *)(unaff_x19 + 0x4e8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x4f0));
    uVar3 = extraout_x11_04;
  }
  if (*(long *)(unaff_x19 + 0x280) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x288));
    uVar3 = extraout_x11_05;
  }
  if (((*(byte *)(unaff_x19 + 0x936) & 1) != 0) && (*(long *)(unaff_x19 + 0x298) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x2a0));
    uVar3 = extraout_x11_06;
  }
  if ((*(long *)(unaff_x19 + 0x2c8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x2c8) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x2d0));
    uVar3 = extraout_x11_07;
  }
  if ((*(long *)(unaff_x19 + 0x2e0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x2e0) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x2e8));
    uVar3 = extraout_x11_08;
  }
  if ((*(byte *)(unaff_x19 + 0x935) & 1) == 0) {
LAB_100a80478:
    bVar1 = *(byte *)(unaff_x19 + 0x934);
  }
  else {
    if (*(long *)(unaff_x19 + 0x2f8) == -0x8000000000000000) {
      if (*(long *)(unaff_x19 + 0x300) == 0) goto LAB_100a80478;
      lVar2 = 0x10;
    }
    else {
      if (*(long *)(unaff_x19 + 0x2f8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x300));
        uVar3 = extraout_x11_09;
      }
      if ((*(long *)(unaff_x19 + 0x310) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x310) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x318));
        uVar3 = extraout_x11_10;
      }
      if ((*(long *)(unaff_x19 + 0x328) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x328) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x330));
        uVar3 = extraout_x11_11;
      }
      if ((*(ulong *)(unaff_x19 + 0x340) & 0x7fffffffffffffff) == 0) goto LAB_100a80478;
      lVar2 = 0x50;
    }
    _free(*(undefined8 *)(unaff_x19 + 0x2f8 + lVar2));
    bVar1 = *(byte *)(unaff_x19 + 0x934);
    uVar3 = extraout_x11_13;
  }
  if (((bVar1 & 1) == 0) || ((*(ulong *)(unaff_x19 + 0x358) & 0x7fffffffffffffff) == 0)) {
    bVar1 = *(byte *)(unaff_x19 + 0x933);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x360));
    bVar1 = *(byte *)(unaff_x19 + 0x933);
    uVar3 = extraout_x11_12;
  }
  if ((bVar1 & 1) != 0) {
    func_0x000100ca3a5c(unaff_x19 + 0x378);
    uVar3 = extraout_x11_14;
  }
  if ((*(byte *)(unaff_x19 + 0x932) & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x2b8);
    lVar2 = *(long *)(unaff_x19 + 0x2c0);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
          uVar3 = extraout_x11_15;
        }
        puVar5 = puVar5 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*(long *)(unaff_x19 + 0x2b0) != 0) {
      _free(lVar4);
      uVar3 = extraout_x11_16;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x93c) = 0;
  *(undefined1 *)(unaff_x19 + 0x936) = 0;
  *(undefined4 *)(unaff_x19 + 0x932) = 0;
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = 6;
  unaff_x20[2] = in_stack_00000480;
  unaff_x20[3] = in_stack_00000488;
  unaff_x20[4] = in_stack_00000490;
  unaff_x20[5] = in_stack_000000e8;
  unaff_x20[6] = in_stack_000000f0;
  unaff_x20[7] = unaff_x21;
  unaff_x20[8] = in_stack_000000a0;
  unaff_x20[10] = in_stack_00000958;
  unaff_x20[9] = in_stack_00000950;
  unaff_x20[0xb] = in_stack_00000960;
  unaff_x20[0xc] = 0;
  unaff_x20[0xd] = 8;
  unaff_x20[0xe] = 0;
  unaff_x20[0xf] = 0;
  unaff_x20[0x10] = 8;
  unaff_x20[0x11] = 0;
  unaff_x20[0x12] = 0;
  unaff_x20[0x13] = 8;
  unaff_x20[0x14] = 0;
  unaff_x20[0x15] = 0x8000000000000000;
  unaff_x20[0x16] = uVar3;
  unaff_x20[0x17] = 0x8000000000000000;
  unaff_x20[0x18] = in_stack_000000d8;
  unaff_x20[0x19] = in_stack_000000d0;
  unaff_x20[0x1a] = in_stack_000000b0;
  unaff_x20[0x20] = in_stack_00000918;
  unaff_x20[0x1f] = in_stack_00000910;
  unaff_x20[0x22] = in_stack_00000928;
  unaff_x20[0x21] = in_stack_00000920;
  unaff_x20[0x24] = in_stack_00000938;
  unaff_x20[0x23] = in_stack_00000930;
  unaff_x20[0x26] = in_stack_00000948;
  unaff_x20[0x25] = in_stack_00000940;
  unaff_x20[0x1c] = in_stack_000008f8;
  unaff_x20[0x1b] = in_stack_000008f0;
  unaff_x20[0x1e] = in_stack_00000908;
  unaff_x20[0x1d] = in_stack_00000900;
  unaff_x20[0x27] = in_stack_000000c0;
  unaff_x20[0x28] = in_stack_000000b8;
  unaff_x20[0x2a] = in_stack_000008e8;
  unaff_x20[0x29] = in_stack_000008e0;
  _memcpy(unaff_x20 + 0x2b,&stack0x00000790,0x150);
  unaff_x20[0x56] = in_stack_00000778;
  unaff_x20[0x55] = in_stack_00000770;
  unaff_x20[0x58] = in_stack_00000788;
  unaff_x20[0x57] = in_stack_00000780;
  unaff_x20[0x59] = in_stack_000000c8;
  unaff_x20[0x5a] = in_stack_000000e0;
  *(undefined1 *)(unaff_x20 + 0x5b) = uStack00000000000000ac;
  *(undefined1 *)((long)unaff_x20 + 0x2d9) = uStack00000000000000a8;
  *(undefined1 *)((long)unaff_x20 + 0x2da) = 1;
  *(undefined1 *)(unaff_x19 + 0x930) = 1;
  return;
}

