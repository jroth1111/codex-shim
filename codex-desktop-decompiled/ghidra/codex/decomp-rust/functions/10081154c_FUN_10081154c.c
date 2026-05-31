
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081154c(undefined2 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  char ***pppcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char **ppcStack_110;
  undefined *puStack_108;
  char *pcStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  char ***pppcStack_e8;
  undefined4 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined4 *puStack_c0;
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
  undefined8 *puStack_58;
  
  uStack_14c = param_3;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    bVar4 = bRam000000010b637050;
    if (bRam000000010b637050 - 1 < 2) {
LAB_1008115a4:
      iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                         ,bVar4);
      if (iVar5 != 0) {
        puStack_d8 = (undefined *)
                     (
                     ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                     + 0x30);
        puStack_c0 = &uStack_14c;
        puStack_c8 = &DAT_10114d844;
        puStack_b8 = &
                     __ZN88__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Display_GT_3fmt17h9f21c62600986cccE
        ;
        pppcStack_60 = (char ***)s__failed_to_create_pushed_stream_f_108ac8475;
        pppuStack_70 = &pppcStack_60;
        puStack_68 = &UNK_10b208fd0;
        pppcStack_e8 = (char ***)&pppuStack_70;
        uStack_f0 = 1;
        puStack_e0 = (undefined4 *)0x1;
        uStack_d0 = param_2;
        puStack_58 = &uStack_d0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                   ,&uStack_f0);
        lVar3 = 
        ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_128 =
               *(char ****)
                (
                ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                + 0x20);
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                        + 0x28);
          pcStack_130 = (char *)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pcStack_130);
          if (iVar5 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&pcStack_130,&uStack_f0);
          }
        }
        goto LAB_10081180c;
      }
    }
    else if (bRam000000010b637050 != 0) {
      bVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                        (&
                         __ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                        );
      if (bVar4 != 0) goto LAB_1008115a4;
    }
  }
  lVar3 = 
  ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uStack_140 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                  + 0x20);
    uStack_138 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                  + 0x28);
    uStack_148 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_148);
    if (iVar5 != 0) {
      lStack_118 = ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h71be3f7aa00e8d06E
                   + 0x30;
      pppcStack_e8 = (char ***)&DAT_10114d844;
      puStack_e0 = &uStack_14c;
      puStack_d8 = &
                   __ZN88__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Display_GT_3fmt17h9f21c62600986cccE
      ;
      puStack_f8 = &uStack_f0;
      pcStack_100 = s__failed_to_create_pushed_stream_f_108ac8475;
      ppcStack_110 = &pcStack_100;
      puStack_108 = &UNK_10b208fd0;
      pppcStack_128 = &ppcStack_110;
      pcStack_130 = (char *)0x1;
      uStack_120 = 1;
      lStack_b0 = *(long *)(lVar3 + 0x60);
      uStack_a8 = *(undefined8 *)(lVar3 + 0x68);
      puStack_c8 = *(undefined **)(lVar3 + 0x50);
      puStack_c0 = *(undefined4 **)(lVar3 + 0x58);
      uStack_d0 = 1;
      if (puStack_c8 == (undefined *)0x0) {
        uStack_d0 = 2;
      }
      uStack_88 = *(undefined4 *)(lVar3 + 8);
      uStack_84 = *(undefined4 *)(lVar3 + 0xc);
      pppuStack_70 = (undefined8 ***)&pcStack_130;
      puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
      pppcStack_60 = (char ***)&pppuStack_70;
      puStack_58 = (undefined8 *)&DAT_1061c2098;
      puStack_b8 = (undefined *)0x1;
      if (lStack_b0 == 0) {
        puStack_b8 = (undefined *)0x2;
      }
      uStack_98 = uStack_140;
      uStack_a0 = uStack_148;
      uStack_90 = uStack_138;
      pppuStack_78 = &pppcStack_60;
      pcStack_80 = s__108b39f4f;
      uStack_f0 = param_2;
      (**(code **)(puVar1 + 0x20))(puVar2,&uStack_d0);
    }
  }
LAB_10081180c:
  *(undefined **)(param_1 + 4) = &UNK_10b209220;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 2) = uStack_14c;
  *param_1 = 0x101;
  return;
}

