
void FUN_100de3864(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
LAB_100de3928:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x28));
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(long *)(param_1 + 8) != 0) goto LAB_100de3928;
  }
  else if (cVar1 == '\x03') {
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    if ((*(ulong *)(param_1 + 0x20) & 0x7fffffffffffffff) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      goto LAB_100de3928;
    }
  }
  return;
}

