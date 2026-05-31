
void FUN_1039d8de0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  byte bVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  long lVar14;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_c0 = uStack_a0 ^ 0x736f6d6570736575;
  uStack_b8 = uStack_a0 ^ 0x6c7967656e657261;
  uStack_b0 = uStack_98 ^ 0x646f72616e646f6d;
  uStack_a8 = uStack_98 ^ 0x7465646279746573;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  func_0x0001039d40ec(&uStack_c0);
  uStack_71 = 0xff;
  func_0x0001039d40ec(&uStack_c0,&uStack_71,1);
  uVar10 = uStack_88 | lStack_90 << 0x38;
  uVar9 = uVar10 ^ uStack_a8;
  uVar6 = uStack_b0 + uStack_c0;
  uVar7 = uVar6 ^ (uStack_b0 >> 0x33 | uStack_b0 << 0xd);
  uVar5 = uVar9 + uStack_b8 + uVar7;
  uVar9 = uVar9 + uStack_b8 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
  uVar8 = uVar5 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar6 = uVar9 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar6 ^ (uVar9 >> 0x2b | uVar9 << 0x15);
  uVar6 = (uVar6 ^ uVar10) + uVar8;
  uVar8 = uVar6 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar5 = uVar7 + ((uVar5 >> 0x20 | uVar5 << 0x20) ^ 0xff);
  uVar9 = uVar8 + uVar5;
  uVar5 = uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar8 = uVar9 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
  uVar6 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar8 + uVar6;
  uVar6 = uVar6 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar8 = uVar7 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar5 = uVar6 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar9 = uVar8 + uVar5;
  uVar5 = uVar5 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar8 = uVar9 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
  uVar6 = uVar5 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar7 = uVar6 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar8 = uVar8 + uVar6 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar6 = uVar7 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar5 = uVar8 + uVar6;
  uVar6 = uVar6 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar5 = (uVar6 >> 0x2b | uVar6 << 0x15) ^ (uVar8 >> 0x2f | uVar8 << 0x11) ^
          (uVar5 >> 0x20 | uVar5 << 0x20) ^ uVar5;
  if (param_1[2] == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6d580482a7a70562E
              (param_1,1,param_1 + 4,1);
  }
  bVar3 = false;
  lVar12 = 0;
  plVar1 = (long *)*param_1;
  uVar9 = param_1[1];
  bVar2 = (byte)(uVar5 >> 0x38);
  bVar11 = bVar2 >> 1;
  uVar5 = uVar5 & uVar9;
  lVar14 = *(long *)((long)plVar1 + uVar5);
  uVar6 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar11),
                   CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar11),
                            CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar11),
                                     CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar11),
                                              CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar11),
                                                       CONCAT12(-((byte)((ulong)lVar14 >> 0x10) ==
                                                                 bVar11),CONCAT11(-((byte)((ulong)
                                                  lVar14 >> 8) == bVar11),-((byte)lVar14 == bVar11))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar9;
      if ((param_3 == plVar1[uVar7 * -2 + -1]) &&
         (iVar4 = _memcmp(param_2,plVar1[uVar7 * -2 + -2],param_3), iVar4 == 0)) {
        return;
      }
    }
    cVar15 = (char)((ulong)lVar14 >> 8);
    cVar16 = (char)((ulong)lVar14 >> 0x10);
    cVar17 = (char)((ulong)lVar14 >> 0x18);
    cVar18 = (char)((ulong)lVar14 >> 0x20);
    cVar19 = (char)((ulong)lVar14 >> 0x28);
    cVar20 = (char)((ulong)lVar14 >> 0x30);
    if (bVar3) {
LAB_1039d8fc0:
      bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar14 >> 0x38) == -1),
                                   CONCAT16(-(cVar20 == -1),
                                            CONCAT15(-(cVar19 == -1),
                                                     CONCAT14(-(cVar18 == -1),
                                                              CONCAT13(-(cVar17 == -1),
                                                                       CONCAT12(-(cVar16 == -1),
                                                                                CONCAT11(-(cVar15 ==
                                                                                          -1),-((
                                                  char)lVar14 == -1)))))))),1);
      if ((bVar13 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)plVar1 + uStack_c8);
        if (-1 < *(char *)((long)plVar1 + uStack_c8)) {
          lVar12 = *plVar1;
          uVar6 = CONCAT17(-(lVar12 < 0),
                           CONCAT16(-((char)((ulong)lVar12 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar12 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar12 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar12 >> 0x18) <
                                                                '\0'),CONCAT12(-((char)((ulong)
                                                  lVar12 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar12 >> 8) < '\0'),
                                                           -((char)lVar12 < '\0'))))))));
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uStack_c8 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)plVar1 + uStack_c8);
        }
        *(byte *)((long)plVar1 + uStack_c8) = bVar2 >> 1;
        *(byte *)((long)plVar1 + (uStack_c8 - 8 & uVar9) + 8) = bVar2 >> 1;
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] - (uVar6 & 1);
        plVar1[uStack_c8 * -2 + -2] = param_2;
        plVar1[uStack_c8 * -2 + -1] = param_3;
        return;
      }
      bVar3 = true;
    }
    else {
      uVar6 = CONCAT17(-(lVar14 < 0),
                       CONCAT16(-(cVar20 < '\0'),
                                CONCAT15(-(cVar19 < '\0'),
                                         CONCAT14(-(cVar18 < '\0'),
                                                  CONCAT13(-(cVar17 < '\0'),
                                                           CONCAT12(-(cVar16 < '\0'),
                                                                    CONCAT11(-(cVar15 < '\0'),
                                                                             -((char)lVar14 < '\0'))
                                                                   ))))));
      if (uVar6 != 0) {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uStack_c8 = uVar5 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar9;
        goto LAB_1039d8fc0;
      }
      bVar3 = false;
    }
    lVar12 = lVar12 + 8;
    uVar5 = lVar12 + uVar5 & uVar9;
    lVar14 = *(long *)((long)plVar1 + uVar5);
    uVar6 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar11),
                     CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar11),
                              CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar11),
                                       CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar11),
                                                CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar11),
                                                         CONCAT12(-((byte)((ulong)lVar14 >> 0x10) ==
                                                                   bVar11),CONCAT11(-((byte)((ulong)
                                                  lVar14 >> 8) == bVar11),-((byte)lVar14 == bVar11))
                                                  )))))) & 0x8080808080808080;
  } while( true );
}

