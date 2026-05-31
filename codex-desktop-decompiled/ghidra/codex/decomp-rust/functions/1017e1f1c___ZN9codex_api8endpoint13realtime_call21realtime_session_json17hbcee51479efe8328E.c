
void __ZN9codex_api8endpoint13realtime_call21realtime_session_json17hbcee51479efe8328E
               (undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZN9codex_api8endpoint18realtime_websocket14methods_common27session_update_session_json17hd03f6e248182ceb4E
            (&lStack_a8);
  if (lStack_a8 == -0x7ffffffffffffffb) {
    uStack_40 = uStack_a0;
    puStack_60 = &uStack_40;
    pcStack_58 = 
    __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&puStack_38,s__failed_to_encode_realtime_call_s_108adcd9b,&puStack_60);
    uVar1 = uStack_40;
    pcStack_58 = (code *)uStack_30;
    puStack_60 = puStack_38;
    uStack_50 = uStack_28;
    FUN_1017a4f34(uStack_40);
    _free(uVar1);
    *param_1 = 9;
    param_1[2] = pcStack_58;
    param_1[1] = puStack_60;
    param_1[3] = uStack_50;
  }
  else {
    param_1[4] = uStack_90;
    param_1[3] = uStack_98;
    param_1[6] = uStack_80;
    param_1[5] = uStack_88;
    param_1[8] = uStack_70;
    param_1[7] = uStack_78;
    param_1[9] = uStack_68;
    param_1[2] = uStack_a0;
    param_1[1] = lStack_a8;
    *param_1 = 0x12;
  }
  return;
}

