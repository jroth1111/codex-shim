
void FUN_10088286c(void)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  long unaff_x19;
  long *unaff_x20;
  char *unaff_x23;
  long unaff_x24;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e8;
  long in_stack_00000120;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__no_active_command_exec_for_proc_108ac9b68,unaff_x29 + -0xa0);
  if (in_stack_000000c0 != 0) {
    _free(in_stack_000000c8);
  }
  lVar4 = *(long *)(unaff_x29 + -0x78);
  puVar9 = *(undefined8 **)(unaff_x29 + -0x70);
  if (lVar4 == -0x8000000000000000) {
    *(undefined8 **)(unaff_x19 + 0x68) = puVar9;
    if (*unaff_x23 == '\0') {
      *unaff_x23 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
    }
    FUN_1060fa678();
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      puVar9 = (undefined8 *)_malloc(0x73);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x73);
        goto LAB_100882da0;
      }
      *(undefined4 *)((long)puVar9 + 0x6f) = 0x73657373;
      puVar9[9] = 0x7070757320746f6e;
      puVar9[8] = 0x2065726120657a69;
      puVar9[0xb] = 0x776f646e69772072;
      puVar9[10] = 0x6f6620646574726f;
      puVar9[0xd] = 0x7365636f72702078;
      puVar9[0xc] = 0x6f62646e61732073;
      puVar9[1] = 0x6972772f63657865;
      *puVar9 = 0x2f646e616d6d6f63;
      puVar9[3] = 0x636578652f646e61;
      puVar9[2] = 0x6d6d6f63202c6574;
      lVar4 = 0x73;
      lVar11 = 0x73;
      puVar9[5] = 0x20646e61202c6574;
      puVar9[4] = 0x616e696d7265742f;
      puVar9[7] = 0x7365722f63657865;
      puVar9[6] = 0x2f646e616d6d6f63;
      bVar2 = *(byte *)(unaff_x19 + 0x82);
      goto joined_r0x000100882c08;
    }
    *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x68);
    *(undefined8 *)(unaff_x24 + 0x48) = 1;
    *(undefined8 *)(unaff_x24 + 0x40) = 1;
    *(undefined8 *)(unaff_x24 + 0x78) = 0x8000000000000001;
    *(undefined8 *)(unaff_x24 + 0x70) = 0;
    plVar8 = (long *)_malloc(0xa0);
    if (plVar8 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
LAB_100882da0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100882da4);
      (*pcVar3)();
    }
    lVar4 = *(long *)(unaff_x24 + 0xa0);
    lVar5 = *(long *)(unaff_x24 + 0xb8);
    lVar11 = *(long *)(unaff_x24 + 0xb0);
    plVar8[0xd] = *(long *)(unaff_x24 + 0xa8);
    plVar8[0xc] = lVar4;
    plVar8[0xf] = lVar5;
    plVar8[0xe] = lVar11;
    lVar4 = *(long *)(unaff_x24 + 0xc0);
    lVar5 = *(long *)(unaff_x24 + 0xd8);
    lVar11 = *(long *)(unaff_x24 + 0xd0);
    plVar8[0x11] = *(long *)(unaff_x24 + 200);
    plVar8[0x10] = lVar4;
    plVar8[0x13] = lVar5;
    plVar8[0x12] = lVar11;
    lVar4 = *(long *)(unaff_x24 + 0x60);
    lVar5 = *(long *)(unaff_x24 + 0x78);
    lVar11 = *(long *)(unaff_x24 + 0x70);
    plVar8[5] = *(long *)(unaff_x24 + 0x68);
    plVar8[4] = lVar4;
    plVar8[7] = lVar5;
    plVar8[6] = lVar11;
    lVar4 = *(long *)(unaff_x24 + 0x80);
    lVar5 = *(long *)(unaff_x24 + 0x98);
    lVar11 = *(long *)(unaff_x24 + 0x90);
    plVar8[9] = *(long *)(unaff_x24 + 0x88);
    plVar8[8] = lVar4;
    plVar8[0xb] = lVar5;
    plVar8[10] = lVar11;
    lVar4 = *(long *)(unaff_x24 + 0x40);
    lVar5 = *(long *)(unaff_x24 + 0x58);
    lVar11 = *(long *)(unaff_x24 + 0x50);
    plVar8[1] = *(long *)(unaff_x24 + 0x48);
    *plVar8 = lVar4;
    plVar8[3] = lVar5;
    plVar8[2] = lVar11;
    lVar4 = *plVar8;
    *plVar8 = lVar4 + 1;
    if (lVar4 < 0) goto LAB_100882da0;
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    *(long **)(unaff_x19 + 0x78) = plVar8;
    *(undefined2 *)(unaff_x19 + 0x82) = 0;
    *(undefined8 *)(unaff_x19 + 0x88) = 1;
    *(long **)(unaff_x19 + 0x90) = plVar8;
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x108);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x100);
    *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x19 + 0x118);
    *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x110);
    *(long **)(unaff_x19 + 0xb8) = (long *)(unaff_x19 + 0x70);
    *(undefined1 *)(unaff_x19 + 0x170) = 0;
    FUN_100fcd9f4(&stack0x000000c0,unaff_x19 + 0x88);
    uVar16 = in_stack_000000e8;
    lVar4 = in_stack_000000c0;
    if (in_stack_000000c0 == 3) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar10 = 4;
      goto LAB_100882c60;
    }
    uVar17 = *(undefined8 *)(unaff_x24 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x24 + 0x48);
    uVar20 = *(undefined8 *)(unaff_x24 + 0x60);
    uVar19 = *(undefined8 *)(unaff_x24 + 0x58);
    FUN_100d4fb00(unaff_x19 + 0x88);
    if (lVar4 != 2) {
      *(undefined8 *)(unaff_x24 + 0x50) = uVar17;
      *(undefined8 *)(unaff_x24 + 0x48) = uVar14;
      *(undefined8 *)(unaff_x24 + 0x60) = uVar20;
      *(undefined8 *)(unaff_x24 + 0x58) = uVar19;
      in_stack_000000c0 = lVar4;
      in_stack_000000e8 = uVar16;
      __ZN122__LT_codex_app_server__command_exec__InternalProcessId_u20_as_u20_codex_app_server__command_exec__InternalProcessIdExt_GT_10error_repr17hdfb39f97041d5aaaE
                (unaff_x29 + -0x78,unaff_x19 + 0x48);
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
      *(undefined **)(unaff_x29 + -0x80) = &DAT_1019a7324;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xa0,s_command_exec_is_no_longer_runnin_108add31b,unaff_x29 + -0x88);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      lVar4 = *(long *)(unaff_x29 + -0xa0);
      puVar9 = *(undefined8 **)(unaff_x29 + -0x98);
      lVar11 = *(long *)(unaff_x29 + -0x90);
      func_0x000100caa3b0(&stack0x000000c0);
      if (lVar4 == -0x8000000000000000) goto LAB_100882a2c;
LAB_100882ae8:
      if ((*(byte *)(unaff_x19 + 0x81) & 1) != 0) {
        FUN_100d5c580(unaff_x19 + 0x78);
      }
      *(undefined1 *)(unaff_x19 + 0x81) = 0;
      *(undefined1 *)(unaff_x19 + 0x83) = 0;
      plVar8 = (long *)(unaff_x19 + 0x70);
      lVar12 = *plVar8;
      LOAcquire();
      lVar5 = *(long *)(lVar12 + 0x1f0);
      *(long *)(lVar12 + 0x1f0) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        LOAcquire();
        lVar5 = *(long *)(lVar12 + 0x88);
        *(long *)(lVar12 + 0x88) = lVar5 + 1;
        lVar5 = func_0x000100fcac10(lVar12 + 0x80,lVar5);
        *(ulong *)(lVar5 + 0x610) = *(ulong *)(lVar5 + 0x610) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar12 + 0x110);
        LOAcquire();
        uVar6 = *puVar1;
        *puVar1 = uVar6 | 2;
        LORelease();
        if (uVar6 == 0) {
          lVar5 = *(long *)(lVar12 + 0x100);
          *(undefined8 *)(lVar12 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar12 + 0x108));
          }
        }
      }
      lVar5 = *(long *)*plVar8;
      *(long *)*plVar8 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E(plVar8);
      }
      goto LAB_100882bac;
    }
LAB_100882a2c:
    *(undefined1 *)(unaff_x19 + 0x81) = 0;
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x78);
    FUN_101401228(&stack0x000000c0,unaff_x19 + 0x88);
    lVar12 = in_stack_00000120;
    lVar5 = in_stack_000000d8;
    lVar11 = in_stack_000000d0;
    puVar9 = in_stack_000000c8;
    lVar4 = in_stack_000000c0;
    if (in_stack_000000c0 == -0x7ffffffffffffffe) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar10 = 5;
      goto LAB_100882c60;
    }
    lVar18 = *(long *)(unaff_x24 + 0x68);
    lVar15 = *(long *)(unaff_x24 + 0x60);
    uVar20 = *(undefined8 *)(unaff_x24 + 0x78);
    uVar17 = *(undefined8 *)(unaff_x24 + 0x70);
    uVar14 = *(undefined8 *)(unaff_x24 + 0x88);
    uVar16 = *(undefined8 *)(unaff_x24 + 0x80);
    uVar21 = *(undefined8 *)(unaff_x24 + 0x98);
    uVar19 = *(undefined8 *)(unaff_x24 + 0x90);
    FUN_100d5c580(unaff_x19 + 0x88);
    if (lVar4 == -0x7fffffffffffffff) {
      __ZN122__LT_codex_app_server__command_exec__InternalProcessId_u20_as_u20_codex_app_server__command_exec__InternalProcessIdExt_GT_10error_repr17hdfb39f97041d5aaaE
                (&stack0x000000c0,unaff_x19 + 0x48);
      *(long **)(unaff_x29 + -0xa0) = &stack0x000000c0;
      *(undefined **)(unaff_x29 + -0x98) = &DAT_1019a7324;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_command_exec_is_no_longer_runnin_108add31b,unaff_x29 + -0xa0);
      if (in_stack_000000c0 != 0) {
        _free(in_stack_000000c8);
      }
      lVar4 = *(long *)(unaff_x29 + -0x78);
      puVar9 = *(undefined8 **)(unaff_x29 + -0x70);
      lVar11 = *(long *)(unaff_x29 + -0x68);
      goto LAB_100882ae8;
    }
    *(undefined8 *)(unaff_x24 + 0x18) = uVar20;
    *(undefined8 *)(unaff_x24 + 0x10) = uVar17;
    *(undefined8 *)(unaff_x24 + 0x28) = uVar14;
    *(undefined8 *)(unaff_x24 + 0x20) = uVar16;
    *(undefined8 *)(unaff_x24 + 0x38) = uVar21;
    *(undefined8 *)(unaff_x24 + 0x30) = uVar19;
    *(undefined1 *)(unaff_x19 + 0x81) = 0;
    *(undefined1 *)(unaff_x19 + 0x83) = 0;
    plVar8 = (long *)(unaff_x19 + 0x70);
    lVar13 = *plVar8;
    LOAcquire();
    lVar7 = *(long *)(lVar13 + 0x1f0);
    *(long *)(lVar13 + 0x1f0) = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      LOAcquire();
      lVar7 = *(long *)(lVar13 + 0x88);
      *(long *)(lVar13 + 0x88) = lVar7 + 1;
      lVar7 = func_0x000100fcac10(lVar13 + 0x80,lVar7);
      *(ulong *)(lVar7 + 0x610) = *(ulong *)(lVar7 + 0x610) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar13 + 0x110);
      LOAcquire();
      uVar6 = *puVar1;
      *puVar1 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar7 = *(long *)(lVar13 + 0x100);
        *(undefined8 *)(lVar13 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar13 + 0x108));
        }
      }
    }
    lVar7 = *(long *)*plVar8;
    *(long *)*plVar8 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E(plVar8);
    }
    *(undefined1 *)(unaff_x19 + 0x82) = 0;
    uVar6 = *(ulong *)(unaff_x19 + 0x48);
    in_stack_00000080 = lVar15;
    in_stack_00000088 = lVar18;
  }
  else {
    lVar11 = *(long *)(unaff_x29 + -0x68);
    if (*unaff_x23 == '\0') {
      *unaff_x23 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
    }
    FUN_1060fa678();
LAB_100882bac:
    bVar2 = *(byte *)(unaff_x19 + 0x82);
joined_r0x000100882c08:
    if (((bVar2 & 1) != 0) && (0 < *(long *)(unaff_x19 + 0x100))) {
      _free(*(undefined8 *)(unaff_x19 + 0x108));
    }
    *(undefined1 *)(unaff_x19 + 0x82) = 0;
    uVar6 = *(ulong *)(unaff_x19 + 0x48);
    lVar12 = -0x7f58;
    lVar5 = -0x7ffffffffffffffb;
  }
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x50));
  }
  *unaff_x20 = lVar4;
  unaff_x20[1] = (long)puVar9;
  unaff_x20[2] = lVar11;
  unaff_x20[3] = lVar5;
  lVar11 = *(long *)(unaff_x24 + 0x18);
  lVar4 = *(long *)(unaff_x24 + 0x10);
  lVar15 = *(long *)(unaff_x24 + 0x28);
  lVar5 = *(long *)(unaff_x24 + 0x20);
  unaff_x20[5] = in_stack_00000088;
  unaff_x20[4] = in_stack_00000080;
  unaff_x20[7] = lVar11;
  unaff_x20[6] = lVar4;
  lVar11 = *(long *)(unaff_x24 + 0x38);
  lVar4 = *(long *)(unaff_x24 + 0x30);
  unaff_x20[9] = lVar15;
  unaff_x20[8] = lVar5;
  unaff_x20[0xb] = lVar11;
  unaff_x20[10] = lVar4;
  uVar10 = 1;
  unaff_x20[0xc] = lVar12;
LAB_100882c60:
  *(undefined1 *)(unaff_x19 + 0x80) = uVar10;
  return;
}

