
void FUN_100ca97fc(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_100df8370(param_1);
    if (-0x7fffffffffffffff < *(long *)(param_1 + 0xe8) && *(long *)(param_1 + 0xe8) != 0) {
      _free(*(undefined8 *)(param_1 + 0xf0));
    }
    param_1 = param_1 + 0x118;
  }
  return;
}

