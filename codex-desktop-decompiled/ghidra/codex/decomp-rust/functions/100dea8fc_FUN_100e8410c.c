
void FUN_100e8410c(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(long *)(param_1 + 8) == 1) {
        if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
      else if (*(long *)(param_1 + 8) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        param_1 = param_1 + 0x28;
        goto LAB_100e84184;
      }
    }
    else if (bVar1 == 1) {
      FUN_100def764(param_1 + 8);
      goto SUB_100dea8fc;
    }
  }
  else {
    if (bVar1 == 3) {
      FUN_100def764(param_1 + 8);
SUB_100dea8fc:
      if ((param_1[0x68] != 0xb) && (9 < param_1[0x68] && *(long *)(param_1 + 0x78) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x70));
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        (**(code **)(*(long *)(param_1 + 0x80) + 0x20))
                  (param_1 + 0x98,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        (**(code **)(*(long *)(param_1 + 0xa0) + 0x20))
                  (param_1 + 0xb8,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))
                  (param_1 + 0xd8,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
      }
      if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100dea994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
                  (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
        return;
      }
      return;
    }
    if (bVar1 == 6) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      param_1 = param_1 + 0x20;
LAB_100e84184:
                    /* WARNING: Could not recover jumptable at 0x000100e8418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar3);
      return;
    }
  }
  return;
}

