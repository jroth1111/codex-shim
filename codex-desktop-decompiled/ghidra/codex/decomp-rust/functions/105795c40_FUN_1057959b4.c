
void FUN_1057959b4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *extraout_x8;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x19;
  ulong uVar18;
  ulong *puVar19;
  long *plVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  undefined *puStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  undefined *puStack_c8;
  ulong *puStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  
  uVar8 = param_2[2];
  uVar12 = param_2[3];
  uVar22 = param_2[1];
  puStack_68 = param_1;
  if (uVar8 <= uVar12 && uVar12 <= uVar22) {
    lVar23 = *param_2;
    plVar20 = param_2 + 4;
    uVar17 = (ulong)*(byte *)(param_2 + 5);
    bVar3 = *(byte *)((long)plVar20 + (uVar17 - 1));
    uVar18 = (ulong)bVar3;
    uStack_70 = uVar12;
    if (4 < uVar17) {
      do {
        uVar10 = uVar12 - uVar8;
        if (uVar10 < 0x10) {
          uVar14 = 0;
          if (uVar10 == 0) {
            auVar24 = ZEXT816(0);
          }
          else {
            do {
              if (*(byte *)(lVar23 + uVar8 + uVar14) == bVar3) {
                auVar24._8_8_ = uVar14;
                auVar24._0_8_ = 1;
                goto LAB_105795bf8;
              }
              uVar14 = uVar14 + 1;
            } while (uVar10 != uVar14);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar10;
            auVar24 = auVar4 << 0x40;
          }
        }
        else {
          auVar24 = __ZN4core5slice6memchr14memchr_aligned17h5505eeecba6e215aE
                              (uVar18,lVar23 + uVar8);
          unaff_x19 = uVar17;
          plVar20 = param_2;
        }
LAB_105795bf8:
        if ((auVar24._0_8_ & 1) == 0) goto LAB_105795bfc;
        uVar8 = uVar8 + auVar24._8_8_ + 1;
        param_2[2] = uVar8;
        if (uVar17 <= uVar8 && uVar8 <= uVar22) {
          puVar7 = (undefined8 *)
                   __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                             (0,uVar17,4,&UNK_10b3b3280);
          uStack_78 = 0x105795c40;
          if (*(byte *)(puVar7 + 2) == 2) {
            uVar2 = *(undefined1 *)puVar7;
            *extraout_x8 = 0;
            *(undefined1 *)(extraout_x8 + 1) = uVar2;
            return;
          }
          pbVar21 = (byte *)*puVar7;
          uVar17 = puVar7[1];
          uStack_b0 = uVar22;
          uStack_a8 = uVar8;
          uStack_a0 = uVar12;
          plStack_98 = plVar20;
          uStack_90 = uVar18;
          uStack_88 = unaff_x19;
          puStack_80 = &stack0xfffffffffffffff0;
          if ((*(byte *)(puVar7 + 2) & 1) != 0) {
            if (uVar17 != 0) {
              uVar8 = _malloc(uVar17);
              if (uVar8 != 0) {
                _memcpy(uVar8,pbVar21,uVar17);
                uVar12 = uVar8;
                puVar13 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
                if ((uVar8 & 1) == 0) {
                  uVar12 = uVar8 | 1;
                  puVar13 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
                }
                goto LAB_105795d00;
              }
LAB_105795ce4:
              func_0x0001087c9084(1,uVar17);
            }
            uVar8 = 1;
            uVar12 = 0;
            puVar13 = &UNK_10b205a90;
LAB_105795d00:
            *extraout_x8 = puVar13;
            extraout_x8[1] = uVar8;
            extraout_x8[2] = uVar17;
            extraout_x8[3] = uVar12;
            return;
          }
          if ((long)uVar17 < 0) {
            func_0x0001087c9084(0,uVar17);
          }
          if (uVar17 == 0) {
            lVar23 = 1;
          }
          else {
            lVar23 = _malloc(uVar17);
            if (lVar23 == 0) goto LAB_105795ce4;
          }
          uVar8 = 0x40 - LZCOUNT(uVar17 >> 10);
          if (6 < uVar8) {
            uVar8 = 7;
          }
          uStack_118 = 0;
          puStack_108 = (ulong *)(uVar8 << 2 | 1);
          uVar8 = uVar17;
          lStack_120 = lVar23;
          uStack_110 = uVar17;
          if (uVar17 != 0) goto LAB_105795d6c;
          uVar8 = 0;
          goto LAB_105795dd8;
        }
        uVar11 = 0;
      } while (uVar8 <= uVar12);
      goto LAB_105795c04;
    }
    do {
      uVar12 = uStack_70 - uVar8;
      lVar1 = lVar23 + uVar8;
      if (0xf < uVar12) {
        uVar10 = (lVar1 + 7U & 0xfffffffffffffff8) - lVar1;
        if (uVar10 == 0) goto LAB_105795a98;
        uVar14 = 0;
        do {
          if (*(byte *)(lVar1 + uVar14) == bVar3) goto LAB_105795af4;
          uVar14 = uVar14 + 1;
        } while (uVar10 != uVar14);
        for (; uVar14 = uVar10, uVar10 <= uVar12 - 0x10; uVar10 = uVar10 + 0x10) {
LAB_105795a98:
          uVar16 = *(ulong *)(lVar1 + uVar10) ^ uVar18 * 0x101010101010101;
          uVar15 = ((ulong *)(lVar1 + uVar10))[1] ^ uVar18 * 0x101010101010101;
          uVar14 = uVar10;
          if ((((0x101010101010100 - uVar16 | uVar16) & (0x101010101010100 - uVar15 | uVar15) ^
               0xffffffffffffffff) & 0x8080808080808080) != 0) break;
        }
        do {
          if (uVar12 == uVar14) goto LAB_105795bfc;
          if (*(byte *)(lVar1 + uVar14) == bVar3) goto LAB_105795af4;
          uVar14 = uVar14 + 1;
        } while( true );
      }
      if (uStack_70 == uVar8) goto LAB_105795bfc;
      uVar14 = 0;
      while (*(byte *)(lVar1 + uVar14) != bVar3) {
        uVar14 = uVar14 + 1;
        if (uVar12 == uVar14) goto LAB_105795bfc;
      }
LAB_105795af4:
      uVar8 = uVar8 + uVar14 + 1;
      param_2[2] = uVar8;
      if ((uVar17 <= uVar8 && uVar8 <= uVar22) &&
         (iVar6 = _memcmp(lVar23 + (uVar8 - uVar17),plVar20,uVar17), iVar6 == 0)) {
        puStack_68[1] = uVar8 - uVar17;
        puStack_68[2] = uVar8;
        uVar11 = 1;
        goto LAB_105795c04;
      }
    } while (uVar8 <= uStack_70);
  }
  uVar11 = 0;
  goto LAB_105795c04;
LAB_105795d6c:
  do {
    uVar2 = (&UNK_109a9e87b)[*pbVar21];
    if (uVar17 == uStack_118) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(&lStack_120,1,1);
      *(undefined1 *)(lStack_120 + uStack_118) = uVar2;
      lVar23 = lStack_120;
      uVar17 = uStack_110;
      if (uStack_110 == uStack_118) {
        puStack_c8 = (undefined *)0x0;
        puStack_d0 = (ulong *)0x1;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_d0);
        goto LAB_105795ee8;
      }
    }
    else {
      *(undefined1 *)(lVar23 + uStack_118) = uVar2;
    }
    uVar12 = uStack_118 + 1;
    pbVar21 = pbVar21 + 1;
    uVar8 = uVar8 - 1;
    uStack_118 = uVar12;
  } while (uVar8 != 0);
  uVar8 = uStack_110;
  if (((ulong)puStack_108 & 1) == 0) {
    puStack_100 = &__ZN5bytes9bytes_mut13SHARED_VTABLE17h0a6377dc8dadf18bE;
  }
  else {
LAB_105795dd8:
    uVar12 = uStack_118;
    uVar17 = (ulong)puStack_108 >> 5;
    puVar19 = (ulong *)(lVar23 - uVar17);
    uVar22 = uVar17 + uStack_118;
    if (uStack_118 == uVar8) {
      if (uVar22 == 0) {
        uStack_f0 = 0;
        puStack_e8 = (ulong *)0x0;
        puStack_f8 = (ulong *)0x1;
        puStack_100 = &UNK_10b205a90;
      }
      else if (((ulong)puVar19 & 1) == 0) {
        puStack_100 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        puStack_f8 = puVar19;
        uStack_f0 = uVar22;
        puStack_e8 = (ulong *)((ulong)puVar19 | 1);
      }
      else {
        puStack_100 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        puStack_f8 = puVar19;
        uStack_f0 = uVar22;
        puStack_e8 = puVar19;
      }
    }
    else {
      puVar9 = (ulong *)_malloc(0x18);
      if (puVar9 == (ulong *)0x0) {
        func_0x0001087c906c(8,0x18);
        goto LAB_105795ee8;
      }
      *puVar9 = (ulong)puVar19;
      puVar9[1] = uVar17 + uVar8;
      puVar9[2] = 1;
      puStack_100 = &UNK_10b205b08;
      puStack_f8 = puVar19;
      uStack_f0 = uVar22;
      puStack_e8 = puVar9;
    }
    if (uVar22 < uVar17) {
      puStack_d0 = &uStack_e0;
      puStack_c0 = &uStack_d8;
      puStack_c8 = &DAT_105796138;
      puStack_b8 = &DAT_105796138;
      uStack_e0 = uVar17;
      uStack_d8 = uVar22;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__cannot_advance_past__remaining__108aba12e,&puStack_d0,&UNK_10b3b3ae0);
LAB_105795ee8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x105795eec);
      (*pcVar5)();
    }
    lVar23 = (long)puStack_f8 + uVar17;
    puStack_108 = puStack_e8;
  }
  *extraout_x8 = puStack_100;
  extraout_x8[1] = lVar23;
  extraout_x8[2] = uVar12;
  extraout_x8[3] = puStack_108;
  return;
LAB_105795bfc:
  uVar11 = 0;
  param_2[2] = uStack_70;
LAB_105795c04:
  *puStack_68 = uVar11;
  return;
}

