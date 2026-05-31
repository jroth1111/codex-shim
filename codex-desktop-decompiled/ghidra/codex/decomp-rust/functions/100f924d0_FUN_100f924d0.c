
/* WARNING: Removing unreachable block (ram,0x000100f92d4c) */

undefined1  [16] FUN_100f924d0(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined1 *unaff_x21;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x25;
  
  uVar2 = FUN_108858fa8(s_No_MCP_server_named_____found__108aca36c,&stack0x000004a0);
  if ((*(byte *)(unaff_x25 + 0xf9) & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x2730);
    lVar5 = *(long *)(unaff_x19 + 0x2738);
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(long *)(unaff_x19 + 0x2728) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(unaff_x25 + 0xf9) = 0;
  if (*(long *)(unaff_x19 + 10000) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x2718));
  }
  FUN_100cf8c18(unaff_x19 + 0x26e0);
  lVar5 = **(long **)(unaff_x19 + 0x26d8);
  **(long **)(unaff_x19 + 0x26d8) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(unaff_x19 + 0x26d8);
  }
  FUN_100de93d0(unaff_x19 + 400);
  *(undefined1 *)(unaff_x25 + 0x100) = 0;
  if (((*(byte *)(unaff_x25 + 0xfb) & 1) != 0) && (*(long *)(unaff_x19 + 0x160) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x168));
  }
  if ((*(byte *)(unaff_x25 + 0xfa) & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x180);
    lVar3 = *(long *)(unaff_x19 + 0x188);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(long *)(unaff_x19 + 0x178) != 0) {
      _free(lVar5);
    }
  }
  *(undefined2 *)(unaff_x25 + 0xfa) = 0;
  *unaff_x21 = 1;
  FUN_100e3ae88();
  if (uVar2 == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x98);
    lVar3 = *(long *)(unaff_x19 + 0xa0);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x98);
    lVar3 = *(long *)(unaff_x19 + 0xa0);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    _free(lVar5);
  }
  *(undefined1 *)(unaff_x19 + 0x120) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

