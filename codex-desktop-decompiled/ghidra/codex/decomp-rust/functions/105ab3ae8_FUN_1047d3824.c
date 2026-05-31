
void FUN_1047d3824(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 in_wzr;
  undefined7 in_register_000040f9;
  
  lVar8 = *param_1;
  if (lVar8 != 4) {
    plVar6 = (long *)param_1[0x20];
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)plVar6[1];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar5);
      }
      if (puVar7[1] != 0) {
        _free(lVar5);
      }
    }
    _free(plVar6);
    if (lVar8 != 3) {
      FUN_1047e06ac(param_1);
      lVar8 = param_1[0x1e];
      puVar7 = (undefined8 *)param_1[0x1f];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar8);
      }
      if (puVar7[1] != 0) goto code_r0x000108aa97c4;
    }
    return;
  }
  FUN_1047de960(param_1 + 1);
  func_0x0001047e6384(param_1 + 0xd);
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if ((char)param_1[0x11] != '\x01') {
    plVar6 = (long *)param_1[0x13];
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      *plVar6 = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9cdd98fed5209d92E();
      }
    }
    param_1 = param_1 + 0x14;
    __ZN79__LT_rama_http_core__h2__share__RecvStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h0efd2cbd4e636d39E
              ();
    __ZN102__LT_rama_http_core__h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h15da56b666546e37E
              (param_1);
    lVar8 = *(long *)*param_1;
    *(long *)*param_1 = lVar8 + -1;
    LORelease();
    if (lVar8 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    lVar8 = *param_1;
    FUN_105aacc60(lVar8 + 0x10);
    if (lVar8 != -1) {
      lVar5 = *(long *)(lVar8 + 8);
      *(long *)(lVar8 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar8);
        return;
      }
    }
    return;
  }
  plVar6 = param_1 + 0x14;
  lVar5 = *plVar6;
  LOAcquire();
  lVar8 = *(long *)(lVar5 + 0x10);
  *(long *)(lVar5 + 0x10) = CONCAT71(in_register_000040f9,in_wzr);
  LORelease();
  if (lVar8 != 0) {
    puVar1 = (ulong *)(lVar5 + 0x28);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar8 = *(long *)(lVar5 + 0x18);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *puVar1 = *puVar1 & 0xfffffffffffffffd;
      LORelease();
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar5 + 0x20));
      }
    }
  }
  lVar8 = *(long *)*plVar6;
  *(long *)*plVar6 = lVar8 + -1;
  LORelease();
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9f476c5001a43c0cE(plVar6);
  }
  FUN_1047ccda0(param_1 + 0x13);
  param_1 = param_1 + 0x15;
  lVar8 = *param_1;
  *(undefined1 *)(lVar8 + 0xa8) = 1;
  LOAcquire();
  cVar2 = *(char *)(lVar8 + 0x88);
  *(char *)(lVar8 + 0x88) = '\x01';
  LORelease();
  if (cVar2 == '\0') {
    lVar5 = *(long *)(lVar8 + 0x78);
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined1 *)(lVar8 + 0x88) = in_wzr;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar8 + 0x80));
    }
  }
  LOAcquire();
  cVar2 = *(char *)(lVar8 + 0xa0);
  *(char *)(lVar8 + 0xa0) = '\x01';
  LORelease();
  if (cVar2 == '\0') {
    lVar5 = *(long *)(lVar8 + 0x90);
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined1 *)(lVar8 + 0xa0) = in_wzr;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar8 + 0x98));
    }
  }
  lVar8 = *(long *)*param_1;
  *(long *)*param_1 = lVar8 + -1;
  LORelease();
  if (lVar8 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar8 = *param_1;
  if (*(long *)(lVar8 + 0x10) != 3) {
    func_0x000105aaddc8();
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    (**(code **)(*(long *)(lVar8 + 0x78) + 0x18))(*(undefined8 *)(lVar8 + 0x80));
  }
  if (*(long *)(lVar8 + 0x90) != 0) {
    (**(code **)(*(long *)(lVar8 + 0x90) + 0x18))(*(undefined8 *)(lVar8 + 0x98));
  }
  if (lVar8 != -1) {
    lVar5 = *(long *)(lVar8 + 8);
    *(long *)(lVar8 + 8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

