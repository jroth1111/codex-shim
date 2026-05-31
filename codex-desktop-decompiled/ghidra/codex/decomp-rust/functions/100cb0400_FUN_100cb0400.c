
void FUN_100cb0400(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x000100dfdd9c(param_1);
    if (-0x7fffffffffffffff < *(long *)(param_1 + 0xe0) && *(long *)(param_1 + 0xe0) != 0) {
      _free(*(undefined8 *)(param_1 + 0xe8));
    }
    param_1 = param_1 + 0x110;
  }
  return;
}

