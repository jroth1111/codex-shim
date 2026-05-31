
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106030dc0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ushort *puVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *extraout_x8;
  undefined8 uVar18;
  long extraout_x9;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *extraout_x10;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong extraout_x12;
  ulong uVar24;
  undefined8 *unaff_x19;
  undefined8 *puVar25;
  ulong unaff_x20;
  undefined2 uVar26;
  undefined8 uVar27;
  ulong unaff_x23;
  undefined *puVar28;
  ulong uVar29;
  long unaff_x25;
  undefined8 uVar30;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar31;
  char cStack_209;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_110;
  byte bStack_f0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  byte bStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_80 = 0;
  iVar10 = _pthread_threadid_np(0,&lStack_80);
  lVar17 = lStack_80;
  if (iVar10 != 0) {
    plVar12 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)
                                (&__ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE);
    lVar17 = *plVar12;
    if (*plVar12 == 0) {
      if (lRam000000010b66feb0 == -1) {
        FUN_108a82a30();
        uVar16 = 0;
        puVar25 = extraout_x10;
        uVar14 = extraout_x12;
LAB_106031728:
        uVar26 = SUB82(param_1,0);
        uStack_78 = uStack_b8;
        lStack_80 = lStack_c0;
        uStack_70 = uStack_b0;
LAB_106031738:
        *unaff_x19 = uVar16;
        uVar22 = unaff_x20 & 0xffffffff;
        param_2[uVar22 * 5 + 0xc] = uStack_110;
        param_2[uVar22 * 5 + 0xd] = unaff_x28;
        param_2[uVar22 * 5 + 0xf] = uStack_78;
        param_2[uVar22 * 5 + 0xe] = lStack_80;
        param_2[uVar22 * 5 + 0x10] = uStack_70;
        if ((uint)unaff_x20 < (uint)uVar14) {
          _memmove(param_2 + unaff_x20 + 0x46,param_2 + unaff_x23 + 0x44,(uVar14 - unaff_x20) * 8);
        }
        param_2[unaff_x23 + 0x44] = puVar25;
        *(undefined2 *)((long)param_2 + 0x21a) = uVar26;
        if (unaff_x23 < uVar14 + 2) {
          lVar17 = unaff_x20 + 0x45;
          do {
            puVar25 = (undefined8 *)param_2[lVar17];
            *puVar25 = param_2;
            *(short *)(puVar25 + 0x43) = (short)lVar17 + -0x44;
            lVar17 = lVar17 + 1;
          } while (lVar17 - uVar14 != 0x46);
        }
        goto LAB_1060310b0;
      }
      lVar17 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar17;
      *plVar12 = lVar17;
    }
  }
  puVar13 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
  plVar12 = (long *)*puVar13;
  if (plVar12 < (long *)0x3) {
    plVar12 = (long *)(*(code *)*extraout_x8)(extraout_x8);
    puVar25 = (undefined8 *)0x0;
    unaff_x20 = 4;
    if ((extraout_x9 == 0) || (*plVar12 != extraout_x9)) goto LAB_106030f38;
    puVar20 = (undefined8 *)_malloc(4);
    if (puVar20 == (undefined8 *)0x0) {
LAB_1060318fc:
      uVar16 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,4);
      if ((param_1 != (undefined8 *)0x0) && (puVar25 = param_1, unaff_x25 != 0)) {
        _free(param_1);
      }
      *unaff_x27 = 0;
      FUN_10603e308(&uStack_d8);
      uVar16 = __Unwind_Resume(uVar16);
      if ((puVar25 != (undefined8 *)0x0) && (unaff_x20 != 0)) {
        _free(puVar25);
      }
      lVar17 = __Unwind_Resume(uVar16);
      uVar14 = uRam000000010b6fde98;
      puStack_190 = param_2;
      if (lVar17 != 0) {
        lStack_1d8 = 0;
        lStack_1d0 = 0x20000;
        uStack_1c8 = 4;
        _sigaltstack(&lStack_1d8,0);
        _munmap(lVar17 - uVar14,uVar14 + 0x20000);
        unaff_x20 = uVar14;
      }
      uVar14 = ___error();
      if (lRam000000010b6fdeb0 == 0) {
        FUN_108a825d0(0x10b6fdeb0);
        iVar10 = _pthread_mutex_lock();
        if (iVar10 != 0) goto LAB_106031cf4;
LAB_106031a90:
        unaff_x20 = 0x10b66f000;
        if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0) {
          uVar11 = 0;
          goto joined_r0x000106031ac8;
        }
      }
      else {
        iVar10 = _pthread_mutex_lock();
        if (iVar10 == 0) goto LAB_106031a90;
LAB_106031cf4:
        FUN_108a81ad4();
      }
      uVar11 = func_0x000108a82c0c();
      uVar11 = uVar11 ^ 1;
joined_r0x000106031ac8:
      while (uRam000000010b6fde88 != 0) {
        if (uRam000000010b6fde88 == uVar14) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6024,0xab,&UNK_10b4adbe8);
          goto LAB_106031d44;
        }
        _pause();
      }
      puVar25 = puRam000000010b6fde70;
      uVar22 = uRam000000010b6fde78;
      if (puRam000000010b6fde70 != (undefined8 *)0x0) {
        do {
          lVar17 = (ulong)*(ushort *)((long)puVar25 + 0x21a) << 3;
          uVar29 = 0;
          do {
            uVar24 = uVar29;
            uVar29 = (ulong)*(ushort *)((long)puVar25 + 0x21a);
            if (lVar17 == 0) goto LAB_106031b44;
            cVar1 = (ulong)puVar25[uVar24 + 1] < uVar14;
            if (uVar14 < (ulong)puVar25[uVar24 + 1]) {
              cVar1 = -1;
            }
            lVar17 = lVar17 + -8;
            uVar29 = uVar24 + 1;
          } while (cVar1 == '\x01');
          uVar29 = uVar24;
          if (cVar1 == '\0') {
            cStack_209 = '\0';
            uRam000000010b6fde88 = uVar14;
            if (uVar22 == 0) {
              lStack_1e8 = 0;
              puStack_1f0 = puVar25;
              uStack_1e0 = uVar24;
              FUN_10604bddc(&lStack_1d8,&puStack_1f0,&cStack_209);
              lVar23 = CONCAT44(uStack_1c4,uStack_1c8);
              lVar17 = lStack_1d0;
            }
            else {
              lStack_208 = puVar25[uVar24 + 0x44];
              while (uVar22 = uVar22 - 1, uVar22 != 0) {
                lStack_208 = *(long *)(lStack_208 + (ulong)*(ushort *)(lStack_208 + 0x21a) * 8 +
                                      0x220);
              }
              lStack_1f8 = (ulong)*(ushort *)(lStack_208 + 0x21a) - 1;
              uStack_200 = 0;
              FUN_10604bddc(&lStack_1d8,&lStack_208,&cStack_209);
              lStack_1e8 = lStack_1b8;
              puStack_1f0 = puStack_1c0;
              uStack_1e0 = uStack_1b0;
              if (*(ushort *)((long)plStack_1a8 + 0x21a) <= uStack_198) {
                do {
                  puVar2 = (ushort *)(plStack_1a8 + 0x43);
                  uStack_198 = (ulong)*puVar2;
                  plStack_1a8 = (long *)*plStack_1a8;
                } while (*(ushort *)((long)plStack_1a8 + 0x21a) <= *puVar2);
              }
              plStack_1a8[uStack_198 + 1] = lStack_1d8;
              lVar17 = plStack_1a8[uStack_198 * 5 + 0xc];
              lVar23 = plStack_1a8[uStack_198 * 5 + 0xd];
              plStack_1a8[uStack_198 * 5 + 0xc] = lStack_1d0;
              plStack_1a8[uStack_198 * 5 + 0xd] = CONCAT44(uStack_1c4,uStack_1c8);
              plStack_1a8[uStack_198 * 5 + 0xf] = lStack_1b8;
              plStack_1a8[uStack_198 * 5 + 0xe] = (long)puStack_1c0;
              plStack_1a8[uStack_198 * 5 + 0x10] = uStack_1b0;
            }
            lRam000000010b6fde80 = lRam000000010b6fde80 + -1;
            if (cStack_209 == '\x01') {
              if (puRam000000010b6fde70 == (undefined8 *)0x0) {
                func_0x000108a07a20(&UNK_10b4ae7e8);
LAB_106031d44:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x106031d48);
                (*pcVar8)();
              }
              if (uRam000000010b6fde78 == 0) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69c2,0x21,&UNK_10b4ae848);
                goto LAB_106031d44;
              }
              puRam000000010b6fde70 = (undefined8 *)puRam000000010b6fde70[0x44];
              uRam000000010b6fde78 = uRam000000010b6fde78 - 1;
              *puRam000000010b6fde70 = 0;
              _free();
            }
            if (lVar17 != 0 && lVar23 != 0) {
              _free(lVar17);
            }
            break;
          }
LAB_106031b44:
          if (uVar22 == 0) break;
          puVar25 = (undefined8 *)puVar25[uVar29 + 0x44];
          uVar22 = uVar22 - 1;
        } while( true );
      }
      uRam000000010b6fde88 = 0;
      if ((((uVar11 & 1) == 0) && ((*(ulong *)(unaff_x20 + 0xec0) & 0x7fffffffffffffff) != 0)) &&
         (uVar14 = func_0x000108a82c0c(), (uVar14 & 1) == 0)) {
        cRam000000010b6fdeb8 = '\x01';
      }
      _pthread_mutex_unlock(lRam000000010b6fdeb0);
      return;
    }
    *(undefined4 *)puVar20 = 0x6e69616d;
    unaff_x20 = 4;
    uVar14 = ___error();
    puVar25 = puVar20;
  }
  else {
    puVar28 = (undefined *)plVar12[1];
    if (puVar28 == (undefined *)0x0) {
      if ((lRam000000010b66fea8 == 0) || (lRam000000010b66fea8 != *plVar12)) {
        uVar14 = ___error();
        puVar25 = (undefined8 *)0x0;
        goto joined_r0x000106031118;
      }
      puVar28 = &UNK_109bd66e6;
      unaff_x20 = 4;
LAB_106030f18:
      puVar25 = (undefined8 *)_malloc(unaff_x20);
      if (puVar25 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,unaff_x20);
        puVar25 = unaff_x19;
        goto LAB_1060318fc;
      }
    }
    else {
      unaff_x20 = plVar12[2] - 1;
      if (unaff_x20 != 0) goto LAB_106030f18;
      puVar25 = (undefined8 *)0x1;
    }
    _memcpy(puVar25,puVar28,unaff_x20);
LAB_106030f38:
    uVar14 = ___error();
  }
joined_r0x000106031118:
  if (lRam000000010b6fdeb0 == 0) {
    FUN_108a825d0(0x10b6fdeb0);
  }
  iVar10 = _pthread_mutex_lock();
  if (iVar10 == 0) {
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      bStack_f0 = 0;
    }
    else {
      bVar9 = func_0x000108a82c0c();
      bStack_f0 = bVar9 ^ 1;
    }
    unaff_x27 = (undefined8 *)0x10b6fde88;
    uStack_d8 = (ulong)(cRam000000010b6fdeb8 != '\0');
    uStack_d0 = 0x10b6fdeb0;
    bStack_c8 = bStack_f0;
    while (uRam000000010b6fde88 != 0) {
      if (uRam000000010b6fde88 == uVar14) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6024,0xab,&UNK_10b4adbe8);
        goto LAB_1060318ec;
      }
      _pause();
    }
    uVar22 = uRam000000010b6fde78;
    puVar20 = puRam000000010b6fde70;
    uRam000000010b6fde88 = uVar14;
    if (puRam000000010b6fde70 != (undefined8 *)0x0) {
      do {
        uVar5 = *(ushort *)((long)puVar20 + 0x21a);
        uVar29 = (ulong)uVar5;
        lVar23 = uVar29 << 3;
        plVar12 = puVar20 + 7;
        lVar4 = 1;
        do {
          lVar21 = lVar4;
          plVar19 = plVar12;
          uVar24 = uVar29;
          if (lVar23 == 0) goto LAB_106031034;
          uVar24 = (puVar20 + 7)[lVar21 + -7];
          cVar1 = uVar24 < uVar14;
          if (uVar14 < uVar24) {
            cVar1 = -1;
          }
          lVar23 = lVar23 + -8;
          plVar12 = plVar19 + 5;
          lVar4 = lVar21 + 1;
        } while (cVar1 == '\x01');
        if (cVar1 == '\0') {
          lVar23 = *plVar12;
          lVar4 = plVar19[6];
          *plVar12 = (long)puVar25;
          plVar19[6] = unaff_x20;
          plVar19[7] = (long)param_1;
          plVar19[8] = (long)param_2;
          plVar19[9] = lVar17;
          if (lVar23 != 0 && lVar4 != 0) {
            _free();
          }
          uRam000000010b6fde88 = 0;
          goto joined_r0x000106031074;
        }
        uVar24 = lVar21 - 1;
LAB_106031034:
        if (uVar22 == 0) goto LAB_10603112c;
        uVar22 = uVar22 - 1;
        puVar20 = (undefined8 *)puVar20[uVar24 + 0x44];
      } while( true );
    }
    puVar20 = (undefined8 *)_malloc(0x220);
    if (puVar20 != (undefined8 *)0x0) {
      uRam000000010b6fde78 = 0;
      puRam000000010b6fde70 = puVar20;
      *(undefined2 *)((long)puVar20 + 0x21a) = 1;
      *puVar20 = 0;
      puVar20[1] = uVar14;
      puVar20[0xc] = puVar25;
      puVar20[0xd] = unaff_x20;
      puVar20[0xe] = param_1;
      puVar20[0xf] = param_2;
      puVar20[0x10] = lVar17;
LAB_1060310b0:
      lRam000000010b6fde80 = lRam000000010b6fde80 + 1;
      *unaff_x27 = 0;
joined_r0x000106031074:
      if ((((bStack_f0 & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar14 = func_0x000108a82c0c(), (uVar14 & 1) == 0)) {
        cRam000000010b6fdeb8 = '\x01';
      }
      _pthread_mutex_unlock(lRam000000010b6fdeb0);
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
  }
  else {
    FUN_108a81ad4();
  }
LAB_1060318ec:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1060318f0);
  (*pcVar8)();
LAB_10603112c:
  if (uVar5 < 0xb) {
    puVar13 = puVar20 + uVar24 + 1;
    lVar23 = uVar29 - uVar24;
    if (uVar24 <= uVar29 && lVar23 != 0) {
      _memmove(puVar13 + 1,puVar13,lVar23 * 8);
      _memmove(puVar20 + uVar24 * 5 + 0x11,puVar20 + uVar24 * 5 + 0xc,lVar23 * 0x28);
    }
    *puVar13 = uVar14;
    puVar20[uVar24 * 5 + 0xc] = puVar25;
    puVar20[uVar24 * 5 + 0xd] = unaff_x20;
    puVar20[uVar24 * 5 + 0xe] = param_1;
    puVar20[uVar24 * 5 + 0xf] = param_2;
    puVar20[uVar24 * 5 + 0x10] = lVar17;
    *(ushort *)((long)puVar20 + 0x21a) = uVar5 + 1;
    goto LAB_1060310b0;
  }
  uVar22 = 0;
  if (uVar24 != 6) {
    uVar22 = uVar24 - 7;
  }
  uVar29 = 5;
  if (uVar24 != 6) {
    uVar29 = 6;
  }
  uVar3 = uVar24;
  uVar7 = uVar24;
  if (uVar24 != 5) {
    uVar3 = uVar29;
    uVar7 = uVar22;
  }
  uVar22 = uVar24;
  if (4 < uVar24) {
    uVar22 = uVar7;
  }
  uVar29 = 4;
  if (4 < uVar24) {
    uVar29 = uVar3;
  }
  puVar15 = (undefined8 *)_malloc(0x220);
  if (puVar15 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
  }
  else {
    *puVar15 = 0;
    uVar3 = (ulong)*(ushort *)((long)puVar20 + 0x21a) + ~uVar29;
    *(short *)((long)puVar15 + 0x21a) = (short)uVar3;
    puVar31 = puVar20 + uVar29 * 5 + 0xc;
    uVar27 = *puVar31;
    uVar30 = puVar31[1];
    if (uVar3 < 0xc) {
      uVar18 = puVar20[uVar29 + 1];
      _memcpy(puVar15 + 1,puVar20 + uVar29 + 2,uVar3 * 8);
      _memcpy(puVar15 + 0xc,puVar20 + (uVar29 + 1) * 5 + 0xc,uVar3 * 0x28);
      *(short *)((long)puVar20 + 0x21a) = (short)uVar29;
      uStack_78 = puVar31[3];
      lStack_80 = puVar31[2];
      uStack_70 = puVar31[4];
      puVar31 = puVar15;
      if (uVar24 < 6) {
        puVar31 = puVar20;
      }
      uVar5 = *(ushort *)((long)puVar31 + 0x21a);
      puVar13 = puVar31 + uVar22 + 1;
      lVar23 = uVar5 - uVar22;
      if (uVar22 <= uVar5 && lVar23 != 0) {
        _memmove(puVar13 + 1,puVar13,lVar23 * 8);
        _memmove(puVar31 + uVar22 * 5 + 0x11,puVar31 + uVar22 * 5 + 0xc,lVar23 * 0x28);
      }
      *puVar13 = uVar14;
      puVar31[uVar22 * 5 + 0xc] = puVar25;
      puVar31[uVar22 * 5 + 0xd] = unaff_x20;
      puVar31[uVar22 * 5 + 0xe] = param_1;
      puVar31[uVar22 * 5 + 0xf] = param_2;
      puVar31[uVar22 * 5 + 0x10] = lVar17;
      *(ushort *)((long)puVar31 + 0x21a) = uVar5 + 1;
      uStack_b8 = uStack_78;
      lStack_c0 = lStack_80;
      uStack_b0 = uStack_70;
      if ((undefined8 *)*puVar20 == (undefined8 *)0x0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        puVar31 = (undefined8 *)*puVar20;
        puVar25 = puVar15;
        uVar16 = uVar18;
        unaff_x28 = uVar30;
        uStack_110 = uVar27;
        do {
          param_2 = puVar31;
          uVar5 = *(ushort *)(puVar20 + 0x43);
          unaff_x20 = (ulong)uVar5;
          uVar6 = *(ushort *)((long)param_2 + 0x21a);
          uVar14 = (ulong)uVar6;
          if (uVar6 < 0xb) {
            uVar11 = uVar6 + 1;
            uVar26 = (undefined2)uVar11;
            param_1 = (undefined8 *)(ulong)uVar11;
            unaff_x23 = unaff_x20 + 1;
            unaff_x19 = param_2 + unaff_x20 + 1;
            if (uVar6 <= uVar5) goto LAB_106031728;
            _memmove(param_2 + unaff_x20 + 2,unaff_x19,(uVar14 - unaff_x20) * 8);
            uStack_78 = uStack_b8;
            lStack_80 = lStack_c0;
            uStack_70 = uStack_b0;
            _memmove(param_2 + unaff_x23 * 5 + 0xc,param_2 + unaff_x20 * 5 + 0xc,
                     (uVar14 - unaff_x20) * 0x28);
            goto LAB_106031738;
          }
          uVar22 = uVar22 + 1;
          uVar29 = 5;
          if (uVar5 != 6) {
            uVar29 = 6;
          }
          uVar24 = 0;
          if (uVar5 != 6) {
            uVar24 = unaff_x20 - 7;
          }
          uVar3 = unaff_x20;
          uVar7 = unaff_x20;
          if (uVar5 != 5) {
            uVar3 = uVar24;
            uVar7 = uVar29;
          }
          uVar29 = 4;
          if (4 < uVar5) {
            unaff_x20 = uVar3;
            uVar29 = uVar7;
          }
          puVar15 = (undefined8 *)_malloc(0x280);
          if (puVar15 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x280);
            goto LAB_1060318ec;
          }
          *puVar15 = 0;
          uVar24 = (ulong)*(ushort *)((long)param_2 + 0x21a) + ~uVar29;
          *(short *)((long)puVar15 + 0x21a) = (short)uVar24;
          puVar20 = param_2 + uVar29 * 5 + 0xc;
          uVar27 = *puVar20;
          uVar30 = puVar20[1];
          if (0xb < uVar24) {
            func_0x000108a07904(0,uVar24,0xb,&UNK_10b4ae878);
            goto LAB_1060318ec;
          }
          uVar18 = param_2[uVar29 + 1];
          _memcpy(puVar15 + 1,param_2 + uVar29 + 2,uVar24 * 8);
          _memcpy(puVar15 + 0xc,param_2 + (uVar29 + 1) * 5 + 0xc,uVar24 * 0x28);
          *(short *)((long)param_2 + 0x21a) = (short)uVar29;
          uStack_78 = puVar20[3];
          lStack_80 = puVar20[2];
          uStack_70 = puVar20[4];
          uVar24 = (ulong)*(ushort *)((long)puVar15 + 0x21a);
          lVar17 = uVar24 + 1;
          if (0xb < uVar24) {
            func_0x000108a07904(0,lVar17,0xc,&UNK_10b4ae890);
            goto LAB_1060318ec;
          }
          if (uVar14 - uVar29 != lVar17) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
            goto LAB_1060318ec;
          }
          _memcpy(puVar15 + 0x44,param_2 + uVar29 + 0x45,lVar17 * 8);
          uVar14 = 0;
          do {
            puVar20 = (undefined8 *)(puVar15 + 0x44)[uVar14];
            *puVar20 = puVar15;
            *(short *)(puVar20 + 0x43) = (short)uVar14;
            if (uVar24 <= uVar14) break;
            uVar14 = uVar14 + 1;
          } while (uVar14 <= uVar24);
          uStack_98 = uStack_78;
          lStack_a0 = lStack_80;
          uStack_90 = uStack_70;
          puVar20 = puVar15;
          if (uVar5 < 6) {
            puVar20 = param_2;
          }
          uVar5 = *(ushort *)((long)puVar20 + 0x21a);
          uVar14 = (ulong)uVar5;
          lVar17 = uVar14 - unaff_x20;
          iVar10 = (int)unaff_x20;
          if (uVar14 < unaff_x20 || lVar17 == 0) {
            puVar20[(long)iVar10 * 5 + 0xc] = uStack_110;
            puVar20[(long)iVar10 * 5 + 0xd] = unaff_x28;
            puVar20[(long)iVar10 * 5 + 0xf] = uStack_b8;
            puVar20[(long)iVar10 * 5 + 0xe] = lStack_c0;
            puVar20[(long)iVar10 * 5 + 0x10] = uStack_b0;
          }
          else {
            _memmove(puVar20 + unaff_x20 + 2,puVar20 + unaff_x20 + 1);
            puVar31 = puVar20 + (long)iVar10 * 5 + 0xc;
            _memmove(puVar20 + (long)(int)(unaff_x20 + 1) * 5 + 0xc,puVar31,lVar17 * 0x28);
            *puVar31 = uStack_110;
            puVar31[1] = unaff_x28;
            puVar31[3] = uStack_b8;
            puVar31[2] = lStack_c0;
            puVar31[4] = uStack_b0;
            _memmove(puVar20 + unaff_x20 + 0x46,puVar20 + unaff_x20 + 0x45,lVar17 * 8);
          }
          puVar20[unaff_x20 + 1] = uVar16;
          puVar20[unaff_x20 + 0x45] = puVar25;
          *(ushort *)((long)puVar20 + 0x21a) = uVar5 + 1;
          if (unaff_x20 + 1 < uVar14 + 2) {
            lVar17 = unaff_x20 + 0x45;
            do {
              puVar25 = (undefined8 *)puVar20[lVar17];
              *puVar25 = puVar20;
              *(short *)(puVar25 + 0x43) = (short)lVar17 + -0x44;
              lVar17 = lVar17 + 1;
            } while (lVar17 - uVar14 != 0x46);
          }
          uStack_b8 = uStack_98;
          lStack_c0 = lStack_a0;
          uStack_b0 = uStack_90;
          puVar31 = (undefined8 *)*param_2;
          puVar25 = puVar15;
          uVar16 = uVar18;
          puVar20 = param_2;
          unaff_x28 = uVar30;
          uStack_110 = uVar27;
        } while ((undefined8 *)*param_2 != (undefined8 *)0x0);
      }
      uVar14 = uRam000000010b6fde78;
      puVar25 = puRam000000010b6fde70;
      if (puRam000000010b6fde70 == (undefined8 *)0x0) {
        func_0x000108a07a20(&UNK_10b4ae7d0);
      }
      else {
        puVar20 = (undefined8 *)_malloc(0x280);
        if (puVar20 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x280);
        }
        else {
          *puVar20 = 0;
          *(undefined2 *)((long)puVar20 + 0x21a) = 0;
          puVar20[0x44] = puVar25;
          if (uVar14 < 0xffffffffffffffff) {
            *puVar25 = puVar20;
            *(undefined2 *)(puVar25 + 0x43) = 0;
            puRam000000010b6fde70 = puVar20;
            uRam000000010b6fde78 = uVar14 + 1;
            if (uVar22 == uVar14) {
              *(undefined2 *)((long)puVar20 + 0x21a) = 1;
              puVar20[1] = uVar18;
              puVar20[0xc] = uVar27;
              puVar20[0xd] = uVar30;
              puVar20[0xf] = uStack_b8;
              puVar20[0xe] = lStack_c0;
              puVar20[0x10] = uStack_b0;
              puVar20[0x45] = puVar15;
              *puVar15 = puVar20;
              *(undefined2 *)(puVar15 + 0x43) = 1;
              goto LAB_1060310b0;
            }
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6955,0x30,&UNK_10b4ae800);
          }
          else {
            func_0x000108a07a20(&UNK_10b4ae818);
          }
        }
      }
    }
    else {
      func_0x000108a07904(0,uVar3,0xb,&UNK_10b4ae878);
    }
  }
  goto LAB_1060318ec;
}

