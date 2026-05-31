
void FUN_100dace04(long param_1)

{
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((*(char *)(param_1 + 0x78) == '\x03') && (*(char *)(param_1 + 0x31) == '\x04')) {
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    lStack_38 = param_1 + 0x70;
    lStack_30 = param_1 + 0x40;
    lStack_28 = param_1 + 0x48;
    FUN_1060fb5d4(&uStack_40);
    if (*(long *)(param_1 + 0x58) != 0) {
      (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(*(undefined8 *)(param_1 + 0x60));
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

