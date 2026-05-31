
/* WARNING: Removing unreachable block (ram,0x0001008bdfe8) */
/* WARNING: Removing unreachable block (ram,0x0001008be018) */
/* WARNING: Removing unreachable block (ram,0x0001008be03c) */
/* WARNING: Removing unreachable block (ram,0x0001008be040) */
/* WARNING: Removing unreachable block (ram,0x0001008be0f0) */
/* WARNING: Removing unreachable block (ram,0x0001008be120) */
/* WARNING: Removing unreachable block (ram,0x0001008be144) */
/* WARNING: Removing unreachable block (ram,0x0001008be148) */
/* WARNING: Removing unreachable block (ram,0x0001008be154) */
/* WARNING: Removing unreachable block (ram,0x0001008be168) */
/* WARNING: Removing unreachable block (ram,0x0001008be174) */
/* WARNING: Removing unreachable block (ram,0x0001008be184) */
/* WARNING: Removing unreachable block (ram,0x0001008be194) */
/* WARNING: Removing unreachable block (ram,0x0001008be1a8) */
/* WARNING: Removing unreachable block (ram,0x0001008be1b0) */
/* WARNING: Removing unreachable block (ram,0x0001008be19c) */
/* WARNING: Removing unreachable block (ram,0x0001008be1bc) */
/* WARNING: Removing unreachable block (ram,0x0001008be1c4) */
/* WARNING: Removing unreachable block (ram,0x0001008be1cc) */
/* WARNING: Removing unreachable block (ram,0x0001008be1dc) */
/* WARNING: Removing unreachable block (ram,0x0001008be1e4) */
/* WARNING: Removing unreachable block (ram,0x0001008be1fc) */
/* WARNING: Removing unreachable block (ram,0x0001008be204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bda2c(void)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 unaff_x19;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long unaff_x25;
  undefined8 *unaff_x28;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined1 *in_stack_00000180;
  undefined *in_stack_00000188;
  undefined *in_stack_00000190;
  undefined8 in_stack_00000198;
  long *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined8 in_stack_00004d10;
  undefined8 in_stack_00004d18;
  undefined8 in_stack_00004d20;
  undefined8 in_stack_00004d28;
  undefined8 in_stack_00004d30;
  undefined8 in_stack_00004d38;
  undefined8 in_stack_00004d40;
  undefined8 *in_stack_00005a80;
  undefined1 in_stack_000067b0;
  undefined7 in_stack_000067b1;
  long in_stack_000067b8;
  long in_stack_000067c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000067b0,s_failed_to_login_to_MCP_server_____108aca38d,&stack0x00000180);
  lVar3 = CONCAT71(in_stack_000067b1,in_stack_000067b0);
  (**(code **)*in_stack_00005a80)();
  if (lVar3 != -0x8000000000000000) {
    lVar12 = *(long *)(unaff_x21 + 0x26b8);
    lVar4 = *(long *)(unaff_x21 + 0x26c0);
    if (lVar4 != 0) {
      puVar10 = (undefined8 *)(lVar12 + 8);
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(long *)(unaff_x21 + 0x26b0) != 0) {
      _free(lVar12);
    }
    *(undefined1 *)(unaff_x25 + 0xee) = 0;
    *(undefined2 *)(unaff_x25 + 0xec) = 0;
    if (*(long *)(unaff_x21 + 0x2698) != 0) {
      _free(*(undefined8 *)(unaff_x21 + 0x26a0));
    }
    FUN_100cf8c18(unaff_x21 + 0x2660);
    if (((*(byte *)(unaff_x25 + 0xe9) & 1) != 0) &&
       (lVar4 = *(long *)(unaff_x21 + 0x2638), lVar4 != -0x8000000000000000)) {
      lVar13 = *(long *)(unaff_x21 + 0x2640);
      lVar12 = *(long *)(unaff_x21 + 0x2648);
      if (lVar12 != 0) {
        puVar10 = (undefined8 *)(lVar13 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (lVar4 != 0) {
        _free(lVar13);
      }
    }
    *(undefined1 *)(unaff_x25 + 0xe9) = 0;
    if (*(long *)(unaff_x21 + 0x2620) != 0) {
      _free(*(undefined8 *)(unaff_x21 + 0x2628));
    }
    FUN_100de93d0(unaff_x21 + 0xd8);
    if (((*(byte *)(unaff_x25 + 0xeb) & 1) != 0) && (*(long *)(unaff_x21 + 0xa8) != 0)) {
      _free(*(undefined8 *)(unaff_x21 + 0xb0));
    }
    if (((*(byte *)(unaff_x25 + 0xea) & 1) != 0) &&
       (lVar4 = *(long *)(unaff_x21 + 0xc0), lVar4 != -0x8000000000000000)) {
      lVar12 = *(long *)(unaff_x21 + 200);
      lVar13 = *(long *)(unaff_x21 + 0xd0);
      if (lVar13 != 0) {
        puVar10 = (undefined8 *)(lVar12 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (lVar4 != 0) {
        _free(lVar12);
      }
    }
    *(undefined2 *)(unaff_x25 + 0xea) = 0;
    *(undefined1 *)(unaff_x25 + 0xe8) = 1;
    if (lVar3 == -0x7fffffffffffffff) {
      *unaff_x28 = 0x8000000000000071;
      uVar6 = 3;
    }
    else {
      FUN_100d57fa8(in_stack_000000b0);
      if (lVar3 == -0x8000000000000000) {
        uVar9 = 0x800000000000004b;
        lVar4 = in_stack_000000a8;
        lVar3 = in_stack_000067b8;
      }
      else {
        uVar9 = 0x8000000000000070;
        lVar4 = in_stack_000067c0;
        in_stack_000067c0 = in_stack_000067b8;
        in_stack_00000140 = in_stack_00004d10;
        in_stack_00000148 = in_stack_00004d18;
        in_stack_00000150 = in_stack_00004d20;
        in_stack_00000158 = in_stack_00004d28;
        in_stack_00000160 = in_stack_00004d30;
        in_stack_00000168 = in_stack_00004d38;
        in_stack_00000170 = in_stack_00004d40;
      }
      *unaff_x28 = uVar9;
      unaff_x28[1] = lVar3;
      unaff_x28[2] = in_stack_000067c0;
      unaff_x28[3] = lVar4;
      unaff_x28[4] = in_stack_000000a8;
      unaff_x28[5] = unaff_x19;
      unaff_x28[7] = in_stack_00000148;
      unaff_x28[6] = in_stack_00000140;
      unaff_x28[9] = in_stack_00000158;
      unaff_x28[8] = in_stack_00000150;
      unaff_x28[0xb] = in_stack_00000168;
      unaff_x28[10] = in_stack_00000160;
      uVar6 = 1;
      unaff_x28[0xc] = in_stack_00000170;
      unaff_x28[0xd] = 0xffffffffffff80a5;
    }
    *(undefined1 *)(in_stack_000000b8 + 8) = uVar6;
    return;
  }
  lVar3 = _malloc(0x8000000000000005);
  if (lVar3 == 0) {
    func_0x0001087c9084(1,0x8000000000000005);
    goto LAB_1008be454;
  }
  _memcpy(lVar3,in_stack_000067c0,0x8000000000000005);
  uVar9 = *(undefined8 *)(unaff_x20 + 8);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(lVar3);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_1008be454;
    }
  }
  _memcpy(lVar4,uVar9,lVar3);
  plVar7 = *(long **)(*(long *)(unaff_x21 + 0x90) + 0x148);
  lVar3 = *plVar7;
  *plVar7 = lVar3 + 1;
  if (lVar3 < 0) goto LAB_1008be454;
  do {
    lVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar3;
  } while (bVar1);
  puVar5 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar5[9] == '\x01') {
LAB_1008bde84:
    _memcpy(&stack0x00005a80,&stack0x00004d50,0xd30);
    if (0x7ffffffffffffffe < *puVar5) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1008be454;
    }
    *puVar5 = *puVar5 + 1;
    uVar11 = puVar5[1];
    _memcpy(&stack0x000067b0,&stack0x00004d50,0xd30);
    if (uVar11 != 2) {
      uVar9 = *(undefined8 *)CONCAT71(in_stack_000067b1,in_stack_000067b0);
      if ((uVar11 & 1) == 0) {
        plVar7 = (long *)puVar5[2];
        lVar3 = *plVar7;
        *plVar7 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar8 = (long *)plVar7[0x5e], plVar8 == (long *)0x0 ||
            (lVar3 = *plVar8, *plVar8 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x000074e4,&stack0x00005a90,0xd20);
          in_stack_00000180 = (undefined1 *)0xcc;
          in_stack_00000188 = (undefined *)0x0;
          in_stack_00000190 = &UNK_10b240dc0;
          in_stack_00000198 = 0;
          in_stack_000001b0 = 0;
          in_stack_000001a0 = plVar7;
          in_stack_000001a8 = uVar9;
          _memcpy((ulong)&stack0x00000180 | 0x34,&stack0x000074e0,0xd24);
          _posix_memalign(&stack0x00004ce0,0x80,0xe00);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe00);
        }
      }
      else {
        plVar7 = (long *)puVar5[2];
        lVar3 = *plVar7;
        *plVar7 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar8 = (long *)plVar7[0x4a], plVar8 == (long *)0x0 ||
            (lVar3 = *plVar8, *plVar8 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x000074e4,&stack0x00005a90,0xd20);
          in_stack_00000180 = (undefined1 *)0xcc;
          in_stack_00000188 = (undefined *)0x0;
          in_stack_00000190 = &UNK_10b2403c0;
          in_stack_00000198 = 0;
          in_stack_000001b0 = 0;
          in_stack_000001a0 = plVar7;
          in_stack_000001a8 = uVar9;
          _memcpy((ulong)&stack0x00000180 | 0x34,&stack0x000074e0,0xd24);
          _posix_memalign(&stack0x00004ce0,0x80,0xe00);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe00);
        }
      }
      goto LAB_1008be454;
    }
    FUN_100d844d4(&stack0x000067c0);
    *puVar5 = *puVar5 - 1;
  }
  else {
    if ((char)puVar5[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar5,&DAT_100c35d48);
      *(undefined1 *)(puVar5 + 9) = 1;
      goto LAB_1008bde84;
    }
    FUN_100d844d4(&stack0x00004d60);
  }
  in_stack_00000180 = &stack0x000067b0;
  in_stack_00000188 =
       &
       __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00000180,&UNK_10b225538);
LAB_1008be454:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008be458);
  (*pcVar2)();
}

