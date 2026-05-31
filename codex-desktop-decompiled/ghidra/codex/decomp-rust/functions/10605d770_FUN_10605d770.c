
ulong FUN_10605d770(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puStack_40;
  ulong uStack_38;
  
  puStack_40 = &stack0x00000020;
  uStack_38 = 0;
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&puStack_40,&UNK_10b4ad7a0,param_2,&stack0x00000030);
  if (iVar2 == 0) {
    if ((uStack_38 & 3) == 1) {
      puVar3 = (undefined8 *)(uStack_38 - 1);
      uVar4 = *puVar3;
      puVar5 = *(undefined8 **)(uStack_38 + 7);
      pcVar1 = (code *)*puVar5;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar4);
      }
      if (puVar5[1] != 0) {
        _free(uVar4);
      }
      _free(puVar3);
    }
    uStack_38 = 0;
  }
  else if (uStack_38 == 0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd58ef,0xad,&UNK_10b4ad788);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1060299b8);
    (*pcVar1)();
  }
  return uStack_38;
}

