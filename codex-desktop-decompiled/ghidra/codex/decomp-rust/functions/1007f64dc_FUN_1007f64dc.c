
/* WARNING: Removing unreachable block (ram,0x0001007f80c0) */
/* WARNING: Removing unreachable block (ram,0x0001007f80d4) */
/* WARNING: Removing unreachable block (ram,0x0001007f7aec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f64dc(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar10;
  undefined1 unaff_w27;
  long unaff_x28;
  char in_wzr;
  undefined4 *in_stack_00000018;
  uint in_stack_00000310;
  undefined4 in_stack_00000314;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000bc0;
  
  puVar10 = &stack0x00000580;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar8 = (undefined *)(ulong)in_stack_00000310;
  pcVar1 = *(char **)(unaff_x28 + 0x20);
  pcVar2 = *(char **)(unaff_x28 + 0x28);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar1,extraout_x1,1000000000);
  }
  if (in_stack_00000310 == 0) {
    if (((*unaff_x25 < 2) &&
        ((bRam000000010b636f30 - 1 < 2 ||
         ((bRam000000010b636f30 != 0 &&
          (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hb4d757a9b8f5cd4fE
                             ), cVar3 != '\0')))))) &&
       (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hb4d757a9b8f5cd4fE
                          ), iVar4 != 0)) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hb4d757a9b8f5cd4fE
                 ,&stack0x00000ba0);
      uVar6 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hb4d757a9b8f5cd4fE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar8 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar8 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar10 + 0x18))(puVar8,&stack0x000006f0);
        if (iVar4 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar6,puVar8,puVar10,&stack0x000006f0,&stack0x00000ba0);
        }
      }
    }
    else {
      uVar6 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hb4d757a9b8f5cd4fE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar8 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar8 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar10 + 0x18))(puVar8,&stack0x000006f0);
        if (iVar4 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar6,puVar8,puVar10,&stack0x000006f0,&stack0x00000ba0);
        }
      }
    }
    uVar7 = 1;
    in_stack_00000bc0 = 0;
    param_1 = 0;
    uVar9 = 1;
    unaff_w27 = 1;
    cVar3 = '\x01';
    puVar10 = &UNK_10b209220;
  }
  else {
    uVar9 = (ulong)*(uint *)(pcVar1 + 0x140);
    if (*(uint *)(pcVar1 + 0x140) < in_stack_00000310) {
      if ((*unaff_x25 == 0) &&
         (((bRam000000010b636f48 - 1 < 2 ||
           ((bRam000000010b636f48 != 0 &&
            (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hc206b78ce4524456E
                               ), cVar3 != '\0')))) &&
          (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hc206b78ce4524456E
                             ), iVar4 != 0)))) {
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hc206b78ce4524456E
                   ,&stack0x000006f0);
        uVar6 = 
        ___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hc206b78ce4524456E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar8 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar8 = &UNK_10b3c24c8;
          }
          puVar10 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar10 = &UNK_109adfc03;
          }
          iVar4 = (**(code **)(puVar8 + 0x18))(puVar10,&stack0x00000a40);
          if (iVar4 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar6,puVar10,puVar8,&stack0x00000a40,&stack0x000006f0);
          }
        }
      }
      else {
        uVar6 = 
        ___ZN14rama_http_core2h25proto7streams7streams5Inner10recv_reset10__CALLSITE17hc206b78ce4524456E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar8 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar8 = &UNK_10b3c24c8;
          }
          puVar10 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar10 = &UNK_109adfc03;
          }
          iVar4 = (**(code **)(puVar8 + 0x18))(puVar10,&stack0x00000a40);
          if (iVar4 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar6,puVar10,puVar8,&stack0x00000a40,&stack0x000006f0);
          }
        }
      }
      uVar7 = SUB84(puVar8,0);
      cVar3 = '\x04';
      puVar10 = unaff_x26;
      param_1 = in_stack_000003f0;
      in_stack_00000bc0 = in_stack_000003f8;
    }
    else {
      func_0x000105a96624(&stack0x00000ba0,pcVar1 + 0x1f0,puVar8);
      if (*pcVar2 == '\0') {
        *pcVar2 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar2,extraout_x1_00,1000000000);
      }
      lVar5 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                        (&stack0x00000a40);
      iVar4 = *(int *)(lVar5 + 0x60);
      uVar6 = __ZN93__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__DerefMut_GT_9deref_mut17hb1fd44ec5271e264E
                        (&stack0x00000a40);
      func_0x000105a85018(&stack0x00000ba0,pcVar1 + 0xa8,puVar8,in_stack_00000314,uVar6,pcVar1 + 8);
      uVar9 = 1;
      __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                (pcVar1 + 8,&stack0x00000ba0,iVar4 != 1000000000);
      cVar3 = '\x01';
      unaff_w27 = 0;
      unaff_x25 = (ulong *)0x0;
      uVar7 = 0;
      if (*pcVar2 == '\x01') {
        *pcVar2 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar2,0);
      }
    }
  }
  if (*pcVar1 == '\x01') {
    *pcVar1 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
  }
  if (cVar3 == '\x04') {
    uVar7 = 2;
  }
  else {
    *(undefined8 *)(in_stack_00000018 + 10) = in_stack_00000bc0;
    *(undefined8 *)(in_stack_00000018 + 8) = param_1;
    *(char *)(in_stack_00000018 + 2) = cVar3;
    *(undefined1 *)((long)in_stack_00000018 + 9) = unaff_w27;
    *(short *)((long)in_stack_00000018 + 10) = (short)unaff_x25;
    in_stack_00000018[3] = uVar7;
    *(undefined **)(in_stack_00000018 + 4) = puVar10;
    *(ulong *)(in_stack_00000018 + 6) = uVar9;
    uVar7 = 4;
  }
  *in_stack_00000018 = uVar7;
  return;
}

