
void FUN_103e61b78(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong extraout_x8;
  undefined4 auStack_b8 [22];
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined1 *puStack_48;
  ulong *puStack_40;
  undefined1 *puStack_38;
  
  LOAcquire();
  uVar2 = *param_1;
  *param_1 = uVar2 ^ 3;
  LORelease();
  uVar7 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8c0,0x23,&UNK_10b4cdd30);
LAB_103e61c78:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8e3,0x25,&UNK_10b4cdd48);
    uStack_58 = extraout_x8;
LAB_103e61c90:
    puStack_50 = &uStack_58;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_40 = &uStack_60;
    puStack_38 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_current____sub__108b37960,&puStack_50,&UNK_10b4cdd60);
  }
  else {
    if ((uVar7 >> 1 & 1) != 0) goto LAB_103e61c78;
    if ((uVar7 >> 3 & 1) == 0) {
      auStack_b8[0] = 2;
      FUN_103e58664(param_1 + 4,auStack_b8);
LAB_103e61c00:
      puStack_50 = param_1;
      lVar3 = func_0x00010610dbf8(param_1 + 4,&puStack_50);
      uStack_60 = 1;
      if (lVar3 != 0) {
        uStack_60 = 2;
      }
      LOAcquire();
      uStack_58 = *param_1;
      *param_1 = uStack_58 + uStack_60 * -0x40;
      LORelease();
      uStack_58 = uStack_58 >> 6;
      if (uStack_60 <= uStack_58) {
        if (uStack_58 == uStack_60) {
          FUN_103daa3c4(param_1);
          _free(param_1);
        }
        return;
      }
      goto LAB_103e61c90;
    }
    if ((uVar7 >> 4 & 1) == 0) goto LAB_103e61c00;
    if (param_1[0x13] != 0) {
      (**(code **)(param_1[0x13] + 0x10))(param_1[0x14]);
      LOAcquire();
      uVar2 = *param_1;
      *param_1 = uVar2 & 0xffffffffffffffef;
      LORelease();
      uVar7 = (uint)uVar2;
      if ((uVar7 >> 1 & 1) == 0) {
        puVar6 = &UNK_10b4cdd78;
        uVar5 = 0x24;
        puVar4 = &UNK_109beb908;
      }
      else {
        if ((uVar7 >> 4 & 1) != 0) {
          if ((uVar7 >> 3 & 1) == 0) {
            if (param_1[0x13] != 0) {
              (**(code **)(param_1[0x13] + 0x18))(param_1[0x14]);
            }
            param_1[0x13] = 0;
          }
          goto LAB_103e61c00;
        }
        puVar6 = &UNK_10b4cdd90;
        uVar5 = 0x2a;
        puVar4 = &UNK_109beb92c;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar4,uVar5,puVar6);
      goto LAB_103e61d10;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beb784,0x1b,&UNK_10b4cdc40);
LAB_103e61d10:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e61d14);
  (*pcVar1)();
}

