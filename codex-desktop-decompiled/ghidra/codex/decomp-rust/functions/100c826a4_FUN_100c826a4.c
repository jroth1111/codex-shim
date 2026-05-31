
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c826a4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong *puVar9;
  undefined1 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x23;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_stack_00000050;
  long *in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined6 uStack0000000000000088;
  undefined2 uStack000000000000008e;
  undefined6 in_stack_00000090;
  char *pcStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  short in_stack_000000d0;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  long *in_stack_00000100;
  long in_stack_00000108;
  
  puStack00000000000000a8 = &stack0x00000868;
  pcStack00000000000000a0 = s_connection_accepted_108ad33cc;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00001800);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar14 = *unaff_x20;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00001030);
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar14,puVar3,puVar2,&stack0x00001030,&stack0x00001800);
    }
  }
  puVar12 = *(undefined8 **)(unaff_x19 + 0x58);
  *(undefined8 **)(unaff_x19 + 0xb8) = puVar12;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined1 *)(unaff_x19 + 0xb1) = 0;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x23 + 0x1768) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x23 + 0x1760) = uVar14;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x23 + 0x1778) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x23 + 6000) = uVar14;
  plVar13 = (long *)*puVar12;
  lVar6 = *plVar13;
  *plVar13 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_100c82dc0;
  uVar14 = *(undefined8 *)(unaff_x23 + 0x1760);
  *(undefined8 *)(unaff_x23 + 0xf98) = *(undefined8 *)(unaff_x23 + 0x1768);
  *(undefined8 *)(unaff_x23 + 0xf90) = uVar14;
  uVar17 = *(undefined8 *)(unaff_x23 + 0x1778);
  uVar16 = *(undefined8 *)(unaff_x23 + 6000);
  *(undefined8 *)(unaff_x23 + 0xfa8) = uVar17;
  *(undefined8 *)(unaff_x23 + 4000) = uVar16;
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x23 + 0x1768);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar14;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar17;
  *(undefined8 *)(unaff_x19 + 200) = uVar16;
  *(long **)(unaff_x19 + 0xd8) = plVar13;
  sVar4 = *(short *)(unaff_x19 + 0xb8);
  *(undefined2 *)(unaff_x19 + 0xb8) = 2;
  if (sVar4 == 2) {
    func_0x000108a079f0(&UNK_108cd4bab,0x1f,&UNK_10b24be08);
    goto LAB_100c82dc0;
  }
  in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xc2);
  in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0xba);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xca);
  uStack0000000000000088 = (undefined6)*(undefined8 *)(unaff_x19 + 0xd2);
  uVar14 = *(undefined8 *)(unaff_x19 + 0xd8);
  uStack000000000000008e = (undefined2)uVar14;
  in_stack_00000090 = (undefined6)((ulong)uVar14 >> 0x10);
  plVar13 = (long *)**(undefined8 **)(unaff_x19 + 0x60);
  plVar13[0x29] = plVar13[0x29] + 1;
  lVar6 = *plVar13;
  *plVar13 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_100c82dc0;
  plVar11 = (long *)**(long **)(unaff_x19 + 0x68);
  lVar6 = (*(long **)(unaff_x19 + 0x68))[1];
  lVar7 = *plVar11;
  *plVar11 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_100c82dc0;
  plVar11[0x28] = plVar11[0x28] + 1;
  *(undefined1 *)(unaff_x19 + 0xb2) = 0;
  do {
    in_stack_00000050 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
  } while (bVar1);
  in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x98);
  in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x23 + 0x28) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x23 + 0x20) = uVar16;
  *(undefined8 *)(unaff_x23 + 0x3a) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x32) = in_stack_00000070;
  pcStack00000000000000a0 = (char *)&stack0x00000050;
  puStack00000000000000a8 = &stack0x0000287f;
  *(ulong *)(unaff_x23 + 0x4a) = CONCAT26(uStack000000000000008e,uStack0000000000000088);
  *(undefined8 *)(unaff_x23 + 0x42) = in_stack_00000080;
  in_stack_000000d0 = sVar4;
  in_stack_000000f0 = uVar14;
  in_stack_000000f8 = plVar13;
  in_stack_00000100 = plVar11;
  in_stack_00000108 = lVar6;
  puVar9 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar9[9] == '\x01') {
LAB_100c82980:
    _memcpy(&stack0x00000868,&stack0x000000a0,0x7c8);
    if (0x7ffffffffffffffe < *puVar9) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100c82dc0;
    }
    *puVar9 = *puVar9 + 1;
    uVar15 = puVar9[1];
    _memcpy(&stack0x00001030,&stack0x000000a0,0x7c8);
    if (uVar15 != 2) {
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)puVar9[2];
        lVar6 = *plVar13;
        *plVar13 = lVar6 + 1;
        if (-1 < lVar6) {
          plVar11 = (long *)plVar13[0x5e];
          if (plVar11 == (long *)0x0) {
            lVar6 = 0;
            lVar7 = 0;
          }
          else {
            lVar6 = *plVar11;
            *plVar11 = lVar6 + 1;
            if (lVar6 < 0) goto LAB_100c82dc0;
            lVar7 = plVar13[0x5f];
            lVar6 = plVar13[0x5e];
          }
          _memcpy(&stack0x000020c4,&stack0x00000878,0x7b8);
          _memcpy((ulong)&stack0x00001800 | 0x34,&stack0x000020c0,0x7bc);
          *(long *)(unaff_x23 + 0x1f78) = lVar7;
          *(long *)(unaff_x23 + 0x1f70) = lVar6;
          in_stack_00000060 = (long *)0x0;
          iVar8 = _posix_memalign(&stack0x00000060,0x80,0x880);
          plVar11 = in_stack_00000060;
          if ((iVar8 == 0) && (in_stack_00000060 != (long *)0x0)) {
            _memcpy(in_stack_00000060,&stack0x00001800,0x880);
            lVar6 = FUN_1010e2658(plVar13 + 0x2d,plVar11,plVar11);
            if (plVar13[0x5c] != 0) {
              (**(code **)(plVar13[0x5d] + 0x28))
                        (plVar13[0x5c] + (*(long *)(plVar13[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00001800);
            }
            if (lVar6 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (puVar9 + 2,lVar6);
            }
            goto LAB_100c82c54;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x880);
        }
      }
      else {
        plVar13 = (long *)puVar9[2];
        lVar6 = *plVar13;
        *plVar13 = lVar6 + 1;
        if (-1 < lVar6) {
          plVar11 = (long *)plVar13[0x4a];
          if (plVar11 == (long *)0x0) {
            lVar6 = 0;
            lVar7 = 0;
          }
          else {
            lVar6 = *plVar11;
            *plVar11 = lVar6 + 1;
            if (lVar6 < 0) goto LAB_100c82dc0;
            lVar7 = plVar13[0x4b];
            lVar6 = plVar13[0x4a];
          }
          _memcpy(&stack0x000020c4,&stack0x00000878,0x7b8);
          _memcpy((ulong)&stack0x00001800 | 0x34,&stack0x000020c0,0x7bc);
          *(long *)(unaff_x23 + 0x1f78) = lVar7;
          *(long *)(unaff_x23 + 0x1f70) = lVar6;
          in_stack_00000060 = (long *)0x0;
          iVar8 = _posix_memalign(&stack0x00000060,0x80,0x880);
          plVar11 = in_stack_00000060;
          if ((iVar8 == 0) && (in_stack_00000060 != (long *)0x0)) {
            _memcpy(in_stack_00000060,&stack0x00001800,0x880);
            lVar6 = FUN_1010e2658(plVar13 + 0x11,plVar11,plVar11);
            if (plVar13[0x48] != 0) {
              (**(code **)(plVar13[0x49] + 0x28))
                        (plVar13[0x48] + (*(long *)(plVar13[0x49] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00001800);
            }
            if (lVar6 != 0) {
              FUN_10610fa38(plVar13 + 2,lVar6,0);
            }
LAB_100c82c54:
            *puVar9 = *puVar9 - 1;
            if (*plVar11 == 0xcc) {
              *plVar11 = 0x84;
            }
            else {
              (**(code **)(plVar11[2] + 0x20))(plVar11);
            }
            *(undefined1 *)(unaff_x19 + 0xb2) = 0;
            *(undefined2 *)(unaff_x19 + 0xb0) = 1;
            return;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x880);
        }
      }
      goto LAB_100c82dc0;
    }
    FUN_100de19f4(&stack0x00001040);
    uVar10 = 0;
    *puVar9 = *puVar9 - 1;
  }
  else {
    if ((char)puVar9[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar9,&DAT_100c35d48);
      *(undefined1 *)(puVar9 + 9) = 1;
      goto LAB_100c82980;
    }
    FUN_100de19f4(&stack0x000000b0);
    uVar10 = 1;
  }
  *(undefined1 *)(unaff_x23 + 0xf90) = uVar10;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00001800,&UNK_10b234878);
LAB_100c82dc0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100c82dc4);
  (*pcVar5)();
}

