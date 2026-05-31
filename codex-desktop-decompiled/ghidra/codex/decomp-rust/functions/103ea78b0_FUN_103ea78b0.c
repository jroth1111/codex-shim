
void FUN_103ea78b0(char *param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 extraout_x1;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  undefined8 *puVar2;
  
  if (*param_1 == '\x01') {
    param_3 = &UNK_10b2fff38;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff38);
    param_2 = extraout_x1;
    lVar1 = extraout_x8;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 8);
    unaff_x19 = (long *)*puVar2;
    if (param_1[1] != '\x01') {
      lVar1 = unaff_x19[2];
      if (*unaff_x19 == lVar1) {
        FUN_10897c4d0(unaff_x19,lVar1,1,1,1);
        lVar1 = unaff_x19[2];
      }
      *(undefined1 *)(unaff_x19[1] + lVar1) = 0x2c;
      unaff_x19[2] = lVar1 + 1;
      unaff_x19 = (long *)*puVar2;
    }
    param_1[1] = '\x02';
    lVar1 = unaff_x19[2];
    if (*unaff_x19 != lVar1) goto LAB_103ea7924;
  }
  FUN_10897c4d0(unaff_x19,lVar1,1,1,1);
  lVar1 = unaff_x19[2];
LAB_103ea7924:
  *(undefined1 *)(unaff_x19[1] + lVar1) = 0x22;
  unaff_x19[2] = lVar1 + 1;
  func_0x000103d37ee8(unaff_x19,param_2,param_3);
  lVar1 = unaff_x19[2];
  if (*unaff_x19 == lVar1) {
    FUN_10897c4d0(unaff_x19,lVar1,1,1,1);
    lVar1 = unaff_x19[2];
  }
  *(undefined1 *)(unaff_x19[1] + lVar1) = 0x22;
  unaff_x19[2] = lVar1 + 1;
  return;
}

