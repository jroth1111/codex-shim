
void FUN_10894d740(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_58 = &uStack_68;
  puStack_50 = &DAT_103925cd0;
  uStack_68 = param_2;
  uStack_60 = param_3;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_48,s_duplicate_field_____108ac2973,&puStack_58);
  if (lStack_38 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = _malloc(lStack_38);
    if (lVar2 == 0) {
      func_0x0001087c9084(1,lStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10894d7a8);
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

