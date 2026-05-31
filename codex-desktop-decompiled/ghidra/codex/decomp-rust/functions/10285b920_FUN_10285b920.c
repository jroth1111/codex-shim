
void FUN_10285b920(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_210;
  undefined8 uStack_208;
  undefined4 uStack_1f4;
  undefined2 uStack_1f0;
  undefined4 uStack_1ee;
  undefined2 uStack_1ea;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  long lStack_58;
  long lStack_50;
  
  __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(&puStack_1d8);
  func_0x000102877ca8(&lStack_210,&puStack_1d8);
  uStack_1f4 = 0;
  uStack_1f0 = 0x1b6;
  uStack_1ea = 1;
  uStack_1ee = 0x10000;
  puStack_1d8 = (undefined1 *)0x6f6c2e726f727265;
  puStack_1d0 = (undefined *)CONCAT62(puStack_1d0._2_6_,0x67);
  __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E(&lStack_58,&puStack_1d8,10);
  if ((int)lStack_58 == 1) {
    puStack_1e0 = &UNK_10b4add80;
  }
  else {
    FUN_10602e6c4(&uStack_1e8,lStack_50,&uStack_1f4);
    if ((uStack_1e8 & 1) == 0) {
      uStack_1e8 = uStack_1e4;
      lStack_58 = param_1[1];
      lStack_50 = param_1[2];
      puStack_1d0 = &DAT_102876808;
      plStack_1c8 = &lStack_58;
      puStack_1c0 = &DAT_10285f360;
      puStack_1d8 = (undefined1 *)&lStack_210;
      uVar1 = func_0x00010285eba8(&uStack_1e8,&puStack_1d8);
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
        _close(uStack_1e8);
      }
      else {
        _close(uStack_1e8);
      }
      goto joined_r0x00010285ba9c;
    }
  }
  if (((ulong)puStack_1e0 & 3) == 1) {
    puVar4 = (undefined8 *)(puStack_1e0 + -1);
    uVar5 = *puVar4;
    puVar3 = *(undefined8 **)(puStack_1e0 + 7);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar3[1] != 0) {
      _free(uVar5);
    }
    _free(puVar4);
  }
joined_r0x00010285ba9c:
  if (lStack_210 != 0) {
    _free(uStack_208);
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  return;
}

