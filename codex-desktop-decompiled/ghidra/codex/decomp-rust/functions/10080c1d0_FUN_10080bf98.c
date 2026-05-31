
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10080bf98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined1 auVar7 [16];
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char acStack_138 [8];
  char ***pppcStack_130;
  undefined8 uStack_128;
  long lStack_120;
  char **ppcStack_118;
  undefined *puStack_110;
  char *pcStack_108;
  char ***pppcStack_100;
  char **ppcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  char ***pppcStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  char ***pppcStack_90;
  char *pcStack_88;
  char ***pppcStack_80;
  char **ppcStack_78;
  undefined *puStack_70;
  
  auVar7 = __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize25recv_stream_window_update17h428e11e9dd1210a7E
                     (param_1 + 8,param_2,param_4);
  uVar6 = auVar7._0_8_;
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
    goto LAB_10080c2a0;
  }
  uStack_154 = auVar7._8_4_;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
    bVar4 = bRam000000010b636d50;
    if (1 < bRam000000010b636d50 - 1) {
      if (bRam000000010b636d50 != 0) {
        bVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                          );
        if (bVar4 != 0) goto LAB_10080c018;
      }
      goto LAB_10080c124;
    }
LAB_10080c018:
    iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                      (___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                       ,bVar4);
    if (iVar5 == 0) goto LAB_10080c124;
    lStack_d0 = ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                + 0x30;
    ppcStack_78 = (char **)&uStack_154;
    puStack_70 = &
                 __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
    ;
    pppcStack_80 = &ppcStack_78;
    pcStack_88 = s__recv_stream_window_update_____e_108ac8030;
    ppcStack_f8 = &pcStack_88;
    puStack_f0 = &UNK_10b208fd0;
    pppcStack_e0 = &ppcStack_f8;
    uStack_e8 = 1;
    uStack_d8 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
               ,&uStack_e8);
    lVar3 = 
    ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppcStack_130 =
           *(char ****)
            (
            ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
            + 0x20);
      uStack_128 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                    + 0x28);
      acStack_138[0] = '\x04';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,acStack_138);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,acStack_138,&uStack_e8);
      }
    }
  }
  else {
LAB_10080c124:
    lVar3 = 
    ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_148 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                    + 0x20);
      uStack_140 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                    + 0x28);
      uStack_150 = 4;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_150);
      if (iVar5 != 0) {
        lStack_120 = ___ZN14rama_http_core2h25proto7streams4send4Send25recv_stream_window_update10__CALLSITE17ha74599f8518429dcE
                     + 0x30;
        ppcStack_f8 = (char **)&uStack_154;
        puStack_f0 = &
                     __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
        ;
        pppcStack_100 = &ppcStack_f8;
        pcStack_108 = s__recv_stream_window_update_____e_108ac8030;
        ppcStack_118 = &pcStack_108;
        puStack_110 = &UNK_10b208fd0;
        pppcStack_130 = &ppcStack_118;
        acStack_138[0] = '\x01';
        acStack_138[1] = '\0';
        acStack_138[2] = '\0';
        acStack_138[3] = '\0';
        acStack_138[4] = '\0';
        acStack_138[5] = '\0';
        acStack_138[6] = '\0';
        acStack_138[7] = '\0';
        uStack_128 = 1;
        lStack_c8 = *(long *)(lVar3 + 0x60);
        uStack_c0 = *(undefined8 *)(lVar3 + 0x68);
        pppcStack_e0 = *(char ****)(lVar3 + 0x50);
        uStack_d8 = *(undefined8 *)(lVar3 + 0x58);
        uStack_e8 = 1;
        if (pppcStack_e0 == (char ***)0x0) {
          uStack_e8 = 2;
        }
        uStack_a0 = *(undefined4 *)(lVar3 + 8);
        uStack_9c = *(undefined4 *)(lVar3 + 0xc);
        pcStack_88 = acStack_138;
        pppcStack_80 = (char ***)CONCAT71(pppcStack_80._1_7_,1);
        ppcStack_78 = &pcStack_88;
        puStack_70 = &DAT_1061c2098;
        lStack_d0 = 1;
        if (lStack_c8 == 0) {
          lStack_d0 = 2;
        }
        uStack_b0 = uStack_148;
        uStack_b8 = uStack_150;
        uStack_a8 = uStack_140;
        pppcStack_90 = &ppcStack_78;
        pcStack_98 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_e8);
      }
    }
  }
  FUN_1008099b4(param_1,3,1,param_3,param_4,param_5,param_6);
  unaff_x20 = auVar7._8_8_;
LAB_10080c2a0:
  auVar7._8_8_ = unaff_x20;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

