
void FUN_100c7bfb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  uStack_60 = 0;
  lStack_58 = 1;
  lStack_50 = 0;
  FUN_10624142c(&uStack_44,param_2,0);
  FUN_108855060(&uStack_60,0,0x24,1,1);
  puVar1 = (undefined8 *)(lStack_58 + lStack_50);
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_44;
  puVar1[3] = uStack_2c;
  puVar1[2] = uStack_34;
  *(undefined4 *)(puVar1 + 4) = uStack_24;
  param_1[1] = lStack_58;
  *param_1 = uStack_60;
  param_1[2] = lStack_50 + 0x24;
  return;
}

