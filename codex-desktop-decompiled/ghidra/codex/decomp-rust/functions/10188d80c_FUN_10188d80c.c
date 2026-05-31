
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10188d80c(void)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 *in_stack_00000110;
  undefined8 in_stack_00000118;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s__Input_exceeds_the_maximum_lengt_108add699,unaff_x29 + -0xb0);
  pauVar2 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar2[1][0] == '\x01') {
    _in_stack_000000b0 = *pauVar2;
  }
  else {
    _in_stack_000000b0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar2 + 8) = in_stack_000000b0._8_8_;
    pauVar2[1][0] = 1;
  }
  *(long *)*pauVar2 = in_stack_000000b0 + 1;
  in_stack_00000078 = 0;
  in_stack_00000080 = 8;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined **)(unaff_x22 + 0x18) = &UNK_108cea360;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  in_stack_00000088 = 0;
  uVar4 = 0x10;
  puVar3 = (undefined8 *)_malloc(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0x65646f635f726f72;
    *puVar3 = 0x72655f7475706e69;
    in_stack_00000108 = 0x10;
    in_stack_00000118 = 0x10;
    in_stack_00000110 = puVar3;
    puVar3 = (undefined8 *)_malloc(0xf);
    if (puVar3 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0xf);
      goto LAB_10188daf4;
    }
    *puVar3 = 0x6f745f7475706e69;
    *(undefined8 *)((long)puVar3 + 7) = 0x656772616c5f6f6f;
    *(undefined8 *)(unaff_x29 + -0xf8) = 0xf;
    *(undefined8 *)(unaff_x29 + -0x100) = 0x8000000000000003;
    *(undefined8 **)(unaff_x29 + -0xf0) = puVar3;
    *(undefined8 *)(unaff_x29 + -0xe8) = 0xf;
    FUN_101aa29a0(unaff_x29 + -0xb0,&stack0x00000078,&stack0x00000108,unaff_x29 + -0x100);
    in_stack_000000c8 = *(undefined8 *)(unaff_x23 + 0x10);
    in_stack_000000c0 = *(long *)(unaff_x23 + 8);
    in_stack_000000d8 = *(undefined8 *)(unaff_x23 + 0x20);
    in_stack_000000d0 = *(undefined8 *)(unaff_x23 + 0x18);
    in_stack_000000e8 = *(undefined8 *)(unaff_x23 + 0x30);
    in_stack_000000e0 = *(undefined8 *)(unaff_x23 + 0x28);
    in_stack_000000f8 = *(undefined8 *)(unaff_x23 + 0x40);
    in_stack_000000f0 = *(undefined8 *)(unaff_x23 + 0x38);
    in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x68);
    if (in_stack_000000c0 != unaff_x26) {
      func_0x00010194dc28(&stack0x000000c0);
    }
    uVar4 = 9;
    puVar3 = (undefined8 *)_malloc(9);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar3 + 1) = 0x73;
      *puVar3 = 0x726168635f78616d;
      in_stack_00000108 = 9;
      in_stack_00000118 = 9;
      *(undefined8 *)(unaff_x29 + -0xf8) = 0;
      *(undefined8 *)(unaff_x29 + -0x100) = 0x8000000000000002;
      *(undefined8 *)(unaff_x29 + -0xf0) = 0x100000;
      in_stack_00000110 = puVar3;
      FUN_101aa29a0(unaff_x29 + -0xb0,&stack0x00000078,&stack0x00000108,unaff_x29 + -0x100);
      in_stack_000000c8 = *(undefined8 *)(unaff_x23 + 0x10);
      in_stack_000000c0 = *(long *)(unaff_x23 + 8);
      in_stack_000000d8 = *(undefined8 *)(unaff_x23 + 0x20);
      in_stack_000000d0 = *(undefined8 *)(unaff_x23 + 0x18);
      in_stack_000000e8 = *(undefined8 *)(unaff_x23 + 0x30);
      in_stack_000000e0 = *(undefined8 *)(unaff_x23 + 0x28);
      in_stack_000000f8 = *(undefined8 *)(unaff_x23 + 0x40);
      in_stack_000000f0 = *(undefined8 *)(unaff_x23 + 0x38);
      in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x68);
      if (in_stack_000000c0 != unaff_x26) {
        func_0x00010194dc28(&stack0x000000c0);
      }
      uVar4 = 0xc;
      puVar3 = (undefined8 *)_malloc(0xc);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = 0x73726168;
        *puVar3 = 0x635f6c6175746361;
        in_stack_00000108 = 0xc;
        in_stack_00000118 = 0xc;
        *(undefined8 *)(unaff_x29 + -0xf8) = 0;
        *(undefined8 *)(unaff_x29 + -0x100) = 0x8000000000000002;
        *(undefined8 *)(unaff_x29 + -0xf0) = unaff_x24;
        in_stack_00000110 = puVar3;
        FUN_101aa29a0(unaff_x29 + -0xb0,&stack0x00000078,&stack0x00000108,unaff_x29 + -0x100);
        in_stack_000000c8 = *(undefined8 *)(unaff_x23 + 0x10);
        in_stack_000000c0 = *(long *)(unaff_x23 + 8);
        in_stack_000000d8 = *(undefined8 *)(unaff_x23 + 0x20);
        in_stack_000000d0 = *(undefined8 *)(unaff_x23 + 0x18);
        in_stack_000000e8 = *(undefined8 *)(unaff_x23 + 0x30);
        in_stack_000000e0 = *(undefined8 *)(unaff_x23 + 0x28);
        in_stack_000000f8 = *(undefined8 *)(unaff_x23 + 0x40);
        in_stack_000000f0 = *(undefined8 *)(unaff_x23 + 0x38);
        in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x68);
        if (in_stack_000000c0 != unaff_x26) {
          func_0x00010194dc28(&stack0x000000c0);
        }
        uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
        unaff_x19[9] = *(undefined8 *)(unaff_x22 + 0x30);
        unaff_x19[8] = uVar6;
        unaff_x19[0xb] = in_stack_000000b8;
        unaff_x19[10] = uVar4;
        unaff_x19[0xc] = 0xffffffffffff80a6;
        unaff_x19[1] = in_stack_00000018;
        *unaff_x19 = in_stack_00000010;
        unaff_x19[3] = in_stack_00000078;
        unaff_x19[2] = in_stack_00000020;
        unaff_x19[5] = in_stack_00000088;
        unaff_x19[4] = in_stack_00000080;
        unaff_x19[7] = uVar5;
        unaff_x19[6] = in_stack_00000090;
        return;
      }
    }
  }
  func_0x0001087c9084(1,uVar4);
LAB_10188daf4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10188daf8);
  (*pcVar1)();
}

