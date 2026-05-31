
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100cbb828(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  undefined *puVar9;
  int iVar10;
  code *pcVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar24;
  undefined8 unaff_x21;
  long lVar25;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong uVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar27;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char acStack_190 [272];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined *puStack_18;
  
  puVar3 = auStack_30;
  puVar27 = &stack0xfffffffffffffff0;
  lVar12 = param_1[1];
  uVar16 = *(ulong *)(lVar12 + 0x50);
LAB_100cbb868:
  do {
    if ((uVar16 & 3) == 2) {
      uStack_28 = 2;
      puStack_20 = &uStack_28;
      puStack_18 = &
                   __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
      ;
      plVar6 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                 (&UNK_108cd640b,&puStack_20,&UNK_10b24e120);
      uStack_38 = 0x100cbb8f8;
      if (*plVar6 == 0) {
        return plVar6;
      }
      lVar12 = plVar6[1];
      uVar16 = *(ulong *)(lVar12 + 0x50);
      do {
        while( true ) {
          puStack_40 = puVar27;
          if ((uVar16 & 3) == 2) {
            uStack_58 = 2;
            puStack_50 = &uStack_58;
            puStack_48 = &
                         __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
            ;
            plVar6 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                       (&UNK_108cd640b,&puStack_50,&UNK_10b24e120);
            plVar7 = plVar6;
            if (*plVar6 != 0) {
              plVar7 = (long *)_free(plVar6[1]);
            }
            if (plVar6[3] != 0) {
              plVar7 = (long *)_free(plVar6[4]);
            }
            if (plVar6[8] == 0) {
              return plVar7;
            }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar7 = (long *)(*(code *)PTR__free_10b61b0a8)(plVar6[9]);
            return plVar7;
          }
          uVar22 = uVar16 >> 2;
          if (((uVar16 & 3) == 1) && ((uVar22 & 0x1ffffffffffff) == 1)) break;
          uVar26 = uVar16 & 0xfff8000000000003;
          uVar15 = *(ulong *)(lVar12 + 0x50);
          bVar4 = uVar15 == uVar16;
          uVar16 = uVar15;
          if (bVar4) {
            *(ulong *)(lVar12 + 0x50) = (uVar22 & 0xc001ffffffffffff) * 4 - 4 | uVar26;
            return plVar6;
          }
        }
        uVar15 = uVar16 & 0xfff8000000000000;
        uVar22 = *(ulong *)(lVar12 + 0x50);
        bVar4 = uVar22 != uVar16;
        uVar16 = uVar22;
      } while (bVar4);
      *(ulong *)(lVar12 + 0x50) = uVar15 | 3;
      plVar7 = (long *)plVar6[2];
      lVar12 = plVar6[3];
      unaff_x30 = 0x100cbb8f8;
FUN_10074fd94:
      *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = puVar27;
      *(undefined8 *)(puVar3 + -8) = unaff_x30;
      DataMemoryBarrier(2,1);
      auVar28 = (*
                ___ZN12sharded_slab3tid12REGISTRATION29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h2229902fa1c5e077E
                )(&
                  __ZN12sharded_slab3tid12REGISTRATION29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h2229902fa1c5e077E
                  ,lVar12);
      uVar16 = auVar28._8_8_;
      piVar8 = auVar28._0_8_;
      if (((char)piVar8[4] == '\x01') ||
         (piVar8 = (int *)thunk_FUN_108853fe0(), piVar8 != (int *)0x0)) {
        if (*piVar8 == 1) {
          plVar6 = *(long **)(piVar8 + 2);
        }
        else {
          plVar6 = (long *)thunk_FUN_108833144();
        }
      }
      else {
        plVar6 = (long *)0xffffffffffffffff;
      }
      if (plVar6 != (long *)plVar7[4]) {
        uVar22 = 0x40 - LZCOUNT((uVar16 & 0x3fffffffff) + 0x20 >> 6);
        if (uVar22 < (ulong)plVar7[3]) {
          plVar7 = (long *)(plVar7[2] + (uVar22 & 0xffffffff) * 0x28);
          if ((*plVar7 != 0) &&
             (uVar22 = (uVar16 & 0x3fffffffff) - plVar7[4], uVar22 < (ulong)plVar7[1])) {
            lVar12 = *plVar7 + uVar22 * 0x60;
            if (uVar16 >> 0x33 == *(ulong *)(lVar12 + 0x50) >> 0x33) {
              bVar4 = false;
              uVar15 = 0;
              iVar13 = -0x1ffe;
              if (uVar16 >> 0x34 < 0xfff) {
                iVar13 = 1;
              }
              uVar26 = *(ulong *)(lVar12 + 0x50);
              do {
                while( true ) {
                  uVar21 = *(ulong *)(lVar12 + 0x50);
                  if (uVar21 != uVar26) break;
                  *(ulong *)(lVar12 + 0x50) =
                       uVar26 & 0x7ffffffffffff | (ulong)(iVar13 + (auVar28._12_4_ >> 0x13)) << 0x33
                  ;
                  if ((uVar21 & 0x7fffffffffffc) == 0) {
                    plVar6 = (long *)__ZN95__LT_tracing_subscriber__registry__sharded__DataInner_u20_as_u20_sharded_slab__clear__Clear_GT_5clear17h489622b4c3023405E
                                               (lVar12);
                    uVar16 = plVar7[2];
                    do {
                      *(ulong *)(lVar12 + 0x58) = uVar16;
                      uVar15 = plVar7[2];
                      bVar4 = uVar15 != uVar16;
                      uVar16 = uVar15;
                    } while (bVar4);
                    plVar7[2] = uVar22;
                    return plVar6;
                  }
                  uVar1 = (uint)uVar15 & 0x1f;
                  if (uVar1 != 0x1f) {
                    iVar10 = 1 << (ulong)uVar1;
                    do {
                      InstructionSynchronizationBarrier();
                      iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                  }
                  if (uVar15 < 8) {
                    uVar15 = uVar15 + 1;
                  }
                  else {
                    plVar6 = (long *)_sched_yield();
                  }
                  bVar4 = true;
                }
                uVar15 = 0;
                uVar26 = uVar21;
              } while ((bVar4) || (uVar16 >> 0x33 == uVar21 >> 0x33));
            }
          }
        }
        return plVar6;
      }
      uVar22 = 0x40 - LZCOUNT((uVar16 & 0x3fffffffff) + 0x20 >> 6);
      if ((ulong)plVar7[3] <= uVar22) {
        return plVar6;
      }
      if (uVar22 < (ulong)plVar7[1]) {
        plVar14 = (long *)(plVar7[2] + (uVar22 & 0xffffffff) * 0x28);
        if (*plVar14 == 0) {
          return plVar6;
        }
        uVar15 = (uVar16 & 0x3fffffffff) - plVar14[4];
        if ((ulong)plVar14[1] <= uVar15) {
          return plVar6;
        }
        lVar25 = *plVar7;
        lVar12 = *plVar14 + uVar15 * 0x60;
        if (uVar16 >> 0x33 != *(ulong *)(lVar12 + 0x50) >> 0x33) {
          return plVar6;
        }
        bVar4 = false;
        uVar26 = 0;
        iVar13 = -0x1ffe;
        if (uVar16 >> 0x34 < 0xfff) {
          iVar13 = 1;
        }
        uVar21 = *(ulong *)(lVar12 + 0x50);
        do {
          while( true ) {
            uVar17 = *(ulong *)(lVar12 + 0x50);
            if (uVar17 != uVar21) break;
            *(ulong *)(lVar12 + 0x50) =
                 uVar21 & 0x7ffffffffffff | (ulong)(iVar13 + (auVar28._12_4_ >> 0x13)) << 0x33;
            if ((uVar17 & 0x7fffffffffffc) == 0) {
              plVar7 = (long *)__ZN95__LT_tracing_subscriber__registry__sharded__DataInner_u20_as_u20_sharded_slab__clear__Clear_GT_5clear17h489622b4c3023405E
                                         (lVar12);
              *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)(lVar25 + uVar22 * 8);
              *(ulong *)(lVar25 + uVar22 * 8) = uVar15;
              return plVar7;
            }
            uVar1 = (uint)uVar26 & 0x1f;
            if (uVar1 != 0x1f) {
              iVar10 = 1 << (ulong)uVar1;
              do {
                InstructionSynchronizationBarrier();
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            if (uVar26 < 8) {
              uVar26 = uVar26 + 1;
            }
            else {
              plVar6 = (long *)_sched_yield();
            }
            bVar4 = true;
          }
          uVar26 = 0;
          uVar21 = uVar17;
        } while ((bVar4) || (uVar16 >> 0x33 == uVar17 >> 0x33));
        return plVar6;
      }
      puVar9 = &UNK_10b221368;
      auVar28 = FUN_107c05cd0(uVar22,plVar7[1]);
      lVar12 = auVar28._8_8_;
      *(undefined8 *)(puVar3 + -0xa0) = unaff_x28;
      *(undefined8 *)(puVar3 + -0x98) = unaff_x27;
      *(undefined8 *)(puVar3 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x88) = unaff_x21;
      *(long **)(puVar3 + -0x80) = plVar7;
      *(ulong *)(puVar3 + -0x78) = uVar22;
      *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
      *(undefined8 *)(puVar3 + -0x68) = 0x1007500a0;
      *(long *)(puVar3 + -0x170) = auVar28._0_8_;
      *(undefined **)(puVar3 + -0x168) = puVar9;
      if (*(int *)(lVar12 + 0x50) == 1) {
        uVar16 = *(ulong *)(lVar12 + 0x78);
        if (uVar16 == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = 0;
          lVar2 = *(long *)(lVar12 + 0x68);
          uVar26 = *(ulong *)(lVar12 + 0x70);
          uVar15 = *(ulong *)(lVar12 + 0x60);
          uVar22 = 0;
          if (uVar15 <= uVar26) {
            uVar22 = uVar15;
          }
          lVar19 = uVar26 - uVar22;
          uVar21 = uVar15 - lVar19;
          lVar18 = uVar16 - uVar21;
          if (uVar16 < uVar21 || lVar18 == 0) {
            uVar15 = lVar19 + uVar16;
          }
          uVar17 = lVar18 * 0x18;
          if (uVar16 < uVar21 || lVar18 == 0) {
            uVar17 = 0;
          }
          if (uVar15 - lVar19 != 0) {
            uVar16 = (uVar15 - lVar19) * 0x18;
            uVar15 = uVar16 / 0x18;
            if (uVar16 < 0x60) {
              uVar21 = 0;
              lVar25 = 0;
            }
            else {
              lVar25 = 0;
              lVar18 = 0;
              lVar19 = 0;
              lVar20 = 0;
              uVar21 = uVar15 & 0xffffffffffffffc;
              plVar7 = (long *)(uVar26 * 0x18 + uVar22 * -0x18 + lVar2 + 0x40);
              uVar16 = uVar21;
              do {
                lVar25 = plVar7[-6] + lVar25;
                lVar18 = plVar7[-3] + lVar18;
                lVar19 = *plVar7 + lVar19;
                lVar20 = plVar7[3] + lVar20;
                plVar7 = plVar7 + 0xc;
                uVar16 = uVar16 - 4;
              } while (uVar16 != 0);
              lVar25 = lVar20 + lVar19 + lVar18 + lVar25;
              if (uVar15 == uVar21) goto LAB_1007501e8;
            }
            lVar18 = uVar21 - uVar15;
            plVar7 = (long *)(uVar26 * 0x18 + uVar21 * 0x18 + uVar22 * -0x18 + lVar2 + 0x10);
            do {
              lVar25 = *plVar7 + lVar25;
              bVar4 = lVar18 != -1;
              lVar18 = lVar18 + 1;
              plVar7 = plVar7 + 3;
            } while (bVar4);
          }
LAB_1007501e8:
          if (uVar17 != 0) {
            uVar16 = uVar17 / 0x18;
            if (uVar17 < 0x60) {
              uVar15 = 0;
            }
            else {
              lVar18 = 0;
              lVar19 = 0;
              lVar20 = 0;
              uVar15 = uVar16 & 0x7fffffffffffffc;
              plVar7 = (long *)(lVar2 + 0x40);
              uVar22 = uVar15;
              do {
                lVar25 = plVar7[-6] + lVar25;
                lVar18 = plVar7[-3] + lVar18;
                lVar19 = *plVar7 + lVar19;
                lVar20 = plVar7[3] + lVar20;
                plVar7 = plVar7 + 0xc;
                uVar22 = uVar22 - 4;
              } while (uVar22 != 0);
              lVar25 = lVar20 + lVar19 + lVar18 + lVar25;
              if (uVar16 == uVar15) goto LAB_100750284;
            }
            lVar18 = uVar16 - uVar15;
            plVar7 = (long *)(lVar2 + uVar15 * 0x18 + 0x10);
            do {
              lVar25 = *plVar7 + lVar25;
              lVar18 = lVar18 + -1;
              plVar7 = plVar7 + 3;
            } while (lVar18 != 0);
          }
        }
LAB_100750284:
        if ((ulong)(lVar25 - *(long *)(lVar12 + 0x80)) <= *(ulong *)(lVar12 + 0x58))
        goto LAB_1007502b0;
        uVar16 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108ccce29,0x1e);
LAB_1007502fc:
        cVar5 = FUN_100c355d4(uVar16);
        if (cVar5 == '\r') {
          if ((uVar16 & 3) != 1) {
            return (long *)0x2;
          }
          uVar23 = *(undefined8 *)(uVar16 - 1);
          puVar24 = *(undefined8 **)(uVar16 + 7);
          pcVar11 = (code *)*puVar24;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(uVar23);
          }
          if (puVar24[1] != 0) {
            _free(uVar23);
          }
          _free((undefined8 *)(uVar16 - 1));
          return (long *)0x2;
        }
      }
      else {
LAB_1007502b0:
        if ((*(byte *)(lVar12 + 0x33b) & 1) == 0) {
          auVar29 = __ZN6rustls4msgs8deframer7buffers17DeframerVecBuffer4read17h66da098afa731e90E
                              (lVar12 + 0x400,puVar3 + -0x170,&UNK_10b221380,
                               *(long *)(lVar12 + 0x358) != 0);
          uVar16 = auVar29._8_8_;
          if (((auVar29._0_8_ & 1) == 0) && (uVar16 == 0)) {
            *(undefined1 *)(lVar12 + 0x33c) = 1;
          }
          else if ((auVar29._0_8_ & 1) != 0) goto LAB_1007502fc;
        }
        FUN_101185690(puVar3 + -0x160,lVar12,lVar12 + 0x400,lVar12 + 0x3c8);
        if (puVar3[-0x160] == '\x16') {
          return (long *)0x0;
        }
        *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x158);
        *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x160);
        *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x148);
        *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x150);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(puVar3 + -0x138);
        *(undefined8 *)(puVar3 + -0x100) = *(undefined8 *)(puVar3 + -0x140);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0x128);
        *(undefined8 *)(puVar3 + -0xf0) = *(undefined8 *)(puVar3 + -0x130);
        auVar28 = FUN_1007524c8(auVar28._0_8_,lVar12,puVar9);
        uVar16 = auVar28._8_8_;
        if (((auVar28._0_8_ & 0xfffffffffffffffd) != 0) && ((uVar16 & 3) == 1)) {
          uVar23 = *(undefined8 *)(uVar16 - 1);
          puVar24 = *(undefined8 **)(uVar16 + 7);
          pcVar11 = (code *)*puVar24;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(uVar23);
          }
          if (puVar24[1] != 0) {
            _free(uVar23);
          }
          _free((undefined8 *)(uVar16 - 1));
        }
        *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0x158);
        *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0x160);
        *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -0x148);
        *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0x150);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0x138);
        *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0x140);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0x128);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0x130);
        __ZN3std2io5error5Error3new17h58198142851d595bE(0x15,puVar3 + -0xe0);
      }
      return (long *)0x1;
    }
    uVar22 = uVar16 >> 2;
    if (((uVar16 & 3) == 1) && ((uVar22 & 0x1ffffffffffff) == 1)) {
      uVar15 = uVar16 & 0xfff8000000000000;
      uVar22 = *(ulong *)(lVar12 + 0x50);
      bVar4 = uVar22 == uVar16;
      uVar16 = uVar22;
      if (bVar4) {
        *(ulong *)(lVar12 + 0x50) = uVar15 | 3;
        plVar7 = (long *)param_1[2];
        lVar12 = param_1[3];
        puVar27 = unaff_x29;
        puVar3 = (undefined1 *)register0x00000008;
        goto FUN_10074fd94;
      }
      goto LAB_100cbb868;
    }
    uVar26 = uVar16 & 0xfff8000000000003;
    uVar15 = *(ulong *)(lVar12 + 0x50);
    bVar4 = uVar15 == uVar16;
    uVar16 = uVar15;
    if (bVar4) {
      *(ulong *)(lVar12 + 0x50) = (uVar22 & 0xc001ffffffffffff) * 4 - 4 | uVar26;
      return param_1;
    }
  } while( true );
}

