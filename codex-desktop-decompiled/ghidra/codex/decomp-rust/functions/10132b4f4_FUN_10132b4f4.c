
void FUN_10132b4f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  char cStack_80;
  undefined3 uStack_7f;
  undefined1 uStack_7c;
  undefined3 uStack_7b;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&uStack_60,param_2);
  if ((char)uStack_60 == '\x16') {
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = (long)plStack_58;
    return;
  }
  uStack_7f = (undefined3)((uint)uStack_60 >> 8);
  uStack_7c = (undefined1)uStack_5c;
  uStack_7b = (undefined3)((uint)uStack_5c >> 8);
  uStack_68 = uStack_48;
  plStack_70 = plStack_50;
  cStack_80 = (char)uStack_60;
  plStack_78 = plStack_58;
  FUN_1004e07f8(&uStack_60,&cStack_80);
  if (CONCAT44(uStack_5c,uStack_60) == -0x8000000000000000) {
    if (*plStack_58 == 1) {
      uVar5 = plStack_58[1];
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
        goto LAB_10132b594;
      }
    }
    else if ((*plStack_58 == 0) && (plStack_58[2] != 0)) {
      puVar4 = (undefined8 *)plStack_58[1];
LAB_10132b594:
      _free(puVar4);
    }
    _free(plStack_58);
    auVar8 = FUN_100fbc904(&cStack_80);
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
          goto LAB_10132b5f4;
        }
      }
      else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
        puVar4 = (undefined8 *)plVar2[1];
LAB_10132b5f4:
        _free(puVar4);
      }
      _free(plVar2);
      lVar1 = FUN_1088561c0(&UNK_108cadf36,0x39);
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar1;
      goto LAB_10132b644;
    }
    *param_1 = -0x8000000000000000;
    lVar1 = 8;
    plStack_50 = plVar2;
  }
  else {
    lVar1 = 0x10;
    *param_1 = CONCAT44(uStack_5c,uStack_60);
    param_1[1] = (long)plStack_58;
  }
  *(long **)((long)param_1 + lVar1) = plStack_50;
LAB_10132b644:
  FUN_100e077ec(&cStack_80);
  return;
}

