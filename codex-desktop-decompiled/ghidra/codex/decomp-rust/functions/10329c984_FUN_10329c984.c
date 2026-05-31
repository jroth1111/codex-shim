
void FUN_10329c984(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
  int *piVar19;
  
  uVar8 = FUN_1033f7ffc(param_1[4],param_1[5],param_2);
  lVar13 = 0;
  lVar12 = *param_1;
  uVar9 = param_1[1];
  bVar11 = (byte)(uVar8 >> 0x39);
  uVar8 = uVar8 & uVar9;
  uVar29 = *(undefined8 *)(lVar12 + uVar8);
  uVar21 = CONCAT17(-((byte)((ulong)uVar29 >> 0x38) == bVar11),
                    CONCAT16(-((byte)((ulong)uVar29 >> 0x30) == bVar11),
                             CONCAT15(-((byte)((ulong)uVar29 >> 0x28) == bVar11),
                                      CONCAT14(-((byte)((ulong)uVar29 >> 0x20) == bVar11),
                                               CONCAT13(-((byte)((ulong)uVar29 >> 0x18) == bVar11),
                                                        CONCAT12(-((byte)((ulong)uVar29 >> 0x10) ==
                                                                  bVar11),CONCAT11(-((byte)((ulong)
                                                  uVar29 >> 8) == bVar11),-((byte)uVar29 == bVar11))
                                                  )))))) & 0x8080808080808080;
  while( true ) {
    while (uVar21 == 0) {
      bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar29 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar29 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == -1),
                                                           -((char)uVar29 == -1)))))))),1);
      if ((bVar28 & 1) != 0) {
        return;
      }
      lVar13 = lVar13 + 8;
      uVar8 = uVar8 + lVar13 & uVar9;
      uVar29 = *(undefined8 *)(lVar12 + uVar8);
      uVar21 = CONCAT17(-((byte)((ulong)uVar29 >> 0x38) == bVar11),
                        CONCAT16(-((byte)((ulong)uVar29 >> 0x30) == bVar11),
                                 CONCAT15(-((byte)((ulong)uVar29 >> 0x28) == bVar11),
                                          CONCAT14(-((byte)((ulong)uVar29 >> 0x20) == bVar11),
                                                   CONCAT13(-((byte)((ulong)uVar29 >> 0x18) ==
                                                             bVar11),CONCAT12(-((byte)((ulong)uVar29
                                                                                      >> 0x10) ==
                                                                               bVar11),CONCAT11(-((
                                                  byte)((ulong)uVar29 >> 8) == bVar11),
                                                  -((byte)uVar29 == bVar11)))))))) &
               0x8080808080808080;
    }
    uVar15 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar8 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar9;
    if (param_2 == *(long *)(lVar12 + -0x20 + uVar15 * -0x20)) break;
    uVar21 = uVar21 - 1 & uVar21;
  }
  lVar13 = lVar12 + uVar15 * -0x20;
  puVar1 = (undefined8 *)(lVar12 + (uVar15 - 8 & uVar9));
  uVar29 = *puVar1;
  uVar20 = *(undefined8 *)(lVar12 + uVar15);
  uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar20 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar20 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar20 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar20 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar20 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar20 >> 8) == -1),-((char)uVar20 == -1))))))));
  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar29 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar29 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == -1),
                                                           -((char)uVar29 == -1))))))))) >> 3) < 8)
  {
    param_1[2] = param_1[2] + 1;
    uVar14 = 0xff;
  }
  else {
    uVar14 = 0x80;
  }
  *(undefined1 *)(lVar12 + uVar15) = uVar14;
  *(undefined1 *)(puVar1 + 1) = uVar14;
  param_1[3] = param_1[3] + -1;
  lVar12 = *(long *)(lVar13 + -0x18);
  if (lVar12 != -0x8000000000000000) {
    piVar2 = *(int **)(lVar13 + -0x10);
    lVar13 = *(long *)(lVar13 + -8);
    if ((lVar13 != 0) && (param_1[9] != 0)) {
      lVar3 = param_1[10];
      lVar6 = param_1[0xb];
      lVar4 = param_1[6];
      uVar21 = param_1[7];
      piVar18 = piVar2;
LAB_10329cc84:
      piVar19 = piVar18 + 2;
      iVar7 = *piVar18;
      uVar9 = func_0x0001033f7530(lVar3,lVar6,iVar7);
      lVar10 = 0;
      bVar11 = (byte)(uVar9 >> 0x39);
      while( true ) {
        uVar9 = uVar9 & uVar21;
        uVar29 = *(undefined8 *)(lVar4 + uVar9);
        bVar28 = (byte)((ulong)uVar29 >> 8);
        bVar22 = (byte)((ulong)uVar29 >> 0x10);
        bVar23 = (byte)((ulong)uVar29 >> 0x18);
        bVar24 = (byte)((ulong)uVar29 >> 0x20);
        bVar25 = (byte)((ulong)uVar29 >> 0x28);
        bVar26 = (byte)((ulong)uVar29 >> 0x30);
        bVar27 = (byte)((ulong)uVar29 >> 0x38);
        for (uVar8 = CONCAT17(-(bVar27 == bVar11),
                              CONCAT16(-(bVar26 == bVar11),
                                       CONCAT15(-(bVar25 == bVar11),
                                                CONCAT14(-(bVar24 == bVar11),
                                                         CONCAT13(-(bVar23 == bVar11),
                                                                  CONCAT12(-(bVar22 == bVar11),
                                                                           CONCAT11(-(bVar28 ==
                                                                                     bVar11),-((byte
                                                  )uVar29 == bVar11)))))))) & 0x8080808080808080;
            uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
          uVar15 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar9 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar21;
          if (iVar7 == *(int *)(lVar4 + -0x38 + uVar15 * -0x38)) {
            lVar17 = lVar4 + uVar15 * -0x38;
            uVar15 = FUN_1033f7ffc(*(undefined8 *)(lVar17 + -0x10),*(undefined8 *)(lVar17 + -8),
                                   param_2);
            lVar10 = 0;
            lVar5 = *(long *)(lVar17 + -0x30);
            uVar8 = *(ulong *)(lVar17 + -0x28);
            bVar11 = (byte)(uVar15 >> 0x39);
            uVar15 = uVar15 & uVar8;
            uVar29 = *(undefined8 *)(lVar5 + uVar15);
            uVar9 = CONCAT17(-((byte)((ulong)uVar29 >> 0x38) == bVar11),
                             CONCAT16(-((byte)((ulong)uVar29 >> 0x30) == bVar11),
                                      CONCAT15(-((byte)((ulong)uVar29 >> 0x28) == bVar11),
                                               CONCAT14(-((byte)((ulong)uVar29 >> 0x20) == bVar11),
                                                        CONCAT13(-((byte)((ulong)uVar29 >> 0x18) ==
                                                                  bVar11),CONCAT12(-((byte)((ulong)
                                                  uVar29 >> 0x10) == bVar11),
                                                  CONCAT11(-((byte)((ulong)uVar29 >> 8) == bVar11),
                                                           -((byte)uVar29 == bVar11)))))))) &
                    0x8080808080808080;
            goto joined_r0x00010329cba4;
          }
        }
        bVar28 = NEON_umaxv(CONCAT17(-(bVar27 == 0xff),
                                     CONCAT16(-(bVar26 == 0xff),
                                              CONCAT15(-(bVar25 == 0xff),
                                                       CONCAT14(-(bVar24 == 0xff),
                                                                CONCAT13(-(bVar23 == 0xff),
                                                                         CONCAT12(-(bVar22 == 0xff),
                                                                                  CONCAT11(-(bVar28 
                                                  == 0xff),-((byte)uVar29 == 0xff)))))))),1);
        if ((bVar28 & 1) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = uVar9 + lVar10;
      }
      goto LAB_10329cc7c;
    }
LAB_10329cca8:
    if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(piVar2);
      return;
    }
  }
  return;
joined_r0x00010329cba4:
  if (uVar9 == 0) {
    bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar29 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar29 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar29 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == -1),
                                                           -((char)uVar29 == -1)))))))),1);
    if ((bVar28 & 1) != 0) goto LAB_10329cc7c;
    lVar10 = lVar10 + 8;
    uVar15 = uVar15 + lVar10 & uVar8;
    uVar29 = *(undefined8 *)(lVar5 + uVar15);
    uVar9 = CONCAT17(-((byte)((ulong)uVar29 >> 0x38) == bVar11),
                     CONCAT16(-((byte)((ulong)uVar29 >> 0x30) == bVar11),
                              CONCAT15(-((byte)((ulong)uVar29 >> 0x28) == bVar11),
                                       CONCAT14(-((byte)((ulong)uVar29 >> 0x20) == bVar11),
                                                CONCAT13(-((byte)((ulong)uVar29 >> 0x18) == bVar11),
                                                         CONCAT12(-((byte)((ulong)uVar29 >> 0x10) ==
                                                                   bVar11),CONCAT11(-((byte)((ulong)
                                                  uVar29 >> 8) == bVar11),-((byte)uVar29 == bVar11))
                                                  )))))) & 0x8080808080808080;
    goto joined_r0x00010329cba4;
  }
  uVar16 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
  uVar16 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar8;
  if (param_2 == *(long *)(lVar5 + -8 + uVar16 * -8)) goto LAB_10329cc0c;
  uVar9 = uVar9 - 1 & uVar9;
  goto joined_r0x00010329cba4;
LAB_10329cc0c:
  puVar1 = (undefined8 *)(lVar5 + (uVar16 - 8 & uVar8));
  uVar29 = *puVar1;
  uVar20 = *(undefined8 *)(lVar5 + uVar16);
  uVar9 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) == -1),
                   CONCAT16(-((char)((ulong)uVar20 >> 0x30) == -1),
                            CONCAT15(-((char)((ulong)uVar20 >> 0x28) == -1),
                                     CONCAT14(-((char)((ulong)uVar20 >> 0x20) == -1),
                                              CONCAT13(-((char)((ulong)uVar20 >> 0x18) == -1),
                                                       CONCAT12(-((char)((ulong)uVar20 >> 0x10) ==
                                                                 -1),CONCAT11(-((char)((ulong)uVar20
                                                                                      >> 8) == -1),
                                                                              -((char)uVar20 == -1))
                                                               ))))));
  uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar29 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar29 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == -1),
                                                           -((char)uVar29 == -1))))))))) >> 3) < 8)
  {
    *(long *)(lVar17 + -0x20) = *(long *)(lVar17 + -0x20) + 1;
    uVar14 = 0xff;
  }
  else {
    uVar14 = 0x80;
  }
  *(undefined1 *)(lVar5 + uVar16) = uVar14;
  *(undefined1 *)(puVar1 + 1) = uVar14;
  *(long *)(lVar17 + -0x18) = *(long *)(lVar17 + -0x18) + -1;
LAB_10329cc7c:
  piVar18 = piVar19;
  if (piVar19 == piVar2 + lVar13 * 2) goto LAB_10329cca8;
  goto LAB_10329cc84;
}

