
void FUN_1011c3c58(ulong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  long lVar18;
  undefined1 auVar19 [16];
  ulong *puStack_e68;
  undefined1 auStack_e60 [488];
  undefined1 auStack_c78 [496];
  undefined1 auStack_a88 [496];
  undefined1 auStack_898 [496];
  undefined1 auStack_6a8 [504];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong *puStack_490;
  long lStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined1 *puStack_460;
  undefined8 uStack_458;
  ulong *puStack_448;
  ulong uStack_440;
  byte bStack_438;
  undefined1 auStack_437 [488];
  undefined1 auStack_24f [495];
  
  puStack_448 = param_1;
LAB_1011c3c90:
  lVar18 = -0x8000000000000000;
  lVar17 = *(long *)*param_2;
  if (*(long *)(lVar17 + 0x80) == 0) {
    puVar9 = (ulong *)(lVar17 + 0x278);
    uVar15 = *puVar9;
    if (uVar15 == 2) {
      *puVar9 = 1;
    }
    else {
      do {
        if (((uint)uVar15 >> 1 & 1) == 0) {
          if (((uint)uVar15 >> 2 & 1) == 0) goto LAB_1011c3fd4;
          goto LAB_1011c4014;
        }
        uVar5 = uVar15;
        if ((uVar15 & 1) != 0) {
          _sched_yield();
          uVar5 = uVar15 & 0xfffffffffffffffe;
        }
        uVar15 = *(ulong *)(lVar17 + 0x278);
      } while (uVar15 != uVar5);
      *(ulong *)(lVar17 + 0x278) = uVar5 & 0xfffffffffffffffc | 1;
    }
    uVar15 = *(ulong *)(lVar17 + 0x88);
    bVar14 = *(byte *)(lVar17 + 0x90);
    _memcpy(auStack_24f,lVar17 + 0x91,0x1e7);
    *puVar9 = *puVar9 & 0xfffffffffffffffe;
    LORelease();
    goto LAB_1011c3fc8;
  }
  if (*(long *)(lVar17 + 0x80) != 1) {
    while( true ) {
      puVar9 = *(ulong **)(lVar17 + 0x108);
      unaff_x24 = (ulong *)(*(ulong *)(lVar17 + 0x100) >> 1 & 0x1f);
      uVar15 = *(ulong *)(lVar17 + 0x100);
      if (unaff_x24 != (ulong *)0x1f) break;
LAB_1011c3cd4:
      _sched_yield();
    }
LAB_1011c3cf4:
    uVar5 = uVar15 + 2;
    if ((uVar15 & 1) == 0) {
      DataMemoryBarrier(2,3);
      uVar7 = *(ulong *)(lVar17 + 0x180);
      if (uVar15 >> 1 == uVar7 >> 1) {
        uVar7 = uVar7 & 1;
        goto joined_r0x0001011c3f48;
      }
      if (0x3f < (uVar7 ^ uVar15)) {
        uVar5 = uVar15 + 3;
      }
    }
    if (puVar9 != (ulong *)0x0) {
      uVar7 = *(ulong *)(lVar17 + 0x100);
      if (uVar7 != uVar15) goto code_r0x0001011c3d34;
      *(ulong *)(lVar17 + 0x100) = uVar5;
      if (unaff_x24 == (ulong *)0x1e) {
        plVar3 = (long *)*puVar9;
        while (plVar3 == (long *)0x0) {
          _sched_yield();
          plVar3 = (long *)*puVar9;
        }
        uVar5 = uVar5 & 0xfffffffffffffffe;
        if (*plVar3 != 0) {
          uVar5 = uVar5 + 1;
        }
        *(long **)(lVar17 + 0x108) = plVar3;
        *(ulong *)(lVar17 + 0x100) = uVar5 + 2;
      }
      uVar15 = puVar9[(long)unaff_x24 * 0x3f + 0x3f];
      while ((uVar15 & 1) == 0) {
        _sched_yield();
        uVar15 = puVar9[(long)unaff_x24 * 0x3f + 0x3f];
      }
      uVar15 = puVar9[(long)unaff_x24 * 0x3f + 1];
      bVar14 = (byte)puVar9[(long)unaff_x24 * 0x3f + 2];
      _memcpy(auStack_24f,(long)puVar9 + (long)unaff_x24 * 0x1f8 + 0x11,0x1e7);
      if (unaff_x24 == (ulong *)0x1e) {
        lVar18 = 0x1e;
        puVar10 = puVar9;
        do {
          puVar10 = puVar10 + 0x3f;
          if (((uint)*puVar10 >> 1 & 1) == 0) {
            LOAcquire();
            uVar5 = *puVar10;
            *puVar10 = uVar5 | 4;
            LORelease();
            if (((uint)uVar5 >> 1 & 1) == 0) goto LAB_1011c3fc8;
          }
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
LAB_1011c3fc0:
        _free(puVar9);
      }
      else {
        LOAcquire();
        uVar5 = puVar9[(long)unaff_x24 * 0x3f + 0x3f];
        puVar9[(long)unaff_x24 * 0x3f + 0x3f] = uVar5 | 2;
        LORelease();
        if (((uint)uVar5 >> 2 & 1) != 0) {
          if (unaff_x24 < (ulong *)0x1d) {
            puVar10 = puVar9 + (long)unaff_x24 * 0x3f + 0x7e;
            lVar18 = (long)unaff_x24 + -0x1d;
            do {
              if (((uint)*puVar10 >> 1 & 1) == 0) {
                LOAcquire();
                uVar5 = *puVar10;
                *puVar10 = uVar5 | 4;
                LORelease();
                if (((uint)uVar5 >> 1 & 1) == 0) goto LAB_1011c3fc8;
              }
              puVar10 = puVar10 + 0x3f;
              bVar2 = lVar18 != -1;
              lVar18 = lVar18 + 1;
            } while (bVar2);
          }
          goto LAB_1011c3fc0;
        }
      }
      goto LAB_1011c3fc8;
    }
    goto LAB_1011c3cd4;
  }
  uVar15 = *(ulong *)(lVar17 + 0x100);
  uVar5 = *(long *)(lVar17 + 0x208) - 1U & uVar15;
  uVar7 = *(ulong *)(lVar17 + 0x218);
  if (uVar5 < uVar7) {
    uVar12 = uVar15 & -*(long *)(lVar17 + 0x200);
    uVar11 = uVar15;
    do {
      puVar9 = (ulong *)(*(long *)(lVar17 + 0x210) + uVar5 * 0x1f8);
      uVar7 = puVar9[0x3e];
      if (uVar11 + 1 != uVar7) {
        if (uVar7 != uVar11) {
          _sched_yield();
LAB_1011c3dec:
          uVar15 = *(ulong *)(lVar17 + 0x100);
          goto LAB_1011c3d64;
        }
        DataMemoryBarrier(2,3);
        if ((*(ulong *)(lVar17 + 0x180) & (*(ulong *)(lVar17 + 0x208) ^ 0xffffffffffffffff)) !=
            uVar11) goto LAB_1011c3dec;
        uVar7 = *(ulong *)(lVar17 + 0x208) & *(ulong *)(lVar17 + 0x180);
joined_r0x0001011c3f48:
        if (uVar7 != 0) goto LAB_1011c4014;
        goto LAB_1011c3fd4;
      }
      if (*(ulong *)(lVar17 + 0x218) <= uVar5 + 1) {
        uVar7 = *(long *)(lVar17 + 0x200) + uVar12;
      }
      uVar15 = *(ulong *)(lVar17 + 0x100);
      if (uVar15 == uVar11) goto code_r0x0001011c3d58;
LAB_1011c3d64:
      uVar5 = *(long *)(lVar17 + 0x208) - 1U & uVar15;
      uVar12 = uVar15 & -*(long *)(lVar17 + 0x200);
      uVar7 = *(ulong *)(lVar17 + 0x218);
      uVar11 = uVar15;
      if (uVar7 <= uVar5) break;
    } while( true );
  }
  puVar8 = &UNK_10b229c10;
  func_0x000108a07bdc(uVar5,uVar7,&UNK_10b229c10);
  param_2[1] = uVar15;
  uVar6 = __Unwind_Resume();
  FUN_100df5e04(&uStack_440);
  __Unwind_Resume(uVar6);
  auVar19 = func_0x000108a07bc4();
  plVar3 = auVar19._8_8_;
  uStack_4b0 = 0x8000000000000000;
  uStack_4a8 = 0x1f8;
  uStack_4a0 = 1;
  uStack_458 = 0x1011c40bc;
  puVar9 = (ulong *)*plVar3;
  uStack_498 = unaff_x25;
  puStack_490 = unaff_x24;
  lStack_488 = lVar17;
  uStack_480 = uVar15;
  uStack_478 = param_3;
  puStack_470 = param_2;
  uStack_468 = uVar6;
  puStack_460 = &stack0xfffffffffffffff0;
  _memcpy(auStack_6a8,plVar3 + 1,0x1e8);
  *plVar3 = -0x8000000000000000;
  if (puVar9 == (ulong *)0x8000000000000000) goto LAB_1011c4510;
  goto LAB_1011c4114;
code_r0x0001011c3d34:
  puVar9 = *(ulong **)(lVar17 + 0x108);
  unaff_x24 = (ulong *)(uVar7 >> 1 & 0x1f);
  uVar15 = uVar7;
  if (unaff_x24 == (ulong *)0x1f) goto LAB_1011c3cd4;
  goto LAB_1011c3cf4;
code_r0x0001011c3d58:
  *(ulong *)(lVar17 + 0x100) = uVar7;
  unaff_x24 = puVar9 + 0x3e;
  uVar15 = *puVar9;
  bVar14 = (byte)puVar9[1];
  _memcpy(auStack_24f,(long)puVar9 + 9,0x1e7);
  *unaff_x24 = *(long *)(lVar17 + 0x200) + uVar11;
LAB_1011c3fc8:
  if (uVar15 != 0x8000000000000000) {
    uStack_440 = uVar15;
    bStack_438 = bVar14;
    _memcpy(auStack_437,auStack_24f,0x1e7);
    FUN_108834028(lVar17 + 0x280,1);
    puVar9 = puStack_448;
    _memcpy((long)puStack_448 + 9,auStack_24f,0x1e7);
    *puVar9 = uVar15;
    *(byte *)(puVar9 + 1) = bVar14;
    return;
  }
  unaff_x25 = 0x8000000000000000;
  if ((bVar14 & 1) != 0) {
LAB_1011c4014:
    uVar15 = 0x8000000000000000;
    goto LAB_1011c4020;
  }
LAB_1011c3fd4:
  if (param_2[1] == 0) {
    uVar6 = FUN_108833c8c(*(long *)*param_2 + 0x288);
    FUN_100ded75c(param_2[1]);
    param_2[1] = uVar6;
  }
  else {
    uVar15 = FUN_1014a8880(param_2 + 1,param_3);
    if ((uVar15 & 1) != 0) {
      uVar15 = 0x8000000000000001;
LAB_1011c4020:
      *puStack_448 = uVar15;
      return;
    }
  }
  goto LAB_1011c3c90;
  while( true ) {
    _memcpy(auStack_c78,auStack_a88,0x1f0);
    if (*plVar3 != -0x8000000000000000) {
      if (*plVar3 != 0) {
        _free(plVar3[1]);
      }
      func_0x000100dfc74c(plVar3 + 3);
    }
    _memcpy(plVar3,auStack_c78,0x1f0);
    if (plVar3[0x3f] == 0) {
      lVar17 = FUN_108833c8c(*(long *)plVar3[0x3e] + 0x280);
      FUN_100ded75c(plVar3[0x3f]);
      plVar3[0x3f] = lVar17;
    }
    else {
      uVar15 = FUN_1014a8880(plVar3 + 0x3f,puVar8);
      if ((uVar15 & 1) != 0) {
        uVar6 = 0x8000000000000001;
        goto LAB_1011c44e8;
      }
    }
    puVar9 = (ulong *)*plVar3;
    _memcpy(auStack_6a8,plVar3 + 1,0x1e8);
    *plVar3 = -0x8000000000000000;
    if (puVar9 == (ulong *)0x8000000000000000) break;
LAB_1011c4114:
    puStack_e68 = puVar9;
    _memcpy(auStack_e60,auStack_6a8,0x1e8);
    lVar18 = *(long *)plVar3[0x3e];
    if (*(long *)(lVar18 + 0x80) == 0) {
      puVar9 = (ulong *)(lVar18 + 0x278);
      uVar15 = *puVar9;
      if (uVar15 == 0) {
        *puVar9 = 3;
        goto LAB_1011c451c;
      }
      _memcpy(auStack_a88,&puStack_e68,0x1f0);
      if (((uint)uVar15 >> 2 & 1) != 0) goto LAB_1011c44c0;
    }
    else {
      if (*(long *)(lVar18 + 0x80) == 1) {
        uVar7 = *(ulong *)(lVar18 + 0x208);
        uVar15 = uVar7 & *(ulong *)(lVar18 + 0x180);
        uVar5 = *(ulong *)(lVar18 + 0x180);
        while (uVar15 == 0) {
          while( true ) {
            uVar15 = uVar7 - 1 & uVar5;
            uVar7 = *(ulong *)(lVar18 + 0x218);
            if (uVar15 + 1 < uVar7) {
              uVar11 = uVar5 + 1;
            }
            else {
              uVar11 = (uVar5 & -*(long *)(lVar18 + 0x200)) + *(long *)(lVar18 + 0x200);
            }
            if (uVar7 <= uVar15) {
              func_0x000108a07bdc(uVar15,uVar7,&UNK_10b229bf8);
              goto LAB_1011c45d0;
            }
            lVar17 = *(long *)(lVar18 + 0x210) + uVar15 * 0x1f8;
            if (uVar5 == *(ulong *)(lVar17 + 0x1f0)) break;
            if (*(long *)(lVar18 + 0x200) + *(ulong *)(lVar17 + 0x1f0) == uVar5 + 1) {
              DataMemoryBarrier(2,3);
              _memcpy(auStack_6a8,&puStack_e68,0x1f0);
              lVar17 = *(long *)(lVar18 + 0x100);
              lVar13 = *(long *)(lVar18 + 0x200);
              _memcpy(auStack_898,auStack_6a8,0x1f0);
              if (lVar13 + lVar17 == uVar5) {
                _memcpy(auStack_a88,auStack_898,0x1f0);
                uVar15 = 0;
                goto LAB_1011c43a8;
              }
              _memcpy(&puStack_e68,auStack_898,0x1f0);
              uVar5 = *(ulong *)(lVar18 + 0x180);
              uVar7 = *(ulong *)(lVar18 + 0x208);
              uVar15 = uVar7 & uVar5;
            }
            else {
              _sched_yield();
              uVar5 = *(ulong *)(lVar18 + 0x180);
              uVar7 = *(ulong *)(lVar18 + 0x208);
              uVar15 = uVar7 & uVar5;
            }
            if (uVar15 != 0) goto LAB_1011c4150;
          }
          uVar12 = *(ulong *)(lVar18 + 0x180);
          if (uVar12 == uVar5) {
            *(ulong *)(lVar18 + 0x180) = uVar11;
            _memcpy(lVar17,&puStack_e68,0x1f0);
            *(ulong *)(lVar17 + 0x1f0) = uVar5 + 1;
            uVar15 = 2;
            goto LAB_1011c43a8;
          }
          uVar7 = *(ulong *)(lVar18 + 0x208);
          uVar5 = uVar12;
          uVar15 = uVar7 & uVar12;
        }
LAB_1011c4150:
        _memcpy(auStack_a88,&puStack_e68,0x1f0);
        uVar15 = 1;
      }
      else {
        plVar4 = *(long **)(lVar18 + 0x188);
        plVar16 = (long *)0x0;
        uVar15 = *(ulong *)(lVar18 + 0x180);
        while ((uVar15 & 1) == 0) {
          uVar5 = uVar15 >> 1 & 0x1f;
          if (uVar5 == 0x1f) {
            _sched_yield();
            uVar7 = *(ulong *)(lVar18 + 0x180);
          }
          else {
            if (((uVar5 == 0x1e) && (plVar16 == (long *)0x0)) &&
               (plVar16 = (long *)_calloc(0x3d10,1), plVar16 == (long *)0x0)) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x3d10);
              goto LAB_1011c45d0;
            }
            if (plVar4 == (long *)0x0) {
              plVar4 = (long *)_calloc(0x3d10,1);
              if (plVar4 == (long *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x3d10);
                goto LAB_1011c45d0;
              }
              if (*(long *)(lVar18 + 0x188) == 0) {
                *(long *)(lVar18 + 0x188) = (long)plVar4;
                *(long **)(lVar18 + 0x108) = plVar4;
                uVar7 = *(ulong *)(lVar18 + 0x180);
                if (uVar7 == uVar15) {
                  *(ulong *)(lVar18 + 0x180) = uVar15 + 2;
                  goto LAB_1011c4468;
                }
              }
              else {
                if (plVar16 != (long *)0x0) {
                  _free(plVar16);
                }
                uVar7 = *(ulong *)(lVar18 + 0x180);
                plVar16 = plVar4;
              }
            }
            else {
              uVar7 = *(ulong *)(lVar18 + 0x180);
              if (uVar7 == uVar15) {
                *(ulong *)(lVar18 + 0x180) = uVar15 + 2;
LAB_1011c4468:
                if (uVar5 != 0x1e) {
                  _memmove(plVar4 + uVar5 * 0x3f + 1,&puStack_e68,0x1f0);
                  plVar4[uVar5 * 0x3f + 0x3f] = plVar4[uVar5 * 0x3f + 0x3f] | 1;
                  LORelease();
                  uVar15 = 2;
                  goto joined_r0x0001011c4494;
                }
                if (plVar16 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b229c28);
LAB_1011c45d0:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c45d4);
                  (*pcVar1)();
                }
                *(long **)(lVar18 + 0x188) = plVar16;
                *(long *)(lVar18 + 0x180) = *(long *)(lVar18 + 0x180) + 2;
                LORelease();
                *plVar4 = (long)plVar16;
                _memcpy(plVar4 + 0x763,&puStack_e68,0x1f0);
                plVar4[0x7a1] = plVar4[0x7a1] | 1;
                LORelease();
                goto LAB_1011c4534;
              }
            }
          }
          plVar4 = *(long **)(lVar18 + 0x188);
          uVar15 = uVar7;
        }
        _memcpy(auStack_a88,&puStack_e68,0x1f0);
        uVar15 = 1;
joined_r0x0001011c4494:
        if (plVar16 != (long *)0x0) {
          _free(plVar16);
        }
      }
LAB_1011c43a8:
      if (uVar15 == 2) goto LAB_1011c4534;
      if ((uVar15 & 1) != 0) {
LAB_1011c44c0:
        _memcpy(auStack_c78,auStack_a88,0x1f0);
        _memcpy(auVar19._0_8_,auStack_c78,0x1f0);
        return;
      }
    }
  }
  puVar9 = (ulong *)0x8000000000000000;
LAB_1011c4510:
  func_0x000108a07a20(&UNK_10b24f3f0);
LAB_1011c451c:
  _memcpy(lVar18 + 0x88,&puStack_e68,0x1f0);
  *puVar9 = *puVar9 & 0xfffffffffffffffe;
  LORelease();
LAB_1011c4534:
  FUN_108834028(lVar18 + 0x288,1);
  FUN_108833f44(lVar18 + 0x290);
  uVar6 = 0x8000000000000000;
LAB_1011c44e8:
  *auVar19._0_8_ = uVar6;
  return;
}

