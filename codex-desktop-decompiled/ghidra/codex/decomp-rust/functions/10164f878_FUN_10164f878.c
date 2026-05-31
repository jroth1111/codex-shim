
undefined1  [16] FUN_10164f878(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  undefined1 unaff_w20;
  ulong uVar16;
  long *plVar17;
  undefined8 unaff_x22;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *unaff_x24;
  uint *puVar21;
  ulong uVar22;
  undefined8 unaff_x25;
  undefined8 uVar23;
  undefined8 unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar24 [16];
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  char cStack0000000000000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000240,s_tui_skill_config_write__108ada0fb,&stack0x00000180);
  plVar17 = (long *)(unaff_x19 + 0x38);
  *plVar17 = unaff_x27 + 0x32;
  *(undefined1 *)(unaff_x19 + 0x92a) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000248;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000240;
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000250;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x28;
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x26;
  *(undefined8 *)(unaff_x19 + 0x68) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x70) = unaff_x25;
  *(undefined1 *)(unaff_x19 + 0x88) = unaff_w20;
  *(uint **)(unaff_x19 + 0x1f8) = unaff_x24;
  *(undefined1 *)(unaff_x19 + 0x200) = 0;
  puVar21 = unaff_x24 + 2;
  uVar1 = *unaff_x24;
  lVar14 = unaff_x19 + 0x208;
  _memcpy(lVar14,plVar17,0x1c0);
  *(uint **)(unaff_x19 + 0x3c8) = puVar21;
  *(undefined1 *)(unaff_x19 + 0x920) = 0;
  if ((uVar1 & 1) == 0) {
    *(undefined2 *)(unaff_x19 + 0x921) = 0x100;
    _memcpy(unaff_x19 + 0x3d0,lVar14,0x1c0);
    __ZN23codex_app_server_client19request_method_name17hc726caaf26acecfbE
              (unaff_x19 + 0x590,unaff_x19 + 0x3d0);
    *(undefined2 *)(unaff_x19 + 0x921) = 1;
    _memcpy(unaff_x19 + 0x5a8,unaff_x19 + 0x3d0,0x1c0);
    *(uint **)(unaff_x19 + 0x768) = puVar21;
    *(undefined1 *)(unaff_x19 + 0x770) = 0;
    func_0x000100b7e07c(&stack0x00000180,unaff_x19 + 0x5a8);
    uVar9 = in_stack_000001e0;
    uVar8 = in_stack_000001d8;
    uVar12 = in_stack_000001d0;
    uVar7 = in_stack_000001c8;
    uVar6 = in_stack_000001c0;
    uVar5 = in_stack_000001b8;
    uVar4 = in_stack_000001b0;
    uVar3 = in_stack_000001a8;
    uVar2 = in_stack_000001a0;
    uVar18 = in_stack_00000198;
    uVar15 = in_stack_00000190;
    uVar16 = in_stack_00000188;
    uVar20 = _cStack0000000000000180;
    if (_cStack0000000000000180 == unaff_x27) {
      *(undefined1 *)(unaff_x19 + 0x920) = 3;
    }
    else {
      FUN_100cbc1e8(unaff_x19 + 0x5a8);
      if (uVar20 == 0x8000000000000001) {
        _cStack0000000000000180 = uVar16;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x598);
        uVar19 = *(ulong *)(unaff_x19 + 0x5a0);
        if (uVar19 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = _malloc(uVar19);
          if (uVar11 == 0) {
            func_0x0001087c9084(1,uVar19);
            goto LAB_1016500d8;
          }
        }
        _memcpy(uVar11,uVar12,uVar19);
        uVar22 = 0x8000000000000000;
        lVar14 = *(long *)(unaff_x19 + 0x590);
        uVar20 = uVar19;
      }
      else {
        if (uVar20 == 0x8000000000000000) {
          in_stack_00000188 = uVar4;
          _cStack0000000000000180 = uVar3;
          in_stack_00000198 = uVar6;
          in_stack_00000190 = uVar5;
          in_stack_000001a0 = uVar7;
          uVar16 = uVar2;
          uVar20 = uVar18;
LAB_10164fcb0:
          FUN_10066b23c(&stack0x00000180,&stack0x000002a8);
          goto LAB_10164fce0;
        }
        uVar22 = *(ulong *)(unaff_x19 + 0x5a0);
        if (uVar22 == 0) {
          uVar19 = 1;
          uVar11 = 0;
        }
        else {
          uVar23 = *(undefined8 *)(unaff_x19 + 0x598);
          uVar19 = _malloc(uVar22);
          if (uVar19 == 0) {
            func_0x0001087c9084(1,uVar22);
            goto LAB_1016500d8;
          }
          _memcpy(uVar19,uVar23,uVar22);
          in_stack_00000188 = uVar18;
          _cStack0000000000000180 = uVar15;
          in_stack_00000198 = uVar3;
          in_stack_00000190 = uVar2;
          in_stack_000001a0 = uVar4;
          uVar11 = uVar22;
          if (uVar22 == 0x8000000000000003) goto LAB_10164fcb0;
        }
        *(ulong *)(unaff_x29 + -0x90) = uVar6;
        *(ulong *)(unaff_x29 + -0x98) = uVar5;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar12;
        *(ulong *)(unaff_x29 + -0x88) = uVar7;
        *(undefined8 *)(unaff_x29 + -0x70) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
        *(ulong *)(unaff_x29 + -0xb8) = uVar18;
        *(ulong *)(unaff_x29 + -0xc0) = uVar15;
        *(ulong *)(unaff_x29 + -0xa8) = uVar3;
        *(ulong *)(unaff_x29 + -0xb0) = uVar2;
        *(ulong *)(unaff_x29 + -0xa0) = uVar4;
        lVar14 = *(long *)(unaff_x19 + 0x590);
      }
      if (lVar14 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x598));
      }
      *(undefined1 *)(unaff_x19 + 0x922) = 0;
      in_stack_000000e8 = *(undefined8 *)(unaff_x29 + -0x98);
      in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_000000f8 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0x90);
      in_stack_00000108 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x80);
      in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0x70);
      in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0xb8);
      in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0xc0);
      in_stack_000000d8 = *(undefined8 *)(unaff_x29 + -0xa8);
      in_stack_000000d0 = *(undefined8 *)(unaff_x29 + -0xb0);
      *(undefined2 *)(unaff_x19 + 0x920) = 1;
      if (uVar22 != unaff_x27 + 2) goto LAB_10164fe48;
    }
    uVar13 = 3;
  }
  else {
    *(undefined2 *)(unaff_x19 + 0x921) = 0x100;
    _memcpy(unaff_x19 + 0x3d0,lVar14,0x1c0);
    __ZN23codex_app_server_client19request_method_name17hc726caaf26acecfbE
              (unaff_x19 + 0x590,unaff_x19 + 0x3d0);
    *(undefined2 *)(unaff_x19 + 0x921) = 1;
    _memcpy(unaff_x19 + 0x5a8,unaff_x19 + 0x3d0,0x1c0);
    *(uint **)(unaff_x19 + 0x768) = puVar21;
    *(undefined1 *)(unaff_x19 + 0x770) = 0;
    func_0x000100b8e6b8(&stack0x00000180,unaff_x19 + 0x5a8);
    uVar9 = in_stack_000001e0;
    uVar8 = in_stack_000001d8;
    uVar12 = in_stack_000001d0;
    uVar7 = in_stack_000001c8;
    uVar6 = in_stack_000001c0;
    uVar5 = in_stack_000001b8;
    uVar4 = in_stack_000001b0;
    uVar3 = in_stack_000001a8;
    uVar2 = in_stack_000001a0;
    uVar18 = in_stack_00000198;
    uVar15 = in_stack_00000190;
    uVar16 = in_stack_00000188;
    uVar20 = _cStack0000000000000180;
    if (_cStack0000000000000180 == unaff_x27) {
      *(undefined1 *)(unaff_x19 + 0x920) = 3;
      uVar13 = 4;
    }
    else {
      FUN_100cbc1e8(unaff_x19 + 0x5a8);
      if (uVar20 == 0x8000000000000001) {
        _cStack0000000000000180 = uVar16;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x598);
        uVar19 = *(ulong *)(unaff_x19 + 0x5a0);
        if (uVar19 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = _malloc(uVar19);
          if (uVar11 == 0) {
            func_0x0001087c9084(1,uVar19);
LAB_1016500d8:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1016500dc);
            (*pcVar10)();
          }
        }
        _memcpy(uVar11,uVar12,uVar19);
        uVar22 = 0x8000000000000000;
        lVar14 = *(long *)(unaff_x19 + 0x590);
        uVar20 = uVar19;
      }
      else {
        if (uVar20 == 0x8000000000000000) {
          in_stack_00000188 = uVar4;
          _cStack0000000000000180 = uVar3;
          in_stack_00000198 = uVar6;
          in_stack_00000190 = uVar5;
          in_stack_000001a0 = uVar7;
          uVar16 = uVar2;
          uVar20 = uVar18;
LAB_10164fc28:
          FUN_10066b23c(&stack0x00000180,&stack0x000002a8);
LAB_10164fce0:
          *(undefined1 *)(unaff_x19 + 0x921) = 0;
          uVar15 = *(ulong *)(unaff_x19 + 0x590);
          uVar11 = *(ulong *)(unaff_x19 + 0x598);
          if (cStack0000000000000180 == '\x01') {
            uVar20 = *(ulong *)(unaff_x19 + 0x5a0);
            uVar19 = uVar15 & 0xffffffffffffff00;
            uVar16 = in_stack_00000188;
            uVar18 = uVar15;
            uVar22 = unaff_x27;
          }
          else {
            uVar18 = _cStack0000000000000180 >> 8 & 0xff;
            if (uVar15 != 0) {
              _free(uVar11);
            }
            uVar19 = 0;
            uVar22 = 0x8000000000000003;
          }
          *(undefined1 *)(unaff_x19 + 0x922) = 0;
          uVar19 = uVar19 | uVar18 & 0xff;
          in_stack_000000e8 = *(undefined8 *)(unaff_x29 + -0x98);
          in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0xa0);
          in_stack_000000f8 = *(undefined8 *)(unaff_x29 + -0x88);
          in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0x90);
          in_stack_00000108 = *(undefined8 *)(unaff_x29 + -0x78);
          in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x80);
          in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0x70);
          in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0xb8);
          in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0xc0);
          in_stack_000000d8 = *(undefined8 *)(unaff_x29 + -0xa8);
          in_stack_000000d0 = *(undefined8 *)(unaff_x29 + -0xb0);
          *(undefined2 *)(unaff_x19 + 0x920) = 1;
          goto LAB_10164fe48;
        }
        uVar22 = *(ulong *)(unaff_x19 + 0x5a0);
        if (uVar22 == 0) {
          uVar19 = 1;
          uVar11 = 0;
        }
        else {
          uVar23 = *(undefined8 *)(unaff_x19 + 0x598);
          uVar19 = _malloc(uVar22);
          if (uVar19 == 0) {
            func_0x0001087c9084(1,uVar22);
            goto LAB_1016500d8;
          }
          _memcpy(uVar19,uVar23,uVar22);
          in_stack_00000188 = uVar18;
          _cStack0000000000000180 = uVar15;
          in_stack_00000198 = uVar3;
          in_stack_00000190 = uVar2;
          in_stack_000001a0 = uVar4;
          uVar11 = uVar22;
          if (uVar22 == 0x8000000000000003) goto LAB_10164fc28;
        }
        *(ulong *)(unaff_x29 + -0x90) = uVar6;
        *(ulong *)(unaff_x29 + -0x98) = uVar5;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar12;
        *(ulong *)(unaff_x29 + -0x88) = uVar7;
        *(undefined8 *)(unaff_x29 + -0x70) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
        *(ulong *)(unaff_x29 + -0xb8) = uVar18;
        *(ulong *)(unaff_x29 + -0xc0) = uVar15;
        *(ulong *)(unaff_x29 + -0xa8) = uVar3;
        *(ulong *)(unaff_x29 + -0xb0) = uVar2;
        *(ulong *)(unaff_x29 + -0xa0) = uVar4;
        lVar14 = *(long *)(unaff_x19 + 0x590);
      }
      if (lVar14 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x598));
      }
      *(undefined1 *)(unaff_x19 + 0x922) = 0;
      in_stack_000000e8 = *(undefined8 *)(unaff_x29 + -0x98);
      in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_000000f8 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0x90);
      in_stack_00000108 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x80);
      in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0x70);
      in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0xb8);
      in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0xc0);
      in_stack_000000d8 = *(undefined8 *)(unaff_x29 + -0xa8);
      in_stack_000000d0 = *(undefined8 *)(unaff_x29 + -0xb0);
      *(undefined2 *)(unaff_x19 + 0x920) = 1;
      if (uVar22 != unaff_x27 + 2) {
LAB_10164fe48:
        in_stack_00000148 = in_stack_000000e8;
        in_stack_00000140 = in_stack_000000e0;
        in_stack_00000158 = in_stack_000000f8;
        in_stack_00000150 = in_stack_000000f0;
        in_stack_00000168 = in_stack_00000108;
        in_stack_00000160 = in_stack_00000100;
        in_stack_00000170 = in_stack_00000110;
        in_stack_00000128 = in_stack_000000c8;
        in_stack_00000120 = in_stack_000000c0;
        in_stack_00000138 = in_stack_000000d8;
        in_stack_00000130 = in_stack_000000d0;
        *(undefined1 *)(unaff_x19 + 0x200) = 1;
        in_stack_00000090 = in_stack_000000e8;
        in_stack_00000088 = in_stack_000000e0;
        in_stack_000000a0 = in_stack_000000f8;
        in_stack_00000098 = in_stack_000000f0;
        in_stack_000000b0 = in_stack_00000108;
        in_stack_000000a8 = in_stack_00000100;
        in_stack_00000070 = in_stack_000000c8;
        in_stack_00000068 = in_stack_000000c0;
        in_stack_000000b8 = in_stack_00000110;
        in_stack_00000080 = in_stack_000000d8;
        in_stack_00000078 = in_stack_000000d0;
        in_stack_00000040 = uVar22;
        in_stack_00000048 = uVar19;
        in_stack_00000050 = uVar11;
        in_stack_00000058 = uVar20;
        in_stack_00000060 = uVar16;
        FUN_100d7ee48(plVar17);
        if (uVar22 == 0x8000000000000003) {
          *(undefined1 *)(unaff_x19 + 0x92a) = 0;
          FUN_100e23d1c(unaff_x19 + 0x28);
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = (long *)FUN_100f14b68(&stack0x00000040,&UNK_108cd7853,0x21,&UNK_10b2505e0);
          *(undefined1 *)(unaff_x19 + 0x92a) = 0;
          FUN_100e23d1c(unaff_x19 + 0x28);
        }
        uVar12 = 0;
        *(undefined1 *)(unaff_x19 + 0x929) = 1;
        goto LAB_10164ff08;
      }
      uVar13 = 4;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x200) = uVar13;
  *(undefined1 *)(unaff_x19 + 0x929) = 3;
  uVar12 = 1;
LAB_10164ff08:
  auVar24._8_8_ = plVar17;
  auVar24._0_8_ = uVar12;
  return auVar24;
}

