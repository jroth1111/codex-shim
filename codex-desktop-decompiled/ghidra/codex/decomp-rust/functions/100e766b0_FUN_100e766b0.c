
void FUN_100e766b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      plVar5 = (long *)(lVar1 + lVar4 * 0x218);
      if (*plVar5 != 0) {
        _free(plVar5[1]);
      }
      if (plVar5[6] == -0x8000000000000000 || plVar5[6] == 0) {
        lVar3 = plVar5[9];
        if (lVar3 == -0x8000000000000000) goto LAB_100e76728;
LAB_100e76750:
        if (lVar3 != 0) {
          _free(plVar5[10]);
        }
        if (plVar5[0xc] == -0x8000000000000000 || plVar5[0xc] == 0) {
          if (plVar5[0xf] == -0x8000000000000000 || plVar5[0xf] == 0) goto LAB_100e7677c;
LAB_100e767c0:
          _free(plVar5[0x10]);
          if ((plVar5[0x12] & 0x7fffffffffffffffU) != 0) goto LAB_100e767d4;
          goto LAB_100e76788;
        }
        _free(plVar5[0xd]);
        if (plVar5[0xf] != -0x8000000000000000 && plVar5[0xf] != 0) goto LAB_100e767c0;
LAB_100e7677c:
        if ((plVar5[0x12] & 0x7fffffffffffffffU) == 0) goto LAB_100e76788;
LAB_100e767d4:
        lVar3 = 0x50;
LAB_100e767d8:
        _free(*(undefined8 *)((long)plVar5 + lVar3 + 0x48));
        if ((plVar5[0x15] & 0x7fffffffffffffffU) != 0) goto LAB_100e767ec;
LAB_100e76794:
        func_0x000100ca3a5c(plVar5 + 0x19);
        lVar3 = plVar5[4];
        lVar6 = plVar5[5];
      }
      else {
        _free(plVar5[7]);
        lVar3 = plVar5[9];
        if (lVar3 != -0x8000000000000000) goto LAB_100e76750;
LAB_100e76728:
        if (plVar5[10] != 0) {
          lVar3 = 0x10;
          goto LAB_100e767d8;
        }
LAB_100e76788:
        if ((plVar5[0x15] & 0x7fffffffffffffffU) == 0) goto LAB_100e76794;
LAB_100e767ec:
        _free(plVar5[0x16]);
        func_0x000100ca3a5c(plVar5 + 0x19);
        lVar3 = plVar5[4];
        lVar6 = plVar5[5];
      }
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (plVar5[3] != 0) {
        _free(lVar3);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

