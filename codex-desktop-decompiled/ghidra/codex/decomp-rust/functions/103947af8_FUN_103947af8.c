
ulong FUN_103947af8(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_48 = &DAT_1048e978c;
  lStack_40 = param_1 + 0x18;
  puStack_38 = &DAT_1048e978c;
  lStack_50 = param_1;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_80,s___108b03abb,&lStack_50);
  lStack_40 = param_2 + 0x18;
  puStack_48 = &DAT_1048e978c;
  puStack_38 = &DAT_1048e978c;
  lStack_50 = param_2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_68,s___108b03abb,&lStack_50);
  uVar1 = uStack_70 - uStack_58;
  if (uStack_58 <= uStack_70) {
    uStack_70 = uStack_58;
  }
  iVar2 = _memcmp(uStack_78,uStack_60,uStack_70);
  if (lStack_68 != 0) {
    _free(uStack_60);
  }
  if (lStack_80 != 0) {
    _free(uStack_78);
  }
  if (iVar2 != 0) {
    uVar1 = (long)iVar2;
  }
  return uVar1 >> 0x3f;
}

