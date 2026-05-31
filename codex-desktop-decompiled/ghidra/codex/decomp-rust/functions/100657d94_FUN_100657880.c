
void FUN_100657880(long *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long **pplVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  ulong auStack_2c8 [3];
  long lStack_278;
  undefined1 *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined2 uStack_258;
  long **pplStack_250;
  undefined2 uStack_248;
  long **pplStack_240;
  undefined8 uStack_238;
  long **pplStack_230;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined2 uStack_1a8;
  long **pplStack_1a0;
  undefined2 uStack_198;
  long **pplStack_190;
  undefined8 uStack_188;
  long **pplStack_180;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined2 auStack_c0 [4];
  undefined1 **ppuStack_b8;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  long *plStack_50;
  undefined2 uStack_48;
  long **pplStack_40;
  undefined8 auStack_38 [3];
  
  puVar6 = (undefined1 *)_malloc(0x80);
  if (puVar6 != (undefined1 *)0x0) {
    lStack_68 = 0x80;
    plStack_50 = &lStack_68;
    *puVar6 = 0x7b;
    lStack_58 = 1;
    uStack_48 = 0x100;
    pplStack_40 = &plStack_50;
    puStack_60 = puVar6;
    lVar7 = FUN_1014d241c(&uStack_48,&UNK_108cbb521,3,*(undefined4 *)(param_2 + 0x18));
    if (lVar7 == 0) {
      if ((char)uStack_48 != '\x01') {
        FUN_100634920(&uStack_48,&UNK_108cdd040,0x10,*(undefined8 *)(param_2 + 8),
                      *(undefined8 *)(param_2 + 0x10));
        if (((uStack_48 & 1) == 0) && (uStack_48._1_1_ != '\0')) {
          plVar14 = *pplStack_40;
          lVar7 = plVar14[2];
          if (*plVar14 == lVar7) {
            thunk_FUN_108855060(plVar14,lVar7,1,1,1);
            lVar7 = plVar14[2];
          }
          *(undefined1 *)(plVar14[1] + lVar7) = 0x7d;
          plVar14[2] = lVar7 + 1;
        }
        param_1[1] = (long)puStack_60;
        *param_1 = lStack_68;
        param_1[2] = lStack_58;
        return;
      }
      auStack_38[0] = 10;
      lVar7 = FUN_107c05dbc(auStack_38,0,0);
    }
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar7;
    if (lStack_68 != 0) {
      _free(puStack_60);
    }
    return;
  }
  uVar8 = FUN_107c03c64(1,0x80);
  if (lStack_68 != 0) {
    _free(puStack_60);
  }
  auVar19 = __Unwind_Resume(uVar8);
  puVar10 = auVar19._8_8_;
  plVar14 = auVar19._0_8_;
  uStack_78 = 0x1006579e8;
  puStack_80 = &stack0xfffffffffffffff0;
  puVar6 = (undefined1 *)_malloc(0x80);
  if (puVar6 != (undefined1 *)0x0) {
    lStack_e0 = 0x80;
    lVar7 = puVar10[4];
    *puVar6 = 0x7b;
    lStack_d0 = 1;
    auStack_c0[0] = 0x100;
    ppuStack_b8 = &puStack_c8;
    bVar12 = *(byte *)((long)puVar10 + 0x29);
    puStack_d8 = puVar6;
    puStack_c8 = (undefined1 *)&lStack_e0;
    FUN_1013fe3ec(auStack_c0,&UNK_108c60ff4,4);
    ppuVar4 = ppuStack_b8;
    if ((char)auStack_c0[0] == '\x01') {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100657c3c);
      (*pcVar5)();
    }
    plVar16 = (long *)*ppuStack_b8;
    lVar11 = plVar16[2];
    if (*plVar16 == lVar11) {
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
      lVar11 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar11) = 0x3a;
    plVar16[2] = lVar11 + 1;
    plVar16 = (long *)*ppuVar4;
    if ((bVar12 & 1) == 0) {
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      FUN_100657654(plVar16,&UNK_108cc6b23,10);
      lVar11 = plVar16[2];
      if (*plVar16 != lVar11) goto LAB_100657b48;
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
    }
    else {
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      FUN_100657654(plVar16,&UNK_108cc6b2d,6);
      lVar11 = plVar16[2];
      if (*plVar16 != lVar11) goto LAB_100657b48;
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
    }
    lVar11 = plVar16[2];
LAB_100657b48:
    *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
    plVar16[2] = lVar11 + 1;
    lVar11 = FUN_1014c8f34(auStack_c0,*(undefined1 *)(puVar10 + 5));
    if ((((lVar11 == 0) &&
         (lVar11 = FUN_1014d5af8(auStack_c0,&UNK_108cc1ef1,10,puVar10[2],puVar10[3]), lVar11 == 0))
        && (lVar11 = FUN_1014adce4(auStack_c0,&UNK_108cc057b,0xd,*puVar10,puVar10[1]), lVar11 == 0))
       && ((lVar11 = FUN_1014b169c(auStack_c0,&UNK_108c98520,8,*(undefined1 *)((long)puVar10 + 0x2a)
                                  ), lVar11 == 0 &&
           ((lVar7 == 0 || (lVar11 = FUN_1014c6c78(auStack_c0,lVar7), lVar11 == 0)))))) {
      FUN_1014dfa8c(auStack_c0);
      plVar14[1] = (long)puStack_d8;
      *plVar14 = lStack_e0;
      plVar14[2] = lStack_d0;
    }
    else {
      *plVar14 = -0x8000000000000000;
      plVar14[1] = lVar11;
      if (lStack_e0 != 0) {
        _free(puStack_d8);
      }
    }
    return;
  }
  plVar16 = (long *)FUN_107c03c64(1,0x80);
  if (lStack_e0 != 0) {
    _free(puStack_d8);
    plVar14 = plVar16;
  }
  auVar19 = __Unwind_Resume(plVar16);
  plVar16 = auVar19._0_8_;
  uStack_e8 = 0x100657cd8;
  lStack_100 = param_2;
  plStack_f8 = plVar14;
  ppuStack_f0 = &puStack_80;
  lVar7 = _malloc(0x80);
  if (lVar7 != 0) {
    lStack_120 = 0x80;
    lStack_110 = 0;
    lStack_118 = lVar7;
    puStack_108 = (undefined1 *)&lStack_120;
    lVar7 = func_0x000100b8fbbc(auVar19._8_8_,&puStack_108);
    if (lVar7 == 0) {
      lVar7 = lStack_118;
      if (lStack_120 != -0x8000000000000000) {
        *plVar16 = lStack_120;
        plVar16[1] = lStack_118;
        plVar16[2] = lStack_110;
        return;
      }
    }
    else if (lStack_120 != 0) {
      _free(lStack_118);
    }
    *plVar16 = -0x8000000000000000;
    plVar16[1] = lVar7;
    return;
  }
  uVar8 = FUN_107c03c64(1,0x80);
  if (lStack_120 != 0) {
    _free(lStack_118);
  }
  auVar19 = __Unwind_Resume(uVar8);
  lVar7 = auVar19._8_8_;
  plVar14 = auVar19._0_8_;
  puVar6 = (undefined1 *)_malloc(0x80);
  if (puVar6 == (undefined1 *)0x0) {
    uVar8 = FUN_107c03c64(1,0x80);
    if (lStack_1c8 != 0) {
      _free(puStack_1c0);
    }
    auVar19 = __Unwind_Resume(uVar8);
    plVar16 = auVar19._8_8_;
    plVar14 = auVar19._0_8_;
    puVar6 = (undefined1 *)_malloc(0x80);
    if (puVar6 == (undefined1 *)0x0) {
      uVar8 = FUN_107c03c64(1,0x80);
      if (lStack_278 != 0) {
        _free(puStack_270);
      }
      auVar19 = __Unwind_Resume(uVar8);
      plVar14 = auVar19._8_8_;
      puVar6 = auVar19._0_8_;
      lVar7 = plVar14[7];
      *(undefined1 *)(plVar14 + 7) = 0;
      cVar2 = *(char *)((long)plVar14 + 0x39);
      if ((char)lVar7 == '\x01') {
LAB_1006594d0:
        if (*plVar14 != -0x8000000000000000) {
          lVar7 = plVar14[2];
          if (lVar7 == *plVar14) {
            FUN_107c03c6c(plVar14);
          }
          *(char *)(plVar14[1] + lVar7) = cVar2;
          plVar14[2] = lVar7 + 1;
        }
        puVar6[1] = cVar2;
        *puVar6 = 0;
      }
      else {
        auStack_2c8[0] = auStack_2c8[0] & 0xffffffffffffff00;
        lVar7 = plVar14[6];
        do {
          lVar11 = _read((int)lVar7,auStack_2c8,1);
          if (lVar11 != -1) {
            if (lVar11 == 0) {
              auStack_2c8[0] = 4;
              uVar8 = FUN_107c05dbc(auStack_2c8,plVar14[3],plVar14[4]);
              goto LAB_100659534;
            }
            lVar7 = plVar14[4] + 1;
            if ((char)auStack_2c8[0] == '\n') {
              plVar14[5] = plVar14[5] + lVar7;
              plVar14[3] = plVar14[3] + 1;
              lVar7 = 0;
            }
            plVar14[4] = lVar7;
            cVar2 = (char)auStack_2c8[0];
            goto LAB_1006594d0;
          }
          piVar9 = (int *)___error();
        } while (*piVar9 == 4);
        uVar8 = func_0x000107c05db8((long)*piVar9 << 0x20 | 2);
LAB_100659534:
        *(undefined8 *)(puVar6 + 8) = uVar8;
        *puVar6 = 1;
      }
      return;
    }
    lStack_278 = 0x80;
    plStack_260 = &lStack_278;
    uVar13 = *plVar16 + 0x8000000000000001U & *plVar16 >> 0x3f;
    puStack_270 = puVar6;
    if ((long)uVar13 < 2) {
      if (uVar13 == 0) {
        lVar11 = plVar16[0xc];
        lVar7 = plVar16[6];
        *puVar6 = 0x7b;
        lStack_268 = 1;
        uStack_258 = 0x100;
        pplStack_250 = &plStack_260;
        puVar6 = (undefined1 *)FUN_1014d3858(&uStack_258,&UNK_108ca26b0,2,plVar16 + 3);
        if (puVar6 != (undefined1 *)0x0) goto LAB_1006592e0;
        if ((uStack_258 & 1) != 0) {
LAB_100658e44:
          uStack_238 = 10;
          puVar6 = (undefined1 *)FUN_107c05dbc(&uStack_238,0,0);
          goto LAB_1006592e0;
        }
        FUN_100634920(&uStack_258,&UNK_108cb495d,6,plVar16[1],plVar16[2]);
        if (lVar11 != -0x7ffffffffffffffb) {
          if ((uStack_258 & 1) != 0) goto LAB_100658e44;
          FUN_100634a4c(&uStack_258,&UNK_108cb9606,6,plVar16 + 0xc);
        }
        bVar12 = (byte)uStack_258;
        if (lVar7 != -0x7fffffffffffffff) {
          if ((uStack_258 & 1) != 0) goto LAB_100658e44;
          FUN_1013fe3ec(&uStack_258,&UNK_108cbbe0c,5);
          pplVar3 = pplStack_250;
          if ((uStack_258 & 1) != 0) {
LAB_10065933c:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100659358);
            (*pcVar5)();
          }
          plVar17 = *pplStack_250;
          lVar11 = plVar17[2];
          if (*plVar17 == lVar11) {
            thunk_FUN_108855060(plVar17,lVar11,1,1,1);
            lVar11 = plVar17[2];
          }
          *(undefined1 *)(plVar17[1] + lVar11) = 0x3a;
          plVar17[2] = lVar11 + 1;
          lVar18 = plVar16[9];
          plVar17 = *pplVar3;
          lVar11 = plVar17[2];
          if (*plVar17 == lVar11) {
            thunk_FUN_108855060(plVar17,lVar11,1,1,1);
            lVar11 = plVar17[2];
          }
          *(undefined1 *)(plVar17[1] + lVar11) = 0x7b;
          lVar11 = lVar11 + 1;
          plVar17[2] = lVar11;
          if ((lVar7 == -0x8000000000000000) && (lVar18 == -0x8000000000000000)) {
            if (*plVar17 == lVar11) {
              thunk_FUN_108855060(plVar17,lVar11,1,1,1);
              lVar11 = plVar17[2];
            }
            *(undefined1 *)(plVar17[1] + lVar11) = 0x7d;
            plVar17[2] = lVar11 + 1;
            uStack_248 = (ushort)(byte)uStack_248;
            pplStack_240 = pplVar3;
            bVar12 = 0;
          }
          else {
            uStack_248 = 0x100;
            pplStack_240 = pplVar3;
            if (lVar7 == -0x8000000000000000) {
              if (lVar18 == -0x8000000000000000) {
                bVar12 = 0;
              }
              else {
LAB_100659248:
                func_0x00010063ba6c(&uStack_248,&UNK_108cac725,10,plVar16 + 9);
                bVar12 = (byte)uStack_248;
              }
            }
            else {
              func_0x00010063ba6c(&uStack_248,&UNK_108cb02cc,0xb,plVar16 + 6);
              bVar12 = (byte)uStack_248;
              if (lVar18 != -0x8000000000000000) {
                if ((uStack_248 & 1) != 0) {
                  uStack_238 = 10;
                  puVar6 = (undefined1 *)FUN_107c05dbc(&uStack_238,0,0);
                  goto LAB_1006592e0;
                }
                goto LAB_100659248;
              }
            }
          }
          if (((bVar12 & 1) == 0) && (uStack_248._1_1_ != '\0')) {
            plVar16 = *pplStack_240;
            lVar7 = plVar16[2];
            if (*plVar16 == lVar7) {
              thunk_FUN_108855060(plVar16,lVar7,1,1,1);
              lVar7 = plVar16[2];
            }
            *(undefined1 *)(plVar16[1] + lVar7) = 0x7d;
            plVar16[2] = lVar7 + 1;
          }
          bVar12 = 0;
        }
        puVar6 = (undefined1 *)0x0;
        if (((bVar12 & 1) != 0) || (uStack_258._1_1_ == '\0')) goto LAB_1006592e0;
        plVar16 = *pplStack_250;
        lVar7 = plVar16[2];
        if (*plVar16 != lVar7) goto LAB_1006592c8;
        thunk_FUN_108855060(plVar16,lVar7,1,1,1);
      }
      else {
        lVar7 = plVar16[4];
        *puVar6 = 0x7b;
        lStack_268 = 1;
        uStack_248 = 0x100;
        pplStack_240 = &plStack_260;
        FUN_100634920(&uStack_248,&UNK_108cb495d,6,plVar16[2],plVar16[3]);
        if (lVar7 != -0x7ffffffffffffffb) {
          if ((byte)uStack_248 == '\x01') {
            uStack_238 = 10;
            puVar6 = (undefined1 *)FUN_107c05dbc(&uStack_238,0,0);
            goto LAB_1006592e0;
          }
          FUN_100634a4c(&uStack_248,&UNK_108cb9606,6,plVar16 + 4);
        }
        puVar6 = (undefined1 *)0x0;
        if (((uStack_248 & 1) != 0) || (uStack_248._1_1_ == '\0')) goto LAB_1006592e0;
        plVar16 = *pplStack_240;
        lVar7 = plVar16[2];
        if (*plVar16 != lVar7) goto LAB_1006592c8;
        thunk_FUN_108855060(plVar16,lVar7,1,1,1);
      }
LAB_100659388:
      lVar7 = plVar16[2];
    }
    else if (uVar13 == 2) {
      *puVar6 = 0x7b;
      lStack_268 = 1;
      uStack_248 = 0x100;
      pplStack_240 = &plStack_260;
      puVar6 = (undefined1 *)FUN_1014d3858(&uStack_248,&UNK_108ca26b0,2,plVar16 + 1);
      if (puVar6 != (undefined1 *)0x0) goto LAB_1006592e0;
      if ((uStack_248 & 1) != 0) {
        uStack_238 = 10;
        puVar6 = (undefined1 *)FUN_107c05dbc(&uStack_238,0,0);
        goto LAB_1006592e0;
      }
      FUN_1013fe3ec(&uStack_248,&UNK_108ca273b,6);
      pplVar3 = pplStack_240;
      if ((byte)uStack_248 == '\x01') goto LAB_10065933c;
      plVar17 = *pplStack_240;
      lVar7 = plVar17[2];
      if (*plVar17 == lVar7) {
        thunk_FUN_108855060(plVar17,lVar7,1,1,1);
        lVar7 = plVar17[2];
      }
      *(undefined1 *)(plVar17[1] + lVar7) = 0x3a;
      plVar17[2] = lVar7 + 1;
      FUN_100683ae4(plVar16 + 4,pplVar3);
      if (uStack_248._1_1_ == '\0') {
        puVar6 = (undefined1 *)0x0;
        goto LAB_1006592e0;
      }
      plVar16 = *pplVar3;
      lVar7 = plVar16[2];
      if (*plVar16 == lVar7) {
        thunk_FUN_108855060(plVar16,lVar7,1,1,1);
        goto LAB_100659388;
      }
    }
    else {
      *puVar6 = 0x7b;
      lStack_268 = 1;
      uStack_238 = CONCAT62(uStack_238._2_6_,0x100);
      pplStack_230 = &plStack_260;
      puVar6 = (undefined1 *)FUN_1014cde38(&uStack_238,plVar16 + 1);
      if (((puVar6 != (undefined1 *)0x0) ||
          (puVar6 = (undefined1 *)FUN_1014d3858(&uStack_238,&UNK_108ca26b0,2,plVar16 + 0xe),
          puVar6 != (undefined1 *)0x0)) || (((uStack_238 & 1) != 0 || (uStack_238._1_1_ == '\0'))))
      goto LAB_1006592e0;
      plVar16 = *pplStack_230;
      lVar7 = plVar16[2];
      if (*plVar16 == lVar7) {
        thunk_FUN_108855060(plVar16,lVar7,1,1,1);
        goto LAB_100659388;
      }
    }
LAB_1006592c8:
    puVar6 = (undefined1 *)0x0;
    *(undefined1 *)(plVar16[1] + lVar7) = 0x7d;
    plVar16[2] = lVar7 + 1;
LAB_1006592e0:
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = puStack_270;
      if (lStack_278 != -0x8000000000000000) {
        *plVar14 = lStack_278;
        plVar14[1] = (long)puStack_270;
        plVar14[2] = lStack_268;
        return;
      }
    }
    else if (lStack_278 != 0) {
      _free(puStack_270);
    }
    *plVar14 = -0x8000000000000000;
    plVar14[1] = (long)puVar6;
    return;
  }
  lStack_1c8 = 0x80;
  plStack_1b0 = &lStack_1c8;
  *puVar6 = 0x7b;
  lStack_1b8 = 1;
  uStack_1a8 = 0x100;
  pplStack_1a0 = &plStack_1b0;
  uVar13 = *(ulong *)(lVar7 + 0x30) ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)(lVar7 + 0x30)) {
    uVar13 = 1;
  }
  puStack_1c0 = puVar6;
  if ((long)uVar13 < 2) {
    if (uVar13 == 0) {
      FUN_1006390ec(&uStack_1a8,&UNK_108cde34c,4,&UNK_108cc314f,0xe);
      puVar15 = *(ulong **)(lVar7 + 0x38);
      FUN_1013fe3ec(&uStack_1a8,&UNK_108ca1064,7);
      pplVar3 = pplStack_1a0;
      if ((uStack_1a8 & 1) != 0) goto LAB_100658a30;
      plVar16 = *pplStack_1a0;
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x3a;
      plVar16[2] = lVar11 + 1;
      lVar11 = *puVar15 + 0x7fffffffffffffbf;
      if (*puVar15 < 0x8000000000000041) {
        lVar11 = 1;
      }
      if (lVar11 < 2) {
        if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100657ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_100657ecc +
                    (ulong)*(ushort *)
                            (&UNK_108c9aba4 +
                            (puVar15[1] + 0x8000000000000001 & (long)puVar15[1] >> 0x3f) * 2) * 4))
                    ();
          return;
        }
        puVar6 = (undefined1 *)FUN_100bdabb0(puVar15,pplVar3);
      }
      else if (lVar11 == 2) {
        plVar16 = *pplVar3;
        lVar11 = plVar16[2];
        if (*plVar16 == lVar11) {
          thunk_FUN_108855060(plVar16,lVar11,1,1,1);
          lVar11 = plVar16[2];
        }
        *(undefined1 *)(plVar16[1] + lVar11) = 0x7b;
        plVar16[2] = lVar11 + 1;
        uStack_198 = 0x100;
        pplStack_190 = pplVar3;
        puVar6 = (undefined1 *)FUN_1014d3858(&uStack_198,&UNK_108ca26b0,2,puVar15 + 1);
        if (puVar6 == (undefined1 *)0x0) {
          if ((uStack_198 & 1) == 0) {
            FUN_1013fe3ec(&uStack_198,&UNK_108ca273b,6);
            pplVar3 = pplStack_190;
            if ((uStack_198 & 1) != 0) goto LAB_100658a30;
            plVar16 = *pplStack_190;
            lVar11 = plVar16[2];
            if (*plVar16 == lVar11) {
              thunk_FUN_108855060(plVar16,lVar11,1,1,1);
              lVar11 = plVar16[2];
            }
            *(undefined1 *)(plVar16[1] + lVar11) = 0x3a;
            plVar16[2] = lVar11 + 1;
            FUN_100683ae4(puVar15 + 4,pplVar3);
            if (uStack_198._1_1_ != '\0') {
              plVar16 = *pplVar3;
              lVar11 = plVar16[2];
              if (*plVar16 == lVar11) {
                thunk_FUN_108855060(plVar16,lVar11,1,1,1);
                goto LAB_100658d5c;
              }
              goto LAB_10065878c;
            }
            puVar6 = (undefined1 *)0x0;
          }
          else {
            uStack_188 = 10;
            puVar6 = (undefined1 *)FUN_107c05dbc(&uStack_188,0,0);
          }
        }
      }
      else {
        plVar16 = *pplVar3;
        lVar11 = plVar16[2];
        if (*plVar16 == lVar11) {
          thunk_FUN_108855060(plVar16,lVar11,1,1,1);
          lVar11 = plVar16[2];
        }
        *(undefined1 *)(plVar16[1] + lVar11) = 0x7b;
        plVar16[2] = lVar11 + 1;
        uStack_188 = CONCAT62(uStack_188._2_6_,0x100);
        pplStack_180 = pplVar3;
        puVar6 = (undefined1 *)FUN_1014cde38(&uStack_188,puVar15 + 1);
        if ((((puVar6 == (undefined1 *)0x0) &&
             (puVar6 = (undefined1 *)FUN_1014d3858(&uStack_188,&UNK_108ca26b0,2,puVar15 + 0xe),
             puVar6 == (undefined1 *)0x0)) && ((uStack_188 & 1) == 0)) && (uStack_188._1_1_ != '\0')
           ) {
          plVar16 = *pplStack_180;
          lVar11 = plVar16[2];
          if (*plVar16 == lVar11) {
            thunk_FUN_108855060(plVar16,lVar11,1,1,1);
LAB_100658d5c:
            lVar11 = plVar16[2];
          }
LAB_10065878c:
          puVar6 = (undefined1 *)0x0;
          *(undefined1 *)(plVar16[1] + lVar11) = 0x7d;
          plVar16[2] = lVar11 + 1;
        }
      }
      if (puVar6 != (undefined1 *)0x0) {
        if (lStack_1c8 != 0) {
          _free(puStack_1c0);
        }
        goto LAB_100658a00;
      }
    }
    else {
      FUN_1006390ec(&uStack_1a8,&UNK_108cde34c,4,&UNK_108cc315d,0x14);
      FUN_10063efc4(&uStack_1a8,&UNK_108cc305d,10,*(undefined8 *)(lVar7 + 0x48));
      FUN_10063efc4(&uStack_1a8,&UNK_108cc3067,0xd,*(undefined8 *)(lVar7 + 0x50));
      FUN_10063efc4(&uStack_1a8,&UNK_108cc3074,0x12,*(undefined8 *)(lVar7 + 0x58));
      FUN_100634920(&uStack_1a8,&UNK_108cc3086,0x14,*(undefined8 *)(lVar7 + 0x38),
                    *(undefined8 *)(lVar7 + 0x40));
    }
  }
  else if (uVar13 == 2) {
    FUN_1006390ec(&uStack_1a8,&UNK_108cde34c,4,&UNK_108cc3171,3);
  }
  else {
    FUN_1006390ec(&uStack_1a8,&UNK_108cde34c,4,&UNK_108cde480,4);
    bVar12 = *(byte *)(lVar7 + 0x38);
    FUN_1013fe3ec(&uStack_1a8,&UNK_108ca105e,6);
    pplVar3 = pplStack_1a0;
    if ((uStack_1a8 & 1) != 0) goto LAB_100658a30;
    plVar16 = *pplStack_1a0;
    lVar11 = plVar16[2];
    if (*plVar16 == lVar11) {
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
      lVar11 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar11) = 0x3a;
    plVar16[2] = lVar11 + 1;
    plVar16 = *pplVar3;
    if ((bVar12 & 1) == 0) {
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      FUN_100657654(plVar16,&UNK_108ca8130,6);
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        goto LAB_100658bd0;
      }
    }
    else {
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      FUN_100657654(plVar16,&UNK_108ca7eab,7);
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
LAB_100658bd0:
        lVar11 = plVar16[2];
      }
    }
    *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
    plVar16[2] = lVar11 + 1;
  }
  uVar8 = *(undefined8 *)(lVar7 + 8);
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  FUN_1013fe3ec(&uStack_1a8,&UNK_108ca7cc0,9);
  pplVar3 = pplStack_1a0;
  if ((uStack_1a8 & 1) == 0) {
    plVar16 = *pplStack_1a0;
    lVar11 = plVar16[2];
    if (*plVar16 == lVar11) {
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
      lVar11 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar11) = 0x3a;
    plVar16[2] = lVar11 + 1;
    plVar16 = *pplVar3;
    lVar11 = plVar16[2];
    if (*plVar16 == lVar11) {
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
      lVar11 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
    plVar16[2] = lVar11 + 1;
    FUN_100657654(plVar16,uVar8,uVar1);
    lVar11 = plVar16[2];
    if (*plVar16 == lVar11) {
      thunk_FUN_108855060(plVar16,lVar11,1,1,1);
      lVar11 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
    plVar16[2] = lVar11 + 1;
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    FUN_1013fe3ec(&uStack_1a8,&UNK_108cc318b,9);
    pplVar3 = pplStack_1a0;
    if ((uStack_1a8 & 1) == 0) {
      plVar16 = *pplStack_1a0;
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x3a;
      plVar16[2] = lVar11 + 1;
      plVar16 = *pplVar3;
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      FUN_100657654(plVar16,uVar8,uVar1);
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        thunk_FUN_108855060(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      uVar8 = *(undefined8 *)(lVar7 + 0x60);
      FUN_1013fe3ec(&uStack_1a8,&UNK_108cc3194,6);
      pplVar3 = pplStack_1a0;
      if ((char)uStack_1a8 != '\x01') {
        plVar16 = *pplStack_1a0;
        lVar7 = plVar16[2];
        if (*plVar16 == lVar7) {
          thunk_FUN_108855060(plVar16,lVar7,1,1,1);
          lVar7 = plVar16[2];
        }
        *(undefined1 *)(plVar16[1] + lVar7) = 0x3a;
        plVar16[2] = lVar7 + 1;
        plVar16 = *pplVar3;
        lVar7 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                          (uVar8,&uStack_188);
        uVar13 = 0x14 - lVar7;
        lVar11 = plVar16[2];
        if ((ulong)(*plVar16 - lVar11) < uVar13) {
          thunk_FUN_108855060(plVar16,lVar11,uVar13,1,1);
          lVar11 = plVar16[2];
        }
        _memcpy(plVar16[1] + lVar11,(long)&uStack_188 + lVar7,uVar13);
        plVar16[2] = lVar11 + uVar13;
        if (uStack_1a8._1_1_ != '\0') {
          plVar16 = *pplVar3;
          lVar7 = plVar16[2];
          if (*plVar16 == lVar7) {
            thunk_FUN_108855060(plVar16,lVar7,1,1,1);
            lVar7 = plVar16[2];
          }
          *(undefined1 *)(plVar16[1] + lVar7) = 0x7d;
          plVar16[2] = lVar7 + 1;
        }
        puVar6 = puStack_1c0;
        if (lStack_1c8 != -0x8000000000000000) {
          *plVar14 = lStack_1c8;
          plVar14[1] = (long)puStack_1c0;
          plVar14[2] = lStack_1b8;
          return;
        }
LAB_100658a00:
        *plVar14 = -0x8000000000000000;
        plVar14[1] = (long)puVar6;
        return;
      }
    }
  }
LAB_100658a30:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100658a4c);
  (*pcVar5)();
}

