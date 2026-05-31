
void __ZN4toml2de12deserializer5table14TableMapAccess3new17hec37e753a4d1d97eE
               (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  lVar1 = param_2[1];
  lVar3 = param_2[2];
  lVar2 = param_2[4];
  if (lVar2 != 0 && lVar2 * 9 != -0x11) {
    _free(param_2[3] + lVar2 * -8 + -8);
  }
  param_1[0x11] = lVar1;
  param_1[0x12] = lVar1;
  param_1[0x13] = uVar4;
  param_1[0x14] = lVar1 + lVar3 * 0x90;
  uVar4 = param_2[10];
  param_1[0x16] = param_2[0xb];
  param_1[0x15] = uVar4;
  *param_1 = 0x8000000000000001;
  return;
}

