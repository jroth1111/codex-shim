
void FUN_103379f64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    lVar3 = 0;
    do {
      if (-1 < *(char *)(param_2 + lVar3)) {
        lVar1 = param_2 + lVar3 * -0x30;
        if (*(long *)(lVar1 + -0x30) != 0) {
          _free(*(undefined8 *)(lVar1 + -0x28));
        }
        lVar2 = *(long *)(lVar1 + -0x10);
        lVar4 = *(long *)(lVar1 + -8);
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)(lVar2 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        if (*(long *)(lVar1 + -0x18) != 0) {
          _free(lVar2);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_1);
  }
  return;
}

