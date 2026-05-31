
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __ZN9codex_tui3tui15frame_requester14FrameRequester14schedule_frame17h8fe09e615184c7a7E
                 (long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined1 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long **pplVar15;
  ulong uVar16;
  long *plVar17;
  ulong in_xzr;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long **pplStack_780;
  undefined *puStack_778;
  undefined *puStack_770;
  undefined8 uStack_768;
  long *plStack_760;
  long **pplStack_758;
  undefined4 uStack_750;
  long lStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_680;
  undefined8 uStack_670;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_618;
  long lStack_610;
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
  long lStack_560;
  long *plStack_558;
  undefined1 *puStack_550;
  undefined1 auStack_548 [232];
  long *plStack_460;
  undefined8 uStack_458;
  undefined4 uStack_448;
  undefined1 uStack_43f;
  undefined1 auStack_438 [288];
  long *aplStack_318 [2];
  undefined1 auStack_308 [96];
  undefined1 auStack_2a8 [136];
  undefined1 auStack_220 [33];
  char cStack_1ff;
  undefined1 auStack_1f4 [4];
  undefined1 auStack_1f0 [272];
  long *plStack_e0;
  undefined1 uStack_d1;
  
  auVar19 = func_0x000106032954(8);
  lVar13 = *param_1;
  uVar5 = *(ulong *)(lVar13 + 0x1c0);
  while( true ) {
    if ((uVar5 & 1) != 0) {
      return auVar19._0_8_;
    }
    if (uVar5 == 0xfffffffffffffffe) break;
    uVar16 = uVar5 + 2;
    uVar2 = *(ulong *)(lVar13 + 0x1c0);
    bVar4 = uVar2 == uVar5;
    uVar5 = uVar2;
    if (bVar4) {
      *(ulong *)(lVar13 + 0x1c0) = uVar16;
      LOAcquire();
      uVar5 = *(ulong *)(lVar13 + 0x88);
      *(ulong *)(lVar13 + 0x88) = uVar5 + 1;
      plVar7 = (long *)func_0x000105217788(lVar13 + 0x80,uVar5);
      *(undefined1 (*) [12])(plVar7 + (uVar5 & 0x1f) * 2) = auVar19;
      plVar7[0x42] = plVar7[0x42] | 1L << (uVar5 & 0x1f);
      LORelease();
      puVar9 = (ulong *)(lVar13 + 0x110);
      LOAcquire();
      uVar5 = *puVar9;
      *puVar9 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar12 = *(long *)(lVar13 + 0x100);
        plVar7 = *(long **)(lVar13 + 0x108);
        *(undefined8 *)(lVar13 + 0x100) = 0;
        uVar5 = *puVar9;
        *puVar9 = in_xzr;
        LORelease();
        if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105507314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar7 = (long *)(**(code **)(lVar12 + 8))(uVar5,plVar7);
          return plVar7;
        }
      }
      return plVar7;
    }
  }
  auVar18 = __ZN3std7process5abort17hdc01e45e25b715e8E();
  lVar12 = auVar18._8_8_;
  auVar19 = func_0x000106032954(8);
  plVar7 = auVar19._0_8_;
  lVar13 = (long)plVar7 + lVar12;
  if (lVar12 < 0 == SCARRY8((long)plVar7,lVar12)) {
    uVar1 = auVar19._8_4_ + param_3;
    if (999999999 < uVar1) {
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) goto LAB_10550743c;
      uVar1 = uVar1 + 0xc4653600;
    }
    lVar12 = *auVar18._0_8_;
    uVar5 = *(ulong *)(lVar12 + 0x1c0);
    while( true ) {
      if ((uVar5 & 1) != 0) {
        return plVar7;
      }
      if (uVar5 == 0xfffffffffffffffe) break;
      uVar16 = uVar5 + 2;
      uVar2 = *(ulong *)(lVar12 + 0x1c0);
      bVar4 = uVar2 == uVar5;
      uVar5 = uVar2;
      if (bVar4) {
        *(ulong *)(lVar12 + 0x1c0) = uVar16;
        LOAcquire();
        uVar5 = *(ulong *)(lVar12 + 0x88);
        *(ulong *)(lVar12 + 0x88) = uVar5 + 1;
        plVar7 = (long *)func_0x000105217788(lVar12 + 0x80,uVar5);
        plVar7[(uVar5 & 0x1f) * 2] = lVar13;
        *(uint *)(plVar7 + (uVar5 & 0x1f) * 2 + 1) = uVar1;
        plVar7[0x42] = plVar7[0x42] | 1L << (uVar5 & 0x1f);
        LORelease();
        puVar9 = (ulong *)(lVar12 + 0x110);
        LOAcquire();
        uVar5 = *puVar9;
        *puVar9 = uVar5 | 2;
        LORelease();
        if (uVar5 == 0) {
          lVar13 = *(long *)(lVar12 + 0x100);
          plVar7 = *(long **)(lVar12 + 0x108);
          *(undefined8 *)(lVar12 + 0x100) = 0;
          uVar5 = *puVar9;
          *puVar9 = in_xzr;
          LORelease();
          if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105507434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar7 = (long *)(**(code **)(lVar13 + 8))(uVar5,plVar7);
            return plVar7;
          }
        }
        return plVar7;
      }
    }
    __ZN3std7process5abort17hdc01e45e25b715e8E();
  }
LAB_10550743c:
  uVar8 = func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
  lVar13 = _malloc(0x220);
  if (lVar13 == 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x220);
    goto LAB_1055079fc;
  }
  *(undefined8 *)(lVar13 + 0x208) = 0;
  *(undefined8 *)(lVar13 + 0x200) = 0;
  *(undefined8 *)(lVar13 + 0x218) = 0;
  *(undefined8 *)(lVar13 + 0x210) = 0;
  puStack_778 = (undefined *)0x1;
  pplStack_780 = (long **)0x1;
  uStack_6f8 = 0;
  uStack_680 = 0;
  uStack_670 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_5b8 = 1;
  uStack_5c0 = 0;
  uStack_5b0 = 0;
  aplStack_318[0] = (long *)0x0;
  lStack_700 = lVar13;
  lStack_5e0 = lVar13;
  lStack_5d8 = lVar13;
  iVar6 = _posix_memalign(aplStack_318,0x80,0x200);
  plVar7 = aplStack_318[0];
  if ((iVar6 != 0) || (aplStack_318[0] == (long *)0x0)) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    goto LAB_1055079fc;
  }
  _memcpy(aplStack_318[0],&pplStack_780,0x200);
  lVar12 = *plVar7;
  *plVar7 = lVar12 + 1;
  lVar13 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  if (lVar12 < 0) goto LAB_1055079fc;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar13;
    lVar13 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
  lStack_560 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  plStack_558 = &lStack_560;
  puStack_550 = &uStack_d1;
  plStack_460 = plVar7;
  uStack_448 = 1000000000;
  uStack_43f = 0;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  uStack_458 = uVar8;
  puVar9 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar9[9] == '\x01') {
LAB_1055075f0:
    _memcpy(auStack_438,&plStack_558,0x120);
    uVar5 = *puVar9;
    if (0x7ffffffffffffffe < uVar5) {
      func_0x000108a07858(&UNK_10b377b70);
      goto LAB_1055079fc;
    }
    *puVar9 = uVar5 + 1;
    uVar16 = puVar9[1];
    _memcpy(aplStack_318,&plStack_558,0x120);
    if (uVar16 != 2) {
      pplVar15 = (long **)*aplStack_318[0];
      if ((uVar16 & 1) == 0) {
        plVar17 = (long *)puVar9[2];
        lVar13 = *plVar17;
        *plVar17 = lVar13 + 1;
        if (-1 < lVar13) {
          plVar11 = (long *)plVar17[0x5e];
          if (plVar11 == (long *)0x0) {
            lVar13 = 0;
            lVar12 = 0;
          }
          else {
            lVar13 = *plVar11;
            *plVar11 = lVar13 + 1;
            if (lVar13 < 0) goto LAB_1055079fc;
            lVar12 = plVar17[0x5f];
            lVar13 = plVar17[0x5e];
          }
          _memcpy(auStack_1f0,auStack_548,0x110);
          pplStack_780 = (long **)0xcc;
          puStack_778 = (undefined *)0x0;
          puStack_770 = &UNK_10b377910;
          uStack_768 = 0;
          uStack_750 = 0;
          plStack_760 = plVar17;
          pplStack_758 = pplVar15;
          _memcpy((ulong)&pplStack_780 | 0x34,auStack_1f4,0x114);
          uStack_630 = 0;
          uStack_628 = 0;
          uStack_638 = 0;
          plStack_e0 = (long *)0x0;
          lStack_618 = lVar13;
          lStack_610 = lVar12;
          iVar6 = _posix_memalign(&plStack_e0,0x80,0x180);
          plVar11 = plStack_e0;
          if ((iVar6 == 0) && (plStack_e0 != (long *)0x0)) {
            _memcpy(plStack_e0,&pplStack_780,0x180);
            lVar13 = FUN_105247b84(plVar17 + 0x2d,plVar11,plVar11);
            pplStack_780 = pplVar15;
            if (plVar17[0x5c] != 0) {
              (**(code **)(plVar17[0x5d] + 0x28))
                        (plVar17[0x5c] + (*(long *)(plVar17[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&pplStack_780);
            }
            if (lVar13 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (puVar9 + 2,lVar13);
            }
            goto LAB_10550787c;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x180);
        }
      }
      else {
        plVar17 = (long *)puVar9[2];
        lVar13 = *plVar17;
        *plVar17 = lVar13 + 1;
        if (-1 < lVar13) {
          plVar11 = (long *)plVar17[0x4a];
          if (plVar11 == (long *)0x0) {
            lVar13 = 0;
            lVar12 = 0;
          }
          else {
            lVar13 = *plVar11;
            *plVar11 = lVar13 + 1;
            if (lVar13 < 0) goto LAB_1055079fc;
            lVar12 = plVar17[0x4b];
            lVar13 = plVar17[0x4a];
          }
          _memcpy(auStack_1f0,auStack_548,0x110);
          pplStack_780 = (long **)0xcc;
          puStack_778 = (undefined *)0x0;
          puStack_770 = &UNK_10b376dd0;
          uStack_768 = 0;
          uStack_750 = 0;
          plStack_760 = plVar17;
          pplStack_758 = pplVar15;
          _memcpy((ulong)&pplStack_780 | 0x34,auStack_1f4,0x114);
          uStack_630 = 0;
          uStack_628 = 0;
          uStack_638 = 0;
          plStack_e0 = (long *)0x0;
          lStack_618 = lVar13;
          lStack_610 = lVar12;
          iVar6 = _posix_memalign(&plStack_e0,0x80,0x180);
          plVar11 = plStack_e0;
          if ((iVar6 == 0) && (plStack_e0 != (long *)0x0)) {
            _memcpy(plStack_e0,&pplStack_780,0x180);
            lVar13 = FUN_105247b84(plVar17 + 0x11,plVar11,plVar11);
            pplStack_780 = pplVar15;
            if (plVar17[0x48] != 0) {
              (**(code **)(plVar17[0x49] + 0x28))
                        (plVar17[0x48] + (*(long *)(plVar17[0x49] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&pplStack_780);
            }
            if (lVar13 != 0) {
              FUN_10610fa38(plVar17 + 2,lVar13,0);
            }
LAB_10550787c:
            *puVar9 = *puVar9 - 1;
            if (*plVar11 == 0xcc) {
              *plVar11 = 0x84;
            }
            else {
              (**(code **)(plVar11[2] + 0x20))(plVar11);
            }
            return plVar7;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x180);
        }
      }
      goto LAB_1055079fc;
    }
    if (cStack_1ff == '\0') {
      puVar14 = auStack_220;
LAB_105507928:
      FUN_10519d2f8(puVar14);
      uVar5 = *puVar9 - 1;
    }
    else if (cStack_1ff == '\x03') {
      puVar14 = auStack_308;
      FUN_105189b7c(auStack_2a8);
      goto LAB_105507928;
    }
    uVar10 = 0;
    *puVar9 = uVar5;
  }
  else {
    if ((char)puVar9[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar9,&DAT_10512bfcc);
      *(undefined1 *)(puVar9 + 9) = 1;
      goto LAB_1055075f0;
    }
    FUN_10519d2f8(&plStack_460);
    uVar10 = 1;
  }
  aplStack_318[0] = (long *)CONCAT71(aplStack_318[0]._1_7_,uVar10);
  pplStack_780 = aplStack_318;
  puStack_778 = &
                __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&pplStack_780,&UNK_10b38bad8);
LAB_1055079fc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x105507a00);
  (*pcVar3)();
}

