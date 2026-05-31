
void FUN_1039d189c(char *param_1,ulong param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  uVar5 = 0;
  uVar6 = 0;
  if (param_2 == 0) goto LAB_1039d1ab0;
  lVar7 = param_2 - 1;
  if (lVar7 == 0) {
    uVar6 = 0;
    if (*param_1 != '/') {
      uVar5 = 0;
      goto LAB_1039d1ab0;
    }
    uVar5 = 0;
    uVar9 = 1;
    goto LAB_1039d1aac;
  }
  uVar9 = param_2 - 2;
  if (param_2 == 2) {
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    lVar7 = 1;
    if (*param_1 != '/') goto LAB_1039d1a24;
LAB_1039d19dc:
    cVar2 = param_1[lVar7];
    uVar4 = 0;
    if (cVar2 == '.') {
      uVar4 = (uint)(param_2 - lVar7 == 1);
    }
    if ((param_2 - lVar7 != 1) && (cVar2 == '.')) {
      uVar4 = (uint)((param_1 + lVar7)[1] == '/');
    }
    uVar5 = lVar7 + (ulong)uVar4;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    do {
      if (param_1[uVar8] == '/') {
        if (uVar5 <= uVar8 && uVar8 - uVar5 != 0) {
          uVar6 = uVar8 + (uVar6 - uVar5);
          uVar6 = uVar6 >> 2 | uVar6 << 0x3e;
          func_0x0001039d40ec(param_3,param_1 + uVar5,uVar8 - uVar5);
        }
        uVar4 = 0;
        if (param_1[uVar8 + 1] == '.') {
          uVar4 = (uint)(uVar9 == uVar8);
        }
        uVar5 = (ulong)uVar4;
        if ((uVar9 != uVar8) && (param_1[uVar8 + 1] == '.')) {
          uVar5 = (ulong)(param_1[uVar8 + 2] == '/');
        }
        uVar5 = uVar8 + uVar5 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
    if (param_1[uVar8] == '/') {
      if (uVar5 <= param_2 - 3) {
        uVar6 = (uVar6 - uVar5) + uVar8;
        uVar6 = uVar6 >> 2 | uVar6 << 0x3e;
        func_0x0001039d40ec(param_3,param_1 + uVar5,uVar8 - uVar5);
      }
      goto LAB_1039d19dc;
    }
LAB_1039d1a24:
    cVar2 = param_1[lVar7];
  }
  if (cVar2 != '/') goto LAB_1039d1ab0;
  uVar9 = uVar8 + 2;
  if (uVar5 <= uVar8) {
    uVar6 = (lVar7 - uVar5) + uVar6;
    uVar6 = uVar6 >> 2 | uVar6 << 0x3e;
    func_0x0001039d40ec(param_3,param_1 + uVar5);
  }
  pcVar1 = param_1 + uVar9;
  if (param_2 - uVar9 == 1) {
    bVar3 = *pcVar1 == '.';
LAB_1039d1a6c:
    uVar5 = (ulong)bVar3;
  }
  else if (param_2 == uVar9) {
    uVar5 = 0;
    uVar9 = param_2;
  }
  else {
    if (*pcVar1 == '.') {
      bVar3 = pcVar1[1] == '/';
      goto LAB_1039d1a6c;
    }
    uVar5 = 0;
  }
LAB_1039d1aac:
  uVar5 = uVar9 + uVar5;
LAB_1039d1ab0:
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar6 = (param_2 - uVar5) + uVar6;
    uVar6 = uVar6 >> 2 | uVar6 << 0x3e;
    func_0x0001039d40ec(param_3,param_1 + uVar5);
  }
  uStack_58 = uVar6;
  func_0x0001039d40ec(param_3,&uStack_58,8);
  return;
}

