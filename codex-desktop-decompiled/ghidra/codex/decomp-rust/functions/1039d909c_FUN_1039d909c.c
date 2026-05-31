
void FUN_1039d909c(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  long lVar14;
  ulong uStack_208;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [344];
  
  uVar7 = FUN_1039cf1d4(param_2[4],param_2[5]);
  if (param_2[2] == 0) {
    func_0x00010895496c(param_2,1,param_2 + 4,1);
  }
  bVar6 = false;
  lVar10 = 0;
  plVar1 = (long *)*param_2;
  uVar3 = param_2[1];
  bVar5 = (byte)(uVar7 >> 0x38);
  bVar11 = bVar5 >> 1;
  lVar2 = param_3[1];
  lVar4 = param_3[2];
  uVar7 = uVar7 & uVar3;
  lVar14 = *(long *)((long)plVar1 + uVar7);
  uVar13 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar11),
                    CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar11),
                             CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar11),
                                      CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar11),
                                               CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar11),
                                                        CONCAT12(-((byte)((ulong)lVar14 >> 0x10) ==
                                                                  bVar11),CONCAT11(-((byte)((ulong)
                                                  lVar14 >> 8) == bVar11),-((byte)lVar14 == bVar11))
                                                  ))))));
  do {
    for (uVar13 = uVar13 & 0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      uVar8 = FUN_1039d2350(lVar2,lVar4,plVar1[uVar9 * -0x2c + -0x2b],plVar1[uVar9 * -0x2c + -0x2a])
      ;
      if ((uVar8 & 1) != 0) {
        _memcpy(param_1,plVar1 + uVar9 * -0x2c + -0x29,0x148);
        _memcpy(plVar1 + uVar9 * -0x2c + -0x29,param_4,0x148);
        if (*param_3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar2);
        return;
      }
    }
    cVar15 = (char)((ulong)lVar14 >> 8);
    cVar16 = (char)((ulong)lVar14 >> 0x10);
    cVar17 = (char)((ulong)lVar14 >> 0x18);
    cVar18 = (char)((ulong)lVar14 >> 0x20);
    cVar19 = (char)((ulong)lVar14 >> 0x28);
    cVar20 = (char)((ulong)lVar14 >> 0x30);
    if (bVar6) {
LAB_1039d91d4:
      bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar14 >> 0x38) == -1),
                                   CONCAT16(-(cVar20 == -1),
                                            CONCAT15(-(cVar19 == -1),
                                                     CONCAT14(-(cVar18 == -1),
                                                              CONCAT13(-(cVar17 == -1),
                                                                       CONCAT12(-(cVar16 == -1),
                                                                                CONCAT11(-(cVar15 ==
                                                                                          -1),-((
                                                  char)lVar14 == -1)))))))),1);
      if ((bVar12 & 1) != 0) {
        uVar7 = (ulong)*(char *)((long)plVar1 + uStack_208);
        if (-1 < *(char *)((long)plVar1 + uStack_208)) {
          lVar10 = *plVar1;
          uVar7 = CONCAT17(-(lVar10 < 0),
                           CONCAT16(-((char)((ulong)lVar10 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar10 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar10 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar10 >> 0x18) <
                                                                '\0'),CONCAT12(-((char)((ulong)
                                                  lVar10 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar10 >> 8) < '\0'),
                                                           -((char)lVar10 < '\0'))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uStack_208 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar7 = (ulong)*(byte *)((long)plVar1 + uStack_208);
        }
        lStack_1d8 = param_3[1];
        lStack_1e0 = *param_3;
        lStack_1d0 = param_3[2];
        _memcpy(auStack_1c8,param_4,0x148);
        *(byte *)((long)plVar1 + uStack_208) = bVar5 >> 1;
        *(byte *)((long)plVar1 + (uStack_208 - 8 & uVar3) + 8) = bVar5 >> 1;
        param_2[3] = param_2[3] + 1;
        param_2[2] = param_2[2] - (uVar7 & 1);
        _memcpy(plVar1 + uStack_208 * -0x2c + -0x2c,&lStack_1e0,0x160);
        *param_1 = 0x8000000000000000;
        return;
      }
      bVar6 = true;
    }
    else {
      uVar13 = CONCAT17(-(lVar14 < 0),
                        CONCAT16(-(cVar20 < '\0'),
                                 CONCAT15(-(cVar19 < '\0'),
                                          CONCAT14(-(cVar18 < '\0'),
                                                   CONCAT13(-(cVar17 < '\0'),
                                                            CONCAT12(-(cVar16 < '\0'),
                                                                     CONCAT11(-(cVar15 < '\0'),
                                                                              -((char)lVar14 < '\0')
                                                                             )))))));
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uStack_208 = uVar7 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar3;
        goto LAB_1039d91d4;
      }
      bVar6 = false;
    }
    lVar10 = lVar10 + 8;
    uVar7 = lVar10 + uVar7 & uVar3;
    lVar14 = *(long *)((long)plVar1 + uVar7);
    uVar13 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar11),
                      CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar11),
                               CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar11),
                                        CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar11),
                                                 CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar11)
                                                          ,CONCAT12(-((byte)((ulong)lVar14 >> 0x10)
                                                                     == bVar11),
                                                                    CONCAT11(-((byte)((ulong)lVar14
                                                                                     >> 8) == bVar11
                                                                              ),-((byte)lVar14 ==
                                                                                 bVar11))))))));
  } while( true );
}

