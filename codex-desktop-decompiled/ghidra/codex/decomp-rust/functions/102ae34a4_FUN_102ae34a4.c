
void FUN_102ae34a4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar10;
  long *extraout_x1;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x20;
  long *plVar15;
  ulong unaff_x22;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 *puVar9;
  
  lVar18 = param_2[4];
  lVar19 = param_2[5];
  uVar14 = param_2[1];
  if (uVar14 == 0) {
    uStack_98 = 0;
    puStack_a0 = &UNK_108c56c70;
    lStack_88 = 0;
    lStack_90 = 0;
    puStack_c8 = param_1;
    goto LAB_102ae3704;
  }
  uVar1 = uVar14 + 1;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  if (SUB168(auVar27 * ZEXT816(0x30),8) == 0) {
    unaff_x22 = uVar1 * 0x30;
    unaff_x20 = uVar14 + 9;
    uVar2 = unaff_x22 + unaff_x20;
    if ((CARRY8(unaff_x22,unaff_x20)) || (0x7ffffffffffffff8 < uVar2)) goto LAB_102ae3540;
    lStack_d8 = lVar19;
    lStack_d0 = lVar18;
    puStack_c8 = param_1;
    if (uVar2 == 0) goto LAB_102ae3558;
    if (uVar2 < 8) {
      puStack_80 = (undefined *)0x0;
      iVar5 = _posix_memalign(&puStack_80,8,uVar2);
      puVar6 = puStack_80;
      if (iVar5 == 0) goto LAB_102ae3580;
LAB_102ae3754:
      uVar8 = func_0x0001087c906c(8,uVar2);
      func_0x000102a1082c(uStack_b8,puStack_80);
      FUN_102a052a4(&puStack_80);
      auVar27 = __Unwind_Resume(uVar8);
      plVar11 = auVar27._8_8_;
      puVar9 = auVar27._0_8_;
      plVar17 = (long *)plVar11[3];
      plVar12 = (long *)plVar17[0xe];
      lVar18 = -0x8000000000000000;
      if (plVar12 != (long *)plVar17[0x10]) {
        lVar19 = *plVar12;
        plVar17[0xe] = (long)(plVar12 + 0xe);
        if (lVar19 != -0x8000000000000000) {
          lVar3 = plVar12[1];
          lVar18 = plVar12[2];
          lVar7 = plVar12[6];
          lVar13 = plVar12[5];
          lVar22 = plVar12[8];
          lVar16 = plVar12[7];
          lVar26 = plVar12[10];
          lVar25 = plVar12[9];
          lVar23 = plVar12[0xc];
          lVar20 = plVar12[0xb];
          lVar24 = plVar12[4];
          lVar21 = plVar12[3];
          if (lVar18 == 0) {
            lVar10 = 1;
          }
          else {
            lVar10 = _malloc(lVar18);
            if (lVar10 == 0) {
              func_0x0001087c9084(1,lVar18);
              goto LAB_102ae3928;
            }
          }
          _memcpy(lVar10,lVar3,lVar18);
          if (*plVar17 != -0x8000000000000000) {
            if (*plVar17 != 0) {
              _free(plVar17[1]);
            }
            FUN_102a116b0(plVar17 + 3);
          }
          *plVar17 = lVar18;
          plVar17[1] = lVar10;
          plVar17[2] = lVar18;
          plVar17[6] = lVar7;
          plVar17[5] = lVar13;
          plVar17[8] = lVar22;
          plVar17[7] = lVar16;
          plVar17[10] = lVar26;
          plVar17[9] = lVar25;
          plVar17[0xc] = lVar23;
          plVar17[0xb] = lVar20;
          plVar17[4] = lVar24;
          plVar17[3] = lVar21;
          if (lVar18 == 0) {
            lVar13 = 1;
          }
          else {
            lVar13 = _malloc(lVar18);
            if (lVar13 == 0) {
              func_0x0001087c9084(1,lVar18);
LAB_102ae3928:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102ae392c);
              (*pcVar4)();
            }
          }
          _memcpy(lVar13,lVar3,lVar18);
          if ((*plVar11 != -0x8000000000000000) && (*plVar11 != 0)) {
            _free(plVar11[1]);
          }
          *plVar11 = lVar18;
          plVar11[1] = lVar13;
          plVar11[2] = lVar18;
          lVar13 = 0x18;
          puVar9[1] = lVar19;
          puVar9[2] = lVar3;
          goto LAB_102ae38e4;
        }
      }
      lVar13 = 8;
LAB_102ae38e4:
      *(long *)((long)puVar9 + lVar13) = lVar18;
      *puVar9 = 2;
      return;
    }
    puVar6 = (undefined *)_malloc(uVar2);
LAB_102ae3580:
    if (puVar6 == (undefined *)0x0) goto LAB_102ae3754;
  }
  else {
LAB_102ae3540:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
    param_2 = extraout_x1;
LAB_102ae3558:
    puVar6 = (undefined *)0x8;
  }
  puVar6 = puVar6 + unaff_x22;
  uStack_70 = uVar14;
  if (7 < uVar14) {
    uStack_70 = (uVar1 >> 3) * 7;
  }
  uStack_68 = 0;
  plVar11 = (long *)*param_2;
  puStack_80 = puVar6;
  uStack_78 = uVar14;
  _memcpy(puVar6,plVar11,unaff_x20);
  lStack_88 = param_2[3];
  if (lStack_88 != 0) {
    plVar12 = plVar11 + 1;
    lVar18 = *plVar11;
    uVar14 = CONCAT17(-(-1 < lVar18),
                      CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar18 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar18 >> 8)),-(-1 < (char)lVar18)))))))) &
             0x8080808080808080;
    plVar17 = plVar11;
    lVar18 = lStack_88;
    do {
      while (uVar14 == 0) {
        lVar19 = *plVar12;
        plVar12 = plVar12 + 1;
        plVar17 = plVar17 + -0x30;
        uVar14 = CONCAT17(-(-1 < lVar19),
                          CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar19
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar19 >> 8)),-(-1 < (char)lVar19)))))))) &
                 0x8080808080808080;
      }
      uVar1 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar15 = plVar17 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6;
      lVar19 = plVar15[-5];
      lVar3 = plVar15[-4];
      if (lVar3 == 0) {
        lVar7 = 1;
        _memcpy(1,lVar19,0);
        lVar19 = plVar15[-2];
        lVar13 = plVar15[-1];
        if (lVar13 == 0) goto LAB_102ae3600;
LAB_102ae36d0:
        lVar16 = _malloc(lVar13);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,lVar13);
LAB_102ae3750:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ae3754);
          (*pcVar4)();
        }
      }
      else {
        lVar7 = _malloc(lVar3);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar3);
          goto LAB_102ae3750;
        }
        _memcpy(lVar7,lVar19,lVar3);
        lVar19 = plVar15[-2];
        lVar13 = plVar15[-1];
        if (lVar13 != 0) goto LAB_102ae36d0;
LAB_102ae3600:
        lVar16 = 1;
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar18 = lVar18 + -1;
      _memcpy(lVar16,lVar19,lVar13);
      plVar15 = (long *)(puVar6 + ((long)plVar11 - (long)plVar15 >> 4) * -0x10 + -0x30);
      *plVar15 = lVar3;
      plVar15[1] = lVar7;
      plVar15[2] = lVar3;
      plVar15[3] = lVar13;
      plVar15[4] = lVar16;
      plVar15[5] = lVar13;
    } while (lVar18 != 0);
  }
  lStack_90 = param_2[2];
  uStack_98 = uStack_78;
  puStack_a0 = puStack_80;
  lVar18 = lStack_d0;
  lVar19 = lStack_d8;
LAB_102ae3704:
  puStack_c8[4] = lVar18;
  puStack_c8[5] = lVar19;
  puStack_c8[1] = uStack_98;
  *puStack_c8 = puStack_a0;
  puStack_c8[3] = lStack_88;
  puStack_c8[2] = lStack_90;
  return;
}

