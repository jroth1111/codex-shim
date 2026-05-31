
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10151f544(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  ulong unaff_x21;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  undefined **ppuStack_80;
  undefined2 uStack_38;
  
  lVar6 = *param_1;
  bVar3 = *(byte *)(lVar6 + 0x4d9);
  if (bVar3 < 2) {
    if ((*(byte *)(lVar6 + 0x339) & 1) == 0) {
      if (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        puStack_e8 = &UNK_109b94303;
        puStack_e0 = &
                     __ZN68__LT_rustls__enums__AlertDescription_u20_as_u20_core__fmt__Debug_GT_3fmt17h49cd08749eb8f22aE
        ;
        puStack_a0 = &UNK_109b96a39;
        uStack_98 = 0x14;
        ppuStack_80 = &puStack_e8;
        pcStack_88 = s_Sending_warning_alert_108b2b917;
        uStack_d8 = 0;
        puStack_d0 = &UNK_109b96a39;
        uStack_c0 = 0;
        uStack_c8 = 0x14;
        pcStack_b8 = 
        "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rustls-0.23.36/src/common_state.rs"
        ;
        uStack_a8 = 4;
        uStack_b0 = 0x65;
        uStack_90 = 0x24900000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_d8);
      }
      *(undefined2 *)(lVar6 + 0x339) = 0x101;
      uStack_38 = 4;
      uStack_d8 = 0x8000000000000001;
      puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffff00000000);
      __ZN6rustls12common_state11CommonState8send_msg17he7b5eb2b43baa157E
                (lVar6,&uStack_d8,*(char *)(lVar6 + 0x49) == '\x02');
      bVar3 = *(byte *)(lVar6 + 0x4d9);
    }
    *(byte *)(lVar6 + 0x4d9) = bVar3 | 2;
  }
  uVar8 = 1;
  do {
    if (*(long *)(lVar6 + 0xb0) == 0) {
      auVar10 = (**(code **)(*(long *)(lVar6 + 0x4b0) + 0x30))
                          (*(undefined8 *)(lVar6 + 0x4a8),param_2);
      uVar7 = auVar10._8_8_;
      if ((auVar10._0_8_ & 1) == 0) {
        if ((uVar7 != 0) && (cVar4 = FUN_100c355d4(uVar7), cVar4 == '\a')) {
          if ((uVar7 & 3) == 1) {
            uVar8 = *(undefined8 *)(uVar7 - 1);
            puVar9 = *(undefined8 **)(uVar7 + 7);
            pcVar5 = (code *)*puVar9;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(uVar8);
            }
            if (puVar9[1] != 0) {
              _free(uVar8);
            }
            _free((undefined8 *)(uVar7 - 1));
          }
          uVar7 = 0;
        }
LAB_10151f734:
        uVar8 = 0;
        unaff_x21 = uVar7;
      }
      else {
        uVar8 = 1;
      }
      goto LAB_10151f738;
    }
    auVar10 = FUN_100752320(lVar6 + 0x490,lVar6,param_2);
    uVar7 = auVar10._8_8_;
    if (auVar10._0_8_ == 2) goto LAB_10151f6ac;
    if ((auVar10._0_8_ & 1) != 0) goto LAB_10151f734;
    unaff_x21 = uVar7;
  } while (uVar7 != 0);
  uVar8 = 0;
LAB_10151f6ac:
  unaff_x21 = 0x1700000003;
LAB_10151f738:
  auVar10._8_8_ = unaff_x21;
  auVar10._0_8_ = uVar8;
  return auVar10;
}

