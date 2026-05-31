
void FUN_101895910(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = 0;
  do {
    bVar1 = *(byte *)((long)param_2 + uVar4);
    uStack_108 = param_4;
    uStack_100 = param_5;
    uStack_f8 = param_6;
    puStack_a8 = param_2;
    puStack_a0 = (undefined *)((long)param_2 + param_3);
    if (((9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) && (bVar1 != 0x5f)) &&
       (bVar1 != 0x2d)) {
      uStack_98 = (ulong *)((ulong)uStack_98 & 0xffffffff00000000);
      plStack_88 = (long *)(ulong)(uint)plStack_88;
      lStack_70 = 0;
      uStack_68 = 1;
      uStack_48 = 0x60000020;
      plStack_58 = &lStack_70;
      uStack_60 = 0;
      puStack_50 = &UNK_10b25d2c0;
      iVar3 = __ZN69__LT_core__str__iter__EscapeDefault_u20_as_u20_core__fmt__Display_GT_3fmt17h3380c14e6cca82d3E
                        (&puStack_a8,&plStack_58);
      if (iVar3 != 0) {
        func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&lStack_c0,&UNK_10b268ec0,&UNK_10b268df0);
        goto LAB_101895cbc;
      }
      uStack_b8 = uStack_68;
      lStack_c0 = lStack_70;
      puStack_a8 = &uStack_108;
      uStack_b0 = uStack_60;
      puStack_a0 = &DAT_10192d9a4;
      uStack_98 = (ulong *)&UNK_10b264f98;
      plStack_88 = &lStack_c0;
      puStack_90 = &DAT_10192d9a4;
      puStack_80 = &DAT_1019a7324;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_f0,s_must_match_to_match_Responses_AP_108add980,&puStack_a8);
      if (lStack_c0 != 0) {
        _free(uStack_b8);
      }
      param_1[1] = uStack_e8;
      *param_1 = uStack_f0;
      goto LAB_101895c48;
    }
    uVar4 = uVar4 + 1;
  } while (param_3 != uVar4);
  if (param_3 < 0x20) {
    if (param_3 < 8) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = param_3 & 0x18;
      uVar8 = *param_2;
      uVar4 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 0x30)) & 1);
      uVar9 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 0x38)) & 1);
      uVar10 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 0x20)) & 1);
      uVar11 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 0x28)) & 1);
      uVar12 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 0x10)) & 1);
      uVar13 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 0x18)) & 1);
      uVar14 = (ulong)(-(-0x41 < (char)uVar8) & 1);
      uVar15 = (ulong)(-(-0x41 < (char)((ulong)uVar8 >> 8)) & 1);
      if (uVar5 != 8) {
        uVar8 = param_2[1];
        uVar4 = uVar4 + (-(-0x41 < (char)((ulong)uVar8 >> 0x30)) & 1);
        uVar9 = uVar9 + (-(-0x41 < (char)((ulong)uVar8 >> 0x38)) & 1);
        uVar10 = uVar10 + (-(-0x41 < (char)((ulong)uVar8 >> 0x20)) & 1);
        uVar11 = uVar11 + (-(-0x41 < (char)((ulong)uVar8 >> 0x28)) & 1);
        uVar12 = uVar12 + (-(-0x41 < (char)((ulong)uVar8 >> 0x10)) & 1);
        uVar13 = uVar13 + (-(-0x41 < (char)((ulong)uVar8 >> 0x18)) & 1);
        uVar14 = uVar14 + (-(-0x41 < (char)uVar8) & 1);
        uVar15 = uVar15 + (-(-0x41 < (char)((ulong)uVar8 >> 8)) & 1);
        if (uVar5 != 0x10) {
          uVar8 = param_2[2];
          uVar4 = uVar4 + (-(-0x41 < (char)((ulong)uVar8 >> 0x30)) & 1);
          uVar9 = uVar9 + (-(-0x41 < (char)((ulong)uVar8 >> 0x38)) & 1);
          uVar10 = uVar10 + (-(-0x41 < (char)((ulong)uVar8 >> 0x20)) & 1);
          uVar11 = uVar11 + (-(-0x41 < (char)((ulong)uVar8 >> 0x28)) & 1);
          uVar12 = uVar12 + (-(-0x41 < (char)((ulong)uVar8 >> 0x10)) & 1);
          uVar13 = uVar13 + (-(-0x41 < (char)((ulong)uVar8 >> 0x18)) & 1);
          uVar14 = uVar14 + (-(-0x41 < (char)uVar8) & 1);
          uVar15 = uVar15 + (-(-0x41 < (char)((ulong)uVar8 >> 8)) & 1);
        }
      }
      uVar4 = uVar14 + uVar10 + uVar12 + uVar4 + uVar15 + uVar11 + uVar13 + uVar9;
      if (param_3 == uVar5) goto LAB_101895b8c;
    }
    lVar7 = param_3 - uVar5;
    pcVar6 = (char *)((long)param_2 + uVar5);
    do {
      if (-0x41 < *pcVar6) {
        uVar4 = uVar4 + 1;
      }
      lVar7 = lVar7 + -1;
      pcVar6 = pcVar6 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar4 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(param_2,param_3);
  }
LAB_101895b8c:
  if (param_6 < uVar4) {
    uStack_98 = (ulong *)((ulong)uStack_98._4_4_ << 0x20);
    plStack_88 = (long *)(ulong)(uint)plStack_88;
    lStack_70 = 0;
    uStack_68 = 1;
    uStack_48 = 0x60000020;
    plStack_58 = &lStack_70;
    uStack_60 = 0;
    puStack_50 = &UNK_10b25d2c0;
    iVar3 = __ZN69__LT_core__str__iter__EscapeDefault_u20_as_u20_core__fmt__Display_GT_3fmt17h3380c14e6cca82d3E
                      (&puStack_a8,&plStack_58);
    if (iVar3 != 0) {
      func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&lStack_c0,&UNK_10b268ec0,&UNK_10b268df0);
LAB_101895cbc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101895cc0);
      (*pcVar2)();
    }
    uStack_b8 = uStack_68;
    lStack_c0 = lStack_70;
    puStack_a8 = &uStack_108;
    uStack_b0 = uStack_60;
    puStack_a0 = &DAT_10192d9a4;
    uStack_98 = &uStack_f8;
    puStack_90 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    plStack_88 = &lStack_c0;
    puStack_80 = &DAT_1019a7324;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_d8,s_must_be_at_most___characters_to_m_108add9ab,&puStack_a8);
    if (lStack_c0 != 0) {
      _free(uStack_b8);
    }
    param_1[1] = uStack_d0;
    *param_1 = uStack_d8;
    uStack_e0 = uStack_c8;
LAB_101895c48:
    param_1[2] = uStack_e0;
  }
  else {
    *param_1 = 0x8000000000000000;
  }
  return;
}

