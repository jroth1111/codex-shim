
/* WARNING: Removing unreachable block (ram,0x0001008cb1dc) */
/* WARNING: Removing unreachable block (ram,0x0001008cb134) */

void FUN_1008cae20(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 extraout_x13;
  undefined8 uVar13;
  undefined8 extraout_x14;
  undefined8 uVar14;
  undefined8 extraout_x15;
  byte *pbVar15;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar16;
  undefined1 *unaff_x22;
  long lVar17;
  long *unaff_x25;
  long lVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined1 *in_stack_00000010;
  undefined1 *puStack0000000000000020;
  undefined1 *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined1 *in_stack_00000060;
  undefined1 *in_stack_00000260;
  undefined1 *in_stack_00000268;
  undefined1 *in_stack_00000270;
  undefined1 *in_stack_00000278;
  undefined1 *in_stack_00000280;
  undefined1 *in_stack_00000288;
  undefined1 *in_stack_00000290;
  undefined1 *in_stack_00000298;
  undefined1 *in_stack_000002a0;
  undefined1 *in_stack_000002a8;
  undefined1 *in_stack_000002b0;
  undefined1 *in_stack_000002b8;
  undefined1 *in_stack_000002c0;
  undefined1 *in_stack_000002c8;
  undefined8 in_stack_00000330;
  undefined1 *in_stack_000004f0;
  undefined1 *in_stack_000004f8;
  long in_stack_000008b8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__failed_to_set_app_server_client_108aca6be,unaff_x29 + -0xf0);
  puVar19 = *(undefined1 **)(unaff_x29 + -0x78);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x27 + 0x3c8) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x27 + 0x3c0) = uVar6;
  FUN_100e11d38(&stack0x00000260);
  *(undefined1 *)(unaff_x28 + 0xfd2) = 0;
  lVar10 = *(long *)(unaff_x27 + 0x3c0);
  unaff_x25[0x4f] = *(long *)(unaff_x27 + 0x3c8);
  unaff_x25[0x4e] = lVar10;
  *(undefined2 *)(unaff_x28 + 0xfd0) = 1;
  if (puVar19 == (undefined1 *)0x8000000000000001) {
    uVar7 = 4;
    goto LAB_1008cb7b8;
  }
  lVar10 = unaff_x25[0x4e];
  *(long *)(unaff_x22 + 0x10) = unaff_x25[0x4f];
  *(long *)(unaff_x22 + 8) = lVar10;
  FUN_100d509dc();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x400);
  if (puVar19 == (undefined1 *)0x8000000000000000) {
    *(undefined1 *)(unaff_x20 + 0x7c0) = 0;
    uVar21 = *(undefined8 *)(unaff_x20 + 0x458);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x20 + 0x460);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar21;
    __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor28parse_environment_selections17h764a9b4490a0547fE
              (&stack0x00000260,uVar6,&stack0x00000550);
    unaff_x22 = in_stack_00000290;
    in_stack_00000010 = in_stack_00000280;
    puStack0000000000000020 = in_stack_000002c0;
    in_stack_00000028 = in_stack_000002b8;
    in_stack_00000030 = in_stack_000002a8;
    in_stack_00000038 = in_stack_000002b0;
    in_stack_00000040 = in_stack_000002a0;
    puVar19 = in_stack_00000298;
    if (in_stack_00000260 != (undefined1 *)0x8000000000000000) {
LAB_1008cb8fc:
      in_stack_00000048 = puVar19;
      *(undefined1 *)(unaff_x20 + 0x7b3) = 0;
      in_stack_000004f8 = in_stack_00000270;
      puVar19 = in_stack_00000260;
      unaff_x27 = in_stack_00000288;
      in_stack_000004f0 = in_stack_00000268;
      goto LAB_1008cb900;
    }
    *(undefined1 *)(unaff_x20 + 0x7b3) = 1;
    *(undefined1 **)(unaff_x20 + 0x7c8) = in_stack_00000268;
    *(undefined1 **)(unaff_x20 + 2000) = in_stack_00000270;
    *(undefined1 **)(unaff_x20 + 0x7d8) = in_stack_00000278;
    *(undefined1 *)(unaff_x20 + 0x7bf) = 0;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x440);
    pbVar9 = *(byte **)(unaff_x20 + 0x448);
    uVar12 = *(ulong *)(unaff_x20 + 0x450);
    pbVar11 = pbVar9;
    if (uVar12 != 0) {
      pbVar11 = pbVar9 + uVar12 * 0x38;
      uVar13 = extraout_x13;
      uVar14 = extraout_x14;
      uVar21 = extraout_x15;
      pbVar15 = pbVar9;
      do {
        bVar3 = 1 < *pbVar15 - 1;
        uVar4 = (uint)pbVar15[1];
        if (bVar3) {
          uVar4 = (uint)uVar12;
        }
        uVar12 = (ulong)uVar4;
        if (bVar3) {
          uVar21 = *(undefined8 *)(pbVar15 + 0x30);
          uVar14 = *(undefined8 *)(pbVar15 + 0x28);
          uVar13 = *(undefined8 *)(pbVar15 + 0x20);
        }
        pbVar15[1] = (byte)uVar4;
        *(undefined8 *)(pbVar15 + 0x20) = uVar13;
        *(undefined8 *)(pbVar15 + 0x28) = uVar14;
        *(undefined8 *)(pbVar15 + 0x30) = uVar21;
        pbVar15 = pbVar15 + 0x38;
      } while (pbVar15 != pbVar11);
    }
    *(undefined8 *)(unaff_x20 + 0x5e8) = uVar6;
    *(byte **)(unaff_x20 + 0x5f0) = pbVar9;
    *(ulong *)(unaff_x20 + 0x5f8) =
         ((ulong)((long)pbVar11 - (long)pbVar9) >> 3) * 0x6db6db6db6db6db7;
    *(undefined1 *)(unaff_x20 + 0x7b2) = 1;
    *(bool *)(unaff_x20 + 0x7b1) = (long)pbVar11 - (long)pbVar9 != 0;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x400);
    lVar10 = *(long *)(unaff_x20 + 0x5e0);
    *(undefined1 *)(unaff_x20 + 0x7be) = 0;
    lVar18 = *(long *)(unaff_x20 + 0x470);
    unaff_x25[1] = *(long *)(unaff_x20 + 0x478);
    *unaff_x25 = lVar18;
    lVar18 = *(long *)(unaff_x20 + 0x488);
    unaff_x25[4] = *(long *)(unaff_x20 + 0x490);
    unaff_x25[3] = lVar18;
    in_stack_00000010 = *(undefined1 **)(unaff_x20 + 0x498);
    *(undefined2 *)(unaff_x20 + 0x7bc) = 0;
    lVar18 = *(long *)(unaff_x20 + 0x528);
    lVar22 = *(long *)(unaff_x20 + 0x540);
    lVar17 = *(long *)(unaff_x20 + 0x538);
    unaff_x25[0x18] = *(long *)(unaff_x20 + 0x530);
    unaff_x25[0x17] = lVar18;
    unaff_x25[0x1a] = lVar22;
    unaff_x25[0x19] = lVar17;
    lVar18 = *(long *)(unaff_x20 + 0x4a0);
    unaff_x25[7] = *(long *)(unaff_x20 + 0x4a8);
    unaff_x25[6] = lVar18;
    puVar19 = *(undefined1 **)(unaff_x20 + 0x4b0);
    lVar18 = *(long *)(unaff_x20 + 0x4b8);
    unaff_x25[10] = *(long *)(unaff_x20 + 0x4c0);
    unaff_x25[9] = lVar18;
    in_stack_00000038 = *(undefined1 **)(unaff_x20 + 0x4c8);
    lVar24 = *(long *)(unaff_x20 + 0x518);
    lVar17 = *(long *)(unaff_x20 + 0x510);
    *(undefined4 *)(unaff_x20 + 0x7b8) = 0;
    lVar32 = *(long *)(unaff_x20 + 0x4d8);
    lVar27 = *(long *)(unaff_x20 + 0x4d0);
    lVar38 = *(long *)(unaff_x20 + 0x4e8);
    lVar36 = *(long *)(unaff_x20 + 0x4e0);
    unaff_x25[0xd] = lVar32;
    unaff_x25[0xc] = lVar27;
    unaff_x25[0xf] = lVar38;
    unaff_x25[0xe] = lVar36;
    lVar41 = *(long *)(unaff_x20 + 0x4f8);
    lVar40 = *(long *)(unaff_x20 + 0x4f0);
    lVar43 = *(long *)(unaff_x20 + 0x508);
    lVar42 = *(long *)(unaff_x20 + 0x500);
    unaff_x25[0x11] = lVar41;
    unaff_x25[0x10] = lVar40;
    unaff_x25[0x13] = lVar43;
    unaff_x25[0x12] = lVar42;
    unaff_x25[0x15] = lVar24;
    unaff_x25[0x14] = lVar17;
    lVar33 = unaff_x25[0x17];
    lVar28 = unaff_x25[0x16];
    lVar39 = unaff_x25[0x19];
    lVar37 = unaff_x25[0x18];
    in_stack_00000268 = (undefined1 *)unaff_x25[1];
    lVar29 = *unaff_x25;
    lVar18 = unaff_x25[3];
    in_stack_00000270 = (undefined1 *)unaff_x25[2];
    lVar34 = unaff_x25[9];
    lVar30 = unaff_x25[8];
    lVar25 = unaff_x25[0xb];
    lVar22 = unaff_x25[10];
    lVar35 = unaff_x25[5];
    lVar31 = unaff_x25[4];
    lVar26 = unaff_x25[7];
    lVar23 = unaff_x25[6];
    *(long *)(unaff_x20 + 0x888) = lVar24;
    *(long *)(unaff_x20 + 0x880) = lVar17;
    *(long *)(unaff_x20 + 0x898) = lVar33;
    *(long *)(unaff_x20 + 0x890) = lVar28;
    *(long *)(unaff_x20 + 0x8a8) = lVar39;
    *(long *)(unaff_x20 + 0x8a0) = lVar37;
    *(undefined8 *)(unaff_x20 + 0x8b0) = in_stack_00000330;
    *(long *)(unaff_x20 + 0x848) = lVar32;
    *(long *)(unaff_x20 + 0x840) = lVar27;
    *(long *)(unaff_x20 + 0x858) = lVar38;
    *(long *)(unaff_x20 + 0x850) = lVar36;
    *(long *)(unaff_x20 + 0x868) = lVar41;
    *(long *)(unaff_x20 + 0x860) = lVar40;
    *(long *)(unaff_x20 + 0x878) = lVar43;
    *(long *)(unaff_x20 + 0x870) = lVar42;
    *(long *)(unaff_x20 + 0x808) = lVar35;
    *(long *)(unaff_x20 + 0x800) = lVar31;
    *(long *)(unaff_x20 + 0x818) = lVar26;
    *(long *)(unaff_x20 + 0x810) = lVar23;
    *(long *)(unaff_x20 + 0x828) = lVar34;
    *(long *)(unaff_x20 + 0x820) = lVar30;
    *(long *)(unaff_x20 + 0x838) = lVar25;
    *(long *)(unaff_x20 + 0x830) = lVar22;
    *(undefined1 **)(unaff_x20 + 0x7e8) = in_stack_00000268;
    *(long *)(unaff_x20 + 0x7e0) = lVar29;
    *(long *)(unaff_x20 + 0x7f8) = lVar18;
    *(undefined1 **)(unaff_x20 + 0x7f0) = in_stack_00000270;
    *(undefined **)(unaff_x20 + 0x8b8) = &UNK_108ca741a;
    *(undefined8 *)(unaff_x20 + 0x8c0) = 10;
    *(undefined4 *)(unaff_x20 + 0x8c8) = *(undefined4 *)(unaff_x20 + 0x5c0);
    *(undefined4 *)(unaff_x20 + 0x8cc) = *(undefined4 *)(unaff_x20 + 0x5c4);
    *(undefined1 *)(unaff_x20 + 0x8d0) = *(undefined1 *)(unaff_x20 + 0x5c8);
    *(undefined8 *)(unaff_x20 + 0x8d8) = uVar6;
    *(long *)(unaff_x20 + 0x8e0) = lVar10 + 0x10;
    *(undefined1 *)(unaff_x20 + 0xbb0) = 0;
    FUN_1008d4ea0(&stack0x00000260,unaff_x20 + 0x7e0,in_stack_00000048);
    FUN_100d5dc5c(unaff_x20 + 0x7e0);
    *(undefined2 *)(unaff_x20 + 0x7b2) = 0;
    lVar10 = *(long *)(unaff_x20 + 0x5e8);
    unaff_x25[1] = *(long *)(unaff_x20 + 0x5f0);
    *unaff_x25 = lVar10;
    lVar10 = *(long *)(unaff_x20 + 0x7c8);
    unaff_x25[4] = *(long *)(unaff_x20 + 2000);
    unaff_x25[3] = lVar10;
    *(undefined2 *)(unaff_x20 + 0x7b6) = 0;
    lVar10 = *(long *)(unaff_x20 + 0x568);
    lVar22 = *(long *)(unaff_x20 + 0x580);
    lVar17 = *(long *)(unaff_x20 + 0x578);
    unaff_x25[0x33] = *(long *)(unaff_x20 + 0x570);
    unaff_x25[0x32] = lVar10;
    unaff_x25[0x35] = lVar22;
    unaff_x25[0x34] = lVar17;
    lVar22 = *(long *)(unaff_x20 + 0x548);
    lVar17 = *(long *)(unaff_x20 + 0x560);
    lVar10 = *(long *)(unaff_x20 + 0x558);
    unaff_x25[0x2f] = *(long *)(unaff_x20 + 0x550);
    unaff_x25[0x2e] = lVar22;
    unaff_x25[0x31] = lVar17;
    unaff_x25[0x30] = lVar10;
    *(undefined1 *)(unaff_x20 + 0x7c3) = 0;
    _memcpy(&stack0x00000290,&stack0x00000550,0x140);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x400);
    lVar10 = *(long *)(unaff_x20 + 0x5e0);
    *(undefined1 *)(unaff_x20 + 0x7c2) = 0;
    _memcpy((long *)(unaff_x20 + 0x7c8),&stack0x00000260,0x1e8);
    *(undefined8 *)(unaff_x20 + 0x9b0) = uVar6;
    *(long *)(unaff_x20 + 0x9b8) = unaff_x20 + 0x408;
    *(long *)(unaff_x20 + 0x9c0) = lVar10 + 0x10;
    *(undefined1 *)(unaff_x20 + 0x9c8) = 0;
    FUN_1008d0168(&stack0x00000690,unaff_x20 + 0x7c8,in_stack_00000048);
    if (lVar29 == -0x7fffffffffffffdf) {
      uVar7 = 6;
LAB_1008cb7b8:
      *in_stack_00000060 = uVar7;
      *unaff_x21 = 0x8000000000000071;
      uVar7 = 3;
      goto LAB_1008cb7c8;
    }
    FUN_100d2428c(unaff_x20 + 0x7c8);
    if (lVar29 != -0x7fffffffffffffe0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x400);
      *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000690;
      *(code **)(unaff_x29 + -0xd8) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_failed_to_start_turn__108aca54e,unaff_x29 + -0xe0);
      *(undefined8 *)(unaff_x29 + -0x80) = 0xffffffffffff80a5;
      *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x29 + -200) = 0x8000000000000005;
      __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor20track_error_response17h19540a986adf27cfE
                (uVar6,unaff_x20 + 0x408,unaff_x29 + -0xe0,2);
      in_stack_00000260 = *(undefined1 **)(unaff_x29 + -0xe0);
      in_stack_00000268 = *(undefined1 **)(unaff_x29 + -0xd8);
      in_stack_00000270 = *(undefined1 **)(unaff_x29 + -0xd0);
      FUN_100df5738(&stack0x00000690);
      if (in_stack_00000260 != (undefined1 *)0x8000000000000000) {
        *(undefined2 *)(unaff_x20 + 0x7c1) = 0;
        puStack0000000000000020 = (undefined1 *)0xffffffffffff80a5;
        in_stack_00000278 = (undefined1 *)0x8000000000000005;
        *(undefined1 *)(unaff_x20 + 0x7c3) = 0;
        if ((*(byte *)(unaff_x20 + 0x7b2) & 1) != 0) {
          lVar17 = *(long *)(unaff_x20 + 0x5f0);
          lVar10 = lVar17;
          for (lVar18 = *(long *)(unaff_x20 + 0x5f8); lVar18 != 0; lVar18 = lVar18 + -1) {
            FUN_100e06c08(lVar10);
            lVar10 = lVar10 + 0x38;
          }
          if (*(long *)(unaff_x20 + 0x5e8) != 0) {
            _free(lVar17);
          }
        }
        *(undefined1 *)(unaff_x20 + 0x7b2) = 0;
        unaff_x22 = in_stack_00000298;
        in_stack_00000288 = in_stack_00000048;
        in_stack_00000028 = in_stack_000002c0;
        in_stack_00000030 = in_stack_000002b0;
        in_stack_00000040 = in_stack_000002a8;
        if (((*(byte *)(unaff_x20 + 0x7b3) & 1) != 0) &&
           (lVar10 = *(long *)(unaff_x20 + 0x7c8), lVar10 != -0x8000000000000000)) {
          lVar17 = *(long *)(unaff_x20 + 2000);
          lVar18 = *(long *)(unaff_x20 + 0x7d8);
          if (lVar18 != 0) {
            puVar20 = (undefined8 *)(lVar17 + 0x20);
            do {
              if (puVar20[-4] != 0) {
                _free(puVar20[-3]);
              }
              if (puVar20[-1] != 0) {
                _free(*puVar20);
              }
              puVar20 = puVar20 + 6;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (lVar10 != 0) {
            _free(lVar17);
          }
        }
        goto LAB_1008cb8fc;
      }
      lVar18 = -0x7ffffffffffffffb;
    }
    puVar19 = (undefined1 *)0x8000000000000005;
    *(undefined1 *)(unaff_x20 + 0x7c1) = 1;
    *(undefined1 **)(unaff_x20 + 0x600) = in_stack_00000268;
    *(undefined1 **)(unaff_x20 + 0x608) = in_stack_00000270;
    *(long *)(unaff_x20 + 0x610) = lVar18;
    if (*(char *)(unaff_x20 + 0x7b1) == '\x01') {
      *(long *)(unaff_x20 + 0x7c8) = *(long *)(unaff_x20 + 0x5e0) + 0x10;
      *(undefined1 *)(unaff_x20 + 0x858) = 0;
      FUN_1004f1ca4(&stack0x000008b8,unaff_x20 + 0x7c8,in_stack_00000048);
      if (in_stack_000008b8 == -0x8000000000000000) {
        uVar7 = 7;
      }
      else {
        _memcpy(unaff_x20 + 0x618,&stack0x000008b8,0x198);
        if ((((*(char *)(unaff_x20 + 0x858) == '\x03') && (*(char *)(unaff_x20 + 0x850) == '\x03'))
            && (*(char *)(unaff_x20 + 0x848) == '\x03')) &&
           ((*(char *)(unaff_x20 + 0x840) == '\x03' && (*(char *)(unaff_x20 + 0x7f8) == '\x04')))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x20 + 0x800);
          if (*(long *)(unaff_x20 + 0x808) != 0) {
            (**(code **)(*(long *)(unaff_x20 + 0x808) + 0x18))(*(undefined8 *)(unaff_x20 + 0x810));
          }
        }
        plVar8 = *(long **)(*(long *)(unaff_x20 + 0x400) + 0x188);
        lVar10 = *plVar8;
        *plVar8 = lVar10 + 1;
        if (lVar10 < 0) {
LAB_1008cb978:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1008cb97c);
          (*pcVar2)();
        }
        *(long **)(unaff_x20 + 0x7c8) = plVar8;
        plVar8 = *(long **)(*(long *)(unaff_x20 + 0x400) + 0x180);
        lVar10 = *plVar8;
        *plVar8 = lVar10 + 1;
        if (lVar10 < 0) goto LAB_1008cb978;
        *(long **)(unaff_x20 + 2000) = plVar8;
        *(undefined8 *)(unaff_x20 + 0x880) = *(undefined8 *)(unaff_x20 + 0x5d8);
        *(undefined8 *)(unaff_x20 + 0x878) = *(undefined8 *)(unaff_x20 + 0x5d0);
        plVar8 = *(long **)(unaff_x20 + 0x5e0);
        lVar10 = *plVar8;
        *plVar8 = lVar10 + 1;
        if (lVar10 < 0) goto LAB_1008cb978;
        *(long **)(unaff_x20 + 0x7d8) = plVar8;
        *(long *)(unaff_x20 + 0x7e0) = *(long *)(unaff_x20 + 0x5e0) + 0x10;
        *(undefined1 *)(unaff_x20 + 0x870) = 0;
        lVar10 = FUN_1004f3318(unaff_x20 + 0x7e0,in_stack_00000048);
        if (lVar10 != 0) {
          if (((*(char *)(unaff_x20 + 0x870) == '\x03') && (*(char *)(unaff_x20 + 0x868) == '\x03'))
             && ((*(char *)(unaff_x20 + 0x860) == '\x03' &&
                 ((*(char *)(unaff_x20 + 0x858) == '\x03' &&
                  (*(char *)(unaff_x20 + 0x810) == '\x04')))))) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x20 + 0x818);
            if (*(long *)(unaff_x20 + 0x820) != 0) {
              (**(code **)(*(long *)(unaff_x20 + 0x820) + 0x18))(*(undefined8 *)(unaff_x20 + 0x828))
              ;
            }
          }
          __ZN20codex_memories_write5start27start_memories_startup_task17h57690d815609fdacE
                    (*(undefined8 *)(unaff_x20 + 0x7c8),*(undefined8 *)(unaff_x20 + 2000),
                     unaff_x20 + 0x878,*(undefined8 *)(unaff_x20 + 0x7d8),lVar10,unaff_x20 + 0x740);
          FUN_100e20dec(unaff_x20 + 0x618);
          in_stack_00000270 = *(undefined1 **)(unaff_x20 + 0x608);
          lVar18 = *(long *)(unaff_x20 + 0x610);
          goto LAB_1008cb694;
        }
        uVar7 = 8;
      }
      goto LAB_1008cb7b8;
    }
LAB_1008cb694:
    *(long *)(unaff_x20 + 0x7c8) = *(long *)(*(long *)(unaff_x20 + 0x400) + 400) + 0x10;
    *(long *)(unaff_x20 + 2000) = unaff_x20 + 0x408;
    *(undefined1 **)(unaff_x20 + 0x7d8) = in_stack_00000270;
    *(long *)(unaff_x20 + 0x7e0) = lVar18;
    *(undefined1 *)(unaff_x20 + 0x878) = 0;
    iVar5 = func_0x00010089571c(unaff_x20 + 0x7c8,in_stack_00000048);
    if (iVar5 != 0) {
      uVar7 = 9;
      goto LAB_1008cb7b8;
    }
    if ((((*(char *)(unaff_x20 + 0x878) == '\x03') && (*(char *)(unaff_x20 + 0x870) == '\x03')) &&
        (*(char *)(unaff_x20 + 0x868) == '\x03')) && (*(char *)(unaff_x20 + 0x820) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x20 + 0x828);
      if (*(long *)(unaff_x20 + 0x830) != 0) {
        (**(code **)(*(long *)(unaff_x20 + 0x830) + 0x18))(*(undefined8 *)(unaff_x20 + 0x838));
      }
    }
    unaff_x27 = *(undefined1 **)(unaff_x20 + 0x600);
    unaff_x22 = *(undefined1 **)(unaff_x20 + 0x608);
    in_stack_00000048 = *(undefined1 **)(unaff_x20 + 0x610);
    *(undefined2 *)(unaff_x20 + 0x7c1) = 0;
    *(undefined1 *)(unaff_x20 + 0x7c3) = 0;
    *(undefined2 *)(unaff_x20 + 0x7b2) = 0;
    lVar10 = **(long **)(unaff_x20 + 0x5e0);
    **(long **)(unaff_x20 + 0x5e0) = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x5e0);
    }
    *(undefined2 *)(unaff_x20 + 0x7b4) = 0;
    if (*(long *)(unaff_x20 + 0x428) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x430));
    }
    puVar16 = (undefined1 *)0x0;
    in_stack_000004f0 = (undefined1 *)0x0;
    in_stack_00000278 = (undefined1 *)0x0;
    in_stack_00000038 = (undefined1 *)0x0;
    in_stack_00000040 = (undefined1 *)0x0;
    *(undefined4 *)(unaff_x20 + 0x7bd) = 0;
    *(undefined8 *)(unaff_x20 + 0x7b6) = 0;
    uVar12 = *(ulong *)(unaff_x20 + 0x408);
    in_stack_00000028 = (undefined1 *)0x8000000000000000;
    in_stack_00000030 = (undefined1 *)0x8;
    in_stack_000004f8 = in_stack_00000060;
    puStack0000000000000020 = in_stack_000002c8;
  }
  else {
    __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor20track_error_response17h19540a986adf27cfE
              (uVar6,unaff_x20 + 0x408,&stack0x000004e8,2);
    puStack0000000000000020 = (undefined1 *)0xffffffffffff80a5;
    in_stack_00000278 = (undefined1 *)0x8000000000000005;
LAB_1008cb900:
    lVar10 = **(long **)(unaff_x20 + 0x5e0);
    **(long **)(unaff_x20 + 0x5e0) = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x5e0);
    }
    if ((((*(byte *)(unaff_x20 + 0x7b4) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x7e0) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x7e0) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x7e8));
    }
    *(undefined1 *)(unaff_x20 + 0x7b4) = 0;
    if ((((*(byte *)(unaff_x20 + 0x7b5) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x7c8) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x7c8) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 2000));
    }
    *(undefined1 *)(unaff_x20 + 0x7b5) = 0;
    if (*(long *)(unaff_x20 + 0x428) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x430));
    }
    if ((*(byte *)(unaff_x20 + 0x7bf) & 1) != 0) {
      lVar17 = *(long *)(unaff_x20 + 0x448);
      lVar10 = lVar17;
      for (lVar18 = *(long *)(unaff_x20 + 0x450); lVar18 != 0; lVar18 = lVar18 + -1) {
        FUN_100e06c08(lVar10);
        lVar10 = lVar10 + 0x38;
      }
      if (*(long *)(unaff_x20 + 0x440) != 0) {
        _free(lVar17);
      }
    }
    if (((*(byte *)(unaff_x20 + 0x7b6) & 1) != 0) && (*(long *)(unaff_x20 + 0x590) != 0)) {
      FUN_100cb56bc(unaff_x20 + 0x590);
    }
    if (((*(byte *)(unaff_x20 + 0x7c0) & 1) != 0) &&
       (lVar10 = *(long *)(unaff_x20 + 0x458), lVar10 != -0x8000000000000000)) {
      lVar17 = *(long *)(unaff_x20 + 0x460);
      lVar18 = *(long *)(unaff_x20 + 0x468);
      if (lVar18 != 0) {
        puVar20 = (undefined8 *)(lVar17 + 0x20);
        do {
          if (puVar20[-4] != 0) {
            _free(puVar20[-3]);
          }
          if (puVar20[-1] != 0) {
            _free(*puVar20);
          }
          puVar20 = puVar20 + 6;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if (lVar10 != 0) {
        _free(lVar17);
      }
    }
    if ((((*(byte *)(unaff_x20 + 0x7be) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x470) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x470) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x478));
    }
    if (((*(byte *)(unaff_x20 + 0x7bd) & 1) != 0) &&
       (lVar10 = *(long *)(unaff_x20 + 0x488), lVar10 != -0x8000000000000000)) {
      lVar17 = *(long *)(unaff_x20 + 0x490);
      lVar18 = *(long *)(unaff_x20 + 0x498);
      if (lVar18 != 0) {
        puVar20 = (undefined8 *)(lVar17 + 8);
        do {
          if (puVar20[-1] != 0) {
            _free(*puVar20);
          }
          puVar20 = puVar20 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if (lVar10 != 0) {
        _free(lVar17);
      }
    }
    if ((((*(byte *)(unaff_x20 + 0x7bc) & 1) != 0) &&
        (lVar10 = *(long *)(unaff_x20 + 0x528), lVar10 != -0x7ffffffffffffffd)) &&
       (-0x7ffffffffffffffe < lVar10)) {
      lVar17 = *(long *)(unaff_x20 + 0x530);
      lVar18 = *(long *)(unaff_x20 + 0x538);
      if (lVar18 != 0) {
        puVar20 = (undefined8 *)(lVar17 + 8);
        do {
          if (puVar20[-1] != 0) {
            _free(*puVar20);
          }
          puVar20 = puVar20 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if (lVar10 != 0) {
        _free(lVar17);
      }
    }
    if ((((*(byte *)(unaff_x20 + 0x7bb) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x4a0) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x4a0) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x4a8));
    }
    if ((((*(byte *)(unaff_x20 + 0x7ba) & 1) != 0) &&
        (*(long *)(unaff_x20 + 0x4b8) != -0x8000000000000000)) &&
       (*(long *)(unaff_x20 + 0x4b8) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x4c0));
    }
    if ((((*(byte *)(unaff_x20 + 0x7b9) & 1) != 0) &&
        (lVar10 = *(long *)(unaff_x20 + 0x510), lVar10 != -0x7fffffffffffffff)) &&
       ((lVar10 != -0x8000000000000000 && (lVar10 != 0)))) {
      _free(*(undefined8 *)(unaff_x20 + 0x518));
    }
    if (((*(byte *)(unaff_x20 + 0x7b7) & 1) != 0) &&
       (*(long *)(unaff_x20 + 0x548) != -0x7ffffffffffffffb)) {
      FUN_100de6690(unaff_x20 + 0x548);
    }
    if (((*(byte *)(unaff_x20 + 0x7b8) & 1) != 0) &&
       (*(long *)(unaff_x20 + 0x4d0) != -0x8000000000000000)) {
      if (*(long *)(unaff_x20 + 0x4d0) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x4d8));
      }
      if ((*(long *)(unaff_x20 + 0x4e8) != -0x8000000000000000) &&
         (*(long *)(unaff_x20 + 0x4e8) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x4f0));
      }
    }
    *(undefined4 *)(unaff_x20 + 0x7bd) = 0;
    *(undefined8 *)(unaff_x20 + 0x7b6) = 0;
    uVar12 = *(ulong *)(unaff_x20 + 0x408);
    puVar16 = (undefined1 *)0x2;
  }
  if ((uVar12 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x410));
  }
  *in_stack_00000060 = 1;
  FUN_100d2c190(in_stack_00000058);
  bVar3 = puVar16 != (undefined1 *)0x2;
  puVar1 = puVar19;
  if (bVar3) {
    puVar1 = puVar16;
  }
  uVar6 = 0x8000000000000070;
  if (bVar3) {
    uVar6 = 0x8000000000000037;
  }
  *unaff_x21 = uVar6;
  unaff_x21[1] = puVar1;
  puVar16 = in_stack_000004f8;
  if (bVar3) {
    puVar16 = in_stack_000004f0;
    in_stack_000004f0 = puVar19;
  }
  unaff_x21[2] = in_stack_000004f0;
  unaff_x21[3] = puVar16;
  puVar19 = unaff_x22;
  if (bVar3) {
    puVar19 = unaff_x27;
    unaff_x27 = in_stack_00000010;
    in_stack_00000010 = in_stack_00000278;
    in_stack_00000278 = in_stack_000004f8;
  }
  unaff_x21[4] = in_stack_00000278;
  unaff_x21[5] = in_stack_00000010;
  puVar16 = in_stack_00000038;
  if (bVar3) {
    puVar16 = in_stack_00000030;
    in_stack_00000030 = in_stack_00000040;
    in_stack_00000040 = in_stack_00000048;
    in_stack_00000048 = unaff_x22;
  }
  unaff_x21[6] = unaff_x27;
  unaff_x21[7] = puVar19;
  puVar19 = puStack0000000000000020;
  if (bVar3) {
    puVar19 = in_stack_00000028;
    in_stack_00000028 = in_stack_00000038;
  }
  unaff_x21[8] = in_stack_00000048;
  unaff_x21[9] = in_stack_00000040;
  unaff_x21[10] = in_stack_00000030;
  unaff_x21[0xb] = puVar16;
  unaff_x21[0xc] = in_stack_00000028;
  unaff_x21[0xd] = puVar19;
  unaff_x21[0xe] = puStack0000000000000020;
  uVar7 = 1;
  *(undefined2 *)(unaff_x21 + 0x14) = 0x300;
LAB_1008cb7c8:
  *(undefined1 *)(unaff_x28 + 0xfd8) = uVar7;
  return;
}

