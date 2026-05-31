
void FUN_10887facc(long param_1,ulong *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *unaff_x19;
  ulong uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  long *plStack_a8;
  long *plStack_48;
  
  uVar10 = *param_2;
  uVar4 = param_2[1];
  if ((((((byte)uVar4 & 1) == 0) &&
       (bVar5 = uVar10 < *(ulong *)(param_1 + 0x20), uVar10 = uVar10 - *(ulong *)(param_1 + 0x20),
       bVar5)) || (uVar10 == 0)) || (pcVar8 = *(char **)(param_1 + 0x10), pcVar8 == (char *)0x0)) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  bVar2 = *(byte *)((long)param_2 + 9);
  lVar11 = *(long *)(pcVar8 + 0x20);
  *(long *)(param_1 + 0x10) = lVar11;
  if ((bVar2 & 1) != 0) {
    cVar3 = *pcVar8;
    *pcVar8 = '\x01';
    pcVar8[1] = (byte)uVar4;
    if (cVar3 == '\x02') {
      unaff_x19 = *(long **)(pcVar8 + 0x10);
      if (*(long *)(pcVar8 + 8) == 0) {
        plStack_48 = unaff_x19;
        __ZN7parking5Inner6unpark17ha73d5c8b03b05591E(unaff_x19 + 2);
        lVar9 = *unaff_x19;
        *unaff_x19 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E(&plStack_48);
        }
      }
      else {
        (**(code **)(*(long *)(pcVar8 + 8) + 8))(unaff_x19);
      }
    }
    *(long *)(param_1 + 0x20) = lVar12 + 1;
    if (uVar10 == 1) {
      return;
    }
    if (lVar11 == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar11 + 0x20);
  }
  uVar7 = func_0x000108a079f0(&UNK_108ce3407,0x11,&UNK_10b2597c0);
  lVar11 = *unaff_x19;
  *unaff_x19 = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E(&plStack_48);
  }
  __Unwind_Resume(uVar7);
  auVar14 = func_0x000108a07bc4();
  lVar12 = auVar14._8_8_;
  lVar11 = auVar14._0_8_;
  if (lVar12 != 0) {
    lVar9 = *(long *)(lVar11 + 0x20);
    pcVar8 = *(char **)(lVar11 + 0x10);
    do {
      lVar9 = lVar9 + 1;
      if (pcVar8 == (char *)0x0) {
        return;
      }
      pcVar13 = *(char **)(pcVar8 + 0x20);
      *(char **)(lVar11 + 0x10) = pcVar13;
      pcVar8[0] = '\x01';
      pcVar8[1] = '\x01';
      if (*pcVar8 == '\x02') {
        plVar1 = *(long **)(pcVar8 + 0x10);
        if (*(long *)(pcVar8 + 8) == 0) {
          plStack_a8 = plVar1;
          __ZN7parking5Inner6unpark17ha73d5c8b03b05591E(plVar1 + 2);
          lVar6 = *plVar1;
          *plVar1 = lVar6 + -1;
          LORelease();
          if (lVar6 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E(&plStack_a8);
          }
        }
        else {
          (**(code **)(*(long *)(pcVar8 + 8) + 8))(plVar1);
        }
      }
      *(long *)(lVar11 + 0x20) = lVar9;
      lVar12 = lVar12 + -1;
      pcVar8 = pcVar13;
    } while (lVar12 != 0);
  }
  return;
}

