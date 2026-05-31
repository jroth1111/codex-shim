
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN9codex_mcp18connection_manager20McpConnectionManager14begin_shutdown17hf9c7da16112e72e3E
               (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
            (param_2 + 0x13);
  pauVar4 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar4[1][0] == '\x01') {
    auVar16 = *pauVar4;
  }
  else {
    auVar16 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar4 + 8) = auVar16._8_8_;
    pauVar4[1][0] = 1;
  }
  *(long *)*pauVar4 = auVar16._0_8_ + 1;
  uVar12 = param_2[1];
  uVar9 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  uVar13 = param_2[5];
  uVar10 = param_2[4];
  param_2[1] = 0;
  *param_2 = &UNK_108c56c70;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar16;
  lVar6 = param_2[9];
  if (lVar6 != 0) {
    plVar5 = (long *)param_2[6];
    plVar7 = plVar5 + 1;
    lVar11 = *plVar5;
    uVar8 = CONCAT17(-(-1 < lVar11),
                     CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar11 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
            0x8080808080808080;
    plVar3 = plVar5;
    do {
      while (uVar8 == 0) {
        lVar11 = *plVar7;
        plVar7 = plVar7 + 1;
        plVar3 = plVar3 + -0x38;
        uVar8 = CONCAT17(-(-1 < lVar11),
                         CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar11 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
                0x8080808080808080;
      }
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      if (plVar3[(long)-iVar2 * 7 + -7] != 0) {
        _free(plVar3[(long)-iVar2 * 7 + -6]);
      }
      if (-0x7fffffffffffffff < plVar3[(long)-iVar2 * 7 + -4] && plVar3[(long)-iVar2 * 7 + -4] != 0)
      {
        _free(plVar3[(long)-iVar2 * 7 + -3]);
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar8 = param_2[7];
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      _memset(plVar5,0xff,uVar8 + 9);
      if (7 < uVar8) {
        uVar8 = (uVar8 + 1 >> 3) * 7;
      }
    }
    param_2[8] = uVar8;
    param_2[9] = 0;
  }
  param_1[1] = uVar12;
  *param_1 = uVar9;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  param_1[5] = uVar13;
  param_1[4] = uVar10;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}

