
/* WARNING: Removing unreachable block (ram,0x0001009fdcac) */

undefined1  [16] FUN_1009fdbe0(void)

{
  code *pcVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *unaff_x23;
  long unaff_x27;
  long in_stack_00000128;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00001e80);
  if (*(char *)(unaff_x27 + 0x49) != '\0') {
    __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a06c58);
    (*pcVar1)();
  }
  func_0x000100e17fe8(&stack0x00005280);
  lVar2 = *(long *)(unaff_x19 + 0x1718);
  lVar3 = *(long *)(unaff_x19 + 0x1720);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x18);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(unaff_x19 + 0x1710) != 0) {
    _free(lVar2);
  }
  *(undefined1 *)(in_stack_00000128 + 0x709) = 0;
  lVar3 = **(long **)(unaff_x19 + 0x16e0);
  **(long **)(unaff_x19 + 0x16e0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E(unaff_x19 + 0x16e0);
  }
  if (*(long *)(unaff_x19 + 0x16c8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x16d0));
  }
  if (*(long *)(unaff_x19 + 0x16b0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x16b8));
  }
  *unaff_x23 = 1;
  FUN_100e59938();
  if ((*(long *)(unaff_x19 + 0xe8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xe8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xf0));
  }
  lVar3 = *(long *)(unaff_x19 + 0x88);
  lVar2 = *(long *)(unaff_x19 + 0x90);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    _free(lVar3);
  }
  *(undefined1 *)(in_stack_00000128 + 0x668) = 1;
  return ZEXT816(0);
}

