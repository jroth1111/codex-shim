
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108a82a30(void)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 auStack_a0 [3];
  undefined1 uStack_81;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6687,0x6f,&UNK_10b4ae2c0);
  uStack_18 = 0x108a82a50;
  puStack_38 = &uStack_21;
  puStack_30 = &
               __ZN68__LT_std__thread__local__AccessError_u20_as_u20_core__fmt__Debug_GT_3fmt17h4bd8a5bb0097f965E
  ;
  puStack_20 = &stack0xfffffffffffffff0;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s_Hcannot_access_a_Thread_Local_St_108b34c70,&puStack_38,uVar3);
  __ZN3std6thread6scoped9ScopeData29decrement_num_running_threads17h7c88d047211c2ab1E(uVar3,0);
  lVar4 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd66be,0x51,&UNK_10b4ae2f0);
  if (lVar4 == 0) {
    plVar5 = (long *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
    *plVar5 = 1;
    plVar6 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
    lVar4 = *plVar6;
    if (lVar4 == 0) {
      if (lRam000000010b66feb0 == -1) {
        lVar4 = FUN_108a82a30();
        goto LAB_108a82b9c;
      }
      lVar4 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar4;
      *plVar6 = lVar4;
    }
    auStack_a0[0] = 0x8000000000000000;
    plVar6 = (long *)__ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE(lVar4,auStack_a0);
    pbVar7 = (byte *)(*pcRam000000010b66cc68)();
    bVar1 = *pbVar7;
    *pbVar7 = 1;
    if ((bVar1 & 1) == 0) {
      __tlv_atexit(0x10602d260,0);
    }
    lVar4 = *plVar6;
    *plVar6 = lVar4 + 1;
    if (-1 < lVar4) {
      *plVar5 = (long)(plVar6 + 2);
      return plVar6;
    }
  }
  else {
LAB_108a82b9c:
    if (lVar4 == 1) {
      auStack_a0[0] = FUN_10602995c(&uStack_81,&UNK_109bd6748,0xf3);
      FUN_10603f834(auStack_a0);
      __ZN3std7process5abort17hdc01e45e25b715e8E();
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd66ea,0xbd,&UNK_10b4ae308);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108a82be4);
  (*pcVar2)();
}

