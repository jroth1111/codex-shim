
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100289fb8(long param_1)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x29;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000060;
  long lStack0000000000000068;
  undefined1 in_stack_00000370;
  undefined8 in_stack_00000371;
  
  *(char **)(unaff_x29 + -0x100) = s_encoding_PING__ack__len__108ab974b;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xe0;
  puStack0000000000000058 = &stack0x00000390;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  lStack0000000000000068 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar7 = *(long *)(unaff_x20 + 0x108);
  if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar7) < 3) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar7 = *(long *)(unaff_x20 + 0x108);
    uVar8 = *(long *)(unaff_x20 + 0x110) - lVar7;
    puVar1 = (undefined2 *)(*(long *)(unaff_x20 + 0x100) + lVar7);
    *(undefined1 *)(puVar1 + 1) = 8;
    *puVar1 = 0;
    if (uVar8 < 3) {
      uVar10 = 3;
      goto LAB_10028ca0c;
    }
    lVar7 = lVar7 + 3;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    if (*(long *)(unaff_x20 + 0x110) != lVar7) goto LAB_10028a890;
LAB_10028a724:
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar7 = *(long *)(unaff_x20 + 0x108);
    lVar9 = *(long *)(unaff_x20 + 0x110);
    *(undefined1 *)(*(long *)(unaff_x20 + 0x100) + lVar7) = 6;
    if (lVar9 == lVar7) {
LAB_10028b3f8:
      uVar8 = 0;
      uVar10 = 1;
      goto LAB_10028ca0c;
    }
    lVar7 = lVar7 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    if (*(long *)(unaff_x20 + 0x110) != lVar7) goto LAB_10028a8b0;
LAB_10028a770:
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar7 = *(long *)(unaff_x20 + 0x108);
    lVar9 = *(long *)(unaff_x20 + 0x110);
    *(undefined1 *)(*(long *)(unaff_x20 + 0x100) + lVar7) = in_stack_00000370;
    if (lVar9 == lVar7) goto LAB_10028b3f8;
    lVar7 = lVar7 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    if (3 < (ulong)(*(long *)(unaff_x20 + 0x110) - lVar7)) goto LAB_10028a8d0;
LAB_10028a7bc:
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar7 = *(long *)(unaff_x20 + 0x108);
    uVar8 = *(long *)(unaff_x20 + 0x110) - lVar7;
    *(undefined4 *)(*(long *)(unaff_x20 + 0x100) + lVar7) = 0;
    if (uVar8 < 4) {
      uVar10 = 4;
      goto LAB_10028ca0c;
    }
    lVar7 = lVar7 + 4;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    uVar8 = *(long *)(unaff_x20 + 0x110) - lVar7;
  }
  else {
    lVar9 = *unaff_x21;
    *(undefined1 *)((undefined2 *)(lVar9 + lVar7) + 1) = 8;
    *(undefined2 *)(lVar9 + lVar7) = 0;
    lVar7 = lVar7 + 3;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    if (*(long *)(unaff_x20 + 0x110) == lVar7) goto LAB_10028a724;
LAB_10028a890:
    *(undefined1 *)(*unaff_x21 + lVar7) = 6;
    lVar7 = lVar7 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    if (*(long *)(unaff_x20 + 0x110) == lVar7) goto LAB_10028a770;
LAB_10028a8b0:
    *(undefined1 *)(*unaff_x21 + lVar7) = in_stack_00000370;
    lVar7 = lVar7 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar7) < 4) goto LAB_10028a7bc;
LAB_10028a8d0:
    *(undefined4 *)(*unaff_x21 + lVar7) = 0;
    lVar7 = lVar7 + 4;
    *(long *)(unaff_x20 + 0x108) = lVar7;
    uVar8 = *(long *)(unaff_x20 + 0x110) - lVar7;
  }
  if (uVar8 < 8) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar7 = *(long *)(unaff_x20 + 0x108);
    uVar8 = *(long *)(unaff_x20 + 0x110) - lVar7;
    *(undefined8 *)(*(long *)(unaff_x20 + 0x100) + lVar7) = in_stack_00000371;
    if (uVar8 < 8) {
      uVar10 = 8;
LAB_10028ca0c:
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
      *(ulong *)(unaff_x29 + -0xd8) = uVar8;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10028cb54);
      (*pcVar4)();
    }
    *(long *)(unaff_x20 + 0x108) = lVar7 + 8;
  }
  else {
    *(undefined8 *)(*unaff_x21 + lVar7) = in_stack_00000371;
    *(long *)(unaff_x20 + 0x108) = lVar7 + 8;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b631eb0 - 1 < 2 ||
       ((bRam000000010b631eb0 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
                           ), cVar5 != '\0')))) &&
      (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE
                         ), iVar6 != 0)))) {
    lStack0000000000000068 =
         ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE +
         0x30;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108c74ed6;
    *(undefined8 *)(unaff_x29 + -0x78) = 0x19;
    lVar7 = 0;
    if (*(ulong *)(unaff_x20 + 0x120) <= *(ulong *)(unaff_x20 + 0x108)) {
      lVar7 = *(ulong *)(unaff_x20 + 0x108) - *(ulong *)(unaff_x20 + 0x120);
    }
    *(long *)(unaff_x29 + -0x100) = lVar7;
    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
    *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630;
    *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x100;
    *(undefined **)(unaff_x29 + -200) = &UNK_10b1f48a8;
    puStack0000000000000058 = (undefined1 *)(unaff_x29 + -0xe0);
    uStack0000000000000050 = 1;
    uStack0000000000000060 = 2;
    FUN_10028d194(&stack0x00000050);
  }
  else {
    lVar7 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE;
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
      iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000310);
      if (iVar6 != 0) {
        lStack0000000000000068 =
             ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he9d8fb419199321fE +
             0x30;
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108c74ed6;
        *(undefined8 *)(unaff_x29 + -0x78) = 0x19;
        lVar9 = 0;
        if (*(ulong *)(unaff_x20 + 0x120) <= *(ulong *)(unaff_x20 + 0x108)) {
          lVar9 = *(ulong *)(unaff_x20 + 0x108) - *(ulong *)(unaff_x20 + 0x120);
        }
        *(long *)(unaff_x29 + -0x100) = lVar9;
        *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x100;
        *(undefined **)(unaff_x29 + -200) = &UNK_10b1f48a8;
        puStack0000000000000058 = (undefined1 *)(unaff_x29 + -0xe0);
        uStack0000000000000050 = 1;
        uStack0000000000000060 = 2;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar7,puVar3,puVar2,&stack0x00000310,&stack0x00000050);
      }
    }
  }
  if (in_stack_00000010 != 2) {
    lVar7 = in_stack_00000018;
    if ((in_stack_00000010 & 1) != 0) {
      lVar7 = in_stack_00000018 + (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(in_stack_00000020 + 0x68))(lVar7,&stack0x00000028);
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

