
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
__ZN93__LT_httpdate__date__HttpDate_u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h0acad8cfd2bffcbeE
          (undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  byte *pbVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *unaff_x23;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long *plStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  int aiStack_38 [2];
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  long *plVar11;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x000106032878(aiStack_38,&uStack_58,&uStack_48);
  if (aiStack_38[0] == 1) {
    iStack_30 = iStack_28;
    func_0x000108a07a3c(&UNK_109aa003d,0x23,aiStack_38,&UNK_10b3b3f70,&UNK_10b3b4050);
  }
  else if (CONCAT44(uStack_2c,iStack_30) < 0x3afff44180) {
    auVar32._8_8_ = 0;
    auVar32._0_8_ = CONCAT44(uStack_2c,iStack_30);
    iVar20 = SUB164(auVar32 * ZEXT816(0xc22e450672894ab7),10);
    iVar10 = (iVar20 + -0x2b09) % 0x23ab1;
    uVar24 = (long)iVar10 + 0x23ab1;
    if (-1 < iVar10) {
      uVar24 = (long)iVar10;
    }
    uVar14 = 3;
    if (0x8eab < uVar24 - 0x23ab0) {
      uVar14 = uVar24 / 0x8eac;
    }
    lVar23 = uVar24 + uVar14 * -0x8eac;
    lVar28 = 0x18;
    if (0x5b4 < lVar23 - 0x8eadU) {
      lVar28 = lVar23 / 0x5b5;
    }
    lVar23 = lVar23 + lVar28 * -0x5b5;
    lVar2 = 3;
    if (0x16c < lVar23 - 0x5b4U) {
      lVar2 = lVar23 / 0x16d;
    }
    uVar24 = lVar23 + lVar2 * -0x16d;
    if ((long)uVar24 < 0x1f) {
      iVar9 = 0;
      uVar17 = uVar24;
      uVar25 = 0;
    }
    else if (uVar24 < 0x3d) {
      iVar9 = 1;
      uVar17 = uVar24 - 0x1f;
      uVar25 = 0;
    }
    else if (uVar24 < 0x5c) {
      iVar9 = 2;
      uVar17 = uVar24 - 0x3d;
      uVar25 = 0;
    }
    else if (uVar24 < 0x7a) {
      iVar9 = 3;
      uVar17 = uVar24 - 0x5c;
      uVar25 = 0;
    }
    else if (uVar24 < 0x99) {
      iVar9 = 4;
      uVar17 = uVar24 - 0x7a;
      uVar25 = 0;
    }
    else if (uVar24 < 0xb8) {
      iVar9 = 5;
      uVar17 = uVar24 - 0x99;
      uVar25 = 0;
    }
    else if (uVar24 < 0xd6) {
      iVar9 = 6;
      uVar17 = uVar24 - 0xb8;
      uVar25 = 0;
    }
    else if (uVar24 < 0xf5) {
      iVar9 = 7;
      uVar17 = uVar24 - 0xd6;
      uVar25 = 0;
    }
    else {
      lVar23 = -0x151;
      if (0x16d < uVar24) {
        lVar23 = -0x16e;
      }
      iVar9 = 10;
      uVar17 = uVar24 - 0x132;
      if (0x150 < uVar24) {
        iVar9 = 0xb;
        uVar17 = lVar23 + uVar24;
      }
      bVar7 = 0x131 < uVar24;
      iVar21 = 9;
      if (bVar7) {
        iVar21 = iVar9;
      }
      uVar22 = uVar24 - 0x113;
      if (bVar7) {
        uVar22 = uVar17;
      }
      iVar9 = 8;
      if (0x112 < uVar24) {
        iVar9 = iVar21;
      }
      uVar17 = uVar24 - 0xf5;
      uVar25 = 0;
      if (0x112 < uVar24) {
        uVar17 = uVar22;
        uVar25 = (uint)bVar7;
      }
    }
    iVar21 = 0xf7;
    if (uVar25 == 0) {
      iVar21 = 3;
    }
    uVar1 = (iVar20 + -0x2b06) % 7;
    uVar5 = iStack_30 + iVar20 * -0x15180;
    uVar22 = (ulong)uVar1 << 0x38;
    uVar24 = uVar22 + 0x700000000000000;
    if (0 < (int)uVar1) {
      uVar24 = uVar22;
    }
    return (undefined8 *)
           (((ulong)((uVar5 % 0x3c) * 0x10000) | (ulong)uVar5 / 0xe10 << 0x20 |
             (ulong)((uVar5 % 0xe10) / 0x3c) << 0x18 | uVar24) +
            (((ulong)(uint)(iVar9 + iVar21) & 0xff) << 0x30) +
            ((uVar17 << 0x28) + 0x10000000000 & 0xff0000000000) |
           (ulong)((int)uVar14 * 100 + ((iVar20 + -0x2b09) / 0x23ab1 + (iVar10 >> 0x1f)) * 400 +
                   (int)lVar28 * 4 + uVar25 + (int)lVar2 + 2000) & 0xffff);
  }
  plVar30 = (long *)&UNK_10b3b4068;
  auVar32 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109aa0060,0x3b);
  plVar29 = auVar32._8_8_;
  plVar11 = auVar32._0_8_;
  uStack_68 = 0x1057a1b28;
  lVar28 = plVar11[10];
  bVar8 = *(byte *)(plVar11 + 0xb);
  uVar24 = plVar11[4];
  puStack_70 = &stack0xfffffffffffffff0;
  if (uVar24 == 3) {
LAB_1057a1bd0:
    unaff_x23 = &uStack_e0;
    plVar11[4] = 3;
    if ((undefined8 *)*plVar30 == (undefined8 *)0x0) {
      lStack_130 = 0;
      uStack_128 = (undefined1)plVar30[1];
    }
    else {
      (**(code **)*plVar30)(&lStack_110,plVar30 + 3,plVar30[1],plVar30[2]);
      uStack_e0 = CONCAT17(uStack_100,uStack_107);
      uStack_d8 = uStack_ff;
      uStack_d1 = uStack_f8;
      uStack_d0 = uStack_f7;
      lStack_130 = lStack_110;
      uStack_128 = uStack_108;
    }
    uStack_11f = uStack_d8;
    uStack_127 = (undefined7)uStack_e0;
    uStack_120 = (undefined1)((ulong)uStack_e0 >> 0x38);
    uStack_118 = uStack_d1;
    uStack_117 = uStack_d0;
    plVar12 = (long *)__ZN5hyper3ext13HeaderCaseMap16get_all_internal17hf5be39b7641c51acE
                                (&lStack_110,lVar28,plVar30);
    lStack_178 = CONCAT71(uStack_127,uStack_128);
    lStack_170 = CONCAT71(uStack_11f,uStack_120);
    lStack_180 = lStack_130;
    lStack_160 = lStack_110;
    lStack_138 = lStack_e8;
    lStack_140 = lStack_f0;
    plVar11[5] = CONCAT71(uStack_107,uStack_108);
    plVar11[4] = lStack_110;
    plVar11[7] = CONCAT71(uStack_f7,uStack_f8);
    plVar11[6] = CONCAT71(uStack_ff,uStack_100);
    plVar11[9] = lStack_e8;
    plVar11[8] = lStack_f0;
    plVar11[1] = lStack_178;
    *plVar11 = lStack_130;
    plVar11[3] = CONCAT71(uStack_117,uStack_118);
    plVar11[2] = lStack_170;
    uVar24 = plVar11[4];
  }
  else {
    lVar23 = *plVar11;
    if ((lVar23 != 0) == (*plVar30 == 0)) {
      if (lVar23 != 0) {
        unaff_x23 = (undefined8 *)plVar11[2];
LAB_1057a1bc0:
        (**(code **)(lVar23 + 0x20))(plVar11 + 3,plVar11[1],unaff_x23);
      }
      goto LAB_1057a1bd0;
    }
    if (lVar23 == 0) {
      plVar12 = plVar11;
      if ((char)plVar11[1] != (char)plVar30[1]) goto LAB_1057a1bd0;
    }
    else {
      unaff_x23 = (undefined8 *)plVar11[2];
      if ((unaff_x23 != (undefined8 *)plVar30[2]) ||
         (plVar12 = (long *)_memcmp(plVar11[1],plVar30[1]), (int)plVar12 != 0)) goto LAB_1057a1bc0;
    }
  }
  if (uVar24 == 2) {
    if ((bVar8 & 1) != 0) {
      if (*plVar30 == 0) {
        auVar33 = func_0x0001057aaacc((char)plVar30[1]);
        pbVar26 = auVar33._0_8_;
        lVar28 = plVar29[2];
        auVar32 = auVar33;
        if (auVar33._8_8_ <= (ulong)(*plVar29 - lVar28)) goto LAB_1057a1c98;
      }
      else {
        pbVar26 = *(byte **)*(undefined1 (*) [16])(plVar30 + 1);
        auVar33._8_8_ = plVar30[2];
        auVar33._0_8_ = plVar12;
        lVar28 = plVar29[2];
        auVar32 = *(undefined1 (*) [16])(plVar30 + 1);
        if ((ulong)plVar30[2] <= (ulong)(*plVar29 - lVar28)) {
LAB_1057a1c98:
          if (auVar33._8_8_ == 0) {
            return auVar33._0_8_;
          }
          goto LAB_1057a1c9c;
        }
      }
      pbVar26 = auVar32._0_8_;
      uVar15 = FUN_108a1531c(plVar29,lVar28,auVar32._8_8_,1,1);
      auVar33._8_8_ = auVar32._8_8_;
      auVar33._0_8_ = uVar15;
      lVar28 = plVar29[2];
LAB_1057a1c9c:
      bVar8 = 0x2d;
      do {
        puVar13 = auVar33._0_8_;
        bVar3 = *pbVar26;
        bVar31 = 0x20;
        if (0x19 < (byte)(bVar3 + 0x9f) || bVar8 != 0x2d) {
          bVar31 = 0;
        }
        if (lVar28 == *plVar29) {
          puVar13 = (undefined8 *)func_0x0001087c90b8(plVar29);
        }
        bVar8 = bVar31 ^ bVar3;
        *(byte *)(plVar29[1] + lVar28) = bVar8;
        lVar28 = lVar28 + 1;
        plVar29[2] = lVar28;
        lVar23 = auVar33._8_8_ + -1;
        auVar33._8_8_ = lVar23;
        auVar33._0_8_ = puVar13;
        pbVar26 = pbVar26 + 1;
      } while (lVar23 != 0);
      return puVar13;
    }
    if (*plVar30 == 0) {
      auVar32 = func_0x0001057aaacc((char)plVar30[1]);
      lVar28 = plVar29[2];
      auVar33 = auVar32;
      if ((ulong)(*plVar29 - lVar28) < auVar32._8_8_) goto LAB_1057a1e48;
    }
    else {
      auVar32 = *(undefined1 (*) [16])(plVar30 + 1);
      lVar28 = plVar29[2];
      auVar33 = *(undefined1 (*) [16])(plVar30 + 1);
      if ((ulong)(*plVar29 - lVar28) < (ulong)plVar30[2]) {
LAB_1057a1e48:
        auVar32 = auVar33;
        FUN_108a1531c(plVar29,lVar28,auVar32._8_8_,1,1);
        lVar28 = plVar29[2];
      }
    }
    lVar23 = plVar29[1] + lVar28;
    goto LAB_1057a1ea8;
  }
  if ((uVar24 & 1) == 0) {
    uVar14 = plVar11[9];
    uVar17 = *(ulong *)(plVar11[8] + 0x28);
    auVar35._8_8_ = uVar17;
    auVar35._0_8_ = uVar14;
    if (uVar17 <= uVar14) goto LAB_1057a1f24;
    piVar18 = (int *)(*(long *)(plVar11[8] + 0x20) + uVar14 * 0x60);
    if (plVar11[6] == 0) {
      plVar11[4] = 2;
      plVar11[6] = 2;
      piVar18 = piVar18 + 6;
    }
    else {
      if (*piVar18 != 1) {
        auVar34 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109aa029a,0x28,&UNK_10b3b54b8);
        goto LAB_1057a1f18;
      }
      lVar28 = *(long *)(piVar18 + 2);
      plVar11[4] = 1;
      plVar11[5] = lVar28;
      piVar18 = piVar18 + 6;
    }
  }
  else {
    uVar14 = plVar11[5];
    uVar17 = *(ulong *)(plVar11[8] + 0x40);
    auVar34._8_8_ = uVar17;
    auVar34._0_8_ = uVar14;
    if (uVar17 <= uVar14) {
LAB_1057a1f18:
      auVar35 = func_0x000108a07bdc(auVar34._0_8_,auVar34._8_8_,&UNK_10b3b54d0);
LAB_1057a1f24:
      func_0x000108a07bdc(auVar35._0_8_,auVar35._8_8_,&UNK_10b3b54a0);
      plVar11[4] = 3;
      uVar15 = __Unwind_Resume();
      if (uVar24 != 0) {
        (**(code **)(uVar24 + 0x20))
                  (&uStack_118,CONCAT71(uStack_127,uStack_128),CONCAT71(uStack_11f,uStack_120));
      }
      __Unwind_Resume(uVar15);
      auVar32 = func_0x000108a07bc4();
      plVar12 = auVar32._8_8_;
      puVar16 = auVar32._0_8_;
      uStack_188 = 0x1057a1f64;
      plVar29 = (long *)*plVar12;
      puVar13 = puVar16;
      if (plVar29 == (long *)0x0) {
LAB_1057a2168:
        *puVar16 = 0;
        return puVar13;
      }
      plVar27 = (long *)plVar29[3];
      plVar19 = (long *)plVar27[5];
      ppuStack_190 = &puStack_70;
      lStack_1b0 = lVar28;
      uStack_1c0 = (ulong)bVar8;
      plStack_1a0 = plVar11;
      uStack_198 = uVar15;
      plStack_1a8 = plVar30;
      puStack_1b8 = unaff_x23;
      while (plVar19 == (long *)0x0) {
        if ((long *)plVar29[2] == plVar27) {
          if (*(long *)(*plVar12 + 0x38) != 0) {
            *puVar16 = 2;
            return puVar13;
          }
          plVar30 = (long *)*plVar12;
          if (plVar30 != (long *)0x0) {
            lVar28 = *plVar30;
            *plVar30 = lVar28 + -1;
            LORelease();
            if (lVar28 == 1) {
              DataMemoryBarrier(2,1);
              puVar13 = (undefined8 *)
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1418662fc1f531cfE(plVar12);
            }
          }
          *plVar12 = 0;
          goto LAB_1057a2168;
        }
        puVar13 = (undefined8 *)_sched_yield();
        plVar27 = (long *)plVar29[3];
        plVar19 = (long *)plVar27[5];
      }
      plVar29[3] = (long)plVar19;
      if (*plVar27 == 0) {
        if (*plVar19 == 0) goto LAB_1057a219c;
        lStack_1e8 = plVar19[2];
        plStack_1f0 = (long *)plVar19[1];
        lStack_1d8 = plVar19[4];
        lStack_1e0 = plVar19[3];
        *plVar19 = 0;
        if (*plVar27 == 0) {
LAB_1057a1ff8:
          puVar13 = (undefined8 *)_free(plVar27);
          lVar28 = *plVar12;
          plStack_210 = plStack_1f0;
          lStack_208 = lStack_1e8;
          lStack_200 = lStack_1e0;
          lStack_1f8 = lStack_1d8;
        }
        else {
          if (plVar27[1] != 0) {
            (**(code **)(plVar27[1] + 0x20))(plVar27 + 4,plVar27[2],plVar27[3]);
            goto LAB_1057a1ff8;
          }
          plVar30 = (long *)plVar27[2];
          lVar28 = *plVar30;
          if (lVar28 != 0) {
            puVar13 = (undefined8 *)plVar30[1];
            pcVar6 = (code *)*puVar13;
            if (pcVar6 != (code *)0x0) {
              (*pcVar6)(lVar28);
            }
            if (puVar13[1] != 0) {
              _free(lVar28);
            }
          }
          _free(plVar30);
          puVar13 = (undefined8 *)_free(plVar27);
          lVar28 = *plVar12;
          plStack_210 = plStack_1f0;
          lStack_208 = lStack_1e8;
          lStack_200 = lStack_1e0;
          lStack_1f8 = lStack_1d8;
        }
        if (lVar28 == 0) goto LAB_1057a20b8;
        plStack_1f0 = plStack_210;
        lStack_1e8 = lStack_208;
        lStack_1e0 = lStack_200;
        lStack_1d8 = lStack_1f8;
        plVar27 = (long *)FUN_1057a27a4(lVar28 + 0x20);
        puVar13 = (undefined8 *)0x0;
        if (plVar27 != (long *)0x0) {
          plVar29 = plVar27 + 2;
          plStack_1c8 = plVar27;
          if (plVar27[2] == 0) goto LAB_1057a21b4;
          goto LAB_1057a2030;
        }
      }
      else {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109aa020c,0x29,&UNK_10b3b41d8);
LAB_1057a219c:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109aa0235,0x29,&UNK_10b3b41f0);
LAB_1057a21b4:
        FUN_108a14fc0(plVar29);
LAB_1057a2030:
        iVar10 = _pthread_mutex_lock();
        if (iVar10 != 0) {
          FUN_108a81ad4();
LAB_1057a2204:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1057a2208);
          (*pcVar6)();
        }
        if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0) {
          bVar8 = 0;
          cVar4 = (char)plVar27[3];
        }
        else {
          bVar8 = func_0x000108a82c0c();
          bVar8 = bVar8 ^ 1;
          cVar4 = (char)plVar27[3];
        }
        if (cVar4 != '\0') {
          uVar24 = (ulong)lStack_1e8 >> 8;
          lStack_1e8 = CONCAT71((int7)uVar24,bVar8);
          plStack_1f0 = plVar29;
          func_0x000108a07a3c(&UNK_109aa0375,0x2b,&plStack_1f0,&UNK_10b3b4430,&UNK_10b3b4160);
          goto LAB_1057a2204;
        }
        *(undefined1 *)(plVar27 + 6) = 0;
        lVar28 = plVar27[4];
        plVar27[4] = 0;
        if (lVar28 != 0) {
          (**(code **)(lVar28 + 8))(plVar27[5]);
        }
        if ((((bVar8 & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar24 = func_0x000108a82c0c(), (uVar24 & 1) == 0)) {
          *(undefined1 *)(plVar27 + 3) = 1;
        }
        puVar13 = (undefined8 *)_pthread_mutex_unlock(plVar27[2]);
        lVar28 = *plVar27;
        *plVar27 = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          puVar13 = (undefined8 *)func_0x0001057ab4ac(&plStack_1c8);
        }
        lVar28 = *plVar12;
        if (lVar28 == 0) goto LAB_1057a20b8;
      }
      LOAcquire();
      *(long *)(lVar28 + 0x38) = *(long *)(lVar28 + 0x38) + -1;
      LORelease();
LAB_1057a20b8:
      puVar16[2] = lStack_208;
      puVar16[1] = plStack_210;
      puVar16[4] = lStack_1f8;
      puVar16[3] = lStack_200;
      *puVar16 = 1;
      return puVar13;
    }
    lVar28 = *(long *)(plVar11[8] + 0x38) + uVar14 * 0x40;
    if ((plVar11[6] == 1) && (uVar14 == plVar11[7])) {
      plVar11[4] = 2;
      plVar11[6] = 2;
    }
    else if ((*(uint *)(lVar28 + 0x10) & 1) == 0) {
      plVar11[4] = 2;
    }
    else {
      lVar23 = *(long *)(lVar28 + 0x18);
      plVar11[4] = 1;
      plVar11[5] = lVar23;
    }
    piVar18 = (int *)(lVar28 + 0x20);
  }
  auVar32 = *(undefined1 (*) [16])(piVar18 + 2);
  lVar28 = plVar29[2];
  if ((ulong)(*plVar29 - lVar28) < *(ulong *)(piVar18 + 4)) {
    FUN_108a1531c(plVar29,lVar28,*(ulong *)(piVar18 + 4),1,1);
    lVar28 = plVar29[2];
  }
  lVar23 = plVar29[1] + lVar28;
LAB_1057a1ea8:
  puVar13 = (undefined8 *)_memcpy(lVar23,auVar32._0_8_,auVar32._8_8_);
  plVar29[2] = lVar28 + auVar32._8_8_;
  return puVar13;
}

