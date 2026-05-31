
/* WARNING: Type propagation algorithm not settling */

ulong FUN_101aa3534(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  uVar17 = *(ulong *)(param_1 + 0x10);
  if (uVar17 == 0) {
    return 0;
  }
  if (uVar17 == 1) {
    lVar20 = *(long *)(param_1 + 8);
    if (param_3 != *(long *)(lVar20 + 0x10)) {
      return 0;
    }
    iVar6 = _memcmp(param_2,*(undefined8 *)(lVar20 + 8),param_3);
    if (iVar6 != 0) {
      return 0;
    }
    uVar19 = 0;
LAB_101aa3698:
    if (uVar19 < uVar17) {
      return lVar20 + uVar19 * 0x68 + 0x18;
    }
    func_0x000108a07bdc(uVar19,uVar17,&UNK_10b26a230);
  }
  else {
    uVar16 = FUN_10196f8b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_2,
                           param_3);
    lVar14 = 0;
    lVar20 = *(long *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
    uVar4 = *(ulong *)(param_1 + 0x20);
    bVar11 = (byte)(uVar16 >> 0x39);
    uVar16 = uVar16 & uVar4;
    uVar23 = *(undefined8 *)(lVar1 + uVar16);
    uVar3 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar11),
                     CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar11),
                              CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar11),
                                       CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar11),
                                                CONCAT13(-((byte)((ulong)uVar23 >> 0x18) == bVar11),
                                                         CONCAT12(-((byte)((ulong)uVar23 >> 0x10) ==
                                                                   bVar11),CONCAT11(-((byte)((ulong)
                                                  uVar23 >> 8) == bVar11),-((byte)uVar23 == bVar11))
                                                  )))))) & 0x8080808080808080;
    while( true ) {
      while (uVar3 == 0) {
        bVar22 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar23 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar23 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar23 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar23 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar23
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar23 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar23 >> 8) == -1),
                                                           -((char)uVar23 == -1)))))))),1);
        if ((bVar22 & 1) != 0) {
          return 0;
        }
        lVar14 = lVar14 + 8;
        uVar16 = uVar16 + lVar14 & uVar4;
        uVar23 = *(undefined8 *)(lVar1 + uVar16);
        uVar3 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar11),
                         CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar11),
                                  CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar11),
                                           CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar11),
                                                    CONCAT13(-((byte)((ulong)uVar23 >> 0x18) ==
                                                              bVar11),CONCAT12(-((byte)((ulong)
                                                  uVar23 >> 0x10) == bVar11),
                                                  CONCAT11(-((byte)((ulong)uVar23 >> 8) == bVar11),
                                                           -((byte)uVar23 == bVar11)))))))) &
                0x8080808080808080;
      }
      uVar19 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = *(ulong *)(lVar1 + -8 +
                         (uVar16 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar4) *
                         -8);
      if (uVar17 <= uVar19) break;
      lVar12 = lVar20 + uVar19 * 0x68;
      if ((param_3 == *(long *)(lVar12 + 0x10)) &&
         (iVar6 = _memcmp(param_2,*(undefined8 *)(lVar12 + 8),param_3), iVar6 == 0))
      goto LAB_101aa3698;
      uVar3 = uVar3 - 1 & uVar3;
    }
  }
  plVar10 = (long *)&UNK_10b26a260;
  auVar24 = func_0x000108a07bdc(uVar19,uVar17);
  lVar9 = auVar24._8_8_;
  plVar7 = auVar24._0_8_;
  lVar1 = plVar10[1];
  lVar2 = plVar10[2];
  uVar19 = FUN_10196fc70(*(undefined8 *)(lVar9 + 0x38),*(undefined8 *)(lVar9 + 0x40),lVar1,lVar2);
  lVar14 = 0;
  lVar15 = *plVar10;
  lVar20 = *(long *)(lVar9 + 8);
  uVar3 = *(ulong *)(lVar9 + 0x10);
  lVar12 = *(long *)(lVar9 + 0x18);
  uVar4 = *(ulong *)(lVar9 + 0x20);
  bVar11 = (byte)(uVar19 >> 0x39);
  uVar16 = uVar19 & uVar4;
  uVar23 = *(undefined8 *)(lVar12 + uVar16);
  uVar17 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar11),
                    CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar11),
                             CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar11),
                                      CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar11),
                                               CONCAT13(-((byte)((ulong)uVar23 >> 0x18) == bVar11),
                                                        CONCAT12(-((byte)((ulong)uVar23 >> 0x10) ==
                                                                  bVar11),CONCAT11(-((byte)((ulong)
                                                  uVar23 >> 8) == bVar11),-((byte)uVar23 == bVar11))
                                                  )))))) & 0x8080808080808080;
  while( true ) {
    while (uVar17 == 0) {
      bVar22 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar23 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar23 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar23 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar23 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar23 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar23 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar23 >> 8) == -1),
                                                           -((char)uVar23 == -1)))))))),1);
      if ((bVar22 & 1) != 0) {
        *plVar7 = lVar15;
        plVar7[1] = lVar1;
        plVar7[2] = lVar2;
        plVar7[3] = lVar9;
        plVar7[4] = uVar19;
        return uVar19;
      }
      lVar14 = lVar14 + 8;
      uVar16 = uVar16 + lVar14 & uVar4;
      uVar23 = *(undefined8 *)(lVar12 + uVar16);
      uVar17 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar11),
                        CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar11),
                                 CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar11),
                                          CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar11),
                                                   CONCAT13(-((byte)((ulong)uVar23 >> 0x18) ==
                                                             bVar11),CONCAT12(-((byte)((ulong)uVar23
                                                                                      >> 0x10) ==
                                                                               bVar11),CONCAT11(-((
                                                  byte)((ulong)uVar23 >> 8) == bVar11),
                                                  -((byte)uVar23 == bVar11)))))))) &
               0x8080808080808080;
    }
    uVar18 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar16 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar4;
    uVar21 = *(ulong *)(lVar12 + -8 + uVar18 * -8);
    if (uVar3 <= uVar21) break;
    lVar13 = lVar20 + uVar21 * 0x70;
    if ((lVar2 == *(long *)(lVar13 + 0x10)) &&
       (uVar8 = _memcmp(lVar1,*(undefined8 *)(lVar13 + 8),lVar2), (int)uVar8 == 0)) {
      plVar7[2] = uVar21;
      plVar7[3] = uVar18;
      *plVar7 = -0x8000000000000000;
      plVar7[1] = lVar9;
      if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar17 = (*(code *)PTR__free_10b61b0a8)(lVar1);
        return uVar17;
      }
      return uVar8;
    }
    uVar17 = uVar17 - 1 & uVar17;
  }
  func_0x000108a07bdc(uVar21,uVar3,&UNK_10b26a260);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101aa38c8);
  (*pcVar5)();
}

