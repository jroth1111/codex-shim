
void FUN_100d7bae8(long *param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  undefined8 extraout_x1;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  cVar1 = (char)param_1[0x35];
  if (cVar1 == '\0') {
    if (*param_1 == 0) {
      return;
    }
    lVar4 = param_1[1];
  }
  else {
    if (cVar1 == '\x03') {
      if ((((char)param_1[0x4d] == '\x03') && ((char)param_1[0x4c] == '\x03')) &&
         ((char)param_1[0x43] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x44);
        if (param_1[0x45] != 0) {
          (**(code **)(param_1[0x45] + 0x18))(param_1[0x46]);
        }
      }
      FUN_100de6690(param_1 + 0x36);
      lVar4 = param_1[4];
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_100cd1454(param_1 + 0x36);
      pcVar5 = (char *)param_1[0x34];
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar5,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar5,1,pcVar5);
      lVar4 = param_1[4];
    }
    if (lVar4 != -0x8000000000000000) {
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      if (param_1[7] != 0) {
        _free(param_1[8]);
      }
      if (param_1[0x16] != -0x8000000000000000 && param_1[0x16] != 0) {
        _free(param_1[0x17]);
      }
      lVar6 = param_1[0xb];
      lVar4 = param_1[0xc] + 1;
      lVar11 = lVar6;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100e02a24(lVar11);
        lVar11 = lVar11 + 0xc0;
      }
      if (param_1[10] != 0) {
        _free(lVar6);
      }
      lVar6 = param_1[0xe];
      lVar4 = param_1[0xf] + 1;
      lVar11 = lVar6;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de6690(lVar11);
        lVar11 = lVar11 + 0x48;
      }
      if (param_1[0xd] != 0) {
        _free(lVar6);
      }
      if (param_1[0x10] != 0) {
        _free(param_1[0x11]);
      }
      lVar4 = param_1[0x14];
      lVar6 = param_1[0x15];
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)(lVar4 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (param_1[0x13] != 0) {
        _free(lVar4);
      }
      if (param_1[0x19] == -0x8000000000000000 || param_1[0x19] == 0) {
        lVar4 = param_1[0x1c];
      }
      else {
        _free(param_1[0x1a]);
        lVar4 = param_1[0x1c];
      }
      if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
        _free(param_1[0x1d]);
      }
      lVar4 = param_1[0x1f];
      if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) &&
         (FUN_100de6690(param_1 + 0x22), lVar4 != 0)) {
        _free(param_1[0x20]);
      }
      if (param_1[0x2d] == 0) {
        return;
      }
      lVar4 = param_1[0x2e];
      if (lVar4 != 0) {
        lVar6 = param_1[0x30];
        if (lVar6 != 0) {
          plVar7 = (long *)param_1[0x2d];
          plVar9 = plVar7 + 1;
          lVar11 = *plVar7;
          uVar10 = CONCAT17(-(-1 < lVar11),
                            CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                   0x8080808080808080;
          do {
            while (uVar10 == 0) {
              lVar11 = *plVar9;
              plVar7 = plVar7 + -0x30;
              plVar9 = plVar9 + 1;
              uVar10 = CONCAT17(-(-1 < lVar11),
                                CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar11 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                       0x8080808080808080;
            }
            uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
            if (plVar7[(long)-iVar3 * 6 + -6] != 0) {
              _free(plVar7[(long)-iVar3 * 6 + -5]);
            }
            if (plVar7[(long)-iVar3 * 6 + -3] != 0) {
              _free(plVar7[(long)-iVar3 * 6 + -2]);
            }
            uVar10 = uVar10 - 1 & uVar10;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (lVar4 * 0x31 != -0x39) {
          lVar4 = param_1[0x2d] + lVar4 * -0x30 + -0x30;
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
    if (param_1[5] == 0) {
      return;
    }
    lVar4 = param_1[6];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar4);
  return;
}

