
undefined8 FUN_1088f89d0(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar5 = *param_1 * 2;
    unaff_x20 = param_3 + param_2;
    if (param_3 + param_2 <= uVar5) {
      unaff_x20 = uVar5;
    }
    uVar5 = 8;
    if (param_5 != 1) {
      uVar5 = 4;
    }
    if (unaff_x20 <= uVar5) {
      unaff_x20 = uVar5;
    }
    uVar3 = func_0x0001088f8888(aiStack_38,*param_1,param_1[1],unaff_x20,param_4);
    unaff_x19 = param_1;
    if (aiStack_38[0] != 1) {
      *param_1 = unaff_x20;
      param_1[1] = uStack_30;
      return uVar3;
    }
  }
  lVar4 = func_0x0001087c9084(uStack_30,uStack_28);
  puStack_a8 = (undefined1 *)&lStack_c0;
  uStack_48 = 0x1088f8a5c;
  lStack_c0 = 0;
  uStack_b8 = 1;
  uStack_98 = 0x60000020;
  uStack_b0 = 0;
  puStack_a0 = &UNK_10b28e668;
  uStack_60 = unaff_x20;
  puStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar4 + 0x18) == 0) {
    iVar2 = func_0x000105dc8000(lVar4,&puStack_a8);
    if (iVar2 != 0) goto LAB_1088f8b34;
  }
  else {
    lStack_70 = lVar4 + 0x20;
    uStack_88 = 0x105dc8000;
    puStack_78 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_68 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_a8 = (undefined1 *)&lStack_c0;
    lStack_90 = lVar4;
    plStack_80 = (long *)(lVar4 + 0x18);
    uVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&lStack_c0,&UNK_10b28e668,s_at_line_column_108b2e1dd,&lStack_90);
    if ((uVar5 & 1) != 0) {
LAB_1088f8b34:
      func_0x000108a07a3c(&UNK_108d42d18,0x37,&lStack_90,&UNK_10b28f2b0,&UNK_10b28f1a0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1088f8b5c);
      (*pcVar1)();
    }
  }
  uStack_88 = uStack_b8;
  lStack_90 = lStack_c0;
  plStack_80 = (long *)uStack_b0;
  uVar3 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&lStack_90);
  func_0x000102864444(lVar4);
  _free(lVar4);
  return uVar3;
}

