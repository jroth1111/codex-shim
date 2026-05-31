
void __ZN10codex_core5state4turn9TurnState34insert_pending_request_permissions17h20dd5372713a2d12E
               (long *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  long lVar22;
  ulong uStack_108;
  
  lVar9 = param_3[1];
  lVar10 = param_3[2];
  uVar6 = FUN_1033f72f8(*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98),lVar9,lVar10
                       );
  if (*(long *)(param_2 + 0x80) == 0) {
    func_0x000108946d18(param_2 + 0x70,1,(undefined8 *)(param_2 + 0x90),1);
  }
  bVar4 = false;
  lVar8 = 0;
  plVar1 = *(long **)(param_2 + 0x70);
  uVar2 = *(ulong *)(param_2 + 0x78);
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar11 = bVar3 >> 1;
  uVar6 = uVar6 & uVar2;
  lVar22 = *(long *)((long)plVar1 + uVar6);
  uVar13 = CONCAT17(-((byte)((ulong)lVar22 >> 0x38) == bVar11),
                    CONCAT16(-((byte)((ulong)lVar22 >> 0x30) == bVar11),
                             CONCAT15(-((byte)((ulong)lVar22 >> 0x28) == bVar11),
                                      CONCAT14(-((byte)((ulong)lVar22 >> 0x20) == bVar11),
                                               CONCAT13(-((byte)((ulong)lVar22 >> 0x18) == bVar11),
                                                        CONCAT12(-((byte)((ulong)lVar22 >> 0x10) ==
                                                                  bVar11),CONCAT11(-((byte)((ulong)
                                                  lVar22 >> 8) == bVar11),-((byte)lVar22 == bVar11))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar7 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if ((lVar10 == plVar1[uVar7 * -0xc + -10]) &&
         (iVar5 = _memcmp(lVar9,plVar1[uVar7 * -0xc + -0xb],lVar10), iVar5 == 0)) {
        lVar8 = plVar1[uVar7 * -0xc + -6];
        lVar10 = plVar1[uVar7 * -0xc + -7];
        lVar22 = plVar1[uVar7 * -0xc + -5];
        lVar15 = plVar1[uVar7 * -0xc + -2];
        lVar14 = plVar1[uVar7 * -0xc + -3];
        param_1[5] = plVar1[uVar7 * -0xc + -4];
        param_1[4] = lVar22;
        param_1[7] = lVar15;
        param_1[6] = lVar14;
        lVar22 = plVar1[uVar7 * -0xc + -9];
        param_1[1] = plVar1[uVar7 * -0xc + -8];
        *param_1 = lVar22;
        param_1[3] = lVar8;
        param_1[2] = lVar10;
        lVar22 = param_4[1];
        lVar8 = *param_4;
        lVar10 = param_4[2];
        plVar1[uVar7 * -0xc + -6] = param_4[3];
        plVar1[uVar7 * -0xc + -7] = lVar10;
        lVar10 = param_4[4];
        lVar15 = param_4[7];
        lVar14 = param_4[6];
        plVar1[uVar7 * -0xc + -4] = param_4[5];
        plVar1[uVar7 * -0xc + -5] = lVar10;
        plVar1[uVar7 * -0xc + -2] = lVar15;
        plVar1[uVar7 * -0xc + -3] = lVar14;
        param_1[8] = plVar1[uVar7 * -0xc + -1];
        plVar1[uVar7 * -0xc + -1] = param_4[8];
        plVar1[uVar7 * -0xc + -8] = lVar22;
        plVar1[uVar7 * -0xc + -9] = lVar8;
        if (*param_3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar9);
        return;
      }
    }
    cVar23 = (char)((ulong)lVar22 >> 8);
    cVar24 = (char)((ulong)lVar22 >> 0x10);
    cVar25 = (char)((ulong)lVar22 >> 0x18);
    cVar26 = (char)((ulong)lVar22 >> 0x20);
    cVar27 = (char)((ulong)lVar22 >> 0x28);
    cVar28 = (char)((ulong)lVar22 >> 0x30);
    if (bVar4) {
LAB_102dbf9c4:
      bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar22 >> 0x38) == -1),
                                   CONCAT16(-(cVar28 == -1),
                                            CONCAT15(-(cVar27 == -1),
                                                     CONCAT14(-(cVar26 == -1),
                                                              CONCAT13(-(cVar25 == -1),
                                                                       CONCAT12(-(cVar24 == -1),
                                                                                CONCAT11(-(cVar23 ==
                                                                                          -1),-((
                                                  char)lVar22 == -1)))))))),1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)plVar1 + uStack_108);
        if (-1 < *(char *)((long)plVar1 + uStack_108)) {
          lVar9 = *plVar1;
          uVar6 = CONCAT17(-(lVar9 < 0),
                           CONCAT16(-((char)((ulong)lVar9 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar9 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar9 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar9 >> 0x18) < '\0'
                                                                ),CONCAT12(-((char)((ulong)lVar9 >>
                                                                                   0x10) < '\0'),
                                                                           CONCAT11(-((char)((ulong)
                                                  lVar9 >> 8) < '\0'),-((char)lVar9 < '\0'))))))));
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uStack_108 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)plVar1 + uStack_108);
        }
        lVar9 = param_3[2];
        lVar22 = param_3[1];
        lVar8 = *param_3;
        lVar20 = param_4[1];
        lVar18 = *param_4;
        lVar16 = param_4[3];
        lVar14 = param_4[2];
        lVar17 = param_4[5];
        lVar15 = param_4[4];
        lVar21 = param_4[7];
        lVar19 = param_4[6];
        lVar10 = param_4[8];
        bVar3 = bVar3 >> 1;
        *(byte *)((long)plVar1 + uStack_108) = bVar3;
        *(byte *)((long)plVar1 + (uStack_108 - 8 & uVar2) + 8) = bVar3;
        *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x88) + 1;
        *(ulong *)(param_2 + 0x80) = *(long *)(param_2 + 0x80) - (uVar6 & 1);
        plVar1[uStack_108 * -0xc + -7] = lVar14;
        plVar1[uStack_108 * -0xc + -8] = lVar20;
        plVar1[uStack_108 * -0xc + -5] = lVar15;
        plVar1[uStack_108 * -0xc + -6] = lVar16;
        plVar1[uStack_108 * -0xc + -3] = lVar19;
        plVar1[uStack_108 * -0xc + -4] = lVar17;
        plVar1[uStack_108 * -0xc + -1] = lVar10;
        plVar1[uStack_108 * -0xc + -2] = lVar21;
        plVar1[uStack_108 * -0xc + -0xb] = lVar22;
        plVar1[uStack_108 * -0xc + -0xc] = lVar8;
        plVar1[uStack_108 * -0xc + -9] = lVar18;
        plVar1[uStack_108 * -0xc + -10] = lVar9;
        *param_1 = -0x8000000000000000;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar13 = CONCAT17(-(lVar22 < 0),
                        CONCAT16(-(cVar28 < '\0'),
                                 CONCAT15(-(cVar27 < '\0'),
                                          CONCAT14(-(cVar26 < '\0'),
                                                   CONCAT13(-(cVar25 < '\0'),
                                                            CONCAT12(-(cVar24 < '\0'),
                                                                     CONCAT11(-(cVar23 < '\0'),
                                                                              -((char)lVar22 < '\0')
                                                                             )))))));
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uStack_108 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_102dbf9c4;
      }
      bVar4 = false;
    }
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6 & uVar2;
    lVar22 = *(long *)((long)plVar1 + uVar6);
    uVar13 = CONCAT17(-((byte)((ulong)lVar22 >> 0x38) == bVar11),
                      CONCAT16(-((byte)((ulong)lVar22 >> 0x30) == bVar11),
                               CONCAT15(-((byte)((ulong)lVar22 >> 0x28) == bVar11),
                                        CONCAT14(-((byte)((ulong)lVar22 >> 0x20) == bVar11),
                                                 CONCAT13(-((byte)((ulong)lVar22 >> 0x18) == bVar11)
                                                          ,CONCAT12(-((byte)((ulong)lVar22 >> 0x10)
                                                                     == bVar11),
                                                                    CONCAT11(-((byte)((ulong)lVar22
                                                                                     >> 8) == bVar11
                                                                              ),-((byte)lVar22 ==
                                                                                 bVar11)))))))) &
             0x8080808080808080;
  } while( true );
}

