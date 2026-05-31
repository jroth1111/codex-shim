
void FUN_1016d4a0c(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  ulong in_xzr;
  undefined1 auVar10 [12];
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long *in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000180,s_Failed_to_load_pet__108adb990,&stack0x00000130);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  if (in_stack_000000e0 != 0) {
    _free(in_stack_000000e8);
  }
  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x160) + 0x80);
  plVar9[0x39] = plVar9[0x39] + 1;
  lVar7 = *plVar9;
  *plVar9 = lVar7 + 1;
  if (lVar7 < 0) {
LAB_1016d4f40:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1016d4f44);
    (*pcVar6)();
  }
  in_stack_00000180 = plVar9;
  auVar10 = func_0x000106032954(8);
  plVar5 = in_stack_00000180;
  uVar8 = in_stack_00000180[0x38];
  do {
    if ((uVar8 & 1) != 0) goto LAB_1016d4e54;
    if (uVar8 == 0xfffffffffffffffe) {
      __ZN3std7process5abort17hdc01e45e25b715e8E();
      func_0x000108a07af4(&UNK_10b252298);
      func_0x000108a07b10(&UNK_10b252298);
      func_0x0001087c9084(1,auVar10._0_8_);
      goto LAB_1016d4f40;
    }
    uVar1 = uVar8 + 2;
    uVar3 = in_stack_00000180[0x38];
    bVar4 = uVar3 != uVar8;
    uVar8 = uVar3;
  } while (bVar4);
  in_stack_00000180[0x38] = uVar1;
  LOAcquire();
  uVar8 = in_stack_00000180[0x11];
  in_stack_00000180[0x11] = uVar8 + 1;
  lVar7 = func_0x000105217788(in_stack_00000180 + 0x10,uVar8);
  *(undefined1 (*) [12])(lVar7 + (uVar8 & 0x1f) * 0x10) = auVar10;
  *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 1L << (uVar8 & 0x1f);
  LORelease();
  puVar2 = (ulong *)(plVar5 + 0x22);
  LOAcquire();
  uVar8 = *puVar2;
  *puVar2 = uVar8 | 2;
  LORelease();
  if (uVar8 == 0) {
    lVar7 = plVar5[0x20];
    plVar5[0x20] = 0;
    *puVar2 = in_xzr;
    LORelease();
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 8))(plVar5[0x21]);
    }
  }
LAB_1016d4e54:
  LOAcquire();
  lVar7 = plVar9[0x39];
  plVar9[0x39] = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    LOAcquire();
    lVar7 = plVar9[0x11];
    plVar9[0x11] = lVar7 + 1;
    lVar7 = func_0x000100fcbef4(plVar9 + 0x10,lVar7);
    *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(plVar9 + 0x22);
    LOAcquire();
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 2;
    LORelease();
    if (uVar8 == 0) {
      lVar7 = plVar9[0x20];
      plVar9[0x20] = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 8))(plVar9[0x21]);
      }
    }
  }
  lVar7 = *in_stack_00000180;
  *in_stack_00000180 = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&stack0x00000180);
  }
  *(undefined2 *)(unaff_x19 + 0x42c) = 0;
  if (((*(byte *)(unaff_x19 + 0x42a) & 1) != 0) && (*(long *)(unaff_x19 + 0x168) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x170));
  }
  *(undefined1 *)(unaff_x19 + 0x42a) = 0;
  *unaff_x20 = 0x8000000000000001;
  *(undefined1 *)(unaff_x19 + 0x428) = 1;
  return;
}

