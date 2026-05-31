
undefined8
__ZN9codex_mcp3mcp20ToolPluginProvenance37plugin_display_names_for_connector_id17h7348740481caa33fE
          (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  
  if (param_1[3] == 0) {
    return 8;
  }
  uVar7 = FUN_103dc25f4(param_1[4],param_1[5],param_2,param_3);
  lVar9 = 0;
  lVar3 = *param_1;
  uVar4 = param_1[1];
  bVar8 = (byte)(uVar7 >> 0x39);
  uVar7 = uVar7 & uVar4;
  uVar11 = *(undefined8 *)(lVar3 + uVar7);
  uVar2 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == bVar8),
                   CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == bVar8),
                            CONCAT15(-((byte)((ulong)uVar11 >> 0x28) == bVar8),
                                     CONCAT14(-((byte)((ulong)uVar11 >> 0x20) == bVar8),
                                              CONCAT13(-((byte)((ulong)uVar11 >> 0x18) == bVar8),
                                                       CONCAT12(-((byte)((ulong)uVar11 >> 0x10) ==
                                                                 bVar8),CONCAT11(-((byte)((ulong)
                                                  uVar11 >> 8) == bVar8),-((byte)uVar11 == bVar8))))
                                             )))) & 0x8080808080808080;
  while( true ) {
    while (uVar2 == 0) {
      bVar10 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar11 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar11 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar11 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar11 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar11 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar11 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar11 >> 8) == -1),
                                                           -((char)uVar11 == -1)))))))),1);
      if ((bVar10 & 1) != 0) {
        return 8;
      }
      lVar9 = lVar9 + 8;
      uVar7 = uVar7 + lVar9 & uVar4;
      uVar11 = *(undefined8 *)(lVar3 + uVar7);
      uVar2 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == bVar8),
                       CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == bVar8),
                                CONCAT15(-((byte)((ulong)uVar11 >> 0x28) == bVar8),
                                         CONCAT14(-((byte)((ulong)uVar11 >> 0x20) == bVar8),
                                                  CONCAT13(-((byte)((ulong)uVar11 >> 0x18) == bVar8)
                                                           ,CONCAT12(-((byte)((ulong)uVar11 >> 0x10)
                                                                      == bVar8),
                                                                     CONCAT11(-((byte)((ulong)uVar11
                                                                                      >> 8) == bVar8
                                                                               ),-((byte)uVar11 ==
                                                                                  bVar8)))))))) &
              0x8080808080808080;
    }
    uVar5 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar3 + (uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) * -0x30;
    if ((param_3 == *(long *)(lVar1 + -0x20)) &&
       (iVar6 = _memcmp(param_2,*(undefined8 *)(lVar1 + -0x28),param_3), iVar6 == 0)) break;
    uVar2 = uVar2 - 1 & uVar2;
  }
  return *(undefined8 *)(lVar1 + -0x10);
}

