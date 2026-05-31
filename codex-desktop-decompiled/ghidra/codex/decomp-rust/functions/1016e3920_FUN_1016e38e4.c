
ulong FUN_1016e38e4(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  
  uStack_58 = 0;
  puStack_50 = (undefined *)((ulong)puStack_50 & 0xffffff0000000000);
  ppuStack_40 = &puStack_50;
  puStack_38 = &
               __ZN80__LT_crossterm__style__types__colored__Colored_u20_as_u20_core__fmt__Display_GT_3fmt17hdcf24e4fc5a397bfE
  ;
  uStack_60 = param_1;
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&uStack_60,&UNK_10b249e88,s___m_108ad7b71,&ppuStack_40);
  uVar1 = uStack_58;
  if (iVar2 != 0) {
    if (uStack_58 != 0) {
      return uStack_58;
    }
    puStack_50 = &UNK_108cd954c;
    uStack_48 = 0x24;
    ppuStack_40 = &puStack_50;
    puStack_38 = &DAT_100c7b3a0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_<__>__write_ansi_incorrectly_err_108adbda9,&ppuStack_40,&UNK_10b2525b0);
  }
  if ((uVar1 & 3) == 1) {
    uVar5 = *(undefined8 *)(uVar1 - 1);
    puVar4 = *(undefined8 **)(uVar1 + 7);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar4[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(uVar1 - 1));
  }
  return 0;
}

