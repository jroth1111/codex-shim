
void __ZN16codex_app_server18request_processors16thread_processor44conversation_summary_rollout_path_read_error17h0485ee67c9ca9642E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &uStack_90;
  puStack_30 = (undefined1 *)&uStack_90;
  if (*param_4 == '\x01') {
    uVar1 = *(undefined8 *)(param_4 + 8);
    param_1[1] = *(undefined8 *)(param_4 + 0x10);
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    param_1[0xc] = 0xffffffffffff80a8;
    param_1[2] = uVar1;
    param_1[3] = 0x8000000000000005;
  }
  else if (*param_4 == '\x03') {
    uStack_90 = *(undefined8 *)(param_4 + 8);
    lStack_88 = *(long *)(param_4 + 0x10);
    puStack_38 = &DAT_10192d9a4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s_is_not_supported_yet_108addcc5,&puStack_40);
    param_1[0xc] = 0xffffffffffff80a7;
    param_1[3] = 0x8000000000000005;
  }
  else {
    lStack_88 = *(long *)(param_4 + 8);
    uStack_90 = *(undefined8 *)param_4;
    uStack_78 = *(undefined8 *)(param_4 + 0x18);
    uStack_80 = *(undefined8 *)(param_4 + 0x10);
    puStack_40 = &uStack_50;
    puStack_38 = &
                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    puStack_28 = &
                 __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
    ;
    uStack_50 = param_2;
    uStack_48 = param_3;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_68,s__failed_to_load_conversation_sum_108addd93,&puStack_40);
    param_1[0xc] = 0xffffffffffff80a5;
    param_1[1] = uStack_60;
    *param_1 = uStack_68;
    param_1[2] = uStack_58;
    param_1[3] = 0x8000000000000005;
    if ((byte)uStack_90 < 2) {
      if ((byte)uStack_90 == 0) {
        return;
      }
    }
    else if (((byte)uStack_90 != 2) && ((byte)uStack_90 == 3)) {
      return;
    }
    if (lStack_88 != 0) {
      _free(uStack_80);
    }
  }
  return;
}

