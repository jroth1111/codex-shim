
void FUN_100853c18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  __ZN80__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hde5586f6355fdd1fE
            (&iStack_b8,param_2,param_3);
  if (iStack_b8 != 1) {
    param_1[2] = CONCAT44(uStack_a8,uStack_ac);
    param_1[1] = CONCAT44(uStack_b0,uStack_b4);
    param_1[3] = CONCAT44(uStack_a0,uStack_a4);
    *param_1 = 2;
    return;
  }
  lStack_90 = 0;
  uStack_88 = 1;
  uStack_68 = 0x60000020;
  plStack_78 = &lStack_90;
  puStack_70 = &UNK_10b209290;
  lStack_80 = 0;
  if (CONCAT44(uStack_ac,uStack_b0) == 0) {
    uVar6 = func_0x0001055b8dfc(&plStack_78,&UNK_109bed06d,0x10);
  }
  else {
    puStack_50 = auStack_60;
    puStack_48 = &DAT_10612b344;
    uStack_58 = CONCAT44(uStack_a4,uStack_a8);
    uVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&lStack_90,&UNK_10b209290,s_invalid_108b38af9,&puStack_50);
  }
  if ((uVar6 & 1) != 0) {
LAB_100853da0:
    FUN_107c05cb4(&UNK_108cc3daa,0x37,&puStack_50,&UNK_10b235000,&UNK_10b2346c0);
LAB_100853dd4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100853dd8);
    (*pcVar4)();
  }
  if (CONCAT44(uStack_9c,uStack_a0) != 0) {
    uStack_58 = uStack_98;
    puStack_50 = auStack_60;
    puStack_48 = &DAT_10612b344;
    iVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&lStack_90,&UNK_10b209290,s___expected_108b38b04,&puStack_50);
    if (iVar5 != 0) goto LAB_100853da0;
  }
  lVar3 = lStack_80;
  uVar2 = uStack_88;
  lVar1 = lStack_90;
  if (lStack_80 == 0) {
    lVar7 = 1;
    _memcpy(1,uStack_88,0);
  }
  else {
    lVar7 = _malloc(lStack_80);
    if (lVar7 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_100853dd4;
    }
    _memcpy(lVar7,uVar2,lVar3);
  }
  if (lVar1 != 0) {
    _free(uVar2);
  }
  *param_1 = 0;
  param_1[3] = lVar3;
  param_1[4] = lVar7;
  param_1[5] = lVar3;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 8;
  return;
}

