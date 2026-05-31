
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __ZN3std5alloc8rust_oom17h57ea79c83371d333E(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 auStack_e0 [3];
  undefined1 uStack_c1;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  puVar3 = (undefined8 *)
           __ZN3std3sys9backtrace26__rust_end_short_backtrace17h179837de08e394a0E(&uStack_20);
  puStack_40 = (undefined1 *)&puStack_30;
  uStack_28 = 0x108a829f0;
  pcVar2 = (code *)&__ZN3std5alloc24default_alloc_error_hook17hd55c569ad4145d87E;
  if (___ZN3std5alloc4HOOK17h7d79f4b31a4d36c4E != (code *)0x0) {
    pcVar2 = ___ZN3std5alloc4HOOK17h7d79f4b31a4d36c4E;
  }
  puStack_30 = &stack0xfffffffffffffff0;
  (*pcVar2)(*puVar3,puVar3[1]);
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  uStack_38 = 0x108a82a24;
  FUN_108a82c38();
  pcStack_48 = FUN_108a82a30;
  puStack_50 = (undefined1 *)&puStack_40;
  uVar4 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6687,0x6f,&UNK_10b4ae2c0);
  uStack_58 = 0x108a82a50;
  puStack_78 = &uStack_61;
  puStack_70 = &
               __ZN68__LT_std__thread__local__AccessError_u20_as_u20_core__fmt__Debug_GT_3fmt17h4bd8a5bb0097f965E
  ;
  puStack_60 = (undefined1 *)&puStack_50;
  uVar4 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s_Hcannot_access_a_Thread_Local_St_108b34c70,&puStack_78,uVar4);
  __ZN3std6thread6scoped9ScopeData29decrement_num_running_threads17h7c88d047211c2ab1E(uVar4,0);
  lVar5 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd66be,0x51,&UNK_10b4ae2f0);
  if (lVar5 == 0) {
    plVar6 = (long *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
    *plVar6 = 1;
    plVar7 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
    lVar5 = *plVar7;
    if (lVar5 == 0) {
      if (lRam000000010b66feb0 == -1) {
        lVar5 = FUN_108a82a30();
        goto LAB_108a82b9c;
      }
      lVar5 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar5;
      *plVar7 = lVar5;
    }
    auStack_e0[0] = 0x8000000000000000;
    plVar7 = (long *)__ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE(lVar5,auStack_e0);
    pbVar8 = (byte *)(*pcRam000000010b66cc68)();
    bVar1 = *pbVar8;
    *pbVar8 = 1;
    if ((bVar1 & 1) == 0) {
      __tlv_atexit(0x10602d260,0);
    }
    lVar5 = *plVar7;
    *plVar7 = lVar5 + 1;
    if (-1 < lVar5) {
      *plVar6 = (long)(plVar7 + 2);
      return plVar7;
    }
  }
  else {
LAB_108a82b9c:
    if (lVar5 == 1) {
      auStack_e0[0] = FUN_10602995c(&uStack_c1,&UNK_109bd6748,0xf3);
      FUN_10603f834(auStack_e0);
      __ZN3std7process5abort17hdc01e45e25b715e8E();
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd66ea,0xbd,&UNK_10b4ae308);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108a82be4);
  (*pcVar2)();
}

