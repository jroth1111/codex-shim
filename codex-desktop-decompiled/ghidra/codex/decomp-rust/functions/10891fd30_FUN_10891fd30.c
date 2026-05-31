
void FUN_10891fd30(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_48;
  
  uVar6 = (param_5 + param_6) - 1 & -param_5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar4 = 1;
  lVar5 = 8;
  uVar7 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (uVar6 = uVar6 * param_4,
     0x8000000000000000 - param_5 <= uVar6 && uVar6 - (0x8000000000000000 - param_5) != 0))
  goto LAB_10891fe58;
  if (param_2 == 0) {
    uStack_48 = param_5;
    if (uVar6 != 0) {
      if (uVar6 < param_5) {
        uStack_48 = 0;
        iVar3 = _posix_memalign(&uStack_48,8,uVar6);
        if (iVar3 != 0) goto LAB_10891fe4c;
      }
      else {
        uStack_48 = _malloc(uVar6);
      }
      goto joined_r0x00010891fe14;
    }
LAB_10891fe34:
    uVar4 = 0;
    param_1[1] = uStack_48;
  }
  else {
    if (uVar6 < param_5) {
      uStack_48 = 0;
      iVar3 = _posix_memalign(&uStack_48,8,uVar6);
      uVar7 = uStack_48;
      if (iVar3 == 0 && uStack_48 != 0) {
        _memcpy(uStack_48,param_3,param_6 * param_2);
        _free(param_3);
        uStack_48 = uVar7;
        goto LAB_10891fe34;
      }
    }
    else {
      uStack_48 = _realloc(param_3,uVar6);
joined_r0x00010891fe14:
      if (uStack_48 != 0) goto LAB_10891fe34;
    }
LAB_10891fe4c:
    param_1[1] = param_5;
    uVar4 = 1;
  }
  lVar5 = 0x10;
  uVar7 = uVar6;
LAB_10891fe58:
  *(ulong *)((long)param_1 + lVar5) = uVar7;
  *param_1 = uVar4;
  return;
}

