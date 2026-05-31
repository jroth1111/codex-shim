
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e608cc(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  code *pcVar7;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
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
LAB_103e609f4:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8e3,0x25,&UNK_10b4cdd48);
    param_1 = unaff_x19;
LAB_103e60a0c:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (unaff_x20,&DAT_1060edbcc);
    *(undefined1 *)(unaff_x20 + 0x48) = 1;
LAB_103e60a24:
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    *(ulong *)(unaff_x20 + 0x30) = unaff_x21;
    puVar8 = param_1 + 6;
    iVar1 = (int)*puVar8;
    if (iVar1 == 1) {
LAB_103e60948:
      if (param_1[7] == 0x8000000000000003) {
        uVar2 = param_1[9];
        if (uVar2 != 0) {
          puVar10 = (undefined8 *)param_1[10];
          pcVar7 = (code *)*puVar10;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar2);
          }
          if (puVar10[1] != 0) {
            _free(uVar2);
          }
        }
      }
      else {
        func_0x000103dc018c();
      }
    }
    else {
LAB_103e60a40:
      if (iVar1 == 0) {
        FUN_103db11e4(param_1 + 7);
      }
    }
    puVar8[1] = uStack_e0;
    *puVar8 = CONCAT44(uStack_e4,uStack_e8);
    puVar8[3] = uStack_d0;
    puVar8[2] = uStack_d8;
    puVar8[0xb] = uStack_90;
    puVar8[10] = uStack_98;
    puVar8[0xd] = uStack_80;
    puVar8[0xc] = uStack_88;
    puVar8[5] = uStack_c0;
    puVar8[4] = uStack_c8;
    puVar8[7] = uStack_b0;
    puVar8[6] = uStack_b8;
    puVar8[9] = uStack_a0;
    puVar8[8] = uStack_a8;
    if (*(char *)(unaff_x20 + 0x48) == '\x01') {
LAB_103e60aa4:
      *(undefined8 *)(unaff_x20 + 0x30) = uVar9;
    }
    else if (*(char *)(unaff_x20 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (unaff_x20,&DAT_1060edbcc);
      *(undefined1 *)(unaff_x20 + 0x48) = 1;
      goto LAB_103e60aa4;
    }
LAB_103e60aa8:
    puStack_60 = param_1;
    lVar3 = func_0x000106110c98(param_1 + 4,&puStack_60);
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
        FUN_103db6ce4(param_1);
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
    if ((uVar6 >> 1 & 1) != 0) goto LAB_103e609f4;
    if ((uVar6 >> 3 & 1) == 0) {
      uStack_e8 = 2;
      unaff_x21 = param_1[5];
      unaff_x20 = (*
                  ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                  )();
      if (*(char *)(unaff_x20 + 0x48) == '\x01') goto LAB_103e60a24;
      if (*(char *)(unaff_x20 + 0x48) != '\x02') goto LAB_103e60a0c;
      uVar9 = 0;
      puVar8 = param_1 + 6;
      iVar1 = (int)*puVar8;
      if (iVar1 != 1) goto LAB_103e60a40;
      goto LAB_103e60948;
    }
    if ((uVar6 >> 4 & 1) == 0) goto LAB_103e60aa8;
    if (param_1[0x16] != 0) {
      (**(code **)(param_1[0x16] + 0x10))(param_1[0x17]);
      LOAcquire();
      uVar2 = *param_1;
      *param_1 = uVar2 & 0xffffffffffffffef;
      LORelease();
      uVar6 = (uint)uVar2;
      if ((uVar6 >> 1 & 1) == 0) {
        puVar5 = &UNK_10b4cdd78;
        uVar9 = 0x24;
        puVar4 = &UNK_109beb908;
      }
      else {
        if ((uVar6 >> 4 & 1) != 0) {
          if ((uVar6 >> 3 & 1) == 0) {
            if (param_1[0x16] != 0) {
              (**(code **)(param_1[0x16] + 0x18))(param_1[0x17]);
            }
            param_1[0x16] = 0;
          }
          goto LAB_103e60aa8;
        }
        puVar5 = &UNK_10b4cdd90;
        uVar9 = 0x2a;
        puVar4 = &UNK_109beb92c;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar4,uVar9,puVar5);
      goto LAB_103e60b8c;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beb784,0x1b,&UNK_10b4cdc40);
LAB_103e60b8c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x103e60b90);
  (*pcVar7)();
}

