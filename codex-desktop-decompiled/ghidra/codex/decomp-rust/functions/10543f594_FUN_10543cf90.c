
undefined8 * FUN_10543cf90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long extraout_x8;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint extraout_w9;
  int iVar22;
  uint uVar23;
  long lVar24;
  ulong extraout_x10;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar15 = func_0x00010544096c();
  lVar19 = param_1[3];
  uVar18 = param_1[4];
  if (uVar15 != 0) {
    uVar12 = uVar18 == uVar15;
    if (uVar18 <= uVar15) goto LAB_10543cfec;
    uVar12 = *(char *)(lVar19 + uVar15) == -0x41;
    if (*(char *)(lVar19 + uVar15) < -0x40) {
      do {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108eeaeab,0x2c,&UNK_10b381b90);
        lVar19 = extraout_x8;
LAB_10543cfec:
      } while (!(bool)uVar12);
    }
  }
  if (param_1[2] - uVar18 < param_4) {
    FUN_1089ed790(param_1 + 2,uVar18,param_4,1,1);
    lVar19 = param_1[3];
  }
  lVar19 = lVar19 + uVar15;
  _memmove(lVar19 + param_4,lVar19,uVar18 - uVar15);
  uVar25 = param_4;
  _memcpy(lVar19,param_3);
  param_1[4] = uVar18 + param_4;
  if (param_1[0xa5] == 0) {
    uVar18 = param_1[0xa6];
    param_1[0xa6] = 0x8000000000000000;
    if ((uVar18 & 0x7fffffffffffffff) == 0) {
      uVar18 = param_1[0xa4];
    }
    else {
      _free(param_1[0xa7]);
      uVar18 = param_1[0xa4];
    }
    if (uVar15 <= uVar18) {
      param_1[0xa4] = uVar18 + param_4;
    }
    puVar16 = (undefined8 *)func_0x00010543dde8(param_1,uVar15,0,param_4);
    *param_1 = 0;
    return puVar16;
  }
  auVar29 = __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b381ba8);
  uVar18 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  if (puVar16[7] != 0) {
    bVar8 = false;
    lVar20 = puVar16[6];
    lVar24 = lVar20 + puVar16[7] * 0x30;
    lVar19 = lVar20;
    do {
      uVar15 = *(ulong *)(lVar19 + 0x20);
      bVar9 = bVar8;
      if (uVar15 < uVar25) {
        uVar26 = *(ulong *)(lVar19 + 0x28);
        uVar21 = uVar26;
        if (uVar26 <= uVar25) {
          uVar21 = uVar25;
        }
        uVar5 = uVar15;
        if (uVar18 <= uVar15) {
          uVar5 = uVar18;
        }
        uVar4 = uVar18;
        uVar7 = uVar25;
        if (uVar15 < uVar18 || uVar25 < uVar26) {
          bVar9 = true;
          uVar4 = uVar5;
          uVar7 = uVar21;
        }
        if (uVar26 <= uVar18) {
          uVar4 = uVar18;
          uVar7 = uVar25;
          bVar9 = bVar8;
        }
        lVar1 = lVar19 + 0x30;
        bVar13 = lVar1 != lVar24;
        lVar19 = lVar20;
        if (bVar13) {
          lVar19 = lVar1;
        }
        bVar8 = (bool)(bVar13 & bVar9);
        uVar18 = uVar4;
        uVar25 = uVar7;
      }
      else {
        lVar1 = lVar19 + 0x30;
        bVar13 = lVar1 != lVar24;
        lVar19 = lVar20;
        if (bVar13) {
          lVar19 = lVar1;
        }
        bVar8 = (bool)(bVar13 & bVar8);
      }
    } while ((bVar13) || (bVar9));
  }
  if (uVar25 < uVar18) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ef6e4c,0x2a,&UNK_10b381e00,1);
  }
  else {
    uVar15 = puVar16[4];
    if (uVar15 <= uVar18) {
      uVar18 = uVar15;
    }
    if (uVar15 <= uVar25) {
      uVar25 = uVar15;
    }
    if (uVar25 == uVar18) {
      return puVar16;
    }
    func_0x000105205534(puVar16 + 2);
    if (puVar16[0xa5] == 0) {
      uVar15 = puVar16[0xa6];
      puVar16[0xa6] = 0x8000000000000000;
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        _free(puVar16[0xa7]);
      }
      *puVar16 = 0;
      lVar19 = 0;
      if (uVar18 <= uVar25) {
        lVar19 = uVar25 - uVar18;
      }
      func_0x00010543dde8(puVar16,uVar18,lVar19,0);
      uVar21 = puVar16[0xa4];
      uVar15 = uVar18;
      if (uVar25 < uVar21) {
        uVar15 = (uVar18 + uVar21) - uVar25;
      }
      if (uVar18 <= uVar21) {
        uVar21 = uVar15;
      }
      uVar18 = puVar16[4];
      if (uVar21 <= (ulong)puVar16[4]) {
        uVar18 = uVar21;
      }
      puVar16[0xa4] = uVar18;
      puVar17 = (undefined8 *)func_0x00010544096c(puVar16);
      puVar16[0xa4] = puVar17;
      return puVar17;
    }
  }
  puVar16 = (undefined8 *)__ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b381e30)
  ;
  auVar29 = func_0x0001054414b4();
  uVar27 = auVar29._8_4_;
  if (puVar16[7] != 0) {
    bVar8 = false;
    lVar20 = puVar16[6];
    lVar24 = lVar20 + puVar16[7] * 0x30;
    lVar19 = lVar20;
    do {
      uVar18 = auVar29._8_8_;
      uVar25 = auVar29._0_8_;
      uVar15 = *(ulong *)(lVar19 + 0x20);
      bVar9 = bVar8;
      if (uVar15 < uVar18) {
        uVar26 = *(ulong *)(lVar19 + 0x28);
        uVar21 = uVar26;
        if (uVar26 <= uVar18) {
          uVar21 = uVar18;
        }
        uVar5 = uVar15;
        if (uVar25 <= uVar15) {
          uVar5 = uVar25;
        }
        auVar10._8_8_ = uVar21;
        auVar10._0_8_ = uVar5;
        auVar30 = auVar29;
        if (uVar15 < uVar25 || uVar18 < uVar26) {
          bVar9 = true;
          auVar30 = auVar10;
        }
        if (uVar26 <= uVar25) {
          bVar9 = bVar8;
          auVar30 = auVar29;
        }
        lVar1 = lVar19 + 0x30;
        bVar13 = lVar1 != lVar24;
        lVar19 = lVar20;
        if (bVar13) {
          lVar19 = lVar1;
        }
        bVar8 = (bool)(bVar13 & bVar9);
        auVar29 = auVar30;
      }
      else {
        lVar1 = lVar19 + 0x30;
        bVar13 = lVar1 != lVar24;
        lVar19 = lVar20;
        if (bVar13) {
          lVar19 = lVar1;
        }
        bVar8 = (bool)(bVar13 & bVar8);
      }
    } while ((bVar13) || (bVar9));
  }
  uVar18 = auVar29._8_8_;
  uVar15 = auVar29._0_8_;
  lVar19 = uVar18 - uVar15;
  if (uVar18 < uVar15 || lVar19 == 0) {
    return puVar16;
  }
  lVar20 = puVar16[3];
  uVar25 = puVar16[4];
  if (uVar15 == 0) {
LAB_105440388:
    uVar12 = uVar18 == uVar25;
    if (uVar25 <= uVar18) goto LAB_1054403b0;
    uVar12 = *(char *)(lVar20 + uVar18) == -0x40;
    if (*(char *)(lVar20 + uVar18) < -0x40) goto LAB_10544039c;
  }
  else {
    if (uVar15 < uVar25) {
      uVar12 = *(char *)(lVar20 + uVar15) == -0x40;
      if (-0x41 < *(char *)(lVar20 + uVar15)) goto LAB_105440388;
    }
    else {
      uVar12 = 0;
      if (uVar15 == uVar25) goto LAB_105440388;
    }
LAB_10544039c:
    do {
      uVar18 = uVar15;
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar20);
      uVar27 = (uint)uVar18;
LAB_1054403b0:
    } while (!(bool)uVar12);
  }
  lVar24 = _malloc(lVar19);
  if (lVar24 != 0) {
    puVar17 = (undefined8 *)_memcpy(lVar24,lVar20 + uVar15,lVar19);
    if (puVar16[8] != 0) {
      puVar17 = (undefined8 *)_free(puVar16[9]);
    }
    puVar16[8] = lVar19;
    puVar16[9] = lVar24;
    puVar16[10] = lVar19;
    *(undefined1 *)(puVar16 + 0xab) = 1;
    return puVar17;
  }
  auVar29 = func_0x0001087c9084(1,lVar19);
  lVar20 = auVar29._0_8_;
  auVar30 = func_0x00010543d2e8(lVar20,auVar29._8_8_ >> 0x20);
  lVar19 = *(long *)(auVar30._0_8_ + 8);
  uVar18 = *(ulong *)(auVar30._0_8_ + 0x10);
  uVar15 = *(ulong *)(lVar20 + 0x520);
  uVar6 = auVar29._14_2_;
  uVar28 = (uint)uVar6;
  if (uVar28 < ((uint)uVar18 & 0xffff)) {
    if (uVar18 == 0) {
LAB_1054404b0:
      uVar23 = 0;
    }
    else {
      if (uVar18 == 1) {
        lVar24 = 0;
      }
      else {
        lVar24 = 0;
        uVar25 = uVar18;
        do {
          lVar1 = (uVar25 >> 1) + lVar24;
          if (*(ulong *)(lVar19 + lVar1 * 0x10) <= uVar15) {
            lVar24 = lVar1;
          }
          uVar25 = uVar25 - (uVar25 >> 1);
        } while (1 < uVar25);
      }
      if (*(ulong *)(lVar19 + lVar24 * 0x10) <= uVar15) {
        lVar24 = lVar24 + 1;
      }
      if (lVar24 == 0) goto LAB_1054404b0;
      uVar23 = (int)lVar24 - 1;
    }
    uVar2 = (uint)uVar18 & 0xffff;
    uVar3 = 0;
    if (uVar28 <= uVar2) {
      uVar3 = uVar2 - uVar28;
    }
    uVar25 = (ulong)uVar3;
    if ((uVar27 & 0xffff) <= uVar3) {
      uVar3 = uVar27 & 0xffff;
    }
    uVar27 = uVar23;
    if (uVar3 <= (uVar23 & 0xffff)) {
      uVar28 = uVar3 + uVar6;
      uVar25 = (ulong)uVar28;
      uVar27 = uVar3;
      if ((uVar28 & 0xffff) <= (uVar23 & 0xffff)) {
        uVar23 = uVar23 - uVar6;
        uVar27 = uVar23 + 1;
      }
    }
  }
  else {
    uVar25 = extraout_x10;
    uVar27 = 0;
    uVar23 = extraout_w9;
  }
  if (uVar18 != 0) {
    if (uVar18 == 1) {
      lVar24 = 0;
    }
    else {
      lVar24 = 0;
      uVar25 = uVar18;
      do {
        lVar1 = (uVar25 >> 1) + lVar24;
        if (*(ulong *)(lVar19 + lVar1 * 0x10) <= uVar15) {
          lVar24 = lVar1;
        }
        uVar25 = uVar25 - (uVar25 >> 1);
      } while (1 < uVar25);
    }
    uVar25 = *(ulong *)(lVar19 + lVar24 * 0x10);
    if (uVar25 <= uVar15) {
      lVar24 = lVar24 + 1;
    }
    uVar23 = 0;
    if (lVar24 != 0) {
      uVar25 = lVar24 - 1;
      if (uVar18 <= uVar25) {
        func_0x000108a07bdc(uVar25,uVar18,&UNK_10b381ec0);
        goto LAB_10544062c;
      }
      uVar21 = *(ulong *)(lVar19 + uVar25 * 0x10);
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar18 = *(ulong *)(lVar20 + 0x20);
      if (uVar15 < uVar21) goto LAB_1054405a8;
      if (uVar21 != 0) {
        if (uVar21 < uVar18) {
          if (-0x41 < *(char *)(lVar19 + uVar21)) goto LAB_105440590;
        }
        else if (uVar21 == uVar18) goto LAB_105440590;
        goto LAB_1054405a8;
      }
LAB_105440590:
      if (uVar15 != 0) {
        if (uVar15 < uVar18) {
          if (*(char *)(lVar19 + uVar15) < -0x40) {
LAB_1054405a8:
            __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar19);
LAB_10544062c:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x105440630);
            (*pcVar11)();
          }
        }
        else if (uVar15 != uVar18) goto LAB_1054405a8;
      }
      iVar14 = FUN_1051bd0a4(lVar19 + uVar21,lVar19 + uVar15);
      uVar18 = 0;
      if ((ushort)uVar27 <= uVar25) {
        uVar18 = uVar25 - (ushort)uVar27;
      }
      iVar22 = 0;
      if ((uVar18 & 0xffffffffffff0000) == 0) {
        iVar22 = (int)uVar18;
      }
      uVar23 = iVar14 + auVar29._8_4_;
      uVar25 = (ulong)(uint)(iVar22 + auVar29._10_4_);
      uVar18 = 1;
      goto LAB_1054405ec;
    }
  }
  uVar18 = 0;
LAB_1054405ec:
  *auVar30._8_8_ = *auVar30._8_8_ + -1;
  return (undefined8 *)((ulong)(uVar23 << 0x10) | uVar25 << 0x20 | uVar18);
}

