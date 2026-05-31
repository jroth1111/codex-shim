
void __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  byte bVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  long lVar27;
  undefined1 auVar34 [16];
  ulong uStack_c8;
  
  if (*param_2 == -0x8000000000000000) {
    lVar13 = param_2[1];
    if (lVar13 != -0x7ffffffffffffffb) {
      lVar11 = param_2[2];
      lVar23 = param_2[5];
      lVar21 = param_2[4];
      param_1[2] = param_2[3];
      param_1[1] = lVar11;
      param_1[4] = lVar23;
      param_1[3] = lVar21;
      lVar11 = param_2[6];
      lVar23 = param_2[9];
      lVar21 = param_2[8];
      param_1[6] = param_2[7];
      param_1[5] = lVar11;
      param_1[8] = lVar23;
      param_1[7] = lVar21;
      *param_1 = lVar13;
      return;
    }
    plVar9 = (long *)&UNK_10b46a510;
    auVar34 = func_0x000108a079f0(&UNK_109b9f7c8,0x19);
    lVar23 = auVar34._8_8_;
    puVar7 = auVar34._0_8_;
    lVar13 = plVar9[1];
    lVar21 = plVar9[2];
    uVar8 = FUN_105dc7120(*(undefined8 *)(lVar23 + 0x38),*(undefined8 *)(lVar23 + 0x40),lVar13);
    lVar11 = *(long *)(lVar23 + 8);
    uVar12 = *(ulong *)(lVar23 + 0x10);
    if (*(long *)(lVar23 + 0x28) == 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h525a1df804e314c8E
                (lVar23 + 0x18,1,lVar11,uVar12,1);
    }
    bVar4 = false;
    lVar15 = 0;
    plVar1 = *(long **)(lVar23 + 0x18);
    uVar2 = *(ulong *)(lVar23 + 0x20);
    bVar3 = (byte)(uVar8 >> 0x38);
    bVar17 = bVar3 >> 1;
    uVar14 = uVar8 & uVar2;
    lVar27 = *(long *)((long)plVar1 + uVar14);
    uVar16 = CONCAT17(-((byte)((ulong)lVar27 >> 0x38) == bVar17),
                      CONCAT16(-((byte)((ulong)lVar27 >> 0x30) == bVar17),
                               CONCAT15(-((byte)((ulong)lVar27 >> 0x28) == bVar17),
                                        CONCAT14(-((byte)((ulong)lVar27 >> 0x20) == bVar17),
                                                 CONCAT13(-((byte)((ulong)lVar27 >> 0x18) == bVar17)
                                                          ,CONCAT12(-((byte)((ulong)lVar27 >> 0x10)
                                                                     == bVar17),
                                                                    CONCAT11(-((byte)((ulong)lVar27
                                                                                     >> 8) == bVar17
                                                                              ),-((byte)lVar27 ==
                                                                                 bVar17)))))))) &
             0x8080808080808080;
joined_r0x000105dc9474:
    while (uVar16 == 0) {
      cVar28 = (char)((ulong)lVar27 >> 8);
      cVar29 = (char)((ulong)lVar27 >> 0x10);
      cVar30 = (char)((ulong)lVar27 >> 0x18);
      cVar31 = (char)((ulong)lVar27 >> 0x20);
      cVar32 = (char)((ulong)lVar27 >> 0x28);
      cVar33 = (char)((ulong)lVar27 >> 0x30);
      if (bVar4) {
LAB_105dc953c:
        bVar19 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar27 >> 0x38) == -1),
                                     CONCAT16(-(cVar33 == -1),
                                              CONCAT15(-(cVar32 == -1),
                                                       CONCAT14(-(cVar31 == -1),
                                                                CONCAT13(-(cVar30 == -1),
                                                                         CONCAT12(-(cVar29 == -1),
                                                                                  CONCAT11(-(cVar28 
                                                  == -1),-((char)lVar27 == -1)))))))),1);
        if ((bVar19 & 1) != 0) {
          uVar12 = (ulong)*(char *)((long)plVar1 + uStack_c8);
          if (-1 < *(char *)((long)plVar1 + uStack_c8)) {
            lVar13 = *plVar1;
            uVar12 = CONCAT17(-(lVar13 < 0),
                              CONCAT16(-((char)((ulong)lVar13 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar13 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar13 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar13 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar13 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar13 >> 8) < '\0'),
                                                           -((char)lVar13 < '\0'))))))));
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uStack_c8 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            uVar12 = (ulong)*(byte *)((long)plVar1 + uStack_c8);
          }
          uVar16 = *(ulong *)(lVar23 + 0x10);
          *(byte *)((long)plVar1 + uStack_c8) = bVar3 >> 1;
          *(byte *)((long)plVar1 + (uStack_c8 - 8 & uVar2) + 8) = bVar3 >> 1;
          *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + 1;
          *(ulong *)(lVar23 + 0x28) = *(long *)(lVar23 + 0x28) - (uVar12 & 1);
          plVar1[-1 - uStack_c8] = uVar16;
          func_0x000105dc9bf4(lVar23,uVar8,plVar9,param_5);
          *puVar7 = uVar16;
          puVar7[1] = 0x8000000000000005;
          return;
        }
        bVar4 = true;
      }
      else {
        uVar16 = CONCAT17(-(lVar27 < 0),
                          CONCAT16(-(cVar33 < '\0'),
                                   CONCAT15(-(cVar32 < '\0'),
                                            CONCAT14(-(cVar31 < '\0'),
                                                     CONCAT13(-(cVar30 < '\0'),
                                                              CONCAT12(-(cVar29 < '\0'),
                                                                       CONCAT11(-(cVar28 < '\0'),
                                                                                -((char)lVar27 <
                                                                                 '\0'))))))));
        if (uVar16 != 0) {
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uStack_c8 = uVar14 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar2;
          goto LAB_105dc953c;
        }
        bVar4 = false;
      }
      lVar15 = lVar15 + 8;
      uVar14 = lVar15 + uVar14 & uVar2;
      lVar27 = *(long *)((long)plVar1 + uVar14);
      uVar16 = CONCAT17(-((byte)((ulong)lVar27 >> 0x38) == bVar17),
                        CONCAT16(-((byte)((ulong)lVar27 >> 0x30) == bVar17),
                                 CONCAT15(-((byte)((ulong)lVar27 >> 0x28) == bVar17),
                                          CONCAT14(-((byte)((ulong)lVar27 >> 0x20) == bVar17),
                                                   CONCAT13(-((byte)((ulong)lVar27 >> 0x18) ==
                                                             bVar17),CONCAT12(-((byte)((ulong)lVar27
                                                                                      >> 0x10) ==
                                                                               bVar17),CONCAT11(-((
                                                  byte)((ulong)lVar27 >> 8) == bVar17),
                                                  -((byte)lVar27 == bVar17)))))))) &
               0x8080808080808080;
    }
    uVar18 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = plVar1[-1 - (uVar14 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar2)];
    if (uVar12 <= uVar18) {
      func_0x000108a07bdc(uVar18,uVar12,&UNK_10b46a578);
      goto LAB_105dc9720;
    }
    lVar10 = lVar11 + uVar18 * 0x68;
    if ((lVar21 != *(long *)(lVar10 + 0x10)) ||
       (iVar6 = _memcmp(lVar13,*(undefined8 *)(lVar10 + 8)), iVar6 != 0)) {
      uVar16 = uVar16 - 1 & uVar16;
      goto joined_r0x000105dc9474;
    }
    if (*(ulong *)(lVar23 + 0x10) <= uVar18) {
      func_0x000108a07bdc(uVar18,*(ulong *)(lVar23 + 0x10),&UNK_10b46a590);
LAB_105dc9720:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x105dc9724);
      (*pcVar5)();
    }
    lVar11 = *(long *)(lVar23 + 8) + uVar18 * 0x68;
    uVar12 = *(ulong *)(lVar11 + 0x28);
    puVar7[4] = *(ulong *)(lVar11 + 0x30);
    puVar7[3] = uVar12;
    uVar12 = *(ulong *)(lVar11 + 0x38);
    puVar7[6] = *(ulong *)(lVar11 + 0x40);
    puVar7[5] = uVar12;
    uVar12 = *(ulong *)(lVar11 + 0x48);
    puVar7[8] = *(ulong *)(lVar11 + 0x50);
    puVar7[7] = uVar12;
    uVar12 = *(ulong *)(lVar11 + 0x18);
    puVar7[2] = *(ulong *)(lVar11 + 0x20);
    puVar7[1] = uVar12;
    uVar24 = param_5[1];
    uVar22 = *param_5;
    uVar20 = param_5[2];
    *(undefined8 *)(lVar11 + 0x30) = param_5[3];
    *(undefined8 *)(lVar11 + 0x28) = uVar20;
    uVar20 = param_5[4];
    uVar26 = param_5[7];
    uVar25 = param_5[6];
    *(undefined8 *)(lVar11 + 0x40) = param_5[5];
    *(undefined8 *)(lVar11 + 0x38) = uVar20;
    *(undefined8 *)(lVar11 + 0x50) = uVar26;
    *(undefined8 *)(lVar11 + 0x48) = uVar25;
    puVar7[9] = *(ulong *)(lVar11 + 0x58);
    *(undefined8 *)(lVar11 + 0x58) = param_5[8];
    *(undefined8 *)(lVar11 + 0x20) = uVar24;
    *(undefined8 *)(lVar11 + 0x18) = uVar22;
    *puVar7 = uVar18;
    if (*plVar9 == 0) {
      return;
    }
  }
  else {
    lVar13 = param_2[4];
    lVar21 = param_2[7];
    lVar11 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar13;
    param_1[7] = lVar21;
    param_1[6] = lVar11;
    uVar12 = param_2[9];
    param_1[8] = param_2[8];
    lVar21 = *param_2;
    lVar11 = param_2[3];
    lVar13 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar21;
    param_1[3] = lVar11;
    param_1[2] = lVar13;
    if ((uVar12 & 0x7fffffffffffffff) == 0) {
      return;
    }
    lVar13 = param_2[10];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar13);
  return;
}

