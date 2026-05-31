
void FUN_100cf964c(long param_1)

{
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x21) == '\x04') {
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    lStack_38 = param_1 + 0x60;
    lStack_30 = param_1 + 0x30;
    lStack_28 = param_1 + 0x38;
    FUN_1060fb5d4(&uStack_40);
    if (*(long *)(param_1 + 0x48) != 0) {
      (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

