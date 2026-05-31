
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

undefined8 FUN_1008e5af0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 uVar9;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  undefined8 *unaff_x25;
  long *plVar11;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00002d00);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar10 = *unaff_x22;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00001f30);
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar10,puVar3,puVar2,&stack0x00001f30,&stack0x00002d00);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x788) = 0x8000000000000000;
  *(long *)(unaff_x19 + 0x7f0) = *(long *)(unaff_x19 + 0x708) + 0x10;
  uVar10 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x800) = unaff_x25[1];
  *(undefined8 *)(unaff_x19 + 0x7f8) = uVar10;
  *(undefined1 *)(unaff_x19 + 0x900) = 0;
  uVar7 = FUN_100896250(unaff_x19 + 0x788);
  if ((uVar7 & 1) != 0) {
    uVar9 = 3;
LAB_1008e5e38:
    *unaff_x20 = uVar9;
    *(undefined1 *)(unaff_x19 + 0x6d8) = 0xb;
    return 1;
  }
  FUN_100d13e44(unaff_x19 + 0x788);
  *(long *)(unaff_x19 + 0x788) = unaff_x19 + 0x718;
  *(undefined8 *)(unaff_x19 + 0x798) = *(undefined8 *)(unaff_x19 + 0x6f8);
  *(undefined8 *)(unaff_x19 + 0x790) = *(undefined8 *)(unaff_x19 + 0x6f0);
  *(undefined1 *)(unaff_x19 + 0x7b0) = 0;
  uVar7 = FUN_100888d20(unaff_x19 + 0x788);
  if ((uVar7 & 1) != 0) {
    uVar9 = 4;
    goto LAB_1008e5e38;
  }
  FUN_100ce9ef4(unaff_x19 + 0x788);
  *(undefined1 *)(unaff_x19 + 0x784) = 0;
  *(undefined4 *)(unaff_x19 + 0x780) = 0;
  do {
    lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar5;
  } while (bVar1);
  puVar8 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar8[9] == '\x01') {
LAB_1008e5f78:
    _memcpy(&stack0x00001160,&stack0x00000390,0xdd0);
    if (0x7ffffffffffffffe < *puVar8) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1008e6ee0;
    }
    *puVar8 = *puVar8 + 1;
    uVar7 = puVar8[1];
    _memcpy(&stack0x00001f30,&stack0x00000390,0xdd0);
    if (uVar7 != 2) {
      if ((uVar7 & 1) == 0) {
        plVar11 = (long *)puVar8[2];
        lVar5 = *plVar11;
        *plVar11 = lVar5 + 1;
        if ((-1 < lVar5) &&
           ((plVar11 = (long *)plVar11[0x5e], plVar11 == (long *)0x0 ||
            (lVar5 = *plVar11, *plVar11 = lVar5 + 1, -1 < lVar5)))) {
          _memcpy(&stack0x00003bb4,&stack0x00001170,0xdc0);
          _memcpy((ulong)&stack0x00002d00 | 0x34,&stack0x00003bb0,0xdc4);
          _posix_memalign(&stack0x00004978,0x80,0xe80);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe80);
        }
      }
      else {
        plVar11 = (long *)puVar8[2];
        lVar5 = *plVar11;
        *plVar11 = lVar5 + 1;
        if ((-1 < lVar5) &&
           ((plVar11 = (long *)plVar11[0x4a], plVar11 == (long *)0x0 ||
            (lVar5 = *plVar11, *plVar11 = lVar5 + 1, -1 < lVar5)))) {
          _memcpy(&stack0x00003bb4,&stack0x00001170,0xdc0);
          _memcpy((ulong)&stack0x00002d00 | 0x34,&stack0x00003bb0,0xdc4);
          _posix_memalign(&stack0x00004978,0x80,0xe80);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe80);
        }
      }
      goto LAB_1008e6ee0;
    }
    FUN_100d73bac(&stack0x00001f40);
    *puVar8 = *puVar8 - 1;
  }
  else {
    if ((char)puVar8[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar8,&DAT_100c35d48);
      *(undefined1 *)(puVar8 + 9) = 1;
      goto LAB_1008e5f78;
    }
    FUN_100d73bac(&stack0x000003a0);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00002d00,&UNK_10b225d90);
LAB_1008e6ee0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008e6ee4);
  (*pcVar4)();
}

