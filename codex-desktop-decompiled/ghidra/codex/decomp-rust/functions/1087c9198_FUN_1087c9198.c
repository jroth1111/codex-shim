
/* WARNING: Possible PIC construction at 0x0001087c9248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087c924c) */
/* WARNING: Removing unreachable block (ram,0x0001087c9270) */
/* WARNING: Removing unreachable block (ram,0x0001087c9258) */

void FUN_1087c9198(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  long lStack_c8;
  ulong auStack_78 [4];
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar6 = *param_1 * 2;
    unaff_x20 = param_3 + param_2;
    if (param_3 + param_2 <= uVar6) {
      unaff_x20 = uVar6;
    }
    if (unaff_x20 < 9) {
      unaff_x20 = 8;
    }
    func_0x0001087c9118(aiStack_38,*param_1,param_1[1],unaff_x20);
    unaff_x19 = param_1;
    if (aiStack_38[0] != 1) {
      *param_1 = unaff_x20;
      param_1[1] = uStack_30;
      return;
    }
  }
  plVar5 = (long *)func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x1087c9210;
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  uVar6 = lVar1 * 2;
  if (uVar6 < 5) {
    uVar6 = 4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  lVar7 = 8;
  uVar8 = 0;
  if ((SUB168(ZEXT816(0x10) * auVar3,8) == 0) && (uVar6 = uVar6 * 0x10, uVar6 < 0x7ffffffffffffff9))
  {
    auStack_78[3] = unaff_x20;
    puStack_58 = unaff_x19;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lVar1 == 0) {
      if (uVar6 != 0) {
        if (uVar6 < 8) {
          lStack_c8 = 0;
          _posix_memalign(&lStack_c8,8,uVar6);
        }
        else {
          _malloc(uVar6);
        }
      }
    }
    else if (uVar6 < 8) {
      lStack_c8 = 0;
      iVar4 = _posix_memalign(&lStack_c8,8,uVar6);
      if (iVar4 == 0 && lStack_c8 != 0) {
        _memcpy(lStack_c8,lVar2,lVar1 * 0x10);
        _free(lVar2);
      }
    }
    else {
      _realloc(lVar2,uVar6);
    }
    lVar7 = 0x10;
    uVar8 = uVar6;
  }
  *(ulong *)((long)auStack_78 + lVar7) = uVar8;
  return;
}

