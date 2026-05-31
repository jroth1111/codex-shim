
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167442c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  char *pcStack_330;
  undefined8 **ppuStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [440];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar3 = *(byte *)((long)param_2 + 0x829);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      func_0x000108a07af4(&UNK_10b251260);
LAB_101674554:
      func_0x000108a07b10(&UNK_10b251260);
      *(undefined1 *)((long)param_2 + 0x829) = 2;
      uVar7 = __Unwind_Resume();
      func_0x000100e874c4(param_2 + 0x52);
      *(undefined1 *)((long)param_2 + 0x829) = 2;
      __Unwind_Resume(uVar7);
      uVar7 = func_0x000108a07bc4();
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN9codex_tui20startup_hooks_review30maybe_run_startup_hooks_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73226298fa354520E
                 ,uVar7);
      lVar4 = 
      ___ZN9codex_tui20startup_hooks_review30maybe_run_startup_hooks_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73226298fa354520E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_390 = *(undefined8 *)
                      (
                      ___ZN9codex_tui20startup_hooks_review30maybe_run_startup_hooks_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73226298fa354520E
                      + 0x20);
        uStack_388 = *(undefined8 *)
                      (
                      ___ZN9codex_tui20startup_hooks_review30maybe_run_startup_hooks_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73226298fa354520E
                      + 0x28);
        uStack_398 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_398);
        if (iVar5 != 0) {
          lStack_360 = *(long *)(lVar4 + 0x60);
          uStack_358 = *(undefined8 *)(lVar4 + 0x68);
          lStack_378 = *(long *)(lVar4 + 0x50);
          uStack_370 = *(undefined8 *)(lVar4 + 0x58);
          uStack_380 = 1;
          if (lStack_378 == 0) {
            uStack_380 = 2;
          }
          uStack_338 = *(undefined4 *)(lVar4 + 8);
          uStack_334 = *(undefined4 *)(lVar4 + 0xc);
          uStack_318 = 1;
          puStack_310 = &uStack_320;
          puStack_308 = &DAT_1061c2098;
          uStack_368 = 1;
          if (lStack_360 == 0) {
            uStack_368 = 2;
          }
          uStack_348 = uStack_390;
          uStack_350 = uStack_398;
          uStack_340 = uStack_388;
          ppuStack_328 = &puStack_310;
          pcStack_330 = s__108b39f4f;
          uStack_320 = uVar7;
          (**(code **)(puVar1 + 0x20))(puVar2,&uStack_380);
        }
      }
      return;
    }
    uStack_2c8 = param_2[1];
    uStack_2d0 = *param_2;
    uStack_2c0 = param_2[2];
    _memcpy(auStack_2b8,param_2 + 3,0x1b8);
    uStack_78 = param_2[0x4b];
    uStack_80 = param_2[0x4a];
    uStack_68 = param_2[0x4d];
    uStack_70 = param_2[0x4c];
    uStack_58 = param_2[0x4f];
    uStack_60 = param_2[0x4e];
    uStack_b8 = param_2[0x43];
    uStack_c0 = param_2[0x42];
    uStack_a8 = param_2[0x45];
    uStack_b0 = param_2[0x44];
    uStack_98 = param_2[0x47];
    uStack_a0 = param_2[0x46];
    uStack_88 = param_2[0x49];
    uStack_90 = param_2[0x48];
    uStack_f8 = param_2[0x3b];
    uStack_100 = param_2[0x3a];
    uStack_e8 = param_2[0x3d];
    uStack_f0 = param_2[0x3c];
    uStack_d8 = param_2[0x3f];
    uStack_e0 = param_2[0x3e];
    uStack_c8 = param_2[0x41];
    uStack_d0 = param_2[0x40];
    uVar7 = param_2[0x50];
    uVar8 = param_2[0x51];
    uVar6 = *(undefined1 *)(param_2 + 0x105);
    _memcpy(param_2 + 0x52,&uStack_2d0,0x280);
    param_2[0xa2] = 0x8000000000000000;
    param_2[0xa5] = uVar7;
    param_2[0xa6] = uVar8;
    *(undefined1 *)(param_2 + 0x104) = uVar6;
    *(undefined1 *)((long)param_2 + 0x821) = 0;
  }
  else if (bVar3 != 3) goto LAB_101674554;
  FUN_10167517c(param_1,param_2 + 0x52,param_3);
  if (*param_1 == 2) {
    uVar6 = 3;
  }
  else {
    func_0x000100e874c4(param_2 + 0x52);
    uVar6 = 1;
  }
  *(undefined1 *)((long)param_2 + 0x829) = uVar6;
  return;
}

