
long * FUN_102ebda18(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  long *plVar12;
  byte bVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar14 = param_1[6];
  if (param_3 != 0) {
    plVar6 = (long *)_malloc(param_3);
    if (plVar6 != (long *)0x0) goto LAB_102ebda78;
    func_0x0001087c9084(1,param_3);
    param_2 = extraout_x1;
  }
  plVar6 = (long *)0x1;
LAB_102ebda78:
  _memcpy(plVar6,param_2,param_3);
  uVar7 = FUN_1033f72f8(param_1[4],param_1[5],plVar6,param_3);
  lVar8 = 0;
  lVar2 = *param_1;
  uVar9 = param_1[1];
  bVar4 = (byte)(uVar7 >> 0x38);
  bVar11 = bVar4 >> 1;
  uVar10 = uVar7 & uVar9;
  uVar15 = *(undefined8 *)(lVar2 + uVar10);
  uVar1 = CONCAT17(-((byte)((ulong)uVar15 >> 0x38) == bVar11),
                   CONCAT16(-((byte)((ulong)uVar15 >> 0x30) == bVar11),
                            CONCAT15(-((byte)((ulong)uVar15 >> 0x28) == bVar11),
                                     CONCAT14(-((byte)((ulong)uVar15 >> 0x20) == bVar11),
                                              CONCAT13(-((byte)((ulong)uVar15 >> 0x18) == bVar11),
                                                       CONCAT12(-((byte)((ulong)uVar15 >> 0x10) ==
                                                                 bVar11),CONCAT11(-((byte)((ulong)
                                                  uVar15 >> 8) == bVar11),-((byte)uVar15 == bVar11))
                                                  )))))) & 0x8080808080808080;
  do {
    while (uVar1 == 0) {
      bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar15 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar15 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar15 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar15 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar15 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar15 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar15 >> 8) == -1),
                                                           -((char)uVar15 == -1)))))))),1);
      if ((bVar13 & 1) != 0) {
        if (param_1[2] == 0) {
          func_0x000108948b78(param_1,1,param_1 + 4,1);
        }
        plVar12 = plVar6;
        if (param_3 != -0x8000000000000000) {
          func_0x000105596048(&lStack_110,(char)lVar14);
          plVar12 = (long *)*param_1;
          uVar1 = param_1[1];
          uVar7 = uVar1 & uVar7;
          lVar14 = *(long *)((long)plVar12 + uVar7);
          uVar9 = CONCAT17(-(lVar14 < 0),
                           CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar14 >> 0x18) <
                                                                '\0'),CONCAT12(-((char)((ulong)
                                                  lVar14 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar14 >> 8) < '\0'),
                                                           -((char)lVar14 < '\0'))))))));
          if (uVar9 == 0) {
            lVar14 = 8;
            do {
              uVar7 = uVar7 + lVar14 & uVar1;
              lVar8 = *(long *)((long)plVar12 + uVar7);
              uVar9 = CONCAT17(-(lVar8 < 0),
                               CONCAT16(-((char)((ulong)lVar8 >> 0x30) < '\0'),
                                        CONCAT15(-((char)((ulong)lVar8 >> 0x28) < '\0'),
                                                 CONCAT14(-((char)((ulong)lVar8 >> 0x20) < '\0'),
                                                          CONCAT13(-((char)((ulong)lVar8 >> 0x18) <
                                                                    '\0'),CONCAT12(-((char)((ulong)
                                                  lVar8 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar8 >> 8) < '\0'),
                                                           -((char)lVar8 < '\0'))))))));
              lVar14 = lVar14 + 8;
            } while (uVar9 == 0);
          }
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar1;
          uVar9 = (ulong)*(char *)((long)plVar12 + uVar10);
          if (-1 < *(char *)((long)plVar12 + uVar10)) {
            lVar14 = *plVar12;
            uVar9 = CONCAT17(-(lVar14 < 0),
                             CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar14 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar14 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar14 >> 8) < '\0'),
                                                           -((char)lVar14 < '\0'))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar10 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            uVar9 = (ulong)*(byte *)((long)plVar12 + uVar10);
          }
          bVar4 = bVar4 >> 1;
          *(byte *)((long)plVar12 + uVar10) = bVar4;
          *(byte *)((long)plVar12 + (uVar10 - 8 & uVar1) + 8) = bVar4;
          plVar12 = plVar12 + uVar10 * -0x16;
          plVar12[-0x16] = param_3;
          plVar12[-0x15] = (long)plVar6;
          plVar12[-0x14] = param_3;
          plVar12[-6] = lStack_a8;
          plVar12[-7] = lStack_b0;
          plVar12[-4] = lStack_98;
          plVar12[-5] = lStack_a0;
          plVar12[-2] = lStack_88;
          plVar12[-3] = lStack_90;
          plVar12[-1] = lStack_80;
          plVar12[-0xe] = lStack_e8;
          plVar12[-0xf] = lStack_f0;
          plVar12[-0xc] = lStack_d8;
          plVar12[-0xd] = lStack_e0;
          plVar12[-10] = lStack_c8;
          plVar12[-0xb] = lStack_d0;
          plVar12[-8] = lStack_b8;
          plVar12[-9] = lStack_c0;
          plVar12[-0x12] = lStack_108;
          plVar12[-0x13] = lStack_110;
          plVar12[-0x10] = lStack_f8;
          plVar12[-0x11] = lStack_100;
          param_1[3] = param_1[3] + 1;
          param_1[2] = param_1[2] - (uVar9 & 1);
        }
LAB_102ebdc40:
        return plVar12 + -0x13;
      }
      lVar8 = lVar8 + 8;
      uVar10 = uVar10 + lVar8 & uVar9;
      uVar15 = *(undefined8 *)(lVar2 + uVar10);
      uVar1 = CONCAT17(-((byte)((ulong)uVar15 >> 0x38) == bVar11),
                       CONCAT16(-((byte)((ulong)uVar15 >> 0x30) == bVar11),
                                CONCAT15(-((byte)((ulong)uVar15 >> 0x28) == bVar11),
                                         CONCAT14(-((byte)((ulong)uVar15 >> 0x20) == bVar11),
                                                  CONCAT13(-((byte)((ulong)uVar15 >> 0x18) == bVar11
                                                            ),CONCAT12(-((byte)((ulong)uVar15 >>
                                                                               0x10) == bVar11),
                                                                       CONCAT11(-((byte)((ulong)
                                                  uVar15 >> 8) == bVar11),-((byte)uVar15 == bVar11))
                                                  )))))) & 0x8080808080808080;
    }
    uVar3 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    plVar12 = (long *)(lVar2 + (uVar10 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) &
                               uVar9) * -0xb0);
    if ((plVar12[-0x14] == param_3) && (iVar5 = _memcmp(plVar12[-0x15],plVar6,param_3), iVar5 == 0))
    {
      if (param_3 != 0) {
        _free(plVar6);
      }
      goto LAB_102ebdc40;
    }
    uVar1 = uVar1 - 1 & uVar1;
  } while( true );
}

