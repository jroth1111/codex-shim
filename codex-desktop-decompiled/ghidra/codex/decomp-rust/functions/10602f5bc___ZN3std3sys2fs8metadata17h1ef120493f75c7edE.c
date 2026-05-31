
/* WARNING: Removing unreachable block (ram,0x00010602f678) */
/* WARNING: Removing unreachable block (ram,0x00010602f680) */
/* WARNING: Removing unreachable block (ram,0x00010602f688) */
/* WARNING: Removing unreachable block (ram,0x00010602f694) */

void __ZN3std3sys2fs8metadata17h1ef120493f75c7edE
               (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong auStack_240 [48];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (0x17f < param_3) {
    __ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17hb987ddbe28dfb313E
              (&lStack_50,param_2,param_3);
    if (lStack_50 == -0x8000000000000000) {
      (*(code *)&DAT_10603cc64)(param_1,1,puStack_48,lStack_40);
      *puStack_48 = 0;
      lStack_50 = lStack_40;
    }
    else {
      *param_1 = 1;
      param_1[1] = &UNK_10b4add80;
    }
    if (lStack_50 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puStack_48);
    return;
  }
  _memcpy(auStack_240,param_2,param_3);
  *(undefined1 *)((long)auStack_240 + param_3) = 0;
  if (0xe < param_3) {
    uVar6 = 0;
    do {
      uVar1 = *(ulong *)((long)auStack_240 + uVar6 + 8);
      if ((((0x101010101010100 - *(ulong *)((long)auStack_240 + uVar6) |
            *(ulong *)((long)auStack_240 + uVar6)) & (0x101010101010100 - uVar1 | uVar1) ^
           0xffffffffffffffff) & 0x8080808080808080) != 0) break;
      uVar6 = uVar6 + 0x10;
    } while (uVar6 <= param_3 - 0xf);
    do {
      if (param_3 + 1 == uVar6) goto LAB_10602f73c;
      if (*(char *)((long)auStack_240 + uVar6) == '\0') goto LAB_10602f6c8;
      uVar6 = uVar6 + 1;
    } while( true );
  }
  uVar6 = 0;
  do {
    if (*(char *)((long)auStack_240 + uVar6) == '\0') goto LAB_10602f6c8;
    uVar6 = uVar6 + 1;
  } while (param_3 + 1 != uVar6);
LAB_10602f73c:
  puVar5 = &UNK_10b4add80;
LAB_10602f744:
  param_1[1] = puVar5;
  uVar4 = 1;
LAB_10602f74c:
  *param_1 = uVar4;
  return;
LAB_10602f6c8:
  if (uVar6 != param_3) goto LAB_10602f73c;
  puStack_48 = (undefined1 *)0x0;
  lStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  iVar2 = _stat(auStack_240,&uStack_c0);
  if (iVar2 != -1) {
    uVar4 = 0;
    param_1[0xc] = uStack_68;
    param_1[0xb] = uStack_70;
    param_1[0xe] = uStack_58;
    param_1[0xd] = uStack_60;
    param_1[0x10] = puStack_48;
    param_1[0xf] = lStack_50;
    param_1[0x12] = uStack_38;
    param_1[0x11] = lStack_40;
    param_1[4] = uStack_a8;
    param_1[3] = uStack_b0;
    param_1[6] = uStack_98;
    param_1[5] = uStack_a0;
    param_1[8] = uStack_88;
    param_1[7] = uStack_90;
    param_1[10] = uStack_78;
    param_1[9] = uStack_80;
    param_1[2] = uStack_b8;
    param_1[1] = uStack_c0;
    goto LAB_10602f74c;
  }
  puVar3 = (uint *)___error();
  puVar5 = (undefined *)((ulong)*puVar3 << 0x20 | 2);
  goto LAB_10602f744;
}

