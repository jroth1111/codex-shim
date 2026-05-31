
/* WARNING: Possible PIC construction at 0x000100d5cd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100d5ce24: Changing call to branch */

void FUN_100d5c950(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  switch((char)param_1[0x5d]) {
  case '\0':
    lVar3 = *(long *)param_1[0x46];
    *(long *)param_1[0x46] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(param_1 + 0x46);
    }
    FUN_100e205b4(param_1 + 0x4f);
    if ((param_1[0x2d] != -0x8000000000000000) && (param_1[0x2d] != 0)) {
      _free(param_1[0x2e]);
    }
    if ((param_1[0x30] != -0x8000000000000000) && (param_1[0x30] != 0)) {
      _free(param_1[0x31]);
    }
    if ((param_1[0x33] != -0x8000000000000000) && (param_1[0x33] != 0)) {
      _free(param_1[0x34]);
    }
    lVar3 = *(long *)param_1[0x47];
    *(long *)param_1[0x47] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_1 + 0x47);
    }
    lVar3 = *(long *)param_1[0x48];
    *(long *)param_1[0x48] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(param_1 + 0x48);
    }
    if (param_1[0x36] != -0x8000000000000000) {
      FUN_100df6098(param_1 + 0x36);
    }
    plVar6 = (long *)param_1[0x52];
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      *plVar6 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(param_1 + 0x52);
      }
    }
    lVar3 = *(long *)param_1[0x49];
    *(long *)param_1[0x49] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(param_1 + 0x49);
    }
    lVar3 = param_1[1];
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x60);
      do {
        while( true ) {
          if (puVar5[-7] != 0) {
            _free(puVar5[-6]);
          }
          if (puVar5[-4] != -0x8000000000000000 && puVar5[-4] != 0) break;
          if (puVar5[-1] == -0x8000000000000000 || puVar5[-1] == 0) goto code_r0x000100d5cacc;
code_r0x000100d5cb08:
          _free(*puVar5);
          lVar4 = lVar4 + -1;
          puVar5 = puVar5 + 0xe;
          if (lVar4 == 0) goto code_r0x000100d5cb18;
        }
        _free(puVar5[-3]);
        if (puVar5[-1] != -0x8000000000000000 && puVar5[-1] != 0) goto code_r0x000100d5cb08;
code_r0x000100d5cacc:
        puVar5 = puVar5 + 0xe;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
code_r0x000100d5cb18:
    if (*param_1 != 0) {
      _free(lVar3);
    }
    lVar3 = 6;
    if (0x8000000000000005 < (ulong)param_1[0x3a]) {
      lVar3 = param_1[0x3a] + 0x7ffffffffffffffa;
    }
    if (lVar3 == 6) {
      FUN_100e0fca4(param_1 + 0x3a);
    }
    else if ((lVar3 == 4) && (param_1[0x3b] != 0)) {
      _free(param_1[0x3c]);
    }
    FUN_100e23b84(param_1 + 3);
    lVar3 = *(long *)param_1[0x4a];
    *(long *)param_1[0x4a] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x4a);
    }
    if (param_1[0x2a] != 0) {
      _free(param_1[0x2b]);
    }
    FUN_100cc9a5c(param_1 + 0x4b);
    lVar3 = *(long *)param_1[0x4c];
    *(long *)param_1[0x4c] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      param_1 = param_1 + 0x4c;
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h30757c69bb986bcfE;
    }
    lVar3 = *(long *)param_1[0x4d];
    *(long *)param_1[0x4d] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h994c9943b8d53ba2E(param_1 + 0x4d);
    }
    goto code_r0x000100d5cd50;
  default:
    goto LAB_100d5cd84;
  case '\x03':
    if ((char)param_1[0x6a] == '\x03') {
      FUN_100cf46ec(param_1 + 100);
    }
    break;
  case '\x04':
    FUN_100cfc294(param_1 + 0x60);
    goto code_r0x000100d5cf04;
  case '\x05':
    if (((char)param_1[0x215] == '\x03') && (*(char *)((long)param_1 + 0x10a1) == '\x03')) {
      if ((char)param_1[0x212] == '\x03') {
        FUN_100d40d08(param_1 + 0xb8);
      }
      else if ((char)param_1[0x212] == '\0') {
        FUN_100e5286c(param_1 + 0x78);
      }
      *(undefined1 *)(param_1 + 0x214) = 0;
    }
    if (((*(byte *)((long)param_1 + 0x2ec) & 1) != 0) && (lVar3 = param_1[0x61], lVar3 != 0)) {
      lVar4 = param_1[99];
      if (lVar4 != 0) {
        plVar6 = (long *)param_1[0x60];
        plVar7 = plVar6 + 1;
        lVar9 = *plVar6;
        uVar8 = CONCAT17(-(-1 < lVar9),
                         CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
                0x8080808080808080;
        do {
          while (uVar8 == 0) {
            lVar9 = *plVar7;
            plVar6 = plVar6 + -0x18;
            plVar7 = plVar7 + 1;
            uVar8 = CONCAT17(-(-1 < lVar9),
                             CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)
                                                                  ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar9 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar9 >> 8)),
                                                           -(-1 < (char)lVar9)))))))) &
                    0x8080808080808080;
          }
          uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
          if (plVar6[(long)-iVar2 * 3 + -3] != 0) {
            _free(plVar6[(long)-iVar2 * 3 + -2]);
          }
          uVar8 = uVar8 - 1 & uVar8;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar3 * 0x19 != -0x21) {
        _free(param_1[0x60] + lVar3 * -0x18 + -0x18);
      }
    }
    *(undefined1 *)((long)param_1 + 0x2ec) = 0;
code_r0x000100d5cf04:
    _free(param_1[0x5c]);
    *(undefined1 *)((long)param_1 + 0x2ee) = 0;
    lVar3 = *(long *)param_1[0x56];
    *(long *)param_1[0x56] = lVar3 + -1;
    LORelease();
    goto joined_r0x000100d5cf20;
  case '\x06':
    break;
  case '\a':
    if ((char)param_1[0x415] == '\x03') {
      FUN_100d5b988(param_1 + 0x66);
    }
    else if (((char)param_1[0x415] == '\0') && (param_1[0x60] != 0)) {
      _free(param_1[0x61]);
    }
    *(undefined1 *)((long)param_1 + 0x2ed) = 0;
    lVar3 = *(long *)param_1[0x56];
    *(long *)param_1[0x56] = lVar3 + -1;
    LORelease();
    goto joined_r0x000100d5cf20;
  case '\b':
    if (((((char)param_1[0x72] == '\x03') && ((char)param_1[0x71] == '\x03')) &&
        ((char)param_1[0x70] == '\x03')) &&
       (((char)param_1[0x6f] == '\x03' && ((char)param_1[0x66] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x67);
      if (param_1[0x68] != 0) {
        (**(code **)(param_1[0x68] + 0x18))(param_1[0x69]);
      }
    }
    break;
  case '\t':
    FUN_100ced468(param_1 + 0x60);
    break;
  case '\n':
    if (((char)param_1[0x7e] == '\x03') && ((char)param_1[0x7d] == '\x03')) {
      FUN_100ce9d8c(param_1 + 0x62);
    }
    break;
  case '\v':
    FUN_100cfc1d8(param_1 + 0x60);
    break;
  case '\f':
    if (((char)param_1[0x82] == '\x03') && ((char)param_1[0x81] == '\x03')) {
      FUN_100ceb284(param_1 + 0x62);
    }
  }
  lVar3 = *(long *)param_1[0x56];
  *(long *)param_1[0x56] = lVar3 + -1;
  LORelease();
joined_r0x000100d5cf20:
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(param_1 + 0x56);
  }
  FUN_100e8103c(param_1 + 0x54);
  lVar3 = *(long *)param_1[0x53];
  *(long *)param_1[0x53] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h02bacbb834c35091E(param_1 + 0x53);
  }
  lVar3 = *(long *)param_1[0x46];
  *(long *)param_1[0x46] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(param_1 + 0x46);
  }
  FUN_100cc9a5c(param_1 + 0x4b);
  lVar3 = *(long *)param_1[0x4c];
  *(long *)param_1[0x4c] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    param_1 = param_1 + 0x4c;
  }
  else {
    lVar3 = *(long *)param_1[0x4d];
    *(long *)param_1[0x4d] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h994c9943b8d53ba2E(param_1 + 0x4d);
    }
code_r0x000100d5cd50:
    lVar3 = *(long *)param_1[0x4e];
    *(long *)param_1[0x4e] = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
LAB_100d5cd84:
      return;
    }
    param_1 = param_1 + 0x4e;
    DataMemoryBarrier(2,1);
  }
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h30757c69bb986bcfE:
  if (*param_1 != -1) {
    plVar6 = (long *)(*param_1 + 8);
    lVar3 = *plVar6;
    *plVar6 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)();
      return;
    }
  }
  return;
}

