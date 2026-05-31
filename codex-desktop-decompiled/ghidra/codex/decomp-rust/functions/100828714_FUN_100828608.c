
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100828608(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 ***extraout_x9;
  undefined8 ***extraout_x9_00;
  undefined8 ***extraout_x9_01;
  undefined8 ***extraout_x9_02;
  undefined8 ***extraout_x9_03;
  undefined8 ***extraout_x9_04;
  undefined8 ***pppuVar8;
  undefined8 ***extraout_x9_05;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char **ppcStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char ***pppcStack_130;
  char ***pppcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char **ppcStack_110;
  undefined *puStack_108;
  char *pcStack_100;
  char ***pppcStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  char **ppcStack_e0;
  char ***pppcStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  char ***pppcStack_88;
  undefined8 ***pppuStack_80;
  char ***pppcStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  
  ppcStack_1b8 = (char **)param_3[2];
  uVar6 = *param_2;
  if (uVar6 < 0x8000000000000001) {
    uVar6 = 0;
  }
  pppuVar8 = (undefined8 ***)(uVar6 & 0x7fffffffffffffff);
  if (pppuVar8 == (undefined8 ***)0x0) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b6378d8 - 1 < 2 ||
         ((bRam000000010b6378d8 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                             ), cVar4 != '\0')))))) &&
       (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                          ), iVar5 != 0)) {
      lStack_c8 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                  + 0x30;
      pppuStack_70 = (undefined8 ***)&ppcStack_1b8;
      puStack_68 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppcStack_78 = (char ***)&pppuStack_70;
      pppuStack_80 = (undefined8 ***)s_encoding_chunked_B_108ac8d02;
      pppuStack_f0 = &pppuStack_80;
      puStack_e8 = &UNK_10b208fd0;
      pppcStack_d8 = (char ***)&pppuStack_f0;
      ppcStack_e0 = (char **)0x1;
      uStack_d0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                 ,&ppcStack_e0);
      lVar3 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_128 =
             *(char ****)
              (___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
              + 0x20);
        uStack_120 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                      + 0x28);
        pppcStack_130 = (char ***)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pppcStack_130);
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar3,puVar2,puVar1,&pppcStack_130,&ppcStack_e0);
        }
      }
    }
    else {
      lVar3 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_170 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                      + 0x20);
        uStack_168 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                      + 0x28);
        uStack_178 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_178);
        if (iVar5 != 0) {
          lStack_118 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hb60307975e1a91edE
                       + 0x30;
          pppuStack_f0 = (undefined8 ***)&ppcStack_1b8;
          puStack_e8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppcStack_f8 = (char ***)&pppuStack_f0;
          pcStack_100 = s_encoding_chunked_B_108ac8d02;
          ppcStack_110 = &pcStack_100;
          puStack_108 = &UNK_10b208fd0;
          pppcStack_128 = &ppcStack_110;
          pppcStack_130 = (char ***)0x1;
          uStack_120 = 1;
          lStack_c0 = *(long *)(lVar3 + 0x60);
          uStack_b8 = *(undefined8 *)(lVar3 + 0x68);
          pppcStack_d8 = *(char ****)(lVar3 + 0x50);
          uStack_d0 = *(ulong *)(lVar3 + 0x58);
          ppcStack_e0 = (char **)0x1;
          if (pppcStack_d8 == (char ***)0x0) {
            ppcStack_e0 = (char **)0x2;
          }
          uStack_98 = *(undefined4 *)(lVar3 + 8);
          uStack_94 = *(undefined4 *)(lVar3 + 0xc);
          pppuStack_80 = &pppcStack_130;
          pppcStack_78 = (char ***)CONCAT71(pppcStack_78._1_7_,1);
          pppuStack_70 = &pppuStack_80;
          puStack_68 = &DAT_1061c2098;
          lStack_c8 = 1;
          if (lStack_c0 == 0) {
            lStack_c8 = 2;
          }
          uStack_a8 = uStack_170;
          uStack_b0 = uStack_178;
          uStack_a0 = uStack_168;
          pppcStack_88 = (char ***)&pppuStack_70;
          pcStack_90 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppcStack_e0);
        }
      }
    }
    pppuStack_70 = (undefined8 ***)ppcStack_1b8;
    ppcStack_e0 = (char **)0x0;
    pppcStack_d8 = (char ***)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    pppcStack_130 = (char ***)&pppuStack_70;
    pppcStack_128 =
         (char ***)
         &
         __ZN4core3fmt3num55__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_usize_GT_3fmt17hfd7302eeb515121eE
    ;
    __ZN4core3fmt5write17h64810b21425781ecE(&ppcStack_e0,&UNK_10b404580,s__108b23e1d,&pppcStack_130)
    ;
    uStack_1b0 = pppcStack_d8;
    uStack_1a8 = (undefined4)uStack_d0;
    uVar7 = 2;
  }
  else if (pppuVar8 == (undefined8 ***)0x1) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b6378f0 - 1 < 2 ||
         ((bRam000000010b6378f0 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                             ), cVar4 != '\0')))))) &&
       (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                          ), iVar5 != 0)) {
      lStack_c8 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                  + 0x30;
      pppuStack_70 = (undefined8 ***)&ppcStack_1b8;
      puStack_68 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppcStack_78 = (char ***)&pppuStack_70;
      pppuStack_80 = (undefined8 ***)s_sized_write__len___108ac8d18;
      pppuStack_f0 = &pppuStack_80;
      puStack_e8 = &UNK_10b208fd0;
      pppcStack_d8 = (char ***)&pppuStack_f0;
      ppcStack_e0 = (char **)0x1;
      uStack_d0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                 ,&ppcStack_e0);
      lVar3 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_128 =
             *(char ****)
              (___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
              + 0x20);
        uStack_120 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                      + 0x28);
        pppcStack_130 = (char ***)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pppcStack_130);
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar3,puVar2,puVar1,&pppcStack_130,&ppcStack_e0);
        }
      }
    }
    else {
      lVar3 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_158 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                      + 0x20);
        uStack_150 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                      + 0x28);
        uStack_160 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_160);
        if (iVar5 != 0) {
          lStack_118 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17hbe354f780e2a8075E
                       + 0x30;
          pppuStack_f0 = (undefined8 ***)&ppcStack_1b8;
          puStack_e8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppcStack_f8 = (char ***)&pppuStack_f0;
          pcStack_100 = s_sized_write__len___108ac8d18;
          ppcStack_110 = &pcStack_100;
          puStack_108 = &UNK_10b208fd0;
          pppcStack_128 = &ppcStack_110;
          pppcStack_130 = (char ***)0x1;
          uStack_120 = 1;
          lStack_c0 = *(long *)(lVar3 + 0x60);
          uStack_b8 = *(undefined8 *)(lVar3 + 0x68);
          pppcStack_d8 = *(char ****)(lVar3 + 0x50);
          uStack_d0 = *(undefined8 *)(lVar3 + 0x58);
          ppcStack_e0 = (char **)0x1;
          if (pppcStack_d8 == (char ***)0x0) {
            ppcStack_e0 = (char **)0x2;
          }
          uStack_98 = *(undefined4 *)(lVar3 + 8);
          uStack_94 = *(undefined4 *)(lVar3 + 0xc);
          pppuStack_80 = &pppcStack_130;
          pppcStack_78 = (char ***)CONCAT71(pppcStack_78._1_7_,1);
          pppuStack_70 = &pppuStack_80;
          puStack_68 = &DAT_1061c2098;
          lStack_c8 = 1;
          if (lStack_c0 == 0) {
            lStack_c8 = 2;
          }
          uStack_a8 = uStack_158;
          uStack_b0 = uStack_160;
          uStack_a0 = uStack_150;
          pppcStack_88 = (char ***)&pppuStack_70;
          pcStack_90 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppcStack_e0);
        }
      }
    }
    ppcStack_e0 = (char **)param_2[1];
    if (ppcStack_e0 < ppcStack_1b8) {
      param_2[1] = 0;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      param_2[1] = (long)ppcStack_e0 - (long)ppcStack_1b8;
    }
  }
  else {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b637908 - 1 < 2 ||
         ((bRam000000010b637908 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                             ), pppuVar8 = extraout_x9_05, cVar4 != '\0')))) &&
        (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                           ), pppuVar8 = extraout_x9_01, iVar5 != 0)))) {
      lStack_c8 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                  + 0x30;
      pppuStack_70 = (undefined8 ***)&ppcStack_1b8;
      puStack_68 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppcStack_78 = (char ***)&pppuStack_70;
      pppuStack_80 = (undefined8 ***)s_close_delimited_write_B_108ac8d2e;
      pppuStack_f0 = &pppuStack_80;
      puStack_e8 = &UNK_10b208fd0;
      pppcStack_d8 = (char ***)&pppuStack_f0;
      ppcStack_e0 = (char **)0x1;
      uStack_d0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                 ,&ppcStack_e0);
      lVar3 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E;
      pppuVar8 = extraout_x9_02;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_128 =
             *(char ****)
              (___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
              + 0x20);
        uStack_120 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                      + 0x28);
        pppcStack_130 = (char ***)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pppcStack_130);
        pppuVar8 = extraout_x9_03;
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar3,puVar2,puVar1,&pppcStack_130,&ppcStack_e0);
          pppuVar8 = extraout_x9_04;
        }
      }
    }
    else {
      lVar3 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_140 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                      + 0x20);
        uStack_138 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                      + 0x28);
        uStack_148 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_148);
        pppuVar8 = extraout_x9;
        if (iVar5 != 0) {
          lStack_118 = ___ZN14rama_http_core5proto2h16encode7Encoder6encode10__CALLSITE17he8d9ab09626d2b53E
                       + 0x30;
          pppuStack_f0 = (undefined8 ***)&ppcStack_1b8;
          puStack_e8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppcStack_f8 = (char ***)&pppuStack_f0;
          pcStack_100 = s_close_delimited_write_B_108ac8d2e;
          ppcStack_110 = &pcStack_100;
          puStack_108 = &UNK_10b208fd0;
          pppcStack_128 = &ppcStack_110;
          pppcStack_130 = (char ***)0x1;
          uStack_120 = 1;
          lStack_c0 = *(long *)(lVar3 + 0x60);
          uStack_b8 = *(undefined8 *)(lVar3 + 0x68);
          pppcStack_d8 = *(char ****)(lVar3 + 0x50);
          uStack_d0 = *(undefined8 *)(lVar3 + 0x58);
          ppcStack_e0 = (char **)0x1;
          if (pppcStack_d8 == (char ***)0x0) {
            ppcStack_e0 = (char **)0x2;
          }
          uStack_98 = *(undefined4 *)(lVar3 + 8);
          uStack_94 = *(undefined4 *)(lVar3 + 0xc);
          pppuStack_80 = &pppcStack_130;
          pppcStack_78 = (char ***)CONCAT71(pppcStack_78._1_7_,1);
          pppuStack_70 = &pppuStack_80;
          puStack_68 = &DAT_1061c2098;
          lStack_c8 = 1;
          if (lStack_c0 == 0) {
            lStack_c8 = 2;
          }
          uStack_a8 = uStack_140;
          uStack_b0 = uStack_148;
          uStack_a0 = uStack_138;
          pppcStack_88 = (char ***)&pppuStack_70;
          pcStack_90 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppcStack_e0);
          pppuVar8 = extraout_x9_00;
        }
      }
    }
    uVar7 = 0;
    ppcStack_e0 = (char **)pppuVar8;
  }
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar12 = param_3[3];
  uVar11 = param_3[2];
  *param_1 = uVar7;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  param_1[4] = uVar12;
  param_1[3] = uVar11;
  param_1[5] = ppcStack_e0;
  param_1[7] = CONCAT44(uStack_1a4,uStack_1a8);
  param_1[6] = uStack_1b0;
  param_1[8] = &UNK_108caa991;
  param_1[9] = 2;
  return;
}

