
ulong FUN_1016e377c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_58;
  undefined *puStack_50;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  uStack_60 = 0;
  uStack_68 = param_1;
  __ZN9crossterm5style5types9attribute9Attribute3sgr17h56d23fdd64265c0dE(&ppuStack_58,param_2);
  puStack_38 = &DAT_10112965c;
  ppuStack_40 = &ppuStack_58;
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&uStack_68,&UNK_10b249e88,s___m_108ad7b71,&ppuStack_40);
  if ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0) {
    _free(puStack_50);
  }
  uVar1 = uStack_60;
  if (iVar2 != 0) {
    if (uStack_60 != 0) {
      return uStack_60;
    }
    ppuStack_40 = (undefined8 **)&UNK_108cd9472;
    puStack_38 = (undefined *)0x1e;
    ppuStack_58 = &ppuStack_40;
    puStack_50 = &DAT_100c7b3a0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_<__>__write_ansi_incorrectly_err_108adbda9,&ppuStack_58,&UNK_10b2525b0);
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

