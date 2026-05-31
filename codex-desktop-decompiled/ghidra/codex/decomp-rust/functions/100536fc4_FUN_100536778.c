
/* WARNING: Removing unreachable block (ram,0x00010053713c) */
/* WARNING: Removing unreachable block (ram,0x000100537008) */
/* WARNING: Removing unreachable block (ram,0x00010053715c) */

undefined8 FUN_100536778(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x19;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *unaff_x26;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  
  FUN_1005383b0(&stack0x00000478);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000478,s_execution_error__108ac099c,&stack0x00000340);
  *(undefined8 *)(unaff_x19 + 0x398) = 1;
  uVar18 = *unaff_x26;
  *(undefined8 *)(unaff_x19 + 0x390) = unaff_x26[1];
  *(undefined8 *)(unaff_x19 + 0x388) = uVar18;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x390);
  lVar8 = _malloc(1);
  if (lVar8 == 0) {
    FUN_107c03c64(1,1);
  }
  else {
    _memcpy(lVar8,uVar18,1);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x390);
    lVar19 = *(long *)(unaff_x19 + 0x398);
    if (lVar19 == 0) {
      lVar9 = 1;
    }
    else {
      lVar9 = _malloc(lVar19);
      if (lVar9 == 0) {
        FUN_107c03c64(1,lVar19);
        goto LAB_100537af4;
      }
    }
    _memcpy(lVar9,uVar18,lVar19);
    *(undefined4 *)(unaff_x19 + 0x410) = 0xffffffff;
    *(undefined8 *)(unaff_x19 + 0x3a0) = 0;
    lVar26 = 1;
    *(undefined8 *)(unaff_x19 + 0x3a8) = 1;
    *(undefined8 *)(unaff_x19 + 0x3b0) = 0;
    *(undefined4 *)(unaff_x19 + 0x3b8) = 0;
    *(undefined8 *)(unaff_x19 + 0x3c0) = 1;
    *(long *)(unaff_x19 + 0x3c8) = lVar8;
    *(undefined8 *)(unaff_x19 + 0x3d0) = 1;
    *(undefined4 *)(unaff_x19 + 0x3d8) = 0;
    *(long *)(unaff_x19 + 0x3e0) = lVar19;
    *(long *)(unaff_x19 + 1000) = lVar9;
    *(long *)(unaff_x19 + 0x3f0) = lVar19;
    *(undefined4 *)(unaff_x19 + 0x3f8) = 0;
    *(undefined8 *)(unaff_x19 + 0x400) = 0;
    *(undefined4 *)(unaff_x19 + 0x408) = 0;
    *(undefined1 *)(unaff_x19 + 0x414) = 0;
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar19 = *(long *)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x41e) = 0;
    uVar18 = *(undefined8 *)(unaff_x19 + 200);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xd0);
    uVar24 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar20 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x248);
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x250);
    if ((lVar8 == 0) || (lVar26 = _malloc(lVar8), lVar26 != 0)) {
      _memcpy(lVar26,uVar20,lVar8);
      func_0x000106032954(0);
      func_0x000106032878(&stack0x00000478,&stack0x000003e0,&stack0x00000340);
      *(undefined1 *)(unaff_x19 + 0x41f) = 0;
      uVar30 = *(undefined8 *)(unaff_x19 + 0x70);
      uVar28 = *(undefined8 *)(unaff_x19 + 0x68);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x78);
      *(undefined2 *)(unaff_x19 + 0x41c) = 0;
      uVar20 = *(undefined8 *)(unaff_x19 + 0xf8);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x108);
      uVar31 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar29 = *(undefined8 *)(unaff_x19 + 0x110);
      uVar15 = *(undefined8 *)(unaff_x19 + 0x120);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x3a8);
      lVar25 = *(long *)(unaff_x19 + 0x3b0);
      if (lVar25 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar25);
        if (lVar10 == 0) {
          FUN_107c03c64(1,lVar25);
          goto LAB_100537af4;
        }
      }
      _memcpy(lVar10,uVar21,lVar25);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x3c8);
      lVar27 = *(long *)(unaff_x19 + 0x3d0);
      if (lVar27 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = _malloc(lVar27);
        if (lVar11 == 0) {
          FUN_107c03c64(1,lVar27);
          goto LAB_100537af4;
        }
      }
      _memcpy(lVar11,uVar21,lVar27);
      uVar21 = *(undefined8 *)(unaff_x19 + 1000);
      lVar22 = *(long *)(unaff_x19 + 0x3f0);
      if (lVar22 == 0) {
        lVar12 = 1;
      }
      else {
        lVar12 = _malloc(lVar22);
        if (lVar12 == 0) {
          FUN_107c03c64(1,lVar22);
          goto LAB_100537af4;
        }
      }
      _memcpy(lVar12,uVar21,lVar22);
      uVar3 = *(undefined4 *)(unaff_x19 + 0x410);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x400);
      uVar4 = *(undefined4 *)(unaff_x19 + 0x408);
      __ZN10codex_core5tools22format_exec_output_str17h00a2e2763156fec5E
                (&stack0x00000478,unaff_x19 + 0x3a0,
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x230),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x238));
      uVar33 = unaff_x26[1];
      uVar32 = *unaff_x26;
      *(undefined4 *)(unaff_x19 + 0x428) = 0x21;
      *(undefined8 *)(unaff_x19 + 0x430) = uVar18;
      *(undefined8 *)(unaff_x19 + 0x438) = uVar1;
      *(undefined8 *)(unaff_x19 + 0x440) = uVar24;
      *(long *)(unaff_x19 + 0x448) = lVar8;
      *(long *)(unaff_x19 + 0x450) = lVar26;
      *(long *)(unaff_x19 + 0x458) = lVar8;
      *(undefined8 *)(unaff_x19 + 0x468) = uVar30;
      *(undefined8 *)(unaff_x19 + 0x460) = uVar28;
      *(undefined8 *)(unaff_x19 + 0x470) = uVar17;
      *(undefined8 *)(unaff_x19 + 0x478) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x480) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x488) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x498) = uVar31;
      *(undefined8 *)(unaff_x19 + 0x490) = uVar29;
      *(undefined8 *)(unaff_x19 + 0x4a0) = uVar15;
      *(long *)(unaff_x19 + 0x4a8) = lVar25;
      *(long *)(unaff_x19 + 0x4b0) = lVar10;
      *(long *)(unaff_x19 + 0x4b8) = lVar25;
      *(long *)(unaff_x19 + 0x4c0) = lVar27;
      *(long *)(unaff_x19 + 0x4c8) = lVar11;
      *(long *)(unaff_x19 + 0x4d0) = lVar27;
      *(long *)(unaff_x19 + 0x4d8) = lVar22;
      *(long *)(unaff_x19 + 0x4e0) = lVar12;
      *(long *)(unaff_x19 + 0x4e8) = lVar22;
      *(undefined8 *)(unaff_x19 + 0x500) = 1;
      *(undefined8 *)(unaff_x19 + 0x4f8) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x4f0) = uVar32;
      *(undefined8 *)(unaff_x19 + 0x508) = 0x8000000000000000;
      *(undefined8 *)(unaff_x19 + 0x520) = 0x8000000000000000;
      *(undefined8 *)(unaff_x19 + 0x538) = uVar21;
      *(undefined4 *)(unaff_x19 + 0x540) = uVar4;
      *(undefined8 *)(unaff_x19 + 0x548) = 0;
      *(undefined4 *)(unaff_x19 + 0x550) = uVar3;
      *(undefined2 *)(unaff_x19 + 0x554) = 0x101;
      *(long *)(unaff_x19 + 0x608) = lVar9 + 0x10;
      *(long *)(unaff_x19 + 0x600) = lVar19 + 0x10;
      *(undefined1 *)(unaff_x19 + 0x9d0) = 0;
      iVar7 = FUN_10059e898(unaff_x19 + 0x428,in_stack_00000080);
      if (iVar7 == 0) {
        FUN_100d1ddbc(unaff_x19 + 0x428);
        *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0xe8);
        *(undefined8 *)(unaff_x19 + 0x4f0) = *(undefined8 *)(unaff_x19 + 0xf0);
        *(long *)(unaff_x19 + 0x528) = *(long *)(unaff_x19 + 0x38) + 0x10;
        *(long *)(unaff_x19 + 0x520) = *(long *)(unaff_x19 + 0x30) + 0x10;
        *(long *)(unaff_x19 + 0x530) = unaff_x19 + 0x3a0;
        *(undefined1 *)(unaff_x19 + 0x53c) = 0;
        *(undefined1 *)(unaff_x19 + 0x53d) = *(undefined1 *)(unaff_x19 + 0x41a);
        iVar7 = FUN_100534f24(unaff_x19 + 0x428,in_stack_00000080);
        if (iVar7 == 0) {
          FUN_100cb43ac(unaff_x19 + 0x428);
          if (*(long *)(unaff_x19 + 0x3a0) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x3a8));
          }
          if (*(long *)(unaff_x19 + 0x3c0) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x3c8));
          }
          if (*(long *)(unaff_x19 + 0x3e0) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 1000));
          }
          if (*(long *)(unaff_x19 + 0x388) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x390));
          }
          FUN_100df5738(unaff_x19 + 0x2f0);
          if (*(long *)(unaff_x19 + 0x150) != -0x7fffffffffffffdf) {
            *(undefined1 *)(unaff_x19 + 0x41b) = 0;
          }
          *(undefined1 *)(unaff_x19 + 0x41b) = 0;
          *(undefined1 *)(unaff_x19 + 0x423) = 0;
          uVar16 = *(ulong *)(unaff_x19 + 0x128);
          bVar6 = uVar16 != 0x8000000000000000;
          if (uVar16 < 0x8000000000000001) {
            uVar16 = 0;
          }
          if ((bVar6) && ((uVar16 & 0x7fffffffffffffff) == 0)) {
            FUN_100e79780(unaff_x19 + 0x128);
          }
          if ((*(byte *)(unaff_x19 + 0x41c) & 1) != 0) {
            lVar19 = *(long *)(unaff_x19 + 0x118);
            lVar8 = lVar19;
            for (lVar9 = *(long *)(unaff_x19 + 0x120); lVar9 != 0; lVar9 = lVar9 + -1) {
              FUN_100e1d024(lVar8);
              lVar8 = lVar8 + 0x50;
            }
            if (*(long *)(unaff_x19 + 0x110) != 0) {
              _free(lVar19);
            }
          }
          *(undefined1 *)(unaff_x19 + 0x41c) = 0;
          if (((*(byte *)(unaff_x19 + 0x41d) & 1) != 0) && (*(long *)(unaff_x19 + 0xf8) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x100));
          }
          *(undefined1 *)(unaff_x19 + 0x41d) = 0;
          if (*(long *)(unaff_x19 + 0xe0) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0xe8));
          }
          if (((*(byte *)(unaff_x19 + 0x41e) & 1) != 0) && (*(long *)(unaff_x19 + 200) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0xd0));
          }
          *(undefined1 *)(unaff_x19 + 0x41e) = 0;
          lVar8 = *(long *)(unaff_x19 + 0xb8);
          lVar19 = *(long *)(unaff_x19 + 0xc0);
          if (lVar19 != 0) {
            puVar23 = (undefined8 *)(lVar8 + 8);
            do {
              if (puVar23[-1] != 0) {
                _free(*puVar23);
              }
              puVar23 = puVar23 + 3;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          if (*(long *)(unaff_x19 + 0xb0) != 0) {
            _free(lVar8);
          }
          *(undefined1 *)(unaff_x19 + 0x421) = 0;
          if ((*(byte *)(unaff_x19 + 0x41f) & 1) != 0) {
            lVar8 = *(long *)(unaff_x19 + 0x70);
            lVar19 = *(long *)(unaff_x19 + 0x78);
            if (lVar19 != 0) {
              puVar23 = (undefined8 *)(lVar8 + 8);
              do {
                if (puVar23[-1] != 0) {
                  _free(*puVar23);
                }
                puVar23 = puVar23 + 3;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (*(long *)(unaff_x19 + 0x68) != 0) {
              _free(lVar8);
            }
          }
          *(undefined1 *)(unaff_x19 + 0x41f) = 0;
          lVar8 = **(long **)(unaff_x19 + 0x60);
          **(long **)(unaff_x19 + 0x60) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h720d6d94d44d546aE();
          }
          __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                    (unaff_x19 + 0x58);
          lVar8 = **(long **)(unaff_x19 + 0x58);
          **(long **)(unaff_x19 + 0x58) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x58);
          }
          *(undefined1 *)(unaff_x19 + 0x422) = 0;
          lVar8 = **(long **)(unaff_x19 + 0x38);
          **(long **)(unaff_x19 + 0x38) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
          }
          lVar8 = **(long **)(in_stack_00000088 + 0x30);
          **(long **)(in_stack_00000088 + 0x30) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
          }
          uVar18 = 0;
          uVar13 = 1;
          unaff_x19 = in_stack_00000088;
        }
        else {
          uVar18 = 1;
          uVar13 = 0xc;
        }
      }
      else {
        uVar18 = 1;
        uVar13 = 0xb;
      }
      *(undefined1 *)(unaff_x19 + 0x419) = uVar13;
      return uVar18;
    }
    FUN_107c03c64(1,lVar8);
  }
LAB_100537af4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100537af8);
  (*pcVar5)();
}

