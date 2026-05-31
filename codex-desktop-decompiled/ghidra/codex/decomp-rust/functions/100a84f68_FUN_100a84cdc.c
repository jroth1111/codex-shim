
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84cdc(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined7 uVar8;
  undefined7 uVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long *plVar15;
  code *pcVar16;
  char cVar17;
  long unaff_x24;
  undefined1 auVar18 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char *pcStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  char cStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined8 uStack_e9;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined8 uStack_49;
  
  bVar5 = *(byte *)(param_2 + 2);
  if (2 < bVar5) {
    if (bVar5 == 3) {
      auVar18 = *(undefined1 (*) [16])(param_2 + 3);
LAB_100a84d58:
      (**(code **)(auVar18._8_8_ + 0x18))(&cStack_80,auVar18._0_8_,param_3);
      uVar11 = uStack_68;
      uVar9 = uStack_6f;
      uVar14 = uStack_70;
      uVar8 = uStack_77;
      cVar17 = cStack_80;
      if (cStack_80 == '\x06') {
        *param_1 = '\x06';
        uVar14 = 3;
        goto LAB_100a84e98;
      }
      uVar6 = CONCAT17(uStack_78,uStack_7f);
      uVar3 = param_2[3];
      puVar13 = (undefined8 *)param_2[4];
      pcVar16 = (code *)*puVar13;
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(uVar3);
      }
      if (puVar13[1] != 0) {
        _free(uVar3);
      }
      if (cVar17 == '\x05') {
        param_2[4] = param_2[1];
        *(undefined1 *)((long)param_2 + 0x29) = 0;
        goto LAB_100a84dcc;
      }
      uStack_58 = uVar8;
      uStack_49 = uVar11;
      uStack_51 = uVar14;
      uStack_50 = uVar9;
      uStack_60 = uVar6;
    }
    else {
LAB_100a84dcc:
      FUN_100a84a64(&cStack_80,param_2 + 3,param_3);
      cVar17 = cStack_80;
      if (cStack_80 == '\x06') {
        *param_1 = '\x06';
        uVar14 = 4;
        goto LAB_100a84e98;
      }
      uStack_60 = CONCAT17(uStack_78,uStack_7f);
      uStack_58 = uStack_77;
      uStack_49 = uStack_68;
      uStack_51 = uStack_70;
      uStack_50 = uStack_6f;
      if (*(char *)((long)param_2 + 0x29) == '\x04') {
        FUN_100cf5bf8(param_2 + 6);
      }
      else {
        if (*(char *)((long)param_2 + 0x29) != '\x03') goto LAB_100a84e80;
        if (((*(char *)(param_2 + 0x14) == '\x03') && (*(char *)(param_2 + 0x13) == '\x03')) &&
           (*(char *)(param_2 + 10) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_2 + 0xb);
          if (param_2[0xc] != 0) {
            (**(code **)(param_2[0xc] + 0x18))(param_2[0xd]);
          }
        }
      }
      *(undefined1 *)(param_2 + 5) = 0;
    }
LAB_100a84e80:
    *param_1 = cVar17;
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_51,uStack_58);
    *(undefined8 *)(param_1 + 1) = uStack_60;
    *(undefined8 *)(param_1 + 0x18) = uStack_49;
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_50,uStack_51);
    uVar14 = 1;
LAB_100a84e98:
    *(undefined1 *)(param_2 + 2) = uVar14;
    return;
  }
  if (bVar5 == 0) {
    plVar15 = (long *)*param_2;
    param_2[1] = plVar15;
    uStack_78 = (undefined1)plVar15[4];
    uStack_77 = (undefined7)((ulong)plVar15[4] >> 8);
    cStack_80 = (char)plVar15[3];
    uStack_7f = (undefined7)((ulong)plVar15[3] >> 8);
    auVar18 = (**(code **)(plVar15[1] + 0x48))
                        (*plVar15 + (*(long *)(plVar15[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         &cStack_80);
    *(undefined1 (*) [16])(param_2 + 3) = auVar18;
    goto LAB_100a84d58;
  }
  if (bVar5 == 1) {
    func_0x000108a07af4(&UNK_10b22c3c8);
  }
  uVar11 = func_0x000108a07b10();
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 2) = 2;
  uVar11 = __Unwind_Resume(uVar11);
  if (*(long *)(unaff_x24 + 8) != 0) {
    _free();
    *(undefined1 *)(param_2 + 2) = 2;
    __Unwind_Resume(uVar11);
    *(undefined1 *)(param_2 + 2) = 2;
    uVar11 = __Unwind_Resume();
    FUN_100cf5d1c(param_2 + 3);
  }
  *(undefined1 *)(param_2 + 2) = 2;
  __Unwind_Resume(uVar11);
  auVar18 = func_0x000108a07bc4();
  puVar13 = auVar18._8_8_;
  pcVar12 = auVar18._0_8_;
  bVar5 = *(byte *)(puVar13 + 2);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        func_0x000108a07af4(&UNK_10b22c428);
      }
      uVar11 = func_0x000108a07b10();
      *(undefined1 *)(puVar13 + 5) = 0;
      *(undefined1 *)(puVar13 + 2) = 2;
      uVar11 = __Unwind_Resume(uVar11);
      if (*(long *)(unaff_x24 + 8) != 0) {
        _free();
        *(undefined1 *)(puVar13 + 2) = 2;
        __Unwind_Resume(uVar11);
        *(undefined1 *)(puVar13 + 2) = 2;
        uVar11 = __Unwind_Resume();
        FUN_100cf5d1c(puVar13 + 3);
      }
      *(undefined1 *)(puVar13 + 2) = 2;
      __Unwind_Resume(uVar11);
      uVar11 = func_0x000108a07bc4();
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN18codex_thread_store11live_thread19LiveThreadInitGuard7discard28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa7c148754b8db96E
                 ,uVar11);
      lVar7 = 
      ___ZN18codex_thread_store11live_thread19LiveThreadInitGuard7discard28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa7c148754b8db96E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_200 = *(undefined8 *)
                      (
                      ___ZN18codex_thread_store11live_thread19LiveThreadInitGuard7discard28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa7c148754b8db96E
                      + 0x20);
        uStack_1f8 = *(undefined8 *)
                      (
                      ___ZN18codex_thread_store11live_thread19LiveThreadInitGuard7discard28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa7c148754b8db96E
                      + 0x28);
        uStack_208 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_208);
        if (iVar10 != 0) {
          lStack_1d0 = *(long *)(lVar7 + 0x60);
          uStack_1c8 = *(undefined8 *)(lVar7 + 0x68);
          lStack_1e8 = *(long *)(lVar7 + 0x50);
          uStack_1e0 = *(undefined8 *)(lVar7 + 0x58);
          uStack_1f0 = 1;
          if (lStack_1e8 == 0) {
            uStack_1f0 = 2;
          }
          uStack_1a8 = *(undefined4 *)(lVar7 + 8);
          uStack_1a4 = *(undefined4 *)(lVar7 + 0xc);
          uStack_188 = 1;
          puStack_180 = &uStack_190;
          puStack_178 = &DAT_1061c2098;
          uStack_1d8 = 1;
          if (lStack_1d0 == 0) {
            uStack_1d8 = 2;
          }
          uStack_1b8 = uStack_200;
          uStack_1c0 = uStack_208;
          uStack_1b0 = uStack_1f8;
          ppuStack_198 = &puStack_180;
          pcStack_1a0 = s__108b39f4f;
          uStack_190 = uVar11;
          (**(code **)(puVar1 + 0x20))(puVar2,&uStack_1f0);
        }
      }
      return;
    }
    plVar15 = (long *)*puVar13;
    puVar13[1] = plVar15;
    uStack_118 = (undefined1)plVar15[4];
    uStack_117 = (undefined7)((ulong)plVar15[4] >> 8);
    cStack_120 = (char)plVar15[3];
    uStack_11f = (undefined7)((ulong)plVar15[3] >> 8);
    auVar18 = (**(code **)(plVar15[1] + 0x40))
                        (*plVar15 + (*(long *)(plVar15[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         &cStack_120);
    *(undefined1 (*) [16])(puVar13 + 3) = auVar18;
LAB_100a84fe4:
    (**(code **)(auVar18._8_8_ + 0x18))(&cStack_120,auVar18._0_8_,param_3);
    uVar11 = uStack_108;
    uVar9 = uStack_10f;
    uVar14 = uStack_110;
    uVar8 = uStack_117;
    cVar17 = cStack_120;
    if (cStack_120 == '\x06') {
      *pcVar12 = '\x06';
      uVar14 = 3;
      goto LAB_100a85124;
    }
    uVar6 = CONCAT17(uStack_118,uStack_11f);
    uVar3 = puVar13[3];
    puVar4 = (undefined8 *)puVar13[4];
    pcVar16 = (code *)*puVar4;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    if (cVar17 == '\x05') {
      puVar13[4] = puVar13[1];
      *(undefined1 *)((long)puVar13 + 0x29) = 0;
      goto LAB_100a85058;
    }
    uStack_f8 = uVar8;
    uStack_e9 = uVar11;
    uStack_f1 = uVar14;
    uStack_f0 = uVar9;
    uStack_100 = uVar6;
  }
  else {
    if (bVar5 == 3) {
      auVar18 = *(undefined1 (*) [16])(puVar13 + 3);
      goto LAB_100a84fe4;
    }
LAB_100a85058:
    FUN_100a8481c(&cStack_120,puVar13 + 3,param_3);
    cVar17 = cStack_120;
    if (cStack_120 == '\x06') {
      *pcVar12 = '\x06';
      uVar14 = 4;
      goto LAB_100a85124;
    }
    uStack_100 = CONCAT17(uStack_118,uStack_11f);
    uStack_f8 = uStack_117;
    uStack_e9 = uStack_108;
    uStack_f1 = uStack_110;
    uStack_f0 = uStack_10f;
    if (*(char *)((long)puVar13 + 0x29) == '\x04') {
      FUN_100cf5bf8(puVar13 + 6);
    }
    else {
      if (*(char *)((long)puVar13 + 0x29) != '\x03') goto LAB_100a8510c;
      if (((*(char *)(puVar13 + 0x14) == '\x03') && (*(char *)(puVar13 + 0x13) == '\x03')) &&
         (*(char *)(puVar13 + 10) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (puVar13 + 0xb);
        if (puVar13[0xc] != 0) {
          (**(code **)(puVar13[0xc] + 0x18))(puVar13[0xd]);
        }
      }
    }
    *(undefined1 *)(puVar13 + 5) = 0;
  }
LAB_100a8510c:
  *pcVar12 = cVar17;
  *(ulong *)(pcVar12 + 9) = CONCAT17(uStack_f1,uStack_f8);
  *(undefined8 *)(pcVar12 + 1) = uStack_100;
  *(undefined8 *)(pcVar12 + 0x18) = uStack_e9;
  *(ulong *)(pcVar12 + 0x10) = CONCAT71(uStack_f0,uStack_f1);
  uVar14 = 1;
LAB_100a85124:
  *(undefined1 *)(puVar13 + 2) = uVar14;
  return;
}

