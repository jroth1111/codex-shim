
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016b0eac(long param_1)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 uVar25;
  long lVar26;
  undefined1 *puVar27;
  long *plVar28;
  long unaff_x19;
  long lVar29;
  long lVar30;
  long *unaff_x21;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  undefined8 uVar39;
  long lVar40;
  long *unaff_x24;
  undefined8 unaff_x25;
  long *plVar41;
  undefined2 *unaff_x26;
  long lVar42;
  long *plVar43;
  long *plVar44;
  long unaff_x28;
  long *plVar45;
  ulong in_xzr;
  undefined1 auVar46 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long lStack0000000000000088;
  long lStack00000000000000a0;
  long lStack00000000000000a8;
  long lStack00000000000000b0;
  long *in_stack_00000108;
  long *in_stack_00000110;
  long *in_stack_00000118;
  long *in_stack_00000120;
  long *in_stack_00000128;
  long *in_stack_00000130;
  undefined5 uStack0000000000000138;
  undefined3 uStack000000000000013d;
  long *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  long *in_stack_00000158;
  long *in_stack_00000160;
  long *in_stack_00000168;
  char *in_stack_00000170;
  long *in_stack_00000178;
  long *in_stack_00000180;
  long *in_stack_00000188;
  long *in_stack_00000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  long lVar47;
  undefined *in_stack_00002c90;
  long in_stack_00002c98;
  long in_stack_00002ca0;
  long in_stack_00002ca8;
  long in_stack_00002cb0;
  long *plVar48;
  long *plVar49;
  long *in_stack_00003248;
  long *in_stack_00003250;
  long *in_stack_00003258;
  long *plVar50;
  long *plVar51;
  long *in_stack_00003550;
  long lVar52;
  long *plVar53;
  long *in_stack_00003558;
  long *plVar54;
  long *in_stack_00003560;
  long *plVar55;
  long *in_stack_00003568;
  long *plVar56;
  long *in_stack_00003570;
  long *plVar57;
  long *in_stack_00003578;
  long *plVar58;
  long *in_stack_00003580;
  long *plVar59;
  long *in_stack_00003588;
  long *plVar60;
  long *in_stack_00003590;
  long *plVar61;
  long *in_stack_00003598;
  long *plVar62;
  long *in_stack_000035a0;
  long *plVar63;
  long *in_stack_000035a8;
  long *in_stack_000035b0;
  long *in_stack_000035b8;
  undefined8 in_stack_000035c0;
  undefined8 in_stack_000035c8;
  undefined8 in_stack_000035d0;
  
code_r0x0001016b0eac:
  plVar31 = (long *)&stack0x00002b20;
  plVar48 = (long *)&UNK_10b208fd0;
  plVar51 = (long *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000032f0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar35 = *unaff_x21;
    plVar28 = *(long **)(lVar35 + 0x20);
    plVar38 = *(long **)(lVar35 + 0x28);
    puVar20 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar20 = &UNK_10b3c24c8;
    }
    puVar6 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar20 + 0x18))(puVar6,&stack0x00002f38);
    if (iVar12 != 0) {
      in_stack_00000140 = *(long **)(lVar35 + 0x60);
      in_stack_00000148 = *(long **)(lVar35 + 0x68);
      in_stack_00000128 = *(long **)(lVar35 + 0x50);
      in_stack_00000130 = *(long **)(lVar35 + 0x58);
      in_stack_00000120 = (long *)0x1;
      if (in_stack_00000128 == (long *)0x0) {
        in_stack_00000120 = (long *)0x2;
      }
      in_stack_00000168 = *(long **)(lVar35 + 8);
      in_stack_00002c90 = &DAT_1061c2098;
      _uStack0000000000000138 = (long *)0x1;
      if (in_stack_00000140 == (long *)0x0) {
        _uStack0000000000000138 = (long *)0x2;
      }
      in_stack_00000150 = (long *)0x2;
      in_stack_00000178 = (long *)&stack0x00002c88;
      in_stack_00000170 = s__108b39f4f;
      in_stack_00000158 = plVar28;
      in_stack_00000160 = plVar38;
      (**(code **)(puVar20 + 0x20))(puVar6,&stack0x00000120);
    }
  }
LAB_1016b11e0:
  (**(code **)*in_stack_00003550)();
  do {
    puVar14 = *(undefined8 **)(unaff_x19 + 0x2898);
    if (puVar14 == *(undefined8 **)(unaff_x19 + 0x28a8)) {
      if (*(long *)(unaff_x19 + 0x28a0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x2890));
      }
      lVar35 = unaff_x19 + 0x138;
      FUN_101133118(&stack0x00000120,lVar35);
      FUN_100de93d0(*(long *)(unaff_x19 + 0x90) + 0x5478);
      _memcpy(*(long *)(unaff_x19 + 0x90) + 0x5478,&stack0x00000120,0x2548);
      lVar26 = *(long *)(unaff_x19 + 0xa0);
      uVar25 = *(undefined1 *)(unaff_x28 + 2);
      *(long *)(unaff_x19 + 0x4dd8) = lVar26;
      *(long *)(unaff_x19 + 0x4de0) = lVar35;
      *(undefined1 *)(unaff_x26 + 1) = 0;
      *(undefined1 *)((long)unaff_x26 + 3) = uVar25;
      plVar28 = (long *)(unaff_x19 + 0x2880);
      *unaff_x26 = 0;
      *(long *)(unaff_x19 + 0x2880) = lVar26;
      *(long *)(unaff_x19 + 0x2888) = lVar35;
      lVar35 = *(long *)(lVar26 + 0x80);
      *(long *)(lVar26 + 0x80) = lVar35 + 1;
      *(undefined1 *)((long)unaff_x26 + 1) = 1;
      __ZN9codex_tui18app_server_session16AppServerSession42session_config_with_effective_service_tier17hb703fe104f740a97E
                (unaff_x19 + 0x2890,*(undefined8 *)(unaff_x19 + 0x2880),
                 *(undefined8 *)(unaff_x19 + 0x2888));
      lVar26 = *plVar28;
      *(undefined1 *)((long)unaff_x26 + 1) = 0;
      uVar15 = 0;
      if (*(long *)(lVar26 + 0x50) != -0x8000000000000000) {
        uVar15 = *(undefined8 *)(lVar26 + 0x58);
      }
      __ZN9codex_tui18app_server_session31thread_start_params_from_config17hf09c8e34bfb55761E
                (&stack0x00000120,unaff_x19 + 0x2890,*(undefined1 *)(lVar26 + 0x88),uVar15,
                 *(undefined8 *)(lVar26 + 0x60),uVar25);
      plVar38 = (long *)(lVar26 + 0x18);
      _memcpy(&stack0x00002b20,&stack0x00000120,0x160);
      lVar24 = unaff_x19 + 0x4df0;
      *(undefined8 *)(unaff_x19 + 0x4df8) = 0x8000000000000000;
      *(undefined8 *)(unaff_x19 + 0x4df0) = 0x8000000000000001;
      *(long *)(unaff_x19 + 0x4e00) = lVar35;
      _memcpy(unaff_x19 + 0x4e10,&stack0x00002b20,0x160);
      *(long **)(unaff_x19 + 0x4fb0) = plVar38;
      *(undefined1 *)(unaff_x26 + 0xe8) = 0;
      lVar35 = unaff_x19 + 0x4fc0;
      puVar1 = unaff_x26 + 0x478;
      if (*plVar38 == -0x8000000000000000) {
        _memcpy(lVar35,lVar24,0x1c0);
        *(long *)(unaff_x19 + 0x5180) = lVar26 + 0x20;
        *(undefined1 *)puVar1 = 0;
        FUN_100b76770(&stack0x00000120,unaff_x19 + 0x4fc0,unaff_x25);
        in_stack_000035a0 = in_stack_000001a0;
        in_stack_00003598 = in_stack_00000198;
        in_stack_00003590 = in_stack_00000190;
        in_stack_00003588 = in_stack_00000188;
        in_stack_00003580 = in_stack_00000180;
        in_stack_00003578 = in_stack_00000178;
        in_stack_00003570 = (long *)in_stack_00000170;
        in_stack_00003568 = in_stack_00000168;
        in_stack_00003560 = in_stack_00000160;
        in_stack_00003558 = in_stack_00000158;
        plVar53 = in_stack_00000150;
        plVar36 = in_stack_00000148;
        plVar43 = in_stack_00000140;
        plVar16 = _uStack0000000000000138;
        plVar44 = in_stack_00000130;
        plVar41 = in_stack_00000128;
        plVar37 = in_stack_00000120;
        if (in_stack_00000120 != (long *)0x8000000000000001) {
          _memcpy(&stack0x000032f0,&stack0x000001a8,600);
          if (*(char *)(unaff_x26 + 0x478) == '\x03') {
            FUN_100cbc1e8(unaff_x19 + 0x5360);
            if (*(long *)(unaff_x19 + 0x5348) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x5350));
            }
            *(undefined2 *)((long)unaff_x26 + 0x8f1) = 0;
          }
          else if (*(char *)(unaff_x26 + 0x478) == '\0') {
            FUN_100e44f40(unaff_x19 + 0x4fc0);
          }
LAB_1016b177c:
          _memcpy(&stack0x00002c88,&stack0x000032f0,600);
          *(undefined1 *)(unaff_x26 + 0xe8) = 1;
          _memcpy(&stack0x00002f38,&stack0x00002c88,600);
          FUN_100d7ee48(lVar24);
          if (plVar37 == (long *)0x8000000000000000) {
            in_stack_00000120 = plVar41;
            in_stack_00000128 = plVar44;
            in_stack_00000130 = plVar16;
            _uStack0000000000000138 = plVar43;
            in_stack_00000140 = plVar36;
            in_stack_00000148 = plVar53;
            in_stack_00000150 = in_stack_00003558;
            in_stack_00000158 = in_stack_00003560;
            in_stack_00000160 = in_stack_00003568;
            in_stack_00000168 = in_stack_00003570;
            in_stack_00000170 = (char *)in_stack_00003578;
            in_stack_00000178 = in_stack_00003580;
            in_stack_00000180 = in_stack_00003588;
            in_stack_00000188 = in_stack_00003590;
            in_stack_00000190 = in_stack_00003598;
            in_stack_00000198 = in_stack_000035a0;
            plVar17 = (long *)__ZN9codex_tui18app_server_session23bootstrap_request_error17h8618560bcef882cdE
                                        (&UNK_108cd80cc,0x28,&stack0x00000120);
            *(undefined1 *)unaff_x26 = 0;
            FUN_100de93d0(unaff_x19 + 0x2890);
            plVar38 = (long *)0x2;
            unaff_x24 = plVar43;
            goto LAB_1016b2420;
          }
          _memcpy(&stack0x000028c8,&stack0x00002f38,600);
          *(undefined1 *)unaff_x26 = 0;
          uVar39 = *(undefined8 *)(unaff_x19 + 0x2888);
          uVar25 = *(undefined1 *)(*(long *)(unaff_x19 + 0x2880) + 0x88);
          _memmove(lVar24,&stack0x00002840,0x2e0);
          *(undefined8 *)(unaff_x19 + 0x50d0) = uVar39;
          puVar27 = (undefined1 *)((long)unaff_x24 + 0x49);
          *puVar27 = 0;
          *(undefined1 *)(unaff_x24 + 9) = uVar25;
          _memcpy(unaff_x19 + 0x50d8,unaff_x19 + 0x4df0,0x2e0);
          *(long *)(unaff_x19 + 0x7798) = unaff_x19 + 0x50d8;
          *(undefined8 *)(unaff_x19 + 0x77a0) = uVar39;
          *(undefined1 *)((long)unaff_x24 + 0x41) = 0;
          *(undefined1 *)((long)unaff_x24 + 0x42) = uVar25;
          *(undefined1 *)(unaff_x24 + 8) = 0;
          __ZN9codex_tui18app_server_session47display_permission_profile_from_thread_response17hac64602ae9daabbbE
                    (&stack0x00003238,unaff_x19 + 0x5390,*(undefined8 *)(unaff_x19 + 0x5308),
                     *(undefined8 *)(unaff_x19 + 0x5310),uVar39,uVar25);
          *(undefined1 *)(unaff_x24 + 8) = 1;
          uVar15 = *(undefined8 *)(unaff_x19 + 0x50e0);
          uVar34 = *(undefined8 *)(unaff_x19 + 0x50e8);
          if (*(long *)(unaff_x19 + 0x5180) == -0x8000000000000000) {
            lStack00000000000000b0 = -0x8000000000000000;
            if (*(long *)(unaff_x19 + 0x51e0) != -0x8000000000000000) goto LAB_1016b1aa8;
LAB_1016b1a18:
            lStack00000000000000a8 = -0x8000000000000000;
            if (*(long *)(unaff_x19 + 0x5198) != -0x8000000000000000) goto LAB_1016b1af8;
LAB_1016b1a30:
            lStack00000000000000a0 = -0x8000000000000000;
            uVar32 = *(undefined8 *)(unaff_x19 + 0x52d8);
            lVar35 = *(long *)(unaff_x19 + 0x52e0);
            if (lVar35 == 0) goto LAB_1016b1b40;
LAB_1016b1a44:
            lVar26 = _malloc(lVar35);
            if (lVar26 == 0) {
              func_0x0001087c9084(1,lVar35);
              goto LAB_1016b2a8c;
            }
          }
          else {
            uVar32 = *(undefined8 *)(unaff_x19 + 0x5188);
            lStack00000000000000b0 = *(long *)(unaff_x19 + 0x5190);
            if (lStack00000000000000b0 == 0) {
              in_stack_00000020 = 1;
            }
            else {
              in_stack_00000020 = _malloc(lStack00000000000000b0);
              if (in_stack_00000020 == 0) {
                func_0x0001087c9084(1,lStack00000000000000b0);
                goto LAB_1016b2a8c;
              }
            }
            _memcpy(in_stack_00000020,uVar32,lStack00000000000000b0);
            if (*(long *)(unaff_x19 + 0x51e0) == -0x8000000000000000) goto LAB_1016b1a18;
LAB_1016b1aa8:
            uVar32 = *(undefined8 *)(unaff_x19 + 0x51e8);
            lStack00000000000000a8 = *(long *)(unaff_x19 + 0x51f0);
            if (lStack00000000000000a8 == 0) {
              in_stack_00000018 = 1;
            }
            else {
              in_stack_00000018 = _malloc(lStack00000000000000a8);
              if (in_stack_00000018 == 0) {
                func_0x0001087c9084(1,lStack00000000000000a8);
                goto LAB_1016b2a8c;
              }
            }
            _memcpy(in_stack_00000018,uVar32,lStack00000000000000a8);
            if (*(long *)(unaff_x19 + 0x5198) == -0x8000000000000000) goto LAB_1016b1a30;
LAB_1016b1af8:
            uVar32 = *(undefined8 *)(unaff_x19 + 0x51a0);
            lStack00000000000000a0 = *(long *)(unaff_x19 + 0x51a8);
            if (lStack00000000000000a0 == 0) {
              in_stack_00000010 = 1;
            }
            else {
              in_stack_00000010 = _malloc(lStack00000000000000a0);
              if (in_stack_00000010 == 0) {
                func_0x0001087c9084(1,lStack00000000000000a0);
                goto LAB_1016b2a8c;
              }
            }
            _memcpy(in_stack_00000010,uVar32,lStack00000000000000a0);
            uVar32 = *(undefined8 *)(unaff_x19 + 0x52d8);
            lVar35 = *(long *)(unaff_x19 + 0x52e0);
            if (lVar35 != 0) goto LAB_1016b1a44;
LAB_1016b1b40:
            lVar26 = 1;
          }
          _memcpy(lVar26,uVar32,lVar35);
          uVar32 = *(undefined8 *)(unaff_x19 + 0x52f0);
          lVar24 = *(long *)(unaff_x19 + 0x52f8);
          if (lVar24 == 0) {
            lVar18 = 1;
            lVar33 = lStack00000000000000b0;
          }
          else {
            lVar18 = _malloc(lVar24);
            lVar33 = lVar24;
            if (lVar18 == 0) {
              func_0x0001087c9084(1,lVar24);
              goto LAB_1016b2a8c;
            }
          }
          _memcpy(lVar18,uVar32);
          if (*(long *)(unaff_x19 + 0x5348) == -0x8000000000000000) {
            lStack0000000000000088 = -0x8000000000000000;
          }
          else {
            uVar32 = *(undefined8 *)(unaff_x19 + 0x5350);
            lVar33 = *(long *)(unaff_x19 + 0x5358);
            if (lVar33 == 0) {
              in_stack_00000008 = 1;
            }
            else {
              in_stack_00000008 = _malloc(lVar33);
              if (in_stack_00000008 == 0) {
                func_0x0001087c9084(1,lVar33);
                goto LAB_1016b2a8c;
              }
            }
            _memcpy(in_stack_00000008,uVar32,lVar33);
            lStack0000000000000088 = lVar33;
          }
          uVar25 = *(undefined1 *)(unaff_x19 + 0x53b5);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x53b1);
          uVar8 = *(undefined1 *)(unaff_x19 + 0x53b0);
          *(undefined1 *)(unaff_x24 + 8) = 0;
          if (*(long *)(unaff_x19 + 0x5360) == -0x8000000000000000) {
LAB_1016b1c28:
            lVar47 = -0x8000000000000000;
            uVar32 = *(undefined8 *)(unaff_x19 + 0x5308);
            lVar29 = *(long *)(unaff_x19 + 0x5310);
            puVar20 = in_stack_00002c90;
            lVar52 = in_stack_00002ca0;
            lVar33 = in_stack_00002ca8;
            if (lVar29 == 0) goto LAB_1016b1d0c;
LAB_1016b1c3c:
            lVar19 = _malloc(lVar29);
            in_stack_00002c90 = puVar20;
            in_stack_00002ca0 = lVar52;
            in_stack_00002ca8 = lVar33;
            if (lVar19 == 0) {
              func_0x0001087c9084(1,lVar29);
              goto LAB_1016b2a8c;
            }
          }
          else {
            uVar32 = *(undefined8 *)(unaff_x19 + 0x5368);
            lVar47 = *(long *)(unaff_x19 + 0x5370);
            if (lVar47 == 0) {
              puVar20 = (undefined *)0x1;
            }
            else {
              puVar20 = (undefined *)_malloc(lVar47);
              if (puVar20 == (undefined *)0x0) {
                func_0x0001087c9084(1,lVar47);
                goto LAB_1016b2a8c;
              }
            }
            _memcpy(puVar20,uVar32,lVar47);
            if (*(long *)(unaff_x19 + 0x5378) != -0x8000000000000000) {
              uVar32 = *(undefined8 *)(unaff_x19 + 0x5380);
              lVar52 = *(long *)(unaff_x19 + 0x5388);
              if (lVar52 == 0) {
                lVar33 = 1;
              }
              else {
                lVar33 = _malloc(lVar52);
                if (lVar33 == 0) {
                  func_0x0001087c9084(1,lVar52);
                  goto LAB_1016b2a8c;
                }
              }
              _memcpy(lVar33,uVar32,lVar52);
              if (lVar47 != -0x8000000000000000) goto LAB_1016b1ce8;
              goto LAB_1016b1c28;
            }
            lVar52 = -0x8000000000000000;
            if (lVar47 == -0x8000000000000000) goto LAB_1016b1c28;
LAB_1016b1ce8:
            uVar32 = *(undefined8 *)(unaff_x19 + 0x5308);
            lVar29 = *(long *)(unaff_x19 + 0x5310);
            in_stack_00002c98 = lVar47;
            in_stack_00002cb0 = lVar52;
            if (lVar29 != 0) goto LAB_1016b1c3c;
LAB_1016b1d0c:
            lVar19 = 1;
            in_stack_00002c90 = puVar20;
            in_stack_00002ca0 = lVar52;
            in_stack_00002ca8 = lVar33;
          }
          _memcpy(lVar19,uVar32,lVar29);
          lVar33 = *(long *)(unaff_x19 + 0x5328);
          if (lVar33 == 0) {
            lVar52 = 0;
            lVar21 = 8;
            goto LAB_1016b1dc4;
          }
          lVar30 = *(long *)(unaff_x19 + 0x5320);
          lVar42 = lVar33 * 0x18;
          lVar21 = _malloc(lVar42);
          if (lVar21 == 0) {
            func_0x0001087c9084(8,lVar42);
            goto LAB_1016b2a8c;
          }
          lVar40 = 0;
          plVar38 = (long *)(lVar21 + 0x10);
          goto LAB_1016b1d8c;
        }
        uVar25 = 3;
      }
      else {
        _memcpy(lVar35,lVar24,0x1c0);
        *(long **)(unaff_x19 + 0x5180) = plVar38;
        *(undefined1 *)puVar1 = 0;
        *(undefined2 *)((long)unaff_x26 + 0x8f1) = 0x100;
        _memcpy(unaff_x19 + 0x5188,lVar35,0x1c0);
        __ZN23codex_app_server_client19request_method_name17hc726caaf26acecfbE
                  (unaff_x19 + 0x5348,unaff_x19 + 0x5188);
        *(undefined2 *)((long)unaff_x26 + 0x8f1) = 1;
        _memcpy(unaff_x19 + 0x5360,unaff_x19 + 0x5188,0x1c0);
        *(long **)(unaff_x19 + 0x5520) = plVar38;
        *(undefined1 *)(unaff_x26 + 0x3a0) = 0;
        FUN_100b8da94(&stack0x00000120,unaff_x19 + 0x5360,unaff_x25);
        plVar63 = in_stack_00000180;
        plVar62 = in_stack_00000178;
        plVar61 = (long *)in_stack_00000170;
        plVar60 = in_stack_00000168;
        plVar59 = in_stack_00000160;
        plVar58 = in_stack_00000158;
        plVar57 = in_stack_00000150;
        plVar56 = in_stack_00000148;
        plVar50 = in_stack_00000140;
        plVar45 = _uStack0000000000000138;
        plVar17 = in_stack_00000130;
        plVar49 = in_stack_00000128;
        plVar38 = in_stack_00000120;
        if (in_stack_00000120 != (long *)0x8000000000000002) {
          FUN_100cbc1e8(unaff_x19 + 0x5360);
          if (plVar38 == (long *)0x8000000000000001) {
            in_stack_00000120 = plVar49;
            uVar15 = *(undefined8 *)(unaff_x19 + 0x5350);
            plVar43 = *(long **)(unaff_x19 + 0x5358);
            if (plVar43 == (long *)0x0) {
              plVar16 = (long *)0x1;
            }
            else {
              plVar16 = (long *)_malloc(plVar43);
              if (plVar16 == (long *)0x0) {
                func_0x0001087c9084(1,plVar43);
                goto LAB_1016b2a8c;
              }
            }
            _memcpy(plVar16,uVar15,plVar43);
            plVar41 = (long *)0x8000000000000000;
            lVar35 = *(long *)(unaff_x19 + 0x5348);
            plVar38 = plVar31;
            plVar17 = in_stack_00003248;
            plVar53 = in_stack_00003550;
            plVar45 = in_stack_00003250;
            plVar54 = in_stack_00003558;
            plVar50 = in_stack_00003258;
            plVar55 = in_stack_00003560;
            plVar56 = in_stack_00003568;
            plVar57 = in_stack_00003570;
            plVar58 = in_stack_00003578;
            plVar59 = in_stack_00003580;
            plVar60 = in_stack_00003588;
            plVar61 = in_stack_00003590;
            plVar62 = in_stack_00003598;
            plVar63 = in_stack_000035a0;
            plVar44 = plVar43;
joined_r0x0001016b2a08:
            if (lVar35 != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x5350));
            }
            *(undefined1 *)((long)unaff_x26 + 0x8f1) = 0;
            plVar37 = (long *)0x8000000000000000;
            plVar36 = plVar49;
            plVar49 = plVar48;
          }
          else {
            if (plVar38 == (long *)0x8000000000000000) {
              in_stack_00000128 = plVar57;
              in_stack_00000120 = plVar56;
              _uStack0000000000000138 = plVar59;
              in_stack_00000130 = plVar58;
              in_stack_00000140 = plVar60;
            }
            else {
              func_0x000100025ae8(&stack0x000035a8,unaff_x19 + 0x5348);
              in_stack_00000128 = plVar45;
              in_stack_00000120 = plVar17;
              _uStack0000000000000138 = plVar56;
              in_stack_00000130 = plVar50;
              in_stack_00000140 = plVar57;
              if (in_stack_000035a8 != (long *)0x8000000000000003) {
                lVar35 = *(long *)(unaff_x19 + 0x5348);
                plVar43 = plVar38;
                plVar48 = plVar49;
                plVar53 = plVar17;
                plVar54 = plVar45;
                plVar55 = plVar50;
                plVar16 = in_stack_000035b8;
                plVar44 = in_stack_000035b0;
                plVar41 = in_stack_000035a8;
                goto joined_r0x0001016b2a08;
              }
            }
            FUN_10066e194(&stack0x00000120,&stack0x000032a0);
            plVar63 = in_stack_000001a0;
            plVar62 = in_stack_00000198;
            plVar61 = in_stack_00000190;
            plVar60 = in_stack_00000188;
            plVar59 = in_stack_00000180;
            plVar58 = in_stack_00000178;
            plVar57 = (long *)in_stack_00000170;
            plVar56 = in_stack_00000168;
            plVar55 = in_stack_00000160;
            plVar54 = in_stack_00000158;
            plVar53 = in_stack_00000150;
            plVar36 = in_stack_00000148;
            plVar43 = in_stack_00000140;
            plVar16 = _uStack0000000000000138;
            plVar44 = in_stack_00000130;
            plVar41 = in_stack_00000128;
            plVar37 = in_stack_00000120;
            *(undefined1 *)((long)unaff_x26 + 0x8f1) = 0;
            plVar48 = *(long **)(unaff_x19 + 0x5348);
            plVar31 = *(long **)(unaff_x19 + 0x5350);
            if (in_stack_00000120 == (long *)0x8000000000000000) {
              plVar43 = *(long **)(unaff_x19 + 0x5358);
              plVar16 = plVar31;
              plVar36 = in_stack_00000128;
              plVar41 = (long *)0x8000000000000002;
              plVar44 = plVar48;
              plVar53 = in_stack_00003550;
              plVar54 = in_stack_00003558;
              plVar55 = in_stack_00003560;
              plVar56 = in_stack_00003568;
              plVar57 = in_stack_00003570;
              plVar58 = in_stack_00003578;
              plVar59 = in_stack_00003580;
              plVar60 = in_stack_00003588;
              plVar61 = in_stack_00003590;
              plVar62 = in_stack_00003598;
              plVar63 = in_stack_000035a0;
            }
            else {
              _memcpy(&stack0x000032f0,&stack0x000001a8,600);
              if (plVar48 != (long *)0x0) {
                _free(plVar31);
              }
            }
            *(undefined1 *)((long)unaff_x26 + 0x8f1) = 0;
          }
          *(undefined1 *)(unaff_x26 + 0x479) = 0;
          *(undefined1 *)(unaff_x26 + 0x478) = 1;
          plVar31 = plVar38;
          plVar48 = plVar49;
          in_stack_00003248 = plVar17;
          in_stack_00003250 = plVar45;
          in_stack_00003258 = plVar50;
          in_stack_00003558 = plVar54;
          in_stack_00003560 = plVar55;
          in_stack_00003568 = plVar56;
          in_stack_00003570 = plVar57;
          in_stack_00003578 = plVar58;
          in_stack_00003580 = plVar59;
          in_stack_00003588 = plVar60;
          in_stack_00003590 = plVar61;
          in_stack_00003598 = plVar62;
          in_stack_000035a0 = plVar63;
          goto LAB_1016b177c;
        }
        *(undefined1 *)puVar1 = 3;
        uVar25 = 4;
      }
      *(undefined1 *)(unaff_x26 + 0xe8) = uVar25;
      uVar25 = 3;
      goto LAB_1016b2048;
    }
    *(undefined8 **)(unaff_x19 + 0x2898) = puVar14 + 2;
    uVar34 = puVar14[1];
    uVar15 = *puVar14;
    *(undefined8 *)(unaff_x19 + 0x2888) = uVar34;
    *(undefined8 *)(unaff_x19 + 0x2880) = uVar15;
    *(undefined8 *)(unaff_x19 + 0x28b0) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0x28c0) = uVar34;
    *(undefined8 *)(unaff_x19 + 0x28b8) = uVar15;
    *(undefined1 *)(unaff_x28 + 0x950) = 0;
    auVar46 = FUN_10167074c(unaff_x19 + 0x28b0,unaff_x25);
    plVar53 = auVar46._8_8_;
    if ((auVar46._0_8_ & 1) != 0) {
      uVar15 = 1;
      uVar25 = 5;
      goto LAB_1016b299c;
    }
    if (*(char *)(unaff_x28 + 0x950) == '\x03') {
      FUN_100d7ee48(unaff_x19 + 0x28d8);
    }
  } while (plVar53 == (long *)0x0);
  in_stack_00003550 = plVar53;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    unaff_x21 = (long *)&
                        __ZN9codex_tui3app17session_lifecycle37__LT_impl_u20_codex_tui__app__App_GT_37start_fresh_session_with_summary_hint28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43df969de2ba882cE
    ;
    if (1 < bRam000000010b630f80 - 1) {
      if (bRam000000010b630f80 == 0) goto LAB_1016b1038;
      goto LAB_1016b2a14;
    }
    goto LAB_1016b0e68;
  }
  goto LAB_1016b1038;
code_r0x0001016b2808:
  uVar2 = uVar13 + 2;
  uVar4 = in_stack_00000120[0x38];
  bVar5 = uVar4 == uVar13;
  uVar13 = uVar4;
  if (bVar5) {
    in_stack_00000120[0x38] = uVar2;
    LOAcquire();
    uVar13 = in_stack_00000120[0x11];
    in_stack_00000120[0x11] = uVar13 + 1;
    lVar35 = func_0x000105217788(in_stack_00000120 + 0x10,uVar13);
    puVar14 = (undefined8 *)(lVar35 + (uVar13 & 0x1f) * 0x10);
    *puVar14 = auVar46._0_8_;
    *(int *)(puVar14 + 1) = auVar46._8_4_;
    *(ulong *)(lVar35 + 0x210) = *(ulong *)(lVar35 + 0x210) | 1L << (uVar13 & 0x1f);
    LORelease();
    puVar3 = (ulong *)(plVar28 + 0x22);
    LOAcquire();
    uVar13 = *puVar3;
    *puVar3 = uVar13 | 2;
    LORelease();
    if (uVar13 == 0) {
      lVar35 = plVar28[0x20];
      plVar28[0x20] = 0;
      *puVar3 = in_xzr;
      LORelease();
      if (lVar35 != 0) {
        (**(code **)(lVar35 + 8))(plVar28[0x21]);
      }
    }
LAB_1016b2884:
    plVar31 = in_stack_00000120;
    LOAcquire();
    lVar35 = in_stack_00000120[0x39];
    in_stack_00000120[0x39] = lVar35 + -1;
    LORelease();
    if (lVar35 == 1) {
      LOAcquire();
      lVar35 = in_stack_00000120[0x11];
      in_stack_00000120[0x11] = lVar35 + 1;
      lVar35 = func_0x000100fcbef4(in_stack_00000120 + 0x10,lVar35);
      *(ulong *)(lVar35 + 0x210) = *(ulong *)(lVar35 + 0x210) | 0x200000000;
      LORelease();
      puVar3 = (ulong *)(plVar31 + 0x22);
      LOAcquire();
      uVar13 = *puVar3;
      *puVar3 = uVar13 | 2;
      LORelease();
      if (uVar13 == 0) {
        lVar35 = plVar31[0x20];
        plVar31[0x20] = 0;
        *puVar3 = in_xzr;
        LORelease();
        if (lVar35 != 0) {
          (**(code **)(lVar35 + 8))(plVar31[0x21]);
        }
      }
    }
    lVar35 = *in_stack_00000120;
    *in_stack_00000120 = lVar35 + -1;
    LORelease();
    if (lVar35 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&stack0x00000120);
    }
    lVar35 = *(long *)(unaff_x19 + 0x2680);
    if ((lVar35 != -0x7fffffffffffffff) && ((*(byte *)(unaff_x28 + 3) & 1) != 0)) {
      if ((lVar35 != -0x8000000000000000) && (lVar35 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x2688));
      }
      if ((*(long *)(unaff_x19 + 0x2698) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x2698) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x26a0));
      }
    }
    *(undefined1 *)(unaff_x28 + 3) = 0;
    FUN_100de93d0(unaff_x19 + 0x138);
    if (((*(byte *)(unaff_x28 + 4) & 1) != 0) && (*(long *)(unaff_x19 + 0x120) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x128));
    }
    *(undefined1 *)(unaff_x28 + 4) = 0;
    if (((*(byte *)(unaff_x28 + 5) & 1) != 0) &&
       (*(long *)(unaff_x19 + 0xa8) != -0x8000000000000000)) {
      func_0x000100e2b66c((long *)(unaff_x19 + 0xa8));
    }
    uVar15 = 0;
    *(undefined1 *)(unaff_x28 + 5) = 0;
    uVar25 = 1;
    goto LAB_1016b299c;
  }
  goto LAB_1016b27fc;
code_r0x0001016b0e74:
  param_1 = *unaff_x21;
  goto code_r0x0001016b0eac;
  while( true ) {
    uVar32 = *(undefined8 *)(lVar30 + 8);
    lVar23 = *(long *)(lVar30 + 0x10);
    if (lVar23 == 0) {
      lVar22 = 1;
    }
    else {
      lVar22 = _malloc(lVar23);
      if (lVar22 == 0) {
        func_0x0001087c9084(1,lVar23);
        goto LAB_1016b2a8c;
      }
    }
    lVar30 = lVar30 + 0x18;
    lVar40 = lVar40 + 1;
    _memcpy(lVar22,uVar32,lVar23);
    plVar38[-2] = lVar23;
    plVar38[-1] = lVar22;
    lVar42 = lVar42 + -0x18;
    *plVar38 = lVar23;
    plVar38 = plVar38 + 3;
    if (lVar33 == lVar40) break;
LAB_1016b1d8c:
    lVar52 = lVar33;
    if (lVar42 == 0) break;
  }
LAB_1016b1dc4:
  plVar38 = *(long **)(unaff_x19 + 0x5340);
  if (plVar38 == (long *)0x0) {
    plVar53 = (long *)0x0;
    in_stack_00003558 = (long *)0x8;
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x5338);
    lVar42 = (long)plVar38 * 0x18;
    in_stack_00003558 = (long *)_malloc(lVar42);
    if (in_stack_00003558 == (long *)0x0) {
      func_0x0001087c9084(8,lVar42);
      goto LAB_1016b2a8c;
    }
    plVar17 = (long *)0x0;
    plVar45 = in_stack_00003558 + 2;
    do {
      plVar53 = plVar38;
      if (lVar42 == 0) break;
      uVar32 = *(undefined8 *)(lVar30 + 8);
      lVar40 = *(long *)(lVar30 + 0x10);
      if (lVar40 == 0) {
        lVar23 = 1;
      }
      else {
        lVar23 = _malloc(lVar40);
        if (lVar23 == 0) {
          func_0x0001087c9084(1,lVar40);
          goto LAB_1016b2a8c;
        }
      }
      lVar30 = lVar30 + 0x18;
      plVar17 = (long *)((long)plVar17 + 1);
      _memcpy(lVar23,uVar32,lVar40);
      plVar45[-2] = lVar40;
      plVar45[-1] = lVar23;
      lVar42 = lVar42 + -0x18;
      *plVar45 = lVar40;
      plVar45 = plVar45 + 3;
    } while (plVar38 != plVar17);
  }
  uVar9 = *(undefined1 *)(unaff_x19 + 0x53b6);
  *(long *)(unaff_x19 + 0x53b8) = lVar35;
  *(long *)(unaff_x19 + 0x53c0) = lVar26;
  *(long *)(unaff_x19 + 0x53c8) = lVar35;
  *(long *)(unaff_x19 + 0x53d0) = lVar24;
  *(long *)(unaff_x19 + 0x53d8) = lVar18;
  *(long *)(unaff_x19 + 0x53e0) = lVar24;
  *(long *)(unaff_x19 + 0x53e8) = lVar29;
  *(long *)(unaff_x19 + 0x53f0) = lVar19;
  *(long *)(unaff_x19 + 0x53f8) = lVar29;
  *(long *)(unaff_x19 + 0x5408) = lVar21;
  *(long *)(unaff_x19 + 0x5400) = lVar52;
  *(long **)(unaff_x19 + 0x5420) = in_stack_00003558;
  *(long **)(unaff_x19 + 0x5418) = plVar53;
  *(long *)(unaff_x19 + 0x5410) = lVar33;
  *(long **)(unaff_x19 + 0x5428) = plVar38;
  *(long *)(unaff_x19 + 0x5430) = lStack00000000000000b0;
  *(long *)(unaff_x19 + 0x5438) = in_stack_00000020;
  *(long *)(unaff_x19 + 0x5440) = lStack00000000000000b0;
  *(long *)(unaff_x19 + 0x5448) = lStack00000000000000a8;
  *(long *)(unaff_x19 + 0x5450) = in_stack_00000018;
  *(long *)(unaff_x19 + 0x5458) = lStack00000000000000a8;
  *(long *)(unaff_x19 + 0x5460) = lStack00000000000000a0;
  *(long *)(unaff_x19 + 0x5468) = in_stack_00000010;
  *(long *)(unaff_x19 + 0x5470) = lStack00000000000000a0;
  *(long *)(unaff_x19 + 0x5478) = lStack0000000000000088;
  *(long *)(unaff_x19 + 0x5480) = in_stack_00000008;
  *(long *)(unaff_x19 + 0x5488) = lStack0000000000000088;
  *(long *)(unaff_x19 + 0x54b8) = in_stack_00002cb0;
  *(long *)(unaff_x19 + 0x54b0) = in_stack_00002ca8;
  *(long *)(unaff_x19 + 0x54a8) = in_stack_00002ca0;
  *(long *)(unaff_x19 + 0x54a0) = in_stack_00002c98;
  *(undefined **)(unaff_x19 + 0x5498) = in_stack_00002c90;
  *(long *)(unaff_x19 + 0x5490) = lVar47;
  *(long **)(unaff_x19 + 0x54e0) = in_stack_00003258;
  *(long **)(unaff_x19 + 0x54d8) = in_stack_00003250;
  *(long **)(unaff_x19 + 0x54d0) = in_stack_00003248;
  *(long **)(unaff_x19 + 0x54c8) = plVar48;
  *(long **)(unaff_x19 + 0x54c0) = plVar31;
  *(undefined8 *)(unaff_x19 + 0x54e8) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x54f0) = uVar34;
  *(undefined8 *)(unaff_x19 + 0x54f8) = uVar39;
  *(undefined1 *)unaff_x24 = uVar8;
  *(undefined1 *)((long)unaff_x24 + 1) = 0;
  *(undefined1 *)((long)unaff_x24 + 6) = uVar25;
  *(undefined4 *)((long)unaff_x24 + 2) = uVar7;
  *(undefined1 *)((long)unaff_x24 + 7) = uVar9;
  FUN_1016730f0(&stack0x000032f0,unaff_x19 + 0x53b8,unaff_x25);
  if (plVar51 == (long *)0x3) {
    *(undefined1 *)((long)unaff_x24 + 0x41) = 3;
    *puVar27 = 3;
    uVar25 = 4;
LAB_1016b2048:
    *(undefined1 *)(unaff_x26 + 1) = uVar25;
    uVar15 = 1;
    uVar25 = 6;
LAB_1016b299c:
    *(undefined1 *)(unaff_x28 + 1) = uVar25;
    return uVar15;
  }
  FUN_100cef81c(unaff_x19 + 0x53b8);
  *(undefined1 *)(unaff_x24 + 8) = 0;
  *(undefined1 *)((long)unaff_x24 + 0x41) = 1;
  _memcpy(&stack0x00000120,&stack0x000032f0,0x1b0);
  plVar17 = in_stack_00000128;
  plVar38 = in_stack_00000120;
  if (in_stack_00000120 == (long *)0x2) {
    plVar17 = (long *)FUN_100e9f974(&stack0x00000128,&UNK_10b224028);
    FUN_100e61180(unaff_x19 + 0x50d8);
  }
  else {
    _memcpy(&stack0x000035e0,&stack0x00000130,0x1a0);
    in_stack_000035c8 = *(undefined8 *)(unaff_x19 + 0x5170);
    in_stack_000035c0 = *(undefined8 *)(unaff_x19 + 0x5168);
    in_stack_000035d0 = *(undefined8 *)(unaff_x19 + 0x5178);
    if (*(long *)(unaff_x19 + 0x50d8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x50e0));
    }
    if (*(long *)(unaff_x19 + 0x50f0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x50f8));
    }
    if ((*(long *)(unaff_x19 + 0x5180) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x5180) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5188));
    }
    if (*(long *)(unaff_x19 + 0x5108) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x5110));
    }
    if (*(long *)(unaff_x19 + 0x5120) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x5128));
    }
    if ((-0x7ffffffffffffffe < *(long *)(unaff_x19 + 0x5240)) &&
       (*(long *)(unaff_x19 + 0x5240) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5248));
    }
    if ((*(long *)(unaff_x19 + 0x5198) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x5198) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x51a0));
    }
    if (*(long *)(unaff_x19 + 0x5138) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x5140));
    }
    if (*(long *)(unaff_x19 + 0x5150) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x5158));
    }
    lVar35 = *(ulong *)(unaff_x19 + 0x5258) + 0x7ffffffffffffffa;
    if (*(ulong *)(unaff_x19 + 0x5258) < 0x8000000000000006) {
      lVar35 = 5;
    }
    if (lVar35 == 5) {
      FUN_100e0fca4(unaff_x19 + 0x5258);
    }
    else if ((lVar35 == 4) && (*(long *)(unaff_x19 + 0x5260) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5268));
    }
    if ((*(long *)(unaff_x19 + 0x51b0) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x51b0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x51b8));
    }
    if ((*(long *)(unaff_x19 + 0x51c8) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x51c8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x51d0));
    }
    lVar35 = *(long *)(unaff_x19 + 0x51f8);
    if (lVar35 != -0x7fffffffffffffff) {
      if ((lVar35 != -0x8000000000000000) && (lVar35 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x5200));
      }
      if ((*(long *)(unaff_x19 + 0x5210) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x5210) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x5218));
      }
      if ((*(long *)(unaff_x19 + 0x5228) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x5228) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x5230));
      }
    }
    if ((*(long *)(unaff_x19 + 0x51e0) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x51e0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x51e8));
    }
    if (*(long *)(unaff_x19 + 0x52d0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x52d8));
    }
    if (*(long *)(unaff_x19 + 0x52e8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x52f0));
    }
    if ((*(long *)(unaff_x19 + 0x5348) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x5348) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5350));
    }
    if (*(long *)(unaff_x19 + 0x5300) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x5308));
    }
    lVar26 = *(long *)(unaff_x19 + 0x5320);
    lVar35 = *(long *)(unaff_x19 + 0x5328);
    if (lVar35 != 0) {
      unaff_x24 = (long *)(lVar26 + 8);
      do {
        if (unaff_x24[-1] != 0) {
          _free(*unaff_x24);
        }
        unaff_x24 = unaff_x24 + 3;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
    if (*(long *)(unaff_x19 + 0x5318) != 0) {
      _free(lVar26);
    }
    lVar26 = *(long *)(unaff_x19 + 0x5338);
    lVar35 = *(long *)(unaff_x19 + 0x5340);
    if (lVar35 != 0) {
      unaff_x24 = (long *)(lVar26 + 8);
      do {
        if (unaff_x24[-1] != 0) {
          _free(*unaff_x24);
        }
        unaff_x24 = unaff_x24 + 3;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
    if (*(long *)(unaff_x19 + 0x5330) != 0) {
      _free(lVar26);
    }
    lVar35 = *(long *)(unaff_x19 + 0x5390);
    if (-0x7ffffffffffffffe < lVar35) {
      lVar24 = *(long *)(unaff_x19 + 0x5398);
      lVar26 = *(long *)(unaff_x19 + 0x53a0);
      if (lVar26 != 0) {
        puVar14 = (undefined8 *)(lVar24 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      unaff_x24 = (long *)0x0;
      if (lVar35 != 0) {
        _free(lVar24);
      }
    }
    if (*(long *)(unaff_x19 + 0x5360) != -0x8000000000000000) {
      if (*(long *)(unaff_x19 + 0x5360) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5368));
      }
      if ((*(long *)(unaff_x19 + 0x5378) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x5378) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x5380));
      }
    }
  }
  *puVar27 = 1;
  *(undefined1 *)unaff_x26 = 0;
  FUN_100de93d0(unaff_x19 + 0x2890);
LAB_1016b2420:
  *(undefined1 *)((long)unaff_x26 + 1) = 0;
  _memcpy(&stack0x00002688,&stack0x000035e0,0x1a0);
  *(undefined1 *)(unaff_x26 + 1) = 1;
  *(long **)(unaff_x19 + 0x26b0) = plVar38;
  *(long **)(unaff_x19 + 0x26b8) = plVar17;
  _memcpy(unaff_x19 + 0x26c0,&stack0x00002688,0x1a0);
  *(undefined8 *)(unaff_x19 + 0x2868) = in_stack_000035c8;
  *(undefined8 *)(unaff_x19 + 0x2860) = in_stack_000035c0;
  *(undefined8 *)(unaff_x19 + 0x2870) = in_stack_000035d0;
  FUN_100d1e124(plVar28);
  if (*(long *)(unaff_x19 + 0x26b0) == 2) {
    puVar14 = *(undefined8 **)(unaff_x19 + 0x26b8);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x90);
    plVar51 = (long *)&stack0x00002f38;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000120,s_8Failed_to_start_a_fresh_session_108adb23d,&stack0x000032f0);
    __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
              (uVar15,&stack0x00002840);
    *(undefined1 *)(unaff_x28 + 4) = 0;
    in_stack_00000128 = *(long **)(unaff_x19 + 0x128);
    in_stack_00000120 = *(long **)(unaff_x19 + 0x120);
    in_stack_00000130 = *(long **)(unaff_x19 + 0x130);
    lVar35 = *(long *)(unaff_x19 + 0x90);
    if ((*(long *)(lVar35 + 0x7318) != -0x8000000000000000) && (*(long *)(lVar35 + 0x7318) != 0)) {
      _free(*(undefined8 *)(lVar35 + 0x7320));
      lVar35 = *(long *)(unaff_x19 + 0x90);
    }
    *(long **)(lVar35 + 0x7320) = in_stack_00000128;
    *(long **)(lVar35 + 0x7318) = in_stack_00000120;
    *(long **)(lVar35 + 0x7328) = in_stack_00000130;
    (**(code **)*puVar14)();
  }
  else {
    _memcpy(&stack0x00000120,unaff_x19 + 0x26b0,0x1c8);
    uVar15 = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined1 *)(unaff_x28 + 5) = 0;
    _memcpy(&stack0x00002840,&stack0x00000120,0x240);
    uVar39 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar34 = *(undefined8 *)(unaff_x19 + 0x90);
    _memcpy(plVar28,&stack0x00002840,0x240);
    *(undefined8 *)(unaff_x19 + 0x2ac8) = uVar39;
    *(undefined8 *)(unaff_x19 + 0x2ac0) = uVar34;
    *(undefined8 *)(unaff_x19 + 0x2ad0) = uVar15;
    *(undefined1 *)(unaff_x28 + 0x438) = 0;
    auVar46 = FUN_1016b3070(unaff_x19 + 0x2880,unaff_x25);
    if ((auVar46._0_8_ & 1) != 0) {
      uVar15 = 1;
      uVar25 = 7;
      goto LAB_1016b299c;
    }
    FUN_100d6e8f0(unaff_x19 + 0x2880);
    if (auVar46._8_8_ == (undefined8 *)0x0) {
      lVar35 = *(long *)(unaff_x19 + 0x2680);
      if (lVar35 != -0x7fffffffffffffff) {
        *(undefined1 *)(unaff_x28 + 3) = 0;
        lVar26 = *(long *)(unaff_x19 + 0x2698);
        uVar34 = *(undefined8 *)(unaff_x19 + 0x26a0);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x26a8);
        if (lVar35 != -0x8000000000000000) {
          __ZN94__LT_ratatui__text__line__Line_u20_as_u20_core__convert__From_LT_alloc__string__String_GT__GT_4from17h007a800374ad3999E
                    (&stack0x00000120,&stack0x00002828);
          FUN_100f40018(&stack0x00002840,&stack0x00000120);
        }
        if (lVar26 != -0x8000000000000000) {
          in_stack_00000128 = (long *)FUN_100f410dc(0x50,8);
          plVar28 = _uStack0000000000000138;
          *in_stack_00000128 = 0x8000000000000000;
          in_stack_00000128[1] = (long)&UNK_108cd866e;
          in_stack_00000128[2] = 0x1e;
          *(undefined1 *)(in_stack_00000128 + 3) = 0x13;
          *(undefined1 *)((long)in_stack_00000128 + 0x1c) = 0x13;
          *(undefined1 *)(in_stack_00000128 + 4) = 0x13;
          *(undefined4 *)((long)in_stack_00000128 + 0x24) = 0;
          in_stack_00000128[5] = lVar26;
          in_stack_00000128[6] = uVar34;
          in_stack_00000128[7] = uVar15;
          *(undefined4 *)(in_stack_00000128 + 8) = 7;
          *(undefined1 *)((long)in_stack_00000128 + 0x44) = 0x13;
          *(undefined1 *)(in_stack_00000128 + 9) = 0x13;
          *(undefined4 *)((long)in_stack_00000128 + 0x4c) = 0;
          _uStack0000000000000138 = (long *)CONCAT71(stack0x00000139,0x13);
          uVar15 = _uStack0000000000000138;
          uStack000000000000013d = SUB83(plVar28,5);
          uStack0000000000000138 = CONCAT14(0x13,(int)uVar15);
          in_stack_00000140 = (long *)CONCAT71(in_stack_00000140._1_7_,0x13);
          in_stack_00000140 = (long *)((ulong)in_stack_00000140 & 0xffffffff);
          in_stack_00000148 = (long *)CONCAT71(in_stack_00000148._1_7_,3);
          in_stack_00000120 = (long *)0x2;
          in_stack_00000130 = (long *)0x2;
          FUN_100f40018(&stack0x00002840,&stack0x00000120);
        }
        in_stack_00000128 = (long *)0x8;
        in_stack_00000120 = (long *)0x0;
        in_stack_00000130 = (long *)0x0;
        __ZN9codex_tui10chatwidget10ChatWidget23add_plain_history_lines17h7f0c979c411f2813E
                  (*(undefined8 *)(unaff_x19 + 0x90),&stack0x00000120);
      }
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x19 + 0x90);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000120,s__Failed_to_attach_to_fresh_app_s_108adb314,&stack0x00002f38);
      plVar51 = in_stack_00000120;
      __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
                (uVar15,&stack0x000032f0);
      (**(code **)*auVar46._8_8_)();
    }
  }
  plVar28 = *(long **)(*(long *)(unaff_x19 + 0x98) + 0x80);
  plVar28[0x39] = plVar28[0x39] + 1;
  lVar35 = *plVar28;
  *plVar28 = lVar35 + 1;
  if (-1 < lVar35) {
    in_stack_00000120 = plVar28;
    auVar46 = func_0x000106032954(8);
    plVar28 = in_stack_00000120;
    unaff_x21 = auVar46._8_8_;
    uVar13 = in_stack_00000120[0x38];
LAB_1016b27fc:
    if ((uVar13 & 1) != 0) goto LAB_1016b2884;
    if (uVar13 != 0xfffffffffffffffe) goto code_r0x0001016b2808;
    __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_1016b2a14:
    cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                       (&
                        __ZN9codex_tui3app17session_lifecycle37__LT_impl_u20_codex_tui__app__App_GT_37start_fresh_session_with_summary_hint28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43df969de2ba882cE
                       );
    in_stack_00003550 = plVar53;
    if (cVar11 != '\0') {
LAB_1016b0e68:
      uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x21);
      in_stack_00003550 = plVar53;
      if ((uVar13 & 1) != 0) goto code_r0x0001016b0e74;
    }
LAB_1016b1038:
    lVar35 = 
    ___ZN9codex_tui3app17session_lifecycle37__LT_impl_u20_codex_tui__app__App_GT_37start_fresh_session_with_summary_hint28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43df969de2ba882cE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000110 =
           *(long **)(
                     ___ZN9codex_tui3app17session_lifecycle37__LT_impl_u20_codex_tui__app__App_GT_37start_fresh_session_with_summary_hint28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43df969de2ba882cE
                     + 0x20);
      in_stack_00000118 =
           *(long **)(
                     ___ZN9codex_tui3app17session_lifecycle37__LT_impl_u20_codex_tui__app__App_GT_37start_fresh_session_with_summary_hint28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43df969de2ba882cE
                     + 0x28);
      in_stack_00000108 = (long *)0x2;
      puVar20 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar20 = &UNK_10b3c24c8;
      }
      puVar6 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar6 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar20 + 0x18))(puVar6,&stack0x00000108);
      if (iVar12 != 0) {
        plVar51 = (long *)0x1;
        in_stack_00000158 = in_stack_00000110;
        in_stack_00000150 = in_stack_00000108;
        in_stack_00000160 = in_stack_00000118;
        in_stack_00000140 = *(long **)(lVar35 + 0x60);
        in_stack_00000148 = *(long **)(lVar35 + 0x68);
        in_stack_00000128 = *(long **)(lVar35 + 0x50);
        in_stack_00000130 = *(long **)(lVar35 + 0x58);
        in_stack_00000120 = (long *)0x1;
        if (in_stack_00000128 == (long *)0x0) {
          in_stack_00000120 = (long *)0x2;
        }
        in_stack_00000168 = *(long **)(lVar35 + 8);
        in_stack_00002c90 = (undefined *)CONCAT71((int7)((ulong)in_stack_00002c90 >> 8),1);
        _uStack0000000000000138 = (long *)0x1;
        if (in_stack_00000140 == (long *)0x0) {
          _uStack0000000000000138 = (long *)0x2;
        }
        in_stack_00000178 = (long *)&stack0x00002f38;
        in_stack_00000170 = s__108b39f4f;
        (**(code **)(puVar20 + 0x20))(puVar6,&stack0x00000120);
      }
    }
    goto LAB_1016b11e0;
  }
LAB_1016b2a8c:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1016b2a90);
  (*pcVar10)();
}

