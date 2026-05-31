
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_10080f468(long *param_1,long *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined7 uVar11;
  undefined1 uVar12;
  undefined7 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined7 uVar16;
  undefined1 uVar17;
  code *pcVar18;
  char cVar19;
  char cVar20;
  int iVar21;
  long lVar22;
  long ******pppppplVar23;
  long *extraout_x1;
  undefined *puVar24;
  long *plVar25;
  undefined8 ***pppuVar26;
  undefined8 ****ppppuVar27;
  ulong uVar28;
  undefined1 uVar29;
  long lVar30;
  long lVar31;
  char in_wzr;
  char cStack_361;
  undefined8 *****pppppuStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  char *pcStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long ******pppppplStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  int iStack_2d8;
  undefined1 uStack_2d4;
  undefined1 uStack_2d3;
  char cStack_2d2;
  undefined1 uStack_2d1;
  undefined4 uStack_2c4;
  undefined1 auStack_2c0 [8];
  long ******pppppplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long *****ppppplStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined8 ******ppppppuStack_278;
  undefined8 uStack_270;
  long ******pppppplStack_268;
  undefined *puStack_260;
  long *****ppppplStack_258;
  undefined8 ******ppppppuStack_250;
  undefined4 uStack_244;
  undefined1 auStack_240 [7];
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined8 *****pppppuStack_200;
  undefined8 ******ppppppuStack_1f8;
  undefined8 uStack_1f0;
  char ******ppppppcStack_1e0;
  long ******pppppplStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  
  lVar31 = *param_1;
  pcVar1 = (char *)(lVar31 + 0x10);
  cStack_361 = param_3;
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    plVar25 = param_2;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,param_2,1000000000);
    plVar25 = extraout_x1;
  }
  pppppuStack_360 = (undefined8 *****)(lVar31 + 0x200);
  uStack_358 = (char ******)param_1[1];
  lVar30 = param_1[2];
  pcVar2 = (char *)(lVar30 + 0x10);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar2,plVar25,1000000000);
  }
  cVar20 = cStack_361;
  lVar3 = lVar30 + 0x18;
  lStack_320 = lVar31 + 400;
  lVar4 = lVar31 + 0x180;
  lStack_348 = param_2[1];
  lStack_350 = *param_2;
  lStack_338 = param_2[3];
  lStack_340 = param_2[2];
  lStack_330 = param_2[4];
  pcStack_328 = &cStack_361;
  auStack_240._0_4_ = (undefined4)uStack_358;
  stack0xfffffffffffffdc4 = uStack_358._4_4_;
  lStack_318 = lVar4;
  lStack_310 = lVar3;
  if (((pppppuStack_360[2] <= (undefined8 ****)((ulong)uStack_358 & 0xffffffff)) ||
      (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
      *ppppuVar27 == (undefined8 ***)0x2)) ||
     (*(int *)((long)ppppuVar27 + 0x13c) != uStack_358._4_4_)) {
    ppppppcStack_1e0 = (char ******)(auStack_240 + 4);
    pppppplStack_1d8 = (long ******)&DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&ppppppcStack_1e0,&UNK_10b3fa588);
    goto LAB_1008102e4;
  }
  iVar6 = *(int *)(ppppuVar27 + 0xc);
  pppppplStack_1d8 = (long ******)param_2[1];
  ppppppcStack_1e0 = (char ******)*param_2;
  uStack_1c8 = (undefined1)param_2[3];
  uStack_1c7 = (undefined7)((ulong)param_2[3] >> 8);
  uStack_1d0 = (undefined1)param_2[2];
  uStack_1cf = (undefined7)((ulong)param_2[2] >> 8);
  uStack_1c0 = (undefined1)param_2[4];
  uStack_1bf = (undefined7)((ulong)param_2[4] >> 8);
  if (uStack_358._4_4_ == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb1925,0x26,&UNK_10b224010);
    goto LAB_1008102e4;
  }
  lStack_2f8 = param_2[1];
  pppppplStack_300 = (long ******)*param_2;
  uStack_2e8 = param_2[3];
  uStack_2f0 = param_2[2];
  lStack_2e0 = param_2[4];
  iStack_2d8 = uStack_358._4_4_;
  uStack_2d4 = 0;
  cStack_2d2 = cStack_361;
  if (pppppplStack_300 == (long ******)0x0) {
    uVar28 = uStack_2e8;
    if (uStack_2e8 >> 0x1f == 0) goto LAB_10080f5e0;
LAB_10080f5bc:
    uVar29 = 2;
joined_r0x00010080f5c4:
    if (pppppplStack_300 == (long ******)0x1) {
      if (uStack_2f0 != 0) {
        _free(lStack_2f8);
      }
    }
    else if (pppppplStack_300 == (long ******)0x0) {
      (**(code **)(lStack_2f8 + 0x20))(&lStack_2e0,uStack_2f0,uStack_2e8);
    }
    goto LAB_10080ffe0;
  }
  if (pppppplStack_300 == (long ******)0x1) {
    uVar28 = 0;
    if (uStack_2e8 <= uStack_2f0) {
      uVar28 = uStack_2f0 - uStack_2e8;
    }
    if (uVar28 >> 0x1f != 0) goto LAB_10080f5bc;
  }
  else {
    uVar28 = 0;
  }
LAB_10080f5e0:
  uStack_2c4 = (undefined4)uVar28;
  if (((pppppuStack_360[2] <= (undefined8 ****)((ulong)uStack_358 & 0xffffffff)) ||
      (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
      *ppppuVar27 == (undefined8 ***)0x2)) ||
     (*(int *)((long)ppppuVar27 + 0x13c) != uStack_358._4_4_)) {
LAB_100810234:
    ppppppcStack_1e0 = (char ******)(auStack_240 + 4);
    pppppplStack_1d8 = (long ******)&DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&ppppppcStack_1e0,&UNK_10b3fa588);
    goto LAB_1008102e4;
  }
  bVar7 = *(byte *)(ppppuVar27 + 0xd);
  uVar8 = bVar7 - 7;
  if (bVar7 < 7) {
    uVar8 = 6;
  }
  if (((uVar8 != 5) && ((uVar8 & 0xff) != 3)) || (*(char *)((long)ppppuVar27 + 0x69) != '\x01')) {
    uVar29 = 6 < bVar7;
    goto joined_r0x00010080f5c4;
  }
  ppppuVar27[0x14] = (undefined8 ***)((long)ppppuVar27[0x14] + uVar28);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b636a98 - 1 < 2 ||
       ((bRam000000010b636a98 != 0 &&
        (cVar19 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
                            ), cVar19 != '\0')))) &&
      (iVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
                          ), iVar21 != 0)))) {
    auStack_240._0_4_ = (undefined4)uStack_358;
    stack0xfffffffffffffdc4 = uStack_358._4_4_;
    if (((pppppuStack_360[2] <= (undefined8 ****)((ulong)uStack_358 & 0xffffffff)) ||
        (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
        *ppppuVar27 == (undefined8 ***)0x2)) ||
       (*(int *)((long)ppppuVar27 + 0x13c) != uStack_358._4_4_)) goto LAB_100810234;
    ppppppcStack_1e0 = (char ******)&uStack_2c4;
    pppppplStack_1d8 = (long ******)&UNK_10b223390;
    uStack_1d0 = SUB81(ppppuVar27 + 0x28,0);
    uStack_1cf = (undefined7)((ulong)(ppppuVar27 + 0x28) >> 8);
    uStack_1c8 = 0x90;
    uStack_1c7 = 0x10b2233;
    auStack_240._0_4_ = 1;
    stack0xfffffffffffffdc4 = 0;
    uStack_238 = SUB87(&ppppppcStack_1e0,0);
    uStack_231 = (undefined1)((ulong)&ppppppcStack_1e0 >> 0x38);
    uStack_230 = 2;
    uStack_229 = 0;
    uStack_228 = (undefined7)
                 (
                 ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
                 + 0x30);
    uStack_221 = (undefined1)
                 ((ulong)(
                         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
                         + 0x30) >> 0x38);
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (auStack_2c0,
               ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
               ,auStack_240);
  }
  else {
    ppppppcStack_1e0 = (char ******)0x2;
    uStack_1c0 = (undefined1)
                 ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
    ;
    uStack_1bf = (undefined7)
                 ((ulong)
                  ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
                 >> 8);
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      auStack_2c0 = (undefined1  [8])uStack_358;
      if (((pppppuStack_360[2] <= (undefined8 ****)((ulong)uStack_358 & 0xffffffff)) ||
          (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
          *ppppuVar27 == (undefined8 ***)0x2)) ||
         (*(int *)((long)ppppuVar27 + 0x13c) != uStack_358._4_4_)) {
        _auStack_240 = (char *****)(auStack_2c0 + 4);
        uStack_238 = 0x105abf048;
        uStack_231 = 0;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__dangling_store_key_for_stream_i_108b233d4,auStack_240,&UNK_10b3fa588);
        goto LAB_1008102e4;
      }
      _auStack_240 = (char *****)&uStack_2c4;
      uStack_238 = 0x10b223390;
      uStack_231 = 0;
      lStack_2a8 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17h02f33ac0f54b527fE
                   + 0x30;
      uStack_230 = SUB87(ppppuVar27 + 0x28,0);
      uStack_229 = (undefined1)((ulong)(ppppuVar27 + 0x28) >> 0x38);
      uStack_228 = 0x10b223390;
      uStack_221 = 0;
      pppppplStack_2b8 = (long ******)auStack_240;
      auStack_2c0 = (undefined1  [8])0x1;
      lStack_2b0 = 2;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&ppppppcStack_1e0,auStack_2c0);
    }
    lStack_2a8 = CONCAT71(uStack_1c7,uStack_1c8);
    lStack_2b0 = CONCAT71(uStack_1cf,uStack_1d0);
    pppppplStack_2b8 = pppppplStack_1d8;
    auStack_2c0 = (undefined1  [8])ppppppcStack_1e0;
    lStack_2a0 = CONCAT71(uStack_1bf,uStack_1c0);
  }
  if (auStack_2c0 != (undefined1  [8])0x2) {
    pppppplVar23 = pppppplStack_2b8;
    if (((ulong)auStack_2c0 & 1) != 0) {
      pppppplVar23 = (long ******)
                     ((long)pppppplStack_2b8 +
                     (*(long *)(lStack_2b0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (**(code **)(lStack_2b0 + 0x60))(pppppplVar23,&lStack_2a8);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_2a0 != 0)) {
    auStack_240._0_4_ = (undefined4)*(undefined8 *)(lStack_2a0 + 0x10);
    stack0xfffffffffffffdc4 = (int)((ulong)*(undefined8 *)(lStack_2a0 + 0x10) >> 0x20);
    uStack_238 = (undefined7)*(undefined8 *)(lStack_2a0 + 0x18);
    uStack_231 = (undefined1)((ulong)*(undefined8 *)(lStack_2a0 + 0x18) >> 0x38);
    ppppppcStack_1e0 = (char ******)auStack_240;
    pppppplStack_1d8 = (long ******)&DAT_100c7b3a0;
    FUN_1011d7d74(auStack_2c0,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&ppppppcStack_1e0);
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
    if (1 < bRam000000010b636ab0 - 1) {
      if (bRam000000010b636ab0 != 0) {
        cVar19 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                           );
        if (cVar19 != '\0') goto LAB_10080f9b4;
      }
      goto LAB_10080f7b4;
    }
LAB_10080f9b4:
    iVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                       (
                       ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                       );
    if (iVar21 == 0) goto LAB_10080f7b4;
    auStack_240._0_4_ = (undefined4)uStack_358;
    stack0xfffffffffffffdc4 = uStack_358._4_4_;
    if ((((undefined8 ****)((ulong)uStack_358 & 0xffffffff) < pppppuStack_360[2]) &&
        (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
        *ppppuVar27 != (undefined8 ***)0x2)) &&
       (*(int *)((long)ppppuVar27 + 0x13c) == uStack_358._4_4_)) {
      pppppuStack_200 = (undefined8 *****)(ppppuVar27 + 0x14);
      ppppppuStack_1f8 =
           (undefined8 ******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppppuStack_278 = &pppppuStack_200;
      pppppuStack_280 = (undefined8 *****)s_buffered___108ac7e39;
      ppppplStack_298 = (long *****)&pppppuStack_280;
      puStack_290 = &UNK_10b208fd0;
      pppppplStack_1d8 = &ppppplStack_298;
      ppppppcStack_1e0 = (char ******)0x1;
      uStack_1d0 = 1;
      uStack_1cf = 0;
      uStack_1c8 = (undefined1)
                   (
                   ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                   + 0x30);
      uStack_1c7 = (undefined7)
                   ((ulong)(
                           ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                           + 0x30) >> 8);
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                 ,&ppppppcStack_1e0);
      lVar9 = 
      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        auStack_240._0_4_ = 5;
        stack0xfffffffffffffdc4 = 0;
        uStack_238 = (undefined7)
                     *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                      + 0x20);
        uStack_231 = (undefined1)
                     ((ulong)*(undefined8 *)
                              (
                              ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                              + 0x20) >> 0x38);
        uStack_230 = (undefined7)
                     *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                      + 0x28);
        uStack_229 = (undefined1)
                     ((ulong)*(undefined8 *)
                              (
                              ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                              + 0x28) >> 0x38);
        puVar24 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar24 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar21 = (**(code **)(puVar24 + 0x18))(puVar5,auStack_240);
        if (iVar21 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar9,puVar5,puVar24,auStack_240,&ppppppcStack_1e0);
        }
      }
      goto LAB_10080faf0;
    }
LAB_100810268:
    puVar24 = &UNK_10b3fa588;
  }
  else {
LAB_10080f7b4:
    lVar9 = 
    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack_290 = *(undefined **)
                     (
                     ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                     + 0x20);
      uStack_288 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
                    + 0x28);
      ppppplStack_298 = (long *****)0x5;
      puVar24 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar24 = &UNK_10b3c24c8;
      }
      puVar5 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar5 = &UNK_109adfc03;
      }
      iVar21 = (**(code **)(puVar24 + 0x18))(puVar5,&ppppplStack_298);
      lVar10 = 
      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17hd1e9917ab008977cE
      ;
      if (iVar21 != 0) {
        lVar22 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                           (&pppppuStack_360);
        pppppuStack_200 = (undefined8 *****)(lVar22 + 0xa0);
        ppppppuStack_1f8 =
             (undefined8 ******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        ppppppuStack_278 = &pppppuStack_200;
        pppppuStack_280 = (undefined8 *****)s_buffered___108ac7e39;
        ppppplStack_258 = (long *****)&pppppuStack_280;
        ppppppuStack_250 = (undefined8 ******)&UNK_10b208fd0;
        pppppplStack_1d8 = &ppppplStack_258;
        ppppppcStack_1e0 = (char ******)0x1;
        uStack_1d0 = 1;
        uStack_1cf = 0;
        uStack_1c8 = (undefined1)(lVar10 + 0x30);
        uStack_1c7 = (undefined7)((ulong)(lVar10 + 0x30) >> 8);
        uStack_238 = SUB87(puStack_290,0);
        uStack_231 = (undefined1)((ulong)puStack_290 >> 0x38);
        auStack_240._0_4_ = SUB84(ppppplStack_298,0);
        stack0xfffffffffffffdc4 = (int)((ulong)ppppplStack_298 >> 0x20);
        uStack_230 = (undefined7)uStack_288;
        uStack_229 = (undefined1)((ulong)uStack_288 >> 0x38);
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar9,puVar5,puVar24,auStack_240,&ppppppcStack_1e0);
      }
    }
LAB_10080faf0:
    auStack_240._0_4_ = (undefined4)uStack_358;
    stack0xfffffffffffffdc4 = uStack_358._4_4_;
    if (((pppppuStack_360[2] <= (undefined8 ****)((ulong)uStack_358 & 0xffffffff)) ||
        (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
        *ppppuVar27 == (undefined8 ***)0x2)) ||
       (*(int *)((long)ppppuVar27 + 0x13c) != uStack_358._4_4_)) goto LAB_100810268;
    pppuVar26 = ppppuVar27[0x14];
    if ((undefined8 ***)(ulong)*(uint *)(ppppuVar27 + 0x28) < pppuVar26) {
      if ((undefined8 ***)0xfffffffe < pppuVar26) {
        pppuVar26 = (undefined8 ***)0xffffffff;
      }
      *(int *)(ppppuVar27 + 0x28) = (int)pppuVar26;
      if (((pppppuStack_360[2] <= (undefined8 ****)((ulong)uStack_358 & 0xffffffff)) ||
          (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
          *ppppuVar27 == (undefined8 ***)0x2)) ||
         (*(int *)((long)ppppuVar27 + 0x13c) != uStack_358._4_4_)) goto LAB_100810268;
      if ((*(byte *)((long)ppppuVar27 + 0x14c) & 1) == 0) {
        func_0x000105a818f0(lVar31 + 0x198,&pppppuStack_360);
      }
    }
    if (cVar20 == '\0') {
LAB_10080fc04:
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b636ac8 - 1 < 2 ||
           ((bRam000000010b636ac8 != 0 &&
            (cVar20 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                                ), cVar20 != '\0')))))) &&
         (iVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                             ), iVar21 != 0)) {
        auStack_240._0_4_ = (undefined4)uStack_358;
        stack0xfffffffffffffdc4 = uStack_358._4_4_;
        if ((((undefined8 ****)((ulong)uStack_358 & 0xffffffff) < pppppuStack_360[2]) &&
            (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
            *ppppuVar27 != (undefined8 ***)0x2)) &&
           (*(int *)((long)ppppuVar27 + 0x13c) == uStack_358._4_4_)) {
          pppppplStack_268 =
               (long ******)
               CONCAT44(pppppplStack_268._4_4_,*(undefined4 *)((long)ppppuVar27 + 0x9c));
          if (*(int *)((long)ppppuVar27 + 0x13c) == uStack_358._4_4_) {
            ppppppcStack_1e0 = (char ******)&pppppplStack_268;
            pppppplStack_1d8 =
                 (long ******)
                 &
                 __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
            ;
            uStack_1d0 = SUB81(ppppuVar27 + 0x14,0);
            uStack_1cf = (undefined7)((ulong)(ppppuVar27 + 0x14) >> 8);
            uStack_1c8 = 0x78;
            uStack_1c7 = 0x1055b48;
            ppppppuStack_278 = &ppppppcStack_1e0;
            pppppuStack_280 = (undefined8 *****)s_available_____buffered___108ac7e47;
            ppppplStack_258 = (long *****)&pppppuStack_280;
            ppppppuStack_250 = (undefined8 ******)&UNK_10b208fd0;
            auStack_240._0_4_ = 1;
            stack0xfffffffffffffdc4 = 0;
            uStack_238 = SUB87(&ppppplStack_258,0);
            uStack_231 = (undefined1)((ulong)&ppppplStack_258 >> 0x38);
            uStack_230 = 1;
            uStack_229 = 0;
            uStack_228 = (undefined7)
                         (
                         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                         + 0x30);
            uStack_221 = (undefined1)
                         ((ulong)(
                                 ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                                 + 0x30) >> 0x38);
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                       ,auStack_240);
            lVar9 = 
            ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              ppppppuStack_1f8 =
                   *(undefined8 *******)
                    (
                    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                    + 0x20);
              uStack_1f0 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                            + 0x28);
              pppppuStack_200 = (undefined8 *****)0x5;
              puVar24 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar24 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar21 = (**(code **)(puVar24 + 0x18))(puVar5,&pppppuStack_200);
              if (iVar21 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar9,puVar5,puVar24,&pppppuStack_200,auStack_240);
              }
            }
            goto LAB_10080fec4;
          }
        }
      }
      else {
        lVar9 = 
        ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppppuStack_278 =
               *(undefined8 *******)
                (
                ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                + 0x20);
          uStack_270 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
                        + 0x28);
          pppppuStack_280 = (undefined8 *****)0x5;
          puVar24 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar24 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar21 = (**(code **)(puVar24 + 0x18))(puVar5,&pppppuStack_280);
          lVar10 = 
          ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9send_data10__CALLSITE17he30aaacd4b4d1de3E
          ;
          if (iVar21 != 0) {
            lVar22 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                               (&pppppuStack_360);
            uStack_244 = *(undefined4 *)(lVar22 + 0x9c);
            lVar22 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                               (&pppppuStack_360);
            ppppppcStack_1e0 = (char ******)&uStack_244;
            pppppplStack_1d8 =
                 (long ******)
                 &
                 __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
            ;
            uStack_1d0 = (undefined1)(lVar22 + 0xa0);
            uStack_1cf = (undefined7)((ulong)(lVar22 + 0xa0) >> 8);
            uStack_1c8 = 0x78;
            uStack_1c7 = 0x1055b48;
            ppppppuStack_250 = &ppppppcStack_1e0;
            ppppplStack_258 = (long *****)s_available_____buffered___108ac7e47;
            pppppplStack_268 = &ppppplStack_258;
            puStack_260 = &UNK_10b208fd0;
            auStack_240._0_4_ = 1;
            stack0xfffffffffffffdc4 = 0;
            uStack_238 = SUB87(&pppppplStack_268,0);
            uStack_231 = (undefined1)((ulong)&pppppplStack_268 >> 0x38);
            uStack_230 = 1;
            uStack_229 = 0;
            uStack_228 = (undefined7)(lVar10 + 0x30);
            uStack_221 = (undefined1)((ulong)(lVar10 + 0x30) >> 0x38);
            ppppppuStack_1f8 = ppppppuStack_278;
            pppppuStack_200 = pppppuStack_280;
            uStack_1f0 = uStack_270;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar9,puVar5,puVar24,&pppppuStack_200,auStack_240);
          }
        }
LAB_10080fec4:
        auStack_240._0_4_ = (undefined4)uStack_358;
        stack0xfffffffffffffdc4 = uStack_358._4_4_;
        if ((((undefined8 ****)((ulong)uStack_358 & 0xffffffff) < pppppuStack_360[2]) &&
            (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
            *ppppuVar27 != (undefined8 ***)0x2)) &&
           (*(int *)((long)ppppuVar27 + 0x13c) == uStack_358._4_4_)) {
          uStack_1d0 = (undefined1)lStack_2f8;
          uVar29 = uStack_1d0;
          uStack_1cf = (undefined7)((ulong)lStack_2f8 >> 8);
          uVar11 = uStack_1cf;
          uStack_1c8 = (undefined1)uStack_2f0;
          uVar12 = uStack_1c8;
          uStack_1c7 = (undefined7)(uStack_2f0 >> 8);
          uVar13 = uStack_1c7;
          uStack_1c0 = (undefined1)uStack_2e8;
          uVar14 = uStack_1c0;
          uStack_1bf = (undefined7)(uStack_2e8 >> 8);
          uStack_1af = uStack_1bf;
          uStack_1b8 = (undefined1)lStack_2e0;
          uVar15 = uStack_1b8;
          uStack_1b7 = (undefined7)((ulong)lStack_2e0 >> 8);
          uVar16 = uStack_1b7;
          uStack_1b0 = (undefined1)iStack_2d8;
          uVar17 = uStack_1b0;
          if ((*(int *)((long)ppppuVar27 + 0x9c) < 1) && (ppppuVar27[0x14] != (undefined8 ***)0x0))
          {
            uStack_210 = (undefined7)
                         (CONCAT17(uStack_2d1,
                                   CONCAT16(cStack_2d2,
                                            CONCAT15(uStack_2d3,CONCAT14(uStack_2d4,iStack_2d8))))
                         >> 8);
            auStack_240._4_3_ = (undefined3)((ulong)uStack_358 >> 0x20);
            uStack_239 = SUB81(pppppplStack_300,0);
            uStack_238 = (undefined7)((ulong)pppppplStack_300 >> 8);
            uStack_1c7 = uStack_238;
            uStack_1c0 = uStack_1d0;
            uStack_1cf = (undefined7)CONCAT44(stack0xfffffffffffffdc4,(undefined4)uStack_358);
            uStack_1c8 = uStack_239;
            uStack_1d0 = 0;
            uStack_1b7 = uVar13;
            uStack_1b0 = uVar14;
            uStack_1bf = uVar11;
            uStack_1b8 = uVar12;
            uStack_1a7 = uVar16;
            uStack_1a8 = uVar15;
            uStack_1a0 = uVar17;
            uStack_19f = uStack_210;
            ppppppcStack_1e0 = (char ******)0x0;
            pppuVar26 = *(undefined8 ****)(lVar30 + 0x38);
            uStack_231 = uVar29;
            uStack_230 = uVar11;
            uStack_229 = uVar12;
            uStack_228 = uVar13;
            uStack_221 = uVar14;
            uStack_220 = uStack_1af;
            uStack_219 = uVar15;
            uStack_218 = uVar16;
            uStack_211 = uVar17;
            FUN_100f1360c(lVar3,pppuVar26,&ppppppcStack_1e0);
            if (*(int *)ppppuVar27 == 1) {
              if ((*(undefined8 ****)(lVar30 + 0x28) <= ppppuVar27[2]) ||
                 (plVar25 = (long *)(*(long *)(lVar30 + 0x20) + (long)ppppuVar27[2] * 0x170),
                 *plVar25 == 2)) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5715,0xb,&UNK_10b223418);
                goto LAB_1008102e4;
              }
              *plVar25 = 1;
              plVar25[1] = (long)pppuVar26;
              ppppuVar27[2] = pppuVar26;
            }
            else {
              *ppppuVar27 = (undefined8 ***)0x1;
              ppppuVar27[1] = pppuVar26;
              ppppuVar27[2] = pppuVar26;
            }
          }
          else {
            pppppplStack_1d8 = pppppplStack_300;
            uStack_1af = (undefined7)
                         (CONCAT17(uStack_2d1,
                                   CONCAT16(cStack_2d2,
                                            CONCAT15(uStack_2d3,CONCAT14(uStack_2d4,iStack_2d8))))
                         >> 8);
            ppppppcStack_1e0 = (char ******)((ulong)ppppppcStack_1e0 & 0xffffffffffffff00);
            FUN_100805848(lVar31 + 0x198,&ppppppcStack_1e0,lVar3,&pppppuStack_360,lVar4);
          }
          if (auStack_2c0 != (undefined1  [8])0x2) {
            pppppplVar23 = pppppplStack_2b8;
            if (((ulong)auStack_2c0 & 1) != 0) {
              pppppplVar23 = (long ******)
                             ((long)pppppplStack_2b8 +
                             (*(long *)(lStack_2b0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
            }
            (**(code **)(lStack_2b0 + 0x68))(pppppplVar23,&lStack_2a8);
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (lStack_2a0 != 0)) {
            auStack_240._0_4_ = (undefined4)*(undefined8 *)(lStack_2a0 + 0x10);
            stack0xfffffffffffffdc4 = (int)((ulong)*(undefined8 *)(lStack_2a0 + 0x10) >> 0x20);
            uStack_238 = (undefined7)*(undefined8 *)(lStack_2a0 + 0x18);
            uStack_231 = (undefined1)((ulong)*(undefined8 *)(lStack_2a0 + 0x18) >> 0x38);
            ppppppcStack_1e0 = (char ******)auStack_240;
            pppppplStack_1d8 = (long ******)&DAT_100c7b3a0;
            FUN_1011d7d74(auStack_2c0,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppcStack_1e0);
          }
          FUN_100dddd8c(auStack_2c0);
          uVar29 = 0xf;
LAB_10080ffe0:
          pppppplStack_1d8 = (long ******)uStack_358;
          ppppppcStack_1e0 = (char ******)pppppuStack_360;
          __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                    (lVar31 + 0x18,&ppppppcStack_1e0,iVar6 != 1000000000);
          if (*pcVar2 == '\x01') {
            *pcVar2 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar2,0);
          }
          if (*pcVar1 == '\x01') {
            *pcVar1 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
          }
          return uVar29;
        }
      }
      goto LAB_100810268;
    }
    auStack_240._0_4_ = (undefined4)uStack_358;
    stack0xfffffffffffffdc4 = uStack_358._4_4_;
    if ((((undefined8 ****)((ulong)uStack_358 & 0xffffffff) < pppppuStack_360[2]) &&
        (ppppuVar27 = pppppuStack_360[1] + ((ulong)uStack_358 & 0xffffffff) * 0x2b,
        *ppppuVar27 != (undefined8 ***)0x2)) &&
       (*(int *)((long)ppppuVar27 + 0x13c) == uStack_358._4_4_)) {
      __ZN14rama_http_core2h25proto7streams5state5State10send_close17hc3f40adbf787e2bbE
                (ppppuVar27 + 0xd);
      func_0x000105a812ac(lVar31 + 0x198,0,&pppppuStack_360,lVar31 + 0x18);
      goto LAB_10080fc04;
    }
    puVar24 = &UNK_10b3fa5a0;
  }
  ppppppcStack_1e0 = (char ******)(auStack_240 + 4);
  pppppplStack_1d8 = (long ******)&DAT_105abf048;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b233d4,&ppppppcStack_1e0,puVar24);
LAB_1008102e4:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x1008102e8);
  (*pcVar18)();
}

