
void FUN_10189df4c(ulong *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *extraout_x8;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  
  if (param_3 < 0x20) {
    if (param_3 == 0) {
      uVar9 = 1;
      goto LAB_10189e0f0;
    }
    if (param_3 < 8) {
      uVar12 = 0;
      uVar9 = 0;
    }
    else {
      uVar12 = param_3 & 0x18;
      uVar10 = *(undefined8 *)param_2;
      uVar9 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 0x30)) & 1);
      uVar18 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 0x38)) & 1);
      uVar19 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 0x20)) & 1);
      uVar20 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 0x28)) & 1);
      uVar21 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 0x10)) & 1);
      uVar22 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 0x18)) & 1);
      uVar23 = (ulong)(-(-0x41 < (char)uVar10) & 1);
      uVar24 = (ulong)(-(-0x41 < (char)((ulong)uVar10 >> 8)) & 1);
      if (uVar12 != 8) {
        uVar10 = *(undefined8 *)(param_2 + 8);
        uVar9 = uVar9 + (-(-0x41 < (char)((ulong)uVar10 >> 0x30)) & 1);
        uVar18 = uVar18 + (-(-0x41 < (char)((ulong)uVar10 >> 0x38)) & 1);
        uVar19 = uVar19 + (-(-0x41 < (char)((ulong)uVar10 >> 0x20)) & 1);
        uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar10 >> 0x28)) & 1);
        uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar10 >> 0x10)) & 1);
        uVar22 = uVar22 + (-(-0x41 < (char)((ulong)uVar10 >> 0x18)) & 1);
        uVar23 = uVar23 + (-(-0x41 < (char)uVar10) & 1);
        uVar24 = uVar24 + (-(-0x41 < (char)((ulong)uVar10 >> 8)) & 1);
        if (uVar12 != 0x10) {
          uVar10 = *(undefined8 *)(param_2 + 0x10);
          uVar9 = uVar9 + (-(-0x41 < (char)((ulong)uVar10 >> 0x30)) & 1);
          uVar18 = uVar18 + (-(-0x41 < (char)((ulong)uVar10 >> 0x38)) & 1);
          uVar19 = uVar19 + (-(-0x41 < (char)((ulong)uVar10 >> 0x20)) & 1);
          uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar10 >> 0x28)) & 1);
          uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar10 >> 0x10)) & 1);
          uVar22 = uVar22 + (-(-0x41 < (char)((ulong)uVar10 >> 0x18)) & 1);
          uVar23 = uVar23 + (-(-0x41 < (char)uVar10) & 1);
          uVar24 = uVar24 + (-(-0x41 < (char)((ulong)uVar10 >> 8)) & 1);
        }
      }
      uVar9 = uVar23 + uVar19 + uVar21 + uVar9 + uVar24 + uVar20 + uVar22 + uVar18;
      if (param_3 == uVar12) goto LAB_10189e0d8;
    }
    lVar14 = param_3 - uVar12;
    pbVar13 = param_2 + uVar12;
    do {
      if (-0x41 < (char)*pbVar13) {
        uVar9 = uVar9 + 1;
      }
      lVar14 = lVar14 + -1;
      pbVar13 = pbVar13 + 1;
    } while (lVar14 != 0);
  }
  else {
    uVar9 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(param_2,param_3);
  }
LAB_10189e0d8:
  if (0x100 < uVar9) {
    puStack_78 = (undefined1 *)0x0;
    puStack_70 = (undefined *)0x1;
    puStack_68 = (undefined1 *)0x0;
    uVar9 = param_3 >> 2;
    if ((param_3 & 3) != 0) {
      uVar9 = uVar9 + 1;
    }
    if (0xfc < uVar9) {
      uVar9 = 0xfd;
    }
    FUN_1088bb36c(&puStack_78,0,uVar9,1,1);
    lVar14 = -0xfd;
    pbVar13 = param_2;
    do {
      puVar5 = puStack_68;
      if (pbVar13 == param_2 + param_3) break;
      pbVar15 = pbVar13 + 1;
      uVar17 = (uint)*pbVar13;
      if ((char)*pbVar13 < '\0') {
        if (uVar17 < 0xe0) {
          pbVar15 = pbVar13 + 2;
          uVar17 = pbVar13[1] & 0x3f | (uVar17 & 0x1f) << 6;
        }
        else {
          uVar1 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (uVar17 < 0xf0) {
            pbVar15 = pbVar13 + 3;
            uVar17 = uVar1 | (uVar17 & 0x1f) << 0xc;
          }
          else {
            uVar17 = pbVar13[3] & 0x3f | uVar1 << 6 | (uVar17 & 7) << 0x12;
            if (uVar17 == 0x110000) break;
            pbVar15 = pbVar13 + 4;
          }
        }
        uVar9 = 3;
        if (0xffff < uVar17) {
          uVar9 = 4;
        }
        uVar12 = 2;
        if (0x7ff < uVar17) {
          uVar12 = uVar9;
        }
        bVar7 = uVar17 < 0x80;
        uVar9 = 1;
        if (!bVar7) {
          uVar9 = uVar12;
        }
        bVar4 = bVar7;
        if (uVar9 <= (ulong)((long)puStack_78 - (long)puStack_68)) goto LAB_10189e1ac;
LAB_10189e2bc:
        FUN_1088bb36c(&puStack_78,puStack_68,uVar9,1,1);
        pbVar13 = puStack_68 + (long)puStack_70;
        if (!bVar4) goto LAB_10189e1b8;
LAB_10189e158:
        *pbVar13 = (byte)uVar17;
      }
      else {
        bVar7 = true;
        uVar9 = 1;
        bVar4 = true;
        if (puStack_78 == puStack_68) goto LAB_10189e2bc;
LAB_10189e1ac:
        pbVar13 = puStack_68 + (long)puStack_70;
        if (bVar7) goto LAB_10189e158;
LAB_10189e1b8:
        bVar2 = (byte)uVar17 & 0x3f | 0x80;
        if (uVar17 < 0x800) {
          *pbVar13 = (byte)(uVar17 >> 6) | 0xc0;
          pbVar13[1] = bVar2;
        }
        else {
          bVar3 = (byte)(uVar17 >> 6) & 0x3f | 0x80;
          if (uVar17 < 0x10000) {
            *pbVar13 = (byte)(uVar17 >> 0xc) | 0xe0;
            pbVar13[1] = bVar3;
            pbVar13[2] = bVar2;
          }
          else {
            *pbVar13 = (byte)(uVar17 >> 0x12) | 0xf0;
            pbVar13[1] = (byte)(uVar17 >> 0xc) & 0x3f | 0x80;
            pbVar13[2] = bVar3;
            pbVar13[3] = bVar2;
          }
        }
      }
      puStack_68 = puVar5 + uVar9;
      bVar7 = lVar14 != -1;
      lVar14 = lVar14 + 1;
      pbVar13 = pbVar15;
    } while (bVar7);
    lStack_88 = (long)puStack_70;
    puStack_90 = puStack_78;
    puStack_80 = puStack_68;
    puStack_70 = &DAT_1019a7324;
    puStack_78 = (undefined1 *)&puStack_90;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s_____108ac02d9,&puStack_78);
    if (puStack_90 == (undefined1 *)0x0) {
      return;
    }
    _free(lStack_88);
    return;
  }
  uVar9 = _malloc(param_3);
  if (uVar9 != 0) {
LAB_10189e0f0:
    _memcpy(uVar9,param_2,param_3);
    *param_1 = param_3;
    param_1[1] = uVar9;
    param_1[2] = param_3;
    return;
  }
  uVar10 = func_0x0001087c9084(1,param_3);
  if (puStack_78 != (undefined1 *)0x0) {
    _free(puStack_70);
  }
  lVar14 = __Unwind_Resume(uVar10);
  uStack_98 = 0x10189e388;
  lVar14 = *(long *)(lVar14 + 8);
  plVar16 = *(long **)(lVar14 + 0x98);
  pbStack_b0 = param_2;
  uStack_a8 = uVar10;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (plVar16 == (long *)0x0) {
    plStack_b8 = (long *)0x0;
    puVar11 = (undefined8 *)_malloc(0x23);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x23);
      goto LAB_10189e448;
    }
    *(undefined4 *)((long)puVar11 + 0x1f) = 0x64657275;
    puVar11[1] = 0x6e656d6e6f726976;
    *puVar11 = 0x6e65206c61636f6c;
    puVar11[3] = 0x756769666e6f6320;
    puVar11[2] = 0x746f6e2073692074;
    *extraout_x8 = 0x23;
    extraout_x8[1] = puVar11;
    extraout_x8[3] = 0x8000000000000005;
    extraout_x8[2] = 0x23;
    extraout_x8[0xc] = 0xffffffffffff80a5;
  }
  else {
    lVar8 = *plVar16;
    *plVar16 = lVar8 + 1;
    if (lVar8 < 0) {
LAB_10189e448:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10189e44c);
      (*pcVar6)();
    }
    plStack_b8 = *(long **)(lVar14 + 0x98);
    *extraout_x8 = 0x8000000000000000;
    lVar14 = *plStack_b8;
    *plStack_b8 = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h81f873d6dcb2525bE(&plStack_b8);
    }
  }
  return;
}

