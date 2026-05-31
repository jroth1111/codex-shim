
void FUN_100b0a5b0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack00000000000001c0;
  undefined1 *puStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 *in_stack_00000368;
  
  *(char **)(unaff_x29 + -0x80) = s__failed_to_evaluate_method_polic_108ad069a;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000280;
  puStack00000000000001c8 = &stack0x00000380;
  uStack00000000000001c0 = 1;
  uStack00000000000001d0 = 1;
  uStack0000000000000108 = in_stack_00000090;
  uStack0000000000000100 = in_stack_00000088;
  uStack0000000000000110 = in_stack_00000098;
  uStack00000000000001d8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar3 = FUN_100c35750(&UNK_108cb8744,0xb);
  uStack00000000000001c0 = uVar3;
  puVar4 = (undefined8 *)_malloc(8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = uVar3;
    (**(code **)*in_stack_00000368)();
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
    uVar3 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar6 = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x20[0xc] = *(undefined8 *)(unaff_x29 + -0xb8);
    unaff_x20[0xb] = uVar3;
    unaff_x20[0xe] = uVar7;
    unaff_x20[0xd] = uVar6;
    uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
    unaff_x20[0x10] = *(undefined8 *)(unaff_x29 + -0x98);
    unaff_x20[0xf] = uVar3;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x100);
    uVar7 = *(undefined8 *)(unaff_x29 + -0xe8);
    uVar6 = *(undefined8 *)(unaff_x29 + -0xf0);
    unaff_x20[4] = *(undefined8 *)(unaff_x29 + -0xf8);
    unaff_x20[3] = uVar3;
    unaff_x20[6] = uVar7;
    unaff_x20[5] = uVar6;
    uVar3 = *(undefined8 *)(unaff_x29 + -0xe0);
    uVar7 = *(undefined8 *)(unaff_x29 + -200);
    uVar6 = *(undefined8 *)(unaff_x29 + -0xd0);
    unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0xd8);
    unaff_x20[7] = uVar3;
    *(undefined1 *)(unaff_x19 + 0x1fc) = 0;
    *unaff_x20 = 2;
    unaff_x20[1] = puVar4;
    unaff_x20[2] = &UNK_10b212e38;
    unaff_x20[0x11] = *(undefined8 *)(unaff_x29 + -0x90);
    unaff_x20[10] = uVar7;
    unaff_x20[9] = uVar6;
    *(undefined1 *)(unaff_x19 + 0x1fa) = 1;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b0b520);
  (*pcVar1)();
}

