
void FUN_100d93ec8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x38) != '\x03') {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar2);
    }
  }
  else {
    if (cVar1 == '\x04') {
      cVar1 = *(char *)(param_1 + 0x52);
      if (cVar1 == '\x03') {
        if ((((*(char *)(param_1 + 0xd8) == '\x03') && (*(char *)(param_1 + 0xd0) == '\x03')) &&
            (*(char *)(param_1 + 200) == '\x03')) && (*(char *)(param_1 + 0x80) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x88);
          if (*(long *)(param_1 + 0x90) != 0) {
            (**(code **)(*(long *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
          }
        }
      }
      else {
        if (cVar1 == '\x04') {
          FUN_100de8a5c(param_1 + 0x68);
          uVar2 = *(undefined8 *)(param_1 + 0xd8);
          puVar4 = *(undefined8 **)(param_1 + 0xe0);
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)(uVar2);
          }
        }
        else {
          if (cVar1 != '\x05') {
            return;
          }
          uVar2 = *(undefined8 *)(param_1 + 0x58);
          puVar4 = *(undefined8 **)(param_1 + 0x60);
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)(uVar2);
          }
        }
        if (puVar4[1] != 0) {
          _free(uVar2);
        }
        *(undefined1 *)(param_1 + 0x51) = 0;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar2);
      }
      if (puVar4[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x38) != '\x03') {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar2);
    }
  }
  if (puVar4[1] == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

