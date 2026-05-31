
void FUN_1006308a0(undefined2 *param_1,undefined8 *param_2)

{
  char cStack_30;
  byte bStack_2f;
  undefined8 uStack_28;
  
  FUN_1011de2a4(&cStack_30);
  if (cStack_30 != '\x01') {
    if ((bStack_2f & 1) == 0) {
      *param_1 = 0x300;
      return;
    }
    func_0x0001012d24d8(&cStack_30,*param_2);
    if (cStack_30 != '\x01') {
      *(byte *)((long)param_1 + 1) = bStack_2f;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  *(undefined8 *)(param_1 + 4) = uStack_28;
  *(undefined1 *)param_1 = 1;
  return;
}

