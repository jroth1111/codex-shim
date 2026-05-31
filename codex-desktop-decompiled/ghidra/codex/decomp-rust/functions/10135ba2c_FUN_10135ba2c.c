
void FUN_10135ba2c(long *param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  char cStack_78;
  undefined3 uStack_77;
  undefined1 uStack_74;
  undefined3 uStack_73;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  cStack_78 = *param_2;
  lStack_70 = *(long *)(param_2 + 8);
  if (cStack_78 == '\x16') {
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = lStack_70;
    return;
  }
  uStack_77 = (undefined3)*(undefined4 *)(param_2 + 1);
  uStack_74 = (undefined1)*(undefined4 *)(param_2 + 4);
  uStack_73 = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  uStack_68 = *(undefined8 *)(param_2 + 0x10);
  FUN_1004e07f8(&lStack_58,&cStack_78);
  if (lStack_58 == -0x8000000000000000) {
    if (*plStack_50 == 1) {
      uVar5 = plStack_50[1];
      if ((uVar5 & 3) == 1) {
        puVar4 = (undefined8 *)(uVar5 - 1);
        uVar6 = *puVar4;
        puVar7 = *(undefined8 **)(uVar5 + 7);
        pcVar3 = (code *)*puVar7;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar6);
        }
        if (puVar7[1] != 0) {
          _free(uVar6);
        }
        goto LAB_10135babc;
      }
    }
    else if ((*plStack_50 == 0) && (plStack_50[2] != 0)) {
      puVar4 = (undefined8 *)plStack_50[1];
LAB_10135babc:
      _free(puVar4);
    }
    _free(plStack_50);
    auVar8 = FUN_100fbc904(&cStack_78);
    plVar2 = auVar8._8_8_;
    if ((auVar8._0_8_ & 1) != 0) {
      if (*plVar2 == 1) {
        uVar5 = plVar2[1];
        if ((uVar5 & 3) == 1) {
          puVar4 = (undefined8 *)(uVar5 - 1);
          uVar6 = *puVar4;
          puVar7 = *(undefined8 **)(uVar5 + 7);
          pcVar3 = (code *)*puVar7;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar6);
          }
          if (puVar7[1] != 0) {
            _free(uVar6);
          }
          goto LAB_10135bb1c;
        }
      }
      else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
        puVar4 = (undefined8 *)plVar2[1];
LAB_10135bb1c:
        _free(puVar4);
      }
      _free(plVar2);
      lVar1 = FUN_1088561c0(&UNK_108cadf36,0x39);
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar1;
      goto LAB_10135bb6c;
    }
    *param_1 = -0x8000000000000000;
    lVar1 = 8;
    plStack_48 = plVar2;
  }
  else {
    lVar1 = 0x10;
    *param_1 = lStack_58;
    param_1[1] = (long)plStack_50;
  }
  *(long **)((long)param_1 + lVar1) = plStack_48;
LAB_10135bb6c:
  FUN_100e077ec(&cStack_78);
  return;
}

