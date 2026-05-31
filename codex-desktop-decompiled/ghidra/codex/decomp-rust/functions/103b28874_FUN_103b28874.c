
undefined1  [16] FUN_103b28874(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_a58;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  long lStack_980;
  undefined8 uStack_978;
  undefined8 uStack_900;
  undefined8 uStack_8f0;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_860;
  long lStack_858;
  undefined8 uStack_850;
  undefined1 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long *plStack_7b8;
  undefined8 uStack_780;
  undefined8 uStack_778;
  long lStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_680;
  undefined8 uStack_670;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined1 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long *plStack_538;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_2a8;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_38;
  
  lStack_200 = _malloc(0x1020);
  if (lStack_200 != 0) {
    *(undefined8 *)(lStack_200 + 0x1018) = 0;
    *(undefined8 *)(lStack_200 + 0x1010) = 0;
    lStack_a0 = param_1 << 1;
    *(undefined8 *)(lStack_200 + 0x1008) = 0;
    *(undefined8 *)(lStack_200 + 0x1000) = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_278 = 1;
    uStack_280 = 1;
    uStack_1f8 = 0;
    uStack_180 = 0;
    uStack_170 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_88 = 0;
    uStack_90 = 1;
    plStack_38 = (long *)0x0;
    lStack_e0 = lStack_200;
    lStack_d8 = lStack_200;
    lStack_98 = param_1;
    iVar5 = _posix_memalign(&plStack_38,0x80,0x200);
    plVar1 = plStack_38;
    if ((iVar5 == 0) && (plStack_38 != (long *)0x0)) {
      _memcpy(plStack_38,&uStack_280,0x200);
      lVar3 = *plVar1;
      *plVar1 = lVar3 + 1;
      if (-1 < lVar3) {
        auVar10._8_8_ = plVar1;
        auVar10._0_8_ = plVar1;
        return auVar10;
      }
    }
    else {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b2895c);
    (*pcVar2)();
  }
  uVar6 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1020);
  func_0x000103af993c(unaff_x20 + 0x80);
  __Unwind_Resume(uVar6);
  lVar3 = func_0x000108a07bc4();
  lStack_480 = _malloc(800);
  if (lStack_480 != 0) {
    lStack_320 = lVar3 << 1;
    *(undefined8 *)(lStack_480 + 0x308) = 0;
    *(undefined8 *)(lStack_480 + 0x300) = 0;
    *(undefined8 *)(lStack_480 + 0x318) = 0;
    *(undefined8 *)(lStack_480 + 0x310) = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_4f8 = 1;
    uStack_500 = 1;
    uStack_478 = 0;
    uStack_400 = 0;
    uStack_3f0 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_308 = 0;
    uStack_310 = 1;
    plStack_2a8 = (long *)0x0;
    lStack_360 = lStack_480;
    lStack_358 = lStack_480;
    lStack_318 = lVar3;
    iVar5 = _posix_memalign(&plStack_2a8,0x80,0x200);
    plVar1 = plStack_2a8;
    if ((iVar5 == 0) && (plStack_2a8 != (long *)0x0)) {
      _memcpy(plStack_2a8,&uStack_500,0x200);
      lVar3 = *plVar1;
      *plVar1 = lVar3 + 1;
      if (-1 < lVar3) {
        auVar11._8_8_ = plVar1;
        auVar11._0_8_ = plVar1;
        return auVar11;
      }
    }
    else {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b28a58);
    (*pcVar2)();
  }
  uVar6 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,800);
  func_0x000103afb158(&uStack_500);
  __Unwind_Resume(uVar6);
  func_0x000108a07bc4();
  lStack_700 = _malloc(0x1520);
  if (lStack_700 != 0) {
    *(undefined8 *)(lStack_700 + 0x1518) = 0;
    *(undefined8 *)(lStack_700 + 0x1510) = 0;
    *(undefined8 *)(lStack_700 + 0x1508) = 0;
    *(undefined8 *)(lStack_700 + 0x1500) = 0;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_778 = 1;
    uStack_780 = 1;
    uStack_6f8 = 0;
    uStack_680 = 0;
    uStack_670 = 0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    uStack_598 = 0x80;
    uStack_5a0 = 0x100;
    uStack_588 = 0;
    uStack_590 = 1;
    plStack_538 = (long *)0x0;
    lStack_5e0 = lStack_700;
    lStack_5d8 = lStack_700;
    iVar5 = _posix_memalign(&plStack_538,0x80,0x200);
    plVar1 = plStack_538;
    if ((iVar5 == 0) && (plStack_538 != (long *)0x0)) {
      _memcpy(plStack_538,&uStack_780,0x200);
      lVar3 = *plVar1;
      *plVar1 = lVar3 + 1;
      if (-1 < lVar3) {
        auVar12._8_8_ = plVar1;
        auVar12._0_8_ = plVar1;
        return auVar12;
      }
    }
    else {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b28b60);
    (*pcVar2)();
  }
  uVar6 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1520);
  FUN_103afb410(unaff_x20 + 0x80);
  __Unwind_Resume(uVar6);
  func_0x000108a07bc4();
  lStack_980 = _malloc(0x1520);
  if (lStack_980 != 0) {
    *(undefined8 *)(lStack_980 + 0x1518) = 0;
    *(undefined8 *)(lStack_980 + 0x1510) = 0;
    *(undefined8 *)(lStack_980 + 0x1508) = 0;
    *(undefined8 *)(lStack_980 + 0x1500) = 0;
    uStack_840 = 0;
    uStack_838 = 0;
    uStack_828 = 0;
    uStack_830 = 0;
    uStack_9f8 = 1;
    uStack_a00 = 1;
    uStack_978 = 0;
    uStack_900 = 0;
    uStack_8f0 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_868 = 0;
    uStack_870 = 0;
    uStack_850 = 0;
    uStack_848 = 0;
    uStack_818 = 0x80;
    uStack_820 = 0x100;
    uStack_808 = 0;
    uStack_810 = 1;
    plStack_7b8 = (long *)0x0;
    lStack_860 = lStack_980;
    lStack_858 = lStack_980;
    iVar5 = _posix_memalign(&plStack_7b8,0x80,0x200);
    plVar1 = plStack_7b8;
    if ((iVar5 == 0) && (plStack_7b8 != (long *)0x0)) {
      _memcpy(plStack_7b8,&uStack_a00,0x200);
      lVar3 = *plVar1;
      *plVar1 = lVar3 + 1;
      if (-1 < lVar3) {
        auVar13._8_8_ = plVar1;
        auVar13._0_8_ = plVar1;
        return auVar13;
      }
    }
    else {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b28c68);
    (*pcVar2)();
  }
  uVar6 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1520);
  FUN_103afb05c(unaff_x20 + 0x80);
  __Unwind_Resume(uVar6);
  puVar7 = (undefined8 *)func_0x000108a07bc4();
  bVar4 = *(byte *)(puVar7 + 0xe);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar6 = *puVar7;
      puVar7[1] = uVar6;
      *(undefined1 *)(puVar7 + 0xd) = 0;
LAB_103b28cf4:
      puVar7[2] = uVar6;
      *(undefined1 *)(puVar7 + 4) = 0;
LAB_103b28d04:
      puVar7[3] = uVar6;
LAB_103b28d08:
      puVar7[5] = uVar6;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[7] = uStack_a58;
      puVar7[0xb] = 1;
      puVar7[10] = 1;
      *(undefined1 *)(puVar7 + 0xc) = 0;
      goto LAB_103b28d2c;
    }
    func_0x000108a07af4(&UNK_10b2e5848);
LAB_103b28de4:
    func_0x000108a07b10(&UNK_10b2e5848);
  }
  else {
    if (bVar4 != 3) goto LAB_103b28de4;
    bVar4 = *(byte *)(puVar7 + 0xd);
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        func_0x000108a07af4(&UNK_10b2e5860);
        goto LAB_103b28e50;
      }
      uVar6 = puVar7[1];
      goto LAB_103b28cf4;
    }
    if (bVar4 != 3) {
      func_0x000108a07b10(&UNK_10b2e5860);
      goto LAB_103b28e50;
    }
    bVar4 = *(byte *)(puVar7 + 4);
    if (bVar4 < 3) {
      if (bVar4 != 0) {
        if (bVar4 == 1) {
          func_0x000108a07af4(&UNK_10b2e5878);
        }
        else {
          func_0x000108a07b10(&UNK_10b2e5878);
        }
        goto LAB_103b28e50;
      }
      uVar6 = puVar7[2];
      goto LAB_103b28d04;
    }
    if (bVar4 == 3) {
      uVar6 = puVar7[3];
      goto LAB_103b28d08;
    }
LAB_103b28d2c:
    bVar4 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                      (puVar7 + 5);
    if (bVar4 == 2) {
      uVar8 = 0;
      *(undefined1 *)(puVar7 + 4) = 4;
      uVar9 = 3;
      uVar6 = extraout_x1;
LAB_103b28d80:
      *(undefined1 *)(puVar7 + 0xd) = uVar9;
      *(undefined1 *)(puVar7 + 0xe) = uVar9;
      auVar14._8_8_ = uVar6;
      auVar14._0_8_ = uVar8;
      return auVar14;
    }
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (puVar7 + 5);
    uVar6 = extraout_x1_00;
    if (puVar7[6] != 0) {
      (**(code **)(puVar7[6] + 0x18))(puVar7[7]);
      uVar6 = extraout_x1_01;
    }
    if ((bVar4 & 1) == 0) {
      uVar9 = 1;
      *(undefined1 *)(puVar7 + 4) = 1;
      uVar8 = puVar7[1];
      goto LAB_103b28d80;
    }
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108da0b2d,0x28,&UNK_10b2e5890);
LAB_103b28e50:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b28e54);
  (*pcVar2)();
}

