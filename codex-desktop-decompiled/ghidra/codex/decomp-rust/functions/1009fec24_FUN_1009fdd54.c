
/* WARNING: Removing unreachable block (ram,0x0001009fef80) */

undefined1  [16] FUN_1009fdd54(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  long lVar3;
  undefined8 unaff_x22;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar6;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000878;
  undefined8 in_stack_00000880;
  long in_stack_00001e80;
  long in_stack_00001e88;
  undefined8 in_stack_00005288;
  
  do {
    lVar2 = *(long *)(unaff_x24 + -0x18);
    uVar6 = *(undefined8 *)(unaff_x24 + -0x10);
    if (lVar2 == unaff_x23) {
      in_stack_00001e88 = unaff_x24;
      if (unaff_x26 - unaff_x24 != 0) {
        uVar4 = (ulong)(unaff_x26 - unaff_x24) / 0x18;
        puVar5 = (undefined8 *)(unaff_x24 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      break;
    }
    *(undefined8 *)(unaff_x28 + 0x10) = *(undefined8 *)(unaff_x24 + -8);
    *(undefined8 *)(unaff_x28 + 8) = uVar6;
    in_stack_00000130 = unaff_x28;
    in_stack_00000138 = unaff_x22;
    func_0x00010602ab90(s__108ac265a,&stack0x00000130);
    if (lVar2 != 0) {
      _free(in_stack_00005288);
    }
    bVar1 = unaff_x24 != unaff_x26;
    unaff_x24 = unaff_x24 + 0x18;
  } while (bVar1);
  if (unaff_x21 != 0) {
    _free();
  }
  if (in_stack_00000878 != -0x8000000000000000) {
    in_stack_00000130 = in_stack_00000878;
    in_stack_00000138 = in_stack_00000880;
    FUN_100f3f484(&stack0x00001e80,s_codex_cloud_list___cursor_____108acd86d,&stack0x00001660);
    if (in_stack_00000110 == 0) {
      func_0x00010602ab90(s_To_fetch_the_next_page__run_108acd88d,&stack0x00001e80);
    }
    else {
      func_0x00010602ab90(s_To_fetch_the_next_page__run_108acd88d,&stack0x00001e80);
    }
    if (in_stack_00001e80 != 0) {
      _free(in_stack_00001e88);
    }
    if (in_stack_00000130 != 0) {
      _free(in_stack_00000138);
    }
  }
  FUN_100e33894(in_stack_000000f0,in_stack_00000108);
  if (in_stack_000000d0 != 0) {
    _free(in_stack_000000f0);
  }
  if ((*(long *)(unaff_x19 + 0x1740) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x1740) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x19 + 0x1748));
  }
  lVar2 = **(long **)(unaff_x19 + 0x1710);
  **(long **)(unaff_x19 + 0x1710) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E(unaff_x19 + 0x1710);
  }
  if (*(long *)(unaff_x19 + 0x16f8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1700));
  }
  if ((*(ulong *)(unaff_x19 + 0x16d0) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x16d8));
  }
  *(undefined2 *)(in_stack_00000128 + 0x738) = 1;
  FUN_100e5529c(in_stack_000000c8);
  if ((*(long *)(unaff_x19 + 0xe8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xe8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xf0));
  }
  lVar2 = *(long *)(unaff_x19 + 0x88);
  lVar3 = *(long *)(unaff_x19 + 0x90);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    _free(lVar2);
  }
  *(undefined1 *)(in_stack_00000128 + 0x668) = 1;
  return ZEXT816(0);
}

