
void FUN_101621a1c(long *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined5 uVar4;
  undefined3 uVar5;
  undefined5 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lStack_360;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined2 uStack_230;
  byte bStack_22e;
  undefined5 uStack_22d;
  undefined3 uStack_228;
  undefined5 uStack_225;
  undefined3 uStack_220;
  undefined5 uStack_21d;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined5 uStack_1d0;
  undefined3 uStack_1cb;
  undefined5 uStack_1c8;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  long lStack_1bb;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined5 uStack_158;
  undefined3 uStack_153;
  undefined5 uStack_150;
  long lStack_14b;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  byte bStack_ee;
  undefined5 uStack_ed;
  undefined2 uStack_e8;
  byte bStack_e6;
  undefined5 uStack_e5;
  undefined3 uStack_e0;
  undefined5 uStack_dd;
  undefined3 uStack_d8;
  undefined5 uStack_d5;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  bVar20 = *(byte *)(param_2 + 0x592);
  if (bVar20 < 2) {
    if (bVar20 != 0) {
      func_0x000108a07af4(&UNK_10b24fab0);
LAB_101621f88:
      func_0x000108a07b10(&UNK_10b24fab0);
LAB_101621f94:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x101621f98);
      (*pcVar9)();
    }
    *(undefined1 *)((long)param_2 + 0x2c95) = 1;
    *(undefined4 *)((long)param_2 + 0x2c91) = 0x101;
    __ZN9codex_api8provider8Provider22websocket_url_for_path17h7238e6f032e3b204E
              (&lStack_260,param_2[0x18],&UNK_108ca551d,9);
    lVar8 = lStack_210;
    lVar7 = lStack_218;
    uVar6 = uStack_21d;
    uVar5 = uStack_220;
    uVar4 = uStack_225;
    bVar20 = bStack_22e;
    uVar3 = uStack_230;
    lVar11 = lStack_238;
    lVar17 = lStack_240;
    lVar15 = lStack_248;
    lVar18 = lStack_250;
    lVar19 = lStack_258;
    lVar16 = lStack_260;
    if (lStack_260 != -0x8000000000000000) {
      uVar12 = CONCAT35(uStack_228,uStack_22d);
      *(undefined1 *)((long)param_2 + 0x2c94) = 1;
      *(undefined1 *)((long)param_2 + 0x2c92) = 0;
      lStack_238 = param_2[5];
      lStack_240 = param_2[4];
      lVar21 = param_2[6];
      uStack_228 = (undefined3)param_2[7];
      uStack_225 = (undefined5)((ulong)param_2[7] >> 0x18);
      uStack_230 = (undefined2)lVar21;
      bStack_22e = (byte)((ulong)lVar21 >> 0x10);
      uStack_22d = (undefined5)((ulong)lVar21 >> 0x18);
      lStack_218 = param_2[9];
      lStack_208 = param_2[0xb];
      lStack_210 = param_2[10];
      uStack_220 = (undefined3)param_2[8];
      uStack_21d = (undefined5)((ulong)param_2[8] >> 0x18);
      lStack_258 = param_2[1];
      lStack_260 = *param_2;
      lStack_248 = param_2[3];
      lStack_250 = param_2[2];
      *(undefined1 *)((long)param_2 + 0x2c91) = 0;
      lStack_f8 = param_2[0x11];
      lStack_100 = param_2[0x10];
      lVar22 = param_2[0x13];
      lVar21 = param_2[0x12];
      uStack_e8 = (undefined2)lVar22;
      bStack_e6 = (byte)((ulong)lVar22 >> 0x10);
      uStack_e5 = (undefined5)((ulong)lVar22 >> 0x18);
      uStack_f0 = (undefined2)lVar21;
      bStack_ee = (byte)((ulong)lVar21 >> 0x10);
      uStack_ed = (undefined5)((ulong)lVar21 >> 0x18);
      lStack_c8 = param_2[0x17];
      lStack_d0 = param_2[0x16];
      uStack_d8 = (undefined3)param_2[0x15];
      uStack_d5 = (undefined5)((ulong)param_2[0x15] >> 0x18);
      uStack_e0 = (undefined3)param_2[0x14];
      uStack_dd = (undefined5)((ulong)param_2[0x14] >> 0x18);
      lStack_118 = param_2[0xd];
      lStack_120 = param_2[0xc];
      lStack_108 = param_2[0xf];
      lStack_110 = param_2[0xe];
      __ZN9codex_api8endpoint19responses_websocket21merge_request_headers17h6be3cb1e9f25e15fE
                (param_2 + 0x1c,param_2[0x18],&lStack_260,&lStack_120);
      *(undefined1 *)((long)param_2 + 0x2c93) = 1;
      lVar21 = *(long *)(param_2[0x18] + 0xf8);
      (**(code **)(lVar21 + 0x18))
                (*(long *)(param_2[0x18] + 0xf0) +
                 (*(long *)(lVar21 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,param_2 + 0x1c);
      *(undefined1 *)((long)param_2 + 0x2c94) = 0;
      *(undefined1 *)((long)param_2 + 0x2c93) = 0;
      lStack_f8 = param_2[0x21];
      lStack_100 = param_2[0x20];
      lVar24 = param_2[0x23];
      lVar23 = param_2[0x22];
      uStack_e8 = (undefined2)lVar24;
      bStack_e6 = (byte)((ulong)lVar24 >> 0x10);
      uStack_e5 = (undefined5)((ulong)lVar24 >> 0x18);
      uStack_f0 = (undefined2)lVar23;
      bStack_ee = (byte)((ulong)lVar23 >> 0x10);
      uStack_ed = (undefined5)((ulong)lVar23 >> 0x18);
      lVar22 = param_2[0x25];
      lVar21 = param_2[0x24];
      lStack_c8 = param_2[0x27];
      lStack_d0 = param_2[0x26];
      uStack_d8 = (undefined3)lVar22;
      uStack_d5 = (undefined5)((ulong)lVar22 >> 0x18);
      uStack_e0 = (undefined3)lVar21;
      uStack_dd = (undefined5)((ulong)lVar21 >> 0x18);
      lStack_118 = param_2[0x1d];
      lStack_120 = param_2[0x1c];
      lStack_108 = param_2[0x1f];
      lStack_110 = param_2[0x1e];
      plVar14 = (long *)param_2[0x19];
      if ((plVar14 != (long *)0x0) && (lVar10 = *plVar14, *plVar14 = lVar10 + 1, lVar10 < 0))
      goto LAB_101621f94;
      uStack_228 = (undefined3)lVar24;
      param_2[0x2d] = lStack_f8;
      param_2[0x2c] = lStack_100;
      param_2[0x2f] = lVar24;
      param_2[0x2e] = lVar23;
      param_2[0x31] = lVar22;
      param_2[0x30] = lVar21;
      param_2[0x33] = lStack_c8;
      param_2[0x32] = lStack_d0;
      param_2[0x29] = lStack_118;
      param_2[0x28] = lStack_120;
      param_2[0x2b] = lStack_108;
      param_2[0x2a] = lStack_110;
      param_2[0x34] = lVar16;
      param_2[0x35] = lVar19;
      param_2[0x36] = lVar18;
      param_2[0x38] = lVar17;
      param_2[0x37] = lVar15;
      param_2[0x39] = lVar11;
      *(undefined2 *)(param_2 + 0x3a) = uVar3;
      *(byte *)((long)param_2 + 0x1d2) = bVar20;
      param_2[0x3d] = lVar7;
      param_2[0x3c] = CONCAT53(uVar6,uVar5);
      *(ulong *)((long)param_2 + 0x1db) = CONCAT35(uVar5,uVar4);
      *(undefined8 *)((long)param_2 + 0x1d3) = uVar12;
      param_2[0x3e] = lVar8;
      param_2[0x3f] = (long)plVar14;
      *(undefined1 *)(param_2 + 0x591) = 0;
      lStack_260 = lStack_120;
      lStack_258 = lStack_118;
      lStack_250 = lStack_110;
      lStack_248 = lStack_108;
      lStack_240 = lStack_100;
      lStack_238 = lStack_f8;
      uStack_230 = uStack_f0;
      bStack_22e = bStack_ee;
      uStack_22d = uStack_ed;
      uStack_225 = uStack_e5;
      uStack_220 = uStack_e0;
      uStack_21d = uStack_dd;
      lStack_218 = lVar22;
      lStack_210 = lStack_d0;
      lStack_208 = lStack_c8;
      goto LAB_101621d1c;
    }
    uStack_81 = (undefined1)lStack_258;
    puStack_80 = &uStack_81;
    puStack_78 = &
                 __ZN62__LT_url__parser__ParseError_u20_as_u20_core__fmt__Display_GT_3fmt17h42838bb27ca194ddE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_118,s_failed_to_build_websocket_URL__108ad9863,&puStack_80);
    lVar16 = 9;
    lStack_120 = 9;
    lStack_130 = CONCAT53(uStack_ed,CONCAT12(bStack_ee,uStack_f0));
    uStack_160 = CONCAT35(uStack_e0,uStack_e5);
    *(undefined1 *)((long)param_2 + 0x2c94) = 0;
    bVar2 = *(byte *)((long)param_2 + 0x2c92);
    lStack_360 = lStack_c0;
    lStack_188 = lStack_b0;
    lStack_190 = lStack_b8;
    lStack_178 = lStack_a0;
    lStack_180 = lStack_a8;
    lStack_138 = lStack_f8;
    lStack_140 = lStack_100;
    lStack_168 = lStack_90;
    lStack_170 = lStack_98;
    lStack_14b = lStack_d0;
    uStack_158 = uStack_dd;
    uStack_153 = uStack_d8;
    uStack_150 = uStack_d5;
    lVar19 = lStack_118;
    lVar18 = lStack_110;
    lVar15 = lStack_108;
    uVar3 = uStack_e8;
    bVar20 = bStack_e6;
    lVar17 = lStack_c8;
joined_r0x000101621ea4:
    if ((bVar2 & 1) != 0) {
      FUN_100def764(param_2);
    }
    if ((*(byte *)((long)param_2 + 0x2c91) & 1) != 0) {
      FUN_100def764(param_2 + 0xc);
    }
    plVar14 = (long *)param_2[0x19];
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      *plVar14 = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001017ae870();
      }
    }
    plVar14 = (long *)param_2[0x1a];
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      *plVar14 = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b7fbeb871479c9cE(param_2 + 0x1a);
      }
    }
  }
  else {
    if (bVar20 != 3) goto LAB_101621f88;
LAB_101621d1c:
    FUN_10161f2b4(&lStack_120,param_2 + 0x28,param_3);
    lVar17 = lStack_c8;
    bVar20 = bStack_e6;
    uVar3 = uStack_e8;
    lVar15 = lStack_108;
    lVar18 = lStack_110;
    lVar19 = lStack_118;
    lVar16 = lStack_120;
    if (lStack_120 == 0x13) {
      *param_1 = 0x13;
      uVar13 = 3;
      goto LAB_101621f58;
    }
    lStack_1a8 = lStack_f8;
    lStack_1b0 = lStack_100;
    lStack_1a0 = CONCAT53(uStack_ed,CONCAT12(bStack_ee,uStack_f0));
    uStack_1c8 = uStack_dd;
    uStack_1d0 = uStack_e5;
    uStack_1cb = uStack_e0;
    lStack_1bb = lStack_d0;
    uStack_1c3 = uStack_d8;
    uStack_1c0 = uStack_d5;
    lStack_1e8 = lStack_a0;
    lStack_1f0 = lStack_a8;
    lStack_1d8 = lStack_90;
    lStack_1e0 = lStack_98;
    lStack_1f8 = lStack_b0;
    lStack_200 = lStack_b8;
    FUN_100cbfaac(param_2 + 0x28);
    if (lVar16 != 0x12) {
      uStack_160 = CONCAT35(uStack_1cb,uStack_1d0);
      *(undefined1 *)((long)param_2 + 0x2c93) = 0;
      *(undefined1 *)((long)param_2 + 0x2c94) = 0;
      bVar2 = *(byte *)((long)param_2 + 0x2c92);
      lStack_360 = lStack_c0;
      lStack_188 = lStack_1f8;
      lStack_190 = lStack_200;
      lStack_178 = lStack_1e8;
      lStack_180 = lStack_1f0;
      lStack_138 = lStack_1a8;
      lStack_140 = lStack_1b0;
      lStack_130 = lStack_1a0;
      lStack_168 = lStack_1d8;
      lStack_170 = lStack_1e0;
      lStack_14b = lStack_1bb;
      uStack_158 = uStack_1c8;
      uStack_153 = uStack_1c3;
      uStack_150 = uStack_1c0;
      goto joined_r0x000101621ea4;
    }
    lStack_298 = lVar19;
    lStack_290 = lVar18;
    lStack_288 = lVar15;
    uStack_278 = CONCAT53(uStack_1c0,uStack_1c3);
    uStack_280 = CONCAT53(uStack_1c8,uStack_1cb);
    lStack_270 = lStack_1bb;
    uVar12 = *(undefined8 *)(param_2[0x18] + 0xb0);
    uVar1 = *(undefined4 *)(param_2[0x18] + 0xb8);
    *(undefined1 *)((long)param_2 + 0x2c95) = 0;
    func_0x0001017eea70(&lStack_120,&lStack_1b0,uVar12,uVar1,bVar20 & 1,&lStack_298,&uStack_280,
                        param_2[0x1a],param_2[0x1b]);
    lVar17 = lStack_d0;
    bVar20 = bStack_ee;
    uVar3 = uStack_f0;
    lVar15 = lStack_110;
    lVar18 = lStack_118;
    lVar19 = lStack_120;
    lStack_138 = lStack_100;
    lStack_140 = lStack_108;
    lStack_130 = lStack_f8;
    uStack_160 = CONCAT17(bStack_e6,CONCAT25(uStack_e8,uStack_ed));
    uStack_158 = uStack_e5;
    lStack_14b = CONCAT53(uStack_d5,uStack_d8);
    uStack_153 = uStack_e0;
    uStack_150 = uStack_dd;
    *(undefined2 *)((long)param_2 + 0x2c93) = 0;
    plVar14 = (long *)param_2[0x19];
    lStack_360 = lStack_c8;
    if (plVar14 != (long *)0x0) {
      lVar16 = *plVar14;
      *plVar14 = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001017ae870(param_2 + 0x19);
      }
    }
    lVar16 = 0x12;
  }
  *param_1 = lVar16;
  param_1[1] = lVar19;
  param_1[2] = lVar18;
  param_1[3] = lVar15;
  param_1[5] = lStack_138;
  param_1[4] = lStack_140;
  param_1[6] = lStack_130;
  *(undefined2 *)(param_1 + 7) = uVar3;
  *(byte *)((long)param_1 + 0x3a) = bVar20;
  *(ulong *)((long)param_1 + 0x43) = CONCAT35(uStack_153,uStack_158);
  *(undefined8 *)((long)param_1 + 0x3b) = uStack_160;
  param_1[10] = lStack_14b;
  param_1[9] = CONCAT53(uStack_150,uStack_153);
  param_1[0xb] = lVar17;
  param_1[0xc] = lStack_360;
  param_1[0x12] = lStack_168;
  param_1[0x11] = lStack_170;
  param_1[0x10] = lStack_178;
  param_1[0xf] = lStack_180;
  uVar13 = 1;
  param_1[0xe] = lStack_188;
  param_1[0xd] = lStack_190;
LAB_101621f58:
  *(undefined1 *)(param_2 + 0x592) = uVar13;
  return;
}

