
ulong __ZN17codex_rmcp_client11rmcp_client10RmcpClient11meta_string17h9c1792c56f0c7410E
                (ulong *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((param_2 != 0) && (uVar9 = *(ulong *)(param_2 + 0x10), uVar9 != 0)) {
    if (uVar9 == 1) {
      lVar11 = *(long *)(param_2 + 8);
      if ((param_4 != *(long *)(lVar11 + 0x10)) ||
         (param_2 = _memcmp(param_3,*(undefined8 *)(lVar11 + 8),param_4), (int)param_2 != 0))
      goto LAB_104aa1780;
      uVar10 = 0;
    }
    else {
      uVar10 = func_0x000104ada38c(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                                   param_3,param_4);
      lStack_80 = 0;
      lVar11 = *(long *)(param_2 + 8);
      lStack_78 = *(long *)(param_2 + 0x18);
      uVar3 = *(ulong *)(param_2 + 0x20);
      bVar5 = (byte)(uVar10 >> 0x39);
      lVar7 = lStack_78 + -8;
      uVar8 = uVar10 & uVar3;
      uVar13 = *(undefined8 *)(lStack_78 + uVar8);
      uVar2 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == bVar5),
                       CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == bVar5),
                                CONCAT15(-((byte)((ulong)uVar13 >> 0x28) == bVar5),
                                         CONCAT14(-((byte)((ulong)uVar13 >> 0x20) == bVar5),
                                                  CONCAT13(-((byte)((ulong)uVar13 >> 0x18) == bVar5)
                                                           ,CONCAT12(-((byte)((ulong)uVar13 >> 0x10)
                                                                      == bVar5),
                                                                     CONCAT11(-((byte)((ulong)uVar13
                                                                                      >> 8) == bVar5
                                                                               ),-((byte)uVar13 ==
                                                                                  bVar5)))))))) &
              0x8080808080808080;
      param_2 = uVar10;
      while( true ) {
        while (uVar2 == 0) {
          bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar13 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar13 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar13 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar13 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar13 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar13 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar13 >> 8) ==
                                                                     -1),-((char)uVar13 == -1)))))))
                                      ),1);
          if ((bVar12 & 1) != 0) goto LAB_104aa1780;
          lStack_80 = lStack_80 + 8;
          param_2 = uVar8 + lStack_80;
          uVar8 = param_2 & uVar3;
          uVar13 = *(undefined8 *)(lStack_78 + uVar8);
          uVar2 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == bVar5),
                           CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == bVar5),
                                    CONCAT15(-((byte)((ulong)uVar13 >> 0x28) == bVar5),
                                             CONCAT14(-((byte)((ulong)uVar13 >> 0x20) == bVar5),
                                                      CONCAT13(-((byte)((ulong)uVar13 >> 0x18) ==
                                                                bVar5),CONCAT12(-((byte)((ulong)
                                                  uVar13 >> 0x10) == bVar5),
                                                  CONCAT11(-((byte)((ulong)uVar13 >> 8) == bVar5),
                                                           -((byte)uVar13 == bVar5)))))))) &
                  0x8080808080808080;
        }
        uVar10 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = *(ulong *)(lVar7 + (uVar8 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3)
                                    & uVar3) * -8);
        if (uVar9 <= uVar10) goto LAB_104aa17c0;
        lVar6 = lVar11 + uVar10 * 0x68;
        if ((param_4 == *(long *)(lVar6 + 0x10)) &&
           (param_2 = _memcmp(param_3,*(undefined8 *)(lVar6 + 8),param_4), (int)param_2 == 0))
        break;
        uVar2 = uVar2 - 1 & uVar2;
      }
    }
    if (uVar9 <= uVar10) {
      func_0x000108a07bdc(uVar10,uVar9,&UNK_10b34c610);
LAB_104aa17c0:
      func_0x000108a07bdc(uVar10,uVar9,&UNK_10b34c628);
LAB_104aa17d4:
      puVar4 = (ulong *)func_0x0001087c9084(1,uVar9);
      uVar2 = *puVar4;
      if (uVar2 != 0x8000000000000006) {
        if (uVar2 < 0x8000000000000001) {
          uVar2 = 0;
        }
        if ((uVar2 & 0x7fffffffffffffff) == 1) {
          pcStack_88 = 
          __ZN17codex_rmcp_client11rmcp_client10RmcpClient22is_session_expired_40417h844604da26d87a73E
          ;
          psVar1 = (short *)puVar4[4];
          uStack_a0 = uVar9;
          puStack_98 = param_1;
          puStack_90 = &stack0xfffffffffffffff0;
          (**(code **)(puVar4[5] + 0x38))(&lStack_b0,psVar1);
          if (lStack_a8 == 0x6c0ae5a07eaffde9 && lStack_b0 == -0x403b3494c1c35256) {
            uVar9 = (ulong)(*psVar1 == 0xe);
          }
          else {
            uVar9 = 0;
          }
          return uVar9;
        }
      }
      return 0;
    }
    lVar11 = lVar11 + uVar10 * 0x68;
    if (*(long *)(lVar11 + 0x18) == -0x7ffffffffffffffd) {
      auVar14 = FUN_104ada148(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30));
      uVar9 = auVar14._8_8_;
      param_2 = auVar14._0_8_;
      if (uVar9 != 0) {
        uVar2 = _malloc(uVar9);
        if (uVar2 != 0) {
          uVar3 = _memcpy(uVar2,param_2,uVar9);
          *param_1 = uVar9;
          param_1[1] = uVar2;
          param_1[2] = uVar9;
          return uVar3;
        }
        goto LAB_104aa17d4;
      }
    }
  }
LAB_104aa1780:
  *param_1 = 0x8000000000000000;
  return param_2;
}

