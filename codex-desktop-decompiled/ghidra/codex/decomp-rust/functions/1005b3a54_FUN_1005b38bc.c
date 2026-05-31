
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b38bc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar3 = *(byte *)(param_2 + 0x10);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b2186d8);
LAB_1005b39e4:
      FUN_107c05cc4(&UNK_10b2186d8);
      *(undefined1 *)(param_2 + 0x10) = 2;
      uVar7 = __Unwind_Resume();
      FUN_100ca4214(param_2 + 1);
      *(undefined1 *)(param_2 + 0x10) = 2;
      __Unwind_Resume(uVar7);
      uVar7 = FUN_107c05ccc();
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_34forward_child_completion_to_parent28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6bd119c981c92593E
                 ,uVar7);
      lVar4 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_34forward_child_completion_to_parent28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6bd119c981c92593E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_110 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_34forward_child_completion_to_parent28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6bd119c981c92593E
                      + 0x20);
        uStack_108 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_34forward_child_completion_to_parent28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6bd119c981c92593E
                      + 0x28);
        uStack_118 = 4;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_118);
        if (iVar5 != 0) {
          lStack_e0 = *(long *)(lVar4 + 0x60);
          uStack_d8 = *(undefined8 *)(lVar4 + 0x68);
          lStack_f8 = *(long *)(lVar4 + 0x50);
          uStack_f0 = *(undefined8 *)(lVar4 + 0x58);
          uStack_100 = 1;
          if (lStack_f8 == 0) {
            uStack_100 = 2;
          }
          uStack_b8 = *(undefined4 *)(lVar4 + 8);
          uStack_b4 = *(undefined4 *)(lVar4 + 0xc);
          uStack_98 = 1;
          puStack_90 = &uStack_a0;
          puStack_88 = &DAT_1061c2098;
          uStack_e8 = 1;
          if (lStack_e0 == 0) {
            uStack_e8 = 2;
          }
          uStack_c8 = uStack_110;
          uStack_d0 = uStack_118;
          uStack_c0 = uStack_108;
          ppuStack_a8 = &puStack_90;
          pcStack_b0 = s__108b39f4f;
          uStack_a0 = uVar7;
          (**(code **)(puVar1 + 0x20))(puVar2,&uStack_100);
        }
      }
      return;
    }
    param_2[1] = *param_2 + 0x790;
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  else if (bVar3 != 3) goto LAB_1005b39e4;
  pcVar6 = (char *)FUN_100fd3e50(param_2 + 1,param_3);
  if (pcVar6 == (char *)0x0) {
    uVar8 = 3;
    uVar7 = 1;
  }
  else {
    if ((((char)param_2[0xf] == '\x03') && ((char)param_2[0xe] == '\x03')) &&
       ((char)param_2[5] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 6);
      if (param_2[7] != 0) {
        (**(code **)(param_2[7] + 0x18))(param_2[8]);
      }
    }
    __ZN10codex_core15context_manager7history14ContextManager31get_total_token_usage_breakdown17h9adeceafef4ff7f0E
              (&uStack_50,pcVar6 + 0x4f0);
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar6,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar6,1,pcVar6);
    uVar7 = 0;
    param_1[2] = uStack_48;
    param_1[1] = uStack_50;
    param_1[4] = uStack_38;
    param_1[3] = uStack_40;
    uVar8 = 1;
  }
  *param_1 = uVar7;
  *(undefined1 *)(param_2 + 0x10) = uVar8;
  return;
}

