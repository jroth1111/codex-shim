
undefined1  [16] FUN_103a13810(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar12;
  ulong extraout_x1;
  long extraout_x1_00;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x19;
  ulong uVar19;
  byte *pbVar20;
  ulong *unaff_x21;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_b8 [3];
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  ulong *puStack_68;
  long *plVar11;
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    lVar9 = 0;
    goto LAB_103a13a84;
  }
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar12 = param_1[4];
  uVar4 = param_1[5];
  if (uVar4 <= uVar3 && uVar12 <= uVar4) {
    puVar1 = param_1 + 6;
    uVar18 = (ulong)(byte)param_1[7];
    bVar5 = *(byte *)((long)puVar1 + (uVar18 - 1));
    uVar19 = (ulong)bVar5;
    if (uVar18 < 5) {
      puStack_68 = param_1;
      do {
        uVar14 = uVar4 - uVar12;
        lVar9 = uVar2 + uVar12;
        param_1 = puStack_68;
        if (0xf < uVar14) {
          uVar10 = (lVar9 + 7U & 0xfffffffffffffff8) - lVar9;
          if (uVar10 == 0) goto LAB_103a138f8;
          uVar15 = 0;
          do {
            if (*(byte *)(lVar9 + uVar15) == bVar5) goto LAB_103a13954;
            uVar15 = uVar15 + 1;
          } while (uVar10 != uVar15);
          for (; uVar15 = uVar10, uVar10 <= uVar14 - 0x10; uVar10 = uVar10 + 0x10) {
LAB_103a138f8:
            uVar17 = *(ulong *)(lVar9 + uVar10) ^ uVar19 * 0x101010101010101;
            uVar16 = ((ulong *)(lVar9 + uVar10))[1] ^ uVar19 * 0x101010101010101;
            uVar15 = uVar10;
            if ((((0x101010101010100 - uVar17 | uVar17) & (0x101010101010100 - uVar16 | uVar16) ^
                 0xffffffffffffffff) & 0x8080808080808080) != 0) break;
          }
          do {
            if (uVar14 == uVar15) goto LAB_103a13a58;
            if (*(byte *)(lVar9 + uVar15) == bVar5) goto LAB_103a13954;
            uVar15 = uVar15 + 1;
          } while( true );
        }
        if (uVar4 == uVar12) goto LAB_103a13a58;
        uVar15 = 0;
        while (*(byte *)(lVar9 + uVar15) != bVar5) {
          uVar15 = uVar15 + 1;
          if (uVar14 == uVar15) goto LAB_103a13a58;
        }
LAB_103a13954:
        uVar12 = uVar12 + uVar15 + 1;
        puStack_68[4] = uVar12;
        if ((uVar18 <= uVar12 && uVar12 <= uVar3) &&
           (iVar8 = _memcmp(uVar2 + (uVar12 - uVar18),puVar1,uVar18), iVar8 == 0)) {
          param_2 = (uVar12 - uVar18) - *puStack_68;
          lVar9 = uVar2 + *puStack_68;
          *puStack_68 = uVar12;
          goto LAB_103a13a84;
        }
        param_1 = puStack_68;
      } while (uVar12 <= uVar4);
    }
    else {
      do {
        uVar14 = uVar4 - uVar12;
        if (uVar14 < 0x10) {
          uVar10 = 0;
          if (uVar14 == 0) {
            auVar22 = ZEXT816(0);
          }
          else {
            do {
              if (*(byte *)(uVar2 + uVar12 + uVar10) == bVar5) {
                auVar22._8_8_ = uVar10;
                auVar22._0_8_ = 1;
                goto LAB_103a13a54;
              }
              uVar10 = uVar10 + 1;
            } while (uVar14 != uVar10);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar14;
            auVar22 = auVar6 << 0x40;
          }
        }
        else {
          auVar22 = __ZN4core5slice6memchr14memchr_aligned17h5505eeecba6e215aE
                              (uVar19,uVar2 + uVar12);
          unaff_x19 = uVar18;
          unaff_x21 = param_1;
        }
LAB_103a13a54:
        if ((auVar22._0_8_ & 1) == 0) goto LAB_103a13a58;
        uVar12 = uVar12 + auVar22._8_8_ + 1;
        param_1[4] = uVar12;
        if (uVar18 <= uVar12 && uVar12 <= uVar3) {
          auVar22 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                              (0,uVar18,4,&UNK_10b2dedd0);
          plVar11 = auVar22._8_8_;
          pbVar20 = auVar22._0_8_;
          uStack_78 = 0x103a13abc;
          uStack_a0 = uVar2;
          puStack_98 = unaff_x21;
          uStack_90 = uVar19;
          uStack_88 = unaff_x19;
          puStack_80 = &stack0xfffffffffffffff0;
          if ((*pbVar20 & 1) != 0) {
            auStack_b8[0] = 10;
            auVar22 = func_0x000108a4a0f8(auStack_b8,0,0);
            return auVar22;
          }
          func_0x000103a07f40(pbVar20,&UNK_108d9ef88,7);
          if (*pbVar20 == 1) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d9e3ae,0x28,&UNK_10b2dee60);
            lVar9 = extraout_x1_00;
          }
          else {
            unaff_x21 = *(ulong **)(pbVar20 + 8);
            pbVar20 = (byte *)*unaff_x21;
            lVar9 = *(long *)(pbVar20 + 0x10);
            if (*(long *)pbVar20 != lVar9) goto LAB_103a13b14;
          }
          FUN_1089576c4(pbVar20,lVar9,1,1,1);
          lVar9 = *(long *)(pbVar20 + 0x10);
LAB_103a13b14:
          *(undefined1 *)(*(long *)(pbVar20 + 8) + lVar9) = 0x3a;
          *(long *)(pbVar20 + 0x10) = lVar9 + 1;
          plVar13 = (long *)*unaff_x21;
          if (*plVar11 == -0x8000000000000000) {
            uVar12 = plVar13[2];
            if (*plVar13 - uVar12 < 4) {
              FUN_1089576c4(plVar13,uVar12,4,1,1);
              uVar12 = plVar13[2];
            }
            *(undefined4 *)(plVar13[1] + uVar12) = 0x6c6c756e;
            plVar13[2] = uVar12 + 4;
          }
          else {
            func_0x0001039e9a08(plVar11[1],plVar11[2]);
            uVar12 = extraout_x1;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar12;
          return auVar7 << 0x40;
        }
      } while (uVar12 <= uVar4);
    }
  }
  goto LAB_103a13a5c;
LAB_103a13a58:
  param_1[4] = uVar4;
LAB_103a13a5c:
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  param_2 = param_1[1] - *param_1;
  lVar9 = uVar2 + *param_1;
  if ((param_1[8] & 1) == 0 && param_2 == 0) {
    lVar9 = 0;
  }
LAB_103a13a84:
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = lVar9;
  return auVar21;
}

