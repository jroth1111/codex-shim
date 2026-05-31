
void __ZN16codex_app_server18request_processors16thread_processor30thread_store_resume_read_error17h3ea53e0a9d0a26ccE
               (undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    puStack_28 = *(undefined **)(param_2 + 9);
    ppppuStack_30 = *(undefined8 *****)(param_2 + 1);
    ppppuStack_70 = &ppppuStack_30;
    puStack_68 = &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_88,s_no_rollout_found_for_thread_id_108add72b,&ppppuStack_70);
    param_1[0xc] = 0xffffffffffff80a8;
    param_1[1] = uStack_80;
    *param_1 = uStack_88;
    param_1[2] = uStack_78;
    param_1[3] = 0x8000000000000005;
  }
  else if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[0xc] = 0xffffffffffff80a8;
    param_1[2] = uVar2;
    param_1[3] = 0x8000000000000005;
  }
  else if (cVar1 == '\x03') {
    ppppuStack_30 = *(undefined8 *****)(param_2 + 8);
    puStack_28 = *(undefined **)(param_2 + 0x10);
    ppppuStack_70 = &ppppuStack_30;
    puStack_68 = &DAT_10192d9a4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s_is_not_supported_yet_108addcc5,&ppppuStack_70);
    param_1[0xc] = 0xffffffffffff80a7;
    param_1[3] = 0x8000000000000005;
  }
  else {
    puStack_68 = *(undefined **)(param_2 + 8);
    ppppuStack_70 = *(undefined8 *****)param_2;
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_60 = *(undefined8 *)(param_2 + 0x10);
    ppppuStack_30 = &ppppuStack_70;
    puStack_28 = &
                 __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_48,s_failed_to_read_thread__108add74d,&ppppuStack_30);
    param_1[0xc] = 0xffffffffffff80a5;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
    param_1[3] = 0x8000000000000005;
    if ((byte)ppppuStack_70 < 2) {
      if ((byte)ppppuStack_70 == 0) {
        return;
      }
    }
    else if (((byte)ppppuStack_70 != 2) && ((byte)ppppuStack_70 == 3)) {
      return;
    }
    if (puStack_68 != (undefined *)0x0) {
      _free(uStack_60);
    }
  }
  return;
}

