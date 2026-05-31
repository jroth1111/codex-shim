
void FUN_1017a0050(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  bVar1 = *(byte *)(param_1 + 0xce0);
  if (bVar1 < 6) {
    if (3 < bVar1) {
      if (bVar1 == 4) {
        if ((*(long *)(param_1 + 0xcf8) != 6) &&
           ((*(long *)(param_1 + 0xcf8) != 4 || (*(short *)(param_1 + 0xd20) != 0x12)))) {
          (**(code **)(*(long *)(param_1 + 0xd00) + 0x20))
                    (param_1 + 0xd18,*(undefined8 *)(param_1 + 0xd08),
                     *(undefined8 *)(param_1 + 0xd10));
        }
        plVar8 = *(long **)(param_1 + 0xcf0);
        if (plVar8 != (long *)0x0) {
          uVar3 = plVar8[10];
          do {
            uVar5 = uVar3;
            if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_1017a0204;
            uVar3 = plVar8[10];
          } while (uVar3 != uVar5);
          plVar8[10] = uVar5 | 2;
LAB_1017a0204:
          if ((uVar5 & 5) == 1) {
            (**(code **)(plVar8[8] + 0x10))(plVar8[9]);
          }
          lVar2 = *plVar8;
          *plVar8 = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001017ae8d4(param_1 + 0xcf0);
          }
        }
        *(undefined2 *)(param_1 + 0xce8) = 0;
      }
      else {
        if (bVar1 != 5) {
          return;
        }
        plVar8 = (long *)(param_1 + 0xcf8);
        if (*(char *)(param_1 + 0xd68) == '\0') {
          if (*(short *)(param_1 + 0xd60) != 0x12) {
            lVar2 = 0x58;
            lVar6 = 0x50;
            lVar4 = 0x60;
            lVar7 = 0xd40;
LAB_1017a02cc:
            (**(code **)(*(long *)(param_1 + lVar7) + 0x20))
                      ((long)plVar8 + lVar4,*(undefined8 *)((long)plVar8 + lVar6),
                       *(undefined8 *)((long)plVar8 + lVar2));
          }
        }
        else if ((*(char *)(param_1 + 0xd68) == '\x03') && (*plVar8 != 6)) {
          lVar2 = 0x18;
          lVar6 = 0x10;
          lVar4 = 0x20;
          lVar7 = 0xd00;
          if ((*plVar8 != 4) || (*(short *)(param_1 + 0xd20) != 0x12)) goto LAB_1017a02cc;
        }
        plVar8 = *(long **)(param_1 + 0xcf0);
        if (plVar8 != (long *)0x0) {
          uVar3 = plVar8[10];
          do {
            uVar5 = uVar3;
            if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_1017a0310;
            uVar3 = plVar8[10];
          } while (uVar3 != uVar5);
          plVar8[10] = uVar5 | 2;
LAB_1017a0310:
          if ((uVar5 & 5) == 1) {
            (**(code **)(plVar8[8] + 0x10))(plVar8[9]);
          }
          lVar2 = *plVar8;
          *plVar8 = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001017ae8d4(param_1 + 0xcf0);
          }
        }
        *(undefined1 *)(param_1 + 0xce7) = 0;
      }
      goto LAB_1017a034c;
    }
    if (bVar1 != 0) {
      if (bVar1 != 3) {
        return;
      }
      goto LAB_1017a034c;
    }
    FUN_1017a23d0(param_1);
    FUN_1017a1214(param_1 + 0x5b0);
  }
  else {
    if (bVar1 < 8) {
      if (bVar1 == 6) {
        if ((*(long *)(param_1 + 0xcf0) != 6) &&
           ((*(long *)(param_1 + 0xcf0) != 4 || (*(short *)(param_1 + 0xd18) != 0x12)))) {
          (**(code **)(*(long *)(param_1 + 0xcf8) + 0x20))
                    (param_1 + 0xd10,*(undefined8 *)(param_1 + 0xd00),
                     *(undefined8 *)(param_1 + 0xd08));
        }
        *(undefined1 *)(param_1 + 0xce6) = 0;
        lVar2 = *(long *)(param_1 + 0xc68);
      }
      else {
        if (bVar1 != 7) {
          return;
        }
        FUN_1017a1b44(param_1 + 0xcf0);
        *(undefined1 *)(param_1 + 0xce5) = 0;
        *(undefined1 *)(param_1 + 0xce6) = 0;
        lVar2 = *(long *)(param_1 + 0xc68);
      }
    }
    else if (bVar1 == 8) {
      FUN_1017a1b44(param_1 + 0xd30);
      *(undefined1 *)(param_1 + 0xce4) = 0;
      lVar2 = *(long *)(param_1 + 0xc68);
    }
    else {
      if (bVar1 != 9) {
        return;
      }
      FUN_1017a1b44(param_1 + 0xcf0);
      *(undefined1 *)(param_1 + 0xce3) = 0;
      lVar2 = *(long *)(param_1 + 0xc68);
    }
    if (lVar2 != 6) {
      if (((lVar2 != 2) && ((*(byte *)(param_1 + 0xce2) & 1) != 0)) &&
         ((lVar2 != 4 || (*(short *)(param_1 + 0xc90) != 0x12)))) {
        (**(code **)(*(long *)(param_1 + 0xc70) + 0x20))
                  (param_1 + 0xc88,*(undefined8 *)(param_1 + 0xc78),*(undefined8 *)(param_1 + 0xc80)
                  );
      }
      *(undefined1 *)(param_1 + 0xce2) = 0;
    }
    *(undefined1 *)(param_1 + 0xce2) = 0;
LAB_1017a034c:
    FUN_1017a23d0(param_1 + 0x5c0);
    FUN_1017a1214(param_1 + 0x5b0);
  }
  plVar8 = *(long **)(param_1 + 0x5b8);
  LOAcquire();
  lVar2 = plVar8[0x54];
  plVar8[0x54] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    if (plVar8[0x10] == 0) {
      LOAcquire();
      uVar3 = plVar8[0x11];
      plVar8[0x11] = uVar3 | 4;
      LORelease();
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_1017a1ec8;
    }
    else {
      if (plVar8[0x10] == 1) {
        LOAcquire();
        uVar3 = plVar8[0x30];
        plVar8[0x30] = uVar3 | plVar8[0x41];
        LORelease();
        uVar3 = plVar8[0x41] & uVar3;
      }
      else {
        LOAcquire();
        uVar3 = plVar8[0x30];
        plVar8[0x30] = uVar3 | 1;
        LORelease();
        uVar3 = uVar3 & 1;
      }
      if (uVar3 != 0) goto LAB_1017a1ec8;
    }
    FUN_10887f8fc(plVar8 + 0x50);
    FUN_10887f8fc(plVar8 + 0x51);
    FUN_10887f8fc(plVar8 + 0x52);
    FUN_10887f8fc(plVar8 + 0x53);
  }
LAB_1017a1ec8:
  lVar2 = *plVar8;
  *plVar8 = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(param_1 + 0x5b8);
  FUN_1017a1f2c(lVar2 + 0x80);
  if (lVar2 != -1) {
    lVar4 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

