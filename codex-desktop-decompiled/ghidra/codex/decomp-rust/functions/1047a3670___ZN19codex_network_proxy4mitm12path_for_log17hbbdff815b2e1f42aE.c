
void __ZN19codex_network_proxy4mitm12path_for_log17hbbdff815b2e1f42aE
               (ulong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  char *extraout_x8;
  ulong unaff_x20;
  undefined *puVar7;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  ulong uStack_f0;
  char cStack_e8;
  char cStack_e7;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined8 uStack_c6;
  undefined8 uStack_be;
  undefined8 uStack_b6;
  undefined8 uStack_ae;
  undefined8 uStack_a6;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  
  uVar5 = *(ulong *)(param_2 + 0x40);
  if ((uVar5 == 0) && (*param_2 == '\0')) {
    unaff_x20 = 0;
    puVar7 = (undefined *)0x1;
    uVar5 = 1;
    goto LAB_1047a3720;
  }
  uVar1 = *(ushort *)(param_2 + 0x50);
  uVar6 = (ulong)uVar1;
  puVar3 = *(undefined **)(param_2 + 0x38);
  if (uVar1 == 0xffff) goto LAB_1047a36f8;
  if (uVar1 == 0) {
    if (puVar3 == (undefined *)0x0) goto LAB_1047a3748;
    unaff_x20 = 1;
    puVar7 = &UNK_108e4859a;
LAB_1047a3710:
    uVar5 = _malloc(unaff_x20);
    if (uVar5 != 0) {
LAB_1047a3720:
      _memcpy(uVar5,puVar7,unaff_x20);
      *param_1 = unaff_x20;
      param_1[1] = uVar5;
      param_1[2] = unaff_x20;
      return;
    }
  }
  else {
    if (uVar6 < uVar5) {
      uVar5 = uVar6;
      if (-0x41 < (char)puVar3[uVar6]) {
LAB_1047a36f8:
        unaff_x20 = uVar5;
        if (uVar5 < 2) {
          unaff_x20 = 1;
        }
        puVar7 = &UNK_108e4859a;
        if (uVar5 != 0) {
          puVar7 = puVar3;
        }
        goto LAB_1047a3710;
      }
    }
    else if ((puVar3 != (undefined *)0x0) && (uVar5 == uVar6)) goto LAB_1047a36f8;
LAB_1047a3748:
    param_4 = 0;
    __ZN4core3str16slice_error_fail17h7d5f7302866db666E();
  }
  auStack_108 = func_0x0001087c9084(1,unaff_x20);
  cStack_e8 = (char)auStack_108;
  cStack_e7 = (char)((ulong)auStack_108 >> 8);
  uStack_e6 = (undefined6)((ulong)auStack_108 >> 0x10);
  uStack_e0 = 0x8f28;
  uStack_de = 0x1047c;
  uStack_d8 = SUB82(&uStack_f8,0);
  uStack_d6 = (undefined6)((ulong)&uStack_f8 >> 0x10);
  uStack_d0 = 0x8f28;
  uStack_ce = 0x1047c;
  uStack_f8 = param_4;
  uStack_f0 = uVar6;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&puStack_90,s_https____108b01d1e,&cStack_e8);
  uVar5 = uStack_88;
  puVar7 = puStack_90;
  if (lStack_80 == 0) {
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 1;
    puStack_90 = &UNK_10b205a90;
  }
  else {
    uVar6 = _malloc(lStack_80);
    if (uVar6 == 0) {
      func_0x0001087c9084(1,lStack_80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1047a38c4);
      (*pcVar2)();
    }
    _memcpy(uVar6,uStack_88,lStack_80);
    uStack_88 = uVar6;
    if ((uVar6 & 1) == 0) {
      puStack_90 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
      uStack_78 = uVar6 | 1;
    }
    else {
      puStack_90 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
      uStack_78 = uVar6;
    }
  }
  __ZN4http3uri3Uri11from_shared17he2fa11b8aa47ee85E(&cStack_e8,&puStack_90);
  if (cStack_e8 == '\x03') {
    uVar4 = func_0x00010899f6d8();
    *(undefined8 *)(extraout_x8 + 8) = uVar4;
    *extraout_x8 = '\x03';
  }
  else {
    *(undefined8 *)(extraout_x8 + 0x2a) = uStack_be;
    *(undefined8 *)(extraout_x8 + 0x22) = uStack_c6;
    *(undefined8 *)(extraout_x8 + 0x3a) = uStack_ae;
    *(undefined8 *)(extraout_x8 + 0x32) = uStack_b6;
    *(ulong *)(extraout_x8 + 0x4a) = CONCAT26(uStack_98,uStack_9e);
    *(undefined8 *)(extraout_x8 + 0x42) = uStack_a6;
    *(ulong *)(extraout_x8 + 0x50) = CONCAT62(uStack_96,uStack_98);
    *(ulong *)(extraout_x8 + 10) = CONCAT26(uStack_d8,uStack_de);
    *(ulong *)(extraout_x8 + 2) = CONCAT26(uStack_e0,uStack_e6);
    *(ulong *)(extraout_x8 + 0x1a) = CONCAT26(uStack_c8,uStack_ce);
    *(ulong *)(extraout_x8 + 0x12) = CONCAT26(uStack_d0,uStack_d6);
    *extraout_x8 = cStack_e8;
    extraout_x8[1] = cStack_e7;
  }
  if (puVar7 != (undefined *)0x0) {
    _free(uVar5);
  }
  return;
}

