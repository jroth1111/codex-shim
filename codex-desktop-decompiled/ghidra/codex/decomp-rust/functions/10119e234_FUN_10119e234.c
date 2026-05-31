
/* WARNING: Removing unreachable block (ram,0x00010119f634) */
/* WARNING: Removing unreachable block (ram,0x00010119ef48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10119e234(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined1 uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 *puVar21;
  int *unaff_x20;
  int *unaff_x21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  byte *unaff_x25;
  int *unaff_x26;
  int *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined *in_stack_00000008;
  int in_stack_00000010;
  long in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  int *in_stack_00000060;
  int *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00001d78;
  undefined8 *in_stack_00001d80;
  long in_stack_00001d88;
  int *in_stack_00001de0;
  int *in_stack_00001de8;
  int *piVar46;
  int *in_stack_00001df0;
  int *in_stack_00001df8;
  int *in_stack_00001e00;
  int *piVar47;
  int *in_stack_00001e08;
  int *in_stack_00001e10;
  int *piVar48;
  int *in_stack_00001e18;
  int *in_stack_00001e20;
  int *piVar49;
  int *in_stack_00001e28;
  int *piVar50;
  int *in_stack_00001e30;
  int *piVar51;
  int *in_stack_00001e38;
  int *in_stack_00001e40;
  int *in_stack_00001e48;
  int *in_stack_00004328;
  int *in_stack_00004330;
  int *in_stack_00004338;
  int *in_stack_00004340;
  int *in_stack_00004348;
  int *in_stack_00004350;
  int *in_stack_00004358;
  int *piVar52;
  int *in_stack_00004360;
  int *in_stack_00004368;
  undefined4 in_stack_00004370;
  undefined4 in_stack_00004374;
  int *in_stack_00004378;
  char *pcVar53;
  int *in_stack_00004380;
  undefined8 in_stack_00006850;
  undefined8 in_stack_00006858;
  undefined8 in_stack_00006860;
  int *in_stack_00006868;
  int *in_stack_000069d0;
  int *in_stack_000069d8;
  int *in_stack_000069e0;
  int *in_stack_00006c50;
  int *in_stack_00006c58;
  int *in_stack_00006c60;
  
code_r0x00010119e234:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (param_1,s__failed_to_name_imported_session_108acc084,param_3);
  piVar23 = *(int **)(unaff_x29 + -0x88);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x80);
  bVar6 = (byte)in_stack_00001de0;
  if (bVar6 < 2) {
    if (bVar6 == 0) goto LAB_10119f050;
  }
  else if ((bVar6 != 2) && (bVar6 == 3)) goto LAB_10119f050;
  if (in_stack_00001de8 != (int *)0x0) {
    _free(in_stack_00001df0);
  }
LAB_10119f050:
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x70);
  piVar16 = *(int **)(unaff_x27 + 0xef2);
  if (((piVar16 != (int *)0x8000000000000001) && (piVar16 != unaff_x20)) && (piVar16 != (int *)0x0))
  {
    _free(*(undefined8 *)(unaff_x27 + 0xef4));
  }
  unaff_x25[3] = 0;
  if (*(long *)(unaff_x27 + 0xaf2) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xaf4));
  }
  lVar5 = **(long **)(unaff_x27 + 0xaec);
  **(long **)(unaff_x27 + 0xaec) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x27 + 0xaec);
  }
  FUN_100e26e4c((long)unaff_x27 + unaff_x28);
LAB_10119f0bc:
  unaff_x25[4] = 0;
  piVar16 = in_stack_00001de0;
LAB_10119f138:
  unaff_x25[5] = 0;
  piVar22 = unaff_x21;
  if ((unaff_x25[1] & 1) != 0) {
    piVar22 = *(int **)(unaff_x27 + 0xa92);
    lVar5 = *(long *)(unaff_x27 + 0xa94) + 1;
    piVar15 = piVar22;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e068b8(piVar15);
      piVar15 = piVar15 + 0x78;
    }
    if (*(long *)(unaff_x27 + 0xa90) != 0) {
      _free(piVar22);
    }
  }
  unaff_x25[1] = 0;
  if (((*(int **)(unaff_x27 + 0x136) != unaff_x20) && ((unaff_x25[2] & 1) != 0)) &&
     (*(int **)(unaff_x27 + 0x136) != (int *)0x0)) {
    _free(*(undefined8 *)(unaff_x27 + 0x138));
  }
  unaff_x25[2] = 0;
  in_stack_00001de0 = in_stack_00001de8;
  piVar15 = in_stack_00001df0;
  piVar47 = in_stack_00001e00;
  piVar46 = in_stack_00001e08;
  piVar48 = in_stack_00001e10;
  piVar52 = in_stack_00001e18;
  piVar49 = in_stack_00001e20;
  piVar50 = in_stack_00001e28;
  piVar51 = in_stack_00001e30;
  piVar13 = in_stack_00001e38;
  piVar20 = in_stack_00001e40;
  if (*(long *)(unaff_x27 + 0x130) != 0) goto LAB_10119f22c;
  piVar14 = *(int **)(unaff_x29 + -0x98);
  piVar24 = *(int **)(unaff_x29 + -0xa0);
  *unaff_x25 = (byte)unaff_x26;
  unaff_x21 = in_stack_00001e00;
  if (piVar23 == (int *)0x8000000000000001) goto LAB_10119f24c;
LAB_10119f284:
  FUN_100d86ae0(in_stack_00000068);
  if (piVar23 == unaff_x20) {
    __ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor23record_imported_session17h006d15a585c30363E
              (unaff_x27 + 8,*(undefined8 *)(unaff_x27 + 0x104),*(undefined8 *)(unaff_x27 + 0x106),
               &stack0x00001db0);
    piVar23 = piVar16;
    piVar24 = in_stack_00001de8;
    piVar14 = in_stack_00001df0;
    goto LAB_10119f654;
  }
  in_stack_00001df8 = (int *)0x8000000000000005;
  in_stack_00001e40 = (int *)0xffffffffffff80a5;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    if (1 < bRam000000010b627d98 - 1) {
      if (bRam000000010b627d98 != 0) {
        cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76b2a429ace4dd73E
                          );
        unaff_x26 = (int *)0x1;
        unaff_x20 = (int *)0x8000000000000000;
        unaff_x28 = 0x2a40;
        if (cVar7 != '\0') goto LAB_10119f318;
      }
      goto LAB_10119f4a4;
    }
LAB_10119f318:
    uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                       (
                       ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76b2a429ace4dd73E
                       );
    piVar16 = 
    ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76b2a429ace4dd73E
    ;
    if ((uVar10 & 1) == 0) goto LAB_10119f4a4;
    in_stack_00006c50 = (int *)&UNK_108cb3907;
    in_stack_00006c58 = (int *)0x49;
    in_stack_00006868 = *(int **)(unaff_x27 + 0x104);
    *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00006868;
    in_stack_00004328 = (int *)&stack0x00006c50;
    in_stack_00004330 = (int *)&UNK_10b208fd0;
    in_stack_00004338 = (int *)&stack0x00006980;
    in_stack_00004340 = (int *)&UNK_10b215b00;
    in_stack_00004348 = (int *)(unaff_x29 + -0xf0);
    in_stack_00004350 = (int *)&UNK_10b216450;
    in_stack_000069d8 = (int *)&stack0x00004328;
    in_stack_000069e0 = (int *)0x3;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(piVar16,&stack0x000069d0);
    piVar16 = 
    ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76b2a429ace4dd73E
    ;
    in_stack_000069d0 = unaff_x26;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar9 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00006d60);
      piVar22 = piVar16;
      if (iVar9 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (piVar16,puVar3,puVar2,&stack0x00006d60,&stack0x000069d0);
      }
    }
  }
  else {
LAB_10119f4a4:
    piVar16 = 
    ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76b2a429ace4dd73E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar9 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00001dc8);
      piVar22 = piVar16;
      if (iVar9 != 0) {
        in_stack_00006c50 = (int *)&UNK_108cb3907;
        in_stack_00006c58 = (int *)0x49;
        in_stack_00006868 = *(int **)(unaff_x27 + 0x104);
        *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00006868;
        in_stack_00004328 = (int *)&stack0x00006c50;
        in_stack_00004330 = (int *)&UNK_10b208fd0;
        in_stack_00004338 = (int *)&stack0x00006980;
        in_stack_00004340 = (int *)&UNK_10b215b00;
        in_stack_00004348 = (int *)(unaff_x29 + -0xf0);
        in_stack_00004350 = (int *)&UNK_10b216450;
        in_stack_000069d8 = (int *)&stack0x00004328;
        in_stack_000069e0 = (int *)0x3;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (piVar16,puVar3,puVar2,&stack0x00006d60,&stack0x000069d0);
        in_stack_000069d0 = unaff_x26;
      }
    }
  }
  if (piVar23 != (int *)0x0) {
    _free(piVar24);
  }
LAB_10119f654:
  if (*(long *)(unaff_x27 + 0x102) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0x104));
  }
  piVar16 = unaff_x27 + 0xea;
  puVar21 = *(undefined8 **)(unaff_x27 + 0xe4);
  if (*(undefined8 **)(unaff_x27 + 0xe4) != *(undefined8 **)(unaff_x27 + 0xe8)) goto LAB_10119ddf4;
LAB_10119f678:
  *(int **)piVar16 = unaff_x20;
  piVar16 = piVar23;
  in_stack_00001de0 = piVar24;
  in_stack_00001df0 = piVar14;
LAB_10119f67c:
  FUN_100cc6ea4(unaff_x27 + 0xe2);
  piVar22 = unaff_x27 + 0xde;
  plVar17 = *(long **)(unaff_x27 + 0xde);
  iVar9 = unaff_x27[0xe0];
  if (iVar9 != 0) {
    plVar17 = plVar17 + 2;
    if ((char)*plVar17 == '\0') {
      *(char *)plVar17 = (char)unaff_x26;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (plVar17,extraout_x1,1000000000);
    }
    FUN_1060fa678(plVar17,iVar9,plVar17);
    plVar17 = *(long **)piVar22;
  }
  lVar5 = *plVar17;
  *plVar17 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(piVar22);
  }
LAB_10119f6d8:
  if ((*(byte *)((long)unaff_x27 + 0x371) & 1) != 0) {
    piVar22 = *(int **)(unaff_x27 + 4);
    lVar5 = *(long *)(unaff_x27 + 6);
    if (lVar5 != 0) {
      piVar23 = piVar22 + 8;
      do {
        if (*(long *)(piVar23 + -8) != 0) {
          _free(*(undefined8 *)(piVar23 + -6));
        }
        if (*(long *)(piVar23 + -2) != 0) {
          _free(*(undefined8 *)piVar23);
        }
        if (*(int **)(piVar23 + 4) != unaff_x20 && *(int **)(piVar23 + 4) != (int *)0x0) {
          _free(*(undefined8 *)(piVar23 + 6));
        }
        piVar23 = piVar23 + 0x12;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(long *)(unaff_x27 + 2) != 0) {
      _free(piVar22);
    }
  }
  if ((*(byte *)((long)unaff_x27 + 0x372) & 1) != 0) {
    lVar5 = **(long **)(unaff_x27 + 0xda);
    **(long **)(unaff_x27 + 0xda) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x27 + 0xda);
    }
  }
LAB_10119f770:
  FUN_100cfc3f0(unaff_x27 + 8);
  *(char *)(unaff_x27 + 0xdc) = (char)unaff_x26;
  if (*unaff_x27 == 0) {
    FUN_100d9c19c(unaff_x27 + 2);
  }
  *unaff_x27 = (int)unaff_x26;
  piVar15 = in_stack_00004340;
  piVar47 = in_stack_00004348;
  piVar48 = in_stack_00004350;
  piVar52 = in_stack_00004358;
  piVar49 = in_stack_00004360;
  piVar50 = in_stack_00004368;
  pcVar53 = (char *)in_stack_00004378;
  piVar23 = in_stack_00004380;
joined_r0x00010119f798:
  in_stack_00004380 = in_stack_00001e38;
  in_stack_00004378 = in_stack_00001e30;
  in_stack_00004368 = in_stack_00001e20;
  in_stack_00004360 = in_stack_00001e18;
  in_stack_00004358 = in_stack_00001e10;
  in_stack_00004350 = in_stack_00001e08;
  in_stack_00004348 = unaff_x21;
  in_stack_00004340 = in_stack_00001df8;
  iVar9 = in_stack_00000088._4_4_;
  if (iVar9 != 0) {
LAB_10119d82c:
    lVar5 = *in_stack_00000080;
    piVar51 = (int *)(lVar5 + 0x7728);
    in_stack_00001df8 = in_stack_00004340;
    unaff_x21 = in_stack_00004348;
    in_stack_00001e08 = in_stack_00004350;
    in_stack_00001e10 = in_stack_00004358;
    in_stack_00001e18 = in_stack_00004360;
    in_stack_00001e20 = in_stack_00004368;
    in_stack_00001e30 = in_stack_00004378;
    in_stack_00001e38 = in_stack_00004380;
    if (*piVar51 != 0) {
      iVar8 = 0;
      in_stack_00004340 = piVar15;
      in_stack_00004348 = piVar47;
      in_stack_00004350 = piVar48;
      in_stack_00004358 = piVar52;
      in_stack_00004360 = piVar49;
      in_stack_00004368 = piVar50;
      in_stack_00004378 = (int *)pcVar53;
      in_stack_00004380 = piVar23;
      if (*piVar51 == 1) {
LAB_10119d7e8:
        do {
          unaff_x28 = 0x2a40;
          unaff_x26 = (int *)0x1;
          unaff_x20 = (int *)0x8000000000000000;
          in_stack_00000088._4_4_ = iVar9 + -1;
          piVar15 = in_stack_00004340;
          piVar47 = in_stack_00004348;
          piVar48 = in_stack_00004350;
          piVar52 = in_stack_00004358;
          piVar49 = in_stack_00004360;
          piVar50 = in_stack_00004368;
          pcVar53 = (char *)in_stack_00004378;
          piVar23 = in_stack_00004380;
          if (iVar8 == 1) goto joined_r0x00010119f798;
          if (iVar8 == 0) goto code_r0x00010119d7f4;
          iVar8 = iVar8 + -2;
        } while( true );
      }
      goto LAB_10119fa1c;
    }
    pbVar1 = (byte *)(lVar5 + 0x90a0);
    bVar6 = *(byte *)(lVar5 + 0x90a8);
    if (bVar6 < 2) {
      if (bVar6 == 0) {
        piVar13 = *(int **)(lVar5 + 0x7738);
        piVar20 = piVar13 + *(long *)(lVar5 + 0x7740) * 0x2a;
        *(int **)(lVar5 + 0x7a90) = piVar13;
        *(int **)(lVar5 + 0x7a98) = piVar13;
        *(undefined8 *)(lVar5 + 0x7aa0) = *(undefined8 *)(lVar5 + 0x7730);
        *(int **)(lVar5 + 0x7aa8) = piVar20;
        if (piVar13 != piVar20) goto LAB_10119d8b4;
LAB_10119ef84:
        *(undefined8 *)(lVar5 + 0x7ab0) = 0x8000000000000000;
        piVar22 = piVar13;
        in_stack_00001df8 = in_stack_00004340;
        unaff_x21 = in_stack_00004348;
        in_stack_00001e08 = in_stack_00004350;
        in_stack_00001e10 = in_stack_00004358;
        in_stack_00001e18 = in_stack_00004360;
        in_stack_00001e20 = in_stack_00004368;
        in_stack_00001e30 = in_stack_00004378;
        in_stack_00001e38 = in_stack_00004380;
LAB_10119ef8c:
        in_stack_00004380 = piVar23;
        in_stack_00004378 = (int *)pcVar53;
        in_stack_00004368 = piVar50;
        in_stack_00004360 = piVar49;
        in_stack_00004358 = piVar52;
        in_stack_00004350 = piVar48;
        in_stack_00004348 = piVar47;
        in_stack_00004340 = piVar15;
        if ((long)piVar20 - (long)piVar22 != 0) {
          uVar10 = (ulong)((long)piVar20 - (long)piVar22) / 0xa8;
          do {
            if (*(long *)(piVar22 + 0x24) != -0x8000000000000000 && *(long *)(piVar22 + 0x24) != 0)
            {
              _free(*(undefined8 *)(piVar22 + 0x26));
            }
            FUN_100e589f4(piVar22);
            piVar22 = piVar22 + 0x2a;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (*(long *)(lVar5 + 0x7aa0) != 0) {
          _free(*(undefined8 *)(lVar5 + 0x7a90));
        }
        FUN_100cfc3f0(lVar5 + 0x7748);
        *(undefined1 *)(lVar5 + 0x90a8) = 1;
        if (*piVar51 == 0) {
          FUN_100d9c058(lVar5 + 0x7730);
        }
        iVar8 = 0;
        *piVar51 = 1;
        goto LAB_10119d7e8;
      }
      goto LAB_10119fa78;
    }
    if (bVar6 != 3) goto LAB_10119fa84;
    bVar6 = *pbVar1;
    if (bVar6 < 2) {
      if (bVar6 == 0) {
        lVar18 = *(long *)(lVar5 + 0x7c00);
        do {
          *(undefined8 *)(lVar5 + 0x7ca8) = *(undefined8 *)(lVar5 + 0x7bf8);
          *(undefined8 *)(lVar5 + 0x7c20) = *(undefined8 *)(lVar5 + 0x7b70);
          *(undefined8 *)(lVar5 + 0x7c18) = *(undefined8 *)(lVar5 + 0x7b68);
          *(undefined8 *)(lVar5 + 0x7c30) = *(undefined8 *)(lVar5 + 0x7b80);
          *(undefined8 *)(lVar5 + 0x7c28) = *(undefined8 *)(lVar5 + 0x7b78);
          *(undefined8 *)(lVar5 + 0x7c10) = *(undefined8 *)(lVar5 + 0x7b60);
          *(undefined8 *)(lVar5 + 0x7c08) = *(undefined8 *)(lVar5 + 0x7b58);
          *(undefined8 *)(lVar5 + 0x7c60) = *(undefined8 *)(lVar5 + 0x7bb0);
          *(undefined8 *)(lVar5 + 0x7c58) = *(undefined8 *)(lVar5 + 0x7ba8);
          *(undefined8 *)(lVar5 + 0x7c70) = *(undefined8 *)(lVar5 + 0x7bc0);
          *(undefined8 *)(lVar5 + 0x7c68) = *(undefined8 *)(lVar5 + 0x7bb8);
          *(undefined8 *)(lVar5 + 0x7c40) = *(undefined8 *)(lVar5 + 0x7b90);
          *(undefined8 *)(lVar5 + 0x7c38) = *(undefined8 *)(lVar5 + 0x7b88);
          *(undefined8 *)(lVar5 + 0x7c50) = *(undefined8 *)(lVar5 + 0x7ba0);
          *(undefined8 *)(lVar5 + 0x7c48) = *(undefined8 *)(lVar5 + 0x7b98);
          *(undefined8 *)(lVar5 + 0x7c90) = *(undefined8 *)(lVar5 + 0x7be0);
          *(undefined8 *)(lVar5 + 0x7c88) = *(undefined8 *)(lVar5 + 0x7bd8);
          *(undefined8 *)(lVar5 + 0x7ca0) = *(undefined8 *)(lVar5 + 0x7bf0);
          *(undefined8 *)(lVar5 + 0x7c98) = *(undefined8 *)(lVar5 + 0x7be8);
          *(undefined8 *)(lVar5 + 0x7c80) = *(undefined8 *)(lVar5 + 0x7bd0);
          *(undefined8 *)(lVar5 + 0x7c78) = *(undefined8 *)(lVar5 + 0x7bc8);
          uVar11 = 0;
          if (*(long *)(lVar5 + 0x7c98) != -0x8000000000000000) {
            uVar11 = *(undefined8 *)(lVar5 + 0x7ca0);
          }
          *(undefined1 *)(lVar5 + 0x90a1) = 0;
          *(undefined8 *)(lVar5 + 0x7d08) = *(undefined8 *)(lVar5 + 0x7bb0);
          *(undefined8 *)(lVar5 + 32000) = *(undefined8 *)(lVar5 + 0x7ba8);
          *(undefined8 *)(lVar5 + 0x7d18) = *(undefined8 *)(lVar5 + 0x7bc0);
          *(undefined8 *)(lVar5 + 0x7d10) = *(undefined8 *)(lVar5 + 0x7bb8);
          *(undefined8 *)(lVar5 + 0x7d28) = *(undefined8 *)(lVar5 + 0x7bd0);
          *(undefined8 *)(lVar5 + 0x7d20) = *(undefined8 *)(lVar5 + 0x7bc8);
          *(undefined8 *)(lVar5 + 0x7d38) = *(undefined8 *)(lVar5 + 0x7be0);
          *(undefined8 *)(lVar5 + 0x7d30) = *(undefined8 *)(lVar5 + 0x7bd8);
          *(undefined8 *)(lVar5 + 0x7cc8) = *(undefined8 *)(lVar5 + 0x7b70);
          *(undefined8 *)(lVar5 + 0x7cc0) = *(undefined8 *)(lVar5 + 0x7b68);
          *(undefined8 *)(lVar5 + 0x7cd8) = *(undefined8 *)(lVar5 + 0x7b80);
          *(undefined8 *)(lVar5 + 0x7cd0) = *(undefined8 *)(lVar5 + 0x7b78);
          *(undefined8 *)(lVar5 + 0x7ce8) = *(undefined8 *)(lVar5 + 0x7b90);
          *(undefined8 *)(lVar5 + 0x7ce0) = *(undefined8 *)(lVar5 + 0x7b88);
          *(undefined8 *)(lVar5 + 0x7cf8) = *(undefined8 *)(lVar5 + 0x7ba0);
          *(undefined8 *)(lVar5 + 0x7cf0) = *(undefined8 *)(lVar5 + 0x7b98);
          *(undefined8 *)(lVar5 + 0x7cb8) = *(undefined8 *)(lVar5 + 0x7b60);
          *(undefined8 *)(lVar5 + 0x7cb0) = *(undefined8 *)(lVar5 + 0x7b58);
          *(long *)(lVar5 + 0x7d40) = lVar18 + 0x18;
          *(undefined8 *)(lVar5 + 0x7d48) = uVar11;
          *(undefined8 *)(lVar5 + 0x7d50) = *(undefined8 *)(lVar5 + 0x7ca8);
          *(undefined1 *)(lVar5 + 0x82c0) = 0;
          piVar13 = piVar16;
          piVar20 = in_stack_00001de0;
          piVar46 = in_stack_00001df0;
          in_stack_00001df8 = in_stack_00004340;
          unaff_x21 = in_stack_00004348;
          in_stack_00001e08 = in_stack_00004350;
          in_stack_00001e10 = in_stack_00004358;
          in_stack_00001e18 = in_stack_00004360;
          in_stack_00001e20 = in_stack_00004368;
          in_stack_00001e30 = in_stack_00004378;
          in_stack_00001e38 = in_stack_00004380;
          piVar16 = in_stack_00004328;
          in_stack_00001de0 = in_stack_00004330;
          in_stack_00001df0 = in_stack_00004338;
          in_stack_00004340 = piVar15;
          in_stack_00004348 = piVar47;
          in_stack_00004350 = piVar48;
          in_stack_00004358 = piVar52;
          in_stack_00004360 = piVar49;
          in_stack_00004368 = piVar50;
          in_stack_00004378 = (int *)pcVar53;
          in_stack_00004380 = piVar23;
LAB_10119da68:
          FUN_1009ac28c(&stack0x00004328,lVar5 + 0x7cb0,in_stack_00000078);
          in_stack_00004328 = piVar16;
          in_stack_00004330 = in_stack_00001de0;
          in_stack_00004338 = in_stack_00001df0;
          if (piVar16 == (int *)0x8000000000000001) {
            *pbVar1 = 3;
LAB_10119dbb8:
            in_stack_00001df0 = piVar46;
            in_stack_00001de0 = piVar20;
            piVar16 = piVar13;
            iVar8 = 0;
            *(undefined1 *)(lVar5 + 0x90a8) = 3;
            in_stack_00000070._4_4_ = 1;
            goto LAB_10119d7e8;
          }
          in_stack_00001e28 = (int *)CONCAT44(in_stack_00004374,in_stack_00004370);
          FUN_100d26b98(lVar5 + 0x7cb0);
          if (piVar16 == (int *)0x8000000000000000) {
            in_stack_000069d0 = (int *)0x0;
            in_stack_000069d8 = (int *)0x1;
            in_stack_000069e0 = (int *)0x0;
            in_stack_00004338 = (int *)0x60000020;
            in_stack_00004328 = (int *)&stack0x000069d0;
            in_stack_00004330 = (int *)&UNK_10b209290;
            iVar8 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                              (&stack0x00006980,&stack0x00004328);
            if (iVar8 != 0) {
              func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x00006d60,&UNK_10b235000,&UNK_10b2346c0
                                 );
              goto LAB_10119fb98;
            }
            piVar24 = (int *)0x0;
            if (((ulong)in_stack_00001de0 & 3) == 1) {
              piVar22 = (int *)((long)in_stack_00001de0 + -1);
              uVar11 = *(undefined8 *)piVar22;
              puVar21 = *(undefined8 **)((long)in_stack_00001de0 + 7);
              pcVar4 = (code *)*puVar21;
              if (pcVar4 != (code *)0x0) {
                (*pcVar4)(uVar11);
              }
              if (puVar21[1] != 0) {
                _free(uVar11);
              }
              _free(piVar22);
              in_stack_00006c58 = (int *)0x0;
              in_stack_00006c50 = (int *)0x1;
              lVar18 = *(long *)(lVar5 + 0x7c98);
            }
            else {
              in_stack_00006c58 = (int *)0x0;
              in_stack_00006c50 = (int *)0x1;
              lVar18 = *(long *)(lVar5 + 0x7c98);
              piVar22 = in_stack_00001de0;
            }
          }
          else {
            FUN_100e652d8(&stack0x00001de0);
            piVar24 = (int *)0x8000000000000000;
            lVar18 = *(long *)(lVar5 + 0x7c98);
          }
          if ((lVar18 != -0x8000000000000000) && (lVar18 != 0)) {
            _free(*(undefined8 *)(lVar5 + 0x7ca0));
          }
          *(int **)(unaff_x29 + -0xe8) = in_stack_00006c58;
          *(int **)(unaff_x29 + -0xf0) = in_stack_00006c50;
          pbVar1[0] = 1;
          pbVar1[1] = 0;
          piVar13 = piVar16;
          piVar20 = in_stack_00001de0;
          piVar46 = in_stack_00001df0;
          in_stack_00001df8 = in_stack_00004340;
          unaff_x21 = in_stack_00004348;
          in_stack_00001e08 = in_stack_00004350;
          in_stack_00001e10 = in_stack_00004358;
          in_stack_00001e18 = in_stack_00004360;
          in_stack_00001e20 = in_stack_00004368;
          in_stack_00001e30 = in_stack_00004378;
          in_stack_00001e38 = in_stack_00004380;
          if (piVar24 == (int *)0x8000000000000001) goto LAB_10119dbb8;
          piVar13 = *(int **)(unaff_x29 + -0xe8);
          piVar22 = *(int **)(unaff_x29 + -0xf0);
          if (*(char *)(lVar5 + 0x90a0) == '\x03') {
            FUN_100d26b98(lVar5 + 0x7cb0);
            if ((*(long *)(lVar5 + 0x7c98) != -0x8000000000000000) &&
               (*(long *)(lVar5 + 0x7c98) != 0)) {
              _free(*(undefined8 *)(lVar5 + 0x7ca0));
            }
            *(undefined1 *)(lVar5 + 0x90a1) = 0;
          }
          else if (*(char *)(lVar5 + 0x90a0) == '\0') {
            if ((*(long *)(lVar5 + 0x7be8) != -0x8000000000000000) &&
               (*(long *)(lVar5 + 0x7be8) != 0)) {
              _free(*(undefined8 *)(lVar5 + 0x7bf0));
            }
            FUN_100e589f4(lVar5 + 0x7b58);
          }
          piVar15 = in_stack_00004340;
          piVar47 = in_stack_00004348;
          piVar48 = in_stack_00004350;
          piVar52 = in_stack_00004358;
          piVar49 = in_stack_00004360;
          piVar50 = in_stack_00004368;
          pcVar53 = (char *)in_stack_00004378;
          piVar23 = in_stack_00004380;
          if (piVar24 != (int *)0x8000000000000000) {
            in_stack_00001e40 = (int *)0xffffffffffff80a5;
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
               (((bRam000000010b627db0 - 1 < 2 ||
                 ((bRam000000010b627db0 != 0 &&
                  (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
                                     ), cVar7 != '\0')))) &&
                (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
                                    ),
                lVar18 = 
                ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
                , (uVar10 & 1) != 0)))) {
              in_stack_00006c50 = (int *)&UNK_108cb38dd;
              in_stack_00006c58 = (int *)0x55;
              *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00001de0;
              in_stack_00004328 = (int *)&stack0x00006c50;
              in_stack_00004330 = (int *)&UNK_10b208fd0;
              in_stack_00004338 = (int *)(unaff_x29 + -0xf0);
              in_stack_000069d0 = (int *)0x1;
              in_stack_000069d8 = (int *)&stack0x00004328;
              in_stack_000069e0 = (int *)0x2;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar18,&stack0x000069d0);
              lVar18 = 
              ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
              ;
              piVar15 = (int *)&UNK_10b215b00;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00006d60);
                if (iVar8 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar18,puVar3,puVar2,&stack0x00006d60,&stack0x000069d0);
                }
              }
            }
            else {
              lVar18 = 
              ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                piVar16 = *(int **)(
                                   ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
                                   + 0x20);
                piVar20 = *(int **)(
                                   ___ZN16codex_app_server18request_processors31external_agent_config_processor35ExternalAgentConfigRequestProcessor6import28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfe572d11d20c9861E
                                   + 0x28);
                in_stack_00006868 = (int *)0x2;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00006868);
                if (iVar8 != 0) {
                  *(undefined1 **)(unaff_x29 + -0x88) = &stack0x00001de0;
                  in_stack_000069d0 = (int *)&stack0x00006980;
                  in_stack_000069d8 = (int *)&UNK_10b208fd0;
                  in_stack_000069e0 = (int *)(unaff_x29 + -0x88);
                  piVar52 = (int *)0x2;
                  piVar47 = *(int **)(lVar18 + 0x60);
                  piVar48 = *(int **)(lVar18 + 0x68);
                  in_stack_00004330 = *(int **)(lVar18 + 0x50);
                  in_stack_00004338 = *(int **)(lVar18 + 0x58);
                  in_stack_00004328 = (int *)0x1;
                  if (in_stack_00004330 == (int *)0x0) {
                    in_stack_00004328 = (int *)0x2;
                  }
                  in_stack_00004370 = *(undefined4 *)(lVar18 + 8);
                  in_stack_00004374 = *(undefined4 *)(lVar18 + 0xc);
                  *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00006d60;
                  *(undefined1 *)(unaff_x29 + -0xe8) = 1;
                  in_stack_00006c50 = (int *)(unaff_x29 + -0xf0);
                  in_stack_00006c58 = (int *)&DAT_1061c2098;
                  piVar15 = (int *)0x1;
                  if (piVar47 == (int *)0x0) {
                    piVar15 = (int *)0x2;
                  }
                  pcVar53 = s__108b39f4f;
                  piVar23 = (int *)&stack0x00006c50;
                  (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00004328);
                  piVar49 = piVar16;
                  piVar50 = piVar20;
                }
              }
            }
            piVar16 = piVar24;
            in_stack_00001de0 = piVar22;
            in_stack_00001df0 = piVar13;
            in_stack_00004340 = (int *)0x8000000000000005;
            if (piVar24 != (int *)0x0) {
              _free(piVar22);
            }
          }
          piVar20 = *(int **)(lVar5 + 0x7aa8);
          piVar13 = *(int **)(lVar5 + 0x7a98);
          if (piVar13 == piVar20) goto LAB_10119ef84;
LAB_10119d8b4:
          piVar22 = piVar13 + 0x2a;
          *(int **)(lVar5 + 0x7a98) = piVar22;
          uVar28 = *(undefined8 *)(piVar13 + 6);
          uVar27 = *(undefined8 *)(piVar13 + 4);
          uVar26 = *(undefined8 *)(piVar13 + 10);
          uVar11 = *(undefined8 *)(piVar13 + 8);
          uVar29 = *(undefined8 *)piVar13;
          *(undefined8 *)(lVar5 + 0x7ab8) = *(undefined8 *)(piVar13 + 2);
          *(undefined8 *)(lVar5 + 0x7ab0) = uVar29;
          *(undefined8 *)(lVar5 + 0x7ac8) = uVar28;
          *(undefined8 *)(lVar5 + 0x7ac0) = uVar27;
          *(undefined8 *)(lVar5 + 0x7ad8) = uVar26;
          *(undefined8 *)(lVar5 + 0x7ad0) = uVar11;
          uVar11 = *(undefined8 *)(piVar13 + 0x14);
          uVar27 = *(undefined8 *)(piVar13 + 0x1a);
          uVar26 = *(undefined8 *)(piVar13 + 0x18);
          uVar31 = *(undefined8 *)(piVar13 + 0xe);
          uVar30 = *(undefined8 *)(piVar13 + 0xc);
          uVar29 = *(undefined8 *)(piVar13 + 0x12);
          uVar28 = *(undefined8 *)(piVar13 + 0x10);
          *(undefined8 *)(lVar5 + 0x7b08) = *(undefined8 *)(piVar13 + 0x16);
          *(undefined8 *)(lVar5 + 0x7b00) = uVar11;
          *(undefined8 *)(lVar5 + 0x7b18) = uVar27;
          *(undefined8 *)(lVar5 + 0x7b10) = uVar26;
          *(undefined8 *)(lVar5 + 0x7ae8) = uVar31;
          *(undefined8 *)(lVar5 + 0x7ae0) = uVar30;
          *(undefined8 *)(lVar5 + 0x7af8) = uVar29;
          *(undefined8 *)(lVar5 + 0x7af0) = uVar28;
          uVar28 = *(undefined8 *)(piVar13 + 0x22);
          uVar27 = *(undefined8 *)(piVar13 + 0x20);
          uVar26 = *(undefined8 *)(piVar13 + 0x26);
          uVar11 = *(undefined8 *)(piVar13 + 0x24);
          uVar30 = *(undefined8 *)(piVar13 + 0x1e);
          uVar29 = *(undefined8 *)(piVar13 + 0x1c);
          *(undefined8 *)(lVar5 + 0x7b50) = *(undefined8 *)(piVar13 + 0x28);
          *(undefined8 *)(lVar5 + 0x7b38) = uVar28;
          *(undefined8 *)(lVar5 + 0x7b30) = uVar27;
          *(undefined8 *)(lVar5 + 0x7b48) = uVar26;
          *(undefined8 *)(lVar5 + 0x7b40) = uVar11;
          *(undefined8 *)(lVar5 + 0x7b28) = uVar30;
          *(undefined8 *)(lVar5 + 0x7b20) = uVar29;
          in_stack_00001df8 = in_stack_00004340;
          unaff_x21 = in_stack_00004348;
          in_stack_00001e08 = in_stack_00004350;
          in_stack_00001e10 = in_stack_00004358;
          in_stack_00001e18 = in_stack_00004360;
          in_stack_00001e20 = in_stack_00004368;
          in_stack_00001e30 = in_stack_00004378;
          in_stack_00001e38 = in_stack_00004380;
          if (*(long *)(lVar5 + 0x7ab0) == -0x8000000000000000) goto LAB_10119ef8c;
          lVar18 = lVar5 + 0x7748;
          uVar26 = *(undefined8 *)(piVar13 + 2);
          uVar11 = *(undefined8 *)piVar13;
          uVar28 = *(undefined8 *)(piVar13 + 6);
          uVar27 = *(undefined8 *)(piVar13 + 4);
          uVar30 = *(undefined8 *)(piVar13 + 10);
          uVar29 = *(undefined8 *)(piVar13 + 8);
          uVar32 = *(undefined8 *)(piVar13 + 0xe);
          uVar31 = *(undefined8 *)(piVar13 + 0xc);
          uVar34 = *(undefined8 *)(piVar13 + 0x12);
          uVar33 = *(undefined8 *)(piVar13 + 0x10);
          uVar36 = *(undefined8 *)(piVar13 + 0x16);
          uVar35 = *(undefined8 *)(piVar13 + 0x14);
          uVar38 = *(undefined8 *)(piVar13 + 0x1a);
          uVar37 = *(undefined8 *)(piVar13 + 0x18);
          uVar40 = *(undefined8 *)(piVar13 + 0x1e);
          uVar39 = *(undefined8 *)(piVar13 + 0x1c);
          uVar42 = *(undefined8 *)(piVar13 + 0x22);
          uVar41 = *(undefined8 *)(piVar13 + 0x20);
          uVar44 = *(undefined8 *)(piVar13 + 0x26);
          uVar43 = *(undefined8 *)(piVar13 + 0x24);
          *(undefined8 *)(lVar5 + 0x7bf8) = *(undefined8 *)(piVar13 + 0x28);
          *(undefined8 *)(lVar5 + 0x7be0) = uVar42;
          *(undefined8 *)(lVar5 + 0x7bd8) = uVar41;
          *(undefined8 *)(lVar5 + 0x7bf0) = uVar44;
          *(undefined8 *)(lVar5 + 0x7be8) = uVar43;
          *(undefined8 *)(lVar5 + 0x7bc0) = uVar38;
          *(undefined8 *)(lVar5 + 0x7bb8) = uVar37;
          *(undefined8 *)(lVar5 + 0x7bd0) = uVar40;
          *(undefined8 *)(lVar5 + 0x7bc8) = uVar39;
          *(undefined8 *)(lVar5 + 0x7ba0) = uVar34;
          *(undefined8 *)(lVar5 + 0x7b98) = uVar33;
          *(undefined8 *)(lVar5 + 0x7bb0) = uVar36;
          *(undefined8 *)(lVar5 + 0x7ba8) = uVar35;
          *(undefined8 *)(lVar5 + 0x7b80) = uVar30;
          *(undefined8 *)(lVar5 + 0x7b78) = uVar29;
          *(undefined8 *)(lVar5 + 0x7b90) = uVar32;
          *(undefined8 *)(lVar5 + 0x7b88) = uVar31;
          *(undefined8 *)(lVar5 + 0x7b60) = uVar26;
          *(undefined8 *)(lVar5 + 0x7b58) = uVar11;
          *(undefined8 *)(lVar5 + 0x7b70) = uVar28;
          *(undefined8 *)(lVar5 + 0x7b68) = uVar27;
          *(long *)(lVar5 + 0x7c00) = lVar18;
          *pbVar1 = 0;
        } while( true );
      }
      func_0x000108a07af4(&UNK_10b228ac0);
    }
    else {
      piVar13 = piVar16;
      piVar20 = in_stack_00001de0;
      piVar46 = in_stack_00001df0;
      piVar16 = in_stack_00004328;
      in_stack_00001de0 = in_stack_00004330;
      in_stack_00001df0 = in_stack_00004338;
      in_stack_00004340 = piVar15;
      in_stack_00004348 = piVar47;
      in_stack_00004350 = piVar48;
      in_stack_00004358 = piVar52;
      in_stack_00004360 = piVar49;
      in_stack_00004368 = piVar50;
      in_stack_00004378 = (int *)pcVar53;
      in_stack_00004380 = piVar23;
      if (bVar6 == 3) goto LAB_10119da68;
      func_0x000108a07b10(&UNK_10b228ac0);
    }
    goto LAB_10119fb98;
  }
LAB_10119f7f4:
  if ((in_stack_00000070._4_4_ & 1) == 0) {
    piVar23 = (int *)*in_stack_00000080;
    if ((*piVar23 != 1) || (*piVar23 = 2, piVar23[0x1dca] != 1)) {
      func_0x000108a079f0(&UNK_108ca6984,0x19,&UNK_10b228b50);
      goto LAB_10119fb98;
    }
    piVar23[0x1dca] = 2;
    if (*(int *)(in_stack_00000058 + 0x6e0) == 0) {
      FUN_100d9c19c(in_stack_00000058 + 0x6e8);
    }
    if (*(int *)(in_stack_00000058 + 0x7e08) == 0) {
      FUN_100d9c058(in_stack_00000058 + 0x7e10);
    }
    if (*(char *)(in_stack_00000058 + 0x6d8) == '\x01') {
      lVar18 = *(long *)(*(long *)(in_stack_00000058 + 0x6c8) + 0x28);
      plVar17 = *(long **)(lVar18 + 0xe0);
      lVar5 = *plVar17;
      *plVar17 = lVar5 + 1;
      if (lVar5 < 0) goto LAB_10119fb98;
      plVar17 = *(long **)(lVar18 + 0xe0);
      __ZN18codex_core_plugins7manager14PluginsManager11clear_cache17h826a5e6550ad2aa8E(plVar17 + 2)
      ;
      lVar5 = *plVar17;
      *plVar17 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(&stack0x00001de0);
      }
      lVar18 = *(long *)(*(long *)(in_stack_00000058 + 0x6c8) + 0x28);
      plVar17 = *(long **)(lVar18 + 0xd8);
      lVar5 = *plVar17;
      *plVar17 = lVar5 + 1;
      if (lVar5 < 0) goto LAB_10119fb98;
      plVar17 = *(long **)(lVar18 + 0xd8);
      __ZN17codex_core_skills7manager13SkillsManager11clear_cache17h957c8b8aa5e42524E(plVar17 + 2);
      lVar5 = *plVar17;
      *plVar17 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd315346bf5060e82E(&stack0x00001de0);
      }
    }
    lVar5 = *(long *)(in_stack_00000058 + 0x6d0) + 0x10;
    *(undefined8 *)(in_stack_00000058 + 0x6e0) = 0x8000000000000028;
    *(long *)(in_stack_00000058 + 0x8d8) = lVar5;
    *(undefined1 *)(in_stack_00000058 + 0x13b0) = 0;
    _memcpy(in_stack_00000058 + 0x8e0,in_stack_00000058 + 0x6e0,0x1f8);
    *(long *)(in_stack_00000058 + 0xad8) = lVar5;
    *(undefined8 *)(in_stack_00000058 + 0xae0) = 8;
    *(undefined8 *)(in_stack_00000058 + 0xae8) = 0;
    *(undefined1 *)(in_stack_00000058 + 0xcf0) = 0;
    uVar10 = FUN_100897c70(in_stack_00000058 + 0x8e0,in_stack_00000078);
    if ((uVar10 & 1) == 0) {
      FUN_100d40d08(in_stack_00000058 + 0x8e0);
      *(undefined1 *)(in_stack_00000058 + 0x13b0) = 1;
      *(undefined1 *)(in_stack_00000058 + 0x6da) = 0;
      lVar5 = **(long **)(in_stack_00000058 + 0x6c8);
      **(long **)(in_stack_00000058 + 0x6c8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(in_stack_00000058 + 0x6c8);
      }
      lVar5 = **(long **)(in_stack_00000058 + 0x6d0);
      **(long **)(in_stack_00000058 + 0x6d0) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(in_stack_00000058 + 0x6d0);
      }
      uVar11 = 0;
      uVar12 = 1;
      goto LAB_10119f9f4;
    }
    *(undefined1 *)(in_stack_00000058 + 0x13b0) = 3;
    uVar12 = 4;
  }
  else {
LAB_10119f7fc:
    uVar12 = 3;
  }
  uVar11 = 1;
LAB_10119f9f4:
  *(undefined1 *)(in_stack_00000058 + 0x6d9) = uVar12;
  return uVar11;
code_r0x00010119d7f4:
  if (iVar9 + -1 == 0) goto LAB_10119f7f4;
  in_stack_00000088._4_4_ = iVar9 + -2;
  unaff_x27 = (int *)*in_stack_00000080;
  if (*unaff_x27 != 0) goto code_r0x00010119d810;
  in_stack_00000060 = unaff_x27 + 0xeae;
  unaff_x25 = (byte *)(unaff_x27 + 0xa8e);
  bVar6 = *(byte *)(unaff_x27 + 0xdc);
  if (bVar6 < 3) {
    if (bVar6 != 0) {
      in_stack_00000008 = &UNK_10b228b68;
      if (bVar6 == 1) {
LAB_10119fa78:
        func_0x000108a07af4(in_stack_00000008);
      }
      else {
LAB_10119fa84:
        func_0x000108a07b10(in_stack_00000008);
      }
      goto LAB_10119fb98;
    }
    *(undefined2 *)((long)unaff_x27 + 0x371) = 0x101;
    if (*(long *)(unaff_x27 + 6) == 0) goto LAB_10119f6d8;
    *(undefined1 *)((long)unaff_x27 + 0x372) = 0;
    lVar5 = *(long *)(unaff_x27 + 0xda);
    *(long *)(unaff_x27 + 0xde) = lVar5;
    *(undefined1 *)(unaff_x27 + 0xf2) = 0;
LAB_10119dc58:
    *(long *)(unaff_x27 + 0xe0) = lVar5;
    in_stack_00001de0 = (int *)0x0;
    in_stack_00001df0 = (int *)0x0;
    *(long *)(unaff_x27 + 0xe2) = lVar5 + 0x10;
    unaff_x27[0xe4] = 0;
    unaff_x27[0xe5] = 0;
    unaff_x27[0xe8] = 0;
    unaff_x27[0xe9] = 0;
    *(int **)(unaff_x27 + 0xe6) = piVar16;
    unaff_x27[0xea] = 0;
    unaff_x27[0xeb] = 0;
    unaff_x27[0xee] = 1;
    unaff_x27[0xef] = 0;
    unaff_x27[0xec] = 1;
    unaff_x27[0xed] = 0;
    *(undefined1 *)(unaff_x27 + 0xf0) = 0;
LAB_10119dcc0:
    bVar6 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                      (unaff_x27 + 0xe2,in_stack_00000078);
    if (bVar6 == 2) {
      *(undefined1 *)(unaff_x27 + 0xf2) = 3;
      *(undefined1 *)(unaff_x27 + 0xdc) = 3;
      piVar22 = (int *)0x2;
      goto joined_r0x00010119dce8;
    }
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x27 + 0xe2);
    if (*(long *)(unaff_x27 + 0xe4) != 0) {
      (**(code **)(*(long *)(unaff_x27 + 0xe4) + 0x18))(*(undefined8 *)(unaff_x27 + 0xe6));
    }
    if ((bVar6 & 1) == 0) {
      piVar22 = *(int **)(unaff_x27 + 0xe0);
    }
    else {
      plVar17 = *(long **)(unaff_x27 + 0xe0);
      lVar5 = *plVar17;
      *plVar17 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      piVar22 = (int *)0x0;
    }
    *(undefined1 *)(unaff_x27 + 0xf2) = 1;
    FUN_100e8805c(unaff_x27 + 0xde);
    if (piVar22 == (int *)0x0) goto LAB_10119e128;
    *(int **)(unaff_x27 + 0xde) = piVar22;
    unaff_x27[0xe0] = 1;
    *(undefined1 *)((long)unaff_x27 + 0x371) = 0;
    piVar24 = *(int **)(unaff_x27 + 4);
    piVar23 = *(int **)(unaff_x27 + 2);
    piVar14 = *(int **)(unaff_x27 + 6);
    __ZN29codex_external_agent_sessions33prepare_validated_session_imports17h10d620ab8e079975E
              (&stack0x00001d78,*(undefined8 *)(unaff_x27 + 10),*(undefined8 *)(unaff_x27 + 0xc),
               &stack0x00001de0);
    *(undefined8 **)(unaff_x27 + 0xe2) = in_stack_00001d80;
    *(undefined8 **)(unaff_x27 + 0xe4) = in_stack_00001d80;
    *(undefined8 *)(unaff_x27 + 0xe6) = in_stack_00001d78;
    *(undefined8 **)(unaff_x27 + 0xe8) = in_stack_00001d80 + in_stack_00001d88 * 0xc;
    piVar16 = unaff_x27 + 0xea;
    puVar21 = in_stack_00001d80;
    if (in_stack_00001d80 == in_stack_00001d80 + in_stack_00001d88 * 0xc) goto LAB_10119f678;
LAB_10119ddf4:
    *(undefined8 **)(unaff_x27 + 0xe4) = puVar21 + 0xc;
    uVar27 = *puVar21;
    uVar26 = puVar21[3];
    uVar11 = puVar21[2];
    *(undefined8 *)(piVar16 + 2) = puVar21[1];
    *(undefined8 *)piVar16 = uVar27;
    *(undefined8 *)(piVar16 + 6) = uVar26;
    *(undefined8 *)(piVar16 + 4) = uVar11;
    uVar11 = puVar21[8];
    uVar27 = puVar21[0xb];
    uVar26 = puVar21[10];
    uVar31 = puVar21[5];
    uVar30 = puVar21[4];
    uVar29 = puVar21[7];
    uVar28 = puVar21[6];
    *(undefined8 *)(piVar16 + 0x12) = puVar21[9];
    *(undefined8 *)(piVar16 + 0x10) = uVar11;
    *(undefined8 *)(piVar16 + 0x16) = uVar27;
    *(undefined8 *)(piVar16 + 0x14) = uVar26;
    *(undefined8 *)(piVar16 + 10) = uVar31;
    *(undefined8 *)(piVar16 + 8) = uVar30;
    *(undefined8 *)(piVar16 + 0xe) = uVar29;
    *(undefined8 *)(piVar16 + 0xc) = uVar28;
    piVar16 = piVar23;
    in_stack_00001de0 = piVar24;
    in_stack_00001df0 = piVar14;
    if (*(int **)(unaff_x27 + 0xea) == unaff_x20) goto LAB_10119f67c;
    uVar26 = puVar21[1];
    uVar11 = *puVar21;
    uVar28 = puVar21[3];
    uVar27 = puVar21[2];
    uVar32 = puVar21[9];
    uVar31 = puVar21[8];
    uVar30 = puVar21[0xb];
    uVar29 = puVar21[10];
    uVar33 = puVar21[4];
    uVar35 = puVar21[7];
    uVar34 = puVar21[6];
    *(undefined8 *)(unaff_x27 + 0x10c) = puVar21[5];
    *(undefined8 *)(unaff_x27 + 0x10a) = uVar33;
    *(undefined8 *)(unaff_x27 + 0x110) = uVar35;
    *(undefined8 *)(unaff_x27 + 0x10e) = uVar34;
    *(undefined8 *)(unaff_x27 + 0x114) = uVar32;
    *(undefined8 *)(unaff_x27 + 0x112) = uVar31;
    *(undefined8 *)(unaff_x27 + 0x118) = uVar30;
    *(undefined8 *)(unaff_x27 + 0x116) = uVar29;
    *(undefined8 *)(unaff_x27 + 0x104) = uVar26;
    *(undefined8 *)(unaff_x27 + 0x102) = uVar11;
    *(undefined8 *)(unaff_x27 + 0x108) = uVar28;
    *(undefined8 *)(unaff_x27 + 0x106) = uVar27;
    piVar23 = unaff_x27 + 8;
    in_stack_00000068 = unaff_x27 + 0x11a;
    *(undefined8 *)(unaff_x27 + 0x124) = *(undefined8 *)(unaff_x27 + 0x112);
    *(undefined8 *)(unaff_x27 + 0x122) = *(undefined8 *)(unaff_x27 + 0x110);
    *(undefined8 *)(unaff_x27 + 0x128) = *(undefined8 *)(unaff_x27 + 0x116);
    *(undefined8 *)(unaff_x27 + 0x126) = *(undefined8 *)(unaff_x27 + 0x114);
    *(undefined8 *)(unaff_x27 + 0x12a) = *(undefined8 *)(unaff_x27 + 0x118);
    *(undefined8 *)(unaff_x27 + 0x11c) = *(undefined8 *)(unaff_x27 + 0x10a);
    *(undefined8 *)in_stack_00000068 = *(undefined8 *)(unaff_x27 + 0x108);
    *(undefined8 *)(unaff_x27 + 0x120) = *(undefined8 *)(unaff_x27 + 0x10e);
    *(undefined8 *)(unaff_x27 + 0x11e) = *(undefined8 *)(unaff_x27 + 0x10c);
    *(int **)(unaff_x27 + 300) = piVar23;
    *unaff_x25 = 0;
LAB_10119de70:
    *(undefined1 *)((long)unaff_x27 + 0x2a3d) = 0;
    *(undefined2 *)((long)unaff_x27 + 0x2a3b) = 0;
    *(int **)(unaff_x27 + 0x12e) = piVar23;
    uVar26 = *(undefined8 *)(in_stack_00000068 + 2);
    uVar11 = *(undefined8 *)in_stack_00000068;
    *(undefined8 *)(unaff_x27 + 0x134) = *(undefined8 *)(in_stack_00000068 + 4);
    *(undefined8 *)(unaff_x27 + 0x132) = uVar26;
    *(undefined8 *)(unaff_x27 + 0x130) = uVar11;
    *(undefined8 *)(unaff_x27 + 0x138) = *(undefined8 *)(unaff_x27 + 0x128);
    *(undefined8 *)(unaff_x27 + 0x136) = *(undefined8 *)(unaff_x27 + 0x126);
    *(undefined8 *)(unaff_x27 + 0x13a) = *(undefined8 *)(unaff_x27 + 0x12a);
    unaff_x25[1] = 1;
    unaff_x25[2] = 1;
    *(undefined8 *)(unaff_x27 + 0xa92) = *(undefined8 *)(unaff_x27 + 0x122);
    *(undefined8 *)(unaff_x27 + 0xa90) = *(undefined8 *)(unaff_x27 + 0x120);
    *(undefined8 *)(unaff_x27 + 0xa94) = *(undefined8 *)(unaff_x27 + 0x124);
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
              (&stack0x00006c50,*(undefined8 *)(unaff_x27 + 0x132),
               *(undefined8 *)(unaff_x27 + 0x134));
    piVar16 = in_stack_00006c50;
    piVar15 = in_stack_00006c58;
    if (in_stack_00006c50 == unaff_x20) {
      piVar22 = (int *)0x1;
      if ((in_stack_00006c60 != (int *)0x0) &&
         (piVar22 = (int *)_malloc(in_stack_00006c60), piVar22 == (int *)0x0)) {
        func_0x0001087c9084(1,in_stack_00006c60);
        goto LAB_10119fb98;
      }
      _memcpy(piVar22,in_stack_00006c58,in_stack_00006c60);
      piVar16 = in_stack_00006c60;
      piVar15 = piVar22;
    }
    lVar5 = *(long *)(unaff_x27 + 0x12e);
    lVar18 = -0x8000000000000000;
    if (*(long *)(lVar5 + 0x300) == -0x8000000000000000) {
      lVar25 = -0x8000000000000000;
      lVar19 = *(long *)(lVar5 + 0x318);
    }
    else {
      piVar22 = *(int **)(lVar5 + 0x308);
      lVar25 = *(long *)(lVar5 + 0x310);
      in_stack_00000028 = 1;
      if ((lVar25 != 0) && (in_stack_00000028 = _malloc(lVar25), in_stack_00000028 == 0)) {
        func_0x0001087c9084(1,lVar25);
        goto LAB_10119fb98;
      }
      _memcpy(in_stack_00000028,piVar22,lVar25);
      lVar5 = *(long *)(unaff_x27 + 0x12e);
      lVar19 = *(long *)(lVar5 + 0x318);
    }
    if (lVar19 != -0x8000000000000000) {
      uVar11 = *(undefined8 *)(lVar5 + 800);
      lVar18 = *(long *)(lVar5 + 0x328);
      piVar22 = (int *)0x1;
      if ((lVar18 != 0) && (piVar22 = (int *)_malloc(lVar18), piVar22 == (int *)0x0)) {
        func_0x0001087c9084(1,lVar18);
        goto LAB_10119fb98;
      }
      _memcpy(piVar22,uVar11,lVar18);
    }
    *(int **)(unaff_x27 + 0xaa2) = unaff_x20;
    unaff_x25[0x1cf] = 7;
    unaff_x25[0x1c8] = 2;
    unaff_x25[0x1cd] = 3;
    unaff_x25[0x1ce] = 3;
    unaff_x25[0x1c9] = 2;
    unaff_x25[0x1ca] = 2;
    unaff_x25[0x1cb] = 2;
    unaff_x25[0x1cc] = 2;
    unaff_x27[0xa96] = 0;
    unaff_x27[0xa97] = 0;
    unaff_x27[0xa98] = 8;
    unaff_x27[0xa99] = 0;
    *(undefined8 *)(unaff_x25 + 0x38) = in_stack_00000048;
    *(undefined8 *)(unaff_x25 + 0x30) = in_stack_00000040;
    in_stack_00001e00 = *(int **)(unaff_x27 + 0xa9e);
    in_stack_00001df8 = *(int **)(unaff_x27 + 0xa9c);
    in_stack_00001e08 = *(int **)(unaff_x27 + 0xaa0);
    in_stack_00001e18 = *(int **)(unaff_x27 + 0xaa4);
    in_stack_00001e10 = *(int **)(unaff_x27 + 0xaa2);
    in_stack_00001e20 = *(int **)(unaff_x27 + 0xaa6);
    in_stack_00001df0 = *(int **)(unaff_x27 + 0xa9a);
    in_stack_000069d8 = *(int **)(unaff_x27 + 0xa98);
    in_stack_000069d0 = *(int **)(unaff_x27 + 0xa96);
    *(byte *)((long)unaff_x27 + 0x2dc3) = unaff_x25[0x1d3];
    *(undefined4 *)((long)unaff_x27 + 0x2dbf) = *(undefined4 *)(unaff_x25 + 0x1cf);
    *(int **)(unaff_x27 + 0xb14) = in_stack_00001e20;
    *(int **)(unaff_x27 + 0xb16) = piVar16;
    *(int **)(unaff_x27 + 0xb18) = piVar15;
    *(int **)(unaff_x27 + 0xb1a) = in_stack_00006c60;
    *(undefined8 *)(unaff_x27 + 0xb20) = *(undefined8 *)(unaff_x27 + 0xab2);
    *(undefined8 *)(unaff_x27 + 0xb26) = *(undefined8 *)(unaff_x27 + 0xab8);
    *(undefined8 *)(unaff_x27 + 0xb2c) = *(undefined8 *)(unaff_x27 + 0xabe);
    *(undefined8 *)(unaff_x27 + 0xb32) = *(undefined8 *)(unaff_x27 + 0xac4);
    *(long *)(unaff_x27 + 0xb36) = in_stack_00000028;
    *(long *)(unaff_x27 + 0xb34) = lVar25;
    *(long *)(unaff_x27 + 0xb38) = lVar25;
    *(int **)(unaff_x27 + 0xb3c) = piVar22;
    *(long *)(unaff_x27 + 0xb3a) = lVar18;
    *(long *)(unaff_x27 + 0xb3e) = lVar18;
    *(undefined8 *)(unaff_x27 + 0xb44) = *(undefined8 *)(unaff_x27 + 0xad6);
    *(undefined8 *)(unaff_x27 + 0xb4a) = *(undefined8 *)(unaff_x27 + 0xadc);
    *(undefined8 *)(unaff_x27 + 0xb50) = *(undefined8 *)(unaff_x27 + 0xae2);
    *(undefined8 *)(unaff_x27 + 0xb56) = *(undefined8 *)(unaff_x27 + 0xae8);
    *(undefined8 *)(unaff_x27 + 0xb5c) = *(undefined8 *)(unaff_x27 + 0xaee);
    *(undefined8 *)(unaff_x27 + 0xb62) = *(undefined8 *)(unaff_x27 + 0xaf4);
    unaff_x27[0xaf6] = 3;
    unaff_x27[0xaf7] = -0x80000000;
    uVar26 = *(undefined8 *)(unaff_x27 + 0xaf8);
    uVar11 = *(undefined8 *)(unaff_x27 + 0xaf6);
    uVar28 = *(undefined8 *)(unaff_x27 + 0xafc);
    uVar27 = *(undefined8 *)(unaff_x27 + 0xafa);
    *(undefined8 *)(unaff_x27 + 0xb6c) = *(undefined8 *)(unaff_x27 + 0xafe);
    *(undefined1 *)(unaff_x27 + 0xb6f) = 2;
    unaff_x25[0x385] = 3;
    unaff_x25[0x386] = 3;
    *(int **)(unaff_x27 + 0xb72) = piVar23 + 0x12;
    *(int **)(unaff_x27 + 0xb0a) = in_stack_00001df8;
    *(int **)(unaff_x27 + 0xb08) = in_stack_00001df0;
    *(int **)(unaff_x27 + 0xb0e) = in_stack_00001e08;
    *(int **)(unaff_x27 + 0xb0c) = in_stack_00001e00;
    *(int **)(unaff_x27 + 0xb12) = in_stack_00001e18;
    *(int **)(unaff_x27 + 0xb10) = in_stack_00001e10;
    *(int **)(unaff_x27 + 0xaa8) = unaff_x20;
    *(int **)(unaff_x27 + 0xaae) = unaff_x20;
    *(int **)(unaff_x27 + 0xab4) = unaff_x20;
    unaff_x27[0xaf0] = 1;
    unaff_x27[0xaf1] = -0x80000000;
    *(int **)(unaff_x27 + 0xaba) = unaff_x20;
    *(int **)(unaff_x27 + 0xac0) = unaff_x20;
    *(int **)(unaff_x27 + 0xac6) = unaff_x20;
    *(int **)(unaff_x27 + 0xacc) = unaff_x20;
    *(int **)(unaff_x27 + 0xad2) = unaff_x20;
    *(int **)(unaff_x27 + 0xad8) = unaff_x20;
    *(int **)(unaff_x27 + 0xade) = unaff_x20;
    *(int **)(unaff_x27 + 0xae4) = unaff_x20;
    *(int **)(unaff_x27 + 0xaea) = unaff_x20;
    *(int **)(unaff_x27 + 0xb06) = in_stack_000069d8;
    *(int **)(unaff_x27 + 0xb04) = in_stack_000069d0;
    *(undefined8 *)(unaff_x27 + 0xb24) = *(undefined8 *)(unaff_x27 + 0xab6);
    *(undefined8 *)(unaff_x27 + 0xb22) = *(undefined8 *)(unaff_x27 + 0xab4);
    *(undefined8 *)(unaff_x27 + 0xb1e) = *(undefined8 *)(unaff_x27 + 0xab0);
    *(undefined8 *)(unaff_x27 + 0xb1c) = *(undefined8 *)(unaff_x27 + 0xaae);
    *(undefined8 *)(unaff_x27 + 0xb30) = *(undefined8 *)(unaff_x27 + 0xac2);
    *(undefined8 *)(unaff_x27 + 0xb2e) = *(undefined8 *)(unaff_x27 + 0xac0);
    *(undefined8 *)(unaff_x27 + 0xb2a) = *(undefined8 *)(unaff_x27 + 0xabc);
    *(undefined8 *)(unaff_x27 + 0xb28) = *(undefined8 *)(unaff_x27 + 0xaba);
    *(undefined8 *)(unaff_x27 + 0xb48) = *(undefined8 *)(unaff_x27 + 0xada);
    *(undefined8 *)(unaff_x27 + 0xb46) = *(undefined8 *)(unaff_x27 + 0xad8);
    *(undefined8 *)(unaff_x27 + 0xb42) = *(undefined8 *)(unaff_x27 + 0xad4);
    *(undefined8 *)(unaff_x27 + 0xb40) = *(undefined8 *)(unaff_x27 + 0xad2);
    *(undefined8 *)(unaff_x27 + 0xb54) = *(undefined8 *)(unaff_x27 + 0xae6);
    *(undefined8 *)(unaff_x27 + 0xb52) = *(undefined8 *)(unaff_x27 + 0xae4);
    *(undefined8 *)(unaff_x27 + 0xb4e) = *(undefined8 *)(unaff_x27 + 0xae0);
    *(undefined8 *)(unaff_x27 + 0xb4c) = *(undefined8 *)(unaff_x27 + 0xade);
    *(undefined8 *)(unaff_x27 + 0xb60) = *(undefined8 *)(unaff_x27 + 0xaf2);
    *(undefined8 *)(unaff_x27 + 0xb5e) = *(undefined8 *)(unaff_x27 + 0xaf0);
    *(undefined8 *)(unaff_x27 + 0xb5a) = *(undefined8 *)(unaff_x27 + 0xaec);
    *(undefined8 *)(unaff_x27 + 0xb58) = *(undefined8 *)(unaff_x27 + 0xaea);
    *(undefined8 *)(unaff_x27 + 0xb6a) = uVar28;
    *(undefined8 *)(unaff_x27 + 0xb68) = uVar27;
    *(undefined8 *)(unaff_x27 + 0xb66) = uVar26;
    *(undefined8 *)(unaff_x27 + 0xb64) = uVar11;
    unaff_x27[0xb6e] = 0x2020202;
    unaff_x27[0xb74] = 0;
    unaff_x27[0xb75] = 0;
    unaff_x25[0x8f0] = 0;
    piVar23 = in_stack_000069d0;
    in_stack_00001de8 = in_stack_000069d8;
    in_stack_000069e0 = in_stack_00001df0;
LAB_10119e5b8:
    unaff_x26 = (int *)0x1;
    func_0x0001008902e4(&stack0x00001de0,unaff_x27 + 0xb04,in_stack_00000078);
    piVar16 = piVar23;
    in_stack_00001de0 = in_stack_00001de8;
    if (piVar23 == (int *)0x3) {
      *unaff_x25 = 3;
      piVar15 = in_stack_00001df0;
      piVar47 = in_stack_00001e00;
      piVar46 = in_stack_00001e08;
      piVar48 = in_stack_00001e10;
      piVar52 = in_stack_00001e18;
      piVar49 = in_stack_00001e20;
      piVar50 = in_stack_00001e28;
      piVar51 = in_stack_00001e30;
      piVar13 = in_stack_00001e38;
      piVar20 = in_stack_00001e40;
    }
    else {
      _memcpy(&stack0x00004328,&stack0x00001e50,0x24d8);
      FUN_100cdd920(unaff_x27 + 0xb04);
      if (piVar23 == (int *)0x2) {
        *(int **)(unaff_x29 + -0x88) = in_stack_00001de8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00001de0,s__failed_to_load_imported_session_108acc0a8,&stack0x00006c50);
        unaff_x21 = *(int **)(unaff_x29 + -0x88);
        if (((ulong)unaff_x21 & 3) == 1) {
          piVar22 = (int *)((long)unaff_x21 + -1);
          uVar11 = *(undefined8 *)piVar22;
          puVar21 = *(undefined8 **)((long)unaff_x21 + 7);
          pcVar4 = (code *)*puVar21;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar11);
          }
          if (puVar21[1] != 0) {
            _free(uVar11);
          }
          _free(piVar22);
          *(int **)(unaff_x29 + -0x98) = in_stack_00001df0;
          *(int **)(unaff_x29 + -0xa0) = in_stack_00001de8;
          piVar15 = *(int **)(unaff_x27 + 0xaa8);
          unaff_x21 = piVar22;
        }
        else {
          *(int **)(unaff_x29 + -0x98) = in_stack_00001df0;
          *(int **)(unaff_x29 + -0xa0) = in_stack_00001de8;
          piVar15 = *(int **)(unaff_x27 + 0xaa8);
        }
        if ((piVar15 != unaff_x20) && (piVar15 != (int *)0x0)) {
          _free(*(undefined8 *)(unaff_x27 + 0xaaa));
        }
        if ((*(int **)(unaff_x27 + 0xac6) != unaff_x20) &&
           (*(int **)(unaff_x27 + 0xac6) != (int *)0x0)) {
          _free(*(undefined8 *)(unaff_x27 + 0xac8));
        }
        in_stack_00006c50 = in_stack_00001de8;
        in_stack_00006c58 = in_stack_00001df0;
        if ((*(int **)(unaff_x27 + 0xacc) != unaff_x20) &&
           (*(int **)(unaff_x27 + 0xacc) != (int *)0x0)) {
          _free(*(undefined8 *)(unaff_x27 + 0xace));
        }
        goto LAB_10119f138;
      }
      unaff_x25[5] = 1;
      *(int **)(unaff_x27 + 0x13c) = piVar23;
      *(int **)(unaff_x27 + 0x13e) = in_stack_00001de8;
      *(int **)(unaff_x27 + 0x142) = in_stack_00001df8;
      *(int **)(unaff_x27 + 0x140) = in_stack_00001df0;
      *(int **)(unaff_x27 + 0x144) = in_stack_00001e00;
      *(int **)(unaff_x27 + 0x148) = in_stack_00001e10;
      *(int **)(unaff_x27 + 0x146) = in_stack_00001e08;
      *(int **)(unaff_x27 + 0x14c) = in_stack_00001e20;
      *(int **)(unaff_x27 + 0x14a) = in_stack_00001e18;
      *(int **)(unaff_x27 + 0x150) = in_stack_00001e30;
      *(int **)(unaff_x27 + 0x14e) = in_stack_00001e28;
      *(int **)(unaff_x27 + 0x154) = in_stack_00001e40;
      *(int **)(unaff_x27 + 0x152) = in_stack_00001e38;
      *(int **)(unaff_x27 + 0x156) = in_stack_00001e48;
      _memcpy(unaff_x27 + 0x158,&stack0x00004328,0x24d8);
      if ((*(int **)(unaff_x27 + 0xaa8) != unaff_x20) &&
         (*(int **)(unaff_x27 + 0xaa8) != (int *)0x0)) {
        _free(*(undefined8 *)(unaff_x27 + 0xaaa));
      }
      if ((*(int **)(unaff_x27 + 0xac6) != unaff_x20) &&
         (*(int **)(unaff_x27 + 0xac6) != (int *)0x0)) {
        _free(*(undefined8 *)(unaff_x27 + 0xac8));
      }
      if ((*(int **)(unaff_x27 + 0xacc) != unaff_x20) &&
         (*(int **)(unaff_x27 + 0xacc) != (int *)0x0)) {
        _free(*(undefined8 *)(unaff_x27 + 0xace));
      }
      __ZN10codex_core21environment_selection37default_thread_environment_selections17h6d7e55ad7e1f2f25E
                (&stack0x00006850,
                 *(long *)(*(long *)(*(long *)(*(long *)(unaff_x27 + 0x12e) + 0x340) + 0x28) + 0xd0)
                 + 0x10,unaff_x27 + 0x828);
      unaff_x25[4] = 1;
      lVar5 = *(long *)(*(long *)(unaff_x27 + 0x12e) + 0x340);
      unaff_x25[1] = 0;
      in_stack_00006c58 = *(int **)(unaff_x27 + 0xa92);
      in_stack_00006c50 = *(int **)(unaff_x27 + 0xa90);
      in_stack_00006c60 = *(int **)(unaff_x27 + 0xa94);
      unaff_x25[4] = 0;
      unaff_x25[5] = 0;
      _memcpy((long)unaff_x27 + unaff_x28,unaff_x27 + 0x13c,0x2548);
      unaff_x27[0x13e2] = 0;
      unaff_x27[0x13e3] = 0;
      unaff_x27[0x13e4] = 8;
      unaff_x27[0x13e5] = 0;
      unaff_x27[0x13e6] = 0;
      unaff_x27[0x13e7] = 0;
      *(undefined8 *)(unaff_x27 + 0x13ea) = in_stack_00006858;
      *(undefined8 *)(unaff_x27 + 0x13e8) = in_stack_00006850;
      *(undefined8 *)(unaff_x27 + 0x13ec) = in_stack_00006860;
      *(int **)(unaff_x27 + 0x13ee) = unaff_x20;
      unaff_x27[0x13f4] = 1;
      unaff_x27[0x13f5] = -0x80000000;
      unaff_x27[0x1400] = 3;
      unaff_x27[0x1401] = -0x80000000;
      *(int **)(unaff_x27 + 0x1404) = in_stack_00006c58;
      *(int **)(unaff_x27 + 0x1402) = in_stack_00006c50;
      *(int **)(unaff_x27 + 0x1406) = in_stack_00006c60;
      unaff_x27[0x1410] = 0xe;
      unaff_x27[0x1411] = -0x80000000;
      *(undefined2 *)(unaff_x27 + 0x1428) = 0x300;
      *(long *)(unaff_x27 + 0x142a) = lVar5 + 0x10;
      *(undefined1 *)(unaff_x27 + 0x1dc8) = 0;
      piVar22 = in_stack_00001e48;
      in_stack_00001de8 = in_stack_00001df0;
      unaff_x21 = in_stack_00001e00;
      in_stack_00001e00 = in_stack_00001e08;
      piVar15 = in_stack_00001e10;
      piVar47 = in_stack_00001e18;
      piVar48 = in_stack_00001e20;
      piVar52 = in_stack_00001e28;
      piVar49 = in_stack_00001e30;
      piVar50 = in_stack_00001e38;
      piVar51 = in_stack_00001e40;
      piVar23 = in_stack_000069d0;
LAB_10119e834:
      in_stack_00001e40 = in_stack_00001e48;
      in_stack_00001e38 = piVar51;
      in_stack_00001e30 = piVar50;
      in_stack_00001e28 = piVar49;
      in_stack_00001e20 = piVar52;
      in_stack_00001e18 = piVar48;
      in_stack_00001e10 = piVar47;
      in_stack_00001e08 = piVar15;
      in_stack_00001df0 = in_stack_00001df8;
      unaff_x26 = (int *)0x1;
      FUN_10050fc3c(&stack0x00001de0,(long)unaff_x27 + unaff_x28,in_stack_00000078);
      piVar15 = in_stack_00001de8;
      in_stack_00001df8 = in_stack_00001df0;
      piVar47 = unaff_x21;
      piVar48 = in_stack_00001e08;
      piVar52 = in_stack_00001e10;
      piVar49 = in_stack_00001e18;
      piVar50 = in_stack_00001e20;
      piVar51 = in_stack_00001e28;
      piVar13 = in_stack_00001e30;
      piVar20 = in_stack_00001e38;
      in_stack_00001e48 = in_stack_00001e40;
      in_stack_000069d0 = piVar23;
      if (piVar16 != (int *)0x8000000000000001) {
        _memcpy(&stack0x00006868,&stack0x00001e50,0x118);
        FUN_100cde6d4((long)unaff_x27 + unaff_x28);
        if (piVar16 == unaff_x20) {
          *(undefined1 **)(unaff_x29 + -0x88) = &stack0x00001de0;
          *(code **)(unaff_x29 + -0x80) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x000069d0,s_failed_to_import_session__108acc067,unaff_x29 + -0x88);
          *(int **)(unaff_x29 + -0x68) = in_stack_000069e0;
          *(int **)(unaff_x29 + -0x70) = in_stack_000069d8;
          FUN_100df5738(&stack0x00001de0);
          *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x68);
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x70);
          in_stack_00001df8 = unaff_x21;
          in_stack_00001e48 = in_stack_00006868;
          goto LAB_10119f0bc;
        }
        *(int **)(unaff_x27 + 0xa90) = piVar16;
        *(int **)(unaff_x27 + 0xa92) = in_stack_00001de0;
        *(int **)(unaff_x27 + 0xa96) = in_stack_00001df0;
        *(int **)(unaff_x27 + 0xa94) = in_stack_00001de8;
        *(int **)(unaff_x27 + 0xa98) = unaff_x21;
        *(int **)(unaff_x27 + 0xa9c) = in_stack_00001e08;
        *(int **)(unaff_x27 + 0xa9a) = in_stack_00001e00;
        *(int **)(unaff_x27 + 0xaa0) = in_stack_00001e18;
        *(int **)(unaff_x27 + 0xa9e) = in_stack_00001e10;
        *(int **)(unaff_x27 + 0xaa4) = in_stack_00001e28;
        *(int **)(unaff_x27 + 0xaa2) = in_stack_00001e20;
        *(int **)(unaff_x27 + 0xaa8) = in_stack_00001e38;
        *(int **)(unaff_x27 + 0xaa6) = in_stack_00001e30;
        *(int **)(unaff_x27 + 0xaaa) = in_stack_00001e40;
        _memcpy(unaff_x27 + 0xaac,&stack0x00006868,0x118);
        if (*(int **)(unaff_x27 + 0x136) != unaff_x20) {
          unaff_x25[2] = 0;
          *(undefined8 *)(unaff_x27 + 0xaf4) = *(undefined8 *)(unaff_x27 + 0x138);
          *(undefined8 *)(unaff_x27 + 0xaf2) = *(undefined8 *)(unaff_x27 + 0x136);
          *(undefined8 *)(unaff_x27 + 0xaf6) = *(undefined8 *)(unaff_x27 + 0x13a);
          auVar45 = FUN_1033f63d0(*(undefined8 *)(unaff_x27 + 0xaf4));
          piVar22 = auVar45._8_8_;
          if (piVar22 == (int *)0x0) {
            *(int **)(unaff_x27 + 0xaf8) = unaff_x20;
            piVar22 = unaff_x21;
          }
          else {
            lVar5 = _malloc(piVar22);
            if (lVar5 == 0) {
              func_0x0001087c9084(1,piVar22);
              goto LAB_10119fb98;
            }
            _memcpy(lVar5,auVar45._0_8_,piVar22);
            *(int **)(unaff_x27 + 0xaf8) = piVar22;
            *(long *)(unaff_x27 + 0xafa) = lVar5;
            *(int **)(unaff_x27 + 0xafc) = piVar22;
            if (piVar22 != unaff_x20) {
              lVar18 = *(long *)(unaff_x27 + 0xaec);
              unaff_x25[3] = 0;
              unaff_x27[0xef2] = 1;
              unaff_x27[0xef3] = -0x80000000;
              *(int **)(unaff_x27 + 0xebc) = unaff_x20;
              *(int **)(unaff_x27 + 0xec2) = unaff_x20;
              *(int **)(unaff_x27 + 0xec8) = unaff_x20;
              *(int **)(unaff_x27 + 0xece) = unaff_x20;
              *(int **)(unaff_x27 + 0xed4) = unaff_x20;
              unaff_x27[0xf3c] = 0;
              unaff_x27[0xf3f] = 0;
              unaff_x27[0xf24] = 0xe;
              unaff_x27[0xf25] = -0x80000000;
              unaff_x27[0xef8] = 1;
              unaff_x27[0xef9] = -0x80000000;
              unaff_x27[0xefe] = 1;
              unaff_x27[0xeff] = -0x80000000;
              unaff_x27[0xf04] = 1;
              unaff_x27[0xf05] = -0x80000000;
              *(int **)(unaff_x27 + 0xeda) = unaff_x20;
              *(int **)(unaff_x27 + 0xee0) = unaff_x20;
              unaff_x27[0xf1c] = 3;
              unaff_x27[0xf1d] = -0x80000000;
              unaff_x27[0xeb0] = 0;
              unaff_x27[0xeb1] = 0;
              *(int **)(unaff_x27 + 0xee6) = unaff_x20;
              unaff_x27[0xf0a] = 2;
              unaff_x27[0xf0b] = -0x80000000;
              unaff_x27[0xf42] = in_stack_00000010;
              *(int **)(unaff_x27 + 0xeec) = unaff_x20;
              in_stack_00001e18 = *(int **)(unaff_x27 + 0xebe);
              in_stack_00001e10 = *(int **)(unaff_x27 + 0xebc);
              in_stack_00001e20 = *(int **)(unaff_x27 + 0xec0);
              in_stack_00001e30 = *(int **)(unaff_x27 + 0xec4);
              in_stack_00001e28 = *(int **)(unaff_x27 + 0xec2);
              in_stack_00001e38 = *(int **)(unaff_x27 + 0xec6);
              in_stack_00001e48 = *(int **)(unaff_x27 + 0xeca);
              in_stack_00001e40 = *(int **)(unaff_x27 + 0xec8);
              in_stack_00001de0 = *(int **)(unaff_x27 + 0xeb2);
              piVar16 = *(int **)(unaff_x27 + 0xeb0);
              in_stack_00001df8 = *(int **)(unaff_x27 + 0xeb6);
              in_stack_00001df0 = *(int **)(unaff_x27 + 0xeb4);
              in_stack_00001e08 = *(int **)(unaff_x27 + 0xeba);
              unaff_x21 = *(int **)(unaff_x27 + 0xeb8);
              _memcpy(&stack0x00006c50,&stack0x00001de0,0x108);
              _memcpy(unaff_x27 + 0xafe,&stack0x00006c50,0x108);
              *(int **)(unaff_x27 + 0xb40) = piVar22;
              *(long *)(unaff_x27 + 0xb42) = lVar5;
              *(undefined8 *)(unaff_x27 + 0xb48) = *(undefined8 *)(unaff_x27 + 0xefa);
              *(undefined8 *)(unaff_x27 + 0xb46) = *(undefined8 *)(unaff_x27 + 0xef8);
              *(int **)(unaff_x27 + 0xb44) = piVar22;
              *(undefined8 *)(unaff_x27 + 0xb4a) = *(undefined8 *)(unaff_x27 + 0xefc);
              *(undefined8 *)(unaff_x27 + 0xb4e) = *(undefined8 *)(unaff_x27 + 0xf00);
              *(undefined8 *)(unaff_x27 + 0xb4c) = *(undefined8 *)(unaff_x27 + 0xefe);
              *(undefined8 *)(unaff_x27 + 0xb50) = *(undefined8 *)(unaff_x27 + 0xf02);
              *(undefined8 *)(unaff_x27 + 0xb54) = *(undefined8 *)(unaff_x27 + 0xf06);
              *(undefined8 *)(unaff_x27 + 0xb52) = *(undefined8 *)(unaff_x27 + 0xf04);
              *(undefined8 *)(unaff_x27 + 0xb56) = *(undefined8 *)(unaff_x27 + 0xf08);
              *(undefined8 *)(unaff_x27 + 0xb5a) = *(undefined8 *)(unaff_x27 + 0xf0c);
              *(undefined8 *)(unaff_x27 + 0xb58) = *(undefined8 *)(unaff_x27 + 0xf0a);
              *(undefined8 *)(unaff_x27 + 0xb68) = *(undefined8 *)(unaff_x27 + 0xf1a);
              *(undefined8 *)(unaff_x27 + 0xb66) = *(undefined8 *)(unaff_x27 + 0xf18);
              *(undefined8 *)(unaff_x27 + 0xb64) = *(undefined8 *)(unaff_x27 + 0xf16);
              *(undefined8 *)(unaff_x27 + 0xb62) = *(undefined8 *)(unaff_x27 + 0xf14);
              *(undefined8 *)(unaff_x27 + 0xb60) = *(undefined8 *)(unaff_x27 + 0xf12);
              *(undefined8 *)(unaff_x27 + 0xb5e) = *(undefined8 *)(unaff_x27 + 0xf10);
              *(undefined8 *)(unaff_x27 + 0xb5c) = *(undefined8 *)(unaff_x27 + 0xf0e);
              *(undefined8 *)(unaff_x27 + 0xb6c) = *(undefined8 *)(unaff_x27 + 0xf1e);
              *(undefined8 *)(unaff_x27 + 0xb6a) = *(undefined8 *)(unaff_x27 + 0xf1c);
              *(undefined8 *)(unaff_x27 + 0xb70) = *(undefined8 *)(unaff_x27 + 0xf22);
              *(undefined8 *)(unaff_x27 + 0xb6e) = *(undefined8 *)(unaff_x27 + 0xf20);
              *(undefined8 *)(unaff_x27 + 0xb84) = *(undefined8 *)(unaff_x27 + 0xf36);
              *(undefined8 *)(unaff_x27 + 0xb82) = *(undefined8 *)(unaff_x27 + 0xf34);
              *(undefined8 *)(unaff_x27 + 0xb88) = *(undefined8 *)(unaff_x27 + 0xf3a);
              *(undefined8 *)(unaff_x27 + 0xb86) = *(undefined8 *)(unaff_x27 + 0xf38);
              *(undefined8 *)(unaff_x27 + 0xb7c) = *(undefined8 *)(unaff_x27 + 0xf2e);
              *(undefined8 *)(unaff_x27 + 0xb7a) = *(undefined8 *)(unaff_x27 + 0xf2c);
              *(undefined8 *)(unaff_x27 + 0xb80) = *(undefined8 *)(unaff_x27 + 0xf32);
              *(undefined8 *)(unaff_x27 + 0xb7e) = *(undefined8 *)(unaff_x27 + 0xf30);
              *(undefined8 *)(unaff_x27 + 0xb74) = *(undefined8 *)(unaff_x27 + 0xf26);
              *(undefined8 *)(unaff_x27 + 0xb72) = *(undefined8 *)(unaff_x27 + 0xf24);
              *(undefined8 *)(unaff_x27 + 0xb78) = *(undefined8 *)(unaff_x27 + 0xf2a);
              *(undefined8 *)(unaff_x27 + 0xb76) = *(undefined8 *)(unaff_x27 + 0xf28);
              unaff_x27[0xb8c] = unaff_x27[0xf3e];
              *(undefined8 *)(unaff_x27 + 0xb8d) = *(undefined8 *)(unaff_x27 + 0xf3f);
              *(undefined8 *)(unaff_x27 + 0xb8a) = *(undefined8 *)(unaff_x27 + 0xf3c);
              unaff_x27[0xb8f] = unaff_x27[0xf41];
              unaff_x25[0x408] = 2;
              unaff_x25[0x409] = 4;
              unaff_x25[0x40a] = 6;
              *(undefined1 *)((long)unaff_x27 + 0x2e47) = *(undefined1 *)((long)unaff_x27 + 0x3d0f);
              *(undefined4 *)((long)unaff_x27 + 0x2e43) = *(undefined4 *)((long)unaff_x27 + 0x3d0b);
              *(long *)(unaff_x27 + 0xb92) = lVar18 + 0x10;
              *(undefined2 *)in_stack_00000060 = 0;
              goto LAB_10119dd48;
            }
          }
          lVar5 = *(long *)(unaff_x27 + 0xaf2);
          goto joined_r0x00010119f1d4;
        }
        goto LAB_10119f1e0;
      }
      *unaff_x25 = 4;
      piVar46 = in_stack_00001e00;
    }
  }
  else {
    if (bVar6 == 3) {
      bVar6 = *(byte *)(unaff_x27 + 0xf2);
      if (bVar6 < 2) {
        if (bVar6 != 0) {
          func_0x000108a07af4(&UNK_10b23a9e8);
          goto LAB_10119fb98;
        }
        lVar5 = *(long *)(unaff_x27 + 0xde);
        goto LAB_10119dc58;
      }
      if (bVar6 != 3) {
        func_0x000108a07b10(&UNK_10b23a9e8);
        goto LAB_10119fb98;
      }
      goto LAB_10119dcc0;
    }
    bVar6 = *unaff_x25;
    in_stack_00000068 = unaff_x27 + 0x11a;
    if (bVar6 < 3) {
      if (bVar6 != 0) {
        if (bVar6 == 1) {
          func_0x000108a07af4(&UNK_10b228aa8);
        }
        else {
          func_0x000108a07b10(&UNK_10b228aa8);
        }
        goto LAB_10119fb98;
      }
      piVar23 = *(int **)(unaff_x27 + 300);
      goto LAB_10119de70;
    }
    piVar23 = piVar16;
    in_stack_00001de8 = in_stack_00001de0;
    in_stack_00001e00 = unaff_x21;
    if (bVar6 == 3) goto LAB_10119e5b8;
    in_stack_00001de8 = in_stack_00001df0;
    in_stack_00001e00 = in_stack_00001e08;
    piVar15 = in_stack_00001e10;
    piVar47 = in_stack_00001e18;
    piVar48 = in_stack_00001e20;
    piVar52 = in_stack_00001e28;
    piVar49 = in_stack_00001e30;
    piVar50 = in_stack_00001e38;
    piVar51 = in_stack_00001e40;
    piVar23 = in_stack_000069d0;
    if (bVar6 == 4) goto LAB_10119e834;
LAB_10119dd48:
    unaff_x26 = (int *)0x1;
    func_0x0001004f1dcc(&stack0x00001de0,unaff_x27 + 0xafe,in_stack_00000078);
    piVar15 = in_stack_00001df0;
    piVar47 = unaff_x21;
    piVar48 = in_stack_00001e10;
    piVar52 = in_stack_00001e18;
    piVar49 = in_stack_00001e20;
    piVar50 = in_stack_00001e28;
    piVar51 = in_stack_00001e30;
    piVar13 = in_stack_00001e38;
    piVar20 = in_stack_00001e40;
    if (piVar16 == (int *)0x3) {
      *unaff_x25 = 5;
      piVar46 = in_stack_00001e08;
    }
    else {
      *(int **)(unaff_x29 + -0xe8) = in_stack_00001e10;
      *(int **)(unaff_x29 + -0xf0) = in_stack_00001e08;
      *(int **)(unaff_x29 + -0xd8) = in_stack_00001e20;
      *(int **)(unaff_x29 + -0xe0) = in_stack_00001e18;
      *(int **)(unaff_x29 + -200) = in_stack_00001e30;
      *(int **)(unaff_x29 + -0xd0) = in_stack_00001e28;
      *(int **)(unaff_x29 + -0xb8) = in_stack_00001e40;
      *(int **)(unaff_x29 + -0xc0) = in_stack_00001e38;
      *(int **)(unaff_x29 + -0xa8) = in_stack_00001df8;
      *(int **)(unaff_x29 + -0xb0) = in_stack_00001df0;
      _memcpy(&stack0x00006d60,&stack0x00001e50,0x208);
      if (*(char *)((long)in_stack_00000060 + 1) == '\x03') {
        FUN_100cc5d1c(unaff_x27 + 0xb94);
        *(undefined1 *)((long)in_stack_00000060 + 2) = 0;
      }
      else if (*(char *)((long)in_stack_00000060 + 1) == '\0') {
        FUN_100e21f20(unaff_x27 + 0xafe);
      }
      if (piVar16 == (int *)0x2) {
        in_stack_00001df0 = *(int **)(unaff_x29 + -0xa8);
        in_stack_00001de8 = *(int **)(unaff_x29 + -0xb0);
        *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00001de0;
        *(undefined **)(unaff_x29 + -0x68) =
             &
             __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
        ;
        param_1 = unaff_x29 + -0x88;
        param_3 = unaff_x29 + -0x70;
        in_stack_00001df8 = unaff_x21;
        in_stack_00001e00 = unaff_x21;
        goto code_r0x00010119e234;
      }
      _memcpy(&stack0x00006a40,&stack0x00006d60,0x208);
      in_stack_000069e0 = *(int **)(unaff_x29 + -0xb0);
      FUN_100e0ce70(&stack0x000069d0);
      piVar23 = *(int **)(unaff_x27 + 0xef2);
      if (((piVar23 != (int *)0x8000000000000001) && (piVar23 != unaff_x20)) &&
         (piVar23 != (int *)0x0)) {
        _free(*(undefined8 *)(unaff_x27 + 0xef4));
      }
      unaff_x25[3] = 0;
      lVar5 = *(long *)(unaff_x27 + 0xaf2);
      piVar22 = unaff_x21;
      in_stack_00001e00 = in_stack_00001e08;
      in_stack_000069d0 = piVar16;
      in_stack_000069d8 = in_stack_00001de0;
joined_r0x00010119f1d4:
      unaff_x21 = piVar22;
      if (lVar5 != 0) {
        _free(*(undefined8 *)(unaff_x27 + 0xaf4));
      }
LAB_10119f1e0:
      unaff_x26 = (int *)0x1;
      uVar11 = *(undefined8 *)(unaff_x27 + 0xaee);
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x27 + 0xaf0);
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
      lVar5 = **(long **)(unaff_x27 + 0xaec);
      **(long **)(unaff_x27 + 0xaec) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x27 + 0xaec);
      }
      FUN_100e26e4c((long)unaff_x27 + unaff_x28);
      unaff_x25[4] = 0;
      unaff_x25[5] = 0;
      unaff_x25[1] = 0;
      unaff_x25[2] = 0;
      piVar22 = unaff_x21;
      if (*(long *)(unaff_x27 + 0x130) == 0) {
        piVar14 = *(int **)(unaff_x29 + -0x98);
        piVar24 = *(int **)(unaff_x29 + -0xa0);
        *unaff_x25 = 1;
        piVar23 = (int *)0x8000000000000000;
        in_stack_00001de8 = in_stack_00001de0;
        in_stack_00001df0 = piVar15;
        unaff_x21 = piVar47;
        in_stack_00001e08 = in_stack_00001e00;
        in_stack_00001e10 = piVar48;
        in_stack_00001e18 = piVar52;
        in_stack_00001e20 = piVar49;
        in_stack_00001e28 = piVar50;
        in_stack_00001e30 = piVar51;
        in_stack_00001e38 = piVar13;
        in_stack_00001e40 = piVar20;
        goto LAB_10119f284;
      }
      piVar23 = (int *)0x8000000000000000;
      piVar46 = in_stack_00001e00;
LAB_10119f22c:
      _free(*(undefined8 *)(unaff_x27 + 0x132));
      piVar14 = *(int **)(unaff_x29 + -0x98);
      piVar24 = *(int **)(unaff_x29 + -0xa0);
      *unaff_x25 = (byte)unaff_x26;
      in_stack_00001de8 = in_stack_00001de0;
      in_stack_00001df0 = piVar15;
      unaff_x21 = piVar47;
      in_stack_00001e08 = piVar46;
      in_stack_00001e10 = piVar48;
      in_stack_00001e18 = piVar52;
      in_stack_00001e20 = piVar49;
      in_stack_00001e28 = piVar50;
      in_stack_00001e30 = piVar51;
      in_stack_00001e38 = piVar13;
      in_stack_00001e40 = piVar20;
      if (piVar23 != (int *)0x8000000000000001) goto LAB_10119f284;
    }
  }
LAB_10119f24c:
  *(undefined1 *)(unaff_x27 + 0xdc) = 4;
  in_stack_00001df0 = piVar15;
  unaff_x21 = piVar47;
  in_stack_00001e08 = piVar46;
  in_stack_00001e10 = piVar48;
  in_stack_00001e18 = piVar52;
  in_stack_00001e20 = piVar49;
  in_stack_00001e28 = piVar50;
  in_stack_00001e30 = piVar51;
  in_stack_00001e38 = piVar13;
  in_stack_00001e40 = piVar20;
  piVar15 = in_stack_00004340;
  piVar47 = in_stack_00004348;
  piVar48 = in_stack_00004350;
  piVar52 = in_stack_00004358;
  piVar49 = in_stack_00004360;
  piVar50 = in_stack_00004368;
  pcVar53 = (char *)in_stack_00004378;
  piVar23 = in_stack_00004380;
joined_r0x00010119dce8:
  in_stack_00004380 = in_stack_00001e38;
  in_stack_00004378 = in_stack_00001e30;
  in_stack_00004368 = in_stack_00001e20;
  in_stack_00004360 = in_stack_00001e18;
  in_stack_00004358 = in_stack_00001e10;
  in_stack_00004350 = in_stack_00001e08;
  in_stack_00004348 = unaff_x21;
  in_stack_00004340 = in_stack_00001df8;
  if (in_stack_00000088._4_4_ == 0) goto LAB_10119f7fc;
  iVar9 = 1;
  in_stack_00000070._4_4_ = 1;
  goto LAB_10119d82c;
code_r0x00010119d810:
  if (*unaff_x27 != 1) {
LAB_10119fa1c:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca1ba4,0x45,&UNK_10b24e878);
LAB_10119fb98:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10119fb9c);
    (*pcVar4)();
  }
  goto joined_r0x00010119f798;
LAB_10119e128:
  piVar22 = *(int **)(unaff_x27 + 4);
  lVar5 = *(long *)(unaff_x27 + 6);
  if (lVar5 != 0) {
    piVar23 = piVar22 + 8;
    do {
      if (*(long *)(piVar23 + -8) != 0) {
        _free(*(undefined8 *)(piVar23 + -6));
      }
      if (*(long *)(piVar23 + -2) != 0) {
        _free(*(undefined8 *)piVar23);
      }
      if (*(long *)(piVar23 + 4) != -0x8000000000000000 && *(long *)(piVar23 + 4) != 0) {
        _free(*(undefined8 *)(piVar23 + 6));
      }
      piVar23 = piVar23 + 0x12;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(long *)(unaff_x27 + 2) != 0) {
    _free(piVar22);
  }
  goto LAB_10119f770;
}

