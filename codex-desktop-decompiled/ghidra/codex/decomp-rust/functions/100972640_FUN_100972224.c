
/* WARNING: Removing unreachable block (ram,0x00010097244c) */
/* WARNING: Removing unreachable block (ram,0x000100971fcc) */

void FUN_100972224(void)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  long unaff_x19;
  undefined1 *unaff_x21;
  undefined8 *puVar17;
  undefined *puVar18;
  long unaff_x23;
  long lVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined *in_stack_00000048;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined7 uStack00000000000000d8;
  undefined1 uStack00000000000000df;
  undefined7 uStack00000000000000e0;
  long lStack00000000000000e7;
  undefined1 uStack000000000000011f;
  long lStack0000000000000127;
  long in_stack_00005760;
  undefined8 in_stack_00005768;
  long in_stack_00009dd8;
  long in_stack_00009de0;
  undefined *in_stack_00009de8;
  long in_stack_00009df0;
  undefined1 in_stack_00009df8;
  undefined8 in_stack_00009df9;
  undefined8 in_stack_00009e01;
  undefined8 in_stack_00009e09;
  undefined8 in_stack_00009e11;
  undefined8 in_stack_00009e19;
  undefined7 in_stack_00009e21;
  undefined1 in_stack_00009e28;
  undefined7 in_stack_00009e29;
  long in_stack_00009e30;
  undefined *in_stack_00009e38;
  long in_stack_00009ec8;
  undefined8 in_stack_00009ed0;
  undefined8 in_stack_00009ed8;
  undefined8 in_stack_00009ee0;
  undefined8 in_stack_00009ee8;
  undefined8 in_stack_00009ef0;
  undefined8 in_stack_00009ef8;
  undefined8 in_stack_00009f00;
  undefined8 in_stack_00009f08;
  undefined8 in_stack_00009f10;
  undefined8 in_stack_00009f18;
  undefined8 in_stack_00009f20;
  undefined8 in_stack_00009f28;
  undefined8 in_stack_00009f30;
  undefined8 in_stack_00009f38;
  undefined8 in_stack_00009f40;
  undefined8 in_stack_00009f48;
  undefined8 in_stack_00009f50;
  undefined8 in_stack_00009f58;
  undefined8 in_stack_00009f60;
  undefined8 in_stack_00009f68;
  undefined8 in_stack_00009f70;
  undefined8 in_stack_00009f78;
  undefined8 in_stack_00009f80;
  undefined8 in_stack_00009f88;
  long in_stack_00009f90;
  undefined8 in_stack_00009f98;
  undefined8 in_stack_00009fa0;
  undefined8 in_stack_00009fa8;
  undefined8 in_stack_00009fb0;
  undefined8 in_stack_00009fb8;
  long in_stack_00009fc0;
  long in_stack_00009fc8;
  undefined8 in_stack_00009fd0;
  undefined *in_stack_00009ff8;
  long in_stack_0000a8d8;
  undefined8 in_stack_0000a8e0;
  undefined8 in_stack_0000a8e8;
  undefined8 in_stack_0000a8f0;
  undefined8 in_stack_0000a8f8;
  undefined8 in_stack_0000a900;
  undefined8 in_stack_0000a908;
  undefined8 in_stack_0000a910;
  undefined7 in_stack_0000a918;
  undefined1 in_stack_0000a91f;
  undefined7 in_stack_0000a920;
  long in_stack_0000a927;
  long in_stack_0000a950;
  long in_stack_0000a958;
  undefined *in_stack_0000a960;
  long in_stack_0000a968;
  undefined1 in_stack_0000a970;
  undefined8 in_stack_0000a971;
  undefined8 in_stack_0000a979;
  undefined8 in_stack_0000a981;
  undefined8 in_stack_0000a989;
  undefined8 in_stack_0000a991;
  undefined7 in_stack_0000a999;
  undefined1 in_stack_0000a9a0;
  undefined7 in_stack_0000a9a1;
  long in_stack_0000a9a8;
  undefined *in_stack_0000a9b0;
  ushort in_stack_0000aa90;
  undefined *in_stack_0000aaa0;
  undefined8 *in_stack_0000aaf0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004e00,s_2failed_to_join_remote_plugin_bu_108acf05c,&stack0x0000a950);
  lVar19 = *(long *)(unaff_x23 + 8);
  if (lVar19 != 0) {
    if ((code *)*in_stack_0000aaf0 != (code *)0x0) {
      (*(code *)*in_stack_0000aaf0)(lVar19);
    }
    if (in_stack_0000aaf0[1] != 0) {
      _free(lVar19);
    }
  }
  *(undefined1 *)(in_stack_00000068 + 0x6a3) = 0;
  if ((*(byte *)(in_stack_00000068 + 0x6a1) & 1) != 0) {
    FUN_100e4f794(unaff_x19 + 0x79e0);
  }
  *(undefined1 *)(in_stack_00000068 + 0x6a1) = 0;
  if (((*(byte *)(in_stack_00000068 + 0x6a2) & 1) != 0) && (*(long *)(unaff_x19 + 0x7a90) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x7a98));
  }
  *(undefined1 *)(in_stack_00000068 + 0x6a2) = 0;
  *unaff_x21 = 1;
  FUN_100cfb0e0(in_stack_00000048);
  __ZN16codex_app_server18request_processors7plugins45remote_plugin_bundle_install_error_to_jsonrpc17h4b7df7b4165be3f0E
            (&stack0x00009dd8,&stack0x00004e00);
  puVar5 = in_stack_00009e38;
  if (in_stack_00009dd8 == -0x8000000000000000) {
    *(long *)(unaff_x19 + 0x77a8) = in_stack_00009de0;
    *(undefined **)(unaff_x19 + 0x77b0) = in_stack_00009de8;
    *(long *)(unaff_x19 + 0x77b8) = in_stack_00009df0;
    *(undefined1 *)(in_stack_00000068 + 0x3d8) = in_stack_00009df8;
    *(undefined8 *)(unaff_x19 + 0x77c9) = in_stack_00009e01;
    *(undefined8 *)(unaff_x19 + 0x77c1) = in_stack_00009df9;
    *(undefined8 *)(unaff_x19 + 0x77d9) = in_stack_00009e11;
    *(undefined8 *)(unaff_x19 + 0x77d1) = in_stack_00009e09;
    *(ulong *)(unaff_x19 + 0x77e9) = CONCAT17(in_stack_00009e28,in_stack_00009e21);
    *(undefined8 *)(unaff_x19 + 0x77e1) = in_stack_00009e19;
    *(long *)(unaff_x19 + 0x77f8) = in_stack_00009e30;
    *(ulong *)(unaff_x19 + 0x77f0) = CONCAT71(in_stack_00009e29,in_stack_00009e28);
    *(undefined **)(unaff_x19 + 0x7800) = in_stack_00009e38;
    plVar11 = (long *)0x0;
    if (*(long *)(unaff_x19 + 0x7310) != -0x7ffffffffffffffd) {
      plVar11 = (long *)(unaff_x19 + 0x7310);
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0x4db8);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x4dc0);
    *(undefined8 *)(unaff_x19 + 0x7940) = *(undefined8 *)(unaff_x19 + 0x7750);
    *(undefined8 *)(unaff_x19 + 0x7948) = *(undefined8 *)(unaff_x19 + 0x7758);
    *(undefined8 *)(unaff_x19 + 0x7950) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x7958) = uVar13;
    *(long **)(unaff_x19 + 0x7960) = plVar11;
    *(long *)(unaff_x19 + 0x7f10) = unaff_x19 + 0x73a8;
    puVar1 = (undefined1 *)(in_stack_00000068 + 0xb31);
    lVar19 = unaff_x19 + 0x7920;
    *(undefined1 *)(in_stack_00000068 + 0xb31) = 0;
    *(undefined1 *)(in_stack_00000068 + 0xb30) = 0;
    *(undefined8 *)(unaff_x19 + 0x7920) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x7928) = uVar13;
    if (plVar11 != (long *)0x0) {
      if ((*plVar11 < 0) && (2 < *plVar11 + 0x7fffffffffffffffU)) {
        in_stack_00009fc8 = -0x7fffffffffffffff;
        goto LAB_100972580;
      }
      lVar10 = *(long *)(unaff_x19 + 0x73b0);
      lVar2 = *(long *)(unaff_x19 + 0x73b8);
      do {
        lVar14 = lVar2;
        if (lVar14 == 0) break;
        lVar2 = lVar10 + lVar14;
        pbVar15 = (byte *)(lVar2 + -1);
        uVar12 = (uint)(char)*pbVar15;
        if ((int)uVar12 < 0) {
          pbVar15 = (byte *)(lVar2 + -2);
          bVar3 = *pbVar15;
          if ((char)bVar3 < -0x40) {
            pbVar15 = (byte *)(lVar2 + -3);
            bVar4 = *pbVar15;
            if ((char)bVar4 < -0x40) {
              pbVar15 = (byte *)(lVar2 + -4);
              uVar16 = bVar4 & 0x3f | (*pbVar15 & 7) << 6;
            }
            else {
              uVar16 = (int)(char)bVar4 & 0xf;
            }
            uVar16 = bVar3 & 0x3f | uVar16 << 6;
          }
          else {
            uVar16 = (int)(char)bVar3 & 0x1f;
          }
          uVar12 = uVar12 & 0x3f | uVar16 << 6;
        }
        lVar2 = (long)pbVar15 - lVar10;
      } while (uVar12 == 0x2f);
      lVar2 = unaff_x19 + 0x7930;
      *(long *)(unaff_x19 + 0x7930) = lVar10;
      *(long *)(unaff_x19 + 0x7938) = lVar14;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00009fc0,s__ps_plugins___install_108acf30b,&stack0x00004e00);
      *(long *)(unaff_x19 + 0x7970) = in_stack_00009fc8;
      *(long *)(unaff_x19 + 0x7968) = in_stack_00009fc0;
      *(undefined8 *)(unaff_x19 + 0x7978) = in_stack_00009fd0;
      uVar9 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E();
      *(undefined8 *)(unaff_x19 + 0x7980) = uVar9;
      FUN_1011d51fc(&stack0x00004e00,uVar9,&UNK_108cab1d8,*(undefined8 *)(unaff_x19 + 0x7970),
                    *(undefined8 *)(unaff_x19 + 0x7978));
      __ZN18codex_core_plugins6remote21authenticated_request17h250c66f122829838E
                (&stack0x00009fc0,&stack0x00004e00,plVar11);
      puVar5 = in_stack_00009ff8;
      if (in_stack_00009fc0 == 3) {
LAB_1009726ec:
        in_stack_00000048 = puVar5;
        *(undefined1 *)(in_stack_00000068 + 0xb30) = 0;
        lVar10 = **(long **)(unaff_x19 + 0x7980);
        **(long **)(unaff_x19 + 0x7980) = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000105c30fe4(unaff_x19 + 0x7980);
        }
        if (*(long *)(unaff_x19 + 0x7968) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x7970));
        }
        *puVar1 = 1;
        if (in_stack_00009fc8 == -0x7fffffffffffffeb) goto LAB_100972748;
        goto LAB_100972778;
      }
      *(undefined1 *)(in_stack_00000068 + 0xb30) = 0;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x7970);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x7978);
      _memcpy(unaff_x19 + 0x7988,&stack0x0000aae0,0x110);
      *(undefined8 *)(unaff_x19 + 0x7a98) = uVar9;
      *(undefined8 *)(unaff_x19 + 0x7aa0) = uVar13;
      *(undefined1 *)(in_stack_00000068 + 0x6d0) = 0;
      FUN_100a6ec60(&stack0x00004e00,unaff_x19 + 0x7988,in_stack_00000078);
      if (lVar2 != -0x7fffffffffffffeb) {
        in_stack_00000048 = &DAT_100c7b3a0;
        FUN_100d534e0(unaff_x19 + 0x7988);
        in_stack_00009fc8 = lVar2;
        puVar5 = in_stack_0000aaa0;
        if (lVar2 == -0x7fffffffffffffec) {
          uVar9 = *(undefined8 *)(unaff_x19 + 0x7920);
          puVar18 = *(undefined **)(unaff_x19 + 0x7928);
          puVar5 = in_stack_00000048;
          if ((puVar18 == &DAT_100c7b3a0) && (iVar7 = _memcmp(lVar19,uVar9), iVar7 == 0)) {
            if ((in_stack_0000aa90 & 1) != 0) {
              _free(lVar19);
              *(undefined1 *)(in_stack_00000068 + 0xb30) = 0;
              lVar10 = **(long **)(unaff_x19 + 0x7980);
              **(long **)(unaff_x19 + 0x7980) = lVar10 + -1;
              LORelease();
              if (lVar10 == 1) {
                DataMemoryBarrier(2,1);
                func_0x000105c30fe4(unaff_x19 + 0x7980);
              }
              in_stack_00009fc8 = -0x7fffffffffffffec;
              in_stack_00000048 = &DAT_100c7b3a0;
              if (*(long *)(unaff_x19 + 0x7968) != 0) {
                _free(*(undefined8 *)(unaff_x19 + 0x7970));
              }
              goto LAB_100972580;
            }
            lVar10 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(&DAT_100c7b3a0,1);
            if (lVar10 == 0) {
              func_0x0001087c9084(1,&DAT_100c7b3a0);
              goto LAB_100973364;
            }
            _memcpy(lVar10,uVar9,&DAT_100c7b3a0);
            _free(lVar19);
            in_stack_00009fc8 = -0x7ffffffffffffff5;
          }
          else {
            if (puVar18 == (undefined *)0x0) {
              lVar10 = 1;
            }
            else {
              lVar10 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(puVar18,1);
              if (lVar10 == 0) {
                func_0x0001087c9084(1,puVar18);
                goto LAB_100973364;
              }
            }
            _memcpy(lVar10,uVar9,puVar18);
            in_stack_00009fc8 = -0x7ffffffffffffff7;
          }
        }
        goto LAB_1009726ec;
      }
      *puVar1 = 3;
LAB_100972748:
      *in_stack_00000050 = 7;
      goto LAB_100973140;
    }
    in_stack_00009fc8 = -0x8000000000000000;
LAB_100972580:
    *puVar1 = 1;
LAB_100972778:
    FUN_100e8bb10(lVar19);
    if ((in_stack_00009fc8 != -0x7fffffffffffffec) &&
       (__ZN16codex_app_server18request_processors7plugins38remote_plugin_catalog_error_to_jsonrpc17hcc961cbb2aaae717E
                  (&stack0x0000a950,&stack0x00004e00,&UNK_108cb3ecd,0x15),
       in_stack_0000a950 != -0x8000000000000000)) {
      if (*(long *)(unaff_x19 + 0x77a8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x77b0));
      }
      if (*(long *)(unaff_x19 + 0x77c0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x77c8));
      }
      if (*(long *)(unaff_x19 + 0x77d8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x77e0));
      }
      in_stack_00009dd8 = in_stack_0000a950;
      in_stack_00009de0 = in_stack_0000a958;
      in_stack_00009de8 = in_stack_0000a960;
      in_stack_00009df0 = in_stack_0000a968;
      puVar5 = in_stack_0000a9b0;
      in_stack_00009df9 = in_stack_0000a971;
      in_stack_00009e01 = in_stack_0000a979;
      in_stack_00009e09 = in_stack_0000a981;
      in_stack_00009e11 = in_stack_0000a989;
      in_stack_00009e19 = in_stack_0000a991;
      in_stack_00009e21 = in_stack_0000a999;
      in_stack_00009e28 = in_stack_0000a9a0;
      in_stack_00009e29 = in_stack_0000a9a1;
      in_stack_00009e30 = in_stack_0000a9a8;
      in_stack_00009df8 = in_stack_0000a970;
      if (*(long *)(unaff_x19 + 0x77f0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x77f8));
        puVar5 = in_stack_0000a9b0;
      }
      goto LAB_10097304c;
    }
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x4d90) + 0x140) + 0x28);
    plVar11 = *(long **)(lVar10 + 0xe0);
    lVar19 = *plVar11;
    *plVar11 = lVar19 + 1;
    if (lVar19 < 0) {
LAB_100973364:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100973368);
      (*pcVar6)();
    }
    plVar11 = *(long **)(lVar10 + 0xe0);
    __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
              (&stack0x00004e00,unaff_x19 + 0x4dc8);
    if (*(long *)(unaff_x19 + 0x7310) != -0x7ffffffffffffffd) {
      func_0x0001011c17a4(&stack0x00009fc0,unaff_x19 + 0x7310);
    }
    auVar21 = __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor34effective_plugins_changed_callback17h19a3600341d4b877E
                        (*(undefined8 *)(unaff_x19 + 0x4d90));
    FUN_10390f650(plVar11,&stack0x00004e00,&stack0x00009fc0,1,auVar21._0_8_,auVar21._8_8_);
    FUN_100e05b5c(&stack0x00004e00);
    if (in_stack_00005760 != 0) {
      _free(in_stack_00005768);
    }
    lVar19 = *plVar11;
    *plVar11 = lVar19 + -1;
    LORelease();
    if (lVar19 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(&stack0x0000aae0);
    }
    *(long *)(unaff_x19 + 0x7b68) = unaff_x19 + 0x77a8;
    *(long *)(unaff_x19 + 0x7b70) = unaff_x19 + 0x77f0;
    *(undefined1 *)(in_stack_00000068 + 0x792) = 0;
    FUN_100a6e3cc(&stack0x00009ec8,unaff_x19 + 0x7920,in_stack_00000078);
    if (in_stack_00009ec8 == -0x8000000000000000) {
      *in_stack_00000050 = 8;
    }
    else {
      *(undefined2 *)(in_stack_00000068 + 0x533) = 0x101;
      *(undefined8 *)(unaff_x19 + 0x78c8) = in_stack_00009f88;
      *(undefined8 *)(unaff_x19 + 0x78b0) = in_stack_00009f70;
      *(undefined8 *)(unaff_x19 + 0x78a8) = in_stack_00009f68;
      *(undefined8 *)(unaff_x19 + 0x78c0) = in_stack_00009f80;
      *(undefined8 *)(unaff_x19 + 0x78b8) = in_stack_00009f78;
      *(undefined8 *)(unaff_x19 + 0x7870) = in_stack_00009f30;
      *(undefined8 *)(unaff_x19 + 0x7868) = in_stack_00009f28;
      *(undefined8 *)(unaff_x19 + 0x7880) = in_stack_00009f40;
      *(undefined8 *)(unaff_x19 + 0x7878) = in_stack_00009f38;
      *(undefined8 *)(unaff_x19 + 0x7890) = in_stack_00009f50;
      *(undefined8 *)(unaff_x19 + 0x7888) = in_stack_00009f48;
      *(undefined8 *)(unaff_x19 + 0x78a0) = in_stack_00009f60;
      *(undefined8 *)(unaff_x19 + 0x7898) = in_stack_00009f58;
      *(undefined8 *)(unaff_x19 + 0x7830) = in_stack_00009ef0;
      *(undefined8 *)(unaff_x19 + 0x7828) = in_stack_00009ee8;
      *(undefined8 *)(unaff_x19 + 0x7840) = in_stack_00009f00;
      *(undefined8 *)(unaff_x19 + 0x7838) = in_stack_00009ef8;
      *(undefined8 *)(unaff_x19 + 0x7850) = in_stack_00009f10;
      *(undefined8 *)(unaff_x19 + 0x7848) = in_stack_00009f08;
      *(undefined8 *)(unaff_x19 + 0x7860) = in_stack_00009f20;
      *(undefined8 *)(unaff_x19 + 0x7858) = in_stack_00009f18;
      *(undefined8 *)(unaff_x19 + 0x7810) = in_stack_00009ed0;
      *(long *)(unaff_x19 + 0x7808) = in_stack_00009ec8;
      *(undefined8 *)(unaff_x19 + 0x7820) = in_stack_00009ee0;
      *(undefined8 *)(unaff_x19 + 0x7818) = in_stack_00009ed8;
      FUN_100cce6fc(unaff_x19 + 0x7920);
      *(undefined1 *)(in_stack_00000068 + 0x532) = 0;
      uVar20 = *(undefined8 *)(unaff_x19 + 0x4db8);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x4db0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x4dc0);
      if ((*(long *)(unaff_x19 + 0x7838) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x7838) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x7840));
      }
      *(undefined8 *)(unaff_x19 + 0x7840) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x7838) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x7848) = uVar9;
      lVar19 = *(long *)(unaff_x19 + 0x4d90);
      *(undefined2 *)(in_stack_00000068 + 0x533) = 0;
      FUN_101725e54(*(undefined8 *)(lVar19 + 0x158),&stack0x00004e00);
      *(undefined8 *)(unaff_x19 + 0x7920) = *(undefined8 *)(unaff_x19 + 0x77f8);
      *(undefined8 *)(unaff_x19 + 0x7928) = *(undefined8 *)(unaff_x19 + 0x7800);
      *(undefined1 *)(in_stack_00000068 + 0x878) = 0;
      FUN_100a69298(&stack0x00009f90,unaff_x19 + 0x7920,in_stack_00000078);
      if (in_stack_00009f90 == 0) {
        *in_stack_00000050 = 9;
      }
      else {
        *(undefined1 *)(in_stack_00000068 + 0x531) = 1;
        *(undefined8 *)(unaff_x19 + 0x78d8) = in_stack_00009f98;
        *(long *)(unaff_x19 + 0x78d0) = in_stack_00009f90;
        *(undefined8 *)(unaff_x19 + 0x78e8) = in_stack_00009fa8;
        *(undefined8 *)(unaff_x19 + 0x78e0) = in_stack_00009fa0;
        *(undefined8 *)(unaff_x19 + 0x78f8) = in_stack_00009fb8;
        *(undefined8 *)(unaff_x19 + 0x78f0) = in_stack_00009fb0;
        FUN_100c9db44(unaff_x19 + 0x7920);
        if (*(long *)(unaff_x19 + 0x78e8) != 0) {
          uVar9 = *(undefined8 *)(unaff_x19 + 0x4d90);
          *(undefined1 *)(in_stack_00000068 + 0x531) = 0;
          _memcpy(&stack0x00009fc0,&stack0x00004e00,0x910);
          _memcpy(unaff_x19 + 0x7920,&stack0x00009fc0,0x910);
          *(undefined8 *)(in_stack_00000068 + 0xe48) = uVar9;
          *(long *)(in_stack_00000068 + 0xe50) = unaff_x19 + 0x4dc8;
          *(undefined1 *)(in_stack_00000068 + 0xe5a) = 0;
          iVar7 = FUN_100976c48(unaff_x19 + 0x7920,in_stack_00000078);
          if (iVar7 != 0) {
            *in_stack_00000050 = 10;
            goto LAB_100973140;
          }
          FUN_100d487e8(unaff_x19 + 0x7920);
        }
        *(undefined8 *)(unaff_x19 + 0x7920) = *(undefined8 *)(unaff_x19 + 0x77f8);
        *(undefined8 *)(unaff_x19 + 0x7928) = *(undefined8 *)(unaff_x19 + 0x7800);
        *(undefined1 *)(in_stack_00000068 + 0x548) = 0;
        FUN_100a66fec(&stack0x0000a8d8,unaff_x19 + 0x7920,in_stack_00000078);
        if (in_stack_0000a8d8 == -0x8000000000000000) {
          *in_stack_00000050 = 0xb;
        }
        else {
          *(undefined8 *)(unaff_x19 + 0x7908) = in_stack_0000a8e0;
          *(long *)(unaff_x19 + 0x7900) = in_stack_0000a8d8;
          *(undefined8 *)(unaff_x19 + 0x7910) = in_stack_0000a8e8;
          if (*(char *)(in_stack_00000068 + 0x548) == '\x04') {
            FUN_100e86c44(unaff_x19 + 0x7938);
          }
          else if (*(char *)(in_stack_00000068 + 0x548) == '\x03') {
            FUN_100e86c44(unaff_x19 + 0x7d68);
            func_0x000100e1ca08(unaff_x19 + 0x7b50);
          }
          uVar9 = *(undefined8 *)(unaff_x19 + 0x4d90);
          lVar19 = *(long *)(unaff_x19 + 0x7310);
          in_stack_00009de0 = unaff_x19 + 0x77a8;
          in_stack_00009df0 = unaff_x19 + 0x77c0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x19 + 0x7920,s___108b03abb,&stack0x00004e00);
          *(undefined8 *)(unaff_x19 + 0x7980) = *(undefined8 *)(unaff_x19 + 0x7930);
          *(undefined8 *)(unaff_x19 + 0x7978) = *(undefined8 *)(unaff_x19 + 0x7928);
          *(undefined8 *)(unaff_x19 + 0x7988) = *(undefined8 *)(unaff_x19 + 0x7908);
          *(undefined8 *)(unaff_x19 + 0x7990) = *(undefined8 *)(unaff_x19 + 0x7910);
          *(undefined8 *)(unaff_x19 + 0x79c0) = uVar9;
          *(long *)(unaff_x19 + 0x79c8) = unaff_x19 + 0x4dc8;
          *(undefined1 *)(in_stack_00000068 + 0x5ec) = 0;
          *(bool *)(in_stack_00000068 + 0x5ed) = lVar19 + 0x7fffffffffffffffU < 2;
          FUN_100978ca8(&stack0x00004e00,unaff_x19 + 0x7938,in_stack_00000078);
          if (in_stack_00009de0 != -0x8000000000000000) {
            in_stack_00009de8 = &DAT_1048e978c;
            FUN_100d5d740(unaff_x19 + 0x7938);
            if (*(long *)(unaff_x19 + 0x7920) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x7928));
            }
            in_stack_00009df8 = *(undefined1 *)(in_stack_00000068 + 0x29a);
            lVar10 = *(long *)(unaff_x19 + 0x7908);
            lVar19 = *(long *)(unaff_x19 + 0x7910);
            if (lVar19 != 0) {
              puVar17 = (undefined8 *)(lVar10 + 8);
              do {
                if (puVar17[-1] != 0) {
                  _free(*puVar17);
                }
                puVar17 = puVar17 + 3;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (*(long *)(unaff_x19 + 0x7900) != 0) {
              _free(lVar10);
            }
            if ((*(byte *)(in_stack_00000068 + 0x531) & 1) != 0) {
              FUN_100cf8c18(unaff_x19 + 0x78d0);
            }
            *(undefined1 *)(in_stack_00000068 + 0x531) = 0;
            *(undefined2 *)(in_stack_00000068 + 0x533) = 0;
            if (*(long *)(unaff_x19 + 0x77a8) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x77b0));
            }
            if (*(long *)(unaff_x19 + 0x77c0) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x77c8));
            }
            if (*(long *)(unaff_x19 + 0x77d8) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x77e0));
            }
            if (*(long *)(unaff_x19 + 0x77f0) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x77f8));
            }
            *(undefined1 *)(in_stack_00000068 + 0x535) = 0;
            __ZN130__LT_codex_core_plugins__remote__remote_installed_plugin_sync__RemotePluginCacheMutationGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h89ad38bcdb3414f3E
                      (unaff_x19 + 0x7760);
            if (*(long *)(unaff_x19 + 0x7760) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x7768));
            }
            if (*(long *)(unaff_x19 + 0x7778) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x7780));
            }
            if (*(long *)(unaff_x19 + 0x7790) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x7798));
            }
            if (*(long *)(unaff_x19 + 0x7748) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x7750));
            }
            FUN_100e21910(unaff_x19 + 0x73c0);
            if (*(long *)(unaff_x19 + 0x73a8) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x73b0));
            }
            if (*(long *)(unaff_x19 + 0x7310) != -0x7ffffffffffffffd) {
              FUN_100e0609c(unaff_x19 + 0x7310);
            }
            FUN_100de93d0(unaff_x19 + 0x4dc8);
            *(undefined1 *)(in_stack_00000068 + 0x532) = 0;
            if (*(long *)(unaff_x19 + 0x4d98) != 0) {
              in_stack_00009dd8 = -0x8000000000000000;
              goto LAB_1009730fc;
            }
            *in_stack_00000050 = 1;
            in_stack_00009dd8 = -0x8000000000000000;
            uStack00000000000000b0 = in_stack_0000a8f0;
            uStack00000000000000b8 = in_stack_0000a8f8;
            uStack00000000000000c0 = in_stack_0000a900;
            uStack00000000000000c8 = in_stack_0000a908;
            uStack00000000000000d0 = in_stack_0000a910;
            uStack00000000000000d8 = in_stack_0000a918;
            uStack00000000000000df = in_stack_0000a91f;
            uStack00000000000000e0 = in_stack_0000a920;
            lStack00000000000000e7 = in_stack_0000a927;
            goto LAB_100973154;
          }
          *in_stack_00000050 = 0xc;
        }
      }
    }
  }
  else {
LAB_10097304c:
    in_stack_0000a927 = in_stack_00009e30;
    in_stack_0000a920 = in_stack_00009e29;
    in_stack_0000a91f = in_stack_00009e28;
    in_stack_0000a918 = in_stack_00009e21;
    in_stack_0000a910 = in_stack_00009e19;
    in_stack_0000a908 = in_stack_00009e11;
    in_stack_0000a900 = in_stack_00009e09;
    in_stack_0000a8f8 = in_stack_00009e01;
    in_stack_0000a8f0 = in_stack_00009df9;
    in_stack_00000048 = puVar5;
    *(undefined1 *)(in_stack_00000068 + 0x535) = 0;
    __ZN130__LT_codex_core_plugins__remote__remote_installed_plugin_sync__RemotePluginCacheMutationGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h89ad38bcdb3414f3E
              (unaff_x19 + 0x7760);
    if (*(long *)(unaff_x19 + 0x7760) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x7768));
    }
    if (*(long *)(unaff_x19 + 0x7778) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x7780));
    }
    if (*(long *)(unaff_x19 + 0x7790) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x7798));
    }
    if (*(long *)(unaff_x19 + 0x7748) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x7750));
    }
    FUN_100e21910(unaff_x19 + 0x73c0);
    if (*(long *)(unaff_x19 + 0x73a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x73b0));
    }
    if (*(long *)(unaff_x19 + 0x7310) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x19 + 0x7310);
    }
    FUN_100de93d0(unaff_x19 + 0x4dc8);
    if (*(long *)(unaff_x19 + 0x4db0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x4db8));
    }
    *(undefined1 *)(in_stack_00000068 + 0x532) = 0;
    uStack00000000000000b0 = in_stack_0000a8f0;
    uStack00000000000000b8 = in_stack_0000a8f8;
    uStack00000000000000c0 = in_stack_0000a900;
    uStack00000000000000c8 = in_stack_0000a908;
    uStack00000000000000d0 = in_stack_0000a910;
    uStack00000000000000d8 = in_stack_0000a918;
    uStack00000000000000df = in_stack_0000a91f;
    uStack00000000000000e0 = in_stack_0000a920;
    lStack00000000000000e7 = in_stack_0000a927;
    if (*(long *)(unaff_x19 + 0x4d98) != 0) {
LAB_1009730fc:
      _free(*(undefined8 *)(unaff_x19 + 0x4da0));
      uStack00000000000000b0 = in_stack_0000a8f0;
      uStack00000000000000b8 = in_stack_0000a8f8;
      uStack00000000000000c0 = in_stack_0000a900;
      uStack00000000000000c8 = in_stack_0000a908;
      uStack00000000000000d0 = in_stack_0000a910;
      uStack00000000000000d8 = in_stack_0000a918;
      uStack00000000000000df = in_stack_0000a91f;
      uStack00000000000000e0 = in_stack_0000a920;
      lStack00000000000000e7 = in_stack_0000a927;
    }
    *in_stack_00000050 = 1;
    if (in_stack_00009dd8 != -0x7fffffffffffffff) {
LAB_100973154:
      lStack0000000000000127 = lStack00000000000000e7;
      uStack000000000000011f = uStack00000000000000df;
      FUN_100d4d058(in_stack_00000060);
      if (((*(long *)(unaff_x19 + 0x4d28) != -0x8000000000000000) &&
          ((in_stack_00000058[4] & 1) != 0)) && (*(long *)(unaff_x19 + 0x4d28) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x4d30));
      }
      if (((*(long *)(unaff_x19 + 0x4d40) != -0x8000000000000000) &&
          ((in_stack_00000058[5] & 1) != 0)) && (*(long *)(unaff_x19 + 0x4d40) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x4d48));
      }
      *(undefined2 *)(in_stack_00000058 + 4) = 0;
      in_stack_00000058[3] = 0;
      if (((in_stack_00000058[6] & 1) != 0) && (*(long *)(unaff_x19 + 0x58) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x60));
      }
      in_stack_00000058[6] = 0;
      *(undefined8 *)((long)in_stack_00000070 + 0x29) = uStack00000000000000b8;
      *(undefined8 *)((long)in_stack_00000070 + 0x21) = uStack00000000000000b0;
      *in_stack_00000070 = in_stack_00009dd8;
      in_stack_00000070[1] = in_stack_00009de0;
      in_stack_00000070[2] = (long)in_stack_00009de8;
      in_stack_00000070[3] = in_stack_00009df0;
      *(undefined1 *)(in_stack_00000070 + 4) = in_stack_00009df8;
      *(undefined8 *)((long)in_stack_00000070 + 0x39) = uStack00000000000000c8;
      *(undefined8 *)((long)in_stack_00000070 + 0x31) = uStack00000000000000c0;
      *(ulong *)((long)in_stack_00000070 + 0x49) =
           CONCAT17(uStack000000000000011f,uStack00000000000000d8);
      *(undefined8 *)((long)in_stack_00000070 + 0x41) = uStack00000000000000d0;
      in_stack_00000070[0xb] = lStack0000000000000127;
      in_stack_00000070[10] = CONCAT71(uStack00000000000000e0,uStack000000000000011f);
      uVar8 = 1;
      in_stack_00000070[0xc] = (long)in_stack_00000048;
      goto LAB_100973228;
    }
  }
LAB_100973140:
  *in_stack_00000070 = -0x7fffffffffffffff;
  uVar8 = 3;
LAB_100973228:
  *in_stack_00000058 = uVar8;
  return;
}

