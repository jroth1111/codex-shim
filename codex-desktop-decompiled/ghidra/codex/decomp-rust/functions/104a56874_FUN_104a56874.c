
void FUN_104a56874(undefined8 *param_1,long param_2,int param_3,ulong param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  uVar11 = lVar3 + 1;
  *(ulong *)(param_2 + 0x28) = uVar11;
  if (uVar11 < uVar2) {
    cVar4 = *(char *)(*(long *)(param_2 + 0x18) + uVar11);
    bVar7 = true;
    bVar8 = true;
    if (cVar4 != '+') {
      if (cVar4 != '-') goto LAB_104a568c8;
      bVar8 = false;
    }
    bVar7 = bVar8;
    uVar11 = lVar3 + 2;
    *(ulong *)(param_2 + 0x28) = uVar11;
  }
  else {
    bVar7 = true;
  }
LAB_104a568c8:
  if (uVar2 <= uVar11) {
    uStack_38 = 5;
LAB_104a56a88:
    uVar9 = FUN_1089a818c(param_2,&uStack_38);
    *param_1 = 1;
    param_1[1] = uVar9;
    return;
  }
  bVar5 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
  uVar11 = uVar11 + 1;
  *(ulong *)(param_2 + 0x28) = uVar11;
  uVar10 = bVar5 - 0x30;
  if (9 < uVar10) {
    uStack_38 = 0xd;
    goto LAB_104a56a88;
  }
  uVar10 = uVar10 & 0xff;
  if (uVar11 < uVar2) {
    do {
      uVar6 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11) - 0x30;
      if (9 < uVar6) break;
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
      if ((0xccccccb < (int)uVar10) && ((uVar10 != 0xccccccc || (7 < (uVar6 & 0xff))))) {
        if ((param_4 != 0) && (bVar7)) {
          uStack_28 = 0xe;
          puStack_30 = param_1;
          uVar9 = FUN_10887f4fc(param_2,&uStack_28);
          puStack_30[1] = uVar9;
          uVar9 = 1;
          param_1 = puStack_30;
          goto LAB_10887f474;
        }
        uVar11 = *(ulong *)(param_2 + 0x28);
        if (*(ulong *)(param_2 + 0x20) <= uVar11) goto LAB_10887f458;
        goto LAB_10887f438;
      }
      uVar10 = (uVar6 & 0xff) + uVar10 * 10;
    } while (uVar2 != uVar11);
  }
  uVar6 = (int)(param_5 + uVar10) >> 0x1f ^ 0x80000000;
  if (!SCARRY4(param_5,uVar10)) {
    uVar6 = param_5 + uVar10;
  }
  uVar1 = (int)(param_5 - uVar10) >> 0x1f ^ 0x80000000;
  if (!SBORROW4(param_5,uVar10)) {
    uVar1 = param_5 - uVar10;
  }
  if (!bVar7) {
    uVar6 = uVar1;
  }
  dVar12 = (double)param_4;
  uVar10 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar10 = uVar6;
  }
  while (0x134 < uVar10) {
    if (dVar12 == 0.0) goto LAB_104a56a5c;
    if (-1 < (int)uVar6) goto LAB_104a56a28;
    uVar1 = uVar6 + 0x134;
    uVar10 = uVar1;
    if ((int)uVar1 < 0) {
      uVar10 = -uVar6 - 0x134;
    }
    dVar12 = dVar12 / 1e+308;
    uVar6 = uVar1;
  }
  if ((int)uVar6 < 0) {
    dVar12 = dVar12 / *(double *)
                       (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar10 * 8);
  }
  else {
    dVar12 = dVar12 * *(double *)
                       (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar10 * 8);
    if (ABS(dVar12) == INFINITY) {
LAB_104a56a28:
      uStack_38 = 0xe;
      uVar9 = FUN_1089a818c(param_2,&uStack_38);
      param_1[1] = uVar9;
      uVar9 = 1;
      goto LAB_104a56a70;
    }
  }
LAB_104a56a5c:
  uVar9 = 0;
  if (param_3 == 0) {
    dVar12 = -dVar12;
  }
  param_1[1] = dVar12;
LAB_104a56a70:
  *param_1 = uVar9;
  return;
  while( true ) {
    uVar11 = uVar11 + 1;
    *(ulong *)(param_2 + 0x28) = uVar11;
    if (*(ulong *)(param_2 + 0x20) == uVar11) break;
LAB_10887f438:
    if (9 < *(byte *)(*(long *)(param_2 + 0x18) + uVar11) - 0x30) break;
  }
LAB_10887f458:
  uVar9 = 0;
  uVar13 = 0;
  if (param_3 == 0) {
    uVar13 = 0x8000000000000000;
  }
  param_1[1] = uVar13;
LAB_10887f474:
  *param_1 = uVar9;
  return;
}

