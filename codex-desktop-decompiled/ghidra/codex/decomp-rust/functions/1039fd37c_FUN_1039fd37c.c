
void FUN_1039fd37c(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(long *)(param_1 + 0x20) != -0x8000000000000000 && *(long *)(param_1 + 0x20) != 0) {
      _free(*(undefined8 *)(param_1 + 0x28));
    }
    func_0x0001039fd918(param_1 + 8);
    if (*(long *)(param_1 + 0x38) != -0x8000000000000000 && *(long *)(param_1 + 0x38) != 0) {
      _free(*(undefined8 *)(param_1 + 0x40));
    }
    param_1 = param_1 + 0x50;
  }
  return;
}

