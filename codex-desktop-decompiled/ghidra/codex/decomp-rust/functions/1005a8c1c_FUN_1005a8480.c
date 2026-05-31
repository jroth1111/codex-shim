
/* WARNING: Removing unreachable block (ram,0x0001005aa114) */

void FUN_1005a8480(void)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  byte bVar16;
  undefined1 uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  undefined *puVar26;
  long *unaff_x22;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar30;
  byte bVar31;
  long lVar32;
  long *plVar33;
  undefined1 auVar34 [16];
  undefined8 *in_stack_00000008;
  long *in_stack_00000010;
  long *plStack0000000000000018;
  long *in_stack_00000038;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  undefined1 *in_stack_00000100;
  undefined *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long *in_stack_000001a0;
  long *in_stack_000001a8;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  undefined1 *in_stack_000001c0;
  undefined *in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000004c0;
  undefined1 *puVar35;
  long in_stack_000004c8;
  long *plVar36;
  long in_stack_000004d0;
  long *plVar37;
  long *in_stack_00000730;
  long *in_stack_00000738;
  long *in_stack_00000740;
  long *in_stack_00000748;
  undefined1 *in_stack_00000750;
  undefined *in_stack_00000758;
  long in_stack_00000760;
  long in_stack_00000768;
  long in_stack_00000770;
  long in_stack_00000778;
  long in_stack_00000780;
  long in_stack_00000788;
  long in_stack_00000790;
  long in_stack_00000798;
  long in_stack_000007a0;
  long in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined8 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  long in_stack_00000898;
  long *in_stack_000008a0;
  ulong in_stack_000008a8;
  long in_stack_000008b0;
  long in_stack_000008c8;
  long in_stack_000008e0;
  char in_stack_000009a8;
  byte in_stack_000009a9;
  undefined *in_stack_000009b0;
  undefined *puVar38;
  long *in_stack_000009b8;
  long *plVar39;
  undefined *in_stack_000009c0;
  long in_stack_00000a28;
  long in_stack_00000a30;
  long in_stack_00000a38;
  long *in_stack_00000ad0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000009b0,s__108ac137a,&stack0x00000730);
  if (in_stack_000004c0 != 0) {
    _free(in_stack_000004c8);
  }
  lVar22 = in_stack_00000038[0x52];
  if (lVar22 == in_stack_00000038[0x50]) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000038 + 0x50);
  }
  puVar10 = (undefined8 *)(in_stack_00000038[0x51] + lVar22 * 0x18);
  puVar10[1] = in_stack_000009b8;
  *puVar10 = in_stack_000009b0;
  puVar10[2] = in_stack_000009c0;
  in_stack_00000038[0x52] = lVar22 + 1;
  if (*(long *)(unaff_x29 + -0x100) != 0) {
    _free();
  }
  lVar22 = *in_stack_00000ad0;
  *in_stack_00000ad0 = lVar22 + -1;
  LORelease();
  if (lVar22 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h651c099e6cbbe2daE(&stack0x00000ad0);
  }
  if ((ulong)in_stack_00000038[0xc] < unaff_x28 + 1) {
    lVar22 = in_stack_00000038[0x4f];
    if (in_stack_00000038[0xc] != unaff_x28) goto LAB_1005a8570;
    if (in_stack_00000038[0xf] != 8) {
      *(undefined1 *)(in_stack_00000038 + 0x5e) = 0;
      if (*(long *)(lVar22 + 0x4e0) == -0x8000000000000000) goto LAB_1005a85e8;
      goto LAB_1005a8588;
    }
    lVar11 = *(long *)in_stack_00000038[0xe];
    *(bool *)(in_stack_00000038 + 0x5e) = lVar11 == 0x6e61696472617567;
    if (lVar11 != 0x6e61696472617567) goto LAB_1005a8578;
  }
  else {
    lVar22 = in_stack_00000038[0x4f];
LAB_1005a8570:
    *(undefined1 *)(in_stack_00000038 + 0x5e) = 0;
LAB_1005a8578:
    if (*(long *)(lVar22 + 0x4e0) != -0x8000000000000000) {
LAB_1005a8588:
      lVar11 = *(long *)(lVar22 + 0x4f0);
      if (lVar11 != 0) {
        uVar9 = *(undefined8 *)(lVar22 + 0x4e8);
        lVar22 = _malloc(lVar11);
        if (lVar22 == 0) {
          FUN_107c03c64(1,lVar11);
          goto LAB_1005ab394;
        }
        _memcpy(lVar22,uVar9,lVar11);
        lVar23 = in_stack_00000038[0x52];
        if (lVar23 == in_stack_00000038[0x50]) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                    (in_stack_00000038 + 0x50);
        }
        plVar7 = (long *)(in_stack_00000038[0x51] + lVar23 * 0x18);
        *plVar7 = lVar11;
        plVar7[1] = lVar22;
        plVar7[2] = lVar11;
        in_stack_00000038[0x52] = lVar23 + 1;
        lVar22 = in_stack_00000038[0x4f];
      }
    }
  }
LAB_1005a85e8:
  if (((*(char *)(*(long *)(lVar22 + 0x788) + 0x2533) == '\x01') &&
      (in_stack_00000038[3] != -0x8000000000000000)) && (lVar11 = in_stack_00000038[5], lVar11 != 0)
     ) {
    lVar23 = in_stack_00000038[4];
    lVar22 = _malloc(lVar11);
    if (lVar22 == 0) {
      FUN_107c03c64(1,lVar11);
      goto LAB_1005ab394;
    }
    _memcpy(lVar22,lVar23,lVar11);
    in_stack_000009b0 = &UNK_108cb168b;
    in_stack_000009b8 = (long *)0x15;
    in_stack_000004c8 = _malloc(lVar11);
    if (in_stack_000004c8 == 0) {
      FUN_107c03c64(1,lVar11);
      goto LAB_1005ab394;
    }
    _memcpy(in_stack_000004c8,lVar22,lVar11);
    in_stack_00000730 = (long *)&stack0x00000a70;
    in_stack_00000738 = (long *)&DAT_100c7b3a0;
    in_stack_00000740 = (long *)&stack0x000004c0;
    in_stack_00000748 = (long *)&DAT_10112965c;
    in_stack_00000750 = &stack0x000009b0;
    in_stack_00000758 = &DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x100,s__108ac137a,&stack0x00000730);
    if (lVar11 != 0) {
      _free(in_stack_000004c8);
    }
    lVar23 = in_stack_00000038[0x52];
    if (lVar23 == in_stack_00000038[0x50]) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000038 + 0x50)
      ;
    }
    puVar10 = (undefined8 *)(in_stack_00000038[0x51] + lVar23 * 0x18);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x100);
    puVar10[1] = *(undefined8 *)(unaff_x29 + -0xf8);
    *puVar10 = uVar9;
    puVar10[2] = *(undefined8 *)(unaff_x29 + -0xf0);
    in_stack_00000038[0x52] = lVar23 + 1;
    _free(lVar22);
    lVar22 = in_stack_00000038[0x4f];
    in_stack_000004c0 = lVar11;
    in_stack_000004d0 = lVar11;
  }
  plVar7 = (long *)0x0;
  if (*unaff_x22 != 3) {
    plVar7 = unaff_x22;
  }
  plVar39 = (long *)0x0;
  if (*unaff_x27 != -0x8000000000000000) {
    plVar39 = unaff_x27;
  }
  FUN_102d50b38(&stack0x00000730,plVar7,plVar39,lVar22);
  if (in_stack_00000730 != (long *)0x8000000000000000) {
    lVar22 = in_stack_00000038[0x52];
    if (lVar22 == in_stack_00000038[0x50]) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000038 + 0x50)
      ;
    }
    puVar10 = (undefined8 *)(in_stack_00000038[0x51] + lVar22 * 0x18);
    *puVar10 = in_stack_00000730;
    puVar10[1] = in_stack_00000738;
    puVar10[2] = in_stack_00000740;
    in_stack_00000038[0x52] = lVar22 + 1;
  }
  lVar22 = *(long *)(in_stack_00000038[0x4e] + 0x670);
  if (lVar22 != 0) {
    lVar11 = *(long *)(in_stack_00000038[0x4e] + 0x678);
    while( true ) {
      uVar20 = (ulong)*(ushort *)(lVar22 + 10);
      uVar18 = 0xffffffffffffffff;
      pbVar19 = (byte *)(lVar22 + 0xc);
      uVar21 = uVar20;
      do {
        if (uVar21 == 0) goto LAB_1005a87e8;
        cVar1 = *pbVar19 < 0x2f;
        if (0x2f < *pbVar19) {
          cVar1 = -1;
        }
        uVar21 = uVar21 - 1;
        uVar18 = uVar18 + 1;
        pbVar19 = pbVar19 + 1;
      } while (cVar1 == '\x01');
      uVar20 = uVar18;
      if (cVar1 == '\0') break;
LAB_1005a87e8:
      if (lVar11 == 0) goto LAB_1005a889c;
      lVar22 = *(long *)(lVar22 + uVar20 * 8 + 0x18);
      lVar11 = lVar11 + -1;
    }
    lVar22 = in_stack_00000038[0x4f];
    cVar1 = *(char *)(lVar22 + 0x7d5);
    if (cVar1 == '\x03') goto LAB_1005a88a0;
    FUN_1011d1078(&stack0x00000730,lVar22);
    if (in_stack_00000898 != -0x7fffffffffffffff) {
      if (in_stack_00000898 != -0x8000000000000000) {
        if (in_stack_000008a8 < 0x12) {
          if ((in_stack_000008a8 == 0x11) &&
             ((*in_stack_000008a0 == 0x6f73726570207b7b &&
              in_stack_000008a0[1] == 0x7d207974696c616e) && (char)in_stack_000008a0[2] == '}'))
          goto LAB_1005aa864;
        }
        else {
          __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                    (&stack0x000004c0,in_stack_000008a0,in_stack_000008a8,&UNK_108e534f5,0x11);
          FUN_1049cf808(unaff_x29 + -0x100,&stack0x000004c0);
          if ((*(uint *)(unaff_x29 + -0x100) & 1) != 0) {
LAB_1005aa864:
            if (((-0x7fffffffffffffff < in_stack_000008b0) &&
                (in_stack_000008c8 != -0x8000000000000000)) &&
               (in_stack_000008e0 != -0x8000000000000000)) {
              __ZN14codex_protocol13openai_models9ModelInfo22get_model_instructions17h22408f2f1dd7708cE
                        (&stack0x000004c0,&stack0x00000730,cVar1);
              if (in_stack_00000038[0x5b] == in_stack_000004d0) {
                iVar6 = _memcmp(in_stack_00000038[0x5a],in_stack_000004c8);
                bVar3 = iVar6 == 0;
              }
              else {
                bVar3 = false;
              }
              if (in_stack_000004c0 != 0) {
                _free(in_stack_000004c8);
              }
              if ((bVar3) || (in_stack_00000898 == -0x7fffffffffffffff)) goto LAB_1005a8894;
            }
          }
        }
      }
      __ZN14codex_protocol13openai_models13ModelMessages23get_personality_message17hc3c80a856cb5faf3E
                (&stack0x000004c0,&stack0x00000898,cVar1);
      if (in_stack_000004c0 != -0x8000000000000000) {
        if (in_stack_000004d0 != 0) {
          func_0x0001005762b4(unaff_x29 + -0x100,&stack0x000004c0);
          FUN_100f401b4(in_stack_00000038 + 0x50,unaff_x29 + -0x100);
        }
        if (in_stack_000004c0 != 0) {
          _free(in_stack_000004c8);
        }
      }
    }
LAB_1005a8894:
    FUN_100e0f5d0(&stack0x00000730);
  }
LAB_1005a889c:
  lVar22 = in_stack_00000038[0x4f];
LAB_1005a88a0:
  if (*(char *)(*(long *)(lVar22 + 0x788) + 0x2532) == '\x01') {
    bVar3 = false;
    if (*(long *)(lVar22 + 0x7c8) != 0) {
      uVar5 = __ZN11codex_login4auth7manager11AuthManager9auth_mode17h44c6e88f9543bc98E
                        (*(long *)(lVar22 + 0x7c8) + 0x10);
      bVar3 = (uVar5 & 0xff) - 1 < 3;
    }
    lVar11 = *(long *)(lVar22 + 0x638);
    if (lVar11 != 0) {
      lVar22 = *(long *)(lVar22 + 0x640);
LAB_1005a88e4:
      uVar20 = (ulong)*(ushort *)(lVar11 + 10);
      uVar18 = 0xffffffffffffffff;
      pbVar19 = (byte *)(lVar11 + 0xc);
      uVar21 = uVar20;
      do {
        if (uVar21 == 0) goto LAB_1005a8928;
        cVar1 = *pbVar19 < 0x17;
        if (0x17 < *pbVar19) {
          cVar1 = -1;
        }
        uVar21 = uVar21 - 1;
        uVar18 = uVar18 + 1;
        pbVar19 = pbVar19 + 1;
      } while (cVar1 == '\x01');
      uVar20 = uVar18;
      if (cVar1 != '\0') {
LAB_1005a8928:
        if (lVar22 != 0) goto code_r0x0001005a892c;
        goto LAB_1005a8cd8;
      }
      if (!bVar3) goto LAB_1005a8cd8;
      in_stack_00000038[0x5f] = *(long *)(in_stack_00000038[0x4e] + 0x360) + 0x10;
      *(undefined1 *)(in_stack_00000038 + 0x6a) = 0;
      auVar34 = FUN_100fd4eb8(in_stack_00000038 + 0x5f,in_stack_00000010);
      if (auVar34._0_8_ == 0) {
        *in_stack_00000008 = 0x8000000000000000;
        uVar17 = 4;
        goto LAB_1005ab39c;
      }
      *(undefined1 (*) [16])(in_stack_00000038 + 0x46) = auVar34;
      if (((char)in_stack_00000038[0x6a] == '\x03') && ((char)in_stack_00000038[0x69] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (in_stack_00000038 + 0x61);
        if (in_stack_00000038[0x62] != 0) {
          (**(code **)(in_stack_00000038[0x62] + 0x18))(in_stack_00000038[99]);
        }
      }
      lVar22 = *(long *)(in_stack_00000038[0x4f] + 0x788) + 0x10;
      in_stack_00000038[0x5f] = in_stack_00000038[0x47];
      in_stack_00000038[0x60] = lVar22;
      *(undefined1 *)(in_stack_00000038 + 0x80) = 0;
      in_stack_00000038[0x61] = lVar22;
      in_stack_00000038[0x67] = in_stack_00000038[0x47];
      *(undefined1 *)((long)in_stack_00000038 + 0x342) = 0;
      FUN_101637268(&stack0x00000730,in_stack_00000038 + 0x62,in_stack_00000010);
      if (in_stack_00000730 == (long *)0x8000000000000000) {
        *(undefined1 *)(in_stack_00000038 + 0x80) = 3;
        goto LAB_1005a8b34;
      }
      *(long **)(unaff_x29 + -0xf8) = in_stack_00000738;
      *(long **)(unaff_x29 + -0x100) = in_stack_00000730;
      *(long **)(unaff_x29 + -0xf0) = in_stack_00000740;
      FUN_100cdb8b4(in_stack_00000038 + 0x62);
      lVar11 = *(long *)(unaff_x29 + -0xf8);
      lVar22 = *(long *)(unaff_x29 + -0xf0);
      __ZN10codex_core10connectors36accessible_connectors_from_mcp_tools17h72988b39a13f647fE
                (&stack0x000004c0,lVar11,lVar22);
      __ZN10codex_core10connectors22with_app_enabled_state17h7e6db2a0f6eb2ca3E
                (&stack0x000009b0,&stack0x000004c0,in_stack_00000038[0x61]);
      uVar9 = extraout_x1;
      plVar7 = in_stack_000009b8;
      if (in_stack_000009c0 != (undefined *)0x0) {
        lVar23 = 0;
        do {
          in_stack_00000738 = plVar7;
          _memcpy(&stack0x000004c0,(long)in_stack_000009b8 + lVar23,0x270);
          _memcpy(&stack0x00000740,(long)in_stack_000009b8 + lVar23,0x270);
          if ((in_stack_000009a8 == '\x01') && ((in_stack_000009a9 & 1) != 0)) {
            _memmove(in_stack_00000738,&stack0x000004c0,0x270);
            plVar7 = in_stack_00000738 + 0x4e;
            uVar9 = extraout_x1_01;
          }
          else {
            FUN_100e3b46c(&stack0x00000740);
            plVar7 = in_stack_00000738;
            uVar9 = extraout_x1_00;
          }
          lVar13 = lVar23 + 0x270;
          lVar23 = lVar23 + 0x270;
          in_stack_00000730 = in_stack_000009b8;
        } while ((long)in_stack_000009c0 * 0x270 - lVar13 != 0);
      }
      uVar18 = (ulong)((long)plVar7 - (long)in_stack_000009b8) / 0x270;
      lVar22 = lVar22 + 1;
      lVar23 = lVar11;
      while (lVar22 = lVar22 + -1, lVar22 != 0) {
        FUN_100dea5d4(lVar23);
        lVar23 = lVar23 + 0x1a8;
        uVar9 = extraout_x1_02;
      }
      if (*(long *)(unaff_x29 + -0x100) != 0) {
        _free(lVar11);
        uVar9 = extraout_x1_03;
      }
      *(undefined1 *)(in_stack_00000038 + 0x80) = 1;
      plVar39 = in_stack_000009b8;
      if (in_stack_000009b0 == (undefined *)0x8000000000000000) {
LAB_1005a8b34:
        *in_stack_00000008 = 0x8000000000000000;
        uVar17 = 5;
        goto LAB_1005ab39c;
      }
      do {
        plVar28 = plVar39;
        puVar38 = in_stack_000009b0;
        plVar39 = in_stack_000009b8;
        if (plVar28 == plVar7) goto LAB_1005a8c80;
        plVar39 = plVar28 + 0x4e;
      } while (((char)plVar28[0x4d] != '\x01') || ((*(byte *)((long)plVar28 + 0x269) & 1) == 0));
      puVar38 = &UNK_108cacd97;
      plVar39 = (long *)0x14;
      in_stack_00000740 = (long *)&stack0x000004c0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000004c0,s____Apps__Connectors__Apps__Conne_108af6629,&stack0x00000730);
      in_stack_00000730 = (long *)&stack0x00000a40;
      in_stack_00000738 = (long *)&DAT_100c7b3a0;
      in_stack_00000748 = (long *)&DAT_10112965c;
      in_stack_00000750 = &stack0x000009b0;
      in_stack_00000758 = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x100,s__108ac137a,&stack0x00000730);
      uVar9 = extraout_x1_04;
      if (in_stack_000004c0 != 0) {
        _free(in_stack_000004c8);
        uVar9 = extraout_x1_05;
      }
      lVar22 = in_stack_00000038[0x52];
      if (lVar22 == in_stack_00000038[0x50]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                  (in_stack_00000038 + 0x50);
        uVar9 = extraout_x1_06;
      }
      puVar10 = (undefined8 *)(in_stack_00000038[0x51] + lVar22 * 0x18);
      uVar30 = *(undefined8 *)(unaff_x29 + -0x100);
      puVar10[1] = *(undefined8 *)(unaff_x29 + -0xf8);
      *puVar10 = uVar30;
      puVar10[2] = *(undefined8 *)(unaff_x29 + -0xf0);
      in_stack_00000038[0x52] = lVar22 + 1;
LAB_1005a8c80:
      plVar28 = in_stack_000009b8;
      if (plVar7 != in_stack_000009b8) {
        do {
          FUN_100e3b46c(plVar28);
          uVar18 = uVar18 - 1;
          uVar9 = extraout_x1_07;
          plVar28 = plVar28 + 0x4e;
        } while (uVar18 != 0);
      }
      if (in_stack_000009b0 != (undefined *)0x0) {
        _free(in_stack_000009b8);
        uVar9 = extraout_x1_08;
      }
      pcVar24 = (char *)in_stack_00000038[0x46];
      if (*pcVar24 == '\0') {
        *pcVar24 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar24,uVar9,1000000000)
        ;
      }
      FUN_1060fa678(pcVar24,1,pcVar24);
      in_stack_000009b0 = puVar38;
      in_stack_000009b8 = plVar39;
    }
  }
LAB_1005a8cd8:
  piVar12 = (int *)in_stack_00000038[0x4f];
  if (*(char *)(*(long *)(piVar12 + 0x1e2) + 0x2534) == '\x01') {
    if (*piVar12 == 1 && 0 < (long)*(ulong *)(piVar12 + 2)) {
      uVar9 = 0;
      uVar18 = *(ulong *)(piVar12 + 2) / 0x32;
      if (uVar18 < 2) {
        uVar18 = 1;
      }
    }
    else {
      uVar9 = 1;
      uVar18 = 8000;
    }
    plVar7 = in_stack_00000038 + 0x62;
    __ZN17codex_core_skills6render22build_available_skills17ha6eb1c09095ed93bE
              (plVar7,*(long *)(piVar12 + 0x1ec) + 0x10,uVar9,uVar18,in_stack_00000038[0x4e] + 0x10)
    ;
    if (*plVar7 != -0x8000000000000000) {
      *(undefined1 *)((long)in_stack_00000038 + 0x2f3) = 1;
      in_stack_00000038[0x79] = in_stack_00000038[0x6b];
      in_stack_00000038[0x78] = in_stack_00000038[0x6a];
      in_stack_00000038[0x7b] = in_stack_00000038[0x6d];
      in_stack_00000038[0x7a] = in_stack_00000038[0x6c];
      in_stack_00000038[0x7d] = in_stack_00000038[0x6f];
      in_stack_00000038[0x7c] = in_stack_00000038[0x6e];
      in_stack_00000038[0x71] = in_stack_00000038[99];
      in_stack_00000038[0x70] = *plVar7;
      in_stack_00000038[0x73] = in_stack_00000038[0x65];
      in_stack_00000038[0x72] = in_stack_00000038[100];
      in_stack_00000038[0x75] = in_stack_00000038[0x67];
      in_stack_00000038[0x74] = in_stack_00000038[0x66];
      in_stack_00000038[0x77] = in_stack_00000038[0x69];
      in_stack_00000038[0x76] = in_stack_00000038[0x68];
      if (in_stack_00000038[0x76] == -0x8000000000000000) {
        in_stack_00000038[0x5f] = -0x8000000000000000;
        *(undefined2 *)((long)in_stack_00000038 + 0x2f2) = 1;
        in_stack_00000038[0x83] = in_stack_00000038[0x67];
        in_stack_00000038[0x82] = in_stack_00000038[0x66];
        in_stack_00000038[0x81] = in_stack_00000038[0x65];
        in_stack_00000038[0x7f] = in_stack_00000038[99];
        in_stack_00000038[0x7e] = *plVar7;
        in_stack_00000038[0x80] = in_stack_00000038[100];
      }
      else {
        lVar22 = in_stack_00000038[0x77];
        lVar11 = in_stack_00000038[0x78];
        if (lVar11 == 0) {
          lVar23 = 1;
        }
        else {
          lVar23 = _malloc(lVar11);
          if (lVar23 == 0) {
            FUN_107c03c64(1,lVar11);
            goto LAB_1005ab394;
          }
        }
        _memcpy(lVar23,lVar22,lVar11);
        in_stack_00000038[0x5f] = lVar11;
        in_stack_00000038[0x60] = lVar23;
        in_stack_00000038[0x61] = lVar11;
        *(undefined2 *)((long)in_stack_00000038 + 0x2f2) = 1;
        in_stack_00000038[0x82] = in_stack_00000038[0x74];
        in_stack_00000038[0x81] = in_stack_00000038[0x73];
        in_stack_00000038[0x83] = in_stack_00000038[0x75];
        in_stack_00000038[0x7f] = in_stack_00000038[0x71];
        in_stack_00000038[0x7e] = in_stack_00000038[0x70];
        in_stack_00000038[0x80] = in_stack_00000038[0x72];
        if ((in_stack_00000038[0x76] & 0x7fffffffffffffffU) != 0) {
          _free(in_stack_00000038[0x77]);
          lVar11 = in_stack_00000038[0x5f];
        }
        if (lVar11 != -0x8000000000000000) {
          *(undefined2 *)((long)in_stack_00000038 + 0x2f1) = 0;
          in_stack_00000038[0x84] = 0;
          in_stack_00000038[0x85] = 1;
          in_stack_00000038[0x86] = 0;
          *(undefined4 *)(in_stack_00000038 + 0x87) = 1;
          in_stack_00000038[0x88] = lVar11;
          in_stack_00000038[0x89] = in_stack_00000038[0x60];
          in_stack_00000038[0x8a] = in_stack_00000038[0x61];
          in_stack_00000038[0xc2] = in_stack_00000038[0x4e];
          *(undefined1 *)(in_stack_00000038 + 0x105) = 0;
          iVar6 = FUN_1005a4060(in_stack_00000038 + 0x84,in_stack_00000010);
          if (iVar6 != 0) {
            *in_stack_00000008 = 0x8000000000000000;
            uVar17 = 6;
            goto LAB_1005ab39c;
          }
          FUN_100d28c3c(in_stack_00000038 + 0x84);
          *(undefined1 *)((long)in_stack_00000038 + 0x2f1) = 0;
        }
      }
      in_stack_000009b0 = &UNK_108cb15a2;
      in_stack_000009b8 = (long *)0x16;
      in_stack_00000740 = (long *)&stack0x000004c0;
      __ZN17codex_core_skills6render28render_available_skills_body17h0ac3107d97233d06E
                (&stack0x000004c0,in_stack_00000038[0x7f],in_stack_00000038[0x80],
                 in_stack_00000038[0x82],in_stack_00000038[0x83]);
      in_stack_00000730 = (long *)&stack0x00000a70;
      in_stack_00000738 = (long *)&DAT_100c7b3a0;
      in_stack_00000748 = (long *)&DAT_10112965c;
      in_stack_00000750 = &stack0x000009b0;
      in_stack_00000758 = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x100,s__108ac137a,&stack0x00000730);
      if (in_stack_000004c0 != 0) {
        _free(in_stack_000004c8);
      }
      lVar22 = in_stack_00000038[0x52];
      if (lVar22 == in_stack_00000038[0x50]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                  (in_stack_00000038 + 0x50);
      }
      puVar10 = (undefined8 *)(in_stack_00000038[0x51] + lVar22 * 0x18);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x100);
      puVar10[1] = *(undefined8 *)(unaff_x29 + -0xf8);
      *puVar10 = uVar9;
      puVar10[2] = *(undefined8 *)(unaff_x29 + -0xf0);
      in_stack_00000038[0x52] = lVar22 + 1;
      FUN_100c973ec(in_stack_00000038 + 0x7e);
      *(undefined2 *)((long)in_stack_00000038 + 0x2f2) = 0;
    }
  }
  lVar22 = *(long *)(in_stack_00000038[0x4e] + 0x3a0);
  __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
            (in_stack_00000038 + 0x1fc,*(long *)(in_stack_00000038[0x4f] + 0x788) + 0x10);
  in_stack_00000038[0x5f] = lVar22 + 0x10;
  in_stack_00000038[0x60] = (long)(in_stack_00000038 + 0x1fc);
  *(undefined1 *)(in_stack_00000038 + 0x1fb) = 0;
  FUN_100a7ebb0(&stack0x000000a0,in_stack_00000038 + 0x5f,in_stack_00000010);
  if (in_stack_000000a0 == -0x8000000000000000) {
    *in_stack_00000008 = 0x8000000000000000;
    uVar17 = 7;
    goto LAB_1005ab39c;
  }
  in_stack_00000038[0x49] = in_stack_000000a8;
  in_stack_00000038[0x48] = in_stack_000000a0;
  in_stack_00000038[0x4b] = in_stack_000000b8;
  in_stack_00000038[0x4a] = in_stack_000000b0;
  in_stack_00000038[0x4d] = in_stack_000000c8;
  in_stack_00000038[0x4c] = in_stack_000000c0;
  if (((char)in_stack_00000038[0x1fb] == '\x03') &&
     (*(char *)((long)in_stack_00000038 + 0xfd2) == '\x03')) {
    FUN_100cb9114(in_stack_00000038 + 0x65);
    if (in_stack_00000038[0x62] != 0) {
      _free(in_stack_00000038[99]);
    }
    *(undefined1 *)((long)in_stack_00000038 + 0xfd1) = 0;
  }
  FUN_100e05b5c(in_stack_00000038 + 0x1fc);
  if (in_stack_00000038[0x328] != 0) {
    _free(in_stack_00000038[0x329]);
  }
  puVar38 = (undefined *)in_stack_00000038[0x4d];
  if (puVar38 != (undefined *)0x0) {
    lVar22 = in_stack_00000038[0x4c];
    lVar11 = (long)puVar38 << 7;
    plVar7 = (long *)_malloc(lVar11);
    if (plVar7 == (long *)0x0) {
      FUN_107c03c64(8,lVar11);
      goto LAB_1005ab394;
    }
    puVar26 = (undefined *)0x0;
    plVar39 = plVar7;
    do {
      if (lVar11 == 0) break;
      FUN_103615804(&stack0x00000730,lVar22);
      puVar26 = puVar26 + 1;
      lVar22 = lVar22 + 0x80;
      plVar39[9] = in_stack_00000778;
      plVar39[8] = in_stack_00000770;
      plVar39[0xb] = in_stack_00000788;
      plVar39[10] = in_stack_00000780;
      plVar39[0xd] = in_stack_00000798;
      plVar39[0xc] = in_stack_00000790;
      plVar39[0xf] = in_stack_000007a8;
      plVar39[0xe] = in_stack_000007a0;
      plVar39[1] = (long)in_stack_00000738;
      *plVar39 = (long)in_stack_00000730;
      plVar39[3] = (long)in_stack_00000748;
      plVar39[2] = (long)in_stack_00000740;
      lVar11 = lVar11 + -0x80;
      plVar39[5] = (long)in_stack_00000758;
      plVar39[4] = (long)in_stack_00000750;
      plVar39[7] = in_stack_00000768;
      plVar39[6] = in_stack_00000760;
      plVar39 = plVar39 + 0x10;
    } while (puVar38 != puVar26);
    if (puVar38 != (undefined *)0x8000000000000000) {
      in_stack_00000740 = (long *)&stack0x000004c0;
      __ZN155__LT_codex_core__context__available_plugins_instructions__AvailablePluginsInstructions_u20_as_u20_codex_core__context__fragment__ContextualUserFragment_GT_4body17h44e4b6f818f37057E
                (&stack0x000004c0,&stack0x000009b0);
      in_stack_00000730 = (long *)&stack0x00000a40;
      in_stack_00000738 = (long *)&DAT_100c7b3a0;
      in_stack_00000748 = (long *)&DAT_10112965c;
      in_stack_00000750 = &stack0x00000a70;
      in_stack_00000758 = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x100,s__108ac137a,&stack0x00000730);
      if (puVar38 != (undefined *)0x0) {
        _free(plVar7);
      }
      lVar22 = in_stack_00000038[0x52];
      if (lVar22 == in_stack_00000038[0x50]) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                  (in_stack_00000038 + 0x50);
      }
      puVar10 = (undefined8 *)(in_stack_00000038[0x51] + lVar22 * 0x18);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x100);
      puVar10[1] = *(undefined8 *)(unaff_x29 + -0xf8);
      *puVar10 = uVar9;
      puVar10[2] = *(undefined8 *)(unaff_x29 + -0xf0);
      in_stack_00000038[0x52] = lVar22 + 1;
      plVar39 = plVar7;
      for (puVar26 = puVar38; puVar26 != (undefined *)0x0; puVar26 = puVar26 + -1) {
        FUN_100e0649c(plVar39);
        plVar39 = plVar39 + 0x10;
      }
      _free(plVar7);
      in_stack_000009b0 = puVar38;
      in_stack_000009b8 = plVar7;
      in_stack_000009c0 = puVar38;
    }
  }
  lVar22 = *(long *)(*(long *)(in_stack_00000038[0x4e] + 0x3b0) + 0x80);
  if (lVar22 == 0) {
    plVar7 = (long *)0x8;
  }
  else {
    lVar11 = *(long *)(*(long *)(in_stack_00000038[0x4e] + 0x3b0) + 0x78);
    lVar23 = lVar22 * 0x10;
    plVar7 = (long *)_malloc(lVar23);
    if (plVar7 == (long *)0x0) {
      FUN_107c03c64(8,lVar23);
      goto LAB_1005ab394;
    }
    lVar13 = 0;
    lVar15 = lVar22;
    do {
      if (lVar23 - lVar13 == 0) break;
      puVar10 = (undefined8 *)(lVar11 + lVar13);
      uVar9 = puVar10[1];
      plVar39 = (long *)*puVar10;
      lVar4 = *plVar39;
      *plVar39 = lVar4 + 1;
      if (lVar4 < 0) goto LAB_1005ab394;
      ((undefined8 *)((long)plVar7 + lVar13))[1] = uVar9;
      *(undefined8 *)((long)plVar7 + lVar13) = plVar39;
      lVar13 = lVar13 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  in_stack_00000038[0x65] = (long)plVar7;
  in_stack_00000038[0x66] = (long)plVar7;
  in_stack_00000038[0x67] = lVar22;
  in_stack_00000038[0x68] = (long)(plVar7 + lVar22 * 2);
  plVar39 = in_stack_00000730;
  plVar28 = in_stack_00000740;
  if (plVar7 != plVar7 + lVar22 * 2) {
    do {
      in_stack_00000730 = in_stack_00000738;
      in_stack_00000740 = plVar39;
      in_stack_00000038[0x66] = (long)(plVar7 + 2);
      lVar22 = *plVar7;
      lVar11 = plVar7[1];
      in_stack_00000038[0x5f] = lVar22;
      in_stack_00000038[0x60] = lVar11;
      in_stack_00000038[0x61] = lVar22;
      in_stack_00000038[0x62] = lVar11;
      auVar34 = (**(code **)(lVar11 + 0x18))
                          (lVar22 + (*(long *)(lVar11 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           in_stack_00000038[0x4e] + 0x140,in_stack_00000038[0x4e] + 0x198);
      *(undefined1 (*) [16])(in_stack_00000038 + 99) = auVar34;
      (**(code **)(auVar34._8_8_ + 0x18))(&stack0x00000730,auVar34._0_8_,in_stack_00000010);
      if (in_stack_00000740 == (long *)0x8000000000000000) {
        *in_stack_00000008 = 0x8000000000000000;
        uVar17 = 8;
        goto LAB_1005ab39c;
      }
      lVar22 = in_stack_00000038[99];
      puVar10 = (undefined8 *)in_stack_00000038[100];
      pcVar2 = (code *)*puVar10;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(lVar22);
      }
      if (puVar10[1] != 0) {
        _free(lVar22);
      }
      in_stack_00000748 = in_stack_00000730 + (long)plVar28 * 4;
      in_stack_00000738 = in_stack_00000730;
      plVar7 = in_stack_00000730;
      if (plVar28 == (long *)0x0) {
LAB_1005ab5d0:
        if ((long)in_stack_00000748 - (long)in_stack_00000738 != 0) {
          uVar18 = (ulong)((long)in_stack_00000748 - (long)in_stack_00000738) >> 5;
          plVar7 = in_stack_00000738 + 1;
          do {
            if (plVar7[-1] != 0) {
              _free(*plVar7);
            }
            plVar7 = plVar7 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      else {
        do {
          in_stack_00000738 = plVar7 + 4;
          lVar22 = *plVar7;
          if (lVar22 == -0x8000000000000000) goto LAB_1005ab5d0;
          lVar11 = plVar7[1];
          lVar23 = plVar7[2];
          if (*(byte *)(plVar7 + 3) < 2) {
            if (lVar23 == 0) {
              lVar13 = 1;
            }
            else {
              lVar13 = _malloc(lVar23);
              if (lVar13 == 0) {
                FUN_107c03c64(1,lVar23);
                goto LAB_1005ab394;
              }
            }
            _memcpy(lVar13,lVar11,lVar23);
            lVar15 = in_stack_00000038[0x52];
            if (lVar15 == in_stack_00000038[0x50]) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                        (in_stack_00000038 + 0x50);
            }
            plVar7 = (long *)(in_stack_00000038[0x51] + lVar15 * 0x18);
            *plVar7 = lVar23;
            plVar7[1] = lVar13;
            plVar7[2] = lVar23;
            in_stack_00000038[0x52] = lVar15 + 1;
          }
          else if (*(byte *)(plVar7 + 3) == 2) {
            if (lVar23 == 0) {
              lVar13 = 1;
            }
            else {
              lVar13 = _malloc(lVar23);
              if (lVar13 == 0) {
                FUN_107c03c64(1,lVar23);
                goto LAB_1005ab394;
              }
            }
            _memcpy(lVar13,lVar11,lVar23);
            lVar15 = in_stack_00000038[0x55];
            if (lVar15 == in_stack_00000038[0x53]) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                        (in_stack_00000038 + 0x53);
            }
            plVar7 = (long *)(in_stack_00000038[0x54] + lVar15 * 0x18);
            *plVar7 = lVar23;
            plVar7[1] = lVar13;
            plVar7[2] = lVar23;
            in_stack_00000038[0x55] = lVar15 + 1;
          }
          else {
            if (lVar23 == 0) {
              lVar13 = 1;
            }
            else {
              lVar13 = _malloc(lVar23);
              if (lVar13 == 0) {
                FUN_107c03c64(1,lVar23);
                goto LAB_1005ab394;
              }
            }
            _memcpy(lVar13,lVar11,lVar23);
            lVar15 = in_stack_00000038[0x58];
            if (lVar15 == in_stack_00000038[0x56]) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                        (in_stack_00000038 + 0x56);
            }
            plVar7 = (long *)(in_stack_00000038[0x57] + lVar15 * 0x18);
            *plVar7 = lVar23;
            plVar7[1] = lVar13;
            plVar7[2] = lVar23;
            in_stack_00000038[0x58] = lVar15 + 1;
          }
          if (lVar22 != 0) {
            _free(lVar11);
          }
          bVar3 = in_stack_00000738 != in_stack_00000748;
          plVar7 = in_stack_00000738;
          in_stack_00000738 = in_stack_00000730;
        } while (bVar3);
      }
      if (in_stack_00000740 != (long *)0x0) {
        _free(in_stack_00000730);
      }
      lVar22 = *(long *)in_stack_00000038[0x61];
      *(long *)in_stack_00000038[0x61] = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(in_stack_00000038 + 0x61);
      }
      plVar7 = (long *)in_stack_00000038[0x66];
      plVar39 = in_stack_00000730;
      plVar28 = in_stack_00000740;
    } while (plVar7 != (long *)in_stack_00000038[0x68]);
  }
  in_stack_00000038[0x5f] = 0;
  FUN_100d34904(in_stack_00000038 + 0x65);
  lVar22 = in_stack_00000038[0x4f];
  if (*(long *)(lVar22 + 0x510) != -0x8000000000000000) {
    uVar9 = *(undefined8 *)(lVar22 + 0x518);
    lVar22 = *(long *)(lVar22 + 0x520);
    if (lVar22 == 0) {
      lVar11 = 1;
    }
    else {
      lVar11 = _malloc(lVar22);
      if (lVar11 == 0) {
        FUN_107c03c64(1,lVar22);
        goto LAB_1005ab394;
      }
    }
    _memcpy(lVar11,uVar9,lVar22);
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
              (&stack0x00000730,*(undefined8 *)(in_stack_00000038[0x4f] + 0x398),
               *(undefined8 *)(in_stack_00000038[0x4f] + 0x3a0));
    plVar7 = in_stack_00000730;
    plVar39 = in_stack_00000738;
    if (in_stack_00000730 == (long *)0x8000000000000000) {
      if (in_stack_00000740 == (long *)0x0) {
        plVar39 = (long *)0x1;
      }
      else {
        plVar39 = (long *)_malloc(in_stack_00000740);
        if (plVar39 == (long *)0x0) {
          FUN_107c03c64(1,in_stack_00000740);
          goto LAB_1005ab394;
        }
      }
      _memcpy(plVar39,in_stack_00000738,in_stack_00000740);
      plVar7 = in_stack_00000740;
    }
    in_stack_00000740 = (long *)(unaff_x29 + -0x100);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x100,s_<INSTRUCTIONS>_108af6886,&stack0x00000730);
    in_stack_00000730 = (long *)&stack0x00000a40;
    in_stack_00000738 = (long *)&DAT_100c7b3a0;
    in_stack_00000748 = (long *)&DAT_10112965c;
    in_stack_00000750 = &stack0x00000a70;
    in_stack_00000758 = &DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000009b0,s__108ac137a,&stack0x00000730);
    if (*(long *)(unaff_x29 + -0x100) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xf8));
    }
    lVar23 = in_stack_00000038[0x55];
    if (lVar23 == in_stack_00000038[0x53]) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000038 + 0x53)
      ;
    }
    puVar10 = (undefined8 *)(in_stack_00000038[0x54] + lVar23 * 0x18);
    puVar10[1] = in_stack_000009b8;
    *puVar10 = in_stack_000009b0;
    puVar10[2] = in_stack_000009c0;
    in_stack_00000038[0x55] = lVar23 + 1;
    if (plVar7 != (long *)0x0) {
      _free(plVar39);
    }
    if (lVar22 != 0) {
      _free(lVar11);
    }
    lVar22 = in_stack_00000038[0x4f];
  }
  if (*(char *)(*(long *)(lVar22 + 0x788) + 0x2535) == '\x01') {
    lVar11 = in_stack_00000038[0x4e];
    plVar7 = *(long **)(lVar11 + 0x368);
    lVar22 = *plVar7;
    *plVar7 = lVar22 + 1;
    if (lVar22 < 0) goto LAB_1005ab394;
    in_stack_00000038[0x5f] = *(long *)(lVar11 + 0x368);
    lVar11 = in_stack_00000038[0x4e];
    lVar22 = lVar11 + 0x3b8;
    in_stack_000000d8 = *(long *)(lVar11 + 0x788);
    in_stack_000000d0 = *(long *)(lVar11 + 0x780);
    in_stack_00000038[0x60] = lVar22;
    in_stack_00000038[0x62] = in_stack_000000d8;
    in_stack_00000038[0x61] = in_stack_000000d0;
    plVar7 = in_stack_00000038 + 0x8d;
    *(undefined1 *)(in_stack_00000038 + 0x8d) = 0;
    in_stack_00000038[99] = lVar22;
    in_stack_00000038[0x65] = in_stack_00000038[0x62];
    in_stack_00000038[100] = in_stack_00000038[0x61];
    *(undefined1 *)(in_stack_00000038 + 0x8c) = 0;
    in_stack_00000038[0x67] = in_stack_00000038[0x65];
    in_stack_00000038[0x66] = in_stack_00000038[100];
    in_stack_00000038[0x68] = lVar22;
    *(undefined1 *)(in_stack_00000038 + 0x77) = 0;
    FUN_1005344f8(&stack0x00000730,in_stack_00000038 + 0x68,in_stack_00000010);
    if (in_stack_00000730 == (long *)0x8000000000000021) {
      *(undefined1 *)(in_stack_00000038 + 0x8c) = 3;
      *(undefined1 *)plVar7 = 3;
LAB_1005a9588:
      *in_stack_00000008 = 0x8000000000000000;
      uVar17 = 9;
      goto LAB_1005ab39c;
    }
    FUN_100cde0a4(in_stack_00000038 + 0x68);
    if (in_stack_00000730 == (long *)0x8000000000000020) {
      uVar20 = FUN_100e8ed88(in_stack_00000758,in_stack_00000760,in_stack_00000038 + 0x66);
      lVar22 = 0;
      bVar16 = (byte)(uVar20 >> 0x39);
      uVar20 = uVar20 & (ulong)in_stack_00000740;
      uVar9 = *(undefined8 *)((long)in_stack_00000738 + uVar20);
      uVar18 = CONCAT17(-((byte)((ulong)uVar9 >> 0x38) == bVar16),
                        CONCAT16(-((byte)((ulong)uVar9 >> 0x30) == bVar16),
                                 CONCAT15(-((byte)((ulong)uVar9 >> 0x28) == bVar16),
                                          CONCAT14(-((byte)((ulong)uVar9 >> 0x20) == bVar16),
                                                   CONCAT13(-((byte)((ulong)uVar9 >> 0x18) == bVar16
                                                             ),CONCAT12(-((byte)((ulong)uVar9 >>
                                                                                0x10) == bVar16),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar9 >> 8) == bVar16),-((byte)uVar9 == bVar16))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        while (uVar18 == 0) {
          bVar31 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar9 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar9 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar9 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar9 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar9 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar9 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar9 >> 8) ==
                                                                     -1),-((char)uVar9 == -1))))))))
                              ,1);
          if ((bVar31 & 1) != 0) goto LAB_1005a97c8;
          lVar22 = lVar22 + 8;
          uVar20 = uVar20 + lVar22 & (ulong)in_stack_00000740;
          uVar9 = *(undefined8 *)((long)in_stack_00000738 + uVar20);
          uVar18 = CONCAT17(-((byte)((ulong)uVar9 >> 0x38) == bVar16),
                            CONCAT16(-((byte)((ulong)uVar9 >> 0x30) == bVar16),
                                     CONCAT15(-((byte)((ulong)uVar9 >> 0x28) == bVar16),
                                              CONCAT14(-((byte)((ulong)uVar9 >> 0x20) == bVar16),
                                                       CONCAT13(-((byte)((ulong)uVar9 >> 0x18) ==
                                                                 bVar16),CONCAT12(-((byte)((ulong)
                                                  uVar9 >> 0x10) == bVar16),
                                                  CONCAT11(-((byte)((ulong)uVar9 >> 8) == bVar16),
                                                           -((byte)uVar9 == bVar16)))))))) &
                   0x8080808080808080;
        }
        uVar21 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar20 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) &
                 (ulong)in_stack_00000740;
        if (in_stack_00000038[0x67] == (in_stack_00000738 + uVar21 * -5 + -5)[1] &&
            in_stack_00000038[0x66] == in_stack_00000738[uVar21 * -5 + -5]) break;
        uVar18 = uVar18 - 1 & uVar18;
      }
      lVar22 = ((long)(uVar21 * 0x28) >> 3) * -0x3333333333333333;
      puVar10 = (undefined8 *)((long)in_stack_00000738 + (lVar22 - 8U & (ulong)in_stack_00000740));
      uVar9 = *puVar10;
      uVar30 = *(undefined8 *)((long)in_stack_00000738 + lVar22);
      uVar18 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                        CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                 CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                          CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1),
                                                   CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                            CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                      == -1),CONCAT11(-((char)((
                                                  ulong)uVar30 >> 8) == -1),-((char)uVar30 == -1))))
                                                  ))));
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      if (((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) +
          ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar9 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar9 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar9 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar9 >> 0x20) == -1),
                                                              CONCAT13(-((char)((ulong)uVar9 >> 0x18
                                                                               ) == -1),
                                                                       CONCAT12(-((char)((ulong)
                                                  uVar9 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar9 >> 8) == -1),
                                                           -((char)uVar9 == -1))))))))) >> 3) < 8) {
        uVar17 = 0xff;
      }
      else {
        uVar17 = 0x80;
      }
      *(undefined1 *)((long)in_stack_00000738 + lVar22) = uVar17;
      *(undefined1 *)(puVar10 + 1) = uVar17;
      plStack0000000000000018 = (long *)in_stack_00000738[uVar21 * -5 + -3];
      if (plStack0000000000000018 != (long *)0x8000000000000000) {
        in_stack_00000740 = (long *)in_stack_00000738[uVar21 * -5 + -2];
        in_stack_00000748 = (long *)in_stack_00000738[uVar21 * -5 + -1];
        goto LAB_1005a97dc;
      }
LAB_1005a97c8:
      in_stack_00000748 = (long *)0x0;
      plStack0000000000000018 = (long *)0x0;
      in_stack_00000740 = (long *)0x8;
LAB_1005a97dc:
      FUN_100d98490(&stack0x00000a40);
      in_stack_00000730 = (long *)0x8000000000000020;
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = in_stack_00000790;
      *(long *)(unaff_x29 + -200) = in_stack_00000788;
      *(long *)(unaff_x29 + -0xb0) = in_stack_000007a0;
      *(long *)(unaff_x29 + -0xb8) = in_stack_00000798;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000007b0;
      *(long *)(unaff_x29 + -0xa8) = in_stack_000007a8;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000007c0;
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000007b8;
      *(long *)(unaff_x29 + -0xe0) = in_stack_00000770;
      *(long *)(unaff_x29 + -0xe8) = in_stack_00000768;
      *(long *)(unaff_x29 + -0xd0) = in_stack_00000780;
      *(long *)(unaff_x29 + -0xd8) = in_stack_00000778;
      *(undefined **)(unaff_x29 + -0xf8) = in_stack_00000758;
      *(undefined1 **)(unaff_x29 + -0x100) = in_stack_00000750;
      *(long *)(unaff_x29 + -0xf0) = in_stack_00000760;
      plStack0000000000000018 = in_stack_00000738;
    }
    lVar11 = *(long *)(unaff_x29 + -0xf8);
    lVar22 = *(long *)(unaff_x29 + -0x100);
    lVar23 = *(long *)(unaff_x29 + -0xf0);
    *(undefined1 *)(in_stack_00000038 + 0x8c) = 1;
    if (in_stack_00000730 == (long *)0x8000000000000020) {
      *(long **)(unaff_x29 + -0x100) = in_stack_00000740;
      *(long **)(unaff_x29 + -0xf8) = in_stack_00000740;
      plVar14 = in_stack_00000740 + (long)in_stack_00000748 * 0x11;
      *(long **)(unaff_x29 + -0xf0) = plStack0000000000000018;
      *(long **)(unaff_x29 + -0xe8) = plVar14;
      plVar39 = in_stack_00000740;
      plVar28 = in_stack_00000740;
      lVar13 = lVar22;
      if (in_stack_00000748 != (long *)0x0) {
        puVar35 = (undefined1 *)0x8000000000000020;
        plVar33 = in_stack_00000740;
        plVar27 = in_stack_00000740;
        plVar36 = plStack0000000000000018;
        plVar37 = in_stack_00000740;
        do {
          plVar39 = plVar33;
          lVar15 = *plVar39;
          *(long *)(unaff_x29 + -0x78) = plVar39[1];
          *(long *)(unaff_x29 + -0x80) = lVar15;
          lVar4 = plVar39[7];
          lVar15 = plVar39[6];
          in_stack_00000768 = plVar39[9];
          in_stack_00000760 = plVar39[8];
          plVar33 = (long *)plVar39[3];
          lVar32 = plVar39[2];
          uVar18 = plVar39[5];
          plVar28 = (long *)plVar39[4];
          in_stack_00000778 = plVar39[0xb];
          in_stack_00000770 = plVar39[10];
          in_stack_00000788 = plVar39[0xd];
          in_stack_00000780 = plVar39[0xc];
          in_stack_00000798 = plVar39[0xf];
          in_stack_00000790 = plVar39[0xe];
          in_stack_000007a0 = plVar39[0x10];
          if (lVar32 == -0x8000000000000000) {
            lVar13 = 0;
            lVar11 = 1;
            lVar23 = 0;
            FUN_10624142c(&stack0x000004c0,unaff_x29 + -0x80,0);
            thunk_FUN_108855060(&stack0x000009b0,0,0x24,1,1);
            lVar29 = 1;
            uRam0000000000000021 = (undefined4)lVar22;
            lVar25 = 0;
            puRam0000000000000001 = puVar35;
            plRam0000000000000009 = plVar36;
            plRam0000000000000011 = plVar37;
            plRam0000000000000019 = in_stack_00000748;
          }
          else {
            if ((plVar28 == (long *)0x5) &&
               ((int)*plVar33 == 0x6f6f722f && *(char *)((long)plVar33 + 4) == 't')) {
              lVar25 = 4;
              puVar26 = &UNK_108e51f86;
              lVar29 = _malloc(4);
            }
            else {
              lVar22 = 0;
              auVar34 = FUN_1049a9b78(&stack0x000004c0);
              lVar29 = auVar34._8_8_;
              puVar38 = auVar34._0_8_;
              lVar25 = 4;
              if (puVar38 != (undefined *)0x0 && lVar29 != 0) {
                lVar25 = lVar29;
              }
              puVar26 = &UNK_108e51f86;
              if (puVar38 != (undefined *)0x0 && lVar29 != 0) {
                puVar26 = puVar38;
              }
              lVar29 = _malloc(lVar25);
              in_stack_00000748 = plVar28;
              plVar37 = plVar33;
            }
            if (lVar29 == 0) {
              *(long **)(unaff_x29 + -0xf8) = plVar39 + 0x11;
              FUN_107c03c64(1,lVar25);
              goto LAB_1005ab394;
            }
            _memcpy(lVar29,puVar26,lVar25);
          }
          if ((uVar18 == 0x8000000000000000) || (lVar4 == 0)) {
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x000009b0,s___108af1072,&stack0x000004c0);
          }
          else {
            plVar37 = (long *)&stack0x00000a40;
            in_stack_00000748 = (long *)&DAT_103296230;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x000009b0,s_____108af1077,&stack0x000004c0);
          }
          puVar35 = &stack0x00000ad0;
          plVar36 = (long *)&DAT_103296230;
          if (lVar25 != 0) {
            _free(lVar29);
          }
          if ((lVar32 != -0x8000000000000000) && (lVar32 != 0)) {
            _free(plVar33);
          }
          if ((uVar18 & 0x7fffffffffffffff) != 0) {
            _free(lVar15);
          }
          if ((in_stack_00000760 != -0x8000000000000000) && (in_stack_00000760 != 0)) {
            _free(in_stack_00000768);
          }
          if ((in_stack_00000778 != -0x8000000000000000) && (in_stack_00000778 != 0)) {
            _free(in_stack_00000780);
          }
          plVar27[2] = lVar23;
          plVar28 = plVar27 + 3;
          plVar27[1] = lVar11;
          *plVar27 = lVar13;
          plVar33 = plVar39 + 0x11;
          plVar27 = plVar28;
        } while (plVar39 + 0x11 != plVar14);
        plVar39 = plVar39 + 0x11;
      }
      uVar20 = (long)plStack0000000000000018 * 0x88;
      uVar18 = (ulong)((long)plVar28 - (long)in_stack_00000740) / 0x18;
      *(undefined8 *)(unaff_x29 + -0x100) = 8;
      *(undefined8 *)(unaff_x29 + -0xf8) = 8;
      *(undefined8 *)(unaff_x29 + -0xf0) = 0;
      *(undefined8 *)(unaff_x29 + -0xe8) = 8;
      if ((long)plVar14 - (long)plVar39 != 0) {
        uVar21 = (ulong)((long)plVar14 - (long)plVar39) / 0x88;
        plVar39 = plVar39 + 6;
        do {
          if (plVar39[-4] == -0x8000000000000000 || plVar39[-4] == 0) {
            if (plVar39[-1] != -0x8000000000000000 && plVar39[-1] != 0) goto LAB_1005a9c5c;
LAB_1005a9c24:
            if (plVar39[2] != -0x8000000000000000 && plVar39[2] != 0) goto LAB_1005a9c74;
LAB_1005a9c34:
            lVar22 = plVar39[5];
          }
          else {
            _free(plVar39[-3]);
            if (plVar39[-1] == -0x8000000000000000 || plVar39[-1] == 0) goto LAB_1005a9c24;
LAB_1005a9c5c:
            _free(*plVar39);
            if (plVar39[2] == -0x8000000000000000 || plVar39[2] == 0) goto LAB_1005a9c34;
LAB_1005a9c74:
            _free(plVar39[3]);
            lVar22 = plVar39[5];
          }
          if ((lVar22 != -0x8000000000000000) && (lVar22 != 0)) {
            _free(plVar39[6]);
          }
          plVar39 = plVar39 + 0x11;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      plVar39 = in_stack_00000740;
      if ((plStack0000000000000018 != (long *)0x0) &&
         (lVar22 = (uVar20 / 0x18) * 0x18, uVar20 % 0x18 != 0)) {
        if (uVar20 < 0x18) {
          if (uVar20 != 0) {
            _free();
          }
          plVar39 = (long *)0x8;
        }
        else {
          plVar39 = (long *)__RNvCshXwFllX56pT_7___rustc14___rust_realloc
                                      (in_stack_00000740,uVar20,8,lVar22);
          if (plVar39 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar22);
            goto LAB_1005ab394;
          }
        }
      }
      FUN_100f3f514(&stack0x00000a28,plVar39,uVar18,&UNK_108ca14f4,1);
      if (plVar28 != in_stack_00000740) {
        plVar28 = plVar39 + 1;
        do {
          if (plVar28[-1] != 0) {
            _free(*plVar28);
          }
          plVar28 = plVar28 + 3;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      if (0x17 < uVar20) {
        _free(plVar39);
      }
      *(undefined1 *)plVar7 = 1;
      in_stack_00000010 = in_stack_00000740;
      lVar22 = lVar13;
      if (in_stack_00000a28 == -0x8000000000000000) goto LAB_1005a9588;
    }
    else {
      FUN_100df5738(&stack0x000004c0);
      in_stack_00000a38 = 0;
      in_stack_00000a28 = 0;
      in_stack_00000a30 = 1;
      *(undefined1 *)plVar7 = 1;
    }
    __ZN10codex_core7context19environment_context18EnvironmentContext17from_turn_context17h90d119aa2847ea3eE
              (&stack0x00000730,in_stack_00000038[0x4f],in_stack_00000038[0x5f] + 0x10);
    if (in_stack_00000a38 == 0) {
      lVar13 = in_stack_00000790;
      lVar15 = in_stack_00000798;
      if (in_stack_00000a28 != 0) {
        _free(in_stack_00000a30);
      }
    }
    else {
      lVar13 = in_stack_00000a28;
      lVar15 = in_stack_00000a30;
      in_stack_000007a0 = in_stack_00000a38;
      if ((in_stack_00000790 != -0x8000000000000000) && (in_stack_00000790 != 0)) {
        _free(in_stack_00000798);
      }
    }
    in_stack_00000798 = lVar15;
    in_stack_00000790 = lVar13;
    in_stack_00000740 = (long *)(unaff_x29 + -0x100);
    __ZN134__LT_codex_core__context__environment_context__EnvironmentContext_u20_as_u20_codex_core__context__fragment__ContextualUserFragment_GT_4body17h1d4fefc1a3a1c2c3E
              (unaff_x29 + -0x100,&stack0x000004c0);
    in_stack_00000730 = (long *)&stack0x00000a40;
    in_stack_00000738 = (long *)&DAT_100c7b3a0;
    in_stack_00000748 = (long *)&DAT_10112965c;
    in_stack_00000750 = &stack0x00000a70;
    in_stack_00000758 = &DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000009b0,s__108ac137a,&stack0x00000730);
    if (*(long *)(unaff_x29 + -0x100) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xf8));
    }
    lVar13 = in_stack_00000038[0x55];
    if (lVar13 == in_stack_00000038[0x53]) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000038 + 0x53)
      ;
    }
    plVar7 = (long *)(in_stack_00000038[0x54] + lVar13 * 0x18);
    plVar7[1] = lVar11;
    *plVar7 = lVar22;
    plVar7[2] = lVar23;
    in_stack_00000038[0x55] = lVar13 + 1;
    FUN_100e4b3b4(&stack0x000004c0);
    lVar22 = *(long *)in_stack_00000038[0x5f];
    *(long *)in_stack_00000038[0x5f] = lVar22 + -1;
    LORelease();
    if (lVar22 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h720d6d94d44d546aE(in_stack_00000038 + 0x5f);
    }
  }
  lVar22 = in_stack_00000038[0x4f];
  lVar11 = *(long *)(lVar22 + 0x638);
  if (lVar11 != 0) {
    lVar23 = *(long *)(lVar22 + 0x640);
    while( true ) {
      uVar20 = (ulong)*(ushort *)(lVar11 + 10);
      uVar18 = 0xffffffffffffffff;
      pbVar19 = (byte *)(lVar11 + 0xc);
      uVar21 = uVar20;
      do {
        if (uVar21 == 0) goto LAB_1005a9fdc;
        cVar1 = *pbVar19 < 0x15;
        if (0x15 < *pbVar19) {
          cVar1 = -1;
        }
        uVar21 = uVar21 - 1;
        uVar18 = uVar18 + 1;
        pbVar19 = pbVar19 + 1;
      } while (cVar1 == '\x01');
      uVar20 = uVar18;
      if (cVar1 == '\0') break;
LAB_1005a9fdc:
      if (lVar23 == 0) goto LAB_1005aa064;
      lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x18);
      lVar23 = lVar23 + -1;
    }
    lVar11 = *(long *)(lVar22 + 0x788);
    uVar18 = in_stack_00000038[0xc];
    lVar22 = uVar18 + 0x7ffffffffffffffa;
    if (uVar18 < 0x8000000000000006) {
      lVar22 = 6;
    }
    if (lVar22 < 5) {
LAB_1005aa014:
      if (*(long *)(lVar11 + 0x2250) != -0x8000000000000000) {
        lVar22 = 0x2260;
        lVar23 = 0x2258;
LAB_1005aa02c:
        lVar23 = *(long *)(lVar11 + lVar23);
        in_stack_00000010 = *(long **)(lVar11 + lVar22);
        goto LAB_1005aa068;
      }
    }
    else if (lVar22 != 5) {
      if (lVar22 != 6) goto LAB_1005aa014;
      if ((uVar18 < 0x8000000000000001) && (*(long *)(lVar11 + 0x2268) != -0x8000000000000000)) {
        lVar22 = 0x2278;
        lVar23 = 0x2270;
        goto LAB_1005aa02c;
      }
    }
  }
LAB_1005aa064:
  lVar23 = 0;
LAB_1005aa068:
  puVar10 = (undefined8 *)_malloc(0x300);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_107c03c64(8,0x300);
    goto LAB_1005ab394;
  }
  *(undefined1 *)((long)in_stack_00000038 + 0x2f6) = 0;
  func_0x000102d5098c(&stack0x00000730,&UNK_108d544b5,9,&stack0x000004c0);
  if (in_stack_00000730 != (long *)0x11) {
    puVar10[0x11] = in_stack_000007b8;
    puVar10[0x10] = in_stack_000007b0;
    puVar10[0x13] = in_stack_000007c8;
    puVar10[0x12] = in_stack_000007c0;
    puVar10[0x15] = in_stack_000007d8;
    puVar10[0x14] = in_stack_000007d0;
    puVar10[0x17] = in_stack_000007e8;
    puVar10[0x16] = in_stack_000007e0;
    puVar10[9] = in_stack_00000778;
    puVar10[8] = in_stack_00000770;
    puVar10[0xb] = in_stack_00000788;
    puVar10[10] = in_stack_00000780;
    puVar10[0xd] = in_stack_00000798;
    puVar10[0xc] = in_stack_00000790;
    puVar10[0xf] = in_stack_000007a8;
    puVar10[0xe] = in_stack_000007a0;
    puVar10[1] = in_stack_00000738;
    *puVar10 = in_stack_00000730;
    puVar10[3] = in_stack_00000748;
    puVar10[2] = in_stack_00000740;
    puVar10[5] = in_stack_00000758;
    puVar10[4] = in_stack_00000750;
    puVar10[7] = in_stack_00000768;
    puVar10[6] = in_stack_00000760;
    in_stack_000000e0 = in_stack_00000730;
    in_stack_000000e8 = in_stack_00000738;
    in_stack_000000f0 = in_stack_00000740;
    in_stack_000000f8 = in_stack_00000748;
    in_stack_00000100 = in_stack_00000750;
    in_stack_00000108 = in_stack_00000758;
    in_stack_00000110 = in_stack_00000760;
    in_stack_00000118 = in_stack_00000768;
    in_stack_00000120 = in_stack_00000770;
    in_stack_00000128 = in_stack_00000778;
    in_stack_00000130 = in_stack_00000780;
    in_stack_00000138 = in_stack_00000788;
    in_stack_00000140 = in_stack_00000790;
    in_stack_00000148 = in_stack_00000798;
    in_stack_00000150 = in_stack_000007a0;
    in_stack_00000158 = in_stack_000007a8;
    in_stack_00000160 = in_stack_000007b0;
    in_stack_00000168 = in_stack_000007b8;
    in_stack_00000170 = in_stack_000007c0;
    in_stack_00000178 = in_stack_000007c8;
    in_stack_00000180 = in_stack_000007d0;
    in_stack_00000188 = in_stack_000007d8;
    in_stack_00000190 = in_stack_000007e0;
    in_stack_00000198 = in_stack_000007e8;
  }
  uVar18 = (ulong)(in_stack_00000730 != (long *)0x11);
  *(undefined1 *)((long)in_stack_00000038 + 0x2f4) = 0;
  lVar11 = in_stack_00000038[0x56];
  plVar28 = (long *)in_stack_00000038[0x57];
  lVar22 = in_stack_00000038[0x58];
  plVar7 = plVar28;
  plVar39 = plVar28;
  if (lVar22 == 0) {
LAB_1005aa318:
    uVar20 = (long)(plVar28 + lVar22 * 3) - (long)plVar7;
    if (uVar20 != 0) {
      uVar20 = uVar20 / 0x18;
      plVar7 = plVar7 + 1;
      do {
        if (plVar7[-1] != 0) {
          _free(*plVar7);
        }
        plVar7 = plVar7 + 3;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else {
    do {
      plVar7 = plVar39 + 3;
      lVar13 = *plVar39;
      if (lVar13 == -0x8000000000000000) goto LAB_1005aa318;
      lVar15 = plVar39[1];
      lVar4 = plVar39[2];
      plVar39 = (long *)_malloc(0x18);
      if (plVar39 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1005ab394;
      }
      *plVar39 = lVar13;
      plVar39[1] = lVar15;
      plVar39[2] = lVar4;
      *(undefined8 *)(unaff_x29 + -0x100) = 1;
      *(long **)(unaff_x29 + -0xf8) = plVar39;
      *(undefined8 *)(unaff_x29 + -0xf0) = 1;
      func_0x000102d5098c(&stack0x00000730,&UNK_108d544b5,9,unaff_x29 + -0x100);
      if (in_stack_00000730 != (long *)0x11) {
        in_stack_000001a0 = in_stack_00000730;
        in_stack_000001a8 = in_stack_00000738;
        in_stack_000001b0 = in_stack_00000740;
        in_stack_000001b8 = in_stack_00000748;
        in_stack_000001c0 = in_stack_00000750;
        in_stack_000001c8 = in_stack_00000758;
        in_stack_000001d0 = in_stack_00000760;
        in_stack_000001d8 = in_stack_00000768;
        in_stack_000001e0 = in_stack_00000770;
        in_stack_000001e8 = in_stack_00000778;
        if (uVar18 == 4) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbff649ba0681ba8fE(&stack0x000009b0);
        }
        puVar8 = puVar10 + uVar18 * 0x18;
        puVar8[0x11] = in_stack_000007b8;
        puVar8[0x10] = in_stack_000007b0;
        puVar8[0x13] = in_stack_000007c8;
        puVar8[0x12] = in_stack_000007c0;
        puVar8[0x15] = in_stack_000007d8;
        puVar8[0x14] = in_stack_000007d0;
        puVar8[0x17] = in_stack_000007e8;
        puVar8[0x16] = in_stack_000007e0;
        puVar8[9] = in_stack_00000778;
        puVar8[8] = in_stack_00000770;
        puVar8[0xb] = in_stack_00000788;
        puVar8[10] = in_stack_00000780;
        puVar8[0xd] = in_stack_00000798;
        puVar8[0xc] = in_stack_00000790;
        puVar8[0xf] = in_stack_000007a8;
        puVar8[0xe] = in_stack_000007a0;
        puVar8[1] = in_stack_00000738;
        *puVar8 = in_stack_00000730;
        puVar8[3] = in_stack_00000748;
        puVar8[2] = in_stack_00000740;
        puVar8[5] = in_stack_00000758;
        puVar8[4] = in_stack_00000750;
        puVar8[7] = in_stack_00000768;
        puVar8[6] = in_stack_00000760;
        uVar18 = uVar18 + 1;
      }
      plVar39 = plVar7;
    } while (plVar7 != plVar28 + lVar22 * 3);
  }
  if (lVar11 != 0) {
    _free(plVar28);
  }
  if (lVar23 != 0) {
    puVar8 = (undefined8 *)_malloc(0x18);
    if (puVar8 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_1005ab394;
    }
    if (in_stack_00000010 == (long *)0x0) {
      lVar22 = 1;
    }
    else {
      lVar22 = _malloc(in_stack_00000010);
      if (lVar22 == 0) {
        FUN_107c03c64(1,in_stack_00000010);
        goto LAB_1005ab394;
      }
    }
    _memcpy(lVar22,lVar23,in_stack_00000010);
    *puVar8 = in_stack_00000010;
    puVar8[1] = lVar22;
    puVar8[2] = in_stack_00000010;
    func_0x000102d5098c(&stack0x00000730,&UNK_108d544b5,9,&stack0x000004c0);
    if (in_stack_00000730 != (long *)0x11) {
      if (uVar18 == 4) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbff649ba0681ba8fE(&stack0x000009b0);
      }
      puVar8 = puVar10 + uVar18 * 0x18;
      puVar8[0x11] = in_stack_000007b8;
      puVar8[0x10] = in_stack_000007b0;
      puVar8[0x13] = in_stack_000007c8;
      puVar8[0x12] = in_stack_000007c0;
      puVar8[0x15] = in_stack_000007d8;
      puVar8[0x14] = in_stack_000007d0;
      puVar8[0x17] = in_stack_000007e8;
      puVar8[0x16] = in_stack_000007e0;
      puVar8[9] = in_stack_00000778;
      puVar8[8] = in_stack_00000770;
      puVar8[0xb] = in_stack_00000788;
      puVar8[10] = in_stack_00000780;
      puVar8[0xd] = in_stack_00000798;
      puVar8[0xc] = in_stack_00000790;
      puVar8[0xf] = in_stack_000007a8;
      puVar8[0xe] = in_stack_000007a0;
      puVar8[1] = in_stack_00000738;
      *puVar8 = in_stack_00000730;
      puVar8[3] = in_stack_00000748;
      puVar8[2] = in_stack_00000740;
      puVar8[5] = in_stack_00000758;
      puVar8[4] = in_stack_00000750;
      puVar8[7] = in_stack_00000768;
      puVar8[6] = in_stack_00000760;
      uVar18 = uVar18 + 1;
    }
  }
  *(undefined1 *)((long)in_stack_00000038 + 0x2f5) = 0;
  func_0x000102d5098c(&stack0x00000730,&UNK_108d536f1,4,&stack0x000004c0);
  if (in_stack_00000730 != (long *)0x11) {
    if (uVar18 == 4) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbff649ba0681ba8fE(&stack0x000009b0);
    }
    puVar8 = puVar10 + uVar18 * 0x18;
    puVar8[0x11] = in_stack_000007b8;
    puVar8[0x10] = in_stack_000007b0;
    puVar8[0x13] = in_stack_000007c8;
    puVar8[0x12] = in_stack_000007c0;
    puVar8[0x15] = in_stack_000007d8;
    puVar8[0x14] = in_stack_000007d0;
    puVar8[0x17] = in_stack_000007e8;
    puVar8[0x16] = in_stack_000007e0;
    puVar8[9] = in_stack_00000778;
    puVar8[8] = in_stack_00000770;
    puVar8[0xb] = in_stack_00000788;
    puVar8[10] = in_stack_00000780;
    puVar8[0xd] = in_stack_00000798;
    puVar8[0xc] = in_stack_00000790;
    puVar8[0xf] = in_stack_000007a8;
    puVar8[0xe] = in_stack_000007a0;
    puVar8[1] = in_stack_00000738;
    *puVar8 = in_stack_00000730;
    puVar8[3] = in_stack_00000748;
    puVar8[2] = in_stack_00000740;
    puVar8[5] = in_stack_00000758;
    puVar8[4] = in_stack_00000750;
    puVar8[7] = in_stack_00000768;
    puVar8[6] = in_stack_00000760;
    uVar18 = uVar18 + 1;
  }
  if ((*(byte *)(in_stack_00000038 + 0x5e) & 1) != 0) {
    lVar22 = in_stack_00000038[0x4f];
    lVar11 = *(long *)(lVar22 + 0x4f0);
    if (*(long *)(lVar22 + 0x4e0) != -0x8000000000000000 && lVar11 != 0) {
      uVar9 = *(undefined8 *)(lVar22 + 0x4e8);
      plVar7 = (long *)_malloc(0x18);
      if (plVar7 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_1005ab394:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ab398);
        (*pcVar2)();
      }
      lVar22 = _malloc(lVar11);
      if (lVar22 == 0) {
        FUN_107c03c64(1,lVar11);
        goto LAB_1005ab394;
      }
      _memcpy(lVar22,uVar9,lVar11);
      *plVar7 = lVar11;
      plVar7[1] = lVar22;
      plVar7[2] = lVar11;
      func_0x000102d5098c(&stack0x00000730,&UNK_108d544b5,9,&stack0x000004c0);
      if (in_stack_00000730 != (long *)0x11) {
        FUN_100f3fef4(&stack0x000009b0,&stack0x000003e0);
      }
    }
  }
  lVar23 = in_stack_00000038[0x49];
  lVar22 = lVar23;
  for (lVar11 = in_stack_00000038[0x4a]; lVar11 != 0; lVar11 = lVar11 + -1) {
    FUN_100cc1c58(lVar22);
    lVar22 = lVar22 + 0x140;
  }
  if (in_stack_00000038[0x48] != 0) {
    _free(lVar23);
  }
  lVar23 = in_stack_00000038[0x4c];
  lVar22 = lVar23;
  for (lVar11 = in_stack_00000038[0x4d]; lVar11 != 0; lVar11 = lVar11 + -1) {
    FUN_100e0649c(lVar22);
    lVar22 = lVar22 + 0x80;
  }
  if (in_stack_00000038[0x4b] != 0) {
    _free(lVar23);
  }
  lVar22 = in_stack_00000038[0xc] + 0x7ffffffffffffffa;
  if ((ulong)in_stack_00000038[0xc] < 0x8000000000000006) {
    lVar22 = 6;
  }
  if (lVar22 == 6) {
    FUN_100e0fca4(in_stack_00000038 + 0xc);
  }
  else if ((lVar22 == 4) && (in_stack_00000038[0xd] != 0)) {
    _free(in_stack_00000038[0xe]);
  }
  if (in_stack_00000038[0x59] != 0) {
    _free(in_stack_00000038[0x5a]);
  }
  if (*in_stack_00000038 != 0) {
    _free(in_stack_00000038[1]);
  }
  if ((in_stack_00000038[3] != -0x8000000000000000) && (in_stack_00000038[3] != 0)) {
    _free(in_stack_00000038[4]);
  }
  if ((in_stack_00000038[8] & 0x7fffffffffffffffU) == 0) {
    lVar22 = in_stack_00000038[0x18];
  }
  else {
    _free(in_stack_00000038[9]);
    lVar22 = in_stack_00000038[0x18];
  }
  if (lVar22 != 3) {
    FUN_100e13e9c();
  }
  *(undefined2 *)((long)in_stack_00000038 + 0x2f4) = 0;
  *(undefined1 *)((long)in_stack_00000038 + 0x2f6) = 0;
  in_stack_00000008[1] = puVar10;
  *in_stack_00000008 = 4;
  in_stack_00000008[2] = uVar18;
  uVar17 = 1;
LAB_1005ab39c:
  *(undefined1 *)((long)in_stack_00000038 + 0x2f7) = uVar17;
  return;
code_r0x0001005a892c:
  lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x18);
  lVar22 = lVar22 + -1;
  goto LAB_1005a88e4;
}

