
long * __ZN5hyper5error5Error14new_incomplete17h83dfac80faf6be74E(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 extraout_w1;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  plVar2 = (long *)_malloc(0x18);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 2) = 2;
    return plVar2;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  plVar2 = (long *)_malloc(0x18);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    *(undefined2 *)(plVar2 + 2) = 0x401;
    return plVar2;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  plVar2 = (long *)_malloc(0x18);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 2) = 3;
    return plVar2;
  }
  uVar1 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  plVar2 = (long *)_malloc(0x18);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 2) = uVar1;
    *(undefined1 *)((long)plVar2 + 0x11) = extraout_w1;
    return plVar2;
  }
  auVar10 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  puVar6 = auVar10._8_8_;
  plVar2 = auVar10._0_8_;
  puVar3 = (undefined8 *)_malloc(0x28);
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *puVar6;
    uVar9 = puVar6[3];
    uVar8 = puVar6[2];
    puVar3[1] = puVar6[1];
    *puVar3 = uVar7;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
    puVar3[4] = puVar6[4];
    lVar5 = *plVar2;
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)plVar2[1];
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar5);
      }
      if (puVar6[1] != 0) {
        _free(lVar5);
      }
    }
    *plVar2 = (long)puVar3;
    plVar2[1] = (long)&UNK_10b3b49f8;
    return plVar2;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1057ac518);
  (*pcVar4)();
}

