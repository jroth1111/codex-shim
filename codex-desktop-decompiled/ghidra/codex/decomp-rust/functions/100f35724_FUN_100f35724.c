
void FUN_100f35724(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long unaff_x23;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long lStack_950;
  undefined1 auStack_910 [424];
  ulong uStack_768;
  ulong auStack_760 [53];
  ulong uStack_5b8;
  ulong uStack_5b0;
  undefined1 auStack_5a8 [424];
  long lStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_3e0 [424];
  long *plStack_238;
  ulong uStack_230;
  long *plStack_228;
  undefined1 auStack_218 [440];
  
  plVar7 = (long *)*param_2;
  if (plVar7 != (long *)0x0) {
    lVar14 = param_2[1];
    plVar16 = (long *)param_3[1];
    uVar23 = param_3[2];
    do {
      plVar22 = plVar7 + 0x253;
      uVar2 = *(ushort *)((long)plVar7 + 0x13a2);
      plVar24 = (long *)(ulong)uVar2;
      lVar21 = (long)plVar24 * 0x18;
      plVar17 = (long *)0xffffffffffffffff;
      plVar8 = plVar22;
      do {
        plVar18 = plVar24;
        if (lVar21 == 0) goto LAB_100f357e8;
        uVar11 = plVar8[2];
        unaff_x23 = uVar23 - uVar11;
        uVar20 = uVar23;
        if (uVar11 <= uVar23) {
          uVar20 = uVar11;
        }
        iVar6 = _memcmp(plVar16,plVar8[1],uVar20);
        lVar10 = unaff_x23;
        if (iVar6 != 0) {
          lVar10 = (long)iVar6;
        }
        cVar1 = 0 < lVar10;
        if (lVar10 < 0) {
          cVar1 = -1;
        }
        lVar21 = lVar21 + -0x18;
        plVar17 = (long *)((long)plVar17 + 1);
        plVar8 = plVar8 + 3;
      } while (cVar1 == '\x01');
      plVar18 = plVar17;
      if (cVar1 == '\0') {
        param_2 = plVar17;
        plVar17 = plVar7;
        if (*param_3 != 0) {
          _free(plVar16);
        }
        goto LAB_100f35834;
      }
LAB_100f357e8:
      if (lVar14 == 0) goto LAB_100f358dc;
      plVar7 = (long *)plVar7[(long)plVar18 + 0x275];
      lVar14 = lVar14 + -1;
    } while( true );
  }
  lVar14 = *param_3;
  plVar17 = (long *)param_3[1];
  if (lVar14 == -0x8000000000000000) goto LAB_100f35834;
  lVar10 = param_3[2];
  lVar21 = _malloc(0x13a8);
  if (lVar21 == 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x13a8);
    goto LAB_100f36214;
  }
  *(undefined8 *)(lVar21 + 0x1290) = 0;
  *param_2 = lVar21;
  param_2[1] = 0;
  *(undefined2 *)(lVar21 + 0x13a2) = 1;
  *(long *)(lVar21 + 0x1298) = lVar14;
  *(long **)(lVar21 + 0x12a0) = plVar17;
  *(long *)(lVar21 + 0x12a8) = lVar10;
  _memcpy(lVar21,param_4,0x1b0);
LAB_100f358a8:
  param_2[2] = param_2[2] + 1;
  *param_1 = 2;
  return;
LAB_100f358dc:
  lVar14 = *param_3;
  plVar17 = plVar16;
  if (lVar14 == -0x8000000000000000) {
LAB_100f35834:
    _memcpy(&lStack_400,plVar17 + (long)param_2 * 0x36,0x1b0);
    _memcpy(plVar17 + (long)param_2 * 0x36,param_4,0x1b0);
    _memcpy(param_1,&lStack_400,0x1b0);
    return;
  }
  if (uVar2 < 0xb) {
    plVar17 = plVar22 + (long)plVar18 * 3;
    uVar20 = (long)plVar24 - (long)plVar18;
    if (plVar24 < plVar18 || uVar20 == 0) {
      *plVar17 = lVar14;
      plVar17[1] = (long)plVar16;
      plVar17[2] = uVar23;
      _memcpy(&lStack_400,param_4,0x1b0);
    }
    else {
      _memmove(plVar22 + (long)plVar18 * 3 + 3,plVar17,uVar20 * 0x18);
      *plVar17 = lVar14;
      plVar17[1] = (long)plVar16;
      plVar17[2] = uVar23;
      _memcpy(&lStack_400,param_4,0x1b0);
      _memmove(plVar7 + (long)plVar18 * 0x36 + 0x36,plVar7 + (long)plVar18 * 0x36,
               (uVar20 & 0xffffffff) * 0x1b0);
    }
    _memcpy(plVar7 + (long)plVar18 * 0x36,&lStack_400,0x1b0);
    *(ushort *)((long)plVar7 + 0x13a2) = uVar2 + 1;
    puVar9 = auStack_760;
    uVar20 = 2;
  }
  else {
    if (plVar18 < (long *)0x5) {
      bVar12 = false;
      uVar20 = 4;
    }
    else if (plVar18 == (long *)0x5) {
      bVar12 = false;
      uVar20 = 5;
    }
    else if (plVar18 == (long *)0x6) {
      plVar18 = (long *)0x0;
      bVar12 = true;
      uVar20 = 5;
    }
    else {
      plVar18 = (long *)((long)plVar18 + -7);
      bVar12 = true;
      uVar20 = 6;
    }
    plVar17 = (long *)_malloc(0x13a8);
    if (plVar17 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x13a8);
      goto LAB_100f36214;
    }
    plVar17[0x252] = 0;
    uVar11 = (ulong)*(ushort *)((long)plVar7 + 0x13a2) + ~uVar20;
    *(short *)((long)plVar17 + 0x13a2) = (short)uVar11;
    plVar8 = plVar22 + uVar20 * 3;
    unaff_x23 = *plVar8;
    uVar19 = plVar8[1];
    lStack_950 = plVar8[2];
    puVar9 = (ulong *)(plVar7 + uVar20 * 0x36);
    _memcpy(&lStack_400,puVar9,0x1b0);
    if (0xb < uVar11) {
      func_0x000108a07904(0,uVar11,0xb,&UNK_10b2381a8);
      goto LAB_100f36214;
    }
    _memcpy(plVar17 + 0x253,plVar22 + (uVar20 + 1) * 3,uVar11 * 0x18);
    _memcpy(plVar17,plVar7 + (uVar20 + 1) * 0x36,uVar11 * 0x1b0);
    *(short *)((long)plVar7 + 0x13a2) = (short)uVar20;
    uVar20 = *puVar9;
    _memcpy(auStack_218,puVar9 + 1,0x1a8);
    plVar22 = plVar17;
    if (!bVar12) {
      plVar22 = plVar7;
    }
    uVar2 = *(ushort *)((long)plVar22 + 0x13a2);
    plVar8 = plVar22 + (long)plVar18 * 3 + 0x253;
    uVar11 = (long)(ulong)uVar2 - (long)plVar18;
    if ((long *)(ulong)uVar2 < plVar18 || uVar11 == 0) {
      *plVar8 = lVar14;
      plVar8[1] = (long)plVar16;
      plVar8[2] = uVar23;
      _memcpy(&lStack_400,param_4,0x1b0);
    }
    else {
      _memmove(plVar22 + (long)plVar18 * 3 + 0x256,plVar8,uVar11 * 0x18);
      *plVar8 = lVar14;
      plVar8[1] = (long)plVar16;
      plVar8[2] = uVar23;
      _memcpy(&lStack_400,param_4,0x1b0);
      _memmove(plVar22 + (long)plVar18 * 0x36 + 0x36,plVar22 + (long)plVar18 * 0x36,
               (uVar11 & 0xffffffff) * 0x1b0);
    }
    _memcpy(plVar22 + (long)plVar18 * 0x36,&lStack_400,0x1b0);
    *(ushort *)((long)plVar22 + 0x13a2) = uVar2 + 1;
    auStack_760[0] = uVar20;
    _memcpy(&uStack_5b0,auStack_218,0x1a8);
    uVar20 = 0;
    puVar9 = &uStack_5b8;
    uVar23 = uVar19;
  }
  *puVar9 = uVar20;
  uVar20 = auStack_760[0];
  if (auStack_760[0] != 2) {
    _memcpy(auStack_910,&uStack_5b0,0x1a8);
    if ((long *)plVar7[0x252] == (long *)0x0) {
      uVar19 = 0;
      uVar11 = uStack_5b8;
    }
    else {
      uVar19 = 0;
      uVar11 = uStack_5b8;
      plVar16 = plVar17;
      lVar14 = unaff_x23;
      plVar22 = plVar7;
      plVar8 = (long *)plVar7[0x252];
      uVar25 = uVar23;
      do {
        plVar7 = plVar8;
        uVar2 = *(ushort *)(plVar22 + 0x274);
        uVar26 = (ulong)uVar2;
        uStack_5b0 = uVar20;
        _memcpy(auStack_5a8,auStack_910,0x1a8);
        if (uVar11 != uVar19) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fef,0x35,&UNK_10b2381d8);
          goto LAB_100f36214;
        }
        uVar3 = *(ushort *)((long)plVar7 + 0x13a2);
        uVar20 = (ulong)uVar3;
        if (uVar3 < 0xb) {
          uVar11 = uVar26 + 1;
          plVar17 = plVar7 + uVar26 * 3 + 0x253;
          if (uVar2 < uVar3) {
            lVar21 = uVar20 - uVar26;
            _memmove(plVar7 + uVar11 * 3 + 0x253,plVar17,lVar21 * 0x18);
            *plVar17 = lVar14;
            plVar17[1] = uVar25;
            plVar17[2] = lStack_950;
            _memmove(plVar7 + uVar11 * 0x36,plVar7 + uVar26 * 0x36,(long)(int)lVar21 * 0x1b0);
            _memcpy(plVar7 + uVar26 * 0x36,&uStack_5b0,0x1b0);
            _memmove(plVar7 + uVar26 + 0x277,plVar7 + uVar26 + 0x276,lVar21 * 8);
          }
          else {
            *plVar17 = lVar14;
            plVar17[1] = uVar25;
            plVar17[2] = lStack_950;
            _memcpy(plVar7 + uVar26 * 0x36,&uStack_5b0,0x1b0);
          }
          plVar7[uVar26 + 0x276] = (long)plVar16;
          *(ushort *)((long)plVar7 + 0x13a2) = uVar3 + 1;
          plVar17 = plVar16;
          unaff_x23 = lVar14;
          uVar23 = uVar25;
          if (uVar11 < uVar20 + 2) {
            lVar14 = uVar26 + 0x276;
            do {
              lVar21 = plVar7[lVar14];
              *(long **)(lVar21 + 0x1290) = plVar7;
              *(short *)(lVar21 + 0x13a0) = (short)lVar14 + -0x275;
              lVar14 = lVar14 + 1;
            } while (lVar14 - uVar20 != 0x277);
            puVar9 = &uStack_5b8;
            uVar11 = 2;
            plVar7 = plVar22;
          }
          else {
            puVar9 = &uStack_5b8;
            uVar11 = 2;
            plVar7 = plVar22;
          }
        }
        else {
          uVar11 = uVar19 + 1;
          uVar23 = 5;
          if (uVar2 != 6) {
            uVar23 = 6;
          }
          uVar19 = 0;
          if (uVar2 != 6) {
            uVar19 = uVar26 - 7;
          }
          uVar15 = uVar26;
          uVar4 = uVar26;
          if (uVar2 != 5) {
            uVar15 = uVar19;
            uVar4 = uVar23;
          }
          uVar19 = 4;
          if (4 < uVar2) {
            uVar26 = uVar15;
            uVar19 = uVar4;
          }
          plVar17 = (long *)_malloc(0x1408);
          if (plVar17 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1408);
            goto LAB_100f36214;
          }
          plVar17[0x252] = 0;
          uVar15 = (ulong)*(ushort *)((long)plVar7 + 0x13a2) + ~uVar19;
          *(short *)((long)plVar17 + 0x13a2) = (short)uVar15;
          plVar22 = plVar7 + uVar19 * 3 + 0x253;
          unaff_x23 = *plVar22;
          uVar23 = plVar22[1];
          lVar21 = plVar22[2];
          _memcpy(auStack_218,plVar7 + uVar19 * 0x36,0x1b0);
          if (0xb < uVar15) {
            func_0x000108a07904(0,uVar15,0xb,&UNK_10b2381a8);
            goto LAB_100f36214;
          }
          _memcpy(plVar17 + 0x253,plVar7 + (uVar19 + 1) * 3 + 0x253,uVar15 * 0x18);
          _memcpy(plVar17,plVar7 + (uVar19 + 1) * 0x36,(long)(int)uVar15 * 0x1b0);
          *(short *)((long)plVar7 + 0x13a2) = (short)uVar19;
          _memcpy(&uStack_3e8,plVar7 + uVar19 * 0x36,0x1b0);
          uVar15 = (ulong)*(ushort *)((long)plVar17 + 0x13a2);
          lVar10 = uVar15 + 1;
          lStack_400 = unaff_x23;
          uStack_3f8 = uVar23;
          lStack_3f0 = lVar21;
          if (0xb < uVar15) {
            func_0x000108a07904(0,lVar10,0xc,&UNK_10b2381c0);
            goto LAB_100f36214;
          }
          if (uVar20 - uVar19 != lVar10) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
            goto LAB_100f36214;
          }
          _memcpy(plVar17 + 0x275,plVar7 + uVar19 + 0x276,lVar10 * 8);
          uVar19 = uStack_3e8;
          uVar20 = 0;
          do {
            lVar10 = (plVar17 + 0x275)[uVar20];
            *(long **)(lVar10 + 0x1290) = plVar17;
            *(short *)(lVar10 + 0x13a0) = (short)uVar20;
            if (uVar15 <= uVar20) break;
            uVar20 = uVar20 + 1;
          } while (uVar20 <= uVar15);
          _memcpy(auStack_218,auStack_3e0,0x1a8);
          plVar22 = plVar17;
          if (uVar2 < 6) {
            plVar22 = plVar7;
          }
          uVar2 = *(ushort *)((long)plVar22 + 0x13a2);
          uVar15 = (ulong)uVar2;
          iVar6 = (int)uVar26;
          plVar8 = plVar22 + (long)iVar6 * 3 + 0x253;
          uVar20 = uVar15 - uVar26;
          if (uVar15 < uVar26 || uVar20 == 0) {
            *plVar8 = lVar14;
            plVar8[1] = uVar25;
            plVar8[2] = lStack_950;
            _memcpy(plVar22 + (long)iVar6 * 0x36,&uStack_5b0,0x1b0);
          }
          else {
            iVar13 = (int)(uVar26 + 1);
            _memmove(plVar22 + (long)iVar13 * 3 + 0x253,plVar8,uVar20 * 0x18);
            *plVar8 = lVar14;
            plVar8[1] = uVar25;
            plVar8[2] = lStack_950;
            _memmove(plVar22 + (long)iVar13 * 0x36,plVar22 + (long)iVar6 * 0x36,
                     (uVar20 & 0xffffffff) * 0x1b0);
            _memcpy(plVar22 + (long)iVar6 * 0x36,&uStack_5b0,0x1b0);
            _memmove(plVar22 + uVar26 + 0x277,plVar22 + uVar26 + 0x276,uVar20 * 8);
          }
          plVar22[uVar26 + 0x276] = (long)plVar16;
          *(ushort *)((long)plVar22 + 0x13a2) = uVar2 + 1;
          if (uVar26 + 1 < uVar15 + 2) {
            lVar14 = uVar26 + 0x276;
            do {
              lVar10 = plVar22[lVar14];
              *(long **)(lVar10 + 0x1290) = plVar22;
              *(short *)(lVar10 + 0x13a0) = (short)lVar14 + -0x275;
              lVar14 = lVar14 + 1;
            } while (lVar14 - uVar15 != 0x277);
          }
          uStack_5b8 = uVar19;
          _memcpy(auStack_760,auStack_218,0x1a8);
          puVar9 = &uStack_768;
          uVar19 = uVar11;
          lStack_950 = lVar21;
        }
        *puVar9 = uVar11;
        uVar20 = uStack_5b8;
        if (uStack_5b8 == 2) goto LAB_100f358a8;
        _memcpy(auStack_910,auStack_760,0x1a8);
        uVar11 = uStack_768;
        plVar16 = plVar17;
        lVar14 = unaff_x23;
        plVar22 = plVar7;
        plVar8 = (long *)plVar7[0x252];
        uVar25 = uVar23;
      } while ((long *)plVar7[0x252] != (long *)0x0);
    }
    _memcpy(auStack_3e0,auStack_910,0x1a8);
    lStack_3f0 = lStack_950;
    lVar14 = *param_2;
    lStack_400 = unaff_x23;
    uStack_3f8 = uVar23;
    uStack_3e8 = uVar20;
    plStack_238 = plVar7;
    uStack_230 = uVar19;
    plStack_228 = plVar17;
    if (lVar14 == 0) {
      func_0x000108a07a20(&UNK_10b2380e8);
    }
    else {
      uVar20 = param_2[1];
      lVar21 = _malloc(0x1408);
      if (lVar21 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1408);
      }
      else {
        *(undefined8 *)(lVar21 + 0x1290) = 0;
        *(undefined2 *)(lVar21 + 0x13a2) = 0;
        *(long *)(lVar21 + 0x13a8) = lVar14;
        if (uVar20 < 0xffffffffffffffff) {
          *(long *)(lVar14 + 0x1290) = lVar21;
          *(undefined2 *)(lVar14 + 0x13a0) = 0;
          *param_2 = lVar21;
          param_2[1] = uVar20 + 1;
          if (uVar11 == uVar20) {
            *(undefined2 *)(lVar21 + 0x13a2) = 1;
            *(long *)(lVar21 + 0x1298) = unaff_x23;
            *(ulong *)(lVar21 + 0x12a0) = uVar23;
            *(long *)(lVar21 + 0x12a8) = lStack_950;
            _memcpy(lVar21,&uStack_3e8,0x1b0);
            *(long **)(lVar21 + 0x13b0) = plVar17;
            plVar17[0x252] = lVar21;
            *(undefined2 *)(plVar17 + 0x274) = 1;
            goto LAB_100f358a8;
          }
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
        }
        else {
          func_0x000108a07a20(&UNK_10b238148);
        }
      }
    }
LAB_100f36214:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f36218);
    (*pcVar5)();
  }
  goto LAB_100f358a8;
}

