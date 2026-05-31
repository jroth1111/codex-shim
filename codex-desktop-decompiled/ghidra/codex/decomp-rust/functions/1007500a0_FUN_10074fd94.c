
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10074fd94(long *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_170;
  undefined *puStack_168;
  char acStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  DataMemoryBarrier(2,1);
  auVar24 = (*
            ___ZN12sharded_slab3tid12REGISTRATION29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h2229902fa1c5e077E
            )();
  uVar11 = auVar24._8_8_;
  piVar5 = auVar24._0_8_;
  if (((char)piVar5[4] == '\x01') || (piVar5 = (int *)thunk_FUN_108853fe0(), piVar5 != (int *)0x0))
  {
    if (*piVar5 == 1) {
      lVar4 = *(long *)(piVar5 + 2);
    }
    else {
      lVar4 = thunk_FUN_108833144();
    }
  }
  else {
    lVar4 = -1;
  }
  if (lVar4 != param_1[4]) {
    uVar17 = 0x40 - LZCOUNT((uVar11 & 0x3fffffffff) + 0x20 >> 6);
    if (uVar17 < (ulong)param_1[3]) {
      plVar10 = (long *)(param_1[2] + (uVar17 & 0xffffffff) * 0x28);
      if ((*plVar10 != 0) &&
         (uVar17 = (uVar11 & 0x3fffffffff) - plVar10[4], uVar17 < (ulong)plVar10[1])) {
        lVar19 = *plVar10 + uVar17 * 0x60;
        if (uVar11 >> 0x33 == *(ulong *)(lVar19 + 0x50) >> 0x33) {
          bVar2 = false;
          uVar20 = 0;
          iVar9 = -0x1ffe;
          if (uVar11 >> 0x34 < 0xfff) {
            iVar9 = 1;
          }
          uVar23 = *(ulong *)(lVar19 + 0x50);
          do {
            while( true ) {
              uVar16 = *(ulong *)(lVar19 + 0x50);
              if (uVar16 != uVar23) break;
              *(ulong *)(lVar19 + 0x50) =
                   uVar23 & 0x7ffffffffffff | (ulong)(iVar9 + (auVar24._12_4_ >> 0x13)) << 0x33;
              if ((uVar16 & 0x7fffffffffffc) == 0) {
                lVar4 = __ZN95__LT_tracing_subscriber__registry__sharded__DataInner_u20_as_u20_sharded_slab__clear__Clear_GT_5clear17h489622b4c3023405E
                                  (lVar19);
                uVar11 = plVar10[2];
                do {
                  *(ulong *)(lVar19 + 0x58) = uVar11;
                  uVar20 = plVar10[2];
                  bVar2 = uVar20 != uVar11;
                  uVar11 = uVar20;
                } while (bVar2);
                plVar10[2] = uVar17;
                return lVar4;
              }
              uVar1 = (uint)uVar20 & 0x1f;
              if (uVar1 != 0x1f) {
                iVar7 = 1 << (ulong)uVar1;
                do {
                  InstructionSynchronizationBarrier();
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              if (uVar20 < 8) {
                uVar20 = uVar20 + 1;
              }
              else {
                lVar4 = _sched_yield();
              }
              bVar2 = true;
            }
            uVar20 = 0;
            uVar23 = uVar16;
          } while ((bVar2) || (uVar11 >> 0x33 == uVar16 >> 0x33));
        }
      }
    }
    return lVar4;
  }
  uVar17 = 0x40 - LZCOUNT((uVar11 & 0x3fffffffff) + 0x20 >> 6);
  if ((ulong)param_1[3] <= uVar17) {
    return lVar4;
  }
  if (uVar17 < (ulong)param_1[1]) {
    plVar10 = (long *)(param_1[2] + (uVar17 & 0xffffffff) * 0x28);
    if (*plVar10 == 0) {
      return lVar4;
    }
    uVar20 = (uVar11 & 0x3fffffffff) - plVar10[4];
    if ((ulong)plVar10[1] <= uVar20) {
      return lVar4;
    }
    lVar22 = *param_1;
    lVar19 = *plVar10 + uVar20 * 0x60;
    if (uVar11 >> 0x33 != *(ulong *)(lVar19 + 0x50) >> 0x33) {
      return lVar4;
    }
    bVar2 = false;
    uVar23 = 0;
    iVar9 = -0x1ffe;
    if (uVar11 >> 0x34 < 0xfff) {
      iVar9 = 1;
    }
    uVar16 = *(ulong *)(lVar19 + 0x50);
    do {
      while( true ) {
        uVar12 = *(ulong *)(lVar19 + 0x50);
        if (uVar12 != uVar16) break;
        *(ulong *)(lVar19 + 0x50) =
             uVar16 & 0x7ffffffffffff | (ulong)(iVar9 + (auVar24._12_4_ >> 0x13)) << 0x33;
        if ((uVar12 & 0x7fffffffffffc) == 0) {
          lVar4 = __ZN95__LT_tracing_subscriber__registry__sharded__DataInner_u20_as_u20_sharded_slab__clear__Clear_GT_5clear17h489622b4c3023405E
                            (lVar19);
          *(undefined8 *)(lVar19 + 0x58) = *(undefined8 *)(lVar22 + uVar17 * 8);
          *(ulong *)(lVar22 + uVar17 * 8) = uVar20;
          return lVar4;
        }
        uVar1 = (uint)uVar23 & 0x1f;
        if (uVar1 != 0x1f) {
          iVar7 = 1 << (ulong)uVar1;
          do {
            InstructionSynchronizationBarrier();
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (uVar23 < 8) {
          uVar23 = uVar23 + 1;
        }
        else {
          lVar4 = _sched_yield();
        }
        bVar2 = true;
      }
      uVar23 = 0;
      uVar16 = uVar12;
    } while ((bVar2) || (uVar11 >> 0x33 == uVar12 >> 0x33));
    return lVar4;
  }
  puVar6 = &UNK_10b221368;
  auVar24 = FUN_107c05cd0(uVar17,param_1[1]);
  lVar4 = auVar24._8_8_;
  uVar18 = auVar24._0_8_;
  uStack_170 = uVar18;
  puStack_168 = puVar6;
  if (*(int *)(lVar4 + 0x50) == 1) {
    uVar11 = *(ulong *)(lVar4 + 0x78);
    if (uVar11 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      lVar22 = *(long *)(lVar4 + 0x68);
      uVar23 = *(ulong *)(lVar4 + 0x70);
      uVar20 = *(ulong *)(lVar4 + 0x60);
      uVar17 = 0;
      if (uVar20 <= uVar23) {
        uVar17 = uVar20;
      }
      lVar14 = uVar23 - uVar17;
      uVar16 = uVar20 - lVar14;
      lVar13 = uVar11 - uVar16;
      if (uVar11 < uVar16 || lVar13 == 0) {
        uVar20 = lVar14 + uVar11;
      }
      uVar12 = lVar13 * 0x18;
      if (uVar11 < uVar16 || lVar13 == 0) {
        uVar12 = 0;
      }
      if (uVar20 - lVar14 != 0) {
        uVar11 = (uVar20 - lVar14) * 0x18;
        uVar20 = uVar11 / 0x18;
        if (uVar11 < 0x60) {
          uVar16 = 0;
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          lVar13 = 0;
          lVar14 = 0;
          lVar15 = 0;
          uVar16 = uVar20 & 0xffffffffffffffc;
          plVar10 = (long *)(uVar23 * 0x18 + uVar17 * -0x18 + lVar22 + 0x40);
          uVar11 = uVar16;
          do {
            lVar19 = plVar10[-6] + lVar19;
            lVar13 = plVar10[-3] + lVar13;
            lVar14 = *plVar10 + lVar14;
            lVar15 = plVar10[3] + lVar15;
            plVar10 = plVar10 + 0xc;
            uVar11 = uVar11 - 4;
          } while (uVar11 != 0);
          lVar19 = lVar15 + lVar14 + lVar13 + lVar19;
          if (uVar20 == uVar16) goto LAB_1007501e8;
        }
        lVar13 = uVar16 - uVar20;
        plVar10 = (long *)(uVar23 * 0x18 + uVar16 * 0x18 + uVar17 * -0x18 + lVar22 + 0x10);
        do {
          lVar19 = *plVar10 + lVar19;
          bVar2 = lVar13 != -1;
          lVar13 = lVar13 + 1;
          plVar10 = plVar10 + 3;
        } while (bVar2);
      }
LAB_1007501e8:
      if (uVar12 != 0) {
        uVar11 = uVar12 / 0x18;
        if (uVar12 < 0x60) {
          uVar20 = 0;
        }
        else {
          lVar13 = 0;
          lVar14 = 0;
          lVar15 = 0;
          uVar20 = uVar11 & 0x7fffffffffffffc;
          plVar10 = (long *)(lVar22 + 0x40);
          uVar17 = uVar20;
          do {
            lVar19 = plVar10[-6] + lVar19;
            lVar13 = plVar10[-3] + lVar13;
            lVar14 = *plVar10 + lVar14;
            lVar15 = plVar10[3] + lVar15;
            plVar10 = plVar10 + 0xc;
            uVar17 = uVar17 - 4;
          } while (uVar17 != 0);
          lVar19 = lVar15 + lVar14 + lVar13 + lVar19;
          if (uVar11 == uVar20) goto LAB_100750284;
        }
        lVar13 = uVar11 - uVar20;
        plVar10 = (long *)(lVar22 + uVar20 * 0x18 + 0x10);
        do {
          lVar19 = *plVar10 + lVar19;
          lVar13 = lVar13 + -1;
          plVar10 = plVar10 + 3;
        } while (lVar13 != 0);
      }
    }
LAB_100750284:
    if ((ulong)(lVar19 - *(long *)(lVar4 + 0x80)) <= *(ulong *)(lVar4 + 0x58)) goto LAB_1007502b0;
    uVar11 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108ccce29,0x1e);
LAB_1007502fc:
    cVar3 = FUN_100c355d4(uVar11);
    if (cVar3 == '\r') {
      if ((uVar11 & 3) != 1) {
        return 2;
      }
      uVar18 = *(undefined8 *)(uVar11 - 1);
      puVar21 = *(undefined8 **)(uVar11 + 7);
      pcVar8 = (code *)*puVar21;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar18);
      }
      if (puVar21[1] != 0) {
        _free(uVar18);
      }
      _free((undefined8 *)(uVar11 - 1));
      return 2;
    }
  }
  else {
LAB_1007502b0:
    if ((*(byte *)(lVar4 + 0x33b) & 1) == 0) {
      auVar24 = __ZN6rustls4msgs8deframer7buffers17DeframerVecBuffer4read17h66da098afa731e90E
                          (lVar4 + 0x400,&uStack_170,&UNK_10b221380,*(long *)(lVar4 + 0x358) != 0);
      uVar11 = auVar24._8_8_;
      if (((auVar24._0_8_ & 1) == 0) && (uVar11 == 0)) {
        *(undefined1 *)(lVar4 + 0x33c) = 1;
      }
      else if ((auVar24._0_8_ & 1) != 0) goto LAB_1007502fc;
    }
    FUN_101185690(acStack_160,lVar4,lVar4 + 0x400,lVar4 + 0x3c8);
    if (acStack_160[0] == '\x16') {
      return 0;
    }
    uStack_118 = uStack_158;
    uStack_108 = uStack_148;
    uStack_110 = uStack_150;
    uStack_f8 = uStack_138;
    uStack_100 = uStack_140;
    uStack_e8 = uStack_128;
    uStack_f0 = uStack_130;
    auVar24 = FUN_1007524c8(uVar18,lVar4,puVar6);
    uVar11 = auVar24._8_8_;
    if (((auVar24._0_8_ & 0xfffffffffffffffd) != 0) && ((uVar11 & 3) == 1)) {
      uVar18 = *(undefined8 *)(uVar11 - 1);
      puVar21 = *(undefined8 **)(uVar11 + 7);
      pcVar8 = (code *)*puVar21;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar18);
      }
      if (puVar21[1] != 0) {
        _free(uVar18);
      }
      _free((undefined8 *)(uVar11 - 1));
    }
    uStack_d8 = uStack_158;
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    __ZN3std2io5error5Error3new17h58198142851d595bE(0x15,auStack_e0);
  }
  return 1;
}

