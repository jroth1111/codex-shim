
void FUN_102ae0a80(undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  code *pcVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  long lVar30;
  int *unaff_x23;
  int *piVar31;
  long lVar32;
  int *unaff_x24;
  long *plVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_1f8;
  int *piStack_1e8;
  int *piStack_1e0;
  int *piStack_1d8;
  int *piStack_1d0;
  int *piStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  int *piStack_1b0;
  int *piStack_1a8;
  int *piStack_1a0;
  int *piStack_198;
  int *piStack_190;
  int *piStack_188;
  int *piStack_180;
  int *piStack_178;
  int *piStack_170;
  int *piStack_168;
  int *piStack_160;
  int *piStack_158;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  int *piStack_130;
  int *piStack_128;
  int *piStack_120;
  int *piStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f0;
  int *piStack_e8;
  int *piStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (*param_2 == 1) {
    uVar22 = *(undefined8 *)(param_2 + 0x22);
    piVar26 = *(int **)(param_2 + 0x24);
    if (piVar26 == (int *)0x0) {
      piVar18 = (int *)0x1;
    }
    else {
      piVar18 = (int *)_malloc(piVar26);
      if (piVar18 == (int *)0x0) {
        func_0x0001087c9084(1,piVar26);
LAB_102ae1450:
        func_0x0001087c9084(1,unaff_x23);
        piVar31 = param_2;
LAB_102ae145c:
        func_0x0001087c9084(8,piVar31);
        goto LAB_102ae1490;
      }
    }
    _memcpy(piVar18,uVar22,piVar26);
    piVar31 = (int *)0x8000000000000000;
    if (*(long *)(param_2 + 0x1a) == -0x8000000000000000) {
      if (*(long *)(param_2 + 2) != 0) goto LAB_102ae0b24;
LAB_102ae0dbc:
      piStack_f0 = (int *)0x0;
      piStack_1b0 = (int *)0x0;
      if (*(long *)(param_2 + 0xe) != 0) goto LAB_102ae0dcc;
    }
    else {
      uVar22 = *(undefined8 *)(param_2 + 0x1c);
      piVar31 = *(int **)(param_2 + 0x1e);
      if (piVar31 == (int *)0x0) {
        unaff_x24 = (int *)0x1;
      }
      else {
        unaff_x24 = (int *)_malloc(piVar31);
        if (unaff_x24 == (int *)0x0) {
          func_0x0001087c9084(1,piVar31);
          goto LAB_102ae1490;
        }
      }
      _memcpy(unaff_x24,uVar22,piVar31);
      if (*(long *)(param_2 + 2) == 0) goto LAB_102ae0dbc;
LAB_102ae0b24:
      func_0x000102ae34a4(&piStack_1e8);
      piStack_e8 = piStack_1e0;
      piStack_f0 = piStack_1e8;
      piStack_d8 = piStack_1d0;
      piStack_e0 = piStack_1d8;
      piStack_c8 = piStack_1c0;
      piStack_d0 = piStack_1c8;
      if (*(long *)(param_2 + 0xe) == 0) {
        piStack_1b0 = (int *)0x0;
      }
      else {
LAB_102ae0dcc:
        func_0x000102ae34a4(&piStack_1e8);
        piStack_b8 = piStack_1d8;
        piStack_c0 = piStack_1e0;
        piStack_a8 = piStack_1c8;
        piStack_b0 = piStack_1d0;
        piStack_a0 = piStack_1c0;
        piStack_1b0 = piStack_1e8;
      }
    }
    piStack_188 = piStack_a0;
    piStack_190 = piStack_a8;
    piStack_198 = piStack_b0;
    piStack_1a0 = piStack_b8;
    piStack_1a8 = piStack_c0;
    piStack_1e8 = (int *)0x1;
    piStack_180 = piVar31;
    piStack_178 = unaff_x24;
    piStack_170 = piVar31;
    piStack_168 = piVar26;
    piStack_160 = piVar18;
    piStack_158 = piVar26;
    if (*(long *)(param_2 + 0x26) == -0x8000000000000000) goto LAB_102ae0e38;
LAB_102ae0eb4:
    uVar22 = *(undefined8 *)(param_2 + 0x28);
    lVar32 = *(long *)(param_2 + 0x2a);
    piStack_1e0 = piStack_f0;
    piStack_1d8 = piStack_e8;
    piStack_1d0 = piStack_e0;
    piStack_1c8 = piStack_d8;
    piStack_1c0 = piStack_d0;
    piStack_1b8 = piStack_c8;
    if (lVar32 == 0) {
      lStack_238 = 1;
    }
    else {
      lStack_238 = _malloc(lVar32);
      if (lStack_238 == 0) {
        func_0x0001087c9084(1,lVar32);
        goto LAB_102ae1490;
      }
    }
    _memcpy(lStack_238,uVar22,lVar32);
  }
  else {
    uVar22 = *(undefined8 *)(param_2 + 0x16);
    unaff_x23 = *(int **)(param_2 + 0x18);
    if (unaff_x23 == (int *)0x0) {
      piVar26 = (int *)0x1;
    }
    else {
      piVar26 = (int *)_malloc(unaff_x23);
      if (piVar26 == (int *)0x0) goto LAB_102ae1450;
    }
    _memcpy(piVar26,uVar22,unaff_x23);
    FUN_102a4a72c(&piStack_110,*(undefined8 *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x1e));
    if (*(long *)(param_2 + 2) == 0) {
      piStack_f0 = (int *)0x0;
      piVar18 = *(int **)(param_2 + 0x24);
      if (piVar18 == (int *)0x0) goto LAB_102ae0d34;
LAB_102ae0bc8:
      lVar32 = *(long *)(param_2 + 0x22);
      piVar31 = (int *)((long)piVar18 * 0x30);
      piVar19 = (int *)_malloc(piVar31);
      if (piVar19 == (int *)0x0) goto LAB_102ae145c;
      unaff_x24 = (int *)0x0;
      piVar29 = (int *)0x0;
      puVar20 = param_1;
      piStack_1e8 = piVar18;
      piStack_1e0 = piVar19;
      do {
        if (piVar31 == unaff_x24) break;
        if (*(long *)(lVar32 + (long)unaff_x24) == -0x8000000000000000) {
          uVar22 = *(undefined8 *)((long)unaff_x24 + lVar32 + 0x10);
          lVar35 = *(long *)((long)unaff_x24 + lVar32 + 0x18);
          if (lVar35 == 0) {
            lVar36 = 1;
          }
          else {
            lVar36 = _malloc(lVar35);
            if (lVar36 == 0) {
LAB_102ae1424:
              func_0x0001087c9084(1,lVar35);
              goto LAB_102ae1490;
            }
          }
          _memcpy(lVar36,uVar22,lVar35);
          lVar30 = -0x8000000000000000;
          lVar23 = lVar35;
        }
        else {
          uVar22 = *(undefined8 *)((long)unaff_x24 + lVar32 + 8);
          lVar30 = *(long *)((long)unaff_x24 + lVar32 + 0x10);
          if (lVar30 == 0) {
            lVar23 = 1;
          }
          else {
            lVar23 = _malloc(lVar30);
            lVar35 = lVar30;
            if (lVar23 == 0) goto LAB_102ae1424;
          }
          _memcpy(lVar23,uVar22,lVar30);
          lVar35 = -0x8000000000000000;
          lVar36 = lVar30;
          if (*(long *)((long)unaff_x24 + lVar32 + 0x18) != -0x8000000000000000) {
            uVar22 = *(undefined8 *)((long)unaff_x24 + lVar32 + 0x20);
            lVar35 = *(long *)((long)unaff_x24 + lVar32 + 0x28);
            if (lVar35 == 0) {
              puVar20 = (undefined8 *)0x1;
            }
            else {
              puVar20 = (undefined8 *)_malloc(lVar35);
              if (puVar20 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,lVar35);
                goto LAB_102ae1490;
              }
            }
            _memcpy(puVar20,uVar22);
            lStack_1f8 = lVar35;
          }
        }
        piVar29 = (int *)((long)piVar29 + 1);
        plVar33 = (long *)((long)piVar19 + (long)unaff_x24);
        *plVar33 = lVar30;
        plVar33[1] = lVar23;
        plVar33[2] = lVar36;
        plVar33[3] = lVar35;
        unaff_x24 = unaff_x24 + 0xc;
        plVar33[4] = (long)puVar20;
        plVar33[5] = lStack_1f8;
      } while (piVar18 != piVar29);
    }
    else {
      func_0x000102ae34a4(&piStack_1e8);
      piStack_e8 = piStack_1e0;
      piStack_f0 = piStack_1e8;
      piStack_d8 = piStack_1d0;
      piStack_e0 = piStack_1d8;
      piStack_c8 = piStack_1c0;
      piStack_d0 = piStack_1c8;
      piVar18 = *(int **)(param_2 + 0x24);
      if (piVar18 != (int *)0x0) goto LAB_102ae0bc8;
LAB_102ae0d34:
      piStack_1e8 = (int *)0x0;
      piStack_1e0 = (int *)0x8;
    }
    piStack_b8 = piStack_1e0;
    piStack_c0 = piStack_1e8;
    piVar31 = (int *)0x8000000000000000;
    piStack_b0 = piVar18;
    if (*(long *)(param_2 + 0xe) != -0x8000000000000000) {
      uVar22 = *(undefined8 *)(param_2 + 0x10);
      piVar31 = *(int **)(param_2 + 0x12);
      if (piVar31 == (int *)0x0) {
        unaff_x24 = (int *)0x1;
      }
      else {
        unaff_x24 = (int *)_malloc(piVar31);
        if (unaff_x24 == (int *)0x0) {
          func_0x0001087c9084(1,piVar31);
          goto LAB_102ae1490;
        }
      }
      _memcpy(unaff_x24,uVar22,piVar31);
    }
    piStack_178 = piStack_108;
    piStack_180 = piStack_110;
    piStack_170 = piStack_100;
    piStack_160 = piStack_b8;
    piStack_168 = piStack_c0;
    piStack_158 = piStack_b0;
    piStack_1e8 = (int *)0x0;
    piStack_1b0 = piVar31;
    piStack_1a8 = unaff_x24;
    piStack_1a0 = piVar31;
    piStack_198 = unaff_x23;
    piStack_190 = piVar26;
    piStack_188 = unaff_x23;
    if (*(long *)(param_2 + 0x26) != -0x8000000000000000) goto LAB_102ae0eb4;
LAB_102ae0e38:
    lVar32 = -0x8000000000000000;
    piStack_1e0 = piStack_f0;
    piStack_1d8 = piStack_e8;
    piStack_1d0 = piStack_e0;
    piStack_1c8 = piStack_d8;
    piStack_1c0 = piStack_d0;
    piStack_1b8 = piStack_c8;
  }
  iVar15 = param_2[0x6a];
  uVar9 = *(undefined *)((long)param_2 + 0x1a9);
  uVar10 = *(undefined *)((long)param_2 + 0x1aa);
  if (*(long *)(param_2 + 0x4a) == -0x7ffffffffffffff9) {
    piStack_f0 = (int *)0x8000000000000007;
  }
  else {
    piVar26 = (int *)0x8000000000000006;
    if (*(long *)(param_2 + 0x4a) != -0x7ffffffffffffffa) {
      FUN_102b63778(&piStack_f0,param_2 + 0x4a);
      piStack_b8 = piStack_e0;
      piStack_c0 = piStack_e8;
      piStack_a8 = piStack_d0;
      piStack_b0 = piStack_d8;
      piStack_a0 = piStack_c8;
      piVar26 = piStack_f0;
    }
    piStack_e0 = piStack_b8;
    piStack_e8 = piStack_c0;
    piStack_d0 = piStack_a8;
    piStack_d8 = piStack_b0;
    piStack_c8 = piStack_a0;
    piStack_f0 = piVar26;
  }
  iVar7 = param_2[0x58];
  uVar24 = *(undefined8 *)(param_2 + 0x56);
  iVar8 = param_2[0x5c];
  uVar22 = *(undefined8 *)(param_2 + 0x5a);
  uVar11 = *(undefined *)((long)param_2 + 0x1ab);
  if (*(long *)(param_2 + 0x2c) == -0x8000000000000000) {
    piStack_150 = (int *)0x8000000000000000;
    if (*(long *)(param_2 + 0x32) == -0x8000000000000000) goto LAB_102ae0fa8;
LAB_102ae107c:
    FUN_102a4a72c(&piStack_c0,*(undefined8 *)(param_2 + 0x34),*(undefined8 *)(param_2 + 0x36));
    piStack_128 = piStack_b8;
    piStack_130 = piStack_c0;
    piStack_120 = piStack_b0;
    if (*(long *)(param_2 + 0x38) != -0x8000000000000000) goto LAB_102ae10ac;
LAB_102ae0fc0:
    piStack_110 = (int *)0x8000000000000000;
    lVar30 = *(long *)(param_2 + 0x44);
    if (lVar30 < -0x7ffffffffffffffe) goto LAB_102ae0fd4;
LAB_102ae10d8:
    uVar4 = *(undefined8 *)(param_2 + 0x46);
    lVar30 = *(long *)(param_2 + 0x48);
    if (lVar30 == 0) {
      lStack_248 = 1;
    }
    else {
      lStack_248 = _malloc();
      if (lStack_248 == 0) {
        func_0x0001087c9084(1,lVar30);
        goto LAB_102ae1490;
      }
    }
    _memcpy(lStack_248,uVar4,lVar30);
    if (*(long *)(param_2 + 0x3e) != -0x8000000000000000) goto LAB_102ae1144;
LAB_102ae0fe4:
    lStack_1f8 = -0x8000000000000000;
    uVar4 = *(undefined8 *)(param_2 + 0x66);
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    piVar26 = *(int **)(param_2 + 0x60);
  }
  else {
    FUN_102a4a72c(&piStack_c0,*(undefined8 *)(param_2 + 0x2e),*(undefined8 *)(param_2 + 0x30));
    piStack_148 = piStack_b8;
    piStack_150 = piStack_c0;
    piStack_140 = piStack_b0;
    if (*(long *)(param_2 + 0x32) != -0x8000000000000000) goto LAB_102ae107c;
LAB_102ae0fa8:
    piStack_130 = (int *)0x8000000000000000;
    if (*(long *)(param_2 + 0x38) == -0x8000000000000000) goto LAB_102ae0fc0;
LAB_102ae10ac:
    FUN_102a4a72c(&piStack_c0,*(undefined8 *)(param_2 + 0x3a),*(undefined8 *)(param_2 + 0x3c));
    piStack_108 = piStack_b8;
    piStack_110 = piStack_c0;
    piStack_100 = piStack_b0;
    lVar30 = *(long *)(param_2 + 0x44);
    if (-0x7fffffffffffffff < lVar30) goto LAB_102ae10d8;
LAB_102ae0fd4:
    if (*(long *)(param_2 + 0x3e) == -0x8000000000000000) goto LAB_102ae0fe4;
LAB_102ae1144:
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    lStack_1f8 = *(long *)(param_2 + 0x42);
    if (lStack_1f8 == 0) {
      lStack_240 = 1;
    }
    else {
      lStack_240 = _malloc(lStack_1f8);
      if (lStack_240 == 0) {
        func_0x0001087c9084(1,lStack_1f8);
        goto LAB_102ae1490;
      }
    }
    _memcpy(lStack_240,uVar4,lStack_1f8);
    uVar4 = *(undefined8 *)(param_2 + 0x66);
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    piVar26 = *(int **)(param_2 + 0x60);
  }
  if (piVar26 == (int *)0x0) {
    piStack_88 = (int *)0x0;
    piStack_90 = (int *)&UNK_108c56c70;
    lStack_78 = 0;
    uStack_80 = 0;
    goto LAB_102ae1308;
  }
  puVar1 = (undefined *)((long)piVar26 + 1);
  if ((ulong)puVar1 >> 0x3b == 0) {
    puVar2 = (undefined *)((long)piVar26 + 9);
    puVar3 = puVar2 + (long)puVar1 * 0x20;
    if ((!CARRY8((long)puVar1 * 0x20,(ulong)puVar2)) && (puVar3 < (undefined *)0x7ffffffffffffff9))
    {
      if (puVar3 == (undefined *)0x0) {
        piVar18 = (int *)0x8;
LAB_102ae11d8:
        piVar18 = piVar18 + (long)puVar1 * 8;
        piStack_b0 = piVar26;
        if ((int *)0x7 < piVar26) {
          piStack_b0 = (int *)(((ulong)puVar1 >> 3) * 7);
        }
        piStack_a8 = (int *)0x0;
        plVar33 = *(long **)(param_2 + 0x5e);
        piStack_c0 = piVar18;
        piStack_b8 = piVar26;
        _memcpy(piVar18,plVar33,puVar2);
        lVar23 = *(long *)(param_2 + 100);
        if (lVar23 != 0) {
          plVar34 = plVar33 + 1;
          lVar35 = *plVar33;
          uVar28 = CONCAT17(-(-1 < lVar35),
                            CONCAT16(-(-1 < (char)((ulong)lVar35 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar35 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar35 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar35 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar35 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar35 >> 8)),
                                                           -(-1 < (char)lVar35)))))))) &
                   0x8080808080808080;
          plVar14 = plVar33;
          lVar35 = lVar23;
          do {
            while (uVar28 == 0) {
              lVar36 = *plVar34;
              plVar14 = plVar14 + -0x20;
              plVar34 = plVar34 + 1;
              uVar28 = CONCAT17(-(-1 < lVar36),
                                CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar36 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar36 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8)),
                                                           -(-1 < (char)lVar36)))))))) &
                       0x8080808080808080;
            }
            uVar13 = (uVar28 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar28 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            lVar27 = (long)plVar14 + (LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) & 0x78U) * -4;
            uVar5 = *(undefined8 *)(lVar27 + -0x18);
            lVar36 = *(long *)(lVar27 + -0x10);
            if (lVar36 == 0) {
              lVar21 = 1;
            }
            else {
              lVar21 = _malloc(lVar36);
              if (lVar21 == 0) {
                func_0x0001087c9084(1,lVar36);
                goto LAB_102ae1490;
              }
            }
            _memcpy(lVar21,uVar5,lVar36);
            uVar28 = uVar28 - 1 & uVar28;
            uVar12 = *(undefined1 *)(lVar27 + -8);
            plVar25 = (long *)((long)piVar18 + (-0x20 - ((long)plVar33 - lVar27)));
            *plVar25 = lVar36;
            plVar25[1] = lVar21;
            plVar25[2] = lVar36;
            *(undefined1 *)(plVar25 + 3) = uVar12;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        uStack_80 = *(undefined8 *)(param_2 + 0x62);
        piStack_88 = piStack_b8;
        piStack_90 = piStack_c0;
        lStack_78 = lVar23;
LAB_102ae1308:
        param_1[0xd] = piStack_180;
        param_1[0xc] = piStack_188;
        param_1[0xf] = piStack_170;
        param_1[0xe] = piStack_178;
        param_1[0x11] = piStack_160;
        param_1[0x10] = piStack_168;
        param_1[5] = piStack_1c0;
        param_1[4] = piStack_1c8;
        param_1[7] = piStack_1b0;
        param_1[6] = piStack_1b8;
        param_1[9] = piStack_1a0;
        param_1[8] = piStack_1a8;
        param_1[0xb] = piStack_190;
        param_1[10] = piStack_198;
        param_1[1] = piStack_1e0;
        *param_1 = piStack_1e8;
        param_1[3] = piStack_1d0;
        param_1[2] = piStack_1d8;
        param_1[0x12] = piStack_158;
        param_1[0x13] = lVar32;
        param_1[0x14] = lStack_238;
        param_1[0x15] = lVar32;
        *(char *)(param_1 + 0x35) = (char)iVar15;
        *(undefined1 *)((long)param_1 + 0x1a9) = uVar9;
        *(undefined1 *)((long)param_1 + 0x1aa) = uVar10;
        param_1[0x26] = piStack_e8;
        param_1[0x25] = piStack_f0;
        param_1[0x28] = piStack_d8;
        param_1[0x27] = piStack_e0;
        param_1[0x2a] = piStack_c8;
        param_1[0x29] = piStack_d0;
        param_1[0x2b] = uVar24;
        *(int *)(param_1 + 0x2c) = iVar7;
        param_1[0x2d] = uVar22;
        *(int *)(param_1 + 0x2e) = iVar8;
        *(undefined1 *)((long)param_1 + 0x1ab) = uVar11;
        param_1[0x18] = piStack_140;
        param_1[0x17] = piStack_148;
        param_1[0x16] = piStack_150;
        param_1[0x1b] = piStack_120;
        param_1[0x1a] = piStack_128;
        param_1[0x19] = piStack_130;
        param_1[0x1d] = piStack_108;
        param_1[0x1c] = piStack_110;
        param_1[0x22] = lVar30;
        param_1[0x23] = lStack_248;
        param_1[0x24] = lVar30;
        param_1[0x1e] = piStack_100;
        param_1[0x1f] = lStack_1f8;
        param_1[0x20] = lStack_240;
        param_1[0x21] = lStack_1f8;
        param_1[0x30] = piStack_88;
        param_1[0x2f] = piStack_90;
        param_1[0x32] = lStack_78;
        param_1[0x31] = uStack_80;
        param_1[0x33] = uVar4;
        param_1[0x34] = uVar6;
        return;
      }
      if (puVar3 < (undefined *)0x8) {
        piStack_c0 = (int *)0x0;
        iVar17 = _posix_memalign(&piStack_c0,8,puVar3);
        piVar18 = piStack_c0;
        if (iVar17 == 0) goto LAB_102ae11d4;
      }
      else {
        piVar18 = (int *)_malloc(puVar3);
LAB_102ae11d4:
        if (piVar18 != (int *)0x0) goto LAB_102ae11d8;
      }
      func_0x0001087c906c(8,puVar3);
      goto LAB_102ae1490;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
LAB_102ae1490:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x102ae1494);
  (*pcVar16)();
}

