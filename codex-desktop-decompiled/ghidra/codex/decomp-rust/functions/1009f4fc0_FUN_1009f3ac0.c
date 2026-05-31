
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f3ac0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  byte bVar26;
  long *unaff_x19;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  char *unaff_x23;
  undefined8 *puVar32;
  undefined8 *unaff_x25;
  long *plVar33;
  long *unaff_x27;
  long unaff_x29;
  byte bVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *plVar39;
  long *plVar40;
  undefined *puVar41;
  long lVar42;
  long *plVar43;
  undefined8 uVar44;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_00000080;
  long *in_stack_00000088;
  long *in_stack_00000090;
  long *in_stack_00000098;
  undefined *in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  char *pcStack00000000000000e0;
  long *plStack00000000000000e8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  long *in_stack_00000100;
  long *in_stack_00000108;
  undefined *in_stack_00000110;
  long *in_stack_00000118;
  undefined *in_stack_00000120;
  long in_stack_00000128;
  long *in_stack_00000130;
  byte bStack0000000000000138;
  long in_stack_00000140;
  char *in_stack_00000148;
  undefined8 *in_stack_00000150;
  char *in_stack_00000160;
  long *in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  ulong in_stack_00000180;
  long *in_stack_00000188;
  undefined *in_stack_00000190;
  long *in_stack_00000198;
  char *in_stack_000001a8;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  char *in_stack_000001c0;
  long *in_stack_000001c8;
  long *in_stack_000001d0;
  long in_stack_000001d8;
  ulong in_stack_000001e0;
  long *in_stack_000001e8;
  long in_stack_000001f8;
  
code_r0x0001009f3ac0:
  plStack00000000000000e8 = (long *)(unaff_x29 + -0xc0);
  pcStack00000000000000e0 = s__env_tui__by_repo_fetch_failed_f_108acd581;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000210);
  if ((*unaff_x23 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar31 = *unaff_x19;
    in_stack_000001c8 = *(long **)(lVar31 + 0x20);
    in_stack_000001d0 = *(long **)(lVar31 + 0x28);
    in_stack_000001c0 = (char *)0x2;
    puVar35 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar35 = &UNK_10b3c24c8;
    }
    puVar41 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar41 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x000001c0);
    if (iVar9 != 0) {
      in_stack_00000118 = *(long **)(lVar31 + 0x60);
      in_stack_00000120 = *(undefined **)(lVar31 + 0x68);
      in_stack_00000100 = *(long **)(lVar31 + 0x50);
      in_stack_00000108 = *(long **)(lVar31 + 0x58);
      in_stack_000000f8 = (long *)0x1;
      if (in_stack_00000100 == (long *)0x0) {
        in_stack_000000f8 = (long *)0x2;
      }
      in_stack_00000140 = *(long *)(lVar31 + 8);
      in_stack_000001a8 = &stack0x00000210;
      in_stack_000001b0 = (long *)CONCAT71(in_stack_000001b0._1_7_,1);
      in_stack_00000160 = (char *)&stack0x000001a8;
      in_stack_00000168 = (long *)&DAT_1061c2098;
      in_stack_00000110 = (undefined *)0x1;
      if (in_stack_00000118 == (long *)0x0) {
        in_stack_00000110 = (undefined *)0x2;
      }
      in_stack_00000130 = (long *)unaff_x25[0xd];
      in_stack_00000128 = unaff_x25[0xc];
      _bStack0000000000000138 = in_stack_000001d0;
      in_stack_00000150 = &stack0x00000160;
      in_stack_00000148 = s__108b39f4f;
      (**(code **)(puVar35 + 0x20))(puVar41,&stack0x000000f8);
    }
  }
LAB_1009f3f38:
  (**(code **)*in_stack_00000098)();
  lVar31 = unaff_x27[0x16];
  do {
    if (lVar31 != 0) {
      _free(unaff_x27[0x17]);
    }
    if (unaff_x27[0x13] != 0) {
      _free(unaff_x27[0x14]);
    }
    if (unaff_x27[0x10] != 0) {
      _free(unaff_x27[0x11]);
    }
    do {
      lVar31 = unaff_x27[0x19];
      if (lVar31 == unaff_x27[0x1a]) {
        plVar28 = (long *)*unaff_x27;
        uVar10 = unaff_x27[1];
        if (uVar10 < 0xd) {
          if ((uVar10 == 0xc) && (*plVar28 == 0x646e656b6361622f && (int)plVar28[1] == 0x6970612d))
          goto LAB_1009f4bd8;
LAB_1009f4bb4:
          *(long **)(unaff_x29 + -0xc0) = unaff_x27;
          *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x000000f8,s__api_codex_environments_108acd5ad,unaff_x29 + -0xc0);
        }
        else {
          __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                    (&stack0x000000f8,plVar28,uVar10,&UNK_108cb4ed4,0xc);
          FUN_1011dd528(unaff_x29 + -0xc0,&stack0x000000f8);
          if ((*(uint *)(unaff_x29 + -0xc0) & 1) == 0) goto LAB_1009f4bb4;
LAB_1009f4bd8:
          *(long **)(unaff_x29 + -0xc0) = unaff_x27;
          *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x000000f8,s__wham_environments_108acd5c7,unaff_x29 + -0xc0);
        }
        unaff_x27[0x11] = (long)in_stack_00000100;
        unaff_x27[0x10] = (long)in_stack_000000f8;
        unaff_x27[0x12] = (long)in_stack_00000108;
        unaff_x27[0x15] = unaff_x27[0x11];
        unaff_x27[0x16] = unaff_x27[0x12];
        unaff_x27[0x18] = unaff_x27[10];
        *(undefined1 *)((long)unaff_x27 + 0xc9) = 0;
        FUN_1009f5dac(&stack0x000000f8,unaff_x27 + 0x13,in_stack_00000010);
        plVar27 = in_stack_00000108;
        plVar29 = in_stack_00000100;
        plVar28 = in_stack_000000f8;
        if (in_stack_000000f8 == (long *)0x8000000000000001) {
          *in_stack_00000008 = 0x8000000000000001;
          uVar14 = 4;
          goto LAB_1009f49cc;
        }
        FUN_100d7130c(unaff_x27 + 0x13);
        if (plVar28 == (long *)0x8000000000000000) {
          in_stack_000001a8 = (char *)plVar29;
          if (unaff_x27[5] == 0) {
            if (unaff_x27[0x10] != 0) {
              _free(unaff_x27[0x11]);
            }
            plVar28 = (long *)unaff_x27[0xc];
            lVar31 = unaff_x27[0xd];
            if (lVar31 != 0) {
              plVar27 = plVar28 + 1;
              do {
                if (plVar27[-1] != 0) {
                  _free(*plVar27);
                }
                plVar27 = plVar27 + 3;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
            }
            if (unaff_x27[0xb] != 0) {
              _free(plVar28);
            }
            FUN_100cf3ef4(unaff_x27 + 2);
            *(undefined1 *)(unaff_x27 + 0xf) = 0;
            plVar27 = (long *)0x8000000000000000;
            goto LAB_1009f570c;
          }
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
            if (1 < bRam000000010b629508 - 1) {
              if (bRam000000010b629508 != 0) {
                cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
                                  );
                unaff_x25 = &stack0x00000160;
                unaff_x27 = in_stack_00000060;
                if (cVar8 != '\0') goto LAB_1009f4c9c;
              }
              goto LAB_1009f549c;
            }
LAB_1009f4c9c:
            uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
                               );
            if ((uVar10 & 1) == 0) goto LAB_1009f549c;
            in_stack_00000110 =
                 (undefined *)
                 (
                 ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
                 + 0x30);
            *(char ***)(unaff_x29 + -0xc0) = &stack0x000001a8;
            *(code **)(unaff_x29 + -0xb8) =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            in_stack_000001c0 = &stack0x00000210;
            in_stack_000001c8 = (long *)&UNK_10b208fd0;
            in_stack_00000100 = (long *)&stack0x000001c0;
            in_stack_000000f8 = (long *)0x1;
            in_stack_00000108 = (long *)0x1;
            FUN_1009f5c70(&stack0x000000f8);
          }
          else {
LAB_1009f549c:
            lVar31 = 
            ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
            ;
            if ((*unaff_x23 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_000000d0 =
                   *(undefined8 *)
                    (
                    ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
                    + 0x20);
              in_stack_000000d8 =
                   *(undefined8 *)
                    (
                    ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
                    + 0x28);
              in_stack_000000c8 = 2;
              puVar35 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar35 = &UNK_10b3c24c8;
              }
              puVar41 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar41 = &UNK_109adfc03;
              }
              iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x000000c8);
              if (iVar9 != 0) {
                in_stack_00000110 =
                     (undefined *)
                     (
                     ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0ff18f3f4b4675cfE
                     + 0x30);
                in_stack_000001c8 = (long *)&stack0x00000210;
                in_stack_000001c0 = s_9env_tui__global_list_failed__us_108acd654;
                in_stack_00000160 = (char *)&stack0x000001c0;
                in_stack_00000168 = (long *)&UNK_10b208fd0;
                in_stack_00000100 = (long *)&stack0x00000160;
                in_stack_000000f8 = (long *)0x1;
                in_stack_00000108 = (long *)0x1;
                unaff_x25[0x21] = in_stack_000000d0;
                unaff_x25[0x20] = in_stack_000000c8;
                *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_000000d8;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar31,puVar41,puVar35,unaff_x29 + -0xc0,&stack0x000000f8);
              }
            }
          }
          (*(code *)**(undefined8 **)in_stack_000001a8)();
          goto LAB_1009f55a4;
        }
        in_stack_000001c0 = (char *)plVar28;
        in_stack_000001c8 = plVar29;
        in_stack_000001d0 = plVar27;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
          if (1 < bRam000000010b629538 - 1) {
            if (bRam000000010b629538 != 0) {
              cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                                );
              unaff_x25 = &stack0x00000160;
              unaff_x27 = in_stack_00000060;
              if (cVar8 != '\0') goto LAB_1009f4d38;
            }
            goto LAB_1009f4f1c;
          }
LAB_1009f4d38:
          uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                             );
          lVar31 = 
          ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
          ;
          if ((uVar10 & 1) == 0) goto LAB_1009f4f1c;
          lVar36 = ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                   + 0x30;
          in_stack_000000a8 = plVar27;
          pcStack00000000000000e0 = (char *)&stack0x000000a8;
          plStack00000000000000e8 =
               (long *)&
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          in_stack_00000098 = (long *)&stack0x00000200;
          in_stack_000000a0 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long ***)(unaff_x29 + -0xb8) = &stack0x00000098;
          *(undefined8 *)(unaff_x29 + -0xb0) = 1;
          *(long *)(unaff_x29 + -0xa8) = lVar36;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar31,unaff_x29 + -0xc0);
          lVar31 = 
          ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
          ;
          if ((*unaff_x23 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            plVar33 = *(long **)(
                                ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                                + 0x28);
            puVar35 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar35 = &UNK_10b3c24c8;
            }
            puVar41 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar41 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x00000210);
            if (iVar9 != 0) {
              in_stack_00000118 = *(long **)(lVar31 + 0x60);
              in_stack_00000120 = *(undefined **)(lVar31 + 0x68);
              in_stack_00000100 = *(long **)(lVar31 + 0x50);
              in_stack_00000108 = *(long **)(lVar31 + 0x58);
              in_stack_000000f8 = (long *)0x1;
              if (in_stack_00000100 == (long *)0x0) {
                in_stack_000000f8 = (long *)0x2;
              }
              in_stack_00000140 = *(long *)(lVar31 + 8);
              in_stack_000001a8 = (char *)(unaff_x29 + -0xc0);
              in_stack_000001b0 = (long *)CONCAT71(in_stack_000001b0._1_7_,1);
              in_stack_00000160 = (char *)&stack0x000001a8;
              in_stack_00000168 = (long *)&DAT_1061c2098;
              in_stack_00000110 = (undefined *)0x1;
              if (in_stack_00000118 == (long *)0x0) {
                in_stack_00000110 = (undefined *)0x2;
              }
              in_stack_00000130 = (long *)unaff_x25[0x17];
              in_stack_00000128 = unaff_x25[0x16];
              in_stack_00000150 = &stack0x00000160;
              in_stack_00000148 = s__108b39f4f;
              _bStack0000000000000138 = plVar33;
              (**(code **)(puVar35 + 0x20))(puVar41,&stack0x000000f8);
            }
          }
        }
        else {
LAB_1009f4f1c:
          lVar31 = 
          ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
          ;
          if ((*unaff_x23 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_000000b8 =
                 *(undefined8 *)
                  (
                  ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                  + 0x20);
            in_stack_000000c0 =
                 *(undefined8 *)
                  (
                  ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                  + 0x28);
            in_stack_000000b0 = 3;
            puVar35 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar35 = &UNK_10b3c24c8;
            }
            puVar41 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar41 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x000000b0);
            if (iVar9 != 0) {
              in_stack_00000110 =
                   (undefined *)
                   (
                   ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5957ea809bccd9f1E
                   + 0x30);
              pcStack00000000000000e0 = (char *)plVar27;
              in_stack_00000168 = (long *)&stack0x00000210;
              in_stack_00000160 = s_env_tui__global_list__>_envs_108acd633;
              in_stack_000001a8 = (char *)&stack0x00000160;
              in_stack_000001b0 = (long *)&UNK_10b208fd0;
              in_stack_00000100 = (long *)&stack0x000001a8;
              in_stack_000000f8 = (long *)0x1;
              in_stack_00000108 = (long *)0x1;
              unaff_x25[0x21] = in_stack_000000b8;
              unaff_x25[0x20] = in_stack_000000b0;
              *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_000000c0;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar31,puVar41,puVar35,unaff_x29 + -0xc0,&stack0x000000f8);
            }
          }
        }
        *(long **)(unaff_x29 + -0xc0) = plVar29;
        *(long **)(unaff_x29 + -0xb8) = plVar29;
        plVar11 = plVar29 + (long)plVar27 * 9;
        *(long **)(unaff_x29 + -0xb0) = plVar28;
        *(long **)(unaff_x29 + -0xa8) = plVar11;
        plVar33 = plVar29;
        plVar39 = plVar29;
        if (plVar27 != (long *)0x0) goto LAB_1009f504c;
        goto LAB_1009f541c;
      }
      unaff_x27[0x19] = lVar31 + 0x18;
      __ZN17codex_cloud_tasks10env_detect16parse_owner_repo17h2b8af90c77a2e1c6E
                (unaff_x27 + 0x1b,*(undefined8 *)(lVar31 + 8),*(undefined8 *)(lVar31 + 0x10));
    } while (unaff_x27[0x1b] == -0x8000000000000000);
    unaff_x27[0x11] = unaff_x27[0x1c];
    unaff_x27[0x10] = unaff_x27[0x1b];
    unaff_x27[0x12] = unaff_x27[0x1d];
    unaff_x27[0x14] = unaff_x27[0x1f];
    unaff_x27[0x13] = unaff_x27[0x1e];
    unaff_x27[0x15] = unaff_x27[0x20];
    plVar28 = (long *)*unaff_x27;
    uVar10 = unaff_x27[1];
    if (uVar10 < 0xd) {
      if ((uVar10 == 0xc) && (*plVar28 == 0x646e656b6361622f && (int)plVar28[1] == 0x6970612d))
      goto LAB_1009f4af0;
LAB_1009f4abc:
      in_stack_00000100 = (long *)&DAT_100c7b3a0;
      in_stack_00000110 = &DAT_10112965c;
      in_stack_00000120 = &DAT_10112965c;
      in_stack_000000f8 = unaff_x27;
      in_stack_00000108 = unaff_x27 + 0x10;
      in_stack_00000118 = unaff_x27 + 0x13;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xc0,s___api_codex_environments_by_repo_108acd5dc,&stack0x000000f8);
    }
    else {
      __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                (&stack0x000000f8,plVar28,uVar10,&UNK_108cb4ed4,0xc);
      FUN_1011dd528(unaff_x29 + -0xc0,&stack0x000000f8);
      if ((*(uint *)(unaff_x29 + -0xc0) & 1) == 0) goto LAB_1009f4abc;
LAB_1009f4af0:
      in_stack_00000100 = (long *)&DAT_100c7b3a0;
      in_stack_00000110 = &DAT_10112965c;
      in_stack_00000120 = &DAT_10112965c;
      in_stack_000000f8 = unaff_x27;
      in_stack_00000108 = unaff_x27 + 0x10;
      in_stack_00000118 = unaff_x27 + 0x13;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xc0,s___wham_environments_by_repo_gith_108acd60a,&stack0x000000f8);
    }
    lVar31 = unaff_x25[0x20];
    unaff_x27[0x17] = unaff_x25[0x21];
    unaff_x27[0x16] = lVar31;
    unaff_x27[0x18] = *(long *)(unaff_x29 + -0xb0);
    unaff_x27[0x23] = unaff_x27[0x17];
    unaff_x27[0x24] = unaff_x27[0x18];
    unaff_x27[0x26] = unaff_x27[10];
    *(undefined1 *)((long)unaff_x27 + 0x139) = 0;
    FUN_1009f5dac(&stack0x000000f8,unaff_x27 + 0x21,in_stack_00000010);
    plVar27 = in_stack_00000108;
    plVar29 = in_stack_00000100;
    plVar28 = in_stack_000000f8;
    if (in_stack_000000f8 == (long *)0x8000000000000001) {
      *in_stack_00000008 = 0x8000000000000001;
      uVar14 = 3;
      goto LAB_1009f49cc;
    }
    FUN_100d7130c(unaff_x27 + 0x21);
    if (plVar28 == (long *)0x8000000000000000) goto code_r0x0001009f3a54;
    in_stack_000001a8 = (char *)plVar28;
    in_stack_000001b0 = plVar29;
    in_stack_000001b8 = plVar27;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
        ((bRam000000010b629520 - 1 < 2 ||
         ((bRam000000010b629520 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
                             ), cVar8 != '\0')))))) &&
       (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
                           ),
       lVar31 = 
       ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
       , (uVar10 & 1) != 0)) {
      in_stack_000000a8 = plVar27;
      *(long **)(unaff_x29 + -0xc0) = unaff_x27 + 0x10;
      *(undefined **)(unaff_x29 + -0xb8) = &DAT_10112965c;
      *(long **)(unaff_x29 + -0xb0) = unaff_x27 + 0x13;
      *(undefined **)(unaff_x29 + -0xa8) = &DAT_10112965c;
      *(long ***)(unaff_x29 + -0xa0) = &stack0x000000a8;
      *(undefined1 **)(unaff_x29 + -0x98) =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      in_stack_00000098 = (long *)&stack0x00000200;
      in_stack_000000a0 = &UNK_10b208fd0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar31,&stack0x00000210);
      lVar31 = 
      ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
      ;
      if ((*unaff_x23 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000001c8 =
             *(long **)(
                       ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
                       + 0x20);
        in_stack_000001d0 =
             *(long **)(
                       ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
                       + 0x28);
        in_stack_000001c0 = (char *)0x3;
        puVar35 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar35 = &UNK_10b3c24c8;
        }
        puVar41 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar41 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x000001c0);
        if (iVar9 != 0) {
          in_stack_00000118 = *(long **)(lVar31 + 0x60);
          in_stack_00000120 = *(undefined **)(lVar31 + 0x68);
          in_stack_00000100 = *(long **)(lVar31 + 0x50);
          in_stack_00000108 = *(long **)(lVar31 + 0x58);
          in_stack_000000f8 = (long *)0x1;
          if (in_stack_00000100 == (long *)0x0) {
            in_stack_000000f8 = (long *)0x2;
          }
          in_stack_00000140 = *(long *)(lVar31 + 8);
          pcStack00000000000000e0 = &stack0x00000210;
          plStack00000000000000e8 = (long *)CONCAT71(plStack00000000000000e8._1_7_,1);
          in_stack_00000160 = (char *)&stack0x000000e0;
          in_stack_00000168 = (long *)&DAT_1061c2098;
          in_stack_00000110 = (undefined *)0x1;
          if (in_stack_00000118 == (long *)0x0) {
            in_stack_00000110 = (undefined *)0x2;
          }
          in_stack_00000130 = (long *)unaff_x25[0xd];
          in_stack_00000128 = unaff_x25[0xc];
          _bStack0000000000000138 = in_stack_000001d0;
          in_stack_00000150 = &stack0x00000160;
          in_stack_00000148 = s__108b39f4f;
          (**(code **)(puVar35 + 0x20))(puVar41,&stack0x000000f8);
        }
      }
    }
    else {
      lVar31 = 
      ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
      ;
      if ((*unaff_x23 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000070 =
             *(long **)(
                       ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
                       + 0x20);
        in_stack_00000078 =
             *(long **)(
                       ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3441763d3e12847bE
                       + 0x28);
        in_stack_00000068 = 3;
        puVar35 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar35 = &UNK_10b3c24c8;
        }
        puVar41 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar41 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x00000068);
        if (iVar9 != 0) {
          in_stack_00000098 = plVar27;
          *(long **)(unaff_x29 + -0xc0) = unaff_x27 + 0x10;
          *(undefined **)(unaff_x29 + -0xb8) = &DAT_10112965c;
          *(long **)(unaff_x29 + -0xb0) = unaff_x27 + 0x13;
          *(undefined **)(unaff_x29 + -0xa8) = &DAT_10112965c;
          *(long ***)(unaff_x29 + -0xa0) = &stack0x00000098;
          *(undefined1 **)(unaff_x29 + -0x98) =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          plStack00000000000000e8 = (long *)(unaff_x29 + -0xc0);
          pcStack00000000000000e0 = s_env_tui__by_repo____>_envs_108acd55e;
          in_stack_00000130 = in_stack_00000070;
          in_stack_00000128 = in_stack_00000068;
          _bStack0000000000000138 = in_stack_00000078;
          in_stack_00000118 = *(long **)(lVar31 + 0x60);
          in_stack_00000120 = *(undefined **)(lVar31 + 0x68);
          in_stack_00000100 = *(long **)(lVar31 + 0x50);
          in_stack_00000108 = *(long **)(lVar31 + 0x58);
          in_stack_000000f8 = (long *)0x1;
          if (in_stack_00000100 == (long *)0x0) {
            in_stack_000000f8 = (long *)0x2;
          }
          in_stack_00000140 = *(long *)(lVar31 + 8);
          in_stack_00000160 = &stack0x00000210;
          in_stack_00000168 = (long *)CONCAT71(in_stack_00000168._1_7_,1);
          in_stack_000001c0 = (char *)&stack0x00000160;
          in_stack_000001c8 = (long *)&DAT_1061c2098;
          in_stack_00000110 = (undefined *)0x1;
          if (in_stack_00000118 == (long *)0x0) {
            in_stack_00000110 = (undefined *)0x2;
          }
          in_stack_00000150 = &stack0x000001c0;
          in_stack_00000148 = s__108b39f4f;
          (**(code **)(puVar35 + 0x20))(puVar41,&stack0x000000f8);
        }
      }
    }
    in_stack_00000050 = plVar29 + (long)plVar27 * 9;
    plVar33 = plVar29;
    if (plVar27 != (long *)0x0) {
      plVar27 = unaff_x27 + 0x10;
      plVar39 = unaff_x27 + 0x13;
      plVar11 = plVar29;
LAB_1009f4138:
      plVar33 = plVar11 + 9;
      plVar16 = (long *)*plVar11;
      if (plVar16 != (long *)0x2) {
        _bStack0000000000000138 = (long *)plVar11[8];
        in_stack_00000130 = (long *)plVar11[7];
        in_stack_00000128 = plVar11[6];
        in_stack_00000120 = (undefined *)plVar11[5];
        plVar40 = (long *)plVar11[4];
        puVar35 = (undefined *)plVar11[3];
        in_stack_00000108 = (long *)plVar11[2];
        in_stack_00000100 = (long *)plVar11[1];
        in_stack_000000f8 = plVar16;
        in_stack_00000110 = puVar35;
        in_stack_00000118 = plVar40;
        if (plVar40 == (long *)0x0) {
          plVar11 = (long *)0x1;
        }
        else {
          plVar11 = (long *)_malloc(plVar40);
          if (plVar11 == (long *)0x0) {
            func_0x0001087c9084(1,plVar40);
            goto LAB_1009f59fc;
          }
        }
        _memcpy(plVar11,puVar35,plVar40);
        uVar18 = unaff_x27[6] ^ 0x736f6d6570736575;
        uVar15 = unaff_x27[7] ^ 0x646f72616e646f6d;
        uVar17 = unaff_x27[6] ^ 0x6c7967656e657261;
        uVar19 = unaff_x27[7] ^ 0x7465646279746573;
        uVar10 = 0;
        uVar21 = (ulong)plVar40 & 0xfffffffffffffff8;
        uVar20 = uVar10;
        if (uVar21 != 0) {
          do {
            uVar19 = *(ulong *)((long)plVar11 + uVar10) ^ uVar19;
            uVar18 = uVar18 + uVar15;
            uVar15 = uVar18 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
            uVar20 = uVar19 + uVar17 + uVar15;
            uVar17 = uVar19 + uVar17 ^ (uVar19 >> 0x30 | uVar19 << 0x10);
            uVar15 = uVar20 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
            uVar19 = uVar17 + (uVar18 >> 0x20 | uVar18 << 0x20);
            uVar18 = uVar19 ^ *(ulong *)((long)plVar11 + uVar10);
            uVar19 = uVar19 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
            uVar17 = uVar20 >> 0x20 | uVar20 << 0x20;
            uVar10 = uVar10 + 8;
            uVar20 = uVar21;
          } while (uVar10 < uVar21);
        }
        uVar10 = (ulong)plVar40 & 7;
        if (uVar10 < 4) {
          uVar22 = 0;
          uVar21 = 0;
          if (1 < uVar10) goto LAB_1009f4288;
        }
        else {
          uVar21 = (ulong)*(uint *)((long)plVar11 + uVar20);
          uVar22 = 4;
          if (5 < uVar10) {
LAB_1009f4288:
            uVar21 = (ulong)*(ushort *)((long)plVar11 + uVar22 + uVar20) << (uVar22 << 3) | uVar21;
            uVar22 = uVar22 | 2;
          }
        }
        if (uVar22 < uVar10) {
          uVar21 = (ulong)*(byte *)((long)plVar11 + uVar22 + uVar20) << (uVar22 << 3) | uVar21;
        }
        else if (uVar10 == 0) {
          uVar21 = 0xff;
          goto LAB_1009f4328;
        }
        uVar21 = uVar21 | 0xffL << (uVar10 << 3);
        uVar23 = uVar21 ^ uVar19;
        uVar20 = uVar15 + uVar18;
        uVar25 = uVar20 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar22 = uVar23 + uVar17 + uVar25;
        uVar24 = uVar23 + uVar17 ^ (uVar23 >> 0x30 | uVar23 << 0x10);
        uVar20 = uVar24 + (uVar20 >> 0x20 | uVar20 << 0x20);
        uVar23 = uVar20 ^ uVar21;
        if (uVar10 == 7) {
          uVar21 = 0;
          uVar15 = uVar22 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
          uVar17 = uVar22 >> 0x20 | uVar22 << 0x20;
          uVar18 = uVar23;
          uVar19 = uVar20 ^ (uVar24 >> 0x2b | uVar24 << 0x15);
        }
LAB_1009f4328:
        lVar31 = 0;
        uVar21 = uVar21 | (long)((long)plVar40 + 1) << 0x38;
        uVar19 = uVar21 ^ uVar19;
        uVar18 = uVar15 + uVar18;
        uVar15 = uVar18 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar10 = uVar19 + uVar17 + uVar15;
        uVar17 = uVar19 + uVar17 ^ (uVar19 >> 0x30 | uVar19 << 0x10);
        uVar15 = uVar10 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
        uVar19 = uVar17 + (uVar18 >> 0x20 | uVar18 << 0x20);
        uVar17 = uVar19 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
        uVar19 = (uVar19 ^ uVar21) + uVar15;
        uVar21 = uVar19 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar10 = uVar17 + ((uVar10 >> 0x20 | uVar10 << 0x20) ^ 0xff);
        uVar18 = uVar21 + uVar10;
        uVar10 = uVar10 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
        uVar15 = uVar18 ^ (uVar21 >> 0x2f | uVar21 << 0x11);
        uVar19 = uVar10 + (uVar19 >> 0x20 | uVar19 << 0x20);
        uVar21 = uVar15 + uVar19;
        uVar19 = uVar19 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
        uVar15 = uVar21 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar10 = uVar19 + (uVar18 >> 0x20 | uVar18 << 0x20);
        uVar18 = uVar15 + uVar10;
        uVar10 = uVar10 ^ (uVar19 >> 0x30 | uVar19 << 0x10);
        uVar15 = uVar18 ^ (uVar15 >> 0x2f | uVar15 << 0x11);
        uVar19 = uVar10 + (uVar21 >> 0x20 | uVar21 << 0x20);
        uVar17 = uVar19 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
        uVar21 = uVar15 + uVar19 ^ (uVar15 >> 0x33 | uVar15 << 0xd);
        uVar10 = uVar17 + (uVar18 >> 0x20 | uVar18 << 0x20);
        uVar19 = uVar21 + uVar10;
        uVar10 = uVar10 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
        uVar19 = (uVar10 >> 0x2b | uVar10 << 0x15) ^ (uVar21 >> 0x2f | uVar21 << 0x11) ^
                 (uVar19 >> 0x20 | uVar19 << 0x20) ^ uVar19;
        plVar16 = (long *)(uVar19 >> 0x39);
        lVar36 = unaff_x27[2];
        uVar18 = unaff_x27[3];
        bVar6 = (byte)(uVar19 >> 0x38);
        bVar26 = bVar6 >> 1;
        uVar21 = uVar19 & uVar18;
        uVar44 = *(undefined8 *)(lVar36 + uVar21);
        uVar10 = CONCAT17(-((byte)((ulong)uVar44 >> 0x38) == bVar26),
                          CONCAT16(-((byte)((ulong)uVar44 >> 0x30) == bVar26),
                                   CONCAT15(-((byte)((ulong)uVar44 >> 0x28) == bVar26),
                                            CONCAT14(-((byte)((ulong)uVar44 >> 0x20) == bVar26),
                                                     CONCAT13(-((byte)((ulong)uVar44 >> 0x18) ==
                                                               bVar26),CONCAT12(-((byte)((ulong)
                                                  uVar44 >> 0x10) == bVar26),
                                                  CONCAT11(-((byte)((ulong)uVar44 >> 8) == bVar26),
                                                           -((byte)uVar44 == bVar26)))))))) &
                 0x8080808080808080;
        do {
          if (uVar10 == 0) {
LAB_1009f4454:
            bVar34 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar44 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar44 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar44 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar44 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar44 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar44 >> 8) ==
                                                                     -1),-((char)uVar44 == -1)))))))
                                        ),1);
            if ((bVar34 & 1) == 0) goto code_r0x0001009f4468;
            if (in_stack_00000060[4] == 0) {
              __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h4a29ae0a008b6953E
                        (in_stack_00000060 + 2,1,in_stack_00000060 + 6,1);
            }
            plVar43 = plVar11;
            if (plVar40 == (long *)0x8000000000000000) goto LAB_1009f461c;
            if (plVar40 == (long *)0x0) {
              lVar31 = 1;
            }
            else {
              lVar31 = _malloc(plVar40);
              if (lVar31 == 0) {
                func_0x0001087c9084(1,plVar40);
                goto LAB_1009f59fc;
              }
            }
            _memcpy(lVar31,puVar35,plVar40);
            plVar16 = in_stack_00000130;
            lVar36 = in_stack_00000128;
            plVar30 = (long *)0x8000000000000000;
            plVar12 = in_stack_00000060;
            if (in_stack_00000120 != (undefined *)0x8000000000000000) {
              if (in_stack_00000130 == (long *)0x0) {
                plVar12 = (long *)0x1;
              }
              else {
                plVar12 = (long *)_malloc(in_stack_00000130);
                if (plVar12 == (long *)0x0) {
                  func_0x0001087c9084(1,plVar16);
                  goto LAB_1009f59fc;
                }
              }
              _memcpy(plVar12,lVar36,plVar16);
              plVar30 = plVar16;
            }
            bVar26 = bStack0000000000000138;
            *(long **)(unaff_x29 + -0xc0) = plVar27;
            *(undefined **)(unaff_x29 + -0xb8) = &DAT_10112965c;
            *(long **)(unaff_x29 + -0xb0) = plVar39;
            *(undefined **)(unaff_x29 + -0xa8) = &DAT_10112965c;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x000001c0,s___108ab8993,unaff_x29 + -0xc0);
            *(long **)(unaff_x29 + -0xb0) = in_stack_000001d0;
            plVar43 = (long *)in_stack_00000060[2];
            uVar10 = in_stack_00000060[3];
            uVar19 = uVar10 & uVar19;
            lVar36 = *(long *)((long)plVar43 + uVar19);
            uVar18 = CONCAT17(-(lVar36 < 0),
                              CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar36 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar36 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar36 >> 8) < '\0'),
                                                           -((char)lVar36 < '\0'))))))));
            if (uVar18 == 0) {
              lVar36 = 8;
              do {
                uVar19 = uVar19 + lVar36 & uVar10;
                lVar37 = *(long *)((long)plVar43 + uVar19);
                uVar18 = CONCAT17(-(lVar37 < 0),
                                  CONCAT16(-((char)((ulong)lVar37 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar37 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar37 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar37 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar37 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar37 >> 8) < '\0'),
                                                           -((char)lVar37 < '\0'))))))));
                lVar36 = lVar36 + 8;
              } while (uVar18 == 0);
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar19 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar10;
            uVar19 = (ulong)*(char *)((long)plVar43 + uVar18);
            if (-1 < *(char *)((long)plVar43 + uVar18)) {
              lVar36 = *plVar43;
              uVar19 = CONCAT17(-(lVar36 < 0),
                                CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar36 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar36 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar36 >> 8) < '\0'),
                                                           -((char)lVar36 < '\0'))))))));
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar18 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
              uVar19 = (ulong)*(byte *)((long)plVar43 + uVar18);
            }
            bVar6 = bVar6 >> 1;
            *(byte *)((long)plVar43 + uVar18) = bVar6;
            *(byte *)((long)plVar43 + (uVar18 - 8 & uVar10) + 8) = bVar6;
            plVar43 = plVar43 + uVar18 * -0xd;
            plVar43[-0xd] = (long)plVar40;
            plVar43[-0xc] = (long)plVar11;
            plVar43[-0xb] = (long)plVar40;
            plVar43[-10] = (long)plVar40;
            plVar43[-9] = lVar31;
            plVar43[-8] = (long)plVar40;
            plVar43[-7] = (long)plVar30;
            plVar43[-6] = (long)plVar12;
            plVar43[-5] = (long)plVar30;
            plVar43[-3] = (long)in_stack_000001c8;
            plVar43[-4] = (long)in_stack_000001c0;
            plVar43[-2] = *(long *)(unaff_x29 + -0xb0);
            *(byte *)(plVar43 + -1) = bVar26 & 1;
            in_stack_00000060[5] = in_stack_00000060[5] + 1;
            in_stack_00000060[4] = in_stack_00000060[4] - (uVar19 & 1);
            goto LAB_1009f461c;
          }
LAB_1009f4400:
          uVar15 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          plVar43 = (long *)(lVar36 + (uVar21 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >>
                                                3) & uVar18) * -0x68);
          in_stack_00000028 = plVar16;
          if (((long *)plVar43[-0xb] == plVar40) &&
             (iVar9 = _memcmp(plVar43[-0xc],plVar11,plVar40), iVar9 == 0)) goto LAB_1009f448c;
          uVar10 = uVar10 - 1 & uVar10;
        } while( true );
      }
    }
    if ((long)in_stack_00000050 - (long)plVar33 != 0) {
      uVar10 = (ulong)((long)in_stack_00000050 - (long)plVar33) / 0x48;
      plVar33 = plVar33 + 6;
      do {
        if (plVar33[-4] != 0) {
          _free(plVar33[-3]);
        }
        if (plVar33[-1] != -0x8000000000000000 && plVar33[-1] != 0) {
          _free(*plVar33);
        }
        plVar33 = plVar33 + 9;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
LAB_1009f4810:
    if (plVar28 != (long *)0x0) {
      _free(plVar29);
    }
    unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    lVar31 = unaff_x27[0x16];
    in_stack_00000020 = plVar28;
  } while( true );
code_r0x0001009f515c:
  lVar31 = lVar31 + 8;
  uVar18 = uVar18 + lVar31 & uVar19;
  uVar44 = *(undefined8 *)(lVar36 + uVar18);
  uVar10 = CONCAT17(-((byte)((ulong)uVar44 >> 0x38) == bVar26),
                    CONCAT16(-((byte)((ulong)uVar44 >> 0x30) == bVar26),
                             CONCAT15(-((byte)((ulong)uVar44 >> 0x28) == bVar26),
                                      CONCAT14(-((byte)((ulong)uVar44 >> 0x20) == bVar26),
                                               CONCAT13(-((byte)((ulong)uVar44 >> 0x18) == bVar26),
                                                        CONCAT12(-((byte)((ulong)uVar44 >> 0x10) ==
                                                                  bVar26),CONCAT11(-((byte)((ulong)
                                                  uVar44 >> 8) == bVar26),-((byte)uVar44 == bVar26))
                                                  )))))) & 0x8080808080808080;
  if (uVar10 != 0) goto LAB_1009f50fc;
  goto LAB_1009f5148;
LAB_1009f5180:
  if (plVar16 != (long *)0x0) {
    _free(plVar27);
  }
  lVar31 = plVar39[-7];
  plVar27 = plVar39;
joined_r0x0001009f51a0:
  if (lVar31 == -0x8000000000000000) {
LAB_1009f5304:
    plVar39 = in_stack_00000130;
    lVar31 = in_stack_00000128;
    plVar16 = (long *)0x8000000000000000;
    if (in_stack_00000120 != (undefined *)0x8000000000000000) {
      if (in_stack_00000130 == (long *)0x0) {
        in_stack_00000048 = 1;
      }
      else {
        in_stack_00000048 = _malloc(in_stack_00000130);
        if (in_stack_00000048 == 0) {
          func_0x0001087c9084(1,plVar39);
          goto LAB_1009f59fc;
        }
      }
      _memcpy(in_stack_00000048,lVar31);
      plVar16 = plVar39;
      in_stack_00000050 = plVar39;
      if ((plVar27[-7] != -0x8000000000000000) && (plVar27[-7] != 0)) {
        _free(plVar27[-6]);
      }
    }
    plVar27[-7] = (long)plVar16;
    plVar27[-6] = in_stack_00000048;
    plVar27[-5] = (long)in_stack_00000050;
  }
LAB_1009f5378:
  unaff_x25 = &stack0x00000160;
  *(byte *)(plVar27 + -1) = (*(byte *)(plVar27 + -1) | bStack0000000000000138) & 1;
  if (in_stack_00000108 != (long *)0x0) {
    _free(in_stack_00000110);
  }
  if ((in_stack_00000120 != (undefined *)0x8000000000000000) &&
     (in_stack_00000120 != (undefined *)0x0)) {
    _free(in_stack_00000128);
  }
  plVar39 = plVar33;
  unaff_x27 = in_stack_00000060;
  if (plVar33 == plVar11) goto LAB_1009f5484;
  goto LAB_1009f504c;
code_r0x0001009f3a54:
  in_stack_00000098 = plVar29;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    unaff_x19 = (long *)&
                        __ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
    ;
    if (((bRam000000010b629550 - 1 < 2) ||
        ((bRam000000010b629550 != 0 &&
         (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
                            ), cVar8 != '\0')))) &&
       (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
                           ),
       param_1 = 
       ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
       , (uVar10 & 1) != 0)) goto code_r0x0001009f3a90;
  }
  lVar31 = 
  ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
  ;
  if ((*unaff_x23 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_00000088 =
         *(long **)(
                   ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
                   + 0x20);
    in_stack_00000090 =
         *(long **)(
                   ___ZN17codex_cloud_tasks10env_detect17list_environments28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbb955fffe7a43d26E
                   + 0x28);
    in_stack_00000080 = 2;
    puVar35 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar35 = &UNK_10b3c24c8;
    }
    puVar41 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar41 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar35 + 0x18))(puVar41,&stack0x00000080);
    if (iVar9 != 0) {
      *(long **)(unaff_x29 + -0xc0) = unaff_x27 + 0x10;
      *(undefined **)(unaff_x29 + -0xb8) = &DAT_10112965c;
      *(long **)(unaff_x29 + -0xb0) = unaff_x27 + 0x13;
      *(undefined **)(unaff_x29 + -0xa8) = &DAT_10112965c;
      *(long ***)(unaff_x29 + -0xa0) = &stack0x00000098;
      *(code **)(unaff_x29 + -0x98) =
           __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
      ;
      in_stack_000001b0 = (long *)(unaff_x29 + -0xc0);
      in_stack_000001a8 = s__env_tui__by_repo_fetch_failed_f_108acd581;
      pcStack00000000000000e0 = (char *)&stack0x000001a8;
      plStack00000000000000e8 = (long *)&UNK_10b208fd0;
      in_stack_00000130 = in_stack_00000088;
      in_stack_00000128 = in_stack_00000080;
      _bStack0000000000000138 = in_stack_00000090;
      in_stack_00000118 = *(long **)(lVar31 + 0x60);
      in_stack_00000120 = *(undefined **)(lVar31 + 0x68);
      in_stack_00000100 = *(long **)(lVar31 + 0x50);
      in_stack_00000108 = *(long **)(lVar31 + 0x58);
      in_stack_000000f8 = (long *)0x1;
      if (in_stack_00000100 == (long *)0x0) {
        in_stack_000000f8 = (long *)0x2;
      }
      in_stack_00000140 = *(long *)(lVar31 + 8);
      in_stack_00000160 = &stack0x00000210;
      in_stack_00000168 = (long *)CONCAT71(in_stack_00000168._1_7_,1);
      in_stack_000001c0 = (char *)&stack0x00000160;
      in_stack_000001c8 = (long *)&DAT_1061c2098;
      in_stack_00000110 = (undefined *)0x1;
      if (in_stack_00000118 == (long *)0x0) {
        in_stack_00000110 = (undefined *)0x2;
      }
      in_stack_00000150 = &stack0x000001c0;
      in_stack_00000148 = s__108b39f4f;
      (**(code **)(puVar35 + 0x20))(puVar41,&stack0x000000f8);
    }
  }
  goto LAB_1009f3f38;
code_r0x0001009f3a90:
  *(long **)(unaff_x29 + -0xc0) = unaff_x27 + 0x10;
  *(undefined **)(unaff_x29 + -0xb8) = &DAT_10112965c;
  *(long **)(unaff_x29 + -0xb0) = unaff_x27 + 0x13;
  *(undefined **)(unaff_x29 + -0xa8) = &DAT_10112965c;
  *(long ***)(unaff_x29 + -0xa0) = &stack0x00000098;
  *(code **)(unaff_x29 + -0x98) =
       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
  ;
  goto code_r0x0001009f3ac0;
code_r0x0001009f4468:
  lVar31 = lVar31 + 8;
  uVar21 = uVar21 + lVar31 & uVar18;
  uVar44 = *(undefined8 *)(lVar36 + uVar21);
  uVar10 = CONCAT17(-((byte)((ulong)uVar44 >> 0x38) == bVar26),
                    CONCAT16(-((byte)((ulong)uVar44 >> 0x30) == bVar26),
                             CONCAT15(-((byte)((ulong)uVar44 >> 0x28) == bVar26),
                                      CONCAT14(-((byte)((ulong)uVar44 >> 0x20) == bVar26),
                                               CONCAT13(-((byte)((ulong)uVar44 >> 0x18) == bVar26),
                                                        CONCAT12(-((byte)((ulong)uVar44 >> 0x10) ==
                                                                  bVar26),CONCAT11(-((byte)((ulong)
                                                  uVar44 >> 8) == bVar26),-((byte)uVar44 == bVar26))
                                                  )))))) & 0x8080808080808080;
  if (uVar10 != 0) goto LAB_1009f4400;
  goto LAB_1009f4454;
LAB_1009f448c:
  if (plVar40 != (long *)0x0) {
    _free(plVar11);
  }
LAB_1009f461c:
  plVar11 = in_stack_00000130;
  lVar31 = in_stack_00000128;
  if (plVar43[-7] == -0x8000000000000000) {
    plVar16 = (long *)0x8000000000000000;
    if (in_stack_00000120 != (undefined *)0x8000000000000000) {
      if (in_stack_00000130 == (long *)0x0) {
        in_stack_00000048 = 1;
      }
      else {
        in_stack_00000048 = _malloc(in_stack_00000130);
        if (in_stack_00000048 == 0) {
          func_0x0001087c9084(1,plVar11);
          goto LAB_1009f59fc;
        }
      }
      _memcpy(in_stack_00000048,lVar31,plVar11);
      if ((plVar43[-7] != -0x8000000000000000) && (plVar43[-7] != 0)) {
        _free(plVar43[-6]);
      }
      in_stack_00000030 = plVar11;
      plVar16 = plVar11;
    }
    plVar43[-7] = (long)plVar16;
    plVar43[-6] = in_stack_00000048;
    plVar43[-5] = (long)in_stack_00000030;
  }
  unaff_x25 = &stack0x00000160;
  plVar11 = plVar43 + -4;
  *(byte *)(plVar43 + -1) = (*(byte *)(plVar43 + -1) | bStack0000000000000138) & 1;
  if (*plVar11 == -0x8000000000000000) {
    *(long **)(unaff_x29 + -0xc0) = plVar27;
    *(undefined **)(unaff_x29 + -0xb8) = &DAT_10112965c;
    *(long **)(unaff_x29 + -0xb0) = plVar39;
    *(undefined **)(unaff_x29 + -0xa8) = &DAT_10112965c;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000001c0,s___108ab8993,unaff_x29 + -0xc0);
    in_stack_00000168 = in_stack_000001c8;
    in_stack_00000160 = in_stack_000001c0;
    in_stack_00000170 = in_stack_000001d0;
    if ((*plVar11 != -0x8000000000000000) && (*plVar11 != 0)) {
      _free(plVar43[-3]);
    }
    plVar43[-3] = (long)in_stack_00000168;
    *plVar11 = (long)in_stack_00000160;
    plVar43[-2] = (long)in_stack_00000170;
  }
  if (in_stack_00000108 != (long *)0x0) {
    _free(in_stack_00000110);
  }
  if ((in_stack_00000120 != (undefined *)0x8000000000000000) &&
     (in_stack_00000120 != (undefined *)0x0)) {
    _free(in_stack_00000128);
  }
  plVar11 = plVar33;
  unaff_x27 = in_stack_00000060;
  if (plVar33 == in_stack_00000050) goto LAB_1009f4810;
  goto LAB_1009f4138;
LAB_1009f504c:
  plVar33 = plVar39 + 9;
  plVar27 = (long *)*plVar39;
  *(long **)(unaff_x29 + -0xb8) = plVar33;
  if (plVar27 != (long *)0x2) {
    _bStack0000000000000138 = (long *)plVar39[8];
    in_stack_00000130 = (long *)plVar39[7];
    in_stack_00000128 = plVar39[6];
    in_stack_00000120 = (undefined *)plVar39[5];
    plVar16 = (long *)plVar39[4];
    puVar35 = (undefined *)plVar39[3];
    in_stack_00000108 = (long *)plVar39[2];
    in_stack_00000100 = (long *)plVar39[1];
    in_stack_000000f8 = plVar27;
    in_stack_00000110 = puVar35;
    in_stack_00000118 = plVar16;
    if (plVar16 == (long *)0x0) {
      plVar27 = (long *)0x1;
    }
    else {
      plVar27 = (long *)_malloc(plVar16);
      if (plVar27 == (long *)0x0) {
        func_0x0001087c9084(1,plVar16);
        goto LAB_1009f59fc;
      }
    }
    _memcpy(plVar27,puVar35,plVar16);
    uVar21 = FUN_100e8dd9c(in_stack_00000060[6],in_stack_00000060[7],plVar27,plVar16);
    lVar31 = 0;
    lVar36 = in_stack_00000060[2];
    uVar19 = in_stack_00000060[3];
    bVar6 = (byte)(uVar21 >> 0x38);
    bVar26 = bVar6 >> 1;
    uVar18 = uVar21 & uVar19;
    uVar44 = *(undefined8 *)(lVar36 + uVar18);
    uVar10 = CONCAT17(-((byte)((ulong)uVar44 >> 0x38) == bVar26),
                      CONCAT16(-((byte)((ulong)uVar44 >> 0x30) == bVar26),
                               CONCAT15(-((byte)((ulong)uVar44 >> 0x28) == bVar26),
                                        CONCAT14(-((byte)((ulong)uVar44 >> 0x20) == bVar26),
                                                 CONCAT13(-((byte)((ulong)uVar44 >> 0x18) == bVar26)
                                                          ,CONCAT12(-((byte)((ulong)uVar44 >> 0x10)
                                                                     == bVar26),
                                                                    CONCAT11(-((byte)((ulong)uVar44
                                                                                     >> 8) == bVar26
                                                                              ),-((byte)uVar44 ==
                                                                                 bVar26)))))))) &
             0x8080808080808080;
    do {
      if (uVar10 == 0) {
LAB_1009f5148:
        bVar34 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar44 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar44 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar44 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar44
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar44 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar44 >> 8) == -1),
                                                           -((char)uVar44 == -1)))))))),1);
        if ((bVar34 & 1) == 0) goto code_r0x0001009f515c;
        if (in_stack_00000060[4] == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h4a29ae0a008b6953E
                    (in_stack_00000060 + 2,1,in_stack_00000060 + 6,1);
        }
        if (plVar16 == (long *)0x8000000000000000) {
          if (plVar27[-7] != -0x8000000000000000) goto LAB_1009f5378;
          goto LAB_1009f5304;
        }
        if (plVar16 == (long *)0x0) {
          lVar31 = 1;
        }
        else {
          lVar31 = _malloc(plVar16);
          if (lVar31 == 0) {
            func_0x0001087c9084(1,plVar16);
            goto LAB_1009f59fc;
          }
        }
        _memcpy(lVar31,puVar35,plVar16);
        plVar39 = in_stack_00000130;
        lVar36 = in_stack_00000128;
        plVar40 = (long *)0x8000000000000000;
        if (in_stack_00000120 != (undefined *)0x8000000000000000) {
          if (in_stack_00000130 == (long *)0x0) {
            in_stack_00000020 = (long *)0x1;
          }
          else {
            in_stack_00000020 = (long *)_malloc(in_stack_00000130);
            if (in_stack_00000020 == (long *)0x0) {
              func_0x0001087c9084(1,plVar39);
              goto LAB_1009f59fc;
            }
          }
          _memcpy(in_stack_00000020,lVar36);
          in_stack_00000028 = plVar39;
          plVar40 = plVar39;
        }
        plVar39 = (long *)in_stack_00000060[2];
        uVar10 = in_stack_00000060[3];
        uVar21 = uVar10 & uVar21;
        lVar36 = *(long *)((long)plVar39 + uVar21);
        uVar19 = CONCAT17(-(lVar36 < 0),
                          CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar36 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar36 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar36 >> 8) < '\0'),-((char)lVar36 < '\0'))))))))
        ;
        if (uVar19 == 0) {
          lVar36 = 8;
          do {
            uVar21 = uVar21 + lVar36 & uVar10;
            lVar37 = *(long *)((long)plVar39 + uVar21);
            uVar19 = CONCAT17(-(lVar37 < 0),
                              CONCAT16(-((char)((ulong)lVar37 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar37 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar37 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar37 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar37 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar37 >> 8) < '\0'),
                                                           -((char)lVar37 < '\0'))))))));
            lVar36 = lVar36 + 8;
          } while (uVar19 == 0);
        }
        uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar21 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar10;
        uVar19 = (ulong)*(char *)((long)plVar39 + uVar18);
        if (-1 < *(char *)((long)plVar39 + uVar18)) {
          lVar36 = *plVar39;
          uVar19 = CONCAT17(-(lVar36 < 0),
                            CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar36 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar36 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar36 >> 8) < '\0'),
                                                           -((char)lVar36 < '\0'))))))));
          uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar18 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
          uVar19 = (ulong)*(byte *)((long)plVar39 + uVar18);
        }
        bVar6 = bVar6 >> 1;
        *(byte *)((long)plVar39 + uVar18) = bVar6;
        *(byte *)((long)plVar39 + (uVar18 - 8 & uVar10) + 8) = bVar6;
        plVar39 = plVar39 + uVar18 * -0xd;
        in_stack_00000060[4] = in_stack_00000060[4] - (uVar19 & 1);
        plVar39[-0xd] = (long)plVar16;
        plVar39[-0xc] = (long)plVar27;
        plVar39[-0xb] = (long)plVar16;
        plVar39[-10] = (long)plVar16;
        plVar39[-9] = lVar31;
        plVar39[-8] = (long)plVar16;
        plVar39[-7] = (long)plVar40;
        plVar39[-6] = (long)in_stack_00000020;
        plVar39[-5] = (long)in_stack_00000028;
        plVar39[-4] = -0x8000000000000000;
        *(byte *)(plVar39 + -1) = bStack0000000000000138 & 1;
        in_stack_00000060[5] = in_stack_00000060[5] + 1;
        lVar31 = plVar39[-7];
        plVar27 = plVar39;
        goto joined_r0x0001009f51a0;
      }
LAB_1009f50fc:
      uVar15 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      plVar39 = (long *)(lVar36 + (uVar18 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                                  uVar19) * -0x68);
      if (((long *)plVar39[-0xb] == plVar16) &&
         (iVar9 = _memcmp(plVar39[-0xc],plVar27,plVar16), iVar9 == 0)) goto LAB_1009f5180;
      uVar10 = uVar10 - 1 & uVar10;
    } while( true );
  }
LAB_1009f541c:
  if ((long)plVar11 - (long)plVar33 != 0) {
    uVar10 = (ulong)((long)plVar11 - (long)plVar33) / 0x48;
    plVar33 = plVar33 + 6;
    do {
      if (plVar33[-4] != 0) {
        _free(plVar33[-3]);
      }
      if (plVar33[-1] != -0x8000000000000000 && plVar33[-1] != 0) {
        _free(*plVar33);
      }
      plVar33 = plVar33 + 9;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_1009f5484:
  if (plVar28 != (long *)0x0) {
    _free(plVar29);
  }
LAB_1009f55a4:
  *(undefined1 *)(unaff_x27 + 0xf) = 0;
  in_stack_00000178 = (long *)unaff_x27[2];
  lVar31 = unaff_x27[3];
  plVar28 = (long *)unaff_x27[5];
  lVar36 = *in_stack_00000178;
  in_stack_00000170 = in_stack_00000178;
  in_stack_00000168 = in_stack_00000178;
  if (lVar31 != 0) {
    in_stack_00000170 = in_stack_00000178 + lVar31 * -0xd + -0xd;
    in_stack_00000168 = (long *)(lVar31 * 0x69 + 0x71);
  }
  in_stack_00000160 = (char *)0x0;
  if (lVar31 != 0) {
    in_stack_00000160 = (char *)0x8;
  }
  in_stack_00000180 =
       CONCAT17(-(-1 < lVar36),
                CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                         CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                  CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                           CONCAT13(-(-1 < (char)((ulong)lVar36 >> 0x18)),
                                                    CONCAT12(-(-1 < (char)((ulong)lVar36 >> 0x10)),
                                                             CONCAT11(-(-1 < (char)((ulong)lVar36 >>
                                                                                   8)),
                                                                      -(-1 < (char)lVar36)))))))) &
       0x8080808080808080;
  in_stack_00000188 = in_stack_00000178 + 1;
  in_stack_00000190 = (undefined *)((long)in_stack_00000178 + lVar31 + 1);
  in_stack_00000198 = plVar28;
  if (plVar28 != (long *)0x0) {
    plVar29 = in_stack_00000178 + 1;
    if (in_stack_00000180 == 0) {
      do {
        in_stack_00000188 = plVar29 + 1;
        lVar31 = *plVar29;
        in_stack_00000178 = in_stack_00000178 + -0x68;
        in_stack_00000180 =
             CONCAT17(-(-1 < lVar31),
                      CONCAT16(-(-1 < (char)((ulong)lVar31 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar31 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar31 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar31 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar31 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar31 >> 8)),-(-1 < (char)lVar31)))))))) &
             0x8080808080808080;
        plVar29 = in_stack_00000188;
      } while (in_stack_00000180 == 0);
    }
    uVar10 = (in_stack_00000180 >> 7 & 0xff00ff00ff00ff00) >> 8 |
             (in_stack_00000180 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    iVar9 = (int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
    in_stack_00000180 = in_stack_00000180 - 1 & in_stack_00000180;
    in_stack_00000198 = (long *)((long)plVar28 + -1);
    lVar31 = in_stack_00000178[(long)-iVar9 * 0xd + -0xd];
    if (lVar31 != -0x8000000000000000) {
      lVar13 = in_stack_00000178[(long)-iVar9 * 0xd + -0xc];
      lVar36 = in_stack_00000178[(long)-iVar9 * 0xd + -10];
      lVar2 = in_stack_00000178[(long)-iVar9 * 0xd + -9];
      lVar37 = in_stack_00000178[(long)-iVar9 * 0xd + -8];
      lVar3 = in_stack_00000178[(long)-iVar9 * 0xd + -7];
      lVar42 = in_stack_00000178[(long)-iVar9 * 0xd + -6];
      lVar4 = in_stack_00000178[(long)-iVar9 * 0xd + -5];
      lVar1 = in_stack_00000178[(long)-iVar9 * 0xd + -4];
      lVar5 = in_stack_00000178[(long)-iVar9 * 0xd + -3];
      lVar38 = in_stack_00000178[(long)-iVar9 * 0xd + -2];
      unaff_x25[0x15] = in_stack_00000178[(long)-iVar9 * 0xd + -1];
      unaff_x25[0x14] = lVar38;
      if (lVar31 != 0) {
        _free(lVar13);
      }
      if (lVar36 != -0x8000000000000000) {
        plVar29 = plVar28;
        if (plVar28 < (long *)0x5) {
          plVar29 = (long *)0x4;
        }
        lVar31 = (long)plVar29 * 0x50;
        if ((long *)0x199999999999999 < plVar28) {
          uVar44 = 0;
LAB_1009f5758:
          func_0x0001087c9084(uVar44,lVar31);
LAB_1009f59fc:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1009f5a00);
          (*pcVar7)();
        }
        if (lVar31 == 0) {
          plVar29 = (long *)0x0;
          plVar28 = (long *)0x8;
        }
        else {
          uVar44 = 8;
          plVar28 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar31,8);
          if (plVar28 == (long *)0x0) goto LAB_1009f5758;
          unaff_x25 = &stack0x00000160;
        }
        *plVar28 = lVar36;
        plVar28[1] = lVar2;
        plVar28[2] = lVar37;
        plVar28[3] = lVar3;
        plVar28[4] = lVar42;
        plVar28[5] = lVar4;
        plVar28[6] = lVar1;
        plVar28[7] = lVar5;
        lVar31 = unaff_x25[0x14];
        plVar28[9] = unaff_x25[0x15];
        plVar28[8] = lVar31;
        in_stack_000001a8 = (char *)plVar29;
        in_stack_000001b0 = plVar28;
        in_stack_000001b8 = (long *)0x1;
        unaff_x25[0xd] = unaff_x25[1];
        unaff_x25[0xc] = *unaff_x25;
        unaff_x25[0xf] = unaff_x25[3];
        unaff_x25[0xe] = unaff_x25[2];
        unaff_x25[0x11] = unaff_x25[5];
        unaff_x25[0x10] = unaff_x25[4];
        unaff_x25[0x13] = unaff_x25[7];
        unaff_x25[0x12] = unaff_x25[6];
        plVar29 = in_stack_000001b8;
        lVar31 = in_stack_000001d8;
        uVar10 = in_stack_000001e0;
        plVar27 = in_stack_000001e8;
        while (in_stack_000001b8 = plVar29, in_stack_000001f8 != 0) {
          while (uVar10 == 0) {
            lVar36 = *plVar27;
            lVar31 = lVar31 + -0x340;
            plVar27 = plVar27 + 1;
            uVar10 = CONCAT17(-(-1 < lVar36),
                              CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar36 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar36 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8)),
                                                           -(-1 < (char)lVar36)))))))) &
                     0x8080808080808080;
          }
          uVar19 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 - 1 & uVar10;
          lVar37 = lVar31 + (long)-(int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) *
                            0x68;
          lVar36 = *(long *)(lVar37 + -0x68);
          if (lVar36 == -0x8000000000000000) break;
          uVar44 = *(undefined8 *)(lVar37 + -0x60);
          plVar33 = *(long **)(lVar37 + -0x50);
          plVar11 = *(long **)(lVar37 + -0x40);
          plVar39 = *(long **)(lVar37 + -0x48);
          plVar16 = *(long **)(lVar37 + -0x30);
          puVar35 = *(undefined **)(lVar37 + -0x38);
          lVar42 = *(long *)(lVar37 + -0x20);
          puVar41 = *(undefined **)(lVar37 + -0x28);
          plVar43 = *(long **)(lVar37 + -0x10);
          plVar40 = *(long **)(lVar37 + -0x18);
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(lVar37 + -8);
          if (lVar36 != 0) {
            _free(uVar44);
          }
          if (plVar33 == (long *)0x8000000000000000) break;
          in_stack_000000f8 = plVar33;
          in_stack_00000100 = plVar39;
          in_stack_00000108 = plVar11;
          in_stack_00000110 = puVar35;
          in_stack_00000118 = plVar16;
          in_stack_00000120 = puVar41;
          in_stack_00000128 = lVar42;
          in_stack_00000130 = plVar40;
          _bStack0000000000000138 = plVar43;
          in_stack_00000140 = *(long *)(unaff_x29 + -0x80);
          if (plVar29 == (long *)in_stack_000001a8) {
            FUN_108855060(&stack0x000001a8,plVar29,in_stack_000001f8,8,0x50);
            plVar28 = in_stack_000001b0;
          }
          plVar33 = plVar28 + (long)plVar29 * 10;
          plVar33[1] = (long)in_stack_00000100;
          *plVar33 = (long)in_stack_000000f8;
          plVar33[7] = (long)in_stack_00000130;
          plVar33[6] = in_stack_00000128;
          plVar33[9] = in_stack_00000140;
          plVar33[8] = (long)_bStack0000000000000138;
          plVar33[3] = (long)in_stack_00000110;
          plVar33[2] = (long)in_stack_00000108;
          plVar33[5] = (long)in_stack_00000120;
          plVar33[4] = (long)in_stack_00000118;
          plVar29 = (long *)((long)plVar29 + 1);
          in_stack_000001f8 = in_stack_000001f8 + -1;
        }
        in_stack_000001e8 = plVar27;
        in_stack_000001e0 = uVar10;
        in_stack_000001d8 = lVar31;
        FUN_100d081f0(&stack0x000001c0);
        plVar28 = in_stack_000001b8;
        plVar29 = in_stack_000001b0;
        in_stack_000000f0 = in_stack_000001b8;
        plStack00000000000000e8 = in_stack_000001b0;
        pcStack00000000000000e0 = in_stack_000001a8;
        in_stack_000000f8 = (long *)(unaff_x29 + -0xc0);
        if ((long *)0x1 < in_stack_000001b8) {
          if (in_stack_000001b8 < (long *)0x15) {
            FUN_100e95b60(in_stack_000001b0,in_stack_000001b8);
          }
          else {
            __ZN4core5slice4sort6stable14driftsort_main17h30d69b8d868f0817E
                      (in_stack_000001b0,in_stack_000001b8,&stack0x000000f8);
          }
        }
        goto LAB_1009f56b0;
      }
    }
  }
  pcStack00000000000000e0 = (char *)0x0;
  FUN_100d081f0(&stack0x00000160);
  plVar28 = (long *)0x0;
  plVar29 = (long *)0x8;
LAB_1009f56b0:
  plVar27 = (long *)pcStack00000000000000e0;
  if (in_stack_00000060[0x10] != 0) {
    _free(in_stack_00000060[0x11]);
  }
  lVar31 = in_stack_00000060[0xc];
  lVar36 = in_stack_00000060[0xd];
  if (lVar36 != 0) {
    puVar32 = (undefined8 *)(lVar31 + 8);
    do {
      if (puVar32[-1] != 0) {
        _free(*puVar32);
      }
      puVar32 = puVar32 + 3;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  if (in_stack_00000060[0xb] != 0) {
    _free(lVar31);
  }
  *(undefined1 *)(in_stack_00000060 + 0xf) = 0;
  unaff_x27 = in_stack_00000060;
LAB_1009f570c:
  *in_stack_00000008 = plVar27;
  in_stack_00000008[1] = plVar29;
  uVar14 = 1;
  in_stack_00000008[2] = plVar28;
LAB_1009f49cc:
  *(undefined1 *)((long)unaff_x27 + 0x79) = uVar14;
  return;
}

