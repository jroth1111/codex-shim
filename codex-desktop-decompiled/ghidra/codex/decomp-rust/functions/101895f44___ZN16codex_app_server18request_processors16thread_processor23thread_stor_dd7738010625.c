
void __ZN16codex_app_server18request_processors16thread_processor23thread_store_list_error17h136771f9c1f1c1e9E
               (undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puStack_30 = (undefined1 *)&ppuStack_70;
  if (*param_2 == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    param_1[0xc] = 0xffffffffffff80a8;
    param_1[2] = uVar1;
    param_1[3] = 0x8000000000000005;
  }
  else if (*param_2 == '\x03') {
    puStack_30 = *(undefined1 **)(param_2 + 8);
    puStack_28 = *(undefined **)(param_2 + 0x10);
    ppuStack_70 = &puStack_30;
    puStack_68 = &DAT_10192d9a4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s_is_not_supported_yet_108addcc5,&ppuStack_70);
    param_1[0xc] = 0xffffffffffff80a7;
    param_1[3] = 0x8000000000000005;
  }
  else {
    puStack_68 = *(undefined **)(param_2 + 8);
    ppuStack_70 = *(undefined1 ***)param_2;
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_60 = *(undefined8 *)(param_2 + 0x10);
    puStack_28 = &
                 __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_48,s_failed_to_list_threads__108add9f7,&puStack_30);
    param_1[0xc] = 0xffffffffffff80a5;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
    param_1[3] = 0x8000000000000005;
    if ((byte)ppuStack_70 < 2) {
      if ((byte)ppuStack_70 == 0) {
        return;
      }
    }
    else if (((byte)ppuStack_70 != 2) && ((byte)ppuStack_70 == 3)) {
      return;
    }
    if (puStack_68 != (undefined *)0x0) {
      _free(uStack_60);
    }
  }
  return;
}

