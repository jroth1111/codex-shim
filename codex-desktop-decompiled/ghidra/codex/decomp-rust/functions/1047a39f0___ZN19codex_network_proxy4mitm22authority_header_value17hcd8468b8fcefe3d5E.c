
void __ZN19codex_network_proxy4mitm22authority_header_value17hcd8468b8fcefe3d5E
               (ulong *param_1,char *param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  char *pcStack_68;
  ulong uStack_60;
  undefined2 uStack_52;
  char **ppcStack_50;
  undefined *puStack_48;
  undefined2 *puStack_40;
  undefined *puStack_38;
  
  uStack_52 = (undefined2)param_4;
  pcStack_68 = param_2;
  uStack_60 = param_3;
  if (param_3 < 0x10) {
    pcVar4 = param_2;
    uVar3 = param_3;
    if (param_3 != 0) {
      do {
        if (*pcVar4 == ':') goto LAB_1047a3b1c;
        uVar3 = uVar3 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar3 != 0);
      goto LAB_1047a3ae4;
    }
    if ((param_4 & 0xffff) == 0x1bb) goto LAB_1047a3bc4;
  }
  else {
    uVar3 = ((ulong)(param_2 + 7) & 0xfffffffffffffff8) - (long)param_2;
    if (uVar3 == 0) {
LAB_1047a3a4c:
      do {
        uVar1 = *(ulong *)(param_2 + uVar3);
        uVar6 = *(ulong *)((long)(param_2 + uVar3) + 8) ^ 0x3a3a3a3a3a3a3a3a;
        if ((((0x101010101010100 - (uVar1 ^ 0x3a3a3a3a3a3a3a3a) | uVar1) &
              (0x101010101010100 - uVar6 | uVar6) ^ 0xffffffffffffffff) & 0x8080808080808080) != 0)
        break;
        uVar3 = uVar3 + 0x10;
      } while (uVar3 <= param_3 - 0x10);
    }
    else {
      lVar5 = (long)param_2 - ((ulong)(param_2 + 7) & 0xfffffffffffffff8);
      pcVar4 = param_2;
      do {
        if (*pcVar4 == ':') goto LAB_1047a3b1c;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar2);
      if (uVar3 <= param_3 - 0x10) goto LAB_1047a3a4c;
    }
    lVar5 = param_3 - uVar3;
    if (lVar5 != 0) {
      pcVar4 = param_2 + uVar3;
      do {
        if (*pcVar4 == ':') goto LAB_1047a3b1c;
        lVar5 = lVar5 + -1;
        pcVar4 = pcVar4 + 1;
      } while (lVar5 != 0);
    }
LAB_1047a3ae4:
    if ((param_4 & 0xffff) == 0x1bb) {
      if (param_3 != 0) {
        uVar3 = _malloc(param_3);
        if (uVar3 != 0) goto LAB_1047a3bc8;
        func_0x0001087c9084(1,param_3);
LAB_1047a3b1c:
        if ((param_4 & 0xffff) == 0x1bb) {
          pcVar4 = s_____108b01d37;
        }
        else {
          puStack_40 = &uStack_52;
          puStack_38 = &
                       __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          pcVar4 = s______108b01d2f;
        }
        goto LAB_1047a3bb4;
      }
LAB_1047a3bc4:
      uVar3 = 1;
LAB_1047a3bc8:
      _memcpy(uVar3,param_2,param_3);
      *param_1 = param_3;
      param_1[1] = uVar3;
      param_1[2] = param_3;
      return;
    }
  }
  puStack_40 = &uStack_52;
  puStack_38 = &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
  ;
  pcVar4 = s___108b01d2a;
LAB_1047a3bb4:
  ppcStack_50 = &pcStack_68;
  puStack_48 = &DAT_1047c8f28;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(pcVar4,&ppcStack_50);
  return;
}

