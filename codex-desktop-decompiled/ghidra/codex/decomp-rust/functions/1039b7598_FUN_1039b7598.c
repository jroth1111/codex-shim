
undefined8 FUN_1039b7598(long *param_1,char *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  char *pcStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  pcStack_100 = (char *)(uStack_e0 ^ 0x736f6d6570736575);
  uStack_f8 = uStack_e0 ^ 0x6c7967656e657261;
  uStack_f0 = uStack_d8 ^ 0x646f72616e646f6d;
  uStack_e8 = uStack_d8 ^ 0x7465646279746573;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_d0 = 0;
  func_0x00010395d6d4(param_2,param_3,&pcStack_100);
  uVar10 = uStack_c8 | lStack_d0 << 0x38;
  uVar9 = uVar10 ^ uStack_e8;
  pcStack_100 = pcStack_100 + uStack_f0;
  uVar7 = (ulong)pcStack_100 ^ (uStack_f0 >> 0x33 | uStack_f0 << 0xd);
  uVar5 = uVar9 + uStack_f8 + uVar7;
  uVar9 = uVar9 + uStack_f8 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
  uVar8 = uVar5 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar7 = uVar9 + ((ulong)pcStack_100 >> 0x20 | (long)pcStack_100 << 0x20);
  uVar4 = uVar7 ^ (uVar9 >> 0x2b | uVar9 << 0x15);
  uVar7 = (uVar7 ^ uVar10) + uVar8;
  uVar8 = uVar7 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar5 = uVar4 + ((uVar5 >> 0x20 | uVar5 << 0x20) ^ 0xff);
  uVar9 = uVar8 + uVar5;
  uVar5 = uVar5 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar8 = uVar9 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
  uVar7 = uVar5 + (uVar7 >> 0x20 | uVar7 << 0x20);
  uVar4 = uVar8 + uVar7;
  uVar7 = uVar7 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar8 = uVar4 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar5 = uVar7 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar9 = uVar8 + uVar5;
  uVar5 = uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar8 = uVar9 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
  uVar7 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
  uVar4 = uVar7 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar8 = uVar8 + uVar7 ^ (uVar8 >> 0x33 | uVar8 << 0xd);
  uVar5 = uVar4 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar7 = uVar8 + uVar5;
  uVar5 = uVar5 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar7 = (uVar5 >> 0x2b | uVar5 << 0x15) ^ (uVar8 >> 0x2f | uVar8 << 0x11) ^
          (uVar7 >> 0x20 | uVar7 << 0x20) ^ uVar7;
  lVar2 = *param_1;
  uVar5 = param_1[1];
  bVar6 = (byte)(uVar7 >> 0x39);
  if (param_3 == 0) {
    uVar7 = uVar7 & uVar5;
    uVar13 = *(undefined8 *)(lVar2 + uVar7);
    uVar9 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == bVar6),
                     CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == bVar6),
                              CONCAT15(-((byte)((ulong)uVar13 >> 0x28) == bVar6),
                                       CONCAT14(-((byte)((ulong)uVar13 >> 0x20) == bVar6),
                                                CONCAT13(-((byte)((ulong)uVar13 >> 0x18) == bVar6),
                                                         CONCAT12(-((byte)((ulong)uVar13 >> 0x10) ==
                                                                   bVar6),CONCAT11(-((byte)((ulong)
                                                  uVar13 >> 8) == bVar6),-((byte)uVar13 == bVar6))))
                                               )))) & 0x8080808080808080;
    lVar11 = 0;
    while( true ) {
      while (uVar9 == 0) {
        bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar13 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar13 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar13 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar13 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar13
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar13 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar13 >> 8) == -1),
                                                           -((char)uVar13 == -1)))))))),1);
        if ((bVar12 & 1) != 0) {
          return 0;
        }
        lVar11 = lVar11 + 8;
        uVar7 = uVar7 + lVar11 & uVar5;
        uVar13 = *(undefined8 *)(lVar2 + uVar7);
        uVar9 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == bVar6),
                         CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == bVar6),
                                  CONCAT15(-((byte)((ulong)uVar13 >> 0x28) == bVar6),
                                           CONCAT14(-((byte)((ulong)uVar13 >> 0x20) == bVar6),
                                                    CONCAT13(-((byte)((ulong)uVar13 >> 0x18) ==
                                                              bVar6),CONCAT12(-((byte)((ulong)uVar13
                                                                                      >> 0x10) ==
                                                                               bVar6),CONCAT11(-((
                                                  byte)((ulong)uVar13 >> 8) == bVar6),
                                                  -((byte)uVar13 == bVar6)))))))) &
                0x8080808080808080;
      }
      uVar4 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar2 + (uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar5) * -0x18
      ;
      pcStack_100 = *(char **)(lVar1 + -0x10);
      uStack_f8 = *(long *)(lVar1 + -8);
      lStack_b0 = 0;
      uStack_a8 = 6;
      uStack_7e = 0;
      uStack_80 = 0x201;
      if (uStack_f8 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *pcStack_100 == '/';
      }
      uStack_f0._1_7_ = (undefined7)(uStack_f0 >> 8);
      uStack_f0 = CONCAT71(uStack_f0._1_7_,6);
      uStack_c8._3_5_ = (undefined5)(uStack_c8 >> 0x18);
      uStack_c8 = CONCAT62(CONCAT51(uStack_c8._3_5_,bVar3),0x201);
      pcStack_b8 = param_2;
      uVar4 = FUN_103972e34(&pcStack_b8,&pcStack_100);
      if ((uVar4 & 1) != 0) break;
      uVar9 = uVar9 - 1 & uVar9;
    }
    return 1;
  }
  lVar11 = 0;
  uVar7 = uVar7 & uVar5;
  uVar13 = *(undefined8 *)(lVar2 + uVar7);
  uVar9 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == bVar6),
                   CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == bVar6),
                            CONCAT15(-((byte)((ulong)uVar13 >> 0x28) == bVar6),
                                     CONCAT14(-((byte)((ulong)uVar13 >> 0x20) == bVar6),
                                              CONCAT13(-((byte)((ulong)uVar13 >> 0x18) == bVar6),
                                                       CONCAT12(-((byte)((ulong)uVar13 >> 0x10) ==
                                                                 bVar6),CONCAT11(-((byte)((ulong)
                                                  uVar13 >> 8) == bVar6),-((byte)uVar13 == bVar6))))
                                             )))) & 0x8080808080808080;
  while( true ) {
    while (uVar9 == 0) {
      bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar13 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar13 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar13 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar13 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar13 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar13 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar13 >> 8) == -1),
                                                           -((char)uVar13 == -1)))))))),1);
      if ((bVar12 & 1) != 0) {
        return 0;
      }
      lVar11 = lVar11 + 8;
      uVar7 = uVar7 + lVar11 & uVar5;
      uVar13 = *(undefined8 *)(lVar2 + uVar7);
      uVar9 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == bVar6),
                       CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == bVar6),
                                CONCAT15(-((byte)((ulong)uVar13 >> 0x28) == bVar6),
                                         CONCAT14(-((byte)((ulong)uVar13 >> 0x20) == bVar6),
                                                  CONCAT13(-((byte)((ulong)uVar13 >> 0x18) == bVar6)
                                                           ,CONCAT12(-((byte)((ulong)uVar13 >> 0x10)
                                                                      == bVar6),
                                                                     CONCAT11(-((byte)((ulong)uVar13
                                                                                      >> 8) == bVar6
                                                                               ),-((byte)uVar13 ==
                                                                                  bVar6)))))))) &
              0x8080808080808080;
    }
    uVar4 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar2 + (uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar5) * -0x18;
    pcStack_100 = *(char **)(lVar1 + -0x10);
    uStack_f8 = *(long *)(lVar1 + -8);
    uStack_7e = *param_2 == '/';
    uStack_a8 = 6;
    uStack_80 = 0x201;
    if (uStack_f8 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *pcStack_100 == '/';
    }
    uStack_f0._1_7_ = (undefined7)(uStack_f0 >> 8);
    uStack_f0 = CONCAT71(uStack_f0._1_7_,6);
    uStack_c8._3_5_ = (undefined5)(uStack_c8 >> 0x18);
    uStack_c8 = CONCAT62(CONCAT51(uStack_c8._3_5_,bVar3),0x201);
    pcStack_b8 = param_2;
    lStack_b0 = param_3;
    uVar4 = FUN_103972e34(&pcStack_b8,&pcStack_100);
    if ((uVar4 & 1) != 0) break;
    uVar9 = uVar9 - 1 & uVar9;
  }
  return 1;
}

