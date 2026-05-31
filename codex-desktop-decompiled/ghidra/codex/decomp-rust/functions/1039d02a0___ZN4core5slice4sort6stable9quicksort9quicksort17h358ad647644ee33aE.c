
/* WARNING: Type propagation algorithm not settling */

void __ZN4core5slice4sort6stable9quicksort9quicksort17h358ad647644ee33aE
               (long *param_1,ulong param_2,long *param_3,ulong param_4,int param_5,
               undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *extraout_x1;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 (*pauVar19) [16];
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 *puStack_138;
  ulong uStack_130;
  ulong uStack_120;
  long *plStack_110;
  long lStack_108;
  ulong uStack_100;
  long *plStack_f8;
  long lStack_f0;
  char *pcStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined2 uStack_b0;
  undefined1 uStack_ae;
  char *pcStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  
  puStack_138 = param_6;
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        func_0x0001039cfa84(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      plVar28 = param_1 + (param_2 >> 3) * 4;
      plVar25 = param_1 + (param_2 >> 3) * 7;
      if (param_2 < 0x40) {
        lVar27 = *param_1;
        lVar23 = *plVar28;
        iVar11 = func_0x0001039d29fc(lVar27,lVar23);
        lVar22 = *plVar25;
        iVar10 = func_0x0001039d29fc(lVar27,lVar22);
        plVar13 = param_1;
        if ((iVar11 == iVar10) &&
           (iVar10 = func_0x0001039d29fc(lVar23,lVar22), plVar13 = plVar25, iVar11 == iVar10)) {
          plVar13 = plVar28;
        }
      }
      else {
        plVar13 = (long *)FUN_1039cf408(param_1,plVar28,plVar25);
      }
      param_5 = param_5 + -1;
      uVar16 = (long)plVar13 - (long)param_1;
      uStack_120 = uVar16 >> 3;
      lStack_f0 = *plVar13;
      plStack_f8 = param_3 + param_2;
      uStack_130 = CONCAT44(uStack_130._4_4_,param_5);
      if ((puStack_138 == (undefined8 *)0x0) ||
         (iVar11 = func_0x0001039d29fc(*puStack_138), plVar25 = param_1, iVar11 != 0)) {
        if (param_2 <= param_4) {
          uVar24 = 0;
          lVar22 = 0;
          if (2 < uStack_120) {
            lVar22 = uStack_120 - 3;
          }
          plVar25 = param_1 + lVar22;
          plVar28 = plStack_f8;
          plVar13 = param_1;
          uStack_100 = uStack_120;
          if (plVar25 <= param_1) goto LAB_1039d07c8;
LAB_1039d0410:
          lVar22 = *(long *)((long)param_1 + uVar16);
          do {
            lVar27 = *plVar13;
            uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
            uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
            cVar9 = uVar12 < uVar2;
            if (uVar2 < uVar12) {
              cVar9 = -1;
            }
            if (uVar2 == uVar12) {
              uVar21 = *(ulong *)(lVar27 + 0x10);
              uVar15 = *(ulong *)(lVar22 + 0x10);
              uVar17 = uVar21;
              if (uVar15 <= uVar21) {
                uVar17 = uVar15;
              }
              iVar11 = _memcmp(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar22 + 8),uVar17);
              lVar23 = uVar21 - uVar15;
              if (iVar11 != 0) {
                lVar23 = (long)iVar11;
              }
              cVar9 = 0 < lVar23;
              if (lVar23 < 0) {
                cVar9 = -1;
              }
            }
            if (cVar9 == '\0') {
              pcStack_e8 = *(char **)(lVar27 + 0x38);
              lStack_e0 = *(long *)(lVar27 + 0x40);
              if (lStack_e0 == 0) {
                uStack_ae = false;
              }
              else {
                uStack_ae = *pcStack_e8 == '/';
              }
              pcStack_a8 = *(char **)(lVar22 + 0x38);
              lStack_a0 = *(long *)(lVar22 + 0x40);
              uStack_d8 = 6;
              uStack_b0 = 0x201;
              if (lStack_a0 == 0) {
                uStack_6e = false;
              }
              else {
                uStack_6e = *pcStack_a8 == '/';
              }
              uStack_98 = 6;
              uStack_70 = 0x201;
              cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
            }
            plVar18 = param_3;
            if (cVar9 != -1) {
              plVar18 = plVar28 + -1;
            }
            plVar18[uVar24] = lVar27;
            if (cVar9 == -1) {
              uVar24 = uVar24 + 1;
            }
            lVar27 = plVar13[1];
            uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
            uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
            cVar9 = uVar12 < uVar2;
            if (uVar2 < uVar12) {
              cVar9 = -1;
            }
            if (uVar2 == uVar12) {
              uVar21 = *(ulong *)(lVar27 + 0x10);
              uVar15 = *(ulong *)(lVar22 + 0x10);
              uVar17 = uVar21;
              if (uVar15 <= uVar21) {
                uVar17 = uVar15;
              }
              iVar11 = _memcmp(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar22 + 8),uVar17);
              lVar23 = uVar21 - uVar15;
              if (iVar11 != 0) {
                lVar23 = (long)iVar11;
              }
              cVar9 = 0 < lVar23;
              if (lVar23 < 0) {
                cVar9 = -1;
              }
            }
            if (cVar9 == '\0') {
              pcStack_e8 = *(char **)(lVar27 + 0x38);
              lStack_e0 = *(long *)(lVar27 + 0x40);
              if (lStack_e0 == 0) {
                uStack_ae = false;
              }
              else {
                uStack_ae = *pcStack_e8 == '/';
              }
              pcStack_a8 = *(char **)(lVar22 + 0x38);
              lStack_a0 = *(long *)(lVar22 + 0x40);
              uStack_d8 = 6;
              uStack_b0 = 0x201;
              if (lStack_a0 == 0) {
                uStack_6e = false;
              }
              else {
                uStack_6e = *pcStack_a8 == '/';
              }
              uStack_98 = 6;
              uStack_70 = 0x201;
              cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
            }
            plVar18 = param_3;
            if (cVar9 != -1) {
              plVar18 = plVar28 + -2;
            }
            plVar18[uVar24] = lVar27;
            if (cVar9 == -1) {
              uVar24 = uVar24 + 1;
            }
            lVar27 = plVar13[2];
            uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
            uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
            cVar9 = uVar12 < uVar2;
            if (uVar2 < uVar12) {
              cVar9 = -1;
            }
            if (uVar2 == uVar12) {
              uVar21 = *(ulong *)(lVar27 + 0x10);
              uVar15 = *(ulong *)(lVar22 + 0x10);
              uVar17 = uVar21;
              if (uVar15 <= uVar21) {
                uVar17 = uVar15;
              }
              iVar11 = _memcmp(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar22 + 8),uVar17);
              lVar23 = uVar21 - uVar15;
              if (iVar11 != 0) {
                lVar23 = (long)iVar11;
              }
              cVar9 = 0 < lVar23;
              if (lVar23 < 0) {
                cVar9 = -1;
              }
            }
            if (cVar9 == '\0') {
              pcStack_e8 = *(char **)(lVar27 + 0x38);
              lStack_e0 = *(long *)(lVar27 + 0x40);
              if (lStack_e0 == 0) {
                uStack_ae = false;
              }
              else {
                uStack_ae = *pcStack_e8 == '/';
              }
              pcStack_a8 = *(char **)(lVar22 + 0x38);
              lStack_a0 = *(long *)(lVar22 + 0x40);
              uStack_d8 = 6;
              uStack_b0 = 0x201;
              if (lStack_a0 == 0) {
                uStack_6e = false;
              }
              else {
                uStack_6e = *pcStack_a8 == '/';
              }
              uStack_98 = 6;
              uStack_70 = 0x201;
              cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
            }
            plVar18 = param_3;
            if (cVar9 != -1) {
              plVar18 = plVar28 + -3;
            }
            plVar18[uVar24] = lVar27;
            if (cVar9 == -1) {
              uVar24 = uVar24 + 1;
            }
            lVar27 = plVar13[3];
            uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
            uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
            cVar9 = uVar12 < uVar2;
            if (uVar2 < uVar12) {
              cVar9 = -1;
            }
            if (uVar2 == uVar12) {
              uVar21 = *(ulong *)(lVar27 + 0x10);
              uVar15 = *(ulong *)(lVar22 + 0x10);
              uVar17 = uVar21;
              if (uVar15 <= uVar21) {
                uVar17 = uVar15;
              }
              iVar11 = _memcmp(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar22 + 8),uVar17);
              lVar23 = uVar21 - uVar15;
              if (iVar11 != 0) {
                lVar23 = (long)iVar11;
              }
              cVar9 = 0 < lVar23;
              if (lVar23 < 0) {
                cVar9 = -1;
              }
            }
            if (cVar9 == '\0') {
              pcStack_e8 = *(char **)(lVar27 + 0x38);
              lStack_e0 = *(long *)(lVar27 + 0x40);
              if (lStack_e0 == 0) {
                uStack_ae = false;
              }
              else {
                uStack_ae = *pcStack_e8 == '/';
              }
              pcStack_a8 = *(char **)(lVar22 + 0x38);
              lStack_a0 = *(long *)(lVar22 + 0x40);
              uStack_d8 = 6;
              uStack_b0 = 0x201;
              if (lStack_a0 == 0) {
                uStack_6e = false;
              }
              else {
                uStack_6e = *pcStack_a8 == '/';
              }
              uStack_98 = 6;
              uStack_70 = 0x201;
              cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
            }
            plVar28 = plVar28 + -4;
            plVar18 = param_3;
            if (cVar9 != -1) {
              plVar18 = plVar28;
            }
            plVar18[uVar24] = lVar27;
            if (cVar9 == -1) {
              uVar24 = uVar24 + 1;
            }
            plVar13 = plVar13 + 4;
          } while (plVar13 < plVar25);
LAB_1039d07c8:
          plVar18 = plVar13;
          if (plVar13 < param_1 + uStack_100) {
            plVar25 = *(long **)((long)param_1 + uVar16);
            do {
              lVar22 = *plVar18;
              uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
              uVar12 = 0x1000203U >> (ulong)((*(byte *)(plVar25 + 0x28) & 3) << 3) & 0xff;
              cVar9 = uVar12 < uVar2;
              if (uVar2 < uVar12) {
                cVar9 = -1;
              }
              if (uVar2 == uVar12) {
                uVar21 = *(ulong *)(lVar22 + 0x10);
                uVar15 = plVar25[2];
                uVar17 = uVar21;
                if (uVar15 <= uVar21) {
                  uVar17 = uVar15;
                }
                iVar11 = _memcmp(*(undefined8 *)(lVar22 + 8),plVar25[1],uVar17);
                lVar27 = uVar21 - uVar15;
                if (iVar11 != 0) {
                  lVar27 = (long)iVar11;
                }
                cVar9 = 0 < lVar27;
                if (lVar27 < 0) {
                  cVar9 = -1;
                }
              }
              if (cVar9 == '\0') {
                pcStack_e8 = *(char **)(lVar22 + 0x38);
                lStack_e0 = *(long *)(lVar22 + 0x40);
                if (lStack_e0 == 0) {
                  uStack_ae = false;
                }
                else {
                  uStack_ae = *pcStack_e8 == '/';
                }
                pcStack_a8 = (char *)plVar25[7];
                lStack_a0 = plVar25[8];
                uStack_d8 = 6;
                uStack_b0 = 0x201;
                if (lStack_a0 == 0) {
                  uStack_6e = false;
                }
                else {
                  uStack_6e = *pcStack_a8 == '/';
                }
                uStack_98 = 6;
                uStack_70 = 0x201;
                cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
              }
              plVar28 = plVar28 + -1;
              plVar13 = param_3;
              if (cVar9 != -1) {
                plVar13 = plVar28;
              }
              plVar13[uVar24] = lVar22;
              if (cVar9 == -1) {
                uVar24 = uVar24 + 1;
              }
              plVar18 = plVar18 + 1;
            } while (plVar18 < param_1 + uStack_100);
          }
          if (uStack_100 != param_2) goto code_r0x0001039d08e8;
          _memcpy(param_1,param_3,uVar24 << 3);
          uVar17 = param_2 - uVar24;
          if (uVar17 == 0) goto LAB_1039d09bc;
          if (uVar17 < 8) {
            uVar15 = 0;
            goto LAB_1039d0988;
          }
          uVar15 = uVar17 & 0xfffffffffffffff8;
          pauVar19 = (undefined1 (*) [16])(param_3 + (param_2 - 4));
          plVar13 = param_1 + uVar24 + 4;
          uVar21 = uVar15;
          do {
            auVar29 = NEON_ext(pauVar19[1],pauVar19[1],8,1);
            auVar30 = NEON_ext(*pauVar19,*pauVar19,8,1);
            auVar31 = NEON_ext(pauVar19[-1],pauVar19[-1],8,1);
            auVar32 = NEON_ext(pauVar19[-2],pauVar19[-2],8,1);
            plVar13[-3] = auVar29._8_8_;
            plVar13[-4] = auVar29._0_8_;
            plVar13[-1] = auVar30._8_8_;
            plVar13[-2] = auVar30._0_8_;
            plVar13[1] = auVar31._8_8_;
            *plVar13 = auVar31._0_8_;
            plVar13[3] = auVar32._8_8_;
            plVar13[2] = auVar32._0_8_;
            pauVar19 = pauVar19 + -4;
            uVar21 = uVar21 - 8;
            plVar13 = plVar13 + 8;
          } while (uVar21 != 0);
          if (uVar17 != uVar15) {
LAB_1039d0988:
            lVar22 = (uVar15 - param_2) + uVar24;
            plVar13 = param_3 + ((param_2 - 1) - uVar15);
            plVar18 = param_1 + uVar15 + uVar24;
            do {
              *plVar18 = *plVar13;
              bVar8 = lVar22 != -1;
              lVar22 = lVar22 + 1;
              plVar13 = plVar13 + -1;
              plVar18 = plVar18 + 1;
            } while (bVar8);
          }
LAB_1039d09bc:
          if (uVar24 == 0) goto LAB_1039d09f8;
          if (uVar24 <= param_2) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17h358ad647644ee33aE
                      (param_1 + uVar24,uVar17,param_3,param_4,param_5,&lStack_f0,param_7);
            param_2 = uVar24;
            goto joined_r0x0001039d1024;
          }
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d9df8a,0x13,&UNK_10b2ddaf8);
          goto LAB_1039d1828;
        }
        goto LAB_1039d182c;
      }
LAB_1039d09f8:
      if (param_4 < param_2) goto LAB_1039d182c;
      uVar24 = 0;
      lVar22 = 0;
      if (2 < uStack_120) {
        lVar22 = uStack_120 - 3;
      }
      plVar18 = param_1 + lVar22;
      plVar13 = param_1;
      if (plVar18 <= param_1) goto LAB_1039d0dfc;
LAB_1039d0a2c:
      plVar28 = *(long **)((long)param_1 + uVar16);
      do {
        lVar22 = *plVar13;
        bVar6 = *(byte *)(plVar28 + 0x28);
        uVar2 = 0x1000203U >> (ulong)((bVar6 & 3) << 3) & 0xff;
        uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
        cVar9 = uVar12 < uVar2;
        if (uVar2 < uVar12) {
          cVar9 = -1;
        }
        if (uVar2 == uVar12) {
          uVar21 = plVar28[2];
          uVar15 = *(ulong *)(lVar22 + 0x10);
          uVar17 = uVar21;
          if (uVar15 <= uVar21) {
            uVar17 = uVar15;
          }
          iVar11 = _memcmp(plVar28[1],*(undefined8 *)(lVar22 + 8),uVar17);
          lVar27 = uVar21 - uVar15;
          if (iVar11 != 0) {
            lVar27 = (long)iVar11;
          }
          cVar9 = 0 < lVar27;
          if (lVar27 < 0) {
            cVar9 = -1;
          }
        }
        if (cVar9 == '\0') {
          pcStack_e8 = (char *)plVar28[7];
          lStack_e0 = plVar28[8];
          if (lStack_e0 == 0) {
            uStack_ae = false;
          }
          else {
            uStack_ae = *pcStack_e8 == '/';
          }
          pcStack_a8 = *(char **)(lVar22 + 0x38);
          lStack_a0 = *(long *)(lVar22 + 0x40);
          uStack_d8 = 6;
          uStack_b0 = 0x201;
          if (lStack_a0 == 0) {
            uStack_6e = false;
          }
          else {
            uStack_6e = *pcStack_a8 == '/';
          }
          uStack_98 = 6;
          uStack_70 = 0x201;
          cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
          bVar6 = *(byte *)(plVar28 + 0x28);
        }
        plVar25 = param_3;
        if (cVar9 == -1) {
          plVar25 = plStack_f8 + -1;
        }
        plVar25[uVar24] = lVar22;
        if (cVar9 != -1) {
          uVar24 = uVar24 + 1;
        }
        lVar22 = plVar13[1];
        uVar2 = 0x1000203U >> (ulong)((bVar6 & 3) << 3) & 0xff;
        uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
        cVar9 = uVar12 < uVar2;
        if (uVar2 < uVar12) {
          cVar9 = -1;
        }
        if (uVar2 == uVar12) {
          uVar21 = plVar28[2];
          uVar15 = *(ulong *)(lVar22 + 0x10);
          uVar17 = uVar21;
          if (uVar15 <= uVar21) {
            uVar17 = uVar15;
          }
          iVar11 = _memcmp(plVar28[1],*(undefined8 *)(lVar22 + 8),uVar17);
          lVar27 = uVar21 - uVar15;
          if (iVar11 != 0) {
            lVar27 = (long)iVar11;
          }
          cVar9 = 0 < lVar27;
          if (lVar27 < 0) {
            cVar9 = -1;
          }
        }
        if (cVar9 == '\0') {
          pcStack_e8 = (char *)plVar28[7];
          lStack_e0 = plVar28[8];
          if (lStack_e0 == 0) {
            uStack_ae = false;
          }
          else {
            uStack_ae = *pcStack_e8 == '/';
          }
          pcStack_a8 = *(char **)(lVar22 + 0x38);
          lStack_a0 = *(long *)(lVar22 + 0x40);
          uStack_d8 = 6;
          uStack_b0 = 0x201;
          if (lStack_a0 == 0) {
            uStack_6e = false;
          }
          else {
            uStack_6e = *pcStack_a8 == '/';
          }
          uStack_98 = 6;
          uStack_70 = 0x201;
          cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
          bVar6 = *(byte *)(plVar28 + 0x28);
        }
        plVar25 = param_3;
        if (cVar9 == -1) {
          plVar25 = plStack_f8 + -2;
        }
        plVar25[uVar24] = lVar22;
        if (cVar9 != -1) {
          uVar24 = uVar24 + 1;
        }
        lVar22 = plVar13[2];
        uVar2 = 0x1000203U >> (ulong)((bVar6 & 3) << 3) & 0xff;
        uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
        cVar9 = uVar12 < uVar2;
        if (uVar2 < uVar12) {
          cVar9 = -1;
        }
        if (uVar2 == uVar12) {
          uVar21 = plVar28[2];
          uVar15 = *(ulong *)(lVar22 + 0x10);
          uVar17 = uVar21;
          if (uVar15 <= uVar21) {
            uVar17 = uVar15;
          }
          iVar11 = _memcmp(plVar28[1],*(undefined8 *)(lVar22 + 8),uVar17);
          lVar27 = uVar21 - uVar15;
          if (iVar11 != 0) {
            lVar27 = (long)iVar11;
          }
          cVar9 = 0 < lVar27;
          if (lVar27 < 0) {
            cVar9 = -1;
          }
        }
        if (cVar9 == '\0') {
          pcStack_e8 = (char *)plVar28[7];
          lStack_e0 = plVar28[8];
          if (lStack_e0 == 0) {
            uStack_ae = false;
          }
          else {
            uStack_ae = *pcStack_e8 == '/';
          }
          pcStack_a8 = *(char **)(lVar22 + 0x38);
          lStack_a0 = *(long *)(lVar22 + 0x40);
          uStack_d8 = 6;
          uStack_b0 = 0x201;
          if (lStack_a0 == 0) {
            uStack_6e = false;
          }
          else {
            uStack_6e = *pcStack_a8 == '/';
          }
          uStack_98 = 6;
          uStack_70 = 0x201;
          cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
          bVar6 = *(byte *)(plVar28 + 0x28);
        }
        plVar25 = (long *)(ulong)bVar6;
        plVar20 = param_3;
        if (cVar9 == -1) {
          plVar20 = plStack_f8 + -3;
        }
        plVar20[uVar24] = lVar22;
        if (cVar9 != -1) {
          uVar24 = uVar24 + 1;
        }
        lVar22 = plVar13[3];
        uVar2 = 0x1000203U >> (ulong)((bVar6 & 3) << 3) & 0xff;
        uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
        cVar9 = uVar12 < uVar2;
        if (uVar2 < uVar12) {
          cVar9 = -1;
        }
        if (uVar2 == uVar12) {
          uVar17 = plVar28[2];
          uVar21 = *(ulong *)(lVar22 + 0x10);
          plVar25 = (long *)(uVar17 - uVar21);
          if (uVar21 <= uVar17) {
            uVar17 = uVar21;
          }
          iVar11 = _memcmp(plVar28[1],*(undefined8 *)(lVar22 + 8),uVar17);
          plVar20 = plVar25;
          if (iVar11 != 0) {
            plVar20 = (long *)(long)iVar11;
          }
          cVar9 = 0 < (long)plVar20;
          if ((long)plVar20 < 0) {
            cVar9 = -1;
          }
        }
        if (cVar9 == '\0') {
          pcStack_e8 = (char *)plVar28[7];
          lStack_e0 = plVar28[8];
          if (lStack_e0 == 0) {
            uStack_ae = false;
          }
          else {
            uStack_ae = *pcStack_e8 == '/';
          }
          pcStack_a8 = *(char **)(lVar22 + 0x38);
          lStack_a0 = *(long *)(lVar22 + 0x40);
          uStack_d8 = 6;
          uStack_b0 = 0x201;
          if (lStack_a0 == 0) {
            uStack_6e = false;
          }
          else {
            uStack_6e = *pcStack_a8 == '/';
          }
          uStack_98 = 6;
          uStack_70 = 0x201;
          cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
        }
        plStack_f8 = plStack_f8 + -4;
        plVar20 = param_3;
        if (cVar9 == -1) {
          plVar20 = plStack_f8;
        }
        plVar20[uVar24] = lVar22;
        if (cVar9 != -1) {
          uVar24 = uVar24 + 1;
        }
        plVar13 = plVar13 + 4;
      } while (plVar13 < plVar18);
LAB_1039d0dfc:
      plVar18 = plVar13;
      if (plVar13 < param_1 + uStack_120) {
        plVar25 = *(long **)((long)param_1 + uVar16);
        do {
          lVar22 = *plVar18;
          uVar2 = 0x1000203U >> (ulong)((*(byte *)(plVar25 + 0x28) & 3) << 3) & 0xff;
          uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
          cVar9 = uVar12 < uVar2;
          if (uVar2 < uVar12) {
            cVar9 = -1;
          }
          if (uVar2 == uVar12) {
            uVar17 = plVar25[2];
            uVar21 = *(ulong *)(lVar22 + 0x10);
            plVar28 = (long *)(uVar17 - uVar21);
            if (uVar21 <= uVar17) {
              uVar17 = uVar21;
            }
            iVar11 = _memcmp(plVar25[1],*(undefined8 *)(lVar22 + 8),uVar17);
            plVar13 = plVar28;
            if (iVar11 != 0) {
              plVar13 = (long *)(long)iVar11;
            }
            cVar9 = 0 < (long)plVar13;
            if ((long)plVar13 < 0) {
              cVar9 = -1;
            }
          }
          if (cVar9 == '\0') {
            pcStack_e8 = (char *)plVar25[7];
            lStack_e0 = plVar25[8];
            if (lStack_e0 == 0) {
              uStack_ae = false;
            }
            else {
              uStack_ae = *pcStack_e8 == '/';
            }
            pcStack_a8 = *(char **)(lVar22 + 0x38);
            lStack_a0 = *(long *)(lVar22 + 0x40);
            uStack_d8 = 6;
            uStack_b0 = 0x201;
            if (lStack_a0 == 0) {
              uStack_6e = false;
            }
            else {
              uStack_6e = *pcStack_a8 == '/';
            }
            uStack_98 = 6;
            uStack_70 = 0x201;
            cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
          }
          plStack_f8 = plStack_f8 + -1;
          plVar13 = param_3;
          if (cVar9 == -1) {
            plVar13 = plStack_f8;
          }
          plVar13[uVar24] = lVar22;
          if (cVar9 != -1) {
            uVar24 = uVar24 + 1;
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 < param_1 + uStack_120);
      }
      if (uStack_120 != param_2) goto code_r0x0001039d0f28;
      _memcpy(param_1,param_3,uVar24 << 3);
      uVar16 = param_2 - uVar24;
      if (uVar16 == 0) {
        return;
      }
      plVar13 = param_1 + uVar24;
      if (uVar16 < 8) {
        uVar17 = 0;
        goto LAB_1039d0fd8;
      }
      uVar17 = uVar16 & 0xfffffffffffffff8;
      pauVar19 = (undefined1 (*) [16])(param_3 + (param_2 - 4));
      plVar18 = plVar13 + 4;
      uVar21 = uVar17;
      do {
        auVar29 = NEON_ext(pauVar19[1],pauVar19[1],8,1);
        auVar30 = NEON_ext(*pauVar19,*pauVar19,8,1);
        auVar31 = NEON_ext(pauVar19[-1],pauVar19[-1],8,1);
        auVar32 = NEON_ext(pauVar19[-2],pauVar19[-2],8,1);
        plVar18[-3] = auVar29._8_8_;
        plVar18[-4] = auVar29._0_8_;
        plVar18[-1] = auVar30._8_8_;
        plVar18[-2] = auVar30._0_8_;
        plVar18[1] = auVar31._8_8_;
        *plVar18 = auVar31._0_8_;
        plVar18[3] = auVar32._8_8_;
        plVar18[2] = auVar32._0_8_;
        pauVar19 = pauVar19 + -4;
        uVar21 = uVar21 - 8;
        plVar18 = plVar18 + 8;
      } while (uVar21 != 0);
      if (uVar16 != uVar17) {
LAB_1039d0fd8:
        lVar22 = (uVar17 - param_2) + uVar24;
        plVar18 = param_3 + ((param_2 - 1) - uVar17);
        plVar20 = param_1 + uVar17 + uVar24;
        do {
          *plVar20 = *plVar18;
          bVar8 = lVar22 != -1;
          lVar22 = lVar22 + 1;
          plVar18 = plVar18 + -1;
          plVar20 = plVar20 + 1;
        } while (bVar8);
      }
      if (param_2 < uVar24) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                  (uVar24,param_2,param_2,&UNK_10b2ddb10);
        plVar28[uStack_130 + -1] = (long)plVar25;
        __Unwind_Resume();
        *(long **)((long)param_3 + 0x10001fb) = plVar13;
        uVar14 = __Unwind_Resume();
        _memcpy(plVar28,param_3,param_1);
        __Unwind_Resume(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001039d1898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(extraout_x1[1] + 0x18))(*extraout_x1,&UNK_108d9df93,5);
        return;
      }
      puStack_138 = (undefined8 *)0x0;
      param_2 = uVar16;
      param_1 = plVar13;
joined_r0x0001039d1024:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_1039d182c;
  uVar16 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      *param_3 = *param_1;
      param_3[uVar16] = param_1[uVar16];
      uStack_130 = 1;
      if (1 < uVar16) goto LAB_1039d1248;
    }
    else {
      uVar12 = func_0x0001039d29fc(param_1[1],*param_1);
      iVar11 = func_0x0001039d29fc(param_1[3],param_1[2]);
      uVar17 = (ulong)(uVar12 ^ 1);
      uVar24 = 2;
      if (iVar11 != 0) {
        uVar24 = 3;
      }
      uVar21 = 2;
      if (iVar11 == 0) {
        uVar21 = 3;
      }
      iVar11 = func_0x0001039d29fc(param_1[uVar24],param_1[uVar12]);
      iVar10 = func_0x0001039d29fc(param_1[uVar21],param_1[uVar17]);
      uVar15 = uVar24;
      if (iVar10 == 0) {
        uVar15 = uVar17;
      }
      uVar3 = uVar17;
      uVar4 = (ulong)uVar12;
      if (iVar11 == 0) {
        uVar3 = uVar24;
        uVar4 = uVar15;
        uVar24 = (ulong)uVar12;
      }
      uVar15 = uVar21;
      if (iVar10 == 0) {
        uVar15 = uVar3;
        uVar17 = uVar21;
      }
      iVar11 = func_0x0001039d29fc(param_1[uVar15],param_1[uVar4]);
      uVar21 = uVar15;
      if (iVar11 == 0) {
        uVar21 = uVar4;
      }
      lVar22 = param_1[uVar21];
      if (iVar11 == 0) {
        uVar4 = uVar15;
      }
      lVar27 = param_1[uVar4];
      lVar23 = param_1[uVar17];
      *param_3 = param_1[uVar24];
      param_3[1] = lVar22;
      param_3[2] = lVar27;
      param_3[3] = lVar23;
      plVar28 = param_1 + uVar16;
      uVar12 = func_0x0001039d29fc(plVar28[1],*plVar28);
      iVar11 = func_0x0001039d29fc(plVar28[3],plVar28[2]);
      uVar17 = (ulong)(uVar12 ^ 1);
      uVar24 = 2;
      if (iVar11 != 0) {
        uVar24 = 3;
      }
      uVar21 = 2;
      if (iVar11 == 0) {
        uVar21 = 3;
      }
      iVar11 = func_0x0001039d29fc(plVar28[uVar24],plVar28[uVar12]);
      iVar10 = func_0x0001039d29fc(plVar28[uVar21],plVar28[uVar17]);
      uVar15 = uVar24;
      if (iVar10 == 0) {
        uVar15 = uVar17;
      }
      uVar3 = uVar17;
      uVar4 = (ulong)uVar12;
      if (iVar11 == 0) {
        uVar3 = uVar24;
        uVar4 = uVar15;
        uVar24 = (ulong)uVar12;
      }
      plVar25 = param_3 + uVar16;
      uVar15 = uVar21;
      if (iVar10 == 0) {
        uVar15 = uVar3;
        uVar17 = uVar21;
      }
      iVar11 = func_0x0001039d29fc(plVar28[uVar15],plVar28[uVar4]);
      uVar21 = uVar15;
      if (iVar11 == 0) {
        uVar21 = uVar4;
      }
      if (iVar11 == 0) {
        uVar4 = uVar15;
      }
      lVar22 = plVar28[uVar21];
      lVar27 = plVar28[uVar4];
      *plVar25 = plVar28[uVar24];
      plVar25[1] = lVar22;
      lVar22 = plVar28[uVar17];
      plVar25[2] = lVar27;
      plVar25[3] = lVar22;
      uStack_130 = 4;
      if (4 < uVar16) {
LAB_1039d1248:
        lVar22 = uStack_130 << 3;
        uVar24 = uStack_130;
        do {
          uVar17 = uVar24 + 1;
          lVar23 = param_1[uVar24];
          param_3[uVar24] = lVar23;
          lVar27 = (param_3 + uVar24)[-1];
          uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar23 + 0x140) & 3) << 3) & 0xff;
          uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
          cVar9 = uVar12 <= uVar2 && uVar2 != uVar12;
          if (uVar12 > uVar2) {
            cVar9 = -1;
          }
          if (uVar2 == uVar12) {
            uVar21 = *(ulong *)(lVar23 + 0x10);
            uVar15 = *(ulong *)(lVar27 + 0x10);
            uVar24 = uVar21;
            if (uVar15 <= uVar21) {
              uVar24 = uVar15;
            }
            iVar11 = _memcmp(*(undefined8 *)(lVar23 + 8),*(undefined8 *)(lVar27 + 8),uVar24);
            lVar26 = uVar21 - uVar15;
            if (iVar11 != 0) {
              lVar26 = (long)iVar11;
            }
            cVar9 = 0 < lVar26;
            if (lVar26 < 0) {
              cVar9 = -1;
            }
          }
          if (cVar9 == '\0') {
            pcStack_e8 = *(char **)(lVar23 + 0x38);
            lStack_e0 = *(long *)(lVar23 + 0x40);
            if (lStack_e0 == 0) {
              uStack_ae = false;
            }
            else {
              uStack_ae = *pcStack_e8 == '/';
            }
            pcStack_a8 = *(char **)(lVar27 + 0x38);
            lStack_a0 = *(long *)(lVar27 + 0x40);
            uStack_d8 = 6;
            uStack_b0 = 0x201;
            if (lStack_a0 == 0) {
              uStack_6e = false;
            }
            else {
              uStack_6e = *pcStack_a8 == '/';
            }
            uStack_98 = 6;
            uStack_70 = 0x201;
            cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
          }
          lVar27 = lVar22;
          if (cVar9 == -1) {
            do {
              puVar1 = (undefined8 *)((long)param_3 + lVar27);
              *puVar1 = puVar1[-1];
              lVar27 = lVar27 + -8;
              plVar28 = param_3;
              if (lVar27 == 0) goto LAB_1039d126c;
              lVar26 = puVar1[-2];
              uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar23 + 0x140) & 3) << 3) & 0xff;
              uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar26 + 0x140) & 3) << 3) & 0xff;
              cVar9 = uVar12 < uVar2;
              if (uVar2 < uVar12) {
                cVar9 = -1;
              }
              if (uVar2 == uVar12) {
                uVar21 = *(ulong *)(lVar23 + 0x10);
                uVar15 = *(ulong *)(lVar26 + 0x10);
                uVar24 = uVar21;
                if (uVar15 <= uVar21) {
                  uVar24 = uVar15;
                }
                iVar11 = _memcmp(*(undefined8 *)(lVar23 + 8),*(undefined8 *)(lVar26 + 8),uVar24);
                lVar5 = uVar21 - uVar15;
                if (iVar11 != 0) {
                  lVar5 = (long)iVar11;
                }
                cVar9 = 0 < lVar5;
                if (lVar5 < 0) {
                  cVar9 = -1;
                }
              }
              if (cVar9 == '\0') {
                pcStack_e8 = *(char **)(lVar23 + 0x38);
                lStack_e0 = *(long *)(lVar23 + 0x40);
                if (lStack_e0 == 0) {
                  uStack_ae = false;
                }
                else {
                  uStack_ae = *pcStack_e8 == '/';
                }
                pcStack_a8 = *(char **)(lVar26 + 0x38);
                lStack_a0 = *(long *)(lVar26 + 0x40);
                uStack_d8 = 6;
                uStack_b0 = 0x201;
                if (lStack_a0 == 0) {
                  uStack_6e = false;
                }
                else {
                  uStack_6e = *pcStack_a8 == '/';
                }
                uStack_98 = 6;
                uStack_70 = 0x201;
                cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
              }
            } while (cVar9 == -1);
            plVar28 = (long *)((long)param_3 + lVar27);
LAB_1039d126c:
            *plVar28 = lVar23;
          }
          lVar22 = lVar22 + 8;
          uVar24 = uVar17;
        } while (uVar17 < uVar16);
      }
    }
  }
  else {
    FUN_1039cf4dc(param_1,param_3,param_3 + param_2);
    FUN_1039cf4dc(param_1 + uVar16,param_3 + uVar16,param_3 + param_2 + 8);
    uStack_130 = 8;
    if (8 < uVar16) goto LAB_1039d1248;
  }
  plVar28 = param_3 + uVar16;
  if (uStack_130 < param_2 - uVar16) {
    lStack_108 = 8;
    plStack_110 = plVar28;
    uVar24 = uStack_130;
    do {
      uVar17 = uVar24 + 1;
      lVar27 = param_1[uVar16 + uVar24];
      plVar28[uVar24] = lVar27;
      lVar22 = (plVar28 + uVar24)[-1];
      uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
      uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
      cVar9 = uVar12 <= uVar2 && uVar2 != uVar12;
      if (uVar12 > uVar2) {
        cVar9 = -1;
      }
      if (uVar2 == uVar12) {
        uVar21 = *(ulong *)(lVar27 + 0x10);
        uVar15 = *(ulong *)(lVar22 + 0x10);
        uVar24 = uVar21;
        if (uVar15 <= uVar21) {
          uVar24 = uVar15;
        }
        iVar11 = _memcmp(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar22 + 8),uVar24);
        lVar23 = uVar21 - uVar15;
        if (iVar11 != 0) {
          lVar23 = (long)iVar11;
        }
        cVar9 = 0 < lVar23;
        if (lVar23 < 0) {
          cVar9 = -1;
        }
      }
      if (cVar9 == '\0') {
        pcStack_e8 = *(char **)(lVar27 + 0x38);
        lStack_e0 = *(long *)(lVar27 + 0x40);
        if (lStack_e0 == 0) {
          uStack_ae = false;
        }
        else {
          uStack_ae = *pcStack_e8 == '/';
        }
        pcStack_a8 = *(char **)(lVar22 + 0x38);
        lStack_a0 = *(long *)(lVar22 + 0x40);
        uStack_d8 = 6;
        uStack_b0 = 0x201;
        if (lStack_a0 == 0) {
          uStack_6e = false;
        }
        else {
          uStack_6e = *pcStack_a8 == '/';
        }
        uStack_98 = 6;
        uStack_70 = 0x201;
        cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
      }
      lVar22 = lStack_108;
      plVar25 = plStack_110;
      if (cVar9 == -1) {
        do {
          plVar13 = plVar25 + uStack_130;
          *plVar13 = plVar13[-1];
          plVar18 = plVar28;
          if (uStack_130 * 8 - lVar22 == 0) goto LAB_1039d14e0;
          lVar23 = plVar13[-2];
          uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar27 + 0x140) & 3) << 3) & 0xff;
          uVar12 = 0x1000203U >> (ulong)((*(byte *)(lVar23 + 0x140) & 3) << 3) & 0xff;
          cVar9 = uVar12 < uVar2;
          if (uVar2 < uVar12) {
            cVar9 = -1;
          }
          if (uVar2 == uVar12) {
            uVar21 = *(ulong *)(lVar27 + 0x10);
            uVar15 = *(ulong *)(lVar23 + 0x10);
            uVar24 = uVar21;
            if (uVar15 <= uVar21) {
              uVar24 = uVar15;
            }
            iVar11 = _memcmp(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar23 + 8),uVar24);
            lVar26 = uVar21 - uVar15;
            if (iVar11 != 0) {
              lVar26 = (long)iVar11;
            }
            cVar9 = 0 < lVar26;
            if (lVar26 < 0) {
              cVar9 = -1;
            }
          }
          if (cVar9 == '\0') {
            pcStack_e8 = *(char **)(lVar27 + 0x38);
            lStack_e0 = *(long *)(lVar27 + 0x40);
            if (lStack_e0 == 0) {
              uStack_ae = false;
            }
            else {
              uStack_ae = *pcStack_e8 == '/';
            }
            pcStack_a8 = *(char **)(lVar23 + 0x38);
            lStack_a0 = *(long *)(lVar23 + 0x40);
            uStack_d8 = 6;
            uStack_b0 = 0x201;
            if (lStack_a0 == 0) {
              uStack_6e = false;
            }
            else {
              uStack_6e = *pcStack_a8 == '/';
            }
            uStack_98 = 6;
            uStack_70 = 0x201;
            cVar9 = func_0x00010603668c(&pcStack_e8,&pcStack_a8);
          }
          plVar25 = plVar25 + -1;
          lVar22 = lVar22 + 8;
        } while (cVar9 == -1);
        plVar18 = plVar25 + uStack_130;
LAB_1039d14e0:
        *plVar18 = lVar27;
      }
      lStack_108 = lStack_108 + -8;
      plStack_110 = plStack_110 + 1;
      uVar24 = uVar17;
    } while (uVar17 < param_2 - uVar16);
  }
  uVar24 = 0;
  lVar22 = param_2 * 8;
  plVar25 = param_3 + (param_2 - 1);
  plVar13 = plVar28 + -1;
  do {
    lVar22 = lVar22 + -8;
    uVar12 = func_0x0001039d29fc(*plVar28,*param_3);
    plVar18 = plVar28;
    if (uVar12 == 0) {
      plVar18 = param_3;
    }
    param_1[uVar24] = *plVar18;
    uVar17 = func_0x0001039d29fc(*plVar25,*plVar13);
    uVar24 = uVar24 + 1;
    param_3 = param_3 + (uVar12 ^ 1);
    plVar28 = plVar28 + uVar12;
    plVar18 = plVar13;
    if ((int)uVar17 == 0) {
      plVar18 = plVar25;
    }
    *(long *)((long)param_1 + lVar22) = *plVar18;
    plVar18 = plVar25 + (uVar17 & 0xffffffff);
    plVar25 = plVar18 + -1;
    plVar13 = plVar13 + -(uVar17 & 1);
  } while (uVar16 != uVar24);
  if ((param_2 & 1) != 0) {
    bVar8 = plVar13 + 1 <= param_3;
    plVar25 = param_3;
    if (bVar8) {
      plVar25 = plVar28;
    }
    param_1[uVar24] = *plVar25;
    param_3 = param_3 + !bVar8;
    plVar28 = plVar28 + bVar8;
  }
  if (param_3 == plVar13 + 1 && plVar28 == plVar18) {
    return;
  }
LAB_1039d1828:
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_1039d182c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1039d1830);
  (*pcVar7)();
code_r0x0001039d08e8:
  plVar28 = plVar28 + -1;
  plVar13 = plVar18 + 1;
  plVar28[uVar24] = *plVar18;
  lVar22 = 0;
  if (2 < param_2) {
    lVar22 = param_2 - 3;
  }
  plVar25 = param_1 + lVar22;
  uStack_100 = param_2;
  if (plVar13 < plVar25) goto LAB_1039d0410;
  goto LAB_1039d07c8;
code_r0x0001039d0f28:
  plStack_f8 = plStack_f8 + -1;
  plVar13 = plVar18 + 1;
  param_3[uVar24] = *plVar18;
  uVar24 = uVar24 + 1;
  lVar22 = 0;
  if (2 < param_2) {
    lVar22 = param_2 - 3;
  }
  plVar18 = param_1 + lVar22;
  uStack_120 = param_2;
  if (plVar13 < plVar18) goto LAB_1039d0a2c;
  goto LAB_1039d0dfc;
}

