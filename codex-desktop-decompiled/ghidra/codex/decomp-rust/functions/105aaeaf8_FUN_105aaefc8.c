
void FUN_105aaefc8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000105aaddc8();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  FUN_105aaf55c(uVar1,*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x60) != 0) {
    _free(uVar1);
  }
  if ((*(byte *)(param_1 + 0x78) != 0xb) &&
     (9 < *(byte *)(param_1 + 0x78) && *(long *)(param_1 + 0x88) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
              (param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(param_1 + 0xb0) + 0x20))
              (param_1 + 200,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    (**(code **)(*(long *)(param_1 + 0xd0) + 0x20))
              (param_1 + 0xe8,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    (**(code **)(*(long *)(param_1 + 0xf0) + 0x20))
              (param_1 + 0x108,*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100));
  }
  if (5 < *(ulong *)(param_1 + 0x120)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x110));
    return;
  }
  return;
}

