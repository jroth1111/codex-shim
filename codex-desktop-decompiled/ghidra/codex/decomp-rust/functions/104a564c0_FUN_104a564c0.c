
void FUN_104a564c0(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint auStack_48 [2];
  double dStack_40;
  undefined8 uStack_38;
  double dStack_30;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (uVar2 <= uVar12) {
    uStack_38 = 5;
LAB_104a565ec:
    uVar6 = func_0x0001089a818c(param_2,&uStack_38);
LAB_104a56604:
    *param_1 = 3;
    param_1[1] = uVar6;
    return;
  }
  lVar11 = *(long *)(param_2 + 0x18);
  bVar4 = *(byte *)(lVar11 + uVar12);
  uVar12 = uVar12 + 1;
  *(ulong *)(param_2 + 0x28) = uVar12;
  uVar8 = bVar4 - 0x30;
  if (uVar8 == 0) {
    if ((uVar12 < uVar2) && (*(byte *)(lVar11 + uVar12) - 0x30 < 10)) {
      uStack_38 = 0xd;
      uVar6 = FUN_1089a7aec(param_2,&uStack_38);
      goto LAB_104a56604;
    }
    dVar7 = 0.0;
  }
  else {
    if (8 < bVar4 - 0x31) {
      uStack_38 = 0xd;
      goto LAB_104a565ec;
    }
    dVar7 = (double)((ulong)uVar8 & 0xff);
    if (uVar12 < uVar2) {
      do {
        uVar8 = *(byte *)(lVar11 + uVar12) - 0x30;
        if (9 < uVar8) break;
        if ((0x1999999999999998 < (ulong)dVar7) &&
           ((dVar7 != 2.353437368264535e-185 || (5 < (uVar8 & 0xff))))) {
          func_0x00010887f134(&uStack_38,param_2,param_3,dVar7);
          if ((uint)uStack_38 == 1) {
            *param_1 = 3;
            param_1[1] = dStack_30;
            return;
          }
          param_1[1] = dStack_30;
          *param_1 = 0;
          return;
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(param_2 + 0x28) = uVar12;
        dVar7 = (double)(((ulong)uVar8 & 0xff) + (long)dVar7 * 10);
      } while (uVar2 != uVar12);
    }
  }
  uVar12 = *(ulong *)(param_2 + 0x20);
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (uVar2 < uVar12) {
    cVar3 = *(char *)(*(long *)(param_2 + 0x18) + uVar2);
    if (cVar3 == '.') {
      uVar1 = uVar2 + 1;
      *(ulong *)(param_2 + 0x28) = uVar1;
      if (uVar1 < uVar12) {
        lVar11 = 0;
        uVar8 = ((int)uVar2 - (int)uVar12) + 1;
        uVar10 = (ulong)uVar8;
        do {
          uVar13 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar1 + lVar11);
          uVar5 = uVar13 - 0x30;
          if (9 < uVar5) {
            if ((int)lVar11 == 0) {
              uStack_38 = 0xd;
              goto LAB_104a5604c;
            }
            uVar10 = -lVar11;
            if ((uVar13 | 0x20) != 0x65) goto LAB_104a55f6c;
            func_0x000104a56874(auStack_48);
LAB_104a55f58:
            if ((auStack_48[0] & 1) != 0) goto LAB_104a56030;
            goto LAB_104a5607c;
          }
          if ((0x1999999999999998 < (ulong)dVar7) &&
             ((dVar7 != 2.353437368264535e-185 || (5 < (uVar5 & 0xff))))) {
            func_0x00010887f2cc(auStack_48,param_2,param_3,dVar7,-(int)lVar11);
            goto LAB_104a55f58;
          }
          *(ulong *)(param_2 + 0x28) = uVar2 + 2 + lVar11;
          dVar7 = (double)(((ulong)uVar5 & 0xff) + (long)dVar7 * 10);
          lVar11 = lVar11 + 1;
        } while (~uVar2 + uVar12 != lVar11);
        if (uVar8 != 0) {
LAB_104a55f6c:
          dStack_40 = (double)(ulong)dVar7;
          uVar8 = (uint)uVar10;
          uVar5 = -uVar8;
          if (-1 < (int)uVar8) {
            uVar5 = uVar8;
          }
          while (0x134 < uVar5) {
            if (dStack_40 == 0.0) goto LAB_104a56014;
            iVar9 = (int)uVar10;
            if (-1 < iVar9) goto LAB_104a55ff0;
            uVar8 = iVar9 + 0x134;
            uVar10 = (ulong)uVar8;
            uVar5 = uVar8;
            if ((int)uVar8 < 0) {
              uVar5 = -iVar9 - 0x134;
            }
            dStack_40 = dStack_40 / 1e+308;
          }
          if ((int)uVar8 < 0) {
            dStack_40 = dStack_40 /
                        *(double *)
                         (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar5 * 8);
          }
          else {
            dStack_40 = dStack_40 *
                        *(double *)
                         (&__ZN10serde_json2de5POW1017h9ba633e3e1c116a5E + (ulong)uVar5 * 8);
            if (ABS(dStack_40) == INFINITY) {
LAB_104a55ff0:
              uStack_38 = 0xe;
              dStack_40 = (double)func_0x0001089a818c(param_2,&uStack_38);
              goto LAB_104a56030;
            }
          }
LAB_104a56014:
          if ((int)param_3 == 0) {
            dStack_40 = -dStack_40;
          }
LAB_104a5607c:
          uVar6 = 0;
          goto LAB_104a56084;
        }
      }
      uStack_38 = 5;
LAB_104a5604c:
      dStack_40 = (double)FUN_1089a7aec(param_2,&uStack_38);
LAB_104a56030:
      *param_1 = 3;
      param_1[1] = dStack_40;
      return;
    }
    if ((cVar3 == 'E') || (cVar3 == 'e')) {
      func_0x000104a56874(&uStack_38);
      if (((uint)uStack_38 & 1) != 0) {
        *param_1 = 3;
        param_1[1] = dStack_30;
        return;
      }
      uVar6 = 0;
      dStack_40 = dStack_30;
      goto LAB_104a56084;
    }
  }
  if ((param_3 & 1) == 0) {
    dStack_40 = (double)-(long)dVar7;
    if ((long)dStack_40 < 0) {
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
      dStack_40 = (double)((ulong)(double)(ulong)dVar7 | 0x8000000000000000);
    }
  }
  else {
    uVar6 = 1;
    dStack_40 = dVar7;
  }
LAB_104a56084:
  *param_1 = uVar6;
  param_1[1] = dStack_40;
  return;
}

