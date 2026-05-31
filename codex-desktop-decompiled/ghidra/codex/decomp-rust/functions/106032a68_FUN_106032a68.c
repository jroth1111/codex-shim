
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106032a68(ulong *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 in_wzr;
  long *plStack_48;
  ulong uStack_40;
  char cStack_38;
  
  puVar5 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
  uVar6 = *puVar5;
  if (2 < uVar6) {
    plStack_48 = (long *)(uVar6 - 0x10);
    lVar4 = *plStack_48;
    *plStack_48 = lVar4 + 1;
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x106032ab4);
      (*pcVar3)();
    }
    goto LAB_106032b18;
  }
  if (uVar6 == 2) {
    plVar7 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
    lVar4 = *plVar7;
    if (lVar4 == 0) {
      if (lRam000000010b66feb0 == -1) {
        FUN_108a82a30();
        goto LAB_106032bd0;
      }
      lVar4 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar4;
      *plVar7 = lVar4;
    }
    plStack_48 = (long *)0x8000000000000000;
    plStack_48 = (long *)__ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE(lVar4,&plStack_48);
  }
  else {
LAB_106032bd0:
    plStack_48 = (long *)func_0x000108a82aa8();
  }
LAB_106032b18:
  cStack_38 = '\0';
  uStack_40 = 0;
  do {
    if ((param_2 & 1) == 0) goto LAB_106032b54;
    uStack_40 = param_2 & 0xfffffffffffffffc;
    uVar6 = param_2 & 3;
    bVar1 = *param_1 != param_2;
    param_2 = *param_1;
  } while (bVar1);
  *param_1 = (ulong)&plStack_48 | uVar6;
  do {
    plVar7 = plStack_48;
    LOAcquire();
    cVar2 = (char)plStack_48[6];
    *(char *)(plStack_48 + 6) = cVar2 + -1;
    if (cVar2 != '\x01') {
      do {
        lVar4 = _dispatch_semaphore_wait(plVar7[5],0xffffffffffffffff);
      } while (lVar4 != 0);
      LOAcquire();
      *(char *)(plVar7 + 6) = (char)in_wzr;
    }
  } while (cStack_38 == '\0');
  param_2 = *param_1;
LAB_106032b54:
  lVar4 = *plStack_48;
  *plStack_48 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_48);
  }
  return param_2;
}

