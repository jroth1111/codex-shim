
/* WARNING: Possible PIC construction at 0x000108a07e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07e14) */
/* WARNING: Removing unreachable block (ram,0x000108a07e38) */
/* WARNING: Removing unreachable block (ram,0x000108a07e20) */

void FUN_103edfa34(long *param_1,ulong param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 auVar16 [16];
  long lStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long *plStack_1e8;
  undefined1 *****pppppuStack_1e0;
  undefined8 uStack_1d8;
  ulong auStack_1c8 [3];
  undefined *puStack_1b0;
  long *plStack_1a8;
  undefined1 ****ppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 **ppuStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [16];
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined *puStack_88;
  long **pplStack_80;
  undefined *puStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  iVar5 = (int)param_4;
  if (param_3 < (undefined *)0xf) {
    unaff_x22 = 4;
    if ((undefined *)0x3 < param_3) {
      unaff_x22 = ((ulong)param_3 & 8) + 8;
    }
LAB_103edfab0:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = unaff_x22;
    if ((SUB168(auVar16 * auVar2,8) == 0) && (param_2 * unaff_x22 < 0xfffffffffffffff9)) {
      unaff_x23 = param_2 * unaff_x22 + 7 & 0xfffffffffffffff8;
      unaff_x21 = unaff_x22 + 8;
      unaff_x20 = (undefined *)(unaff_x23 + unaff_x21);
      if ((!CARRY8(unaff_x23,unaff_x21)) && (unaff_x20 < (undefined *)0x7ffffffffffffff9)) {
        if (unaff_x20 == (undefined *)0x0) {
          lVar6 = 8;
          goto LAB_103edfb18;
        }
        if (unaff_x20 < (undefined *)0x8) {
          lStack_48 = 0;
          param_3 = unaff_x20;
          iVar4 = _posix_memalign(&lStack_48,8);
          lVar6 = lStack_48;
          if (iVar4 == 0) goto joined_r0x000103edfb94;
        }
        else {
          lVar6 = _malloc(unaff_x20);
joined_r0x000103edfb94:
          if (lVar6 != 0) {
LAB_103edfb18:
            uVar15 = unaff_x22 - 1;
            uVar7 = uVar15;
            if (7 < uVar15) {
              uVar7 = (unaff_x22 >> 3) * 7;
            }
            _memset(lVar6 + unaff_x23,0xff,unaff_x21);
            *param_1 = lVar6 + unaff_x23;
            param_1[1] = uVar15;
            param_1[2] = uVar7;
            param_1[3] = 0;
            return;
          }
        }
        unaff_x24 = param_4;
        if (iVar5 == 0) {
          lVar6 = 8;
          goto LAB_103edfb70;
        }
        goto LAB_103edfbc0;
      }
    }
    if (iVar5 == 0) {
      lVar6 = 0;
LAB_103edfb70:
      param_1[1] = lVar6;
      param_1[2] = (long)unaff_x20;
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((ulong)param_3 >> 0x3d == 0) {
      unaff_x22 = (0xffffffffffffffffU >> (LZCOUNT((ulong)((long)param_3 * 8) / 7 - 1) & 0x3fU)) + 1
      ;
      goto LAB_103edfab0;
    }
    if (iVar5 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  param_3 = &UNK_10b3ad9c8;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
LAB_103edfbc0:
  uVar7 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
  plStack_d0 = &lStack_48;
  plStack_90 = (long *)&plStack_e0;
  pplStack_80 = &plStack_e0;
  uStack_58 = 0x103edfbcc;
  ppuStack_f0 = &puStack_60;
  lVar6 = (uVar7 & 0xff) * 8;
  uStack_c0 = *(undefined8 *)(&UNK_10b392f20 + lVar6);
  uStack_b8 = *(undefined8 *)(&UNK_108f63ba8 + lVar6);
  if (param_6 == 0) {
    puStack_88 = &DAT_1055b3498;
    pplStack_80 = &plStack_d0;
    pcVar8 = s_assertion__left_right__failed_le_108b0eeb7;
  }
  else {
    plStack_90 = &lStack_b0;
    puStack_88 = &
                 __ZN59__LT_core__fmt__Arguments_u20_as_u20_core__fmt__Display_GT_3fmt17h37475dbdb5fb4019E
    ;
    pplStack_70 = &plStack_d0;
    puStack_68 = &DAT_1055b3498;
    pcVar8 = s_assertion__left_right__failed__l_108b0eeee;
    lStack_b0 = param_6;
    uStack_a8 = param_7;
  }
  puStack_a0 = &uStack_c0;
  puStack_78 = &DAT_1055b3498;
  puStack_98 = &DAT_1055b3828;
  plStack_e0 = &lStack_50;
  puStack_d8 = param_3;
  puStack_c8 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar8,&puStack_a0,param_8);
  uStack_e8 = 0x108a07d00;
  auVar16 = func_0x000108a07ba4(&UNK_108f636fa,0x26);
  uStack_f8 = 0x108a07d18;
  puVar11 = &UNK_10b392d00;
  uVar9 = 1;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  auVar16 = func_0x000108a07c14(auVar16._0_8_,auVar16._8_8_ << 1 | 1,1,&UNK_10b392d00);
  pcStack_108 = __ZN4core9panicking5panic17h30f5ec71e3af4326E;
  puStack_110 = (undefined1 *)&puStack_100;
  auStack_148 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (auVar16._0_8_,auVar16._8_8_ << 1 | 1);
  pcStack_118 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E;
  puStack_138 = (undefined8 *)auStack_148;
  uStack_128 = 1;
  uStack_130 = uVar9;
  puStack_120 = (undefined1 *)&puStack_110;
  auVar16 = __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(&puStack_138);
  uStack_170 = auVar16._8_8_;
  uStack_158 = 0x108a07d74;
  puVar10 = &UNK_10b392fd8;
  puVar12 = &uStack_168;
  puVar13 = puVar10;
  uStack_168 = uVar9;
  ppuStack_160 = &puStack_120;
  auVar16 = __ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                      (auVar16._0_8_,&uStack_170,&UNK_10b392fd8,puVar12,&UNK_10b392fd8,puVar11,
                       param_3,param_6);
  uStack_190 = auVar16._8_8_;
  uStack_178 = 0x108a07da8;
  puStack_188 = puVar10;
  pppuStack_180 = &ppuStack_160;
  plStack_1e8 = (long *)__ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                                  (auVar16._0_8_,&uStack_190,&UNK_10b393070,&puStack_188,
                                   &UNK_10b393070,puVar12,puVar13,puVar11);
  uStack_198 = 0x108a07ddc;
  pppppuStack_1e0 = &ppppuStack_1a0;
  lVar6 = *plStack_1e8;
  lVar1 = plStack_1e8[1];
  uStack_1f0 = lVar6 * 2;
  if (uStack_1f0 < 5) {
    uStack_1f0 = 4;
  }
  uStack_1d8 = 0x108a07e14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_1f0;
  lVar14 = 8;
  uVar7 = 0;
  if ((SUB168(ZEXT816(0x18) * auVar3,8) == 0) &&
     (uVar15 = uStack_1f0 * 0x18, uVar15 < 0x7ffffffffffffff9)) {
    uStack_210 = unaff_x24;
    uStack_208 = unaff_x23;
    uStack_200 = unaff_x22;
    uStack_1f8 = unaff_x21;
    puStack_1b0 = unaff_x20;
    plStack_1a8 = param_1;
    ppppuStack_1a0 = &pppuStack_180;
    if (lVar6 == 0) {
      if (uVar15 != 0) {
        _malloc(uVar15);
      }
    }
    else if (uVar15 == 0) {
      lStack_218 = 0;
      iVar5 = _posix_memalign(&lStack_218,8,0);
      if ((iVar5 == 0) && (lStack_218 != 0)) {
        _memcpy(lStack_218,lVar1,lVar6 * 0x18);
        _free(lVar1);
      }
    }
    else {
      _realloc(lVar1,uVar15);
    }
    lVar14 = 0x10;
    uVar7 = uVar15;
  }
  *(ulong *)((long)auStack_1c8 + lVar14) = uVar7;
  return;
}

