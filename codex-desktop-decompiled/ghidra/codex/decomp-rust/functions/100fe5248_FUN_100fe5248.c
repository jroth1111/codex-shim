
bool FUN_100fe5248(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long *plStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  lVar8 = param_1[1];
  if (lVar8 != 0) {
    lVar5 = *(long *)(lVar8 + 8);
    param_1[1] = lVar5;
    if (lVar5 == 0) {
      *param_1 = 0;
    }
    else {
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    plStack_38 = (long *)(lVar8 + -0x10);
    *(long *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    puVar7 = *(ulong **)(lVar8 + 0x18);
    uVar6 = *puVar7;
    uVar3 = uStack_28;
    do {
      uStack_28 = uVar3;
      if ((uVar6 & 0x22) != 0) {
        bVar2 = false;
        uStack_28 = 0;
        goto LAB_100fe5320;
      }
      if ((uVar6 & 1) == 0) {
        if (((uint)uVar6 >> 2 & 1) == 0) {
          if ((long)uVar6 < 0) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe53ac);
            (*pcVar4)();
          }
          uStack_30 = uVar6 + 100;
          bVar2 = true;
        }
        else {
          bVar2 = false;
          uStack_30 = uVar6 | 0x20;
        }
      }
      else {
        bVar2 = false;
        uStack_30 = uVar6 | 0x24;
      }
      uStack_28 = 1;
      uVar3 = uStack_28;
      uStack_28 = 1;
      bVar1 = *puVar7 != uVar6;
      uVar6 = *puVar7;
    } while (bVar1);
    *puVar7 = uStack_30;
LAB_100fe5320:
    if (bVar2) {
      (**(code **)(puVar7[2] + 8))(puVar7);
    }
    if (*puVar7 == 0xcc) {
      *puVar7 = 0x84;
    }
    else {
      (**(code **)(puVar7[2] + 0x20))(puVar7);
    }
    lVar5 = *plStack_38;
    *plStack_38 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9e34a6907af95765E(&plStack_38);
    }
  }
  return lVar8 != 0;
}

