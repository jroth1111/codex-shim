
void FUN_100fca908(long *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  ulong in_xzr;
  undefined1 auVar18 [16];
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 auStack_880 [496];
  
  uVar14 = param_2 & 0xffffffffffffffe0;
  lVar3 = *param_1;
  uVar4 = uVar14 - *(long *)(lVar3 + 0x2400);
  if (uVar4 != 0) {
    plVar16 = (long *)(lVar3 + 0x2400);
    bVar2 = (param_2 & 0x1f) < uVar4 >> 5;
    do {
      while( true ) {
        lVar17 = *(long *)(lVar3 + 0x2408);
        if (*(long *)(lVar3 + 0x2408) == 0) {
          lVar17 = *plVar16;
          lVar6 = _malloc(0x2420);
          if (lVar6 == 0) {
            auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2420);
            plVar16 = auVar18._0_8_;
            uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
            uVar4 = uVar14 - *(long *)(*plVar16 + 0x6200);
            if (uVar4 == 0) {
              return;
            }
            bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
            lVar3 = *plVar16;
            goto LAB_100fcab1c;
          }
          *(long *)(lVar6 + 0x2400) = lVar17 + 0x20;
          *(undefined8 *)(lVar6 + 0x2408) = 0;
          *(undefined8 *)(lVar6 + 0x2418) = 0;
          *(undefined8 *)(lVar6 + 0x2410) = 0;
          lVar17 = *(long *)(lVar3 + 0x2408);
          if (lVar17 == 0) {
            *(long *)(lVar3 + 0x2408) = lVar6;
            lVar17 = lVar6;
          }
          else {
            *(long *)(lVar6 + 0x2400) = *(long *)(lVar17 + 0x2400) + 0x20;
            lVar12 = *(long *)(lVar17 + 0x2408);
            if (lVar12 == 0) {
              *(long *)(lVar17 + 0x2408) = lVar6;
            }
            else {
              do {
                InstructionSynchronizationBarrier();
                *(long *)(lVar6 + 0x2400) = *(long *)(lVar12 + 0x2400) + 0x20;
                plVar16 = (long *)(lVar12 + 0x2408);
                lVar12 = *plVar16;
              } while (lVar12 != 0);
              *plVar16 = lVar6;
            }
          }
        }
        if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x2410) == -1)) && (*param_1 == lVar3))
        break;
        bVar2 = false;
        InstructionSynchronizationBarrier();
        plVar16 = (long *)(lVar17 + 0x2400);
        lVar3 = lVar17;
        if (*(ulong *)(lVar17 + 0x2400) == uVar14) {
          return;
        }
      }
      *param_1 = lVar17;
      uVar4 = param_1[1];
      param_1[1] = uVar4 | in_xzr;
      LORelease();
      *(ulong *)(lVar3 + 0x2418) = uVar4;
      *(ulong *)(lVar3 + 0x2410) = *(ulong *)(lVar3 + 0x2410) | 0x100000000;
      LORelease();
      bVar2 = true;
      InstructionSynchronizationBarrier();
      plVar16 = (long *)(lVar17 + 0x2400);
      lVar3 = lVar17;
    } while (*(ulong *)(lVar17 + 0x2400) != uVar14);
  }
  return;
LAB_100fcab1c:
  lVar17 = *(long *)(lVar3 + 0x6208);
  if (*(long *)(lVar3 + 0x6208) == 0) {
    lVar17 = *(long *)(lVar3 + 0x6200);
    lVar6 = _malloc(0x6220);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6220);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x600);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcac80;
    }
    *(long *)(lVar6 + 0x6200) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x6208) = 0;
    *(undefined8 *)(lVar6 + 0x6218) = 0;
    *(undefined8 *)(lVar6 + 0x6210) = 0;
    lVar17 = *(long *)(lVar3 + 0x6208);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x6208) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x6200) = *(long *)(lVar17 + 0x6200) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x6208);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x6208) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x6200) = *(long *)(lVar12 + 0x6200) + 0x20;
          plVar13 = (long *)(lVar12 + 0x6208);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x6210) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x6218) = uVar4;
    *(ulong *)(lVar3 + 0x6210) = *(ulong *)(lVar3 + 0x6210) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x6200);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x6200);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcab1c;
LAB_100fcac80:
  lVar17 = *(long *)(lVar3 + 0x608);
  if (*(long *)(lVar3 + 0x608) == 0) {
    lVar17 = *(long *)(lVar3 + 0x600);
    lVar6 = _malloc(0x620);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x620);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0xd00);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcade4;
    }
    *(long *)(lVar6 + 0x600) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x608) = 0;
    *(undefined8 *)(lVar6 + 0x618) = 0;
    *(undefined8 *)(lVar6 + 0x610) = 0;
    lVar17 = *(long *)(lVar3 + 0x608);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x608) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x600) = *(long *)(lVar17 + 0x600) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x608);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x608) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x600) = *(long *)(lVar12 + 0x600) + 0x20;
          plVar13 = (long *)(lVar12 + 0x608);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x610) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x618) = uVar4;
    *(ulong *)(lVar3 + 0x610) = *(ulong *)(lVar3 + 0x610) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x600);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x600);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcac80;
LAB_100fcade4:
  lVar17 = *(long *)(lVar3 + 0xd08);
  if (*(long *)(lVar3 + 0xd08) == 0) {
    lVar17 = *(long *)(lVar3 + 0xd00);
    lVar6 = _malloc(0xd20);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xd20);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x4100);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcaf68;
    }
    *(long *)(lVar6 + 0xd00) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0xd08) = 0;
    *(undefined8 *)(lVar6 + 0xd18) = 0;
    *(undefined8 *)(lVar6 + 0xd10) = 0;
    lVar17 = *(long *)(lVar3 + 0xd08);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0xd08) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0xd00) = *(long *)(lVar17 + 0xd00) + 0x20;
      lVar12 = *(long *)(lVar17 + 0xd08);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0xd08) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0xd00) = *(long *)(lVar12 + 0xd00) + 0x20;
          plVar13 = (long *)(lVar12 + 0xd08);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0xd10) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0xd18) = uVar4;
    *(ulong *)(lVar3 + 0xd10) = *(ulong *)(lVar3 + 0xd10) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xd00);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xd00);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcade4;
LAB_100fcaf68:
  lVar17 = *(long *)(lVar3 + 0x4108);
  if (*(long *)(lVar3 + 0x4108) == 0) {
    lVar17 = *(long *)(lVar3 + 0x4100);
    lVar6 = _malloc(0x4120);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x4120);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x1600);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb0ec;
    }
    *(long *)(lVar6 + 0x4100) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x4108) = 0;
    *(undefined8 *)(lVar6 + 0x4118) = 0;
    *(undefined8 *)(lVar6 + 0x4110) = 0;
    lVar17 = *(long *)(lVar3 + 0x4108);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x4108) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x4100) = *(long *)(lVar17 + 0x4100) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x4108);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x4108) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x4100) = *(long *)(lVar12 + 0x4100) + 0x20;
          plVar13 = (long *)(lVar12 + 0x4108);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x4110) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x4118) = uVar4;
    *(ulong *)(lVar3 + 0x4110) = *(ulong *)(lVar3 + 0x4110) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x4100);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x4100);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcaf68;
LAB_100fcb0ec:
  lVar17 = *(long *)(lVar3 + 0x1608);
  if (*(long *)(lVar3 + 0x1608) == 0) {
    lVar17 = *(long *)(lVar3 + 0x1600);
    lVar6 = _malloc(0x1620);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1620);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x1000);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb260;
    }
    *(long *)(lVar6 + 0x1600) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x1608) = 0;
    *(undefined8 *)(lVar6 + 0x1618) = 0;
    *(undefined8 *)(lVar6 + 0x1610) = 0;
    lVar17 = *(long *)(lVar3 + 0x1608);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x1608) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x1600) = *(long *)(lVar17 + 0x1600) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x1608);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x1608) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x1600) = *(long *)(lVar12 + 0x1600) + 0x20;
          plVar13 = (long *)(lVar12 + 0x1608);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x1610) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x1618) = uVar4;
    *(ulong *)(lVar3 + 0x1610) = *(ulong *)(lVar3 + 0x1610) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1600);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1600);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb0ec;
LAB_100fcb260:
  lVar17 = *(long *)(lVar3 + 0x1008);
  if (*(long *)(lVar3 + 0x1008) == 0) {
    lVar17 = *(long *)(lVar3 + 0x1000);
    lVar6 = _malloc(0x1020);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1020);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x500);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb3c4;
    }
    *(long *)(lVar6 + 0x1000) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x1008) = 0;
    *(undefined8 *)(lVar6 + 0x1018) = 0;
    *(undefined8 *)(lVar6 + 0x1010) = 0;
    lVar17 = *(long *)(lVar3 + 0x1008);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x1008) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x1000) = *(long *)(lVar17 + 0x1000) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x1008);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x1008) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x1000) = *(long *)(lVar12 + 0x1000) + 0x20;
          plVar13 = (long *)(lVar12 + 0x1008);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x1010) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x1018) = uVar4;
    *(ulong *)(lVar3 + 0x1010) = *(ulong *)(lVar3 + 0x1010) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1000);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1000);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb260;
LAB_100fcb3c4:
  lVar17 = *(long *)(lVar3 + 0x508);
  if (*(long *)(lVar3 + 0x508) == 0) {
    lVar17 = *(long *)(lVar3 + 0x500);
    lVar6 = _malloc(0x520);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x520);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x6a00);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb548;
    }
    *(long *)(lVar6 + 0x500) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x508) = 0;
    *(undefined8 *)(lVar6 + 0x518) = 0;
    *(undefined8 *)(lVar6 + 0x510) = 0;
    lVar17 = *(long *)(lVar3 + 0x508);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x508) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x500) = *(long *)(lVar17 + 0x500) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x508);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x508) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x500) = *(long *)(lVar12 + 0x500) + 0x20;
          plVar13 = (long *)(lVar12 + 0x508);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x510) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x518) = uVar4;
    *(ulong *)(lVar3 + 0x510) = *(ulong *)(lVar3 + 0x510) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x500);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x500);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb3c4;
LAB_100fcb548:
  lVar17 = *(long *)(lVar3 + 0x6a08);
  if (*(long *)(lVar3 + 0x6a08) == 0) {
    lVar17 = *(long *)(lVar3 + 0x6a00);
    lVar6 = _malloc(0x6a20);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6a20);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x1500);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb6cc;
    }
    *(long *)(lVar6 + 0x6a00) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x6a08) = 0;
    *(undefined8 *)(lVar6 + 0x6a18) = 0;
    *(undefined8 *)(lVar6 + 0x6a10) = 0;
    lVar17 = *(long *)(lVar3 + 0x6a08);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x6a08) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x6a00) = *(long *)(lVar17 + 0x6a00) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x6a08);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x6a08) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x6a00) = *(long *)(lVar12 + 0x6a00) + 0x20;
          plVar13 = (long *)(lVar12 + 0x6a08);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x6a10) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x6a18) = uVar4;
    *(ulong *)(lVar3 + 0x6a10) = *(ulong *)(lVar3 + 0x6a10) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x6a00);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x6a00);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb548;
LAB_100fcb6cc:
  lVar17 = *(long *)(lVar3 + 0x1508);
  if (*(long *)(lVar3 + 0x1508) == 0) {
    lVar17 = *(long *)(lVar3 + 0x1500);
    lVar6 = _malloc(0x1520);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1520);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x1900);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb850;
    }
    *(long *)(lVar6 + 0x1500) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x1508) = 0;
    *(undefined8 *)(lVar6 + 0x1518) = 0;
    *(undefined8 *)(lVar6 + 0x1510) = 0;
    lVar17 = *(long *)(lVar3 + 0x1508);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x1508) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x1500) = *(long *)(lVar17 + 0x1500) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x1508);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x1508) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x1500) = *(long *)(lVar12 + 0x1500) + 0x20;
          plVar13 = (long *)(lVar12 + 0x1508);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x1510) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x1518) = uVar4;
    *(ulong *)(lVar3 + 0x1510) = *(ulong *)(lVar3 + 0x1510) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1500);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1500);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb6cc;
LAB_100fcb850:
  lVar17 = *(long *)(lVar3 + 0x1908);
  if (*(long *)(lVar3 + 0x1908) == 0) {
    lVar17 = *(long *)(lVar3 + 0x1900);
    lVar6 = _malloc(0x1920);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1920);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x700);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcb9b4;
    }
    *(long *)(lVar6 + 0x1900) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x1908) = 0;
    *(undefined8 *)(lVar6 + 0x1918) = 0;
    *(undefined8 *)(lVar6 + 0x1910) = 0;
    lVar17 = *(long *)(lVar3 + 0x1908);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x1908) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x1900) = *(long *)(lVar17 + 0x1900) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x1908);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x1908) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x1900) = *(long *)(lVar12 + 0x1900) + 0x20;
          plVar13 = (long *)(lVar12 + 0x1908);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x1910) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x1918) = uVar4;
    *(ulong *)(lVar3 + 0x1910) = *(ulong *)(lVar3 + 0x1910) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1900);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x1900);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb850;
LAB_100fcb9b4:
  lVar17 = *(long *)(lVar3 + 0x708);
  if (*(long *)(lVar3 + 0x708) == 0) {
    lVar17 = *(long *)(lVar3 + 0x700);
    lVar6 = _malloc(0x720);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x720);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0xb00);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcbb18;
    }
    *(long *)(lVar6 + 0x700) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x708) = 0;
    *(undefined8 *)(lVar6 + 0x718) = 0;
    *(undefined8 *)(lVar6 + 0x710) = 0;
    lVar17 = *(long *)(lVar3 + 0x708);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x708) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x700) = *(long *)(lVar17 + 0x700) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x708);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x708) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x700) = *(long *)(lVar12 + 0x700) + 0x20;
          plVar13 = (long *)(lVar12 + 0x708);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x710) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x718) = uVar4;
    *(ulong *)(lVar3 + 0x710) = *(ulong *)(lVar3 + 0x710) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x700);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x700);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcb9b4;
LAB_100fcbb18:
  lVar17 = *(long *)(lVar3 + 0xb08);
  if (*(long *)(lVar3 + 0xb08) == 0) {
    lVar17 = *(long *)(lVar3 + 0xb00);
    lVar6 = _malloc(0xb20);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xb20);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0xe00);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcbc7c;
    }
    *(long *)(lVar6 + 0xb00) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0xb08) = 0;
    *(undefined8 *)(lVar6 + 0xb18) = 0;
    *(undefined8 *)(lVar6 + 0xb10) = 0;
    lVar17 = *(long *)(lVar3 + 0xb08);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0xb08) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0xb00) = *(long *)(lVar17 + 0xb00) + 0x20;
      lVar12 = *(long *)(lVar17 + 0xb08);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0xb08) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0xb00) = *(long *)(lVar12 + 0xb00) + 0x20;
          plVar13 = (long *)(lVar12 + 0xb08);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0xb10) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0xb18) = uVar4;
    *(ulong *)(lVar3 + 0xb10) = *(ulong *)(lVar3 + 0xb10) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xb00);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xb00);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcbb18;
LAB_100fcbc7c:
  lVar17 = *(long *)(lVar3 + 0xe08);
  if (*(long *)(lVar3 + 0xe08) == 0) {
    lVar17 = *(long *)(lVar3 + 0xe00);
    lVar6 = _malloc(0xe20);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xe20);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x2500);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcbe00;
    }
    *(long *)(lVar6 + 0xe00) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0xe08) = 0;
    *(undefined8 *)(lVar6 + 0xe18) = 0;
    *(undefined8 *)(lVar6 + 0xe10) = 0;
    lVar17 = *(long *)(lVar3 + 0xe08);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0xe08) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0xe00) = *(long *)(lVar17 + 0xe00) + 0x20;
      lVar12 = *(long *)(lVar17 + 0xe08);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0xe08) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0xe00) = *(long *)(lVar12 + 0xe00) + 0x20;
          plVar13 = (long *)(lVar12 + 0xe08);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0xe10) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0xe18) = uVar4;
    *(ulong *)(lVar3 + 0xe10) = *(ulong *)(lVar3 + 0xe10) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xe00);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xe00);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcbc7c;
LAB_100fcbe00:
  lVar17 = *(long *)(lVar3 + 0x2508);
  if (*(long *)(lVar3 + 0x2508) == 0) {
    lVar17 = *(long *)(lVar3 + 0x2500);
    lVar6 = _malloc(0x2520);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2520);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x200);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcbf64;
    }
    *(long *)(lVar6 + 0x2500) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x2508) = 0;
    *(undefined8 *)(lVar6 + 0x2518) = 0;
    *(undefined8 *)(lVar6 + 0x2510) = 0;
    lVar17 = *(long *)(lVar3 + 0x2508);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x2508) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x2500) = *(long *)(lVar17 + 0x2500) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x2508);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x2508) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x2500) = *(long *)(lVar12 + 0x2500) + 0x20;
          plVar13 = (long *)(lVar12 + 0x2508);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x2510) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x2518) = uVar4;
    *(ulong *)(lVar3 + 0x2510) = *(ulong *)(lVar3 + 0x2510) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x2500);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x2500);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcbe00;
LAB_100fcbf64:
  lVar17 = *(long *)(lVar3 + 0x208);
  if (*(long *)(lVar3 + 0x208) == 0) {
    lVar17 = *(long *)(lVar3 + 0x200);
    lVar6 = _malloc(0x220);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x4200);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcc0e8;
    }
    *(long *)(lVar6 + 0x200) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x208) = 0;
    *(undefined8 *)(lVar6 + 0x218) = 0;
    *(undefined8 *)(lVar6 + 0x210) = 0;
    lVar17 = *(long *)(lVar3 + 0x208);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x208) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x200) = *(long *)(lVar17 + 0x200) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x208);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x208) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x200) = *(long *)(lVar12 + 0x200) + 0x20;
          plVar13 = (long *)(lVar12 + 0x208);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x210) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x218) = uVar4;
    *(ulong *)(lVar3 + 0x210) = *(ulong *)(lVar3 + 0x210) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x200);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x200);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcbf64;
LAB_100fcc0e8:
  lVar17 = *(long *)(lVar3 + 0x4208);
  if (*(long *)(lVar3 + 0x4208) == 0) {
    lVar17 = *(long *)(lVar3 + 0x4200);
    lVar6 = _malloc(0x4220);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x4220);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0x300);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcc24c;
    }
    *(long *)(lVar6 + 0x4200) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x4208) = 0;
    *(undefined8 *)(lVar6 + 0x4218) = 0;
    *(undefined8 *)(lVar6 + 0x4210) = 0;
    lVar17 = *(long *)(lVar3 + 0x4208);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x4208) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x4200) = *(long *)(lVar17 + 0x4200) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x4208);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x4208) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x4200) = *(long *)(lVar12 + 0x4200) + 0x20;
          plVar13 = (long *)(lVar12 + 0x4208);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x4210) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x4218) = uVar4;
    *(ulong *)(lVar3 + 0x4210) = *(ulong *)(lVar3 + 0x4210) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x4200);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x4200);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcc0e8;
LAB_100fcc24c:
  lVar17 = *(long *)(lVar3 + 0x308);
  if (*(long *)(lVar3 + 0x308) == 0) {
    lVar17 = *(long *)(lVar3 + 0x300);
    lVar6 = _malloc(800);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,800);
      plVar16 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(long *)(*plVar16 + 0xf00);
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      lVar3 = *plVar16;
      goto LAB_100fcc3b0;
    }
    *(long *)(lVar6 + 0x300) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0x308) = 0;
    *(undefined8 *)(lVar6 + 0x318) = 0;
    *(undefined8 *)(lVar6 + 0x310) = 0;
    lVar17 = *(long *)(lVar3 + 0x308);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0x308) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0x300) = *(long *)(lVar17 + 0x300) + 0x20;
      lVar12 = *(long *)(lVar17 + 0x308);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0x308) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0x300) = *(long *)(lVar12 + 0x300) + 0x20;
          plVar13 = (long *)(lVar12 + 0x308);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0x310) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0x318) = uVar4;
    *(ulong *)(lVar3 + 0x310) = *(ulong *)(lVar3 + 0x310) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x300);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0x300);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcc24c;
LAB_100fcc3b0:
  lVar17 = *(long *)(lVar3 + 0xf08);
  if (*(long *)(lVar3 + 0xf08) == 0) {
    lVar17 = *(long *)(lVar3 + 0xf00);
    lVar6 = _malloc(0xf20);
    if (lVar6 == 0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xf20);
      puVar7 = auVar18._0_8_;
      uVar14 = auVar18._8_8_ & 0xffffffffffffffe0;
      uVar4 = uVar14 - *(ulong *)*puVar7;
      if (uVar4 == 0) {
        return;
      }
      bVar2 = (auVar18._8_8_ & 0x1f) < uVar4 >> 5;
      puVar8 = (ulong *)*puVar7;
      goto LAB_100fcc50c;
    }
    *(long *)(lVar6 + 0xf00) = lVar17 + 0x20;
    *(undefined8 *)(lVar6 + 0xf08) = 0;
    *(undefined8 *)(lVar6 + 0xf18) = 0;
    *(undefined8 *)(lVar6 + 0xf10) = 0;
    lVar17 = *(long *)(lVar3 + 0xf08);
    if (lVar17 == 0) {
      *(long *)(lVar3 + 0xf08) = lVar6;
      lVar17 = lVar6;
    }
    else {
      *(long *)(lVar6 + 0xf00) = *(long *)(lVar17 + 0xf00) + 0x20;
      lVar12 = *(long *)(lVar17 + 0xf08);
      if (lVar12 == 0) {
        *(long *)(lVar17 + 0xf08) = lVar6;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          *(long *)(lVar6 + 0xf00) = *(long *)(lVar12 + 0xf00) + 0x20;
          plVar13 = (long *)(lVar12 + 0xf08);
          lVar12 = *plVar13;
        } while (lVar12 != 0);
        *plVar13 = lVar6;
      }
    }
  }
  if (((bool)(bVar2 & (int)*(undefined8 *)(lVar3 + 0xf10) == -1)) && (*plVar16 == lVar3)) {
    *plVar16 = lVar17;
    uVar4 = plVar16[1];
    plVar16[1] = uVar4 | in_xzr;
    LORelease();
    *(ulong *)(lVar3 + 0xf18) = uVar4;
    *(ulong *)(lVar3 + 0xf10) = *(ulong *)(lVar3 + 0xf10) | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xf00);
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *(ulong *)(lVar17 + 0xf00);
  }
  lVar3 = lVar17;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcc3b0;
LAB_100fcc50c:
  puVar10 = (ulong *)puVar8[1];
  if ((ulong *)puVar8[1] == (ulong *)0x0) {
    uVar4 = *puVar8;
    puVar9 = (ulong *)_malloc(0x20);
    if (puVar9 == (ulong *)0x0) {
      auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      lVar3 = auVar18._8_8_;
      puVar7 = auVar18._0_8_;
      bVar5 = *(byte *)(lVar3 + 0x478);
      if (bVar5 < 2) {
        if (bVar5 == 0) {
          plVar16 = *(long **)(lVar3 + 0x1f8);
          *(undefined1 *)(lVar3 + 0x479) = 1;
          _memcpy(lVar3 + 0x200,lVar3,0x1f8);
          *(long **)(lVar3 + 0x3f8) = plVar16;
          *(undefined1 *)(lVar3 + 0x470) = 0;
LAB_100fcc67c:
          *(long **)(lVar3 + 0x400) = plVar16;
          *(long **)(lVar3 + 0x408) = plVar16;
          uVar4 = 1;
          *(undefined8 *)(lVar3 + 0x410) = 1;
          *(undefined1 *)(lVar3 + 0x428) = 0;
LAB_100fcc698:
          *(long **)(lVar3 + 0x418) = plVar16;
          *(ulong *)(lVar3 + 0x420) = uVar4;
          lVar17 = *plVar16;
          if (*(ulong *)(lVar17 + 0x1e8) < uVar4) {
LAB_100fcc6b0:
            *(undefined1 *)(lVar3 + 0x428) = 1;
LAB_100fcc784:
            *(undefined1 *)(lVar3 + 0x470) = 1;
            *(undefined1 *)(lVar3 + 0x479) = 0;
            uVar15 = *(undefined8 *)(lVar3 + 0x200);
            _memcpy(auStack_880,lVar3 + 0x208,0x1f0);
          }
          else {
LAB_100fcc6f8:
            uStack_a70 = 0;
            uStack_a68 = 0;
            *(long *)(lVar3 + 0x430) = lVar17 + 0x1c0;
            *(undefined8 *)(lVar3 + 0x438) = 0;
            *(undefined8 *)(lVar3 + 0x450) = 0;
            *(undefined8 *)(lVar3 + 0x448) = 0;
            *(undefined8 *)(lVar3 + 0x440) = uStack_a78;
            *(ulong *)(lVar3 + 0x458) = uVar4;
            *(ulong *)(lVar3 + 0x460) = uVar4;
            *(undefined1 *)(lVar3 + 0x468) = 0;
LAB_100fcc720:
            bVar5 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                              (lVar3 + 0x430,param_3);
            if (bVar5 == 2) {
              *(undefined1 *)(lVar3 + 0x428) = 4;
              uVar11 = 3;
              *(undefined1 *)(lVar3 + 0x470) = 3;
              *puVar7 = 0x8000000000000045;
              goto LAB_100fcc7c0;
            }
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (lVar3 + 0x430);
            if (*(long *)(lVar3 + 0x438) != 0) {
              (**(code **)(*(long *)(lVar3 + 0x438) + 0x18))(*(undefined8 *)(lVar3 + 0x440));
            }
            *(undefined1 *)(lVar3 + 0x428) = 1;
            if ((bVar5 & 1) != 0) goto LAB_100fcc784;
            plVar16 = *(long **)(lVar3 + 0x400);
            *(undefined1 *)(lVar3 + 0x470) = 1;
            *(undefined1 *)(lVar3 + 0x479) = 0;
            _memcpy(&uStack_a78,lVar3 + 0x200,0x1f8);
            lVar6 = *plVar16;
            LOAcquire();
            uVar4 = *(ulong *)(lVar6 + 0x88);
            *(ulong *)(lVar6 + 0x88) = uVar4 + 1;
            lVar17 = FUN_100fca4a4(lVar6 + 0x80,uVar4);
            _memcpy(lVar17 + (uVar4 & 0x1f) * 0x1f8,&uStack_a78,0x1f8);
            *(ulong *)(lVar17 + 0x3f10) = *(ulong *)(lVar17 + 0x3f10) | 1L << (uVar4 & 0x1f);
            LORelease();
            puVar8 = (ulong *)(lVar6 + 0x110);
            LOAcquire();
            uVar4 = *puVar8;
            *puVar8 = uVar4 | 2;
            LORelease();
            if (uVar4 == 0) {
              lVar17 = *(long *)(lVar6 + 0x100);
              *(undefined8 *)(lVar6 + 0x100) = 0;
              *puVar8 = in_xzr;
              LORelease();
              if (lVar17 != 0) {
                (**(code **)(lVar17 + 8))(*(undefined8 *)(lVar6 + 0x108));
              }
            }
            uVar15 = 0x8000000000000044;
          }
          *(undefined1 *)(lVar3 + 0x479) = 0;
          *puVar7 = uVar15;
          _memcpy(puVar7 + 1,auStack_880,0x1f0);
          uVar11 = 1;
LAB_100fcc7c0:
          *(undefined1 *)(lVar3 + 0x478) = uVar11;
          return;
        }
        func_0x000108a07af4(&UNK_10b23a730);
LAB_100fcc898:
        func_0x000108a07b10(&UNK_10b23a730);
      }
      else {
        if (bVar5 != 3) goto LAB_100fcc898;
        bVar5 = *(byte *)(lVar3 + 0x470);
        if (1 < bVar5) {
          if (bVar5 != 3) {
            func_0x000108a07b10(&UNK_10b23a748);
            goto LAB_100fcc8e8;
          }
          bVar5 = *(byte *)(lVar3 + 0x428);
          if (bVar5 < 3) {
            if (bVar5 != 0) {
              if (bVar5 == 1) {
                func_0x000108a07af4(&UNK_10b23a718);
              }
              else {
                func_0x000108a07b10(&UNK_10b23a718);
              }
              goto LAB_100fcc8e8;
            }
            plVar16 = *(long **)(lVar3 + 0x408);
            uVar4 = *(ulong *)(lVar3 + 0x410);
            goto LAB_100fcc698;
          }
          if (bVar5 != 3) goto LAB_100fcc720;
          uVar4 = *(ulong *)(lVar3 + 0x420);
          lVar17 = **(long **)(lVar3 + 0x418);
          if (uVar4 <= *(ulong *)(lVar17 + 0x1e8)) goto LAB_100fcc6f8;
          goto LAB_100fcc6b0;
        }
        if (bVar5 == 0) {
          plVar16 = *(long **)(lVar3 + 0x3f8);
          goto LAB_100fcc67c;
        }
      }
      func_0x000108a07af4(&UNK_10b23a748);
LAB_100fcc8e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fcc8ec);
      (*pcVar1)();
    }
    *puVar9 = uVar4 + 0x20;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar10 = (ulong *)puVar8[1];
    if (puVar10 == (ulong *)0x0) {
      puVar8[1] = (ulong)puVar9;
      puVar10 = puVar9;
    }
    else {
      *puVar9 = *puVar10 + 0x20;
      plVar16 = (long *)puVar10[1];
      if (plVar16 == (long *)0x0) {
        puVar10[1] = (ulong)puVar9;
      }
      else {
        do {
          InstructionSynchronizationBarrier();
          plVar13 = plVar16 + 1;
          *puVar9 = *plVar16 + 0x20;
          plVar16 = (long *)*plVar13;
        } while (plVar16 != (long *)0x0);
        *plVar13 = (long)puVar9;
      }
    }
  }
  if (((bool)(bVar2 & (int)puVar8[2] == -1)) && ((ulong *)*puVar7 == puVar8)) {
    *puVar7 = puVar10;
    uVar4 = puVar7[1];
    puVar7[1] = uVar4 | in_xzr;
    LORelease();
    puVar8[3] = uVar4;
    puVar8[2] = puVar8[2] | 0x100000000;
    LORelease();
    bVar2 = true;
    InstructionSynchronizationBarrier();
    uVar4 = *puVar10;
  }
  else {
    bVar2 = false;
    InstructionSynchronizationBarrier();
    uVar4 = *puVar10;
  }
  puVar8 = puVar10;
  if (uVar4 == uVar14) {
    return;
  }
  goto LAB_100fcc50c;
}

