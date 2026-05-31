
void FUN_100cbccb8(long *param_1)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  cVar2 = (char)param_1[0x4f2];
  if (cVar2 == '\0') {
    if (*param_1 == 0) {
      return;
    }
    lVar7 = 8;
    goto LAB_100cbce9c;
  }
  if (cVar2 == '\x03') {
    lVar7 = param_1[0x500];
    puVar8 = (undefined8 *)param_1[0x501];
    pcVar3 = (code *)*puVar8;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(lVar7);
    }
    if (puVar8[1] != 0) {
      _free(lVar7);
    }
    if ((param_1[0x4f9] != -0x8000000000000000) && (param_1[0x4f9] != 0)) {
      _free(param_1[0x4fa]);
    }
    lVar7 = param_1[0x4fc];
    if (lVar7 != -0x8000000000000000) {
      lVar6 = param_1[0x4fd];
      lVar1 = lVar6;
      for (lVar9 = param_1[0x4fe]; lVar9 != 0; lVar9 = lVar9 + -1) {
        FUN_100e0f5d0(lVar1);
        lVar1 = lVar1 + 0x1f8;
      }
      if (lVar7 != 0) {
        _free(lVar6);
      }
    }
  }
  else {
    if (cVar2 != '\x04') {
      return;
    }
    lVar7 = param_1[0x50c];
    puVar8 = (undefined8 *)param_1[0x50d];
    pcVar3 = (code *)*puVar8;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(lVar7);
    }
    if (puVar8[1] != 0) {
      _free(lVar7);
    }
    FUN_100e68ba8(param_1 + 0x4fd);
    uVar4 = param_1[0x4f7];
    if (uVar4 != 0x8000000000000006) {
      uVar5 = uVar4 ^ 0x8000000000000000;
      if (-1 < (long)uVar4) {
        uVar5 = 1;
      }
      if (uVar5 == 1) {
        if (uVar4 != 0) {
          _free(param_1[0x4f8]);
        }
        if (param_1[0x4fa] != 0) {
          lVar7 = 0x20;
          goto LAB_100cbce1c;
        }
      }
      else if (((uVar5 == 3) || (uVar5 == 4)) && (param_1[0x4f8] != 0)) {
        lVar7 = 0x10;
LAB_100cbce1c:
        _free(*(undefined8 *)((long)(param_1 + 0x4f7) + lVar7));
      }
    }
    FUN_100e8831c(param_1 + 0x507);
    *(undefined1 *)((long)param_1 + 0x2791) = 0;
    if (param_1[0x50e] != 0) {
      _free(param_1[0x50f]);
    }
    if ((param_1[0x511] != -0x8000000000000000) && (param_1[0x511] != 0)) {
      _free(param_1[0x512]);
    }
    *(undefined1 *)((long)param_1 + 0x2792) = 0;
    if (param_1[0x4f4] != 0) {
      _free(param_1[0x4f5]);
    }
    FUN_100e0f5d0(param_1 + 0x4b3);
  }
  FUN_100de93d0(param_1 + 10);
  *(undefined2 *)((long)param_1 + 0x2793) = 0;
  if (param_1[6] == 0) {
    return;
  }
  lVar7 = 0x38;
LAB_100cbce9c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)param_1 + lVar7));
  return;
}

