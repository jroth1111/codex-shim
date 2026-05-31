
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
__ZN16codex_app_server13ShutdownState6update17h88f84f28d18ca801E
          (int *param_1,char ****param_2,undefined8 ******param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *****pppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  char *******pppppppcStack_190;
  char ******ppppppcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined1 *puStack_128;
  char **ppcStack_120;
  undefined *puStack_118;
  char *pcStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char *******pppppppcStack_e8;
  char ***pppcStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  char *******pppppppcStack_a0;
  char ***pppcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  char *******pppppppcStack_78;
  undefined8 *******pppppppuStack_70;
  undefined1 *puStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  
  if ((char)param_1[4] != '\x01') {
    return 0;
  }
  pppppuStack_1a0 = (undefined8 *****)param_2;
  ppppppuStack_198 = param_3;
  if ((param_2 != (char ****)0x0) && ((*(byte *)((long)param_1 + 0x11) & 1) == 0)) {
    if (*param_1 == 1 && *(char *****)(param_1 + 2) == param_2) {
      return 0;
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
       (((bVar2 = bRam000000010b628350, bRam000000010b628350 - 1 < 2 ||
         ((bRam000000010b628350 != 0 &&
          (bVar2 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b628340), bVar2 != 0)))) &&
        (iVar3 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b628340,bVar2), iVar3 != 0)))) {
      puStack_128 = (undefined1 *)(lRam000000010b628340 + 0x30);
      puStack_68 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppppppuStack_108 = &pppppppuStack_70;
      pcStack_110 = s__shutdown_signal_restart__waitin_108add360;
      ppcStack_120 = &pcStack_110;
      puStack_118 = &UNK_10b25d1e8;
      pppppppuStack_138 = (undefined8 *******)&ppcStack_120;
      ppppppuStack_140 = (undefined8 ******)0x1;
      ppppppuStack_130 = (undefined8 ******)0x1;
      pppppppuStack_70 = (undefined8 *******)&pppppuStack_1a0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b628340,&ppppppuStack_140);
      lVar1 = lRam000000010b628340;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        ppppppcStack_188 = *(char *******)(lRam000000010b628340 + 0x20);
        uStack_180 = *(undefined8 *)(lRam000000010b628340 + 0x28);
        pppppppcStack_190 = (char *******)0x3;
        puVar5 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar3 = (**(code **)(puVar5 + 0x18))(puVar4,&pppppppcStack_190);
        if (iVar3 != 0) {
          lStack_b0 = *(long *)(lVar1 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar1 + 0x68);
          pppppppuStack_c8 = *(undefined8 ********)(lVar1 + 0x50);
          ppppppuStack_c0 = *(undefined8 *******)(lVar1 + 0x58);
          puStack_d0 = (undefined1 *)0x1;
          if (pppppppuStack_c8 == (undefined8 *******)0x0) {
            puStack_d0 = (undefined1 *)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar1 + 8);
          uStack_84 = *(undefined4 *)(lVar1 + 0xc);
          pppppppuStack_60 = &ppppppuStack_140;
          puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
          pppppppcStack_e8 = (char *******)&pppppppuStack_60;
          pppcStack_e0 = (char ***)&DAT_1061c2098;
          puStack_b8 = (undefined1 *)0x1;
          if (lStack_b0 == 0) {
            puStack_b8 = (undefined1 *)0x2;
          }
          pppcStack_98 = (char ***)ppppppcStack_188;
          pppppppcStack_a0 = pppppppcStack_190;
          uStack_90 = uStack_180;
          pppppppcStack_78 = (char *******)&pppppppcStack_e8;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar5 + 0x20))(puVar4,&puStack_d0);
        }
      }
    }
    else {
      lVar1 = lRam000000010b628340;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_f8 = *(undefined8 *)(lRam000000010b628340 + 0x20);
        uStack_f0 = *(undefined8 *)(lRam000000010b628340 + 0x28);
        uStack_100 = 3;
        puVar5 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar3 = (**(code **)(puVar5 + 0x18))(puVar4,&uStack_100);
        if (iVar3 != 0) {
          puStack_b8 = (undefined1 *)(lRam000000010b628340 + 0x30);
          pppppppuStack_138 =
               (undefined8 *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          ppppppcStack_188 = (char ******)&ppppppuStack_140;
          pppppppcStack_190 = (char *******)s__shutdown_signal_restart__waitin_108add360;
          pppppppcStack_e8 = (char *******)&pppppppcStack_190;
          pppcStack_e0 = (char ***)&UNK_10b25d1e8;
          pppppppuStack_c8 = &pppppppcStack_e8;
          puStack_d0 = (undefined1 *)0x1;
          ppppppuStack_c0 = (undefined8 ******)0x1;
          ppppppuStack_140 = &pppppuStack_1a0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar1,puVar4,puVar5,&uStack_100,&puStack_d0);
        }
      }
    }
    param_1[0] = 1;
    param_1[1] = 0;
    *(char *****)(param_1 + 2) = param_2;
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x11) & 1) == 0) {
    if (((2 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) ||
        ((bVar2 = bRam000000010b628368, 1 < bRam000000010b628368 - 1 &&
         ((bRam000000010b628368 == 0 ||
          (bVar2 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b628358), bVar2 == 0)))))) ||
       (iVar3 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b628358,bVar2), iVar3 == 0)) {
      lVar1 = lRam000000010b628358;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return 1;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 3) {
        return 1;
      }
      uStack_150 = *(undefined8 *)(lRam000000010b628358 + 0x20);
      uStack_148 = *(undefined8 *)(lRam000000010b628358 + 0x28);
      uStack_158 = 3;
      puVar5 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar5 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar3 = (**(code **)(puVar5 + 0x18))(puVar4,&uStack_158);
      if (iVar3 == 0) {
        return 1;
      }
      puStack_b8 = (undefined1 *)(lRam000000010b628358 + 0x30);
      ppppppuStack_140 = &ppppppuStack_198;
      pppppppuStack_138 =
           (undefined8 *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppppcStack_188 = (char ******)&ppppppuStack_140;
      pppppppcStack_190 = (char *******)s_Yshutdown_signal_restart__no_ass_108add3ad;
      pppppppcStack_e8 = (char *******)&pppppppcStack_190;
      pppcStack_e0 = (char ***)&UNK_10b25d1e8;
      pppppppuStack_c8 = &pppppppcStack_e8;
      puStack_d0 = (undefined1 *)0x1;
      ppppppuStack_c0 = (undefined8 ******)0x1;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar1,puVar4,puVar5,&uStack_158,&puStack_d0);
      return 1;
    }
    puStack_128 = (undefined1 *)(lRam000000010b628358 + 0x30);
    pppppppuStack_70 = &ppppppuStack_198;
    puStack_68 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    pppppppuStack_108 = &pppppppuStack_70;
    pcStack_110 = s_Yshutdown_signal_restart__no_ass_108add3ad;
    ppcStack_120 = &pcStack_110;
    puStack_118 = &UNK_10b25d1e8;
    pppppppuStack_138 = (undefined8 *******)&ppcStack_120;
    ppppppuStack_140 = (undefined8 ******)0x1;
    ppppppuStack_130 = (undefined8 ******)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (lRam000000010b628358,&ppppppuStack_140);
    lVar1 = lRam000000010b628358;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return 1;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 3) {
      return 1;
    }
    ppppppcStack_188 = *(char *******)(lRam000000010b628358 + 0x20);
    uStack_180 = *(undefined8 *)(lRam000000010b628358 + 0x28);
    pppppppcStack_190 = (char *******)0x3;
    puVar5 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar5 + 0x18))(puVar4,&pppppppcStack_190);
    if (iVar3 == 0) {
      return 1;
    }
    lStack_b0 = *(long *)(lVar1 + 0x60);
    uStack_a8 = *(undefined8 *)(lVar1 + 0x68);
    pppppppuStack_c8 = *(undefined8 ********)(lVar1 + 0x50);
    ppppppuStack_c0 = *(undefined8 *******)(lVar1 + 0x58);
    puStack_d0 = (undefined1 *)0x1;
    if (pppppppuStack_c8 == (undefined8 *******)0x0) {
      puStack_d0 = (undefined1 *)0x2;
    }
    uStack_88 = *(undefined4 *)(lVar1 + 8);
    uStack_84 = *(undefined4 *)(lVar1 + 0xc);
    pppppppuStack_60 = &ppppppuStack_140;
    puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
    pppppppcStack_e8 = (char *******)&pppppppuStack_60;
    pppcStack_e0 = (char ***)&DAT_1061c2098;
    puStack_b8 = (undefined1 *)0x1;
    if (lStack_b0 == 0) {
      puStack_b8 = (undefined1 *)0x2;
    }
    pppcStack_98 = (char ***)ppppppcStack_188;
    pppppppcStack_a0 = pppppppcStack_190;
    uStack_90 = uStack_180;
    pppppppcStack_78 = (char *******)&pppppppcStack_e8;
  }
  else {
    if (((2 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) ||
        ((bVar2 = bRam000000010b628338, 1 < bRam000000010b628338 - 1 &&
         ((bRam000000010b628338 == 0 ||
          (bVar2 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b628328), bVar2 == 0)))))) ||
       (iVar3 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b628328,bVar2), iVar3 == 0)) {
      lVar1 = lRam000000010b628328;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return 1;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 3) {
        return 1;
      }
      uStack_168 = *(undefined8 *)(lRam000000010b628328 + 0x20);
      uStack_160 = *(undefined8 *)(lRam000000010b628328 + 0x28);
      uStack_170 = 3;
      puVar5 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar5 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar3 = (**(code **)(puVar5 + 0x18))(puVar4,&uStack_170);
      if (iVar3 == 0) {
        return 1;
      }
      puStack_128 = (undefined1 *)(lRam000000010b628328 + 0x30);
      pppppppuStack_c8 =
           (undefined8 *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppppuStack_c0 = &ppppppuStack_198;
      puStack_b8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppppcStack_188 = (char ******)&puStack_d0;
      pppppppcStack_190 = (char *******)s_6received_second_shutdown_signal_108add418;
      pppppppcStack_e8 = (char *******)&pppppppcStack_190;
      pppcStack_e0 = (char ***)&UNK_10b25d1e8;
      pppppppuStack_138 = &pppppppcStack_e8;
      ppppppuStack_140 = (undefined8 ******)0x1;
      ppppppuStack_130 = (undefined8 ******)0x1;
      puStack_d0 = (undefined1 *)&pppppuStack_1a0;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar1,puVar4,puVar5,&uStack_170,&ppppppuStack_140);
      return 1;
    }
    lStack_178 = lRam000000010b628328 + 0x30;
    pppppppuStack_138 =
         (undefined8 *******)
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    ppppppuStack_130 = &ppppppuStack_198;
    puStack_128 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    pppppppuStack_108 = &ppppppuStack_140;
    pcStack_110 = s_6received_second_shutdown_signal_108add418;
    ppcStack_120 = &pcStack_110;
    puStack_118 = &UNK_10b25d1e8;
    ppppppcStack_188 = (char ******)&ppcStack_120;
    pppppppcStack_190 = (char *******)0x1;
    uStack_180 = 1;
    ppppppuStack_140 = &pppppuStack_1a0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (lRam000000010b628328,&pppppppcStack_190);
    lVar1 = lRam000000010b628328;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return 1;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 3) {
      return 1;
    }
    pppcStack_e0 = *(char ****)(lRam000000010b628328 + 0x20);
    uStack_d8 = *(undefined8 *)(lRam000000010b628328 + 0x28);
    pppppppcStack_e8 = (char *******)0x3;
    puVar5 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar5 + 0x18))(puVar4,&pppppppcStack_e8);
    if (iVar3 == 0) {
      return 1;
    }
    lStack_b0 = *(long *)(lVar1 + 0x60);
    uStack_a8 = *(undefined8 *)(lVar1 + 0x68);
    pppppppuStack_c8 = *(undefined8 ********)(lVar1 + 0x50);
    ppppppuStack_c0 = *(undefined8 *******)(lVar1 + 0x58);
    puStack_d0 = (undefined1 *)0x1;
    if (pppppppuStack_c8 == (undefined8 *******)0x0) {
      puStack_d0 = (undefined1 *)0x2;
    }
    uStack_88 = *(undefined4 *)(lVar1 + 8);
    uStack_84 = *(undefined4 *)(lVar1 + 0xc);
    pppppppuStack_70 = &pppppppcStack_190;
    puStack_68 = (undefined1 *)CONCAT71(puStack_68._1_7_,1);
    pppppppuStack_60 = &pppppppuStack_70;
    puStack_58 = &DAT_1061c2098;
    puStack_b8 = (undefined1 *)0x1;
    if (lStack_b0 == 0) {
      puStack_b8 = (undefined1 *)0x2;
    }
    pppcStack_98 = pppcStack_e0;
    pppppppcStack_a0 = pppppppcStack_e8;
    uStack_90 = uStack_d8;
    pppppppcStack_78 = (char *******)&pppppppuStack_60;
  }
  pcStack_80 = s__108b39f4f;
  (**(code **)(puVar5 + 0x20))(puVar4,&puStack_d0);
  return 1;
}

