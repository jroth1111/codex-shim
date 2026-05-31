
void __ZN16codex_app_server18request_processors16thread_processor26thread_store_archive_error17hc2330e62bdfebbb5E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &uStack_90;
  if (*param_4 == '\x01') {
    uVar1 = *(undefined8 *)(param_4 + 8);
    param_1[1] = *(undefined8 *)(param_4 + 0x10);
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    param_1[0xc] = 0xffffffffffff80a8;
    param_1[2] = uVar1;
    param_1[3] = 0x8000000000000005;
  }
  else {
    uStack_90 = param_2;
    uStack_88 = param_3;
    if (*param_4 == '\x03') {
      uStack_80 = *(undefined8 *)(param_4 + 8);
      lStack_78 = *(long *)(param_4 + 0x10);
      puStack_40 = &uStack_80;
      puStack_38 = &DAT_10192d9a4;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (param_1,s_is_not_supported_yet_108addcc5,&puStack_40);
      param_1[0xc] = 0xffffffffffff80a7;
      param_1[3] = 0x8000000000000005;
    }
    else {
      lStack_78 = *(long *)(param_4 + 8);
      uStack_80 = *(undefined8 *)param_4;
      uStack_68 = *(undefined8 *)(param_4 + 0x18);
      uStack_70 = *(undefined8 *)(param_4 + 0x10);
      puStack_38 = &DAT_10192d9a4;
      puStack_30 = &uStack_80;
      puStack_28 = &
                   __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_58,s_failed_to_thread__108adda51,&puStack_40);
      param_1[0xc] = 0xffffffffffff80a5;
      param_1[1] = uStack_50;
      *param_1 = uStack_58;
      param_1[2] = uStack_48;
      param_1[3] = 0x8000000000000005;
      if ((byte)uStack_80 < 2) {
        if ((byte)uStack_80 == 0) {
          return;
        }
      }
      else if (((byte)uStack_80 != 2) && ((byte)uStack_80 == 3)) {
        return;
      }
      if (lStack_78 != 0) {
        _free(uStack_70);
      }
    }
  }
  return;
}

