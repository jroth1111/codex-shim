
void FUN_100e70dc4(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  bVar2 = *(byte *)(param_1 + 0x633);
  if (bVar2 < 6) {
    if (bVar2 == 3) {
      if (*(char *)(param_1 + 0x1304) != '\x03') {
        return;
      }
      FUN_100d53768(param_1 + 0x868);
      if (*(long *)(param_1 + 0x6b8) != 0) {
        _free(*(undefined8 *)(param_1 + 0x6c0));
      }
      lVar3 = *(ulong *)(param_1 + 0x7c8) + 0x7ffffffffffffffa;
      if (*(ulong *)(param_1 + 0x7c8) < 0x8000000000000006) {
        lVar3 = 6;
      }
      if (lVar3 == 6) {
        FUN_100e0fca4(param_1 + 0x7c8);
        lVar3 = *(long *)(param_1 + 0x6e8);
      }
      else {
        if ((lVar3 == 4) && (*(long *)(param_1 + 2000) != 0)) {
          _free(*(undefined8 *)(param_1 + 0x7d8));
        }
        lVar3 = *(long *)(param_1 + 0x6e8);
      }
      if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
        _free(*(undefined8 *)(param_1 + 0x6f0));
      }
      if ((*(long *)(param_1 + 0x700) != -0x8000000000000000) && (*(long *)(param_1 + 0x700) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x708));
      }
      if ((*(long *)(param_1 + 0x718) != -0x8000000000000000) && (*(long *)(param_1 + 0x718) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x720));
      }
      if ((*(long *)(param_1 + 0x730) != -0x8000000000000000) && (*(long *)(param_1 + 0x730) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x738));
      }
      if (*(long *)(param_1 + 0x6d0) != 0) {
        _free(*(undefined8 *)(param_1 + 0x6d8));
      }
      if ((*(long *)(param_1 + 0x748) != -0x8000000000000000) && (*(long *)(param_1 + 0x748) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x750));
      }
      lVar3 = *(long *)(param_1 + 0x7a8);
      if (-0x7ffffffffffffffe < lVar3) {
        lVar1 = *(long *)(param_1 + 0x7b0);
        lVar7 = *(long *)(param_1 + 0x7b8);
        if (lVar7 != 0) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (lVar3 != 0) {
          _free(lVar1);
        }
      }
      if (*(long *)(param_1 + 0x760) == -0x8000000000000000 || *(long *)(param_1 + 0x760) == 0) {
        lVar3 = *(long *)(param_1 + 0x778);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x768));
        lVar3 = *(long *)(param_1 + 0x778);
      }
      if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
        _free(*(undefined8 *)(param_1 + 0x780));
      }
      if ((*(long *)(param_1 + 0x790) != -0x8000000000000000) && (*(long *)(param_1 + 0x790) != 0))
      {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x798));
        return;
      }
      return;
    }
    if (bVar2 == 4) {
      FUN_100cab9f8(param_1 + 0x638);
      goto LAB_100e70fa0;
    }
    if (bVar2 != 5) {
      return;
    }
    if (*(char *)(param_1 + 0x6b0) == '\x03') {
      if (*(char *)(param_1 + 0x6a8) == '\x03') {
        puVar6 = *(undefined8 **)(param_1 + 0x698);
        puVar9 = *(undefined8 **)(param_1 + 0x6a0);
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(puVar6);
        }
LAB_100e70f78:
        if (puVar9[1] != 0) goto LAB_100e70f80;
      }
      else if (*(char *)(param_1 + 0x6a8) == '\0') {
        FUN_100d99140(param_1 + 0x660);
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 == 6) {
      if (*(char *)(param_1 + 0x750) == '\x03') {
        FUN_100d7b288(param_1 + 0x648);
      }
    }
    else {
      if (bVar2 != 7) {
        return;
      }
      if (*(char *)(param_1 + 0x6c0) == '\x03') {
        if (*(char *)(param_1 + 0x6b8) == '\x03') {
          puVar6 = *(undefined8 **)(param_1 + 0x6a8);
          puVar9 = *(undefined8 **)(param_1 + 0x6b0);
          if ((code *)*puVar9 != (code *)0x0) {
            (*(code *)*puVar9)(puVar6);
          }
          goto LAB_100e70f78;
        }
        if (*(char *)(param_1 + 0x6b8) == '\0') {
          FUN_100d99140(param_1 + 0x670);
        }
      }
    }
  }
  else if (bVar2 == 8) {
    if (*(char *)(param_1 + 0x770) == '\x03') {
      FUN_100e70bcc(param_1 + 0x658);
    }
  }
  else {
    if (bVar2 != 9) {
      return;
    }
    if (*(char *)(param_1 + 0xe88) == '\x03') {
      FUN_100d596c8(param_1 + 0x858);
    }
    func_0x000100e13d44(param_1 + 0x638);
    if ((*(long *)(param_1 + 0x458) == -0x8000000000000000) &&
       (uVar5 = *(ulong *)(param_1 + 0x460), (uVar5 & 3) == 1)) {
      puVar6 = (undefined8 *)(uVar5 - 1);
      uVar8 = *puVar6;
      puVar9 = *(undefined8 **)(uVar5 + 7);
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar8);
      }
      if (puVar9[1] != 0) {
        _free(uVar8);
      }
LAB_100e70f80:
      _free(puVar6);
    }
  }
  if (*(long *)(param_1 + 0x440) != 0) {
    _free(*(undefined8 *)(param_1 + 0x448));
  }
  FUN_100e31b20(param_1 + 0x268);
LAB_100e70fa0:
  *(undefined2 *)(param_1 + 0x631) = 0;
  return;
}

