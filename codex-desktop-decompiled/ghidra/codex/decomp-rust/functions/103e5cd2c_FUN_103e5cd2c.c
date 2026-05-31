
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5cd2c(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  ulong unaff_x22;
  undefined4 auStack_948 [564];
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  undefined1 *puStack_58;
  ulong *puStack_50;
  undefined1 *puStack_48;
  
  LOAcquire();
  uVar2 = *param_1;
  *param_1 = uVar2 ^ 3;
  LORelease();
  uVar6 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8c0,0x23,&UNK_10b4cdd30);
LAB_103e5cdfc:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8e3,0x25,&UNK_10b4cdd48);
    param_1 = unaff_x19;
LAB_103e5ce14:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (unaff_x20,&DAT_1060edbcc);
    *(undefined1 *)(unaff_x20 + 0x48) = 1;
LAB_103e5ce2c:
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    *(ulong *)(unaff_x20 + 0x30) = unaff_x22;
LAB_103e5ce34:
    uStack_78 = uVar7;
    FUN_103dafa60(param_1 + 6);
    _memcpy(param_1 + 6,auStack_948,0x8d0);
    if (*(char *)(unaff_x20 + 0x48) == '\x01') {
LAB_103e5ce7c:
      *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    }
    else if (*(char *)(unaff_x20 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (unaff_x20,&DAT_1060edbcc);
      *(undefined1 *)(unaff_x20 + 0x48) = 1;
      goto LAB_103e5ce7c;
    }
LAB_103e5ce80:
    puStack_60 = param_1;
    lVar3 = func_0x00010610dbf8(param_1 + 4,&puStack_60);
    uStack_70 = 1;
    if (lVar3 != 0) {
      uStack_70 = 2;
    }
    LOAcquire();
    uStack_68 = *param_1;
    *param_1 = uStack_68 + uStack_70 * -0x40;
    LORelease();
    uStack_68 = uStack_68 >> 6;
    if (uStack_70 <= uStack_68) {
      if (uStack_68 == uStack_70) {
        FUN_103db3894(param_1);
        _free(param_1);
      }
      return;
    }
    puStack_60 = &uStack_68;
    puStack_58 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_50 = &uStack_70;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_current____sub__108b37960,&puStack_60,&UNK_10b4cdd60);
  }
  else {
    if ((uVar6 >> 1 & 1) != 0) goto LAB_103e5cdfc;
    if ((uVar6 >> 3 & 1) == 0) {
      auStack_948[0] = 2;
      unaff_x22 = param_1[5];
      unaff_x20 = (*
                  ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                  )();
      if (*(char *)(unaff_x20 + 0x48) == '\x01') goto LAB_103e5ce2c;
      if (*(char *)(unaff_x20 + 0x48) != '\x02') goto LAB_103e5ce14;
      uVar7 = 0;
      goto LAB_103e5ce34;
    }
    if ((uVar6 >> 4 & 1) == 0) goto LAB_103e5ce80;
    if (param_1[0x122] != 0) {
      (**(code **)(param_1[0x122] + 0x10))(param_1[0x123]);
      LOAcquire();
      uVar2 = *param_1;
      *param_1 = uVar2 & 0xffffffffffffffef;
      LORelease();
      uVar6 = (uint)uVar2;
      if ((uVar6 >> 1 & 1) == 0) {
        puVar5 = &UNK_10b4cdd78;
        uVar7 = 0x24;
        puVar4 = &UNK_109beb908;
      }
      else {
        if ((uVar6 >> 4 & 1) != 0) {
          if ((uVar6 >> 3 & 1) == 0) {
            if (param_1[0x122] != 0) {
              (**(code **)(param_1[0x122] + 0x18))(param_1[0x123]);
            }
            param_1[0x122] = 0;
          }
          goto LAB_103e5ce80;
        }
        puVar5 = &UNK_10b4cdd90;
        uVar7 = 0x2a;
        puVar4 = &UNK_109beb92c;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar4,uVar7,puVar5);
      goto LAB_103e5cf64;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beb784,0x1b,&UNK_10b4cdc40);
LAB_103e5cf64:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5cf68);
  (*pcVar1)();
}

