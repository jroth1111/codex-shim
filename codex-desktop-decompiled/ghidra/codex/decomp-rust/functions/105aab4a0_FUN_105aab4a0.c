
undefined8 FUN_105aab4a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  byte *pbStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  pbStack_80 = (byte *)*param_1;
  bVar2 = *pbStack_80 - 4;
  if (*pbStack_80 < 4) {
    bVar2 = 5;
  }
  if (bVar2 < 4) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000105aab534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_109b15f70,9);
        return uVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x000105aab59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_109b15f79,3);
      return uVar4;
    }
    if (bVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000105aab514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_109b15f6a,6);
      return uVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x000105aab584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_109b15c73,7);
    return uVar4;
  }
  if (bVar2 < 6) {
    if (bVar2 == 4) {
                    /* WARNING: Could not recover jumptable at 0x000105aab554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_109b15f7c,10);
      return uVar4;
    }
    uVar4 = *param_2;
    lVar1 = param_2[1];
    pcVar6 = *(code **)(lVar1 + 0x18);
    uVar5 = (*pcVar6)(uVar4,&UNK_109b15f86,6);
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)param_2 + 0x12) < '\0') {
        uVar5 = (*pcVar6)(uVar4,&UNK_108f5892f,2);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uStack_59 = 1;
        puStack_68 = &uStack_59;
        uStack_48 = param_2[2];
        puStack_58 = &uStack_78;
        puStack_50 = &UNK_10b392408;
        uStack_78 = uVar4;
        lStack_70 = lVar1;
        iVar3 = func_0x000105aab954(&pbStack_80,&puStack_58);
        if (iVar3 != 0) {
          return 1;
        }
        uVar5 = __ZN68__LT_core__fmt__builders__PadAdapter_u20_as_u20_core__fmt__Write_GT_9write_str17h0a67632c7cefcdb4E
                          (&uStack_78,&UNK_108f5892c,2);
      }
      else {
        uVar5 = (*pcVar6)(uVar4,&UNK_108f5892e,1);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar5 = func_0x000105aab954(&pbStack_80,param_2);
      }
      if ((uVar5 & 1) == 0) {
        uVar4 = (*pcVar6)(uVar4,&UNK_108f58934,1);
        return uVar4;
      }
    }
    return 1;
  }
  if (bVar2 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000105aab56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_108c52088,8);
    return uVar4;
  }
  if (bVar2 == 7) {
                    /* WARNING: Could not recover jumptable at 0x000105aab4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_109b15c5a,6);
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000105aab5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_108c980c0,8);
  return uVar4;
}

