
/* WARNING: Removing unreachable block (ram,0x00010028c928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10028ae34(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 uVar5;
  ushort uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar14;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  undefined8 in_stack_00000388;
  code *in_stack_000003b0;
  
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000370;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xe0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar14 = *unaff_x22;
    uVar13 = *(undefined8 *)(lVar14 + 0x20);
    uVar15 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x80) = 5;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar13;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar15;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x80);
    if (iVar9 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar14,puVar3,puVar2,unaff_x29 + -0x80,unaff_x29 + -0xe0);
    }
  }
  uVar10 = (in_stack_00000060 + 8 & 0xff00ff00ff00ff00) >> 8 |
           (in_stack_00000060 + 8 & 0xff00ff00ff00ff) << 8;
  uVar12 = uVar10 & 0xffff0000ffff;
  uVar6 = (ushort)(uVar10 >> 0x18) & 0xff | (ushort)((uVar12 << 0x10) >> 8);
  lVar14 = *(long *)(unaff_x20 + 0x108);
  uVar5 = (undefined1)(uVar12 >> 8);
  if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar14) < 3) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar14 = *(long *)(unaff_x20 + 0x108);
    uVar10 = *(long *)(unaff_x20 + 0x110) - lVar14;
    puVar1 = (ushort *)(*(long *)(unaff_x20 + 0x100) + lVar14);
    *puVar1 = uVar6;
    *(undefined1 *)(puVar1 + 1) = uVar5;
    if (uVar10 < 3) {
      uVar13 = 3;
    }
    else {
      lVar14 = lVar14 + 3;
      *(long *)(unaff_x20 + 0x108) = lVar14;
      if (*(long *)(unaff_x20 + 0x110) != lVar14) goto LAB_10028b048;
LAB_10028af78:
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
      lVar14 = *(long *)(unaff_x20 + 0x108);
      lVar11 = *(long *)(unaff_x20 + 0x110);
      *(undefined1 *)(*(long *)(unaff_x20 + 0x100) + lVar14) = 7;
      if (lVar11 != lVar14) {
        lVar14 = lVar14 + 1;
        *(long *)(unaff_x20 + 0x108) = lVar14;
        if (*(long *)(unaff_x20 + 0x110) != lVar14) goto LAB_10028b068;
LAB_10028afb4:
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
        lVar14 = *(long *)(unaff_x20 + 0x108);
        lVar11 = *(long *)(unaff_x20 + 0x110);
        *(undefined1 *)(*(long *)(unaff_x20 + 0x100) + lVar14) = 0;
        if (lVar11 != lVar14) {
          lVar14 = lVar14 + 1;
          *(long *)(unaff_x20 + 0x108) = lVar14;
          if (3 < (ulong)(*(long *)(unaff_x20 + 0x110) - lVar14)) goto LAB_10028b088;
LAB_10028aff0:
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
          lVar14 = *(long *)(unaff_x20 + 0x108);
          uVar10 = *(long *)(unaff_x20 + 0x110) - lVar14;
          *(undefined4 *)(*(long *)(unaff_x20 + 0x100) + lVar14) = 0;
          if (3 < uVar10) goto LAB_10028b090;
          goto LAB_10028c988;
        }
      }
      uVar10 = 0;
      uVar13 = 1;
    }
  }
  else {
    lVar11 = *unaff_x21;
    *(ushort *)(lVar11 + lVar14) = uVar6;
    *(undefined1 *)((ushort *)(lVar11 + lVar14) + 1) = uVar5;
    lVar14 = lVar14 + 3;
    *(long *)(unaff_x20 + 0x108) = lVar14;
    if (*(long *)(unaff_x20 + 0x110) == lVar14) goto LAB_10028af78;
LAB_10028b048:
    *(undefined1 *)(*unaff_x21 + lVar14) = 7;
    lVar14 = lVar14 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar14;
    if (*(long *)(unaff_x20 + 0x110) == lVar14) goto LAB_10028afb4;
LAB_10028b068:
    *(undefined1 *)(*unaff_x21 + lVar14) = 0;
    lVar14 = lVar14 + 1;
    *(long *)(unaff_x20 + 0x108) = lVar14;
    if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar14) < 4) goto LAB_10028aff0;
LAB_10028b088:
    *(undefined4 *)(*unaff_x21 + lVar14) = 0;
LAB_10028b090:
    lVar14 = lVar14 + 4;
    *(long *)(unaff_x20 + 0x108) = lVar14;
    uVar4 = (uStack0000000000000070 & 0xff00ff00) >> 8 | (uStack0000000000000070 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (3 < (ulong)(*(long *)(unaff_x20 + 0x110) - lVar14)) {
      *(uint *)(*unaff_x21 + lVar14) = uVar4;
LAB_10028b0e4:
      lVar11 = lVar14 + 4;
      *(long *)(unaff_x20 + 0x108) = lVar11;
      uVar4 = (uStack0000000000000074 & 0xff00ff00) >> 8 | (uStack0000000000000074 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((ulong)(*(long *)(unaff_x20 + 0x110) - lVar11) < 4) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
        lVar14 = *(long *)(unaff_x20 + 0x108);
        uVar10 = *(long *)(unaff_x20 + 0x110) - lVar14;
        *(uint *)(*(long *)(unaff_x20 + 0x100) + lVar14) = uVar4;
        if (uVar10 < 4) goto LAB_10028c988;
        *(long *)(unaff_x20 + 0x108) = lVar14 + 4;
        uVar10 = in_stack_00000060;
      }
      else {
        *(uint *)(*unaff_x21 + lVar11) = uVar4;
        *(long *)(unaff_x20 + 0x108) = lVar14 + 8;
        uVar10 = in_stack_00000060;
      }
      in_stack_00000060 = uVar10;
      if (uVar10 == 0) {
LAB_10028c128:
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b631e98 - 1 < 2 ||
             ((bRam000000010b631e98 != 0 &&
              (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                                 ), cVar8 != '\0')))) &&
            (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                               ), iVar9 != 0)))) {
          lVar14 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                   + 0x30;
          *(undefined **)(unaff_x29 + -0x100) = &UNK_108c74ee2;
          *(undefined8 *)(unaff_x29 + -0xf8) = 0x1f;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630;
          *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000390;
          *(undefined **)(unaff_x29 + -200) = &UNK_10b1f48a8;
          *(undefined8 *)(unaff_x29 + -0x80) = 1;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xe0;
          *(undefined8 *)(unaff_x29 + -0x70) = 2;
          *(long *)(unaff_x29 + -0x68) = lVar14;
          FUN_10028d058(unaff_x29 + -0x80);
        }
        else {
          lVar14 = 
          ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar13 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                      + 0x20);
            uVar15 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                      + 0x28);
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000002f8);
            if (iVar9 != 0) {
              lVar11 = ___ZN2h25codec12framed_write16Encoder_LT_B_GT_6buffer10__CALLSITE17he6570701b9666f35E
                       + 0x30;
              *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000390;
              *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630;
              *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000370;
              *(undefined **)(unaff_x29 + -200) = &UNK_10b1f48a8;
              *(undefined8 *)(unaff_x29 + -0x80) = 1;
              *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xe0;
              *(undefined8 *)(unaff_x29 + -0x70) = 2;
              *(long *)(unaff_x29 + -0x68) = lVar11;
              *(undefined8 *)(unaff_x29 + -0xf8) = uVar13;
              *(undefined8 *)(unaff_x29 + -0x100) = 5;
              *(undefined8 *)(unaff_x29 + -0xf0) = uVar15;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar14,puVar3,puVar2,unaff_x29 + -0x100,unaff_x29 + -0x80);
            }
          }
        }
        (*(code *)in_stack_00000050[4])(&stack0x00000068,in_stack_00000058,in_stack_00000060);
        if (in_stack_00000010 != 2) {
          lVar14 = in_stack_00000018;
          if ((in_stack_00000010 & 1) != 0) {
            lVar14 = in_stack_00000018 +
                     (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(in_stack_00000020 + 0x68))(lVar14,&stack0x00000028);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (in_stack_00000030 != 0)) {
          in_stack_00000050 = *(undefined8 **)(in_stack_00000030 + 0x10);
          in_stack_00000058 = *(undefined8 *)(in_stack_00000030 + 0x18);
          *(undefined8 ***)(unaff_x29 + -0xe0) = &stack0x00000050;
          *(undefined **)(unaff_x29 + -0xd8) = &DAT_1002b2088;
          FUN_1002dafa4(&stack0x00000010,&UNK_108c77ecb,0x15,s_<____108ab67c5,unaff_x29 + -0xe0);
        }
        FUN_1002bdf20(&stack0x00000010);
        return 0xd;
      }
      (*(code *)*in_stack_00000050)(&stack0x00000370,&stack0x00000068,in_stack_00000058,uVar10);
      lVar14 = *(long *)(unaff_x20 + 0x110);
      if (lVar14 == 0) {
        *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f3630 + uVar10;
        *(undefined **)(unaff_x29 + -0xe0) = &UNK_10b205a90;
        *(undefined8 *)(unaff_x29 + -200) = 0;
        *(undefined8 *)(unaff_x29 + -0xd0) = 0;
        (**(code **)(*(long *)(unaff_x29 + -0xe0) + 0x20))
                  (unaff_x29 + -200,*(undefined8 *)(unaff_x29 + -0xd8),
                   *(undefined8 *)(unaff_x29 + -0xd0));
        *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b1f3630;
        *(undefined1 **)(unaff_x29 + -0x100) = &stack0x00000390;
        *(undefined8 *)(unaff_x29 + -0xe8) = in_stack_00000388;
        *(ulong *)(unaff_x29 + -0xf0) = uVar10;
        iVar9 = (**(code **)(*(long *)(unaff_x29 + -0x100) + 0x18))(unaff_x29 + -0xe8);
        if (iVar9 == 0) {
          uVar15 = *(undefined8 *)(unaff_x29 + -0xf8);
          uVar13 = *(undefined8 *)(unaff_x29 + -0x100);
          uVar18 = *(undefined8 *)(unaff_x29 + -0xe8);
          uVar16 = *(undefined8 *)(unaff_x29 + -0xf0);
          *(undefined8 *)(unaff_x25 + 0x10) = uVar15;
          *(undefined8 *)(unaff_x25 + 8) = uVar13;
          *(undefined8 *)(unaff_x25 + 0x20) = uVar18;
          *(undefined8 *)(unaff_x25 + 0x18) = uVar16;
          *(undefined8 *)(unaff_x29 + -0x78) = uVar15;
          *(undefined8 *)(unaff_x29 + -0x80) = uVar13;
          *(undefined8 *)(unaff_x29 + -0x68) = uVar18;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
          uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
          uVar10 = *(ulong *)(unaff_x29 + -0x70);
          lVar14 = *(long *)(unaff_x20 + 0x108);
          if ((ulong)-lVar14 < uVar10) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
            lVar14 = *(long *)(unaff_x20 + 0x108);
          }
          _memcpy(*(long *)(unaff_x20 + 0x100) + lVar14,uVar13,uVar10);
          uVar12 = *(long *)(unaff_x20 + 0x110) - *(long *)(unaff_x20 + 0x108);
          if (uVar12 < uVar10) {
            *(ulong *)(unaff_x29 + -0x100) = uVar10;
            *(ulong *)(unaff_x29 + -0xf8) = uVar12;
            __ZN5bytes13panic_advance17h894eeb3b0f978370E(unaff_x29 + -0x100);
            goto LAB_10028cb50;
          }
          *(ulong *)(unaff_x20 + 0x108) = *(long *)(unaff_x20 + 0x108) + uVar10;
          (**(code **)(*(long *)(unaff_x29 + -0x80) + 0x20))
                    (unaff_x29 + -0x68,*(undefined8 *)(unaff_x29 + -0x78),
                     *(undefined8 *)(unaff_x29 + -0x70));
        }
        else {
          *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0xf8);
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x100);
          *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0xe8);
          *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xf0);
          (**(code **)(*(long *)(unaff_x29 + -0x80) + 0x10))
                    (unaff_x29 + -0xd8,unaff_x29 + -0x68,*(undefined8 *)(unaff_x29 + -0x78),
                     *(undefined8 *)(unaff_x29 + -0x70));
          __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                    ();
          lVar14 = *(long *)(unaff_x29 + -0xd8);
          lVar17 = *(long *)(unaff_x29 + -0xc0);
          lVar11 = *(long *)(unaff_x29 + -200);
          unaff_x21[1] = *(long *)(unaff_x29 + -0xd0);
          *unaff_x21 = lVar14;
          unaff_x21[3] = lVar17;
          unaff_x21[2] = lVar11;
        }
        goto LAB_10028c128;
      }
      lVar11 = *(long *)(unaff_x20 + 0x108);
      if ((ulong)(lVar14 - lVar11) < uVar10) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
        lVar11 = *(long *)(unaff_x20 + 0x108);
        lVar14 = *(long *)(unaff_x20 + 0x110);
      }
      if ((ulong)(lVar14 - lVar11) < uVar10) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
        lVar11 = *(long *)(unaff_x20 + 0x108);
      }
      _memcpy(*(long *)(unaff_x20 + 0x100) + lVar11,&UNK_10b1f3630,uVar10);
      uVar12 = *(long *)(unaff_x20 + 0x110) - *(long *)(unaff_x20 + 0x108);
      if (uVar10 <= uVar12) {
        *(ulong *)(unaff_x20 + 0x108) = *(long *)(unaff_x20 + 0x108) + uVar10;
        *(ulong *)(unaff_x29 + -0x100) = uVar10;
        (*in_stack_000003b0)(&stack0x00000388,&UNK_10b1f3630 + uVar10,0);
        goto LAB_10028c128;
      }
      *(ulong *)(unaff_x29 + -0xe0) = uVar10;
      *(ulong *)(unaff_x29 + -0xd8) = uVar12;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(unaff_x29 + -0xe0);
      goto LAB_10028cb50;
    }
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E();
    lVar14 = *(long *)(unaff_x20 + 0x108);
    uVar10 = *(long *)(unaff_x20 + 0x110) - lVar14;
    *(uint *)(*(long *)(unaff_x20 + 0x100) + lVar14) = uVar4;
    if (3 < uVar10) goto LAB_10028b0e4;
LAB_10028c988:
    uVar13 = 4;
  }
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar13;
  *(ulong *)(unaff_x29 + -0xd8) = uVar10;
  __ZN5bytes13panic_advance17h894eeb3b0f978370E();
LAB_10028cb50:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10028cb54);
  (*pcVar7)();
}

