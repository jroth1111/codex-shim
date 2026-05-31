
/* WARNING: Removing unreachable block (ram,0x0001008603b8) */
/* WARNING: Removing unreachable block (ram,0x000100860454) */
/* WARNING: Removing unreachable block (ram,0x0001008603f8) */
/* WARNING: Removing unreachable block (ram,0x000100860464) */
/* WARNING: Removing unreachable block (ram,0x000100860410) */
/* WARNING: Removing unreachable block (ram,0x000100860438) */
/* WARNING: Removing unreachable block (ram,0x000100860448) */
/* WARNING: Removing unreachable block (ram,0x000100861600) */
/* WARNING: Removing unreachable block (ram,0x000100861608) */
/* WARNING: Removing unreachable block (ram,0x000100861610) */
/* WARNING: Removing unreachable block (ram,0x000100861618) */
/* WARNING: Removing unreachable block (ram,0x00010086039c) */
/* WARNING: Removing unreachable block (ram,0x0001008600fc) */
/* WARNING: Removing unreachable block (ram,0x00010086012c) */
/* WARNING: Removing unreachable block (ram,0x000100860150) */
/* WARNING: Removing unreachable block (ram,0x000100860154) */
/* WARNING: Removing unreachable block (ram,0x0001008602c0) */
/* WARNING: Removing unreachable block (ram,0x0001008602f0) */
/* WARNING: Removing unreachable block (ram,0x000100860314) */
/* WARNING: Removing unreachable block (ram,0x000100860318) */
/* WARNING: Removing unreachable block (ram,0x000100860324) */
/* WARNING: Removing unreachable block (ram,0x000100860338) */
/* WARNING: Removing unreachable block (ram,0x000100860344) */
/* WARNING: Removing unreachable block (ram,0x000100860354) */
/* WARNING: Removing unreachable block (ram,0x000100860368) */
/* WARNING: Removing unreachable block (ram,0x000100860374) */
/* WARNING: Removing unreachable block (ram,0x00010086037c) */
/* WARNING: Removing unreachable block (ram,0x000100860384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085ea68(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 uVar8;
  code *pcVar9;
  long unaff_x19;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plStack0000000000000080;
  undefined1 *puStack0000000000000088;
  long lStack0000000000000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long *in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
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
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_000008e8;
  undefined8 in_stack_000008f0;
  undefined8 in_stack_000008f8;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  undefined8 in_stack_00000918;
  undefined8 in_stack_00000920;
  undefined8 in_stack_00000928;
  undefined8 in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 in_stack_00000968;
  undefined8 in_stack_00000970;
  undefined8 in_stack_00000978;
  undefined8 in_stack_00000980;
  uint7 in_stack_00000989;
  long *in_stack_00000d40;
  undefined1 *in_stack_00000d48;
  long in_stack_00000d50;
  ulong in_stack_00000db0;
  
  plStack0000000000000080 = in_stack_00000d40;
  puStack0000000000000088 = in_stack_00000d48;
  lStack0000000000000090 = in_stack_00000d50;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00000db0 & 3) == 1) {
    uVar11 = *(undefined8 *)(in_stack_00000db0 - 1);
    puVar10 = *(undefined8 **)(in_stack_00000db0 + 7);
    pcVar9 = (code *)*puVar10;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar11);
    }
    if (puVar10[1] != 0) {
      _free(uVar11);
    }
    _free((undefined8 *)(in_stack_00000db0 - 1));
  }
  plVar12 = *(long **)(unaff_x19 + 0x58);
  lVar3 = *plVar12;
  *plVar12 = lVar3 + 1;
  if (lVar3 < 0) goto LAB_100861774;
  uVar11 = *(undefined8 *)(unaff_x19 + 0x48);
  lVar3 = *(long *)(unaff_x19 + 0x50);
  plStack0000000000000080 = plVar12;
  if (lVar3 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = _malloc(lVar3);
    if (lVar5 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_100861774;
    }
  }
  _memcpy(lVar5,uVar11,lVar3);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if (lVar2 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lVar2);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar2);
      goto LAB_100861774;
    }
  }
  _memcpy(lVar6,uVar11,lVar2);
  do {
    lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar4;
  } while (bVar1);
  puVar7 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar7[9] == '\x01') {
LAB_10085fe48:
    if (0x7ffffffffffffffe < *puVar7) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_100861774;
    }
    *puVar7 = *puVar7 + 1;
    in_stack_00000168 = (ulong)in_stack_00000989 << 8;
    plStack0000000000000080 = (long *)&stack0x00000ac0;
    puStack0000000000000088 = &stack0x00000d90;
    lStack0000000000000090 = lVar3;
    in_stack_00000098 = lVar5;
    in_stack_000000a0 = lVar3;
    in_stack_000000a8 = plVar12;
    in_stack_000000b0 = lVar2;
    in_stack_000000b8 = lVar6;
    in_stack_000000c0 = lVar2;
    in_stack_000000c8 = in_stack_000008e8;
    in_stack_000000d0 = in_stack_000008f0;
    in_stack_000000d8 = in_stack_000008f8;
    in_stack_000000e0 = in_stack_00000900;
    in_stack_000000e8 = in_stack_00000908;
    in_stack_000000f0 = in_stack_00000910;
    in_stack_000000f8 = in_stack_00000918;
    in_stack_00000100 = in_stack_00000920;
    in_stack_00000108 = in_stack_00000928;
    in_stack_00000110 = in_stack_00000930;
    in_stack_00000118 = in_stack_00000938;
    in_stack_00000120 = in_stack_00000940;
    in_stack_00000128 = in_stack_00000948;
    in_stack_00000130 = in_stack_00000950;
    in_stack_00000138 = in_stack_00000958;
    in_stack_00000140 = in_stack_00000960;
    in_stack_00000148 = in_stack_00000968;
    in_stack_00000150 = in_stack_00000970;
    in_stack_00000158 = in_stack_00000978;
    in_stack_00000160 = in_stack_00000980;
    if (puVar7[1] != 2) {
      if ((puVar7[1] & 1) == 0) {
        plVar12 = (long *)puVar7[2];
        lVar3 = *plVar12;
        *plVar12 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar12 = (long *)plVar12[0x5e], plVar12 == (long *)0x0 ||
            (lVar3 = *plVar12, *plVar12 = lVar3 + 1, -1 < lVar3)))) {
          _posix_memalign(&stack0x00000cf0,0x80,0x180);
          func_0x0001087c906c(0x80,0x180);
        }
      }
      else {
        plVar12 = (long *)puVar7[2];
        lVar3 = *plVar12;
        *plVar12 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar12 = (long *)plVar12[0x4a], plVar12 == (long *)0x0 ||
            (lVar3 = *plVar12, *plVar12 = lVar3 + 1, -1 < lVar3)))) {
          _posix_memalign(&stack0x00000cf0,0x80,0x180);
          func_0x0001087c906c(0x80,0x180);
        }
      }
      goto LAB_100861774;
    }
    FUN_100cc87e8(&stack0x00000090);
    uVar8 = 0;
    *puVar7 = *puVar7 - 1;
  }
  else {
    if ((char)puVar7[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar7,&DAT_100c35d48);
      *(undefined1 *)(puVar7 + 9) = 1;
      goto LAB_10085fe48;
    }
    FUN_100cc87e8(&stack0x000008b0);
    uVar8 = 1;
  }
  plStack0000000000000080 = (long *)CONCAT71(plStack0000000000000080._1_7_,uVar8);
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00000480,&UNK_10b222150);
LAB_100861774:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100861778);
  (*pcVar9)();
}

