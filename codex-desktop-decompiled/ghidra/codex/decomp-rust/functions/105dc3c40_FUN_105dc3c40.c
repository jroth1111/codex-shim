
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_105dc3c40(long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 (*pauVar8) [16];
  long *plVar9;
  long lVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  lVar10 = *param_2;
  uVar11 = *(ulong *)(lVar10 + 0x28);
  if (uVar11 < *(ulong *)(lVar10 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(lVar10 + 0x18) + uVar11);
      if (0x3a < bVar1) break;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 == 0x3a) {
          *(ulong *)(lVar10 + 0x28) = uVar11 + 1;
          uVar11 = *(ulong *)(lVar10 + 0x20);
          if (uVar11 <= *(ulong *)(lVar10 + 0x28)) goto LAB_105dc9ee8;
          plVar4 = (long *)(lVar10 + 0x18);
          lVar14 = *plVar4;
          lVar18 = *(ulong *)(lVar10 + 0x28) + 5;
          goto LAB_105dc9eb4;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(lVar10 + 0x28) = uVar11;
    } while (*(ulong *)(lVar10 + 0x20) != uVar11);
  }
  plVar4 = (long *)func_0x000108a492a4(lVar10,&stack0xffffffffffffffc8);
  *param_1 = -0x7ffffffffffffffb;
  param_1[1] = (long)plVar4;
  return plVar4;
LAB_105dc9eb4:
  bVar1 = *(byte *)(lVar14 + lVar18 + -5);
  if (bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
    *(long *)(lVar10 + 0x28) = lVar18 + -4;
    lVar18 = lVar18 + 1;
    if (lVar18 - uVar11 == 5) goto LAB_105dc9ee8;
    goto LAB_105dc9eb4;
  }
  uVar15 = (uint)bVar1;
  if (bVar1 < 0x66) {
    if (bVar1 != 0x22) {
      if (bVar1 != 0x2d) {
        if (uVar15 != 0x5b) goto LAB_105dca204;
        cVar2 = *(char *)(lVar10 + 0x48) + -1;
        *(char *)(lVar10 + 0x48) = cVar2;
        if (cVar2 == '\0') {
          uStack_190 = (long *)0x18;
          plVar4 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
          *param_1 = -0x7ffffffffffffffb;
          param_1[1] = (long)plVar4;
          return plVar4;
        }
        uVar12 = lVar18 - 4;
        *(ulong *)(lVar10 + 0x28) = uVar12;
        plVar17 = (long *)0x8;
        plStack_1d8 = (long *)0x0;
        plStack_1d0 = (long *)0x8;
        plStack_1c8 = (long *)0x0;
        if (uVar11 <= uVar12) goto LAB_105dca130;
        plVar17 = (long *)0x8;
        bVar13 = true;
        plVar9 = param_1;
        goto LAB_105dca018;
      }
      *(long *)(lVar10 + 0x28) = lVar18 + -4;
      plVar7 = (long *)func_0x000105dc4078(&uStack_c0,lVar10,0);
      if (uStack_c0 == (long *)0x3) {
        *param_1 = -0x7ffffffffffffffb;
        param_1[1] = (long)plStack_b8;
        return plVar7;
      }
      plVar17 = (long *)0x8000000000000002;
      if (uStack_c0 == (long *)0x0) {
        if ((long *)((ulong)plStack_b8 & 0x7fffffffffffffff) < (long *)0x7ff0000000000000) {
          uStack_190 = (long *)0x8000000000000000;
          plVar7 = (long *)FUN_105dc6c20(&uStack_190);
          plVar4 = extraout_x8;
          plVar9 = (long *)0x2;
        }
        else {
          plVar4 = (long *)((ulong)plStack_b8 & 0x7fffffffffffffff);
          plVar9 = (long *)0x3;
          plVar17 = (long *)0x8000000000000000;
        }
      }
      else {
        plVar4 = uStack_c0;
        plVar9 = (long *)0x0;
        if (uStack_c0 != (long *)0x1) {
          plVar9 = (long *)((ulong)plStack_b8 >> 0x3f);
        }
      }
LAB_105dca658:
      uVar11 = 0;
      plVar5 = plStack_b8;
      goto LAB_105dcaccc;
    }
    *(long *)(lVar10 + 0x28) = lVar18 + -4;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    plVar9 = (long *)__ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                               (&uStack_190,plVar4,lVar10);
    plVar4 = plStack_180;
    plVar17 = plStack_188;
    if (uStack_190 == (long *)0x2) {
      *param_1 = -0x7ffffffffffffffb;
      param_1[1] = (long)plStack_188;
      return plVar9;
    }
    if (plStack_180 == (long *)0x0) {
      plVar5 = (long *)0x1;
    }
    else {
      plVar5 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_180,1);
      if (plVar5 == (long *)0x0) {
        func_0x0001087c9084(1,plVar4);
LAB_105dcae0c:
        func_0x0001087c9084(1,unaff_x22);
        goto LAB_105dcae18;
      }
    }
    plVar7 = (long *)_memcpy(plVar5,plVar17,plVar4);
    uVar11 = (ulong)plVar4 & 0xffffffffffffff00;
    plVar17 = (long *)0x8000000000000003;
    plVar9 = plVar4;
    goto LAB_105dcaccc;
  }
  plVar7 = param_1;
  plVar5 = unaff_x22;
  if (uVar15 == 0x73 || bVar1 < 0x73) {
    if (uVar15 == 0x66) {
      uVar16 = lVar18 - 4;
      *(ulong *)(lVar10 + 0x28) = uVar16;
      uVar12 = uVar16;
      if (uVar16 <= uVar11) {
        uVar12 = uVar11;
      }
      if (uVar11 <= uVar16) goto LAB_105dca45c;
      cVar2 = *(char *)(lVar14 + lVar18 + -4);
      *(ulong *)(lVar10 + 0x28) = lVar18 - 3U;
      if (cVar2 == 'a') {
        if (lVar18 - 3U == uVar12) goto LAB_105dca45c;
        cVar2 = *(char *)(lVar14 + lVar18 + -3);
        *(ulong *)(lVar10 + 0x28) = lVar18 - 2U;
        if (cVar2 == 'l') {
          if (lVar18 - 2U == uVar12) goto LAB_105dca45c;
          cVar2 = *(char *)(lVar14 + lVar18 + -2);
          *(ulong *)(lVar10 + 0x28) = lVar18 - 1U;
          if (cVar2 == 's') {
            if (lVar18 - 1U == uVar12) goto LAB_105dca45c;
            cVar2 = *(char *)(lVar14 + lVar18 + -1);
            *(long *)(lVar10 + 0x28) = lVar18;
            if (cVar2 == 'e') {
              uVar11 = 0;
              plVar17 = (long *)0x8000000000000001;
              plVar4 = (long *)0x65;
              plVar9 = (long *)0x0;
              goto LAB_105dcaccc;
            }
          }
        }
      }
    }
    else {
      if (uVar15 != 0x6e) {
LAB_105dca204:
        if (uVar15 - 0x30 < 10) {
          plVar7 = (long *)func_0x000105dc4078(&uStack_c0,lVar10,1);
          if (uStack_c0 == (long *)0x3) {
            *param_1 = -0x7ffffffffffffffb;
            param_1[1] = (long)plStack_b8;
            return plVar7;
          }
          plVar17 = (long *)0x8000000000000002;
          plVar4 = uStack_c0;
          if (uStack_c0 == (long *)0x2) {
            plVar9 = (long *)((ulong)plStack_b8 >> 0x3f);
          }
          else if (uStack_c0 == (long *)0x1) {
            plVar9 = (long *)0x0;
          }
          else if (((ulong)plStack_b8 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
            uStack_190 = (long *)0x8000000000000000;
            plVar7 = (long *)FUN_105dc6c20(&uStack_190);
            plVar4 = extraout_x8_00;
            plVar9 = (long *)0x2;
          }
          else {
            plVar4 = (long *)0x8000000000000000;
            plVar9 = (long *)0x3;
            plVar17 = (long *)0x8000000000000000;
          }
          goto LAB_105dca658;
        }
        uStack_190 = (long *)0xa;
        plVar9 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
        goto LAB_105dcac20;
      }
      uVar16 = lVar18 - 4;
      *(ulong *)(lVar10 + 0x28) = uVar16;
      uVar12 = uVar16;
      if (uVar16 <= uVar11) {
        uVar12 = uVar11;
      }
      if (uVar11 <= uVar16) goto LAB_105dca45c;
      cVar2 = *(char *)(lVar14 + lVar18 + -4);
      *(ulong *)(lVar10 + 0x28) = lVar18 - 3U;
      if (cVar2 != 'u') goto LAB_105dcab14;
      if (lVar18 - 3U == uVar12) goto LAB_105dca45c;
      cVar2 = *(char *)(lVar14 + lVar18 + -3);
      *(ulong *)(lVar10 + 0x28) = lVar18 - 2U;
      if (cVar2 == 'l') {
        if (lVar18 - 2U == uVar12) goto LAB_105dca45c;
        cVar2 = *(char *)(lVar14 + lVar18 + -2);
        *(long *)(lVar10 + 0x28) = lVar18 + -1;
        if (cVar2 == 'l') {
          uVar11 = 0;
          plVar17 = (long *)0x8000000000000000;
          plVar4 = (long *)0x6c;
          plVar9 = (long *)0x0;
          goto LAB_105dcaccc;
        }
      }
    }
  }
  else {
    if (uVar15 != 0x74) {
      if (uVar15 != 0x7b) goto LAB_105dca204;
      cVar2 = *(char *)(lVar10 + 0x48) + -1;
      *(char *)(lVar10 + 0x48) = cVar2;
      if (cVar2 == '\0') {
        uStack_190 = (long *)0x18;
        goto LAB_105dc9eec;
      }
      *(long *)(lVar10 + 0x28) = lVar18 + -4;
      uStack_1e0 = 1;
      lStack_1e8 = lVar10;
      uVar6 = func_0x000105dc8cc8(&uStack_190,&lStack_1e8);
      lVar18 = lStack_1e8;
      plVar17 = plStack_188;
      if ((char)uStack_190 == '\x01') {
LAB_105dca1c4:
        auVar20._8_8_ = plStack_1f0;
        auVar20._0_8_ = uVar6;
        plStack_230 = (long *)0x8000000000000005;
        plStack_228 = plVar17;
        goto LAB_105dca714;
      }
      if (uStack_190._1_1_ == '\x01') {
        *(long *)(lStack_1e8 + 0x28) = *(long *)(lStack_1e8 + 0x28) + 1;
        *(undefined8 *)(lStack_1e8 + 0x10) = 0;
        uVar6 = __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                          (&uStack_190,lStack_1e8 + 0x18,lStack_1e8);
        unaff_x22 = plStack_180;
        plVar17 = plStack_188;
        if (uStack_190 == (long *)0x2) goto LAB_105dca1c4;
        plVar9 = unaff_x22;
        if (plStack_180 == (long *)0x0) {
          unaff_x23 = (long *)0x1;
        }
        else if (plStack_180 == (long *)0x1e) {
          if (((*plStack_188 == 0x6a5f656472657324 && plStack_188[1] == 0x6972703a3a6e6f73) &&
              plStack_188[2] == 0x61523a3a65746176) &&
              *(long *)((long)plStack_188 + 0x16) == 0x65756c6156776152) {
            plVar9 = (long *)0x8000000000000000;
          }
          else {
            unaff_x23 = (long *)_malloc(0x1e);
            if (unaff_x23 == (long *)0x0) {
              uVar6 = func_0x0001087c9084(1,0x1e);
              func_0x000105dc68fc(&uStack_c0);
              __Unwind_Resume(uVar6);
              auVar20 = func_0x000108a07bc4();
              uVar11 = auVar20._8_8_;
              plVar4 = auVar20._0_8_;
              param_3 = param_3 & uVar11;
              lVar10 = *(long *)((long)plVar4 + param_3);
              uVar12 = CONCAT17(-(lVar10 < 0),
                                CONCAT16(-((char)((ulong)lVar10 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar10 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar10 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar10 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar10 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar10 >> 8) < '\0'),
                                                           -((char)lVar10 < '\0'))))))));
              if (uVar12 == 0) {
                lVar10 = 8;
                do {
                  param_3 = param_3 + lVar10 & uVar11;
                  lVar18 = *(long *)((long)plVar4 + param_3);
                  uVar12 = CONCAT17(-(lVar18 < 0),
                                    CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar18 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar18 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar18 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar18 >> 8) <
                                                                     '\0'),-((char)lVar18 < '\0'))))
                                                  ))));
                  lVar10 = lVar10 + 8;
                } while (uVar12 == 0);
              }
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              plVar17 = (long *)(param_3 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) &
                                uVar11);
              if (-1 < *(char *)((long)plVar4 + (long)plVar17)) {
                lVar10 = *plVar4;
                uVar11 = CONCAT17(-(lVar10 < 0),
                                  CONCAT16(-((char)((ulong)lVar10 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar10 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar10 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar10 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar10 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar10 >> 8) < '\0'),
                                                           -((char)lVar10 < '\0'))))))));
                uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                return (long *)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
              }
              return plVar17;
            }
            lVar19 = plVar17[1];
            lVar14 = *plVar17;
            uVar6 = *(undefined8 *)((long)plVar17 + 0xe);
            *(undefined8 *)((long)unaff_x23 + 0x16) = *(undefined8 *)((long)plVar17 + 0x16);
            *(undefined8 *)((long)unaff_x23 + 0xe) = uVar6;
            unaff_x23[1] = lVar19;
            *unaff_x23 = lVar14;
            plVar9 = (long *)0x1e;
          }
        }
        else {
          unaff_x23 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_180,1);
          if (unaff_x23 == (long *)0x0) goto LAB_105dcae0c;
          uVar6 = _memcpy(unaff_x23,plVar17,unaff_x22);
          plVar17 = unaff_x23;
          if ((long)unaff_x22 + 0x7fffffffffffffffU < 2) goto LAB_105dca1c4;
        }
        if (plVar9 == (long *)0x8000000000000000) {
          uVar6 = func_0x000105dc8e24(&uStack_190,lVar18);
          plVar9 = plStack_188;
          plVar17 = uStack_190;
          auVar20._8_8_ = plStack_1f0;
          auVar20._0_8_ = uVar6;
          if (uStack_190 == (long *)0x0) {
            plStack_230 = (long *)0x8000000000000005;
            plStack_228 = plStack_188;
          }
          else {
            uStack_c0 = uStack_190;
            plStack_b8 = plStack_188;
            plStack_b0 = (long *)0x0;
            plStack_a8 = (long *)0x0;
            plStack_a0 = uStack_190;
            plStack_98 = plStack_188;
            plVar7 = (long *)FUN_105dc3cf8(&uStack_190,&uStack_c0);
            if (uStack_190 == (long *)0x8000000000000005) {
              plVar7 = (long *)func_0x000108a4a5c4(plStack_188);
              plStack_230 = (long *)0x8000000000000005;
              plStack_228 = plVar7;
            }
            else {
              plStack_208 = plStack_168;
              plStack_210 = plStack_170;
              plStack_1f8 = plStack_158;
              plStack_200 = plStack_160;
              plStack_1f0 = plStack_150;
              plStack_228 = plStack_188;
              plStack_230 = uStack_190;
              plStack_218 = plStack_178;
              plStack_220 = plStack_180;
            }
            auVar20._8_8_ = plStack_1f0;
            auVar20._0_8_ = plVar7;
            if (plVar9 != (long *)0x0) {
              uVar6 = _free(plVar17);
              auVar20._8_8_ = plStack_1f0;
              auVar20._0_8_ = uVar6;
            }
          }
          goto LAB_105dca714;
        }
        if (plVar9 != (long *)0x8000000000000001) {
          auStack_1a0 = func_0x000105dc67d4();
          plStack_1d8 = (long *)0x0;
          plStack_1d0 = (long *)0x8;
          plStack_1b8 = (long *)0x0;
          plStack_1c0 = (long *)&UNK_109b9f7e8;
          plStack_1a8 = (long *)0x0;
          plStack_1b0 = (long *)0x0;
          plStack_1c8 = (long *)0x0;
          plStack_100 = unaff_x22;
          plStack_110 = plVar9;
          plStack_108 = unaff_x23;
          FUN_105dc3c40(&plStack_230,&lStack_1e8);
          if (plStack_230 != (long *)0x8000000000000005) {
            func_0x000105dc93e8(&uStack_190,&plStack_1d8,&plStack_110,&plStack_230);
            plStack_b8 = plStack_180;
            uStack_c0 = plStack_188;
            plStack_a8 = plStack_170;
            plStack_b0 = plStack_178;
            plStack_98 = plStack_160;
            plStack_a0 = plStack_168;
            plStack_88 = plStack_150;
            plStack_90 = plStack_158;
            plStack_80 = plStack_148;
            if (plStack_188 != (long *)0x8000000000000005) {
              FUN_105dc6c20(&uStack_c0);
            }
            goto LAB_105dca8d0;
          }
          if (plVar9 != (long *)0x0) {
            _free(unaff_x23);
          }
          goto LAB_105dcab74;
        }
      }
      pauVar8 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar8[1][0] == '\x01') {
        auVar20 = *pauVar8;
      }
      else {
        auVar20 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar8 + 8) = auVar20._8_8_;
        pauVar8[1][0] = 1;
      }
      plStack_1f8 = auVar20._0_8_;
      *(long *)*pauVar8 = (long)plStack_1f8 + 1;
      plStack_230 = (long *)0x0;
      plStack_228 = (long *)0x8;
      plStack_220 = (long *)0x0;
      plStack_210 = (long *)0x0;
      plStack_218 = (long *)&UNK_109b9f7e8;
      plStack_200 = (long *)0x0;
      plStack_208 = (long *)0x0;
      goto LAB_105dca714;
    }
    uVar16 = lVar18 - 4;
    *(ulong *)(lVar10 + 0x28) = uVar16;
    uVar12 = uVar16;
    if (uVar16 <= uVar11) {
      uVar12 = uVar11;
    }
    if (uVar11 <= uVar16) {
LAB_105dca45c:
      uStack_190 = (long *)0x5;
      goto LAB_105dca460;
    }
    cVar2 = *(char *)(lVar14 + lVar18 + -4);
    *(ulong *)(lVar10 + 0x28) = lVar18 - 3U;
    if (cVar2 != 'r') goto LAB_105dcab14;
    if (lVar18 - 3U == uVar12) goto LAB_105dca45c;
    cVar2 = *(char *)(lVar14 + lVar18 + -3);
    *(ulong *)(lVar10 + 0x28) = lVar18 - 2U;
    if (cVar2 == 'u') {
      if (lVar18 - 2U == uVar12) goto LAB_105dca45c;
      cVar2 = *(char *)(lVar14 + lVar18 + -2);
      *(long *)(lVar10 + 0x28) = lVar18 + -1;
      if (cVar2 == 'e') {
        uVar11 = 0;
        plVar17 = (long *)0x8000000000000001;
        plVar4 = (long *)0x65;
        plVar9 = (long *)0x1;
        goto LAB_105dcaccc;
      }
    }
  }
LAB_105dcab14:
  uStack_190 = (long *)0x9;
LAB_105dca460:
  plVar4 = (long *)func_0x000108a499a0(lVar10,&uStack_190);
  goto LAB_105dc9efc;
LAB_105dc9ee8:
  uStack_190 = (long *)0x5;
LAB_105dc9eec:
  plVar4 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
  goto LAB_105dc9efc;
LAB_105dca018:
  do {
    plVar7 = plStack_1c8;
    while (bVar1 = *(byte *)(*plVar4 + uVar12),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      uVar12 = uVar12 + 1;
      *(ulong *)(lVar10 + 0x28) = uVar12;
      if (uVar11 == uVar12) goto LAB_105dca130;
    }
    if (bVar1 == 0x5d) {
      plStack_108 = plStack_1c8;
      plStack_110 = plStack_1d0;
      uStack_c0 = (long *)0x8000000000000004;
      plStack_b8 = plStack_1d8;
      goto LAB_105dca3a8;
    }
    if (!bVar13) {
      if (bVar1 != 0x2c) {
        uStack_190 = (long *)0x7;
        plVar5 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
        goto LAB_105dca148;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(lVar10 + 0x28) = uVar12;
      if (uVar11 <= uVar12) {
LAB_105dcaacc:
        uStack_190 = (long *)0x5;
        plVar5 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
        goto LAB_105dca148;
      }
      while (bVar1 = *(byte *)(*plVar4 + uVar12),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar12 = uVar12 + 1;
        *(ulong *)(lVar10 + 0x28) = uVar12;
        if (uVar11 == uVar12) goto LAB_105dcaacc;
      }
      if (bVar1 == 0x5d) {
        uStack_190 = (long *)0x15;
        plVar5 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
        goto LAB_105dca148;
      }
    }
    plVar9 = (long *)FUN_105dc9e60(&uStack_190,lVar10);
    plVar5 = plStack_188;
    if (uStack_190 == (long *)0x8000000000000005) goto LAB_105dca148;
    plStack_a8 = plStack_178;
    plStack_b0 = plStack_180;
    plStack_98 = plStack_168;
    plStack_a0 = plStack_170;
    plStack_88 = plStack_158;
    plStack_90 = plStack_160;
    plStack_80 = plStack_150;
    uStack_c0 = uStack_190;
    plStack_b8 = plStack_188;
    if (plVar7 == plStack_1d8) {
      plVar9 = (long *)__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                 (&plStack_1d8);
      plVar17 = plStack_1d0;
    }
    bVar13 = false;
    plVar5 = plVar17 + (long)plVar7 * 9;
    plVar5[1] = (long)plStack_b8;
    *plVar5 = (long)uStack_c0;
    plVar5[8] = (long)plStack_80;
    plVar5[5] = (long)plStack_98;
    plVar5[4] = (long)plStack_a0;
    plVar5[7] = (long)plStack_88;
    plVar5[6] = (long)plStack_90;
    plVar5[3] = (long)plStack_a8;
    plVar5[2] = (long)plStack_b0;
    plStack_1c8 = (long *)((long)plVar7 + 1);
    uVar11 = *(ulong *)(lVar10 + 0x20);
    uVar12 = *(ulong *)(lVar10 + 0x28);
  } while (uVar12 < uVar11);
LAB_105dca130:
  plVar7 = plStack_1c8;
  uStack_190 = (long *)0x2;
  plVar5 = (long *)func_0x000108a492a4(lVar10,&uStack_190);
LAB_105dca148:
  lVar18 = (long)plVar7 + 1;
  plVar9 = plVar17;
  while (lVar18 = lVar18 + -1, lVar18 != 0) {
    FUN_105dc6c20(plVar9);
    plVar9 = plVar9 + 9;
  }
  if (plStack_1d8 != (long *)0x0) {
    plVar9 = (long *)_free(plVar17);
  }
  uVar11 = *(ulong *)(lVar10 + 0x20);
  uVar12 = *(ulong *)(lVar10 + 0x28);
  uStack_c0 = (long *)0x8000000000000005;
  plStack_b8 = plVar5;
LAB_105dca3a8:
  auVar20._8_8_ = plStack_1f0;
  auVar20._0_8_ = plVar9;
  *(char *)(lVar10 + 0x48) = *(char *)(lVar10 + 0x48) + '\x01';
  plStack_a8 = plStack_108;
  plStack_b0 = plStack_110;
  plStack_98 = plStack_f8;
  plStack_a0 = plStack_100;
  plStack_88 = plStack_e8;
  plStack_90 = plStack_f0;
  plStack_80 = plStack_e0;
  if (uVar12 < uVar11) {
    do {
      bVar1 = *(byte *)(*plVar4 + uVar12);
      if (0x2c < bVar1) {
LAB_105dcac80:
        if (bVar1 != 0x5d) {
          plStack_1d8 = (long *)0x16;
          plVar9 = (long *)func_0x000108a492a4(lVar10,&plStack_1d8);
          goto LAB_105dca424;
        }
        *(ulong *)(lVar10 + 0x28) = uVar12 + 1;
        plVar17 = uStack_c0;
        plVar9 = plStack_b8;
        plStack_180 = plStack_110;
        plVar4 = plStack_108;
        plStack_260 = plStack_100;
        plStack_258 = plStack_f8;
        plStack_250 = plStack_f0;
        plStack_248 = plStack_e8;
        plStack_240 = plStack_e0;
        goto joined_r0x000105dcacb0;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_105dcac80;
        uVar12 = uVar12 + 1;
        *(ulong *)(lVar10 + 0x28) = uVar12;
        if (uVar12 < uVar11) goto LAB_105dcac54;
        goto LAB_105dcada0;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(lVar10 + 0x28) = uVar12;
    } while (uVar11 != uVar12);
  }
  plStack_1d8 = (long *)0x2;
  plVar9 = (long *)func_0x000108a492a4(lVar10,&plStack_1d8);
  goto LAB_105dca424;
LAB_105dca8d0:
  uVar6 = func_0x000105dc8cc8(&uStack_c0,&lStack_1e8);
  lVar18 = lStack_1e8;
  plStack_228 = plStack_b8;
  if ((char)uStack_c0 != '\x01') {
    if (uStack_c0._1_1_ != '\x01') {
LAB_105dcab1c:
      plStack_208 = plStack_1b0;
      plStack_210 = plStack_1b8;
      plStack_200 = plStack_1a8;
      plStack_1f8 = (long *)auStack_1a0._0_8_;
      auVar20._8_8_ = auStack_1a0._8_8_;
      auVar20._0_8_ = uVar6;
      plStack_230 = plStack_1d8;
      plStack_218 = plStack_1c0;
      plStack_220 = plStack_1c8;
      plStack_228 = plStack_1d0;
      goto LAB_105dca714;
    }
    *(long *)(lStack_1e8 + 0x28) = *(long *)(lStack_1e8 + 0x28) + 1;
    *(undefined8 *)(lStack_1e8 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_c0,lStack_1e8 + 0x18,lStack_1e8);
    unaff_x22 = plStack_b0;
    plVar17 = plStack_b8;
    plStack_228 = plStack_b8;
    if (uStack_c0 == (long *)0x2) goto LAB_105dcab70;
    if (plStack_b0 == (long *)0x0) {
      _memcpy(1,plStack_b8,0);
      unaff_x22 = (long *)0x0;
      plVar9 = (long *)0x1;
    }
    else {
      plVar9 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_b0,1);
      if (plVar9 == (long *)0x0) {
LAB_105dcae18:
        func_0x0001087c9084(1,unaff_x22);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x105dcae28);
        (*pcVar3)();
      }
      _memcpy(plVar9,plVar17,unaff_x22);
      plStack_228 = plVar9;
      if ((unaff_x22 == (long *)0x8000000000000001) || (unaff_x22 == (long *)0x8000000000000000))
      goto LAB_105dcab70;
    }
    uVar11 = *(ulong *)(lVar18 + 0x28);
    if (*(ulong *)(lVar18 + 0x20) <= uVar11) {
LAB_105dcaae4:
      plStack_110 = (long *)0x3;
      plStack_188 = (long *)func_0x000108a492a4(lVar18,&plStack_110);
joined_r0x000105dcab48:
      plStack_228 = plStack_188;
      if (unaff_x22 != (long *)0x0) {
        _free(plVar9);
        plStack_228 = plStack_188;
      }
      goto LAB_105dcab70;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar18 + 0x18) + uVar11);
      if (0x3a < bVar1) goto LAB_105dcade8;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar11 = uVar11 + 1;
      *(ulong *)(lVar18 + 0x28) = uVar11;
      if (*(ulong *)(lVar18 + 0x20) == uVar11) goto LAB_105dcaae4;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_105dcade8:
      plStack_110 = (long *)0x6;
      plStack_188 = (long *)func_0x000108a492a4(lVar18,&plStack_110);
      goto joined_r0x000105dcab48;
    }
    *(ulong *)(lVar18 + 0x28) = uVar11 + 1;
    uVar6 = FUN_105dc9e60(&uStack_c0,lVar18);
    plStack_188 = plStack_b8;
    if (uStack_c0 == (long *)0x8000000000000005) goto joined_r0x000105dcab48;
    plStack_160 = plStack_a8;
    plStack_168 = plStack_b0;
    plStack_150 = plStack_98;
    plStack_158 = plStack_a0;
    plStack_140 = plStack_88;
    plStack_148 = plStack_90;
    plStack_138 = plStack_80;
    plStack_170 = plStack_b8;
    plStack_178 = uStack_c0;
    uStack_190 = unaff_x22;
    plStack_188 = plVar9;
    plStack_180 = unaff_x22;
    if (unaff_x22 == (long *)0x8000000000000000) goto LAB_105dcab1c;
    plStack_228 = plVar9;
    if (unaff_x22 == (long *)0x8000000000000001) goto LAB_105dcab70;
    plStack_128 = unaff_x22;
    plStack_120 = plVar9;
    plStack_118 = unaff_x22;
    func_0x000105dc93e8(&uStack_c0,&plStack_1d8,&plStack_128,&plStack_178);
    plStack_108 = plStack_b0;
    plStack_110 = plStack_b8;
    plStack_f8 = plStack_a0;
    plStack_100 = plStack_a8;
    plStack_e8 = plStack_90;
    plStack_f0 = plStack_98;
    plStack_d8 = plStack_80;
    plStack_e0 = plStack_88;
    uStack_d0 = uStack_78;
    if (plStack_b8 != (long *)0x8000000000000005) {
      FUN_105dc6c20(&plStack_110);
    }
    goto LAB_105dca8d0;
  }
LAB_105dcab70:
  plStack_230 = (long *)0x8000000000000005;
LAB_105dcab74:
  uVar6 = FUN_105dc704c(&plStack_1d8);
  auVar20._8_8_ = plStack_1f0;
  auVar20._0_8_ = uVar6;
LAB_105dca714:
  plStack_1f0 = auVar20._8_8_;
  *(char *)(lVar10 + 0x48) = *(char *)(lVar10 + 0x48) + '\x01';
  uVar11 = *(ulong *)(lVar10 + 0x28);
  if (uVar11 < *(ulong *)(lVar10 + 0x20)) {
LAB_105dca73c:
    bVar1 = *(byte *)(*plVar4 + uVar11);
    if (bVar1 < 0x2d) {
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) goto code_r0x000105dca754;
      if ((ulong)bVar1 != 0x2c) goto LAB_105dcabc4;
      uStack_c0 = (long *)0x15;
      plVar9 = (long *)func_0x000108a492a4(lVar10,&uStack_c0);
    }
    else {
LAB_105dcabc4:
      if (bVar1 == 0x7d) {
        *(ulong *)(lVar10 + 0x28) = uVar11 + 1;
        plVar17 = plStack_230;
        plVar9 = plStack_228;
        plStack_180 = plStack_220;
        plVar4 = plStack_218;
        plStack_260 = plStack_210;
        plStack_258 = plStack_208;
        plStack_250 = plStack_200;
        plStack_248 = plStack_1f8;
        plStack_240 = plStack_1f0;
joined_r0x000105dcacb0:
        uStack_190 = plVar17;
        plStack_188 = plVar9;
        plStack_178 = plVar4;
        plStack_170 = plStack_260;
        plStack_168 = plStack_258;
        plStack_160 = plStack_250;
        plStack_158 = plStack_248;
        plStack_150 = plStack_240;
        if (plVar17 != (long *)0x8000000000000005) {
          plStack_1f0 = auVar20._8_8_;
          if (plVar17 != (long *)0x8000000000000005) {
            uVar11 = (ulong)plVar9 & 0xffffffffffffff00;
            plVar7 = auVar20._0_8_;
            plVar5 = plStack_180;
LAB_105dcaccc:
            *param_1 = (long)plVar17;
            param_1[1] = (ulong)plVar9 & 0xff | uVar11;
            param_1[2] = (long)plVar5;
            param_1[3] = (long)plVar4;
            param_1[5] = (long)plStack_258;
            param_1[4] = (long)plStack_260;
            param_1[7] = (long)plStack_248;
            param_1[6] = (long)plStack_250;
            param_1[8] = (long)plStack_240;
            return plVar7;
          }
        }
        goto LAB_105dcac20;
      }
      uStack_c0 = (long *)0x16;
      plVar9 = (long *)func_0x000108a492a4(lVar10,&uStack_c0);
    }
    goto LAB_105dca778;
  }
LAB_105dca764:
  uStack_c0 = (long *)0x3;
  plVar9 = (long *)func_0x000108a492a4(lVar10,&uStack_c0);
LAB_105dca778:
  plVar4 = plStack_228;
  plStack_188 = plStack_228;
  uStack_190 = plStack_230;
  plStack_178 = plStack_218;
  plStack_180 = plStack_220;
  plStack_168 = plStack_208;
  plStack_170 = plStack_210;
  plStack_158 = plStack_1f8;
  plStack_160 = plStack_200;
  plStack_150 = plStack_1f0;
  if (plStack_230 != (long *)0x8000000000000005) goto LAB_105dca7cc;
  plStack_148 = plVar9;
  FUN_105dc6d4c(plVar9);
  plVar17 = plVar9;
  plVar9 = plVar4;
  goto LAB_105dca7ac;
code_r0x000105dca754:
  uVar11 = uVar11 + 1;
  *(ulong *)(lVar10 + 0x28) = uVar11;
  if (*(ulong *)(lVar10 + 0x20) == uVar11) goto LAB_105dca764;
  goto LAB_105dca73c;
  while( true ) {
    uVar12 = uVar12 + 1;
    *(ulong *)(lVar10 + 0x28) = uVar12;
    if (uVar11 == uVar12) break;
LAB_105dcac54:
    bVar1 = *(byte *)(*plVar4 + uVar12);
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if (bVar1 == 0x5d) {
        plStack_1d8 = (long *)0x15;
        plVar9 = (long *)func_0x000108a492a4(lVar10,&plStack_1d8);
        goto LAB_105dca424;
      }
      break;
    }
  }
LAB_105dcada0:
  plStack_1d8 = (long *)0x16;
  plVar9 = (long *)func_0x000108a492a4(lVar10,&plStack_1d8);
LAB_105dca424:
  plVar4 = plStack_b8;
  plStack_188 = plStack_b8;
  uStack_190 = uStack_c0;
  plStack_178 = plStack_a8;
  plStack_180 = plStack_b0;
  plStack_168 = plStack_98;
  plStack_170 = plStack_a0;
  plStack_158 = plStack_88;
  plStack_160 = plStack_90;
  plStack_150 = plStack_80;
  if (uStack_c0 == (long *)0x8000000000000005) {
    plStack_148 = plVar9;
    FUN_105dc6d4c(plVar9);
    plVar17 = plVar9;
    plVar9 = plVar4;
LAB_105dca7ac:
    _free(plVar17);
  }
  else {
LAB_105dca7cc:
    plStack_148 = plVar9;
    FUN_105dc6c20(&uStack_190);
  }
LAB_105dcac20:
  plVar4 = (long *)func_0x000108a4a02c(plVar9,lVar10);
LAB_105dc9efc:
  *param_1 = -0x7ffffffffffffffb;
  param_1[1] = (long)plVar4;
  return plVar4;
}

