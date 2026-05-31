
void FUN_1026ea188(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  ulong uVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  long lVar22;
  ulong uStack_130;
  undefined1 uStack_e1;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uStack_b8 = param_2[8];
  uStack_c0 = param_2[7];
  uStack_e0 = uStack_c0 ^ 0x736f6d6570736575;
  uStack_d8 = uStack_c0 ^ 0x6c7967656e657261;
  uStack_d0 = uStack_b8 ^ 0x646f72616e646f6d;
  uStack_c8 = uStack_b8 ^ 0x7465646279746573;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uVar2 = param_3[1];
  uVar21 = param_3[2];
  FUN_1026b6ac8(&uStack_e0);
  uStack_e1 = 0xff;
  FUN_1026b6ac8(&uStack_e0,&uStack_e1,1);
  uVar9 = uStack_a8;
  uVar15 = uStack_b0;
  uVar13 = uStack_c8;
  uVar1 = uStack_d0;
  uVar14 = uStack_d8;
  uVar10 = uStack_e0;
  uVar8 = *param_3;
  uVar18 = param_2[1];
  uVar19 = param_2[2];
  if (param_2[5] == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h525a1df804e314c8E
              (param_2 + 3,1,uVar18,uVar19,1);
  }
  bVar5 = false;
  lVar17 = 0;
  uVar9 = uVar9 | uVar15 << 0x38;
  uVar13 = uVar9 ^ uVar13;
  uVar10 = uVar1 + uVar10;
  uVar15 = uVar10 ^ (uVar1 >> 0x33 | uVar1 << 0xd);
  uVar1 = uVar13 + uVar14 + uVar15;
  uVar14 = uVar13 + uVar14 ^ (uVar13 >> 0x30 | uVar13 << 0x10);
  uVar15 = uVar1 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
  uVar10 = uVar14 + (uVar10 >> 0x20 | uVar10 << 0x20);
  uVar13 = uVar10 ^ (uVar14 >> 0x2b | uVar14 << 0x15);
  uVar10 = (uVar10 ^ uVar9) + uVar15;
  uVar15 = uVar10 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
  uVar14 = uVar13 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar1 = uVar15 + uVar14;
  uVar14 = uVar14 ^ (uVar13 >> 0x30 | uVar13 << 0x10);
  uVar15 = uVar1 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
  uVar10 = uVar14 + (uVar10 >> 0x20 | uVar10 << 0x20);
  uVar13 = uVar15 + uVar10;
  uVar10 = uVar10 ^ (uVar14 >> 0x2b | uVar14 << 0x15);
  uVar15 = uVar13 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
  uVar14 = uVar10 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar1 = uVar15 + uVar14;
  uVar14 = uVar14 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
  uVar15 = uVar1 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
  uVar10 = uVar14 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar13 = uVar10 ^ (uVar14 >> 0x2b | uVar14 << 0x15);
  uVar15 = uVar15 + uVar10 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
  uVar10 = uVar13 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar14 = uVar15 + uVar10;
  uVar10 = uVar10 ^ (uVar13 >> 0x30 | uVar13 << 0x10);
  uVar14 = (uVar10 >> 0x2b | uVar10 << 0x15) ^ (uVar15 >> 0x2f | uVar15 << 0x11) ^
           (uVar14 >> 0x20 | uVar14 << 0x20) ^ uVar14;
  plVar3 = (long *)param_2[3];
  uVar1 = param_2[4];
  bVar4 = (byte)(uVar14 >> 0x38);
  bVar16 = bVar4 >> 1;
  uVar13 = uVar14 & uVar1;
  lVar22 = *(long *)((long)plVar3 + uVar13);
  uVar10 = CONCAT17(-((byte)((ulong)lVar22 >> 0x38) == bVar16),
                    CONCAT16(-((byte)((ulong)lVar22 >> 0x30) == bVar16),
                             CONCAT15(-((byte)((ulong)lVar22 >> 0x28) == bVar16),
                                      CONCAT14(-((byte)((ulong)lVar22 >> 0x20) == bVar16),
                                               CONCAT13(-((byte)((ulong)lVar22 >> 0x18) == bVar16),
                                                        CONCAT12(-((byte)((ulong)lVar22 >> 0x10) ==
                                                                  bVar16),CONCAT11(-((byte)((ulong)
                                                  lVar22 >> 8) == bVar16),-((byte)lVar22 == bVar16))
                                                  )))))) & 0x8080808080808080;
  do {
    while (uVar10 == 0) {
      cVar23 = (char)((ulong)lVar22 >> 8);
      cVar24 = (char)((ulong)lVar22 >> 0x10);
      cVar25 = (char)((ulong)lVar22 >> 0x18);
      cVar26 = (char)((ulong)lVar22 >> 0x20);
      cVar27 = (char)((ulong)lVar22 >> 0x28);
      cVar28 = (char)((ulong)lVar22 >> 0x30);
      if (bVar5) {
LAB_1026ea3ec:
        bVar20 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar22 >> 0x38) == -1),
                                     CONCAT16(-(cVar28 == -1),
                                              CONCAT15(-(cVar27 == -1),
                                                       CONCAT14(-(cVar26 == -1),
                                                                CONCAT13(-(cVar25 == -1),
                                                                         CONCAT12(-(cVar24 == -1),
                                                                                  CONCAT11(-(cVar23 
                                                  == -1),-((char)lVar22 == -1)))))))),1);
        if ((bVar20 & 1) != 0) {
          uVar10 = (ulong)*(char *)((long)plVar3 + uStack_130);
          if (-1 < *(char *)((long)plVar3 + uStack_130)) {
            lVar17 = *plVar3;
            uVar10 = CONCAT17(-(lVar17 < 0),
                              CONCAT16(-((char)((ulong)lVar17 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar17 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar17 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar17 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar17 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar17 >> 8) < '\0'),
                                                           -((char)lVar17 < '\0'))))))));
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uStack_130 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
            uVar10 = (ulong)*(byte *)((long)plVar3 + uStack_130);
          }
          uVar19 = param_2[2];
          bVar4 = bVar4 >> 1;
          *(byte *)((long)plVar3 + uStack_130) = bVar4;
          *(byte *)((long)plVar3 + (uStack_130 - 8 & uVar1) + 8) = bVar4;
          param_2[6] = param_2[6] + 1;
          param_2[5] = param_2[5] - (uVar10 & 1);
          plVar3[-1 - uStack_130] = uVar19;
          uVar18 = param_2[2];
          uVar10 = *param_2;
          uStack_80 = uVar14;
          if (uVar18 == uVar10) {
            uVar14 = param_2[5] + param_2[6];
            uVar10 = uVar14;
            if (0x13b13b13b13b13a < uVar14) {
              uVar10 = 0x13b13b13b13b13b;
            }
            if (1 < uVar10 - uVar18 && uVar18 <= uVar14) {
              func_0x0001088e8654(&uStack_e0,uVar18,param_2[1],uVar10,8,0x68);
              if ((int)uStack_e0 != 1) {
                *param_2 = uVar10;
                param_2[1] = uStack_d8;
                goto LAB_1026ea518;
              }
            }
            func_0x0001088e8654(&uStack_e0,uVar18,param_2[1],uVar18 + 1,8,0x68);
            if ((int)uStack_e0 == 1) {
              func_0x0001087c9084(uStack_d8,uStack_d0);
              goto LAB_1026ea718;
            }
            uStack_c0 = param_4[1];
            uStack_c8 = *param_4;
            uStack_b0 = param_4[3];
            uStack_b8 = param_4[2];
            uStack_a0 = param_4[5];
            uStack_a8 = param_4[4];
            uStack_90 = param_4[7];
            uStack_98 = param_4[6];
            *param_2 = uVar18 + 1;
            param_2[1] = uStack_d8;
            uStack_88 = param_4[8];
            uStack_e0 = uVar8;
            uStack_d8 = uVar2;
            uStack_d0 = uVar21;
          }
          else {
LAB_1026ea518:
            uStack_c0 = param_4[1];
            uStack_c8 = *param_4;
            uStack_b0 = param_4[3];
            uStack_b8 = param_4[2];
            uStack_a0 = param_4[5];
            uStack_a8 = param_4[4];
            uStack_90 = param_4[7];
            uStack_98 = param_4[6];
            uStack_88 = param_4[8];
            uStack_e0 = uVar8;
            uStack_d8 = uVar2;
            uStack_d0 = uVar21;
            if (uVar18 == uVar10) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc156c7e9c582a628E(param_2);
            }
          }
          puVar12 = (ulong *)(param_2[1] + uVar18 * 0x68);
          puVar12[9] = uStack_98;
          puVar12[8] = uStack_a0;
          puVar12[0xb] = uStack_88;
          puVar12[10] = uStack_90;
          puVar12[0xc] = uStack_80;
          puVar12[1] = uStack_d8;
          *puVar12 = uStack_e0;
          puVar12[3] = uStack_c8;
          puVar12[2] = uStack_d0;
          puVar12[5] = uStack_b8;
          puVar12[4] = uStack_c0;
          puVar12[7] = uStack_a8;
          puVar12[6] = uStack_b0;
          param_2[2] = uVar18 + 1;
          *param_1 = uVar19;
          param_1[1] = 0x8000000000000005;
          return;
        }
        bVar5 = true;
      }
      else {
        uVar10 = CONCAT17(-(lVar22 < 0),
                          CONCAT16(-(cVar28 < '\0'),
                                   CONCAT15(-(cVar27 < '\0'),
                                            CONCAT14(-(cVar26 < '\0'),
                                                     CONCAT13(-(cVar25 < '\0'),
                                                              CONCAT12(-(cVar24 < '\0'),
                                                                       CONCAT11(-(cVar23 < '\0'),
                                                                                -((char)lVar22 <
                                                                                 '\0'))))))));
        if (uVar10 != 0) {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_130 = uVar13 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar1;
          goto LAB_1026ea3ec;
        }
        bVar5 = false;
      }
      lVar17 = lVar17 + 8;
      uVar13 = lVar17 + uVar13 & uVar1;
      lVar22 = *(long *)((long)plVar3 + uVar13);
      uVar10 = CONCAT17(-((byte)((ulong)lVar22 >> 0x38) == bVar16),
                        CONCAT16(-((byte)((ulong)lVar22 >> 0x30) == bVar16),
                                 CONCAT15(-((byte)((ulong)lVar22 >> 0x28) == bVar16),
                                          CONCAT14(-((byte)((ulong)lVar22 >> 0x20) == bVar16),
                                                   CONCAT13(-((byte)((ulong)lVar22 >> 0x18) ==
                                                             bVar16),CONCAT12(-((byte)((ulong)lVar22
                                                                                      >> 0x10) ==
                                                                               bVar16),CONCAT11(-((
                                                  byte)((ulong)lVar22 >> 8) == bVar16),
                                                  -((byte)lVar22 == bVar16)))))))) &
               0x8080808080808080;
    }
    uVar15 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = plVar3[-1 - (uVar13 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar1)];
    if (uVar19 <= uVar15) {
      func_0x000108a07bdc(uVar15,uVar19,&UNK_10b2831e0);
      goto LAB_1026ea718;
    }
    lVar11 = uVar18 + uVar15 * 0x68;
    if ((uVar21 == *(ulong *)(lVar11 + 0x10)) &&
       (iVar7 = _memcmp(uVar2,*(undefined8 *)(lVar11 + 8),uVar21), iVar7 == 0)) {
      if (uVar15 < param_2[2]) {
        lVar17 = param_2[1] + uVar15 * 0x68;
        uVar10 = *(ulong *)(lVar17 + 0x28);
        param_1[4] = *(ulong *)(lVar17 + 0x30);
        param_1[3] = uVar10;
        uVar10 = *(ulong *)(lVar17 + 0x38);
        param_1[6] = *(ulong *)(lVar17 + 0x40);
        param_1[5] = uVar10;
        uVar10 = *(ulong *)(lVar17 + 0x48);
        param_1[8] = *(ulong *)(lVar17 + 0x50);
        param_1[7] = uVar10;
        uVar10 = *(ulong *)(lVar17 + 0x18);
        param_1[2] = *(ulong *)(lVar17 + 0x20);
        param_1[1] = uVar10;
        uVar21 = param_4[1];
        uVar18 = *param_4;
        uVar10 = param_4[2];
        *(ulong *)(lVar17 + 0x30) = param_4[3];
        *(ulong *)(lVar17 + 0x28) = uVar10;
        uVar10 = param_4[4];
        uVar14 = param_4[7];
        uVar19 = param_4[6];
        *(ulong *)(lVar17 + 0x40) = param_4[5];
        *(ulong *)(lVar17 + 0x38) = uVar10;
        *(ulong *)(lVar17 + 0x50) = uVar14;
        *(ulong *)(lVar17 + 0x48) = uVar19;
        param_1[9] = *(ulong *)(lVar17 + 0x58);
        *(ulong *)(lVar17 + 0x58) = param_4[8];
        *(ulong *)(lVar17 + 0x20) = uVar21;
        *(ulong *)(lVar17 + 0x18) = uVar18;
        *param_1 = uVar15;
        if (uVar8 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(uVar2);
        return;
      }
      func_0x000108a07bdc(uVar15,param_2[2],&UNK_10b2831f8);
LAB_1026ea718:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1026ea71c);
      (*pcVar6)();
    }
    uVar10 = uVar10 - 1 & uVar10;
  } while( true );
}

