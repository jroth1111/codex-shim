
void FUN_100557968(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar9;
  long unaff_x23;
  long lVar10;
  long lVar11;
  long unaff_x25;
  undefined8 *puVar12;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
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
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000e8,s_agents___nickname_candidates_108ac0eb8,unaff_x29 + -0x90);
  lVar2 = in_stack_000000f0;
  lVar3 = in_stack_000000e8;
  lVar5 = unaff_x19[0x10];
  uVar8 = 0;
  if (*(long *)(lVar5 + 0x30) != -0x8000000000000000) {
    uVar8 = *(undefined8 *)(lVar5 + 0x38);
  }
  __ZN10codex_core6config11agent_roles40normalize_agent_role_nickname_candidates17hfa7ddf3b22a0fc59E
            (&stack0x00000050,in_stack_000000f0,in_stack_000000f8,uVar8,
             *(undefined8 *)(lVar5 + 0x40));
  uVar8 = in_stack_00000060;
  lVar9 = in_stack_00000058;
  lVar5 = in_stack_00000050;
  if (in_stack_00000050 == -0x7fffffffffffffff) {
    if (lVar3 != 0) {
      _free(lVar2);
    }
    if (unaff_x25 == -0x8000000000000000) {
      uVar6 = unaff_x19[0x11];
    }
    else {
      _free();
      uVar6 = unaff_x19[0x11];
    }
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[0x12]);
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    unaff_x25 = -0x7fffffffffffffff;
    unaff_x23 = lVar9;
    uVar8 = unaff_x28;
  }
  else {
    if (lVar3 != 0) {
      _free(lVar2);
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    lVar2 = unaff_x19[0x11];
    if (lVar2 != -0x8000000000000000) {
      uVar7 = unaff_x19[0x12];
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19[0x13];
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar7;
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
  }
  uVar14 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar13 = *(undefined8 *)(unaff_x29 + -0xa0);
  *in_stack_00000018 = 1;
  FUN_100cc41c0(in_stack_00000010);
  uVar7 = 0x8000000000000001;
  if (unaff_x25 == -0x7fffffffffffffff) {
LAB_100557ccc:
    *(undefined2 *)(unaff_x19 + 9) = 0;
    uVar8 = 0x8000000000000000;
  }
  else {
    *(undefined2 *)(unaff_x19 + 9) = 0x101;
    unaff_x19[10] = unaff_x25;
    unaff_x19[0xb] = unaff_x23;
    unaff_x19[0xc] = unaff_x25;
    unaff_x19[0xd] = lVar2;
    unaff_x19[0xf] = uVar14;
    unaff_x19[0xe] = uVar13;
    unaff_x19[0x10] = lVar5;
    unaff_x19[0x11] = lVar9;
    unaff_x19[0x12] = uVar8;
    uVar8 = unaff_x19[2];
    lVar3 = unaff_x19[3];
    if (lVar3 == 0) {
      lVar2 = 1;
    }
    else {
      lVar2 = _malloc(lVar3);
      if (lVar2 == 0) {
        FUN_107c03c64(1,lVar3);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100557f08);
        (*pcVar1)();
      }
    }
    _memcpy(lVar2,uVar8,lVar3);
    unaff_x19[0x13] = lVar3;
    unaff_x19[0x14] = lVar2;
    unaff_x19[0x15] = lVar3;
    if (unaff_x19[0xd] != -0x8000000000000000) {
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&stack0x00000050,unaff_x19[0xe],unaff_x19[0xf]);
      lVar3 = in_stack_00000058;
      __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
                (&stack0x000000e8,in_stack_00000058,in_stack_00000060);
      uVar8 = in_stack_000000f8;
      lVar5 = in_stack_000000f0;
      lVar2 = in_stack_000000e8;
      if (in_stack_000000e8 == -0x8000000000000000) {
        unaff_x23 = in_stack_000000f0;
        if (in_stack_00000050 != 0) {
LAB_100557cb0:
          _free(lVar3);
        }
      }
      else {
        if (in_stack_00000050 != 0) {
          _free(lVar3);
        }
        unaff_x19[0x16] = lVar2;
        unaff_x19[0x17] = lVar5;
        unaff_x19[0x18] = uVar8;
        unaff_x19[0x1a] = unaff_x19[1];
        unaff_x19[0x19] = *unaff_x19;
        unaff_x19[0x1b] = unaff_x19 + 0x16;
        unaff_x19[0x1c] = unaff_x19[2];
        unaff_x19[0x1d] = unaff_x19[3];
        *(undefined1 *)(unaff_x19 + 0x23) = 0;
        FUN_100558138(&stack0x000000e8,unaff_x19 + 0x19);
        uVar13 = in_stack_00000178;
        uVar7 = in_stack_00000170;
        uVar8 = in_stack_00000168;
        unaff_x23 = in_stack_000000f0;
        lVar3 = in_stack_000000e8;
        if (in_stack_000000e8 == -0x7fffffffffffffff) {
          *unaff_x20 = 0x8000000000000001;
          uVar4 = 4;
          goto LAB_100557e6c;
        }
        in_stack_000001e8 = in_stack_00000160;
        in_stack_000001e0 = in_stack_00000158;
        in_stack_000001a8 = in_stack_00000120;
        in_stack_000001a0 = in_stack_00000118;
        in_stack_000001b8 = in_stack_00000130;
        in_stack_000001b0 = in_stack_00000128;
        in_stack_000001c8 = in_stack_00000140;
        in_stack_000001c0 = in_stack_00000138;
        in_stack_000001d8 = in_stack_00000150;
        in_stack_000001d0 = in_stack_00000148;
        in_stack_00000188 = in_stack_00000100;
        in_stack_00000180 = in_stack_000000f8;
        in_stack_00000198 = in_stack_00000110;
        in_stack_00000190 = in_stack_00000108;
        if (*(char *)(unaff_x19 + 0x23) == '\x03') {
          uVar14 = unaff_x19[0x21];
          puVar12 = (undefined8 *)unaff_x19[0x22];
          pcVar1 = (code *)*puVar12;
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(uVar14);
          }
          if (puVar12[1] != 0) {
            _free(uVar14);
          }
        }
        if (lVar3 != -0x8000000000000000) {
          in_stack_000000c8 = in_stack_000001e8;
          in_stack_000000c0 = in_stack_000001e0;
          in_stack_000000d8 = uVar7;
          in_stack_000000d0 = uVar8;
          in_stack_000000e0 = uVar13;
          in_stack_00000088 = in_stack_000001a8;
          in_stack_00000080 = in_stack_000001a0;
          in_stack_00000098 = in_stack_000001b8;
          in_stack_00000090 = in_stack_000001b0;
          in_stack_000000a8 = in_stack_000001c8;
          in_stack_000000a0 = in_stack_000001c0;
          in_stack_000000b8 = in_stack_000001d8;
          in_stack_000000b0 = in_stack_000001d0;
          in_stack_00000068 = in_stack_00000188;
          in_stack_00000060 = in_stack_00000180;
          in_stack_00000078 = in_stack_00000198;
          in_stack_00000070 = in_stack_00000190;
          in_stack_00000050 = lVar3;
          in_stack_00000058 = unaff_x23;
          if (unaff_x19[0x13] != 0) {
            _free(unaff_x19[0x14]);
          }
          uVar7 = in_stack_00000078;
          uVar8 = in_stack_00000070;
          uVar6 = in_stack_00000068;
          unaff_x19[0x14] = in_stack_00000058;
          unaff_x19[0x13] = in_stack_00000050;
          unaff_x19[0x15] = in_stack_00000060;
          *(undefined1 *)((long)unaff_x19 + 0x49) = 0;
          if (in_stack_00000068 == 0x8000000000000000) {
            uVar7 = unaff_x19[0xc];
            uVar8 = unaff_x19[0xb];
            uVar6 = unaff_x19[10];
          }
          else if ((unaff_x19[10] & 0x7fffffffffffffff) != 0) {
            _free();
          }
          unaff_x19[10] = uVar6;
          unaff_x19[0xb] = uVar8;
          unaff_x19[0xc] = uVar7;
          *(undefined2 *)(unaff_x19 + 9) = 0x100;
          lVar3 = unaff_x19[0x10];
          lVar2 = unaff_x19[0x11];
          lVar5 = unaff_x19[0x12];
          lVar9 = lVar3;
          lVar10 = lVar2;
          lVar11 = lVar5;
          if ((in_stack_00000080 != -0x8000000000000000) &&
             (lVar9 = in_stack_00000080, lVar10 = in_stack_00000088, lVar11 = in_stack_00000090,
             lVar3 != -0x8000000000000000)) {
            if (lVar5 != 0) {
              puVar12 = (undefined8 *)(lVar2 + 8);
              do {
                if (puVar12[-1] != 0) {
                  _free(*puVar12);
                }
                puVar12 = puVar12 + 3;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
            if (lVar3 != 0) {
              _free(lVar2);
            }
          }
          *(undefined1 *)(unaff_x19 + 9) = 1;
          unaff_x19[0x10] = lVar9;
          unaff_x19[0x11] = lVar10;
          unaff_x19[0x12] = lVar11;
          FUN_100ddb5bc(&stack0x00000098);
          if (unaff_x19[0x16] != 0) {
            _free(unaff_x19[0x17]);
          }
          goto LAB_100557e20;
        }
        if (unaff_x19[0x16] != 0) {
          lVar3 = unaff_x19[0x17];
          goto LAB_100557cb0;
        }
      }
      if (unaff_x19[0x13] != 0) {
        _free(unaff_x19[0x14]);
      }
      FUN_100dff5f8(unaff_x19 + 10);
      uVar7 = extraout_x8;
      goto LAB_100557ccc;
    }
LAB_100557e20:
    unaff_x23 = unaff_x19[0x14];
    uVar7 = unaff_x19[0x15];
    uVar8 = unaff_x19[0xe];
    uVar14 = unaff_x19[0x11];
    uVar13 = unaff_x19[0x10];
    *(undefined8 *)(unaff_x29 + -200) = unaff_x19[0xf];
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar14;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar13;
    uVar8 = unaff_x19[0x13];
    *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x19[0x12];
    uVar15 = unaff_x19[10];
    uVar14 = unaff_x19[0xd];
    uVar13 = unaff_x19[0xc];
    *(undefined8 *)(unaff_x29 + -0xe8) = unaff_x19[0xb];
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar15;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar14;
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar13;
    *(undefined2 *)(unaff_x19 + 9) = 0;
  }
  *unaff_x20 = uVar8;
  unaff_x20[1] = unaff_x23;
  unaff_x20[2] = uVar7;
  uVar13 = *(undefined8 *)(unaff_x29 + -0xe8);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xf0);
  uVar8 = *(undefined8 *)(unaff_x29 + -0xe0);
  unaff_x20[6] = *(undefined8 *)(unaff_x29 + -0xd8);
  unaff_x20[5] = uVar8;
  uVar8 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xc0);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -200);
  unaff_x20[7] = uVar8;
  unaff_x20[10] = uVar15;
  unaff_x20[9] = uVar14;
  unaff_x20[0xb] = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar4 = 1;
  unaff_x20[4] = uVar13;
  unaff_x20[3] = uVar7;
LAB_100557e6c:
  *(undefined1 *)((long)unaff_x19 + 0x4a) = uVar4;
  return;
}

