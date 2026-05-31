
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100a19128(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 uVar13;
  long in_xzr;
  undefined1 auVar14 [16];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  char *pcStack_3c0;
  undefined8 **ppuStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  ulong uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  short sStack_1b0;
  undefined2 uStack_1ae;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined8 uStack_178;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 uStack_152;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  undefined6 uStack_148;
  undefined2 uStack_142;
  undefined6 uStack_140;
  undefined8 uStack_13a;
  undefined1 auStack_130 [48];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  short sStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
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
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  bVar2 = *(byte *)(param_2 + 0x11);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      func_0x000108a07af4(&UNK_10b22a760);
LAB_100a193cc:
      uVar6 = func_0x000108a07b10(&UNK_10b22a760);
      if ((param_2[0xc] & 0x7fffffffffffffff) != 0) {
        _free(param_2[0xd]);
      }
      if ((*(byte *)((long)param_2 + 0x89) & 1) != 0) {
        func_0x000100cafc68(param_2 + 6);
      }
      *(undefined2 *)(param_2 + 0x11) = 2;
      auVar14 = __Unwind_Resume(uVar6);
      puVar7 = auVar14._0_8_;
      bVar2 = *(byte *)(puVar7 + 0x43);
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          func_0x000108a07af4(&UNK_10b22a790);
LAB_100a1964c:
          uVar8 = func_0x000108a07b10(&UNK_10b22a790);
          if ((*(char *)((long)puVar7 + 0x219) == '\x01') && ((unaff_x23 & 0x7fffffffffffffff) != 0)
             ) {
            _free(uVar6);
          }
          *(undefined1 *)((long)puVar7 + 0x219) = 0;
          func_0x000100e0c178(puVar7 + 5);
          *(undefined1 *)(puVar7 + 0x43) = 2;
          __Unwind_Resume(uVar8);
          uVar6 = func_0x000108a07bc4();
          uVar5 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN17codex_exec_server5relay27run_multiplexed_environment28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1f2c28e075d6862eE
                             ,uVar6);
          lVar12 = 
          ___ZN17codex_exec_server5relay27run_multiplexed_environment28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1f2c28e075d6862eE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_420 = *(undefined8 *)
                          (
                          ___ZN17codex_exec_server5relay27run_multiplexed_environment28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1f2c28e075d6862eE
                          + 0x20);
            uStack_418 = *(undefined8 *)
                          (
                          ___ZN17codex_exec_server5relay27run_multiplexed_environment28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1f2c28e075d6862eE
                          + 0x28);
            uStack_428 = 2;
            puVar10 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar10 = &UNK_10b3c24c8;
            }
            puVar1 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_109adfc03;
            }
            uVar5 = (**(code **)(puVar10 + 0x18))(puVar1,&uStack_428);
            if ((int)uVar5 != 0) {
              lStack_3f0 = *(long *)(lVar12 + 0x60);
              uStack_3e8 = *(undefined8 *)(lVar12 + 0x68);
              lStack_408 = *(long *)(lVar12 + 0x50);
              uStack_400 = *(undefined8 *)(lVar12 + 0x58);
              uStack_410 = 1;
              if (lStack_408 == 0) {
                uStack_410 = 2;
              }
              uStack_3c8 = *(undefined4 *)(lVar12 + 8);
              uStack_3c4 = *(undefined4 *)(lVar12 + 0xc);
              uStack_3a8 = 1;
              puStack_3a0 = &uStack_3b0;
              puStack_398 = &DAT_1061c2098;
              uStack_3f8 = 1;
              if (lStack_3f0 == 0) {
                uStack_3f8 = 2;
              }
              uStack_3d8 = uStack_420;
              uStack_3e0 = uStack_428;
              uStack_3d0 = uStack_418;
              ppuStack_3b8 = &puStack_3a0;
              pcStack_3c0 = s__108b39f4f;
              uStack_3b0 = uVar6;
              uVar5 = (**(code **)(puVar10 + 0x20))(puVar1,&uStack_410);
            }
          }
          return uVar5;
        }
        puVar7[6] = puVar7[4];
        puVar7[5] = puVar7[3];
        lVar12 = puVar7[4];
        *(undefined1 *)((long)puVar7 + 0x219) = 1;
        uVar6 = *puVar7;
        uVar8 = puVar7[1];
        uVar13 = puVar7[2];
        if (*(long *)(lVar12 + 0x148) != 0) {
          plVar4 = (long *)(lVar12 + 0x130);
          if (*plVar4 == 0) {
            *plVar4 = 8;
          }
          else {
            __ZN11parking_lot10raw_rwlock9RawRwLock19lock_exclusive_slow17h52751bf05e1f824dE
                      (plVar4,auVar14._8_8_,1000000000);
          }
          *(undefined1 *)(lVar12 + 0x138) = 1;
          *(long *)(lVar12 + 0x140) = *(long *)(lVar12 + 0x140) + 2;
          LORelease();
          if (*plVar4 == 8) {
            *plVar4 = in_xzr;
          }
          else {
            FUN_107c05d6c(plVar4,0);
          }
          __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE
                    (lVar12 + 0x10);
        }
        *(undefined1 *)((long)puVar7 + 0x219) = 0;
        puVar7[7] = 0x8000000000000004;
        puVar7[8] = uVar6;
        puVar7[9] = uVar8;
        puVar7[10] = uVar13;
        puVar7[0x1c] = puVar7 + 5;
        *(undefined1 *)(puVar7 + 0x42) = 0;
      }
      else if (bVar2 != 3) goto LAB_100a1964c;
      FUN_100fcc9a4(&uStack_2b8,puVar7 + 7,auVar14._8_8_);
      if (uStack_2b8 == 0x8000000000000006) {
        uVar9 = 3;
      }
      else {
        uStack_2d8 = uStack_230;
        uStack_2e0 = uStack_238;
        uStack_2c8 = uStack_220;
        uStack_2d0 = uStack_228;
        uStack_2c0 = uStack_218;
        uStack_318 = uStack_270;
        uStack_320 = uStack_278;
        uStack_308 = uStack_260;
        uStack_310 = uStack_268;
        uStack_2f8 = uStack_250;
        uStack_300 = uStack_258;
        uStack_2e8 = uStack_240;
        uStack_2f0 = uStack_248;
        uStack_358 = uStack_2b0;
        uStack_360 = uStack_2b8;
        uStack_348 = uStack_2a0;
        uStack_350 = uStack_2a8;
        uStack_338 = uStack_290;
        uStack_340 = uStack_298;
        uStack_328 = uStack_280;
        uStack_330 = uStack_288;
        FUN_100d4fc80(puVar7 + 7);
        if (uStack_360 != 0x8000000000000005) {
          lVar12 = 0;
          if (0x8000000000000001 < uStack_360) {
            lVar12 = uStack_360 + 0x7ffffffffffffffe;
          }
          if (lVar12 == 0) {
            FUN_100e3d46c(&uStack_360);
          }
          else {
            uVar5 = uStack_358;
            if (lVar12 != 1) {
              uVar5 = uStack_358 & 0x7fffffffffffffff;
            }
            if (uVar5 != 0) {
              _free(uStack_350);
            }
          }
        }
        *(undefined1 *)((long)puVar7 + 0x219) = 0;
        func_0x000100e0c178(puVar7 + 5);
        uVar9 = 1;
      }
      *(undefined1 *)(puVar7 + 0x43) = uVar9;
      return (ulong)(uStack_2b8 == 0x8000000000000006);
    }
    *(undefined1 *)((long)param_2 + 0x89) = 1;
    param_2[7] = param_2[1];
    param_2[6] = *param_2;
    param_2[9] = param_2[3];
    param_2[8] = param_2[2];
    param_2[0xb] = param_2[5];
    param_2[10] = param_2[4];
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&lStack_68,&UNK_108da1d52,0x15);
    if (lStack_68 == -0x8000000000000000) {
      lStack_68 = -0x8000000000000000;
    }
    else {
      func_0x0001055bf348(&sStack_1b0,uStack_60,uStack_58);
      unaff_x22 = uStack_60;
      unaff_x23 = uStack_58;
      if (CONCAT22(uStack_1ae,sStack_1b0) == 1) {
        if (lStack_68 != 0) {
          _free(uStack_60);
        }
        lStack_68 = -0x8000000000000000;
      }
    }
    param_2[0xc] = lStack_68;
    param_2[0xd] = unaff_x22;
    param_2[0xe] = unaff_x23;
    plVar4 = (long *)_malloc(0x10);
    if (plVar4 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100a193c0);
      (*pcVar11)();
    }
    *plVar4 = (long)(param_2 + 0xc);
    *(undefined1 *)(plVar4 + 1) = 0;
    puVar10 = &UNK_10b2e1658;
    param_2[0xf] = plVar4;
    param_2[0x10] = &UNK_10b2e1658;
  }
  else {
    if (bVar2 != 3) goto LAB_100a193cc;
    plVar4 = (long *)param_2[0xf];
    puVar10 = (undefined *)param_2[0x10];
  }
  uVar5 = (**(code **)(puVar10 + 0x18))(&sStack_1b0,plVar4,param_3);
  sVar3 = sStack_1b0;
  if (sStack_1b0 == 0xf) {
    *param_1 = 0x8000000000000002;
    uVar9 = 3;
    goto LAB_100a19390;
  }
  uStack_170 = CONCAT42(uStack_1ac,uStack_1ae);
  uStack_168 = uStack_1a6;
  uStack_162 = uStack_1a0;
  uStack_16a = uStack_1a8;
  uStack_158 = uStack_196;
  uStack_152 = uStack_190;
  uStack_160 = uStack_19e;
  uStack_15a = uStack_198;
  uStack_148 = uStack_186;
  uStack_150 = uStack_18e;
  uStack_14a = uStack_188;
  uStack_13a = uStack_178;
  uStack_142 = uStack_180;
  uStack_140 = uStack_17e;
  uVar6 = param_2[0xf];
  puVar7 = (undefined8 *)param_2[0x10];
  pcVar11 = (code *)*puVar7;
  if (pcVar11 != (code *)0x0) {
    uVar5 = (*pcVar11)(uVar6);
  }
  if (puVar7[1] != 0) {
    uVar5 = _free(uVar6);
  }
  if (sVar3 == 0xe) {
    uStack_100 = uStack_13a;
    *(undefined1 *)((long)param_2 + 0x89) = 0;
    uVar6 = param_2[6];
    uStack_1a8 = (undefined2)param_2[7];
    uStack_1a6 = (undefined6)((ulong)param_2[7] >> 0x10);
    sStack_1b0 = (short)uVar6;
    uStack_1ae = (undefined2)((ulong)uVar6 >> 0x10);
    uStack_1ac = (undefined4)((ulong)uVar6 >> 0x20);
    uStack_198 = (undefined2)param_2[9];
    uStack_196 = (undefined6)((ulong)param_2[9] >> 0x10);
    uStack_1a0 = (undefined2)param_2[8];
    uStack_19e = (undefined6)((ulong)param_2[8] >> 0x10);
    uStack_188 = (undefined2)param_2[0xb];
    uStack_186 = (undefined6)((ulong)param_2[0xb] >> 0x10);
    uStack_190 = (undefined2)param_2[10];
    uStack_18e = (undefined6)((ulong)param_2[10] >> 0x10);
    uVar5 = func_0x000103a65408(&uStack_f8,auStack_130,&sStack_1b0);
    if ((param_2[0xc] & 0x7fffffffffffffff) != 0) {
      uVar6 = param_2[0xd];
LAB_100a1935c:
      uVar5 = _free(uVar6);
    }
  }
  else {
    uStack_e6 = uStack_168;
    uStack_e0 = uStack_162;
    uStack_ee = uStack_170;
    uStack_e8 = uStack_16a;
    uStack_d6 = uStack_158;
    uStack_d0 = uStack_152;
    uStack_de = uStack_160;
    uStack_d8 = uStack_15a;
    uStack_c6 = uStack_148;
    uStack_ce = uStack_150;
    uStack_c8 = uStack_14a;
    uStack_b8 = uStack_13a;
    uStack_c0 = uStack_142;
    uStack_be = uStack_140;
    sStack_f0 = sVar3;
    uStack_f8 = 0x8000000000000001;
    if ((param_2[0xc] & 0x7fffffffffffffff) == 0) {
      lVar12 = param_2[6];
    }
    else {
      uVar5 = _free(param_2[0xd]);
      lVar12 = param_2[6];
    }
    if (lVar12 != -0x8000000000000000) {
      if (lVar12 != 0) {
        uVar5 = _free(param_2[7]);
      }
      if ((param_2[9] & 0x7fffffffffffffff) != 0) {
        uVar6 = param_2[10];
        goto LAB_100a1935c;
      }
    }
  }
  *(undefined1 *)((long)param_2 + 0x89) = 0;
  param_1[0xd] = uStack_90;
  param_1[0xc] = uStack_98;
  param_1[0xf] = uStack_80;
  param_1[0xe] = uStack_88;
  param_1[0x11] = uStack_70;
  param_1[0x10] = uStack_78;
  param_1[5] = CONCAT62(uStack_ce,uStack_d0);
  param_1[4] = CONCAT62(uStack_d6,uStack_d8);
  param_1[7] = CONCAT62(uStack_be,uStack_c0);
  param_1[6] = CONCAT62(uStack_c6,uStack_c8);
  param_1[9] = uStack_b0;
  param_1[8] = uStack_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = uStack_a8;
  uVar9 = 1;
  param_1[1] = CONCAT62(uStack_ee,sStack_f0);
  *param_1 = uStack_f8;
  param_1[3] = CONCAT62(uStack_de,uStack_e0);
  param_1[2] = CONCAT62(uStack_e6,uStack_e8);
LAB_100a19390:
  *(undefined1 *)(param_2 + 0x11) = uVar9;
  return uVar5;
}

