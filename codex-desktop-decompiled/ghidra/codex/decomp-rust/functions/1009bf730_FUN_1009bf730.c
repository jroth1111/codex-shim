
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009bf730(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x22;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long *in_stack_00000080;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  
  FUN_100f3f484(&stack0x00000090,s_method_not_found__108accfe4,&stack0x00000390);
  uVar7 = in_stack_000000a0;
  lVar1 = in_stack_00000098;
  lVar3 = in_stack_00000090;
  pauVar4 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar4[1][0] == '\x01') {
    auVar8 = *pauVar4;
  }
  else {
    auVar8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar4 + 8) = auVar8._8_8_;
    pauVar4[1][0] = 1;
  }
  *(long *)*pauVar4 = auVar8._0_8_ + 1;
  *(undefined8 *)(unaff_x25 + 200) = 0;
  *(undefined **)(unaff_x25 + 0xc0) = &UNK_108c56c70;
  *(undefined8 *)(unaff_x25 + 0xd8) = 0;
  *(undefined8 *)(unaff_x25 + 0xd0) = 0;
  FUN_100f15358(&stack0x000008c0,&UNK_108cb495d,6);
  FUN_10068891c(&stack0x00000090,*(undefined8 *)(unaff_x19 + 0xa48),
                *(undefined8 *)(unaff_x19 + 0xa50));
  if (in_stack_00000090 != -0x7ffffffffffffffb) {
    FUN_101497a9c(&stack0x00000090,&stack0x00000690,&stack0x000008c0,&stack0x00000390);
    if (in_stack_00000098 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x00000710);
    }
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000798;
    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000790;
    *(undefined8 *)(unaff_x19 + 0xa88) = in_stack_000006a8;
    *(undefined8 *)(unaff_x19 + 0xa80) = 0;
    *(undefined8 *)(unaff_x19 + 0xa98) = in_stack_000006b8;
    *(undefined8 *)(unaff_x19 + 0xa90) = in_stack_000006b0;
    *(long *)(unaff_x19 + 0xaa8) = auVar8._0_8_;
    *(undefined8 *)(unaff_x19 + 0xaa0) = in_stack_000006c0;
    *(long *)(unaff_x19 + 0xa58) = lVar3;
    *(long *)(unaff_x19 + 0xa60) = lVar1;
    *(undefined8 *)(unaff_x19 + 0xa68) = uVar7;
    *(long *)(unaff_x19 + 0xab0) = auVar8._8_8_;
    *(undefined8 *)(unaff_x19 + 0xa78) = 8;
    *(undefined8 *)(unaff_x19 + 0xa70) = 0;
    *(undefined4 *)(unaff_x19 + 0xab8) = 0xffff80a7;
    *(long *)(unaff_x19 + 0xac0) = unaff_x22 + 0x10;
    uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x19 + 0xad0) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x19 + 0xac8) = uVar7;
    *(undefined1 *)(unaff_x19 + 0xad8) = 0;
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0xad0);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0xac8);
    in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0xab8);
    in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0xaa0);
    in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0xa98);
    in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0xab0);
    in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0xaa8);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0xa60);
    in_stack_00000090 = *(long *)(unaff_x19 + 0xa58);
    in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0xa70);
    in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0xa68);
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0xa80);
    in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0xa78);
    in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0xa90);
    in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0xa88);
    func_0x000100fd3924(&stack0x00000090,unaff_x22 + 0x10,&stack0x00000390);
    if (in_stack_00000090 != -0x7ffffffffffffffc) {
      FUN_100e30e98(&stack0x00000090);
    }
    *(undefined1 *)(unaff_x19 + 0xad8) = 1;
    if (*(long *)(unaff_x19 + 0xa40) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa48));
    }
    if (*(long *)(unaff_x19 + 0x9d8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x9e0));
    }
    if (*(long *)(unaff_x19 + 0x9f0) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x19 + 0x9f0);
    }
    func_0x000100dccb50(*(undefined8 *)(unaff_x19 + 0xa38));
    uVar6 = *(ulong *)(unaff_x19 + 0x698) - 2;
    if (*(ulong *)(unaff_x19 + 0x698) < 2) {
      uVar6 = 1;
    }
    if (0xc < uVar6 && uVar6 != 0x11) {
      func_0x000100deab40(unaff_x19 + 0x698);
    }
    if (((*(byte *)(unaff_x19 + 0x9d1) & 1) != 0) && (in_stack_00000080 != (long *)0x0)) {
      lVar3 = *in_stack_00000080;
      *in_stack_00000080 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000080);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x9d1) = 0;
    plVar5 = *(long **)(unaff_x19 + 0x688);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x688);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x9d2) = 0;
    *(undefined1 *)(unaff_x19 + 0x9d0) = 1;
    return 0;
  }
  *(long *)(unaff_x29 + -0x100) = in_stack_00000098;
  FUN_107c05cb4(&UNK_108cc408f,0x2b,unaff_x29 + -0x100,&UNK_10b234f40,&UNK_10b2299b8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c2604);
  (*pcVar2)();
}

