
void __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
               (ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *extraout_x8;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_58;
  
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  __ZN87__LT_core__str__lossy__Utf8Chunks_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c53a7c0d3887375E
            (&uStack_70,&uStack_a8);
  uVar1 = uStack_68;
  uVar7 = uStack_70;
  if (uStack_70 == 0) {
    param_1[1] = 1;
    param_1[2] = 0;
    *param_1 = 0x8000000000000000;
    return;
  }
  if (lStack_58 == 0) {
    param_1[1] = uStack_70;
    param_1[2] = uStack_68;
    *param_1 = 0x8000000000000000;
    return;
  }
  if (param_3 == 0) {
    uStack_90 = 1;
    if (uStack_68 != 0) goto LAB_100025a8c;
  }
  else {
    uVar3 = _malloc(param_3);
    if (uVar3 == 0) {
      uVar4 = FUN_107c03c64(1,param_3);
      if (uStack_98 != 0) {
        _free(uStack_90);
      }
      lVar5 = __Unwind_Resume(uVar4);
      uVar4 = *(undefined8 *)(lVar5 + 8);
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        lVar6 = 1;
      }
      else {
        lVar6 = _malloc(lVar5);
        if (lVar6 == 0) {
          lVar5 = FUN_107c03c64(1,lVar5);
          uVar7 = *(ulong *)(lVar5 + 0x18);
          uVar1 = *(ulong *)(lVar5 + 0x20);
          if (uVar7 <= uVar1) {
            lVar5 = *(long *)(lVar5 + 0x10);
            uVar3 = *(ulong *)(lVar5 + 0x10);
            if (uVar1 <= uVar3) {
              *(ulong *)(lVar5 + 0x10) = uVar7;
              if (uVar1 == uVar7) {
                if (uVar3 == uVar1) {
                  return;
                }
              }
              else {
                if (uVar3 == uVar1) {
                  return;
                }
                _memmove(*(long *)(lVar5 + 8) + uVar7,*(long *)(lVar5 + 8) + uVar1,uVar3 - uVar1);
              }
              *(ulong *)(lVar5 + 0x10) = (uVar3 - uVar1) + uVar7;
            }
          }
          return;
        }
      }
      _memcpy(lVar6,uVar4,lVar5);
      *extraout_x8 = lVar5;
      extraout_x8[1] = lVar6;
      extraout_x8[2] = lVar5;
      return;
    }
    uStack_90 = uVar3;
    if (param_3 < uVar1) {
LAB_100025a8c:
      uStack_88 = 0;
      uStack_98 = param_3;
      thunk_FUN_1087c9198(&uStack_98,0,uVar1);
      goto LAB_10002593c;
    }
  }
  uStack_88 = 0;
  uStack_98 = param_3;
LAB_10002593c:
  uVar2 = uStack_88;
  uVar8 = uStack_90;
  uVar3 = uStack_98;
  _memcpy(uStack_90 + uStack_88,uVar7,uVar1);
  uStack_88 = uVar2 + uVar1;
  if (uVar3 - uStack_88 < 3) {
    thunk_FUN_1087c9198(&uStack_98,uStack_88,3);
    uVar8 = uStack_90;
  }
  *(undefined1 *)((undefined2 *)(uVar8 + uStack_88) + 1) = 0xbd;
  *(undefined2 *)(uVar8 + uStack_88) = 0xbfef;
  uStack_88 = uStack_88 + 3;
  uStack_80 = uStack_a8;
  uStack_78 = uStack_a0;
  while (uVar7 = uStack_88,
        __ZN87__LT_core__str__lossy__Utf8Chunks_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c53a7c0d3887375E
                  (&uStack_70,&uStack_80), lVar5 = lStack_58, uVar3 = uStack_68, uVar1 = uStack_70,
        uStack_70 != 0) {
    if (uStack_98 - uVar7 < uStack_68) {
      thunk_FUN_1087c9198(&uStack_98,uVar7,uStack_68);
      uVar7 = uStack_88;
    }
    uVar8 = uStack_90;
    _memcpy(uStack_90 + uVar7,uVar1,uVar3);
    uStack_88 = uVar7 + uVar3;
    if (lVar5 != 0) {
      if (uStack_98 - uStack_88 < 3) {
        thunk_FUN_1087c9198(&uStack_98,uStack_88,3);
        uVar8 = uStack_90;
      }
      *(undefined1 *)((undefined2 *)(uVar8 + uStack_88) + 1) = 0xbd;
      *(undefined2 *)(uVar8 + uStack_88) = 0xbfef;
      uStack_88 = uStack_88 + 3;
    }
  }
  param_1[1] = uStack_90;
  *param_1 = uStack_98;
  param_1[2] = uStack_88;
  return;
}

