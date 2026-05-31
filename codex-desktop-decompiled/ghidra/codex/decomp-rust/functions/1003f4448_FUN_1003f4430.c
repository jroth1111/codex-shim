
ulong FUN_1003f4430(void)

{
  int iVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  int iStack_80;
  ushort uStack_7c;
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_52;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  
  puVar6 = &UNK_10b243fb8;
  auVar11 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,&stack0x00000010);
  ppuVar2 = auVar11._0_8_;
  iVar1 = 0;
  if ((auVar11._8_8_ & 0xffff) != 0) {
    iVar1 = (auVar11._8_4_ & 0xffff) - 1;
  }
  iStack_80 = iVar1 << 0x10;
  uStack_7c = (ushort)((uint)iVar1 >> 0x10) | (ushort)puVar6;
  uStack_70 = 0;
  ppuStack_78 = ppuVar2;
  if (((ulong)puVar6 & 0xffff) != 0) {
    uStack_52 = 1;
    puStack_68 = (undefined *)CONCAT62(puStack_68._2_6_,(short)iVar1 + 1);
    ppuStack_50 = (undefined **)&uStack_52;
    puStack_48 = &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
    ;
    ppuStack_40 = &puStack_68;
    puStack_38 = &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
    ;
    uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&ppuStack_78,&UNK_10b249e88,s_____r_108ad8df9,&ppuStack_50);
    if ((uVar3 & 1) == 0) {
      ppuStack_50 = (undefined **)((ulong)&iStack_80 | 4);
      puStack_48 = &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&ppuStack_78,&UNK_10b249e88,s___S_108ad8e03,&ppuStack_50);
      if ((uVar3 & 1) == 0) {
        ppuVar4 = (undefined **)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(ppuStack_78);
        ppuStack_50 = ppuVar4;
        uVar5 = __ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                          (&ppuStack_50,&UNK_108cd6657,3);
        iVar1 = *(int *)(ppuVar4 + 2);
        *(int *)(ppuVar4 + 2) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          ppuVar4[1] = (undefined *)0x0;
          _pthread_mutex_unlock(*ppuVar4);
        }
        uVar3 = uStack_70;
        if (uVar5 != 0) {
          if ((uStack_70 & 3) != 1) {
            return uVar5;
          }
          puVar8 = (undefined8 *)(uStack_70 - 1);
          uVar9 = *puVar8;
          puVar10 = *(undefined8 **)(uStack_70 + 7);
          pcVar7 = (code *)*puVar10;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar9);
          }
          if (puVar10[1] != 0) {
            _free(uVar9);
          }
          _free(puVar8);
          return uVar5;
        }
        goto LAB_1003f4544;
      }
    }
    if (uStack_70 != 0) {
      return uStack_70;
    }
    puStack_68 = &UNK_108cd9490;
    uStack_60 = 0x2d;
    ppuStack_50 = &puStack_68;
    puStack_48 = &DAT_100c7b3a0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_<__>__write_ansi_incorrectly_err_108adbda9,&ppuStack_50,&UNK_10b2525b0);
  }
  uVar3 = 0;
LAB_1003f4544:
  if ((uVar3 & 3) == 1) {
    uVar9 = *(undefined8 *)(uVar3 - 1);
    puVar10 = *(undefined8 **)(uVar3 + 7);
    pcVar7 = (code *)*puVar10;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar9);
    }
    if (puVar10[1] != 0) {
      _free(uVar9);
    }
    _free((undefined8 *)(uVar3 - 1));
  }
  ppuStack_50 = ppuVar2;
  uVar3 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                    (&ppuStack_50);
  return uVar3;
}

