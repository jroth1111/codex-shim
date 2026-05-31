
undefined8 FUN_100a08bc4(void)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined8 *unaff_x19;
  long *plVar10;
  long lVar11;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long in_stack_00000178;
  long in_stack_00000180;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001e0;
  long in_stack_00000248;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000248,s_get_task_diff_failed_for___108acdcbf,&stack0x000002f0);
  lVar13 = *(long *)(unaff_x26 + 0xd8);
  FUN_1009f8e14(&stack0x00000220);
  lVar4 = unaff_x19[6];
  lVar11 = unaff_x19[7];
  uVar7 = unaff_x19[1];
  lVar2 = unaff_x19[2];
  if (lVar2 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lVar2);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar2);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100a09218);
      (*pcVar9)();
    }
  }
  _memcpy(lVar6,uVar7,lVar2);
  auVar19 = (**(code **)(lVar11 + 0x38))
                      (lVar4 + (*(long *)(lVar11 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       &stack0x000002f0);
  *(undefined1 (*) [16])(unaff_x19 + 0xe) = auVar19;
  (**(code **)(auVar19._8_8_ + 0x18))(&stack0x000002f0);
  if (lVar2 == 3) {
    uVar7 = 1;
    uVar8 = 5;
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x24 + 0x38);
    uVar18 = *(undefined8 *)(unaff_x24 + 0x60);
    uVar17 = *(undefined8 *)(unaff_x24 + 0x58);
    uVar16 = *(undefined8 *)(unaff_x24 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x24 + 0x28);
    uVar7 = unaff_x19[0xe];
    puVar3 = (undefined8 *)unaff_x19[0xf];
    pcVar9 = (code *)*puVar3;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar7);
    }
    if (puVar3[1] != 0) {
      _free(uVar7);
    }
    if (lVar2 == 2) {
      *(undefined8 *)(unaff_x26 + 0xb8) = in_stack_00000308;
      *(undefined8 *)(unaff_x26 + 0xb0) = 2;
      *(undefined2 *)((long)unaff_x19 + 0x6a) = 0;
      *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000220;
      *(undefined **)(unaff_x29 + -0x68) =
           &
           __ZN84__LT_codex_cloud_tasks_client__api__CloudTaskError_u20_as_u20_core__fmt__Display_GT_3fmt17h3d61ac0ec1eb3ea2E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x88,s__108b1bd74,unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x24 + 0x40) = *(undefined8 *)(unaff_x24 + 0xb0);
      *(undefined8 *)(unaff_x24 + 0x38) = *(undefined8 *)(unaff_x24 + 0xa8);
      func_0x000100fd3a84(&stack0x00000248,unaff_x19 + 8,&stack0x000002f0);
      if (in_stack_00000248 != 0xc) {
        FUN_100df7418(&stack0x00000248);
      }
      if (((1 < lVar6) || (lVar6 != 0)) && (lVar13 != 0)) {
        _free(in_stack_00000258);
      }
    }
    else {
      *(undefined8 *)(unaff_x25 + 0x158) = in_stack_00000308;
      *(long *)(unaff_x25 + 0x150) = lVar2;
      uVar7 = *unaff_x19;
      *(undefined8 *)(unaff_x25 + 0x128) = unaff_x19[1];
      *(undefined8 *)(unaff_x25 + 0x120) = uVar7;
      in_stack_00000198 = unaff_x19[2];
      uVar7 = unaff_x19[3];
      *(undefined8 *)(unaff_x26 + 0x30) = unaff_x19[4];
      *(undefined8 *)(unaff_x26 + 0x28) = uVar7;
      in_stack_000001b0 = unaff_x19[5];
      uVar14 = *(undefined8 *)(unaff_x25 + 200);
      uVar7 = *(undefined8 *)(unaff_x25 + 0xc0);
      *(undefined2 *)((long)unaff_x19 + 0x6a) = 0;
      *(undefined8 *)(unaff_x26 + 0x78) = uVar14;
      *(undefined8 *)(unaff_x26 + 0x70) = uVar7;
      *(undefined8 *)(unaff_x26 + 0x90) = uVar18;
      *(undefined8 *)(unaff_x26 + 0x88) = uVar17;
      *(undefined8 *)(unaff_x26 + 0x60) = uVar16;
      *(undefined8 *)(unaff_x26 + 0x58) = uVar15;
      in_stack_00000178 = lVar2;
      in_stack_00000180 = lVar6;
      in_stack_000001c8 = in_stack_00000310;
      in_stack_000001e0 = uVar12;
      func_0x000100fd3a84(&stack0x000002f0,unaff_x19 + 8,&stack0x00000178);
      if (lVar2 != 0xc) {
        FUN_100df7418(&stack0x000002f0);
      }
    }
    if (((1 < (long)unaff_x19[0x10]) || (unaff_x19[0x10] != 0)) && (unaff_x19[0x11] != 0)) {
      _free(unaff_x19[0x12]);
    }
    if (unaff_x19[9] == 4) {
      *(undefined1 *)((long)unaff_x19 + 0x69) = 0;
    }
    *(undefined1 *)((long)unaff_x19 + 0x69) = 0;
    lVar4 = *(long *)unaff_x19[6];
    *(long *)unaff_x19[6] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E();
    }
    plVar10 = unaff_x19 + 8;
    lVar11 = *plVar10;
    LOAcquire();
    lVar4 = *(long *)(lVar11 + 0x1c8);
    *(long *)(lVar11 + 0x1c8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = *(long *)(lVar11 + 0x88);
      *(long *)(lVar11 + 0x88) = lVar4 + 1;
      lVar4 = func_0x000100fcb63c(lVar11 + 0x80,lVar4);
      *(ulong *)(lVar4 + 0x1510) = *(ulong *)(lVar4 + 0x1510) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar11 + 0x110);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = *(long *)(lVar11 + 0x100);
        *(undefined8 *)(lVar11 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar11 + 0x108));
        }
      }
    }
    lVar4 = *(long *)*plVar10;
    *(long *)*plVar10 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102872bc8(plVar10);
    }
    uVar7 = 0;
    uVar8 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xd) = uVar8;
  return uVar7;
}

