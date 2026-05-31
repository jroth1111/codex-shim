
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1017e8f28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x19;
  long *unaff_x25;
  long unaff_x29;
  long lVar14;
  undefined8 *in_stack_00000060;
  undefined *in_stack_00000068;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 *in_stack_000001e0;
  undefined *in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  
  *(char **)(unaff_x29 + -0xd0) = s__realtime_websocket_close_failed_108adcfe1;
  *(undefined8 ***)(unaff_x29 + -200) = &stack0x00000060;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25b0a0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xe0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  lVar14 = *unaff_x25;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0xce7) = 0;
  uVar13 = *(undefined8 *)(unaff_x19 + 0xcf0);
  *(undefined **)(unaff_x29 + -0xb8) = in_stack_000001e8;
  *(undefined8 **)(unaff_x29 + -0xc0) = in_stack_000001e0;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_000001f8;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_000001f0;
  FUN_1017b001c(&stack0x00000220,uVar13,unaff_x29 + -0xc0);
  if (1 < lVar14 - 0x15U) {
    FUN_1017a49cc(&stack0x00000220);
  }
  *(undefined1 *)(unaff_x19 + 0xce7) = 0;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
    if (bRam000000010b6271f8 - 1 < 2) {
LAB_1017eaf04:
      uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b6271e8)
      ;
      lVar14 = lRam000000010b6271e8;
      if ((uVar12 & 1) != 0) {
        lVar6 = lRam000000010b6271e8 + 0x30;
        in_stack_000001e0 = (undefined8 *)&UNK_108ce7c6a;
        in_stack_000001e8 = (undefined *)0x3f;
        in_stack_00000060 = &stack0x000001e0;
        in_stack_00000068 = &UNK_10b25b0a0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined8 ***)(unaff_x29 + -0xb8) = &stack0x00000060;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar6;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar14,unaff_x29 + -0xc0);
        lVar14 = lRam000000010b6271e8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000220);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar14,puVar3,puVar2,&stack0x00000220,unaff_x29 + -0xc0);
          }
        }
        goto LAB_1017eb13c;
      }
    }
    else if (bRam000000010b6271f8 != 0) {
      cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                         (0x10b6271e8);
      unaff_x25 = (long *)&stack0x000000e8;
      if (cVar10 != '\0') goto LAB_1017eaf04;
    }
  }
  lVar14 = lRam000000010b6271e8;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_000001d0 = *(undefined8 *)(lRam000000010b6271e8 + 0x20);
    in_stack_000001d8 = *(undefined8 *)(lRam000000010b6271e8 + 0x28);
    in_stack_000001c8 = 3;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000001c8);
    if (iVar11 != 0) {
      *(undefined **)(unaff_x29 + -0xd0) = &UNK_108ce7c6a;
      *(undefined8 *)(unaff_x29 + -200) = 0x3f;
      *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
      *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25b0a0;
      lVar6 = *(long *)(lVar14 + 0x60);
      uVar8 = *(undefined8 *)(lVar14 + 0x68);
      lVar7 = *(long *)(lVar14 + 0x50);
      uVar9 = *(undefined8 *)(lVar14 + 0x58);
      uVar13 = 1;
      if (lVar7 == 0) {
        uVar13 = 2;
      }
      uVar4 = *(undefined4 *)(lVar14 + 8);
      uVar5 = *(undefined4 *)(lVar14 + 0xc);
      in_stack_00000060 = (undefined8 *)&stack0x00000220;
      in_stack_00000068 = (undefined *)CONCAT71(in_stack_00000068._1_7_,1);
      in_stack_000001e0 = &stack0x00000060;
      in_stack_000001e8 = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar6 == 0) {
        uVar1 = 2;
      }
      lVar14 = unaff_x25[0x1c];
      *(long *)(unaff_x29 + -0x88) = unaff_x25[0x1d];
      *(long *)(unaff_x29 + -0x90) = lVar14;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000001d8;
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(undefined8 ***)(unaff_x29 + -0x68) = &stack0x000001e0;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar13;
      *(long *)(unaff_x29 + -0xb8) = lVar7;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar9;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
      *(long *)(unaff_x29 + -0xa0) = lVar6;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar8;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
    }
  }
LAB_1017eb13c:
  FUN_1017a23d0(unaff_x19 + 0x5c0);
  FUN_1017a1214(unaff_x19 + 0x5b0);
  func_0x0001017a1e2c(unaff_x19 + 0x5b8);
  *(undefined1 *)(unaff_x19 + 0xce0) = 1;
  return 0;
}

