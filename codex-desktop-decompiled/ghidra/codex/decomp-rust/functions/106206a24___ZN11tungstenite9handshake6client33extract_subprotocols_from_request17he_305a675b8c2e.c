
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN11tungstenite9handshake6client33extract_subprotocols_from_request17he12315174a15ed6fE
               (undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *extraout_x8;
  long unaff_x22;
  undefined8 ******ppppppuVar14;
  undefined1 auVar15 [16];
  undefined8 ******appppppuStack_1308 [500];
  undefined8 uStack_368;
  undefined1 uStack_358;
  undefined8 uStack_350;
  ulong uStack_330;
  char cStack_328;
  undefined7 uStack_327;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  byte *pbStack_130;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  byte bStack_f0;
  byte bStack_ef;
  undefined6 uStack_ee;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int aiStack_80 [2];
  long lStack_78;
  byte *pbStack_70;
  
  FUN_1062169a4(&pbStack_d0,&UNK_109bf6d67,0x16,param_2);
  if ((int)pbStack_d0 != 1) {
    param_1[1] = 0x8000000000000000;
    uVar13 = 0x15;
    goto LAB_106206854;
  }
  if (*(byte **)(param_2 + 0x28) <= pbStack_c0) {
    func_0x000108a07bdc(pbStack_c0,*(byte **)(param_2 + 0x28),&UNK_10b4da048);
    goto LAB_1062069a4;
  }
  lVar12 = *(long *)(param_2 + 0x20) + (long)pbStack_c0 * 0x68;
  pbVar2 = *(byte **)(lVar12 + 0x20);
  pbVar3 = *(byte **)(lVar12 + 0x28);
  pbVar1 = pbVar2;
  for (pbVar4 = pbVar3; pbVar4 != (byte *)0x0; pbVar4 = pbVar4 + -1) {
    if ((*pbVar1 != 9) && (0x5e < *pbVar1 - 0x20)) {
      pbStack_d0 = (byte *)0x0;
      pbStack_c8 = (byte *)0x1;
      pbStack_c0 = (byte *)0x0;
      FUN_108a93e68(&pbStack_d0,0,0x21,1,1);
      pbVar1 = pbStack_c0 + (long)pbStack_c8;
      pbVar1[8] = 0x6f;
      pbVar1[9] = 0x20;
      pbVar1[10] = 99;
      pbVar1[0xb] = 0x6f;
      pbVar1[0xc] = 0x6e;
      pbVar1[0xd] = 0x76;
      pbVar1[0xe] = 0x65;
      pbVar1[0xf] = 0x72;
      pbVar1[0] = 0x66;
      pbVar1[1] = 0x61;
      pbVar1[2] = 0x69;
      pbVar1[3] = 0x6c;
      pbVar1[4] = 0x65;
      pbVar1[5] = 100;
      pbVar1[6] = 0x20;
      pbVar1[7] = 0x74;
      pbVar1[0x18] = 0x20;
      pbVar1[0x19] = 0x74;
      pbVar1[0x1a] = 0x6f;
      pbVar1[0x1b] = 0x20;
      pbVar1[0x1c] = 0x61;
      pbVar1[0x1d] = 0x20;
      pbVar1[0x1e] = 0x73;
      pbVar1[0x1f] = 0x74;
      pbVar1[0x10] = 0x74;
      pbVar1[0x11] = 0x20;
      pbVar1[0x12] = 0x68;
      pbVar1[0x13] = 0x65;
      pbVar1[0x14] = 0x61;
      pbVar1[0x15] = 100;
      pbVar1[0x16] = 0x65;
      pbVar1[0x17] = 0x72;
      pbVar1[0x20] = 0x72;
      param_1[2] = pbStack_c8;
      param_1[1] = pbStack_d0;
      param_1[3] = pbStack_c0 + 0x21;
      uVar13 = 0x10;
      goto LAB_106206854;
    }
    pbVar1 = pbVar1 + 1;
  }
  pbStack_130 = (byte *)0x0;
  uStack_110 = 0;
  uStack_100 = 0x2c0000002c;
  uStack_f8 = 1;
  bStack_f0 = 1;
  bStack_ef = 0;
  pbStack_120 = pbVar2;
  pbStack_118 = pbVar3;
  pbStack_108 = pbVar3;
  FUN_10621ae30(&pbStack_d0,&pbStack_120);
  pbVar1 = pbStack_c0;
  if ((int)pbStack_d0 == 1) {
    auVar15 = FUN_10621107c(pbVar2,pbStack_c8);
joined_r0x0001062067f0:
    lVar12 = auVar15._8_8_;
    if (lVar12 == 0) {
                    /* WARNING: Read-only address (ram,0x000109bf74c0) is written */
      lVar8 = 1;
    }
    else {
                    /* WARNING: Read-only address (ram,0x000109bf74c0) is written */
      lVar8 = _malloc(lVar12);
      if (lVar8 == 0) {
        uVar13 = func_0x0001087c9084(1,lVar12);
        if (lVar12 != 0) {
          _free();
        }
        uVar13 = __Unwind_Resume(uVar13);
        if (unaff_x22 != 0) {
          _free();
          FUN_1062102f8(&lStack_e8);
          uVar13 = __Unwind_Resume(uVar13);
        }
        FUN_1062102f8(&lStack_e8);
        auVar15 = __Unwind_Resume(uVar13);
        appppppuStack_1308[0x33] = (undefined8 ******)0x0;
        lVar12 = 0;
        do {
          *(long *)((long)appppppuStack_1308 + lVar12 + 8) = UNK_109bf74c0._8_8_;
          *(long *)((long)appppppuStack_1308 + lVar12) = (long)UNK_109bf74c0;
          *(undefined8 *)((long)appppppuStack_1308 + lVar12 + 0x18) = 0;
          *(undefined8 *)((long)appppppuStack_1308 + lVar12 + 0x10) = 1;
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != 0xf80);
        uStack_358 = 0;
        uStack_368 = 0;
        appppppuStack_1308[0x1f2] = (undefined8 ******)0x0;
        uStack_350 = (ulong)uStack_350._7_1_ << 0x38;
        appppppuStack_1308[0x1f1] = (undefined8 ******)0x0;
        appppppuStack_1308[0x1f0] = (undefined8 ******)0x8;
        ppppppuVar14 = appppppuStack_1308;
        FUN_10579ecd4(&uStack_330,appppppuStack_1308 + 0x1f0,auVar15._0_8_,auVar15._8_8_,&uStack_350
                      ,appppppuStack_1308,0x7c);
        if ((uStack_330 == 2) || ((uStack_330 & 1) != 0)) {
          appppppuStack_1308[0x1f1] = (undefined8 ******)0x7c;
          if (uStack_330 == 2) {
            bVar7 = cStack_328 == '\x05';
            extraout_x8[3] = -(ulong)((long)((ulong)bVar7 << 0x3f) < 0) & 0x10 ^ 0x10;
            extraout_x8[2] =
                 -(ulong)((long)((ulong)CONCAT14(bVar7,(uint)bVar7) << 0x3f) < 0) & 3 ^ 0xe;
            *(char *)(extraout_x8 + 4) = cStack_328;
            goto LAB_106206b50;
          }
          appppppuStack_1308[0x1f0] = ppppppuVar14;
          if ((uStack_330 & 1) != 0) {
            uStack_330 = 3;
            goto LAB_106206bc0;
          }
        }
        ppppppuVar14 = (undefined8 ******)CONCAT71(uStack_327,cStack_328);
        __ZN11tungstenite9handshake6server139__LT_impl_u20_tungstenite__handshake__headers__FromHttparse_LT_httparse__Request_GT__u20_for_u20_http__request__Request_LT__LP__RP__GT__GT_13from_httparse17h8c7bcbf06a38ed39E
                  (&uStack_330,appppppuStack_1308 + 0x1f0);
        lStack_250 = CONCAT71(uStack_327,cStack_328);
        if (uStack_330 != 3) {
          lStack_1a8 = lStack_280;
          lStack_1b0 = lStack_288;
          lStack_198 = lStack_270;
          lStack_1a0 = lStack_278;
          lStack_188 = lStack_260;
          lStack_190 = lStack_268;
          lStack_180 = lStack_258;
          lStack_1e8 = lStack_2c0;
          lStack_1f0 = lStack_2c8;
          lStack_1d8 = lStack_2b0;
          lStack_1e0 = lStack_2b8;
          lStack_1c8 = lStack_2a0;
          lStack_1d0 = lStack_2a8;
          lStack_1b8 = lStack_290;
          lStack_1c0 = lStack_298;
          lStack_228 = lStack_300;
          lStack_230 = lStack_308;
          lStack_218 = lStack_2f0;
          lStack_220 = lStack_2f8;
          lStack_208 = lStack_2e0;
          lStack_210 = lStack_2e8;
          lStack_1f8 = lStack_2d0;
          lStack_200 = lStack_2d8;
          lStack_248 = lStack_320;
          lStack_238 = lStack_310;
          lStack_240 = lStack_318;
LAB_106206bc0:
          *extraout_x8 = (long)ppppppuVar14;
          extraout_x8[1] = uStack_330;
          extraout_x8[0x17] = lStack_1a8;
          extraout_x8[0x16] = lStack_1b0;
          extraout_x8[0x19] = lStack_198;
          extraout_x8[0x18] = lStack_1a0;
          extraout_x8[0x1b] = lStack_188;
          extraout_x8[0x1a] = lStack_190;
          extraout_x8[0x1c] = lStack_180;
          extraout_x8[0xf] = lStack_1e8;
          extraout_x8[0xe] = lStack_1f0;
          extraout_x8[0x11] = lStack_1d8;
          extraout_x8[0x10] = lStack_1e0;
          extraout_x8[0x13] = lStack_1c8;
          extraout_x8[0x12] = lStack_1d0;
          extraout_x8[0x15] = lStack_1b8;
          extraout_x8[0x14] = lStack_1c0;
          extraout_x8[7] = lStack_228;
          extraout_x8[6] = lStack_230;
          extraout_x8[9] = lStack_218;
          extraout_x8[8] = lStack_220;
          extraout_x8[0xb] = lStack_208;
          extraout_x8[10] = lStack_210;
          extraout_x8[0xd] = lStack_1f8;
          extraout_x8[0xc] = lStack_200;
          extraout_x8[3] = lStack_248;
          extraout_x8[2] = lStack_250;
          extraout_x8[5] = lStack_238;
          extraout_x8[4] = lStack_240;
          return;
        }
        extraout_x8[3] = lStack_320;
        extraout_x8[2] = lStack_250;
        extraout_x8[5] = lStack_310;
        extraout_x8[4] = lStack_318;
LAB_106206b50:
        extraout_x8[1] = 4;
                    /* WARNING: Read-only address (ram,0x000109bf74c0) is written */
        return;
      }
      _memcpy(lVar8,auVar15._0_8_,lVar12);
      if (lVar12 == -0x8000000000000000) goto LAB_1062067cc;
    }
    plVar9 = (long *)_malloc(0x60);
    if (plVar9 == (long *)0x0) {
LAB_1062069a4:
      func_0x0001087c9084(8,0x60);
LAB_1062069b0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1062069b4);
      (*pcVar6)();
    }
    *plVar9 = lVar12;
    plVar9[1] = lVar8;
    plVar9[2] = lVar12;
    lStack_e8 = 4;
    lStack_d8 = 1;
    uStack_90 = CONCAT62(uStack_ee,CONCAT11(bStack_ef,bStack_f0));
    uStack_98 = CONCAT71(uStack_f7,uStack_f8);
    pbStack_a8 = pbStack_108;
    uStack_b0 = uStack_110;
    uStack_a0 = uStack_100;
    pbStack_b8 = pbStack_118;
    pbStack_c0 = pbStack_120;
    lVar12 = 1;
    plStack_e0 = plVar9;
    if ((bStack_ef & 1) == 0) {
      lVar8 = 0;
      pbStack_d0 = pbVar1;
      pbStack_c8 = pbVar3;
      do {
        pbVar1 = pbStack_c0;
        lVar12 = lStack_d8;
        FUN_10621ae30(aiStack_80,&pbStack_c0);
        uVar5 = uStack_90;
        if (aiStack_80[0] == 1) {
          lVar10 = lStack_78 - (long)pbStack_d0;
          pbVar1 = pbVar1 + (long)pbStack_d0;
          pbStack_d0 = pbStack_70;
          auVar15 = FUN_10621107c(pbVar1,lVar10);
          if (auVar15._8_8_ == 0) goto LAB_106206958;
LAB_1062068e8:
          lVar11 = auVar15._8_8_;
          lVar10 = _malloc(lVar11);
          if (lVar10 == 0) {
            func_0x0001087c9084(1,lVar11);
            goto LAB_1062069b0;
          }
          _memcpy(lVar10,auVar15._0_8_,lVar11);
          if (lVar11 == -0x8000000000000000) break;
        }
        else {
          if ((uStack_90 & 0x100) != 0) break;
          uStack_90._0_2_ = CONCAT11(1,(undefined1)uStack_90);
          if (((uVar5 & 1) == 0) && (pbStack_c8 == pbStack_d0)) break;
          auVar15 = FUN_10621107c(pbStack_c0 + (long)pbStack_d0,(long)pbStack_c8 - (long)pbStack_d0)
          ;
          if (auVar15._8_8_ != 0) goto LAB_1062068e8;
LAB_106206958:
          lVar11 = 0;
          lVar10 = 1;
        }
        if (lVar12 == lStack_e8) {
          FUN_108a93e68(&lStack_e8,lVar12,1,8,0x18);
          plVar9 = plStack_e0;
        }
        *(long *)((long)plVar9 + lVar8 + 0x18) = lVar11;
        *(long *)((long)plVar9 + lVar8 + 0x20) = lVar10;
        *(long *)((long)plVar9 + lVar8 + 0x28) = lVar11;
        lVar12 = lVar12 + 1;
        lVar8 = lVar8 + 0x18;
        lStack_d8 = lVar12;
      } while ((uStack_90 & 0x100) == 0);
    }
  }
  else {
    if (((bStack_ef & 1) == 0) && ((bStack_ef = 1, (bStack_f0 & 1) != 0 || (pbVar3 != (byte *)0x0)))
       ) {
      auVar15 = FUN_10621107c(pbStack_120,pbVar3);
      pbVar1 = pbStack_130;
      goto joined_r0x0001062067f0;
    }
LAB_1062067cc:
    lVar12 = 0;
    lStack_e8 = 0;
    plStack_e0 = (long *)0x8;
  }
  param_1[1] = lStack_e8;
  param_1[2] = plStack_e0;
  uVar13 = 0x15;
  param_1[3] = lVar12;
LAB_106206854:
  *param_1 = uVar13;
  return;
}

