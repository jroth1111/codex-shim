
/* WARNING: Removing unreachable block (ram,0x000100aff6d8) */
/* WARNING: Removing unreachable block (ram,0x000100aff70c) */
/* WARNING: Removing unreachable block (ram,0x000100aff734) */
/* WARNING: Removing unreachable block (ram,0x000100aff738) */
/* WARNING: Removing unreachable block (ram,0x000100aff59c) */
/* WARNING: Removing unreachable block (ram,0x000100aff5d0) */
/* WARNING: Removing unreachable block (ram,0x000100aff5f8) */
/* WARNING: Removing unreachable block (ram,0x000100aff5fc) */
/* WARNING: Removing unreachable block (ram,0x000100aff744) */
/* WARNING: Removing unreachable block (ram,0x000100aff758) */
/* WARNING: Removing unreachable block (ram,0x000100aff764) */
/* WARNING: Removing unreachable block (ram,0x000100aff774) */
/* WARNING: Removing unreachable block (ram,0x000100afedd4) */
/* WARNING: Removing unreachable block (ram,0x000100afede4) */
/* WARNING: Removing unreachable block (ram,0x000100afedf8) */
/* WARNING: Removing unreachable block (ram,0x000100afee00) */
/* WARNING: Removing unreachable block (ram,0x000100afee08) */
/* WARNING: Removing unreachable block (ram,0x000100afee10) */
/* WARNING: Removing unreachable block (ram,0x000100afee20) */
/* WARNING: Removing unreachable block (ram,0x000100afeedc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100afe660(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined3 uVar13;
  undefined3 uVar14;
  undefined5 uVar15;
  undefined5 uVar16;
  long lVar17;
  char cVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ushort *puVar23;
  ulong *puVar24;
  undefined8 extraout_x1;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 *puVar27;
  long unaff_x19;
  long *unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar28;
  long unaff_x26;
  undefined8 unaff_x28;
  char in_wzr;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000088;
  char *pcStack00000000000000a0;
  undefined8 *puStack00000000000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined1 *puStack00000000000000e0;
  undefined *puStack00000000000000e8;
  undefined8 in_stack_000000f0;
  int iStack00000000000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long *in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined2 uStack0000000000000124;
  undefined2 uStack0000000000000126;
  undefined2 uStack0000000000000128;
  undefined4 uStack000000000000012a;
  undefined2 uStack000000000000012e;
  undefined2 uStack0000000000000130;
  undefined8 uStack0000000000000132;
  ushort uStack0000000000000148;
  undefined1 uStack000000000000014a;
  undefined4 uStack000000000000014b;
  undefined1 uStack000000000000014f;
  undefined7 uStack0000000000000150;
  undefined4 uStack0000000000000157;
  ulong in_stack_00000160;
  undefined1 *in_stack_00000168;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  ulong in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined1 uStack00000000000001a0;
  ushort uStack00000000000001a1;
  ushort uStack00000000000001a3;
  undefined3 uStack00000000000001a5;
  undefined5 uStack00000000000001a8;
  undefined3 uStack00000000000001ad;
  undefined1 uStack00000000000001b0;
  undefined7 uStack00000000000001b1;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  undefined *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  long in_stack_000001e8;
  undefined1 *in_stack_00000210;
  ulong in_stack_000006e0;
  undefined1 *in_stack_000006e8;
  undefined1 *puVar33;
  long in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  long lVar34;
  ushort uVar35;
  
  puStack00000000000000a8 = (undefined8 *)&stack0x000001a0;
  pcStack00000000000000a0 = s_HTTP_proxy_listening_on_108ad03e7;
  puStack00000000000000e0 = (undefined1 *)&stack0x000000a0;
  puStack00000000000000e8 = &UNK_10b208fd0;
  puVar33 = (undefined1 *)&stack0x000000e0;
  lVar34 = 1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000bb0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_000006e8 = *(undefined1 **)(*unaff_x20 + 0x20);
    in_stack_000006f0 = *(long *)(*unaff_x20 + 0x28);
    in_stack_000006e0 = 3;
    unaff_x21 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x21 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar19 = (**(code **)(unaff_x21 + 0x18))(puVar3,&stack0x000006e0);
    if (iVar19 != 0) {
      *(undefined1 *)(unaff_x26 + 0x5c0) = 1;
      in_stack_00000210 = &stack0x00001638;
      (**(code **)(unaff_x21 + 0x20))(puVar3,&stack0x00001080);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1eb) = 0;
  *(undefined2 *)(unaff_x19 + 0x1e9) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0xa8) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000050;
  *(undefined1 *)(unaff_x19 + 0x128) = 0;
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x19 + 0x98);
  uVar30 = *(undefined8 *)(unaff_x19 + 0xb0);
  uVar29 = *(undefined8 *)(unaff_x19 + 0xa8);
  uVar25 = *(undefined8 *)(unaff_x19 + 0xb8);
  uVar35 = (ushort)((ulong)uVar30 >> 0x20);
  puVar20 = (undefined8 *)_malloc(0x28);
  if (puVar20 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
LAB_100aff8d8:
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x100aff8dc);
    (*pcVar26)();
  }
  puVar20[1] = 1;
  *puVar20 = 1;
  puVar20[3] = uVar30;
  puVar20[2] = uVar29;
  puVar20[4] = uVar25;
  *(undefined8 **)(unaff_x19 + 0xe0) = puVar20;
LAB_100afec1c:
  *(long *)(unaff_x19 + 0x130) = unaff_x19 + 0xc0;
  *(undefined1 *)(unaff_x19 + 0x1e0) = 0;
  func_0x000100fc4db0(&stack0x000000a0,unaff_x19 + 0x130,unaff_x28);
  if (pcStack00000000000000a0 != (char *)0x3) {
    *(undefined8 **)(unaff_x19 + 0xf0) = puStack00000000000000a8;
    *(char **)(unaff_x19 + 0xe8) = pcStack00000000000000a0;
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x110) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0x108) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_000000d0;
    if ((((*(char *)(unaff_x19 + 0x1e0) == '\x03') && (*(char *)(unaff_x19 + 0x168) == '\x03')) &&
        (*(char *)(unaff_x19 + 0x1d8) == '\x03')) && (*(char *)(unaff_x19 + 0x1d0) == '\x03')) {
      unaff_x21 = *(undefined **)(unaff_x19 + 400);
      pcVar1 = unaff_x21 + 0x18;
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar1,extraout_x1,1000000000);
      }
      puVar20 = (undefined8 *)(unaff_x19 + 0x198);
      if (*(long *)(unaff_x19 + 0x198) == 0) {
        if (*(undefined8 **)(unaff_x21 + 0x20) == puVar20) {
          puVar27 = *(undefined8 **)(unaff_x19 + 0x1a0);
          *(undefined8 **)(unaff_x21 + 0x20) = puVar27;
          goto joined_r0x000100afecd8;
        }
      }
      else {
        puVar27 = *(undefined8 **)(unaff_x19 + 0x1a0);
        *(undefined8 **)(*(long *)(unaff_x19 + 0x198) + 8) = puVar27;
joined_r0x000100afecd8:
        if (puVar27 == (undefined8 *)0x0) {
          if (*(undefined8 **)(unaff_x21 + 0x28) != puVar20) goto LAB_100afece8;
          *(undefined8 *)(unaff_x21 + 0x28) = *puVar20;
        }
        else {
          *puVar27 = *puVar20;
        }
        *puVar20 = 0;
        *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
      }
LAB_100afece8:
      if (*pcVar1 == '\x01') {
        *pcVar1 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
      }
      if (*(long *)(unaff_x19 + 0x1a8) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x1a8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x1b0));
      }
    }
    if (*(long *)(unaff_x19 + 0xe8) != 2) {
      puStack00000000000000e8 = *(undefined **)(unaff_x19 + 0xf0);
      puStack00000000000000e0 = *(undefined1 **)(unaff_x19 + 0xe8);
      _iStack00000000000000f8 = *(undefined8 *)(unaff_x19 + 0x100);
      in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0xf8);
      uVar6 = *(ushort *)(unaff_x19 + 0x108);
      uVar4 = *(undefined4 *)(unaff_x19 + 0x10a);
      uVar7 = *(ushort *)(unaff_x19 + 0x10e);
      uVar31 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x110);
      uVar5 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar8 = *(ushort *)(unaff_x19 + 0x124);
      uVar9 = *(ushort *)(unaff_x19 + 0x126);
      in_stack_00000100 = 0;
      in_stack_00000108 = 8;
      in_stack_00000110 = 0;
      plVar28 = *(long **)(unaff_x19 + 0xe0);
      lVar17 = *plVar28;
      *plVar28 = lVar17 + 1;
      if (-1 < lVar17) {
        in_stack_00000118 = plVar28;
        if (iStack00000000000000f8 == -1) {
          func_0x000108a07a20(&UNK_10b4cd2b8);
        }
        else {
          func_0x0001060304c4(&stack0x00001080);
          uStack0000000000000132 = CONCAT44((int)uVar30,(int)((ulong)uVar29 >> 0x20));
          uStack0000000000000157 = (undefined4)uVar29;
          uStack000000000000014f = 1;
          uStack000000000000014a = 1;
          uStack000000000000012a = 0;
          uStack0000000000000128 = 0;
          uStack0000000000000126 = 1;
          uStack0000000000000124 = 0;
          uStack0000000000000120 = 0;
          uStack0000000000000150 = 0;
          uStack000000000000014b = 0;
          uStack000000000000012e = (short)uVar29;
          uStack0000000000000130 = (short)((ulong)uVar29 >> 0x10);
          uStack0000000000000148 = uVar35;
          __ZN7tracing4span4Span7current17h348f9350075e824bE(&stack0x00000210);
          uVar15 = uStack00000000000001a8;
          uVar13 = uStack00000000000001a5;
          uVar11 = uStack00000000000001a1;
          uVar10 = (ushort)((uint)uVar4 >> 0x10);
          uStack00000000000001a1 = (ushort)uVar4;
          uVar12 = uStack00000000000001a1;
          uStack00000000000001a5 = (undefined3)uVar25;
          uVar14 = uStack00000000000001a5;
          uStack00000000000001a8 = (undefined5)((ulong)uVar25 >> 0x18);
          uVar16 = uStack00000000000001a8;
          uStack0000000000000088 = (undefined4)uVar31;
          uStack00000000000001a1 = uVar11;
          uStack00000000000001a5 = uVar13;
          uStack00000000000001a8 = uVar15;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
             (((bRam000000010b639ad8 - 1 < 2 ||
               ((bRam000000010b639ad8 != 0 &&
                (cVar18 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN8rama_tcp6server8listener11TcpListener5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h018f22b3cdf5f8abE
                                    ), cVar18 != '\0')))) &&
              (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN8rama_tcp6server8listener11TcpListener5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h018f22b3cdf5f8abE
                                  ), (uVar21 & 1) != 0)))) {
            in_stack_00000190 = (ulong)&stack0x00000148 | 2;
            in_stack_00000198._6_2_ = uVar8;
            if ((uVar6 & 1) == 0) {
              in_stack_00000198._6_2_ = uVar7;
            }
            uStack00000000000001a0 = (uVar6 & 1) != 0;
            uStack00000000000001a1 = uVar12;
            uStack00000000000001a3 = uVar10;
            if ((bool)uStack00000000000001a0) {
              _uStack00000000000001ad = uStack0000000000000088;
              uStack00000000000001a1 = uVar10;
              uStack00000000000001a3 = uVar7;
              uStack00000000000001a5 = uVar14;
              uStack00000000000001a8 = uVar16;
            }
            FUN_10075259c(&stack0x000006e0,&stack0x00001638);
            puVar33 = in_stack_000006e8;
            lVar34 = in_stack_000006f0;
            param_1 = in_stack_000006f8;
          }
          else {
            in_stack_00000700 =
                 ___ZN8rama_tcp6server8listener11TcpListener5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h018f22b3cdf5f8abE
            ;
            in_stack_000006e0 = 2;
            if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
              in_stack_00000190 = (ulong)&stack0x00000148 | 2;
              in_stack_00000198._6_2_ = uVar8;
              if ((uVar6 & 1) == 0) {
                in_stack_00000198._6_2_ = uVar7;
              }
              uStack00000000000001a0 = (uVar6 & 1) != 0;
              uStack00000000000001a1 = uVar12;
              uStack00000000000001a3 = uVar10;
              if ((bool)uStack00000000000001a0) {
                _uStack00000000000001ad = uStack0000000000000088;
                uStack00000000000001a1 = uVar10;
                uStack00000000000001a3 = uVar7;
                uStack00000000000001a5 = uVar14;
                uStack00000000000001a8 = uVar16;
              }
              __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                        (&stack0x00000bb0,&stack0x00001638);
            }
          }
          if (in_stack_000006e0 == 2) {
            FUN_100dddd8c(&stack0x00000bb0);
          }
          else {
            FUN_1061c1edc(&stack0x00001080);
            if (in_stack_00000210 != (undefined1 *)0x2) {
              puVar22 = puVar33;
              if ((in_stack_000006e0 & 1) != 0) {
                puVar22 = puVar33 + (*(long *)(lVar34 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
              }
              (**(code **)(lVar34 + 0x48))(puVar22,&stack0x000006f8,&stack0x00001080);
            }
          }
          in_stack_00000160 = in_stack_000006e0;
          in_stack_00000168 = puVar33;
          in_stack_00000170 = lVar34;
          in_stack_00000178 = param_1;
          in_stack_00000180 = in_stack_00000700;
          puVar23 = (ushort *)_malloc(0x40);
          lVar34 = in_stack_00000110;
          if (puVar23 == (ushort *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
          }
          else {
            *puVar23 = uVar6;
            *(undefined4 *)(puVar23 + 1) = uVar4;
            puVar23[3] = uVar7;
            *(undefined8 *)(puVar23 + 8) = uVar31;
            *(undefined8 *)(puVar23 + 4) = uVar25;
            *(undefined4 *)(puVar23 + 0xc) = uVar5;
            puVar23[0xe] = uVar8;
            puVar23[0xf] = uVar9;
            puVar23[0x10] = 1;
            *(ulong *)(puVar23 + 0x15) =
                 CONCAT26(uStack000000000000012e,
                          CONCAT42(uStack000000000000012a,uStack0000000000000128));
            *(ulong *)(puVar23 + 0x11) =
                 CONCAT26(uStack0000000000000126,
                          CONCAT24(uStack0000000000000124,uStack0000000000000120));
            *(undefined8 *)(puVar23 + 0x1a) = uStack0000000000000132;
            *(ulong *)(puVar23 + 0x16) =
                 CONCAT26(uStack0000000000000130,
                          CONCAT24(uStack000000000000012e,uStack000000000000012a));
            puVar23[0x1e] = uVar35;
            puVar23[0x1f] = (ushort)((ulong)uVar30 >> 0x30);
            if (in_stack_00000110 == in_stack_00000100) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x00000100)
              ;
            }
            puVar20 = (undefined8 *)(in_stack_00000108 + lVar34 * 0x20);
            *puVar20 = puVar23;
            puVar20[1] = &UNK_10b237f90;
            puVar20[3] = 0xb3e71f66a04270b5;
            puVar20[2] = 0xfb0cdf0076d4e63a;
            in_stack_00000110 = lVar34 + 1;
            FUN_1016e8f28(&stack0x00000100,&stack0x00001080);
            in_stack_000001d0 = puStack00000000000000e8;
            in_stack_000001c8 = puStack00000000000000e0;
            in_stack_000001e0 = _iStack00000000000000f8;
            in_stack_000001d8 = in_stack_000000f0;
            in_stack_000001e8 = in_stack_00000100;
            uStack00000000000001a8 = SUB85(in_stack_00000168,0);
            uStack00000000000001ad = (undefined3)((ulong)in_stack_00000168 >> 0x28);
            uStack00000000000001a0 = (undefined1)in_stack_00000160;
            uStack00000000000001a1 = (ushort)(in_stack_00000160 >> 8);
            uStack00000000000001a3 = (ushort)(in_stack_00000160 >> 0x18);
            uStack00000000000001a5 = (undefined3)(in_stack_00000160 >> 0x28);
            in_stack_000001b8 = in_stack_00000178;
            uStack00000000000001b0 = (undefined1)in_stack_00000170;
            uStack00000000000001b1 = (undefined7)((ulong)in_stack_00000170 >> 8);
            in_stack_000001c0 = in_stack_00000180;
            do {
              lVar34 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
              bVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
              ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar34;
            } while (bVar2);
            puVar24 = (ulong *)(*
                               ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                               )();
            if ((char)puVar24[9] == '\x01') {
LAB_100aff484:
              _memcpy(&stack0x000006e0,&stack0x00000210,0x4c8);
              if (0x7ffffffffffffffe < *puVar24) {
                func_0x000108a07858(&UNK_10b2435a0);
                goto LAB_100aff8d8;
              }
              *puVar24 = *puVar24 + 1;
              uVar21 = puVar24[1];
              _memcpy(&stack0x00000bb0,&stack0x00000210,0x4c8);
              if (uVar21 != 2) {
                if ((uVar21 & 1) == 0) {
                  plVar28 = (long *)puVar24[2];
                  lVar34 = *plVar28;
                  *plVar28 = lVar34 + 1;
                  if ((-1 < lVar34) &&
                     ((plVar28 = (long *)plVar28[0x5e], plVar28 == (long *)0x0 ||
                      (lVar34 = *plVar28, *plVar28 = lVar34 + 1, -1 < lVar34)))) {
                    _memcpy(&stack0x0000163c,&stack0x000006e0,0x4b8);
                    _memcpy((ulong)&stack0x00001080 | 0x34,&stack0x00001638,0x4bc);
                    _posix_memalign(&stack0x00001af8,0x80,0x580);
                    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x580);
                  }
                }
                else {
                  plVar28 = (long *)puVar24[2];
                  lVar34 = *plVar28;
                  *plVar28 = lVar34 + 1;
                  if ((-1 < lVar34) &&
                     ((plVar28 = (long *)plVar28[0x4a], plVar28 == (long *)0x0 ||
                      (lVar34 = *plVar28, *plVar28 = lVar34 + 1, -1 < lVar34)))) {
                    _memcpy(&stack0x0000163c,&stack0x000006e0,0x4b8);
                    _memcpy((ulong)&stack0x00001080 | 0x34,&stack0x00001638,0x4bc);
                    _posix_memalign(&stack0x00001af8,0x80,0x580);
                    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x580);
                  }
                }
                goto LAB_100aff8d8;
              }
              FUN_100e793a8(&stack0x00000bb0);
              *puVar24 = *puVar24 - 1;
            }
            else {
              if ((char)puVar24[9] != '\x02') {
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (puVar24,&DAT_100c35d48);
                *(undefined1 *)(puVar24 + 9) = 1;
                goto LAB_100aff484;
              }
              FUN_100e793a8(&stack0x00000210);
            }
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__108b1bd74,&stack0x00001080,&UNK_10b24dc18);
          }
        }
      }
      goto LAB_100aff8d8;
    }
    *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(undefined1 *)(unaff_x19 + 0x1b0) = 0;
    uVar21 = FUN_1014a1950((ulong *)(unaff_x19 + 0x130),unaff_x28);
    if ((uVar21 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0x1b0) != '\x03') goto code_r0x000100afed44;
      FUN_100de8a5c(unaff_x19 + 0x140);
      uVar21 = *(ulong *)(unaff_x19 + 0x138);
      goto joined_r0x000100afee44;
    }
    pcStack00000000000000a0 = (char *)0x4;
  }
  *(char *)(unaff_x19 + 0x128) = (char)pcStack00000000000000a0;
  *(undefined1 *)(unaff_x19 + 0x1e8) = 3;
  auVar32._8_8_ = unaff_x21;
  auVar32._0_8_ = 1;
  return auVar32;
code_r0x000100afed44:
  if (*(char *)(unaff_x19 + 0x1b0) == '\0') {
    uVar21 = *(ulong *)(unaff_x19 + 0x130);
joined_r0x000100afee44:
    if ((uVar21 & 3) == 1) {
      uVar25 = *(undefined8 *)(uVar21 - 1);
      puVar20 = *(undefined8 **)(uVar21 + 7);
      pcVar26 = (code *)*puVar20;
      if (pcVar26 != (code *)0x0) {
        (*pcVar26)(uVar25);
      }
      if (puVar20[1] != 0) {
        _free(uVar25);
      }
      _free((undefined8 *)(uVar21 - 1));
    }
  }
  goto LAB_100afec1c;
}

