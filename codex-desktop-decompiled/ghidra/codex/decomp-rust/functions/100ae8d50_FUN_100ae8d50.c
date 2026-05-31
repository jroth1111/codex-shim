
void FUN_100ae8d50(undefined8 *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long *plStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long **pplStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_3 == 4) {
    if ((int)*param_2 == 0x656c6966) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if ((int)*param_2 == 0x6f747561) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 7) {
    if ((int)*param_2 == 0x7279656b && *(int *)((long)param_2 + 3) == 0x676e6972) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
  }
  else if ((param_3 == 9) && (*param_2 == 0x6172656d65687065 && (char)param_2[1] == 'l')) {
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 2;
    return;
  }
  puStack_78 = &UNK_10b220708;
  uStack_70 = 4;
  pplStack_68 = &plStack_88;
  puStack_60 = &DAT_100c7b3a0;
  ppuStack_58 = &puStack_78;
  puStack_50 = &
               __ZN60__LT_serde_core__de__OneOf_u20_as_u20_core__fmt__Display_GT_3fmt17hd5744e9bc51436a2E
  ;
  plStack_88 = param_2;
  lStack_80 = param_3;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_48,s_unknown_variant______expected_108ac2989,&pplStack_68);
  if (lStack_38 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = _malloc(lStack_38);
    if (lVar2 == 0) {
      func_0x0001087c9084(1,lStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087e4560);
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

