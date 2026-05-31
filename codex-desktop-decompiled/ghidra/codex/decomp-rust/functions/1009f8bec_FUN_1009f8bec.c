
void FUN_1009f8bec(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e4;
  undefined2 uStack_1e0;
  undefined4 uStack_1de;
  undefined2 uStack_1da;
  uint uStack_1d8;
  uint uStack_1d4;
  undefined *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(&puStack_1c8);
  FUN_101183e28(&lStack_200,&puStack_1c8);
  uStack_1e4 = 0;
  uStack_1e0 = 0x1b6;
  uStack_1da = 1;
  uStack_1de = 0x10000;
  puStack_1c8 = (undefined1 *)0x6f6c2e726f727265;
  puStack_1c0 = (undefined *)CONCAT62(puStack_1c0._2_6_,0x67);
  __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E(&puStack_48,&puStack_1c8,10);
  if ((int)puStack_48 == 1) {
    puStack_1d0 = &UNK_10b4add80;
  }
  else {
    FUN_10602e6c4(&uStack_1d8,uStack_40,&uStack_1e4);
    if ((uStack_1d8 & 1) == 0) {
      uStack_1d8 = uStack_1d4;
      puStack_48 = &UNK_108cb5202;
      uStack_40 = 0xf;
      puStack_1c0 = &DAT_10112965c;
      ppuStack_1b8 = &puStack_48;
      puStack_1b0 = &DAT_100c7b3a0;
      puStack_1c8 = (undefined1 *)&lStack_200;
      uVar1 = func_0x000100c35124(&uStack_1d8,&puStack_1c8);
      if ((uVar1 & 3) == 1) {
        uVar5 = *(undefined8 *)(uVar1 - 1);
        puVar3 = *(undefined8 **)(uVar1 + 7);
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar5);
        }
        if (puVar3[1] != 0) {
          _free(uVar5);
        }
        _free((undefined8 *)(uVar1 - 1));
        _close(uStack_1d8);
      }
      else {
        _close(uStack_1d8);
      }
      goto joined_r0x0001009f8d54;
    }
  }
  if (((ulong)puStack_1d0 & 3) == 1) {
    puVar4 = (undefined8 *)(puStack_1d0 + -1);
    uVar5 = *puVar4;
    puVar3 = *(undefined8 **)(puStack_1d0 + 7);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar3[1] != 0) {
      _free(uVar5);
    }
    _free(puVar4);
  }
joined_r0x0001009f8d54:
  if (lStack_200 != 0) {
    _free(uStack_1f8);
  }
  return;
}

