
void FUN_100f32280(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  
  puVar28 = (undefined8 *)*param_1;
  if (puVar28 != (undefined8 *)0x0) {
    lVar26 = param_1[1];
    puVar24 = (undefined8 *)param_2[1];
    uVar25 = param_2[2];
    do {
      puVar11 = puVar28 + 1;
      uVar5 = *(ushort *)((long)puVar28 + 0x16a);
      puVar21 = (undefined8 *)(ulong)uVar5;
      lVar17 = (long)puVar21 * 0x18;
      puVar22 = (undefined8 *)0xffffffffffffffff;
      puVar12 = puVar11;
      do {
        puVar23 = puVar21;
        if (lVar17 == 0) goto LAB_100f32330;
        uVar20 = puVar12[2];
        uVar27 = uVar25;
        if (uVar20 <= uVar25) {
          uVar27 = uVar20;
        }
        iVar10 = _memcmp(puVar24,puVar12[1],uVar27);
        lVar16 = uVar25 - uVar20;
        if (iVar10 != 0) {
          lVar16 = (long)iVar10;
        }
        cVar1 = 0 < lVar16;
        if (lVar16 < 0) {
          cVar1 = -1;
        }
        lVar17 = lVar17 + -0x18;
        puVar22 = (undefined8 *)((long)puVar22 + 1);
        puVar12 = puVar12 + 3;
      } while (cVar1 == '\x01');
      puVar23 = puVar22;
      if (cVar1 == '\0') {
        param_1 = puVar22;
        puVar22 = puVar28;
        if (*param_2 != 0) {
          _free(puVar24);
        }
        goto LAB_100f32374;
      }
LAB_100f32330:
      if (lVar26 == 0) goto LAB_100f323d8;
      puVar28 = (undefined8 *)puVar28[(long)puVar23 + 0x2e];
      lVar26 = lVar26 + -1;
    } while( true );
  }
  lVar26 = *param_2;
  puVar22 = (undefined8 *)param_2[1];
  if (lVar26 != -0x8000000000000000) {
    lVar17 = param_2[2];
    puVar28 = (undefined8 *)_malloc(0x170);
    if (puVar28 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x170);
      goto LAB_100f32a9c;
    }
    *param_1 = puVar28;
    param_1[1] = 0;
    *(undefined2 *)((long)puVar28 + 0x16a) = 1;
    *puVar28 = 0;
    puVar28[1] = lVar26;
    puVar28[2] = puVar22;
    puVar28[3] = lVar17;
    puVar28[0x22] = param_3;
    goto LAB_100f323ac;
  }
LAB_100f32374:
  puVar22[(long)param_1 + 0x22] = param_3;
  return;
LAB_100f323d8:
  lVar26 = *param_2;
  puVar22 = puVar24;
  if (lVar26 != -0x8000000000000000) {
    if (uVar5 < 0xb) {
      plVar18 = puVar11 + (long)puVar23 * 3;
      lVar17 = (long)puVar21 - (long)puVar23;
      if (puVar21 < puVar23 || lVar17 == 0) {
        *plVar18 = lVar26;
        plVar18[1] = (long)puVar24;
        plVar18[2] = uVar25;
      }
      else {
        _memmove(puVar11 + ((long)puVar23 + 1) * 3,plVar18,lVar17 * 0x18);
        *plVar18 = lVar26;
        plVar18[1] = (long)puVar24;
        plVar18[2] = uVar25;
        _memmove(puVar28 + (long)puVar23 + 0x23,puVar28 + (long)puVar23 + 0x22,lVar17 * 8);
      }
      puVar28[(long)puVar23 + 0x22] = param_3;
      *(ushort *)((long)puVar28 + 0x16a) = uVar5 + 1;
LAB_100f323ac:
      param_1[2] = param_1[2] + 1;
      return;
    }
    if (puVar23 < (undefined8 *)0x5) {
      bVar8 = false;
      uVar27 = 4;
    }
    else if (puVar23 == (undefined8 *)0x5) {
      bVar8 = false;
      uVar27 = 5;
    }
    else if (puVar23 == (undefined8 *)0x6) {
      puVar23 = (undefined8 *)0x0;
      bVar8 = true;
      uVar27 = 5;
    }
    else {
      puVar23 = (undefined8 *)((long)puVar23 + -7);
      bVar8 = true;
      uVar27 = 6;
    }
    puStack_88 = (undefined8 *)_malloc(0x170);
    if (puStack_88 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x170);
    }
    else {
      *puStack_88 = 0;
      uVar20 = (ulong)*(ushort *)((long)puVar28 + 0x16a) + ~uVar27;
      *(short *)((long)puStack_88 + 0x16a) = (short)uVar20;
      plVar18 = puVar11 + uVar27 * 3;
      lVar17 = *plVar18;
      lVar16 = plVar18[1];
      if (uVar20 < 0xc) {
        uStack_90 = puVar28[uVar27 + 0x22];
        lStack_98 = plVar18[2];
        _memcpy(puStack_88 + 1,puVar11 + (uVar27 + 1) * 3,uVar20 * 0x18);
        _memcpy(puStack_88 + 0x22,puVar28 + uVar27 + 0x23,uVar20 * 8);
        *(short *)((long)puVar28 + 0x16a) = (short)uVar27;
        puVar11 = puStack_88;
        if (!bVar8) {
          puVar11 = puVar28;
        }
        uVar5 = *(ushort *)((long)puVar11 + 0x16a);
        plVar18 = puVar11 + (long)puVar23 * 3 + 1;
        lVar14 = (long)(ulong)uVar5 - (long)puVar23;
        if ((undefined8 *)(ulong)uVar5 < puVar23 || lVar14 == 0) {
          *plVar18 = lVar26;
          plVar18[1] = (long)puVar24;
          plVar18[2] = uVar25;
        }
        else {
          _memmove(puVar11 + ((long)puVar23 + 1) * 3 + 1,plVar18,lVar14 * 0x18);
          *plVar18 = lVar26;
          plVar18[1] = (long)puVar24;
          plVar18[2] = uVar25;
          _memmove(puVar11 + (long)puVar23 + 0x23,puVar11 + (long)puVar23 + 0x22,lVar14 * 8);
        }
        puVar11[(long)puVar23 + 0x22] = param_3;
        *(ushort *)((long)puVar11 + 0x16a) = uVar5 + 1;
        if (lVar17 != -0x8000000000000000) {
          uVar25 = 0;
          do {
            puVar24 = (undefined8 *)*puVar28;
            if (puVar24 == (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*param_1;
              if (puVar28 == (undefined8 *)0x0) {
                func_0x000108a07a20(&UNK_10b2380e8);
                goto LAB_100f32a9c;
              }
              uVar27 = param_1[1];
              puVar24 = (undefined8 *)_malloc(0x1d0);
              if (puVar24 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1d0);
                goto LAB_100f32a9c;
              }
              *puVar24 = 0;
              *(undefined2 *)((long)puVar24 + 0x16a) = 0;
              puVar24[0x2e] = puVar28;
              if (0xfffffffffffffffe < uVar27) {
                func_0x000108a07a20(&UNK_10b238148);
                goto LAB_100f32a9c;
              }
              *puVar28 = puVar24;
              *(undefined2 *)(puVar28 + 0x2d) = 0;
              *param_1 = puVar24;
              param_1[1] = uVar27 + 1;
              if (uVar25 != uVar27) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
                goto LAB_100f32a9c;
              }
              *(undefined2 *)((long)puVar24 + 0x16a) = 1;
              puVar24[1] = lVar17;
              puVar24[2] = lVar16;
              puVar24[3] = lStack_98;
              puVar24[0x22] = uStack_90;
              puVar24[0x2f] = puStack_88;
              *puStack_88 = puVar24;
              *(undefined2 *)(puStack_88 + 0x2d) = 1;
              break;
            }
            uVar5 = *(ushort *)(puVar28 + 0x2d);
            uVar27 = (ulong)uVar5;
            uVar6 = *(ushort *)((long)puVar24 + 0x16a);
            uVar20 = (ulong)uVar6;
            if (uVar6 < 0xb) {
              plVar18 = puVar24 + uVar27 * 3 + 1;
              if (uVar5 < uVar6) {
                _memmove(puVar24 + (uVar27 + 1) * 3 + 1,plVar18,(uVar20 - uVar27) * 0x18);
                *plVar18 = lVar17;
                plVar18[1] = lVar16;
                plVar18[2] = lStack_98;
                lVar26 = (uVar20 - uVar27) * 8;
                _memmove(puVar24 + uVar27 + 0x23,puVar24 + uVar27 + 0x22,lVar26);
                puVar24[uVar27 + 0x22] = uStack_90;
                _memmove(puVar24 + uVar27 + 0x30,puVar24 + uVar27 + 0x2f,lVar26);
              }
              else {
                *plVar18 = lVar17;
                plVar18[1] = lVar16;
                plVar18[2] = lStack_98;
                puVar24[uVar27 + 0x22] = uStack_90;
              }
              puVar24[uVar27 + 0x2f] = puStack_88;
              *(ushort *)((long)puVar24 + 0x16a) = uVar6 + 1;
              if (uVar27 + 1 < uVar20 + 2) {
                lVar26 = uVar27 + 0x2f;
                do {
                  puVar28 = (undefined8 *)puVar24[lVar26];
                  *puVar28 = puVar24;
                  *(short *)(puVar28 + 0x2d) = (short)lVar26 + -0x2e;
                  lVar26 = lVar26 + 1;
                } while (lVar26 - uVar20 != 0x30);
              }
              break;
            }
            uVar25 = uVar25 + 1;
            uVar3 = 5;
            if (uVar5 != 6) {
              uVar3 = 6;
            }
            uVar19 = 0;
            if (uVar5 != 6) {
              uVar19 = uVar27 - 7;
            }
            uVar4 = uVar27;
            uVar7 = uVar27;
            if (uVar5 != 5) {
              uVar4 = uVar19;
              uVar7 = uVar3;
            }
            uVar3 = 4;
            if (4 < uVar5) {
              uVar27 = uVar4;
              uVar3 = uVar7;
            }
            puVar11 = (undefined8 *)_malloc(0x1d0);
            if (puVar11 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1d0);
              goto LAB_100f32a9c;
            }
            *puVar11 = 0;
            uVar19 = (ulong)*(ushort *)((long)puVar24 + 0x16a) + ~uVar3;
            *(short *)((long)puVar11 + 0x16a) = (short)uVar19;
            plVar18 = puVar24 + uVar3 * 3 + 1;
            lVar26 = *plVar18;
            lVar14 = plVar18[1];
            if (0xb < uVar19) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,uVar19,0xb,&UNK_10b2381a8);
              goto LAB_100f32a9c;
            }
            uVar15 = puVar24[uVar3 + 0x22];
            lVar13 = plVar18[2];
            _memcpy(puVar11 + 1,puVar24 + (uVar3 + 1) * 3 + 1,uVar19 * 0x18);
            _memcpy(puVar11 + 0x22,puVar24 + uVar3 + 0x23,uVar19 * 8);
            *(short *)((long)puVar24 + 0x16a) = (short)uVar3;
            uVar19 = (ulong)*(ushort *)((long)puVar11 + 0x16a);
            lVar2 = uVar19 + 1;
            if (0xb < uVar19) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,lVar2,0xc,&UNK_10b2381c0);
              goto LAB_100f32a9c;
            }
            if (uVar20 - uVar3 != lVar2) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
              goto LAB_100f32a9c;
            }
            _memcpy(puVar11 + 0x2e,puVar24 + uVar3 + 0x2f,lVar2 * 8);
            uVar20 = 0;
            do {
              puVar28 = (undefined8 *)(puVar11 + 0x2e)[uVar20];
              *puVar28 = puVar11;
              *(short *)(puVar28 + 0x2d) = (short)uVar20;
              if (uVar19 <= uVar20) break;
              uVar20 = uVar20 + 1;
            } while (uVar20 <= uVar19);
            puVar28 = puVar11;
            if (uVar5 < 6) {
              puVar28 = puVar24;
            }
            uVar5 = *(ushort *)((long)puVar28 + 0x16a);
            uVar20 = (ulong)uVar5;
            plVar18 = puVar28 + (long)(int)uVar27 * 3 + 1;
            lVar2 = uVar20 - uVar27;
            if (uVar20 < uVar27 || lVar2 == 0) {
              *plVar18 = lVar17;
              plVar18[1] = lVar16;
              plVar18[2] = lStack_98;
              puVar28[uVar27 + 0x22] = uStack_90;
            }
            else {
              _memmove(puVar28 + (long)(int)(uVar27 + 1) * 3 + 1,plVar18,lVar2 * 0x18);
              *plVar18 = lVar17;
              plVar18[1] = lVar16;
              plVar18[2] = lStack_98;
              _memmove(puVar28 + uVar27 + 0x23,puVar28 + uVar27 + 0x22,lVar2 * 8);
              puVar28[uVar27 + 0x22] = uStack_90;
              _memmove(puVar28 + uVar27 + 0x30,puVar28 + uVar27 + 0x2f,lVar2 * 8);
            }
            puVar28[uVar27 + 0x2f] = puStack_88;
            *(ushort *)((long)puVar28 + 0x16a) = uVar5 + 1;
            if (uVar27 + 1 < uVar20 + 2) {
              lVar17 = uVar27 + 0x2f;
              do {
                puVar22 = (undefined8 *)puVar28[lVar17];
                *puVar22 = puVar28;
                *(short *)(puVar22 + 0x2d) = (short)lVar17 + -0x2e;
                lVar17 = lVar17 + 1;
              } while (lVar17 - uVar20 != 0x30);
            }
            lVar16 = lVar14;
            lVar17 = lVar26;
            puVar28 = puVar24;
            lStack_98 = lVar13;
            uStack_90 = uVar15;
            puStack_88 = puVar11;
          } while (lVar26 != -0x8000000000000000);
        }
        goto LAB_100f323ac;
      }
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar20,0xb,&UNK_10b2381a8);
    }
LAB_100f32a9c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100f32aa0);
    (*pcVar9)();
  }
  goto LAB_100f32374;
}

