
void thunk_FUN_1087e40f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_88;
  puStack_60 = &DAT_100c7b3a0;
  puStack_58 = &uStack_78;
  puStack_50 = &
               __ZN60__LT_serde_core__de__OneOf_u20_as_u20_core__fmt__Display_GT_3fmt17hd5744e9bc51436a2E
  ;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_48,s_unknown_field______expected_108ac290b,&puStack_68);
  if (lStack_38 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = _malloc(lStack_38);
    if (lVar2 == 0) {
      func_0x0001087c9084(1,lStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087e4170);
      (*pcVar1)();
    }
  }
  _memcpy(lVar2,uStack_40,lStack_38);
  param_1[3] = lStack_38;
  param_1[4] = lVar2;
  param_1[5] = lStack_38;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 8;
  *param_1 = 0;
  if (lStack_48 != 0) {
    _free(uStack_40);
  }
  return;
}

