
void FUN_106125be0(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  undefined8 uVar19;
  
  uVar1 = param_3[1];
  uVar16 = param_3[2];
  uVar8 = func_0x000106120c44(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),uVar1,
                              uVar16);
  lVar12 = 0;
  uVar14 = *param_3;
  lVar2 = *(long *)(param_2 + 8);
  uVar4 = *(ulong *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  uVar5 = *(ulong *)(param_2 + 0x20);
  bVar9 = (byte)(uVar8 >> 0x39);
  uVar13 = uVar8 & uVar5;
  uVar19 = *(undefined8 *)(lVar3 + uVar13);
  uVar11 = CONCAT17(-((byte)((ulong)uVar19 >> 0x38) == bVar9),
                    CONCAT16(-((byte)((ulong)uVar19 >> 0x30) == bVar9),
                             CONCAT15(-((byte)((ulong)uVar19 >> 0x28) == bVar9),
                                      CONCAT14(-((byte)((ulong)uVar19 >> 0x20) == bVar9),
                                               CONCAT13(-((byte)((ulong)uVar19 >> 0x18) == bVar9),
                                                        CONCAT12(-((byte)((ulong)uVar19 >> 0x10) ==
                                                                  bVar9),CONCAT11(-((byte)((ulong)
                                                  uVar19 >> 8) == bVar9),-((byte)uVar19 == bVar9))))
                                              )))) & 0x8080808080808080;
  do {
    while (uVar11 == 0) {
      bVar18 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar19 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar19 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar19 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar19 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar19 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar19 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar19 >> 8) == -1),
                                                           -((char)uVar19 == -1)))))))),1);
      if ((bVar18 & 1) != 0) {
        uVar17 = param_3[3];
        uVar11 = uVar1;
        if (uVar14 == 0x8000000000000001) {
LAB_106125d5c:
          param_1[2] = uVar16;
          param_1[3] = uVar17;
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar11;
        }
        else {
          uVar11 = param_3[4];
          *param_1 = uVar14;
          param_1[1] = uVar1;
          param_1[2] = uVar16;
          param_1[3] = uVar17;
          param_1[4] = uVar11;
          param_1[5] = param_2;
          param_1[6] = uVar8;
        }
        return;
      }
      lVar12 = lVar12 + 8;
      uVar13 = uVar13 + lVar12 & uVar5;
      uVar19 = *(undefined8 *)(lVar3 + uVar13);
      uVar11 = CONCAT17(-((byte)((ulong)uVar19 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar19 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar19 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar19 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar19 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar19 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar19 >> 8) == bVar9),-((byte)uVar19 == bVar9))))
                                                  )))) & 0x8080808080808080;
    }
    uVar17 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar13 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar5;
    uVar15 = *(ulong *)(lVar3 + -8 + uVar17 * -8);
    if (uVar4 <= uVar15) {
      func_0x000108a07bdc(uVar15,uVar4,&UNK_10b4cf790);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x106125dbc);
      (*pcVar6)();
    }
    lVar10 = lVar2 + uVar15 * 0x90;
    if ((uVar16 == *(ulong *)(lVar10 + 0x10)) &&
       (iVar7 = _memcmp(uVar1,*(undefined8 *)(lVar10 + 8),uVar16), iVar7 == 0)) {
      uVar11 = param_2;
      uVar16 = uVar15;
      if ((uVar14 & 0x7fffffffffffffff) != 0) {
        _free(uVar1);
      }
      goto LAB_106125d5c;
    }
    uVar11 = uVar11 - 1 & uVar11;
  } while( true );
}

