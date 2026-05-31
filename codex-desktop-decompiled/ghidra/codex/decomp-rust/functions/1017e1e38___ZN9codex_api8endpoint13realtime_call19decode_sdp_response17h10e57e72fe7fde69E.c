
void __ZN9codex_api8endpoint13realtime_call19decode_sdp_response17h10e57e72fe7fde69E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    lVar1 = _malloc(param_3);
    if (lVar1 != 0) goto LAB_1017e1df0;
    func_0x0001087c9084(1,param_3);
  }
  lVar1 = 1;
LAB_1017e1df0:
  _memcpy(lVar1,param_2,param_3);
  func_0x0001055bf348(&lStack_70,lVar1,param_3);
  if (((uint)lStack_70 & 1) == 0) {
    param_1[2] = lVar1;
    param_1[3] = param_3;
    *param_1 = 0x12;
    param_1[1] = param_3;
  }
  else {
    uStack_50 = lStack_60;
    uStack_58 = lStack_68;
    plStack_90 = &lStack_70;
    puStack_88 = &
                 __ZN67__LT_alloc__string__FromUtf8Error_u20_as_u20_core__fmt__Display_GT_3fmt17hc458c9bb5af317c3E
    ;
    lStack_70 = param_3;
    lStack_68 = lVar1;
    lStack_60 = param_3;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&puStack_48,s__failed_to_decode_realtime_call_S_108adcd6b,&plStack_90);
    puStack_88 = (undefined *)uStack_40;
    plStack_90 = puStack_48;
    uStack_80 = uStack_38;
    if (lStack_70 != 0) {
      _free(lStack_68);
    }
    *param_1 = 9;
    param_1[2] = puStack_88;
    param_1[1] = plStack_90;
    param_1[3] = uStack_80;
  }
  return;
}

