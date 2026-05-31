
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core2h25proto7streams4recv4Recv18ensure_can_reserve17h6921f071f09226f5E
               (undefined2 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  if (*(char *)(param_2 + 0x9c) == '\x01') {
    *(undefined1 *)param_1 = 4;
    return;
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
    bVar4 = bRam000000010b636b70;
    if (bRam000000010b636b70 - 1 < 2) {
LAB_105a8b480:
      iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (lRam000000010b636b60,bVar4);
      if (iVar5 != 0) {
        lStack_a8 = lRam000000010b636b60 + 0x30;
        pppuStack_50 = (undefined8 ***)&UNK_109b0bdda;
        puStack_48 = (undefined *)0x8f;
        pppuStack_60 = &pppuStack_50;
        puStack_58 = &UNK_10b3f92b0;
        pppuStack_b8 = &pppuStack_60;
        uStack_c0 = 1;
        uStack_b0 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b636b60,&uStack_c0)
        ;
        lVar3 = lRam000000010b636b60;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppuStack_f8 = *(undefined ****)(lRam000000010b636b60 + 0x20);
          uStack_f0 = *(undefined8 *)(lRam000000010b636b60 + 0x28);
          puStack_100 = (undefined8 **)0x4;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&puStack_100);
          if (iVar5 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&puStack_100,&uStack_c0);
          }
        }
        goto LAB_105a8b6c4;
      }
    }
    else if (bRam000000010b636b70 != 0) {
      bVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE(0x10b636b60)
      ;
      if (bVar4 != 0) goto LAB_105a8b480;
    }
  }
  lVar3 = lRam000000010b636b60;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uStack_110 = *(undefined8 *)(lRam000000010b636b60 + 0x20);
    uStack_108 = *(undefined8 *)(lRam000000010b636b60 + 0x28);
    uStack_118 = 4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_118);
    if (iVar5 != 0) {
      lStack_e8 = lRam000000010b636b60 + 0x30;
      puStack_d0 = &UNK_109b0bdda;
      uStack_c8 = 0x8f;
      ppuStack_e0 = &puStack_d0;
      puStack_d8 = &UNK_10b3f92b0;
      pppuStack_f8 = &ppuStack_e0;
      puStack_100 = (undefined8 **)0x1;
      uStack_f0 = 1;
      lStack_a0 = *(long *)(lVar3 + 0x60);
      uStack_98 = *(undefined8 *)(lVar3 + 0x68);
      pppuStack_b8 = *(undefined8 ****)(lVar3 + 0x50);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x58);
      uStack_c0 = 1;
      if (pppuStack_b8 == (undefined8 ***)0x0) {
        uStack_c0 = 2;
      }
      uStack_78 = *(undefined4 *)(lVar3 + 8);
      uStack_74 = *(undefined4 *)(lVar3 + 0xc);
      pppuStack_60 = (undefined8 ***)&puStack_100;
      puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
      pppuStack_50 = &pppuStack_60;
      puStack_48 = &DAT_1061c2098;
      lStack_a8 = 1;
      if (lStack_a0 == 0) {
        lStack_a8 = 2;
      }
      uStack_88 = uStack_110;
      uStack_90 = uStack_118;
      uStack_80 = uStack_108;
      pppuStack_68 = &pppuStack_50;
      pcStack_70 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
    }
  }
LAB_105a8b6c4:
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined **)(param_1 + 4) = &UNK_10b3fb1a0;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

