
undefined1  [16]
__ZN16codex_app_server12thread_state11ThreadState12set_listener17h004c6e27154b3490E
          (long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined *puStack_280;
  undefined *puStack_278;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_48;
  
  iVar8 = *(int *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  if (iVar8 == 1) {
    FUN_101997860(uVar9);
  }
  *(long *)(param_1 + 0x2d8) = *(long *)(param_1 + 0x2d8) + 1;
  if (*(long *)(param_1 + 0x1b8) != -0x8000000000000000) {
    FUN_1019652f8((undefined8 *)(param_1 + 0x1b8));
  }
  uVar9 = param_5[0x18];
  uVar12 = param_5[0x1b];
  uVar11 = param_5[0x1a];
  *(undefined8 *)(param_1 + 0x280) = param_5[0x19];
  *(undefined8 *)(param_1 + 0x278) = uVar9;
  *(undefined8 *)(param_1 + 0x290) = uVar12;
  *(undefined8 *)(param_1 + 0x288) = uVar11;
  uVar9 = param_5[0x1c];
  uVar12 = param_5[0x1f];
  uVar11 = param_5[0x1e];
  *(undefined8 *)(param_1 + 0x2a0) = param_5[0x1d];
  *(undefined8 *)(param_1 + 0x298) = uVar9;
  *(undefined8 *)(param_1 + 0x2b0) = uVar12;
  *(undefined8 *)(param_1 + 0x2a8) = uVar11;
  uVar9 = param_5[0x10];
  uVar12 = param_5[0x13];
  uVar11 = param_5[0x12];
  *(undefined8 *)(param_1 + 0x240) = param_5[0x11];
  *(undefined8 *)(param_1 + 0x238) = uVar9;
  *(undefined8 *)(param_1 + 0x250) = uVar12;
  *(undefined8 *)(param_1 + 0x248) = uVar11;
  uVar9 = param_5[0x14];
  uVar12 = param_5[0x17];
  uVar11 = param_5[0x16];
  *(undefined8 *)(param_1 + 0x260) = param_5[0x15];
  *(undefined8 *)(param_1 + 600) = uVar9;
  *(undefined8 *)(param_1 + 0x270) = uVar12;
  *(undefined8 *)(param_1 + 0x268) = uVar11;
  uVar9 = param_5[8];
  uVar12 = param_5[0xb];
  uVar11 = param_5[10];
  *(undefined8 *)(param_1 + 0x200) = param_5[9];
  *(undefined8 *)(param_1 + 0x1f8) = uVar9;
  *(undefined8 *)(param_1 + 0x210) = uVar12;
  *(undefined8 *)(param_1 + 0x208) = uVar11;
  uVar9 = param_5[0xc];
  uVar12 = param_5[0xf];
  uVar11 = param_5[0xe];
  *(undefined8 *)(param_1 + 0x220) = param_5[0xd];
  *(undefined8 *)(param_1 + 0x218) = uVar9;
  *(undefined8 *)(param_1 + 0x230) = uVar12;
  *(undefined8 *)(param_1 + 0x228) = uVar11;
  uVar9 = *param_5;
  uVar12 = param_5[3];
  uVar11 = param_5[2];
  *(undefined8 *)(param_1 + 0x1c0) = param_5[1];
  *(undefined8 *)(param_1 + 0x1b8) = uVar9;
  *(undefined8 *)(param_1 + 0x1d0) = uVar12;
  *(undefined8 *)(param_1 + 0x1c8) = uVar11;
  uVar9 = param_5[4];
  uVar12 = param_5[7];
  uVar11 = param_5[6];
  *(undefined8 *)(param_1 + 0x1e0) = param_5[5];
  *(undefined8 *)(param_1 + 0x1d8) = uVar9;
  *(undefined8 *)(param_1 + 0x1f0) = uVar12;
  *(undefined8 *)(param_1 + 0x1e8) = uVar11;
  lVar10 = _malloc(0xd20);
  if (lVar10 == 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xd20);
  }
  else {
    *(undefined8 *)(lVar10 + 0xd18) = 0;
    *(undefined8 *)(lVar10 + 0xd10) = 0;
    *(undefined8 *)(lVar10 + 0xd08) = 0;
    *(undefined8 *)(lVar10 + 0xd00) = 0;
    puStack_278 = (undefined *)0x1;
    puStack_280 = (undefined *)0x1;
    uStack_1f8 = 0;
    uStack_180 = 0;
    uStack_170 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_b8 = 1;
    uStack_c0 = 0;
    uStack_b0 = 0;
    plStack_48 = (long *)0x0;
    lStack_200 = lVar10;
    lStack_e0 = lVar10;
    lStack_d8 = lVar10;
    iVar8 = _posix_memalign(&plStack_48,0x80,0x200);
    plVar5 = plStack_48;
    if ((iVar8 == 0) && (plStack_48 != (long *)0x0)) {
      _memcpy(plStack_48,&puStack_280,0x200);
      lVar10 = *plVar5;
      *plVar5 = lVar10 + 1;
      if (-1 < lVar10) {
        plStack_48 = plVar5;
        FUN_101943eb8((undefined8 *)(param_1 + 0x2e0));
        *(undefined8 *)(param_1 + 0x2e0) = plVar5;
        lVar10 = *param_3;
        do {
          lVar7 = *(long *)(lVar10 + 8);
          while (lVar7 != -1) {
            if (lVar7 < 0) {
              puStack_280 = &UNK_10b269140;
              puStack_278 = &DAT_10192d9a4;
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__108add0bf,&puStack_280,&UNK_10b269150);
              goto LAB_101879d4c;
            }
            lVar1 = lVar7 + 1;
            lVar3 = *(long *)(lVar10 + 8);
            bVar4 = lVar3 == lVar7;
            lVar7 = lVar3;
            if (bVar4) {
              *(long *)(lVar10 + 8) = lVar1;
              if (1 < *(long *)(param_1 + 0x2e8) + 1U) {
                plVar2 = (long *)(*(long *)(param_1 + 0x2e8) + 8);
                lVar7 = *plVar2;
                *plVar2 = lVar7 + -1;
                LORelease();
                if (lVar7 == 1) {
                  DataMemoryBarrier(2,1);
                  _free();
                }
              }
              *(long *)(param_1 + 0x2e8) = lVar10;
              FUN_1019547b0((undefined8 *)(param_1 + 0x178));
              uVar9 = *param_4;
              uVar12 = param_4[3];
              uVar11 = param_4[2];
              *(undefined8 *)(param_1 + 0x180) = param_4[1];
              *(undefined8 *)(param_1 + 0x178) = uVar9;
              *(undefined8 *)(param_1 + 400) = uVar12;
              *(undefined8 *)(param_1 + 0x188) = uVar11;
              *(undefined8 *)(param_1 + 0x198) = param_4[4];
              auVar13._8_8_ = *(undefined8 *)(param_1 + 0x2d8);
              auVar13._0_8_ = plVar5;
              return auVar13;
            }
          }
          InstructionSynchronizationBarrier();
        } while( true );
      }
    }
    else {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    }
  }
LAB_101879d4c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101879d50);
  (*pcVar6)();
}

