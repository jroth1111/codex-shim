
undefined1  [16] FUN_100e9e4b0(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_<__>__write_ansi_incorrectly_err_108adbda9,&stack0x00000020,&UNK_10b2525b0);
  if ((unaff_x20 & 3) == 1) {
    uVar3 = *(undefined8 *)(unaff_x20 - 1);
    puVar4 = *(undefined8 **)(unaff_x20 + 7);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free((undefined8 *)(unaff_x20 - 1));
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_x19;
  return auVar1 << 0x40;
}

