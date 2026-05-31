
void FUN_100b09d9c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack0000000000000100;
  long lStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_000001c0;
  undefined8 *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000280;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  lStack0000000000000108 = unaff_x29 + -0x80;
  uStack0000000000000100 = 1;
  uStack0000000000000110 = 1;
  uStack0000000000000118 = param_1;
  FUN_100b0bc60(&stack0x00000100);
  puVar3 = (undefined8 *)_malloc(0x23);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x23);
  }
  else {
    puVar3[1] = 0x776f6c6c6120746f;
    *puVar3 = 0x6e20646f6874654d;
    puVar3[3] = 0x6f6d20646574696d;
    puVar3[2] = 0x696c206e69206465;
    *(undefined4 *)((long)puVar3 + 0x1f) = 0x2e65646f;
    in_stack_000001c0 = 0x23;
    in_stack_000001d0 = 0x23;
    in_stack_000001c8 = puVar3;
    uVar4 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(1,&stack0x000001c0);
    in_stack_000001c0 = uVar4;
    puVar3 = (undefined8 *)_malloc(8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar4;
      if ((*(long *)(unaff_x19 + 0x110) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x110) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x118));
      }
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x100));
      }
      lVar2 = **(long **)(unaff_x19 + 0xf0);
      **(long **)(unaff_x19 + 0xf0) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
      plVar5 = *(long **)(unaff_x19 + 0xe0);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        *plVar5 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
        }
      }
      if (*(char *)(unaff_x19 + 0xd0) != '\0') {
        lVar2 = **(long **)(unaff_x19 + 0xd8);
        **(long **)(unaff_x19 + 0xd8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
        }
      }
      func_0x000100dfd554(unaff_x19 + 0x78);
      uVar4 = *(undefined8 *)(unaff_x29 + -0xc0);
      uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xb0);
      unaff_x20[0xc] = *(undefined8 *)(unaff_x29 + -0xb8);
      unaff_x20[0xb] = uVar4;
      unaff_x20[0xe] = uVar7;
      unaff_x20[0xd] = uVar6;
      uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
      unaff_x20[0x10] = *(undefined8 *)(unaff_x29 + -0x98);
      unaff_x20[0xf] = uVar4;
      uVar4 = *(undefined8 *)(unaff_x29 + -0x100);
      uVar7 = *(undefined8 *)(unaff_x29 + -0xe8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xf0);
      unaff_x20[4] = *(undefined8 *)(unaff_x29 + -0xf8);
      unaff_x20[3] = uVar4;
      unaff_x20[6] = uVar7;
      unaff_x20[5] = uVar6;
      uVar4 = *(undefined8 *)(unaff_x29 + -0xe0);
      uVar7 = *(undefined8 *)(unaff_x29 + -200);
      uVar6 = *(undefined8 *)(unaff_x29 + -0xd0);
      unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0xd8);
      unaff_x20[7] = uVar4;
      *(undefined1 *)(unaff_x19 + 0x1fc) = 0;
      *unaff_x20 = 2;
      unaff_x20[1] = puVar3;
      unaff_x20[2] = &UNK_10b212e38;
      unaff_x20[0x11] = *(undefined8 *)(unaff_x29 + -0x90);
      unaff_x20[10] = uVar7;
      unaff_x20[9] = uVar6;
      *(undefined1 *)(unaff_x19 + 0x1fa) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b0b520);
  (*pcVar1)();
}

