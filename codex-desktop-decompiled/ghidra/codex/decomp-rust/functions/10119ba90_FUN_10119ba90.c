
/* WARNING: Removing unreachable block (ram,0x00010119bbcc) */
/* WARNING: Removing unreachable block (ram,0x00010119bbd0) */
/* WARNING: Removing unreachable block (ram,0x00010119bbd8) */
/* WARNING: Removing unreachable block (ram,0x00010119bbdc) */

ulong FUN_10119ba90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  long unaff_x19;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  long unaff_x23;
  ulong in_xzr;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_1a060 [106384];
  undefined1 auStack_d0 [112];
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s_failed_to_load_accessible_apps__108aca4cf,&stack0x00000040);
  (**(code **)*in_stack_00000038)();
  lVar11 = in_stack_00000010;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000010 = 0;
  lVar17 = *(long *)(unaff_x19 + 0x2550);
  uVar10 = *(ulong *)(lVar17 + 0x1c0);
  while( true ) {
    if ((uVar10 & 1) != 0) {
      lVar17 = lVar11;
      if (unaff_x23 == -0x8000000000000000) {
        in_stack_00000010 = 0;
        lVar12 = in_stack_00000018;
        lVar6 = lVar11;
      }
      else {
        for (; lVar12 = lVar11, lVar6 = unaff_x23, in_stack_00000018 != 0;
            in_stack_00000018 = in_stack_00000018 + -1) {
          FUN_100e3b46c(lVar17);
          lVar17 = lVar17 + 0x270;
        }
      }
      if (lVar6 != 0) {
        _free(lVar12);
      }
      goto LAB_10119bbfc;
    }
    if (uVar10 == 0xfffffffffffffffe) break;
    uVar1 = uVar10 + 2;
    uVar3 = *(ulong *)(lVar17 + 0x1c0);
    bVar4 = uVar3 == uVar10;
    uVar10 = uVar3;
    if (bVar4) {
      *(ulong *)(lVar17 + 0x1c0) = uVar1;
      LOAcquire();
      uVar10 = *(ulong *)(lVar17 + 0x88);
      *(ulong *)(lVar17 + 0x88) = uVar10 + 1;
      lVar12 = func_0x000100fcb354(lVar17 + 0x80,uVar10);
      puVar15 = (undefined8 *)(lVar12 + (uVar10 & 0x1f) * 0x28);
      puVar15[1] = unaff_x23;
      *puVar15 = in_stack_00000010;
      puVar15[3] = in_stack_00000018;
      puVar15[2] = lVar11;
      puVar15[4] = in_stack_00000020;
      *(ulong *)(lVar12 + 0x510) = *(ulong *)(lVar12 + 0x510) | 1L << (uVar10 & 0x1f);
      LORelease();
      puVar2 = (ulong *)(lVar17 + 0x110);
      LOAcquire();
      uVar10 = *puVar2;
      *puVar2 = uVar10 | 2;
      LORelease();
      if (uVar10 == 0) {
        lVar11 = *(long *)(lVar17 + 0x100);
        *(undefined8 *)(lVar17 + 0x100) = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x108));
        }
      }
LAB_10119bbfc:
      FUN_100de93d0();
      lVar11 = **(long **)(unaff_x19 + 0x2548);
      **(long **)(unaff_x19 + 0x2548) = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x19 + 0x2548);
      }
      lVar17 = *(long *)(unaff_x19 + 0x2550);
      LOAcquire();
      lVar11 = *(long *)(lVar17 + 0x1c8);
      *(long *)(lVar17 + 0x1c8) = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        LOAcquire();
        lVar11 = *(long *)(lVar17 + 0x88);
        *(long *)(lVar17 + 0x88) = lVar11 + 1;
        lVar11 = func_0x000100fcb354(lVar17 + 0x80,lVar11);
        *(ulong *)(lVar11 + 0x510) = *(ulong *)(lVar11 + 0x510) | 0x200000000;
        LORelease();
        puVar2 = (ulong *)(lVar17 + 0x110);
        LOAcquire();
        uVar10 = *puVar2;
        *puVar2 = uVar10 | 2;
        LORelease();
        if (uVar10 == 0) {
          lVar11 = *(long *)(lVar17 + 0x100);
          *(undefined8 *)(lVar17 + 0x100) = 0;
          *puVar2 = in_xzr;
          LORelease();
          if (lVar11 != 0) {
            (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x108));
          }
        }
      }
      lVar11 = **(long **)(unaff_x19 + 0x2550);
      **(long **)(unaff_x19 + 0x2550) = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001019926f0(unaff_x19 + 0x2550);
      }
      *(undefined1 *)(unaff_x22 + 1) = 1;
      return (ulong)(unaff_x23 == -0x7fffffffffffffff);
    }
  }
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  func_0x000108a07af4(&UNK_10b225658);
  uVar13 = func_0x000108a07b10(&UNK_10b225658);
  FUN_100de93d0();
  lVar11 = **(long **)(unaff_x19 + 0x2548);
  **(long **)(unaff_x19 + 0x2548) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x19 + 0x2548);
  }
  FUN_100d366d0(unaff_x19 + 0x2550);
  *(undefined1 *)(unaff_x22 + 1) = 2;
  __Unwind_Resume(uVar13);
  auVar20 = func_0x000108a07bc4();
  lVar11 = auVar20._8_8_;
  puVar7 = &stack0xffffffffffffffa0;
  do {
    puVar9 = puVar7;
    *(undefined8 *)(puVar9 + -0x1000) = 0;
    puVar7 = puVar9 + -0x1000;
  } while (puVar9 + -0x1000 != auStack_1a060);
  bVar5 = *(byte *)(lVar11 + 0x266a);
  if (bVar5 < 2) {
    *(undefined8 *)(puVar9 + -0x1148) = param_3;
    if (bVar5 != 0) {
      func_0x000108a07af4(&UNK_10b2160d0);
      goto LAB_10119c19c;
    }
    lVar12 = *(long *)(lVar11 + 0x2630);
    _memcpy(puVar9 + 0x169d8,lVar11,0x2548);
    uVar13 = *(undefined8 *)(lVar11 + 0x25f0);
    uVar18 = *(undefined8 *)(lVar11 + 0x2608);
    uVar16 = *(undefined8 *)(lVar11 + 0x2600);
    *(undefined8 *)(puVar9 + 0x18f28) = *(undefined8 *)(lVar11 + 0x25f8);
    *(undefined8 *)(puVar9 + 0x18f20) = uVar13;
    *(undefined8 *)(puVar9 + 0x18f38) = uVar18;
    *(undefined8 *)(puVar9 + 0x18f30) = uVar16;
    uVar13 = *(undefined8 *)(lVar11 + 0x2610);
    uVar18 = *(undefined8 *)(lVar11 + 0x2628);
    uVar16 = *(undefined8 *)(lVar11 + 0x2620);
    *(undefined8 *)(puVar9 + 0x18f48) = *(undefined8 *)(lVar11 + 0x2618);
    *(undefined8 *)(puVar9 + 0x18f40) = uVar13;
    *(undefined8 *)(puVar9 + 0x18f58) = uVar18;
    *(undefined8 *)(puVar9 + 0x18f50) = uVar16;
    uVar16 = *(undefined8 *)(lVar11 + 0x2638);
    uVar13 = *(undefined8 *)(lVar11 + 0x2640);
    uVar19 = *(undefined8 *)(lVar11 + 0x2658);
    uVar18 = *(undefined8 *)(lVar11 + 0x2650);
    *(undefined8 *)(puVar9 + 0x18f78) = *(undefined8 *)(lVar11 + 0x2648);
    *(undefined8 *)(puVar9 + 0x18f70) = uVar13;
    *(undefined8 *)(puVar9 + 0x18f88) = uVar19;
    *(undefined8 *)(puVar9 + 0x18f80) = uVar18;
    bVar5 = *(byte *)(lVar11 + 0x2669);
    uVar13 = *(undefined8 *)(lVar11 + 0x2548);
    *(undefined1 *)(lVar11 + 0x266f) = 1;
    *(undefined8 *)(puVar9 + -0x1118) = *(undefined8 *)(lVar11 + 0x2550);
    *(undefined8 *)(puVar9 + -0x1120) = uVar13;
    *(undefined8 *)(puVar9 + -0x1110) = *(undefined8 *)(lVar11 + 0x2558);
    *(uint *)(puVar9 + -0x1138) = (uint)*(byte *)(lVar11 + 0x2668);
    *(uint *)(puVar9 + -0x1134) = (uint)bVar5;
    uVar13 = *(undefined8 *)(lVar11 + 0x2580);
    *(undefined8 *)(puVar9 + -0x1130) = *(undefined8 *)(lVar11 + 0x2578);
    *(undefined8 *)(puVar9 + -0x1128) = uVar13;
    *(undefined8 *)(puVar9 + -0x1140) = *(undefined8 *)(lVar11 + 0x2588);
    uVar13 = *(undefined8 *)(lVar11 + 0x25c0);
    uVar19 = *(undefined8 *)(lVar11 + 0x25d8);
    uVar18 = *(undefined8 *)(lVar11 + 0x25d0);
    *(undefined8 *)(puVar9 + -0x10f8) = *(undefined8 *)(lVar11 + 0x25c8);
    *(undefined8 *)(puVar9 + -0x1100) = uVar13;
    *(undefined8 *)(puVar9 + -0x10e8) = uVar19;
    *(undefined8 *)(puVar9 + -0x10f0) = uVar18;
    uVar19 = *(undefined8 *)(lVar11 + 0x25e0);
    uVar18 = *(undefined8 *)(lVar11 + 0x2568);
    uVar13 = *(undefined8 *)(lVar11 + 0x2560);
    *(undefined8 *)(puVar9 + -0x10d8) = *(undefined8 *)(lVar11 + 0x25e8);
    *(undefined8 *)(puVar9 + -0x10e0) = uVar19;
    *(undefined8 *)(puVar9 + -0x10c8) = uVar18;
    *(undefined8 *)(puVar9 + -0x10d0) = uVar13;
    *(undefined8 *)(puVar9 + -0x10c0) = *(undefined8 *)(lVar11 + 0x2570);
    *(undefined4 *)(lVar11 + 0x266b) = 0x1010101;
    uVar13 = *(undefined8 *)(lVar11 + 0x2590);
    uVar19 = *(undefined8 *)(lVar11 + 0x25a8);
    uVar18 = *(undefined8 *)(lVar11 + 0x25a0);
    *(undefined8 *)(puVar9 + -0x10a8) = *(undefined8 *)(lVar11 + 0x2598);
    *(undefined8 *)(puVar9 + -0x10b0) = uVar13;
    *(undefined8 *)(puVar9 + -0x1098) = uVar19;
    *(undefined8 *)(puVar9 + -0x10a0) = uVar18;
    uVar10 = *(ulong *)(lVar12 + 0x38);
    lVar17 = uVar10 + 0x7ffffffffffffffa;
    uVar13 = *(undefined8 *)(lVar11 + 0x25b0);
    *(undefined8 *)(puVar9 + -0x1088) = *(undefined8 *)(lVar11 + 0x25b8);
    *(undefined8 *)(puVar9 + -0x1090) = uVar13;
    if (uVar10 < 0x8000000000000006) {
      lVar17 = 6;
    }
    *(undefined8 *)(puVar9 + 0x18f68) = uVar16;
    if (lVar17 < 4) {
      if (lVar17 < 2) {
        if (lVar17 == 0) {
          uVar13 = 0x8000000000000006;
        }
        else {
          uVar13 = 0x8000000000000007;
        }
      }
      else if (lVar17 == 2) {
        uVar13 = 0x8000000000000008;
      }
      else {
        uVar13 = 0x8000000000000009;
      }
LAB_10119bff0:
      *(undefined8 *)(puVar9 + 0x18f90) = uVar13;
LAB_10119bff4:
      *(undefined1 *)(lVar11 + 0x266f) = 0;
      *(undefined8 *)(puVar9 + 0x14d8) = *(undefined8 *)(puVar9 + -0x1118);
      *(undefined8 *)(puVar9 + 0x14d0) = *(undefined8 *)(puVar9 + -0x1120);
      *(undefined8 *)(puVar9 + 0x14e0) = *(undefined8 *)(puVar9 + -0x1110);
      *(undefined8 *)(puVar9 + 0x1550) = *(undefined8 *)(puVar9 + -0x10f8);
      *(undefined8 *)(puVar9 + 0x1548) = *(undefined8 *)(puVar9 + -0x1100);
      *(undefined8 *)(puVar9 + 0x1560) = *(undefined8 *)(puVar9 + -0x10e8);
      *(undefined8 *)(puVar9 + 0x1558) = *(undefined8 *)(puVar9 + -0x10f0);
      *(undefined8 *)(puVar9 + 0x1570) = *(undefined8 *)(puVar9 + -0x10d8);
      *(undefined8 *)(puVar9 + 0x1568) = *(undefined8 *)(puVar9 + -0x10e0);
      *(undefined8 *)(puVar9 + 0x14f0) = *(undefined8 *)(puVar9 + -0x10c8);
      *(undefined8 *)(puVar9 + 0x14e8) = *(undefined8 *)(puVar9 + -0x10d0);
      *(undefined8 *)(puVar9 + 0x14f8) = *(undefined8 *)(puVar9 + -0x10c0);
      *(undefined4 *)(lVar11 + 0x266b) = 0;
      *(undefined8 *)(puVar9 + 0x1540) = *(undefined8 *)(puVar9 + -0x1088);
      *(undefined8 *)(puVar9 + 0x1538) = *(undefined8 *)(puVar9 + -0x1090);
      *(undefined8 *)(puVar9 + 0x1530) = *(undefined8 *)(puVar9 + -0x1098);
      *(undefined8 *)(puVar9 + 0x1528) = *(undefined8 *)(puVar9 + -0x10a0);
      *(undefined8 *)(puVar9 + 0x1520) = *(undefined8 *)(puVar9 + -0x10a8);
      *(undefined8 *)(puVar9 + 0x1518) = *(undefined8 *)(puVar9 + -0x10b0);
      *(long *)(puVar9 + 0x1618) = lVar12;
      _memcpy(puVar9 + -0x1078,puVar9 + 0x169d8,0x2548);
      *(undefined8 *)(puVar9 + 0x1580) = *(undefined8 *)(puVar9 + 0x18f28);
      *(undefined8 *)(puVar9 + 0x1578) = *(undefined8 *)(puVar9 + 0x18f20);
      *(undefined8 *)(puVar9 + 0x1590) = *(undefined8 *)(puVar9 + 0x18f38);
      *(undefined8 *)(puVar9 + 0x1588) = *(undefined8 *)(puVar9 + 0x18f30);
      *(undefined8 *)(puVar9 + 0x15a0) = *(undefined8 *)(puVar9 + 0x18f48);
      *(undefined8 *)(puVar9 + 0x1598) = *(undefined8 *)(puVar9 + 0x18f40);
      *(undefined8 *)(puVar9 + 0x15b0) = *(undefined8 *)(puVar9 + 0x18f58);
      *(undefined8 *)(puVar9 + 0x15a8) = *(undefined8 *)(puVar9 + 0x18f50);
      *(undefined8 *)(puVar9 + 0x1620) = uVar16;
      *(undefined8 *)(puVar9 + 0x1630) = *(undefined8 *)(puVar9 + 0x18f78);
      *(undefined8 *)(puVar9 + 0x1628) = *(undefined8 *)(puVar9 + 0x18f70);
      *(undefined8 *)(puVar9 + 0x1640) = *(undefined8 *)(puVar9 + 0x18f88);
      *(undefined8 *)(puVar9 + 0x1638) = *(undefined8 *)(puVar9 + 0x18f80);
      *(undefined8 *)(puVar9 + 0x15c0) = *(undefined8 *)(puVar9 + 0x18f98);
      *(undefined8 *)(puVar9 + 0x15b8) = *(undefined8 *)(puVar9 + 0x18f90);
      *(undefined8 *)(puVar9 + 0x15d0) = *(undefined8 *)(puVar9 + 0x18fa8);
      *(undefined8 *)(puVar9 + 0x15c8) = *(undefined8 *)(puVar9 + 0x18fa0);
      *(undefined8 *)(puVar9 + 0x1610) = *(undefined8 *)(puVar9 + 0x18fe8);
      *(undefined8 *)(puVar9 + 0x1608) = *(undefined8 *)(puVar9 + 0x18fe0);
      *(undefined8 *)(puVar9 + 0x1600) = *(undefined8 *)(puVar9 + 0x18fd8);
      *(undefined8 *)(puVar9 + 0x15f8) = *(undefined8 *)(puVar9 + 0x18fd0);
      *(undefined8 *)(puVar9 + 0x15f0) = *(undefined8 *)(puVar9 + 0x18fc8);
      *(undefined8 *)(puVar9 + 0x15e8) = *(undefined8 *)(puVar9 + 0x18fc0);
      *(undefined8 *)(puVar9 + 0x15e0) = *(undefined8 *)(puVar9 + 0x18fb8);
      *(undefined8 *)(puVar9 + 0x15d8) = *(undefined8 *)(puVar9 + 0x18fb0);
      puVar9[0x3f11] = (char)*(undefined4 *)(puVar9 + -0x1134);
      puVar9[0x3f10] = (char)*(undefined4 *)(puVar9 + -0x1138);
      *(undefined8 *)(puVar9 + 0x1500) = *(undefined8 *)(puVar9 + -0x1130);
      *(undefined8 *)(puVar9 + 0x1508) = *(undefined8 *)(puVar9 + -0x1128);
      *(undefined8 *)(puVar9 + 0x1510) = *(undefined8 *)(puVar9 + -0x1140);
      *(undefined8 *)(puVar9 + 0x1650) = 0;
      *(undefined8 *)(puVar9 + 0x1648) = 0;
      puVar9[0x3f12] = 0;
      lVar17 = _malloc(0x17a50);
      if (lVar17 != 0) {
        _memcpy(lVar17,puVar9 + -0x1078,0x17a50);
        *(long *)(lVar11 + 0x2660) = lVar17;
LAB_10119c10c:
        uVar10 = FUN_1011922f0(auVar20._0_8_,lVar17);
        if (*auVar20._0_8_ == -0x7fffffffffffffff) {
          uVar14 = 3;
        }
        else {
          uVar13 = *(undefined8 *)(lVar11 + 0x2660);
          FUN_100cee138(uVar13);
          uVar10 = _free(uVar13);
          *(undefined4 *)(lVar11 + 0x266b) = 0;
          *(undefined1 *)(lVar11 + 0x266f) = 0;
          uVar14 = 1;
        }
        *(undefined1 *)(lVar11 + 0x266a) = uVar14;
        return uVar10;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x17a50);
      goto LAB_10119c1b4;
    }
    if (5 < lVar17) {
      if (lVar17 != 6) {
        uVar13 = 0x800000000000000d;
        goto LAB_10119bff0;
      }
      FUN_1011d1944(auStack_d0);
      goto LAB_10119bff4;
    }
    if (lVar17 != 4) {
      uVar13 = 0x800000000000000b;
      goto LAB_10119bff0;
    }
    uVar13 = *(undefined8 *)(lVar12 + 0x48);
    unaff_x22 = *(long *)(lVar12 + 0x50);
    if (unaff_x22 == 0) {
      lVar17 = 1;
LAB_10119bfd8:
      _memcpy(lVar17,uVar13,unaff_x22);
      *(long *)(puVar9 + 0x18f98) = unaff_x22;
      *(long *)(puVar9 + 0x18fa0) = lVar17;
      uVar13 = 0x800000000000000a;
      *(long *)(puVar9 + 0x18fa8) = unaff_x22;
      goto LAB_10119bff0;
    }
    *(undefined8 *)(puVar9 + -0x1150) = uVar13;
    lVar17 = _malloc(unaff_x22);
    if (lVar17 != 0) {
      uVar13 = *(undefined8 *)(puVar9 + -0x1150);
      goto LAB_10119bfd8;
    }
  }
  else {
    if (bVar5 == 3) {
      lVar17 = *(long *)(lVar11 + 0x2660);
      goto LAB_10119c10c;
    }
LAB_10119c19c:
    func_0x000108a07b10(&UNK_10b2160d0);
  }
  func_0x0001087c9084(1,unaff_x22);
LAB_10119c1b4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10119c1b8);
  (*pcVar8)();
}

