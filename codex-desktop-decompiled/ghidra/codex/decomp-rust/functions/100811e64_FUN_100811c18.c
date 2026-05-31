
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811c18(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,uint *param_5,
                  char *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  char ***pppcStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  char **ppcStack_90;
  undefined *puStack_88;
  char *pcStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (*param_6 != '\0') {
    uVar12 = *(undefined8 *)param_6;
    uVar14 = *(undefined8 *)(param_6 + 0x18);
    uVar13 = *(undefined8 *)(param_6 + 0x10);
    param_1[1] = *(undefined8 *)(param_6 + 8);
    *param_1 = uVar12;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    param_1[4] = *(undefined8 *)(param_6 + 0x20);
    return;
  }
  uVar5 = *(undefined4 *)(param_6 + 8);
  cVar7 = param_6[1];
  if ((*param_5 & 1) == 0) {
    uVar9 = *(ulong *)(param_5 + 0x14);
  }
  else {
    uVar11 = *(ulong *)(param_5 + 2);
    uVar9 = *(ulong *)(param_5 + 0x14);
    if (uVar11 <= uVar9) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b6370e0 - 1 < 2 ||
           ((bRam000000010b6370e0 != 0 &&
            (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
                               ), cVar7 != '\0')))) &&
          (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
                             ), iVar8 != 0)))) {
        lStack_98 = ___ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
                    + 0x30;
        uStack_70 = 1;
        uStack_60 = &uStack_70;
        puStack_58 = &DAT_101138dc8;
        puStack_78 = &uStack_60;
        pcStack_80 = s__reset_on_recv_stream_err__local_108ac84e8;
        ppcStack_90 = &pcStack_80;
        puStack_88 = &UNK_10b208fd0;
        pppcStack_a8 = &ppcStack_90;
        lStack_b0 = 1;
        uStack_a0 = 1;
        uStack_68 = uVar11;
        FUN_100811fa4(&lStack_b0);
      }
      else {
        lVar4 = 
        ___ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_c0 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
                       + 0x20);
          uStack_b8 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
                       + 0x28);
          uStack_c8 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_c8);
          if (iVar8 != 0) {
            lStack_98 = ___ZN14rama_http_core2h25proto7streams7streams7Actions24reset_on_recv_stream_err10__CALLSITE17h67d992785c06ba29E
                        + 0x30;
            uStack_70 = 1;
            uStack_60 = &uStack_70;
            puStack_58 = &DAT_101138dc8;
            puStack_78 = &uStack_60;
            pcStack_80 = s__reset_on_recv_stream_err__local_108ac84e8;
            ppcStack_90 = &pcStack_80;
            puStack_88 = &UNK_10b208fd0;
            pppcStack_a8 = &ppcStack_90;
            lStack_b0 = 1;
            uStack_a0 = 1;
            uStack_68 = uVar11;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar4,puVar2,puVar1,&uStack_c8,&lStack_b0);
          }
        }
      }
      *(undefined2 *)param_1 = 0x101;
      *(undefined4 *)((long)param_1 + 4) = 0xb;
      param_1[1] = &UNK_10b209220;
      param_1[2] = &UNK_108cb0b23;
      param_1[4] = 0;
      param_1[3] = 0x18;
      cVar7 = *param_6;
      goto joined_r0x000100811dac;
    }
  }
  *(ulong *)(param_5 + 0x14) = uVar9 + 1;
  FUN_1008099b4(param_2 + 0xd8,uVar5,cVar7,param_3,param_4,param_5,param_2 + 200);
  func_0x000105a8c434(param_2,param_4,param_5);
  uVar3 = *(uint *)(param_4 + 1);
  uStack_60 = (undefined8 *)param_4[1];
  if (((*(ulong *)(*param_4 + 0x10) <= (ulong)uVar3) ||
      (plVar10 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar3 * 0x158), *plVar10 == 2)) ||
     (*(int *)((long)plVar10 + 0x13c) != *(int *)((long)param_4 + 0xc))) {
    lStack_b0 = (long)&uStack_60 + 4;
    pppcStack_a8 = (char ***)&DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&lStack_b0,&UNK_10b3fa5a0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100811f8c);
    (*pcVar6)();
  }
  lVar4 = plVar10[0x18];
  plVar10[0x18] = 0;
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 8))(plVar10[0x19]);
  }
  *(undefined1 *)param_1 = 4;
  cVar7 = *param_6;
joined_r0x000100811dac:
  if (cVar7 != '\x04') {
    if (cVar7 == '\x02') {
      if ((*(long *)(param_6 + 8) != -0x8000000000000000) && (*(long *)(param_6 + 8) != 0)) {
        _free(*(undefined8 *)(param_6 + 0x10));
      }
    }
    else if (cVar7 == '\x01') {
      (**(code **)(*(long *)(param_6 + 8) + 0x20))
                (param_6 + 0x20,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x18));
    }
  }
  return;
}

