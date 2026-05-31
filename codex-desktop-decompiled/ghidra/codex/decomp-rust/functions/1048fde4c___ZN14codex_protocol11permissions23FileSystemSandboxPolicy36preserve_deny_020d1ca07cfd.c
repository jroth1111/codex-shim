
void __ZN14codex_protocol11permissions23FileSystemSandboxPolicy36preserve_deny_read_restrictions_from17hfa63de9a3ae3f531E
               (long *param_1,long *param_2,ulong param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  code *pcVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  char cVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *extraout_x8;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  long lVar28;
  long lVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong *puVar32;
  long *plVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  long lStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  
  lVar3 = param_2[3];
  lVar20 = param_2[4] * 0x38;
  lVar29 = lVar3 + lVar20;
  lVar28 = lVar3;
  do {
    if (lVar20 == 0) {
      cVar19 = (char)param_1[5];
      goto LAB_1048fdf80;
    }
    pcVar1 = (char *)(lVar28 + 0x30);
    lVar28 = lVar28 + 0x38;
    lVar20 = lVar20 + -0x38;
  } while (*pcVar1 != '\x02');
  cVar19 = (char)param_1[5];
  if (cVar19 == '\x01') {
    puVar15 = (undefined8 *)_malloc(0x38);
    if (puVar15 == (undefined8 *)0x0) {
      uVar16 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      FUN_1049a6a08(&uStack_98);
      auVar37 = __Unwind_Resume(uVar16);
      puVar15 = auVar37._0_8_;
      lVar28 = puVar15[4];
      if (lVar28 == 0) {
        lStack_1a0 = 8;
      }
      else {
        lStack_1a0 = _malloc(lVar28 * 0x38);
        if (lStack_1a0 == 0) {
          func_0x0001087c9084(8,lVar28 * 0x38);
LAB_1048fe838:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1048fe83c);
          (*pcVar13)();
        }
      }
      lVar3 = puVar15[2];
      puVar6 = (ulong *)puVar15[3];
      puVar4 = puVar6 + lVar28 * 7;
      lStack_180 = 0;
      puVar32 = puVar6;
      lStack_190 = lVar28;
      lStack_188 = lStack_1a0;
      puStack_178 = puVar6;
      lStack_168 = lVar3;
      puStack_160 = puVar4;
      if (lVar28 == 0) {
LAB_1048fe70c:
        if ((long)puVar4 - (long)puVar32 != 0) {
          uVar21 = (ulong)((long)puVar4 - (long)puVar32) / 0x38;
          do {
            uVar24 = *puVar32;
            lVar28 = uVar24 + 0x7ffffffffffffffb;
            if (uVar24 < 0x8000000000000005) {
              lVar28 = 2;
            }
            if ((lVar28 == 0) || (lVar28 == 1)) {
              uVar24 = puVar32[1];
joined_r0x0001048fe740:
              if (uVar24 != 0) {
                lVar28 = 0x10;
LAB_1048fe748:
                _free(*(undefined8 *)((long)puVar32 + lVar28));
              }
            }
            else {
              uVar25 = uVar24 ^ 0x8000000000000000;
              if (-1 < (long)uVar24) {
                uVar25 = 5;
              }
              if (uVar25 < 5) {
                if (uVar25 == 2) {
                  uVar24 = puVar32[1] & 0x7fffffffffffffff;
                  goto joined_r0x0001048fe740;
                }
              }
              else {
                if (uVar24 != 0) {
                  _free(puVar32[1]);
                }
                if ((puVar32[3] & 0x7fffffffffffffff) != 0) {
                  lVar28 = 0x20;
                  goto LAB_1048fe748;
                }
              }
            }
            puVar32 = puVar32 + 7;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      else {
        lVar28 = 0;
        plVar2 = (long *)(auVar37._8_8_ + 0x10);
        puVar31 = puVar6;
        do {
          puVar32 = puVar31 + 7;
          puVar27 = (ulong *)*puVar31;
          if (puVar27 == (ulong *)0x8000000000000007) goto LAB_1048fe70c;
          uVar9 = (undefined1)puVar31[6];
          uVar21 = (long)puVar27 + 0x7ffffffffffffffb;
          if (puVar27 < (ulong *)0x8000000000000005) {
            uVar21 = 2;
          }
          if (uVar21 == 0) {
            puStack_148 = (ulong *)puVar31[2];
            uStack_150 = puVar31[1];
            uStack_140 = puVar31[3];
            puStack_158 = (ulong *)0x8000000000000005;
            uStack_128 = uVar9;
            if (lVar28 == lStack_190) {
              func_0x0001089a4d98(&lStack_190);
            }
LAB_1048fe16c:
            lStack_1a0 = lStack_188;
            puVar22 = (undefined8 *)(lStack_188 + lVar28 * 0x38);
            puVar22[1] = uStack_150;
            *puVar22 = puStack_158;
            puVar22[3] = uStack_140;
            puVar22[2] = puStack_148;
            puVar22[5] = uStack_130;
            puVar22[4] = uStack_138;
            puVar22[6] = CONCAT71(uStack_127,uStack_128);
LAB_1048fe198:
            lVar28 = lVar28 + 1;
            lStack_180 = lVar28;
          }
          else {
            uVar24 = puVar31[1];
            puVar7 = (ulong *)puVar31[2];
            uVar25 = puVar31[3];
            puVar8 = (ulong *)puVar31[4];
            if (uVar21 == 1) {
              if (uVar25 < 0x16) {
LAB_1048fe518:
                puStack_158 = (ulong *)0x8000000000000006;
                uStack_150 = uVar24;
                puStack_148 = puVar7;
                uStack_140 = uVar25;
                uStack_128 = uVar9;
                if (lVar28 == lStack_190) {
                  func_0x0001089a4d98(&lStack_190);
                }
                goto LAB_1048fe16c;
              }
              uVar23 = (*puVar7 & 0xff00ff00ff00ff00) >> 8 | (*puVar7 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
              uVar26 = 0x636f6465782d7072;
              if (uVar23 == 0x636f6465782d7072) {
                uVar23 = (puVar7[1] & 0xff00ff00ff00ff00) >> 8 | (puVar7[1] & 0xff00ff00ff00ff) << 8
                ;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
                uVar26 = 0x6f6a6563742d726f;
                if (uVar23 != 0x6f6a6563742d726f) goto LAB_1048fe504;
                uVar23 = (*(ulong *)((long)puVar7 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
                         (*(ulong *)((long)puVar7 + 0xe) & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
                uVar26 = 0x726f6f74733a2f2f;
                if (uVar23 != 0x726f6f74733a2f2f) goto LAB_1048fe504;
              }
              else {
LAB_1048fe504:
                iVar14 = 1;
                if (uVar26 < uVar23) {
                  iVar14 = -1;
                }
                if (iVar14 != 0) goto LAB_1048fe518;
              }
              uVar23 = uVar24;
              if ((ulong)(lStack_190 - lVar28) < param_3) {
                FUN_1089a4f48(&lStack_190,lVar28,param_3,8,0x38);
                lVar28 = lStack_180;
              }
              else {
                lStack_1a0 = lStack_188;
                if (param_3 == 0) goto joined_r0x0001048fe66c;
              }
              lStack_1a0 = lStack_188;
              lVar29 = lVar28 * 0x38;
              plVar33 = plVar2;
              uVar26 = param_3;
              do {
                lVar20 = plVar33[-1];
                lVar5 = *plVar33;
                __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                          (&lStack_120,(long)puVar7 + 0x16,uVar25 - 0x16);
                uVar16 = uStack_118;
                __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                          (&puStack_158,uStack_118,uStack_110,lVar20,lVar5);
                puVar12 = puStack_148;
                uVar10 = uStack_150;
                puVar31 = puStack_158;
                if (lStack_120 != 0) {
                  _free(uVar16);
                }
                __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                          (&puStack_158,uVar10,puVar12);
                puVar12 = puStack_148;
                uVar11 = uStack_150;
                uVar18 = uStack_150;
                puVar30 = puStack_158;
                if (puStack_158 == (ulong *)0x8000000000000000) {
                  if (puStack_148 == (ulong *)0x0) {
                    uVar18 = 1;
                  }
                  else {
                    uVar18 = _malloc(puStack_148);
                    if (uVar18 == 0) {
                      func_0x0001087c9084(1,puVar12);
                      goto LAB_1048fe838;
                    }
                  }
                  _memcpy(uVar18,uVar11,puVar12);
                  puVar30 = puVar12;
                }
                if (puVar31 != (ulong *)0x0) {
                  _free(uVar10);
                }
                plVar33 = plVar33 + 3;
                puVar22 = (undefined8 *)(lStack_1a0 + lVar29);
                *puVar22 = 0x8000000000000006;
                puVar22[1] = puVar30;
                puVar22[2] = uVar18;
                puVar22[3] = puVar12;
                lVar28 = lVar28 + 1;
                lVar29 = lVar29 + 0x38;
                *(undefined1 *)(puVar22 + 6) = uVar9;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            else {
              if (puVar27 != (ulong *)0x8000000000000002) {
                uStack_130 = puVar31[5];
                uStack_138 = puVar31[4];
                puStack_158 = puVar27;
                uStack_150 = uVar24;
                puStack_148 = puVar7;
                uStack_140 = uVar25;
                uStack_128 = uVar9;
                if (lVar28 == lStack_190) {
                  func_0x0001089a4d98(&lStack_190);
                  lStack_1a0 = lStack_188;
                }
                puVar22 = (undefined8 *)(lStack_1a0 + lVar28 * 0x38);
                puVar22[6] = CONCAT71(uStack_127,uStack_128);
                puVar22[3] = uStack_140;
                puVar22[2] = puStack_148;
                puVar22[5] = uStack_130;
                puVar22[4] = uStack_138;
                puVar22[1] = uStack_150;
                *puVar22 = puStack_158;
                goto LAB_1048fe198;
              }
              if ((ulong)(lStack_190 - lVar28) < param_3) {
                FUN_1089a4f48(&lStack_190,lVar28,param_3,8,0x38);
                lStack_1a0 = lStack_188;
                lVar28 = lStack_180;
                if (uVar24 == 0x8000000000000000) goto LAB_1048fe28c;
LAB_1048fe5b8:
                lVar29 = lVar28 * 0x38;
                uVar23 = param_3;
                plVar33 = plVar2;
                do {
                  lVar20 = plVar33[-1];
                  lVar5 = *plVar33;
                  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                            (&lStack_120,puVar7,uVar25);
                  uVar16 = uStack_118;
                  __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                            (&puStack_158,uStack_118,uStack_110,lVar20,lVar5);
                  puVar12 = puStack_148;
                  uVar26 = uStack_150;
                  puVar31 = puStack_158;
                  if (lStack_120 != 0) {
                    _free(uVar16);
                  }
                  plVar33 = plVar33 + 3;
                  puVar22 = (undefined8 *)(lStack_1a0 + lVar29);
                  *puVar22 = 0x8000000000000005;
                  puVar22[1] = puVar31;
                  puVar22[2] = uVar26;
                  puVar22[3] = puVar12;
                  lVar28 = lVar28 + 1;
                  lVar29 = lVar29 + 0x38;
                  *(undefined1 *)(puVar22 + 6) = uVar9;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
              else if (param_3 != 0) {
                if (uVar24 != 0x8000000000000000) goto LAB_1048fe5b8;
LAB_1048fe28c:
                lVar29 = lVar28 * 0x38;
                uVar23 = param_3;
                plVar33 = plVar2;
                do {
                  lVar20 = plVar33[-1];
                  lVar5 = *plVar33;
                  if (lVar5 == 0) {
                    lVar17 = 1;
                  }
                  else {
                    lVar17 = _malloc(lVar5);
                    if (lVar17 == 0) {
                      puStack_170 = puVar32;
                      func_0x0001087c9084(1,lVar5);
                      goto LAB_1048fe838;
                    }
                  }
                  plVar33 = plVar33 + 3;
                  _memcpy(lVar17,lVar20,lVar5);
                  puVar22 = (undefined8 *)(lStack_1a0 + lVar29);
                  *puVar22 = 0x8000000000000005;
                  puVar22[1] = lVar5;
                  puVar22[2] = lVar17;
                  puVar22[3] = lVar5;
                  lVar28 = lVar28 + 1;
                  lVar29 = lVar29 + 0x38;
                  *(undefined1 *)(puVar22 + 6) = uVar9;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
              uVar23 = uVar24 & 0x7fffffffffffffff;
            }
joined_r0x0001048fe66c:
            lStack_180 = lVar28;
            if (uVar23 != 0) {
              _free(puVar7);
            }
            if ((puVar27 != (ulong *)0x8000000000000002) && (1 < uVar21)) {
              uVar21 = (ulong)puVar27 ^ 0x8000000000000000;
              if (-1 < (long)puVar27) {
                uVar21 = 5;
              }
              if (uVar21 < 5) {
                uVar25 = uVar24;
                if (uVar21 != 2) goto LAB_1048fe1a0;
              }
              else {
                puVar7 = puVar8;
                if (puVar27 != (ulong *)0x0) {
                  _free(uVar24);
                }
              }
              if ((uVar25 & 0x7fffffffffffffff) != 0) {
                _free(puVar7);
              }
            }
          }
LAB_1048fe1a0:
          puVar31 = puVar32;
        } while (puVar32 != puVar4);
      }
      if (lVar3 != 0) {
        _free(puVar6);
      }
      puVar15[3] = lStack_188;
      puVar15[2] = lStack_190;
      puVar15[4] = lStack_180;
      uVar16 = *puVar15;
      uVar36 = puVar15[3];
      uVar35 = puVar15[2];
      extraout_x8[1] = puVar15[1];
      *extraout_x8 = uVar16;
      extraout_x8[3] = uVar36;
      extraout_x8[2] = uVar35;
      uVar16 = puVar15[4];
      extraout_x8[5] = puVar15[5];
      extraout_x8[4] = uVar16;
      return;
    }
    *puVar15 = 0x8000000000000000;
    *(undefined1 *)(puVar15 + 6) = 1;
    puVar4 = (ulong *)param_1[3];
    puVar32 = puVar4;
    for (lVar28 = param_1[4]; lVar28 != 0; lVar28 = lVar28 + -1) {
      uVar21 = *puVar32;
      lVar20 = uVar21 + 0x7ffffffffffffffb;
      if (uVar21 < 0x8000000000000005) {
        lVar20 = 2;
      }
      if ((lVar20 == 0) || (lVar20 == 1)) {
        uVar21 = puVar32[1];
joined_r0x0001048fdef4:
        if (uVar21 != 0) {
          lVar20 = 0x10;
LAB_1048fdefc:
          _free(*(undefined8 *)((long)puVar32 + lVar20));
        }
      }
      else {
        uVar24 = uVar21 ^ 0x8000000000000000;
        if (-1 < (long)uVar21) {
          uVar24 = 5;
        }
        if (uVar24 < 5) {
          if (uVar24 == 2) {
            uVar21 = puVar32[1] & 0x7fffffffffffffff;
            goto joined_r0x0001048fdef4;
          }
        }
        else {
          if (uVar21 != 0) {
            _free(puVar32[1]);
          }
          if ((puVar32[3] & 0x7fffffffffffffff) != 0) {
            lVar20 = 0x20;
            goto LAB_1048fdefc;
          }
        }
      }
      puVar32 = puVar32 + 7;
    }
    if (param_1[2] != 0) {
      _free(puVar4);
    }
    *param_1 = 0;
    param_1[2] = 1;
    param_1[3] = (long)puVar15;
    param_1[4] = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
LAB_1048fdf80:
    if (cVar19 != '\0') {
      return;
    }
    if (*param_1 != 0) goto LAB_1048fe00c;
  }
  lVar28 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar28;
LAB_1048fe00c:
  do {
    do {
      lVar28 = lVar3;
      if (lVar28 == lVar29) {
        return;
      }
      lVar3 = lVar28 + 0x38;
    } while (*(char *)(lVar28 + 0x30) != '\x02');
    lVar20 = param_1[3];
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      lVar34 = lVar5 * 0x38;
      lVar17 = lVar20;
      do {
        iVar14 = FUN_1049d2d8c(lVar17,lVar28);
        if ((iVar14 != 0) && (*(char *)(lVar17 + 0x30) == *(char *)(lVar28 + 0x30)))
        goto LAB_1048fe00c;
        lVar17 = lVar17 + 0x38;
        lVar34 = lVar34 + -0x38;
      } while (lVar34 != 0);
    }
    FUN_1049d0944(&uStack_98,lVar28);
    uStack_68 = *(undefined1 *)(lVar28 + 0x30);
    if (lVar5 == param_1[2]) {
      func_0x0001089a4d98(param_1 + 2);
      lVar20 = param_1[3];
    }
    puVar15 = (undefined8 *)(lVar20 + lVar5 * 0x38);
    puVar15[1] = uStack_90;
    *puVar15 = uStack_98;
    puVar15[3] = uStack_80;
    puVar15[2] = uStack_88;
    puVar15[5] = uStack_70;
    puVar15[4] = uStack_78;
    puVar15[6] = CONCAT71(uStack_67,uStack_68);
    param_1[4] = lVar5 + 1;
  } while( true );
}

