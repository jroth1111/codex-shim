
undefined8 * FUN_1089a554c(void)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  puVar4 = (undefined8 *)_malloc(0x30);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x2066754268746150;
    *puVar4 = 0x6574756c6f736241;
    puVar4[3] = 0x7469772064657a69;
    puVar4[2] = 0x6c61697265736564;
    puVar4[5] = 0x6874617020657361;
    puVar4[4] = 0x6220612074756f68;
    return puVar4;
  }
  uVar5 = func_0x0001087c9084(1,0x30);
  uStack_88 = 0;
  puStack_80 = (undefined8 *)0x1;
  uStack_78 = 0;
  uStack_60 = 0x60000020;
  puStack_70 = &uStack_88;
  puStack_68 = &UNK_10b33fc10;
  uStack_90 = uVar5;
  iVar3 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                    (&uStack_90,&puStack_70);
  uVar1 = uStack_78;
  if (iVar3 == 0) {
    puVar4 = puStack_80;
    if (uStack_78 < uStack_88) {
      if (uStack_78 == 0) {
        _free(puStack_80);
        puVar4 = (undefined8 *)0x1;
      }
      else {
        puVar4 = (undefined8 *)_realloc(puStack_80,uStack_78);
        if (puVar4 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,uVar1);
          goto LAB_1089a56b8;
        }
      }
    }
    if ((uVar5 & 3) == 1) {
      uVar6 = *(undefined8 *)(uVar5 - 1);
      puVar7 = *(undefined8 **)(uVar5 + 7);
      pcVar2 = (code *)*puVar7;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar6);
      }
      if (puVar7[1] != 0) {
        _free(uVar6);
      }
      _free((undefined8 *)(uVar5 - 1));
    }
    return puVar4;
  }
  func_0x000108a07a3c(&UNK_108e5d687,0x37,&uStack_51,&UNK_10b33fd08,&UNK_10b33fc40);
LAB_1089a56b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1089a56bc);
  (*pcVar2)();
}

