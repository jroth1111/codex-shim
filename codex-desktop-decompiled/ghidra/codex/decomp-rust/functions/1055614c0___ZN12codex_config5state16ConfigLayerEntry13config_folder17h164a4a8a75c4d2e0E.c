
void __ZN12codex_config5state16ConfigLayerEntry13config_folder17h164a4a8a75c4d2e0E
               (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *extraout_x8;
  long lVar3;
  long extraout_x9;
  undefined1 auVar4 [16];
  char *pcStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  byte abStack_68 [56];
  
  lVar3 = *param_2;
  if (2 < lVar3) {
    if ((4 < lVar3) || (lVar3 != 3)) goto LAB_10294e35c;
    lVar3 = param_2[2];
    lVar2 = param_2[3];
    if (lVar2 == 0) {
      lVar1 = 1;
LAB_10294e38c:
      _memcpy(lVar1,lVar3,lVar2);
      *param_1 = lVar2;
      param_1[1] = lVar1;
      param_1[2] = lVar2;
      return;
    }
    lVar1 = _malloc(lVar2);
    if (lVar1 != 0) goto LAB_10294e38c;
    param_2 = (long *)func_0x0001087c9084(1,lVar2);
    param_1 = extraout_x8;
    lVar3 = extraout_x9;
  }
  if (lVar3 == 0) {
LAB_10294e35c:
    *param_1 = -0x8000000000000000;
    return;
  }
  if (lVar3 == 1) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = param_2 + 4;
  }
  pcStack_a8 = (char *)param_2[1];
  lStack_a0 = param_2[2];
  if (lStack_a0 == 0) {
    uStack_6e = false;
  }
  else {
    uStack_6e = *pcStack_a8 == '/';
  }
  uStack_98 = 6;
  uStack_70 = 0x201;
  __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
            (abStack_68,&pcStack_a8);
  if (abStack_68[0] - 7 < 3) {
    auVar4 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&pcStack_a8);
    lVar3 = auVar4._8_8_;
    if (auVar4._0_8_ != 0) {
      if (lVar3 == 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = _malloc(lVar3);
        if (lVar2 == 0) {
          func_0x0001087c9084(1,lVar3);
          goto LAB_10556155c;
        }
      }
      _memcpy(lVar2,auVar4._0_8_,lVar3);
      *param_1 = lVar3;
      param_1[1] = lVar2;
      param_1[2] = lVar3;
      return;
    }
  }
LAB_10556155c:
  *param_1 = -0x8000000000000000;
  return;
}

