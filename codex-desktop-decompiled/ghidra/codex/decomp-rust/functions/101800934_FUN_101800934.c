
void FUN_101800934(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined *unaff_x23;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 unaff_x27;
  long lVar15;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 *in_stack_00000018;
  long in_stack_00000050;
  undefined *in_stack_00000058;
  long in_stack_00000060;
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
  undefined *in_stack_000000f0;
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
            (&stack0x000000e8,s_agents___description_108ac0ea1,&stack0x00000050);
  puVar3 = in_stack_000000f0;
  lVar15 = in_stack_000000e8;
  plVar8 = (long *)unaff_x19[0x10];
  lVar13 = *plVar8;
  lVar2 = plVar8[1];
  lVar4 = plVar8[2];
  *(undefined **)(unaff_x29 + -0x90) = in_stack_000000f0;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000000f8;
  if (lVar13 == -0x8000000000000000) {
    lVar13 = -0x8000000000000000;
LAB_1018009b0:
    if (lVar15 != 0) {
      _free(puVar3);
    }
    *(undefined8 *)(unaff_x29 + -0x90) = unaff_x27;
    *(long *)(unaff_x29 + -0x88) = unaff_x21;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000e8,s_agents___nickname_candidates_108ac0eb8,unaff_x29 + -0x90);
    puVar3 = in_stack_000000f0;
    lVar2 = in_stack_000000e8;
    lVar4 = unaff_x19[0x10];
    uVar7 = 0;
    if (*(long *)(lVar4 + 0x30) != -0x8000000000000000) {
      uVar7 = *(undefined8 *)(lVar4 + 0x38);
    }
    __ZN10codex_core6config11agent_roles40normalize_agent_role_nickname_candidates17hfa7ddf3b22a0fc59E
              (&stack0x00000050,in_stack_000000f0,in_stack_000000f8,uVar7,
               *(undefined8 *)(lVar4 + 0x40));
    lVar4 = in_stack_00000060;
    puVar11 = in_stack_00000058;
    unaff_x21 = in_stack_00000050;
    if (in_stack_00000050 == -0x7fffffffffffffff) {
      if (lVar2 != 0) {
        _free(puVar3);
      }
      if (lVar13 == -0x8000000000000000) {
        uVar6 = unaff_x19[0x11];
        unaff_x23 = puVar11;
      }
      else {
        _free(unaff_x23);
        uVar6 = unaff_x19[0x11];
        unaff_x23 = puVar11;
      }
      goto joined_r0x000101800b40;
    }
    if (lVar2 != 0) {
      _free(puVar3);
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    puVar3 = (undefined *)unaff_x19[0x11];
    if (puVar3 != (undefined *)0x8000000000000000) {
      uVar7 = unaff_x19[0x12];
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19[0x13];
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar7;
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
  }
  else {
    auVar19 = FUN_1033f63d0(lVar2,lVar4);
    lVar13 = auVar19._8_8_;
    if (lVar13 == 0) {
      in_stack_00000050 = unaff_x29 + -0x90;
      in_stack_00000058 = &DAT_103296230;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000e8,s_cannot_be_blank_108af4edc,&stack0x00000050);
      unaff_x23 = (undefined *)
                  __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x000000e8);
    }
    else {
      unaff_x23 = (undefined *)_malloc(lVar13);
      if (unaff_x23 == (undefined *)0x0) {
        func_0x0001087c9084(1,lVar13);
        goto LAB_101800f60;
      }
      _memcpy(unaff_x23,auVar19._0_8_,lVar13);
      if (lVar13 != -0x7fffffffffffffff) goto LAB_1018009b0;
    }
    if (lVar15 != 0) {
      _free(puVar3);
    }
    uVar6 = unaff_x19[0x11];
joined_r0x000101800b40:
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[0x12]);
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    lVar13 = -0x7fffffffffffffff;
    puVar11 = unaff_x23;
    lVar4 = lVar15;
  }
  uVar16 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xa0);
  *in_stack_00000018 = 1;
  FUN_1019360fc(unaff_x27);
  uVar7 = 0x8000000000000001;
  if (lVar13 == -0x7fffffffffffffff) {
LAB_101800d28:
    *(undefined2 *)(unaff_x19 + 9) = 0;
    uVar9 = 0x8000000000000000;
  }
  else {
    *(undefined2 *)(unaff_x19 + 9) = 0x101;
    unaff_x19[10] = lVar13;
    unaff_x19[0xb] = unaff_x23;
    unaff_x19[0xc] = lVar13;
    unaff_x19[0xd] = puVar3;
    unaff_x19[0xf] = uVar16;
    unaff_x19[0xe] = uVar9;
    unaff_x19[0x10] = unaff_x21;
    unaff_x19[0x11] = puVar11;
    unaff_x19[0x12] = lVar4;
    uVar7 = unaff_x19[2];
    lVar13 = unaff_x19[3];
    if (lVar13 == 0) {
      lVar2 = 1;
    }
    else {
      lVar2 = _malloc(lVar13);
      if (lVar2 == 0) {
        func_0x0001087c9084(1,lVar13);
LAB_101800f60:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101800f64);
        (*pcVar1)();
      }
    }
    _memcpy(lVar2,uVar7,lVar13);
    unaff_x19[0x13] = lVar13;
    unaff_x19[0x14] = lVar2;
    unaff_x19[0x15] = lVar13;
    if (unaff_x19[0xd] != -0x8000000000000000) {
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&stack0x00000050,unaff_x19[0xe],unaff_x19[0xf]);
      puVar3 = in_stack_00000058;
      __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
                (&stack0x000000e8,in_stack_00000058,in_stack_00000060);
      uVar7 = in_stack_000000f8;
      puVar11 = in_stack_000000f0;
      lVar13 = in_stack_000000e8;
      if (in_stack_000000e8 == -0x8000000000000000) {
        unaff_x23 = in_stack_000000f0;
        if (in_stack_00000050 != 0) {
LAB_101800d0c:
          _free(puVar3);
        }
      }
      else {
        if (in_stack_00000050 != 0) {
          _free(puVar3);
        }
        unaff_x19[0x16] = lVar13;
        unaff_x19[0x17] = puVar11;
        unaff_x19[0x18] = uVar7;
        unaff_x19[0x1a] = unaff_x19[1];
        unaff_x19[0x19] = *unaff_x19;
        unaff_x19[0x1b] = unaff_x19 + 0x16;
        unaff_x19[0x1c] = unaff_x19[2];
        unaff_x19[0x1d] = unaff_x19[3];
        *(undefined1 *)(unaff_x19 + 0x23) = 0;
        FUN_101801194(&stack0x000000e8,unaff_x19 + 0x19);
        uVar16 = in_stack_00000178;
        uVar9 = in_stack_00000170;
        uVar7 = in_stack_00000168;
        unaff_x23 = in_stack_000000f0;
        lVar13 = in_stack_000000e8;
        if (in_stack_000000e8 == -0x7fffffffffffffff) {
          *unaff_x20 = 0x8000000000000001;
          uVar5 = 4;
          goto LAB_101800ec8;
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
          uVar17 = unaff_x19[0x21];
          puVar14 = (undefined8 *)unaff_x19[0x22];
          pcVar1 = (code *)*puVar14;
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(uVar17);
          }
          if (puVar14[1] != 0) {
            _free(uVar17);
          }
        }
        if (lVar13 != -0x8000000000000000) {
          in_stack_000000c8 = in_stack_000001e8;
          in_stack_000000c0 = in_stack_000001e0;
          in_stack_000000d8 = uVar9;
          in_stack_000000d0 = uVar7;
          in_stack_000000e0 = uVar16;
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
          in_stack_00000050 = lVar13;
          in_stack_00000058 = unaff_x23;
          if (unaff_x19[0x13] != 0) {
            _free(unaff_x19[0x14]);
          }
          uVar9 = in_stack_00000078;
          uVar7 = in_stack_00000070;
          uVar6 = in_stack_00000068;
          unaff_x19[0x14] = in_stack_00000058;
          unaff_x19[0x13] = in_stack_00000050;
          unaff_x19[0x15] = in_stack_00000060;
          *(undefined1 *)((long)unaff_x19 + 0x49) = 0;
          if (in_stack_00000068 == 0x8000000000000000) {
            uVar9 = unaff_x19[0xc];
            uVar7 = unaff_x19[0xb];
            uVar6 = unaff_x19[10];
          }
          else if ((unaff_x19[10] & 0x7fffffffffffffff) != 0) {
            _free();
          }
          unaff_x19[10] = uVar6;
          unaff_x19[0xb] = uVar7;
          unaff_x19[0xc] = uVar9;
          *(undefined2 *)(unaff_x19 + 9) = 0x100;
          lVar13 = unaff_x19[0x10];
          lVar2 = unaff_x19[0x11];
          lVar15 = unaff_x19[0x12];
          lVar4 = lVar13;
          lVar10 = lVar2;
          lVar12 = lVar15;
          if ((in_stack_00000080 != -0x8000000000000000) &&
             (lVar4 = in_stack_00000080, lVar10 = in_stack_00000088, lVar12 = in_stack_00000090,
             lVar13 != -0x8000000000000000)) {
            if (lVar15 != 0) {
              puVar14 = (undefined8 *)(lVar2 + 8);
              do {
                if (puVar14[-1] != 0) {
                  _free(*puVar14);
                }
                puVar14 = puVar14 + 3;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            if (lVar13 != 0) {
              _free(lVar2);
            }
          }
          *(undefined1 *)(unaff_x19 + 9) = 1;
          unaff_x19[0x10] = lVar4;
          unaff_x19[0x11] = lVar10;
          unaff_x19[0x12] = lVar12;
          FUN_10194c9ac(&stack0x00000098);
          if (unaff_x19[0x16] != 0) {
            _free(unaff_x19[0x17]);
          }
          goto LAB_101800e7c;
        }
        if (unaff_x19[0x16] != 0) {
          puVar3 = (undefined *)unaff_x19[0x17];
          goto LAB_101800d0c;
        }
      }
      if (unaff_x19[0x13] != 0) {
        _free(unaff_x19[0x14]);
      }
      FUN_101951d58(unaff_x19 + 10);
      uVar7 = extraout_x8;
      goto LAB_101800d28;
    }
LAB_101800e7c:
    unaff_x23 = (undefined *)unaff_x19[0x14];
    uVar7 = unaff_x19[0x15];
    uVar9 = unaff_x19[0xe];
    uVar17 = unaff_x19[0x11];
    uVar16 = unaff_x19[0x10];
    *(undefined8 *)(unaff_x29 + -200) = unaff_x19[0xf];
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar9;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar17;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar16;
    uVar9 = unaff_x19[0x13];
    *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x19[0x12];
    uVar18 = unaff_x19[10];
    uVar17 = unaff_x19[0xd];
    uVar16 = unaff_x19[0xc];
    *(undefined8 *)(unaff_x29 + -0xe8) = unaff_x19[0xb];
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar18;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar17;
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar16;
    *(undefined2 *)(unaff_x19 + 9) = 0;
  }
  *unaff_x20 = uVar9;
  unaff_x20[1] = unaff_x23;
  unaff_x20[2] = uVar7;
  uVar16 = *(undefined8 *)(unaff_x29 + -0xe8);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xf0);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xe0);
  unaff_x20[6] = *(undefined8 *)(unaff_x29 + -0xd8);
  unaff_x20[5] = uVar7;
  uVar7 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar18 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar17 = *(undefined8 *)(unaff_x29 + -0xc0);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -200);
  unaff_x20[7] = uVar7;
  unaff_x20[10] = uVar18;
  unaff_x20[9] = uVar17;
  unaff_x20[0xb] = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar5 = 1;
  unaff_x20[4] = uVar16;
  unaff_x20[3] = uVar9;
LAB_101800ec8:
  *(undefined1 *)((long)unaff_x19 + 0x4a) = uVar5;
  return;
}

