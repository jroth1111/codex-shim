
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1004239d8(void)

{
  long *plVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long lVar11;
  long extraout_x10;
  ulong uVar12;
  ulong *extraout_x11;
  long lVar13;
  ulong extraout_x12;
  undefined8 *puVar14;
  long lVar15;
  undefined8 extraout_x14;
  undefined8 uVar16;
  undefined8 extraout_x14_00;
  undefined8 extraout_x14_01;
  long unaff_x20;
  long *unaff_x22;
  long *plVar17;
  long lVar18;
  undefined8 *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined *in_stack_00000020;
  undefined *in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  
  do {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_AThread_count_overflowed_the_con_108ac6289,&stack0x00000010,&UNK_10b221338);
    uVar16 = extraout_x14_01;
LAB_1004239f0:
    uVar7 = thunk_FUN_108833144();
    lVar5 = unaff_x20;
    in_stack_00000038 = uVar7;
    if (uVar7 < (ulong)unaff_x22[1]) {
      do {
        lVar18 = *unaff_x22;
        plVar17 = *(long **)(lVar18 + uVar7 * 8);
        in_stack_00000038 = uVar7;
        if (plVar17 == (long *)0x0) {
          puVar4 = (undefined *)_malloc(0x500);
          if (puVar4 == (undefined *)0x0) goto LAB_100423a90;
          lVar9 = 0;
          uVar12 = 0;
          do {
            if ((int)uVar12 == 0) {
              lVar13 = 0x20;
            }
            else {
              lVar13 = 1;
              lVar15 = 2;
              for (uVar8 = uVar12; ((uVar8 & 1) == 0 || (lVar13 = lVar15 * lVar13, (int)uVar8 != 1))
                  ; uVar8 = uVar8 >> 1 & 0x7fffffff) {
                lVar15 = lVar15 * lVar15;
              }
              lVar13 = lVar13 * 0x20;
            }
            puVar14 = (undefined8 *)(puVar4 + uVar12 * 0x28);
            uVar12 = uVar12 + 1;
            *puVar14 = 0;
            puVar14[3] = lVar13;
            puVar14[4] = lVar9;
            lVar9 = lVar13 + lVar9;
            puVar14[2] = 0x4000000000;
          } while (uVar12 != 0x20);
          puVar14 = (undefined8 *)_calloc(0x100,1);
          if (puVar14 != (undefined8 *)0x0) {
            in_stack_00000018 = (undefined *)0x20;
            in_stack_00000028 = (undefined *)0x20;
            in_stack_00000010 = puVar14;
            in_stack_00000020 = puVar4;
            in_stack_00000030 = uVar7;
            plVar17 = (long *)_malloc(0x28);
            if (plVar17 == (long *)0x0) {
LAB_100423a2c:
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
              goto LAB_100423aa8;
            }
            plVar17[1] = (long)in_stack_00000018;
            *plVar17 = (long)in_stack_00000010;
            plVar17[3] = (long)in_stack_00000028;
            plVar17[2] = (long)in_stack_00000020;
            plVar17[4] = in_stack_00000030;
            plVar1 = (long *)(lVar18 + uVar7 * 8);
            puVar14 = (undefined8 *)*plVar1;
            if (puVar14 == (undefined8 *)0x0) {
              *plVar1 = (long)plVar17;
              uVar12 = unaff_x22[2];
              do {
                if (uVar7 <= uVar12) goto LAB_1004237e0;
                uVar8 = unaff_x22[2];
                bVar2 = uVar8 != uVar12;
                uVar12 = uVar8;
              } while (bVar2);
              unaff_x22[2] = uVar7;
              goto LAB_1004237e0;
            }
            in_stack_00000010 = puVar14;
            FUN_107c05cb4(&UNK_108cacd2c,0x47,&stack0x00000010,&UNK_10b234f60,&UNK_10b221350);
            goto LAB_100423a64;
          }
LAB_100423a9c:
          FUN_107c03c64(8,0x100);
LAB_100423aa8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100423aac);
          (*pcVar3)();
        }
LAB_1004237e0:
        if (plVar17[3] == 0) {
LAB_100423a64:
          FUN_107c05cac(&UNK_108ca1e8f,0x1f,&UNK_10b209730);
LAB_100423a7c:
          FUN_107c05cd0(lVar18,lVar18,&UNK_10b221368);
LAB_100423a90:
          FUN_107c03c64(8,0x500);
          goto LAB_100423a9c;
        }
        lVar9 = 0;
        lVar18 = plVar17[1];
        unaff_x22 = (long *)plVar17[2];
        lVar13 = plVar17[3] * 0x28;
        lVar15 = *plVar17;
        unaff_x20 = 0x4000000000;
LAB_10042381c:
        if (lVar18 == lVar9) goto LAB_100423a7c;
        uVar12 = *(ulong *)(lVar15 + lVar9 * 8);
        if ((ulong)unaff_x22[3] <= uVar12) {
          LOAcquire();
          uVar12 = unaff_x22[2];
          unaff_x22[2] = 0x4000000000;
        }
        if (uVar12 == 0x4000000000) {
LAB_10042380c:
          unaff_x22 = unaff_x22 + 5;
          lVar9 = lVar9 + 1;
          lVar13 = lVar13 + -0x28;
          if (lVar13 == 0) goto LAB_100423a64;
          goto LAB_10042381c;
        }
        lVar10 = *unaff_x22;
        if (lVar10 == 0) {
          thunk_FUN_1088334f0(unaff_x22);
          lVar10 = *unaff_x22;
          if (lVar10 == 0) {
            FUN_107c05cac(&UNK_108cacd04,0x28,&UNK_10b221308);
            goto LAB_100423974;
          }
          uVar8 = unaff_x22[1];
        }
        else {
          uVar8 = unaff_x22[1];
        }
        if (uVar12 < uVar8) {
          lVar11 = unaff_x22[4];
          puVar14 = (undefined8 *)(lVar10 + uVar12 * 0x60);
          uVar8 = puVar14[10];
          if ((uVar8 & 0x7fffffffffffc) == 0) goto LAB_1004238a4;
          goto LAB_10042380c;
        }
        FUN_107c05cd0(uVar12,uVar8,&UNK_10b221320);
        puVar14 = extraout_x8;
        uVar8 = extraout_x9;
        lVar11 = extraout_x10;
        uVar16 = extraout_x14;
LAB_1004238a4:
        *(undefined8 *)(lVar15 + lVar9 * 8) = puVar14[0xb];
        uVar7 = lVar11 + uVar12 & 0x3fffffffff | uVar7 << 0x26 | uVar8 & 0xfff8000000000000;
        *puVar14 = *(undefined8 *)(lVar5 + 0x10);
        puVar14[2] = uVar16;
        lVar5 = (*
                ___ZN18tracing_subscriber6filter13layer_filters9FILTERING29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17hd91e4eb2b0529f99E
                )();
        *(undefined8 *)(extraout_x8_00 + 8) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined8 *)(extraout_x8_00 + 0x18) = 1;
        if (*extraout_x11 == extraout_x9_00) {
          *extraout_x11 = extraout_x12;
LAB_100423934:
          if (uVar7 != 0xffffffffffffffff) {
            return uVar7 + 1;
          }
          FUN_107c05cac(&UNK_109bf510e,0x14,&UNK_10b4d73e0);
          goto LAB_100423a2c;
        }
        uVar12 = *extraout_x11;
        while ((uVar12 & 3) != 2) {
          uVar8 = *(ulong *)(extraout_x8_00 + 0x50);
          bVar2 = uVar8 == uVar12;
          uVar12 = uVar8;
          if (bVar2) {
            *(ulong *)(extraout_x8_00 + 0x50) = extraout_x9_00 | 3;
            FUN_10074fd94(plVar17,uVar7);
            goto LAB_100423934;
          }
        }
LAB_100423974:
        in_stack_00000038 = 2;
        in_stack_00000010 = &stack0x00000038;
        in_stack_00000018 =
             &
             __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
        ;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (&UNK_108cd640b,&stack0x00000010,&UNK_10b24e120);
        piVar6 = (int *)thunk_FUN_108853fe0();
        if (piVar6 == (int *)0x0) {
          in_stack_00000038 = 0xffffffffffffffff;
          break;
        }
        uVar16 = extraout_x14_00;
        if (*piVar6 != 1) goto LAB_1004239f0;
        uVar7 = *(ulong *)(piVar6 + 2);
        lVar5 = unaff_x20;
        in_stack_00000038 = uVar7;
        if ((ulong)unaff_x22[1] <= uVar7) break;
      } while( true );
    }
    in_stack_00000010 = &stack0x00000038;
    in_stack_00000018 =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    in_stack_00000020 = &UNK_108c98228;
    in_stack_00000028 =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
  } while( true );
}

