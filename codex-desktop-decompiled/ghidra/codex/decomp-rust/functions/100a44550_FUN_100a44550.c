
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a44550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uStack0000000000000028;
  undefined1 *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  *(char **)(unaff_x29 + -0x98) = s__http_upgrade_proxy_client_conn_f_108acec63;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x70;
  puStack0000000000000030 = &stack0x000002c0;
  uStack0000000000000028 = 1;
  uStack0000000000000038 = 1;
  uStack0000000000000040 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000028);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000550);
    if (iVar3 != 0) {
      *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x00000280;
      *(undefined **)(unaff_x29 + -0xe8) = &DAT_1061c2098;
      uVar8 = *unaff_x25;
      *(undefined8 *)(unaff_x24 + 0xa8) = unaff_x25[1];
      *(undefined8 *)(unaff_x24 + 0xa0) = uVar8;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000002f0);
    }
  }
  plVar5 = *(long **)(unaff_x29 + -0xb0);
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)plVar5[1];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar6);
    }
    if (puVar7[1] != 0) {
      _free(lVar6);
    }
  }
  _free(plVar5);
  *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
  return 0;
}

