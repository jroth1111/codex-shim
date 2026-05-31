
void FUN_100f333f0(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lStack_168;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  puVar10 = (undefined8 *)*param_2;
  if (puVar10 != (undefined8 *)0x0) {
    lVar16 = param_2[1];
    puVar15 = (undefined8 *)param_3[1];
    uVar14 = param_3[2];
    do {
      puVar23 = puVar10 + 1;
      uVar4 = *(ushort *)((long)puVar10 + 0x21a);
      puVar24 = (undefined8 *)(ulong)uVar4;
      lVar27 = (long)puVar24 * 0x18;
      puVar18 = (undefined8 *)0xffffffffffffffff;
      puVar11 = puVar23;
      do {
        puVar19 = puVar24;
        if (lVar27 == 0) goto LAB_100f334a8;
        uVar28 = puVar11[2];
        uVar25 = uVar14;
        if (uVar28 <= uVar14) {
          uVar25 = uVar28;
        }
        iVar9 = _memcmp(puVar15,puVar11[1],uVar25);
        lVar13 = uVar14 - uVar28;
        if (iVar9 != 0) {
          lVar13 = (long)iVar9;
        }
        cVar1 = 0 < lVar13;
        if (lVar13 < 0) {
          cVar1 = -1;
        }
        lVar27 = lVar27 + -0x18;
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        puVar11 = puVar11 + 3;
      } while (cVar1 == '\x01');
      puVar19 = puVar18;
      if (cVar1 == '\0') {
        param_2 = puVar18;
        puVar18 = puVar10;
        if (*param_3 != 0) {
          _free(puVar15);
        }
        goto LAB_100f334f0;
      }
LAB_100f334a8:
      if (lVar16 == 0) goto LAB_100f335a8;
      puVar10 = (undefined8 *)puVar10[(long)puVar19 + 0x44];
      lVar16 = lVar16 + -1;
    } while( true );
  }
  lVar16 = *param_3;
  puVar18 = (undefined8 *)param_3[1];
  if (lVar16 != -0x8000000000000000) {
    lVar27 = param_3[2];
    puVar10 = (undefined8 *)_malloc(0x220);
    if (puVar10 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
      goto LAB_100f33e58;
    }
    *param_2 = puVar10;
    param_2[1] = 0;
    *(undefined2 *)((long)puVar10 + 0x21a) = 1;
    *puVar10 = 0;
    puVar10[1] = lVar16;
    puVar10[2] = puVar18;
    puVar10[3] = lVar27;
    uVar12 = *param_4;
    puVar10[0x23] = param_4[1];
    puVar10[0x22] = uVar12;
    puVar10[0x24] = param_4[2];
    goto LAB_100f33578;
  }
LAB_100f334f0:
  uVar31 = puVar18[(long)param_2 * 3 + 0x23];
  uVar29 = puVar18[(long)param_2 * 3 + 0x22];
  uVar12 = puVar18[(long)param_2 * 3 + 0x24];
  uVar32 = param_4[1];
  uVar30 = *param_4;
  puVar18[(long)param_2 * 3 + 0x24] = param_4[2];
  puVar18[(long)param_2 * 3 + 0x23] = uVar32;
  puVar18[(long)param_2 * 3 + 0x22] = uVar30;
  param_1[2] = uVar31;
  param_1[1] = uVar29;
  param_1[3] = uVar12;
  *param_1 = 1;
  return;
LAB_100f335a8:
  lVar16 = *param_3;
  puVar18 = puVar15;
  if (lVar16 != -0x8000000000000000) {
    if (10 < uVar4) {
      if (puVar19 < (undefined8 *)0x5) {
        bVar7 = false;
        uVar25 = 4;
      }
      else if (puVar19 == (undefined8 *)0x5) {
        bVar7 = false;
        uVar25 = 5;
      }
      else if (puVar19 == (undefined8 *)0x6) {
        puVar19 = (undefined8 *)0x0;
        bVar7 = true;
        uVar25 = 5;
      }
      else {
        puVar19 = (undefined8 *)((long)puVar19 + -7);
        bVar7 = true;
        uVar25 = 6;
      }
      puVar18 = (undefined8 *)_malloc(0x220);
      if (puVar18 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
      }
      else {
        *puVar18 = 0;
        uVar28 = (ulong)*(ushort *)((long)puVar10 + 0x21a) + ~uVar25;
        *(short *)((long)puVar18 + 0x21a) = (short)uVar28;
        plVar21 = puVar23 + uVar25 * 3;
        lVar13 = *plVar21;
        lVar27 = plVar21[1];
        lVar26 = plVar21[2];
        puVar11 = puVar10 + uVar25 * 3 + 0x22;
        if (uVar28 < 0xc) {
          _memcpy(puVar18 + 1,puVar23 + uVar25 * 3 + 3,uVar28 * 0x18);
          _memcpy(puVar18 + 0x22,puVar10 + uVar25 * 3 + 0x25,uVar28 * 0x18);
          *(short *)((long)puVar10 + 0x21a) = (short)uVar25;
          uStack_128 = puVar11[1];
          uStack_130 = *puVar11;
          uStack_120 = puVar11[2];
          puVar23 = puVar18;
          if (!bVar7) {
            puVar23 = puVar10;
          }
          uVar4 = *(ushort *)((long)puVar23 + 0x21a);
          plVar21 = puVar23 + (long)puVar19 * 3 + 1;
          lVar22 = (long)(ulong)uVar4 - (long)puVar19;
          if ((undefined8 *)(ulong)uVar4 < puVar19 || lVar22 == 0) {
            uStack_e8 = param_4[1];
            uStack_f0 = *param_4;
            uStack_e0 = param_4[2];
          }
          else {
            _memmove(puVar23 + (long)puVar19 * 3 + 4,plVar21);
            uStack_e8 = param_4[1];
            uStack_f0 = *param_4;
            uStack_e0 = param_4[2];
            _memmove(puVar23 + (long)puVar19 * 3 + 0x25,puVar23 + (long)puVar19 * 3 + 0x22,
                     lVar22 * 0x18);
          }
          *plVar21 = lVar16;
          plVar21[1] = (long)puVar15;
          plVar21[2] = uVar14;
          puVar23[(long)puVar19 * 3 + 0x23] = uStack_e8;
          puVar23[(long)puVar19 * 3 + 0x22] = uStack_f0;
          puVar23[(long)puVar19 * 3 + 0x24] = uStack_e0;
          *(ushort *)((long)puVar23 + 0x21a) = uVar4 + 1;
          if (lVar13 == -0x8000000000000000) goto LAB_100f33578;
          if ((undefined8 *)*puVar10 == (undefined8 *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            lVar16 = lVar26;
            lVar22 = lVar13;
            puVar15 = puVar18;
            puVar23 = (undefined8 *)*puVar10;
            lStack_168 = lVar27;
            do {
              puVar11 = puVar23;
              uVar4 = *(ushort *)(puVar10 + 0x43);
              uVar25 = (ulong)uVar4;
              uVar5 = *(ushort *)((long)puVar11 + 0x21a);
              uVar28 = (ulong)uVar5;
              if (uVar5 < 0xb) {
                uVar14 = uVar25 + 1;
                plVar21 = puVar11 + uVar25 * 3 + 1;
                if (uVar4 < uVar5) {
                  lVar27 = (uVar28 - uVar25) * 0x18;
                  _memmove(puVar11 + uVar14 * 3 + 1,plVar21,lVar27);
                  _memmove(puVar11 + uVar14 * 3 + 0x22,puVar11 + uVar25 * 3 + 0x22,lVar27);
                }
                *plVar21 = lVar22;
                plVar21[1] = lStack_168;
                plVar21[2] = lVar16;
                puVar11[uVar25 * 3 + 0x23] = uStack_128;
                puVar11[uVar25 * 3 + 0x22] = uStack_130;
                puVar11[uVar25 * 3 + 0x24] = uStack_120;
                if (uVar4 < uVar5) {
                  _memmove(puVar11 + uVar25 + 0x46,puVar11 + uVar25 + 0x45,(uVar28 - uVar25) * 8);
                }
                puVar11[uVar25 + 0x45] = puVar15;
                *(ushort *)((long)puVar11 + 0x21a) = uVar5 + 1;
                if (uVar14 < uVar28 + 2) {
                  lVar16 = uVar25 + 0x45;
                  do {
                    puVar10 = (undefined8 *)puVar11[lVar16];
                    *puVar10 = puVar11;
                    *(short *)(puVar10 + 0x43) = (short)lVar16 + -0x44;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 - uVar28 != 0x46);
                }
                goto LAB_100f33578;
              }
              uVar14 = uVar14 + 1;
              uVar17 = 5;
              if (uVar4 != 6) {
                uVar17 = 6;
              }
              uVar20 = 0;
              if (uVar4 != 6) {
                uVar20 = uVar25 - 7;
              }
              uVar3 = uVar25;
              uVar6 = uVar25;
              if (uVar4 != 5) {
                uVar3 = uVar20;
                uVar6 = uVar17;
              }
              uVar17 = 4;
              if (4 < uVar4) {
                uVar25 = uVar3;
                uVar17 = uVar6;
              }
              puVar18 = (undefined8 *)_malloc(0x280);
              if (puVar18 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x280);
                goto LAB_100f33e58;
              }
              *puVar18 = 0;
              uVar20 = (ulong)*(ushort *)((long)puVar11 + 0x21a) + ~uVar17;
              *(short *)((long)puVar18 + 0x21a) = (short)uVar20;
              plVar21 = puVar11 + uVar17 * 3 + 1;
              lVar13 = *plVar21;
              lVar27 = plVar21[1];
              lVar26 = plVar21[2];
              puVar10 = puVar11 + uVar17 * 3 + 0x22;
              if (0xb < uVar20) {
                func_0x000108a07904(0,uVar20,0xb,&UNK_10b2381a8);
                goto LAB_100f33e58;
              }
              _memcpy(puVar18 + 1,puVar11 + uVar17 * 3 + 4,uVar20 * 0x18);
              _memcpy(puVar18 + 0x22,puVar11 + uVar17 * 3 + 0x25,uVar20 * 0x18);
              *(short *)((long)puVar11 + 0x21a) = (short)uVar17;
              uVar30 = puVar10[1];
              uVar29 = *puVar10;
              uVar12 = puVar10[2];
              uVar20 = (ulong)*(ushort *)((long)puVar18 + 0x21a);
              lVar2 = uVar20 + 1;
              if (0xb < uVar20) {
                func_0x000108a07904(0,lVar2,0xc,&UNK_10b2381c0);
                goto LAB_100f33e58;
              }
              if (uVar28 - uVar17 != lVar2) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
                goto LAB_100f33e58;
              }
              _memcpy(puVar18 + 0x44,puVar11 + uVar17 + 0x45,lVar2 * 8);
              uVar28 = 0;
              do {
                puVar10 = (undefined8 *)(puVar18 + 0x44)[uVar28];
                *puVar10 = puVar18;
                *(short *)(puVar10 + 0x43) = (short)uVar28;
                if (uVar20 <= uVar28) break;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              puVar10 = puVar18;
              if (uVar4 < 6) {
                puVar10 = puVar11;
              }
              uVar4 = *(ushort *)((long)puVar10 + 0x21a);
              uVar17 = (ulong)uVar4;
              uVar28 = uVar25 + 1;
              iVar9 = (int)uVar25;
              plVar21 = puVar10 + (long)iVar9 * 3 + 1;
              lVar2 = uVar17 - uVar25;
              if (uVar17 < uVar25 || lVar2 == 0) {
                *plVar21 = lVar22;
                plVar21[1] = lStack_168;
                plVar21[2] = lVar16;
                puVar10[(long)iVar9 * 3 + 0x23] = uStack_128;
                puVar10[(long)iVar9 * 3 + 0x22] = uStack_130;
                puVar10[(long)iVar9 * 3 + 0x24] = uStack_120;
              }
              else {
                _memmove(puVar10 + uVar28 * 3 + 1,plVar21,lVar2 * 0x18);
                *plVar21 = lVar22;
                plVar21[1] = lStack_168;
                plVar21[2] = lVar16;
                puVar23 = puVar10 + (long)iVar9 * 3 + 0x22;
                _memmove(puVar10 + uVar28 * 3 + 0x22,puVar23,lVar2 * 0x18);
                puVar23[1] = uStack_128;
                *puVar23 = uStack_130;
                puVar23[2] = uStack_120;
                _memmove(puVar10 + uVar25 + 0x46,puVar10 + uVar25 + 0x45,lVar2 * 8);
              }
              puVar10[uVar25 + 0x45] = puVar15;
              *(ushort *)((long)puVar10 + 0x21a) = uVar4 + 1;
              if (uVar28 < uVar17 + 2) {
                lVar16 = uVar25 + 0x45;
                do {
                  puVar15 = (undefined8 *)puVar10[lVar16];
                  *puVar15 = puVar10;
                  *(short *)(puVar15 + 0x43) = (short)lVar16 + -0x44;
                  lVar16 = lVar16 + 1;
                } while (lVar16 - uVar17 != 0x46);
              }
              if (lVar13 == -0x8000000000000000) goto LAB_100f33578;
              lVar16 = lVar26;
              lVar22 = lVar13;
              puVar15 = puVar18;
              puVar23 = (undefined8 *)*puVar11;
              puVar10 = puVar11;
              lStack_168 = lVar27;
              uStack_130 = uVar29;
              uStack_128 = uVar30;
              uStack_120 = uVar12;
            } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
          }
          puVar10 = (undefined8 *)*param_2;
          if (puVar10 == (undefined8 *)0x0) {
            func_0x000108a07a20(&UNK_10b2380e8);
          }
          else {
            uVar25 = param_2[1];
            puVar15 = (undefined8 *)_malloc(0x280);
            if (puVar15 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x280);
            }
            else {
              *puVar15 = 0;
              *(undefined2 *)((long)puVar15 + 0x21a) = 0;
              puVar15[0x44] = puVar10;
              if (uVar25 < 0xffffffffffffffff) {
                *puVar10 = puVar15;
                *(undefined2 *)(puVar10 + 0x43) = 0;
                *param_2 = puVar15;
                param_2[1] = uVar25 + 1;
                if (uVar14 == uVar25) {
                  *(undefined2 *)((long)puVar15 + 0x21a) = 1;
                  puVar15[1] = lVar13;
                  puVar15[2] = lVar27;
                  puVar15[3] = lVar26;
                  puVar15[0x23] = uStack_128;
                  puVar15[0x22] = uStack_130;
                  puVar15[0x24] = uStack_120;
                  puVar15[0x45] = puVar18;
                  *puVar18 = puVar15;
                  *(undefined2 *)(puVar18 + 0x43) = 1;
                  goto LAB_100f33578;
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
          func_0x000108a07904(0,uVar28,0xb,&UNK_10b2381a8);
        }
      }
LAB_100f33e58:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100f33e5c);
      (*pcVar8)();
    }
    plVar21 = puVar23 + (long)puVar19 * 3;
    if (puVar24 < puVar19 || (long)puVar24 - (long)puVar19 == 0) {
      uStack_e8 = param_4[1];
      uStack_f0 = *param_4;
      uStack_e0 = param_4[2];
    }
    else {
      lVar27 = ((long)puVar24 - (long)puVar19) * 0x18;
      _memmove(puVar23 + (long)puVar19 * 3 + 3,plVar21,lVar27);
      uStack_e8 = param_4[1];
      uStack_f0 = *param_4;
      uStack_e0 = param_4[2];
      _memmove(puVar10 + (long)puVar19 * 3 + 0x25,puVar10 + (long)puVar19 * 3 + 0x22,lVar27);
    }
    *plVar21 = lVar16;
    plVar21[1] = (long)puVar15;
    plVar21[2] = uVar14;
    puVar10[(long)puVar19 * 3 + 0x23] = uStack_e8;
    puVar10[(long)puVar19 * 3 + 0x22] = uStack_f0;
    puVar10[(long)puVar19 * 3 + 0x24] = uStack_e0;
    *(ushort *)((long)puVar10 + 0x21a) = uVar4 + 1;
LAB_100f33578:
    param_2[2] = param_2[2] + 1;
    *param_1 = 0;
    return;
  }
  goto LAB_100f334f0;
}

