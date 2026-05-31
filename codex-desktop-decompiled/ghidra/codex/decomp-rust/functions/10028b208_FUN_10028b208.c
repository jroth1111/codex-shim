
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10028b208(long param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar12;
  long unaff_x29;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000060;
  long lStack0000000000000068;
  uint in_stack_00000370;
  uint in_stack_00000374;
  
  *(char **)(unaff_x29 + -0x100) = s_encoding_RESET__id__code__108ac96ae;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xe0;
  puStack0000000000000058 = &stack0x00000390;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  lStack0000000000000068 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000050);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar12 = *unaff_x22;
    uVar11 = *(undefined8 *)(lVar12 + 0x20);
    uVar4 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x80) = 5;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x80);
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar12,puVar3,puVar2,unaff_x29 + -0x80,&stack0x00000050);
    }
  }
  lVar12 = *(long *)(unaff_x20 + 0x108);
  if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar12) < 3) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar12 = *(long *)(unaff_x20 + 0x108);
    uVar9 = *(long *)(unaff_x20 + 0x110) - lVar12;
    puVar1 = (undefined2 *)(*(long *)(unaff_x20 + 0x100) + lVar12);
    *(undefined1 *)(puVar1 + 1) = 4;
    *puVar1 = 0;
    if (uVar9 < 3) {
      uVar11 = 3;
      goto LAB_10028ca0c;
    }
    lVar12 = lVar12 + 3;
    *(long *)(unaff_x20 + 0x108) = lVar12;
    if (*(long *)(unaff_x20 + 0x110) != lVar12) goto LAB_10028b42c;
LAB_10028b378:
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar12 = *(long *)(unaff_x20 + 0x108);
    lVar10 = *(long *)(unaff_x20 + 0x110);
    *(undefined1 *)(*(long *)(unaff_x20 + 0x100) + lVar12) = 3;
    if (lVar10 == lVar12) goto LAB_10028b3f8;
    lVar12 = lVar12 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar12;
    if (*(long *)(unaff_x20 + 0x110) == lVar12) goto LAB_10028b3c4;
LAB_10028b44c:
    *(undefined1 *)(*unaff_x21 + lVar12) = 0;
  }
  else {
    lVar10 = *unaff_x21;
    *(undefined1 *)((undefined2 *)(lVar10 + lVar12) + 1) = 4;
    *(undefined2 *)(lVar10 + lVar12) = 0;
    lVar12 = lVar12 + 3;
    *(long *)(unaff_x20 + 0x108) = lVar12;
    if (*(long *)(unaff_x20 + 0x110) == lVar12) goto LAB_10028b378;
LAB_10028b42c:
    *(undefined1 *)(*unaff_x21 + lVar12) = 3;
    lVar12 = lVar12 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar12;
    if (*(long *)(unaff_x20 + 0x110) != lVar12) goto LAB_10028b44c;
LAB_10028b3c4:
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar12 = *(long *)(unaff_x20 + 0x108);
    lVar10 = *(long *)(unaff_x20 + 0x110);
    *(undefined1 *)(*(long *)(unaff_x20 + 0x100) + lVar12) = 0;
    if (lVar10 == lVar12) {
LAB_10028b3f8:
      uVar9 = 0;
      uVar11 = 1;
      goto LAB_10028ca0c;
    }
  }
  lVar12 = lVar12 + 1;
  *(long *)(unaff_x20 + 0x108) = lVar12;
  uVar5 = (in_stack_00000370 & 0xff00ff00) >> 8 | (in_stack_00000370 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar12) < 4) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar12 = *(long *)(unaff_x20 + 0x108);
    uVar9 = *(long *)(unaff_x20 + 0x110) - lVar12;
    *(uint *)(*(long *)(unaff_x20 + 0x100) + lVar12) = uVar5;
    if (3 < uVar9) goto LAB_10028b4b4;
  }
  else {
    *(uint *)(*unaff_x21 + lVar12) = uVar5;
LAB_10028b4b4:
    lVar10 = lVar12 + 4;
    *(long *)(unaff_x20 + 0x108) = lVar10;
    uVar5 = (in_stack_00000374 & 0xff00ff00) >> 8 | (in_stack_00000374 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if (3 < (ulong)(*(long *)(unaff_x20 + 0x110) - lVar10)) {
      *(uint *)(*unaff_x21 + lVar10) = uVar5;
      *(long *)(unaff_x20 + 0x108) = lVar12 + 8;
joined_r0x00010028b544:
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b631e68 - 1 < 2 ||
           ((bRam000000010b631e68 != 0 &&
            (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                               ), cVar7 != '\0')))) &&
          (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                             ), iVar8 != 0)))) {
        lStack0000000000000068 =
             ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E +
             0x30;
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108c74f06;
        *(undefined8 *)(unaff_x29 + -0x78) = 0x1b;
        lVar12 = 0;
        if (*(ulong *)(unaff_x20 + 0x120) <= *(ulong *)(unaff_x20 + 0x108)) {
          lVar12 = *(ulong *)(unaff_x20 + 0x108) - *(ulong *)(unaff_x20 + 0x120);
        }
        *(long *)(unaff_x29 + -0x100) = lVar12;
        *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x100;
        *(undefined **)(unaff_x29 + -200) = &UNK_10b1f48a8;
        puStack0000000000000058 = (undefined1 *)(unaff_x29 + -0xe0);
        uStack0000000000000050 = 1;
        uStack0000000000000060 = 2;
        FUN_10028d2d0(&stack0x00000050);
      }
      else {
        lVar12 = 
        ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000340);
          if (iVar8 != 0) {
            lStack0000000000000068 =
                 ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17h890549b6e1b76b62E
                 + 0x30;
            *(undefined **)(unaff_x29 + -0x80) = &UNK_108c74f06;
            *(undefined8 *)(unaff_x29 + -0x78) = 0x1b;
            lVar10 = 0;
            if (*(ulong *)(unaff_x20 + 0x120) <= *(ulong *)(unaff_x20 + 0x108)) {
              lVar10 = *(ulong *)(unaff_x20 + 0x108) - *(ulong *)(unaff_x20 + 0x120);
            }
            *(long *)(unaff_x29 + -0x100) = lVar10;
            *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
            *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630;
            *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x100;
            *(undefined **)(unaff_x29 + -200) = &UNK_10b1f48a8;
            puStack0000000000000058 = (undefined1 *)(unaff_x29 + -0xe0);
            uStack0000000000000050 = 1;
            uStack0000000000000060 = 2;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar3,puVar2,&stack0x00000340,&stack0x00000050);
          }
        }
      }
      if (in_stack_00000010 != 2) {
        lVar12 = in_stack_00000018;
        if ((in_stack_00000010 & 1) != 0) {
          lVar12 = in_stack_00000018 +
                   (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(in_stack_00000020 + 0x68))(lVar12,&stack0x00000028);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (in_stack_00000030 != 0)) {
        uStack0000000000000050 = *(undefined8 *)(in_stack_00000030 + 0x10);
        puStack0000000000000058 = *(undefined1 **)(in_stack_00000030 + 0x18);
        *(undefined8 **)(unaff_x29 + -0xe0) = &stack0x00000050;
        *(undefined **)(unaff_x29 + -0xd8) = &DAT_1002b2088;
        FUN_1002dafa4(&stack0x00000010,&UNK_108c77ecb,0x15,s_<____108ab67c5,unaff_x29 + -0xe0);
      }
      FUN_1002bdf20(&stack0x00000010);
      return 0xd;
    }
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar12 = *(long *)(unaff_x20 + 0x108);
    uVar9 = *(long *)(unaff_x20 + 0x110) - lVar12;
    *(uint *)(*(long *)(unaff_x20 + 0x100) + lVar12) = uVar5;
    if (3 < uVar9) {
      *(long *)(unaff_x20 + 0x108) = lVar12 + 4;
      goto joined_r0x00010028b544;
    }
  }
  uVar11 = 4;
LAB_10028ca0c:
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar11;
  *(ulong *)(unaff_x29 + -0xd8) = uVar9;
  __ZN5bytes13panic_advance17h894eeb3b0f978370E();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10028cb54);
  (*pcVar6)();
}

