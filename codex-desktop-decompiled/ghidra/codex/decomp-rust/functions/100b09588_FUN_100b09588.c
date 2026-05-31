
void FUN_100b09588(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack0000000000000100;
  long lStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000280;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  lStack0000000000000108 = unaff_x29 + -0x80;
  uStack0000000000000100 = 1;
  uStack0000000000000110 = 1;
  uStack0000000000000118 = param_1;
  FUN_100b0c8c8(&stack0x00000100);
  auVar9 = FUN_1047c0578(*(undefined8 *)(unaff_x19 + 0x208),*(undefined8 *)(unaff_x19 + 0x210));
  lVar2 = auVar9._8_8_;
  if (lVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = _malloc(lVar2);
    if (lVar3 == 0) {
      func_0x0001087c9084(1,lVar2);
      goto LAB_100b0b51c;
    }
  }
  _memcpy(lVar3,auVar9._0_8_,lVar2);
  in_stack_000001c0 = lVar2;
  in_stack_000001c8 = lVar3;
  in_stack_000001d0 = lVar2;
  uVar4 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(1,&stack0x000001c0);
  in_stack_000001c0 = uVar4;
  puVar5 = (undefined8 *)_malloc(8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = uVar4;
    if (*(long *)(unaff_x19 + 0x200) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x208));
    }
    if (*(long *)(unaff_x19 + 0x1d8) != -0x7fffffffffffffff) {
      *(undefined1 *)(unaff_x19 + 0x1fb) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x1fb) = 0;
    FUN_100e43948(unaff_x19 + 0x158);
    if ((*(long *)(unaff_x19 + 0x110) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x110) != 0)
       ) {
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
    plVar6 = *(long **)(unaff_x19 + 0xe0);
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      *plVar6 = lVar2 + -1;
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
    uVar8 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x20[0xc] = *(undefined8 *)(unaff_x29 + -0xb8);
    unaff_x20[0xb] = uVar4;
    unaff_x20[0xe] = uVar8;
    unaff_x20[0xd] = uVar7;
    uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
    unaff_x20[0x10] = *(undefined8 *)(unaff_x29 + -0x98);
    unaff_x20[0xf] = uVar4;
    uVar4 = *(undefined8 *)(unaff_x29 + -0x100);
    uVar8 = *(undefined8 *)(unaff_x29 + -0xe8);
    uVar7 = *(undefined8 *)(unaff_x29 + -0xf0);
    unaff_x20[4] = *(undefined8 *)(unaff_x29 + -0xf8);
    unaff_x20[3] = uVar4;
    unaff_x20[6] = uVar8;
    unaff_x20[5] = uVar7;
    uVar4 = *(undefined8 *)(unaff_x29 + -0xe0);
    uVar8 = *(undefined8 *)(unaff_x29 + -200);
    uVar7 = *(undefined8 *)(unaff_x29 + -0xd0);
    unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0xd8);
    unaff_x20[7] = uVar4;
    *(undefined1 *)(unaff_x19 + 0x1fc) = 0;
    *unaff_x20 = 2;
    unaff_x20[1] = puVar5;
    unaff_x20[2] = &UNK_10b212e38;
    unaff_x20[0x11] = *(undefined8 *)(unaff_x29 + -0x90);
    unaff_x20[10] = uVar8;
    unaff_x20[9] = uVar7;
    *(undefined1 *)(unaff_x19 + 0x1fa) = 1;
    return;
  }
  func_0x0001087c906c(8,8);
LAB_100b0b51c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b0b520);
  (*pcVar1)();
}

