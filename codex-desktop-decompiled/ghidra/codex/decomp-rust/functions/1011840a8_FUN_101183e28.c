
undefined8 FUN_101183e28(long *param_1,undefined8 param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 auStack_30 [15];
  undefined1 uStack_21;
  
  lVar4 = _malloc(0x20);
  if (lVar4 != 0) {
    lStack_48 = 0x20;
    lStack_38 = 0;
    lStack_40 = lVar4;
    __ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h3181715a776bebffE
              (auStack_30,param_2,0);
    uVar5 = FUN_10118323c(&lStack_48,auStack_30,4,0);
    if ((int)uVar5 != 0) {
      func_0x000108a07a3c(&UNK_108cccd58,0x34,&uStack_21,&UNK_10b235000,&UNK_10b248498);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101183ec8);
      (*pcVar2)();
    }
    param_1[1] = lStack_40;
    *param_1 = lStack_48;
    param_1[2] = lStack_38;
    return uVar5;
  }
  uVar5 = func_0x0001087c9084(1,0x20);
  if (lStack_48 != 0) {
    _free(lStack_40);
  }
  auVar10 = __Unwind_Resume(uVar5);
  puVar7 = auVar10._8_8_;
  uStack_b8 = auVar10._0_8_;
  uStack_58 = 0x101183ef4;
  puStack_b0 = &uStack_b8;
  puStack_a0 = puVar7 + 1;
  plVar8 = (long *)*puVar7;
  lVar4 = plVar8[2];
  puStack_60 = &stack0xfffffffffffffff0;
  if (*plVar8 == lVar4) {
    FUN_108855060(plVar8,lVar4,1,1,1);
    lVar4 = plVar8[2];
  }
  *(undefined1 *)(plVar8[1] + lVar4) = 0x22;
  plVar8[2] = lVar4 + 1;
  ppuStack_90 = &puStack_b0;
  uStack_98 = 0;
  puStack_88 = &DAT_100c7bbf8;
  puStack_a8 = puVar7;
  iVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&puStack_a8,&UNK_10b208d80,s__108b1bd74,&ppuStack_90);
  if (iVar3 == 0) {
    plVar8 = (long *)*puVar7;
    lVar4 = plVar8[2];
    if (*plVar8 == lVar4) {
      FUN_108855060(plVar8,lVar4,1,1,1);
      lVar4 = plVar8[2];
    }
    *(undefined1 *)(plVar8[1] + lVar4) = 0x22;
    plVar8[2] = lVar4 + 1;
    if ((uStack_98 & 3) == 1) {
      puVar7 = (undefined8 *)(uStack_98 - 1);
      uVar5 = *puVar7;
      puVar9 = *(undefined8 **)(uStack_98 + 7);
      pcVar2 = (code *)*puVar9;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar5);
      }
      if (puVar9[1] != 0) {
        _free(uVar5);
      }
      _free(puVar7);
    }
    uVar5 = 0;
  }
  else {
    if (uStack_98 == 0) {
      uVar5 = func_0x000108a079f0(&UNK_108ca1016,0x18,&UNK_10b208d38);
      if (plVar8[1] != 0) {
        _free(&puStack_a8);
      }
      _free(puVar7);
      uVar5 = __Unwind_Resume(uVar5);
      if (uStack_98 != 0) {
        FUN_100de21d4(&uStack_98);
      }
      __Unwind_Resume(uVar5);
      auVar10 = func_0x000108a07bc4();
      if (auVar10._8_8_ != 0) {
        uStack_c8 = 0x1011840a8;
        lVar4 = auVar10._8_8_ << 6;
        puVar9 = (undefined8 *)(auVar10._0_8_ + 0x10);
        uStack_e0 = uVar5;
        puStack_d8 = puVar7;
        ppuStack_d0 = &puStack_60;
        do {
          cVar1 = *(char *)(puVar9 + -2);
          if (cVar1 != '\x16') {
            if (cVar1 == '\x0f') {
              uVar5 = puVar9[-1];
              uVar6 = *puVar9;
            }
            else {
              if (cVar1 != '\x0e') goto LAB_1011840d4;
              uVar5 = *puVar9;
              uVar6 = puVar9[1];
            }
            func_0x0001055bf348(auStack_f8,uVar5,uVar6);
          }
LAB_1011840d4:
          puVar9 = puVar9 + 8;
          lVar4 = lVar4 + -0x40;
        } while (lVar4 != 0);
      }
      return 0;
    }
    uVar5 = func_0x000108a4a084();
  }
  return uVar5;
}

