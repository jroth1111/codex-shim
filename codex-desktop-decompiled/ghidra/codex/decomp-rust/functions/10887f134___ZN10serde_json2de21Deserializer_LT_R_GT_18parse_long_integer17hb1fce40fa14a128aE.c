
void __ZN10serde_json2de21Deserializer_LT_R_GT_18parse_long_integer17hb1fce40fa14a128aE
               (undefined8 *param_1,long param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uVar12 = *(ulong *)(param_2 + 0x20);
  uVar1 = *(ulong *)(param_2 + 0x28);
  if (uVar1 < uVar12) {
    uVar9 = 0;
    uVar11 = (ulong)(uint)((int)uVar12 - (int)uVar1);
    do {
      bVar3 = *(byte *)(*(long *)(param_2 + 0x18) + uVar1 + uVar9);
      if (9 < bVar3 - 0x30) {
        uVar7 = (uint)uVar9;
        if (bVar3 == 0x2e) {
          uVar1 = *(ulong *)(param_2 + 0x20);
          uVar11 = *(ulong *)(param_2 + 0x28);
          uVar12 = uVar11 + 1;
          *(ulong *)(param_2 + 0x28) = uVar12;
          if (uVar1 <= uVar12) goto LAB_10177aa74;
          lVar10 = 0;
          iVar8 = (int)uVar11 + 1;
          goto LAB_10177a918;
        }
        if ((bVar3 == 0x45) || (bVar3 == 0x65)) goto SUB_10177b2f8;
        uVar13 = -uVar7;
        uVar11 = uVar9;
        if (-1 < (int)uVar7) {
          uVar13 = uVar7;
        }
        goto joined_r0x00010887f210;
      }
      *(ulong *)(param_2 + 0x28) = uVar1 + 1 + uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar12 - uVar1 != uVar9);
  }
  else {
    uVar11 = 0;
  }
  uVar7 = (uint)uVar11;
  uVar13 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar13 = uVar7;
  }
joined_r0x00010887f210:
  dVar15 = (double)param_4;
  if (uVar13 < 0x135) {
    uVar7 = (uint)uVar11;
  }
  else {
    do {
      if (dVar15 == 0.0) goto LAB_10887f2a4;
      iVar8 = (int)uVar11;
      if (-1 < iVar8) goto LAB_10887f27c;
      uVar7 = iVar8 + 0x134;
      uVar11 = (ulong)uVar7;
      uVar13 = uVar7;
      if ((int)uVar7 < 0) {
        uVar13 = -iVar8 - 0x134;
      }
      dVar15 = dVar15 / 1e+308;
    } while (0x134 < uVar13);
  }
  if ((int)uVar7 < 0) {
    dVar15 = dVar15 / *(double *)
                       (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar13 * 8);
  }
  else {
    dVar15 = dVar15 * *(double *)
                       (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar13 * 8);
    if (ABS(dVar15) == INFINITY) {
LAB_10887f27c:
      uStack_38 = 0xe;
      uVar6 = FUN_10887f4fc(param_2,&uStack_38);
      param_1[1] = uVar6;
      uVar6 = 1;
      goto LAB_10887f2b8;
    }
  }
LAB_10887f2a4:
  uVar6 = 0;
  if (param_3 == 0) {
    dVar15 = -dVar15;
  }
  param_1[1] = dVar15;
LAB_10887f2b8:
  *param_1 = uVar6;
  return;
  while( true ) {
    uVar12 = uVar12 + 1;
    *(ulong *)(param_2 + 0x28) = uVar12;
    if (*(ulong *)(param_2 + 0x20) == uVar12) break;
LAB_10887f438:
    if (9 < *(byte *)(*(long *)(param_2 + 0x18) + uVar12) - 0x30) break;
  }
LAB_10887f458:
  uVar6 = 0;
  uVar16 = 0;
  if (param_3 == 0) {
    uVar16 = 0x8000000000000000;
  }
  param_1[1] = uVar16;
LAB_10887f474:
  *param_1 = uVar6;
  return;
  while( true ) {
    uVar12 = uVar12 + 1;
    *(ulong *)(param_2 + 0x28) = uVar12;
    if (*(ulong *)(param_2 + 0x20) == uVar12) break;
LAB_10887f2f8:
    uVar13 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar12);
    if (9 < uVar13 - 0x30) {
      if ((uVar13 | 0x20) == 0x65) goto SUB_10177b2f8;
      break;
    }
  }
LAB_10887f340:
  dVar15 = (double)param_4;
  uVar13 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar13 = uVar7;
  }
  while (0x134 < uVar13) {
    if (dVar15 == 0.0) goto LAB_10887f3ec;
    iVar8 = (int)uVar9;
    if (-1 < iVar8) goto LAB_10887f3c4;
    uVar7 = iVar8 + 0x134;
    uVar9 = (ulong)uVar7;
    uVar13 = uVar7;
    if ((int)uVar7 < 0) {
      uVar13 = -iVar8 - 0x134;
    }
    dVar15 = dVar15 / 1e+308;
  }
  if ((int)uVar7 < 0) {
    dVar15 = dVar15 / *(double *)
                       (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar13 * 8);
  }
  else {
    dVar15 = dVar15 * *(double *)
                       (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar13 * 8);
    if (ABS(dVar15) == INFINITY) {
LAB_10887f3c4:
      uStack_38 = 0xe;
      uVar6 = FUN_10887f4fc(param_2,&uStack_38);
      param_1[1] = uVar6;
      uVar6 = 1;
      goto LAB_10887f400;
    }
  }
LAB_10887f3ec:
  uVar6 = 0;
  if (param_3 == 0) {
    dVar15 = -dVar15;
  }
  param_1[1] = dVar15;
LAB_10887f400:
  *param_1 = uVar6;
  return;
  while( true ) {
    *(ulong *)(param_2 + 0x28) = uVar11 + 2 + lVar10;
    param_4 = ((ulong)uVar13 & 0xff) + param_4 * 10;
    lVar10 = lVar10 + 1;
    if (~uVar11 + uVar1 == lVar10) break;
LAB_10177a918:
    uVar14 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar12 + lVar10);
    uVar13 = uVar14 - 0x30;
    if (9 < uVar13) {
      if ((int)lVar10 != 0) {
        uVar9 = (uVar9 & 0xffffffff) - lVar10;
        if ((uVar14 | 0x20) == 0x65) goto SUB_10177b2f8;
        goto LAB_10177a9a8;
      }
      uStack_38 = 0xd;
      goto LAB_10177aa80;
    }
    if ((0x1999999999999998 < param_4) && ((param_4 != 0x1999999999999999 || (5 < (uVar13 & 0xff))))
       ) {
      uVar7 = uVar7 - (int)lVar10;
      uVar9 = (ulong)uVar7;
      uVar12 = *(ulong *)(param_2 + 0x28);
      if (*(ulong *)(param_2 + 0x20) <= uVar12) goto LAB_10887f340;
      goto LAB_10887f2f8;
    }
  }
  if (iVar8 == (int)uVar1) {
LAB_10177aa74:
    uStack_38 = 5;
LAB_10177aa80:
    uVar6 = FUN_10887ea98(param_2,&uStack_38);
LAB_10177aa98:
    *param_1 = 1;
    param_1[1] = uVar6;
  }
  else {
    uVar9 = (ulong)((iVar8 + uVar7) - (int)uVar1);
LAB_10177a9a8:
    dVar15 = (double)param_4;
    uVar7 = (uint)uVar9;
    uVar13 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar13 = uVar7;
    }
    while (0x134 < uVar13) {
      if (dVar15 == 0.0) goto LAB_10177aa50;
      iVar8 = (int)uVar9;
      if (-1 < iVar8) goto LAB_10177aa2c;
      uVar7 = iVar8 + 0x134;
      uVar9 = (ulong)uVar7;
      uVar13 = uVar7;
      if ((int)uVar7 < 0) {
        uVar13 = -iVar8 - 0x134;
      }
      dVar15 = dVar15 / 1e+308;
    }
    if ((int)uVar7 < 0) {
      dVar15 = dVar15 / *(double *)
                         (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar13 * 8);
    }
    else {
      dVar15 = dVar15 * *(double *)
                         (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar13 * 8);
      if (ABS(dVar15) == INFINITY) {
LAB_10177aa2c:
        uStack_38 = 0xe;
        uVar6 = FUN_10887f4fc(param_2,&uStack_38);
        goto LAB_10177aa98;
      }
    }
LAB_10177aa50:
    if (param_3 == 0) {
      dVar15 = -dVar15;
    }
    param_1[1] = dVar15;
    *param_1 = 0;
  }
  return;
SUB_10177b2f8:
  uVar1 = *(ulong *)(param_2 + 0x20);
  lVar10 = *(long *)(param_2 + 0x28);
  uVar12 = lVar10 + 1;
  *(ulong *)(param_2 + 0x28) = uVar12;
  if (uVar12 < uVar1) {
    cVar2 = *(char *)(*(long *)(param_2 + 0x18) + uVar12);
    bVar4 = true;
    bVar5 = true;
    if (cVar2 != '+') {
      if (cVar2 != '-') goto LAB_10177b34c;
      bVar5 = false;
    }
    bVar4 = bVar5;
    uVar12 = lVar10 + 2;
    *(ulong *)(param_2 + 0x28) = uVar12;
  }
  else {
    bVar4 = true;
  }
LAB_10177b34c:
  if (uVar1 <= uVar12) {
    uStack_38 = 5;
LAB_10177b50c:
    uVar6 = FUN_10887f4fc(param_2,&uStack_38);
    *param_1 = 1;
    param_1[1] = uVar6;
    return;
  }
  bVar3 = *(byte *)(*(long *)(param_2 + 0x18) + uVar12);
  uVar12 = uVar12 + 1;
  *(ulong *)(param_2 + 0x28) = uVar12;
  uVar7 = bVar3 - 0x30;
  if (9 < uVar7) {
    uStack_38 = 0xd;
    goto LAB_10177b50c;
  }
  uVar7 = uVar7 & 0xff;
  if (uVar12 < uVar1) {
    do {
      uVar13 = *(byte *)(*(long *)(param_2 + 0x18) + uVar12) - 0x30;
      if (9 < uVar13) break;
      uVar12 = uVar12 + 1;
      *(ulong *)(param_2 + 0x28) = uVar12;
      if ((0xccccccb < (int)uVar7) && ((uVar7 != 0xccccccc || (7 < (uVar13 & 0xff))))) {
        if ((param_4 != 0) && (bVar4)) {
          uStack_28 = 0xe;
          puStack_30 = param_1;
          uVar6 = FUN_10887f4fc(param_2,&uStack_28);
          puStack_30[1] = uVar6;
          uVar6 = 1;
          param_1 = puStack_30;
          goto LAB_10887f474;
        }
        uVar12 = *(ulong *)(param_2 + 0x28);
        if (*(ulong *)(param_2 + 0x20) <= uVar12) goto LAB_10887f458;
        goto LAB_10887f438;
      }
      uVar7 = (uVar13 & 0xff) + uVar7 * 10;
    } while (uVar1 != uVar12);
  }
  iVar8 = (int)uVar9;
  uVar13 = (int)(iVar8 + uVar7) >> 0x1f ^ 0x80000000;
  if (!SCARRY4(iVar8,uVar7)) {
    uVar13 = iVar8 + uVar7;
  }
  uVar14 = (int)(iVar8 - uVar7) >> 0x1f ^ 0x80000000;
  if (!SBORROW4(iVar8,uVar7)) {
    uVar14 = iVar8 - uVar7;
  }
  if (!bVar4) {
    uVar13 = uVar14;
  }
  dVar15 = (double)param_4;
  uVar7 = -uVar13;
  if (-1 < (int)uVar13) {
    uVar7 = uVar13;
  }
  while (0x134 < uVar7) {
    if (dVar15 == 0.0) goto LAB_10177b4e0;
    if (-1 < (int)uVar13) goto LAB_10177b4ac;
    uVar14 = uVar13 + 0x134;
    uVar7 = uVar14;
    if ((int)uVar14 < 0) {
      uVar7 = -uVar13 - 0x134;
    }
    dVar15 = dVar15 / 1e+308;
    uVar13 = uVar14;
  }
  if ((int)uVar13 < 0) {
    dVar15 = dVar15 / *(double *)(&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar7 * 8)
    ;
  }
  else {
    dVar15 = dVar15 * *(double *)(&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar7 * 8)
    ;
    if (ABS(dVar15) == INFINITY) {
LAB_10177b4ac:
      uStack_38 = 0xe;
      uVar6 = FUN_10887f4fc(param_2,&uStack_38);
      param_1[1] = uVar6;
      uVar6 = 1;
      goto LAB_10177b4f4;
    }
  }
LAB_10177b4e0:
  uVar6 = 0;
  if (param_3 == 0) {
    dVar15 = -dVar15;
  }
  param_1[1] = dVar15;
LAB_10177b4f4:
  *param_1 = uVar6;
  return;
}

