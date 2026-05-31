
void FUN_1011e9ca4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong *puVar15;
  ulong auStack_248 [4];
  undefined1 auStack_228 [56];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  ulong *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  short sStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar3 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  pcVar14 = (char *)param_1[2];
  do {
    lVar10 = *plVar3;
    uVar12 = *(ulong *)(lVar10 + 0x1900);
    while (uVar12 != (plVar3[2] & 0xffffffffffffffe0U)) {
      lVar10 = *(long *)(lVar10 + 0x1908);
      if (lVar10 == 0) {
        return;
      }
      *plVar3 = lVar10;
      InstructionSynchronizationBarrier();
      uVar12 = *(ulong *)(lVar10 + 0x1900);
    }
    lVar8 = plVar3[1];
    if (lVar8 == lVar10) {
      uVar12 = plVar3[2] & 0x1f;
      uVar13 = *(ulong *)(lVar10 + 0x1910) >> uVar12;
    }
    else {
      do {
        if (((*(ulong *)(lVar8 + 0x1910) >> 0x20 & 1) == 0) ||
           ((ulong)plVar3[2] < *(ulong *)(lVar8 + 0x1918))) break;
        if (*(long *)(lVar8 + 0x1908) == 0) {
          uVar9 = func_0x000108a07a20(&UNK_10b23a700);
          FUN_100d81ff8(&uStack_130);
          __Unwind_Resume(uVar9);
          puVar11 = (undefined8 *)func_0x000108a07bc4();
          uStack_170 = 200;
          uStack_168 = 0x1910;
          uStack_138 = 0x1011e9f14;
          uVar4 = *puVar11;
          uVar6 = puVar11[1];
          puVar15 = (ulong *)puVar11[2];
          puStack_160 = (undefined1 *)&uStack_130;
          plStack_158 = plVar5;
          plStack_150 = plVar3;
          uStack_148 = uVar9;
          puStack_140 = &stack0xfffffffffffffff0;
          func_0x000100fc9978(&lStack_1a8,uVar4,uVar6);
          while( true ) {
            if (lStack_1a8 - 7U < 2) {
              return;
            }
            uVar12 = *puVar15;
            *puVar15 = uVar12 - 2;
            LORelease();
            if (uVar12 < 2) break;
            if (lStack_1a8 != 8 && lStack_1a8 != 7) {
              if (lStack_1a8 == 6) {
                FUN_100de8b24(&lStack_1a0);
              }
              else if (lStack_1a8 != 4 || sStack_180 != 0x12) {
                (**(code **)(lStack_1a0 + 0x20))(auStack_188,uStack_198,uStack_190);
              }
            }
            func_0x000100fc9978(&lStack_1a8,uVar4,uVar6);
          }
          puVar11 = (undefined8 *)__ZN3std7process5abort17hdc01e45e25b715e8E();
          uStack_1f0 = 200;
          uStack_1e8 = 0xfffffffffffffffe;
          uStack_1b8 = 0x1011e9ff0;
          uVar9 = *puVar11;
          uVar7 = puVar11[1];
          pcVar14 = (char *)puVar11[2];
          plStack_1e0 = &lStack_1a8;
          puStack_1d8 = puVar15;
          uStack_1d0 = uVar6;
          uStack_1c8 = uVar4;
          ppuStack_1c0 = &puStack_140;
          func_0x000100fc90bc(auStack_248,uVar9,uVar7);
          uVar4 = extraout_x1_03;
          while (auStack_248[0] < 2) {
            if (*pcVar14 == '\0') {
              *pcVar14 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar14,uVar4,1000000000);
            }
            FUN_1060fa678(pcVar14,1,pcVar14);
            if (auStack_248[0] < 2) {
              FUN_100deb62c(auStack_248);
              func_0x000100e3c8d4(auStack_228);
            }
            func_0x000100fc90bc(auStack_248,uVar9,uVar7);
            uVar4 = extraout_x1_04;
          }
          return;
        }
        plVar3[1] = *(long *)(lVar8 + 0x1908);
        *(undefined8 *)(lVar8 + 0x1900) = 0;
        *(undefined8 *)(lVar8 + 0x1910) = 0;
        *(undefined8 *)(lVar8 + 0x1908) = 0;
        lVar10 = *plVar5;
        *(long *)(lVar8 + 0x1900) = *(long *)(lVar10 + 0x1900) + 0x20;
        plVar1 = (long *)(lVar10 + 0x1908);
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar8;
        }
        else {
          *(long *)(lVar8 + 0x1900) = *(long *)(lVar10 + 0x1900) + 0x20;
          lVar2 = *(long *)(lVar10 + 0x1908);
          if (lVar2 == 0) {
            *(long *)(lVar10 + 0x1908) = lVar8;
          }
          else {
            *(long *)(lVar8 + 0x1900) = *(long *)(lVar2 + 0x1900) + 0x20;
            if (*(long *)(lVar2 + 0x1908) == 0) {
              *(long *)(lVar2 + 0x1908) = lVar8;
            }
            else {
              _free();
              param_2 = extraout_x1;
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar8 = plVar3[1];
      } while (lVar8 != *plVar3);
      lVar10 = *plVar3;
      uVar12 = plVar3[2] & 0x1f;
      uVar13 = *(ulong *)(lVar10 + 0x1910) >> uVar12;
    }
    if ((uVar13 & 1) == 0) {
      return;
    }
    puVar11 = (undefined8 *)(lVar10 + uVar12 * 200);
    uStack_128 = puVar11[1];
    uStack_130 = *puVar11;
    uStack_118 = puVar11[3];
    uStack_120 = puVar11[2];
    uStack_108 = puVar11[5];
    uStack_110 = puVar11[4];
    uStack_f8 = puVar11[7];
    uStack_100 = puVar11[6];
    uStack_e8 = puVar11[9];
    uStack_f0 = puVar11[8];
    uStack_d8 = puVar11[0xb];
    uStack_e0 = puVar11[10];
    uStack_c8 = puVar11[0xd];
    uStack_d0 = puVar11[0xc];
    uStack_b8 = puVar11[0xf];
    uStack_c0 = puVar11[0xe];
    uStack_a8 = puVar11[0x11];
    uStack_b0 = puVar11[0x10];
    uStack_98 = puVar11[0x13];
    uStack_a0 = puVar11[0x12];
    uStack_88 = puVar11[0x15];
    uStack_90 = puVar11[0x14];
    uStack_78 = puVar11[0x17];
    uStack_80 = puVar11[0x16];
    uStack_70 = puVar11[0x18];
    if ((byte)uStack_130 - 0xf < 2) {
      return;
    }
    plVar3[2] = plVar3[2] + 1;
    if (*pcVar14 == '\0') {
      *pcVar14 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar14,param_2,1000000000)
      ;
    }
    FUN_1060fa678(pcVar14,1,pcVar14);
    param_2 = extraout_x1_00;
    if (1 < (byte)uStack_130 - 0xf) {
      if ((byte)uStack_130 == 0xe) {
        FUN_100df5738(&uStack_128);
        param_2 = extraout_x1_01;
      }
      else {
        FUN_100df72b0(&uStack_130);
        param_2 = extraout_x1_02;
      }
    }
  } while( true );
}

