
void FUN_1017094bc(undefined8 param_1,ulong param_2)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong *unaff_x19;
  ulong uStack_20;
  ulong uStack_18;
  ulong uStack_10;
  undefined1 uStack_1;
  
  pcVar9 = s_agent_task_runtime___does_not_ma_108adc5ef;
  if ((param_2 & 1) == 0) {
    uVar8 = 0x13;
    bVar3 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        puVar1 = (ushort *)(pcVar9 + 1);
        uVar7 = (uint)uVar8;
        if (uVar7 >> 7 == 0) break;
        if (uVar7 == 0x80) {
          uVar6 = uVar6 + *puVar1;
          pcVar9 = (char *)((long)puVar1 + (ulong)*puVar1 + 2);
          bVar2 = *pcVar9;
        }
        else {
          bVar3 = uVar6 == 0 | bVar3;
          pcVar9 = (char *)((long)puVar1 +
                           (ulong)(uVar7 >> 2 & 2) +
                           (ulong)(((uVar7 & 3) >> 1 | (uVar7 & 1) << 1) << 1) +
                           (ulong)(uVar7 >> 1 & 2));
          bVar2 = *pcVar9;
        }
        uVar8 = (ulong)bVar2;
        if (bVar2 == 0) goto LAB_10002410c;
      }
      uVar6 = uVar6 + uVar8;
      pcVar9 = (char *)((long)puVar1 + uVar8);
      uVar8 = (ulong)(byte)*pcVar9;
    } while (*pcVar9 != 0);
LAB_10002410c:
    if ((bool)(bVar3 & uVar6 < 0x10)) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar6 << 1;
      if ((uVar6 & 0x7fffffffffffffff) >> 0x3e != 0) {
        FUN_107c03c64(0,uVar8);
        goto LAB_1000241a8;
      }
    }
  }
  else {
    uVar8 = param_2 >> 1;
  }
  if (uVar8 == 0) {
LAB_100024148:
    uStack_18 = 1;
  }
  else {
    uStack_18 = _malloc(uVar8);
    if (uStack_18 == 0) {
      FUN_107c03c64(1,uVar8);
      uVar8 = 0;
      goto LAB_100024148;
    }
  }
  uStack_10 = 0;
  uStack_20 = uVar8;
  iVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&uStack_20,&UNK_10b1d24a0,s_agent_task_runtime___does_not_ma_108adc5ef,param_2)
  ;
  if (iVar5 == 0) {
    unaff_x19[1] = uStack_18;
    *unaff_x19 = uStack_20;
    unaff_x19[2] = uStack_10;
    return;
  }
LAB_1000241a8:
  FUN_107c05cb4(&UNK_108c518d8,0x56,&uStack_1,&UNK_10b1d2460,&UNK_10b1d24d0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000241d0);
  (*pcVar4)();
}

