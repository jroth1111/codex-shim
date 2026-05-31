
void FUN_100d2a2c0(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uStack_48;
  ulong *puStack_40;
  code *pcStack_38;
  
  if ((*(byte *)(param_1 + 0x76) & 1) != 0) {
    puVar2 = (ulong *)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE((ulong *)(param_1 + 0x40));
    puStack_40 = puVar2;
    uVar3 = __ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                      (&puStack_40,&UNK_108cd15f0,6);
    iVar1 = (int)puVar2[2] + -1;
    *(int *)(puVar2 + 2) = iVar1;
    if (iVar1 == 0) {
      puVar2[1] = 0;
      _pthread_mutex_unlock(*puVar2);
    }
    if ((uVar3 == 0) &&
       (puStack_40 = (ulong *)(param_1 + 0x40),
       uVar3 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                         (&puStack_40), uVar3 == 0)) {
      *(undefined1 *)(param_1 + 0x76) = 0;
    }
    else {
      puStack_40 = &uStack_48;
      pcStack_38 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      uStack_48 = uVar3;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Failed_to_show_the_cursor__108ad81ea,&puStack_40);
      if ((uStack_48 & 3) == 1) {
        puVar6 = (undefined8 *)(uStack_48 - 1);
        uVar8 = *puVar6;
        puVar5 = *(undefined8 **)(uStack_48 + 7);
        pcVar4 = (code *)*puVar5;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar8);
        }
        if (puVar5[1] != 0) {
          _free(uVar8);
        }
        _free(puVar6);
      }
    }
  }
  for (lVar7 = 2; lVar7 != 0; lVar7 = lVar7 + -1) {
    FUN_100df67c8(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}

