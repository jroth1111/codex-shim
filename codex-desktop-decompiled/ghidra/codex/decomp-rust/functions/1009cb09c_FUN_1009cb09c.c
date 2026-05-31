
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cb09c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined4 *in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xd8,s_method_not_found__108accfe4,&stack0x00000148);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xd8);
  uVar2 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar8 = *(undefined8 *)(unaff_x29 + -200);
  pauVar5 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar5[1][0] == '\x01') {
    _in_stack_000000d0 = *pauVar5;
  }
  else {
    _in_stack_000000d0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar5 + 8) = in_stack_000000d0._8_8_;
    pauVar5[1][0] = 1;
  }
  *(long *)*pauVar5 = in_stack_000000d0 + 1;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 8;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = &UNK_108c56c70;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar6 + 1) = 0x646f;
    *puVar6 = 0x6874656d;
    in_stack_00000130 = 6;
    in_stack_00000140 = 6;
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar3 = *(long *)(unaff_x19 + 0x18);
    in_stack_00000138 = puVar6;
    if (lVar3 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(lVar3);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar3);
        goto LAB_1009cb334;
      }
    }
    _memcpy(lVar7,uVar1,lVar3);
    in_stack_00000148 = 0x8000000000000003;
    in_stack_00000150 = lVar3;
    in_stack_00000158 = lVar7;
    in_stack_00000160 = lVar3;
    FUN_101497a9c(unaff_x29 + -0xd8,&stack0x00000098,&stack0x00000130,&stack0x00000148);
    in_stack_000000e8 = *(undefined8 *)(unaff_x26 + 0x88);
    in_stack_000000e0 = *(long *)(unaff_x26 + 0x80);
    in_stack_000000f8 = *(undefined8 *)(unaff_x26 + 0x98);
    in_stack_000000f0 = *(undefined8 *)(unaff_x26 + 0x90);
    in_stack_00000108 = *(undefined8 *)(unaff_x26 + 0xa8);
    in_stack_00000100 = *(undefined8 *)(unaff_x26 + 0xa0);
    in_stack_00000118 = *(undefined8 *)(unaff_x26 + 0xb8);
    in_stack_00000110 = *(undefined8 *)(unaff_x26 + 0xb0);
    in_stack_00000120 = *(undefined8 *)(unaff_x29 + -0x90);
    if (in_stack_000000e0 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x000000e0);
    }
    *(undefined8 *)(unaff_x19 + 0x30) = uVar9;
    *(undefined **)(unaff_x19 + 0x60) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 0x70) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0x68) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0x80) = in_stack_000000d0;
    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x88) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x50) = in_stack_000000a0;
    *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000098;
    *(undefined4 *)(unaff_x19 + 0x90) = 0xffff80a7;
    *(long *)(unaff_x19 + 0x98) = unaff_x28 + 0x10;
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000088;
    *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000080;
    *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x26 + 0x70) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x26 + 0x68) = uVar9;
    in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0x78);
    in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0x70);
    in_stack_000001e8 = *(undefined8 *)(unaff_x19 + 0x88);
    in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x80);
    in_stack_00000198 = *(undefined8 *)(unaff_x19 + 0x38);
    in_stack_00000190 = *(undefined8 *)(unaff_x19 + 0x30);
    in_stack_000001a8 = *(undefined8 *)(unaff_x19 + 0x48);
    in_stack_000001a0 = *(undefined8 *)(unaff_x19 + 0x40);
    in_stack_000001b8 = *(undefined8 *)(unaff_x19 + 0x58);
    in_stack_000001b0 = *(undefined8 *)(unaff_x19 + 0x50);
    in_stack_000001c8 = *(undefined8 *)(unaff_x19 + 0x68);
    in_stack_000001c0 = *(undefined8 *)(unaff_x19 + 0x60);
    func_0x000100fd3924(unaff_x29 + -0xd8,unaff_x28 + 0x10,&stack0x00000190);
    if (*(long *)(unaff_x29 + -0xd8) != -0x7ffffffffffffffc) {
      FUN_100e30e98(unaff_x29 + -0xd8);
    }
    *(undefined1 *)(unaff_x19 + 0xb0) = 1;
    *(undefined1 *)(unaff_x19 + 0xc0) = 0;
    *(undefined1 *)(unaff_x19 + 0xc1) = 1;
    return;
  }
  func_0x0001087c9084(1,6);
LAB_1009cb334:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1009cb338);
  (*pcVar4)();
}

