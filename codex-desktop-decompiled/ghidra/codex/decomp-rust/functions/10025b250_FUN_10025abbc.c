
void FUN_10025abbc(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *extraout_x1;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_170 [64];
  ulong *puStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined3 uStack_c3;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  __ZN4http6header4name9parse_hdr17hf05f1d20b4237117E
            (&puStack_c0,param_2,param_3,auStack_170,&UNK_108c72ae9);
  if ((char)uStack_b0 == '\x03') {
    FUN_107c05cb4(&UNK_108c72be9,0x1a,&uStack_e8,&UNK_10b1f2148,&UNK_10b1f2428);
LAB_10025b1f4:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10025b1f8);
    (*pcVar10)();
  }
  uStack_128 = uStack_b8;
  puStack_130 = puStack_c0;
  uStack_120 = uStack_b0;
  plVar29 = (long *)*param_4;
  uStack_108 = param_4[2];
  puStack_110 = (ulong *)param_4[1];
  uStack_f8 = param_4[4];
  lStack_100 = param_4[3];
  uStack_f0 = param_4[5];
  iVar11 = FUN_10025a420(plVar29);
  uVar17 = uStack_120;
  if (iVar11 != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
    (*(code *)puStack_110[4])(&uStack_f8,uStack_108,lStack_100);
    return;
  }
  lVar26 = *plVar29;
  cVar5 = (char)uStack_120;
  if (lVar26 != 2) {
    if ((char)uStack_120 == '\x02') {
      uVar17 = ((ulong)puStack_130 & 0xff ^ 0xa2d39c5) * 0x4a21;
      uVar31 = 2;
    }
    else if ((uStack_120 & 1) == 0) {
      uVar17 = 0xa2cefa4;
      if (uStack_128 != 0) {
        uVar17 = 0xa2cefa4;
        puVar14 = puStack_130;
        uVar31 = uStack_128;
        do {
          uVar17 = (uVar17 ^ (byte)(&UNK_108c72ae9)[(byte)*puVar14]) * 0x1b3;
          uVar31 = uVar31 - 1;
          puVar14 = (ulong *)((long)puVar14 + 1);
        } while (uVar31 != 0);
      }
      uVar31 = 0;
    }
    else {
      uVar17 = 0xa2cefa4;
      if (uStack_128 != 0) {
        uVar17 = 0xa2cefa4;
        puVar14 = puStack_130;
        uVar31 = uStack_128;
        do {
          uVar17 = (uVar17 ^ (byte)*puVar14) * 0x1b3;
          uVar31 = uVar31 - 1;
          puVar14 = (ulong *)((long)puVar14 + 1);
        } while (uVar31 != 0);
      }
      uVar31 = 1;
    }
    goto LAB_10025ae2c;
  }
  uStack_98 = plVar29[2];
  uStack_a0 = plVar29[1];
  puStack_c0 = (ulong *)(uStack_a0 ^ 0x736f6d6570736575);
  uStack_b8 = uStack_a0 ^ 0x6c7967656e657261;
  uStack_b0 = uStack_98 ^ 0x646f72616e646f6d;
  uStack_a8 = uStack_98 ^ 0x7465646279746573;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  uVar31 = uStack_120 & 0xff;
  uStack_e8 = (ulong)((char)uStack_120 != '\x02');
  FUN_10025c1e4(&puStack_c0,&uStack_e8,8);
  if (cVar5 == '\x02') {
    uStack_e8 = (ulong)puStack_130 & 0xff;
    puVar14 = &uStack_e8;
    uVar22 = 8;
LAB_10025ad64:
    FUN_10025c1e4(&puStack_c0,puVar14,uVar22);
  }
  else {
    puVar14 = puStack_130;
    uVar22 = uStack_128;
    if ((uVar17 & 1) != 0) goto LAB_10025ad64;
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      uVar17 = uStack_e8 >> 8;
      uStack_e8 = CONCAT71((int7)uVar17,(&UNK_108c72ae9)[(byte)*puVar14]);
      FUN_10025c1e4(&puStack_c0,&uStack_e8,1);
      puVar14 = (ulong *)((long)puVar14 + 1);
    }
  }
  uVar27 = uStack_88 | lStack_90 << 0x38;
  uVar25 = uVar27 ^ uStack_a8;
  pbVar1 = (byte *)((long)puStack_c0 + uStack_b0);
  uVar22 = (ulong)pbVar1 ^ (uStack_b0 >> 0x33 | uStack_b0 << 0xd);
  uVar17 = uVar25 + uStack_b8 + uVar22;
  uVar25 = uVar25 + uStack_b8 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
  uVar23 = uVar17 ^ (uVar22 >> 0x2f | uVar22 << 0x11);
  uVar22 = uVar25 + ((ulong)pbVar1 >> 0x20 | (long)pbVar1 << 0x20);
  uVar16 = uVar22 ^ (uVar25 >> 0x2b | uVar25 << 0x15);
  uVar22 = (uVar22 ^ uVar27) + uVar23;
  uVar23 = uVar22 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
  uVar17 = uVar16 + ((uVar17 >> 0x20 | uVar17 << 0x20) ^ 0xff);
  uVar25 = uVar23 + uVar17;
  uVar17 = uVar17 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar23 = uVar25 ^ (uVar23 >> 0x2f | uVar23 << 0x11);
  uVar22 = uVar17 + (uVar22 >> 0x20 | uVar22 << 0x20);
  uVar16 = uVar23 + uVar22;
  uVar22 = uVar22 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
  uVar23 = uVar16 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
  uVar17 = uVar22 + (uVar25 >> 0x20 | uVar25 << 0x20);
  uVar25 = uVar23 + uVar17;
  uVar17 = uVar17 ^ (uVar22 >> 0x30 | uVar22 << 0x10);
  uVar23 = uVar25 ^ (uVar23 >> 0x2f | uVar23 << 0x11);
  uVar22 = uVar17 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar16 = uVar22 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
  uVar23 = uVar23 + uVar22 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
  uVar22 = uVar16 + (uVar25 >> 0x20 | uVar25 << 0x20);
  uVar17 = uVar23 + uVar22;
  uVar17 = (uVar22 ^ uVar16 << 0x10) >> 0x2b ^ uVar23 >> 0x2f ^ uVar17 >> 0x20 ^ uVar17;
LAB_10025ae2c:
  uVar27 = uStack_128;
  puVar14 = puStack_130;
  uVar22 = 0;
  uVar17 = uVar17 & 0x7fff;
  uVar7 = *(ushort *)(plVar29 + 0xb);
  uVar25 = uVar17 & uVar7;
  lVar30 = plVar29[9];
  uVar16 = plVar29[10];
  lVar4 = plVar29[4];
  uVar23 = plVar29[5];
  uVar28 = (uint)puStack_130;
  do {
    if ((uVar16 <= uVar25) && (uVar25 = 0, uVar16 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar2 = (ushort *)(lVar30 + uVar25 * 4);
    uVar32 = (ulong)*puVar2;
    if (uVar32 == 0xffff) {
      __ZN105__LT_http__header__name__HeaderName_u20_as_u20_core__convert__From_LT_http__header__name__HdrName_GT__GT_4from17hbfb6a660daab06c9E
                (&uStack_e8,&puStack_130);
      uStack_b8 = uStack_108;
      puStack_c0 = puStack_110;
      uStack_a8 = uStack_f8;
      uStack_b0 = lStack_100;
      uStack_a0 = uStack_f0;
      iVar11 = func_0x00010025a76c(plVar29,uVar17,&uStack_e8,&puStack_c0);
      if (iVar11 != 0) {
LAB_10025b01c:
        *(undefined1 *)(param_1 + 4) = 3;
        return;
      }
      if (uVar25 < (ulong)plVar29[10]) {
        puVar3 = (undefined2 *)(plVar29[9] + uVar25 * 4);
        *puVar3 = (short)uVar23;
        puVar3[1] = (short)uVar17;
        goto LAB_10025afc0;
      }
      uVar12 = FUN_107c05cd0(uVar25,plVar29[10],&UNK_10b1f2230);
      lVar26 = lStack_100;
      (*(code *)puStack_110[4])(&uStack_f8,uStack_108);
      __Unwind_Resume(uVar12);
      auVar33 = FUN_107c05ccc();
      puVar13 = auVar33._0_8_;
      if (lVar26 == 0) {
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[1] = 1;
        puVar21 = &UNK_10b205a90;
        goto LAB_10025b310;
      }
      lVar30 = 0;
      break;
    }
    uVar8 = puVar2[1];
    if (((ulong)((int)uVar25 - (uint)(uVar8 & uVar7)) & (ulong)uVar7) < uVar22) {
      __ZN105__LT_http__header__name__HeaderName_u20_as_u20_core__convert__From_LT_http__header__name__HdrName_GT__GT_4from17hbfb6a660daab06c9E
                (&uStack_e8,&puStack_130);
      uStack_b8 = uStack_108;
      puStack_c0 = puStack_110;
      uStack_a8 = uStack_f8;
      uStack_b0 = lStack_100;
      uStack_a0 = uStack_f0;
      lVar30 = plVar29[5];
      uVar31 = func_0x00010025a76c(plVar29,uVar17,&uStack_e8,&puStack_c0);
      if ((uVar31 & 1) != 0) goto LAB_10025b01c;
      uVar31 = 0;
      lVar4 = plVar29[9];
      uVar16 = plVar29[10];
      uVar28 = (uint)lVar30 & 0xffff;
      while( true ) {
        uVar7 = (ushort)uVar17;
        uVar8 = (ushort)uVar28;
        if ((uVar16 <= uVar25) && (uVar25 = 0, uVar16 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar2 = (ushort *)(lVar4 + uVar25 * 4);
        uVar28 = (uint)*puVar2;
        if (uVar28 == 0xffff) break;
        uVar31 = uVar31 + 1;
        uVar17 = (ulong)puVar2[1];
        *puVar2 = uVar8;
        puVar2[1] = uVar7;
        uVar25 = uVar25 + 1;
      }
      *puVar2 = uVar8;
      puVar2[1] = uVar7;
      if ((0x7f < uVar31 || lVar26 != 2 && 0x1ff < uVar22) && (*plVar29 == 0)) {
        *plVar29 = 1;
      }
LAB_10025afc0:
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    if ((uint)uVar8 == (uint)uVar17) {
      if (uVar23 <= uVar32) {
        FUN_107c05cd0(uVar32,uVar23,&UNK_10b1f2218);
        goto LAB_10025b1f4;
      }
      lVar18 = lVar4 + uVar32 * 0x68;
      if (*(long *)(lVar18 + 0x40) == 0) {
        if (((int)uVar31 == 2) && ((uint)*(byte *)(lVar18 + 0x48) == (uVar28 & 0xff))) {
LAB_10025b058:
          uStack_b8 = uStack_108;
          puStack_c0 = puStack_110;
          uStack_a8 = uStack_f8;
          uStack_b0 = lStack_100;
          uStack_a0 = uStack_f0;
          func_0x000100259f94(&uStack_e8,plVar29,uVar32,&puStack_c0);
          param_1[1] = uStack_e0;
          *param_1 = uStack_e8;
          param_1[3] = uStack_d0;
          param_1[2] = uStack_d8;
          *(undefined4 *)((long)param_1 + 0x21) = uStack_c7;
          *(uint *)((long)param_1 + 0x24) = CONCAT31(uStack_c3,uStack_c7._3_1_);
          *(undefined1 *)(param_1 + 4) = uStack_c8;
          return;
        }
      }
      else if ((int)uVar31 != 2) {
        if ((uVar31 & 1) == 0) {
          if (*(ulong *)(lVar18 + 0x50) == uVar27) {
            pcVar19 = *(char **)(lVar18 + 0x48);
            uVar20 = uVar27;
            puVar24 = puVar14;
            do {
              if (uVar20 == 0) goto LAB_10025b058;
              cVar5 = *pcVar19;
              uVar9 = *puVar24;
              uVar20 = uVar20 - 1;
              pcVar19 = pcVar19 + 1;
              puVar24 = (ulong *)((long)puVar24 + 1);
            } while (cVar5 == (&UNK_108c72ae9)[(byte)uVar9]);
          }
        }
        else if ((*(ulong *)(lVar18 + 0x50) == uVar27) &&
                (iVar11 = _memcmp(*(undefined8 *)(lVar18 + 0x48),puVar14,uVar27), iVar11 == 0))
        goto LAB_10025b058;
      }
    }
    uVar22 = uVar22 + 1;
    uVar25 = uVar25 + 1;
  } while( true );
  do {
    bVar6 = *(byte *)(auVar33._8_8_ + lVar30);
    if (bVar6 < 0x20) {
      if (bVar6 != 9) goto LAB_10025b298;
    }
    else if (bVar6 == 0x7f) {
LAB_10025b298:
      uVar15 = 2;
      goto LAB_10025b318;
    }
    lVar30 = lVar30 + 1;
  } while (lVar26 != lVar30);
  uVar17 = _malloc(lVar26);
  if (uVar17 == 0) {
    FUN_107c03c64(1,lVar26);
                    /* WARNING: Could not recover jumptable at 0x00010025b34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x1[1] + 0x18))(*extraout_x1,&UNK_108c72c03,5);
    return;
  }
  _memcpy(uVar17,auVar33._8_8_,lVar26);
  if ((uVar17 & 1) == 0) {
    puVar13[1] = uVar17;
    puVar13[2] = lVar26;
    puVar13[3] = uVar17 | 1;
    puVar21 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
  }
  else {
    puVar13[1] = uVar17;
    puVar13[2] = lVar26;
    puVar13[3] = uVar17;
    puVar21 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
  }
LAB_10025b310:
  uVar15 = 0;
  *puVar13 = puVar21;
LAB_10025b318:
  *(undefined1 *)(puVar13 + 4) = uVar15;
  return;
}

