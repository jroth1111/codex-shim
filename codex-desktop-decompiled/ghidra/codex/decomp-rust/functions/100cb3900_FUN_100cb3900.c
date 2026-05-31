
void FUN_100cb3900(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0xea) == '\x03') {
    if (*(char *)(param_1 + 0x78) == '\x03') {
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      puVar2 = *(undefined8 **)(param_1 + 0x70);
      pcVar3 = (code *)*puVar2;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar1);
      }
      if (puVar2[1] != 0) {
        _free(uVar1);
      }
    }
    FUN_100def764(param_1);
    *(undefined2 *)(param_1 + 0xe8) = 0;
    if (*(char *)(param_1 + 0xc0) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000100cb3994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0xa0) + 0x20))
                (param_1 + 0xb8,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
      return;
    }
  }
  return;
}

