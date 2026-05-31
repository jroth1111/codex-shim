
/* WARNING: Possible PIC construction at 0x000105d85460: Changing call to branch */

void __ZN6semver5parse72__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__Version_GT_8from_str17hf91540b554650df3E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auStack_70 [8];
  byte *pbStack_68;
  byte *pbStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000105d84d5c(&pbStack_68,param_2,param_3,0);
  pbVar5 = pbStack_68;
  if (pbStack_60 == (byte *)0x0) {
    *param_1 = 0;
    param_1[1] = pbStack_68;
    return;
  }
  if (lStack_58 == 0) {
    pbStack_60 = (byte *)0x1;
    goto LAB_105d8530c;
  }
  bVar2 = *pbStack_60;
  if (bVar2 != 0x2e) {
    uVar11 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (uVar11 < 0xe0) {
        uVar10 = (ulong)(pbStack_60[1] & 0x3f | (uVar11 & 0x1f) << 6);
      }
      else {
        uVar3 = pbStack_60[2] & 0x3f | (pbStack_60[1] & 0x3f) << 6;
        if (uVar11 < 0xf0) {
          uVar10 = (ulong)(uVar3 | (uVar11 & 0x1f) << 0xc);
        }
        else {
          uVar10 = (ulong)(pbStack_60[3] & 0x3f | uVar3 << 6 | (uVar11 & 7) << 0x12);
        }
      }
    }
    else {
      uVar10 = (ulong)uVar11;
    }
    uVar13 = 3;
LAB_105d85308:
    pbStack_60 = (byte *)(uVar13 | uVar10 << 0x20);
LAB_105d8530c:
    *param_1 = 0;
    param_1[1] = pbStack_60;
    return;
  }
  func_0x000105d84d5c(&pbStack_68,pbStack_60 + 1,lStack_58 + -1,1);
  pbVar6 = pbStack_68;
  if (pbStack_60 == (byte *)0x0) {
    *param_1 = 0;
    param_1[1] = pbStack_68;
    return;
  }
  if (lStack_58 == 0) {
    pbStack_60 = (byte *)0x101;
    goto LAB_105d8530c;
  }
  bVar2 = *pbStack_60;
  if (bVar2 != 0x2e) {
    uVar11 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (uVar11 < 0xe0) {
        uVar10 = (ulong)(pbStack_60[1] & 0x3f | (uVar11 & 0x1f) << 6);
        uVar13 = 0x103;
      }
      else {
        uVar3 = pbStack_60[2] & 0x3f | (pbStack_60[1] & 0x3f) << 6;
        if (uVar11 < 0xf0) {
          uVar10 = (ulong)(uVar3 | (uVar11 & 0x1f) << 0xc);
          uVar13 = 0x103;
        }
        else {
          uVar10 = (ulong)(pbStack_60[3] & 0x3f | uVar3 << 6 | (uVar11 & 7) << 0x12);
          uVar13 = 0x103;
        }
      }
    }
    else {
      uVar10 = (ulong)uVar11;
      uVar13 = 0x103;
    }
    goto LAB_105d85308;
  }
  func_0x000105d84d5c(&pbStack_68,pbStack_60 + 1,lStack_58 + -1,2);
  pbVar7 = pbStack_68;
  if (pbStack_60 == (byte *)0x0) {
    *param_1 = 0;
    param_1[1] = pbStack_68;
    return;
  }
  if (lStack_58 == 0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffffffffffff;
    goto LAB_105d85448;
  }
  bVar2 = *pbStack_60;
  if (bVar2 == 0x2d) {
    func_0x000105d84ed8(&pbStack_68,pbStack_60 + 1,lStack_58 + -1);
    pbVar12 = pbStack_68;
    if (pbStack_68 == (byte *)0x0) goto LAB_105d8530c;
    if (pbStack_68 == (byte *)0xffffffffffffffff) {
      pbVar9 = (byte *)0x307;
      goto LAB_105d85420;
    }
    if (lStack_58 != 0) {
      bVar2 = *pbStack_60;
      uVar13 = 0x300;
      goto LAB_105d8538c;
    }
    uVar13 = 0x300;
    pbStack_68 = pbStack_60;
    auVar14 = func_0x000105d83f54(&pbStack_68);
joined_r0x000105d85440:
    pbVar4 = (byte *)0xffffffffffffffff;
joined_r0x000105d853d0:
    if (((auVar14._0_8_ & 1) == 0) || (auVar14._8_4_ == 0x110000)) {
      *param_1 = pbVar12;
      param_1[1] = pbVar4;
LAB_105d85448:
      param_1[2] = pbVar5;
      param_1[3] = pbVar6;
      param_1[4] = pbVar7;
      return;
    }
    uVar13 = uVar13 | auVar14._8_8_ << 0x20 | 3;
    pbVar12 = pbVar4;
  }
  else {
    pbVar12 = (byte *)0xffffffffffffffff;
    uVar13 = 0x200;
LAB_105d8538c:
    if (bVar2 != 0x2b) {
      pbStack_68 = pbStack_60;
      pbStack_60 = pbStack_60 + lStack_58;
      auVar14 = func_0x000105d83f54(&pbStack_68);
      goto joined_r0x000105d85440;
    }
    func_0x000105d84b58(&pbStack_68,pbStack_60 + 1,lStack_58 + -1);
    pbVar4 = pbStack_68;
    pbVar9 = pbStack_60;
    if (pbStack_68 == (byte *)0x0) {
LAB_105d85420:
      *param_1 = 0;
      param_1[1] = pbVar9;
      goto SUB_105d83f14;
    }
    if (pbStack_68 != (byte *)0xffffffffffffffff) {
      uVar13 = 0x400;
      pbStack_68 = pbStack_60;
      pbStack_60 = pbStack_60 + lStack_58;
      auVar14 = func_0x000105d83f54(&pbStack_68);
      goto joined_r0x000105d853d0;
    }
    uVar13 = 0x407;
    pbVar12 = pbStack_68;
  }
  *param_1 = 0;
  param_1[1] = uVar13;
  unaff_x30 = 0x105d85464;
  register0x00000008 = (BADSPACEBASE *)auStack_70;
  unaff_x29 = puVar1;
SUB_105d83f14:
  if ((long)pbVar12 < -1) {
    lVar8 = (long)pbVar12 * 2;
    if (*(char *)(lVar8 + 1) < '\0') {
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(long *)((long)register0x00000008 + -0x18) = lVar8;
      FUN_108a47664();
      lVar8 = *(long *)((long)register0x00000008 + -0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar8);
    return;
  }
  return;
}

