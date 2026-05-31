
bool FUN_1019a7450(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  long lVar12;
  uint uVar13;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined8 uStack_150;
  long lStack_148;
  char cStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_137;
  undefined8 uStack_12f;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined8 uStack_110;
  long lStack_108;
  char cStack_100;
  undefined8 uStack_ff;
  undefined8 uStack_f7;
  undefined8 uStack_ef;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  byte bStack_d0;
  char cStack_cf;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  byte bStack_98;
  char cStack_97;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = *param_1;
  lVar4 = param_1[1];
  uVar3 = *param_2;
  lVar5 = param_2[1];
  if (((lVar4 == lVar5) &&
      ((*(char *)(param_1 + 7) == *(char *)(param_2 + 7) &&
       *(char *)((long)param_1 + 0x39) == '\x02') && *(char *)((long)param_2 + 0x39) == '\x02')) &&
     (iVar11 = _memcmp(uVar2,uVar3,lVar4), iVar11 == 0)) {
    bVar10 = true;
  }
  else {
    cStack_140 = *(char *)(param_1 + 2);
    if (cStack_140 != '\x06') {
      uStack_1a8 = *(undefined8 *)((long)param_1 + 0x19);
      uStack_1b0 = *(undefined8 *)((long)param_1 + 0x11);
      uStack_1a0 = *(undefined8 *)((long)param_1 + 0x21);
      uStack_198 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
      uStack_191 = (undefined1)param_1[6];
      uStack_190 = (undefined7)((ulong)param_1[6] >> 8);
    }
    uStack_116 = *(undefined1 *)((long)param_1 + 0x3a);
    uStack_118 = *(undefined1 *)(param_1 + 7);
    uStack_117 = *(undefined1 *)((long)param_1 + 0x39);
    cStack_100 = *(char *)(param_2 + 2);
    if (cStack_100 != '\x06') {
      uStack_178 = *(undefined8 *)((long)param_2 + 0x19);
      uStack_180 = *(undefined8 *)((long)param_2 + 0x11);
      uStack_170 = *(undefined8 *)((long)param_2 + 0x21);
      uStack_168 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
      uStack_161 = (undefined1)param_2[6];
      uStack_160 = (undefined7)((ulong)param_2[6] >> 8);
    }
    uStack_137 = uStack_1a8;
    uStack_13f = uStack_1b0;
    uStack_127 = uStack_198;
    uStack_12f = uStack_1a0;
    uStack_f7 = uStack_178;
    uStack_ff = uStack_180;
    uStack_d6 = *(undefined1 *)((long)param_2 + 0x3a);
    uStack_d8 = *(undefined2 *)(param_2 + 7);
    uStack_120 = uStack_191;
    uStack_11f = uStack_190;
    uStack_e7 = uStack_168;
    uStack_ef = uStack_170;
    uStack_e0 = uStack_161;
    uStack_df = uStack_160;
    uStack_150 = uVar2;
    lStack_148 = lVar4;
    uStack_110 = uVar3;
    lStack_108 = lVar5;
LAB_1019a756c:
    do {
      __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                (&bStack_d0,&uStack_150,param_2);
      lVar5 = lStack_b0;
      uVar3 = uStack_b8;
      lVar4 = lStack_c0;
      uVar2 = uStack_c8;
      cVar7 = cStack_cf;
      bVar6 = bStack_d0;
      uVar13 = (uint)bStack_d0;
      if (uVar13 == 10) {
        __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                  (&bStack_98,&uStack_110);
        return bStack_98 == 10;
      }
      __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                (&bStack_98,&uStack_110);
      lVar9 = lStack_78;
      uVar8 = uStack_80;
      if (bStack_98 == 10) break;
      lVar12 = (ulong)uVar13 - 5;
      if (bVar6 < 6) {
        lVar12 = 0;
      }
      lVar1 = 0;
      if (5 < bStack_98) {
        lVar1 = (ulong)bStack_98 - 5;
      }
      if (lVar12 != lVar1) break;
      if (lVar12 == 4) {
LAB_1019a765c:
        if (lVar4 != lStack_88) break;
        iVar11 = _memcmp(uVar2,puStack_90,lVar4);
        param_2 = extraout_x1_00;
      }
      else {
        param_2 = puStack_90;
        if ((lVar12 != 0) || (5 < bStack_98)) goto LAB_1019a756c;
        if (bVar6 != bStack_98) break;
        if (2 < bVar6) {
          if (bVar6 == 3) goto LAB_1019a765c;
          if (bVar6 == 4) goto LAB_1019a7624;
LAB_1019a7608:
          if (cVar7 != cStack_97) break;
          goto LAB_1019a756c;
        }
        if (bVar6 == 0) goto LAB_1019a765c;
        if (bVar6 != 1) goto LAB_1019a7608;
LAB_1019a7624:
        if (((lVar4 != lStack_88) || (iVar11 = _memcmp(uVar2,puStack_90,lVar4), iVar11 != 0)) ||
           (lVar5 != lVar9)) break;
        iVar11 = _memcmp(uVar3,uVar8,lVar5);
        param_2 = extraout_x1;
      }
    } while (iVar11 == 0);
    bVar10 = false;
  }
  return bVar10;
}

