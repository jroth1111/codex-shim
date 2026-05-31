
void FUN_100f32b40(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lStack_90;
  undefined8 *puStack_68;
  
  puVar29 = (undefined8 *)*param_1;
  if (puVar29 != (undefined8 *)0x0) {
    lVar21 = param_1[1];
    puVar28 = (undefined8 *)param_2[1];
    uVar25 = param_2[2];
    do {
      puVar13 = puVar29 + 1;
      uVar7 = *(ushort *)((long)puVar29 + 0x112);
      puVar23 = (undefined8 *)(ulong)uVar7;
      lVar18 = (long)puVar23 * 0x18;
      puVar26 = (undefined8 *)0xffffffffffffffff;
      puVar14 = puVar13;
      do {
        puVar27 = puVar23;
        if (lVar18 == 0) goto LAB_100f32bf4;
        uVar22 = puVar14[2];
        uVar24 = uVar25;
        if (uVar22 <= uVar25) {
          uVar24 = uVar22;
        }
        iVar12 = _memcmp(puVar28,puVar14[1],uVar24);
        lVar17 = uVar25 - uVar22;
        if (iVar12 != 0) {
          lVar17 = (long)iVar12;
        }
        cVar1 = 0 < lVar17;
        if (lVar17 < 0) {
          cVar1 = -1;
        }
        lVar18 = lVar18 + -0x18;
        puVar26 = (undefined8 *)((long)puVar26 + 1);
        puVar14 = puVar14 + 3;
      } while (cVar1 == '\x01');
      puVar27 = puVar26;
      if (cVar1 == '\0') {
        param_1 = puVar26;
        puVar26 = puVar29;
        if (*param_2 != 0) {
          _free(puVar28);
        }
        goto LAB_100f32c38;
      }
LAB_100f32bf4:
      if (lVar21 == 0) goto LAB_100f32c9c;
      puVar29 = (undefined8 *)puVar29[(long)puVar27 + 0x24];
      lVar21 = lVar21 + -1;
    } while( true );
  }
  lVar21 = *param_2;
  puVar26 = (undefined8 *)param_2[1];
  if (lVar21 != -0x8000000000000000) {
    lVar18 = param_2[2];
    puVar29 = (undefined8 *)_malloc(0x120);
    if (puVar29 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x120);
      goto LAB_100f33354;
    }
    *param_1 = puVar29;
    param_1[1] = 0;
    *(undefined2 *)((long)puVar29 + 0x112) = 1;
    *puVar29 = 0;
    puVar29[1] = lVar21;
    puVar29[2] = puVar26;
    puVar29[3] = lVar18;
    *(undefined1 *)((long)puVar29 + 0x114) = param_3;
    goto LAB_100f32c70;
  }
LAB_100f32c38:
  *(undefined1 *)((long)puVar26 + (long)param_1 + 0x114) = param_3;
  return;
LAB_100f32c9c:
  lVar21 = *param_2;
  puVar26 = puVar28;
  if (lVar21 != -0x8000000000000000) {
    if (uVar7 < 0xb) {
      plVar19 = puVar13 + (long)puVar27 * 3;
      lVar18 = (long)puVar23 - (long)puVar27;
      if (puVar23 < puVar27 || lVar18 == 0) {
        *plVar19 = lVar21;
        plVar19[1] = (long)puVar28;
        plVar19[2] = uVar25;
      }
      else {
        _memmove(puVar13 + ((long)puVar27 + 1) * 3,plVar19,lVar18 * 0x18);
        *plVar19 = lVar21;
        plVar19[1] = (long)puVar28;
        plVar19[2] = uVar25;
        _memmove((long)puVar29 + 0x114 + (long)puVar27 + 1,(long)puVar29 + 0x114 + (long)puVar27,
                 lVar18);
      }
      *(undefined1 *)((long)puVar29 + (long)puVar27 + 0x114) = param_3;
      *(ushort *)((long)puVar29 + 0x112) = uVar7 + 1;
LAB_100f32c70:
      param_1[2] = param_1[2] + 1;
      return;
    }
    if (puVar27 < (undefined8 *)0x5) {
      bVar10 = false;
      uVar24 = 4;
    }
    else if (puVar27 == (undefined8 *)0x5) {
      bVar10 = false;
      uVar24 = 5;
    }
    else if (puVar27 == (undefined8 *)0x6) {
      puVar27 = (undefined8 *)0x0;
      bVar10 = true;
      uVar24 = 5;
    }
    else {
      puVar27 = (undefined8 *)((long)puVar27 + -7);
      bVar10 = true;
      uVar24 = 6;
    }
    puStack_68 = (undefined8 *)_malloc(0x120);
    if (puStack_68 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x120);
    }
    else {
      *puStack_68 = 0;
      uVar22 = (ulong)*(ushort *)((long)puVar29 + 0x112) + ~uVar24;
      *(short *)((long)puStack_68 + 0x112) = (short)uVar22;
      plVar19 = puVar13 + uVar24 * 3;
      lVar18 = *plVar19;
      lVar17 = plVar19[1];
      if (uVar22 < 0xc) {
        uVar5 = *(undefined1 *)((long)puVar29 + uVar24 + 0x114);
        lStack_90 = plVar19[2];
        _memcpy(puStack_68 + 1,puVar13 + (uVar24 + 1) * 3,uVar22 * 0x18);
        _memcpy((long)puStack_68 + 0x114,(long)puVar29 + uVar24 + 0x115,uVar22);
        *(short *)((long)puVar29 + 0x112) = (short)uVar24;
        puVar13 = puStack_68;
        if (!bVar10) {
          puVar13 = puVar29;
        }
        uVar7 = *(ushort *)((long)puVar13 + 0x112);
        plVar19 = puVar13 + (long)puVar27 * 3 + 1;
        lVar16 = (long)(ulong)uVar7 - (long)puVar27;
        if ((undefined8 *)(ulong)uVar7 < puVar27 || lVar16 == 0) {
          *plVar19 = lVar21;
          plVar19[1] = (long)puVar28;
          plVar19[2] = uVar25;
        }
        else {
          _memmove(puVar13 + ((long)puVar27 + 1) * 3 + 1,plVar19,lVar16 * 0x18);
          *plVar19 = lVar21;
          plVar19[1] = (long)puVar28;
          plVar19[2] = uVar25;
          _memmove((long)puVar13 + 0x114 + (long)puVar27 + 1,(long)puVar13 + 0x114 + (long)puVar27,
                   lVar16);
        }
        *(undefined1 *)((long)puVar13 + (long)puVar27 + 0x114) = param_3;
        *(ushort *)((long)puVar13 + 0x112) = uVar7 + 1;
        if (lVar18 != -0x8000000000000000) {
          uVar25 = 0;
          do {
            puVar28 = (undefined8 *)*puVar29;
            if (puVar28 == (undefined8 *)0x0) {
              puVar29 = (undefined8 *)*param_1;
              if (puVar29 == (undefined8 *)0x0) {
                func_0x000108a07a20(&UNK_10b2380e8);
                goto LAB_100f33354;
              }
              uVar24 = param_1[1];
              puVar28 = (undefined8 *)_malloc(0x180);
              if (puVar28 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x180);
                goto LAB_100f33354;
              }
              *puVar28 = 0;
              *(undefined2 *)((long)puVar28 + 0x112) = 0;
              puVar28[0x24] = puVar29;
              if (0xfffffffffffffffe < uVar24) {
                func_0x000108a07a20(&UNK_10b238148);
                goto LAB_100f33354;
              }
              *puVar29 = puVar28;
              *(undefined2 *)(puVar29 + 0x22) = 0;
              *param_1 = puVar28;
              param_1[1] = uVar24 + 1;
              if (uVar25 != uVar24) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
                goto LAB_100f33354;
              }
              *(undefined2 *)((long)puVar28 + 0x112) = 1;
              puVar28[1] = lVar18;
              puVar28[2] = lVar17;
              puVar28[3] = lStack_90;
              *(undefined1 *)((long)puVar28 + 0x114) = uVar5;
              puVar28[0x25] = puStack_68;
              *puStack_68 = puVar28;
              *(undefined2 *)(puStack_68 + 0x22) = 1;
              break;
            }
            uVar7 = *(ushort *)(puVar29 + 0x22);
            uVar24 = (ulong)uVar7;
            uVar8 = *(ushort *)((long)puVar28 + 0x112);
            uVar22 = (ulong)uVar8;
            if (uVar8 < 0xb) {
              plVar19 = puVar28 + uVar24 * 3 + 1;
              if (uVar7 < uVar8) {
                lVar21 = uVar22 - uVar24;
                _memmove(puVar28 + (uVar24 + 1) * 3 + 1,plVar19,lVar21 * 0x18);
                *plVar19 = lVar18;
                plVar19[1] = lVar17;
                plVar19[2] = lStack_90;
                _memmove((long)puVar28 + uVar24 + 0x115,(long)puVar28 + uVar24 + 0x114,lVar21);
                *(undefined1 *)((long)puVar28 + uVar24 + 0x114) = uVar5;
                _memmove(puVar28 + uVar24 + 0x26,puVar28 + uVar24 + 0x25,lVar21 * 8);
              }
              else {
                *plVar19 = lVar18;
                plVar19[1] = lVar17;
                plVar19[2] = lStack_90;
                *(undefined1 *)((long)puVar28 + uVar24 + 0x114) = uVar5;
              }
              puVar28[uVar24 + 0x25] = puStack_68;
              *(ushort *)((long)puVar28 + 0x112) = uVar8 + 1;
              if (uVar24 + 1 < uVar22 + 2) {
                lVar21 = uVar24 + 0x25;
                do {
                  puVar29 = (undefined8 *)puVar28[lVar21];
                  *puVar29 = puVar28;
                  *(short *)(puVar29 + 0x22) = (short)lVar21 + -0x24;
                  lVar21 = lVar21 + 1;
                } while (lVar21 - uVar22 != 0x26);
              }
              break;
            }
            uVar25 = uVar25 + 1;
            uVar3 = 5;
            if (uVar7 != 6) {
              uVar3 = 6;
            }
            uVar20 = 0;
            if (uVar7 != 6) {
              uVar20 = uVar24 - 7;
            }
            uVar4 = uVar24;
            uVar9 = uVar24;
            if (uVar7 != 5) {
              uVar4 = uVar20;
              uVar9 = uVar3;
            }
            uVar3 = 4;
            if (4 < uVar7) {
              uVar24 = uVar4;
              uVar3 = uVar9;
            }
            puVar13 = (undefined8 *)_malloc(0x180);
            if (puVar13 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x180);
              goto LAB_100f33354;
            }
            *puVar13 = 0;
            uVar20 = (ulong)*(ushort *)((long)puVar28 + 0x112) + ~uVar3;
            *(short *)((long)puVar13 + 0x112) = (short)uVar20;
            plVar19 = puVar28 + uVar3 * 3 + 1;
            lVar21 = *plVar19;
            lVar16 = plVar19[1];
            if (0xb < uVar20) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,uVar20,0xb,&UNK_10b2381a8);
              goto LAB_100f33354;
            }
            uVar6 = *(undefined1 *)((long)puVar28 + uVar3 + 0x114);
            lVar15 = plVar19[2];
            _memcpy(puVar13 + 1,puVar28 + (uVar3 + 1) * 3 + 1,uVar20 * 0x18);
            _memcpy((long)puVar13 + 0x114,(long)puVar28 + uVar3 + 0x115,uVar20);
            *(short *)((long)puVar28 + 0x112) = (short)uVar3;
            uVar20 = (ulong)*(ushort *)((long)puVar13 + 0x112);
            lVar2 = uVar20 + 1;
            if (0xb < uVar20) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,lVar2,0xc,&UNK_10b2381c0);
              goto LAB_100f33354;
            }
            if (uVar22 - uVar3 != lVar2) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
              goto LAB_100f33354;
            }
            _memcpy(puVar13 + 0x24,puVar28 + uVar3 + 0x25,lVar2 * 8);
            uVar22 = 0;
            do {
              puVar29 = (undefined8 *)(puVar13 + 0x24)[uVar22];
              *puVar29 = puVar13;
              *(short *)(puVar29 + 0x22) = (short)uVar22;
              if (uVar20 <= uVar22) break;
              uVar22 = uVar22 + 1;
            } while (uVar22 <= uVar20);
            puVar29 = puVar13;
            if (uVar7 < 6) {
              puVar29 = puVar28;
            }
            uVar7 = *(ushort *)((long)puVar29 + 0x112);
            uVar22 = (ulong)uVar7;
            plVar19 = puVar29 + (long)(int)uVar24 * 3 + 1;
            lVar2 = uVar22 - uVar24;
            if (uVar22 < uVar24 || lVar2 == 0) {
              *plVar19 = lVar18;
              plVar19[1] = lVar17;
              plVar19[2] = lStack_90;
              *(undefined1 *)((long)puVar29 + uVar24 + 0x114) = uVar5;
            }
            else {
              _memmove(puVar29 + (long)(int)(uVar24 + 1) * 3 + 1,plVar19,lVar2 * 0x18);
              *plVar19 = lVar18;
              plVar19[1] = lVar17;
              plVar19[2] = lStack_90;
              _memmove((long)puVar29 + uVar24 + 0x115,(long)puVar29 + uVar24 + 0x114,lVar2);
              *(undefined1 *)((long)puVar29 + uVar24 + 0x114) = uVar5;
              _memmove(puVar29 + uVar24 + 0x26,puVar29 + uVar24 + 0x25,lVar2 * 8);
            }
            puVar29[uVar24 + 0x25] = puStack_68;
            *(ushort *)((long)puVar29 + 0x112) = uVar7 + 1;
            if (uVar24 + 1 < uVar22 + 2) {
              lVar18 = uVar24 + 0x25;
              do {
                puVar26 = (undefined8 *)puVar29[lVar18];
                *puVar26 = puVar29;
                *(short *)(puVar26 + 0x22) = (short)lVar18 + -0x24;
                lVar18 = lVar18 + 1;
              } while (lVar18 - uVar22 != 0x26);
            }
            lVar17 = lVar16;
            lVar18 = lVar21;
            puVar29 = puVar28;
            lStack_90 = lVar15;
            puStack_68 = puVar13;
            uVar5 = uVar6;
          } while (lVar21 != -0x8000000000000000);
        }
        goto LAB_100f32c70;
      }
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar22,0xb,&UNK_10b2381a8);
    }
LAB_100f33354:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100f33358);
    (*pcVar11)();
  }
  goto LAB_100f32c38;
}

