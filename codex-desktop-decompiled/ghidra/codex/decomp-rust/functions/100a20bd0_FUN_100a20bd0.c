
/* WARNING: Removing unreachable block (ram,0x000100a23cc4) */
/* WARNING: Removing unreachable block (ram,0x000100a23ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a20bd0(void)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x19;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x28;
  long *plVar15;
  long *plVar16;
  ulong in_xzr;
  undefined8 uVar17;
  long *in_stack_00000170;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  long in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 *puVar18;
  
  unaff_x28[1] = in_stack_00000280;
  *unaff_x28 = in_stack_00000278;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (in_stack_00000560 != 0) {
    _free(in_stack_00000568);
  }
  if ((*(byte *)(unaff_x19 + 0x3b3) & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x468) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x470));
    }
    if (*(long *)(unaff_x19 + 0x480) != -0x7ffffffffffffffb) {
      FUN_100de6690(unaff_x19 + 0x480);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x3b3) = 0;
  lVar11 = 0;
  if (0x8000000000000001 < *(ulong *)(unaff_x19 + 0x1b8)) {
    lVar11 = *(ulong *)(unaff_x19 + 0x1b8) + 0x7ffffffffffffffe;
  }
  if (lVar11 == 0) {
    if ((*(byte *)(unaff_x19 + 0x3b5) & 1) != 0) {
      FUN_100e3d46c(unaff_x19 + 0x1b8);
    }
  }
  else if (lVar11 == 1) {
    if ((*(byte *)(unaff_x19 + 0x3b4) & 1) != 0) {
      uVar10 = *(ulong *)(unaff_x19 + 0x1c0);
joined_r0x000100a2267c:
      if (uVar10 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x1c8));
      }
    }
  }
  else if ((*(byte *)(unaff_x19 + 0x3b6) & 1) != 0) {
    uVar10 = *(ulong *)(unaff_x19 + 0x1c0) & 0x7fffffffffffffff;
    goto joined_r0x000100a2267c;
  }
  *(undefined2 *)(unaff_x19 + 0x3b4) = 0;
  *(undefined1 *)(unaff_x19 + 0x3b6) = 0;
  lVar11 = *(long *)(unaff_x19 + 0x100) + 0x10;
  *(long *)(unaff_x19 + 0x3c8) = lVar11;
  *(undefined1 *)(unaff_x19 + 0x3d8) = 0;
  *(long *)(unaff_x19 + 0x3d0) = lVar11;
  __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
            (*(long *)(unaff_x19 + 0x100) + 0x80);
  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x3d0) + 0x78);
  puVar7 = (ulong *)(lVar11 + 0x30);
  LOAcquire();
  uVar10 = *puVar7;
  *puVar7 = uVar10 | 1;
  LORelease();
  if (uVar10 == 0) {
    __ZN10tokio_util4task12task_tracker16TaskTrackerInner10notify_now17hf0e4720e0b9d746dE
              (lVar11 + 0x10);
  }
  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x3d0) + 0x78);
  puVar7 = (ulong *)(lVar11 + 0x10);
  uVar10 = *puVar7;
  puVar3 = (ulong *)0x0;
  if (*(long *)(lVar11 + 0x30) != 1) {
    puVar3 = puVar7;
  }
  uVar17 = unaff_x24[1];
  uVar6 = *unaff_x24;
  unaff_x28[1] = uVar17;
  *unaff_x28 = uVar6;
  *(ulong **)(unaff_x19 + 0x3e0) = puVar3;
  *(ulong **)(unaff_x19 + 1000) = puVar7;
  *(ulong *)(unaff_x19 + 0x3f0) = uVar10 >> 2;
  *(undefined8 *)(unaff_x19 + 0x400) = uVar17;
  *(undefined8 *)(unaff_x19 + 0x3f8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x408) = 0;
  *(undefined8 *)(unaff_x19 + 0x418) = 0;
  *(undefined1 *)(unaff_x19 + 0x420) = 0;
  if (puVar3 != (ulong *)0x0) {
    if ((puVar3[4] != 1) && (uVar10 = FUN_1060fb82c(&stack0x00000a80,*unaff_x25), (uVar10 & 1) != 0)
       ) {
      *(undefined1 *)(unaff_x19 + 0x3d8) = 3;
      uVar6 = 1;
      uVar9 = 9;
      goto LAB_100a23be8;
    }
    *(undefined8 *)(unaff_x19 + 0x3e0) = 0;
  }
  lVar11 = unaff_x19 + 0x420;
  plVar15 = (long *)(unaff_x19 + 0x3f0);
  puVar18 = (undefined8 *)(unaff_x19 + 0x3f8);
  FUN_1060fb5d4(&stack0x00000a80);
  if (*(long *)(unaff_x19 + 0x408) != 0) {
    (**(code **)(*(long *)(unaff_x19 + 0x408) + 0x18))(*(undefined8 *)(unaff_x19 + 0x410));
  }
  __ZN17codex_exec_server6server7handler17ExecServerHandler7session17h01896cedd3421999E
            (plVar15,*(undefined8 *)(unaff_x19 + 0x3d0));
  if (*plVar15 != 0) {
    *(undefined8 *)(unaff_x19 + 0x418) = *(undefined8 *)(unaff_x19 + 0x3f8);
    *(long *)(unaff_x19 + 0x410) = *plVar15;
    *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x408);
    *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x400);
    *(undefined8 **)(unaff_x19 + 0x3e0) = (undefined8 *)(unaff_x19 + 0x410);
    *(undefined1 *)(unaff_x19 + 1000) = 0;
    lVar12 = *(long *)(unaff_x19 + 0x418);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x420);
    unaff_x24[1] = *(undefined8 *)(unaff_x19 + 0x428);
    *unaff_x24 = uVar6;
    iVar5 = __ZN17codex_exec_server6server16session_registry12SessionEntry6detach17hf21b633bd18dca2dE
                      (lVar12 + 0x10,&stack0x00000a80);
    if (iVar5 != 0) {
      __ZN17codex_exec_server6server15process_handler14ProcessHandler23set_notification_sender17h581729754f48ffe1E
                (*(long *)(unaff_x19 + 0x418) + 0x28,0);
      plVar15 = *(long **)(unaff_x19 + 0x410);
      lVar11 = *plVar15;
      *plVar15 = lVar11 + 1;
      if (lVar11 < 0) goto LAB_100a23be0;
      uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x418) + 0x18);
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x418) + 0x20);
      if (lVar11 == 0) {
        lVar12 = 1;
      }
      else {
        lVar12 = _malloc(lVar11);
        if (lVar12 == 0) {
          func_0x0001087c9084(1,lVar11);
          goto LAB_100a23be0;
        }
      }
      _memcpy(lVar12,uVar6,lVar11);
      do {
        lVar11 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar11;
      } while (bVar2);
      puVar7 = (ulong *)(*
                        ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                        )();
      if ((char)puVar7[9] == '\x01') {
LAB_100a22fc4:
        _memcpy(&stack0x00000560,&stack0x000002d8,0x158);
        if (0x7ffffffffffffffe < *puVar7) {
          func_0x000108a07858(&UNK_10b2435a0);
          goto LAB_100a23be0;
        }
        *puVar7 = *puVar7 + 1;
        uVar10 = puVar7[1];
        _memcpy(&stack0x000007f0,&stack0x000002d8,0x158);
        if (uVar10 != 2) {
          if ((uVar10 & 1) == 0) {
            plVar16 = (long *)puVar7[2];
            lVar11 = *plVar16;
            *plVar16 = lVar11 + 1;
            if ((lVar11 < 0) ||
               ((plVar15 = (long *)plVar16[0x5e], plVar15 != (long *)0x0 &&
                (lVar11 = *plVar15, *plVar15 = lVar11 + 1, lVar11 < 0)))) goto LAB_100a23be0;
            _memcpy(&stack0x00000ddc,&stack0x00000570,0x148);
            plVar15 = (long *)&UNK_10b23e110;
            _memcpy((ulong)&stack0x00000a80 | 0x34,&stack0x00000dd8,0x14c);
            in_stack_00000170 = (long *)0x0;
            iVar5 = _posix_memalign(&stack0x00000170,0x80,0x200);
            plVar8 = in_stack_00000170;
            if ((iVar5 != 0) || (in_stack_00000170 == (long *)0x0)) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
              goto LAB_100a23be0;
            }
            _memcpy(in_stack_00000170,&stack0x00000a80,0x200);
            lVar11 = FUN_1010e2658(plVar16 + 0x2d,plVar8,plVar8);
            if (plVar16[0x5c] != 0) {
              (**(code **)(plVar16[0x5d] + 0x28))
                        (plVar16[0x5c] + (*(long *)(plVar16[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00000a80);
            }
            if (lVar11 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (puVar7 + 2,lVar11);
            }
          }
          else {
            plVar16 = (long *)puVar7[2];
            lVar11 = *plVar16;
            *plVar16 = lVar11 + 1;
            if ((lVar11 < 0) ||
               ((plVar15 = (long *)plVar16[0x4a], plVar15 != (long *)0x0 &&
                (lVar11 = *plVar15, *plVar15 = lVar11 + 1, lVar11 < 0)))) goto LAB_100a23be0;
            _memcpy(&stack0x00000ddc,&stack0x00000570,0x148);
            plVar15 = (long *)&UNK_10b2416d0;
            _memcpy((ulong)&stack0x00000a80 | 0x34,&stack0x00000dd8,0x14c);
            in_stack_00000170 = (long *)0x0;
            iVar5 = _posix_memalign(&stack0x00000170,0x80,0x200);
            plVar8 = in_stack_00000170;
            if ((iVar5 != 0) || (in_stack_00000170 == (long *)0x0)) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
              goto LAB_100a23be0;
            }
            _memcpy(in_stack_00000170,&stack0x00000a80,0x200);
            lVar11 = FUN_1010e2658(plVar16 + 0x11,plVar8,plVar8);
            if (plVar16[0x48] != 0) {
              (**(code **)(plVar16[0x49] + 0x28))
                        (plVar16[0x48] + (*(long *)(plVar16[0x49] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00000a80);
            }
            if (lVar11 != 0) {
              FUN_10610fa38(plVar16 + 2,lVar11,0);
            }
          }
          puVar18 = (undefined8 *)0x0;
          lVar11 = 0;
          *puVar7 = *puVar7 - 1;
          if (*plVar8 == 0xcc) {
            *plVar8 = 0x84;
          }
          else {
            (**(code **)(plVar8[2] + 0x20))(plVar8);
          }
          goto LAB_100a23298;
        }
        FUN_100d360a8(&stack0x00000800);
        *puVar7 = *puVar7 - 1;
      }
      else {
        if ((char)puVar7[9] != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (puVar7,&DAT_100c35d48);
          *(undefined1 *)(puVar7 + 9) = 1;
          goto LAB_100a22fc4;
        }
        FUN_100d360a8(&stack0x000002e8);
      }
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__108b1bd74,&stack0x00000a80,&UNK_10b22a8b0);
LAB_100a23be0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a23be4);
      (*pcVar4)();
    }
LAB_100a23298:
    *(undefined1 *)(unaff_x19 + 1000) = 1;
    lVar12 = **(long **)(unaff_x19 + 0x410);
    **(long **)(unaff_x19 + 0x410) = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(unaff_x19 + 0x410);
    }
    lVar12 = **(long **)(unaff_x19 + 0x418);
    **(long **)(unaff_x19 + 0x418) = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2672a52da0645afdE(unaff_x19 + 0x418);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x3d8) = 1;
  FUN_100ccea70(unaff_x19 + 0x3c8);
  *(undefined1 *)(unaff_x19 + 0x3b8) = 0;
  lVar12 = **(long **)(unaff_x19 + 0x100);
  **(long **)(unaff_x19 + 0x100) = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbe3c0892b7ff0614E(&stack0x00000a80);
  }
  *(undefined1 *)(unaff_x19 + 0x3b9) = 0;
  plVar16 = *(long **)(unaff_x19 + 0xf8);
  LOAcquire();
  lVar12 = plVar16[0x3e];
  plVar16[0x3e] = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    LOAcquire();
    lVar12 = plVar16[0x11];
    plVar16[0x11] = lVar12 + 1;
    lVar12 = func_0x000100fcb1e0(plVar16 + 0x10,lVar12);
    *(ulong *)(lVar12 + 0x1010) = *(ulong *)(lVar12 + 0x1010) | 0x200000000;
    LORelease();
    puVar7 = (ulong *)(plVar16 + 0x22);
    LOAcquire();
    uVar10 = *puVar7;
    *puVar7 = uVar10 | 2;
    LORelease();
    if (uVar10 == 0) {
      lVar12 = plVar16[0x20];
      plVar16[0x20] = 0;
      *puVar7 = in_xzr;
      LORelease();
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 8))(plVar16[0x21]);
      }
    }
  }
  lVar12 = *plVar16;
  *plVar16 = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h28e64b2e5fbb6af4E(&stack0x00000a80);
  }
  *(undefined1 *)(unaff_x19 + 0x3ba) = 0;
  puVar13 = *(undefined8 **)(unaff_x19 + 0xe0);
  *(undefined8 **)(unaff_x19 + 0x3e0) = puVar13;
  *(undefined8 **)(unaff_x19 + 1000) = puVar13;
  *(undefined8 *)(unaff_x19 + 0x3f0) = *(undefined8 *)(unaff_x19 + 0xd8);
  *(undefined8 **)(unaff_x19 + 0x3f8) = puVar13 + *(long *)(unaff_x19 + 0xe8);
  if (puVar13 != puVar13 + *(long *)(unaff_x19 + 0xe8)) {
    do {
      puVar7 = (ulong *)*puVar13;
      *(undefined8 **)(unaff_x19 + 1000) = puVar13 + 1;
      *(ulong **)(unaff_x19 + 0x3c8) = puVar7;
      *(undefined1 *)(unaff_x19 + 0x3bb) = 1;
      *(ulong **)(unaff_x19 + 0x3d0) = puVar7;
      uVar10 = *puVar7;
      do {
        if ((uVar10 & 0x22) != 0) {
          bVar2 = false;
          plVar16 = (long *)0x0;
          goto LAB_100a23ce8;
        }
        if ((uVar10 & 1) == 0) {
          if (((uint)uVar10 >> 2 & 1) == 0) {
            if ((long)uVar10 < 0) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
              goto LAB_100a23be0;
            }
            uVar14 = uVar10 + 100;
            bVar2 = true;
          }
          else {
            bVar2 = false;
            uVar14 = uVar10 | 0x20;
          }
        }
        else {
          bVar2 = false;
          uVar14 = uVar10 | 0x24;
        }
        plVar16 = (long *)0x1;
        bVar1 = *puVar7 != uVar10;
        uVar10 = *puVar7;
      } while (bVar1);
      *puVar7 = uVar14;
LAB_100a23ce8:
      if (bVar2) {
        (**(code **)(puVar7[2] + 8))();
      }
      *(undefined1 *)(unaff_x19 + 0x3bb) = 0;
      *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x3d0);
      FUN_10151bfcc(&stack0x00000a80,*(undefined8 *)(unaff_x19 + 0x3d0),*unaff_x25);
      if ((int)plVar16 == 1) {
        uVar6 = 1;
        uVar9 = 10;
        goto LAB_100a23be8;
      }
      plVar8 = *(long **)(unaff_x19 + 0x3d8);
      if (*plVar8 == 0xcc) {
        *plVar8 = 0x84;
      }
      else {
        (**(code **)(plVar8[2] + 0x20))();
      }
      if ((lVar11 != 0) && (plVar15 != (long *)0x0)) {
        if ((code *)*puVar18 != (code *)0x0) {
          (*(code *)*puVar18)(plVar15);
        }
        if (puVar18[1] != 0) {
          _free(plVar15);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x3bb) = 0;
      puVar13 = *(undefined8 **)(unaff_x19 + 1000);
    } while (puVar13 != *(undefined8 **)(unaff_x19 + 0x3f8));
  }
  *(undefined8 *)(unaff_x19 + 0x3c8) = 0;
  FUN_100cd11ec(unaff_x19 + 0x3e0);
  *(undefined1 *)(unaff_x19 + 0x3b7) = 0;
  *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x108);
  FUN_10151bfcc(&stack0x00000a80,*(undefined8 *)(unaff_x19 + 0x108),*unaff_x25);
  if ((int)plVar16 == 1) {
    uVar6 = 1;
    uVar9 = 0xb;
  }
  else {
    plVar16 = *(long **)(unaff_x19 + 0x3c8);
    if (*plVar16 == 0xcc) {
      *plVar16 = 0x84;
      uVar6 = extraout_x1;
    }
    else {
      (**(code **)(plVar16[2] + 0x20))();
      uVar6 = extraout_x1_00;
    }
    if ((lVar11 != 0) && (plVar15 != (long *)0x0)) {
      if ((code *)*puVar18 != (code *)0x0) {
        (*(code *)*puVar18)(plVar15);
        uVar6 = extraout_x1_01;
      }
      if (puVar18[1] != 0) {
        _free(plVar15);
        uVar6 = extraout_x1_02;
      }
    }
    *(undefined2 *)(unaff_x19 + 0x3b7) = 0;
    *(undefined1 *)(unaff_x19 + 0x3be) = 0;
    plVar15 = *(long **)(unaff_x19 + 0xf0);
    *(undefined1 *)(unaff_x19 + 0x3b9) = 0;
    if (plVar15 != (long *)0x0) {
      lVar11 = *plVar15;
      *plVar15 = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h59d0696b5cb6029eE();
        uVar6 = extraout_x1_03;
      }
    }
    plVar15 = *(long **)(unaff_x19 + 200);
    *(undefined1 *)(unaff_x19 + 0x3ba) = 0;
    lVar11 = plVar15[0x29];
    plVar15[0x29] = lVar11 + -1;
    if (lVar11 == 1) {
      plVar16 = plVar15 + 0x23;
      if ((char)*plVar16 == '\0') {
        *(char *)plVar16 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar16,uVar6,1000000000)
        ;
      }
      __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&stack0x00000a80);
    }
    lVar11 = *plVar15;
    *plVar15 = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE
                ((undefined8 *)(unaff_x19 + 200));
    }
    FUN_100ce01b8(unaff_x19 + 0xc0);
    *(undefined1 *)(unaff_x19 + 0x3bf) = 0;
    lVar11 = **(long **)(unaff_x19 + 0xb8);
    **(long **)(unaff_x19 + 0xb8) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hef83ea3344b11f43E();
    }
    uVar6 = 0;
    *(undefined2 *)(unaff_x19 + 0x3c0) = 0;
    *(undefined1 *)(unaff_x19 + 0x3c6) = 0;
    *(undefined4 *)(unaff_x19 + 0x3c2) = 0;
    uVar9 = 1;
  }
LAB_100a23be8:
  *(undefined1 *)(unaff_x19 + 0x3b0) = uVar9;
  return uVar6;
}

