
/* WARNING: Removing unreachable block (ram,0x0001008e60dc) */
/* WARNING: Removing unreachable block (ram,0x0001008e6110) */
/* WARNING: Removing unreachable block (ram,0x0001008e6138) */
/* WARNING: Removing unreachable block (ram,0x0001008e613c) */
/* WARNING: Removing unreachable block (ram,0x0001008e61fc) */
/* WARNING: Removing unreachable block (ram,0x0001008e6230) */
/* WARNING: Removing unreachable block (ram,0x0001008e6258) */
/* WARNING: Removing unreachable block (ram,0x0001008e625c) */
/* WARNING: Removing unreachable block (ram,0x0001008e6268) */
/* WARNING: Removing unreachable block (ram,0x0001008e627c) */
/* WARNING: Removing unreachable block (ram,0x0001008e6288) */
/* WARNING: Removing unreachable block (ram,0x0001008e6298) */
/* WARNING: Removing unreachable block (ram,0x0001008e62b0) */
/* WARNING: Removing unreachable block (ram,0x0001008e62bc) */
/* WARNING: Removing unreachable block (ram,0x0001008e64e0) */
/* WARNING: Removing unreachable block (ram,0x0001008e62f4) */
/* WARNING: Removing unreachable block (ram,0x0001008e6300) */
/* WARNING: Removing unreachable block (ram,0x0001008e630c) */
/* WARNING: Removing unreachable block (ram,0x0001008e6318) */
/* WARNING: Removing unreachable block (ram,0x0001008e6328) */
/* WARNING: Removing unreachable block (ram,0x0001008e6334) */
/* WARNING: Removing unreachable block (ram,0x0001008e6344) */
/* WARNING: Removing unreachable block (ram,0x0001008e634c) */
/* WARNING: Removing unreachable block (ram,0x0001008e6354) */
/* WARNING: Removing unreachable block (ram,0x0001008e64ec) */
/* WARNING: Removing unreachable block (ram,0x0001008e6360) */
/* WARNING: Removing unreachable block (ram,0x0001008e637c) */
/* WARNING: Removing unreachable block (ram,0x0001008e6398) */
/* WARNING: Removing unreachable block (ram,0x0001008e63a4) */
/* WARNING: Removing unreachable block (ram,0x0001008e63a8) */
/* WARNING: Removing unreachable block (ram,0x0001008e63ac) */
/* WARNING: Removing unreachable block (ram,0x0001008e63b4) */
/* WARNING: Removing unreachable block (ram,0x0001008e63c4) */
/* WARNING: Removing unreachable block (ram,0x0001008e63d0) */
/* WARNING: Removing unreachable block (ram,0x0001008e63f0) */
/* WARNING: Removing unreachable block (ram,0x0001008e63f8) */
/* WARNING: Removing unreachable block (ram,0x0001008e6408) */
/* WARNING: Removing unreachable block (ram,0x0001008e6410) */
/* WARNING: Removing unreachable block (ram,0x0001008e6428) */
/* WARNING: Removing unreachable block (ram,0x0001008e6430) */
/* WARNING: Removing unreachable block (ram,0x0001008e6444) */
/* WARNING: Removing unreachable block (ram,0x0001008e644c) */
/* WARNING: Removing unreachable block (ram,0x0001008e6468) */
/* WARNING: Removing unreachable block (ram,0x0001008e6470) */
/* WARNING: Removing unreachable block (ram,0x0001008e6484) */
/* WARNING: Removing unreachable block (ram,0x0001008e648c) */
/* WARNING: Removing unreachable block (ram,0x0001008e64a0) */
/* WARNING: Removing unreachable block (ram,0x0001008e64a8) */
/* WARNING: Removing unreachable block (ram,0x0001008e64bc) */
/* WARNING: Removing unreachable block (ram,0x0001008e64c4) */
/* WARNING: Removing unreachable block (ram,0x0001008e64cc) */
/* WARNING: Removing unreachable block (ram,0x0001008e64d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008e5d54(void)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 uVar6;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x25;
  long *plVar7;
  undefined8 uVar8;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x19 + 0x788) = 0x8000000000000000;
  *(long *)(unaff_x19 + 0x7f0) = *(long *)(unaff_x19 + 0x708) + 0x10;
  uVar8 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x800) = unaff_x25[1];
  *(undefined8 *)(unaff_x19 + 0x7f8) = uVar8;
  *(undefined1 *)(unaff_x19 + 0x900) = 0;
  uVar4 = FUN_100896250(unaff_x19 + 0x788);
  if ((uVar4 & 1) != 0) {
    uVar6 = 3;
LAB_1008e5e38:
    *unaff_x20 = uVar6;
    *(undefined1 *)(unaff_x19 + 0x6d8) = 0xb;
    return 1;
  }
  FUN_100d13e44(unaff_x19 + 0x788);
  *(long *)(unaff_x19 + 0x788) = unaff_x19 + 0x718;
  *(undefined8 *)(unaff_x19 + 0x798) = *(undefined8 *)(unaff_x19 + 0x6f8);
  *(undefined8 *)(unaff_x19 + 0x790) = *(undefined8 *)(unaff_x19 + 0x6f0);
  *(undefined1 *)(unaff_x19 + 0x7b0) = 0;
  uVar4 = FUN_100888d20(unaff_x19 + 0x788);
  if ((uVar4 & 1) != 0) {
    uVar6 = 4;
    goto LAB_1008e5e38;
  }
  FUN_100ce9ef4(unaff_x19 + 0x788);
  *(undefined1 *)(unaff_x19 + 0x784) = 0;
  *(undefined4 *)(unaff_x19 + 0x780) = 0;
  do {
    lVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar3;
  } while (bVar1);
  puVar5 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar5[9] == '\x01') {
LAB_1008e5f78:
    _memcpy(&stack0x00001160,&stack0x00000390,0xdd0);
    if (0x7ffffffffffffffe < *puVar5) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1008e6ee0;
    }
    *puVar5 = *puVar5 + 1;
    uVar4 = puVar5[1];
    _memcpy(&stack0x00001f30,&stack0x00000390,0xdd0);
    if (uVar4 != 2) {
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)puVar5[2];
        lVar3 = *plVar7;
        *plVar7 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar7 = (long *)plVar7[0x5e], plVar7 == (long *)0x0 ||
            (lVar3 = *plVar7, *plVar7 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x00003bb4,&stack0x00001170,0xdc0);
          _memcpy((ulong)&stack0x00002d00 | 0x34,&stack0x00003bb0,0xdc4);
          _posix_memalign(&stack0x00004978,0x80,0xe80);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe80);
        }
      }
      else {
        plVar7 = (long *)puVar5[2];
        lVar3 = *plVar7;
        *plVar7 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar7 = (long *)plVar7[0x4a], plVar7 == (long *)0x0 ||
            (lVar3 = *plVar7, *plVar7 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x00003bb4,&stack0x00001170,0xdc0);
          _memcpy((ulong)&stack0x00002d00 | 0x34,&stack0x00003bb0,0xdc4);
          _posix_memalign(&stack0x00004978,0x80,0xe80);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe80);
        }
      }
      goto LAB_1008e6ee0;
    }
    FUN_100d73bac(&stack0x00001f40);
    *puVar5 = *puVar5 - 1;
  }
  else {
    if ((char)puVar5[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar5,&DAT_100c35d48);
      *(undefined1 *)(puVar5 + 9) = 1;
      goto LAB_1008e5f78;
    }
    FUN_100d73bac(&stack0x000003a0);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00002d00,&UNK_10b225d90);
LAB_1008e6ee0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008e6ee4);
  (*pcVar2)();
}

