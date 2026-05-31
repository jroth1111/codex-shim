
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100813518(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char ***pppcVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  char ***pppcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  char ***pppcVar18;
  long lVar19;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char **ppcStack_140;
  char ***pppcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  char **ppcStack_120;
  undefined *puStack_118;
  long *plStack_110;
  long **pplStack_108;
  char *pcStack_100;
  long lStack_f8;
  char **ppcStack_f0;
  char ***pppcStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  char ***pppcStack_d0;
  undefined *puStack_c8;
  long **pplStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  char ***pppcStack_60;
  undefined8 ***pppuStack_58;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    uVar15 = param_1[3];
    if ((uVar15 != 0) && (uVar9 = param_1[2], *param_1 - uVar9 < (ulong)param_2[2])) {
      lVar17 = uVar9 - uVar15;
      if (uVar9 < uVar15) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar15,uVar9,&UNK_10b406aa8);
LAB_100813d5c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100813d60);
        (*pcVar5)();
      }
      param_1[2] = 0;
      if (lVar17 != 0) {
        _memmove(param_1[1],param_1[1] + uVar15,lVar17);
        param_1[2] = lVar17;
      }
      uVar15 = 0;
      param_1[3] = 0;
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b6372a8 - 1 < 2 ||
         ((bRam000000010b6372a8 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                             ), cVar6 != '\0')))) &&
        (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                           ), iVar7 != 0)))) {
      ppcStack_120 = (char **)(param_1[2] - uVar15);
      plStack_110 = (long *)param_2[2];
      puStack_d8 = (undefined *)
                   (
                   ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                   + 0x30);
      pppcStack_d0 = &ppcStack_120;
      puStack_c8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pplStack_c0 = &plStack_110;
      puStack_b8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppuStack_58 = &pppcStack_d0;
      pppcStack_60 = (char ***)s__buffer_flatten__head_remaining___108ac88b4;
      pppuStack_70 = &pppcStack_60;
      puStack_68 = &UNK_10b208fd0;
      pppcStack_e8 = (char ***)&pppuStack_70;
      ppcStack_f0 = (char **)0x1;
      plStack_e0 = (long *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                 ,&ppcStack_f0);
      lVar17 = 
      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_138 =
             *(char ****)
              (
              ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
              + 0x20);
        uStack_130 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                      + 0x28);
        ppcStack_140 = (char **)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppcStack_140);
        if (iVar7 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar2,puVar1,&ppcStack_140,&ppcStack_f0);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_168 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                      + 0x20);
        uStack_160 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                      + 0x28);
        uStack_170 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_170);
        if (iVar7 != 0) {
          pcStack_100 = (char *)(param_1[2] - param_1[3]);
          lStack_f8 = param_2[2];
          lStack_128 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                       + 0x30;
          ppcStack_f0 = &pcStack_100;
          pppcStack_e8 = (char ***)
                         &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          plStack_e0 = &lStack_f8;
          puStack_d8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pplStack_108 = (long **)&ppcStack_f0;
          plStack_110 = (long *)s__buffer_flatten__head_remaining___108ac88b4;
          ppcStack_120 = (char **)&plStack_110;
          puStack_118 = &UNK_10b208fd0;
          pppcStack_138 = &ppcStack_120;
          ppcStack_140 = (char **)0x1;
          uStack_130 = 1;
          lStack_b0 = *(long *)(lVar17 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar17 + 0x68);
          puStack_c8 = *(undefined **)(lVar17 + 0x50);
          pplStack_c0 = *(long ***)(lVar17 + 0x58);
          pppcStack_d0 = (char ***)0x1;
          if (puStack_c8 == (undefined *)0x0) {
            pppcStack_d0 = (char ***)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar17 + 8);
          uStack_84 = *(undefined4 *)(lVar17 + 0xc);
          pppuStack_70 = (undefined8 ***)&ppcStack_140;
          puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
          pppcStack_60 = (char ***)&pppuStack_70;
          pppuStack_58 = (undefined8 ***)&DAT_1061c2098;
          puStack_b8 = (undefined *)0x1;
          if (lStack_b0 == 0) {
            puStack_b8 = (undefined *)0x2;
          }
          uStack_98 = uStack_168;
          uStack_a0 = uStack_170;
          uStack_90 = uStack_160;
          pppuStack_78 = &pppcStack_60;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&pppcStack_d0);
        }
      }
    }
    lVar17 = param_2[1];
    if ((char ***)param_2[2] != (char ***)0x0) {
      lVar19 = param_1[2];
      pppcVar4 = (char ***)param_2[2];
      do {
        pppcVar18 = pppcVar4;
        if ((char ***)(*param_1 - lVar19) < pppcVar18) {
          thunk_FUN_108855060(param_1,lVar19,pppcVar18,1,1);
          lVar19 = param_1[2];
        }
        _memcpy(param_1[1] + lVar19,lVar17,pppcVar18);
        lVar19 = lVar19 + (long)pppcVar18;
        param_1[2] = lVar19;
        pppcVar12 = (char ***)param_2[2];
        pppcVar4 = (char ***)((long)pppcVar12 - (long)pppcVar18);
        ppcStack_140 = (char **)pppcVar18;
        if (pppcVar12 < pppcVar18) {
          pppcStack_d0 = &ppcStack_140;
          puStack_c8 = &DAT_100c929e0;
          pplStack_c0 = (long **)&ppcStack_f0;
          puStack_b8 = &DAT_100c929e0;
          ppcStack_f0 = (char **)pppcVar12;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__cannot_advance_past__remaining__108aba12e,&pppcStack_d0,&UNK_10b243fb8);
          goto LAB_100813d5c;
        }
        lVar17 = param_2[1] + (long)pppcVar18;
        param_2[1] = lVar17;
        param_2[2] = (long)pppcVar4;
      } while (pppcVar4 != (char ***)0x0);
    }
    (**(code **)(*param_2 + 0x20))(param_2 + 3,lVar17,0);
  }
  else {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b637290 - 1 < 2 ||
         ((bRam000000010b637290 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                             ), cVar6 != '\0')))))) &&
       (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                          ),
       lVar17 = 
       ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E,
       iVar7 != 0)) {
      puVar1 = (undefined *)
               (
               ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
               + 0x30);
      lVar19 = param_1[2];
      lVar3 = param_1[3];
      uVar15 = param_1[7];
      if (uVar15 == 0) {
        lVar13 = 0;
        uVar9 = 0;
        lVar8 = 0;
      }
      else {
        uVar14 = param_1[4];
        uVar9 = 0;
        if (uVar14 <= (ulong)param_1[6]) {
          uVar9 = uVar14;
        }
        lVar13 = param_1[6] - uVar9;
        uVar16 = uVar14 - lVar13;
        lVar11 = uVar15 - uVar16;
        uVar9 = lVar13 + uVar15;
        if (uVar16 <= uVar15 && lVar11 != 0) {
          uVar9 = uVar14;
        }
        lVar8 = 0;
        if (uVar16 <= uVar15 && lVar11 != 0) {
          lVar8 = lVar11;
        }
      }
      pplStack_c0 = (long **)param_1[5];
      pppcStack_d0 = (char ***)((long)pplStack_c0 + lVar13 * 0x50);
      puStack_c8 = (undefined *)((long)pplStack_c0 + uVar9 * 0x50);
      puStack_b8 = (undefined *)((long)pplStack_c0 + lVar8 * 0x50);
      lVar8 = FUN_1004d8568(&pppcStack_d0);
      ppcStack_120 = (char **)((lVar19 - lVar3) + lVar8);
      plStack_110 = (long *)param_2[2];
      pppcStack_d0 = &ppcStack_120;
      puStack_c8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pplStack_c0 = &plStack_110;
      puStack_b8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppcStack_60 = (char ***)s_buffer_queue__head_remaining_____108ac88eb;
      pppuStack_70 = &pppcStack_60;
      puStack_68 = &UNK_10b208fd0;
      pppcStack_e8 = (char ***)&pppuStack_70;
      ppcStack_f0 = (char **)0x1;
      plStack_e0 = (long *)0x1;
      puStack_d8 = puVar1;
      pppuStack_58 = &pppcStack_d0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar17,&ppcStack_f0);
      lVar17 = 
      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_138 =
             *(char ****)
              (
              ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
              + 0x20);
        uStack_130 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                      + 0x28);
        ppcStack_140 = (char **)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppcStack_140);
        if (iVar7 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar2,puVar1,&ppcStack_140,&ppcStack_f0);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_150 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                      + 0x20);
        uStack_148 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                      + 0x28);
        uStack_158 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_158);
        if (iVar7 != 0) {
          lVar19 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                   + 0x30;
          lVar3 = param_1[2];
          lVar8 = param_1[3];
          uVar15 = param_1[7];
          if (uVar15 == 0) {
            lVar11 = 0;
            uVar9 = 0;
            lVar13 = 0;
          }
          else {
            uVar9 = param_1[4];
            uVar14 = 0;
            if (uVar9 <= (ulong)param_1[6]) {
              uVar14 = uVar9;
            }
            lVar11 = param_1[6] - uVar14;
            lVar13 = uVar15 - (uVar9 - lVar11);
            if (uVar15 < uVar9 - lVar11 || lVar13 == 0) {
              lVar13 = 0;
              uVar9 = lVar11 + uVar15;
            }
          }
          pplStack_c0 = (long **)param_1[5];
          pppcStack_d0 = (char ***)((long)pplStack_c0 + lVar11 * 0x50);
          puStack_c8 = (undefined *)((long)pplStack_c0 + uVar9 * 0x50);
          puStack_b8 = (undefined *)((long)pplStack_c0 + lVar13 * 0x50);
          lVar13 = FUN_1004d8568(&pppcStack_d0);
          pcStack_100 = (char *)((lVar3 - lVar8) + lVar13);
          lStack_f8 = param_2[2];
          ppcStack_f0 = &pcStack_100;
          pppcStack_e8 = (char ***)
                         &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          plStack_e0 = &lStack_f8;
          puStack_d8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pplStack_108 = (long **)&ppcStack_f0;
          plStack_110 = (long *)s_buffer_queue__head_remaining_____108ac88eb;
          ppcStack_120 = (char **)&plStack_110;
          puStack_118 = &UNK_10b208fd0;
          pppcStack_138 = &ppcStack_120;
          ppcStack_140 = (char **)0x1;
          uStack_130 = 1;
          lStack_b0 = *(long *)(lVar17 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar17 + 0x68);
          puStack_c8 = *(undefined **)(lVar17 + 0x50);
          pplStack_c0 = *(long ***)(lVar17 + 0x58);
          pppcStack_d0 = (char ***)0x1;
          if (puStack_c8 == (undefined *)0x0) {
            pppcStack_d0 = (char ***)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar17 + 8);
          uStack_84 = *(undefined4 *)(lVar17 + 0xc);
          pppuStack_70 = (undefined8 ***)&ppcStack_140;
          puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
          pppcStack_60 = (char ***)&pppuStack_70;
          pppuStack_58 = (undefined8 ***)&DAT_1061c2098;
          puStack_b8 = (undefined *)0x1;
          if (lStack_b0 == 0) {
            puStack_b8 = (undefined *)0x2;
          }
          uStack_98 = uStack_150;
          uStack_a0 = uStack_158;
          uStack_90 = uStack_148;
          pppuStack_78 = &pppcStack_60;
          pcStack_80 = s__108b39f4f;
          lStack_128 = lVar19;
          (**(code **)(puVar1 + 0x20))(puVar2,&pppcStack_d0);
        }
      }
    }
    pplStack_c0 = (long **)param_2[1];
    puStack_c8 = (undefined *)*param_2;
    lStack_b0 = param_2[3];
    puStack_b8 = (undefined *)param_2[2];
    pppcStack_d0 = (char ***)0x0;
    uVar15 = param_1[4];
    uVar9 = param_1[7];
    if (uVar9 == uVar15) {
      __ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h96aff5fc3d6310dcE();
      uVar9 = param_1[7];
      uVar15 = param_1[4];
    }
    param_1[7] = uVar9 + 1;
    uVar14 = 0;
    if (uVar15 <= param_1[6] + uVar9) {
      uVar14 = uVar15;
    }
    puVar10 = (undefined8 *)(param_1[5] + ((param_1[6] + uVar9) - uVar14) * 0x50);
    puVar10[7] = uStack_98;
    puVar10[6] = uStack_a0;
    puVar10[9] = CONCAT44(uStack_84,uStack_88);
    puVar10[8] = uStack_90;
    puVar10[3] = puStack_b8;
    puVar10[2] = pplStack_c0;
    puVar10[5] = uStack_a8;
    puVar10[4] = lStack_b0;
    puVar10[1] = puStack_c8;
    *puVar10 = pppcStack_d0;
  }
  return;
}

