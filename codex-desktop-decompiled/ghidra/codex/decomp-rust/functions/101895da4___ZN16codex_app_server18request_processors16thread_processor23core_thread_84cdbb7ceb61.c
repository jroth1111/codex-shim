
void __ZN16codex_app_server18request_processors16thread_processor23core_thread_write_error17h06f7f68395fcb947E
               (ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 ***param_4)

{
  undefined8 **ppuVar1;
  ulong uVar2;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 **ppuStack_40;
  code *pcStack_38;
  
  uVar2 = (ulong)*param_4 ^ 0x8000000000000000;
  if (-1 < (long)*param_4) {
    uVar2 = 10;
  }
  uStack_128 = param_2;
  uStack_120 = param_3;
  if (uVar2 == 3) {
    puStack_48 = param_4[2];
    puStack_50 = param_4[1];
    ppuStack_100 = &puStack_50;
    puStack_f8 = (undefined8 *)
                 &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_118,s_thread_not_found__108add664,&ppuStack_100);
    param_1[0xc] = 0xffffffffffff80a8;
    param_1[1] = uStack_110;
    *param_1 = uStack_118;
    param_1[2] = uStack_108;
    param_1[3] = 0x8000000000000005;
LAB_101895e58:
    FUN_10195079c(param_4);
  }
  else {
    if (uVar2 == 0xb) {
      ppuVar1 = param_4[1];
      param_1[1] = (ulong)param_4[2];
      *param_1 = (ulong)ppuVar1;
      ppuVar1 = param_4[3];
      uVar2 = 0xffffffffffff80a8;
    }
    else {
      if (uVar2 != 0x19) {
        puStack_98 = param_4[0xd];
        puStack_a0 = param_4[0xc];
        puStack_88 = param_4[0xf];
        puStack_90 = param_4[0xe];
        puStack_78 = param_4[0x11];
        puStack_80 = param_4[0x10];
        puStack_70 = param_4[0x12];
        puStack_d8 = param_4[5];
        puStack_e0 = param_4[4];
        puStack_c8 = param_4[7];
        puStack_d0 = param_4[6];
        puStack_b8 = param_4[9];
        puStack_c0 = param_4[8];
        puStack_a8 = param_4[0xb];
        puStack_b0 = param_4[10];
        puStack_f8 = param_4[1];
        ppuStack_100 = *param_4;
        puStack_e8 = param_4[3];
        puStack_f0 = param_4[2];
        puStack_50 = &uStack_128;
        puStack_48 = (undefined8 *)&DAT_10192d9a4;
        ppuStack_40 = &ppuStack_100;
        pcStack_38 = 
        __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_68,s_failed_to___108add9e6,&puStack_50);
        param_1[0xc] = 0xffffffffffff80a5;
        param_1[1] = uStack_60;
        *param_1 = uStack_68;
        param_1[2] = uStack_58;
        param_1[3] = 0x8000000000000005;
        param_4 = &ppuStack_100;
        goto LAB_101895e58;
      }
      ppuVar1 = param_4[1];
      param_1[1] = (ulong)param_4[2];
      *param_1 = (ulong)ppuVar1;
      ppuVar1 = param_4[3];
      uVar2 = 0xffffffffffff80a7;
    }
    param_1[0xc] = uVar2;
    param_1[2] = (ulong)ppuVar1;
    param_1[3] = 0x8000000000000005;
  }
  return;
}

