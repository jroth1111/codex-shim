
void __ZN16codex_app_server18request_processors16thread_processor30thread_read_history_load_error17h5bb707090fe7cbf5E
               (undefined8 *param_1,long *param_2,char *param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined *puStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  cVar1 = *param_3;
  plStack_50 = param_2;
  if (cVar1 == '\0') {
    if (*(long *)(param_3 + 9) == param_2[1] && *(long *)(param_3 + 1) == *param_2) {
      puStack_48 = &
                   __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_a8,s_thread_O_is_not_materialized_yet_108adda88,&plStack_50);
      param_1[2] = uStack_a0;
      param_1[1] = uStack_a8;
LAB_101898fc0:
      param_1[3] = uStack_98;
      *param_1 = 0;
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      if ((*(ulong *)(param_3 + 0x18) < 0x20) ||
         (plVar2 = *(long **)(param_3 + 0x10),
         ((*plVar2 != 0x742064656c696166 || plVar2[1] != 0x766c6f736572206f) ||
         plVar2[2] != 0x756f6c6c6f722065) || plVar2[3] != 0x6020687461702074)) {
        uVar4 = *(undefined8 *)(param_3 + 8);
        param_1[2] = *(undefined8 *)(param_3 + 0x10);
        param_1[1] = uVar4;
        uStack_98 = *(undefined8 *)(param_3 + 0x18);
        goto LAB_101898fc0;
      }
      lVar3 = *(long *)(param_3 + 8);
      puStack_48 = &
                   __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_c0,s_thread_O_is_not_materialized_yet_108adda88,&plStack_50);
      param_1[2] = uStack_b8;
      param_1[1] = uStack_c0;
      param_1[3] = uStack_b0;
      *param_1 = 0;
      goto joined_r0x000101899048;
    }
    if (cVar1 == '\x03') {
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      param_1[1] = *(undefined8 *)(param_3 + 8);
      param_1[2] = uVar4;
      *param_1 = 1;
      return;
    }
  }
  lStack_88 = *(long *)(param_3 + 8);
  uStack_90 = *(undefined8 *)param_3;
  uStack_78 = *(undefined8 *)(param_3 + 0x18);
  plStack_80 = *(long **)(param_3 + 0x10);
  puStack_48 = &
               __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
  ;
  puStack_40 = &uStack_90;
  puStack_38 = &
               __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
  ;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&uStack_68,s__failed_to_load_thread_history_f_108addae2,&plStack_50);
  param_1[2] = uStack_60;
  param_1[1] = uStack_68;
  param_1[3] = uStack_58;
  *param_1 = 2;
  plVar2 = plStack_80;
  lVar3 = lStack_88;
  if ((byte)uStack_90 < 2) {
    if ((byte)uStack_90 == 0) {
      return;
    }
  }
  else if (((byte)uStack_90 != 2) && ((byte)uStack_90 == 3)) {
    return;
  }
joined_r0x000101899048:
  if (lVar3 != 0) {
    _free(plVar2);
  }
  return;
}

