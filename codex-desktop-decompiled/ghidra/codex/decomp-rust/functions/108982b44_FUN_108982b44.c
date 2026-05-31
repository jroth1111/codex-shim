
undefined8 FUN_108982b44(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined ***pppuStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar5 = *param_1 * 2;
    unaff_x20 = param_3 + param_2;
    if (param_3 + param_2 <= uVar5) {
      unaff_x20 = uVar5;
    }
    uVar5 = 8;
    if (param_5 != 1) {
      uVar5 = 4;
    }
    if (unaff_x20 <= uVar5) {
      unaff_x20 = uVar5;
    }
    uVar2 = func_0x0001089829fc(aiStack_38,*param_1,param_1[1],unaff_x20,param_4);
    unaff_x19 = param_1;
    if (aiStack_38[0] != 1) {
      *param_1 = unaff_x20;
      param_1[1] = uStack_30;
      return uVar2;
    }
  }
  func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x108982bd0;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000104270f30();
  func_0x00010436fcf0();
  pbVar3 = (byte *)__ZN3std7process5abort17hdc01e45e25b715e8E();
  uStack_58 = 0x108982be4;
  bVar1 = *pbVar3;
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      puStack_88 = (undefined *)(ulong)pbVar3[1];
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_108982cb8:
          puStack_60 = (undefined1 *)&puStack_50;
          uVar2 = func_0x000108997aa8(pbVar3,(long)&uStack_68 + 7,&UNK_10b309e20);
          return uVar2;
        }
        puStack_78 = *(undefined **)(pbVar3 + 0x10);
        uStack_70 = *(ulong *)(pbVar3 + 0x18);
        goto LAB_108982c88;
      }
      puStack_88 = *(undefined **)(pbVar3 + 8);
    }
    ppuStack_90 = (undefined **)CONCAT71(ppuStack_90._1_7_,1);
    puStack_60 = (undefined1 *)&puStack_50;
    uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&ppuStack_90,&UNK_10b3118c8,&UNK_10b304750);
  }
  else {
    if (bVar1 != 0xd) {
      if (bVar1 == 0xe) {
        uVar2 = *(undefined8 *)(pbVar3 + 0x10);
        uVar4 = *(undefined8 *)(pbVar3 + 0x18);
      }
      else {
        if (bVar1 != 0xf) goto LAB_108982cb8;
        uVar2 = *(undefined8 *)(pbVar3 + 8);
        uVar4 = *(undefined8 *)(pbVar3 + 0x10);
      }
      uStack_58 = 0x108982be4;
      uStack_70 = unaff_x20;
      uStack_68 = unaff_x19;
      puStack_60 = (undefined1 *)&puStack_50;
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_a8,uVar2,uVar4);
      ppuStack_90 = ppuStack_a0;
      puStack_88 = (undefined *)uStack_98;
      pppuStack_80 = &ppuStack_90;
      puStack_78 = &DAT_1042a16a4;
      uVar2 = func_0x000108997cdc(s_unknown_field______there_are_no_f_108ac292b,&pppuStack_80);
      if ((uStack_a8 & 0x7fffffffffffffff) != 0) {
        _free(ppuStack_a0);
      }
      return uVar2;
    }
    puStack_78 = *(undefined **)(pbVar3 + 8);
    uStack_70 = *(ulong *)(pbVar3 + 0x10);
LAB_108982c88:
    ppuStack_90 = &puStack_78;
    puStack_88 = &DAT_1042a16a4;
    puStack_60 = (undefined1 *)&puStack_50;
    uVar2 = func_0x000108997cdc(s_unknown_field______there_are_no_f_108ac292b,&ppuStack_90);
  }
  return uVar2;
}

