
void FUN_1039d8790(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 uVar14;
  
  lVar7 = param_3[1];
  lVar11 = param_3[2];
  uVar6 = FUN_1039cf2e0(param_2[4],param_2[5],lVar7,lVar11);
  lVar9 = 0;
  lVar2 = *param_2;
  uVar3 = param_2[1];
  bVar8 = (byte)(uVar6 >> 0x39);
  uVar12 = uVar6 & uVar3;
  uVar14 = *(undefined8 *)(lVar2 + uVar12);
  uVar1 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar8),
                   CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar8),
                            CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar8),
                                     CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar8),
                                              CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar8),
                                                       CONCAT12(-((byte)((ulong)uVar14 >> 0x10) ==
                                                                 bVar8),CONCAT11(-((byte)((ulong)
                                                  uVar14 >> 8) == bVar8),-((byte)uVar14 == bVar8))))
                                             )))) & 0x8080808080808080;
  while( true ) {
    while (uVar1 == 0) {
      bVar13 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar14 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar14 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1)))))))),1);
      if ((bVar13 & 1) != 0) {
        if (param_2[2] == 0) {
          func_0x000108953ca8(param_2,1,param_2 + 4,1);
        }
        lVar9 = *param_3;
        param_1[1] = param_3[1];
        *param_1 = lVar9;
        param_1[2] = param_3[2];
        param_1[3] = (long)param_2;
        param_1[4] = uVar6;
        return;
      }
      lVar9 = lVar9 + 8;
      uVar12 = uVar12 + lVar9 & uVar3;
      uVar14 = *(undefined8 *)(lVar2 + uVar12);
      uVar1 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar8),
                       CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar8),
                                CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar8),
                                         CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar8),
                                                  CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar8)
                                                           ,CONCAT12(-((byte)((ulong)uVar14 >> 0x10)
                                                                      == bVar8),
                                                                     CONCAT11(-((byte)((ulong)uVar14
                                                                                      >> 8) == bVar8
                                                                               ),-((byte)uVar14 ==
                                                                                  bVar8)))))))) &
              0x8080808080808080;
    }
    uVar4 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar10 = lVar2 + (uVar12 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) * -0x20
    ;
    if ((*(long *)(lVar10 + -0x10) == lVar11) &&
       (iVar5 = _memcmp(*(undefined8 *)(lVar10 + -0x18),lVar7,lVar11), iVar5 == 0)) break;
    uVar1 = uVar1 - 1 & uVar1;
  }
  param_1[1] = lVar10;
  param_1[2] = (long)param_2;
  *param_1 = -0x8000000000000000;
  if (*param_3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar7);
  return;
}

