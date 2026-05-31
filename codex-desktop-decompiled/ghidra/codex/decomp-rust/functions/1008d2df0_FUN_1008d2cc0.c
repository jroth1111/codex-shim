
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d2cc0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined8 **ppuStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  
  bVar3 = *(byte *)(param_2 + 0x15);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b225870);
LAB_1008d2d98:
      FUN_107c05cc4(&UNK_10b225870);
      *(undefined1 *)(param_2 + 0x15) = 2;
      uVar6 = __Unwind_Resume();
      if (param_2[0xb] != 0) {
        (**(code **)(param_2[0xb] + 0x18))(param_2[0xc]);
      }
      *(undefined1 *)(param_2 + 0x15) = 2;
      __Unwind_Resume(uVar6);
      uVar6 = FUN_107c05ccc();
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                 ,uVar6);
      lVar4 = 
      ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_e0 = *(undefined8 *)
                     (
                     ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                     + 0x20);
        uStack_d8 = *(undefined8 *)
                     (
                     ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                     + 0x28);
        uStack_e8 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_e8);
        if (iVar5 != 0) {
          lStack_b0 = *(long *)(lVar4 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar4 + 0x68);
          lStack_c8 = *(long *)(lVar4 + 0x50);
          uStack_c0 = *(undefined8 *)(lVar4 + 0x58);
          uStack_d0 = 1;
          if (lStack_c8 == 0) {
            uStack_d0 = 2;
          }
          uStack_88 = *(undefined4 *)(lVar4 + 8);
          uStack_84 = *(undefined4 *)(lVar4 + 0xc);
          uStack_68 = 1;
          puStack_60 = &uStack_70;
          puStack_58 = &DAT_1061c2098;
          uStack_b8 = 1;
          if (lStack_b0 == 0) {
            uStack_b8 = 2;
          }
          uStack_98 = uStack_e0;
          uStack_a0 = uStack_e8;
          uStack_90 = uStack_d8;
          ppuStack_78 = &puStack_60;
          pcStack_80 = s__108b39f4f;
          uStack_70 = uVar6;
          (**(code **)(puVar1 + 0x20))(puVar2,&uStack_d0);
        }
      }
      return;
    }
    param_2[2] = *(long *)(*param_2 + 400) + 0x10;
    param_2[3] = param_2[1];
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  else if (bVar3 != 3) goto LAB_1008d2d98;
  func_0x000100894800(param_1,param_2 + 2);
  if (*param_1 == -0x7ffffffffffffffe) {
    uVar7 = 3;
  }
  else {
    if (((((char)param_2[0x14] == '\x03') && ((char)param_2[0x13] == '\x03')) &&
        ((char)param_2[0x12] == '\x03')) && ((char)param_2[9] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 10);
      if (param_2[0xb] != 0) {
        (**(code **)(param_2[0xb] + 0x18))(param_2[0xc]);
      }
    }
    uVar7 = 1;
  }
  *(undefined1 *)(param_2 + 0x15) = uVar7;
  return;
}

