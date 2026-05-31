
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5e0f4(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  code *pcVar8;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined4 auStack_798 [452];
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  undefined1 *puStack_68;
  ulong *puStack_60;
  undefined1 *puStack_58;
  
  LOAcquire();
  uVar2 = *param_1;
  *param_1 = uVar2 ^ 3;
  LORelease();
  uVar7 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8c0,0x23,&UNK_10b4cdd30);
LAB_103e5e224:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb8e3,0x25,&UNK_10b4cdd48);
    param_1 = unaff_x19;
LAB_103e5e23c:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (unaff_x20,&DAT_1060edbcc);
    *(undefined1 *)(unaff_x20 + 0x48) = 1;
LAB_103e5e254:
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x30);
    *(ulong *)(unaff_x20 + 0x30) = unaff_x21;
    puVar9 = param_1 + 6;
    iVar1 = (int)*puVar9;
    if (iVar1 == 1) {
LAB_103e5e178:
      uVar5 = uStack_88;
      if (param_1[7] == 0x8000000000000003) {
        uVar2 = param_1[9];
        if (uVar2 != 0) {
          puVar10 = (undefined8 *)param_1[10];
          pcVar8 = (code *)*puVar10;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar2);
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
LAB_103e5e270:
      uVar5 = uStack_88;
      if (iVar1 == 0) {
        FUN_103dbe4a0(param_1 + 7);
      }
    }
    _memcpy(puVar9,auStack_798,0x710);
    if (*(char *)(unaff_x20 + 0x48) == '\x01') {
LAB_103e5e2b8:
      *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
    }
    else if (*(char *)(unaff_x20 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (unaff_x20,&DAT_1060edbcc);
      *(undefined1 *)(unaff_x20 + 0x48) = 1;
      goto LAB_103e5e2b8;
    }
LAB_103e5e2bc:
    puStack_70 = param_1;
    lVar3 = func_0x00010610dbf8(param_1 + 4,&puStack_70);
    uStack_80 = 1;
    if (lVar3 != 0) {
      uStack_80 = 2;
    }
    LOAcquire();
    uStack_78 = *param_1;
    *param_1 = uStack_78 + uStack_80 * -0x40;
    LORelease();
    uStack_78 = uStack_78 >> 6;
    if (uStack_80 <= uStack_78) {
      if (uStack_78 == uStack_80) {
        FUN_103d8d630(param_1);
        _free(param_1);
      }
      return;
    }
    puStack_70 = &uStack_78;
    puStack_68 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_60 = &uStack_80;
    puStack_58 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_current____sub__108b37960,&puStack_70,&UNK_10b4cdd60);
  }
  else {
    if ((uVar7 >> 1 & 1) != 0) goto LAB_103e5e224;
    if ((uVar7 >> 3 & 1) == 0) {
      auStack_798[0] = 2;
      unaff_x21 = param_1[5];
      unaff_x20 = (*
                  ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                  )();
      if (*(char *)(unaff_x20 + 0x48) == '\x01') goto LAB_103e5e254;
      if (*(char *)(unaff_x20 + 0x48) != '\x02') goto LAB_103e5e23c;
      uStack_88 = 0;
      puVar9 = param_1 + 6;
      iVar1 = (int)*puVar9;
      if (iVar1 != 1) goto LAB_103e5e270;
      goto LAB_103e5e178;
    }
    if ((uVar7 >> 4 & 1) == 0) goto LAB_103e5e2bc;
    if (param_1[0xea] != 0) {
      (**(code **)(param_1[0xea] + 0x10))(param_1[0xeb]);
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
            if (param_1[0xea] != 0) {
              (**(code **)(param_1[0xea] + 0x18))(param_1[0xeb]);
            }
            param_1[0xea] = 0;
          }
          goto LAB_103e5e2bc;
        }
        puVar6 = &UNK_10b4cdd90;
        uVar5 = 0x2a;
        puVar4 = &UNK_109beb92c;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar4,uVar5,puVar6);
      goto LAB_103e5e3a4;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beb784,0x1b,&UNK_10b4cdc40);
LAB_103e5e3a4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x103e5e3a8);
  (*pcVar8)();
}

