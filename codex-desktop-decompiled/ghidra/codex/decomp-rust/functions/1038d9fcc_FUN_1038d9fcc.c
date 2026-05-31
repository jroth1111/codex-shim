
ulong FUN_1038d9fcc(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  __ZN6semver5parse72__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__Version_GT_8from_str17hf91540b554650df3E
            (&lStack_b0);
  __ZN6semver5parse72__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__Version_GT_8from_str17hf91540b554650df3E
            (&lStack_88,param_3,param_4);
  if ((lStack_b0 == 0) || (lStack_88 == 0)) {
    uVar4 = param_2;
    if (param_4 <= param_2) {
      uVar4 = param_4;
    }
    iVar2 = _memcmp(param_1,param_3,uVar4);
    lVar1 = param_2 - param_4;
    if (iVar2 != 0) {
      lVar1 = (long)iVar2;
    }
    uVar3 = (uint)(0 < lVar1);
    if (lVar1 < 0) {
      uVar3 = 0xffffffff;
    }
    uVar4 = (ulong)uVar3;
    if (lStack_b0 != 0) {
      if (lStack_b0 < -1) {
        if (*(char *)(lStack_b0 * 2 + 1) < '\0') {
          FUN_108a47664();
        }
        _free(lStack_b0 * 2);
      }
      if (lStack_a8 < -1) {
        if (*(char *)(lStack_a8 * 2 + 1) < '\0') {
          FUN_108a47664();
        }
        _free(lStack_a8 * 2);
      }
    }
    if (lStack_88 == 0) {
      return uVar4;
    }
    if (lStack_88 < -1) {
      if (*(char *)(lStack_88 * 2 + 1) < '\0') {
        FUN_108a47664();
      }
      _free(lStack_88 * 2);
    }
  }
  else {
    uVar3 = (uint)(uStack_78 < uStack_a0);
    if (uStack_a0 < uStack_78) {
      uVar3 = 0xffffffff;
    }
    uVar4 = (ulong)uVar3;
    if (uStack_a0 == uStack_78) {
      uVar3 = (uint)(uStack_70 < uStack_98);
      if (uStack_98 < uStack_70) {
        uVar3 = 0xffffffff;
      }
      uVar4 = (ulong)uVar3;
      if (uStack_98 == uStack_70) {
        uVar3 = (uint)(uStack_68 < uStack_90);
        if (uStack_90 < uStack_68) {
          uVar3 = 0xffffffff;
        }
        uVar4 = (ulong)uVar3;
        if ((uStack_90 == uStack_68) &&
           (uVar4 = __ZN6semver5impls63__LT_impl_u20_core__cmp__Ord_u20_for_u20_semver__Prerelease_GT_3cmp17hc4c45b60b454a1e8E
                              (&lStack_b0,&lStack_88), (uVar4 & 0xff) == 0)) {
          uVar4 = __ZN6semver5impls66__LT_impl_u20_core__cmp__Ord_u20_for_u20_semver__BuildMetadata_GT_3cmp17h2600efb254d05fa1E
                            (&lStack_a8,&lStack_80);
        }
      }
    }
    if (lStack_88 < -1) {
      if (*(char *)(lStack_88 * 2 + 1) < '\0') {
        FUN_108a47664();
        _free(lStack_88 * 2);
      }
      else {
        _free();
      }
    }
    if (lStack_80 < -1) {
      if (*(char *)(lStack_80 * 2 + 1) < '\0') {
        FUN_108a47664();
        _free(lStack_80 * 2);
      }
      else {
        _free();
      }
    }
    lStack_80 = lStack_a8;
    if (lStack_b0 < -1) {
      if (*(char *)(lStack_b0 * 2 + 1) < '\0') {
        FUN_108a47664();
        _free(lStack_b0 * 2);
      }
      else {
        _free();
      }
    }
  }
  if (lStack_80 < -1) {
    if (*(char *)(lStack_80 * 2 + 1) < '\0') {
      FUN_108a47664();
    }
    _free(lStack_80 * 2);
  }
  return uVar4;
}

