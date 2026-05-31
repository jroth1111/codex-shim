
/* WARNING: Removing unreachable block (ram,0x0001009fdee0) */

undefined1  [16] FUN_1009fc474(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 uVar7;
  undefined1 *in_stack_000000f0;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000128;
  undefined8 in_stack_00000f68;
  long in_stack_00005290;
  undefined8 in_stack_00005298;
  long in_stack_000052a8;
  undefined8 in_stack_000052b0;
  long in_stack_000052c0;
  undefined8 in_stack_000052c8;
  long in_stack_000052d8;
  undefined8 in_stack_000052e0;
  char in_stack_00005315;
  
  do {
    lVar3 = *(long *)(unaff_x20 + -0x18);
    uVar7 = *(undefined8 *)(unaff_x20 + -0x10);
    if (lVar3 == unaff_x23) {
      if (unaff_x26 - unaff_x20 != 0) {
        uVar6 = (ulong)(unaff_x26 - unaff_x20) / 0x18;
        puVar4 = (undefined8 *)(unaff_x20 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      break;
    }
    *(undefined8 *)(unaff_x24 + 0x10) = *(undefined8 *)(unaff_x20 + -8);
    *(undefined8 *)(unaff_x24 + 8) = uVar7;
    func_0x00010602ab90(s__108ac265a,&stack0x00006900);
    if (lVar3 != 0) {
      _free(in_stack_00000f68);
    }
    bVar2 = unaff_x20 != unaff_x26;
    unaff_x20 = unaff_x20 + 0x18;
  } while (bVar2);
  if (in_stack_00000110 != 0) {
    _free();
  }
  if (in_stack_00005315 == '\x01') {
    if (in_stack_00005290 != 0) {
      _free(in_stack_00005298);
    }
    if (in_stack_000052a8 != 0) {
      _free(in_stack_000052b0);
    }
    if ((in_stack_000052c0 != -0x8000000000000000) && (in_stack_000052c0 != 0)) {
      _free(in_stack_000052c8);
    }
    if ((in_stack_000052d8 != -0x8000000000000000) && (in_stack_000052d8 != 0)) {
      _free(in_stack_000052e0);
    }
    *(undefined1 *)(in_stack_00000128 + 0x6a9) = 0;
    lVar3 = **(long **)(unaff_x19 + 0x16c8);
    **(long **)(unaff_x19 + 0x16c8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E(unaff_x19 + 0x16c8);
    }
    if (*(long *)(unaff_x19 + 0x16b0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x16b8));
    }
    if (*(long *)(unaff_x19 + 0x1690) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1698));
    }
    *in_stack_000000f0 = 1;
    FUN_100e5da1c(in_stack_00000108);
    if ((*(long *)(unaff_x19 + 0xe8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xe8) != 0))
    {
      _free(*(undefined8 *)(unaff_x19 + 0xf0));
    }
    lVar3 = *(long *)(unaff_x19 + 0x88);
    lVar5 = *(long *)(unaff_x19 + 0x90);
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
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      _free(lVar3);
    }
    *(undefined1 *)(in_stack_00000128 + 0x668) = 1;
    return ZEXT816(0);
  }
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a06c58);
  (*pcVar1)();
}

