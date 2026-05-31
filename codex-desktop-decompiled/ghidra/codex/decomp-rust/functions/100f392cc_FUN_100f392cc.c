
void FUN_100f392cc(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lStack_110;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    lVar18 = param_2[1];
    lVar15 = param_3[1];
    uVar16 = param_3[2];
    do {
      lVar14 = lVar10 + 0x168;
      uVar3 = *(ushort *)(lVar10 + 0x272);
      plVar25 = (long *)(ulong)uVar3;
      lVar27 = (long)plVar25 * 0x18;
      plVar22 = (long *)0xffffffffffffffff;
      lVar13 = lVar14;
      do {
        plVar23 = plVar25;
        if (lVar27 == 0) goto LAB_100f3937c;
        uVar17 = *(ulong *)(lVar13 + 0x10);
        uVar19 = uVar16;
        if (uVar17 <= uVar16) {
          uVar19 = uVar17;
        }
        iVar8 = _memcmp(lVar15,*(undefined8 *)(lVar13 + 8),uVar19);
        lVar24 = uVar16 - uVar17;
        if (iVar8 != 0) {
          lVar24 = (long)iVar8;
        }
        cVar1 = 0 < lVar24;
        if (lVar24 < 0) {
          cVar1 = -1;
        }
        lVar27 = lVar27 + -0x18;
        plVar22 = (long *)((long)plVar22 + 1);
        lVar13 = lVar13 + 0x18;
      } while (cVar1 == '\x01');
      plVar23 = plVar22;
      if (cVar1 == '\0') {
        lVar18 = lVar10;
        param_2 = plVar22;
        if (*param_3 != 0) {
          _free(lVar15);
        }
        goto LAB_100f393c8;
      }
LAB_100f3937c:
      if (lVar18 == 0) goto LAB_100f39464;
      lVar10 = *(long *)(lVar10 + (long)plVar23 * 8 + 0x278);
      lVar18 = lVar18 + -1;
    } while( true );
  }
  lVar10 = *param_3;
  lVar18 = param_3[1];
  if (lVar10 != -0x8000000000000000) {
    lVar15 = param_3[2];
    uVar28 = *param_4;
    uVar29 = param_4[1];
    puVar9 = (undefined8 *)_malloc(0x278);
    if (puVar9 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x278);
      goto LAB_100f39c64;
    }
    *param_2 = (long)puVar9;
    param_2[1] = 0;
    *(undefined2 *)((long)puVar9 + 0x272) = 1;
    puVar9[0x2c] = 0;
    puVar9[0x2d] = lVar10;
    puVar9[0x2e] = lVar18;
    puVar9[0x2f] = lVar15;
    *puVar9 = uVar28;
    puVar9[1] = uVar29;
    uVar28 = param_4[2];
    puVar9[3] = param_4[3];
    puVar9[2] = uVar28;
    goto LAB_100f39430;
  }
LAB_100f393c8:
  puVar9 = (undefined8 *)(lVar18 + (long)param_2 * 0x20);
  uVar31 = puVar9[1];
  uVar28 = *puVar9;
  uVar32 = puVar9[3];
  uVar33 = puVar9[2];
  uVar29 = *param_4;
  uVar34 = param_4[3];
  uVar30 = param_4[2];
  puVar9[1] = param_4[1];
  *puVar9 = uVar29;
  puVar9[3] = uVar34;
  puVar9[2] = uVar30;
  param_1[1] = uVar31;
  *param_1 = uVar28;
  param_1[3] = uVar32;
  param_1[2] = uVar33;
  return;
LAB_100f39464:
  lVar13 = *param_3;
  lVar18 = lVar15;
  if (lVar13 != -0x8000000000000000) {
    uVar28 = *param_4;
    uVar29 = param_4[1];
    if (10 < uVar3) {
      if (plVar23 < (long *)0x5) {
        bVar6 = false;
        uVar19 = 4;
      }
      else if (plVar23 == (long *)0x5) {
        bVar6 = false;
        uVar19 = 5;
      }
      else if (plVar23 == (long *)0x6) {
        plVar23 = (long *)0x0;
        bVar6 = true;
        uVar19 = 5;
      }
      else {
        plVar23 = (long *)((long)plVar23 + -7);
        bVar6 = true;
        uVar19 = 6;
      }
      lVar18 = _malloc(0x278);
      if (lVar18 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x278);
      }
      else {
        *(undefined8 *)(lVar18 + 0x160) = 0;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x272) + ~uVar19;
        *(short *)(lVar18 + 0x272) = (short)uVar17;
        plVar22 = (long *)(lVar14 + uVar19 * 0x18);
        lVar27 = *plVar22;
        lVar24 = plVar22[1];
        puVar9 = (undefined8 *)(lVar10 + uVar19 * 0x20);
        uVar31 = *puVar9;
        uVar33 = puVar9[1];
        if (uVar17 < 0xc) {
          lVar11 = plVar22[2];
          _memcpy(lVar18 + 0x168,lVar14 + (uVar19 + 1) * 0x18,uVar17 * 0x18);
          _memcpy(lVar18,lVar10 + (uVar19 + 1) * 0x20,uVar17 * 0x20);
          *(short *)(lVar10 + 0x272) = (short)uVar19;
          uStack_c8 = puVar9[3];
          uStack_d0 = puVar9[2];
          lVar14 = lVar18;
          if (!bVar6) {
            lVar14 = lVar10;
          }
          uVar3 = *(ushort *)(lVar14 + 0x272);
          plVar22 = (long *)(lVar14 + 0x168 + (long)plVar23 * 0x18);
          puVar9 = (undefined8 *)(lVar14 + (long)plVar23 * 0x20);
          lVar26 = (long)(ulong)uVar3 - (long)plVar23;
          if ((long *)(ulong)uVar3 < plVar23 || lVar26 == 0) {
            *plVar22 = lVar13;
            plVar22[1] = lVar15;
            plVar22[2] = uVar16;
            uStack_98 = param_4[3];
            uStack_a0 = param_4[2];
          }
          else {
            _memmove(lVar14 + 0x168 + ((long)plVar23 + 1) * 0x18,plVar22,lVar26 * 0x18);
            *plVar22 = lVar13;
            plVar22[1] = lVar15;
            plVar22[2] = uVar16;
            uStack_98 = param_4[3];
            uStack_a0 = param_4[2];
            _memmove(lVar14 + ((long)plVar23 + 1) * 0x20,puVar9,lVar26 * 0x20);
          }
          *puVar9 = uVar28;
          puVar9[1] = uVar29;
          puVar9[3] = uStack_98;
          puVar9[2] = uStack_a0;
          *(ushort *)(lVar14 + 0x272) = uVar3 + 1;
          if (lVar27 == -0x8000000000000000) goto LAB_100f39430;
          if (*(long *)(lVar10 + 0x160) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            lVar15 = *(long *)(lVar10 + 0x160);
            uVar28 = uVar31;
            lVar14 = lVar27;
            lVar13 = lVar11;
            uVar29 = uVar33;
            lVar26 = lVar18;
            lStack_110 = lVar24;
            do {
              lVar12 = lVar15;
              uVar3 = *(ushort *)(lVar10 + 0x270);
              uVar19 = (ulong)uVar3;
              uVar4 = *(ushort *)(lVar12 + 0x272);
              uVar17 = (ulong)uVar4;
              if (uVar4 < 0xb) {
                uVar16 = uVar19 + 1;
                plVar22 = (long *)(lVar12 + 0x168 + uVar19 * 0x18);
                if (uVar3 < uVar4) {
                  lVar10 = uVar17 - uVar19;
                  _memmove(lVar12 + 0x168 + uVar16 * 0x18,plVar22,lVar10 * 0x18);
                  *plVar22 = lVar14;
                  plVar22[1] = lStack_110;
                  puVar9 = (undefined8 *)(lVar12 + uVar19 * 0x20);
                  plVar22[2] = lVar13;
                  _memmove(lVar12 + uVar16 * 0x20,puVar9,lVar10 * 0x20);
                  *puVar9 = uVar28;
                  puVar9[1] = uVar29;
                  puVar9[3] = uStack_c8;
                  puVar9[2] = uStack_d0;
                  _memmove(lVar12 + 0x278 + uVar19 * 8 + 0x10,lVar12 + 0x278 + uVar16 * 8,lVar10 * 8
                          );
                }
                else {
                  *plVar22 = lVar14;
                  plVar22[1] = lStack_110;
                  plVar22[2] = lVar13;
                  puVar9 = (undefined8 *)(lVar12 + uVar19 * 0x20);
                  *puVar9 = uVar28;
                  puVar9[1] = uVar29;
                  puVar9[3] = uStack_c8;
                  puVar9[2] = uStack_d0;
                }
                *(long *)(lVar12 + uVar16 * 8 + 0x278) = lVar26;
                *(ushort *)(lVar12 + 0x272) = uVar4 + 1;
                if (uVar16 < uVar17 + 2) {
                  lVar10 = uVar19 + 0x50;
                  do {
                    lVar15 = *(long *)(lVar12 + lVar10 * 8);
                    *(long *)(lVar15 + 0x160) = lVar12;
                    *(short *)(lVar15 + 0x270) = (short)lVar10 + -0x4f;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 - uVar17 != 0x51);
                }
                goto LAB_100f39430;
              }
              uVar16 = uVar16 + 1;
              uVar21 = 5;
              if (uVar3 != 6) {
                uVar21 = 6;
              }
              uVar20 = 0;
              if (uVar3 != 6) {
                uVar20 = uVar19 - 7;
              }
              uVar2 = uVar19;
              uVar5 = uVar19;
              if (uVar3 != 5) {
                uVar2 = uVar20;
                uVar5 = uVar21;
              }
              uVar21 = 4;
              if (4 < uVar3) {
                uVar19 = uVar2;
                uVar21 = uVar5;
              }
              lVar18 = _malloc(0x2d8);
              if (lVar18 == 0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2d8);
                goto LAB_100f39c64;
              }
              *(undefined8 *)(lVar18 + 0x160) = 0;
              uVar20 = (ulong)*(ushort *)(lVar12 + 0x272) + ~uVar21;
              *(short *)(lVar18 + 0x272) = (short)uVar20;
              plVar22 = (long *)(lVar12 + 0x168 + uVar21 * 0x18);
              lVar27 = *plVar22;
              lVar24 = plVar22[1];
              puVar9 = (undefined8 *)(lVar12 + uVar21 * 0x20);
              uVar31 = *puVar9;
              uVar33 = puVar9[1];
              if (0xb < uVar20) {
                func_0x000108a07904(0,uVar20,0xb,&UNK_10b2381a8);
                goto LAB_100f39c64;
              }
              lVar11 = plVar22[2];
              _memcpy(lVar18 + 0x168,lVar12 + 0x168 + (uVar21 + 1) * 0x18,uVar20 * 0x18);
              _memcpy(lVar18,lVar12 + (uVar21 + 1) * 0x20,uVar20 * 0x20);
              *(short *)(lVar12 + 0x272) = (short)uVar21;
              uVar32 = puVar9[3];
              uVar30 = puVar9[2];
              uVar20 = (ulong)*(ushort *)(lVar18 + 0x272);
              lVar10 = uVar20 + 1;
              if (0xb < uVar20) {
                func_0x000108a07904(0,lVar10,0xc,&UNK_10b2381c0);
                goto LAB_100f39c64;
              }
              if (uVar17 - uVar21 != lVar10) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
                goto LAB_100f39c64;
              }
              _memcpy(lVar18 + 0x278,lVar12 + uVar21 * 8 + 0x280,lVar10 * 8);
              uVar17 = 0;
              do {
                lVar10 = *(long *)(lVar18 + 0x278 + uVar17 * 8);
                *(long *)(lVar10 + 0x160) = lVar18;
                *(short *)(lVar10 + 0x270) = (short)uVar17;
                if (uVar20 <= uVar17) break;
                uVar17 = uVar17 + 1;
              } while (uVar17 <= uVar20);
              lVar10 = lVar18;
              if (uVar3 < 6) {
                lVar10 = lVar12;
              }
              uVar3 = *(ushort *)(lVar10 + 0x272);
              uVar21 = (ulong)uVar3;
              uVar17 = uVar19 + 1;
              plVar22 = (long *)(lVar10 + 0x168 + (long)(int)uVar19 * 0x18);
              lVar15 = uVar21 - uVar19;
              if (uVar21 < uVar19 || lVar15 == 0) {
                *plVar22 = lVar14;
                plVar22[1] = lStack_110;
                plVar22[2] = lVar13;
                puVar9 = (undefined8 *)(lVar10 + uVar19 * 0x20);
                *puVar9 = uVar28;
                puVar9[1] = uVar29;
                puVar9[3] = uStack_c8;
                puVar9[2] = uStack_d0;
              }
              else {
                _memmove(lVar10 + 0x168 + (long)(int)uVar17 * 0x18,plVar22,lVar15 * 0x18);
                *plVar22 = lVar14;
                plVar22[1] = lStack_110;
                puVar9 = (undefined8 *)(lVar10 + uVar19 * 0x20);
                plVar22[2] = lVar13;
                _memmove(lVar10 + uVar17 * 0x20,puVar9,lVar15 * 0x20);
                *puVar9 = uVar28;
                puVar9[1] = uVar29;
                puVar9[3] = uStack_c8;
                puVar9[2] = uStack_d0;
                _memmove(lVar10 + 0x278 + uVar19 * 8 + 0x10,lVar10 + 0x278 + uVar17 * 8,lVar15 * 8);
              }
              *(long *)(lVar10 + uVar17 * 8 + 0x278) = lVar26;
              *(ushort *)(lVar10 + 0x272) = uVar3 + 1;
              if (uVar17 < uVar21 + 2) {
                lVar15 = uVar19 + 0x50;
                do {
                  lVar14 = *(long *)(lVar10 + lVar15 * 8);
                  *(long *)(lVar14 + 0x160) = lVar10;
                  *(short *)(lVar14 + 0x270) = (short)lVar15 + -0x4f;
                  lVar15 = lVar15 + 1;
                } while (lVar15 - uVar21 != 0x51);
              }
              if (lVar27 == -0x8000000000000000) goto LAB_100f39430;
              lVar15 = *(long *)(lVar12 + 0x160);
              uVar28 = uVar31;
              lVar10 = lVar12;
              lVar14 = lVar27;
              lVar13 = lVar11;
              uVar29 = uVar33;
              lVar26 = lVar18;
              lStack_110 = lVar24;
              uStack_d0 = uVar30;
              uStack_c8 = uVar32;
            } while (*(long *)(lVar12 + 0x160) != 0);
          }
          lVar10 = *param_2;
          if (lVar10 == 0) {
            func_0x000108a07a20(&UNK_10b2380e8);
          }
          else {
            uVar19 = param_2[1];
            puVar9 = (undefined8 *)_malloc(0x2d8);
            if (puVar9 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2d8);
            }
            else {
              puVar9[0x2c] = 0;
              *(undefined2 *)((long)puVar9 + 0x272) = 0;
              puVar9[0x4f] = lVar10;
              if (uVar19 < 0xffffffffffffffff) {
                *(undefined8 **)(lVar10 + 0x160) = puVar9;
                *(undefined2 *)(lVar10 + 0x270) = 0;
                *param_2 = (long)puVar9;
                param_2[1] = uVar19 + 1;
                if (uVar16 == uVar19) {
                  *(undefined2 *)((long)puVar9 + 0x272) = 1;
                  puVar9[0x2d] = lVar27;
                  puVar9[0x2e] = lVar24;
                  puVar9[0x2f] = lVar11;
                  *puVar9 = uVar31;
                  puVar9[1] = uVar33;
                  puVar9[3] = uStack_c8;
                  puVar9[2] = uStack_d0;
                  puVar9[0x50] = lVar18;
                  *(undefined8 **)(lVar18 + 0x160) = puVar9;
                  *(undefined2 *)(lVar18 + 0x270) = 1;
                  goto LAB_100f39430;
                }
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
              }
              else {
                func_0x000108a07a20(&UNK_10b238148);
              }
            }
          }
        }
        else {
          func_0x000108a07904(0,uVar17,0xb,&UNK_10b2381a8);
        }
      }
LAB_100f39c64:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100f39c68);
      (*pcVar7)();
    }
    plVar22 = (long *)(lVar14 + (long)plVar23 * 0x18);
    puVar9 = (undefined8 *)(lVar10 + (long)plVar23 * 0x20);
    lVar18 = (long)plVar25 - (long)plVar23;
    if (plVar25 < plVar23 || lVar18 == 0) {
      *plVar22 = lVar13;
      plVar22[1] = lVar15;
      plVar22[2] = uVar16;
      uStack_98 = param_4[3];
      uStack_a0 = param_4[2];
    }
    else {
      _memmove(lVar14 + ((long)plVar23 + 1) * 0x18,plVar22,lVar18 * 0x18);
      *plVar22 = lVar13;
      plVar22[1] = lVar15;
      plVar22[2] = uVar16;
      uStack_98 = param_4[3];
      uStack_a0 = param_4[2];
      _memmove(lVar10 + ((long)plVar23 + 1) * 0x20,puVar9,lVar18 * 0x20);
    }
    *puVar9 = uVar28;
    puVar9[1] = uVar29;
    puVar9[3] = uStack_98;
    puVar9[2] = uStack_a0;
    *(ushort *)(lVar10 + 0x272) = uVar3 + 1;
LAB_100f39430:
    param_2[2] = param_2[2] + 1;
    *param_1 = 0x8000000000000001;
    return;
  }
  goto LAB_100f393c8;
}

