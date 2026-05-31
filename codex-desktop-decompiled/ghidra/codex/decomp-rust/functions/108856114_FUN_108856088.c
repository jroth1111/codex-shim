
undefined8 FUN_108856088(undefined8 param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((param_2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_48);
  }
  else {
    uVar5 = param_2 >> 1;
    if (param_2 < 2) {
      lVar6 = 1;
    }
    else {
      lVar6 = _malloc(uVar5);
      if (lVar6 == 0) {
        plVar4 = (long *)func_0x0001087c9084(1,uVar5);
        lVar6 = plVar4[1];
        lVar1 = plVar4[2];
        if (lVar1 == 0) {
          lStack_90 = 1;
        }
        else {
          lStack_90 = _malloc(lVar1);
          if (lStack_90 == 0) {
            func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x108856154);
            (*pcVar2)();
          }
        }
        _memcpy(lStack_90,lVar6,lVar1);
        lStack_98 = lVar1;
        lStack_88 = lVar1;
        uVar3 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&lStack_98);
        if (*plVar4 != 0) {
          _free(lVar6);
        }
        return uVar3;
      }
    }
    _memcpy(lVar6,param_1,uVar5);
    uStack_48 = uVar5;
    lStack_40 = lVar6;
    uStack_38 = uVar5;
  }
  uVar3 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
  return uVar3;
}

