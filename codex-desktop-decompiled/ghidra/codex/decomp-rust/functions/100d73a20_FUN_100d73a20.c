
void FUN_100d73a20(long param_1)

{
  long lVar1;
  ulong uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  
  while( true ) {
    func_0x000100fc9438(&uStack_228,param_1 + 0x1a0,param_1 + 0x80);
    if (uStack_228 + 0x7fffffffffffffbb < 2) break;
    lVar1 = uStack_228 + 0x7fffffffffffffbf;
    if (uStack_228 < 0x8000000000000041) {
      lVar1 = 1;
    }
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        FUN_100e5286c(&uStack_228);
      }
      else if (lVar1 == 2) {
        func_0x000100e45ab8(&lStack_220);
      }
      else if (lStack_220 != 0) {
        _free(uStack_218);
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x1a8);
  do {
    lVar1 = *(long *)(lVar1 + 0x3f08);
    _free();
  } while (lVar1 != 0);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(param_1 + 0x100) + 0x18))(*(undefined8 *)(param_1 + 0x108));
  }
  return;
}

