
ulong __ZN6chrono5naive4date9NaiveDate25from_num_days_from_ce_opt17hb3471402c9f934f5E
                (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int extraout_w1;
  undefined *puVar9;
  undefined4 *extraout_x8;
  undefined1 uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined8 auStack_138 [2];
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  if (SCARRY4(param_1,0x16d)) {
    return 0;
  }
  iVar3 = (param_1 + 0x16d) % 0x23ab1;
  uVar7 = iVar3 >> 0x1f;
  uVar1 = (uVar7 & 0x23ab1) + iVar3;
  uVar8 = (ulong)(uVar1 / 0x16d);
  uVar4 = uVar1 % 0x16d;
  uVar11 = uVar4 - (byte)(&UNK_108c939f8)[uVar8];
  if (uVar4 < (byte)(&UNK_108c939f8)[uVar8]) {
    uVar11 = uVar1 / 0x16d - 1;
    uVar8 = (ulong)uVar11;
    if (uVar11 < 0x191) {
      uVar11 = (uVar4 - (byte)(&UNK_108c939f8)[uVar8]) + 0x16d;
LAB_10039c8a0:
      iVar3 = (int)uVar8 + (uVar7 + (param_1 + 0x16d) / 0x23ab1) * 400;
      if (0x16d < uVar11 || iVar3 - 0x3ffffU < 0xfff80002) {
        return 0;
      }
      uVar11 = iVar3 * 0x2000 + uVar11 * 0x10 + 0x10 | (uint)(byte)(&UNK_108c93b89)[uVar8];
      if (0x16e0 < (uVar11 & 0x1ff8)) {
        uVar11 = 0;
      }
      return (ulong)uVar11;
    }
    uVar8 = FUN_107c05cd0(uVar8,0x191,&UNK_10b206a18);
  }
  else if (uVar1 < 0x23a50) goto LAB_10039c8a0;
  uVar7 = FUN_107c05cd0(uVar8,400,&UNK_10b206a30);
  uVar1 = uVar7 >> 4 & 0x1ff;
  uVar11 = uVar1 + extraout_w1;
  if (((SCARRY4(uVar1,extraout_w1)) || ((int)uVar11 < 1)) || (0x16e - (uVar7 >> 3 & 1) < uVar11)) {
    iVar3 = ((int)uVar7 >> 0xd) % 400;
    uVar4 = iVar3 >> 0x1f;
    uVar11 = (uVar4 & 400) + iVar3;
    iVar6 = uVar1 + uVar11 * 0x16d + (uint)(byte)(&UNK_108c939f8)[uVar11] + -1;
    iVar3 = iVar6 + extraout_w1;
    if (!SCARRY4(iVar6,extraout_w1)) {
      iVar6 = iVar3 % 0x23ab1;
      uVar2 = iVar6 >> 0x1f;
      uVar1 = (uVar2 & 0x23ab1) + iVar6;
      uVar8 = (ulong)(uVar1 / 0x16d);
      uVar5 = uVar1 % 0x16d;
      uVar11 = uVar5 - (byte)(&UNK_108c939f8)[uVar8];
      if (uVar5 < (byte)(&UNK_108c939f8)[uVar8]) {
        uVar11 = uVar1 / 0x16d - 1;
        uVar8 = (ulong)uVar11;
        if (400 < uVar11) {
          uVar8 = FUN_107c05cd0(uVar8,0x191,&UNK_10b206a18);
LAB_10039caac:
          puVar9 = &UNK_10b206a30;
          auVar12 = FUN_107c05cd0(uVar8,400);
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_90 = 7;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          auStack_138[0] = 0;
          uStack_98 = 0;
          uStack_78 = 8;
          uStack_70 = 0;
          uStack_68 = 0;
          puStack_88 = puVar9;
          uStack_80 = param_4;
          uVar8 = FUN_1003a0450(&lStack_60,auStack_138,auVar12._0_8_,auVar12._8_8_,&puStack_88);
          if ((lStack_60 == 0) || (CONCAT71(uStack_57,uStack_58) != 0)) {
            uVar10 = 8;
            if (CONCAT71(uStack_57,uStack_58) != 0) {
              uVar10 = 5;
            }
            if (lStack_60 == 0) {
              uVar10 = uStack_58;
            }
            *(undefined1 *)(extraout_x8 + 1) = uVar10;
            *extraout_x8 = 0;
          }
          else {
            uVar8 = __ZN6chrono6format6parsed6Parsed29to_naive_datetime_with_offset17hd2317428998e8f64E
                              (extraout_x8,auStack_138,0);
          }
          return uVar8;
        }
        uVar11 = (uVar5 - (byte)(&UNK_108c939f8)[uVar8]) + 0x16d;
      }
      else if (0x23a4f < uVar1) goto LAB_10039caac;
      iVar3 = (int)uVar8 + (uVar4 + ((int)uVar7 >> 0xd) / 400 + iVar3 / 0x23ab1 + uVar2) * 400;
      if (uVar11 < 0x16e && 0xfff80001 < iVar3 - 0x3ffffU) {
        uVar11 = iVar3 * 0x2000 + uVar11 * 0x10 + 0x10 | (uint)(byte)(&UNK_108c93b89)[uVar8];
        if (0x16e0 < (uVar11 & 0x1ff8)) {
          uVar11 = 0;
        }
        return (ulong)uVar11;
      }
    }
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(uVar7 & 0xffffe00f | uVar11 * 0x10);
  }
  return uVar8;
}

