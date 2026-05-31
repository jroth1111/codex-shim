
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100813d9c(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 ******ppppppuStack_150;
  char ***pppcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  char **ppcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  long **pplStack_118;
  long lStack_110;
  ulong uStack_108;
  long *plStack_100;
  char *******pppppppcStack_f8;
  ulong *puStack_f0;
  undefined *puStack_e8;
  char ***pppcStack_e0;
  undefined *puStack_d8;
  char **ppcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  char *pcStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  char *******pppppppcStack_70;
  char ****ppppcStack_68;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) ||
       (((1 < bRam000000010b637290 - 1 &&
         ((bRam000000010b637290 == 0 ||
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                             ), cVar6 == '\0')))) ||
        (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                           ),
        lVar11 = 
        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E,
        iVar7 == 0)))) {
      lVar11 = 
      ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_1008145ec;
      uStack_160 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                    + 0x20);
      uStack_158 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                    + 0x28);
      uStack_168 = 5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_168);
      if (iVar7 == 0) goto LAB_1008145ec;
      lVar13 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
               + 0x30;
      lVar16 = param_1[2];
      lVar8 = param_1[3];
      uVar17 = param_1[7];
      if (uVar17 == 0) {
        lVar12 = 0;
        uVar9 = 0;
        lVar14 = 0;
      }
      else {
        uVar9 = param_1[4];
        uVar15 = 0;
        if (uVar9 <= (ulong)param_1[6]) {
          uVar15 = uVar9;
        }
        lVar12 = param_1[6] - uVar15;
        lVar14 = uVar17 - (uVar9 - lVar12);
        if (uVar17 < uVar9 - lVar12 || lVar14 == 0) {
          lVar14 = 0;
          uVar9 = lVar12 + uVar17;
        }
      }
      ppcStack_d0 = (char **)param_1[5];
      pppcStack_e0 = (char ***)((long)ppcStack_d0 + lVar12 * 0x50);
      puStack_d8 = (undefined *)((long)ppcStack_d0 + uVar9 * 0x50);
      puStack_c8 = (undefined *)((long)ppcStack_d0 + lVar14 * 0x50);
      lStack_110 = FUN_1004d8568(&pppcStack_e0);
      lStack_110 = (lVar16 - lVar8) + lStack_110;
      uVar17 = *param_2;
      if ((long)uVar17 < 2) {
        if (uVar17 == 0) {
          uStack_108 = param_2[3];
        }
        else {
          uStack_108 = param_2[5];
          if (param_2[3] <= param_2[5]) {
            uStack_108 = param_2[3];
          }
        }
      }
      else {
        if (uVar17 == 2) {
          uVar17 = (ulong)(byte)(*(char *)((long)param_2 + 0x3b) - *(char *)((long)param_2 + 0x3a));
          uVar9 = param_2[3] + uVar17;
          if (CARRY8(param_2[3],uVar17)) {
            uVar9 = 0xffffffffffffffff;
          }
          uVar17 = param_2[9];
        }
        else {
          if (uVar17 == 3) {
            uStack_108 = param_2[2];
            goto LAB_100814528;
          }
          uVar9 = param_2[2] + param_2[5];
          if (CARRY8(param_2[2],param_2[5])) {
            uVar9 = 0xffffffffffffffff;
          }
          uVar17 = param_2[8];
        }
        uStack_108 = uVar9 + uVar17;
        if (CARRY8(uVar9,uVar17)) {
          uStack_108 = 0xffffffffffffffff;
        }
      }
LAB_100814528:
      plStack_100 = &lStack_110;
      pppppppcStack_f8 =
           (char *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      puStack_f0 = &uStack_108;
      puStack_e8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pplStack_118 = &plStack_100;
      pcStack_120 = s_buffer_queue__head_remaining_____108ac88eb;
      ppcStack_130 = &pcStack_120;
      puStack_128 = &UNK_10b208fd0;
      pppcStack_148 = &ppcStack_130;
      ppppppuStack_150 = (undefined8 ******)0x1;
      uStack_140 = 1;
      uStack_c0 = *(long *)(lVar11 + 0x60);
      uStack_b8 = *(undefined8 *)(lVar11 + 0x68);
      puStack_d8 = *(undefined **)(lVar11 + 0x50);
      ppcStack_d0 = *(char ***)(lVar11 + 0x58);
      pppcStack_e0 = (char ***)0x1;
      if (puStack_d8 == (undefined *)0x0) {
        pppcStack_e0 = (char ***)0x2;
      }
      uStack_98 = *(undefined8 *)(lVar11 + 8);
      pppppppuStack_80 = &ppppppuStack_150;
      puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
      pppppppcStack_70 = (char *******)&pppppppuStack_80;
      ppppcStack_68 = (char ****)&DAT_1061c2098;
      puStack_c8 = (undefined *)0x1;
      if (uStack_c0 == 0) {
        puStack_c8 = (undefined *)0x2;
      }
      uStack_a8 = uStack_160;
      uStack_b0 = uStack_168;
      uStack_a0 = uStack_158;
      pppppppuStack_88 = &pppppppcStack_70;
      pcStack_90 = s__108b39f4f;
      lStack_138 = lVar13;
      (**(code **)(puVar1 + 0x20))(puVar2,&pppcStack_e0);
      goto LAB_1008145ec;
    }
    puVar1 = (undefined *)
             (
             ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
             + 0x30);
    lVar13 = param_1[2];
    lVar16 = param_1[3];
    uVar17 = param_1[7];
    if (uVar17 == 0) {
      lVar14 = 0;
      uVar9 = 0;
      lVar8 = 0;
    }
    else {
      uVar15 = param_1[4];
      uVar9 = 0;
      if (uVar15 <= (ulong)param_1[6]) {
        uVar9 = uVar15;
      }
      lVar14 = param_1[6] - uVar9;
      uVar18 = uVar15 - lVar14;
      lVar12 = uVar17 - uVar18;
      uVar9 = lVar14 + uVar17;
      if (uVar18 <= uVar17 && lVar12 != 0) {
        uVar9 = uVar15;
      }
      lVar8 = 0;
      if (uVar18 <= uVar17 && lVar12 != 0) {
        lVar8 = lVar12;
      }
    }
    ppcStack_d0 = (char **)param_1[5];
    pppcStack_e0 = (char ***)((long)ppcStack_d0 + lVar14 * 0x50);
    puStack_d8 = (undefined *)((long)ppcStack_d0 + uVar9 * 0x50);
    puStack_c8 = (undefined *)((long)ppcStack_d0 + lVar8 * 0x50);
    lVar8 = FUN_1004d8568(&pppcStack_e0);
    ppcStack_130 = (char **)((lVar13 - lVar16) + lVar8);
    uVar17 = *param_2;
    if ((long)uVar17 < 2) {
      if (uVar17 == 0) {
        pcStack_120 = (char *)param_2[3];
      }
      else {
        pcStack_120 = (char *)param_2[5];
        if ((char *)param_2[3] <= (char *)param_2[5]) {
          pcStack_120 = (char *)param_2[3];
        }
      }
    }
    else {
      if (uVar17 == 2) {
        uVar17 = (ulong)(byte)(*(char *)((long)param_2 + 0x3b) - *(char *)((long)param_2 + 0x3a));
        uVar9 = param_2[3] + uVar17;
        if (CARRY8(param_2[3],uVar17)) {
          uVar9 = 0xffffffffffffffff;
        }
        uVar17 = param_2[9];
      }
      else {
        if (uVar17 == 3) {
          pcStack_120 = (char *)param_2[2];
          goto LAB_100814298;
        }
        uVar9 = param_2[2] + param_2[5];
        if (CARRY8(param_2[2],param_2[5])) {
          uVar9 = 0xffffffffffffffff;
        }
        uVar17 = param_2[8];
      }
      pcStack_120 = (char *)(uVar9 + uVar17);
      if (CARRY8(uVar9,uVar17)) {
        pcStack_120 = (char *)0xffffffffffffffff;
      }
    }
LAB_100814298:
    pppcStack_e0 = &ppcStack_130;
    puStack_d8 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    ppcStack_d0 = &pcStack_120;
    puStack_c8 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    ppppcStack_68 = &pppcStack_e0;
    pppppppcStack_70 = (char *******)s_buffer_queue__head_remaining_____108ac88eb;
    pppppppuStack_80 = &pppppppcStack_70;
    puStack_78 = &UNK_10b208fd0;
    pppppppcStack_f8 = (char *******)&pppppppuStack_80;
    plStack_100 = (long *)0x1;
    puStack_f0 = (ulong *)0x1;
    puStack_e8 = puVar1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar11,&plStack_100);
    lVar11 = 
    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppcStack_148 =
           *(char ****)
            (
            ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
            + 0x20);
      uStack_140 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                    + 0x28);
      ppppppuStack_150 = (undefined8 ******)0x5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppuStack_150);
      if (iVar7 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar11,puVar2,puVar1,&ppppppuStack_150,&plStack_100);
      }
    }
LAB_1008145ec:
    uStack_b8 = param_2[5];
    uStack_c0 = param_2[4];
    uStack_a8 = param_2[7];
    uStack_b0 = param_2[6];
    uStack_98 = param_2[9];
    uStack_a0 = param_2[8];
    puStack_d8 = (undefined *)param_2[1];
    pppcStack_e0 = (char ***)*param_2;
    puStack_c8 = (undefined *)param_2[3];
    ppcStack_d0 = (char **)param_2[2];
    uVar17 = param_1[4];
    uVar9 = param_1[7];
    if (uVar9 == uVar17) {
      __ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h96aff5fc3d6310dcE();
      uVar9 = param_1[7];
      uVar17 = param_1[4];
    }
    param_1[7] = uVar9 + 1;
    uVar15 = 0;
    if (uVar17 <= param_1[6] + uVar9) {
      uVar15 = uVar17;
    }
    puVar10 = (ulong *)(param_1[5] + ((param_1[6] + uVar9) - uVar15) * 0x50);
    puVar10[7] = uStack_a8;
    puVar10[6] = uStack_b0;
    puVar10[9] = uStack_98;
    puVar10[8] = uStack_a0;
    puVar10[3] = (ulong)puStack_c8;
    puVar10[2] = (ulong)ppcStack_d0;
    puVar10[5] = uStack_b8;
    puVar10[4] = uStack_c0;
    puVar10[1] = (ulong)puStack_d8;
    *puVar10 = (ulong)pppcStack_e0;
    return;
  }
  uVar17 = *param_2;
  if ((long)uVar17 < 2) {
    if (uVar17 == 0) {
      uVar17 = param_2[3];
      uVar9 = param_1[3];
    }
    else {
      uVar17 = param_2[5];
      if (param_2[3] <= param_2[5]) {
        uVar17 = param_2[3];
      }
      uVar9 = param_1[3];
    }
  }
  else if (uVar17 == 2) {
    uVar17 = (ulong)(byte)(*(char *)((long)param_2 + 0x3b) - *(char *)((long)param_2 + 0x3a));
    uVar9 = param_2[3] + uVar17;
    if (CARRY8(param_2[3],uVar17)) {
      uVar9 = 0xffffffffffffffff;
    }
    uVar17 = uVar9 + param_2[9];
    if (CARRY8(uVar9,param_2[9])) {
      uVar17 = 0xffffffffffffffff;
    }
    uVar9 = param_1[3];
  }
  else if (uVar17 == 3) {
    uVar17 = param_2[2];
    uVar9 = param_1[3];
  }
  else {
    uVar9 = param_2[2] + param_2[5];
    if (CARRY8(param_2[2],param_2[5])) {
      uVar9 = 0xffffffffffffffff;
    }
    uVar17 = uVar9 + param_2[8];
    if (CARRY8(uVar9,param_2[8])) {
      uVar17 = 0xffffffffffffffff;
    }
    uVar9 = param_1[3];
  }
  if ((uVar9 != 0) && (uVar15 = param_1[2], *param_1 - uVar15 < uVar17)) {
    lVar11 = uVar15 - uVar9;
    if (uVar15 < uVar9) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar9,uVar15,&UNK_10b406aa8);
LAB_10081495c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100814960);
      (*pcVar5)();
    }
    param_1[2] = 0;
    if (lVar11 != 0) {
      _memmove(param_1[1],param_1[1] + uVar9,lVar11);
      param_1[2] = lVar11;
    }
    uVar9 = 0;
    param_1[3] = 0;
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) ||
      ((1 < bRam000000010b6372a8 - 1 &&
       ((bRam000000010b6372a8 == 0 ||
        (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                           ), cVar6 == '\0')))))) ||
     (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                        ), iVar7 == 0)) {
    lVar11 = 
    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_10081477c;
    uStack_178 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                  + 0x20);
    uStack_170 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                  + 0x28);
    uStack_180 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_180);
    if (iVar7 == 0) goto LAB_10081477c;
    lStack_110 = param_1[2] - param_1[3];
    uVar17 = *param_2;
    if ((long)uVar17 < 2) {
      if (uVar17 == 0) {
        uStack_108 = param_2[3];
      }
      else {
        uStack_108 = param_2[5];
        if (param_2[3] <= param_2[5]) {
          uStack_108 = param_2[3];
        }
      }
    }
    else {
      if (uVar17 == 2) {
        uVar17 = (ulong)(byte)(*(char *)((long)param_2 + 0x3b) - *(char *)((long)param_2 + 0x3a));
        uVar9 = param_2[3] + uVar17;
        if (CARRY8(param_2[3],uVar17)) {
          uVar9 = 0xffffffffffffffff;
        }
        uVar17 = param_2[9];
      }
      else {
        if (uVar17 == 3) {
          uStack_108 = param_2[2];
          goto LAB_1008146b4;
        }
        uVar9 = param_2[2] + param_2[5];
        if (CARRY8(param_2[2],param_2[5])) {
          uVar9 = 0xffffffffffffffff;
        }
        uVar17 = param_2[8];
      }
      uStack_108 = uVar9 + uVar17;
      if (CARRY8(uVar9,uVar17)) {
        uStack_108 = 0xffffffffffffffff;
      }
    }
LAB_1008146b4:
    lStack_138 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                 + 0x30;
    plStack_100 = &lStack_110;
    pppppppcStack_f8 =
         (char *******)
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_f0 = &uStack_108;
    puStack_e8 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    pplStack_118 = &plStack_100;
    pcStack_120 = s__buffer_flatten__head_remaining___108ac88b4;
    ppcStack_130 = &pcStack_120;
    puStack_128 = &UNK_10b208fd0;
    pppcStack_148 = &ppcStack_130;
    ppppppuStack_150 = (undefined8 ******)0x1;
    uStack_140 = 1;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_a0 = uStack_170;
    uStack_c0 = *(long *)(lVar11 + 0x60);
    uStack_b8 = *(undefined8 *)(lVar11 + 0x68);
    puStack_d8 = *(undefined **)(lVar11 + 0x50);
    ppcStack_d0 = *(char ***)(lVar11 + 0x58);
    pppcStack_e0 = (char ***)0x1;
    if (puStack_d8 == (undefined *)0x0) {
      pppcStack_e0 = (char ***)0x2;
    }
    uStack_98 = *(undefined8 *)(lVar11 + 8);
    pppppppuStack_80 = &ppppppuStack_150;
    puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
    pppppppcStack_70 = (char *******)&pppppppuStack_80;
    ppppcStack_68 = (char ****)&DAT_1061c2098;
    puStack_c8 = (undefined *)0x1;
    if (uStack_c0 == 0) {
      puStack_c8 = (undefined *)0x2;
    }
    pppppppuStack_88 = &pppppppcStack_70;
    pcStack_90 = s__108b39f4f;
    (**(code **)(puVar1 + 0x20))(puVar2,&pppcStack_e0);
    goto LAB_10081477c;
  }
  ppcStack_130 = (char **)(param_1[2] - uVar9);
  uVar17 = *param_2;
  if ((long)uVar17 < 2) {
    if (uVar17 == 0) {
      pcStack_120 = (char *)param_2[3];
    }
    else {
      pcStack_120 = (char *)param_2[5];
      if ((char *)param_2[3] <= (char *)param_2[5]) {
        pcStack_120 = (char *)param_2[3];
      }
    }
  }
  else {
    if (uVar17 == 2) {
      uVar17 = (ulong)(byte)(*(char *)((long)param_2 + 0x3b) - *(char *)((long)param_2 + 0x3a));
      uVar9 = param_2[3] + uVar17;
      if (CARRY8(param_2[3],uVar17)) {
        uVar9 = 0xffffffffffffffff;
      }
      uVar17 = param_2[9];
    }
    else {
      if (uVar17 == 3) {
        pcStack_120 = (char *)param_2[2];
        goto LAB_1008143e0;
      }
      uVar9 = param_2[2] + param_2[5];
      if (CARRY8(param_2[2],param_2[5])) {
        uVar9 = 0xffffffffffffffff;
      }
      uVar17 = param_2[8];
    }
    pcStack_120 = (char *)(uVar9 + uVar17);
    if (CARRY8(uVar9,uVar17)) {
      pcStack_120 = (char *)0xffffffffffffffff;
    }
  }
LAB_1008143e0:
  puStack_e8 = (undefined *)
               (
               ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
               + 0x30);
  pppcStack_e0 = &ppcStack_130;
  puStack_d8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  ppcStack_d0 = &pcStack_120;
  puStack_c8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  ppppcStack_68 = &pppcStack_e0;
  pppppppcStack_70 = (char *******)s__buffer_flatten__head_remaining___108ac88b4;
  pppppppuStack_80 = &pppppppcStack_70;
  puStack_78 = &UNK_10b208fd0;
  pppppppcStack_f8 = (char *******)&pppppppuStack_80;
  plStack_100 = (long *)0x1;
  puStack_f0 = (ulong *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
            (___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
             ,&plStack_100);
  lVar11 = 
  ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    pppcStack_148 =
         *(char ****)
          (
          ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
          + 0x20);
    uStack_140 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                  + 0x28);
    ppppppuStack_150 = (undefined8 ******)0x5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppuStack_150);
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar11,puVar2,puVar1,&ppppppuStack_150,&plStack_100);
    }
  }
LAB_10081477c:
  do {
    uVar17 = *param_2;
    if ((long)uVar17 < 2) {
      if (uVar17 == 0) {
        uVar9 = param_2[2];
        uVar15 = param_2[3];
      }
      else {
        uVar9 = param_2[2];
        uVar15 = param_2[5];
        if (param_2[3] <= param_2[5]) {
          uVar15 = param_2[3];
        }
      }
    }
    else if (uVar17 == 2) {
      bVar3 = *(byte *)((long)param_2 + 0x3a);
      uVar18 = (ulong)bVar3;
      bVar4 = *(byte *)((long)param_2 + 0x3b);
      uVar15 = param_2[3];
      if (uVar15 == 0 && bVar4 == bVar3) {
        uVar9 = param_2[8];
        uVar15 = param_2[9];
      }
      else if (bVar4 == bVar3) {
        uVar9 = param_2[2];
      }
      else {
        if ((bVar4 < bVar3) || (0x12 < bVar4)) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                    (uVar18,(ulong)bVar4,0x12,&UNK_10b24de90);
          goto LAB_10081495c;
        }
        uVar9 = (long)param_2 + uVar18 + 0x28;
        uVar15 = bVar4 - uVar18;
      }
    }
    else if (uVar17 == 3) {
      uVar9 = param_2[1];
      uVar15 = param_2[2];
    }
    else {
      uVar9 = param_2[2];
      lVar11 = 0x18;
      if (uVar9 != 0) {
        lVar11 = 0;
      }
      uVar18 = param_2[5];
      if (uVar9 != 0) {
        uVar18 = uVar9;
      }
      uVar15 = param_2[8];
      puVar10 = param_2 + 7;
      if (param_2[5] != 0 || uVar9 != 0) {
        uVar15 = uVar18;
        puVar10 = (ulong *)((long)param_2 + lVar11 + 8);
      }
      uVar9 = *puVar10;
    }
    if (uVar15 == 0) {
      if (uVar17 < 3) {
        lVar11 = 0x18;
        lVar13 = 0x10;
        lVar16 = 0x20;
        lVar8 = 8;
      }
      else {
        if (uVar17 == 3) {
          return;
        }
        lVar11 = 0x28;
        lVar13 = 0x20;
        lVar16 = 0x30;
        lVar8 = 0x18;
      }
      (**(code **)(*(long *)((long)param_2 + lVar8) + 0x20))
                ((long)param_2 + lVar16,*(undefined8 *)((long)param_2 + lVar13),
                 *(undefined8 *)((long)param_2 + lVar11));
      return;
    }
    lVar11 = param_1[2];
    if ((ulong)(*param_1 - lVar11) < uVar15) {
      thunk_FUN_108855060(param_1,lVar11,uVar15,1,1);
      lVar11 = param_1[2];
    }
    _memcpy(param_1[1] + lVar11,uVar9,uVar15);
    param_1[2] = lVar11 + uVar15;
    FUN_1003f4328(param_2,uVar15);
  } while( true );
}

