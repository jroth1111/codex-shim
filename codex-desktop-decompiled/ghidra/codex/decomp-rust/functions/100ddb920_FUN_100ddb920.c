
void FUN_100ddb920(long param_1)

{
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  FUN_100de8a5c();
  if ((*(char *)(param_1 + 0xe8) == '\x03') && (*(char *)(param_1 + 0xa1) == '\x04')) {
    uStack_40 = *(undefined8 *)(param_1 + 0xa8);
    lStack_38 = param_1 + 0xe0;
    lStack_30 = param_1 + 0xb0;
    lStack_28 = param_1 + 0xb8;
    FUN_1060fb5d4(&uStack_40);
    if (*(long *)(param_1 + 200) != 0) {
      (**(code **)(*(long *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}

