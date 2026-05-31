
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eea0cc(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  undefined8 *******pppppppuVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 *****pppppuStack_f08;
  undefined ***pppuStack_f00;
  undefined8 uStack_ef8;
  long lStack_ef0;
  undefined **ppuStack_ee8;
  undefined *puStack_ee0;
  undefined *puStack_ed8;
  undefined8 uStack_ed0;
  long lStack_ec8;
  undefined8 ******ppppppuStack_ec0;
  undefined8 uStack_eb8;
  long lStack_eb0;
  long lStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  char *pcStack_e78;
  undefined8 ******ppppppuStack_e70;
  undefined8 ******ppppppuStack_bc0;
  undefined *puStack_bb8;
  undefined8 ******ppppppuStack_bb0;
  undefined *puStack_ba8;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_340 [656];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uStack_b60 = 0;
  bVar5 = *(byte *)(param_2 + 0x340);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        func_0x000108a07af4(&UNK_10b236bd8);
      }
      func_0x000108a07b10();
      *(undefined1 *)(param_2 + 0x340) = 2;
      uVar14 = __Unwind_Resume();
      FUN_100d18bec(param_2 + 0x348);
      *(undefined1 *)(param_2 + 0x340) = 2;
      __Unwind_Resume(uVar14);
      auVar15 = func_0x000108a07bc4();
      pppppppuVar9 = auVar15._8_8_;
      lVar12 = *(long *)(auVar15._0_8_ + 0x28);
      if (*(char *)(lVar12 + 0x338) == '\0') {
        if (*(char *)(lVar12 + 0x338) == '\0') {
          lVar13 = 1;
          uVar11 = *(ulong *)(lVar12 + 0x330);
          while ((uVar11 & 1) == 0) {
            uVar6 = uVar11 - 2;
            if (uVar11 < 2) goto LAB_100eea720;
            uVar1 = *(ulong *)(lVar12 + 0x330);
            bVar2 = uVar1 == uVar11;
            uVar11 = uVar1;
            if (bVar2) {
              *(ulong *)(lVar12 + 0x330) = uVar6;
              ppppppuStack_ec0 = (undefined8 ******)CONCAT44(ppppppuStack_ec0._4_4_,1);
              lStack_ec8 = lVar12 + 0x310;
              _memcpy(lVar12 + 0x10,pppppppuVar9,0x300);
              *(undefined4 *)(lVar12 + 0x338) = 1;
              FUN_1060faa28(lVar12 + 0x310);
              return;
            }
          }
          lVar13 = 0;
LAB_100eea720:
          _memcpy(&ppppppuStack_ec0,pppppppuVar9,0x300);
          lStack_ec8 = lVar13;
        }
        else {
          lStack_ec8 = 0;
          _memcpy(&ppppppuStack_ec0,pppppppuVar9,0x300);
        }
        pppppppuVar9 = &ppppppuStack_ec0;
      }
      else if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              (((bRam000000010b639f20 - 1 < 2 ||
                ((bRam000000010b639f20 != 0 &&
                 (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                                    ), cVar7 != '\0')))) &&
               (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                                  ), iVar8 != 0)))) {
        lStack_eb0 = ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                     + 0x30;
        ppppppuStack_bb0 = (undefined8 ******)&UNK_108cc50c7;
        puStack_ba8 = (undefined *)0x6b;
        ppppppuStack_bc0 = &ppppppuStack_bb0;
        puStack_bb8 = &UNK_10b208fd0;
        ppppppuStack_ec0 = &ppppppuStack_bc0;
        lStack_ec8 = 1;
        uStack_eb8 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E,
                   &lStack_ec8);
        lVar12 = ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppuStack_f00 =
               *(undefined ****)
                (___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E +
                0x20);
          uStack_ef8 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                        + 0x28);
          pppppuStack_f08 = (undefined8 ******)0x2;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar3 + 0x18))(puVar4,&pppppuStack_f08);
          if (iVar8 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar4,puVar3,&pppppuStack_f08,&lStack_ec8);
          }
        }
      }
      else {
        lVar12 = ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_f18 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                        + 0x20);
          uStack_f10 = *(undefined8 *)
                        (
                        ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                        + 0x28);
          uStack_f20 = 2;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar3 + 0x18))(puVar4,&uStack_f20);
          if (iVar8 != 0) {
            lStack_ef0 = ___ZN4rmcp7service13Peer_LT_R_GT_13set_peer_info10__CALLSITE17h8813ee120bda30c7E
                         + 0x30;
            puStack_ed8 = &UNK_108cc50c7;
            uStack_ed0 = 0x6b;
            ppuStack_ee8 = &puStack_ed8;
            puStack_ee0 = &UNK_10b208fd0;
            pppuStack_f00 = &ppuStack_ee8;
            pppppuStack_f08 = (undefined8 ******)0x1;
            uStack_ef8 = 1;
            lStack_ea8 = *(long *)(lVar12 + 0x60);
            uStack_ea0 = *(undefined8 *)(lVar12 + 0x68);
            ppppppuStack_ec0 = *(undefined8 *******)(lVar12 + 0x50);
            uStack_eb8 = *(undefined8 *)(lVar12 + 0x58);
            lStack_ec8 = 1;
            if ((undefined8 *******)ppppppuStack_ec0 == (undefined8 *******)0x0) {
              lStack_ec8 = 2;
            }
            uStack_e80 = *(undefined4 *)(lVar12 + 8);
            uStack_e7c = *(undefined4 *)(lVar12 + 0xc);
            ppppppuStack_bc0 = &pppppuStack_f08;
            puStack_bb8 = (undefined *)CONCAT71(puStack_bb8._1_7_,1);
            ppppppuStack_bb0 = &ppppppuStack_bc0;
            puStack_ba8 = &DAT_1061c2098;
            lStack_eb0 = 1;
            if (lStack_ea8 == 0) {
              lStack_eb0 = 2;
            }
            uStack_e90 = uStack_f18;
            uStack_e98 = uStack_f20;
            uStack_e88 = uStack_f10;
            ppppppuStack_e70 = &ppppppuStack_bb0;
            pcStack_e78 = s__108b39f4f;
            (**(code **)(puVar3 + 0x20))(puVar4,&lStack_ec8);
          }
        }
      }
      FUN_100df1b38(pppppppuVar9);
      return;
    }
    uVar14 = *(undefined8 *)(param_2 + 0x338);
    _memcpy(param_2 + 0x348,param_2,0x338);
    *(undefined8 *)(param_2 + 0x680) = 0x8000000000000000;
    *(undefined4 *)(param_2 + 0x6d0) = 1000000000;
    *(undefined8 *)(param_2 + 0x6d8) = uVar14;
    *(undefined1 *)(param_2 + 0x11d0) = 0;
LAB_100eea148:
    func_0x000100eea7a0(&lStack_640,param_2 + 0x348,param_3);
    lVar12 = lStack_640;
    if (lStack_640 == -0x7ffffffffffffffe) {
      *param_1 = 0x12;
      uVar10 = 3;
      goto LAB_100eea394;
    }
    lStack_668 = lStack_5f0;
    lStack_670 = lStack_5f8;
    lStack_658 = lStack_5e0;
    lStack_660 = lStack_5e8;
    lStack_650 = lStack_5d8;
    lStack_6a8 = lStack_630;
    lStack_6b0 = lStack_638;
    lStack_698 = lStack_620;
    lStack_6a0 = lStack_628;
    lStack_678 = lStack_600;
    lStack_680 = lStack_608;
    lStack_688 = lStack_610;
    lStack_690 = lStack_618;
    uStack_6b8 = uStack_598;
    uStack_6c0 = uStack_5a0;
    uStack_6c8 = uStack_5a8;
    uStack_6d0 = uStack_5b0;
    uStack_6d8 = uStack_5b8;
    uStack_6e0 = uStack_5c0;
    uStack_6e8 = uStack_5c8;
    uStack_6f0 = uStack_5d0;
    FUN_100d1c894(param_2 + 0x348);
    if (lVar12 != -0x7fffffffffffffff) {
      *(long *)(param_2 + 0x1270) = lVar12;
      *(long *)(param_2 + 0x12d8) = lStack_650;
      *(long *)(param_2 + 0x1280) = lStack_6a8;
      *(long *)(param_2 + 0x1278) = lStack_6b0;
      *(long *)(param_2 + 0x1290) = lStack_698;
      *(long *)(param_2 + 0x1288) = lStack_6a0;
      *(long *)(param_2 + 0x12c0) = lStack_668;
      *(long *)(param_2 + 0x12b8) = lStack_670;
      *(long *)(param_2 + 0x12d0) = lStack_658;
      *(long *)(param_2 + 0x12c8) = lStack_660;
      *(long *)(param_2 + 0x12a0) = lStack_688;
      *(long *)(param_2 + 0x1298) = lStack_690;
      *(long *)(param_2 + 0x12b0) = lStack_678;
      *(long *)(param_2 + 0x12a8) = lStack_680;
      *(undefined8 *)(param_2 + 0x1318) = uStack_6b8;
      *(undefined8 *)(param_2 + 0x1310) = uStack_6c0;
      *(undefined8 *)(param_2 + 0x1308) = uStack_6c8;
      *(undefined8 *)(param_2 + 0x1300) = uStack_6d0;
      *(undefined8 *)(param_2 + 0x12f8) = uStack_6d8;
      *(undefined8 *)(param_2 + 0x12f0) = uStack_6e0;
      *(undefined8 *)(param_2 + 0x12e8) = uStack_6e8;
      *(undefined8 *)(param_2 + 0x12e0) = uStack_6f0;
      uStack_b58 = *(undefined8 *)(param_2 + 0x1278);
      uStack_b60 = *(undefined8 *)(param_2 + 0x1270);
      uStack_b48 = *(undefined8 *)(param_2 + 0x1288);
      uStack_b50 = *(undefined8 *)(param_2 + 0x1280);
      uStack_b38 = *(undefined8 *)(param_2 + 0x1298);
      uStack_b40 = *(undefined8 *)(param_2 + 0x1290);
      uStack_b28 = *(undefined8 *)(param_2 + 0x12a8);
      uStack_b30 = *(undefined8 *)(param_2 + 0x12a0);
      uStack_b18 = *(undefined8 *)(param_2 + 0x12b8);
      uStack_b20 = *(undefined8 *)(param_2 + 0x12b0);
      uStack_b08 = *(undefined8 *)(param_2 + 0x12c8);
      uStack_b10 = *(undefined8 *)(param_2 + 0x12c0);
      uStack_af8 = *(undefined8 *)(param_2 + 0x12d8);
      uStack_b00 = *(undefined8 *)(param_2 + 0x12d0);
      uStack_ae8 = *(undefined8 *)(param_2 + 0x12e8);
      uStack_af0 = *(undefined8 *)(param_2 + 0x12e0);
      uStack_ac8 = *(undefined8 *)(param_2 + 0x1308);
      uStack_ad0 = *(undefined8 *)(param_2 + 0x1300);
      uStack_ab8 = *(undefined8 *)(param_2 + 0x1318);
      uStack_ac0 = *(undefined8 *)(param_2 + 0x1310);
      uStack_ad8 = *(undefined8 *)(param_2 + 0x12f8);
      uStack_ae0 = *(undefined8 *)(param_2 + 0x12f0);
      _memcpy(param_2 + 0x348,&uStack_b60,0x470);
      *(undefined1 *)(param_2 + 0x7b8) = 0;
      goto LAB_100eea2dc;
    }
    *(long *)(param_2 + 0x12d8) = lStack_650;
    *(long *)(param_2 + 0x12c0) = lStack_668;
    *(long *)(param_2 + 0x12b8) = lStack_670;
    *(long *)(param_2 + 0x12d0) = lStack_658;
    *(long *)(param_2 + 0x12c8) = lStack_660;
    *(long *)(param_2 + 0x1280) = lStack_6a8;
    *(long *)(param_2 + 0x1278) = lStack_6b0;
    *(long *)(param_2 + 0x1290) = lStack_698;
    *(long *)(param_2 + 0x1288) = lStack_6a0;
    *(long *)(param_2 + 0x12a0) = lStack_688;
    *(long *)(param_2 + 0x1298) = lStack_690;
    *(long *)(param_2 + 0x12b0) = lStack_678;
    *(long *)(param_2 + 0x12a8) = lStack_680;
    *(undefined8 *)(param_2 + 0x1270) = 0x8000000000000001;
    lStack_a8 = lStack_6a8;
    lStack_b0 = lStack_6b0;
    lStack_98 = lStack_698;
    lStack_a0 = lStack_6a0;
    lStack_88 = lStack_688;
    lStack_90 = lStack_690;
    lStack_78 = lStack_678;
    lStack_80 = lStack_680;
    lStack_68 = lStack_668;
    lStack_70 = lStack_670;
    lStack_58 = lStack_658;
    lStack_60 = lStack_660;
    lStack_640 = 0x11;
    lStack_50 = lStack_650;
  }
  else {
    if (bVar5 == 3) goto LAB_100eea148;
LAB_100eea2dc:
    func_0x000100eeb13c(&lStack_640,param_2 + 0x348,param_3);
    if (lStack_640 == 0x12) {
      *param_1 = 0x12;
      uVar10 = 4;
      goto LAB_100eea394;
    }
    lStack_68 = lStack_5f0;
    lStack_70 = lStack_5f8;
    lStack_58 = lStack_5e0;
    lStack_60 = lStack_5e8;
    lStack_50 = lStack_5d8;
    lStack_a8 = lStack_630;
    lStack_b0 = lStack_638;
    lStack_98 = lStack_620;
    lStack_a0 = lStack_628;
    lStack_88 = lStack_610;
    lStack_90 = lStack_618;
    lStack_78 = lStack_600;
    lStack_80 = lStack_608;
    _memcpy(auStack_340,&uStack_5d0,0x290);
    FUN_100d18bec(param_2 + 0x348);
  }
  param_1[8] = lStack_78;
  param_1[7] = lStack_80;
  param_1[10] = lStack_68;
  param_1[9] = lStack_70;
  param_1[0xc] = lStack_58;
  param_1[0xb] = lStack_60;
  param_1[2] = lStack_a8;
  param_1[1] = lStack_b0;
  param_1[4] = lStack_98;
  param_1[3] = lStack_a0;
  *param_1 = lStack_640;
  param_1[0xd] = lStack_50;
  param_1[6] = lStack_88;
  param_1[5] = lStack_90;
  _memcpy(param_1 + 0xe,auStack_340,0x290);
  uVar10 = 1;
LAB_100eea394:
  *(undefined1 *)(param_2 + 0x340) = uVar10;
  return;
}

