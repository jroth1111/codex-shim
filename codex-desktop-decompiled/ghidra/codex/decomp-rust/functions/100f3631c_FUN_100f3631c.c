
void FUN_100f3631c(undefined8 *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *in_x14;
  undefined8 *extraout_x14;
  undefined8 *extraout_x14_00;
  ulong in_x15;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong uStack_110;
  undefined8 *puStack_108;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  
  puVar8 = (undefined8 *)*param_2;
  if (puVar8 != (undefined8 *)0x0) {
    uVar17 = param_2[1];
    puVar21 = (undefined8 *)param_3[1];
    uVar18 = param_3[2];
    puVar7 = param_1;
    do {
      puVar25 = puVar8 + 0x2d;
      uVar3 = *(ushort *)((long)puVar8 + 0x272);
      puVar27 = (ulong *)(ulong)uVar3;
      lVar26 = (long)puVar27 * 0x18;
      puVar19 = (ulong *)0xffffffffffffffff;
      puVar9 = puVar25;
      do {
        puVar20 = puVar27;
        if (lVar26 == 0) goto LAB_100f363d0;
        uVar22 = puVar9[2];
        uVar23 = uVar18;
        if (uVar22 <= uVar18) {
          uVar23 = uVar22;
        }
        puVar7 = (undefined8 *)_memcmp(puVar21,puVar9[1],uVar23);
        lVar15 = uVar18 - uVar22;
        if ((int)puVar7 != 0) {
          lVar15 = (long)(int)puVar7;
        }
        cVar1 = 0 < lVar15;
        if (lVar15 < 0) {
          cVar1 = -1;
        }
        lVar26 = lVar26 + -0x18;
        puVar19 = (ulong *)((long)puVar19 + 1);
        puVar9 = puVar9 + 3;
        in_x14 = extraout_x14;
        in_x15 = extraout_x15;
      } while (cVar1 == '\x01');
      puVar20 = puVar19;
      if (cVar1 == '\0') {
        param_2 = puVar19;
        puVar9 = puVar8;
        if (*param_3 != 0) {
          _free(puVar21);
        }
        goto LAB_100f36418;
      }
LAB_100f363d0:
      if (uVar17 == 0) goto LAB_100f364a8;
      puVar8 = (undefined8 *)puVar8[(long)puVar20 + 0x4f];
      uVar17 = uVar17 - 1;
    } while( true );
  }
  uVar18 = *param_3;
  puVar9 = (undefined8 *)param_3[1];
  if (uVar18 == 0x8000000000000000) goto LAB_100f36418;
  uVar17 = param_3[2];
  uVar29 = *param_4;
  uVar30 = param_4[1];
  uVar11 = param_4[2];
  uVar31 = param_4[3];
  puVar8 = (undefined8 *)_malloc(0x278);
  if (puVar8 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x278);
    goto LAB_100f36d20;
  }
  *param_2 = (ulong)puVar8;
  param_2[1] = 0;
  *(undefined2 *)((long)puVar8 + 0x272) = 1;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = uVar18;
  puVar8[0x2e] = puVar9;
  puVar8[0x2f] = uVar17;
  *puVar8 = uVar29;
  puVar8[1] = uVar30;
  puVar8[2] = uVar11;
  puVar8[3] = uVar31;
LAB_100f36474:
  param_2[2] = param_2[2] + 1;
  *param_1 = 2;
  return;
LAB_100f364a8:
  uVar17 = *param_3;
  puVar9 = puVar21;
  if (uVar17 == 0x8000000000000000) {
LAB_100f36418:
    puVar9 = puVar9 + (long)param_2 * 4;
    uVar30 = puVar9[1];
    uVar29 = *puVar9;
    uVar33 = puVar9[3];
    uVar31 = puVar9[2];
    uVar11 = *param_4;
    uVar34 = param_4[3];
    uVar32 = param_4[2];
    puVar9[1] = param_4[1];
    *puVar9 = uVar11;
    puVar9[3] = uVar34;
    puVar9[2] = uVar32;
    param_1[1] = uVar30;
    *param_1 = uVar29;
    param_1[3] = uVar33;
    param_1[2] = uVar31;
    return;
  }
  puVar9 = (undefined8 *)*param_4;
  uVar29 = param_4[1];
  uStack_f0 = param_4[2];
  uVar23 = param_4[3];
  if (uVar3 < 0xb) {
    puVar19 = puVar25 + (long)puVar20 * 3;
    puVar2 = puVar8 + (long)puVar20 * 4;
    lVar26 = (long)puVar27 - (long)puVar20;
    if (puVar27 < puVar20 || lVar26 == 0) {
      *puVar19 = uVar17;
      puVar19[1] = (ulong)puVar21;
      puVar19[2] = uVar18;
    }
    else {
      _memmove(puVar25 + ((long)puVar20 + 1) * 3,puVar19,lVar26 * 0x18);
      *puVar19 = uVar17;
      puVar19[1] = (ulong)puVar21;
      puVar19[2] = uVar18;
      puVar7 = (undefined8 *)_memmove(puVar8 + ((long)puVar20 + 1) * 4,puVar2,lVar26 * 0x20);
      in_x14 = extraout_x14_00;
      in_x15 = extraout_x15_00;
      puStack_108 = puVar9;
    }
    *puVar2 = puVar9;
    puVar2[1] = uVar29;
    puVar2[2] = uStack_f0;
    puVar2[3] = uVar23;
    lVar26 = -0x90;
    uVar11 = 2;
    *(ushort *)((long)puVar8 + 0x272) = uVar3 + 1;
    puVar25 = puVar8;
  }
  else {
    if (puVar20 < (ulong *)0x5) {
      bVar24 = false;
      uVar22 = 4;
    }
    else if (puVar20 == (ulong *)0x5) {
      bVar24 = false;
      uVar22 = 5;
    }
    else if (puVar20 == (ulong *)0x6) {
      puVar20 = (ulong *)0x0;
      bVar24 = true;
      uVar22 = 5;
    }
    else {
      puVar20 = (ulong *)((long)puVar20 + -7);
      bVar24 = true;
      uVar22 = 6;
    }
    in_x14 = (undefined8 *)_malloc(0x278);
    if (in_x14 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x278);
      goto LAB_100f36d20;
    }
    in_x14[0x2c] = 0;
    uVar16 = (ulong)*(ushort *)((long)puVar8 + 0x272) + ~uVar22;
    *(short *)((long)in_x14 + 0x272) = (short)uVar16;
    puVar10 = puVar25 + uVar22 * 3;
    uStack_e0 = *puVar10;
    puStack_e8 = (undefined8 *)puVar10[1];
    puVar27 = puVar8 + uVar22 * 4;
    uVar12 = puVar27[1];
    puVar19 = (ulong *)puVar27[2];
    if (0xb < uVar16) {
      func_0x000108a07904(0,uVar16,0xb,&UNK_10b2381a8);
      goto LAB_100f36d20;
    }
    uVar13 = puVar27[3];
    uVar28 = *puVar27;
    puVar7 = (undefined8 *)puVar10[2];
    _memcpy(in_x14 + 0x2d,puVar25 + (uVar22 + 1) * 3,uVar16 * 0x18);
    _memcpy(in_x14,puVar8 + (uVar22 + 1) * 4,uVar16 * 0x20);
    *(short *)((long)puVar8 + 0x272) = (short)uVar22;
    puVar2 = in_x14;
    if (!bVar24) {
      puVar2 = puVar8;
    }
    uVar3 = *(ushort *)((long)puVar2 + 0x272);
    puVar27 = puVar2 + (long)puVar20 * 3 + 0x2d;
    puVar25 = puVar2 + (long)puVar20 * 4;
    lVar26 = (long)(ulong)uVar3 - (long)puVar20;
    if ((ulong *)(ulong)uVar3 < puVar20 || lVar26 == 0) {
      *puVar27 = uVar17;
      puVar27[1] = (ulong)puVar21;
      puVar27[2] = uVar18;
      in_x15 = extraout_x15_01;
    }
    else {
      _memmove(puVar2 + ((long)puVar20 + 1) * 3 + 0x2d,puVar27,lVar26 * 0x18);
      *puVar27 = uVar17;
      puVar27[1] = (ulong)puVar21;
      puVar27[2] = uVar18;
      _memmove(puVar2 + ((long)puVar20 + 1) * 4,puVar25,lVar26 * 0x20);
      in_x15 = extraout_x15_02;
    }
    uVar11 = 0;
    *puVar25 = puVar9;
    puVar25[1] = uVar29;
    puVar25[2] = uStack_f0;
    puVar25[3] = uVar23;
    *(ushort *)((long)puVar2 + 0x272) = uVar3 + 1;
    lVar26 = -0x98;
    uVar18 = uVar13;
    uVar23 = uVar12;
    uStack_110 = uVar17;
    puStack_108 = puVar9;
    uStack_a0 = uVar28;
  }
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar26) = uVar11;
  if (uStack_a0 != 2) {
    if ((undefined8 *)puVar8[0x2c] == (undefined8 *)0x0) {
      uStack_110 = uStack_e0;
      uVar17 = uStack_a0;
      in_x15 = uVar23;
      uVar22 = uStack_a8;
      puVar21 = puStack_e8;
      puStack_108 = puVar7;
      uStack_f0 = uVar18;
    }
    else {
      uVar16 = 0;
      uVar17 = uStack_a0;
      uVar22 = uStack_a8;
      puVar9 = (undefined8 *)puVar8[0x2c];
      do {
        if (uVar22 != uVar16) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fef,0x35,&UNK_10b2381d8);
          goto LAB_100f36d20;
        }
        uVar3 = *(ushort *)(puVar8 + 0x4e);
        uVar22 = (ulong)uVar3;
        uVar4 = *(ushort *)((long)puVar9 + 0x272);
        uVar12 = (ulong)uVar4;
        if (uVar4 < 0xb) {
          uVar13 = uVar22 + 1;
          puVar20 = puVar9 + uVar22 * 3 + 0x2d;
          if (uVar3 < uVar4) {
            lVar26 = uVar12 - uVar22;
            _memmove(puVar9 + uVar13 * 3 + 0x2d,puVar20,lVar26 * 0x18);
            *puVar20 = uStack_e0;
            puVar20[1] = (ulong)puStack_e8;
            puVar10 = puVar9 + uVar22 * 4;
            puVar20[2] = (ulong)puVar7;
            _memmove(puVar9 + uVar13 * 4,puVar10,lVar26 * 0x20);
            *puVar10 = uVar17;
            puVar10[1] = uVar23;
            puVar10[2] = (ulong)puVar19;
            puVar10[3] = uVar18;
            _memmove(puVar9 + uVar22 + 0x51,puVar9 + uVar22 + 0x50,lVar26 * 8);
          }
          else {
            *puVar20 = uStack_e0;
            puVar20[1] = (ulong)puStack_e8;
            puVar20[2] = (ulong)puVar7;
            puVar20 = puVar9 + uVar22 * 4;
            *puVar20 = uVar17;
            puVar20[1] = uVar23;
            puVar20[2] = (ulong)puVar19;
            puVar20[3] = uVar18;
          }
          puVar9[uVar22 + 0x50] = in_x14;
          *(ushort *)((long)puVar9 + 0x272) = uVar4 + 1;
          in_x14 = puVar25;
          puVar19 = puVar27;
          if (uVar13 < uVar12 + 2) {
            lVar26 = uVar22 + 0x50;
            do {
              lVar15 = puVar9[lVar26];
              *(undefined8 **)(lVar15 + 0x160) = puVar9;
              *(short *)(lVar15 + 0x270) = (short)lVar26 + -0x4f;
              lVar26 = lVar26 + 1;
            } while (lVar26 - uVar12 != 0x51);
            puVar27 = &uStack_a8;
            uVar13 = 2;
            puVar9 = puVar8;
          }
          else {
            puVar27 = &uStack_a8;
            uVar13 = 2;
            puVar9 = puVar8;
          }
        }
        else {
          uVar13 = uVar16 + 1;
          uVar16 = 5;
          if (uVar3 != 6) {
            uVar16 = 6;
          }
          uVar28 = 0;
          if (uVar3 != 6) {
            uVar28 = uVar22 - 7;
          }
          uVar14 = uVar22;
          uVar5 = uVar22;
          if (uVar3 != 5) {
            uVar14 = uVar28;
            uVar5 = uVar16;
          }
          uVar16 = 4;
          if (4 < uVar3) {
            uVar22 = uVar14;
            uVar16 = uVar5;
          }
          puVar8 = (undefined8 *)_malloc(0x2d8);
          if (puVar8 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2d8);
            goto LAB_100f36d20;
          }
          puVar8[0x2c] = 0;
          uVar28 = (ulong)*(ushort *)((long)puVar9 + 0x272) + ~uVar16;
          *(short *)((long)puVar8 + 0x272) = (short)uVar28;
          puVar10 = puVar9 + uVar16 * 3 + 0x2d;
          uStack_110 = *puVar10;
          puVar21 = (undefined8 *)puVar10[1];
          puVar27 = puVar9 + uVar16 * 4;
          in_x15 = puVar27[1];
          puVar20 = (ulong *)puVar27[2];
          if (0xb < uVar28) {
            func_0x000108a07904(0,uVar28,0xb,&UNK_10b2381a8);
            goto LAB_100f36d20;
          }
          uStack_f0 = puVar27[3];
          uVar14 = *puVar27;
          puStack_108 = (undefined8 *)puVar10[2];
          _memcpy(puVar8 + 0x2d,puVar9 + (uVar16 + 1) * 3 + 0x2d,uVar28 * 0x18);
          _memcpy(puVar8,puVar9 + (uVar16 + 1) * 4,uVar28 * 0x20);
          *(short *)((long)puVar9 + 0x272) = (short)uVar16;
          uVar28 = (ulong)*(ushort *)((long)puVar8 + 0x272);
          lVar26 = uVar28 + 1;
          uStack_a0 = uStack_110;
          puStack_98 = puVar21;
          puStack_90 = puStack_108;
          uStack_88 = uVar14;
          uStack_80 = in_x15;
          puStack_78 = puVar20;
          uStack_70 = uStack_f0;
          if (0xb < uVar28) {
            func_0x000108a07904(0,lVar26,0xc,&UNK_10b2381c0);
            goto LAB_100f36d20;
          }
          if (uVar12 - uVar16 != lVar26) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
            goto LAB_100f36d20;
          }
          _memcpy(puVar8 + 0x4f,puVar9 + uVar16 + 0x50,lVar26 * 8);
          uVar16 = 0;
          do {
            lVar26 = (puVar8 + 0x4f)[uVar16];
            *(undefined8 **)(lVar26 + 0x160) = puVar8;
            *(short *)(lVar26 + 0x270) = (short)uVar16;
            if (uVar28 <= uVar16) break;
            uVar16 = uVar16 + 1;
          } while (uVar16 <= uVar28);
          puVar25 = puVar8;
          if (uVar3 < 6) {
            puVar25 = puVar9;
          }
          uVar3 = *(ushort *)((long)puVar25 + 0x272);
          uVar12 = (ulong)uVar3;
          uVar16 = uVar22 + 1;
          puVar10 = puVar25 + (long)(int)uVar22 * 3 + 0x2d;
          puVar27 = puVar25 + uVar22 * 4;
          lVar26 = uVar12 - uVar22;
          if (uVar12 < uVar22 || lVar26 == 0) {
            *puVar10 = uStack_e0;
            puVar10[1] = (ulong)puStack_e8;
            puVar10[2] = (ulong)puVar7;
            *puVar27 = uVar17;
            puVar27[1] = uVar23;
            puVar27[2] = (ulong)puVar19;
            puVar27[3] = uVar18;
          }
          else {
            _memmove(puVar25 + (long)(int)uVar16 * 3 + 0x2d,puVar10,lVar26 * 0x18);
            *puVar10 = uStack_e0;
            puVar10[1] = (ulong)puStack_e8;
            puVar10[2] = (ulong)puVar7;
            _memmove(puVar25 + uVar16 * 4,puVar27,lVar26 * 0x20);
            *puVar27 = uVar17;
            puVar27[1] = uVar23;
            puVar27[2] = (ulong)puVar19;
            puVar27[3] = uVar18;
            _memmove(puVar25 + uVar22 + 0x51,puVar25 + uVar22 + 0x50,lVar26 * 8);
          }
          puVar25[uVar22 + 0x50] = in_x14;
          *(ushort *)((long)puVar25 + 0x272) = uVar3 + 1;
          if (uVar16 < uVar12 + 2) {
            lVar26 = uVar22 + 0x50;
            do {
              lVar15 = puVar25[lVar26];
              *(undefined8 **)(lVar15 + 0x160) = puVar25;
              *(short *)(lVar15 + 0x270) = (short)lVar26 + -0x4f;
              lVar26 = lVar26 + 1;
            } while (lVar26 - uVar12 != 0x51);
          }
          puVar27 = &uStack_b0;
          uVar16 = uVar13;
          in_x14 = puVar8;
          puVar19 = puVar20;
          uStack_a8 = uVar14;
        }
        *puVar27 = uVar13;
        if (uStack_a8 == 2) goto LAB_100f36474;
        uStack_e0 = uStack_110;
        puVar2 = puVar9 + 0x2c;
        puVar7 = puStack_108;
        uVar17 = uStack_a8;
        puVar8 = puVar9;
        uVar22 = uStack_b0;
        puVar9 = (undefined8 *)*puVar2;
        puVar25 = in_x14;
        uVar18 = uStack_f0;
        puVar27 = puVar19;
        uVar23 = in_x15;
        puStack_e8 = puVar21;
      } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    }
    uVar18 = *param_2;
    if (uVar18 == 0) {
      func_0x000108a07a20(&UNK_10b2380e8);
    }
    else {
      uVar23 = param_2[1];
      puVar27 = (ulong *)_malloc(0x2d8);
      if (puVar27 == (ulong *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2d8);
      }
      else {
        puVar27[0x2c] = 0;
        *(undefined2 *)((long)puVar27 + 0x272) = 0;
        puVar27[0x4f] = uVar18;
        if (uVar23 < 0xffffffffffffffff) {
          *(ulong **)(uVar18 + 0x160) = puVar27;
          *(undefined2 *)(uVar18 + 0x270) = 0;
          *param_2 = (ulong)puVar27;
          param_2[1] = uVar23 + 1;
          if (uVar22 == uVar23) {
            *(undefined2 *)((long)puVar27 + 0x272) = 1;
            puVar27[0x2d] = uStack_110;
            puVar27[0x2e] = (ulong)puVar21;
            puVar27[0x2f] = (ulong)puStack_108;
            *puVar27 = uVar17;
            puVar27[1] = in_x15;
            puVar27[2] = (ulong)puVar19;
            puVar27[3] = uStack_f0;
            puVar27[0x50] = (ulong)in_x14;
            in_x14[0x2c] = puVar27;
            *(undefined2 *)(in_x14 + 0x4e) = 1;
            goto LAB_100f36474;
          }
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
        }
        else {
          func_0x000108a07a20(&UNK_10b238148);
        }
      }
    }
LAB_100f36d20:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100f36d24);
    (*pcVar6)();
  }
  goto LAB_100f36474;
}

