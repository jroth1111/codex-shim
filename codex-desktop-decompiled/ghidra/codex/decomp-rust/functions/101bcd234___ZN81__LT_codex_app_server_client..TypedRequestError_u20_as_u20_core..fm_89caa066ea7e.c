
undefined8
__ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
          (ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong **ppuStack_70;
  undefined *puStack_68;
  ulong **ppuStack_60;
  undefined *puStack_58;
  ulong *puStack_50;
  undefined *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  uVar4 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    puStack_58 = &DAT_101bbc918;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pcVar3 = s_transport_error__108ade5ee;
  }
  else {
    if (uVar4 == 1) {
      ppuStack_60 = (ulong **)(param_1 + 3);
      puStack_50 = param_1 + 0xf;
      ppuStack_70 = &puStack_40;
      puStack_68 = &DAT_101bbc888;
      puStack_58 = &DAT_101bcb08c;
      puStack_48 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_isize_GT_3fmt17h6f8f019831ac49f2E
      ;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puStack_40 = param_1;
      uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                        (uVar1,uVar2,s_failed___code___108ade604,&ppuStack_70);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      puStack_38 = param_1 + 6;
      if (*puStack_38 != 0x8000000000000005) {
        ppuStack_70 = &puStack_38;
        puStack_68 = &DAT_101bbc8ac;
        uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                          (uVar1,uVar2,s___data__108ade61c,&ppuStack_70);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      return 0;
    }
    puStack_58 = &DAT_101bbc8b4;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pcVar3 = s_response_decode_error__108ade627;
  }
  puStack_38 = param_1 + 4;
  puStack_40 = param_1 + 1;
  ppuStack_60 = &puStack_38;
  ppuStack_70 = &puStack_40;
  puStack_68 = &DAT_101bbc888;
  uVar1 = __ZN4core3fmt5write17h64810b21425781ecE(uVar1,uVar2,pcVar3,&ppuStack_70);
  return uVar1;
}

