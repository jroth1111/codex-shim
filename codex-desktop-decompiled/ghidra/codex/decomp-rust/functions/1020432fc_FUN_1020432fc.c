
ulong FUN_1020432fc(ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uStack_a0 = param_1 ^ 0x736f6d6570736575;
  uStack_98 = param_1 ^ 0x6c7967656e657261;
  uStack_90 = param_2 ^ 0x646f72616e646f6d;
  uStack_88 = param_2 ^ 0x7465646279746573;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_70 = 0;
  uVar5 = 0;
  uVar8 = 0;
  uStack_80 = param_1;
  uStack_78 = param_2;
  if (param_4 == 0) goto LAB_10204353c;
  lVar9 = param_4 - 1;
  if (lVar9 == 0) {
    uVar8 = 0;
    if (*param_3 != '/') {
      uVar5 = 0;
      goto LAB_10204353c;
    }
    uVar5 = 0;
    uVar6 = 1;
    goto LAB_102043538;
  }
  uVar6 = param_4 - 2;
  if (param_4 == 2) {
    uVar10 = 0;
    uVar8 = 0;
    uVar5 = 0;
    lVar9 = 1;
    if (*param_3 != '/') goto LAB_1020434b0;
LAB_102043468:
    cVar2 = param_3[lVar9];
    uVar4 = 0;
    if (cVar2 == '.') {
      uVar4 = (uint)(param_4 - lVar9 == 1);
    }
    if ((param_4 - lVar9 != 1) && (cVar2 == '.')) {
      uVar4 = (uint)((param_3 + lVar9)[1] == '/');
    }
    uVar5 = lVar9 + (ulong)uVar4;
  }
  else {
    uVar5 = 0;
    uVar8 = 0;
    uVar10 = 0;
    do {
      if (param_3[uVar10] == '/') {
        if (uVar5 <= uVar10 && uVar10 - uVar5 != 0) {
          uVar8 = uVar10 + (uVar8 - uVar5);
          uVar8 = uVar8 >> 2 | uVar8 << 0x3e;
          func_0x00010232f88c(&uStack_a0,param_3 + uVar5,uVar10 - uVar5);
        }
        uVar4 = 0;
        if (param_3[uVar10 + 1] == '.') {
          uVar4 = (uint)(uVar6 == uVar10);
        }
        uVar5 = (ulong)uVar4;
        if ((uVar6 != uVar10) && (param_3[uVar10 + 1] == '.')) {
          uVar5 = (ulong)(param_3[uVar10 + 2] == '/');
        }
        uVar5 = uVar10 + uVar5 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
    if (param_3[uVar10] == '/') {
      if (uVar5 <= param_4 - 3) {
        uVar8 = (uVar8 - uVar5) + uVar10;
        uVar8 = uVar8 >> 2 | uVar8 << 0x3e;
        func_0x00010232f88c(&uStack_a0,param_3 + uVar5,uVar10 - uVar5);
      }
      goto LAB_102043468;
    }
LAB_1020434b0:
    cVar2 = param_3[lVar9];
  }
  if (cVar2 != '/') goto LAB_10204353c;
  uVar6 = uVar10 + 2;
  if (uVar5 <= uVar10) {
    uVar8 = (lVar9 - uVar5) + uVar8;
    uVar8 = uVar8 >> 2 | uVar8 << 0x3e;
    func_0x00010232f88c(&uStack_a0,param_3 + uVar5);
  }
  pcVar1 = param_3 + uVar6;
  if (param_4 - uVar6 == 1) {
    bVar3 = *pcVar1 == '.';
LAB_1020434f8:
    uVar5 = (ulong)bVar3;
  }
  else if (param_4 == uVar6) {
    uVar5 = 0;
    uVar6 = param_4;
  }
  else {
    if (*pcVar1 == '.') {
      bVar3 = pcVar1[1] == '/';
      goto LAB_1020434f8;
    }
    uVar5 = 0;
  }
LAB_102043538:
  uVar5 = uVar6 + uVar5;
LAB_10204353c:
  if (uVar5 <= param_4 && param_4 - uVar5 != 0) {
    uVar8 = (param_4 - uVar5) + uVar8;
    uVar8 = uVar8 >> 2 | uVar8 << 0x3e;
    func_0x00010232f88c(&uStack_a0,param_3 + uVar5);
  }
  uStack_58 = uVar8;
  func_0x00010232f88c(&uStack_a0,&uStack_58,8);
  uStack_68 = uStack_68 | lStack_70 << 0x38;
  uStack_88 = uStack_68 ^ uStack_88;
  uStack_a0 = uStack_90 + uStack_a0;
  uVar8 = uStack_a0 ^ (uStack_90 >> 0x33 | uStack_90 << 0xd);
  uVar5 = uStack_88 + uStack_98 + uVar8;
  uVar6 = uStack_88 + uStack_98 ^ (uStack_88 >> 0x30 | uStack_88 << 0x10);
  uVar7 = uVar5 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
  uVar8 = uVar6 + (uStack_a0 >> 0x20 | uStack_a0 << 0x20);
  uVar10 = uVar8 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
  uVar8 = (uVar8 ^ uStack_68) + uVar7;
  uVar7 = uVar8 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar10 + ((uVar5 >> 0x20 | uVar5 << 0x20) ^ 0xff);
  uVar6 = uVar7 + uVar5;
  uVar5 = uVar5 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
  uVar7 = uVar6 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar8 = uVar5 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar10 = uVar7 + uVar8;
  uVar8 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar7 = uVar10 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar8 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar6 = uVar7 + uVar5;
  uVar5 = uVar5 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
  uVar7 = uVar6 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar8 = uVar5 + (uVar10 >> 0x20 | uVar10 << 0x20);
  uVar10 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar7 = uVar7 + uVar8 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar10 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar8 = uVar7 + uVar5;
  uVar5 = uVar5 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
  return (uVar5 >> 0x2b | uVar5 << 0x15) ^ (uVar7 >> 0x2f | uVar7 << 0x11) ^
         (uVar8 >> 0x20 | uVar8 << 0x20) ^ uVar8;
}

