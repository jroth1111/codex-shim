
void FUN_104a5a94c(long *param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  undefined8 uVar23;
  ulong uVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  long lVar25;
  undefined1 auVar32 [16];
  ulong uStack_160;
  undefined1 uStack_111;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  
  if (param_3 == (ulong *)0x0) {
    plVar7 = (long *)0x1;
  }
  else {
    puVar14 = param_3;
    if (param_3 == (ulong *)0x1e) {
      if (((*param_2 == 0x6a5f656472657324 && param_2[1] == 0x6972703a3a6e6f73) &&
          param_2[2] == 0x61523a3a65746176) && *(long *)((long)param_2 + 0x16) == 0x65756c6156776152
         ) {
        *param_1 = -0x8000000000000000;
        return;
      }
      plVar7 = (long *)_malloc(0x1e);
      if (plVar7 == (long *)0x0) {
LAB_104a5aa54:
        auVar32 = func_0x0001087c9084(1,0x1e);
        puVar9 = auVar32._8_8_;
        puVar8 = auVar32._0_8_;
        uStack_e8 = puVar9[8];
        uStack_f0 = puVar9[7];
        uStack_110 = uStack_f0 ^ 0x736f6d6570736575;
        uStack_108 = uStack_f0 ^ 0x6c7967656e657261;
        uStack_100 = uStack_e8 ^ 0x646f72616e646f6d;
        uStack_f8 = uStack_e8 ^ 0x7465646279746573;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0;
        uVar2 = puVar14[1];
        uVar24 = puVar14[2];
        FUN_104a5a33c(&uStack_110);
        uStack_111 = 0xff;
        FUN_104a5a33c(&uStack_110,&uStack_111,1);
        uVar11 = uStack_d8;
        uVar17 = uStack_e0;
        uVar15 = uStack_f8;
        uVar1 = uStack_100;
        uVar16 = uStack_108;
        uVar12 = uStack_110;
        uVar10 = *puVar14;
        uVar20 = puVar9[1];
        uVar21 = puVar9[2];
        if (puVar9[5] == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h525a1df804e314c8E
                    (puVar9 + 3,1,uVar20,uVar21,1);
        }
        bVar4 = false;
        lVar19 = 0;
        uVar11 = uVar11 | uVar17 << 0x38;
        uVar15 = uVar11 ^ uVar15;
        uVar12 = uVar1 + uVar12;
        uVar17 = uVar12 ^ (uVar1 >> 0x33 | uVar1 << 0xd);
        uVar1 = uVar15 + uVar16 + uVar17;
        uVar16 = uVar15 + uVar16 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
        uVar17 = uVar1 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
        uVar12 = uVar16 + (uVar12 >> 0x20 | uVar12 << 0x20);
        uVar15 = uVar12 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
        uVar12 = (uVar12 ^ uVar11) + uVar17;
        uVar17 = uVar12 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
        uVar16 = uVar15 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
        uVar1 = uVar17 + uVar16;
        uVar16 = uVar16 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
        uVar17 = uVar1 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
        uVar12 = uVar16 + (uVar12 >> 0x20 | uVar12 << 0x20);
        uVar15 = uVar17 + uVar12;
        uVar12 = uVar12 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
        uVar17 = uVar15 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
        uVar16 = uVar12 + (uVar1 >> 0x20 | uVar1 << 0x20);
        uVar1 = uVar17 + uVar16;
        uVar16 = uVar16 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
        uVar17 = uVar1 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
        uVar12 = uVar16 + (uVar15 >> 0x20 | uVar15 << 0x20);
        uVar15 = uVar12 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
        uVar17 = uVar17 + uVar12 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
        uVar12 = uVar15 + (uVar1 >> 0x20 | uVar1 << 0x20);
        uVar16 = uVar17 + uVar12;
        uVar12 = uVar12 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
        uVar16 = (uVar12 >> 0x2b | uVar12 << 0x15) ^ (uVar17 >> 0x2f | uVar17 << 0x11) ^
                 (uVar16 >> 0x20 | uVar16 << 0x20) ^ uVar16;
        plVar7 = (long *)puVar9[3];
        uVar1 = puVar9[4];
        bVar3 = (byte)(uVar16 >> 0x38);
        bVar18 = bVar3 >> 1;
        uVar15 = uVar16 & uVar1;
        lVar25 = *(long *)((long)plVar7 + uVar15);
        uVar12 = CONCAT17(-((byte)((ulong)lVar25 >> 0x38) == bVar18),
                          CONCAT16(-((byte)((ulong)lVar25 >> 0x30) == bVar18),
                                   CONCAT15(-((byte)((ulong)lVar25 >> 0x28) == bVar18),
                                            CONCAT14(-((byte)((ulong)lVar25 >> 0x20) == bVar18),
                                                     CONCAT13(-((byte)((ulong)lVar25 >> 0x18) ==
                                                               bVar18),CONCAT12(-((byte)((ulong)
                                                  lVar25 >> 0x10) == bVar18),
                                                  CONCAT11(-((byte)((ulong)lVar25 >> 8) == bVar18),
                                                           -((byte)lVar25 == bVar18)))))))) &
                 0x8080808080808080;
        do {
          while (uVar12 == 0) {
            cVar26 = (char)((ulong)lVar25 >> 8);
            cVar27 = (char)((ulong)lVar25 >> 0x10);
            cVar28 = (char)((ulong)lVar25 >> 0x18);
            cVar29 = (char)((ulong)lVar25 >> 0x20);
            cVar30 = (char)((ulong)lVar25 >> 0x28);
            cVar31 = (char)((ulong)lVar25 >> 0x30);
            if (bVar4) {
LAB_104a5acc4:
              bVar22 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar25 >> 0x38) == -1),
                                           CONCAT16(-(cVar31 == -1),
                                                    CONCAT15(-(cVar30 == -1),
                                                             CONCAT14(-(cVar29 == -1),
                                                                      CONCAT13(-(cVar28 == -1),
                                                                               CONCAT12(-(cVar27 ==
                                                                                         -1),
                                                  CONCAT11(-(cVar26 == -1),-((char)lVar25 == -1)))))
                                                  ))),1);
              if ((bVar22 & 1) != 0) {
                uVar12 = (ulong)*(char *)((long)plVar7 + uStack_160);
                if (-1 < *(char *)((long)plVar7 + uStack_160)) {
                  lVar19 = *plVar7;
                  uVar12 = CONCAT17(-(lVar19 < 0),
                                    CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar19 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar19 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar19 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar19 >> 8) <
                                                                     '\0'),-((char)lVar19 < '\0'))))
                                                  ))));
                  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
                  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uStack_160 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
                  uVar12 = (ulong)*(byte *)((long)plVar7 + uStack_160);
                }
                uVar21 = puVar9[2];
                bVar3 = bVar3 >> 1;
                *(byte *)((long)plVar7 + uStack_160) = bVar3;
                *(byte *)((long)plVar7 + (uStack_160 - 8 & uVar1) + 8) = bVar3;
                puVar9[6] = puVar9[6] + 1;
                puVar9[5] = puVar9[5] - (uVar12 & 1);
                plVar7[-1 - uStack_160] = uVar21;
                uVar20 = puVar9[2];
                uVar12 = *puVar9;
                uStack_b0 = uVar16;
                if (uVar20 == uVar12) {
                  uVar16 = puVar9[5] + puVar9[6];
                  uVar12 = uVar16;
                  if (0x13b13b13b13b13a < uVar16) {
                    uVar12 = 0x13b13b13b13b13b;
                  }
                  if (1 < uVar12 - uVar20 && uVar20 <= uVar16) {
                    func_0x0001089a82ec(&uStack_110,uVar20,puVar9[1],uVar12,8,0x68);
                    if ((int)uStack_110 != 1) {
                      *puVar9 = uVar12;
                      puVar9[1] = uStack_108;
                      goto LAB_104a5adf0;
                    }
                  }
                  func_0x0001089a82ec(&uStack_110,uVar20,puVar9[1],uVar20 + 1,8,0x68);
                  if ((int)uStack_110 == 1) {
                    func_0x0001087c9084(uStack_108,uStack_100);
                    goto LAB_104a5aff0;
                  }
                  uStack_f0 = param_4[1];
                  uStack_f8 = *param_4;
                  uStack_e0 = param_4[3];
                  uStack_e8 = param_4[2];
                  uStack_d0 = param_4[5];
                  uStack_d8 = param_4[4];
                  uStack_c0 = param_4[7];
                  uStack_c8 = param_4[6];
                  *puVar9 = uVar20 + 1;
                  puVar9[1] = uStack_108;
                  uStack_b8 = param_4[8];
                  uStack_110 = uVar10;
                  uStack_108 = uVar2;
                  uStack_100 = uVar24;
                }
                else {
LAB_104a5adf0:
                  uStack_f0 = param_4[1];
                  uStack_f8 = *param_4;
                  uStack_e0 = param_4[3];
                  uStack_e8 = param_4[2];
                  uStack_d0 = param_4[5];
                  uStack_d8 = param_4[4];
                  uStack_c0 = param_4[7];
                  uStack_c8 = param_4[6];
                  uStack_b8 = param_4[8];
                  uStack_110 = uVar10;
                  uStack_108 = uVar2;
                  uStack_100 = uVar24;
                  if (uVar20 == uVar12) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc156c7e9c582a628E(puVar9);
                  }
                }
                puVar14 = (ulong *)(puVar9[1] + uVar20 * 0x68);
                puVar14[9] = uStack_c8;
                puVar14[8] = uStack_d0;
                puVar14[0xb] = uStack_b8;
                puVar14[10] = uStack_c0;
                puVar14[0xc] = uStack_b0;
                puVar14[1] = uStack_108;
                *puVar14 = uStack_110;
                puVar14[3] = uStack_f8;
                puVar14[2] = uStack_100;
                puVar14[5] = uStack_e8;
                puVar14[4] = uStack_f0;
                puVar14[7] = uStack_d8;
                puVar14[6] = uStack_e0;
                puVar9[2] = uVar20 + 1;
                *puVar8 = uVar21;
                puVar8[1] = 0x8000000000000005;
                return;
              }
              bVar4 = true;
            }
            else {
              uVar12 = CONCAT17(-(lVar25 < 0),
                                CONCAT16(-(cVar31 < '\0'),
                                         CONCAT15(-(cVar30 < '\0'),
                                                  CONCAT14(-(cVar29 < '\0'),
                                                           CONCAT13(-(cVar28 < '\0'),
                                                                    CONCAT12(-(cVar27 < '\0'),
                                                                             CONCAT11(-(cVar26 < 
                                                  '\0'),-((char)lVar25 < '\0'))))))));
              if (uVar12 != 0) {
                uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uStack_160 = uVar15 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar1
                ;
                goto LAB_104a5acc4;
              }
              bVar4 = false;
            }
            lVar19 = lVar19 + 8;
            uVar15 = lVar19 + uVar15 & uVar1;
            lVar25 = *(long *)((long)plVar7 + uVar15);
            uVar12 = CONCAT17(-((byte)((ulong)lVar25 >> 0x38) == bVar18),
                              CONCAT16(-((byte)((ulong)lVar25 >> 0x30) == bVar18),
                                       CONCAT15(-((byte)((ulong)lVar25 >> 0x28) == bVar18),
                                                CONCAT14(-((byte)((ulong)lVar25 >> 0x20) == bVar18),
                                                         CONCAT13(-((byte)((ulong)lVar25 >> 0x18) ==
                                                                   bVar18),CONCAT12(-((byte)((ulong)
                                                  lVar25 >> 0x10) == bVar18),
                                                  CONCAT11(-((byte)((ulong)lVar25 >> 8) == bVar18),
                                                           -((byte)lVar25 == bVar18)))))))) &
                     0x8080808080808080;
          }
          uVar17 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = plVar7[-1 - (uVar15 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) &
                               uVar1)];
          if (uVar21 <= uVar17) {
            func_0x000108a07bdc(uVar17,uVar21,&UNK_10b342ee8);
            goto LAB_104a5aff0;
          }
          lVar13 = uVar20 + uVar17 * 0x68;
          if ((uVar24 == *(ulong *)(lVar13 + 0x10)) &&
             (iVar6 = _memcmp(uVar2,*(undefined8 *)(lVar13 + 8),uVar24), iVar6 == 0)) {
            if (uVar17 < puVar9[2]) {
              lVar19 = puVar9[1] + uVar17 * 0x68;
              uVar12 = *(ulong *)(lVar19 + 0x28);
              puVar8[4] = *(ulong *)(lVar19 + 0x30);
              puVar8[3] = uVar12;
              uVar12 = *(ulong *)(lVar19 + 0x38);
              puVar8[6] = *(ulong *)(lVar19 + 0x40);
              puVar8[5] = uVar12;
              uVar12 = *(ulong *)(lVar19 + 0x48);
              puVar8[8] = *(ulong *)(lVar19 + 0x50);
              puVar8[7] = uVar12;
              uVar12 = *(ulong *)(lVar19 + 0x18);
              puVar8[2] = *(ulong *)(lVar19 + 0x20);
              puVar8[1] = uVar12;
              uVar24 = param_4[1];
              uVar20 = *param_4;
              uVar12 = param_4[2];
              *(ulong *)(lVar19 + 0x30) = param_4[3];
              *(ulong *)(lVar19 + 0x28) = uVar12;
              uVar12 = param_4[4];
              uVar16 = param_4[7];
              uVar21 = param_4[6];
              *(ulong *)(lVar19 + 0x40) = param_4[5];
              *(ulong *)(lVar19 + 0x38) = uVar12;
              *(ulong *)(lVar19 + 0x50) = uVar16;
              *(ulong *)(lVar19 + 0x48) = uVar21;
              puVar8[9] = *(ulong *)(lVar19 + 0x58);
              *(ulong *)(lVar19 + 0x58) = param_4[8];
              *(ulong *)(lVar19 + 0x20) = uVar24;
              *(ulong *)(lVar19 + 0x18) = uVar20;
              *puVar8 = uVar17;
              if (uVar10 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__free_10b61b0a8)(uVar2);
              return;
            }
            func_0x000108a07bdc(uVar17,puVar9[2],&UNK_10b342f00);
LAB_104a5aff0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104a5aff4);
            (*pcVar5)();
          }
          uVar12 = uVar12 - 1 & uVar12;
        } while( true );
      }
      lVar19 = *param_2;
      plVar7[1] = param_2[1];
      *plVar7 = lVar19;
      uVar23 = *(undefined8 *)((long)param_2 + 0xe);
      *(undefined8 *)((long)plVar7 + 0x16) = *(undefined8 *)((long)param_2 + 0x16);
      *(undefined8 *)((long)plVar7 + 0xe) = uVar23;
      goto LAB_104a5aa24;
    }
    plVar7 = (long *)_malloc(param_3);
    if (plVar7 == (long *)0x0) {
      func_0x0001087c9084(1,param_3);
      goto LAB_104a5aa54;
    }
  }
  _memcpy(plVar7,param_2,param_3);
LAB_104a5aa24:
  *param_1 = (long)param_3;
  param_1[1] = (long)plVar7;
  param_1[2] = (long)param_3;
  return;
}

