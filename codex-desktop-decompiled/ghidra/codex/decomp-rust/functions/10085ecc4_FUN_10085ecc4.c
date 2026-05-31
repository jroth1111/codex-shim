
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

void FUN_10085ecc4(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long *plVar11;
  long in_stack_00000090;
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
  undefined4 in_stack_00000990;
  undefined4 in_stack_00000994;
  undefined4 in_stack_00000998;
  undefined4 in_stack_0000099c;
  
  FUN_100789fdc(&stack0x00000480);
  if (CONCAT44(in_stack_00000994,in_stack_00000990) != 0) {
    _free(CONCAT44(in_stack_0000099c,in_stack_00000998));
  }
  *(undefined1 *)(unaff_x19 + 0xb0) = 1;
  lVar5 = *(long *)(unaff_x19 + 0x88);
  lVar7 = *(long *)(unaff_x19 + 0x90);
  if (lVar7 != 0) {
    puVar10 = (undefined8 *)(lVar5 + 8);
    do {
      if (puVar10[-1] != 0) {
        _free(*puVar10);
      }
      puVar10 = puVar10 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    _free(lVar5);
  }
  plVar11 = *(long **)(unaff_x19 + 0x58);
  lVar5 = *plVar11;
  *plVar11 = lVar5 + 1;
  if (lVar5 < 0) goto LAB_100861774;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  lVar5 = *(long *)(unaff_x19 + 0x50);
  if (lVar5 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = _malloc(lVar5);
    if (lVar7 == 0) {
      func_0x0001087c9084(1,lVar5);
      goto LAB_100861774;
    }
  }
  _memcpy(lVar7,uVar2,lVar5);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar3 = *(long *)(unaff_x19 + 0x38);
  if (lVar3 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = _malloc(lVar3);
    if (lVar8 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_100861774;
    }
  }
  _memcpy(lVar8,uVar2,lVar3);
  do {
    lVar6 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar6;
  } while (bVar1);
  puVar9 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar9[9] == '\x01') {
LAB_10085fe48:
    if (0x7ffffffffffffffe < *puVar9) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_100861774;
    }
    *puVar9 = *puVar9 + 1;
    in_stack_00000168 = (ulong)in_stack_00000989 << 8;
    in_stack_00000090 = lVar5;
    in_stack_00000098 = lVar7;
    in_stack_000000a0 = lVar5;
    in_stack_000000a8 = plVar11;
    in_stack_000000b0 = lVar3;
    in_stack_000000b8 = lVar8;
    in_stack_000000c0 = lVar3;
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
    if (puVar9[1] != 2) {
      if ((puVar9[1] & 1) == 0) {
        plVar11 = (long *)puVar9[2];
        lVar5 = *plVar11;
        *plVar11 = lVar5 + 1;
        if ((-1 < lVar5) &&
           ((plVar11 = (long *)plVar11[0x5e], plVar11 == (long *)0x0 ||
            (lVar5 = *plVar11, *plVar11 = lVar5 + 1, -1 < lVar5)))) {
          _posix_memalign(&stack0x00000cf0,0x80,0x180);
          func_0x0001087c906c(0x80,0x180);
        }
      }
      else {
        plVar11 = (long *)puVar9[2];
        lVar5 = *plVar11;
        *plVar11 = lVar5 + 1;
        if ((-1 < lVar5) &&
           ((plVar11 = (long *)plVar11[0x4a], plVar11 == (long *)0x0 ||
            (lVar5 = *plVar11, *plVar11 = lVar5 + 1, -1 < lVar5)))) {
          _posix_memalign(&stack0x00000cf0,0x80,0x180);
          func_0x0001087c906c(0x80,0x180);
        }
      }
      goto LAB_100861774;
    }
    FUN_100cc87e8(&stack0x00000090);
    *puVar9 = *puVar9 - 1;
  }
  else {
    if ((char)puVar9[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar9,&DAT_100c35d48);
      *(undefined1 *)(puVar9 + 9) = 1;
      goto LAB_10085fe48;
    }
    FUN_100cc87e8(&stack0x000008b0);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00000480,&UNK_10b222150);
LAB_100861774:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100861778);
  (*pcVar4)();
}

