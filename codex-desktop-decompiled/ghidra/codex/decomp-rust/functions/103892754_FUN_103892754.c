
void FUN_103892754(undefined8 *param_1,undefined8 *param_2)

{
  char cStack_38;
  byte bStack_37;
  undefined6 uStack_36;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103982584(&cStack_38);
  if (cStack_38 != '\x01') {
    if ((bStack_37 & 1) == 0) {
      *param_1 = 0x8000000000000000;
      return;
    }
    func_0x0001039989dc(&cStack_38,*param_2);
    if (CONCAT62(uStack_36,CONCAT11(bStack_37,cStack_38)) != -0x8000000000000000) {
      param_1[1] = uStack_30;
      *param_1 = CONCAT62(uStack_36,CONCAT11(bStack_37,cStack_38));
      param_1[2] = uStack_28;
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = uStack_30;
  return;
}

