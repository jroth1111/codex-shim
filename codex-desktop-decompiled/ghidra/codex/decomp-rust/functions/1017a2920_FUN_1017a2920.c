
void FUN_1017a2920(int *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if (*param_1 != 0) {
    if (((*param_1 != 1) || (*(long *)(param_1 + 2) == 0)) ||
       (lVar8 = *(long *)(param_1 + 4), lVar8 == 0)) {
      return;
    }
    puVar10 = *(undefined8 **)(param_1 + 6);
    pcVar4 = (code *)*puVar10;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar8);
    }
    if (puVar10[1] == 0) {
      return;
    }
    goto _free;
  }
  bVar1 = *(byte *)(param_1 + 0x33a);
  if (bVar1 < 6) {
    if (3 < bVar1) {
      if (bVar1 == 4) {
        if ((*(long *)(param_1 + 0x340) != 6) &&
           ((*(long *)(param_1 + 0x340) != 4 || ((short)param_1[0x34a] != 0x12)))) {
          (**(code **)(*(long *)(param_1 + 0x342) + 0x20))
                    (param_1 + 0x348,*(undefined8 *)(param_1 + 0x344),
                     *(undefined8 *)(param_1 + 0x346));
        }
        plVar9 = *(long **)(param_1 + 0x33e);
        if (plVar9 != (long *)0x0) {
          uVar2 = plVar9[10];
          do {
            uVar5 = uVar2;
            if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_1017a0204;
            uVar2 = plVar9[10];
          } while (uVar2 != uVar5);
          plVar9[10] = uVar5 | 2;
LAB_1017a0204:
          if ((uVar5 & 5) == 1) {
            (**(code **)(plVar9[8] + 0x10))(plVar9[9]);
          }
          lVar8 = *plVar9;
          *plVar9 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001017ae8d4(param_1 + 0x33e);
          }
        }
        *(undefined2 *)(param_1 + 0x33c) = 0;
      }
      else {
        if (bVar1 != 5) {
          return;
        }
        plVar9 = (long *)(param_1 + 0x340);
        if ((char)param_1[0x35c] == '\0') {
          if ((short)param_1[0x35a] != 0x12) {
            lVar8 = 0x58;
            lVar6 = 0x50;
            lVar3 = 0x60;
            lVar7 = 0xd40;
LAB_1017a02cc:
            (**(code **)(*(long *)((long)(param_1 + 2) + lVar7) + 0x20))
                      ((long)plVar9 + lVar3,*(undefined8 *)((long)plVar9 + lVar6),
                       *(undefined8 *)((long)plVar9 + lVar8));
          }
        }
        else if (((char)param_1[0x35c] == '\x03') && (*plVar9 != 6)) {
          lVar8 = 0x18;
          lVar6 = 0x10;
          lVar3 = 0x20;
          lVar7 = 0xd00;
          if ((*plVar9 != 4) || ((short)param_1[0x34a] != 0x12)) goto LAB_1017a02cc;
        }
        plVar9 = *(long **)(param_1 + 0x33e);
        if (plVar9 != (long *)0x0) {
          uVar2 = plVar9[10];
          do {
            uVar5 = uVar2;
            if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_1017a0310;
            uVar2 = plVar9[10];
          } while (uVar2 != uVar5);
          plVar9[10] = uVar5 | 2;
LAB_1017a0310:
          if ((uVar5 & 5) == 1) {
            (**(code **)(plVar9[8] + 0x10))(plVar9[9]);
          }
          lVar8 = *plVar9;
          *plVar9 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001017ae8d4(param_1 + 0x33e);
          }
        }
        *(undefined1 *)((long)param_1 + 0xcef) = 0;
      }
      goto LAB_1017a034c;
    }
    if (bVar1 != 0) {
      if (bVar1 != 3) {
        return;
      }
      goto LAB_1017a034c;
    }
    FUN_1017a23d0(param_1 + 2);
    FUN_1017a1214(param_1 + 0x16e);
  }
  else {
    if (bVar1 < 8) {
      if (bVar1 == 6) {
        if ((*(long *)(param_1 + 0x33e) != 6) &&
           ((*(long *)(param_1 + 0x33e) != 4 || ((short)param_1[0x348] != 0x12)))) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x20))
                    (param_1 + 0x346,*(undefined8 *)(param_1 + 0x342),
                     *(undefined8 *)(param_1 + 0x344));
        }
        *(undefined1 *)((long)param_1 + 0xcee) = 0;
        lVar8 = *(long *)(param_1 + 0x31c);
      }
      else {
        if (bVar1 != 7) {
          return;
        }
        FUN_1017a1b44(param_1 + 0x33e);
        *(undefined1 *)((long)param_1 + 0xced) = 0;
        *(undefined1 *)((long)param_1 + 0xcee) = 0;
        lVar8 = *(long *)(param_1 + 0x31c);
      }
    }
    else if (bVar1 == 8) {
      FUN_1017a1b44(param_1 + 0x34e);
      *(undefined1 *)(param_1 + 0x33b) = 0;
      lVar8 = *(long *)(param_1 + 0x31c);
    }
    else {
      if (bVar1 != 9) {
        return;
      }
      FUN_1017a1b44(param_1 + 0x33e);
      *(undefined1 *)((long)param_1 + 0xceb) = 0;
      lVar8 = *(long *)(param_1 + 0x31c);
    }
    if (lVar8 != 6) {
      if (((lVar8 != 2) && ((*(byte *)((long)param_1 + 0xcea) & 1) != 0)) &&
         ((lVar8 != 4 || ((short)param_1[0x326] != 0x12)))) {
        (**(code **)(*(long *)(param_1 + 0x31e) + 0x20))
                  (param_1 + 0x324,*(undefined8 *)(param_1 + 800),*(undefined8 *)(param_1 + 0x322));
      }
      *(undefined1 *)((long)param_1 + 0xcea) = 0;
    }
    *(undefined1 *)((long)param_1 + 0xcea) = 0;
LAB_1017a034c:
    FUN_1017a23d0(param_1 + 0x172);
    FUN_1017a1214(param_1 + 0x16e);
  }
  plVar9 = *(long **)(param_1 + 0x170);
  LOAcquire();
  lVar8 = plVar9[0x54];
  plVar9[0x54] = lVar8 + -1;
  LORelease();
  if (lVar8 == 1) {
    if (plVar9[0x10] == 0) {
      LOAcquire();
      uVar2 = plVar9[0x11];
      plVar9[0x11] = uVar2 | 4;
      LORelease();
      if (((uint)uVar2 >> 2 & 1) == 0) goto LAB_1017a1ea8;
    }
    else {
      if (plVar9[0x10] == 1) {
        LOAcquire();
        uVar2 = plVar9[0x30];
        plVar9[0x30] = uVar2 | plVar9[0x41];
        LORelease();
        uVar2 = plVar9[0x41] & uVar2;
      }
      else {
        LOAcquire();
        uVar2 = plVar9[0x30];
        plVar9[0x30] = uVar2 | 1;
        LORelease();
        uVar2 = uVar2 & 1;
      }
      if (uVar2 == 0) {
LAB_1017a1ea8:
        FUN_10887f8fc(plVar9 + 0x50);
        FUN_10887f8fc(plVar9 + 0x51);
        FUN_10887f8fc(plVar9 + 0x52);
        FUN_10887f8fc(plVar9 + 0x53);
      }
    }
  }
  lVar8 = *plVar9;
  *plVar9 = lVar8 + -1;
  LORelease();
  if (lVar8 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar8 = *(long *)(param_1 + 0x170);
  FUN_1017a1f2c(lVar8 + 0x80);
  if (lVar8 != -1) {
    lVar3 = *(long *)(lVar8 + 8);
    *(long *)(lVar8 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar8);
      return;
    }
  }
  return;
}

