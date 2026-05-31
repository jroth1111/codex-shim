
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82590(void)

{
  bool bVar1;
  short sVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong *puVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x19;
  ulong uVar14;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 *puStack0000000000000050;
  undefined *puStack0000000000000058;
  char *pcStack0000000000000060;
  undefined1 *puStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined6 uStack0000000000000088;
  undefined2 uStack000000000000008e;
  undefined6 in_stack_00000090;
  undefined1 *puStack00000000000000a0;
  undefined1 *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  short in_stack_000000d0;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  long *in_stack_00000100;
  long in_stack_00000108;
  
  puStack0000000000000068 = &stack0x000020c0;
  pcStack0000000000000060 = s_connection_accepted_108ad33cc;
  puStack0000000000000050 = (undefined1 *)&stack0x00000060;
  puStack0000000000000058 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x23 + 0x1798) = in_stack_00000040;
  *(undefined8 *)(unaff_x23 + 0x1790) = in_stack_00000038;
  puStack00000000000000a0 = &stack0x00001030;
  in_stack_000000a8 = (undefined1 *)CONCAT71(in_stack_000000a8._1_7_,1);
  (**(code **)(unaff_x22 + 0x20))();
  puVar11 = *(undefined8 **)(unaff_x19 + 0x58);
  *(undefined8 **)(unaff_x19 + 0xb8) = puVar11;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined1 *)(unaff_x19 + 0xb1) = 0;
  uVar13 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x23 + 0x1768) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x23 + 0x1760) = uVar13;
  uVar13 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x23 + 0x1778) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x23 + 6000) = uVar13;
  plVar12 = (long *)*puVar11;
  lVar4 = *plVar12;
  *plVar12 = lVar4 + 1;
  if (lVar4 < 0) goto LAB_100c82dc0;
  uVar13 = *(undefined8 *)(unaff_x23 + 0x1760);
  *(undefined8 *)(unaff_x23 + 0xf98) = *(undefined8 *)(unaff_x23 + 0x1768);
  *(undefined8 *)(unaff_x23 + 0xf90) = uVar13;
  uVar16 = *(undefined8 *)(unaff_x23 + 0x1778);
  uVar15 = *(undefined8 *)(unaff_x23 + 6000);
  *(undefined8 *)(unaff_x23 + 0xfa8) = uVar16;
  *(undefined8 *)(unaff_x23 + 4000) = uVar15;
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x23 + 0x1768);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar16;
  *(undefined8 *)(unaff_x19 + 200) = uVar15;
  *(long **)(unaff_x19 + 0xd8) = plVar12;
  sVar2 = *(short *)(unaff_x19 + 0xb8);
  *(undefined2 *)(unaff_x19 + 0xb8) = 2;
  if (sVar2 == 2) {
    func_0x000108a079f0(&UNK_108cd4bab,0x1f,&UNK_10b24be08);
    goto LAB_100c82dc0;
  }
  in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xc2);
  in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0xba);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xca);
  uStack0000000000000088 = (undefined6)*(undefined8 *)(unaff_x19 + 0xd2);
  uVar13 = *(undefined8 *)(unaff_x19 + 0xd8);
  uStack000000000000008e = (undefined2)uVar13;
  in_stack_00000090 = (undefined6)((ulong)uVar13 >> 0x10);
  plVar12 = (long *)**(undefined8 **)(unaff_x19 + 0x60);
  plVar12[0x29] = plVar12[0x29] + 1;
  lVar4 = *plVar12;
  *plVar12 = lVar4 + 1;
  if (lVar4 < 0) goto LAB_100c82dc0;
  plVar10 = (long *)**(long **)(unaff_x19 + 0x68);
  lVar4 = (*(long **)(unaff_x19 + 0x68))[1];
  lVar5 = *plVar10;
  *plVar10 = lVar5 + 1;
  if (lVar5 < 0) goto LAB_100c82dc0;
  plVar10[0x28] = plVar10[0x28] + 1;
  *(undefined1 *)(unaff_x19 + 0xb2) = 0;
  do {
    puStack0000000000000050 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    puVar6 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (undefined1 *)0x0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = puVar6;
  } while (bVar1);
  in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x98);
  in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x23 + 0x28) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x23 + 0x20) = uVar15;
  *(undefined8 *)(unaff_x23 + 0x3a) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x32) = in_stack_00000070;
  puStack00000000000000a0 = (undefined1 *)&stack0x00000050;
  in_stack_000000a8 = &stack0x0000287f;
  *(ulong *)(unaff_x23 + 0x4a) = CONCAT26(uStack000000000000008e,uStack0000000000000088);
  *(undefined8 *)(unaff_x23 + 0x42) = in_stack_00000080;
  in_stack_000000d0 = sVar2;
  in_stack_000000f0 = uVar13;
  in_stack_000000f8 = plVar12;
  in_stack_00000100 = plVar10;
  in_stack_00000108 = lVar4;
  puVar8 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar8[9] == '\x01') {
LAB_100c82980:
    _memcpy(&stack0x00000868,&stack0x000000a0,0x7c8);
    if (0x7ffffffffffffffe < *puVar8) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100c82dc0;
    }
    *puVar8 = *puVar8 + 1;
    uVar14 = puVar8[1];
    _memcpy(&stack0x00001030,&stack0x000000a0,0x7c8);
    if (uVar14 != 2) {
      if ((uVar14 & 1) == 0) {
        plVar12 = (long *)puVar8[2];
        lVar4 = *plVar12;
        *plVar12 = lVar4 + 1;
        if (-1 < lVar4) {
          plVar10 = (long *)plVar12[0x5e];
          if (plVar10 == (long *)0x0) {
            lVar4 = 0;
            lVar5 = 0;
          }
          else {
            lVar4 = *plVar10;
            *plVar10 = lVar4 + 1;
            if (lVar4 < 0) goto LAB_100c82dc0;
            lVar5 = plVar12[0x5f];
            lVar4 = plVar12[0x5e];
          }
          _memcpy(&stack0x000020c4,&stack0x00000878,0x7b8);
          _memcpy((ulong)&stack0x00001800 | 0x34,&stack0x000020c0,0x7bc);
          *(long *)(unaff_x23 + 0x1f78) = lVar5;
          *(long *)(unaff_x23 + 0x1f70) = lVar4;
          pcStack0000000000000060 = (char *)0x0;
          iVar7 = _posix_memalign(&stack0x00000060,0x80,0x880);
          plVar10 = (long *)pcStack0000000000000060;
          if ((iVar7 == 0) && ((long *)pcStack0000000000000060 != (long *)0x0)) {
            _memcpy(pcStack0000000000000060,&stack0x00001800,0x880);
            lVar4 = FUN_1010e2658(plVar12 + 0x2d,plVar10,plVar10);
            if (plVar12[0x5c] != 0) {
              (**(code **)(plVar12[0x5d] + 0x28))
                        (plVar12[0x5c] + (*(long *)(plVar12[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00001800);
            }
            if (lVar4 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (puVar8 + 2,lVar4);
            }
            goto LAB_100c82c54;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x880);
        }
      }
      else {
        plVar12 = (long *)puVar8[2];
        lVar4 = *plVar12;
        *plVar12 = lVar4 + 1;
        if (-1 < lVar4) {
          plVar10 = (long *)plVar12[0x4a];
          if (plVar10 == (long *)0x0) {
            lVar4 = 0;
            lVar5 = 0;
          }
          else {
            lVar4 = *plVar10;
            *plVar10 = lVar4 + 1;
            if (lVar4 < 0) goto LAB_100c82dc0;
            lVar5 = plVar12[0x4b];
            lVar4 = plVar12[0x4a];
          }
          _memcpy(&stack0x000020c4,&stack0x00000878,0x7b8);
          _memcpy((ulong)&stack0x00001800 | 0x34,&stack0x000020c0,0x7bc);
          *(long *)(unaff_x23 + 0x1f78) = lVar5;
          *(long *)(unaff_x23 + 0x1f70) = lVar4;
          pcStack0000000000000060 = (char *)0x0;
          iVar7 = _posix_memalign(&stack0x00000060,0x80,0x880);
          plVar10 = (long *)pcStack0000000000000060;
          if ((iVar7 == 0) && ((long *)pcStack0000000000000060 != (long *)0x0)) {
            _memcpy(pcStack0000000000000060,&stack0x00001800,0x880);
            lVar4 = FUN_1010e2658(plVar12 + 0x11,plVar10,plVar10);
            if (plVar12[0x48] != 0) {
              (**(code **)(plVar12[0x49] + 0x28))
                        (plVar12[0x48] + (*(long *)(plVar12[0x49] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00001800);
            }
            if (lVar4 != 0) {
              FUN_10610fa38(plVar12 + 2,lVar4,0);
            }
LAB_100c82c54:
            *puVar8 = *puVar8 - 1;
            if (*plVar10 == 0xcc) {
              *plVar10 = 0x84;
            }
            else {
              (**(code **)(plVar10[2] + 0x20))(plVar10);
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
    uVar9 = 0;
    *puVar8 = *puVar8 - 1;
  }
  else {
    if ((char)puVar8[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar8,&DAT_100c35d48);
      *(undefined1 *)(puVar8 + 9) = 1;
      goto LAB_100c82980;
    }
    FUN_100de19f4(&stack0x000000b0);
    uVar9 = 1;
  }
  *(undefined1 *)(unaff_x23 + 0xf90) = uVar9;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00001800,&UNK_10b234878);
LAB_100c82dc0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100c82dc4);
  (*pcVar3)();
}

