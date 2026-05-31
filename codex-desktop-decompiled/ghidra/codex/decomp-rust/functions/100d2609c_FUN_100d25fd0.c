
void FUN_100d25fd0(void)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong in_stack_00000010;
  undefined8 *in_stack_00000020;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s__Failed_to_reset_the_cursor_styl_108ad81c3,&stack0x00000020);
  if ((in_stack_00000010 & 3) == 1) {
    puVar5 = (undefined8 *)(in_stack_00000010 - 1);
    uVar7 = *puVar5;
    puVar8 = *(undefined8 **)(in_stack_00000010 + 7);
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar7);
    }
    if (puVar8[1] != 0) {
      _free(uVar7);
    }
    _free(puVar5);
    bVar2 = *(byte *)(unaff_x19 + 0x62);
  }
  else {
    bVar2 = *(byte *)(unaff_x19 + 0x62);
  }
  if ((bVar2 & 1) != 0) {
    puVar5 = (undefined8 *)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE();
    in_stack_00000020 = puVar5;
    uVar3 = __ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                      (&stack0x00000020,&UNK_108cd15f0,6);
    iVar1 = *(int *)(puVar5 + 2);
    *(int *)(puVar5 + 2) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      puVar5[1] = 0;
      _pthread_mutex_unlock(*puVar5);
    }
    if ((uVar3 == 0) &&
       (in_stack_00000020 = unaff_x20,
       uVar3 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                         (&stack0x00000020), uVar3 == 0)) {
      *(undefined1 *)(unaff_x19 + 0x62) = 0;
    }
    else {
      in_stack_00000020 = &stack0x00000010;
      in_stack_00000010 = uVar3;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_Failed_to_show_the_cursor__108ad81ea,&stack0x00000020);
      if ((in_stack_00000010 & 3) == 1) {
        puVar5 = (undefined8 *)(in_stack_00000010 - 1);
        uVar7 = *puVar5;
        puVar8 = *(undefined8 **)(in_stack_00000010 + 7);
        pcVar4 = (code *)*puVar8;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar8[1] != 0) {
          _free(uVar7);
        }
        _free(puVar5);
      }
    }
  }
  for (lVar6 = 2; lVar6 != 0; lVar6 = lVar6 + -1) {
    FUN_100df67c8();
  }
  return;
}

