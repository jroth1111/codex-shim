
void FUN_1011a3a1c(long *param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  long lStack_90;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  undefined8 ***pppuStack_60;
  undefined8 ***pppuStack_58;
  undefined8 ***pppuStack_50;
  long lStack_48;
  
  plVar4 = param_2 + 2;
  ppppuVar8 = (undefined8 ****)*plVar4;
  if (ppppuVar8 == (undefined8 ****)0x0) {
    puVar9 = (undefined *)param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x20);
    goto LAB_1011a3b10;
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    ppppuVar7 = (undefined8 ****)param_2[1];
    ppppuVar10 = (undefined8 ****)*param_2;
    lVar6 = param_2[3];
    ppppuVar11 = (undefined8 ****)param_2[2];
    *param_2 = (long)&UNK_10b205a90;
    param_2[1] = (long)(param_2[1] + (long)ppppuVar8);
    *plVar4 = 0;
    param_2[3] = 0;
    pppuStack_a8 = (undefined8 ***)param_2[1];
    pppuStack_b0 = (undefined8 ***)*param_2;
    pppuStack_98 = (undefined8 ***)param_2[3];
    pppuStack_a0 = (undefined8 ***)param_2[2];
    (*(code *)pppuStack_b0[4])(&pppuStack_98,pppuStack_a8,pppuStack_a0);
    pppuStack_80 = ppppuVar10;
    pppuStack_78 = ppppuVar7;
    pppuStack_70 = ppppuVar11;
    lStack_68 = lVar6;
    uVar3 = (*(code *)ppppuVar10[3])(&lStack_68);
    pppuVar2 = pppuStack_70;
    pppuVar1 = pppuStack_78;
    if ((uVar3 & 1) == 0) {
      pppuStack_a0 = pppuStack_78;
      pppuStack_a8 = pppuStack_80;
      lStack_90 = lStack_68;
      pppuStack_98 = pppuStack_70;
      pppuStack_58 = pppuStack_78;
      pppuStack_60 = pppuStack_80;
      lStack_48 = lStack_68;
      pppuStack_50 = pppuStack_70;
      lVar6 = param_1[1];
      if ((undefined8 ****)(param_1[2] - lVar6) < pppuStack_70) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,pppuStack_70,1);
        lVar6 = param_1[1];
      }
      _memcpy(*param_1 + lVar6,pppuVar1,pppuVar2);
      ppppuVar8 = (undefined8 ****)(param_1[2] - param_1[1]);
      if (pppuVar2 <= ppppuVar8) {
        param_1[1] = (long)(param_1[1] + (long)pppuVar2);
        (*(code *)pppuStack_60[4])(&lStack_48,pppuStack_58,pppuStack_50);
        return;
      }
      pppuStack_80 = pppuVar2;
      pppuStack_78 = ppppuVar8;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppuStack_80);
LAB_1011a3d18:
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1011a3d1c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    pppuStack_58 = pppuStack_78;
    pppuStack_60 = pppuStack_80;
    lStack_48 = lStack_68;
    pppuStack_50 = pppuStack_70;
    (*(code *)pppuStack_80[2])(&pppuStack_a8,&lStack_48,pppuStack_78,pppuStack_70);
    pppuStack_b0 = (undefined8 ***)0x0;
    plVar4 = (long *)param_1[3];
    if (((ulong)plVar4 & 1) == 0) {
      lVar6 = plVar4[4];
      plVar4[4] = lVar6 + -1;
      LORelease();
      if (lVar6 != 1) goto LAB_1011a3ca0;
      if (*plVar4 != 0) {
        _free(plVar4[1]);
      }
    }
    else {
      if (param_1[2] + ((ulong)plVar4 >> 5) == 0) goto LAB_1011a3ca0;
      plVar4 = (long *)(*param_1 - ((ulong)plVar4 >> 5));
    }
    _free(plVar4);
LAB_1011a3ca0:
    param_1[1] = (long)pppuStack_a0;
    *param_1 = (long)pppuStack_a8;
    param_1[3] = lStack_90;
    param_1[2] = (long)pppuStack_98;
    return;
  }
  puVar5 = (undefined *)param_1[1];
  if ((undefined8 ****)(lVar6 - (long)puVar5) < ppppuVar8) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,ppppuVar8,1);
    ppppuVar8 = (undefined8 ****)*plVar4;
    if (ppppuVar8 != (undefined8 ****)0x0) {
      puVar5 = (undefined *)param_1[1];
      lVar6 = param_1[2];
      goto LAB_1011a3a7c;
    }
    puVar9 = (undefined *)param_2[1];
  }
  else {
LAB_1011a3a7c:
    puVar9 = (undefined *)param_2[1];
    do {
      ppppuVar10 = ppppuVar8;
      if ((undefined8 ****)(lVar6 - (long)puVar5) < ppppuVar10) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,ppppuVar10,1);
        puVar5 = (undefined *)param_1[1];
      }
      _memcpy(puVar5 + *param_1,puVar9,ppppuVar10);
      lVar6 = param_1[2];
      pppuStack_a8 = (undefined8 ***)(lVar6 - param_1[1]);
      if (pppuStack_a8 < ppppuVar10) {
        pppuStack_b0 = ppppuVar10;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pppuStack_b0);
        goto LAB_1011a3d18;
      }
      puVar5 = (undefined *)(param_1[1] + (long)ppppuVar10);
      param_1[1] = (long)puVar5;
      ppppuVar7 = (undefined8 ****)*plVar4;
      ppppuVar8 = (undefined8 ****)((long)ppppuVar7 - (long)ppppuVar10);
      pppuStack_80 = ppppuVar10;
      if (ppppuVar7 < ppppuVar10) {
        pppuStack_b0 = &pppuStack_80;
        pppuStack_a8 = (undefined8 ***)&DAT_100c929e0;
        pppuStack_a0 = &pppuStack_60;
        pppuStack_98 = (undefined8 ***)&DAT_100c929e0;
        pppuStack_60 = ppppuVar7;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__cannot_advance_past__remaining__108aba12e,&pppuStack_b0,&UNK_10b243fb8);
        goto LAB_1011a3d18;
      }
      puVar9 = (undefined *)(param_2[1] + (long)ppppuVar10);
      param_2[1] = (long)puVar9;
      param_2[2] = (long)ppppuVar8;
    } while (ppppuVar8 != (undefined8 ****)0x0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x20);
LAB_1011a3b10:
                    /* WARNING: Could not recover jumptable at 0x0001011a3b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2 + 3,puVar9,0);
  return;
}

